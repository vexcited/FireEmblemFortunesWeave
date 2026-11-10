#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* ProcDeliveryTransportMenu_Unknown141(__int64 a1);
const char* ProcDeliveryTransportMenu_Unknown142(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
extern __int64 (*GameData_20b0b70[])();
extern __int64 (*game_menu_anonymous_DeliveryTransportMenuItem_vtable[])();
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212c878[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
const char* ProcDeliveryTransportMenu_Unknown3(__int64 a1);
const char* ProcDeliveryTransportMenu_Unknown5(__int64 a1);
__int64 game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(__int64 a1,
                                                                  __int64 a2,
                                                                  __int64 a3);
__int64 GameRoutine_187dc60(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125ec20(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2132650[6];
extern char GameData_2262bf8;
__int64
game_menu_anonymous_ProcDeliveryTransportMenu_ACall_closure0_Invoke(__int64 a1);
__int64
game_menu_anonymous_ProcDeliveryTransportMenu_BCall_closure_Invoke(__int64 a1);
__int64
game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int16* a2);

const char* ProcDeliveryTransportMenu_Unknown141(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_Title";
  }
  else {
    return "MID_HubMenu_Scout";
  }
}

const char* ProcDeliveryTransportMenu_Unknown142(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1064) != 0) {
    return "MID_DeliveryMenu_ItemSelect_Help";
  }
  else {
    return "MID_ScoutMenu_Give_Help";
  }
}

const char* ProcDeliveryTransportMenu_Unknown3(__int64 a1)
{
  if (*(_QWORD*)(a1 + 8) != 0) {
    return "MID_DeliveryMenu_Title";
  }
  else {
    return "MID_HubMenu_Scout";
  }
}

const char* ProcDeliveryTransportMenu_Unknown5(__int64 a1)
{
  if (*(_QWORD*)(a1 + 8) != 0) {
    return "MID_DeliveryMenu_ItemSelect_Help";
  }
  else {
    return "MID_ScoutMenu_Give_Help";
  }
}

__int64

game_menu_anonymous_ProcDeliveryTransportMenu_ACall_closure0_Invoke(__int64 a1)
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
  GameData_2262bf8 = 1;
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

game_menu_anonymous_ProcDeliveryTransportMenu_BCall_closure_Invoke(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1056LL) + 104LL))(
      *(_QWORD*)(a1 + 8) + 1056LL);
  return 5;
}

__int64 game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList(__int64 a1,
                                                                  __int64 a2,
                                                                  __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  _WORD* v13;
  unsigned int v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  _QWORD v31[4];
  _QWORD* v32;

  v31[2] = a2;
  v4 = a2;
  v31[0] = GameData_20b0b70;
  v31[1] = a1;
  v5 = v31;
  v32 = v31;
  v6 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v7 = *(unsigned int*)(v6 + 80);
  if ((int)v7 < 1) {
    goto LABEL_11;
  }
  v8 = 0;
  v9 = 12 * v7;
  do {
    a2 = *(_QWORD*)(v6 + 8) + v8;
    if (*(_WORD*)(a2 + 2) != 0) {
      if (v32 == nullptr) {
        GameRoutine_60a310(0, a2, a3);
      }
      (*(void (**)(_QWORD*))(*v32 + 48LL))(v32);
    }
    v8 += 12;
  } while (v9 != v8);
  v5 = v32;
  if (v32 == v31) {
  LABEL_11:
    v10 = 32;
  }
  else {
    if (v32 == nullptr) {
      goto LABEL_13;
    }
    v10 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v5 + v10))(v5, a2, a3);
