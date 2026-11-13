#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_e443d0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void game_108e3e0(PSEUDO_X8, __int64, char*,
                                             const char*, int, char, float);
__int64 CharacterSelfie_10a6b90();
__int64 GameHr_e42180(__int64);
__int64 GameRoutine_e34260(__int64 result);
__int64 GameRoutine_e37c80(__int64 result);
__int64 StateMachines_e322d0(__int64);
__int64 game_character_1084940(__int64 result, char, float);
__int64 game_combat_e414c0(__int64, float*);
__int64 game_combat_e446a0(__int64);
__int64 game_ea3620(__int64 result, char, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64* GameData_212d448[9];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float game_combat_e401e0(float*, float*);
float wld_a8c1b0(float32x4_t*, float32x4_t*);
void game_combat_e44050(__int64);
void wld_a8c210(float32x4_t*, float32x4_t*);
void game_combat_e3fad0(float32x4_t* a1);
void game_combat_10dee40(unsigned int** a1);

void game_combat_e3fad0(float32x4_t* a1)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  float v15;
  float v16;
  bool v17;
  float v18;
  float v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  float v27;
  float v28;
  bool v29;
  float v30;
  float v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  float v35;
  float v36;
  float v37;
  int v38;
  unsigned __int64 v39;
  float v40;
  unsigned __int64 v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float32x4_t v53;
  _DWORD* v54;
  float v55;
  __int128 v56;
  char v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  float32x4_t* v63;
  unsigned __int64 v64;
  float v65;
  float32x4_t v66;
  float v67;
  float32x4_t v68;
  unsigned __int64 v69;
  int v70;
  float32x4_t v71;
  float v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int32 v76;
  float32x4_t v77;
  float32x4_t v78;
  struct {
    float32x4_t v79;
    unsigned __int8 v80;
    char gap81_[63];
    char v81;
  } v79_;
  float32x4_t v82;
  float32x4_t v83;

  v1 = LANES128(a1[3]).n128_u64[0];
  if (v1 == 0) {
    return;
  }
  v2 = *(_QWORD*)(v1 + 8);
  v3 = LANES128(a1[3]).n128_u64[1];
  v5 = v2 == -1 || v3 == 0;
  if (v5 || (*(_BYTE*)(v3 + 342) & 1) == 0 ||
      (GameHr_e42180(LANES128(a1[6]).n128_i64[1]) & 1) == 0) {
    return;
  }
  v6 = LANES128(a1[8]).n128_u64[1];
  v7 = LANES128(a1[9]).n128_i64[0];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v8 = *(__int64**)(v6 + 40);
    v9 = *((_DWORD*)v8 + 5);
    v10 = v9 & 0xFFFFFFFB;
    *((_DWORD*)v8 + 5) = v9 & 0xFFFFFFFB;
    if (v9 != (v9 & 0xFFFFFFFB)) {
      v11 = *v8;
      v12 = *(_QWORD*)(*v8 + 8);
      if (v12 != 0) {
        v13 = *(_QWORD*)(v11 + 16);
        v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
        if (!v14 && *(_QWORD*)(v12 + 8) != -1 &&
            (*(_BYTE*)(v11 + 61) & 1) == 0 && *(_DWORD*)(v11 + 64) != 1 &&
            (*(_BYTE*)(v13 + 342) & 1) != 0) {
          v15 = *((float*)v8 + 9) * *((float*)v8 + 2);
          v16 = fminf(fmaxf(v15, 0x0.0p+0f), 0x1.0000000000000p+0f);
          v17 = v15 >= 0x1.0000000000000p+0f || v15 <= 0x0.0p+0f;
          v18 = (float)(v16 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
          if (!v17) {
            v15 = v18;
          }
          if (v10 != 0) {
            v19 = 0x0.0p+0f;
          }
          else {
            v19 = v15;
          }
          game_character_1084940(v13, 0, v19);
          *(_BYTE*)(*(_QWORD*)(v13 + 8) + 289LL) = v19 > 0x0.0p+0f;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  else {
    v20 = *(__int64**)(v6 + 40);
    v21 = *((_DWORD*)v20 + 5);
    v22 = v21 & 0xFFFFFFFB;
    *((_DWORD*)v20 + 5) = v21 & 0xFFFFFFFB;
    if (v21 != (v21 & 0xFFFFFFFB)) {
      v23 = *v20;
      v24 = *(_QWORD*)(*v20 + 8);
      if (v24 != 0) {
        v25 = *(_QWORD*)(v23 + 16);
        v26 = *(_QWORD*)(v24 + 8) == -1 || v25 == 0;
        if (!v26 && *(_QWORD*)(v24 + 8) != -1 &&
            (*(_BYTE*)(v23 + 61) & 1) == 0 && *(_DWORD*)(v23 + 64) != 1 &&
            (*(_BYTE*)(v25 + 342) & 1) != 0) {
          v27 = *((float*)v20 + 9) * *((float*)v20 + 2);
          v28 = fminf(fmaxf(v27, 0x0.0p+0f), 0x1.0000000000000p+0f);
          v29 = v27 >= 0x1.0000000000000p+0f || v27 <= 0x0.0p+0f;
          v30 = (float)(v28 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
          if (!v29) {
            v27 = v30;
          }
          if (v22 != 0) {
            v31 = 0x0.0p+0f;
          }
          else {
            v31 = v27;
          }
          game_character_1084940(v25, 0, v31);
          *(_BYTE*)(*(_QWORD*)(v25 + 8) + 289LL) = v31 > 0x0.0p+0f;
        }
      }
    }
  }
  v32 = LANES128(a1[7]).n128_u64[0];
  StateMachines_e322d0(v32 + 16);
  GameRoutine_e37c80(v32 + 128);
  GameRoutine_e34260(*(_QWORD*)(v32 + 184));
  v33 = LANES128(a1[3]).n128_u64[0];
  if (v33 == 0) {
    goto LABEL_97;
  }
  if (*(_QWORD*)(v33 + 8) != -1) {
    v34 = LANES128(a1[3]).n128_u64[1];
    if (v34 != 0) {
      v35 = 0x1.0000000000000p+0f;
      if (LANES128(a1[14]).n128_f32[0] > 0x0.0p+0f) {
        v35 = 0x0.0p+0f;
      }
      *(float*)(*(_QWORD*)(v34 + 304) + 12LL) = v35;
      v36 = LANES128(a1[14]).n128_f32[0];
      v37 = fabsf(
          (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                            160LL) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f);
      if (v36 <= 0x0.0p+0f) {
        if (v36 >= 0x0.0p+0f || (v36 = v36 + v37) <= 0x0.0p+0f) {
        LABEL_60:
          v33 = LANES128(a1[3]).n128_u64[0];
          LANES128(a1[14]).n128_f32[0] = v36;
          if (v33 == 0) {
            goto LABEL_97;
          }
          goto LABEL_61;
        }
      }
      else {
        v36 = v36 - v37;
        if (v36 >= 0x0.0p+0f) {
          goto LABEL_60;
        }
      }
      v36 = 0x0.0p+0f;
      goto LABEL_60;
    }
  }
LABEL_61:
  if (*(_QWORD*)(v33 + 8) != -1 && LANES128(a1[3]).n128_u64[1] != 0) {
    GameRoutine_e443d0((void*)((__int64)&v79_.v79),
                       LANES128(a1[8]).n128_i64[0]);
    v38 = v79_.v80;
    if (v79_.v80 != 1) {
      if (LANES128(a1[13]).n128_u8[0] == 1) {
        LANES128(a1[13]).n128_u8[0] = 0;
      }
      goto LABEL_93;
    }
    if ((LANES128(a1[13]).n128_u8[0] & 1) == 0) {
      a1[12] = v79_.v79;
      LANES128(a1[13]).n128_u8[0] = 1;
      goto LABEL_93;
    }
    v39 = LANES128(a1[3]).n128_u64[0];
    v40 = 0x0.0p+0f;
    if (v39 != 0 && *(_QWORD*)(v39 + 8) != -1 &&
        LANES128(a1[3]).n128_u64[1] != 0) {
      v41 = LANES128(*(a1)).n128_u64[1];
      if (v41 != 0) {
        v40 = (float)((float)(*(float*)(*(_QWORD*)(v41 + 496) + 16LL) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f) *
              0x1.8000000000000p+1f;
      }
    }
    v42 = a1[12];
    v43 = vsubq_f32(v79_.v79, v42);
    v44 = vmulq_f32(v43, v43);
    LANES128(v44).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u64[0];
    LANES128(v44).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
            .n64_u64[0];
    LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
    v45 = vrsqrteq_f32(v44);
    v46 = vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(v44, v45)));
    v47 = vbicq_s8(
        vmulq_f32(v43, vmulq_f32(v46, vrsqrtsq_f32(v46, vmulq_f32(v44, v46)))),
        vceqzq_f32(v44));
    v48 = fabsf(v40 * fabsf(LANES128(v47).n128_f32[0]));
    {
      __typeof__(v49) z_ = (__typeof__(v49)){0};
      LODWORD(z_) = HIDWORD(LANES128(a1[12]).n128_u64[0]);
      v49 = z_;
    }
    if ((LANES64_OF(vmovn_s32(vcgtq_f32(v42, v79_.v79))).n64_u8[0] & 1) != 0) {
      v50 = LANES128(v42).n128_f32[0] - v48;
      if (v50 >= LANES128(v79_.v79).n128_f32[0]) {
      LABEL_80:
        LANES128(v42).n128_u32[0] = LANES128(a1[12]).n128_u64[1];
        v51 = fabsf(v40 * fabsf(LANES128(v47).n128_f32[1]));
        if (v49 <= LANES128(v79_.v79).n128_f32[1]) {
          if (v49 >= LANES128(v79_.v79).n128_f32[1] ||
              (v49 = v49 + v51) <= LANES128(v79_.v79).n128_f32[1]) {
          LABEL_86:
            v52 = fabsf(v40 * fabsf(LANES128(v47).n128_f32[2]));
            if (LANES128(v42).n128_f32[2] <= LANES128(v79_.v79).n128_f32[2]) {
              if (LANES128(v42).n128_f32[2] >= LANES128(v79_.v79).n128_f32[2]) {
                goto LABEL_92;
              }
              LANES128(v42).n128_f32[0] = LANES128(v42).n128_f32[2] + v52;
              if ((float)(LANES128(v42).n128_f32[2] + v52) <=
                  LANES128(v79_.v79).n128_f32[2]) {
                goto LABEL_92;
              }
            }
            else {
              LANES128(v42).n128_f32[0] = LANES128(v42).n128_f32[2] - v52;
              if ((float)(LANES128(v42).n128_f32[2] - v52) >=
                  LANES128(v79_.v79).n128_f32[2]) {
                goto LABEL_92;
              }
            }
            LANES128(v42).n128_u32[0] = LANES128(v79_.v79).n128_u32[2];
          LABEL_92:
            LANES128(a1[12]).n128_f32[0] = v50;
            LANES128(a1[12]).n128_f32[1] = v49;
            v53 = a1[12];
            LANES128(v53).n128_u64[1] = LANES128(v42).n128_u32[0];
            a1[12] = v53;
          LABEL_93:
            v54 = *(_DWORD**)(LANES128(a1[3]).n128_u64[1] + 112);
            if (v54 != nullptr) {
              v55 = 0x0.0p+0f;
              if (v38 != 0) {
                v54[32] = LANES128(a1[12]).n128_u32[0];
                v54[33] = LANES128(a1[12]).n128_u32[1];
                v56 = *((_OWORD*)v54 + 8);
                *((_QWORD*)&v56 + 1) = LANES128(a1[12]).n128_u32[2];
                *((_OWORD*)v54 + 8) = v56;
                v55 = 0x1.0000000000000p+0f;
              }
              *((float*)v54 + 40) = v55;
            }
            goto LABEL_97;
          }
        }
        else {
          v49 = v49 - v51;
          if (v49 >= LANES128(v79_.v79).n128_f32[1]) {
            goto LABEL_86;
          }
        }
        v49 = LANES128(v79_.v79).n128_f32[1];
        goto LABEL_86;
      }
    }
    else {
      if ((LANES64_OF(vmovn_s32(vcgtq_f32(v79_.v79, v42))).n64_u8[0] & 1) ==
          0) {
        {
          __typeof__(v50) z_ = (__typeof__(v50)){0};
          LODWORD(z_) = *(_DWORD*)&(a1[12]);
          v50 = z_;
        }
        goto LABEL_80;
      }
      v50 = LANES128(v42).n128_f32[0] + v48;
      if (v50 <= LANES128(v79_.v79).n128_f32[0]) {
        goto LABEL_80;
      }
    }
    v50 = LANES128(v79_.v79).n128_f32[0];
    goto LABEL_80;
  }
LABEL_97:
  v57 = 1;
  if (*(_DWORD*)(LANES128(a1[4]).n128_u64[0] + 116) == 2 &&
      LANES128(a1[4]).n128_u64[1] == 0) {
    v57 = CharacterSelfie_10a6b90() ^ 1;
  }
  v58 = LANES128(a1[8]).n128_u64[1];
  v59 = LANES128(a1[9]).n128_i64[0];
  if (v59 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                              memory_order_relaxed);
    game_ea3620(*(_QWORD*)(v58 + 40), v57 & 1, 256);
    if (atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
      std___1___shared_weak_count___release_weak(v59);
    }
  }
  else {
    game_ea3620(*(_QWORD*)(v58 + 40), v57 & 1, 256);
  }
  v60 = LANES128(a1[8]).n128_u64[0];
  if (*(_BYTE*)(v60 + 116) == 1) {
    game_combat_e44050(LANES128(a1[8]).n128_i64[0]);
    *(_BYTE*)(v60 + 80) = 0;
  }
  game_combat_e446a0(LANES128(a1[7]).n128_i64[1]);
  v62 = LANES128(a1[3]).n128_u64[0];
  if (v62 != 0 && *(_QWORD*)(v62 + 8) != -1 &&
      LANES128(a1[3]).n128_u64[1] != 0) {
    v63 = (float32x4_t*)LANES128(*(a1)).n128_u64[1];
    if (v63 != nullptr) {
      v64 = LANES128(a1[7]).n128_u64[1];
      v65 = LANES128(v63[19]).n128_f32[1];
      {
        __typeof__(v61) z_ = (__typeof__(v61)){0};
        LODWORD(z_) = *(_DWORD*)(v64 + 20);
        v61 = z_;
      }
      LANES128(v66).n128_u32[0] = *(_DWORD*)(v64 + 16);
      v75 = v61;
      v76 = LANES128(v66).n128_u32[0];
      LANES128(v66).n128_u32[1] = 1128792064;
      LANES128(v66).n128_u64[1] = v61;
      v83 = v66;
      LANES128(v66).n128_u32[1] = -1027080192;
      LANES128(v66).n128_u64[1] = v61;
      v82 = v66;
      collision_670c60((void*)((__int64)&v79_.v79), &v83, &v82, 1);
      v67 = LANES128(v79_.v79).n128_f32[1];
      LANES128(v68).n128_u32[0] = v76;
      v69 = LANES128(a1[7]).n128_u64[1];
      if (v79_.v81 == 0) {
        v67 = v65;
      }
      LANES128(v68).n128_f32[1] = v67;
      v70 = *(unsigned __int8*)(v69 + 64);
      LANES128(v68).n128_u64[1] = v75;
      v78 = v68;
      if (v70 == 1) {
        LANES128(v71).n128_u64[0] = *(_QWORD*)(v69 + 48);
        LANES128(v71).n128_u64[1] = (unsigned int)*(_QWORD*)(v69 + 56);
        v78 = v71;
      }
      wld_a8c1b0(v63, &v78);
      LANES128(v77).n128_u64[0] = 0x3F80000000000000LL;
      v72 = game_combat_e401e0((float*)&v77,
                               (float*)(LANES128(a1[8]).n128_u64[0] + 16));
      {
        __typeof__(v73) z_ = (__typeof__(v73)){0};
        LODWORD(z_) = 0;
        v73 = z_;
      }
      *((float*)&v73 + 1) = v72;
      v77 = COERCE_AS(float32x4_t, v73);
      wld_a8c210(v63, &v77);
    }
  }
  v74 = LANES128(a1[6]).n128_i64[1];
  if ((*(_BYTE*)(v74 + 44) & 1) == 0 && *(_BYTE*)(v74 + 80) == 1 &&
      (game_combat_e414c0(v74, (float*)(v74 + 48)) & 1) != 0 &&
      (*(_BYTE*)(v74 + 80) & 1) != 0) {
    *(_BYTE*)(v74 + 80) = 0;
  }
}

void game_combat_10dee40(unsigned int** a1)
{

#pragma clang fp contract(off)
  unsigned int* v1;
  unsigned int* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v8;
  bool v9;
  char* v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v1 = *a1;
  v2 = a1[1];
  if (*a1 != v2) {
    v3 = GameData_212d448[0];
    do {
      if (*v1 > 3) {
        goto LABEL_4;
      }
      v4 = *v3 + 24LL * *v1;
      v5 = *(_QWORD*)(v4 + 32);
      if (v5 == 0) {
        goto LABEL_4;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v6 = *(_QWORD**)(v4 + 40);
      if (*(_QWORD*)(v5 + 8) != -1 && v6 != nullptr) {
        v8 = v6[10];
        if (v8 != 0) {
          v9 = *(_QWORD*)(v8 + 8) == -1 || v6[11] == 0;
          if (!v9 && *(_QWORD*)(v5 + 8) != -1) {
            std___1___shared_weak_count___release_weak(v5);
            v10 = *(char**)(*((_QWORD*)v1 + 1) + 784LL);
            if (v10 == nullptr) {
              goto LABEL_4;
            }
            game_108e3e0((void*)(&v12_.v12), v6[47], v10, nullptr, 7, 1,
                         COERCE_AS(float, (unsigned int)(COERCE_UNSIGNED_INT(
                                              -0x1.0000000000000p+0f))));
            v11 = v12_.v13;
            if (v12_.v13 == 0 ||
                atomic_fetch_add((atomic_ullong* volatile)(v12_.v13 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) != 0) {
              goto LABEL_4;
            }
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            v5 = v11;
          }
        }
      }
      std___1___shared_weak_count___release_weak(v5);
    LABEL_4:
      v1 += 6;
    } while (v1 != v2);
  }
}

#pragma GCC visibility pop
