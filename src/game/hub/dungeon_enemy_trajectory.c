#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
__int64 DungeonEnemyTrajectory_fa03f0(__int64 a1, char a2);
__attribute__((swiftcall)) void DungeonController_f5f960(PSEUDO_X8);
__int64** GameRoutine_14a1940(__int64** result, float);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_14a17c0(__int64*, long double);
__int64 GameRoutine_14a1b00(__int64*, float);
__int64 GameRoutine_14a3920(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_hub_fa1b40(float*, float);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern __int128 GameData_1a82cb0;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter;
float atan2f(_QWORD, float, float);
void __attribute__((noreturn)) String_60a1d0();
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 DungeonEnemyTrajectory_fa0960_alt1(__int64 a1, float a2) __asm__(
    "DungeonEnemyTrajectory_fa0960");
__int64 game_14a1b00(__int64*, float);
__int64 game_14a3920(__int64 result);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
float atan2f_alt1(float, float) __asm__("atan2f");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void game_hub_fa1b40_alt1(__int64, float) __asm__("game_hub_fa1b40");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DungeonEnemyTrajectory_fa0960(__int64 a1, float a2);

__int64 DungeonEnemyTrajectory_fa03f0(__int64 a1, char a2)
{
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v9[200];

  *(_BYTE*)(a1 + 21) = 0;
  if ((a2 & 1) != 0) {
    v3 = 100.0;
  }
  else {
    v3 = 500.0;
  }
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 24) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1 + 24);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 48) & 1) != 0) {
    v5 = snd_fnd_WeakHandle_get(a1 + 48);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v5 - 5592) + 248LL))(v5 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 72) & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get(a1 + 72);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v6 - 5592) + 248LL))(v6 - 5592, v9, 0, 0.0);
  }
  snd_Fade_Destroy_Fade(v9);
  snd_Fade_Fade_10c830(v9, v3);
  if ((snd_fnd_WeakHandle_isValid(a1 + 96) & 1) != 0) {
    v7 = snd_fnd_WeakHandle_get(a1 + 96);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(
        *(_QWORD*)(v7 - 5592) + 248LL))(v7 - 5592, v9, 0, 0.0);
  }
  return snd_Fade_Destroy_Fade(v9);
}

void DungeonEnemyTrajectory_fa0960(__int64 a1, float a2)
{
  _QWORD handle[2];
  __int64 v3;
  float v4;
  __int64 v5;
  char* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x4_t v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int i;
  __int64 v21;
  char* v22;
  __int64** v23;
  unsigned __int64 v24;
  float32x4_t v25;
  float v26;
  __int64* v27;
  float v28;
  __int64 v29;
  unsigned int v30;
  unsigned int j;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  unsigned int v35;
  unsigned int k;
  __int64 v37;
  __int64 v38;
  float32x4_t v39;
  float v40;
  __int64 v41;
  float v42;
  __int64 v43;
  unsigned int v44;
  unsigned int m;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  unsigned int n;
  __int64 v51;
  float32x4_t v52;
  float v53;
  __int64 v54;
  float v55;
  __int64 v56;
  unsigned int v57;
  unsigned int ii;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  unsigned int jj;
  __int64 v64;
  float32x4_t v65;
  float v66;
  __int64 v67;
  float v68;
  __int64 v69;
  unsigned int v70;
  unsigned int kk;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned int v75;
  unsigned int mm;
  __int64 v77;
  float32x4_t v78;
  float v79;
  __int64 v80;
  float v81;
  __int64 v82;
  unsigned int v83;
  unsigned int nn;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  unsigned int i1;
  __int64 v90;
  float32x4_t v91;
  float v92;
  __int64 v93;
  __int64 v94;
  float32x4_t v95;
  float v96;
  __int64 v97;
  __int64 v98;
  float32x4_t v99;
  float v100;
  __int64* v101;
  __int64 v102;
  float v103;
  __int64** v104;
  __int64* v105;
  __int64 v106;
  __int64** v107;
  __int64* v108;
  __int64 v109;
  __int64** v110;
  __int64* v111;
  __int64 v112;
  __int64** v113;
  __int64* v114;
  __int64 v115;
  __int64** v116;
  __int64* v117;
  __int64 v118;
  __int64** v119;
  __int64* v120;
  __int64 v121;
  __int64** v122;
  __int64* v123;
  __int64 v124;
  __int64** v125;
  __int64 v126;
  float v127;
  char* v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  char* v131;
  __int64 v132;
  char* v133;
  __int64 v134;
  char* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  char* v138;
  __int64 v139;
  char* v140;
  __int64 v141;
  char* v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  char* v145;
  __int64 v146;
  char* v147;
  __int64 v148;
  char* v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  char* v152;
  __int64 v153;
  char* v154;
  __int64 v155;
  __int64 v156;
  long double v157;
  struct {
    char* v158;
    char* v159;
    __int64 v160;
  } v158_;
  struct {
    __int64 v161;
    unsigned __int64 v162;
    char* v163;
  } v161_;
  struct {
    __int64 v164;
    int v165;
  } v164_;
  _QWORD v166[25];

  v3 = *(_QWORD*)GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 232LL) & 4) != 0 ||
      *(_DWORD*)(v3 + 140) != 0 || *(_BYTE*)(GameData_21f3d08 + 64) == 1 ||
      *(_QWORD*)(v3 + 200) == 0) {
    v5 = 0;
    v6 = nullptr;
    v158_.v159 = nullptr;
    v158_.v160 = 0;
    v158_.v158 = nullptr;
  }
  else {
    v4 = a2;
    DungeonController_f5f960((void*)((__int64*)&v158_.v158));
    v5 = (__int64)v158_.v158;
    v6 = v158_.v159;
    a2 = v4;
  }
  v7 = 0x0.0p+0f;
  if (v6 != (char*)v5) {
    v7 = 0x1.0000000000000p+0f;
  }
  v8 = *(float*)(a1 + 8);
  v9 = 0x1.3333340000000p-3f;
  if (v8 > v7) {
    v9 = 0x1.99999a0000000p-4f;
  }
  v10 = fabsf(a2 / v9);
  if (v8 > v7) {
    v8 = v8 - v10;
    if (v8 >= v7) {
      goto LABEL_17;
    }
  LABEL_16:
    v8 = v7;
    goto LABEL_17;
  }
  if (v8 < v7) {
    v8 = v8 + v10;
    if (v8 > v7) {
      goto LABEL_16;
    }
  }
