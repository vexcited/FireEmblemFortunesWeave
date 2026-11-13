#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void Quat_622ac0(PSEUDO_X8, float32x2_t*);
__int64 CharacterModel_cf4c10(__int64);
__int64 CharacterModel_cf5a50(__int64);
__int64 CharacterModel_cf5c00(__int64);
__int64 CharacterModel_cf67d0(__int64 result);
__int64 CharacterModel_cf6940(__int64, long double, double);
__int64 GameHr_cf6d00(__int64);
__int64 GameRoutine_d60750(__int64 result);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 game_zview_ffe870(_QWORD*);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool nn_g3d_5eb5c0(__int64, float32x4_t*);
char* CharacterModel_cf5da0(__int64);
extern _DWORD* GameData_212d168;
extern __int64 GameData_21c6978;
extern __int64 GameData_21f3cb0;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern int GameData_21d92e0;
void CharacterCollisionShape_fff0a0(__int64, long double);
void __attribute__((noreturn)) GameRoutine_8123d0();
void game_cfc7c0(__int64, float*, char, float);
void game_zview_ceb260(__int64 a1, char a2);
void game_zview_ceba80(__int64 a1, long double a2);
__int64 game_zview_cebc60(__int64 a1);
void game_zview_cebf00(__int64 a1, int a2);
void game_zview_cf7200(__int64 a1, float32x4_t* a2, float32x4_t* a3);
__int64 game_zview_cf7590(__int64 a1, float32x4_t* a2, float32x4_t* a3,
                          float32x4_t a4, long double a5);

void game_zview_ceb260(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v3;
  bool v4;
  int v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  __int128 v9;
  int v10;
  __int64 v11;
  int* v12;
  _BOOL4 v13;
  __int64 v14;
  float v15;
  char v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  __int64 v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;

  if ((a2 & 1) != 0) {
    if ((*(_BYTE*)(a1 + 464) & 1) != 0) {
      return;
    }
    *(_BYTE*)(a1 + 464) = 1;
  }
  else if (*(_BYTE*)(a1 + 464) != 0) {
    *(_BYTE*)(a1 + 464) = 0;
    return;
  }
  v3 = *(_DWORD*)(a1 + 508);
  v4 = __OFSUB__(v3, 1);
  v5 = v3 - 1;
  if (v5 < 0 == v4) {
    *(_DWORD*)(a1 + 508) = v5;
  }
  if (*(_BYTE*)(a1 + 504) == 1) {
    --*(_DWORD*)(a1 + 496);
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v7 = (v6 & 8) != 0 ? 2 : 3;
      if ((v7 & v6) == 0) {
        goto LABEL_21;
      }
    }
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_22;
    }
    v8 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
    }
    else {
      v9 = *(_OWORD*)(v8 + 208);
    }
    if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                        v8 + 160, *((float*)&v9 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_21:
      *(_DWORD*)(a1 + 496) = 0;
    }
    else {
    LABEL_22:
      if (*(int*)(a1 + 496) > 0) {
        goto LABEL_24;
      }
    }
    game_zview_cebf00(a1, *(_DWORD*)(a1 + 500));
  }
LABEL_24:
  v10 = *(_DWORD*)(a1 + 512);
  v11 = *(_QWORD*)(a1 + 8);
  v12 = (int*)GameData_212d168;
  v13 = *GameData_212d168 != 1 && (*(_BYTE*)(v11 + 152) & 1) != 0 &&
        *(_BYTE*)(v11 + 145) != 1;
  v14 = *(_QWORD*)(v11 + 328);
  v15 = 0x0.0p+0f;
  v16 = v10 != 2 || v13;
  if (v10 == 0) {
    v15 = 0x1.0000000000000p+0f;
  }
  v17 = *(_QWORD*)(v14 + 360);
  *(_DWORD*)(v14 + 224) = 0;
  *(float*)(v14 + 208) = v15;
  *(float*)(v14 + 212) = v15;
  *(_BYTE*)(v14 + 228) = 1;
  *(_BYTE*)(v14 + 369) = 1;
  CharacterModel_cf5c00(v17);
  v18 = *v12;
  v19 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v19 + 364) = v16;
  if ((v18 == 4 || v18 == 2) &&
      ((v13 | *(unsigned __int8*)(v19 + 145)) & 1) != 0) {
    v21 = HubCharacterNatives_cf7940(v19);
    if (v21 != 0) {
      v22 = *(unsigned __int8*)(v21 + 288);
      if (v22 == 1) {
        v23 = v21;
        do {
          v23 = *(_QWORD*)(v23 + 736);
          v24 = v23 == 0;
        } while (v23 != 0 && (*(_BYTE*)(v23 + 288) & 1) != 0);
      }
      else {
        v24 = 0;
      }
      v25 = *(unsigned __int8*)(v19 + 364);
      if (v25 != v24 && v22 != v25) {
        *(_BYTE*)(v21 + 288) = v25;
      }
    }
  }
  CharacterModel_cf4c10(*(_QWORD*)(a1 + 8) + 32LL);
  if (*(_BYTE*)(a1 + 456) == 1) {
    *(_BYTE*)(a1 + 456) = 0;
  }
  v27 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v27 + 145) & 1) == 0 && *v12 != 1 &&
      (*(_BYTE*)(v27 + 152) & 1) != 0 && GameData_21c6978 != 0) {
    v28 = *(_QWORD*)(GameData_21c6978 + 32);
    if (*(_QWORD*)(GameData_21c6978 + 24) != v28) {
      v29 = *(_QWORD*)(v28 - 8);
      if (v29 != 0) {
        v30 = *(float*)(a1 + 460);
        v31 = *(_QWORD*)(v29 + 24);
        v32 = *(_QWORD*)(v29 + 32);
        if (v32 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
            std___1___shared_weak_count___release_weak(v32);
          }
        }
        if (v31 != 0) {
          *(long double*)&v33 = ((long double (*)(__int64)) *
                                 (_QWORD*)(*(_QWORD*)v31 + 40LL))(v31);
          v34 = *(float32x4_t*)(*(_QWORD*)(a1 + 16) + 560LL);
          *(_BYTE*)(a1 + 456) = 1;
          v35 = vsubq_f32(v33, v34);
          v36 = vmulq_f32(v35, v35);
          LANES128(v36).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
                  .n64_u64[0];
          *(float*)(a1 + 452) =
              v30 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]))))
                        .n64_f32[0];
        }
      }
    }
  }
}

