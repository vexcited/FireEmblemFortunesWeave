#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__n128 GameRoutine_c62110(__int64, __int128*, __n128 result);
extern __int64 GameData_212c638;
float GrassInteractionModule_Unknown6(float32x4_t* a1, long double a2);

float GrassInteractionModule_Unknown6(float32x4_t* a1, long double a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __n128* v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  unsigned __int64 v10;
  int v11;
  float32x4_t* v12;
  __int128 v13;
  __n128 v14;
  float32x4_t v15;
  __int128 v16;
  float32x4_t v17;
  __n128 v18;
  float32x4_t v20;
  float32x4_t v21;

  v5 = (__n128*)LANES128(a1[3]).n128_u64[0];
  v4 = LANES128(a1[3]).n128_u64[1];
  v6 = LANES128(a1[4]).n128_u64[0];
  if (v5 != nullptr && v4 != 0 && v6 != 0) {
    v9 = LANES128(*(a1)).n128_u64[1];
    if (*(_BYTE*)(v9 + 289) == 1 && (*(_BYTE*)(v9 + 288) & 1) != 0 &&
        (*(_BYTE*)(v9 + 300) & 0xFD) != 1) {
      v10 = LANES128(*(a1)).n128_u64[1];
      while (1) {
        v10 = *(_QWORD*)(v10 + 736);
        if (v10 == 0) {
          break;
        }
        if (*(_BYTE*)(v10 + 289) != 1 || *(_BYTE*)(v10 + 288) != 1 ||
            (*(_BYTE*)(v10 + 300) & 0xFD) == 1) {
          return *(float*)&a2;
        }
      }
      v11 = LANES128(a1[1]).n128_u8[5];
      v21 = (__typeof__(v21)){0};
      if (v11 == 1) {
        v14 = v5[3];
        v12 = a1;
        LANES128(v21).n128_u64[0] = LANES128(v5[3]).n128_u64[0];
        *(_QWORD*)&v13 = LANES128(v21).n128_u64[0];
        *((_QWORD*)&v13 + 1) = LANES128(v14).n128_u32[2];
        LANES128(v14).n128_u32[0] = *(_DWORD*)(v4 + 52);
        v21 = COERCE_AS(float32x4_t, v13);
        if (*(float*)(v6 + 52) < LANES128(v14).n128_f32[0]) {
          LANES128(v14).n128_u32[0] = *(_DWORD*)(v6 + 52);
        }
        LANES128(v21).n128_f32[1] =
            LANES128(v14).n128_f32[0] + -0x1.99999a0000000p-4f;
        LANES128(v14).n128_u32[0] = *(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                     GameData_212c638 +
                                                                 32LL) -
                                                      8LL) +
                                           40LL) +
                                480LL) +
                     164LL);
        GameRoutine_c62110(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            GameData_212c638 +
                                                        32LL) -
                                             8LL) +
                                  40LL) +
                       480LL),
            (__int128*)&v21, v14);
        v15 = v21;
      }
      else {
        v16 = *(_OWORD*)(v9 + 304);
        LANES128(v21).n128_u64[0] = *(_QWORD*)(v9 + 304);
        LANES128(v15).n128_u64[0] = LANES128(v21).n128_u64[0];
        LANES128(v15).n128_u64[1] = DWORD2(v16);
        v17 = vsubq_f32(v15, a1[2]);
        v21 = v15;
        v18 = vmulq_f32(v17, v17);
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v18).n128_f32[0] <= 0x1.a36e2e0000000p-14f) {
        LABEL_24:
          LANES128(a1[2]).n128_u64[0] = LANES128(v15).n128_u64[0];
          a2 = *(long double*)&a1[2];
          *((_QWORD*)&a2 + 1) = LANES128(v15).n128_u32[2];
          *(long double*)&a1[2] = a2;
          return *(float*)&a2;
        }
        v12 = a1;
        v20 = v15;
        PSEUDO_LOW_LANE128(
            v18, n128_u32,
            *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                       GameData_212c638 +
                                                                   32LL) -
                                                        8LL) +
                                             40LL) +
                                  480LL) +
                       164LL));
        GameRoutine_c62110(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                            GameData_212c638 +
                                                        32LL) -
                                             8LL) +
                                  40LL) +
                       480LL),
            (__int128*)&v21, v18);
        v15 = v20;
      }
      a1 = v12;
      goto LABEL_24;
    }
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
