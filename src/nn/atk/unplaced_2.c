#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void nn_atk_2639a0(long double* a1, int* a2, int a3,
                   long double (*a4)(long double, long double, long double,
                                     long double, long double, long double,
                                     long double, long double),
                   _QWORD* a5);
void nn_atk_263bf0(unsigned int* a1, int* a2, int* a3,
                   long double (*a4)(int*, int*, int*, long double, long double,
                                     long double, long double, long double,
                                     long double, long double, long double),
                   int* a5, _QWORD* a6);
void nn_atk_263e70(unsigned int* a1, int* a2, int* a3, int* a4, int* a5,
                   int* a6, _QWORD* a7);
void nn_atk_2640d0(long double* a1, int* a2, int a3,
                   long double (*a4)(__int64, long double, long double,
                                     long double, long double, long double,
                                     long double, long double, long double),
                   __int64 a5, _QWORD* a6);
void nn_atk_264560(long double* a1, int* a2, int a3,
                   long double (*a4)(__int64, long double, long double,
                                     long double, long double, long double,
                                     long double, long double, long double),
                   __int64 a5, __int64 a6, _QWORD* a7);

void nn_atk_2639a0(long double* a1, int* a2, int a3,
                   long double (*a4)(long double, long double, long double,
                                     long double, long double, long double,
                                     long double, long double),
                   _QWORD* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v13;
  long double v14;
  long double v15;
  long double v16;
  long double v17;
  long double v18;
  long double v19;
  long double v20;
  long double v21;
  __int64* v22;
  _DWORD* i;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;

  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = v5;
  v39 = v6;
  v38 = v7;
  v37 = v8;
  v36 = v9;
  v35 = v10;
  v33 = a5;
  v13 = a2;
  v14 = a1[36];
  v15 = a1[37];
  v16 = a1[38];
  v17 = a1[39];
  v18 = a1[40];
  v19 = a1[41];
  v20 = a1[42];
  v21 = a1[43];
  if (a3 != 0 && *a2 > 0) {
    v13 = a2 + 1;
    if (a2[1] > 0) {
      v13 = a2 + 2;
      if (a2[2] == 1 || *v13 > 1) {
        v13 = a2 + 3;
        if (a2[3] == 1 || *v13 > 1) {
          v13 = a2 + 4;
          if (a2[4] == 1 || *v13 > 1) {
            v13 = a2 + 5;
            if (a2[5] == 1 || *v13 > 1) {
              v13 = a2 + 6;
              if (a2[6] == 1 || *v13 > 1) {
                v13 = a2 + 7;
                if (a2[7] == 1) {
                  v13 = a2 + 8;
                }
                else if (*v13 > 1) {
                  v13 = a2 + 8;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*v13 != 0) {
    v22 = &v32;
    for (i = a1 + 4;; i += 2) {
      if (*v13 == 1) {
        *(_DWORD*)v22 = *i;
      }
      else {
        if (*v13 <= 1) {
          break;
        }
        *v22 = *(_QWORD*)i;
      }
      ++v13;
      ++v22;
    }
  }
  a1[36] = a4(v14, v15, v16, v17, v18, v19, v20, v21),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_OWORD*)a1 + 37) = v24;
  *((_OWORD*)a1 + 38) = v25;
  *((_OWORD*)a1 + 39) = v26;
  *((_OWORD*)a1 + 40) = v27;
  *((_OWORD*)a1 + 41) = v28;
  *((_OWORD*)a1 + 42) = v29;
  *((_OWORD*)a1 + 43) = v30;
  *v33 = v31;
}

void nn_atk_263bf0(unsigned int* a1, int* a2, int* a3,
                   long double (*a4)(int*, int*, int*, long double, long double,
                                     long double, long double, long double,
                                     long double, long double, long double),
                   int* a5, _QWORD* a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v15;
  int* v16;
  long double v17;
  long double v18;
  long double v19;
  long double v20;
  long double v21;
  long double v22;
  long double v23;
  long double v24;
  int v25;
  unsigned int* v26;
  unsigned int* i;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v35 = COERCE_AS(__typeof__(v35),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = v6;
  v43 = v7;
  v42 = v8;
  v41 = v9;
  v40 = v10;
  v39 = v11;
  v37 = a6;
  v15 = a2;
  v16 = a5;
  v17 = *((long double*)a1 + 36);
  v18 = *((long double*)a1 + 37);
  v19 = *((long double*)a1 + 38);
  v20 = *((long double*)a1 + 39);
  v21 = *((long double*)a1 + 40);
  v22 = *((long double*)a1 + 41);
  v23 = *((long double*)a1 + 42);
  v24 = *((long double*)a1 + 43);
  if ((_DWORD)a3 != 0) {
    if (*a2 == 1) {
      v16 = (int*)*a1;
    }
    else {
      if (*a2 <= 1) {
        goto LABEL_26;
      }
      v16 = *(int**)a1;
    }
    v15 = a2 + 1;
    v25 = a2[1];
    if (v25 == 1) {
      a2 = (int*)a1[2];
    }
    else {
      if (v25 <= 1) {
        a2 = a5;
        goto LABEL_26;
      }
      a2 = *((int**)a1 + 1);
    }
    if (*++v15 == 1) {
      a3 = (int*)a1[4];
    }
    else {
      if (*v15 <= 1) {
        a3 = a5;
        goto LABEL_26;
      }
      a3 = *((int**)a1 + 2);
    }
    if (*++v15 > 0 && *++v15 > 0 && *++v15 > 0 && *++v15 > 0) {
      if (*++v15 == 1) {
        ++v15;
      }
      else if (*v15 > 1) {
        ++v15;
      }
    }
  }
LABEL_26:
  if (*v15 != 0) {
    v26 = (unsigned int*)&v36;
    for (i = a1 + 16;; i += 2) {
      if (*v15 == 1) {
        *v26 = *i;
      }
      else {
        if (*v15 <= 1) {
          break;
        }
        *(_QWORD*)v26 = *(_QWORD*)i;
      }
      ++v15;
      v26 += 2;
    }
  }
  *((long double*)a1 +
    36) = a4(v16, a2, a3, v17, v18, v19, v20, v21, v22, v23, v24),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v4", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v5", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v6", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v7", "=w")),
    v35 = COERCE_AS(__typeof__(v35),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_OWORD*)a1 + 37) = v28;
  *((_OWORD*)a1 + 38) = v29;
  *((_OWORD*)a1 + 39) = v30;
  *((_OWORD*)a1 + 40) = v31;
  *((_OWORD*)a1 + 41) = v32;
  *((_OWORD*)a1 + 42) = v33;
  *((_OWORD*)a1 + 43) = v34;
  *v37 = v35;
}

void nn_atk_263e70(unsigned int* a1, int* a2, int* a3, int* a4, int* a5,
                   int* a6, _QWORD* a7)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int* v16;
  int* v17;
  int* v18;
  long double v19;
  long double v20;
  long double v21;
  long double v22;
  long double v23;
  long double v24;
  long double v25;
  long double v26;
  int v27;
  unsigned int* v28;
  unsigned int* i;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = v7;
  v45 = v8;
  v44 = v9;
  v43 = v10;
  v42 = v11;
  v41 = v12;
  v39 = a7;
  v16 = a2;
  v17 = a4;
  v18 = a6;
  v19 = *((long double*)a1 + 36);
  v20 = *((long double*)a1 + 37);
  v21 = *((long double*)a1 + 38);
  v22 = *((long double*)a1 + 39);
  v23 = *((long double*)a1 + 40);
  v24 = *((long double*)a1 + 41);
  v25 = *((long double*)a1 + 42);
  v26 = *((long double*)a1 + 43);
  if ((_DWORD)a3 != 0) {
    if (*a2 == 1) {
      v18 = (int*)*a1;
    }
    else {
      if (*a2 <= 1) {
        goto LABEL_33;
      }
      v18 = *(int**)a1;
    }
    v16 = a2 + 1;
    v27 = a2[1];
    if (v27 == 1) {
      a2 = (int*)a1[2];
    }
    else {
      if (v27 <= 1) {
        a2 = a6;
        goto LABEL_33;
      }
      a2 = *((int**)a1 + 1);
    }
    if (*++v16 == 1) {
      a3 = (int*)a1[4];
    }
    else {
      if (*v16 <= 1) {
        a3 = a6;
        goto LABEL_33;
      }
      a3 = *((int**)a1 + 2);
    }
    if (*++v16 == 1) {
      a4 = (int*)a1[6];
    }
    else {
      if (*v16 <= 1) {
        a4 = a6;
        goto LABEL_33;
      }
      a4 = *((int**)a1 + 3);
    }
    if (*++v16 == 1) {
      a5 = (int*)a1[8];
    }
    else {
      if (*v16 <= 1) {
        a5 = a6;
        goto LABEL_33;
      }
      a5 = *((int**)a1 + 4);
    }
    if (*++v16 > 0) {
      if (*++v16 == 1) {
        ++v16;
      }
      else if (*v16 > 1) {
        ++v16;
      }
    }
  }
LABEL_33:
  if (*v16 != 0) {
    v28 = (unsigned int*)&v38;
    for (i = a1 + 16;; i += 2) {
      if (*v16 == 1) {
        *v28 = *i;
      }
      else {
        if (*v16 <= 1) {
          break;
        }
        *(_QWORD*)v28 = *(_QWORD*)i;
      }
      ++v16;
      v28 += 2;
    }
  }
  *((long double*)a1 +
    36) = ((long double (*)(int*, int*, int*, int*, int*, long double,
                            long double, long double, long double, long double,
                            long double, long double, long double))v17)(
      v18, a2, a3, a4, a5, v19, v20, v21, v22, v23, v24, v25, v26),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v4", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v5", "=w")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v6", "=w")),
    v36 = COERCE_AS(__typeof__(v36), PSEUDO_REGISTER(__n128, "v7", "=w")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_OWORD*)a1 + 37) = v30;
  *((_OWORD*)a1 + 38) = v31;
  *((_OWORD*)a1 + 39) = v32;
  *((_OWORD*)a1 + 40) = v33;
  *((_OWORD*)a1 + 41) = v34;
  *((_OWORD*)a1 + 42) = v35;
  *((_OWORD*)a1 + 43) = v36;
  *v39 = v37;
}

