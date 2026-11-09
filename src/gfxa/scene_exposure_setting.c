#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc1848[])();
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfxa_SceneExposureSetting_vtable[])();
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e548[27];
_QWORD* SceneExposureSetting_Destructor(_QWORD* result);

_QWORD* SceneExposureSetting_Destructor(_QWORD* result)
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
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;

  v1 = result;
  *result = gfxa_SceneExposureSetting_vtable;
  v2 = GameData_212e528[0];
  v3 = result[118];
  result[112] = GameData_212e528[0] + 16;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[119] = v3;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v5 + v6, v3);
  }
  v7 = GameData_212e530[0];
  v1[112] = GameData_212e530[0] + 16;
  if ((v1[113] & 1) != 0) {
    v8 = v1[115];
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v8);
    }
  }
  v10 = v1[106];
  v1[96] = GameData_1fc1848;
  if (v10 != 0) {
    v11 = *(_QWORD*)v4;
    v1[107] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v1[96] = v7 + 16;
  if ((v1[97] & 1) != 0) {
    v13 = v1[99];
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
    }
  }
  v15 = v1[91];
  v1[85] = v2 + 16;
  if (v15 != 0) {
    v16 = *(_QWORD*)v4;
    v1[92] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v1[85] = v7 + 16;
  if ((v1[86] & 1) != 0) {
    v18 = v1[88];
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19, v18);
    }
  }
  v20 = v1[81];
  v1[75] = v2 + 16;
  if (v20 != 0) {
    v21 = *(_QWORD*)v4;
    v1[82] = v20;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v21 + v22, v20);
  }
  v1[75] = v7 + 16;
  if ((v1[76] & 1) != 0) {
    v23 = v1[78];
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24, v23);
    }
  }
  v25 = v1[71];
  v1[65] = v2 + 16;
  if (v25 != 0) {
    v26 = *(_QWORD*)v4;
    v1[72] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  v1[65] = v7 + 16;
  if ((v1[66] & 1) != 0) {
    v28 = v1[68];
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v29 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v29, v28);
    }
  }
  v30 = v1[61];
  v1[55] = v2 + 16;
  if (v30 != 0) {
    v31 = *(_QWORD*)v4;
    v1[62] = v30;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v31 + v32, v30);
  }
  v1[55] = v7 + 16;
  if ((v1[56] & 1) != 0) {
    v33 = v1[58];
    if (v33 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v34 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v34, v33);
    }
  }
  v35 = v1[51];
  v1[46] = GameData_1fc23d8;
  if (v35 != 0) {
    v36 = *(_QWORD*)v4;
    v1[52] = v35;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v36 + v37, v35);
  }
  v1[46] = v7 + 16;
  if ((v1[47] & 1) != 0) {
    v38 = v1[49];
    if (v38 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v39 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v39, v38);
    }
  }
  v40 = v1[42];
  v1[36] = v2 + 16;
  if (v40 != 0) {
    v41 = *(_QWORD*)v4;
    v1[43] = v40;
    v42 = 128;
    if (*(_QWORD*)(v41 + 200) == 0) {
      v42 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v41 + v42, v40);
  }
  v1[36] = v7 + 16;
  if ((v1[37] & 1) != 0) {
    v43 = v1[39];
    if (v43 != 0) {
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v44 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v44, v43);
    }
  }
  v45 = v1[32];
  v1[26] = v2 + 16;
  if (v45 != 0) {
    v46 = *(_QWORD*)v4;
    v1[33] = v45;
    v47 = 128;
    if (*(_QWORD*)(v46 + 200) == 0) {
      v47 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v46 + v47, v45);
  }
  v1[26] = v7 + 16;
  if ((v1[27] & 1) != 0) {
    v48 = v1[29];
    if (v48 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v49 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v49, v48);
    }
  }
  v50 = v1[22];
  v1[17] = GameData_1fc23d8;
  if (v50 != 0) {
    v51 = *(_QWORD*)v4;
    v1[23] = v50;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v51 + v52, v50);
  }
  v1[17] = v7 + 16;
  if ((v1[18] & 1) != 0) {
    v53 = v1[20];
    if (v53 != 0) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v54 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v54, v53);
    }
  }
  v55 = v1[13];
  v1[7] = v2 + 16;
  if (v55 != 0) {
    v56 = *(_QWORD*)v4;
    v1[14] = v55;
    v57 = 128;
    if (*(_QWORD*)(v56 + 200) == 0) {
      v57 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v56 + v57, v55);
  }
  v1[7] = v7 + 16;
  if ((v1[8] & 1) != 0) {
    v58 = v1[10];
    if (v58 != 0) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v59 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v59, v58);
    }
  }
  v60 = v1[4];
  *v1 = GameData_212e548[0] + 2;
  if (v60 != 0) {
    v61 = *(_QWORD*)v4;
    v1[5] = v60;
    v62 = 128;
    if (*(_QWORD*)(v61 + 200) == 0) {
      v62 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v61 + v62, v60);
  }
  if ((v1[1] & 1) != 0) {
    v63 = v1[3];
    if (v63 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v64 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v64, v63);
    }
  }
  return result;
}

#pragma GCC visibility pop
