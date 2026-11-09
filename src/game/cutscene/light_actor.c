#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 GameRoutine_c53460(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cutscene_LightActor_vtable[])();
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_1812e30(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(void);
__int64 LightActor_Destructor(_QWORD* a1);
__int64 LightActor_180c220(__int64 result, _QWORD* a2, char a3);
__int64 LightActor_Unknown7(_QWORD* a1);
__int64 LightActor_Unknown8(__int64 result, __int64 a2);

__int64 LightActor_Destructor(_QWORD* a1)
{
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
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 result;

  *a1 = game_cutscene_LightActor_vtable;
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  v4 = *(_QWORD*)(v2 + 16);
  v3 = *(_QWORD*)(v2 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v5 = std___1___shared_weak_count_lock(v3);
  std___1___shared_weak_count___release_weak(v3);
  v6 = a1[18];
  v7 = *(_QWORD*)(*(_QWORD*)(v4 + 288) + 872LL);
  if (v6 != 0) {
    v8 = std___1___shared_weak_count_lock(v6);
    if (v8 != 0) {
      v9 = a1[17];
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v10);
      }
      if (v9 != 0) {
        GameRoutine_c53460(v7, a1 + 16);
      }
    }
  }
  v11 = a1[23];
  if (v11 != 0) {
    v12 = std___1___shared_weak_count_lock(v11);
    if (v12 != 0) {
      v13 = a1[22];
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v14 = v12;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v14);
      }
      if (v13 != 0) {
        GameRoutine_c53460(v7, a1 + 21);
      }
    }
  }
  v15 = a1[28];
  if (v15 != 0) {
    v16 = std___1___shared_weak_count_lock(v15);
    if (v16 != 0) {
      v17 = a1[27];
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v18 = v16;
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v18);
      }
      if (v17 != 0) {
        GameRoutine_c53460(v7, a1 + 26);
      }
    }
  }
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v19 = a1[97];
  v20 = fw_memory_g_heap_manager_ptr;
  if (v19 != 0) {
    v21 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[98] = v19;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(v21 + v22, v19);
  }
  v23 = a1[94];
  if (v23 != 0) {
    v24 = a1[95];
    if (v23 == v24) {
      goto LABEL_33;
    }
    do {
      v25 = *(_QWORD*)(v24 - 8);
      if (v25 != 0) {
        std___1___shared_weak_count___release_weak(v25);
      }
      v24 -= 16;
    } while (v24 != v23);
    v26 = a1[94];
    a1[95] = v23;
    v23 = v26;
    if (v26 != 0) {
    LABEL_33:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v27, v23);
    }
  }
  v28 = a1[91];
  if (v28 != 0) {
    v29 = *(_QWORD*)v20;
    a1[92] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(v29 + v30, v28);
  }
  v31 = a1[88];
  if (v31 != 0) {
    v32 = a1[89];
    if (v31 == v32) {
      goto LABEL_47;
    }
    do {
      v33 = *(_QWORD*)(v32 - 8);
      if (v33 != 0) {
        std___1___shared_weak_count___release_weak(v33);
      }
      v32 -= 16;
    } while (v32 != v31);
    v34 = a1[88];
    a1[89] = v31;
    v31 = v34;
    if (v34 != 0) {
    LABEL_47:
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v35, v31);
    }
  }
  v36 = a1[85];
  if (v36 != 0) {
    v37 = *(_QWORD*)v20;
    a1[86] = v36;
    v38 = 128;
    if (*(_QWORD*)(v37 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(v37 + v38, v36);
  }
  v39 = a1[82];
  if (v39 != 0) {
    v40 = a1[83];
    if (v39 == v40) {
      goto LABEL_61;
    }
    do {
      v41 = *(_QWORD*)(v40 - 8);
      if (v41 != 0) {
        std___1___shared_weak_count___release_weak(v41);
      }
      v40 -= 16;
    } while (v40 != v39);
    v42 = a1[82];
    a1[83] = v39;
    v39 = v42;
    if (v42 != 0) {
    LABEL_61:
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v43, v39);
    }
  }
  v44 = a1[79];
  if (v44 != 0) {
    v45 = *(_QWORD*)v20;
    a1[80] = v44;
    v46 = 128;
    if (*(_QWORD*)(v45 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(v45 + v46, v44);
  }
  v47 = a1[76];
  if (v47 != 0) {
    v48 = a1[77];
    if (v47 == v48) {
      goto LABEL_75;
    }
    do {
      v49 = *(_QWORD*)(v48 - 8);
      if (v49 != 0) {
        std___1___shared_weak_count___release_weak(v49);
      }
      v48 -= 16;
    } while (v48 != v47);
    v50 = a1[76];
    a1[77] = v47;
    v47 = v50;
    if (v50 != 0) {
    LABEL_75:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v51, v47);
    }
  }
  v52 = a1[73];
  if (v52 != 0) {
    v53 = *(_QWORD*)v20;
    a1[74] = v52;
    v54 = 128;
    if (*(_QWORD*)(v53 + 200) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(v53 + v54, v52);
  }
  v55 = a1[70];
  if (v55 != 0) {
    v56 = a1[71];
    if (v55 == v56) {
      goto LABEL_89;
    }
    do {
      v57 = *(_QWORD*)(v56 - 8);
      if (v57 != 0) {
        std___1___shared_weak_count___release_weak(v57);
      }
      v56 -= 16;
    } while (v56 != v55);
    v58 = a1[70];
    a1[71] = v55;
    v55 = v58;
    if (v58 != 0) {
    LABEL_89:
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v59, v55);
    }
  }
  v60 = a1[67];
  if (v60 != 0) {
    v61 = *(_QWORD*)v20;
    a1[68] = v60;
    v62 = 128;
    if (*(_QWORD*)(v61 + 200) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(v61 + v62, v60);
  }
  v63 = a1[64];
  if (v63 != 0) {
    v64 = a1[65];
    if (v63 == v64) {
      goto LABEL_103;
    }
    do {
      v65 = *(_QWORD*)(v64 - 8);
      if (v65 != 0) {
        std___1___shared_weak_count___release_weak(v65);
      }
      v64 -= 16;
    } while (v64 != v63);
    v66 = a1[64];
    a1[65] = v63;
    v63 = v66;
    if (v66 != 0) {
    LABEL_103:
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v67, v63);
    }
  }
  v68 = a1[61];
  if (v68 != 0) {
    v69 = *(_QWORD*)v20;
    a1[62] = v68;
    v70 = 128;
    if (*(_QWORD*)(v69 + 200) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(v69 + v70, v68);
  }
  v71 = a1[58];
  if (v71 != 0) {
    v72 = a1[59];
    if (v71 == v72) {
      goto LABEL_117;
    }
    do {
      v73 = *(_QWORD*)(v72 - 8);
      if (v73 != 0) {
        std___1___shared_weak_count___release_weak(v73);
      }
      v72 -= 16;
    } while (v72 != v71);
    v74 = a1[58];
    a1[59] = v71;
    v71 = v74;
    if (v74 != 0) {
    LABEL_117:
      v75 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v75 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v75, v71);
    }
  }
  v76 = a1[55];
  if (v76 != 0) {
    v77 = *(_QWORD*)v20;
    a1[56] = v76;
    v78 = 128;
    if (*(_QWORD*)(v77 + 200) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(v77 + v78, v76);
  }
  v79 = a1[52];
  if (v79 != 0) {
    v80 = a1[53];
    if (v79 == v80) {
      goto LABEL_131;
    }
    do {
      v81 = *(_QWORD*)(v80 - 8);
      if (v81 != 0) {
        std___1___shared_weak_count___release_weak(v81);
      }
      v80 -= 16;
    } while (v80 != v79);
    v82 = a1[52];
    a1[53] = v79;
    v79 = v82;
    if (v82 != 0) {
    LABEL_131:
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v83 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v83, v79);
    }
  }
  v84 = a1[49];
  if (v84 != 0) {
    v85 = *(_QWORD*)v20;
    a1[50] = v84;
    v86 = 128;
    if (*(_QWORD*)(v85 + 200) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free(v85 + v86, v84);
  }
  v87 = a1[46];
  if (v87 != 0) {
    v88 = a1[47];
    if (v87 == v88) {
      goto LABEL_145;
    }
    do {
      v89 = *(_QWORD*)(v88 - 8);
      if (v89 != 0) {
        std___1___shared_weak_count___release_weak(v89);
      }
      v88 -= 16;
    } while (v88 != v87);
    v90 = a1[46];
    a1[47] = v87;
    v87 = v90;
    if (v90 != 0) {
    LABEL_145:
      v91 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v91 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v91, v87);
    }
  }
  v92 = a1[43];
  if (v92 != 0) {
    v93 = *(_QWORD*)v20;
    a1[44] = v92;
    v94 = 128;
    if (*(_QWORD*)(v93 + 200) == 0) {
      v94 = 56;
    }
    nn_mem_StandardAllocator_Free(v93 + v94, v92);
  }
  v95 = a1[40];
  if (v95 != 0) {
    v96 = *(_QWORD*)v20;
    a1[41] = v95;
    v97 = 128;
    if (*(_QWORD*)(v96 + 200) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free(v96 + v97, v95);
  }
  v98 = a1[37];
  if (v98 != 0) {
    v99 = *(_QWORD*)v20;
    a1[38] = v98;
    v100 = 128;
    if (*(_QWORD*)(v99 + 200) == 0) {
      v100 = 56;
    }
    nn_mem_StandardAllocator_Free(v99 + v100, v98);
  }
  v101 = a1[34];
  if (v101 != 0) {
    v102 = *(_QWORD*)v20;
    a1[35] = v101;
    v103 = 128;
    if (*(_QWORD*)(v102 + 200) == 0) {
      v103 = 56;
    }
    nn_mem_StandardAllocator_Free(v102 + v103, v101);
  }
  v104 = a1[31];
  if (v104 != 0) {
    v105 = a1[32];
    if (v104 == v105) {
      goto LABEL_171;
    }
    do {
      v106 = *(_QWORD*)(v105 - 16);
      if (v106 != 0) {
        std___1___shared_weak_count___release_weak(v106);
      }
      v105 -= 24;
    } while (v105 != v104);
    v107 = a1[31];
    a1[32] = v104;
    v104 = v107;
    if (v107 != 0) {
    LABEL_171:
      v108 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v108 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v108, v104);
    }
  }
  v109 = a1[28];
  a1[28] = 0;
  a1[26] = gfx_light_Actor_vtable;
  a1[27] = 0;
  if (v109 != 0) {
    std___1___shared_weak_count___release_weak(v109);
    v110 = a1[28];
    a1[29] = 0;
    if (v110 != 0) {
      std___1___shared_weak_count___release_weak(v110);
    }
  }
  else {
    a1[29] = 0;
  }
  v111 = a1[23];
  a1[23] = 0;
  a1[21] = gfx_light_Actor_vtable;
  a1[22] = 0;
  if (v111 != 0) {
    std___1___shared_weak_count___release_weak(v111);
    v112 = a1[23];
    a1[24] = 0;
    if (v112 != 0) {
      std___1___shared_weak_count___release_weak(v112);
    }
  }
  else {
    a1[24] = 0;
  }
  v113 = a1[18];
  a1[18] = 0;
  a1[16] = gfx_light_Actor_vtable;
  a1[17] = 0;
  if (v113 != 0) {
    std___1___shared_weak_count___release_weak(v113);
    v114 = a1[18];
    a1[19] = 0;
    if (v114 != 0) {
      std___1___shared_weak_count___release_weak(v114);
    }
    result = a1[2];
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  else {
    a1[19] = 0;
    result = a1[2];
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

__int64 LightActor_180c220(__int64 result, _QWORD* a2, char a3)
{
  __int64 v3;
  __int64 v4;
  char v5;
  _QWORD* v7;
  char** v8;
  char** v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  _QWORD* v22;
  char* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  float v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  float v66;
  __int64 v67;
  __int64 v68;
  float v70;
  float v71;

  v4 = *a2;
  v3 = a2[1];
  v5 = a3;
  v7 = (_QWORD*)result;
  if (v3 == 0) {
    v11 = *(char**)(result + 256);
    v10 = *(_QWORD*)(result + 264);
    v8 = (char**)(result + 256);
    v9 = (char**)(result + 248);
    if ((unsigned __int64)v11 < v10) {
      *(_QWORD*)v11 = v4;
      *((_QWORD*)v11 + 1) = 0;
      goto LABEL_6;
    }
  LABEL_7:
    v13 = *(char**)(result + 248);
    v14 = (char*)(v11 - v13);
    v15 = 1 - 0x5555555555555555LL * ((v11 - v13) >> 3);
    if (v15 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1812e30();
    }
    v16 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v10 - (_QWORD)v13) >> 3);
    if (2 * v16 > v15) {
      v15 = 2 * v16;
    }
    if (v16 >= 0x555555555555555LL) {
      v17 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v17 = v15;
    }
    if (v17 > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_83;
    }
    v18 = 3 * v17;
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v17, 16, 0);
    v20 = &v14[v19];
    *(_QWORD*)v20 = v4;
    *((_QWORD*)v20 + 1) = v3;
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v13 = (char*)v7[31];
      v11 = (char*)v7[32];
      v14 = (char*)(v11 - v13);
    }
    v21 = v19 + 8 * v18;
    v12 = v20 + 24;
    v22 = (_QWORD*)(v20 - v14);
    *((_QWORD*)v20 + 2) = 0;
    if (v13 != v11) {
      v23 = v13;
      v24 = v22;
      do {
        *v24 = *(_QWORD*)v23;
        v24[1] = *((_QWORD*)v23 + 1);
        *(_QWORD*)v23 = 0;
        *((_QWORD*)v23 + 1) = 0;
        v25 = *((_QWORD*)v23 + 2);
        v23 += 24;
        v24[2] = v25;
        v24 += 3;
      } while (v23 != v11);
      do {
        v26 = *((_QWORD*)v13 + 1);
        if (v26 != 0) {
          std___1___shared_weak_count___release_weak(v26);
        }
        v13 += 24;
      } while (v13 != v11);
      v13 = *v9;
    }
    v7[31] = v22;
    v7[32] = v12;
    v7[33] = v21;
    if (v13 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v13);
    }
    v5 = a3;
    goto LABEL_29;
  }
  v8 = (char**)(result + 256);
  v9 = (char**)(result + 248);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v11 = *(char**)(result + 256);
  v10 = *(_QWORD*)(result + 264);
  if ((unsigned __int64)v11 >= v10) {
    goto LABEL_7;
  }
  *(_QWORD*)v11 = v4;
  *((_QWORD*)v11 + 1) = v3;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);

