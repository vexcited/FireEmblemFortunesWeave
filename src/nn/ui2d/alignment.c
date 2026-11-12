#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_56ba40(_QWORD, _QWORD);
__int64 GameRoutine_56c520(_QWORD, _QWORD);
__int64 GameRoutine_58c830(void);
__int64 GameRoutine_58c910(void);
__int64 GameRoutine_58d880(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58e740(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f7c0(_QWORD, _QWORD, _QWORD);
__int64 Pane_590310(_QWORD);
extern __int64 (*nn_ui2d_Alignment_vtable[])();
extern __int64* GameData_2136058[3];
extern __int64* GameData_2136060[2];
float Alignment_56b590(__int64 a1, __int64 a2);
__int64 Alignment_56b600(__int64 result);
float Alignment_56b610(__int64 a1, __int64 a2);
__int64 Alignment_Unknown26(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 Alignment_56b780(__int64 result);
__int64 Alignment_56c260(__int64 result);
__int64 Alignment_56c0c0(__int64 result);
__int64 Alignment_56cbc0(__int64 result);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 Pane_590310_alt1(void) __asm__("Pane_590310");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1(
    float, long double, long double, long double,
    long double) __asm__("nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
bool Pane_590310_alt2(__int64) __asm__("Pane_590310");
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN* GameData_21318f0;
extern _UNKNOWN* GameData_2131900;
extern __int128 GameData_1a83090;
extern __int64* GameData_2130ea0;
extern __int64* GameData_21318e8;
extern __int64* GameData_21318f8;
float32x4_t GameRoutine_56d270(float32x4_t*);
__int64* Alignment_56ce20(__int64 a1, float32x4_t* a2, float a3, float a4,
                          float a5, float a6, float a7, float a8);
void Alignment_56d3e0(float32x4_t* a1, float* a2, float* a3, float32x4_t* a4);
void Alignment_56dd00(float32x4_t* a1, float* a2, float* a3, float32x4_t* a4);
float32x4_t Alignment_56d270(float32x4_t*);
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
bool Pane_590370(__int64);
bool Pane_5903d0(__int64);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_21318e0;
extern __int64* GameData_212dfc8;
extern __int64* GameData_21318d8;
float Pane_590430(__int64);
float32x4_t nn_ui2d_56d270(float32x4_t*);
__int64 Alignment_56ba40(float32x4_t* a1, __int64 a2);

float Alignment_56b590(__int64 a1, __int64 a2)
{
  float result;
  char v5;

  GameRoutine_58c910();
  *(_QWORD*)a1 = GameData_2136058[0] + 2;
  *(_DWORD*)(a1 + 212) = *(_DWORD*)(a2 + 84);
  result = *(float*)(a2 + 88);
  *(float*)(a1 + 216) = result;
  v5 = *(_BYTE*)(a2 + 92);
  *(_BYTE*)(a1 + 221) = 0;
  *(_BYTE*)(a1 + 220) = v5;
  *(_BYTE*)(a1 + 221) = (2 * (*(_BYTE*)(a2 + 93) & 1)) | 1;
  return result;
}

__int64 Alignment_56b600(__int64 result)
{
  *(_BYTE*)(result + 221) |= 1u;
  return result;
}

float Alignment_56b610(__int64 a1, __int64 a2)
{
  float result;

  GameRoutine_58c830();
  *(_QWORD*)a1 = GameData_2136060[0] + 2;
  *(_QWORD*)(a1 + 32) = a1 + 32;
  *(_QWORD*)(a1 + 40) = a1 + 32;
  GameRoutine_58d880(a1, a2, 0, 0, 0);
  *(_QWORD*)a1 = nn_ui2d_Alignment_vtable;
  *(_DWORD*)(a1 + 212) = *(_DWORD*)(a2 + 212);
  result = *(float*)(a2 + 216);
  *(float*)(a1 + 216) = result;
  *(_BYTE*)(a1 + 220) = *(_BYTE*)(a2 + 220);
  *(_BYTE*)(a1 + 221) = *(_BYTE*)(a2 + 221);
  return result;
}

__int64 Alignment_Unknown26(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7;
  unsigned int v8;

  if ((*(_BYTE*)(a1 + 221) & 1) != 0) {
    v7 = a3;
    *(_BYTE*)(a1 + 221) &= ~1u;
    Pane_58f7c0(a1, a3, 1);
    v8 = *(_DWORD*)(a1 + 212);
    if ((*(_BYTE*)(a1 + 221) & 2) != 0) {
      if (v8 > 1) {
        Alignment_56cbc0(a1);
      }
      else {
        Alignment_56c260(a1);
      }
    }
    else if (v8 > 1) {
      Alignment_56c0c0(a1);
    }
    else {
      Alignment_56b780(a1);
    }
    a3 = v7;
  }
  GameRoutine_58e740(a1, a2, a3, a4 & 1);
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 248LL))(a1, a2);
}

__int64 Alignment_56b780(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  bool v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  int v17;
  float v18;
  int v19;
  float v20;
  float v21;
  char v22;
  float v23;
  int v24;
  float v25;
  float v26;
  float v27;
  int v28;
  float v29;
  char v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = *(_QWORD*)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if (v1 == result + 32) {
    v4 = 0.0;
    v6 = 0;
    v7 = 0;
    goto LABEL_34;
  }
  v4 = 0.0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD*)(result + 40);
  if (*(_DWORD*)(result + 212) == 1) {
    v9 = 0.0;
  }
  else {
    v9 = *(float*)(result + 80) * -0.5;
  }
  do {
    v33 = 0;
    v34 = 0;
    v32 = 0;
    result = GameRoutine_56ba40(v8 - 8, &v32);
    if ((result & 1) == 0) {
      goto LABEL_15;
    }
    if (*(_BYTE*)(v3 + 220) == 1) {
      v16 = *(_QWORD**)(v3 + 40);
      if (v16 != v2) {
        v17 = *(_DWORD*)(v3 + 212);
        if (v17 != 2) {
          if (v17 == 1) {
            if ((_QWORD*)v8 == v16) {
            LABEL_5:
              LODWORD(v32) = 0;
              LODWORD(v33) = 0;
              goto LABEL_6;
            }
          }
          else if (v17 != 0) {
            goto LABEL_6;
          }
          v16 = (_QWORD*)*v2;
        }
        if ((_QWORD*)v8 != v16) {
          goto LABEL_6;
        }
        goto LABEL_5;
      }
    }
  LABEL_6:
    v10 = *(float*)&v32;
    v11 = (v5 & 1) == 0;
    v12 = *(float*)&v33;
    v7 = v34;
    v5 = 1;
    if (v11) {
      v6 = v34;
    }
    v13 = v9 + *((float*)&v32 + 1);
    v14 = v4 - *((float*)&v32 + 1);
    v15 = *(float*)&v32 + *((float*)&v32 + 1);
    *(_BYTE*)(v8 + 80) |= 0x10u;
    if (v11) {
      v13 = v9;
    }
    if (!v11) {
      v14 = v4;
    }
    v4 = v14 + v15;
    v9 = v13 + v10;
    *(float*)(v8 + 40) = (float)(v13 + (float)(v10 * 0.5)) - v12;
  LABEL_15:
    v8 = *(_QWORD*)(v8 + 8);
  } while ((_QWORD*)v8 != v2);
  if (*(_DWORD*)(v3 + 212) == 1) {
    do {
      if ((*(_BYTE*)(v1 + 80) & 1) != 0) {
        result = Pane_590310(v1 - 8);
        if ((result & 1) == 0) {
          v18 = *(float*)(v1 + 40) - (float)(v4 * 0.5);
          *(_BYTE*)(v1 + 80) |= 0x10u;
          *(float*)(v1 + 40) = v18;
        }
      }
      v1 = *(_QWORD*)(v1 + 8);
    } while ((_QWORD*)v1 != v2);
  }

LABEL_34:
  if (*(_BYTE*)(v3 + 220) != 1) {
    return result;
  }
  v19 = *(_DWORD*)(v3 + 212);
  if (v19 != 1) {
    if (v19 == 0) {
      v20 = *(float*)(v3 + 80);
      v21 = *(float*)(v7 + 48);
      *(_BYTE*)(v7 + 88) |= 0x10u;
      v22 = *(_BYTE*)(v7 + 91);
      v23 = v20 - v4;
      *(float*)(v7 + 80) = v23;
      v24 = v22 & 3;
      if (v24 == 2) {
        goto LABEL_40;
      }
      if (v24 == 0) {
        v23 = v23 * 0.5;
      LABEL_40:
        *(float*)(v7 + 48) = v21 + v23;
      }
    }
    return result;
  }
  v25 = *(float*)(v3 + 80) - v4;
  *(_BYTE*)(v7 + 88) |= 0x10u;
  v26 = v25 * 0.5;
  v27 = *(float*)(v7 + 48);
  v28 = *(_BYTE*)(v7 + 91) & 3;
  v29 = v26;
  *(float*)(v7 + 80) = v26;
  if (v28 == 2) {
  LABEL_44:
    *(float*)(v7 + 48) = v27 + v29;
  }
  else if (v28 == 0) {
    v29 = v26 * 0.5;
    goto LABEL_44;
  }
  v30 = *(_BYTE*)(v6 + 88);
  v31 = *(float*)(v6 + 48);
  *(float*)(v6 + 80) = v26;
  *(_BYTE*)(v6 + 88) = v30 | 0x10;
  if ((*(_BYTE*)(v6 + 91) & 3) != 1) {
    if ((*(_BYTE*)(v6 + 91) & 3) != 0) {
      return result;
    }
    v26 = v26 * 0.5;
  }
  *(float*)(v6 + 48) = v31 - v26;
  return result;
}

__int64 Alignment_56ba40(float32x4_t* a1, __int64 a2)
{
  __int64 result;
  float* v5;
  __int64* v6;
  unsigned __int32 v8;
  unsigned __int8 v9;
  unsigned __int8 explicit;
  __int64* v11;
  __int64* v12;
  unsigned __int8 v14;
  float32x4_t v15;
  float32x4_t* v16;
  __int128 v17;
  __int128 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  bool v23;
  float32x4_t* v24;
  float32x4_t v25;
  __int128 v26;
  __int128 v27;
  unsigned __int8 v28;
  __int64* v29;
  __int64* v30;
  unsigned __int64 v32;
  float v33;
  void (*v34)(float32x4_t* __return_ptr, float32x4_t*);
  float v35;
  float v36;
  unsigned int v37;
  int v38;
  int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  unsigned int v48;
  float v49;
  float v50;
  float v51;
  int v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x2_t v57;
  float v58;
  int32x4_t v59;
  float32x4_t v60;
  int32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  unsigned int v82;
  int v83;
  float v84;
  float v85;
  float v86;
  int v87;
  float32x4_t v88;
  int32x4_t v89;
  int32x4_t v90;
  int32x4_t v91;
  int32x4_t v92;
  float v93;
  float v94;
  struct {
    float32x4_t v95;
    __int128 v96;
    __int128 v97;
  } v95_;
  float v98;
  float v99;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (Pane_590310_alt2((__int64)a1)) {
    return 0;
  }
  v5 = (float*)LANES128(a1[1]).n128_u64[1];
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21318e0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_21318e0) != 0) {
    *GameData_21318d8 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
    __cxa_guard_release(GameData_21318e0),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  if (v5 == nullptr) {
    goto LABEL_12;
  }
  v6 = (__int64*)(*(__int64 (**)(float*))(*(_QWORD*)v5 + 16LL))(v5),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (v6 != GameData_21318d8) {
    do {
      v6 = (__int64*)*v6;
    } while (v6 != GameData_21318d8 && v6 != nullptr);
    if (v6 == nullptr) {
    LABEL_12:
      v5 = nullptr;
    }
  }
  *(_QWORD*)(a2 + 16) = a1;
  v8 = LANES128(a1[5]).n128_u32[0];
  *(_QWORD*)(a2 + 4) = 0;
  *(_DWORD*)a2 = v8;
  v9 = LANES128(a1[5]).n128_u8[8];
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire);
  v11 = GameData_212dfc8;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212dfd0) != 0) {
    *v11 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
    __cxa_guard_release(GameData_212dfd0),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  v12 = (__int64*)(*(__int64 (**)(float32x4_t*))(LANES128(*(a1)).n128_u64[0] +
                                                 16))(a1),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (v12 != v11) {
    do {
      v12 = (__int64*)*v12;
    } while (v12 != v11 && v12 != nullptr);
    if (v12 == nullptr) {
      if (Pane_5903d0((__int64)a1)) {
        v24 = (float32x4_t*)LANES128(a1[2]).n128_u64[1];
        if (v24 != &a1[2]) {
          v14 = LANES128(a1[5]).n128_u8[8];
          v98 = -0x1.fffffe0000000p+127f;
          v99 = 0x1.fffffe0000000p+127f;
          v25 = nn_ui2d_56d270(a1),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
          v19 = LANES128(v25).n128_f32[3];
          v95_.v95 = v25;
          v95_.v96 = v26;
          v95_.v97 = v27;
          do {
            Alignment_56d3e0((float32x4_t*)((char*)v24 - 8), &v99, &v98,
                             &v95_.v95),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v26 = COERCE_AS(__typeof__(v26),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v89 = COERCE_AS(__typeof__(v89),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v91 = COERCE_AS(__typeof__(v91),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
            v24 = (float32x4_t*)LANES128(*(v24)).n128_u64[1];
          } while (v24 != &a1[2]);
        LABEL_24:
          if (v99 > v98) {
            goto LABEL_25;
          }
          v21 = (float)(v98 - v19) - (float)(v99 - v19);
          v22 = (float)((float)(v99 - v19) + (float)(v98 - v19)) *
                0x1.0000000000000p-1f;
          *(float*)a2 = v21;
          v23 = v21 == 0x0.0p+0f || (v14 & 1) == 0;
          *(float*)(a2 + 8) = v22;
          if (!v23) {
          LABEL_91:
            if (Pane_590370((__int64)a1)) {
              v20 = Pane_590430(*(_QWORD*)(a2 + 16)),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            else {
              v20 = v5[54];
            }
            result = 1;
            goto LABEL_95;
          }
        LABEL_31:
          result = 0;
          v20 = 0x0.0p+0f;
          goto LABEL_95;
        }
      }
      v28 = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                 memory_order_acquire);
      v29 = GameData_2130ea0;
      if ((v28 & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
        *v29 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
        __cxa_guard_release(GameData_2130ea8),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v89 =
                COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v91 =
                COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      v30 = (__int64*)(*(__int64 (**)(float32x4_t*))(
          LANES128(*(a1)).n128_u64[0] + 16))(a1),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
      if (v30 != v29) {
        do {
          v30 = (__int64*)*v30;
        } while (v30 != v29 && v30 != nullptr);
        if (v30 == nullptr) {
          v47 = LANES128(a1[5]).n128_f32[0];
          v48 = LANES128(a1[5]).n128_u8[11];
          v49 = 0x0.0p+0f;
          v50 = 0x0.0p+0f;
          if ((v48 & 3) != 1) {
            if ((v48 & 3) == 2) {
              v50 = -v47;
            }
            else {
              v50 = v47 * -0x1.0000000000000p-1f;
            }
          }
          v51 = LANES128(a1[5]).n128_f32[1];
          v52 = (v48 >> 2) & 3;
          if (v52 != 1) {
            v49 = LANES128(a1[5]).n128_f32[1];
            if (v52 != 2) {
              v49 = v51 * 0x1.0000000000000p-1f;
            }
          }
          v53 = nn_ui2d_56d270(a1),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
          LANES128(v54).n128_u32[0] = 0;
          LANES128(v55).n128_u64[0] = 0;
          LANES128(v55).n128_u32[2] = 0;
          LANES128(v56).n128_u64[0] =
              COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
          LANES128(v54).n128_u32[1] =
              COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          PSEUDO_LOW_LANE64(v57, n64_f32, v51 * 0x1.0000000000000p-1f);
          LANES128(v55).n128_u32[3] = LANES128(v53).n128_u32[3];
          LANES128(v56).n128_u32[2] = 0;
          LANES128(v54).n128_u32[2] = 0;
          LANES128(v56).n128_f32[3] =
              (float)(PSEUDO_UNFUSED(v47 * 0x1.0000000000000p-1f)) + v50;
          LANES128(v54).n128_f32[3] =
              v49 - (float)(PSEUDO_UNFUSED(v51 * 0x1.0000000000000p-1f));
          v58 = 0x0.0p+0f;
          v59 = vaddq_f32(
              v55,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v56, LANES128(v53).n128_f32[0]), v54,
                      COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v53, 2));
          LANES128(v55).n128_u64[0] = 0;
          LANES128(v55).n128_u32[2] = 0;
          LANES128(v55).n128_u32[3] = LANES128(v60).n128_u32[3];
          v61 = vaddq_f32(
              v55,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v56, LANES128(v60).n128_f32[0]), v54,
                      COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v60, 2));
          LANES128(v62).n128_u64[0] = 0;
          LANES128(v62).n128_u32[2] = 0;
          LANES128(v62).n128_u32[3] = LANES128(v63).n128_u32[3];
          v64 = vaddq_f32(
              v62,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v56, LANES128(v63).n128_f32[0]), v54,
                      COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v63, 2));
          v65 = vzip1q_s32(v59, v64);
          v66 = vzip2q_s32(v59, v64);
          v67 = vzip1q_s32(v61, COERCE_AS(int32x4_t, 0));
          v68 = vzip2q_s32(v61, COERCE_AS(int32x4_t, 0));
          v69 = vzip1q_s32(v65, v67);
          v70 = vzip2q_s32(v65, v67);
          v71 = vzip1q_s32(v66, v68);
          v72 = vzip2q_s32(v66, v68);
          v73 = vmulq_n_f32(v69, -(float)(v47 * 0x1.0000000000000p-1f));
          v74 = vmulq_n_f32(v69, v47 * 0x1.0000000000000p-1f);
          v75 = vmlsq_lane_f32(v73, v70, v57, 0);
          LODWORD(v76) =
              LANES128_OF(
                  vaddq_f32(v72, vmlaq_f32(vmlsq_lane_f32(v74, v70, v57, 0),
                                           COERCE_AS(float32x4_t, 0), v71)))
                  .n128_u32[0];
          v77 = LANES128_OF(
                    vaddq_f32(
                        v72, vmlaq_f32(vmlaq_n_f32(v73, v70,
                                                   v51 * 0x1.0000000000000p-1f),
                                       COERCE_AS(float32x4_t, 0), v71)))
                    .n128_f32[0];
          LODWORD(v78) =
              LANES128_OF(
                  vaddq_f32(v72,
                            vmlaq_f32(vmlaq_n_f32(v74, v70,
                                                  v51 * 0x1.0000000000000p-1f),
                                      COERCE_AS(float32x4_t, 0), v71)))
                  .n128_u32[0];
          LODWORD(v79) =
              LANES128_OF(
                  vaddq_f32(v72,
                            vmlaq_f32(v75, COERCE_AS(float32x4_t, 0), v71)))
                  .n128_u32[0];
          v80 = -0x1.fffffe0000000p+127f;
          v81 = 0x1.fffffe0000000p+127f;
          if (v77 >= -0x1.fffffe0000000p+127f) {
            v80 = v77;
          }
          if (v77 <= 0x1.fffffe0000000p+127f) {
            v81 = v77;
          }
          if (v78 >= v80) {
            v80 = v78;
          }
          if (v81 >= v78) {
            v81 = v78;
          }
          if (v76 >= v80) {
            v80 = v76;
          }
          if (v81 >= v76) {
            v81 = v76;
          }
          if (v79 >= v80) {
            v80 = v79;
          }
          if (v81 < v79) {
            v79 = v81;
          }
          *(float*)a2 = v80 - v79;
          v82 = LANES128(a1[5]).n128_u8[11];
          v83 = v82 & 3;
          if ((v82 & 3) != 0) {
            v84 = LANES128(a1[5]).n128_f32[0];
            if (v83 == 1) {
            LABEL_85:
              v85 = LANES128(a1[5]).n128_f32[1];
              v20 = 0x0.0p+0f;
              v86 = 0x0.0p+0f;
              v87 = (v82 >> 2) & 3;
              if (v87 != 1) {
                v86 = LANES128(a1[5]).n128_f32[1];
                if (v87 != 2) {
                  v86 = v85 * 0x1.0000000000000p-1f;
                }
              }
              v93 = v58 + (float)(v84 * 0x1.0000000000000p-1f);
              v94 = v86 - (float)(v85 * 0x1.0000000000000p-1f);
              v88 = nn_ui2d_56d270(a1),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v89 = COERCE_AS(__typeof__(v89),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v91 = COERCE_AS(__typeof__(v91),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
              v90 = vzip1q_s32(v88, v89);
              v92 = vzip1q_s32(v91, COERCE_AS(int32x4_t, 0));
              *(float*)(a2 + 8) =
                  *(float*)(a2 + 8) +
                  (float)(LANES128_OF(
                              vmlaq_f32(
                                  vmlaq_n_f32(
                                      vmulq_n_f32(vzip1q_s32(v90, v92), v93),
                                      vzip2q_s32(v90, v92), v94),
                                  COERCE_AS(float32x4_t, 0),
                                  vzip1q_s32(
                                      vzip2q_s32(v88, v89),
                                      vzip2q_s32(v91,
                                                 COERCE_AS(int32x4_t, 0)))))
                              .n128_f32[0] +
                          0x0.0p+0f);
              if ((v9 & 1) != 0) {
                goto LABEL_91;
              }
              goto LABEL_89;
            }
            if (v83 == 2) {
              v58 = -v84;
              goto LABEL_85;
            }
          }
          else {
            if ((v82 & 0xC) == 0) {
              if ((v9 & 1) != 0) {
                goto LABEL_91;
              }
              goto LABEL_31;
            }
            v84 = LANES128(a1[5]).n128_f32[0];
          }
          v58 = v84 * -0x1.0000000000000p-1f;
          goto LABEL_85;
        }
      }
      v32 = LANES128(*(a1)).n128_u64[0];
      v95_.v95 = (__typeof__(v95_.v95)){0};
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, float32x4_t*))(
          v32 + 360))((void*)(&v95_.v95), a1),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v33 = LANES128(v95_.v95).n128_f32[2] - LANES128(v95_.v95).n128_f32[0];
      v34 = *(void (**)(float32x4_t* __return_ptr, float32x4_t*))(
          LANES128(*(a1)).n128_u64[0] + 360),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v95_.v95 = (__typeof__(v95_.v95)){0};
      v34(&v95_.v95, a1),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v35 = LANES128(v95_.v95).n128_f32[1];
      v36 = LANES128(v95_.v95).n128_f32[3];
      v37 = LANES128(a1[5]).n128_u8[11];
      v20 = 0x0.0p+0f;
      v95_.v95 = (__typeof__(v95_.v95)){0};
      v38 = v37 & 3;
      v39 = (v37 >> 2) & 3;
      v40 = v35 - v36;
      v41 = LANES128(a1[5]).n128_f32[0];
      v42 = LANES128(a1[5]).n128_f32[1];
      v43 = v41 * -0x1.0000000000000p-1f;
      if (v38 == 2) {
        v43 = -v41;
      }
      v44 = v42 * 0x1.0000000000000p-1f;
      if (v38 == 1) {
        v43 = 0x0.0p+0f;
      }
      if (v39 == 2) {
        v44 = LANES128(a1[5]).n128_f32[1];
      }
      if (v39 == 1) {
        v44 = 0x0.0p+0f;
      }
      Alignment_56ce20((__int64)&v95_.v95, a1, v41, v42, v43, v44, v33, v40),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v45 = LANES128(v95_.v95).n128_f32[0];
      v46 = LANES128(v95_.v95).n128_f32[2] - LANES128(v95_.v95).n128_f32[0];
      *(float*)a2 =
          LANES128(v95_.v95).n128_f32[2] - LANES128(v95_.v95).n128_f32[0];
      *(float*)(a2 + 8) = (float)(PSEUDO_UNFUSED(v46 * 0x1.0000000000000p-1f)) +
                          (float)(v45 - LANES128(a1[3]).n128_f32[0]);
      if ((v9 & 1) != 0) {
        goto LABEL_91;
      }
    LABEL_89:
      result = 0;
      goto LABEL_95;
    }
  }
  v14 = LANES128(a1[5]).n128_u8[8];
  v98 = -0x1.fffffe0000000p+127f;
  v99 = 0x1.fffffe0000000p+127f;
  v15 = nn_ui2d_56d270(a1),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v16 = (float32x4_t*)LANES128(a1[2]).n128_u64[1];
  v95_.v95 = v15;
  v95_.v96 = v17;
  v95_.v97 = v18;
  if (v16 != &a1[2]) {
    v19 = LANES128(v15).n128_f32[3];
    do {
      Alignment_56d3e0((float32x4_t*)((char*)v16 - 8), &v99, &v98, &v95_.v95),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v89 = COERCE_AS(__typeof__(v89), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v91 = COERCE_AS(__typeof__(v91), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v16 = (float32x4_t*)LANES128(*(v16)).n128_u64[1];
    } while (v16 != &a1[2]);
    goto LABEL_24;
  }
LABEL_25:
  result = 0;
  *(_DWORD*)a2 = 0;
  v20 = 0x0.0p+0f;
LABEL_95:
  *(float*)(a2 + 4) = v20;
  return result;
}

__int64 Alignment_56c0c0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  _QWORD* v7;
  float v8;
  float v9;
  bool v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  float v20;
  float v21;
  char v22;
  float v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD**)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if ((_QWORD*)(result + 32) != v1) {
    v4 = 0.0;
    v5 = 0;
    v6 = 0;
    v7 = (_QWORD*)(result + 32);
    v8 = *(float*)(result + 80) * 0.5;
    while (1) {
      v16 = (_QWORD*)*v7;
      v26 = 0;
      v27 = 0;
      v25 = 0;
      result = GameRoutine_56ba40(v16 - 1, (__int64)&v25);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_10:
      v7 = (_QWORD*)*v7;
      if (v7 == v1) {
        goto LABEL_23;
      }
    }
    v17 = (_QWORD*)*v7;
    if (*(_BYTE*)(v3 + 220) != 1 || (v18 = *(_QWORD**)(v3 + 40)) == v2) {
    LABEL_4:
      v9 = *(float*)&v25;
      v10 = (v5 & 1) == 0;
      v11 = *(float*)&v26;
      v5 = 1;
      v6 = v27;
      v12 = v8 - *((float*)&v25 + 1);
      v13 = *(float*)&v25 * -0.5;
      v14 = v4 - *((float*)&v25 + 1);
      v15 = *((float*)&v25 + 1) + *(float*)&v25;
      *((_BYTE*)v17 + 80) |= 0x10u;
      if (v10) {
        v12 = v8;
      }
      if (!v10) {
        v14 = v4;
      }
      v4 = v14 + v15;
      v8 = v12 - v9;
      *((float*)v17 + 10) = (float)(v12 + v13) - v11;
      goto LABEL_10;
    }
    v19 = *(_DWORD*)(v3 + 212);
    if (v19 != 2) {
      if (v19 == 1) {
        if (v17 == v18) {
        LABEL_3:
          LODWORD(v25) = 0;
          LODWORD(v26) = 0;
          goto LABEL_4;
        }
      }
      else if (v19 != 0) {
        goto LABEL_4;
      }
      v18 = (_QWORD*)*v2;
    }
    if (v17 != v18) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = 0.0;
  v6 = 0;

LABEL_23:
  if ((*(_BYTE*)(v3 + 220) & 1) != 0) {
    v20 = *(float*)(v3 + 80);
    v21 = *(float*)(v6 + 48);
    *(_BYTE*)(v6 + 88) |= 0x10u;
    v22 = *(_BYTE*)(v6 + 91);
    v23 = v20 - v4;
    *(float*)(v6 + 80) = v23;
    v24 = v22 & 3;
    if (v24 != 1) {
      if (v24 != 0) {
        return result;
      }
      v23 = v23 * 0.5;
    }
    *(float*)(v6 + 48) = v21 - v23;
  }
  return result;
}

