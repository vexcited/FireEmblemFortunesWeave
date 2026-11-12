#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64*** game_zview_fe7fa0(__int64*** result, __int64** a2, __int64* a3,
                             double a4);

__int64*** game_zview_fe7fa0(__int64*** result, __int64** a2, __int64* a3,
                             double a4)
{

#pragma clang fp contract(off)
  __int64** v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  unsigned __int64 v11;
  __int128 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  _OWORD* v20;
  _QWORD* v21;
  __int64* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64** v26;
  __int64*** v27;
  __int128 v28;

  v5 = (__int64**)**a2;
  v6 = 0xAAAAAAAAAAAAAAABLL * (((*a2)[1] - (__int64)v5) >> 2);
  if ((unsigned __int64)a2[1] < v6) {
    v6 = (unsigned __int64)a2[1];
  }
  if (v6 != 0) {
    v26 = a2;
    v27 = result;
    v7 = (__int64*)a3[1];
    v8 = **a2;
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v5 = (__int64**)((char*)v5 + 12 * v6);
    do {
      *(_QWORD*)&v12 = *(_QWORD*)v8;
      LODWORD(a4) = *(_DWORD*)(v8 + 8);
      v11 = a3[2];
      *((double*)&v12 + 1) = a4;
      if ((unsigned __int64)v7 < v11) {
        *(_OWORD*)v7 = v12;
        v10 = v7 + 2;
      }
      else {
        v13 = *a3;
        v14 = (__int64)v7 - *a3;
        v15 = v14 >> 4;
        v16 = (v14 >> 4) + 1;
        if (v16 >> 60 != 0) {
          GameRoutine_cdcc10();
        }
        v17 = v11 - v13;
        v28 = v12;
        if (v17 >> 3 > v16) {
          v16 = v17 >> 3;
        }
        if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL) {
          v18 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v18 = v16;
        }
        if (v18 >> 60 != 0) {
          GameRoutine_60a210();
        }
        v19 = fw_memory_HeapManager_Allocate(*v9, 16 * v18, 16, 0);
        HIDWORD(a4) = DWORD1(v28);
        v20 = (_OWORD*)(v19 + v14);
        v21 = &v20[-v15];
        *v20 = v28;
        v10 = (__int64*)(v20 + 1);
        if ((__int64*)v13 != v7) {
          v22 = (__int64*)v13;
          v23 = v21;
          do {
            v23[1] = v22[1];
            v24 = *v22;
            v22 += 2;
            *v23 = v24;
            v23 += 2;
          } while (v22 != v7);
        }
        *a3 = (__int64)v21;
        a3[1] = (__int64)v10;
        a3[2] = v19 + 16 * v18;
        if (v13 != 0) {
          v25 = 128;
          if (*(_QWORD*)(*v9 + 200) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free(*v9 + v25, v13);
        }
      }
      v8 += 12;
      a3[1] = (__int64)v10;
      v7 = v10;
    } while ((__int64**)v8 != v5);
    a2 = v26;
    result = v27;
  }
  *result = a2;
  result[1] = v5;
  result[2] = (__int64**)a3;
  return result;
}

#pragma GCC visibility pop
