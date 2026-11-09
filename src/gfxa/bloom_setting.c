#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*gfxa_BloomSetting_vtable[])();
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
_QWORD* BloomSetting_Destructor(_QWORD* result);

_QWORD* BloomSetting_Destructor(_QWORD* result)
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v1 = result;
  *result = gfxa_BloomSetting_vtable;
  v2 = GameData_212e528[0];
  v3 = result[43];
  result[37] = GameData_212e528[0] + 16;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[44] = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v5 + v6, v3);
  }
  v7 = GameData_212e530[0];
  v1[37] = GameData_212e530[0] + 16;
  if ((v1[38] & 1) != 0) {
    v8 = v1[40];
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
    }
  }
  v10 = v1[33];
  v1[27] = v2 + 16;
  if (v10 != 0) {
    v11 = *(_QWORD*)v4;
    v1[34] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v1[27] = v7 + 16;
  if ((v1[28] & 1) != 0) {
    v13 = v1[30];
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
    }
  }
  v15 = v1[23];
  v1[17] = v2 + 16;
  if (v15 != 0) {
    v16 = *(_QWORD*)v4;
    v1[24] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v1[17] = v7 + 16;
  if ((v1[18] & 1) != 0) {
    v18 = v1[20];
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19, v18);
    }
  }
  v20 = v1[13];
  v1[7] = v2 + 16;
  if (v20 != 0) {
    v21 = *(_QWORD*)v4;
    v1[14] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v1[7] = v7 + 16;
  if ((v1[8] & 1) != 0) {
    v23 = v1[10];
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24, v23);
    }
  }
  v25 = v1[4];
  *v1 = GameData_212e548[0] + 2;
  if (v25 != 0) {
    v26 = *(_QWORD*)v4;
    v1[5] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  if ((v1[1] & 1) != 0) {
    v28 = v1[3];
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v29 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v29, v28);
    }
  }
  return result;
}

#pragma GCC visibility pop