void game_zview_ceba80(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  long double v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int* v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v21;
  float v22;
  __int64 v23;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 450) & 1) == 0) {
    CharacterCollisionShape_fff0a0(*(_QWORD*)(a1 + 56), a2),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    game_zview_ffe870(*(_QWORD**)(a1 + 64)),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return;
  }
  CharacterModel_cf5a50(*(_QWORD*)(a1 + 8)),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  CharacterCollisionShape_fff0a0(*(_QWORD*)(a1 + 56), v3),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_zview_ffe870(*(_QWORD**)(a1 + 64)),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(_DWORD*)(a1 + 512);
  *(_BYTE*)(a1 + 450) = 0;
  if (v4 != 1) {
    return;
  }
  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v5 + 145) == 1) {
    v6 = *(_QWORD*)(v5 + 328);
    GameRoutine_d60750(v6),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(float*)(v6 + 376) > 0x0.0p+0f || *(_DWORD*)(a1 + 512) == 2) {
      return;
    }
    v5 = *(_QWORD*)(a1 + 8);
  }
  *(_DWORD*)(a1 + 512) = 2;
  v8 = (int*)GameData_212d168;
  v9 = *GameData_212d168 != 1 && (*(_BYTE*)(v5 + 152) & 1) != 0 &&
       *(_BYTE*)(v5 + 145) != 1;
  v10 = *(_QWORD*)(v5 + 328);
  v11 = *(_QWORD*)(v10 + 360);
  *(_QWORD*)(v10 + 208) = 0;
  *(_DWORD*)(v10 + 224) = 0;
  *(_BYTE*)(v10 + 228) = 1;
  *(_BYTE*)(v10 + 369) = 1;
  CharacterModel_cf5c00(v11),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v12 = *v8;
  v13 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v13 + 364) = v9;
  if ((v12 == 4 || v12 == 2) &&
      ((v9 | *(unsigned __int8*)(v13 + 145)) & 1) != 0) {
    v15 = HubCharacterNatives_cf7940(v13),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v15 != 0) {
      v16 = *(unsigned __int8*)(v15 + 288);
      if (v16 == 1) {
        v17 = v15;
        do {
          v17 = *(_QWORD*)(v17 + 736);
          v18 = v17 == 0;
        } while (v17 != 0 && (*(_BYTE*)(v17 + 288) & 1) != 0);
      }
      else {
        v18 = 0;
      }
      v19 = *(unsigned __int8*)(v13 + 364);
      if (v19 != v18 && v16 != v19) {
        *(_BYTE*)(v15 + 288) = v19;
      }
    }
  }
  if (*(_DWORD*)(a1 + 512) == 0) {
    v21 = *(_QWORD*)(a1 + 16);
    v22 = *(float*)(v21 + 176);
    game_cfc7c0(v21 + 136, (float*)(v21 + 292), 1, 0x0.0p+0f),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (vabds_f32(v22, *(float*)(v21 + 176)) > 0x1.0000000000000p-23f) {
      v23 = *(_QWORD*)(*(_QWORD*)(v21 + 8) + 8LL);
      if ((*(_BYTE*)(v23 + 226) & 1) == 0) {
        *(_BYTE*)(v23 + 226) = 1;
      }
    }
  }
}

