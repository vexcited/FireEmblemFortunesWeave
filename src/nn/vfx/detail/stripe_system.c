#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_2136458;
__int64 StripeSystem_Destructor(__int64 a1);
__int64 GameRoutine_5b3d60(__int64, unsigned int, __int64);
__int64 GameRoutine_5c02b0(_QWORD, _QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5df100(__int64, unsigned int);
__int64 GameRoutine_5df110(_QWORD, long double, long double);
__int64 GameRoutine_5fcc40(__int64);
__int64 GameRoutine_5fdcb0(__int64 result, int);
__int64 GameRoutine_5fdce0(__int64 result, unsigned int);
__int64 GameRoutine_5fe0a0(__int64, unsigned int, unsigned int, unsigned int*,
                           unsigned int*);
__int64 GameRoutine_5fe120(__int64, unsigned int, unsigned int, _QWORD*,
                           __int64);
__int64 GameRoutine_5fe1a0(__int64, unsigned int, unsigned int, _QWORD*,
                           __int64);
__int64 RectDrawer_5fd420(__int64, __int64, unsigned int);
__int64 nn_5b3d10(__int64, int, __int64);
__n128 GameRoutine_5c02d0(__int64, char);
extern __int64 GameData_2136480[2];
extern __int64 GameData_21a3a20;
float GameRoutine_5cacd0(_OWORD*, float32x4_t*, __int64, int, int, float);
void* GameRoutine_5dfd10();
void GameRoutine_5c2d00(long double, long double, __int64, int8x16_t*, __int64,
                        float*);
void GameRoutine_5c38e0(long double, long double, __int64, int8x16_t*, __int64,
                        float*);
__int64 StripeSystem_5c9d00(__int64* a1);
bool StripeSystem_5ca220(__int64 a1, double a2, long double a3);
void StripeSystem_5caa80(float a1, float a2, __int64 a3, __int64 a4, __int64 a5,
                         __int64 a6);
void StripeSystem_5cb940(__int64 a1, __int64 a2);
__int64 StripeSystem_5cc140(__int64 a1, int a2);
__int64 StripeSystem_5cc7c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            int a5, char a6, __int64 a7, char a8);
__int64 StripeSystem_5caf20(__int64, __int64, int8x16_t*);
float game_5c0500(float32x4_t*, float32x2_t*, float32x2_t*, float32x2_t*,
                  float32x2_t*, float);
__int64 StripeSystem_5ca340(__int64 a1);
float StripeSystem_5cacd0(float32x4_t* a1, float32x4_t* a2, __int64 a3, int a4,
                          int a5, float a6);

