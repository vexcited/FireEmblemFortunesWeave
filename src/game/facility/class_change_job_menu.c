#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_1572840(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_95e2c0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e0640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1605a10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16e1a00(void);
__int64 GameRoutine_18a30a0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_906c90(_QWORD, _QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_ClassChangeJobMenuItem_vtable[])();
extern __int64 (*game_facility_EmptyClassChangeJobMenuItem_vtable[])();
extern __int64 GameData_208be80;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ClassChangeJobMenu_16b44a0(__int64 a1, __int64* a2);
__int64 ClassChangeJobMenu_Unknown128(__int64 a1);
__int64 ClassChangeJobMenu_16b53a0(__int64 result);
__int64 ClassChangeJobMenu_16b5db0(__int64 a1);
__int64 ClassChangeJobMenu_16b6670(__int64 a1);
__int64 ClassChangeJobMenu_16b6c30(__int64 a1);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
extern __int64 game_g_game_setting;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_705570(void);
__int64 game_facility_ClassChangeJobMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2);
__int64 game_facility_ClassChangeJobMenu_CopyUnitAndPergeSkill_lambda0_Invoke(
    __int64 result, _DWORD* a2);

__int64 ClassChangeJobMenu_16b44a0(__int64 a1, __int64* a2)
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
    *(_QWORD*)v16 = "XHelp";
    *(_QWORD*)(v16 + 8) = 0;
    v17 = v15 + 40 * v13;
    *(_BYTE*)(v16 + 16) = 0;
    *(_BYTE*)(v16 + 28) = 0;
    v7 = v15 + v9 + 40;
    *(_QWORD*)(v16 + 32) = 0;
    *(_DWORD*)(v16 + 20) = 2;
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
    *(_BYTE*)(v5 + 16) = 0;
    *(_BYTE*)(v5 + 28) = 0;
    v7 = v5 + 40;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = "XHelp";
    *(_QWORD*)(v5 + 8) = 0;
    *(_DWORD*)(v5 + 20) = 2;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = &GameData_1a9f09e;
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_Status";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 7;
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
  *(_QWORD*)v29 = &GameData_1a9f09e;
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_Status";
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  v21 = v28 + v23 + 40;
  *(_DWORD*)(v29 + 20) = 7;
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

