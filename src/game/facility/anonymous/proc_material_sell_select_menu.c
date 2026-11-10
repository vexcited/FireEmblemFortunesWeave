#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMaterialSellSelectMenu_Destructor(__int64 a1);
__int64 ProcMaterialSellSelectMenu_DeletingDestructor(__int64 a1);
__int64 ProcMaterialSellSelectMenu_Unknown88(__int64 a1);
__int64 ProcMaterialSellSelectMenu_Unknown148(__int64 a1, __int64* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
extern _DWORD* game_g_shared_system_skills_ptr;
extern __int64 (*GameData_20a9128[])();
extern __int64 (*game_facility_anonymous_MaterialSellMenuItem_vtable[])();
extern __int64 GameData_20a9180;
extern __int64* GameData_212c878[6];
bool game_facility_anonymous_ProcMaterialSellSelectMenu_LCall_closure_Invoke(
    __int64 a1, __int64* a2);
_QWORD*
game_facility_anonymous_ProcMaterialSellSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2);
bool game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a850(
    __int64 a1, _QWORD* a2);
__int64
game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a990(
    __int64 a1, _QWORD* a2, __int64* a3);

__int64 ProcMaterialSellSelectMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1072);
  *(_QWORD*)(a1 + 1080) = v1;
  if (v1 != 0) {
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
    a1 = v2;
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcMaterialSellSelectMenu_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 1072);
  *(_QWORD*)(a1 + 1080) = v1;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a1);
}

__int64 ProcMaterialSellSelectMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e010[0], 0);
    if (v3 != 0) {
      v4 = v3;
      v5 = GameRoutine_155fbe0(a1 + 848, "L_InfoDetail");
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
      GameRoutine_15d2910(v5, v6);
    }
  }
  return GameRoutine_1567590("StatusChange", 1);
}

__int64 ProcMaterialSellSelectMenu_Unknown148(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "MultiSelection";
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_MultiSelection";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 7;
    *(_DWORD*)(v16 + 24) = result;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = "MultiSelection";
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_MultiSelection";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 7;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = "StatusChange";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_StatusChange";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 2;
    *(_DWORD*)(v19 + 24) = result;
    goto LABEL_33;
  }
  v22 = *a2;
  v23 = v19 - *a2;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
  if (v24 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
  if (2 * v25 > v24) {
    v24 = 2 * v25;
  }
  if (v25 >= 0x333333333333333LL) {
    v26 = 0x666666666666666LL;
  }
  else {
    v26 = v24;
  }
  if (v26 != 0) {
    if (v26 <= 0x666666666666666LL) {
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v28 = 0;

LABEL_29:
  v29 = v28 + v23;
  *(_QWORD*)v29 = "StatusChange";
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_StatusChange";
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  v21 = v28 + v23 + 40;
  *(_DWORD*)(v29 + 20) = 2;
  *(_DWORD*)(v29 + 24) = result;
  result = memcpy(v28, v22, v23);
  *a2 = v28;
  a2[1] = v21;
  a2[2] = v30;
  if (v22 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
  }

LABEL_33:
  a2[1] = v21;
  return result;
}

bool game_facility_anonymous_ProcMaterialSellSelectMenu_LCall_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  int v6;

  v2 = *a2;
  if (*a2 == 0) {
    return true;
  }
  v6 = *game_g_shared_system_skills_ptr & 0xFFF;
  if ((game_HasSkill(v2 + 1744, &v6) & 1) == 0) {
    return true;
  }
  v3 = *(_QWORD*)(v2 + 440);
  if (v3 != 0) {
    v4 = *(_BYTE*)(v3 + 16);
  }
  else {
    v4 = 9;
  }
  return ((1 << v4) & 0xF1) == 0;
}

_QWORD*

game_facility_anonymous_ProcMaterialSellSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2)
{
  _QWORD* v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_BYTE*)(v4 + 88) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_DWORD*)(v4 + 84) = 1;
  *(_QWORD*)v4 = game_facility_anonymous_MaterialSellMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 96) = GameData_20a9128;
  *(_QWORD*)(v4 + 104) = 0;
  return BasicMenuCursor_16e0c00(v2, v4);
}

bool game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a850(
    __int64 a1, _QWORD* a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 8);
  return v2 == 32 ||
         v2 == *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                         64) +
                                              8LL * *(unsigned __int16*)(*(
                                                        __int64 (**)(_QWORD))(
                                                        *(_QWORD*)*a2 + 560LL))(
                                                        *a2)) +
                                   73LL);
}

__int64

game_facility_anonymous_ProcMaterialSellSelectMenu_SortAndFilter_closure_Invoke_170a990(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[3];
  char v8;
  _QWORD v9[3];
  char v10;

  v3 = *a3;
  if (*a2 == 0) {
    v4 = 0;
    if (v3 == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = __dynamic_cast(*a2, GameData_212e008[0], &GameData_20a9180, 0);
  if (v3 != 0) {
  LABEL_3:
    v3 = __dynamic_cast(v3, GameData_212e008[0], &GameData_20a9180, 0);
  }
LABEL_4:
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
  v7[0] = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
  v7[1] = 0;
  v9[0] = v5;
  v9[1] = 0;
  v9[2] = 0;
  v10 = 0;
  v7[2] = 0;
  v8 = 0;
  return GameRoutine_19ef8e0(v9, v7) & 1;
}

#pragma GCC visibility pop
