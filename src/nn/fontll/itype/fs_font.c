#include <string.h>

#include "nn/fontll/itype/fs_api.h"

FS_LONG unload_ttf(FS_STATE* sp);
FS_LONG load_fnt(FS_STATE* sp, LFNT* lfnt);
FS_LONG fix_fnt(FS_STATE* sp, LFNT* lfnt);
FS_LONG scale_font(
  FS_STATE* sp, SFNT* sfnt, FS_FIXED s00, FS_FIXED s01, FS_FIXED s10,
  FS_FIXED s11);
FS_LONG FSS_add_font_with_offset(
  FS_STATE* sp, FILECHAR* name, FILECHAR* path, FS_BYTE* memptr,
  FS_ULONG index, FS_ULONG offset, FS_ULONG length);
FS_LONG FSS_font_name_with_offset(
  FS_STATE* sp, FILECHAR* path, FS_BYTE* memptr, FS_ULONG index,
  FS_ULONG nameLength, FILECHAR* name, FS_ULONG offset, FS_ULONG length);
FS_LONG FSS_load_font_with_offset(
  FS_STATE* sp, FILECHAR* path, const void* memptr, FS_ULONG index,
  FS_ULONG size, FILECHAR* name, FS_ULONG offset, FS_ULONG length);

typedef struct FS_GRAYMAP {
  void* cache;
  FS_LONG size;
} FS_GRAYMAP;

typedef struct CFF {
  void* _0;
  void* charstrings;
  void* _10;
  void* subrs;
  FS_BYTE _20[0x88];
  void* fd_select;
} CFF;

static int IsTrueTypeFamily(FS_BYTE type) {
  return type <= 7 && ((1 << type) & 0x83) != 0;
}

void unload_fnt(FS_STATE* sp, LFNT* lfnt) {
  if (lfnt->fnt == NULL) {
    return;
  }

  if (IsTrueTypeFamily(lfnt->fnt_type)) {
    unload_ttf(sp);
    if (lfnt->cmap_cache != NULL) {
      FSS_free(sp, lfnt->cmap_cache);
      lfnt->cmap_cache = NULL;
    }
  }
  lfnt->fnt = NULL;
}

FS_LONG fix_fnt(FS_STATE* sp, LFNT* lfnt) {
  (void)lfnt;
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_LONG FSS_add_font(
  FS_STATE* sp, FILECHAR* name, FILECHAR* path, FS_BYTE* memptr,
  FS_ULONG index
) {
  return FSS_add_font_with_offset(sp, name, path, memptr, index, 0, 0);
}

FS_LONG FSS_font_name(
  FS_STATE* sp, FILECHAR* path, FS_BYTE* memptr, FS_ULONG index,
  FS_ULONG nameLength, FILECHAR* name
) {
  return FSS_font_name_with_offset(
    sp, path, memptr, index, nameLength, name, 0, 0);
}

FS_LONG FSS_load_font(
  FS_STATE* sp, FILECHAR* path, const void* memptr, FS_ULONG index,
  FS_ULONG size, FILECHAR* name
) {
  return FSS_load_font_with_offset(sp, path, memptr, index, size, name, 0, 0);
}

FS_LONG FSS_get_name(
  FS_STATE* sp, FS_ULONG id, FS_ULONG nameLength, FILECHAR* name
) {
  *name = 0;
  FS_USHORT index = map_char(sp, id, 0);
  FS_LONG error = sp->error;
  if (error != SUCCESS || index == 0) {
    return error;
  }

  TYPESET* typeset = &sp->cur_typeset;
  const FILECHAR* fontName = typeset->fonts[typeset->cur_font].cfnt->name;
  if (fontName == NULL) {
    error = ERR_NO_TTF;
  }
  else {
    FS_USHORT length = strlen(fontName);
    if (nameLength <= length) {
      error = ERR_NAME_TOO_LONG;
    }
    else {
      memcpy(name, fontName, length);
      name[length] = 0;
      error = SUCCESS;
    }
  }
  sp->error = error;
  return error;
}

FS_LONG check_sfnt(FS_STATE* sp) {
  SFNT* sfnt = sp->cur_sfnt;
  if (sfnt == NULL) {
    sp->error = ERR_NO_SCALE;
    return ERR_NO_SCALE;
  }

  LFNT* lfnt = sfnt->lfnt;
  if (lfnt == NULL) {
    sp->error = ERR_NO_FONT;
    return ERR_NO_FONT;
  }

  if ((lfnt->fnt != NULL && fix_fnt(sp, lfnt) != SUCCESS)
    || (lfnt->fnt == NULL && load_fnt(sp, lfnt) != SUCCESS)) {
    sp->error = ERR_NO_TTF;
    return ERR_NO_TTF;
  }

  if (sfnt->scaled == NULL) {
    scale_font(sp, sfnt, sfnt->s00, sfnt->s01, sfnt->s10, sfnt->s11);
    if (sp->error != SUCCESS) {
      /* The original frees a pointer known to be null here. */
      FSS_free(sp, NULL);
      return sp->error;
    }
  }
  sp->error = SUCCESS;
  return SUCCESS;
}

void unload_cff(FS_STATE* sp, CFF* cff) {
  if (cff == NULL) {
    return;
  }

  if (cff->charstrings != NULL) {
    FSS_free(sp, cff->charstrings);
  }
  if (cff->subrs != NULL) {
    FSS_free(sp, cff->subrs);
  }
  if (cff->fd_select != NULL) {
    FSS_free(sp, cff->fd_select);
  }
  FSS_free(sp, cff);
}

FS_GRAYMAP* copy_graymap(FS_STATE* sp, const FS_GRAYMAP* graymap) {
  if (graymap == NULL) {
    return NULL;
  }

  FS_GRAYMAP* copy = FSS_malloc(sp, graymap->size);
  if (copy != NULL) {
    memcpy(copy, graymap, graymap->size);
    copy->cache = NULL;
  }
  return copy;
}
