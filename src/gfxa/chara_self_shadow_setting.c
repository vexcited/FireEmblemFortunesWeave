#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc1458[])();
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_ParamSet_vtable[])();
extern __int64 (*gfxa_CharaSelfShadowSetting_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* CharaSelfShadowSetting_Destructor(_QWORD* result);

_QWORD* CharaSelfShadowSetting_Destructor(_QWORD* result)
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v1 = result[51];
  v2 = result;
  *result = gfxa_CharaSelfShadowSetting_vtable;
  result[46] = GameData_1fc23d8;
  if (v1 != 0) {
    v3 = fw_memory_g_heap_manager;
    result[52] = v1;
    v4 = 128;
    if (*(_QWORD*)(v3 + 200) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v3 + v4, v1);
  }
  v2[46] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[47] & 1) != 0) {
    v5 = v2[49];
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v6, v5);
    }
  }
  v7 = v2[42];
  v2[36] = GameData_1fc1458;
  if (v7 != 0) {
    v8 = fw_memory_g_heap_manager;
    v2[43] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v2[36] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[37] & 1) != 0) {
    v10 = v2[39];
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v11, v10);
    }
  }
  v12 = v2[32];
  v2[26] = GameData_1fc1458;
  if (v12 != 0) {
    v13 = fw_memory_g_heap_manager;
    v2[33] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v2[26] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[27] & 1) != 0) {
    v15 = v2[29];
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v16, v15);
    }
  }
  v17 = v2[22];
  v2[16] = GameData_1fc1458;
  if (v17 != 0) {
    v18 = fw_memory_g_heap_manager;
    v2[23] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v2[16] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[17] & 1) != 0) {
    v20 = v2[19];
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v21 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v21, v20);
    }
  }
  v22 = v2[12];
  v2[7] = GameData_1fc23d8;
  if (v22 != 0) {
    v23 = fw_memory_g_heap_manager;
    v2[13] = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  v2[7] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[8] & 1) != 0) {
    v25 = v2[10];
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v26 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v26, v25);
    }
  }
  v27 = v2[4];
  *v2 = gfx_settings_ParamSet_vtable;
  if (v27 != 0) {
    v28 = fw_memory_g_heap_manager;
    v2[5] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  if ((v2[1] & 1) != 0) {
    v30 = v2[3];
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v31 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v31, v30);
    }
  }
  return result;
}

#pragma GCC visibility pop
