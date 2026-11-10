#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_9c0680(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fb6be0[])();
extern __int64 (*game_facility_EmptyDepositoryMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcObeliskDepositoryTransporterMenu_Unknown109(_QWORD* a1);
_QWORD* ProcObeliskDepositoryTransporterMenu_Unknown128(__int64 a1);
__int64 ProcObeliskDepositoryTransporterMenu_Unknown163(__int64 a1,
                                                        __int64* a2);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*GameData_1fb5f90[])();
extern __int64 (*game_facility_DepositoryMenuItem_vtable[])();
extern __int64* GameData_212c878[6];
__int64
game_facility_anonymous_ProcObeliskDepositoryTransporterMenu_AddItemList_closure_Invoke(
    __int64 result, __int64 a2);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 GameRoutine_71fb20(__int64*);
__int64 ItemShopSelectMenu_1874060(__int64);
__int64 LayoutAccessor_1572ac0(__int64*, __int64, unsigned int, unsigned int);
bool GameRoutine_19ef8e0(_QWORD*, _QWORD*);
extern __int64* GameData_212cd68[26];
extern __int64 GameData_212cf90[3];
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 ProcObeliskDepositoryTransporterMenu_Unknown88(__int64 a1);
bool ProcObeliskDepositoryTransporterMenu_Unknown153(__int64 a1, __int64 a2,
                                                     __int64 a3);
__int64 ProcObeliskDepositoryTransporterMenu_9c5c90(__int64 a1);

__int64 ProcObeliskDepositoryTransporterMenu_Unknown88(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;

  v1 = (__int64*)GameData_212cf90[0];
  v3 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
  v2 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8);
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
  v4 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
  v6 = v4 == v5;
  v7 = v2 - 1 + v3;
  v8 = v7 >> 9;
  v9 = v7 & 0x1FF;
  v10 = ((v4 - v5) << 6) - 1;
  v11 = *(_QWORD*)(v5 + 8 * v8);
  if (v6) {
    v10 = 0;
  }
  v12 = *(_QWORD*)(v11 + 8 * v9);
  v13 = (__int64*)game_TransporterConst_List_instance__ptr[0];
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + GameData_212cf90[0]) = v2 - 1;
  *v13 = v12;
  if ((unsigned __int64)(v10 - (v2 + v3) + 1) >= 0x400) {
    if (*(_QWORD*)(v4 - 8) != 0) {
      v14 = a1;
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v15);
      v4 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1);
      a1 = v14;
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1) = v4 - 8;
  }
  result = ItemShopSelectMenu_1874060(a1);
  v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
  v18 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1 + 8);
  v19 = *v13;
  v20 = ((v18 - v17) << 6) - 1;
  if (v18 == v17) {
    v20 = 0;
  }
  v21 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  v22 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1 + 8) +
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1);
  if (v20 == v22) {
    result = GameRoutine_71fb20(v1);
    v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
    v22 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1 + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1);
  }
  *(_QWORD*)(*(_QWORD*)(v17 + 8 * (v22 >> 9)) + 8 * (v22 & 0x1FF)) = v19;
  *v13 = v21 + 2464;
  ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v1);
  return result;
}

__int64 ProcObeliskDepositoryTransporterMenu_Unknown109(_QWORD* a1)
{
  int v2;
  __int64 v4;
  __int64 v5;
  _BYTE v6[32];
  _BYTE* v7;
  const char* v8;

  v2 = GameRoutine_9c0680(a1 + 136);
  if (v2 == 2) {
    v8 = "MID_Shop_FullItem_Transport_Message";
    v4 = GameRoutine_667ea0(a1, &v8);
    if (v4 != 0) {
      v7 = nullptr;
      GameRoutine_6680e0(v6, v4 + 1248);
      if (v7 == v6) {
        v5 = 32;
        goto LABEL_10;
      }
      if (v7 != nullptr) {
        v5 = 40;
      LABEL_10:
        (*(void (**)(void*))(*(_QWORD*)v7 + v5))((void*)v7);
      }
    }
    return 12;
  }
  if (v2 != 0) {
    return 1;
  }
  (*(void (**)(_QWORD*))(*a1 + 1128LL))(a1);
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  return 13;
}

_QWORD* ProcObeliskDepositoryTransporterMenu_Unknown128(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 84) = 1;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = game_facility_EmptyDepositoryMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = v12;
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  v12[0] = GameData_1fb6be0;
  v12[1] = a1;
  v13 = v12;
  v7 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v8 = *(unsigned int*)(v7 + 80);
  if ((int)v8 < 1) {
    goto LABEL_12;
  }
  v9 = 0;
  v10 = 12 * v8;
  do {
    v3 = *(_QWORD*)(v7 + 8) + v9;
    if (*(_WORD*)(v3 + 2) != 0) {
      if (v13 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*))(*v13 + 48LL))(v13);
    }
    v9 += 12;
  } while (v10 != v9);
  result = v13;
  if (v13 == v12) {
  LABEL_12:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                     v3);
}

