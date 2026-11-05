#pragma once

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t FS_BYTE;
typedef int16_t FS_SHORT;
typedef uint16_t FS_USHORT;
typedef int32_t FS_LONG;
typedef uint32_t FS_ULONG;
typedef int32_t FS_FIXED;
typedef char FILECHAR;

#define SUCCESS 0
#define ERR_FILE_READ 106
#define ERR_MALLOC_FAIL 201
#define ERR_REALLOC_FAIL 202
#define ERR_SCRATCH_RELEASE 204
#define ERR_RESIZE 206
#define ERR_NO_SCALE 302
#define ERR_NO_FONT 303
#define ERR_NO_TTF 304
#define ERR_NO_CURRENT_FONT 305
#define ERR_NAME_TOO_LONG 310
#define ERR_NO_FNTSET 316
#define ERR_TABLE_NOT_FOUND 405
#define ERR_STROKE_PCT 432
#define ERR_PHASED 435
#define ERR_KERN_FONT 441
#define ERR_BAD_FONT_TYPE 436
#define ERR_LTT_VERSION 446
#define ERR_LTT_SIGNATURE 505
#define ERR_CLIENTS_ACTIVE 508
#define ERR_LTT_ADJUSTMENTS 521
#define ERR_NULL_HEAP 523
#define ERR_BOLD_PCT 613
#define ERR_OUTLINE_WIDTH 614
#define ERR_OUTLINE_OPACITY 615

#define FS_VERSION 0x50064

typedef struct FsScratchSpace {
  uint8_t* begin;
  uint8_t* end;
} FsScratchSpace;

typedef struct FsScratchBlock {
  FS_ULONG size;
  FS_BYTE flags;
} FsScratchBlock;

#define FS_SCRATCH_USED 0x10

typedef struct TTF_TABLE_DIR {
  FS_ULONG tag;
  FS_ULONG checksum;
  FS_ULONG offset;
  FS_ULONG length;
} TTF_TABLE_DIR;

typedef struct TTF_HEADER {
  FS_ULONG version;
  FS_USHORT numTables;
  FS_USHORT searchRange;
  FS_USHORT entrySelector;
  FS_USHORT rangeShift;
  TTF_TABLE_DIR tables[1];
} TTF_HEADER;

typedef struct TTC_HEADER {
  FS_ULONG tag;
  FS_ULONG version;
  FS_ULONG numFonts;
  FS_ULONG offsets[1];
} TTC_HEADER;

typedef struct TTF {
  uint8_t _0[0x8];
  FS_BYTE* memptr;
  void* fp;
  uint8_t _18[0x10];
  TTF_HEADER* header;
  struct TTF_HEAD* head;
  struct TTF_HHEA* hhea;
  void* _40;
  struct TTF_MAXP* maxp;
  uint8_t _50[0x38];
  FS_ULONG num_cvt;
  FS_BYTE* loca;
  uint8_t _98[0x10];
  FS_ULONG kern_offset;
  uint8_t _ac[0x1c];
  void* decomp;
  uint8_t _d0[0x18];
  FS_ULONG data_offset;
} TTF;

typedef struct TTF_HEAD {
  FS_ULONG version;
  FS_ULONG fontRevision;
  FS_ULONG checkSumAdjustment;
  FS_ULONG magicNumber;
  FS_USHORT flags;
  FS_USHORT unitsPerEm;
  FS_ULONG created[2];
  FS_ULONG modified[2];
  FS_SHORT xMin;
  FS_SHORT yMin;
  FS_SHORT xMax;
  FS_SHORT yMax;
  FS_USHORT macStyle;
  FS_USHORT lowestRecPPEM;
  FS_SHORT fontDirectionHint;
  FS_SHORT indexToLocFormat;
  FS_SHORT glyphDataFormat;
} TTF_HEAD;

typedef struct TTF_MAXP {
  FS_ULONG version;
  FS_USHORT values[14];
} TTF_MAXP;

typedef struct TTF_HHEA {
  FS_ULONG version;
  FS_SHORT values[10];
  FS_SHORT reserved[4];
  FS_SHORT metricDataFormat;
  FS_USHORT numberOfMetrics;
} TTF_HHEA;

typedef struct LFNT {
  uint8_t _0[0x10];
  FS_BYTE* memptr;
  uint8_t _18[0xc];
  FS_BYTE fontflags;
  uint8_t _25[0x3];
  void* cmap_cache;
  uint8_t _30[0x8];
  TTF* fnt;
  uint8_t _40[0x1];
  FS_BYTE fnt_type;
  FS_BYTE* kern;
} LFNT;

