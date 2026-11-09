#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_822b00(_QWORD);
__int64 MapInfo_825790(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
extern __int64 GameData_207d218;
extern __int64 GameData_21cd128;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcConfigMenu_Unknown88(__int64 a1);
__int64 ProcConfigMenu_Unknown94(__int64 a1);
__int64 ProcConfigMenu_Unknown142(__int64 a1, __int64* a2);
__int64 GameRoutine_81a240(_QWORD*);
__int64 GameRoutine_995200(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f1618;
extern __int64 game_script_map_effect_g_sequence;
__int64 ProcConfigMenu_822b00();

__int64 ProcConfigMenu_822b00()
{
  _QWORD* v0;
  _QWORD* v1;
  _QWORD* v2;
  int v3;
  _QWORD* i;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  char v16;
  char v17;
  __int64 v19;
  int v20;

  if (game_script_map_effect_g_sequence == 0 ||
      (v20 = 15, (v0 = (_QWORD*)game_UnitPool_GetFirst(&v20)) == nullptr)) {
    LOBYTE(v9) = 0;
    goto LABEL_19;
  }
  v1 = (_QWORD*)v0[54];
  if (v1 != nullptr) {
    goto LABEL_4;
  }
  v10 = v0[55];
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v10 + 16);
    if (v11 <= 8) {
      v19 = 24LL * (unsigned int)v11 + 556024;
      while (1) {
        if (v11 <= 2) {
          v1 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + v19);
          if (v1 != nullptr) {
            break;
          }
        }
        ++v11;
        v19 += 24;
        if (v11 == 9) {
          goto LABEL_18;
        }
      }
    LABEL_4:
      v2 = v1;
      v3 = GameRoutine_81a240(v0);
      for (i = v2;; i = v5) {
        v5 = (_QWORD*)i[54];
        if (v5 == nullptr) {
          v6 = i[55];
          if (v6 == 0 || (v7 = *(unsigned __int8*)(v6 + 16)) > 8) {
          LABEL_15:
            v9 = v3 | GameRoutine_81a240(i);
            goto LABEL_19;
          }
          v8 = 24LL * (unsigned int)v7 + 556024;
          while (1) {
            if (v7 <= 2) {
              v5 = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + v8);
              if (v5 != nullptr) {
                break;
              }
            }
            ++v7;
            v8 += 24;
            if (v7 == 9) {
              goto LABEL_15;
            }
          }
        }
        v3 |= GameRoutine_81a240(i);
      }
    }
  }

LABEL_18:
  LOBYTE(v9) = GameRoutine_81a240(v0);

LABEL_19:
  v12 = GameData_21f1618;
  if (GameData_21f1618 != 0) {
    v13 = *(_QWORD*)(GameData_21c96e8 + 8);
    v14 = *(_QWORD**)(v13 + 8);
    v15 = *(_QWORD**)(v13 + 16);
    if (v14 == v15) {
      v16 = 0;
    }
    else {
      v16 = 0;
      do {
        if (v12 != 0) {
          v17 = GameRoutine_995200(*v14 + 112LL);
          v12 = GameData_21f1618;
          v16 |= v17;
        }
        ++v14;
      } while (v14 != v15);
    }
    LOBYTE(v9) = v9 | v16;
  }
  return v9 & 1;
}

__int64 ProcConfigMenu_Unknown88(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_207d218, 0);
    if (result != 0) {
      GameRoutine_1562060(a1 + 848, "L_InfoTxt/T_Txt",
                          *(_QWORD*)(*(_QWORD*)(result + 88) + 16LL));
      result = ui_LayoutAccessor_FindAlignment(a1 + 848, "A_Info");
      if (result != 0) {
        return Alignment_56b600(result);
      }
    }
  }
  return result;
}

__int64 ProcConfigMenu_Unknown94(__int64 a1)
{
  int v2;
  __int64 result;

  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  GameRoutine_155e830(a1 + 848, 0);
  GameRoutine_822b00(a1);
  if (GameData_21f1e08 != 0) {
    v2 = *(_DWORD*)(GameData_21f1e08 + 252);
    if (v2 <= 1) {
      v2 = 1;
    }
    *(_DWORD*)(GameData_21f1e08 + 252) = v2 - 1;
  }
  result = GameData_21cd128;
  if (GameData_21cd128 != 0) {
    return MapInfo_825790();
  }
  return result;
}

__int64 ProcConfigMenu_Unknown142(__int64 a1, __int64* a2)
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
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Config_Reset";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 10;
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
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Config_Reset";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 10;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_DWORD*)(v19 + 20) = 0;
    *(_DWORD*)(v19 + 24) = result;
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    v21 = v19 + 40;
    *(_QWORD*)v19 = "ItemChange";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_ItemChange";
    *(_BYTE*)(v19 + 16) = 1;
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
  *(_QWORD*)v29 = "ItemChange";
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_ItemChange";
  *(_DWORD*)(v29 + 20) = 0;
  *(_DWORD*)(v29 + 24) = result;
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  v21 = v28 + v23 + 40;
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

#pragma GCC visibility pop
