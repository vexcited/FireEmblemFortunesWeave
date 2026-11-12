#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_103b100;

extern _UNKNOWN SdkData_103b108;

extern _UNKNOWN SdkData_103f13c;

extern __int64 SdkData_103f140;

extern __int64 SdkData_103f148;

extern __int64 SdkData_103f1d0;

extern _UNKNOWN SdkData_103f1e8;

extern __int64 SdkData_103f230;

extern _UNKNOWN SdkData_103f238;

extern _UNKNOWN SdkData_e72c20;

extern _UNKNOWN SdkData_e72c98;

extern _UNKNOWN SdkData_e72d18;

extern _UNKNOWN SdkData_e72e28;

extern _UNKNOWN SdkData_e72eb0;

extern __int64 (*SdkData_e738f0[])();

extern __int64 (*SdkData_e73958[])();

extern __int64 (*SdkData_e73b30[])();

extern __int64 (*SdkData_e73b40[])();

extern __int64 (*SdkData_e898b8)();

extern _DWORD* SdkData_e898f8;

extern _UNKNOWN SdkData_ea43d0;

extern _UNKNOWN SdkData_ea4490;

void __attribute__((noreturn)) SdkRoutine_0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_2d0();

__int64 SdkRoutine_5f1580(_QWORD, _QWORD);

__int64 SdkRoutine_5f47a0(_QWORD, _QWORD);

__int64 SdkRoutine_5f93e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_5f9b90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD);

__int64 SdkRoutine_5fa020(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);

__int64 SdkRoutine_5fa220(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);

__int64 SdkRoutine_5feb50();

__int64 SdkRoutine_602790(_QWORD);

__int64 SdkRoutine_602840(_QWORD);

__int64 SdkRoutine_602d30(_QWORD);

__int64 SdkRoutine_617a60(void);

__int64 SdkRoutine_617a70(_QWORD);

