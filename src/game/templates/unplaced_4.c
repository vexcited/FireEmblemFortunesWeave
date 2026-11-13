#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameHr_ae1fe0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GmapUIDef_1654700(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_67ed20(_QWORD*);
__int64 GameRoutine_1571500(__int64, __int64);
__int64 GameRoutine_18422d0(__int64, __int64, unsigned int);
__int64 GameRoutine_64be60();
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_15635a0(__int64*, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_gmap_anonymous_168ad00(__int64);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strstr(const char*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_21f1658;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_204d200[10];
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 Registration_18d7920(__int64);
unsigned __int64 strlen(const char*);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_8875e0();
void __attribute__((noreturn)) GameRoutine_a56ee0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__int64 game_templates_a54440(__int64 a1, __int64 a2, __int64 a3,
                              unsigned __int64 a4, _QWORD* a5);
float game_templates_a56600(float32x2_t* a1, float* a2, float32x4_t* a3,
                            float32x4_t a4, float a5, float a6);
__int64* game_templates_14a5400(__int64 a1, __int64 a2);
__int64 game_templates_15704e0(__int64 a1, int* a2, __int64 a3, _DWORD** a4);
__int64 game_templates_1570b30(__int64* a1, __int64 a2);
void game_templates_167fe20(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_templates_18d7c60(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2,
                                                       unsigned __int64 a3);

__int64 game_templates_a54440(__int64 a1, __int64 a2, __int64 a3,
                              unsigned __int64 a4, _QWORD* a5)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  unsigned __int64 v20;
  _DWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int8* v27;
  unsigned __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int8* v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  __int128 v41;
  char v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned __int64 v49;
  int v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  bool v57;
  __int64 v59;
  bool v60;
  bool v61;
  bool v64;
  int* v65;
  bool v68;
  bool v70;
  int* v71;
  __int64 v76;
  int* v77;
  __int64 v78;
  int v79;
  __int64 v80;
  unsigned __int64 v81;
  char v82;
  int v84;
  int v85;
  signed __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int16 v95;
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
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  int v110;
  int i;
  __int64 v112;
  __int16 v113;
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
  unsigned __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  unsigned __int64 v131;
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
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int16 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  int v169;
  int v170;
  __int64 v171;
  __int64 v172;
  __int64 v174;
  __int64 v175;
  __int64 v177;
  __int64 v178;
  __int64 v180;
  __int64 v181;
  int v182;
  unsigned int v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  int v188;
  _BOOL4 v189;
  __int64 v191;
  unsigned __int64 v192;
  _QWORD* v193;
  unsigned int v194;
  int v195;
  __int64 v196;
  int v197;
  bool v198;
  int v199;
  bool v200;
  __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  __int128 v205;
  __int128 v206;
  int v207;

  *(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 8);
  v6 = *(unsigned __int16*)(a2 + 80);
  if (*(_WORD*)(a2 + 80) == 0) {
    v11 = 0;
    v202 = 0;
    v13 = 0;
    v12 = 1;
    goto LABEL_192;
  }
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       160 * v6, 16, 0);
  v11 = v10;
  v202 = v10 + 160 * v6;
  if ((_DWORD)v6 != 1) {
    v203 = v6;
    v14 = 1;
    v197 = 0;
    v13 = v10;
    v192 = a4;
    v193 = a5;
    v191 = a3;
    while (1) {
      v15 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
      v16 = v15 != 0 ? (const char*)(*(_QWORD*)(v15 + 16 * v14 + 32) + 2LL)
                     : nullptr;
      v17 = *a5;
      v18 = (__int64*)(*a5 + 16 * v14);
      if (v18[1] == a4 && memcmp(*v18, a3, a4) == 0) {
        break;
      }
      v19 = (__int64*)(v17 + 16LL * *(unsigned __int16*)(*(_QWORD*)(a2 + 16) +
                                                         96 * v14 + 42));
      if (v19[1] == a4 && memcmp(*v19, a3, a4) == 0) {
        v21 = *(_DWORD**)(a1 + 88);
        v20 = *(_QWORD*)(a1 + 96);
        if ((unsigned __int64)v21 >= v20) {
          v29 = *(_QWORD*)(a1 + 80);
          v30 = (char*)v21 - v29;
          v31 = ((__int64)v21 - v29) >> 2;
          v32 = v31 + 1;
          if ((unsigned __int64)(v31 + 1) >> 62 != 0) {
            GameRoutine_6e5a20();
          }
          v33 = v20 - v29;
          if (v33 >> 1 > v32) {
            v32 = v33 >> 1;
          }
          if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFFCLL) {
            v34 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v34 = v32;
          }
          if (v34 != 0) {
            if (v34 >> 62 != 0) {
              goto LABEL_289;
            }
            v35 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v34, 16, 0);
          }
          else {
            v35 = 0;
          }
          v106 = v35 + 4 * v34;
          v107 = (unsigned __int64)v21 - v29;
          v108 = (__int64)&v30[v35 + -4 * v31];
          *(_DWORD*)&v30[v35] = v14;
          v22 = (__int64)&v30[v35 + 4];
          memcpy(v108, v29, v107);
          *(_QWORD*)(a1 + 80) = v108;
          *(_QWORD*)(a1 + 88) = v22;
          *(_QWORD*)(a1 + 96) = v106;
          if (v29 != 0) {
            v109 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v109 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, v29);
          }
          a4 = v192;
          a5 = v193;
          a3 = v191;
        }
        else {
          *v21 = v14;
          v22 = (__int64)(v21 + 1);
        }
        *(_QWORD*)(a1 + 88) = v22;
      }
    LABEL_7:
      if (++v14 == v203) {
        v12 = v197 + 1;
        goto LABEL_192;
      }
    }
    v23 = strstr(v16, "__");
    if (v23 != 0) {
      v24 = v23 + 2;
      v25 = strlen((const char*)(v23 + 2));
      if (v25 == 0) {
        goto LABEL_292;
      }
      v26 = v25;
      v27 = (unsigned __int8*)v24;
      while ((unsigned int)*v27 - 48 >= 0xA) {
        ++v27;
        if (--v26 == 0) {
          v27 = (unsigned __int8*)(v24 + v25);
          break;
        }
      }
      v28 = v27 == (unsigned __int8*)(v24 + v25) ? -1LL
                                                 : (unsigned __int64)&v27[-v24];
      if (v25 < v28) {
      LABEL_292:
        String_60a250("string_view::substr");
      }
      if (v25 - v28 <= 1) {
        String_60a250("string_view::at");
      }
      v36 = (unsigned __int8*)(v24 + v28);
      v37 = v36[1];
      v38 = *v36;
      v199 = v37 - 48;
      if (v38 <= 0x60) {
        v39 = -48;
      }
      else {
        v39 = -87;
      }
      v194 = v39 + v38;
    }
    v40 = v197;
    if (v197 <= v199) {
      v40 = v199;
    }
    v197 = v40;
    v205 = *(_OWORD*)(*(_QWORD*)(a2 + 32) + (v14 << 6) + 48);
    v196 = *(_QWORD*)(a2 + 32) + (v14 << 6);
    if (strstr(v16, "_cols__") == 0 &&
        ((v78 = strstr(v16, "_c")) != 0 || (v78 = strstr(v16, "_C")) != 0)) {
      v41 = v205;
      if (*(_BYTE*)(v78 - 1) != 95) {
        v79 = *(unsigned __int8*)(v78 + 2);
        if (*(_BYTE*)(v78 + 2) != 0) {
          v80 = v78 + 3;
          v81 = 0;
          v42 = 0;
          do {
            switch (v79) {
            case 'B':
              v82 = 2;
              break;
            case 'L':
              v82 = 8;
              break;
            case 'H':
              v82 = 4;
              break;
            default:
              goto LABEL_48;
            }
            v42 |= v82;
            v79 = *(unsigned __int8*)(v80 + v81);
            if (*(_BYTE*)(v80 + v81) == 0) {
              break;
            }
          } while (v81++ < 0xFF);
        LABEL_48:
          v43 = *(_QWORD*)(a2 + 16) + 96 * v14;
          if (*(_WORD*)(v43 + 50) != 0) {
            v44 = 0;
            v45 = 0;
            v46 = 0;
            v200 = false;
            v201 = 0;
            v198 = false;
            v47 = 0;
            v48 = 0;
            v49 = 0;
            v50 = 1025758986;
            v51 = 0;
            v52 = 0;
            v53 = 0;
            do {
              v54 = *(_QWORD*)(v43 + 8);
              v55 = *(_QWORD*)(v54 + v46);
              v56 = strlen((const char*)(v55 + 2));
              if (v56 - 9 > 0xB) {
                v41 = v205;
              }
              else {
                v41 = v205;
                switch (v56) {
                case 9uLL:
                  v57 = *(_QWORD*)(v55 + 2) == 0x61745F68746F6C63LL &&
                        *(_BYTE*)(v55 + 10) == 103;
                  if (v57 && *(int*)(v54 + v46 + 16) >= 1) {
                    *(_DWORD*)(a1 + 136) = **(_DWORD**)(v54 + v46 + 8);
                  }
                  break;
                case 0xAuLL:
                  v61 = *(_QWORD*)(v55 + 2) == 0x6C665F68746F6C63LL &&
                        *(_WORD*)(v55 + 10) == 26465;
                  if (v61 && *(int*)(v54 + v46 + 16) >= 1) {
                    *(_BYTE*)(a1 + 130) =
                        (signed __int32)**(_DWORD**)(v54 + v46 + 8) > 0;
                  }
                  break;
                case 0xBuLL:
                  if (*(_QWORD*)(v55 + 2) == 0x61705F68746F6C63LL &&
                      *(_QWORD*)(v55 + 5) == 0x6D617261705F6874LL) {
                    v59 = v54 + v46;
                    if (*(int*)(v54 + v46 + 16) >= 2) {
                      *(_DWORD*)(a1 + 144) = **(_DWORD**)(v59 + 8);
                      *(_DWORD*)(a1 + 148) =
                          *(_DWORD*)(*(_QWORD*)(v59 + 8) + 4LL);
                      if (*(int*)(v59 + 16) >= 3) {
                        *(_DWORD*)(a1 + 160) =
                            *(_DWORD*)(*(_QWORD*)(v59 + 8) + 8LL);
                      }
                    }
                  }
                  break;
                case 0xCuLL:
                  if (*(_QWORD*)(v55 + 2) == 0x61705F68746F6C63LL &&
                      *(_DWORD*)(v55 + 10) == 846029170) {
                    v76 = v54 + v46;
                    if (*(int*)(v54 + v46 + 16) >= 1) {
                      *(_DWORD*)(a1 + 152) = **(_DWORD**)(v76 + 8);
                      if (*(int*)(v76 + 16) >= 2) {
                        *(_DWORD*)(a1 + 156) =
                            *(_DWORD*)(*(_QWORD*)(v76 + 8) + 4LL);
                        if (*(int*)(v76 + 16) >= 3) {
                          *(_BYTE*)(a1 + 131) =
                              *(float*)(*(_QWORD*)(v76 + 8) + 8LL) > 0x0.0p+0f;
                        }
                      }
                    }
                  }
                  else if (*(_QWORD*)(v55 + 2) == 0x75715F68746F6C63LL &&
                           *(_DWORD*)(v55 + 10) == 1919252073) {
                    if ((*(_DWORD*)(v54 + v46 + 16) & 0x80000000) == 0) {
                      *(_BYTE*)(a1 + 132) =
                          (signed __int32)**(_DWORD**)(v54 + v46 + 8) > 0;
                    }
                  }
                  else {
                    v68 = *(_QWORD*)(v55 + 2) == 0x61725F68746F6C63LL &&
                          *(_DWORD*)(v55 + 10) == 1937074532;
                    if (v68 && **(float**)(v54 + v46 + 8) > 0x0.0p+0f) {
                      v50 = **(_DWORD**)(v54 + v46 + 8);
                    }
                  }
                  break;
                case 0xDuLL:
                  if (*(_QWORD*)(v55 + 2) == 0x5F795F68746F6C63LL &&
                      *(_QWORD*)(v55 + 7) == 0x656C676E615F795FLL) {
                    if (*(int*)(v54 + v46 + 16) >= 2) {
                      v77 = *(int**)(v54 + v46 + 8);
                      v48 = *v77;
                      v51 = v77[1];
                    }
                  }
                  else {
                    v70 = *(_QWORD*)(v55 + 2) == 0x5F7A5F68746F6C63LL &&
                          *(_QWORD*)(v55 + 7) == 0x656C676E615F7A5FLL;
                    if (v70 && *(int*)(v54 + v46 + 16) >= 2) {
                      v71 = *(int**)(v54 + v46 + 8);
                      v52 = *v71;
                      v53 = v71[1];
                    }
                  }
                  break;
                case 0xEuLL:
                  v60 = *(_QWORD*)(v55 + 2) == 0x75735F68746F6C63LL &&
                        *(_QWORD*)(v55 + 8) == 0x7373657270707573LL;
                  if (v60 && *(int*)(v54 + v46 + 16) >= 1) {
                    *(_DWORD*)(a1 + 164) = **(_DWORD**)(v54 + v46 + 8);
                  }
                  break;
                case 0xFuLL:
                  if (*(_QWORD*)(v55 + 2) == 0x5F795F68746F6C63LL &&
                      *(_QWORD*)(v55 + 9) == 0x646574696D696C5FLL) {
                    LOBYTE(v201) =
                        (signed __int32)**(_DWORD**)(v54 + v46 + 8) > 0;
                  }
                  else if (*(_QWORD*)(v55 + 2) == 0x5F7A5F68746F6C63LL &&
                           *(_QWORD*)(v55 + 9) == 0x646574696D696C5FLL) {
                    v198 = (signed __int32)**(_DWORD**)(v54 + v46 + 8) > 0;
                  }
                  break;
                case 0x10uLL:
                  v64 = *(_QWORD*)(v55 + 2) == 0x616D5F68746F6C63LL &&
                        *(_QWORD*)(v55 + 10) == 0x6D617261705F7373LL;
                  if (v64 && *(int*)(v54 + v46 + 16) >= 3) {
                    v65 = *(int**)(v54 + v46 + 8);
                    v44 = *v65;
                    v45 = v65[1];
                    v47 = v65[2];
                  }
                  break;
                case 0x11uLL:
                  if (*(_QWORD*)(v55 + 2) == 0x73755F68746F6C63LL &&
                      *(_QWORD*)(v55 + 10) == 0x6C75737061635F65LL &&
                      *(_BYTE*)(v55 + 18) == 101) {
                    BYTE4(v201) =
                        (signed __int32)**(_DWORD**)(v54 + v46 + 8) > 0;
                  }
                  break;
                case 0x12uLL:
                case 0x13uLL:
                  break;
                case 0x14uLL:
                  if (*(_QWORD*)(v55 + 2) == 0x73755F68746F6C63LL &&
                      *(_QWORD*)(v55 + 10) == 0x705F7373616D5F65LL &&
                      *(_DWORD*)(v55 + 18) == 1835102817) {
                    v200 = (signed __int32)**(_DWORD**)(v54 + v46 + 8) > 0;
                  }
                  break;
                }
              }
              ++v49;
              v46 += 64;
            } while (v49 < *(unsigned __int16*)(v43 + 50));
          }
          else {
            v44 = 0;
            v45 = 0;
            v200 = false;
            v201 = 0;
            v198 = false;
            v47 = 0;
            v48 = 0;
            v50 = 1025758986;
            v51 = 0;
            v52 = 0;
            v53 = 0;
          }
          v195 = v53;
          v84 = v52;
          DWORD3(v41) = 0;
          v85 = *(_DWORD*)(a1 + 156);
          if (v11 < v202) {
            *(_BYTE*)(v11 + 48) = v42;
            a4 = v192;
            a5 = v193;
            a3 = v191;
            *(_QWORD*)(v11 + 24) = 0;
            *(_QWORD*)(v11 + 32) = 0;
            *(_QWORD*)(v11 + 8) = 0;
            *(_QWORD*)(v11 + 16) = 0;
            *(_QWORD*)v11 = 0;
            *(_BYTE*)(v11 + 49) = v14;
            *(_OWORD*)(v11 + 64) = v41;
            *(_QWORD*)(v11 + 80) = 0;
            *(_QWORD*)(v11 + 88) = 0;
            *(_DWORD*)(v11 + 104) = v50;
            *(_WORD*)(v11 + 109) = 0;
            *(_BYTE*)(v11 + 111) = 0;
            *(_DWORD*)(v11 + 112) = v44;
            *(_DWORD*)(v11 + 116) = v45;
            *(_DWORD*)(v11 + 120) = v85;
            *(_DWORD*)(v11 + 124) = v47;
            *(_BYTE*)(v11 + 131) = 0;
            *(_WORD*)(v11 + 129) = 0;
            *(_DWORD*)(v11 + 132) = v48;
            *(_DWORD*)(v11 + 136) = v51;
            *(_BYTE*)(v11 + 143) = 0;
            *(_WORD*)(v11 + 141) = 0;
            *(_DWORD*)(v11 + 40) = v194;
            *(_DWORD*)(v11 + 44) = v199;
            *(_DWORD*)(v11 + 144) = v84;
            *(_DWORD*)(v11 + 148) = v195;
            *(_QWORD*)(v11 + 96) = v196;
            *(_BYTE*)(v11 + 128) = v201;
            *(_BYTE*)(v11 + 108) = v200;
            *(_BYTE*)(v11 + 140) = v198;
            *(_BYTE*)(v11 + 152) = BYTE4(v201);
            v11 += 160LL;
          }
          else {
            v86 = v11 - v13;
            v87 = 1 - 0x3333333333333333LL * ((__int64)(v11 - v13) >> 5);
            if (v87 > 0x199999999999999LL) {
            LABEL_290:
              GameRoutine_a56ee0();
            }
            v206 = v41;
            if (0x999999999999999ALL * ((__int64)(v202 - v13) >> 5) > v87) {
              v87 = 0x999999999999999ALL * ((__int64)(v202 - v13) >> 5);
            }
            if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v202 - v13) >> 5) >=
                0xCCCCCCCCCCCCCCLL) {
              v87 = 0x199999999999999LL;
            }
            if (v87 > 0x199999999999999LL) {
            LABEL_289:
              GameRoutine_60a210();
            }
            v88 = 160 * v87;
            v89 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                 160 * v87, 16, 0);
            v90 = v89 + v86;
            *(_QWORD*)v90 = 0;
            *(_QWORD*)(v90 + 8) = 0;
            *(_QWORD*)(v90 + 16) = 0;
            *(_QWORD*)(v90 + 24) = 0;
            *(_QWORD*)(v90 + 32) = 0;
            *(_BYTE*)(v90 + 48) = v42;
            *(_BYTE*)(v90 + 49) = v14;
            *(_QWORD*)(v90 + 80) = 0;
            *(_QWORD*)(v90 + 88) = 0;
            *(_DWORD*)(v90 + 104) = v50;
            *(_WORD*)(v90 + 109) = 0;
            *(_BYTE*)(v90 + 111) = 0;
            *(_DWORD*)(v90 + 112) = v44;
            *(_DWORD*)(v90 + 116) = v45;
            *(_DWORD*)(v90 + 120) = v85;
            *(_DWORD*)(v90 + 124) = v47;
            *(_BYTE*)(v90 + 131) = 0;
            *(_WORD*)(v90 + 129) = 0;
            *(_DWORD*)(v90 + 132) = v48;
            *(_DWORD*)(v90 + 136) = v51;
            *(_BYTE*)(v90 + 143) = 0;
            *(_WORD*)(v90 + 141) = 0;
            *(_DWORD*)(v90 + 40) = v194;
            *(_DWORD*)(v90 + 44) = v199;
            *(_OWORD*)(v90 + 64) = v206;
            *(_QWORD*)(v90 + 96) = v196;
            *(_DWORD*)(v90 + 144) = v84;
            *(_DWORD*)(v90 + 148) = v195;
            *(_BYTE*)(v90 + 128) = v201;
            *(_BYTE*)(v90 + 108) = v200;
            *(_BYTE*)(v90 + 140) = v198;
            v91 = v89 + v86 + 160 * (v86 / -160);
            *(_BYTE*)(v90 + 152) = BYTE4(v201);
            if (v13 != v11) {
              v92 = v13;
              v93 = v91;
              do {
                v94 = *(_QWORD*)(v92 + 40);
                v95 = *(_WORD*)(v92 + 48);
                *(_QWORD*)(v93 + 24) = *(_QWORD*)(v92 + 24);
                *(_QWORD*)(v93 + 40) = v94;
                *(_QWORD*)(v93 + 8) = *(_QWORD*)(v92 + 8);
                v96 = *(_QWORD*)v92;
                *(_QWORD*)(v93 + 16) = *(_QWORD*)(v92 + 16);
                *(_QWORD*)v93 = v96;
                v97 = *(_QWORD*)(v92 + 32);
                *(_WORD*)(v93 + 48) = v95;
                *(_QWORD*)(v93 + 32) = v97;
                *(_QWORD*)(v93 + 72) = *(_QWORD*)(v92 + 72);
                *(_QWORD*)(v93 + 64) = *(_QWORD*)(v92 + 64);
                v98 = *(_QWORD*)(v92 + 88);
                *(_QWORD*)(v93 + 80) = *(_QWORD*)(v92 + 80);
                *(_QWORD*)(v93 + 88) = v98;
                v99 = *(_QWORD*)(v92 + 96);
                v100 = *(_QWORD*)(v92 + 104);
                v101 = *(_QWORD*)(v92 + 120);
                *(_QWORD*)(v93 + 112) = *(_QWORD*)(v92 + 112);
                *(_QWORD*)(v93 + 120) = v101;
                *(_QWORD*)(v93 + 96) = v99;
                *(_QWORD*)(v93 + 104) = v100;
                v102 = *(_QWORD*)(v92 + 128);
                v103 = *(_QWORD*)(v92 + 136);
                v104 = *(_QWORD*)(v92 + 144);
                LOBYTE(v101) = *(_BYTE*)(v92 + 152);
                v92 += 160;
                *(_BYTE*)(v93 + 152) = v101;
                *(_QWORD*)(v93 + 136) = v103;
                *(_QWORD*)(v93 + 144) = v104;
                *(_QWORD*)(v93 + 128) = v102;
                v93 += 160;
              } while (v92 != v11);
            }
            a4 = v192;
            a5 = v193;
            a3 = v191;
            v11 = v90 + 160;
            v202 = v89 + v88;
            if (v13 != 0) {
              v105 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v105 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, v13);
            }
            v13 = v91;
          }
          goto LABEL_7;
        }
      }
    }
    else {
      v41 = v205;
    }
    v42 = 0;
    goto LABEL_48;
  }
  v12 = 1;
  v13 = v10;