__int64 game_zview_cebc60(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int* v3;
  _BOOL4 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  __int64 result;
  __int64 v26;
  int v27;
  __int64 v28;
  struct {
    unsigned __int64 v29;
    int v30;
    char v31;
  } v29_;

  if (*(_DWORD*)(a1 + 512) != 0) {
    *(_DWORD*)(a1 + 512) = 0;
    v2 = *(_QWORD*)(a1 + 8);
    v3 = (int*)GameData_212d168;
    v4 = *GameData_212d168 != 1 && (*(_BYTE*)(v2 + 152) & 1) != 0 &&
         *(_BYTE*)(v2 + 145) != 1;
    v5 = *(_QWORD*)(v2 + 328);
    v6 = *(_QWORD*)(v5 + 360);
    *(_QWORD*)(v5 + 208) = 0x3F8000003F800000LL;
    *(_DWORD*)(v5 + 224) = 0;
    *(_BYTE*)(v5 + 228) = 1;
    *(_BYTE*)(v5 + 369) = 1;
    CharacterModel_cf5c00(v6);
    v7 = *v3;
    v8 = *(_QWORD*)(a1 + 8);
    *(_BYTE*)(v8 + 364) = 1;
    if ((v7 == 4 || v7 == 2) &&
        ((v4 | *(unsigned __int8*)(v8 + 145)) & 1) != 0) {
      v10 = HubCharacterNatives_cf7940(v8);
      if (v10 != 0) {
        v11 = *(unsigned __int8*)(v10 + 288);
        if (v11 == 1) {
          v12 = v10;
          do {
            v12 = *(_QWORD*)(v12 + 736);
            v13 = v12 == 0;
          } while (v12 != 0 && (*(_BYTE*)(v12 + 288) & 1) != 0);
        }
        else {
          v13 = 0;
        }
        v14 = *(unsigned __int8*)(v8 + 364);
        if (v14 != v13 && v11 != v14) {
          *(_BYTE*)(v10 + 288) = v14;
        }
      }
    }
    if (*(_DWORD*)(a1 + 512) == 0) {
      v16 = *(_QWORD*)(a1 + 16);
      v17 = *(float*)(v16 + 176);
      game_cfc7c0(v16 + 136, (float*)(v16 + 292), 1, 0x0.0p+0f);
      if (vabds_f32(v17, *(float*)(v16 + 176)) > 0x1.0000000000000p-23f) {
        v18 = *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8LL);
        if ((*(_BYTE*)(v18 + 226) & 1) == 0) {
          *(_BYTE*)(v18 + 226) = 1;
        }
      }
    }
  }
  v19 = 0x1.0000000000000p+0f;
  *(_QWORD*)(a1 + 424) = 0x3F8000003F800000LL;
  v20 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 448) != 0) {
    v19 = 0x0.0p+0f;
  }
  v21 = *(_QWORD*)(v20 + 232);
  *(float*)(v20 + 148) = v19;
  if (v21 != 0) {
    *(float*)(*(_QWORD*)(v21 + 304) + 12LL) = v19;
    v22 = *(_QWORD*)(v20 + 232);
    if (v22 != 0) {
      v19 = *(float*)(*(_QWORD*)(v22 + 304) + 16LL) * 0x1.0aef000000000p+4f;
      v23 = 0x1.0624de0000000p-10f;
      goto LABEL_36;
    }
    v19 = *(float*)(v20 + 148);
  }
  v23 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                0x1.0aef000000000p+4f) /
        0x1.f400000000000p+9f;
LABEL_36:
  *(float*)(v20 + 228) = v19 * v23;
  if (*(_DWORD*)(a1 + 476) != 0) {
    v24 = *(_QWORD*)(a1 + 8);
    *(_DWORD*)(a1 + 476) = 0;
    CharacterModel_cf67d0(v24);
  }
  result = GameHr_cf6d00(*(_QWORD*)(a1 + 8));
  v26 = *(_QWORD*)(a1 + 168);
  if (v26 != 0 && *(_BYTE*)(a1 + 240) != 0) {
    *(_BYTE*)(a1 + 240) = 0;
    v27 = *(int*)(v26 + 32) - 1;
    *(_DWORD*)(v26 + 32) = v27;
    if (v27 == 0) {
      v28 = *(_QWORD*)(v26 + 8);
      v29_.v31 = 0;
      v29_.v29 = 0xBF800000BF800000LL;
      v29_.v30 = 1065353216;
      result = UnitActor_819f40(v28);
      if ((_DWORD)result != *(_DWORD*)(v26 + 16)) {
        return UnitActor_81a540(v26, result, (__int64)&v29_.v29);
      }
    }
  }
  return result;
}