__int64 SdkRoutine_619420(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_624b80(void);

__int64 SdkRoutine_628f90(_QWORD*);

__int64 SdkRoutine_629c30(_QWORD*, __int64);

__int64 SdkRoutine_629c70(void);

__int64 SdkRoutine_629ca0(_QWORD);

__int64 SdkRoutine_62ada0(void);

__int64 SdkRoutine_62b1c0(void);

__int64 SdkRoutine_62b7f0(void);

__int64 SdkRoutine_856170(_QWORD);

__int64 SdkRoutine_858d40(_QWORD);

__int64 SdkRoutine_858d50(_QWORD);

__int64 SdkRoutine_858db0(_QWORD);

__int64 SdkRoutine_859020(_QWORD);

__int64 SdkRoutine_859030(_QWORD);

__int64 SdkRoutine_859070(_QWORD);

__int64 SdkRoutine_859090(void);

__int64 SdkRoutine_859ab0(_QWORD);

__int64 SdkRoutine_859ac0(_QWORD);

__int64 SdkRoutine_859ad0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859ae0(_QWORD);

__int64 SdkRoutine_859af0(_QWORD, _QWORD);

__int64 SdkRoutine_85adb0(_QWORD);

__int64 SdkRoutine_85c940(_QWORD, _QWORD);

__int64 SdkRoutine_85d490(void);

__int64 SdkRoutine_85d9b0(_QWORD);

__int64 SdkRoutine_85d9c0(_QWORD);

__int64 SdkRoutine_85dbb0(_QWORD);

__int64 SdkRoutine_85dbd0(void);

__int64 SdkRoutine_85dcb0(void);

__int64 SdkRoutine_85dd90(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_85ddc0(_QWORD);

__int64 SdkRoutine_85ddd0(_QWORD);

__int64 SdkRoutine_86a740(void);

__int64 SdkRoutine_86a750(_QWORD);

__int64 SdkRoutine_86a9b0(_QWORD);

__int64 SdkRoutine_86a9d0(_QWORD, _QWORD);

__int64 SdkRoutine_875b00(_QWORD);

__int64 SdkRoutine_875b30(_QWORD);

__int64 SdkRoutine_875bf0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_875c10(void);

__int64 SdkRoutine_875e80(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_875f80(_QWORD);

__int64 SdkRoutine_875f90(_QWORD, _QWORD);

__int64 SdkRoutine_875fa0(_QWORD);

__int64 SdkRoutine_875fb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_875fc0(_QWORD);

__int64 SdkRoutine_ce990();

__int64 SdkHr_5f3f60(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v21;

  if (a2 <= 0x10) {
    return SdkRoutine_5f1580(a1, a3);
  }
  v4 = 32;
  if (a2 > 0x20) {
    v4 = a2;
  }
  if ((v4 & (v4 - 1)) != 0) {
    v5 = 32;
    do {
      v6 = v5;
      v5 *= 2;
    } while (v6 < v4);
    if (a3 < -128LL - v6) {
      goto LABEL_9;
    }
    return 0;
  }
  v6 = v4;
  if (a3 >= -128LL - v4) {
    return 0;
  }
LABEL_9:
  if (a3 >= 0x17) {
    v8 = (a3 + 23) & 0xFFFFFFFFFFFFFFF0LL;
  }
  else {
    v8 = 32;
  }
  result = SdkRoutine_5f1580(a1, v8 + v6 + 24);
  if (result != 0) {
    v9 = (char*)(result - 16);
    v10 = a1;
    if ((*(_BYTE*)(a1 + 880) & 2) != 0) {
      v11 = result;
      SdkRoutine_85d9b0(a1 + 888);
      result = v11;
      v10 = a1;
    }
    if (((v6 - 1) & result) != 0) {
      v12 = ((result + v6 - 1) & -(__int64)v6) - 16;
      if ((unsigned __int64)(v12 - (_QWORD)v9) <= 0x1F) {
        v13 = v6;
      }
      else {
        v13 = 0;
      }
      v14 = (char*)(v12 + v13);
      v15 = *(_QWORD*)(result - 8);
      v16 = v14 - v9;
      v17 = (v15 & 0xFFFFFFFFFFFFFFF8LL) - (v14 - v9);
      if ((v15 & 3) != 0) {
        *((_QWORD*)v14 + 1) = v17 | *((_QWORD*)v14 + 1) & 1LL | 2;
        *(_QWORD*)&v9[(v15 & 0xFFFFFFFFFFFFFFF8LL) + 8] |= 1uLL;
        *(_QWORD*)(result - 8) = v16 | *(_QWORD*)(result - 8) & 1LL | 2;
        *((_QWORD*)v14 + 1) |= 1uLL;
        SdkRoutine_5f47a0(a1, v9);
        v10 = a1;
      }
      else {
        *(_QWORD*)v14 = *(_QWORD*)v9 + v16;
        *((_QWORD*)v14 + 1) = v17;
      }
    }
    else {
      v14 = v9;
    }
    v18 = *((_QWORD*)v14 + 1);
    v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
    if ((v18 & 3) != 0 && v19 > v8 + 32) {
      *((_QWORD*)v14 + 1) = v8 | *((_QWORD*)v14 + 1) & 1LL | 2;
      *(_QWORD*)&v14[v8 + 8] = (v19 - v8) | 3;
      *(_QWORD*)&v14[v19 + 8] |= 1uLL;
      SdkRoutine_5f47a0(a1, &v14[v8]);
      v10 = a1;
      result = (__int64)(v14 + 16);
      if ((*(_BYTE*)(a1 + 880) & 2) != 0) {
      LABEL_33:
        v21 = result;
        SdkRoutine_85d9c0(v10 + 888);
        return v21;
      }
    }
    else {
      result = (__int64)(v14 + 16);
      if ((*(_BYTE*)(v10 + 880) & 2) != 0) {
        goto LABEL_33;
      }
    }
  }
  return result;
}

__int64 SdkHr_5f8fd0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v3 = 0;
  if ((unsigned int)SdkRoutine_85c940(&v3, a1) != 0) {
    v2 = SdkRoutine_85dcb0();
    SdkRoutine_856170(v2);
    __udf(0);
  }
  return v3;
}

__int64 SdkHr_5f91d0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = SdkRoutine_859ab0(a1 + 24);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v3 = *(unsigned int*)(a1 + 12);
      v4 = (_QWORD*)SdkRoutine_859ac0(result);
      *v4 = 2;
      SdkRoutine_859ad0(v3, v4, 256);
      SdkRoutine_859ae0(v3);
    }
    SdkRoutine_858d40(&SdkData_103b108);
    SdkRoutine_859af0(SdkData_103b100, a1);
    return SdkRoutine_858d50(&SdkData_103b108);
  }
  return result;
}

__int64 SdkHr_5f9260(__int64 a1, _QWORD* a2, __int64 a3, __int64 a4)
{
  return SdkRoutine_5f93e0(a1 + 8, *a2, a2[1], a3, a4, 0);
}

__int64 SdkHr_5f9280(__int64 a1, unsigned int a2, unsigned int a3, _QWORD* a4,
                     _QWORD* a5, __int64 a6)
{
  return SdkRoutine_5f9b90(a1 + 8, a2, a3, *a4, a4[1], *a5, a5[1], a6, 1);
}

__int64 SdkHr_5f9310(__int64 a1, unsigned int a2, unsigned int a3, _QWORD* a4,
                     _QWORD* a5, _QWORD* a6, __int64 a7, __int64 a8)
{
  return SdkRoutine_5fa020(a1 + 8, a2, a3, *a4, a4[1], *a5, a5[1], a8, *a6,
                           a6[1], a7, 11);
}

