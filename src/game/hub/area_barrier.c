#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffcb78[])();
extern __int64 GameData_22124c8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fb18[3];
extern int GameData_222b910;
__n128 AreaBarrier_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_fbb080(__int64, _QWORD*, float*);
__int64 game_fbb5a0(__int64, __int128*, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21ec7c0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void AreaBarrier_fbae90(__int64 a1);

__n128 AreaBarrier_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  v1 = a1 - 1;
  v2 = a1[2];
  *a1 = GameData_212fb18[0] + 2;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v3 = a1 - 1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v3;
  }
  *v1 = GameData_1ffcb78;
  if ((_QWORD*)GameData_22124c8 == v1) {
    GameData_22124c8 = 0;
    GameData_222b910 = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

void AreaBarrier_fbae90(__int64 a1)
{
  float v2;
  float v3;
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int128 v10;

  v2 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         160LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    v4 = fabsf(v2);
    goto LABEL_12;
  }
  v3 = *(float*)(a1 + 44);
  v4 = fabsf(v2);
  if (v3 <= 0x0.0p+0f) {
    if (v3 >= 0x0.0p+0f || (v3 = v4 + v3) <= 0x0.0p+0f) {
    LABEL_9:
      *(float*)(a1 + 44) = v3;
      if (v3 != 0x0.0p+0f) {
        goto LABEL_12;
      }
      goto LABEL_10;
    }
  }
  else {
    v3 = v3 - v4;
    if (v3 >= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  *(_DWORD*)(a1 + 44) = 0;
LABEL_10:
  if (*(_BYTE*)(a1 + 36) == 1) {
    *(_BYTE*)(a1 + 36) = 0;
  }
LABEL_12:
  v5 = *(float*)(a1 + 40);
  if (v5 > 0x0.0p+0f) {
    v5 = v5 - v4;
    if (v5 >= 0x0.0p+0f) {
      goto LABEL_18;
    }
  LABEL_17:
    v5 = 0x0.0p+0f;
    goto LABEL_18;
  }
  if (v5 < 0x0.0p+0f) {
    v5 = v4 + v5;
    if (v5 > 0x0.0p+0f) {
      goto LABEL_17;
    }
  }
LABEL_18:
  *(float*)(a1 + 40) = v5;
  v10 = (__typeof__(v10)){0};
  if ((GameRoutine_fbb080(a1, &v10, &v9) & 1) != 0) {
    v7 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v6 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    v8 = std___1___shared_weak_count_lock(v6);
    std___1___shared_weak_count___release_weak(v6);
    if ((float)((float)(PSEUDO_UNFUSED(
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) + 672LL) *
                    *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) +
                              672LL))) +
                (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) +
                                  668LL) *
                        *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 16LL) +
                                  668LL))) > 0x0.0p+0f) {
      game_fbb5a0(a1 + 8, &v10, v9 * 0x1.ca5dc20000000p+5f);
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  else {
    if (*(_BYTE*)(a1 + 48) == 1) {
      *(_BYTE*)(a1 + 48) = 0;
    }
    if (*(_BYTE*)(a1 + 36) == 1) {
      *(_BYTE*)(a1 + 36) = 0;
    }
  }
}

#pragma GCC visibility pop
