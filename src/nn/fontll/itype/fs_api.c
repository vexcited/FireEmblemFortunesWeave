#include <stdlib.h>
#include <string.h>

#include "nn/fontll/itype/fs_api.h"

FS_LONG FS_get_outline_ttf(FS_STATE* sp);
void* make_outline_ttf(FS_STATE* sp, SFNT* sfnt);
FS_LONG scale_font_ttf(
  FS_STATE* sp, SFNT* sfnt, FS_FIXED s00, FS_FIXED s01, FS_FIXED s10,
  FS_FIXED s11);
void* internal_get_outline(FS_STATE* sp, FS_ULONG id);
FS_LONG check_sfnt(FS_STATE* sp);
void* get_bitmap(FS_STATE* sp, FS_ULONG id, FS_USHORT index);
FS_LONG FSS_delete_font(FS_STATE* sp, FILECHAR* name);
FS_LONG TYPESET_destroy(FS_STATE* sp, TYPESET* typeset);

typedef struct FS_GLYPH_LIST {
  FILECHAR* name;
  uint8_t _8[0x8];
  FS_ULONG ref_count;
  uint8_t _14[0x4];
  struct FS_GLYPH_LIST* next;
} FS_GLYPH_LIST;

typedef struct FS_SCALED_FONT {
  uint8_t _0[0x8];
  TTF_MAXP* maxp;
} FS_SCALED_FONT;

typedef struct FS_SCALED {
  uint8_t _0[0xc];
  FS_BYTE flags;
  uint8_t _d[0x3];
  FS_SCALED_FONT* font;
} FS_SCALED;

typedef struct FS_GLYPH_METRICS {
  uint8_t _0[0x10];
  FS_SHORT lsb_x;
  FS_SHORT lsb_y;
  uint8_t _14[0x10];
  FS_SHORT aw_x;
  FS_SHORT aw_y;
  FS_LONG _28;
} FS_GLYPH_METRICS;

#define FNT_TYPE_PFR 6
#define FLAGS_GRAYMAP_FALLBACK 0x2
#define ERR_GLYPHMAP_TYPE 440
#define ERR_GLYPHMAP_UNAVAILABLE 519

FS_LONG get_ref_lines(FS_STATE* sp);
void* get_graymap(FS_STATE* sp, FS_ULONG id, FS_USHORT index, FS_USHORT type);
FS_LONG get_glyph_metrics(
  FS_STATE* sp, FS_SCALED_FONT* font, FS_USHORT index,
  FS_GLYPH_METRICS* metrics);

typedef struct CACHE_OWNER {
  uint8_t _0[0x11c];
  FS_ULONG locked_count;
} CACHE_OWNER;

typedef struct CACHE_ENTRY {
  uint8_t _0[0x18];
  CACHE_OWNER* owner;
  uint8_t _20[0x18];
  FS_ULONG ref_count;
} CACHE_ENTRY;

static int IsTrueTypeFamily(FS_BYTE type) {
  return type <= 7 && ((1 << type) & 0x83) != 0;
}

static void ResetCmap(FS_STATE* sp) {
  for (FS_ULONG i = 0; i < sp->cur_typeset.num_fonts; ++i) {
    sp->cur_typeset.fonts[i].cmap_ok = 0;
  }
  sp->error = SUCCESS;
  sp->platform = 0xffff;
  sp->encoding = 0xffff;
}

static void SetCmap(FS_STATE* sp, FS_USHORT platform, FS_USHORT encoding) {
  if ((platform & encoding) == 0xffff) {
    ResetCmap(sp);
  }
  else {
    map_font(sp, platform, encoding);
  }
}

static FS_USHORT MapCurrentChar(FS_STATE* sp, FS_ULONG id, FS_ULONG variant) {
  FS_USHORT index = map_char(sp, id, variant);
  if (sp->error == SUCCESS) {
    TYPESET* typeset = &sp->cur_typeset;
    index += typeset->fonts[typeset->cur_font].cfnt->glyph_offset;
  }
  return index;
}

static void StartState(FS_STATE* sp) {
  FsScratchSpace_init(&sp->server->scratch, sp, 3000);
  sp->parent = NULL;
  sp->glyphs = NULL;
  sp->server->version = FS_VERSION;
  sp->error = SUCCESS;
  sp->platform = 0xffff;
  sp->encoding = 0xffff;
  sp->variant_platform = 0;
  sp->variant_encoding = 5;
  sp->outline_width = 1;
  sp->outline_opacity = 0x10000;
}