__int64 Alignment_56c260(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  bool v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  int v17;
  float v18;
  int v19;
  float v20;
  float v21;
  unsigned int v22;
  float v23;
  int v24;
  float v25;
  float v26;
  float v27;
  int v28;
  float v29;
  char v30;
  float v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v1 = *(_QWORD*)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if (v1 == result + 32) {
    v4 = 0.0;
    v6 = 0;
    v7 = 0;
    goto LABEL_34;
  }
  v4 = 0.0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD*)(result + 40);
  if (*(_DWORD*)(result + 212) == 1) {
    v9 = 0.0;
  }
  else {
    v9 = *(float*)(result + 84) * 0.5;
  }
  do {
    v34 = 0;
    v35 = 0;
    v33 = 0;
    result = GameRoutine_56c520(v8 - 8, &v33);
    if ((result & 1) == 0) {
      goto LABEL_15;
    }
    if (*(_BYTE*)(v3 + 220) == 1) {
      v16 = *(_QWORD**)(v3 + 40);
      if (v16 != v2) {
        v17 = *(_DWORD*)(v3 + 212);
        if (v17 != 2) {
          if (v17 == 1) {
            if ((_QWORD*)v8 == v16) {
            LABEL_5:
              LODWORD(v33) = 0;
              LODWORD(v34) = 0;
              goto LABEL_6;
            }
          }
          else if (v17 != 0) {
            goto LABEL_6;
          }
          v16 = (_QWORD*)*v2;
        }
        if ((_QWORD*)v8 != v16) {
          goto LABEL_6;
        }
        goto LABEL_5;
      }
    }
  LABEL_6:
    v10 = *(float*)&v33;
    v11 = (v5 & 1) == 0;
    v12 = *(float*)&v34;
    v7 = v35;
    v5 = 1;
    if (v11) {
      v6 = v35;
    }
    v13 = v9 - *((float*)&v33 + 1);
    v14 = v4 - *((float*)&v33 + 1);
    v15 = *(float*)&v33 + *((float*)&v33 + 1);
    *(_BYTE*)(v8 + 80) |= 0x10u;
    if (v11) {
      v13 = v9;
    }
    if (!v11) {
      v14 = v4;
    }
    v4 = v14 + v15;
    v9 = v13 - v10;
    *(float*)(v8 + 44) = (float)(v13 + (float)(v10 * -0.5)) - v12;
  LABEL_15:
    v8 = *(_QWORD*)(v8 + 8);
  } while ((_QWORD*)v8 != v2);
  if (*(_DWORD*)(v3 + 212) == 1) {
    do {
      if ((*(_BYTE*)(v1 + 80) & 1) != 0) {
        result = Pane_590310(v1 - 8);
        if ((result & 1) == 0) {
          v18 = (float)(v4 * 0.5) + *(float*)(v1 + 44);
          *(_BYTE*)(v1 + 80) |= 0x10u;
          *(float*)(v1 + 44) = v18;
        }
      }
      v1 = *(_QWORD*)(v1 + 8);
    } while ((_QWORD*)v1 != v2);
  }