void nn_atk_2640d0(long double* a1, int* a2, int a3,
                   long double (*a4)(__int64, long double, long double,
                                     long double, long double, long double,
                                     long double, long double, long double),
                   __int64 a5, _QWORD* a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v14;
  long double v15;
  long double v16;
  long double v17;
  long double v18;
  long double v19;
  long double v20;
  long double v21;
  long double v22;
  __int64* v23;
  _DWORD* i;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41 = v6;
  v40 = v7;
  v39 = v8;
  v38 = v9;
  v37 = v10;
  v36 = v11;
  v34 = a6;
  v14 = a2;
  v15 = a1[36];
  v16 = a1[37];
  v17 = a1[38];
  v18 = a1[39];
  v19 = a1[40];
  v20 = a1[41];
  v21 = a1[42];
  v22 = a1[43];
  if (a3 != 0 && *a2 > 0) {
    v14 = a2 + 1;
    if (a2[1] == 1 || *v14 > 1) {
      v14 = a2 + 2;
      if (a2[2] == 1 || *v14 > 1) {
        v14 = a2 + 3;
        if (a2[3] == 1 || *v14 > 1) {
          v14 = a2 + 4;
          if (a2[4] == 1 || *v14 > 1) {
            v14 = a2 + 5;
            if (a2[5] == 1 || *v14 > 1) {
              v14 = a2 + 6;
              if (a2[6] == 1) {
                v14 = a2 + 7;
              }
              else if (*v14 > 1) {
                v14 = a2 + 7;
              }
            }
          }
        }
      }
    }
  }
  if (*v14 != 0) {
    v23 = &v33;
    for (i = a1 + 4;; i += 2) {
      if (*v14 == 1) {
        *(_DWORD*)v23 = *i;
      }
      else {
        if (*v14 <= 1) {
          break;
        }
        *v23 = *(_QWORD*)i;
      }
      ++v14;
      ++v23;
    }
  }
  a1[36] = a4(a5, v15, v16, v17, v18, v19, v20, v21, v22),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v32 = COERCE_AS(__typeof__(v32),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_OWORD*)a1 + 37) = v25;
  *((_OWORD*)a1 + 38) = v26;
  *((_OWORD*)a1 + 39) = v27;
  *((_OWORD*)a1 + 40) = v28;
  *((_OWORD*)a1 + 41) = v29;
  *((_OWORD*)a1 + 42) = v30;
  *((_OWORD*)a1 + 43) = v31;
  *v34 = v32;
}

