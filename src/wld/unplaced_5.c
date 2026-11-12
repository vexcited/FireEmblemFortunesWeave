#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 Value_b60(unsigned __int64*, __int64, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a82f80;
extern __int128 GameData_1a82fe0;
extern __int128 GameData_1a83080;
extern __int128 GameData_1a835d0;
extern __int128 GameData_1a837f0;
extern __int64 (*GameData_1fd2440[])();
extern __int64 (*gfx_light_BoxDirectionalLight_vtable[])();
extern __int64 GameData_212eb00[6];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_c53620();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 wld_6a0(unsigned __int64* a1, __int64 a2, unsigned __int64 a3);
float wld_c51ba0(__int64 a1, float a2);
__attribute__((swiftcall)) void wld_c52f90(PSEUDO_X8 x8_, __int64 a1);

__int64 wld_6a0(unsigned __int64* a1, __int64 a2, unsigned __int64 a3)
{
  int8x16_t v3;
  int8x16_t v4;
  __int64 v6;
  unsigned __int64* v7;
  __int64 v8;
  uint8x16_t v9;
  uint8x16_t v10;
  uint8x16_t v11;
  int8x16_t v12;
  int8x16_t v13;
  int8x16_t v14;
  int8x16_t v15;
  int8x16_t v16;
  int8x16_t v17;
  int8x16_t v18;
  int8x16_t v19;
  unsigned int v20;
  __int64 v21;
  int8x16_t* v22;
  int8x16_t v23;
  int8x16_t v24;
  int8x16_t v25;
  int8x16_t v26;
  unsigned int v27;
  __int64 v28;
  __int64 result;
  int8x16_t v30;
  int8x16_t v31;
  uint8x16_t v32;
  int8x16_t v33;
  int8x16_t v34;
  uint8x16_t v35;
  uint8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  unsigned __int64 v41;
  int8x16_t v42;
  uint8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  int8x16_t v46;
  int8x16_t v47;
  int8x16_t v48;
  int8x16_t v49;
  int8x16_t v50;
  uint8x16_t v51;
  uint8x16_t v52;
  int8x16_t v53;
  int8x16_t v54;
  uint8x16_t v55;
  int8x16_t v56;
  int8x16_t v57;
  int8x16_t v58;
  int8x16_t v59;

  v3 = (__typeof__(v3)){0};
  LANES128(v4).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
  LANES128(v4).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = COERCE_AS(uint8x16_t, GameData_1a835d0);
  LANES128(v10).n128_u64[0] = 0xDFDFDFDFDFDFDFDFLL;
  LANES128(v10).n128_u64[1] = 0xDFDFDFDFDFDFDFDFLL;
  LANES128(v11).n128_u64[0] = 0xEFEFEFEFEFEFEFEFLL;
  LANES128(v11).n128_u64[1] = 0xEFEFEFEFEFEFEFEFLL;
  LANES128(v12).n128_u64[0] = 0x8080808080808080LL;
  LANES128(v12).n128_u64[1] = 0x8080808080808080LL;
  while (1) {
    v21 = v8 + 64;
    if (v8 + 64 > a3) {
      break;
    }
    v22 = (int8x16_t*)(a2 + v8);
    v24 = *v22;
    v23 = v22[1];
    v26 = v22[2];
    v25 = v22[3];
    if (vminvq_s8(vorrq_s8(vorrq_s8(v23, *v22), vorrq_s8(v26, v25))) < 0) {
      v13 = vextq_s8(v3, v24, 0xFu);
      v14 = veorq_s8(
          vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080),
                              vandq_s8(v13, v4)),
                   vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80),
                                       vshrq_n_u8(v13, 4u)),
                            vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                                       vshrq_n_u8(v24, 4u)))),
          vandq_s8(veorq_s8(vcgtq_u8(vextq_s8(v3, v24, 0xEu), v10),
                            vcgtq_u8(vextq_s8(v3, v24, 0xDu), v11)),
                   v12));
      v15 = vextq_s8(v24, v23, 0xFu);
      v16 = veorq_s8(
          vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080),
                              vandq_s8(v15, v4)),
                   vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80),
                                       vshrq_n_u8(v15, 4u)),
                            vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                                       vshrq_n_u8(v23, 4u)))),
          vandq_s8(veorq_s8(vcgtq_u8(vextq_s8(v24, v23, 0xEu), v10),
                            vcgtq_u8(vextq_s8(v24, v23, 0xDu), v11)),
                   v12));
      v17 = vextq_s8(v23, v26, 0xFu);
      v18 = veorq_s8(
          vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080),
                              vandq_s8(v17, v4)),
                   vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80),
                                       vshrq_n_u8(v17, 4u)),
                            vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                                       vshrq_n_u8(v26, 4u)))),
          vandq_s8(veorq_s8(vcgtq_u8(vextq_s8(v23, v26, 0xEu), v10),
                            vcgtq_u8(vextq_s8(v23, v26, 0xDu), v11)),
                   v12));
      v19 = vextq_s8(v26, v25, 0xFu);
      v8 = v21;
      v20 = vmaxvq_u32(vorrq_s8(
          vorrq_s8(v16, v14),
          vorrq_s8(
              v18,
              veorq_s8(
                  vandq_s8(
                      vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080),
                                 vandq_s8(v19, v4)),
                      vandq_s8(
                          vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80),
                                     vshrq_n_u8(v19, 4u)),
                          vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                                     vshrq_n_u8(v25, 4u)))),
                  vandq_s8(veorq_s8(vcgtq_u8(vextq_s8(v26, v25, 0xEu), v10),
                                    vcgtq_u8(vextq_s8(v26, v25, 0xDu), v11)),
                           v12)))));
      v3 = v25;
      if (v20 != 0) {
        goto LABEL_6;
      }
    }
    else {
      v8 = v21;
      v27 = vmaxvq_u32(vcgtq_u8(v3, COERCE_AS(uint8x16_t, GameData_1a835d0)));
      v3 = v25;
      if (v27 != 0) {
      LABEL_6:
        if (a1 != nullptr) {
          v28 = v21 - 64;
          return Value_b60(a1, a2, v28, a3);
        }
        return 84;
      }
    }
  }
  v28 = v8 + 32;
  if (v8 + 32 <= a3) {
    v31 = *(int8x16_t*)(a2 + v8);
    v30 = *(int8x16_t*)(a2 + v8 + 16);
    if (vminvq_s8(vorrq_s8(v30, v31)) < 0) {
      v33 = vextq_s8(v3, v31, 0xFu);
      LANES128(v34).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v34).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v35).n128_u64[0] = 0xEFEFEFEFEFEFEFEFLL;
      LANES128(v35).n128_u64[1] = 0xEFEFEFEFEFEFEFEFLL;
      LANES128(v36).n128_u64[0] = 0xDFDFDFDFDFDFDFDFLL;
      LANES128(v36).n128_u64[1] = 0xDFDFDFDFDFDFDFDFLL;
      v37 = veorq_s8(vcgtq_u8(vextq_s8(v3, v31, 0xEu), v36),
                     vcgtq_u8(vextq_s8(v3, v31, 0xDu), v35));
      LANES128(v38).n128_u64[0] = 0x8080808080808080LL;
      LANES128(v38).n128_u64[1] = 0x8080808080808080LL;
      v39 = veorq_s8(
          vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080),
                              vandq_s8(v33, v34)),
                   vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80),
                                       vshrq_n_u8(v33, 4u)),
                            vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                                       vshrq_n_u8(v31, 4u)))),
          vandq_s8(v37, v38));
      v40 = vextq_s8(v31, v30, 0xFu);
      v32 = vorrq_s8(
          veorq_s8(
              vandq_s8(
                  vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080),
                             vandq_s8(v40, v34)),
                  vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80),
                                      vshrq_n_u8(v40, 4u)),
                           vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                                      vshrq_n_u8(v30, 4u)))),
              vandq_s8(veorq_s8(vcgtq_u8(vextq_s8(v31, v30, 0xEu), v36),
                                vcgtq_u8(vextq_s8(v31, v30, 0xDu), v35)),
                       v38)),
          v39);
    }
    else {
      v32 = vcgtq_u8(v3, COERCE_AS(uint8x16_t, GameData_1a835d0));
    }
    if (vmaxvq_u32(v32) != 0) {
      if (a1 != nullptr) {
        v28 = v8;
        return Value_b60(a1, a2, v28, a3);
      }
      return 84;
    }
  }
  else {
    v30 = v3;
    v28 = v8;
  }
  v41 = v28 + 16;
  if (v28 + 16 > a3) {
    v42 = v30;
    v41 = v28;
    goto LABEL_21;
  }
  v42 = *(int8x16_t*)(a2 + v28);
  if (vminvq_s8(v42) < 0) {
    v44 = vextq_s8(v30, v42, 0xFu);
    LANES128(v45).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
    LANES128(v45).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
    v46 = vshrq_n_u8(v44, 4u);
    v47 = vandq_s8(v44, v45);
    LANES128(v45).n128_u64[0] = 0xDFDFDFDFDFDFDFDFLL;
    LANES128(v45).n128_u64[1] = 0xDFDFDFDFDFDFDFDFLL;
    v48 = vandq_s8(
        vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080), v47),
        vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80), v46),
                 vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                            vshrq_n_u8(v42, 4u))));
    v49 = vcgtq_u8(vextq_s8(v30, v42, 0xEu), v45);
    LANES128(v45).n128_u64[0] = 0xEFEFEFEFEFEFEFEFLL;
    LANES128(v45).n128_u64[1] = 0xEFEFEFEFEFEFEFEFLL;
    v50 = veorq_s8(v49, vcgtq_u8(vextq_s8(v30, v42, 0xDu), v45));
    LANES128(v49).n128_u64[0] = 0x8080808080808080LL;
    LANES128(v49).n128_u64[1] = 0x8080808080808080LL;
    v43 = veorq_s8(v48, vandq_s8(v50, v49));
  }
  else {
    v43 = vcgtq_u8(v30, COERCE_AS(uint8x16_t, GameData_1a835d0));
  }
  if (vmaxvq_u32(v43) != 0) {
    if (a1 != nullptr) {
      return Value_b60(a1, a2, v28, a3);
    }
    return 84;
  }
