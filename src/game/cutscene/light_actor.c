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
__attribute__((swiftcall)) void GameRoutine_17fd670(PSEUDO_X8, _QWORD*,
                                                    unsigned int, unsigned int,
                                                    float32x2_t*, float32x4_t*,
                                                    char);
__int64 GameRoutine_17fb660(__int64 result, _OWORD*, float, double);
__int64 GameRoutine_17fdec0(_QWORD, _QWORD, float);
__int64 GameRoutine_17fe060(_QWORD, _QWORD);
__int64 GameRoutine_17fe700(_QWORD, _QWORD);
__int64 game_cutscene_17fe320(__int64, _QWORD*);
__n128 game_cutscene_17ffe50(__int64*);
extern _UNKNOWN* GameData_212c540;
extern unsigned int GameData_1c0b528[3];
float GameRoutine_618640(_QWORD, double, double);
long double PostEffectActor_17fb700(_QWORD, _QWORD);
__int64 LightActor_Unknown4(float32x4_t* a1, double a2, float a3);
__int64 LightActor_Unknown5(__int64 result, float a2);
__int64 GameRoutine_17fe060_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_17fe060");
__int64 GameRoutine_17fe700_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_17fe700");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

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
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD v15[2];

  v2 = *(__int64**)(result + 248);
  for (i = *(__int64**)(result + 256); v2 != i; v2 += 3) {
    result = v2[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v5 = *v2;
        v6 = result;
        if (*v2 != 0) {
          v7 = *(unsigned __int8*)(v5 + 144);
          v8 = v5 + 145;
          v11 = v5 + 152;
          v9 = *(_QWORD*)(v5 + 152);
          v10 = *(_QWORD*)(v11 + 8);
          v12 = (v7 & 1) == 0;
          v13 = *(_QWORD*)(a2 + 32);
          v14 = v7 >> 1;
          if (v12) {
            v9 = v14;
          }
          else {
            v8 = v10;
          }
          v15[0] = v8;
          v15[1] = v9;
          if (v13 == 0) {
            GameRoutine_60a310_alt1();
          }
          result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v13 + 48LL))(
              v13, v15);
          v2[2] = result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          result = std___1___shared_weak_count___release_weak_alt1(v6);
        }
      }
    }
  }
  return result;
}

__int64 LightActor_Unknown4(float32x4_t* a1, double a2, float a3)
{
  unsigned __int64 v3;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;
  __int64 v24;
  unsigned __int64 v25;
  float32x4_t v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __n128 v31;
  float32x4_t v32;
  __int64 v33;
  __int128 v34;
  float v35;
  int v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int128 v48;
  float v49;
  float v50;
  float v51;
  unsigned int v52;
  __int64 v53;
  unsigned __int32 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int128 v62;
  float v63;
  float v64;
  float v65;
  unsigned int v66;
  __int64 v67;
  unsigned __int32 v68;
  unsigned __int32 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int128 v77;
  float v78;
  float v79;
  float v80;
  unsigned int v81;
  __int64 v82;
  long double v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int128 v91;
  float v92;
  float v93;
  float v94;
  unsigned int v95;
  __int64 v96;
  long double v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int128 v105;
  float v106;
  float v107;
  float v108;
  unsigned int v109;
  __int64 v110;
  long double v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int128 v126;
  float v127;
  float v128;
  float v129;
  unsigned int v130;
  __int64 v131;
  long double v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  __int64* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int128 v140;
  float v141;
  float v142;
  float v143;
  unsigned int v144;
  __int64 v145;
  long double v146;
  unsigned __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 result;
  unsigned __int64 v156;
  __int64 v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  unsigned int v162;
  __int64 v163;
  float v164;
  float v165;
  __int64 v166;

  v3 = LANES128(a1[39]).n128_u64[1];
  v6 = (LANES128(a1[40]).n128_u64[0] - v3) >> 2;
  do {
    if ((int)v6 < 1) {
      goto LABEL_10;
    }
    LODWORD(v6) = v6 - 1;
  } while (*(float*)(v3 + 4LL * (unsigned int)v6) > a3);
  if ((v6 & 0x80000000) != 0) {
    goto LABEL_10;
  }
  v7 = (_QWORD*)(LANES128(a1[38]).n128_u64[0] + 16 * (v6 & 0x7FFFFFFF));
  v8 = v7[1];
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_10;
  }
  if (*v7 != 0) {
    LANES128(a1[5]).n128_u8[13] = *(_BYTE*)(*v7 + 48LL);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_10:
    if ((LANES128(a1[5]).n128_u8[13] & 1) == 0) {
      goto LABEL_180;
    }
    goto LABEL_11;
  }
  v33 = v9;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v33);
  if ((LANES128(a1[5]).n128_u8[13] & 1) == 0) {
    goto LABEL_180;
  }
