#include <string.h>

#include "nn/fontll/itype/fs_api.h"

#define TAG_OS2 0x4f532f32

#define SWAPW(a) ((FS_USHORT)__builtin_bswap16(a))
#define SWAPL(a) ((FS_ULONG)__builtin_bswap32(a))

void* ttf_read(FS_STATE* sp, TTF* ttf, FS_ULONG offset, FS_ULONG size);
void get_os2(void* os2, const void* data);
FS_LONG FS_seek(FS_STATE* sp, void* file, FS_ULONG offset, FS_ULONG origin);
FS_ULONG FS_read(FS_STATE* sp, void* file, void* buffer, FS_ULONG size);

static const TTF_TABLE_DIR* FindTable(const TTF* ttf, FS_ULONG tag) {
  const TTF_HEADER* header = ttf->header;
  for (FS_ULONG i = header->numTables; i != 0; --i) {
    const TTF_TABLE_DIR* table = &header->tables[header->numTables - i];
    if (table->tag == tag) {
      return table;
    }
  }
  return NULL;
}

void ttf_read_buf(
  FS_STATE* sp, TTF* ttf, FS_ULONG offset, FS_ULONG size, FS_BYTE* buffer
) {
  if (size == 0) {
    return;
  }

  if (ttf->memptr != NULL) {
    memcpy(buffer, ttf->memptr + offset + ttf->data_offset, size);
  }
  else if (ttf->fp != NULL) {
    FS_seek(sp, ttf->fp, ttf->data_offset + offset, 0);
    FS_ULONG count = FS_read(sp, ttf->fp, buffer, size);
    if (size != count) {
      memset(buffer + count, 0, size - count);
    }
  }
}

void* ttf_read(FS_STATE* sp, TTF* ttf, FS_ULONG offset, FS_ULONG size) {
  if (size == 0) {
    return NULL;
  }

  FS_BYTE* buffer;
  if (ttf->memptr != NULL) {
    buffer = FSS_malloc(sp, size);
    if (buffer != NULL) {
      memcpy(buffer, ttf->memptr + offset + ttf->data_offset, size);
    }
  }
  else if (ttf->fp != NULL) {
    buffer = FSS_malloc(sp, size);
    if (buffer != NULL) {
      FS_seek(sp, ttf->fp, ttf->data_offset + offset, 0);
      if (FS_read(sp, ttf->fp, buffer, size) != size) {
        memset(buffer, 0, size);
      }
    }
  }
  else {
    buffer = NULL;
  }

  if (sp->error != SUCCESS) {
    FSS_free(sp, buffer);
    return NULL;
  }
  return buffer;
}

void* get_os2_table(FS_STATE* sp, TTF* ttf) {
  void* os2 = FSS_calloc(sp, 100);
  if (os2 == NULL) {
    return NULL;
  }

  const TTF_TABLE_DIR* table = FindTable(ttf, TAG_OS2);
  if (table == NULL) {
    sp->error = ERR_TABLE_NOT_FOUND;
  }
  else {
    void* data = ttf_read(sp, ttf, table->offset, table->length);
    if (data != NULL && sp->error == SUCCESS) {
      get_os2(os2, data);
      FSS_free(sp, data);
      return os2;
    }
  }

  FSS_free(sp, os2);
  return NULL;
}

void* get_ttf_table(FS_STATE* sp, TTF* ttf, FS_ULONG tag) {
  const TTF_TABLE_DIR* table = FindTable(ttf, tag);
  if (table == NULL) {
    sp->error = ERR_TABLE_NOT_FOUND;
    return NULL;
  }
  return ttf_read(sp, ttf, table->offset, table->length);
}

void swap_ttc_header(TTC_HEADER* header) {
  header->tag = SWAPL(header->tag);
  header->version = SWAPL(header->version);
  header->numFonts = SWAPL(header->numFonts);
  for (FS_ULONG i = 0; i < header->numFonts; ++i) {
    header->offsets[i] = SWAPL(header->offsets[i]);
  }
}

