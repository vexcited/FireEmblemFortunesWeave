#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200be00[])();
extern __int64 (*game_combat_ActionPredamage_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 ActionPredamage_DeletingDestructor_10e03c0(_QWORD* a1);
__int64 ActionPredamage_Unknown2(_QWORD* a1);
__n128 ActionPredamage_Destructor(_QWORD* a1);
__int64 ActionPredamage_DeletingDestructor_10e0620(_QWORD* a1);
__int64 CharacterAnimator_1079e10(__int64);
__int64 game_combat_109acb0(__int64, __int64);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
extern __int64* GameData_212d448[9];
extern __int64 game_script_hub_g_frame_counter;
float CharacterAnimator_1079580(__int64, int, float, float, float);
float CharacterAnimator_107a200(__int64, long double);
void ActionPredamage_Unknown6(__int64 a1);

void ActionPredamage_Unknown6(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  long double v25;
  int v26;
  float v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v32;

  v1 = *(_QWORD*)(a1 + 24);
  v3 = GameData_212d448[0];
  if (*GameData_212d448[0] != 0 && (v4 = *(_DWORD*)(v1 + 8)) <= 3 &&
      (v5 = *GameData_212d448[0] + 24LL * v4,
       (v6 = *(_QWORD*)(v5 + 32)) != 0)) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v7 = *(_QWORD*)(v5 + 40);
    v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
    if (v8 || (v9 = *(_QWORD*)(v7 + 80)) == 0 ||
        (*(_QWORD*)(v9 + 8) != -1 ? (v10 = *(_QWORD*)(v7 + 88) == 0)
                                  : (v10 = true),
         v10)) {
      v11 = 0;
    }
    else if (*(_QWORD*)(v6 + 8) == -1) {
      v11 = 0;
    }
    else {
      v11 = v7;
    }
    std___1___shared_weak_count___release_weak(v6);
    v12 = *(_QWORD*)(v11 + 136);
    if (v12 == 0) {
      goto LABEL_20;
    }
  }
  else {
    v11 = 0;
    v12 = (*(_QWORD*)0x88LL);
    if ((*(_QWORD*)0x88LL) == 0) {
      goto LABEL_20;
    }
  }
  if (*(_QWORD*)(v12 + 8) != -1) {
    v13 = *(_QWORD*)(v11 + 144);
    goto LABEL_21;
  }
LABEL_20:
  v13 = 0;
LABEL_21:
  game_combat_109acb0(v11 + 560, v13);
  if (v14 > 0.0) {
    *(float*)(v1 + 20) = v14;
    *(_BYTE*)(v1 + 24) = 1;
  }
  v15 = *(_QWORD*)(v1 + 20);
  if ((v15 & 0x100000000LL) == 0) {
    return;
  }
  v16 = *v3;
  if (v16 != 0) {
    v17 = nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
              1000 -
          *(_QWORD*)(v16 + 136);
    *(float*)&v18 = 0x1.e848000000000p+19;
  }
  else {
    v17 = nn_os_ConvertToTimeSpan(
              *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
          1000000;
    *(float*)&v18 = 0x1.f400000000000p+9;
  }
  v19 = *(float*)&v18;
  v21 = *(_QWORD*)(a1 + 72);
  v20 = *(_QWORD*)(a1 + 80);
  if (v21 == v20) {
    return;
  }
  v22 = (float)v17 / v19;
  while (*(_DWORD*)(v21 + 4) == 0 ||
         (float)(*(float*)v21 + *(float*)&v15) > v22) {
    v21 += 16;
    if (v21 == v20) {
      return;
    }
  }
  v23 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL);
  if ((*(_BYTE*)(v21 + 12) & 1) != 0) {
    goto LABEL_33;
  }
  if ((*(_BYTE*)(v23 + 88) & 1) == 0) {
    v24 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL);
    if ((CharacterAnimator_1079e10(v23) & 1) != 0) {
      v26 = *(_DWORD*)(v24 + 120);
      v23 = v24;
      if (v26 == 501870813) {
        v27 = CharacterAnimator_107a200(v24, v25);
        v23 = v24;
        if (v27 <= 0x1.2aaaaa0000000p+0) {
        LABEL_33:
          CharacterAnimator_1079580(v23, *(_DWORD*)(v21 + 4), -1.0,
                                    *(float*)(v21 + 8), 1.0);
        }
      }
      else if (v26 != 1817091785 || *(_QWORD*)(v1 + 48) == 0) {
        goto LABEL_33;
      }
    }
  }
  *(_DWORD*)(v21 + 4) = 0;
  v28 = *(_QWORD*)(a1 + 72);
  v29 = *(_QWORD*)(a1 + 80);
  if (v28 == v29) {
  LABEL_47:
    v30 = *(_DWORD*)(a1 + 16);
    if (v30 != 1 && v30 != 3) {
      if (v30 == 2) {
        v32 = 3;
      }
      else {
        v32 = 1;
      }
      *(_DWORD*)(a1 + 16) = v32;
    }
  }
  else {
    while (*(_DWORD*)(v28 + 4) == 0) {
      v28 += 16;
      if (v28 == v29) {
        goto LABEL_47;
      }
    }
  }
}

__n128 ActionPredamage_DeletingDestructor_10e03c0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;

  v1 = a1[9];
  *a1 = game_combat_ActionPredamage_vtable;
  a1[4] = GameData_200be00;
  if (v1 != 0) {
    a1[10] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v5 = a1[8];
  a1[4] = kaneko_WPHolder_vtable;
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[6];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 ActionPredamage_Unknown2(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[9];
  *a1 = game_combat_ActionPredamage_vtable;
  a1[4] = GameData_200be00;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[8];
  a1[4] = kaneko_WPHolder_vtable;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[6];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
}

__n128 ActionPredamage_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;

  v1 = a1[5];
  *(a1 - 4) = game_combat_ActionPredamage_vtable;
  *a1 = GameData_200be00;
  if (v1 != 0) {
    a1[6] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v5 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v5 != 0) {
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[2];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 ActionPredamage_DeletingDestructor_10e0620(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[5];
  *(a1 - 4) = game_combat_ActionPredamage_vtable;
  *a1 = GameData_200be00;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[4];
  *a1 = kaneko_WPHolder_vtable;
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[2];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
}

#pragma GCC visibility pop
