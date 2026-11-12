#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_d3e100(_QWORD, _QWORD);
extern __int64 GameData_21d96b8;
float StateActionRoot_Unknown3(__int64 a1);
__int64 StateActionRoot_Unknown5(__int64 a1);
__int64 StateActionRoot_Unknown2(__int64 result);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
struct PseudoSret GameRoutine_d56a60(_QWORD, _QWORD, _QWORD, float);
__int64 StateActionRoot_d3e100(__int64 result, char a2);
__attribute__((swiftcall)) void game_zview_d56a60(PSEUDO_X8, __int64, __int64,
                                                  float);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
void snd_Fade_Fade_10c910_alt1(__int64, int) __asm__("snd_Fade_Fade_10c910");

float StateActionRoot_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  float result;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 16) =
      (*(_DWORD*)(*(_QWORD*)(v1 + 8) + 384LL) & 0x40000000) != 0;
  *(_DWORD*)(v1 + 128) |= 4u;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 128LL) |= 0x100u;
  v2 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 28) = *(_DWORD*)(v2 + 592);
  result = *(float*)(v2 + 596);
  *(float*)(a1 + 32) = result;
  return result;
}

__int64 StateActionRoot_Unknown5(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 result;

  if (*(_BYTE*)(a1 + 16) == 1 && *(_BYTE*)(a1 + 17) != 0) {
    *(_BYTE*)(a1 + 17) = 0;
    v2 = GameData_21d96b8;
    v3 = *(_DWORD*)(GameData_21d96b8 + 40) - 1;
    *(_DWORD*)(GameData_21d96b8 + 40) = v3;
    if (v3 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v2 + 32) + 8LL))(v2 + 32);
    }
  }
  result = GameRoutine_d3e100(a1, 0);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 632LL) + 24LL) =
      0;
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 632LL) + 20LL) =
      0;
  return result;
}

__int64 StateActionRoot_d3e100(__int64 result, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD v8[27];

  if (*(_BYTE*)(result + 48) != (a2 & 1)) {
    v8[25] = v2;
    v8[26] = v3;
    *(_BYTE*)(result + 48) = a2 & 1;
    v4 = *(_QWORD*)(result + 8);
    *(_DWORD*)(result + 52) = 0;
    v5 = result;
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 40LL);
    if ((a2 & 1) != 0) {
      return X8CALL_X0(
          __int64, game_zview_d56a60((void*)((__int64)v8), v6,
                                     (__int64)"SE_FS_Add_Orhel_Sprint_Start",
                                     0x1.0000000000000p+0f));
    }
    else {
      game_zview_d56a60((void*)((__int64)v8), v6,
                        (__int64)"SE_FS_Add_Orhel_Sprint_Stop",
                        0x1.0000000000000p+0f);
      result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(v5 + 56));
      if ((result & 1) != 0) {
        v7 = snd_fnd_WeakHandle_get_alt1(v5 + 56);
        snd_Fade_Fade_10c910_alt1((__int64)v8, 300);
        (*(void (**)(__int64, _QWORD*, _QWORD, double))(
            *(_QWORD*)(v7 - 5592) + 248LL))(v7 - 5592, v8, 0, 0x0.0p+0);
        return snd_Fade_Destroy_Fade_alt1(v8);
      }
    }
  }
  return result;
}

__int64 StateActionRoot_Unknown2(__int64 result)
{
  *(_WORD*)(result + 16) = 0;
  *(_BYTE*)(result + 18) = 0;
  *(_DWORD*)(result + 52) = 0;
  *(_DWORD*)(result + 72) = 0;
  *(_QWORD*)(result + 20) = 0;
  *(_QWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 36) = 0;
  *(_QWORD*)(result + 41) = 0;
  return result;
}

#pragma GCC visibility pop