LABEL_17:
  *(float*)(a1 + 8) = v8;
  v11 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v11 != 0) {
    v12 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v13 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v14 = std___1___shared_weak_count_lock_alt1(v13);
    std___1___shared_weak_count___release_weak_alt1(v11);
    if (v14 == 0 || v12 == 0) {
      *(_OWORD*)&v157 = (__typeof__(*(_OWORD*)&v157)){0};
      if (v14 == 0) {
        goto LABEL_28;
      }
    }
    else {
      v16 = vaddq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 16LL) + 560LL),
          COERCE_AS(float32x4_t, GameData_1a82cb0));
      LANES128(v16).n128_u32[3] = 0;
      v157 = *(long double*)&v16;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt1(v14);
    }
  }
  else {
    *(_OWORD*)&v157 = (__typeof__(*(_OWORD*)&v157)){0};
  }
LABEL_28:
  game_14a1b00(*(__int64**)(a1 + 120), *(float*)(a1 + 8));
  v17 = *(_QWORD*)(a1 + 120);
  v18 = *(_QWORD*)v17;
  if (*(_QWORD*)v17 != 0 && *(_DWORD*)(v18 + 16) == *(_DWORD*)(v17 + 8)) {
    v19 = *(_DWORD*)(v18 + 36);
    if (v19 != 0) {
      for (i = 0; i < v19; ++i) {
        if ((int)v19 > (int)i) {
          v21 = *(_QWORD*)(v18 + 40 + 8LL * (int)i);
          if (v21 != 0) {
            *(long double*)(v21 + 16) = v157;
            *(_BYTE*)(v21 + 128) = 1;
            v19 = *(_DWORD*)(v18 + 36);
          }
        }
      }
    }
  }
  game_14a3920(v17);
  v22 = v158_.v158;
  v23 = (__int64**)(a1 + 136);
  v24 = v158_.v159 - v158_.v158;
  if (v158_.v159 == v158_.v158) {
    v38 = 0;
  }
  else {
    v25 = vsubq_f32(
        *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v158_.v158 + 24LL) +
                                   16LL) +
                        560LL),
        *(float32x4_t*)&v157);
    v26 = atan2f_alt1(LANES128(v25).n128_f32[0], LANES128(v25).n128_f32[2]);
    v27 = *v23;
    v28 = v26;
    v29 = **v23;
    if (v29 != 0 && *(_DWORD*)(v29 + 16) == *((_DWORD*)v27 + 2)) {
      v30 = *(_DWORD*)(v29 + 36);
      if (v30 != 0) {
        for (j = 0; j < v30; ++j) {
          if ((int)v30 > (int)j) {
            v32 = *(_QWORD*)(v29 + 40 + 8LL * (int)j);
            if (v32 != 0) {
              *(long double*)(v32 + 16) = v157;
              *(_BYTE*)(v32 + 128) = 1;
              v30 = *(_DWORD*)(v29 + 36);
            }
          }
        }
      }
    }
    game_14a3920((__int64)v27);
    v33 = *v23;
    v34 = **v23;
    if (v34 != 0) {
      if (*(_DWORD*)(v34 + 16) != *((_DWORD*)v33 + 2)) {
        goto LABEL_55;
      }
      v35 = *(_DWORD*)(v34 + 36);
      if (v35 == 0) {
        goto LABEL_55;
      }
      for (k = 0; k < v35; ++k) {
        if ((int)v35 > (int)k) {
          v37 = *(_QWORD*)(v34 + 40 + 8LL * (int)k);
          if (v37 != 0) {
            *(float*)(v37 + 52) =
                (float)(v28 * 0x1.ca5dc20000000p+5f) + -0x1.6800000000000p+6f;
            *(_BYTE*)(v37 + 128) = 1;
            v35 = *(_DWORD*)(v34 + 36);
          }
        }
      }
      v33 = *v23;
      v34 = **v23;
      if (v34 != 0) {
      LABEL_55:
        if (*(_DWORD*)(v34 + 16) == *((_DWORD*)v33 + 2)) {
          *(_BYTE*)(v34 + 33) = 1;
          v33 = *v23;
        }
      }
    }
    game_14a1b00(v33, *(float*)(a1 + 8));
    if (v24 < 9) {
      v38 = 1;
    }
    else {
      v39 = vsubq_f32(
          *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v22 + 1) + 24LL) +
                                     16LL) +
                          560LL),
          *(float32x4_t*)&v157);
      v40 = atan2f_alt1(LANES128(v39).n128_f32[0], LANES128(v39).n128_f32[2]);
      v41 = *(_QWORD*)(a1 + 152);
      v42 = v40;
      v43 = *(_QWORD*)v41;
      if (*(_QWORD*)v41 != 0 && *(_DWORD*)(v43 + 16) == *(_DWORD*)(v41 + 8)) {
        v44 = *(_DWORD*)(v43 + 36);
        if (v44 != 0) {
          for (m = 0; m < v44; ++m) {
            if ((int)v44 > (int)m) {
              v46 = *(_QWORD*)(v43 + 40 + 8LL * (int)m);
              if (v46 != 0) {
                *(long double*)(v46 + 16) = v157;
                *(_BYTE*)(v46 + 128) = 1;
                v44 = *(_DWORD*)(v43 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v41);
      v47 = *(_QWORD*)(a1 + 152);
      v48 = *(_QWORD*)v47;
      if (*(_QWORD*)v47 != 0) {
        if (*(_DWORD*)(v48 + 16) != *(_DWORD*)(v47 + 8)) {
          goto LABEL_76;
        }
        v49 = *(_DWORD*)(v48 + 36);
        if (v49 == 0) {
          goto LABEL_76;
        }
        for (n = 0; n < v49; ++n) {
          if ((int)v49 > (int)n) {
            v51 = *(_QWORD*)(v48 + 40 + 8LL * (int)n);
            if (v51 != 0) {
              *(float*)(v51 + 52) =
                  (float)(v42 * 0x1.ca5dc20000000p+5f) + -0x1.6800000000000p+6f;
              *(_BYTE*)(v51 + 128) = 1;
              v49 = *(_DWORD*)(v48 + 36);
            }
          }
        }
        v47 = *(_QWORD*)(a1 + 152);
        v48 = *(_QWORD*)v47;
        if (*(_QWORD*)v47 != 0) {
        LABEL_76:
          if (*(_DWORD*)(v48 + 16) == *(_DWORD*)(v47 + 8)) {
            *(_BYTE*)(v48 + 33) = 1;
            v47 = *(_QWORD*)(a1 + 152);
          }
        }
      }
      game_14a1b00((__int64*)v47, *(float*)(a1 + 8));
      if (v24 < 0x11) {
        v38 = 2;
      }
      else {
        v52 = vsubq_f32(
            *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v22 + 2) + 24LL) +
                                       16LL) +
                            560LL),
            *(float32x4_t*)&v157);
        v53 = atan2f_alt1(LANES128(v52).n128_f32[0], LANES128(v52).n128_f32[2]);
        v54 = *(_QWORD*)(a1 + 168);
        v55 = v53;
        v56 = *(_QWORD*)v54;
        if (*(_QWORD*)v54 != 0 && *(_DWORD*)(v56 + 16) == *(_DWORD*)(v54 + 8)) {
          v57 = *(_DWORD*)(v56 + 36);
          if (v57 != 0) {
            for (ii = 0; ii < v57; ++ii) {
              if ((int)v57 > (int)ii) {
                v59 = *(_QWORD*)(v56 + 40 + 8LL * (int)ii);
                if (v59 != 0) {
                  *(long double*)(v59 + 16) = v157;
                  *(_BYTE*)(v59 + 128) = 1;
                  v57 = *(_DWORD*)(v56 + 36);
                }
              }
            }
          }
        }
        game_14a3920(v54);
        v60 = *(_QWORD*)(a1 + 168);
        v61 = *(_QWORD*)v60;
        if (*(_QWORD*)v60 != 0) {
          if (*(_DWORD*)(v61 + 16) != *(_DWORD*)(v60 + 8)) {
            goto LABEL_97;
          }
          v62 = *(_DWORD*)(v61 + 36);
          if (v62 == 0) {
            goto LABEL_97;
          }
          for (jj = 0; jj < v62; ++jj) {
            if ((int)v62 > (int)jj) {
              v64 = *(_QWORD*)(v61 + 40 + 8LL * (int)jj);
              if (v64 != 0) {
                *(float*)(v64 + 52) = (float)(v55 * 0x1.ca5dc20000000p+5f) +
                                      -0x1.6800000000000p+6f;
                *(_BYTE*)(v64 + 128) = 1;
                v62 = *(_DWORD*)(v61 + 36);
              }
            }
          }
          v60 = *(_QWORD*)(a1 + 168);
          v61 = *(_QWORD*)v60;
          if (*(_QWORD*)v60 != 0) {
          LABEL_97:
            if (*(_DWORD*)(v61 + 16) == *(_DWORD*)(v60 + 8)) {
              *(_BYTE*)(v61 + 33) = 1;
              v60 = *(_QWORD*)(a1 + 168);
            }
          }
        }
        game_14a1b00((__int64*)v60, *(float*)(a1 + 8));
        if (v24 < 0x19) {
          v38 = 3;
        }
        else {
          v65 = vsubq_f32(
              *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v22 + 3) +
                                                    24LL) +
                                         16LL) +
                              560LL),
              *(float32x4_t*)&v157);
          v66 =
              atan2f_alt1(LANES128(v65).n128_f32[0], LANES128(v65).n128_f32[2]);
          v67 = *(_QWORD*)(a1 + 184);
          v68 = v66;
          v69 = *(_QWORD*)v67;
          if (*(_QWORD*)v67 != 0 &&
              *(_DWORD*)(v69 + 16) == *(_DWORD*)(v67 + 8)) {
            v70 = *(_DWORD*)(v69 + 36);
            if (v70 != 0) {
              for (kk = 0; kk < v70; ++kk) {
                if ((int)v70 > (int)kk) {
                  v72 = *(_QWORD*)(v69 + 40 + 8LL * (int)kk);
                  if (v72 != 0) {
                    *(long double*)(v72 + 16) = v157;
                    *(_BYTE*)(v72 + 128) = 1;
                    v70 = *(_DWORD*)(v69 + 36);
                  }
                }
              }
            }
          }
          game_14a3920(v67);
          v73 = *(_QWORD*)(a1 + 184);
          v74 = *(_QWORD*)v73;
          if (*(_QWORD*)v73 != 0) {
            if (*(_DWORD*)(v74 + 16) != *(_DWORD*)(v73 + 8)) {
              goto LABEL_118;
            }
            v75 = *(_DWORD*)(v74 + 36);
            if (v75 == 0) {
              goto LABEL_118;
            }
            for (mm = 0; mm < v75; ++mm) {
              if ((int)v75 > (int)mm) {
                v77 = *(_QWORD*)(v74 + 40 + 8LL * (int)mm);
                if (v77 != 0) {
                  *(float*)(v77 + 52) = (float)(v68 * 0x1.ca5dc20000000p+5f) +
                                        -0x1.6800000000000p+6f;
                  *(_BYTE*)(v77 + 128) = 1;
                  v75 = *(_DWORD*)(v74 + 36);
                }
              }
            }
            v73 = *(_QWORD*)(a1 + 184);
            v74 = *(_QWORD*)v73;
            if (*(_QWORD*)v73 != 0) {
            LABEL_118:
              if (*(_DWORD*)(v74 + 16) == *(_DWORD*)(v73 + 8)) {
                *(_BYTE*)(v74 + 33) = 1;
                v73 = *(_QWORD*)(a1 + 184);
              }
            }
          }
          game_14a1b00((__int64*)v73, *(float*)(a1 + 8));
          if (v24 < 0x21) {
            v38 = 4;
          }
          else {
            v78 = vsubq_f32(
                *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v22 + 4) +
                                                      24LL) +
                                           16LL) +
                                560LL),
                *(float32x4_t*)&v157);
            v79 = atan2f_alt1(LANES128(v78).n128_f32[0],
                              LANES128(v78).n128_f32[2]);
            v80 = *(_QWORD*)(a1 + 200);
            v81 = v79;
            v82 = *(_QWORD*)v80;
            if (*(_QWORD*)v80 != 0 &&
                *(_DWORD*)(v82 + 16) == *(_DWORD*)(v80 + 8)) {
              v83 = *(_DWORD*)(v82 + 36);
              if (v83 != 0) {
                for (nn = 0; nn < v83; ++nn) {
                  if ((int)v83 > (int)nn) {
                    v85 = *(_QWORD*)(v82 + 40 + 8LL * (int)nn);
                    if (v85 != 0) {
                      *(long double*)(v85 + 16) = v157;
                      *(_BYTE*)(v85 + 128) = 1;
                      v83 = *(_DWORD*)(v82 + 36);
                    }
                  }
                }
              }
            }
            game_14a3920(v80);
            v86 = *(_QWORD*)(a1 + 200);
            v87 = *(_QWORD*)v86;
            if (*(_QWORD*)v86 != 0) {
              if (*(_DWORD*)(v87 + 16) != *(_DWORD*)(v86 + 8)) {
                goto LABEL_139;
              }
              v88 = *(_DWORD*)(v87 + 36);
              if (v88 == 0) {
                goto LABEL_139;
              }
              for (i1 = 0; i1 < v88; ++i1) {
                if ((int)v88 > (int)i1) {
                  v90 = *(_QWORD*)(v87 + 40 + 8LL * (int)i1);
                  if (v90 != 0) {
                    *(float*)(v90 + 52) = (float)(v81 * 0x1.ca5dc20000000p+5f) +
                                          -0x1.6800000000000p+6f;
                    *(_BYTE*)(v90 + 128) = 1;
                    v88 = *(_DWORD*)(v87 + 36);
                  }
                }
              }
              v86 = *(_QWORD*)(a1 + 200);
              v87 = *(_QWORD*)v86;
              if (*(_QWORD*)v86 != 0) {
              LABEL_139:
                if (*(_DWORD*)(v87 + 16) == *(_DWORD*)(v86 + 8)) {
                  *(_BYTE*)(v87 + 33) = 1;
                  v86 = *(_QWORD*)(a1 + 200);
                }
              }
            }
            game_14a1b00((__int64*)v86, *(float*)(a1 + 8));
            if (v24 < 0x29) {
              v38 = 5;
            }
            else {
              v91 = vsubq_f32(
                  *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v22 + 5) +
                                                        24LL) +
                                             16LL) +
                                  560LL),
                  *(float32x4_t*)&v157);
              v92 = (float)(atan2f_alt1(LANES128(v91).n128_f32[0],
                                        LANES128(v91).n128_f32[2]) *
                            0x1.ca5dc20000000p+5f) +
                    -0x1.6800000000000p+6f;
              GameRoutine_14a17c0((__int64*)(a1 + 216), v157);
              GameRoutine_14a1940((__int64**)(a1 + 216), v92);
              v93 = *(_QWORD*)(a1 + 216);
              v94 = *(_QWORD*)v93;
              if (*(_QWORD*)v93 != 0 &&
                  *(_DWORD*)(v94 + 16) == *(_DWORD*)(v93 + 8)) {
                *(_BYTE*)(v94 + 33) = 1;
                v93 = *(_QWORD*)(a1 + 216);
              }
              game_14a1b00((__int64*)v93, *(float*)(a1 + 8));
              if (v24 < 0x31) {
                v38 = 6;
              }
              else {
                v95 = vsubq_f32(
                    *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v22 + 6) +
                                                          24LL) +
                                               16LL) +
                                    560LL),
                    *(float32x4_t*)&v157);
                v96 = (float)(atan2f_alt1(LANES128(v95).n128_f32[0],
                                          LANES128(v95).n128_f32[2]) *
                              0x1.ca5dc20000000p+5f) +
                      -0x1.6800000000000p+6f;
                GameRoutine_14a17c0((__int64*)(a1 + 232), v157);
                GameRoutine_14a1940((__int64**)(a1 + 232), v96);
                v97 = *(_QWORD*)(a1 + 232);
                v98 = *(_QWORD*)v97;
                if (*(_QWORD*)v97 != 0 &&
                    *(_DWORD*)(v98 + 16) == *(_DWORD*)(v97 + 8)) {
                  *(_BYTE*)(v98 + 33) = 1;
                  v97 = *(_QWORD*)(a1 + 232);
                }
                game_14a1b00((__int64*)v97, *(float*)(a1 + 8));
                if (v24 >= 0x39) {
                  v99 = vsubq_f32(
                      *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*((_QWORD*)v22 +
                                                              7) +
                                                            24LL) +
                                                 16LL) +
                                      560LL),
                      *(float32x4_t*)&v157);
                  v100 = (float)(atan2f_alt1(LANES128(v99).n128_f32[0],
                                             LANES128(v99).n128_f32[2]) *
                                 0x1.ca5dc20000000p+5f) +
                         -0x1.6800000000000p+6f;
                  GameRoutine_14a17c0((__int64*)(a1 + 248), v157);
                  GameRoutine_14a1940((__int64**)(a1 + 248), v100);
                  v101 = *(__int64**)(a1 + 248);
                  v102 = *v101;
                  if (*v101 != 0 &&
                      *(_DWORD*)(v102 + 16) == *((_DWORD*)v101 + 2)) {
                    *(_BYTE*)(v102 + 33) = 1;
                    v101 = *(__int64**)(a1 + 248);
                  }
                  v103 = *(float*)(a1 + 8);
                LABEL_189:
                  game_14a1b00(v101, v103);
                  goto LABEL_190;
                }
                v38 = 7;
              }
            }
          }
        }
      }
    }
  }
  v104 = &v23[2 * v38];
  v105 = *v104;
  v106 = **v104;
  if (v106 != 0 && *(_DWORD*)(v106 + 16) == *((_DWORD*)v105 + 2)) {
    *(_BYTE*)(v106 + 33) = 0;
    v105 = *v104;
  }
  game_14a1b00(v105, 0x0.0p+0f);
  if (v38 != 7) {
    v107 = &v23[2 * v38 + 2];
    v108 = *v107;
    v109 = **v107;
    if (v109 != 0 && *(_DWORD*)(v109 + 16) == *((_DWORD*)v108 + 2)) {
      *(_BYTE*)(v109 + 33) = 0;
      v108 = *v107;
    }
    game_14a1b00(v108, 0x0.0p+0f);
    if (v38 != 6) {
      v110 = &v23[2 * v38 + 4];
      v111 = *v110;
      v112 = **v110;
      if (v112 != 0 && *(_DWORD*)(v112 + 16) == *((_DWORD*)v111 + 2)) {
        *(_BYTE*)(v112 + 33) = 0;
        v111 = *v110;
      }
      game_14a1b00(v111, 0x0.0p+0f);
      if (v38 != 5) {
        v113 = &v23[2 * v38 + 6];
        v114 = *v113;
        v115 = **v113;
        if (v115 != 0 && *(_DWORD*)(v115 + 16) == *((_DWORD*)v114 + 2)) {
          *(_BYTE*)(v115 + 33) = 0;
          v114 = *v113;
        }
        game_14a1b00(v114, 0x0.0p+0f);
        if (v38 != 4) {
          v116 = &v23[2 * v38 + 8];
          v117 = *v116;
          v118 = **v116;
          if (v118 != 0 && *(_DWORD*)(v118 + 16) == *((_DWORD*)v117 + 2)) {
            *(_BYTE*)(v118 + 33) = 0;
            v117 = *v116;
          }
          game_14a1b00(v117, 0x0.0p+0f);
          if (v38 != 3) {
            v119 = &v23[2 * v38 + 10];
            v120 = *v119;
            v121 = **v119;
            if (v121 != 0 && *(_DWORD*)(v121 + 16) == *((_DWORD*)v120 + 2)) {
              *(_BYTE*)(v121 + 33) = 0;
              v120 = *v119;
            }
            game_14a1b00(v120, 0x0.0p+0f);
            if (v38 != 2) {
              v122 = &v23[2 * v38 + 12];
              v123 = *v122;
              v124 = **v122;
              if (v124 != 0 && *(_DWORD*)(v124 + 16) == *((_DWORD*)v123 + 2)) {
                *(_BYTE*)(v124 + 33) = 0;
                v123 = *v122;
              }
              game_14a1b00(v123, 0x0.0p+0f);
              if (v38 != 1) {
                v125 = &v23[2 * v38 + 14];
                v101 = *v125;
                v126 = **v125;
                if (v126 != 0 &&
                    *(_DWORD*)(v126 + 16) == *((_DWORD*)v101 + 2)) {
                  *(_BYTE*)(v126 + 33) = 0;
                  v101 = *v125;
                }
                v103 = 0x0.0p+0f;
                goto LABEL_189;
              }
            }
          }
        }
      }
    }
  }
