#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15d2910(_QWORD, _QWORD);
__int64 GameRoutine_17a1f20(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_20cd4c8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212e008[9];
__int64 ProcDeliveryMaterialMenu_Unknown88(__int64 a1);
__int64 ProcDeliveryMaterialMenu_Unknown96(_QWORD* a1);
const char* ProcDeliveryMaterialMenu_Unknown139(__int64 a1);
const char* ProcDeliveryMaterialMenu_Unknown140(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD, long double);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 (*game_menu_anonymous_DeliveryMaterialMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
const char* ProcDeliveryMaterialMenu_Unknown3(__int64 a1);
const char* ProcDeliveryMaterialMenu_Unknown5(__int64 a1);
_QWORD* ProcDeliveryMaterialMenu_17a1ae0(_QWORD* result, unsigned __int8* a2,
                                         unsigned __int8* a3);
_QWORD* ProcDeliveryMaterialMenu_17a1ca0(_QWORD* result);
__int64 ProcDeliveryMaterialMenu_17a1f20(__int64 result, __int64 a2);
__int64 game_menu_anonymous_ProcDeliveryMaterialMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int16* a2);
bool game_menu_anonymous_ProcDeliveryMaterialMenu_SortAndFilter_closure_Invoke_17a35f0(
    __int64 a1, __int64 a2);
__int64 GameRoutine_17a1df0(__int64);
__int64 GameRoutine_187dc60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ef8e0(_QWORD, _QWORD);
__int64 GameSubquestData_125ec20(_QWORD, _QWORD);
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2132650[6];
__int64
game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3);
__int64
game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDeliverDialog_closure_Invoke(
    __int64 a1);
__int64
game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDeliverDialog_closure0_Invoke(
    __int64 a1);
__int64
game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDialog_closure0_Invoke(
    __int64 a1);
__int64
game_menu_anonymous_ProcDeliveryMaterialMenu_BCall_closure_Invoke(__int64 a1);
__int64
game_menu_anonymous_ProcDeliveryMaterialMenu_SortAndFilter_closure_Invoke_17a3740(
    __int64 a1, _QWORD* a2, __int64* a3);

__int64 ProcDeliveryMaterialMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20cd4c8, 0);
    if (result != 0) {
      v3 = result;
      GameRoutine_1560070((void*)&v9, a1 + 848, "L_Menu/L_InfoDetail");
      result = v10;
      if (v10 != 0) {
        v4 = std___1___shared_weak_count_lock(v10);
        v5 = v9;
        result = v10;
        if (v10 != 0) {
          result = std___1___shared_weak_count___release_weak();
        }
        if (v4 != 0 && v5 != 0) {
          v6 = *(int*)(v3 + 40);
          v7 = *(_QWORD*)(v3 + 88);
          if (v7 != 0) {
            v8 = v7 + 8 * v6 + 828;
          }
          else {
            v8 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                          game_TransporterConst_List_instance__ptr
                                              [0] +
                                      8LL) +
                           8LL) +
                12LL * (int)v6 + 4;
          }
          result = GameRoutine_15d2910(v5, v8);
        }
        else if (v4 == 0) {
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak();
        }
      }
    }
  }
  return result;
}

__int64 ProcDeliveryMaterialMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return GameRoutine_17a1f20(a1[42], a1[138]);
}

const char* ProcDeliveryMaterialMenu_Unknown139(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_Title";
  }
  else {
    return "MID_HubMenu_Scout";
  }
}

const char* ProcDeliveryMaterialMenu_Unknown140(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_ItemSelect_Help";
  }
  else {
    return "MID_ScoutMenu_Give_Help";
  }
}

const char* ProcDeliveryMaterialMenu_Unknown3(__int64 a1)
{
  if (*(_QWORD*)(a1 + 8) != 0) {
    return "MID_DeliveryMenu_Title";
  }
  else {
    return "MID_HubMenu_Scout";
  }
}

const char* ProcDeliveryMaterialMenu_Unknown5(__int64 a1)
{
  if (*(_QWORD*)(a1 + 8) != 0) {
    return "MID_DeliveryMenu_ItemSelect_Help";
  }
  else {
    return "MID_ScoutMenu_Give_Help";
  }
}

