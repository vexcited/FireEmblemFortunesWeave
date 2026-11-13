#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_e82ae8[])();

extern __int64 (*SdkData_e82b60[])();

extern __int64 (*SdkData_e82bd8[])();

extern __int64 (*SdkData_e836d0[])();

extern __int64 (*SdkData_e83748[])();

extern __int64 (*SdkData_e837c0[])();

extern __int64 (*SdkData_e838b0[])();

extern __int64 (*SdkData_e83928[])();

extern __int64 (*SdkData_e84af8[])();

extern __int64 (*SdkData_e84b70[])();

extern __int64 (*SdkData_e84f30[])();

extern __int64 (*SdkData_e84fa8[])();

extern __int64 (*SdkData_e85020[])();

__int64 SdkRoutine_833240(void);

__int64 SdkRoutine_8332c0(unsigned __int8**);

__int64 SdkRoutine_833e70(_QWORD);

__int64 SdkRoutine_835ee0(__int64);

__int64 SdkRoutine_8363a0(_QWORD*, unsigned __int64, __int64, __int64, __int64,
                          __int64, __int64, __int64, __int64);

__int64 SdkRoutine_837600(_QWORD);

char* SdkRoutine_8377c0(__int64, __int64);

__int64 SdkRoutine_839020(_QWORD, _QWORD);

__int64 SdkRoutine_8393e0(_QWORD);

__int64 SdkRoutine_83db20(__int64, __int64, unsigned __int8, char);

__int64 SdkRoutine_83de10(_QWORD);

__int64 SdkRoutine_83e420(__int64 result, _QWORD*);

__int64 SdkRoutine_83e550(_QWORD);

__int64 SdkRoutine_83e940(_QWORD);

__int64 SdkRoutine_83f0c0(void);

__int64 SdkRoutine_83f220(_QWORD, _QWORD);

__int64 SdkRoutine_83f2c0(_QWORD, _QWORD);

__int64 SdkRoutine_83f360(_QWORD, _QWORD);

__int64 SdkRoutine_83faf0(_QWORD, _QWORD);

__int64 SdkRoutine_83fb90(void);

__int64 SdkRoutine_840a60(_QWORD, _QWORD);

