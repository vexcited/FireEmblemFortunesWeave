#pragma once

#include "nn/fontll/itype/fs_api.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct fnt_ElementType {
  int32_t* x;
  int32_t* y;
  int32_t* ox;
  int32_t* oy;
  int32_t* oox;
  int32_t* ooy;
  FS_BYTE* onCurve;
  FS_USHORT* sp;
  FS_USHORT* ep;
  FS_BYTE* f;
  FS_SHORT nc;
} fnt_ElementType;

typedef struct fsg_OffsetInfo {
  FS_LONG f;
  FS_LONG sp;
  FS_LONG ep;
  FS_LONG oox;
  FS_LONG ooy;
  FS_LONG ox;
  FS_LONG oy;
  FS_LONG x;
  FS_LONG y;
  FS_LONG onCurve;
  FS_LONG _28[6];
  FS_LONG extra[8];
} fsg_OffsetInfo;

typedef struct fnt_ParameterBlock {
  FS_LONG wTCI;
  FS_LONG sWCI;
  FS_LONG scaledSW;
  FS_LONG scanControl;
  FS_LONG instructControl;
  FS_LONG minimumDistance;
  FS_LONG roundState;
  FS_LONG periodMask;
  FS_LONG period45;
  FS_SHORT period;
  FS_SHORT phase;
  FS_SHORT threshold;
  FS_SHORT deltaBase;
  FS_SHORT deltaShift;
  FS_SHORT angleWeight;
  FS_SHORT sW;
  FS_SHORT autoFlip;
} fnt_ParameterBlock;

typedef struct fsg_SplineKey {
  SFNT* sfnt;
  TTF_MAXP* maxp;
  void* _10[2];
  void* _20;
  void* _28;
  void* _30;
  FS_LONG stackBase;
  fsg_OffsetInfo offsets[2];
  FS_LONG _fc;
  fnt_ElementType elements[2];
  FS_USHORT emResolution;
  FS_BYTE _1b2[0xa];
  FS_FIXED pixelsPerEm;
  FS_LONG xStretch;
  FS_LONG rotated;
  FS_LONG _1c8;
  FS_LONG stretched;
  FS_LONG yStretch;
  FS_BYTE _1d4[0x12];
  FS_USHORT fontFlags;
  FS_BYTE _1e8[0x4];
  FS_USHORT state;
  FS_ULONG scanControl;
  FS_ULONG offset_storage;
  FS_ULONG offset_functions;
  FS_ULONG num_cvt;
  FS_USHORT numberOf_LongHorMetrics;
  FS_BYTE _202[0x1b];
  FS_BYTE executePrePgm;
  FS_BYTE _21e[0x3e];
  fnt_ParameterBlock parBlock;
  FS_BYTE _290[0xd8];
  void* elementPointers[9];
} fsg_SplineKey;

typedef struct fsg_TransformRec {
  FS_LONG numerator;
  FS_LONG denominator;
  FS_FIXED fixedScale;
  FS_LONG shift;
} fsg_TransformRec;

typedef struct fs_GlyphInputType {
  void* _0;
  fsg_SplineKey* key;
  void* _10[3];
  SFNT* sfnt;
} fs_GlyphInputType;

typedef struct fs_GlyphInfoType {
  FS_BYTE _0[0x8];
  FS_ULONG workSpaceSize;
  FS_ULONG privateFontSpaceSize;
  FS_BYTE _10[0x30];
  FS_USHORT emResolution;
} fs_GlyphInfoType;

FS_ULONG fsg_WorkSpaceSetOffsets(FS_STATE* sp, fsg_SplineKey* key);

#ifdef __cplusplus
}
#endif
