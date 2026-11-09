#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201cb30[])();
extern __int64 (*GameData_20200c8[])();
extern __int64 (*GameData_2021c58[])();
extern __int64 GameData_2240170;
extern __int64 GameData_2240178;
extern __int64 GameData_22407a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_map_obj_g_object_records;
__int64 Impl_Destructor_1243e00(_QWORD* a1);
__int64 Impl_Destructor_1286cc0(__int64 result);
__int64 Impl_DeletingDestructor_1286dc0(_QWORD* a1);
__int64 Impl_Destructor_12a72c0(__int64 result);

__int64 Impl_Destructor_1243e00(_QWORD* a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
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
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;

  (*(void (**)(__int64))(*(_QWORD*)GameData_2240170 + 24LL))(GameData_2240170);
  result = GameData_2240170;
  if (GameData_2240170 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_2240170 + 8LL))(
        GameData_2240170);
  }
  GameData_2240170 = 0;
  v3 = (_QWORD*)a1[78];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != nullptr) {
    do {
      v5 = (_QWORD*)*v3;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
      v3 = v5;
    } while (v5 != nullptr);
  }
  v7 = a1[76];
  a1[76] = 0;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
  }
  v9 = a1[73];
  if (v9 != 0) {
    v10 = *(_QWORD*)v4;
    a1[74] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = (_QWORD*)a1[70];
  if (v12 != nullptr) {
    do {
      v13 = (_QWORD*)*v12;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14);
      v12 = v13;
    } while (v13 != nullptr);
  }
  v15 = a1[68];
  a1[68] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16);
  }
  v17 = a1[65];
  if (v17 != 0) {
    v18 = *(_QWORD*)v4;
    a1[66] = v17;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v18 + v19);
  }
  v20 = (_QWORD*)a1[62];
  if (v20 != nullptr) {
    do {
      v21 = (_QWORD*)*v20;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v22 = 128;
      }
      else {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v22);
      v20 = v21;
    } while (v21 != nullptr);
  }
  v23 = a1[60];
  a1[60] = 0;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24);
  }
  v25 = a1[57];
  if (v25 != 0) {
    v26 = *(_QWORD*)v4;
    a1[58] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v26 + v27);
  }
  v28 = a1[53];
  if (v28 != 0) {
    v29 = *(_QWORD*)v4;
    a1[54] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v29 + v30);
  }
  v31 = (_QWORD*)a1[49];
  if (v31 != nullptr) {
    v32 = (_QWORD*)a1[50];
    if (v31 == v32) {
      goto LABEL_61;
    }
    do {
      v35 = *--v32;
      v34 = v35;
      *v32 = 0;
      if (v35 != 0) {
        v36 = *(_QWORD*)(v34 + 8);
        if (v36 != 0) {
          v37 = *(_QWORD*)v4;
          *(_QWORD*)(v34 + 16) = v36;
          if (*(_QWORD*)(v37 + 200) != 0) {
            v38 = 128;
          }
          else {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(v37 + v38);
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v33 = 128;
        }
        else {
          v33 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v33);
      }
    } while (v32 != v31);
    v39 = a1[49];
    a1[50] = v31;
    if (v39 != 0) {
    LABEL_61:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v40 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v40);
    }
  }
  v41 = a1[46];
  if (v41 != 0) {
    v42 = *(_QWORD*)v4;
    a1[47] = v41;
    v43 = 128;
    if (*(_QWORD*)(v42 + 200) == 0) {
      v43 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v42 + v43);
  }
  v44 = a1[42];
  if (v44 != 0) {
    v45 = *(_QWORD*)v4;
    a1[43] = v44;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v45 + v46);
  }
  v47 = a1[38];
  if (v47 != 0) {
    v48 = *(_QWORD*)v4;
    a1[39] = v47;
    v49 = 128;
    if (*(_QWORD*)(v48 + 200) == 0) {
      v49 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v48 + v49);
  }
  v50 = a1[34];
  if (v50 != 0) {
    v51 = *(_QWORD*)v4;
    a1[35] = v50;
    v52 = 128;
    if (*(_QWORD*)(v51 + 200) == 0) {
      v52 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v51 + v52);
  }
  v53 = a1[30];
  if (v53 != 0) {
    v54 = *(_QWORD*)v4;
    a1[31] = v53;
    v55 = 128;
    if (*(_QWORD*)(v54 + 200) == 0) {
      v55 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v54 + v55);
  }
  v56 = a1[26];
  if (v56 != 0) {
    v57 = *(_QWORD*)v4;
    a1[27] = v56;
    v58 = 128;
    if (*(_QWORD*)(v57 + 200) == 0) {
      v58 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v57 + v58);
  }
  v59 = a1[22];
  if (v59 != 0) {
    v60 = *(_QWORD*)v4;
    a1[23] = v59;
    v61 = 128;
    if (*(_QWORD*)(v60 + 200) == 0) {
      v61 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v60 + v61);
  }
  v62 = a1[18];
  if (v62 != 0) {
    v63 = *(_QWORD*)v4;
    a1[19] = v62;
    v64 = 128;
    if (*(_QWORD*)(v63 + 200) == 0) {
      v64 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v63 + v64);
  }
  v65 = a1[14];
  if (v65 != 0) {
    v66 = *(_QWORD*)v4;
    a1[15] = v65;
    v67 = 128;
    if (*(_QWORD*)(v66 + 200) == 0) {
      v67 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v66 + v67);
  }
  v68 = a1[10];
  if (v68 != 0) {
    v69 = *(_QWORD*)v4;
    a1[11] = v68;
    v70 = 128;
    if (*(_QWORD*)(v69 + 200) == 0) {
      v70 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v69 + v70);
  }
  v71 = a1[6];
  if (v71 != 0) {
    v72 = *(_QWORD*)v4;
    a1[7] = v71;
    v73 = 128;
    if (*(_QWORD*)(v72 + 200) == 0) {
      v73 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v72 + v73);
  }
  v74 = a1[2];
  if (v74 != 0) {
    v75 = *(_QWORD*)v4;
    a1[3] = v74;
    v76 = 128;
    if (*(_QWORD*)(v75 + 200) == 0) {
      v76 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v75 + v76);
  }
  *a1 = GameData_201cb30;
  if ((_QWORD*)GameData_2240178 == a1) {
    GameData_2240178 = 0;
  }
  return result;
}

