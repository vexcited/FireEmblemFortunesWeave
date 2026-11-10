#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a9afa0(_QWORD* result, __int64, double, double, double,
                           long double, long double);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
extern __int64 (*GameData_1fc12f0[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_226b928;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 gfx_render_LODAdjuster_ExecuteMultiCore(_QWORD* a1);
__int64 LODAdjuster_a9b870(__int64 result);
_QWORD* gfx_render_LODAdjuster_ExecuteMultiCore_lambda0_Invoke(
    _QWORD* result, double a2, double a3, double a4, long double a5,
    long double a6, __int64 a7, atomic_uint* a8);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1c20018;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_a9bcb0(void);
char** LODAdjuster_a9b980(char** result, unsigned __int64 a2, long double a3);

__int64 gfx_render_LODAdjuster_ExecuteMultiCore(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 result;
  _QWORD v16[4];
  _QWORD* v17;

  v2 = (_QWORD*)GameData_21323e8[0];
  v3 = *(_QWORD*)GameData_21323e8[0];
  v4 = *(_QWORD*)GameData_21323e8[0] + 32LL;
  do {
    v5 = *(_DWORD*)(v3 + 8);
    v6 = (v5 + 1) & 0xFFFFFF;
    if (v5 + 1 <= 0) {
      v6 = -(-(v5 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v3 + 8) = v6;
    v7 = atomic_load((unsigned __int64*)(v4 + 32LL * (v5 & 0x3F)));
    if (v7 != 0) {
      v5 = -1;
    }
  } while (v5 < 0);
  v8 = v5 | 0xC0000000;
  v9 = (unsigned __int64*)(v4 + 32LL * (v5 & 0x3F));
  nn_os_ClearLightEvent(v9 + 1);
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v10[2] = 0;
  v11 = v10;
  v12 = GameData_212e368[0];
  v10[8] = 0;
  *v10 = v12 + 16;
  v10[1] = 0;
  v13 = v9[3];
  v9[3] = (unsigned __int64)v11;
  if (v13 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  atomic_store(v8, v9);
  v11[1] = v3;
  *((_DWORD*)v11 + 4) = v8;
  v16[0] = GameData_1fc12f0;
  v16[1] = a1;
  v17 = v16;
  fw_world_SwapCallables(v16, v11 + 4);
  if (v17 == v16) {
    v14 = 32;
    goto LABEL_13;
  }
  if (v17 != nullptr) {
    v14 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v17 + v14))((__int64)v17);
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v3 + 16), v8);
  result = fw_world_JobContext_Wait(*v2, v8);
  a1[14] = a1[13];
  a1[17] = a1[16];
  return result;
}

__int64 LODAdjuster_a9b870(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = *(_QWORD*)(result + 192);
  v2 = (_QWORD*)result;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 200) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[13];
  if (v6 != 0) {
    v7 = *v3;
    v2[14] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = v2[9];
  if (v9 != 0) {
    v10 = *v3;
    v2[10] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = v2[5];
  if (v12 != 0) {
    v13 = *v3;
    v2[6] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v15 = v2[1];
  if (v15 != 0) {
    v16 = *v3;
    v2[2] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    return nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  return result;
}

char** LODAdjuster_a9b980(char** result, unsigned __int64 a2, long double a3)
{
  char* v3;
  char* v4;
  char** v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  bool v15;
  char* v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  char* v23;
  char* v24;
  char* v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v3 = result[1];
  v4 = result[2];
  v5 = result;
  if (a2 <= (v4 - v3) >> 5) {
    if (a2 != 0) {
      v12 = 32 * a2 - 32;
      v13 = &v3[32 * a2];
      if ((~(_BYTE)v12 & 0xE0) != 0) {
        v14 = -(__int64)(((unsigned __int8)((unsigned int)v12 >> 5) + 1) & 7);
        do {
          *(_QWORD*)v3 = &GameData_1c20018;
          *((_QWORD*)v3 + 1) = 0;
          *((_QWORD*)v3 + 2) = 0;
          *((_QWORD*)v3 + 3) = 0;
          v3 += 32;
          v15 = __CFADD__(v14++, 1);
        } while (!v15);
      }
      if (v12 >= 0xE0) {
        do {
          *(_QWORD*)v3 = &GameData_1c20018;
          *((_QWORD*)v3 + 1) = 0;
          *((_QWORD*)v3 + 2) = 0;
          *((_QWORD*)v3 + 3) = 0;
          *((_QWORD*)v3 + 4) = &GameData_1c20018;
          *((_QWORD*)v3 + 5) = 0;
          *((_QWORD*)v3 + 6) = 0;
          *((_QWORD*)v3 + 7) = 0;
          *((_QWORD*)v3 + 8) = &GameData_1c20018;
          *((_QWORD*)v3 + 9) = 0;
          *((_QWORD*)v3 + 10) = 0;
          *((_QWORD*)v3 + 11) = 0;
          *((_QWORD*)v3 + 12) = &GameData_1c20018;
          *((_QWORD*)v3 + 13) = 0;
          *((_QWORD*)v3 + 14) = 0;
          *((_QWORD*)v3 + 15) = 0;
          *((_QWORD*)v3 + 16) = &GameData_1c20018;
          *((_QWORD*)v3 + 17) = 0;
          *((_QWORD*)v3 + 18) = 0;
          *((_QWORD*)v3 + 19) = 0;
          *((_QWORD*)v3 + 22) = 0;
          *((_QWORD*)v3 + 23) = 0;
          *((_QWORD*)v3 + 20) = &GameData_1c20018;
          *((_QWORD*)v3 + 21) = 0;
          *((_QWORD*)v3 + 26) = 0;
          *((_QWORD*)v3 + 27) = 0;
          *((_QWORD*)v3 + 24) = &GameData_1c20018;
          *((_QWORD*)v3 + 25) = 0;
          *((_QWORD*)v3 + 30) = 0;
          *((_QWORD*)v3 + 31) = 0;
          *((_QWORD*)v3 + 28) = &GameData_1c20018;
          *((_QWORD*)v3 + 29) = 0;
          v3 += 256;
        } while (v3 != v13);
      }
      v3 = v13;
    }
    result[1] = v3;
  }
  else {
    v6 = v3 - *result;
    v7 = a2 + (v6 >> 5);
    if (v7 >> 59 != 0) {
      GameRoutine_a9bcb0();
    }
    v8 = v4 - *result;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v8 >> 4 > v7) {
      v7 = v8 >> 4;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFE0LL) {
      v10 = 0x7FFFFFFFFFFFFFFLL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 >> 59 != 0) {
        GameRoutine_60a210(result);
      }
      v11 = a2;
      result = (char**)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v10, 16, 0);
      a2 = v11;
    }
    else {
      result = nullptr;
    }
    v16 = (char*)result + v6;
    v17 = 32 * a2 - 32;
    if ((~(_BYTE)v17 & 0xE0) != 0) {
      v19 = -(__int64)(((unsigned __int8)((unsigned int)v17 >> 5) + 1) & 7);
      v18 = (char*)result + v6;
      do {
        *(_QWORD*)v18 = &GameData_1c20018;
        *((_QWORD*)v18 + 1) = 0;
        *((_QWORD*)v18 + 2) = 0;
        *((_QWORD*)v18 + 3) = 0;
        v18 += 32;
        v15 = __CFADD__(v19++, 1);
      } while (!v15);
    }
    else {
      v18 = (char*)result + v6;
    }
    v20 = &v16[32 * a2];
    if (v17 >= 0xE0) {
      do {
        *(_QWORD*)v18 = &GameData_1c20018;
        *((_QWORD*)v18 + 1) = 0;
        *((_QWORD*)v18 + 2) = 0;
        *((_QWORD*)v18 + 3) = 0;
        *((_QWORD*)v18 + 4) = &GameData_1c20018;
        *((_QWORD*)v18 + 5) = 0;
        *((_QWORD*)v18 + 6) = 0;
        *((_QWORD*)v18 + 7) = 0;
        *((_QWORD*)v18 + 8) = &GameData_1c20018;
        *((_QWORD*)v18 + 9) = 0;
        *((_QWORD*)v18 + 10) = 0;
        *((_QWORD*)v18 + 11) = 0;
        *((_QWORD*)v18 + 12) = &GameData_1c20018;
        *((_QWORD*)v18 + 13) = 0;
        *((_QWORD*)v18 + 14) = 0;
        *((_QWORD*)v18 + 15) = 0;
        *((_QWORD*)v18 + 16) = &GameData_1c20018;
        *((_QWORD*)v18 + 17) = 0;
        *((_QWORD*)v18 + 18) = 0;
        *((_QWORD*)v18 + 19) = 0;
        *((_QWORD*)v18 + 22) = 0;
        *((_QWORD*)v18 + 23) = 0;
        *((_QWORD*)v18 + 20) = &GameData_1c20018;
        *((_QWORD*)v18 + 21) = 0;
        *((_QWORD*)v18 + 26) = 0;
        *((_QWORD*)v18 + 27) = 0;
        *((_QWORD*)v18 + 24) = &GameData_1c20018;
        *((_QWORD*)v18 + 25) = 0;
        *((_QWORD*)v18 + 30) = 0;
        *((_QWORD*)v18 + 31) = 0;
        *((_QWORD*)v18 + 28) = &GameData_1c20018;
        *((_QWORD*)v18 + 29) = 0;
        v18 += 256;
      } while (v18 != v20);
    }
    v21 = (char*)&result[4 * v10];
    v22 = *v5;
    v23 = v5[1];
    v24 = &v16[*v5 - v23];
    if (v23 != *v5) {
      v25 = *v5;
      v26 = v24;
      do {
        v27 = *(_QWORD*)v25;
        *((_QWORD*)v26 + 2) = 0;
        *((_QWORD*)v26 + 3) = 0;
        *(_QWORD*)v26 = v27;
        *((_QWORD*)v26 + 1) = *((_QWORD*)v25 + 1);
        *((_QWORD*)v26 + 2) = *((_QWORD*)v25 + 2);
        *((_QWORD*)v26 + 3) = *((_QWORD*)v25 + 3);
        *((_QWORD*)v25 + 2) = 0;
        *((_QWORD*)v25 + 3) = 0;
        *((_QWORD*)v25 + 1) = 0;
        v25 += 32;
        v26 += 32;
      } while (v25 != v23);
      do {
        v28 = *((_QWORD*)v22 + 1);
        if (v28 != 0) {
          *((_QWORD*)v22 + 2) = v28;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          result = (char**)nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)v9 + v29, a3);
        }
        v22 += 32;
      } while (v22 != v23);
      v22 = *v5;
    }
    *v5 = v24;
    v5[1] = v20;
    v5[2] = v21;
    if (v22 != nullptr) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v30 = 56;
      }
      return (char**)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v9 + v30, a3);
    }
  }
  return result;
}

