#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_10690a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_combat_10901b0(PSEUDO_X8, float32x4_t*,
                                                    float);
__int64* CharacterAnimator_1079d90(__int64, __int64);
__int64 CharacterAnimator_1079e10(__int64);
__int64 GameRoutine_10f16c0(__int64 result);
__int64 game_108c8a0(int);
__n128 game_combat_1090030(__int64);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21ec7b0;
extern __int64 GameData_2235e30;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
void GameRoutine_106a7f0(float, float);
void GameRoutine_106a860(__int64, float*, long double);
void GameRoutine_10908e0(__int64, _DWORD*);
void ActionApproach_Unknown5(__int64 a1);
void ActionApproach_Unknown6(__int64 a1);
__attribute__((swiftcall)) void game_combat_10690a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
game_combat_10901b0_alt1(PSEUDO_X8, _QWORD* result,
                         float) __asm__("game_combat_10901b0");
__int64
CharacterAnimator_1079d90_alt1(__int64,
                               __int64) __asm__("CharacterAnimator_1079d90");
__int64 GameRoutine_106a860_alt1(__int64 result,
                                 float*) __asm__("GameRoutine_106a860");
__int64 GameRoutine_10908e0_alt1(__int64 result,
                                 _DWORD*) __asm__("GameRoutine_10908e0");
__int64 game_combat_1090030_alt1(__int64 result) __asm__("game_combat_1090030");
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
float CharacterAnimator_1079580_alt1(__int64, int, float, float, float) __asm__(
    "CharacterAnimator_1079580");

void ActionApproach_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64* v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  int* v26;
  unsigned __int32 v27;
  __int128 v28;
  __int64 v29;
  int v30;
  int v31;
  float v32;
  float32x4_t v33;
  int v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  bool v46;
  unsigned int v47;
  char v48;
  char v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  float v59;
  float v60;
  unsigned int v61;
  int v62;
  float v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  bool v67;
  __int64 v68;
  bool v69;
  float v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  bool v74;
  __int64 v75;
  bool v76;
  int v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  long double v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned int v94;
  unsigned int v95;
  char v96;
  char v97;
  __int64 v98;
  int v99;
  __int64 v100;
  int v101;
  float32x4_t v102;

  v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 24);
  GameRoutine_10908e0_alt1(v1 + 56, (_DWORD*)v2),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  game_combat_1090030_alt1(v2),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_10f16c0(v2),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  if (GameData_21ec7b0 == 0) {
    goto LABEL_26;
  }
  v4 = GameData_21ec7b0 +
       24LL * (((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1) & 0xFFFFFFFD) != 0);
  v5 = *(_QWORD*)(v4 + 32);
  if (v5 == 0) {
    goto LABEL_26;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v6 = *(_QWORD*)(v4 + 40);
  v7 = *(_QWORD*)(v5 + 8) == -1 || v6 == 0;
  if (v7 || (v8 = *(_QWORD*)(v6 + 80)) == 0 ||
      (*(_QWORD*)(v8 + 8) != -1 ? (v9 = *(_QWORD*)(v6 + 88) == 0) : (v9 = true),
       v9 || *(_QWORD*)(v5 + 8) == -1)) {
    std___1___shared_weak_count___release_weak_alt1(v5),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    goto LABEL_26;
  }
  std___1___shared_weak_count___release_weak_alt1(v5),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  if (GameData_21ec7b0 != 0 && (v10 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0) {
    if ((*(_WORD*)(v10 + 113) & 0x180) != 0 ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v6 + 568) + 368LL) + 88LL) & 1) != 0) {
      goto LABEL_26;
    }
    v11 = *(_QWORD*)(v10 + 32);
    v12 = *(_QWORD*)(v10 + 40);
    if (v11 == v12) {
      v16 = &GameData_2235e30;
    LABEL_173:
      if (v16[7] == 0 && (*((_BYTE*)v16 + 4) & 0x80) != 0 ||
          (*(_BYTE*)v16 & 0x80) != 0) {
        goto LABEL_26;
      }
      goto LABEL_147;
    }
    v13 = *(_DWORD*)(v10 + 56);
    v14 = 954437177 * ((unsigned __int64)(v12 - v11) >> 4) - 1;
    if (v13 < v14) {
      v14 = v13;
    }
    if (v13 >= 0) {
      v15 = v14;
    }
    else {
      v15 = 0;
    }
    if (v11 != 0) {
      v16 = (__int64*)(v11 + 144LL * v15);
      goto LABEL_173;
    }
  }
  else if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v6 + 568) + 368LL) + 88LL) & 1) !=
           0) {
    goto LABEL_26;
  }
