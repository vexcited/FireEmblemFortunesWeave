#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fd4cf8[21])();
extern __int64 (*GameData_1fd4d30[14])();
extern __int64 (*GameData_1fd4db0[])();
extern __int64 (*GameData_1fd5528[])();
extern __int64 (*GameData_1fd59c8[])();
extern __int64 (*GameData_1fd5a98[])();
extern __int64 (*GameData_209d8c0[])();
extern __int64 (*GameData_209dd28[])();
extern __int64 (*GameData_209ddf8[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern __int64* GameData_212c330[2];
extern __int64* GameData_212c370;
extern __int64 GameData_212c638;
extern __int64* GameData_212d458[7];
extern __int64 GameData_212dbc0[8];
extern char GameData_2174af0;
extern __int64 GameData_21a6070;
extern __int64 GameData_21c9608;
extern __int64 GameData_21f3c98;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220b6f8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_10c8e20(void);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__attribute__((swiftcall)) void GameRoutine_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
void __attribute__((noreturn)) GameRoutine_919020(_QWORD);
__attribute__((swiftcall)) void GameRoutine_a8ed00(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_a908c0(_QWORD, _QWORD);
bool GameRoutine_c13be0(__int64, __int64, __int64, __int64, char);
__int64 GameRoutine_c702b0(__int64, int, __int64, unsigned __int64);
__int64 GameRoutine_c71600(__int64, int, __int64, unsigned __int64, __int64,
                           unsigned __int64);
_QWORD* GameRoutine_ca8f80(_QWORD*);
__int64 GameRoutine_caaee0(__int64 result, int, char);
__int64 GameRoutine_cab670(__int64 result);
__int64 GameRoutine_cab8c0(__int64 result);
__int64 GameRoutine_cac2c0(__int64 result, int);
__int64 GameRoutine_cb12a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cb40c0(__int64*, __int64);
_QWORD* GameRoutine_cb4210(_QWORD*, __int64*);
__int64 GameRoutine_cb4e70(_QWORD, _QWORD);
__int64 GameRoutine_cba3a0(__int64, __int64*);
__int64 GameRoutine_ce5c00(void);
__int64 GameRoutine_ceca80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d6f4f0(_QWORD);
__int64 GameRoutine_d6f8d0(_QWORD);
__int64 GameRoutine_d85af0(_QWORD);
__int64 GameRoutine_d8e140(_QWORD);
__int64 GameRoutine_d8ec60(_QWORD);
__int64 GameRoutine_f60e40(_QWORD);
__int64 GameRoutine_fa2110(_QWORD);
__attribute__((swiftcall)) void
GameRoutine_a8ed00_alt1(PSEUDO_X8, __int64 result, __int64,
                        unsigned __int64) __asm__("GameRoutine_a8ed00");
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_a908c0_alt1(__int64, __int64) __asm__("GameRoutine_a908c0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_c71860(__int64 a1, int a2, unsigned int a3);

void GameHr_c71860(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  int v13;
  char v14;
  char* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  unsigned __int64 v30;
  char v31;
  char* v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  unsigned __int64 v43;
  bool v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  unsigned __int64 v50;
  char v51;
  char* v52;
  __int64 v53;
  char v54;
  __int64 v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  char v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  bool v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  char* v75;
  unsigned __int64 v76;
  char v77;
  char* v78;
  __int64 v79;
  char* v80;
  __int64 v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  char* v93;
  unsigned __int64 v94;
  char v95;
  char* v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  char* v101;
  unsigned __int64 v102;
  int v103;
  char v104;
  char* v105;
  __int64 v106;
  char* v107;
  __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  char* v111;
  bool v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  char v117;
  __int64 v118;
  __int64 v119;
  char* v120;
  char* v121;
  unsigned __int64 v122;
  __int64 v123;
  __int64 v124;
  char* v125;
  __int64 v126;
  char* v127;
  unsigned __int64 v128;
  __int64* v129;
  __int64 v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  bool v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  char* v139;
  unsigned __int64 v140;
  int v141;
  char v142;
  char* v143;
  __int64 v144;
  char* v145;
  __int64 v146;
  char* v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  int v151;
  int v152;
  __int64 v153;
  struct {
    __int64 v154;
    unsigned __int64 v155;
    char* v156;
  } v154_;
  struct {
    __int64 v157;
    unsigned __int64 v158;
    char* v159;
  } v157_;
  struct {
    __int64 v160;
    unsigned __int64 v161;
    char* v162;
  } v160_;

  std___1_to_string_1a0a790((void*)(&v160_.v160), a3);
  v5 = *(unsigned __int8*)(a1 + 376);
  v6 = (v5 & 1) == 0;
  v7 = v5 >> 1;
  if (v6) {
    v8 = v7;
  }
  else {
    v8 = *(_QWORD*)(a1 + 384);
  }
  if (v6) {
    v9 = a1 + 377;
  }
  else {
    v9 = *(_QWORD*)(a1 + 392);
  }
  if ((v160_.v160 & 1) != 0) {
    v10 = v160_.v161;
  }
  else {
    v10 = (unsigned __int64)(unsigned __int8)v160_.v160 >> 1;
  }
  if ((v160_.v160 & 1) != 0) {
    v11 = v160_.v162;
  }
  else {
    v11 = (char*)&v160_.v160 + 1;
  }
  v12 = v10 + v8;
  if (v10 + v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_333;
  }
  v13 = *(_DWORD*)(a1 + 496);
  v152 = a2;
  if (v12 > 0x16) {
    if ((v12 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v12 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v157_.v158 = v10 + v8;
    v157_.v159 = v15;
    v157_.v157 = v16 | 1;
    v14 = v16 | 1;
  }
  else {
    v14 = 2 * v12;
    v15 = nullptr;
    v157_.v158 = 0;
    v157_.v159 = nullptr;
    v157_.v157 = (unsigned __int8)(2 * v12);
  }
  if ((v14 & 1) != 0) {
    v17 = v15;
  }
  else {
    v17 = (char*)&v157_.v157 + 1;
  }
  v153 = a1 + 576;
  if (v8 != 0) {
    memmove((__int64)v17, v9, v8);
  }
  v18 = (__int64)&v17[v8];
  if (v10 != 0) {
    memmove(v18, (__int64)v11, v10);
  }
  *(_BYTE*)(v18 + v10) = 0;
  if ((v157_.v157 & 1) != 0) {
    v19 = v157_.v159;
  }
  else {
    v19 = (char*)&v157_.v157 + 1;
  }
  if ((v157_.v157 & 1) != 0) {
    v20 = v157_.v158;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v157_.v157 >> 1;
  }
  GameRoutine_c702b0(v153, v13, (__int64)v19, v20);
  if ((v157_.v157 & 1) != 0 && v157_.v159 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  (__int64)v157_.v159);
  }
  v22 = game_g_frame_clock_ptr[0];
  if ((*(_DWORD*)(a1 + 500) & 0x80000000) == 0) {
    v23 = *(unsigned __int8*)(a1 + 400);
    v24 = (v23 & 1) == 0;
    v25 = v23 >> 1;
    if (v24) {
      v26 = v25;
    }
    else {
      v26 = *(_QWORD*)(a1 + 408);
    }
    if (v24) {
      v27 = a1 + 401;
    }
    else {
      v27 = *(_QWORD*)(a1 + 416);
    }
    if ((v160_.v160 & 1) != 0) {
      v28 = v160_.v161;
    }
    else {
      v28 = (unsigned __int64)(unsigned __int8)v160_.v160 >> 1;
    }
    if ((v160_.v160 & 1) != 0) {
      v29 = v160_.v162;
    }
    else {
      v29 = (char*)&v160_.v160 + 1;
    }
    v30 = v28 + v26;
    if (v28 + v26 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    if (v30 > 0x16) {
      if ((v30 | 7) == 0x17) {
        v33 = 26;
      }
      else {
        v33 = (v30 | 7) + 1;
      }
      v32 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v33,
                                                  16, 0);
      v157_.v158 = v28 + v26;
      v157_.v159 = v32;
      v157_.v157 = v33 | 1;
      v31 = v33 | 1;
    }
    else {
      v31 = 2 * v30;
      v32 = nullptr;
      v157_.v158 = 0;
      v157_.v159 = nullptr;
      v157_.v157 = (unsigned __int8)(2 * v30);
    }
    if ((v31 & 1) != 0) {
      v34 = v32;
    }
    else {
      v34 = (char*)&v157_.v157 + 1;
    }
    if (v26 != 0) {
      memmove((__int64)v34, v27, v26);
    }
    v35 = (__int64)&v34[v26];
    if (v28 != 0) {
      memmove(v35, (__int64)v29, v28);
    }
    *(_BYTE*)(v35 + v28) = 0;
    if ((v157_.v157 & 1) != 0) {
      v36 = v157_.v158;
    }
    else {
      v36 = (unsigned __int64)(unsigned __int8)v157_.v157 >> 1;
    }
    if ((v157_.v157 & 1) != 0) {
      v37 = v157_.v159;
    }
    else {
      v37 = (char*)&v157_.v157 + 1;
    }
    GameRoutine_a8ed00_alt1((void*)(&v154_.v154), *(_QWORD*)(*v22 + 13224),
                            (__int64)v37, v36);
    v39 = v154_.v154;
    v38 = v154_.v155;
    if (v154_.v155 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v154_.v155 + 8), 1u,
                                memory_order_relaxed);
      v40 = v154_.v155;
      if (v154_.v155 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v154_.v155 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak(v40);
      }
    }
    if ((v157_.v157 & 1) != 0 && v157_.v159 != nullptr) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, (__int64)v157_.v159);
    }
    v42 = *(_DWORD*)(a1 + 500);
    if (v39 != 0) {
      v43 = *(unsigned __int8*)(a1 + 400);
      v44 = (v43 & 1) == 0;
      v45 = v43 >> 1;
      if (v44) {
        v46 = v45;
      }
      else {
        v46 = *(_QWORD*)(a1 + 408);
      }
      if (v44) {
        v47 = a1 + 401;
      }
      else {
        v47 = *(_QWORD*)(a1 + 416);
      }
      if ((v160_.v160 & 1) != 0) {
        v48 = v160_.v161;
      }
      else {
        v48 = (unsigned __int64)(unsigned __int8)v160_.v160 >> 1;
      }
      if ((v160_.v160 & 1) != 0) {
        v49 = v160_.v162;
      }
      else {
        v49 = (char*)&v160_.v160 + 1;
      }
      v50 = v48 + v46;
      if (v48 + v46 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_333;
      }
      if (v50 > 0x16) {
        if ((v50 | 7) == 0x17) {
          v63 = 26;
        }
        else {
          v63 = (v50 | 7) + 1;
        }
        v52 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v63, 16, 0);
        v157_.v158 = v48 + v46;
        v157_.v159 = v52;
        v157_.v157 = v63 | 1;
        v51 = v63 | 1;
      }
      else {
        v51 = 2 * v50;
        v52 = nullptr;
        v157_.v158 = 0;
        v157_.v159 = nullptr;
        v157_.v157 = (unsigned __int8)(2 * v50);
      }
      if ((v51 & 1) != 0) {
        v64 = v52;
      }
      else {
        v64 = (char*)&v157_.v157 + 1;
      }
      if (v46 != 0) {
        memmove((__int64)v64, v47, v46);
      }
      v65 = (__int64)&v64[v46];
      if (v48 != 0) {
        memmove(v65, (__int64)v49, v48);
      }
      *(_BYTE*)(v65 + v48) = 0;
      if ((v157_.v157 & 1) != 0) {
        v66 = v157_.v159;
      }
      else {
        v66 = (char*)&v157_.v157 + 1;
      }
      if ((v157_.v157 & 1) != 0) {
        v67 = v157_.v158;
      }
      else {
        v67 = (unsigned __int64)(unsigned __int8)v157_.v157 >> 1;
      }
      GameRoutine_c702b0(v153, v42, (__int64)v66, v67);
      v22 = game_g_frame_clock_ptr[0];
      if ((v157_.v157 & 1) != 0 && v157_.v159 != nullptr) {
        v68 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v68 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, (__int64)v157_.v159);
      }
    }
    else {
      v53 = v153 + 96LL * v42;
      v54 = *(_BYTE*)(v53 + 8);
      *(_DWORD*)v53 = 0;
      if ((v54 & 1) != 0) {
        v55 = *(_QWORD*)(v53 + 24);
        if (v55 != 0) {
          v56 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v55);
        }
      }
      v57 = *(_BYTE*)(v53 + 32);
      *(_QWORD*)(v53 + 16) = 0;
      *(_QWORD*)(v53 + 24) = 0;
      *(_QWORD*)(v53 + 8) = 0;
      if ((v57 & 1) != 0) {
        v58 = *(_QWORD*)(v53 + 48);
        if (v58 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v58);
        }
      }
      v60 = *(_BYTE*)(v53 + 56);
      *(_QWORD*)(v53 + 40) = 0;
      *(_QWORD*)(v53 + 48) = 0;
      *(_QWORD*)(v53 + 32) = 0;
      if ((v60 & 1) != 0) {
        v61 = *(_QWORD*)(v53 + 72);
        if (v61 != 0) {
          v62 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v62 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v61);
        }
      }
      *(_QWORD*)(v53 + 64) = 0;
      *(_QWORD*)(v53 + 72) = 0;
      *(_QWORD*)(v53 + 56) = 0;
      *(_QWORD*)(v53 + 80) = -1;
      *(_QWORD*)(v53 + 88) = 1065353216;
    }
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      std___1___shared_weak_count___release_weak(v38);
    }
  }
  v69 = *(unsigned __int8*)(a1 + 448);
  v70 = (v69 & 1) == 0;
  v71 = v69 >> 1;
  if (v70) {
    v72 = v71;
  }
  else {
    v72 = *(_QWORD*)(a1 + 456);
  }
  if (v70) {
    v73 = a1 + 449;
  }
  else {
    v73 = *(_QWORD*)(a1 + 464);
  }
  if ((v160_.v160 & 1) != 0) {
    v74 = v160_.v161;
  }
  else {
    v74 = (unsigned __int64)(unsigned __int8)v160_.v160 >> 1;
  }
  if ((v160_.v160 & 1) != 0) {
    v75 = v160_.v162;
  }
  else {
    v75 = (char*)&v160_.v160 + 1;
  }
  v76 = v74 + v72;
  if (v74 + v72 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_333;
  }
  if (v76 > 0x16) {
    if ((v76 | 7) == 0x17) {
      v79 = 26;
    }
    else {
      v79 = (v76 | 7) + 1;
    }
    v78 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v79,
                                                16, 0);
    v157_.v158 = v74 + v72;
    v157_.v159 = v78;
    v157_.v157 = v79 | 1;
    v77 = v79 | 1;
  }
  else {
    v77 = 2 * v76;
    v78 = nullptr;
    v157_.v158 = 0;
    v157_.v159 = nullptr;
    v157_.v157 = (unsigned __int8)(2 * v76);
  }
  if ((v77 & 1) != 0) {
    v80 = v78;
  }
  else {
    v80 = (char*)&v157_.v157 + 1;
  }
  if (v72 != 0) {
    memmove((__int64)v80, v73, v72);
  }
  v81 = (__int64)&v80[v72];
  if (v74 != 0) {
    memmove(v81, (__int64)v75, v74);
  }
  *(_BYTE*)(v81 + v74) = 0;
  if ((v157_.v157 & 1) != 0) {
    v82 = v157_.v158;
  }
  else {
    v82 = (unsigned __int64)(unsigned __int8)v157_.v157 >> 1;
  }
  if ((v157_.v157 & 1) != 0) {
    v83 = v157_.v159;
  }
  else {
    v83 = (char*)&v157_.v157 + 1;
  }
  GameRoutine_a8ed00_alt1((void*)(&v154_.v154), *(_QWORD*)(*v22 + 13224),
                          (__int64)v83, v82);
  v85 = v154_.v154;
  v84 = v154_.v155;
  if (v154_.v155 != 0 &&
      (atomic_fetch_add_explicit((atomic_ullong* volatile)(v154_.v155 + 8), 1u,
                                 memory_order_relaxed),
       v86 = v154_.v155, v154_.v155 != 0) &&
      atomic_fetch_add((atomic_ullong* volatile)(v154_.v155 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86);
    std___1___shared_weak_count___release_weak(v86);
    if ((v157_.v157 & 1) == 0) {
      goto LABEL_177;
    }
  }
  else if ((v157_.v157 & 1) == 0) {
    goto LABEL_177;
  }
  if (v157_.v159 != nullptr) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                                  (__int64)v157_.v159);
  }
