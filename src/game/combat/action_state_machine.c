#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1000();
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ActionStateMachine_1066c00(_QWORD* result, long double a2);

_QWORD* ActionStateMachine_1066c00(_QWORD* result, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD** v8;
  __int64 v9;
  _QWORD** v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = (_QWORD*)result[1];
  v3 = (_QWORD*)result[2];
  v4 = result;
  if (v3 == v2) {
    v5 = result + 5;
    v3 = (_QWORD*)result[1];
  }
  else {
    v5 = result + 5;
    v6 = result[4];
    v7 = &v2[v6 >> 9];
    v8 = (_QWORD**)(*v7 + 8 * (v6 & 0x1FF));
    v9 = v2[(result[5] + v6) >> 9] + 8 * ((result[5] + v6) & 0x1FF);
    if (v8 != (_QWORD**)v9) {
      do {
        result = *v8;
        *v8 = nullptr;
        if (result != nullptr) {
          result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 16LL))(result);
        }
        if ((char*)++v8 - *v7 == (char*)GameRoutine_1000) {
          v10 = (_QWORD**)v7[1];
          ++v7;
          v8 = v10;
        }
      } while (v8 != (_QWORD**)v9);
      v2 = (_QWORD*)v4[1];
      v3 = (_QWORD*)v4[2];
    }
  }
  *v5 = 0;
  v11 = v3 - v2;
  if (v11 >= 3) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v13, a2);
        v2 = (_QWORD*)v4[1];
        v3 = (_QWORD*)v4[2];
      }
      v4[1] = ++v2;
      v11 = v3 - v2;
    } while (v11 > 2);
  }
  if (v11 == 1) {
    v14 = 256;
  }
  else {
    if (v11 != 2) {
      goto LABEL_24;
    }
    v14 = 512;
  }
  v4[4] = v14;

LABEL_24:
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            fw_memory_g_heap_manager + v15, a2);
      }
      ++v2;
    } while (v2 != v3);
    v16 = v4[2];
    v17 = v4[1] - v16;
    if (v17 != 0) {
      v4[2] = v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (*v4 != 0) {
    v18 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v18 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        fw_memory_g_heap_manager + v18, a2);
  }
  return result;
}

#pragma GCC visibility pop