typedef struct CFNT {
  FILECHAR* name;
  uint8_t _8[0x20];
  FS_USHORT glyph_offset;
  uint8_t _2a[0xe];
  LFNT* lfnt;
  uint8_t _40[0x8];
} CFNT;

typedef struct SFNT {
  LFNT* lfnt;
  FS_FIXED s00;
  FS_FIXED s01;
  FS_FIXED s10;
  FS_FIXED s11;
  uint8_t _18[0x10];
  struct FS_SCALED* scaled;
  uint8_t _30[0xd4];
  FS_ULONG ref_lines_done;
  uint8_t _108[0xc];
  FS_ULONG ref_count;
} SFNT;

typedef struct TFNT {
  CFNT* cfnt;
  SFNT* sfnt;
  FS_ULONG cmap_ok;
} TFNT;

typedef struct FNTSET {
  uint8_t _0[0x20];
  FS_USHORT num_fonts;
  CFNT* cfnts;
  LFNT* metric_font;
  uint8_t _38[0x40];
  FS_ULONG ref_count;
} FNTSET;

typedef struct TYPESET {
  FNTSET* fntset;
  FS_USHORT num_fonts;
  TFNT* fonts;
  FS_USHORT cur_font;
} TYPESET;

typedef struct FS_HEAP {
  FS_ULONG* base;
  FS_ULONG size;
  uint8_t _c[0x213c];
  FS_ULONG* first;
  FS_ULONG* last;
} FS_HEAP;

typedef struct FS_SERVER {
  uint8_t _0[0x2018];
  FS_ULONG heap_size;
  FS_ULONG heap_used;
  FS_HEAP heap;
  FS_BYTE heap_owned;
  struct TABLE_PTR_REC* table_ptrs;
  void* cache_head;
  void* cache_entries;
  FsScratchSpace scratch;
  FS_ULONG scratch_used;
  void* scratch_owner;
  uint8_t _41b8[0x8];
  FS_ULONG version;
  FS_ULONG num_clients;
  void* cache;
} FS_SERVER;

typedef struct FS_STATE {
  struct FS_STATE* parent;
  struct FS_GLYPH_LIST* glyphs;
  TYPESET cur_typeset;
  LFNT* cur_lfnt;
  SFNT* cur_sfnt;
  FS_USHORT platform;
  FS_USHORT encoding;
  FS_USHORT variant_platform;
  FS_USHORT variant_encoding;
  FS_LONG error;
  FS_ULONG flags;
  uint8_t _50[0x14];
  FS_FIXED bold_pct;
  FS_ULONG ref_count;
  uint8_t _6c[0x6];
  FS_USHORT outline_width;
  FS_FIXED outline_opacity;
  FS_ULONG num_clients;
  uint8_t _7c[0x4];
  FS_SERVER* server;
} FS_STATE;

struct FS_GLYPHMAP;

int IDIV(int a, int b);
int IMOD(int a, int b);
FILECHAR* FS_strdup(FS_STATE* sp, const FILECHAR* s);
int FS_streq(const FILECHAR* a, const FILECHAR* b);

void* FSS_malloc(FS_STATE* sp, FS_ULONG size);
void* FSS_calloc(FS_STATE* sp, FS_ULONG size);
void* FSS_realloc(FS_STATE* sp, void* p, FS_ULONG size);
FS_LONG FSS_free(FS_STATE* sp, void* p);

FS_LONG __init_heap(FS_STATE* sp, FS_ULONG size, void* heap);
FS_LONG FsScratchSpace_init(
  FsScratchSpace* space, FS_STATE* sp, FS_ULONG size);

FS_LONG FS_init_ex(FS_STATE* sp, void* heap, FS_ULONG heapSize);
FS_LONG FSS_init(FS_STATE* sp, FS_ULONG heapSize);
FS_LONG FSS_exit(FS_STATE* sp);
FS_LONG FS_error(FS_STATE* sp);

FS_LONG FSS_load_font(
  FS_STATE* sp, FILECHAR* path, const void* memory, FS_ULONG index,
  FS_ULONG size, FILECHAR* name);
FS_LONG FSS_set_font(FS_STATE* sp, FILECHAR* name);
FS_LONG FSS_font_metrics(FS_STATE* sp, void* metrics);
FS_LONG FSS_set_cmap(FS_STATE* sp, FS_USHORT platform, FS_USHORT encoding);
FS_LONG map_font(FS_STATE* sp, FS_USHORT platform, FS_USHORT encoding);

FS_LONG FSS_set_scale(FS_STATE* sp, FS_LONG s00, FS_LONG s01, FS_LONG s10,
  FS_LONG s11);