LABEL_177:
  v88 = *(_DWORD*)(a1 + 504);
  if (v85 != 0) {
    v89 = *(unsigned __int8*)(a1 + 424);
    if ((v89 & 1) != 0) {
      v90 = *(_QWORD*)(a1 + 440);
    }
    else {
      v90 = a1 + 425;
    }
    if ((v89 & 1) != 0) {
      v91 = *(_QWORD*)(a1 + 432);
    }
    else {
      v91 = v89 >> 1;
    }
    if ((v160_.v160 & 1) != 0) {
      v92 = v160_.v161;
    }
    else {
      v92 = (unsigned __int64)(unsigned __int8)v160_.v160 >> 1;
    }
    if ((v160_.v160 & 1) != 0) {
      v93 = v160_.v162;
    }
    else {
      v93 = (char*)&v160_.v160 + 1;
    }
    v94 = v92 + v91;
    if (v92 + v91 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    v151 = *(_DWORD*)(a1 + 504);
    if (v94 > 0x16) {
      if ((v94 | 7) == 0x17) {
        v106 = 26;
      }
      else {
        v106 = (v94 | 7) + 1;
      }
      v96 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                  v106, 16, 0);
      v157_.v158 = v92 + v91;
      v157_.v159 = v96;
      v157_.v157 = v106 | 1;
      v95 = v106 | 1;
    }
    else {
      v95 = 2 * v94;
      v96 = nullptr;
      v157_.v158 = 0;
      v157_.v159 = nullptr;
      v157_.v157 = (unsigned __int8)(2 * v94);
    }
    if ((v95 & 1) != 0) {
      v107 = v96;
    }
    else {
      v107 = (char*)&v157_.v157 + 1;
    }
    if (v91 != 0) {
      memmove((__int64)v107, v90, v91);
    }
    v108 = (__int64)&v107[v91];
    if (v92 != 0) {
      memmove(v108, (__int64)v93, v92);
    }
    *(_BYTE*)(v108 + v92) = 0;
    v109 = (v157_.v157 & 1) != 0
               ? v157_.v158
               : (unsigned __int64)(unsigned __int8)v157_.v157 >> 1;
    v110 = *(unsigned __int8*)(a1 + 448);
    v111 = (v157_.v157 & 1) != 0 ? v157_.v159 : (char*)&v157_.v157 + 1;
    v112 = (v110 & 1) == 0;
    v113 = v110 >> 1;
    v114 = v112 ? v113 : *(_QWORD*)(a1 + 456);
    v115 = v112 ? a1 + 449 : *(_QWORD*)(a1 + 464);
    v116 = v114 + v92;
    if (v114 + v92 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    if (v116 > 0x16) {
      if ((v116 | 7) == 0x17) {
        v119 = 26;
      }
      else {
        v119 = (v116 | 7) + 1;
      }
      v118 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v119, 16, 0);
      v154_.v155 = v114 + v92;
      v154_.v156 = (char*)v118;
      v154_.v154 = v119 | 1;
      v117 = v119 | 1;
    }
    else {
      v117 = 2 * v116;
      v118 = 0;
      v154_.v155 = 0;
      v154_.v156 = nullptr;
      v154_.v154 = (unsigned __int8)(2 * v116);
    }
    if ((v117 & 1) != 0) {
      v120 = (char*)v118;
    }
    else {
      v120 = (char*)&v154_.v154 + 1;
    }
    if (v114 != 0) {
      memmove((__int64)v120, v115, v114);
    }
    if (v92 != 0) {
      memmove((__int64)&v120[v114], (__int64)v93, v92);
    }
    v120[v114 + v92] = 0;
    if ((v154_.v154 & 1) != 0) {
      v121 = v154_.v156;
    }
    else {
      v121 = (char*)&v154_.v154 + 1;
    }
    if ((v154_.v154 & 1) != 0) {
      v122 = v154_.v155;
    }
    else {
      v122 = (unsigned __int64)(unsigned __int8)v154_.v154 >> 1;
    }
    GameRoutine_c71600(v153, v151, (__int64)v111, v109, (__int64)v121, v122);
    v103 = v152;
    if ((v154_.v154 & 1) != 0 && v154_.v156 != nullptr) {
      v123 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v123 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v123, (__int64)v154_.v156);
    }
  }
  else {
    v97 = *(unsigned __int8*)(a1 + 424);
    if ((v97 & 1) != 0) {
      v98 = *(_QWORD*)(a1 + 440);
    }
    else {
      v98 = a1 + 425;
    }
    if ((v97 & 1) != 0) {
      v99 = *(_QWORD*)(a1 + 432);
    }
    else {
      v99 = v97 >> 1;
    }
    if ((v160_.v160 & 1) != 0) {
      v100 = v160_.v161;
    }
    else {
      v100 = (unsigned __int64)(unsigned __int8)v160_.v160 >> 1;
    }
    if ((v160_.v160 & 1) != 0) {
      v101 = v160_.v162;
    }
    else {
      v101 = (char*)&v160_.v160 + 1;
    }
    v102 = v100 + v99;
    if (v100 + v99 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_333;
    }
    v103 = v152;
    if (v102 > 0x16) {
      if ((v102 | 7) == 0x17) {
        v124 = 26;
      }
      else {
        v124 = (v102 | 7) + 1;
      }
      v105 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   v124, 16, 0);
      v157_.v158 = v100 + v99;
      v157_.v159 = v105;
      v157_.v157 = v124 | 1;
      v104 = v124 | 1;
    }
    else {
      v104 = 2 * v102;
      v105 = nullptr;
      v157_.v158 = 0;
      v157_.v159 = nullptr;
      v157_.v157 = (unsigned __int8)(2 * v102);
    }
    if ((v104 & 1) != 0) {
      v125 = v105;
    }
    else {
      v125 = (char*)&v157_.v157 + 1;
    }
    if (v99 != 0) {
      memmove((__int64)v125, v98, v99);
    }
    v126 = (__int64)&v125[v99];
    if (v100 != 0) {
      memmove(v126, (__int64)v101, v100);
    }
    *(_BYTE*)(v126 + v100) = 0;
    if ((v157_.v157 & 1) != 0) {
      v127 = v157_.v159;
    }
    else {
      v127 = (char*)&v157_.v157 + 1;
    }
    if ((v157_.v157 & 1) != 0) {
      v128 = v157_.v158;
    }
    else {
      v128 = (unsigned __int64)(unsigned __int8)v157_.v157 >> 1;
    }
    GameRoutine_c702b0(v153, v88, (__int64)v127, v128);
  }
  v129 = game_g_frame_clock_ptr[0];
  if ((v157_.v157 & 1) != 0 && v157_.v159 != nullptr) {
    v130 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v130 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v130,
                                  (__int64)v157_.v159);
  }
  if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
    std___1___shared_weak_count___release_weak(v84);
  }
  v131 = *(unsigned __int8*)(a1 + 232);
  if ((v131 & 1) != 0) {
    v132 = *(_QWORD*)(a1 + 240);
  }
  else {
    v132 = v131 >> 1;
  }
  if (v132 != 0) {
    v133 = *(unsigned __int8*)(a1 + 472);
    v134 = (v133 & 1) == 0;
    v135 = v133 >> 1;
    if (v134) {
      v136 = v135;
    }
    else {
      v136 = *(_QWORD*)(a1 + 480);
    }
    if (v134) {
      v137 = a1 + 473;
    }
    else {
      v137 = *(_QWORD*)(a1 + 488);
    }
    if ((v160_.v160 & 1) != 0) {
      v138 = v160_.v161;
    }
    else {
      v138 = (unsigned __int64)(unsigned __int8)v160_.v160 >> 1;
    }
    if ((v160_.v160 & 1) != 0) {
      v139 = v160_.v162;
    }
    else {
      v139 = (char*)&v160_.v160 + 1;
    }
    v140 = v138 + v136;
    if (v138 + v136 < 0xFFFFFFFFFFFFFFF7LL) {
      v141 = *(_DWORD*)(a1 + 508);
      if (v140 > 0x16) {
        if ((v140 | 7) == 0x17) {
          v144 = 26;
        }
        else {
          v144 = (v140 | 7) + 1;
        }
        v143 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                     v144, 16, 0);
        v157_.v158 = v138 + v136;
        v157_.v159 = v143;
        v157_.v157 = v144 | 1;
        v142 = v144 | 1;
      }
      else {
        v142 = 2 * v140;
        v143 = nullptr;
        v157_.v158 = 0;
        v157_.v159 = nullptr;
        v157_.v157 = (unsigned __int8)(2 * v140);
      }
      if ((v142 & 1) != 0) {
        v145 = v143;
      }
      else {
        v145 = (char*)&v157_.v157 + 1;
      }
      if (v136 != 0) {
        memmove((__int64)v145, v137, v136);
      }
      v146 = (__int64)&v145[v136];
      if (v138 != 0) {
        memmove(v146, (__int64)v139, v138);
      }
      *(_BYTE*)(v146 + v138) = 0;
      if ((v157_.v157 & 1) != 0) {
        v147 = v157_.v159;
      }
      else {
        v147 = (char*)&v157_.v157 + 1;
      }
      if ((v157_.v157 & 1) != 0) {
        v148 = v157_.v158;
      }
      else {
        v148 = (unsigned __int64)(unsigned __int8)v157_.v157 >> 1;
      }
      GameRoutine_c702b0(v153, v141, (__int64)v147, v148);
      if ((v157_.v157 & 1) != 0 && v157_.v159 != nullptr) {
        v149 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v149 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v149, (__int64)v157_.v159);
      }
      goto LABEL_323;
    }
  LABEL_333:
    String_60a1d0();
  }
