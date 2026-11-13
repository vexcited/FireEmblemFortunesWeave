#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_194cb90(__int64* result, __int64*, __int64*, __int64*,
                             __int64*, __int64);
bool gfx_194cd60(__int64* a1, __int64* a2, __int64 a3);

bool gfx_194cd60(__int64* a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  float v9;
  float v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  int v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v49;

  v3 = ((__int64)a2 - (__int64)a1) >> 3;
  if (v3 > 2) {
    if (v3 == 3) {
      v6 = a1 + 1;
      v7 = a2 - 1;
      v8 = **(_QWORD**)(a3 + 8);
      v9 = *(float*)((char*)a1 + v8 + 8);
      v10 = *(float*)((char*)a2 + v8 - 8);
      if (v9 >= *(float*)((char*)a1 + v8)) {
        if (v10 < v9) {
          v27 = a1[1];
          a1[1] = *v7;
          *v7 = v27;
          if (*(float*)((char*)v6 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)a1 + **(_QWORD**)(a3 + 8))) {
            v28 = *a1;
            *a1 = a1[1];
            a1[1] = v28;
          }
        }
      }
      else {
        v11 = *a1;
        if (v10 >= v9) {
          *a1 = a1[1];
          a1[1] = v11;
          if (*(float*)((char*)v7 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v6 + **(_QWORD**)(a3 + 8))) {
            *v6 = *v7;
            *v7 = v11;
          }
        }
        else {
          *a1 = *v7;
          *v7 = v11;
        }
      }
      return true;
    }
    if (v3 == 4) {
      v19 = a1 + 1;
      v20 = a1 + 2;
      v21 = a2 - 1;
      v22 = **(_QWORD**)(a3 + 8);
      v23 = *(float*)((char*)a1 + v22 + 8);
      v24 = *(float*)((char*)a1 + v22 + 16);
      if (v23 >= *(float*)((char*)a1 + v22)) {
        if (v24 < v23) {
          v33 = a1[1];
          v32 = a1[2];
          a1[1] = v32;
          a1[2] = v33;
          if (*(float*)((char*)v19 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)a1 + **(_QWORD**)(a3 + 8))) {
            v34 = *a1;
            *a1 = v32;
            a1[1] = v34;
          }
        }
      }
      else {
        v25 = *a1;
        if (v24 >= v23) {
          *a1 = a1[1];
          a1[1] = v25;
          if (*(float*)((char*)v20 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)v19 + **(_QWORD**)(a3 + 8))) {
            v43 = *v20;
            *v20 = v25;
            *v19 = v43;
          }
        }
        else {
          v26 = a1[2];
          a1[2] = v25;
          *a1 = v26;
        }
      }
      if (*(float*)((char*)v21 + **(_QWORD**)(a3 + 8)) <
          *(float*)((char*)v20 + **(_QWORD**)(a3 + 8))) {
        v44 = *v20;
        *v20 = *v21;
        *v21 = v44;
        if (*(float*)((char*)v20 + **(_QWORD**)(a3 + 8)) <
            *(float*)((char*)v19 + **(_QWORD**)(a3 + 8))) {
          v46 = a1[1];
          v45 = a1[2];
          a1[1] = v45;
          a1[2] = v46;
          if (*(float*)((char*)v19 + **(_QWORD**)(a3 + 8)) <
              *(float*)((char*)a1 + **(_QWORD**)(a3 + 8))) {
            v47 = *a1;
            *a1 = v45;
            a1[1] = v47;
          }
        }
      }
      return true;
    }
    if (v3 != 5) {
      goto LABEL_13;
    }
    GameRoutine_194cb90(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
    return true;
  }
  if ((unsigned __int64)v3 < 2) {
    return true;
  }
  if (v3 == 2) {
    v4 = a2 - 1;
    if (*(float*)((char*)a2 + **(_QWORD**)(a3 + 8) - 8) <
        *(float*)((char*)a1 + **(_QWORD**)(a3 + 8))) {
      v5 = *a1;
      *a1 = *v4;
      *v4 = v5;
    }
    return true;
  }
LABEL_13:
  v12 = a1 + 1;
  v13 = a1 + 2;
  v14 = **(_QWORD**)(a3 + 8);
  v15 = *(float*)((char*)a1 + v14 + 8);
  v16 = *(float*)((char*)a1 + v14 + 16);
  if (v15 >= *(float*)((char*)a1 + v14)) {
    if (v16 < v15) {
      v30 = a1[1];
      v29 = a1[2];
      a1[1] = v29;
      a1[2] = v30;
      if (*(float*)((char*)v12 + **(_QWORD**)(a3 + 8)) <
          *(float*)((char*)a1 + **(_QWORD**)(a3 + 8))) {
        v31 = *a1;
        *a1 = v29;
        a1[1] = v31;
      }
    }
  }
  else {
    v17 = *a1;
    if (v16 >= v15) {
      *a1 = a1[1];
      a1[1] = v17;
      if (*(float*)((char*)v13 + **(_QWORD**)(a3 + 8)) <
          *(float*)((char*)v12 + **(_QWORD**)(a3 + 8))) {
        v35 = *v13;
        *v13 = v17;
        *v12 = v35;
      }
    }
    else {
      v18 = a1[2];
      a1[2] = v17;
      *a1 = v18;
    }
  }
  v36 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v37 = 0;
  v38 = 0;
  while (1) {
    if (*(float*)((char*)v36 + **(_QWORD**)(a3 + 8)) <
        *(float*)((char*)v13 + **(_QWORD**)(a3 + 8))) {
      v40 = *v36;
      v41 = v37;
      v49 = *v36;
      do {
        v42 = (char*)a1 + v41;
        *(__int64*)((char*)a1 + v41 + 24) = *(__int64*)((char*)a1 + v41 + 16);
        if (v41 == -16) {
          v39 = a1;
          goto LABEL_35;
        }
        v41 -= 8;
      } while (*(float*)((char*)&v49 + **(_QWORD**)(a3 + 8)) <
               *(float*)&v42[**(_QWORD**)(a3 + 8) + 8]);
      v39 = (__int64*)((char*)a1 + v41 + 24);
    LABEL_35:
      ++v38;
      *v39 = v40;
      if (v38 == 8) {
        return v36 + 1 == a2;
      }
    }
    v13 = v36++;
    v37 += 8;
    if (v36 == a2) {
      return true;
    }
  }
}

#pragma GCC visibility pop
