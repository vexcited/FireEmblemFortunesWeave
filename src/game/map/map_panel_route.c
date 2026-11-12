#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f1cba0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_MapPanelRoute_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelRoute_Destructor(_QWORD* a1);
__int64 MapPanelRoute_DeletingDestructor(_QWORD* a1);
extern __int64 (*game_map_RouteMeshData_vtable[])();
extern __int64* GameData_212f8b0[14];
_QWORD* MapPanelRoute_f1cba0(_QWORD* result);
__int64* GameRoutine_64dfe0(__int64* result, __int64*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_f1c4a0(__int64**, __int64);
__int64 GameRoutine_fcabb0(__int64, __int64, int, char, char, __int64, __int64);
__int64 GameRoutine_fcc820(__int64, float32x4_t*, float32x4_t*, __int128*,
                           __int64, unsigned __int8);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_map_f54910(__int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212cf50;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64 GameData_212d020[5];
extern __int64 GameData_21a60e0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
unsigned __int64 HeightCellMap_1002e20(unsigned __int64 result,
                                       unsigned __int8*, int);
void MapPanelRoute_Unknown3(__int64 a1);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
void PrimitiveDrawStack_f51430(__int64, __int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapPanelRoute_Unknown4(__int64 a1);
__int64 GameHr_fcabb0(__int64, __int64, int, char, char, __int64, __int64);
__int64 MapDrawConst_fcc820(__int64, float32x4_t*, float32x4_t*, __int128*,
                            unsigned __int64*, unsigned __int8);
__int64 game_map_f1c4a0(__int64**, __int64);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

void MapPanelRoute_Unknown3(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64** v3;
  _QWORD* v4;
  _DWORD* v5;
  __int64* v6;
  _BOOL4 v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  float32x4_t v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;
  char* v24;
  char v25;
  float v26;
  float v27;
  unsigned int v29;
  float v30;
  float v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  float32x4_t v43;
  float32x4_t* v44;
  float32x4_t* v45;
  float32x4_t* v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  bool v50;
  float32x4_t v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  float32x4_t v55;
  float32x4_t* v56;
  float32x4_t* v57;
  float32x4_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  __int128 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  _BOOL4 v80;
  _DWORD* v81;
  __int64** v82;
  void (***v83)(_QWORD);
  void (***v84)(_QWORD);
  void (**v85)(_QWORD);
  __int64 v86;
  unsigned __int8 v87;
  __int64 v88;
  __int64 v89;
  void (***v90)(_QWORD);
  void (***v91)(_QWORD);
  void (**v92)(_QWORD);
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  __int64 v98;
  char v99;
  float v100;
  float* v101;
  __int64 v102;
  float v103;
  float v104;
  float v105;
  float32x4_t* v106;
  float32x4_t* v107;
  __int64 (**v108)();
  __int64 v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  unsigned __int64 v118;
  float32x4_t* v119;
  float32x4_t* v120;
  float32x4_t* v121;
  __int64* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  void (***v129)(_QWORD);
  __int64 v130;
  __int64* v131;
  __int64 (**v132)();
  __int64 v133;
  void (***v134)(_QWORD);
  void (**v135)(_QWORD);
  __int64 v136;
  __int64* v137;
  float v138;
  float32x4_t v139;
  _DWORD* v140;
  float32x4_t v141;
  __int64* v142;
  unsigned int v144;
  unsigned int v145;
  struct {
    float32x4_t v146[6];
    float32x4_t* v147;
    __int64 v148;
    char gap176_[8];
    __int64 v149;
    __int64 v150;
    char gap200_[40];
    float32x4_t v151;
    char gap256_[44];
    char v152;
    char gap301_[3];
    int v153;
    char gap308_[4];
    __int64 v154;
    __int64 v155;
  } v146_;
  struct {
    unsigned __int64 v156;
    unsigned __int64 v157;
    unsigned __int64 v158;
    unsigned __int64 v159;
    unsigned __int64 v160;
  } v156_;
  struct {
    __int128 v161;
    __int128 v162;
    __int128 v163;
    __int128 v164;
    float32x4_t v165;
  } v161_;
  struct {
    float32x4_t v166;
    __int128 v167;
    __int128 v168;
    __int128 v169;
    __int128 v170;
  } v166_;
  struct {
    char v171;
    char v172;
    __int16 v173;
  } v171_;
  struct {
    unsigned __int64 v174;
    float v175;
    float v176;
    float v177;
    float v178;
    float v179;
    float v180;
    __int64 v181;
  } v174_;

  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = a1;
  if (*(_BYTE*)(a1 + 8) == 1) {
    v3 = (__int64**)(a1 + 16);
    v2 = *(_QWORD**)(a1 + 16);
    v4 = (_QWORD*)(a1 + 24);
    if (v2 != (_QWORD*)(a1 + 24)) {
      do {
        v15 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v15 + 48))((void*)&v2[6]) & 1) != 0) {
          v16 = 1036831949;
        }
        else {
          v16 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v17 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v16;
        if (v17 != nullptr) {
          do {
            v18 = v17;
            v17 = (_QWORD*)*v17;
          } while (v17 != nullptr);
        }
        else {
          do {
            v18 = (_QWORD*)v2[2];
            v50 = v2 == (_QWORD*)*v18;
            v2 = v18;
          } while (!v50);
        }
        v2 = v18;
      } while (v18 != v4);
    }
    v5 = (_DWORD*)*GameData_212cfd8[0];
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1) & 1) != 0 &&
        v5[40] != 0) {
      *(_QWORD*)(v1 + 60) = 0xC2C80000C2C80000LL;
      v141 = (__typeof__(v141)){0};
      if (*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) >= 3u &&
          *(_BYTE*)(*GameData_212cfd0[0] + 8) != 0 &&
          (v6 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8))) !=
              nullptr &&
          v6[49] != 0 && (*((_BYTE*)v6 + 417) & 0x1C) == 0) {
        v137 = v6;
        if ((*(float (**)(__int64*))(v6[19] + 16))(v6 + 19) <= 0x0.0p+0f) {
          v7 = false;
          v8 = 1;
        }
        else {
          v8 = *((_DWORD*)v137 + 148);
          v7 = v8 > 1;
          v138 = (float)(unsigned int)(v8 - 1) * 0x1.4000000000000p+1f;
          if (v8 <= 0) {
            v138 = 0x0.0p+0f;
          }
          LANES128(v139).n128_u64[0] = LODWORD(v138);
          LANES128(v139).n128_u64[1] = LODWORD(v138);
          v141 = v139;
        }
        v1 = a1;
      }
      else {
        v7 = false;
        v8 = 1;
      }
      v174_.v181 = 0x3E0000003F200000LL;
      *(float*)&v174_.v174 = 0x1.0000000000000p-1f + 0x1.0000000000000p-10f;
      *((float*)&v174_.v174 + 1) = 0x0.0p+0f + 0x1.0000000000000p-10f;
      v174_.v175 = 0x1.8000000000000p-1f + -0x1.0000000000000p-10f;
      v174_.v176 = 0x0.0p+0f + 0x1.0000000000000p-10f;
      v174_.v177 = 0x1.8000000000000p-1f + -0x1.0000000000000p-10f;
      v174_.v178 = 0x1.0000000000000p-2f + -0x1.0000000000000p-10f;
      v174_.v179 = 0x1.0000000000000p-1f + 0x1.0000000000000p-10f;
      v174_.v180 = 0x1.0000000000000p-2f + -0x1.0000000000000p-10f;
      v9 = v5[43];
      v10 = v5[44];
      v171_.v173 = 0;
      v12 = *(_QWORD*)GameData_212d020[0];
      v171_.v171 = v9;
      v171_.v172 = v10;
      v11 = *(_QWORD*)(v12 + 8);
      LODWORD(v12) = v5[40];
      v166_.v170 = (__typeof__(v166_.v170)){0};
      v166_.v169 = (__typeof__(v166_.v169)){0};
      v166_.v168 = (__typeof__(v166_.v168)){0};
      v166_.v167 = (__typeof__(v166_.v167)){0};
      v166_.v166 = (__typeof__(v166_.v166)){0};
      v161_.v165 = (__typeof__(v161_.v165)){0};
      v161_.v164 = (__typeof__(v161_.v164)){0};
      v161_.v163 = (__typeof__(v161_.v163)){0};
      v161_.v162 = (__typeof__(v161_.v162)){0};
      v161_.v161 = (__typeof__(v161_.v161)){0};
      if ((v12 & 0x80000000) == 0) {
        v13 = 0;
        v14 = 0;
        v140 = v5 + 8;
        v142 = GameData_212f8b0[0] + 2;
        do {
          if (v13 == (unsigned int)v12) {
            v29 = 0;
          }
          else {
            v29 = *((unsigned __int8*)v140 + v13);
          }
          v156_.v159 = 0;
          v156_.v160 = 0;
          v156_.v157 = 0;
          v156_.v158 = 0;
          v156_.v156 = 0;
          v144 = v14;
          v145 = v29;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v93 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v144;
            v29 = v145;
            if (v93 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v144;
              v29 = v145;
            }
          }
          v156_.v156 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v94 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v144;
            v29 = v145;
            if (v94 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v144;
              v29 = v145;
            }
          }
          v156_.v157 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v95 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v144;
            v29 = v145;
            if (v95 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v144;
              v29 = v145;
            }
          }
          v156_.v158 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v96 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v144;
            v29 = v145;
            if (v96 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v144;
              v29 = v145;
            }
          }
          v156_.v159 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v97 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v144;
            v29 = v145;
            if (v97 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release_alt1((__int64)&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v144;
              v29 = v145;
            }
          }
          v156_.v160 = GameData_21a60e0;
          if (v29 != 0) {
            if (v14 != 0) {
              v30 = 0x1.4000000000000p-1f;
              if ((v14 & 0xA) != 0 && (v29 & 0xA) != 0) {
                v31 = 0x1.8000000000000p-2f;
                v32 = 1056931840;
                v33 = 1061142528;
                v34 = 1048608768;
                goto LABEL_81;
              }
              if ((v14 & 5) != 0 && (v29 & 5) != 0) {
                v31 = 0x1.0000000000000p-3f;
                v32 = 1048510464;
                v33 = 1061142528;
                v34 = 981467136;
                goto LABEL_81;
              }
              if ((v14 & 2) != 0) {
                if ((v29 & 1) != 0) {
                  v31 = 0x1.c000000000000p-1f;
                LABEL_80:
                  v32 = 1065336832;
                  v33 = 1061142528;
                  v34 = 1061175296;
                LABEL_81:
                  v36 = v34;
                  v37 = 1056980992;
                LABEL_82:
                  v40 = v37;
                LABEL_83:
                  v156_.v156 = __PAIR64__(v36, v40);
                  v156_.v157 = __PAIR64__(v36, v33);
                  v156_.v158 = __PAIR64__(v32, v33);
                  v156_.v159 = __PAIR64__(v32, v40);
                  v156_.v160 = __PAIR64__(LODWORD(v31), LODWORD(v30));
                  goto LABEL_84;
                }
                if ((v29 & 4) != 0) {
                  goto LABEL_72;
                }
              }
              else if ((v14 & 8) != 0) {
                v30 = 0x1.c000000000000p-1f;
                if ((v29 & 1) != 0) {
                  v31 = 0x1.c000000000000p-1f;
                  goto LABEL_158;
                }
                if ((v29 & 4) != 0) {
                  v31 = 0x1.4000000000000p-1f;
                  goto LABEL_160;
                }
              }
              else {
                if ((v14 & 1) != 0) {
                  if ((v29 & 2) != 0) {
                    v31 = 0x1.4000000000000p-1f;
                    v30 = 0x1.c000000000000p-1f;
                  LABEL_160:
                    v32 = 1061142528;
                    v33 = 1065336832;
                    v36 = 1056980992;
                    v37 = 1061175296;
                    goto LABEL_82;
                  }
                  if ((v29 & 8) == 0) {
                    goto LABEL_84;
                  }
                LABEL_72:
                  v31 = 0x1.4000000000000p-1f;
                  v33 = 1061142528;
                  v39 = 1056980992;
                  goto LABEL_59;
                }
                if ((v14 & 4) != 0) {
                  v31 = 0x1.c000000000000p-1f;
                  if ((v29 & 2) == 0) {
                    if ((v29 & 8) == 0) {
                      goto LABEL_84;
                    }
                    goto LABEL_80;
                  }
                  v30 = 0x1.c000000000000p-1f;
                LABEL_158:
                  v33 = 1065336832;
                  v39 = 1061175296;
                  goto LABEL_59;
                }
              }
            }
            else {
              v31 = 0x1.8000000000000p-2f;
              if ((v29 & 2) != 0) {
                v30 = 0x1.8000000000000p-2f;
                v33 = 1056931840;
                v39 = 1048608768;
              LABEL_59:
                v40 = v39;
                v32 = v33;
                v36 = v39;
                goto LABEL_83;
              }
              if ((v29 & 8) != 0) {
                v31 = 0x1.0000000000000p-3f;
                v30 = 0x1.8000000000000p-2f;
                v32 = 1048510464;
                v33 = 1056931840;
                v38 = 981467136;
                goto LABEL_69;
              }
              v30 = 0x1.0000000000000p-3f;
              if ((v29 & 1) != 0) {
                v31 = 0x1.0000000000000p-3f;
                v33 = 1048510464;
                v39 = 981467136;
                goto LABEL_59;
              }
              if ((v29 & 4) != 0) {
                v32 = 1056931840;
                v33 = 1048510464;
                v35 = 1048608768;
                goto LABEL_53;
              }
            }
          }
          else {
            v31 = 0x1.c000000000000p-1f;
            v30 = 0x1.8000000000000p-2f;
            if ((v14 & 2) != 0) {
              v32 = 1065336832;
              v33 = 1056931840;
              v38 = 1061175296;
            LABEL_69:
              v36 = v38;
              v37 = 1048608768;
              goto LABEL_82;
            }
            if ((v14 & 8) != 0) {
              v32 = 1061142528;
              v33 = 1056931840;
              v36 = 1056980992;
              v41 = 1048608768;
            LABEL_74:
              v40 = v41;
              v31 = 0x1.4000000000000p-1f;
              goto LABEL_83;
            }
            v30 = 0x1.0000000000000p-3f;
            if ((v14 & 1) != 0) {
              v32 = 1061142528;
              v33 = 1048510464;
              v36 = 1056980992;
              v41 = 981467136;
              goto LABEL_74;
            }
            if ((v14 & 4) != 0) {
              v32 = 1065336832;
              v33 = 1048510464;
              v35 = 1061175296;
            LABEL_53:
              v36 = v35;
              v37 = 981467136;
              goto LABEL_82;
            }
          }
        LABEL_84:
          game_map_f54910((__int64)v146_.v146),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          LANES128(v146_.v146[0]).n128_u64[0] =
              (unsigned __int64)game_map_RouteMeshData_vtable;
          v146_.v154 = 0;
          v146_.v155 = 0;
          GameHr_fcabb0(v1, (__int64)v146_.v146, 1, v171_.v171, v171_.v172,
                        (__int64)&v156_.v156, (__int64)GameData_212c958),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
            v98 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v98;
            __cxa_guard_release_alt1((__int64)&GameData_21a6130),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v43 = COERCE_AS(float32x4_t, GameData_21a6120);
          v45 = v146_.v147;
          v44 = (float32x4_t*)v146_.v148;
          if ((float32x4_t*)v146_.v148 != v146_.v147) {
            v46 = v146_.v147;
            do {
              v47 = v46[1];
              v46 += 4;
              v43 = vaddq_f32(v43, v47);
            } while (v46 != (float32x4_t*)v146_.v148);
            v43 = vmulq_n_f32(
                v43, 0x1.0000000000000p+0f /
                         (float)(unsigned __int64)((v146_.v148 -
                                                    (__int64)v146_.v147) >>
                                                   6));
            LANES128(v43).n128_u32[3] = 0;
          }
          v48 = vsubq_f32(v43, v146_.v151);
          v49 = vmulq_f32(v48, v48);
          LANES128(v49).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v49, v49, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
                  .n64_u64[0];
          v50 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
                      .n64_f32[0] <= 0x0.0p+0f ||
              v146_.v148 == (_QWORD)v146_.v147;
          if (!v50) {
            do {
              v45[1] = vsubq_f32(v45[1], v48);
              v45 += 4;
            } while (v45 != v44);
          }
          LANES128(v51).n128_u64[0] = LANES128(v43).n128_u64[0];
          LANES128(v51).n128_u64[1] = LANES128(v43).n128_u32[2];
          v146_.v151 = v51;
          if (v7) {
            v53 = *(_QWORD*)(v1 + 40);
            v52 = *(_QWORD*)(v1 + 48);
            if (v52 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                        memory_order_relaxed);
            }
            v54 = v146_.v155;
            v146_.v154 = v53;
            v146_.v155 = v52;
            if (v54 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v54),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v55 = v146_.v151;
            v56 = v146_.v147;
            v57 = (float32x4_t*)v146_.v148;
            v58 = v146_.v151;
            LANES128(v58).n128_u32[1] = 0;
            v59 = vsubq_f32(v58, v146_.v151);
            v60 = vmulq_f32(v59, v59);
            LANES128(v60).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v60, v60, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0])))
                        .n64_f32[0] > 0x0.0p+0f &&
                v146_.v147 != (float32x4_t*)v146_.v148) {
              do {
                v56[1] = vsubq_f32(v56[1], v59);
                v56 += 4;
              } while (v56 != v57);
              v56 = v146_.v147;
              v57 = (float32x4_t*)v146_.v148;
            }
            LANES128(v62).n128_u64[0] = LANES128(v55).n128_u32[0];
            LANES128(v62).n128_u64[1] = LANES128(v55).n128_u32[2];
            v146_.v151 = v62;
            if (v56 != v57) {
              do {
                LANES128(v56[1]).n128_u32[1] = 0;
                v56 += 4;
              } while (v56 != v57);
              v62 = v146_.v151;
            }
            v63 = vaddq_f32(v141, v62);
            LANES128(v64).n128_u64[0] = LANES128(v63).n128_u64[0];
            LANES128(v64).n128_u64[1] = LANES128(v63).n128_u32[2];
            v146_.v151 = v64;
          }
          game_map_f1c4a0(v3, (__int64)v146_.v146),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v65 = v146_.v147[9];
          v66 = v146_.v147[13];
          if ((v146_.v152 & 1) != 0) {
            LANES128(v67).n128_u64[0] = 0;
            LANES128(v67).n128_u32[2] = 0;
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) +
                          9LL) != 1) {
              goto LABEL_114;
            }
          LABEL_113:
            v67 = vaddq_f32(v146_.v151, v146_.v147[17]);
            goto LABEL_114;
          }
          LANES128(v67).n128_u64[0] = 0;
          LANES128(v67).n128_u32[2] = 0;
          if (v146_.v153 == 2) {
            goto LABEL_113;
          }
        LABEL_114:
          v68 = vaddq_f32(v146_.v147[1], v146_.v151);
          v69 = vaddq_f32(v146_.v151, v146_.v147[5]);
          LANES128(v146_.v146[0]).n128_u64[0] =
              (unsigned __int64)game_map_RouteMeshData_vtable;
          v70 = vaddq_f32(v146_.v151, v65);
          v71 = vaddq_f32(v146_.v151, v66);
          *(_QWORD*)&v72 = LANES128(v70).n128_u64[0];
          *(_QWORD*)&v73 = LANES128(v71).n128_u64[0];
          *(_QWORD*)&v74 = LANES128(v68).n128_u64[0];
          *(_QWORD*)&v75 = LANES128(v69).n128_u64[0];
          *((_QWORD*)&v73 + 1) = LANES128(v71).n128_u32[2];
          LANES128(v71).n128_u64[0] = LANES128(v67).n128_u64[0];
          *((_QWORD*)&v74 + 1) = LANES128(v68).n128_u32[2];
          *((_QWORD*)&v75 + 1) = LANES128(v69).n128_u32[2];
          *((_QWORD*)&v72 + 1) = LANES128(v70).n128_u32[2];
          LANES128(v71).n128_u64[1] = LANES128(v67).n128_u32[2];
          v161_.v161 = v74;
          v161_.v162 = v75;
          v161_.v163 = v72;
          v161_.v164 = v73;
          v161_.v165 = v71;
          if (v146_.v155 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v146_.v155),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          LANES128(v146_.v146[0]).n128_u64[0] = (unsigned __int64)v142;
          if (v146_.v149 != 0) {
            v146_.v150 = v146_.v149;
            v76 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v76 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v146_.v149),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v77 = (__int64)v146_.v147;
          if (v146_.v147 != nullptr) {
            if (v146_.v147 == (float32x4_t*)v146_.v148) {
              goto LABEL_126;
            }
            v78 = v11;
            v79 = v8;
            v80 = v7;
            v81 = v5;
            v82 = v3;
            v83 = (void (***)(_QWORD))(v146_.v148 - 64),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v84 = (void (***)(_QWORD))(v146_.v148 - 64),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            do {
              v85 = *v84;
              v84 -= 8;
              (*v85)(v83);
              v50 = v83 == (void (***)(_QWORD))v77,
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v83 = v84;
            } while (!v50);
            v3 = v82;
            v5 = v81;
            v7 = v80;
            v8 = v79;
            v11 = v78;
            v146_.v148 = v77;
            v77 = (__int64)v146_.v147;
            if (v146_.v147 != nullptr) {
            LABEL_126:
              v86 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v86 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, v77),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
          }
          if (v13 != 0) {
            game_map_f54910((__int64)v146_.v146),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v146_.v154 = 0;
            v146_.v155 = 0;
            LANES128(v146_.v146[0]).n128_u64[0] =
                (unsigned __int64)game_map_RouteMeshData_vtable;
            if ((v144 & 1) != 0) {
              v87 = 0;
            }
            else if ((v144 & 4) != 0) {
              v87 = 2;
            }
            else if ((v144 & 2) != 0) {
              v87 = 1;
            }
            else if ((v144 & 8) != 0) {
              v87 = 3;
            }
            else {
              v87 = -1;
            }
            if ((MapDrawConst_fcc820(v1, v146_.v146, &v166_.v166, &v161_.v161,
                                     &v174_.v174, v87) &
                 1) != 0) {
              game_map_f1c4a0(v3, (__int64)v146_.v146),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            LANES128(v146_.v146[0]).n128_u64[0] =
                (unsigned __int64)game_map_RouteMeshData_vtable;
            if (v146_.v155 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v146_.v155),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            LANES128(v146_.v146[0]).n128_u64[0] =
                (unsigned __int64)(GameData_212f8b0[0] + 2);
            if (v146_.v149 != 0) {
              v146_.v150 = v146_.v149;
              v88 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v88 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v146_.v149),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v89 = (__int64)v146_.v147;
            if (v146_.v147 != nullptr) {
              if (v146_.v147 == (float32x4_t*)v146_.v148) {
                goto LABEL_23;
              }
              v90 = (void (***)(_QWORD))(v146_.v148 - 64),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v91 = (void (***)(_QWORD))(v146_.v148 - 64),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              do {
                v92 = *v91;
                v91 -= 8;
                (*v92)(v90);
                v50 = v90 == (void (***)(_QWORD))v89,
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                v90 = v91;
              } while (!v50);
              v146_.v148 = v89;
              v89 = (__int64)v146_.v147;
              if (v146_.v147 != nullptr) {
              LABEL_23:
                v19 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v19 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v89),
                    v26 = COERCE_AS(__typeof__(v26),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
            }
          }
          LANES128(v20).n128_u64[0] = v161_.v161;
          *(_QWORD*)&v21 = v161_.v162;
          LANES128(v20).n128_u64[1] = DWORD2(v161_.v161);
          *((_QWORD*)&v21 + 1) = DWORD2(v161_.v162);
          *(_QWORD*)&v22 = v161_.v163;
          *(_QWORD*)&v23 = v161_.v164;
          *((_QWORD*)&v22 + 1) = DWORD2(v161_.v163);
          *((_QWORD*)&v23 + 1) = DWORD2(v161_.v164);
          v166_.v166 = v20;
          v166_.v167 = v21;
          v166_.v168 = v22;
          v166_.v169 = v23;
          *(_QWORD*)&v22 = LANES128(v161_.v165).n128_u64[0];
          *((_QWORD*)&v22 + 1) = LANES128(v161_.v165).n128_u32[2];
          v166_.v170 = v22;
          v24 = (char*)GameData_212cf50 + v145;
          v25 = *v24;
          LOBYTE(v24) = v24[256];
          v171_.v171 += v25;
          v171_.v172 += (char)v24;
          HeightCellMap_1002e20(v11 + 72, (unsigned __int8*)&v171_.v171, v8),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v27 = *(float*)(v1 + 64);
          v14 = v145;
          if (v27 < v26) {
            v27 = v26;
          }
          *(float*)(v1 + 60) = v26;
          *(float*)(v1 + 64) = v27;
          v12 = (int)v5[40];
        } while (v13++ < v12);
      }
    }
    *(_BYTE*)(v1 + 8) = 0;
  }
  if (*(_QWORD*)(v1 + 32) != 0) {
    v99 = *(_BYTE*)(v1 + 56);
  }
  else {
    v99 = 1;
    *(_BYTE*)(v1 + 56) = 1;
  }
  v100 = *(float*)(v1 + 60);
  v101 = *(float**)(v1 + 40);
  v102 = game_script_hub_g_frame_counter_ptr[0];
  if (vabds_f32(v100, *(float*)(v1 + 64)) < 0x1.4000000000000p+0f) {
    v100 = *(float*)(v1 + 64);
  }
  v103 = v100 + 0x1.0000000000000p-2f;
  if ((v99 & 1) != 0) {
    *v101 = v103;
    *(_BYTE*)(v1 + 56) = 0;
    goto LABEL_189;
  }
  v104 = *v101;
  v105 = fabsf(
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) *
      (float)((float)(vabds_f32(*v101, v103) * 0x1.4000000000000p+3f) +
              0x1.0000000000000p-2f));
  if (*v101 <= v103) {
    if (*v101 >= v103) {
      goto LABEL_188;
    }
    v104 = v104 + v105;
    if (v104 <= v103) {
      goto LABEL_188;
    }
  }
  else {
    v104 = v104 - v105;
    if (v104 >= v103) {
      goto LABEL_188;
    }
  }
  v104 = v103;