LABEL_147:
  *(float*)&v89 = X8CALL_S0(float, game_combat_10690a0((void*)((__int64)&v102),
                                                       *(_QWORD*)(v6 + 808))),
  v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  if (GameData_21ec7b0 == 0 || (v90 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (~*(_DWORD*)(v90 + 112) & 0x28000) != 0) {
    v91 = *(_QWORD*)(*(_QWORD*)(v6 + 808) + 88LL);
    v92 = *(_QWORD*)(v91 + 392);
    v93 = *(_QWORD*)(v91 + 400);
    if (v93 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v93 + 8), 1u,
                                memory_order_relaxed);
    }
    v94 = *(_DWORD*)(v92 + 11784);
    v46 = v94 > 0x12;
    v95 = 0x1FF7Fu >> v94;
    v96 = v46;
    v97 = v96 | v95;
    if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v93 + 16LL))(v93, v89),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v93),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if ((v97 & 1) != 0) {
      v98 = *(_QWORD*)(v6 + 808);
      *(_DWORD*)(v6 + 844) = *(_DWORD*)(v98 + 48);
      v99 = *(_DWORD*)(v98 + 52);
      *(_QWORD*)(v6 + 860) = 0x3EAAAAAB00000000LL;
      *(_DWORD*)(v6 + 848) = v99;
      *(_QWORD*)(v6 + 852) = LANES128(v102).n128_u64[0];
    }
  }
  v100 = *(_QWORD*)(v6 + 368);
  if (*(_DWORD*)(v100 + 120) != 501870813) {
    v101 = game_108c8a0(501870813),
    v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v101 == -574916402 ||
        v101 != (unsigned int)game_108c8a0(*(_DWORD*)(v100 + 120))) {
      if ((CharacterAnimator_1079e10(v100) & 1) != 0) {
        CharacterAnimator_1079580_alt1(v100, 501870813, -0x1.0000000000000p+0f,
                                       -0x1.0000000000000p+0f,
                                       0x1.0000000000000p+0f),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        *(_DWORD*)(v100 + 124) = 501870813;
      }
    }
  }
LABEL_26:
  if ((*(_BYTE*)v2 & 0x80) != 0) {
    v17 = *(_DWORD*)(v2 + 8);
    if ((v17 & 0xFFFFFFFE) == 2) {
      v18 = v2 + 12LL * (v17 & 1);
      if ((*(_DWORD*)(v18 + 104) & 0x80000000) != 0 && *(int*)(v18 + 96) > 0) {
        v19 = GameData_21ec7b0 + 24LL * v17;
        v20 = *(_QWORD*)(v19 + 32);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                  memory_order_relaxed);
        v21 = *(_QWORD*)(v19 + 40);
        v22 = *(_QWORD*)(v20 + 8) == -1 || v21 == 0;
        if (v22 || (v23 = *(_QWORD*)(v21 + 80)) == 0 ||
            (*(_QWORD*)(v23 + 8) != -1 ? (v24 = *(_QWORD*)(v21 + 88) == 0)
                                       : (v24 = true),
             v24)) {
          v21 = 0;
        }
        std___1___shared_weak_count___release_weak_alt1(v20),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(v21 + 536) = 2;
        v25 = GameData_21ec7b0;
        if (GameData_21ec7b0 == 0) {
          goto LABEL_50;
        }
        goto LABEL_48;
      }
    }
    v26 = (int*)(v2 + 96 + 12LL * (int)v17);
    if (v26[2] < 0 && *v26 > 0 ||
        *(_QWORD*)(v2 + 96 + 12LL * (((v17 - 1) & 0xFFFFFFFD) != 0)) == 0) {
      game_combat_10690a0((void*)((__int64)&v102), v1),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
      v27 = LANES128(v102).n128_u32[0];
      *(_DWORD*)(v2 + 36) = 0;
      *(_DWORD*)(v2 + 32) = v27;
      v28 = *(_OWORD*)(v2 + 32);
      *((_QWORD*)&v28 + 1) = LANES128(v102).n128_u32[1];
      *(_OWORD*)(v2 + 32) = v28;
    }
  }
  v25 = GameData_21ec7b0;
  if (GameData_21ec7b0 != 0) {
  LABEL_48:
    v29 = *(_QWORD*)(v25 + 8);
    if (v29 != 0 && (*(_DWORD*)(v29 + 112) & 0x208000) != 0) {
    LABEL_51:
      v30 = *(_DWORD*)(a1 + 16);
      if (v30 != 1 && v30 != 3) {
        if (v30 == 2) {
        LABEL_54:
          v31 = 3;
        LABEL_137:
          *(_DWORD*)(a1 + 16) = v31;
          return;
        }
      LABEL_136:
        v31 = 1;
        goto LABEL_137;
      }
      return;
    }
  }