void game_zview_cebf00(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  int v2;
  int v4;
  __int64 v5;
  int* v6;
  _BOOL4 v7;
  __int64 v8;
  int* v9;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v31;
  int v32;
  int v34;
  __int64 v36;
  float v37;
  __int64 v38;
  int v39;
  __int64 v41;
  float v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  unsigned __int64 v47;
  __int128 v48;
  float32x4_t v49;
  float32x4_t* v50;
  float32x4_t v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  float v57;
  __int64 v58;
  unsigned __int64 v59;
  __int128 v60;
  int v61;
  _BYTE v62[240];
  struct {
    float32x4_t v63;
    int v64;
  } v63_;

  v2 = *(unsigned __int8*)(a1 + 504);
  *(_DWORD*)(a1 + 508) = 0;
  if (v2 == 1) {
    *(_BYTE*)(a1 + 504) = 0;
  }
  *(_DWORD*)(a1 + 488) = a2;
  *(_BYTE*)(a1 + 492) = 1;
  if (a2 == 2) {
    v4 = 0;
    if (*(_DWORD*)(a1 + 512) != 0) {
      goto LABEL_50;
    }
  }
  else {
    if (a2 != 1) {
      *(_DWORD*)(a1 + 508) = 30;
      if (*(_DWORD*)(a1 + 512) != 0) {
        *(_DWORD*)(a1 + 512) = 0;
        v8 = *(_QWORD*)(a1 + 8);
        v9 = (int*)GameData_212d168;
        v10 = *GameData_212d168 != 1 && (*(_BYTE*)(v8 + 152) & 1) != 0 &&
              *(_BYTE*)(v8 + 145) != 1;
        v20 = *(_QWORD*)(v8 + 328);
        v21 = *(_QWORD*)(v20 + 360);
        *(_QWORD*)(v20 + 208) = 0x3F8000003F800000LL;
        *(_DWORD*)(v20 + 224) = 0;
        *(_BYTE*)(v20 + 228) = 1;
        *(_BYTE*)(v20 + 369) = 1;
        CharacterModel_cf5c00(v21);
        v22 = *v9;
        v23 = *(_QWORD*)(a1 + 8);
        *(_BYTE*)(v23 + 364) = 1;
        if ((v22 == 4 || v22 == 2) &&
            ((v10 | *(unsigned __int8*)(v23 + 145)) & 1) != 0) {
          v25 = HubCharacterNatives_cf7940(v23);
          if (v25 != 0) {
            v26 = *(unsigned __int8*)(v25 + 288);
            if (v26 == 1) {
              v27 = v25;
              do {
                v27 = *(_QWORD*)(v27 + 736);
                v28 = v27 == 0;
              } while (v27 != 0 && (*(_BYTE*)(v27 + 288) & 1) != 0);
            }
            else {
              v28 = 0;
            }
            v39 = *(unsigned __int8*)(v23 + 364);
            if (v39 != v28 && v26 != v39) {
              *(_BYTE*)(v25 + 288) = v39;
            }
          }
        }
        if (*(_DWORD*)(a1 + 512) == 0) {
          v41 = *(_QWORD*)(a1 + 16);
          v42 = *(float*)(v41 + 176);
          game_cfc7c0(v41 + 136, (float*)(v41 + 292), 1, 0x0.0p+0f);
          if (vabds_f32(v42, *(float*)(v41 + 176)) > 0x1.0000000000000p-23f) {
            v43 = *(_QWORD*)(*(_QWORD*)(v41 + 8) + 8LL);
            if ((*(_BYTE*)(v43 + 226) & 1) == 0) {
              *(_BYTE*)(v43 + 226) = 1;
            }
          }
        }
      }
      goto LABEL_82;
    }
    v4 = 1;
    if (*(_DWORD*)(a1 + 512) != 0) {
      goto LABEL_50;
    }
  }
  *(_DWORD*)(a1 + 512) = 1;
  v5 = *(_QWORD*)(a1 + 8);
  v6 = (int*)GameData_212d168;
  v7 = *GameData_212d168 != 1 && (*(_BYTE*)(v5 + 152) & 1) != 0 &&
       *(_BYTE*)(v5 + 145) != 1;
  v11 = *(_QWORD*)(v5 + 328);
  v12 = *(_QWORD*)(v11 + 360);
  *(_QWORD*)(v11 + 208) = 0;
  *(_DWORD*)(v11 + 224) = 0;
  *(_BYTE*)(v11 + 228) = 1;
  *(_BYTE*)(v11 + 369) = 1;
  CharacterModel_cf5c00(v12);
  v13 = *v6;
  v14 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v14 + 364) = 1;
  if ((v13 == 4 || v13 == 2) &&
      ((v7 | *(unsigned __int8*)(v14 + 145)) & 1) != 0) {
    v16 = HubCharacterNatives_cf7940(v14);
    if (v16 != 0) {
      v17 = *(unsigned __int8*)(v16 + 288);
      if (v17 == 1) {
        v18 = v16;
        do {
          v18 = *(_QWORD*)(v18 + 736);
          v19 = v18 == 0;
        } while (v18 != 0 && (*(_BYTE*)(v18 + 288) & 1) != 0);
      }
      else {
        v19 = 0;
      }
      v29 = *(unsigned __int8*)(v14 + 364);
      if (v29 != v19 && v17 != v29) {
        *(_BYTE*)(v16 + 288) = v29;
      }
    }
  }
  if (*(_DWORD*)(a1 + 512) != 0) {
  LABEL_50:
    if (v4 == 0) {
      goto LABEL_51;
    }
    goto LABEL_82;
  }
  v36 = *(_QWORD*)(a1 + 16);
  v37 = *(float*)(v36 + 176);
  game_cfc7c0(v36 + 136, (float*)(v36 + 292), 1, 0x0.0p+0f);
  if (vabds_f32(v37, *(float*)(v36 + 176)) > 0x1.0000000000000p-23f) {
    v38 = *(_QWORD*)(*(_QWORD*)(v36 + 8) + 8LL);
    if ((*(_BYTE*)(v38 + 226) & 1) == 0) {
      *(_BYTE*)(v38 + 226) = 1;
    }
  }
  if ((v4 & 1) == 0) {
  LABEL_51:
    v31 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(v31 + 152) == 0) {
      return;
    }
    v32 = *(unsigned __int8*)(v31 + 145);
    *(_BYTE*)(v31 + 152) = 0;
    if (v32 == 1) {
      if (*(_BYTE*)(v31 + 44) != 1 || *(_DWORD*)(v31 + 40) != 3) {
        v34 = 3;
      LABEL_62:
        *(_DWORD*)(v31 + 48) = v34;
        *(_BYTE*)(v31 + 52) = 1;
      }
    }
    else {
      v34 = *(_DWORD*)(v31 + 8);
      if (*(_BYTE*)(v31 + 44) != 1 || *(_DWORD*)(v31 + 40) != v34) {
        goto LABEL_62;
      }
    }
    if ((*(_BYTE*)(v31 + 128) & 1) == 0 && (*(_BYTE*)(v31 + 129) & 1) != 0) {
      WaitRelease_cfa2a0(v31 + 32);
    }
    CharacterModel_cf5da0(v31);
    return;
  }
