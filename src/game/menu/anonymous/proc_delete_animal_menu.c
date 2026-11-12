#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1862a60(_QWORD);
__int64 GameRoutine_1862ec0(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
bool GameRoutine_19efcc0(_QWORD*, _QWORD*);
extern __int64 (*game_menu_anonymous_DeleteAnimalMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ReleaseAnimalMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64 ProcDeleteAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, int a5, int a6);
bool ProcDeleteAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3);
__int64 ProcDeleteAnimalMenu_Unknown151(__int64 a1);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64
game_menu_anonymous_ProcDeleteAnimalMenu_CreateBind_closure_Invoke(__int64 a1,
                                                                   __int64* a2);
__attribute__((swiftcall)) void RidePool_93c6a0(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_2125478[])();
extern __int64 (*GameData_21254f8[])();
extern __int64* GameData_212ea58;
extern __int64 GameData_21f42d0;
__int64 game_menu_anonymous_ProcDeleteAnimalMenu_CreateBind(__int64 a1);
__attribute__((swiftcall)) void
RidePool_93c6a0_alt1(PSEUDO_X8, __int64, unsigned __int8*, __int64,
                     char) __asm__("RidePool_93c6a0");
__int64 ProcList_9bd480_alt1(__int64) __asm__("ProcList_9bd480");
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 game_menu_AnimalPoolMenu_GetSumReliance(__int64, unsigned __int8*);
bool GameHr_19efcc0(unsigned __int8**, unsigned __int8**);
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 game_menu_anonymous_ProcDeleteAnimalMenu_CreateBind(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8** v9;
  __int64 v10;
  unsigned __int8* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;

  v2 = *(_QWORD*)(*GameData_212ea58 + 880);
  v3 = *(_QWORD*)(*GameData_212ea58 + 888);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  v4 = std___1___shared_weak_count_lock_alt1(v3);
  v5 = *(_QWORD*)(v2 + 320);
  v6 = v4;
  if (v5 != 0) {
    v7 = *(_QWORD*)(v2 + 312);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock_alt1(v5);
    if (v8 != 0) {
      v9 = (unsigned __int8**)(v7 + 8);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
    else {
      v9 = (unsigned __int8**)((_UNKNOWN**)0x8LL);
    }
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  else {
    v9 = (unsigned __int8**)((_UNKNOWN**)0x8LL);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v11 = *v9;
  if (*v9 != nullptr) {
    if (*v11 != 0) {
      v12 = *(_QWORD*)(GameData_21f42d0 + 8);
      if (*(int*)(v12 + 144) <= 199) {
        RidePool_93c6a0_alt1((void*)((__int64)v18_.v18), v12, *v9, 0, 1);
        return std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
    v13 = ProcList_9bd480_alt1(a1);
    if (v13 == 0) {
      return std___1___shared_weak_count___release_weak_alt1(v3);
    }
    v14 = v13;
    v18_.v18[0] = GameData_2125478;
    v18_.v19 = v18_.v18;
    game_ProcList_Call_9bcfa0_alt1(v13, (__int64)v18_.v18);
    if (v18_.v19 == v18_.v18) {
      v15 = 32;
    }
    else {
      if (v18_.v19 == nullptr) {
        goto LABEL_22;
      }
      v15 = 40;
    }
    (*(void (**)(__int64))(*v18_.v19 + v15))((__int64)v18_.v19);
  LABEL_22:
    v18_.v18[2] = a1;
    v18_.v18[0] = GameData_21254f8;
    v18_.v18[1] = v11;
    v18_.v19 = v18_.v18;
    game_ProcList_Call_9bcfa0_alt1(v14, (__int64)v18_.v18);
    if (v18_.v19 == v18_.v18) {
      v16 = 32;
    }
    else {
      if (v18_.v19 == nullptr) {
        return std___1___shared_weak_count___release_weak_alt1(v3);
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v18_.v19 + v16))((__int64)v18_.v19);
  }
  return std___1___shared_weak_count___release_weak_alt1(v3);
}

__int64

game_menu_anonymous_ProcDeleteAnimalMenu_CreateBind_closure_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;
  const char* v7;

  v2 = *a2;
  v7 = "MID_StableMenu_FullRelease_Message";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v7);
  if (result != 0) {
    v6 = nullptr;
    GameRoutine_6680e0(v5, result + 1248);
    result = (__int64)v6;
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(void*))(*(_QWORD*)v6 + v4))((void*)v6);
  }
  return result;
}

__int64 ProcDeleteAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                        __int64 a4, int a5, int a6)
{
  __int64 result;
  __int64 v12;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
  v12 = *(_QWORD*)(a1 + 1080);
  *(_DWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 96) = a3;
  *(_DWORD*)(result + 104) = a6;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_anonymous_DeleteAnimalMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 112) = v12;
  return result;
}

