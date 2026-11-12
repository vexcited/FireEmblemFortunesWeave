#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c9ab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_950d50(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1f0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_705570(void);
__int64 MapCombatPrediction_19f2a10(__int64 a1, __int64 a2, __int64* a3);
_QWORD* MapCombatPrediction_19f34f0_alt1(
    _QWORD* result, __int64 a2,
    __int64 a3) __asm__("MapCombatPrediction_19f34f0");
__int64 MapCombatPrediction_19f3700_alt1(__int64 result) __asm__(
    "MapCombatPrediction_19f3700");
void __attribute__((noreturn)) MapCombatPrediction_19f3a70();
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
bool Unit_6c9ab0(_QWORD*, _DWORD*, unsigned __int16*);
void GameRoutine_950d50_alt1(__int64*, _QWORD*) __asm__("GameRoutine_950d50");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_705570_alt1() __asm__("GameRoutine_705570");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapCombatPrediction_19f34f0(_QWORD* a1, __int64 a2, __int64 a3);
void MapCombatPrediction_19f3700(__int64* a1);

__int64 MapCombatPrediction_19f2a10(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 result;
  __int64 v4;

  result = 0xFFFFFFFFLL;
  if (a2 != 0) {
    v4 = *a3;
    if (*a3 != 0) {
      if (a2 + 828 == v4) {
        return 0;
      }
      else if (a2 + 836 == v4) {
        return 1;
      }
      else if (a2 + 844 == v4) {
        return 2;
      }
      else if (a2 + 852 == v4) {
        return 3;
      }
      else if (a2 + 860 == v4) {
        return 4;
      }
      else if (a2 + 868 == v4) {
        return 5;
      }
      else if (a2 + 876 == v4) {
        return 6;
      }
      else if (a2 + 884 == v4) {
        return 7;
      }
      else if (a2 + 892 == v4) {
        return 8;
      }
      else if (a2 + 900 == v4) {
        return 9;
      }
      else if (a2 + 908 == v4) {
        return 10;
      }
      else if (a2 + 916 == v4) {
        return 11;
      }
      else if (a2 + 924 == v4) {
        return 12;
      }
      else if (a2 + 932 == v4) {
        return 13;
      }
      else if (a2 + 940 == v4) {
        return 14;
      }
      else if (a2 + 948 == v4) {
        return 15;
      }
      else if (a2 + 956 == v4) {
        return 16;
      }
      else if (a2 + 964 == v4) {
        return 17;
      }
      else if (a2 + 972 == v4) {
        return 18;
      }
      else if (a2 + 980 == v4) {
        return 19;
      }
      else if (a2 + 988 == v4) {
        return 20;
      }
      else if (a2 + 996 == v4) {
        return 21;
      }
      else if (a2 + 1004 == v4) {
        return 22;
      }
      else if (a2 + 1012 == v4) {
        return 23;
      }
      else if (a2 + 1020 == v4) {
        return 24;
      }
      else if (a2 + 1028 == v4) {
        return 25;
      }
      else if (a2 + 1036 == v4) {
        return 26;
      }
      else if (a2 + 1044 == v4) {
        return 27;
      }
      else if (a2 + 1052 == v4) {
        return 28;
      }
      else if (a2 + 1060 == v4) {
        return 29;
      }
      else {
        return 0xFFFFFFFFLL;
      }
    }
  }
  return result;
}

void MapCombatPrediction_19f34f0(_QWORD* a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v4 = (_QWORD*)a1[2];
  v3 = a1[3];
  if ((unsigned __int64)v4 >= v3) {
    v7 = a1[1];
    v8 = (unsigned __int64)v4 - v7;
    v9 = ((__int64)v4 - v7) >> 4;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 60 != 0) {
      MapCombatPrediction_19f3a70();
    }
    v11 = v3 - v7;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v11 >> 3 > v10) {
      v10 = v11 >> 3;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF0LL) {
      v13 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 >> 60 != 0) {
        GameRoutine_60a210_alt1();
      }
      v14 = a2;
      v15 = a3;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v13, 16, 0);
      a3 = v15;
      a2 = v14;
    }
    else {
      v16 = 0;
    }
    v17 = (_QWORD*)(v16 + v8);
    v18 = v16 + 16 * v13;
    v19 = v16 + v8 - 16 * v9;
    *v17 = a2;
    v17[1] = a3;
    v6 = v16 + v8 + 16;
    memcpy_alt1(v19, v7, v8);
    a1[1] = v19;
    a1[2] = v6;
    a1[3] = v18;
    if (v7 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v20, v7);
    }
  }
  else {
    *v4 = a2;
    v4[1] = a3;
    v6 = (__int64)(v4 + 2);
  }
  a1[2] = v6;
}

void MapCombatPrediction_19f3700(__int64* a1)
{
  __int64* v1;
  __int64* v2;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  _QWORD* v20;
  int v21;
  __int64 v22;

  v1 = (__int64*)a1[10];
  if (v1 != nullptr) {
    v2 = a1 + 7;
    a1[8] = a1[7];
    v22 = *v1;
    if (((*(__int64 (**)(__int64*, __int64*))(*a1 + 16))(a1, &v22) & 1) != 0) {
      v5 = (_QWORD*)a1[8];
      v4 = a1[9];
      if ((unsigned __int64)v5 >= v4) {
        v7 = *v2;
        v8 = (signed __int64)v5 - *v2;
        v9 = (v8 >> 3) + 1;
        if (v9 >> 61 != 0) {
          GameRoutine_705570_alt1();
        }
        v10 = v4 - v7;
        v11 = fw_memory_g_heap_manager_ptr;
        if (v10 >> 2 > v9) {
          v9 = v10 >> 2;
        }
        if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
          v12 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v12 = v9;
        }
        if (v12 != 0) {
          if (v12 >> 61 != 0) {
            GameRoutine_60a210_alt1();
          }
          v13 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
        }
        else {
          v13 = 0;
        }
        v14 = v13 + 8 * v12;
        v15 = v13 + v8 - 8 * (v8 >> 3);
        *(_QWORD*)(v13 + v8) = 0;
        v6 = v13 + v8 + 8;
        memcpy_alt1(v15, v7, v8);
        a1[7] = v15;
        a1[8] = v6;
        a1[9] = v14;
        if (v7 != 0) {
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v16, v7);
        }
      }
      else {
        *v5 = 0;
        v6 = (__int64)(v5 + 1);
      }
      a1[8] = v6;
    }
    v17 = (__int64*)a1[4];
    v18 = (__int64*)a1[5];
    while (v17 != v18) {
      v19 = *v17;
      if (*v17 != 0) {
        LODWORD(v19) = *(_WORD*)(v19 + 16) & 0xFFF;
      }
      v20 = (_QWORD*)a1[12];
      v21 = v19;
      v22 = *v1;
      if (Unit_6c9ab0(v20, &v21, (unsigned __int16*)&v22)) {
        GameRoutine_950d50_alt1(v2, v17);
      }
      ++v17;
    }
  }
}

void __attribute__((noreturn)) MapCombatPrediction_19f3a70()
{
  GameRoutine_60a1f0("vector");
}

#pragma GCC visibility pop
