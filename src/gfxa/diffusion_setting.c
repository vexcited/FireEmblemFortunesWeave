#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfxa_DiffusionSetting_vtable[])();
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
_QWORD* DiffusionSetting_Destructor(_QWORD* result);

_QWORD* DiffusionSetting_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v1 = result[32];
  v2 = result;
  *result = gfxa_DiffusionSetting_vtable;
  result[27] = GameData_1fc23d8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[33] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = GameData_212e530[0];
  v2[27] = GameData_212e530[0] + 16;
  if ((v2[28] & 1) != 0) {
    v7 = v2[30];
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
    }
  }
  v9 = GameData_212e528[0];
  v10 = v2[23];
  v2[17] = GameData_212e528[0] + 16;
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    v2[24] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v2[17] = v6 + 16;
  if ((v2[18] & 1) != 0) {
    v13 = v2[20];
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v13);
    }
  }
  v15 = v2[13];
  v2[7] = v9 + 16;
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    v2[14] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v2[7] = v6 + 16;
  if ((v2[8] & 1) != 0) {
    v18 = v2[10];
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19, v18);
    }
  }
  v20 = v2[4];
  *v2 = GameData_212e548[0] + 2;
  if (v20 != 0) {
    v21 = *(_QWORD*)v3;
    v2[5] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  if ((v2[1] & 1) != 0) {
    v23 = v2[3];
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v23);
    }
  }
  return result;
}

#pragma GCC visibility pop