LABEL_34:
  if (*(_BYTE*)(v3 + 220) != 1) {
    return result;
  }
  v19 = *(_DWORD*)(v3 + 212);
  if (v19 != 1) {
    if (v19 == 0) {
      v20 = *(float*)(v3 + 84);
      v21 = *(float*)(v7 + 52);
      *(_BYTE*)(v7 + 88) |= 0x10u;
      v22 = *(unsigned __int8*)(v7 + 91);
      v23 = v20 - v4;
      *(float*)(v7 + 84) = v23;
      v24 = (v22 >> 2) & 3;
      if (v24 == 2) {
        goto LABEL_40;
      }
      if (v24 == 0) {
        v23 = v23 * 0.5;
      LABEL_40:
        *(float*)(v7 + 52) = v21 - v23;
      }
    }
    return result;
  }
  v25 = *(float*)(v3 + 84) - v4;
  *(_BYTE*)(v7 + 88) |= 0x10u;
  v26 = v25 * 0.5;
  v27 = *(float*)(v7 + 52);
  v28 = (*(unsigned __int8*)(v7 + 91) >> 2) & 3;
  v29 = v26;
  *(float*)(v7 + 84) = v26;
  if (v28 == 2) {
  LABEL_44:
    *(float*)(v7 + 52) = v27 - v29;
  }
  else if (v28 == 0) {
    v29 = v26 * 0.5;
    goto LABEL_44;
  }
  v30 = *(_BYTE*)(v6 + 88);
  v31 = *(float*)(v6 + 52);
  *(float*)(v6 + 84) = v26;
  *(_BYTE*)(v6 + 88) = v30 | 0x10;
  v32 = (*(unsigned __int8*)(v6 + 91) >> 2) & 3;
  if (v32 != 1) {
    if (v32 != 0) {
      return result;
    }
    v26 = v26 * 0.5;
  }
  *(float*)(v6 + 52) = v31 + v26;
  return result;
}

__int64 Alignment_56cbc0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  float v4;
  char v5;
  __int64 v6;
  _QWORD* v7;
  float v8;
  float v9;
  bool v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  float v20;
  float v21;
  unsigned int v22;
  float v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD**)(result + 40);
  v2 = (_QWORD*)(result + 32);
  v3 = result;
  if ((_QWORD*)(result + 32) != v1) {
    v4 = 0.0;
    v5 = 0;
    v6 = 0;
    v7 = (_QWORD*)(result + 32);
    v8 = *(float*)(result + 84) * -0.5;
    while (1) {
      v16 = (_QWORD*)*v7;
      v26 = 0;
      v27 = 0;
      v25 = 0;
      result = GameRoutine_56c520(v16 - 1, (__int64)&v25);
      if ((result & 1) != 0) {
        break;
      }
    LABEL_10:
      v7 = (_QWORD*)*v7;
      if (v7 == v1) {
        goto LABEL_23;
      }
    }
    v17 = (_QWORD*)*v7;
    if (*(_BYTE*)(v3 + 220) != 1 || (v18 = *(_QWORD**)(v3 + 40)) == v2) {
    LABEL_4:
      v9 = *(float*)&v25;
      v10 = (v5 & 1) == 0;
      v11 = *(float*)&v26;
      v5 = 1;
      v6 = v27;
      v12 = v8 + *((float*)&v25 + 1);
      v13 = *(float*)&v25 * 0.5;
      v14 = v4 - *((float*)&v25 + 1);
      v15 = *((float*)&v25 + 1) + *(float*)&v25;
      *((_BYTE*)v17 + 80) |= 0x10u;
      if (v10) {
        v12 = v8;
      }
      if (!v10) {
        v14 = v4;
      }
      v4 = v14 + v15;
      v8 = v9 + v12;
      *((float*)v17 + 11) = (float)(v12 + v13) - v11;
      goto LABEL_10;
    }
    v19 = *(_DWORD*)(v3 + 212);
    if (v19 != 2) {
      if (v19 == 1) {
        if (v17 == v18) {
        LABEL_3:
          LODWORD(v25) = 0;
          LODWORD(v26) = 0;
          goto LABEL_4;
        }
      }
      else if (v19 != 0) {
        goto LABEL_4;
      }
      v18 = (_QWORD*)*v2;
    }
    if (v17 != v18) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v4 = 0.0;
  v6 = 0;

LABEL_23:
  if ((*(_BYTE*)(v3 + 220) & 1) != 0) {
    v20 = *(float*)(v3 + 84);
    v21 = *(float*)(v6 + 52);
    *(_BYTE*)(v6 + 88) |= 0x10u;
    v22 = *(unsigned __int8*)(v6 + 91);
    v23 = v20 - v4;
    *(float*)(v6 + 84) = v23;
    v24 = (v22 >> 2) & 3;
    if (v24 != 1) {
      if (v24 != 0) {
        return result;
      }
      v23 = v23 * 0.5;
    }
    *(float*)(v6 + 52) = v21 + v23;
  }
  return result;
}