__int64 SdkHr_5f9370(__int64 a1, unsigned int a2, unsigned int a3, _QWORD* a4,
                     _QWORD* a5, _QWORD* a6, __int64 a7, __int64 a8)
{
  return SdkRoutine_5fa220(a1 + 8, a2, a3, *a4, a4[1], *a5, a5[1], a8, *a6,
                           a6[1], a7, 12);
}

__int64 SdkHr_5f9580(unsigned __int8** a1, int a2, __int64 a3, __int64 a4,
                     unsigned __int64 a5, __int64 a6)
{
  unsigned __int64* v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  int v16;
  unsigned __int8* v17;
  int v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  bool v34;
  __int64 v35;
  unsigned __int8* v36;
  unsigned __int8* v37;
  int v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  int v41;
  unsigned __int8* v42;
  unsigned __int8* v43;
  int v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int8* v47;
  int v48;
  int v49;
  char* v50;
  char* v51;
  __int64 v52;
  __int64 i;
  unsigned __int8* v54;
  __int64 v55;
  unsigned __int64* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  int v59;
  int v60;
  unsigned __int8* v61;
  unsigned __int8* v62;
  unsigned __int8* v63;
  unsigned __int8* v64;
  unsigned __int64 v65;
  unsigned __int8* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int8* v71;
  unsigned __int8* v72;
  unsigned __int64 v73;
  unsigned __int8* v74;
  unsigned __int8* v75;
  unsigned __int8* v76;
  unsigned __int8* v77;
  unsigned __int8* v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64* v82;
  int v83;
  unsigned __int8* v84;
  unsigned __int64 v85;
  unsigned __int64 v86;
  int v87;
  int v88;
  unsigned __int8* v89;
  int v90;
  _QWORD v92[4];

  if (a2 < 1) {
    return 0;
  }
  v6 = (unsigned __int64*)(a3 + 8);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  memset(v92, 0, sizeof(v92));
  do {
    v23 = *(_DWORD*)(a4 + 4 * v7);
    if ((v23 & 4) != 0) {
      if ((v23 & 1) != 0) {
        v14 = *(v6 - 1);
        v15 = *v6;
        if ((v23 & 0x40) != 0) {
          v16 = 1;
        }
        else {
          v16 = ((char)v23 >> 7) & 3;
        }
        v17 = a1[1];
        v18 = (*a1)[20];
        v19 = (v14 >> 4) & 0xF0000000 | (v14 >> 34) & 0x1C | v16;
        v20 = 3 * v9;
        v21 = v15 >> 8;
        ++v9;
      }
      else {
        if ((v23 & 2) == 0) {
          goto LABEL_70;
        }
        v14 = *(v6 - 1);
        v15 = *v6;
        if ((v23 & 0x40) != 0) {
          v31 = 1;
        }
        else {
          v31 = ((char)v23 >> 7) & 3;
        }
        v17 = a1[1];
        v18 = (*a1)[21];
        v19 = (v14 >> 4) & 0xF0000000 | (v14 >> 34) & 0x1C | v31;
        v20 = 3 * v10;
        v21 = v15 >> 8;
        ++v10;
      }
      v22 = v20 + v18;
      *(_DWORD*)&v17[4 * v22] = v15;
      *(_DWORD*)&v17[4 * v22 + 4] = v14;
      *(_DWORD*)&v17[4 * v22 + 8] = v19 | v21 & 0xF000000;
    }
    else if ((v23 & 8) != 0) {
      v32 = *v6;
      v33 = (*v6 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      v34 = a5 >= v33;
      a5 -= v33;
      if (!v34) {
        return 72203;
      }
      if ((v23 & 1) != 0) {
        v46 = *(v6 - 1);
        v47 = a1[1];
        v48 = v11 & 0xE3F | ((_DWORD)v32 << 16) | (v46 >> 20) & 0xF000 |
              (v46 >> 30) & 0x1C0;
        v49 = (*a1)[19] + 2 * v11++;
        *(_DWORD*)&v47[4 * v49] = v48;
        *(_DWORD*)&v47[4 * v49 + 4] = v46;
      }
      else {
        if ((v23 & 2) == 0) {
        LABEL_70:
          SdkRoutine_856170(a1);
          __udf(0);
        }
        v35 = *(v6 - 1);
        v36 = *a1;
        v37 = a1[1];
        v38 = (*a1)[24] + 2 * v12++;
        *(_DWORD*)&v37[4 * v38] = v35;
        *(_DWORD*)&v37[4 * v38 + 4] =
            (v35 & 0xFFFF00000000LL | (v32 << 48)) >> 32;
        if ((v23 & 0x10) == 0) {
          if (v32 >> 16 != 0) {
            return 523;
          }
          *(_WORD*)&v37[4 * v36[23] + 2 * v13++ + a6] = v32;
        }
      }
    }
    else {
      if ((v23 & 0x20) == 0) {
        goto LABEL_70;
      }
      if ((v23 & 1) != 0) {
        v39 = *v6;
        if (*v6 >> 16 != 0) {
          v40 = *(v6 - 1);
          if ((v23 & 0x40) != 0) {
            v41 = 1;
          }
          else {
            v41 = ((char)v23 >> 7) & 3;
          }
          v42 = *a1;
          v43 = a1[1];
          v44 = 3 * v9 + (*a1)[20];
          *(_DWORD*)&v43[4 * v44] = v39;
          *(_DWORD*)&v43[4 * v44 + 4] = v40;
          *(_DWORD*)&v43[4 * v44 + 8] = (v39 >> 8) & 0xF000000 |
                                        (v40 >> 4) & 0xF0000000 | v41 |
                                        (v40 >> 34) & 0x1C;
          v45 = v42[19] + 2 * v11;
          *(_DWORD*)&v43[4 * v45] = v11 & 0xE3F;
          *(_DWORD*)&v43[4 * v45 + 4] = 0;
        }
        else {
          v50 = (char*)v92 + 4 * v8++;
          *v50 = v7;
          v50[1] = v9;
          v50[2] = v11;
        }
        ++v9;
        ++v11;
      }
      else {
        if ((v23 & 2) == 0) {
          goto LABEL_70;
        }
        v24 = *v6;
        if (*v6 >> 16 != 0) {
          v25 = *a1;
          v26 = a1[1];
          v27 = *(v6 - 1);
          v28 = ((char)v23 >> 7) & 3;
          if ((v23 & 0x40) != 0) {
            v28 = 1;
          }
          v29 = 3 * v10 + v25[21];
          *(_DWORD*)&v26[4 * v29] = v24;
          *(_DWORD*)&v26[4 * v29 + 4] = v27;
          *(_DWORD*)&v26[4 * v29 + 8] = (v24 >> 8) & 0xF000000 |
                                        (v27 >> 4) & 0xF0000000 | v28 |
                                        (v27 >> 34) & 0x1C;
          v30 = v25[24] + 2 * v12;
          *(_DWORD*)&v26[4 * v30] = 0;
          *(_DWORD*)&v26[4 * v30 + 4] = 0;
        }
        else {
          v51 = (char*)v92 + 4 * v8++;
          *v51 = v7;
          v51[1] = v10;
          v51[2] = v12;
          v51[3] = v13;
        }
        ++v10;
        ++v12;
        v13 += (v23 & 0x10) == 0;
      }
    }
    ++v7;
    v6 += 2;
  } while (a2 != v7);
  if (v8 < 1) {
    return 0;
  }
  v52 = (unsigned int)v8;
  for (i = 4LL * (unsigned int)v8 - 4;; i -= 4) {
    if ((_DWORD)v52 == 1) {
      v54 = (unsigned __int8*)v92;
    }
    else {
      v69 = LOBYTE(v92[0]);
      v54 = (unsigned __int8*)v92;
      v70 = i;
      v71 = (unsigned __int8*)v92 + 4;
      do {
        if (*(_QWORD*)(a3 + 16LL * *v71 + 8) != *(_QWORD*)(a3 + 16 * v69 + 8)) {
          v69 = *v71;
          v54 = v71;
        }
        v71 += 4;
        v70 -= 4;
      } while (v70 != 0);
    }
    v55 = *v54;
    v56 = (unsigned __int64*)(a3 + 16 * v55);
    v57 = v56[1];
    v58 = (v57 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v34 = a5 >= v58;
    a5 -= v58;
    if (!v34) {
      break;
    }
    v59 = *(_DWORD*)(a4 + 4 * v55);
    if ((v59 & 0x40) != 0) {
      v60 = 1;
    }
    else {
      v60 = ((char)v59 >> 7) & 3;
    }
    v62 = *a1;
    v61 = a1[1];
    v63 = &v61[12 * v54[1]];
    if ((v59 & 1) != 0) {
      v72 = &v63[4 * v62[20]];
      *(_QWORD*)v72 = 0;
      *((_DWORD*)v72 + 2) = v60;
      v73 = *v56;
      LODWORD(v72) = v54[2];
      v74 = &v61[8 * (_DWORD)v72 + 4 * v62[19]];
      *(_DWORD*)v74 = (v73 >> 20) & 0xF000 | (unsigned __int8)v72 & 0x3F |
                      (v73 >> 30) & 0x1C0 | ((_DWORD)v57 << 16);
      *((_DWORD*)v74 + 1) = v73;
      --v52;
      v67 = (v54 - (unsigned __int8*)v92) >> 2;
      v68 = (unsigned int)v52;
      if (v67 != (unsigned int)v52) {
      LABEL_62:
        *((_DWORD*)v92 + v67) = *((_DWORD*)v92 + v68);
      }
    }
    else {
      v64 = &v63[4 * v62[21]];
      *(_QWORD*)v64 = 0;
      *((_DWORD*)v64 + 2) = v60;
      v65 = *v56;
      v66 = &v61[8 * v54[2] + 4 * v62[24]];
      *(_DWORD*)v66 = v65;
      *((_DWORD*)v66 + 1) = (v65 & 0xFFFF00000000LL | (v57 << 48)) >> 32;
      if ((v59 & 0x10) != 0) {
        --v52;
        v67 = (v54 - (unsigned __int8*)v92) >> 2;
        v68 = (unsigned int)v52;
        if (v67 != (unsigned int)v52) {
          goto LABEL_62;
        }
      }
      else {
        *(_WORD*)&v61[4 * v62[23] + 2 * v54[3] + a6] = v57;
        --v52;
        v67 = (v54 - (unsigned __int8*)v92) >> 2;
        v68 = (unsigned int)v52;
        if (v67 != (unsigned int)v52) {
          goto LABEL_62;
        }
      }
    }
    if ((_DWORD)v68 == 0) {
      return 0;
    }
  }
  v75 = *a1;
  v76 = a1[1];
  v77 = (unsigned __int8*)v92 + 2;
  do {
    while (1) {
      v81 = *(v77 - 2);
      v82 = (unsigned __int64*)(a3 + 16 * v81);
      v83 = *(_DWORD*)(a4 + 4 * v81);
      v84 = &v76[12 * *(v77 - 1)];
      v85 = *v82;
      v86 = v82[1];
      v87 = ((char)v83 >> 7) & 3;
      if ((v83 & 0x40) != 0) {
        v87 = 1;
      }
      v88 = (v85 >> 4) & 0xF0000000 | v87 | (v85 >> 34) & 0x1C |
            (v86 >> 8) & 0xF000000;
      if ((v83 & 1) != 0) {
        break;
      }
      v78 = &v84[4 * v75[21]];
      *(_DWORD*)v78 = v86;
      *((_DWORD*)v78 + 1) = v85;
      v79 = *v77;
      v77 += 4;
      v80 = v75[24];
      *((_DWORD*)v78 + 2) = v88;
      *(_QWORD*)&v76[8 * v79 + 4 * v80] = 0;
      if (--v52 == 0) {
        return 0;
      }
    }
    v89 = &v84[4 * v75[20]];
    *(_DWORD*)v89 = v86;
    *((_DWORD*)v89 + 1) = v85;
    *((_DWORD*)v89 + 2) = v88;
    v90 = *v77;
    v77 += 4;
    *(_QWORD*)&v76[8 * v90 + 4 * v75[19]] = v90 & 0x3F;
    --v52;
  } while (v52 != 0);
  return 0;
}

__int64 SdkHr_5fa470()
{
  SdkData_103f140 = 0;
  SdkRoutine_2d0();
  SdkData_103f148 = 0;
  return SdkRoutine_2d0();
}

__int64 SdkHr_5fa7a0(__int64 a1, __int64 a2)
{
  __int64 result;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  char v8;
  _QWORD v9[8];
  int v10;
  int v11;

  result = SdkRoutine_875bf0(&SdkData_103f13c, 0, 1);
  if ((_DWORD)result == 0) {
    v11 = 0;
    memset(v9, 0, sizeof(v9));
    SdkRoutine_85dd90(v9, a1, a2, 0);
    v7 = SdkRoutine_85ddc0(v9);
    v8 = 1;
    v5 = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, __int64, unsigned int*, _QWORD,
                                int*))(*(_QWORD*)SdkData_103f140 + 72LL))(
                                (void*)SdkData_103f140, SdkData_103f140, &v7,
                                (unsigned int)a2, &v11));
    v10 = (int)v5;
    if ((_DWORD)v5 != 0) {
      v5 = (_QWORD*)SdkRoutine_858db0(&v10);
    }
    else {
      if (v8 == 1) {
        v5 = (_QWORD*)SdkRoutine_85adb0(v7);
      }
      if (v11 != 4096) {
        return SdkRoutine_85ddd0(v9);
      }
    }
    v6 = SdkRoutine_85dbb0(v5);
    if ((int)v6 >= 1) {
      v6 = SdkRoutine_85dbd0();
    }
    SdkRoutine_856170(v6);
    __udf(0);
  }
  return result;
}

