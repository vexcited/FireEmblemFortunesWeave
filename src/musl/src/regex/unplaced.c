#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

unsigned __int64 musl_regex_787ac0(unsigned __int64 result, __int64 a2, char a3,
                                   __int64 a4, __int64 a5, __int64 a6);

unsigned __int64 musl_regex_787ac0(unsigned __int64 result, __int64 a2, char a3,
                                   __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  int* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned int* v30;
  __int64 v31;
  __int64* v32;
  unsigned int v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  unsigned int v37;
  _QWORD* v38;
  unsigned int* v39;
  __int64 v40;
  __int64* v41;
  unsigned int v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  unsigned int* v46;
  __int64 v47;
  __int64* v48;
  unsigned int v49;
  __int64 v50;
  __int64* v51;

  LODWORD(v6) = 0;
  if ((a3 & 8) != 0 || a6 < 0) {
    goto LABEL_56;
  }
  v7 = *(unsigned int*)(a4 + 52);
  if ((_DWORD)v7 == 0 || result == 0) {
    LODWORD(v6) = 0;
    goto LABEL_56;
  }
  v9 = *(_QWORD*)(a4 + 32);
  v10 = *(_DWORD*)(a4 + 80);
  v11 = result - 1;
  if (result - 1 >= (unsigned int)(v7 - 1)) {
    v11 = (unsigned int)(v7 - 1);
  }
  if (v11 == 0) {
    v23 = 0;
    goto LABEL_34;
  }
  v12 = (int*)(v9 + 20);
  v13 = (_QWORD*)(a2 + 16);
  v14 = 0;
  do {
    v15 = *(v12 - 5);
    v16 = a6;
    if ((_DWORD)v15 == v10) {
      v17 = *(v12 - 4);
      *(v13 - 2) = a6;
      v18 = a6;
      if ((_DWORD)v17 == v10) {
        goto LABEL_17;
      }
    }
    else {
      v16 = *(_QWORD*)(a5 + 8 * v15);
      v17 = *(v12 - 4);
      *(v13 - 2) = v16;
      v18 = a6;
      if ((_DWORD)v17 == v10) {
      LABEL_17:
        *(v13 - 1) = v18;
        if (v16 == -1) {
          goto LABEL_26;
        }
        goto LABEL_21;
      }
    }
    v18 = *(_QWORD*)(a5 + 8 * v17);
    *(v13 - 1) = v18;
    if (v16 != -1) {
    LABEL_21:
      if (v18 != -1) {
        v19 = *(v12 - 1);
        v20 = a6;
        if ((_DWORD)v19 == v10) {
          goto LABEL_23;
        }
        goto LABEL_27;
      }
    }
  LABEL_26:
    *(v13 - 2) = -1;
    *(v13 - 1) = -1;
    v19 = *(v12 - 1);
    v20 = a6;
    if ((_DWORD)v19 == v10) {
    LABEL_23:
      v21 = *v12;
      *v13 = v20;
      v22 = a6;
      if ((_DWORD)v21 == v10) {
        goto LABEL_24;
      }
      goto LABEL_28;
    }
  LABEL_27:
    v20 = *(_QWORD*)(a5 + 8 * v19);
    v21 = *v12;
    *v13 = v20;
    v22 = a6;
    if ((_DWORD)v21 == v10) {
    LABEL_24:
      v13[1] = v22;
      if (v20 == -1) {
        goto LABEL_13;
      }
      goto LABEL_29;
    }
  LABEL_28:
    v22 = *(_QWORD*)(a5 + 8 * v21);
    v13[1] = v22;
    if (v20 == -1) {
      goto LABEL_13;
    }
  LABEL_29:
    if (v22 == -1) {
    LABEL_13:
      *v13 = -1;
      v13[1] = -1;
    }
    v14 -= 2;
    v12 += 8;
    v13 += 4;
  } while (-(__int64)((v11 + 1) & 0xFFFFFFFFFFFFFFFELL) != v14);
  v23 = -v14;
  if ((v11 & 1) != 0) {
  LABEL_41:
    if (v7 >= result) {
      v29 = result;
    }
    else {
      v29 = v7;
    }
    if (v29 == 1) {
      goto LABEL_45;
    }
  LABEL_64:
    v6 = 0;
    do {
      v39 = *(unsigned int**)(v9 + 16 * v6 + 8);
      if (v39 != nullptr) {
        v40 = *v39;
        if ((v40 & 0x80000000) == 0) {
          v41 = (__int64*)(a2 + 16 * v6);
          v42 = 1;
          v43 = *v41;
          do {
            v44 = (__int64*)(a2 + 16 * v40);
            if (v43 < *v44 || v41[1] > v44[1]) {
              v43 = -1;
              *v41 = -1;
              v41[1] = -1;
            }
            v40 = v39[v42++];
          } while ((v40 & 0x80000000) == 0);
        }
      }
      v45 = (16 * v6) | 0x10;
      v46 = *(unsigned int**)(v9 + v45 + 8);
      if (v46 != nullptr) {
        v47 = *v46;
        if ((v47 & 0x80000000) == 0) {
          v48 = (__int64*)(a2 + v45);
          v49 = 1;
          v50 = *v48;
          do {
            v51 = (__int64*)(a2 + 16 * v47);
            if (v50 < *v51 || v48[1] > v51[1]) {
              v50 = -1;
              *v48 = -1;
              v48[1] = -1;
            }
            v47 = v46[v49++];
          } while ((v47 & 0x80000000) == 0);
        }
      }
      v6 += 2;
    } while (v6 != (v29 & 0xFFFFFFFE));
    goto LABEL_46;
  }
LABEL_34:
  v24 = (int*)(v9 + 16 * v23);
  v25 = a6;
  v26 = *v24;
  if ((_DWORD)v26 == v10) {
    v27 = (_QWORD*)(a2 + 16 * v23);
    v28 = v24[1];
    *v27 = a6;
    if ((_DWORD)v28 == v10) {
      goto LABEL_36;
    }
  LABEL_39:
    a6 = *(_QWORD*)(a5 + 8 * v28);
    v27[1] = a6;
    if (v25 != -1) {
      goto LABEL_40;
    }
  }
  else {
    v25 = *(_QWORD*)(a5 + 8 * v26);
    v27 = (_QWORD*)(a2 + 16 * v23);
    v28 = v24[1];
    *v27 = v25;
    if ((_DWORD)v28 != v10) {
      goto LABEL_39;
    }
  LABEL_36:
    v27[1] = a6;
    if (v25 != -1) {
    LABEL_40:
      if (a6 != -1) {
        goto LABEL_41;
      }
    }
  }
  *v27 = -1;
  v27[1] = -1;
  if (v7 >= result) {
    v29 = result;
  }
  else {
    v29 = v7;
  }
  if (v29 != 1) {
    goto LABEL_64;
  }
LABEL_45:
  v6 = 0;
LABEL_46:
  if ((v29 & 1) != 0) {
    v30 = *(unsigned int**)(v9 + 16 * v6 + 8);
    if (v30 != nullptr) {
      v31 = *v30;
      if ((v31 & 0x80000000) == 0) {
        v32 = (__int64*)(a2 + 16 * v6);
        v33 = 1;
        v34 = *v32;
        do {
          v35 = (__int64*)(a2 + 16 * v31);
          if (v34 < *v35 || v32[1] > v35[1]) {
            v34 = -1;
            *v32 = -1;
            v32[1] = -1;
          }
          v31 = v30[v33++];
        } while ((v31 & 0x80000000) == 0);
      }
    }
    LODWORD(v6) = v6 + 1;
  }
LABEL_56:
  v36 = (unsigned int)v6;
  if (result > (unsigned int)v6) {
    v37 = v6 + 1;
    do {
      v38 = (_QWORD*)(a2 + 16 * v36);
      *v38 = -1;
      v38[1] = -1;
      v36 = v37++;
    } while (result > v36);
  }
  return result;
}

#pragma GCC visibility pop