LABEL_192:
  v207 = v12;
  v110 = 0;
  do {
    for (i = 0; i != 16; ++i) {
      v124 = v13;
      if (v13 != v11) {
        v124 = v13;
        while (*(_DWORD*)(v124 + 40) != i || *(_DWORD*)(v124 + 44) != v110) {
          v124 += 160;
          if (v124 == v11) {
            goto LABEL_197;
          }
        }
      }
      if (v124 != v11 && v124 != 0) {
        v127 = *(_QWORD*)(a1 + 16);
        v126 = *(_QWORD*)(a1 + 24);
        if (v127 < v126) {
          v112 = *(_QWORD*)(v124 + 40);
          v113 = *(_WORD*)(v124 + 48);
          *(_QWORD*)(v127 + 24) = *(_QWORD*)(v124 + 24);
          *(_QWORD*)(v127 + 40) = v112;
          *(_QWORD*)(v127 + 8) = *(_QWORD*)(v124 + 8);
          v114 = *(_QWORD*)v124;
          *(_QWORD*)(v127 + 16) = *(_QWORD*)(v124 + 16);
          *(_QWORD*)v127 = v114;
          v115 = *(_QWORD*)(v124 + 32);
          *(_WORD*)(v127 + 48) = v113;
          *(_QWORD*)(v127 + 32) = v115;
          *(_QWORD*)(v127 + 72) = *(_QWORD*)(v124 + 72);
          *(_QWORD*)(v127 + 64) = *(_QWORD*)(v124 + 64);
          v116 = *(_QWORD*)(v124 + 88);
          *(_QWORD*)(v127 + 80) = *(_QWORD*)(v124 + 80);
          *(_QWORD*)(v127 + 88) = v116;
          v117 = *(_QWORD*)(v124 + 96);
          v118 = *(_QWORD*)(v124 + 104);
          v119 = *(_QWORD*)(v124 + 120);
          *(_QWORD*)(v127 + 112) = *(_QWORD*)(v124 + 112);
          *(_QWORD*)(v127 + 120) = v119;
          *(_QWORD*)(v127 + 96) = v117;
          *(_QWORD*)(v127 + 104) = v118;
          v120 = *(_QWORD*)(v124 + 128);
          v121 = *(_QWORD*)(v124 + 136);
          v122 = *(_QWORD*)(v124 + 144);
          LOBYTE(v119) = *(_BYTE*)(v124 + 152);
          v123 = v127 + 160;
          *(_BYTE*)(v127 + 152) = v119;
          *(_QWORD*)(v127 + 136) = v121;
          *(_QWORD*)(v127 + 144) = v122;
          *(_QWORD*)(v127 + 128) = v120;
        }
        else {
          v128 = *(_QWORD*)(a1 + 8);
          v129 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v127 - v128) >> 5) + 1;
          if (v129 > 0x199999999999999LL) {
            goto LABEL_290;
          }
          v130 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v126 - v128) >> 5);
          if (2 * v130 > v129) {
            v129 = 2 * v130;
          }
          if (v130 >= 0xCCCCCCCCCCCCCCLL) {
            v131 = 0x199999999999999LL;
          }
          else {
            v131 = v129;
          }
          if (v131 > 0x199999999999999LL) {
            goto LABEL_289;
          }
          v132 = 160 * v131;
          v133 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                160 * v131, 16, 0);
          v135 = *(_QWORD*)(v124 + 24);
          v134 = *(_QWORD*)(v124 + 32);
          v136 = *(_QWORD*)(v124 + 40);
          v137 = v133 + v127 - v128;
          *(_WORD*)(v137 + 48) = *(_WORD*)(v124 + 48);
          *(_QWORD*)(v137 + 40) = v136;
          *(_QWORD*)(v137 + 24) = v135;
          *(_QWORD*)(v137 + 8) = *(_QWORD*)(v124 + 8);
          v138 = *(_QWORD*)v124;
          v139 = *(_QWORD*)(v124 + 16);
          *(_QWORD*)(v137 + 32) = v134;
          *(_QWORD*)(v137 + 16) = v139;
          *(_QWORD*)v137 = v138;
          v140 = *(_QWORD*)(v124 + 72);
          *(_QWORD*)(v137 + 64) = *(_QWORD*)(v124 + 64);
          *(_QWORD*)(v137 + 72) = v140;
          v141 = *(_QWORD*)(v124 + 88);
          *(_QWORD*)(v137 + 80) = *(_QWORD*)(v124 + 80);
          *(_QWORD*)(v137 + 88) = v141;
          v142 = *(_QWORD*)(v124 + 96);
          v143 = *(_QWORD*)(v124 + 104);
          v144 = *(_QWORD*)(v124 + 120);
          *(_QWORD*)(v137 + 112) = *(_QWORD*)(v124 + 112);
          *(_QWORD*)(v137 + 120) = v144;
          *(_QWORD*)(v137 + 96) = v142;
          *(_QWORD*)(v137 + 104) = v143;
          v145 = *(_QWORD*)(v124 + 128);
          v146 = *(_QWORD*)(v124 + 136);
          v147 = *(_QWORD*)(v124 + 144);
          *(_BYTE*)(v137 + 152) = *(_BYTE*)(v124 + 152);
          *(_QWORD*)(v137 + 136) = v146;
          *(_QWORD*)(v137 + 144) = v147;
          *(_QWORD*)(v137 + 128) = v145;
          if (v128 != v127) {
            v148 = v128;
            v149 = v133;
            do {
              v150 = *(_QWORD*)(v148 + 40);
              v151 = *(_WORD*)(v148 + 48);
              *(_QWORD*)(v149 + 24) = *(_QWORD*)(v148 + 24);
              *(_QWORD*)(v149 + 40) = v150;
              *(_QWORD*)(v149 + 8) = *(_QWORD*)(v148 + 8);
              v152 = *(_QWORD*)v148;
              *(_QWORD*)(v149 + 16) = *(_QWORD*)(v148 + 16);
              *(_QWORD*)v149 = v152;
              v153 = *(_QWORD*)(v148 + 32);
              *(_WORD*)(v149 + 48) = v151;
              *(_QWORD*)(v149 + 32) = v153;
              *(_QWORD*)(v149 + 72) = *(_QWORD*)(v148 + 72);
              *(_QWORD*)(v149 + 64) = *(_QWORD*)(v148 + 64);
              v154 = *(_QWORD*)(v148 + 88);
              *(_QWORD*)(v149 + 80) = *(_QWORD*)(v148 + 80);
              *(_QWORD*)(v149 + 88) = v154;
              v155 = *(_QWORD*)(v148 + 96);
              v156 = *(_QWORD*)(v148 + 104);
              v157 = *(_QWORD*)(v148 + 120);
              *(_QWORD*)(v149 + 112) = *(_QWORD*)(v148 + 112);
              *(_QWORD*)(v149 + 120) = v157;
              *(_QWORD*)(v149 + 96) = v155;
              *(_QWORD*)(v149 + 104) = v156;
              v158 = *(_QWORD*)(v148 + 128);
              v159 = *(_QWORD*)(v148 + 136);
              v160 = *(_QWORD*)(v148 + 144);
              LOBYTE(v157) = *(_BYTE*)(v148 + 152);
              v148 += 160;
              *(_BYTE*)(v149 + 152) = v157;
              *(_QWORD*)(v149 + 136) = v159;
              *(_QWORD*)(v149 + 144) = v160;
              *(_QWORD*)(v149 + 128) = v158;
              v149 += 160;
            } while (v148 != v127);
          }
          v123 = v137 + 160;
          *(_QWORD*)(a1 + 8) = v133;
          *(_QWORD*)(a1 + 16) = v137 + 160;
          *(_QWORD*)(a1 + 24) = v133 + v132;
          if (v128 != 0) {
            v161 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v161 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v161, v128);
          }
        }
        *(_QWORD*)(a1 + 16) = v123;
      }
    LABEL_197:;
    }
    ++v110;
  } while (v110 != v207);
  v163 = *(_QWORD*)(a1 + 8);
  v162 = *(_QWORD*)(a1 + 16);
  if (v202 == v13) {
    v166 = *(_QWORD*)(a1 + 16);
    v165 = *(_QWORD*)(a1 + 8);
    v167 = v13;
    if (v163 == v162) {
      goto LABEL_274;
    }
  }
  else if (v13 != 0) {
    v164 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v164 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v164,
                                  v13);
    v165 = *(_QWORD*)(a1 + 8);
    v166 = *(_QWORD*)(a1 + 16);
    v167 = 0;
    if (v165 == v166) {
      goto LABEL_274;
    }
  }
  else {
    v167 = 0;
    v166 = *(_QWORD*)(a1 + 16);
    v165 = *(_QWORD*)(a1 + 8);
    if (v163 == v162) {
      goto LABEL_274;
    }
  }
  do {
    v170 = *(_DWORD*)(v165 + 40);
    v169 = *(_DWORD*)(v165 + 44);
    v171 = *(_QWORD*)(a1 + 8);
    v172 = *(_QWORD*)(a1 + 16);
    if (v171 != v172) {
      while (*(_DWORD*)(v171 + 40) != v170 + 1 ||
             *(_DWORD*)(v171 + 44) != v169) {
        v171 += 160;
        if (v171 == v172) {
          v171 = 0;
          goto LABEL_247;
        }
      }
    }
    if (v171 == v172) {
      v171 = 0;
    }
  LABEL_247:
    *(_QWORD*)(v165 + 32) = v171;
    v174 = *(_QWORD*)(a1 + 8);
    v175 = *(_QWORD*)(a1 + 16);
    if (v174 != v175) {
      while (*(_DWORD*)(v174 + 40) != v170 ||
             *(_DWORD*)(v174 + 44) != v169 - 1) {
        v174 += 160;
        if (v174 == v175) {
          v174 = 0;
          goto LABEL_256;
        }
      }
    }
    if (v174 == v175) {
      v174 = 0;
    }
  LABEL_256:
    *(_QWORD*)v165 = v174;
    v177 = *(_QWORD*)(a1 + 8);
    v178 = *(_QWORD*)(a1 + 16);
    if (v177 != v178) {
      while (*(_DWORD*)(v177 + 40) != v170 ||
             *(_DWORD*)(v177 + 44) != v169 + 1) {
        v177 += 160;
        if (v177 == v178) {
          v177 = 0;
          goto LABEL_265;
        }
      }
    }
    if (v177 == v178) {
      v177 = 0;
    }
  LABEL_265:
    *(_QWORD*)(v165 + 16) = v177;
    v180 = *(_QWORD*)(a1 + 8);
    v181 = *(_QWORD*)(a1 + 16);
    if (v180 != v181) {
      v182 = v170 - 1;
      while (*(_DWORD*)(v180 + 40) != v182 || *(_DWORD*)(v180 + 44) != v169) {
        v180 += 160;
        if (v180 == v181) {
          v168 = 0;
          goto LABEL_237;
        }
      }
    }
    if (v180 == v181) {
      v168 = 0;
    }
    else {
      v168 = v180;
    }
  LABEL_237:
    *(_QWORD*)(v165 + 24) = v168;
    v165 += 160;
  } while (v165 != v166);
  v165 = *(_QWORD*)(a1 + 8);