LABEL_6:
  *((_QWORD*)v11 + 2) = 0;
  v12 = v11 + 24;

LABEL_29:
  v28 = *v9;
  *v8 = v12;
  result = a2[1];
  v29 = (v12 - v28) >> 3;
  if (result != 0 && (result = std___1___shared_weak_count_lock(result)) != 0) {
    v30 = *(_DWORD*)(*a2 + 48LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v31 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v31);
    }
  }
  else {
    LOBYTE(v30) = 0;
  }
  v32 = -1 - 0x5555555555555555LL * v29;
  if ((v5 & 1) == 0 && (v30 & 1) == 0) {
    goto LABEL_56;
  }
  v34 = (__int64*)v7[35];
  v33 = v7[36];
  if ((unsigned __int64)v34 >= v33) {
    v36 = v7[34];
    v37 = (char*)v34 - v36;
    v38 = ((__int64)v34 - v36) >> 3;
    v39 = v38 + 1;
    if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
      goto LABEL_85;
    }
    v40 = v33 - v36;
    if (v40 >> 2 > v39) {
      v39 = v40 >> 2;
    }
    v41 = (unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                        : v39;
    if (v41 != 0) {
      if (v41 >> 61 != 0) {
        goto LABEL_83;
      }
      v42 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v41, 16, 0);
    }
    else {
      v42 = 0;
    }
    v43 = v42 + 8 * v41;
    v44 = (char*)v34 - v36;
    v45 = (__int64)&v37[v42 + -8 * v38];
    *(_QWORD*)&v37[v42] = v32;
    v35 = (__int64)&v37[v42 + 8];
    memcpy(v45, v36, v44);
    v7[34] = v45;
    v7[35] = v35;
    v7[36] = v43;
    if (v36 != 0) {
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v36);
    }
  }
  else {
    *v34 = v32;
    v35 = (__int64)(v34 + 1);
  }
  v7[35] = v35;
  result = std___1___shared_weak_count_lock(a2[1]);
  v47 = result;
  v48 = *(float*)(*a2 + 8LL);
  v50 = v7[37];
  v49 = v7[38];
  v70 = v48;
  if (v50 == v49 || *(float*)(v49 - 4) <= v48) {
    result = AnimCtrlModule_a78450(v7 + 37, &v70);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    result = std___1___shared_weak_count___release_weak(v47);
    if ((v30 & 2) == 0) {
      goto LABEL_80;
    }
  }
  else {
  LABEL_56:
    if ((v30 & 2) == 0) {
      goto LABEL_80;
    }
  }
  v52 = (__int64*)v7[41];
  v51 = v7[42];
  if ((unsigned __int64)v52 >= v51) {
    v54 = v7[40];
    v55 = (char*)v52 - v54;
    v56 = ((__int64)v52 - v54) >> 3;
    v57 = v56 + 1;
    if ((unsigned __int64)(v56 + 1) >> 61 == 0) {
      v58 = v51 - v54;
      if (v58 >> 2 > v57) {
        v57 = v58 >> 2;
      }
      if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
        v59 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v59 = v57;
      }
      if (v59 == 0) {
        v60 = 0;
      LABEL_71:
        v61 = v60 + 8 * v59;
        v62 = (char*)v52 - v54;
        v63 = (__int64)&v55[v60 + -8 * v56];
        *(_QWORD*)&v55[v60] = v32;
        v53 = (__int64)&v55[v60 + 8];
        memcpy(v63, v54, v62);
        v7[40] = v63;
        v7[41] = v53;
        v7[42] = v61;
        if (v54 != 0) {
          v64 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v64 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v54);
        }
        goto LABEL_75;
      }
      if (v59 >> 61 == 0) {
        v60 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v59, 16, 0);
        goto LABEL_71;
      }
    LABEL_83:
      GameRoutine_60a210(result);
    }
  LABEL_85:
    GameRoutine_65c760();
  }
  *v52 = v32;
  v53 = (__int64)(v52 + 1);