__int64* Alignment_56ce20(__int64 a1, float32x4_t* a2, float a3, float a4,
                          float a5, float a6, float a7, float a8)
{
  float32x4_t v16;
  float32x4_t v17;
  float v18;
  float32x4_t v19;
  float v20;
  float32x4_t v21;
  float32x4_t v22;
  unsigned __int8 explicit;
  __int64* v24;
  float v25;
  float v26;
  float v27;
  float32x4_t v28;
  float32x4_t v29;
  __int64* result;
  unsigned int v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float v37;
  float v38;
  float v39;
  int v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int32x4_t v48;
  float32x4_t v49;
  int32x4_t v50;
  float32x4_t v51;
  int32x4_t v52;
  int32x4_t v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  float v65;
  float v66;
  float v67;
  float v68;
  int v69;
  float v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v16 = Alignment_56d270(a2),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v78 = v17;
  v79 = v16;
  v18 = 0x1.0000000000000p-1f;
  v77 = v19;
  LANES128(v22).n128_u32[1] = 0;
  LANES128(v22).n128_u64[1] = 0;
  LANES128(v21).n128_u32[1] = 0;
  LANES128(v21).n128_u64[1] = 0;
  v20 = a8 * 0x1.0000000000000p-1f;
  LANES128(v21).n128_f32[0] = -(float)(a7 * 0x1.0000000000000p-1f);
  LANES128(v22).n128_f32[0] = a7 * 0x1.0000000000000p-1f;
  v70 = a7 * 0x1.0000000000000p-1f;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                  memory_order_acquire);
  v24 = GameData_2130ea0;
  v25 = -(float)(a8 * 0x1.0000000000000p-1f);
  if ((explicit & 1) == 0) {
    v74 = v22;
    v76 = v21;
    v69 = __cxa_guard_acquire_alt1((__int64)GameData_2130ea8),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w"));
    v25 = -(float)(a8 * 0x1.0000000000000p-1f);
    v21 = v76;
    v20 = a8 * 0x1.0000000000000p-1f;
    v18 = 0x1.0000000000000p-1f;
    v22 = v74;
    if (v69 != 0) {
      *v24 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_2130ea8),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w"));
      v25 = -(float)(a8 * 0x1.0000000000000p-1f);
      v21 = v76;
      v20 = a8 * 0x1.0000000000000p-1f;
      v18 = 0x1.0000000000000p-1f;
      v22 = v74;
    }
  }
  v26 = a4 * v18;
  v27 = a3 * v18;
  v28 = v21;
  LANES128(v28).n128_f32[1] = v20;
  LANES128(v21).n128_f32[1] = v25;
  v75 = v21;
  v71 = v28;
  v29 = v22;
  LANES128(v22).n128_f32[1] = v25;
  LANES128(v29).n128_f32[1] = v20;
  v72 = v29;
  v73 = v22;
  result = (__int64*)(*(__int64 (**)(float32x4_t*))(
      LANES128(*(a2)).n128_u64[0] + 16))(a2),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w"));
  if (result != v24) {
    do {
      result = (__int64*)*result;
    } while (result != v24 && result != nullptr);
    if (result == nullptr) {
      v34 = v73;
      v33 = v75;
      v36 = v71;
      v35 = v72;
      goto LABEL_22;
    }
  }
  v32 = LANES128(a2[17]).n128_u8[6];
  if ((v32 & 3) == 2) {
    LANES128(v33).n128_u64[1] = 0;
    v37 = a8 * 0x1.0000000000000p-1f;
    LANES128(v34).n128_u64[1] = 0;
    v38 = (float)(v27 - v70) - v70;
    v39 = (float)(v27 - v70) + v70;
    goto LABEL_13;
  }
  v34 = v73;
  v33 = v75;
  v36 = v71;
  v35 = v72;
  v37 = a8 * 0x1.0000000000000p-1f;
  if ((v32 & 3) == 1) {
    LANES128(v33).n128_u64[1] = 0;
    LANES128(v34).n128_u64[1] = 0;
    v38 = (float)-(float)(PSEUDO_UNFUSED(a7 * 0x1.0000000000000p-1f)) -
          (float)(v27 - v70);
    v39 = v70 - (float)(v27 - v70);
  LABEL_13:
    LANES128(v33).n128_u64[0] = LODWORD(v38);
    v36 = COERCE_AS(float32x4_t, LODWORD(v38));
    LANES128(v36).n128_f32[1] = v37;
    LANES128(v34).n128_f32[0] = v39;
    v35 = COERCE_AS(float32x4_t, LODWORD(v39));
    LANES128(v34).n128_f32[1] = -(float)(a8 * 0x1.0000000000000p-1f);
    LANES128(v33).n128_f32[1] = LANES128(v34).n128_f32[1];
    LANES128(v35).n128_f32[1] = v37;
  }
  v40 = (v32 >> 2) & 3;
  if ((LANES128(a2[17]).n128_u16[2] & 0x1000) != 0) {
    v40 = 0;
  }
  if (v40 == 2) {
    LANES128(v41).n128_u64[1] = 0;
    LANES128(v42).n128_u64[1] = 0;
    LANES128(v43).n128_u64[1] = 0;
    LANES128(v41).n128_u32[0] = LANES128(v36).n128_u32[0];
    LANES128(v42).n128_u32[0] = LANES128(v35).n128_u32[0];
    LANES128(v43).n128_u32[0] = LANES128(v34).n128_u32[0];
    LANES128(v41).n128_f32[1] = LANES128(v36).n128_f32[1] - (float)(v26 - v37);
    LANES128(v42).n128_f32[1] = LANES128(v35).n128_f32[1] - (float)(v26 - v37);
    LANES128(v43).n128_f32[1] = LANES128(v34).n128_f32[1] - (float)(v26 - v37);
    v44 = LANES128(v33).n128_f32[1] - (float)(v26 - v37);
  }
  else {
    if (v40 != 1) {
      goto LABEL_22;
    }
    LANES128(v41).n128_u64[1] = 0;
    LANES128(v42).n128_u64[1] = 0;
    LANES128(v43).n128_u64[1] = 0;
    LANES128(v41).n128_u32[0] = LANES128(v36).n128_u32[0];
    LANES128(v42).n128_u32[0] = LANES128(v35).n128_u32[0];
    LANES128(v43).n128_u32[0] = LANES128(v34).n128_u32[0];
    LANES128(v41).n128_f32[1] = (float)(v26 - v37) + LANES128(v36).n128_f32[1];
    LANES128(v42).n128_f32[1] = (float)(v26 - v37) + LANES128(v35).n128_f32[1];
    LANES128(v43).n128_f32[1] = (float)(v26 - v37) + LANES128(v34).n128_f32[1];
    v44 = (float)(v26 - v37) + LANES128(v33).n128_f32[1];
  }
  v34 = v43;
  v35 = v42;
  v36 = v41;
  v33 = COERCE_AS(float32x4_t,
                  __PAIR64__(LODWORD(v44), LANES128(v33).n128_u32[0]));
LABEL_22:
  LANES128(v45).n128_u32[0] = 0;
  LANES128(v46).n128_u64[0] = 0;
  LANES128(v46).n128_u32[2] = 0;
  LANES128(v45).n128_u32[1] =
      COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LANES128(v47).n128_u64[0] = COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
  LANES128(v46).n128_u32[3] = LANES128(v77).n128_u32[3];
  LANES128(v45).n128_u32[2] = 0;
  LANES128(v47).n128_u32[2] = 0;
  LANES128(v45).n128_f32[3] = a6 - v26;
  LANES128(v47).n128_f32[3] = v27 + a5;
  v48 = vaddq_f32(
      v46,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v47, LANES128(v77).n128_f32[0]), v45,
                         COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v77, 2));
  LANES128(v49).n128_u64[0] = 0;
  LANES128(v49).n128_u32[2] = 0;
  LANES128(v49).n128_u32[3] = LANES128(v78).n128_u32[3];
  v50 = vaddq_f32(
      v49,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v47, LANES128(v78).n128_f32[0]), v45,
                         COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v78, 2));
  LANES128(v51).n128_u64[0] = 0;
  LANES128(v51).n128_u32[2] = 0;
  LANES128(v51).n128_u32[3] = LANES128(v79).n128_u32[3];
  v52 = vaddq_f32(
      v51,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v47, LANES128(v79).n128_f32[0]), v45,
                         COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v79, 2));
  v53 = vzip1q_s32(v52, v48);
  v54 = vzip2q_s32(v52, v48);
  v55 = vzip1q_s32(v50, COERCE_AS(int32x4_t, 0));
  v56 = vzip2q_s32(v50, COERCE_AS(int32x4_t, 0));
  v57 = vzip1q_s32(v53, v55);
  v58 = vzip2q_s32(v53, v55);
  v59 = vzip1q_s32(v54, v56);
  v60 = vzip2q_s32(v54, v56);
  v61 = LANES128_OF(
            vaddq_f32(
                v60,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v57, LANES128(v36).n128_f32[0]), v58,
                        COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
                    v59, v36, 2)))
            .n128_u64[0];
  v62 = LANES128_OF(
            vaddq_f32(
                v60,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v57, LANES128(v35).n128_f32[0]), v58,
                        COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
                    v59, v35, 2)))
            .n128_u64[0];
  v63 = LANES128_OF(
            vaddq_f32(
                v60,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v57, LANES128(v34).n128_f32[0]), v58,
                        COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1),
                    v59, v34, 2)))
            .n128_u64[0];
  v64 = LANES128_OF(
            vaddq_f32(
                v60,
                vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v57, LANES128(v33).n128_f32[0]), v58,
                        COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]), 1),
                    v59, v33, 2)))
            .n128_u64[0];
  v65 = -0x1.fffffe0000000p+127f;
  v66 = *((float*)&v61 + 1);
  if (*(float*)&v61 >= -0x1.fffffe0000000p+127f) {
    v67 = *(float*)&v61;
  }
  else {
    v67 = -0x1.fffffe0000000p+127f;
  }
  if (*((float*)&v61 + 1) >= -0x1.fffffe0000000p+127f) {
    v65 = *((float*)&v61 + 1);
  }
  if (*(float*)&v61 > 0x1.fffffe0000000p+127f) {
    *(float*)&v61 = 0x1.fffffe0000000p+127f;
  }
  if (*((float*)&v61 + 1) > 0x1.fffffe0000000p+127f) {
    v66 = 0x1.fffffe0000000p+127f;
  }
  if (*(float*)&v62 >= v67) {
    v67 = *(float*)&v62;
  }
  if (*((float*)&v62 + 1) >= v65) {
    v65 = *((float*)&v62 + 1);
  }
  if (*(float*)&v61 >= *(float*)&v62) {
    *(float*)&v61 = *(float*)&v62;
  }
  if (v66 >= *((float*)&v62 + 1)) {
    v66 = *((float*)&v62 + 1);
  }
  if (*(float*)&v63 >= v67) {
    v67 = *(float*)&v63;
  }
  if (*((float*)&v63 + 1) >= v65) {
    v65 = *((float*)&v63 + 1);
  }
  if (*(float*)&v61 >= *(float*)&v63) {
    *(float*)&v61 = *(float*)&v63;
  }
  if (v66 >= *((float*)&v63 + 1)) {
    v66 = *((float*)&v63 + 1);
  }
  if (*(float*)&v64 >= v67) {
    v67 = *(float*)&v64;
  }
  if (*((float*)&v64 + 1) >= v65) {
    v65 = *((float*)&v64 + 1);
  }
  if (*(float*)&v61 < *(float*)&v64) {
    *(float*)&v64 = *(float*)&v61;
  }
  if (v66 >= *((float*)&v64 + 1)) {
    v68 = *((float*)&v64 + 1);
  }
  else {
    v68 = v66;
  }
  *(_DWORD*)a1 = v64;
  *(float*)(a1 + 4) = v65;
  *(float*)(a1 + 8) = v67;
  *(float*)(a1 + 12) = v68;
  return result;
}

