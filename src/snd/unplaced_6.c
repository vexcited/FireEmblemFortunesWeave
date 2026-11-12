#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 snd_data_getMuseumDataCount();
extern _UNKNOWN GameData_1aa49c1;
extern __int64 (*snd_Archive_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void* snd_data_getMuseumData(int);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_a36670();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 snd_104020(__int64 result, __int64 a2);
__attribute__((swiftcall)) void snd_a35e20(PSEUDO_X8 x8_, __int64 a1);

__int64 snd_104020(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = a2;
  *(_WORD*)(result + 40) = 0;
  *(_QWORD*)result = snd_Archive_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__attribute__((swiftcall)) void snd_a35e20(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  void* v10;
  __int16 v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  __int16 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  void* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int16 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  int v35;
  int v36;

  v3 = a2;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v36 = snd_data_getMuseumDataCount();
  if (v36 < 1) {
    v7 = 0;
  }
  else {
    v4 = a1 + 2548;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v32 = v4;
    v33 = v3;
    do {
      v8 = snd_data_getMuseumData(v6);
      v9 = *((unsigned int*)v8 + 1);
      if (v8[4] != 0) {
        v10 = (void*)v8[4];
      }
      else {
        v10 = &GameData_1aa49c1;
      }
      if (((*(_DWORD*)(v4 + 4LL * ((int)v9 / 32)) >> v9) & 1) != 0) {
        v11 = 256;
      }
      else {
        v11 = *((unsigned __int8*)v8 + 41) << 8;
      }
      v12 = *((_DWORD*)v8 + 4);
      v13 = *((_DWORD*)v8 + 5);
      v14 = v9 | ((unsigned __int64)*((unsigned int*)v8 + 2) << 32);
      v15 = *((_DWORD*)v8 + 11);
      v16 = v11 | *((unsigned __int8*)v8 + 40);
      v17 = v3[2];
      if (v5 < v17) {
        *(_QWORD*)v5 = v14;
        *(_DWORD*)(v5 + 8) = v12;
        *(_DWORD*)(v5 + 12) = v13;
        *(_QWORD*)(v5 + 16) = v10;
        *(_DWORD*)(v5 + 24) = v15;
        *(_WORD*)(v5 + 28) = v16;
        v5 += 32LL;
      }
      else {
        v18 = v5 - v7;
        v35 = v6;
        v19 = (__int64)(v5 - v7) >> 5;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 59 != 0) {
          *v33 = v7;
          GameRoutine_a36670();
        }
        v21 = v17 - v7;
        if (v21 >> 4 > v20) {
          v20 = v21 >> 4;
        }
        v22 = (unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFE0LL;
        v23 = 0x7FFFFFFFFFFFFFFLL;
        if (!v22) {
          v23 = v20;
        }
        if (v23 >> 59 != 0) {
          *v33 = v7;
          GameRoutine_60a210();
        }
        v24 = v10;
        v34 = 32 * v23;
        v25 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v23, 16, 0);
        v26 = v25 + v18;
        v27 = v25 + v18 - 32 * v19;
        *(_QWORD*)v26 = v14;
        *(_DWORD*)(v26 + 8) = v12;
        *(_DWORD*)(v26 + 12) = v13;
        *(_QWORD*)(v26 + 16) = v24;
        *(_DWORD*)(v26 + 24) = v15;
        *(_WORD*)(v26 + 28) = v16;
        if (v7 != v5) {
          v28 = v7;
          v29 = v27;
          do {
            *(_QWORD*)v29 = *(_QWORD*)v28;
            *(_DWORD*)(v29 + 8) = *(_DWORD*)(v28 + 8);
            *(_DWORD*)(v29 + 12) = *(_DWORD*)(v28 + 12);
            *(_QWORD*)(v29 + 16) = *(_QWORD*)(v28 + 16);
            *(_DWORD*)(v29 + 24) = *(_DWORD*)(v28 + 24);
            v30 = *(_WORD*)(v28 + 28);
            v28 += 32;
            *(_WORD*)(v29 + 28) = v30;
            v29 += 32;
          } while (v28 != v5);
        }
        v3 = v33;
        v6 = v35;
        v5 = v26 + 32;
        v33[1] = v26 + 32;
        v33[2] = v25 + v34;
        if (v7 != 0) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v7);
        }
        v7 = v27;
        v4 = v32;
      }
      ++v6;
      v3[1] = v5;
    } while (v6 != v36);
  }
  *v3 = v7;
}

#pragma GCC visibility pop
