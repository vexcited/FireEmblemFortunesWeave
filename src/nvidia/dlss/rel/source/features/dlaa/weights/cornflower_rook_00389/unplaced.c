#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* NgxRoutine_2b2a0(_QWORD*, unsigned __int8*);
__int64 NgxRoutine_420(_QWORD);
__int64 NgxRoutine_baf10(__int64 result);
__int64 NgxRoutine_baf10_alt1(_QWORD) __asm__("NgxRoutine_baf10");
__int64 dlaa_template_2d450(__int64, int*, unsigned int*);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 printf_plt(const char*, ...);
void __attribute__((noreturn)) NgxRoutine_27cb0();
void __attribute__((noreturn)) cornflower_rook_00389_2b250();
__attribute__((swiftcall)) void
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cb50(
    PSEUDO_X8 x8_, unsigned __int8* result, unsigned __int64 a2,
    unsigned __int64 a3);
__int64
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2ccb0(
    __int64 a1);
__int64
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2ce00(
    __int64 a1);
__int64
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cfe0(
    __int64* a1);
__int64
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2d2f0(
    __int64 a1);
__int64
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2d3a0(
    __int64 a1);
__int64
nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2dfb0(
    __int64 a1);
__attribute__((swiftcall)) void

nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cb50(
    PSEUDO_X8 x8_, unsigned __int8* result, unsigned __int64 a2,
    unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  char* v12;
  __int64 v13;
  __int64 v14;

  v5 = *result;
  v6 = *((_QWORD*)result + 1);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  v7 = v6 >= a2;
  v8 = v6 - a2;
  if (!v7) {
    cornflower_rook_00389_2b250();
  }
  if ((v5 & 1) != 0) {
    v9 = *((unsigned __int8**)result + 2);
  }
  else {
    v9 = result + 1;
  }
  if (v8 >= a3) {
    v10 = a3;
  }
  else {
    v10 = v8;
  }
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    NgxRoutine_27cb0();
  }
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v14 = NgxRoutine_420(v13);
    a4[1] = v10;
    a4[2] = v14;
    *a4 = v13 | 1;
    v12 = (char*)v14;
  }
  else {
    *(_BYTE*)a4 = 2 * v10;
    v12 = (char*)a4 + 1;
    if (v10 == 0) {
      goto LABEL_20;
    }
  }
  result = (unsigned __int8*)memmove_plt(v12, &v9[a2], v10);
LABEL_20:
  v12[v10] = 0;
  {
    result;
    return;
  }
}

__int64

nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2ccb0(
    __int64 a1)
{
  int v2;
  bool v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 result;
  int v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  __int64* v20;
  int v21;

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 3232) == 1) {
    v2 = *(_DWORD*)(a1 + 764);
    v4 = v2 + 3;
    v3 = v2 < -3;
    v5 = v2 + 6;
    if (!v3) {
      v5 = v4;
    }
    v6 = v5 >> 2;
    v7 = *(_DWORD*)(a1 + 768);
    v8 = v7 + 3;
    v3 = v7 < -3;
    v9 = v7 + 6;
    if (!v3) {
      v9 = v8;
    }
    v10 = v9 >> 2;
    v11 = *(_QWORD*)(a1 + 88);
    v12 = *(_QWORD**)(v11 + 8);
    v13 = *(_QWORD*)(v11 + 16);
    if (v13 != 0) {
      goto LABEL_7;
    }
    goto LABEL_8;
  }
  v10 = 2 * *(_DWORD*)(a1 + 144);
  v17 = *(_QWORD*)(a1 + 88);
  v6 = 2 * *(_DWORD*)(a1 + 140);
  v18 = *(unsigned __int8*)(a1 + 832);
  v12 = *(_QWORD**)(v17 + 8);
  v13 = *(_QWORD*)(v17 + 16);
  if (v18 == 1) {
    if (v13 != 0) {
    LABEL_7:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
  LABEL_8:
    v14 = NgxRoutine_2b2a0(v12, (unsigned __int8*)(a1 + 32)),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = ((__int64 (*)(_QWORD, _QWORD))v14[5])(v6, v10),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 8) = result;
    *(_DWORD*)(a1 + 16) = v16;
    if (v13 == 0) {
      return result;
    }
    goto LABEL_16;
  }
  v19 = *(_DWORD*)(a1 + 520);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v20 = NgxRoutine_2b2a0(v12, (unsigned __int8*)(a1 + 32)),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = ((__int64 (*)(_QWORD, _QWORD, _QWORD))v20[5])(v6, v10, v19),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 8) = result;
  *(_DWORD*)(a1 + 16) = v21;
  if (v13 != 0) {
  LABEL_16:
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return NgxRoutine_baf10(v13);
    }
  }
  return result;
}