__int64 SdkRoutine_841040(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_841f10(_QWORD*, __int64);

__int64 SdkRoutine_8422a0(_QWORD);

__int64 SdkRoutine_846610(_QWORD);

__int64 SdkRoutine_846c40(_QWORD);

__int64 SdkRoutine_847380(_QWORD);

__int64 SdkRoutine_848300(_QWORD);

void __attribute__((noreturn)) SdkRoutine_84c1f0(const char*, ...);

__int64 SdkRoutine_856130(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8571c0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_857400(_QWORD);

__int64 SdkRoutine_857810(_QWORD);

__int64 SdkRoutine_8578d0(_QWORD);

__int64 SdkRoutine_858a50(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859610(_QWORD);

__int64 SdkRoutine_87c790(_QWORD);

__int64 SdkRoutine_87c7b0(_QWORD);

__int64 SdkHr_837160(__int64 a1, char** a2)
{
  _BYTE* v2;
  _BYTE* v3;
  char* v4;
  __int64 v7;
  _QWORD* v8;
  char* v9;
  char* v10;
  __int16 v11;
  char* v12;
  char v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  _QWORD* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;

  v2 = *(_BYTE**)a1;
  v3 = *(_BYTE**)(a1 + 8);
  if (*(_BYTE**)a1 != v3) {
    v4 = (char*)(a1 + 320);
    while (*v2 == 87) {
      *(_QWORD*)a1 = v2 + 1;
      if (v2 + 1 == v3 || v2[1] != 80) {
        v13 = 0;
        v14 = SdkRoutine_837600(a1);
        if (v14 == 0) {
          return 1;
        }
      }
      else {
        v13 = 1;
        *(_QWORD*)a1 = v2 + 2;
        v14 = SdkRoutine_837600(a1);
        if (v14 == 0) {
          return 1;
        }
      }
      v8 = *(_QWORD**)(a1 + 4912);
      v15 = *a2;
      v16 = v14;
      v7 = v8[1];
      if ((unsigned __int64)(v7 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
        v17 = (_QWORD*)SdkRoutine_8578d0(4096);
        if (v17 == nullptr) {
          v22 = SdkRoutine_87c7b0(0);
        LABEL_25:
          SdkRoutine_857810(v22);
          __udf(0);
        }
        v7 = 0;
        *v17 = v8;
        v17[1] = 0;
        v8 = v17;
        *(_QWORD*)(a1 + 4912) = v17;
      }
      v8[1] = v7 + 48;
      v9 = (char*)v8 + v7;
      *((_QWORD*)v9 + 2) = SdkData_e82b60;
      v10 = v9 + 16;
      v11 = *(_WORD*)(v10 + 9);
      *((_QWORD*)v10 + 2) = v15;
      *((_QWORD*)v10 + 3) = v16;
      v10[8] = 27;
      v10[32] = v13;
      *(_WORD*)(v10 + 9) = v11 & 0xF000 | 0x540;
      *a2 = v10;
      v12 = *(char**)(a1 + 304);
      if (v12 == *(char**)(a1 + 312)) {
        v18 = *(char**)(a1 + 296);
        v19 = v12 - v18;
        if (v18 == v4) {
          v22 = SdkRoutine_8578d0(2 * (v12 - v18));
          if (v22 == 0) {
            goto LABEL_25;
          }
          if (v12 != v4) {
            v20 = v22;
            SdkRoutine_858a50(v22, v18, v19);
            v22 = v20;
          }
          *(_QWORD*)(a1 + 296) = v22;
        }
        else {
          v22 = SdkRoutine_859610(*(_QWORD*)(a1 + 296));
          *(_QWORD*)(a1 + 296) = v22;
          if (v22 == 0) {
            goto LABEL_25;
          }
        }
        *(_QWORD*)(a1 + 312) = v22 + 8 * (v19 >> 2);
        v2 = *(_BYTE**)a1;
        v3 = *(_BYTE**)(a1 + 8);
        *(_QWORD*)(v22 + v19) = v10;
        *(_QWORD*)(a1 + 304) = v22 + v19 + 8;
        if (v2 == v3) {
          return 0;
        }
      }
      else {
        v2 = *(_BYTE**)a1;
        v3 = *(_BYTE**)(a1 + 8);
        *(_QWORD*)v12 = v10;
        *(_QWORD*)(a1 + 304) = v12 + 8;
        if (v2 == v3) {
          return 0;
        }
      }
    }
  }
  return 0;
}

__int64 SdkHr_837c80(unsigned __int8** a1, char a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64* v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  int v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  __int64 result;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  unsigned __int8* v28;
  __int64* v29;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  char* v37;
  __int64 v38;
  __int16 v39;
  __int16 v40;
  __int16 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  unsigned __int8* v52;
  __int64* v53;
  __int64 v54;
  unsigned __int8* v55;
  __int64 v56;
  __int64 v57;
  unsigned __int128 v58;
  __int64 v59;
  __int64 v60;
  __int16 v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;

  v9 = *a1;
  if (*a1 == a1[1]) {
    return 0;
  }
  v11 = *v9;
  v10 = v9 + 1;
  if (v11 != 73) {
    return 0;
  }
  v12 = (__int64)a1;
  *a1 = v10;
  if ((a2 & 1) != 0) {
    v13 = a1[83];
    v14 = *(unsigned __int8**)(v12 + 680);
    *(_QWORD*)(v12 + 672) = v13;
    if (v13 == v14) {
      if (v13 == (unsigned __int8*)(v12 + 688)) {
        v13 = (unsigned __int8*)SdkRoutine_8578d0(0);
        if (v13 == nullptr) {
        LABEL_86:
          v36 = (__int64*)SdkRoutine_857810(v13);
          goto LABEL_87;
        }
        *(_QWORD*)(v12 + 664) = v13;
      }
      else {
        v13 = (unsigned __int8*)SdkRoutine_859610(v13);
        *(_QWORD*)(v12 + 664) = v13;
        if (v13 == nullptr) {
          goto LABEL_86;
        }
      }
      *(_QWORD*)(v12 + 680) = v13;
    }
    v25 = (__int64*)(v12 + 40);
    v26 = (__int64*)(v12 + 600);
    LOBYTE(v8) = 40;
    *(_QWORD*)v13 = v12 + 576;
    v27 = *(_QWORD*)(v12 + 576);
    *(_QWORD*)(v12 + 672) = v13 + 8;
    *(_QWORD*)(v12 + 584) = v27;
    v65 = (__int64)(*(_QWORD*)(v12 + 24) - *(_QWORD*)(v12 + 16)) >> 3;
    v16 = v12 + 4912;
    v17 = *(unsigned __int8**)v12;
    v28 = *(unsigned __int8**)(v12 + 8);
    while (1) {
      if (v17 != v28 && *v17 == 69) {
        v15 = v65;
        goto LABEL_75;
      }
      result = SdkRoutine_835ee0(v12);
      if (result == 0) {
        return result;
      }
      v29 = *(__int64**)(v12 + 24);
      v30 = result;
      if (v29 == *(__int64**)(v12 + 32)) {
        v50 = *(__int64**)(v12 + 16);
        v51 = (char*)v29 - (char*)v50;
        if (v50 == v25) {
          v13 = (unsigned __int8*)SdkRoutine_8578d0(2 *
                                                    ((char*)v29 - (char*)v50));
          if (v13 == nullptr) {
            goto LABEL_86;
          }
          if (v29 != v25) {
            v52 = v13;
            SdkRoutine_858a50(v13, v50, v51);
            v13 = v52;
          }
          *(_QWORD*)(v12 + 16) = v13;
        }
        else {
          v13 = (unsigned __int8*)SdkRoutine_859610(*(_QWORD*)(v12 + 16));
          *(_QWORD*)(v12 + 16) = v13;
          if (v13 == nullptr) {
            goto LABEL_86;
          }
        }
        *(_QWORD*)(v12 + 32) = &v13[8 * (v51 >> 2)];
        v31 = *(unsigned __int8*)(v30 + 8);
        *(_QWORD*)&v13[v51] = v30;
        *(_QWORD*)(v12 + 24) = &v13[v51 + 8];
        if (v31 == 34) {
          goto LABEL_64;
        }
      LABEL_35:
        if (v31 == 41) {
          v32 = *(__int64**)(v30 + 16);
          v33 = *(_QWORD*)(v30 + 24);
          v34 = *(__int64**)v16;
          v35 = *(_QWORD*)(*(_QWORD*)v16 + 8LL);
          if ((unsigned __int64)(v35 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
            v36 = (__int64*)SdkRoutine_8578d0(4096);
            if (v36 == nullptr) {
              goto LABEL_87;
            }
            v35 = 0;
            *v36 = (__int64)v34;
            v36[1] = 0;
            v34 = v36;
            *(_QWORD*)v16 = v36;
          }
          v34[1] = v35 + 32;
          v37 = (char*)v34 + v35;
          v38 = 8 * v33;
          *((_QWORD*)v37 + 2) = SdkData_e84af8;
          v30 = (__int64)(v37 + 16);
          v39 = *(_WORD*)(v30 + 9);
          *(_BYTE*)(v30 + 8) = 40;
          *(_QWORD*)(v30 + 16) = v32;
          *(_QWORD*)(v30 + 24) = v33;
          v40 = v39 & 0xF000;
          v41 = v39 & 0xF000 | 0xA80;
          *(_WORD*)(v30 + 9) = v40 | 0xA80;
          if (v33 != 0) {
            v42 = 8 * v33;
            v43 = v32;
            while (1) {
              v44 = *v43++;
              if ((*(_WORD*)(v44 + 9) & 0x300) != 0x100) {
                break;
              }
              v42 -= 8;
              if (v42 == 0) {
                goto LABEL_43;
              }
            }
          }
          else {
          LABEL_43:
            v41 = v40 | 0x980;
            *(_WORD*)(v30 + 9) = v40 | 0x980;
          }
          if (v33 != 0) {
            v45 = 8 * v33;
            v46 = v32;
            while (1) {
              v47 = *v46++;
              if ((*(_WORD*)(v47 + 9) & 0xC00) != 0x400) {
                break;
              }
              v45 -= 8;
              if (v45 == 0) {
                goto LABEL_48;
              }
            }
          }
          else {
          LABEL_48:
            v41 = v41 & 0xF3FF | 0x400;
            *(_WORD*)(v30 + 9) = v41;
          }
          if (v33 != 0) {
            while (1) {
              v48 = *v32++;
              if ((*(_WORD*)(v48 + 9) & 0xC0) != 0x40) {
                break;
              }
              v38 -= 8;
              if (v38 == 0) {
                goto LABEL_52;
              }
            }
          }
          else {
          LABEL_52:
            *(_WORD*)(v30 + 9) = v41 & 0xFF3F | 0x40;
          }
        }
        v49 = *(__int64**)(v12 + 584);
        if (v49 != *(__int64**)(v12 + 592)) {
          goto LABEL_54;
        }
      LABEL_65:
        v53 = *(__int64**)(v12 + 576);
        v54 = (char*)v49 - (char*)v53;
        if (v53 == v26) {
          v13 = (unsigned __int8*)SdkRoutine_8578d0(2 *
                                                    ((char*)v49 - (char*)v53));
          if (v13 == nullptr) {
            goto LABEL_86;
          }
          if (v49 != v26) {
            v55 = v13;
            SdkRoutine_858a50(v13, v53, v54);
            v13 = v55;
          }
          *(_QWORD*)(v12 + 576) = v13;
        }
        else {
          v13 = (unsigned __int8*)SdkRoutine_859610(*(_QWORD*)(v12 + 576));
          *(_QWORD*)(v12 + 576) = v13;
          if (v13 == nullptr) {
            goto LABEL_86;
          }
        }
        *(_QWORD*)(v12 + 592) = &v13[8 * (v54 >> 2)];
        v17 = *(unsigned __int8**)v12;
        v28 = *(unsigned __int8**)(v12 + 8);
        *(_QWORD*)&v13[v54] = v30;
        *(_QWORD*)(v12 + 584) = &v13[v54 + 8];
        if (v17 != v28) {
          goto LABEL_29;
        }
      }
      else {
        v31 = *(unsigned __int8*)(result + 8);
        *v29 = result;
        *(_QWORD*)(v12 + 24) = v29 + 1;
        if (v31 != 34) {
          goto LABEL_35;
        }
      LABEL_64:
        v30 = *(_QWORD*)(v30 + 24);
        v49 = *(__int64**)(v12 + 584);
        if (v49 == *(__int64**)(v12 + 592)) {
          goto LABEL_65;
        }
      LABEL_54:
        v17 = *(unsigned __int8**)v12;
        v28 = *(unsigned __int8**)(v12 + 8);
        *v49 = v30;
        *(_QWORD*)(v12 + 584) = v49 + 1;
        if (v17 != v28) {
        LABEL_29:
          if (*v17 == 81) {
            v15 = v65;
            goto LABEL_81;
          }
        }
      }
    }
  }
  v8 = (__int64*)(a1 + 5);
  v15 = (a1[3] - a1[2]) >> 3;
  v16 = (__int64)(a1 + 614);
  v17 = *a1;
  v18 = a1[1];
  do {
    do {
      while (1) {
        if (v17 != v18 && *v17 == 69) {
        LABEL_75:
          v56 = 0;
          goto LABEL_76;
        }
        result = SdkRoutine_835ee0(v12);
        if (result == 0) {
          return result;
        }
        v20 = *(__int64**)(v12 + 24);
        if (v20 == *(__int64**)(v12 + 32)) {
          break;
        }
        v17 = *(unsigned __int8**)v12;
        v18 = *(unsigned __int8**)(v12 + 8);
        *v20 = result;
        *(_QWORD*)(v12 + 24) = v20 + 1;
        if (v17 != v18) {
          goto LABEL_9;
        }
      }
      v21 = *(__int64**)(v12 + 16);
      v22 = result;
      v23 = (char*)v20 - (char*)v21;
      if (v21 == v8) {
        v13 =
            (unsigned __int8*)SdkRoutine_8578d0(2 * ((char*)v20 - (char*)v21));
        if (v13 == nullptr) {
          goto LABEL_86;
        }
        if (v20 != v8) {
          v24 = v13;
          SdkRoutine_858a50(v13, v21, v23);
          v13 = v24;
        }
        *(_QWORD*)(v12 + 16) = v13;
      }
      else {
        v13 = (unsigned __int8*)SdkRoutine_859610(*(_QWORD*)(v12 + 16));
        *(_QWORD*)(v12 + 16) = v13;
        if (v13 == nullptr) {
          goto LABEL_86;
        }
      }
      *(_QWORD*)(v12 + 32) = &v13[8 * (v23 >> 2)];
      v17 = *(unsigned __int8**)v12;
      v18 = *(unsigned __int8**)(v12 + 8);
      *(_QWORD*)&v13[v23] = v22;
      *(_QWORD*)(v12 + 24) = &v13[v23 + 8];
    } while (v17 == v18);
  LABEL_9:;
  } while (*v17 != 81);
LABEL_81:
  v62 = *(_BYTE*)(v12 + 778);
  *(_QWORD*)v12 = v17 + 1;
  *(_BYTE*)(v12 + 778) = 1;
  v56 = SdkRoutine_8393e0(v12);
  *(_BYTE*)(v12 + 778) = v62;
  if (v56 == 0) {
    return 0;
  }
  v17 = *(unsigned __int8**)v12;
  if (*(_QWORD*)v12 == *(_QWORD*)(v12 + 8) || *v17 != 69) {
    return 0;
  }
LABEL_76:
  *(_QWORD*)v12 = v17 + 1;
  v58 = ((unsigned __int128 (*)(_QWORD*, unsigned __int64, __int64, __int64,
                                 __int64, __int64, __int64, __int64,
                                 __int64))SdkRoutine_8363a0)(
      (_QWORD*)v12, v15, a3, a4, a5, a6, a7, a8, v64);
  v57 = (__int64)v58;
  v12 = *(_QWORD*)(v12 + 4912);
  v8 = (__int64*)v57;
  v59 = (__int64)(v58 >> 64);
  v60 = *(_QWORD*)(v12 + 8);
  if ((unsigned __int64)(v60 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
    v36 = (__int64*)SdkRoutine_8578d0(4096);
    if (v36 != nullptr) {
      v60 = 0;
      *v36 = v12;
      v36[1] = 0;
      v12 = (__int64)v36;
      *(_QWORD*)v16 = v36;
      goto LABEL_79;
    }
  LABEL_87:
    v63 = SdkRoutine_87c7b0(v36);
    *(_BYTE*)(v12 + 778) = (_BYTE)v8;
    SdkRoutine_87c790(v63);
    __udf(0);
  }
LABEL_79:
  *(_QWORD*)(v12 + 8) = v60 + 48;
  *(_QWORD*)(v12 + v60 + 16) = SdkData_e84b70;
  result = v12 + v60 + 16;
  *(_BYTE*)(result + 8) = 43;
  v61 = *(_WORD*)(v12 + v60 + 25);
  *(_QWORD*)(result + 16) = v8;
  *(_QWORD*)(result + 24) = v59;
  *(_QWORD*)(result + 32) = v56;
  *(_WORD*)(result + 9) = v61 & 0xF000 | 0x540;
  return result;
}

char* SdkHr_8382a0(__int64 a1)
{
  _BYTE* v1;
  _BYTE* v2;
  _BYTE* v3;
  __int64 v4;
  _BYTE* v5;
  _BYTE* v6;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  char* v14;
  char* v15;
  __int64 v16;
  _BYTE* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  char* v22;
  __int16 v23;
  char* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;

  v2 = *(_BYTE**)a1;
  v1 = *(_BYTE**)(a1 + 8);
  if (*(_BYTE**)a1 == v1 || *v2 != 84) {
    return nullptr;
  }
  v3 = v2 + 1;
  *(_QWORD*)a1 = v2 + 1;
  if (v2 + 1 == v1 || *v3 != 76) {
    v8 = 0;
    if (v3 == v1) {
      return nullptr;
    }
  }
  else {
    *(_QWORD*)a1 = v2 + 2;
    if (v1 == v2 + 2 ||
        (unsigned int)(unsigned __int8)v2[2] - 58 < 0xFFFFFFF6) {
      return nullptr;
    }
    v4 = 0;
    v5 = v2 + 4;
    do {
      v6 = v5 - 1;
      v3 = v5;
      *(_QWORD*)a1 = v5 - 1;
      v4 = (unsigned __int8)*(v5 - 2) + 10 * v4 - 48;
      if (v5 - 1 == v1) {
        break;
      }
      v7 = (unsigned __int8)*(v5++ - 1) - 48;
    } while (v7 <= 9);
    if (v6 == v1) {
      return nullptr;
    }
    if (*(v3 - 1) != 95) {
      return nullptr;
    }
    v8 = v4 + 1;
    *(_QWORD*)a1 = v3;
    if (v3 == v1) {
      return nullptr;
    }
  }
  if (*v3 != 95) {
    if ((unsigned int)(unsigned __int8)*v3 - 58 >= 0xFFFFFFF6) {
      v16 = 0;
      v17 = v3 + 1;
      do {
        *(_QWORD*)a1 = v17;
        v3 = v17;
        v16 = (unsigned __int8)*(v17 - 1) + 10 * v16 - 48;
        if (v17 == v1) {
          break;
        }
        ++v17;
      } while ((unsigned int)(unsigned __int8)*v3 - 48 <= 9);
      if (v3 != v1 && *v3 == 95) {
        v9 = v16 + 1;
        *(_QWORD*)a1 = v3 + 1;
        if (*(_BYTE*)(a1 + 778) == 1) {
          goto LABEL_17;
        }
        goto LABEL_28;
      }
    }
    return nullptr;
  }
  v9 = 0;
  *(_QWORD*)a1 = v3 + 1;
  if (*(_BYTE*)(a1 + 778) == 1) {
  LABEL_17:
    v10 = *(_QWORD**)(a1 + 4912);
    v11 = v10[1];
    if ((unsigned __int64)(v11 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
    LABEL_20:
      v10[1] = v11 + 32;
      v14 = (char*)v10 + v11;
      *((_QWORD*)v14 + 2) = SdkData_e82ae8;
      v15 = v14 + 16;
      v15[8] = 8;
      *(_WORD*)(v15 + 9) = *(_WORD*)(v15 + 9) & 0xF000 | 0x540;
      *((_QWORD*)v15 + 2) = v2;
      *((_QWORD*)v15 + 3) = v3 - v2;
      return v15;
    }
    v12 = a1;
    v13 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v13 != nullptr) {
      v11 = 0;
      *v13 = v10;
      v13[1] = 0;
      v10 = v13;
      *(_QWORD*)(v12 + 4912) = v13;
      goto LABEL_20;
    }
    goto LABEL_54;
  }
LABEL_28:
  if (*(_BYTE*)(a1 + 777) == 1 && v8 == 0) {
    v18 = *(_QWORD**)(a1 + 4912);
    v19 = v18[1];
    if ((unsigned __int64)(v19 - 4032) <= 0xFFFFFFFFFFFFF00FLL) {
      v20 = a1;
      v13 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v13 == nullptr) {
      LABEL_54:
        a1 = SdkRoutine_87c7b0(v13);
        goto LABEL_55;
      }
      v21 = v13;
      v19 = 0;
      *v13 = v18;
      v13[1] = 0;
      v18 = v13;
      a1 = v20;
      *(_QWORD*)(v20 + 4912) = v21;
    }
    v18[1] = v19 + 48;
    v22 = (char*)v18 + v19;
    *((_QWORD*)v22 + 2) = SdkData_e82bd8;
    v15 = v22 + 16;
    v15[8] = 44;
    v23 = *(_WORD*)(v15 + 9);
    *((_QWORD*)v15 + 2) = v9;
    *((_QWORD*)v15 + 3) = 0;
    v15[32] = 0;
    *(_WORD*)(v15 + 9) = v23 & 0xF000 | 0xA80;
    v24 = *(char**)(a1 + 728);
    if (v24 == *(char**)(a1 + 736)) {
      v25 = *(char**)(a1 + 720);
      v26 = a1;
      v27 = v24 - v25;
      if (v25 == (char*)(a1 + 744)) {
        a1 = SdkRoutine_8578d0(2 * (v24 - v25));
        if (a1 == 0) {
          goto LABEL_55;
        }
        v28 = a1;
        if (v24 != v25) {
          SdkRoutine_858a50(a1, v25, v24 - v25);
        }
        a1 = v26;
        *(_QWORD*)(v26 + 720) = v28;
      }
      else {
        v28 = SdkRoutine_859610(*(_QWORD*)(a1 + 720));
        a1 = v26;
        *(_QWORD*)(v26 + 720) = v28;
        if (v28 == 0) {
        LABEL_55:
          SdkRoutine_857810(a1);
          __udf(0);
        }
      }
      v24 = (char*)(v28 + v27);
      *(_QWORD*)(a1 + 736) = v28 + 8 * (v27 >> 2);
    }
    *(_QWORD*)v24 = v15;
    *(_QWORD*)(a1 + 728) = v24 + 8;
    return v15;
  }
  v30 = *(_QWORD*)(a1 + 664);
  v31 = (*(_QWORD*)(a1 + 672) - v30) >> 3;
  if (v8 < v31) {
    v32 = *(_QWORD**)(v30 + 8 * v8);
    if (v32 != nullptr && v9 < (__int64)(v32[1] - *v32) >> 3) {
      return *(char**)(*v32 + 8 * v9);
    }
  }
  v15 = nullptr;
  if (v8 > v31 || *(_QWORD*)(a1 + 784) != v8) {
    return v15;
  }
  if (v8 == v31) {
    v33 = a1;
    SdkRoutine_839020(a1 + 664, 0);
    a1 = v33;
  }
  return SdkRoutine_8377c0(a1, (__int64)"auto");
}

char* SdkHr_83ae20(__int64 a1)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  _WORD* v3;
  unsigned __int64 v4;
  char* v5;
  unsigned __int8** v6;
  __int64 v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  int v10;
  char* result;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v24;
  unsigned int v25;
  unsigned int v26;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v36;
  int v37;
  int v38;
  int v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  char* v44;
  char* v45;
  __int64 v46;
  unsigned __int8* v47;
  _BYTE* v48;
  int v49;
  unsigned __int8** v50;
  unsigned __int8* v51;
  unsigned __int8* v52;
  int v53;
  unsigned __int8** v54;
  __int64 v55;
  unsigned __int8* v56;
  unsigned __int8* v57;
  int v58;
  bool v59;
  __int64 v60;
  __int64 v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  int v66;
  unsigned int v67;
  unsigned int v68;
  int v70;
  unsigned int v71;
  unsigned int v72;
  int v74;
  unsigned int v75;
  unsigned int v76;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  _QWORD* v106;
  __int64 v107;
  __int64 v108;
  char* v109;
  int v110;
  unsigned int v111;
  unsigned int v112;
  int v114;
  unsigned int v115;
  unsigned int v116;
  int v118;
  unsigned int v119;
  unsigned int v120;
  int v122;
  unsigned int v123;
  unsigned int v124;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  _QWORD* v138;
  __int64 v139;
  __int64 v140;
  char* v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;

  v1 = *(unsigned __int8**)a1;
  v2 = *(unsigned __int8**)(a1 + 8);
  if (*(unsigned __int8**)a1 == v2) {
    return nullptr;
  }
  if (*v1 != 76) {
    return nullptr;
  }
  v3 = v1 + 1;
  v4 = v2 - (v1 + 1);
  *(_QWORD*)a1 = v1 + 1;
  if (v2 == v1 + 1) {
  LABEL_11:
    v12 = a1;
    if (SdkRoutine_833e70(a1) != 0) {
      v14 = *(_BYTE**)v12;
      v13 = *(_BYTE**)(v12 + 8);
      v15 = *(_BYTE**)v12;
      if (*(_BYTE**)v12 != v13) {
        v15 = *(_BYTE**)v12;
        if (*v14 == 110) {
          v15 = v14 + 1;
          *(_QWORD*)v12 = v14 + 1;
        }
      }
      if (v13 != v15 && (unsigned int)(unsigned __int8)*v15 - 48 <= 9) {
        while ((unsigned int)(unsigned __int8)*v15 - 48 <= 9) {
          *(_QWORD*)v12 = ++v15;
          if (v15 == v13) {
            v16 = v13;
            goto LABEL_21;
          }
        }
        v16 = v15;
      LABEL_21:
        v5 = nullptr;
        if (v16 != v14 && v15 != v13) {
          if (*v15 == 69) {
            *(_QWORD*)v12 = v15 + 1;
            return (char*)SdkRoutine_83fb90();
          }
          return nullptr;
        }
        return v5;
      }
    }
    return nullptr;
  }
  v5 = nullptr;
  switch (*(_BYTE*)v3) {
  case 'A':
    v6 = (unsigned __int8**)a1;
    v7 = SdkRoutine_833e70(a1);
    if (v7 == 0) {
      return nullptr;
    }
    v8 = *v6;
    if (*v6 == v6[1]) {
      return nullptr;
    }
    v10 = *v8;
    v9 = v8 + 1;
    if (v10 != 69) {
      return nullptr;
    }
    *v6 = v9;
    return (char*)SdkRoutine_83f2c0(v6, v7);
  case 'D':
    if (v4 < 2 || *v3 != 28228) {
      return nullptr;
    }
    v47 = v1 + 3;
    *(_QWORD*)a1 = v1 + 3;
    if (v1 + 3 != v2 && *v47 == 48) {
      v47 = v1 + 4;
      *(_QWORD*)a1 = v1 + 4;
    }
    if (v47 == v2) {
      return nullptr;
    }
    v49 = *v47;
    v48 = v47 + 1;
    if (v49 != 69) {
      return nullptr;
    }
    *(_QWORD*)a1 = v48;
    return SdkRoutine_8377c0(a1, (__int64)"nullptr");
  case 'T':
    return v5;
  case 'U':
    if (v4 < 2) {
      return nullptr;
    }
    if (v1[2] != 108) {
      return nullptr;
    }
    v54 = (unsigned __int8**)a1;
    v55 = SdkRoutine_83f360(a1, 0);
    if (v55 == 0) {
      return nullptr;
    }
    v56 = *v54;
    if (*v54 == v54[1]) {
      return nullptr;
    }
    v58 = *v56;
    v57 = v56 + 1;
    if (v58 != 69) {
      return nullptr;
    }
    *v54 = v57;
    return (char*)SdkRoutine_83faf0(v54, v55);
  case '_':
    if (v4 < 2 || *v3 != 23135) {
      return nullptr;
    }
    v50 = (unsigned __int8**)a1;
    *(_QWORD*)a1 = v1 + 3;
    result = (char*)SdkRoutine_8332c0((unsigned __int8**)a1);
    v5 = result;
    if (result == nullptr) {
      return v5;
    }
    v51 = *v50;
    if (*v50 == v50[1]) {
      return nullptr;
    }
    v53 = *v51;
    v52 = v51 + 1;
    if (v53 != 69) {
      return nullptr;
    }
    *v50 = v52;
    return result;
  case 'a':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 'b':
    if (v4 >= 3 && (*v3 == 12386 ? (v59 = v1[3] == 69) : (v59 = false), v59)) {
      v61 = 0;
      *(_QWORD*)a1 = v1 + 4;
    }
    else {
      v60 = a1;
      if ((SdkRoutine_833240() & 1) == 0) {
        return nullptr;
      }
      v61 = 1;
      a1 = v60;
    }
    result = (char*)SdkRoutine_83f220(a1, v61);
    break;
  case 'c':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 'd':
    v19 = v1 + 2;
    *(_QWORD*)a1 = v1 + 2;
    if ((unsigned __int64)(v2 - (v1 + 2)) < 0x11) {
      return nullptr;
    }
    v110 = v1[2];
    v111 = v110 - 48;
    v112 = v110 - 97;
    if (v111 >= 0xA && v112 > 5) {
      return nullptr;
    }
    v114 = v1[3];
    v115 = v114 - 48;
    v116 = v114 - 97;
    if (v115 >= 0xA && v116 > 5) {
      return nullptr;
    }
    v118 = v1[4];
    v119 = v118 - 48;
    v120 = v118 - 97;
    if (v119 >= 0xA && v120 > 5) {
      return nullptr;
    }
    v122 = v1[5];
    v123 = v122 - 48;
    v124 = v122 - 97;
    if (v123 >= 0xA && v124 > 5) {
      return nullptr;
    }
    v126 = v1[6];
    if ((unsigned int)(v126 - 48) >= 0xA && (unsigned int)(v126 - 97) > 5) {
      return nullptr;
    }
    v127 = v1[7];
    if ((unsigned int)(v127 - 48) >= 0xA && (unsigned int)(v127 - 97) > 5) {
      return nullptr;
    }
    v128 = v1[8];
    v144 = a1;
    if ((unsigned int)(v128 - 48) >= 0xA && (unsigned int)(v128 - 97) > 5) {
      return nullptr;
    }
    v129 = v1[9];
    if ((unsigned int)(v129 - 48) >= 0xA && (unsigned int)(v129 - 97) > 5) {
      return nullptr;
    }
    v130 = v1[10];
    if ((unsigned int)(v130 - 48) >= 0xA && (unsigned int)(v130 - 97) > 5) {
      return nullptr;
    }
    v131 = v1[11];
    if ((unsigned int)(v131 - 48) >= 0xA && (unsigned int)(v131 - 97) > 5) {
      return nullptr;
    }
    v132 = v1[12];
    if ((unsigned int)(v132 - 48) >= 0xA && (unsigned int)(v132 - 97) > 5) {
      return nullptr;
    }
    v133 = v1[13];
    if ((unsigned int)(v133 - 48) >= 0xA && (unsigned int)(v133 - 97) > 5) {
      return nullptr;
    }
    v134 = v1[14];
    if ((unsigned int)(v134 - 48) >= 0xA && (unsigned int)(v134 - 97) > 5) {
      return nullptr;
    }
    v135 = v1[15];
    if ((unsigned int)(v135 - 48) >= 0xA && (unsigned int)(v135 - 97) > 5) {
      return nullptr;
    }
    v136 = v1[16];
    if ((unsigned int)(v136 - 48) >= 0xA && (unsigned int)(v136 - 97) > 5) {
      return nullptr;
    }
    v137 = v1[17];
    if ((unsigned int)(v137 - 48) >= 0xA && (unsigned int)(v137 - 97) > 5) {
      return nullptr;
    }
    *(_QWORD*)a1 = v1 + 18;
    if (v1 + 18 == v2 || v1[18] != 69) {
      return nullptr;
    }
    v138 = *(_QWORD**)(a1 + 4912);
    *(_QWORD*)a1 = v1 + 19;
    v139 = v138[1];
    if ((unsigned __int64)(v139 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v42 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v42 == nullptr) {
        goto LABEL_230;
      }
      v139 = 0;
      *v42 = v138;
      v42[1] = 0;
      v138 = v42;
      *(_QWORD*)(v144 + 4912) = v42;
    }
    v140 = v139 + 32;
    v141 = (char*)v138 + v139;
    v138[1] = v140;
    *((_QWORD*)v141 + 2) = SdkData_e83748;
    v45 = v141 + 16;
    v45[8] = 79;
    *(_WORD*)(v45 + 9) = *(_WORD*)(v45 + 9) & 0xF000 | 0x540;
    v46 = 16;
    goto LABEL_60;
  case 'e':
    v19 = v1 + 2;
    *(_QWORD*)a1 = v1 + 2;
    if ((unsigned __int64)(v2 - (v1 + 2)) < 0x21) {
      return nullptr;
    }
    v62 = v1[2];
    v63 = v62 - 48;
    v64 = v62 - 97;
    if (v63 >= 0xA && v64 > 5) {
      return nullptr;
    }
    v66 = v1[3];
    v67 = v66 - 48;
    v68 = v66 - 97;
    if (v67 >= 0xA && v68 > 5) {
      return nullptr;
    }
    v70 = v1[4];
    v71 = v70 - 48;
    v72 = v70 - 97;
    if (v71 >= 0xA && v72 > 5) {
      return nullptr;
    }
    v74 = v1[5];
    v75 = v74 - 48;
    v76 = v74 - 97;
    if (v75 >= 0xA && v76 > 5) {
      return nullptr;
    }
    v78 = v1[6];
    if ((unsigned int)(v78 - 48) >= 0xA && (unsigned int)(v78 - 97) > 5) {
      return nullptr;
    }
    v79 = v1[7];
    if ((unsigned int)(v79 - 48) >= 0xA && (unsigned int)(v79 - 97) > 5) {
      return nullptr;
    }
    v80 = v1[8];
    v143 = a1;
    if ((unsigned int)(v80 - 48) >= 0xA && (unsigned int)(v80 - 97) > 5) {
      return nullptr;
    }
    v81 = v1[9];
    if ((unsigned int)(v81 - 48) >= 0xA && (unsigned int)(v81 - 97) > 5) {
      return nullptr;
    }
    v82 = v1[10];
    if ((unsigned int)(v82 - 48) >= 0xA && (unsigned int)(v82 - 97) > 5) {
      return nullptr;
    }
    v83 = v1[11];
    if ((unsigned int)(v83 - 48) >= 0xA && (unsigned int)(v83 - 97) > 5) {
      return nullptr;
    }
    v84 = v1[12];
    if ((unsigned int)(v84 - 48) >= 0xA && (unsigned int)(v84 - 97) > 5) {
      return nullptr;
    }
    v85 = v1[13];
    if ((unsigned int)(v85 - 48) >= 0xA && (unsigned int)(v85 - 97) > 5) {
      return nullptr;
    }
    v86 = v1[14];
    if ((unsigned int)(v86 - 48) >= 0xA && (unsigned int)(v86 - 97) > 5) {
      return nullptr;
    }
    v87 = v1[15];
    if ((unsigned int)(v87 - 48) >= 0xA && (unsigned int)(v87 - 97) > 5) {
      return nullptr;
    }
    v88 = v1[16];
    if ((unsigned int)(v88 - 48) >= 0xA && (unsigned int)(v88 - 97) > 5) {
      return nullptr;
    }
    v89 = v1[17];
    if ((unsigned int)(v89 - 48) >= 0xA && (unsigned int)(v89 - 97) > 5) {
      return nullptr;
    }
    v90 = v1[18];
    if ((unsigned int)(v90 - 48) >= 0xA && (unsigned int)(v90 - 97) > 5) {
      return nullptr;
    }
    v91 = v1[19];
    if ((unsigned int)(v91 - 48) >= 0xA && (unsigned int)(v91 - 97) > 5) {
      return nullptr;
    }
    v92 = v1[20];
    if ((unsigned int)(v92 - 48) >= 0xA && (unsigned int)(v92 - 97) > 5) {
      return nullptr;
    }
    v93 = v1[21];
    if ((unsigned int)(v93 - 48) >= 0xA && (unsigned int)(v93 - 97) > 5) {
      return nullptr;
    }
    v94 = v1[22];
    if ((unsigned int)(v94 - 48) >= 0xA && (unsigned int)(v94 - 97) > 5) {
      return nullptr;
    }
    v95 = v1[23];
    if ((unsigned int)(v95 - 48) >= 0xA && (unsigned int)(v95 - 97) > 5) {
      return nullptr;
    }
    v96 = v1[24];
    if ((unsigned int)(v96 - 48) >= 0xA && (unsigned int)(v96 - 97) > 5) {
      return nullptr;
    }
    v97 = v1[25];
    if ((unsigned int)(v97 - 48) >= 0xA && (unsigned int)(v97 - 97) > 5) {
      return nullptr;
    }
    v98 = v1[26];
    if ((unsigned int)(v98 - 48) >= 0xA && (unsigned int)(v98 - 97) > 5) {
      return nullptr;
    }
    v99 = v1[27];
    if ((unsigned int)(v99 - 48) >= 0xA && (unsigned int)(v99 - 97) > 5) {
      return nullptr;
    }
    v100 = v1[28];
    if ((unsigned int)(v100 - 48) >= 0xA && (unsigned int)(v100 - 97) > 5) {
      return nullptr;
    }
    v101 = v1[29];
    if ((unsigned int)(v101 - 48) >= 0xA && (unsigned int)(v101 - 97) > 5) {
      return nullptr;
    }
    v102 = v1[30];
    if ((unsigned int)(v102 - 48) >= 0xA && (unsigned int)(v102 - 97) > 5) {
      return nullptr;
    }
    v103 = v1[31];
    if ((unsigned int)(v103 - 48) >= 0xA && (unsigned int)(v103 - 97) > 5) {
      return nullptr;
    }
    v104 = v1[32];
    if ((unsigned int)(v104 - 48) >= 0xA && (unsigned int)(v104 - 97) > 5) {
      return nullptr;
    }
    v105 = v1[33];
    if ((unsigned int)(v105 - 48) >= 0xA && (unsigned int)(v105 - 97) > 5) {
      return nullptr;
    }
    *(_QWORD*)a1 = v1 + 34;
    if (v1 + 34 == v2 || v1[34] != 69) {
      return nullptr;
    }
    v106 = *(_QWORD**)(a1 + 4912);
    *(_QWORD*)a1 = v1 + 35;
    v107 = v106[1];
    if ((unsigned __int64)(v107 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v42 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v42 == nullptr) {
        goto LABEL_230;
      }
      v107 = 0;
      *v42 = v106;
      v42[1] = 0;
      v106 = v42;
      *(_QWORD*)(v143 + 4912) = v42;
    }
    v108 = v107 + 32;
    v109 = (char*)v106 + v107;
    v106[1] = v108;
    *((_QWORD*)v109 + 2) = SdkData_e837c0;
    v45 = v109 + 16;
    v45[8] = 80;
    *(_WORD*)(v45 + 9) = *(_WORD*)(v45 + 9) & 0xF000 | 0x540;
    v46 = 32;
    goto LABEL_60;
  case 'f':
    v19 = v1 + 2;
    *(_QWORD*)a1 = v1 + 2;
    if ((unsigned __int64)(v2 - (v1 + 2)) < 9) {
      return nullptr;
    }
    v20 = v1[2];
    v21 = v20 - 48;
    v22 = v20 - 97;
    if (v21 >= 0xA && v22 > 5) {
      return nullptr;
    }
    v24 = v1[3];
    v25 = v24 - 48;
    v26 = v24 - 97;
    if (v25 >= 0xA && v26 > 5) {
      return nullptr;
    }
    v28 = v1[4];
    v29 = v28 - 48;
    v30 = v28 - 97;
    if (v29 >= 0xA && v30 > 5) {
      return nullptr;
    }
    v32 = v1[5];
    v33 = v32 - 48;
    v34 = v32 - 97;
    if (v33 >= 0xA && v34 > 5) {
      return nullptr;
    }
    v36 = v1[6];
    if ((unsigned int)(v36 - 48) >= 0xA && (unsigned int)(v36 - 97) > 5) {
      return nullptr;
    }
    v37 = v1[7];
    if ((unsigned int)(v37 - 48) >= 0xA && (unsigned int)(v37 - 97) > 5) {
      return nullptr;
    }
    v38 = v1[8];
    v142 = a1;
    if ((unsigned int)(v38 - 48) >= 0xA && (unsigned int)(v38 - 97) > 5) {
      return nullptr;
    }
    v39 = v1[9];
    if ((unsigned int)(v39 - 48) >= 0xA && (unsigned int)(v39 - 97) > 5) {
      return nullptr;
    }
    *(_QWORD*)a1 = v1 + 10;
    if (v1 + 10 == v2 || v1[10] != 69) {
      return nullptr;
    }
    v40 = *(_QWORD**)(a1 + 4912);
    *(_QWORD*)a1 = v1 + 11;
    v41 = v40[1];
    if ((unsigned __int64)(v41 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v42 = (_QWORD*)SdkRoutine_8578d0(4096);
      if (v42 == nullptr) {
      LABEL_230:
        SdkRoutine_87c7b0(v42);
        __udf(0);
      }
      v41 = 0;
      *v42 = v40;
      v42[1] = 0;
      v40 = v42;
      *(_QWORD*)(v142 + 4912) = v42;
    }
    v43 = v41 + 32;
    v44 = (char*)v40 + v41;
    v40[1] = v43;
    *((_QWORD*)v44 + 2) = SdkData_e836d0;
    v45 = v44 + 16;
    v45[8] = 78;
    *(_WORD*)(v45 + 9) = *(_WORD*)(v45 + 9) & 0xF000 | 0x540;
    v46 = 8;
  LABEL_60:
    *((_QWORD*)v45 + 2) = v19;
    *((_QWORD*)v45 + 3) = v46;
    return v45;
  case 'h':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 'i':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 'j':
    v18 = v1 + 2;
    goto LABEL_96;
  case 'l':
    v18 = v1 + 2;
  LABEL_96:
    *(_QWORD*)a1 = v18;
    return (char*)SdkRoutine_83f0c0();
  case 'm':
    v17 = v1 + 2;
    goto LABEL_98;
  case 'n':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 'o':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 's':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 't':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 'w':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  case 'x':
    v17 = v1 + 2;
  LABEL_98:
    *(_QWORD*)a1 = v17;
    return (char*)SdkRoutine_83f0c0();
  case 'y':
    *(_QWORD*)a1 = v1 + 2;
    return (char*)SdkRoutine_83f0c0();
  default:
    goto LABEL_11;
  }
  return result;
}

__int64 SdkHr_83dd60(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 24);
  if (v2 == 0) {
    return SdkRoutine_83db20(*(_QWORD*)(a1 + 32), (__int64)a2,
                             *(_BYTE*)(a1 + 9) & 0x3F, 0);
  }
  v5 = a2[2];
  v6 = a2[3];
  v7 = *(_QWORD*)(a1 + 16);
  v8 = v5 + v2;
  if (v5 + v2 <= v6) {
    v12 = a2[1];
    goto LABEL_9;
  }
  v9 = a2[1];
  v10 = 2 * v6;
  if (v10 <= v8 + 992) {
    v11 = v8 + 992;
  }
  else {
    v11 = v10;
  }
  a2[3] = v11;
  v12 = SdkRoutine_859610(v9);
  a2[1] = v12;
  if (v12 != 0) {
    v5 = a2[2];
  LABEL_9:
    SdkRoutine_856130(v12 + v5, v7, v2);
    a2[2] += v2;
    return SdkRoutine_83db20(*(_QWORD*)(a1 + 32), (__int64)a2,
                             *(_BYTE*)(a1 + 9) & 0x3F, 0);
  }
  v14 = SdkRoutine_857810(0);
  return SdkRoutine_83de10(v14);
}

__int64 SdkHr_83de10(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;

  result = SdkRoutine_83db20(*(_QWORD*)(a1 + 16), (__int64)a2,
                             *(_BYTE*)(a1 + 9) & 0x3F, 1);
  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0) {
    v6 = a2[2];
    v7 = a2[3];
    v8 = *(_QWORD*)(a1 + 24);
    v9 = v6 + v5;
    if (v6 + v5 <= v7) {
      v13 = a2[1];
    }
    else {
      v10 = a2[1];
      v11 = 2 * v7;
      if (v11 <= v9 + 992) {
        v12 = v9 + 992;
      }
      else {
        v12 = v11;
      }
      a2[3] = v12;
      v13 = SdkRoutine_859610(v10);
      a2[1] = v13;
      if (v13 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v6 = a2[2];
    }
    result = SdkRoutine_856130(v13 + v6, v8, v5);
    a2[2] += v5;
  }
  return result;
}

__int64 SdkHr_83dec0(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  SdkRoutine_83db20(*(_QWORD*)(a1 + 16), a2, *(_BYTE*)(a1 + 9) & 0x3F, 0);
  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_16;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 91;
  SdkRoutine_83db20(*(_QWORD*)(a1 + 24), a2, 0x13u, 0);
  --*(_DWORD*)(a2 + 40);
  v11 = *(_QWORD*)(a2 + 16);
  v12 = *(_QWORD*)(a2 + 24);
  v13 = v11 + 1;
  if (v11 + 1 <= v12) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_15;
  }
  v14 = *(_QWORD*)(a2 + 8);
  v15 = v11 + 993;
  if (2 * v12 <= v15) {
    v16 = v15;
  }
  else {
    v16 = 2 * v12;
  }
  *(_QWORD*)(a2 + 24) = v16;
  result = SdkRoutine_859610(v14);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_16:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v11 = *(_QWORD*)(a2 + 16);
  v13 = v11 + 1;
LABEL_15:
  *(_QWORD*)(a2 + 16) = v13;
  *(_BYTE*)(result + v11) = 93;
  return result;
}

__int64 SdkHr_83dfd0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;

  SdkRoutine_83db20(*(_QWORD*)(a1 + 16), (__int64)a2, *(_BYTE*)(a1 + 9) & 0x3F,
                    1);
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 != 0) {
    v5 = a2[2];
    v6 = a2[3];
    v7 = *(_QWORD*)(a1 + 24);
    v8 = v5 + v4;
    if (v5 + v4 <= v6) {
      v12 = a2[1];
    }
    else {
      v9 = a2[1];
      v10 = 2 * v6;
      if (v10 <= v8 + 992) {
        v11 = v8 + 992;
      }
      else {
        v11 = v10;
      }
      a2[3] = v11;
      v12 = SdkRoutine_859610(v9);
      a2[1] = v12;
      if (v12 == 0) {
        SdkRoutine_857810(0);
        __udf(0);
      }
      v5 = a2[2];
    }
    SdkRoutine_856130(v12 + v5, v7, v4);
    a2[2] += v4;
  }
  return SdkRoutine_83db20(*(_QWORD*)(a1 + 40), (__int64)a2,
                           *(_BYTE*)(a1 + 9) & 0x3F, 0);
}

__int64 SdkHr_83e420(__int64 result, _QWORD* a2)
{
  __int64 v2;
  char v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_QWORD*)(result + 8) != 0) {
    v2 = a2[2];
    v3 = 1;
    v5 = (_QWORD*)result;
    v6 = 0;
    while (1) {
      v7 = v2;
      if ((v3 & 1) == 0) {
        v8 = a2[3];
        if (v2 + 2 <= v8) {
          v12 = a2[1];
          v13 = v2;
        }
        else {
          v9 = a2[1];
          v10 = 2 * v8;
          if (v10 <= v2 + 994) {
            v11 = v2 + 994;
          }
          else {
            v11 = v10;
          }
          a2[3] = v11;
          v12 = SdkRoutine_859610(v9);
          a2[1] = v12;
          if (v12 == 0) {
            v14 = SdkRoutine_857810(0);
            return SdkRoutine_83e550(v14);
          }
          v13 = a2[2];
        }
        *(_WORD*)(v12 + v13) = 8236;
        v7 = a2[2] + 2LL;
        a2[2] = v7;
      }
      result =
          SdkRoutine_83db20(*(_QWORD*)(*v5 + 8 * v6), (__int64)a2, 0x12u, 0);
      if (v7 == a2[2]) {
        result = (*(__int64 (**)(_QWORD*, __int64, __int64))(*a2 + 40LL))(
            a2, v7, v2);
        a2[2] = v2;
        if (++v6 == v5[1]) {
          return result;
        }
      }
      else {
        v3 = 0;
        v2 = a2[2];
        if (++v6 == v5[1]) {
          return result;
        }
      }
    }
  }
  return result;
}

