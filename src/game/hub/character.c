#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cedd40(_QWORD);
__int64 GameRoutine_cefbb0(_QWORD, _QWORD);
__int64 GameSubquestData_125b8e0(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cb490(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd3de0[28])();
extern __int64 (*GameData_1fd42e0[])();
extern __int64 GameData_21c9718;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 Character_ca9280(__int64 result);
unsigned __int8* Character_cb01a0(unsigned __int8* result, unsigned __int8* a2,
                                  __int64 a3, __int64 a4, __int64 a5);
__int64 game_hub_Character_RebuildAppearance(__int64 a1);
bool game_hub_Character_BuildSubquestCommand_lambda1_Invoke(__int64 a1);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
struct PseudoSret GameRoutine_e99570(_QWORD);
bool game_hub_Character_BuildSideStoryCommand_lambda1_Invoke(__int64 a1,
                                                             long double a2);

__int64 Character_ca9280(__int64 result)
{
  __int64 v1;
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
  char v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  char v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  char v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  char v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  char v110;
  char v111;
  char v112;

  v1 = result;
  if ((*(_BYTE*)(result + 824) & 1) != 0 && *(_QWORD*)(result + 840) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  if (*(_BYTE*)(v1 + 808) == 1) {
    v3 = *(_QWORD*)(v1 + 784);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v1 + 792);
      if (v3 == v4) {
        goto LABEL_14;
      }
      do {
        v5 = *(unsigned int*)(v4 - 8);
        v6 = v4 - 32;
        if ((_DWORD)v5 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v5])(&v110,
                                                                       v4 - 32);
        }
        *(_DWORD*)(v4 - 8) = -1;
        v4 -= 32;
      } while (v6 != v3);
      v7 = *(_QWORD*)(v1 + 784);
      *(_QWORD*)(v1 + 792) = v3;
      if (v7 != 0) {
      LABEL_14:
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
      }
    }
    if ((*(_BYTE*)(v1 + 760) & 1) != 0 && *(_QWORD*)(v1 + 776) != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
    }
  }
  if (*(_BYTE*)(v1 + 736) == 1) {
    v10 = *(_QWORD*)(v1 + 712);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v1 + 720);
      if (v10 == v11) {
        goto LABEL_30;
      }
      do {
        v12 = *(unsigned int*)(v11 - 8);
        v13 = v11 - 32;
        if ((_DWORD)v12 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v12])(
              &v111, v11 - 32);
        }
        *(_DWORD*)(v11 - 8) = -1;
        v11 -= 32;
      } while (v13 != v10);
      v14 = *(_QWORD*)(v1 + 712);
      *(_QWORD*)(v1 + 720) = v10;
      if (v14 != 0) {
      LABEL_30:
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
      }
    }
    if ((*(_BYTE*)(v1 + 688) & 1) != 0 && *(_QWORD*)(v1 + 704) != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
    }
  }
  if (*(_BYTE*)(v1 + 664) == 1) {
    v17 = *(_QWORD*)(v1 + 640);
    if (v17 != 0) {
      v18 = *(_QWORD*)(v1 + 648);
      if (v17 == v18) {
        goto LABEL_46;
      }
      do {
        v19 = *(unsigned int*)(v18 - 8);
        v20 = v18 - 32;
        if ((_DWORD)v19 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd3de0[v19])(
              &v112, v18 - 32);
        }
        *(_DWORD*)(v18 - 8) = -1;
        v18 -= 32;
      } while (v20 != v17);
      v21 = *(_QWORD*)(v1 + 640);
      *(_QWORD*)(v1 + 648) = v17;
      if (v21 != 0) {
      LABEL_46:
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
      }
    }
    if ((*(_BYTE*)(v1 + 616) & 1) != 0 && *(_QWORD*)(v1 + 632) != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
    }
  }
  if ((*(_BYTE*)(v1 + 568) & 1) != 0 && *(_QWORD*)(v1 + 584) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  v25 = *(_QWORD*)(v1 + 560);
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = std___1___shared_weak_count___release_weak(v25);
  }
  v26 = *(_QWORD*)(v1 + 512);
  if (v26 != 0) {
    v27 = *(_QWORD*)(v1 + 520);
    if (v26 == v27) {
      goto LABEL_73;
    }
    v28 = *(_QWORD*)(v1 + 520);
    v29 = fw_memory_g_heap_manager_ptr;
    do {
      v30 = *(_BYTE*)(v28 - 24);
      v28 -= 24;
      if ((v30 & 1) != 0 && *(_QWORD*)(v27 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v29 + v31);
      }
      v27 = v28;
    } while (v28 != v26);
    v32 = *(_QWORD*)(v1 + 512);
    *(_QWORD*)(v1 + 520) = v26;
    if (v32 != 0) {
    LABEL_73:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
    }
  }
  if ((*(_BYTE*)(v1 + 488) & 1) != 0 && *(_QWORD*)(v1 + 504) != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
  }
  v35 = *(_QWORD*)(v1 + 464);
  if (v35 != 0) {
    v36 = *(_QWORD*)(v1 + 472);
    if (v35 == v36) {
      goto LABEL_92;
    }
    v37 = *(_QWORD*)(v1 + 472);
    v38 = fw_memory_g_heap_manager_ptr;
    do {
      v39 = *(_BYTE*)(v37 - 24);
      v37 -= 24;
      if ((v39 & 1) != 0 && *(_QWORD*)(v36 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v40);
      }
      v36 = v37;
    } while (v37 != v35);
    v41 = *(_QWORD*)(v1 + 464);
    *(_QWORD*)(v1 + 472) = v35;
    if (v41 != 0) {
    LABEL_92:
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v42 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
    }
  }
  if ((*(_BYTE*)(v1 + 440) & 1) != 0 && *(_QWORD*)(v1 + 456) != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
  }
  v44 = *(_QWORD*)(v1 + 416);
  if (v44 != 0) {
    v45 = *(_QWORD*)(v1 + 424);
    if (v44 == v45) {
      goto LABEL_111;
    }
    v46 = *(_QWORD*)(v1 + 424);
    v47 = fw_memory_g_heap_manager_ptr;
    do {
      v48 = *(_BYTE*)(v46 - 24);
      v46 -= 24;
      if ((v48 & 1) != 0 && *(_QWORD*)(v45 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v47 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v47 + v49);
      }
      v45 = v46;
    } while (v46 != v44);
    v50 = *(_QWORD*)(v1 + 416);
    *(_QWORD*)(v1 + 424) = v44;
    if (v50 != 0) {
    LABEL_111:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
    }
  }
  if ((*(_BYTE*)(v1 + 392) & 1) != 0 && *(_QWORD*)(v1 + 408) != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
  }
  v53 = *(_QWORD*)(v1 + 368);
  if (v53 != 0) {
    v54 = *(_QWORD*)(v1 + 376);
    if (v53 == v54) {
      goto LABEL_130;
    }
    v55 = *(_QWORD*)(v1 + 376);
    v56 = fw_memory_g_heap_manager_ptr;
    do {
      v57 = *(_BYTE*)(v55 - 24);
      v55 -= 24;
      if ((v57 & 1) != 0 && *(_QWORD*)(v54 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v56 + 200LL) != 0) {
          v58 = 128;
        }
        else {
          v58 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v56 + v58);
      }
      v54 = v55;
    } while (v55 != v53);
    v59 = *(_QWORD*)(v1 + 368);
    *(_QWORD*)(v1 + 376) = v53;
    if (v59 != 0) {
    LABEL_130:
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
    }
  }
  if ((*(_BYTE*)(v1 + 344) & 1) != 0 && *(_QWORD*)(v1 + 360) != 0) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
  }
  v62 = *(_QWORD*)(v1 + 320);
  if (v62 != 0) {
    v63 = *(_QWORD*)(v1 + 328);
    if (v62 == v63) {
      goto LABEL_149;
    }
    v64 = *(_QWORD*)(v1 + 328);
    v65 = fw_memory_g_heap_manager_ptr;
    do {
      v66 = *(_BYTE*)(v64 - 24);
      v64 -= 24;
      if ((v66 & 1) != 0 && *(_QWORD*)(v63 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v65 + 200LL) != 0) {
          v67 = 128;
        }
        else {
          v67 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v65 + v67);
      }
      v63 = v64;
    } while (v64 != v62);
    v68 = *(_QWORD*)(v1 + 320);
    *(_QWORD*)(v1 + 328) = v62;
    if (v68 != 0) {
    LABEL_149:
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v69 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
    }
  }
  if ((*(_BYTE*)(v1 + 296) & 1) != 0 && *(_QWORD*)(v1 + 312) != 0) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
  }
  v71 = *(_QWORD*)(v1 + 272);
  if (v71 != 0) {
    v72 = *(_QWORD*)(v1 + 280);
    if (v71 == v72) {
      goto LABEL_168;
    }
    v73 = *(_QWORD*)(v1 + 280);
    v74 = fw_memory_g_heap_manager_ptr;
    do {
      v75 = *(_BYTE*)(v73 - 24);
      v73 -= 24;
      if ((v75 & 1) != 0 && *(_QWORD*)(v72 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v74 + 200LL) != 0) {
          v76 = 128;
        }
        else {
          v76 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v74 + v76);
      }
      v72 = v73;
    } while (v73 != v71);
    v77 = *(_QWORD*)(v1 + 272);
    *(_QWORD*)(v1 + 280) = v71;
    if (v77 != 0) {
    LABEL_168:
      v78 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v78 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v78);
    }
  }
  if ((*(_BYTE*)(v1 + 248) & 1) != 0 && *(_QWORD*)(v1 + 264) != 0) {
    v79 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v79 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v79);
  }
  v80 = *(_QWORD*)(v1 + 224);
  if (v80 != 0) {
    v81 = *(_QWORD*)(v1 + 232);
    if (v80 == v81) {
      goto LABEL_187;
    }
    v82 = *(_QWORD*)(v1 + 232);
    v83 = fw_memory_g_heap_manager_ptr;
    do {
      v84 = *(_BYTE*)(v82 - 24);
      v82 -= 24;
      if ((v84 & 1) != 0 && *(_QWORD*)(v81 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v83 + 200LL) != 0) {
          v85 = 128;
        }
        else {
          v85 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v83 + v85);
      }
      v81 = v82;
    } while (v82 != v80);
    v86 = *(_QWORD*)(v1 + 224);
    *(_QWORD*)(v1 + 232) = v80;
    if (v86 != 0) {
    LABEL_187:
      v87 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v87 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
    }
  }
  if ((*(_BYTE*)(v1 + 200) & 1) != 0 && *(_QWORD*)(v1 + 216) != 0) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v88 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v88);
  }
  v89 = *(_QWORD*)(v1 + 160);
  if (v89 != 0) {
    v90 = *(_QWORD*)(v1 + 168);
    if (v89 == v90) {
      goto LABEL_206;
    }
    v91 = *(_QWORD*)(v1 + 168);
    v92 = fw_memory_g_heap_manager_ptr;
    do {
      v93 = *(_BYTE*)(v91 - 24);
      v91 -= 24;
      if ((v93 & 1) != 0 && *(_QWORD*)(v90 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v92 + 200LL) != 0) {
          v94 = 128;
        }
        else {
          v94 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v92 + v94);
      }
      v90 = v91;
    } while (v91 != v89);
    v95 = *(_QWORD*)(v1 + 160);
    *(_QWORD*)(v1 + 168) = v89;
    if (v95 != 0) {
    LABEL_206:
      v96 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v96 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v96);
    }
  }
  v97 = *(_QWORD*)(v1 + 136);
  if (v97 != 0) {
    v98 = *(_QWORD*)(v1 + 144);
    if (v97 == v98) {
      goto LABEL_220;
    }
    v99 = *(_QWORD*)(v1 + 144);
    v100 = fw_memory_g_heap_manager_ptr;
    do {
      v101 = *(_BYTE*)(v99 - 24);
      v99 -= 24;
      if ((v101 & 1) != 0 && *(_QWORD*)(v98 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v100 + 200LL) != 0) {
          v102 = 128;
        }
        else {
          v102 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v100 + v102);
      }
      v98 = v99;
    } while (v99 != v97);
    v103 = *(_QWORD*)(v1 + 136);
    *(_QWORD*)(v1 + 144) = v97;
    if (v103 != 0) {
    LABEL_220:
      v104 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v104 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v104);
    }
  }
  if ((*(_BYTE*)(v1 + 112) & 1) != 0 && *(_QWORD*)(v1 + 128) != 0) {
    v105 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v105 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v105);
  }
  if ((*(_BYTE*)(v1 + 88) & 1) != 0 && *(_QWORD*)(v1 + 104) != 0) {
    v106 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v106 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v106);
  }
  if ((*(_BYTE*)(v1 + 64) & 1) != 0 && *(_QWORD*)(v1 + 80) != 0) {
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v107 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v107);
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0 && *(_QWORD*)(v1 + 40) != 0) {
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v108 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v108);
  }
  if ((*(_BYTE*)v1 & 1) != 0 && *(_QWORD*)(v1 + 16) != 0) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v109 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v109);
  }
  return result;
}