_QWORD* ProcDeliveryMaterialMenu_17a1ae0(_QWORD* result, unsigned __int8* a2,
                                         unsigned __int8* a3)
{
  __int64* v3;
  char* v5;
  __int64** v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64* v11;
  unsigned int v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  char v17;
  __int64* v18;
  __int64 v19;
  unsigned int v20;

  result[1] = 0;
  v3 = result + 1;
  result[2] = 0;
  *result = result + 1;
  if (a2 != a3) {
    v5 = (char*)a2;
    v6 = (__int64**)result;
    v7 = 0;
    v8 = result + 1;
    v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v10 = v3;
      if (v3 != v8) {
        v11 = (__int64*)v7;
        v10 = v3;
        if (v7 != 0) {
          do {
            v10 = v11;
            v11 = (__int64*)v11[1];
          } while (v11 != nullptr);
          v12 = (unsigned __int8)*v5;
          if (*((unsigned __int8*)v10 + 25) >= v12) {
            while (1) {
              while (1) {
                v15 = (__int64*)v7;
                v20 = *(unsigned __int8*)(v7 + 25);
                if (v12 >= v20) {
                  break;
                }
                v7 = *v15;
                v14 = v15;
                if (*v15 == 0) {
                  goto LABEL_17;
                }
              }
              if (v20 >= v12) {
                goto LABEL_26;
              }
              v7 = v15[1];
              if (v7 == 0) {
                v14 = v15 + 1;
                goto LABEL_17;
              }
            }
          }
        }
        else {
          do {
            v13 = v10;
            v10 = (__int64*)v10[2];
          } while (v13 == (__int64*)*v10);
          v14 = v3;
          v15 = v3;
          if (*((unsigned __int8*)v10 + 25) >=
              (unsigned int)(unsigned __int8)*v5) {
          LABEL_17:
            v16 = fw_memory_HeapManager_Allocate(*v9, 32, 16, 0);
            v17 = *v5;
            *(_QWORD*)v16 = 0;
            *(_QWORD*)(v16 + 8) = 0;
            *(_QWORD*)(v16 + 16) = v15;
            *(_BYTE*)(v16 + 25) = v17;
            *v14 = v16;
            v18 = (__int64*)**v6;
            if (v18 != nullptr) {
              *v6 = v18;
              v19 = *v14;
            }
            else {
              v19 = v16;
            }
            result = (_QWORD*)fw_containers_BalanceAfterInsert(v6[1], v19);
            v6[2] = (__int64*)((char*)v6[2] + 1);
            goto LABEL_26;
          }
        }
      }
      if (v7 != 0) {
        v14 = v10 + 1;
      }
      else {
        v14 = v3;
      }
      if (v7 != 0) {
        v15 = v10;
      }
      else {
        v15 = v3;
      }
      if (*v14 == 0) {
        goto LABEL_17;
      }
    LABEL_26:
      if (++v5 == (char*)a3) {
        return result;
      }
      v8 = *v6;
      v7 = (__int64)v6[1];
    }
  }
  return result;
}

_QWORD* ProcDeliveryMaterialMenu_17a1ca0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  if (result != nullptr) {
    v1 = result;
    ProcDeliveryMaterialMenu_17a1ca0(*result);
    ProcDeliveryMaterialMenu_17a1ca0(v1[1]);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
  return result;
}

__int64 ProcDeliveryMaterialMenu_17a1f20(__int64 result, __int64 a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  atomic_ullong* v15;
  __int64* v16;
  __int64* v17;
  long double v18;

  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20cd4c8, 0);
    if (result != 0) {
      v3 = result;
      v4 = *(_DWORD*)(a2 + 24LL * *(int*)(result + 96) + 16);
      *(_DWORD*)(result + 100) = v4;
      v5 = *(_QWORD*)(result + 56);
      if (v5 == 0) {
        goto LABEL_8;
      }
      v6 = std___1___shared_weak_count_lock(v5);
      if (v6 == 0) {
        goto LABEL_8;
      }
      v7 = *(__int64**)(v3 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak();
      }
      if (v7 == nullptr) {
      LABEL_8:
        v7 = ui_LayoutAccessor_empty__ptr[0];
      }
      v8 = game_util_Format("%d", v4);
      v9 = ui_LayoutAccessor_FindTextBox(v7, "T_Num");
      if (v9 != 0) {
        GameRoutine_156c5d0(v9, v8, 0);
      }
      v10 = *(_QWORD*)(v3 + 56);
      v11 = (char*)GameData_212da30 + 36;
      if (v4 > 0) {
        v11 = (char*)GameData_212da30 + 44;
      }
      v12 = *(_DWORD*)v11;
      if (v10 == 0) {
        goto LABEL_18;
      }
      v13 = std___1___shared_weak_count_lock(v10);
      if (v13 == 0) {
        goto LABEL_18;
      }
      v14 = v13;
      v15 = (atomic_ullong*)(v13 + 8);
      v16 = *(__int64**)(v3 + 48);
      if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v17 = v16;
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak();
        v16 = v17;
      }
      if (v16 == nullptr) {
      LABEL_18:
        v16 = ui_LayoutAccessor_empty__ptr[0];
      }
      result = ui_LayoutAccessor_FindTextBox(v16, "T_Num");
      if (result != 0) {
        result = Pane_58f8a0(result, v18);
        if (result != 0) {
          *(_DWORD*)(result + 12) = v12;
        }
      }
    }
  }
  return result;
}

