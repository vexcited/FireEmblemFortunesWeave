#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12f61a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cd90[21];
void __attribute__((noreturn)) GameRoutine_12f2f30(void);
void __attribute__((noreturn)) GameRoutine_12f2f50(void);
void __attribute__((noreturn)) GameRoutine_12f2f70(void);
void __attribute__((noreturn)) GameRoutine_12f2f90(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure3_Invoke(
    __int64 result, int* a2, unsigned __int16* a3);
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure4_Invoke(
    __int64 result, int* a2, unsigned __int16* a3);
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure5_Invoke(
    __int64 result, int* a2, unsigned __int16* a3);
__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure6_Invoke(
    __int64 result, int* a2, unsigned __int16* a3);
bool game_anonymous_ItemCandidatesForAll_CheckWeaponRange_closure_Invoke(
    __int64 a1, __int64 a2);

__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure3_Invoke(
    __int64 result, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 i;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;

  v3 = *(_QWORD**)(result + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v32 = v5;
  v6 = GameData_212cd90[0];
  v7 = *GameData_212cd90[0];
  if (*GameData_212cd90[0] != 0) {
    result = GameRoutine_12f61a0(v7 + 264, &v32);
    if (result != 0) {
      for (i = *(_QWORD*)(*v6 + 64); i != *(_QWORD*)(*v6 + 72); i += 8) {
        v10 = *(__int64**)(*(_QWORD*)i + 24LL);
        v11 = *v10;
        v12 = v10[1];
        if (v11 != v12) {
          while (*(_QWORD*)v11 != v5) {
            v11 += 16;
            if (v11 == v12) {
              goto LABEL_9;
            }
          }
        }
        if (v11 != v12 && v11 != 0) {
          LODWORD(v7) = *(_DWORD*)(v11 + 8);
          v30 = 0x100000000LL;
          v31 = v7 & 0xFFFFFF00;
          LODWORD(v7) = (unsigned __int8)v7;
          goto LABEL_17;
        }
      LABEL_9:;
      }
    }
    LODWORD(v7) = 0;
  }
  v30 = 0;
  v31 = 0;
LABEL_17:
  v13 = v30 | v31 | (unsigned int)v7;
  if (v13 <= 0x100000000LL) {
    v14 = 0;
  }
  else {
    v14 = v13;
  }
  v15 = v3[4];
  v16 = v3[5];
  if (v15 >= v16) {
    v18 = v3[3];
    v19 = v15 - v18;
    v20 = (__int64)(v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      GameRoutine_12f2f30();
    }
    v22 = v16 - v18;
    v23 = fw_memory_g_heap_manager_ptr;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v21;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + v19;
    v27 = v25 + 8 * v24;
    *(_WORD*)(v26 + 2) = v4;
    v28 = v25 + v19 - 8 * v20;
    *(_BYTE*)v26 = 0;
    *(_DWORD*)(v26 + 4) = v14;
    v17 = v25 + v19 + 8;
    result = memcpy(v28, v18, v19);
    v3[3] = v28;
    v3[4] = v17;
    v3[5] = v27;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
        v29 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v29);
    }
  }
  else {
    *(_BYTE*)v15 = 0;
    *(_WORD*)(v15 + 2) = v4;
    v17 = v15 + 8;
    *(_DWORD*)(v15 + 4) = v14;
  }
  v3[4] = v17;
  return result;
}

__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure4_Invoke(
    __int64 result, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  unsigned __int8* v6;
  __int16 v7;
  unsigned int v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v3 = *(_QWORD**)(result + 8);
  v4 = *a2;
  v5 = *a3;
  v6 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5);
  v7 = (unsigned __int8)~v6[92] | (unsigned __int16)((v6[92] + ~v6[93]) << 8);
  LODWORD(v6) =
      (*((_DWORD*)a3 + 1) & 0xF) * v6[87] - *((unsigned __int8*)a3 + 2);
  v8 = (unsigned int)v6 & ~((int)v6 >> 31);
  v9 = v3[7];
  v10 = v3[8];
  if (v9 >= v10) {
    v12 = v3[6];
    v13 = v9 - v12;
    v14 = (__int64)(v9 - v12) >> 3;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
      GameRoutine_12f2f50();
    }
    v16 = v10 - v12;
    v17 = fw_memory_g_heap_manager_ptr;
    if (v16 >> 2 > v15) {
      v15 = v16 >> 2;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
      v18 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v18 = v15;
    }
    if (v18 != 0) {
      if (v18 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
    }
    else {
      v19 = 0;
    }
    v20 = v19 + v13;
    v21 = v19 + 8 * v18;
    *(_WORD*)(v20 + 2) = v5;
    v22 = v19 + v13 - 8 * v14;
    *(_WORD*)v20 = v4;
    *(_WORD*)(v20 + 4) = v7;
    *(_BYTE*)(v20 + 6) = v8;
    v11 = v19 + v13 + 8;
    *(_BYTE*)(v20 + 7) = 0;
    result = memcpy(v22, v12, v13);
    v3[6] = v22;
    v3[7] = v11;
    v3[8] = v21;
    if (v12 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v23);
    }
  }
  else {
    *(_WORD*)v9 = v4;
    *(_WORD*)(v9 + 2) = v5;
    v11 = v9 + 8;
    *(_WORD*)(v9 + 4) = v7;
    *(_BYTE*)(v9 + 6) = v8;
    *(_BYTE*)(v9 + 7) = 0;
  }
  v3[7] = v11;
  return result;
}