LABEL_82:
  v44 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v44 + 152) & 1) == 0) {
    if ((*(_BYTE*)(v44 + 152) = 1, game_ProcGameSkipView_instance_ == 0) ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v45 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v46 = 2)
             : (v46 = 3),
         (v46 & v45) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_96;
      }
      v47 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v47 + 172) == *(float*)(v47 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v47 + 160) + 16LL))(v47 +
                                                                       160);
      }
      else {
        v48 = *(_OWORD*)(v47 + 208);
      }
      if (*((float*)&v48 + 3) != 0x1.0000000000000p+0f ||
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v47 + 160) + 16LL))(
                          v47 + 160, *((float*)&v48 + 3)))
                  .n128_f32[3] != 0x1.0000000000000p+0f) {
      LABEL_96:
        if (*(_BYTE*)(a1 + 540) == 1) {
          GameRoutine_edf510((void*)((__int64)v62), GameData_21f3cb0 + 16);
          LANES128(v49).n128_u32[0] = 0;
          LANES128(v49).n128_u64[1] = 0;
          if ((*(_BYTE*)(a1 + 568) & 2) != 0 ||
              (v50 = *(float32x4_t**)(*(_QWORD*)(a1 + 8) + 240LL)) == nullptr) {
            LANES128(v49).n128_f32[1] =
                *(float*)(a1 + 544) * 0x1.99999a0000000p-1f;
            v51 = vaddq_f32(v49, *(float32x4_t*)(*(_QWORD*)(a1 + 16) + 560LL));
          }
          else {
            v51 = v50[3];
          }
          if ((*(_BYTE*)(a1 + 540) & 1) == 0) {
            GameRoutine_8123d0();
          }
          v52 = *(_DWORD*)(a1 + 536);
          v63_.v63 = v51;
          v63_.v64 = v52;
          if (!nn_g3d_5eb5c0((__int64)v62, &v63_.v63)) {
            v53 = *(_QWORD*)(a1 + 8);
            *(_QWORD*)(*(_QWORD*)(v53 + 328) + 184LL) = 0x3E99999A3E99999ALL;
            v54 = *(_QWORD*)(v53 + 328);
            v55 = *(_QWORD*)(v54 + 360);
            *(_QWORD*)(v54 + 176) = 0;
            *(_DWORD*)(v54 + 192) = 0;
            *(_BYTE*)(v54 + 196) = 1;
            *(_BYTE*)(v54 + 369) = 1;
            CharacterModel_cf5c00(v55);
            v56 = *(_QWORD*)(v53 + 328);
            v57 = *(float*)(v56 + 192);
            if (v57 < 0x0.0p+0f) {
              v57 = 0x0.0p+0f;
            }
            *(float*)(v56 + 192) = v57;
            v58 = *(_QWORD*)(v53 + 328);
            *(_DWORD*)(v58 + 176) = 1065353216;
            if (game_ProcFadeView_instance_ != 0) {
              v59 = game_ProcFadeView_instance_ +
                    ((unsigned __int64)*(
                         unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                     << 6);
              if (*(float*)(v59 + 172) == *(float*)(v59 + 168)) {
                (*(void (**)(unsigned __int64))(*(_QWORD*)(v59 + 160) + 16LL))(
                    v59 + 160);
              }
              else {
                v60 = *(_OWORD*)(v59 + 208);
              }
              if (*((float*)&v60 + 3) == 0x1.0000000000000p+0f &&
                  LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                               (_QWORD*)(*(_QWORD*)(v59 + 160) + 16LL))(
                                  v59 + 160, *((float*)&v60 + 3)))
                          .n128_f32[3] == 0x1.0000000000000p+0f) {
                v61 = *(_DWORD*)(v58 + 176);
                *(_DWORD*)(v58 + 192) = 0;
                *(_DWORD*)(v58 + 180) = v61;
              }
            }
            *(_BYTE*)(v58 + 196) = 1;
          }
        }
      }
    }
  }
}

