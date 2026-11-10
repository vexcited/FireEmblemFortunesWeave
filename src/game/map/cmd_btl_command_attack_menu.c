#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1620370(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CmdBtlCommandAttackMenu_Unknown146(__int64 a1, __int64 a2,
                                           unsigned int a3, unsigned int a4);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wmemchr(void);
extern __int64 (*game_map_anonymous_CmdBtlTargetMenuItem_vtable[])();
extern __int64 (*game_map_anonymous_TargetMenuItem_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212ea58;
extern __int64* game_g_empty_item_ptr;
__int64 CmdBtlCommandAttackMenu_1620370(__int64 a1, __int64 a2, int a3,
                                        char a4);
__int64 game_map_CmdBtlCommandAttackMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2);

__int64 CmdBtlCommandAttackMenu_Unknown146(__int64 a1, __int64 a2,
                                           unsigned int a3, unsigned int a4)
{
  __int64 v7;

  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  GameRoutine_1620370(v7, a2, a3, a4);
  return v7;
}

__int64 CmdBtlCommandAttackMenu_1620370(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64* v6;
  __int64* v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  unsigned int v21;
  char v22;
  __int64 v23;

  *(_WORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = a2;
  *(_DWORD*)(a1 + 40) = a3;
  *(_BYTE*)(a1 + 96) = a4;
  *(_WORD*)(a1 + 80) = 257;
  *(_BYTE*)(a1 + 82) = 1;
  *(_QWORD*)a1 = game_map_anonymous_TargetMenuItem_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v6 = game_g_empty_item_ptr;
  if (*GameData_212cff0[0] != 0 &&
      ((*(_DWORD*)(*GameData_212cff0[0] + 12400) >> a3) & 1) != 0) {
    if (a3 == -1) {
      v7 = game_g_empty_item_ptr;
    }
    else {
      v7 = (__int64*)(a2 + 8LL * a3 + 828);
    }
    result = UnitItem_6e8bc0(v7, a2);
    a3 = *(_DWORD*)(a1 + 40);
    v9 = *(_QWORD*)(a1 + 88);
  }
  else {
    result = 0;
    v9 = a2;
  }
  *(_BYTE*)(a1 + 82) = result & 1;
  v10 = (__int64*)(v9 + 8LL * a3 + 828);
  *(_QWORD*)a1 = game_map_anonymous_CmdBtlTargetMenuItem_vtable;
  if (a3 == -1) {
    v10 = v6;
  }
  v11 = GameData_212c878[0];
  v12 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *(unsigned __int16*)v10) +
                            73LL);
  *(_BYTE*)(a1 + 82) = 0;
  *(_BYTE*)(a1 + 81) = (unsigned int)(v12 - 1) < 2;
  v13 = *(_QWORD*)(*GameData_212ea58 + 640);
  if (v13 != 0) {
    v15 = *(_QWORD*)(v13 + 88);
    v14 = *(_QWORD*)(v13 + 96);
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
      }
    }
    v16 = *(_QWORD*)(v15 + 24);
    result = wmemchr();
    if (result != 0) {
      v17 = result;
    }
    else {
      v17 = v16;
    }
    if (v17 != *(_QWORD*)(v15 + 24)) {
      v18 = *(int*)(a1 + 40);
      if ((_DWORD)v18 == -1) {
        result = (__int64)v6;
      }
      else {
        result = *(_QWORD*)(a1 + 88) + 8 * v18 + 828;
      }
      v19 =
          *(_QWORD*)(*(_QWORD*)(*v11 + 64) + 8LL * *(unsigned __int16*)result);
      v20 = *(_BYTE*)(v19 + 73);
      v21 = *(unsigned __int8*)(v19 + 72);
      v22 = 1;
      v23 = (1LL << v20) & 0x7DC;
      if (v21 > 7 || v23 == 0) {
        result = UnitItem_6e8bc0(result, a2);
        v22 = result & 1;
      }
      *(_BYTE*)(a1 + 82) = v22;
    }
  }
  return result;
}

__int64 game_map_CmdBtlCommandAttackMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 496LL))(*a2) & 1) != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 464LL))(v2);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