__int64 SdkHr_83e740(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;

  if (*(_BYTE*)(a1 + 40) == 1) {
    ++*(_DWORD*)(a2 + 40);
    v4 = *(_QWORD*)(a2 + 16);
    v5 = *(_QWORD*)(a2 + 24);
    v6 = v4 + 1;
    if (v4 + 1 <= v5) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v7 = *(_QWORD*)(a2 + 8);
      v8 = v4 + 993;
      if (2 * v5 <= v8) {
        v9 = v8;
      }
      else {
        v9 = 2 * v5;
      }
      *(_QWORD*)(a2 + 24) = v9;
      result = SdkRoutine_859610(v7);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_36;
      }
      v4 = *(_QWORD*)(a2 + 16);
      v6 = v4 + 1;
    }
    *(_QWORD*)(a2 + 16) = v6;
    *(_BYTE*)(result + v4) = 40;
  }
  v11 = *(_QWORD*)(a1 + 16);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v11);
  }
  if (*(_BYTE*)(a1 + 40) == 1) {
    --*(_DWORD*)(a2 + 40);
    v12 = *(_QWORD*)(a2 + 16);
    v13 = *(_QWORD*)(a2 + 24);
    v14 = v12 + 1;
    if (v12 + 1 <= v13) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v15 = *(_QWORD*)(a2 + 8);
      v16 = v12 + 993;
      if (2 * v13 <= v16) {
        v17 = v16;
      }
      else {
        v17 = 2 * v13;
      }
      *(_QWORD*)(a2 + 24) = v17;
      result = SdkRoutine_859610(v15);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_36;
      }
      v12 = *(_QWORD*)(a2 + 16);
      v14 = v12 + 1;
    }
    *(_QWORD*)(a2 + 16) = v14;
    *(_BYTE*)(result + v12) = 41;
  }
  ++*(_DWORD*)(a2 + 40);
  v18 = *(_QWORD*)(a2 + 16);
  v19 = *(_QWORD*)(a2 + 24);
  v20 = v18 + 1;
  if (v18 + 1 <= v19) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v21 = *(_QWORD*)(a2 + 8);
    v22 = v18 + 993;
    if (2 * v19 <= v22) {
      v23 = v22;
    }
    else {
      v23 = 2 * v19;
    }
    *(_QWORD*)(a2 + 24) = v23;
    result = SdkRoutine_859610(v21);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_36;
    }
    v18 = *(_QWORD*)(a2 + 16);
    v20 = v18 + 1;
  }
  *(_QWORD*)(a2 + 16) = v20;
  *(_BYTE*)(result + v18) = 40;
  SdkRoutine_83e420(a1 + 24, (_QWORD*)a2);
  --*(_DWORD*)(a2 + 40);
  v24 = *(_QWORD*)(a2 + 16);
  v25 = *(_QWORD*)(a2 + 24);
  v26 = v24 + 1;
  if (v24 + 1 <= v25) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_35;
  }
  v27 = *(_QWORD*)(a2 + 8);
  v28 = v24 + 993;
  if (2 * v25 <= v28) {
    v29 = v28;
  }
  else {
    v29 = 2 * v25;
  }
  *(_QWORD*)(a2 + 24) = v29;
  result = SdkRoutine_859610(v27);
  *(_QWORD*)(a2 + 8) = result;
  if (result != 0) {
    v24 = *(_QWORD*)(a2 + 16);
    v26 = v24 + 1;
  LABEL_35:
    *(_QWORD*)(a2 + 16) = v26;
    *(_BYTE*)(result + v24) = 41;
    return result;
  }
