#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int64 (*GameData_1fe7160[])();
extern __int64 (*GameData_1fe7220[])();
extern __int64 (*GameData_1fe7300[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c608[2];
extern __int64* GameData_212d6d0;
extern __int64 GameData_21eea40;
extern _UNKNOWN GameData_2216780;
extern __int64 GameData_2216828;
extern __int64 GameData_2216830;
extern char GameData_2216850;
extern char GameData_2216858;
extern __int64 GameData_2219068;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1070c00(_QWORD, _QWORD);
__int64 GameRoutine_1084940(_QWORD, _QWORD, double);
__int64 GameRoutine_108cfd0(_QWORD);
__n128 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60abc0(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_65a940(_QWORD);
__int64 GameRoutine_667c80(_QWORD);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_a78a90(_QWORD);
__int64 GameRoutine_d71160(__int64**, __int64, __int64, int);
__int64 GameRoutine_e273d0(_QWORD);
__int64 GameRoutine_e28380(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e291a0(_QWORD, _QWORD);
__int64 GameRoutine_e29460(_QWORD, _QWORD);
__int64 GameRoutine_e299e0(_QWORD, _QWORD);
__int64 GameRoutine_e665e0(__int64 result);
__int64 GameRoutine_e7da80(double);
__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 game_character_1084940(__int64 result, char, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void CmdBtlUnit_e7da80(__int64, __int64*, float);
void game_ff7720(unsigned __int8**, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_e7aab0(__int64 a1, char a2);
__int64* CharacterModel_1070c00(__int64, __int64);
__int64* GameHr_e28380(__int64, __int64*, __int64*);
__int64* GameRoutine_e29460_alt1(__int64* result,
                                 __int64) __asm__("GameRoutine_e29460");
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 GameHr_e291a0(__int64*, __int64);
__int64 GameRoutine_108cfd0_alt1(int) __asm__("GameRoutine_108cfd0");
__int64 GameRoutine_e299e0_alt1(__int64,
                                unsigned __int8*) __asm__("GameRoutine_e299e0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_d71160(__int64*, __int64, __int64, int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameHr_e273d0(__int64);
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __attribute__((noreturn))
GameRoutine_a78a90_alt1() __asm__("GameRoutine_a78a90");
void __attribute__((noreturn)) String_60a1d0();
__int64 GameHr_e27700(__int64* a1, const char* a2, unsigned __int64 a3,
                      const char* a4, unsigned __int64 a5, __int64* a6,
                      _DWORD* a7);
void GameHr_e330c0(__int64 a1, unsigned int a2);

__int64 GameHr_e27700(__int64* a1, const char* a2, unsigned __int64 a3,
                      const char* a4, unsigned __int64 a5, __int64* a6,
                      _DWORD* a7)
{
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  unsigned int v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  unsigned __int64 v53;
  const char* v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64* v58;
  bool v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64* v74;
  __int64 v75;
  _QWORD* v76;
  __int64 v77;
  __int64** v78;
  int v79;
  __int64* v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  bool v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  int v88;
  int v89;
  _QWORD* v90;
  _QWORD* v91;
  __int64* v92;
  __int64* v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int8* v98;
  unsigned __int8* v99;
  unsigned __int8* v100;
  unsigned __int8* v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  char v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  char v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64* v149;
  __int64* v150;
  __int64* v151;
  unsigned __int64 v152;
  __int64* v153;
  __int64 v154;
  _QWORD* v155;
  struct {
    __int64 v156;
    unsigned __int64 v157;
    char* v158;
    __int64 v159;
    unsigned __int64 v160;
    __int64 v161;
    __int64 v162;
    unsigned __int64 v163;
    __int64 v164;
    __int64 v165;
    unsigned __int64 v166;
    __int64 v167;
    __int64 v168;
    unsigned __int64 v169;
    __int64 v170;
    __int64 v171;
    _QWORD v172[2];
  } v156_;
  struct {
    __int64 v173;
    unsigned __int64 v174;
    __int64 v175;
    __int64 v176;
    unsigned __int64 v177;
    __int64 v178;
    __int64 v179;
    unsigned __int64 v180;
    __int64 v181;
    __int64 v182;
    unsigned __int64 v183;
    __int64 v184;
    __int64 v185;
    unsigned __int64 v186;
    __int64 v187;
    __int64 v188;
    _QWORD v189[2];
    unsigned __int8 v190;
  } v173_;
  struct {
    __int64* v191;
    __int64* v192;
    __int64* v193;
  } v191_;

  v191_.v192 = nullptr;
  v191_.v193 = nullptr;
  v191_.v191 = nullptr;
  *a7 = 0;
  if (a3 == a5 && memcmp((__int64)a2, (__int64)a4, a3) == 0) {
    v28 = strlen(a2);
    if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_256;
    }
    v29 = v28;
    if (v28 >= 0x17) {
      if ((v28 | 7) == 0x17) {
        v36 = 26;
      }
      else {
        v36 = (v28 | 7) + 1;
      }
      v30 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v36,
                                                  16, 0);
      v156_.v157 = v29;
      v156_.v158 = v30;
      v156_.v156 = v36 | 1;
    }
    else {
      LOBYTE(v156_.v156) = 2 * v28;
      v30 = (char*)&v156_.v156 + 1;
      if (v28 == 0) {
        goto LABEL_52;
      }
    }
    memmove((__int64)v30, (__int64)a2, v29);
  LABEL_52:
    v30[v29] = 0;
    GameRoutine_7a8220_alt1((__int64*)&v191_.v191, &v156_.v156);
    if ((v156_.v156 & 1) != 0 && v156_.v158 != nullptr) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v156_.v158);
    }
    goto LABEL_63;
  }
  v15 = a1[28];
  v14 = a1[29];
  v16 = v15;
  if (v15 != v14) {
    v16 = a1[28];
    while (1) {
      v17 = *(unsigned __int8*)(v16 + 56);
      v18 = *(_QWORD*)(v16 + 64);
      if ((v17 & 1) == 0) {
        v18 = v17 >> 1;
      }
      if (a3 == v18) {
        v19 = (v17 & 1) != 0 ? *(_QWORD*)(v16 + 72) : v16 + 57;
        if (memcmp((__int64)a2, v19, a3) == 0) {
          break;
        }
      }
      v16 += 80;
      if (v16 == v14) {
        v20 = 0;
        if (v15 != v14) {
          goto LABEL_21;
        }
        goto LABEL_28;
      }
    }
  }
  if (v16 == v14) {
    v20 = 0;
  }
  else {
    v20 = v16;
  }
  if (v15 != v14) {
    while (1) {
    LABEL_21:
      v21 = *(unsigned __int8*)(v15 + 56);
      v22 = *(_QWORD*)(v15 + 64);
      if ((v21 & 1) == 0) {
        v22 = v21 >> 1;
      }
      if (a5 == v22) {
        v23 = (v21 & 1) != 0 ? *(_QWORD*)(v15 + 72) : v15 + 57;
        if (memcmp((__int64)a4, v23, a5) == 0) {
          break;
        }
      }
      v15 += 80;
      if (v15 == v14) {
        goto LABEL_63;
      }
    }
  }
LABEL_28:
  if (v20 != 0 && v15 != v14 && v15 != 0) {
    game_d71160(a1 + 4, v20, v15, 0);
    v24 = strlen(a4);
    if (v24 < 0xFFFFFFFFFFFFFFF7LL) {
      v25 = v24;
      v26 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v24 >= 0x17) {
        if ((v24 | 7) == 0x17) {
          v31 = 26;
        }
        else {
          v31 = (v24 | 7) + 1;
        }
        v27 = (char*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v31, 16, 0);
        v156_.v157 = v25;
        v156_.v158 = v27;
        v156_.v156 = v31 | 1;
      }
      else {
        LOBYTE(v156_.v156) = 2 * v24;
        v27 = (char*)&v156_.v156 + 1;
        if (v24 == 0) {
        LABEL_44:
          v32 = *v26;
          v27[v25] = 0;
          v33 = (__int64*)fw_memory_HeapManager_Allocate(v32, 24, 16, 0);
          v34 = v156_.v157;
          v191_.v191 = v33;
          v191_.v192 = v33 + 3;
          v191_.v193 = v33 + 3;
          *v33 = v156_.v156;
          v33[1] = v34;
          v33[2] = (__int64)v156_.v158;
          v35 = *(_QWORD*)(v15 + 8);
          if (v35 != 0) {
            do {
              GameHr_e28380((__int64)&v191_.v191, v191_.v191,
                            (__int64*)(v35 + 56));
              v35 = *(_QWORD*)(v35 + 8);
            } while (v35 != 0);
            *a7 = *(_DWORD*)v15;
          }
          else {
            v38 = *(_BYTE*)v33;
            *a7 = *(_DWORD*)v15;
            if ((v38 & 1) != 0) {
              v39 = v33[2];
              if (v39 != 0) {
                v40 = *v26;
                v41 = v33;
                v42 = 128;
                if (*(_QWORD*)(v40 + 200) == 0) {
                  v42 = 56;
                }
                nn_mem_StandardAllocator_Free(v40 + v42, v39);
                v33 = v41;
              }
            }
            v191_.v192 = v33;
          }
          goto LABEL_63;
        }
      }
      memmove((__int64)v27, (__int64)a4, v25);
      goto LABEL_44;
    }
  LABEL_256:
    String_60a1d0();
  }
LABEL_63:
  v43 = v191_.v191;
  v149 = v191_.v192;
  v45 = *a6;
  v44 = a6[1];
  if (*a6 != v44) {
    do {
      v46 = v44 - 296;
      GameHr_e273d0(v44 - 152);
      GameHr_e273d0(v46);
      v44 = v46;
    } while (v46 != v45);
  }
  v47 = v149;
  a6[1] = v45;
  v48 = 0xAAAAAAAAAAAAAAABLL * (v149 - v43);
  if (v48 == 0) {
    v49 = 0;
    if (v43 == nullptr) {
      return v49;
    }
    goto LABEL_70;
  }
  v152 = v48 - 1;
  if (v48 != 1) {
    v50 = 0;
    v155 = a1 + 26;
    v51 = (__int64*)fw_memory_g_heap_manager_ptr;
    v150 = a6;
    v151 = v43;
    v153 = a1;
    while (1) {
      v52 = &v43[3 * v50];
      v53 = *((unsigned __int8*)v52 + 24);
      if ((*(_BYTE*)v52 & 1) != 0) {
        v54 = (const char*)v52[2];
      }
      else {
        v54 = (char*)v52 + 1;
      }
      v55 = (__int64)v52 + 25;
      v58 = v52 + 4;
      v56 = v52[4];
      v57 = v58[1];
      v59 = (v53 & 1) == 0;
      v60 = v53 >> 1;
      if (v59) {
        v61 = v55;
      }
      else {
        v61 = v57;
      }
      if (v59) {
        v62 = v60;
      }
      else {
        v62 = v56;
      }
      v63 = strlen(v54);
      if (v63 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_256;
      }
      v64 = v63;
      if (v63 >= 0x17) {
        if ((v63 | 7) == 0x17) {
          v66 = 26;
        }
        else {
          v66 = (v63 | 7) + 1;
        }
        v67 = fw_memory_HeapManager_Allocate(*v51, v66, 16, 0);
        v68 = (__int64*)(v66 | 1);
        a1 = v153;
        v65 = (char*)v67;
        v191_.v192 = (__int64*)v64;
        v191_.v193 = (__int64*)v67;
        v191_.v191 = v68;
      }
      else {
        v65 = (char*)&v191_.v191 + 1;
        LOBYTE(v191_.v191) = 2 * v63;
        if (v63 == 0) {
          goto LABEL_92;
        }
      }
      memmove((__int64)v65, (__int64)v54, v64);
    LABEL_92:
      v65[v64] = 0;
      v69 = GameRoutine_e299e0_alt1((__int64)(a1 + 25),
                                    (unsigned __int8*)&v191_.v191);
      v51 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (((unsigned __int8)v191_.v191 & 1) != 0 && v191_.v193 != nullptr) {
        v70 = v69;
        v71 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v71 = 128;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v71, (__int64)v191_.v193);
        v69 = v70;
      }
      if (v155 == (_QWORD*)v69) {
        memset((__int64)&v156_.v156, 0, 0x128u);
        v43 = v151;
        goto LABEL_157;
      }
      v72 = strlen(v54);
      if (v72 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_256;
      }
      v73 = v72;
      v154 = v50;
      if (v72 >= 0x17) {
        if ((v72 | 7) == 0x17) {
          v75 = 26;
        }
        else {
          v75 = (v72 | 7) + 1;
        }
        v74 = (__int64*)fw_memory_HeapManager_Allocate(*v51, v75, 16, 0);
        v191_.v192 = (__int64*)v73;
        v191_.v193 = v74;
        v191_.v191 = (__int64*)(v75 | 1);
      }
      else {
        v74 = (__int64*)((char*)&v191_.v191 + 1);
        LOBYTE(v191_.v191) = 2 * v72;
        if (v72 == 0) {
          goto LABEL_108;
        }
      }
      memmove((__int64)v74, (__int64)v54, v73);
    LABEL_108:
      v76 = v155;
      *((_BYTE*)v74 + v73) = 0;
      v77 = *v155;
      v78 = (__int64**)v155;
      if (*v155 == 0) {
      LABEL_135:
        v90 = v76;
        v91 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
        v92 = v191_.v191;
        v93 = v191_.v192;
        a1 = v153;
        v76 = v91;
        v94 = v91;
        v191_.v191 = nullptr;
        v191_.v192 = nullptr;
        v91[8] = 0;
        v91[9] = 0;
        *v91 = 0;
        v91[1] = 0;
        v91[2] = v90;
        v91[4] = v92;
        v91[5] = v93;
        v95 = (__int64)v191_.v193;
        v191_.v193 = nullptr;
        a6 = v150;
        v43 = v151;
        v91[6] = v95;
        v91[7] = 0;
        *v78 = v91;
        v96 = *(_QWORD*)v153[25];
        if (v96 != 0) {
          v153[25] = v96;
          v94 = *v78;
        }
        fw_containers_BalanceAfterInsert((__int64*)v153[26], v94);
        ++v153[27];
        v79 = (unsigned __int8)v191_.v191 & 1;
        goto LABEL_139;
      }
      v79 = (unsigned __int8)v191_.v191 & 1;
      if (v79 != 0) {
        v80 = v191_.v193;
      }
      else {
        v80 = (__int64*)((char*)&v191_.v191 + 1);
      }
      if (((unsigned __int8)v191_.v191 & 1) != 0) {
        v81 = (unsigned __int64)v191_.v192;
      }
      else {
        v81 = (unsigned __int64)(unsigned __int8)v191_.v191 >> 1;
      }
      while (1) {
        while (1) {
          v76 = (_QWORD*)v77;
          v82 = *(unsigned __int8*)(v77 + 32);
          v83 = (v82 & 1) == 0;
          v84 = v82 >> 1;
          v85 = v83 ? v84 : v76[5];
          v86 = v83 ? (__int64)v76 + 33 : v76[6];
          v87 = v85 >= v81 ? v81 : v85;
          v88 = memcmp((__int64)v80, v86, v87);
          if (v88 != 0) {
            break;
          }
          if (v81 >= v85) {
            goto LABEL_129;
          }
        LABEL_115:
          v77 = *v76;
          v78 = (__int64**)v76;
          if (*v76 == 0) {
            goto LABEL_135;
          }
        }
        if (v88 < 0) {
          goto LABEL_115;
        }
      LABEL_129:
        v89 = memcmp(v86, (__int64)v80, v87);
        if (v89 == 0) {
          break;
        }
        if ((v89 & 0x80000000) == 0) {
          goto LABEL_138;
        }
      LABEL_133:
        v77 = v76[1];
        if (v77 == 0) {
          v78 = (__int64**)(v76 + 1);
          goto LABEL_135;
        }
      }
      if (v85 < v81) {
        goto LABEL_133;
      }
    LABEL_138:
      a6 = v150;
      v43 = v151;
      a1 = v153;
    LABEL_139:
      v51 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v79 != 0 && v191_.v193 != nullptr) {
        v97 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v97 = 128;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v97, (__int64)v191_.v193);
      }
      v98 = (unsigned __int8*)v76[7];
      v99 = (unsigned __int8*)v76[8];
      v50 = v154;
      if (v98 == v99) {
      LABEL_156:
        memset((__int64)&v156_.v156, 0, 0x128u);
      }
      else {
        v100 = v98 + 144;
        while (1) {
          if (v100[144] == 1) {
            v102 = *v100;
            v103 = *((_QWORD*)v100 + 1);
            if ((v102 & 1) == 0) {
              v103 = v102 >> 1;
            }
            if (v62 == v103) {
              v104 =
                  (v102 & 1) != 0 ? *((_QWORD*)v100 + 2) : (__int64)(v100 + 1);
              if (memcmp(v61, v104, v62) == 0) {
                break;
              }
            }
          }
          v101 = v100 + 152;
          v100 += 296;
          if (v101 == v99) {
            goto LABEL_156;
          }
        }
        GameRoutine_e29460_alt1(&v156_.v156, (__int64)(v100 - 144));
        GameRoutine_e29460_alt1(&v173_.v173, (__int64)v100);
        v173_.v190 = v100[144];
      }
    LABEL_157:
      v105 = a6[1];
      if (v105 >= a6[2]) {
        v108 = GameHr_e291a0(a6, (__int64)&v156_.v156);
      }
      else {
        if ((v156_.v156 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)a6[1], (__int64)v156_.v158,
                                        v156_.v157);
          if ((v156_.v159 & 1) == 0) {
            goto LABEL_166;
          }
        LABEL_160:
          fw_text_String_CopyTerminated((__int64*)(v105 + 24), v156_.v161,
                                        v156_.v160);
          if ((v156_.v162 & 1) != 0) {
            goto LABEL_161;
          }
        LABEL_167:
          v111 = v156_.v162;
          v112 = v156_.v164;
          *(_QWORD*)(v105 + 56) = v156_.v163;
          *(_QWORD*)(v105 + 64) = v112;
          *(_QWORD*)(v105 + 48) = v111;
          if ((v156_.v165 & 1) == 0) {
            goto LABEL_168;
          }
        LABEL_162:
          fw_text_String_CopyTerminated((__int64*)(v105 + 72), v156_.v167,
                                        v156_.v166);
          if ((v156_.v168 & 1) != 0) {
            goto LABEL_163;
          }
        LABEL_169:
          v115 = v156_.v168;
          v116 = v156_.v170;
          *(_QWORD*)(v105 + 104) = v156_.v169;
          *(_QWORD*)(v105 + 112) = v116;
          *(_QWORD*)(v105 + 96) = v115;
        }
        else {
          v106 = v156_.v156;
          v107 = (__int64)v156_.v158;
          *(_QWORD*)(v105 + 8) = v156_.v157;
          *(_QWORD*)(v105 + 16) = v107;
          *(_QWORD*)v105 = v106;
          if ((v156_.v159 & 1) != 0) {
            goto LABEL_160;
          }
        LABEL_166:
          v109 = v156_.v159;
          v110 = v156_.v161;
          *(_QWORD*)(v105 + 32) = v156_.v160;
          *(_QWORD*)(v105 + 40) = v110;
          *(_QWORD*)(v105 + 24) = v109;
          if ((v156_.v162 & 1) == 0) {
            goto LABEL_167;
          }
        LABEL_161:
          fw_text_String_CopyTerminated((__int64*)(v105 + 48), v156_.v164,
                                        v156_.v163);
          if ((v156_.v165 & 1) != 0) {
            goto LABEL_162;
          }
        LABEL_168:
          v113 = v156_.v165;
          v114 = v156_.v167;
          *(_QWORD*)(v105 + 80) = v156_.v166;
          *(_QWORD*)(v105 + 88) = v114;
          *(_QWORD*)(v105 + 72) = v113;
          if ((v156_.v168 & 1) == 0) {
            goto LABEL_169;
          }
        LABEL_163:
          fw_text_String_CopyTerminated((__int64*)(v105 + 96), v156_.v170,
                                        v156_.v169);
        }
        v117 = v156_.v171;
        v118 = v156_.v172[0];
        *(_DWORD*)(v105 + 135) = *(_DWORD*)((char*)v156_.v172 + 7);
        *(_QWORD*)(v105 + 120) = v117;
        *(_QWORD*)(v105 + 128) = v118;
        if ((v173_.v173 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)(v105 + 144), v173_.v175,
                                        v173_.v174);
          if ((v173_.v176 & 1) == 0) {
            goto LABEL_177;
          }
        LABEL_172:
          fw_text_String_CopyTerminated((__int64*)(v105 + 168), v173_.v178,
                                        v173_.v177);
          if ((v173_.v179 & 1) != 0) {
            goto LABEL_173;
          }
        LABEL_178:
          v123 = v173_.v179;
          v124 = v173_.v181;
          *(_QWORD*)(v105 + 200) = v173_.v180;
          *(_QWORD*)(v105 + 208) = v124;
          *(_QWORD*)(v105 + 192) = v123;
          if ((v173_.v182 & 1) == 0) {
            goto LABEL_179;
          }
        LABEL_174:
          fw_text_String_CopyTerminated((__int64*)(v105 + 216), v173_.v184,
                                        v173_.v183);
          if ((v173_.v185 & 1) != 0) {
            goto LABEL_175;
          }
        LABEL_180:
          v127 = v173_.v185;
          v128 = v173_.v187;
          *(_QWORD*)(v105 + 248) = v173_.v186;
          *(_QWORD*)(v105 + 256) = v128;
          *(_QWORD*)(v105 + 240) = v127;
        }
        else {
          v119 = v173_.v173;
          v120 = v173_.v175;
          *(_QWORD*)(v105 + 152) = v173_.v174;
          *(_QWORD*)(v105 + 160) = v120;
          *(_QWORD*)(v105 + 144) = v119;
          if ((v173_.v176 & 1) != 0) {
            goto LABEL_172;
          }
        LABEL_177:
          v121 = v173_.v176;
          v122 = v173_.v178;
          *(_QWORD*)(v105 + 176) = v173_.v177;
          *(_QWORD*)(v105 + 184) = v122;
          *(_QWORD*)(v105 + 168) = v121;
          if ((v173_.v179 & 1) == 0) {
            goto LABEL_178;
          }
        LABEL_173:
          fw_text_String_CopyTerminated((__int64*)(v105 + 192), v173_.v181,
                                        v173_.v180);
          if ((v173_.v182 & 1) != 0) {
            goto LABEL_174;
          }
        LABEL_179:
          v125 = v173_.v182;
          v126 = v173_.v184;
          *(_QWORD*)(v105 + 224) = v173_.v183;
          *(_QWORD*)(v105 + 232) = v126;
          *(_QWORD*)(v105 + 216) = v125;
          if ((v173_.v185 & 1) == 0) {
            goto LABEL_180;
          }
        LABEL_175:
          fw_text_String_CopyTerminated((__int64*)(v105 + 240), v173_.v187,
                                        v173_.v186);
        }
        v108 = v105 + 296;
        v129 = v173_.v188;
        v130 = v173_.v189[0];
        *(_DWORD*)(v105 + 279) = *(_DWORD*)((char*)v173_.v189 + 7);
        *(_QWORD*)(v105 + 264) = v129;
        *(_QWORD*)(v105 + 272) = v130;
        *(_BYTE*)(v105 + 288) = v173_.v190;
      }
      v131 = v173_.v185;
      a6[1] = v108;
      if ((v131 & 1) != 0 && v173_.v187 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v132 = 128;
        }
        else {
          v132 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v132, v173_.v187);
      }
      if ((v173_.v182 & 1) != 0 && v173_.v184 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v133 = 128;
        }
        else {
          v133 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v133, v173_.v184);
      }
      if ((v173_.v179 & 1) != 0 && v173_.v181 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v134 = 128;
        }
        else {
          v134 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v134, v173_.v181);
      }
      if ((v173_.v176 & 1) != 0 && v173_.v178 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v135 = 128;
        }
        else {
          v135 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v135, v173_.v178);
      }
      if ((v173_.v173 & 1) != 0 && v173_.v175 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v136 = 128;
        }
        else {
          v136 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v136, v173_.v175);
      }
      if ((v156_.v168 & 1) != 0 && v156_.v170 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v137 = 128;
        }
        else {
          v137 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v137, v156_.v170);
      }
      if ((v156_.v165 & 1) != 0 && v156_.v167 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v138 = 128;
        }
        else {
          v138 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v138, v156_.v167);
      }
      if ((v156_.v162 & 1) != 0 && v156_.v164 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v139 = 128;
        }
        else {
          v139 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v139, v156_.v164);
      }
      if ((v156_.v159 & 1) != 0 && v156_.v161 != 0) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v140 = 128;
        }
        else {
          v140 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v140, v156_.v161);
      }
      if ((v156_.v156 & 1) != 0 && v156_.v158 != nullptr) {
        if (*(_QWORD*)(*v51 + 200) != 0) {
          v141 = 128;
        }
        else {
          v141 = 56;
        }
        nn_mem_StandardAllocator_Free(*v51 + v141, (__int64)v156_.v158);
      }
      if (++v50 == v152) {
        v47 = v149;
        v49 = 2;
        if (v43 != v149) {
          goto LABEL_243;
        }
        goto LABEL_251;
      }
    }
  }
  v49 = 1;
  if (v43 == nullptr) {
    return v49;
  }
