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
__int64 wld_map_ObjectEffectLoader_LoadAsync_lambda0_Invoke_alt1(
    __int64 result,
    __int64* a2) __asm__("wld_map_ObjectEffectLoader_LoadAsync_lambda0_Invoke");
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 ElfFile_631220_alt1(__int64*, const char*) __asm__("ElfFile_631220");
__int64 GameRoutine_198e190_alt1(__int64,
                                 __int64*) __asm__("GameRoutine_198e190");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_a81a70_alt1(__int64,
                                unsigned __int64) __asm__("GameRoutine_a81a70");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
char* GameRoutine_18df040_alt1(char* result) __asm__("GameRoutine_18df040");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_198e2c0_alt1(__int64*) __asm__("GameRoutine_198e2c0");
void GameRoutine_198f8e0_alt1(_QWORD*) __asm__("GameRoutine_198f8e0");
void ObjectBuildCreate_c23160_alt1(__int64) __asm__("ObjectBuildCreate_c23160");
void __attribute__((noreturn))
GameRoutine_198e2a0_alt1() __asm__("GameRoutine_198e2a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void wld_map_ObjectEffectLoader_LoadAsync_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);

void wld_map_ObjectEffectLoader_LoadAsync_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{

#pragma clang fp contract(off)
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  unsigned int* v5;
  unsigned int* v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  const char* v16;
  unsigned __int64 v17;
  const char* v18;
  unsigned __int64 v19;
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
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  unsigned __int64 v63;
  float v64;
  __int64 v65;
  float v66;
  float v67;
  _BOOL8 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 primeEm;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  _QWORD** v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  _QWORD* v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  _QWORD* v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  __int64 v107;
  __int64* v108;
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
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  char v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  _QWORD* v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  _QWORD* v156;
  __int64 v157;
  float v158;
  unsigned __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  unsigned int* v162;
  __int64 v163;
  struct {
    __int64 v164;
    unsigned __int64 v165;
  } v164_;
  struct {
    _QWORD* v166;
    unsigned __int64 v167;
    float v168;
  } v166_;
  struct {
    __int64 v169;
    unsigned __int64 v170;
    char* v171;
  } v169_;
  struct {
    __int64 v172[2];
    __int64 v173;
  } v172_;
  struct {
    __int16 v174;
    char gap138_[6];
    __int64 v175;
    _DWORD* v176;
  } v174_;
  struct {
    __int16 v177[8];
    __int64 v178;
    char gap184_[8];
    __int128 v179;
    __int128 v180;
    __int128 v181;
    __int64 v182;
  } v177_;
  struct {
    __int64 v183;
    unsigned __int64 v184;
    char* v185;
  } v183_;
  __int64 v186;
  unsigned __int64 v187;
  char* v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  char v198;
  unsigned __int64 v199;

  v2 = *(_BYTE**)(a1 + 8);
  v3 = *a2;
  if (*a2 != 0 && *(_QWORD*)(v3 + 592) != 0) {
    v161 = *(_QWORD*)(a1 + 8);
    v4 = ElfFile_631220_alt1((__int64*)(v3 + 800),
                             "world::data::s_disposObjectEffect");
    v5 = (unsigned int*)ElfFile_631220_alt1(
        (__int64*)(v3 + 800), "world::data::disposObjectEffect_num");
    v164_.v164 = 0;
    v164_.v165 = 0;
    v166_.v166 = nullptr;
    v166_.v167 = 0;
    v166_.v168 = 0x1.0000000000000p+0f;
    if (*v5 != 0) {
      v6 = v5;
      v7 = 0;
      v8 = (__int64*)GameData_212c540;
      v9 = GameData_212c548;
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      v162 = v5;
      v163 = v4;
      while (1) {
        v11 = *v8;
        v12 = v8[1];
        LOWORD(v172_.v172[0]) = 0;
        v174_.v174 = 0;
        v177_.v177[0] = 0;
        v198 = 0;
        v196 = 0;
        v197 = 0;
        v194 = 0;
        v195 = 0;
        v192 = 0;
        v193 = 0;
        v190 = 0;
        v191 = 0;
        v188 = nullptr;
        v189 = 0;
        v186 = 0;
        v187 = 0;
        v183_.v184 = 0;
        v183_.v185 = nullptr;
        v177_.v182 = 0;
        v183_.v183 = 0;
        *(_QWORD*)&v177_.v179 = v11;
        *((_QWORD*)&v177_.v179 + 1) = v12;
        *(_QWORD*)&v177_.v180 = v11;
        *((_QWORD*)&v177_.v180 + 1) = v12;
        v13 = v9[1];
        *(_QWORD*)&v177_.v181 = *v9;
        *((_QWORD*)&v177_.v181 + 1) = v13;
        v14 = v4 + 104 * v7;
        v199 = 0xFFFFFFFF00000002LL;
        GameRoutine_60a020_alt1((__int64)v172_.v172, *(const char**)(v14 + 8));
        v15 = *(const char**)(v14 + 64);
        if (v15 != nullptr) {
          GameRoutine_60a020_alt1((__int64)v177_.v177, v15);
        }
        v16 = *(const char**)(v14 + 80);
        v17 = strlen_alt1(v16);
        LODWORD(v177_.v182) = GameRoutine_a81a70_alt1((__int64)v16, v17);
        v18 = *(const char**)(v14 + 72);
        v19 = strlen_alt1(v18);
        HIDWORD(v177_.v182) = GameRoutine_a81a70_alt1((__int64)v18, v19);
        *(_QWORD*)&v20 = *(_QWORD*)(v14 + 24);
        *((_QWORD*)&v20 + 1) = *(unsigned int*)(v14 + 32);
        v177_.v179 = v20;
        *(_QWORD*)&v20 = *(_QWORD*)(v14 + 36);
        *((_QWORD*)&v20 + 1) = *(unsigned int*)(v14 + 44);
        v177_.v180 = v20;
        *(_QWORD*)&v20 = *(_QWORD*)(v14 + 48);
        *((_QWORD*)&v20 + 1) = *(unsigned int*)(v14 + 56);
        v177_.v181 = v20;
        GameRoutine_60a020_alt1((__int64)&v174_.v174,
                                *(const char**)(v14 + 16));
        v21 = v174_.v175;
        if ((v174_.v174 & 1) == 0) {
          v21 = (unsigned __int8)v174_.v174 >> 1;
        }
        if (v21 == 4) {
          v22 = (_DWORD*)((char*)&v174_.v174 + 1);
          if ((v174_.v174 & 1) != 0) {
            v22 = v174_.v176;
          }
          if (*v22 == 1886351180) {
            break;
          }
        }
        if ((v195 & 1) != 0) {
          goto LABEL_15;
        }
      LABEL_237:
        if ((v192 & 1) != 0 && v194 != 0) {
          v141 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v141 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v141, v194);
        }
        if ((v189 & 1) != 0 && v191 != 0) {
          v142 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v142 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v142, v191);
        }
        if ((v186 & 1) != 0 && v188 != nullptr) {
          v143 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v143 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v143, (__int64)v188);
        }
        if ((v183_.v183 & 1) != 0 && v183_.v185 != nullptr) {
          v144 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v144 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v144, (__int64)v183_.v185);
        }
        if ((v177_.v177[0] & 1) != 0 && v177_.v178 != 0) {
          v145 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v145 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v145, v177_.v178);
        }
        if ((v174_.v174 & 1) != 0 && v174_.v176 != nullptr) {
          v146 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v146 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v146, (__int64)v174_.v176);
        }
        if ((v172_.v172[0] & 1) != 0 && v172_.v173 != 0) {
          v147 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v147 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v147, v172_.v173);
        }
        if (++v7 >= (unsigned __int64)*v6) {
          goto LABEL_272;
        }
      }
      v24 = *(_QWORD*)(v14 + 88);
      if (v24 == 0) {
        goto LABEL_45;
      }
      v25 = strlen_alt1(*(const char**)(v14 + 88));
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
        v27 = (char*)fw_memory_HeapManager_Allocate_alt1(*v10, v28, 16, 0);
        v169_.v170 = v26;
        v169_.v171 = v27;
        v169_.v169 = v28 | 1;
      }
      else {
        v27 = (char*)&v169_.v169 + 1;
        LOBYTE(v169_.v169) = 2 * v25;
        if (v25 == 0) {
          goto LABEL_29;
        }
      }
      memmove_alt1((__int64)v27, v24, v26);
    LABEL_29:
      v27[v26] = 0;
      if ((v183_.v183 & 1) != 0) {
        if ((v169_.v169 & 1) != 0) {
          v29 = v169_.v171;
        }
        else {
          v29 = (char*)&v169_.v169 + 1;
        }
        if ((v169_.v169 & 1) != 0) {
          v30 = v169_.v170;
        }
        else {
          v30 = (unsigned __int64)(unsigned __int8)v169_.v169 >> 1;
        }
        SpineModel_64dde0_alt1(&v183_.v183, (__int64)v29, v30);
        if ((v169_.v169 & 1) == 0) {
          goto LABEL_45;
        }
        goto LABEL_41;
      }
      if ((v169_.v169 & 1) == 0) {
        v183_.v183 = v169_.v169;
        v183_.v184 = v169_.v170;
        v183_.v185 = v169_.v171;
        goto LABEL_45;
      }
      GameRoutine_64df20_alt1(&v183_.v183, (__int64)v169_.v171, v169_.v170);
      if ((v169_.v169 & 1) != 0) {
      LABEL_41:
        if (v169_.v171 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v10 + v31, (__int64)v169_.v171);
        }
      }
    LABEL_45:
      v32 = *(_QWORD*)(v14 + 96);
      if (v32 == 0) {
        goto LABEL_71;
      }
      v33 = strlen_alt1(*(const char**)(v14 + 96));
      if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_292;
      }
      v34 = v33;
      if (v33 >= 0x17) {
        if ((v33 | 7) == 0x17) {
          v36 = 26;
        }
        else {
          v36 = (v33 | 7) + 1;
        }
        v35 = (char*)fw_memory_HeapManager_Allocate_alt1(*v10, v36, 16, 0);
        v169_.v170 = v34;
        v169_.v171 = v35;
        v169_.v169 = v36 | 1;
      }
      else {
        v35 = (char*)&v169_.v169 + 1;
        LOBYTE(v169_.v169) = 2 * v33;
        if (v33 == 0) {
        LABEL_55:
          v35[v34] = 0;
          if ((v186 & 1) != 0) {
            if ((v169_.v169 & 1) != 0) {
              v37 = v169_.v171;
            }
            else {
              v37 = (char*)&v169_.v169 + 1;
            }
            if ((v169_.v169 & 1) != 0) {
              v38 = v169_.v170;
            }
            else {
              v38 = (unsigned __int64)(unsigned __int8)v169_.v169 >> 1;
            }
            SpineModel_64dde0_alt1(&v186, (__int64)v37, v38);
            if ((v169_.v169 & 1) == 0) {
              goto LABEL_71;
            }
          }
          else {
            if ((v169_.v169 & 1) == 0) {
              v186 = v169_.v169;
              v187 = v169_.v170;
              v188 = v169_.v171;
              goto LABEL_71;
            }
            GameRoutine_64df20_alt1(&v186, (__int64)v169_.v171, v169_.v170);
            if ((v169_.v169 & 1) == 0) {
            LABEL_71:
              GameRoutine_18df040_alt1((char*)&v183_.v183);
              HIDWORD(v199) = v7;
              LODWORD(v199) = 1;
              v40 = *(_QWORD*)v14;
              v41 = strlen_alt1(*(const char**)v14);
              if (v41 >= 0xFFFFFFFFFFFFFFF7LL) {
              LABEL_292:
                String_60a1d0_alt1();
              }
              v42 = v41;
              if (v41 >= 0x17) {
                if ((v41 | 7) == 0x17) {
                  v44 = 26;
                }
                else {
                  v44 = (v41 | 7) + 1;
                }
                v43 = (char*)fw_memory_HeapManager_Allocate_alt1(*v10, v44, 16,
                                                                 0);
                v169_.v170 = v42;
                v169_.v171 = v43;
                v169_.v169 = v44 | 1;
              }
              else {
                v43 = (char*)&v169_.v169 + 1;
                LOBYTE(v169_.v169) = 2 * v41;
                if (v41 == 0) {
                  goto LABEL_80;
                }
              }
              memmove_alt1((__int64)v43, v40, v42);
            LABEL_80:
              v43[v42] = 0;
              if ((v169_.v169 & 1) != 0) {
                v45 = v169_.v171;
              }
              else {
                v45 = (char*)&v169_.v169 + 1;
              }
              if ((v169_.v169 & 1) != 0) {
                v46 = v169_.v170;
              }
              else {
                v46 = (unsigned __int64)(unsigned __int8)v169_.v169 >> 1;
              }
              v47 = std___1___hash_memory_alt1((__int64)v45, v46);
              v48 = v164_.v165;
              v49 = v47;
              if (v164_.v165 != 0) {
                v50 = v164_.v165 - 1;
                if ((v164_.v165 & (v164_.v165 - 1)) != 0) {
                  v40 = v47;
                  if (v47 >= v164_.v165) {
                    v40 = v47 % v164_.v165;
                  }
                }
                else {
                  v40 = v50 & v47;
                }
                v51 = *(_QWORD**)(v164_.v164 + 8 * v40);
                if (v51 != nullptr) {
                  v52 = (_QWORD*)*v51;
                  if (*v51 != 0) {
                    if ((v164_.v165 & v50) == 0) {
                      while (1) {
                        v57 = v52[1];
                        if (v57 == v49) {
                          v58 = *((unsigned __int8*)v52 + 16);
                          v59 = v52[3];
                          if ((v58 & 1) == 0) {
                            v59 = v58 >> 1;
                          }
                          if (v59 == v46) {
                            v60 = (v58 & 1) != 0 ? v52[4] : (__int64)v52 + 17;
                            if (memcmp_alt1(v60, (__int64)v45, v46) == 0) {
                              goto LABEL_118;
                            }
                          }
                        }
                        else if ((v57 & v50) != v40) {
                          goto LABEL_119;
                        }
                        v52 = (_QWORD*)*v52;
                        if (v52 == nullptr) {
                          goto LABEL_119;
                        }
                      }
                    }
                    do {
                      v53 = v52[1];
                      if (v53 == v49) {
                        v54 = *((unsigned __int8*)v52 + 16);
                        v55 = v52[3];
                        if ((v54 & 1) == 0) {
                          v55 = v54 >> 1;
                        }
                        if (v55 == v46) {
                          v56 = (v54 & 1) != 0 ? v52[4] : (__int64)v52 + 17;
                          if (memcmp_alt1(v56, (__int64)v45, v46) == 0) {
                          LABEL_118:
                            v6 = v162;
                            v4 = v163;
                            v8 = (__int64*)GameData_212c540;
                            goto LABEL_194;
                          }
                        }
                      }
                      else {
                        if (v53 >= v164_.v165) {
                          v53 %= v164_.v165;
                        }
                        if (v53 != v40) {
                          break;
                        }
                      }
                      v52 = (_QWORD*)*v52;
                    } while (v52 != nullptr);
                  }
                }
              }
            LABEL_119:
              v61 =
                  (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 64, 16, 0);
              v62 = v169_.v169;
              v63 = v169_.v170;
              v64 = v166_.v168;
              v52 = v61;
              *v61 = 0;
              v61[1] = v49;
              v169_.v169 = 0;
              v169_.v170 = 0;
              v61[6] = 0;
              v61[7] = 0;
              v61[2] = v62;
              v61[3] = v63;
              v65 = (__int64)v169_.v171;
              v169_.v171 = nullptr;
              v61[4] = v65;
              v61[5] = 0;
              v66 = (float)(v166_.v167 + 1);
              if (v48 != 0 && (float)(v64 * (float)v48) >= v66) {
              LABEL_185:
                v91 = v164_.v164;
                v92 = *(_QWORD**)(v164_.v164 + 8 * v40);
                if (v92 != nullptr) {
                  v6 = v162;
                  v4 = v163;
                  *v52 = *v92;
                  *v92 = v52;
                  v8 = (__int64*)GameData_212c540;
                }
                else {
                  v93 = v166_.v166;
                  v166_.v166 = v52;
                  *v52 = v93;
                  v6 = v162;
                  *(_QWORD*)(v91 + 8 * v40) = &v166_.v166;
                  v4 = v163;
                  v8 = (__int64*)GameData_212c540;
                  if (*v52 != 0) {
                    v94 = *(_QWORD*)(*v52 + 8LL);
                    if ((v48 & (v48 - 1)) != 0) {
                      if (v94 >= v48) {
                        v94 %= v48;
                      }
                    }
                    else {
                      v94 &= v48 - 1;
                    }
                    *(_QWORD*)(v164_.v164 + 8 * v94) = v52;
                  }
                }
                ++v166_.v167;
              LABEL_194:
                v95 = v52[6];
                v96 = v52[7];
                if (v95 >= v96) {
                  v98 = v52[5];
                  v99 = v95 - v98;
                  v100 = 1 - 0xF0F0F0F0F0F0F0FLL * ((__int64)(v95 - v98) >> 4);
                  if (v100 > 0xF0F0F0F0F0F0F0LL) {
                    GameRoutine_198e2a0_alt1();
                  }
                  v101 = 0xF0F0F0F0F0F0F0F1LL * ((__int64)(v96 - v98) >> 4);
                  if (2 * v101 > v100) {
                    v100 = 2 * v101;
                  }
                  if (v101 >= 0x78787878787878LL) {
                    v102 = 0xF0F0F0F0F0F0F0LL;
                  }
                  else {
                    v102 = v100;
                  }
                  if (v102 != 0) {
                    if (v102 > 0xF0F0F0F0F0F0F0LL) {
                    LABEL_293:
                      GameRoutine_60a210_alt1();
                    }
                    v103 = fw_memory_HeapManager_Allocate_alt1(*v10, 272 * v102,
                                                               16, 0);
                  }
                  else {
                    v103 = 0;
                  }
                  v104 = v103 + v99;
                  GameRoutine_198e190_alt1(v103 + v99, v172_.v172);
                  v105 = v52[5];
                  v106 = (__int64*)v52[6];
                  v107 = v103 + v99 + v105 - (_QWORD)v106;
                  if (v106 != (__int64*)v105) {
                    v108 = (__int64*)v52[5];
                    v109 = v104 + v105 - (_QWORD)v106;
                    do {
                      *(_QWORD*)(v107 + 8) = v108[1];
                      v110 = *v108;
                      *(_QWORD*)(v107 + 16) = v108[2];
                      *(_QWORD*)v107 = v110;
                      *v108 = 0;
                      v108[1] = 0;
                      v108[2] = 0;
                      v111 = v108[3];
                      v112 = v108[5];
                      *(_QWORD*)(v107 + 32) = v108[4];
                      *(_QWORD*)(v107 + 40) = v112;
                      *(_QWORD*)(v107 + 24) = v111;
                      v108[4] = 0;
                      v108[5] = 0;
                      v108[3] = 0;
                      v113 = v108[6];
                      v114 = v108[8];
                      *(_QWORD*)(v107 + 56) = v108[7];
                      *(_QWORD*)(v107 + 64) = v114;
                      *(_QWORD*)(v107 + 48) = v113;
                      v108[7] = 0;
                      v108[8] = 0;
                      v108[6] = 0;
                      v115 = v108[13];
                      v116 = v108[14];
                      v117 = v108[15];
                      *(_QWORD*)(v107 + 128) = v108[16];
                      *(_QWORD*)(v107 + 112) = v116;
                      v119 = v108[10];
                      v118 = v108[11];
                      v120 = v108[12];
                      *(_QWORD*)(v107 + 120) = v117;
                      *(_QWORD*)(v107 + 96) = v120;
                      *(_QWORD*)(v107 + 104) = v115;
                      *(_QWORD*)(v107 + 80) = v119;
                      *(_QWORD*)(v107 + 88) = v118;
                      v121 = v108[17];
                      v122 = v108[19];
                      *(_QWORD*)(v107 + 144) = v108[18];
                      *(_QWORD*)(v107 + 152) = v122;
                      *(_QWORD*)(v107 + 136) = v121;
                      v108[18] = 0;
                      v108[19] = 0;
                      v108[17] = 0;
                      v123 = v108[20];
                      v124 = v108[22];
                      *(_QWORD*)(v107 + 168) = v108[21];
                      *(_QWORD*)(v107 + 176) = v124;
                      *(_QWORD*)(v107 + 160) = v123;
                      v108[21] = 0;
                      v108[22] = 0;
                      v108[20] = 0;
                      v125 = v108[23];
                      v126 = v108[25];
                      *(_QWORD*)(v107 + 192) = v108[24];
                      *(_QWORD*)(v107 + 200) = v126;
                      *(_QWORD*)(v107 + 184) = v125;
                      v108[24] = 0;
                      v108[25] = 0;
                      v108[23] = 0;
                      v127 = v108[26];
                      v128 = v108[28];
                      *(_QWORD*)(v107 + 216) = v108[27];
                      *(_QWORD*)(v107 + 224) = v128;
                      *(_QWORD*)(v107 + 208) = v127;
                      v108[27] = 0;
                      v108[28] = 0;
                      v108[26] = 0;
                      v129 = v108[29];
                      v130 = v108[31];
                      *(_QWORD*)(v107 + 240) = v108[30];
                      *(_QWORD*)(v107 + 248) = v130;
                      *(_QWORD*)(v107 + 232) = v129;
                      v108[30] = 0;
                      v108[31] = 0;
                      v108[29] = 0;
                      *(_QWORD*)(v107 + 256) = v108[32];
                      LODWORD(v129) = *((_DWORD*)v108 + 66);
                      v108 += 34;
                      *(_DWORD*)(v107 + 264) = v129;
                      v107 += 272;
                    } while (v108 != v106);
                    do {
                      ObjectBuildCreate_c23160_alt1(v105 + 136);
                      if ((*(_BYTE*)(v105 + 48) & 1) != 0) {
                        v131 = *(_QWORD*)(v105 + 64);
                        if (v131 != 0) {
                          v132 = 128;
                          if (*(_QWORD*)(*v10 + 200) == 0) {
                            v132 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*v10 + v132, v131);
                        }
                      }
                      if ((*(_BYTE*)(v105 + 24) & 1) != 0) {
                        v133 = *(_QWORD*)(v105 + 40);
                        if (v133 != 0) {
                          v134 = 128;
                          if (*(_QWORD*)(*v10 + 200) == 0) {
                            v134 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*v10 + v134, v133);
                        }
                      }
                      if ((*(_BYTE*)v105 & 1) != 0) {
                        v135 = *(_QWORD*)(v105 + 16);
                        if (v135 != 0) {
                          v136 = 128;
                          if (*(_QWORD*)(*v10 + 200) == 0) {
                            v136 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*v10 + v136, v135);
                        }
                      }
                      v105 += 272;
                    } while ((__int64*)v105 != v106);
                    v105 = v52[5];
                    v107 = v109;
                  }
                  v97 = v104 + 272;
                  v137 = v103 + 272 * v102;
                  v52[5] = v107;
                  v52[6] = v104 + 272;
                  v6 = v162;
                  v4 = v163;
                  v52[7] = v137;
                  v8 = (__int64*)GameData_212c540;
                  if (v105 != 0) {
                    v138 = 128;
                    if (*(_QWORD*)(*v10 + 200) == 0) {
                      v138 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v10 + v138, v105);
                  }
                }
                else {
                  v97 = GameRoutine_198e190_alt1(v95, v172_.v172) + 272;
                }
                v139 = v169_.v169;
                v52[6] = v97;
                if ((v139 & 1) != 0 && v169_.v171 != nullptr) {
                  v140 = 128;
                  if (*(_QWORD*)(*v10 + 200) == 0) {
                    v140 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v10 + v140,
                                                     (__int64)v169_.v171);
                }
                v9 = GameData_212c548;
                if ((v195 & 1) == 0) {
                  goto LABEL_237;
                }
              LABEL_15:
                if (v197 != 0) {
                  v23 = 128;
                  if (*(_QWORD*)(*v10 + 200) == 0) {
                    v23 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v10 + v23, v197);
                }
                goto LABEL_237;
              }
              v67 = v66 / v64;
              v68 = (v48 & (v48 - 1)) != 0;
              if (v48 < 3) {
                v68 = true;
              }
              v69 = v68 | (2 * v48);
              v70 = vcvtps_u64_f32(v67);
              if (v69 <= v70) {
                primeEm = v70;
              }
              else {
                primeEm = v69;
              }
              if (primeEm == 1) {
                primeEm = 2;
              }
              else if ((primeEm & (primeEm - 1)) != 0) {
                primeEm = std___1___next_prime_alt1(primeEm);
              }
              if (primeEm <= v164_.v165) {
                if (primeEm >= v164_.v165) {
                  goto LABEL_180;
                }
                v76 = vcvtps_u64_f32((float)v166_.v167 / v166_.v168);
                if (v164_.v165 < 3 || (v164_.v165 & (v164_.v165 - 1)) != 0) {
                  v76 = std___1___next_prime_alt1(v76);
                }
                else {
                  v77 = 1LL << -(char)__clz(v76 - 1);
                  if (v76 >= 2) {
                    v76 = v77;
                  }
                }
                if (primeEm <= v76) {
                  primeEm = v76;
                }
                if (primeEm >= v164_.v165) {
                  goto LABEL_180;
                }
                if (primeEm == 0) {
                  v89 = v164_.v164;
                  v164_.v164 = 0;
                  if (v89 != 0) {
                    v90 = 128;
                    if (*(_QWORD*)(*v10 + 200) == 0) {
                      v90 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt1(*v10 + v90, v89);
                  }
                  v164_.v165 = 0;
                  goto LABEL_180;
                }
              }
              if (primeEm >> 61 != 0) {
                goto LABEL_293;
              }
              v72 =
                  fw_memory_HeapManager_Allocate_alt1(*v10, 8 * primeEm, 16, 0);
              v73 = v164_.v164;
              v164_.v164 = v72;
              if (v73 != 0) {
                v74 = 128;
                if (*(_QWORD*)(*v10 + 200) == 0) {
                  v74 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v10 + v74, v73);
              }
              v164_.v165 = primeEm;
              if (primeEm >= 8) {
                v75 = 0;
                do {
                  *(_QWORD*)(v164_.v164 + 8 * v75) = 0;
                  *(_QWORD*)(v164_.v164 + 8 * v75 + 8) = 0;
                  *(_QWORD*)(v164_.v164 + 8 * v75 + 16) = 0;
                  *(_QWORD*)(v164_.v164 + 8 * v75 + 24) = 0;
                  *(_QWORD*)(v164_.v164 + 8 * v75 + 32) = 0;
                  *(_QWORD*)(v164_.v164 + 8 * v75 + 40) = 0;
                  *(_QWORD*)(v164_.v164 + 8 * v75 + 48) = 0;
                  v78 = v164_.v164 + 8 * v75;
                  v75 += 8;
                  *(_QWORD*)(v78 + 56) = 0;
                } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v75);
              }
              else {
                v75 = 0;
              }
              v79 = primeEm & 7;
              if ((primeEm & 7) != 0) {
                v80 = 8 * v75;
                do {
                  --v79;
                  *(_QWORD*)(v164_.v164 + v80) = 0;
                  v80 += 8;
                } while (v79 != 0);
              }
              v81 = (_QWORD**)v166_.v166;
              if (v166_.v166 == nullptr) {
                goto LABEL_180;
              }
              v82 = v166_.v166[1];
              v83 = primeEm - 1;
              if ((primeEm & (primeEm - 1)) == 0) {
                v86 = v82 & v83;
                *(_QWORD*)(v164_.v164 + 8 * v86) = &v166_.v166;
                while (1) {
                  v87 = *v81;
                  if (*v81 == nullptr) {
                    break;
                  }
                  v88 = v87[1] & v83;
                  if (v88 == v86) {
                    v81 = (_QWORD**)*v81;
                  }
                  else if (*(_QWORD*)(v164_.v164 + 8 * v88) != 0) {
                    *v81 = (_QWORD*)*v87;
                    *v87 = **(_QWORD**)(v164_.v164 + 8 * v88);
                    **(_QWORD**)(v164_.v164 + 8 * v88) = v87;
                  }
                  else {
                    *(_QWORD*)(v164_.v164 + 8 * v88) = v81;
                    v81 = (_QWORD**)v87;
                    v86 = v88;
                  }
                }
              LABEL_180:
                v48 = v164_.v165;
                if ((v164_.v165 & (v164_.v165 - 1)) != 0) {
                  if (v49 >= v164_.v165) {
                    v40 = v49 % v164_.v165;
                  }
                  else {
                    v40 = v49;
                  }
                }
                else {
                  v40 = (v164_.v165 - 1) & v49;
                }
                goto LABEL_185;
              }
              if (v82 >= primeEm) {
                v82 %= primeEm;
              }
              *(_QWORD*)(v164_.v164 + 8 * v82) = &v166_.v166;
              v84 = *v81;
              if (*v81 == nullptr) {
                goto LABEL_180;
              }
              while (1) {
                v85 = v84[1];
                if (v85 >= primeEm) {
                  v85 %= primeEm;
                }
                if (v85 != v82) {
                  if (*(_QWORD*)(v164_.v164 + 8 * v85) == 0) {
                    *(_QWORD*)(v164_.v164 + 8 * v85) = v81;
                    goto LABEL_157;
                  }
                  *v81 = (_QWORD*)*v84;
                  *v84 = **(_QWORD**)(v164_.v164 + 8 * v85);
                  **(_QWORD**)(v164_.v164 + 8 * v85) = v84;
                  v84 = v81;
                }
                v85 = v82;
              LABEL_157:
                v81 = (_QWORD**)v84;
                v84 = (_QWORD*)*v84;
                v82 = v85;
                if (v84 == nullptr) {
                  goto LABEL_180;
                }
              }
            }
          }
          if (v169_.v171 != nullptr) {
            v39 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v39, (__int64)v169_.v171);
          }
          goto LABEL_71;
        }
      }
      memmove_alt1((__int64)v35, v32, v34);
      goto LABEL_55;
    }
  LABEL_272:
    v2 = (_BYTE*)v161;
    if (*(_BYTE*)(v161 + 64) == 1) {
      GameRoutine_198f8e0_alt1((_QWORD*)(v161 + 24));
      v148 = v164_.v164;
      v149 = *(_QWORD*)(v161 + 24);
      v164_.v164 = 0;
      *(_QWORD*)(v161 + 24) = v148;
      if (v149 != 0) {
        v150 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v150 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v150, v149);
      }
      v151 = v164_.v165;
      v152 = v166_.v166;
      v153 = v166_.v167;
      v164_.v165 = 0;
      *(_QWORD*)(v161 + 40) = v166_.v166;
      *(_QWORD*)(v161 + 32) = v151;
      *(_QWORD*)(v161 + 48) = v153;
      *(float*)(v161 + 56) = v166_.v168;
      if (v153 != 0) {
        v154 = v152[1];
        if ((v151 & (v151 - 1)) != 0) {
          if (v154 >= v151) {
            v154 %= v151;
          }
        }
        else {
          v154 &= v151 - 1;
        }
        *(_QWORD*)(*(_QWORD*)(v161 + 24) + 8 * v154) = v161 + 40;
        v166_.v166 = nullptr;
        v166_.v167 = 0;
      }
    }
    else {
      v155 = v164_.v165;
      v156 = v166_.v166;
      v157 = v164_.v164;
      v164_.v164 = 0;
      v164_.v165 = 0;
      *(_QWORD*)(v161 + 40) = v166_.v166;
      *(_QWORD*)(v161 + 24) = v157;
      *(_QWORD*)(v161 + 32) = v155;
      v158 = v166_.v168;
      v159 = v166_.v167;
      *(_QWORD*)(v161 + 48) = v166_.v167;
      *(float*)(v161 + 56) = v158;
      if (v159 != 0) {
        v160 = v156[1];
        if ((v155 & (v155 - 1)) != 0) {
          if (v160 >= v155) {
            v160 %= v155;
          }
        }
        else {
          v160 &= v155 - 1;
        }
        *(_QWORD*)(v157 + 8 * v160) = v161 + 40;
        v166_.v166 = nullptr;
        v166_.v167 = 0;
      }
      *(_BYTE*)(v161 + 64) = 1;
    }
    GameRoutine_198e2c0_alt1(&v164_.v164);
  }
  *v2 = 1;
}

#pragma GCC visibility pop
