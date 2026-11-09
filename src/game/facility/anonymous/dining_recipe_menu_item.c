#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16eb610(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_94a700(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 DiningRecipeMenuItem_Unknown55(__int64 result);
bool DiningRecipeMenuItem_13fb290(__int64 a1);

__int64 DiningRecipeMenuItem_Unknown55(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  double v5;
  double v6;
  double v7;
  double v8;
  double v9;
  unsigned int v10;
  char v11;

  if (*(_QWORD*)(result + 88) != 0) {
    v1 = (_QWORD*)result;
    result = *(_QWORD*)(result + 56);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v2 = result;
        result = v1[6];
        if (result != 0) {
          GameRoutine_1562060(result, "T_Txt", *(_QWORD*)(v1[11] + 32LL));
          if (game_gmap_GmapClock_instance_ != 0) {
            v4 = game_gmap_GmapClock_instance_ + 8;
          }
          else {
            v4 = game_gmap_GmapClock_kDefaultTime_ptr;
          }
          LOWORD(v3) = *(_WORD*)(v1[11] + 52LL);
          v5 = (double)v3;
          v6 = (double)(unsigned int)GameRoutine_94a700(v4);
          v7 = 1.0;
          v8 = v6 / -100.0 + 1.0;
          if (v8 <= 1.0) {
            v7 = v8;
          }
          if (v8 >= 0.01) {
            v9 = v7;
          }
          else {
            v9 = 0.01;
          }
          if ((int)(v9 * v5) <= 1) {
            v10 = 1;
          }
          else {
            v10 = (int)(v9 * v5);
          }
          v11 = (*(__int64 (**)(_QWORD*))(*v1 + 560LL))(v1);
          result = GameRoutine_16eb610(v1, 0, "L_Gold", "Icon", "T_Num", v10,
                                       (v11 & 0x10) != 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
          return std___1___shared_weak_count___release_weak(v2);
        }
      }
    }
  }
  return result;
}

bool DiningRecipeMenuItem_13fb290(__int64 a1)
{
  return (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) == 0;
}

#pragma GCC visibility pop
