#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

__int64 SdkRoutine_416160(__int64 result, __int64, __int64, signed int,
                          __int64);
__int64 SdkRoutine_419d40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);
__int64 SdkRoutine_47b000(__int64, _QWORD*);
__int64 SdkRoutine_47b780(__int64, _QWORD*);
__int64 SdkRoutine_48a320(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_48a500(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_85d750(_QWORD);
__int64 SdkRoutine_86aa30(void);

__int64 SdkHr_41abc0(__int64 a1, unsigned __int16 a2, unsigned int a3)
{
  __int64 v3;
  __int64* v5;
  unsigned int v6;
  __int16 v7;
  unsigned __int16 v8;
  unsigned __int16 v9;
  __int64* v10;
  __int64 v11;
  unsigned int v12;
  char v13;
  int v14;
  char v15;
  int v16;
  _BOOL4 v18;
  _BYTE v20[2];
  __int16 v21;
  unsigned __int16 v22;
  _BYTE v23[4];
  _BYTE v24[4];
  __int64 v25;

  v3 = *(_QWORD*)(a1 + 16);
  *(_DWORD*)(a1 + 72) = 0;
  if (v3 == 0) {
    *(_DWORD*)(a1 + 72) = 305;
    return a3;
  }
  v5 = *(__int64**)(a1 + 32);
  if (v5 == nullptr) {
    a3 = 0;
    *(_DWORD*)(a1 + 72) = 315;
    return a3;
  }
  v6 = (unsigned __int16)a3;
  v18 = (unsigned __int16)a3 != 0;
  while (2) {
    if (v6 < 2) {
      return v18;
    }
    v7 = *(_WORD*)(v3 + 32);
    if (v7 == 0) {
      return v6;
    }
    v8 = 0;
    v9 = 0;
    v10 = v5;
    do {
      v11 = *(_QWORD*)(*v10 + 56);
      if (v11 == 0) {
        v16 = 303;
      LABEL_30:
        *(_DWORD*)(a1 + 72) = v16;
        return 0;
      }
      SdkRoutine_416160(a1, v3, *v10, v6 << 16, (__int64)v20);
      if (*(_DWORD*)(a1 + 72) != 0) {
        return 0;
      }
      if (v21 != 0) {
        if (v21 < 0) {
          v12 = v6 - ((-v21 & 0xFF00u) >> 8);
        }
        else {
          v12 = v6 + ((v21 & 0xFF00u) >> 8);
        }
        v13 = *(_BYTE*)(v11 + 36);
        v25 = 0;
        if (((unsigned __int8)v12 & ((v13 & 0x40) != 0)) == 1) {
        LABEL_14:
          --v12;
        }
      }
      else {
        v12 = v6;
        v15 = *(_BYTE*)(v11 + 36);
        v25 = 0;
        if (((unsigned __int8)v6 & ((v15 & 0x40) != 0)) == 1) {
          goto LABEL_14;
        }
      }
      SdkRoutine_419d40(a1, v11, v12 << 16, (char*)&v25 + 4, &v25, v24, v23);
      if (*(_DWORD*)(a1 + 72) != 0) {
        v16 = 405;
        goto LABEL_30;
      }
      --v7;
      v10 += 3;
      v14 = v22 << 16;
      if (v8 <= (unsigned int)(HIDWORD(v25) + v14 + 0x8000) >> 16) {
        v8 = (unsigned int)(HIDWORD(v25) + v14 + 0x8000) >> 16;
      }
      if (v9 <= (unsigned int)(v25 - v14 + 0x8000) >> 16) {
        v9 = (unsigned int)(v25 - v14 + 0x8000) >> 16;
      }
    } while (v7 != 0);
    a3 = v6--;
    if ((unsigned __int16)(v8 + v9) > (unsigned int)a2) {
      continue;
    }
    return a3;
  }
}

__int64 SdkHr_489e80(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4,
                     __int64 a5)
{
  __int64 v5;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64* v21;
  char v22;
  _QWORD* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64* v30;
  char v31;
  char v32;
  _QWORD* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 (*v37)(_QWORD, _QWORD, _QWORD, _QWORD);
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 (*v42)(_QWORD, _QWORD, _QWORD, _QWORD);
  char v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v54;
  _QWORD v55[2];
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 (*v66)(_QWORD, _QWORD, _QWORD, _QWORD);
  __int64 v67;

  v5 = a5 - 1;
  v11 = (a5 - 1 + a4) & -a5;
  v12 = SdkRoutine_86aa30();
  v13 = v12;
  if (v11 <= 0x100) {
    if (v12 != 0) {
      v14 = (_QWORD*)(a1 + 536);
      v15 = 13;
      v54 = nullptr;
      v55[0] = 0;
      do {
        v16 = v15 >> 1;
        v17 = &v14[3 * (v15 >> 1)];
        if (*v17 < a4) {
          v14 = v17 + 3;
          v16 = v15 + ~v16;
        }
        v15 = v16;
      } while (v16 != 0);
      if (v14 != (_QWORD*)(a1 + 848)) {
        while ((*v14 & v5) != 0) {
          v14 += 3;
          if (v14 == (_QWORD*)(a1 + 848)) {
            goto LABEL_15;
          }
        }
        v35 = (_QWORD*)v14[1];
        v34 = v14[2];
      LABEL_39:
        v54 = v35;
        v55[0] = v34;
        v22 = ((__int64 (*)(_QWORD*, __int64, __int64, __int64))v35)(v55, a2,
                                                                     a3, v13);
        return v22 & 1;
      }
    LABEL_15:
      v22 = SdkRoutine_48a320(a1 + 72, a2, a3, v12, a4, a5);
    }
    else {
      v23 = (_QWORD*)(a1 + 536);
      v24 = 13;
      v64 = 0;
      v65 = 0;
      v62 = 0;
      v63 = 0;
      v60 = 0;
      v61 = 0;
      v58 = 0;
      v59 = 0;
      v56 = 0;
      v57 = 0;
      v55[0] = 0;
      v55[1] = 0;
      v54 = nullptr;
      v66 = nullptr;
      v67 = 0;
      do {
        v25 = v24 >> 1;
        v26 = &v23[3 * (v24 >> 1)];
        if (*v26 < a4) {
          v23 = v26 + 3;
          v25 = v24 + ~v25;
        }
        v24 = v25;
      } while (v25 != 0);
      if (v23 == (_QWORD*)(a1 + 848)) {
      LABEL_31:
        v31 = SdkRoutine_48a320(a1 + 72, a2, a3, &v54, a4, a5);
      }
      else {
        while ((*v23 & v5) != 0) {
          v23 += 3;
          if (v23 == (_QWORD*)(a1 + 848)) {
            goto LABEL_31;
          }
        }
        v37 = (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))v23[1];
        v36 = v23[2];
        v66 = v37;
        v67 = v36;
        v31 = v37(&v67, a2, a3, &v54);
      }
      v22 = v31;
      SdkRoutine_47b000(a1 + 128, &v54);
      v38 = v54;
      v54 = nullptr;
      if (v38 != nullptr) {
        if ((SdkRoutine_85d750(a1 + 88) & 1) != 0) {
          v39 = *(_QWORD*)(a1 + 96);
          v40 = *(_QWORD**)(v39 + 8);
          *v40 = v38;
          *(_QWORD*)(v39 + 8) = v38;
          v38[1] = v40;
          *v38 = v39;
          SdkRoutine_858b80(a1 + 88);
        }
        else {
          v46 = *(_QWORD*)(a1 + 112);
          *v38 = v46;
          v47 = v46;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 112), (unsigned __int64*)&v47,
              (unsigned __int64)v38, memory_order_release,
              memory_order_relaxed);
          if (v47 != v46) {
            v48 = v47;
            do {
              *v38 = v47;
              atomic_compare_exchange_strong_explicit(
                  (atomic_ullong* volatile)(a1 + 112), (unsigned __int64*)&v48,
                  (unsigned __int64)v38, memory_order_release,
                  memory_order_relaxed);
              v49 = v48 == v47;
              v47 = v48;
            } while (!v49);
          }
        }
      }
    }
    return v22 & 1;
  }
  if (v12 == 0) {
    v27 = (_QWORD*)(a1 + 1272);
    v28 = 9;
    v60 = 0;
    v61 = 0;
    v58 = 0;
    v59 = 0;
    v56 = 0;
    v57 = 0;
    v55[0] = 0;
    v55[1] = 0;
    v54 = nullptr;
    v66 = nullptr;
    v67 = 0;
    do {
      v29 = v28 >> 1;
      v30 = &v27[3 * (v28 >> 1)];
      if (*v30 < a4) {
        v27 = v30 + 3;
        v29 = v28 + ~v29;
      }
      v28 = v29;
    } while (v29 != 0);
    if (v27 == (_QWORD*)(a1 + 1488)) {
    LABEL_35:
      v32 = SdkRoutine_48a500(a1 + 952, a2, a3, &v54, a4, a5);
      v33 = v54;
      v22 = v32;
      v54 = nullptr;
      if (v33 == nullptr) {
      LABEL_56:
        SdkRoutine_47b780(a1 + 960, &v54);
        return v22 & 1;
      }
    }
    else {
      while ((*v27 & v5) != 0) {
        v27 += 3;
        if (v27 == (_QWORD*)(a1 + 1488)) {
          goto LABEL_35;
        }
      }
      v42 = (__int64 (*)(_QWORD, _QWORD, _QWORD, _QWORD))v27[1];
      v41 = v27[2];
      v66 = v42;
      v67 = v41;
      v43 = v42(&v67, a2, a3, &v54);
      v33 = v54;
      v22 = v43;
      v54 = nullptr;
      if (v33 == nullptr) {
        goto LABEL_56;
      }
    }
    if ((SdkRoutine_85d750(a1 + 968) & 1) != 0) {
      v44 = *(_QWORD*)(a1 + 976);
      v45 = *(_QWORD**)(v44 + 8);
      *v45 = v33;
      *(_QWORD*)(v44 + 8) = v33;
      v33[1] = v45;
      *v33 = v44;
      SdkRoutine_858b80(a1 + 968);
    }
    else {
      v50 = *(_QWORD*)(a1 + 992);
      *v33 = v50;
      v51 = v50;
      atomic_compare_exchange_strong_explicit(
          (atomic_ullong* volatile)(a1 + 992), (unsigned __int64*)&v51,
          (unsigned __int64)v33, memory_order_release, memory_order_relaxed);
      if (v51 != v50) {
        v52 = v51;
        do {
          *v33 = v51;
          atomic_compare_exchange_strong_explicit(
              (atomic_ullong* volatile)(a1 + 992), (unsigned __int64*)&v52,
              (unsigned __int64)v33, memory_order_release,
              memory_order_relaxed);
          v49 = v52 == v51;
          v51 = v52;
        } while (!v49);
      }
    }
    goto LABEL_56;
  }
  v18 = (_QWORD*)(a1 + 1272);
  v19 = 9;
  v54 = nullptr;
  v55[0] = 0;
  do {
    v20 = v19 >> 1;
    v21 = &v18[3 * (v19 >> 1)];
    if (*v21 < a4) {
      v18 = v21 + 3;
      v20 = v19 + ~v20;
    }
    v19 = v20;
  } while (v20 != 0);
  if (v18 != (_QWORD*)(a1 + 1488)) {
    while ((*v18 & v5) != 0) {
      v18 += 3;
      if (v18 == (_QWORD*)(a1 + 1488)) {
        goto LABEL_19;
      }
    }
    v35 = (_QWORD*)v18[1];
    v34 = v18[2];
    v13 = v12 + 104;
    goto LABEL_39;
  }
LABEL_19:
  v22 = SdkRoutine_48a500(a1 + 952, a2, a3, v12 + 104, a4, a5);
  return v22 & 1;
}

#pragma GCC visibility pop
