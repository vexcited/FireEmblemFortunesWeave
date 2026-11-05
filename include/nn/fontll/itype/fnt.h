#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef int32_t F26Dot6;

typedef struct fnt_GlobalGraphicStateType {
  uint8_t _0[0x8c];
  int32_t periodMask;
  int32_t period45;
  int16_t period;
  int16_t phase;
  int16_t threshold;
} fnt_GlobalGraphicStateType;

typedef struct fnt_LocalGraphicStateType {
  uint8_t _0[0x40];
  fnt_GlobalGraphicStateType* globalGS;
} fnt_LocalGraphicStateType;

int32_t vardiv_64(int32_t a, int32_t b, int32_t shift);
int32_t varmul_64(int32_t a, int32_t b, int32_t shift);

F26Dot6 fnt_RoundToDoubleGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);
F26Dot6 fnt_RoundDownToGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);
F26Dot6 fnt_RoundUpToGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);
F26Dot6 fnt_RoundToGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);
F26Dot6 fnt_RoundToHalfGrid(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);
F26Dot6 fnt_RoundOff(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);
F26Dot6 fnt_SuperRound(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);
F26Dot6 fnt_Super45Round(
  F26Dot6 xin, F26Dot6 engine, fnt_LocalGraphicStateType* gs);

#ifdef __cplusplus
}
#endif
