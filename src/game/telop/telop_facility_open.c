#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 GameRoutine_18eeb40(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TelopFacilityOpen_Unknown37(_QWORD* a1);
__int64 TelopFacilityOpen_Unknown43(__int64 a1);

__int64 TelopFacilityOpen_Unknown37(_QWORD* a1)
{
  __int64 v2;
  char v3;

  GameRoutine_18eeb40(a1[103]);
  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 208LL))(a1);
  if (a1[99] != 0 && (GameRoutine_173fe30() & 1) != 0 ||
      (GameRoutine_1563280(a1 + 21, v2, 0) & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = *(_BYTE*)(a1[103] + 777LL) ^ 1;
  }
  return v3 & 1;
}

__int64 TelopFacilityOpen_Unknown43(__int64 a1)
{
  float v2;
  float v3;
  char v4;
  float v5;
  float v6;

  GameRoutine_18eeb40(*(_QWORD*)(a1 + 824));
  v2 = *(float*)(a1 + 328);
  v3 = *(float*)(a1 + 420);
  if (v3 < v2) {
    v4 = 0;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v5 = v5 * 8.0;
    }
    v6 = v3 + v5;
    if (v2 >= v6) {
      v2 = v6;
    }
    *(float*)(a1 + 420) = v2;
  }
  else {
    v4 = snd_fnd_WeakHandle_isValid(a1 + 424) ^ 1;
  }
  return v4 & 1;
}

#pragma GCC visibility pop