FS_LONG FS_set_bold_pct(FS_STATE* sp, FS_FIXED percent);
FS_LONG FS_set_flags(FS_STATE* sp, FS_LONG flags);
FS_LONG FS_set_outline_width(FS_STATE* sp, FS_USHORT width);

FS_LONG FSS_get_advance(
  FS_STATE* sp, FS_ULONG id, FS_USHORT type, FS_SHORT* pDx, FS_SHORT* pDy,
  FS_FIXED* pFixedDx, FS_FIXED* pFixedDy);
FS_LONG FSS_get_kerning(
  FS_STATE* sp, FS_ULONG id1, FS_ULONG id2, FS_FIXED* pDx, FS_FIXED* pDy);

FS_BYTE* FSS_get_table(
  FS_STATE* sp, FS_ULONG tag, FS_BYTE type, FS_ULONG* pLength);
FS_LONG FSS_free_table(FS_STATE* sp, void* table);

FS_USHORT FSS_map_char(FS_STATE* sp, FS_ULONG id);
FS_USHORT map_char(FS_STATE* sp, FS_ULONG id, FS_ULONG variant);
FS_ULONG inverse_map_char(FS_STATE* sp, FS_ULONG index);
struct FS_GLYPHMAP* FSS_get_glyphmap(
  FS_STATE* sp, FS_ULONG id, FS_USHORT type);
FS_LONG FSS_free_char(FS_STATE* sp, void* p);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

FsScratchSpace* FsScratchSpace_new(FS_STATE* sp, FS_ULONG size);
void FsScratchSpace_done(FsScratchSpace* space, FS_STATE* sp);
void FsScratchSpace_delete(FsScratchSpace* space, FS_STATE* sp);
void* FsScratchSpace_reserve(
  FsScratchSpace* space, FS_STATE* sp, FS_ULONG size);
FS_LONG FsScratchSpace_release(
  FsScratchSpace* space, FS_STATE* sp, void* p);
FS_LONG FsScratchSpace_shrink(
  FsScratchSpace* space, FS_STATE* sp, FS_ULONG* pSize);

typedef struct FsLttAdjustment {
  FS_USHORT start;
  FS_SHORT dx;
  FS_SHORT dy;
} FsLttAdjustment;

typedef struct FsLttComponent {
  FILECHAR* fontName;
  FILECHAR* fileName;
  FS_USHORT _10[7];
  FILECHAR* familyName;
  FILECHAR* styleName;
  FS_ULONG _30[5];
  FS_BYTE bold;
  FS_FIXED boldPercent;
  FS_BYTE italic;
  FS_FIXED italicAngle;
  FS_ULONG _54[4];
  FS_ULONG _64;
  FS_ULONG _68;
  FS_ULONG adjustmentOffset;
  FS_USHORT numAdjustments;
  FsLttAdjustment* adjustments;
  FS_USHORT adjustmentCapacity;
  FS_USHORT _82;
  void* _88;
  FS_STATE* sp;
} FsLttComponent;

typedef struct FsLttGroup {
  FS_USHORT id;
  FS_USHORT type;
} FsLttGroup;

typedef struct FsLtt {
  FS_USHORT version;
  FS_USHORT numStrings;
  FILECHAR** strings;
  FILECHAR* name;
  FILECHAR* subfamilyName;
  FILECHAR* fileVersion;
  FS_USHORT numComponents;
  FS_USHORT metric;
  FsLttComponent* components;
  FS_BYTE _38[0x40];
  FS_ULONG groupOffset;
  FS_USHORT numGroups;
  FsLttGroup* groups;
  FS_USHORT groupCapacity;
  FS_USHORT _8a;
  FS_STATE* sp;
} FsLtt;

FS_LONG FsLttComponent_init(FsLttComponent* component, FS_STATE* sp);
FS_LONG FsLttComponent_done(FS_STATE* sp, FsLttComponent* component);
FS_LONG FsLtt_init(FS_STATE* sp, FsLtt* ltt);
FsLtt* FsLtt_new(FS_STATE* sp);
void FsLtt_done(FsLtt* ltt);
void FsLtt_delete(FsLtt* ltt);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void* fs__malloc(FS_STATE* sp, FS_ULONG size);
void* fs__realloc(FS_STATE* sp, void* p, FS_ULONG size);
FS_LONG fs__free(FS_STATE* sp, void* p);
FS_LONG get_some_back(FS_STATE* sp);
FS_LONG __term_heap(FS_STATE* sp);

FS_LONG TYPESET_init(FS_STATE* sp, TYPESET* typeset, FNTSET* fntset);
FS_LONG TYPESET_clear(FS_STATE* sp, TYPESET* typeset);

#ifdef __cplusplus
}
#endif
