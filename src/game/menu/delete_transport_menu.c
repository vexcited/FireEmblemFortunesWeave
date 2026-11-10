#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 DeleteTransportMenu_Unknown101(__int64 a1);
__int64 DeleteTransportMenu_Unknown144(__int64 a1, __int64* a2);
__int64 GameHr_1700840(__int64 a1, __int64 a2);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_170af90(void);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 UnitUtil_1212820(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
extern __int64 (*GameData_20a3c68[])();
extern __int64 (*game_menu_TransportMenuItem_vtable[])();
extern __int64 GameData_21c99b8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 DeleteTransportMenu_Unknown8(__int64 a1);
__int64 game_menu_DeleteTransportMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                __int64* a2);
__int64 game_menu_DeleteTransportMenu_CreateBind_lambda1_Clone(__int64 a1);
__int64 game_menu_DeleteTransportMenu_CreateBind_lambda1_CloneInto(__int64 a1,
                                                                   __int64 a2);
_QWORD* game_menu_DeleteTransportMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                                 int* a2);
__int64 game_menu_DeleteTransportMenu_ACall_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);

__int64 DeleteTransportMenu_Unknown101(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 1152);
  if (v1 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
  }
  else {
    return 3;
  }
}

__int64 DeleteTransportMenu_Unknown144(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = &GameData_1a9f09e;
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_Cancel";
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    *(_DWORD*)(v15 + 20) = 1;
    *(_DWORD*)(v15 + 24) = result;
    v6 = v14 + v8 + 40;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = &GameData_1a9f09e;
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_Cancel";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 1;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 DeleteTransportMenu_Unknown141(__int64 a1)
{
  return (unsigned int)*(char*)(a1 + 1064);
}

__int64 DeleteTransportMenu_Unknown8(__int64 a1)
{
  return (unsigned int)*(char*)(a1 + 8);
}

__int64 game_menu_DeleteTransportMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;
  const char* v7;

  v2 = *a2;
  v7 = "MID_DeleteTransportMenu_ItemFull_Message";
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
    return (*(__int64 (**)(void))(*(_QWORD*)v6 + v4))();
  }
  return result;
}

__int64 game_menu_DeleteTransportMenu_CreateBind_lambda1_Clone(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_QWORD*)v2 = GameData_20a3c68;
  *(_QWORD*)(v2 + 16) = *(_QWORD*)(a1 + 16);
  v3 = *(_QWORD*)(a1 + 64);
  if (v3 == 0) {
    *(_QWORD*)(v2 + 64) = 0;
    v4 = *(_QWORD*)(a1 + 112);
    if (v4 != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v3 == a1 + 32) {
    *(_QWORD*)(v2 + 64) = v2 + 32;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
    v4 = *(_QWORD*)(a1 + 112);
    if (v4 != 0) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v2 + 112) = 0;
    goto LABEL_11;
  }
  *(_QWORD*)(v2 + 64) = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  v4 = *(_QWORD*)(a1 + 112);
  if (v4 == 0) {
    goto LABEL_9;
  }
LABEL_6:
  if (v4 == a1 + 80) {
    *(_QWORD*)(v2 + 112) = v2 + 80;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  else {
    *(_QWORD*)(v2 + 112) = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  }
LABEL_11:
  *(_WORD*)(v2 + 128) = *(_WORD*)(a1 + 128);
  return v2;
}

__int64 game_menu_DeleteTransportMenu_CreateBind_lambda1_CloneInto(__int64 a1,
                                                                   __int64 a2)
{
  __int64 v4;
  __int64 result;

  *(_QWORD*)a2 = GameData_20a3c68;
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 64);
  if (v4 == 0) {
    *(_QWORD*)(a2 + 64) = 0;
    result = *(_QWORD*)(a1 + 112);
    if (result != 0) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v4 == a1 + 32) {
    *(_QWORD*)(a2 + 64) = a2 + 32;
    (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 64) + 24LL))(*(_QWORD*)(a1 + 64));
    result = *(_QWORD*)(a1 + 112);
    if (result != 0) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(a2 + 112) = 0;
    goto LABEL_11;
  }
  *(_QWORD*)(a2 + 64) = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  result = *(_QWORD*)(a1 + 112);
  if (result == 0) {
    goto LABEL_9;
  }
LABEL_6:
  if (result == a1 + 80) {
    *(_QWORD*)(a2 + 112) = a2 + 80;
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 112) + 24LL))(
        *(_QWORD*)(a1 + 112));
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    *(_QWORD*)(a2 + 112) = result;
  }
LABEL_11:
  *(_WORD*)(a2 + 128) = *(_WORD*)(a1 + 128);
  return result;
}

_QWORD* game_menu_DeleteTransportMenu_AddItemList_lambda0_Invoke(__int64 a1,
                                                                 int* a2)
{
  _QWORD* v2;
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v11;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  v5 = v4;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)(v4 + 88) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_QWORD*)v4 = game_menu_TransportMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  v6 = (unsigned __int16*)GameRoutine_170af90();
  v7 = *v6;
  if (*v6 != 0) {
    LOBYTE(v7) =
        (*((_BYTE*)v6 + 3) & 0x10) == 0 &&
        ((v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v7)) == 0 ||
         (unsigned int)*(unsigned __int8*)(v8 + 72) - 5 >= 2 &&
             ((v9 = *(_DWORD*)(v8 + 336)) & 1) == 0 &&
             ((v9 & 2) == 0 ||
              (v11 = *(_QWORD*)v6, (unsigned int)UnitUtil_1212820(&v11) != 1)));
  }
  *(_BYTE*)(v5 + 82) = v7;
  return BasicMenuCursor_16e0c00(v2, v5);
}

__int64 game_menu_DeleteTransportMenu_ACall_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1104LL);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2, a2);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
}

#pragma GCC visibility pop