unsigned __int8* Character_cb01a0(unsigned __int8* result, unsigned __int8* a2,
                                  __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8* v7;
  unsigned __int64 v8;
  signed __int64 v9;
  __int64 v12;
  unsigned __int8* v13;
  unsigned int v14;
  unsigned __int8* v15;
  unsigned __int64 v16;
  bool v17;

  v7 = result;
  if (a3 == 0) {
    while (1) {
      GameRoutine_1a0a8e0(v7, 0, 0, a4, a5);
    }
  }
  v8 = *result;
  v9 = *((_QWORD*)result + 1);
  if ((v8 & 1) == 0) {
    v9 = v8 >> 1;
  }
  if (v9 >= a3) {
    if ((v8 & 1) != 0) {
      v12 = *((_QWORD*)result + 2);
    }
    else {
      v12 = (__int64)(result + 1);
    }
    v13 = (unsigned __int8*)(v12 + v9);
  LABEL_11:
    v14 = *a2;
    result = (unsigned __int8*)v12;
    do {
      result = (unsigned __int8*)memchr(result, v14, v9 - a3 + 1);
      if (result == nullptr) {
        break;
      }
      v15 = result;
      result = (unsigned __int8*)memcmp(result, a2, a3);
      if ((_DWORD)result == 0) {
        if (v15 != v13 && &v15[-v12] != (unsigned __int8*)-1LL) {
          result =
              (unsigned __int8*)GameRoutine_1a0a8e0(v7, &v15[-v12], a3, a4, a5);
          v16 = *v7;
          v17 = (v16 & 1) == 0;
          v9 = v16 >> 1;
          v12 = v17 ? (__int64)(v7 + 1) : *((_QWORD*)v7 + 2);
          if (!v17) {
            v9 = *((_QWORD*)v7 + 1);
          }
          v13 = (unsigned __int8*)(v12 + v9);
          if (v9 >= a3) {
            goto LABEL_11;
          }
        }
        return result;
      }
      result = v15 + 1;
      v9 = v13 - (v15 + 1);
    } while (v9 >= a3);
  }
  return result;
}

