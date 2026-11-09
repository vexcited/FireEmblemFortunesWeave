#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60e940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60f380(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_898f80(_QWORD);
__int64 GameRoutine_8999e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_899ee0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 hub_AcquireTableResource(_QWORD, _QWORD);
__int64 hub_ColumnAlias(_QWORD);
__int64 hub_ColumnAliasSuffix(_QWORD);
__int64 hub_ResourceVariant(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ad6644;
extern __int64 (*GameData_1fa7378[])();
extern __int64 (*GameData_1fa7c28[])();
extern __int64 (*GameData_1fa7ca8[])();
extern __int64 (*game_TimelineFile_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ca20[131];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60e910(void);
void __attribute__((noreturn)) GameRoutine_60f930(_QWORD);
void __attribute__((noreturn)) GameRoutine_898f60(_QWORD);
__int64 Registration_88dda0(__int64 a1);

__int64 Registration_88dda0(__int64 a1)
{
  _QWORD* v1;
  char* v2;
  char* v3;
  char* v4;
  char* v5;
  char* v6;
  char* v7;
  char* v8;
  _QWORD* v9;
  char* v10;
  _QWORD* v11;
  char* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  unsigned __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _DWORD* v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64* v59;
  unsigned __int64 v60;
  __int64* v61;
  int v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  _QWORD* v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  _QWORD* v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  char* v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  _QWORD* v94;
  char* v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64** v114;
  __int64* v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  char v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  char v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  char v132;
  unsigned __int64 v133;
  unsigned __int64* v134;
  __int64 v135;
  char* v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  __int64* v147;
  _QWORD* v148;
  __int64 v149;
  unsigned __int16 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  _QWORD* v154;
  __int64* v155;
  int v156;
  __int64 v157;
  __int64* v158;
  __int64* v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  __int64 v163;
  unsigned __int64 v164;
  _QWORD* v165;
  _QWORD* v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 i;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v187;
  __int64* v188;
  char* v189;
  char* v190;
  char* v191;
  char* v192;
  char* v193;
  char* v194;
  char* v195;
  char* v196;
  char* v197;
  _QWORD* v198;
  char* v199;
  char* v200;
  char* v201;
  __int64 v202;
  __int64* v203;
  __int64 v204;
  int v205;
  __int64* v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  _QWORD* v211;
  __int64 v212;
  int v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64* v217;
  _QWORD v218[2];

  if (*GameData_212ca20[0] == 0) {
    *GameData_212ca20[0] = a1;
  }
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 120) = 1065353216;
  *(_DWORD*)(a1 + 160) = 1065353216;
  *(_DWORD*)(a1 + 200) = 1065353216;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)a1 = game_TimelineFile_vtable;
  *(_QWORD*)(a1 + 8) = GameData_1fa7378;
  v1 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  v201 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v201, "GameData/Timeline_Part0_Ism.bin");
  v200 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v200, "GameData/Timeline_Part1_Kai.bin");
  v199 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v199, "GameData/Timeline_Part1_Dit.bin");
  v2 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v2, "GameData/Timeline_Part1_Seo.bin");
  v3 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v3, "GameData/Timeline_Part1_Led.bin");
  v4 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v4, "GameData/Timeline_Part1_Bel.bin");
  v5 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v5, "GameData/Timeline_Part1_Tal.bin");
  v6 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v6, "GameData/Timeline_Part1_Orh.bin");
  v7 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  strcpy(v7, "GameData/Timeline_Part1_Anh.bin");
  v8 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  v9 = v1;
  strcpy(v8, "GameData/Timeline_Part2.bin");
  v10 = (char*)fw_memory_HeapManager_Allocate(*v1, 32, 16, 0);
  v11 = v9;
  strcpy(v10, "GameData/Timeline_Part3_Ism.bin");
  v12 = (char*)fw_memory_HeapManager_Allocate(*v9, 32, 16, 0);
  strcpy(v12, "GameData/Timeline_Com.bin");
  v13 = fw_memory_HeapManager_Allocate(*v11, 288, 16, 0);
  fw_text_String_CopyTerminated(v13);
  fw_text_String_CopyTerminated(v13 + 24);
  fw_text_String_CopyTerminated(v13 + 48);
  v197 = v2;
  fw_text_String_CopyTerminated(v13 + 72);
  v196 = v3;
  fw_text_String_CopyTerminated(v13 + 96);
  v195 = v4;
  fw_text_String_CopyTerminated(v13 + 120);
  v194 = v5;
  v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  fw_text_String_CopyTerminated(v13 + 144);
  v193 = v6;
  fw_text_String_CopyTerminated(v13 + 168);
  v192 = v7;
  v15 = v13;
  fw_text_String_CopyTerminated(v13 + 192);
  v191 = v8;
  fw_text_String_CopyTerminated(v13 + 216);
  v190 = v10;
  fw_text_String_CopyTerminated(v13 + 240);
  v189 = v12;
  fw_text_String_CopyTerminated(v13 + 264);
  v16 = (_QWORD*)*GameData_212ca20[0];
  GameRoutine_898f80(*GameData_212ca20[0] + 8);
  v205 = 0;
  v17 = 0;
  v211 = nullptr;
  v212 = 0;
  v209 = 0;
  v210 = 0;
  v206 = v16 + 21;
  v198 = v16;
  v188 = v16 + 23;
  v213 = 1065353216;
  do {
    if ((*(_BYTE*)(v15 + v17) & 1) != 0) {
      v19 = *(_QWORD*)(v15 + v17 + 16);
    }
    else {
      v19 = v15 + v17 + 1;
    }
    v20 = hub_AcquireTableResource(v16 + 1, v19);
    if (v20 != 0) {
      v22 = v20;
      v23 = game_HashString(&GameData_1ad6644, v21);
      if (v23 != 0) {
        v24 = *(_QWORD**)(v22 + 808);
        v25 = v24[2];
        if (v25 != 0 && v24[4] != 0) {
          v27 = v25 - 1;
          if ((v25 & (v25 - 1)) != 0) {
            v28 = v23;
            if (v23 >= v25) {
              v28 = v23 % v25;
            }
          }
          else {
            v28 = v27 & v23;
          }
          v29 = *(_QWORD**)(v24[1] + 8 * v28);
          if (v29 != nullptr) {
            v30 = (_QWORD*)*v29;
            if (v30 != nullptr) {
              if ((v25 & v27) == 0) {
                while (1) {
                  v32 = v30[1];
                  if (v23 == v32) {
                    if (v30[2] == v23) {
                      goto LABEL_36;
                    }
                  }
                  else if ((v32 & v27) != v28) {
                    goto LABEL_6;
                  }
                  v30 = (_QWORD*)*v30;
                  if (v30 == nullptr) {
                    goto LABEL_6;
                  }
                }
              }
              while (1) {
                v31 = v30[1];
                if (v23 == v31) {
                  break;
                }
                if (v31 >= v25) {
                  v31 %= v25;
                }
                if (v31 != v28) {
                  goto LABEL_6;
                }
              LABEL_25:
                v30 = (_QWORD*)*v30;
                if (v30 == nullptr) {
                  goto LABEL_6;
                }
              }
              if (v30[2] != v23) {
                goto LABEL_25;
              }
            LABEL_36:
              v33 = v30[3];
              if (v33 != 0) {
                v34 = *(_DWORD**)(v33 + 32);
                if (v34 != nullptr && *v34 == 539300353 && v34[4] == 216) {
                  v36 = (_QWORD*)v16[6];
                  v35 = v16[7];
                  v187 = v30[3];
                  if ((unsigned __int64)v36 >= v35) {
                    v38 = v16[5];
                    v39 = (char*)v36 - v38;
                    v40 = ((__int64)v36 - v38) >> 3;
                    v41 = v40 + 1;
                    if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
                      GameRoutine_60e910();
                    }
                    v42 = v35 - v38;
                    if (v42 >> 2 > v41) {
                      v41 = v42 >> 2;
                    }
                    if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v43 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v43 = v41;
                    }
                    if (v43 != 0) {
                      if (v43 >> 61 != 0) {
                        goto LABEL_293;
                      }
                      v44 =
                          fw_memory_HeapManager_Allocate(*v14, 8 * v43, 16, 0);
                    }
                    else {
                      v44 = 0;
                    }
                    v45 = v44 + 8 * v43;
                    v46 = (__int64)&v39[v44 + -8 * v40];
                    *(_QWORD*)&v39[v44] = v187;
                    v37 = (__int64)&v39[v44 + 8];
                    memcpy(v46, v38, v39);
                    v16[5] = v46;
                    v16[6] = v37;
                    v16[7] = v45;
                    if (v38 != 0) {
                      v47 = 128;
                      if (*(_QWORD*)(*v14 + 200LL) == 0) {
                        v47 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v14 + v47, v38);
                    }
                    v33 = v187;
                  }
                  else {
                    *v36 = v33;
                    v37 = (__int64)(v36 + 1);
                  }
                  v16[6] = v37;
                  if (*(_WORD*)(v33 + 18) != 0) {
                    v48 = *(_QWORD*)(v33 + 40);
                    if (v48 != 0) {
                      v49 = 0;
                      while (1) {
                        v202 = v49;
                        v208 = v48 + 48 * v49;
                        if (v48 == 0) {
                          goto LABEL_154;
                        }
                        v203 = (__int64*)(v48 + 48 * v49);
                        v50 = *((unsigned __int16*)v203 + 11) + 1LL;
                        v51 = fw_memory_HeapManager_Allocate(*v14, 24, 16, 0);
                        *(_QWORD*)v51 = 0;
                        *(_QWORD*)(v51 + 8) = v50;
                        *(_DWORD*)(v51 + 16) = v50;
                        *(_DWORD*)(v51 + 20) = v205;
                        if (GameRoutine_60e940(v206, v50, v51 + 16) != 0) {
                          v53 = 128;
                          if (*(_QWORD*)(*v14 + 200LL) == 0) {
                            v53 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*v14 + v53, v51);
                          v54 = v203;
                        }
                        else {
                          v55 = v16[22];
                          v56 = *(_QWORD*)(v51 + 8);
                          v57 = v55 - 1;
                          if ((v55 & (v55 - 1)) != 0) {
                            v54 = v203;
                            if (v56 >= v55) {
                              v56 %= v55;
                            }
                          }
                          else {
                            v54 = v203;
                            v56 &= v57;
                          }
                          v58 = *v206;
                          v59 = *(__int64**)(*v206 + 8 * v56);
                          if (v59 != nullptr) {
                            *(_QWORD*)v51 = *v59;
                            *v59 = v51;
                          }
                          else {
                            *(_QWORD*)v51 = *v188;
                            *v188 = v51;
                            *(_QWORD*)(v58 + 8 * v56) = v188;
                            if (*(_QWORD*)v51 != 0) {
                              v60 = *(_QWORD*)(*(_QWORD*)v51 + 8LL);
                              if ((v55 & v57) != 0) {
                                if (v60 >= v55) {
                                  v60 %= v55;
                                }
                              }
                              else {
                                v60 &= v57;
                              }
                              *(_QWORD*)(*v206 + 8 * v60) = v51;
                            }
                          }
                          ++v16[24];
                        }
                        v61 = &v214;
                        v217 = &v214;
                        v214 = (__int64)GameData_1fa7c28;
                        v215 = (__int64)v206;
                        v216 = (unsigned int)v205;
                        v62 = *((unsigned __int16*)v54 + 9);
                        if (*((_WORD*)v54 + 9) == 0) {
                          break;
                        }
                        v63 = v54[4];
                        do {
                          v64 = v217;
                          v218[0] = v63;
                          if (v217 == nullptr) {
                          LABEL_292:
                            GameRoutine_60a310(v64, v52);
                          }
                          (*(void (**)(__int64*, _QWORD*))(*v217 + 48))(v217,
                                                                        v218);
                          v63 += 216;
                          --v62;
                        } while (v62 != 0);
                        v61 = v217;
                        if (v217 == &v214) {
                          break;
                        }
                        if (v217 != nullptr) {
                          v65 = 40;
                        LABEL_86:
                          (*(void (**)(void))(*v61 + v65))();
                        }
                        if (v205 < 1) {
                          goto LABEL_112;
                        }
                        v66 = *v54;
                        if (*v54 == 0) {
                          goto LABEL_112;
                        }
                        v67 = v16[12];
                        if (v67 == 0 || v16[14] == 0) {
                          goto LABEL_112;
                        }
                        v68 = v67 - 1;
                        if ((v67 & (v67 - 1)) != 0) {
                          v69 = *v54;
                          if (v66 >= v67) {
                            v69 = v66 % v67;
                          }
                        }
                        else {
                          v69 = v68 & v66;
                        }
                        v70 = *(_QWORD**)(v16[11] + 8 * v69);
                        if (v70 == nullptr ||
                            (v71 = (_QWORD*)*v70) == nullptr) {
                        LABEL_112:
                          LODWORD(v218[0]) = *((unsigned __int16*)v54 + 11) + 1;
                          v214 = (__int64)(v16[9] - v16[8]) >> 3;
                          v23 = GameRoutine_60f380(&v209, v218, v218, &v214);
                          v76 = (_QWORD*)v16[9];
                          v75 = v16[10];
                          if ((unsigned __int64)v76 < v75) {
                            *v76 = v54;
                            v77 = (__int64)(v76 + 1);
                            goto LABEL_129;
                          }
                          v78 = v16[8];
                          v79 = v16;
                          v80 = (char*)v76 - v78;
                          v81 = ((__int64)v76 - v78) >> 3;
                          v82 = v81 + 1;
                          if ((unsigned __int64)(v81 + 1) >> 61 != 0) {
                            GameRoutine_898f60(v23);
                          }
                          v83 = v75 - v78;
                          if (v83 >> 2 > v82) {
                            v82 = v83 >> 2;
                          }
                          if ((unsigned __int64)v83 >= 0x7FFFFFFFFFFFFFF8LL) {
                            v84 = 0x1FFFFFFFFFFFFFFFLL;
                          }
                          else {
                            v84 = v82;
                          }
                          if (v84 == 0) {
                            v85 = 0;
                            goto LABEL_124;
                          }
                          if (v84 >> 61 != 0) {
                            goto LABEL_293;
                          }
                          v85 = fw_memory_HeapManager_Allocate(*v14, 8 * v84,
                                                               16, 0);
                        LABEL_124:
                          v86 = v85 + 8 * v84;
                          v87 = (__int64)&v80[v85 + -8 * v81];
                          *(_QWORD*)&v80[v85] = v203;
                          v77 = (__int64)&v80[v85 + 8];
                          v23 = memcpy(v87, v78, v80);
                          v79[8] = v87;
                          v79[9] = v77;
                          v16 = v79;
                          v79[10] = v86;
                          if (v78 != 0) {
                            v88 = 128;
                            if (*(_QWORD*)(*v14 + 200LL) == 0) {
                              v88 = 56;
                            }
                            v23 =
                                nn_mem_StandardAllocator_Free(*v14 + v88, v78);
                          }
                          v33 = v187;
                          v54 = v203;
                        LABEL_129:
                          v16[9] = v77;
                          v89 = v54[1];
                          if (v89 == 0) {
                            goto LABEL_152;
                          }
                          v91 = (__int64*)v16[30];
                          v90 = v16[31];
                          if ((unsigned __int64)v91 < v90) {
                            *v91 = v89;
                            v92 = (__int64)(v91 + 1);
                            goto LABEL_148;
                          }
                          v93 = v16[29];
                          v94 = v14;
                          v95 = (char*)v91 - v93;
                          v96 = ((__int64)v91 - v93) >> 3;
                          v97 = v96 + 1;
                          if ((unsigned __int64)(v96 + 1) >> 61 == 0) {
                            v98 = v90 - v93;
                            if (v98 >> 2 > v97) {
                              v97 = v98 >> 2;
                            }
                            if ((unsigned __int64)v98 >= 0x7FFFFFFFFFFFFFF8LL) {
                              v99 = 0x1FFFFFFFFFFFFFFFLL;
                            }
                            else {
                              v99 = v97;
                            }
                            if (v99 == 0) {
                              v100 = 0;
                              goto LABEL_142;
                            }
                            if (v99 >> 61 == 0) {
                              v100 = fw_memory_HeapManager_Allocate(
                                  *v94, 8 * v99, 16, 0);
                            LABEL_142:
                              v101 = v100 + 8 * v99;
                              v102 = (char*)v91 - v93;
                              v103 = (__int64)&v95[v100 + -8 * v96];
                              *(_QWORD*)&v95[v100] = v89;
                              v92 = (__int64)&v95[v100 + 8];
                              memcpy(v103, v93, v102);
                              v16 = v198;
                              v198[29] = v103;
                              v198[30] = v92;
                              v198[31] = v101;
                              if (v93 != 0) {
                                v14 = v94;
                                v104 = 128;
                                if (*(_QWORD*)(*v94 + 200LL) == 0) {
                                  v104 = 56;
                                }
                                nn_mem_StandardAllocator_Free(*v94 + v104, v93);
                              }
                              else {
                                v14 = v94;
                              }
                              v33 = v187;
                              v54 = v203;
                            LABEL_148:
                              v16[30] = v92;
                              v215 = v89;
                              v214 = game_HashString(v89, v74);
                              GameRoutine_8999e0(v16 + 1, &v214, v54);
                              v106 = v54[1];
                              if (v106 != 0) {
                                v107 = strchr(v54[1], 95);
                                if (v107 != 0) {
                                  v106 = v107 + 1;
                                }
                              }
                              v215 = v106;
                              v214 = game_HashString(v106, v105);
                              GameRoutine_8999e0(v16 + 1, &v214, v54);
                            LABEL_152:
                              v108 = hub_ColumnAlias(v54);
                              if (v108 != 0) {
                                v215 = v108;
                                v214 = game_HashString(v108, v109);
                                GameRoutine_8999e0(v16 + 1, &v214, v54);
                                v215 = hub_ColumnAliasSuffix(v54);
                                v214 = game_HashString(v215, v110);
                                GameRoutine_8999e0(v16 + 1, &v214, v54);
                              }
                              goto LABEL_154;
                            }
                          LABEL_293:
                            GameRoutine_60a210(v23);
                          }
                        LABEL_295:
                          GameRoutine_60f930(v23);
                        }
                        if ((v67 & v68) == 0) {
                          while (1) {
                            v73 = v71[1];
                            if (v73 == v66) {
                              if (v71[2] == v66) {
                                goto LABEL_111;
                              }
                            }
                            else if ((v73 & v68) != v69) {
                              goto LABEL_112;
                            }
                            v71 = (_QWORD*)*v71;
                            if (v71 == nullptr) {
                              goto LABEL_112;
                            }
                          }
                        }
                        while (1) {
                          v72 = v71[1];
                          if (v72 == v66) {
                            break;
                          }
                          if (v72 >= v67) {
                            v72 %= v67;
                          }
                          if (v72 != v69) {
                            goto LABEL_112;
                          }
                        LABEL_100:
                          v71 = (_QWORD*)*v71;
                          if (v71 == nullptr) {
                            goto LABEL_112;
                          }
                        }
                        if (v71[2] != v66) {
                          goto LABEL_100;
                        }
                      LABEL_111:
                        if (*(_BYTE*)(*(_QWORD*)(v33 + 32) + 4LL) == 2 ||
                            v210 == 0 || v212 == 0) {
                          goto LABEL_112;
                        }
                        v111 = v210 - 1;
                        v112 = *(unsigned __int16*)(v71[3] + 22LL) + 1LL;
                        if ((v210 & (v210 - 1)) != 0) {
                          v113 = *(unsigned __int16*)(v71[3] + 22LL) + 1LL;
                          if (v210 <= v112) {
                            v113 = (unsigned int)v112 % (unsigned int)v210;
                          }
                        }
                        else {
                          v113 = ((_DWORD)v210 - 1) & (unsigned int)v112;
                        }
                        v114 = *(__int64***)(v209 + 8 * v113);
                        if (v114 == nullptr) {
                          goto LABEL_112;
                        }
                        v115 = *v114;
                        if (v115 == nullptr) {
                          goto LABEL_112;
                        }
                        if ((v210 & v111) == 0) {
                          while (1) {
                            v117 = v115[1];
                            if (v117 == v112) {
                              if (*((_DWORD*)v115 + 4) == (_DWORD)v112) {
                                goto LABEL_178;
                              }
                            }
                            else if ((v117 & v111) != v113) {
                              goto LABEL_112;
                            }
                            v115 = (__int64*)*v115;
                            if (v115 == nullptr) {
                              goto LABEL_112;
                            }
                          }
                        }
                        while (2) {
                          v116 = v115[1];
                          if (v116 != v112) {
                            if (v116 >= v210) {
                              v116 %= v210;
                            }
                            if (v116 != v113) {
                              goto LABEL_112;
                            }
                          }
                          else if (*((_DWORD*)v115 + 4) == (_DWORD)v112) {
                            break;
                          }
                          v115 = (__int64*)*v115;
                          if (v115 == nullptr) {
                            goto LABEL_112;
                          }
                          continue;
                        }
                      LABEL_178:
                        *(_QWORD*)(v16[8] + 8 * v115[3]) = v54;
                        v118 = v54[1];
                        if (v118 != 0) {
                          v214 = game_HashString(v118, v52);
                          v119 =
                              GameRoutine_899ee0(v16 + 11, &v214, &v214, &v208);
                          if ((v120 & 1) == 0) {
                            *(_QWORD*)(v119 + 24) = v54;
                          }
                          v121 = v54[1];
                          if (v121 != 0) {
                            v122 = strchr(v54[1], 95);
                            if (v122 != 0) {
                              v121 = v122 + 1;
                            }
                          }
                          v214 = game_HashString(v121, v120);
                          v123 =
                              GameRoutine_899ee0(v16 + 11, &v214, &v214, &v208);
                          if ((v124 & 1) == 0) {
                            *(_QWORD*)(v123 + 24) = v54;
                          }
                        }
                        if (hub_ColumnAlias(v54) != 0) {
                          v125 = hub_ColumnAlias(v54);
                          v214 = game_HashString(v125, v126);
                          v127 =
                              GameRoutine_899ee0(v16 + 11, &v214, &v214, &v208);
                          if ((v128 & 1) == 0) {
                            *(_QWORD*)(v127 + 24) = v54;
                          }
                          v129 = hub_ColumnAliasSuffix(v54);
                          v214 = game_HashString(v129, v130);
                          v131 =
                              GameRoutine_899ee0(v16 + 11, &v214, &v214, &v208);
                          if ((v132 & 1) == 0) {
                            *(_QWORD*)(v131 + 24) = v54;
                          }
                        }
                      LABEL_154:
                        v49 = v202 + 1;
                        if (v202 + 1 >=
                            (unsigned __int64)*(unsigned __int16*)(v33 + 18)) {
                          goto LABEL_191;
                        }
                        v48 = *(_QWORD*)(v33 + 40);
                      }
                      v65 = 32;
                      goto LABEL_86;
                    }
                  }
                LABEL_191:
                  v23 = hub_ResourceVariant(v15 + v17);
                  v134 = (unsigned __int64*)v16[27];
                  v133 = v16[28];
                  if ((unsigned __int64)v134 < v133) {
                    *v134 = v23;
                    v18 = (__int64)(v134 + 1);
                  }
                  else {
                    v135 = v16[26];
                    v136 = (char*)v134 - v135;
                    v137 = ((__int64)v134 - v135) >> 3;
                    v138 = v137 + 1;
                    if ((unsigned __int64)(v137 + 1) >> 61 != 0) {
                      goto LABEL_295;
                    }
                    v139 = v133 - v135;
                    if (v139 >> 2 > v138) {
                      v138 = v139 >> 2;
                    }
                    if ((unsigned __int64)v139 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v140 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v140 = v138;
                    }
                    if (v140 != 0) {
                      if (v140 >> 61 != 0) {
                        goto LABEL_293;
                      }
                      v141 = v23;
                      v142 =
                          fw_memory_HeapManager_Allocate(*v14, 8 * v140, 16, 0);
                      v23 = v141;
                    }
                    else {
                      v142 = 0;
                    }
                    v143 = v142 + 8 * v140;
                    v144 = (__int64)&v136[v142 + -8 * v137];
                    *(_QWORD*)&v136[v142] = v23;
                    v18 = (__int64)&v136[v142 + 8];
                    memcpy(v144, v135, v136);
                    v16[26] = v144;
                    v16[27] = v18;
                    v16[28] = v143;
                    if (v135 != 0) {
                      v145 = 128;
                      if (*(_QWORD*)(*v14 + 200LL) == 0) {
                        v145 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v14 + v145, v135);
                    }
                  }
                  v16[27] = v18;
                  ++v205;
                }
              }
            }
          }
        }
      }
    }
  LABEL_6:
    v17 += 24;
  } while (v17 != 288);
  v147 = (__int64*)v16[5];
  v146 = (__int64*)v16[6];
  v204 = v15;
  v148 = v14;
  v207 = v146;
  if (v147 != v146) {
    while (1) {
      v149 = *v147;
      if (*(_BYTE*)(*(_QWORD*)(*v147 + 32) + 4LL) == 2) {
        v150 = *(_WORD*)(v149 + 18);
        if (v150 != 0) {
          break;
        }
      }
    LABEL_208:
      if (++v147 == v207) {
        goto LABEL_224;
      }
    }
    v151 = 0;
    while (1) {
      v153 = *(_QWORD*)(v149 + 40) + 48 * v151;
      if (*(_QWORD*)(v153 + 40) != 0) {
        goto LABEL_215;
      }
      v154 = (_QWORD*)fw_memory_HeapManager_Allocate(*v148, 24, 16, 0);
      *v154 = 0;
      v154[1] = 0;
      v154[2] = 0;
      v214 = (__int64)GameData_1fa7ca8;
      v215 = (__int64)v154;
      v155 = &v214;
      v217 = &v214;
      v156 = *(unsigned __int16*)(v153 + 18);
      if (*(_WORD*)(v153 + 18) == 0) {
        goto LABEL_212;
      }
      v157 = *(_QWORD*)(v153 + 32);
      do {
        v64 = v217;
        v218[0] = v157;
        if (v217 == nullptr) {
          goto LABEL_292;
        }
        (*(void (**)(__int64*, _QWORD*))(*v217 + 48))(v217, v218);
        v157 += 216;
        --v156;
      } while (v156 != 0);
      v155 = v217;
      if (v217 == &v214) {
      LABEL_212:
        v152 = 32;
      }
      else {
        if (v217 == nullptr) {
          goto LABEL_214;
        }
        v152 = 40;
      }
      (*(void (**)(void))(*v155 + v152))();
    LABEL_214:
      *(_QWORD*)(v153 + 40) = v154;
      v150 = *(_WORD*)(v149 + 18);
    LABEL_215:
      if (++v151 >= (unsigned __int64)v150) {
        goto LABEL_208;
      }
    }
  }

