#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_561430(_QWORD* result);
__attribute__((swiftcall)) void Font_55d700(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void Font_55d7a0(PSEUDO_X8, __int64);
__int64 GameRoutine_561450(_QWORD);
__int64 GameRoutine_561490(__int64, int, float*);
__int64 GameRoutine_565fe0(__int64);
__int64 GameRoutine_5662e0(_QWORD, long double);
__int64 GameRoutine_567cd0(_QWORD, long double);
__int64 TextBox_567d30(__int64 result);
double TextBox_567d60(_QWORD*, unsigned __int64, int);
extern __int64* GameData_2135f38[2];
float GameRoutine_55c200(__int64);
float GameRoutine_55c300(__int64, __int64, float, double);
float GameRoutine_5691c0(__int64, float*, float*, unsigned __int64, int);
float TextBox_5677c0(__int64, float*, float*, unsigned __int64, int);
float TextBox_568750(__int64, unsigned __int64, int);
float TextTagProcessor_55c240(__int64);
__int64 nn_font_565ba0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 nn_font_566220(__int64 a1);
__int64 nn_font_5665e0(__int64 a1, float* a2, unsigned __int64* a3, int a4);
float nn_font_566e80(__int64 a1, unsigned __int64 a2, int a3, int a4,
                     _DWORD* a5, __int64 a6);
__int64 nn_font_567fe0(__int64 a1, float* a2, unsigned __int64* a3, int a4);
float nn_font_568880(__int64 a1, unsigned __int64 a2, int a3, int a4,
                     _DWORD* a5, __int64 a6);
__int64 nn_font_5697e0(__int64 a1, int a2, float* a3);

__int64 nn_font_565ba0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v3 = *(_QWORD*)(a2 + 48);
  v4 = *(_QWORD*)(a2 + 32);
  if (a3 < v3) {
    if (v4 != 0 && *(_BYTE*)(v4 + 57) == 1 ||
        (v5 = *(_QWORD*)(v4 + 32)) != 0 && *(_BYTE*)(v5 + 57) == 1 ||
        (*(_BYTE*)(a2 + 57) = *(_BYTE*)(a2 + 57) == 0,
         *(_BYTE*)(v4 + 57) = *(_BYTE*)(v4 + 57) == 0,
         *(_BYTE*)(*(_QWORD*)(a2 + 40) + 57LL) =
             *(_BYTE*)(*(_QWORD*)(a2 + 40) + 57LL) == 0,
         v6 = *(_QWORD*)(a2 + 40), (v4 = *(_QWORD*)(v6 + 32)) == 0) ||
        *(_BYTE*)(v4 + 57) != 1) {
      v4 = a2;
      *(_QWORD*)(a2 + 32) = nn_font_565ba0(a1, *(_QWORD*)(a2 + 32), a3);
      v7 = *(_QWORD*)(v4 + 40);
      if (v7 == 0) {
        goto LABEL_47;
      }
    }
    else {
      *(_QWORD*)(v6 + 32) = *(_QWORD*)(v4 + 40);
      *(_QWORD*)(v4 + 40) = v6;
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(v6 + 57);
      *(_BYTE*)(v6 + 57) = 1;
      *(_QWORD*)(a2 + 40) = v4;
      *(_QWORD*)(a2 + 40) = *(_QWORD*)(v4 + 32);
      *(_QWORD*)(v4 + 32) = a2;
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(a2 + 57);
      *(_BYTE*)(a2 + 57) = 1;
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(v4 + 57) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) == 0;
      *(_QWORD*)(v4 + 32) = nn_font_565ba0(a1, *(_QWORD*)(v4 + 32), a3);
      v7 = *(_QWORD*)(v4 + 40);
      if (v7 == 0) {
        goto LABEL_47;
      }
    }
    goto LABEL_44;
  }
  if (v4 != 0 && *(_BYTE*)(v4 + 57) == 1) {
    *(_QWORD*)(a2 + 32) = *(_QWORD*)(v4 + 40);
    *(_QWORD*)(v4 + 40) = a2;
    *(_BYTE*)(v4 + 57) = *(_BYTE*)(a2 + 57);
    *(_BYTE*)(a2 + 57) = 1;
    v8 = *(_QWORD*)(v4 + 40);
    if (a3 != *(_QWORD*)(v4 + 48) || v8 != 0) {
      goto LABEL_24;
    }
  LABEL_17:
    *(_QWORD*)v4 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 8) = v4;
    return 0;
  }
  v4 = a2;
  v8 = *(_QWORD*)(a2 + 40);
  if (a3 == v3 && v8 == 0) {
    goto LABEL_17;
  }
LABEL_24:
  if (*(_BYTE*)(v8 + 57) != 1) {
    v12 = *(_QWORD*)(v8 + 32);
    if (v12 == 0 || *(_BYTE*)(v12 + 57) != 1) {
      *(_BYTE*)(v4 + 57) = *(_BYTE*)(v4 + 57) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 32) + 57LL) == 0;
      *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) =
          *(_BYTE*)(*(_QWORD*)(v4 + 40) + 57LL) == 0;
      v13 = *(_QWORD*)(v4 + 32);
      v14 = *(_QWORD*)(v13 + 32);
      if (v14 != 0 && *(_BYTE*)(v14 + 57) == 1) {
        *(_QWORD*)(v4 + 32) = *(_QWORD*)(v13 + 40);
        *(_QWORD*)(v13 + 40) = v4;
        *(_BYTE*)(v13 + 57) = *(_BYTE*)(v4 + 57);
        *(_BYTE*)(v4 + 57) = 1;
        v4 = v13;
        *(_BYTE*)(v13 + 57) = *(_BYTE*)(v13 + 57) == 0;
        *(_BYTE*)(*(_QWORD*)(v13 + 32) + 57LL) =
            *(_BYTE*)(*(_QWORD*)(v13 + 32) + 57LL) == 0;
        *(_BYTE*)(*(_QWORD*)(v13 + 40) + 57LL) =
            *(_BYTE*)(*(_QWORD*)(v13 + 40) + 57LL) == 0;
      }
    }
  }
  v15 = *(_QWORD*)(v4 + 40);
  if (a3 == *(_QWORD*)(v4 + 48)) {
    v16 = *(_QWORD*)(v4 + 40);
    do {
      v17 = v16;
      v16 = *(_QWORD*)(v16 + 32);
    } while (v16 != 0);
    if (v15 != 0) {
      v18 = *(_QWORD*)(v17 + 48);
      v19 = *(_QWORD*)(v4 + 40);
      do {
        while (1) {
          v20 = *(_QWORD*)(v19 + 48);
          if (v18 >= v20) {
            break;
          }
          v19 = *(_QWORD*)(v19 + 32);
          if (v19 == 0) {
            goto LABEL_39;
          }
        }
        if (v18 <= v20) {
          break;
        }
        v19 = *(_QWORD*)(v19 + 40);
      } while (v19 != 0);
    LABEL_39:
      v21 = a1;
    }
    else {
      v21 = a1;
      v19 = 0;
    }
    *(_QWORD*)(v19 + 40) = GameRoutine_565fe0(*(_QWORD*)(v4 + 40));
    *(_QWORD*)(v19 + 32) = *(_QWORD*)(v4 + 32);
    *(_BYTE*)(v19 + 57) = *(_BYTE*)(v4 + 57);
    *(_QWORD*)v4 = *(_QWORD*)(v21 + 8);
    *(_QWORD*)(v21 + 8) = v4;
    v4 = v19;
    v7 = *(_QWORD*)(v19 + 40);
    if (v7 == 0) {
      goto LABEL_47;
    }
  }
  else {
    v22 = nn_font_565ba0(a1, v15, a3);
    *(_QWORD*)(v4 + 40) = v22;
    v7 = v22;
    if (v22 == 0) {
      goto LABEL_47;
    }
  }
LABEL_44:
  if (*(_BYTE*)(v7 + 57) == 1) {
    *(_QWORD*)(v4 + 40) = *(_QWORD*)(v7 + 32);
    *(_QWORD*)(v7 + 32) = v4;
    *(_BYTE*)(v7 + 57) = *(_BYTE*)(v4 + 57);
    *(_BYTE*)(v4 + 57) = 1;
    result = *(_QWORD*)(v7 + 32);
    if (result == 0) {
      return v7;
    }
    goto LABEL_48;
  }
LABEL_47:
  v7 = v4;
  result = *(_QWORD*)(v4 + 32);
  if (result == 0) {
    return v7;
  }
LABEL_48:
  if (*(_BYTE*)(result + 57) != 1) {
    return v7;
  }
  v23 = *(_QWORD*)(result + 32);
  if (v23 == 0 || *(_BYTE*)(v23 + 57) != 1) {
    v24 = result;
    result = v7;
    v25 = *(_QWORD*)(v7 + 40);
    if (v25 == 0) {
      return result;
    }
    goto LABEL_57;
  }
  *(_QWORD*)(v7 + 32) = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 40) = v7;
  *(_BYTE*)(result + 57) = *(_BYTE*)(v7 + 57);
  *(_BYTE*)(v7 + 57) = 1;
  v24 = *(_QWORD*)(result + 32);
  if (v24 != 0 && *(_BYTE*)(v24 + 57) == 1) {
    v25 = *(_QWORD*)(result + 40);
    if (v25 != 0) {
    LABEL_57:
      if (*(_BYTE*)(v25 + 57) == 1) {
        *(_BYTE*)(result + 57) = *(_BYTE*)(result + 57) == 0;
        *(_BYTE*)(v24 + 57) = *(_BYTE*)(v24 + 57) == 0;
        *(_BYTE*)(*(_QWORD*)(result + 40) + 57LL) =
            *(_BYTE*)(*(_QWORD*)(result + 40) + 57LL) == 0;
      }
    }
  }
  return result;
}

__int64 nn_font_566220(__int64 a1)
{
  __int64 result;
  char v3;

  do {
    result = *(_QWORD*)(a1 + 32);
    if ((*(_BYTE*)(a1 + 56) & 5) != 0) {
      v3 = 16;
    }
    else {
      v3 = 0;
    }
    *(_BYTE*)(a1 + 56) = v3 | *(_BYTE*)(a1 + 56) & 0x60;
    if (result != 0) {
      result = nn_font_566220(result);
    }
    a1 = *(_QWORD*)(a1 + 40);
  } while (a1 != 0);
  return result;
}

