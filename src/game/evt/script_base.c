#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1196740(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_evt_ScriptBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ScriptBase_Destructor(_QWORD* a1);
_QWORD* ScriptBase_1196740(_QWORD* result);

__int64 ScriptBase_Destructor(_QWORD* a1)
{
  __int64 result;
  char* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = &game_evt_ScriptBase_vtable;
  result = GameRoutine_1196740(a1 + 4);
  v4 = (char*)a1[5];
  v3 = (char*)a1[6];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != v3) {
    do {
      if (*(_QWORD*)v4 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6, *(_QWORD*)v4);
      }
      v4 += 8;
    } while (v4 != v3);
    v4 = (char*)a1[5];
    v3 = (char*)a1[6];
  }
  if (v4 != v3) {
    a1[6] = &v3[(v4 - v3 + 7) & 0xFFFFFFFFFFFFFFF8LL];
  }
  v7 = a1[4];
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, v7);
  }
  return result;
}

_QWORD* ScriptBase_1196740(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = (_QWORD*)result[1];
  v2 = (_QWORD*)result[2];
  v3 = result;
  if (v2 == v1) {
    v4 = result + 5;
    v2 = (_QWORD*)result[1];
  }
  else {
    v4 = result + 5;
    v5 = result[4];
    v6 = &v1[v5 / 0x33];
    v7 = *v6 + 80 * (v5 % 0x33);
    v8 = v1[(result[5] + v5) / 0x33] + 80 * ((result[5] + v5) % 0x33);
    if (v7 != v8) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        if ((*(_BYTE*)(v7 + 24) & 1) != 0) {
          v10 = *(_QWORD*)(v7 + 40);
          if (v10 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v11 = 128;
            }
            else {
              v11 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, v10);
          }
        }
        if ((*(_BYTE*)v7 & 1) != 0) {
          v12 = *(_QWORD*)(v7 + 16);
          if (v12 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v13 = 128;
            }
            else {
              v13 = 56;
            }
            result =
                (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13, v12);
          }
        }
        v7 += 80LL;
        if (v7 - *v6 == 4080) {
          v14 = v6[1];
          ++v6;
          v7 = v14;
        }
      } while (v7 != v8);
      v1 = (_QWORD*)v3[1];
      v2 = (_QWORD*)v3[2];
    }
  }
  *v4 = 0;
  v15 = v2 - v1;
  if (v15 >= 3) {
    v16 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result =
            (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v17, *v1);
        v1 = (_QWORD*)v3[1];
        v2 = (_QWORD*)v3[2];
      }
      v3[1] = ++v1;
      v15 = v2 - v1;
    } while (v15 > 2);
  }
  if (v15 == 1) {
    v18 = 25;
  }
  else {
    if (v15 != 2) {
      return result;
    }
    v18 = 51;
  }
  v3[4] = v18;
  return result;
}

#pragma GCC visibility pop