__int64

nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2ce00(
    __int64 a1)
{
  int v1;
  int v2;
  int v3;
  bool v6;
  int v7;
  bool v9;
  int v10;
  bool v11;
  int v12;
  bool v13;
  bool v14;
  int v15;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  bool v22;
  bool v23;
  bool v24;
  bool v25;
  int v27;
  int v28;
  int v29;

  v2 = *(_DWORD*)(a1 + 144);
  v1 = *(_DWORD*)(a1 + 148);
  v3 = *(_DWORD*)(a1 + 292);
  v6 = v1 == *(_DWORD*)(a1 + 532) && v3 == *(_DWORD*)(a1 + 520) &&
       *(_DWORD*)(a1 + 436) == v3 && v3 == *(_DWORD*)(a1 + 580);
  v7 = *(_DWORD*)(a1 + 340);
  v9 = v6 && v7 == *(_DWORD*)(a1 + 568) && *(_DWORD*)(a1 + 484) == v7;
  v10 = *(_DWORD*)(a1 + 140);
  v11 = v9 && *(_DWORD*)(a1 + 376) == *(_DWORD*)(a1 + 136);
  v12 = *(_DWORD*)(a1 + 336);
  v13 = !v11 || *(_DWORD*)(a1 + 380) <= v10;
  v14 = v13 || *(_DWORD*)(a1 + 384) <= v2;
  v15 = *(_DWORD*)(a1 + 388);
  v17 = !v14 && v15 <= v1;
  if ((v15 & 7) != 0) {
    v18 = 0;
  }
  else {
    v18 = v17;
  }
  if (*(_DWORD*)(a1 + 284) <= v10) {
    v18 = 0;
  }
  v19 = *(_DWORD*)(a1 + 332);
  if (*(_DWORD*)(a1 + 288) <= v2) {
    v18 = 0;
  }
  if (v19 <= v10) {
    v18 = 0;
  }
  if (v12 <= v2) {
    v18 = 0;
  }
  if (*(_BYTE*)(a1 + 3232) == 1) {
    v20 = *(_DWORD*)(a1 + 764);
    v13 = v20 < v19;
    v21 = *(_DWORD*)(a1 + 768);
    v22 = v13 || v21 < v12;
    v23 = !v22 && *(_DWORD*)(a1 + 772) == 4;
    v24 = v23 && *(_DWORD*)(a1 + 812) == v20;
    v25 = v24 && *(_DWORD*)(a1 + 816) == v21;
    if (!v25 || *(_DWORD*)(a1 + 820) != 4) {
      v18 = 0;
    }
  }
  v27 = *(_DWORD*)(a1 + 3252);
  if (v27 == 1) {
    v28 = 2;
  }
  else {
    v28 = *(_DWORD*)(a1 + 3252);
  }
  if (v27 == 1) {
    v29 = 3;
  }
  else {
    v29 = *(_DWORD*)(a1 + 3252);
  }
  if (*(_DWORD*)(a1 + 96) == 0) {
    v27 = 0;
    v28 = 0;
    v29 = 0;
  }
  if (*(_DWORD*)(a1 + 3236) != *(_DWORD*)(a1 + 524)) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 3240) != *(_DWORD*)(a1 + 528)) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 3244) != *(_DWORD*)(a1 + 572)) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 3248) != *(_DWORD*)(a1 + 576)) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 428) != 1) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 432) != 1) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 424) != 1) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 476) != 1) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 480) != 1) {
    v18 = 0;
  }
  if (*(_DWORD*)(a1 + 472) != 1) {
    v18 = 0;
  }
  if (v27 != *(_DWORD*)(a1 + 152)) {
    v18 = 0;
  }
  if (v28 != *(_DWORD*)(a1 + 536)) {
    v18 = 0;
  }
  if (v29 != *(_DWORD*)(a1 + 392)) {
    v18 = 0;
  }
  if (v27 != *(_DWORD*)(a1 + 344)) {
    v18 = 0;
  }
  if ((*(_DWORD*)(a1 + 584) | *(_DWORD*)(a1 + 296)) != 0) {
    return 0;
  }
  else {
    return v18;
  }
}