void game_zview_cf7200(__int64 a1, float32x4_t* a2, float32x4_t* a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  float32x4_t v7;
  float32x4_t* v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  __int128 v12;
  float v13;
  float32x4_t v14;
  int8x16_t v15;
  unsigned __int32 v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  int8x16_t v20;
  int8x16_t v21;
  float v22;
  float32x4_t* v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  int16x4_t v28;
  float32x4_t* v29;
  int v30;
  unsigned __int32 v31;
  unsigned int v32;
  float32x4_t v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  float32x4_t v38;
  __int128 v39;

  if ((*(_BYTE*)(a1 + 226) & 1) != 0) {
    goto LABEL_28;
  }
  if ((*(_BYTE*)(a1 + 145) & 1) == 0) {
    goto LABEL_28;
  }
  v6 = HubCharacterNatives_cf7940(a1);
  if (v6 == 0) {
    goto LABEL_28;
  }
  v7 = *(float32x4_t*)(v6 + 304);
  v8 = (float32x4_t*)v6;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v9 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v10 = (v9 & 8) != 0 ? 2 : 3;
    if ((v10 & v9) == 0) {
      v19 = vsubq_f32(*a2, v7);
      v20 = vmulq_f32(v19, v19);
      LANES128(v20).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
              .n64_u64[0];
      v16 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u32[0];
      goto LABEL_21;
    }
  }
  if (game_ProcFadeView_instance_ == 0 ||
      ((v38 = *(float32x4_t*)(v6 + 304),
        *(float*)((v11 =
                       game_ProcFadeView_instance_ +
                       ((unsigned __int64)*(
                            unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                        << 6)) +
                  172) != *(float*)(v11 + 168))
           ? (v12 = *(_OWORD*)(v11 + 208))
           : (__int128)((*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) +
                                                        16LL))(v11 + 160),
                        v7 = v38),
       *((float*)&v12 + 3) != 0x1.0000000000000p+0f)) {
    v17 = vsubq_f32(*a2, v7);
    v18 = vmulq_f32(v17, v17);
    LANES128(v18).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
            .n64_u64[0];
    v16 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
            .n64_u32[0];
    goto LABEL_18;
  }
  {
    __typeof__(v13) z_ = (__typeof__(v13)){0};
    LODWORD(z_) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                               (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
                                  v11 + 160, *((float*)&v12 + 3)))
                      .n128_u32[3];
    v13 = z_;
  }
  v14 = vsubq_f32(*a2, v38);
  v15 = vmulq_f32(v14, v14);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  v16 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
            .n64_u32[0];
  if (v13 == 0x1.0000000000000p+0f) {
  LABEL_21:
    v21 = vmulq_f32(v8[21], *a3);
    LANES128(v21).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    {
      __typeof__(v22) z_ = (__typeof__(v22)){0};
      LODWORD(z_) =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
              .n64_u32[0];
      v22 = z_;
    }
    if (*(float*)&v16 <= 0x1.47ae160000000p-7f &&
        v22 >= 0x1.cccccc0000000p-1f) {
      goto LABEL_28;
    }
    goto LABEL_26;
  }
LABEL_18:
  if (*(float*)&v16 > 0x1.0000000000000p+0f) {
  LABEL_26:
    if ((*(_BYTE*)(a1 + 226) & 1) == 0) {
      *(_BYTE*)(a1 + 226) = 1;
    }
  }