LABEL_21:
  if (a3 <= v41) {
    v51 = v42;
  }
  else {
    v59 = (__typeof__(v59)){0};
    v58 = v42;
    memcpy((__int64)&v59, a2 + v41, a3 - v41);
    v51 = v59;
    v9 = COERCE_AS(uint8x16_t, GameData_1a835d0);
    if (vminvq_s8(v59) < 0) {
      v53 = vextq_s8(v58, v59, 0xFu);
      LANES128(v54).n128_u64[0] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v54).n128_u64[1] = 0xF0F0F0F0F0F0F0FLL;
      LANES128(v55).n128_u64[0] = 0xDFDFDFDFDFDFDFDFLL;
      LANES128(v55).n128_u64[1] = 0xDFDFDFDFDFDFDFDFLL;
      v56 = vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a83080),
                                vandq_s8(v53, v54)),
                     vandq_s8(vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82f80),
                                         vshrq_n_u8(v53, 4u)),
                              vqtbl1q_s8(COERCE_AS(int8x16_t, GameData_1a82fe0),
                                         vshrq_n_u8(v59, 4u))));
      v57 = vcgtq_u8(vextq_s8(v58, v59, 0xEu), v55);
      LANES128(v55).n128_u64[0] = 0xEFEFEFEFEFEFEFEFLL;
      LANES128(v55).n128_u64[1] = 0xEFEFEFEFEFEFEFEFLL;
      LANES128(v54).n128_u64[0] = 0x8080808080808080LL;
      LANES128(v54).n128_u64[1] = 0x8080808080808080LL;
      v52 = veorq_s8(
          v56, vandq_s8(veorq_s8(v57, vcgtq_u8(vextq_s8(v58, v59, 0xDu), v55)),
                        v54));
    }
    else {
      v52 = vcgtq_u8(v58, COERCE_AS(uint8x16_t, GameData_1a835d0));
    }
    if (vmaxvq_u32(v52) != 0) {
      if (v7 != nullptr) {
        return Value_b60(v7, v6, v41, a3);
      }
      return 84;
    }
  }
  if (vmaxvq_u32(vcgtq_u8(v51, v9)) != 0) {
    if (v7 != nullptr) {
      a1 = v7;
      a2 = v6;
      v28 = v41;
      return Value_b60(a1, a2, v28, a3);
    }
    return 84;
  }
  result = 0;
  if (v7 != nullptr) {
    *v7 = a3;
  }
  return result;
}