void Alignment_56d3e0(float32x4_t* a1, float* a2, float* a3, float32x4_t* a4)
{
  unsigned __int8 explicit;
  __int64* v9;
  __int64* v10;
  float v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  int v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  float32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  __int64 v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  void (*v56)(float32x4_t* __return_ptr, float32x4_t*);
  unsigned int v57;
  float v58;
  float v59;
  int v60;
  float32x4_t v61;
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
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  float32x4_t v77;
  int32x4_t v78;
  int32x4_t v79;
  int32x4_t v80;
  int32x4_t v81;
  int32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  int v97;
  float v98;
  unsigned __int8 v99;
  __int64* v100;
  __int64* v101;
  int v102;
  unsigned __int8 v104;
  __int64* v105;
  __int64* v106;
  float v108;
  unsigned int v109;
  float v110;
  float v111;
  float v112;
  int v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  int32x4_t v128;
  int32x4_t v129;
  float32x4_t v130;
  int32x4_t v131;
  int32x4_t v132;
  int32x4_t v133;
  int32x4_t v134;
  int32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float v144;
  float v145;
  float v146;
  float v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t v152;
  float32x4_t v153;
  float32x4_t* v154;
  unsigned __int64 v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float v159;
  float32x4_t v160[3];

  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
  if ((LANES128(a1[5]).n128_u8[8] & 1) == 0) {
    return;
  }
  if (!Pane_590310_alt2((__int64)a1)) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                    memory_order_acquire);
    v9 = GameData_2130ea0;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_2130ea8) != 0) {
      *v9 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
      v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
      __cxa_guard_release_alt1((__int64)GameData_2130ea8),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
    }
    v10 = (__int64*)(*(__int64 (**)(float32x4_t*))(LANES128(*(a1)).n128_u64[0] +
                                                   16))(a1),
    v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v10 != v9) {
      do {
        v10 = (__int64*)*v10;
      } while (v10 != v9 && v10 != nullptr);
      if (v10 == nullptr) {
        v99 = atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                                   memory_order_acquire);
        v100 = GameData_21318f8;
        if ((v99 & 1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)GameData_2131900) != 0) {
          *v100 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
          __cxa_guard_release_alt1((__int64)GameData_2131900),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v157 = COERCE_AS(__typeof__(v157),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
        }
        v101 = (__int64*)(*(__int64 (**)(float32x4_t*))(
            LANES128(*(a1)).n128_u64[0] + 16))(a1),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        if (v101 == v100) {
          v102 = 1;
        }
        else {
          do {
            v101 = (__int64*)*v101;
            v102 = v101 != nullptr;
          } while (v101 != v100 && v101 != nullptr);
        }
        v104 = atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                                    memory_order_acquire);
        v105 = GameData_21318e8;
        if ((v104 & 1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)GameData_21318f0) != 0) {
          *v105 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
          __cxa_guard_release_alt1((__int64)GameData_21318f0),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v157 = COERCE_AS(__typeof__(v157),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
        }
        v106 = (__int64*)(*(__int64 (**)(float32x4_t*))(
            LANES128(*(a1)).n128_u64[0] + 16))(a1),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        if (v106 == v105) {
          goto LABEL_82;
        }
        do {
          v106 = (__int64*)*v106;
        } while (v106 != v105 && v106 != nullptr);
        if (((v106 == nullptr) & ~v102) != 0) {
          v91 = -0x1.fffffe0000000p+127f;
          v95 = 0x1.fffffe0000000p+127f;
        }
        else {
        LABEL_82:
          v108 = LANES128(a1[5]).n128_f32[0];
          v109 = LANES128(a1[5]).n128_u8[11];
          v110 = 0x0.0p+0f;
          v111 = 0x0.0p+0f;
          if ((v109 & 3) != 1) {
            if ((v109 & 3) == 2) {
              v111 = -v108;
            }
            else {
              v111 = v108 * -0x1.0000000000000p-1f;
            }
          }
          v112 = LANES128(a1[5]).n128_f32[1];
          v113 = (v109 >> 2) & 3;
          if (v113 != 1) {
            v110 = LANES128(a1[5]).n128_f32[1];
            if (v113 != 2) {
              v110 = v112 * 0x1.0000000000000p-1f;
            }
          }
          v114 = Alignment_56d270(a1),
          v120 =
              COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v121 =
              COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v156 =
              COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v157 =
              COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v115 = a4[1];
          LANES128(v116).n128_u64[0] = 0;
          LANES128(v116).n128_u32[2] = 0;
          v117 = a4[2];
          LANES128(v118).n128_u64[0] = 0;
          LANES128(v118).n128_u32[2] = 0;
          LANES128(v119).n128_u64[0] =
              COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
          LANES128(v116).n128_u32[3] = HIDWORD(*(unsigned __int128*)a4);
          LANES128(v119).n128_u32[2] = 0;
          v122 = vaddq_f32(
              v116,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v114, COERCE_FLOAT(*a4)), v120,
                      COERCE_AS(float32x2_t, LANES128(*(a4)).n128_u64[0]), 1),
                  v121, *a4, 2));
          LANES128(v116).n128_u64[0] = 0;
          LANES128(v116).n128_u32[2] = 0;
          v123 = vmlaq_lane_f32(
              vmulq_n_f32(v114, LANES128(v115).n128_f32[0]), v120,
              COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]), 1);
          v124 = vmlaq_lane_f32(
              vmulq_n_f32(v114, LANES128(v117).n128_f32[0]), v120,
              COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]), 1);
          LANES128(v120).n128_u64[0] = 0;
          LANES128(v120).n128_u32[2] = 0;
          LANES128(v116).n128_u32[3] = LANES128(v115).n128_u32[3];
          LANES128(v118).n128_u32[3] = LANES128(v122).n128_u32[3];
          LANES128(v120).n128_u32[3] = LANES128(v117).n128_u32[3];
          v125 = vmlaq_laneq_f32(v124, v121, v117, 2);
          v126 = vaddq_f32(v116, vmlaq_laneq_f32(v123, v121, v115, 2));
          v127 = vaddq_f32(v120, v125);
          PSEUDO_LOW_LANE128(v125, n128_f32, v112 * 0x1.0000000000000p-1f);
          LANES128(v119).n128_f32[3] =
              (float)(PSEUDO_UNFUSED(v108 * 0x1.0000000000000p-1f)) + v111;
          LANES128(v123).n128_u32[0] = 0;
          LANES128(v123).n128_u32[1] =
              COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          LANES128(v123).n128_u32[2] = 0;
          LANES128(v123).n128_f32[3] =
              v110 - (float)(PSEUDO_UNFUSED(v112 * 0x1.0000000000000p-1f));
          v128 = vaddq_f32(
              v118,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v119, LANES128(v122).n128_f32[0]), v123,
                      COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v122, 2));
          LANES128(v118).n128_u64[0] = 0;
          LANES128(v118).n128_u32[2] = 0;
          LANES128(v118).n128_u32[3] = LANES128(v126).n128_u32[3];
          v129 = vaddq_f32(
              v118,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v119, LANES128(v126).n128_f32[0]), v123,
                      COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v126, 2));
          v130 = vmlaq_lane_f32(
              vmulq_n_f32(v119, LANES128(v127).n128_f32[0]), v123,
              COERCE_AS(float32x2_t, LANES128(v127).n128_u64[0]), 1);
          LANES128(v123).n128_u64[0] = 0;
          LANES128(v123).n128_u32[2] = 0;
          LANES128(v123).n128_u32[3] = LANES128(v127).n128_u32[3];
          v131 = vaddq_f32(
              v123,
              vmlaq_laneq_f32(v130, COERCE_AS(float32x4_t, GameData_1a83090),
                              v127, 2));
          v132 = vzip1q_s32(v128, v131);
          v133 = vzip2q_s32(v128, v131);
          v134 = vzip1q_s32(v129, COERCE_AS(int32x4_t, 0));
          v135 = vzip2q_s32(v129, COERCE_AS(int32x4_t, 0));
          v136 = vzip1q_s32(v132, v134);
          v137 = vzip2q_s32(v132, v134);
          v138 = vzip1q_s32(v133, v135);
          v139 = vzip2q_s32(v133, v135);
          v140 = vmulq_n_f32(v136, -(float)(v108 * 0x1.0000000000000p-1f));
          v141 = vmulq_n_f32(v136, v108 * 0x1.0000000000000p-1f);
          v142 = vmlsq_lane_f32(
              v141, v137, COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]),
              0);
          v143 = vmlsq_lane_f32(
              v140, v137, COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]),
              0);
          v91 = -0x1.fffffe0000000p+127f;
          v144 = 0x1.fffffe0000000p+127f;
          LODWORD(v95) =
              LANES128_OF(
                  vaddq_f32(v139,
                            vmlaq_f32(v142, COERCE_AS(float32x4_t, 0), v138)))
                  .n128_u32[0];
          v145 =
              LANES128_OF(
                  vaddq_f32(v139,
                            vmlaq_f32(vmlaq_n_f32(v140, v137,
                                                  v112 * 0x1.0000000000000p-1f),
                                      COERCE_AS(float32x4_t, 0), v138)))
                  .n128_f32[0];
          LODWORD(v146) =
              LANES128_OF(
                  vaddq_f32(v139,
                            vmlaq_f32(vmlaq_n_f32(v141, v137,
                                                  v112 * 0x1.0000000000000p-1f),
                                      COERCE_AS(float32x4_t, 0), v138)))
                  .n128_u32[0];
          LODWORD(v147) =
              LANES128_OF(
                  vaddq_f32(v139,
                            vmlaq_f32(v143, COERCE_AS(float32x4_t, 0), v138)))
                  .n128_u32[0];
          if (v145 >= -0x1.fffffe0000000p+127f) {
            v91 = v145;
          }
          if (v145 <= 0x1.fffffe0000000p+127f) {
            v144 = v145;
          }
          if (v146 >= v91) {
            v91 = v146;
          }
          if (v144 >= v146) {
            v144 = v146;
          }
          if (v95 >= v91) {
            v91 = v95;
          }
          if (v144 < v95) {
            v95 = v144;
          }
          if (v147 >= v91) {
            v91 = v147;
          }
          if (v95 >= v147) {
            v95 = v147;
          }
        }
        goto LABEL_106;
      }
    }
    v12 = LANES128(a1[5]).n128_f32[0];
    v13 = LANES128(a1[5]).n128_u8[11];
    v14 = 0x0.0p+0f;
    v15 = 0x0.0p+0f;
    if ((v13 & 3) != 1) {
      if ((v13 & 3) != 2) {
        v15 = v12 * -0x1.0000000000000p-1f;
        v16 = LANES128(a1[5]).n128_f32[1];
        v17 = (v13 >> 2) & 3;
        if (v17 != 1) {
        LABEL_17:
          v14 = v16;
          if (v17 != 2) {
            v14 = v16 * 0x1.0000000000000p-1f;
          }
        }
      LABEL_19:
        v18 = Alignment_56d270(a1),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v19 = *a4;
        v20 = a4[1];
        LANES128(v21).n128_u64[0] = 0;
        LANES128(v21).n128_u32[2] = 0;
        v22 = a4[2];
        v160[0] = (__typeof__(v160[0])){0};
        LANES128(v21).n128_u32[3] = LANES128(v19).n128_u32[3];
        LANES128(v23).n128_u64[0] = COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
        LANES128(v23).n128_u32[2] = 0;
        v26 = vaddq_f32(
            v21, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v18, LANES128(v19).n128_f32[0]), v24,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
                     v25, v19, 2));
        LANES128(v21).n128_u64[0] = 0;
        LANES128(v21).n128_u32[2] = 0;
        v27 = vmlaq_lane_f32(vmulq_n_f32(v18, LANES128(v20).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                             1);
        v28 = vmlaq_lane_f32(vmulq_n_f32(v18, LANES128(v22).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                             1);
        LANES128(v24).n128_u64[0] = 0;
        LANES128(v24).n128_u32[2] = 0;
        LANES128(v21).n128_u32[3] = LANES128(v20).n128_u32[3];
        LANES128(v24).n128_u32[3] = LANES128(v22).n128_u32[3];
        v29 = vmlaq_laneq_f32(v28, v25, v22, 2);
        v30 = vaddq_f32(v21, vmlaq_laneq_f32(v27, v25, v20, 2));
        v31 = vaddq_f32(v24, v29);
        PSEUDO_LOW_LANE128(v29, n128_f32, v16 * 0x1.0000000000000p-1f);
        LANES128(v23).n128_f32[3] =
            (float)(PSEUDO_UNFUSED(v12 * 0x1.0000000000000p-1f)) + v15;
        LANES128(v27).n128_u32[0] = 0;
        v159 = 0x0.0p+0f;
        LANES128(v27).n128_u32[1] =
            COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        LANES128(v32).n128_u64[0] = 0;
        LANES128(v32).n128_u32[2] = 0;
        LANES128(v32).n128_u32[3] = LANES128(v26).n128_u32[3];
        LANES128(v27).n128_u32[2] = 0;
        LANES128(v27).n128_f32[3] =
            v14 - (float)(PSEUDO_UNFUSED(v16 * 0x1.0000000000000p-1f));
        v33 = vaddq_f32(
            v32, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v23, LANES128(v26).n128_f32[0]), v27,
                         COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]), 1),
                     COERCE_AS(float32x4_t, GameData_1a83090), v26, 2));
        LANES128(v32).n128_u64[0] = 0;
        LANES128(v32).n128_u32[2] = 0;
        LANES128(v32).n128_u32[3] = LANES128(v30).n128_u32[3];
        v34 = vaddq_f32(
            v32, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v23, LANES128(v30).n128_f32[0]), v27,
                         COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1),
                     COERCE_AS(float32x4_t, GameData_1a83090), v30, 2));
        v35 = vmlaq_lane_f32(vmulq_n_f32(v23, LANES128(v31).n128_f32[0]), v27,
                             COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                             1);
        LANES128(v27).n128_u64[0] = 0;
        LANES128(v27).n128_u32[2] = 0;
        LANES128(v27).n128_u32[3] = LANES128(v31).n128_u32[3];
        v36 = vaddq_f32(
            v27, vmlaq_laneq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83090),
                                 v31, 2));
        v37 = vzip1q_s32(v33, v36);
        v38 = vzip2q_s32(v33, v36);
        v39 = vzip1q_s32(v34, COERCE_AS(int32x4_t, 0));
        v40 = vzip2q_s32(v34, COERCE_AS(int32x4_t, 0));
        v41 = vzip1q_s32(v37, v39);
        v42 = vzip2q_s32(v37, v39);
        v43 = vzip1q_s32(v38, v40);
        v44 = vzip2q_s32(v38, v40);
        v45 = vmulq_n_f32(v41, -(float)(v12 * 0x1.0000000000000p-1f));
        v46 = vmulq_n_f32(v41, v12 * 0x1.0000000000000p-1f);
        v47 = LANES128_OF(
                  vaddq_f32(v44,
                            vmlaq_f32(vmlsq_lane_f32(
                                          v46, v42,
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v29).n128_u64[0]),
                                          0),
                                      COERCE_AS(float32x4_t, 0), v43)))
                  .n128_u32[0];
        LODWORD(v48) =
            LANES128_OF(
                vaddq_f32(v44,
                          vmlaq_f32(vmlsq_lane_f32(
                                        v45, v42,
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v29).n128_u64[0]),
                                        0),
                                    COERCE_AS(float32x4_t, 0), v43)))
                .n128_u32[0];
        v49 = LANES128_OF(
                  vaddq_f32(v44,
                            vmlaq_f32(vmlaq_n_f32(v45, v42,
                                                  v16 * 0x1.0000000000000p-1f),
                                      COERCE_AS(float32x4_t, 0), v43)))
                  .n128_f32[0];
        LODWORD(v50) =
            LANES128_OF(
                vaddq_f32(v44,
                          vmlaq_f32(vmlaq_n_f32(v46, v42,
                                                v16 * 0x1.0000000000000p-1f),
                                    COERCE_AS(float32x4_t, 0), v43)))
                .n128_u32[0];
        v51 = -0x1.fffffe0000000p+127f;
        v52 = 0x1.fffffe0000000p+127f;
        if (v49 >= -0x1.fffffe0000000p+127f) {
          v51 = v49;
        }
        if (v49 <= 0x1.fffffe0000000p+127f) {
          v52 = v49;
        }
        if (v50 >= v51) {
          v51 = v50;
        }
        if (v52 >= v50) {
          v52 = v50;
        }
        if (*(float*)&v47 >= v51) {
          v51 = *(float*)&v47;
        }
        if (v52 < *(float*)&v47) {
          *(float*)&v47 = v52;
        }
        if (v48 >= v51) {
          v53 = v48;
        }
        else {
          v53 = v51;
        }
        if (*(float*)&v47 >= v48) {
          v54 = v48;
        }
        else {
          v54 = *(float*)&v47;
        }
        (*(void (**)(float32x4_t*))(LANES128(*(a1)).n128_u64[0] + 360))(a1),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v55 = LANES128(v160[0]).n128_f32[2] - LANES128(v160[0]).n128_f32[0];
        v56 = *(void (**)(float32x4_t* __return_ptr, float32x4_t*))(
            LANES128(*(a1)).n128_u64[0] + 360),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v160[0] = (__typeof__(v160[0])){0};
        v56(v160, a1),
            v120 = COERCE_AS(__typeof__(v120),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v121 = COERCE_AS(__typeof__(v121),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v156 = COERCE_AS(__typeof__(v156),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v157 = COERCE_AS(__typeof__(v157),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v57 = LANES128(a1[5]).n128_u8[11];
        v58 = 0x0.0p+0f;
        if ((v57 & 3) != 1) {
          if ((v57 & 3) != 2) {
            v58 = v55 * -0x1.0000000000000p-1f;
            v59 = LANES128(v160[0]).n128_f32[1] - LANES128(v160[0]).n128_f32[3];
            v60 = (v57 >> 2) & 3;
            if (v60 == 1) {
            LABEL_45:
              v61 = Alignment_56d270(a1),
              v120 = COERCE_AS(__typeof__(v120),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v121 = COERCE_AS(__typeof__(v121),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v156 = COERCE_AS(__typeof__(v156),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v157 = COERCE_AS(__typeof__(v157),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
              v62 = a4[1];
              LANES128(v63).n128_u64[0] = 0;
              LANES128(v63).n128_u32[2] = 0;
              v64 = a4[2];
              LANES128(v65).n128_u64[0] =
                  COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
              LANES128(v63).n128_u32[3] = HIDWORD(*(unsigned __int128*)a4);
              LANES128(v65).n128_u32[2] = 0;
              v68 = vaddq_f32(
                  v63,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v61, COERCE_FLOAT(*a4)), v66,
                          COERCE_AS(float32x2_t, LANES128(*(a4)).n128_u64[0]),
                          1),
                      v67, *a4, 2));
              LANES128(v63).n128_u64[0] = 0;
              LANES128(v63).n128_u32[2] = 0;
              v69 = vmlaq_lane_f32(
                  vmulq_n_f32(v61, LANES128(v62).n128_f32[0]), v66,
                  COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]), 1);
              v70 = vmlaq_lane_f32(
                  vmulq_n_f32(v61, LANES128(v64).n128_f32[0]), v66,
                  COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]), 1);
              LANES128(v66).n128_u64[0] = 0;
              LANES128(v66).n128_u32[2] = 0;
              LANES128(v63).n128_u32[3] = LANES128(v62).n128_u32[3];
              v71 = vmlaq_laneq_f32(v70, v67, v64, 2);
              LANES128(v66).n128_u32[3] = LANES128(v64).n128_u32[3];
              v72 = vaddq_f32(v63, vmlaq_laneq_f32(v69, v67, v62, 2));
              v73 = vaddq_f32(v66, v71);
              PSEUDO_LOW_LANE128(v71, n128_f32, v59 * 0x1.0000000000000p-1f);
              LANES128(v65).n128_f32[3] =
                  (float)(PSEUDO_UNFUSED(v55 * 0x1.0000000000000p-1f)) + v58;
              LANES128(v69).n128_u32[0] = 0;
              LANES128(v69).n128_u32[1] =
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
              LANES128(v74).n128_u64[0] = 0;
              LANES128(v74).n128_u32[2] = 0;
              LANES128(v74).n128_u32[3] = LANES128(v68).n128_u32[3];
              LANES128(v69).n128_u32[2] = 0;
              LANES128(v69).n128_f32[3] =
                  v159 - (float)(PSEUDO_UNFUSED(v59 * 0x1.0000000000000p-1f));
              v75 = vaddq_f32(
                  v74,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v65, LANES128(v68).n128_f32[0]), v69,
                          COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v68, 2));
              LANES128(v74).n128_u64[0] = 0;
              LANES128(v74).n128_u32[2] = 0;
              LANES128(v74).n128_u32[3] = LANES128(v72).n128_u32[3];
              v76 = vaddq_f32(
                  v74,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v65, LANES128(v72).n128_f32[0]), v69,
                          COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v72, 2));
              v77 = vmlaq_lane_f32(
                  vmulq_n_f32(v65, LANES128(v73).n128_f32[0]), v69,
                  COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]), 1);
              LANES128(v69).n128_u64[0] = 0;
              LANES128(v69).n128_u32[2] = 0;
              LANES128(v69).n128_u32[3] = LANES128(v73).n128_u32[3];
              v78 = vaddq_f32(
                  v69,
                  vmlaq_laneq_f32(v77, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v73, 2));
              v79 = vzip1q_s32(v75, v78);
              v80 = vzip2q_s32(v75, v78);
              v81 = vzip1q_s32(v76, COERCE_AS(int32x4_t, 0));
              v82 = vzip2q_s32(v76, COERCE_AS(int32x4_t, 0));
              v83 = vzip1q_s32(v79, v81);
              v84 = vzip2q_s32(v79, v81);
              v85 = vzip1q_s32(v80, v82);
              v86 = vzip2q_s32(v80, v82);
              v87 = vmulq_n_f32(v83, -(float)(v55 * 0x1.0000000000000p-1f));
              v88 = vmulq_n_f32(v83, v55 * 0x1.0000000000000p-1f);
              v89 = vmlsq_lane_f32(
                  v88, v84, COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                  0);
              v90 = vmlsq_lane_f32(
                  v87, v84, COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                  0);
              v91 = -0x1.fffffe0000000p+127f;
              LODWORD(v92) =
                  LANES128_OF(
                      vaddq_f32(v86,
                                vmlaq_f32(v89, COERCE_AS(float32x4_t, 0), v85)))
                      .n128_u32[0];
              v93 = LANES128_OF(
                        vaddq_f32(
                            v86,
                            vmlaq_f32(vmlaq_n_f32(v87, v84,
                                                  v59 * 0x1.0000000000000p-1f),
                                      COERCE_AS(float32x4_t, 0), v85)))
                        .n128_f32[0];
              LODWORD(v94) =
                  LANES128_OF(
                      vaddq_f32(v86, vmlaq_f32(vmlaq_n_f32(
                                                   v88, v84,
                                                   v59 * 0x1.0000000000000p-1f),
                                               COERCE_AS(float32x4_t, 0), v85)))
                      .n128_u32[0];
              LODWORD(v95) =
                  LANES128_OF(
                      vaddq_f32(v86,
                                vmlaq_f32(v90, COERCE_AS(float32x4_t, 0), v85)))
                      .n128_u32[0];
              v96 = 0x1.fffffe0000000p+127f;
              v97 = LANES128(a1[17]).n128_u8[6] & 3;
              if (v93 >= -0x1.fffffe0000000p+127f) {
                v91 = v93;
              }
              if (v93 <= 0x1.fffffe0000000p+127f) {
                v96 = v93;
              }
              if (v94 >= v91) {
                v91 = v94;
              }
              if (v96 >= v94) {
                v96 = v94;
              }
              if (v92 >= v91) {
                v91 = v92;
              }
              if (v96 >= v92) {
                v96 = v92;
              }
              if (v95 >= v91) {
                v91 = v95;
              }
              if (v96 < v95) {
                v95 = v96;
              }
              v98 = v91 - v95;
              if (v97 == 1) {
                v91 = v54 + v98;
                v95 = v54;
              }
              else if (v97 == 2) {
                v95 = v53 - v98;
                v91 = v53;
              }
            LABEL_106:
              if (v95 >= *a2) {
                v95 = *a2;
              }
              *a2 = v95;
              if (*a3 >= v91) {
                v91 = *a3;
              }
              *a3 = v91;
              goto LABEL_111;
            }
          LABEL_43:
            v159 = v59;
            if (v60 != 2) {
              v159 = v59 * 0x1.0000000000000p-1f;
            }
            goto LABEL_45;
          }
          v58 = -v55;
        }
        v59 = LANES128(v160[0]).n128_f32[1] - LANES128(v160[0]).n128_f32[3];
        v60 = (v57 >> 2) & 3;
        if (v60 == 1) {
          goto LABEL_45;
        }
        goto LABEL_43;
      }
      v15 = -v12;
    }
    v16 = LANES128(a1[5]).n128_f32[1];
    v17 = (v13 >> 2) & 3;
    if (v17 == 1) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