LABEL_36:
  v30 = SdkRoutine_857810(result);
  return SdkRoutine_83e940(v30);
}

__int64 SdkHr_83e940(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;

  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_32;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 40;
  v11 = *(_QWORD*)(a1 + 16);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v11);
  if ((*(_WORD*)(v11 + 9) & 0xC0) != 0x40) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v11);
  }
  --*(_DWORD*)(a2 + 40);
  v12 = *(_QWORD*)(a2 + 16);
  v13 = *(_QWORD*)(a2 + 24);
  v14 = v12 + 1;
  if (v12 + 1 <= v13) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v15 = *(_QWORD*)(a2 + 8);
    v16 = v12 + 993;
    if (2 * v13 <= v16) {
      v17 = v16;
    }
    else {
      v17 = 2 * v13;
    }
    *(_QWORD*)(a2 + 24) = v17;
    result = SdkRoutine_859610(v15);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_32;
    }
    v12 = *(_QWORD*)(a2 + 16);
    v14 = v12 + 1;
  }
  *(_QWORD*)(a2 + 16) = v14;
  *(_BYTE*)(result + v12) = 41;
  ++*(_DWORD*)(a2 + 40);
  v18 = *(_QWORD*)(a2 + 16);
  v19 = *(_QWORD*)(a2 + 24);
  v20 = v18 + 1;
  if (v18 + 1 <= v19) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v21 = *(_QWORD*)(a2 + 8);
    v22 = v18 + 993;
    if (2 * v19 <= v22) {
      v23 = v22;
    }
    else {
      v23 = 2 * v19;
    }
    *(_QWORD*)(a2 + 24) = v23;
    result = SdkRoutine_859610(v21);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_32;
    }
    v18 = *(_QWORD*)(a2 + 16);
    v20 = v18 + 1;
  }
  *(_QWORD*)(a2 + 16) = v20;
  *(_BYTE*)(result + v18) = 40;
  SdkRoutine_83e420(a1 + 24, (_QWORD*)a2);
  --*(_DWORD*)(a2 + 40);
  v24 = *(_QWORD*)(a2 + 16);
  v25 = *(_QWORD*)(a2 + 24);
  v26 = v24 + 1;
  if (v24 + 1 <= v25) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_31;
  }
  v27 = *(_QWORD*)(a2 + 8);
  v28 = v24 + 993;
  if (2 * v25 <= v28) {
    v29 = v28;
  }
  else {
    v29 = 2 * v25;
  }
  *(_QWORD*)(a2 + 24) = v29;
  result = SdkRoutine_859610(v27);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_32:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v24 = *(_QWORD*)(a2 + 16);
  v26 = v24 + 1;
LABEL_31:
  *(_QWORD*)(a2 + 16) = v26;
  *(_BYTE*)(result + v24) = 41;
  return result;
}

__int64 SdkHr_83eb30(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  SdkRoutine_83db20(*(_QWORD*)(a1 + 16), (__int64)a2, *(_BYTE*)(a1 + 9) & 0x3F,
                    0);
  v4 = a2[2];
  v5 = a2[3];
  if (v4 + 3 <= v5) {
    v10 = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v4 + 995;
    v8 = 2 * v5;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    v10 = SdkRoutine_859610(v6);
    a2[1] = v10;
    if (v10 == 0) {
      goto LABEL_16;
    }
    v4 = a2[2];
  }
  v11 = v10 + v4;
  *(_BYTE*)(v11 + 2) = 32;
  *(_WORD*)v11 = 16160;
  v12 = *(_QWORD*)(a1 + 24);
  a2[2] += 3LL;
  SdkRoutine_83db20(v12, (__int64)a2, 0x13u, 0);
  v13 = a2[2];
  v14 = a2[3];
  if (v13 + 3 <= v14) {
    v10 = a2[1];
    goto LABEL_15;
  }
  v15 = a2[1];
  v16 = v13 + 995;
  v17 = 2 * v14;
  if (v17 <= v16) {
    v18 = v16;
  }
  else {
    v18 = v17;
  }
  a2[3] = v18;
  v10 = SdkRoutine_859610(v15);
  a2[1] = v10;
  if (v10 == 0) {
  LABEL_16:
    SdkRoutine_857810(v10);
    __udf(0);
  }
  v13 = a2[2];
LABEL_15:
  v19 = v10 + v13;
  *(_BYTE*)(v19 + 2) = 32;
  *(_WORD*)v19 = 14880;
  v20 = *(_QWORD*)(a1 + 32);
  a2[2] += 3LL;
  return SdkRoutine_83db20(v20, (__int64)a2, 0x11u, 1);
}

__int64 SdkHr_83ec60(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;

  v2 = a1[3];
  v3 = *(_QWORD*)(a2 + 16);
  if (v2 != 0) {
    v6 = a1[2];
    v7 = *(_QWORD*)(a2 + 24);
    v8 = v3 + v2;
    if (v3 + v2 <= v7) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v9 = *(_QWORD*)(a2 + 8);
      if (2 * v7 <= v8 + 992) {
        v10 = v8 + 992;
      }
      else {
        v10 = 2 * v7;
      }
      *(_QWORD*)(a2 + 24) = v10;
      result = SdkRoutine_859610(v9);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_39;
      }
      v3 = *(_QWORD*)(a2 + 16);
    }
    SdkRoutine_856130(result + v3, v6, v2);
    v3 = *(_QWORD*)(a2 + 16) + v2;
    *(_QWORD*)(a2 + 16) = v3;
  }
  LODWORD(v2) = *(_DWORD*)(a2 + 40);
  v12 = *(_QWORD*)(a2 + 24);
  *(_DWORD*)(a2 + 40) = 0;
  if (v3 + 1 <= v12) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v13 = *(_QWORD*)(a2 + 8);
    v14 = v3 + 993;
    v15 = 2 * v12;
    if (v15 <= v14) {
      v16 = v14;
    }
    else {
      v16 = v15;
    }
    *(_QWORD*)(a2 + 24) = v16;
    result = SdkRoutine_859610(v13);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_39;
    }
    v3 = *(_QWORD*)(a2 + 16);
  }
  *(_BYTE*)(result + v3) = 60;
  v17 = a1[4];
  ++*(_QWORD*)(a2 + 16);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v17);
  v18 = *(_QWORD*)(a2 + 16);
  v19 = *(_QWORD*)(a2 + 24);
  if (v18 + 1 <= v19) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v20 = *(_QWORD*)(a2 + 8);
    v21 = v18 + 993;
    v22 = 2 * v19;
    if (v22 <= v21) {
      v23 = v21;
    }
    else {
      v23 = v22;
    }
    *(_QWORD*)(a2 + 24) = v23;
    result = SdkRoutine_859610(v20);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_39;
    }
    v18 = *(_QWORD*)(a2 + 16);
  }
  *(_BYTE*)(result + v18) = 62;
  v24 = *(_QWORD*)(a2 + 16);
  v25 = *(_QWORD*)(a2 + 24);
  *(_DWORD*)(a2 + 40) = v2 + 1;
  v26 = v24 + 1;
  v27 = v24 + 2;
  *(_QWORD*)(a2 + 16) = v24 + 1;
  if (v24 + 2 <= v25) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v28 = *(_QWORD*)(a2 + 8);
    if (2 * v25 <= v24 + 994) {
      v29 = v24 + 994;
    }
    else {
      v29 = 2 * v25;
    }
    *(_QWORD*)(a2 + 24) = v29;
    result = SdkRoutine_859610(v28);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_39;
    }
    v26 = *(_QWORD*)(a2 + 16);
    v27 = v26 + 1;
  }
  *(_QWORD*)(a2 + 16) = v27;
  *(_BYTE*)(result + v26) = 40;
  SdkRoutine_83db20(a1[5], a2, 0x13u, 0);
  --*(_DWORD*)(a2 + 40);
  v30 = *(_QWORD*)(a2 + 16);
  v31 = *(_QWORD*)(a2 + 24);
  v32 = v30 + 1;
  if (v30 + 1 <= v31) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_38;
  }
  v33 = *(_QWORD*)(a2 + 8);
  v34 = v30 + 993;
  if (2 * v31 <= v34) {
    v35 = v34;
  }
  else {
    v35 = 2 * v31;
  }
  *(_QWORD*)(a2 + 24) = v35;
  result = SdkRoutine_859610(v33);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_39:
    v36 = SdkRoutine_857810(result);
    *(_DWORD*)(a2 + 40) = v2;
    SdkRoutine_87c790(v36);
    __udf(0);
  }
  v30 = *(_QWORD*)(a2 + 16);
  v32 = v30 + 1;
LABEL_38:
  *(_QWORD*)(a2 + 16) = v32;
  *(_BYTE*)(result + v30) = 41;
  return result;
}