LABEL_50:
  if (*(_DWORD*)(v2 + 64) == -574916402) {
    goto LABEL_51;
  }
  v32 = 0x0.0p+0f;
  game_combat_10901b0_alt1((void*)(&v102), (_QWORD*)v2, 0x0.0p+0f),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  v33 = v102;
  *(int32x2_t*)(a1 + 32) = vzip1_s32(
      COERCE_AS(int32x2_t, LANES128(v102).n128_u64[0]),
      COERCE_AS(int32x2_t, LANES128_OF(vextq_s8(v102, v102, 8u)).n128_u64[0]));
  v34 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL);
  if ((v34 & 0xFFFFFFFE) == 2) {
    v35 = LANES128(v33).n128_f32[2] - *(float*)(v1 + 44);
    v36 = LANES128(v33).n128_f32[0] - *(float*)(v1 + 40);
    v37 = (float)(PSEUDO_UNFUSED(v35 * v35)) + (float)(v36 * v36);
    v38 = 0x1.0000000000000p+0f;
    v39 = 0x1.0000000000000p+0f;
    if (v37 >= 0x1.0000000000000p-23f) {
      v40 = 0x1.0000000000000p+0f / sqrtf(v37);
      v32 = v36 * v40;
      v39 = v35 * v40;
    }
    if (v34 != 3) {
      v38 = -0x1.0000000000000p+0f;
    }
    *(float*)(a1 + 32) =
        LANES128(v33).n128_f32[0] -
        (float)(PSEUDO_UNFUSED((float)(v38 * v39) * 0x1.6666660000000p-1f));
    *(float*)(a1 + 36) =
        LANES128(v33).n128_f32[2] +
        (float)(PSEUDO_UNFUSED((float)(v38 * v32) * 0x1.6666660000000p-1f));
  }
  if (GameData_21ec7b0 == 0 || (v41 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
      (~*(_DWORD*)(v41 + 112) & 0x28000) != 0) {
    v42 = *(_QWORD*)(*(_QWORD*)(v1 + 808) + 88LL);
    v43 = *(_QWORD*)(v42 + 392);
    v44 = *(_QWORD*)(v42 + 400);
    if (v44 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                memory_order_relaxed);
    }
    v45 = *(_DWORD*)(v43 + 11784);
    v46 = v45 > 0x12;
    v47 = 0x1FF7Fu >> v45;
    v48 = v46;
    v49 = v48 | v47;
    if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v44),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if ((v49 & 1) != 0) {
      v50 = *(_QWORD*)(v1 + 808);
      *(_DWORD*)(v1 + 844) = *(_DWORD*)(v50 + 48);
      *(_DWORD*)(v1 + 848) = *(_DWORD*)(v50 + 52);
      *(_DWORD*)(v1 + 852) = *(_DWORD*)(a1 + 32);
      v51 = *(_DWORD*)(a1 + 36);
      *(_QWORD*)(v1 + 860) = 0x3EAAAAAB00000000LL;
      *(_DWORD*)(v1 + 856) = v51;
    }
  }
  v52 = CharacterAnimator_1079d90_alt1(*(_QWORD*)(v1 + 368),
                                       *(unsigned int*)(v2 + 64)),
  v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
  v53 = *(_QWORD*)(v1 + 80);
  if (v53 == 0) {
    goto LABEL_86;
  }
  if (*(_QWORD*)(v53 + 8) == -1) {
    goto LABEL_86;
  }
  v54 = *(_QWORD*)(v1 + 88);
  if (v54 == 0) {
    goto LABEL_86;
  }
  v56 = *(_QWORD*)(v54 + 392);
  v55 = *(_QWORD*)(v54 + 400);
  if (v55 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v56 != 0) {
    v32 = fmaxf(*(float*)(v56 + 32), 0x1.0000000000000p+0f);
    if (v55 == 0) {
      goto LABEL_85;
    }
  }
  else if (v55 == 0) {
    goto LABEL_85;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v57 = v52;
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v55),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    v52 = v57;
  }