__int64 game_hub_Character_RebuildAppearance(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;

  if ((*(_BYTE*)(a1 + 1027) & 1) == 0) {
    v2 = *(_QWORD*)(a1 + 16);
    if (v2 != 0) {
      v3 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v3 != nullptr) {
        v4 = 250;
        while (1) {
          v5 = v3[55];
          if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 && v3[49] == v2) {
            break;
          }
          v6 = v3[333];
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v3[327] == v2) {
            v3 += 278;
            break;
          }
          v7 = v3[611];
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v3[605] == v2) {
            v10 = 4448;
            goto LABEL_25;
          }
          v8 = v3[889];
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v3[883] == v2) {
            v10 = 6672;
            goto LABEL_25;
          }
          v9 = v3[1167];
          if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v3[1161] == v2) {
            v10 = 8896;
          LABEL_25:
            v3 = (_QWORD*)((char*)v3 + v10);
            break;
          }
          v3 += 1390;
          v4 -= 5;
          if (v4 == 0) {
            goto LABEL_27;
          }
        }
        Unit_6cb490(v3);
      }
    }
  }
LABEL_27:
  v11 = *(_QWORD*)(a1 + 24);
  v18[0] = GameData_1fd42e0;
  v18[1] = a1;
  v19 = v18;
  v21 = v20;
  v20[0] = GameData_1fd42e0;
  v20[1] = a1;
  GameRoutine_cefbb0(v20, v11 + 80);
  if (v21 == v20) {
    v12 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_32;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v21 + v12))((__int64)v21);
