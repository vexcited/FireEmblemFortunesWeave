#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_15d2a40(_QWORD, _QWORD);
__int64 GameRoutine_186ad20(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcMaterialItemSelectMenu_Unknown88(__int64 a1);
__int64 ProcMaterialItemSelectMenu_Unknown110(_BYTE* a1, char a2);
_BYTE* ProcMaterialItemSelectMenu_Unknown150(_BYTE* result, __int64* a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_1843070(_QWORD, _QWORD);
__int64 GameRoutine_1866680(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_2131c58[47];
extern __int64 GameData_2131c70[44];
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
__int64
game_facility_anonymous_ProcMaterialItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, _QWORD* a2, int* a3);
_QWORD*
game_facility_anonymous_ProcMaterialItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2);
bool game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702e30(
    __int64 a1, _QWORD* a2);
__int64
game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702f80(
    __int64 a1, _QWORD* a2, __int64* a3);

__int64 ProcMaterialItemSelectMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
    if (result != 0) {
      v3 = result;
      v4 = GameRoutine_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d2a40(v4, v5);
    }
  }
  return result;
}

__int64 ProcMaterialItemSelectMenu_Unknown110(_BYTE* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  int v6;
  __int64 v7;
  __int64 v8;
  _BYTE v9[32];
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;

  if (a1[1128] == 1) {
    return (*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)a1 + 848LL))(a1, a2 & 1);
  }
  if ((a2 & 1) == 0) {
    return 0;
  }
  v11 = v2;
  v12 = v3;
  v6 = GameRoutine_186ad20(a1 + 1096, 0);
  if (v6 == 2) {
    v13 = "MID_Shop_FullItem_Material_Message";
    v7 = GameRoutine_667ea0(a1, &v13);
    if (v7 != 0) {
      v10 = nullptr;
      GameRoutine_6680e0(v9, v7 + 1248);
      if (v10 == v9) {
        v8 = 32;
        goto LABEL_14;
      }
      if (v10 != nullptr) {
        v8 = 40;
      LABEL_14:
        (*(void (**)(void))(*(_QWORD*)v10 + v8))();
      }
    }
    return 12;
  }
  if (v6 != 0) {
    return 1;
  }
  (*(void (**)(_BYTE*))(*(_QWORD*)a1 + 1128LL))(a1);
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  return 13;
}

_BYTE* ProcMaterialItemSelectMenu_Unknown150(_BYTE* result, __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if ((result[1128] & 1) == 0) {
    result =
        (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 192LL))(result);
    v3 = a2[1];
    v4 = a2[2];
    if (v3 >= v4) {
      v6 = *a2;
      v7 = v3 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = (int)result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
        LODWORD(result) = v12;
      }
      else {
        v13 = 0;
      }
      v14 = v13 + v7;
      *(_QWORD*)v14 = "MultiSelection";
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_MultiSelection";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      v5 = v13 + v7 + 40;
      *(_DWORD*)(v14 + 20) = 7;
      *(_DWORD*)(v14 + 24) = (_DWORD)result;
      result = (_BYTE*)memcpy(v13, v6, v7);
      *a2 = v13;
      a2[1] = v5;
      a2[2] = v15;
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16, v6);
      }
    }
    else {
      *(_BYTE*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_QWORD*)v3 = "MultiSelection";
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_MultiSelection";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 7;
      *(_DWORD*)(v3 + 24) = (_DWORD)result;
    }
    a2[1] = v5;
  }
  return result;
}

__int64

game_facility_anonymous_ProcMaterialItemSelectMenu_OnInit_closure_Invoke(
    __int64 a1, _QWORD* a2, int* a3)
{
  return GameRoutine_1843070(
      *a2,
      *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1072LL) + 4LL * *a3));
}

_QWORD*

game_facility_anonymous_ProcMaterialItemSelectMenu_AddItemList_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  GameRoutine_1866680(v4, 0, *(_QWORD*)(v2 + 1064), a2,
                      *(unsigned __int8*)(v2 + 1128));
  v5 = GameData_2131c70[0];
  v4[18] = 0;
  v4[19] = 0;
  v4[20] = 0;
  v4[21] = 0;
  *v4 = v5 + 16;
  v4[12] = v5 + 712;
  return BasicMenuCursor_16e0c00((_QWORD*)v2, (__int64)v4);
}