__int64 nn_font_5665e0(__int64 a1, float* a2, unsigned __int64* a3, int a4)
{
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  char v8;
  __int64 v9;
  unsigned __int64 v12;
  char v13;
  float v14;
  __int64 v15;
  float v16;
  __int64 (*v17)(_QWORD*);
  _QWORD* v18;
  char v19;
  unsigned int v20;
  unsigned __int64 v21;
  char v22;
  float v23;
  unsigned __int64 v24;
  int v25;
  float v26;
  unsigned __int64* v27;
  float v28;
  unsigned int v30;
  char v31;
  unsigned int v32;
  bool v33;
  char v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  long double v50;
  int v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  __int64 (*v64)(void);
  __int64 v65;
  struct {
    __int64 v66;
    __int64 v67;
  } v66_;
  struct {
    _QWORD v68[2];
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
  } v68_;
  _QWORD v80[6];
  float v81;
  __int64 v82;
  float v83;
  struct {
    unsigned __int64 v84;
    __int64 (*v85)(_QWORD);
    __int64 v86;
    _QWORD v87[7];
    char gap272_[8];
    unsigned __int64* v88;
  } v84_;

  v4 = *a3;
  v5 = *(_DWORD*)(a1 + 12);
  v6 = *(_DWORD*)(a1 + 16);
  v8 = *(_BYTE*)(a1 + 56);
  v9 = a4;
  v12 = *a3 + a4;
  v13 = *(_BYTE*)(a1 + 99);
  v14 = *(float*)(a1 + 60);
  v84_.v87[0] = a1;
  v84_.v87[1] = v4;
  v15 = *(_QWORD*)(a1 + 40);
  v84_.v87[5] = 0;
  v84_.v85 = nullptr;
  v84_.v86 = 0;
  v84_.v84 = 0;
  v84_.v87[2] = v12;
  v84_.v87[3] = 0;
  v84_.v87[4] = __PAIR64__(v6, v5);
  Font_55d700((void*)(&v84_.v84), v15);
  v16 = TextTagProcessor_55c240(a1);
  *a2 = 0x0.0p+0f;
  a2[2] = 0x0.0p+0f;
  v84_.v84 = v4;
  a2[1] = fminf(v16, 0x0.0p+0f);
  a2[3] = fmaxf(v16, 0x0.0p+0f);
  (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 88) + 64LL))(
      *(_QWORD*)(a1 + 88), v84_.v87);
  v17 = (__int64 (*)(_QWORD*))v84_.v85;
  v84_.v88 = a3;
  v18 = (unsigned __int64*)((char*)&v84_.v84 + (v84_.v86 >> 1));
  if ((v84_.v86 & 1) != 0) {
    v17 = *(__int64 (**)(_QWORD*))((char*)v84_.v85 + *v18);
  }
  v19 = v8 & v13;
  v20 = v17(v18);
  v21 = v84_.v84;
  if (v84_.v84 <= v12) {
    v23 = 0x0.0p+0f;
    v30 = v20;
    v65 = v9;
    v31 = 0;
    v24 = 0;
    v22 = 0;
    while (1) {
      v33 = v24 != 0 && v14 < 0x1.fffffe0000000p+127f;
      v34 = v33;
      while (1) {
        if ((v19 & 1) != 0) {
          if ((v34 & 1) == 0) {
            if (v30 >= 0x20) {
              if ((v30 & 0xFFFFFF00) == 0x2000 &&
                  (v30 == 8203 || (v30 & 0x20FE) == 0x200E || v30 - 8234 < 5 ||
                   v30 == 8288 || v30 - 8294 < 4)) {
                goto LABEL_114;
              }
              if ((v31 & 1) != 0) {
                v23 = v23 + *(float*)(a1 + 64);
              }
              if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
                v58 = v23 + *(float*)(a1 + 32);
              }
              else {
                v58 = v23 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                        **(_QWORD**)(a1 + 40) + 128LL))(
                                        *(_QWORD*)(a1 + 40), v30) *
                                    *(float*)(a1 + 12));
              }
              v40 = 0x0.0p+0f;
              v41 = v58 + 0x0.0p+0f;
            LABEL_103:
              v59 = *a2;
              if (v41 < *a2) {
                v59 = v41;
              }
              *a2 = v59;
              v60 = a2[2];
              if (v60 < v41) {
                v60 = v41;
              }
              a2[2] = v60;
              if (*(_BYTE*)(a1 + 98) == 1) {
                v61 = *(float*)(a1 + 24);
                v62 = a2[1];
                if (v61 < v62) {
                  v62 = *(float*)(a1 + 24);
                }
                a2[1] = v62;
                v63 = v61 + (*(float (**)(_QWORD, __int64))(
                                **(_QWORD**)(a1 + 88) + 40LL))(
                                *(_QWORD*)(a1 + 88), a1);
                if (a2[3] >= v63) {
                  v63 = a2[3];
                }
                a2[3] = v63;
              }
              v21 = v84_.v84;
              v23 = v41 - v40;
              v31 = 1;
              HIDWORD(v84_.v87[5]) = v30;
              goto LABEL_114;
            }
          LABEL_48:
            if (v30 != 10) {
              goto LABEL_63;
            }
            goto LABEL_59;
          }
          if (v30 < 0x20) {
            goto LABEL_48;
          }
          if ((v30 & 0xFFFFFF00) == 0x2000 &&
              (v30 == 8203 || (v30 & 0x20FE) == 0x200E ||
               v30 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v30 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v30 - 8294 < 4)) {
            goto LABEL_114;
          }
          if ((v31 & 1) != 0) {
            v35 = v23 + *(float*)(a1 + 64);
          }
          else {
            v35 = v23;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v36 = v35 + *(float*)(a1 + 32);
          }
          else {
            v36 = v35 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v30) *
                                *(float*)(a1 + 12));
          }
          v40 = 0x0.0p+0f;
          v41 = v36 + 0x0.0p+0f;
          if ((float)((float)(v36 + 0x0.0p+0f) + *(float*)(a1 + 72)) <=
              *(float*)(a1 + 60)) {
            goto LABEL_103;
          }
          v22 = 1;
          v84_.v84 = v24;
          if (v24 > v12) {
            goto LABEL_7;
          }
        }
        else {
          if (v30 < 0x20) {
            goto LABEL_48;
          }
          if ((v30 & 0xFFFFFF00) == 0x2000 &&
              (v30 == 8203 || (v30 & 0x20FE) == 0x200E ||
               v30 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v30 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v30 - 8294 < 4)) {
            goto LABEL_114;
          }
          if ((v31 & 1) != 0) {
            v37 = v23 + *(float*)(a1 + 64);
          }
          else {
            v37 = v23;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v38 = v37 + *(float*)(a1 + 32);
          }
          else {
            v38 = v37 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v30) *
                                *(float*)(a1 + 12));
          }
          v39 = v38 +
                (float)((float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                            **(_QWORD**)(a1 + 40) + 184LL))(
                            *(_QWORD*)(a1 + 40), HIDWORD(v84_.v87[5]), v30) *
                        *(float*)(a1 + 12));
          v40 =
              *(float*)(a1 + 12) *
              (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v30, 0);
          v41 = v39 + v40;
          if ((v34 & 1) == 0 ||
              (float)(v41 + *(float*)(a1 + 72)) <= *(float*)(a1 + 60)) {
            goto LABEL_103;
          }
          v22 = 1;
          v84_.v84 = v24;
          if (v24 > v12) {
            goto LABEL_6;
          }
        }
        v30 = 10;
        v21 = v24;
      LABEL_59:
        if ((*(_BYTE*)(a1 + 97) & 1) == 0) {
          if ((v19 & 1) == 0) {
            v42 = (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                                HIDWORD(v84_.v87[5]), 0);
            v21 = v84_.v84;
            v23 = v23 + (float)(v42 * *(float*)(a1 + 12));
          }
          HIDWORD(v84_.v87[5]) = 0;
        }
      LABEL_63:
        v81 = v23;
        v82 = 0;
        v83 = 0x0.0p+0f;
        v84_.v87[1] = v21;
        LODWORD(v84_.v87[5]) = (v31 & 1) == 0;
        *(float*)(a1 + 20) = v23;
        if (v14 >= 0x1.fffffe0000000p+127f || v30 == 10 || v24 == 0) {
          goto LABEL_71;
        }
        v66_.v66 = 0;
        v66_.v67 = 0;
        qmemcpy(v80, v84_.v87, sizeof(v80));
        v43 = *(_QWORD*)(a1 + 88);
        v68_.v77 = *(_QWORD*)(a1 + 80);
        v68_.v78 = v43;
        v44 = *(_QWORD*)(a1 + 88);
        v68_.v79 = *(_QWORD*)(a1 + 96);
        v80[0] = v68_.v68;
        v45 = *(_QWORD*)(a1 + 56);
        v68_.v73 = *(_QWORD*)(a1 + 48);
        v68_.v74 = v45;
        v46 = *(_QWORD*)(a1 + 72);
        v68_.v75 = *(_QWORD*)(a1 + 64);
        v68_.v76 = v46;
        v47 = *(_QWORD*)(a1 + 24);
        v68_.v69 = *(_QWORD*)(a1 + 16);
        v68_.v70 = v47;
        v48 = *(_QWORD*)(a1 + 40);
        v68_.v71 = *(_QWORD*)(a1 + 32);
        v68_.v72 = v48;
        v49 = *(_QWORD*)(a1 + 8);
        v68_.v68[0] = *(_QWORD*)a1;
        v68_.v68[1] = v49;
        (*(void (**)(__int64, __int64*, _QWORD*, _QWORD))(
            *(_QWORD*)v44 + 32LL))(v44, &v66_.v66, v80, v30);
        LODWORD(v50) = v66_.v67;
        if (*(float*)&v66_.v67 <= *(float*)&v66_.v66) {
          break;
        }
        *(float*)&v50 = *((float*)&v68_.v69 + 1) - *(float*)&v84_.v87[3];
        if ((float)(*((float*)&v68_.v69 + 1) - *(float*)&v84_.v87[3]) <=
            *(float*)(a1 + 60)) {
          break;
        }
        v84_.v84 = v24;
        GameRoutine_5662e0(v68_.v68, v50);
        v21 = v84_.v84;
        v30 = 10;
        v22 = 1;
        if (v84_.v84 > v12) {
          goto LABEL_5;
        }
      }
      GameRoutine_5662e0(v68_.v68, v50);
    LABEL_71:
      v51 = (*(__int64 (**)(_QWORD, float*, _QWORD*, _QWORD))(
          **(_QWORD**)(a1 + 88) + 32LL))(*(_QWORD*)(a1 + 88), &v81, v84_.v87,
                                         v30);
      v52 = a2[3];
      if (v30 == 10 && (*(_BYTE*)(a1 + 98) & 1) != 0 &&
          *(float*)(a1 + 24) < v52) {
        *(float*)(a1 + 24) = v52;
        v52 = a2[3];
      }
      v53 = v81;
      v54 = *(float*)&v82;
      v55 = *a2;
      v56 = a2[1];
      v21 = v84_.v87[1];
      v33 = v81 < *a2;
      v84_.v84 = v84_.v87[1];
      if (!v33) {
        v53 = v55;
      }
      if (*(float*)&v82 >= v56) {
        v54 = v56;
      }
      *a2 = v53;
      a2[1] = v54;
      v57 = a2[2];
      if (v57 < *((float*)&v82 + 1)) {
        v57 = *((float*)&v82 + 1);
      }
      if (v52 < v83) {
        v52 = v83;
      }
      a2[2] = v57;
      a2[3] = v52;
      v23 = *(float*)(a1 + 20);
      if (v51 <= 1) {
        if (v51 == 1) {
          v31 = 0;
        }
      }
      else {
        switch (v51) {
        case 2:
          v31 = 1;
          break;
        case 4:
          v22 = 0;
          *v84_.v88 += v65;
          return v22 & 1;
        case 3:
          goto LABEL_5;
        default:
          break;
        }
      }
    LABEL_114:
      if (v14 < 0x1.fffffe0000000p+127f) {
        v24 = v21;
      }
      v64 = (__int64 (*)(void))v84_.v85;
      if ((v84_.v86 & 1) != 0) {
        v64 = *(__int64 (**)(void))(
            (char*)v84_.v85 +
            *(unsigned __int64*)((char*)&v84_.v84 + (v84_.v86 >> 1)));
      }
      v32 = v64();
      v21 = v84_.v84;
      v30 = v32;
      if (v84_.v84 > v12) {
        goto LABEL_5;
      }
    }
  }
  v22 = 0;
  v23 = 0x0.0p+0f;