int IDIV(int a, int b) {
  if (a < 0) {
    return ~(~a / b);
  }
  return a / b;
}

int IMOD(int a, int b) {
  int remainder = a % b;
  if (remainder < 0) {
    remainder += b;
  }
  return remainder;
}

FILECHAR* FS_strdup(FS_STATE* sp, const FILECHAR* s) {
  if (s == NULL) {
    return NULL;
  }

  FS_ULONG length = strlen(s);
  if (length == 0) {
    return NULL;
  }

  FILECHAR* copy = FSS_malloc(sp, length + 1);
  if (copy == NULL) {
    return NULL;
  }
  return memcpy(copy, s, length + 1);
}

int FS_streq(const FILECHAR* a, const FILECHAR* b) {
  if (a == NULL || b == NULL) {
    return a == NULL && b == NULL;
  }
  return strcmp(a, b) == 0;
}

FS_LONG FSS_set_cmap(FS_STATE* sp, FS_USHORT platform, FS_USHORT encoding) {
  if ((platform & encoding) == 0xffff) {
    ResetCmap(sp);
    return SUCCESS;
  }

  map_font(sp, platform, encoding);
  return sp->error;
}

FS_LONG FSS_free_char(FS_STATE* sp, void* p) {
  if (p == NULL || *(CACHE_ENTRY**)p == NULL) {
    return FSS_free(sp, p);
  }

  CACHE_ENTRY* entry = *(CACHE_ENTRY**)p;
  CACHE_OWNER* owner = entry->owner;
  if (entry->ref_count != 0) {
    if (--entry->ref_count != 0 || owner == NULL) {
      return SUCCESS;
    }
  }
  else if (owner == NULL) {
    return SUCCESS;
  }

  if (owner->locked_count != 0) {
    --owner->locked_count;
  }
  return SUCCESS;
}

FS_LONG FSS_init(FS_STATE* sp, FS_ULONG heapSize) {
  memset(sp, 0, 0x80);

  sp->server = calloc(1, sizeof(FS_SERVER));
  if (sp->server == NULL) {
    sp->error = ERR_MALLOC_FAIL;
    return ERR_MALLOC_FAIL;
  }

  sp->server->heap_size = heapSize;
  sp->error = __init_heap(sp, heapSize, NULL);
  if (sp->error != SUCCESS) {
    free(sp->server);
    sp->server = NULL;
    return sp->error;
  }

  StartState(sp);
  return SUCCESS;
}

FS_LONG FS_init_ex(FS_STATE* sp, void* heap, FS_ULONG heapSize) {
  if (heap == NULL) {
    sp->error = ERR_NULL_HEAP;
    return ERR_NULL_HEAP;
  }

  memset(sp, 0, 0x80);
  sp->server = heap;

  FS_ULONG size = (heapSize - sizeof(FS_SERVER) + 7) & ~7u;
  if (heapSize - sizeof(FS_SERVER) < size) {
    size = (heapSize - sizeof(FS_SERVER) - 1) & ~7u;
  }

  memset(heap, 0, sizeof(FS_SERVER));
  sp->server->heap_size = size;
  sp->server->scratch_used = 0;
  sp->server->scratch_owner = NULL;
  sp->server->cache = NULL;

  FS_LONG error = __init_heap(sp, size, (uint8_t*)heap + sizeof(FS_SERVER));
  sp->error = error;
  if (error != SUCCESS) {
    sp->server = NULL;
    return error;
  }

  StartState(sp);
  return SUCCESS;
}

FS_LONG FS_error(FS_STATE* sp) {
  return sp->error;
}

