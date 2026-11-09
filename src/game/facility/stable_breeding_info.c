#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e5e00(_QWORD);
__int64 GameRoutine_16c0960();
__int64 GameRoutine_16c0c20();
__int64 GameRoutine_16c1180();
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_2174af8;
extern _UNKNOWN GameData_22628e8;
extern __int64 (*game_facility_StableBreedingInfo_vtable[])();
extern __int64 (*game_facility_anonymous_ProcStableBreedingResult_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_AnimalExpChangeUtil_vtable[])();
extern __int64 (*game_gameui_GaugeUtil_ExpChange_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_22627f0;
extern __int64 GameData_22627f8;
extern __int64 GameData_2262800;
extern __int64 GameData_2262810;
extern __int64 GameData_2262820;
extern __int64 GameData_2262830;
extern __int64 GameData_2262838;
extern __int64 GameData_2262840;
extern __int64 GameData_2262850;
extern __int64 GameData_2262860;
extern __int64 GameData_2262870;
extern __int64 GameData_2262878;
extern __int64 GameData_2262880;
extern __int64 GameData_2262890;
extern __int64 GameData_22628a0;
extern __int64 GameData_22628b0;
extern __int64 GameData_22628b8;
extern __int64 GameData_22628c0;
extern __int64 GameData_22628d0;
extern __int64 GameData_22628e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130fa0[3];
extern char GameData_22627e8;
extern char GameData_2262828;
extern char GameData_2262868;
extern char GameData_22628a8;
extern int GameData_2262808;
extern int GameData_2262818;
extern int GameData_2262848;
extern int GameData_2262858;
extern int GameData_2262888;
extern int GameData_2262898;
extern int GameData_22628c8;
extern int GameData_22628d8;
__int64 StableBreedingInfo_16be4a0(__int64 a1, __int64 a2);
__int64 StableBreedingInfo_16bede0(__int64 a1, __int64 a2, __int64 a3);
__int64 StableBreedingInfo_Destructor(__int64 a1);
__int64 StableBreedingInfo_DeletingDestructor(__int64 a1);

__int64 StableBreedingInfo_16be4a0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;

  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      368, 16, 0);
  v8 = 0;
  v9 = 0;
  GameRoutine_15e5b50(v4, &v8, 0);
  v5 = v9;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)(v4 + 208) = a2;
  *(_DWORD*)(v4 + 216) = 0;
  *(_QWORD*)(v4 + 240) = 0;
  *(_QWORD*)(v4 + 247) = 0;
  *(_WORD*)(v4 + 272) = 0;
  *(_WORD*)(v4 + 280) = 0;
  *(_WORD*)(v4 + 304) = 0;
  *(_WORD*)(v4 + 328) = 0;
  *(_QWORD*)v4 = game_facility_StableBreedingInfo_vtable;
  *(_QWORD*)(v4 + 256) = 0;
  *(_QWORD*)(v4 + 264) = 1065353216;
  *(_WORD*)(v4 + 360) = 0;
  *(_QWORD*)(v4 + 352) = 0;
  *(_QWORD*)(v4 + 224) = game_gameui_GaugeUtil_AnimalExpChangeUtil_vtable;
  *(_QWORD*)(v4 + 232) = 0;
  if (a1 != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "StableBreedingInfo";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_2174af8;
    *(_QWORD*)(v4 + 16) = &GameData_2174af8;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v4 + 136) & 1) == 0) {
    GameRoutine_657a50(v4, 1);
  }
  return v4;
}

__int64 StableBreedingInfo_16bede0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22628e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22628e8) != 0) {
    GameData_22627f0 = 0;
    GameData_22627f8 = (__int64)GameRoutine_16c0960;
    GameData_22627e8 = 13;
    GameData_2262868 = 13;
    GameData_2262800 = 0;
    GameData_2262808 = 0;
    GameData_2262810 = 0;
    GameData_2262818 = 0;
    GameData_2262820 = 0;
    GameData_2262840 = 0;
    GameData_2262848 = 0;
    GameData_2262850 = 0;
    GameData_2262858 = 0;
    GameData_2262860 = 0;
    GameData_2262880 = 0;
    GameData_2262828 = 14;
    GameData_2262870 = 0;
    GameData_2262878 = (__int64)GameRoutine_16c1180;
    GameData_2262888 = 0;
    GameData_2262890 = 0;
    GameData_2262898 = 0;
    GameData_22628a0 = 0;
    GameData_22628a8 = 0;
    GameData_22628d0 = 0;
    GameData_22628d8 = 0;
    GameData_22628e0 = 0;
    GameData_2262830 = 0;
    GameData_2262838 = (__int64)GameRoutine_16c0c20;
    GameData_22628c8 = 0;
    GameData_22628b8 = 0;
    GameData_22628c0 = 0;
    GameData_22628b0 = 0;
    __cxa_guard_release(&GameData_22628e8);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register(v6);
  *(_QWORD*)(v6 + 152) = a2;
  *(_QWORD*)(v6 + 160) = a3;
  *(_QWORD*)v6 = game_facility_anonymous_ProcStableBreedingResult_vtable;
  return GameRoutine_657850(v6, &GameData_22627e8, "ProcStableBreedingResult",
                            1, a1);
}

__int64 StableBreedingInfo_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_StableBreedingInfo_vtable;
  *(_QWORD*)(a1 + 224) = game_gameui_GaugeUtil_ExpChange_vtable;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 344);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 320);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 296);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  return GameRoutine_15e5e00(a1);
}

__int64 StableBreedingInfo_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_facility_StableBreedingInfo_vtable;
  *(_QWORD*)(a1 + 224) = GameData_2130fa0[0] + 2;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 344);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 320);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 296);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, v7);
    }
  }
  GameRoutine_15e5e00(a1);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, a1);
}

#pragma GCC visibility pop