LABEL_323:
  if (v103 != 0xFFFFFFFFLL) {
    GameRoutine_a908c0_alt1(*(_QWORD*)(*v129 + 13224) + 1560LL * v103 + 208,
                            v153);
  }
  if ((v160_.v160 & 1) != 0 && v160_.v162 != nullptr) {
    v150 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v150 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v150,
                                  (__int64)v160_.v162);
  }
}

__int64 GameHr_cadeb0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  int v4;

  GameRoutine_ca8f80(a1);
  GameRoutine_d8e140(a1 + 26);
  GameRoutine_d8ec60(a1 + 26);
  GameRoutine_cb12a0(a1, a1 + 69, a1 + 72);
  GameRoutine_cb12a0(a1, a1 + 75, a1 + 78);
  GameRoutine_cb12a0(a1, a1 + 81, a1 + 84);
  GameRoutine_cab670((__int64)a1);
  result = GameRoutine_cab8c0((__int64)a1);
  if (a1[95] != 0) {
    v3 = *(_QWORD*)(GameData_21f3d10 + 216);
    v4 = *(_DWORD*)(v3 + 232);
    if (v4 <= 1) {
      v4 = 1;
    }
    *(_DWORD*)(v3 + 232) = v4;
  }
  return result;
}

__int64 GameHr_cb83a0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 result;
  bool v8;
  unsigned __int64 add;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;

  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    v5 = GameRoutine_1a0a0c0(v3);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 72);
    }
    else {
      v6 = 0;
    }
    result = a2[1];
    if (result == 0) {
      goto LABEL_14;
    }
  }
  else {
    v6 = 0;
    v5 = 0;
    result = a2[1];
    if (result == 0) {
    LABEL_14:
      v10 = v6 == 0;
      goto LABEL_15;
    }
  }
  result = GameRoutine_1a0a0c0(result);
  if (result == 0) {
    goto LABEL_14;
  }
  v8 = v6 == *a2;
  add = atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL);
  v10 = v8;
  if (add == 0) {
    v11 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = GameRoutine_1a09c50(v11);
  }