LABEL_13:
  LODWORD(v31[0]) = 17;
  result = game_UnitPool_GetFirst(v31);
  if (result != 0) {
    v12 = *(_QWORD*)(result + 432);
    v13 = (_WORD*)result;
    if (v12 == 0) {
      v12 = *(_QWORD*)(result + 440);
      if (v12 != 0) {
        v14 = *(unsigned __int8*)(v12 + 16);
        if (v14 <= 8) {
          v30 = v14 - 3;
          while (1) {
            if (v30 == 0) {
              v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v12 != 0) {
                break;
              }
            }
            if (++v30 == 6) {
              goto LABEL_17;
            }
          }
        }
        else {
        LABEL_17:
          v12 = 0;
        }
      }
    }
    v15 = GameData_212c878[0];
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_20:
      v17 = v12;
      if (v13[414] != 0 &&
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) +
                                           8LL * (unsigned __int16)v13[414]) +
                                24LL) +
                     600LL) == v4) {
        v20 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v20 + 16) = 0;
        *(_QWORD*)(v20 + 48) = 0;
        *(_QWORD*)(v20 + 56) = 0;
        *(_QWORD*)(v20 + 64) = 0;
        *(_QWORD*)(v20 + 72) = 0;
        *(_WORD*)(v20 + 80) = 257;
        *(_BYTE*)(v20 + 82) = 1;
        *(_QWORD*)(v20 + 88) = v13;
        *(_DWORD*)(v20 + 40) = 0;
        *(_QWORD*)v20 = game_menu_anonymous_DeliveryTransportMenuItem_vtable;
        *(_QWORD*)(v20 + 8) = 0;
        *(_BYTE*)(v20 + 96) = 0;
        result = BasicMenuCursor_16e0c00(a1, v20);
        v18 = (unsigned __int16)v13[418];
        if (v13[418] == 0) {
          goto LABEL_26;
        }
      }
      else {
        v18 = (unsigned __int16)v13[418];
        if (v13[418] == 0) {
          goto LABEL_26;
        }
      }
      if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8 * v18) +
                                24LL) +
                     600LL) == v4) {
        v19 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v19 + 16) = 0;
        *(_QWORD*)(v19 + 48) = 0;
        *(_QWORD*)(v19 + 56) = 0;
        *(_QWORD*)(v19 + 64) = 0;
        *(_QWORD*)(v19 + 72) = 0;
        *(_WORD*)(v19 + 80) = 257;
        *(_BYTE*)(v19 + 82) = 1;
        *(_QWORD*)(v19 + 88) = v13;
        *(_DWORD*)(v19 + 40) = 1;
        *(_QWORD*)v19 = game_menu_anonymous_DeliveryTransportMenuItem_vtable;
        *(_QWORD*)(v19 + 8) = 0;
        *(_BYTE*)(v19 + 96) = 0;
        result = BasicMenuCursor_16e0c00(a1, v19);
      }
    LABEL_26:
      if (v13[422] != 0 &&
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) +
                                           8LL * (unsigned __int16)v13[422]) +
                                24LL) +
                     600LL) == v4) {
        v23 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v23 + 16) = 0;
        *(_QWORD*)(v23 + 48) = 0;
        *(_QWORD*)(v23 + 56) = 0;
        *(_QWORD*)(v23 + 64) = 0;
        *(_QWORD*)(v23 + 72) = 0;
        *(_WORD*)(v23 + 80) = 257;
        *(_BYTE*)(v23 + 82) = 1;
        *(_QWORD*)(v23 + 88) = v13;
        *(_QWORD*)v23 = game_menu_anonymous_DeliveryTransportMenuItem_vtable;
        *(_QWORD*)(v23 + 8) = 0;
        *(_BYTE*)(v23 + 96) = 0;
        *(_DWORD*)(v23 + 40) = 2;
        result = BasicMenuCursor_16e0c00(a1, v23);
        v21 = (unsigned __int16)v13[426];
        if (v13[426] == 0) {
          goto LABEL_32;
        }
      }
      else {
        v21 = (unsigned __int16)v13[426];
        if (v13[426] == 0) {
          goto LABEL_32;
        }
      }
      if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8 * v21) +
                                24LL) +
                     600LL) == v4) {
        v22 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v22 + 16) = 0;
        *(_QWORD*)(v22 + 48) = 0;
        *(_QWORD*)(v22 + 56) = 0;
        *(_QWORD*)(v22 + 64) = 0;
        *(_QWORD*)(v22 + 72) = 0;
        *(_WORD*)(v22 + 80) = 257;
        *(_BYTE*)(v22 + 82) = 1;
        *(_QWORD*)(v22 + 88) = v13;
        *(_QWORD*)v22 = game_menu_anonymous_DeliveryTransportMenuItem_vtable;
        *(_QWORD*)(v22 + 8) = 0;
        *(_BYTE*)(v22 + 96) = 0;
        *(_DWORD*)(v22 + 40) = 3;
        result = BasicMenuCursor_16e0c00(a1, v22);
      }
    LABEL_32:
      if (v13[430] != 0 &&
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) +
                                           8LL * (unsigned __int16)v13[430]) +
                                24LL) +
                     600LL) == v4) {
        v26 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v26 + 16) = 0;
        *(_QWORD*)(v26 + 48) = 0;
        *(_QWORD*)(v26 + 56) = 0;
        *(_QWORD*)(v26 + 64) = 0;
        *(_QWORD*)(v26 + 72) = 0;
        *(_WORD*)(v26 + 80) = 257;
        *(_BYTE*)(v26 + 82) = 1;
        *(_QWORD*)(v26 + 88) = v13;
        *(_QWORD*)v26 = game_menu_anonymous_DeliveryTransportMenuItem_vtable;
        *(_QWORD*)(v26 + 8) = 0;
        *(_BYTE*)(v26 + 96) = 0;
        *(_DWORD*)(v26 + 40) = 4;
        result = BasicMenuCursor_16e0c00(a1, v26);
        v24 = (unsigned __int16)v13[434];
        if (v13[434] == 0) {
          goto LABEL_38;
        }
      }
      else {
        v24 = (unsigned __int16)v13[434];
        if (v13[434] == 0) {
          goto LABEL_38;
        }
      }
      if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) + 8 * v24) +
                                24LL) +
                     600LL) == v4) {
        v25 = fw_memory_HeapManager_Allocate(*v16, 104, 16, 0);
        *(_WORD*)(v25 + 16) = 0;
        *(_QWORD*)(v25 + 48) = 0;
        *(_QWORD*)(v25 + 56) = 0;
        *(_QWORD*)(v25 + 64) = 0;
        *(_QWORD*)(v25 + 72) = 0;
        *(_WORD*)(v25 + 80) = 257;
        *(_BYTE*)(v25 + 82) = 1;
        *(_QWORD*)(v25 + 88) = v13;
        *(_QWORD*)v25 = game_menu_anonymous_DeliveryTransportMenuItem_vtable;
        *(_QWORD*)(v25 + 8) = 0;
        *(_BYTE*)(v25 + 96) = 0;
        *(_DWORD*)(v25 + 40) = 5;
        result = BasicMenuCursor_16e0c00(a1, v25);
      }
    LABEL_38:
      if (v17 == 0) {
        return result;
      }
      v12 = *(_QWORD*)(v17 + 432);
      v13 = (_WORD*)v17;
      if (v12 == 0) {
        v27 = *(_QWORD*)(v17 + 440);
        v13 = (_WORD*)v17;
        if (v27 != 0) {
          v28 = *(unsigned __int8*)(v27 + 16);
          v12 = 0;
          v13 = (_WORD*)v17;
          if (v28 <= 8) {
            v29 = v28 - 3;
            while (1) {
              if (v29 == 0) {
                v12 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v12 != 0) {
                  break;
                }
              }
              if (++v29 == 6) {
                v12 = 0;
                v13 = (_WORD*)v17;
                goto LABEL_20;
              }
            }
            v13 = (_WORD*)v17;
          }
        }
      }
    }
  }
  return result;
}

__int64

game_menu_anonymous_ProcDeliveryTransportMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  int v6;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * a2[2]) +
                             24LL) +
                  600LL);
  if (v2 == *(_QWORD*)(result + 16) && **(_WORD**)(v2 + 24) != 0) {
    v3 = *(_QWORD*)(result + 8);
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        104, 16, 0);
    v6 = *a2;
    *(_WORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 88) = 0;
    *(_BYTE*)(v5 + 96) = 0;
    *(_WORD*)(v5 + 80) = 257;
    *(_BYTE*)(v5 + 82) = 1;
    *(_DWORD*)(v5 + 40) = v6;
    *(_QWORD*)v5 = game_menu_anonymous_DeliveryTransportMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    return BasicMenuCursor_16e0c00(v3, v5);
  }
  return result;
}

#pragma GCC visibility pop