LABEL_224:
  if (v205 > 1) {
    v158 = (__int64*)v198[5];
    v159 = (__int64*)v198[6];
    if (v158 == v159) {
    LABEL_228:
      v161 = v198[8];
      if (v198[9] != v161) {
        v162 = 0;
        do {
          *(_WORD*)(*(_QWORD*)(v161 + 8 * v162) + 16LL) = v162;
          ++v162;
          v161 = v198[8];
        } while (v162 < (v198[9] - v161) >> 3);
      }
    }
    else {
      while (1) {
        v160 = *v158++;
        if (*(_BYTE*)(*(_QWORD*)(v160 + 32) + 4LL) == 2) {
          break;
        }
        if (v158 == v159) {
          goto LABEL_228;
        }
      }
      v163 = v198[8];
      if (v198[9] != v163) {
        v164 = 0;
        do {
          *(_WORD*)(*(_QWORD*)(v163 + 8 * v164) + 16LL) = v164;
          ++v164;
          v163 = v198[8];
        } while (v164 < (v198[9] - v163) >> 3);
      }
    }
  }
  v165 = v211;
  if (v211 != nullptr) {
    do {
      v166 = (_QWORD*)*v165;
      if (*(_QWORD*)(*v148 + 200LL) != 0) {
        v167 = 128;
      }
      else {
        v167 = 56;
      }
      nn_mem_StandardAllocator_Free(*v148 + v167, v165);
      v165 = v166;
    } while (v166 != nullptr);
  }
  v168 = v209;
  v209 = 0;
  if (v168 != 0) {
    v169 = 128;
    if (*(_QWORD*)(*v148 + 200LL) == 0) {
      v169 = 56;
    }
    nn_mem_StandardAllocator_Free(*v148 + v169, v168);
  }
  for (i = 288; i != 0; i -= 24) {
    if ((*(_BYTE*)(v204 + i - 24) & 1) != 0) {
      v171 = *(_QWORD*)(v204 + i - 8);
      if (v171 != 0) {
        if (*(_QWORD*)(*v148 + 200LL) != 0) {
          v172 = 128;
        }
        else {
          v172 = 56;
        }
        nn_mem_StandardAllocator_Free(*v148 + v172, v171);
      }
    }
  }
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v173 = 128;
  }
  else {
    v173 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v173, v204);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v174 = 128;
  }
  else {
    v174 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v174, v189);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v175 = 128;
  }
  else {
    v175 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v175, v190);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v176 = 128;
  }
  else {
    v176 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v176, v191);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v177 = 128;
  }
  else {
    v177 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v177, v192);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v178 = 128;
  }
  else {
    v178 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v178, v193);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v179 = 128;
  }
  else {
    v179 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v179, v194);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v180 = 128;
  }
  else {
    v180 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v180, v195);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v181 = 128;
  }
  else {
    v181 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v181, v196);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v182 = 128;
  }
  else {
    v182 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v182, v197);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v183 = 128;
  }
  else {
    v183 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v183, v199);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v184 = 128;
  }
  else {
    v184 = 56;
  }
  nn_mem_StandardAllocator_Free(*v148 + v184, v200);
  if (*(_QWORD*)(*v148 + 200LL) != 0) {
    v185 = 128;
  }
  else {
    v185 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v148 + v185, v201);
}

#pragma GCC visibility pop
