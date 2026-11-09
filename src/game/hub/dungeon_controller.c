#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f5f030(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* game_g_frame_clock_ptr[3];
extern char GameData_2167620;
__int64 DungeonController_f5e870(__int64 a1);

__int64 DungeonController_f5e870(__int64 a1)
{
  __int64 result;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_DWORD*)(a1 + 64) = 0;
  result = GameRoutine_f5f030();
  v3 = *(float*)(a1 + 64);
  v4 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v5 = *(_QWORD*)(v4 + 48);
  v6 = *(_QWORD*)(v4 + 56);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 232LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
    if (v3 > 0.0) {
      goto LABEL_5;
    }
  }
  else {
    v7 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 232LL);
    if (v3 > 0.0) {
    LABEL_5:
      *(_BYTE*)(v7 + 2184) = 1;
      *(float*)(v7 + 2180) = v3 * 0.5;
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(v7 + 2184) == 1) {
    *(_DWORD*)(v7 + 2180) = 0;
    *(_BYTE*)(v7 + 2184) = 0;
  }

LABEL_9:
  *(_DWORD*)(v7 + 2340) = v3 > 0.0;
  *(_BYTE*)(v7 + 2344) = 1;
  if (*(_BYTE*)(a1 + 68) != 0) {
    *(_BYTE*)(a1 + 68) = 0;
    GameData_2167620 = 0;
  }
  return result;
}

#pragma GCC visibility pop
