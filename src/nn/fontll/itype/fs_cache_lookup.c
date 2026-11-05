#include "nn/fontll/itype/fs_api.h"

void* find_in_cache(FS_STATE* sp, FS_USHORT type, FS_ULONG id);
void* save_to_cache(FS_STATE* sp, FS_USHORT type, FS_ULONG id, void* data);
void* get_embedded_bitmap(FS_STATE* sp, SFNT* sfnt, FS_ULONG index);

#define FLAGS_DEFAULT_CSM_OFF 0x400000

static FS_USHORT AdvanceCacheType(FS_USHORT type) {
  if ((type & 0x400) != 0) {
    return 0x7f33;
  }
  if ((type & 0x800) != 0) {
    return 0x7f31;
  }
  if ((type & 0x200) != 0) {
    return 0x7f39;
  }
  if ((type & 0x4) != 0) {
    return 0x7f4b;
  }
  if ((type & 0x8) != 0) {
    return 0x7f43;
  }
  if ((type & 0x2) != 0) {
    return 0x7f5b;
  }
  if ((type & 0x1) != 0) {
    return 0x7f3d;
  }
  return 0;
}

void* get_bitmap(FS_STATE* sp, FS_ULONG id, FS_ULONG index) {
  LFNT* lfnt = sp->cur_lfnt;
  SFNT* sfnt = sp->cur_sfnt;
  FS_ULONG flags = sp->flags;
  (void)id;

  sp->error = SUCCESS;
  if (lfnt == NULL || sfnt == NULL) {
    return NULL;
  }

  sp->flags = flags & ~FLAGS_DEFAULT_CSM_OFF;
  if (lfnt->fnt_type > 1) {
    sp->flags = flags;
    return NULL;
  }

  void* bitmap = get_embedded_bitmap(sp, sfnt, index);
  if (sp->error != SUCCESS) {
    bitmap = NULL;
  }
  sp->flags = flags;
  return bitmap;
}

void* find_advance_in_cache(FS_STATE* sp, FS_ULONG id, FS_USHORT type) {
  FS_USHORT cacheType = AdvanceCacheType(type);
  if (cacheType == 0) {
    return NULL;
  }
  return find_in_cache(sp, cacheType, id);
}

void* save_advance_to_cache(
  FS_STATE* sp, FS_ULONG id, FS_USHORT type, void* data
) {
  FS_USHORT cacheType = AdvanceCacheType(type);
  if (cacheType == 0) {
    return NULL;
  }
  return save_to_cache(sp, cacheType, id, data);
}

void* find_graymap_in_cache(FS_STATE* sp, FS_ULONG id, FS_USHORT type) {
  return find_in_cache(sp, type, id);
}

void* save_graymap_to_cache(
  FS_STATE* sp, FS_ULONG id, void* data, FS_USHORT type
) {
  return save_to_cache(sp, type, id, data);
}
