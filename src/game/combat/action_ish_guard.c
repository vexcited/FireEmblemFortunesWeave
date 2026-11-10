#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_10691b0(PSEUDO_X8, __int64 result);
__int64 CharacterAnimator_1079e10(__int64);
__int64 game_108c8a0(int);
__int64 nn_os_ConvertToTimeSpan(_QWORD, long double);
extern __int64* GameData_212d448[9];
extern __int64 GameData_21d8778;
extern __int64 game_script_hub_g_frame_counter;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void ActionIshGuard_Unknown6(__int64 a1, long double a2);

void ActionIshGuard_Unknown6(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  long double v8;
  __int128 v9;
  __int64 v10;
  int v11;
  long double v12;
  int v13;
  int v14;
  long double v15;

  if ((*(_QWORD*)(*(_QWORD*)(a1 + 24) + 20LL) & 0x100000000LL) != 0) {
    LODWORD(v2) = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 20LL);
    if (*GameData_212d448[0] != 0) {
      v4 = *GameData_212d448[0];
      v5 = nn_os_ConvertToTimeSpan(
               *(_QWORD*)(game_script_hub_g_frame_counter + 344), a2) /
               1000 -
           *(_QWORD*)(v4 + 136);
      v6 = 0x1.e848000000000p+19f;
    }
    else {
      v5 = nn_os_ConvertToTimeSpan(
               *(_QWORD*)(game_script_hub_g_frame_counter + 344), a2) /
           1000000;
      v6 = 0x1.f400000000000p+9f;
    }
    if ((float)((float)v5 / v6) >=
        (float)(v2 + (float)((float)*(int*)(GameData_21d8778 + 24) *
                             -0x1.1111120000000p-6f))) {
      v7 = *(_QWORD*)(a1 + 24);
      GameRoutine_10691b0((void*)(&v15), *(_QWORD*)(a1 + 8));
      v8 = v15;
      *(_QWORD*)(v7 + 32) = *(_QWORD*)&v15;
      v9 = *(_OWORD*)(v7 + 32);
      *((_QWORD*)&v9 + 1) = DWORD2(v8);
      LODWORD(v8) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      *(_OWORD*)(v7 + 32) = v9;
      CharacterAnimator_1079580(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL),
                                -1193575777, v8, -0x1.0000000000000p+0f,
                                0x1.0000000000000p+0f);
      v10 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL);
      if (*(_DWORD*)(v10 + 120) != 1817091785) {
        v11 = game_108c8a0(1817091785);
        if (v11 == -574916402 ||
            v11 != (unsigned int)game_108c8a0(*(_DWORD*)(v10 + 120))) {
          if ((CharacterAnimator_1079e10(v10) & 1) != 0) {
            LODWORD(v12) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
            CharacterAnimator_1079580(v10, 1817091785, v12,
                                      -0x1.0000000000000p+0f,
                                      0x1.0000000000000p+0f);
          }
          else {
            *(_DWORD*)(v10 + 124) = 1817091785;
          }
        }
      }
      v13 = *(_DWORD*)(a1 + 16);
      if (v13 != 1 && v13 != 3) {
        if (v13 == 2) {
          v14 = 3;
        }
        else {
          v14 = 1;
        }
        *(_DWORD*)(a1 + 16) = v14;
      }
    }
  }
}

#pragma GCC visibility pop