LABEL_15:
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
    if (v10) {
      return result;
    }
  }
  else if (v10) {
    return result;
  }
  v12 = *(_QWORD*)(a1 + 80);
  if (v12 != 0) {
    v13 = GameRoutine_1a0a0c0(v12);
    if (v13 != 0) {
      v14 = *(_QWORD*)(a1 + 72);
      v15 = v13;
      if (v14 != 0) {
        GameRoutine_caaee0(*(_QWORD*)(a1 + 72), 0, 0);
        v16 = *(_DWORD*)(v14 + 1208);
        v17 = *(_QWORD*)(v14 + 24);
        *(_DWORD*)(v14 + 1216) = 0;
        GameRoutine_ceca80(v17, 256, v16 > 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        GameRoutine_1a09c50(v15);
      }
    }
  }
  v18 = *a2;
  result = a2[1];
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
  }
  v19 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) = v18;
  *(_QWORD*)(a1 + 80) = result;
  if (v19 != 0) {
    GameRoutine_1a09c50(v19);
    result = *(_QWORD*)(a1 + 80);
  }
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v20 = *(_QWORD*)(a1 + 72);
      v21 = result;
      if (v20 != 0) {
        v22 = *(_QWORD*)(a1 + 80);
        v23 = *(unsigned __int8*)(GameData_21f3d10 + 10);
        if (*(_BYTE*)(GameData_21f3d10 + 10) != 0) {
          v24 = 2;
        }
        else {
          v24 = 1;
        }
        if (v22 != 0) {
          v25 = GameRoutine_1a0a0c0(v22);
          if (v25 != 0) {
            v26 = *(_QWORD*)(a1 + 72);
            v27 = v25;
            if (v26 != 0) {
              v28 = *(_DWORD*)(v26 + 1208);
              v29 = *(_QWORD*)(v26 + 24);
              *(_DWORD*)(v26 + 1216) = v24;
              if (v28 > 0) {
                v30 = 1;
              }
              else {
                v30 = v23 ^ 1u;
              }
              GameRoutine_ceca80(v29, 256, v30);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
              GameRoutine_1a09c50(v27);
            }
          }
        }
        result = GameRoutine_caaee0(v20, 3, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        return GameRoutine_1a09c50(v21);
      }
    }
  }
  return result;
}