LABEL_111:
  v148 = Alignment_56d270(a1),
  v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v149 = *a4;
  v150 = a4[1];
  LANES128(v151).n128_u64[0] = 0;
  LANES128(v151).n128_u32[2] = 0;
  v152 = a4[2];
  LANES128(v153).n128_u64[0] = 0;
  LANES128(v153).n128_u32[2] = 0;
  v154 = a1 + 2;
  LANES128(v151).n128_u32[3] = LANES128(v149).n128_u32[3];
  LANES128(v153).n128_u32[3] = LANES128(v152).n128_u32[3];
  v155 = LANES128(a1[2]).n128_u64[1];
  v158 = vaddq_f32(
      v151,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v148, LANES128(v149).n128_f32[0]), v156,
                         COERCE_AS(float32x2_t, LANES128(v149).n128_u64[0]), 1),
          v157, v149, 2));
  LANES128(v151).n128_u64[0] = 0;
  LANES128(v151).n128_u32[2] = 0;
  LANES128(v151).n128_u32[3] = LANES128(v150).n128_u32[3];
  v160[0] = v158;
  v160[1] = vaddq_f32(
      v151,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v148, LANES128(v150).n128_f32[0]), v156,
                         COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0]), 1),
          v157, v150, 2));
  for (v160[2] = vaddq_f32(
           v153, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v148, LANES128(v152).n128_f32[0]), v156,
                         COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0]), 1),
                     v157, v152, 2));
       (float32x4_t*)v155 != v154; v155 = *(_QWORD*)(v155 + 8)) {
    Alignment_56d3e0((float32x4_t*)(v155 - 8), a2, a3, v160),
        v120 = COERCE_AS(__typeof__(v120), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v121 = COERCE_AS(__typeof__(v121), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v156 = COERCE_AS(__typeof__(v156), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v157 = COERCE_AS(__typeof__(v157), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
}

void Alignment_56dd00(float32x4_t* a1, float* a2, float* a3, float32x4_t* a4)
{
  unsigned __int8 explicit;
  __int64* v9;
  __int64* v10;
  float v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  int v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  float32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  long double v51;
  float v52;
  float v53;
  float v54;
  float v55;
  __attribute__((swiftcall)) void (*v56)(PSEUDO_X8, float32x4_t*);
  unsigned int v57;
  float v58;
  float v59;
  int v60;
  float32x4_t v61;
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
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int32x4_t v75;
  int32x4_t v76;
  float32x4_t v77;
  int32x4_t v78;
  int32x4_t v79;
  int32x4_t v80;
  int32x4_t v81;
  int32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float v94;
  int v95;
  float v96;
  unsigned __int8 v97;
  __int64* v98;
  __int64* v99;
  int v100;
  unsigned __int8 v102;
  __int64* v103;
  __int64* v104;
  float v106;
  unsigned int v107;
  float v108;
  float v109;
  float v110;
  int v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  int32x4_t v126;
  int32x4_t v127;
  float32x4_t v128;
  int32x4_t v129;
  int32x4_t v130;
  int32x4_t v131;
  int32x4_t v132;
  int32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float v141;
  float32x4_t v142;
  float32x4_t v143;
  float v144;
  float v145;
  float32x4_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x4_t* v152;
  unsigned __int64 v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float v157;
  float32x4_t v158[3];

  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
  if ((LANES128(a1[5]).n128_u8[8] & 1) == 0) {
    return;
  }
  if (!Pane_590310_alt2((__int64)a1)) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                    memory_order_acquire);
    v9 = GameData_2130ea0;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_2130ea8) != 0) {
      *v9 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
      v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
      __cxa_guard_release(GameData_2130ea8),
          v118 =
              COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v154 =
              COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
    }
    v10 = (__int64*)(*(__int64 (**)(float32x4_t*))(LANES128(*(a1)).n128_u64[0] +
                                                   16))(a1),
    v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v10 != v9) {
      do {
        v10 = (__int64*)*v10;
      } while (v10 != v9 && v10 != nullptr);
      if (v10 == nullptr) {
        v97 = atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                                   memory_order_acquire);
        v98 = GameData_21318f8;
        if ((v97 & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(GameData_2131900) != 0) {
          *v98 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
          v118 =
              COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v154 =
              COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
          __cxa_guard_release(GameData_2131900),
              v118 = COERCE_AS(__typeof__(v118),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v154 = COERCE_AS(__typeof__(v154),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
        }
        v99 = (__int64*)(*(__int64 (**)(float32x4_t*))(
            LANES128(*(a1)).n128_u64[0] + 16))(a1),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        if (v99 == v98) {
          v100 = 1;
        }
        else {
          do {
            v99 = (__int64*)*v99;
            v100 = v99 != nullptr;
          } while (v99 != v98 && v99 != nullptr);
        }
        v102 = atomic_load_explicit((atomic_uchar* volatile)GameData_21318f0,
                                    memory_order_acquire);
        v103 = GameData_21318e8;
        if ((v102 & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire(GameData_21318f0) != 0) {
          *v103 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic(),
          v118 =
              COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v154 =
              COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
          __cxa_guard_release(GameData_21318f0),
              v118 = COERCE_AS(__typeof__(v118),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v154 = COERCE_AS(__typeof__(v154),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
        }
        v104 = (__int64*)(*(__int64 (**)(float32x4_t*))(
            LANES128(*(a1)).n128_u64[0] + 16))(a1),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        if (v104 == v103) {
          goto LABEL_86;
        }
        do {
          v104 = (__int64*)*v104;
        } while (v104 != v103 && v104 != nullptr);
        if (((v104 == nullptr) & ~v100) != 0) {
          v94 = -0x1.fffffe0000000p+127f;
          LANES128(v93).n128_u32[0] = 2139095039;
        }
        else {
        LABEL_86:
          v106 = LANES128(a1[5]).n128_f32[0];
          v107 = LANES128(a1[5]).n128_u8[11];
          v108 = 0x0.0p+0f;
          v109 = 0x0.0p+0f;
          if ((v107 & 3) != 1) {
            if ((v107 & 3) == 2) {
              v109 = -v106;
            }
            else {
              v109 = v106 * -0x1.0000000000000p-1f;
            }
          }
          v110 = LANES128(a1[5]).n128_f32[1];
          v111 = (v107 >> 2) & 3;
          if (v111 != 1) {
            v108 = LANES128(a1[5]).n128_f32[1];
            if (v111 != 2) {
              v108 = v110 * 0x1.0000000000000p-1f;
            }
          }
          v112 = GameRoutine_56d270(a1),
          v118 =
              COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v119 =
              COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v154 =
              COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v155 =
              COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
          v113 = a4[1];
          LANES128(v114).n128_u64[0] = 0;
          LANES128(v114).n128_u32[2] = 0;
          v115 = a4[2];
          LANES128(v116).n128_u64[0] = 0;
          LANES128(v116).n128_u32[2] = 0;
          LANES128(v117).n128_u64[0] =
              COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
          LANES128(v114).n128_u32[3] = HIDWORD(*(unsigned __int128*)a4);
          LANES128(v117).n128_u32[2] = 0;
          v120 = vaddq_f32(
              v114,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v112, COERCE_FLOAT(*a4)), v118,
                      COERCE_AS(float32x2_t, LANES128(*(a4)).n128_u64[0]), 1),
                  v119, *a4, 2));
          LANES128(v114).n128_u64[0] = 0;
          LANES128(v114).n128_u32[2] = 0;
          v121 = vmlaq_lane_f32(
              vmulq_n_f32(v112, LANES128(v113).n128_f32[0]), v118,
              COERCE_AS(float32x2_t, LANES128(v113).n128_u64[0]), 1);
          v122 = vmlaq_lane_f32(
              vmulq_n_f32(v112, LANES128(v115).n128_f32[0]), v118,
              COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]), 1);
          LANES128(v118).n128_u64[0] = 0;
          LANES128(v118).n128_u32[2] = 0;
          LANES128(v114).n128_u32[3] = LANES128(v113).n128_u32[3];
          LANES128(v116).n128_u32[3] = LANES128(v120).n128_u32[3];
          LANES128(v118).n128_u32[3] = LANES128(v115).n128_u32[3];
          v123 = vmlaq_laneq_f32(v122, v119, v115, 2);
          v124 = vaddq_f32(v114, vmlaq_laneq_f32(v121, v119, v113, 2));
          v125 = vaddq_f32(v118, v123);
          PSEUDO_LOW_LANE128(v123, n128_f32, v110 * 0x1.0000000000000p-1f);
          LANES128(v117).n128_f32[3] =
              (float)(PSEUDO_UNFUSED(v106 * 0x1.0000000000000p-1f)) + v109;
          LANES128(v121).n128_u32[0] = 0;
          LANES128(v121).n128_u32[1] =
              COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
          LANES128(v121).n128_u32[2] = 0;
          LANES128(v121).n128_f32[3] =
              v108 - (float)(PSEUDO_UNFUSED(v110 * 0x1.0000000000000p-1f));
          v126 = vaddq_f32(
              v116,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v117, LANES128(v120).n128_f32[0]), v121,
                      COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v120, 2));
          LANES128(v116).n128_u64[0] = 0;
          LANES128(v116).n128_u32[2] = 0;
          LANES128(v116).n128_u32[3] = LANES128(v124).n128_u32[3];
          v127 = vaddq_f32(
              v116,
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v117, LANES128(v124).n128_f32[0]), v121,
                      COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v124, 2));
          v128 = vmlaq_lane_f32(
              vmulq_n_f32(v117, LANES128(v125).n128_f32[0]), v121,
              COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]), 1);
          LANES128(v121).n128_u64[0] = 0;
          LANES128(v121).n128_u32[2] = 0;
          LANES128(v121).n128_u32[3] = LANES128(v125).n128_u32[3];
          v129 = vaddq_f32(
              v121,
              vmlaq_laneq_f32(v128, COERCE_AS(float32x4_t, GameData_1a83090),
                              v125, 2));
          v130 = vzip1q_s32(v126, v129);
          v131 = vzip2q_s32(v126, v129);
          v132 = vzip1q_s32(v127, COERCE_AS(int32x4_t, 0));
          v133 = vzip2q_s32(v127, COERCE_AS(int32x4_t, 0));
          v134 = vzip1q_s32(v130, v132);
          v135 = vzip2q_s32(v130, v132);
          v136 = vzip1q_s32(v131, v133);
          v137 = vzip2q_s32(v131, v133);
          v138 = vmulq_n_f32(v134, -(float)(v106 * 0x1.0000000000000p-1f));
          v139 = vmulq_n_f32(v134, v106 * 0x1.0000000000000p-1f);
          v93 = vaddq_f32(
              v137,
              vmlaq_f32(vmlsq_lane_f32(
                            v139, v135,
                            COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0]),
                            0),
                        COERCE_AS(float32x4_t, 0), v136));
          v140 = vaddq_f32(
              v137,
              vmlaq_f32(vmlsq_lane_f32(
                            v138, v135,
                            COERCE_AS(float32x2_t, LANES128(v123).n128_u64[0]),
                            0),
                        COERCE_AS(float32x4_t, 0), v136));
          v141 = -0x1.fffffe0000000p+127f;
          v142 = vaddq_f32(
              v137,
              vmlaq_f32(vmlaq_n_f32(v138, v135, v110 * 0x1.0000000000000p-1f),
                        COERCE_AS(float32x4_t, 0), v136));
          v143 = vaddq_f32(
              v137,
              vmlaq_f32(vmlaq_n_f32(v139, v135, v110 * 0x1.0000000000000p-1f),
                        COERCE_AS(float32x4_t, 0), v136));
          LANES128(v93).n128_u32[0] = LANES128(v93).n128_u32[1];
          v144 = LANES128(v142).n128_f32[1];
          if (LANES128(v142).n128_f32[1] >= -0x1.fffffe0000000p+127f) {
            v141 = LANES128(v142).n128_f32[1];
          }
          if (LANES128(v142).n128_f32[1] > 0x1.fffffe0000000p+127f) {
            v144 = 0x1.fffffe0000000p+127f;
          }
          if (LANES128(v143).n128_f32[1] >= v141) {
            v141 = LANES128(v143).n128_f32[1];
          }
          if (v144 >= LANES128(v143).n128_f32[1]) {
            v144 = LANES128(v143).n128_f32[1];
          }
          if (LANES128(v93).n128_f32[1] >= v141) {
            v141 = LANES128(v93).n128_f32[1];
          }
          if (v144 < LANES128(v93).n128_f32[1]) {
            LANES128(v93).n128_f32[0] = v144;
          }
          if (LANES128(v140).n128_f32[1] >= v141) {
            v94 = LANES128(v140).n128_f32[1];
          }
          else {
            v94 = v141;
          }
          if (LANES128(v93).n128_f32[0] >= LANES128(v140).n128_f32[1]) {
            LANES128(v93).n128_f32[0] = LANES128(v140).n128_f32[1];
          }
        }
        goto LABEL_111;
      }
    }
    v12 = LANES128(a1[5]).n128_f32[0];
    v13 = LANES128(a1[5]).n128_u8[11];
    v14 = 0x0.0p+0f;
    v15 = 0x0.0p+0f;
    if ((v13 & 3) != 1) {
      if ((v13 & 3) != 2) {
        v15 = v12 * -0x1.0000000000000p-1f;
        v16 = LANES128(a1[5]).n128_f32[1];
        v17 = (v13 >> 2) & 3;
        if (v17 != 1) {
        LABEL_17:
          v14 = v16;
          if (v17 != 2) {
            v14 = v16 * 0x1.0000000000000p-1f;
          }
        }
      LABEL_19:
        v18 = GameRoutine_56d270(a1),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v19 = *a4;
        v20 = a4[1];
        LANES128(v21).n128_u64[0] = 0;
        LANES128(v21).n128_u32[2] = 0;
        v22 = a4[2];
        v158[0] = (__typeof__(v158[0])){0};
        LANES128(v21).n128_u32[3] = LANES128(v19).n128_u32[3];
        LANES128(v23).n128_u64[0] = COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
        LANES128(v23).n128_u32[2] = 0;
        v26 = vaddq_f32(
            v21, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v18, LANES128(v19).n128_f32[0]), v24,
                         COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), 1),
                     v25, v19, 2));
        LANES128(v21).n128_u64[0] = 0;
        LANES128(v21).n128_u32[2] = 0;
        v27 = vmlaq_lane_f32(vmulq_n_f32(v18, LANES128(v20).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                             1);
        v28 = vmlaq_lane_f32(vmulq_n_f32(v18, LANES128(v22).n128_f32[0]), v24,
                             COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                             1);
        LANES128(v24).n128_u64[0] = 0;
        LANES128(v24).n128_u32[2] = 0;
        LANES128(v21).n128_u32[3] = LANES128(v20).n128_u32[3];
        LANES128(v24).n128_u32[3] = LANES128(v22).n128_u32[3];
        v29 = vmlaq_laneq_f32(v28, v25, v22, 2);
        v30 = vaddq_f32(v21, vmlaq_laneq_f32(v27, v25, v20, 2));
        v31 = vaddq_f32(v24, v29);
        PSEUDO_LOW_LANE128(v29, n128_f32, v16 * 0x1.0000000000000p-1f);
        LANES128(v23).n128_f32[3] =
            (float)(PSEUDO_UNFUSED(v12 * 0x1.0000000000000p-1f)) + v15;
        LANES128(v27).n128_u32[0] = 0;
        v157 = 0x0.0p+0f;
        LANES128(v27).n128_u32[1] =
            COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        LANES128(v32).n128_u64[0] = 0;
        LANES128(v32).n128_u32[2] = 0;
        LANES128(v32).n128_u32[3] = LANES128(v26).n128_u32[3];
        LANES128(v27).n128_u32[2] = 0;
        LANES128(v27).n128_f32[3] =
            v14 - (float)(PSEUDO_UNFUSED(v16 * 0x1.0000000000000p-1f));
        v33 = vaddq_f32(
            v32, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v23, LANES128(v26).n128_f32[0]), v27,
                         COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]), 1),
                     COERCE_AS(float32x4_t, GameData_1a83090), v26, 2));
        LANES128(v32).n128_u64[0] = 0;
        LANES128(v32).n128_u32[2] = 0;
        LANES128(v32).n128_u32[3] = LANES128(v30).n128_u32[3];
        v34 = vaddq_f32(
            v32, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v23, LANES128(v30).n128_f32[0]), v27,
                         COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1),
                     COERCE_AS(float32x4_t, GameData_1a83090), v30, 2));
        v35 = vmlaq_lane_f32(vmulq_n_f32(v23, LANES128(v31).n128_f32[0]), v27,
                             COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                             1);
        LANES128(v27).n128_u64[0] = 0;
        LANES128(v27).n128_u32[2] = 0;
        LANES128(v27).n128_u32[3] = LANES128(v31).n128_u32[3];
        v36 = vaddq_f32(
            v27, vmlaq_laneq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83090),
                                 v31, 2));
        v37 = vzip1q_s32(v33, v36);
        v38 = vzip2q_s32(v33, v36);
        v39 = vzip1q_s32(v34, COERCE_AS(int32x4_t, 0));
        v40 = vzip2q_s32(v34, COERCE_AS(int32x4_t, 0));
        v41 = vzip1q_s32(v37, v39);
        v42 = vzip2q_s32(v37, v39);
        v43 = vzip1q_s32(v38, v40);
        v44 = vzip2q_s32(v38, v40);
        v45 = vmulq_n_f32(v41, -(float)(v12 * 0x1.0000000000000p-1f));
        v46 = vmulq_n_f32(v41, v12 * 0x1.0000000000000p-1f);
        v50 = vaddq_f32(
            v44,
            vmlaq_f32(vmlsq_lane_f32(
                          v46, v42,
                          COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 0),
                      COERCE_AS(float32x4_t, 0), v43));
        v51 = COERCE_LONG_DOUBLE(vaddq_f32(
            v44,
            vmlaq_f32(vmlsq_lane_f32(
                          v45, v42,
                          COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 0),
                      COERCE_AS(float32x4_t, 0), v43)));
        v47 = -0x1.fffffe0000000p+127f;
        v48 = vaddq_f32(
            v44, vmlaq_f32(vmlaq_n_f32(v45, v42, v16 * 0x1.0000000000000p-1f),
                           COERCE_AS(float32x4_t, 0), v43));
        v49 = vaddq_f32(
            v44, vmlaq_f32(vmlaq_n_f32(v46, v42, v16 * 0x1.0000000000000p-1f),
                           COERCE_AS(float32x4_t, 0), v43));
        LANES128(v50).n128_u32[0] = LANES128(v50).n128_u32[1];
        LODWORD(v51) = DWORD1(v51);
        v52 = LANES128(v48).n128_f32[1];
        if (LANES128(v48).n128_f32[1] >= -0x1.fffffe0000000p+127f) {
          v47 = LANES128(v48).n128_f32[1];
        }
        if (LANES128(v48).n128_f32[1] > 0x1.fffffe0000000p+127f) {
          v52 = 0x1.fffffe0000000p+127f;
        }
        if (LANES128(v49).n128_f32[1] >= v47) {
          v47 = LANES128(v49).n128_f32[1];
        }
        if (v52 >= LANES128(v49).n128_f32[1]) {
          v52 = LANES128(v49).n128_f32[1];
        }
        if (LANES128(v50).n128_f32[1] >= v47) {
          v47 = LANES128(v50).n128_f32[1];
        }
        if (v52 < LANES128(v50).n128_f32[1]) {
          LANES128(v50).n128_f32[0] = v52;
        }
        if (*((float*)&v51 + 1) >= v47) {
          v53 = *((float*)&v51 + 1);
        }
        else {
          v53 = v47;
        }
        if (LANES128(v50).n128_f32[0] >= *((float*)&v51 + 1)) {
          v54 = *((float*)&v51 + 1);
        }
        else {
          v54 = LANES128(v50).n128_f32[0];
        }
        (*(void (**)(float32x4_t*, long double))(LANES128(*(a1)).n128_u64[0] +
                                                 360))(a1, v51),
            v118 = COERCE_AS(__typeof__(v118),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v154 = COERCE_AS(__typeof__(v154),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v155 = COERCE_AS(__typeof__(v155),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v55 = LANES128(v158[0]).n128_f32[2] - LANES128(v158[0]).n128_f32[0];
        v56 = *(__attribute__((swiftcall)) void (**)(PSEUDO_X8, float32x4_t*))(
            LANES128(*(a1)).n128_u64[0] + 360),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v158[0] = (__typeof__(v158[0])){0};
        v56((void*)v158, a1),
            v118 = COERCE_AS(__typeof__(v118),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v119 = COERCE_AS(__typeof__(v119),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v154 = COERCE_AS(__typeof__(v154),
                             PSEUDO_REGISTER(__n128, "v1", "=w")),
            v155 = COERCE_AS(__typeof__(v155),
                             PSEUDO_REGISTER(__n128, "v2", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v66 =
                COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
        v57 = LANES128(a1[5]).n128_u8[11];
        v58 = 0x0.0p+0f;
        if ((v57 & 3) != 1) {
          if ((v57 & 3) != 2) {
            v58 = v55 * -0x1.0000000000000p-1f;
            v59 = LANES128(v158[0]).n128_f32[1] - LANES128(v158[0]).n128_f32[3];
            v60 = (v57 >> 2) & 3;
            if (v60 == 1) {
            LABEL_45:
              v61 = GameRoutine_56d270(a1),
              v118 = COERCE_AS(__typeof__(v118),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v119 = COERCE_AS(__typeof__(v119),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v154 = COERCE_AS(__typeof__(v154),
                               PSEUDO_REGISTER(__n128, "v1", "=w")),
              v155 = COERCE_AS(__typeof__(v155),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
              v24 = COERCE_AS(__typeof__(v24),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(__n128, "v2", "=w"));
              v62 = a4[1];
              LANES128(v63).n128_u64[0] = 0;
              LANES128(v63).n128_u32[2] = 0;
              v64 = a4[2];
              LANES128(v65).n128_u64[0] =
                  COERCE_UNSIGNED_INT(0x1.0000000000000p+0f);
              LANES128(v63).n128_u32[3] = HIDWORD(*(unsigned __int128*)a4);
              LANES128(v65).n128_u32[2] = 0;
              v68 = vaddq_f32(
                  v63,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v61, COERCE_FLOAT(*a4)), v66,
                          COERCE_AS(float32x2_t, LANES128(*(a4)).n128_u64[0]),
                          1),
                      v67, *a4, 2));
              LANES128(v63).n128_u64[0] = 0;
              LANES128(v63).n128_u32[2] = 0;
              v69 = vmlaq_lane_f32(
                  vmulq_n_f32(v61, LANES128(v62).n128_f32[0]), v66,
                  COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]), 1);
              v70 = vmlaq_lane_f32(
                  vmulq_n_f32(v61, LANES128(v64).n128_f32[0]), v66,
                  COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]), 1);
              LANES128(v66).n128_u64[0] = 0;
              LANES128(v66).n128_u32[2] = 0;
              LANES128(v63).n128_u32[3] = LANES128(v62).n128_u32[3];
              v71 = vmlaq_laneq_f32(v70, v67, v64, 2);
              LANES128(v66).n128_u32[3] = LANES128(v64).n128_u32[3];
              v72 = vaddq_f32(v63, vmlaq_laneq_f32(v69, v67, v62, 2));
              v73 = vaddq_f32(v66, v71);
              PSEUDO_LOW_LANE128(v71, n128_f32, v59 * 0x1.0000000000000p-1f);
              LANES128(v65).n128_f32[3] =
                  (float)(PSEUDO_UNFUSED(v55 * 0x1.0000000000000p-1f)) + v58;
              LANES128(v69).n128_u32[0] = 0;
              LANES128(v69).n128_u32[1] =
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
              LANES128(v74).n128_u64[0] = 0;
              LANES128(v74).n128_u32[2] = 0;
              LANES128(v74).n128_u32[3] = LANES128(v68).n128_u32[3];
              LANES128(v69).n128_u32[2] = 0;
              LANES128(v69).n128_f32[3] =
                  v157 - (float)(PSEUDO_UNFUSED(v59 * 0x1.0000000000000p-1f));
              v75 = vaddq_f32(
                  v74,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v65, LANES128(v68).n128_f32[0]), v69,
                          COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v68, 2));
              LANES128(v74).n128_u64[0] = 0;
              LANES128(v74).n128_u32[2] = 0;
              LANES128(v74).n128_u32[3] = LANES128(v72).n128_u32[3];
              v76 = vaddq_f32(
                  v74,
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v65, LANES128(v72).n128_f32[0]), v69,
                          COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v72, 2));
              v77 = vmlaq_lane_f32(
                  vmulq_n_f32(v65, LANES128(v73).n128_f32[0]), v69,
                  COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]), 1);
              LANES128(v69).n128_u64[0] = 0;
              LANES128(v69).n128_u32[2] = 0;
              LANES128(v69).n128_u32[3] = LANES128(v73).n128_u32[3];
              v78 = vaddq_f32(
                  v69,
                  vmlaq_laneq_f32(v77, COERCE_AS(float32x4_t, GameData_1a83090),
                                  v73, 2));
              v79 = vzip1q_s32(v75, v78);
              v80 = vzip2q_s32(v75, v78);
              v81 = vzip1q_s32(v76, COERCE_AS(int32x4_t, 0));
              v82 = vzip2q_s32(v76, COERCE_AS(int32x4_t, 0));
              v83 = vzip1q_s32(v79, v81);
              v84 = vzip2q_s32(v79, v81);
              v85 = vzip1q_s32(v80, v82);
              v93 = vzip2q_s32(v80, v82);
              v86 = vmulq_n_f32(v83, -(float)(v55 * 0x1.0000000000000p-1f));
              v87 = vmulq_n_f32(v83, v55 * 0x1.0000000000000p-1f);
              v88 = vaddq_f32(
                  v93,
                  vmlaq_f32(vmlsq_lane_f32(v87, v84,
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v71).n128_u64[0]),
                                           0),
                            COERCE_AS(float32x4_t, 0), v85));
              v89 = vaddq_f32(
                  v93,
                  vmlaq_f32(vmlsq_lane_f32(v86, v84,
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v71).n128_u64[0]),
                                           0),
                            COERCE_AS(float32x4_t, 0), v85));
              v90 = -0x1.fffffe0000000p+127f;
              v91 = vaddq_f32(
                  v93,
                  vmlaq_f32(vmlaq_n_f32(v86, v84, v59 * 0x1.0000000000000p-1f),
                            COERCE_AS(float32x4_t, 0), v85));
              v92 = vaddq_f32(
                  v93,
                  vmlaq_f32(vmlaq_n_f32(v87, v84, v59 * 0x1.0000000000000p-1f),
                            COERCE_AS(float32x4_t, 0), v85));
              LANES128(v93).n128_u32[0] = LANES128(v91).n128_u32[1];
              if (LANES128(v91).n128_f32[1] >= -0x1.fffffe0000000p+127f) {
                v90 = LANES128(v91).n128_f32[1];
              }
              if (LANES128(v91).n128_f32[1] > 0x1.fffffe0000000p+127f) {
                LANES128(v93).n128_f32[0] = 0x1.fffffe0000000p+127f;
              }
              if (LANES128(v92).n128_f32[1] >= v90) {
                v90 = LANES128(v92).n128_f32[1];
              }
              if (LANES128(v93).n128_f32[0] >= LANES128(v92).n128_f32[1]) {
                LANES128(v93).n128_f32[0] = LANES128(v92).n128_f32[1];
              }
              if (LANES128(v88).n128_f32[1] >= v90) {
                v90 = LANES128(v88).n128_f32[1];
              }
              if (LANES128(v93).n128_f32[0] >= LANES128(v88).n128_f32[1]) {
                LANES128(v93).n128_f32[0] = LANES128(v88).n128_f32[1];
              }
              if (LANES128(v89).n128_f32[1] >= v90) {
                v94 = LANES128(v89).n128_f32[1];
              }
              else {
                v94 = v90;
              }
              if (LANES128(v93).n128_f32[0] >= LANES128(v89).n128_f32[1]) {
                LANES128(v93).n128_f32[0] = LANES128(v89).n128_f32[1];
              }
              if ((LANES128(a1[17]).n128_u16[2] & 0x1000) != 0) {
                v95 = 0;
              }
              else {
                v95 = (LANES128(a1[17]).n128_u8[6] >> 2) & 3;
              }
              v96 = v94 - LANES128(v93).n128_f32[0];
              if (v95 == 2) {
                v94 = v54 + v96;
                LANES128(v93).n128_f32[0] = v54;
              }
              else if (v95 == 1) {
                LANES128(v93).n128_f32[0] = v53 - v96;
                v94 = v53;
              }
            LABEL_111:
              if (*a2 >= v94) {
                v94 = *a2;
              }
              *a2 = v94;
              v145 = *a3;
              if (LANES128(v93).n128_f32[0] < *a3) {
                v145 = LANES128(v93).n128_f32[0];
              }
              *a3 = v145;
              goto LABEL_116;
            }
          LABEL_43:
            v157 = v59;
            if (v60 != 2) {
              v157 = v59 * 0x1.0000000000000p-1f;
            }
            goto LABEL_45;
          }
          v58 = -v55;
        }
        v59 = LANES128(v158[0]).n128_f32[1] - LANES128(v158[0]).n128_f32[3];
        v60 = (v57 >> 2) & 3;
        if (v60 == 1) {
          goto LABEL_45;
        }
        goto LABEL_43;
      }
      v15 = -v12;
    }
    v16 = LANES128(a1[5]).n128_f32[1];
    v17 = (v13 >> 2) & 3;
    if (v17 == 1) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