float wld_c51ba0(__int64 a1, float a2)
{
  float* v2;
  unsigned __int64 v3;
  float* v4;
  __int64 v5;
  float v6;
  float v7;
  float* v8;
  float v9;
  float v10;
  int v11;
  float v12;
  float result;
  bool v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v2 = *(float**)(a1 + 24);
  v3 =
      0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(a1 + 32) - (_QWORD)v2) >> 2);
  if ((int)v3 < 1) {
  LABEL_13:
    v2 += 3 * (int)v3 - 3;
  }
  else if (*v2 <= a2) {
    v4 = v2 + 3;
    v5 = 1;
    do {
      if ((v3 & 0x7FFFFFFF) + v5 == 2) {
        goto LABEL_13;
      }
      v6 = *v4;
      v4 += 3;
      v7 = v6;
      --v5;
    } while (v6 <= a2);
    v8 = &v2[3 * -(int)v5];
    v10 = *v8;
    v9 = v8[1];
    v11 = *((_DWORD*)v4 - 1);
    v12 = (float)(a2 - v10) / (float)(v7 - v10);
    result = *(v4 - 2);
    if (v11 > 1) {
      switch (v11) {
      case 2:
        v16 = v12 * v12;
        v19 = 0x1.0000000000000p+0f;
        break;
      case 3:
        v19 = 0x1.0000000000000p+0f;
        v16 = 0x1.0000000000000p+0f -
              (float)((float)(0x1.0000000000000p+0f - v12) *
                      (float)(0x1.0000000000000p+0f - v12));
        break;
      case 4:
        v14 = v12 < 0x1.0000000000000p-1f;
        v15 = (float)(v12 * -0x1.0000000000000p+1f) + 0x1.0000000000000p+1f;
        v16 = v12 * (float)(v12 + v12);
        v17 = (float)(PSEUDO_UNFUSED((float)(v15 * v15) *
                                     -0x1.0000000000000p-1f)) +
              0x1.0000000000000p+0f;
        if (!v14) {
          v16 = v17;
        }
        v18 = 0x1.0000000000000p+0f - v16;
        return (float)(PSEUDO_UNFUSED(result * v16)) + (float)(v9 * v18);
      default:
        return (float)(PSEUDO_UNFUSED(v12 * result)) +
               (float)(v9 * (float)(0x1.0000000000000p+0f - v12));
      }
      v18 = v19 - v16;
      return (float)(PSEUDO_UNFUSED(result * v16)) + (float)(v9 * v18);
    }
    if (v11 != 1) {
      return (float)(PSEUDO_UNFUSED(v12 * result)) +
             (float)(v9 * (float)(0x1.0000000000000p+0f - v12));
    }
    if (v12 < 0x1.0000000000000p+0f) {
      return v9;
    }
    return result;
  }
  return v2[1];
}

