#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_d20f00(_QWORD* result);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CameraStateFocusCharacter_vtable[])();
extern __int64 GameData_220b6f0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CameraStateFocusCharacter_Destructor(__int64 a1);

_QWORD* CameraStateFocusCharacter_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)a1 = game_zview_CameraStateFocusCharacter_vtable;
  if (*(_BYTE*)(a1 + 1312) == 1) {
    v2 = *(__int64**)(a1 + 880);
    v3 = *(_QWORD*)(a1 + 888);
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      v4 = *v2;
      if (v4 != 0 && GameData_220b6f0 != 0) {
        v5 = *(_QWORD**)(GameData_220b6f0 + 8);
        v6 = *(_QWORD**)(GameData_220b6f0 + 16);
        if (v5 != v6) {
          while (*v5 != v4) {
            v5 += 2;
            if (v5 == v6) {
              v5 = *(_QWORD**)(GameData_220b6f0 + 16);
              break;
            }
          }
        }
        if (v5 == v6) {
          v7 = 0;
        }
        else {
          v7 = v4;
        }
      }
      else {
        v7 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
    else {
      v7 = *v2;
      if (*v2 == 0 || GameData_220b6f0 == 0) {
        goto LABEL_25;
      }
      v8 = *(_QWORD**)(GameData_220b6f0 + 8);
      v9 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v8 != v9) {
        while (*v8 != v7) {
          v8 += 2;
          if (v8 == v9) {
            goto LABEL_25;
          }
        }
      }
      if (v8 == v9) {
        goto LABEL_25;
      }
    }
    if (v7 != 0) {
      v10 = *(_QWORD*)(v7 + 24);
      if (*(_BYTE*)(v10 + 336) == 1) {
        *(_BYTE*)(v10 + 336) = 0;
      }
    }
  LABEL_25:
    *(_BYTE*)(a1 + 1312) = 0;
  }
  v11 = *(_QWORD*)(a1 + 1232);
  if (v11 != 0) {
    *(_QWORD*)(a1 + 1240) = v11;
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v11);
  }
  v13 = *(_QWORD*)(a1 + 1224);
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(a1 + 1112);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  return GameRoutine_d20f00((_QWORD*)a1);
}

#pragma GCC visibility pop