LABEL_5:
  v24 = v21;
  if ((v19 & 1) == 0) {
  LABEL_6:
    v25 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
        **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                        HIDWORD(v84_.v87[5]), 0);
    v24 = v84_.v84;
    v23 = v23 + (float)((float)v25 * *(float*)(a1 + 12));
  }
LABEL_7:
  v26 = *a2;
  v27 = v84_.v88;
  if (v23 < *a2) {
    v26 = v23;
  }
  *a2 = v26;
  v28 = a2[2];
  if (v28 < v23) {
    v28 = v23;
  }
  a2[2] = v28;
  *v27 = v24;
  (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 88) + 72LL))(
      *(_QWORD*)(a1 + 88), v84_.v87);
  return v22 & 1;
}

float nn_font_566e80(__int64 a1, unsigned __int64 a2, int a3, int a4,
                     _DWORD* a5, __int64 a6)
{
  char v7;
  char v8;
  float v9;
  float v10;
  signed __int64 v12;
  unsigned __int64 v16;
  float v17;
  __int64* v18;
  __int64 v19;
  float v20;
  float v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 (*v26)(_QWORD*);
  _QWORD* v27;
  unsigned int v28;
  unsigned __int64 v29;
  float v30;
  float v31;
  unsigned __int64 v32;
  int v33;
  float v34;
  unsigned int v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned int v38;
  bool v39;
  int v40;
  _BOOL4 v41;
  bool v42;
  _BOOL4 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  long double v53;
  int v54;
  float v55;
  __int64 v56;
  long double v57;
  unsigned int v58;
  __int64 (*v59)(_QWORD*);
  _QWORD* v60;
  float v61;
  float v62;
  float v63;
  float v64;
  int v65;
  float v66;
  float v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  float v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  long double v81;
  float v82;
  float v83;
  float v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  long double v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  __int64 v101;
  int v102;
  double v103;
  float v104;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  long double v117;
  float v118;
  __int64 (*v119)(void);
  __int64 v120;
  float v121;
  _DWORD* v123;
  int v124;
  float v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  char v129;
  char v130;
  int v131;
  struct {
    unsigned __int64 v132;
    __int64 v133;
  } v132_;
  struct {
    __int64* v134;
    unsigned __int64 v135;
    unsigned __int64 v136;
    unsigned __int64 v137;
    __int64 v138;
    __int64 v139;
  } v134_;
  struct {
    unsigned __int64 v140;
    __int64 (*v141)(_QWORD);
    __int64 v142;
    __int64* v143;
    unsigned __int64 v144;
    unsigned __int64 v145;
    unsigned __int64 v146;
    __int64 v147;
    __int64 v148;
    float v149;
    float v150;
    __int64 v151;
    __int64 v152;
    __int128 v153;
    __int64 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
  } v140_;

  v7 = *(_BYTE*)(a1 + 56);
  v8 = *(_BYTE*)(a1 + 99);
  v9 = *(float*)(a1 + 20);
  v10 = *(float*)(a1 + 24);
  v12 = a3;
  v16 = a2 + a3;
  v17 = *(float*)(a1 + 60);
  v18 = *(__int64**)(a1 + 88);
  v19 = *v18;
  v140_.v149 = v10;
  v140_.v150 = v9;
  (*(void (**)(__int64*, __int64, unsigned __int64, unsigned __int64))(
      v19 + 80))(v18, a1, a2, v16);
  v124 = a3;
  v20 = TextBox_5677c0(a1, &v140_.v150, &v140_.v149, a2, a3);
  v21 = *(float*)(a1 + 24);
  v140_.v143 = (__int64*)a1;
  v140_.v144 = a2;
  v140_.v145 = v16;
  v140_.v148 = 0;
  v131 = a4;
  v125 = v21;
  v140_.v146 = __PAIR64__(LODWORD(v140_.v149), LODWORD(v140_.v150));
  v22 = *(_DWORD*)(a1 + 16);
  LODWORD(v140_.v147) = *(_DWORD*)(a1 + 12);
  HIDWORD(v140_.v147) = v22;
  if (a4 != 0) {
    if (a4 < 1) {
      v23 = 0;
    }
    else {
      v23 = *a5;
    }
    *(_DWORD*)(a1 + 20) = v23;
  }
  v24 = *(_QWORD*)(a1 + 40);
  v123 = a5;
  v140_.v141 = nullptr;
  v140_.v142 = 0;
  v140_.v140 = 0;
  Font_55d700((void*)(&v140_.v140), v24);
  v25 = *(_QWORD*)(a1 + 88);
  v140_.v140 = a2;
  (*(void (**)(__int64, __int64**))(*(_QWORD*)v25 + 48LL))(v25, &v140_.v143);
  v26 = (__int64 (*)(_QWORD*))v140_.v141;
  v126 = v16;
  v27 = (unsigned __int64*)((char*)&v140_.v140 + (v140_.v142 >> 1));
  if ((v140_.v142 & 1) != 0) {
    v26 = *(__int64 (**)(_QWORD*))((char*)v140_.v141 + *v27);
  }
  v130 = v7 & v8;
  v28 = v26(v27);
  v29 = v140_.v140;
  if ((__int64)(v140_.v140 - a2) <= v12) {
    v34 = 0x0.0p+0f;
    v35 = v28;
    v129 = 0;
    LODWORD(v36) = 0;
    v37 = a2;
    v127 = a2;
    while (1) {
      v39 = (int)v36 >= v131 && v37 == v127;
      v40 = v36;
      v41 = v39;
      v42 = v39 || v17 >= 0x1.fffffe0000000p+127f;
      while (1) {
        while (v35 <= 0x1F) {
          v140_.v144 = v29;
          LODWORD(v140_.v148) = (v129 & 1) == 0;
          v44 = v17 >= 0x1.fffffe0000000p+127f || v35 == 10;
          if (v44 || v41) {
            goto LABEL_63;
          }
          v132_.v132 = 0;
          v132_.v133 = 0;
          v134_.v137 = v140_.v146;
          v134_.v138 = v140_.v147;
          v134_.v136 = v140_.v145;
          v134_.v139 = v140_.v148;
          v134_.v134 = v140_.v143;
          v134_.v135 = v140_.v144;
          v45 = *(_QWORD*)(a1 + 80);
          v46 = *(_QWORD*)(a1 + 88);
          v134_.v134 = &v140_.v151;
          v140_.v160 = v45;
          v140_.v161 = v46;
          v47 = *(_QWORD*)(a1 + 88);
          v140_.v162 = *(_QWORD*)(a1 + 96);
          v48 = *(_QWORD*)(a1 + 56);
          v140_.v156 = *(_QWORD*)(a1 + 48);
          v140_.v157 = v48;
          v49 = *(_QWORD*)(a1 + 72);
          v140_.v158 = *(_QWORD*)(a1 + 64);
          v140_.v159 = v49;
          v50 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)&v140_.v153 = *(_QWORD*)(a1 + 16);
          *((_QWORD*)&v140_.v153 + 1) = v50;
          v51 = *(_QWORD*)(a1 + 40);
          v140_.v154 = *(_QWORD*)(a1 + 32);
          v140_.v155 = v51;
          v52 = *(_QWORD*)(a1 + 8);
          v140_.v151 = *(_QWORD*)a1;
          v140_.v152 = v52;
          (*(void (**)(__int64, unsigned __int64*, __int64**, _QWORD))(
              *(_QWORD*)v47 + 32LL))(v47, &v132_.v132, &v134_.v134, v35);
          LODWORD(v53) = v132_.v133;
          if (*(float*)&v132_.v133 <= *(float*)&v132_.v132) {
            goto LABEL_62;
          }
          *(_QWORD*)&v53 = 0;
          if ((int)v36 < v131) {
            LODWORD(v53) = *(_DWORD*)(a6 + 4LL * (int)v36);
          }
          *(float*)&v53 = *(float*)(a1 + 60) + *(float*)&v53;
          if ((float)(*((float*)&v140_.v153 + 1) - *(float*)&v140_.v146) <=
              *(float*)&v53) {
          LABEL_62:
            GameRoutine_5662e0(&v140_.v151, v53);
          LABEL_63:
            v65 = (*(__int64 (**)(_QWORD, _QWORD, __int64**))(
                **(_QWORD**)(a1 + 88) + 24LL))(*(_QWORD*)(a1 + 88), v35,
                                               &v140_.v143);
            v66 = *(float*)(a1 + 20);
            v67 = v140_.v150;
            if (v35 == 10 && (*(_BYTE*)(a1 + 97) & 1) == 0) {
              v68 = *(unsigned __int8*)(a1 + 98);
              HIDWORD(v140_.v148) = 0;
              if (v68 == 1) {
                v69 = *(_QWORD*)(a1 + 72);
                v70 = *(_QWORD*)(a1 + 80);
                v71 = *(_QWORD*)(a1 + 88);
                v72 = *(_QWORD*)(a1 + 96);
                v73 = v65;
                v74 = *(float*)(a1 + 24);
                v134_.v134 = nullptr;
                v134_.v135 = 0;
                v140_.v160 = v70;
                v140_.v161 = v71;
                v140_.v162 = v72;
                v75 = *(_QWORD*)(a1 + 40);
                v76 = *(_QWORD*)(a1 + 56);
                v77 = *(_QWORD*)(a1 + 64);
                v140_.v156 = *(_QWORD*)(a1 + 48);
                v140_.v157 = v76;
                v140_.v158 = v77;
                v140_.v159 = v69;
                v78 = *(_QWORD*)(a1 + 24);
                v79 = *(_QWORD*)(a1 + 32);
                *(_QWORD*)&v140_.v153 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v140_.v153 + 1) = v78;
                v140_.v154 = v79;
                v140_.v155 = v75;
                v80 = *(_QWORD*)(a1 + 8);
                v140_.v151 = *(_QWORD*)a1;
                v140_.v152 = v80;
                v132_.v132 = v140_.v140;
                *(_QWORD*)((char*)&v140_.v153 + 4) = 0;
                nn_font_5665e0((__int64)&v140_.v151, (float*)&v134_.v134,
                               &v132_.v132, v124 + a2 - v140_.v140);
                LODWORD(v81) = HIDWORD(v134_.v135);
                v82 = *((float*)&v134_.v135 + 1) - *((float*)&v134_.v134 + 1);
                GameRoutine_5662e0(&v140_.v151, v81);
                v83 = (*(float (**)(_QWORD, __int64))(
                    **(_QWORD**)(a1 + 88) + 40LL))(*(_QWORD*)(a1 + 88), a1);
                v65 = v73;
                *(float*)(a1 + 24) = v74 + (float)(v82 - v83);
              }
            }
            if (v65 > 2) {
              if (v65 != 3) {
                if (v65 == 4) {
                  goto LABEL_9;
                }
                goto LABEL_89;
              }
              v84 = 0x0.0p+0f;
              v36 = (int)v36 + 1LL;
              if (v40 + 1 < v131) {
                v84 = *(float*)&v123[v36];
              }
              if ((*(_DWORD*)(a1 + 80) & 3) == 2) {
                v108 = *(_QWORD*)(a1 + 80);
                v109 = *(_QWORD*)(a1 + 88);
                v110 = *(_QWORD*)(a1 + 96);
                v134_.v134 = nullptr;
                v134_.v135 = 0;
                v140_.v160 = v108;
                v140_.v161 = v109;
                v111 = *(_QWORD*)(a1 + 48);
                v112 = *(_QWORD*)(a1 + 56);
                v140_.v162 = v110;
                v132_.v132 = v140_.v144;
                v140_.v156 = v111;
                v140_.v157 = v112;
                v113 = *(_QWORD*)(a1 + 72);
                v140_.v158 = *(_QWORD*)(a1 + 64);
                v140_.v159 = v113;
                v114 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&v140_.v153 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v140_.v153 + 1) = v114;
                v115 = *(_QWORD*)(a1 + 40);
                v140_.v154 = *(_QWORD*)(a1 + 32);
                v140_.v155 = v115;
                v116 = *(_QWORD*)(a1 + 8);
                v140_.v151 = *(_QWORD*)a1;
                v140_.v152 = v116;
                *(_QWORD*)((char*)&v140_.v153 + 4) = 0;
                nn_font_5665e0((__int64)&v140_.v151, (float*)&v134_.v134,
                               &v132_.v132, v124 + a2 - v140_.v144);
                LODWORD(v117) = v134_.v135;
                v118 = *(float*)&v134_.v135 - *(float*)&v134_.v134;
                GameRoutine_5662e0(&v140_.v151, v117);
                *(float*)(a1 + 20) =
                    v84 + (float)((float)(v20 - v118) + *(float*)&v140_.v146);
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_81;
                }
              }
              else if ((*(_DWORD*)(a1 + 80) & 3) == 1) {
                v85 = *(_QWORD*)(a1 + 80);
                v86 = *(_QWORD*)(a1 + 88);
                v87 = *(_QWORD*)(a1 + 96);
                v134_.v134 = nullptr;
                v134_.v135 = 0;
                v140_.v160 = v85;
                v140_.v161 = v86;
                v88 = *(_QWORD*)(a1 + 48);
                v89 = *(_QWORD*)(a1 + 56);
                v140_.v162 = v87;
                v132_.v132 = v140_.v144;
                v140_.v156 = v88;
                v140_.v157 = v89;
                v90 = *(_QWORD*)(a1 + 72);
                v140_.v158 = *(_QWORD*)(a1 + 64);
                v140_.v159 = v90;
                v91 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&v140_.v153 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v140_.v153 + 1) = v91;
                v92 = *(_QWORD*)(a1 + 40);
                v140_.v154 = *(_QWORD*)(a1 + 32);
                v140_.v155 = v92;
                v93 = *(_QWORD*)(a1 + 8);
                v140_.v151 = *(_QWORD*)a1;
                v140_.v152 = v93;
                *(_QWORD*)((char*)&v140_.v153 + 4) = 0;
                nn_font_5665e0((__int64)&v140_.v151, (float*)&v134_.v134,
                               &v132_.v132, v124 + a2 - v140_.v144);
                LODWORD(v94) = v134_.v135;
                v95 = *(float*)&v134_.v135 - *(float*)&v134_.v134;
                GameRoutine_5662e0(&v140_.v151, v94);
                v96 = v20 * 0x1.0000000000000p-1f;
                v97 = ceilf(v20 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v96 = v97;
                }
                v98 = v95 * 0x1.0000000000000p-1f;
                v99 = ceilf(v95 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v98 = v99;
                }
                *(float*)(a1 + 20) =
                    v84 + (float)(*(float*)&v140_.v146 + (float)(v96 - v98));
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_81;
                }
              }
              else {
                if (v20 < (float)(*(float*)(a1 + 20) - *(float*)&v140_.v146)) {
                  v20 = *(float*)(a1 + 20) - *(float*)&v140_.v146;
                }
                *(float*)(a1 + 20) = v84 + *(float*)&v140_.v146;
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_81;
                }
              }
              v129 = 0;
              v127 = v140_.v140;
            }
            else {
              if (v65 != 1) {
                if (v65 == 2) {
                  v129 = 1;
                }
                goto LABEL_89;
              }
            LABEL_81:
              v129 = 0;
            }
          LABEL_89:
            v29 = v140_.v144;
            v34 = v66 - v67;
            v140_.v140 = v140_.v144;
            goto LABEL_90;
          }
          HIDWORD(v140_.v148) = 0;
          v140_.v140 = v37;
          GameRoutine_5662e0(&v140_.v151, v53);
        LABEL_23:
          v35 = 10;
          v29 = v140_.v140;
          if ((__int64)(v140_.v140 - a2) > v12) {
            goto LABEL_9;
          }
        }
        if ((v35 & 0xFFFFFF00) == 0x2000 &&
            (v35 == 8203 || (v35 & 0x20FE) == 0x200E ||
             v35 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v35 - 42)) &
                                    0x4000000000001FLL) != 0 ||
             v35 - 8294 < 4)) {
          goto LABEL_90;
        }
        v54 = *(_DWORD*)(a1 + 24);
        v55 = 0x0.0p+0f;
        if ((v130 & 1) == 0) {
          v55 = *(float*)(a1 + 12) *
                (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                    **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                                    HIDWORD(v140_.v148), v35);
        }
        v56 = *(_QWORD*)(a1 + 40);
        v140_.v154 = 0;
        v140_.v155 = 0;
        v140_.v153 = (__typeof__(v140_.v153)){0};
        v140_.v151 = 0;
        v140_.v152 = 0;
        (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v56 + 152LL))(
            v56, &v140_.v151, v35);
        if ((unsigned __int16)v140_.v153 <= (unsigned int)WORD3(v140_.v153)) {
          break;
        }
        v59 = (__int64 (*)(_QWORD*))v140_.v141;
        v60 = (unsigned __int64*)((char*)&v140_.v140 + (v140_.v142 >> 1));
        if ((v140_.v142 & 1) != 0) {
          v59 = *(__int64 (**)(_QWORD*))((char*)v140_.v141 + *v60);
        }
        v35 = v59(v60);
        v29 = v140_.v140;
        if ((__int64)(v140_.v140 - a2) > v12) {
          goto LABEL_9;
        }
      }
      v61 = v34 + *(float*)(a1 + 64);
      if ((v129 & 1) == 0) {
        v61 = v34;
      }
      if (*(_BYTE*)(a1 + 56) == 1) {
        break;
      }
      LOWORD(v58) = WORD2(v140_.v152);
      v62 = v61 + (float)((float)v58 * *(float*)(a1 + 12));
      *(_QWORD*)&v57 = 0;
      if ((v130 & 1) == 0) {
        goto LABEL_56;
      }
    LABEL_57:
      v63 = (float)(v55 + v62) + *(float*)&v57;
      if (!v42) {
        v64 = 0x0.0p+0f;
        if ((int)v36 < v131) {
          v64 = *(float*)(a6 + 4LL * (int)v36);
        }
        if (v63 > (float)(*(float*)(a1 + 60) + v64)) {
          HIDWORD(v140_.v148) = 0;
          v140_.v140 = v37;
          goto LABEL_23;
        }
      }
      v34 = v63 - *(float*)&v57;
      v100 = *(float*)(a1 + 20);
      v101 = *(_QWORD*)(a1 + 40);
      if ((v129 & 1) != 0) {
        v100 = *(float*)(a1 + 64) + v100;
      }
      *(float*)(a1 + 20) = v55 + v100;
      v102 = (*(__int64 (**)(__int64))(*(_QWORD*)v101 + 200LL))(v101);
      LODWORD(v103) = *(_DWORD*)(a1 + 24);
      v104 = *(float*)&v103 +
             (float)(PSEUDO_UNFUSED(*(float*)(a1 + 16) *
                                    (float)(-SWORD2(v140_.v155) - v102)));
      *(float*)(a1 + 24) = v104;
      GameRoutine_55c300(a1, (__int64)&v140_.v151, v104, v103);
      *(_DWORD*)(a1 + 24) = v54;
      HIDWORD(v140_.v148) = v35;
      v129 = 1;
      v29 = v140_.v140;
    LABEL_90:
      if (v17 < 0x1.fffffe0000000p+127f) {
        v37 = v29;
      }
      v119 = (__int64 (*)(void))v140_.v141;
      if ((v140_.v142 & 1) != 0) {
        v119 = *(__int64 (**)(void))(
            (char*)v140_.v141 +
            *(unsigned __int64*)((char*)&v140_.v140 + (v140_.v142 >> 1)));
      }
      v38 = v119();
      v29 = v140_.v140;
      v35 = v38;
      if ((__int64)(v140_.v140 - a2) > v12) {
        goto LABEL_9;
      }
    }
    v62 = v61 + *(float*)(a1 + 32);
    *(_QWORD*)&v57 = 0;
    if ((v130 & 1) != 0) {
      goto LABEL_57;
    }
  LABEL_56:
    *(float*)&v57 =
        *(float*)(a1 + 12) *
        (float)(*(int (**)(_QWORD, _QWORD, _QWORD, long double))(
            **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v35, 0, v57);
    goto LABEL_57;
  }
