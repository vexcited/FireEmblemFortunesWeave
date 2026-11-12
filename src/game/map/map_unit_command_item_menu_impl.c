#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_1566440(__int64 result, char);
__int64 GameRoutine_1567590(__int64 result, char);
__int64 LayoutAccessor_155e140(__int64*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319f8[8];
extern __int64* GameData_2131a00[7];
extern __int64* game_g_empty_item_ptr;
__int64 MapUnitCommandItemMenu_15c0610(_QWORD* a1, __int64 a2);
__int64 MapUnitCommandItemMenu_15c0710(_QWORD* a1);
__int64 MapUnitCommandItemMenu_15c0880(_QWORD* a1);
__int64 game_menu_BasicMenu_Unknown96_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown96");
void GameRoutine_1566440_alt1(__int64, char) __asm__("GameRoutine_1566440");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 MapUnitCommandItemMenu_15c0610(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  char v9;

  (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  (*(void (**)(_QWORD*, __int64))(*a1 + 1080LL))(a1, a2);
  v4 = a1[42];
  if (v4 != 0 && (v5 = __dynamic_cast(v4, GameData_212e008[0],
                                      GameData_2131a00[0], 0)) != 0) {
    v6 = *(int*)(v5 + 40);
    if ((_DWORD)v6 == -1) {
      v7 = game_g_empty_item_ptr;
    }
    else {
      v7 = (__int64*)(*(_QWORD*)(v5 + 88) + 8 * v6 + 828);
    }
    v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * *(unsigned __int16*)v7);
    v9 = *(unsigned __int8*)(v8 + 72) >= 8u && *(_BYTE*)(v8 + 73) != 16;
  }
  else {
    v9 = 1;
  }
  return GameRoutine_1567590((__int64)"StatusChange", v9);
}

__int64 MapUnitCommandItemMenu_15c0710(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char v10;
  struct {
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v12_;

  game_menu_BasicMenu_Unknown96_alt1((__int64)a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  v2 = a1[132];
  v12_.v13 = 0;
  v12_.v14 = 0;
  v12_.v12 = 0;
  (*(void (**)(_QWORD*, __int64*))(v2 + 80))(a1 + 132, &v12_.v12);
  (*(void (**)(_QWORD*, __int64*))(a1[132] + 88LL))(a1 + 132, &v12_.v12);
  if (v12_.v12 == v12_.v13) {
    v3 = nullptr;
  }
  else {
    v3 = &v12_.v12;
  }
  GameRoutine_1566440_alt1((__int64)v3, 0);
  if (v12_.v12 != 0) {
    v12_.v13 = v12_.v12;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v12_.v12);
  }
  v5 = a1[42];
  if (v5 != 0 && (v6 = __dynamic_cast(v5, GameData_212e008[0],
                                      GameData_2131a00[0], 0)) != 0) {
    v7 = *(int*)(v6 + 40);
    if ((_DWORD)v7 == -1) {
      v8 = game_g_empty_item_ptr;
    }
    else {
      v8 = (__int64*)(*(_QWORD*)(v6 + 88) + 8 * v7 + 828);
    }
    v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * *(unsigned __int16*)v8);
    v10 = *(unsigned __int8*)(v9 + 72) >= 8u && *(_BYTE*)(v9 + 73) != 16;
  }
  else {
    v10 = 1;
  }
  return GameRoutine_1567590((__int64)"StatusChange", v10);
}

__int64 MapUnitCommandItemMenu_15c0880(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  LayoutAccessor_155e140(a1 + 133);
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
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

#pragma GCC visibility pop