LABEL_274:
  v184 = 0;
  v185 = v165;
  do {
    v186 = v185;
    v185 = *(_QWORD*)(v185 + 32);
    ++v184;
  } while (v185 != 0);
  if (v184 >= 6) {
    do {
      *(_QWORD*)(v165 + 24) = v186;
      *(_QWORD*)(v186 + 32) = v165;
      v165 = *(_QWORD*)(v165 + 16);
      v186 = *(_QWORD*)(v186 + 16);
    } while (v165 != 0);
  }
  if (v167 != 0) {
    v187 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v187 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v187,
                                  v167);
  }
  if (v162 - v163 == v11 - v13) {
    v188 = 0;
  }
  else {
    v188 = 256;
  }
  v189 = 0xCCCCCCCCCCCCCCCDLL * ((v162 - v163) >> 5) < 2 ||
         v162 - v163 != v11 - v13;
  return v188 | (unsigned int)v189;
}

float game_templates_a56600(float32x2_t* a1, float* a2, float32x4_t* a3,
                            float32x4_t a4, float a5, float a6)
{
  int8x16_t v6;
  float v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float32x4_t v36;
  float result;
  int v38;
  int v39;
  __int64 v40;
  float* v41;
  float v42;
  float32x4_t* v43;
  float v44;
  float32x2_t* v45;

  v6 = vmulq_f32(a4, a4);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  v7 = LANES64_OF(vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]))))
           .n64_f32[0];
  if (v7 >= 0x1.0000000000000p-23f) {
    v8 = *a3;
    v10 = vmulq_n_f32(a4, 0x1.0000000000000p+0f / v7);
    LANES128(v10).n128_u32[3] = 0;
    v11 = vmulq_f32(*a3, v10);
    LANES128(v11).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_u64[0];
    v9 = vmulq_n_f32(
        v10,
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
            .n64_f32[0]);
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v45 = a1;
      v43 = a3;
      v41 = a2;
      v44 = a6;
      v42 = a5;
      v38 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      a5 = v42;
      a6 = v44;
      a2 = v41;
      v39 = v38;
      a3 = v43;
      a1 = v45;
      if (v39 != 0) {
        v40 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v40;
        __cxa_guard_release((__int64)&GameData_21a6130);
        a5 = v42;
        a6 = v44;
        a1 = v45;
        a2 = v41;
        a3 = v43;
      }
    }
    v8 = *a3;
    v9 = COERCE_AS(float32x4_t, GameData_21a6120);
  }
  v12 = vsubq_f32(v8, v9);
  v13 = sqrtf(
      (float)(vmuls_lane_f32(LANES128(v12).n128_f32[1],
                             COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                             1) +
              (float)(LANES128(v12).n128_f32[0] * LANES128(v12).n128_f32[0])) +
      (float)(LANES128(v12).n128_f32[2] * LANES128(v12).n128_f32[2]));
  v14 = fminf(
      fmaxf((float)(vmuls_lane_f32(
                        LANES128(v12).n128_f32[1] / v13,
                        COERCE_AS(float32x2_t, LANES64(*(a1)).n64_u64[0]), 1) +
                    (float)((float)(LANES128(v12).n128_f32[0] / v13) *
                            COERCE_FLOAT(*(_OWORD*)LANES64(*(a1)).n64_u64))) +
                (float)((float)(LANES128(v12).n128_f32[2] / v13) *
                        COERCE_FLOAT(LANES64(a1[1]).n64_u64[0])),
            -0x1.0000000000000p+0f),
      0x1.0000000000000p+0f);
  v15 = sqrtf(0x1.0000000000000p+0f - (float)(v14 * v14));
  if (v14 >= 0x0.0p+0f) {
    v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v21 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v22 = v14 / v15;
    v23 = v15 / v14;
    v24 = v22 *
          (float)((
                      float)((float)((float)((float)(v21 +
                                                     (float)((float)((float)((
                                                                                 float)(v20 + (float)((
                                                                                                          float)((float)((float)(v19 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v22 * v22)) - *((float*)GameData_212c2f0 + 1)) * (float)(v22 * v22))) * (float)(v22 * v22)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v22 *
                                                                                                              v22))) *
                                                                             (float)(v22 *
                                                                                     v22)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v22 *
                                                                     v22))) *
                                             (float)(v22 * v22)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v22 * v22)) +
                  0x1.0000000000000p+0f);
    v17 =
        0x1.921fb60000000p+0f -
        (float)(PSEUDO_UNFUSED(
            v23 * (float)((
                              float)((float)((float)((float)(v21 + (float)((float)((
                                                                                       float)((
                                                                                                  float)(v20 + (float)((float)((float)((float)(v19 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v23 * v23)) - *((float*)GameData_212c2f0 + 1)) * (float)(v23 * v23))) * (float)(v23 * v23)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v23 *
                                                                                                                               v23))) *
                                                                                              (float)(v23 *
                                                                                                      v23)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v23 *
                                                                                   v23))) *
                                                     (float)(v23 * v23)) -
                                             *(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       12)) *
                                     (float)(v23 * v23)) +
                          0x1.0000000000000p+0f)));
    if (v14 <= 0x1.6a09e60000000p-1f) {
      v17 = v24;
    }
  }
  else if (v14 >= -0x1.6a09e60000000p-1f) {
    v18 = (float)-v14 / v15;
    v17 = -(float)(v18 * (float)((float)((float)-(
                                             float)(*(float*)((char*)((
                                                                  __int128*)0x10LL) +
                                                              (_QWORD)
                                                                  GameData_212c2f0 +
                                                              12) -
                                                    (float)((
                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                          float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)
                                                                                                                                                                                                                                                                                                           GameData_212c2f0) +
                                                                                                                                                                                                                                                                (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((
                                                                                                                                                                                                                                                                                                                                                                           float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((
                                                                                                                                                                                                                                                                                                                                                                                                                                                                 float)-(float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  1) -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (float)(*(float*)GameData_212c2f0 * (float)(v18 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            v18))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                             (float)(v18 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                     v18))) *
                                                                                                                                                                                                                                                                                                                                                                       (float)(v18 *
                                                                                                                                                                                                                                                                                                                                                                               v18))) *
                                                                                                                                                                                                                                                                        (float)(v18 *
                                                                                                                                                                                                                                                                                v18))) *
                                                                                                                                                                                                                                                        (float)(v18 *
                                                                                                                                                                                                                                                                v18))) *
                                                                                                                                                      (float)(v18 *
                                                                                                                                                              v18))) *
                                                            (float)(v18 *
                                                                    v18))) *
                                         (float)(v18 * v18)) +
                                 0x1.0000000000000p+0f));
  }
  else {
    v16 = (float)-v15 / v14;
    v17 = (float)(PSEUDO_UNFUSED(
              v16 * (float)((float)((float)-(float)(*(float*)((char*)((
                                                                  __int128*)0x10LL) +
                                                              (_QWORD)
                                                                  GameData_212c2f0 +
                                                              12) -
                                                    (float)((
                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                          float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)
                                                                                                                                                                                                                                                                                                           GameData_212c2f0) +
                                                                                                                                                                                                                                                                (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((
                                                                                                                                                                                                                                                                                                                                                                           float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((
                                                                                                                                                                                                                                                                                                                                                                                                                                                                 float)-(float)(*((float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  1) -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                (float)(*(float*)GameData_212c2f0 * (float)(v16 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            v16))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                             (float)(v16 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                     v16))) *
                                                                                                                                                                                                                                                                                                                                                                       (float)(v16 *
                                                                                                                                                                                                                                                                                                                                                                               v16))) *
                                                                                                                                                                                                                                                                        (float)(v16 *
                                                                                                                                                                                                                                                                                v16))) *
                                                                                                                                                                                                                                                        (float)(v16 *
                                                                                                                                                                                                                                                                v16))) *
                                                                                                                                                      (float)(v16 *
                                                                                                                                                              v16))) *
                                                            (float)(v16 *
                                                                    v16))) *
                                    (float)(v16 * v16)) +
                            0x1.0000000000000p+0f))) +
          -0x1.921fb60000000p+0f;
  }
  v25 = fminf(fmaxf(v17 * 0x1.ca5dc20000000p+5f, a5), a6);
  if (v25 >= 0x0.0p+0f) {
    v26 = a6;
  }
  else {
    v26 = a5;
  }
  v27 = 0x0.0p+0f;
  if (fabsf(v26) > 0x1.a36e2e0000000p-14f) {
    v28 = fminf(fmaxf(v25 / v26, 0x0.0p+0f), 0x1.0000000000000p+0f);
    v27 = fminf(v28, sqrtf(v28));
  }
  v29 = (float)(PSEUDO_UNFUSED((float)(v26 * v27) * 0x1.1df46a0000000p-6f)) +
        (float)(roundf((float)((float)(v26 * v27) * 0x1.1df46a0000000p-6f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v29 > 0x1.921fb60000000p+0f) {
    v30 = 0x1.921fb60000000p+1f;
  LABEL_20:
    v29 = v30 - v29;
    v31 = -0x1.0000000000000p+0f;
    goto LABEL_21;
  }
  v31 = 0x1.0000000000000p+0f;
  if (v29 < -0x1.921fb60000000p+0f) {
    v30 = -0x1.921fb60000000p+1f;
    goto LABEL_20;
  }
LABEL_21:
  v32 = v29 * v29;
  v33 =
      v29 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v29 *
                                                                                                    v29))) *
                                                                            (float)(v29 *
                                                                                    v29))) *
                                                         (float)(v29 * v29))) *
                                         (float)(v29 * v29))) *
                      (float)(v29 * v29)) +
              0x1.0000000000000p+0f);
  v34 =
      v31 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v32)) *
                                                                            v32)) *
                                                         v32)) *
                                         v32)) *
                      v32) +
              0x1.0000000000000p+0f);
  LANES128(*(a3)).n128_f32[0] =
      LANES128(v9).n128_f32[0] +
      (float)((float)((float)(PSEUDO_UNFUSED(v34 * *a2)) +
                      (float)(v33 * LANES64(*(a1)).n64_f32[0])) *
              v13);
  LANES128(*(a3)).n128_f32[1] =
      LANES128(v9).n128_f32[1] +
      (float)((float)((float)(PSEUDO_UNFUSED(v34 * a2[1])) +
                      (float)(v33 * LANES64(*(a1)).n64_f32[1])) *
              v13);
  v35 = (float)(PSEUDO_UNFUSED(v34 * a2[2])) +
        (float)(v33 * LANES64(a1[1]).n64_f32[0]);
  v36 = *a3;
  result = LANES128(v9).n128_f32[2] + (float)(v35 * v13);
  LANES128(v36).n128_u64[1] = LODWORD(result);
  *a3 = v36;
  return result;
}