__attribute__((swiftcall)) void wld_c52f90(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _BYTE* v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  struct {
    _QWORD v43[2];
    const char* v44;
  } v43_;
  struct {
    char v45[16];
    __int64 v46;
  } v45_;
  struct {
    _QWORD v47[2];
    char* v48;
  } v47_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      352, 16, 0);
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 134) = 0;
  *(_QWORD*)v5 = GameData_1fd2440;
  *(_QWORD*)(v5 + 126) = 0;
  *(_QWORD*)(v5 + 100) = 0x3F80000000000000LL;
  *(_QWORD*)(v5 + 108) = 0x3F8000003F800000LL;
  *(_QWORD*)(v5 + 142) = 0;
  *(_QWORD*)(v5 + 150) = 0;
  *(_QWORD*)(v5 + 158) = 0;
  *(_QWORD*)(v5 + 262) = 0;
  *(_QWORD*)(v5 + 270) = 0;
  *(_WORD*)(v5 + 124) = 257;
  *(_QWORD*)(v5 + 166) = 0;
  *(_QWORD*)(v5 + 174) = 0;
  *(_QWORD*)(v5 + 182) = 0;
  *(_QWORD*)(v5 + 190) = 0;
  *(_QWORD*)(v5 + 198) = 0;
  *(_QWORD*)(v5 + 206) = 0;
  *(_QWORD*)(v5 + 214) = 0;
  *(_QWORD*)(v5 + 32) = gfx_light_BoxDirectionalLight_vtable;
  v6 = v5 + 32;
  *(_QWORD*)(v5 + 222) = 0;
  *(_QWORD*)(v5 + 230) = 0;
  *(_QWORD*)(v5 + 238) = 0;
  *(_QWORD*)(v5 + 246) = 0;
  *(_QWORD*)(v5 + 254) = 0;
  *(_WORD*)(v5 + 278) = 0;
  *(_QWORD*)(v5 + 8) = 0;
  *(_OWORD*)(v5 + 80) = GameData_1a837f0;
  *(_OWORD*)(v5 + 288) = GameData_1a82c50;
  *(_OWORD*)(v5 + 304) = GameData_1a82d00;
  *(_QWORD*)(v5 + 320) = 0x40A0000040A00000LL;
  *(_QWORD*)(v5 + 328) = 0x3F0000003F000000LL;
  *(_DWORD*)(v5 + 336) = 1036831949;
  *(_DWORD*)(v5 + 116) = 1065353216;
  *(_DWORD*)(v5 + 120) = 1;
  *(_DWORD*)(v5 + 96) = 1142947840;
  *(_DWORD*)(v5 + 64) = 1084227584;
  *(_DWORD*)(v5 + 40) = 4;
  v7 = *(unsigned int*)(a1 + 56);
  strcpy(v45_.v45, "\nlight");
  *(_DWORD*)(a1 + 56) = v7 + 1;
  std___1_to_string_1a0a790((void*)(v43_.v43), v7);
  if ((v43_.v43[0] & 1) != 0) {
    v8 = v43_.v44;
  }
  else {
    v8 = (char*)v43_.v43 + 1;
  }
  if ((v43_.v43[0] & 1) != 0) {
    v9 = v43_.v43[1];
  }
  else {
    v9 = (unsigned __int64)LOBYTE(v43_.v43[0]) >> 1;
  }
  v10 = (__int64*)GameRoutine_1a09ce0((__int64)v45_.v45, v8, v9);
  v11 = *v10;
  v12 = v10[1];
  *v10 = 0;
  v10[1] = 0;
  v47_.v47[0] = v11;
  v47_.v47[1] = v12;
  v13 = v10[2];
  v10[2] = 0;
  v47_.v48 = (char*)v13;
  if ((v43_.v43[0] & 1) != 0 && v43_.v44 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v14, (__int64)v43_.v44);
  }
  if ((v45_.v45[0] & 1) != 0 && v45_.v46 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v15, v45_.v46);
  }
  v16 = 0;
  if ((v47_.v47[0] & 1) != 0) {
    v17 = v47_.v48;
  }
  else {
    v17 = (char*)v47_.v47 + 1;
  }
  while (1) {
    v18 = &v17[v16];
    v19 = v5 + v16;
    if (v17[v16] == 0) {
      v25 = (_BYTE*)(v19 + 216);
      goto LABEL_40;
    }
    *(_BYTE*)(v19 + 216) = v17[v16];
    if (v18[1] == 0) {
      v25 = (_BYTE*)(v5 + v16 + 217);
      goto LABEL_40;
    }
    *(_BYTE*)(v19 + 217) = v18[1];
    v20 = v5 + v16;
    if (v18[2] == 0) {
      v25 = (_BYTE*)(v20 + 218);
      goto LABEL_40;
    }
    *(_BYTE*)(v20 + 218) = v18[2];
    if (v18[3] == 0) {
      v25 = (_BYTE*)(v5 + v16 + 219);
      goto LABEL_40;
    }
    *(_BYTE*)(v20 + 219) = v18[3];
    v21 = v5 + v16;
    if (v18[4] == 0) {
      v25 = (_BYTE*)(v21 + 220);
      goto LABEL_40;
    }
    *(_BYTE*)(v21 + 220) = v18[4];
    if (v18[5] == 0) {
      v25 = (_BYTE*)(v5 + v16 + 221);
      goto LABEL_40;
    }
    *(_BYTE*)(v21 + 221) = v18[5];
    v22 = v5 + v16;
    if (v18[6] == 0) {
      v25 = (_BYTE*)(v22 + 222);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 222) = v18[6];
    if (v18[7] == 0) {
      v25 = (_BYTE*)(v5 + v16 + 223);
      goto LABEL_40;
    }
    *(_BYTE*)(v22 + 223) = v18[7];
    v23 = v5 + v16;
    v24 = (unsigned __int8)v18[8];
    if (v24 == 0) {
      break;
    }
    v16 += 9;
    *(_BYTE*)(v23 + 224) = v24;
    if ((_DWORD)v16 == 63) {
      v25 = (_BYTE*)(v5 + v16 + 216);
      goto LABEL_40;
    }
  }
  v25 = (_BYTE*)(v23 + 224);
