#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0();
__int64* SpineModel_64dde0(__int64* a1, __int64 a2, unsigned __int64 a3);

__int64* SpineModel_64dde0(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v5 = *a1 & 0xFFFFFFFFFFFFFFFELL;
  if (a3 >= v5) {
    if (a3 - v5 + 1 > -9LL - v5) {
      String_60a1d0();
    }
    v7 = v5 - 1;
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = 2 * v7;
    if ((*a1 & 1) != 0) {
      v11 = (char*)a1[2];
    }
    else {
      v11 = (char*)a1 + 1;
    }
    if (a3 > 2 * v7) {
      v10 = a3;
    }
    if ((v10 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v10 | 7) + 1;
    }
    v13 = v10 >= 0x17;
    v14 = 23;
    if (v13) {
      v14 = v12;
    }
    if (v7 <= 0x7FFFFFFFFFFFFFF2LL) {
      v15 = v14;
    }
    else {
      v15 = -9;
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v15, 16, 0);
    v6 = v16;
    if (a3 != 0) {
      memcpy(v16, a2, a3);
    }
    if (v11 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v17, v11);
    }
    a1[1] = a3;
    a1[2] = v6;
    *a1 = v15 | 1;
  }
  else {
    v6 = a1[2];
    a1[1] = a3;
    if (a3 != 0) {
      memmove(v6, a2, a3);
    }
  }
  *(_BYTE*)(v6 + a3) = 0;
  return a1;
}

#pragma GCC visibility pop