LABEL_11:
  v10 = LANES128(a1[1]).n128_u64[0];
  if (v10 != 0) {
    v11 = std___1___shared_weak_count_lock(v10);
    if (v11 != 0) {
      v12 = LANES128(*(a1)).n128_u64[1];
      v13 = v11;
      if (v12 != 0) {
        GameRoutine_17fdec0(&a1[2], v12 + 168, a3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  v14 = LANES128(a1[18]).n128_u64[1];
  v15 = (LANES128(a1[19]).n128_u64[0] - v14) >> 2;
  while ((int)v15 >= 1) {
    LODWORD(v15) = v15 - 1;
    if (*(float*)(v14 + 4LL * (unsigned int)v15) <= a3) {
      if ((v15 & 0x80000000) == 0) {
        v16 = (__int64*)(LANES128(a1[15]).n128_u64[1] +
                         24LL * *(_QWORD*)(LANES128(a1[17]).n128_u64[0] +
                                           8 * (v15 & 0x7FFFFFFF)));
        if (v16[2] == 0) {
          v27 = v16[1];
          if (v27 != 0) {
            v28 = std___1___shared_weak_count_lock(v27);
            if (v28 != 0) {
              v29 = *v16;
              v30 = v28;
              if (v29 != 0) {
                v31 = game_cutscene_17ffe50((__int64*)(v29 + 88));
                v158 = v32;
                v160 = v31;
                LANES128(v32).n128_f32[0] = a3;
                GameRoutine_17fb660((__int64)&v163, (_OWORD*)(v29 + 64),
                                    *(float*)(v29 + 8),
                                    LANES128(v32).n128_f64[0]);
                a1[2] = vaddq_f32(
                    v160, vmulq_n_f32(vsubq_f32(v158, v160), *(float*)&v166));
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
                std___1___shared_weak_count___release_weak(v30);
              }
            }
          }
        }
      }
      break;
    }
  }
  v17 = LANES128(a1[21]).n128_u64[1];
  v18 = (LANES128(a1[22]).n128_u64[0] - v17) >> 2;
  while ((int)v18 >= 1) {
    LODWORD(v18) = v18 - 1;
    if (*(float*)(v17 + 4LL * (unsigned int)v18) <= a3) {
      if ((v18 & 0x80000000) == 0) {
        v19 = (__int64*)(LANES128(a1[15]).n128_u64[1] +
                         24LL * *(_QWORD*)(LANES128(a1[20]).n128_u64[0] +
                                           8 * (v18 & 0x7FFFFFFF)));
        v20 = v19[1];
        if (v20 != 0) {
          v21 = std___1___shared_weak_count_lock(v20);
          if (v21 != 0) {
            v22 = *v19;
            if (*v19 != 0) {
              v23 = *(float32x4_t*)GameData_212c540;
              v24 = *(_QWORD*)(v22 + 120);
              v25 = (*(_QWORD*)(v22 + 128) - v24) >> 2;
              if (v25 < 3) {
                v26 = *(float32x4_t*)GameData_212c540;
              }
              else {
                LANES128(v26).n128_u64[0] = *(_QWORD*)v24;
                LANES128(v26).n128_u64[1] = *(unsigned int*)(v24 + 8);
                if (v25 >= 6) {
                  LANES128(v23).n128_u64[0] = *(_QWORD*)(v24 + 12);
                  LANES128(v23).n128_u32[2] = *(_DWORD*)(v24 + 20);
                }
              }
              v34 = *(_OWORD*)(v22 + 64);
              v35 = 1.0;
              v36 = (int)*(float*)&v34;
              if ((unsigned int)(int)*(float*)&v34 <= 0xFFFFFFFD) {
                v37 = a3 - *(float*)(v22 + 8);
                v35 = 0.0;
                if (v37 > 0.0) {
                  v35 = 1.0;
                  if (v37 < *((float*)&v34 + 1)) {
                    v159 = v26;
                    v161 = v23;
                    v38 = v21;
                    if ((unsigned int)(v36 - 1) > 2) {
                      v39 = 0;
                    }
                    else {
                      v39 = GameData_1c0b528[v36 - 1];
                    }
                    LODWORD(v34) = 1.0;
                    v35 = GameRoutine_618640(v39, 0.0, *(double*)&v34);
                    v26 = v159;
                    v23 = v161;
                    v21 = v38;
                  }
                }
              }
              a1[3] = vaddq_f32(v26, vmulq_n_f32(vsubq_f32(v23, v26), v35));
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v40 = v21;
              (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
              std___1___shared_weak_count___release_weak(v40);
            }
          }
        }
      }
      break;
    }
  }
  v41 = LANES128(a1[24]).n128_u64[1];
  v42 = (LANES128(a1[25]).n128_u64[0] - v41) >> 2;
  while ((int)v42 >= 1) {
    LODWORD(v42) = v42 - 1;
    if (*(float*)(v41 + 4LL * (unsigned int)v42) <= a3) {
      if ((v42 & 0x80000000) == 0) {
        v43 =
            (__int64*)(LANES128(a1[23]).n128_u64[0] + 16 * (v42 & 0x7FFFFFFF));
        v44 = v43[1];
        if (v44 != 0) {
          v45 = std___1___shared_weak_count_lock(v44);
          if (v45 != 0) {
            v46 = *v43;
            v47 = v45;
            if (v46 != 0) {
              v48 = *(_OWORD*)(v46 + 64);
              v49 = 1.0;
              v50 = *(float*)(v46 + 8);
              v163 = v46 + 64;
              v164 = v50;
              v165 = a3;
              if ((unsigned int)(int)*(float*)&v48 <= 0xFFFFFFFD) {
                v51 = a3 - v50;
                v49 = 0.0;
                if (v51 > 0.0) {
                  v49 = 1.0;
                  if (v51 < *((float*)&v48 + 1)) {
                    v52 = (int)*(float*)&v48 - 1;
                    if (v52 > 2) {
                      v53 = 0;
                    }
                    else {
                      v53 = GameData_1c0b528[v52];
                    }
                    LODWORD(v48) = 1.0;
                    v49 = GameRoutine_618640(v53, 0.0, *(double*)&v48);
                  }
                }
              }
              *(float*)&v166 = v49;
              PostEffectActor_17fb700(&v163, v46 + 88);
              LANES128(a1[5]).n128_u32[1] = v54;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
              std___1___shared_weak_count___release_weak(v47);
            }
          }
        }
      }
      break;
    }
  }
  v55 = LANES128(a1[27]).n128_u64[1];
  v56 = (LANES128(a1[28]).n128_u64[0] - v55) >> 2;
  while ((int)v56 >= 1) {
    LODWORD(v56) = v56 - 1;
    if (*(float*)(v55 + 4LL * (unsigned int)v56) <= a3) {
      if ((v56 & 0x80000000) == 0) {
        v57 =
            (__int64*)(LANES128(a1[26]).n128_u64[0] + 16 * (v56 & 0x7FFFFFFF));
        v58 = v57[1];
        if (v58 != 0) {
          v59 = std___1___shared_weak_count_lock(v58);
          if (v59 != 0) {
            v60 = *v57;
            v61 = v59;
            if (v60 != 0) {
              v62 = *(_OWORD*)(v60 + 64);
              v63 = 1.0;
              v64 = *(float*)(v60 + 8);
              v163 = v60 + 64;
              v164 = v64;
              v165 = a3;
              if ((unsigned int)(int)*(float*)&v62 <= 0xFFFFFFFD) {
                v65 = a3 - v64;
                v63 = 0.0;
                if (v65 > 0.0) {
                  v63 = 1.0;
                  if (v65 < *((float*)&v62 + 1)) {
                    v66 = (int)*(float*)&v62 - 1;
                    if (v66 > 2) {
                      v67 = 0;
                    }
                    else {
                      v67 = GameData_1c0b528[v66];
                    }
                    LODWORD(v62) = 1.0;
                    v63 = GameRoutine_618640(v67, 0.0, *(double*)&v62);
                  }
                }
              }
              *(float*)&v166 = v63;
              PostEffectActor_17fb700(&v163, v60 + 120);
              LANES128(a1[6]).n128_u32[0] = v68;
              PostEffectActor_17fb700(&v163, v60 + 152);
              LANES128(a1[6]).n128_u32[1] = v69;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
              std___1___shared_weak_count___release_weak(v61);
            }
          }
        }
      }
      break;
    }
  }
  v70 = LANES128(a1[30]).n128_u64[1];
  v71 = (LANES128(a1[31]).n128_u64[0] - v70) >> 2;
  while ((int)v71 >= 1) {
    LODWORD(v71) = v71 - 1;
    if (*(float*)(v70 + 4LL * (unsigned int)v71) <= a3) {
      if ((v71 & 0x80000000) == 0) {
        v72 =
            (__int64*)(LANES128(a1[29]).n128_u64[0] + 16 * (v71 & 0x7FFFFFFF));
        v73 = v72[1];
        if (v73 != 0) {
          v74 = std___1___shared_weak_count_lock(v73);
          if (v74 != 0) {
            v75 = *v72;
            v76 = v74;
            if (v75 != 0) {
              v77 = *(_OWORD*)(v75 + 64);
              v78 = 1.0;
              v79 = *(float*)(v75 + 8);
              v163 = v75 + 64;
              v164 = v79;
              v165 = a3;
              if ((unsigned int)(int)*(float*)&v77 <= 0xFFFFFFFD) {
                v80 = a3 - v79;
                v78 = 0.0;
                if (v80 > 0.0) {
                  v78 = 1.0;
                  if (v80 < *((float*)&v77 + 1)) {
                    v81 = (int)*(float*)&v77 - 1;
                    if (v81 > 2) {
                      v82 = 0;
                    }
                    else {
                      v82 = GameData_1c0b528[v81];
                    }
                    LODWORD(v77) = 1.0;
                    v78 = GameRoutine_618640(v82, 0.0, *(double*)&v77);
                  }
                }
              }
              *(float*)&v166 = v78;
              v162 = COERCE_UNSIGNED_INT128(
                  PostEffectActor_17fb700(&v163, v75 + 184));
              v83 = PostEffectActor_17fb700(&v163, v75 + 216);
              LANES128(a1[7]).n128_u64[0] = __PAIR64__(LODWORD(v83), v162);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
              std___1___shared_weak_count___release_weak(v76);
            }
          }
        }
      }
      break;
    }
  }
  v84 = LANES128(a1[33]).n128_u64[1];
  v85 = (LANES128(a1[34]).n128_u64[0] - v84) >> 2;
  while ((int)v85 >= 1) {
    LODWORD(v85) = v85 - 1;
    if (*(float*)(v84 + 4LL * (unsigned int)v85) <= a3) {
      if ((v85 & 0x80000000) == 0) {
        v86 =
            (__int64*)(LANES128(a1[32]).n128_u64[0] + 16 * (v85 & 0x7FFFFFFF));
        v87 = v86[1];
        if (v87 != 0) {
          v88 = std___1___shared_weak_count_lock(v87);
          if (v88 != 0) {
            v89 = *v86;
            v90 = v88;
            if (v89 != 0) {
              v91 = *(_OWORD*)(v89 + 64);
              v92 = 1.0;
              v93 = *(float*)(v89 + 8);
              v163 = v89 + 64;
              v164 = v93;
              v165 = a3;
              if ((unsigned int)(int)*(float*)&v91 <= 0xFFFFFFFD) {
                v94 = a3 - v93;
                v92 = 0.0;
                if (v94 > 0.0) {
                  v92 = 1.0;
                  if (v94 < *((float*)&v91 + 1)) {
                    v95 = (int)*(float*)&v91 - 1;
                    if (v95 > 2) {
                      v96 = 0;
                    }
                    else {
                      v96 = GameData_1c0b528[v95];
                    }
                    LODWORD(v91) = 1.0;
                    v92 = GameRoutine_618640(v96, 0.0, *(double*)&v91);
                  }
                }
              }
              *(float*)&v166 = v92;
              v97 = PostEffectActor_17fb700(&v163, v89 + 248);
              LANES128(a1[6]).n128_u32[2] = LODWORD(v97);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
              std___1___shared_weak_count___release_weak(v90);
            }
          }
        }
      }
      break;
    }
  }
  v98 = LANES128(a1[36]).n128_u64[1];
  v99 = (LANES128(a1[37]).n128_u64[0] - v98) >> 2;
  while ((int)v99 >= 1) {
    LODWORD(v99) = v99 - 1;
    if (*(float*)(v98 + 4LL * (unsigned int)v99) <= a3) {
      if ((v99 & 0x80000000) == 0) {
        v100 =
            (__int64*)(LANES128(a1[35]).n128_u64[0] + 16 * (v99 & 0x7FFFFFFF));
        v101 = v100[1];
        if (v101 != 0) {
          v102 = std___1___shared_weak_count_lock(v101);
          if (v102 != 0) {
            v103 = *v100;
            v104 = v102;
            if (v103 != 0) {
              v105 = *(_OWORD*)(v103 + 64);
              v106 = 1.0;
              v107 = *(float*)(v103 + 8);
              v163 = v103 + 64;
              v164 = v107;
              v165 = a3;
              if ((unsigned int)(int)*(float*)&v105 <= 0xFFFFFFFD) {
                v108 = a3 - v107;
                v106 = 0.0;
                if (v108 > 0.0) {
                  v106 = 1.0;
                  if (v108 < *((float*)&v105 + 1)) {
                    v109 = (int)*(float*)&v105 - 1;
                    if (v109 > 2) {
                      v110 = 0;
                    }
                    else {
                      v110 = GameData_1c0b528[v109];
                    }
                    LODWORD(v105) = 1.0;
                    v106 = GameRoutine_618640(v110, 0.0, *(double*)&v105);
                  }
                }
              }
              *(float*)&v166 = v106;
              v111 = PostEffectActor_17fb700(&v163, v103 + 280);
              LANES128(a1[6]).n128_u32[3] = LODWORD(v111);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
              std___1___shared_weak_count___release_weak(v104);
            }
          }
        }
      }
      break;
    }
  }
  v112 = LANES128(a1[42]).n128_u64[1];
  v113 = (LANES128(a1[43]).n128_u64[0] - v112) >> 2;
  while ((int)v113 >= 1) {
    LODWORD(v113) = v113 - 1;
    if (*(float*)(v112 + 4LL * (unsigned int)v113) <= a3) {
      if ((v113 & 0x80000000) == 0) {
        v114 =
            (__int64*)(LANES128(a1[41]).n128_u64[0] + 16 * (v113 & 0x7FFFFFFF));
        v115 = v114[1];
        if (v115 != 0) {
          v116 = std___1___shared_weak_count_lock(v115);
          if (v116 != 0) {
            v117 = *v114;
            if (*v114 != 0) {
              LANES128(a1[4]).n128_u64[1] = *(_QWORD*)(v117 + 88);
              LANES128(a1[4]).n128_u64[0] = *(_QWORD*)(v117 + 80);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v116 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v118 = v116;
              (*(void (**)(__int64))(*(_QWORD*)v116 + 16LL))(v116);
              std___1___shared_weak_count___release_weak(v118);
            }
          }
        }
      }
      break;
    }
  }
  v119 = LANES128(a1[45]).n128_u64[1];
  v120 = (LANES128(a1[46]).n128_u64[0] - v119) >> 2;
  while ((int)v120 >= 1) {
    LODWORD(v120) = v120 - 1;
    if (*(float*)(v119 + 4LL * (unsigned int)v120) <= a3) {
      if ((v120 & 0x80000000) == 0) {
        v121 =
            (__int64*)(LANES128(a1[44]).n128_u64[0] + 16 * (v120 & 0x7FFFFFFF));
        v122 = v121[1];
        if (v122 != 0) {
          v123 = std___1___shared_weak_count_lock(v122);
          if (v123 != 0) {
            v124 = *v121;
            v125 = v123;
            if (v124 != 0) {
              v126 = *(_OWORD*)(v124 + 64);
              v127 = 1.0;
              v128 = *(float*)(v124 + 8);
              v163 = v124 + 64;
              v164 = v128;
              v165 = a3;
              if ((unsigned int)(int)*(float*)&v126 <= 0xFFFFFFFD) {
                v129 = a3 - v128;
                v127 = 0.0;
                if (v129 > 0.0) {
                  v127 = 1.0;
                  if (v129 < *((float*)&v126 + 1)) {
                    v130 = (int)*(float*)&v126 - 1;
                    if (v130 > 2) {
                      v131 = 0;
                    }
                    else {
                      v131 = GameData_1c0b528[v130];
                    }
                    LODWORD(v126) = 1.0;
                    v127 = GameRoutine_618640(v131, 0.0, *(double*)&v126);
                  }
                }
              }
              *(float*)&v166 = v127;
              v132 = PostEffectActor_17fb700(&v163, v124 + 104);
              LANES128(a1[5]).n128_u32[0] = LODWORD(v132);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v125 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v125 + 16LL))(v125);
              std___1___shared_weak_count___release_weak(v125);
            }
          }
        }
      }
      break;
    }
  }
  v133 = LANES128(a1[48]).n128_u64[1];
  v134 = (LANES128(a1[49]).n128_u64[0] - v133) >> 2;
  while ((int)v134 >= 1) {
    LODWORD(v134) = v134 - 1;
    if (*(float*)(v133 + 4LL * (unsigned int)v134) <= a3) {
      if ((v134 & 0x80000000) == 0) {
        v135 =
            (__int64*)(LANES128(a1[47]).n128_u64[0] + 16 * (v134 & 0x7FFFFFFF));
        v136 = v135[1];
        if (v136 != 0) {
          v137 = std___1___shared_weak_count_lock(v136);
          if (v137 != 0) {
            v138 = *v135;
            v139 = v137;
            if (v138 != 0) {
              v140 = *(_OWORD*)(v138 + 64);
              v141 = 1.0;
              v142 = *(float*)(v138 + 8);
              v163 = v138 + 64;
              v164 = v142;
              v165 = a3;
              if ((unsigned int)(int)*(float*)&v140 <= 0xFFFFFFFD) {
                v143 = a3 - v142;
                v141 = 0.0;
                if (v143 > 0.0) {
                  v141 = 1.0;
                  if (v143 < *((float*)&v140 + 1)) {
                    v144 = (int)*(float*)&v140 - 1;
                    if (v144 > 2) {
                      v145 = 0;
                    }
                    else {
                      v145 = GameData_1c0b528[v144];
                    }
                    LODWORD(v140) = 1.0;
                    v141 = GameRoutine_618640(v145, 0.0, *(double*)&v140);
                  }
                }
              }
              *(float*)&v166 = v141;
              v146 = PostEffectActor_17fb700(&v163, v138 + 136);
              LANES128(a1[5]).n128_u32[2] = LODWORD(v146);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v139 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v139 + 16LL))(v139);
              std___1___shared_weak_count___release_weak(v139);
            }
          }
        }
      }
      break;
    }
  }
LABEL_180:
  v147 = LANES128(a1[9]).n128_u64[0];
  if (v147 != 0) {
    v148 = std___1___shared_weak_count_lock(v147);
    if (v148 != 0) {
      v149 = LANES128(a1[8]).n128_u64[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(v148 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v150 = v148;
        (*(void (**)(__int64))(*(_QWORD*)v148 + 16LL))(v148);
        std___1___shared_weak_count___release_weak(v150);
      }
      if (v149 != 0) {
        GameRoutine_17fe060(&a1[2], &a1[8]);
      }
    }
  }
  v151 = LANES128(a1[11]).n128_u64[1];
  if (v151 != 0) {
    v152 = std___1___shared_weak_count_lock(v151);
    if (v152 != 0) {
      v153 = LANES128(a1[11]).n128_u64[0];
      if (atomic_fetch_add((atomic_ullong* volatile)(v152 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v154 = v152;
        (*(void (**)(__int64))(*(_QWORD*)v152 + 16LL))(v152);
        std___1___shared_weak_count___release_weak(v154);
      }
      if (v153 != 0) {
        game_cutscene_17fe320((__int64)&a1[2], &LANES128(a1[10]).n128_u64[1]);
      }
    }
  }
  result = LANES128(a1[14]).n128_i64[0];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v156 = LANES128(a1[13]).n128_u64[1];
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v156 == 0) {
          return result;
        }
        return GameRoutine_17fe700(&a1[2], &a1[13]);
      }
      v157 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v157);
      if (v156 != 0) {
        return GameRoutine_17fe700(&a1[2], &a1[13]);
      }
    }
  }
  return result;
}

