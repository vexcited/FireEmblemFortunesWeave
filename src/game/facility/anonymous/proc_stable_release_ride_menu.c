#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1862ec0(_QWORD, _QWORD);
__int64 GameRoutine_19efcc0(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_anonymous_ReleaseRideMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcStableReleaseRideMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, int a5, int a6);
__int64 ProcStableReleaseRideMenu_Unknown150_alt1(
    __int64 a1, _DWORD* a2,
    _DWORD* a3) __asm__("ProcStableReleaseRideMenu_Unknown150");
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 game_menu_AnimalPoolMenu_GetSumReliance(__int64, unsigned __int8*);
bool GameRoutine_19efcc0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_19efcc0");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
bool ProcStableReleaseRideMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_1595490(__int64*);
__int64 game_menu_BasicMenu_Unknown16de4d0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ProcStableReleaseRideMenu_Unknown139(__int64 a1);

__int64 ProcStableReleaseRideMenu_Unknown139(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  struct {
    __int64* v5;
    __int64 v6;
  } v5_;

  game_menu_BasicMenu_Unknown16de4d0(a1);
  LayoutAccessor_1560070((void*)(&v5_.v5), (__int64*)(a1 + 848),
                         "L_EquipPool/L_Num");
  result = v5_.v6;
  if (v5_.v6 != 0) {
    v3 = std___1___shared_weak_count_lock(v5_.v6);
    v4 = v5_.v5;
    result = v5_.v6;
    if (v5_.v6 != 0) {
      result = std___1___shared_weak_count___release_weak(v5_.v6);
    }
    if (v3 != 0 && v4 != nullptr) {
      result = GameRoutine_1595490(v4);
    }
    else if (v3 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

__int64 ProcStableReleaseRideMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, int a5, int a6)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
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
  *(_QWORD*)result = game_facility_anonymous_ReleaseRideMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

bool ProcStableReleaseRideMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v9;
  __int64* v10;
  int v11;
  int v12;
  int v13;
  bool v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  struct {
    _QWORD v21[2];
    int v22;
    int v23;
    int v24;
    char v25;
  } v21_;
  struct {
    _QWORD v26[2];
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
  v12 = a3[26];
  v13 =
      game_menu_AnimalPoolMenu_GetSumReliance(a1, (unsigned __int8*)&v39_.v39);
  v21_.v22 =
      game_menu_AnimalPoolMenu_GetSumReliance(a1, (unsigned __int8*)&v31_.v31);
  v21_.v23 = v12;
  v26_.v26[0] = &v39_.v39;
  v26_.v26[1] = v9;
  v26_.v27 = v13;
  v26_.v28 = v11;
  v26_.v29 = 0;
  v26_.v30 = 0;
  v21_.v21[0] = &v31_.v31;
  v21_.v21[1] = v10;
  v21_.v24 = 0;
  v21_.v25 = 0;
  v15 = GameRoutine_19efcc0_alt1(v26_.v26, v21_.v21);
  v31_.v31 = 0;
  v31_.v32 = 0;
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
  return v15;
}

#pragma GCC visibility pop