LABEL_85:
  if (v56 == 0) {
  LABEL_86:
    v32 = 0x1.0000000000000p+0f;
  }
  v58 = *(_QWORD*)(v2 + 48);
  v59 = v32 * *(float*)(v52 + 20);
  v60 = v32 * *(float*)(v52 + 16);
  if (v58 != 0 &&
      ((v61 = *(_DWORD*)(v2 + 8), *(_DWORD*)(v58 + 8) == v61) ||
       (v62 = *(_DWORD*)(v58 + 68)) == -1911544118 || v62 == -1911544124)) {
    v63 = 0x0.0p+0f;
    if (GameData_21ec7b0 != 0 && v61 <= 3) {
      v64 = GameData_21ec7b0 + 24LL * v61;
      v65 = *(_QWORD*)(v64 + 32);
      if (v65 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 16), 1u,
                                  memory_order_relaxed);
        v66 = *(_QWORD*)(v64 + 40);
        v67 = *(_QWORD*)(v65 + 8) == -1 || v66 == 0;
        if (v67 || (v68 = *(_QWORD*)(v66 + 80)) == 0 ||
            (*(_QWORD*)(v68 + 8) != -1 ? (v69 = *(_QWORD*)(v66 + 88) == 0)
                                       : (v69 = true),
             v69 || *(_QWORD*)(v65 + 8) == -1)) {
          std___1___shared_weak_count___release_weak_alt1(v65),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        else {
          std___1___shared_weak_count___release_weak_alt1(v65),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if ((unsigned int)(*(_DWORD*)(v66 + 56) - 3) >= 2) {
            v63 = 0x0.0p+0f;
          }
          else {
            v63 = v59;
          }
        }
      }
    }
  }
  else {
    v63 = v59;
  }
  *(float*)(a1 + 40) = v60;
  v70 = sqrtf((float)(PSEUDO_UNFUSED(
                  (float)(*(float*)(a1 + 36) - *(float*)(v1 + 44)) *
                  (float)(*(float*)(a1 + 36) - *(float*)(v1 + 44)))) +
              (float)((float)(*(float*)(a1 + 32) - *(float*)(v1 + 40)) *
                      (float)(*(float*)(a1 + 32) - *(float*)(v1 + 40))));
  if (v70 < v63) {
    v71 = GameData_21ec7b0 +
          24LL *
              (((*(_DWORD*)(*(_QWORD*)(a1 + 8) + 96LL) - 1) & 0xFFFFFFFD) != 0);
    v72 = *(_QWORD*)(v71 + 32);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 16), 1u,
                              memory_order_relaxed);
    v73 = *(_QWORD**)(v71 + 40);
    v74 = *(_QWORD*)(v72 + 8) == -1 || v73 == nullptr;
    if (v74 || (v75 = v73[10]) == 0 ||
        (*(_QWORD*)(v75 + 8) != -1 ? (v76 = v73[11] == 0) : (v76 = true),
         v76)) {
      v73 = nullptr;
    }
    std___1___shared_weak_count___release_weak_alt1(v72),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    v77 = *(_DWORD*)(v73[46] + 120LL);
    if (v77 > -371817050) {
      if (v77 != -371817049 && v77 != 232551549) {
      LABEL_139:
        v84 = *(_QWORD*)(v1 + 368);
        v85 = *(_QWORD*)(v1 + 80);
        if (v85 == 0) {
          goto LABEL_169;
        }
        if (*(_QWORD*)(v85 + 8) == -1) {
          goto LABEL_169;
        }
        v86 = *(_QWORD*)(v1 + 88);
        if (v86 == 0) {
          goto LABEL_169;
        }
        v88 = *(_QWORD*)(v86 + 392);
        v87 = *(_QWORD*)(v86 + 400);
        if (v87 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v88 != 0) {
          v60 = fmaxf(*(float*)(v88 + 32), 0x1.0000000000000p+0f);
        }
        if (v87 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v87 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v87 + 16LL))(v87),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v87),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        if (v88 == 0) {
        LABEL_169:
          v60 = 0x1.0000000000000p+0f;
        }
        *(float*)(v84 + 152) = v60;
        CharacterAnimator_1079580_alt1(
            *(_QWORD*)(v1 + 368), -2109400973, -0x1.0000000000000p+0f,
            -0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(a1 + 44) = 0;
        return;
      }
    }
    else if (v77 != -2109400973 && v77 != -1193575788) {
      goto LABEL_139;
    }
  }
  if (v60 >= v70) {
    v83 = *(_DWORD*)(a1 + 16);
    if (v83 != 1 && v83 != 3) {
      if (v83 == 2) {
        goto LABEL_54;
      }
      goto LABEL_136;
    }
  }
  else {
    GameRoutine_106a860_alt1(v1 + 608, (float*)(a1 + 32)),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
    v78 = v70 - v60;
    v79 = sqrtf((float)(v70 - v60) /
                (float)((float)(*(float*)(v1 + 736) / *(float*)(v1 + 740)) *
                        0x1.0000000000000p-1f));
    v80 = *(float*)(v1 + 740);
    if (v79 >= v80) {
      v81 = *(float*)(v1 + 736);
      GameRoutine_106a7f0(*(float*)(v1 + 740), *(float*)(v1 + 740)),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(float, "s0", "=w"));
      v79 = v80 + (float)((float)(v78 - v82) / v81);
    }
    if (v79 > 0x1.0000000000000p+1f) {
      v79 = 0x1.0000000000000p+1f;
    }
    *(float*)(a1 + 44) = v79;
  }
}