__int64 ClassChangeJobMenu_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 result;
  __int64* v9;
  __int64* i;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* j;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* k;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* m;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* n;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64* v46;
  __int64* v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64* v61;
  __int64* v62;
  __int64 v63;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_DWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_facility_EmptyClassChangeJobMenuItem_vtable;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v5 = a1 + 1072;
  v6 = 0;
  v45 = (unsigned __int8)GameRoutine_960100(v4);
  do {
    v62 = nullptr;
    v63 = 0;
    v60 = 0;
    v61 = nullptr;
    v58 = nullptr;
    v59 = nullptr;
    v56 = nullptr;
    v57 = 0;
    v54 = 0;
    v55 = nullptr;
    v52 = nullptr;
    v53 = nullptr;
    v50 = nullptr;
    v51 = 0;
    v48 = 0;
    v49 = nullptr;
    v46 = nullptr;
    v47 = nullptr;
    result = GameRoutine_15e0640(&v46, a1 + 1072, v6, 0, 0);
    if ((result & 1) == 0) {
      goto LABEL_18;
    }
    v9 = v46;
    for (i = v47; v9 != i; result = GameRoutine_16e0c00(a1, v12)) {
      v11 = *v9++;
      v12 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
      *(_WORD*)(v12 + 16) = 0;
      *(_DWORD*)(v12 + 40) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_WORD*)(v12 + 80) = 257;
      *(_BYTE*)(v12 + 82) = 1;
      *(_QWORD*)v12 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v12 + 8) = 0;
      *(_QWORD*)(v12 + 88) = v5;
      *(_QWORD*)(v12 + 96) = v11;
    }
    v13 = v49;
    for (j = v50; v13 != j; result = GameRoutine_16e0c00(a1, v16)) {
      v15 = *v13++;
      v16 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
      *(_WORD*)(v16 + 16) = 0;
      *(_DWORD*)(v16 + 40) = 0;
      *(_QWORD*)(v16 + 48) = 0;
      *(_QWORD*)(v16 + 56) = 0;
      *(_QWORD*)(v16 + 64) = 0;
      *(_QWORD*)(v16 + 72) = 0;
      *(_WORD*)(v16 + 80) = 257;
      *(_BYTE*)(v16 + 82) = 1;
      *(_QWORD*)v16 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v16 + 8) = 0;
      *(_QWORD*)(v16 + 88) = v5;
      *(_QWORD*)(v16 + 96) = v15;
    }
    v17 = v52;
    for (k = v53; v17 != k; result = GameRoutine_16e0c00(a1, v20)) {
      v19 = *v17++;
      v20 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
      *(_WORD*)(v20 + 16) = 0;
      *(_DWORD*)(v20 + 40) = 0;
      *(_QWORD*)(v20 + 48) = 0;
      *(_QWORD*)(v20 + 56) = 0;
      *(_QWORD*)(v20 + 64) = 0;
      *(_QWORD*)(v20 + 72) = 0;
      *(_WORD*)(v20 + 80) = 257;
      *(_BYTE*)(v20 + 82) = 1;
      *(_QWORD*)v20 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v20 + 8) = 0;
      *(_QWORD*)(v20 + 88) = v5;
      *(_QWORD*)(v20 + 96) = v19;
    }
    v21 = v55;
    for (m = v56; v21 != m; result = GameRoutine_16e0c00(a1, v24)) {
      v23 = *v21++;
      v24 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
      *(_WORD*)(v24 + 16) = 0;
      *(_DWORD*)(v24 + 40) = 0;
      *(_QWORD*)(v24 + 48) = 0;
      *(_QWORD*)(v24 + 56) = 0;
      *(_QWORD*)(v24 + 64) = 0;
      *(_QWORD*)(v24 + 72) = 0;
      *(_WORD*)(v24 + 80) = 257;
      *(_BYTE*)(v24 + 82) = 1;
      *(_QWORD*)v24 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v24 + 8) = 0;
      *(_QWORD*)(v24 + 88) = v5;
      *(_QWORD*)(v24 + 96) = v23;
    }
    v25 = v58;
    for (n = v59; v25 != n; result = GameRoutine_16e0c00(a1, v28)) {
      v27 = *v25++;
      v28 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
      *(_WORD*)(v28 + 16) = 0;
      *(_DWORD*)(v28 + 40) = 0;
      *(_QWORD*)(v28 + 48) = 0;
      *(_QWORD*)(v28 + 56) = 0;
      *(_QWORD*)(v28 + 64) = 0;
      *(_QWORD*)(v28 + 72) = 0;
      *(_WORD*)(v28 + 80) = 257;
      *(_BYTE*)(v28 + 82) = 1;
      *(_QWORD*)v28 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v28 + 8) = 0;
      *(_QWORD*)(v28 + 88) = v5;
      *(_QWORD*)(v28 + 96) = v27;
    }
    v29 = v61;
    v30 = v62;
    if (v61 != v62) {
      do {
        v31 = *v29++;
        v32 = fw_memory_HeapManager_Allocate(*v2, 104, 16, 0);
        *(_WORD*)(v32 + 16) = 0;
        *(_DWORD*)(v32 + 40) = 0;
        *(_QWORD*)(v32 + 48) = 0;
        *(_QWORD*)(v32 + 56) = 0;
        *(_QWORD*)(v32 + 64) = 0;
        *(_QWORD*)(v32 + 72) = 0;
        *(_WORD*)(v32 + 80) = 257;
        *(_BYTE*)(v32 + 82) = 1;
        *(_QWORD*)v32 = game_facility_ClassChangeJobMenuItem_vtable;
        *(_QWORD*)(v32 + 8) = 0;
        *(_QWORD*)(v32 + 88) = v5;
        *(_QWORD*)(v32 + 96) = v31;
        result = GameRoutine_16e0c00(a1, v32);
      } while (v29 != v30);
    LABEL_18:
      v29 = v61;
    }
    if (v29 != nullptr) {
      v33 = *v2;
      v62 = v29;
      if (*(_QWORD*)(v33 + 200) != 0) {
        v34 = 128;
      }
      else {
        v34 = 56;
      }
      result = nn_mem_StandardAllocator_Free(v33 + v34, v29);
    }
    if (v58 != nullptr) {
      v35 = *v2;
      v59 = v58;
      if (*(_QWORD*)(v35 + 200) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      result = nn_mem_StandardAllocator_Free(v35 + v36, v58);
    }
    if (v55 != nullptr) {
      v37 = *v2;
      v56 = v55;
      if (*(_QWORD*)(v37 + 200) != 0) {
        v38 = 128;
      }
      else {
        v38 = 56;
      }
      result = nn_mem_StandardAllocator_Free(v37 + v38, v55);
    }
    if (v52 != nullptr) {
      v39 = *v2;
      v53 = v52;
      if (*(_QWORD*)(v39 + 200) != 0) {
        v40 = 128;
      }
      else {
        v40 = 56;
      }
      result = nn_mem_StandardAllocator_Free(v39 + v40, v52);
    }
    if (v49 != nullptr) {
      v41 = *v2;
      v50 = v49;
      if (*(_QWORD*)(v41 + 200) != 0) {
        v42 = 128;
      }
      else {
        v42 = 56;
      }
      result = nn_mem_StandardAllocator_Free(v41 + v42, v49);
    }
    if (v46 != nullptr) {
      v43 = *v2;
      v47 = v46;
      if (*(_QWORD*)(v43 + 200) != 0) {
        v44 = 128;
      }
      else {
        v44 = 56;
      }
      result = nn_mem_StandardAllocator_Free(v43 + v44, v46);
    }
  } while (v6++ != v45);
  return result;
}

