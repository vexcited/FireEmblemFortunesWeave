#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_193d0e0(__int64 result, double, double, double, double,
                            double, double, int64x2_t, int64x2_t, __int64,
                            unsigned int*, unsigned __int64, __int64, __int64,
                            float32x4_t*, __int64, unsigned int, unsigned int,
                            unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
char* GameRoutine_193e500(char* result, double, double, int32x4_t, double,
                          int32x4_t, __int64, signed __int32, __int64,
                          int32x2_t*);
extern __int128 GameData_1a82f00;
__int64 mocull_19421e0(__int64 a1, _QWORD* a2, float32x4_t* a3);

__int64 mocull_19421e0(__int64 a1, _QWORD* a2, float32x4_t* a3)
{
  unsigned __int64 v3;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  signed __int32 v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int* v13;
  int v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned int* v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  int* v27;
  int v28;
  int v29;
  int v30;
  int v31;
  float32x4_t v32;
  float32x4_t v33;
  __int64 v34;
  float32x4_t v35;
  float32x4_t v36;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  double v47;
  double v48;
  int32x4_t v49;
  double v50;
  int32x4_t v51;
  double v52;
  int64x2_t v53;
  int64x2_t v54;
  unsigned int v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  unsigned int v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned int v65;
  unsigned int v66;
  unsigned int* v67;
  unsigned int v68;
  bool v69;
  int v70;
  unsigned __int64 v71;
  bool v72;
  int v73;
  _QWORD* v74;
  __int64 v75;
  unsigned int v76;
  unsigned __int64 v77;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  int32x2_t* v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  __int64 v88;
  __int64 v89;
  unsigned int v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v95;
  _QWORD* v96;
  unsigned int v97;
  __int64 v98;
  char* v99;
  unsigned __int64 v100;
  signed __int32 v101;
  __int64 v102;
  int v103;
  int v104;
  float32x4_t v105[9];
  int v106;

  v3 = LANES128(*(a3)).n128_u64[0];
  if (*(_BYTE*)(LANES128(*(a3)).n128_u64[0] + 32) == 1) {
    v6 = *(char**)v3;
    v7 = 0xAAAAAAAAAAAAAAABLL *
         ((__int64)(*(_QWORD*)(v3 + 8) - *(_QWORD*)v3) >> 4);
  }
  else {
    v6 = nullptr;
    v7 = 0;
  }
  v8 = LANES128(a3[2]).n128_i64[0];
  v9 = *(_DWORD*)(v3 + 24);
  v10 = *(_DWORD*)(v3 + 28);
  atomic_store(0, (unsigned int*)(v8 + 20));
  atomic_store(0, (unsigned int*)(v8 + 24));
  if (*(_DWORD*)(v8 + 12) != 0) {
    v11 = 0;
    v12 = 0;
    do {
      ++v12;
      atomic_store(0xFFFFFFFF, (unsigned int*)(*(_QWORD*)(v8 + 88) + v11 + 4));
      v13 = (unsigned int*)(*(_QWORD*)(v8 + 88) + v11);
      v11 += 64;
      atomic_store(0xFFFFFFFF, v13);
    } while (v12 < *(unsigned int*)(v8 + 12));
  }
  v14 = 32 * v9;
  v15 = 4 * v10;
  if (*(_DWORD*)(v8 + 8) != 0) {
    v16 = 0;
    v17 = 0;
    do {
      ++v17;
      v18 = *(_QWORD*)(v8 + 32) + v16;
      v16 += 24;
      atomic_store(0, (unsigned int*)(v18 + 16));
      atomic_store(0, (unsigned __int8*)(v18 + 20));
    } while (v17 < *(unsigned int*)(v8 + 8));
  }
  v19 = (unsigned int*)LANES128(a3[2]).n128_u64[0];
  v20 = 0;
  v22 = *v19;
  v21 = v19[1];
  v23 = (v14 / *v19) & 0xFFFFFFE0;
  v24 = (v15 / v21) & 0xFFFFFFFC;
  do {
    if (v22 != 0) {
      v25 = v20 + 1;
      v26 = 0;
      do {
        v27 = (int*)(*((_QWORD*)v19 + 4) + 24LL * (v26 + v20 * v22));
        v28 = v26 * v23;
        ++v26;
        *v27 = v28;
        if (v26 == *v19) {
          v29 = 32 * v9;
        }
        else {
          v29 = v26 * v23;
        }
        v27[1] = v20 * v24;
        v27[2] = v29;
        if (v25 == v19[1]) {
          v30 = v15;
        }
        else {
          v30 = (v20 + 1) * v24;
        }
        v27[3] = v30;
        v22 = *v19;
      } while (v26 < *v19);
      v21 = v19[1];
    }
    else {
      v25 = v20 + 1;
    }
    ++v20;
  } while (v25 < v21);
  v31 = LANES128(a3[7]).n128_i32[0];
  v32 = a3[3];
  v33 = a3[4];
  v101 = v9;
  v34 = LANES128(a3[2]).n128_i64[0];
  v100 = v7;
  v102 = 0;
  v103 = 32 * v9;
  v104 = v15;
  v98 = v34;
  v99 = v6;
  v106 = v31;
  v105[0] = v32;
  v105[1] = v33;
  v35 = a3[6];
  v105[2] = a3[5];
  v105[3] = v35;
  LANES128(v36).n128_f32[0] = 0x1.0000000000000p+0 - (float)(2.0 / (float)v14);
  LANES128(v35).n128_f32[0] = -LANES128(v36).n128_f32[0];
  LANES128(v36).n128_u32[1] = 0;
  LANES128(v35).n128_u32[1] = 0;
  LANES128(v36).n128_u32[2] = 0;
  LANES128(v35).n128_u32[2] = 0;
  LANES128(v36).n128_u32[3] = 0x1.0000000000000p+0;
  LANES128(v35).n128_u32[3] = 0x1.0000000000000p+0;
  v105[4] = COERCE_AS(float32x4_t, GameData_1a82f00);
  v105[5] = v36;
  LANES128(v32).n128_u32[0] = 0;
  LANES128(v36).n128_u32[0] = 0;
  LANES128(v32).n128_f32[1] = 0x1.0000000000000p+0 - (float)(2.0 / (float)v15);
  LANES128(v36).n128_f32[1] = -LANES128(v32).n128_f32[1];
  LANES128(v32).n128_u32[2] = 0;
  LANES128(v36).n128_u32[2] = 0;
  LANES128(v32).n128_u32[3] = 0x1.0000000000000p+0;
  v105[6] = v35;
  v105[7] = v32;
  v105[8] = v36;
  if (v7 != 0) {
    v37 = 3 * v7;
    v38 = 48 * v7 - 48;
    v39 = v6;
    if ((~(v38 / 0x30) & 3) != 0) {
      v40 = -(__int64)(((unsigned __int8)(v38 / 0x30) + 1) & 3);
      v39 = v6;
      do {
        *((_QWORD*)v39 + 4) = 0;
        *((_QWORD*)v39 + 5) = 0;
        *(_QWORD*)v39 = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 1) = 0xBF800000BF800000LL;
        v69 = __CFADD__(v40++, 1);
        *((_QWORD*)v39 + 2) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 3) = 0x7F7FFFFF7F7FFFFFLL;
        v39 += 48;
      } while (!v69);
    }
    if (v38 >= 0x90) {
      v41 = &v6[16 * v37];
      do {
        *((_QWORD*)v39 + 4) = 0;
        *((_QWORD*)v39 + 5) = 0;
        *(_QWORD*)v39 = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 1) = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 2) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 3) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 10) = 0;
        *((_QWORD*)v39 + 11) = 0;
        *((_QWORD*)v39 + 6) = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 7) = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 8) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 9) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 16) = 0;
        *((_QWORD*)v39 + 17) = 0;
        *((_QWORD*)v39 + 12) = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 13) = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 14) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 15) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 22) = 0;
        *((_QWORD*)v39 + 23) = 0;
        *((_QWORD*)v39 + 18) = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 19) = 0xBF800000BF800000LL;
        *((_QWORD*)v39 + 20) = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD*)v39 + 21) = 0x7F7FFFFF7F7FFFFFLL;
        v39 += 192;
      } while (v39 != v41);
    }
    v34 = LANES128(a3[2]).n128_i64[0];
  }
  atomic_store(1u, (unsigned __int8*)(v34 + 16));
  v42 = *a2;
  v43 = LANES128(a3[1]).n128_i64[0];
  v44 = *(_DWORD*)(LANES128(a3[2]).n128_u64[0] + 12);
  v45 = v43 + 16 * LANES128(a3[1]).n128_u64[1];
  nn_os_WaitLightEvent(*a2 + 496LL);
  memcpy(v42 + 512, &v98, 208);
  nn_os_ClearLightEvent(v42 + 496);
  nn_os_SignalLightEvent(v42 + 484);
  v46 = a2[1];
  v96 = a2;
  nn_os_WaitLightEvent(v46 + 496);
  memcpy(v46 + 512, &v98, 208);
  nn_os_ClearLightEvent(v46 + 496);
  nn_os_SignalLightEvent(v46 + 484);
  v55 = v44;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v97 = v55;
