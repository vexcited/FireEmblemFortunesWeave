#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_205b2e0[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c018[2];
extern __int64 (***GameData_212c3c8)();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cea0;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_13381e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_135bf80(long double, long double);
void __attribute__((noreturn)) GameRoutine_14cfad0(long double);
void __attribute__((noreturn)) GameRoutine_14cfaf0(void);
__int64 GameRoutine_158d440(__int64 result, __int64*, __int64, char);
__int64 GameRoutine_158dbc0(__int64 result, _WORD*, __int64, char);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(void);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6544c0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_cdcc10(_QWORD);
_DWORD* GameRoutine_6544c0_alt1(__int64, __int64) __asm__("GameRoutine_6544c0");
__int64 GameRoutine_634d80_alt1(__int64, __int64) __asm__("GameRoutine_634d80");
__int64 SpotMgr_13381e0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn))
GameRoutine_135bf80_alt1() __asm__("GameRoutine_135bf80");
void __attribute__((noreturn))
GameRoutine_14cfad0_alt1() __asm__("GameRoutine_14cfad0");
void __attribute__((noreturn))
GameRoutine_14cfaf0_alt1() __asm__("GameRoutine_14cfaf0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void __attribute__((noreturn))
GameRoutine_cdcc10_alt1() __asm__("GameRoutine_cdcc10");
__int64 GameHr_14ce840_alt1(__int64* a1, __int64 a2) __asm__("GameHr_14ce840");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void SpotMgr_13381e0_alt1(__int64*) __asm__("SpotMgr_13381e0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GameHr_14ce840(__int64* a1, const char* a2);

__int64 GameHr_14ce840(__int64* a1, const char* a2)
{
  __int64 v3;
  _DWORD* v4;
  __int128 v5;
  unsigned __int8* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  unsigned __int8* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 (***v33)();
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  unsigned __int8* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 (***v53)();
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64* v77;
  unsigned __int64 v78;
  __int64* v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  _QWORD* v85;
  __int64 v86;
  int v87;
  int v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64 v94;
  unsigned __int8* v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64* v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 (***v103)();
  __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 (***v111)();
  __int64 v112;
  __int64 v113;
  unsigned __int8* v114;
  __int64 v115;
  int v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64* v119;
  int v120;
  __int64 v121;
  __int128 v122;
  unsigned int v123;
  unsigned int v124;
  __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64* v129;
  __int64* v130;
  __int128 v131;
  __int64* v132;
  __int64* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  _QWORD* v138;
  _OWORD* v139;
  __int64 v140;
  __int64 v141;
  __int128 v142;
  int v143;
  unsigned __int64 v144;
  int v145;
  __int64 v146;
  unsigned __int8* v147;
  __int128 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  _OWORD* v153;
  _QWORD* v154;
  _QWORD* v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64* v160;
  __int64* v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  _QWORD* v174;
  __int64 v175;
  _QWORD* v176;
  __int64 v177;
  char* v178;
  unsigned __int64 v179;
  __int64* v180;
  __int64* v181;
  unsigned __int64 v182;
  _QWORD* v183;
  int v184;
  int v185;
  __int64 v186;
  char* v187;
  unsigned __int64 v188;
  unsigned __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64* v192;
  __int64* v193;
  __int64* v194;
  char* v195;
  __int64* v196;
  __int64* v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64* v201;
  char v202;
  __int64 v203;
  __int64 v204;
  __int64 v206;
  int v207;
  __int64 v208;
  int v209;
  __int64 v210;
  int v211;
  unsigned int v212;
  __int64* v213;
  int v214;
  __int64 v215;
  __int128 v216;
  __int64 v217;
  __int64 v218;
  unsigned __int8* v219;
  unsigned int v220;
  __int128 v221;
  __int64 v222;
  __int128 v223;
  int v224;
  unsigned __int8* v225;
  unsigned int v226;
  int v227;
  __int64 v228;
  unsigned int v229;
  unsigned __int8* v230;
  struct {
    __int64 v231;
    unsigned __int64 v232;
    char* v233;
  } v231_;
  struct {
    __int64 v234;
    unsigned __int64 v235;
    char* v236;
  } v234_;
  struct {
    __int64 v237;
    unsigned __int64 v238;
    __int64 (***v239)();
    int v240;
  } v237_;

  v3 = *snd_g_fileIndex_ptr[0];
  v237_.v237 = (__int64)a2;
  v237_.v238 = strlen_alt1(a2);
  v237_.v240 = 0;
  v237_.v239 = GameData_212c3c8;
  v4 = GameRoutine_6544c0_alt1(v3, (__int64)&v237_.v237);
  v6 = *((unsigned __int8**)v4 + 74);
  v206 = (__int64)v4;
  if (v6 != nullptr) {
    v7 = *a1;
    v8 = *(unsigned __int16*)(v6 + 1);
    v9 = *v6;
    v227 = *(unsigned __int16*)(v6 + 1);
    if (v8 > (a1[2] - *a1) >> 6) {
      v10 = (__int64*)a1[1];
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v8 << 6, 16, 0);
      v12 = v11 + (v8 << 6);
      v13 = v11;
      v14 = (__int64)v10 + v11 - v7;
      if (v10 != (__int64*)v7) {
        v15 = (__int64*)v7;
        v16 = (_QWORD*)v11;
        do {
          v17 = *v15;
          v18 = v15[2];
          v16[1] = v15[1];
          v16[2] = v18;
          *v16 = v17;
          v15[1] = 0;
          v15[2] = 0;
          *v15 = 0;
          v19 = v15[5];
          v16[4] = v15[4];
          v16[5] = v19;
          v20 = v15[6];
          v15 += 8;
          v16[6] = v20;
          v16 += 8;
        } while (v15 != v10);
        do {
          if ((*(_BYTE*)v7 & 1) != 0) {
            v21 = *(_QWORD*)(v7 + 16);
            if (v21 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v22 = 128;
              }
              else {
                v22 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v22,
                                                 v21);
            }
          }
          v7 += 64;
        } while ((__int64*)v7 != v10);
        v7 = *a1;
      }
      *a1 = v13;
      a1[1] = v14;
      a1[2] = v12;
      if (v7 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v7);
      }
    }
    v213 = a1;
    v230 = v6;
    v212 = v9;
    v219 = v6 + 2;
    if ((_DWORD)v8 != 0) {
      v24 = 3;
      v25 = 0;
      v225 = v6 + 8;
      while (1) {
        v28 = v24;
        v29 = &v6[v24];
        v30 = *(unsigned int*)v29;
        v31 = *((int*)v29 + 1);
        v32 = *(unsigned __int16*)&v6[v31];
        if (*(_WORD*)&v6[v31] != 0) {
          if ((unsigned int)v32 >= 0x17) {
            if ((v32 | 7) == 0x17) {
              v34 = 26;
            }
            else {
              v34 = (v32 | 7) + 1;
            }
            v33 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v34, 16, 0);
            v237_.v238 = v32;
            v237_.v239 = v33;
            v237_.v237 = v34 | 1;
          }
          else {
            v33 = (__int64 (***)(void))((char*)&v237_.v237 + 1);
            LOBYTE(v237_.v237) = 2 * v32;
          }
          memmove_alt1((__int64)v33, (__int64)&v219[v31], v32);
          *((_BYTE*)v33 + v32) = 0;
        }
        else {
          v237_.v238 = 0;
          v237_.v239 = nullptr;
          v237_.v237 = 0;
        }
        v35 = v225[v28];
        if (v9 != 0) {
          LODWORD(v36) = v28 + 9;
          if (v9 != 1) {
            goto LABEL_50;
          }
        }
        else {
          LODWORD(v36) = v28 + 10;
        }
        v37 = (int)v36;
        v38 = *(int*)&v6[(int)v36];
        v39 = *(unsigned __int16*)&v6[v38];
        if (*(_WORD*)&v6[v38] != 0) {
          if ((unsigned int)v39 >= 0x17) {
            if ((v39 | 7) == 0x17) {
              v41 = 26;
            }
            else {
              v41 = (v39 | 7) + 1;
            }
            v40 = (char*)fw_memory_HeapManager_Allocate(
                fw_memory_g_heap_manager, v41, 16, 0);
            v234_.v235 = v39;
            v234_.v236 = v40;
            v234_.v234 = v41 | 1;
          }
          else {
            v40 = (char*)&v234_.v234 + 1;
            LOBYTE(v234_.v234) = 2 * v39;
          }
          memmove_alt1((__int64)v40, (__int64)&v219[v38], v39);
          v40[v39] = 0;
          if ((v234_.v234 & 1) != 0 && v234_.v236 != nullptr) {
            v42 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v42 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v42,
                (__int64)v234_.v236);
          }
        }
        else {
          v234_.v235 = 0;
          v234_.v236 = nullptr;
          v234_.v234 = 0;
        }
        v36 = v37 + 4;
        if (v9 == 0) {
          v44 = *(int*)&v6[v36];
          v45 = *(unsigned __int16*)&v6[v44];
          if (*(_WORD*)&v6[v44] != 0) {
            if ((unsigned int)v45 >= 0x17) {
              if ((v45 | 7) == 0x17) {
                v47 = 26;
              }
              else {
                v47 = (v45 | 7) + 1;
              }
              v46 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v47, 16, 0);
              v231_.v232 = v45;
              v231_.v233 = v46;
              v231_.v231 = v47 | 1;
            }
            else {
              v46 = (char*)&v231_.v231 + 1;
              LOBYTE(v231_.v231) = 2 * v45;
            }
            memmove_alt1((__int64)v46, (__int64)&v219[v44], v45);
            v46[v45] = 0;
            if ((v231_.v231 & 1) != 0 && v231_.v233 != nullptr) {
              v48 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                  (__int64)v231_.v233);
            }
          }
          else {
            v231_.v232 = 0;
            v231_.v233 = nullptr;
            v231_.v231 = 0;
          }
          LODWORD(v36) = v37 + 8;
          v43 = v37 + 16;
          goto LABEL_65;
        }
      LABEL_50:
        v43 = v36 + 4;
      LABEL_65:
        LODWORD(v5) = *(_DWORD*)&v6[(int)v36];
        v49 = &v6[v43];
        v50 = v30 | (v35 << 32);
        a1 = v213;
        v51 = v237_.v237;
        v52 = v237_.v238;
        v53 = v237_.v239;
        DWORD2(v5) = *(_DWORD*)v49;
        v54 = v213[1];
        v55 = v213[2];
        if (v54 < v55) {
          *(_QWORD*)v54 = v237_.v237;
          *(_QWORD*)(v54 + 8) = v52;
          v6 = v230;
          v9 = v212;
          v26 = v54 + 64;
          v27 = v227;
          *(_QWORD*)(v54 + 16) = v53;
          *(_OWORD*)(v54 + 32) = v5;
          *(_QWORD*)(v54 + 48) = v50;
        }
        else {
          v56 = v54 - *v213;
          v57 = (v56 >> 6) + 1;
          if (v57 >> 58 != 0) {
            GameRoutine_14cfad0_alt1();
          }
          v58 = v55 - *v213;
          v223 = v5;
          if (v58 >> 5 > v57) {
            v57 = v58 >> 5;
          }
          if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFC0LL) {
            v57 = 0x3FFFFFFFFFFFFFFLL;
          }
          if (v57 >> 58 != 0) {
          LABEL_239:
            GameRoutine_60a210_alt1();
          }
          v59 = v57 << 6;
          v60 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v57 << 6, 16, 0);
          v61 = v60 + v56;
          v5 = v223;
          v62 = v60;
          *(_QWORD*)(v61 + 16) = v53;
          *(_QWORD*)(v61 + 48) = v50;
          v63 = *v213;
          v64 = (__int64*)v213[1];
          *(_QWORD*)v61 = v51;
          *(_QWORD*)(v61 + 8) = v52;
          *(_OWORD*)(v61 + 32) = v223;
          v65 = v61 + v63 - (_QWORD)v64;
          if ((__int64*)v63 == v64) {
            v74 = v213;
            v6 = v230;
            v9 = v212;
          }
          else {
            v6 = v230;
            v9 = v212;
            v66 = (__int64*)v63;
            v67 = (_QWORD*)(v61 + v63 - (_QWORD)v64);
            do {
              v68 = *v66;
              v69 = v66[2];
              v67[1] = v66[1];
              v67[2] = v69;
              *v67 = v68;
              v66[1] = 0;
              v66[2] = 0;
              *v66 = 0;
              v70 = v66[5];
              v67[4] = v66[4];
              v67[5] = v70;
              v71 = v66[6];
              v66 += 8;
              v67[6] = v71;
              v67 += 8;
            } while (v66 != v64);
            do {
              if ((*(_BYTE*)v63 & 1) != 0) {
                v72 = *(_QWORD*)(v63 + 16);
                if (v72 != 0) {
                  v73 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v73 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v72);
                }
              }
              v63 += 64;
            } while ((__int64*)v63 != v64);
            v74 = v213;
            v63 = *v213;
          }
          v75 = v62 + v59;
          v27 = v227;
          v26 = v61 + 64;
          *v74 = v65;
          v74[1] = v26;
          v74[2] = v75;
          a1 = v74;
          if (v63 != 0) {
            v76 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v76 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v63);
          }
        }
        v24 = v43 + 4;
        ++v25;
        a1[1] = v26;
        if (v25 == v27) {
          goto LABEL_89;
        }
      }
    }
    v24 = 3;
  LABEL_89:
    v77 = (__int64*)a1[3];
    v78 = *(unsigned __int16*)&v6[v24];
    if (0x8E38E38E38E38E39LL * ((a1[5] - (__int64)v77) >> 3) < v78) {
      v79 = (__int64*)a1[4];
      v80 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 72 * v78, 16, 0);
      v81 = v80 + 72 * v78;
      v82 = v80;
      v83 = v80 + (char*)v79 - (char*)v77;
      if (v79 != v77) {
        v84 = v77;
        v85 = (_QWORD*)v80;
        do {
          *v85 = *v84;
          v85[1] = v84[1];
          v85[2] = v84[2];
          v84[1] = 0;
          v84[2] = 0;
          *v84 = 0;
          v85[3] = v84[3];
          v85[4] = v84[4];
          v85[5] = v84[5];
          v84[4] = 0;
          v84[5] = 0;
          v84[3] = 0;
          v85[6] = v84[6];
          v85[7] = v84[7];
          v85[8] = v84[8];
          v84[7] = 0;
          v84[8] = 0;
          v84[6] = 0;
          v84 += 9;
          v85 += 9;
        } while (v84 != v79);
        do {
          SpotMgr_13381e0_alt1(v77);
          v77 += 9;
        } while (v77 != v79);
        v77 = (__int64*)a1[3];
      }
      a1[3] = v82;
      a1[4] = v83;
      a1[5] = v81;
      if (v77 != nullptr) {
        v86 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v86 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, (__int64)v77);
      }
    }
    if ((_DWORD)v78 != 0) {
      v87 = v24 + 2;
      v88 = 0;
      v209 = v78;
      if (v212 != 0) {
        v89 = 4;
      }
      else {
        v89 = 8;
      }
      v226 = v89;
      v224 = v89 + 4;
      if (v212 != 0) {
        v90 = 8;
      }
      else {
        v90 = 12;
      }
      v207 = v90;
      do {
        v92 = *(unsigned __int16*)&v6[v87];
        v93 = v87 + 2;
        v211 = v88;
        if (v92 != 0) {
          v94 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v92, 16, 0);
          v95 = &v6[v93];
          v96 = v94 + 24 * v92;
          v97 = v94;
          v98 = (__int64*)v94;
          while (1) {
            v101 = *(int*)v95;
            v95 += 4;
            v100 = v101;
            v102 = *(unsigned __int16*)&v230[v101];
            if (*(_WORD*)&v230[v101] != 0) {
              if ((unsigned int)v102 >= 0x17) {
                if ((v102 | 7) == 0x17) {
                  v104 = 26;
                }
                else {
                  v104 = (v102 | 7) + 1;
                }
                v103 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
                    fw_memory_g_heap_manager, v104, 16, 0);
                v237_.v238 = v102;
                v237_.v239 = v103;
                v237_.v237 = v104 | 1;
              }
              else {
                v103 = (__int64 (***)(void))((char*)&v237_.v237 + 1);
                LOBYTE(v237_.v237) = 2 * v102;
              }
              memmove_alt1((__int64)v103, (__int64)&v219[v100], v102);
              *((_BYTE*)v103 + v102) = 0;
              if ((unsigned __int64)v98 < v96) {
              LABEL_113:
                v99 = v237_.v238;
                *v98 = v237_.v237;
                v98[1] = v99;
                v98[2] = (__int64)v237_.v239;
                goto LABEL_114;
              }
            }
            else {
              v237_.v238 = 0;
              v237_.v239 = nullptr;
              v237_.v237 = 0;
              if ((unsigned __int64)v98 < v96) {
                goto LABEL_113;
              }
            }
            v105 = (unsigned __int64)v98 - v97;
            v106 = 1 - 0x5555555555555555LL * (((__int64)v98 - v97) >> 3);
            if (v106 > 0xAAAAAAAAAAAAAAALL) {
              goto LABEL_240;
            }
            if (0x5555555555555556LL * ((__int64)(v96 - v97) >> 3) > v106) {
              v106 = 0x5555555555555556LL * ((__int64)(v96 - v97) >> 3);
            }
            if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v96 - v97) >> 3) >=
                0x555555555555555LL) {
              v107 = 0xAAAAAAAAAAAAAAALL;
            }
            else {
              v107 = v106;
            }
            if (v107 != 0) {
              if (v107 > 0xAAAAAAAAAAAAAAALL) {
                goto LABEL_239;
              }
              v108 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    24 * v107, 16, 0);
            }
            else {
              v108 = 0;
            }
            v109 = v237_.v237;
            v110 = v237_.v238;
            v98 = (__int64*)(v108 + v105);
            v237_.v237 = 0;
            v237_.v238 = 0;
            *v98 = v109;
            v98[1] = v110;
            v111 = v237_.v239;
            v237_.v239 = nullptr;
            v98[2] = (__int64)v111;
            v96 = v108 + 24 * v107;
            memcpy_alt1(v108, v97, v105);
            if (v97 != 0) {
              v112 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v112 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, v97);
              if ((v237_.v237 & 1) != 0 && v237_.v239 != nullptr) {
                v113 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v113 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v113,
                    (__int64)v237_.v239);
              }
            }
            v97 = v108;
          LABEL_114:
            v98 += 3;
            v93 += 4;
            LODWORD(v92) = v92 - 1;
            if ((_DWORD)v92 == 0) {
              goto LABEL_145;
            }
          }
        }
        v98 = nullptr;
        v97 = 0;
      LABEL_145:
        v114 = v230;
        v115 = *(unsigned __int16*)&v230[v93];
        v116 = v93 + 2;
        if (v115 != 0) {
          v117 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v115, 16, 0);
          v118 = v117 + 16 * v115;
          v119 = (__int64*)v117;
          v120 = 0;
          v121 = v117;
          while (1) {
            v123 = *(_DWORD*)&v114[v116];
            v124 = *(_DWORD*)&v114[v116 + (unsigned __int64)v226];
            if ((unsigned __int64)v119 < v118) {
              v228 = v121;
              *(_QWORD*)&v122 = v123;
              *((_QWORD*)&v122 + 1) = v124;
              *(_OWORD*)v119 = v122;
            }
            else {
              v125 = ((__int64)v119 - v121) >> 4;
              v126 = v125 + 1;
              if ((unsigned __int64)(v125 + 1) >> 60 != 0) {
                goto LABEL_241;
              }
              v220 = v123;
              v229 = v124;
              if ((__int64)(v118 - v121) >> 3 > v126) {
                v126 = (__int64)(v118 - v121) >> 3;
              }
              if (v118 - v121 >= 0x7FFFFFFFFFFFFFF0LL) {
                v127 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v127 = v126;
              }
              if (v127 >> 60 != 0) {
                goto LABEL_239;
              }
              v128 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v127, 16, 0);
              v129 = (__int64*)((char*)v119 + v128 - v121);
              v130 = &v129[-2 * v125];
              *(_QWORD*)&v131 = v220;
              *((_QWORD*)&v131 + 1) = v229;
              *(_OWORD*)v129 = v131;
              if ((__int64*)v121 != v119) {
                v132 = (__int64*)v121;
                v133 = v130;
                do {
                  v133[1] = v132[1];
                  v134 = *v132;
                  v132 += 2;
                  *v133 = v134;
                  v133 += 2;
                } while (v132 != v119);
              }
              v118 = v128 + 16 * v127;
              v135 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v135 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v135, v121);
              v228 = (__int64)v130;
              v121 = (__int64)v130;
              v114 = v230;
              v119 = v129;
            }
            v119 += 2;
            ++v120;
            v116 += v224;
            if (v120 == (_DWORD)v115) {
              goto LABEL_164;
            }
          }
        }
        v228 = 0;
        v119 = nullptr;
      LABEL_164:
        v136 = *(unsigned __int16*)&v114[v116];
        v87 = v116 + 2;
        if (v212 >= 3) {
          v137 = v228;
          if ((_DWORD)v136 != 0) {
            v140 = 32 * v136;
            v214 = v136;
            v141 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v136, 16, 0);
            v143 = v214;
            v144 = v141 + v140;
            v139 = (_OWORD*)v141;
            v145 = 0;
            v146 = v141;
            while (1) {
              DWORD1(v148) = 0;
              HIDWORD(v148) = 0;
              v147 = &v230[v87];
              LODWORD(v148) = *(_DWORD*)v147;
              LODWORD(v142) = *((_DWORD*)v147 + 2);
              DWORD2(v148) = *((_DWORD*)v147 + 1);
              DWORD2(v142) = *((_DWORD*)v147 + 3);
              if ((unsigned __int64)v139 < v144) {
                *v139 = v148;
                v139[1] = v142;
                v138 = (_QWORD*)v146;
              }
              else {
                v149 = ((__int64)v139 - v146) >> 5;
                v150 = v149 + 1;
                if ((unsigned __int64)(v149 + 1) >> 59 != 0) {
                  goto LABEL_242;
                }
                v216 = v142;
                v221 = v148;
                if ((__int64)(v144 - v146) >> 4 > v150) {
                  v150 = (__int64)(v144 - v146) >> 4;
                }
                if (v144 - v146 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v150 = 0x7FFFFFFFFFFFFFFLL;
                }
                if (v150 >> 59 != 0) {
                  goto LABEL_239;
                }
                v151 = 32 * v150;
                v152 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v150, 16, 0);
                v153 = (_OWORD*)((char*)v139 + v152 - v146);
                v138 = &v153[-2 * v149];
                *v153 = v221;
                v153[1] = v216;
                if ((_OWORD*)v146 != v139) {
                  v154 = (_QWORD*)v146;
                  v155 = v138;
                  do {
                    v155[1] = v154[1];
                    *v155 = *v154;
                    v155[3] = v154[3];
                    v156 = v154[2];
                    v154 += 4;
                    v155[2] = v156;
                    v155 += 4;
                  } while (v154 != (_QWORD*)v139);
                }
                v144 = v152 + v151;
                v157 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v157 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v157, v146);
                v139 = v153;
                v137 = v228;
                v143 = v214;
                v146 = (__int64)v138;
              }
              v87 += 16;
              v139 += 2;
              if (++v145 == v143) {
                goto LABEL_185;
              }
            }
          }
          v138 = nullptr;
          v139 = nullptr;
        }
        else {
          v137 = v228;
          v138 = nullptr;
          v139 = nullptr;
          if ((_DWORD)v136 != 0) {
            v87 += v207 * v136;
          }
        }
      LABEL_185:
        v222 = (__int64)v138;
        v158 = (__int64)v98 - v97;
        if (v98 == (__int64*)v97) {
          v159 = 0;
          v161 = nullptr;
          v164 = 0;
          v165 = (__int64)v119 - v137;
          if (v119 == (__int64*)v137) {
            goto LABEL_196;
          }
        }
        else {
          if (0xAAAAAAAAAAAAAAABLL * (v158 >> 3) > 0xAAAAAAAAAAAAAAALL) {
          LABEL_240:
            GameRoutine_64aa00_alt1();
          }
          v159 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)v98 - v97, 16,
              0);
          v160 = (__int64*)v97;
          v161 = (__int64*)v159;
          do {
            if ((*(_BYTE*)v160 & 1) != 0) {
              fw_text_String_CopyTerminated(v161, v160[2], v160[1]);
            }
            else {
              v162 = *v160;
              v163 = v160[2];
              v161[1] = v160[1];
              v161[2] = v163;
              *v161 = v162;
            }
            v160 += 3;
            v161 += 3;
          } while (v160 != v98);
          v137 = v228;
          v164 = v159 + v158;
          v165 = (__int64)v119 - v228;
          if (v119 == (__int64*)v228) {
          LABEL_196:
            v215 = 0;
            v170 = 0;
            v210 = 0;
            goto LABEL_197;
          }
        }
        if (v165 < 0) {
        LABEL_241:
          GameRoutine_cdcc10_alt1();
        }
        v166 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v165, 16, 0);
        v167 = v166 + v165;
        v168 = v165 & 0x7FFFFFFFFFFFFFF0LL;
        v169 = v166;
        v210 = v167;
        memcpy_alt1(v166, v137, v168);
        v170 = v169 + v168;
        v215 = v169;
      LABEL_197:
        v217 = v164;
        v171 = (unsigned __int64)v139 - v222;
        if (v139 == (_OWORD*)v222) {
          v179 = v170;
          v172 = v159;
          v175 = 0;
          v176 = nullptr;
          v178 = nullptr;
        }
        else {
          if ((v171 & 0x8000000000000000LL) != 0) {
          LABEL_242:
            GameRoutine_135bf80_alt1();
          }
          v172 = v159;
          v173 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)v139 - v222, 16,
              0);
          v174 = (_QWORD*)v222;
          v175 = v173;
          v176 = (_QWORD*)v173;
          do {
            v176[1] = v174[1];
            *v176 = *v174;
            v176[3] = v174[3];
            v177 = v174[2];
            v174 += 4;
            v176[2] = v177;
            v176 += 4;
          } while (v174 != (_QWORD*)v139);
          v178 = (char*)(v173 + v171);
          v179 = v170;
        }
        v180 = v213;
        v181 = (__int64*)v213[4];
        v182 = v213[5];
        if ((unsigned __int64)v181 >= v182) {
          v186 = v213[3];
          v187 = (char*)v181 - v186;
          v188 = 1 - 0x71C71C71C71C71C7LL * (((__int64)v181 - v186) >> 3);
          if (v188 > 0x38E38E38E38E38ELL) {
            GameRoutine_14cfaf0_alt1();
          }
          v189 = 0x8E38E38E38E38E39LL * ((__int64)(v182 - v186) >> 3);
          if (2 * v189 > v188) {
            v188 = 2 * v189;
          }
          if (v189 >= 0x1C71C71C71C71C7LL) {
            v188 = 0x38E38E38E38E38ELL;
          }
          if (v188 > 0x38E38E38E38E38ELL) {
            goto LABEL_239;
          }
          v190 = v179;
          v208 = 9 * v188;
          v191 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                72 * v188, 16, 0);
          v192 = (__int64*)&v187[v191];
          *v192 = v172;
          v192[1] = (__int64)v161;
          v192[8] = (__int64)v178;
          v192[6] = v175;
          v192[7] = (__int64)v176;
          v192[2] = v217;
          v192[3] = v215;
          v192[4] = v190;
          v192[5] = v210;
          v180 = v213;
          v193 = (__int64*)v213[3];
          v194 = (__int64*)v213[4];
          v195 = (char*)v192 + ((char*)v193 - (char*)v194);
          if (v193 == v194) {
            v6 = v230;
            v185 = v211;
          }
          else {
            v6 = v230;
            v185 = v211;
            v218 = v191;
            v196 = (__int64*)v213[3];
            v197 = (__int64*)((char*)v192 + ((char*)v193 - (char*)v194));
            do {
              *v197 = *v196;
              v197[1] = v196[1];
              v197[2] = v196[2];
              v196[1] = 0;
              v196[2] = 0;
              *v196 = 0;
              v197[3] = v196[3];
              v197[4] = v196[4];
              v197[5] = v196[5];
              v196[4] = 0;
              v196[5] = 0;
              v196[3] = 0;
              v197[6] = v196[6];
              v197[7] = v196[7];
              v197[8] = v196[8];
              v196[7] = 0;
              v196[8] = 0;
              v196[6] = 0;
              v196 += 9;
              v197 += 9;
            } while (v196 != v194);
            do {
              SpotMgr_13381e0_alt1(v193);
              v193 += 9;
            } while (v193 != v194);
            v193 = (__int64*)v213[3];
            v191 = v218;
          }
          v184 = v209;
          v183 = v192 + 9;
          v213[3] = (__int64)v195;
          v213[4] = (__int64)v183;
          v213[5] = v191 + 8 * v208;
          if (v193 != nullptr) {
            v198 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v198 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v198, (__int64)v193);
          }
        }
        else {
          *v181 = v172;
          v181[1] = (__int64)v161;
          v183 = v181 + 9;
          v181[6] = v175;
          v181[7] = (__int64)v176;
          v181[8] = (__int64)v178;
          v6 = v230;
          v184 = v209;
          v185 = v211;
          v181[2] = v217;
          v181[3] = v215;
          v181[4] = v179;
          v181[5] = v210;
        }
        v180[4] = (__int64)v183;
        if (v222 != 0) {
          v199 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v199 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v199, v222);
        }
        if (v228 != 0) {
          v200 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v200 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v200, v228);
        }
        if (v97 != 0) {
          if (v98 != (__int64*)v97) {
            v201 = v98;
            do {
              v202 = *((_BYTE*)v201 - 24);
              v201 -= 3;
              if ((v202 & 1) != 0) {
                v203 = *(v98 - 1);
                if (v203 != 0) {
                  v204 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v204 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v204, v203);
                }
              }
              v98 = v201;
            } while (v201 != (__int64*)v97);
          }
          v91 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v91 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v97);
        }
        v88 = v185 + 1;
      } while (v88 != v184);
    }
  }
  return GameRoutine_634d80_alt1(*(_QWORD*)(v206 + 8), v206);
}