__int64 ClassChangeJobMenu_16b53a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  _BOOL8 v9;
  bool v10;
  char v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(result + 1064);
  if (v1 != 0) {
    v2 = result;
    if (*(_BYTE*)(v1 + 2136) != 0) {
      v3 = GameRoutine_97b2f0(v1 + 2104);
      if (v3 == 0) {
        goto LABEL_8;
      }
    }
    else {
      v3 = GameRoutine_67ed20(*(_QWORD*)(v1 + 392));
      if (v3 == 0) {
        goto LABEL_8;
      }
    }
    v4 = ui_LayoutAccessor_FindTextBox(v2 + 848, "T_Name");
    if (v4 != 0) {
      GameRoutine_156c5d0(v4, v3, 0);
    }
  LABEL_8:
    v14[0] = "L_LvGroup";
    v14[1] = 9;
    GameRoutine_1572840(&v15, v2 + 848, v14);
    if (v16 == 0) {
      goto LABEL_20;
    }
    v5 = std___1___shared_weak_count_lock(v16);
    v6 = v15;
    if (v16 != 0) {
      std___1___shared_weak_count___release_weak(v16);
    }
    if (v5 != 0 && v6 != 0) {
      GameRoutine_18a30a0(v6, *(_QWORD*)(v2 + 1064));
      v7 = *(_QWORD*)(v6 + 1096);
      if (v7 != 0) {
        v8 = *(unsigned __int8*)(*(_QWORD*)(v2 + 1064) + 498LL);
        v9 = v8 > 0x62;
        v10 = v8 >= 0x63;
        v11 = *(_BYTE*)(v7 + 88) & 0xFE;
        if (!v10) {
          ++v11;
        }
        *(_BYTE*)(v7 + 88) = v11;
        ui_LayoutAccessor_SetPaneVisible(v6 + 88, "Border", v9);
      }
    }
    else if (v5 == 0) {
      goto LABEL_20;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  LABEL_20:
    GameRoutine_1560070(&v15, v2 + 848, "L_LvGroup");
    if (v16 != 0) {
      v12 = std___1___shared_weak_count_lock(v16);
      v13 = v15;
      if (v16 != 0) {
        std___1___shared_weak_count___release_weak(v16);
      }
      if (v12 != 0 && v13 != 0) {
        ui_LayoutAccessor_SetPaneVisible(v13, "Border", 0);
        goto LABEL_27;
      }
      if (v12 != 0) {
      LABEL_27:
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
      }
    }
    result = ui_LayoutAccessor_FindAlignment(v2 + 848, "A_Unit");
    if (result != 0) {
      return Alignment_56b600();
    }
  }
  return result;
}