__int64 SdkHr_83f360(unsigned __int8** a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int8* v9;
  unsigned __int8* v10;
  __int64 result;
  unsigned __int8* v12;
  unsigned __int8* v13;
  int v14;
  unsigned __int8* v15;
  __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  signed __int64 v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  int v24;
  unsigned __int8* v25;
  __int64 v26;
  __int16 v27;
  char* v28;
  unsigned __int8* v29;
  unsigned __int8* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int8* v56;
  unsigned __int8* v57;
  unsigned __int8* v58;
  char v59;
  __int64 v60;
  unsigned __int8* v61;
  int v62;
  __int64* v63;
  __int64* v64;
  unsigned __int8* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int8* v70;
  unsigned __int8* v71;
  int v72;
  __int64 v73;
  __int64 v74;
  unsigned __int8* v75;
  unsigned __int8* v76;
  char v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int8* v81;
  int v82;
  unsigned __int8* v83;
  unsigned __int8* v84;
  unsigned __int8* v85;
  signed __int64 v86;
  unsigned __int8* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int8* v91;
  unsigned __int64 v93;
  _QWORD v94[3];
  _QWORD v95[8];
  __int64 vars0;

  if (a2 != 0) {
    a1[84] = a1[83];
  }
  v9 = *a1;
  v10 = a1[1];
  if ((unsigned __int64)(v10 - *a1) < 2) {
    return 0;
  }
  if (*(_WORD*)v9 != 29781) {
    if (*(_WORD*)v9 != 27733) {
      if (*(_WORD*)v9 == 25173) {
        v12 = v9 + 2;
        *a1 = v9 + 2;
        if (v10 != v9 + 2 && (unsigned int)*v12 - 48 <= 9) {
          do {
            if ((unsigned int)*v12 - 48 > 9) {
              break;
            }
            *a1 = ++v12;
          } while (v12 != v10);
        }
        if (v12 != v10) {
          v14 = *v12;
          v13 = v12 + 1;
          if (v14 == 95) {
            v15 = a1[614];
            *a1 = v13;
            v16 = *((_QWORD*)v15 + 1);
            if ((unsigned __int64)(v16 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
            LABEL_17:
              *((_QWORD*)v15 + 1) = v16 + 32;
              *(_QWORD*)&v15[v16 + 16] = SdkData_e82ae8;
              result = (__int64)&v15[v16 + 16];
              *(_BYTE*)(result + 8) = 8;
              *(_WORD*)(result + 9) = *(_WORD*)&v15[v16 + 25] & 0xF000 | 0x540;
              *(_QWORD*)(result + 16) = "'block-literal'";
              *(_QWORD*)(result + 24) = 15;
              return result;
            }
            v17 = (unsigned __int8*)SdkRoutine_8578d0(4096);
            if (v17 != nullptr) {
              v16 = 0;
              *(_QWORD*)v17 = v15;
              *((_QWORD*)v17 + 1) = 0;
              v15 = v17;
              a1[614] = v17;
              goto LABEL_17;
            }
            goto LABEL_111;
          }
        }
      }
      return 0;
    }
    v28 = (char*)a1[83];
    v29 = a1[84];
    v30 = v9 + 2;
    v95[1] = 0;
    v95[2] = 0;
    *a1 = v9 + 2;
    memset(&v95[3], 0, 40);
    v31 = v29 - (unsigned __int8*)v28;
    v94[0] = v95;
    v94[1] = v95;
    v91 = a1[98];
    a1[98] = (unsigned __int8*)((v29 - (unsigned __int8*)v28) >> 3);
    v93 = (v29 - (unsigned __int8*)v28) >> 3;
    v94[2] = &vars0;
    v95[0] = 0;
    if (v29 != a1[85]) {
    LABEL_41:
      v34 = a1[2];
      v35 = a1[3];
      v36 = v10 - v30;
      *(_QWORD*)v29 = v94;
      a1[84] = v29 + 8;
      if (v10 != v30) {
        v37 = (__int64*)(a1 + 5);
        do {
          if (*v30 != 84) {
            break;
          }
          v40 = v36 < 2 ? 0LL : v30[1];
          v41 = SdkRoutine_8571c0("yptnk", v40, 5);
          if (v41 == 0 || v41 - (_QWORD) "yptnk" == -1) {
            break;
          }
          result = SdkRoutine_840a60(a1, v94);
          if (result == 0) {
            goto LABEL_105;
          }
          v38 = (__int64*)a1[3];
          if (v38 == (__int64*)a1[4]) {
            v42 = a1[2];
            v43 = result;
            v44 = (char*)v38 - (char*)v42;
            if (v42 == (unsigned __int8*)v37) {
              v32 = SdkRoutine_8578d0(2 * ((char*)v38 - (char*)v42));
              if (v32 == 0) {
                goto LABEL_109;
              }
              if (v38 != v37) {
                v45 = v32;
                SdkRoutine_858a50(v32, v42, v44);
                v32 = v45;
              }
              a1[2] = (unsigned __int8*)v32;
            }
            else {
              v32 = SdkRoutine_859610(a1[2]);
              a1[2] = (unsigned __int8*)v32;
              if (v32 == 0) {
                goto LABEL_109;
              }
            }
            v38 = (__int64*)(v32 + v44);
            v39 = v32 + 8 * (v44 >> 2);
            result = v43;
            a1[4] = (unsigned __int8*)v39;
          }
          *v38 = result;
          a1[3] = (unsigned __int8*)(v38 + 1);
          v30 = *a1;
          v36 = a1[1] - *a1;
        } while (v36 != 0);
      }
      v46 = (v35 - v34) >> 3;
      v53 = SdkRoutine_8363a0(a1, v46, a3, a4, a5, a6, a7, a8, v89);
      v55 = v54;
      if (v54 == 0) {
        v56 = a1[84];
        if (v56 == a1[83]) {
          goto LABEL_112;
        }
        a1[84] = v56 - 8;
      }
      v57 = *a1;
      v58 = a1[1];
      if (*a1 == v58) {
        v60 = 0;
      }
      else {
        if (*v57 == 81) {
          v59 = *((_BYTE*)a1 + 778);
          *a1 = v57 + 1;
          *((_BYTE*)a1 + 778) = 1;
          v60 = SdkRoutine_8393e0(a1);
          *((_BYTE*)a1 + 778) = v59;
          if (v60 == 0) {
            goto LABEL_104;
          }
          v57 = *a1;
          v58 = a1[1];
        }
        else {
          v60 = 0;
        }
        if (v58 != v57) {
          v62 = *v57;
          v61 = v57 + 1;
          if (v62 == 118) {
            *a1 = v61;
          LABEL_85:
            v73 = SdkRoutine_8363a0(a1, v46, v47, v48, v49, v50, v51, v52, v90);
            v76 = *a1;
            v75 = a1[1];
            if (*a1 != v75) {
              if (*v76 != 81) {
                v80 = 0;
              LABEL_90:
                if (v76 != v75) {
                  v82 = *v76;
                  v81 = v76 + 1;
                  if (v82 == 69) {
                    *a1 = v81;
                    if (v75 == v81 || (unsigned int)*v81 - 48 > 9) {
                      v85 = nullptr;
                      v86 = 0;
                    }
                    else {
                      v83 = v81;
                      while ((unsigned int)*v83 - 48 <= 9) {
                        *a1 = ++v83;
                        if (v83 == v75) {
                          v84 = v75;
                          goto LABEL_100;
                        }
                      }
                      v84 = v83;
                    LABEL_100:
                      v86 = v84 - v81;
                      v85 = v81;
                      v81 = v83;
                    }
                    if (v81 != v75 && *v81 == 95) {
                      *a1 = v81 + 1;
                      result = SdkRoutine_841040(a1, v53, v55, v60, v73, v74,
                                                 v80, v85, v86);
                      goto LABEL_105;
                    }
                  }
                }
                goto LABEL_104;
              }
              v77 = *((_BYTE*)a1 + 778);
              v78 = v74;
              v79 = v73;
              *a1 = v76 + 1;
              *((_BYTE*)a1 + 778) = 1;
              v80 = SdkRoutine_8393e0(a1);
              *((_BYTE*)a1 + 778) = v77;
              if (v80 != 0) {
                v76 = *a1;
                v75 = a1[1];
                v73 = v79;
                v74 = v78;
                goto LABEL_90;
              }
            }
          LABEL_104:
            result = 0;
            goto LABEL_105;
          }
        }
      }
      v63 = (__int64*)(a1 + 5);
      while (1) {
        result = SdkRoutine_833e70(a1);
        if (result == 0) {
          break;
        }
        v64 = (__int64*)a1[3];
        if (v64 == (__int64*)a1[4]) {
          v65 = a1[2];
          v66 = result;
          v67 = (char*)v64 - (char*)v65;
          if (v65 == (unsigned __int8*)v63) {
            v32 = SdkRoutine_8578d0(2 * ((char*)v64 - (char*)v65));
            if (v32 == 0) {
              goto LABEL_109;
            }
            if (v64 != v63) {
              v68 = v32;
              SdkRoutine_858a50(v32, v65, v67);
              v32 = v68;
            }
            a1[2] = (unsigned __int8*)v32;
          }
          else {
            v32 = SdkRoutine_859610(a1[2]);
            a1[2] = (unsigned __int8*)v32;
            if (v32 == 0) {
              goto LABEL_109;
            }
          }
          v64 = (__int64*)(v32 + v67);
          v69 = v32 + 8 * (v67 >> 2);
          result = v66;
          a1[4] = (unsigned __int8*)v69;
        }
        v70 = *a1;
        v71 = a1[1];
        *v64 = result;
        a1[3] = (unsigned __int8*)(v64 + 1);
        if (v71 != v70) {
          v72 = *v70;
          if (v72 == 81 || v72 == 69) {
            goto LABEL_85;
          }
        }
      }
    LABEL_105:
      v87 = a1[83];
      if (v93 <= (a1[84] - v87) >> 3) {
        a1[84] = &v87[8 * v93];
        if ((_QWORD*)v94[0] != v95) {
          v88 = result;
          SdkRoutine_857400(v94[0]);
          result = v88;
        }
        a1[98] = v91;
        return result;
      }
    LABEL_110:
      SdkRoutine_84c1f0("libc++abi: ");
    }
    if (v28 == (char*)(a1 + 86)) {
      v32 = SdkRoutine_8578d0(2 * v31);
      if (v32 != 0) {
        if (v29 != (unsigned __int8*)v28) {
          v33 = v32;
          SdkRoutine_858a50(v32, v28, v31);
          v32 = v33;
        }
        a1[83] = (unsigned __int8*)v32;
        goto LABEL_40;
      }
    }
    else {
      v32 = SdkRoutine_859610(v28);
      a1[83] = (unsigned __int8*)v32;
      if (v32 != 0) {
        v30 = *a1;
        v10 = a1[1];
      LABEL_40:
        v29 = (unsigned __int8*)(v32 + v31);
        a1[85] = (unsigned __int8*)(v32 + 8 * (v31 >> 2));
        goto LABEL_41;
      }
    }
  LABEL_109:
    SdkRoutine_857810(v32);
    goto LABEL_110;
  }
  v18 = v9 + 2;
  *a1 = v9 + 2;
  if (v10 == v9 + 2 || (unsigned int)*v18 - 48 > 9) {
    v22 = nullptr;
    v21 = 0;
    if (v18 == v10) {
      return 0;
    }
  }
  else {
    v19 = v9 + 2;
    v20 = v9 + 2;
    while ((unsigned int)*v20 - 48 <= 9) {
      ++v20;
      ++v19;
      *a1 = v20;
      if (v20 == v10) {
        v19 = v10;
        break;
      }
    }
    v21 = v19 - v18;
    v22 = v18;
    v18 = v20;
    if (v20 == v10) {
      return 0;
    }
  }
  v24 = *v18;
  v23 = v18 + 1;
  if (v24 != 95) {
    return 0;
  }
  v25 = a1[614];
  *a1 = v23;
  v26 = *((_QWORD*)v25 + 1);
  if ((unsigned __int64)(v26 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v17 = (unsigned __int8*)SdkRoutine_8578d0(4096);
    if (v17 == nullptr) {
    LABEL_111:
      SdkRoutine_87c7b0(v17);
    LABEL_112:
      SdkRoutine_84c1f0("libc++abi: Popping empty vector!");
    }
    v26 = 0;
    *(_QWORD*)v17 = v25;
    *((_QWORD*)v17 + 1) = 0;
    v25 = v17;
    a1[614] = v17;
  }
  *((_QWORD*)v25 + 1) = v26 + 32;
  *(_QWORD*)&v25[v26 + 16] = SdkData_e838b0;
  result = (__int64)&v25[v26 + 16];
  *(_BYTE*)(result + 8) = 51;
  v27 = *(_WORD*)&v25[v26 + 25];
  *(_QWORD*)(result + 16) = v22;
  *(_QWORD*)(result + 24) = v21;
  *(_WORD*)(result + 9) = v27 & 0xF000 | 0x540;
  return result;
}

__int64 SdkHr_8412e0(__int64 a1, __int64** a2, unsigned int a3)
{
  __int64 v3;
  _QWORD* v4;
  int v7;
  __int64 v8;
  _QWORD* v10;
  __int64 result;
  __int16 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v3 = a1 + 4LL * a3;
  v4 = *(_QWORD**)(a1 + 4912);
  v7 = *(_DWORD*)(v3 + 792);
  *(_DWORD*)(v3 + 792) = v7 + 1;
  v8 = v4[1];
  if ((unsigned __int64)(v8 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v10 = (_QWORD*)SdkRoutine_8578d0(4096);
    if (v10 == nullptr) {
      v18 = SdkRoutine_87c7b0(0);
      goto LABEL_17;
    }
    v8 = 0;
    *v10 = v4;
    v10[1] = 0;
    v4 = v10;
    *(_QWORD*)(a1 + 4912) = v10;
  }
  v4[1] = v8 + 32;
  *(_QWORD*)((char*)v4 + v8 + 16) = SdkData_e83928;
  result = (__int64)v4 + v8 + 16;
  *(_BYTE*)(result + 8) = 33;
  v12 = *(_WORD*)((char*)v4 + v8 + 25);
  *(_DWORD*)(result + 12) = a3;
  *(_DWORD*)(result + 16) = v7;
  *(_WORD*)(result + 9) = v12 & 0xF000 | 0x540;
  v13 = *a2;
  if (*a2 != nullptr) {
    v14 = (__int64*)v13[1];
    if (v14 == (__int64*)v13[2]) {
      v15 = (__int64*)*v13;
      v16 = result;
      v17 = (__int64)v14 - *v13;
      if ((__int64*)*v13 == v13 + 3) {
        v18 = SdkRoutine_8578d0(2 * v17);
        if (v18 == 0) {
          goto LABEL_17;
        }
        if (v14 != v15) {
          v19 = v18;
          SdkRoutine_858a50(v18, v15, v17);
          v18 = v19;
        }
        *v13 = v18;
      }
      else {
        v18 = SdkRoutine_859610(*v13);
        *v13 = v18;
        if (v18 == 0) {
        LABEL_17:
          SdkRoutine_857810(v18);
          __udf(0);
        }
      }
      v14 = (__int64*)(v18 + v17);
      v20 = v18 + 8 * (v17 >> 2);
      result = v16;
      v13[2] = v20;
    }
    *v14 = result;
    v13[1] = (__int64)(v14 + 1);
  }
  return result;
}

__int64 SdkHr_841a80(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *(_QWORD*)(a2 + 16);
  v3 = *(_QWORD*)(a2 + 24);
  v4 = *(_DWORD*)(a2 + 40);
  *(_DWORD*)(a2 + 40) = 0;
  if (v2 + 9 <= v3) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v2 + 1001;
    v9 = 2 * v3;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    *(_QWORD*)(a2 + 24) = v10;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_16;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  v12 = result + v2;
  *(_QWORD*)v12 = *(_QWORD*)"template<";
  *(_BYTE*)(v12 + 8) = 60;
  *(_QWORD*)(a2 + 16) += 9LL;
  SdkRoutine_83e420(a1 + 24, (_QWORD*)a2);
  v13 = *(_QWORD*)(a2 + 16);
  v14 = *(_QWORD*)(a2 + 24);
  if (v13 + 11 <= v14) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_15;
  }
  v15 = *(_QWORD*)(a2 + 8);
  v16 = v13 + 1003;
  v17 = 2 * v14;
  if (v17 <= v16) {
    v18 = v16;
  }
  else {
    v18 = v17;
  }
  *(_QWORD*)(a2 + 24) = v18;
  result = SdkRoutine_859610(v15);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_16:
    v20 = SdkRoutine_857810(result);
    *(_DWORD*)(a2 + 40) = v4;
    SdkRoutine_87c790(v20);
    __udf(0);
  }
  v13 = *(_QWORD*)(a2 + 16);
LABEL_15:
  v19 = result + v13;
  *(_QWORD*)v19 = *(_QWORD*)"> typename ";
  *(_DWORD*)(v19 + 7) = 543518049;
  *(_DWORD*)(a2 + 40) = v4;
  *(_QWORD*)(a2 + 16) += 11LL;
  return result;
}

__int64 SdkHr_841f10(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  if (a1[3] != 0) {
    v5 = *(_QWORD*)(a2 + 16);
    v6 = *(_QWORD*)(a2 + 24);
    LODWORD(v2) = *(_DWORD*)(a2 + 40);
    *(_DWORD*)(a2 + 40) = 0;
    if (v5 + 1 <= v6) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v7 = *(_QWORD*)(a2 + 8);
      v8 = v5 + 993;
      v9 = 2 * v6;
      if (v9 <= v8) {
        v10 = v8;
      }
      else {
        v10 = v9;
      }
      *(_QWORD*)(a2 + 24) = v10;
      result = SdkRoutine_859610(v7);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_60;
      }
      v5 = *(_QWORD*)(a2 + 16);
    }
    *(_BYTE*)(result + v5) = 60;
    ++*(_QWORD*)(a2 + 16);
    SdkRoutine_83e420((__int64)(a1 + 2), (_QWORD*)a2);
    v12 = *(_QWORD*)(a2 + 16);
    v13 = *(_QWORD*)(a2 + 24);
    if (v12 + 1 <= v13) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v14 = *(_QWORD*)(a2 + 8);
      v15 = v12 + 993;
      v16 = 2 * v13;
      if (v16 <= v15) {
        v17 = v15;
      }
      else {
        v17 = v16;
      }
      *(_QWORD*)(a2 + 24) = v17;
      result = SdkRoutine_859610(v14);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_60;
      }
      v12 = *(_QWORD*)(a2 + 16);
    }
    *(_BYTE*)(result + v12) = 62;
    *(_DWORD*)(a2 + 40) = v2;
    ++*(_QWORD*)(a2 + 16);
  }
  v18 = *(_QWORD*)(a2 + 16);
  if (a1[4] != 0) {
    v19 = *(_QWORD*)(a2 + 24);
    if (v18 + 10 <= v19) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v20 = *(_QWORD*)(a2 + 8);
      v21 = v18 + 1002;
      v22 = 2 * v19;
      if (v22 <= v21) {
        v23 = v21;
      }
      else {
        v23 = v22;
      }
      *(_QWORD*)(a2 + 24) = v23;
      result = SdkRoutine_859610(v20);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_60;
      }
      v18 = *(_QWORD*)(a2 + 16);
    }
    v24 = result + v18;
    *(_QWORD*)v24 = *(_QWORD*)" requires ";
    *(_WORD*)(v24 + 8) = 8307;
    v2 = a1[4];
    *(_QWORD*)(a2 + 16) += 10LL;
    (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v2);
    if ((*(_WORD*)(v2 + 9) & 0xC0) != 0x40) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v2);
    }
    v25 = *(_QWORD*)(a2 + 16);
    v26 = *(_QWORD*)(a2 + 24);
    if (v25 + 1 <= v26) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v27 = *(_QWORD*)(a2 + 8);
      v28 = v25 + 993;
      v29 = 2 * v26;
      if (v29 <= v28) {
        v30 = v28;
      }
      else {
        v30 = v29;
      }
      *(_QWORD*)(a2 + 24) = v30;
      result = SdkRoutine_859610(v27);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_60;
      }
      v25 = *(_QWORD*)(a2 + 16);
    }
    *(_BYTE*)(result + v25) = 32;
    v18 = *(_QWORD*)(a2 + 16) + 1LL;
    *(_QWORD*)(a2 + 16) = v18;
  }
  v31 = *(_QWORD*)(a2 + 24);
  ++*(_DWORD*)(a2 + 40);
  v32 = v18 + 1;
  if (v18 + 1 <= v31) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v33 = *(_QWORD*)(a2 + 8);
    v34 = v18 + 993;
    if (2 * v31 <= v34) {
      v35 = v34;
    }
    else {
      v35 = 2 * v31;
    }
    *(_QWORD*)(a2 + 24) = v35;
    result = SdkRoutine_859610(v33);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_60;
    }
    v18 = *(_QWORD*)(a2 + 16);
    v32 = v18 + 1;
  }
  *(_QWORD*)(a2 + 16) = v32;
  *(_BYTE*)(result + v18) = 40;
  SdkRoutine_83e420((__int64)(a1 + 5), (_QWORD*)a2);
  --*(_DWORD*)(a2 + 40);
  v36 = *(_QWORD*)(a2 + 16);
  v37 = *(_QWORD*)(a2 + 24);
  if (v36 + 1 <= v37) {
    result = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a2 + 16) = v36 + 1;
    *(_BYTE*)(result + v36) = 41;
    if (a1[7] == 0) {
      return result;
    }
  }
  else {
    v38 = *(_QWORD*)(a2 + 8);
    v39 = v36 + 993;
    if (2 * v37 <= v39) {
      v40 = v39;
    }
    else {
      v40 = 2 * v37;
    }
    *(_QWORD*)(a2 + 24) = v40;
    result = SdkRoutine_859610(v38);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_60;
    }
    v41 = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(a2 + 16) = v41 + 1;
    *(_BYTE*)(result + v41) = 41;
    if (a1[7] == 0) {
      return result;
    }
  }
  v42 = *(_QWORD*)(a2 + 16);
  v43 = *(_QWORD*)(a2 + 24);
  if (v42 + 10 > v43) {
    v44 = *(_QWORD*)(a2 + 8);
    v45 = v42 + 1002;
    v46 = 2 * v43;
    if (v46 <= v45) {
      v47 = v45;
    }
    else {
      v47 = v46;
    }
    *(_QWORD*)(a2 + 24) = v47;
    result = SdkRoutine_859610(v44);
    *(_QWORD*)(a2 + 8) = result;
    if (result != 0) {
      v42 = *(_QWORD*)(a2 + 16);
      goto LABEL_57;
    }
  LABEL_60:
    v50 = SdkRoutine_857810(result);
    *(_DWORD*)(a2 + 40) = v2;
    v51 = SdkRoutine_87c790(v50);
    return SdkRoutine_8422a0(v51);
  }
  result = *(_QWORD*)(a2 + 8);