void swap_ttf_header(TTF_HEADER* header) {
  FS_ULONG version = header->version;
  FS_USHORT numTables;
  if (version == 0x10000 || version == 0x74727565 || version == 0x20000) {
    numTables = header->numTables;
  }
  else {
    numTables = SWAPW(header->numTables);
  }
  if (numTables > 50) {
    return;
  }

  header->version = SWAPL(version);
  header->numTables = SWAPW(header->numTables);
  header->searchRange = SWAPW(header->searchRange);
  header->entrySelector = SWAPW(header->entrySelector);
  header->rangeShift = SWAPW(header->rangeShift);

  for (FS_USHORT i = 0; i < numTables; ++i) {
    TTF_TABLE_DIR* table = &header->tables[i];
    table->tag = SWAPL(table->tag);
    table->checksum = SWAPL(table->checksum);
    table->offset = SWAPL(table->offset);
    table->length = SWAPL(table->length);
  }
}

FS_LONG get_ttf_table_info(
  FS_STATE* sp, TTF* ttf, FS_ULONG tag, FS_ULONG* pOffset, FS_ULONG* pLength
) {
  if (pLength != NULL) {
    *pLength = 0;
  }
  if (pOffset != NULL) {
    *pOffset = 0;
  }

  const TTF_TABLE_DIR* table = FindTable(ttf, tag);
  if (table == NULL) {
    sp->error = ERR_TABLE_NOT_FOUND;
    return 0;
  }

  if (pLength != NULL) {
    *pLength = table->length;
  }
  if (pOffset != NULL) {
    *pOffset = table->offset;
  }
  return 1;
}

void swap_maxp(TTF_MAXP* maxp) {
  maxp->version = SWAPL(maxp->version);
  for (int i = 0; i < 14; ++i) {
    maxp->values[i] = SWAPW(maxp->values[i]);
  }
}

void swap_head(TTF_HEAD* head) {
  head->version = SWAPL(head->version);
  head->fontRevision = SWAPL(head->fontRevision);
  head->checkSumAdjustment = SWAPL(head->checkSumAdjustment);
  head->magicNumber = SWAPL(head->magicNumber);
  head->created[0] = SWAPL(head->created[0]);
  head->created[1] = SWAPL(head->created[1]);
  head->modified[0] = SWAPL(head->modified[0]);
  head->modified[1] = SWAPL(head->modified[1]);
  head->flags = SWAPW(head->flags);
  head->unitsPerEm = SWAPW(head->unitsPerEm);
  head->xMin = SWAPW(head->xMin);
  head->yMin = SWAPW(head->yMin);
  head->xMax = SWAPW(head->xMax);
  head->yMax = SWAPW(head->yMax);
  head->macStyle = SWAPW(head->macStyle);
  head->lowestRecPPEM = SWAPW(head->lowestRecPPEM);
  head->fontDirectionHint = SWAPW(head->fontDirectionHint);
  head->indexToLocFormat = SWAPW(head->indexToLocFormat);
  head->glyphDataFormat = SWAPW(head->glyphDataFormat);
}

void swap_hhea(TTF_HHEA* hhea) {
  hhea->version = SWAPL(hhea->version);
  for (int i = 0; i < 10; ++i) {
    hhea->values[i] = SWAPW(hhea->values[i]);
  }
  hhea->metricDataFormat = SWAPW(hhea->metricDataFormat);
  hhea->numberOfMetrics = SWAPW(hhea->numberOfMetrics);
}

void swap_vhea(TTF_HHEA* vhea) {
  vhea->version = SWAPL(vhea->version);
  for (int i = 0; i < 10; ++i) {
    vhea->values[i] = SWAPW(vhea->values[i]);
  }
  vhea->metricDataFormat = SWAPW(vhea->metricDataFormat);
  vhea->numberOfMetrics = SWAPW(vhea->numberOfMetrics);
}