__int64 GameHr_15d20e0(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)a2);
  if (*(_BYTE*)(v3 + 73) == 16) {
    v5 = v13;
    v7 = *(_QWORD*)(v3 + 24);
    v14 = v13;
    v15 = *GameData_212cea0;
    v13[0] = GameData_205b2e0;
    v13[1] = &v15;
    v8 = *(_QWORD*)(v7 + 328);
    if ((int)((unsigned __int64)(*(_QWORD*)(v7 + 336) - v8) >> 2) < 1) {
      goto LABEL_13;
    }
    v9 = 0;
    v10 = 0;
    do {
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v8 + v9);
      v8 = *(_QWORD*)(v7 + 328);
      ++v10;
      v9 += 4;
    } while (v10 < (int)((unsigned __int64)(*(_QWORD*)(v7 + 336) - v8) >> 2));
    v5 = v14;
    if (v14 == v13) {
    LABEL_13:
      v11 = 32;
    }
    else {
      if (v14 == nullptr) {
        goto LABEL_15;
      }
      v11 = 40;
    }
    (*(void (**)(_QWORD*, __int64*))(*v5 + v11))(v5, a2);
  LABEL_15:
    if (a3 != 0) {
      return GameRoutine_158d440(a1, &v15, a3, 0);
    }
    else {
      return GameRoutine_158dbc0(a1, &v15, 0, 0);
    }
  }
  if (a3 != 0 && *(unsigned __int8*)(v3 + 72) <= 7u) {
    return GameRoutine_158d440(a1, a2, a3, 0);
  }
  else {
    return GameRoutine_158dbc0(a1, a2, 0, 0);
  }
}

#pragma GCC visibility pop