void ActionApproach_Unknown6(__int64 a1)
{
  float v2;
  float v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  float v24;
  int v25;
  int v26;
  float32x4_t v27;

  v2 = 0x0.0p+0f;
  game_combat_10901b0((void*)(&v27), *(float32x4_t**)(a1 + 24), 0x0.0p+0f);
  v3 = LANES128(v27).n128_f32[0];
  v4 = *(_QWORD*)(a1 + 8);
  *(int32x2_t*)(a1 + 32) = vzip1_s32(
      COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]),
      COERCE_AS(int32x2_t, LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]));
  *(float*)(v4 + 656) = v3;
  v5 = *(float*)(a1 + 36);
  v6 = *(_QWORD*)(v4 + 616);
  *(float*)(v4 + 660) = v5;
  v7 = v5 - *(float*)(v6 + 44);
  v8 = v3 - *(float*)(v6 + 40);
  v9 = (float)(PSEUDO_UNFUSED(v7 * v7)) + (float)(v8 * v8);
  v10 = 0x1.0000000000000p+0f;
  if (v9 >= 0x1.0000000000000p-23f) {
    v11 = 0x1.0000000000000p+0f / sqrtf(v9);
    v2 = v8 * v11;
    v10 = v7 * v11;
  }
  *(float*)(v4 + 664) = v2;
  *(float*)(v4 + 668) = v10;
  v12 = *(_QWORD*)(a1 + 8);
  v13 = *(_QWORD*)(v12 + 80);
  if (v13 == 0 ||
      ((v14 = *(_QWORD*)(v13 + 8), v15 = *(_QWORD*)(v12 + 88), v14 != -1)
           ? (v16 = v15 == 0)
           : (v16 = true),
       v16)) {
    v17 = 0x1.11570c0000000p-5f;
  }
  else {
    v17 = (float)(*(float*)(*(_QWORD*)(v15 + 304) + 16LL) *
                  0x1.0aef000000000p+4f) *
          0x1.0624de0000000p-10f;
  }
  v18 = *(float*)(a1 + 44) - v17;
  v19 = *(float*)(a1 + 32);
  v20 = *(float*)(a1 + 36);
  v21 = *(float*)(a1 + 40) * *(float*)(a1 + 40);
  *(float*)(a1 + 44) = v18;
  if (((float)((float)(PSEUDO_UNFUSED((float)(v20 - *(float*)(v12 + 44)) *
                                      (float)(v20 - *(float*)(v12 + 44)))) +
               (float)((float)(v19 - *(float*)(v12 + 40)) *
                       (float)(v19 - *(float*)(v12 + 40)))) < v21 ||
       v18 <= 0x0.0p+0f) &&
      (CharacterAnimator_1079e10(*(_QWORD*)(v12 + 368)) & 1) != 0) {
    v22 = *(_QWORD*)(a1 + 8);
    if (*(_DWORD*)(v22 + 648) == 1) {
      v23 = *(float*)(v22 + 672);
      v24 = *(float*)(v22 + 740);
      *(_DWORD*)(v22 + 648) = 3;
      if (v23 > v24) {
        *(float*)(v22 + 672) = v24;
      }
    }
    v25 = *(_DWORD*)(a1 + 16);
    if (v25 != 1 && v25 != 3) {
      if (v25 == 2) {
        v26 = 3;
      }
      else {
        v26 = 1;
      }
      *(_DWORD*)(a1 + 16) = v26;
    }
  }
}

#pragma GCC visibility pop