bool game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702e30(
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

game_facility_anonymous_ProcMaterialItemSelectMenu_SortAndFilter_closure_Invoke_1702f80(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64** v7;
  _QWORD* v8;
  __int64* v9;
  __int64* v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 (*v19)(_QWORD);
  __int64 v20;
  _QWORD* v21;
  _BOOL4 v22;
  __int64* v23;
  __int64* v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (*v33)(_QWORD);
  __int64 v34;
  _QWORD* v35;
  _BOOL4 v36;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD v41[2];
  int v42;
  _BOOL4 v43;
  char v44;
  _QWORD v45[2];
  int v46;
  _BOOL4 v47;
  char v48;

  v3 = *a3;
  if (*a2 != 0) {
    v4 = (_QWORD*)__dynamic_cast(*a2, GameData_212e008[0], GameData_2131c58[0],
                                 0);
    if (v3 != 0) {
    LABEL_3:
      v5 = (_QWORD*)__dynamic_cast(v3, GameData_212e008[0], GameData_2131c58[0],
                                   0);
      goto LABEL_6;
    }
  }
  else {
    v4 = nullptr;
    if (v3 != 0) {
      goto LABEL_3;
    }
  }
  v5 = nullptr;
LABEL_6:
  v39 = (*(__int64 (**)(_QWORD*))(*v4 + 560LL))(v4);
  v6 = (*(__int64 (**)(_QWORD*))(*v5 + 560LL))(v5);
  v7 = (__int64**)v4[15];
  v8 = (_QWORD*)v5[15];
  v38 = v6;
  v40 = v8;
  v10 = *v7;
  v9 = v7[1];
  if (v9 == *v7) {
    v22 = true;
  }
  else {
    v11 = 1;
    v12 = 0;
    do {
      v13 = *v10;
      v14 = *(_QWORD*)(*v10 + 24);
      v16 = *(_QWORD*)(v14 + 48);
      v15 = *(_QWORD*)(v14 + 56);
      if (v15 == v16) {
      LABEL_11:
        if (*(_BYTE*)(v13 + 107) != 0) {
          v12 += *(unsigned __int8*)(v13 + 107);
        }
        else {
          v11 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v16 != 0) {
            v17 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v18 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v16);
              if (v18 != 0) {
                v19 = *(__int64 (**)(_QWORD))(v18 + 72);
                v20 = *(_QWORD*)(v18 + 80);
                v21 = (_QWORD*)(v18 + (v20 >> 1));
                if ((v20 & 1) != 0) {
                  v19 = *(__int64 (**)(_QWORD))((char*)v19 + *v21);
                }
                LOBYTE(v6) = v19(v21);
              }
              else {
                LOBYTE(v6) = 1;
              }
            }
            if (*(_BYTE*)(v16 + 16) != ((v17 == 0) | v6 & 1)) {
              break;
            }
          }
          v16 += 24;
          if (v16 == v15) {
            goto LABEL_11;
          }
        }
      }
      ++v10;
    } while (v10 != v9);
    if (v12 * v11 < 1) {
      v22 = true;
    }
    else {
      LODWORD(v6) = GameRoutine_8a1dc0(v7);
      v22 = (int)v6 > 0;
    }
    v8 = v40;
  }
  v24 = (__int64*)*v8;
  v23 = (__int64*)v8[1];
  if (v23 == (__int64*)*v8) {
    v36 = true;
  }
  else {
    v25 = 1;
    v26 = 0;
    do {
      v27 = *v24;
      v28 = *(_QWORD*)(*v24 + 24);
      v29 = *(_QWORD*)(v28 + 48);
      v30 = *(_QWORD*)(v28 + 56);
      if (v30 == v29) {
      LABEL_32:
        if (*(_BYTE*)(v27 + 107) != 0) {
          v26 += *(unsigned __int8*)(v27 + 107);
        }
        else {
          v25 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v29 != 0) {
            v31 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v32 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v29);
              if (v32 != 0) {
                v33 = *(__int64 (**)(_QWORD))(v32 + 72);
                v34 = *(_QWORD*)(v32 + 80);
                v35 = (_QWORD*)(v32 + (v34 >> 1));
                if ((v34 & 1) != 0) {
                  v33 = *(__int64 (**)(_QWORD))((char*)v33 + *v35);
                }
                LOBYTE(v6) = v33(v35);
              }
              else {
                LOBYTE(v6) = 1;
              }
            }
            if (*(_BYTE*)(v29 + 16) != ((v31 == 0) | v6 & 1)) {
              break;
            }
          }
          v29 += 24;
          if (v29 == v30) {
            goto LABEL_32;
          }
        }
      }
      ++v24;
    } while (v24 != v23);
    v36 = v26 * v25 < 1 || (int)GameRoutine_8a1dc0(v40) > 0;
  }
  v46 = 0;
  v47 = v22;
  v48 = 1;
  v42 = 0;
  v43 = v36;
  v44 = 1;
  v45[0] = v39;
  v45[1] = 0;
  v41[0] = v38;
  v41[1] = 0;
  return GameRoutine_19ef8e0(v45, v41) & 1;
}

#pragma GCC visibility pop
