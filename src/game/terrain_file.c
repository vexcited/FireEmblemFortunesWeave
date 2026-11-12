#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21c9b48;
extern __int64 GameData_21c9b50;
extern __int64 GameData_21c9b78;
extern __int64 GameData_21c9b80;
extern __int64 GameData_21c9b88;
void TerrainFile_Unknown5();
void TerrainFile_6900b0();
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 Resources_66bfc0(unsigned __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
extern _UNKNOWN* GameData_21c9b68;
extern _UNKNOWN GameData_1a8534e;
extern _UNKNOWN GameData_1af11c7;
extern _UNKNOWN GameData_1af4ee0;
extern __int64 GameData_21c9b58;
extern __int64 GameData_21c9b60;
extern __int64 GameData_21c9b70;
extern __int64 GameData_21c9bd0;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_68c910(__int64, _QWORD*);
void GameRoutine_696f40(__int64, unsigned int, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_693e60();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void TerrainFile_Unknown4(_QWORD* a1);

void TerrainFile_Unknown4(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int** v12;
  unsigned int** v13;
  unsigned int* v14;
  unsigned int v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  _UNKNOWN** v55;
  unsigned __int64 v56;
  bool v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  unsigned __int64* v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64** v74;
  __int64* v75;
  __int64* v76;
  __int64** v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 i;
  __int64 v82;
  unsigned __int64 v83;
  _QWORD* v84;
  unsigned __int64 v85;
  _UNKNOWN** v86;
  unsigned __int64 v87;
  bool v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  unsigned __int64* v100;
  _QWORD* v101;
  _QWORD* v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  __int64** v106;
  __int64* v107;
  __int64* v108;
  __int64** v109;
  unsigned __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64* v113;
  _QWORD* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  __int64* v118;
  __int64 v119;
  __int64* v120;
  __int64 v121;
  __int64** v122;
  __int64 v123;
  __int64** v124;
  __int64* v125;
  __int64* v126;

  if (a1[19] != 0) {
    v2 = (_QWORD*)a1[18];
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, (__int64)v2);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = a1[17];
    a1[18] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v8) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 48) = 0;
          v10 = a1[16] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(a1[16] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    a1[19] = 0;
  }
  v12 = (unsigned int**)a1[8];
  v13 = (unsigned int**)a1[9];
  while (v12 != v13) {
    v14 = *v12;
    v15 = **v12;
    if (v15 != 0) {
      GameRoutine_696f40((__int64)(a1 + 1), v15, (__int64)*v12);
    }
    v16 = Resources_66bfc0((unsigned __int64*)v14);
    if (v16 != 0) {
      GameRoutine_696f40((__int64)(a1 + 1), v16, (__int64)v14);
    }
    ++v12;
  }
  v17 = game_HashString((__int64)&GameData_1af4ee0);
  if (v17 == 0) {
    goto LABEL_48;
  }
  v18 = *(_QWORD*)(GameData_21c9bd0 + 96);
  if (v18 == 0 || *(_QWORD*)(GameData_21c9bd0 + 112) == 0) {
    goto LABEL_48;
  }
  v20 = v18 - 1;
  if ((v18 & (v18 - 1)) != 0) {
    v21 = v17;
    if (v17 >= v18) {
      v21 = v17 % v18;
    }
  }
  else {
    v21 = v20 & v17;
  }
  v22 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v21);
  if (v22 == nullptr || (v23 = (_QWORD*)*v22) == nullptr) {
  LABEL_48:
    v25 = 0;
    goto LABEL_49;
  }
  if ((v18 & v20) == 0) {
    while (1) {
      v26 = v23[1];
      if (v26 == v17) {
        if (v23[2] == v17) {
          goto LABEL_227;
        }
      }
      else if ((v26 & v20) != v21) {
        goto LABEL_48;
      }
      v23 = (_QWORD*)*v23;
      v25 = 0;
      if (v23 == nullptr) {
        goto LABEL_49;
      }
    }
  }
  while (1) {
    v24 = v23[1];
    if (v24 == v17) {
      break;
    }
    if (v24 >= v18) {
      v24 %= v18;
    }
    if (v24 != v21) {
      goto LABEL_48;
    }
  LABEL_38:
    v23 = (_QWORD*)*v23;
    if (v23 == nullptr) {
      goto LABEL_48;
    }
  }
  if (v23[2] != v17) {
    goto LABEL_38;
  }