LABEL_28:
  if (*(_BYTE*)(a1 + 145) == 1) {
    v24 = (float32x4_t*)HubCharacterNatives_cf7940(a1);
    if (v24 != nullptr) {
      v25 = vsubq_f32(v24[19], *a2);
      v26 = vmulq_f32(v25, v25);
      LANES128(v26).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v24[19]).n128_u32[0] = *(unsigned __int32*)&(*a2);
        LANES128(v24[19]).n128_u32[1] = LANES128(*(a2)).n128_u32[1];
        v27 = v24[19];
        LANES128(v27).n128_u32[2] = LANES128(*(a2)).n128_u32[2];
        LANES128(v24[18]).n128_u32[2] |= 1u;
        LANES128(v27).n128_u64[1] = LANES128(v27).n128_u32[2];
        v24[19] = v27;
      }
      LANES64(v28).n64_u64[0] =
          LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v24[21], *a3)))).n64_u64[0];
      if ((LANES64(v28).n64_u8[0] & 1) != 0 ||
          (LANES64(v28).n64_u8[2] & 1) != 0 ||
          (LANES64(v28).n64_u8[4] & 1) != 0 ||
          (LANES64(v28).n64_u8[6] & 1) != 0) {
        LANES128(v24[21]).n128_u32[0] = *(unsigned __int32*)&(*a3);
        v29 = v24;
        v30 = LANES128(v24[18]).n128_u32[2] | 1;
        LANES128(v24[21]).n128_u32[1] = LANES128(*(a3)).n128_u32[1];
        LANES128(v24[21]).n128_u32[2] = LANES128(*(a3)).n128_u32[2];
        v31 = LANES128(*(a3)).n128_u32[3];
        LANES128(v24[18]).n128_u32[2] = v30;
        LANES128(v24[21]).n128_u32[3] = v31;
        Quat_622ac0((void*)(&v39), (float32x2_t*)a3);
        v32 = DWORD2(v39);
        LANES128(v29[20]).n128_u64[0] = v39;
        v33 = v29[20];
        LANES128(v33).n128_u64[1] = v32;
        v29[20] = v33;
      }
    }
  }
  if (*(_BYTE*)(a1 + 226) == 1 &&
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 512LL) != 2) {
    v34 = *(_QWORD*)(a1 + 232);
    if (v34 != 0) {
      if (*(_DWORD*)(v34 + 384) == 0) {
        if (GameData_21d92e0 == 2) {
          v35 = *(_QWORD*)(v34 + 392);
          v36 = *(_QWORD*)(v34 + 400);
          if (v36 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                      memory_order_relaxed);
            v37 = *(_DWORD*)(v35 + 11784);
            if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
              std___1___shared_weak_count___release_weak(v36);
            }
          }
          else {
            v37 = *(_DWORD*)(v35 + 11784);
          }
          if (v37 <= 0x1A) {
            if (((1 << v37) & 0x410C) != 0) {
              *(_DWORD*)(*(_QWORD*)(v34 + 104) + 212LL) = 0;
              goto LABEL_52;
            }
            if (((1 << v37) & 0x5000080) != 0) {
              *(_DWORD*)(*(_QWORD*)(v34 + 104) + 212LL) = 0;
              goto LABEL_52;
            }
          }
        }
        *(_DWORD*)(v34 + 384) = 1;
      }
    LABEL_52:
      *(_BYTE*)(a1 + 226) = 0;
    }
  }
}

__int64 game_zview_cf7590(__int64 a1, float32x4_t* a2, float32x4_t* a3,
                          float32x4_t a4, long double a5)
{

#pragma clang fp contract(off)
  __int64 v8;
  float32x4_t v9;
  float32x4_t* v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  __int128 v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  bool v18;
  float32x4_t* v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t* v24;
  int v25;
  unsigned __int32 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  float32x4_t v32;
  long double v33;

  if ((*(_BYTE*)(a1 + 226) & 1) != 0) {
    goto LABEL_28;
  }
  if ((*(_BYTE*)(a1 + 145) & 1) == 0) {
    goto LABEL_28;
  }
  v8 = HubCharacterNatives_cf7940(a1);
  if (v8 == 0) {
    goto LABEL_28;
  }
  v9 = *(float32x4_t*)(v8 + 304);
  v10 = (float32x4_t*)v8;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v12 = (v11 & 8) != 0 ? 2 : 3;
    if ((v12 & v11) == 0) {
      v17 = vsubq_f32(*a2, v9);
      a4 = vmulq_f32(v17, v17);
      LANES128(a4).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                                 LANES128_OF(vextq_s8(a4, a4, 8u)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0])))
              .n64_u64[0];
      LANES128(a4).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0])))
              .n64_u64[0];
      goto LABEL_21;
    }
  }
  if (game_ProcFadeView_instance_ == 0 ||
      ((v32 = *(float32x4_t*)(v8 + 304),
        *(float*)((v13 =
                       game_ProcFadeView_instance_ +
                       ((unsigned __int64)*(
                            unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                        << 6)) +
                  172) != *(float*)(v13 + 168))
           ? (v14 = *(_OWORD*)(v13 + 208))
           : (__int128)((*(void (**)(unsigned __int64))(*(_QWORD*)(v13 + 160) +
                                                        16LL))(v13 + 160),
                        v9 = v32),
       *((float*)&v14 + 3) != 0x1.0000000000000p+0f)) {
    v16 = vsubq_f32(*a2, v9);
    a4 = vmulq_f32(v16, v16);
    *(_QWORD*)&a5 = LANES128_OF(vextq_s8(a4, a4, 8u)).n128_u64[0];
    LANES128(a4).n128_u64[0] =
        LANES64_OF(vadd_f32(*(float32x2_t*)&a5,
                            COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0])))
            .n64_u64[0];
    LANES128(a4).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0])))
            .n64_u64[0];
    goto LABEL_18;
  }
  LODWORD(a5) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v13 + 160) + 16LL))(
                                v13 + 160, *((float*)&v14 + 3)))
                    .n128_u32[3];
  v15 = vsubq_f32(*a2, v32);
  a4 = vmulq_f32(v15, v15);
  LANES128(a4).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(a4, a4, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0])))
          .n64_u64[0];
  LANES128(a4).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(a4).n128_u64[0])))
          .n64_u64[0];
  if (*(float*)&a5 == 0x1.0000000000000p+0f) {
  LABEL_21:
    a5 = COERCE_LONG_DOUBLE(vmulq_f32(v10[21], *a3));
    *(float32x2_t*)&a5 = vadd_f32(
        COERCE_AS(float32x2_t,
                  LANES128_OF(vextq_s8(*(int8x16_t*)&a5, *(int8x16_t*)&a5, 8u))
                      .n128_u64[0]),
        *(float32x2_t*)&a5);
    v18 = LANES128(a4).n128_f32[0] <= 0x1.47ae160000000p-7f;
    LANES128(a4).n128_u32[0] = 1063675494;
    *(float32x2_t*)&a5 = vpadd_f32(*(float32x2_t*)&a5, *(float32x2_t*)&a5);
    if (v18 && *(float*)&a5 >= 0x1.cccccc0000000p-1f) {
      goto LABEL_28;
    }
    goto LABEL_26;
  }
