#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19119d0(__int64 result);
__int64 GameRoutine_1912fc0(void);
__int64 GameRoutine_19e10(_QWORD);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_606500(_QWORD);
__int64 cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2110190[])();
extern __int64 (*GameData_21101c8[])();
extern __int64 (*cspine_SpineModel_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineModel_Destructor(__int64 a1);
__int64 SpineModel_1912d60(_QWORD* a1);
__int64 SpineModel_1912dc0(_QWORD* a1);

__int64 SpineModel_Destructor(__int64 a1)
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
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
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
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
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
  __int64 result;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;

  *(_QWORD*)a1 = cspine_SpineModel_vtable;
  v2 = GameRoutine_1912fc0();
  v3 = *(_QWORD*)(a1 + 1416);
  *(_QWORD*)(a1 + 1400) = 0;
  *(_QWORD*)(a1 + 1392) = GameData_21101c8;
  if (v3 != 0) {
    v4 = GameRoutine_19e10(v2);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v4 + 40LL))(
        v4, v3, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  v5 = spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 1392);
  v6 = *(_QWORD*)(a1 + 1384);
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1360) = GameData_2110190;
  if (v6 != 0) {
    v7 = GameRoutine_19e10(v5);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v7 + 40LL))(
        v7, v6, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 1360);
  v8 = *(_QWORD*)(a1 + 1336);
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)(a1 + 1344);
    if (v8 == v10) {
      goto LABEL_16;
    }
    v11 = *(_QWORD*)(a1 + 1344);
    do {
      v12 = *(_BYTE*)(v11 - 64);
      v11 -= 64;
      if ((v12 & 1) != 0 && *(_QWORD*)(v10 - 48) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13);
      }
      v10 = v11;
    } while (v11 != v8);
    v14 = *(_QWORD*)(a1 + 1336);
    *(_QWORD*)(a1 + 1344) = v8;
    if (v14 != 0) {
    LABEL_16:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v15);
    }
  }
  v16 = *(_QWORD*)(a1 + 1328);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = *(_QWORD**)(a1 + 1296);
  if (v17 != nullptr) {
    do {
      v19 = (_QWORD*)*v17;
      v20 = v17[5];
      v17[5] = 0;
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
      v21 = v17[4];
      v17[4] = 0;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18);
      v17 = v19;
    } while (v19 != nullptr);
  }
  v22 = *(_QWORD*)(a1 + 1280);
  *(_QWORD*)(a1 + 1280) = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v23);
  }
  v24 = *(_QWORD*)(a1 + 1032);
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = *(_QWORD*)(a1 + 1000);
  if (v25 != 0) {
    v26 = *(_QWORD*)(a1 + 1008);
    if (v25 == v26) {
      goto LABEL_47;
    }
    do {
      v27 = *(_QWORD*)(v26 - 8);
      if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak(v27);
      }
      v26 -= 16;
    } while (v26 != v25);
    v28 = *(_QWORD*)(a1 + 1000);
    *(_QWORD*)(a1 + 1008) = v25;
    if (v28 != 0) {
    LABEL_47:
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v29);
    }
  }
  v30 = *(_QWORD*)(a1 + 976);
  if (v30 != 0) {
    v31 = *(_QWORD*)(a1 + 984);
    if (v30 == v31) {
      goto LABEL_58;
    }
    do {
      v32 = *(_QWORD*)(v31 - 8);
      if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak(v32);
      }
      v31 -= 16;
    } while (v31 != v30);
    v33 = *(_QWORD*)(a1 + 976);
    *(_QWORD*)(a1 + 984) = v30;
    if (v33 != 0) {
    LABEL_58:
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v34);
    }
  }
  v35 = *(_QWORD*)(a1 + 952);
  if (v35 != 0) {
    v36 = *(_QWORD*)(a1 + 960);
    if (v35 == v36) {
      goto LABEL_69;
    }
    do {
      v37 = *(_QWORD*)(v36 - 8);
      if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak(v37);
      }
      v36 -= 16;
    } while (v36 != v35);
    v38 = *(_QWORD*)(a1 + 952);
    *(_QWORD*)(a1 + 960) = v35;
    if (v38 != 0) {
    LABEL_69:
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v39);
    }
  }
  v40 = *(_QWORD*)(a1 + 832);
  *(_QWORD*)(a1 + 832) = 0;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
  }
  v41 = *(_QWORD*)(a1 + 824);
  *(_QWORD*)(a1 + 824) = 0;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  v42 = *(_QWORD*)(a1 + 816);
  *(_QWORD*)(a1 + 816) = 0;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  v43 = *(_QWORD*)(a1 + 808);
  *(_QWORD*)(a1 + 808) = 0;
  if (v43 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 8LL))(v43);
  }
  GameRoutine_604050(a1 + 680);
  GameRoutine_604050(a1 + 552);
  GameRoutine_604050(a1 + 424);
  v44 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 384) = 0;
  if (v44 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 8LL))(v44);
  }
  v45 = *(_QWORD*)(a1 + 376);
  *(_QWORD*)(a1 + 376) = 0;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  v46 = *(_QWORD*)(a1 + 336);
  *(_QWORD*)(a1 + 336) = 0;
  if (v46 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
  }
  v47 = *(_QWORD*)(a1 + 328);
  *(_QWORD*)(a1 + 328) = 0;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
  }
  v48 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 288) = 0;
  if (v48 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 8LL))(v48);
  }
  v49 = *(_QWORD*)(a1 + 280);
  *(_QWORD*)(a1 + 280) = 0;
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
  }
  v50 = *(_QWORD*)(a1 + 272);
  *(_QWORD*)(a1 + 272) = 0;
  if (v50 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50);
  }
  v51 = *(_QWORD*)(a1 + 264);
  *(_QWORD*)(a1 + 264) = 0;
  if (v51 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51);
  }
  v52 = *(_QWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 256) = 0;
  if (v52 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 8LL))(v52);
  }
  v53 = *(_QWORD*)(a1 + 232);
  if (v53 != 0) {
    v54 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 240) = v53;
    v55 = 128;
    if (*(_QWORD*)(v54 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(v54 + v55);
  }
  v56 = *(_QWORD**)(a1 + 208);
  if (v56 != nullptr) {
    v57 = *(_QWORD**)(a1 + 216);
    if (v56 == v57) {
      goto LABEL_111;
    }
    do {
      v58 = *(v57 - 1);
      *(v57 - 1) = 0;
      if (v58 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v58 + 8LL))(v58);
      }
      v60 = *(v57 - 2);
      v57 -= 2;
      v59 = v60;
      *v57 = 0;
      if (v60 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
      }
    } while (v57 != v56);
    v61 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 216) = v56;
    if (v61 != 0) {
    LABEL_111:
      v62 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v62 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v62);
    }
  }
  v63 = *(_QWORD*)(a1 + 184);
  if (v63 != 0) {
    v64 = *(_QWORD*)v9;
    *(_QWORD*)(a1 + 192) = v63;
    v65 = 128;
    if (*(_QWORD*)(v64 + 200) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(v64 + v65);
  }
  v66 = *(_QWORD**)(a1 + 160);
  if (v66 != nullptr) {
    v67 = *(_QWORD**)(a1 + 168);
    if (v66 == v67) {
      goto LABEL_127;
    }
    do {
      v68 = *(v67 - 1);
      *(v67 - 1) = 0;
      if (v68 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v68 + 8LL))(v68);
      }
      v70 = *(v67 - 2);
      v67 -= 2;
      v69 = v70;
      *v67 = 0;
      if (v70 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 8LL))(v69);
      }
    } while (v67 != v66);
    v71 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = v66;
    if (v71 != 0) {
    LABEL_127:
      v72 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v72);
    }
  }
  v73 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 152) = 0;
  if (v73 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 8LL))(v73);
  }
  v74 = *(_QWORD**)(a1 + 128);
  if (v74 != nullptr) {
    v75 = *(_QWORD**)(a1 + 136);
    if (v74 == v75) {
      goto LABEL_148;
    }
    do {
      v78 = *--v75;
      v77 = v78;
      *v75 = 0;
      if (v78 != 0) {
        if ((*(_BYTE*)(v77 + 96) & 1) != 0 && *(_QWORD*)(v77 + 112) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v79 = 128;
          }
          else {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v79);
        }
        GameRoutine_606500(v77 + 16);
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v76 = 128;
        }
        else {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v76);
      }
    } while (v75 != v74);
    v80 = *(_QWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 136) = v74;
    if (v80 != 0) {
    LABEL_148:
      v81 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v81);
    }
  }
  v82 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = 0;
  if (v82 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v82 + 8LL))(v82);
  }
  v83 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = 0;
  if (v83 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v83 + 8LL))(v83);
  }
  v84 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = 0;
  if (v84 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v84 + 8LL))(v84);
  }
  v85 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v85 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v85 + 8LL))(v85);
  }
  result = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 88) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v87 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v87);
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 && *(_QWORD*)(a1 + 56) != 0) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v88 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v88);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v89 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v89 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v89);
  }
  v90 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 8) = 0;
  if (v90 != 0) {
    GameRoutine_19119d0(v90);
    cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(v90 + 8);
    v91 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v91 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v91);
  }
  return result;
}

__int64 SpineModel_1912d60(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_21101c8;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

__int64 SpineModel_1912dc0(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_2110190;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

#pragma GCC visibility pop