__int64* game_templates_14a5400(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  _QWORD* v3;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  float v29;
  _BOOL8 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 primeEm;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;

  v2 = *(unsigned __int8*)(a2 + 16);
  v3 = (_QWORD*)a2;
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  if (v5) {
    v7 = a2 + 17;
  }
  else {
    v7 = *(_QWORD*)(a2 + 32);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *(_QWORD*)(a2 + 24);
  }
  v9 = std___1___hash_memory(v7, v8);
  v3[1] = v9;
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    v11 = v10 - 1;
    v12 = v9;
    if ((v10 & (v10 - 1)) != 0) {
      v13 = v9;
      if (v9 >= v10) {
        v13 = v9 % v10;
      }
    }
    else {
      v13 = v11 & v9;
    }
    v14 = *(__int64***)(*(_QWORD*)a1 + 8 * v13);
    if (v14 != nullptr) {
      v15 = *v14;
      if (*v14 != nullptr) {
        if ((v10 & v11) == 0) {
          while (1) {
            v20 = v15[1];
            if (v20 == v12) {
              v21 = *((unsigned __int8*)v15 + 16);
              v22 = v15[3];
              if ((v21 & 1) == 0) {
                v22 = v21 >> 1;
              }
              if (v22 == v8) {
                v23 = (v21 & 1) != 0 ? v15[4] : (__int64)v15 + 17;
                if (memcmp(v23, v7, v8) == 0) {
                  return v15;
                }
              }
            }
            else if ((v20 & v11) != v13) {
              goto LABEL_40;
            }
            v15 = (__int64*)*v15;
            if (v15 == nullptr) {
              goto LABEL_40;
            }
          }
        }
        do {
          v16 = v15[1];
          if (v16 == v12) {
            v17 = *((unsigned __int8*)v15 + 16);
            v18 = v15[3];
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            if (v18 == v8) {
              v19 = (v17 & 1) != 0 ? v15[4] : (__int64)v15 + 17;
              if (memcmp(v19, v7, v8) == 0) {
                return v15;
              }
            }
          }
          else {
            if (v16 >= v10) {
              v16 %= v10;
            }
            if (v16 != v13) {
              break;
            }
          }
          v15 = (__int64*)*v15;
        } while (v15 != nullptr);
      }
    }
  }