__int64

game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDialog_closure_Invoke(
    __int64 a1, __int64 a2, int* a3)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = 3LL * *(int*)(a1 + 8);
  v6 = *a3;
  *(_DWORD*)(*(_QWORD*)(v4 + 1104) + 24LL * *(int*)(a1 + 8) + 8) =
      *(_DWORD*)(a1 + 12);
  *(_DWORD*)(*(_QWORD*)(v4 + 1104) + 8 * v5 + 16) = v6;
  v7 = *(_QWORD*)(v4 + 1104);
  v8 = *(_QWORD*)(v4 + 1112) - v7;
  if (v8 != 0) {
    v9 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
    v10 = v9 & 7;
    if (v9 >= 8) {
      v13 = (_DWORD*)(v7 + 112);
      v14 = 0;
      v12 = 0;
      v15 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v12 += v13[12] + v13[6] + *v13 + *(v13 - 6) + *(v13 - 12) +
               *(v13 - 18) + *(v13 - 24);
        if (v14 != 0xFFFFFFFF00000008LL) {
          v12 += v13[18];
        }
        v13 += 48;
        v14 -= 8;
      } while (v15 != v14);
      v11 = -v14;
      if (v10 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v11 = 0;
      v12 = 0;
      if ((v9 & 7) == 0) {
      LABEL_16:
        *(_DWORD*)(v4 + 1128) = v12;
        return GameRoutine_17a1df0(v4);
      }
    }
    v16 = v7 + 24 * v11;
    v17 = v11 - 0xFFFFFFFFLL;
    v18 = (_DWORD*)(v16 + 16);
    do {
      if (v17 != 0) {
        v12 += *v18;
      }
      v18 += 6;
      ++v17;
      --v10;
    } while (v10 != 0);
    goto LABEL_16;
  }
  *(_DWORD*)(v4 + 1128) = 0;
  return GameRoutine_17a1df0(v4);
}

__int64

game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDeliverDialog_closure_Invoke(
    __int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  v1 = *(_QWORD**)(a1 + 8);
  (*(void (**)(_QWORD*))(v1[132] + 104LL))(v1 + 132);
  v2 = v1[133];
  if (v2 != 0) {
    v3 = v1;
    v4 = v1;
    v5 = GameData_212c610;
    v6 = GameData_2131c18[0];
    do {
      v7 = __dynamic_cast(v4, v5, v6, 0);
      v4 = (_QWORD*)v4[4];
      if (v7 != 0) {
        v3 = (_QWORD*)v7;
      }
    } while (v4 != nullptr);
    v8 = (_QWORD*)v3[19];
    if (v8 == nullptr) {
      v8 = v3;
    }
    GameRoutine_187dc60(v8[4], v2, v1 + 135);
  }
  else {
    GameSubquestData_125ec20(v1[135], v1[136]);
  }
  while (1) {
    v1 = (_QWORD*)v1[4];
    if (v1 == nullptr) {
      break;
    }
    if (*v1 == GameData_2132650[0] + 16) {
      return 5;
    }
  }
  return 4;
}

__int64

game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDeliverDialog_closure0_Invoke(
    __int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v1 + 1088) -= 16LL;
  GameRoutine_17a1df0(v1);
  return 3;
}

__int64