__int64 GameHr_cb9240(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;

  v1 = a1[10];
  if (v1 != 0) {
    v3 = a1[9];
    v4 = a1[10];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_1a0a0c0(v4);
    GameRoutine_1a09c50(v1);
    if (v5 != 0) {
      if (v3 != 0 && *(_DWORD*)(v3 + 1112) == 3 && *(_QWORD*)(v3 + 56) != 0) {
        GameRoutine_10c8e20();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v5);
      }
    }
  }
  *(_QWORD*)(a1[1] + 16LL) = *(_QWORD*)(a1[1] + 8LL);
  if (*(_BYTE*)(GameData_21f3c98 + 80) == 1) {
    *(_BYTE*)(GameData_21f3c98 + 80) = 0;
  }
  v7 = GameData_21c9608;
  *(_QWORD*)(GameData_21c9608 + 176) = 0;
  *(_BYTE*)(v7 + 160) = 0;
  *(_DWORD*)(v7 + 192) = 0;
  *(_OWORD*)(v7 + 176) = *(unsigned __int64*)(v7 + 176);
  result = GameRoutine_fa2110(GameData_220b6f8);
  *(_QWORD*)(a1[11] + 16LL) = *(_QWORD*)(a1[11] + 8LL);
  v9 = *(_QWORD*)(GameData_21f3d10 + 200);
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 8);
    v11 = *(_QWORD*)(v9 + 16);
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_f60e40(v10);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result = GameRoutine_1a09c50(v11);
      }
    }
    else {
      result = GameRoutine_f60e40(v10);
    }
  }
  v12 = a1[3];
  v13 = a1[4];
  if (v12 != v13) {
    do {
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v12 + 24LL) + 32LL);
      if (v14 != 0) {
        v15 = *(_QWORD*)(v14 + 400);
        for (i = *(_QWORD*)(v14 + 408); i != v15; i -= 32) {
          v17 = *(_QWORD*)(i - 8);
          if (v17 != 0) {
            GameRoutine_1a09c50(v17);
          }
          result = *(_QWORD*)(i - 24);
          if (result != 0) {
            result = GameRoutine_1a09c50(result);
          }
        }
        *(_QWORD*)(v14 + 408) = v15;
      }
      v12 += 16;
    } while (v12 != v13);
    v18 = (__int64*)a1[3];
    v19 = (__int64*)a1[4];
    if (v18 != v19) {
      v20 = GameData_212d458[0];
      do {
        result = GameRoutine_cac2c0(*v18, 0);
        v21 = *(_QWORD*)(*v20 + 120);
        if ((*(_BYTE*)(v21 + 12) & 1) == 0) {
          *(_BYTE*)(v21 + 12) = 1;
        }
        v18 += 2;
      } while (v18 != v19);
    }
  }
  return result;
}