LABEL_57:
  v48 = result + v42;
  *(_QWORD*)v48 = *(_QWORD*)" requires ";
  *(_WORD*)(v48 + 8) = 8307;
  v49 = a1[7];
  *(_QWORD*)(a2 + 16) += 10LL;
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v49);
  if ((*(_WORD*)(v49 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v49);
  }
  return result;
}

__int64 SdkHr_8422a0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 2 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 994;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_18;
    }
    v2 = a2[2];
  }
  *(_WORD*)(result + v2) = 23899;
  v11 = *(_QWORD*)(a1 + 16);
  v12 = *(unsigned __int8*)(v11 + 8);
  v13 = a2[2] + 2LL;
  a2[2] = v13;
  if (v12 == 52) {
    SdkRoutine_841f10((_QWORD*)v11, (__int64)a2);
    v13 = a2[2];
  }
  v14 = a2[3];
  if (v13 + 5 <= v14) {
    result = a2[1];
    goto LABEL_17;
  }
  v15 = a2[1];
  v16 = v13 + 997;
  v17 = 2 * v14;
  if (v17 <= v16) {
    v18 = v16;
  }
  else {
    v18 = v17;
  }
  a2[3] = v18;
  result = SdkRoutine_859610(v15);
  a2[1] = result;
  if (result == 0) {
  LABEL_18:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v13 = a2[2];
LABEL_17:
  v19 = result + v13;
  *(_BYTE*)(v19 + 4) = 125;
  *(_DWORD*)v19 = 774778491;
  a2[2] += 5LL;
  return result;
}

__int64 SdkHr_8433e0(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  v3 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    result = (*(__int64 (**)(__int64, _QWORD*, __int64))(*(_QWORD*)v3 + 32LL))(
        v3, a2, a1 + 24);
    if ((result & 1) != 0) {
      return result;
    }
    v6 = *(_QWORD*)(a1 + 16);
    (*(void (**)(_QWORD*, __int64))(*a2 + 16LL))(a2, v6);
    if ((*(_WORD*)(v6 + 9) & 0xC0) != 0x40) {
      (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, v6);
    }
  }
  v7 = a2[2];
  v8 = a2[3];
  v9 = v7 + 1;
  if (v7 + 1 <= v8) {
    result = a2[1];
  }
  else {
    v10 = a2[1];
    v11 = v7 + 993;
    if (2 * v8 <= v11) {
      v12 = v11;
    }
    else {
      v12 = 2 * v8;
    }
    a2[3] = v12;
    result = SdkRoutine_859610(v10);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_21;
    }
    v7 = a2[2];
    v9 = v7 + 1;
  }
  a2[2] = v9;
  *(_BYTE*)(result + v7) = 123;
  SdkRoutine_83e420(a1 + 24, a2);
  v13 = a2[2];
  v14 = a2[3];
  v15 = v13 + 1;
  if (v13 + 1 <= v14) {
    result = a2[1];
    goto LABEL_19;
  }
  v16 = a2[1];
  v17 = v13 + 993;
  if (2 * v14 <= v17) {
    v18 = v17;
  }
  else {
    v18 = 2 * v14;
  }
  a2[3] = v18;
  result = SdkRoutine_859610(v16);
  a2[1] = result;
  if (result == 0) {
  LABEL_21:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v13 = a2[2];
  v15 = v13 + 1;
LABEL_19:
  a2[2] = v15;
  *(_BYTE*)(result + v13) = 125;
  return result;
}

__int64 SdkHr_843ca0(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;

  v2 = *(_QWORD*)(a2 + 16);
  v3 = *(_QWORD*)(a2 + 24);
  if (v2 + 8 <= v3) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v6 = *(_QWORD*)(a2 + 8);
    v7 = v2 + 1000;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v6);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_65;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  *(_QWORD*)(result + v2) = 0x7365726975716572LL;
  v11 = *(_QWORD*)(a2 + 16);
  v12 = a1[3];
  v13 = v11 + 8;
  *(_QWORD*)(a2 + 16) = v11 + 8;
  if (v12 != 0) {
    v14 = *(_QWORD*)(a2 + 24);
    v15 = v11 + 9;
    if (v11 + 9 <= v14) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v16 = *(_QWORD*)(a2 + 8);
      if (2 * v14 <= v11 + 1001) {
        v17 = v11 + 1001;
      }
      else {
        v17 = 2 * v14;
      }
      *(_QWORD*)(a2 + 24) = v17;
      result = SdkRoutine_859610(v16);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_65;
      }
      v13 = *(_QWORD*)(a2 + 16);
      v15 = v13 + 1;
    }
    *(_QWORD*)(a2 + 16) = v15;
    *(_BYTE*)(result + v13) = 32;
    ++*(_DWORD*)(a2 + 40);
    v18 = *(_QWORD*)(a2 + 16);
    v19 = *(_QWORD*)(a2 + 24);
    v20 = v18 + 1;
    if (v18 + 1 <= v19) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v21 = *(_QWORD*)(a2 + 8);
      v22 = v18 + 993;
      if (2 * v19 <= v22) {
        v23 = v22;
      }
      else {
        v23 = 2 * v19;
      }
      *(_QWORD*)(a2 + 24) = v23;
      result = SdkRoutine_859610(v21);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_65;
      }
      v18 = *(_QWORD*)(a2 + 16);
      v20 = v18 + 1;
    }
    *(_QWORD*)(a2 + 16) = v20;
    *(_BYTE*)(result + v18) = 40;
    SdkRoutine_83e420((__int64)(a1 + 2), (_QWORD*)a2);
    --*(_DWORD*)(a2 + 40);
    v24 = *(_QWORD*)(a2 + 16);
    v25 = *(_QWORD*)(a2 + 24);
    v26 = v24 + 1;
    if (v24 + 1 <= v25) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v27 = *(_QWORD*)(a2 + 8);
      v28 = v24 + 993;
      if (2 * v25 <= v28) {
        v29 = v28;
      }
      else {
        v29 = 2 * v25;
      }
      *(_QWORD*)(a2 + 24) = v29;
      result = SdkRoutine_859610(v27);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_65;
      }
      v24 = *(_QWORD*)(a2 + 16);
      v26 = v24 + 1;
    }
    *(_QWORD*)(a2 + 16) = v26;
    *(_BYTE*)(result + v24) = 41;
    v13 = *(_QWORD*)(a2 + 16);
  }
  v30 = *(_QWORD*)(a2 + 24);
  v31 = v13 + 1;
  if (v13 + 1 <= v30) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v32 = *(_QWORD*)(a2 + 8);
    v33 = v13 + 993;
    if (2 * v30 <= v33) {
      v34 = v33;
    }
    else {
      v34 = 2 * v30;
    }
    *(_QWORD*)(a2 + 24) = v34;
    result = SdkRoutine_859610(v32);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_65;
    }
    v13 = *(_QWORD*)(a2 + 16);
    v31 = v13 + 1;
  }
  *(_QWORD*)(a2 + 16) = v31;
  *(_BYTE*)(result + v13) = 32;
  ++*(_DWORD*)(a2 + 40);
  v35 = *(_QWORD*)(a2 + 16);
  v36 = *(_QWORD*)(a2 + 24);
  if (v35 + 1 <= v36) {
    v42 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a2 + 16) = v35 + 1;
    *(_BYTE*)(v42 + v35) = 123;
    v41 = a1[5];
    if (v41 == 0) {
      goto LABEL_50;
    }
    goto LABEL_46;
  }
  v37 = *(_QWORD*)(a2 + 8);
  v38 = v35 + 993;
  if (2 * v36 <= v38) {
    v39 = v38;
  }
  else {
    v39 = 2 * v36;
  }
  *(_QWORD*)(a2 + 24) = v39;
  result = SdkRoutine_859610(v37);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
    goto LABEL_65;
  }
  v40 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a2 + 16) = v40 + 1;
  *(_BYTE*)(result + v40) = 123;
  v41 = a1[5];
  if (v41 != 0) {
  LABEL_46:
    v43 = (_QWORD*)a1[4];
    v44 = 8 * v41;
    do {
      v45 = *v43;
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 16LL))(a2, *v43);
      if ((*(_WORD*)(v45 + 9) & 0xC0) != 0x40) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v45);
      }
      ++v43;
      v44 -= 8;
    } while (v44 != 0);
  }
LABEL_50:
  v46 = *(_QWORD*)(a2 + 16);
  v47 = *(_QWORD*)(a2 + 24);
  v48 = v46 + 1;
  if (v46 + 1 <= v47) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v49 = *(_QWORD*)(a2 + 8);
    v50 = v46 + 993;
    if (2 * v47 <= v50) {
      v51 = v50;
    }
    else {
      v51 = 2 * v47;
    }
    *(_QWORD*)(a2 + 24) = v51;
    result = SdkRoutine_859610(v49);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_65;
    }
    v46 = *(_QWORD*)(a2 + 16);
    v48 = v46 + 1;
  }
  *(_QWORD*)(a2 + 16) = v48;
  *(_BYTE*)(result + v46) = 32;
  --*(_DWORD*)(a2 + 40);
  v52 = *(_QWORD*)(a2 + 16);
  v53 = *(_QWORD*)(a2 + 24);
  v54 = v52 + 1;
  if (v52 + 1 <= v53) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_64;
  }
  v55 = *(_QWORD*)(a2 + 8);
  v56 = v52 + 993;
  if (2 * v53 <= v56) {
    v57 = v56;
  }
  else {
    v57 = 2 * v53;
  }
  *(_QWORD*)(a2 + 24) = v57;
  result = SdkRoutine_859610(v55);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_65:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v52 = *(_QWORD*)(a2 + 16);
  v54 = v52 + 1;
LABEL_64:
  *(_QWORD*)(a2 + 16) = v54;
  *(_BYTE*)(result + v52) = 125;
  return result;
}

__int64 SdkHr_845a30(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_16;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 91;
  SdkRoutine_83e420(a1 + 16, (_QWORD*)a2);
  --*(_DWORD*)(a2 + 40);
  v11 = *(_QWORD*)(a2 + 16);
  v12 = *(_QWORD*)(a2 + 24);
  v13 = v11 + 1;
  if (v11 + 1 <= v12) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_15;
  }
  v14 = *(_QWORD*)(a2 + 8);
  v15 = v11 + 993;
  if (2 * v12 <= v15) {
    v16 = v15;
  }
  else {
    v16 = 2 * v12;
  }
  *(_QWORD*)(a2 + 24) = v16;
  result = SdkRoutine_859610(v14);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_16:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v11 = *(_QWORD*)(a2 + 16);
  v13 = v11 + 1;
LABEL_15:
  *(_QWORD*)(a2 + 16) = v13;
  *(_BYTE*)(result + v11) = 93;
  return result;
}

__int64 SdkHr_846360(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  int v4;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  v2 = *(_QWORD*)(a2 + 16);
  v3 = *(_QWORD*)(a2 + 24);
  v4 = *(_DWORD*)(a2 + 40);
  *(_DWORD*)(a2 + 40) = 0;
  if (v2 + 1 <= v3) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v2 + 993;
    v9 = 2 * v3;
    if (v9 <= v8) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    *(_QWORD*)(a2 + 24) = v10;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_16;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  *(_BYTE*)(result + v2) = 60;
  ++*(_QWORD*)(a2 + 16);
  SdkRoutine_83e420(a1 + 16, (_QWORD*)a2);
  v12 = *(_QWORD*)(a2 + 16);
  v13 = *(_QWORD*)(a2 + 24);
  if (v12 + 1 <= v13) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_15;
  }
  v14 = *(_QWORD*)(a2 + 8);
  v15 = v12 + 993;
  v16 = 2 * v13;
  if (v16 <= v15) {
    v17 = v15;
  }
  else {
    v17 = v16;
  }
  *(_QWORD*)(a2 + 24) = v17;
  result = SdkRoutine_859610(v14);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_16:
    v18 = SdkRoutine_857810(result);
    *(_DWORD*)(a2 + 40) = v4;
    SdkRoutine_87c790(v18);
    __udf(0);
  }
  v12 = *(_QWORD*)(a2 + 16);
LABEL_15:
  *(_BYTE*)(result + v12) = 62;
  *(_DWORD*)(a2 + 40) = v4;
  ++*(_QWORD*)(a2 + 16);
  return result;
}

__int64 SdkHr_846520(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = a2[2];
  v3 = a2[3];
  if (v2 + 12 <= v3) {
    result = a2[1];
  }
  else {
    v6 = a2[1];
    v7 = v2 + 1004;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    a2[3] = v9;
    result = SdkRoutine_859610(v6);
    a2[1] = result;
    if (result == 0) {
      goto LABEL_16;
    }
    v2 = a2[2];
  }
  v11 = result + v2;
  *(_QWORD*)v11 = *(_QWORD*)" [enable_if:";
  *(_DWORD*)(v11 + 8) = 979790175;
  a2[2] += 12LL;
  SdkRoutine_83e420(a1 + 16, a2);
  v12 = a2[2];
  v13 = a2[3];
  v14 = v12 + 1;
  if (v12 + 1 <= v13) {
    result = a2[1];
    goto LABEL_15;
  }
  v15 = a2[1];
  v16 = v12 + 993;
  if (2 * v13 <= v16) {
    v17 = v16;
  }
  else {
    v17 = 2 * v13;
  }
  a2[3] = v17;
  result = SdkRoutine_859610(v15);
  a2[1] = result;
  if (result != 0) {
    v12 = a2[2];
    v14 = v12 + 1;
  LABEL_15:
    a2[2] = v14;
    *(_BYTE*)(result + v12) = 93;
    return result;
  }
LABEL_16:
  v18 = SdkRoutine_857810(result);
  return SdkRoutine_846610(v18);
}