LABEL_227:
  v25 = v23[3];
LABEL_49:
  GameData_21c9b78 = v25;
  v27 = game_HashString((__int64)&GameData_1a8534e);
  if (v27 == 0) {
    goto LABEL_73;
  }
  v28 = *(_QWORD*)(GameData_21c9bd0 + 96);
  if (v28 == 0 || *(_QWORD*)(GameData_21c9bd0 + 112) == 0) {
    goto LABEL_73;
  }
  v30 = v28 - 1;
  if ((v28 & (v28 - 1)) != 0) {
    v31 = v27;
    if (v27 >= v28) {
      v31 = v27 % v28;
    }
  }
  else {
    v31 = v30 & v27;
  }
  v32 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v31);
  if (v32 == nullptr || (v33 = (_QWORD*)*v32) == nullptr) {
  LABEL_73:
    v35 = 0;
    goto LABEL_74;
  }
  if ((v28 & v30) == 0) {
    while (1) {
      v36 = v33[1];
      if (v36 == v27) {
        if (v33[2] == v27) {
          goto LABEL_228;
        }
      }
      else if ((v36 & v30) != v31) {
        goto LABEL_73;
      }
      v33 = (_QWORD*)*v33;
      v35 = 0;
      if (v33 == nullptr) {
        goto LABEL_74;
      }
    }
  }
  while (2) {
    v34 = v33[1];
    if (v34 != v27) {
      if (v34 >= v28) {
        v34 %= v28;
      }
      if (v34 != v31) {
        goto LABEL_73;
      }
    }
    else if (v33[2] == v27) {
      break;
    }
    v33 = (_QWORD*)*v33;
    if (v33 == nullptr) {
      goto LABEL_73;
    }
    continue;
  }
LABEL_228:
  v35 = v33[3];
LABEL_74:
  GameData_21c9b80 = v35;
  v37 = game_HashString((__int64)&GameData_1af11c7);
  if (v37 == 0) {
    goto LABEL_98;
  }
  v38 = *(_QWORD*)(GameData_21c9bd0 + 96);
  if (v38 == 0 || *(_QWORD*)(GameData_21c9bd0 + 112) == 0) {
    goto LABEL_98;
  }
  v40 = v38 - 1;
  if ((v38 & (v38 - 1)) != 0) {
    v41 = v37;
    if (v37 >= v38) {
      v41 = v37 % v38;
    }
  }
  else {
    v41 = v40 & v37;
  }
  v42 = *(_QWORD**)(*(_QWORD*)(GameData_21c9bd0 + 88) + 8 * v41);
  if (v42 == nullptr || (v43 = (_QWORD*)*v42) == nullptr) {
  LABEL_98:
    v45 = 0;
    goto LABEL_99;
  }
  if ((v38 & v40) == 0) {
    while (1) {
      v46 = v43[1];
      if (v46 == v37) {
        if (v43[2] == v37) {
          goto LABEL_229;
        }
      }
      else if ((v46 & v40) != v41) {
        goto LABEL_98;
      }
      v43 = (_QWORD*)*v43;
      v45 = 0;
      if (v43 == nullptr) {
        goto LABEL_99;
      }
    }
  }
  while (2) {
    v44 = v43[1];
    if (v44 != v37) {
      if (v44 >= v38) {
        v44 %= v38;
      }
      if (v44 != v41) {
        goto LABEL_98;
      }
    }
    else if (v43[2] == v37) {
      break;
    }
    v43 = (_QWORD*)*v43;
    if (v43 == nullptr) {
      goto LABEL_98;
    }
    continue;
  }
LABEL_229:
  v45 = v43[3];