LABEL_40:
  v24 = *(float*)(a1 + 32);
  v25 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v10 == 0 || (float)(v24 * (float)v10) < v25) {
    v29 = v25 / v24;
    v30 = true;
    if (v10 >= 3) {
      v30 = (v10 & (v10 - 1)) != 0;
    }
    v31 = v30 | (2 * v10);
    v32 = vcvtps_u64_f32(v29);
    if (v31 <= v32) {
      v33 = v32;
    }
    else {
      v33 = v31;
    }
    if (v33 == 1) {
      v33 = 2;
    }
    else if ((v33 & (v33 - 1)) != 0) {
      primeEm = std___1___next_prime(v33);
      v10 = *(_QWORD*)(a1 + 8);
      v33 = primeEm;
    }
    if (v33 <= v10) {
      if (v33 >= v10) {
        goto LABEL_42;
      }
      v43 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << (-(char)__clz(v43 - 1) & 63);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (v33 <= v43) {
        v33 = v43;
      }
      if (v33 >= v10) {
        goto LABEL_42;
      }
      if (v33 == 0) {
        v57 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v57 != 0) {
          v58 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v57);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_42;
      }
    }
    if (v33 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v37 = fw_memory_g_heap_manager_ptr;
    v38 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v33, 16, 0);
    v39 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v38;
    if (v39 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v37 + v40, v39);
    }
    v41 = v33 & 7;
    *(_QWORD*)(a1 + 8) = v33;
    if (v33 >= 8) {
      v42 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v42 + 48) = 0;
        v45 = *(_QWORD*)a1 + 8 * v42;
        v42 += 8;
        *(_QWORD*)(v45 + 56) = 0;
      } while ((v33 & 0x1FFFFFFFFFFFFFF8LL) != v42);
    }
    else {
      v42 = 0;
    }
    if ((v33 & 7) != 0) {
      v46 = 8 * v42;
      do {
        --v41;
        *(_QWORD*)(*(_QWORD*)a1 + v46) = 0;
        v46 += 8;
      } while (v41 != 0);
    }
    v48 = a1 + 16;
    v47 = *(_QWORD**)(a1 + 16);
    if (v47 != nullptr) {
      v49 = v47[1];
      v50 = v33 - 1;
      if ((v33 & (v33 - 1)) != 0) {
        if (v49 >= v33) {
          v49 %= v33;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v49) = v48;
        v51 = (_QWORD*)*v47;
        if (*v47 == 0) {
          goto LABEL_42;
        }
        while (1) {
          v52 = v51[1];
          if (v52 >= v33) {
            v52 %= v33;
          }
          if (v52 != v49) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v52) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v47;
              goto LABEL_88;
            }
            *v47 = *v51;
            *v51 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v52);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v52) = v51;
            v51 = v47;
          }
          v52 = v49;
        LABEL_88:
          v47 = v51;
          v51 = (_QWORD*)*v51;
          v49 = v52;
          if (v51 == nullptr) {
            goto LABEL_42;
          }
        }
      }
      v54 = v49 & v50;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v48;
      while (1) {
        v55 = (_QWORD*)*v47;
        if (*v47 == 0) {
          break;
        }
        v56 = v55[1] & v50;
        if (v56 == v54) {
          v47 = (_QWORD*)*v47;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v56) != 0) {
          *v47 = *v55;
          *v55 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v56);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v56) = v55;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v56) = v47;
          v47 = v55;
          v54 = v56;
        }
      }
    }
  }