__int64

nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2cfe0(
    __int64* a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  _DWORD* v27;
  float v28;
  float v29;
  __int64 v30;
  __int64 result;
  int v32;
  int v33;

  if (((*(__int64 (**)(__int64*))(*a1 + 24))(a1) & 1) == 0) {
    return 2;
  }
  v2 = *((_DWORD*)a1 + 35);
  v3 = *((_DWORD*)a1 + 36);
  v4 = 2 * v2;
  v33 = *((unsigned __int8*)a1 + 833);
  v5 = *((_DWORD*)a1 + 37);
  v6 = *((_DWORD*)a1 + 130);
  v7 = *((_DWORD*)a1 + 142);
  v8 = *((_DWORD*)a1 + 97);
  v9 = *((_DWORD*)a1 + 191);
  v10 = 2 * v3;
  v32 = *((_DWORD*)a1 + 192);
  memset_plt(a1 + 111, 0, 656);
  if (*((_DWORD*)a1 + 214) == 0) {
    *((_DWORD*)a1 + 214) = v4 + *((_DWORD*)a1 + 213) - 1;
    if (*((_DWORD*)a1 + 216) != 0) {
      goto LABEL_4;
    }
  LABEL_13:
    *((_DWORD*)a1 + 216) = v10 + *((_DWORD*)a1 + 215) - 1;
    goto LABEL_4;
  }
  if (*((_DWORD*)a1 + 216) == 0) {
    goto LABEL_13;
  }
LABEL_4:
  v11 = a1[16];
  v12 = a1[46];
  v13 = a1[70];
  v14 = *((_DWORD*)a1 + 812);
  v15 = a1[64];
  *((_DWORD*)a1 + 232) = v2;
  *((_DWORD*)a1 + 233) = v3;
  *((_DWORD*)a1 + 235) = v5;
  *((_DWORD*)a1 + 237) = v4;
  *((_DWORD*)a1 + 238) = v10;
  *((_DWORD*)a1 + 236) = v6;
  *((_DWORD*)a1 + 242) = v8;
  *((_DWORD*)a1 + 288) = v4;
  *((_DWORD*)a1 + 289) = v10;
  *((_DWORD*)a1 + 291) = v6;
  *((_DWORD*)a1 + 293) = v4;
  *((_DWORD*)a1 + 294) = v10;
  *((_DWORD*)a1 + 292) = v7;
  *((_DWORD*)a1 + 348) = v9;
  *((_DWORD*)a1 + 244) = v5 * v3;
  a1[111] = v11;
  v16 = a1[52];
  a1[112] = v12;
  v17 = a1[22];
  a1[141] = v13;
  v18 = a1[58];
  a1[113] = v15;
  *((_DWORD*)a1 + 297) = v14;
  *((_DWORD*)a1 + 234) = 1;
  *((_DWORD*)a1 + 239) = 1;
  *((_DWORD*)a1 + 243) = 1;
  *((_DWORD*)a1 + 290) = 1;
  *((_DWORD*)a1 + 295) = 1;
  *((_DWORD*)a1 + 299) = 1;
  a1[114] = v16;
  LODWORD(v16) = *((_DWORD*)a1 + 809);
  a1[115] = v17;
  LODWORD(v17) = *((_DWORD*)a1 + 810);
  a1[142] = v18;
  v19 = a1[40];
  *((_DWORD*)a1 + 240) = v16;
  LODWORD(v16) = v17 * v16;
  a1[143] = v19;
  LODWORD(v19) = *((_DWORD*)a1 + 811);
  *((_DWORD*)a1 + 241) = v17;
  *((_DWORD*)a1 + 248) = v16;
  *((_DWORD*)a1 + 247) = v16 * v5;
  *((_DWORD*)a1 + 296) = v19;
  *((_DWORD*)a1 + 245) = v10 * v5;
  *((_DWORD*)a1 + 304) = v14 * v19;
  *((_DWORD*)a1 + 246) = v6 * v10;
  *((_DWORD*)a1 + 300) = v6 * v10;
  *((_DWORD*)a1 + 301) = v6 * v10;
  *((_DWORD*)a1 + 303) = v14 * v19 * v6;
  *((_DWORD*)a1 + 302) = v7 * v10;
  *((_DWORD*)a1 + 349) = v32;
  LODWORD(v17) = *((unsigned __int8*)a1 + 3232);
  *((_DWORD*)a1 + 334) = v33;
  *((_DWORD*)a1 + 350) = *((unsigned __int8*)a1 + 834);
  if ((_DWORD)v17 == 1) {
    v20 = (float)*((int*)a1 + 192);
    v21 = (float)*((int*)a1 + 155) / (float)*((int*)a1 + 191);
    *((float*)a1 + 354) = v21;
    *((float*)a1 + 355) = 1.0 / v21;
    v22 = (float)*((int*)a1 + 156) / v20;
    *((float*)a1 + 356) = v22;
    *((float*)a1 + 357) = 1.0 / v22;
  }
  v23 = *((_DWORD*)a1 + 209);
  *((_DWORD*)a1 + 362) = *((_DWORD*)a1 + 213);
  v24 = *((_DWORD*)a1 + 214);
  *((_DWORD*)a1 + 360) = v23;
  v25 = *((_DWORD*)a1 + 210);
  *((_DWORD*)a1 + 363) = v24;
  v26 = *(__int64*)((char*)a1 + 844);
  *((_DWORD*)a1 + 361) = v25;
  a1[179] = v26;
  a1[182] = *(__int64*)((char*)a1 + 860);
  *((_DWORD*)a1 + 366) = *((_DWORD*)a1 + 217);
  *((_DWORD*)a1 + 367) = *((_DWORD*)a1 + 218);
  a1[184] = 1065353216;
  *((_DWORD*)a1 + 370) = 0x40000000;
  v27 = (_DWORD*)a1[87];
  if (v27 != nullptr) {
    *((_DWORD*)a1 + 372) = *v27;
  }
  v28 = *((float*)a1 + 355);
  v29 = *((float*)a1 + 357);
  *((_DWORD*)a1 + 377) = 0;
  *(__int64*)((char*)a1 + 1492) = 0x3F8000003F800000LL;
  *(__int64*)((char*)a1 + 1500) = 1065353216;
  a1[192] = a1[28];
  v30 = *a1;
  *((float*)a1 + 368) = v28 * v29;
  (*(void (**)(__int64*))(v30 + 88))(a1);
  result = (*(__int64 (**)(__int64*))(*a1 + 104))(a1);
  if ((_DWORD)result == 0) {
    *((_BYTE*)a1 + 880) = 1;
  }
  return result;
}