LABEL_70:
  if (v43 != v149) {
  LABEL_243:
    v142 = v47;
    v143 = fw_memory_g_heap_manager_ptr;
    do {
      v144 = *((_BYTE*)v142 - 24);
      v142 -= 3;
      if ((v144 & 1) != 0) {
        v145 = *(v47 - 1);
        if (v145 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v143 + 200LL) != 0) {
            v146 = 128;
          }
          else {
            v146 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v143 + v146, v145);
        }
      }
      v47 = v142;
    } while (v142 != v43);
  }
LABEL_251:
  if (v43 != nullptr) {
    v147 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v147 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v147,
                                  (__int64)v43);
  }
  return v49;
}

void GameHr_e330c0(__int64 a1, unsigned int a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v4 = GameRoutine_108cfd0_alt1(a2);
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 176) + 56LL);
  v6 = *(_QWORD*)(v5 + 392);
  v7 = *(_QWORD*)(v5 + 400);
  if ((v4 & 1) != 0) {
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    v8 = CharacterModel_1070c00(*(_QWORD*)(v6 + 11608), a2);
    v10 = v8[5];
    v9 = v8[6];
    v11 = v9 - v10;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v9 == v10) {
      v13 = 0;
      if (v7 == 0) {
      LABEL_14:
        if (v13 != 0) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, v13);
        }
        return;
      }
    }
    else {
      if ((v11 & 0x8000000000000000LL) != 0) {
        GameRoutine_a78a90_alt1();
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v9 - v10, 16, 0);
      memcpy(v13, v10, v11);
      if (v7 == 0) {
        goto LABEL_14;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    goto LABEL_14;
  }
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
}