LABEL_42:
  v26 = *(_QWORD*)(a1 + 8);
  v27 = v3[1];
  v28 = v26 - 1;
  if ((v26 & (v26 - 1)) != 0) {
    if (v27 >= v26) {
      v27 %= v26;
    }
  }
  else {
    v27 &= v28;
  }
  v34 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v27);
  if (v34 != nullptr) {
    *v3 = *v34;
    *v34 = v3;
  }
  else {
    *v3 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v3;
    *(_QWORD*)(*(_QWORD*)a1 + 8 * v27) = a1 + 16;
    if (*v3 != 0) {
      v35 = *(_QWORD*)(*v3 + 8LL);
      if ((v26 & v28) != 0) {
        if (v35 >= v26) {
          v35 %= v26;
        }
      }
      else {
        v35 &= v28;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v35) = v3;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v3;
}

__int64 game_templates_15704e0(__int64 a1, int* a2, __int64 a3, _DWORD** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  __int64* v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  _DWORD* v15;
  float v16;
  float v17;
  float v18;
  _BOOL8 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 primeEm;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v9 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v9 & v5;
    }
    v10 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v10 != nullptr) {
      result = *v10;
      if (*v10 != 0) {
        if ((v6 & v9) == 0) {
          while (1) {
            v13 = *(_QWORD*)(result + 8);
            if (v13 == v5) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
                return result;
              }
            }
            else if ((v13 & v9) != v4) {
              goto LABEL_23;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_23;
            }
          }
        }
        do {
          v12 = *(_QWORD*)(result + 8);
          if (v12 == v5) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
              return result;
            }
          }
          else {
            if (v12 >= v6) {
              v12 %= v6;
            }
            if (v12 != v4) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_23:
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v15 = *a4;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v5;
  v16 = *(float*)(a1 + 32);
  LODWORD(v15) = *v15;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 16) = (_DWORD)v15;
  v17 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v16 * (float)v6) < v17) {
    v18 = v17 / v16;
    v19 = true;
    if (v6 >= 3) {
      v19 = (v6 & (v6 - 1)) != 0;
    }
    v20 = v19 | (2 * v6);
    v21 = vcvtps_u64_f32(v18);
    if (v20 <= v21) {
      primeEm = v21;
    }
    else {
      primeEm = v20;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v23 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v23;
      v6 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v6) {
      if (primeEm >= v6) {
        goto LABEL_84;
      }
      v30 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v43 = result;
        v30 = std___1___next_prime(v30);
        result = v43;
      }
      else {
        v31 = 1LL << (-(char)__clz(v30 - 1) & 63);
        if (v30 >= 2) {
          v30 = v31;
        }
      }
      if (primeEm <= v30) {
        primeEm = v30;
      }
      if (primeEm >= v6) {
        goto LABEL_84;
      }
      if (primeEm == 0) {
        v44 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v44 != 0) {
          v45 = result;
          v46 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v46, v44);
          result = v45;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_84;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v24 = result;
    v25 = fw_memory_HeapManager_Allocate(*v14, 8 * primeEm, 16, 0);
    v26 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v25;
    if (v26 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v27, v26);
    }
    v28 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v29 = 0;
      result = v24;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v29 + 48) = 0;
        v32 = *(_QWORD*)a1 + 8 * v29;
        v29 += 8;
        *(_QWORD*)(v32 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v29);
    }
    else {
      v29 = 0;
      result = v24;
    }
    if ((primeEm & 7) != 0) {
      v33 = 8 * v29;
      do {
        --v28;
        *(_QWORD*)(*(_QWORD*)a1 + v33) = 0;
        v33 += 8;
      } while (v28 != 0);
    }
    v35 = a1 + 16;
    v34 = *(_QWORD**)(a1 + 16);
    if (v34 != nullptr) {
      v36 = v34[1];
      v37 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v36 >= primeEm) {
          v36 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v36) = v35;
        v38 = (_QWORD*)*v34;
        if (*v34 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v39 = v38[1];
          if (v39 >= primeEm) {
            v39 %= primeEm;
          }
          if (v39 != v36) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v39) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v39) = v34;
              goto LABEL_61;
            }
            *v34 = *v38;
            *v38 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v39);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v39) = v38;
            v38 = v34;
          }
          v39 = v36;
        LABEL_61:
          v34 = v38;
          v38 = (_QWORD*)*v38;
          v36 = v39;
          if (v38 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v40 = v36 & v37;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
      while (1) {
        v41 = (_QWORD*)*v34;
        if (*v34 == 0) {
          break;
        }
        v42 = v41[1] & v37;
        if (v42 == v40) {
          v34 = (_QWORD*)*v34;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v42) != 0) {
          *v34 = *v41;
          *v41 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v42);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v42) = v41;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v34;
          v34 = v41;
          v40 = v42;
        }
      }
    }
  LABEL_84:
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v47 = *(_QWORD*)a1;
  v48 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v48 != nullptr) {
    *(_QWORD*)result = *v48;
    *v48 = result;
  }
  else {
    v49 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v49;
    *(_QWORD*)(v47 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v50 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v50 >= v6) {
          v50 %= v6;
        }
      }
      else {
        v50 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

__int64 game_templates_1570b30(__int64* a1, __int64 a2)
{
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v14;
  char v15;
  unsigned int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  const char* v22;
  const char* v23;
  __int64 v24;
  __int64* v25;
  int v26;
  char v27;
  unsigned int v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  const char* v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  const char* v43;
  unsigned __int8 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  const char* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  _BOOL4 v53;
  int v54;
  int v55;
  unsigned int v56;
  __int64 v57;
  char* v58;
  const char* v59;
  struct {
    __int64 v60;
    __int64 v61;
  } v60_;
  struct {
    __int64* v62;
    __int64 v63;
  } v62_;
  _QWORD v64[2];
  struct {
    __int64* v65;
    __int64 v66;
    unsigned __int64 v67;
    unsigned __int64 v68;
    int v69;
    int v70;
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
  } v65_;

  LayoutAccessor_1562cf0((__int64)a1, "InfoOff");
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconDisable",
                                   *(_BYTE*)(a2 + 25));
  if (*(_OWORD*)a2 != 0) {
    LayoutAccessor_1562cf0((__int64)a1, "Face");
    v9 = ui_LayoutAccessor_FindPane(a1, (__int64)"Face");
    if (v9 == 0 || (v10 = __dynamic_cast(v9, GameData_212d670[0],
                                         GameData_212d678[0], 0)) == 0) {
    LABEL_26:
      v18 = *(_QWORD*)a2;
      if (*(_QWORD*)a2 != 0) {
        if (*(_BYTE*)(v18 + 2136) != 0) {
          v19 = (__int64)game_97b2f0(v18 + 2104);
          if (v19 == 0) {
            goto LABEL_35;
          }
          goto LABEL_33;
        }
        v20 = *(_QWORD**)(v18 + 392);
      }
      else {
        v20 = *(_QWORD**)(a2 + 8);
      }
      v19 = GameHr_67ed20(v20);
      if (v19 != 0) {
      LABEL_33:
        v21 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
        if (v21 != 0) {
          GameRoutine_156c5d0(v21, v19, 0);
        }
      }
    LABEL_35:
      if (*(_BYTE*)(a2 + 16) == 1) {
        if ((*(_BYTE*)(a2 + 17) & 1) != 0 || (*(_BYTE*)(a2 + 18) & 1) != 0) {
          if ((LayoutAccessor_15635a0(a1, (__int64)"UnitIconIn", 1) & 1) != 0 ||
              (LayoutAccessor_15635a0(a1, (__int64)"UnitIconOn", 1) & 1) != 0) {
            goto LABEL_42;
          }
          v22 = "UnitIconOn";
        }
        else {
          if ((LayoutAccessor_15635a0(a1, (__int64)"UnitIconOut", 1) & 1) !=
                  0 ||
              (LayoutAccessor_15635a0(a1, (__int64)"UnitIconOff", 1) & 1) !=
                  0) {
            goto LABEL_42;
          }
          v22 = "UnitIconOff";
        }
        GameHr_1562680((__int64)a1, v22, 0x1.0000000000000p+0f);
      }
      else {
        LayoutAccessor_1562cf0((__int64)a1, "UnitIconOff");
      }
    LABEL_42:
      if (*(_BYTE*)(a2 + 19) != 0) {
        v23 = "GuestOn";
      }
      else {
        v23 = "GuestOff";
      }
      LayoutAccessor_1562cf0((__int64)a1, v23);
      ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconReliance",
                                       *(_BYTE*)(a2 + 20));
      ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconMerge",
                                       *(_BYTE*)(a2 + 23));
      if (*(_QWORD*)a2 != 0 && (*(_BYTE*)(a2 + 21) & 1) != 0) {
        LayoutAccessor_1560070((void*)(&v65_.v65), a1, "L_IconLegion");
        if (v65_.v66 != 0) {
          v24 = std___1___shared_weak_count_lock(v65_.v66);
          if (v24 != 0) {
            v25 = v65_.v65;
          }
          else {
            v25 = nullptr;
          }
          if (v65_.v66 != 0) {
            std___1___shared_weak_count___release_weak(v65_.v66);
          }
          if (v25 != nullptr) {
            v64[0] = v25;
            v64[1] = v24;
            if (v24 == 0) {
              GameRoutine_1571500((__int64)v64, *(_QWORD*)a2);
              goto LABEL_57;
            }
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                      memory_order_relaxed);
            GameRoutine_1571500((__int64)v64, *(_QWORD*)a2);
            std___1___shared_weak_count___release_weak(v24);
          }
          else if (v24 == 0) {
            goto LABEL_57;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            std___1___shared_weak_count___release_weak(v24);
          }
        }
      }
      else {
        ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"L_IconLegion",
                                         0);
      }
    LABEL_57:
      v26 = *(unsigned __int8*)(a2 + 22);
      v27 = *(_BYTE*)(a2 + 27);
      LayoutAccessor_1560070((void*)(&v62_.v62), a1, "L_Motivation");
      v28 = -1;
      if (v26 == 1 && (v27 & 1) == 0) {
        v28 = *(char*)(*(_QWORD*)a2 + 2090LL);
      }
      if (v62_.v63 == 0) {
      LABEL_113:
        if (((*(_BYTE*)(a2 + 27) | *(_BYTE*)(a2 + 28)) & 1) != 0) {
          v44 = 1;
        }
        else {
          v44 = *(_BYTE*)(a2 + 29);
        }
        LayoutAccessor_1560070((void*)(&v60_.v60), a1, "L_Favor");
        if (v60_.v61 != 0) {
          v45 = std___1___shared_weak_count_lock(v60_.v61);
          if (v45 != 0) {
            v46 = v60_.v60;
            v47 = v45;
            if (v60_.v60 != 0) {
              if (v44 == 6) {
                LayoutAccessor_155e830(v60_.v60, 0);
              }
              else {
                LayoutAccessor_155e830(v60_.v60, 1);
                LayoutAccessor_1562cf0(v46, GameData_204d200[v44]);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
              std___1___shared_weak_count___release_weak(v47);
            }
          }
          if (v60_.v61 != 0) {
            std___1___shared_weak_count___release_weak(v60_.v61);
          }
        }
        if (*(int*)(a2 + 32) >= 1) {
          v48 = ui_LayoutAccessor_FindPane(a1, (__int64)"IconNum");
          if (v48 != 0) {
            v48 = __dynamic_cast(v48, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          GameRoutine_18422d0(v48, *(unsigned int*)(a2 + 32), 0);
          goto LABEL_130;
        }
        if (*(_BYTE*)(a2 + 24) == 1) {
          v50 = *(_QWORD*)a2;
          v51 = *(_QWORD*)(*(_QWORD*)a2 + 440LL);
          if (v51 != 0) {
            v52 = *(unsigned __int8*)(v51 + 16);
            if (v52 == 5) {
              goto LABEL_145;
            }
            v53 = v52 != 6;
          }
          else {
            v53 = true;
          }
          if (v53) {
            v54 = *(_DWORD*)(v50 + 416);
            if ((v54 & 0x100000) != 0) {
              v55 = *(unsigned __int8*)(v50 + 501);
              if ((v54 & 0x80000) != 0) {
                v56 = 2;
              }
              else {
                v56 = 1;
              }
              v57 = ui_LayoutAccessor_FindPane(a1, (__int64)"IconNum");
              if (v57 != 0) {
                v57 = __dynamic_cast(v57, GameData_212d670[0],
                                     GameData_212d678[0], 0);
              }
              GameRoutine_18422d0(v57, (unsigned int)(v55 + 1), v56);
              v58 = game_util_Format("Info%02d", v55);
              LayoutAccessor_1562cf0((__int64)a1, v58);
            LABEL_130:
              ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconNum",
                                               1);
              if ((LayoutAccessor_15635a0(a1, (__int64)"IconNumIn", 1) & 1) ==
                  0) {
                v49 = "IconNumOn";
                goto LABEL_147;
              }
              goto LABEL_149;
            }
          }
        }
      LABEL_145:
        ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconNum", 0);
        if ((LayoutAccessor_15635a0(a1, (__int64)"IconNumOut", 1) & 1) == 0) {
          v49 = "IconNumOff";
        LABEL_147:
          if ((LayoutAccessor_15635a0(a1, (__int64)v49, 1) & 1) == 0) {
            GameHr_1562680((__int64)a1, v49, 0x1.0000000000000p+0f);
          }
        }
      LABEL_149:
        if (*(_BYTE*)(a2 + 16) == 1) {
          v59 = "MenuBattle";
        }
        else {
          v59 = "MenuDefault";
        }
        return LayoutAccessor_1562cf0((__int64)a1, v59);
      }
      v29 = std___1___shared_weak_count_lock(v62_.v63);
      if (v29 == 0) {
      LABEL_111:
        if (v62_.v63 != 0) {
          std___1___shared_weak_count___release_weak(v62_.v63);
        }
        goto LABEL_113;
      }
      v30 = v62_.v62;
      v31 = v29;
      if (v62_.v62 == nullptr) {
        goto LABEL_109;
      }
      if ((v28 & 0x80000000) != 0) {
        LayoutAccessor_155e830((__int64)v62_.v62, 0);
        goto LABEL_109;
      }
      LayoutAccessor_155e830((__int64)v62_.v62, 1);
      v32 = game_util_Format("L_Motivation%02d", 0);
      LayoutAccessor_1560070((void*)(&v65_.v65), v30, v32);
      if (v65_.v66 != 0) {
        v33 = std___1___shared_weak_count_lock(v65_.v66);
        v34 = (__int64)v65_.v65;
        if (v65_.v66 != 0) {
          std___1___shared_weak_count___release_weak(v65_.v66);
        }
        if (v33 != 0 && v34 != 0) {
          if (v28 != 0) {
            v35 = "GaugeOn";
          }
          else {
            v35 = "GaugeOff";
          }
          LayoutAccessor_1562cf0(v34, v35);
        }
        else if (v33 == 0) {
          goto LABEL_85;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          std___1___shared_weak_count___release_weak(v33);
        }
      }
    LABEL_85:
      v36 = game_util_Format("L_Motivation%02d", 1);
      LayoutAccessor_1560070((void*)(&v65_.v65), v30, v36);
      if (v65_.v66 == 0) {
        goto LABEL_97;
      }
      v37 = std___1___shared_weak_count_lock(v65_.v66);
      v38 = (__int64)v65_.v65;
      if (v65_.v66 != 0) {
        std___1___shared_weak_count___release_weak(v65_.v66);
      }
      if (v37 != 0 && v38 != 0) {
        if (v28 >= 2) {
          v39 = "GaugeOn";
        }
        else {
          v39 = "GaugeOff";
        }
        LayoutAccessor_1562cf0(v38, v39);
      }
      else if (v37 == 0) {
        goto LABEL_97;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        std___1___shared_weak_count___release_weak(v37);
      }
    LABEL_97:
      v40 = game_util_Format("L_Motivation%02d", 2);
      LayoutAccessor_1560070((void*)(&v65_.v65), v30, v40);
      if (v65_.v66 != 0) {
        v41 = std___1___shared_weak_count_lock(v65_.v66);
        v42 = (__int64)v65_.v65;
        if (v65_.v66 != 0) {
          std___1___shared_weak_count___release_weak(v65_.v66);
        }
        if (v41 != 0 && v42 != 0) {
          if (v28 >= 3) {
            v43 = "GaugeOn";
          }
          else {
            v43 = "GaugeOff";
          }
          LayoutAccessor_1562cf0(v42, v43);
        LABEL_107:
          if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
            std___1___shared_weak_count___release_weak(v41);
          }
          goto LABEL_109;
        }
        if (v41 != 0) {
          goto LABEL_107;
        }
      }
    LABEL_109:
      if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak(v31);
      }
      goto LABEL_111;
    }
    v11 = v10;
    if ((*(_BYTE*)(a2 + 27) & 1) != 0 || *(_BYTE*)(a2 + 28) == 1) {
      v12 = 1;
    }
    else {
      v12 = *(unsigned __int8*)(a2 + 29);
    }
    v14 = *(_DWORD*)(a2 + 36);
    if (*(_QWORD*)a2 != 0) {
      v15 = 1;
      if ((GameHr_1840740(v10, v14, *(_QWORD*)a2, v12, 1) & 1) != 0) {
        goto LABEL_25;
      }
    }
    else {
      v15 = 1;
      if ((GameHr_1840a20(v10, v14, *(_QWORD*)(a2 + 8), v12, 1) & 1) != 0) {
      LABEL_25:
        *(_BYTE*)(v11 + 88) = *(_BYTE*)(v11 + 88) & 0xFE | v15 & 1;
        goto LABEL_26;
      }
    }
    v15 = 0;
    if (v12 != 1 && v12 != 6) {
      v16 = *(_DWORD*)(a2 + 36);
      if (*(_QWORD*)a2 != 0) {
        v17 = GameHr_1840740(v11, v16, *(_QWORD*)a2, 1u, 1);
      }
      else {
        v17 = GameHr_1840a20(v11, v16, *(_QWORD*)(a2 + 8), 1u, 1);
      }
      v15 = v17;
    }
    goto LABEL_25;
  }
  LayoutAccessor_1562cf0((__int64)a1, "UnitIconOff");
  v65_.v71 = -1;
  v65_.v72 = -1;
  v65_.v73 = -1;
  v65_.v74 = -1;
  v4 = *msg_MessageManager_instance__ptr[0];
  v65_.v75 = -1;
  v65_.v76 = -1;
  v65_.v77 = -1;
  v65_.v78 = -1;
  v65_.v79 = -1;
  v65_.v80 = -1;
  v65_.v81 = -1;
  v65_.v82 = -1;
  v65_.v65 = GameData_212e348 + 2;
  v65_.v66 = 0xFFFF0001FFFF0000LL;
  v65_.v67 = 0xFFFF0004FFFF0002LL;
  v65_.v68 = 0xFFFF0006FFFF0005LL;
  v65_.v83 = 8;
  v65_.v69 = -65529;
  v65_.v70 = -65528;
  v5 = GameRoutine_a4dbe0(v4, "MID_BtlMenu_Transport", 0);
  if (v5 != nullptr) {
    v6 = (__int64)v5;
    v7 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
    if (v7 != 0) {
      GameRoutine_156c5d0(v7, v6, 0);
    }
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconReliance", 0);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconMerge", 0);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"L_Motivation", 0);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"L_Favor", 0);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"L_IconLegion", 0);
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"IconNum", 0);
  if (*(_BYTE*)(a2 + 26) == 1) {
    v8 = "MaterialStock";
  }
  else {
    v8 = "IconStock";
  }
  return LayoutAccessor_1562cf0((__int64)a1, v8);
}