__int64 SdkHr_846810(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;

  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_77;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 40;
  SdkRoutine_83e420(a1 + 32, (_QWORD*)a2);
  --*(_DWORD*)(a2 + 40);
  v11 = *(_QWORD*)(a2 + 16);
  v12 = *(_QWORD*)(a2 + 24);
  if (v11 + 1 <= v12) {
    result = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(a2 + 16) = v11 + 1;
    *(_BYTE*)(result + v11) = 41;
    if (*(_QWORD*)(a1 + 16) == 0) {
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v13 = *(_QWORD*)(a2 + 8);
  v14 = v11 + 993;
  if (2 * v12 <= v14) {
    v15 = v14;
  }
  else {
    v15 = 2 * v12;
  }
  *(_QWORD*)(a2 + 24) = v15;
  result = SdkRoutine_859610(v13);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
    goto LABEL_77;
  }
  v16 = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(a2 + 16) = v16 + 1;
  *(_BYTE*)(result + v16) = 41;
  if (*(_QWORD*)(a1 + 16) != 0) {
  LABEL_16:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 24LL))(a2);
  }
LABEL_17:
  v17 = *(_DWORD*)(a1 + 64);
  if ((v17 & 1) != 0) {
    v18 = *(_QWORD*)(a2 + 16);
    v19 = *(_QWORD*)(a2 + 24);
    if (v18 + 6 <= v19) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v20 = *(_QWORD*)(a2 + 8);
      v21 = v18 + 998;
      v22 = 2 * v19;
      if (v22 <= v21) {
        v23 = v21;
      }
      else {
        v23 = v22;
      }
      *(_QWORD*)(a2 + 24) = v23;
      result = SdkRoutine_859610(v20);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_77;
      }
      v18 = *(_QWORD*)(a2 + 16);
    }
    v24 = result + v18;
    *(_WORD*)(v24 + 4) = 29811;
    *(_DWORD*)v24 = 1852793632;
    *(_QWORD*)(a2 + 16) += 6LL;
    v17 = *(_DWORD*)(a1 + 64);
  }
  if ((v17 & 2) != 0) {
    v25 = *(_QWORD*)(a2 + 16);
    v26 = *(_QWORD*)(a2 + 24);
    if (v25 + 9 <= v26) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v27 = *(_QWORD*)(a2 + 8);
      v28 = v25 + 1001;
      v29 = 2 * v26;
      if (v29 <= v28) {
        v30 = v28;
      }
      else {
        v30 = v29;
      }
      *(_QWORD*)(a2 + 24) = v30;
      result = SdkRoutine_859610(v27);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_77;
      }
      v25 = *(_QWORD*)(a2 + 16);
    }
    v31 = result + v25;
    *(_QWORD*)v31 = *(_QWORD*)" volatile";
    *(_BYTE*)(v31 + 8) = 101;
    *(_QWORD*)(a2 + 16) += 9LL;
    v17 = *(_DWORD*)(a1 + 64);
  }
  if ((v17 & 4) != 0) {
    v32 = *(_QWORD*)(a2 + 16);
    v33 = *(_QWORD*)(a2 + 24);
    if (v32 + 9 <= v33) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v34 = *(_QWORD*)(a2 + 8);
      v35 = v32 + 1001;
      v36 = 2 * v33;
      if (v36 <= v35) {
        v37 = v35;
      }
      else {
        v37 = v36;
      }
      *(_QWORD*)(a2 + 24) = v37;
      result = SdkRoutine_859610(v34);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_77;
      }
      v32 = *(_QWORD*)(a2 + 16);
    }
    v38 = result + v32;
    *(_QWORD*)v38 = *(_QWORD*)" restrict";
    *(_BYTE*)(v38 + 8) = 116;
    *(_QWORD*)(a2 + 16) += 9LL;
  }
  v39 = *(unsigned __int8*)(a1 + 68);
  if (v39 == 2) {
    v46 = *(_QWORD*)(a2 + 16);
    v47 = *(_QWORD*)(a2 + 24);
    if (v46 + 3 <= v47) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v48 = *(_QWORD*)(a2 + 8);
      v49 = v46 + 995;
      v50 = 2 * v47;
      if (v50 <= v49) {
        v51 = v49;
      }
      else {
        v51 = v50;
      }
      *(_QWORD*)(a2 + 24) = v51;
      result = SdkRoutine_859610(v48);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_77;
      }
      v46 = *(_QWORD*)(a2 + 16);
    }
    v53 = result + v46;
    *(_BYTE*)(v53 + 2) = 38;
    *(_WORD*)v53 = 9760;
    v52 = 3;
  LABEL_62:
    *(_QWORD*)(a2 + 16) += v52;
    goto LABEL_63;
  }
  if (v39 == 1) {
    v40 = *(_QWORD*)(a2 + 16);
    v41 = *(_QWORD*)(a2 + 24);
    if (v40 + 2 <= v41) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v42 = *(_QWORD*)(a2 + 8);
      v43 = v40 + 994;
      v44 = 2 * v41;
      if (v44 <= v43) {
        v45 = v43;
      }
      else {
        v45 = v44;
      }
      *(_QWORD*)(a2 + 24) = v45;
      result = SdkRoutine_859610(v42);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_77;
      }
      v40 = *(_QWORD*)(a2 + 16);
    }
    *(_WORD*)(result + v40) = 9760;
    v52 = 2;
    goto LABEL_62;
  }
LABEL_63:
  v54 = *(_QWORD*)(a1 + 48);
  if (v54 != 0) {
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 16LL))(
        a2, *(_QWORD*)(a1 + 48));
    if ((*(_WORD*)(v54 + 9) & 0xC0) != 0x40) {
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v54);
    }
  }
  if (*(_QWORD*)(a1 + 56) != 0) {
    v55 = *(_QWORD*)(a2 + 16);
    v56 = *(_QWORD*)(a2 + 24);
    if (v55 + 10 <= v56) {
      result = *(_QWORD*)(a2 + 8);
    LABEL_74:
      v61 = result + v55;
      *(_QWORD*)v61 = *(_QWORD*)" requires ";
      *(_WORD*)(v61 + 8) = 8307;
      v62 = *(_QWORD*)(a1 + 56);
      *(_QWORD*)(a2 + 16) += 10LL;
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v62);
      if ((*(_WORD*)(v62 + 9) & 0xC0) != 0x40) {
        return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2,
                                                                        v62);
      }
      return result;
    }
    v57 = *(_QWORD*)(a2 + 8);
    v58 = v55 + 1002;
    v59 = 2 * v56;
    if (v59 <= v58) {
      v60 = v58;
    }
    else {
      v60 = v59;
    }
    *(_QWORD*)(a2 + 24) = v60;
    result = SdkRoutine_859610(v57);
    *(_QWORD*)(a2 + 8) = result;
    if (result != 0) {
      v55 = *(_QWORD*)(a2 + 16);
      goto LABEL_74;
    }
  LABEL_77:
    v63 = SdkRoutine_857810(result);
    return SdkRoutine_846c40(v63);
  }
  return result;
}

__int64 SdkHr_846dc0(unsigned __int8** a1, __int64 a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  unsigned __int8* v8;
  unsigned __int8* v9;
  int v11;
  __int64 v12;
  unsigned __int8* v13;
  int v14;
  unsigned __int8* v15;
  unsigned __int8* v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 result;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  __int64 v28;
  unsigned __int8* v29;
  __int16 v30;
  unsigned __int8* v31;
  unsigned __int8* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  unsigned __int8* v40;
  unsigned __int8* v41;
  __int64* v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int8* v48;
  unsigned __int8* v49;
  int v50;
  unsigned __int8* v51;
  __int64 v52;
  __int64 v53;
  __int16 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  unsigned __int8* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int16 v63;
  __int64 v64;
  unsigned __int8* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int16 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;

  v9 = *a1;
  v8 = a1[1];
  if (*a1 == v8 || *v9 != 114) {
    v11 = 0;
    if (v9 == v8) {
      goto LABEL_8;
    }
  }
  else {
    ++v9;
    v11 = 4;
    *a1 = v9;
    if (v9 == v8) {
      goto LABEL_8;
    }
  }
  if (*v9 == 86) {
    ++v9;
    v11 |= 2u;
    *a1 = v9;
  }
LABEL_8:
  if (v9 != v8 && *v9 == 75) {
    ++v9;
    v11 |= 1u;
    *a1 = v9;
  }
  if ((unsigned __int64)(v8 - v9) < 2) {
    goto LABEL_12;
  }
  if (*(_WORD*)v9 == 28484) {
    v27 = a1[614];
    *a1 = v9 + 2;
    v28 = *((_QWORD*)v27 + 1);
    if ((unsigned __int64)(v28 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
      v29 = (unsigned __int8*)SdkRoutine_8578d0(4096);
      if (v29 == nullptr) {
        goto LABEL_83;
      }
      v28 = 0;
      *(_QWORD*)v29 = v27;
      *((_QWORD*)v29 + 1) = 0;
      v27 = v29;
      a1[614] = v29;
    }
    *((_QWORD*)v27 + 1) = v28 + 32;
    *(_QWORD*)&v27[v28 + 16] = SdkData_e82ae8;
    v12 = (__int64)&v27[v28 + 16];
    v30 = *(_WORD*)&v27[v28 + 25];
    *(_BYTE*)(v12 + 8) = 8;
    *(_WORD*)(v12 + 9) = v30 & 0xF000 | 0x540;
    *(_QWORD*)(v12 + 16) = "noexcept";
    *(_QWORD*)(v12 + 24) = 8;
    goto LABEL_33;
  }
  if (*(_WORD*)v9 == 20292) {
    *a1 = v9 + 2;
    result = SdkRoutine_8393e0(a1);
    if (result == 0) {
      return result;
    }
    v48 = *a1;
    if (*a1 == a1[1]) {
      return 0;
    }
    v50 = *v48;
    v49 = v48 + 1;
    if (v50 != 69) {
      return 0;
    }
    v51 = a1[614];
    *a1 = v49;
    v52 = *((_QWORD*)v51 + 1);
    if ((unsigned __int64)(v52 - 4048) > 0xFFFFFFFFFFFFF00FLL) {
      goto LABEL_68;
    }
    v53 = result;
    v29 = (unsigned __int8*)SdkRoutine_8578d0(4096);
    if (v29 != nullptr) {
      v52 = 0;
      *(_QWORD*)v29 = v51;
      *((_QWORD*)v29 + 1) = 0;
      v51 = v29;
      a1[614] = v29;
      result = v53;
    LABEL_68:
      *((_QWORD*)v51 + 1) = v52 + 32;
      *(_QWORD*)&v51[v52 + 16] = SdkData_e84f30;
      v12 = (__int64)&v51[v52 + 16];
      *(_BYTE*)(v12 + 8) = 17;
      v54 = *(_WORD*)&v51[v52 + 25];
      *(_QWORD*)(v12 + 16) = result;
      *(_WORD*)(v12 + 9) = v54 & 0xF000 | 0x540;
      goto LABEL_33;
    }
  LABEL_83:
    v71 = SdkRoutine_87c7b0(v29);
    return SdkRoutine_847380(v71);
  }
  v14 = *(unsigned __int16*)v9;
  v13 = v9 + 2;
  if (v14 != 30532) {
  LABEL_12:
    v12 = 0;
    goto LABEL_33;
  }
  v15 = a1[2];
  v16 = a1[3];
  v17 = (__int64*)(a1 + 5);
  *a1 = v13;
  v18 = (v16 - v15) >> 3;
  while (v13 == v8 || *v13 != 69) {
    result = SdkRoutine_833e70(a1);
    if (result == 0) {
      return result;
    }
    v20 = (__int64*)a1[3];
    if (v20 == (__int64*)a1[4]) {
      v23 = (__int64*)a1[2];
      v24 = result;
      v25 = (char*)v20 - (char*)v23;
      if (v23 == v17) {
        v19 = SdkRoutine_8578d0(2 * ((char*)v20 - (char*)v23));
        if (v19 == 0) {
        LABEL_82:
          v29 = (unsigned __int8*)SdkRoutine_857810(v19);
          goto LABEL_83;
        }
        if (v20 != v17) {
          v26 = v19;
          SdkRoutine_858a50(v19, v23, v25);
          v19 = v26;
        }
        a1[2] = (unsigned __int8*)v19;
      }
      else {
        v19 = SdkRoutine_859610(a1[2]);
        a1[2] = (unsigned __int8*)v19;
        if (v19 == 0) {
          goto LABEL_82;
        }
      }
      v20 = (__int64*)(v19 + v25);
      v21 = v19 + 8 * (v25 >> 2);
      result = v24;
      a1[4] = (unsigned __int8*)v21;
    }
    v13 = *a1;
    v8 = a1[1];
    *v20 = result;
    a1[3] = (unsigned __int8*)(v20 + 1);
  }
  *a1 = v13 + 1;
  v57 = SdkRoutine_8363a0(a1, v18, a3, a4, a5, a6, a7, a8, v72);
  v58 = a1[614];
  v59 = v57;
  v61 = v60;
  v62 = *((_QWORD*)v58 + 1);
  if ((unsigned __int64)(v62 - 4048) <= 0xFFFFFFFFFFFFF00FLL) {
    v29 = (unsigned __int8*)SdkRoutine_8578d0(4096);
    if (v29 == nullptr) {
      goto LABEL_83;
    }
    v62 = 0;
    *(_QWORD*)v29 = v58;
    *((_QWORD*)v29 + 1) = 0;
    v58 = v29;
    a1[614] = v29;
  }
  *((_QWORD*)v58 + 1) = v62 + 32;
  *(_QWORD*)&v58[v62 + 16] = SdkData_e84fa8;
  v12 = (__int64)&v58[v62 + 16];
  *(_BYTE*)(v12 + 8) = 18;
  v63 = *(_WORD*)&v58[v62 + 25];
  *(_QWORD*)(v12 + 16) = v59;
  *(_QWORD*)(v12 + 24) = v61;
  *(_WORD*)(v12 + 9) = v63 & 0xF000 | 0x540;
LABEL_33:
  v31 = *a1;
  v32 = a1[1];
  if ((unsigned __int64)(v32 - *a1) >= 2 && *(_WORD*)v31 == 30788) {
    v31 += 2;
    *a1 = v31;
    if (v31 == v32) {
      return 0;
    }
  }
  else if (v31 == v32) {
    return 0;
  }
  if (*v31 != 70) {
    return 0;
  }
  *a1 = v31 + 1;
  if (v31 + 1 != v32 && v31[1] == 89) {
    *a1 = v31 + 2;
  }
  result = SdkRoutine_833e70(a1);
  if (result != 0) {
    v39 = (__int64*)(a1 + 5);
    v73 = result;
    v75 = (a1[3] - a1[2]) >> 3;
    v40 = *a1;
    v41 = a1[1];
    if (*a1 != v41) {
      goto LABEL_44;
    }
    do {
    LABEL_50:
      if ((unsigned __int64)(v41 - v40) >= 2) {
        if (*(_WORD*)v40 == 17746) {
          v56 = 1;
          v55 = 2;
          goto LABEL_78;
        }
        if (*(_WORD*)v40 == 17743) {
          v55 = 2;
          v56 = 2;
          goto LABEL_78;
        }
      }
      result = SdkRoutine_833e70(a1);
      if (result == 0) {
        return result;
      }
      v42 = (__int64*)a1[3];
      if (v42 == (__int64*)a1[4]) {
        v44 = (__int64*)a1[2];
        v45 = result;
        v46 = (char*)v42 - (char*)v44;
        if (v44 == v39) {
          v19 = SdkRoutine_8578d0(2 * ((char*)v42 - (char*)v44));
          if (v19 == 0) {
            goto LABEL_82;
          }
          if (v42 != v39) {
            v47 = v19;
            SdkRoutine_858a50(v19, v44, v46);
            v19 = v47;
          }
          a1[2] = (unsigned __int8*)v19;
        }
        else {
          v19 = SdkRoutine_859610(a1[2]);
          a1[2] = (unsigned __int8*)v19;
          if (v19 == 0) {
            goto LABEL_82;
          }
        }
        v42 = (__int64*)(v19 + v46);
        v43 = v19 + 8 * (v46 >> 2);
        result = v45;
        a1[4] = (unsigned __int8*)v43;
      }
      *v42 = result;
      a1[3] = (unsigned __int8*)(v42 + 1);
      v40 = *a1;
      v41 = a1[1];
    } while (*a1 == v41);
  LABEL_44:
    while (*v40 != 69) {
      if (*v40 == 118) {
        *a1 = v40 + 1;
        v40 = *a1;
        v41 = a1[1];
        if (*a1 != v41) {
          continue;
        }
      }
      goto LABEL_50;
    }
    v55 = 1;
    v56 = 0;
  LABEL_78:
    *a1 = &v40[v55];
    v64 = SdkRoutine_8363a0(a1, v75, v33, v34, v35, v36, v37, v38, v73);
    v65 = a1[614];
    v66 = v64;
    v68 = v67;
    v69 = *((_QWORD*)v65 + 1);
    if ((unsigned __int64)(v69 - 4016) > 0xFFFFFFFFFFFFF00FLL) {
      goto LABEL_81;
    }
    v29 = (unsigned __int8*)SdkRoutine_8578d0(4096);
    if (v29 != nullptr) {
      v69 = 0;
      *(_QWORD*)v29 = v65;
      *((_QWORD*)v29 + 1) = 0;
      v65 = v29;
      a1[614] = v29;
    LABEL_81:
      *((_QWORD*)v65 + 1) = v69 + 64;
      *(_QWORD*)&v65[v69 + 16] = SdkData_e85020;
      result = (__int64)&v65[v69 + 16];
      *(_BYTE*)(result + 8) = 16;
      v70 = *(_WORD*)&v65[v69 + 25];
      *(_QWORD*)(result + 32) = v68;
      *(_DWORD*)(result + 40) = v11;
      *(_BYTE*)(result + 44) = v56;
      *(_QWORD*)(result + 48) = v12;
      *(_WORD*)(result + 9) = v70 & 0xF000 | 0x100;
      *(_QWORD*)(result + 16) = v74;
      *(_QWORD*)(result + 24) = v66;
      return result;
    }
    goto LABEL_83;
  }
  return result;
}

__int64 SdkHr_8481b0(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(a2 + 16);
  v3 = *(_QWORD*)(a2 + 24);
  if (v2 + 8 <= v3) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v6 = *(_QWORD*)(a2 + 8);
    v7 = v2 + 1000;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v6);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_23;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  *(_QWORD*)(result + v2) = 0x7470656378656F6ELL;
  v11 = *(_QWORD*)(a2 + 16);
  v12 = *(_QWORD*)(a2 + 24);
  v13 = v11 + 8;
  ++*(_DWORD*)(a2 + 40);
  v14 = v11 + 9;
  *(_QWORD*)(a2 + 16) = v11 + 8;
  if (v11 + 9 <= v12) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v15 = *(_QWORD*)(a2 + 8);
    if (2 * v12 <= v11 + 1001) {
      v16 = v11 + 1001;
    }
    else {
      v16 = 2 * v12;
    }
    *(_QWORD*)(a2 + 24) = v16;
    result = SdkRoutine_859610(v15);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_23;
    }
    v13 = *(_QWORD*)(a2 + 16);
    v14 = v13 + 1;
  }
  *(_QWORD*)(a2 + 16) = v14;
  *(_BYTE*)(result + v13) = 40;
  SdkRoutine_83db20(*(_QWORD*)(a1 + 16), a2, 0x13u, 0);
  --*(_DWORD*)(a2 + 40);
  v17 = *(_QWORD*)(a2 + 16);
  v18 = *(_QWORD*)(a2 + 24);
  v19 = v17 + 1;
  if (v17 + 1 <= v18) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_22;
  }
  v20 = *(_QWORD*)(a2 + 8);
  v21 = v17 + 993;
  if (2 * v18 <= v21) {
    v22 = v21;
  }
  else {
    v22 = 2 * v18;
  }
  *(_QWORD*)(a2 + 24) = v22;
  result = SdkRoutine_859610(v20);
  *(_QWORD*)(a2 + 8) = result;
  if (result != 0) {
    v17 = *(_QWORD*)(a2 + 16);
    v19 = v17 + 1;
  LABEL_22:
    *(_QWORD*)(a2 + 16) = v19;
    *(_BYTE*)(result + v17) = 41;
    return result;
  }