__int64

nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2d2f0(
    __int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64 result;
  __int64* v7;

  v1 = *(_QWORD*)(a1 + 88);
  v3 = *(_QWORD**)(v1 + 40);
  v4 = *(_QWORD*)(v1 + 48);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = NgxRoutine_2b2a0(v3, (unsigned __int8*)(a1 + 32));
    result = ((__int64 (*)(__int64))v5[5])(a1 + 888);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return NgxRoutine_baf10_alt1(v4);
    }
  }
  else {
    v7 = NgxRoutine_2b2a0(v3, (unsigned __int8*)(a1 + 32));
    return ((__int64 (*)(__int64))v7[5])(a1 + 888);
  }
  return result;
}

__int64

nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2d3a0(
    __int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64* v5;

  if (*(_BYTE*)(a1 + 880) != 1) {
    return 2;
  }
  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(_QWORD**)(v1 + 56);
  v3 = *(_QWORD*)(v1 + 64);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = NgxRoutine_2b2a0(v2, (unsigned __int8*)(a1 + 32));
  ((void (*)(__int64, __int64, __int64))v5[5])(a1 + 888, a1 + 8, a1 + 20);
  if (v3 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) != 0) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  NgxRoutine_baf10_alt1(v3);
  return 0;
}

__int64

nvidia_dlss_rel_source_features_dlaa_weights_cornflower_rook_00389_2dfb0(
    __int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned int v2;
  int v3;
  unsigned int v5;
  int v6;

  v1 = a1 + 888;
  v6 = 0;
  v5 = 0;
  dlaa_template_2d450(a1 + 888, &v6, &v5);
  dlaa_template_2d450(v1, &v6, &v5);
  v2 = v5;
  v3 = v6;
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v6, v5,
             "conv_1_with_relu", *(_DWORD*)(v1 + v5), *(_DWORD*)(v1 + v5));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v3 + 1, v2 + 4,
             "<alignment>", *(_DWORD*)(v1 + v2 + 4), *(_DWORD*)(v1 + v2 + 4));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 1, v2 + 8,
             "dfn_img_tex", *(_QWORD*)(v1 + v2 + 8), *(_QWORD*)(v1 + v2 + 8));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 2, v2 + 16,
             "dfn_hist_tex", *(_QWORD*)(v1 + v2 + 16),
             *(_QWORD*)(v1 + v2 + 16));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 3, v2 + 24,
             "dfn_exp_tex", *(_QWORD*)(v1 + v2 + 24), *(_QWORD*)(v1 + v2 + 24));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 4, v2 + 32,
             "dfn_auto_exp_tex", *(_QWORD*)(v1 + v2 + 32),
             *(_QWORD*)(v1 + v2 + 32));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 5, v2 + 40,
             "dfn_out_img_srf", *(_QWORD*)(v1 + v2 + 40),
             *(_QWORD*)(v1 + v2 + 40));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 6, v2 + 48,
             "dfn_out_hist_srf", *(_QWORD*)(v1 + v2 + 48),
             *(_QWORD*)(v1 + v2 + 48));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v3 + 7, v2 + 56, "dfn_h",
             *(_DWORD*)(v1 + v2 + 56), *(_DWORD*)(v1 + v2 + 56));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v3 + 8, v2 + 60, "dfn_w",
             *(_DWORD*)(v1 + v2 + 60), *(_DWORD*)(v1 + v2 + 60));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v3 + 9, v2 + 64,
             "use_hdr", *(_DWORD*)(v1 + v2 + 64), *(_DWORD*)(v1 + v2 + 64));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v3 + 10, v2 + 68,
             "aniso_upscale_aware_ab", *(_DWORD*)(v1 + v2 + 68),
             *(_DWORD*)(v1 + v2 + 68));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 11, v2 + 72,
             "aniso_clamp_min_lambda", *(float*)(v1 + v2 + 72),
             *(_DWORD*)(v1 + v2 + 72));
  printf_plt("[%2d @ +0x%03x] %-32s: %16u (0x%08x)\n", v3 + 12, v2 + 76,
             "use_aniso_ajab", *(_DWORD*)(v1 + v2 + 76),
             *(_DWORD*)(v1 + v2 + 76));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 13, v2 + 80,
             "scaling_ratio_h", *(float*)(v1 + v2 + 80),
             *(_DWORD*)(v1 + v2 + 80));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 14, v2 + 84,
             "inv_scaling_ratio_h", *(float*)(v1 + v2 + 84),
             *(_DWORD*)(v1 + v2 + 84));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 15, v2 + 88,
             "scaling_ratio_w", *(float*)(v1 + v2 + 88),
             *(_DWORD*)(v1 + v2 + 88));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 16, v2 + 92,
             "inv_scaling_ratio_w", *(float*)(v1 + v2 + 92),
             *(_DWORD*)(v1 + v2 + 92));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 17, v2 + 96,
             "prev_jitter_offset_h", *(float*)(v1 + v2 + 96),
             *(_DWORD*)(v1 + v2 + 96));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 18, v2 + 100,
             "prev_jitter_offset_w", *(float*)(v1 + v2 + 100),
             *(_DWORD*)(v1 + v2 + 100));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 19, v2 + 104,
             "jitter_offset_h", *(float*)(v1 + v2 + 104),
             *(_DWORD*)(v1 + v2 + 104));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 20, v2 + 108,
             "jitter_offset_w", *(float*)(v1 + v2 + 108),
             *(_DWORD*)(v1 + v2 + 108));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 21, v2 + 112,
             "in_subrect_lb_h", *(_DWORD*)(v1 + v2 + 112),
             *(_DWORD*)(v1 + v2 + 112));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 22, v2 + 116,
             "in_subrect_ub_h", *(_DWORD*)(v1 + v2 + 116),
             *(_DWORD*)(v1 + v2 + 116));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 23, v2 + 120,
             "in_subrect_lb_w", *(_DWORD*)(v1 + v2 + 120),
             *(_DWORD*)(v1 + v2 + 120));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 24, v2 + 124,
             "in_subrect_ub_w", *(_DWORD*)(v1 + v2 + 124),
             *(_DWORD*)(v1 + v2 + 124));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 25, v2 + 128,
             "out_subrect_lb_h", *(_DWORD*)(v1 + v2 + 128),
             *(_DWORD*)(v1 + v2 + 128));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 26, v2 + 132,
             "out_subrect_lb_w", *(_DWORD*)(v1 + v2 + 132),
             *(_DWORD*)(v1 + v2 + 132));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 27, v2 + 136,
             "blending_factor", *(float*)(v1 + v2 + 136),
             *(_DWORD*)(v1 + v2 + 136));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 28, v2 + 140,
             "learned_gating_minimum", *(float*)(v1 + v2 + 140),
             *(_DWORD*)(v1 + v2 + 140));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 29, v2 + 144,
             "exposure_boost", *(float*)(v1 + v2 + 144),
             *(_DWORD*)(v1 + v2 + 144));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 30, v2 + 148,
             "auto_exposure_boost", *(float*)(v1 + v2 + 148),
             *(_DWORD*)(v1 + v2 + 148));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 31, v2 + 152,
             "pre_exposure_scale", *(float*)(v1 + v2 + 152),
             *(_DWORD*)(v1 + v2 + 152));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 32, v2 + 156,
             "inv_pre_exposure", *(float*)(v1 + v2 + 156),
             *(_DWORD*)(v1 + v2 + 156));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 33, v2 + 160,
             "exposure_low_reversible_factor", *(float*)(v1 + v2 + 160),
             *(_DWORD*)(v1 + v2 + 160));
  printf_plt("[%2d @ +0x%03x] %-32s: %16.3f (0x%08x)\n", v3 + 34, v2 + 164,
             "exposure_high_reversible_factor", *(float*)(v1 + v2 + 164),
             *(_DWORD*)(v1 + v2 + 164));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 35, v2 + 168,
             "skip_reverse_tonemap", *(_DWORD*)(v1 + v2 + 168),
             *(_DWORD*)(v1 + v2 + 168));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 36, v2 + 172,
             "apply_checkerboard_hack", *(_DWORD*)(v1 + v2 + 172),
             *(_DWORD*)(v1 + v2 + 172));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 37, v2 + 176,
             "hidden_history_use_tanh", *(_DWORD*)(v1 + v2 + 176),
             *(_DWORD*)(v1 + v2 + 176));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 38, v2 + 180,
             "debugOutputType", *(_DWORD*)(v1 + v2 + 180),
             *(_DWORD*)(v1 + v2 + 180));
  printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 39, v2 + 184,
             "debugOutputPtr", *(_QWORD*)(v1 + v2 + 184),
             *(_QWORD*)(v1 + v2 + 184));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 40, v2 + 192,
             "debugOutputWidth", *(_DWORD*)(v1 + v2 + 192),
             *(_DWORD*)(v1 + v2 + 192));
  printf_plt("[%2d @ +0x%03x] %-32s: %16d (0x%08x)\n", v3 + 41, v2 + 196,
             "debugShowNaNs", *(_DWORD*)(v1 + v2 + 196),
             *(_DWORD*)(v1 + v2 + 196));
  return printf_plt("[%2d @ +0x%03x] %-32s: %16llu (0x%016llx)\n", v3 + 42,
                    v2 + 200, "refnet_tmp_gmem", *(_QWORD*)(v1 + v2 + 200),
                    *(_QWORD*)(v1 + v2 + 200));
}

#pragma GCC visibility pop