LABEL_34:
  while (2) {
    while (2) {
      v60 = atomic_load((unsigned int*)(LANES128(a3[2]).n128_u64[0] + 20));
      v61 = atomic_load((unsigned int*)(LANES128(a3[2]).n128_u64[0] + 24));
      v62 = LANES128(a3[2]).n128_i64[0];
      if (*(_DWORD*)(v62 + 8) != 0) {
        v63 = 16;
        v64 = 0;
        v65 = 0;
        v66 = v60;
        do {
          v67 = (unsigned int*)(*(_QWORD*)(v62 + 32) + v63);
          v63 += 24;
          v68 = atomic_load(v67);
          if (v68 == v65) {
            v65 |= 1 << v64;
          }
          v69 = v68 >= v66;
          v70 = 1 << v64++;
          if (v68 < v66) {
            v66 = v68;
          }
          v62 = LANES128(a3[2]).n128_i64[0];
          if (!v69) {
            v65 = v70;
          }
          v71 = *(unsigned int*)(v62 + 8);
        } while (v64 < v71);
        v72 = (_DWORD)v71 == 0;
      }
      else {
        v65 = 0;
        v72 = true;
        v66 = v60;
      }
      v73 = v66 - v60 + v55;
      if (v73 < 1) {
        if (v61 < v60 && v61 - v66 < v55) {
          v90 = v61;
          atomic_compare_exchange_strong((atomic_uint* volatile)(v62 + 24),
                                         &v90, v61 + 1);
          if (v90 == v61) {
            v91 = *(_QWORD*)(v62 + 88) +
                  ((unsigned __int64)(v61 % *(_DWORD*)(v62 + 12)) << 6);
            if (*(_DWORD*)(v62 + 8) != 0) {
              v92 = 0;
              v93 = 0;
              do {
                ++v93;
                *(_DWORD*)(*(_QWORD*)(v91 + 48) + v92 + 4) = 0;
                *(_DWORD*)(*(_QWORD*)(v91 + 48) + v92) = 0;
                v92 += 24;
              } while (v93 < *(unsigned int*)(v62 + 8));
            }
            atomic_store(v61, (unsigned int*)v91);
            GameRoutine_193d0e0(
                *(_QWORD*)(v91 + 8), v47, v48, LANES128(v49).n128_f64[0], v50,
                LANES128(v51).n128_f64[0], v52, v53, v54, *(_QWORD*)(v91 + 16),
                *(unsigned int**)(v91 + 24), *(_QWORD*)(v91 + 32),
                *(_QWORD*)(v91 + 48), *(_QWORD*)(v91 + 56), v105,
                (__int64)&v102, *(_DWORD*)LANES128(a3[2]).n128_u64[0],
                *(_DWORD*)(LANES128(a3[2]).n128_u64[0] + 4),
                *(_DWORD*)(v91 + 40));
            atomic_store(
                v61,
                (unsigned int*)(*(_QWORD*)(LANES128(a3[2]).n128_u64[0] + 88) +
                                ((unsigned __int64)(v61 %
                                                    *(_DWORD*)(LANES128(a3[2])
                                                                   .n128_u64
                                                                       [0] +
                                                               12))
                                 << 6) +
                                4));
            v55 = v97;
          }
          continue;
        }
        if (v72) {
          continue;
        }
        v79 = 0;
        v80 = 0;
        while (1) {
          if (((v65 >> v80) & 1) != 0) {
            v81 = *(_QWORD*)(v62 + 32);
            v82 = (int32x2_t*)(v81 + v79);
            if ((atomic_exchange((atomic_uchar* volatile)(v81 + v79 + 20), 1u) &
                 1) == 0) {
              if (v81 != 0) {
                v83 = v81 + v79;
                v84 = atomic_load((unsigned int*)(v81 + v79 + 16));
                v85 = LANES128(a3[2]).n128_i64[0];
                v86 = v84 % *(_DWORD*)(v85 + 12);
                v87 = atomic_load(
                    (unsigned int*)(*(_QWORD*)(v85 + 88) + (v86 << 6) + 4));
                if (v84 == v87) {
                  v88 = *(_QWORD*)(v85 + 64);
                  if (v88 != 0) {
                    v89 =
                        v88 +
                        24LL * (unsigned int)(v80 + *(_DWORD*)(v85 + 8) * v86);
                    if (*(_DWORD*)(v89 + 4) != 0) {
                      v95 = v83;
                      GameRoutine_193e500(v99, v47, v48, v49, v50, v51, v100,
                                          v101, v89, v82);
                      v83 = v95;
                      v55 = v97;
                    }
                    atomic_fetch_add((atomic_uint* volatile)(v83 + 16), 1u);
                  }
                }
                atomic_store(0, (unsigned __int8*)&v82[2] + 4);
              }
              goto LABEL_34;
            }
            v62 = LANES128(a3[2]).n128_i64[0];
          }
          ++v80;
          v79 += 24;
          if (v80 >= *(unsigned int*)(v62 + 8)) {
            goto LABEL_34;
          }
        }
      }
      break;
    }
    if (v43 == v45) {
      goto LABEL_81;
    }
    while (v57 == 0) {
      v74 = *(_QWORD**)v43;
      if ((*(_BYTE*)(*(_QWORD*)v43 + 24LL) & 1) != 0) {
        v59 = v74[4];
        v56 = v74[7];
        v58 = (v74[5] - v59) >> 4;
        v57 = (v74[8] - v56) >> 2;
        break;
      }
      v57 = 0;
      v43 += 16;
    LABEL_50:
      if (v43 == v45) {
        goto LABEL_33;
      }
    }
    v75 = LANES128(a3[2]).n128_i64[0];
    v76 = atomic_load((unsigned int*)(v75 + 20));
    v77 = *(_QWORD*)(v75 + 88) +
          ((unsigned __int64)(v76 % *(_DWORD*)(v75 + 12)) << 6);
    *(_QWORD*)(v77 + 8) = v59;
    *(_QWORD*)(v77 + 16) = v58;
    *(_QWORD*)(v77 + 24) = v56;
    if (v57 < 0x181) {
      v43 += 16;
      v56 = 0;
      *(_QWORD*)(v77 + 32) = v57;
      *(_DWORD*)(v77 + 40) = 31;
      v57 = 0;
    }
    else {
      *(_QWORD*)(v77 + 32) = 384;
      *(_DWORD*)(v77 + 40) = 31;
      v57 -= 384LL;
      v56 += 1536;
    }
    atomic_store(v76 + 1, (unsigned int*)(v75 + 20));
    if (--v73 >= 1) {
      goto LABEL_50;
    }
  LABEL_33:
    if (v43 != v45) {
      continue;
    }
    break;
  }
  v62 = LANES128(a3[2]).n128_i64[0];
LABEL_81:
  atomic_store(0, (unsigned __int8*)(v62 + 16));
  nn_os_WaitLightEvent(*v96 + 496LL);
  return nn_os_WaitLightEvent(v96[1] + 496LL);
}

#pragma GCC visibility pop
