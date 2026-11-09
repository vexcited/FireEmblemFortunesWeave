#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_telop_TelopHonorLvUP_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TelopHonorLvUP_Unknown36(__int64 a1);
__int64 TelopHonorLvUP_Unknown39(__int64 result);
__int64 TelopHonorLvUP_Unknown43(__int64 a1);
__int64 TelopHonorLvUP_Unknown34(__int64 result);
__int64 TelopHonorLvUP_Destructor(_QWORD* a1);
__int64 TelopHonorLvUP_DeletingDestructor(_QWORD* a1);

__int64 TelopHonorLvUP_Unknown36(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
  result = GameRoutine_1562680(a1 + 168, v2, 1.0);
  v4 = *(unsigned __int8*)(a1 + 824);
  *(_DWORD*)(a1 + 420) = 0;
  if (v4 == 1) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 168, "L_Help", 1);
    v5 = GameRoutine_155fbe0(a1 + 168, "L_Help");
    return GameRoutine_1562680(v5, "HelpIn", 1.0);
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown39(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 824) == 1) {
    v1 = GameRoutine_155fbe0(result + 168, "L_Help");
    return GameRoutine_1562680(v1, "HelpOut", 1.0);
  }
  return result;
}

__int64 TelopHonorLvUP_Unknown43(__int64 a1)
{
  float v1;
  float v2;
  char v4;
  float v5;
  float v6;
  __int64 v7;

  v1 = *(float*)(a1 + 328);
  v2 = *(float*)(a1 + 420);
  if (v2 < v1) {
    v4 = 0;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v5 = v5 * 8.0;
    }
    v6 = v2 + v5;
    if (v1 >= v6) {
      v1 = v6;
    }
    *(float*)(a1 + 420) = v1;
  }
  else if ((snd_fnd_WeakHandle_isValid(a1 + 424) & 1) != 0) {
    v4 = 0;
  }
  else {
    v7 = GameRoutine_155fbe0(a1 + 168, "L_Help");
    v4 = GameRoutine_1563280(v7, "HelpIn", 0) ^ 1;
  }
  return v4 & 1;
}

__int64 TelopHonorLvUP_Unknown34(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _DWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = *(_DWORD**)(result + 864);
  if (*(_QWORD*)v3 != 0 && *(_DWORD*)(*(_QWORD*)v3 + 16LL) == v3[2]) {
    v9 = v1;
    v10 = v2;
    v4 = *(_QWORD*)(result + 872);
    v5 = result;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v8 = v4;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v8 = 0;
    }
    v7 = v3;
    result = GameRoutine_14a1520(&v7, 1);
    v6 = v8;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      result = std___1___shared_weak_count___release_weak(v6);
    }
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = std___1___shared_weak_count___release_weak(v4);
    }
    **(_QWORD**)(v5 + 864) = 0;
  }
  return result;
}

__int64 TelopHonorLvUP_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[109];
  *a1 = game_telop_TelopHonorLvUP_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[105];
  if (v3 != 0) {
    v4 = a1[106];
    v5 = fw_memory_g_heap_manager_ptr;
    if (v3 == v4) {
      goto LABEL_15;
    }
    v6 = a1[106];
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0 && *(_QWORD*)(v4 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
      }
      v4 = v6;
    } while (v6 != v3);
    v9 = a1[105];
    a1[106] = v3;
    if (v9 != 0) {
    LABEL_15:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v10);
    }
  }
  return GameRoutine_1386f80((__int64)a1);
}

__int64 TelopHonorLvUP_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[109];
  *a1 = game_telop_TelopHonorLvUP_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[105];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = a1[106];
    if (v3 == v5) {
      goto LABEL_15;
    }
    v6 = a1[106];
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0 && *(_QWORD*)(v5 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
      }
      v5 = v6;
    } while (v6 != v3);
    v9 = a1[105];
    a1[106] = v3;
    if (v9 != 0) {
    LABEL_15:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
  }
  GameRoutine_1386f80((__int64)a1);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11);
}

#pragma GCC visibility pop