bool ProcDeleteAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v9;
  __int64* v10;
  int v11;
  bool v12;
  int v13;
  int v14;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  struct {
    unsigned __int8* v21[2];
    int v22;
    int v23;
    int v24;
    char v25;
  } v21_;
  struct {
    unsigned __int8* v26[2];
    int v27;
    int v28;
    int v29;
    char v30;
  } v26_;
  struct {
    __int64 v31;
    int v32;
  } v31_;
  _QWORD** v33;
  struct {
    _QWORD* v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    _BYTE* v38;
  } v34_;
  struct {
    __int64 v39;
    int v40;
  } v39_;
  _QWORD** v41;
  struct {
    _QWORD* v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    _BYTE* v46;
  } v42_;

  v6 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a2 + 560LL))(a2);
  WORD1(v39_.v39) = 0;
  HIDWORD(v39_.v39) = 0;
  v42_.v43 = 0;
  v42_.v44 = 0;
  v42_.v45 = 0;
  v42_.v46 = nullptr;
  v41 = &v42_.v42;
  v42_.v42 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v39_.v39, v6);
  v7 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a3 + 560LL))(a3);
  WORD1(v31_.v31) = 0;
  HIDWORD(v31_.v31) = 0;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v34_.v37 = 0;
  v34_.v38 = nullptr;
  v33 = &v34_.v34;
  v34_.v34 = nullptr;
  GameRoutine_930b90_alt1((__int64)&v31_.v31, v7);
  if (BYTE3(v39_.v39) != 0) {
    v9 = game_UnitPool_Get_alt1((_BYTE*)&v39_.v39 + 3);
    if (BYTE3(v31_.v31) != 0) {
    LABEL_3:
      v10 = game_UnitPool_Get_alt1((_BYTE*)&v31_.v31 + 3);
      goto LABEL_6;
    }
  }
  else {
    v9 = nullptr;
    if (BYTE3(v31_.v31) != 0) {
      goto LABEL_3;
    }
  }
  v10 = nullptr;
LABEL_6:
  v11 = a2[26];
  if (v11 == -99) {
    v12 = true;
  }
  else {
    v13 = a3[26];
    if (v13 == -99) {
      v12 = false;
    }
    else {
      v14 = game_menu_AnimalPoolMenu_GetSumReliance(
          a1, (unsigned __int8*)&v39_.v39);
      v21_.v22 = game_menu_AnimalPoolMenu_GetSumReliance(
          a1, (unsigned __int8*)&v31_.v31);
      v21_.v23 = v13;
      v26_.v27 = v14;
      v26_.v28 = v11;
      v26_.v29 = 0;
      v26_.v30 = 0;
      v21_.v24 = 0;
      v21_.v25 = 0;
      v26_.v26[0] = (unsigned __int8*)&v39_.v39;
      v26_.v26[1] = (unsigned __int8*)v9;
      v21_.v21[0] = (unsigned __int8*)&v31_.v31;
      v21_.v21[1] = (unsigned __int8*)v10;
      v12 = GameHr_19efcc0(v26_.v26, v21_.v21);
    }
  }
  v31_.v32 = 0;
  v31_.v31 = 0;
  if ((v34_.v36 & 1) != 0) {
    *v34_.v38 = 0;
    v34_.v37 = 0;
  }
  else {
    LOWORD(v34_.v36) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v34_.v34);
  v34_.v34 = nullptr;
  v34_.v35 = 0;
  v33 = &v34_.v34;
  if ((v34_.v36 & 1) != 0) {
    v16 = v34_.v38;
    if (v34_.v38 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v34_.v38);
      v16 = v34_.v34;
    }
  }
  else {
    v16 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v33, v16);
  v39_.v39 = 0;
  v39_.v40 = 0;
  if ((v42_.v44 & 1) != 0) {
    *v42_.v46 = 0;
    v42_.v45 = 0;
  }
  else {
    LOWORD(v42_.v44) = 0;
  }
  GameRoutine_6e3b50_alt1((__int64)&v41, v42_.v42);
  v42_.v42 = nullptr;
  v42_.v43 = 0;
  v41 = &v42_.v42;
  if ((v42_.v44 & 1) != 0) {
    v18 = v42_.v46;
    if (v42_.v46 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v42_.v46);
      v18 = v42_.v42;
    }
  }
  else {
    v18 = nullptr;
  }
  GameRoutine_6e3b50_alt1((__int64)&v41, v18);
  return v12;
}

__int64 ProcDeleteAnimalMenu_Unknown151(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  int v6;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  v3 = *(_QWORD*)(a1 + 1080);
  v4 = v2;
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_DWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 104) = -99;
  *(_QWORD*)v2 = game_menu_anonymous_ReleaseAnimalMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 112) = v3;
  GameRoutine_16e0c00(a1, v2);
  GameRoutine_1862a60(a1);
  result = *(_QWORD*)(a1 + 336);
  if (result != v4) {
    if (result != 0) {
      (*(void (**)(__int64))(*(_QWORD*)result + 168LL))(result);
    }
    *(_QWORD*)(a1 + 336) = v4;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1, 0);
    result = *(_QWORD*)(a1 + 336);
    if (result == 0) {
      v6 = 4;
      goto LABEL_11;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    result = *(_QWORD*)(a1 + 336);
  }
  v6 = 4;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
    if ((result & 1) != 0) {
      v6 = 4;
    }
    else {
      v6 = 0;
    }
  }

LABEL_11:
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v6;
  return result;
}

#pragma GCC visibility pop
