#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(__int64);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_174f240(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_174f600(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64 (*GameData_1fa9430[])();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_HonorExpChange_vtable[])();
extern __int64 (*game_telop_TelopHonorExp_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 TelopHonorExp_Unknown33(__int64 a1);
__int64 TelopHonorExp_Unknown43(__int64 a1);
__int64 TelopHonorExp_Destructor(__int64 a1);

__int64 TelopHonorExp_Unknown33(__int64 a1)
{
  const char* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[2];
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v1 = "MID_Sys_HonorLv";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = "MID_Sys_HonorLV_Part3";
  }
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v3 = *msg_MessageManager_instance__ptr[0];
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v18[0] = msg_TagSelector_vtable;
  v18[1] = 0xFFFF0001FFFF0000LL;
  v18[2] = 0xFFFF0004FFFF0002LL;
  v18[3] = 0xFFFF0006FFFF0005LL;
  v33 = 8;
  v19 = -65529;
  v20 = -65528;
  v4 = GameRoutine_a4dbe0(v3, v1, 0, v18);
  if (v4 != 0) {
    v5 = v4;
    v6 = ui_LayoutAccessor_FindTextBox(a1 + 168, "T_Title");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, v5, 0);
    }
  }
  GameRoutine_1562cf0(a1 + 168, "Type_01");
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  *(_QWORD*)(v7 + 16) = 0;
  v8 = *(_QWORD*)(a1 + 832);
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(a1 + 832) = v7;
  *(_QWORD*)v7 = GameData_1fa9430;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 48) = v7 + 56;
  *(_DWORD*)(v7 + 104) = 1065353216;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(a1 + 824) = v7 + 24;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 824);
  v10 = *(_QWORD*)(a1 + 176);
  v16 = 0;
  v17 = 0;
  if (v10 != 0 &&
      (v11 = std___1___shared_weak_count_lock(v10), v17 = v11, v11 != 0)) {
    v12 = v11;
    v16 = *(_QWORD*)(a1 + 168);
    ui_LayoutAccessor_Setup_155dda0(v9, &v16);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(v9, &v16);
  }
  v13 = *(_QWORD*)(a1 + 832);
  v15[0] = *(_QWORD*)(a1 + 824);
  v15[1] = v13;
  if (v13 == 0) {
    return GameRoutine_174f240(a1 + 840, v15, *(unsigned int*)(a1 + 984),
                               *(unsigned int*)(a1 + 988));
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                            memory_order_relaxed);
  GameRoutine_174f240(a1 + 840, v15, *(unsigned int*)(a1 + 984),
                      *(unsigned int*)(a1 + 988));
  return std___1___shared_weak_count___release_weak(v13);
}

__int64 TelopHonorExp_Unknown43(__int64 a1)
{
  char v2;
  float v3;
  float v4;
  float v5;
  float v6;

  if ((GameRoutine_174f600(a1 + 840, 1) & 1) != 0) {
    v2 = 0;
  }
  else {
    v3 = *(float*)(a1 + 328);
    v4 = *(float*)(a1 + 420);
    if (v4 < v3) {
      v2 = 0;
      v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
      if (v5 <= 0.0) {
        v5 = 1.0;
      }
      if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
        v5 = v5 * 8.0;
      }
      v6 = v4 + v5;
      if (v3 >= v6) {
        v3 = v6;
      }
      *(float*)(a1 + 420) = v3;
    }
    else {
      v2 = snd_fnd_WeakHandle_isValid(a1 + 424) ^ 1;
    }
  }
  return v2 & 1;
}

__int64 TelopHonorExp_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_telop_TelopHonorExp_vtable;
  *(_QWORD*)(a1 + 840) = game_gameui_GaugeUtil_HonorExpChange_vtable;
  v2 = *(_QWORD*)(a1 + 976);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *(_QWORD*)(a1 + 840) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 944) & 1) != 0 && *(_QWORD*)(a1 + 960) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 920) & 1) != 0 && *(_QWORD*)(a1 + 936) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(a1 + 896) & 1) != 0 && *(_QWORD*)(a1 + 912) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = *(_QWORD*)(a1 + 832);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  return GameRoutine_1386f80(a1);
}

#pragma GCC visibility pop