LABEL_188:
  *v101 = v104;
LABEL_189:
  v106 = *(float32x4_t**)(v1 + 16);
  v107 = (float32x4_t*)(v1 + 24);
  if (v106 != (float32x4_t*)(v1 + 24)) {
    v108 = game_map_RouteMeshData_vtable;
    v109 = fw_memory_g_heap_manager_ptr;
    v110 = GameData_212f8b0[0] + 2;
    do {
      v113 = LANES128(v106[17]).n128_f32[2];
      v114 =
          (float)(*(float*)(*(_QWORD*)v102 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v113 <= 0x0.0p+0f) {
        if (LANES128(v106[17]).n128_u8[0] != 0) {
          v117 = 0x1.0000000000000p+0f;
        }
        else {
          v117 = 0x0.0p+0f;
        }
      }
      else {
        v115 = v114 / v113;
        v116 = LANES128(v106[17]).n128_f32[1];
        if (LANES128(v106[17]).n128_u8[0] != 0) {
          v117 = fminf(fmaxf(v115 + v116, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v117 = fminf(fmaxf(v116 - v115, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v106[17]).n128_f32[1] = v117;
      v118 = LANES128(v106[3]).n128_u64[0];
      LANES128(v106[15]).n128_f32[0] = v114 + LANES128(v106[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v118 + 40))(v106 + 3),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      GameRoutine_f54fe0(v106 + 3),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      v119 = (float32x4_t*)LANES128(*(v106)).n128_u64[1];
      if ((LANES128(v106[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v106[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v119 != nullptr) {
          do {
            v121 = v119;
            v119 = (float32x4_t*)LANES128(*(v119)).n128_u64[0];
          } while (v119 != nullptr);
        }
        else {
          do {
            v121 = (float32x4_t*)LANES128(v106[1]).n128_u64[0];
            v50 = v106 == (float32x4_t*)LANES128(*(v121)).n128_u64[0];
            v106 = v121;
          } while (!v50);
        }
      }
      else {
        v120 = v106;
        if (v119 != nullptr) {
          do {
            v121 = v119;
            v119 = (float32x4_t*)LANES128(*(v119)).n128_u64[0];
          } while (v119 != nullptr);
        }
        else {
          do {
            v121 = (float32x4_t*)LANES128(v120[1]).n128_u64[0];
            v50 = v120 == (float32x4_t*)LANES128(*(v121)).n128_u64[0];
            v120 = v121;
          } while (!v50);
        }
        if (*(float32x4_t**)(v1 + 16) == v106) {
          *(_QWORD*)(v1 + 16) = v121;
        }
        v122 = *(__int64**)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0(v122, (__int64*)v106),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v123 = LANES128(v106[19]).n128_i64[0];
        LANES128(v106[3]).n128_u64[0] = (unsigned __int64)v108;
        if (v123 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v123),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v124 = LANES128(v106[10]).n128_i64[1];
        LANES128(v106[3]).n128_u64[0] = (unsigned __int64)v110;
        if (v124 != 0) {
          v125 = *(_QWORD*)v109;
          LANES128(v106[11]).n128_u64[0] = v124;
          v126 = 56;
          if (*(_QWORD*)(v125 + 200) != 0) {
            v126 = 128;
          }
          nn_mem_StandardAllocator_Free_alt2(v125 + v126, v124),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v127 = LANES128(v106[9]).n128_i64[0];
        if (v127 != 0) {
          v128 = LANES128(v106[9]).n128_u64[1];
          if (v127 == v128) {
            goto LABEL_191;
          }
          v129 = (void (***)(_QWORD))(v128 - 64),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
          v130 = v109;
          v131 = v110;
          v132 = v108;
          v133 = v102;
          v134 = (void (***)(_QWORD))(v128 - 64),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
          do {
            v135 = *v134;
            v134 -= 8;
            (*v135)(v129);
            v50 = v129 == (void (***)(_QWORD))v127,
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v129 = v134;
          } while (!v50);
          v136 = LANES128(v106[9]).n128_i64[0];
          v1 = a1;
          v102 = v133;
          v108 = v132;
          v110 = v131;
          v109 = v130;
          LANES128(v106[9]).n128_u64[1] = v127;
          v127 = v136;
          if (v136 != 0) {
          LABEL_191:
            v111 = 56;
            if (*(_QWORD*)(*(_QWORD*)v109 + 200LL) != 0) {
              v111 = 128;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v109 + v111, v127),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        v112 = 56;
        if (*(_QWORD*)(*(_QWORD*)v109 + 200LL) != 0) {
          v112 = 128;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v109 + v112,
                                           (__int64)v106),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v106 = v121;
    } while (v121 != v107);
  }
}

void MapPanelRoute_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t v5;
  unsigned __int32 v6;
  unsigned int v7;
  float32x4_t v8;
  float32x4_t v9;
  __int64* v10;
  _QWORD* v11;
  float32x4_t* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  bool v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  struct {
    unsigned __int64 v40[2];
    __int64 v41;
    char gap24_[8];
    float32x4_t v42;
    float32x4_t v43;
    __int64 v44;
    int v45;
    char gap76_[4];
    unsigned __int64 v46;
    unsigned __int64 v47;
    unsigned __int64 v48;
    unsigned __int8 v49;
  } v40_;
  struct {
    unsigned __int64 v50;
    unsigned __int64 v51;
    __int64 v52;
    char gap136_[8];
    float32x4_t v53;
    float32x4_t v54;
    __int64 v55;
    int v56;
    char gap188_[4];
    float32x4_t v57;
    unsigned __int64 v58;
    unsigned __int8 v59;
  } v50_;

  HIBYTE(v40_.v40[1]) = 0;
  BYTE4(v40_.v48) = 0;
  v40_.v49 = 0;
  v40_.v41 = 0;
  v40_.v46 = 0;
  v40_.v47 = 0;
  LOWORD(v40_.v48) = 0;
  LOBYTE(v40_.v40[0]) = 26;
  strcpy((char*)v40_.v40 + 1, "MapPanelRoute");
  v2 = *(float32x4_t*)GameData_212c958;
  v3 = (float32x4_t*)*GameData_212f878;
  v50_.v50 = v40_.v40[0];
  v50_.v51 = v40_.v40[1];
  v5 = v3[1];
  v4 = v3[2];
  v40_.v44 = 0xF00000000LL;
  v40_.v45 = 1;
  v50_.v56 = 1;
  v50_.v57 = (__typeof__(v50_.v57)){0};
  v50_.v58 = v40_.v48;
  v6 = LANES128(v3[89]).n128_u32[3];
  *(float*)&v7 = -LANES128(v3[89]).n128_f32[2];
  v40_.v42 = vmulq_f32(v2, v5);
  v40_.v43 = vmulq_f32(v2, v4);
  v50_.v55 = 0xF00000000LL;
  v50_.v52 = 0;
  v50_.v53 = v40_.v42;
  v50_.v54 = v40_.v43;
  v50_.v59 = 0;
  v9 = v3[3];
  v8 = v3[4];
  v50_.v56 = 0;
  LOBYTE(v50_.v58) = 1;
  v50_.v53 = vmulq_f32(v2, v9);
  v50_.v54 = vmulq_f32(v2, v8);
  LANES128(v50_.v53).n128_u32[3] =
      vmuls_lane_f32(LANES128(v50_.v53).n128_f32[3], v40_.v42, 3);
  LANES128(v2).n128_u64[0] = __PAIR64__(v7, v6);
  LANES128(v50_.v54).n128_u32[3] =
      vmuls_lane_f32(LANES128(v50_.v54).n128_f32[3], v40_.v43, 3);
  LANES128(v2).n128_u64[1] = v6;
  v50_.v57 = v2;
  v10 = (__int64*)GameData_212d018[0];
  v11 = *(_QWORD**)GameData_212d018[0];
  v12 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v12 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v14 = PrimitiveDrawStack_f525a0(v11 + 2, (__int64)&v50_.v50);
  }
  else {
    if ((v50_.v50 & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), v50_.v52,
          v50_.v51);
    }
    else {
      LANES128(*(v12)).n128_u64[1] = v40_.v40[1];
      v13 = v40_.v40[0];
      LANES128(v12[1]).n128_u64[0] = v40_.v41;
      LANES128(*(v12)).n128_u64[0] = v13;
    }
    v15 = v50_.v56;
    v14 = (__int64)&v12[7];
    LANES128(v12[3]).n128_u64[1] = LANES128(v50_.v54).n128_u64[1];
    v12[2] = v50_.v53;
    v16 = LANES128(v50_.v54).n128_u64[0];
    v17 = v50_.v55;
    LANES128(v12[4]).n128_u32[2] = v15;
    LANES128(v12[4]).n128_u64[0] = v17;
    LANES128(v12[3]).n128_u64[0] = v16;
    v12[5] = v50_.v57;
    v18 = v50_.v58;
    LANES128(v12[6]).n128_u8[8] = v50_.v59;
    LANES128(v12[6]).n128_u64[0] = v18;
  }
  v19 = v11[2];
  v11[3] = v14;
  v11[1] = 0x6DB6DB6DB6DB6DB7LL * ((v14 - v19) >> 4) - 1;
  v20 = (_QWORD*)(a1 + 24);
  v21 = *(_QWORD**)(a1 + 16);
  if (v21 != (_QWORD*)(a1 + 24)) {
    do {
      PrimitiveDrawStack_f51430(*v10, (__int64)(v21 + 6));
      v26 = (_QWORD*)v21[1];
      if (v26 != nullptr) {
        do {
          v27 = v26;
          v26 = (_QWORD*)*v26;
        } while (v26 != nullptr);
      }
      else {
        do {
          v27 = (_QWORD*)v21[2];
          v28 = v21 == (_QWORD*)*v27;
          v21 = v27;
        } while (!v28);
      }
      v21 = v27;
    } while (v27 != v20);
  }
  v22 = *v10;
  *(_QWORD*)(*v10 + 8) = 1024;
  if ((v50_.v50 & 1) != 0 && v50_.v52 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v50_.v52);
    v22 = *v10;
  }
  v24 = *(float32x4_t**)(v22 + 24);
  if ((unsigned __int64)v24 >= *(_QWORD*)(v22 + 32)) {
    v29 = PrimitiveDrawStack_f525a0((__int64*)(v22 + 16), (__int64)v40_.v40);
  }
  else {
    if ((v40_.v40[0] & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v22 + 24), v40_.v41,
                                    v40_.v40[1]);
    }
    else {
      LANES128(*(v24)).n128_u64[1] = v40_.v40[1];
      v25 = v40_.v40[0];
      LANES128(v24[1]).n128_u64[0] = v40_.v41;
      LANES128(*(v24)).n128_u64[0] = v25;
    }
    v30 = v40_.v45;
    v29 = (__int64)&v24[7];
    LANES128(v24[3]).n128_u64[1] = LANES128(v40_.v43).n128_u64[1];
    v24[2] = v40_.v42;
    v31 = LANES128(v40_.v43).n128_u64[0];
    v32 = v40_.v44;
    LANES128(v24[4]).n128_u32[2] = v30;
    LANES128(v24[4]).n128_u64[0] = v32;
    LANES128(v24[3]).n128_u64[0] = v31;
    v33 = v40_.v47;
    LANES128(v24[5]).n128_u64[0] = v40_.v46;
    LANES128(v24[5]).n128_u64[1] = v33;
    v34 = v40_.v48;
    LANES128(v24[6]).n128_u8[8] = v40_.v49;
    LANES128(v24[6]).n128_u64[0] = v34;
  }
  v35 = *(_QWORD*)(v22 + 16);
  *(_QWORD*)(v22 + 24) = v29;
  *(_QWORD*)(v22 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v29 - v35) >> 4) - 1;
  v36 = *(_QWORD**)(a1 + 16);
  if (v36 != v20) {
    do {
      PrimitiveDrawStack_f51430(*v10, (__int64)(v36 + 6));
      v38 = (_QWORD*)v36[1];
      if (v38 != nullptr) {
        do {
          v39 = v38;
          v38 = (_QWORD*)*v38;
        } while (v38 != nullptr);
      }
      else {
        do {
          v39 = (_QWORD*)v36[2];
          v28 = v36 == (_QWORD*)*v39;
          v36 = v39;
        } while (!v28);
      }
      v36 = v39;
    } while (v39 != v20);
  }
  *(_QWORD*)(*v10 + 8) = 1024;
  if ((v40_.v40[0] & 1) != 0 && v40_.v41 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v40_.v41);
  }
}

__int64 MapPanelRoute_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[6];
  *a1 = game_map_MapPanelRoute_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
    a1 = v2;
  }
  return GameRoutine_f1cba0(a1[3]);
}

__int64 MapPanelRoute_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[6];
  *a1 = game_map_MapPanelRoute_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  GameRoutine_f1cba0(a1[3]);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

_QWORD* MapPanelRoute_f1cba0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (**v11)(_QWORD);
  bool v12;
  void (***v13)(_QWORD);
  __int64 v14;
  __int64 v15;

  if (result != nullptr) {
    v1 = result;
    MapPanelRoute_f1cba0(*result);
    MapPanelRoute_f1cba0(v1[1]);
    v2 = v1[38];
    v1[6] = game_map_RouteMeshData_vtable;
    if (v2 != 0) {
      std___1___shared_weak_count___release_weak(v2);
    }
    v3 = v1[21];
    v1[6] = GameData_212f8b0[0] + 2;
    v4 = fw_memory_g_heap_manager_ptr;
    if (v3 != 0) {
      v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v1[22] = v3;
      v6 = 128;
      if (*(_QWORD*)(v5 + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(v5 + v6, v3);
    }
    v7 = (void (***)(_QWORD))v1[18];
    if (v7 != nullptr) {
      v8 = (void (***)(_QWORD))v1[19];
      if (v7 == v8) {
        goto LABEL_14;
      }
      v9 = v8 - 8;
      v10 = v8 - 8;
      do {
        v11 = *v10;
        v10 -= 8;
        (*v11)(v9);
        v12 = v9 == v7;
        v9 = v10;
      } while (!v12);
      v13 = (void (***)(_QWORD))v1[18];
      v1[19] = v7;
      v7 = v13;
      if (v13 != nullptr) {
      LABEL_14:
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v7);
      }
    }
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v15 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v15, v1);
  }
  return result;
}

#pragma GCC visibility pop