LABEL_9:
  if ((v130 & 1) != 0) {
    v30 = *(float*)(a1 + 20);
    v31 = *(float*)&v140_.v146;
    v32 = v126;
    v33 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v33 == 256) {
      goto LABEL_101;
    }
  }
  else {
    v30 = (float)(PSEUDO_UNFUSED(
              *(float*)(a1 + 12) *
              (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                                  HIDWORD(v140_.v148), 0))) +
          *(float*)(a1 + 20);
    *(float*)(a1 + 20) = v30;
    v31 = *(float*)&v140_.v146;
    v32 = v126;
    v33 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v33 == 256) {
      goto LABEL_101;
    }
  }
  if (v33 != 512) {
    v10 = (float)(v10 - v125) + *(float*)(a1 + 24);
  }
LABEL_101:
  v120 = *(_QWORD*)(a1 + 88);
  *(float*)(a1 + 24) = v10;
  v121 = v30 - v31;
  if (v20 < v121) {
    v20 = v121;
  }
  (*(void (**)(__int64, __int64**))(*(_QWORD*)v120 + 56LL))(v120, &v140_.v143);
  (*(void (**)(_QWORD, __int64, unsigned __int64, unsigned __int64))(
      **(_QWORD**)(a1 + 88) + 88LL))(*(_QWORD*)(a1 + 88), a1, a2, v32);
  return v20;
}