LABEL_23:
  v23 = SdkRoutine_857810(result);
  return SdkRoutine_848300(v23);
}

__int64 SdkHr_848300(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;

  v2 = *(_QWORD*)(a2 + 16);
  v3 = *(_QWORD*)(a2 + 24);
  if (v2 + 5 <= v3) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v6 = *(_QWORD*)(a2 + 8);
    v7 = v2 + 997;
    v8 = 2 * v3;
    if (v8 <= v7) {
      v9 = v7;
    }
    else {
      v9 = v8;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v6);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_23;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  v11 = result + v2;
  *(_BYTE*)(v11 + 4) = 119;
  *(_DWORD*)v11 = 1869768820;
  v12 = *(_QWORD*)(a2 + 16);
  v13 = *(_QWORD*)(a2 + 24);
  v14 = v12 + 5;
  ++*(_DWORD*)(a2 + 40);
  v15 = v12 + 6;
  *(_QWORD*)(a2 + 16) = v12 + 5;
  if (v12 + 6 <= v13) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v16 = *(_QWORD*)(a2 + 8);
    if (2 * v13 <= v12 + 998) {
      v17 = v12 + 998;
    }
    else {
      v17 = 2 * v13;
    }
    *(_QWORD*)(a2 + 24) = v17;
    result = SdkRoutine_859610(v16);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_23;
    }
    v14 = *(_QWORD*)(a2 + 16);
    v15 = v14 + 1;
  }
  *(_QWORD*)(a2 + 16) = v15;
  *(_BYTE*)(result + v14) = 40;
  SdkRoutine_83e420(a1 + 16, (_QWORD*)a2);
  --*(_DWORD*)(a2 + 40);
  v18 = *(_QWORD*)(a2 + 16);
  v19 = *(_QWORD*)(a2 + 24);
  v20 = v18 + 1;
  if (v18 + 1 <= v19) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_22;
  }
  v21 = *(_QWORD*)(a2 + 8);
  v22 = v18 + 993;
  if (2 * v19 <= v22) {
    v23 = v22;
  }
  else {
    v23 = 2 * v19;
  }
  *(_QWORD*)(a2 + 24) = v23;
  result = SdkRoutine_859610(v21);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_23:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v18 = *(_QWORD*)(a2 + 16);
  v20 = v18 + 1;
LABEL_22:
  *(_QWORD*)(a2 + 16) = v20;
  *(_BYTE*)(result + v18) = 41;
  return result;
}

__int64 SdkHr_8484e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;

  ++*(_DWORD*)(a2 + 40);
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  v6 = v4 + 1;
  if (v4 + 1 <= v5) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v7 = *(_QWORD*)(a2 + 8);
    v8 = v4 + 993;
    if (2 * v5 <= v8) {
      v9 = v8;
    }
    else {
      v9 = 2 * v5;
    }
    *(_QWORD*)(a2 + 24) = v9;
    result = SdkRoutine_859610(v7);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_72;
    }
    v4 = *(_QWORD*)(a2 + 16);
    v6 = v4 + 1;
  }
  *(_QWORD*)(a2 + 16) = v6;
  *(_BYTE*)(result + v4) = 40;
  SdkRoutine_83e420(a1 + 24, (_QWORD*)a2);
  --*(_DWORD*)(a2 + 40);
  v11 = *(_QWORD*)(a2 + 16);
  v12 = *(_QWORD*)(a2 + 24);
  v13 = v11 + 1;
  if (v11 + 1 <= v12) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v14 = *(_QWORD*)(a2 + 8);
    v15 = v11 + 993;
    if (2 * v12 <= v15) {
      v16 = v15;
    }
    else {
      v16 = 2 * v12;
    }
    *(_QWORD*)(a2 + 24) = v16;
    result = SdkRoutine_859610(v14);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_72;
    }
    v11 = *(_QWORD*)(a2 + 16);
    v13 = v11 + 1;
  }
  *(_QWORD*)(a2 + 16) = v13;
  *(_BYTE*)(result + v11) = 41;
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(
      a2, *(_QWORD*)(a1 + 16));
  v17 = *(_DWORD*)(a1 + 40);
  if ((v17 & 1) != 0) {
    v18 = *(_QWORD*)(a2 + 16);
    v19 = *(_QWORD*)(a2 + 24);
    if (v18 + 6 <= v19) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v20 = *(_QWORD*)(a2 + 8);
      v21 = v18 + 998;
      v22 = 2 * v19;
      if (v22 <= v21) {
        v23 = v21;
      }
      else {
        v23 = v22;
      }
      *(_QWORD*)(a2 + 24) = v23;
      result = SdkRoutine_859610(v20);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_72;
      }
      v18 = *(_QWORD*)(a2 + 16);
    }
    v24 = result + v18;
    *(_WORD*)(v24 + 4) = 29811;
    *(_DWORD*)v24 = 1852793632;
    *(_QWORD*)(a2 + 16) += 6LL;
    v17 = *(_DWORD*)(a1 + 40);
  }
  if ((v17 & 2) != 0) {
    v25 = *(_QWORD*)(a2 + 16);
    v26 = *(_QWORD*)(a2 + 24);
    if (v25 + 9 <= v26) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v27 = *(_QWORD*)(a2 + 8);
      v28 = v25 + 1001;
      v29 = 2 * v26;
      if (v29 <= v28) {
        v30 = v28;
      }
      else {
        v30 = v29;
      }
      *(_QWORD*)(a2 + 24) = v30;
      result = SdkRoutine_859610(v27);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_72;
      }
      v25 = *(_QWORD*)(a2 + 16);
    }
    v31 = result + v25;
    *(_QWORD*)v31 = *(_QWORD*)" volatile";
    *(_BYTE*)(v31 + 8) = 101;
    *(_QWORD*)(a2 + 16) += 9LL;
    v17 = *(_DWORD*)(a1 + 40);
  }
  if ((v17 & 4) != 0) {
    v32 = *(_QWORD*)(a2 + 16);
    v33 = *(_QWORD*)(a2 + 24);
    if (v32 + 9 <= v33) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v34 = *(_QWORD*)(a2 + 8);
      v35 = v32 + 1001;
      v36 = 2 * v33;
      if (v36 <= v35) {
        v37 = v35;
      }
      else {
        v37 = v36;
      }
      *(_QWORD*)(a2 + 24) = v37;
      result = SdkRoutine_859610(v34);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_72;
      }
      v32 = *(_QWORD*)(a2 + 16);
    }
    v38 = result + v32;
    *(_QWORD*)v38 = *(_QWORD*)" restrict";
    *(_BYTE*)(v38 + 8) = 116;
    *(_QWORD*)(a2 + 16) += 9LL;
  }
  v39 = *(unsigned __int8*)(a1 + 44);
  if (v39 == 2) {
    v46 = *(_QWORD*)(a2 + 16);
    v47 = *(_QWORD*)(a2 + 24);
    if (v46 + 3 <= v47) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v48 = *(_QWORD*)(a2 + 8);
      v49 = v46 + 995;
      v50 = 2 * v47;
      if (v50 <= v49) {
        v51 = v49;
      }
      else {
        v51 = v50;
      }
      *(_QWORD*)(a2 + 24) = v51;
      result = SdkRoutine_859610(v48);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_72;
      }
      v46 = *(_QWORD*)(a2 + 16);
    }
    v53 = result + v46;
    *(_BYTE*)(v53 + 2) = 38;
    *(_WORD*)v53 = 9760;
    v52 = 3;
  }
  else {
    if (v39 != 1) {
      goto LABEL_61;
    }
    v40 = *(_QWORD*)(a2 + 16);
    v41 = *(_QWORD*)(a2 + 24);
    if (v40 + 2 <= v41) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v42 = *(_QWORD*)(a2 + 8);
      v43 = v40 + 994;
      v44 = 2 * v41;
      if (v44 <= v43) {
        v45 = v43;
      }
      else {
        v45 = v44;
      }
      *(_QWORD*)(a2 + 24) = v45;
      result = SdkRoutine_859610(v42);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_72;
      }
      v40 = *(_QWORD*)(a2 + 16);
    }
    *(_WORD*)(result + v40) = 9760;
    v52 = 2;
  }
  *(_QWORD*)(a2 + 16) += v52;
LABEL_61:
  if (*(_QWORD*)(a1 + 48) == 0) {
    return result;
  }
  v54 = *(_QWORD*)(a2 + 16);
  v55 = *(_QWORD*)(a2 + 24);
  v56 = v54 + 1;
  if (v54 + 1 > v55) {
    v57 = *(_QWORD*)(a2 + 8);
    v58 = v54 + 993;
    if (2 * v55 <= v58) {
      v59 = v58;
    }
    else {
      v59 = 2 * v55;
    }
    *(_QWORD*)(a2 + 24) = v59;
    result = SdkRoutine_859610(v57);
    *(_QWORD*)(a2 + 8) = result;
    if (result != 0) {
      v54 = *(_QWORD*)(a2 + 16);
      v56 = v54 + 1;
      goto LABEL_69;
    }
  LABEL_72:
    SdkRoutine_857810(result);
    __udf(0);
  }
  result = *(_QWORD*)(a2 + 8);
LABEL_69:
  *(_QWORD*)(a2 + 16) = v56;
  *(_BYTE*)(result + v54) = 32;
  v60 = *(_QWORD*)(a1 + 48);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 16LL))(a2, v60);
  if ((*(_WORD*)(v60 + 9) & 0xC0) != 0x40) {
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, v60);
  }
  return result;
}

__int64 SdkHr_849020(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _DWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;

  v2 = *(_QWORD*)(a2 + 16);
  if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    v5 = *(_QWORD*)(a2 + 24);
    if (v2 + 9 <= v5) {
      result = *(_QWORD*)(a2 + 8);
    }
    else {
      v6 = *(_QWORD*)(a2 + 8);
      v7 = v2 + 1001;
      v8 = 2 * v5;
      if (v8 <= v7) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      *(_QWORD*)(a2 + 24) = v9;
      result = SdkRoutine_859610(v6);
      *(_QWORD*)(a2 + 8) = result;
      if (result == 0) {
        goto LABEL_32;
      }
      v2 = *(_QWORD*)(a2 + 16);
    }
    v11 = result + v2;
    *(_QWORD*)v11 = *(_QWORD*)"unsigned ";
    *(_BYTE*)(v11 + 8) = 32;
    v2 = *(_QWORD*)(a2 + 16) + 9LL;
    *(_QWORD*)(a2 + 16) = v2;
  }
  v12 = *(_QWORD*)(a2 + 24);
  if (v2 + 7 <= v12) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v13 = *(_QWORD*)(a2 + 8);
    v14 = v2 + 999;
    v15 = 2 * v12;
    if (v15 <= v14) {
      v16 = v14;
    }
    else {
      v16 = v15;
    }
    *(_QWORD*)(a2 + 24) = v16;
    result = SdkRoutine_859610(v13);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_32;
    }
    v2 = *(_QWORD*)(a2 + 16);
  }
  v17 = (_DWORD*)(result + v2);
  *(_DWORD*)((char*)v17 + 3) = 1953384820;
  *v17 = 1953055327;
  v18 = *(_QWORD*)(a2 + 16);
  v19 = *(_QWORD*)(a2 + 24);
  v20 = v18 + 7;
  ++*(_DWORD*)(a2 + 40);
  v21 = v18 + 8;
  *(_QWORD*)(a2 + 16) = v18 + 7;
  if (v18 + 8 <= v19) {
    result = *(_QWORD*)(a2 + 8);
  }
  else {
    v22 = *(_QWORD*)(a2 + 8);
    if (2 * v19 <= v18 + 1000) {
      v23 = v18 + 1000;
    }
    else {
      v23 = 2 * v19;
    }
    *(_QWORD*)(a2 + 24) = v23;
    result = SdkRoutine_859610(v22);
    *(_QWORD*)(a2 + 8) = result;
    if (result == 0) {
      goto LABEL_32;
    }
    v20 = *(_QWORD*)(a2 + 16);
    v21 = v20 + 1;
  }
  *(_QWORD*)(a2 + 16) = v21;
  *(_BYTE*)(result + v20) = 40;
  SdkRoutine_83db20(*(_QWORD*)(a1 + 16), a2, 0x13u, 0);
  --*(_DWORD*)(a2 + 40);
  v24 = *(_QWORD*)(a2 + 16);
  v25 = *(_QWORD*)(a2 + 24);
  v26 = v24 + 1;
  if (v24 + 1 <= v25) {
    result = *(_QWORD*)(a2 + 8);
    goto LABEL_31;
  }
  v27 = *(_QWORD*)(a2 + 8);
  v28 = v24 + 993;
  if (2 * v25 <= v28) {
    v29 = v28;
  }
  else {
    v29 = 2 * v25;
  }
  *(_QWORD*)(a2 + 24) = v29;
  result = SdkRoutine_859610(v27);
  *(_QWORD*)(a2 + 8) = result;
  if (result == 0) {
  LABEL_32:
    SdkRoutine_857810(result);
    __udf(0);
  }
  v24 = *(_QWORD*)(a2 + 16);
  v26 = v24 + 1;
LABEL_31:
  *(_QWORD*)(a2 + 16) = v26;
  *(_BYTE*)(result + v24) = 41;
  return result;
}

#pragma GCC visibility pop