void game_templates_167fe20(__int64 a1, __int64 a2)
{
  int v2;
  __int64* v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int128 v17;
  __int64* v18;
  char v19;
  __int64 v20;
  __int64 i;
  __int64 v22;
  unsigned int* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  char* v34;
  char* v35;
  char* v36;
  char* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  _QWORD* v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v52[3];
  struct {
    __int64* v53;
    __int64 v54;
  } v53_;
  __int64 v55;

  v3 = *(__int64**)(a1 + 168);
  if (v3 == nullptr) {
    return;
  }
  if (v3[2] == 0) {
    return;
  }
  v5 = v3[1];
  if (v5 == 0) {
    return;
  }
  v7 = std___1___shared_weak_count_lock(v5);
  if (v7 == 0) {
    goto LABEL_12;
  }
  v8 = *v3;
  if (*v3 != 0) {
    v2 = *(unsigned __int8*)(v8 + 24);
    v9 = v8 + 152;
    if (v2 == 0) {
      v9 = 0;
    }
    v10 = v9 != v3[2];
  }
  else {
    v10 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10) {
    LABEL_12:
      v11 = v3[1];
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        return;
      }
      goto LABEL_17;
    }
  }
  else {
    v12 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v12);
    if (v10) {
      goto LABEL_12;
    }
  }
  if ((v2 & 1) == 0) {
    return;
  }