game_menu_anonymous_ProcDeliveryMaterialMenu_CreateDialog_closure0_Invoke(
    __int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(a1 + 16);
  v4 = 3LL * *(int*)(a1 + 20);
  v5 = *(_QWORD*)(v2 + 1104) + 24LL * *(int*)(a1 + 20);
  v6 = *(_DWORD*)(v5 + 16);
  *(_DWORD*)(v5 + 8) = *(_DWORD*)(a1 + 24);
  if (v6 <= 0) {
    v3 = 0;
  }
  *(_DWORD*)(*(_QWORD*)(v2 + 1104) + 8 * v4 + 16) = v3;
  v7 = *(_QWORD*)(v2 + 1104);
  v8 = *(_QWORD*)(v2 + 1112) - v7;
  if (v8 == 0) {
    v12 = 0;
    goto LABEL_17;
  }
  v9 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
  v10 = v9 & 7;
  if (v9 < 8) {
    v11 = 0;
    v12 = 0;
    if ((v9 & 7) == 0) {
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  v13 = (_DWORD*)(v7 + 112);
  v14 = 0;
  v12 = 0;
  v15 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v12 += v13[12] + v13[6] + *v13 + *(v13 - 6) + *(v13 - 12) + *(v13 - 18) +
           *(v13 - 24);
    if (v14 != 0xFFFFFFFF00000008LL) {
      v12 += v13[18];
    }
    v13 += 48;
    v14 -= 8;
  } while (v15 != v14);
  v11 = -v14;
  if (v10 != 0) {
  LABEL_13:
    v16 = v7 + 24 * v11;
    v17 = v11 - 0xFFFFFFFFLL;
    v18 = (_DWORD*)(v16 + 16);
    do {
      if (v17 != 0) {
        v12 += *v18;
      }
      v18 += 6;
      ++v17;
      --v10;
    } while (v10 != 0);
  }
LABEL_17:
  *(_DWORD*)(v2 + 1128) = v12;
  GameRoutine_17a1df0(v2);
  return 3;
}

__int64

game_menu_anonymous_ProcDeliveryMaterialMenu_BCall_closure_Invoke(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1056LL) + 104LL))(
      *(_QWORD*)(a1 + 8) + 1056LL);
  return 5;
}

__int64 game_menu_anonymous_ProcDeliveryMaterialMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int16* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  int v7;
  unsigned int v8;

  if (a2[2] != 0) {
    v2 = *(_QWORD*)(result + 16);
    v4 = result;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        104, 16, 0);
    v6 = *(_DWORD**)(v4 + 8);
    v7 = *a2;
    v8 = (*v6)++;
    *(_WORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)(v5 + 96) = v8;
    *(_DWORD*)(v5 + 40) = v7;
    *(_WORD*)(v5 + 80) = 257;
    *(_BYTE*)(v5 + 82) = 1;
    *(_QWORD*)v5 = game_menu_anonymous_DeliveryMaterialMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    return BasicMenuCursor_16e0c00(v2, v5);
  }
  return result;
}

bool game_menu_anonymous_ProcDeliveryMaterialMenu_SortAndFilter_closure_Invoke_17a35f0(
    __int64 a1, __int64 a2)
{
  int v2;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v6;

  v2 = *(unsigned __int8*)(a1 + 8);
  if (v2 == 32) {
    return true;
  }
  v4 = *(int*)(*(_QWORD*)a2 + 40LL);
  v5 = *(_QWORD*)(*(_QWORD*)a2 + 88LL);
  if (v5 != 0) {
    v6 = (unsigned __int16*)(v5 + 8 * v4 + 828);
  }
  else {
    v6 =
        (unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      game_TransporterConst_List_instance__ptr
                                                          [0] +
                                                  8LL) +
                                       8LL) +
                            12LL * (int)v4 + 4);
  }
  return v2 ==
         *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * *v6) +
                             73LL);
}

__int64

game_menu_anonymous_ProcDeliveryMaterialMenu_SortAndFilter_closure_Invoke_17a3740(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[3];
  char v14;
  _QWORD v15[3];
  char v16;

  v3 = *a3;
  if (*a2 != 0) {
    v4 = __dynamic_cast(*a2, GameData_212e008[0], &GameData_20cd4c8, 0);
    if (v3 != 0) {
    LABEL_3:
      v5 = __dynamic_cast(v3, GameData_212e008[0], &GameData_20cd4c8, 0);
      goto LABEL_6;
    }
  }
  else {
    v4 = 0;
    if (v3 != 0) {
      goto LABEL_3;
    }
  }
  v5 = 0;
LABEL_6:
  v6 = *(int*)(v4 + 40);
  v7 = *(_QWORD*)(v4 + 88);
  if (v7 != 0) {
    v8 = v7 + 8 * v6 + 828;
  }
  else {
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v6 + 4;
  }
  v9 = *(int*)(v5 + 40);
  v10 = *(_QWORD*)(v5 + 88);
  if (v10 != 0) {
    v11 = v10 + 8 * v9 + 828;
  }
  else {
    v11 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v9 + 4;
  }
  v15[0] = v8;
  v15[1] = 0;
  v15[2] = 0;
  v16 = 0;
  v13[0] = v11;
  v13[1] = 0;
  v13[2] = 0;
  v14 = 0;
  return GameRoutine_19ef8e0(v15, v13) & 1;
}

#pragma GCC visibility pop
