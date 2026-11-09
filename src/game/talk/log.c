#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Log_112fce0(__int64 result);

__int64 Log_112fce0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
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
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;

  v1 = *(_QWORD**)(result + 24);
  v2 = (_QWORD*)(result + 16);
  v3 = (_QWORD*)result;
  if (v1 != (_QWORD*)(result + 16)) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v6 = v1[2];
      if (v6 != 0) {
        if ((*(_BYTE*)(v6 + 72) & 1) != 0) {
          v7 = *(_QWORD*)(v6 + 88);
          if (v7 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v8 = 128;
            }
            else {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
          }
        }
        if ((*(_BYTE*)(v6 + 48) & 1) != 0) {
          v9 = *(_QWORD*)(v6 + 64);
          if (v9 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v9);
          }
        }
        if ((*(_BYTE*)(v6 + 24) & 1) != 0) {
          v11 = *(_QWORD*)(v6 + 40);
          if (v11 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v11);
          }
        }
        if ((*(_BYTE*)v6 & 1) != 0) {
          v13 = *(_QWORD*)(v6 + 16);
          if (v13 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v14 = 128;
            }
            else {
              v14 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, v6);
      }
      v1 = (_QWORD*)v1[1];
    } while (v1 != v2);
  }
  if (v3[4] != 0) {
    v15 = (_QWORD*)v3[3];
    v16 = *(_QWORD**)(v3[2] + 8LL);
    *(_QWORD*)(*v15 + 8LL) = v16;
    *v16 = *v15;
    v3[4] = 0;
    if (v15 != v2) {
      v17 = fw_memory_g_heap_manager_ptr;
      do {
        v18 = (_QWORD*)v15[1];
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v19, v15);
        v15 = v18;
      } while (v18 != v2);
    }
  }
  return result;
}

#pragma GCC visibility pop