LABEL_75:
  v7[41] = v53;
  result = std___1___shared_weak_count_lock(a2[1]);
  v65 = result;
  v66 = *(float*)(*a2 + 8LL);
  v68 = v7[43];
  v67 = v7[44];
  v71 = v66;
  if (v68 == v67 || *(float*)(v67 - 4) <= v66) {
    result = AnimCtrlModule_a78450(v7 + 43, &v71);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
    result = std___1___shared_weak_count___release_weak(v65);
  }

LABEL_80:
  if (v3 != 0) {
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 LightActor_Unknown7(_QWORD* a1)
{
  int v2;
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
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if (a1[31] == a1[32] && a1[46] == a1[47] && a1[52] == a1[53]) {
    if (a1[58] == a1[59]) {
      v2 = 1;
    }
    else {
      v2 = 2;
    }
    v3 = a1[18];
    if (v3 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v2 = 2;
    v3 = a1[18];
    if (v3 == 0) {
      goto LABEL_19;
    }
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 != 0) {
    v5 = a1[17];
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v6);
    }
    if (v5 != 0) {
      v7 = a1[18];
      if (v7 != 0) {
        v8 = std___1___shared_weak_count_lock(v7);
        if (v8 != 0) {
          v9 = a1[17];
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v10 = v8;
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak(v10);
          }
          if (v9 != 0) {
            *(_DWORD*)(a1[19] + 108LL) = v2;
          }
        }
      }
    }
  }

