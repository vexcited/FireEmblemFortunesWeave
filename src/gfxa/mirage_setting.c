#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc1458[])();
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_ParamSet_vtable[])();
extern __int64 (*gfxa_MirageSetting_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* MirageSetting_Destructor(_QWORD* result);

_QWORD* MirageSetting_Destructor(_QWORD* result)
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  v1 = result[81];
  v2 = result;
  *result = gfxa_MirageSetting_vtable;
  result[76] = GameData_1fc23d8;
  if (v1 != 0) {
    v3 = fw_memory_g_heap_manager;
    result[82] = v1;
    v4 = 128;
    if (*(_QWORD*)(v3 + 200) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v3 + v4, v1);
  }
  v2[76] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[77] & 1) != 0) {
    v5 = v2[79];
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v6, v5);
    }
  }
  v7 = v2[72];
  v2[66] = GameData_1fc1458;
  if (v7 != 0) {
    v8 = fw_memory_g_heap_manager;
    v2[73] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v2[66] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[67] & 1) != 0) {
    v10 = v2[69];
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v11, v10);
    }
  }
  v12 = v2[62];
  v2[56] = GameData_1fc1458;
  if (v12 != 0) {
    v13 = fw_memory_g_heap_manager;
    v2[63] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v2[56] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[57] & 1) != 0) {
    v15 = v2[59];
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v16, v15);
    }
  }
  v17 = v2[52];
  v2[46] = GameData_1fc1458;
  if (v17 != 0) {
    v18 = fw_memory_g_heap_manager;
    v2[53] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v2[46] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[47] & 1) != 0) {
    v20 = v2[49];
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v21 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v21, v20);
    }
  }
  v22 = v2[42];
  v2[36] = GameData_1fc1458;
  if (v22 != 0) {
    v23 = fw_memory_g_heap_manager;
    v2[43] = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  v2[36] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[37] & 1) != 0) {
    v25 = v2[39];
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v26 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v26, v25);
    }
  }
  v27 = v2[32];
  v2[26] = GameData_1fc1458;
  if (v27 != 0) {
    v28 = fw_memory_g_heap_manager;
    v2[33] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  v2[26] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[27] & 1) != 0) {
    v30 = v2[29];
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v31 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v31, v30);
    }
  }
  v32 = v2[22];
  v2[16] = GameData_1fc1458;
  if (v32 != 0) {
    v33 = fw_memory_g_heap_manager;
    v2[23] = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v33 + v34, v32);
  }
  v2[16] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[17] & 1) != 0) {
    v35 = v2[19];
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v36 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v36, v35);
    }
  }
  v37 = v2[12];
  v2[7] = GameData_1fc23d8;
  if (v37 != 0) {
    v38 = fw_memory_g_heap_manager;
    v2[13] = v37;
    v39 = 128;
    if (*(_QWORD*)(v38 + 200) == 0) {
      v39 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v38 + v39, v37);
  }
  v2[7] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[8] & 1) != 0) {
    v40 = v2[10];
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v41 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v41, v40);
    }
  }
  v42 = v2[4];
  *v2 = gfx_settings_ParamSet_vtable;
  if (v42 != 0) {
    v43 = fw_memory_g_heap_manager;
    v2[5] = v42;
    v44 = 128;
    if (*(_QWORD*)(v43 + 200) == 0) {
      v44 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v43 + v44, v42);
  }
  if ((v2[1] & 1) != 0) {
    v45 = v2[3];
    if (v45 != 0) {
      v46 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v46 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v46, v45);
    }
  }
  return result;
}

#pragma GCC visibility pop