LABEL_99:
  v47 = &GameData_21c9b48;
  v49 = *(__int64**)(GameData_21c9bd0 + 64);
  v48 = *(__int64**)(GameData_21c9bd0 + 72);
  GameData_21c9b88 = v45;
  v125 = v48;
  GameData_21c9b50 = GameData_21c9b48;
  if (v49 != v48) {
    do {
      v50 = *v49;
      v51 = *(_QWORD*)(*v49 + 392);
      v52 = game_HashString(v51);
      if (v52 != 0) {
        v53 = v52;
        v54 = GameData_21c9b68;
        if (GameData_21c9b68 == nullptr) {
          goto LABEL_114;
        }
        v55 = &GameData_21c9b68;
        do {
          v56 = v54[4];
          v57 = v56 >= v52;
          v58 = v56 < v52;
          if (v57) {
            v55 = (_UNKNOWN**)v54;
          }
          v54 = (_QWORD*)v54[v58];
        } while (v54 != nullptr);
        if (v55 == &GameData_21c9b68 || v52 < (unsigned __int64)v55[4]) {
        LABEL_114:
          v59 = GameData_21c9b50;
          if (GameData_21c9b50 >= (unsigned __int64)GameData_21c9b58) {
            v61 = GameData_21c9b50 - GameData_21c9b48;
            v62 = ((GameData_21c9b50 - GameData_21c9b48) >> 4) + 1;
            if (v62 >> 60 != 0) {
            LABEL_231:
              GameRoutine_693e60();
            }
            v63 = GameData_21c9b58 - GameData_21c9b48;
            if ((GameData_21c9b58 - GameData_21c9b48) >> 3 > v62) {
              v62 = v63 >> 3;
            }
            if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFF0LL) {
              v64 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v64 = v62;
            }
            if (v64 >> 60 != 0) {
            LABEL_230:
              GameRoutine_60a210();
            }
            v65 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v64, 16, 0);
            v66 = *v47;
            v67 = (_QWORD*)v47[1];
            v68 = (unsigned __int64*)(v65 + v61);
            *v68 = v53;
            v68[1] = v51;
            if ((_QWORD*)v66 != v67) {
              v69 = (_QWORD*)v66;
              v70 = (_QWORD*)(v65 + v61 + v66 - (_QWORD)v67);
              do {
                *v70 = *v69;
                v71 = v69[1];
                v69 += 2;
                v70[1] = v71;
                v70 += 2;
              } while (v69 != v67);
            }
            v60 = (__int64)(v68 + 2);
            *v47 = v65 + v61 + v66 - (_QWORD)v67;
            v47[1] = (__int64)(v68 + 2);
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47) =
                v65 + 16 * v64;
            if (v66 != 0) {
              v72 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v72 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v66);
            }
          }
          else {
            *(_QWORD*)GameData_21c9b50 = v52;
            *(_QWORD*)(v59 + 8) = v51;
            v60 = v59 + 16;
          }
          GameData_21c9b50 = v60;
          v73 = (__int64*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
          v74 = (__int64**)&GameData_21c9b68;
          v75 = (__int64*)GameData_21c9b68;
          v76 = v73;
          v73[4] = v53;
          if (v75 != nullptr) {
            while (1) {
              while (1) {
                v78 = v75[4];
                v77 = (__int64**)v75;
                if (v53 >= v78) {
                  break;
                }
                v75 = (__int64*)*v75;
                v74 = v77;
                if (*v77 == nullptr) {
                  goto LABEL_137;
                }
              }
              if (v78 >= v53) {
                break;
              }
              v75 = (__int64*)v75[1];
              if (v75 == nullptr) {
                v74 = v77 + 1;
                goto LABEL_137;
              }
            }
            v79 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v79 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, (__int64)v73);
          }
          else {
            v77 = (__int64**)&GameData_21c9b68;
          LABEL_137:
            *v73 = 0;
            v73[1] = 0;
            v73[2] = (__int64)v77;
            *v74 = v73;
            if (*(_QWORD*)GameData_21c9b60 != 0) {
              GameData_21c9b60 = *(_QWORD*)GameData_21c9b60;
              v76 = *v74;
            }
            fw_containers_BalanceAfterInsert((__int64*)GameData_21c9b68, v76);
            ++GameData_21c9b70;
          }
        }
      }
      v80 = *(unsigned __int16*)(v50 + 136);
      v126 = v49;
      if (*(_WORD*)(v50 + 136) != 0) {
        for (i = 0; i != v80; ++i) {
          v82 =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v50 + 144) + 16 * i + 8) + 72LL);
          v83 = game_HashString(v82);
          if (v83 != 0) {
            v84 = GameData_21c9b68;
            v85 = v83;
            if (GameData_21c9b68 == nullptr) {
              goto LABEL_162;
            }
            v86 = &GameData_21c9b68;
            do {
              v87 = v84[4];
              v88 = v87 >= v83;
              v89 = v87 < v83;
              if (v88) {
                v86 = (_UNKNOWN**)v84;
              }
              v84 = (_QWORD*)v84[v89];
            } while (v84 != nullptr);
            if (v86 == &GameData_21c9b68 || v83 < (unsigned __int64)v86[4]) {
            LABEL_162:
              v90 = GameData_21c9b50;
              if (GameData_21c9b50 >= (unsigned __int64)GameData_21c9b58) {
                v92 = v47;
                v93 = GameData_21c9b50 - GameData_21c9b48;
                v94 = ((GameData_21c9b50 - GameData_21c9b48) >> 4) + 1;
                if (v94 >> 60 != 0) {
                  goto LABEL_231;
                }
                v95 = GameData_21c9b58 - GameData_21c9b48;
                if ((GameData_21c9b58 - GameData_21c9b48) >> 3 > v94) {
                  v94 = v95 >> 3;
                }
                if ((unsigned __int64)v95 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v96 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v96 = v94;
                }
                if (v96 >> 60 != 0) {
                  goto LABEL_230;
                }
                v97 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v96, 16, 0);
                v98 = *v92;
                v99 = (_QWORD*)v92[1];
                v100 = (unsigned __int64*)(v97 + v93);
                v47 = v92;
                *v100 = v85;
                v100[1] = v82;
                if ((_QWORD*)v98 != v99) {
                  v101 = (_QWORD*)v98;
                  v102 = (unsigned __int64*)((char*)v100 + v98 - (_QWORD)v99);
                  do {
                    *v102 = *v101;
                    v103 = v101[1];
                    v101 += 2;
                    v102[1] = v103;
                    v102 += 2;
                  } while (v101 != v99);
                }
                v91 = (__int64)(v100 + 2);
                *v92 = (__int64)v100 + v98 - (_QWORD)v99;
                v92[1] = (__int64)(v100 + 2);
                *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v92) =
                    v97 + 16 * v96;
                if (v98 != 0) {
                  v104 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v104 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v104, v98);
                }
              }
              else {
                *(_QWORD*)GameData_21c9b50 = v83;
                *(_QWORD*)(v90 + 8) = v82;
                v91 = v90 + 16;
              }
              GameData_21c9b50 = v91;
              v105 = (__int64*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
              v106 = (__int64**)&GameData_21c9b68;
              v107 = GameData_21c9b68;
              v108 = v105;
              v105[4] = v85;
              if (v107 != nullptr) {
                while (1) {
                  while (1) {
                    v110 = v107[4];
                    v109 = (__int64**)v107;
                    if (v85 >= v110) {
                      break;
                    }
                    v107 = (_QWORD*)*v107;
                    v106 = v109;
                    if (*v109 == nullptr) {
                      goto LABEL_185;
                    }
                  }
                  if (v110 >= v85) {
                    break;
                  }
                  v107 = (_QWORD*)v107[1];
                  if (v107 == nullptr) {
                    v106 = v109 + 1;
                    goto LABEL_185;
                  }
                }
                v117 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v117 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v117,
                    (__int64)v105);
              }
              else {
                v109 = (__int64**)&GameData_21c9b68;
              LABEL_185:
                *v105 = 0;
                v105[1] = 0;
                v105[2] = (__int64)v109;
                *v106 = v105;
                if (*(_QWORD*)GameData_21c9b60 != 0) {
                  GameData_21c9b60 = *(_QWORD*)GameData_21c9b60;
                  v108 = *v106;
                }
                v111 = (__int64*)GameData_21c9b68;
                *((_BYTE*)v108 + 24) = v108 == (__int64*)GameData_21c9b68;
                if (v108 != v111) {
                  do {
                    v112 = v108[2];
                    if ((*(_BYTE*)(v112 + 24) & 1) != 0) {
                      break;
                    }
                    v113 = *(__int64**)(v112 + 16);
                    v114 = (_QWORD*)*v113;
                    if (v112 == *v113) {
                      v114 = (_QWORD*)v113[1];
                      if (v114 == nullptr || (v114[3] & 1) != 0) {
                        if (v108 == *(__int64**)v112) {
                          v115 = (__int64*)v108[2];
                        }
                        else {
                          v115 = *(__int64**)(v112 + 8);
                          v116 = *v115;
                          *(_QWORD*)(v112 + 8) = *v115;
                          if (v116 != 0) {
                            *(_QWORD*)(v116 + 16) = v112;
                            v113 = *(__int64**)(v112 + 16);
                          }
                          v115[2] = (__int64)v113;
                          if (v112 == *v113) {
                            *v113 = (__int64)v115;
                          }
                          else {
                            v113[1] = (__int64)v115;
                          }
                          *v115 = v112;
                          *(_QWORD*)(v112 + 16) = v115;
                          v113 = (__int64*)v115[2];
                        }
                        *((_BYTE*)v115 + 24) = 1;
                        *((_BYTE*)v113 + 24) = 0;
                        v120 = (__int64*)*v113;
                        v121 = *(_QWORD*)(*v113 + 8);
                        *v113 = v121;
                        if (v121 != 0) {
                          *(_QWORD*)(v121 + 16) = v113;
                        }
                        v122 = (__int64**)v113[2];
                        v120[2] = (__int64)v122;
                        if (v113 == *v122) {
                          *v122 = v120;
                        }
                        else {
                          v122[1] = v120;
                        }
                        v120[1] = (__int64)v113;
                        goto LABEL_147;
                      }
                    }
                    else if (v114 == nullptr || (v114[3] & 1) != 0) {
                      v118 = *(__int64**)v112;
                      if (v108 == *(__int64**)v112) {
                        v119 = v118[1];
                        *(_QWORD*)v112 = v119;
                        if (v119 != 0) {
                          *(_QWORD*)(v119 + 16) = v112;
                          v113 = *(__int64**)(v112 + 16);
                        }
                        v118[2] = (__int64)v113;
                        if (v112 == *v113) {
                          *v113 = (__int64)v118;
                        }
                        else {
                          v113[1] = (__int64)v118;
                        }
                        v118[1] = v112;
                        *(_QWORD*)(v112 + 16) = v118;
                        v113 = (__int64*)v118[2];
                      }
                      else {
                        v118 = (__int64*)v108[2];
                      }
                      *((_BYTE*)v118 + 24) = 1;
                      *((_BYTE*)v113 + 24) = 0;
                      v120 = (__int64*)v113[1];
                      v123 = *v120;
                      v113[1] = *v120;
                      if (v123 != 0) {
                        *(_QWORD*)(v123 + 16) = v113;
                      }
                      v124 = (__int64**)v113[2];
                      v120[2] = (__int64)v124;
                      if (v113 == *v124) {
                        *v124 = v120;
                      }
                      else {
                        v124[1] = v120;
                      }
                      *v120 = (__int64)v113;
                    LABEL_147:
                      v113[2] = (__int64)v120;
                      break;
                    }
                    *(_BYTE*)(v112 + 24) = 1;
                    v108 = v113;
                    *((_BYTE*)v113 + 24) = v113 == v111;
                    *((_BYTE*)v114 + 24) = 1;
                  } while (v113 != v111);
                }
                ++GameData_21c9b70;
              }
            }
          }
        }
      }
      v49 = v126 + 1;
    } while (v126 + 1 != v125);
  }
  GameRoutine_68c910((__int64)&GameData_21c9b60, GameData_21c9b68);
  GameData_21c9b70 = 0;
  GameData_21c9b60 = (__int64)&GameData_21c9b68;
  GameData_21c9b68 = nullptr;
}

void TerrainFile_Unknown5()
{
  GameData_21c9b78 = 0;
  GameData_21c9b80 = 0;
  GameData_21c9b88 = 0;
  GameData_21c9b50 = GameData_21c9b48;
}

void TerrainFile_6900b0()
{
  GameData_21c9b78 = 0;
  GameData_21c9b80 = 0;
  GameData_21c9b88 = 0;
  GameData_21c9b50 = GameData_21c9b48;
}

#pragma GCC visibility pop