__int64 nn_font_567fe0(__int64 a1, float* a2, unsigned __int64* a3, int a4)
{
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  char v8;
  unsigned __int64 v11;
  char v12;
  float v13;
  __int64 v14;
  float v15;
  __int64 (*v16)(_QWORD*);
  _QWORD* v17;
  char v18;
  unsigned int v19;
  unsigned __int64 v20;
  char v21;
  float v22;
  unsigned __int64 v23;
  int v24;
  float v25;
  unsigned __int64* v26;
  float v27;
  unsigned int v29;
  char v30;
  unsigned int v31;
  bool v32;
  char v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  long double v49;
  int v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  __int64 (*v63)(void);
  struct {
    __int64 v64;
    __int64 v65;
  } v64_;
  struct {
    _QWORD v66[2];
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
  } v66_;
  _QWORD v78[6];
  float v79;
  __int64 v80;
  float v81;
  struct {
    unsigned __int64 v82;
    __int64 (*v83)(_QWORD);
    __int64 v84;
    _QWORD v85[7];
    char gap272_[8];
    unsigned __int64* v86;
  } v82_;

  v4 = *a3;
  v5 = *(_DWORD*)(a1 + 12);
  v6 = *(_DWORD*)(a1 + 16);
  v8 = *(_BYTE*)(a1 + 56);
  v11 = *a3 + 2LL * a4;
  v12 = *(_BYTE*)(a1 + 99);
  v13 = *(float*)(a1 + 60);
  v82_.v85[0] = a1;
  v82_.v85[1] = v4;
  v14 = *(_QWORD*)(a1 + 40);
  v82_.v86 = a3;
  v82_.v85[5] = 0;
  v82_.v83 = nullptr;
  v82_.v84 = 0;
  v82_.v82 = 0;
  v82_.v85[4] = __PAIR64__(v6, v5);
  v82_.v85[2] = v11;
  v82_.v85[3] = 0;
  Font_55d7a0((void*)(&v82_.v82), v14);
  v15 = TextTagProcessor_55c240(a1);
  *a2 = 0x0.0p+0f;
  a2[2] = 0x0.0p+0f;
  v82_.v82 = v4;
  a2[1] = fminf(v15, 0x0.0p+0f);
  a2[3] = fmaxf(v15, 0x0.0p+0f);
  (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 88) + 64LL))(
      *(_QWORD*)(a1 + 88), v82_.v85);
  v16 = (__int64 (*)(_QWORD*))v82_.v83;
  v17 = (unsigned __int64*)((char*)&v82_.v82 + (v82_.v84 >> 1));
  if ((v82_.v84 & 1) != 0) {
    v16 = *(__int64 (**)(_QWORD*))((char*)v82_.v83 + *v17);
  }
  v18 = v8 & v12;
  v19 = v16(v17);
  v20 = v82_.v82;
  if (v82_.v82 <= v11) {
    v22 = 0x0.0p+0f;
    v29 = v19;
    v30 = 0;
    v23 = 0;
    v21 = 0;
    while (1) {
      v32 = v23 != 0 && v13 < 0x1.fffffe0000000p+127f;
      v33 = v32;
      while (1) {
        if ((v18 & 1) != 0) {
          if ((v33 & 1) == 0) {
            if (v29 >= 0x20) {
              if ((v29 & 0xFFFFFF00) == 0x2000 &&
                  (v29 == 8203 || (v29 & 0x20FE) == 0x200E || v29 - 8234 < 5 ||
                   v29 == 8288 || v29 - 8294 < 4)) {
                goto LABEL_114;
              }
              if ((v30 & 1) != 0) {
                v22 = v22 + *(float*)(a1 + 64);
              }
              if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
                v57 = v22 + *(float*)(a1 + 32);
              }
              else {
                v57 = v22 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                        **(_QWORD**)(a1 + 40) + 128LL))(
                                        *(_QWORD*)(a1 + 40), v29) *
                                    *(float*)(a1 + 12));
              }
              v39 = 0x0.0p+0f;
              v40 = v57 + 0x0.0p+0f;
            LABEL_103:
              v58 = *a2;
              if (v40 < *a2) {
                v58 = v40;
              }
              *a2 = v58;
              v59 = a2[2];
              if (v59 < v40) {
                v59 = v40;
              }
              a2[2] = v59;
              if (*(_BYTE*)(a1 + 98) == 1) {
                v60 = *(float*)(a1 + 24);
                v61 = a2[1];
                if (v60 < v61) {
                  v61 = *(float*)(a1 + 24);
                }
                a2[1] = v61;
                v62 = v60 + (*(float (**)(_QWORD, __int64))(
                                **(_QWORD**)(a1 + 88) + 40LL))(
                                *(_QWORD*)(a1 + 88), a1);
                if (a2[3] >= v62) {
                  v62 = a2[3];
                }
                a2[3] = v62;
              }
              v20 = v82_.v82;
              v22 = v40 - v39;
              v30 = 1;
              HIDWORD(v82_.v85[5]) = v29;
              goto LABEL_114;
            }
          LABEL_48:
            if (v29 != 10) {
              goto LABEL_63;
            }
            goto LABEL_59;
          }
          if (v29 < 0x20) {
            goto LABEL_48;
          }
          if ((v29 & 0xFFFFFF00) == 0x2000 &&
              (v29 == 8203 || (v29 & 0x20FE) == 0x200E ||
               v29 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v29 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v29 - 8294 < 4)) {
            goto LABEL_114;
          }
          if ((v30 & 1) != 0) {
            v34 = v22 + *(float*)(a1 + 64);
          }
          else {
            v34 = v22;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v35 = v34 + *(float*)(a1 + 32);
          }
          else {
            v35 = v34 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v29) *
                                *(float*)(a1 + 12));
          }
          v39 = 0x0.0p+0f;
          v40 = v35 + 0x0.0p+0f;
          if ((float)((float)(v35 + 0x0.0p+0f) + *(float*)(a1 + 72)) <=
              *(float*)(a1 + 60)) {
            goto LABEL_103;
          }
          v21 = 1;
          v82_.v82 = v23;
          if (v23 > v11) {
            goto LABEL_7;
          }
        }
        else {
          if (v29 < 0x20) {
            goto LABEL_48;
          }
          if ((v29 & 0xFFFFFF00) == 0x2000 &&
              (v29 == 8203 || (v29 & 0x20FE) == 0x200E ||
               v29 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v29 - 42)) &
                                      0x4000000000001FLL) != 0 ||
               v29 - 8294 < 4)) {
            goto LABEL_114;
          }
          if ((v30 & 1) != 0) {
            v36 = v22 + *(float*)(a1 + 64);
          }
          else {
            v36 = v22;
          }
          if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
            v37 = v36 + *(float*)(a1 + 32);
          }
          else {
            v37 = v36 + (float)((float)(*(int (**)(_QWORD, _QWORD))(
                                    **(_QWORD**)(a1 + 40) + 128LL))(
                                    *(_QWORD*)(a1 + 40), v29) *
                                *(float*)(a1 + 12));
          }
          v38 = v37 +
                (float)((float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                            **(_QWORD**)(a1 + 40) + 184LL))(
                            *(_QWORD*)(a1 + 40), HIDWORD(v82_.v85[5]), v29) *
                        *(float*)(a1 + 12));
          v39 =
              *(float*)(a1 + 12) *
              (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v29, 0);
          v40 = v38 + v39;
          if ((v33 & 1) == 0 ||
              (float)(v40 + *(float*)(a1 + 72)) <= *(float*)(a1 + 60)) {
            goto LABEL_103;
          }
          v21 = 1;
          v82_.v82 = v23;
          if (v23 > v11) {
            goto LABEL_6;
          }
        }
        v29 = 10;
        v20 = v23;
      LABEL_59:
        if ((*(_BYTE*)(a1 + 97) & 1) == 0) {
          if ((v18 & 1) == 0) {
            v41 = (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                                HIDWORD(v82_.v85[5]), 0);
            v20 = v82_.v82;
            v22 = v22 + (float)(v41 * *(float*)(a1 + 12));
          }
          HIDWORD(v82_.v85[5]) = 0;
        }
      LABEL_63:
        v79 = v22;
        v80 = 0;
        v81 = 0x0.0p+0f;
        v82_.v85[1] = v20;
        LODWORD(v82_.v85[5]) = (v30 & 1) == 0;
        *(float*)(a1 + 20) = v22;
        if (v13 >= 0x1.fffffe0000000p+127f || v29 == 10 || v23 == 0) {
          goto LABEL_71;
        }
        v64_.v64 = 0;
        v64_.v65 = 0;
        qmemcpy(v78, v82_.v85, sizeof(v78));
        v42 = *(_QWORD*)(a1 + 88);
        v66_.v75 = *(_QWORD*)(a1 + 80);
        v66_.v76 = v42;
        v43 = *(_QWORD*)(a1 + 88);
        v66_.v77 = *(_QWORD*)(a1 + 96);
        v78[0] = v66_.v66;
        v44 = *(_QWORD*)(a1 + 56);
        v66_.v71 = *(_QWORD*)(a1 + 48);
        v66_.v72 = v44;
        v45 = *(_QWORD*)(a1 + 72);
        v66_.v73 = *(_QWORD*)(a1 + 64);
        v66_.v74 = v45;
        v46 = *(_QWORD*)(a1 + 24);
        v66_.v67 = *(_QWORD*)(a1 + 16);
        v66_.v68 = v46;
        v47 = *(_QWORD*)(a1 + 40);
        v66_.v69 = *(_QWORD*)(a1 + 32);
        v66_.v70 = v47;
        v48 = *(_QWORD*)(a1 + 8);
        v66_.v66[0] = *(_QWORD*)a1;
        v66_.v66[1] = v48;
        (*(void (**)(__int64, __int64*, _QWORD*, _QWORD))(
            *(_QWORD*)v43 + 32LL))(v43, &v64_.v64, v78, v29);
        LODWORD(v49) = v64_.v65;
        if (*(float*)&v64_.v65 <= *(float*)&v64_.v64) {
          break;
        }
        *(float*)&v49 = *((float*)&v66_.v67 + 1) - *(float*)&v82_.v85[3];
        if ((float)(*((float*)&v66_.v67 + 1) - *(float*)&v82_.v85[3]) <=
            *(float*)(a1 + 60)) {
          break;
        }
        v82_.v82 = v23;
        GameRoutine_567cd0(v66_.v66, v49);
        v20 = v82_.v82;
        v29 = 10;
        v21 = 1;
        if (v82_.v82 > v11) {
          goto LABEL_5;
        }
      }
      GameRoutine_567cd0(v66_.v66, v49);
    LABEL_71:
      v50 = (*(__int64 (**)(_QWORD, float*, _QWORD*, _QWORD))(
          **(_QWORD**)(a1 + 88) + 32LL))(*(_QWORD*)(a1 + 88), &v79, v82_.v85,
                                         v29);
      v51 = a2[3];
      if (v29 == 10 && (*(_BYTE*)(a1 + 98) & 1) != 0 &&
          *(float*)(a1 + 24) < v51) {
        *(float*)(a1 + 24) = v51;
        v51 = a2[3];
      }
      v52 = v79;
      v53 = *(float*)&v80;
      v54 = *a2;
      v55 = a2[1];
      v20 = v82_.v85[1];
      v32 = v79 < *a2;
      v82_.v82 = v82_.v85[1];
      if (!v32) {
        v52 = v54;
      }
      if (*(float*)&v80 >= v55) {
        v53 = v55;
      }
      *a2 = v52;
      a2[1] = v53;
      v56 = a2[2];
      if (v56 < *((float*)&v80 + 1)) {
        v56 = *((float*)&v80 + 1);
      }
      if (v51 < v81) {
        v51 = v81;
      }
      a2[2] = v56;
      a2[3] = v51;
      v22 = *(float*)(a1 + 20);
      if (v50 <= 1) {
        if (v50 == 1) {
          v30 = 0;
        }
      }
      else {
        switch (v50) {
        case 2:
          v30 = 1;
          break;
        case 4:
          v21 = 0;
          *v82_.v86 += 2LL * a4;
          return v21 & 1;
        case 3:
          goto LABEL_5;
        default:
          break;
        }
      }
    LABEL_114:
      if (v13 < 0x1.fffffe0000000p+127f) {
        v23 = v20;
      }
      v63 = (__int64 (*)(void))v82_.v83;
      if ((v82_.v84 & 1) != 0) {
        v63 = *(__int64 (**)(void))(
            (char*)v82_.v83 +
            *(unsigned __int64*)((char*)&v82_.v82 + (v82_.v84 >> 1)));
      }
      v31 = v63();
      v20 = v82_.v82;
      v29 = v31;
      if (v82_.v82 > v11) {
        goto LABEL_5;
      }
    }
  }
  v21 = 0;
  v22 = 0x0.0p+0f;
