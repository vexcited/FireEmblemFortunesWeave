#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15d32c0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_211e058[])();
extern __int64 (*GameData_211e648[])();
extern __int64 (
    *game_facility_anonymous_ObeliskDepositoryLegionMenuItem_vtable[])();
extern __int64 GameData_211e030;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21ca060;
extern __int64 GameData_21f4280;
extern __int64 GameData_21f4290;
extern __int64 GameData_21f4298;
extern __int64 GameData_21f42a8;
extern __int64 GameData_21f42b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern char* GameData_211e868[14];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcObeliskDepositoryLegionMenu_Destructor_alt1(__int64 a1) __asm__(
    "ProcObeliskDepositoryLegionMenu_Destructor");
const char* ProcObeliskDepositoryLegionMenu_Unknown43(__int64 a1, char a2);
__int64 ProcObeliskDepositoryLegionMenu_Unknown88(__int64 a1);
__int64 game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl(
    _QWORD* a1);
__int64 ProcObeliskDepositoryLegionMenu_Unknown140(__int64 a1);
__int64
game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2);
__int64
game_facility_anonymous_ProcObeliskDepositoryLegionMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2);
bool game_facility_anonymous_ProcObeliskDepositoryLegionMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64 GameRoutine_20();
extern __int64 GameData_212cf98[2];
__int64 ProcObeliskDepositoryLegionMenu_DeletingDestructor_alt1(
    __int64 a1) __asm__("ProcObeliskDepositoryLegionMenu_DeletingDestructor");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
bool LegionPool_9374e0(_QWORD*, __int64);
extern __int64 (*GameData_211e348[])();
extern __int64 (
    *game_facility_anonymous_ObeliskDepositoryLegionMenuItem_Empty_vtable[])();
__int64
game_facility_anonymous_ProcObeliskDepositoryLegionMenu_AddItemList(__int64 a1);
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcObeliskDepositoryLegionMenu_Destructor(__int64 a1);
void ProcObeliskDepositoryLegionMenu_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 game_menu_PageTab_SetupImage(int*, __int64, __int64, unsigned int,
                                     unsigned int, unsigned int);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 (*GameData_211dfc0[])();
__int64
game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnInit(__int64 a1);
__int64* game_UnitPool_Get(_BYTE*);
bool GameHr_19eff60(_QWORD*, _QWORD*);
extern _QWORD GameData_1c23608[7];
extern __int64 GameData_212c998[148];
extern __int64 GameData_212cd68[26];
bool game_facility_anonymous_ProcObeliskDepositoryLegionMenu_SortAndFilter_closure_Invoke_199ce50(
    __int64 a1, __int64* a2, __int64* a3);

void ProcObeliskDepositoryLegionMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = GameData_21f42b0;
  v2 = GameData_21f4298;
  v3 = GameData_21f42b0 - 1 + GameData_21f42a8;
  v4 = v3 >> 9;
  v5 = v3 & 0x1FF;
  v6 = ((GameData_21f4298 - GameData_21f4290) << 6) - 1;
  if (GameData_21f4298 == GameData_21f4290) {
    v6 = 0;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21f4290 + 8 * v4) + 8 * v5);
  --GameData_21f42b0;
  GameData_21f4280 = v7;
  if ((unsigned __int64)(v6 - (v1 + GameData_21f42a8) + 1) >= 0x400) {
    v8 = *(_QWORD*)(GameData_21f4298 - 8);
    if (v8 != 0) {
      v9 = a1;
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v8);
      v2 = GameData_21f4298;
      a1 = v9;
    }
    GameData_21f4298 = v2 - 8;
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1(a1);
}

