#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
extern __int64 GameData_21c96e8;
extern __int64 GameData_21f1658;
__int64 game_gmap_ProcGmapFort_TryFocus_closure_Invoke(__int64 result,
                                                       _QWORD* a2);
void game_gmap_ProcGmapFort_PlayMotion_closure_Invoke(__int64 a1, __int64* a2);
void game_gmap_ProcGmapFort_ResetTimeScale_closure_Invoke(__int64 a1,
                                                          __int64 a2);
__int64 game_gmap_ProcGmapFort_WaitFade_closure_Invoke(__int64 result,
                                                       __int64 a2);
__int64 GameRoutine_1317f10_alt1(float32x4_t*,
                                 float32x4_t*) __asm__("GameRoutine_1317f10");
__int64 TroopMgr_1347860();
__int64 game_gmap_SpotMgr_EachSpotAttachment(char, __int64);
extern __int64 (*GameData_204c648[])();
float GameRoutine_135bea0();
_QWORD* game_gmap_ProcGmapFort_TryFocus(__int64 a1);
void game_gmap_ProcGmapFort_WaitMotion_closure_Invoke(__int64 a1, __int64* a2);

_QWORD* game_gmap_ProcGmapFort_TryFocus(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* result;
  __int64 v3;
  float32x4_t* v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  char v9;

  if ((*(_BYTE*)(a1 + 212) & 1) == 0) {
    v4 = (float32x4_t*)TroopMgr_1347860();
    if (v4 != nullptr) {
      *(_DWORD*)(a1 + 152) = 2;
      return (_QWORD*)GameRoutine_1317f10_alt1(
          *(float32x4_t**)(GameData_21f1658 + 16), v4 + 2);
    }
    goto LABEL_10;
  }
  v9 = 0;
  v7_.v7[0] = GameData_204c648;
  v7_.v7[1] = a1;
  v7_.v8 = v7_.v7;
  v7_.v7[2] = &v9;
  game_gmap_SpotMgr_EachSpotAttachment(4, (__int64)v7_.v7);
  result = v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v3 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_9;
    }
    v3 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*v7_.v8 + v3))((__int64)v7_.v8);
LABEL_9:
  if ((v9 & 1) != 0) {
    return result;
  }
LABEL_10:
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_15;
    }
    v5 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
LABEL_15:
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    while (1) {
      if (*(_BYTE*)v6 == 2) {
        if (*(_DWORD*)(v6 + 32) == 3) {
          *(_QWORD*)(a1 + 16) = v6;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v6 == 0) {
        return result;
      }
      v6 += 64;
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapFort_TryFocus_closure_Invoke(__int64 result,
                                                       _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((**(_BYTE**)(result + 16) & 1) == 0) {
    v2 = *a2;
    v3 = *(_QWORD*)(result + 8);
    v4 = result;
    result = Impl_13261c0(*a2);
    if ((unsigned __int8)result == 8) {
      v5 = *(_QWORD*)(GameData_21c96e8 + 8);
      v6 = *(_QWORD*)(v5 + 8);
      v7 = *(_QWORD*)(v5 + 16);
      while (v6 != v7) {
        if (**(_QWORD**)v6 == v2) {
          v8 = *(_QWORD*)(*(_QWORD*)v6 + 96LL);
          if (v8 != 0 && *(_BYTE*)(v8 + 32) == 1) {
            *(_DWORD*)(v3 + 152) = 2;
            result =
                GameRoutine_1317f10(*(_QWORD*)(GameData_21f1658 + 16), v2 + 32);
            **(_BYTE**)(v4 + 16) = 1;
            return result;
          }
        }
        v6 += 8;
      }
    }
  }
  return result;
}

void game_gmap_ProcGmapFort_PlayMotion_closure_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  int v5;
  char v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && *(_BYTE*)(v3 + 32) == 1 && *(_BYTE*)(v2 + 512) != 2) {
    v4 = 0xBF800000BF800000LL;
    v5 = 1065353216;
    v6 = 1;
    if ((GameRoutine_81a540(v2 + 112, 2017201876, &v4) & 1) == 0) {
      GameRoutine_81a540(v2 + 112, 3101391519LL, &v4);
    }
  }
}

void game_gmap_ProcGmapFort_WaitMotion_closure_Invoke(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v4;
  float v6;
  __int64 v7;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 376);
  if (v3 != 0) {
    v4 = *(_DWORD*)(*(_QWORD*)(v3 + 72) + 120LL);
    if (v4 == 2017201876 || v4 == -1193575777) {
      ++**(_DWORD**)(a1 + 8);
      v6 = GameRoutine_135bea0();
      v7 = *(_QWORD*)(v2 + 376);
      if (v7 != 0) {
        *(float*)(*(_QWORD*)(v7 + 304) + 12LL) = v6;
      }
    }
  }
}

void game_gmap_ProcGmapFort_ResetTimeScale_closure_Invoke(__int64 a1,
                                                          __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 376LL);
  if (v2 != 0) {
    *(_DWORD*)(*(_QWORD*)(v2 + 304) + 12LL) = 1065353216;
  }
}

__int64 game_gmap_ProcGmapFort_WaitFade_closure_Invoke(__int64 result,
                                                       __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  if (v2 != 0 && *(_BYTE*)(v2 + 32) == 1 &&
      *(float*)(*(_QWORD*)a2 + 276LL) != *(float*)(*(_QWORD*)a2 + 272LL)) {
    ++**(_DWORD**)(result + 8);
  }
  return result;
}

#pragma GCC visibility pop
