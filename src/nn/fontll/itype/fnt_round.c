#include "nn/fontll/itype/fnt.h"

#define FNT_PIXEL_SIZE 64

static F26Dot6 KeepSign(F26Dot6 xin, F26Dot6 x, F26Dot6 fallback) {
  if ((xin ^ x) < 0 && xin != 0) {
    return fallback;
  }
  return x;
}

F26Dot6 fnt_RoundToDoubleGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  F26Dot6 x = xin;
  (void)gs;

  if (x >= 0) {
    x += engine;
    x += FNT_PIXEL_SIZE / 4;
    x &= ~(FNT_PIXEL_SIZE / 2 - 1);
  }
  else {
    x = -x;
    x += engine;
    x += FNT_PIXEL_SIZE / 4;
    x &= ~(FNT_PIXEL_SIZE / 2 - 1);
    x = -x;
  }
  return KeepSign(xin, x, 0);
}

F26Dot6 fnt_RoundDownToGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  F26Dot6 x = xin;
  (void)gs;

  if (x >= 0) {
    x += engine;
    x &= ~(FNT_PIXEL_SIZE - 1);
  }
  else {
    x = -x;
    x += engine;
    x &= ~(FNT_PIXEL_SIZE - 1);
    x = -x;
  }
  return KeepSign(xin, x, 0);
}

F26Dot6 fnt_RoundUpToGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  F26Dot6 x = xin;
  (void)gs;

  if (x >= 0) {
    x += engine;
    x += FNT_PIXEL_SIZE - 1;
    x &= ~(FNT_PIXEL_SIZE - 1);
  }
  else {
    x = -x;
    x += engine;
    x += FNT_PIXEL_SIZE - 1;
    x &= ~(FNT_PIXEL_SIZE - 1);
    x = -x;
  }
  return KeepSign(xin, x, 0);
}

F26Dot6 fnt_RoundToGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  F26Dot6 x = xin;
  (void)gs;

  if (x >= 0) {
    x += engine;
    x += FNT_PIXEL_SIZE / 2;
    x &= ~(FNT_PIXEL_SIZE - 1);
  }
  else {
    x = -x;
    x += engine;
    x += FNT_PIXEL_SIZE / 2;
    x &= ~(FNT_PIXEL_SIZE - 1);
    x = -x;
  }
  return KeepSign(xin, x, 0);
}

F26Dot6 fnt_RoundToHalfGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  F26Dot6 x = xin;
  (void)gs;

  if (x >= 0) {
    x += engine;
    x &= ~(FNT_PIXEL_SIZE - 1);
    x += FNT_PIXEL_SIZE / 2;
  }
  else {
    x = -x;
    x += engine;
    x &= ~(FNT_PIXEL_SIZE - 1);
    x += FNT_PIXEL_SIZE / 2;
    x = -x;
  }
  return KeepSign(
    xin, x, xin > 0 ? FNT_PIXEL_SIZE / 2 : -(FNT_PIXEL_SIZE / 2));
}

F26Dot6 fnt_RoundOff(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  F26Dot6 x = xin;
  (void)gs;

  if (x >= 0) {
    x += engine;
  }
  else {
    x -= engine;
  }
  return KeepSign(xin, x, 0);
}

F26Dot6 fnt_SuperRound(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  fnt_GlobalGraphicStateType* pb = gs->globalGS;
  F26Dot6 x = xin;

  if (x >= 0) {
    x += engine;
    x += pb->threshold - pb->phase;
    x &= pb->periodMask;
    x += pb->phase;
  }
  else {
    x = -x;
    x += engine;
    x += pb->threshold - pb->phase;
    x &= pb->periodMask;
    x += pb->phase;
    x = -x;
  }
  return KeepSign(xin, x, xin > 0 ? pb->phase : -pb->phase);
}

F26Dot6 fnt_Super45Round(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs
) {
  fnt_GlobalGraphicStateType* pb = gs->globalGS;
  F26Dot6 x = xin;

  if (x >= 0) {
    x += engine;
    x += pb->threshold - pb->phase;
    x = vardiv_64(x, pb->period45, 30);
    x &= ~(FNT_PIXEL_SIZE - 1);
    x = varmul_64(x, pb->period45, 30);
    x += pb->phase;
  }
  else {
    x = -x;
    x += engine;
    x += pb->threshold - pb->phase;
    x = vardiv_64(x, pb->period45, 30);
    x &= ~(FNT_PIXEL_SIZE - 1);
    x = varmul_64(x, pb->period45, 30);
    x += pb->phase;
    x = -x;
  }
  return KeepSign(xin, x, xin > 0 ? pb->phase : -pb->phase);
}