void ProcObeliskDepositoryLegionMenu_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = GameData_212cf98[0];
  v4 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf98[0]);
  v3 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf98[0] + 8);
  v6 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf98[0]);
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf98[0] + 8);
  v7 = v5 == v6;
  v8 = v3 - 1 + v4;
  v9 = v8 >> 9;
  v10 = v8 & 0x1FF;
  v11 = ((v5 - v6) << 6) - 1;
  v12 = *(_QWORD*)(v6 + 8 * v9);
  if (v7) {
    v11 = 0;
  }
  v13 = *(_QWORD*)(v12 + 8 * v10);
  v14 = (_QWORD*)GameData_212cf80[0];
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + GameData_212cf98[0]) = v3 - 1;
  *v14 = v13;
  v15 = fw_memory_g_heap_manager_ptr;
  if ((unsigned __int64)(v11 - (v3 + v4) + 1) >= 0x400) {
    v16 = *(_QWORD*)(v5 - 8);
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
      v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + v2);
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + v2) = v5 - 8;
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1(a1);
  v18 = 128;
  if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
    v18 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v18, a1);
}

const char* ProcObeliskDepositoryLegionMenu_Unknown43(__int64 a1, char a2)
{
  if ((unsigned __int8)(a2 - 1) > 9u) {
    return "MID_Menu_Default";
  }
  else {
    return GameData_211e868[(unsigned __int8)(a2 - 1)];
  }
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnInit(__int64 a1)
{
  __int64 v2;
  __int64 result;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  LayoutAccessor_1560070((void*)(&v6_.v6), (__int64*)(a1 + 952), "L_PageTab");
  v4_.v4[0] = GameData_211dfc0;
  v4_.v4[1] = a1;
  v4_.v5 = v4_.v4;
  game_menu_PageTab_SetupImage((int*)(a1 + 656), (__int64)&v6_.v6,
                               (__int64)v4_.v4, 2u, 0xEu, 0xFu);
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
LABEL_6:
  result = v6_.v7;
  if (v6_.v7 != 0) {
    return std___1___shared_weak_count___release_weak(v6_.v7);
  }
  return result;
}

__int64 ProcObeliskDepositoryLegionMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_211e030, 0);
    if (result != 0) {
      v3 = result;
      v4 = LayoutAccessor_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d32c0(v4, v5, 0);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  v3 = a1[29];
  v2 = a1[30];
  v4 = v12;
  v12[0] = GameData_211e058;
  v13 = v12;
  if (v2 == v3) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v3 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_211e030, 0);
      if (v8 == 0) {
        goto LABEL_3;
      }
      v14 = v8;
      if (v13 == nullptr) {
        GameRoutine_60a310(0, v9);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v14) & 1) !=
          0) {
        break;
      }
      v3 = a1[29];
      v2 = a1[30];
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v2 - v3) >> 3);
  v4 = v13;
  if (v13 != v12) {
    if (v13 != nullptr) {
      v10 = 40;
      goto LABEL_13;
    }
    goto LABEL_14;
  }
LABEL_12:
  v10 = 32;
LABEL_13:
  (*(void (**)(_QWORD*))(*v4 + v10))(v4);