LABEL_5:
  v23 = v20;
  if ((v18 & 1) == 0) {
  LABEL_6:
    v24 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
        **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                        HIDWORD(v82_.v85[5]), 0);
    v23 = v82_.v82;
    v22 = v22 + (float)((float)v24 * *(float*)(a1 + 12));
  }
LABEL_7:
  v25 = *a2;
  v26 = v82_.v86;
  if (v22 < *a2) {
    v25 = v22;
  }
  *a2 = v25;
  v27 = a2[2];
  if (v27 < v22) {
    v27 = v22;
  }
  a2[2] = v27;
  *v26 = v23;
  (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 88) + 72LL))(
      *(_QWORD*)(a1 + 88), v82_.v85);
  return v21 & 1;
}

float nn_font_568880(__int64 a1, unsigned __int64 a2, int a3, int a4,
                     _DWORD* a5, __int64 a6)
{
  char v7;
  char v8;
  float v9;
  float v10;
  unsigned __int64 v11;
  float v17;
  __int64* v18;
  __int64 v19;
  float v20;
  float v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 (*v27)(_QWORD*);
  _QWORD* v28;
  unsigned int v29;
  unsigned __int64 v30;
  float v31;
  float v32;
  unsigned __int64 v33;
  int v34;
  float v35;
  unsigned int v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned int v39;
  bool v40;
  int v41;
  _BOOL4 v42;
  bool v43;
  _BOOL4 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  long double v54;
  int v55;
  float v56;
  __int64 v57;
  long double v58;
  unsigned int v59;
  __int64 (*v60)(_QWORD*);
  _QWORD* v61;
  float v62;
  float v63;
  float v64;
  float v65;
  int v66;
  float v67;
  float v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  float v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  long double v82;
  float v83;
  float v84;
  float v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  long double v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  __int64 v102;
  int v103;
  double v104;
  float v105;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  long double v118;
  float v119;
  __int64 (*v120)(void);
  __int64 v121;
  float v122;
  _DWORD* v124;
  int v125;
  float v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  char v130;
  char v131;
  int v132;
  struct {
    unsigned __int64 v133;
    __int64 v134;
  } v133_;
  struct {
    __int64* v135;
    unsigned __int64 v136;
    unsigned __int64 v137;
    unsigned __int64 v138;
    __int64 v139;
    __int64 v140;
  } v135_;
  struct {
    unsigned __int64 v141;
    __int64 (*v142)(_QWORD);
    __int64 v143;
    __int64* v144;
    unsigned __int64 v145;
    unsigned __int64 v146;
    unsigned __int64 v147;
    __int64 v148;
    __int64 v149;
    float v150;
    float v151;
    __int64 v152;
    __int64 v153;
    __int128 v154;
    __int64 v155;
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
  } v141_;

  v7 = *(_BYTE*)(a1 + 56);
  v8 = *(_BYTE*)(a1 + 99);
  v9 = *(float*)(a1 + 20);
  v10 = *(float*)(a1 + 24);
  v11 = a2 + 2LL * a3;
  v17 = *(float*)(a1 + 60);
  v18 = *(__int64**)(a1 + 88);
  v19 = *v18;
  v141_.v150 = v10;
  v141_.v151 = v9;
  (*(void (**)(__int64*, __int64, unsigned __int64, unsigned __int64))(
      v19 + 80))(v18, a1, a2, v11);
  v20 = GameRoutine_5691c0(a1, &v141_.v151, &v141_.v150, a2, a3);
  v21 = *(float*)(a1 + 24);
  v141_.v144 = (__int64*)a1;
  v141_.v145 = a2;
  v141_.v146 = v11;
  v141_.v149 = 0;
  v132 = a4;
  v126 = v21;
  v141_.v147 = __PAIR64__(LODWORD(v141_.v150), LODWORD(v141_.v151));
  v22 = *(_DWORD*)(a1 + 16);
  LODWORD(v141_.v148) = *(_DWORD*)(a1 + 12);
  HIDWORD(v141_.v148) = v22;
  if (a4 != 0) {
    if (a4 < 1) {
      v23 = 0;
    }
    else {
      v23 = *a5;
    }
    *(_DWORD*)(a1 + 20) = v23;
  }
  v24 = *(_QWORD*)(a1 + 40);
  v125 = a3;
  v25 = a3;
  v141_.v142 = nullptr;
  v141_.v143 = 0;
  v141_.v141 = 0;
  Font_55d7a0((void*)(&v141_.v141), v24);
  v26 = *(_QWORD*)(a1 + 88);
  v141_.v141 = a2;
  (*(void (**)(__int64, __int64**))(*(_QWORD*)v26 + 48LL))(v26, &v141_.v144);
  v27 = (__int64 (*)(_QWORD*))v141_.v142;
  v127 = v11;
  v28 = (unsigned __int64*)((char*)&v141_.v141 + (v141_.v143 >> 1));
  if ((v141_.v143 & 1) != 0) {
    v27 = *(__int64 (**)(_QWORD*))((char*)v141_.v142 + *v28);
  }
  v131 = v7 & v8;
  v29 = v27(v28);
  v30 = v141_.v141;
  if (a3 >= (__int64)(v141_.v141 - a2) >> 1) {
    v35 = 0x0.0p+0f;
    v36 = v29;
    v124 = a5;
    v130 = 0;
    LODWORD(v37) = 0;
    v38 = a2;
    v128 = a2;
    while (1) {
      v40 = (int)v37 >= v132 && v38 == v128;
      v41 = v37;
      v42 = v40;
      v43 = v40 || v17 >= 0x1.fffffe0000000p+127f;
      while (1) {
        while (v36 <= 0x1F) {
          v141_.v145 = v30;
          LODWORD(v141_.v149) = (v130 & 1) == 0;
          v45 = v17 >= 0x1.fffffe0000000p+127f || v36 == 10;
          if (v45 || v42) {
            goto LABEL_63;
          }
          v133_.v133 = 0;
          v133_.v134 = 0;
          v135_.v138 = v141_.v147;
          v135_.v139 = v141_.v148;
          v135_.v137 = v141_.v146;
          v135_.v140 = v141_.v149;
          v135_.v135 = v141_.v144;
          v135_.v136 = v141_.v145;
          v46 = *(_QWORD*)(a1 + 80);
          v47 = *(_QWORD*)(a1 + 88);
          v135_.v135 = &v141_.v152;
          v141_.v161 = v46;
          v141_.v162 = v47;
          v48 = *(_QWORD*)(a1 + 88);
          v141_.v163 = *(_QWORD*)(a1 + 96);
          v49 = *(_QWORD*)(a1 + 56);
          v141_.v157 = *(_QWORD*)(a1 + 48);
          v141_.v158 = v49;
          v50 = *(_QWORD*)(a1 + 72);
          v141_.v159 = *(_QWORD*)(a1 + 64);
          v141_.v160 = v50;
          v51 = *(_QWORD*)(a1 + 24);
          *(_QWORD*)&v141_.v154 = *(_QWORD*)(a1 + 16);
          *((_QWORD*)&v141_.v154 + 1) = v51;
          v52 = *(_QWORD*)(a1 + 40);
          v141_.v155 = *(_QWORD*)(a1 + 32);
          v141_.v156 = v52;
          v53 = *(_QWORD*)(a1 + 8);
          v141_.v152 = *(_QWORD*)a1;
          v141_.v153 = v53;
          (*(void (**)(__int64, unsigned __int64*, __int64**, _QWORD))(
              *(_QWORD*)v48 + 32LL))(v48, &v133_.v133, &v135_.v135, v36);
          LODWORD(v54) = v133_.v134;
          if (*(float*)&v133_.v134 <= *(float*)&v133_.v133) {
            goto LABEL_62;
          }
          *(_QWORD*)&v54 = 0;
          if ((int)v37 < v132) {
            LODWORD(v54) = *(_DWORD*)(a6 + 4LL * (int)v37);
          }
          *(float*)&v54 = *(float*)(a1 + 60) + *(float*)&v54;
          if ((float)(*((float*)&v141_.v154 + 1) - *(float*)&v141_.v147) <=
              *(float*)&v54) {
          LABEL_62:
            GameRoutine_567cd0(&v141_.v152, v54);
          LABEL_63:
            v66 = (*(__int64 (**)(_QWORD, _QWORD, __int64**))(
                **(_QWORD**)(a1 + 88) + 24LL))(*(_QWORD*)(a1 + 88), v36,
                                               &v141_.v144);
            v67 = *(float*)(a1 + 20);
            v68 = v141_.v151;
            if (v36 == 10 && (*(_BYTE*)(a1 + 97) & 1) == 0) {
              v69 = *(unsigned __int8*)(a1 + 98);
              HIDWORD(v141_.v149) = 0;
              if (v69 == 1) {
                v70 = *(_QWORD*)(a1 + 72);
                v71 = *(_QWORD*)(a1 + 80);
                v72 = *(_QWORD*)(a1 + 88);
                v73 = *(_QWORD*)(a1 + 96);
                v74 = v66;
                v75 = *(float*)(a1 + 24);
                v135_.v135 = nullptr;
                v135_.v136 = 0;
                v141_.v161 = v71;
                v141_.v162 = v72;
                v141_.v163 = v73;
                v76 = *(_QWORD*)(a1 + 40);
                v77 = *(_QWORD*)(a1 + 56);
                v78 = *(_QWORD*)(a1 + 64);
                v141_.v157 = *(_QWORD*)(a1 + 48);
                v141_.v158 = v77;
                v141_.v159 = v78;
                v141_.v160 = v70;
                v79 = *(_QWORD*)(a1 + 24);
                v80 = *(_QWORD*)(a1 + 32);
                *(_QWORD*)&v141_.v154 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v141_.v154 + 1) = v79;
                v141_.v155 = v80;
                v141_.v156 = v76;
                v133_.v133 = v141_.v141;
                v81 = *(_QWORD*)(a1 + 8);
                v141_.v152 = *(_QWORD*)a1;
                v141_.v153 = v81;
                *(_QWORD*)((char*)&v141_.v154 + 4) = 0;
                nn_font_567fe0((__int64)&v141_.v152, (float*)&v135_.v135,
                               &v133_.v133, v125 - ((v141_.v141 - a2) >> 1));
                LODWORD(v82) = HIDWORD(v135_.v136);
                v83 = *((float*)&v135_.v136 + 1) - *((float*)&v135_.v135 + 1);
                GameRoutine_567cd0(&v141_.v152, v82);
                v84 = (*(float (**)(_QWORD, __int64))(
                    **(_QWORD**)(a1 + 88) + 40LL))(*(_QWORD*)(a1 + 88), a1);
                v66 = v74;
                *(float*)(a1 + 24) = v75 + (float)(v83 - v84);
              }
            }
            if (v66 > 2) {
              if (v66 != 3) {
                if (v66 == 4) {
                  goto LABEL_9;
                }
                goto LABEL_89;
              }
              v85 = 0x0.0p+0f;
              v37 = (int)v37 + 1LL;
              if (v41 + 1 < v132) {
                v85 = *(float*)&v124[v37];
              }
              if ((*(_DWORD*)(a1 + 80) & 3) == 2) {
                v109 = *(_QWORD*)(a1 + 80);
                v110 = *(_QWORD*)(a1 + 88);
                v111 = *(_QWORD*)(a1 + 96);
                v135_.v135 = nullptr;
                v135_.v136 = 0;
                v141_.v161 = v109;
                v141_.v162 = v110;
                v112 = *(_QWORD*)(a1 + 48);
                v113 = *(_QWORD*)(a1 + 56);
                v133_.v133 = v141_.v145;
                v141_.v163 = v111;
                v141_.v157 = v112;
                v141_.v158 = v113;
                v114 = *(_QWORD*)(a1 + 72);
                v141_.v159 = *(_QWORD*)(a1 + 64);
                v141_.v160 = v114;
                v115 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&v141_.v154 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v141_.v154 + 1) = v115;
                v116 = *(_QWORD*)(a1 + 40);
                v141_.v155 = *(_QWORD*)(a1 + 32);
                v141_.v156 = v116;
                v117 = *(_QWORD*)(a1 + 8);
                v141_.v152 = *(_QWORD*)a1;
                v141_.v153 = v117;
                *(_QWORD*)((char*)&v141_.v154 + 4) = 0;
                nn_font_567fe0((__int64)&v141_.v152, (float*)&v135_.v135,
                               &v133_.v133, v125 - ((v141_.v145 - a2) >> 1));
                LODWORD(v118) = v135_.v136;
                v119 = *(float*)&v135_.v136 - *(float*)&v135_.v135;
                GameRoutine_567cd0(&v141_.v152, v118);
                *(float*)(a1 + 20) =
                    v85 + (float)((float)(v20 - v119) + *(float*)&v141_.v147);
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_81;
                }
              }
              else if ((*(_DWORD*)(a1 + 80) & 3) == 1) {
                v86 = *(_QWORD*)(a1 + 80);
                v87 = *(_QWORD*)(a1 + 88);
                v88 = *(_QWORD*)(a1 + 96);
                v135_.v135 = nullptr;
                v135_.v136 = 0;
                v141_.v161 = v86;
                v141_.v162 = v87;
                v89 = *(_QWORD*)(a1 + 48);
                v90 = *(_QWORD*)(a1 + 56);
                v133_.v133 = v141_.v145;
                v141_.v163 = v88;
                v141_.v157 = v89;
                v141_.v158 = v90;
                v91 = *(_QWORD*)(a1 + 72);
                v141_.v159 = *(_QWORD*)(a1 + 64);
                v141_.v160 = v91;
                v92 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)&v141_.v154 = *(_QWORD*)(a1 + 16);
                *((_QWORD*)&v141_.v154 + 1) = v92;
                v93 = *(_QWORD*)(a1 + 40);
                v141_.v155 = *(_QWORD*)(a1 + 32);
                v141_.v156 = v93;
                v94 = *(_QWORD*)(a1 + 8);
                v141_.v152 = *(_QWORD*)a1;
                v141_.v153 = v94;
                *(_QWORD*)((char*)&v141_.v154 + 4) = 0;
                nn_font_567fe0((__int64)&v141_.v152, (float*)&v135_.v135,
                               &v133_.v133, v125 - ((v141_.v145 - a2) >> 1));
                LODWORD(v95) = v135_.v136;
                v96 = *(float*)&v135_.v136 - *(float*)&v135_.v135;
                GameRoutine_567cd0(&v141_.v152, v95);
                v97 = v20 * 0x1.0000000000000p-1f;
                v98 = ceilf(v20 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v97 = v98;
                }
                v99 = v96 * 0x1.0000000000000p-1f;
                v100 = ceilf(v96 * 0x1.0000000000000p-1f);
                if (*(_BYTE*)(a1 + 96) != 0) {
                  v99 = v100;
                }
                *(float*)(a1 + 20) =
                    v85 + (float)(*(float*)&v141_.v147 + (float)(v97 - v99));
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_81;
                }
              }
              else {
                if (v20 < (float)(*(float*)(a1 + 20) - *(float*)&v141_.v147)) {
                  v20 = *(float*)(a1 + 20) - *(float*)&v141_.v147;
                }
                *(float*)(a1 + 20) = v85 + *(float*)&v141_.v147;
                if (v17 >= 0x1.fffffe0000000p+127f) {
                  goto LABEL_81;
                }
              }
              v130 = 0;
              v128 = v141_.v141;
            }
            else {
              if (v66 != 1) {
                if (v66 == 2) {
                  v130 = 1;
                }
                goto LABEL_89;
              }
            LABEL_81:
              v130 = 0;
            }
          LABEL_89:
            v30 = v141_.v145;
            v35 = v67 - v68;
            v141_.v141 = v141_.v145;
            goto LABEL_90;
          }
          HIDWORD(v141_.v149) = 0;
          v141_.v141 = v38;
          GameRoutine_567cd0(&v141_.v152, v54);
        LABEL_23:
          v36 = 10;
          v30 = v141_.v141;
          if (v25 < (__int64)(v141_.v141 - a2) >> 1) {
            goto LABEL_9;
          }
        }
        if ((v36 & 0xFFFFFF00) == 0x2000 &&
            (v36 == 8203 || (v36 & 0x20FE) == 0x200E ||
             v36 - 8234 <= 0x36 && ((1LL << ((unsigned __int8)v36 - 42)) &
                                    0x4000000000001FLL) != 0 ||
             v36 - 8294 < 4)) {
          goto LABEL_90;
        }
        v55 = *(_DWORD*)(a1 + 24);
        v56 = 0x0.0p+0f;
        if ((v131 & 1) == 0) {
          v56 = *(float*)(a1 + 12) *
                (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                    **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                                    HIDWORD(v141_.v149), v36);
        }
        v57 = *(_QWORD*)(a1 + 40);
        v141_.v155 = 0;
        v141_.v156 = 0;
        v141_.v154 = (__typeof__(v141_.v154)){0};
        v141_.v152 = 0;
        v141_.v153 = 0;
        (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v57 + 152LL))(
            v57, &v141_.v152, v36);
        if ((unsigned __int16)v141_.v154 <= (unsigned int)WORD3(v141_.v154)) {
          break;
        }
        v60 = (__int64 (*)(_QWORD*))v141_.v142;
        v61 = (unsigned __int64*)((char*)&v141_.v141 + (v141_.v143 >> 1));
        if ((v141_.v143 & 1) != 0) {
          v60 = *(__int64 (**)(_QWORD*))((char*)v141_.v142 + *v61);
        }
        v36 = v60(v61);
        v30 = v141_.v141;
        if (v25 < (__int64)(v141_.v141 - a2) >> 1) {
          goto LABEL_9;
        }
      }
      v62 = v35 + *(float*)(a1 + 64);
      if ((v130 & 1) == 0) {
        v62 = v35;
      }
      if (*(_BYTE*)(a1 + 56) == 1) {
        break;
      }
      LOWORD(v59) = WORD2(v141_.v153);
      v63 = v62 + (float)((float)v59 * *(float*)(a1 + 12));
      *(_QWORD*)&v58 = 0;
      if ((v131 & 1) == 0) {
        goto LABEL_56;
      }
    LABEL_57:
      v64 = (float)(v56 + v63) + *(float*)&v58;
      if (!v43) {
        v65 = 0x0.0p+0f;
        if ((int)v37 < v132) {
          v65 = *(float*)(a6 + 4LL * (int)v37);
        }
        if (v64 > (float)(*(float*)(a1 + 60) + v65)) {
          HIDWORD(v141_.v149) = 0;
          v141_.v141 = v38;
          goto LABEL_23;
        }
      }
      v35 = v64 - *(float*)&v58;
      v101 = *(float*)(a1 + 20);
      v102 = *(_QWORD*)(a1 + 40);
      if ((v130 & 1) != 0) {
        v101 = *(float*)(a1 + 64) + v101;
      }
      *(float*)(a1 + 20) = v56 + v101;
      v103 = (*(__int64 (**)(__int64))(*(_QWORD*)v102 + 200LL))(v102);
      LODWORD(v104) = *(_DWORD*)(a1 + 24);
      v105 = *(float*)&v104 +
             (float)(PSEUDO_UNFUSED(*(float*)(a1 + 16) *
                                    (float)(-SWORD2(v141_.v156) - v103)));
      *(float*)(a1 + 24) = v105;
      GameRoutine_55c300(a1, (__int64)&v141_.v152, v105, v104);
      *(_DWORD*)(a1 + 24) = v55;
      HIDWORD(v141_.v149) = v36;
      v130 = 1;
      v30 = v141_.v141;
    LABEL_90:
      if (v17 < 0x1.fffffe0000000p+127f) {
        v38 = v30;
      }
      v120 = (__int64 (*)(void))v141_.v142;
      if ((v141_.v143 & 1) != 0) {
        v120 = *(__int64 (**)(void))(
            (char*)v141_.v142 +
            *(unsigned __int64*)((char*)&v141_.v141 + (v141_.v143 >> 1)));
      }
      v39 = v120();
      v30 = v141_.v141;
      v36 = v39;
      if (v25 < (__int64)(v141_.v141 - a2) >> 1) {
        goto LABEL_9;
      }
    }
    v63 = v62 + *(float*)(a1 + 32);
    *(_QWORD*)&v58 = 0;
    if ((v131 & 1) != 0) {
      goto LABEL_57;
    }
  LABEL_56:
    *(float*)&v58 =
        *(float*)(a1 + 12) *
        (float)(*(int (**)(_QWORD, _QWORD, _QWORD, long double))(
            **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40), v36, 0, v58);
    goto LABEL_57;
  }