LABEL_17:
  v13 = *(_BYTE*)(a1 + 224);
  *(_QWORD*)(a1 + 352) = a2;
  if ((v13 & 1) == 0) {
    v14 = *(_QWORD*)(a1 + 192);
    v15 = *(_QWORD*)(a1 + 200);
    if (v14 != v15) {
      do {
        *(_BYTE*)(v14 + 36) = *(_QWORD*)v14 == *(_QWORD*)(a1 + 352);
        v14 += 96;
      } while (v14 != v15);
      a2 = *(_QWORD*)(a1 + 352);
    }
  }
  if (a2 != 0) {
    v16 = *(float*)(a1 + 280);
    v17 = *(_OWORD*)(a2 + 32);
    v18 = *(__int64**)(a1 + 168);
    LODWORD(v53_.v54) = 0;
    *(float*)&v53_.v53 =
        (float)((float)(*(float*)&v17 * v16) + 0x1.e000000000000p+9f) +
        -0x1.e000000000000p+9f;
    *((float*)&v53_.v53 + 1) =
        0x1.0e00000000000p+9f -
        (float)((float)(v16 * *((float*)&v17 + 2)) + 0x1.0e00000000000p+9f);
    ui_LayoutAccessor_SetPaneTranslate(v18, (__int64)"L_CursorSelect",
                                       (__int64)&v53_.v53);
    v19 = *(_QWORD*)(a1 + 352) != 0;
  }
  else {
    v19 = 0;
  }
  ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 168),
                                   (__int64)"L_CursorSelect", v19);
  v20 = *(_QWORD*)(a1 + 256);
  for (i = *(_QWORD*)(a1 + 264); v20 != i; v20 += 104) {
    game_gmap_anonymous_168ad00(v20);
  }
  *(_QWORD*)(a1 + 368) = *(_QWORD*)(a1 + 360);
  if (*(_DWORD*)(a1 + 184) == 6) {
    if (GameData_21f1658 != 0) {
      v22 = *(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 96LL);
    }
    else {
      v22 = 0;
    }
    v23 = *(unsigned int**)(a1 + 352);
    v55 = v22;
    GmapUIDef_1654700((void*)((__int64*)&v53_.v53), v22);
    v24 = v53_.v53;
    v25 = (__int64*)v53_.v54;
    if (v53_.v53 != (__int64*)v53_.v54) {
      while (1) {
        v27 = *v24;
        v24 += 2;
        v26 = v27;
        if (game_gmap_SpotMgr_FindSpot(*(unsigned int**)(v27 + 40)) == v23) {
          break;
        }
        if (v24 == v25) {
          goto LABEL_33;
        }
      }
      GameHr_ae1fe0((void*)(v52), v26);
      v29 = *(_QWORD*)(a1 + 360);
      v30 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v29 != 0) {
        v31 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
        *(_QWORD*)(a1 + 368) = v29;
        v32 = 128;
        if (*(_QWORD*)(v31 + 200) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(v31 + v32, v29);
      }
      v34 = v52[0];
      v33 = v52[1];
      v35 = v52[2];
      qmemcpy((void*)(a1 + 360), v52, 24);
      if (v33 >= v35) {
        v38 = v33 - v34;
        v39 = ((v33 - v34) >> 3) + 1;
        if (v39 >> 61 != 0) {
          GameRoutine_8875e0();
        }
        v40 = v35 - v34;
        if (v40 >> 2 > v39) {
          v39 = v40 >> 2;
        }
        if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
          v39 = 0x1FFFFFFFFFFFFFFFLL;
        }
        if (v39 != 0) {
          if (v39 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v41 = v39;
        }
        else {
          v41 = 1;
        }
        v42 = (_QWORD*)fw_memory_HeapManager_Allocate(*v30, v41 * 8, 16, 0);
        v43 = &v42[v41];
        *v42 = v22;
        v44 = v42 + 1;
        v45 = (char*)v42;
        memcpy((__int64)(v42 + 1), (__int64)v34, v38);
        v46 = *(_QWORD*)(a1 + 360);
        *(_QWORD*)(a1 + 368) = v34;
        v47 = (unsigned __int64)&v34[-v46];
        v48 = v45 - &v34[-v46];
        memcpy(v48, v46, v47);
        *(_QWORD*)(a1 + 360) = v48;
        *(_QWORD*)(a1 + 368) = (char*)v44 + v38;
        *(_QWORD*)(a1 + 376) = v43;
        if (v46 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*v30 + 200) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free(*v30 + v49, v46);
        }
      }
      else if (v34 == v33) {
        *(_QWORD*)v33 = v22;
        *(_QWORD*)(a1 + 368) = v33 + 8;
      }
      else {
        v36 = v34 + 8;
        if ((unsigned __int64)v33 < 8) {
          v37 = v33;
        }
        else {
          *(_QWORD*)v33 = *((_QWORD*)v33 - 1);
          v37 = v33 + 8;
        }
        *(_QWORD*)(a1 + 368) = v37;
        if (v33 != v36) {
          memmove((__int64)(v34 + 8), (__int64)v34, v33 - v36);
          v37 = *(char**)(a1 + 368);
        }
        v50 = 8;
        if (&v55 >= (__int64*)v37 || &v55 < (__int64*)v34) {
          v50 = 0;
        }
        *(_QWORD*)v34 = *(__int64*)((char*)&v55 + v50);
      }
    }
  LABEL_33:
    if (v53_.v53 != nullptr) {
      v53_.v54 = (__int64)v53_.v53;
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v53_.v53);
    }
  }
}

__attribute__((swiftcall)) void game_templates_18d7c60(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2,
                                                       unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  _QWORD* i;
  _BYTE* v32;
  unsigned __int64 v33;
  _BYTE* v34;
  unsigned __int64 v35;
  _BYTE* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  _BYTE* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  struct {
    _QWORD v47[2];
    __int64 v48;
    unsigned __int64 v49;
    __int64 v50;
  } v47_;
  struct {
    _QWORD v51[2];
    unsigned __int64 v52;
    __int64 (*v53)();
    __int64 v54;
  } v51_;
  struct {
    _BYTE v55[256];
    _BYTE* v56;
  } v55_;
  struct {
    __int64* v57;
    __int64 v58;
    _QWORD* v59;
    __int64 v60;
  } v57_;
  struct {
    char v61[8];
    char v62;
  } v61_;
  struct {
    _QWORD v63[2];
    int v64;
    char gap428_[4];
    __int64 v65;
    __int64 v66;
  } v63_;

  v8 = memchr(a2, 58, a3);
  v9 = v8 - a2;
  if (v8 == 0) {
    v9 = -1;
  }
  if (v9 == -1) {
    v10 = 0;
  }
  else {
    v10 = v9 + 2;
  }
  v11 = a3 - v10;
  v12 = a2 + v10;
  v13 = Registration_18d7920(a1);
  if ((v13 & 1) == 0) {
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_75;
    }
    if (a3 >= 0x17) {
      if ((a3 | 7) == 0x17) {
        v24 = 26;
      }
      else {
        v24 = (a3 | 7) + 1;
      }
      v25 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0);
      a4[1] = a3;
      a4[2] = v25;
      *a4 = v24 | 1;
      v22 = v25;
    }
    else {
      *(_BYTE*)a4 = 2 * a3;
      v22 = (__int64)a4 + 1;
      if (a3 == 0) {
        goto LABEL_29;
      }
    }
    memmove(v22, a2, a3);
  LABEL_29:
    *(_BYTE*)(v22 + a3) = 0;
    return;
  }
  v14 = HIDWORD(v13);
  if (HIDWORD(v13) == 1) {
    v51_.v52 = 0;
    v51_.v53 = GameRoutine_64be60;
    v47_.v49 = v11;
    v47_.v50 = 428;
    v51_.v54 = 0;
    v47_.v48 = v12;
    v63_.v64 = 0;
    v15 = *snd_g_fileIndex_ptr[0];
    v51_.v51[0] = v55_.v55;
    v51_.v51[1] = 256;
    v63_.v63[0] = "{}{}";
    v63_.v63[1] = "";
    v55_.v56 = v55_.v55;
    v61_.v61[0] = 0;
    v61_.v62 = 0;
    v16 = (*(_BYTE*)(v15 + 4432) & 1) == 0;
    v17 = v15 + 4433;
    v18 = *(_QWORD*)(v15 + 4448);
    if (v16) {
      v18 = v17;
    }
    v47_.v47[0] = v18;
    v57_.v59 = v47_.v47;
    v57_.v60 = 428;
    v63_.v65 = 0;
    v63_.v66 = 2;
    v57_.v57 = v51_.v51;
    v57_.v58 = 2;
    GameRoutine_6380e0((__int64)v63_.v63, &v57_.v57);
    if (v61_.v62 == 1) {
      std___1_locale_Destroy_locale((__int64)v61_.v61);
    }
    v19 = v51_.v52;
    if (v51_.v52 < 0xFFFFFFFFFFFFFFF7LL) {
      v20 = (__int64)v55_.v56;
      if (v51_.v52 >= 0x17) {
        if ((v51_.v52 | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (v51_.v52 | 7) + 1;
        }
        v27 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v26, 16, 0);
        a4[1] = v19;
        a4[2] = v27;
        *a4 = v26 | 1;
        v21 = v27;
      }
      else {
        *(_BYTE*)a4 = 2 * v51_.v52;
        v21 = (__int64)a4 + 1;
        if (v19 == 0) {
          goto LABEL_36;
        }
      }
      memmove(v21, v20, v19);
    LABEL_36:
      v28 = v55_.v56;
      *(_BYTE*)(v21 + v19) = 0;
      if (v28 != v55_.v55 && v28 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v28);
      }
      return;
    }
  LABEL_75:
    String_60a1d0();
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (a3 | 7) + 1;
    }
    v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v30, 16, 0);
    a4[1] = a3;
    a4[2] = v23;
    *a4 = v30 | 1;
  }
  else {
    *(_BYTE*)a4 = 2 * a3;
    v23 = (__int64)a4 + 1;
    if (a3 == 0) {
      goto LABEL_46;
    }
  }
  memmove(v23, a2, a3);
LABEL_46:
  *(_BYTE*)(v23 + a3) = 0;
  for (i = *(_QWORD**)(a1 + 64);; ++i) {
    if (i == *(_QWORD**)(a1 + 72)) {
      return;
    }
    v32 = (_BYTE*)*i;
    if (*(_BYTE*)*i == 1 &&
        (((unsigned int)v14 >> *((_DWORD*)v32 + 1)) & 1) != 0) {
      break;
    }
  }
  v33 = (unsigned __int8)v32[16];
  v35 = *((_QWORD*)v32 + 3);
  v34 = *((_BYTE**)v32 + 4);
  v36 = v32 + 17;
  v47_.v48 = v12;
  v47_.v49 = v11;
  v51_.v54 = 0;
  v51_.v52 = 0;
  v51_.v53 = GameRoutine_64be60;
  v63_.v64 = 0;
  v16 = (v33 & 1) == 0;
  v51_.v51[0] = v55_.v55;
  v51_.v51[1] = 256;
  v37 = v33 >> 1;
  v63_.v63[0] = "{}:/{}";
  v63_.v63[1] = "";
  v55_.v56 = v55_.v55;
  v61_.v61[0] = 0;
  v61_.v62 = 0;
  if (!v16) {
    v37 = v35;
    v36 = v34;
  }
  v47_.v50 = 429;
  v47_.v47[0] = v36;
  v47_.v47[1] = v37;
  v63_.v65 = 0;
  v63_.v66 = 2;
  v57_.v59 = v47_.v47;
  v57_.v60 = 429;
  v57_.v57 = v51_.v51;
  v57_.v58 = 2;
  GameRoutine_6380e0((__int64)v63_.v63, &v57_.v57);
  if (v61_.v62 == 1) {
    std___1_locale_Destroy_locale((__int64)v61_.v61);
  }
  v38 = v51_.v52;
  if (v51_.v52 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v39 = (__int64)v55_.v56;
  if (v51_.v52 >= 0x17) {
    if ((v51_.v52 | 7) == 0x17) {
      v41 = 26;
    }
    else {
      v41 = (v51_.v52 | 7) + 1;
    }
    v40 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v41, 16, 0);
    v57_.v58 = v38;
    v57_.v59 = v40;
    v57_.v57 = (__int64*)(v41 | 1);
    goto LABEL_63;
  }
  LOBYTE(v57_.v57) = 2 * v51_.v52;
  v40 = (char*)&v57_.v57 + 1;
  if (v51_.v52 != 0) {
  LABEL_63:
    memmove((__int64)v40, v39, v38);
  }
  v42 = v55_.v56;
  v40[v38] = 0;
  if (v42 != v55_.v55 && v42 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                                  (__int64)v42);
  }
  if ((*(_BYTE*)a4 & 1) != 0) {
    v44 = a4[2];
    if (v44 != 0) {
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v44);
    }
  }
  v46 = v57_.v58;
  *a4 = (__int64)v57_.v57;
  a4[1] = v46;
  a4[2] = (__int64)v57_.v59;
}

#pragma GCC visibility pop