__int64 SdkHr_5fb8a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  void (*v4)(_QWORD);

  result = ((__int64 (*)(void))SdkRoutine_859070)();
  if (result != 0) {
    while (1) {
      v3 = SdkRoutine_859090();
      SdkRoutine_85d490();
      v4 = *(void (**)(_QWORD))(v3 + 136);
      if (v4 == nullptr) {
        break;
      }
      v4(*(_QWORD*)(v3 + 120));
      result = SdkRoutine_859070(a1);
      if (result == 0) {
        return result;
      }
    }
    SdkRoutine_859020(v3 + 48);
    return SdkRoutine_859030(v3 + 48);
  }
  return result;
}

__int64 SdkHr_5fe4d0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v6;
  unsigned __int8 v7;
  __int64 result;
  __int64 v9;
  unsigned int v10;
  __int64 v11;

  v11 = 0;
  if (SdkData_103f1d0 != 0) {
    goto LABEL_5;
  }
  v6 = SdkRoutine_85d9b0(&SdkData_ea43d0);
  if (SdkData_103f1d0 == 0) {
    v7 = SdkRoutine_875f80(v6);
    if ((unsigned int)SdkRoutine_875f90(&SdkData_103f1d0, v7) == 0) {
      SdkRoutine_875e80(SdkRoutine_5feb50, &SdkData_103f1e8, 0);
      SdkRoutine_85d9c0(&SdkData_ea43d0);
      if (SdkData_103f1d0 != 0) {
        goto LABEL_5;
      }
      return 8;
    }
  }
  SdkRoutine_85d9c0(&SdkData_ea43d0);
  if (SdkData_103f1d0 == 0) {
    return 8;
  }
