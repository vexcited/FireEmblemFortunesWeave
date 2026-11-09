#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_e7e340(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 BelongingMenu_16ca580(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_157e0f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2830(__int64, unsigned __int16*, __int64);
__int64 GameRoutine_16ca2e0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _DWORD GameData_1be9124[3];
extern __int64 GameData_206cec0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212ea58;
extern __int64* GameData_21319f8[8];
extern __int64* game_g_empty_item_ptr;
__int64 CmdBtlCommandLinkMenu_Unknown84(__int64 a1);
_QWORD* CmdBtlCommandLinkMenu_Unknown88(_QWORD* result);
__int64 CmdBtlCommandLinkMenu_DeletingDestructor(_QWORD* a1);

__int64 CmdBtlCommandLinkMenu_Unknown84(__int64 a1)
{
  __int64 v2;

  GameRoutine_16ca2e0();
  GameRoutine_1562cf0(a1 + 952, "Menu_09_Header");
  v2 = GameRoutine_155fbe0(a1 + 952, "L_MenuItem_InfoHeader");
  GameRoutine_157e0f0(v2, "MID_Menu_Detail", "MID_CmdMenu_ConcentrationCost");
  return BelongingMenu_16ca580(a1);
}

_QWORD* CmdBtlCommandLinkMenu_Unknown88(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(*GameData_212ea58 + 640);
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  result = (_QWORD*)result[42];
  if (result == nullptr) {
    return result;
  }
  result = (_QWORD*)__dynamic_cast(result, GameData_212e008[0],
                                   &GameData_206cec0, 0);
  if (result == nullptr) {
    return result;
  }
  if ((unsigned int)*(unsigned __int8*)(v1 + 8) - 7 > 2) {
    v3 = 3;
    v5 = result[11];
    v4 = result[12];
    if (v4 == 0) {
    LABEL_11:
      GameRoutine_e7e340(&v13, 0, v3);
      goto LABEL_12;
    }
  }
  else {
    v3 = GameData_1be9124[(unsigned __int8)(*(_BYTE*)(v1 + 8) - 7)];
    v5 = result[11];
    v4 = result[12];
    if (v4 == 0) {
      goto LABEL_11;
    }
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v6 = std___1___shared_weak_count_lock(v4);
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = v6;
  GameRoutine_e7e340(&v13, v5, v3);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }

LABEL_12:
  if (v13 != 0) {
    v8 = *(__int64**)(v13 + 8);
    v9 = v14;
    if (v14 == 0) {
      goto LABEL_18;
    }
  LABEL_16:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    goto LABEL_18;
  }
  v8 = nullptr;
  v9 = v14;
  if (v14 != 0) {
    goto LABEL_16;
  }

LABEL_18:
  v10 = game_g_empty_item_ptr;
  if (v8 != nullptr) {
    v10 = v8;
  }
  v13 = *v10;
  if (v4 == 0) {
    return (_QWORD*)GameRoutine_15d2830((__int64)(v2 + 133),
                                        (unsigned __int16*)&v13, 0);
  }
  v11 = std___1___shared_weak_count_lock(v4);
  if (v11 != 0) {
    v12 = v11;
    GameRoutine_15d2830((__int64)(v2 + 133), (unsigned __int16*)&v13,
                        *(_QWORD*)(v5 + 16));
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  else {
    GameRoutine_15d2830((__int64)(v2 + 133), (unsigned __int16*)&v13, 0);
  }
  return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
}

__int64 CmdBtlCommandLinkMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  GameRoutine_155e140(a1 + 133);
  v3 = a1[145];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 139);
  GameRoutine_1563f90(a1 + 136, a1[137]);
  v4 = a1[134];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