LABEL_19:
  v11 = a1[23];
  if (v11 != 0) {
    v12 = std___1___shared_weak_count_lock(v11);
    if (v12 != 0) {
      v13 = a1[22];
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v14 = v12;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v14);
      }
      if (v13 != 0) {
        v15 = a1[23];
        if (v15 != 0) {
          v16 = std___1___shared_weak_count_lock(v15);
          if (v16 != 0) {
            v17 = a1[22];
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v18 = v16;
              (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
              std___1___shared_weak_count___release_weak(v18);
            }
            if (v17 != 0) {
              *(_DWORD*)(a1[24] + 108LL) = v2;
            }
          }
        }
      }
    }
  }
  result = a1[28];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v20 = a1[27];
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v21 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v21);
      }
      if (v20 != 0) {
        result = a1[28];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v22 = a1[27];
            if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v23 = result;
              (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
              result = std___1___shared_weak_count___release_weak(v23);
            }
            if (v22 != 0) {
              *(_DWORD*)(a1[29] + 108LL) = v2;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 LightActor_Unknown8(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD v16[2];

  v2 = *(__int64**)(result + 248);
  for (i = *(__int64**)(result + 256); v2 != i; v2 += 3) {
    result = v2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v6 = *v2;
        v7 = result;
        if (*v2 != 0) {
          v8 = *(unsigned __int8*)(v6 + 144);
          v9 = v6 + 145;
          v12 = v6 + 152;
          v10 = *(_QWORD*)(v6 + 152);
          v11 = *(_QWORD*)(v12 + 8);
          v13 = (v8 & 1) == 0;
          v14 = *(_QWORD*)(a2 + 32);
          v15 = v8 >> 1;
          if (v13) {
            v10 = v15;
          }
          else {
            v9 = v11;
          }
          v16[0] = v9;
          v16[1] = v10;
          if (v14 == 0) {
            GameRoutine_60a310(0, v5);
          }
          result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v14 + 48LL))(
              v14, v16);
          v2[2] = result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak(v7);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