LABEL_5:
  result = SdkRoutine_875fa0(&v11);
  v9 = v11;
  if ((_DWORD)result == 0) {
    result = SdkRoutine_875fb0(v11, a1, a2, a3, 0);
    v9 = v11;
  }
  if (v9 != 0) {
    v10 = result;
    SdkRoutine_875fc0(v9);
    return v10;
  }
  return result;
}

__int64 SdkHr_5ffb60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4;
  _QWORD v6[2];

  v6[0] = SdkRoutine_86a740();
  v6[1] = v4;
  if ((SdkRoutine_86a750(v6) & 1) != 0) {
    return 0;
  }
  if (a3 == -1) {
    SdkRoutine_86a9b0(v6);
    return 0;
  }
  else if ((SdkRoutine_86a9d0(v6, 1000000LL * a3) & 1) != 0) {
    return 0;
  }
  else {
    return 5;
  }
}

__int64 SdkHr_6020a0(__int64 a1)
{
  return SdkRoutine_602840(a1 + 71136LL * *(unsigned int*)(a1 + 142288) + 16);
}

__int64 SdkHr_602100(__int64 a1)
{
  return SdkRoutine_602790(a1 + 71136LL * *(unsigned int*)(a1 + 142288) + 16);
}

bool SdkHr_6022f0(__int64 a1)
{
  return (unsigned int)SdkRoutine_602d30(
             a1 + 71136LL * *(unsigned int*)(a1 + 142288) + 16) == 0;
}

