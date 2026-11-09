#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc22d8[])();
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfxa_GaussianBlurSetting_vtable[])();
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
_QWORD* GaussianBlurSetting_Destructor(_QWORD* result);

_QWORD* GaussianBlurSetting_Destructor(_QWORD* result)
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

  v1 = result[32];
  v2 = result;
  *result = gfxa_GaussianBlurSetting_vtable;
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
  v9 = v2[23];
  v2[17] = GameData_212e528[0] + 16;
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    v2[24] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v2[17] = v6 + 16;
  if ((v2[18] & 1) != 0) {
    v12 = v2[20];
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v12);
    }
  }
  v14 = v2[13];
  v2[7] = GameData_1fc22d8;
  if (v14 != 0) {
    v15 = *(_QWORD*)v3;
    v2[14] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v2[7] = v6 + 16;
  if ((v2[8] & 1) != 0) {
    v17 = v2[10];
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v17);
    }
  }
  v19 = v2[4];
  *v2 = GameData_212e548[0] + 2;
  if (v19 != 0) {
    v20 = *(_QWORD*)v3;
    v2[5] = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v20 + v21, v19);
  }
  if ((v2[1] & 1) != 0) {
    v22 = v2[3];
    if (v22 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v23 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, v22);
    }
  }
  return result;
}

#pragma GCC visibility pop
