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
  __n128 v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  __int128 v72;
  __int128 v73;
  __int128 v74;
  __int128 v75;
  __int64 v76;
  float32x4_t* v77;
  __int64 v78;
  int v79;
  _BOOL4 v80;
  _DWORD* v81;
  __int64** v82;
  float32x4_t* v83;
  float32x4_t* v84;
  void (**v85)(float32x4_t*, long double);
  __int64 v86;
  unsigned __int8 v87;
  __n128 v88;
  __int64 v89;
  float32x4_t* v90;
  float32x4_t* v91;
  float32x4_t* v92;
  void (**v93)(float32x4_t*, long double);
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  __int64 v99;
  char v100;
  float v101;
  float* v102;
  __int64 v103;
  float v104;
  float v105;
  float v106;
  float32x4_t* v107;
  float32x4_t* v108;
  __int64 (**v109)();
  __int64 v110;
  __int64* v111;
  __int64 v112;
  __int64 v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  unsigned __int64 v119;
  float32x4_t* v120;
  float32x4_t* v121;
  float32x4_t* v122;
  __int64* v123;
  __n128 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  void (***v131)(_QWORD, long double);
  __int64 v132;
  __int64* v133;
  __int64 (**v134)();
  __int64 v135;
  void (***v136)(_QWORD, long double);
  void (**v137)(_QWORD, long double);
  unsigned __int64 v138;
  __int64* v139;
  float v140;
  float32x4_t v141;
  _DWORD* v142;
  float32x4_t v143;
  __int64* v144;
  unsigned int v146;
  unsigned int v147;
  struct {
    float32x4_t v148[6];
    float32x4_t* v149;
    float32x4_t* v150;
    char gap176_[8];
    __int64 v151;
    __int64 v152;
    char gap200_[40];
    float32x4_t v153;
    char gap256_[44];
    char v154;
    char gap301_[3];
    int v155;
    char gap308_[4];
    __int64 v156;
    __int64 v157;
  } v148_;
  struct {
    unsigned __int64 v158;
    unsigned __int64 v159;
    unsigned __int64 v160;
    unsigned __int64 v161;
    unsigned __int64 v162;
  } v158_;
  struct {
    __int128 v163;
    __int128 v164;
    __int128 v165;
    __int128 v166;
    float32x4_t v167;
  } v163_;
  struct {
    float32x4_t v168;
    __int128 v169;
    __int128 v170;
    __int128 v171;
    __int128 v172;
  } v168_;
  struct {
    char v173;
    char v174;
    __int16 v175;
  } v173_;
  _QWORD v176[6];

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
        if (((*(__int64 (**)(void*))(v15 + 48))(&v2[6]) & 1) != 0) {
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
      v143 = (__typeof__(v143)){0};
      if (*(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL) >= 3u &&
          *(_BYTE*)(*GameData_212cfd0[0] + 8) != 0 &&
          (v6 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8))) !=
              nullptr &&
          v6[49] != 0 && (*((_BYTE*)v6 + 417) & 0x1C) == 0) {
        v139 = v6;
        if ((*(float (**)(__int64*))(v6[19] + 16))(v6 + 19) <= 0x0.0p+0f) {
          v7 = false;
          v8 = 1;
        }
        else {
          v8 = *((_DWORD*)v139 + 148);
          v7 = v8 > 1;
          v140 = (float)(unsigned int)(v8 - 1) * 0x1.4000000000000p+1f;
          if (v8 <= 0) {
            v140 = 0x0.0p+0f;
          }
          LANES128(v141).n128_u64[0] = LODWORD(v140);
          LANES128(v141).n128_u64[1] = LODWORD(v140);
          v143 = v141;
        }
        v1 = a1;
      }
      else {
        v7 = false;
        v8 = 1;
      }
      v176[4] = 0x3E0000003F200000LL;
      *(float*)v176 = 0x1.0000000000000p-1f + 0x1.0000000000000p-10f;
      *((float*)v176 + 1) = 0x0.0p+0f + 0x1.0000000000000p-10f;
      *(float*)&v176[1] = 0x1.8000000000000p-1f + -0x1.0000000000000p-10f;
      *((float*)&v176[1] + 1) = 0x0.0p+0f + 0x1.0000000000000p-10f;
      *(float*)&v176[2] = 0x1.8000000000000p-1f + -0x1.0000000000000p-10f;
      *((float*)&v176[2] + 1) = 0x1.0000000000000p-2f + -0x1.0000000000000p-10f;
      *(float*)&v176[3] = 0x1.0000000000000p-1f + 0x1.0000000000000p-10f;
      *((float*)&v176[3] + 1) = 0x1.0000000000000p-2f + -0x1.0000000000000p-10f;
      v9 = v5[43];
      v10 = v5[44];
      v173_.v175 = 0;
      v12 = *(_QWORD*)GameData_212d020[0];
      v173_.v173 = v9;
      v173_.v174 = v10;
      v11 = *(_QWORD*)(v12 + 8);
      LODWORD(v12) = v5[40];
      v168_.v172 = (__typeof__(v168_.v172)){0};
      v168_.v171 = (__typeof__(v168_.v171)){0};
      v168_.v170 = (__typeof__(v168_.v170)){0};
      v168_.v169 = (__typeof__(v168_.v169)){0};
      v168_.v168 = (__typeof__(v168_.v168)){0};
      v163_.v167 = (__typeof__(v163_.v167)){0};
      v163_.v166 = (__typeof__(v163_.v166)){0};
      v163_.v165 = (__typeof__(v163_.v165)){0};
      v163_.v164 = (__typeof__(v163_.v164)){0};
      v163_.v163 = (__typeof__(v163_.v163)){0};
      if ((v12 & 0x80000000) == 0) {
        v13 = 0;
        v14 = 0;
        v142 = v5 + 8;
        v144 = GameData_212f8b0[0] + 2;
        do {
          if (v13 == (unsigned int)v12) {
            v29 = 0;
          }
          else {
            v29 = *((unsigned __int8*)v142 + v13);
          }
          v158_.v161 = 0;
          v158_.v162 = 0;
          v158_.v159 = 0;
          v158_.v160 = 0;
          v158_.v158 = 0;
          v146 = v14;
          v147 = v29;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v94 = __cxa_guard_acquire(&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v146;
            v29 = v147;
            if (v94 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release(&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v146;
              v29 = v147;
            }
          }
          v158_.v158 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v95 = __cxa_guard_acquire(&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v146;
            v29 = v147;
            if (v95 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release(&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v146;
              v29 = v147;
            }
          }
          v158_.v159 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v96 = __cxa_guard_acquire(&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v146;
            v29 = v147;
            if (v96 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release(&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v146;
              v29 = v147;
            }
          }
          v158_.v160 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v97 = __cxa_guard_acquire(&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v146;
            v29 = v147;
            if (v97 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release(&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v146;
              v29 = v147;
            }
          }
          v158_.v161 = GameData_21a60e0;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0) {
            v98 = __cxa_guard_acquire(&GameData_21a60e8),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v14 = v146;
            v29 = v147;
            if (v98 != 0) {
              GameData_21a60e0 = 0;
              __cxa_guard_release(&GameData_21a60e8),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v14 = v146;
              v29 = v147;
            }
          }
          v158_.v162 = GameData_21a60e0;
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
                  v158_.v158 = __PAIR64__(v36, v40);
                  v158_.v159 = __PAIR64__(v36, v33);
                  v158_.v160 = __PAIR64__(v32, v33);
                  v158_.v161 = __PAIR64__(v32, v40);
                  v158_.v162 = __PAIR64__(LODWORD(v31), LODWORD(v30));
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
          game_map_f54910((__int64)v148_.v148),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          LANES128(v148_.v148[0]).n128_u64[0] =
              (unsigned __int64)game_map_RouteMeshData_vtable;
          v148_.v156 = 0;
          v148_.v157 = 0;
          GameRoutine_fcabb0(v1, (__int64)v148_.v148, 1, v173_.v173, v173_.v174,
                             (__int64)&v158_.v158, (__int64)GameData_212c958),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
            v99 = *((_QWORD*)GameData_212c540 + 1);
            *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
            *((_QWORD*)&GameData_21a6120 + 1) = v99;
            __cxa_guard_release(&GameData_21a6130),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v43 = COERCE_AS(float32x4_t, GameData_21a6120);
          v45 = v148_.v149;
          v44 = v148_.v150;
          if (v148_.v150 != v148_.v149) {
            v46 = v148_.v149;
            do {
              v47 = v46[1];
              v46 += 4;
              v43 = vaddq_f32(v43, v47);
            } while (v46 != v148_.v150);
            v43 = vmulq_n_f32(
                v43, 0x1.0000000000000p+0f /
                         (float)(unsigned __int64)(((char*)v148_.v150 -
                                                    (char*)v148_.v149) >>
                                                   6));
            LANES128(v43).n128_u32[3] = 0;
          }
          v48 = vsubq_f32(v43, v148_.v153);
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
              v148_.v150 == v148_.v149;
          if (!v50) {
            do {
              v45[1] = vsubq_f32(v45[1], v48);
              v45 += 4;
            } while (v45 != v44);
          }
          LANES128(v51).n128_u64[0] = LANES128(v43).n128_u64[0];
          LANES128(v51).n128_u64[1] = LANES128(v43).n128_u32[2];
          v148_.v153 = v51;
          if (v7) {
            v53 = *(_QWORD*)(v1 + 40);
            v52 = *(_QWORD*)(v1 + 48);
            if (v52 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                        memory_order_relaxed);
            }
            v54 = v148_.v157;
            v148_.v156 = v53;
            v148_.v157 = v52;
            if (v54 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v54),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v55 = v148_.v153;
            v56 = v148_.v149;
            v57 = v148_.v150;
            v58 = v148_.v153;
            LANES128(v58).n128_u32[1] = 0;
            v59 = vsubq_f32(v58, v148_.v153);
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
                v148_.v149 != v148_.v150) {
              do {
                v56[1] = vsubq_f32(v56[1], v59);
                v56 += 4;
              } while (v56 != v57);
              v56 = v148_.v149;
              v57 = v148_.v150;
            }
            LANES128(v62).n128_u64[0] = LANES128(v55).n128_u32[0];
            LANES128(v62).n128_u64[1] = LANES128(v55).n128_u32[2];
            v148_.v153 = v62;
            if (v56 != v57) {
              do {
                LANES128(v56[1]).n128_u32[1] = 0;
                v56 += 4;
              } while (v56 != v57);
              v62 = v148_.v153;
            }
            v63 = vaddq_f32(v143, v62);
            LANES128(v64).n128_u64[0] = LANES128(v63).n128_u64[0];
            LANES128(v64).n128_u64[1] = LANES128(v63).n128_u32[2];
            v148_.v153 = v64;
          }
          GameRoutine_f1c4a0(v3, (__int64)v148_.v148),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v65 = v148_.v149[9];
          v66 = v148_.v149[13];
          if ((v148_.v154 & 1) != 0) {
            v67 = (__typeof__(v67)){0};
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) +
                          9LL) != 1) {
              goto LABEL_114;
            }
          LABEL_113:
            v67 = vaddq_f32(v148_.v153, v148_.v149[17]);
            LANES128(v67).n128_u32[3] = 0;
            goto LABEL_114;
          }
          v67 = (__typeof__(v67)){0};
          if (v148_.v155 == 2) {
            goto LABEL_113;
          }
        LABEL_114:
          v68 = vaddq_f32(v148_.v149[1], v148_.v153);
          v69 = vaddq_f32(v148_.v153, v148_.v149[5]);
          LANES128(v148_.v148[0]).n128_u64[0] =
              (unsigned __int64)game_map_RouteMeshData_vtable;
          v70 = vaddq_f32(v148_.v153, v65);
          v71 = vaddq_f32(v148_.v153, v66);
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
          v163_.v163 = v74;
          v163_.v164 = v75;
          v163_.v165 = v72;
          v163_.v166 = v73;
          v163_.v167 = v71;
          if (v148_.v157 != 0) {
            v67 = std___1___shared_weak_count___release_weak_alt1(v148_.v157),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          LANES128(v148_.v148[0]).n128_u64[0] = (unsigned __int64)v144;
          if (v148_.v151 != 0) {
            v148_.v152 = v148_.v151;
            v76 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v76 = 56;
            }
            v67 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v76),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v77 = v148_.v149;
          if (v148_.v149 != nullptr) {
            if (v148_.v149 == v148_.v150) {
              goto LABEL_126;
            }
            v78 = v11;
            v79 = v8;
            v80 = v7;
            v81 = v5;
            v82 = v3;
            v83 = v148_.v150 - 4;
            v84 = v148_.v150 - 4;
            do {
              v85 = (void (**)(float32x4_t*, long double))LANES128(*(v84))
                        .n128_u64[0],
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v84 -= 4;
              (*v85)(v83, *(long double*)&v67);
              v50 = v83 == v77;
              v83 = v84;
            } while (!v50);
            v3 = v82;
            v5 = v81;
            v7 = v80;
            v8 = v79;
            v11 = v78;
            v148_.v150 = v77;
            if (v148_.v149 != nullptr) {
            LABEL_126:
              v86 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v86 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v86),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
          }
          if (v13 != 0) {
            game_map_f54910((__int64)v148_.v148),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v148_.v156 = 0;
            v148_.v157 = 0;
            LANES128(v148_.v148[0]).n128_u64[0] =
                (unsigned __int64)game_map_RouteMeshData_vtable;
            if ((v146 & 1) != 0) {
              v87 = 0;
            }
            else if ((v146 & 4) != 0) {
              v87 = 2;
            }
            else if ((v146 & 2) != 0) {
              v87 = 1;
            }
            else if ((v146 & 8) != 0) {
              v87 = 3;
            }
            else {
              v87 = -1;
            }
            if ((GameRoutine_fcc820(v1, v148_.v148, &v168_.v168, &v163_.v163,
                                    (__int64)v176, v87) &
                 1) != 0) {
              GameRoutine_f1c4a0(v3, (__int64)v148_.v148),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
            }
            LANES128(v148_.v148[0]).n128_u64[0] =
                (unsigned __int64)game_map_RouteMeshData_vtable;
            if (v148_.v157 != 0) {
              v88 = std___1___shared_weak_count___release_weak_alt1(v148_.v157),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
            }
            LANES128(v148_.v148[0]).n128_u64[0] =
                (unsigned __int64)(GameData_212f8b0[0] + 2);
            if (v148_.v151 != 0) {
              v148_.v152 = v148_.v151;
              v89 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v89 = 56;
              }
              v88 = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v89),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
            }
            v90 = v148_.v149;
            if (v148_.v149 != nullptr) {
              if (v148_.v149 == v148_.v150) {
                goto LABEL_23;
              }
              v91 = v148_.v150 - 4;
              v92 = v148_.v150 - 4;
              do {
                v93 = (void (**)(float32x4_t*, long double))LANES128(*(v92))
                          .n128_u64[0],
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                v92 -= 4;
                (*v93)(v91, *(long double*)&v88);
                v50 = v91 == v90;
                v91 = v92;
              } while (!v50);
              v148_.v150 = v90;
              if (v148_.v149 != nullptr) {
              LABEL_23:
                v19 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v19 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v19),
                    v26 = COERCE_AS(__typeof__(v26),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
            }
          }
          LANES128(v20).n128_u64[0] = v163_.v163;
          *(_QWORD*)&v21 = v163_.v164;
          LANES128(v20).n128_u64[1] = DWORD2(v163_.v163);
          *((_QWORD*)&v21 + 1) = DWORD2(v163_.v164);
          *(_QWORD*)&v22 = v163_.v165;
          *(_QWORD*)&v23 = v163_.v166;
          *((_QWORD*)&v22 + 1) = DWORD2(v163_.v165);
          *((_QWORD*)&v23 + 1) = DWORD2(v163_.v166);
          v168_.v168 = v20;
          v168_.v169 = v21;
          v168_.v170 = v22;
          v168_.v171 = v23;
          *(_QWORD*)&v22 = LANES128(v163_.v167).n128_u64[0];
          *((_QWORD*)&v22 + 1) = LANES128(v163_.v167).n128_u32[2];
          v168_.v172 = v22;
          v24 = (char*)GameData_212cf50 + v147;
          v25 = *v24;
          LOBYTE(v24) = v24[256];
          v173_.v173 += v25;
          v173_.v174 += (char)v24;
          HeightCellMap_1002e20(v11 + 72, (unsigned __int8*)&v173_.v173, v8),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v27 = *(float*)(v1 + 64);
          v14 = v147;
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
    v100 = *(_BYTE*)(v1 + 56);
  }
  else {
    v100 = 1;
    *(_BYTE*)(v1 + 56) = 1;
  }
  v101 = *(float*)(v1 + 60);
  v102 = *(float**)(v1 + 40);
  v103 = game_script_hub_g_frame_counter_ptr[0];
  if (vabds_f32(v101, *(float*)(v1 + 64)) < 0x1.4000000000000p+0f) {
    v101 = *(float*)(v1 + 64);
  }
  v104 = v101 + 0x1.0000000000000p-2f;
  if ((v100 & 1) != 0) {
    *v102 = v104;
    *(_BYTE*)(v1 + 56) = 0;
    goto LABEL_189;
  }
  v105 = *v102;
  v106 = fabsf(
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) *
      (float)((float)(vabds_f32(*v102, v104) * 0x1.4000000000000p+3f) +
              0x1.0000000000000p-2f));
  if (*v102 <= v104) {
    if (*v102 >= v104) {
      goto LABEL_188;
    }
    v105 = v105 + v106;
    if (v105 <= v104) {
      goto LABEL_188;
    }
  }
  else {
    v105 = v105 - v106;
    if (v105 >= v104) {
      goto LABEL_188;
    }
  }
  v105 = v104;