__int64 StripeSystem_5c9d00(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 result;
  float v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  float* v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  int v23;
  __int64 v24;
  __int64 v25;
  float* v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float* v36;
  float v37;
  float v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;

  if (*(_BYTE*)(*(_QWORD*)(*a1 + 160) + 1874LL) != 0) {
    return 0;
  }
  result = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)(*a1 + 2088) + 16LL))(*a1 + 2088, 64, 128);
  if (result != 0) {
    *(_QWORD*)(result + 48) = 0;
    *(_QWORD*)(result + 56) = 0;
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 40) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(*a1 + 1048) = result;
    v3 = *(float*)(*(_QWORD*)(*a1 + 160) + 2048LL);
    v4 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 696LL);
    if (v4 == 0 || (int)(v5 = *(_DWORD*)(v4 + 4)) < 1) {
    LABEL_34:
      *(_DWORD*)(result + 48) = vcvtps_u32_f32(v3);
      v21 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 704LL);
      v22 = (float)*(int*)(*(_QWORD*)(*a1 + 160) + 2232LL);
      if (v21 == 0) {
        goto LABEL_63;
      }
      v23 = *(_DWORD*)(v21 + 4);
      if (v23 < 1) {
        goto LABEL_63;
      }
      v24 = v23 & 7;
      if ((unsigned int)v23 < 8) {
        v25 = 0;
      LABEL_58:
        if (v24 != 0) {
          v36 = (float*)(v21 + 16 * v25 + 12);
          do {
            v37 = *v36;
            v36 += 4;
            v38 = v37;
            if (v22 < v37) {
              v22 = v38;
            }
            --v24;
          } while (v24 != 0);
        }
      LABEL_63:
        *(_DWORD*)(result + 52) = (int)v22;
        *(_DWORD*)(result + 56) = 0;
        v39 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 824LL);
        *(_DWORD*)result = *(_DWORD*)(v39 + 28);
        v40 = *(_DWORD*)(v39 + 32);
        *(_QWORD*)(result + 8) = 0;
        *(_DWORD*)(result + 4) = v40;
        if ((nn_5b3d10(*a1, 4, 96) & 1) != 0) {
          v41 = *a1;
          v42 = GameData_21a3a20;
          v43 = *(_QWORD*)(*a1 + 1048);
          v44 = *(_QWORD*)(*(_QWORD*)(*a1 + 568) + 824LL);
          v45 = (int)*(float*)(v44 + 20);
          v46 = *(_DWORD*)(v41 + 560) + StripeSystem_5cc140(*a1, v45);
          *(_DWORD*)(v43 + 40) = v46;
          v47 = 2 * (v45 + (v45 - 1) * (int)*(float*)(v44 + 16));
          *(_DWORD*)(v43 + 32) = v47;
          v48 = v47 * v46;
          v49 = *(_DWORD*)(v42 + 24);
          *(_BYTE*)(v43 + 16) = 0;
          *(_DWORD*)(v43 + 36) = v48 * v49;
          if (v48 != 0) {
            if ((GameRoutine_5b3d60(v41, *(_DWORD*)(v42 + 24), 80LL * v48) &
                 1) != 0) {
              *(_BYTE*)(v43 + 16) = 1;
              return 1;
            }
            if ((*(_BYTE*)(v43 + 16) & 1) != 0) {
              return 1;
            }
          }
          GameRoutine_5c02b0(*a1, 0x10000);
          GameRoutine_5c02c0("[Stripe] Memory Allocate Error!! : %d\n", 56);
        }
        return 0;
      }
      v26 = (float*)(v21 + 76);
      v27 = 0;
      v28 = -(__int64)(v23 & 0x7FFFFFF8);
      while (1) {
        v29 = *(v26 - 16);
        if (v22 >= v29) {
          v29 = v22;
          v30 = *(v26 - 12);
          if (v29 < v30) {
          LABEL_42:
            v31 = *(v26 - 8);
            if (v30 < v31) {
              goto LABEL_43;
            }
            goto LABEL_51;
          }
        }
        else {
          v30 = *(v26 - 12);
          if (v29 < v30) {
            goto LABEL_42;
          }
        }
        v30 = v29;
        v31 = *(v26 - 8);
        if (v30 < v31) {
        LABEL_43:
          v32 = *(v26 - 4);
          if (v31 < v32) {
            goto LABEL_44;
          }
          goto LABEL_52;
        }
      LABEL_51:
        v31 = v30;
        v32 = *(v26 - 4);
        if (v31 < v32) {
        LABEL_44:
          v33 = *v26;
          if (v32 < *v26) {
            goto LABEL_45;
          }
          goto LABEL_53;
        }
      LABEL_52:
        v32 = v31;
        v33 = *v26;
        if (v32 < *v26) {
        LABEL_45:
          v34 = v26[4];
          if (v33 < v34) {
            goto LABEL_46;
          }
          goto LABEL_54;
        }
      LABEL_53:
        v33 = v32;
        v34 = v26[4];
        if (v33 < v34) {
        LABEL_46:
          v35 = v26[8];
          if (v34 < v35) {
            goto LABEL_47;
          }
          goto LABEL_55;
        }
      LABEL_54:
        v34 = v33;
        v35 = v26[8];
        if (v34 < v35) {
        LABEL_47:
          v22 = v26[12];
          if (v35 >= v22) {
            goto LABEL_56;
          }
          goto LABEL_39;
        }
      LABEL_55:
        v35 = v34;
        v22 = v26[12];
        if (v35 >= v22) {
        LABEL_56:
          v22 = v35;
        }
      LABEL_39:
        v27 -= 8;
        v26 += 32;
        if (v28 == v27) {
          v25 = -v27;
          goto LABEL_58;
        }
      }
    }
    v6 = v5 & 7;
    if (v5 < 8) {
      v7 = 0;
    LABEL_29:
      if (v6 != 0) {
        v18 = (float*)(v4 + 16 * v7 + 12);
        do {
          v19 = *v18;
          v18 += 4;
          v20 = v19;
          if (v3 < v19) {
            v3 = v20;
          }
          --v6;
        } while (v6 != 0);
      }
      goto LABEL_34;
    }
    v8 = (float*)(v4 + 76);
    v9 = 0;
    v10 = -(__int64)(v5 & 0x7FFFFFF8);
    while (1) {
      v11 = *(v8 - 16);
      if (v3 >= v11) {
        v11 = v3;
        v12 = *(v8 - 12);
        if (v11 < v12) {
        LABEL_13:
          v13 = *(v8 - 8);
          if (v12 < v13) {
            goto LABEL_14;
          }
          goto LABEL_22;
        }
      }
      else {
        v12 = *(v8 - 12);
        if (v11 < v12) {
          goto LABEL_13;
        }
      }
      v12 = v11;
      v13 = *(v8 - 8);
      if (v12 < v13) {
      LABEL_14:
        v14 = *(v8 - 4);
        if (v13 < v14) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v13 = v12;
      v14 = *(v8 - 4);
      if (v13 < v14) {
      LABEL_15:
        v15 = *v8;
        if (v14 < *v8) {
          goto LABEL_16;
        }
        goto LABEL_24;
      }
    LABEL_23:
      v14 = v13;
      v15 = *v8;
      if (v14 < *v8) {
      LABEL_16:
        v16 = v8[4];
        if (v15 < v16) {
          goto LABEL_17;
        }
        goto LABEL_25;
      }
    LABEL_24:
      v15 = v14;
      v16 = v8[4];
      if (v15 < v16) {
      LABEL_17:
        v17 = v8[8];
        if (v16 < v17) {
          goto LABEL_18;
        }
        goto LABEL_26;
      }
    LABEL_25:
      v16 = v15;
      v17 = v8[8];
      if (v16 < v17) {
      LABEL_18:
        v3 = v8[12];
        if (v17 >= v3) {
          goto LABEL_27;
        }
        goto LABEL_10;
      }
    LABEL_26:
      v17 = v16;
      v3 = v8[12];
      if (v17 >= v3) {
      LABEL_27:
        v3 = v17;
      }
    LABEL_10:
      v9 -= 8;
      v8 += 32;
      if (v10 == v9) {
        v7 = -v9;
        goto LABEL_29;
      }
    }
  }
  return result;
}