__int64 GameHr_cba580(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7[2];

  v2 = *(__int64**)(result + 136);
  v1 = *(__int64**)(result + 144);
  if (v1 != v2) {
    v3 = result;
    do {
      v4 = v2[1];
      v7[0] = *v2;
      v7[1] = v4;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_cba3a0(result, v7);
        result = GameRoutine_1a09c50(v4);
      }
      else {
        result = GameRoutine_cba3a0(result, v7);
      }
      v2 += 2;
    } while (v2 != v1);
    v5 = *(_QWORD*)(v3 + 136);
    for (i = *(_QWORD*)(v3 + 144); i != v5; i -= 16) {
      result = *(_QWORD*)(i - 8);
      if (result != 0) {
        result = GameRoutine_1a09c50(result);
      }
    }
    *(_QWORD*)(v3 + 144) = v5;
  }
  return result;
}

_QWORD* GameHr_cbf8a0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v0 = GameData_212c370;
  v1 = *GameData_212c370;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  v5 = (__int64*)GameData_212dbc0[0];
  if ((v4 & 1) != 0) {
    v6 = *(_QWORD*)GameData_212dbc0[0];
    if (*(_BYTE*)(*(_QWORD*)GameData_212dbc0[0] + 104LL) == 1) {
      *(_BYTE*)(v6 + 104) = 0;
    }
    v4 = GameRoutine_d6f4f0(v6);
  }
  if ((GameRoutine_d85af0(v4) & 1) != 0) {
    goto LABEL_6;
  }
  v11 = *v5;
  v12 = *(unsigned __int8*)(v11 + 112);
  if ((v12 & 1) != 0) {
    v13 = *(_QWORD*)(v11 + 120);
  }
  else {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     64LL);
    v15 = *(_QWORD*)(v14 + 96);
    if (v15 != 0) {
      v16 = (v12 & 1) != 0 ? *(_QWORD*)(v11 + 128) : v11 + 113;
      if (!GameRoutine_c13be0(v15, v16, v13, *(_QWORD*)(v14 + 152), 0)) {
      LABEL_6:
        v7 = *v0;
        v8 = *(_QWORD*)(v7 +
                        8LL * (*(unsigned int (**)(__int64))(
                                  *(_QWORD*)GameData_21a6070 + 72LL))(
                                  GameData_21a6070) +
                        4384);
        v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
        return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v9 + 24) + 448LL))(*(_QWORD*)(v9 + 24), 0);
      }
    }
    GameRoutine_d6f8d0(v11);
  }
  v17 = *v0;
  v18 = *(
      _QWORD*)(v17 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v18 != 0) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
  }
  else {
    v19 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v19 + 24) + 448LL))(
      *(_QWORD*)(v19 + 24), 1);
  result = *(_QWORD**)(v19 + 2240);
  *(_QWORD*)(v19 + 2240) = 0;
  if (result == (_QWORD*)(v19 + 2208)) {
    v20 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v20 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(void*))(*result + v20))(result);
}

