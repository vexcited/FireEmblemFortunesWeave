#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EmitterSet_5b66c0(__int64, int);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 eft_EmitterSetHandle_Get_5b6700(_DWORD*);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN GameData_2203180;
extern __int64 GameData_212e408[7];
extern __int64 GameData_2203170;
extern __int64 GameData_2203178;
float32x4_t EmitterSet_5b6560(__int64, float32x4_t*);
float32x4_t GameRoutine_b3bca0(float*, float32x4_t*);
float32x4_t GameRoutine_bcfba0(float32x4_t*);
void __attribute__((noreturn)) GameRoutine_8123d0();
__int64 NormalEmitter_Unknown3(float32x4_t* a1, __int64* a2);

__int64 NormalEmitter_Unknown3(float32x4_t* a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int64 v5;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  float32x4_t v13;
  char v14;
  __int64 v15;
  __int64 v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _BYTE* v25;
  int v26;
  char v27;
  int v28;
  __int64 v29;
  unsigned __int8 v30;
  char v31;
  char v32;
  unsigned __int64 v33;
  int v34;
  __int64 v35;
  unsigned __int8 v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int128* v44;
  __int128 v45;
  __int128 v46;
  __int128 v47;
  __int128 v48;
  __int128 v49;
  __int128 v50;
  __int128 v51;
  __int128 v52;
  __int64 v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x4_t v59;
  int32x4_t v60;
  int32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int32x4_t v69;
  float v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _OWORD* v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  int v83;
  bool v84;
  int v85;
  __int64 v86;
  __int64 v87;
  _BYTE* v88;
  _QWORD v89[4];

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v2 = LANES128(a1[29]).n128_u64[1];
  LANES128(a1[27]).n128_u8[13] = 0;
  if (v2 == 0 || LANES128(a1[30]).n128_u32[0] != *(_DWORD*)(v2 + 44)) {
    return 0;
  }
  v5 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (*(int*)(v5 + 380) < 1 || *(_BYTE*)(v5 + 12) == 0) {
    return 0;
  }
  if ((LANES128(a1[11]).n128_u8[4] & 1) != 0 ||
      (v8 = LANES128(a1[15]).n128_f32[0]) <= 0x0.0p+0f) {
    v9 = *(float*)(LANES128(a1[14]).n128_u64[0] + 16);
    v10 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
    *(_QWORD*)(v10 + 504) = LANES128(a1[16]).n128_u64[1];
    *(_QWORD*)(v10 + 496) = LANES128(a1[16]).n128_u64[0];
    if (LANES128(a1[29]).n128_u8[0] == 1) {
      v11 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v12 = LANES128(a1[28]).n128_u64[1];
      v13 = *(float32x4_t*)(v11 + 240);
      *(_QWORD*)(v11 + 288) = LANES128(a1[28]).n128_u64[0];
      *(_QWORD*)(v11 + 296) = v12;
      *(float32x4_t*)(v11 + 320) = vmulq_f32(*(float32x4_t*)(v11 + 288), v13);
      LANES128(a1[29]).n128_u8[0] = 0;
    }
    GameRoutine_bcfba0(a1),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
    if ((v14 & 1) != 0) {
      v15 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
      EmitterSet_5b6560(v15, a1 + 4),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
      LANES128(a1[26]).n128_u8[8] = 0;
    }
    v16 = *a2;
    if (v16 != 0 && LANES128(a1[20]).n128_u8[0] == 0) {
      goto LABEL_35;
    }
    if ((LANES128(a1[8]).n128_u8[1] & 1) != 0 ||
        (v17 = vmulq_f32(a1[3], a1[3]),
         LANES128(v17).n128_u64[0] =
             LANES64_OF(
                 vadd_f32(
                     COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
                 .n64_u64[0],
         LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
                 .n64_f32[0] > 0x1.0000000000000p-23f)) {
      if ((LANES128(a1[20]).n128_u8[0] & 1) != 0) {
        v18 = GameRoutine_b3bca0((float*)&a1[18], a1 + 4),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
        goto LABEL_24;
      }
    }
    else if ((LANES128(a1[20]).n128_u8[0] & 1) != 0) {
      v20 = a1[1];
      v21 = a1[2];
      v18 = vaddq_f32(v20, vmulq_f32(a1[18], v21));
      v19 = vaddq_f32(v20, vmulq_f32(a1[19], v21));
    LABEL_24:
      *(float32x4_t*)v89 = v18;
      *(float32x4_t*)&v89[2] = v19;
      v22 = *(_QWORD**)v16;
      v23 = *(_QWORD**)(v16 + 8);
      if (*(_QWORD**)v16 != v23) {
        v24 = GameData_212e408[0];
        while (1) {
          v25 = (_BYTE*)v22[2];
          if ((LANES128(a1[29]).n128_u8[1] & 1) != 0) {
            goto LABEL_31;
          }
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2203180,
                                    memory_order_acquire) &
               1) == 0) {
            v88 = v25;
            v26 = __cxa_guard_acquire(&GameData_2203180),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
            v25 = v88;
            if (v26 != 0) {
              GameData_2203170 = v24;
              GameData_2203178 = (__int64)"OcclusionCulling";
              __cxa_guard_release(&GameData_2203180),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              v25 = v88;
            }
          }
          if (*(_QWORD*)(*v22 + 8LL) != *(_QWORD*)(GameData_2203170 + 8)) {
          LABEL_31:
            if (v25[8] == 1 && ((*(__int64 (**)(_BYTE*, _QWORD*))(
                                    *(_QWORD*)v25 + 24LL))(v25, v89) &
                                1) == 0) {
              break;
            }
          }
          v22 += 3;
          if (v22 == v23) {
            goto LABEL_35;
          }
        }
        v27 = 1;
        if ((LANES128(a1[30]).n128_u8[10] & 1) != 0) {
          goto LABEL_44;
        }
      LABEL_36:
        if (LANES128(a1[15]).n128_i32[1] < 1) {
          v28 = LANES128(a1[21]).n128_u8[2];
          v29 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
          if (v28 == 1) {
            v30 = LANES128(a1[21]).n128_u8[0];
            v31 = v27 ^ 1;
            if (v9 == 0x0.0p+0f) {
              v31 = 0;
            }
          }
          else {
            v30 = LANES128(a1[21]).n128_u8[0];
            v31 = v9 != 0x0.0p+0f;
          }
          v32 = v31 & v30;
        LABEL_45:
          *(_BYTE*)(v29 + 10) = v32;
          v33 = LANES128(a1[9]).n128_u64[1];
          if (v33 != 0) {
            LANES128(a1[11]).n128_u8[5] = *(_BYTE*)(v33 + 33);
          }
          v34 = LANES128(a1[21]).n128_u8[1];
          v35 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
          v36 = LANES128(a1[11]).n128_u8[5];
          if (v34 != 0) {
            v36 &= v27 ^ 1;
          }
          *(_BYTE*)(v35 + 11) = v36;
          v37 = LANES128(a1[13]).n128_f32[3];
          v38 = LANES128(a1[26]).n128_f32[0];
          v89[0] = LANES128(a1[13]).n128_u64[0];
          v39 = v37 * v38;
          LODWORD(v89[1]) = LANES128(a1[13]).n128_u32[2];
          v40 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
          v41 = v89[0];
          *(float*)(v40 + 268) = v39;
          *(_QWORD*)(v40 + 256) = v41;
          *(_DWORD*)(v40 + 264) = v89[1];
          if ((v27 & 1) == 0 &&
              LANES128(a1[22]).n128_u64[0] != LANES128(a1[22]).n128_u64[1] &&
              (LANES128(a1[27]).n128_u8[12] & 1) != 0) {
            v42 = **(_DWORD**)(eft_EmitterSetHandle_Get_5b6700(
                                   &LANES128(a1[29]).n128_u32[2]) +
                               568),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
            if (v42 >= 1) {
              v43 = 0;
              v44 = (__int128*)GameData_212c2a0;
              do {
                v71 = eft_EmitterSetHandle_Get_5b6700(
                    &LANES128(a1[29]).n128_u32[2]),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
                v72 = EmitterSet_5b66c0(v71, v43),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
                if (v72 != 0) {
                  v73 = *(_QWORD*)(v72 + 160);
                  v74 = (_OWORD*)v72;
                  v75 = strlen(v73 + 16),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v76 = std___1___hash_memory(v73 + 16, v75),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v77 = LANES128(a1[22]).n128_u64[1];
                  v78 = v77;
                  while (v78 != LANES128(a1[22]).n128_u64[0]) {
                    v79 = *(_QWORD*)(v78 - 16);
                    v78 -= 16LL;
                    v77 -= 16LL;
                    if (v79 == v76) {
                      if (LANES128(a1[22]).n128_u64[1] != v77) {
                        if ((LANES128(a1[26]).n128_u8[8] & 1) != 0) {
                          v50 = *v44;
                          v49 = v44[1];
                          v52 =
                              *(_OWORD*)((char*)((char*)0x20LL) + (_QWORD)v44);
                          v51 = *(_OWORD*)((char*)((char*)0x20LL) +
                                           (_QWORD)v44 + 16);
                          v46 = *v44;
                          v45 = v49;
                          v48 = v52;
                          v47 = v51;
                        }
                        else {
                          v46 = v74[52];
                          v45 = v74[53];
                          v48 = v74[54];
                          v47 = v74[55];
                          v50 = v74[56];
                          v49 = v74[57];
                          v52 = v74[58];
                          v51 = v74[59];
                        }
                        v53 = *(_QWORD*)(v77 + 8);
                        LANES128(v54).n128_u64[0] = v46;
                        LANES128(v54).n128_u64[1] = DWORD2(v46);
                        LANES128(v55).n128_u64[0] = v45;
                        LANES128(v55).n128_u64[1] = DWORD2(v45);
                        LANES128(v56).n128_u64[0] = v48;
                        LANES128(v56).n128_u64[1] = DWORD2(v48);
                        LANES128(v57).n128_u64[0] = v47;
                        LANES128(v57).n128_u64[1] =
                            DWORD2(v47) | 0x3F80000000000000LL;
                        v58 = vzip1q_s32(v54, v56);
                        v59 = vzip2q_s32(v54, v56);
                        v60 = vzip1q_s32(v55, v57);
                        v61 = vzip2q_s32(v55, v57);
                        v62 = vzip1q_s32(v58, v60);
                        *(int32x4_t*)(v53 + 72) = vzip2q_s32(v58, v60);
                        LANES128(v58).n128_u64[0] = v50;
                        *(int32x4_t*)(v53 + 56) = v62;
                        *(int32x4_t*)(v53 + 88) = vzip1q_s32(v59, v61);
                        *(int32x4_t*)(v53 + 104) = vzip2q_s32(v59, v61);
                        LANES128(v58).n128_u64[1] = DWORD2(v50);
                        LANES128(v63).n128_u64[0] = v49;
                        LANES128(v63).n128_u64[1] = DWORD2(v49);
                        LANES128(v64).n128_u64[0] = v52;
                        LANES128(v64).n128_u64[1] = DWORD2(v52);
                        LANES128(v65).n128_u64[0] = v51;
                        LANES128(v65).n128_u64[1] =
                            DWORD2(v51) | 0x3F80000000000000LL;
                        v66 = vzip1q_s32(v58, v64);
                        v67 = vzip2q_s32(v58, v64);
                        v68 = vzip1q_s32(v63, v65);
                        v69 = vzip2q_s32(v63, v65);
                        *(int32x4_t*)(v53 + 120) = vzip1q_s32(v66, v68);
                        *(int32x4_t*)(v53 + 136) = vzip2q_s32(v66, v68);
                        *(int32x4_t*)(v53 + 152) = vzip1q_s32(v67, v69);
                        *(int32x4_t*)(v53 + 168) = vzip2q_s32(v67, v69);
                        if (LANES128(a1[27]).n128_u8[0] != 0) {
                          v70 = 0x1.0000000000000p+0f;
                        }
                        else {
                          v70 = 0x0.0p+0f;
                        }
                        *(float*)(v53 + 188) = v70;
                        *(_DWORD*)(v53 + 192) = LANES128(a1[27]).n128_u32[2];
                        *(_DWORD*)(v53 + 184) = LANES128(a1[27]).n128_u32[1];
                      }
                      break;
                    }
                  }
                }
                ++v43;
              } while (v43 != v42);
            }
            v80 = LANES128(a1[22]).n128_u64[0];
            v81 = LANES128(a1[22]).n128_u64[1];
            while (v80 != v81) {
              v82 = *(_QWORD*)(v80 + 8);
              if (v82 != 0) {
                v83 = *(_DWORD*)(v82 + 16);
                v84 = v83 < -1;
                v85 = ((_BYTE)v83 + 1) & 1;
                if (v84) {
                  v85 = -v85;
                }
                v86 = *(_QWORD*)(v82 + 8LL * v85);
                *(_DWORD*)(v82 + 16) = v85;
                v87 = (*(__int64 (**)(__int64))(*(_QWORD*)v86 + 56LL))(v86),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
                memcpy(v87, v82 + 56, 144),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                (*(void (**)(__int64))(*(_QWORD*)v86 + 64LL))(v86),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v80 += 16LL;
            }
            LANES128(a1[27]).n128_u8[13] = 1;
          }
          return 1;
        }
      LABEL_44:
        v29 = eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v32 = 1;
        goto LABEL_45;
      }
    LABEL_35:
      v27 = 0;
      if ((LANES128(a1[30]).n128_u8[10] & 1) != 0) {
        goto LABEL_44;
      }
      goto LABEL_36;
    }
    GameRoutine_8123d0(),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  LANES128(a1[15]).n128_f32[0] =
      v8 - *(float*)(*(_QWORD*)(LANES128(a1[14]).n128_u64[0] + 24) + 16LL);
  *(_WORD*)(eft_EmitterSetHandle_Get_5b6700(&LANES128(a1[29]).n128_u32[2]) +
            10) = 0,
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w"));
  return 1;
}

#pragma GCC visibility pop