bool StripeSystem_5ca220(__int64 a1, double a2, long double a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  __int64 v4;
  int v5;
  float32x4_t* v7;
  __int64 v8;
  int8x16_t* v10;
  long double v11;
  __int64 v12;
  long double v13;
  long double v14;
  float32x4_t v15;
  float32x4_t v16;
  float v17;
  float v18;
  unsigned int v19;
  unsigned int v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  long double v25;

  v3 = *(_QWORD**)(a1 + 16);
  v4 = v3[20];
  v5 = *(unsigned __int8*)(v4 + 1874);
  if (*(_BYTE*)(v4 + 1874) == 0) {
    v7 = *(float32x4_t**)(a1 + 8);
    if (v7 != nullptr) {
      v8 = v3[71];
      v10 = *(int8x16_t**)(a1 + 8);
      v12 = v3[19];
      v25 = *(long double*)(v3[62] + 16LL * *(int*)(a1 + 32));
      v11 = v25;
      LODWORD(a3) = *(_DWORD*)(a1 + 24);
      LODWORD(v11) = *(_DWORD*)(a1 + 28);
      GameRoutine_5c2d00(v11, a3, v12, v10, v8, (float*)&v25);
      LODWORD(v14) = *(_DWORD*)(a1 + 24);
      LODWORD(v13) = *(_DWORD*)(a1 + 28);
      GameRoutine_5c38e0(v13, v14, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 152LL),
                         v7 + 1, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 568LL),
                         (float*)&v25);
      v15 = *v7;
      v16 = v7[1];
      v17 =
          *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 568LL) + 24LL) +
                    864LL);
      v18 = vmuls_lane_f32(v17, *v7, 2);
      LANES128(v15).n128_f32[0] = v17 * COERCE_FLOAT(*v7);
      *(float*)&v19 = v17 * LANES128(v16).n128_f32[0];
      LANES128(v15).n128_f32[1] = vmuls_lane_f32(
          v17, COERCE_AS(float32x2_t, LANES128(*(v7)).n128_u64[0]), 1);
      *(float*)&v20 = vmuls_lane_f32(
          v17, COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1);
      v21 = vmuls_lane_f32(v17, v16, 2);
      LANES128(v16).n128_u64[0] = __PAIR64__(v20, v19);
      LANES128(v15).n128_f32[2] = v18;
      LANES128(v16).n128_f32[2] = v21;
      *v7 = v15;
      v7[1] = v16;
      v22 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1048LL);
      v23 = *(_QWORD*)(v22 + 24);
      if (v23 != 0) {
        do {
          v24 = v23;
          v23 = *(_QWORD*)(v23 + 104);
        } while (v23 != 0);
        *(_QWORD*)(v24 + 104) = v7;
      }
      else {
        *(_QWORD*)(v22 + 24) = v7;
      }
    }
  }
  return v5 == 0;
}

__int64 StripeSystem_5ca340(__int64 a1)
{
  int8x16_t* v1;
  __int64 v2;

  v1 = *(int8x16_t**)(a1 + 8);
  if (v1 == nullptr) {
    return GameRoutine_5c02c0("Stripe instance is null\n");
  }
  if ((LANES128(v1[8]).n128_u8[4] & 1) == 0) {
    return GameRoutine_5c02c0("Stripe instance is not used\n");
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 1048LL);
  if (v2 == 0) {
    return GameRoutine_5c02c0("EmitterPluginUserData is empty\n");
  }
  if ((*(_BYTE*)(v2 + 16) & 1) != 0) {
    return StripeSystem_5caf20(GameData_21a3a20, a1, v1);
  }
  return GameRoutine_5c02c0("Vertex buffer for stripe has not allocated\n");
}

__int64 StripeSystem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)a1 = GameData_2136458 + 16;
  result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 24LL))(
      *(_QWORD*)(a1 + 16), v2);
  *(_QWORD*)(a1 + 48) = 0;
  return result;
}

void StripeSystem_5caa80(float a1, float a2, __int64 a3, __int64 a4, __int64 a5,
                         __int64 a6)
{
  int v6;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  int v16;
  float v17;
  float v18;
  __int64 v19;
  __int128 v20;
  float32x4_t v21;
  _DWORD* v22;
  float v23;
  float v24;
  int v25;
  _DWORD* v26;
  __int64 v27;
  int v28;
  float32x4_t* v29;
  float v30;
  _DWORD* v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float v37;
  int v38;
  float32x4_t v39;
  __int128 v40;

  v6 = *(_DWORD*)(a4 + 112);
  if (v6 < 3 || (v10 = (int)*(float*)(a5 + 16), v11 = (v6 - 1) * v10,
                 (int)(v12 = (unsigned int)(v11 + v6)) < 1)) {
    *(_DWORD*)(a4 + 120) = 0;
  }
  else {
    v13 = a6 + 80;
    v15 = 0;
    v16 = 0;
    v17 = 0x1.0000000000000p+0f /
          (float)((float)(a1 + -0x1.0000000000000p+0f) + (float)v11);
    v18 = 0x1.0000000000000p+0f / (float)(v10 + 1);
    v19 = *(_QWORD*)(*(_QWORD*)(a4 + 88) + 48LL);
    do {
      v23 = (float)(unsigned int)v15;
      v24 = v18 * (float)(unsigned int)v15;
      v25 = vcvtms_s32_f32(v24);
      if (v16 < v25) {
        v19 = *(_QWORD*)(v19 + 48);
        v16 = v25;
      }
      v40 = (__typeof__(v40)){0};
      v39 = (__typeof__(v39)){0};
      GameRoutine_5cacd0(&v40, &v39, v19, v25, v6, v24 - (float)v25);
      v20 = v40;
      ++v15;
      *(_DWORD*)(v13 - 72) = DWORD2(v40);
      *(_QWORD*)(v13 - 80) = v20;
      *(_QWORD*)v13 = v20;
      *(_DWORD*)(v13 + 8) = DWORD2(v20);
      LODWORD(v20) = *(_DWORD*)(v19 + 12);
      *(float*)(v13 - 36) = v23;
      *(float*)(v13 + 44) = v23;
      *(float*)(v13 - 68) = a2 * *(float*)&v20;
      v21 = v39;
      *(float*)(v13 + 12) = -(float)(*(float*)&v20 * a2);
      *(float*)(v13 - 52) = v17 * v23;
      *(float*)(v13 + 28) = v17 * v23;
      *(_QWORD*)(v13 - 64) = LANES128(v21).n128_u64[0];
      *(_DWORD*)(v13 - 56) = LANES128(v21).n128_u32[2];
      *(_QWORD*)(v13 + 16) = LANES128(v21).n128_u64[0];
      v22 = (_DWORD*)(v13 + 24);
      v13 += 160;
      *v22 = LANES128(v21).n128_u32[2];
    } while (v12 != v15);
    *(_DWORD*)(a4 + 120) = 2 * v12;
    if (*(_DWORD*)a5 != 0) {
      v26 = (_DWORD*)(a6 + 120);
      v27 = 0;
      v28 = 0;
      v29 = *(float32x4_t**)(*(_QWORD*)(a4 + 88) + 48LL);
      do {
        v37 = v18 * (float)(unsigned int)v27;
        v38 = vcvtms_s32_f32(v37);
        if (v28 < v38) {
          v29 = (float32x4_t*)LANES128(v29[3]).n128_u64[0];
          v28 = v38;
        }
        ++v27;
        v30 = v37 - (float)v38;
        v31 = v26 - 20;
        v32 = vmlaq_n_f32(
            v29[2],
            vsubq_f32(*(float32x4_t*)(LANES128(v29[3]).n128_u64[0] + 32),
                      v29[2]),
            v30);
        v33 = vmulq_f32(v32, v32);
        LANES128(v33).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_u64[0];
        LANES128(v33).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                .n64_u64[0];
        LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
        v34 = vrsqrteq_f32(v33);
        v35 = vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(v33, v34)));
        v36 = vbicq_s8(
            vmulq_f32(v32,
                      vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(v33, v35)))),
            vceqzq_f32(v33));
        *((_QWORD*)v26 - 11) = LANES128(v36).n128_u64[0];
        *((_QWORD*)v26 - 1) = LANES128(v36).n128_u64[0];
        *v26 = LANES128(v36).n128_u32[2];
        v26 += 40;
        *v31 = LANES128(v36).n128_u32[2];
      } while (v12 != v27);
    }
  }
}

