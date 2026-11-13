#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_8224a0(unsigned __int8);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_menu_181f000(__int64 a1, int* a2);
__int64 game_menu_181f2a0(__int64 a1, int* a2);

__int64 game_menu_181f000(__int64 a1, int* a2)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  int v4;
  __int64* v5;

  v2 = ((long long)vcvtas_s32_f32((float)((float)*a2 * 0x1.9000000000000p+6f) *
                                  0x1.0000000000000p-1f));
  v3 = v2 & ~(v2 >> 31);
  if (v3 >= 100) {
    v4 = 100;
  }
  else {
    v4 = v3;
  }
  v5 = game_8224a0(0x10u);
  return game_VariableManager_SetFlag((__int64)v5, v4);
}

__int64 game_menu_181f2a0(__int64 a1, int* a2)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  int v4;
  __int64* v5;

  v2 = ((long long)vcvtas_s32_f32((float)((float)*a2 * 0x1.9000000000000p+6f) /
                                  0x1.4000000000000p+3f));
  v3 = v2 & ~(v2 >> 31);
  if (v3 >= 100) {
    v4 = 100;
  }
  else {
    v4 = v3;
  }
  v5 = game_8224a0(0x11u);
  return game_VariableManager_SetFlag((__int64)v5, v4);
}

#pragma GCC visibility pop
