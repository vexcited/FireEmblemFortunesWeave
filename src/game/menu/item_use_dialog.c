#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_menu_Dialog_Destroy_Dialog(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ItemUseDialog_DeletingDestructor(__int64 a1);
__int64 GameRoutine_8b0040(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_207b338[])();
extern __int64 (*GameData_207b3a8[])();
extern __int64 (*GameData_207b428[])();
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_menu_ItemUseDialog_CreateBind_lambda0_Clone(_QWORD* a1);
_QWORD* game_menu_ItemUseDialog_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                             _QWORD* a2);
_QWORD* ItemUseDialog_166b360(_QWORD* result, _QWORD* a2);
__int64 ItemUseDialog_166b3a0(__int64 a1, __int64* a2);
_QWORD* ItemUseDialog_166b510(__int64 a1);
__int64 ItemUseDialog_166b680(__int64 a1, __int64 a2);
__int64 ProcList_9bd480(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 game_menu_ItemUseDialog_CreateBind_lambda0_Invoke(__int64 a1);

__int64 ItemUseDialog_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 1496);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 1504);
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50(v5 - 32, *(_QWORD*)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD*)(v5 + 8);
        if (v6 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v6);
          v6 = *(_QWORD*)(v5 - 24);
        }
      }
      else {
        v6 = 0;
      }
      GameRoutine_6e3b50(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = *(_QWORD*)(a1 + 1496);
    *(_QWORD*)(a1 + 1504) = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12, v1);
    }
  }
  game_menu_Dialog_Destroy_Dialog(a1);
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v13 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, a1);
}

_QWORD* game_menu_ItemUseDialog_CreateBind_lambda0_Clone(_QWORD* a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_207b338;
  v3 = a1[3];
  result[2] = a1[2];
  result[3] = v3;
  v4 = a1[5];
  result[4] = a1[4];
  result[5] = v4;
  v5 = (_QWORD*)a1[10];
  if (v5 != nullptr) {
    if (v5 == a1 + 6) {
      v6 = result;
      result[10] = result + 6;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v5 + 24LL))(v5, v5);
    }
    else {
      v6 = result;
      result[10] =
          (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*))(*v5 + 16LL))(v5,
                                                                         v5);
    }
    return v6;
  }
  else {
    result[10] = 0;
  }
  return result;
}

_QWORD* game_menu_ItemUseDialog_CreateBind_lambda0_CloneInto(_QWORD* result,
                                                             _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;

  *a2 = GameData_207b338;
  v3 = result[3];
  v5 = result[4];
  v4 = result[5];
  a2[2] = result[2];
  a2[3] = v3;
  a2[4] = v5;
  a2[5] = v4;
  v6 = (_QWORD*)result[10];
  if (v6 != nullptr) {
    if (v6 == result + 6) {
      a2[10] = a2 + 6;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[10] + 24LL))(
          result[10]);
    }
    else {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(*v6 + 16LL))(
          v6, result[10]);
      a2[10] = result;
    }
  }
  else {
    a2[10] = 0;
  }
  return result;
}

__int64 game_menu_ItemUseDialog_CreateBind_lambda0_Invoke(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  struct {
    _BYTE v15[32];
    _BYTE* v16;
  } v15_;
  struct {
    _QWORD v17[2];
    int v18;
    char gap68_[4];
    __int64 v19;
    _QWORD* v20;
  } v17_;

  v2 = ProcList_9bd480(*(_QWORD*)(a1 + 16));
  if (v2 == 0) {
    return 5;
  }
  v3 = *(_QWORD*)(a1 + 24);
  v4 = *(_DWORD*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 40);
  v6 = v2;
  v17_.v17[0] = GameData_207b3a8;
  v17_.v17[1] = v3;
  v17_.v18 = v4;
  v17_.v19 = v5;
  v17_.v20 = v17_.v17;
  game_ProcList_Call_9bcfa0(v2, (__int64)v17_.v17);
  if (v17_.v20 == v17_.v17) {
    v7 = 32;
  }
  else {
    if (v17_.v20 == nullptr) {
      goto LABEL_7;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v17_.v20 + v7))((__int64)v17_.v20);
LABEL_7:
  v8 = *(_QWORD*)(a1 + 80);
  if (v8 != 0) {
    if (v8 == a1 + 48) {
      v15_.v16 = v15_.v15;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v8 + 24LL))(v8, v15_.v15);
      v9 = v15_.v16;
    }
    else {
      v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      v15_.v16 = v9;
    }
    v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v11 = v10;
    *v10 = GameData_207b428;
    v12 = v10 + 2;
    if (v9 != nullptr) {
      if (v9 == v15_.v15) {
        v10[6] = v12;
        (*(void (**)(_BYTE*))(*(_QWORD*)v9 + 24LL))(v9);
      }
      else {
        v10[6] =
            (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v9 + 16LL))(v9, v12);
      }
    }
    else {
      v10[6] = 0;
    }
    v17_.v20 = v11;
    game_ProcList_Call_9bcfa0(v6, (__int64)v17_.v17);
    (*(void (**)(_QWORD*))(*v11 + 40LL))(v11);
    if (v15_.v16 == v15_.v15) {
      v13 = 32;
      goto LABEL_20;
    }
    if (v15_.v16 != nullptr) {
      v13 = 40;
    LABEL_20:
      (*(void (**)(__int64))(*(_QWORD*)v15_.v16 + v13))((__int64)v15_.v16);
    }
  }
  return 5;
}

_QWORD* ItemUseDialog_166b360(_QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_207b3a8;
  v2 = result[1];
  v3 = result[3];
  a2[2] = result[2];
  a2[3] = v3;
  a2[1] = v2;
  return result;
}

__int64 ItemUseDialog_166b3a0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _BYTE v8[32];
  _BYTE* v9;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(unsigned int*)(a1 + 16);
  v5 = *(_QWORD*)(a1 + 24);
  v9 = nullptr;
  GameRoutine_8b0040(v2, v3, v4, v5, v8);
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v9 + v7))();
}

_QWORD* ItemUseDialog_166b510(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_207b428;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 ItemUseDialog_166b680(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2, a2);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
}

#pragma GCC visibility pop