LABEL_40:
  *v25 = 0;
  v26 = *(__int64**)(a1 + 8);
  v27 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v26 >= v27) {
    v29 = (__int64)v26 - *(_QWORD*)a1;
    v30 = (v29 >> 4) + 1;
    if (v30 >> 60 != 0) {
      GameRoutine_c53620();
    }
    v31 = v27 - *(_QWORD*)a1;
    if (v31 >> 3 > v30) {
      v30 = v31 >> 3;
    }
    if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF0LL) {
      v32 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v30;
    }
    if (v32 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v33 = fw_memory_HeapManager_Allocate(*v4, 16 * v32, 16, 0);
    v34 = (__int64*)(v33 + v29);
    v35 = v33 + 16 * v32;
    *v34 = v6;
    v34[1] = v5;
    v28 = v33 + v29 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v36 = *(_QWORD*)a1;
    v37 = *(_QWORD*)(a1 + 8) - *(_QWORD*)a1;
    v38 = (char*)v34 - v37;
    memcpy((__int64)v34 - v37, *(_QWORD*)a1, v37);
    *(_QWORD*)a1 = v38;
    *(_QWORD*)(a1 + 8) = v28;
    *(_QWORD*)(a1 + 16) = v35;
    if (v36 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v39, v36);
    }
  }
  else {
    *v26 = v6;
    v26[1] = v5;
    v28 = (__int64)(v26 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 8) = v28;
  v40 = GameData_212eb00[0];
  a2[3] = v6;
  a2[4] = 0;
  *a2 = v40 + 16;
  a2[1] = v6;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  a2[2] = v5;
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v41 = v47_.v47[0];
  a2[4] = v6;
  if ((v41 & 1) != 0 && v47_.v48 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v42, (__int64)v47_.v48);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
}

#pragma GCC visibility pop
