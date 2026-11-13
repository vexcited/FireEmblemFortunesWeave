#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Layout_1363f00(PSEUDO_X8, __int64, __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_1c0dbd8;
extern _UNKNOWN GameData_1c0dbf8;
extern _UNKNOWN GameData_20e3128;
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_212e348;
extern __int64* GameData_2132008[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_1c0dc3c[];
float LayoutAccessor_15637c0(__int64*, __int64, char);
int __cxa_guard_acquire(__int64);
void BattleInfoStatus_19ad4e0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void __attribute__((noreturn)) GameRoutine_183d430();
void __attribute__((noreturn)) GameRoutine_60a210();
void __cxa_guard_release(__int64);
void game_183ba60(int**, int, int, char, unsigned __int8, unsigned __int8, int,
                  int, unsigned int, unsigned int, char, char, char, int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 ui_1837780(__int64* a1, char a2);

__int64 ui_1837780(__int64* a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  char* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64* v9;
  char* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64* v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  int v42;
  unsigned __int8* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  int v49;
  unsigned __int64 v50;
  int v51;
  int v52;
  int v53;
  char v54;
  unsigned __int8 v55;
  int v56;
  char v57;
  _BOOL4 v59;
  int v60;
  _BOOL4 v61;
  _BOOL4 v62;
  __int64 v63;
  int v64;
  int v65;
  unsigned __int8* v66;
  int v67;
  _BOOL4 v69;
  _BOOL4 v70;
  __int64 v71;
  int v72;
  unsigned int v73;
  __int16 v74;
  int v75;
  __int64 v76;
  int v77;
  _BOOL4 v78;
  __int64 v79;
  __int64 v80;
  _BOOL4 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  unsigned __int8 v87;
  char v88;
  char v89;
  int v90;
  int v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned __int8* v97;
  __int64 v98;
  __int64 v99;
  int v101;
  int v102;
  char v103;
  int v104;
  unsigned int v105;
  int v108;
  int v109;
  __int16 v110;
  unsigned int v111;
  unsigned int v112;
  __int64 v113;
  __int64 v114;
  int v115;
  int v116;
  __int64 v117;
  unsigned int v118;
  _BYTE* v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  int v123;
  int v124;
  int v125;
  int v126;
  int v127;
  unsigned int v129;
  int v130;
  __int64 v131;
  int v132;
  _DWORD* v133;
  __int64 v134;
  int v135;
  int v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  __int64 v143;
  unsigned __int8* v144;
  __int64 v145;
  int v146;
  __int64 v147;
  int v148;
  unsigned int v149;
  __int64 v150;
  __int64 v151;
  int v152;
  __int16* v153;
  __int64 v154;
  int v155;
  int v156;
  int v157;
  __int16* v158;
  __int64 v159;
  int v160;
  __int64 v161;
  __int16* v162;
  __int64 v163;
  int v164;
  int v165;
  int v166;
  __int16* v167;
  int v168;
  _DWORD* v169;
  __int64 v170;
  unsigned int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  unsigned __int8* v180;
  int v181;
  int v182;
  int v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  char v194;
  int v195;
  __int64 v196;
  unsigned __int8* v197;
  int v198;
  int v199;
  __int64 v200;
  __int64 v201;
  int v202;
  int v203;
  unsigned __int64 v204;
  __int64 v205;
  unsigned __int64 v206;
  unsigned __int64 v207;
  int v208;
  __int64 v209;
  unsigned __int64 v210;
  int v211;
  unsigned __int8* v212;
  int v213;
  unsigned __int64 v214;
  __int64 v215;
  unsigned int v216;
  __int64 v217;
  char v218;
  __int64 v219;
  __int64 v220;
  char* v221;
  char v222;
  bool v223;
  char v224;
  char v225;
  __int64 v226;
  char v227;
  __int64* v228;
  __int64 v229;
  char* v230;
  char* v231;
  __int64* v232;
  char* v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  char* v237;
  __int64 v238;
  __int64 v239;
  int v240;
  __int64* v241;
  int v242;
  __int64* v243;
  __int64* v244;
  __int64* v245;
  __int64* v246;
  __int64* v247;
  char* v249;
  __int64 v250;
  unsigned __int8* v251;
  __int64 v252;
  int v253;
  char v254;
  int v255;
  int v256;
  int v257;
  int v258;
  unsigned int v259;
  unsigned int v260;
  unsigned int v261;
  unsigned int v262;
  int v263;
  int v264;
  int v265;
  int v266;
  int v267;
  unsigned __int64 v268;
  unsigned int v269;
  __int64 v271;
  int v272;
  __int64 v273;
  int v274;
  __int64 v275;
  unsigned __int64 v276;
  __int64 v277;
  __int64 v278;
  unsigned __int64 v279;
  __int64 v280;
  int v281;
  char v282;
  char v283;
  int v284;
  __int64 v285;
  int v286;
  __int64 v287;
  int v288;
  _QWORD v290[2];
  int* v291[9];
  struct {
    char v292;
    char gap377_[3];
    char v293;
  } v292_;
  struct {
    char v294;
    char gap385_[3];
    __int16 v295;
  } v294_;
  char v296;
  __int64 v297;
  int v298;
  struct {
    __int64 v299;
    __int64 v300;
  } v299_;
  struct {
    __int64 v301;
    __int64 v302;
  } v301_;
  struct {
    __int64 v303;
    unsigned __int64 v304;
    unsigned __int64 v305;
    unsigned __int64 v306;
    int v307;
    int v308;
    __int64 v309;
    __int64 v310;
    __int64 v311;
    __int64 v312;
    __int64 v313;
    __int64 v314;
    __int64 v315;
    __int64 v316;
    __int64 v317;
    __int64 v318;
    __int64 v319;
    __int64 v320;
    __int64 v321;
  } v303_;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = a1[19];
  v3 = 0;
  v297 = 0;
  v296 = 0;
  v4 = "T_Num_Attack";
  v298 = -1;
  v5 = "T_Num_Hit";
  v291[2] = (int*)&v292_.v292;
  v291[3] = (int*)&v296;
  v294_.v295 = 0;
  v294_.v294 = 0;
  v6 = *(_QWORD*)(v2 + 24);
  v271 = v2;
  v7 = *(_QWORD*)(v2 + 784);
  v292_.v293 = 0;
  v292_.v292 = 0;
  v291[4] = (int*)&v294_.v295;
  v291[5] = (int*)&v297 + 1;
  v291[8] = (int*)&v292_.v293;
  v291[0] = &v298;
  v291[1] = (int*)a1;
  v278 = v6;
  v273 = v7;
  v291[6] = (int*)&v297;
  v291[7] = (int*)&v294_.v294;
  do {
    v8 = game_util_Format("L_%s_ChangeHPNum%02d", "Target", v3),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v9 = LayoutAccessor_155fbe0(a1 + 3, v8),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"T_Num_Attack", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"T_Num_Hit", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"T_Num_Critical", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"IconLinkType", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"T_Info", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v9, "Caution_Off"),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v9, "IconDead_Off"),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v9, "IconBarrier_Off"),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_155e830((__int64)v9, 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v10 = game_util_Format("L_%s_ChangeHPNum%02d", "Player", v3),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v11 = LayoutAccessor_155fbe0(a1 + 3, v10),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"T_Num_Attack", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"T_Num_Hit", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"T_Num_Critical",
                                     0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"IconLinkType", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"T_Info", 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v11, "Caution_Off"),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v11, "IconDead_Off"),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_1562cf0((__int64)v11, "IconBarrier_Off"),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    LayoutAccessor_155e830((__int64)v11, 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    ++v3;
  } while (v3 != 5);
  v12 = 0;
  v290[0] = "Player";
  v290[1] = "Target";
  v13 = GameData_212dfc8;
  v14 = a1;
  while (2) {
    v15 = 0;
    v285 = v12;
    v16 = *(const char**)((char*)v290 + v12);
    while (2) {
      v17 = 0;
      v287 = v15;
      v18 = *((int*)&GameData_1c0dbd8 + v15);
      do {
        v20 = game_util_Format("L_%s_%s%s", v16,
                               (const char*)&GameData_1c0dbd8 + v18,
                               *((const char**)&GameData_20e3128 + v17)),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v21 = v14[4];
        if (v21 == 0 || (v22 = std___1___shared_weak_count_lock(v21)) == 0) {
          v4 = nullptr;
          v5 = nullptr;
          goto LABEL_9;
        }
        v23 = v14;
        v24 = v14[3];
        v25 = v22;
        if (v24 == 0 ||
            (v26 = ui_LayoutAccessor_GetPartsLayout(v23 + 3, v20)) == 0) {
          v34 = 1;
          goto LABEL_40;
        }
        v27 = *(_QWORD*)(v26 + 24);
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)GameData_212dfd0) != 0) {
          *v13 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          __cxa_guard_release((__int64)GameData_212dfd0),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        if (v27 == 0) {
          goto LABEL_23;
        }
        v28 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v28 != v13) {
          do {
            v28 = (__int64*)*v28;
          } while (v28 != v13 && v28 != nullptr);
          if (v28 == nullptr) {
          LABEL_23:
            v27 = 0;
          }
        }
        Layout_1363f00((void*)(&v299_.v299), v24, v27),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v301_.v301 = 0;
        v301_.v302 = 0;
        if (v299_.v300 != 0 &&
            (v30 = std___1___shared_weak_count_lock(v299_.v300),
             v301_.v302 = v30, v30 != 0) &&
            (v301_.v301 = v299_.v299, v299_.v299 != 0) &&
            (v31 = v30, (v32 = __dynamic_cast(v299_.v299, GameData_212dfc0[0],
                                              GameData_2132008[0], 0)) != 0)) {
          v33 = &v301_.v301;
          v303_.v303 = v32;
          v303_.v304 = v31;
        }
        else {
          v33 = &v303_.v303;
        }
        *v33 = 0;
        v33[1] = 0;
        v4 = (const char*)v303_.v303;
        v5 = (const char*)v303_.v304;
        if (v303_.v304 != 0 &&
            (atomic_fetch_add_explicit(
                 (atomic_ullong* volatile)(v303_.v304 + 16), 1u,
                 memory_order_relaxed),
             atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                              0xFFFFFFFFFFFFFFFFLL) == 0)) {
          (*(void (**)(const char*))(*(_QWORD*)v5 + 16LL))(v5),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          std___1___shared_weak_count___release_weak((__int64)v5),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v35 = v301_.v302;
          if (v301_.v302 != 0) {
          LABEL_34:
            if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              std___1___shared_weak_count___release_weak(v35),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            }
          }
        }
        else {
          v35 = v301_.v302;
          if (v301_.v302 != 0) {
            goto LABEL_34;
          }
        }
        if (v299_.v300 != 0) {
          std___1___shared_weak_count___release_weak(v299_.v300),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        v34 = 0;
      LABEL_40:
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v34 & 1) == 0) {
            goto LABEL_44;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          std___1___shared_weak_count___release_weak(v25),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          if ((v34 & 1) == 0) {
          LABEL_44:
            if (v5 != nullptr) {
              v36 = std___1___shared_weak_count_lock((__int64)v5),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              std___1___shared_weak_count___release_weak((__int64)v5),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              if (v36 != 0) {
                if (v4 != nullptr) {
                  BattleInfoStatus_19ad4e0((__int64)v4),
                      v19 = COERCE_AS(
                          __typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
                      v19 = COERCE_AS(
                          __typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  std___1___shared_weak_count___release_weak(v36),
                      v19 = COERCE_AS(
                          __typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
              }
            }
            goto LABEL_50;
          }
        }
        v4 = nullptr;
        v5 = nullptr;
      LABEL_50:
        v14 = a1;
      LABEL_9:
        ++v17;
      } while (v17 != 3);
      v15 = v287 + 1;
      if (v287 != 2) {
        continue;
      }
      break;
    }
    v12 = v285 + 8;
    if (v285 != 8) {
      continue;
    }
    break;
  }
  v37 = v278;
  v303_.v303 = -1;
  v303_.v304 = -1;
  if (*(int*)(v278 + 11256) >= 1) {
    v38 = v278 + 3064;
    v39 = -1;
    v276 = 0;
    v277 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v286 = 0;
    v43 = nullptr;
    v19 = nullptr;
    v269 = 0;
    v279 = 0;
    v275 = 0;
    v288 = 0;
    v268 = 0;
    v250 = v278 + 3067;
    v284 = 4;
    v274 = -1;
    v282 = 4;
    v283 = 4;
    while (1) {
      v44 = v38 + (v40 << 6);
      v45 = *(unsigned __int8*)(v44 + 4);
      v46 = *(unsigned __int8*)(v44 + 2);
      v47 = *(unsigned __int8*)(v44 + 3);
      if (v39 == -1 && v45 == 23) {
        v39 = 0;
        goto LABEL_56;
      }
      if (v19 == v43 || (v42 & 1 | (v45 == 24)) == 0) {
      LABEL_86:
        if (v45 == 21 && v39 == -1) {
          v63 = v44 + 12LL * (unsigned int)v46;
          v64 = *(__int16*)(v63 + 18);
          if (v64 < 1) {
            v39 = -1;
            goto LABEL_56;
          }
          v65 = *(__int16*)(v63 + 16);
          v66 = v19;
          v67 = *((_DWORD*)&v303_.v303 + v46);
          if (v65 <= 0) {
            v67 &= ~(v67 >> 31);
            *((_DWORD*)&v303_.v303 + v46) = v67;
          }
          v39 = -1;
          BYTE4(v277) = 1;
          game_183ba60(v291, 0, 1, 0, v46, v46, v64, 1, 0x64u, 0, v67 == 0, 21,
                       0, -1),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          v38 = v278 + 3064;
          goto LABEL_101;
        }
        v59 = (unsigned __int8)v284 == 4 && v45 == 5;
        if ((unsigned __int8)v284 == 4 && v45 == 5) {
          v60 = v46;
        }
        else {
          v60 = v284;
        }
        if (v45 == 17) {
          v60 = 4;
        }
        v284 = v60;
        if (v45 == 4) {
          v61 = *(__int16*)(v44 + 18 + 12LL * v47) < 0;
          v62 = *(__int16*)(v44 + 18 + 12LL * (unsigned int)v46) < 0;
        }
        else {
          v61 = false;
          v62 = false;
        }
        v69 = v45 == 11 || (unsigned int)(v45 - 3) < 2;
        v70 = (_DWORD)v46 == 2 && v69;
        if (v45 == 8) {
          v71 = v273 + 3080;
          v72 = *(unsigned __int8*)(v273 + 3068);
          if (v72 == 1) {
            v73 = *(unsigned __int8*)(v271 + 792);
            v74 =
                *(_WORD*)(v273 + 3080 + 12LL * *(unsigned __int8*)(v271 + 792));
            goto LABEL_117;
          }
          do {
            v75 = *(unsigned __int8*)(v71 + 52);
            v71 += 64;
          } while (v75 != 1);
          v73 = *(unsigned __int8*)(v271 + 792);
          v74 = *(_WORD*)(v71 + 12LL * *(unsigned __int8*)(v271 + 792));
          v76 = v273 + 3064;
          if (v72 != 24) {
          LABEL_117:
            v76 = v273 + 3064;
            do {
              v77 = *(unsigned __int8*)(v76 + 68);
              v76 += 64;
            } while (v77 != 24);
          }
          v78 = *(__int16*)(v76 + 12LL * v73 + 16) > v74;
        }
        else {
          v78 = false;
        }
        v79 = a1[19];
        if ((_DWORD)v46 == 4) {
          v80 = 0;
          if (v47 != 4) {
          LABEL_123:
            v81 = false;
            if (v80 != 0) {
              v82 = *(_QWORD*)(v79 + 760LL * v47 + 40);
              if (v82 != 0) {
                v83 = *(_QWORD*)(v80 + 440);
                if (v83 != 0) {
                  v84 = *(unsigned __int8*)(v83 + 16);
                  v85 = *(_QWORD*)(v82 + 440);
                  if (v85 != 0) {
                    goto LABEL_127;
                  }
                LABEL_143:
                  v86 = 9;
                  if (v84 != 3) {
                    goto LABEL_144;
                  }
                LABEL_145:
                  v81 = (unsigned int)(v86 - 1) < 2;
                }
                else {
                  v84 = 9;
                  v85 = *(_QWORD*)(v82 + 440);
                  if (v85 == 0) {
                    goto LABEL_143;
                  }
                LABEL_127:
                  v86 = *(unsigned __int8*)(v85 + 16);
                  if (v84 == 3) {
                    goto LABEL_145;
                  }
                LABEL_144:
                  if (v84 == 0) {
                    goto LABEL_145;
                  }
                  v81 = v86 == 0 || v86 == 3;
                }
              }
            }
          LABEL_152:
            v101 = v45 == 4 && v81;
            v286 = (v45 != 17) & (v59 | v286);
            v102 = v61 || v62 || v70;
            if (v45 == 3) {
              v102 = 1;
            }
            if (((v102 | v78) & 1) == 0 && v101 == 0) {
              goto LABEL_56;
            }
            v103 = v45 != 4 || v81;
            if ((v103 & 1) != 0) {
              v104 = 0;
              v105 = v47;
            }
            else {
              if (*(__int16*)(v44 + 12LL * v47 + 18) >= 0) {
                v105 = v46;
              }
              else {
                v105 = v47;
              }
              if (*(__int16*)(v44 + 12LL * v47 + 18) < 0 && (_DWORD)v46 == 2) {
                v104 = 0x1000000;
              }
              else {
                v104 = 0;
              }
            }
            v272 = v42;
            v108 = v45 == 3 || v45 == 11;
            if ((unsigned __int8)v46 == (unsigned __int8)v284) {
              v109 = v286;
            }
            else {
              v109 = 0;
            }
            if ((unsigned __int8)v46 == 2 && v108 != 0) {
              if (v45 != 11) {
                v110 = *(_WORD*)(v44 + 18);
                v111 = *(__int16*)(v44 + 48);
                v112 = *(__int16*)(v44 + 50);
                if (v110 == 0) {
                  v113 = v44 + 40;
                  goto LABEL_191;
                }
                goto LABEL_192;
              }
            LABEL_188:
              v114 = v44 + 12LL * v47;
              v115 = 0;
              v116 = -1;
              v111 = *(__int16*)(v114 + 24);
              v112 = *(__int16*)(v114 + 26);
              if (v78) {
              LABEL_264:
                v149 = *(_DWORD*)(v37 + 11256);
                if (v149 == 0) {
                  v152 = 0;
                  v115 = 0;
                  goto LABEL_337;
                }
                if (v149 >= 8) {
                  v153 = (__int16*)(v278 + 3082);
                  v154 = 0;
                  v115 = 0;
                  do {
                    v154 -= 8;
                    v155 = v153[224];
                    v156 = v115 + *v153 + v153[32] + v153[64] + v153[96] +
                           v153[128] + v153[160];
                    v157 = v153[192];
                    v153 += 256;
                    v115 = v156 + v157 + v155;
                  } while (-(__int64)(v149 & 0xFFFFFFF8) != v154);
                  v150 = -v154;
                  v151 = v149 & 7;
                  if ((v149 & 7) != 0) {
                    goto LABEL_272;
                  }
                }
                else {
                  v150 = 0;
                  v115 = 0;
                  v151 = v149 & 7;
                  if ((v149 & 7) == 0) {
                    goto LABEL_274;
                  }
                LABEL_272:
                  v158 = (__int16*)(v278 + 3082 + (v150 << 6));
                  v159 = v151;
                  do {
                    v160 = *v158;
                    v158 += 32;
                    --v159;
                    v115 += v160;
                  } while (v159 != 0);
                }
              LABEL_274:
                if (v149 >= 8) {
                  v162 = (__int16*)(v278 + 3094);
                  v163 = 0;
                  v152 = 0;
                  do {
                    v163 -= 8;
                    v164 = v162[224];
                    v165 = v152 + *v162 + v162[32] + v162[64] + v162[96] +
                           v162[128] + v162[160];
                    v166 = v162[192];
                    v162 += 256;
                    v152 = v165 + v166 + v164;
                  } while (-(__int64)(v149 & 0xFFFFFFF8) != v163);
                  v161 = -v163;
                  if ((v149 & 7) != 0) {
                    goto LABEL_280;
                  }
                }
                else {
                  v161 = 0;
                  v152 = 0;
                  if ((v149 & 7) == 0) {
                    goto LABEL_337;
                  }
                LABEL_280:
                  v167 = (__int16*)(v278 + 3094 + (v161 << 6));
                  do {
                    v168 = *v167;
                    v167 += 32;
                    --v151;
                    v152 += v168;
                  } while (v151 != 0);
                }
              LABEL_337:
                v182 = *(unsigned __int8*)(v44 + 5);
                if (v43 == v19) {
                  if ((unsigned __int64)v19 >= v279) {
                    v255 = *(unsigned __int8*)(v44 + 5);
                    v257 = v116;
                    v259 = v112;
                    v261 = v111;
                    v192 = (__int64)(v279 - (_QWORD)v19) >> 4;
                    v263 = v109;
                    v266 = v108;
                    v253 = v104;
                    v251 = v19;
                    if (v192 <= 1) {
                      v192 = 1;
                    }
                    v193 = 0x7FFFFFFFFFFFFFFLL;
                    if (v279 - (unsigned __int64)v19 < 0x7FFFFFFFFFFFFFE0LL) {
                      v193 = v192;
                    }
                    if (v193 >> 59 != 0) {
                      goto LABEL_472;
                    }
                    v194 = v105;
                    v195 = v101;
                    v280 = 32 * v193;
                    v196 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v193, 16,
                        0),
                    v19 = COERCE_AS(
                        __typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                    v197 = (unsigned __int8*)v196;
                    *(_BYTE*)v196 = v45;
                    if (v195 != 0) {
                      v198 = 0x10000;
                    }
                    else {
                      v198 = 0;
                    }
                    *(_BYTE*)(v196 + 1) = v46;
                    *(_BYTE*)(v196 + 2) = v194;
                    if (v263 != 0) {
                      v199 = 256;
                    }
                    else {
                      v199 = 0;
                    }
                    *(_DWORD*)(v196 + 3) = v199 | v266 | v198 | v253;
                    v279 = v196 + v280;
                    *(_DWORD*)(v196 + 8) = v261;
                    *(_DWORD*)(v196 + 12) = v259;
                    *(_DWORD*)(v196 + 24) = v115;
                    *(_DWORD*)(v196 + 28) = v257;
                    *(_DWORD*)(v196 + 16) = v152;
                    *(_DWORD*)(v196 + 20) = v255;
                    v200 = v196 + 32;
                    if (v251 != nullptr) {
                      v201 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v201 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v201,
                          (__int64)v43),
                          v19 = COERCE_AS(
                              __typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                    }
                    v19 = (unsigned __int8*)v200;
                    v37 = v278;
                    v38 = v278 + 3064;
                    v42 = v272;
                    v43 = v197;
                    v41 = v40;
                    goto LABEL_56;
                  }
                LABEL_385:
                  *((_DWORD*)v19 + 4) = v152;
                  *((_DWORD*)v19 + 5) = v182;
                  *((_DWORD*)v19 + 6) = v115;
                  *((_DWORD*)v19 + 7) = v116;
                  v37 = v278;
                  v42 = v272;
                  v41 = v40;
                  if (v101 != 0) {
                    v202 = 0x10000;
                  }
                  else {
                    v202 = 0;
                  }
                  *v19 = v45;
                  v19[1] = v46;
                  if (v109 != 0) {
                    v203 = 256;
                  }
                  else {
                    v203 = 0;
                  }
                  v19[2] = v105;
                  *((_DWORD*)v19 + 2) = v111;
                  *((_DWORD*)v19 + 3) = v112;
                  *(_DWORD*)(v19 + 3) = v203 | v108 | v202 | v104;
                  v19 += 32;
                  goto LABEL_56;
                }
                if (*(v19 - 32) != v45 || *(v19 - 31) != (_DWORD)v46 ||
                    *(v19 - 30) != v105 || *(v19 - 29) != v108 ||
                    *(v19 - 28) != v109 || *(v19 - 27) != v101 ||
                    *((_DWORD*)v19 - 2) != v115 ||
                    *((_DWORD*)v19 - 1) != v116 ||
                    (signed __int32)*((_DWORD*)v19 - 3) >= v182) {
                  v276 = __PAIR64__(v152, v115);
                  v37 = v278;
                  v42 = 1;
                  v288 = v45;
                  if (v101 != 0) {
                    v191 = 0x10000;
                  }
                  else {
                    v191 = 0;
                  }
                  v282 = v105;
                  v283 = v46;
                  v274 = v116;
                  LOBYTE(v275) = v109;
                  LODWORD(v277) = *(unsigned __int8*)(v44 + 5);
                  v268 = __PAIR64__(v111, v112);
                  BYTE4(v275) = v108;
                  v269 = (v104 | (unsigned int)v191) >> 16;
                  goto LABEL_56;
                }
                if ((unsigned __int64)v19 < v279) {
                  goto LABEL_385;
                }
                v204 = v19 - v43;
                v205 = (v19 - v43) >> 5;
                v206 = v205 + 1;
                if ((unsigned __int64)(v205 + 1) >> 59 != 0) {
                  GameRoutine_183d430(),
                      v19 = COERCE_AS(
                          __typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
                if ((__int64)(v279 - (_QWORD)v43) >> 4 > v206) {
                  v206 = (__int64)(v279 - (_QWORD)v43) >> 4;
                }
                if (v279 - (unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFE0LL) {
                  v207 = 0x7FFFFFFFFFFFFFFLL;
                }
                else {
                  v207 = v206;
                }
                if (v207 != 0) {
                  v252 = (v19 - v43) >> 5;
                  v256 = v182;
                  v258 = v116;
                  v260 = v112;
                  v262 = v111;
                  v254 = v105;
                  v264 = v109;
                  v267 = v108;
                  v281 = v101;
                  if (v207 >> 59 != 0) {
                    goto LABEL_472;
                  }
                  v208 = v104;
                  v209 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v207, 16, 0),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                  v101 = v281;
                  v104 = v208;
                  v109 = v264;
                  v108 = v267;
                  v116 = v258;
                  v205 = v252;
                  LOBYTE(v105) = v254;
                  v182 = v256;
                  v112 = v260;
                  v111 = v262;
                }
                else {
                  v209 = 0;
                }
                v210 = v209 + v204;
                *(_BYTE*)(v209 + v204 + 1) = v46;
                if (v101 != 0) {
                  v211 = 0x10000;
                }
                else {
                  v211 = 0;
                }
                v212 = (unsigned __int8*)(v210 - 32 * v205);
                *(_BYTE*)v210 = v45;
                *(_BYTE*)(v210 + 2) = v105;
                *(_DWORD*)(v210 + 8) = v111;
                *(_DWORD*)(v210 + 12) = v112;
                if (v109 != 0) {
                  v213 = 256;
                }
                else {
                  v213 = 0;
                }
                *(_DWORD*)(v210 + 16) = v152;
                *(_DWORD*)(v210 + 20) = v182;
                *(_DWORD*)(v210 + 24) = v115;
                *(_DWORD*)(v210 + 28) = v116;
                *(_DWORD*)(v210 + 3) = v213 | v108 | v211 | v104;
                v214 = v209 + 32 * v207;
                v66 = (unsigned __int8*)(v210 + 32);
                v279 = v214;
                memcpy(v210 - 32 * v205, (__int64)v43, v204),
                    v19 = COERCE_AS(
                        __typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                if (v43 != nullptr) {
                  v215 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v215 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v215,
                      (__int64)v43),
                      v19 = COERCE_AS(
                          __typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
                }
                v37 = v278;
                v38 = v278 + 3064;
                v42 = v272;
                v43 = v212;
                v41 = v40;
              LABEL_101:
                v19 = v66;
                goto LABEL_56;
              }
            LABEL_336:
              v152 = *(__int16*)(v44 + 12LL * v105 + 18);
              goto LABEL_337;
            }
            if (v45 == 11) {
              goto LABEL_188;
            }
            v117 = v44 + 12LL * (unsigned int)v46;
            v111 = *(__int16*)(v117 + 24);
            v112 = *(__int16*)(v117 + 26);
            v113 = v117 + 16;
          LABEL_191:
            v110 = *(_WORD*)(v113 + 2);
          LABEL_192:
            v115 = v110;
            v118 = *(_DWORD*)(v37 + 11256);
            if (v118 == 0) {
              goto LABEL_262;
            }
            v119 = (_BYTE*)(v278 + 3068);
            v120 = *(unsigned int*)(v37 + 11256);
            while (*v119 != 10 || (unsigned __int8)*(v119 - 2) != v47) {
              --v120;
              v119 += 64;
              if (v120 == 0) {
                goto LABEL_262;
              }
            }
            v121 = v79 + 760LL * v105;
            v122 = *(_QWORD*)(v121 + 40);
            if (v122 != 0) {
              v123 = *(_DWORD*)(v121 + 100);
              v124 = *(_DWORD*)(v121 + 92);
              v116 = -1;
              v125 = *(int*)(v121 + 96) - *(int*)(v121 + 88);
              v126 = v123 - v124;
              if ((((v123 - v124) | v125) & 0x80000000) == 0 &&
                  (*(_DWORD*)(v122 + 1872) & 0xFFF) != 0) {
                v127 = *(_DWORD*)(v122 + 592);
                if (v125 < v127 && v126 < v127) {
                  v129 = v125 + v127 * v126;
                  if ((v129 & 0x80000000) == 0) {
                    v130 = *(char*)(*(_QWORD*)(v122 + 600) + 4LL * v129 + 2);
                    if (v130 >= 1 &&
                        (*(_BYTE*)(*(_QWORD*)(v37 + 11264) + 11277LL) & 8) ==
                            0) {
                      if (v118 >= 4) {
                        v133 = (_DWORD*)(v278 + 3268);
                        v134 = 0;
                        v132 = 0;
                        do {
                          if (*((_BYTE*)v133 - 200) == 3 &&
                              *((unsigned __int8*)v133 - 201) == v47) {
                            v135 = *(v133 - 48);
                            if (v132 <= 1) {
                              v136 = 1;
                            }
                            else {
                              v136 = v132;
                            }
                            if ((v135 & 0x60) != 0) {
                              v136 = 2;
                            }
                            if ((v135 & 2) != 0) {
                              v132 = v136;
                            }
                          }
                          if (*((_BYTE*)v133 - 136) == 3 &&
                              *((unsigned __int8*)v133 - 137) == v47) {
                            v137 = *(v133 - 32);
                            if (v132 <= 1) {
                              v138 = 1;
                            }
                            else {
                              v138 = v132;
                            }
                            if ((v137 & 0x60) != 0) {
                              v138 = 2;
                            }
                            if ((v137 & 2) != 0) {
                              v132 = v138;
                            }
                          }
                          if (*((_BYTE*)v133 - 72) == 3 &&
                              *((unsigned __int8*)v133 - 73) == v47) {
                            v139 = *(v133 - 16);
                            if (v132 <= 1) {
                              v140 = 1;
                            }
                            else {
                              v140 = v132;
                            }
                            if ((v139 & 0x60) != 0) {
                              v140 = 2;
                            }
                            if ((v139 & 2) != 0) {
                              v132 = v140;
                            }
                          }
                          if (*((_BYTE*)v133 - 8) == 3 &&
                              *((unsigned __int8*)v133 - 9) == v47) {
                            v141 = *(_DWORD*)v133;
                            if (v132 <= 1) {
                              v142 = 1;
                            }
                            else {
                              v142 = v132;
                            }
                            if ((v141 & 0x60) != 0) {
                              v142 = 2;
                            }
                            if ((v141 & 2) != 0) {
                              v132 = v142;
                            }
                          }
                          v133 += 64;
                          v134 -= 4;
                        } while (-(__int64)(v118 & 0xFFFFFFFC) != v134);
                        v131 = -v134;
                      }
                      else {
                        v131 = 0;
                        v132 = 0;
                      }
                      v143 = v118 & 3;
                      if ((v118 & 3) != 0) {
                        v144 = (unsigned __int8*)(v250 + (v131 << 6));
                        v145 = v118 & 3;
                        do {
                          if (v144[1] == 3 && *v144 == v47) {
                            v146 = *(_DWORD*)(v144 + 9);
                            if ((v146 & 2) != 0) {
                              if (v132 <= 1) {
                                v132 = 1;
                              }
                              if ((v146 & 0x60) != 0) {
                                v132 = 2;
                              }
                            }
                          }
                          v144 += 64;
                          --v145;
                        } while (v145 != 0);
                      }
                      if (v132 != 0) {
                        if (v118 >= 4) {
                          v169 = (_DWORD*)(v278 + 3268);
                          v265 = v130;
                          v170 = 0;
                          v148 = 0;
                          v171 = v112;
                          do {
                            if (*((_BYTE*)v169 - 200) == 3 &&
                                *((unsigned __int8*)v169 - 201) == v47) {
                              v172 = *(v169 - 48);
                              if (v148 <= 1) {
                                v173 = 1;
                              }
                              else {
                                v173 = v148;
                              }
                              if ((v172 & 0x60) != 0) {
                                v173 = 2;
                              }
                              v112 = v171;
                              if ((v172 & 2) != 0) {
                                v148 = v173;
                              }
                            }
                            if (*((_BYTE*)v169 - 136) == 3 &&
                                *((unsigned __int8*)v169 - 137) == v47) {
                              v174 = *(v169 - 32);
                              if (v148 <= 1) {
                                v175 = 1;
                              }
                              else {
                                v175 = v148;
                              }
                              if ((v174 & 0x60) != 0) {
                                v175 = 2;
                              }
                              v112 = v171;
                              if ((v174 & 2) != 0) {
                                v148 = v175;
                              }
                            }
                            if (*((_BYTE*)v169 - 72) == 3 &&
                                *((unsigned __int8*)v169 - 73) == v47) {
                              v176 = *(v169 - 16);
                              if (v148 <= 1) {
                                v177 = 1;
                              }
                              else {
                                v177 = v148;
                              }
                              if ((v176 & 0x60) != 0) {
                                v177 = 2;
                              }
                              v112 = v171;
                              if ((v176 & 2) != 0) {
                                v148 = v177;
                              }
                            }
                            if (*((_BYTE*)v169 - 8) == 3 &&
                                *((unsigned __int8*)v169 - 9) == v47) {
                              v178 = *(_DWORD*)v169;
                              if (v148 <= 1) {
                                v179 = 1;
                              }
                              else {
                                v179 = v148;
                              }
                              if ((v178 & 0x60) != 0) {
                                v179 = 2;
                              }
                              v112 = v171;
                              if ((v178 & 2) != 0) {
                                v148 = v179;
                              }
                            }
                            v169 += 64;
                            v170 -= 4;
                          } while (-(__int64)(v118 & 0xFFFFFFFC) != v170);
                          v130 = v265;
                          v147 = -v170;
                        }
                        else {
                          v147 = 0;
                          v148 = 0;
                        }
                        if ((v118 & 3) != 0) {
                          v180 = (unsigned __int8*)(v250 + (v147 << 6));
                          do {
                            if (v180[1] == 3 && *v180 == v47) {
                              v181 = *(_DWORD*)(v180 + 9);
                              if ((v181 & 2) != 0) {
                                if (v148 <= 1) {
                                  v148 = 1;
                                }
                                if ((v181 & 0x60) != 0) {
                                  v148 = 2;
                                }
                              }
                            }
                            v180 += 64;
                            --v143;
                          } while (v143 != 0);
                        }
                        if (((v130 - v148) & ~((v130 - v148) >> 31)) >= 2) {
                          v116 = 2;
                        }
                        else {
                          v116 = (v130 - v148) & ~((v130 - v148) >> 31);
                        }
                        if (v78) {
                          goto LABEL_264;
                        }
                        goto LABEL_336;
                      }
                      goto LABEL_262;
                    }
                  }
                }
              }
            }
            else {
            LABEL_262:
              v116 = -1;
            }
            if (v78) {
              goto LABEL_264;
            }
            goto LABEL_336;
          }
        }
        else {
          v80 = *(_QWORD*)(v79 + 760LL * (unsigned int)v46 + 40);
          if (v47 != 4) {
            goto LABEL_123;
          }
        }
        v81 = false;
        goto LABEL_152;
      }
      v48 = v43[2];
      if (*(__int16*)(v278 + 3080 + ((__int64)v41 << 6) + 12 * v48) <= 0) {
        v49 = *((_DWORD*)&v303_.v303 + v48);
        if (v49 < 0) {
          v49 = v39;
        }
        *((_DWORD*)&v303_.v303 + v48) = v49;
        v48 = v43[2];
      }
      v50 = (unsigned __int64)(v19 - v43) >> 5;
      game_183ba60(v291, v39, v43[3], v43[5], v43[1], v48, *((_DWORD*)v43 + 4),
                   v50, *((_DWORD*)v43 + 2), *((_DWORD*)v43 + 3),
                   v39 == *((_DWORD*)&v303_.v303 + v48), *v43, v43[6],
                   *((_DWORD*)v43 + 7)),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v51 = *((_DWORD*)v43 + 6);
      if (v51 != 0) {
        v52 = v43[1];
        v53 = *v43;
        if (v53 == 3) {
          v54 = 0;
        }
        else {
          v54 = 2;
        }
        if (v52 == 2) {
          v55 = v54;
        }
        else {
          v55 = v43[1];
        }
        if (v51 >= 0) {
          v56 = *((_DWORD*)v43 + 6);
        }
        else {
          v56 = -v51;
        }
        game_183ba60(v291, v39, v51 > 0, 0, v52, v55, v56, v50,
                     *((_DWORD*)v43 + 2), *((_DWORD*)v43 + 3),
                     v39 == *((_DWORD*)&v303_.v303 + v43[1]), v53, v43[6],
                     *((_DWORD*)v43 + 7)),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v38 = v278 + 3064;
      if (v288 != 0) {
        if (v283 != 4 || (v57 = v282, v282 != 4)) {
          if (*v43 != 11) {
            if ((unsigned __int64)v43 >= v279) {
              v92 = (__int64)(v279 - (_QWORD)v43) >> 4;
              if (v92 <= 1) {
                v92 = 1;
              }
              v93 = 0x7FFFFFFFFFFFFFFLL;
              if (v279 - (unsigned __int64)v43 < 0x7FFFFFFFFFFFFFE0LL) {
                v93 = v92;
              }
              if (v93 >> 59 != 0) {
              LABEL_472:
                GameRoutine_60a210(),
                    v19 = COERCE_AS(
                        __typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
              v94 = 32 * v93;
              v95 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v93, 16, 0),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              v96 = v95 + v94;
              v97 = (unsigned __int8*)v95;
              v98 = v95 + 32;
              v279 = v96;
              *(_BYTE*)v95 = v288;
              *(_BYTE*)(v95 + 2) = v282;
              *(_BYTE*)(v95 + 1) = v283;
              *(_DWORD*)(v95 + 3) =
                  (v269 << 16) | ((unsigned __int8)v275 << 8) | BYTE4(v275);
              *(_DWORD*)(v95 + 8) = HIDWORD(v268);
              *(_DWORD*)(v95 + 12) = v268;
              *(_DWORD*)(v95 + 16) = HIDWORD(v276);
              *(_DWORD*)(v95 + 20) = v277;
              *(_DWORD*)(v95 + 24) = v276;
              *(_DWORD*)(v95 + 28) = v274;
              v99 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v99 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, (__int64)v43),
                  v19 = COERCE_AS(
                      __typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              v38 = v278 + 3064;
              v19 = (unsigned __int8*)v98;
              v288 = 0;
              v275 = 0;
              v276 = 0;
              v43 = v97;
              LODWORD(v277) = 0;
              v274 = -1;
              v282 = 4;
              v283 = 4;
            }
            else {
              v19 = v43 + 32;
              v87 = v288;
              v288 = 0;
              *v43 = v87;
              v88 = v282;
              v89 = v283;
              *(_DWORD*)(v43 + 3) =
                  (v269 << 16) | ((unsigned __int8)v275 << 8) | BYTE4(v275);
              v282 = 4;
              v283 = 4;
              v43[1] = v89;
              v43[2] = v88;
              *((_DWORD*)v43 + 6) = v276;
              *((_DWORD*)v43 + 7) = v274;
              v274 = -1;
              *((_DWORD*)v43 + 2) = HIDWORD(v268);
              *((_DWORD*)v43 + 3) = v268;
              v91 = HIDWORD(v276);
              v90 = v277;
              v275 = 0;
              v276 = 0;
              LODWORD(v277) = 0;
              *((_DWORD*)v43 + 4) = v91;
              *((_DWORD*)v43 + 5) = v90;
            }
            goto LABEL_84;
          }
          v288 = 0;
          v275 = 0;
          v276 = 0;
          LODWORD(v277) = 0;
          v274 = -1;
          v57 = 4;
        }
        v282 = v57;
        v283 = v57;
      }
      else {
        v288 = 0;
      }
      v19 = v43;
    LABEL_84:
      ++v39;
      v42 = 0;
      v41 = v40;
      if (v45 != 23) {
        goto LABEL_86;
      }
      v41 = v40;
    LABEL_56:
      if (++v40 >= *(int*)(v37 + 11256)) {
        v14 = a1;
        v216 = BYTE4(v277);
        goto LABEL_415;
      }
    }
  }
  v216 = 0;
  v43 = nullptr;
  v39 = -1;
LABEL_415:
  v217 = *v14;
  LOBYTE(v301_.v301) = 0;
  v218 = (*(__int64 (**)(__int64*, __int64*, unsigned __int8*))(v217 + 40))(
      v14, &v301_.v301, v19),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((a2 & 1) == 0) {
    v222 = v218 ^ 1;
    v223 = (int)v303_.v303 > -1;
    if (v303_.v303 < 0) {
      v224 = v218 & v223;
      v225 = v223 & v222;
    }
    else {
      v224 = v222 | ((int)v303_.v303 > -1);
      v225 = v218 | ((int)v303_.v303 > -1);
    }
    v249 = "PlayerHP_Dead";
    v219 = fw_memory_g_heap_manager_ptr;
    if ((LayoutAccessor_1563280(a1 + 3, (__int64)"PlayerHP_Dead", 0) & 1) !=
            0 ||
        (v249 = "TargetHP_Dead",
         (LayoutAccessor_1563280(a1 + 3, (__int64)"TargetHP_Dead", 0) & 1) !=
             0)) {
      *((float*)a1 +
        50) = LayoutAccessor_15637c0(a1 + 3, (__int64)v249, 0),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    if ((v224 & 1) != 0) {
      v14 = a1;
      if ((LayoutAccessor_1563280(a1 + 3, (__int64)"PlayerHP_Dead", 0) & 1) ==
          0) {
        GameHr_1562680((__int64)(a1 + 3), "PlayerHP_Dead",
                       0x1.0000000000000p+0f),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      LayoutAccessor_15636c0((__int64)(a1 + 3), (__int64)"PlayerHP_Dead", 0,
                             *((float*)a1 + 50)),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((v225 & 1) == 0) {
      LABEL_465:
        LayoutAccessor_1562cf0((__int64)(v14 + 3), "TargetHP_Default"),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if (v43 == nullptr) {
          goto LABEL_420;
        }
        goto LABEL_417;
      }
    }
    else {
      v14 = a1;
      LayoutAccessor_1562cf0((__int64)(a1 + 3), "PlayerHP_Default"),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if ((v225 & 1) == 0) {
        goto LABEL_465;
      }
    }
    if ((LayoutAccessor_1563280(v14 + 3, (__int64)"TargetHP_Dead", 0) & 1) ==
        0) {
      GameHr_1562680((__int64)(v14 + 3), "TargetHP_Dead",
                     0x1.0000000000000p+0f),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    LayoutAccessor_15636c0((__int64)(v14 + 3), (__int64)"TargetHP_Dead", 0,
                           *((float*)v14 + 50)),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v43 == nullptr) {
      goto LABEL_420;
    }
  LABEL_417:
    v220 = 128;
    if (*(_QWORD*)(*(_QWORD*)v219 + 200LL) == 0) {
      v220 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v219 + v220, (__int64)v43),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    goto LABEL_420;
  }
  LayoutAccessor_1562cf0((__int64)(v14 + 3), "PlayerHP_Default"),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LayoutAccessor_1562cf0((__int64)(v14 + 3), "TargetHP_Default"),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v219 = fw_memory_g_heap_manager_ptr;
  if (v43 != nullptr) {
    goto LABEL_417;
  }
LABEL_420:
  if ((*((_BYTE*)v14 + 193) & 1) != 0) {
    if (*((_BYTE*)v14 + 194) == 1) {
      v221 = game_util_Format("AttackTurn%02d_Skill", v39),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      goto LABEL_429;
    }
  }
  else {
    if (v39 != 0) {
      v226 = v39;
    }
    else {
      v226 = v216;
    }
    v221 = game_util_Format("AttackTurn%02d", v226),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LABEL_429:
    LayoutAccessor_1562cf0((__int64)(v14 + 3), v221),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v227 = 0;
  if (v296 == 1 && (v294_.v295 & 0x100) != 0) {
    v227 = (*(__int64 (**)(__int64*))(*v14 + 48))(v14) ^ 1,
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)(v14 + 3),
                                   (__int64)"Player_Order_Bg", v227 & 1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  ui_LayoutAccessor_SetPaneVisible((__int64)(v14 + 3),
                                   (__int64)"Target_Order_Bg", v227 & 1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (HIBYTE(v294_.v295) == 1) {
    v303_.v309 = -1;
    v303_.v310 = -1;
    v303_.v311 = -1;
    v303_.v312 = -1;
    v228 = msg_MessageManager_instance__ptr[0];
    v303_.v313 = -1;
    v303_.v314 = -1;
    v229 = *msg_MessageManager_instance__ptr[0];
    if ((_BYTE)v294_.v295 != 0) {
      v230 = "MID_Btl_LastAttack";
    }
    else {
      v230 = "MID_Btl_FirstAttack";
    }
    if ((_BYTE)v294_.v295 != 0) {
      v231 = "MID_Btl_FirstAttack";
    }
    else {
      v231 = "MID_Btl_LastAttack";
    }
    v303_.v315 = -1;
    v303_.v316 = -1;
    v303_.v317 = -1;
    v303_.v318 = -1;
    v303_.v319 = -1;
    v303_.v320 = -1;
    v303_.v305 = 0xFFFF0004FFFF0002LL;
    v303_.v306 = 0xFFFF0006FFFF0005LL;
    v303_.v307 = -65529;
    v303_.v308 = -65528;
    v232 = GameData_212e348 + 2;
    v303_.v303 = (__int64)(GameData_212e348 + 2);
    v303_.v304 = 0xFFFF0001FFFF0000LL;
    v303_.v321 = 8;
    v233 = GameRoutine_a4dbe0(v229, v230, 0),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v233 != nullptr) {
      v234 = (__int64)v233;
      v235 = ui_LayoutAccessor_FindTextBox(a1 + 3, (__int64)"T_Player_Order"),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v235 != 0) {
        GameRoutine_156c5d0(v235, v234, 0),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    v236 = *v228;
    v303_.v309 = -1;
    v303_.v310 = -1;
    v303_.v311 = -1;
    v303_.v312 = -1;
    v303_.v313 = -1;
    v303_.v314 = -1;
    v303_.v315 = -1;
    v303_.v316 = -1;
    v303_.v317 = -1;
    v303_.v318 = -1;
    v303_.v319 = -1;
    v303_.v320 = -1;
    v303_.v303 = (__int64)v232;
    v303_.v304 = 0xFFFF0001FFFF0000LL;
    v303_.v305 = 0xFFFF0004FFFF0002LL;
    v303_.v306 = 0xFFFF0006FFFF0005LL;
    v303_.v321 = 8;
    v303_.v307 = -65529;
    v303_.v308 = -65528;
    v237 = GameRoutine_a4dbe0(v236, v231, 0),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v237 != nullptr) {
      v238 = (__int64)v237;
      v239 = ui_LayoutAccessor_FindTextBox(a1 + 3, (__int64)"T_Target_Order"),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v239 != 0) {
        GameRoutine_156c5d0(v239, v238, 0),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  }
  v240 = HIDWORD(v297);
  if (SHIDWORD(v297) < 1) {
    v241 = a1;
    v240 = 1;
  LABEL_450:
    HIDWORD(v297) = v240;
  }
  else {
    v241 = a1;
    if (HIDWORD(v297) >= 4) {
      v240 = 3;
      goto LABEL_450;
    }
  }
  if ((int)v297 < 1) {
    v242 = 1;
  LABEL_455:
    LODWORD(v297) = v242;
  }
  else if ((unsigned int)v297 >= 3) {
    v242 = 2;
    goto LABEL_455;
  }
  GameHr_1562680((__int64)(v241 + 3),
                 (const char*)&GameData_1c0dbf8 +
                     *((int*)&GameData_1c0dbf8 + (unsigned int)(v240 - 1)),
                 0x1.0000000000000p+0f),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  GameHr_1562680((__int64)(v241 + 3),
                 (const char*)GameData_1c0dc3c +
                     GameData_1c0dc3c[(int)v297 - 1],
                 0x1.0000000000000p+0f),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v243 = LayoutAccessor_155fbe0(v241 + 3, "L_Player_Turn"),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  GameHr_1562680((__int64)v243, "Disable", 0x1.0000000000000p+0f),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v244 = LayoutAccessor_155fbe0(v241 + 3, "L_Player_TurnAdd"),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  GameHr_1562680((__int64)v244, "Disable", 0x1.0000000000000p+0f),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v245 = LayoutAccessor_155fbe0(v241 + 3, "L_Player_TurnAdd2"),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  GameHr_1562680((__int64)v245, "Disable", 0x1.0000000000000p+0f),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v246 = LayoutAccessor_155fbe0(v241 + 3, "L_Target_Turn"),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  GameHr_1562680((__int64)v246, "Disable", 0x1.0000000000000p+0f),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v247 = LayoutAccessor_155fbe0(v241 + 3, "L_Target_TurnAdd"),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  return GameHr_1562680((__int64)v247, "Disable", 0x1.0000000000000p+0f);
}

#pragma GCC visibility pop