LABEL_188:
  *v102 = v105;
LABEL_189:
  v107 = *(float32x4_t**)(v1 + 16);
  v108 = (float32x4_t*)(v1 + 24);
  if (v107 != (float32x4_t*)(v1 + 24)) {
    v109 = game_map_RouteMeshData_vtable;
    v110 = fw_memory_g_heap_manager_ptr;
    v111 = GameData_212f8b0[0] + 2;
    do {
      v114 = LANES128(v107[17]).n128_f32[2];
      v115 =
          (float)(*(float*)(*(_QWORD*)v103 + 160LL) * 0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
      if (v114 <= 0x0.0p+0f) {
        if (LANES128(v107[17]).n128_u8[0] != 0) {
          v118 = 0x1.0000000000000p+0f;
        }
        else {
          v118 = 0x0.0p+0f;
        }
      }
      else {
        v116 = v115 / v114;
        v117 = LANES128(v107[17]).n128_f32[1];
        if (LANES128(v107[17]).n128_u8[0] != 0) {
          v118 = fminf(fmaxf(v116 + v117, 0x1.51eb860000000p-2f),
                       0x1.0000000000000p+0f);
        }
        else {
          v118 = fminf(fmaxf(v117 - v116, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v107[17]).n128_f32[1] = v118;
      v119 = LANES128(v107[3]).n128_u64[0];
      LANES128(v107[15]).n128_f32[0] = v115 + LANES128(v107[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v119 + 40))(v107 + 3),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      GameRoutine_f54fe0(v107 + 3),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      v120 = (float32x4_t*)LANES128(*(v107)).n128_u64[1];
      if ((LANES128(v107[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v107[17]).n128_f32[1] > 0x0.0p+0f) {
        if (v120 != nullptr) {
          do {
            v122 = v120;
            v120 = (float32x4_t*)LANES128(*(v120)).n128_u64[0];
          } while (v120 != nullptr);
        }
        else {
          do {
            v122 = (float32x4_t*)LANES128(v107[1]).n128_u64[0];
            v50 = v107 == (float32x4_t*)LANES128(*(v122)).n128_u64[0];
            v107 = v122;
          } while (!v50);
        }
      }
      else {
        v121 = v107;
        if (v120 != nullptr) {
          do {
            v122 = v120;
            v120 = (float32x4_t*)LANES128(*(v120)).n128_u64[0];
          } while (v120 != nullptr);
        }
        else {
          do {
            v122 = (float32x4_t*)LANES128(v121[1]).n128_u64[0];
            v50 = v121 == (float32x4_t*)LANES128(*(v122)).n128_u64[0];
            v121 = v122;
          } while (!v50);
        }
        if (*(float32x4_t**)(v1 + 16) == v107) {
          *(_QWORD*)(v1 + 16) = v122;
        }
        v123 = *(__int64**)(v1 + 24);
        --*(_QWORD*)(v1 + 32);
        GameRoutine_64dfe0(v123, (__int64*)v107),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v125 = LANES128(v107[19]).n128_u64[0];
        LANES128(v107[3]).n128_u64[0] = (unsigned __int64)v109;
        if (v125 != 0) {
          v124 = std___1___shared_weak_count___release_weak_alt1(v125),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v126 = LANES128(v107[10]).n128_u64[1];
        LANES128(v107[3]).n128_u64[0] = (unsigned __int64)v111;
        if (v126 != 0) {
          v127 = *(_QWORD*)v110;
          LANES128(v107[11]).n128_u64[0] = v126;
          v128 = 56;
          if (*(_QWORD*)(v127 + 200) != 0) {
            v128 = 128;
          }
          v124 = nn_mem_StandardAllocator_Free_alt1(v127 + v128),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v129 = LANES128(v107[9]).n128_u64[0];
        if (v129 != 0) {
          v130 = LANES128(v107[9]).n128_u64[1];
          if (v129 == v130) {
            goto LABEL_191;
          }
          v131 = (void (***)(_QWORD, long double))(v130 - 64),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
          v132 = v110;
          v133 = v111;
          v134 = v109;
          v135 = v103;
          v136 = (void (***)(_QWORD, long double))(v130 - 64),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
          do {
            v137 = *v136;
            v136 -= 8;
            (*v137)(v131, *(long double*)&v124);
            v50 = v131 == (void (***)(_QWORD, long double))v129,
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            v131 = v136;
          } while (!v50);
          v138 = LANES128(v107[9]).n128_u64[0];
          v1 = a1;
          v103 = v135;
          v109 = v134;
          v111 = v133;
          v110 = v132;
          LANES128(v107[9]).n128_u64[1] = v129;
          if (v138 != 0) {
          LABEL_191:
            v112 = 56;
            if (*(_QWORD*)(*(_QWORD*)v110 + 200LL) != 0) {
              v112 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v110 + v112),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        v113 = 56;
        if (*(_QWORD*)(*(_QWORD*)v110 + 200LL) != 0) {
          v113 = 128;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v110 + v113),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v107 = v122;
    } while (v122 != v108);
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