LABEL_18:
  LODWORD(a5) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  if (LANES128(a4).n128_f32[0] > 0x1.0000000000000p+0f) {
  LABEL_26:
    if ((*(_BYTE*)(a1 + 226) & 1) == 0) {
      *(_BYTE*)(a1 + 226) = 1;
    }
  }
LABEL_28:
  if (*(_BYTE*)(a1 + 145) == 1) {
    v20 = (float32x4_t*)HubCharacterNatives_cf7940(a1);
    if (v20 != nullptr) {
      v21 = vsubq_f32(v20[19], *a2);
      v22 = vmulq_f32(v21, v21);
      LANES128(v22).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v20[19]).n128_u32[0] = *(unsigned __int32*)&(*a2);
        LANES128(v20[19]).n128_u32[1] = LANES128(*(a2)).n128_u32[1];
        v23 = v20[19];
        LANES128(v23).n128_u32[2] = LANES128(*(a2)).n128_u32[2];
        LANES128(v20[18]).n128_u32[2] |= 1u;
        LANES128(v23).n128_u64[1] = LANES128(v23).n128_u32[2];
        v20[19] = v23;
      }
      a4 = *a3;
      *(int16x4_t*)&a5 = vmovn_s32(vmvnq_s8(vceqq_f32(v20[21], *a3)));
      if ((LOBYTE(a5) & 1) != 0 || (BYTE2(a5) & 1) != 0 ||
          (BYTE4(a5) & 1) != 0 || (BYTE6(a5) & 1) != 0) {
        LANES128(v20[21]).n128_u32[0] = LANES128(a4).n128_u32[0];
        v24 = v20;
        v25 = LANES128(v20[18]).n128_u32[2] | 1;
        LANES128(v20[21]).n128_u32[1] = LANES128(*(a3)).n128_u32[1];
        LANES128(v20[21]).n128_u32[2] = LANES128(*(a3)).n128_u32[2];
        v26 = LANES128(*(a3)).n128_u32[3];
        LANES128(v20[18]).n128_u32[2] = v25;
        LANES128(v20[21]).n128_u32[3] = v26;
        Quat_622ac0((void*)(&v33), (float32x2_t*)a3);
        *(long double*)&a4 = v33;
        LANES128(v24[20]).n128_u64[0] = *(_QWORD*)&v33;
        a5 = *(long double*)&v24[20];
        *((_QWORD*)&a5 + 1) = LANES128(a4).n128_u32[2];
        *(long double*)&v24[20] = a5;
      }
    }
  }
  if (*(_BYTE*)(a1 + 226) == 1 &&
      *(_DWORD*)(*(_QWORD*)(a1 + 16) + 512LL) != 2) {
    v27 = *(_QWORD*)(a1 + 232);
    if (v27 != 0) {
      if (*(_DWORD*)(v27 + 384) == 0) {
        if (GameData_21d92e0 == 2) {
          v28 = *(_QWORD*)(v27 + 392);
          v29 = *(_QWORD*)(v27 + 400);
          if (v29 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                      memory_order_relaxed);
            v30 = *(_DWORD*)(v28 + 11784);
            if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
              std___1___shared_weak_count___release_weak(v29);
            }
          }
          else {
            v30 = *(_DWORD*)(v28 + 11784);
          }
          if (v30 <= 0x1A) {
            if (((1 << v30) & 0x410C) != 0) {
              *(_DWORD*)(*(_QWORD*)(v27 + 104) + 212LL) = 0;
              goto LABEL_52;
            }
            if (((1 << v30) & 0x5000080) != 0) {
              *(_DWORD*)(*(_QWORD*)(v27 + 104) + 212LL) = 0;
              goto LABEL_52;
            }
          }
        }
        *(_DWORD*)(v27 + 384) = 1;
      }
    LABEL_52:
      *(_BYTE*)(a1 + 226) = 0;
    }
  }
  return CharacterModel_cf6940(a1, *(long double*)&a4, *(double*)&a5);
}

#pragma GCC visibility pop