__int64 GameHr_cd7620(__int64 result, __int64* a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 (*v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
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
  _QWORD* v40;
  __int64* v41;
  unsigned __int64 v42;
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
  __int64* v58;
  __int64 v59;
  __int64* v60;
  _BYTE v61[32];
  _BYTE* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD v69[4];
  _QWORD* v70;
  char v71;

  v4 = *(unsigned int*)(result + 16);
  if ((_DWORD)v4 == 0x4000) {
    return result;
  }
  v5 = result;
  v6 = GameData_212c330[0];
  v7 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(result + 20)] + 16 * v4);
  if (v7[1] == 0 || *v7 != *(_QWORD*)(result + 8)) {
    return result;
  }
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = nullptr;
  v60 = nullptr;
  v62 = nullptr;
  if (&v54 != a2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v10 = a3;
      v11 = a4;
      result = GameRoutine_64df20(&v54, a2[2], a2[1]);
      a3 = v10;
      a4 = v11;
      if ((*v10 & 1) == 0) {
        goto LABEL_8;
      }
      goto LABEL_10;
    }
    v8 = a2[1];
    v54 = *a2;
    v55 = v8;
    v56 = a2[2];
  }
  if ((*(_BYTE*)a3 & 1) == 0) {
  LABEL_8:
    v9 = a3[1];
    v48 = *a3;
    v49 = v9;
    v50 = a3[2];
    goto LABEL_11;
  }
LABEL_10:
  v12 = a4;
  result = GameRoutine_60a270(&v48, a3[2], a3[1]);
  a4 = v12;
LABEL_11:
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v13 = *a4;
  v14 = a4[1];
  v15 = v14 - *a4;
  v16 = GameData_212bf68;
  if (v14 == *a4) {
    v17 = 0;
  }
  else {
    if (v15 < 0) {
      GameRoutine_919020(result);
    }
    v17 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v14 - *a4, 16, 0);
    v51 = v17;
    v52 = v17;
    v53 = v17 + v15;
    do {
      *(_BYTE*)v17 = 0;
      *(_DWORD*)(v17 + 24) = -1;
      v18 = *(_DWORD*)(v13 + 24);
      if (v18 != -1) {
        v19 = GameData_1fd4d30[v18];
        v69[0] = v17;
        ((void (*)(_QWORD*, __int64))v19)(v69, v13);
        *(_DWORD*)(v17 + 24) = v18;
      }
      v13 += 32;
      v17 += 32;
    } while (v13 != v14);
    v52 = v17;
  }
  if ((v48 & 1) != 0) {
    GameRoutine_60a270(&v63, v50, v49);
    v17 = v52;
  }
  else {
    v63 = v48;
    v64 = v49;
    v65 = v50;
  }
  v20 = v51;
  v21 = v53;
  v22 = *(_QWORD*)v16;
  v52 = 0;
  v53 = 0;
  v51 = 0;
  v66 = v20;
  v67 = v17;
  v68 = v21;
  v23 = (_QWORD*)GameRoutine_651b90(v22, 56, 16, 0);
  *v23 = GameData_1fd4db0;
  v24 = v23 + 1;
  if ((v63 & 1) != 0) {
    GameRoutine_60a270(v24, v65, v64);
    v20 = v66;
    v17 = v67;
    v21 = v68;
  }
  else {
    v25 = v64;
    *v24 = v63;
    v23[2] = v25;
    v23[3] = v65;
  }
  v23[4] = v20;
  v23[5] = v17;
  v23[6] = v21;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v70 = v23;
  GameRoutine_cb4e70(v69, v61);
  if (v70 == v69) {
    v26 = 32;
    goto LABEL_29;
  }
  if (v70 != nullptr) {
    v26 = 40;
  LABEL_29:
    (*(void (**)(void*))(*v70 + v26))(v70);
  }
  v27 = v66;
  if (v66 != 0) {
    v28 = v67;
    if (v66 == v67) {
      goto LABEL_37;
    }
    do {
      v29 = *(unsigned int*)(v28 - 8);
      v30 = v28 - 32;
      if ((_DWORD)v29 != -1) {
        ((void (*)(char*, __int64))GameData_1fd4cf8[v29])(&v71, v28 - 32);
      }
      *(_DWORD*)(v28 - 8) = -1;
      v28 -= 32;
    } while (v30 != v27);
    v67 = v27;
    if (v66 != 0) {
    LABEL_37:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v31 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v16 + v31);
    }
  }
  if ((v63 & 1) != 0 && v65 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v32 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v16 + v32);
  }
  v33 = v51;
  if (v51 != 0) {
    v34 = v52;
    if (v51 == v52) {
      goto LABEL_52;
    }
    do {
      v35 = *(unsigned int*)(v34 - 8);
      v36 = v34 - 32;
      if ((_DWORD)v35 != -1) {
        ((void (*)(_QWORD*, __int64))GameData_1fd4cf8[v35])(v69, v34 - 32);
      }
      *(_DWORD*)(v34 - 8) = -1;
      v34 -= 32;
    } while (v36 != v33);
    v52 = v33;
    if (v51 != 0) {
    LABEL_52:
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v37 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)v16 + v37);
    }
  }
  if ((v48 & 1) != 0 && v50 != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v38 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)v16 + v38);
  }
  v39 = *(unsigned int*)(v5 + 16);
  if ((_DWORD)v39 == 0x4000 ||
      (v40 = (_QWORD*)(v6[*(unsigned int*)(v5 + 20)] + 16 * v39))[1] == 0) {
    v41 = nullptr;
  }
  else if (*v40 == *(_QWORD*)(v5 + 8)) {
    v41 = (__int64*)v40[1];
  }
  else {
    v41 = nullptr;
  }
  v42 = v41[147];
  if (v42 >= v41[148]) {
    v43 = GameRoutine_cb40c0(v41 + 146, (__int64)&v54);
  }
  else {
    GameRoutine_cb4210((_QWORD*)v41[147], &v54);
    v43 = v42 + 176;
  }
  v41[147] = v43;
  if (v62 == v61) {
    v44 = 32;
  }
  else {
    if (v62 == nullptr) {
      goto LABEL_74;
    }
    v44 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v62 + v44))((void*)v62);