void nn_atk_264560(long double* a1, int* a2, int a3,
                   long double (*a4)(__int64, long double, long double,
                                     long double, long double, long double,
                                     long double, long double, long double),
                   __int64 a5, __int64 a6, _QWORD* a7)
{

#pragma clang fp contract(off)
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int* v15;
  long double v16;
  long double v17;
  long double v18;
  long double v19;
  long double v20;
  long double v21;
  long double v22;
  long double v23;
  __int64* v24;
  _DWORD* i;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = v7;
  v41 = v8;
  v40 = v9;
  v39 = v10;
  v38 = v11;
  v37 = v12;
  v35 = a7;
  v15 = a2;
  v16 = a1[36];
  v17 = a1[37];
  v18 = a1[38];
  v19 = a1[39];
  v20 = a1[40];
  v21 = a1[41];
  v22 = a1[42];
  v23 = a1[43];
  if (a3 != 0 && *a2 > 0) {
    v15 = a2 + 1;
    if (a2[1] == 1 || *v15 > 1) {
      v15 = a2 + 2;
      if (a2[2] == 1 || *v15 > 1) {
        v15 = a2 + 3;
        if (a2[3] == 1 || *v15 > 1) {
          v15 = a2 + 4;
          if (a2[4] == 1 || *v15 > 1) {
            v15 = a2 + 5;
            if (a2[5] == 1 || *v15 > 1) {
              v15 = a2 + 6;
              if (a2[6] == 1) {
                v15 = a2 + 7;
              }
              else if (*v15 > 1) {
                v15 = a2 + 7;
              }
            }
          }
        }
      }
    }
  }
  if (*v15 != 0) {
    v24 = &v34;
    for (i = a1 + 4;; i += 2) {
      if (*v15 == 1) {
        *(_DWORD*)v24 = *i;
      }
      else {
        if (*v15 <= 1) {
          break;
        }
        *v24 = *(_QWORD*)i;
      }
      ++v15;
      ++v24;
    }
  }
  a1[36] = a4(a6, v16, v17, v18, v19, v20, v21, v22, v23),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v4", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v5", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v6", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v7", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_OWORD*)a1 + 37) = v26;
  *((_OWORD*)a1 + 38) = v27;
  *((_OWORD*)a1 + 39) = v28;
  *((_OWORD*)a1 + 40) = v29;
  *((_OWORD*)a1 + 41) = v30;
  *((_OWORD*)a1 + 42) = v31;
  *((_OWORD*)a1 + 43) = v32;
  *v35 = v33;
}

#pragma GCC visibility pop
