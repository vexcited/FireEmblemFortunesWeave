#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1890220(__int64, int, int, int, char, char, int);
_QWORD* StatusNum_1890080(__int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParamLimit(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
_QWORD* StatusHP_18920d0_alt1(_QWORD* a1, __int64 a2,
                              char a3) __asm__("StatusHP_18920d0");
_QWORD* StatusHP_18922b0_alt1(_QWORD* a1) __asm__("StatusHP_18922b0");
__int64* GameRoutine_1891a80(_QWORD*);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_2101840[])();
extern __int64 (*GameData_2101868[])();
extern __int64 (*GameData_21018b0[])();
extern __int64 (*GameData_2101a88[])();
extern __int64 (*GameData_2101ab0[])();
extern __int64 (*game_gameui_control_StatusHP_Destroy_StatusHP_18926c0_ptr[])();
extern __int64 (*game_gameui_control_StatusHP_vtable[])();
extern __int64 GameData_2101888;
extern __int64 GameData_2101898;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2101880;
extern char* GameData_2101890;
__attribute__((swiftcall)) void StatusHP_1891e10(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3);
_QWORD* StatusNum_1890220(__int64, unsigned int, int, int, char, char, int);
__int64 game_Unit_GetParamLimit_alt1(_QWORD*, unsigned __int8*) __asm__(
    "game_Unit_GetParamLimit");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
__int64 StatusHP_18920d0(_QWORD* a1, __int64 a2, char a3);
__int64 StatusHP_18922b0(_QWORD* a1);

__attribute__((swiftcall)) void StatusHP_1891e10(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;

  v8 = (_QWORD*)LayoutEx_579160(1136, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_21018b0;
  GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[138] = 0;
  v10[140] = 0;
  v10[141] = 0;
  v10[3] = game_gameui_control_StatusHP_vtable;
  v10[12] = GameData_2101840;
  v10[132] = GameData_2101868;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v13 = GameData_2101888;
  *v12 = GameData_2101880;
  v12[1] = v13;
  v14 = GameData_2101898;
  v12[2] = GameData_2101890;
  v12[3] = v14;
  v15 = GameRoutine_576600(a1, "Num");
  if (v15 != 0) {
    v19 = v15;
    v20 = strlen(v15);
    if (v20 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)v12, (__int64)&v19);
    }
  }
  v16 = GameRoutine_576600(a1, v12[2]);
  if (v16 != 0) {
    v19 = v16;
    v20 = strlen(v16);
    if (v20 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 2),
                          (__int64)&v19);
    }
  }
  GameRoutine_1891a80(v9);
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v17 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v17);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = game_gameui_control_StatusHP_Destroy_StatusHP_18926c0_ptr;
  v10[12] = GameData_2101a88;
  v10[132] = GameData_2101ab0;
  {
    result;
    return;
  }
}

__int64 StatusHP_18920d0(_QWORD* a1, __int64 a2, char a3)
{
  __int64 v4;
  __int64 result;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  struct {
    unsigned __int8 v16[8];
    __int64* v17;
    unsigned __int64 v18;
    unsigned __int64 v19;
    unsigned __int64 v20;
    int v21;
    int v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v16_;

  if (a2 != 0) {
    v4 = a1[136];
    a1[135] = a2;
    if (v4 != 0) {
      GameRoutine_156c910_alt1(v4, "%d", 1,
                               (unsigned int)*(__int16*)(a2 + 492));
    }
    result = a1[138];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v8 = a1[137];
        v9 = result;
        if (v8 != 0) {
          LOBYTE(v16_.v17) = 0;
          v10 = game_Unit_GetParam_alt1(a2);
          v16_.v16[4] = 0;
          v11 = game_Unit_GetParam_alt1(a2);
          v16_.v16[0] = 0;
          v12 = game_Unit_GetParamLimit_alt1((_QWORD*)a2, v16_.v16);
          result = (__int64)StatusNum_1890220(v8, v10, v11, v12, a3 & 1, 0, -1);
        }
      LABEL_14:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          return std___1___shared_weak_count___release_weak_alt1(v9);
        }
      }
    }
  }
  else {
    v13 = a1[136];
    if (v13 != 0) {
      v16_.v23 = -1;
      v16_.v24 = -1;
      v16_.v25 = -1;
      v16_.v26 = -1;
      v14 = *msg_MessageManager_instance__ptr[0];
      v16_.v27 = -1;
      v16_.v28 = -1;
      v16_.v29 = -1;
      v16_.v30 = -1;
      v16_.v31 = -1;
      v16_.v32 = -1;
      v16_.v33 = -1;
      v16_.v34 = -1;
      v16_.v17 = GameData_212e348 + 2;
      v16_.v18 = 0xFFFF0001FFFF0000LL;
      v16_.v19 = 0xFFFF0004FFFF0002LL;
      v16_.v20 = 0xFFFF0006FFFF0005LL;
      v16_.v35 = 8;
      v16_.v21 = -65529;
      v16_.v22 = -65528;
      v15 = GameRoutine_a4dbe0_alt1(v14, "MID_Sys_ValueEmpty", 0);
      GameRoutine_156c5d0_alt1(v13, (__int64)v15, 0);
    }
    result = a1[138];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v9 = result;
        result = a1[137];
        if (result != 0) {
          result = (__int64)StatusNum_1890080(result);
        }
        goto LABEL_14;
      }
    }
  }
  return result;
}

__int64 StatusHP_18922b0(_QWORD* a1)
{
  __int64 v1;
  char* v3;
  __int64 result;
  __int64 v5;

  v1 = a1[136];
  if (v1 != 0) {
    v3 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                                 "MID_Sys_ValueEmpty", 0);
    GameRoutine_156c5d0_alt1(v1, (__int64)v3, 0);
  }
  result = a1[138];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v5 = result;
      result = a1[137];
      if (result != 0) {
        result = (__int64)StatusNum_1890080(result);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
