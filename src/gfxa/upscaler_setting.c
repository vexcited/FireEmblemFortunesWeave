#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*gfxa_UpscalerSetting_vtable[])();
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
extern __int64* GameData_212e558[25];
extern __int64* GameData_212e568[23];
_QWORD* UpscalerSetting_Destructor(_QWORD* result);

_QWORD* UpscalerSetting_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v1 = result;
  *result = gfxa_UpscalerSetting_vtable;
  v2 = result[52];
  result[47] = GameData_212e568[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[53] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = GameData_212e530[0];
  v1[47] = GameData_212e530[0] + 16;
  if ((v1[48] & 1) != 0 && v1[50] != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = v1[43];
  v1[37] = GameData_212e528[0] + 16;
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    v1[44] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v9 + v10);
  }
  v1[37] = v6 + 16;
  if ((v1[38] & 1) != 0 && v1[40] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
  }
  v12 = GameData_212e558[0];
  v13 = v1[33];
  v1[27] = GameData_212e558[0] + 2;
  if (v13 != 0) {
    v14 = *(_QWORD*)v3;
    v1[34] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v14 + v15);
  }
  v1[27] = v6 + 16;
  if ((v1[28] & 1) != 0 && v1[30] != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
  }
  v17 = v1[23];
  v1[17] = v12 + 2;
  if (v17 != 0) {
    v18 = *(_QWORD*)v3;
    v1[24] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19);
  }
  v1[17] = v6 + 16;
  if ((v1[18] & 1) != 0 && v1[20] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20);
  }
  v21 = v1[13];
  v1[7] = v12 + 2;
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    v1[14] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23);
  }
  v1[7] = v6 + 16;
  if ((v1[8] & 1) != 0 && v1[10] != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v24 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
  }
  v25 = v1[4];
  *v1 = GameData_212e548[0] + 2;
  if (v25 != 0) {
    v26 = *(_QWORD*)v3;
    v1[5] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27);
  }
  if ((v1[1] & 1) != 0 && v1[3] != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v28 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v28);
  }
  return result;
}

#pragma GCC visibility pop
