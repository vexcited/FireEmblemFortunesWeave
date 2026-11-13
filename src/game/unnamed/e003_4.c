#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _UNKNOWN GameData_1ac690d;
extern __int64 (*GameData_1fd29f0[])();
extern __int64 (*GameData_1fd2a68[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern __int64* GameData_212c330[2];
extern __int64* GameData_212c370;
extern __int64* GameData_212ce30;
extern _UNKNOWN* GameData_212ce38;
extern __int64 GameData_21a6070;
extern __int64 GameData_2265ee0;
__n128 GameRoutine_10c830(_QWORD, long double);
__n128 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d00(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, long double);
struct PseudoSret GameRoutine_1a0a790(_QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1fa0(void);
__int64 GameRoutine_1fd0(_QWORD, _QWORD);
__int64 GameRoutine_2020(_QWORD, _QWORD);
__int64 GameRoutine_21c0(_QWORD, _QWORD);
__int64 GameRoutine_2360(_QWORD, _QWORD);
__int64 GameRoutine_2500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_25eed0(_QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(long double, long double,
                                                  long double, long double);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b4ef0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b50a0(_QWORD);
__int64 GameRoutine_6b71e0(_QWORD);
__int64 GameRoutine_6b7f00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a71f30(_QWORD, _QWORD);
__int64 GameRoutine_c05690(_QWORD, _QWORD);
__int64 GameRoutine_c05cc0(_QWORD, _QWORD);
__int64 GameRoutine_c05fb0(_QWORD, _QWORD);
__int64 GameRoutine_c3d510(_QWORD, _QWORD);
__int64 GameRoutine_c3d730(_QWORD, _QWORD);
__int64 GameRoutine_c43a90(_QWORD);
__int64 GameRoutine_c46bf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c46d70(_QWORD, _QWORD);
__int64 GameRoutine_c47290(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47570(_QWORD);
__int64 GameRoutine_c475a0(_QWORD, _QWORD);
__int64 GameRoutine_c477c0(_QWORD);
__int64 GameRoutine_c47a00(_QWORD, _QWORD);
__int64 GameRoutine_c47c80(_QWORD, _QWORD);
__int64 GameRoutine_c47f40(_QWORD, _QWORD);
__int64 GameRoutine_c48320(_QWORD, _QWORD);
__int64 GameRoutine_c48550(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_c601e0(_QWORD);
__int64 GameRoutine_c606c0(_QWORD, _QWORD);
__int64 GameRoutine_caed40(_QWORD*, __int64);
__attribute__((swiftcall)) void GameRoutine_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD,
                                                  _QWORD, double, float);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* Manager_c475a0(__int64* result, _QWORD*);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 Manager_c43a90(_QWORD*);
unsigned __int128 Manager_c43a90_pair(_QWORD*) __asm__("Manager_c43a90");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float GfxLoader_c48550(_QWORD*, __int64*);
unsigned __int64 strlen(const char*);
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
unsigned __int128 game_6b7f00_pair(unsigned int*, unsigned __int64,
                                   unsigned int*, __int64,
                                   __int64*) __asm__("game_6b7f00");
void GameHr_c47f40(_QWORD*, __int64*);
void GameRoutine_6b4ef0_alt1(__int64*, __int64) __asm__("GameRoutine_6b4ef0");
void GameRoutine_6b50a0_alt1(__int64*) __asm__("GameRoutine_6b50a0");
void GameRoutine_6b71e0_alt1(__int64*) __asm__("GameRoutine_6b71e0");
void GameRoutine_c46d70_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_c46d70");
void GameRoutine_c47a00_alt1(_QWORD*, __int64*) __asm__("GameRoutine_c47a00");
void GfxLoader_c48320(_QWORD*, __int64*);
void Manager_c46bf0(_QWORD*, __int64, unsigned __int64);
void Manager_c47290(__int64);
void Manager_c477c0(__int64);
void Manager_c47c80(_QWORD*, __int64*);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_c47570_alt1() __asm__("GameRoutine_c47570");
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_c42140(__int64 a1, __int64 a2, char a3);

__int64 GameHr_c42140(__int64 a1, __int64 a2, char a3)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  const char* v10;
  unsigned __int64 v11;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned int* v27;
  unsigned int* v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned int* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 i;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned int* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned int* v77;
  unsigned int* v78;
  unsigned __int64 v79;
  __int64 v80;
  char v81;
  unsigned __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  unsigned int* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  __int64 v103;
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
  unsigned __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  char v126;
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
  __int64 v137;
  __int64 v138;
  _QWORD* v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  _QWORD* v143;
  unsigned __int64 v144;
  __int64 v145;
  _QWORD* v146;
  unsigned __int64 v147;
  unsigned int v148;
  unsigned __int64 v149;
  char* v150;
  __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  unsigned int v154;
  bool v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  char* v161;
  _QWORD* v162;
  __int64 v163;
  bool v164;
  unsigned __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  _QWORD* v168;
  char* v169;
  __int64 v170;
  __int64* v171;
  unsigned __int64 v172;
  __int64 v173;
  const char* v174;
  unsigned __int64 v175;
  __int64* v176;
  __int64 v177;
  __int64 v178;
  char* v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  char* v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  unsigned int v191;
  bool v192;
  __int64 v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  char* v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  unsigned __int64 v200;
  unsigned int v201;
  bool v202;
  __int64 v203;
  unsigned __int64 v204;
  unsigned __int64 v205;
  char* v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  char v212;
  unsigned int* v213;
  __int64 v214;
  _QWORD* v215;
  __int64 v216;
  __int64 v217;
  __int64* v218;
  __int64 v219;
  __int64 v220[2];
  struct {
    __int64 v221;
    __int64 v222;
    __int64 v223;
    char gap160_[8];
    __int64 v224;
    __int64 v225;
  } v221_;
  struct {
    _QWORD v226[7];
    __int16 v227;
    char gap242_[2];
    int v228;
    __int64 v229;
    __int64 v230;
  } v226_;
  struct {
    __int64 v231[3];
    __int64 v232;
    __int64* v233;
  } v231_;
  struct {
    __int64 v234;
    __int64 v235;
  } v234_;
  struct {
    __int64 v236;
    __int64 v237;
  } v236_;
  struct {
    __int64 v238;
    __int64 v239;
  } v238_;
  _QWORD v240[3];
  struct {
    __int64 v241;
    __int64 v242;
    __int64 v243;
  } v241_;
  struct {
    _QWORD v244[2];
    const char* v245;
  } v244_;
  struct {
    _QWORD v246[2];
    char* v247;
  } v246_;
  struct {
    __int64 v248;
    unsigned __int64 v249;
    __int64 v250;
  } v248_;

  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v71 = COERCE_AS(__typeof__(v71),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v79 = COERCE_AS(__typeof__(v79),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a2 != 0) {
    v5 = *(_QWORD*)(a2 + 592);
    if (v5 != 0) {
      v226_.v227 = 257;
      v6 = *(_QWORD*)(a2 + 576);
      v226_.v226[5] = 0;
      v226_.v226[6] = 0;
      v226_.v228 = 0;
      v226_.v229 = v5;
      v226_.v230 = v6;
      v226_.v226[4] = -1;
      v226_.v226[0] = GameData_212ce30 + 2;
      __builtin_memset(&v226_.v226[1], 0, 24);
      GameRoutine_6b4ef0_alt1(v220, (__int64)v226_.v226),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*(_BYTE*)(a1 + 192) == 1) {
        v7 = *(unsigned __int8*)(a1 + 168);
        v8 = (v7 & 1) == 0;
        v9 = v7 >> 1;
        if (v8) {
          v10 = (const char*)(a1 + 169);
        }
        else {
          v10 = *(const char**)(a1 + 184);
        }
        if (v8) {
          v11 = v9;
        }
        else {
          v11 = *(_QWORD*)(a1 + 176);
        }
      }
      else {
        v10 = "Default";
        v11 = 7;
      }
      v13 = (__int64*)fw_memory_g_heap_manager_ptr;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v71 = COERCE_AS(__typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v79 = COERCE_AS(__typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_BYTE*)(v14 + 100) = 0;
      v15 = v14 + 100;
      *(_QWORD*)v14 = 0;
      *(_QWORD*)(v14 + 8) = 0;
      *(_QWORD*)(v14 + 16) = 0;
      *(_QWORD*)(v14 + 24) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_QWORD*)(v14 + 40) = 0;
      *(_QWORD*)(v14 + 48) = 0;
      *(_QWORD*)(v14 + 56) = 0;
      *(_QWORD*)(v14 + 64) = 0;
      *(_QWORD*)(v14 + 72) = 0;
      *(_QWORD*)(v14 + 80) = 0;
      *(_QWORD*)(v14 + 88) = 0;
      *(_BYTE*)(v14 + 104) = 0;
      *(_BYTE*)(v14 + 96) = 1;
      if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_363:
        String_60a1d0(),
            v29 = COERCE_AS(__typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v71 = COERCE_AS(__typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v79 = COERCE_AS(__typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v16 = a3 & 1;
      v17 = v14;
      v216 = v14 + 96;
      v218 = (__int64*)v14;
      v211 = a1;
      v212 = a3;
      if (v11 >= 0x17) {
        if ((v11 | 7) == 0x17) {
          v19 = 26;
        }
        else {
          v19 = (v11 | 7) + 1;
        }
        v18 = fw_memory_HeapManager_Allocate(*v13, v19, 16, 0),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v71 = COERCE_AS(__typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v79 = COERCE_AS(__typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v218[16] = v18;
        v20 = v19 | 1;
        v17 = (__int64)v218;
        v218[14] = v20;
        v218[15] = v11;
      }
      else {
        v18 = v14 + 113;
        *(_BYTE*)(v14 + 112) = 2 * v11;
        if (v11 == 0) {
        LABEL_22:
          v22 = v221_.v224;
          v21 = v221_.v225;
          v23 = v221_.v222;
          *(_BYTE*)(v18 + v11) = 0;
          *(_BYTE*)(v17 + 136) = v16;
          v24 = 0x34F72C234F72C235LL;
          v25 = *(_QWORD*)(*(_QWORD*)(v23 +
                                      8 * ((unsigned __int64)(v21 + v22 - 1) >>
                                           9)) +
                           8 * ((v21 + v22 - 1) & 0x1FF));
          if (v25 == 0) {
            goto LABEL_218;
          }
          v214 = v15;
          v231_.v231[0] = 0x6553796B535F6D1ALL;
          v231_.v231[1] = 0x736E6F697463LL;
          if ((*(_BYTE*)v25 & 0x7F) == 8 &&
              (v26 = strlen((const char*)v231_.v231 + 1),
               v27 = *(unsigned int**)(v25 + 1),
               v248_.v248 = (__int64)v231_.v231 + 1, v248_.v249 = v26,
               v28 = game_6b7f00(v27, 0, v27, v27[1], &v248_.v248),
               v29 != v27[1])) {
            v31 = *v28;
            if (v29 >= v31) {
              v33 = v29 - v31;
              v34 = __clz(v33 + 16);
              v32 = *(_QWORD*)(*((_QWORD*)v28 + 2) + 8 * (27 - v34) + 8) +
                    32LL * (unsigned int)(v33 - *((_DWORD*)GameData_212ce38 +
                                                  28 - v34));
            }
            else {
              v32 = *((_QWORD*)v28 + 1) + 32 * v29;
            }
            v30 = v32 + 16;
            if ((v231_.v231[0] & 1) == 0) {
            LABEL_35:
              if (v30 != 0 && (*(_BYTE*)v30 & 0x7F) == 7) {
                v36 = *(unsigned int**)(v30 + 1);
                v37 = *v218;
                v38 = v218[1];
                v39 = v36[1];
                v40 = v38 - *v218;
                v41 = 0x34F72C234F72C235LL * (v40 >> 3);
                v42 = v39 - v41;
                if (v39 <= v41) {
                  if (v39 < v41) {
                    v51 = v37 + 232LL * (unsigned int)v39;
                    while (v38 != v51) {
                      v38 -= 232;
                      Manager_c47290(v38),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v218[1] = v51;
                  }
                }
                else {
                  v43 = v218[2];
                  if (0x34F72C234F72C235LL * ((v43 - v38) >> 3) >= v42) {
                    memset(v218[1], 0,
                           232 * ((232 * (unsigned __int64)(unsigned int)v42 -
                                   232) /
                                  0xE8) +
                               232),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v218[1] =
                        v38 +
                        232 *
                            ((232 * (unsigned __int64)(unsigned int)v42 - 232) /
                             0xE8) +
                        232;
                  }
                  else {
                    v231_.v233 = v218 + 2;
                    v44 = 0x34F72C234F72C235LL * ((v43 - v37) >> 3);
                    if (2 * v44 > v39) {
                      v39 = 2 * v44;
                    }
                    if (v44 >= 0x8D3DCB08D3DCB0LL) {
                      v39 = 0x11A7B9611A7B961LL;
                    }
                    if (v39 > 0x11A7B9611A7B961LL) {
                      GameRoutine_60a210_alt1(),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v45 = 232 * v39;
                    v46 =
                        fw_memory_HeapManager_Allocate(*v13, 232 * v39, 16, 0),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v47 = v46 + v40;
                    v231_.v232 = v46 + v45;
                    v231_.v231[0] = v46;
                    v231_.v231[1] = v46 + v40;
                    memset(v46 + v40, 0,
                           232 * ((232 * (unsigned __int64)(unsigned int)v42 -
                                   232) /
                                  0xE8) +
                               232),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v231_.v231[2] =
                        v47 +
                        232 *
                            ((232 * (unsigned __int64)(unsigned int)v42 - 232) /
                             0xE8) +
                        232;
                    Manager_c475a0(v218, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v48 = v231_.v231[1];
                    for (i = v231_.v231[2]; i != v48; Manager_c47290(i)) {
                      i -= 232;
                    }
                    if (v231_.v231[0] != 0) {
                      v50 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v50 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v50, v231_.v231[0]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                  }
                }
                v219 = v36[1];
                if ((_DWORD)v219 != 0) {
                  v52 = 0;
                  v213 = v36;
                  do {
                    v53 = *v36;
                    if (v52 >= v53) {
                      v55 = v52 - v53;
                      v56 = __clz(v55 + 16);
                      v54 =
                          *(_QWORD*)(*((_QWORD*)v36 + 2) + 8 * (27 - v56) + 8) +
                          16LL *
                              (unsigned int)(v55 - *((_DWORD*)GameData_212ce38 +
                                                     28 - v56));
                    }
                    else {
                      v54 = *((_QWORD*)v36 + 1) + 16 * v52;
                    }
                    v57 = v221_.v222;
                    v58 = ((v221_.v223 - v221_.v222) << 6) - 1;
                    if (v221_.v223 == v221_.v222) {
                      v58 = 0;
                    }
                    v59 = v221_.v225 + v221_.v224;
                    if (v58 == v221_.v225 + v221_.v224) {
                      GameRoutine_6b71e0_alt1(&v221_.v221),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v57 = v221_.v222;
                      v59 = v221_.v225 + v221_.v224;
                    }
                    *(_QWORD*)(*(_QWORD*)(v57 + 8 * (v59 >> 9)) +
                               8 * (v59 & 0x1FF)) = v54;
                    v60 = v221_.v225++;
                    if (*(_QWORD*)(*(_QWORD*)(v221_.v222 +
                                              8 * ((unsigned __int64)(v221_
                                                                          .v224 +
                                                                      v60) >>
                                                   9)) +
                                   8 * ((v221_.v224 + v60) & 0x1FF)) == 0) {
                      goto LABEL_198;
                    }
                    LOBYTE(v231_.v231[0]) = 18;
                    v61 = *v218;
                    strcpy((char*)v231_.v231 + 1, "beginTime");
                    v62 = (__int64*)(v61 + 232 * v52);
                    v231_.v232 = (__int64)v62;
                    GameRoutine_c47a00_alt1(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v63 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v63 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v63, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v231_.v232 = (__int64)v62 + 4;
                    v231_.v231[0] = 0x656D6954646E650ELL;
                    v231_.v231[1] = 0;
                    GameRoutine_c47a00_alt1(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v64 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v64 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v64, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    LOBYTE(v231_.v231[0]) = 16;
                    v231_.v232 = (__int64)(v62 + 1);
                    strcpy((char*)v231_.v231 + 1, "customEv");
                    GfxLoader_c48550(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v65 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v65 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v65, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    strcpy((char*)v231_.v231, "\"unitLuminanceCoef");
                    BYTE3(v231_.v231[2]) = 0;
                    HIDWORD(v231_.v231[2]) = 0;
                    v231_.v232 = (__int64)(v62 + 2);
                    GfxLoader_c48550(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v66 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v66 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v66, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v231_.v232 = (__int64)(v62 + 3);
                    v231_.v231[0] = 0x6557646E656C621CLL;
                    strcpy((char*)&v231_.v231[1], "ightPow");
                    GfxLoader_c48550(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v67 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v67 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v67, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v68 = *(
                        _QWORD*)(*(_QWORD*)(v221_.v222 +
                                            8 * ((unsigned __int64)(v221_.v225 +
                                                                    v221_.v224 -
                                                                    1) >>
                                                 9)) +
                                 8 * ((v221_.v225 + v221_.v224 - 1) & 0x1FF));
                    if (v68 == 0 ||
                        (v231_.v231[0] = 0x654B646E656C6212LL,
                         v231_.v231[1] = 29561, (*(_BYTE*)v68 & 0x7F) != 8)) {
                    LABEL_105:
                      v80 = 0;
                      v81 = 1;
                      v62[5] = v62[4];
                      goto LABEL_181;
                    }
                    v69 = strlen((const char*)v231_.v231 + 1),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v70 = *(unsigned int**)(v68 + 1);
                    v248_.v248 = (__int64)v231_.v231 + 1;
                    v248_.v249 = v69;
                    ({
                      unsigned __int128 r_ =
                          game_6b7f00_pair(v70, 0, v70, v70[1], &v248_.v248);
                      v29 = COERCE_AS(__typeof__(v29),
                                      (unsigned long long)(r_ >> 64));
                      v71 = COERCE_AS(__typeof__(v71),
                                      (unsigned long long)(r_ >> 64));
                      v79 = COERCE_AS(__typeof__(v79),
                                      (unsigned long long)(r_ >> 64));
                      (unsigned int*)(unsigned long long)r_;
                    });
                    v72 = v70[1];
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v73 = v71;
                      v74 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v74 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v74, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      if (v73 == v72) {
                        goto LABEL_105;
                      }
                    }
                    else if (v71 == v72) {
                      goto LABEL_105;
                    }
                    v75 = *(
                        _QWORD*)(*(_QWORD*)(v221_.v222 +
                                            8 * ((unsigned __int64)(v221_.v225 +
                                                                    v221_.v224 -
                                                                    1) >>
                                                 9)) +
                                 8 * ((v221_.v225 + v221_.v224 - 1) & 0x1FF));
                    if (v75 == 0) {
                      goto LABEL_154;
                    }
                    v231_.v231[0] = 0x654B646E656C6212LL;
                    v231_.v231[1] = 29561;
                    if ((*(_BYTE*)v75 & 0x7F) == 8 &&
                        (v76 = strlen((const char*)v231_.v231 + 1),
                         v77 = *(unsigned int**)(v75 + 1),
                         v248_.v248 = (__int64)v231_.v231 + 1, v248_.v249 = v76,
                         v78 = game_6b7f00(v77, 0, v77, v77[1], &v248_.v248),
                         v79 != v77[1])) {
                      v82 = *v78;
                      if (v79 >= v82) {
                        v84 = v79 - v82;
                        v85 = __clz(v84 + 16);
                        v83 =
                            *(_QWORD*)(*((_QWORD*)v78 + 2) + 8 * (27 - v85) +
                                       8) +
                            32LL * (unsigned int)(v84 -
                                                  *((_DWORD*)GameData_212ce38 +
                                                    28 - v85));
                      }
                      else {
                        v83 = *((_QWORD*)v78 + 1) + 32 * v79;
                      }
                      v75 = v83 + 16;
                      if ((v231_.v231[0] & 1) == 0) {
                        goto LABEL_114;
                      }
                    }
                    else {
                      v75 = 0;
                      if ((v231_.v231[0] & 1) == 0) {
                        goto LABEL_114;
                      }
                    }
                    if (v231_.v231[2] != 0) {
                      v86 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v86 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v86, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                  LABEL_114:
                    if (v75 == 0) {
                      goto LABEL_154;
                    }
                    if ((*(_BYTE*)v75 & 0x7F) != 7 ||
                        (v87 = *(unsigned int**)(v75 + 1),
                         (_DWORD)(v88 = v87[1]) == 0)) {
                      v75 = 0;
                    LABEL_154:
                      v80 = 0;
                      goto LABEL_155;
                    }
                    v89 = 16 * v88;
                    v90 = fw_memory_HeapManager_Allocate(*v13, 16 * v88, 16, 0),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    memset(v90, 0, v89),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v91 = v87[1];
                    if ((_DWORD)v91 != 0) {
                      v92 = 16 * v91;
                      v93 = 0;
                      v94 = 0;
                      do {
                        v95 = *v87;
                        if (v94 >= v95) {
                          v97 = v94 - v95;
                          v98 = __clz(v97 + 16);
                          v96 = *(_QWORD*)(*((_QWORD*)v87 + 2) +
                                           8 * (27 - v98) + 8) +
                                16LL *
                                    (unsigned int)(v97 -
                                                   *((_DWORD*)GameData_212ce38 +
                                                     28 - v98));
                        }
                        else {
                          v96 = *((_QWORD*)v87 + 1) + v93;
                        }
                        v99 = v221_.v222;
                        v100 = ((v221_.v223 - v221_.v222) << 6) - 1;
                        if (v221_.v223 == v221_.v222) {
                          v100 = 0;
                        }
                        v101 = v221_.v225 + v221_.v224;
                        if (v100 == v221_.v225 + v221_.v224) {
                          GameRoutine_6b71e0_alt1(&v221_.v221),
                              v29 =
                                  COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v71 =
                                  COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v79 =
                                  COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v99 = v221_.v222;
                          v101 = v221_.v225 + v221_.v224;
                        }
                        *(_QWORD*)(*(_QWORD*)(v99 + 8 * (v101 >> 9)) +
                                   8 * (v101 & 0x1FF)) = v96;
                        v102 = v221_.v224;
                        v103 = v221_.v222;
                        v104 = v221_.v225 + 1;
                        v105 = v221_.v224 + v221_.v225++;
                        if (*(_QWORD*)(*(_QWORD*)(v221_.v222 +
                                                  8 * (v105 >> 9)) +
                                       8 * (v105 & 0x1FF)) != 0) {
                          strcpy((char*)v231_.v231, "\nalpha");
                          v231_.v232 = v90 + v93;
                          GameRoutine_c47a00_alt1(v220, v231_.v231),
                              v29 =
                                  COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v71 =
                                  COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v79 =
                                  COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                            v106 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v106 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v106,
                                v231_.v231[2]),
                                v29 = COERCE_AS(
                                    __typeof__(v29),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v71 = COERCE_AS(
                                    __typeof__(v71),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v79 = COERCE_AS(
                                    __typeof__(v79),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          v231_.v232 = v90 + v93 + 4;
                          v231_.v231[0] = 0x7468676965770CLL;
                          GameRoutine_c47a00_alt1(v220, v231_.v231),
                              v29 =
                                  COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v71 =
                                  COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v79 =
                                  COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                            v107 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v107 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v107,
                                v231_.v231[2]),
                                v29 = COERCE_AS(
                                    __typeof__(v29),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v71 = COERCE_AS(
                                    __typeof__(v71),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v79 = COERCE_AS(
                                    __typeof__(v79),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          v231_.v232 = v90 + v93 + 8;
                          v231_.v231[0] = 2003791878;
                          GfxLoader_c48550(v220, v231_.v231),
                              v29 =
                                  COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v71 =
                                  COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v79 =
                                  COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                            v108 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v108 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v108,
                                v231_.v231[2]),
                                v29 = COERCE_AS(
                                    __typeof__(v29),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v71 = COERCE_AS(
                                    __typeof__(v71),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v79 = COERCE_AS(
                                    __typeof__(v79),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                          }
                          v102 = v221_.v224;
                          v104 = v221_.v225;
                          v103 = v221_.v222;
                        }
                        v109 = v221_.v223;
                        if (v221_.v223 == v103) {
                          v110 = 0;
                        }
                        else {
                          v110 = ((v221_.v223 - v103) << 6) - 1;
                        }
                        v221_.v225 = v104 - 1;
                        if ((unsigned __int64)(v110 - (v102 + v104) + 1) >=
                            0x400) {
                          v111 = *(_QWORD*)(v221_.v223 - 8);
                          if (v111 != 0) {
                            v112 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v112 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v112,
                                v111),
                                v29 = COERCE_AS(
                                    __typeof__(v29),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v71 = COERCE_AS(
                                    __typeof__(v71),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r")),
                                v79 = COERCE_AS(
                                    __typeof__(v79),
                                    PSEUDO_REGISTER(unsigned long long, "x1",
                                                    "=r"));
                            v109 = v221_.v223;
                          }
                          v221_.v223 = v109 - 8;
                        }
                        ++v94;
                        v93 += 16;
                      } while (v92 != v93);
                    }
                    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
                    v80 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, v89, 16, 0),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v75 = v80 + v89;
                    memcpy(v80, v90, v89),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v133 = 128;
                    if (*(_QWORD*)(*v13 + 200) == 0) {
                      v133 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v13 + v133, v90),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  LABEL_155:
                    v113 = v62[4];
                    v114 = v75 - v80;
                    v115 = v62[6];
                    if (v75 - v80 <= (unsigned __int64)(v115 - v113)) {
                      v121 = v62[5];
                      v122 = v121 - v113;
                      if (v114 > (unsigned __int64)(v121 - v113)) {
                        if (v121 != v113) {
                          memmove(v62[4], v80, v121 - v113),
                              v29 =
                                  COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v71 =
                                  COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v79 =
                                  COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                          v121 = v62[5];
                        }
                        v36 = v213;
                        v123 = v75 - (v80 + v122);
                        if (v75 != v80 + v122) {
                          memmove(v121, v80 + v122, v75 - (v80 + v122)),
                              v29 =
                                  COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v71 =
                                  COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                              v79 =
                                  COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                        }
                        v81 = 0;
                        v62[5] = v121 + v123;
                        v13 = (__int64*)fw_memory_g_heap_manager_ptr;
                        goto LABEL_180;
                      }
                      if (v75 != v80) {
                        memmove(v62[4], v80, v75 - v80),
                            v29 = COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v71 = COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                      }
                      v81 = 0;
                      v62[5] = v113 + v114;
                      v13 = (__int64*)fw_memory_g_heap_manager_ptr;
                    }
                    else {
                      if (v113 != 0) {
                        v62[5] = v113;
                        v116 = 128;
                        if (*(_QWORD*)(*v13 + 200) == 0) {
                          v116 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v13 + v116, v113),
                            v29 = COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v71 = COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                        v115 = 0;
                        v62[5] = 0;
                        v62[6] = 0;
                        v62[4] = 0;
                      }
                      v117 = v114 >> 4;
                      if ((unsigned __int64)(v114 >> 4) >> 60 != 0) {
                        goto LABEL_364;
                      }
                      if (v115 >> 3 > v117) {
                        v117 = v115 >> 3;
                      }
                      v118 = (unsigned __int64)v115 >= 0x7FFFFFFFFFFFFFF0LL
                                 ? 0xFFFFFFFFFFFFFFFLL
                                 : v117;
                      if (v118 >> 60 != 0) {
                      LABEL_364:
                        GameRoutine_c47570_alt1(),
                            v29 = COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v71 = COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                      }
                      v119 = fw_memory_HeapManager_Allocate(*v13, 16 * v118, 16,
                                                            0),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                      v120 = v119;
                      v62[4] = v119;
                      v62[5] = v119;
                      v62[6] = v119 + 16 * v118;
                      if (v75 != v80) {
                        memcpy(v119, v80, v75 - v80),
                            v29 = COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v71 = COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                      }
                      v81 = 0;
                      v62[5] = v120 + v114;
                    }
                    v36 = v213;
                  LABEL_180:
                    v24 = 0x34F72C234F72C235LL;
                  LABEL_181:
                    v231_.v232 = (__int64)(v62 + 7);
                    v231_.v231[0] = 0x54706D6152736912LL;
                    v231_.v231[1] = 30821;
                    Manager_c47c80(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v124 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v124 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v124, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    strcpy((char*)v231_.v231, "\"enableConvertUnit");
                    BYTE3(v231_.v231[2]) = 0;
                    HIDWORD(v231_.v231[2]) = 0;
                    v231_.v232 = (__int64)v62 + 58;
                    Manager_c47c80(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v125 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v125 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v125, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    v231_.v232 = (__int64)(v62 + 8);
                    v231_.v231[0] = 0x656D614E7865740ELL;
                    v231_.v231[1] = 0;
                    GameHr_c47f40(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v231_.v232 = (__int64)(v62 + 12);
                    v231_.v231[0] = 0x4E78655465696D14LL;
                    v231_.v231[1] = 6647137;
                    GameHr_c47f40(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v231_.v232 = (__int64)(v62 + 16);
                    v231_.v231[0] = 0x4E786554676F6614LL;
                    v231_.v231[1] = 6647137;
                    GameHr_c47f40(v220, v231_.v231),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    if (v80 != 0) {
                      v126 = v81;
                    }
                    else {
                      v126 = 1;
                    }
                    if ((v126 & 1) == 0) {
                      v127 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v127 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v127, v80),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                  LABEL_198:
                    v128 = v221_.v223;
                    v129 = v221_.v225;
                    v130 = ((v221_.v223 - v221_.v222) << 6) - 1;
                    if (v221_.v223 == v221_.v222) {
                      v130 = 0;
                    }
                    --v221_.v225;
                    if ((unsigned __int64)(v130 - (v129 + v221_.v224) + 1) >=
                        0x400) {
                      v131 = *(_QWORD*)(v221_.v223 - 8);
                      if (v131 != 0) {
                        v132 = 128;
                        if (*(_QWORD*)(*v13 + 200) == 0) {
                          v132 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v13 + v132, v131),
                            v29 = COERCE_AS(__typeof__(v29),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v71 = COERCE_AS(__typeof__(v71),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r")),
                            v79 = COERCE_AS(__typeof__(v79),
                                            PSEUDO_REGISTER(unsigned long long,
                                                            "x1", "=r"));
                        v128 = v221_.v223;
                      }
                      v221_.v223 = v128 - 8;
                    }
                    ++v52;
                  } while (v52 != v219);
                }
              }
              v231_.v231[0] = 0x65646E65525F6D1ELL;
              strcpy((char*)&v231_.v231[1], "rSunMoon");
              BYTE1(v231_.v231[2]) = 0;
              WORD1(v231_.v231[2]) = 0;
              HIDWORD(v231_.v231[2]) = 0;
              v231_.v232 = v216;
              GfxLoader_c48320(v220, v231_.v231),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                v134 = 128;
                if (*(_QWORD*)(*v13 + 200) == 0) {
                  v134 = 56;
                }
                nn_mem_StandardAllocator_Free(*v13 + v134, v231_.v231[2]),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v231_.v231[0] = 0x656E6563535F6D1ELL;
              strcpy((char*)&v231_.v231[1], "ManualEv");
              BYTE1(v231_.v231[2]) = 0;
              WORD1(v231_.v231[2]) = 0;
              HIDWORD(v231_.v231[2]) = 0;
              v231_.v232 = v214;
              GfxLoader_c48550(v220, v231_.v231),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v17 = (__int64)v218;
              if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                v135 = 128;
                if (*(_QWORD*)(*v13 + 200) == 0) {
                  v135 = 56;
                }
                nn_mem_StandardAllocator_Free(*v13 + v135, v231_.v231[2]),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            LABEL_218:
              v136 = *(_QWORD*)v17;
              v137 = *(_QWORD*)(v17 + 8);
              v139 = (_QWORD*)(v17 + 24);
              v138 = *(_QWORD*)(v17 + 24);
              v140 = (*(_QWORD*)(v17 + 32) - v138) >> 3;
              v141 = 0x34F72C234F72C235LL * ((v137 - *(_QWORD*)v17) >> 3);
              if (v141 <= v140) {
                if (v141 < v140) {
                  *(_QWORD*)(v17 + 32) =
                      v138 -
                      0x58469EE58469EE58LL * ((v137 - *(_QWORD*)v17) >> 3);
                }
              }
              else {
                GameRoutine_c46d70_alt1((__int64*)(v17 + 24), v141 - v140),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v136 = *(_QWORD*)v17;
                v137 = *(_QWORD*)(v17 + 8);
                v141 = 0x34F72C234F72C235LL * ((v137 - *(_QWORD*)v17) >> 3);
              }
              v142 = *(_QWORD*)(v17 + 48);
              v143 = (_QWORD*)(v17 + 48);
              v144 = (*(_QWORD*)(v17 + 56) - v142) >> 3;
              if (v141 <= v144) {
                if (v141 < v144) {
                  *(_QWORD*)(v17 + 56) = v142 + 8 * v141;
                }
              }
              else {
                GameRoutine_c46d70_alt1((__int64*)(v17 + 48), v141 - v144),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v136 = *(_QWORD*)v17;
                v137 = *(_QWORD*)(v17 + 8);
                v141 = 0x34F72C234F72C235LL * ((v137 - *(_QWORD*)v17) >> 3);
              }
              v145 = *(_QWORD*)(v17 + 72);
              v146 = (_QWORD*)(v17 + 72);
              v147 = (*(_QWORD*)(v17 + 80) - v145) >> 3;
              if (v141 <= v147) {
                if (v141 < v147) {
                  *(_QWORD*)(v17 + 80) = v145 + 8 * v141;
                }
              }
              else {
                GameRoutine_c46d70_alt1((__int64*)(v17 + 72), v141 - v147),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v136 = *(_QWORD*)v17;
                v137 = *(_QWORD*)(v17 + 8);
              }
              if (v137 != v136) {
                v148 = 1;
                v149 = 0;
                v215 = (_QWORD*)(v17 + 24);
                v217 = v17 + 113;
                v150 = (char*)&v241_.v241 + 1;
                while (1) {
                  v151 = v136 + 232 * v149;
                  v241_.v242 = 0;
                  v241_.v243 = 0;
                  v241_.v241 = 0;
                  if (*(_BYTE*)(v151 + 88) != 1) {
                    break;
                  }
                  v154 = *(unsigned __int8*)(v151 + 64);
                  v152 = v151 + 64;
                  v153 = v154;
                  v155 = (v154 & 1) == 0;
                  if ((v154 & 1) != 0) {
                    v156 = *(_QWORD*)(v152 + 16);
                  }
                  else {
                    v156 = v152 + 1;
                  }
                  if (v155) {
                    v157 = v153 >> 1;
                  }
                  else {
                    v157 = *(_QWORD*)(v152 + 8);
                  }
                  Manager_c46bf0(v231_.v231, v156, v157),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if ((v241_.v241 & 1) != 0 && v241_.v243 != 0) {
                    v158 = 128;
                    if (*(_QWORD*)(*v13 + 200) == 0) {
                      v158 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v13 + v158, v241_.v243),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v241_.v241 = v231_.v231[0];
                  v241_.v242 = v231_.v231[1];
                  v159 = v231_.v231[2];
                LABEL_299:
                  v241_.v243 = v159;
                  v238_.v238 = 0;
                  v238_.v239 = 0;
                  if ((v241_.v241 & 1) != 0) {
                    v186 = v241_.v242;
                  }
                  else {
                    v186 = (unsigned __int64)(unsigned __int8)v241_.v241 >> 1;
                  }
                  if ((v241_.v241 & 1) != 0) {
                    v187 = (char*)v159;
                  }
                  else {
                    v187 = v150;
                  }
                  *(_QWORD*)(*v139 + 8 * v149) = (*(
                      __int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
                      **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 40LL))(
                      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v187,
                      v186, &v238_.v238),
                                         v29 = COERCE_AS(
                                             __typeof__(v29),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                                         v71 = COERCE_AS(
                                             __typeof__(v71),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r")),
                                         v79 = COERCE_AS(
                                             __typeof__(v79),
                                             PSEUDO_REGISTER(unsigned long long,
                                                             "x1", "=r"));
                  if (v238_.v239 != 0) {
                    std___1___shared_weak_count___release_weak(v238_.v239),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v188 = *(_QWORD*)v17 + 232 * v149;
                  if (*(_BYTE*)(v188 + 120) == 1) {
                    v191 = *(unsigned __int8*)(v188 + 96);
                    v189 = v188 + 96;
                    v190 = v191;
                    v192 = (v191 & 1) == 0;
                    if ((v191 & 1) != 0) {
                      v193 = *(_QWORD*)(v189 + 16);
                    }
                    else {
                      v193 = v189 + 1;
                    }
                    if (v192) {
                      v194 = v190 >> 1;
                    }
                    else {
                      v194 = *(_QWORD*)(v189 + 8);
                    }
                    Manager_c46bf0(v231_.v231, v193, v194),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v236_.v236 = 0;
                    v236_.v237 = 0;
                    if ((v231_.v231[0] & 1) != 0) {
                      v195 = v231_.v231[1];
                    }
                    else {
                      v195 = (unsigned __int64)LOBYTE(v231_.v231[0]) >> 1;
                    }
                    if ((v231_.v231[0] & 1) != 0) {
                      v196 = (char*)v231_.v231[2];
                    }
                    else {
                      v196 = (char*)v231_.v231 + 1;
                    }
                    *(_QWORD*)(*v143 +
                               8 * v149) = (*(__int64 (**)(_QWORD, char*,
                                                           unsigned __int64,
                                                           __int64*))(
                        **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) +
                        40LL))(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432),
                               v196, v195, &v236_.v236),
                                   v29 = COERCE_AS(
                                       __typeof__(v29),
                                       PSEUDO_REGISTER(unsigned long long, "x1",
                                                       "=r")),
                                   v71 = COERCE_AS(
                                       __typeof__(v71),
                                       PSEUDO_REGISTER(unsigned long long, "x1",
                                                       "=r")),
                                   v79 = COERCE_AS(
                                       __typeof__(v79),
                                       PSEUDO_REGISTER(unsigned long long, "x1",
                                                       "=r"));
                    if (v236_.v237 != 0) {
                      std___1___shared_weak_count___release_weak(v236_.v237),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v197 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v197 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v197, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                  }
                  else {
                    *(_QWORD*)(*v143 + 8 * v149) = 0;
                  }
                  v198 = *(_QWORD*)v17 + 232 * v149;
                  if (*(_BYTE*)(v198 + 152) == 1) {
                    v201 = *(unsigned __int8*)(v198 + 128);
                    v199 = v198 + 128;
                    v200 = v201;
                    v202 = (v201 & 1) == 0;
                    if ((v201 & 1) != 0) {
                      v203 = *(_QWORD*)(v199 + 16);
                    }
                    else {
                      v203 = v199 + 1;
                    }
                    if (v202) {
                      v204 = v200 >> 1;
                    }
                    else {
                      v204 = *(_QWORD*)(v199 + 8);
                    }
                    Manager_c46bf0(v231_.v231, v203, v204),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    v234_.v234 = 0;
                    v234_.v235 = 0;
                    if ((v231_.v231[0] & 1) != 0) {
                      v205 = v231_.v231[1];
                    }
                    else {
                      v205 = (unsigned __int64)LOBYTE(v231_.v231[0]) >> 1;
                    }
                    if ((v231_.v231[0] & 1) != 0) {
                      v206 = (char*)v231_.v231[2];
                    }
                    else {
                      v206 = (char*)v231_.v231 + 1;
                    }
                    *(_QWORD*)(*v146 +
                               8 * v149) = (*(__int64 (**)(_QWORD, char*,
                                                           unsigned __int64,
                                                           __int64*))(
                        **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) +
                        40LL))(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432),
                               v206, v205, &v234_.v234),
                                   v29 = COERCE_AS(
                                       __typeof__(v29),
                                       PSEUDO_REGISTER(unsigned long long, "x1",
                                                       "=r")),
                                   v71 = COERCE_AS(
                                       __typeof__(v71),
                                       PSEUDO_REGISTER(unsigned long long, "x1",
                                                       "=r")),
                                   v79 = COERCE_AS(
                                       __typeof__(v79),
                                       PSEUDO_REGISTER(unsigned long long, "x1",
                                                       "=r"));
                    if (v234_.v235 != 0) {
                      std___1___shared_weak_count___release_weak(v234_.v235),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                    if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                      v207 = 128;
                      if (*(_QWORD*)(*v13 + 200) == 0) {
                        v207 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v13 + v207, v231_.v231[2]),
                          v29 = COERCE_AS(
                              __typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v71 = COERCE_AS(
                              __typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                          v79 = COERCE_AS(
                              __typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    }
                  }
                  else {
                    *(_QWORD*)(*v146 + 8 * v149) = 0;
                  }
                  if ((v241_.v241 & 1) != 0 && v241_.v243 != 0) {
                    v208 = 128;
                    if (*(_QWORD*)(*v13 + 200) == 0) {
                      v208 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*v13 + v208, v241_.v243),
                        v29 = COERCE_AS(
                            __typeof__(v29),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v71 = COERCE_AS(
                            __typeof__(v71),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v79 = COERCE_AS(
                            __typeof__(v79),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v136 = *(_QWORD*)v17;
                  v149 = v148++;
                  if (((__int64)(*(_QWORD*)(v17 + 8) - *(_QWORD*)v17) >> 3) *
                          v24 <=
                      v149) {
                    goto LABEL_354;
                  }
                }
                v160 = *(unsigned __int8*)(v17 + 112);
                v161 = v150;
                v162 = v146;
                v163 = v24;
                v164 = (v160 & 1) == 0;
                v165 = v160 >> 1;
                if (v164) {
                  v166 = v217;
                }
                else {
                  v166 = *(_QWORD*)(v17 + 128);
                }
                if (v164) {
                  v167 = v165;
                }
                else {
                  v167 = *(_QWORD*)(v17 + 120);
                }
                if (v167 >= 0xFFFFFFFFFFFFFFF7LL) {
                  goto LABEL_363;
                }
                v168 = v143;
                if (v167 >= 0x17) {
                  if ((v167 | 7) == 0x17) {
                    v170 = 26;
                  }
                  else {
                    v170 = (v167 | 7) + 1;
                  }
                  v169 = (char*)fw_memory_HeapManager_Allocate(
                      fw_memory_g_heap_manager, v170, 16, 0),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v246_.v246[1] = v167;
                  v246_.v247 = v169;
                  v246_.v246[0] = v170 | 1;
                }
                else {
                  v169 = (char*)v246_.v246 + 1;
                  LOBYTE(v246_.v246[0]) = 2 * v167;
                  if (v167 == 0) {
                    goto LABEL_261;
                  }
                }
                memmove((__int64)v169, v166, v167),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              LABEL_261:
                v169[v167] = 0;
                v171 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)v246_.v246,
                                                          "_", 1u),
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v71 =
                    COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v172 = v171[1];
                v173 = *v171;
                v248_.v250 = v171[2];
                v248_.v248 = v173;
                v248_.v249 = v172;
                v171[1] = 0;
                v171[2] = 0;
                *v171 = 0;
                std___1_to_string_1a0a790((void*)(v244_.v244), v148 - 1),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if ((v244_.v244[0] & 1) != 0) {
                  v174 = v244_.v245;
                }
                else {
                  v174 = (char*)v244_.v244 + 1;
                }
                if ((v244_.v244[0] & 1) != 0) {
                  v175 = v244_.v244[1];
                }
                else {
                  v175 = (unsigned __int64)LOBYTE(v244_.v244[0]) >> 1;
                }
                v176 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v248_.v248,
                                                          v174, v175),
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v71 =
                    COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v178 = v176[1];
                v177 = v176[2];
                v231_.v231[0] = *v176;
                v231_.v231[1] = v178;
                v231_.v231[2] = v177;
                v176[1] = 0;
                v176[2] = 0;
                *v176 = 0;
                if ((v231_.v231[0] & 1) != 0) {
                  v179 = (char*)v231_.v231[2];
                }
                else {
                  v179 = (char*)v231_.v231 + 1;
                }
                if ((v231_.v231[0] & 1) != 0) {
                  v180 = v231_.v231[1];
                }
                else {
                  v180 = (unsigned __int64)LOBYTE(v231_.v231[0]) >> 1;
                }
                Manager_c46bf0(v240, (__int64)v179, v180),
                    v29 = COERCE_AS(
                        __typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v71 = COERCE_AS(
                        __typeof__(v71),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v79 = COERCE_AS(
                        __typeof__(v79),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v13 = (__int64*)fw_memory_g_heap_manager_ptr;
                if ((v231_.v231[0] & 1) != 0 && v231_.v231[2] != 0) {
                  v181 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v181 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v181,
                      v231_.v231[2]),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                v139 = v215;
                v24 = v163;
                v143 = v168;
                if ((v244_.v244[0] & 1) != 0 && v244_.v245 != nullptr) {
                  v182 = 128;
                  if (*(_QWORD*)(*v13 + 200) == 0) {
                    v182 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v13 + v182,
                                                (__int64)v244_.v245),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                v17 = (__int64)v218;
                v146 = v162;
                if ((v248_.v248 & 1) != 0 && v248_.v250 != 0) {
                  v183 = 128;
                  if (*(_QWORD*)(*v13 + 200) == 0) {
                    v183 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v13 + v183, v248_.v250),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                v150 = v161;
                if ((v246_.v246[0] & 1) != 0 && v246_.v247 != nullptr) {
                  v184 = 128;
                  if (*(_QWORD*)(*v13 + 200) == 0) {
                    v184 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v13 + v184,
                                                (__int64)v246_.v247),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                if ((v241_.v241 & 1) != 0 && v241_.v243 != 0) {
                  v185 = 128;
                  if (*(_QWORD*)(*v13 + 200) == 0) {
                    v185 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v13 + v185, v241_.v243),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                v241_.v241 = v240[0];
                v241_.v242 = v240[1];
                v159 = v240[2];
                goto LABEL_299;
              }
            LABEL_354:
              if ((v212 & 1) != 0) {
                v209 = *(_QWORD*)(v211 + 968);
                *(_QWORD*)(v211 + 968) = v17;
                if (v209 == 0) {
                  goto LABEL_361;
                }
              }
              else {
                v209 = *(_QWORD*)(v211 + 976);
                *(_QWORD*)(v211 + 976) = v17;
                if (v209 == 0) {
                LABEL_361:
                  GameRoutine_6b50a0_alt1(v220),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD*))(v226_.v226[0] + 24LL))(v226_.v226),
                      v29 = COERCE_AS(
                          __typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v71 = COERCE_AS(
                          __typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v79 = COERCE_AS(
                          __typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  return 4;
                }
              }
              Manager_c477c0(v209),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v210 = 128;
              if (*(_QWORD*)(*v13 + 200) == 0) {
                v210 = 56;
              }
              nn_mem_StandardAllocator_Free(*v13 + v210, v209),
                  v29 = COERCE_AS(
                      __typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v71 = COERCE_AS(
                      __typeof__(v71),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v79 = COERCE_AS(
                      __typeof__(v79),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_361;
            }
          }
          else {
            v30 = 0;
            if ((v231_.v231[0] & 1) == 0) {
              goto LABEL_35;
            }
          }
          if (v231_.v231[2] != 0) {
            v35 = 128;
            if (*(_QWORD*)(*v13 + 200) == 0) {
              v35 = 56;
            }
            nn_mem_StandardAllocator_Free(*v13 + v35, v231_.v231[2]),
                v29 =
                    COERCE_AS(__typeof__(v29),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v71 =
                    COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v79 =
                    COERCE_AS(__typeof__(v79),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_35;
        }
      }
      memmove(v18, (__int64)v10, v11),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v71 = COERCE_AS(__typeof__(v71),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v79 = COERCE_AS(__typeof__(v79),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_22;
    }
  }
  if ((a3 & 1) != 0) {
    ({
      unsigned __int128 r_ = Manager_c43a90_pair((_QWORD*)a1);
      v29 = COERCE_AS(__typeof__(v29), (unsigned long long)(r_ >> 64));
      v71 = COERCE_AS(__typeof__(v71), (unsigned long long)(r_ >> 64));
      v79 = COERCE_AS(__typeof__(v79), (unsigned long long)(r_ >> 64));
      (__int64)(unsigned long long)r_;
    });
    return 5;
  }
  return 4;
}

__int64 GameHr_c5dca0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64* v10;
  _QWORD* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  long double v30;
  __int64 v31;
  char v32;
  char* v33;
  char* v34;
  unsigned __int64 v35;
  _BOOL4 v36;
  long double v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  char* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  char* v51;
  char* v52;
  __int64* v53;
  __int64* v54;
  unsigned __int64 v55;
  char* v56;
  __int64* v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  long double v76;
  __int64 v77;
  long double v78;
  _DWORD* v79;
  __int64 v80;
  long double v81;
  _DWORD* v82;
  __int64 v83;
  long double v84;
  _DWORD* v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  unsigned __int64 v104;
  int v105;
  unsigned __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64** v112;
  __int64* v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64** v116;
  __int64* v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  float v122;
  __int64 v123;
  float v124;
  _BOOL8 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  unsigned __int64 primeEm;
  unsigned __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  __int64* v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  float v143;
  float v144;
  float v145;
  _BOOL8 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64* v154;
  __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  _QWORD* v158;
  __int64 v159;
  __int64 result;
  long double v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  _QWORD* v165;
  __int64 v166;
  __int64* v167;
  _QWORD* v168;
  _QWORD v169[7];
  __int16 v170;
  int v171;
  __int64 v172;
  __int64 v173;
  _QWORD v174[2];
  char* v175;
  _QWORD v176[3];
  __int64 v177;
  __int64 v178;
  char* v179;
  __int64 v180;
  _DWORD v181[3];

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  v4 = a1;
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = GameData_1fd29f0;
  *(_QWORD*)(a1 + 8) = a2;
  v7 = (_QWORD*)GameData_212bf68;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v8 = (_QWORD*)GameRoutine_651b90(*v7, 96, 16, 0);
  v8[3] = 0;
  v9 = v8 + 3;
  v8[7] = 0;
  v8[8] = 0;
  v8[4] = 0;
  v10 = v8 + 4;
  v8[1] = 0;
  v8[2] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[10] = 0;
  v8[11] = 0;
  *v8 = GameData_1fd2a68;
  *((_DWORD*)v8 + 6) = 1;
  *((_DWORD*)v8 + 16) = 1065353216;
  v8[9] = 0;
  v167 = v8 + 9;
  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v8);
  }
  v11 = v8;
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (a4 | 7) + 1;
    }
    v12 = (char*)GameRoutine_651b90(*v7, v13, 16, 0);
    v174[1] = a4;
    v175 = v12;
    v174[0] = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v174[0]) = 2 * a4;
  v12 = (char*)v174 + 1;
  if (a4 != 0) {
  LABEL_9:
    GameRoutine_1a0b940(v12, a3, a4);
  }
  v12[a4] = 0;
  v14 = *(_QWORD*)(*GameData_212c010[0] + 13432);
  if ((v174[0] & 1) != 0) {
    v15 = v175;
  }
  else {
    v15 = (char*)v174 + 1;
  }
  v16 = GameRoutine_1a09c70(v15);
  v17 = (*(__int64 (**)(__int64, char*, __int64, __int64))(
      *(_QWORD*)v14 + 56LL))(v14, v15, v16, 255);
  v18 = *(_QWORD*)(v17 + 592);
  v19 = v17;
  if (v18 == 0) {
    goto LABEL_303;
  }
  v164 = v17;
  v20 = *(_QWORD*)(v17 + 576);
  v169[6] = 0;
  v171 = 0;
  v169[4] = -1;
  v169[5] = 0;
  v170 = 257;
  v21 = *v7;
  v172 = v18;
  v173 = v20;
  v169[0] = GameData_212ce30 + 2;
  __builtin_memset(&v169[1], 0, 24);
  v22 = GameRoutine_651b90(v21, 544, 16, 0);
  *(_QWORD*)v22 = 0;
  *(_BYTE*)(v22 + 12) = 0;
  v168 = (_QWORD*)v22;
  *(_DWORD*)(v22 + 8) = -1;
  *(_QWORD*)(v22 + 16) = v22 + 32;
  *(_QWORD*)(v22 + 24) = v22 + 32;
  GameRoutine_1fa0();
  GameRoutine_1fd0(v22, v169);
  LOBYTE(v178) = 0;
  v180 = (__int64)v9;
  LOBYTE(v177) = 14;
  *(_DWORD*)((char*)&v177 + 1) = 1936876886;
  HIDWORD(v177) = 1852795251;
  if ((GameRoutine_c05690(&v168, &v177) & 1) != 0) {
    GameRoutine_21c0(v168, v180);
  }
  if ((v177 & 1) != 0 && v179 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v24 = 56;
    }
    GameRoutine_1a0a4e0(*v7 + v24, v23);
  }
  v178 = 0;
  v179 = nullptr;
  v177 = 0;
  LOWORD(v176[0]) = 0;
  GameRoutine_2020(v168, v176);
  v25 = SLOWORD(v176[0]);
  v26 = GameRoutine_651b90(*v7, SLOWORD(v176[0]), 16, 0);
  GameRoutine_1a0ba50(v26, 0, v25, v27, v28, v29);
  GameRoutine_2500(v168, v26, v25);
  GameRoutine_60a060(&v177, v26, SLOWORD(v176[0]));
  v31 = 128;
  if (*(_QWORD*)(*v7 + 200LL) == 0) {
    v31 = 56;
  }
  GameRoutine_1a0a4e0(*v7 + v31, v30);
  v32 = v177;
  v176[0] = 0x736D696E415F6D0ELL;
  v176[1] = 0;
  v33 = v179;
  if ((v177 & 1) != 0) {
    v34 = v179;
  }
  else {
    v34 = (char*)&v177 + 1;
  }
  if ((v177 & 1) != 0) {
    v35 = v178;
  }
  else {
    v35 = (unsigned __int64)(unsigned __int8)v177 >> 1;
  }
  v36 = GameRoutine_1a09cf0((char*)v176 + 1, v34) == 0;
  v38 = v35 == 7 && v36;
  if ((v32 & 1) != 0 && v33 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v39 = 56;
    }
    GameRoutine_1a0a4e0(*v7 + v39, v37);
  }
  v165 = v9;
  v166 = v4;
  if ((_DWORD)v38 != 0) {
    v176[0] = 0;
    v40 = GameRoutine_2360(v168, v176);
    v41 = v11[9];
    v42 = (_QWORD*)v11[10];
    v43 = v176[0];
    v44 = (char*)v42 - v41;
    v45 = 0x2E8BA2E8BA2E8BA3LL * (((__int64)v42 - v41) >> 3);
    v46 = v176[0] - v45;
    if (v176[0] <= v45) {
      if (v176[0] >= v45) {
        v38 = v11[10];
      LABEL_89:
        if (v38 != *v167) {
          v72 = (v38 - *v167) >> 3;
          v73 = 40;
          v38 = 0x6D696E6108LL;
          v74 = 0x2E8BA2E8BA2E8BA3LL * v72;
          do {
            BYTE5(v177) = 0;
            v75 = *v167;
            *(_DWORD*)((char*)&v177 + 1) = 1701667182;
            LOBYTE(v177) = 8;
            v180 = v75 + v73 - 40;
            GameRoutine_c05cc0(&v168, &v177);
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v77 = 128;
              }
              else {
                v77 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v77, v76);
            }
            v180 = v75 + v73 - 16;
            v177 = 0x5274657366666F18LL;
            v178 = 0x6D6F646E61LL;
            if ((GameRoutine_c05fb0(&v168, &v177) & 1) != 0) {
              v79 = (_DWORD*)v180;
              if ((GameRoutine_21c0(v168, v181) & 1) != 0) {
                LODWORD(v78) = v181[0];
                *v79 = v181[0];
              }
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v80 = 128;
              }
              else {
                v80 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v80, v78);
            }
            v180 = v75 + v73 - 12;
            v177 = 0x61767265746E691CLL;
            v178 = 0x6D6F646E61526CLL;
            if ((GameRoutine_c05fb0(&v168, &v177) & 1) != 0) {
              v82 = (_DWORD*)v180;
              if ((GameRoutine_21c0(v168, v181) & 1) != 0) {
                LODWORD(v81) = v181[0];
                *v82 = v181[0];
              }
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v83 = 128;
              }
              else {
                v83 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v83, v81);
            }
            v180 = v75 + v73 - 8;
            v177 = 0x6152646565707316LL;
            v178 = 1836016750;
            if ((GameRoutine_c05fb0(&v168, &v177) & 1) != 0) {
              v85 = (_DWORD*)v180;
              if ((GameRoutine_21c0(v168, v181) & 1) != 0) {
                LODWORD(v84) = v181[0];
                *v85 = v181[0];
              }
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v86 = 128;
              }
              else {
                v86 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v86, v84);
            }
            v177 = 0x6D696E6108LL;
            v180 = v75 + v73;
            if ((GameRoutine_c3d510(&v168, &v177) & 1) != 0) {
              GameRoutine_c3d730(v180, &v168);
            }
            if ((v177 & 1) != 0 && v179 != nullptr) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v87 = 128;
              }
              else {
                v87 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v87, v37);
            }
            --v74;
            v73 += 88;
          } while (v74 != 0);
        }
        goto LABEL_133;
      }
      v38 = v41 + 88LL * v176[0];
      if ((_QWORD*)v38 != v42) {
        do {
          v67 = *(v42 - 3);
          v68 = v42;
          if (v67 != 0) {
            *(v42 - 2) = v67;
            if (*(_QWORD*)(*v7 + 200LL) != 0) {
              v69 = 128;
            }
            else {
              v69 = 56;
            }
            GameRoutine_1a0a4e0(*v7 + v69, v37);
          }
          v42 -= 11;
          if ((*(_BYTE*)(v68 - 11) & 1) != 0 && *(v68 - 9) != 0) {
            if (*(_QWORD*)(*v7 + 200LL) != 0) {
              v70 = 128;
            }
            else {
              v70 = 56;
            }
            GameRoutine_1a0a4e0(*v7 + v70, v37);
          }
        } while (v42 != (_QWORD*)v38);
      }
    }
    else {
      v47 = v11[11];
      if (0x2E8BA2E8BA2E8BA3LL * ((v47 - (__int64)v42) >> 3) < v46) {
        if (v176[0] > 0x2E8BA2E8BA2E8BAuLL) {
          GameRoutine_c601e0(v40);
        }
        v48 = 0x2E8BA2E8BA2E8BA3LL * ((v47 - v41) >> 3);
        if (2 * v48 > v176[0]) {
          v43 = 2 * v48;
        }
        if (v48 >= 0x1745D1745D1745DLL) {
          v49 = 0x2E8BA2E8BA2E8BALL;
        }
        else {
          v49 = v43;
        }
        if (v49 > 0x2E8BA2E8BA2E8BALL) {
          GameRoutine_60a210(v40);
        }
        v50 = GameRoutine_651b90(*v7, 88 * v49, 16, 0);
        v51 = &v44[v50];
        v38 = (__int64)&v44[88 * v46 + v50];
        v52 = &v44[v50];
        do {
          *((_QWORD*)v52 + 6) = 0;
          *((_QWORD*)v52 + 7) = 0;
          *((_QWORD*)v52 + 4) = 0;
          *((_QWORD*)v52 + 5) = 0;
          *((_QWORD*)v52 + 2) = 0;
          *((_QWORD*)v52 + 3) = 0;
          *(_QWORD*)v52 = 0;
          *((_QWORD*)v52 + 1) = 0;
          *((_DWORD*)v52 + 6) = 1065353216;
          v52[48] = 1;
          *((_QWORD*)v52 + 8) = 0;
          *((_QWORD*)v52 + 9) = 0;
          *((_QWORD*)v52 + 10) = 0;
          v52 += 88;
        } while (v52 != (char*)v38);
        v53 = (__int64*)v11[9];
        v54 = (__int64*)v11[10];
        v55 = v50 + 88 * v49;
        v56 = &v51[(char*)v53 - (char*)v54];
        if (v54 != v53) {
          v57 = (__int64*)v11[9];
          v58 = v56;
          do {
            v59 = *v57;
            v60 = v57[2];
            *((_QWORD*)v58 + 1) = v57[1];
            *((_QWORD*)v58 + 2) = v60;
            *(_QWORD*)v58 = v59;
            v57[1] = 0;
            v57[2] = 0;
            *v57 = 0;
            v61 = v57[3];
            *((_DWORD*)v58 + 8) = *((_DWORD*)v57 + 8);
            *((_QWORD*)v58 + 3) = v61;
            v62 = v57[5];
            v63 = v57[6];
            v58[56] = *((_BYTE*)v57 + 56);
            *((_QWORD*)v58 + 5) = v62;
            *((_QWORD*)v58 + 6) = v63;
            *((_QWORD*)v58 + 8) = v57[8];
            *((_QWORD*)v58 + 9) = v57[9];
            *((_QWORD*)v58 + 10) = v57[10];
            v57[9] = 0;
            v57[10] = 0;
            v57[8] = 0;
            v57 += 11;
            v58 += 88;
          } while (v57 != v54);
          do {
            v64 = v53[8];
            if (v64 != 0) {
              v53[9] = v64;
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v65 = 128;
              }
              else {
                v65 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v65, v37);
            }
            if ((*(_BYTE*)v53 & 1) != 0 && v53[2] != 0) {
              if (*(_QWORD*)(*v7 + 200LL) != 0) {
                v66 = 128;
              }
              else {
                v66 = 56;
              }
              GameRoutine_1a0a4e0(*v7 + v66, v37);
            }
            v53 += 11;
          } while (v53 != v54);
          v53 = (__int64*)*v167;
        }
        v11[9] = v56;
        v11[10] = v38;
        v11[11] = v55;
        if (v53 != nullptr) {
          v71 = 128;
          if (*(_QWORD*)(*v7 + 200LL) == 0) {
            v71 = 56;
          }
          GameRoutine_1a0a4e0(*v7 + v71, v37);
          v38 = v11[10];
        }
        goto LABEL_89;
      }
      v38 = (__int64)&v42[11 * v46];
      do {
        v42[6] = 0;
        v42[7] = 0;
        v42[4] = 0;
        v42[5] = 0;
        v42[2] = 0;
        v42[3] = 0;
        *v42 = 0;
        v42[1] = 0;
        *((_DWORD*)v42 + 6) = 1065353216;
        *((_BYTE*)v42 + 48) = 1;
        v42[8] = 0;
        v42[9] = 0;
        v42[10] = 0;
        v42 += 11;
      } while (v42 != (_QWORD*)v38);
    }
    v11[10] = v38;
    goto LABEL_89;
  }
LABEL_133:
  if (v11[7] != 0) {
    v88 = (_QWORD*)v11[6];
    if (v88 != nullptr) {
      v38 = 128;
      do {
        v90 = (_QWORD*)*v88;
        v91 = v88[3];
        v92 = *v7;
        if (v91 != 0) {
          v88[4] = v91;
          if (*(_QWORD*)(v92 + 200) != 0) {
            v93 = 128;
          }
          else {
            v93 = 56;
          }
          GameRoutine_1a0a4e0(v92 + v93, v37);
          v92 = *v7;
        }
        if (*(_QWORD*)(v92 + 200) != 0) {
          v89 = 128;
        }
        else {
          v89 = 56;
        }
        GameRoutine_1a0a4e0(v92 + v89, v37);
        v88 = v90;
      } while (v90 != nullptr);
    }
    v94 = v11[5];
    v11[6] = 0;
    if (v94 != 0) {
      v95 = v94 & 7;
      if (v94 >= 8) {
        v97 = v94 & 0xFFFFFFFFFFFFFFF8LL;
        v96 = 0;
        do {
          *(_QWORD*)(*v10 + 8 * v96) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 8) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 16) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 24) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 32) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 40) = 0;
          *(_QWORD*)(*v10 + 8 * v96 + 48) = 0;
          v98 = *v10 + 8 * v96;
          v96 += 8;
          *(_QWORD*)(v98 + 56) = 0;
        } while (v97 != v96);
      }
      else {
        v96 = 0;
      }
      if (v95 != 0) {
        v99 = 8 * v96;
        do {
          --v95;
          *(_QWORD*)(*v10 + v99) = 0;
          v99 += 8;
        } while (v95 != 0);
      }
    }
    v11[7] = 0;
  }
  v100 = v11[9];
  v101 = v11[10];
  LODWORD(v177) = 0;
  if (v101 != v100) {
    v102 = v11 + 6;
    v103 = 0;
    do {
      v104 = v11[5];
      v105 = *(_DWORD*)(v100 + 88 * v103 + 44);
      if (v104 == 0 || v11[7] == 0) {
      LABEL_161:
        if (v104 == 0) {
          goto LABEL_202;
        }
        v107 = ((v104 - ((v104 >> 1) & 0x5555555555555555LL)) &
                0x3333333333333333LL) +
               (((v104 - ((v104 >> 1) & 0x5555555555555555LL)) >> 2) &
                0x3333333333333333LL);
        v108 = (0x101010101010101LL *
                ((v107 + (v107 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
               56;
      }
      else {
        v109 = v104 - 1;
        if ((v104 & (v104 - 1)) != 0) {
          v110 = v105;
          if (v104 <= v105) {
            v110 = v105 % v104;
          }
        }
        else {
          v110 = v109 & v105;
        }
        v111 = ((v104 - ((v104 >> 1) & 0x5555555555555555LL)) &
                0x3333333333333333LL) +
               (((v104 - ((v104 >> 1) & 0x5555555555555555LL)) >> 2) &
                0x3333333333333333LL);
        v108 = (0x101010101010101LL *
                ((v111 + (v111 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
               56;
        v112 = *(__int64***)(*v10 + 8 * v110);
        if (v112 != nullptr) {
          v113 = *v112;
          if (v113 != nullptr) {
            if ((v104 & v109) == 0) {
              while (1) {
                v115 = v113[1];
                if (v115 == v105) {
                  if (*((_DWORD*)v113 + 4) == v105) {
                    goto LABEL_240;
                  }
                }
                else if ((v115 & v109) != v110) {
                  goto LABEL_161;
                }
                v113 = (__int64*)*v113;
                if (v113 == nullptr) {
                  goto LABEL_161;
                }
              }
            }
            while (1) {
              v114 = v113[1];
              if (v114 == v105) {
                if (*((_DWORD*)v113 + 4) == v105) {
                  goto LABEL_240;
                }
              }
              else {
                if (v114 >= v104) {
                  v114 %= v104;
                }
                if (v114 != v110) {
                  goto LABEL_161;
                }
              }
              v113 = (__int64*)*v113;
              if (v113 == nullptr) {
                goto LABEL_161;
              }
            }
          }
        }
      }
      if (v108 > 1) {
        v38 = v105;
        if (v104 <= v105) {
          v38 = v105 % v104;
        }
      }
      else {
        v38 = (v104 - 1) & v105;
      }
      v116 = *(__int64***)(*v10 + 8 * v38);
      if (v116 != nullptr) {
        v117 = *v116;
        if (v117 != nullptr) {
          if (v108 < 2) {
            while (1) {
              v119 = v117[1];
              if (v119 == v105) {
                if (*((_DWORD*)v117 + 4) == v105) {
                  goto LABEL_240;
                }
              }
              else if ((v119 & (v104 - 1)) != v38) {
                goto LABEL_202;
              }
              v117 = (__int64*)*v117;
              if (v117 == nullptr) {
                goto LABEL_202;
              }
            }
          }
          do {
            v118 = v117[1];
            if (v118 == v105) {
              if (*((_DWORD*)v117 + 4) == v105) {
                goto LABEL_240;
              }
            }
            else {
              if (v118 >= v104) {
                v118 %= v104;
              }
              if (v118 != v38) {
                break;
              }
            }
            v117 = (__int64*)*v117;
          } while (v117 != nullptr);
        }
      }
    LABEL_202:
      v120 = GameRoutine_651b90(*v7, 48, 16, 0);
      v121 = v11[7];
      v122 = *((float*)v11 + 16);
      v123 = v120;
      *(_QWORD*)v120 = 0;
      *(_QWORD*)(v120 + 8) = v105;
      *(_DWORD*)(v120 + 16) = v105;
      *(_QWORD*)(v120 + 24) = 0;
      *(_QWORD*)(v120 + 32) = 0;
      *(_QWORD*)(v120 + 40) = 0;
      v124 = (float)(unsigned __int64)(v121 + 1);
      if (v104 == 0 || (float)(v122 * (float)v104) < v124) {
        v125 = v104 < 3 || (v104 & (v104 - 1)) != 0;
        v126 = v125 | (2 * v104);
        v127 = vcvtps_u64_f32(v124 / v122);
        if (v126 <= v127) {
          primeEm = v127;
        }
        else {
          primeEm = v126;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = GameRoutine_1a09d00(primeEm);
        }
        v129 = v11[5];
        if (primeEm > v129) {
          goto LABEL_215;
        }
        if (primeEm < v129) {
          v130 = vcvtps_u64_f32((float)(unsigned __int64)v11[7] /
                                *((float*)v11 + 16));
          if (v129 < 3 || (v129 & (v129 - 1)) != 0) {
            v130 = GameRoutine_1a09d00(v130);
          }
          else {
            v131 = 1LL << (-(char)__clz(v130 - 1) & 63);
            if (v130 >= 2) {
              v130 = v131;
            }
          }
          if (primeEm <= v130) {
            primeEm = v130;
          }
          if (primeEm < v129) {
          LABEL_215:
            GameRoutine_c606c0(v10, primeEm);
          }
        }
        v104 = v11[5];
        if ((v104 & (v104 - 1)) != 0) {
          if (v104 <= v105) {
            v38 = v105 % v104;
          }
          else {
            v38 = v105;
          }
        }
        else {
          v38 = (v104 - 1) & v105;
        }
      }
      v132 = *v10;
      v133 = *(__int64**)(*v10 + 8 * v38);
      if (v133 != nullptr) {
        *(_QWORD*)v123 = *v133;
        *v133 = v123;
      }
      else {
        v134 = *v102;
        *v102 = v123;
        *(_QWORD*)v123 = v134;
        *(_QWORD*)(v132 + 8 * v38) = v102;
        if (*(_QWORD*)v123 != 0) {
          v135 = *(_QWORD*)(*(_QWORD*)v123 + 8LL);
          if ((v104 & (v104 - 1)) != 0) {
            if (v135 >= v104) {
              v135 %= v104;
            }
          }
          else {
            v135 &= v104 - 1;
          }
          *(_QWORD*)(*v10 + 8 * v135) = v123;
        }
      }
      v104 = v11[5];
      ++v11[7];
    LABEL_240:
      if (v104 != 0) {
        v136 = v104 - 1;
        if ((v104 & (v104 - 1)) != 0) {
          v38 = v105;
          if (v104 <= v105) {
            v38 = v105 % v104;
          }
        }
        else {
          v38 = v136 & v105;
        }
        v137 = *(__int64**)(*v10 + 8 * v38);
        if (v137 != nullptr) {
          v138 = *v137;
          if (*v137 != 0) {
            if ((v104 & v136) == 0) {
              while (1) {
                v140 = *(_QWORD*)(v138 + 8);
                if (v140 == v105) {
                  if (*(_DWORD*)(v138 + 16) == v105) {
                    goto LABEL_297;
                  }
                }
                else if ((v140 & v136) != v38) {
                  goto LABEL_260;
                }
                v138 = *(_QWORD*)v138;
                if (v138 == 0) {
                  goto LABEL_260;
                }
              }
            }
            do {
              v139 = *(_QWORD*)(v138 + 8);
              if (v139 == v105) {
                if (*(_DWORD*)(v138 + 16) == v105) {
                  goto LABEL_297;
                }
              }
              else {
                if (v139 >= v104) {
                  v139 %= v104;
                }
                if (v139 != v38) {
                  break;
                }
              }
              v138 = *(_QWORD*)v138;
            } while (v138 != 0);
          }
        }
      }
    LABEL_260:
      v141 = GameRoutine_651b90(*v7, 48, 16, 0);
      v142 = v11[7];
      v143 = *((float*)v11 + 16);
      v138 = v141;
      *(_QWORD*)v141 = 0;
      *(_QWORD*)(v141 + 8) = v105;
      *(_DWORD*)(v141 + 16) = v105;
      *(_QWORD*)(v141 + 24) = 0;
      *(_QWORD*)(v141 + 32) = 0;
      *(_QWORD*)(v141 + 40) = 0;
      v144 = (float)(unsigned __int64)(v142 + 1);
      if (v104 == 0 || (float)(v143 * (float)v104) < v144) {
        v145 = v144 / v143;
        v146 = (v104 & (v104 - 1)) != 0;
        if (v104 < 3) {
          v146 = true;
        }
        v147 = v146 | (2 * v104);
        v148 = vcvtps_u64_f32(v145);
        if (v147 <= v148) {
          v149 = v148;
        }
        else {
          v149 = v147;
        }
        if (v149 == 1) {
          v149 = 2;
        }
        else if ((v149 & (v149 - 1)) != 0) {
          v150 = GameRoutine_1a09d00(v149);
          v104 = v11[5];
          v149 = v150;
        }
        if (v149 > v104) {
          goto LABEL_272;
        }
        if (v149 < v104) {
          v151 = vcvtps_u64_f32((float)(unsigned __int64)v11[7] /
                                *((float*)v11 + 16));
          if (v104 < 3 || (v104 & (v104 - 1)) != 0) {
            v151 = GameRoutine_1a09d00(v151);
          }
          else {
            v152 = 1LL << (-(char)__clz(v151 - 1) & 63);
            if (v151 >= 2) {
              v151 = v152;
            }
          }
          if (v149 <= v151) {
            v149 = v151;
          }
          if (v149 < v104) {
          LABEL_272:
            GameRoutine_c606c0(v10, v149);
          }
        }
        v104 = v11[5];
        if ((v104 & (v104 - 1)) != 0) {
          if (v104 <= v105) {
            v38 = v105 % v104;
          }
          else {
            v38 = v105;
          }
        }
        else {
          v38 = (v104 - 1) & v105;
        }
      }
      v153 = *v10;
      v154 = *(__int64**)(*v10 + 8 * v38);
      if (v154 != nullptr) {
        *(_QWORD*)v138 = *v154;
        *v154 = v138;
      }
      else {
        v155 = *v102;
        *v102 = v138;
        *(_QWORD*)v138 = v155;
        *(_QWORD*)(v153 + 8 * v38) = v102;
        if (*(_QWORD*)v138 != 0) {
          v156 = *(_QWORD*)(*(_QWORD*)v138 + 8LL);
          if ((v104 & (v104 - 1)) != 0) {
            if (v156 >= v104) {
              v156 %= v104;
            }
          }
          else {
            v156 &= v104 - 1;
          }
          *(_QWORD*)(*v10 + 8 * v156) = v138;
        }
      }
      ++v11[7];
    LABEL_297:
      GameRoutine_a71f30(v138 + 24, &v177);
      v100 = v11[9];
      v157 = v11[10];
      LODWORD(v177) = v177 + 1;
      v103 = (unsigned int)v177;
    } while (0x2E8BA2E8BA2E8BA3LL * ((v157 - v100) >> 3) >
             (unsigned __int64)(unsigned int)v177);
  }
  *v168 = 0;
  v158 = v168;
  v168 = nullptr;
  if (v158 != nullptr) {
    v159 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v159 = 56;
    }
    GameRoutine_1a0a4e0(*v7 + v159, v37);
  }
  (*(void (**)(_QWORD*))(v169[0] + 24LL))(v169);
  v9 = v165;
  v4 = v166;
  v19 = v164;
LABEL_303:
  result = GameRoutine_634d80(*(_QWORD*)(v19 + 8), v19);
  if ((v174[0] & 1) != 0 && v175 != nullptr) {
    v162 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v162 = 56;
    }
    result = GameRoutine_1a0a4e0(*v7 + v162, v161);
  }
  v163 = *(_QWORD*)(v4 + 32);
  *(_QWORD*)(v4 + 24) = v9;
  *(_QWORD*)(v4 + 32) = v11;
  if (v163 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v163 + 16LL))(v163);
    return GameRoutine_1a09c50(v163);
  }
  return result;
}

void GameHr_cc8560(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  long double v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  char* v18;
  _BYTE v19[200];

  v2 = *GameData_212c370;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = GameRoutine_25eed0(a1);
  v8 = GameRoutine_1a09c70(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v8);
  }
  v10 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v8 | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(GameData_2265ee0, v12, 16, 0);
    v17[1] = v10;
    v18 = v11;
    v17[0] = v12 | 1;
    goto LABEL_17;
  }
  LOBYTE(v17[0]) = 2 * v8;
  v11 = (char*)v17 + 1;
  if (v8 != 0) {
  LABEL_17:
    GameRoutine_1a0b940(v11, v7, v10);
  }
  v11[v10] = 0;
  v13 = v17[0] & 1;
  if ((v17[0] & 1) != 0) {
    v14 = v18;
  }
  else {
    v14 = (char*)v17 + 1;
  }
  if (v14 != nullptr) {
    *(_QWORD*)&v9 = 0;
    GameRoutine_10c830(v19, v9);
    GameRoutine_ff2d0((void*)(&v16), v14, v14, v19, 0, 65537, 0, 0.0, 1.0);
    *(__n128*)&v9 = GameRoutine_10cff0(v19);
    v13 = v17[0] & 1;
  }
  if (v13 != 0 && v18 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v15 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v9);
  }
}

_QWORD* GameHr_cd55a0(__int64 a1, unsigned __int8* a2, unsigned __int8* a3,
                      __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* result;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  __int64 v26;
  unsigned __int64 v27;
  long double v28;
  long double v29;
  long double v30;
  long double v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64* v45;
  unsigned __int64 v46;
  __int64 v47;
  long double v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  long double v52;
  __int64* v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  char* v64;
  _QWORD v65[2];
  __int64 v66;
  int v67;
  _QWORD v68[2];
  __int64 v69;
  __int64 v70;
  __int64* v71;
  unsigned __int64 v72;

  v8 = *GameData_212c370;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)GameData_21a6070 +
                                                    72LL))(GameData_21a6070) +
               4384);
  if (v9 != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  }
  else {
    v10 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v10 + 24) + 448LL))(
      *(_QWORD*)(v10 + 24), 1);
  result = *(_QWORD**)(v10 + 2240);
  *(_QWORD*)(v10 + 2240) = 0;
  if (result == (_QWORD*)(v10 + 2208)) {
    v12 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v12 = 40;
  LABEL_8:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v12))((__int64)result);
  }
  v13 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v13 == 0x4000) {
    return result;
  }
  v14 = GameData_212c330[0];
  v15 = (_QWORD*)(GameData_212c330[0][*(unsigned int*)(a1 + 20)] + 16 * v13);
  if (v15[1] == 0 || *v15 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v16 = *a2;
  v67 = 0;
  v65[1] = 0;
  v66 = 0;
  v17 = v16 >> 1;
  v18 = (v16 & 1) == 0;
  v19 = *((_QWORD*)a2 + 1);
  v20 = *((unsigned __int8**)a2 + 2);
  v65[0] = 0;
  v68[0] = 0;
  v68[1] = 0;
  v69 = 0;
  v70 = 0;
  v71 = nullptr;
  v72 = 0;
  if (v18) {
    v21 = v17;
  }
  else {
    v21 = v19;
  }
  if (v18) {
    v22 = a2 + 1;
  }
  else {
    v22 = v20;
  }
  GameRoutine_60a060(v65, v22, v21);
  v67 = 1;
  v23 = *a3;
  if ((v23 & 1) != 0) {
    v24 = *((_QWORD*)a3 + 1);
  }
  else {
    v24 = v23 >> 1;
  }
  if ((v23 & 1) != 0) {
    v25 = *((unsigned __int8**)a3 + 2);
  }
  else {
    v25 = a3 + 1;
  }
  GameRoutine_60a060(v68, v25, v24);
  if ((*(_BYTE*)a4 & 1) != 0) {
    v26 = *(_QWORD*)(a4 + 16);
  }
  else {
    v26 = a4 + 1;
  }
  v27 = GameRoutine_1a09c70(v26);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v27);
  }
  v32 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v27 | 7) + 1;
    }
    v33 = (char*)GameRoutine_651b90(GameData_2265ee0, v34, 16, 0);
    v63 = v32;
    v64 = v33;
    v62 = v34 | 1;
  }
  else {
    LOBYTE(v62) = 2 * v27;
    v33 = (char*)&v62 + 1;
    if (v27 == 0) {
      goto LABEL_36;
    }
  }
  v27 = GameRoutine_1a0b940(v33, v26, v32);
LABEL_36:
  v35 = v71;
  v36 = v72;
  v33[v32] = 0;
  if ((unsigned __int64)v35 >= v36) {
    v39 = v70;
    v40 = (char*)v35 - v70;
    v41 = 1 - 0x5555555555555555LL * (((__int64)v35 - v70) >> 3);
    if (v41 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_64aa00(v28, v29, v30, v31);
    }
    v42 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v36 - v70) >> 3);
    if (2 * v42 > v41) {
      v41 = 2 * v42;
    }
    if (v42 >= 0x555555555555555LL) {
      v43 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v43 = v41;
    }
    if (v43 != 0) {
      if (v43 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(v27);
      }
      v44 = GameRoutine_651b90(GameData_2265ee0, 24 * v43, 16, 0);
    }
    else {
      v44 = 0;
    }
    v45 = (__int64*)&v40[v44];
    v46 = v44 + 24 * v43;
    v47 = v63;
    v38 = (__int64)&v40[v44 + 24];
    *v45 = v62;
    v45[1] = v47;
    v45[2] = (__int64)v64;
    GameRoutine_1a0b950(v44, v39, v40);
    v70 = v44;
    v71 = (__int64*)v38;
    v72 = v46;
    if (v39 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v49 = 56;
      }
      GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v49, v48);
    }
  }
  else {
    v37 = v63;
    v38 = (__int64)(v35 + 3);
    *v35 = v62;
    v35[1] = v37;
    v35[2] = (__int64)v64;
  }
  v50 = *(unsigned int*)(a1 + 16);
  v51 = *(unsigned int*)(a1 + 20);
  v71 = (__int64*)v38;
  result = (_QWORD*)GameRoutine_caed40(*(_QWORD**)(v14[v51] + 16 * v50 + 8),
                                       (__int64)v65);
  v53 = (__int64*)v70;
  if (v70 != 0) {
    v54 = v71;
    if ((__int64*)v70 == v71) {
      goto LABEL_63;
    }
    v55 = v71;
    v56 = GameData_212bf68;
    do {
      v57 = *((_BYTE*)v55 - 24);
      v55 -= 3;
      if ((v57 & 1) != 0 && *(v54 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v56 + 200LL) != 0) {
          v58 = 128;
        }
        else {
          v58 = 56;
        }
        result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)v56 + v58, v52);
      }
      v54 = v55;
    } while (v55 != v53);
    v71 = v53;
    if (v70 != 0) {
    LABEL_63:
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v59 = 56;
      }
      result =
          (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v59, v52);
    }
  }
  if ((v68[0] & 1) != 0 && v69 != 0) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v60 = 56;
    }
    result =
        (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v60, v52);
  }
  if ((v65[0] & 1) != 0 && v66 != 0) {
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v61 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v61, v52);
  }
  return result;
}

#pragma GCC visibility pop