bool ProcObeliskDepositoryTransporterMenu_Unknown153(__int64 a1, __int64 a2,
                                                     __int64 a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  unsigned __int16* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  char v14;
  struct {
    _QWORD v16[2];
    int v17;
    int v18;
    char v19;
  } v16_;
  struct {
    _QWORD v20[2];
    int v21;
    int v22;
    char v23;
  } v20_;

  v3 = *(unsigned __int8*)(a1 + 200);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 560LL))(a2);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 560LL))(a3);
  if (v3 == 1) {
    v8 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a2 + 560LL))(a2);
    v9 = GameData_212c878[0];
    v10 = GameData_212cd68[0];
    v11 = *(
        _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                 8LL *
                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                   [0] +
                                                               64) +
                                                    8LL * *v8) +
                                         84LL));
    if (v11 != 0) {
      v12 = *(unsigned __int16*)(v11 + 32);
    }
    else {
      v12 = 0;
    }
    v13 = *(
        _QWORD*)(*(_QWORD*)(*v10 + 64) +
                 8LL *
                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                                    8LL *
                                                        *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                __int64))(
                                                            *(_QWORD*)a3 +
                                                            560LL))(a3)) +
                                         84LL));
    if (v13 != 0) {
      LODWORD(v13) = *(unsigned __int16*)(v13 + 32);
    }
    v14 = 1;
  }
  else {
    LODWORD(v13) = 0;
    v14 = 0;
    v12 = 0;
  }
  v20_.v20[0] = v6;
  v20_.v20[1] = 0;
  v20_.v21 = 0;
  v20_.v22 = v12;
  v20_.v23 = v14;
  v16_.v16[0] = v7;
  v16_.v16[1] = 0;
  v16_.v17 = 0;
  v16_.v18 = v13;
  v16_.v19 = v14;
  return GameRoutine_19ef8e0(v20_.v20, v16_.v16);
}

__int64 ProcObeliskDepositoryTransporterMenu_Unknown163(__int64 a1, __int64* a2)
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
    *(_QWORD*)v15 = "MultiSelection";
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_MultiSelection";
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 7;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "MultiSelection";
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_MultiSelection";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 7;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 ProcObeliskDepositoryTransporterMenu_9c5c90(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 result;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;

  v1 = (__int64*)GameData_212cf90[0];
  v3 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
  v2 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8);
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
  v4 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
  v6 = v4 == v5;
  v7 = v2 - 1 + v3;
  v8 = v7 >> 9;
  v9 = v7 & 0x1FF;
  v10 = ((v4 - v5) << 6) - 1;
  v11 = *(_QWORD*)(v5 + 8 * v8);
  if (v6) {
    v10 = 0;
  }
  v12 = *(_QWORD*)(v11 + 8 * v9);
  v13 = (__int64*)game_TransporterConst_List_instance__ptr[0];
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + GameData_212cf90[0]) = v2 - 1;
  *v13 = v12;
  if ((unsigned __int64)(v10 - (v2 + v3) + 1) >= 0x400) {
    if (*(_QWORD*)(v4 - 8) != 0) {
      v14 = a1;
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v15);
      v4 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1);
      a1 = v14;
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1) = v4 - 8;
  }
  v16 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), (__int64)"L_UnitInfo");
  result = LayoutAccessor_1572ac0(v16, 0, 0, 1u);
  v18 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
  v19 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1 + 8);
  v20 = *v13;
  v21 = ((v19 - v18) << 6) - 1;
  if (v19 == v18) {
    v21 = 0;
  }
  v22 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  v23 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1 + 8) +
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1);
  if (v21 == v23) {
    result = GameRoutine_71fb20(v1);
    v18 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
    v23 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1 + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1);
  }
  *(_QWORD*)(*(_QWORD*)(v18 + 8 * (v23 >> 9)) + 8 * (v23 & 0x1FF)) = v20;
  *v13 = v22 + 2464;
  ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v1);
  return result;
}

__int64

game_facility_anonymous_ProcObeliskDepositoryTransporterMenu_AddItemList_closure_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(a2 + 4));
  if ((((0x10000000000LL << *(_BYTE*)(v2 + 72)) | (1LL << *(_BYTE*)(v2 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v3 = *(_QWORD*)(result + 8);
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    *(_WORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_BYTE*)(v5 + 82) = 1;
    *(_DWORD*)(v5 + 84) = 1;
    *(_BYTE*)(v5 + 88) = 0;
    *(_WORD*)(v5 + 80) = 257;
    *(_QWORD*)v5 = game_facility_DepositoryMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 96) = GameData_1fb5f90;
    *(_QWORD*)(v5 + 104) = a2;
    return BasicMenuCursor_16e0c00(v3, v5);
  }
  return result;
}

#pragma GCC visibility pop
