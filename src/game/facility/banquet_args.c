#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
_QWORD* game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke_alt1(
    _QWORD* result,
    __int64*
        a2) __asm__("game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke");
__int64 Troop_133ed80(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_CorpsManager_EachUnit(__int64 result, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern __int64 (*GameData_1fb0d30[])();
extern __int64 (*GameData_2118e90[])();
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64
game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke_194fcb0(_QWORD* a1,
                                                               __int64* a2);
void game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke(_QWORD* a1,
                                                            __int64* a2);
__int64

game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke_194fcb0(_QWORD* a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  signed __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  __int64 v27;

  v2 = *a2;
  v4 = (__int64*)a1[1];
  v27 = 0;
  v5 = *(unsigned int*)(v2 + 84);
  if ((v5 & 0x80000000) != 0) {
    v7 = 0;
  LABEL_27:
    v8 = a1[3];
    goto LABEL_28;
  }
  v25_.v25[0] = GameData_1fb0d30;
  v25_.v25[1] = &v27;
  v25_.v26 = v25_.v25;
  game_CorpsManager_EachUnit(v5, (__int64)v25_.v25);
  if (v25_.v26 == v25_.v25) {
    v6 = 32;
    goto LABEL_7;
  }
  if (v25_.v26 != nullptr) {
    v6 = 40;
  LABEL_7:
    (*(void (**)(__int64))(*v25_.v26 + v6))((__int64)v25_.v26);
  }
  v7 = v27;
  v8 = a1[3];
  if (v27 != 0 && v27 != v8) {
    v10 = (_QWORD*)v4[1];
    v9 = v4[2];
    if ((unsigned __int64)v10 >= v9) {
      v12 = *v4;
      v13 = (signed __int64)v10 - *v4;
      v14 = (v13 >> 3) + 1;
      if (v14 >> 61 != 0) {
        GameRoutine_6c1f60_alt1();
      }
      v15 = v9 - v12;
      v16 = fw_memory_g_heap_manager_ptr;
      if (v15 >> 2 > v14) {
        v14 = v15 >> 2;
      }
      if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
        v17 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v17 = v14;
      }
      if (v17 != 0) {
        if (v17 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v18 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
      }
      else {
        v18 = 0;
      }
      v19 = v18 + 8 * v17;
      v20 = v18 + v13 - 8 * (v13 >> 3);
      *(_QWORD*)(v18 + v13) = v7;
      v11 = v18 + v13 + 8;
      memcpy_alt1(v20, v12, v13);
      *v4 = v20;
      v4[1] = v11;
      v4[2] = v19;
      if (v12 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v21, v12);
      }
    }
    else {
      *v10 = v27;
      v11 = (__int64)(v10 + 1);
    }
    v4[1] = v11;
    goto LABEL_27;
  }
LABEL_28:
  v22 = a1[2];
  v25_.v25[2] = v7;
  v25_.v25[3] = v8;
  v25_.v26 = v25_.v25;
  v25_.v25[0] = GameData_2118e90;
  v25_.v25[1] = v22;
  Troop_133ed80(v2, (__int64)v25_.v25);
  result = (__int64)v25_.v26;
  if (v25_.v26 == v25_.v25) {
    v24 = 32;
  }
  else {
    if (v25_.v26 == nullptr) {
      return result;
    }
    v24 = 40;
  }
  return (*(__int64 (**)(__int64))(*v25_.v26 + v24))((__int64)v25_.v26);
}

void game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke(_QWORD* a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *a2;
  if (*a2 != 0 && v2 != a1[2] && v2 != a1[3]) {
    v5 = (__int64*)a1[1];
    v7 = (_QWORD*)v5[1];
    v6 = v5[2];
    if ((unsigned __int64)v7 >= v6) {
      v9 = *v5;
      v10 = (signed __int64)v7 - *v5;
      v11 = (v10 >> 3) + 1;
      if (v11 >> 61 != 0) {
        GameRoutine_6c1f60_alt1();
      }
      v12 = v6 - v9;
      v13 = fw_memory_g_heap_manager_ptr;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v11;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v15 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = 0;
      }
      v16 = v15 + 8 * v14;
      v17 = v15 + v10 - 8 * (v10 >> 3);
      *(_QWORD*)(v15 + v10) = v2;
      v8 = v15 + v10 + 8;
      memcpy_alt1(v17, v9, v10);
      *v5 = v17;
      v5[1] = v8;
      v5[2] = v16;
      if (v9 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v18, v9);
      }
    }
    else {
      *v7 = v2;
      v8 = (__int64)(v7 + 1);
    }
    v5[1] = v8;
  }
}

#pragma GCC visibility pop