_QWORD* gfx_render_LODAdjuster_ExecuteMultiCore_lambda0_Invoke(
    _QWORD* result, double a2, double a3, double a4, long double a5,
    long double a6, __int64 a7, atomic_uint* a8)
{
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v11;
  unsigned int v12;
  signed int add;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;

  v8 = (_QWORD*)result[1];
  v9 = v8[8] - v8[7];
  if (v9 != 0) {
    v11 = 0x6DB6DB6DB6DB6DB7LL * (v9 >> 5);
    if ((int)v11 / (int)((((*(_QWORD*)(GameData_226b928 + 2088) -
                            *(_QWORD*)(GameData_226b928 + 2080)) >>
                           2) &
                          0xFFFFFFFE) +
                         2) <=
        1) {
      v12 = 1;
    }
    else {
      v12 = (int)v11 / (int)((((*(_QWORD*)(GameData_226b928 + 2088) -
                                *(_QWORD*)(GameData_226b928 + 2080)) >>
                               2) &
                              0xFFFFFFFE) +
                             2);
    }
    do {
      add = atomic_fetch_add(a8, v12);
      v14 = add;
      v15 = (int)(add + v12);
      if (v11 >= v15) {
        v16 = v15;
      }
      else {
        v16 = v11;
      }
      if (v16 > v14) {
        do {
          result = GameRoutine_a9afa0(v8, v14++, a2, a3, a4, a5, a6);
        } while (v16 != v14);
        v14 = v16;
      }
      if (v12 >> 1 <= 1) {
        v12 = 1;
      }
      else {
        v12 >>= 1;
      }
    } while (v14 < v11);
  }
  return result;
}

#pragma GCC visibility pop
