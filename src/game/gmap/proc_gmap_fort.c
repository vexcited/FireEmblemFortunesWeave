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