LABEL_9:
  if ((v131 & 1) != 0) {
    v31 = *(float*)(a1 + 20);
    v32 = *(float*)&v141_.v147;
    v33 = v127;
    v34 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v34 == 256) {
      goto LABEL_101;
    }
  }
  else {
    v31 = (float)(PSEUDO_UNFUSED(
              *(float*)(a1 + 12) *
              (float)(*(int (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(a1 + 40) + 184LL))(*(_QWORD*)(a1 + 40),
                                                  HIDWORD(v141_.v149), 0))) +
          *(float*)(a1 + 20);
    *(float*)(a1 + 20) = v31;
    v32 = *(float*)&v141_.v147;
    v33 = v127;
    v34 = *(_DWORD*)(a1 + 80) & 0x300;
    if (v34 == 256) {
      goto LABEL_101;
    }
  }
  if (v34 != 512) {
    v10 = (float)(v10 - v126) + *(float*)(a1 + 24);
  }
LABEL_101:
  v121 = *(_QWORD*)(a1 + 88);
  *(float*)(a1 + 24) = v10;
  v122 = v31 - v32;
  if (v20 < v122) {
    v20 = v122;
  }
  (*(void (**)(__int64, __int64**))(*(_QWORD*)v121 + 56LL))(v121, &v141_.v144);
  (*(void (**)(_QWORD, __int64, unsigned __int64, unsigned __int64))(
      **(_QWORD**)(a1 + 88) + 88LL))(*(_QWORD*)(a1 + 88), a1, a2, v33);
  return v20;
}