__int64 SdkHr_60b640(__int64 a1, unsigned int a2)
{
  int v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;

  v4 = SdkRoutine_875c10();
  v20 = 0;
  v5 = SdkRoutine_858d40(&SdkData_ea4490);
  if (SdkData_103f230 != 0) {
    SdkRoutine_858d50(&SdkData_ea4490);
  }
  else {
    v16 = SdkRoutine_875f80(v5);
    v17 = SdkRoutine_875f90(&SdkData_103f230, v16);
    SdkRoutine_875e80(SdkData_e898b8, &SdkData_103f238, 1);
    SdkRoutine_858d50(&SdkData_ea4490);
    if (v17 != 0) {
      result = v17;
      goto LABEL_18;
    }
  }
  result = SdkRoutine_875fa0(&v20);
  if ((_DWORD)result != 0) {
    goto LABEL_18;
  }
  if (*(_DWORD*)(a1 + 12) != 0) {
    v7 = 0;
    v8 = 0;
    while (1) {
      v9 = *(unsigned int*)(a1 + 16);
      v10 = *(_QWORD*)(a1 + 24) - 24 * v9;
      v11 = v8 >= v9;
      v12 = v8 >= v9 ? *(_QWORD*)(a1 + 24) - 24 * v9 : a1 + 36;
      v13 = v11 ? v10 + v7 : a1 + 36 + v7;
      result = SdkRoutine_875fb0(v20, *(unsigned int*)(v12 + v7),
                                 *(unsigned int*)(v13 + 4), 1000LL * a2, 0);
      if ((_DWORD)result != 0) {
        break;
      }
      if (a2 - 1 <= 0xFFFFFFFD) {
        v14 = SdkRoutine_875c10();
        v15 = a2 + v4;
        v4 = v14;
        a2 = (v15 - v14) & ~((v15 - v14) >> 31);
      }
      ++v8;
      v7 += 24;
      if (v8 >= *(unsigned int*)(a1 + 12)) {
        goto LABEL_21;
      }
    }
  LABEL_18:
    v18 = v20;
    if (v20 == 0) {
      return result;
    }
    goto LABEL_19;
  }
LABEL_21:
  result = 0;
  v18 = v20;
  if (v20 == 0) {
    return result;
  }
LABEL_19:
  v19 = result;
  SdkRoutine_875fc0(v18);
  return v19;
}