__int64 GameHr_e66fa0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;

  *(_QWORD*)a1 = GameData_1fe7160;
  *(_QWORD*)(a1 + 208) = GameData_1fe7220;
  v2 = a1 + 208;
  GameRoutine_e665e0(a1);
  if (GameData_2216858 == 1) {
    if (GameData_2216850 == 1 && GameData_2216828 != 0) {
      GameData_2216830 = GameData_2216828;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v3 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, GameData_2216828);
    }
    GameRoutine_667c80(&GameData_2216780);
    GameData_2216858 = 0;
  }
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v5 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, v4);
    }
  }
  v9 = v2;
  *(_QWORD*)(a1 + 208) = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v9);
  v6 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fe7300;
  if (v6 == (_QWORD*)(a1 + 160)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_18;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_18:
  GameData_2219068 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  GameRoutine_65a940(a1);
  return GameRoutine_658c00(a1 + 88);
}

void GameHr_e7aab0(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  float v25;
  float v26;
  bool v27;
  float v28;
  float v29;
  __int64 v30;
  struct {
    __int64 v31[2];
    __int64 v32;
  } v31_;

  v2 = *(_QWORD*)(a1 + 216);
  if ((a2 & 1) != 0) {
    v3 = *(_QWORD*)(v2 + 32);
    *(_DWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 24) = 0;
    *(_QWORD*)(v2 + 32) = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v4 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
      a1 = v4;
    }
    v5 = *(__int64**)(*(_QWORD*)(a1 + 216) + 40LL);
    v6 = *((_DWORD*)v5 + 5);
    *((_DWORD*)v5 + 5) = v6 | 8;
    if (v6 != (v6 | 8)) {
      v7 = *v5;
      v8 = *(_QWORD*)(v7 + 8);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v7 + 16);
        v10 = *(_QWORD*)(v8 + 8) == -1 || v9 == 0;
        if (!v10 && *(_QWORD*)(v8 + 8) != -1 && (*(_BYTE*)(v7 + 61) & 1) == 0 &&
            *(_DWORD*)(v7 + 64) != 1 && (*(_BYTE*)(v9 + 342) & 1) != 0) {
          v11 = a1;
          game_character_1084940(v9, 0, 0x0.0p+0f);
          a1 = v11;
          *(_BYTE*)(*(_QWORD*)(v9 + 8) + 289LL) = 0;
        }
      }
    }
    if (*(_DWORD*)(a1 + 200) == 2) {
      v12 = (_QWORD*)a1;
      v31_.v31[0] = (__int64)"MindLayer";
      v31_.v31[1] = 9;
      game_ff7720((unsigned __int8**)(a1 + 344), v31_.v31);
      v13 = v12[27];
      v14 = v12[28];
      a1 = (__int64)v12;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v13 != 0) {
        *(_BYTE*)(v13 + 60) = v12[44] != v12[43];
      }
      if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
        a1 = (__int64)v12;
      }
      *(_DWORD*)(a1 + 200) = 0;
    }
  }
  else {
    v15 = *(_QWORD*)(v2 + 32);
    *(_QWORD*)(v2 + 24) = 0;
    *(_QWORD*)(v2 + 32) = 0;
    *(_DWORD*)(v2 + 56) = 2;
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v16 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
      a1 = v16;
    }
    v17 = *(__int64**)(*(_QWORD*)(a1 + 216) + 40LL);
    v18 = *((_DWORD*)v17 + 5);
    v19 = v18 & 0xFFFFFFF7;
    *((_DWORD*)v17 + 5) = v18 & 0xFFFFFFF7;
    if (v18 != (v18 & 0xFFFFFFF7)) {
      v20 = *v17;
      v21 = *(_QWORD*)(*v17 + 8);
      if (v21 != 0) {
        v22 = *(_QWORD*)(v20 + 16);
        v23 = *(_QWORD*)(v21 + 8) == -1 || v22 == 0;
        if (!v23 && *(_QWORD*)(v21 + 8) != -1 &&
            (*(_BYTE*)(v20 + 61) & 1) == 0 && *(_DWORD*)(v20 + 64) != 1 &&
            (*(_BYTE*)(v22 + 342) & 1) != 0) {
          v24 = a1;
          v25 = *((float*)v17 + 9) * *((float*)v17 + 2);
          v26 = fminf(fmaxf(v25, 0x0.0p+0f), 0x1.0000000000000p+0f);
          v27 = v25 >= 0x1.0000000000000p+0f || v25 <= 0x0.0p+0f;
          v28 = (float)(v26 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
          if (!v27) {
            v25 = v28;
          }
          if (v19 != 0) {
            v29 = 0x0.0p+0f;
          }
          else {
            v29 = v25;
          }
          game_character_1084940(v22, 0, v29);
          a1 = v24;
          *(_BYTE*)(*(_QWORD*)(v22 + 8) + 289LL) = v29 > 0x0.0p+0f;
        }
      }
    }
  }
  LOWORD(v31_.v31[0]) = 0;
  CmdBtlUnit_e7da80(a1, v31_.v31, 0x0.0p+0f);
  if ((v31_.v31[0] & 1) != 0 && v31_.v32 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v31_.v32);
  }
}

#pragma GCC visibility pop
