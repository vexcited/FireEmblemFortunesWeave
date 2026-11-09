#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_18607b0(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 BreedingRideMenuItem_Unknown55(_QWORD* a1);
bool BreedingRideMenuItem_Unknown58(__int64 a1);

__int64 BreedingRideMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int16* v7;

  GameRoutine_18607b0();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        v5 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
        v6 = "FullOn";
        if (*(_BYTE*)v5 != 0) {
          if (game_gmap_GmapClock_instance_ != 0) {
            v7 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
          }
          else {
            v7 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
          }
          if (*(_DWORD*)(v5 + 8) != 10000 * *v7 + 100 * v7[1] + v7[2]) {
            v6 = "FullOff";
          }
        }
        result = GameRoutine_1562cf0(v3, v6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

bool BreedingRideMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  __int16* v2;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  if (*(_BYTE*)v1 == 0) {
    return false;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  return *(_DWORD*)(v1 + 8) != 10000 * *v2 + 100 * v2[1] + v2[2];
}

#pragma GCC visibility pop