__int64 SdkHr_617ae0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = SdkRoutine_617a60();
  if (*(_DWORD*)(v2 + 40) == 0) {
    return 0;
  }
  v3 = v2;
  v4 = SdkRoutine_617a70(a1);
  return SdkRoutine_619420(a1 + 8, *(unsigned int*)(v3 + 40),
                           *(_QWORD*)(v4 + 120), *(unsigned int*)(v4 + 68));
}

__int64 SdkHr_624080(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  _QWORD* v6;

  result = SdkRoutine_624b80();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        v6 = (_QWORD*)(*a1 + 16 * v5);
        *v6 = 0;
        v6[1] = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 SdkHr_628f50(_QWORD* a1)
{
  __int64 result;

  result = SdkRoutine_629c70();
  *a1 = &SdkData_e72c20;
  return result;
}

__int64 SdkHr_628f90(_QWORD* a1)
{
  __int64 result;

  result = SdkRoutine_629c70();
  *a1 = &SdkData_e72c98;
  return result;
}

__int64 SdkHr_628fd0(_QWORD* a1)
{
  __int64 result;

  result = SdkRoutine_629c70();
  a1[3] = 0;
  a1[4] = 0;
  *a1 = &SdkData_e72d18;
  return result;
}

__int64 SdkHr_629030(_QWORD* a1)
{
  __int64 result;

  result = SdkRoutine_629c70();
  *a1 = &SdkData_e72e28;
  return result;
}

__int64 SdkHr_629070(_QWORD* a1)
{
  __int64 result;

  result = SdkRoutine_629c70();
  *a1 = &SdkData_e72eb0;
  return result;
}

__int64 SdkHr_62ad20(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;

  result = SdkRoutine_62ada0();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        *(_BYTE*)(*a1 + v5) = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 SdkHr_62ae40(_QWORD* a1, unsigned __int64 a2)
{
  __int64 result;
  unsigned __int64 v5;
  _QWORD* v6;

  result = SdkRoutine_62b1c0();
  if ((_DWORD)result == 0) {
    v5 = a1[1];
    if (v5 <= a2) {
      for (; v5 < a2; a1[1] = v5) {
        v6 = (_QWORD*)(*a1 + 24 * v5);
        v6[1] = 0;
        v6[2] = 0;
        *v6 = 0;
        v5 = a1[1] + 1LL;
      }
    }
    else {
      a1[1] = a2;
    }
  }
  return result;
}

__int64 SdkHr_62af80(__int64 a1, __int64 a2, unsigned int a3, __int64 a4,
                     _QWORD* a5)
{
  unsigned __int64 add_explicit;
  __int64 v7;
  unsigned int v8;
  _QWORD* v9;
  _DWORD* v10;
  _QWORD* v11;
  _QWORD* v12;

  if (a2 == 0) {
    return 4;
  }
  if (a3 != *(_DWORD*)(a1 + 48) && a3 != *(_DWORD*)(a1 + 52)) {
    return 4;
  }
  if (*(_BYTE*)(a4 + 4) == 1) {
    add_explicit = *(_QWORD*)(a4 + 8);
    v7 = a2;
    v8 = a3;
    v9 = a5;
    v10 = (_DWORD*)a4;
    v11 = (_QWORD*)SdkRoutine_875b00(56);
    if (v11 != nullptr) {
      goto LABEL_9;
    }
    return 6;
  }
  v10 = (_DWORD*)a4;
  v9 = a5;
  v8 = a3;
  v7 = a2;
  add_explicit = atomic_fetch_add_explicit(
      (atomic_ullong* volatile)(a1 + 24),
      (a2 * a3 + 0x1FFFF) & 0xFFFFFFFFFFFE0000LL, memory_order_relaxed);
  v11 = (_QWORD*)SdkRoutine_875b00(56);
  if (v11 == nullptr) {
    return 6;
  }
LABEL_9:
  v12 = v11;
  SdkRoutine_628f90(v11);
  v12[5] = 0;
  v12[6] = 0;
  v12[3] = add_explicit;
  v12[4] = 0;
  v12[5] = v7;
  *((_DWORD*)v12 + 12) = v8;
  *v12 = SdkData_e738f0;
  *((_DWORD*)v12 + 8) = *v10;
  if (*v9 != 0) {
    *((_BYTE*)v12 + 17) = 1;
    SdkRoutine_629ca0(v12);
    SdkRoutine_875b30(v12);
    return 8;
  }
  else {
    *v9 = v12;
    return 0;
  }
}

__int64 SdkHr_62b0a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD* a5)
{
  unsigned __int64 add_explicit;
  int v10;
  _QWORD* v11;
  int* v12;
  int* v13;
  int v14;
  _QWORD* v15;
  int v16;

  add_explicit = atomic_fetch_add_explicit(
      (atomic_ullong* volatile)(a1 + 24), (a3 + 0x1FFFF) & 0xFFFFFFFFFFFE0000LL,
      memory_order_relaxed);
  v10 = *(_DWORD*)(a4 + 32);
  v11 = (_QWORD*)SdkRoutine_875b00(48);
  if (v11 == nullptr) {
    return 6;
  }
  v12 = (int*)(a1 + 52);
  v13 = (int*)(a4 + 32);
  v14 = *(_DWORD*)(a4 + 12);
  v15 = v11;
  if (v10 != 0) {
    v12 = v13;
  }
  v16 = *v12;
  SdkRoutine_629c30(v11, a1);
  v15[3] = add_explicit;
  v15[4] = a3;
  *((_DWORD*)v15 + 10) = v14;
  *((_DWORD*)v15 + 11) = v16;
  *v15 = SdkData_e73958;
  if (*a5 != 0) {
    SdkRoutine_ce990();
    *((_BYTE*)v15 + 17) = 1;
    (*(void (**)(_QWORD*))(*v15 + 8LL))(v15);
    SdkRoutine_875b30(v15);
    return 8;
  }
  else {
    *a5 = v15;
    return 0;
  }
}

__int64 SdkHr_62b300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     _QWORD* a6)
{
  int v6;
  _QWORD* v12;
  int* v13;
  int* v14;
  int v15;
  _QWORD* v16;
  int v17;

  v6 = *(_DWORD*)(a5 + 32);
  v12 = (_QWORD*)SdkRoutine_875b00(48);
  if (v12 == nullptr) {
    return 6;
  }
  v13 = (int*)(a1 + 48);
  v14 = (int*)(a5 + 32);
  v15 = *(_DWORD*)(a5 + 12);
  v16 = v12;
  if (v6 != 0) {
    v13 = v14;
  }
  v17 = *v13;
  SdkRoutine_629c30(v12, a1);
  v16[3] = a3;
  v16[4] = a4;
  *((_DWORD*)v16 + 10) = v15;
  *((_DWORD*)v16 + 11) = v17;
  *v16 = SdkData_e73958;
  if (*a6 != 0) {
    SdkRoutine_ce990();
    *((_BYTE*)v16 + 17) = 1;
    (*(void (**)(_QWORD*))(*v16 + 8LL))(v16);
    SdkRoutine_875b30(v16);
    return 8;
  }
  else {
    *a6 = v16;
    return 0;
  }
}