__int64 ClassChangeJobMenu_16b5db0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    goto LABEL_13;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_208be80, 0);
  if (v3 == 0) {
    goto LABEL_13;
  }
  v4 = *(_QWORD*)(v3 + 96);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 1064);
    if (v5 == 0) {
      goto LABEL_13;
    }
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1104LL);
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 1104LL);
      if (v7 != 0) {
        v8 = *(unsigned __int16*)(v7 + 412);
        if (*(_WORD*)(v7 + 412) != 0) {
          v9 = *(_QWORD*)(v5 + 560);
          v10 = *(unsigned __int16*)(v7 + 16);
          v11 = v10 >= (*(_QWORD*)(v5 + 568) - v9) >> 1
                    ? 0
                    : *(_WORD*)(v9 + 2 * v10) & 0x3FF;
          if (v11 >= v8) {
            goto LABEL_13;
          }
        }
      }
    }
    GameRoutine_95e2c0(&v15, v5, v4);
    if ((v15 & 0xBC1) == 0x100 ||
        (*(_BYTE*)(v4 + 49) & 0xFE) == 4 &&
            (game_GameModeData_instance_ == 0 ||
             *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
    LABEL_13:
      LODWORD(v4) = 0;
    }
    else {
      LODWORD(v4) = 1;
    }
  }
  GameRoutine_1560070(&v15, a1 + 848, "L_ClassInfo/L_Class");
  result = v16;
  if (v16 == 0) {
    return result;
  }
  v13 = std___1___shared_weak_count_lock(v16);
  v14 = v15;
  result = v16;
  if (v16 != 0) {
    result = std___1___shared_weak_count___release_weak(v16);
  }
  if (v13 != 0 && v14 != 0) {
    ui_LayoutAccessor_SetPaneVisible(v14, "GaugeBorder", 0);
    ui_LayoutAccessor_SetPaneVisible(v14, "N_Gauge", (unsigned int)v4);
    ui_LayoutAccessor_SetPaneVisible(v14, "L_Gauge", (unsigned int)v4);
    result =
        ui_LayoutAccessor_SetPaneVisible(v14, "Border", (unsigned int)v4 ^ 1);
  }
  else if (v13 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak(v13);
  }
  return result;
}

__int64 ClassChangeJobMenu_16b6670(__int64 a1)
{
  __int64 result;

  result = GameRoutine_16e1a00();
  if ((_DWORD)result == 13) {
    *(_BYTE*)(a1 + 5528) = 1;
  }
  return result;
}

__int64 ClassChangeJobMenu_16b6c30(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];

  v1 = *(_QWORD*)(a1 + 1064);
  v7[0] = v1;
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 392);
  }
  else {
    v3 = 0;
  }
  v7[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v7) !=
      0) {
    return 1;
  }
  v5 = *(_QWORD*)(v1 + 392);
  if (v5 == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(v5 + 288);
  if (v6 == 0 || GameRoutine_975940(v6) == 0) {
    return 1;
  }
  GameRoutine_1605a10(a1, *(_QWORD*)(a1 + 1064), 2);
  return 9;
}

__int64 game_facility_ClassChangeJobMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2) & 1) != 0 &&
      *(_QWORD*)(a1 + 8) == *(_QWORD*)(v2 + 96)) {
    v5 = *(_QWORD*)(v2 + 8);
    v6 = *(_QWORD*)(v5 + 336);
    if (v6 != v2) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v5 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1, 0);
      v7 = *(_QWORD*)(v5 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_15:
        *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v8;
        return 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v6 = *(_QWORD*)(v5 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_15;
  }
  return 0;
}

__int64 game_facility_ClassChangeJobMenu_CopyUnitAndPergeSkill_lambda0_Invoke(
    __int64 result, _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(result + 8);
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_705570();
    }
    v10 = v4 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    result = memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return result;
}

#pragma GCC visibility pop