LABEL_32:
  v13 = GameRoutine_cedd40(v11);
  if (v19 == v18) {
    v14 = 32;
    goto LABEL_36;
  }
  if (v19 != nullptr) {
    v14 = 40;
  LABEL_36:
    (*(void (**)(__int64))(*v19 + v14))((__int64)v19);
  }
  if ((v13 & 1) != 0 && *(_BYTE*)(a1 + 1060) == 1) {
    *(_BYTE*)(a1 + 1060) = 0;
    v15 = *(_QWORD*)(GameData_21f3d10 + 216);
    v16 = *(_DWORD*)(v15 + 232);
    if (v16 <= 1) {
      v16 = 1;
    }
    *(_DWORD*)(v15 + 232) = v16;
  }
  return v13 & 1;
}

bool game_hub_Character_BuildSideStoryCommand_lambda1_Invoke(__int64 a1,
                                                             long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned __int64 v6;
  __int64 v7;
  _QWORD v9[3];

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 760);
  v4 = *(_QWORD*)(v2 + 768);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v3 != 0 && *(_BYTE*)(v3 + 288) == 1) {
    *(struct PseudoSret*)(v9) = GameRoutine_e99570(v3 + 280);
    v5 = 0;
    if (v4 == 0) {
      goto LABEL_9;
    }
  }
  else {
    v5 = 1;
    if (v4 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    if ((v5 & 1) != 0) {
      goto LABEL_10;
    }
    goto LABEL_12;
  }
LABEL_9:
  if ((v5 & 1) != 0) {
  LABEL_10:
    v6 = 0;
    return v6 != 0;
  }
LABEL_12:
  if ((v9[0] & 1) != 0) {
    v6 = v9[1];
    if (v9[2] != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, a2);
    }
  }
  else {
    v6 = (unsigned __int64)LOBYTE(v9[0]) >> 1;
  }
  return v6 != 0;
}

bool game_hub_Character_BuildSubquestCommand_lambda1_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 760);
  v3 = *(_QWORD*)(v1 + 768);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (*(_BYTE*)(v2 + 272) != 1 ||
      (game_GameModeData_instance_ == 0
           ? (v4 = 0)
           : (v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15)),
       (v5 = GameSubquestData_125b8e0(GameData_21c9718,
                                      *(_QWORD*)(*(_QWORD*)(v2 + 264) + 32LL),
                                      v4)) == 0)) {
    v5 = 0;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    if (v5 == 0) {
      return false;
    }
  }
  else if (v5 == 0) {
    return false;
  }
  return (*(_BYTE*)(v5 + 9) & 0xFE) != 4;
}

#pragma GCC visibility pop
