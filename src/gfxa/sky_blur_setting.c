#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc1458[])();
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_ParamSet_vtable[])();
extern __int64 (*gfxa_SkyBlurSetting_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* SkyBlurSetting_Destructor(_QWORD* result);

_QWORD* SkyBlurSetting_Destructor(_QWORD* result)
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
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;

  v1 = result[101];
  v2 = result;
  *result = gfxa_SkyBlurSetting_vtable;
  result[96] = GameData_1fc23d8;
  if (v1 != 0) {
    v3 = fw_memory_g_heap_manager;
    result[102] = v1;
    v4 = 128;
    if (*(_QWORD*)(v3 + 200) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v3 + v4, v1);
  }
  v2[96] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[97] & 1) != 0) {
    v5 = v2[99];
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v6, v5);
    }
  }
  v7 = v2[92];
  v2[87] = GameData_1fc23d8;
  if (v7 != 0) {
    v8 = fw_memory_g_heap_manager;
    v2[93] = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v8 + v9, v7);
  }
  v2[87] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[88] & 1) != 0) {
    v10 = v2[90];
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v11, v10);
    }
  }
  v12 = v2[83];
  v2[77] = GameData_1fc1458;
  if (v12 != 0) {
    v13 = fw_memory_g_heap_manager;
    v2[84] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  v2[77] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[78] & 1) != 0) {
    v15 = v2[80];
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v16, v15);
    }
  }
  v17 = v2[73];
  v2[67] = GameData_1fc1458;
  if (v17 != 0) {
    v18 = fw_memory_g_heap_manager;
    v2[74] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v18 + v19, v17);
  }
  v2[67] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[68] & 1) != 0) {
    v20 = v2[70];
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v21 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v21, v20);
    }
  }
  v22 = v2[63];
  v2[57] = GameData_1fc1458;
  if (v22 != 0) {
    v23 = fw_memory_g_heap_manager;
    v2[64] = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  v2[57] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[58] & 1) != 0) {
    v25 = v2[60];
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v26 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v26, v25);
    }
  }
  v27 = v2[53];
  v2[47] = GameData_1fc1458;
  if (v27 != 0) {
    v28 = fw_memory_g_heap_manager;
    v2[54] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v28 + v29, v27);
  }
  v2[47] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[48] & 1) != 0) {
    v30 = v2[50];
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v31 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v31, v30);
    }
  }
  v32 = v2[43];
  v2[37] = GameData_1fc1458;
  if (v32 != 0) {
    v33 = fw_memory_g_heap_manager;
    v2[44] = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v33 + v34, v32);
  }
  v2[37] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[38] & 1) != 0) {
    v35 = v2[40];
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v36 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v36, v35);
    }
  }
  v37 = v2[33];
  v2[27] = GameData_1fc1458;
  if (v37 != 0) {
    v38 = fw_memory_g_heap_manager;
    v2[34] = v37;
    v39 = 128;
    if (*(_QWORD*)(v38 + 200) == 0) {
      v39 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v38 + v39, v37);
  }
  v2[27] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[28] & 1) != 0) {
    v40 = v2[30];
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v41 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v41, v40);
    }
  }
  v42 = v2[23];
  v2[17] = GameData_1fc1458;
  if (v42 != 0) {
    v43 = fw_memory_g_heap_manager;
    v2[24] = v42;
    v44 = 128;
    if (*(_QWORD*)(v43 + 200) == 0) {
      v44 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v43 + v44, v42);
  }
  v2[17] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[18] & 1) != 0) {
    v45 = v2[20];
    if (v45 != 0) {
      v46 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v46 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v46, v45);
    }
  }
  v47 = v2[13];
  v2[7] = GameData_1fc1458;
  if (v47 != 0) {
    v48 = fw_memory_g_heap_manager;
    v2[14] = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v48 + v49, v47);
  }
  v2[7] = &gfx_settings_BaseParamInstance_vtable;
  if ((v2[8] & 1) != 0) {
    v50 = v2[10];
    if (v50 != 0) {
      v51 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v51 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v51, v50);
    }
  }
  v52 = v2[4];
  *v2 = gfx_settings_ParamSet_vtable;
  if (v52 != 0) {
    v53 = fw_memory_g_heap_manager;
    v2[5] = v52;
    v54 = 128;
    if (*(_QWORD*)(v53 + 200) == 0) {
      v54 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v53 + v54, v52);
  }
  if ((v2[1] & 1) != 0) {
    v55 = v2[3];
    if (v55 != 0) {
      v56 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v56 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v56, v55);
    }
  }
  return result;
}

#pragma GCC visibility pop