__int64 Impl_Destructor_1286cc0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(result + 48);
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[4];
  v2[4] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = v2[1];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    v2[2] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v9 + v10);
  }
  *v2 = GameData_20200c8;
  if ((_QWORD*)GameData_22407a8 == v2) {
    GameData_22407a8 = 0;
  }
  return result;
}

__int64 Impl_DeletingDestructor_1286dc0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = (_QWORD*)a1[6];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[4];
  a1[4] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = a1[1];
  if (v8 != 0) {
    v9 = *(_QWORD*)v3;
    a1[2] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(v9 + v10);
  }
  if ((_QWORD*)GameData_22407a8 == a1) {
    GameData_22407a8 = 0;
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
}

__int64 Impl_Destructor_12a72c0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_QWORD**)(result + 88);
  v2 = (_QWORD*)result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[9];
  v2[9] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = (_QWORD*)v2[6];
  if (v8 != nullptr) {
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
      v8 = v9;
    } while (v9 != nullptr);
  }
  v11 = v2[4];
  v2[4] = 0;
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  v13 = v2[1];
  if (v13 != 0) {
    v14 = v2[2];
    if (v13 == v14) {
      goto LABEL_30;
    }
    v15 = v2[2];
    do {
      v16 = *(_BYTE*)(v15 - 32);
      v15 -= 32;
      if ((v16 & 1) != 0 && *(_QWORD*)(v14 - 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
      }
      v14 = v15;
    } while (v15 != v13);
    v18 = v2[1];
    v2[2] = v13;
    if (v18 != 0) {
    LABEL_30:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
    }
  }
  *v2 = GameData_2021c58;
  if ((_QWORD*)game_script_map_obj_g_object_records == v2) {
    game_script_map_obj_g_object_records = 0;
  }
  return result;
}

#pragma GCC visibility pop