LABEL_14:
  game_menu_BasicMenu_Unknown96(a1);
  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((unsigned int)(result - 8) <= 0xFFFFFFF9) {
    return (*(__int64 (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_AddItemList(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  int v9;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(v2 + 80) = 0;
  v3 = v2;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 84) = 1;
  *(_QWORD*)v2 =
      game_facility_anonymous_ObeliskDepositoryLegionMenuItem_Empty_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v9 = 0;
  v7_.v7[0] = GameData_211e348;
  v7_.v7[1] = a1;
  v7_.v7[2] = &v9;
  v7_.v8 = v7_.v7;
  LegionPool_9374e0(*(_QWORD**)(GameData_21f4280 + 8), (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

__int64 ProcObeliskDepositoryLegionMenu_Unknown140(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_211e030, 0);
    if (result != 0) {
      v3 = result;
      v4 = LayoutAccessor_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d32c0(v4, v5, 0);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_OnUnbindImpl_closure_Invoke(
    __int64 a1, __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 84LL) = 1;
  return 0;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryLegionMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v2);
  if ((int)v2 < 0) {
    v3 = GameData_212ceb0;
  }
  if (*(_BYTE*)v3 != 0) {
    v4 = *(_QWORD*)(result + 8);
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    v7 = *(_QWORD*)(v4 + 1064);
    v8 = **(_DWORD**)(v5 + 16);
    *(_WORD*)(v6 + 80) = 257;
    *(_WORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 40) = v2;
    *(_BYTE*)(v6 + 82) = 1;
    *(_DWORD*)(v6 + 84) = 1;
    *(_QWORD*)v6 =
        game_facility_anonymous_ObeliskDepositoryLegionMenuItem_vtable;
    *(_QWORD*)(v6 + 8) = 0;
    *(_QWORD*)(v6 + 88) = GameData_211e648;
    *(_QWORD*)(v6 + 96) = v7;
    *(_DWORD*)(v6 + 104) = v8;
    result = BasicMenuCursor_16e0c00(v4, v6);
    ++**(_DWORD**)(v5 + 16);
  }
  return result;
}

bool game_facility_anonymous_ProcObeliskDepositoryLegionMenu_SortAndFilter_closure_Invoke_199ce50(
    __int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  bool v27;
  char v28;
  bool v29;
  char v30;
  struct {
    __int64* v32;
    char v33;
    char gap9_[7];
    __int64* v34;
    int v35;
    int v36;
    char v37;
  } v32_;
  struct {
    __int64* v38;
    char v39;
    char gap49_[7];
    __int64* v40;
    int v41;
    int v42;
    char v43;
  } v38_;

  v3 = *a2;
  v4 = *a3;
  v6 = *(unsigned int*)(*a2 + 40);
  v7 = (int)v6 < 0;
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 48LL);
  v9 = (__int64*)(v8 + 8 * v6);
  v10 = *(unsigned int*)(*a3 + 40);
  if (v7) {
    v11 = GameData_212ceb0;
  }
  else {
    v11 = v9;
  }
  v12 = (__int64*)(v8 + 8 * v10);
  if ((int)v10 >= 0) {
    v13 = v12;
  }
  else {
    v13 = GameData_212ceb0;
  }
  if (*((_BYTE*)v11 + 1) != 0) {
    v14 = game_UnitPool_Get((_BYTE*)v11 + 1);
  }
  else {
    v14 = nullptr;
  }
  if (*((_BYTE*)v13 + 1) != 0) {
    v15 = game_UnitPool_Get((_BYTE*)v13 + 1);
  }
  else {
    v15 = nullptr;
  }
  v16 = *((_DWORD*)v11 + 1);
  v17 = *((_DWORD*)v13 + 1);
  v18 = *(_DWORD*)(v3 + 104);
  v19 = *(_DWORD*)(v4 + 104);
  v20 = 1;
  switch (*(_BYTE*)(a1 + 8)) {
  case 1:
    v21 = *(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL);
    LODWORD(v20) =
        *(unsigned __int8*)(*(_QWORD*)(v21 + 8LL * *(unsigned __int8*)v11) +
                            50LL);
    LODWORD(v21) =
        *(unsigned __int8*)(*(_QWORD*)(v21 + 8LL * *(unsigned __int8*)v13) +
                            50LL);
    goto LABEL_40;
  case 2:
    goto LABEL_30;
  case 3:
    v20 = 2;
    v22 = *(unsigned __int8*)v11;
    if (*(_BYTE*)v11 == 0) {
      goto LABEL_34;
    }
    goto LABEL_31;
  case 4:
    v20 = 4;
    v22 = *(unsigned __int8*)v11;
    if (*(_BYTE*)v11 == 0) {
      goto LABEL_34;
    }
    goto LABEL_31;
  case 5:
    v20 = 5;
    v22 = *(unsigned __int8*)v11;
    if (*(_BYTE*)v11 == 0) {
      goto LABEL_34;
    }
    goto LABEL_31;
  case 6:
    v20 = 6;
    v22 = *(unsigned __int8*)v11;
    if (*(_BYTE*)v11 == 0) {
      goto LABEL_34;
    }
    goto LABEL_31;
  case 7:
    v20 = 7;
  LABEL_30:
    v22 = *(unsigned __int8*)v11;
    if (*(_BYTE*)v11 != 0) {
      goto LABEL_31;
    }
    goto LABEL_34;
  case 8:
    v20 = 3;
    v22 = *(unsigned __int8*)v11;
    if (*(_BYTE*)v11 == 0) {
      goto LABEL_34;
    }
    goto LABEL_31;
  case 9:
    v20 = 8;
    v22 = *(unsigned __int8*)v11;
    if (*(_BYTE*)v11 != 0) {
    LABEL_31:
      LODWORD(v20) =
          *(__int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] +
                                            64LL) +
                                 8 * v22) +
                      2 * v20 + 112);
    }
    else {
    LABEL_34:
      LODWORD(v20) = 0;
    }
    if ((unsigned int)*(unsigned __int8*)(a1 + 8) - 3 > 6) {
      v21 = 1;
      v26 = *(unsigned __int8*)v13;
      if (*(_BYTE*)v13 != 0) {
        goto LABEL_37;
      }
    }
    else {
      v21 = GameData_1c23608[(unsigned __int8)(*(_BYTE*)(a1 + 8) - 3)];
      v26 = *(unsigned __int8*)v13;
      if (*(_BYTE*)v13 != 0) {
      LABEL_37:
        LODWORD(v21) =
            *(__int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c998[0] +
                                              64LL) +
                                   8 * v26) +
                        2 * v21 + 112);
        goto LABEL_40;
      }
    }
    LODWORD(v21) = 0;
  LABEL_40:
    v25 = 1;
  LABEL_41:
    v32_.v34 = v15;
    v38_.v38 = v11;
    v27 = v15 == nullptr && v17 == 0;
    v38_.v40 = v14;
    v38_.v41 = v18;
    v38_.v42 = v20;
    v28 = !v27;
    v38_.v43 = v25;
    v32_.v32 = v13;
    v29 = v14 == nullptr && v16 == 0;
    v32_.v33 = v28;
    v32_.v35 = v19;
    v32_.v36 = v21;
    v30 = !v29;
    v32_.v37 = v25;
    v38_.v39 = v30;
    return GameHr_19eff60(&v38_.v38, &v32_.v32);
  case 0xA:
    v23 = *(_QWORD*)(*(_QWORD*)GameData_212c998[0] + 64LL);
    v24 = *(_QWORD*)(*(_QWORD*)GameData_212cd68[0] + 64LL);
    v20 = *(
        _QWORD*)(v24 +
                 8LL * *(unsigned __int8*)(*(_QWORD*)(v23 +
                                                      8LL * *(unsigned __int8*)
                                                                v11) +
                                           51LL));
    if (v20 != 0) {
      LODWORD(v20) = *(unsigned __int16*)(v20 + 32);
    }
    v21 = *(
        _QWORD*)(v24 +
                 8LL * *(unsigned __int8*)(*(_QWORD*)(v23 +
                                                      8LL * *(unsigned __int8*)
                                                                v13) +
                                           51LL));
    if (v21 != 0) {
      LODWORD(v21) = *(unsigned __int16*)(v21 + 32);
    }
    goto LABEL_40;
  default:
    LODWORD(v21) = 0;
    v25 = 0;
    LODWORD(v20) = 0;
    goto LABEL_41;
  }
}

bool game_facility_anonymous_ProcObeliskDepositoryLegionMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v2 = *(unsigned __int8*)(a1 + 8);
  v3 = *(unsigned __int8*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v2 == 0) {
    return (_DWORD)v3 != 0;
  }
  v4 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) + 8 * v3) + 64LL);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 250);
    if (v5 <= 9) {
      if (v5 == 7) {
        LODWORD(v4) = 1;
        return v2 == (_DWORD)v4;
      }
      if (v5 != 8) {
        goto LABEL_17;
      }
      LODWORD(v4) = 2;
    }
    else {
      if (v5 != 10 && v5 != 31) {
        if (v5 == 42) {
          LODWORD(v4) = 4;
          return v2 == (_DWORD)v4;
        }
      LABEL_17:
        LODWORD(v4) = 0;
        return v2 == (_DWORD)v4;
      }
      LODWORD(v4) = 3;
    }
  }
  return v2 == (_DWORD)v4;
}

#pragma GCC visibility pop