__int64 nn_font_5697e0(__int64 a1, int a2, float* a3)
{

#pragma clang fp contract(off)
  _WORD* v7;
  _WORD* v8;
  int v9;
  unsigned __int64 v10;
  __int64* v12;
  unsigned __int16* v13;
  _WORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int v27;
  float v28;
  int v29;
  __int64 v30;
  __int64 v31;
  double v32;
  float v33;
  double v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  int v42;
  float v43;
  float v44;
  __int64 v45;
  float v46;
  long double v47;
  struct {
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v48_;
  __int64* v65;

  if ((unsigned int)(a2 - 16) <= 0xFFFFFFFD) {
    return GameRoutine_561490(a1, a2, a3);
  }
  v7 = *((_WORD**)a3 + 1);
  v8 = v7 - 1;
  v9 = (unsigned __int16)*(v7 - 1);
  if (v9 == 15) {
    v10 = (unsigned __int64)(v7 + 2);
    if ((unsigned __int64)(v7 + 2) > *((_QWORD*)a3 + 2)) {
      return 4;
    }
  }
  else {
    if (v9 != 14) {
      return 4;
    }
    v10 = (unsigned __int64)v8 + (unsigned __int16)v7[2] + 8;
    if (v10 > *((_QWORD*)a3 + 2)) {
      return 4;
    }
  }
  if (*v7 != 0 || v7[1] != 0) {
    return 0;
  }
  *((_QWORD*)a3 + 1) = v10;
  v12 = *(__int64**)a3;
  v13 = (unsigned __int16*)v10;
  v15 = v8;
  v16 = *(_QWORD*)(*(_QWORD*)a3 + 72LL);
  v17 = *(_QWORD*)(*(_QWORD*)a3 + 88LL);
  v18 = *(_QWORD*)(*(_QWORD*)a3 + 96LL);
  v48_.v58 = *(_QWORD*)(*(_QWORD*)a3 + 80LL);
  v19 = v12[7];
  v20 = v12[5];
  v21 = v12[6];
  v48_.v56 = v12[8];
  v22 = v12[3];
  v23 = v12[1];
  v24 = v12[2];
  v48_.v52 = v12[4];
  v25 = *v12;
  v48_.v50 = v24;
  v48_.v51 = v22;
  LODWORD(v22) = (unsigned __int16)v8[4];
  v48_.v53 = v20;
  v48_.v54 = v21;
  v48_.v59 = v17;
  v48_.v60 = v18;
  v48_.v56 = 0;
  v48_.v57 = v16;
  v48_.v55 = v19;
  HIDWORD(v48_.v52) = 0;
  v48_.v48 = v25;
  v48_.v49 = v23;
  v26 = (unsigned int)v22 >> 1;
  LODWORD(v48_.v58) = 768;
  v27 = (unsigned __int16)v8[5] >> 1;
  TextBox_567d30((__int64)&v48_.v48);
  v28 = GameRoutine_55c200(*(_QWORD*)a3) * 0x1.99999a0000000p-2f;
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v48_.v53 + 32LL))(v48_.v53);
  v30 = *(_QWORD*)a3;
  v65 = nullptr;
  v31 = *(_QWORD*)(v30 + 88);
  *((float*)&v48_.v49 + 1) = v28 / (float)v29;
  *(float*)&v48_.v50 = *((float*)&v48_.v49 + 1);
  GameRoutine_561430(&v65);
  v65 = GameData_2135f38[0] + 2;
  *(_QWORD*)(*(_QWORD*)a3 + 88LL) = &v65;
  v32 = TextBox_567d60(*(_QWORD**)a3, (unsigned __int64)v13, v26);
  v33 = *(float*)&v32;
  *(_QWORD*)(*(_QWORD*)a3 + 88LL) = v31;
  v34 = TextBox_567d60(&v48_.v48, (unsigned __int64)(v15 + 6), v27);
  v35 = *(float*)&v34;
  GameRoutine_561450(&v65);
  v36 = v33 - v35;
  if ((float)(v33 - v35) > 0x0.0p+0f) {
    v37 = v36 / (float)(unsigned int)(v27 + 1);
    v38 = v37 + *((float*)&v48_.v50 + 1);
    *(float*)&v48_.v56 = v37;
    *((float*)&v48_.v50 + 1) = v37 + *((float*)&v48_.v50 + 1);
    v39 = *(_QWORD*)a3;
    v40 = *(float*)(*(_QWORD*)a3 + 36LL);
    if (v40 == 0x0.0p+0f) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v38 = (float)(v36 * 0x1.0000000000000p-1f) + *((float*)&v48_.v50 + 1);
  *((float*)&v48_.v50 + 1) = v38;
  v39 = *(_QWORD*)a3;
  v40 = *(float*)(*(_QWORD*)a3 + 36LL);
  if (v40 != 0x0.0p+0f) {
  LABEL_15:
    v41 = v40 * *(float*)(v39 + 12);
    v42 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v39 + 40) + 32LL))(
        *(_QWORD*)(v39 + 40));
    v39 = *(_QWORD*)a3;
    v38 = *((float*)&v48_.v50 + 1) +
          (float)((float)(v41 * (float)v42) * 0x1.0000000000000p-1f);
    *((float*)&v48_.v50 + 1) = v38;
  }
LABEL_16:
  if (((_BYTE)a3[10] & 1) == 0) {
    *((float*)&v48_.v50 + 1) = *(float*)(v39 + 64) + v38;
  }
  v43 = *(float*)(v39 + 16);
  v44 = v43 * (float)(*(int (**)(_QWORD))(**(_QWORD**)(v39 + 40) + 200LL))(
                  *(_QWORD*)(v39 + 40));
  v45 = *(_QWORD*)(*(_QWORD*)a3 + 40LL);
  *(float*)&v48_.v51 = *(float*)&v48_.v51 - v44;
  if (v45 != 0) {
    v46 = *(float*)(*(_QWORD*)a3 + 12LL) *
          (float)(*(int (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v45 + 184LL))(
              v45, *((unsigned int*)a3 + 11), *v13);
    if (v46 != 0x0.0p+0f) {
      *((float*)&v48_.v50 + 1) = v46 + *((float*)&v48_.v50 + 1);
    }
  }
  *(float*)&v47 =
      TextBox_568750((__int64)&v48_.v48, (unsigned __int64)(v15 + 6), v27);
  GameRoutine_567cd0(&v48_.v48, v47);
  return 0;
}

#pragma GCC visibility pop