float StripeSystem_5cacd0(float32x4_t* a1, float32x4_t* a2, __int64 a3, int a4,
                          int a5, float a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t* v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t* v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  __int64 v33;
  __int64 v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t* v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t* v45;
  float32x4_t v46;
  float32x4_t* v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;

  if (a4 == 0) {
    v20 = *(float32x4_t*)a3;
    v21 = *(float32x4_t*)(a3 + 16);
    v22 = *(_QWORD*)(a3 + 48);
    LANES128(v23).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v23).n128_u64[1] = 0x3F0000003F000000LL;
    v24 = *(float32x4_t*)a3;
    v25 = *(float32x4_t**)(v22 + 48);
    LANES128(v24).n128_u32[3] = 0;
    v55 = v24;
    v26 = *(float32x4_t*)v22;
    v27 = *(float32x4_t*)(v22 + 16);
    v28 = *(float32x4_t*)v22;
    LANES128(v28).n128_u32[3] = 0;
    v54 = v28;
    v29 = vsubq_f32(*v25, v20);
    v30 = vaddq_f32(vsubq_f32(v26, v20), vsubq_f32(v26, *v25));
    LANES128(v26).n128_u64[0] = 0x3E8000003E800000LL;
    LANES128(v26).n128_u64[1] = 0x3E8000003E800000LL;
    v31 = vmulq_f32(v29, v23);
    LANES128(v31).n128_u32[3] = 0;
    v32 = vmulq_f32(v30, v26);
    LANES128(v32).n128_u32[3] = 0;
    v52 = v31;
    v53 = v32;
  LABEL_9:
    v19 = vaddq_f32(vmulq_n_f32(v21, 0x1.0000000000000p+0f - a6),
                    vmulq_n_f32(v27, a6));
    goto LABEL_10;
  }
  if (a4 != a5 - 1) {
    v33 = *(_QWORD*)(a3 + 48);
    if (a4 == a5 - 2) {
      v34 = *(_QWORD*)(v33 + 56);
      LANES128(v35).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v35).n128_u64[1] = 0x3F0000003F000000LL;
      v36 = *(float32x4_t*)v34;
      v21 = *(float32x4_t*)(v34 + 16);
      v37 = *(float32x4_t**)(v34 + 56);
      v38 = *(float32x4_t*)v34;
      LANES128(v38).n128_u32[3] = 0;
      v55 = v38;
      v39 = *(float32x4_t*)v33;
      v27 = *(float32x4_t*)(v33 + 16);
      v40 = *(float32x4_t*)v33;
      LANES128(v40).n128_u32[3] = 0;
      v54 = v40;
      v41 = vmulq_f32(vsubq_f32(v39, *v37), v35);
      v42 = vaddq_f32(vsubq_f32(v36, v39), vsubq_f32(v36, *v37));
      LANES128(v39).n128_u64[0] = 0xBE800000BE800000LL;
      LANES128(v39).n128_u64[1] = 0xBE800000BE800000LL;
      LANES128(v41).n128_u32[3] = 0;
      v43 = vmulq_f32(v42, v39);
      v53 = v41;
    }
    else {
      v44 = *(float32x4_t*)a3;
      v21 = *(float32x4_t*)(a3 + 16);
      v45 = *(float32x4_t**)(a3 + 56);
      v46 = *(float32x4_t*)a3;
      v47 = *(float32x4_t**)(v33 + 48);
      LANES128(v46).n128_u32[3] = 0;
      v55 = v46;
      v48 = *(float32x4_t*)v33;
      v27 = *(float32x4_t*)(v33 + 16);
      v49 = *(float32x4_t*)v33;
      LANES128(v49).n128_u32[3] = 0;
      v54 = v49;
      LANES128(v49).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v49).n128_u64[1] = 0x3F0000003F000000LL;
      v50 = vmulq_f32(vsubq_f32(v48, *v45), v49);
      LANES128(v50).n128_u32[3] = 0;
      v53 = v50;
      v43 = vmulq_f32(vsubq_f32(*v47, v44), v49);
    }
    LANES128(v43).n128_u32[3] = 0;
    v52 = v43;
    goto LABEL_9;
  }
  v6 = *(_QWORD*)(a3 + 56);
  LANES128(v7).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v7).n128_u64[1] = 0x3F0000003F000000LL;
  v8 = *(float32x4_t*)v6;
  v9 = *(float32x4_t*)(v6 + 16);
  v10 = *(float32x4_t**)(v6 + 56);
  v11 = *(float32x4_t*)v6;
  LANES128(v11).n128_u32[3] = 0;
  v55 = v11;
  v12 = *(float32x4_t*)a3;
  v13 = *(float32x4_t*)(a3 + 16);
  v14 = *(float32x4_t*)a3;
  LANES128(v14).n128_u32[3] = 0;
  v54 = v14;
  v15 = vsubq_f32(v12, *v10);
  v16 = vaddq_f32(vsubq_f32(v8, v12), vsubq_f32(v8, *v10));
  LANES128(v12).n128_u64[0] = 0xBE800000BE800000LL;
  LANES128(v12).n128_u64[1] = 0xBE800000BE800000LL;
  v17 = vmulq_f32(v15, v7);
  LANES128(v17).n128_u32[3] = 0;
  v18 = vmulq_f32(v16, v12);
  LANES128(v18).n128_u32[3] = 0;
  v52 = v18;
  v53 = v17;
  v19 = vaddq_f32(vmulq_f32(v9, COERCE_AS(float32x4_t, 0)), v13);
  a6 = 0x1.0000000000000p+0f;
