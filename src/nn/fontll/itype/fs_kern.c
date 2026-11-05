#include "nn/fontll/itype/fs_api.h"

void ttf_read_buf(
  FS_STATE* sp, TTF* ttf, FS_ULONG offset, FS_ULONG size, FS_BYTE* buffer);
void* ttf_read(FS_STATE* sp, TTF* ttf, FS_ULONG offset, FS_ULONG size);
FS_LONG load_fnt(FS_STATE* sp, LFNT* lfnt);
FS_LONG fix_fnt(FS_STATE* sp, LFNT* lfnt);
FS_LONG muldiv_64(FS_LONG a, FS_LONG b, FS_LONG c);
FS_LONG load_kerning(FS_STATE* sp, LFNT* lfnt);

#define FNT_TYPE_PFR 6

static FS_USHORT GetUshort(const FS_BYTE* p) {
  return (FS_USHORT)(p[0] << 8 | p[1]);
}

FS_LONG load_kerning(FS_STATE* sp, LFNT* lfnt) {
  if (lfnt == NULL) {
    sp->error = ERR_NO_FONT;
    return ERR_NO_FONT;
  }

  TTF* ttf = lfnt->fnt;
  if (ttf == NULL) {
    sp->error = ERR_NO_TTF;
    return ERR_NO_TTF;
  }
  if (lfnt->kern != NULL) {
    return SUCCESS;
  }

  FS_ULONG offset = ttf->kern_offset;
  if (offset == 0) {
    return SUCCESS;
  }

  if (lfnt->memptr != NULL) {
    FS_BYTE* kern = lfnt->memptr + offset;
    FS_USHORT numTables = GetUshort(kern + 2);
    FS_BYTE* subtable = kern + 4;
    for (FS_USHORT i = 0; i < numTables; ++i) {
      if ((subtable[0] | subtable[1]) == 0) {
        lfnt->kern = subtable + 6;
        return SUCCESS;
      }
      subtable += 256 * subtable[2] + subtable[3];
    }
    return SUCCESS;
  }

  FS_BYTE header[4];
  ttf_read_buf(sp, ttf, offset, 4, header);
  FS_USHORT numTables = GetUshort(header + 2);
  if (numTables == 0) {
    return SUCCESS;
  }

  FS_ULONG position = offset + 4;
  do {
    FS_BYTE subtable[6];
    ttf_read_buf(sp, ttf, position, 6, subtable);
    FS_USHORT length = GetUshort(subtable + 2);
    if ((subtable[0] | subtable[1]) == 0) {
      lfnt->kern = ttf_read(sp, ttf, position + 6, length - 6);
      return SUCCESS;
    }
    position += length;
  } while (--numTables != 0);
  return SUCCESS;
}

void delete_kern(FS_STATE* sp, LFNT* lfnt) {
  if (lfnt->kern != NULL && lfnt->memptr == NULL) {
    FSS_free(sp, lfnt->kern);
    lfnt->kern = NULL;
  }
}

FS_LONG FSS_get_kerning(
  FS_STATE* sp, FS_ULONG id1, FS_ULONG id2, FS_FIXED* pDx, FS_FIXED* pDy
) {
  *pDy = 0;
  *pDx = 0;

  FS_USHORT left = map_char(sp, id1, 0);
  if (sp->error != SUCCESS) {
    return sp->error;
  }

  SFNT* sfnt = sp->cur_sfnt;
  if (sfnt == NULL) {
    sp->error = ERR_NO_SCALE;
    return ERR_NO_SCALE;
  }

  FS_USHORT right = map_char(sp, id2, 0);
  if (sp->error != SUCCESS) {
    return sp->error;
  }
  if (sp->cur_sfnt != sfnt) {
    return SUCCESS;
  }

  LFNT* lfnt = sfnt->lfnt;
  if (lfnt == NULL) {
    sp->error = ERR_NO_FONT;
    return ERR_NO_FONT;
  }
  if (lfnt->fnt_type == FNT_TYPE_PFR
    || (lfnt->fnt != NULL && fix_fnt(sp, lfnt) != SUCCESS)
    || (lfnt->fnt == NULL && load_fnt(sp, lfnt) != SUCCESS)) {
    sp->error = ERR_KERN_FONT;
    return SUCCESS;
  }

  TTF* ttf = lfnt->fnt;
  if (ttf->kern_offset == 0) {
    return SUCCESS;
  }

  FS_BYTE* kern = lfnt->kern;
  if (kern == NULL) {
    load_kerning(sp, lfnt);
    kern = lfnt->kern;
    if (kern == NULL) {
      return SUCCESS;
    }
  }

  FS_USHORT numPairs = GetUshort(kern);
  if (numPairs == 0) {
    return SUCCESS;
  }

  const FS_BYTE* pairs = kern + 8;
  FS_LONG low = 0;
  FS_LONG high = numPairs - 1;
  while (low <= high) {
    FS_USHORT middle = (FS_USHORT)(low + high) >> 1;
    const FS_BYTE* pair = pairs + 6 * middle;
    FS_USHORT pairLeft = GetUshort(pair);
    FS_USHORT pairRight = GetUshort(pair + 2);

    if (pairLeft > left || (pairLeft == left && pairRight > right)) {
      high = middle - 1;
    }
    else if (pairLeft < left || (pairLeft == left && pairRight < right)) {
      low = middle + 1;
    }
    else {
      if (pairRight == right) {
        FS_SHORT value = (FS_SHORT)(pair[4] << 8) | pair[5];
        FS_USHORT unitsPerEm = ttf->head->unitsPerEm;
        *pDx = muldiv_64(sfnt->s00, value, unitsPerEm);
        *pDy = muldiv_64(sfnt->s10, value, unitsPerEm);
      }
      return SUCCESS;
    }
  }
  return SUCCESS;
}