__int64 LightActor_Unknown5(__int64 result, float a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float32x4_t* v3;
  unsigned __int64 v4;
  float32x2_t** v5;
  __int64 v6;
  __int64 v7;
  float32x2_t* v8;
  float32x2_t* v9;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  char v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  struct {
    float32x4_t v29;
    __int64 v30;
    __int64 v31;
    unsigned __int64 v32;
    unsigned __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v29_;
  float32x4_t v42;
  float32x2_t v43[2];

  v2 = *(_QWORD*)(result + 296);
  v3 = (float32x4_t*)result;
  v4 = (unsigned __int64)(*(_QWORD*)(result + 304) - v2) >> 2;
  while ((int)v4 >= 1) {
    LODWORD(v4) = v4 - 1;
    if (*(float*)(v2 + 4LL * (unsigned int)v4) <= a2) {
      if ((v4 & 0x80000000) == 0) {
        v5 = *(float32x2_t***)(*(_QWORD*)(result + 248) +
                               24LL * *(_QWORD*)(*(_QWORD*)(result + 272) +
                                                 8 * (v4 & 0x7FFFFFFF)) +
                               16);
        if (v5 != nullptr) {
          v6 = (__int64)v5[1];
          if (v6 != 0 &&
              (v7 = std___1___shared_weak_count_lock_alt1(v6)) != 0) {
            v8 = *v5;
            v9 = v5[2];
            if (*v5 == nullptr || v9 == nullptr) {
              v29_.v40 = 0;
              v29_.v41 = 0;
              v29_.v38 = 0;
              v29_.v39 = 0;
              v29_.v36 = 0;
              v29_.v37 = 0;
              v29_.v34 = 0;
              v29_.v35 = 0;
              v29_.v32 = 0;
              v29_.v33 = 0;
              v29_.v30 = 0;
              v29_.v31 = 0;
              v29_.v29 = (__typeof__(v29_.v29)){0};
            }
            else {
              v11 = LANES64(v8[13]).n64_u64[0];
              v12 = LANES64(v8[6]).n64_u32[0];
              v13 = v7;
              v14 = LANES64(v8[11]).n64_u32[0];
              v15 = LANES64(v8[16]).n64_i8[0];
              v43[0] = v8[12];
              LANES64(v43[1]).n64_u64[0] = v11;
              v16 = LANES64(v8[15]).n64_u64[0];
              LANES128(v42).n128_u64[0] = LANES64(v8[14]).n64_u64[0];
              LANES128(v42).n128_u64[1] = v16;
              GameRoutine_17fd670((void*)(&v29_.v29), v9, v12, v14, v43, &v42,
                                  v15);
              v7 = v13;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v17 = v7;
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              std___1___shared_weak_count___release_weak_alt1(v17);
            }
          }
          else {
            v29_.v40 = 0;
            v29_.v41 = 0;
            v29_.v38 = 0;
            v29_.v39 = 0;
            v29_.v36 = 0;
            v29_.v37 = 0;
            v29_.v34 = 0;
            v29_.v35 = 0;
            v29_.v32 = 0;
            v29_.v33 = 0;
            v29_.v30 = 0;
            v29_.v31 = 0;
            v29_.v29 = (__typeof__(v29_.v29)){0};
          }
          if ((unsigned __int8)v29_.v34 == 1) {
            v18 = v29_.v33;
            LANES128(v3[2]).n128_u64[0] = v29_.v32;
            LANES128(v3[2]).n128_u64[1] = v18;
          }
          if ((unsigned __int8)v29_.v30 == 1) {
            v3[3] = v29_.v29;
          }
          v19 = LANES128(v3[9]).n128_i64[0];
          if (v19 != 0) {
            v20 = std___1___shared_weak_count_lock_alt1(v19);
            if (v20 != 0) {
              v21 = LANES128(v3[8]).n128_u64[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v22 = v20;
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                std___1___shared_weak_count___release_weak_alt1(v22);
              }
              if (v21 != 0) {
                GameRoutine_17fe060_alt1(
                    (__int64)&v3[2], (float32x4_t*)LANES128(v3[8]).n128_u64);
              }
            }
          }
          v23 = LANES128(v3[11]).n128_i64[1];
          if (v23 != 0) {
            v24 = std___1___shared_weak_count_lock_alt1(v23);
            if (v24 != 0) {
              v25 = LANES128(v3[11]).n128_u64[0];
              if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v26 = v24;
                (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
                std___1___shared_weak_count___release_weak_alt1(v26);
              }
              if (v25 != 0) {
                game_cutscene_17fe320((__int64)&v3[2],
                                      &LANES128(v3[10]).n128_u64[1]);
              }
            }
          }
          result = LANES128(v3[14]).n128_i64[0];
          if (result != 0) {
            result = std___1___shared_weak_count_lock_alt1(result);
            if (result != 0) {
              v27 = LANES128(v3[13]).n128_u64[1];
              if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v28 = result;
                (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
                result = std___1___shared_weak_count___release_weak_alt1(v28);
              }
              if (v27 != 0) {
                return GameRoutine_17fe700_alt1(
                    (__int64)&v3[2], (float32x4_t*)LANES128(v3[13]).n128_u64);
              }
            }
          }
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