LABEL_74:
  if (v60 == &v59) {
    v45 = 32;
  }
  else {
    if (v60 == nullptr) {
      goto LABEL_79;
    }
    v45 = 40;
  }
  (*(void (**)(void*))(*v60 + v45))(v60);
LABEL_79:
  result = (__int64)v58;
  if (v58 == &v57) {
    v46 = 32;
    goto LABEL_83;
  }
  if (v58 != nullptr) {
    v46 = 40;
  LABEL_83:
    result = (*(__int64 (**)(void*))(*v58 + v46))(v58);
  }
  if ((v54 & 1) != 0 && v56 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v47 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v16 + v47);
  }
  return result;
}

__int64 GameHr_ce02d0(__int64 a1, int* a2)
{
  __int64 result;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v12 = 0;
  v13 = 0;
  result = GameRoutine_16dcd30(a1, "DungeonSystemMenu", &v12, 0);
  v5 = v13;
  *(_QWORD*)a1 = GameData_209d8c0;
  *(_QWORD*)(a1 + 176) = GameData_209dd28;
  *(_QWORD*)(a1 + 1056) = GameData_209ddf8;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = GameRoutine_1a09c50(v5);
  }
  *(_BYTE*)(a1 + 1064) = 0;
  *(_DWORD*)(a1 + 1068) = 2;
  *(_QWORD*)a1 = GameData_1fd5528;
  *(_QWORD*)(a1 + 176) = GameData_1fd59c8;
  *(_QWORD*)(a1 + 1056) = GameData_1fd5a98;
  v6 = *a2;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_DWORD*)(a1 + 1072) = v6;
  v8 = *((_QWORD*)a2 + 1);
  v7 = *((_QWORD*)a2 + 2);
  v9 = v7 - v8;
  if (v7 != v8) {
    if (v9 < 0) {
      GameRoutine_688200(result);
    }
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v7 - v8, 16, 0);
    v11 = v10 + v9;
    *(_QWORD*)(a1 + 1080) = v10;
    *(_QWORD*)(a1 + 1088) = v10;
    *(_QWORD*)(a1 + 1096) = v10 + v9;
    result = GameRoutine_1a0b950(v10, v8, v9);
    *(_QWORD*)(a1 + 1088) = v11;
  }
  GameData_2174af0 = 0;
  return result;
}

__int64 GameHr_ce5aa0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = GameRoutine_ce5c00();
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 88);
    if (v3 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = GameRoutine_1a09c50(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = *(_QWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 88) = v3;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v7 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7);
    }
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v8 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9);
  }
  return result;
}

__int64 GameHr_ce5c00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 80);
  v2 = *(_QWORD*)(result + 88);
  v3 = result;
  v4 = fminf(*(float*)(result + 24), 0.0);
  *(_BYTE*)(result + 112) = 0;
  for (*(float*)(result + 104) = v4; v2 != v1; v2 -= 16) {
    v5 = *(_QWORD*)(v2 - 8);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = GameRoutine_1a09c50(v5);
    }
  }
  v6 = *(_QWORD*)(v3 + 72);
  *(_QWORD*)(v3 + 88) = v1;
  if (v6 != 0) {
    result = GameRoutine_634d80(*(_QWORD*)(v6 + 8));
  }
  v7 = *(_BYTE*)(v3 + 48);
  *(_QWORD*)(v3 + 72) = 0;
  if ((v7 & 1) != 0) {
    **(_BYTE**)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    if (*(_QWORD*)(v3 + 40) == 0) {
      return result;
    }
  }
  else {
    *(_WORD*)(v3 + 48) = 0;
    if (*(_QWORD*)(v3 + 40) == 0) {
      return result;
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v8 = 56;
  }
  result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8);
  *(_QWORD*)(v3 + 40) = 0;
  *(_DWORD*)(v3 + 32) = 0;
  return result;
}

#pragma GCC visibility pop