LABEL_116:
  v146 = GameRoutine_56d270(a1),
  v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v147 = *a4;
  v148 = a4[1];
  LANES128(v149).n128_u64[0] = 0;
  LANES128(v149).n128_u32[2] = 0;
  v150 = a4[2];
  LANES128(v151).n128_u64[0] = 0;
  LANES128(v151).n128_u32[2] = 0;
  v152 = a1 + 2;
  LANES128(v149).n128_u32[3] = LANES128(v147).n128_u32[3];
  LANES128(v151).n128_u32[3] = LANES128(v150).n128_u32[3];
  v153 = LANES128(a1[2]).n128_u64[1];
  v156 = vaddq_f32(
      v149,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v146, LANES128(v147).n128_f32[0]), v154,
                         COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0]), 1),
          v155, v147, 2));
  LANES128(v149).n128_u64[0] = 0;
  LANES128(v149).n128_u32[2] = 0;
  LANES128(v149).n128_u32[3] = LANES128(v148).n128_u32[3];
  v158[0] = v156;
  v158[1] = vaddq_f32(
      v149,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v146, LANES128(v148).n128_f32[0]), v154,
                         COERCE_AS(float32x2_t, LANES128(v148).n128_u64[0]), 1),
          v155, v148, 2));
  for (v158[2] = vaddq_f32(
           v151, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v146, LANES128(v150).n128_f32[0]), v154,
                         COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0]), 1),
                     v155, v150, 2));
       (float32x4_t*)v153 != v152; v153 = *(_QWORD*)(v153 + 8)) {
    Alignment_56dd00((float32x4_t*)(v153 - 8), a2, a3, v158),
        v118 = COERCE_AS(__typeof__(v118), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v119 = COERCE_AS(__typeof__(v119), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v154 = COERCE_AS(__typeof__(v154), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v155 = COERCE_AS(__typeof__(v155), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v66 = COERCE_AS(__typeof__(v66), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(__n128, "v2", "=w"));
  }
}

#pragma GCC visibility pop