LABEL_10:
  *a2 = v19;
  return game_5c0500(a1, (float32x2_t*)&v55, (float32x2_t*)&v53,
                     (float32x2_t*)&v54, (float32x2_t*)&v52, a6);
}

void StripeSystem_5cb940(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  long double v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  int v16;
  float v17;
  float v18;
  int v19;
  int v20;
  int v21;
  float v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float32x4_t v31;
  __int128 v32;
  __int128 v33;
  unsigned int v34;
  float32x4_t v35;
  __int128 v36;
  __int128 v37;
  float32x4_t* v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float v42;
  __int64 v43;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v2 = *(_QWORD*)(a2 + 1048);
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 != 0 && *(_BYTE*)(v2 + 16) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(a2 + 568) + 824LL);
    v6 = GameRoutine_5df100(a2 + 1960, *(_DWORD*)(v2 + 56)),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v9 = v6;
    v10 = 0;
    v43 = v6 + 160;
    v11 = (__int64*)GameData_2136480[0];
    do {
      v15 = v3;
      v16 = *(_DWORD*)(v2 + 32);
      v17 = *(float*)(a2 + 76) + *(float*)(v3 + 124);
      v18 = *(float*)(v3 + 136);
      v3 = *(_QWORD*)(v3 + 104);
      v19 = *(_DWORD*)(v15 + 112);
      v20 = *(_DWORD*)(v15 + 116);
      *(float*)(v15 + 124) = v17;
      *(float*)(v15 + 136) = v17;
      if (v19 < 2) {
        if (v10 != 0) {
          *(_QWORD*)(v10 + 104) = v3;
        }
        else {
          *(_QWORD*)(v2 + 24) = v3;
        }
        v12 = *(_QWORD*)(v15 + 80);
        v13 = *v11;
        v14 = *(float*)(*(_QWORD*)(*(_QWORD*)(a2 + 568) + 824LL) + 20LL);
        --*(_DWORD*)(a2 + 2104);
        *(_QWORD*)(a2 + 2096) -=
            (((unsigned __int64)(unsigned int)v14 << 6) + 255) & 0x7FFFFFFF00LL;
        *(__n128*)&v7 = GameRoutine_5c02d0(v12, 1),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
        *(_QWORD*)(v15 + 80) = 0;
        *(_BYTE*)(v15 + 132) = 0;
        v15 = v10;
        --*(_DWORD*)(v13 + 44);
      }
      else {
        if (floorf(v17) > floorf(v18)) {
          *(_DWORD*)(v15 + 112) = --v19;
        }
        v21 = v16 * v20;
        v22 = *(float*)(a2 + 116);
        v23 = *(_QWORD*)(*(_QWORD*)(a2 + 568) + 16LL);
        v24 = *(unsigned __int8*)(v23 + 1884);
        v25 = *(unsigned __int8*)(v23 + 1878);
        if (v24 == 0) {
          v22 = 0x1.0000000000000p+0f;
        }
        *(float*)&v8 = v22 * *(float*)(a2 + 112);
        if (v25 == 0) {
          *(float*)&v8 = v22;
        }
        *(float*)&v7 = (float)(unsigned int)v19;
        if (*(float*)(v5 + 16) == 0x0.0p+0f) {
          if ((unsigned int)v19 >= 3) {
            v26 = *(_QWORD*)(v15 + 88);
            v27 = 0;
            *(float*)&v7 = 0x1.0000000000000p+0f /
                           (float)(*(float*)&v7 + -0x1.0000000000000p+0f);
            v28 = v43 + 80LL * v21;
            do {
              v29 = *(_QWORD*)(v26 + 48);
              v30 = *(float*)&v7 * (float)(unsigned int)v27;
              v31 = *(float32x4_t*)v29;
              v32 = *(_OWORD*)(v29 + 16);
              v33 = *(_OWORD*)(v29 + 32);
              *(float*)(v28 - 116) = (float)(unsigned int)v27;
              *(_QWORD*)(v28 - 112) = 0;
              *(_QWORD*)(v28 - 104) = 0;
              *(_QWORD*)(v28 - 96) = 0;
              *(_QWORD*)(v28 - 88) = 0;
              *(float*)(v28 - 36) = (float)(unsigned int)v27;
              *(_QWORD*)(v28 - 16) = 0;
              *(_QWORD*)(v28 - 8) = 0;
              *(_QWORD*)(v28 - 32) = 0;
              *(_QWORD*)(v28 - 24) = 0;
              *(float*)(v28 - 132) = v30;
              *(float*)(v28 - 52) = v30;
              *(_DWORD*)(v28 - 152) = LANES128(v31).n128_u32[2];
              *(_QWORD*)(v28 - 160) = LANES128(v31).n128_u64[0];
              *(_QWORD*)(v28 - 144) = v32;
              *(_QWORD*)(v28 - 128) = v33;
              *(_QWORD*)(v28 - 80) = LANES128(v31).n128_u64[0];
              *(_QWORD*)(v28 - 64) = v32;
              *(_QWORD*)(v28 - 48) = v33;
              *(_DWORD*)(v28 - 136) = DWORD2(v32);
              *(_DWORD*)(v28 - 120) = DWORD2(v33);
              *(_DWORD*)(v28 - 72) = LANES128(v31).n128_u32[2];
              *(float*)(v28 - 148) = vmuls_lane_f32(*(float*)&v8, v31, 3);
              *(_DWORD*)(v28 - 56) = DWORD2(v32);
              *(_DWORD*)(v28 - 40) = DWORD2(v33);
              v34 = v27 | 1;
              v27 += 2;
              *(float*)(v28 - 68) =
                  -(float)(LANES128(v31).n128_f32[3] * *(float*)&v8);
              v26 = *(_QWORD*)(v29 + 48);
              v35 = *(float32x4_t*)v26;
              v36 = *(_OWORD*)(v26 + 16);
              v37 = *(_OWORD*)(v26 + 32);
              *(float*)(v28 + 28) = *(float*)&v7 * (float)v34;
              *(float*)(v28 + 44) = (float)v34;
              *(_QWORD*)(v28 + 48) = 0;
              *(_QWORD*)(v28 + 56) = 0;
              *(_QWORD*)(v28 + 64) = 0;
              *(_QWORD*)(v28 + 72) = 0;
              *(float*)(v28 + 108) = *(float*)&v7 * (float)v34;
              *(float*)(v28 + 124) = (float)v34;
              *(_QWORD*)(v28 + 144) = 0;
              *(_QWORD*)(v28 + 152) = 0;
              *(_QWORD*)(v28 + 128) = 0;
              *(_QWORD*)(v28 + 136) = 0;
              *(_DWORD*)(v28 + 8) = LANES128(v35).n128_u32[2];
              *(_QWORD*)v28 = LANES128(v35).n128_u64[0];
              *(_QWORD*)(v28 + 16) = v36;
              *(_QWORD*)(v28 + 32) = v37;
              *(_QWORD*)(v28 + 80) = LANES128(v35).n128_u64[0];
              *(_QWORD*)(v28 + 96) = v36;
              *(_QWORD*)(v28 + 112) = v37;
              *(_DWORD*)(v28 + 24) = DWORD2(v36);
              *(_DWORD*)(v28 + 40) = DWORD2(v37);
              *(_DWORD*)(v28 + 88) = LANES128(v35).n128_u32[2];
              *(float*)(v28 + 12) = vmuls_lane_f32(*(float*)&v8, v35, 3);
              *(_DWORD*)(v28 + 104) = DWORD2(v36);
              *(_DWORD*)(v28 + 120) = DWORD2(v37);
              *(float*)(v28 + 92) =
                  -(float)(LANES128(v35).n128_f32[3] * *(float*)&v8);
              v28 += 320;
            } while (v27 != (v19 & 0x7FFFFFFE));
            if ((v19 & 1) != 0) {
              v38 = *(float32x4_t**)(v26 + 48);
              *(float*)&v7 = *(float*)&v7 * (float)(unsigned int)v27;
              v39 = *v38;
              v40 = v38[1];
              v41 = v38[2];
              *(float*)(v28 - 116) = (float)(unsigned int)v27;
              *(_QWORD*)(v28 - 112) = 0;
              *(_QWORD*)(v28 - 104) = 0;
              *(_QWORD*)(v28 - 96) = 0;
              *(_QWORD*)(v28 - 88) = 0;
              *(float*)(v28 - 36) = (float)(unsigned int)v27;
              *(_QWORD*)(v28 - 16) = 0;
              *(_QWORD*)(v28 - 8) = 0;
              *(_QWORD*)(v28 - 32) = 0;
              *(_QWORD*)(v28 - 24) = 0;
              *(_DWORD*)(v28 - 132) = LODWORD(v7);
              *(_DWORD*)(v28 - 52) = LODWORD(v7);
              *(_DWORD*)(v28 - 152) = LANES128(v39).n128_u32[2];
              *(_DWORD*)(v28 - 120) = LANES128(v41).n128_u32[2];
              *(_QWORD*)(v28 - 160) = LANES128(v39).n128_u64[0];
              *(_QWORD*)(v28 - 144) = LANES128(v40).n128_u64[0];
              *(_QWORD*)(v28 - 128) = LANES128(v41).n128_u64[0];
              *(_QWORD*)(v28 - 80) = LANES128(v39).n128_u64[0];
              *(_QWORD*)(v28 - 64) = LANES128(v40).n128_u64[0];
              *(_QWORD*)(v28 - 48) = LANES128(v41).n128_u64[0];
              *(_DWORD*)(v28 - 136) = LANES128(v40).n128_u32[2];
              *(_DWORD*)(v28 - 56) = LANES128(v40).n128_u32[2];
              v42 = -(float)(LANES128(v39).n128_f32[3] * *(float*)&v8);
              *(float*)&v8 = vmuls_lane_f32(*(float*)&v8, v39, 3);
              *(_DWORD*)(v28 - 72) = LANES128(v39).n128_u32[2];
              *(_DWORD*)(v28 - 40) = LANES128(v41).n128_u32[2];
              *(_DWORD*)(v28 - 148) = LODWORD(v8);
              *(float*)(v28 - 68) = v42;
            }
            *(_DWORD*)(v15 + 120) = 2 * v19;
          }
          else {
            *(_DWORD*)(v15 + 120) = 0;
          }
        }
        else {
          StripeSystem_5caa80(*(float*)&v7, *(float*)&v8, v6, v15, v5,
                              v9 + 80LL * v21),
              v8 = COERCE_AS(__typeof__(v8),
                             PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
      }
      v10 = v15;
    } while (v3 != 0);
    GameRoutine_5df110(a2 + 1960, v7, v8),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
}

__int64 StripeSystem_5cc140(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  float* v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float* v18;
  float v19;
  float v20;
  int v21;
  float v22;
  int v23;
  float v24;
  signed int v25;
  signed int v26;
  bool v27;
  int v29;
  unsigned int v30;
  int v31;
  __int64 v32;

  v2 = *(_QWORD*)(a1 + 160);
  v3 = *(float*)(v2 + 2048);
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 568) + 696LL);
  if (v4 == 0) {
    goto LABEL_32;
  }
  v5 = *(_DWORD*)(v4 + 4);
  if (v5 < 1) {
    goto LABEL_30;
  }
  v6 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v8 = (float*)(v4 + 76);
    v9 = 0;
    v10 = -(__int64)(v5 & 0x7FFFFFF8);
    while (1) {
      v11 = *(v8 - 16);
      if (v3 >= v11) {
        v11 = v3;
        v12 = *(v8 - 12);
        if (v11 < v12) {
        LABEL_10:
          v13 = *(v8 - 8);
          if (v12 < v13) {
            goto LABEL_11;
          }
          goto LABEL_19;
        }
      }
      else {
        v12 = *(v8 - 12);
        if (v11 < v12) {
          goto LABEL_10;
        }
      }
      v12 = v11;
      v13 = *(v8 - 8);
      if (v12 < v13) {
      LABEL_11:
        v14 = *(v8 - 4);
        if (v13 < v14) {
          goto LABEL_12;
        }
        goto LABEL_20;
      }
    LABEL_19:
      v13 = v12;
      v14 = *(v8 - 4);
      if (v13 < v14) {
      LABEL_12:
        v15 = *v8;
        if (v14 < *v8) {
          goto LABEL_13;
        }
        goto LABEL_21;
      }
    LABEL_20:
      v14 = v13;
      v15 = *v8;
      if (v14 < *v8) {
      LABEL_13:
        v16 = v8[4];
        if (v15 < v16) {
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    LABEL_21:
      v15 = v14;
      v16 = v8[4];
      if (v15 < v16) {
      LABEL_14:
        v17 = v8[8];
        if (v16 < v17) {
          goto LABEL_15;
        }
        goto LABEL_23;
      }
    LABEL_22:
      v16 = v15;
      v17 = v8[8];
      if (v16 < v17) {
      LABEL_15:
        v3 = v8[12];
        if (v17 >= v3) {
          goto LABEL_24;
        }
        goto LABEL_7;
      }
    LABEL_23:
      v17 = v16;
      v3 = v8[12];
      if (v17 >= v3) {
      LABEL_24:
        v3 = v17;
      }
    LABEL_7:
      v9 -= 8;
      v8 += 32;
      if (v10 == v9) {
        v7 = -v9;
        if (v6 != 0) {
          goto LABEL_26;
        }
        goto LABEL_30;
      }
    }
  }
  v7 = 0;
  if ((v5 & 7) != 0) {
  LABEL_26:
    v18 = (float*)(v4 + 16 * v7 + 12);
    do {
      v19 = *v18;
      v18 += 4;
      v20 = v19;
      if (v3 < v19) {
        v3 = v20;
      }
      --v6;
    } while (v6 != 0);
  }
LABEL_30:
  if (v3 < 0x1.0000000000000p+0f) {
    v3 = 0x1.0000000000000p+0f;
  }
LABEL_32:
  v21 = *(_DWORD*)(v2 + 2044);
  v22 = (float)v21;
  v27 = v21 == 0;
  v23 = *(_DWORD*)(v2 + 2056) + 1;
  if (v27) {
    v22 = 0x1.0000000000000p+0f;
  }
  v24 = (float)v23;
  v25 = vcvtps_s32_f32(v22 / (float)v23);
  v26 = vcvtps_s32_f32((float)a2 / v24);
  v27 = v25 >= v26 && *(_BYTE*)(v2 + 2216) == 0;
  if (v27 || *(_BYTE*)(v2 + 2032) == 0) {
    v29 = v26;
  }
  else {
    v29 = v25;
  }
  v30 = (int)(float)(ceilf(v3) + ceilf(v3 * (float)v29));
  if (*(_DWORD*)(v2 + 2164) == 0) {
    v31 = *(unsigned __int8*)(v2 + 2104);
    if (v31 == 2) {
      v32 = 2176;
      goto LABEL_48;
    }
    if (v31 == 13) {
      v32 = 2184;
    LABEL_48:
      v30 *= *(_DWORD*)(v2 + v32);
    }
  }
  if (*(_BYTE*)a1 != 0 && *(_BYTE*)(v2 + 2020) == 0) {
    return *(_DWORD*)(*(_QWORD*)(a1 + 1352) + 560LL) * v30;
  }
  else {
    return v30;
  }
}