_QWORD* SdkHr_62b500(_QWORD** a1)
{
  __int64 (**v2)();
  _QWORD* result;
  _QWORD* v4;
  unsigned int v5;
  _QWORD* v6;

  v6 = nullptr;
  v2 = SdkData_e73b30;
  if (*SdkData_e898f8 != 24 && *SdkData_e898f8 != 33) {
    if ((SdkRoutine_62b7f0() & 1) == 0) {
      return (_QWORD*)(SdkRoutine_0 + 2);
    }
    v2 = SdkData_e73b40;
  }
  result = (_QWORD*)((__int64 (*)(_QWORD**))v2[1])(&v6);
  v4 = v6;
  if ((_DWORD)result != 0) {
    if (v6 == nullptr) {
      return result;
    }
  LABEL_14:
    v5 = (unsigned int)result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))*v4)((void*)v4,
                                                                     v4);
    SdkRoutine_875b30(v6);
    return (_QWORD*)v5;
  }
  if (v6 == nullptr) {
    return (_QWORD*)(SdkRoutine_0 + 2);
  }
  result =
      X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                             PSEUDO_X8, _QWORD*))(*v6 + 16LL))((void*)v6, v6));
  if (a1 == &v6 || (_DWORD)result != 0) {
    v4 = v6;
    if (v6 == nullptr) {
      return result;
    }
    goto LABEL_14;
  }
  if (*a1 != nullptr) {
    (*(void (**)(_QWORD)) * *a1)(*a1);
    SdkRoutine_875b30(*a1);
  }
  *a1 = v6;
  return nullptr;
}

#pragma GCC visibility pop