__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure5_Invoke(
    __int64 result, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v3 = *(_QWORD**)(result + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v6 = *(unsigned __int8*)(v5 + 88);
  LODWORD(v5) = (*((_DWORD*)a3 + 1) & 0xF) * *(unsigned __int8*)(v5 + 87) -
                *((unsigned __int8*)a3 + 2);
  v7 = v5 & ~((int)v5 >> 31) | (v6 << 8);
  v9 = v3[10];
  v8 = v3[11];
  if (v9 >= v8) {
    v11 = v3[9];
    v12 = v9 - v11;
    v13 = 1 - 0x5555555555555555LL * ((__int64)(v9 - v11) >> 1);
    if (v13 > 0x2AAAAAAAAAAAAAAALL) {
      GameRoutine_12f2f70();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v8 - v11) >> 1);
    if (2 * v15 > v13) {
      v13 = 2 * v15;
    }
    if (v15 >= 0x1555555555555555LL) {
      v16 = 0x2AAAAAAAAAAAAAAALL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 > 0x2AAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 6 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + v12;
    *(_BYTE*)v18 = 0;
    *(_WORD*)(v18 + 2) = v4;
    *(_WORD*)(v18 + 4) = v7;
    v10 = v17 + v12 + 6;
    result = memcpy(v17, v11, v12);
    v3[9] = v17;
    v3[10] = v10;
    v3[11] = v17 + 6 * v16;
    if (v11 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19);
    }
  }
  else {
    *(_BYTE*)v9 = 0;
    *(_WORD*)(v9 + 2) = v4;
    v10 = v9 + 6;
    *(_WORD*)(v9 + 4) = v7;
  }
  v3[10] = v10;
  return result;
}

__int64 game_anonymous_ItemCandidatesForAll_Prepare_closure6_Invoke(
    __int64 result, int* a2, unsigned __int16* a3)
{
  _QWORD* v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  v3 = *(_QWORD**)(result + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3);
  v6 = *(_DWORD*)(v5 + 76);
  LODWORD(v5) = (*((_DWORD*)a3 + 1) & 0xF) * *(unsigned __int8*)(v5 + 87) -
                *((unsigned __int8*)a3 + 2);
  v7 = v5 & ~((int)v5 >> 31) | (v6 << 16);
  v8 = v3[13];
  v9 = v3[14];
  if (v8 >= v9) {
    v11 = v3[12];
    v12 = v8 - v11;
    v13 = (__int64)(v8 - v11) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_12f2f90();
    }
    v15 = v9 - v11;
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
        GameRoutine_60a210(result);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + v12;
    v20 = v18 + 8 * v17;
    *(_WORD*)(v19 + 2) = v4;
    v21 = v18 + v12 - 8 * v13;
    *(_BYTE*)v19 = 0;
    *(_DWORD*)(v19 + 4) = v7;
    v10 = v18 + v12 + 8;
    result = memcpy(v21, v11, v12);
    v3[12] = v21;
    v3[13] = v10;
    v3[14] = v20;
    if (v11 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v22);
    }
  }
  else {
    *(_BYTE*)v8 = 0;
    *(_WORD*)(v8 + 2) = v4;
    v10 = v8 + 8;
    *(_DWORD*)(v8 + 4) = v7;
  }
  v3[13] = v10;
  return result;
}

bool game_anonymous_ItemCandidatesForAll_CheckWeaponRange_closure_Invoke(
    __int64 a1, __int64 a2)
{
  return **(unsigned __int16**)(a1 + 8) != *(unsigned __int16*)(a2 + 4);
}

#pragma GCC visibility pop
