#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AssetTableFile_7e73c0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_693d40(_QWORD, _QWORD);
__int64 GameRoutine_9f0d60(_QWORD, _QWORD);
__int64 GameRoutine_9f15a0(_QWORD);
__int64 GameRoutine_9f6120(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_212cdc0[15];
extern __int64 GameData_21f8f20;
extern __int64 GameData_21f8f28;
extern __int64 GameData_21f8f30;
extern __int64 GameData_21f8f38;
extern __int64 GameData_21f8f48;
extern __int64 GameData_21f8f50;
extern __int64 GameData_21f8f58;
extern __int64 GameData_21f8f68;
extern __int64 GameData_21f8f78;
extern __int64 GameData_21f8fe0;
extern __int64 GameData_21f8fe8;
extern __int64 GameData_21f8ff0;
extern __int64 GameData_21f8ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f8000;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_693e60(_QWORD);
void RecallLabelFile_Unknown4();

void RecallLabelFile_Unknown4()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  __int64 v12;
  __int64 j;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64* v38;
  __int64 v39;
  _QWORD* v40;
  int* v41;
  _QWORD* v42;
  _QWORD** v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64* v49;
  char* v50;
  char* v51;
  char* v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 k;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64* v75;
  char* v76;
  char* v77;
  char* v78;
  char* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64* v85;
  unsigned __int64* v86;
  _QWORD* v87;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64* v96;
  unsigned __int64 v97;
  __int64 v98;
  char* v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  unsigned __int64* v104;
  char* v105;
  char* v106;
  char* v107;
  char* v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  _QWORD* v112;
  __int64 v113;
  _QWORD* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64* v122;
  _QWORD* v123;
  _QWORD* v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  _QWORD* v136;
  _QWORD* v137;
  unsigned __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64* v141;
  __int64 v142;
  unsigned __int64 v143;
  _QWORD* v144;
  __int64 v145;
  _QWORD* v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  _QWORD* v154;
  __int64 v155;
  unsigned __int64* v156;
  unsigned __int64* v157;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  _QWORD* v162;
  _QWORD* v163;
  unsigned __int64 v164;
  __int64 v165;
  __int64* v166;
  __int64* v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64* v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  unsigned __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  unsigned __int64* v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  _QWORD* v188;
  _QWORD* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64* v193;
  __int64* v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;

  v0 = *(_QWORD*)GameData_212cdc0[0];
  v1 = *(__int64**)(*(_QWORD*)GameData_212cdc0[0] + 64LL);
  v2 = *(__int64**)(*(_QWORD*)GameData_212cdc0[0] + 72LL);
  if (v1 != v2) {
    v3 = 0;
    while (1) {
      v6 = *v1;
      if (*(_QWORD*)(*v1 + 32) != 0) {
        v4 = v6 + 24;
        v5 = 0;
        *(_QWORD*)(*(_QWORD*)(v6 + 24) + 24LL) = 0;
      }
      else {
        if (v3 == 0) {
          goto LABEL_5;
        }
        *(_QWORD*)(*(_QWORD*)(v6 + 24) + 24LL) = v3;
        v4 = v3 + 24;
        *(_QWORD*)(*(_QWORD*)(v6 + 24) + 32LL) = 0;
        v5 = v6;
      }
      *(_QWORD*)(*(_QWORD*)v4 + 32LL) = v5;
    LABEL_5:
      ++v1;
      v3 = v6;
      if (v1 == v2) {
        v1 = *(__int64**)(v0 + 64);
        v2 = *(__int64**)(v0 + 72);
        break;
      }
    }
  }
  if (v1 != v2) {
    v7 = &GameData_21f8000;
    v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v193 = v2;
    do {
      v194 = v1;
      v9 = *(_QWORD*)(*v1 + 24);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 16);
        *(_QWORD*)(v9 + 8) = 0;
        if (v10 != 0) {
          for (i = v10; i != 0; i = *(_QWORD*)(*(_QWORD*)(i + 24) + 24LL)) {
            *(_QWORD*)(v9 + 8) = i;
            v12 = i;
          }
          for (j = v12; j != 0; j = *(_QWORD*)(*(_QWORD*)(j + 24) + 32LL)) {
            if (j == v10) {
              *(_DWORD*)v9 = i;
            }
            LODWORD(i) = i + 1;
          }
          v14 = game_util_Format("%s_%d", *(_QWORD*)(v12 + 8));
          GameRoutine_60a020(v9 + 104, v14);
          v15 =
              (*(_BYTE*)(v9 + 104) & 1) != 0 ? *(_QWORD*)(v9 + 120) : v9 + 105;
          v16 = game_HashString(v15);
          v17 = *(_QWORD*)(v9 + 16);
          *(_QWORD*)(v9 + 88) = v16;
          *(_QWORD*)(v9 + 96) = v15;
          v197 = v17;
          if (v17 != 0) {
            v18 = (_QWORD*)(v9 + 128);
            v19 = *(_QWORD*)(v9 + 176);
            v20 = *(_QWORD*)(v9 + 184);
            for (*(_QWORD*)(v9 + 136) = *(_QWORD*)(v9 + 128); v20 != v19;
                 v20 -= 40) {
              if ((*(_BYTE*)(v20 - 24) & 1) != 0) {
                v27 = *(_QWORD*)(v20 - 8);
                if (v27 != 0) {
                  if (*(_QWORD*)(*v8 + 200LL) != 0) {
                    v28 = 128;
                  }
                  else {
                    v28 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v8 + v28, v27);
                }
              }
            }
            v21 = *(_QWORD*)(v9 + 224);
            *(_QWORD*)(v9 + 184) = v19;
            if (v21 != 0) {
              v22 = *(_QWORD**)(v9 + 216);
              if (v22 != nullptr) {
                do {
                  v23 = (_QWORD*)*v22;
                  if (*(_QWORD*)(*v8 + 200LL) != 0) {
                    v24 = 128;
                  }
                  else {
                    v24 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v8 + v24, v22);
                  v22 = v23;
                } while (v23 != nullptr);
              }
              v25 = *(_QWORD*)(v9 + 208);
              *(_QWORD*)(v9 + 216) = 0;
              if (v25 != 0) {
                if (v25 >= 8) {
                  v26 = 0;
                  do {
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + 8 * v26) = 0;
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + 8 * v26 + 8) = 0;
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + 8 * v26 + 16) = 0;
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + 8 * v26 + 24) = 0;
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + 8 * v26 + 32) = 0;
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + 8 * v26 + 40) = 0;
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + 8 * v26 + 48) = 0;
                    v29 = *(_QWORD*)(v9 + 200) + 8 * v26;
                    v26 += 8;
                    *(_QWORD*)(v29 + 56) = 0;
                  } while ((v25 & 0xFFFFFFFFFFFFFFF8LL) != v26);
                }
                else {
                  v26 = 0;
                }
                v30 = v25 & 7;
                if (v30 != 0) {
                  v31 = 8 * v26;
                  do {
                    --v30;
                    *(_QWORD*)(*(_QWORD*)(v9 + 200) + v31) = 0;
                    v31 += 8;
                  } while (v30 != 0);
                }
              }
              *(_QWORD*)(v9 + 224) = 0;
            }
            v32 = *(unsigned __int16*)(v197 + 104);
            if (*(_WORD*)(v197 + 104) != 0) {
              v33 = 0;
              v195 = *(unsigned __int16*)(v197 + 104);
              do {
                v35 = *(_QWORD*)(*(_QWORD*)(v197 + 112) + 8 * v33);
                v36 = game_HashString(v35);
                v38 = *(__int64**)(v9 + 136);
                v37 = *(_QWORD*)(v9 + 144);
                v39 = v36;
                if ((unsigned __int64)v38 < v37) {
                  *v38 = v36;
                  v38[1] = v35;
                  v34 = v38 + 2;
                }
                else {
                  v40 = (_QWORD*)*v18;
                  v41 = v7;
                  v42 = v8;
                  v43 = (_QWORD**)v18;
                  v44 = (__int64)v38 - *v18;
                  v45 = (v44 >> 4) + 1;
                  if (v45 >> 60 != 0) {
                  LABEL_290:
                    GameRoutine_693e60(v36);
                  }
                  v46 = v37 - (_QWORD)v40;
                  if (v46 >> 3 > v45) {
                    v45 = v46 >> 3;
                  }
                  if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF0LL) {
                    v47 = 0xFFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v47 = v45;
                  }
                  if (v47 >> 60 != 0) {
                  LABEL_289:
                    GameRoutine_60a210(v36);
                  }
                  v48 = fw_memory_HeapManager_Allocate(*v42, 16 * v47, 16, 0);
                  v49 = (__int64*)(v48 + v44);
                  *v49 = v39;
                  v49[1] = v35;
                  v50 = *(char**)(v9 + 128);
                  v51 = *(char**)(v9 + 136);
                  v52 = (char*)(v48 + v44 + v50 - v51);
                  if (v50 == v51) {
                    v18 = v43;
                  }
                  else {
                    v53 = (_QWORD*)(v48 + v44 + v50 - v51);
                    v18 = v43;
                    do {
                      *v53 = *(_QWORD*)v50;
                      v54 = *((_QWORD*)v50 + 1);
                      v50 += 16;
                      v53[1] = v54;
                      v53 += 2;
                    } while (v50 != v51);
                    v50 = (char*)*v43;
                  }
                  v55 = v48 + 16 * v47;
                  v34 = v49 + 2;
                  v8 = v42;
                  v7 = v41;
                  *(_QWORD*)(v9 + 128) = v52;
                  *(_QWORD*)(v9 + 136) = v49 + 2;
                  *(_QWORD*)(v9 + 144) = v55;
                  if (v50 != nullptr) {
                    v56 = 128;
                    if (*(_QWORD*)(*v8 + 200LL) == 0) {
                      v56 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v8 + v56, v50);
                  }
                  v32 = v195;
                }
                ++v33;
                *(_QWORD*)(v9 + 136) = v34;
              } while (v33 != v32);
            }
            v58 = *(_QWORD*)(v9 + 40);
            v57 = *(_QWORD*)(v9 + 48);
            while (v58 != v57) {
              if (*(_BYTE*)(v58 + 16) == 1) {
                v60 = *(_QWORD**)(v9 + 136);
                if ((unsigned __int64)v60 >= *(_QWORD*)(v9 + 144)) {
                  v59 = GameRoutine_693d40(v18, v58);
                }
                else {
                  v59 = (__int64)(v60 + 2);
                  *v60 = *(_QWORD*)v58;
                  v60[1] = *(_QWORD*)(v58 + 8);
                }
                *(_QWORD*)(v9 + 136) = v59;
              }
              v58 += 24;
            }
            v61 = *(unsigned __int16*)(v197 + 136);
            if (*(_WORD*)(v197 + 136) != 0) {
              for (k = 0; k != v61; ++k) {
                v64 = *(_QWORD*)(v197 + 144);
                v200 = *(_QWORD*)(v64 + 8 * k);
                v199 = game_HashString(v200);
                if ((GameRoutine_9f0d60(v9, &v199) & 1) != 0) {
                  v65 = *(_QWORD*)(v64 + 8 * k);
                  v36 = game_HashString(v65);
                  v67 = *(__int64**)(v9 + 160);
                  v66 = *(_QWORD*)(v9 + 168);
                  v68 = v36;
                  if ((unsigned __int64)v67 < v66) {
                    *v67 = v36;
                    v67[1] = v65;
                    v63 = v67 + 2;
                  }
                  else {
                    v69 = *(_QWORD*)(v9 + 152);
                    v70 = (char*)v67 - v69;
                    v71 = (((__int64)v67 - v69) >> 4) + 1;
                    if (v71 >> 60 != 0) {
                      goto LABEL_290;
                    }
                    v72 = v66 - v69;
                    if (v72 >> 3 > v71) {
                      v71 = v72 >> 3;
                    }
                    if ((unsigned __int64)v72 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v73 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v73 = v71;
                    }
                    if (v73 >> 60 != 0) {
                      goto LABEL_289;
                    }
                    v74 = fw_memory_HeapManager_Allocate(*v8, 16 * v73, 16, 0);
                    v75 = (__int64*)&v70[v74];
                    *v75 = v68;
                    v75[1] = v65;
                    v76 = *(char**)(v9 + 152);
                    v77 = *(char**)(v9 + 160);
                    if (v76 != v77) {
                      v78 = *(char**)(v9 + 152);
                      v79 = &v70[v74 + v76 - v77];
                      do {
                        *(_QWORD*)v79 = *(_QWORD*)v78;
                        v80 = *((_QWORD*)v78 + 1);
                        v78 += 16;
                        *((_QWORD*)v79 + 1) = v80;
                        v79 += 16;
                      } while (v78 != v77);
                    }
                    v63 = v75 + 2;
                    *(_QWORD*)(v9 + 152) = &v70[v74 + v76 - v77];
                    *(_QWORD*)(v9 + 160) = v75 + 2;
                    *(_QWORD*)(v9 + 168) = v74 + 16 * v73;
                    if (v76 != nullptr) {
                      v81 = 128;
                      if (*(_QWORD*)(*v8 + 200LL) == 0) {
                        v81 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v8 + v81, v76);
                    }
                  }
                  *(_QWORD*)(v9 + 160) = v63;
                }
              }
            }
            v82 = *(unsigned __int16*)(v197 + 120);
            if (*(_WORD*)(v197 + 120) != 0) {
              v83 = 0;
              do {
                v84 = AssetTableFile_7e73c0(
                    *(_QWORD*)(*(_QWORD*)(v197 + 128) + 16 * v83 + 8));
                v85 = *(unsigned __int64**)v84;
                v86 = *(unsigned __int64**)(v84 + 8);
                while (v85 != v86) {
                  if (GameData_21f8f68 != 0 && GameData_21f8f78 != 0) {
                    v89 = *v85;
                    v90 = GameData_21f8f68 - 1;
                    if ((GameData_21f8f68 & (GameData_21f8f68 - 1)) != 0) {
                      v91 = *v85;
                      if (v89 >= GameData_21f8f68) {
                        v91 = v89 % GameData_21f8f68;
                      }
                    }
                    else {
                      v91 = v90 & v89;
                    }
                    v92 = *(_QWORD**)(*((_QWORD*)v7 + 492) + 8 * v91);
                    if (v92 != nullptr) {
                      v93 = (_QWORD*)*v92;
                      if (v93 != nullptr) {
                        if ((GameData_21f8f68 & v90) == 0) {
                          while (1) {
                            v95 = v93[1];
                            if (v89 == v95) {
                              if (v93[2] == v89) {
                                goto LABEL_105;
                              }
                            }
                            else if ((v95 & v90) != v91) {
                              goto LABEL_130;
                            }
                            v93 = (_QWORD*)*v93;
                            if (v93 == nullptr) {
                              goto LABEL_130;
                            }
                          }
                        }
                        do {
                          v94 = v93[1];
                          if (v89 == v94) {
                            if (v93[2] == v89) {
                              goto LABEL_105;
                            }
                          }
                          else {
                            if (v94 >= GameData_21f8f68) {
                              v94 %= (unsigned __int64)GameData_21f8f68;
                            }
                            if (v94 != v91) {
                              break;
                            }
                          }
                          v93 = (_QWORD*)*v93;
                        } while (v93 != nullptr);
                      }
                    }
                  }
                LABEL_130:
                  v36 = GameRoutine_9f0d60(v9, v85);
                  if ((v36 & 1) != 0) {
                    v96 = *(unsigned __int64**)(v9 + 160);
                    v97 = *(_QWORD*)(v9 + 168);
                    if ((unsigned __int64)v96 < v97) {
                      v87 = v96 + 2;
                      *v96 = *v85;
                      v96[1] = v85[1];
                    }
                    else {
                      v98 = *(_QWORD*)(v9 + 152);
                      v99 = (char*)v96 - v98;
                      v100 = (((__int64)v96 - v98) >> 4) + 1;
                      if (v100 >> 60 != 0) {
                        goto LABEL_290;
                      }
                      v101 = v97 - v98;
                      if (v101 >> 3 > v100) {
                        v100 = v101 >> 3;
                      }
                      if ((unsigned __int64)v101 >= 0x7FFFFFFFFFFFFFF0LL) {
                        v102 = 0xFFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v102 = v100;
                      }
                      if (v102 >> 60 != 0) {
                        goto LABEL_289;
                      }
                      v103 =
                          fw_memory_HeapManager_Allocate(*v8, 16 * v102, 16, 0);
                      v104 = (unsigned __int64*)&v99[v103];
                      *v104 = *v85;
                      v104[1] = v85[1];
                      v105 = *(char**)(v9 + 152);
                      v106 = *(char**)(v9 + 160);
                      v107 = &v99[v103 + v105 - v106];
                      if (v105 != v106) {
                        v108 = &v99[v103 + v105 - v106];
                        do {
                          *(_QWORD*)v108 = *(_QWORD*)v105;
                          v109 = *((_QWORD*)v105 + 1);
                          v105 += 16;
                          *((_QWORD*)v108 + 1) = v109;
                          v108 += 16;
                        } while (v105 != v106);
                        v105 = *(char**)(v9 + 152);
                      }
                      v110 = v103 + 16 * v102;
                      v87 = v104 + 2;
                      *(_QWORD*)(v9 + 152) = v107;
                      *(_QWORD*)(v9 + 160) = v104 + 2;
                      *(_QWORD*)(v9 + 168) = v110;
                      if (v105 != nullptr) {
                        v111 = 128;
                        if (*(_QWORD*)(*v8 + 200LL) == 0) {
                          v111 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v8 + v111, v105);
                      }
                    }
                    *(_QWORD*)(v9 + 160) = v87;
                  }
                LABEL_105:
                  v85 += 2;
                }
                ++v83;
              } while (v83 != v82);
            }
          }
        }
      }
      v1 = v194 + 1;
    } while (v194 + 1 != v193);
  }
  if (GameData_21f8ff8 != 0) {
    v112 = (_QWORD*)GameData_21f8ff0;
    if (GameData_21f8ff0 != 0) {
      v113 = fw_memory_g_heap_manager_ptr;
      do {
        v114 = (_QWORD*)*v112;
        if (*(_QWORD*)(*(_QWORD*)v113 + 200LL) != 0) {
          v115 = 128;
        }
        else {
          v115 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v113 + v115, v112);
        v112 = v114;
      } while (v114 != nullptr);
    }
    GameData_21f8ff0 = 0;
    if (GameData_21f8fe8 != 0) {
      v116 = GameData_21f8fe8 & 7;
      if ((unsigned __int64)GameData_21f8fe8 >= 8) {
        v118 = GameData_21f8fe8 & 0xFFFFFFFFFFFFFFF8LL;
        v117 = 0;
        do {
          *(_QWORD*)(GameData_21f8fe0 + 8 * v117) = 0;
          *(_QWORD*)(GameData_21f8fe0 + 8 * v117 + 8) = 0;
          *(_QWORD*)(GameData_21f8fe0 + 8 * v117 + 16) = 0;
          *(_QWORD*)(GameData_21f8fe0 + 8 * v117 + 24) = 0;
          *(_QWORD*)(GameData_21f8fe0 + 8 * v117 + 32) = 0;
          *(_QWORD*)(GameData_21f8fe0 + 8 * v117 + 40) = 0;
          *(_QWORD*)(GameData_21f8fe0 + 8 * v117 + 48) = 0;
          v119 = GameData_21f8fe0 + 8 * v117;
          v117 += 8;
          *(_QWORD*)(v119 + 56) = 0;
        } while (v118 != v117);
      }
      else {
        v117 = 0;
      }
      if (v116 != 0) {
        v120 = 8 * v117;
        do {
          --v116;
          *(_QWORD*)(GameData_21f8fe0 + v120) = 0;
          v120 += 8;
        } while (v116 != 0);
      }
    }
    GameData_21f8ff8 = 0;
  }
  v121 = *(__int64**)(*(_QWORD*)GameData_212cdc0[0] + 64LL);
  v122 = *(__int64**)(*(_QWORD*)GameData_212cdc0[0] + 72LL);
  if (v121 != v122) {
    v123 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v127 = *v121;
      v128 = *(_QWORD*)(*v121 + 32);
      if (v128 != 0) {
        v129 = game_HashString(v128);
        if (v129 != 0) {
          v130 = v129;
          if (GameData_21f8fe8 != 0 && GameData_21f8ff8 != 0) {
            v132 = GameData_21f8fe8 - 1;
            if ((GameData_21f8fe8 & (GameData_21f8fe8 - 1)) != 0) {
              v133 = v129;
              if (v129 >= GameData_21f8fe8) {
                v133 = v129 % GameData_21f8fe8;
              }
            }
            else {
              v133 = v132 & v129;
            }
            v136 = *(_QWORD**)(GameData_21f8fe0 + 8 * v133);
            if (v136 != nullptr) {
              v137 = (_QWORD*)*v136;
              if (v137 != nullptr) {
                if ((GameData_21f8fe8 & v132) == 0) {
                  while (1) {
                    v139 = v137[1];
                    if (v139 == v129) {
                      if (v137[2] == v129) {
                        goto LABEL_169;
                      }
                    }
                    else if ((v139 & v132) != v133) {
                      goto LABEL_165;
                    }
                    v137 = (_QWORD*)*v137;
                    if (v137 == nullptr) {
                      goto LABEL_165;
                    }
                  }
                }
                do {
                  v138 = v137[1];
                  if (v138 == v129) {
                    if (v137[2] == v129) {
                      goto LABEL_169;
                    }
                  }
                  else {
                    if (v138 >= GameData_21f8fe8) {
                      v138 %= (unsigned __int64)GameData_21f8fe8;
                    }
                    if (v138 != v133) {
                      break;
                    }
                  }
                  v137 = (_QWORD*)*v137;
                } while (v137 != nullptr);
              }
            }
          }
        LABEL_165:
          v124 = (_QWORD*)fw_memory_HeapManager_Allocate(*v123, 32, 16, 0);
          v124[2] = v130;
          v125 = (__int64)v124;
          v124[3] = v127;
          *v124 = 0;
          v124[1] = v130;
          if (GameRoutine_9f6120(&GameData_21f8fe0, v130, v124 + 2) != 0) {
            v126 = 128;
            if (*(_QWORD*)(*v123 + 200LL) == 0) {
              v126 = 56;
            }
            nn_mem_StandardAllocator_Free(*v123 + v126, v125);
          }
          else {
            v134 = GameData_21f8fe8;
            v135 = GameData_21f8fe8 - 1;
            if ((GameData_21f8fe8 & (GameData_21f8fe8 - 1)) != 0) {
              if (v130 >= GameData_21f8fe8) {
                v130 %= (unsigned __int64)GameData_21f8fe8;
              }
            }
            else {
              v130 &= v135;
            }
            v140 = GameData_21f8fe0;
            v141 = *(__int64**)(GameData_21f8fe0 + 8 * v130);
            if (v141 != nullptr) {
              *(_QWORD*)v125 = *v141;
              *v141 = v125;
            }
            else {
              v142 = GameData_21f8ff0;
              GameData_21f8ff0 = v125;
              *(_QWORD*)v125 = v142;
              *(_QWORD*)(v140 + 8 * v130) = &GameData_21f8ff0;
              if (*(_QWORD*)v125 != 0) {
                v143 = *(_QWORD*)(*(_QWORD*)v125 + 8LL);
                if ((v134 & v135) != 0) {
                  if (v143 >= v134) {
                    v143 %= v134;
                  }
                }
                else {
                  v143 &= v135;
                }
                *(_QWORD*)(GameData_21f8fe0 + 8 * v143) = v125;
              }
            }
            ++GameData_21f8ff8;
          }
        }
      }
    LABEL_169:
      ++v121;
    } while (v121 != v122);
  }
  if (GameData_21f8f38 != 0) {
    v144 = (_QWORD*)GameData_21f8f30;
    if (GameData_21f8f30 != 0) {
      v145 = fw_memory_g_heap_manager_ptr;
      do {
        v146 = (_QWORD*)*v144;
        if (*(_QWORD*)(*(_QWORD*)v145 + 200LL) != 0) {
          v147 = 128;
        }
        else {
          v147 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v145 + v147, v144);
        v144 = v146;
      } while (v146 != nullptr);
    }
    GameData_21f8f30 = 0;
    if (GameData_21f8f28 != 0) {
      v148 = GameData_21f8f28 & 7;
      if ((unsigned __int64)GameData_21f8f28 >= 8) {
        v150 = GameData_21f8f28 & 0xFFFFFFFFFFFFFFF8LL;
        v149 = 0;
        do {
          *(_QWORD*)(GameData_21f8f20 + 8 * v149) = 0;
          *(_QWORD*)(GameData_21f8f20 + 8 * v149 + 8) = 0;
          *(_QWORD*)(GameData_21f8f20 + 8 * v149 + 16) = 0;
          *(_QWORD*)(GameData_21f8f20 + 8 * v149 + 24) = 0;
          *(_QWORD*)(GameData_21f8f20 + 8 * v149 + 32) = 0;
          *(_QWORD*)(GameData_21f8f20 + 8 * v149 + 40) = 0;
          *(_QWORD*)(GameData_21f8f20 + 8 * v149 + 48) = 0;
          v151 = GameData_21f8f20 + 8 * v149;
          v149 += 8;
          *(_QWORD*)(v151 + 56) = 0;
        } while (v150 != v149);
      }
      else {
        v149 = 0;
      }
      if (v148 != 0) {
        v152 = 8 * v149;
        do {
          --v148;
          *(_QWORD*)(GameData_21f8f20 + v152) = 0;
          v152 += 8;
        } while (v148 != 0);
      }
    }
    GameData_21f8f38 = 0;
  }
  GameData_21f8f50 = GameData_21f8f48;
  v153 = *(_QWORD*)(*(_QWORD*)GameData_212cdc0[0] + 64LL);
  v196 = *(_QWORD*)(*(_QWORD*)GameData_212cdc0[0] + 72LL);
  if (v153 != v196) {
    v154 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v198 = v153;
      v155 = *(_QWORD*)(*(_QWORD*)v153 + 24LL);
      v157 = *(unsigned __int64**)(v155 + 152);
      v156 = *(unsigned __int64**)(v155 + 160);
      while (v157 != v156) {
        if (GameData_21f8f28 != 0 && GameData_21f8f38 != 0) {
          v159 = *v157;
          v160 = GameData_21f8f28 - 1;
          if ((GameData_21f8f28 & (GameData_21f8f28 - 1)) != 0) {
            v161 = *v157;
            if (v159 >= GameData_21f8f28) {
              v161 = v159 % GameData_21f8f28;
            }
          }
          else {
            v161 = v160 & v159;
          }
          v162 = *(_QWORD**)(GameData_21f8f20 + 8 * v161);
          if (v162 != nullptr) {
            v163 = (_QWORD*)*v162;
            if (v163 != nullptr) {
              if ((GameData_21f8f28 & v160) == 0) {
                while (1) {
                  v165 = v163[1];
                  if (v159 == v165) {
                    if (v163[2] == v159) {
                      goto LABEL_286;
                    }
                  }
                  else if ((v165 & v160) != v161) {
                    goto LABEL_252;
                  }
                  v163 = (_QWORD*)*v163;
                  if (v163 == nullptr) {
                    goto LABEL_252;
                  }
                }
              }
              do {
                v164 = v163[1];
                if (v159 == v164) {
                  if (v163[2] == v159) {
                    goto LABEL_286;
                  }
                }
                else {
                  if (v164 >= GameData_21f8f28) {
                    v164 %= (unsigned __int64)GameData_21f8f28;
                  }
                  if (v164 != v161) {
                    break;
                  }
                }
                v163 = (_QWORD*)*v163;
              } while (v163 != nullptr);
            }
          }
        }
      LABEL_252:
        v166 = (__int64*)fw_memory_HeapManager_Allocate(*v154, 24, 16, 0);
        *v166 = 0;
        v167 = v166;
        v168 = *v157;
        v166[2] = *v157;
        v166[1] = v168;
        v36 = GameRoutine_9f15a0(&GameData_21f8f20);
        if (v36 != 0) {
          v169 = 128;
          if (*(_QWORD*)(*v154 + 200LL) == 0) {
            v169 = 56;
          }
          v36 = nn_mem_StandardAllocator_Free(*v154 + v169, v167);
        }
        else {
          v170 = v167[1];
          v171 = GameData_21f8f28;
          v172 = GameData_21f8f28 - 1;
          if ((GameData_21f8f28 & (GameData_21f8f28 - 1)) != 0) {
            if (v170 >= GameData_21f8f28) {
              v170 %= (unsigned __int64)GameData_21f8f28;
            }
          }
          else {
            v170 &= v172;
          }
          v173 = GameData_21f8f20;
          v174 = *(__int64**)(GameData_21f8f20 + 8 * v170);
          if (v174 != nullptr) {
            *v167 = *v174;
            *v174 = (__int64)v167;
          }
          else {
            v175 = GameData_21f8f30;
            GameData_21f8f30 = (__int64)v167;
            *v167 = v175;
            *(_QWORD*)(v173 + 8 * v170) = &GameData_21f8f30;
            if (*v167 != 0) {
              v176 = *(_QWORD*)(*v167 + 8);
              if ((v171 & v172) != 0) {
                if (v176 >= v171) {
                  v176 %= v171;
                }
              }
              else {
                v176 &= v172;
              }
              *(_QWORD*)(GameData_21f8f20 + 8 * v176) = v167;
            }
          }
          ++GameData_21f8f38;
        }
        v177 = GameData_21f8f50;
        if (GameData_21f8f50 >= (unsigned __int64)GameData_21f8f58) {
          v179 = GameData_21f8f50 - GameData_21f8f48;
          v180 = ((GameData_21f8f50 - GameData_21f8f48) >> 4) + 1;
          if (v180 >> 60 != 0) {
            goto LABEL_290;
          }
          v181 = GameData_21f8f58 - GameData_21f8f48;
          if ((GameData_21f8f58 - GameData_21f8f48) >> 3 > v180) {
            v180 = v181 >> 3;
          }
          if ((unsigned __int64)v181 >= 0x7FFFFFFFFFFFFFF0LL) {
            v182 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v182 = v180;
          }
          if (v182 >> 60 != 0) {
            goto LABEL_289;
          }
          v183 = fw_memory_HeapManager_Allocate(*v154, 16 * v182, 16, 0);
          v184 = (unsigned __int64*)(v183 + v179);
          v185 = GameData_21f8f48;
          v186 = GameData_21f8f50;
          *v184 = *v157;
          v184[1] = v157[1];
          v187 = v183 + v179 + v185 - v186;
          if (v185 != v186) {
            v188 = (_QWORD*)v185;
            v189 = (_QWORD*)(v183 + v179 + v185 - v186);
            do {
              *v189 = *v188;
              v190 = v188[1];
              v188 += 2;
              v189[1] = v190;
              v189 += 2;
            } while (v188 != (_QWORD*)v186);
          }
          v191 = v183 + 16 * v182;
          v178 = (__int64)(v184 + 2);
          GameData_21f8f48 = v187;
          GameData_21f8f50 = (__int64)(v184 + 2);
          GameData_21f8f58 = v191;
          if (v185 != 0) {
            v192 = 128;
            if (*(_QWORD*)(*v154 + 200LL) == 0) {
              v192 = 56;
            }
            nn_mem_StandardAllocator_Free(*v154 + v192, v185);
          }
        }
        else {
          v178 = GameData_21f8f50 + 16;
          *(_QWORD*)GameData_21f8f50 = *v157;
          *(_QWORD*)(v177 + 8) = v157[1];
        }
        GameData_21f8f50 = v178;
      LABEL_286:
        v157 += 2;
      }
      v153 = v198 + 8;
    } while (v198 + 8 != v196);
  }
}

#pragma GCC visibility pop