FS_LONG FSS_get_scale(
  FS_STATE* sp, FS_FIXED* s00, FS_FIXED* s01, FS_FIXED* s10, FS_FIXED* s11
) {
  TYPESET* typeset = &sp->cur_typeset;
  if (typeset->fntset == NULL) {
    sp->error = ERR_NO_CURRENT_FONT;
    return ERR_NO_CURRENT_FONT;
  }

  SFNT* sfnt = typeset->fonts[typeset->cur_font].sfnt;
  if (sfnt == NULL) {
    sp->error = ERR_NO_SCALE;
    return ERR_NO_SCALE;
  }

  *s00 = sfnt->s00;
  *s01 = sfnt->s01;
  *s10 = sfnt->s10;
  *s11 = sfnt->s11;
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_USHORT FSS_get_design_units(FS_STATE* sp) {
  TYPESET* typeset = &sp->cur_typeset;
  if (typeset->fntset == NULL) {
    sp->error = ERR_NO_CURRENT_FONT;
    return 0;
  }

  TTF* ttf;
  CFNT* cfnt;
  if (typeset->fonts != NULL
    && (cfnt = typeset->fonts[typeset->cur_font].cfnt) != NULL) {
    ttf = cfnt->lfnt->fnt;
  }
  else {
    ttf = typeset->fntset->metric_font->fnt;
  }

  if (ttf == NULL) {
    sp->error = ERR_NO_TTF;
    return 0;
  }
  return ttf->head->unitsPerEm;
}

FS_LONG FSS_get_cmap(FS_STATE* sp, FS_USHORT* platform, FS_USHORT* encoding) {
  *platform = sp->platform;
  *encoding = sp->encoding;
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_LONG FS_set_cmap_variant(
  FS_STATE* sp, FS_USHORT platform, FS_USHORT encoding
) {
  sp->variant_platform = platform;
  sp->variant_encoding = encoding;
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_LONG FS_get_cmap_variant(
  FS_STATE* sp, FS_USHORT* platform, FS_USHORT* encoding
) {
  *platform = sp->variant_platform;
  *encoding = sp->variant_encoding;
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_ULONG FS_get_flags(FS_STATE* sp) {
  return sp->flags;
}

FS_LONG FS_set_bold_pct(FS_STATE* sp, FS_FIXED percent) {
  if ((FS_ULONG)percent > 0x10000) {
    sp->error = ERR_BOLD_PCT;
    return ERR_BOLD_PCT;
  }

  sp->bold_pct = percent;
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_LONG FS_set_stroke_pct(FS_STATE* sp, FS_FIXED percent) {
  (void)percent;
  sp->error = ERR_STROKE_PCT;
  return ERR_STROKE_PCT;
}

FS_LONG FS_set_outline_width(FS_STATE* sp, FS_USHORT width) {
  if (width < 1 || width > 10) {
    sp->error = ERR_OUTLINE_WIDTH;
    return ERR_OUTLINE_WIDTH;
  }

  sp->outline_width = width;
  sp->error = SUCCESS;
  return SUCCESS;
}

FS_LONG FS_set_outline_opacity(FS_STATE* sp, FS_FIXED opacity) {
  if ((FS_ULONG)opacity > 0xa0000) {
    sp->error = ERR_OUTLINE_OPACITY;
    return ERR_OUTLINE_OPACITY;
  }

  sp->outline_opacity = opacity;
  sp->error = SUCCESS;
  return SUCCESS;
}

void* internal_user_get_outline(FS_STATE* sp, FS_ULONG id) {
  return internal_get_outline(sp, id);
}

void* FSS_get_outline(FS_STATE* sp, FS_ULONG id) {
  return internal_get_outline(sp, id);
}

void* FSS_get_bitmap(FS_STATE* sp, FS_ULONG id) {
  FS_USHORT index = map_char(sp, id, 0);
  if (sp->error != SUCCESS) {
    return NULL;
  }
  if (check_sfnt(sp) != SUCCESS) {
    return NULL;
  }

  void* bitmap = get_bitmap(sp, id, index);
  if (sp->error != SUCCESS) {
    return NULL;
  }
  return bitmap;
}

void* FSS_get_phased(FS_STATE* sp, FS_ULONG id) {
  (void)id;
  sp->error = ERR_PHASED;
  return NULL;
}

void* make_outline(FS_STATE* sp, SFNT* sfnt) {
  if (IsTrueTypeFamily(sfnt->lfnt->fnt_type)) {
    return make_outline_ttf(sp, sfnt);
  }

  sp->error = ERR_BAD_FONT_TYPE;
  return NULL;
}

FS_LONG FSS_resize(FS_STATE* sp, FS_ULONG size) {
  FS_LONG error = size == sp->server->heap_size ? SUCCESS : ERR_RESIZE;
  sp->error = error;
  return error;
}

FS_ULONG FS_get_version(FS_STATE* sp) {
  return sp->server->version;
}

FS_ULONG FS_get_heap_used(FS_STATE* sp) {
  if (sp->server == NULL) {
    return 0;
  }
  return sp->server->heap_used;
}

FS_USHORT FSS_map_char(FS_STATE* sp, FS_ULONG id) {
  FS_ULONG flags = sp->flags;
  sp->flags = flags & ~0x4000u;
  FS_USHORT index = MapCurrentChar(sp, id, 0);
  sp->flags = flags;
  return index;
}

FS_ULONG FSS_inverse_map_char(FS_STATE* sp, FS_ULONG index) {
  return inverse_map_char(sp, index);
}

FS_USHORT FSS_map_char_variant(FS_STATE* sp, FS_ULONG id, FS_ULONG variant) {
  FS_ULONG flags = sp->flags;
  sp->flags = flags & ~0x4000u;

  if (variant == 0) {
    FS_USHORT index = MapCurrentChar(sp, id, variant);
    sp->flags = flags;
    return index;
  }

  FS_USHORT platform = sp->platform;
  FS_USHORT encoding = sp->encoding;
  FS_USHORT index = 0;

  SetCmap(sp, sp->variant_platform, sp->variant_encoding);
  if (sp->error == SUCCESS) {
    index = MapCurrentChar(sp, id, variant);
  }
  SetCmap(sp, platform, encoding);

  sp->flags = flags;
  return index;
}

void unload_cmap_cache(FS_STATE* sp, LFNT* lfnt) {
  if (lfnt->cmap_cache != NULL) {
    FSS_free(sp, lfnt->cmap_cache);
    lfnt->cmap_cache = NULL;
  }
}

FS_LONG scale_font(
  FS_STATE* sp, SFNT* sfnt, FS_FIXED s00, FS_FIXED s01, FS_FIXED s10,
  FS_FIXED s11
) {
  if (sfnt->lfnt == NULL) {
    sp->error = ERR_NO_FONT;
    return ERR_NO_FONT;
  }

  FS_BYTE type = sfnt->lfnt->fnt_type;
  if (type >= 2 && type != 7) {
    sp->error = ERR_BAD_FONT_TYPE;
    return ERR_BAD_FONT_TYPE;
  }
  return scale_font_ttf(sp, sfnt, s00, s01, s10, s11);
}

FS_STATE* FSS_new_client(FS_STATE* sp, FS_ULONG size) {
  if (size != 0) {
    sp->error = ERR_RESIZE;
    return NULL;
  }

  FS_STATE* client = FSS_malloc(sp, sizeof(FS_STATE));
  if (client == NULL) {
    sp->error = ERR_MALLOC_FAIL;
    return NULL;
  }

  memset(client, 0, sizeof(FS_STATE));
  client->parent = sp;
  client->platform = 0xffff;
  client->encoding = 0xffff;
  client->variant_encoding = 5;
  client->outline_width = 1;
  client->outline_opacity = 0x10000;
  ++sp->num_clients;
  client->ref_count = 0;
  client->server = sp->server;
  ++client->server->num_clients;
  return client;
}

FS_LONG FSS_end_client(FS_STATE* sp) {
  if (sp->num_clients != 0) {
    sp->error = ERR_CLIENTS_ACTIVE;
    return ERR_CLIENTS_ACTIVE;
  }

  FS_GLYPH_LIST* glyph = sp->glyphs;
  while (glyph != NULL) {
    if (glyph->ref_count >= 2) {
      glyph->ref_count = 1;
    }
    FS_GLYPH_LIST* next = glyph->next;
    FSS_delete_font(sp, glyph->name);
    glyph = next;
  }

  sp->cur_lfnt = NULL;
  sp->cur_sfnt = NULL;
  TYPESET_destroy(sp, &sp->cur_typeset);

  sp->error = SUCCESS;
  if (sp->ref_count != 0) {
    sp->error = ERR_RESIZE;
    return ERR_RESIZE;
  }

  --sp->parent->num_clients;
  --sp->server->num_clients;
  FSS_free(sp->parent, sp);
  return SUCCESS;
}

FS_LONG FSS_set_outline(FS_STATE* sp, void* outline) {
  (void)outline;
  sp->error = SUCCESS;
  return SUCCESS;
}

static void PrepareRefLines(FS_STATE* sp) {
  LFNT* lfnt = sp->cur_lfnt;
  if ((lfnt->fontflags & 2) == 0 && lfnt->fnt_type != FNT_TYPE_PFR
    && sp->cur_sfnt->ref_lines_done == 0) {
    get_ref_lines(sp);
  }
}

void* FSS_get_graymap(FS_STATE* sp, FS_ULONG id) {
  FS_USHORT index = map_char(sp, id, 0);
  if (sp->error != SUCCESS) {
    return NULL;
  }
  if (check_sfnt(sp) != SUCCESS) {
    return NULL;
  }

  PrepareRefLines(sp);
  void* graymap = get_graymap(sp, id, index, 4);
  if (sp->error != SUCCESS) {
    return NULL;
  }
  return graymap;
}

struct FS_GLYPHMAP* FSS_get_glyphmap(
  FS_STATE* sp, FS_ULONG id, FS_USHORT type
) {
  FS_USHORT index = map_char(sp, id, 0);
  if (sp->error != SUCCESS) {
    return NULL;
  }
  if (check_sfnt(sp) != SUCCESS) {
    return NULL;
  }

  PrepareRefLines(sp);
  FS_SCALED* scaled = sp->cur_sfnt->scaled;
  if (scaled == NULL) {
    return NULL;
  }

  int kind;
  if ((type & 0xe) != 0) {
    kind = (type & 0xe00) != 0 ? 3 : 2;
  }
  else {
    kind = (type & 0xe00) != 0;
  }
  if ((type & 1) != 0) {
    kind |= 4;
  }
  if (type == 0x80) {
    kind = 8;
  }

  FS_ULONG flags = sp->flags;
  FS_BYTE scaledFlags = scaled->flags;
  switch (kind) {
    case 2:
    case 3:
      return get_graymap(sp, id, index, type & 0xe);
    case 5:
      if (((sp->flags & FLAGS_GRAYMAP_FALLBACK) | (scaledFlags & 1)) == 0) {
        sp->flags = flags | FLAGS_GRAYMAP_FALLBACK;
        sp->error = ERR_GLYPHMAP_UNAVAILABLE;
        return NULL;
      }
      break;
    case 6:
    case 7:
      if (((sp->flags & FLAGS_GRAYMAP_FALLBACK) | (scaledFlags & 1)) == 0) {
        sp->error = SUCCESS;
        sp->flags = flags | FLAGS_GRAYMAP_FALLBACK;
      }
      if ((scaledFlags & 2) != 0) {
        struct FS_GLYPHMAP* glyphmap =
          get_graymap(sp, id, index, type & 0xe);
        sp->flags = flags;
        return glyphmap;
      }
      break;
    case 8:
      sp->error = ERR_GLYPHMAP_TYPE;
      return NULL;
    default:
      break;
  }

  if (sp->error == SUCCESS) {
    sp->error = ERR_GLYPHMAP_UNAVAILABLE;
  }
  return NULL;
}

FS_LONG FSS_get_glyph_metrics(
  FS_STATE* sp, FS_USHORT index, FS_SHORT* pLsbX, FS_SHORT* pLsbY,
  FS_SHORT* pAdvanceX, FS_SHORT* pAdvanceY
) {
  *pAdvanceY = 0;
  *pAdvanceX = 0;
  *pLsbY = 0;
  *pLsbX = 0;

  if (sp->cur_sfnt == NULL) {
    sp->error = ERR_NO_SCALE;
    return sp->error;
  }
  if (check_sfnt(sp) != SUCCESS) {
    return sp->error;
  }

  FS_SCALED* scaled = sp->cur_sfnt->scaled;
  if (scaled == NULL || scaled->font == NULL) {
    return sp->error;
  }

  FS_GLYPH_METRICS metrics = { 0 };
  if (index < scaled->font->maxp->values[0]) {
    get_glyph_metrics(sp, scaled->font, index, &metrics);
    *pLsbY = metrics.lsb_y;
    *pLsbX = metrics.lsb_x;
    *pAdvanceY = metrics.aw_y;
    *pAdvanceX = metrics.aw_x;
  }
  return sp->error;
}