__int64 StripeSystem_5cc7c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            int a5, char a6, __int64 a7, char a8)
{
  _QWORD* v15;
  unsigned int v16;
  __int64 v17;
  _QWORD* v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int* v25;
  _QWORD* v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  unsigned int v31;
  __int64 v32;
  _QWORD* v33;
  unsigned int v34;
  __int64 v35;
  unsigned int v36;
  _QWORD* v37;
  __int64 v38;
  unsigned int v39;
  _QWORD* v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  _QWORD v57[2];

  if ((a6 & 1) == 0) {
    return 0;
  }
  if (*(_DWORD*)(a3 + 52) == a5) {
    return 0;
  }
  RectDrawer_5fd420(a2, *(_QWORD*)a4, 0x1FFu);
  v15 = *(_QWORD**)(a3 + 1752);
  v16 = *(_DWORD*)(a4 + 12);
  v17 = v15[51];
  v57[0] = *(_QWORD*)(a3 + 8LL * *(unsigned int*)(a3 + 48) + 1728) - v15[53] +
           v15[50];
  v57[1] = v17;
  if (v16 != -1) {
    GameRoutine_5fe120(a2, v16, 5u, v57, 192);
  }
  v18 = *(_QWORD**)(a3 + 568);
  v19 = *(_DWORD*)(a4 + 16);
  v20 = v18[4];
  v21 = *(_QWORD*)(v20 + 408);
  v57[0] = *(_QWORD*)(v20 + 400) + v18[5];
  v57[1] = v21;
  if (v19 != -1) {
    GameRoutine_5fe120(a2, v19, 5u, v57, 1872);
    v18 = *(_QWORD**)(a3 + 568);
    v20 = v18[4];
  }
  v22 = *(_QWORD*)(v20 + 408);
  v23 = *(_DWORD*)(a4 + 20);
  v57[0] = *(_QWORD*)(v20 + 400) + v18[8];
  v57[1] = v22;
  if (v23 != -1) {
    GameRoutine_5fe120(a2, v23, 5u, v57, 288);
  }
  v24 = *(_DWORD*)(a4 + 24);
  v25 = (unsigned int*)GameRoutine_5dfd10();
  if (v24 != -1) {
    GameRoutine_5fe0a0(a2, v24, 5u, v25 + 152,
                       (unsigned int*)(*(_QWORD*)(a1 + 8) + 40LL));
  }
  v26 = *(_QWORD**)(a3 + 1776);
  v27 = *(_DWORD*)(a4 + 28);
  v28 = 16LL * *(int*)(a3 + 40);
  v29 = v26[60];
  v57[0] = **(_QWORD**)(a3 + 192) - v26[46] + v26[59];
  v57[1] = v29;
  GameRoutine_5fe1a0(a2, v27, 5u, v57, v28);
  v30 = *(_QWORD**)(a3 + 1776);
  v31 = *(_DWORD*)(a4 + 32);
  v32 = v30[60];
  v57[0] = *(_QWORD*)(*(_QWORD*)(a3 + 192) + 8LL) - v30[46] + v30[59];
  v57[1] = v32;
  GameRoutine_5fe1a0(a2, v31, 5u, v57, v28);
  v33 = *(_QWORD**)(a3 + 1776);
  v34 = *(_DWORD*)(a4 + 36);
  v35 = v33[60];
  v57[0] = *(_QWORD*)(*(_QWORD*)(a3 + 192) + 16LL) - v33[46] + v33[59];
  v57[1] = v35;
  GameRoutine_5fe1a0(a2, v34, 5u, v57, v28);
  v36 = *(_DWORD*)(a4 + 40);
  if (v36 != -1) {
    v37 = *(_QWORD**)(a3 + 1776);
    v38 = v37[60];
    v57[0] = *(_QWORD*)(*(_QWORD*)(a3 + 192) + 24LL) - v37[46] + v37[59];
    v57[1] = v38;
    GameRoutine_5fe1a0(a2, v36, 5u, v57, v28);
  }
  v39 = *(_DWORD*)(a4 + 44);
  if (v39 != -1) {
    v40 = *(_QWORD**)(a3 + 1776);
    v41 = v40[60];
    v57[0] = *(_QWORD*)(*(_QWORD*)(a3 + 192) + 32LL) - v40[46] + v40[59];
    v57[1] = v41;
    GameRoutine_5fe1a0(a2, v39, 5u, v57, v28);
  }
  v42 = *(_DWORD*)(a4 + 48);
  if (v42 != -1) {
    v43 = *(_QWORD*)(a3 + 192);
    v44 = *(_QWORD*)(v43 + 64);
    if (v44 == 0) {
      v44 = *(_QWORD*)(v43 + 32);
    }
    v45 = *(_QWORD**)(a3 + 1776);
    v46 = v45[60];
    v57[0] = v44 - v45[46] + v45[59];
    v57[1] = v46;
    GameRoutine_5fe1a0(a2, v42, 5u, v57, v28);
  }
  v47 = *(_DWORD*)(a4 + 52);
  if (v47 != -1) {
    v48 = *(_QWORD*)(a3 + 192);
    v49 = *(_QWORD*)(v48 + 72);
    if (v49 == 0) {
      v49 = *(_QWORD*)(v48 + 32);
    }
    v50 = *(_QWORD**)(a3 + 1776);
    v51 = v50[60];
    v57[0] = v49 - v50[46] + v50[59];
    v57[1] = v51;
    GameRoutine_5fe1a0(a2, v47, 5u, v57, v28);
  }
  v52 = *(_DWORD*)(a4 + 56);
  if (v52 != -1) {
    v53 = *(_QWORD*)(a3 + 192);
    v54 = *(_QWORD*)(v53 + 80);
    if (v54 == 0) {
      v54 = *(_QWORD*)(v53 + 32);
    }
    v55 = *(_QWORD**)(a3 + 1776);
    v56 = v55[60];
    v57[0] = v54 - v55[46] + v55[59];
    v57[1] = v56;
    GameRoutine_5fe1a0(a2, v52, 5u, v57, v28);
  }
  GameRoutine_5fdce0(a2, 0x40u);
  GameRoutine_5fcc40(a2);
  if ((a8 & 1) != 0) {
    GameRoutine_5fdcb0(a2, 64);
  }
  *(_DWORD*)(a3 + 52) = a5;
  *(_BYTE*)(a3 + 10) = 1;
  return 1;
}

#pragma GCC visibility pop
