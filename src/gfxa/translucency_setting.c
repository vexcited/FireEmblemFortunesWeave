#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc1458[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 (*gfx_settings_ParamSet_vtable[])();
extern __int64 (*gfxa_TranslucencySetting_vtable[])();
extern __int64 fw_memory_g_heap_manager;
_QWORD* TranslucencySetting_Destructor(_QWORD* result);

_QWORD* TranslucencySetting_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;

  v1 = result[73];
  v2 = result;
  *result = gfxa_TranslucencySetting_vtable;
  result[67] = GameData_1fc1458;
  if (v1 != 0) {
    v3 = fw_memory_g_heap_manager;
    result[74] = v1;
    v4 = 128;
    if (*(_QWORD*)(v3 + 200) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v3 + v4, v1);
  }
  v5 = *((_BYTE*)v2 + 544);
  v2[67] = &gfx_settings_BaseParamInstance_vtable;
  if ((v5 & 1) != 0) {
    v6 = v2[70];
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v7 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v7, v6);
    }
  }
  v8 = v2[63];
  v2[57] = GameData_1fc1458;
  if (v8 != 0) {
    v9 = fw_memory_g_heap_manager;
    v2[64] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v9 + v10, v8);
  }
  v11 = *((_BYTE*)v2 + 464);
  v2[57] = &gfx_settings_BaseParamInstance_vtable;
  if ((v11 & 1) != 0) {
    v12 = v2[60];
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v13 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v13, v12);
    }
  }
  v14 = v2[53];
  v2[47] = GameData_1fc1458;
  if (v14 != 0) {
    v15 = fw_memory_g_heap_manager;
    v2[54] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v15 + v16, v14);
  }
  v17 = *((_BYTE*)v2 + 384);
  v2[47] = &gfx_settings_BaseParamInstance_vtable;
  if ((v17 & 1) != 0) {
    v18 = v2[50];
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v19, v18);
    }
  }
  v20 = v2[43];
  v2[37] = GameData_1fc1458;
  if (v20 != 0) {
    v21 = fw_memory_g_heap_manager;
    v2[44] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v23 = *((_BYTE*)v2 + 304);
  v2[37] = &gfx_settings_BaseParamInstance_vtable;
  if ((v23 & 1) != 0) {
    v24 = v2[40];
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v25 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v25, v24);
    }
  }
  v26 = v2[33];
  v2[27] = GameData_1fc1458;
  if (v26 != 0) {
    v27 = fw_memory_g_heap_manager;
    v2[34] = v26;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v27 + v28, v26);
  }
  v29 = *((_BYTE*)v2 + 224);
  v2[27] = &gfx_settings_BaseParamInstance_vtable;
  if ((v29 & 1) != 0) {
    v30 = v2[30];
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v31 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v31, v30);
    }
  }
  v32 = v2[23];
  v2[17] = GameData_1fc1458;
  if (v32 != 0) {
    v33 = fw_memory_g_heap_manager;
    v2[24] = v32;
    v34 = 128;
    if (*(_QWORD*)(v33 + 200) == 0) {
      v34 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v33 + v34, v32);
  }
  v35 = *((_BYTE*)v2 + 144);
  v2[17] = &gfx_settings_BaseParamInstance_vtable;
  if ((v35 & 1) != 0) {
    v36 = v2[20];
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v37 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v37, v36);
    }
  }
  v38 = v2[13];
  v2[7] = GameData_1fc1458;
  if (v38 != 0) {
    v39 = fw_memory_g_heap_manager;
    v2[14] = v38;
    v40 = 128;
    if (*(_QWORD*)(v39 + 200) == 0) {
      v40 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v39 + v40, v38);
  }
  v41 = *((_BYTE*)v2 + 64);
  v2[7] = &gfx_settings_BaseParamInstance_vtable;
  if ((v41 & 1) != 0) {
    v42 = v2[10];
    if (v42 != 0) {
      v43 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v43 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v43, v42);
    }
  }
  v44 = v2[4];
  *v2 = gfx_settings_ParamSet_vtable;
  if (v44 != 0) {
    v45 = fw_memory_g_heap_manager;
    v2[5] = v44;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v45 + v46, v44);
  }
  if ((v2[1] & 1) != 0) {
    v47 = v2[3];
    if (v47 != 0) {
      v48 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v48 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v48, v47);
    }
  }
  return result;
}

#pragma GCC visibility pop