LABEL_190:
  if (*(int*)(a1 + 16) < (unsigned __int64)((__int64)v24 >> 3)) {
    DungeonEnemyTrajectory_fa03f0(a1, 1);
  }
  *(_DWORD*)(a1 + 16) = v24 >> 3;
  v127 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                 0x1.0aef000000000p+4f) /
         0x1.f400000000000p+9f;
  if (*(float*)(a1 + 8) <= 0x0.0p+0f) {
    DungeonEnemyTrajectory_fa03f0(a1, 0);
    goto LABEL_276;
  }
  if ((*(_BYTE*)(a1 + 21) & 1) != 0) {
    goto LABEL_276;
  }
  DungeonEnemyTrajectory_fa03f0(a1, 1);
  *(_BYTE*)(a1 + 21) = 1;
  *(_DWORD*)(a1 + 12) = 1065353216;
  v128 = game_util_Format_alt1("SE_EFF_Dng_Round%d_lp", 1);
  v129 = strlen_alt1(v128);
  if (v129 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_281:
    String_60a1d0();
  }
  v130 = v129;
  if (v129 >= 0x17) {
    if ((v129 | 7) == 0x17) {
      v132 = 26;
    }
    else {
      v132 = (v129 | 7) + 1;
    }
    v131 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v132,
                                                 16, 0);
    v161_.v162 = v130;
    v161_.v163 = v131;
    v161_.v161 = v132 | 1;
    goto LABEL_203;
  }
  v131 = (char*)&v161_.v161 + 1;
  LOBYTE(v161_.v161) = 2 * v129;
  if (v129 != 0) {
  LABEL_203:
    memmove_alt1((__int64)v131, (__int64)v128, v130);
  }
  v131[v130] = 0;
  if ((v161_.v161 & 1) != 0) {
    v133 = v161_.v163;
  }
  else {
    v133 = (char*)&v161_.v161 + 1;
  }
  if (v133 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v166, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v133, (__int64)v133, (__int64)v166,
                   0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v166);
  }
  else {
    v164_.v164 = 0;
    v164_.v165 = 0x2000;
  }
  GameRoutine_112180(a1 + 24, (__int64)&v164_.v164);
  if ((v161_.v161 & 1) != 0 && v161_.v163 != nullptr) {
    v134 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v134 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v134, (__int64)v161_.v163);
  }
  v135 = game_util_Format_alt1("SE_EFF_Dng_Round%d_lp", 2);
  v136 = strlen_alt1(v135);
  if (v136 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_281;
  }
  v137 = v136;
  if (v136 >= 0x17) {
    if ((v136 | 7) == 0x17) {
      v139 = 26;
    }
    else {
      v139 = (v136 | 7) + 1;
    }
    v138 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v139,
                                                 16, 0);
    v161_.v162 = v137;
    v161_.v163 = v138;
    v161_.v161 = v139 | 1;
    goto LABEL_223;
  }
  v138 = (char*)&v161_.v161 + 1;
  LOBYTE(v161_.v161) = 2 * v136;
  if (v136 != 0) {
  LABEL_223:
    memmove_alt1((__int64)v138, (__int64)v135, v137);
  }
  v138[v137] = 0;
  if ((v161_.v161 & 1) != 0) {
    v140 = v161_.v163;
  }
  else {
    v140 = (char*)&v161_.v161 + 1;
  }
  if (v140 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v166, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v140, (__int64)v140, (__int64)v166,
                   0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v166);
  }
  else {
    v164_.v164 = 0;
    v164_.v165 = 0x2000;
  }
  GameRoutine_112180(a1 + 48, (__int64)&v164_.v164);
  if ((v161_.v161 & 1) != 0 && v161_.v163 != nullptr) {
    v141 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v141 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v141, (__int64)v161_.v163);
  }
  v142 = game_util_Format_alt1("SE_EFF_Dng_Round%d_lp", 3);
  v143 = strlen_alt1(v142);
  if (v143 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_281;
  }
  v144 = v143;
  if (v143 >= 0x17) {
    if ((v143 | 7) == 0x17) {
      v146 = 26;
    }
    else {
      v146 = (v143 | 7) + 1;
    }
    v145 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v146,
                                                 16, 0);
    v161_.v162 = v144;
    v161_.v163 = v145;
    v161_.v161 = v146 | 1;
    goto LABEL_243;
  }
  v145 = (char*)&v161_.v161 + 1;
  LOBYTE(v161_.v161) = 2 * v143;
  if (v143 != 0) {
  LABEL_243:
    memmove_alt1((__int64)v145, (__int64)v142, v144);
  }
  v145[v144] = 0;
  if ((v161_.v161 & 1) != 0) {
    v147 = v161_.v163;
  }
  else {
    v147 = (char*)&v161_.v161 + 1;
  }
  if (v147 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v166, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v147, (__int64)v147, (__int64)v166,
                   0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v166);
  }
  else {
    v164_.v164 = 0;
    v164_.v165 = 0x2000;
  }
  GameRoutine_112180(a1 + 72, (__int64)&v164_.v164);
  if ((v161_.v161 & 1) != 0 && v161_.v163 != nullptr) {
    v148 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v148 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v148, (__int64)v161_.v163);
  }
  v149 = game_util_Format_alt1("SE_EFF_Dng_Round%d_lp", 4);
  v150 = strlen_alt1(v149);
  if (v150 > 0xFFFFFFFFFFFFFFF6LL) {
    goto LABEL_281;
  }
  v151 = v150;
  if (v150 >= 0x17) {
    if ((v150 | 7) == 0x17) {
      v153 = 26;
    }
    else {
      v153 = (v150 | 7) + 1;
    }
    v152 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v153,
                                                 16, 0);
    v161_.v162 = v151;
    v161_.v163 = v152;
    v161_.v161 = v153 | 1;
  }
  else {
    v152 = (char*)&v161_.v161 + 1;
    LOBYTE(v161_.v161) = 2 * v150;
    if (v150 == 0) {
      goto LABEL_264;
    }
  }
  memmove_alt1((__int64)v152, (__int64)v149, v151);
LABEL_264:
  v152[v151] = 0;
  if ((v161_.v161 & 1) != 0) {
    v154 = v161_.v163;
  }
  else {
    v154 = (char*)&v161_.v161 + 1;
  }
  if (v154 != nullptr) {
    snd_Fade_Fade_10c830_alt1((__int64)v166, 0x0.0p+0f);
    snd_play_ff2d0((void*)(handle), (__int64)v154, (__int64)v154, (__int64)v166,
                   0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade_alt1(v166);
  }
  else {
    v164_.v164 = 0;
    v164_.v165 = 0x2000;
  }
  GameRoutine_112180(a1 + 96, (__int64)&v164_.v164);
  if ((v161_.v161 & 1) != 0 && v161_.v163 != nullptr) {
    v155 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v155 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v155, (__int64)v161_.v163);
  }
  v22 = v158_.v158;
  v127 = 0x1.f400000000000p+9f;
LABEL_276:
  game_hub_fa1b40_alt1(a1, v127);
  if (v22 != nullptr) {
    v156 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v156 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v156, (__int64)v22);
  }
}

#pragma GCC visibility pop
