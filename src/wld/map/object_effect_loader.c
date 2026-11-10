#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ElfFile_631220(_QWORD, _QWORD);
__int64 GameRoutine_18df040(_QWORD);
__int64 GameRoutine_198e190(_QWORD, _QWORD);
__int64 GameRoutine_198e2c0(_QWORD);
__int64 GameRoutine_198f8e0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a81a70(_QWORD, _QWORD);
__int64 ObjectBuildCreate_c23160(_QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_198e2a0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 wld_map_ObjectEffectLoader_LoadAsync_lambda0_Invoke(__int64 result,
                                                            __int64* a2);

__int64 wld_map_ObjectEffectLoader_LoadAsync_lambda0_Invoke(__int64 result,
                                                            __int64* a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  unsigned int* v5;
  unsigned int* v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int128 v20;
  __int64 v21;
  _DWORD* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  char* v34;
  __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  char* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  _QWORD* primeEm;
  __int64 v60;
  unsigned __int64 v61;
  float v62;
  char* v63;
  float v64;
  float v65;
  _BOOL8 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  _QWORD** v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  _QWORD* v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  _QWORD* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  _QWORD* v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  char* v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
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
  unsigned __int64 v130;
  __int64 v131;
  char v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  unsigned __int64 v144;
  _QWORD* v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  _QWORD* v149;
  __int64 v150;
  float v151;
  unsigned __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  unsigned int* v155;
  __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  _QWORD* v159;
  unsigned __int64 v160;
  float v161;
  __int64 v162;
  unsigned __int64 v163;
  char* v164;
  _WORD v165[8];
  __int64 v166;
  __int16 v167;
  __int64 v168;
  _DWORD* v169;
  __int16 v170[8];
  __int64 v171;
  __int128 v172;
  __int128 v173;
  __int128 v174;
  __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  char* v178;
  __int64 v179;
  unsigned __int64 v180;
  char* v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  char v191;
  unsigned __int64 v192;

  v2 = *(_BYTE**)(result + 8);
  v3 = *a2;
  if (*a2 != 0 && *(_QWORD*)(v3 + 592) != 0) {
    v154 = *(_QWORD*)(result + 8);
    v4 = ElfFile_631220(v3 + 800, "world::data::s_disposObjectEffect");
    v5 = (unsigned int*)ElfFile_631220(v3 + 800,
                                       "world::data::disposObjectEffect_num");
    v157 = 0;
    v158 = 0;
    v159 = nullptr;
    v160 = 0;
    v161 = 0x1.0000000000000p+0f;
    if (*v5 != 0) {
      v6 = v5;
      v7 = 0;
      v8 = (__int64*)GameData_212c540;
      v9 = GameData_212c548;
      v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v155 = v5;
      v156 = v4;
      while (1) {
        v11 = *v8;
        v12 = v8[1];
        v165[0] = 0;
        v167 = 0;
        v170[0] = 0;
        v191 = 0;
        v189 = 0;
        v190 = 0;
        v187 = 0;
        v188 = 0;
        v185 = 0;
        v186 = 0;
        v183 = 0;
        v184 = 0;
        v181 = nullptr;
        v182 = 0;
        v179 = 0;
        v180 = 0;
        v177 = 0;
        v178 = nullptr;
        v175 = 0;
        v176 = 0;
        *(_QWORD*)&v172 = v11;
        *((_QWORD*)&v172 + 1) = v12;
        *(_QWORD*)&v173 = v11;
        *((_QWORD*)&v173 + 1) = v12;
        v13 = v9[1];
        *(_QWORD*)&v174 = *v9;
        *((_QWORD*)&v174 + 1) = v13;
        v14 = v4 + 104 * v7;
        v192 = 0xFFFFFFFF00000002LL;
        GameRoutine_60a020(v165, *(_QWORD*)(v14 + 8));
        v15 = *(_QWORD*)(v14 + 64);
        if (v15 != 0) {
          GameRoutine_60a020(v170, v15);
        }
        v16 = *(_QWORD*)(v14 + 80);
        v17 = strlen(v16);
        LODWORD(v175) = GameRoutine_a81a70(v16, v17);
        v18 = *(_QWORD*)(v14 + 72);
        v19 = strlen(v18);
        HIDWORD(v175) = GameRoutine_a81a70(v18, v19);
        *(_QWORD*)&v20 = *(_QWORD*)(v14 + 24);
        *((_QWORD*)&v20 + 1) = *(unsigned int*)(v14 + 32);
        v172 = v20;
        *(_QWORD*)&v20 = *(_QWORD*)(v14 + 36);
        *((_QWORD*)&v20 + 1) = *(unsigned int*)(v14 + 44);
        v173 = v20;
        *(_QWORD*)&v20 = *(_QWORD*)(v14 + 48);
        *((_QWORD*)&v20 + 1) = *(unsigned int*)(v14 + 56);
        v174 = v20;
        GameRoutine_60a020(&v167, *(_QWORD*)(v14 + 16));
        v21 = v168;
        if ((v167 & 1) == 0) {
          v21 = (unsigned __int8)v167 >> 1;
        }
        if (v21 == 4) {
          v22 = (_DWORD*)((char*)&v167 + 1);
          if ((v167 & 1) != 0) {
            v22 = v169;
          }
          if (*v22 == 1886351180) {
            break;
          }
        }
        if ((v188 & 1) != 0) {
          goto LABEL_15;
        }
      LABEL_237:
        if ((v185 & 1) != 0 && v187 != 0) {
          v134 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v134 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v134);
        }
        if ((v182 & 1) != 0 && v184 != 0) {
          v135 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v135 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v135);
        }
        if ((v179 & 1) != 0 && v181 != nullptr) {
          v136 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v136 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v136);
        }
        if ((v176 & 1) != 0 && v178 != nullptr) {
          v137 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v137 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v137);
        }
        if ((v170[0] & 1) != 0 && v171 != 0) {
          v138 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v138 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v138);
        }
        if ((v167 & 1) != 0 && v169 != nullptr) {
          v139 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v139 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v139);
        }
        if ((v165[0] & 1) != 0 && v166 != 0) {
          v140 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v140 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v140);
        }
        if (++v7 >= (unsigned __int64)*v6) {
          goto LABEL_272;
        }
      }
      v24 = *(_QWORD*)(v14 + 88);
      if (v24 == 0) {
        goto LABEL_45;
      }
      v25 = strlen(*(_QWORD*)(v14 + 88));
      if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_292;
      }
      v26 = v25;
      if (v25 >= 0x17) {
        if ((v25 | 7) == 0x17) {
          v28 = 26;
        }
        else {
          v28 = (v25 | 7) + 1;
        }
        v27 = (char*)fw_memory_HeapManager_Allocate(*v10, v28, 16, 0);
        v163 = v26;
        v164 = v27;
        v162 = v28 | 1;
      }
      else {
        v27 = (char*)&v162 + 1;
        LOBYTE(v162) = 2 * v25;
        if (v25 == 0) {
          goto LABEL_29;
        }
      }
      memmove(v27, v24, v26);
    LABEL_29:
      v27[v26] = 0;
      if ((v176 & 1) != 0) {
        if ((v162 & 1) != 0) {
          v29 = v164;
        }
        else {
          v29 = (char*)&v162 + 1;
        }
        if ((v162 & 1) != 0) {
          v30 = v163;
        }
        else {
          v30 = (unsigned __int64)(unsigned __int8)v162 >> 1;
        }
        SpineModel_64dde0(&v176, v29, v30);
        if ((v162 & 1) == 0) {
          goto LABEL_45;
        }
        goto LABEL_41;
      }
      if ((v162 & 1) == 0) {
        v176 = v162;
        v177 = v163;
        v178 = v164;
        goto LABEL_45;
      }
      GameRoutine_64df20(&v176, v164, v163);
      if ((v162 & 1) != 0) {
      LABEL_41:
        if (v164 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*v10 + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v31);
        }
      }
    LABEL_45:
      v32 = *(_QWORD*)(v14 + 96);
      if (v32 == 0) {
        goto LABEL_71;
      }
      v25 = strlen(*(_QWORD*)(v14 + 96));
      if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_292;
      }
      v33 = v25;
      if (v25 >= 0x17) {
        if ((v25 | 7) == 0x17) {
          v35 = 26;
        }
        else {
          v35 = (v25 | 7) + 1;
        }
        v34 = (char*)fw_memory_HeapManager_Allocate(*v10, v35, 16, 0);
        v163 = v33;
        v164 = v34;
        v162 = v35 | 1;
      }
      else {
        v34 = (char*)&v162 + 1;
        LOBYTE(v162) = 2 * v25;
        if (v25 == 0) {
        LABEL_55:
          v34[v33] = 0;
          if ((v179 & 1) != 0) {
            if ((v162 & 1) != 0) {
              v36 = v164;
            }
            else {
              v36 = (char*)&v162 + 1;
            }
            if ((v162 & 1) != 0) {
              v37 = v163;
            }
            else {
              v37 = (unsigned __int64)(unsigned __int8)v162 >> 1;
            }
            SpineModel_64dde0(&v179, v36, v37);
            if ((v162 & 1) == 0) {
              goto LABEL_71;
            }
          }
          else {
            if ((v162 & 1) == 0) {
              v179 = v162;
              v180 = v163;
              v181 = v164;
              goto LABEL_71;
            }
            GameRoutine_64df20(&v179, v164, v163);
            if ((v162 & 1) == 0) {
            LABEL_71:
              GameRoutine_18df040(&v176);
              HIDWORD(v192) = v7;
              LODWORD(v192) = 1;
              v39 = *(_QWORD*)v14;
              v25 = strlen(*(_QWORD*)v14);
              if (v25 >= 0xFFFFFFFFFFFFFFF7LL) {
              LABEL_292:
                String_60a1d0(v25);
              }
              v40 = v25;
              if (v25 >= 0x17) {
                if ((v25 | 7) == 0x17) {
                  v42 = 26;
                }
                else {
                  v42 = (v25 | 7) + 1;
                }
                v41 = (char*)fw_memory_HeapManager_Allocate(*v10, v42, 16, 0);
                v163 = v40;
                v164 = v41;
                v162 = v42 | 1;
              }
              else {
                v41 = (char*)&v162 + 1;
                LOBYTE(v162) = 2 * v25;
                if (v25 == 0) {
                  goto LABEL_80;
                }
              }
              memmove(v41, v39, v40);
            LABEL_80:
              v41[v40] = 0;
              if ((v162 & 1) != 0) {
                v43 = v164;
              }
              else {
                v43 = (char*)&v162 + 1;
              }
              if ((v162 & 1) != 0) {
                v44 = v163;
              }
              else {
                v44 = (unsigned __int64)(unsigned __int8)v162 >> 1;
              }
              v45 = std___1___hash_memory(v43, v44);
              v46 = v158;
              v47 = v45;
              if (v158 != 0) {
                v48 = v158 - 1;
                if ((v158 & (v158 - 1)) != 0) {
                  v39 = v45;
                  if (v45 >= v158) {
                    v39 = v45 % v158;
                  }
                }
                else {
                  v39 = v48 & v45;
                }
                v49 = *(_QWORD**)(v157 + 8 * v39);
                if (v49 != nullptr) {
                  v50 = (_QWORD*)*v49;
                  if (*v49 != 0) {
                    if ((v158 & v48) == 0) {
                      while (1) {
                        v55 = v50[1];
                        if (v55 == v47) {
                          v56 = *((unsigned __int8*)v50 + 16);
                          v57 = v50[3];
                          if ((v56 & 1) == 0) {
                            v57 = v56 >> 1;
                          }
                          if (v57 == v44) {
                            v58 = (v56 & 1) != 0 ? (_QWORD*)v50[4]
                                                 : (_QWORD*)((char*)v50 + 17);
                            if ((unsigned int)memcmp(v58, v43, v44) == 0) {
                              goto LABEL_118;
                            }
                          }
                        }
                        else if ((v55 & v48) != v39) {
                          goto LABEL_119;
                        }
                        v50 = (_QWORD*)*v50;
                        if (v50 == nullptr) {
                          goto LABEL_119;
                        }
                      }
                    }
                    do {
                      v51 = v50[1];
                      if (v51 == v47) {
                        v52 = *((unsigned __int8*)v50 + 16);
                        v53 = v50[3];
                        if ((v52 & 1) == 0) {
                          v53 = v52 >> 1;
                        }
                        if (v53 == v44) {
                          v54 = (v52 & 1) != 0 ? (_QWORD*)v50[4]
                                               : (_QWORD*)((char*)v50 + 17);
                          if ((unsigned int)memcmp(v54, v43, v44) == 0) {
                          LABEL_118:
                            v6 = v155;
                            v4 = v156;
                            v8 = (__int64*)GameData_212c540;
                            goto LABEL_194;
                          }
                        }
                      }
                      else {
                        if (v51 >= v158) {
                          v51 %= v158;
                        }
                        if (v51 != v39) {
                          break;
                        }
                      }
                      v50 = (_QWORD*)*v50;
                    } while (v50 != nullptr);
                  }
                }
              }
            LABEL_119:
              primeEm =
                  (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 64, 16, 0);
              v60 = v162;
              v61 = v163;
              v62 = v161;
              v50 = primeEm;
              *primeEm = 0;
              primeEm[1] = v47;
              v162 = 0;
              v163 = 0;
              primeEm[6] = 0;
              primeEm[7] = 0;
              primeEm[2] = v60;
              primeEm[3] = v61;
              v63 = v164;
              v164 = nullptr;
              primeEm[4] = v63;
              primeEm[5] = 0;
              v64 = (float)(v160 + 1);
              if (v46 != 0 && (float)(v62 * (float)v46) >= v64) {
              LABEL_185:
                v88 = v157;
                v89 = *(_QWORD**)(v157 + 8 * v39);
                if (v89 != nullptr) {
                  v6 = v155;
                  v4 = v156;
                  *v50 = *v89;
                  *v89 = v50;
                  v8 = (__int64*)GameData_212c540;
                }
                else {
                  v90 = v159;
                  v159 = v50;
                  *v50 = v90;
                  v6 = v155;
                  *(_QWORD*)(v88 + 8 * v39) = &v159;
                  v4 = v156;
                  v8 = (__int64*)GameData_212c540;
                  if (*v50 != 0) {
                    v91 = *(_QWORD*)(*v50 + 8LL);
                    if ((v46 & (v46 - 1)) != 0) {
                      if (v91 >= v46) {
                        v91 %= v46;
                      }
                    }
                    else {
                      v91 &= v46 - 1;
                    }
                    *(_QWORD*)(v157 + 8 * v91) = v50;
                  }
                }
                ++v160;
              LABEL_194:
                primeEm = (_QWORD*)v50[6];
                v92 = v50[7];
                if ((unsigned __int64)primeEm >= v92) {
                  v94 = v50[5];
                  v95 = (char*)primeEm - v94;
                  v96 =
                      1 - 0xF0F0F0F0F0F0F0FLL * (((__int64)primeEm - v94) >> 4);
                  if (v96 > 0xF0F0F0F0F0F0F0LL) {
                    GameRoutine_198e2a0();
                  }
                  v97 = 0xF0F0F0F0F0F0F0F1LL * ((__int64)(v92 - v94) >> 4);
                  if (2 * v97 > v96) {
                    v96 = 2 * v97;
                  }
                  if (v97 >= 0x78787878787878LL) {
                    v98 = 0xF0F0F0F0F0F0F0LL;
                  }
                  else {
                    v98 = v96;
                  }
                  if (v98 != 0) {
                    if (v98 > 0xF0F0F0F0F0F0F0LL) {
                    LABEL_293:
                      GameRoutine_60a210(primeEm);
                    }
                    v99 =
                        fw_memory_HeapManager_Allocate(*v10, 272 * v98, 16, 0);
                  }
                  else {
                    v99 = 0;
                  }
                  v100 = &v95[v99];
                  GameRoutine_198e190(&v95[v99], v165);
                  v101 = v50[5];
                  v102 = (__int64*)v50[6];
                  v103 = (__int64)&v95[v99 + v101 - (_QWORD)v102];
                  if (v102 != (__int64*)v101) {
                    v104 = (__int64*)v50[5];
                    v105 = (__int64)&v100[v101 - (_QWORD)v102];
                    do {
                      *(_QWORD*)(v103 + 8) = v104[1];
                      v106 = *v104;
                      *(_QWORD*)(v103 + 16) = v104[2];
                      *(_QWORD*)v103 = v106;
                      *v104 = 0;
                      v104[1] = 0;
                      v104[2] = 0;
                      v107 = v104[3];
                      v108 = v104[5];
                      *(_QWORD*)(v103 + 32) = v104[4];
                      *(_QWORD*)(v103 + 40) = v108;
                      *(_QWORD*)(v103 + 24) = v107;
                      v104[4] = 0;
                      v104[5] = 0;
                      v104[3] = 0;
                      v109 = v104[6];
                      v110 = v104[8];
                      *(_QWORD*)(v103 + 56) = v104[7];
                      *(_QWORD*)(v103 + 64) = v110;
                      *(_QWORD*)(v103 + 48) = v109;
                      v104[7] = 0;
                      v104[8] = 0;
                      v104[6] = 0;
                      v111 = v104[13];
                      v112 = v104[14];
                      v113 = v104[15];
                      *(_QWORD*)(v103 + 128) = v104[16];
                      *(_QWORD*)(v103 + 112) = v112;
                      v115 = v104[10];
                      v114 = v104[11];
                      v116 = v104[12];
                      *(_QWORD*)(v103 + 120) = v113;
                      *(_QWORD*)(v103 + 96) = v116;
                      *(_QWORD*)(v103 + 104) = v111;
                      *(_QWORD*)(v103 + 80) = v115;
                      *(_QWORD*)(v103 + 88) = v114;
                      v117 = v104[17];
                      v118 = v104[19];
                      *(_QWORD*)(v103 + 144) = v104[18];
                      *(_QWORD*)(v103 + 152) = v118;
                      *(_QWORD*)(v103 + 136) = v117;
                      v104[18] = 0;
                      v104[19] = 0;
                      v104[17] = 0;
                      v119 = v104[20];
                      v120 = v104[22];
                      *(_QWORD*)(v103 + 168) = v104[21];
                      *(_QWORD*)(v103 + 176) = v120;
                      *(_QWORD*)(v103 + 160) = v119;
                      v104[21] = 0;
                      v104[22] = 0;
                      v104[20] = 0;
                      v121 = v104[23];
                      v122 = v104[25];
                      *(_QWORD*)(v103 + 192) = v104[24];
                      *(_QWORD*)(v103 + 200) = v122;
                      *(_QWORD*)(v103 + 184) = v121;
                      v104[24] = 0;
                      v104[25] = 0;
                      v104[23] = 0;
                      v123 = v104[26];
                      v124 = v104[28];
                      *(_QWORD*)(v103 + 216) = v104[27];
                      *(_QWORD*)(v103 + 224) = v124;
                      *(_QWORD*)(v103 + 208) = v123;
                      v104[27] = 0;
                      v104[28] = 0;
                      v104[26] = 0;
                      v125 = v104[29];
                      v126 = v104[31];
                      *(_QWORD*)(v103 + 240) = v104[30];
                      *(_QWORD*)(v103 + 248) = v126;
                      *(_QWORD*)(v103 + 232) = v125;
                      v104[30] = 0;
                      v104[31] = 0;
                      v104[29] = 0;
                      *(_QWORD*)(v103 + 256) = v104[32];
                      LODWORD(v125) = *((_DWORD*)v104 + 66);
                      v104 += 34;
                      *(_DWORD*)(v103 + 264) = v125;
                      v103 += 272;
                    } while (v104 != v102);
                    do {
                      ObjectBuildCreate_c23160(v101 + 136);
                      if ((*(_BYTE*)(v101 + 48) & 1) != 0 &&
                          *(_QWORD*)(v101 + 64) != 0) {
                        v127 = 128;
                        if (*(_QWORD*)(*v10 + 200LL) == 0) {
                          v127 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v10 + v127);
                      }
                      if ((*(_BYTE*)(v101 + 24) & 1) != 0 &&
                          *(_QWORD*)(v101 + 40) != 0) {
                        v128 = 128;
                        if (*(_QWORD*)(*v10 + 200LL) == 0) {
                          v128 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v10 + v128);
                      }
                      if ((*(_BYTE*)v101 & 1) != 0 &&
                          *(_QWORD*)(v101 + 16) != 0) {
                        v129 = 128;
                        if (*(_QWORD*)(*v10 + 200LL) == 0) {
                          v129 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v10 + v129);
                      }
                      v101 += 272;
                    } while ((__int64*)v101 != v102);
                    v101 = v50[5];
                    v103 = v105;
                  }
                  v93 = (__int64)(v100 + 272);
                  v130 = v99 + 272 * v98;
                  v50[5] = v103;
                  v50[6] = v100 + 272;
                  v6 = v155;
                  v4 = v156;
                  v50[7] = v130;
                  v8 = (__int64*)GameData_212c540;
                  if (v101 != 0) {
                    v131 = 128;
                    if (*(_QWORD*)(*v10 + 200LL) == 0) {
                      v131 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v10 + v131);
                  }
                }
                else {
                  v93 = GameRoutine_198e190(primeEm, v165) + 272;
                }
                v132 = v162;
                v50[6] = v93;
                if ((v132 & 1) != 0 && v164 != nullptr) {
                  v133 = 128;
                  if (*(_QWORD*)(*v10 + 200LL) == 0) {
                    v133 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v10 + v133);
                }
                v9 = GameData_212c548;
                if ((v188 & 1) == 0) {
                  goto LABEL_237;
                }
              LABEL_15:
                if (v190 != 0) {
                  v23 = 128;
                  if (*(_QWORD*)(*v10 + 200LL) == 0) {
                    v23 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v10 + v23);
                }
                goto LABEL_237;
              }
              v65 = v64 / v62;
              v66 = (v46 & (v46 - 1)) != 0;
              if (v46 < 3) {
                v66 = true;
              }
              v67 = v66 | (2 * v46);
              v68 = vcvtps_u64_f32(v65);
              if (v67 <= v68) {
                v69 = v68;
              }
              else {
                v69 = v67;
              }
              if (v69 == 1) {
                v69 = 2;
              }
              else if ((v69 & (v69 - 1)) != 0) {
                primeEm = (_QWORD*)std___1___next_prime(v69);
                v69 = (unsigned __int64)primeEm;
              }
              if (v69 <= v158) {
                if (v69 >= v158) {
                  goto LABEL_180;
                }
                primeEm = (_QWORD*)vcvtps_u64_f32((float)v160 / v161);
                if (v158 < 3 || (v158 & (v158 - 1)) != 0) {
                  primeEm = (_QWORD*)std___1___next_prime(primeEm);
                }
                else {
                  v74 = 1LL << -(char)__clz((unsigned __int64)primeEm - 1);
                  if ((unsigned __int64)primeEm >= 2) {
                    primeEm = (_QWORD*)v74;
                  }
                }
                if (v69 <= (unsigned __int64)primeEm) {
                  v69 = (unsigned __int64)primeEm;
                }
                if (v69 >= v158) {
                  goto LABEL_180;
                }
                if (v69 == 0) {
                  v86 = v157;
                  v157 = 0;
                  if (v86 != 0) {
                    v87 = 128;
                    if (*(_QWORD*)(*v10 + 200LL) == 0) {
                      v87 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v10 + v87);
                  }
                  v158 = 0;
                  goto LABEL_180;
                }
              }
              if (v69 >> 61 != 0) {
                goto LABEL_293;
              }
              v70 = fw_memory_HeapManager_Allocate(*v10, 8 * v69, 16, 0);
              v71 = v157;
              v157 = v70;
              if (v71 != 0) {
                v72 = 128;
                if (*(_QWORD*)(*v10 + 200LL) == 0) {
                  v72 = 56;
                }
                nn_mem_StandardAllocator_Free(*v10 + v72);
              }
              v158 = v69;
              if (v69 >= 8) {
                v73 = 0;
                do {
                  *(_QWORD*)(v157 + 8 * v73) = 0;
                  *(_QWORD*)(v157 + 8 * v73 + 8) = 0;
                  *(_QWORD*)(v157 + 8 * v73 + 16) = 0;
                  *(_QWORD*)(v157 + 8 * v73 + 24) = 0;
                  *(_QWORD*)(v157 + 8 * v73 + 32) = 0;
                  *(_QWORD*)(v157 + 8 * v73 + 40) = 0;
                  *(_QWORD*)(v157 + 8 * v73 + 48) = 0;
                  v75 = v157 + 8 * v73;
                  v73 += 8;
                  *(_QWORD*)(v75 + 56) = 0;
                } while ((v69 & 0x1FFFFFFFFFFFFFF8LL) != v73);
              }
              else {
                v73 = 0;
              }
              v76 = v69 & 7;
              if ((v69 & 7) != 0) {
                v77 = 8 * v73;
                do {
                  --v76;
                  *(_QWORD*)(v157 + v77) = 0;
                  v77 += 8;
                } while (v76 != 0);
              }
              v78 = (_QWORD**)v159;
              if (v159 == nullptr) {
                goto LABEL_180;
              }
              v79 = v159[1];
              v80 = v69 - 1;
              if ((v69 & (v69 - 1)) == 0) {
                v83 = v79 & v80;
                *(_QWORD*)(v157 + 8 * v83) = &v159;
                while (1) {
                  v84 = *v78;
                  if (*v78 == nullptr) {
                    break;
                  }
                  v85 = v84[1] & v80;
                  if (v85 == v83) {
                    v78 = (_QWORD**)*v78;
                  }
                  else if (*(_QWORD*)(v157 + 8 * v85) != 0) {
                    *v78 = (_QWORD*)*v84;
                    *v84 = **(_QWORD**)(v157 + 8 * v85);
                    **(_QWORD**)(v157 + 8 * v85) = v84;
                  }
                  else {
                    *(_QWORD*)(v157 + 8 * v85) = v78;
                    v78 = (_QWORD**)v84;
                    v83 = v85;
                  }
                }
              LABEL_180:
                v46 = v158;
                if ((v158 & (v158 - 1)) != 0) {
                  if (v47 >= v158) {
                    v39 = v47 % v158;
                  }
                  else {
                    v39 = v47;
                  }
                }
                else {
                  v39 = (v158 - 1) & v47;
                }
                goto LABEL_185;
              }
              if (v79 >= v69) {
                v79 %= v69;
              }
              *(_QWORD*)(v157 + 8 * v79) = &v159;
              v81 = *v78;
              if (*v78 == nullptr) {
                goto LABEL_180;
              }
              while (1) {
                v82 = v81[1];
                if (v82 >= v69) {
                  v82 %= v69;
                }
                if (v82 != v79) {
                  if (*(_QWORD*)(v157 + 8 * v82) == 0) {
                    *(_QWORD*)(v157 + 8 * v82) = v78;
                    goto LABEL_157;
                  }
                  *v78 = (_QWORD*)*v81;
                  *v81 = **(_QWORD**)(v157 + 8 * v82);
                  **(_QWORD**)(v157 + 8 * v82) = v81;
                  v81 = v78;
                }
                v82 = v79;
              LABEL_157:
                v78 = (_QWORD**)v81;
                v81 = (_QWORD*)*v81;
                v79 = v82;
                if (v81 == nullptr) {
                  goto LABEL_180;
                }
              }
            }
          }
          if (v164 != nullptr) {
            v38 = 128;
            if (*(_QWORD*)(*v10 + 200LL) == 0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v38);
          }
          goto LABEL_71;
        }
      }
      memmove(v34, v32, v33);
      goto LABEL_55;
    }
  LABEL_272:
    v2 = (_BYTE*)v154;
    if (*(_BYTE*)(v154 + 64) == 1) {
      GameRoutine_198f8e0(v154 + 24);
      v141 = v157;
      v142 = *(_QWORD*)(v154 + 24);
      v157 = 0;
      *(_QWORD*)(v154 + 24) = v141;
      if (v142 != 0) {
        v143 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v143 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v143);
      }
      v144 = v158;
      v145 = v159;
      v146 = v160;
      v158 = 0;
      *(_QWORD*)(v154 + 40) = v159;
      *(_QWORD*)(v154 + 32) = v144;
      *(_QWORD*)(v154 + 48) = v146;
      *(float*)(v154 + 56) = v161;
      if (v146 != 0) {
        v147 = v145[1];
        if ((v144 & (v144 - 1)) != 0) {
          if (v147 >= v144) {
            v147 %= v144;
          }
        }
        else {
          v147 &= v144 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(v154 + 24) + 8 * v147) = v154 + 40;
        v159 = nullptr;
        v160 = 0;
      }
    }
    else {
      v148 = v158;
      v149 = v159;
      v150 = v157;
      v157 = 0;
      v158 = 0;
      *(_QWORD*)(v154 + 40) = v159;
      *(_QWORD*)(v154 + 24) = v150;
      *(_QWORD*)(v154 + 32) = v148;
      v151 = v161;
      v152 = v160;
      *(_QWORD*)(v154 + 48) = v160;
      *(float*)(v154 + 56) = v151;
      if (v152 != 0) {
        v153 = v149[1];
        if ((v148 & (v148 - 1)) != 0) {
          if (v153 >= v148) {
            v153 %= v148;
          }
        }
        else {
          v153 &= v148 - 1;
        }
        *(_QWORD*)(v150 + 8 * v153) = v154 + 40;
        v159 = nullptr;
        v160 = 0;
      }
      *(_BYTE*)(v154 + 64) = 1;
    }
    result = GameRoutine_198e2c0(&v157);
  }
  *v2 = 1;
  return result;
}

#pragma GCC visibility pop
