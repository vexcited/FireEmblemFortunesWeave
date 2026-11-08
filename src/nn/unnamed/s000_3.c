#include "decomp/pseudo_types.h"
#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_e59460[])();
extern __int64 (*SdkData_e59500)();
extern __int64 SdkData_e86d80;
extern __int64 SdkData_efd098;
extern _UNKNOWN SdkData_efd0a0;
extern int SdkData_efd0a4;
extern __int64 SdkData_efd0a8;
extern __int64 SdkData_efd0b0;
extern __int64 SdkData_efd0d8;
extern _UNKNOWN SdkData_efd0e0;
extern int SdkData_efd0e4;
extern __int64 SdkData_efd0e8;
extern __int64 SdkData_efd0f0;
extern __int64 SdkData_efd0f8;
extern _UNKNOWN SdkData_efd100;
extern int SdkData_efd104;
extern __int64 SdkData_efd108;
extern __int64 SdkData_efd110;
extern __int64 SdkData_efd138;
extern _UNKNOWN SdkData_efd140;
extern int SdkData_efd144;
extern __int64 SdkData_efd148;
extern __int64 SdkData_efd150;
extern __int64 SdkData_efd158;
extern _UNKNOWN SdkData_efd160;
extern int SdkData_efd164;
extern __int64 SdkData_efd168;
extern __int64 SdkData_efd170;
extern __int64 SdkData_efd178;
extern _UNKNOWN SdkData_efd180;
extern int SdkData_efd184;
extern __int64 SdkData_efd188;
extern __int64 SdkData_efd190;
extern __int64 SdkData_efd278;
extern _UNKNOWN SdkData_efd280;
extern int SdkData_efd284;
extern __int64 SdkData_efd288;
extern __int64 SdkData_efd290;
extern __int64 SdkData_efd298;
extern _UNKNOWN SdkData_efd2a0;
extern int SdkData_efd2a4;
extern __int64 SdkData_efd2a8;
extern __int64 SdkData_efd2b0;
extern __int64 SdkData_efd3a0;
extern __int64 SdkData_efed50;
extern _UNKNOWN SdkData_efed60;
extern int SdkData_efed8c;
extern __int64 SdkData_efeea0;
extern _UNKNOWN SdkData_efeea8;
extern int SdkData_efeeac;
extern __int64 SdkData_efeeb0;
extern __int64 SdkData_efeeb8;
extern __int64 (*SdkData_efeec0)(void);
extern __int64 (*SdkData_f01320)(__int64);
extern _UNKNOWN* SdkData_f01330;
extern _UNKNOWN SdkData_f01338;
extern __int64 SdkData_f01a88;
extern __int64 SdkData_f01a90;
_QWORD* SdkRoutine_1b7d20(_QWORD* result);
__int64 SdkRoutine_1b9ef0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _DWORD, _QWORD, _QWORD);
__int64 SdkRoutine_1c6580(__int64);
__int64 SdkRoutine_1c6b2c(_QWORD);
__int64 SdkRoutine_1c6b88(_QWORD*);
__int64 SdkRoutine_1c96e4(_QWORD);
__int64 SdkRoutine_1c9760(_QWORD, _QWORD);
__int64 SdkRoutine_1c9854(_QWORD, _QWORD);
__int64 SdkRoutine_1c9a7c(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);
__int64 SdkRoutine_1d3d5c(_QWORD);
__int64 SdkRoutine_1d3d98(_QWORD);
__int64 SdkRoutine_1d5464();
__int64 SdkRoutine_1dbc8c(_QWORD, _QWORD);
__int64 SdkRoutine_1dbe98(_QWORD, _QWORD);
__int64 SdkRoutine_1e2e20(__int64);
__int64 SdkRoutine_1e3100(_QWORD);
__int64 SdkRoutine_1e3350(void);
__int64 SdkRoutine_1e4100(_QWORD);
__int64 SdkRoutine_856170(_QWORD);
__int64 SdkRoutine_858b60(_QWORD);
__int64 SdkRoutine_858b80(_QWORD);
__int64 SdkRoutine_858db0(_QWORD);
__int64 SdkRoutine_859350(_QWORD);
__int64 SdkRoutine_859720(_QWORD);
__int64 SdkRoutine_859a60(_QWORD);
__int64 SdkRoutine_859a70(_QWORD, _QWORD);
__int64 SdkRoutine_859a80(_QWORD);
__int64 SdkRoutine_85adb0(_QWORD);
__int64 SdkRoutine_85b0d0(_QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_85d1a0(_QWORD);
__int64 SdkRoutine_85d430(_QWORD);
__int64 SdkRoutine_85d990(_QWORD);

__int64 SdkHr_1b9250(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                     __int64 a5, unsigned int a6)
{
  unsigned int v12;
  __int64 v13;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = 0;
  v16 = &v17;
  SdkRoutine_1b7d20(&v15);
  if (v16 == nullptr) {
    v12 = 5642;
    v13 = v17;
    if (v17 == 0) {
      return v12;
    }
    goto LABEL_3;
  }
  v15 = *a2;
  v12 = ((__int64 (*)(__int64, __int64*, __int64, __int64, __int64, __int64,
                      __int64, _QWORD, int, __int64*))SdkRoutine_1b9ef0)(
      a1 + 8, &v15, a3, 264, a4, 512, a5, a6, 150, &v17);
  v13 = v17;
  if (v17 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  return v12;
}

__int64 SdkHr_1c6d24(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;

  SdkRoutine_858b60(&SdkData_efeea8);
  if (SdkData_efeeac != 0) {
    if (SdkData_efeeb0 == 0) {
      SdkData_efeeb0 = (__int64)SdkRoutine_1d5464;
      SdkData_efeeb8 = (__int64)&SdkData_efd3a0;
    }
    ++SdkData_efeeac;
  }
  else {
    SdkRoutine_1c96e4(&SdkData_efd3a0);
    v4 = SdkData_efd3a0;
    v5 = SdkRoutine_1c9760(&SdkData_efed50, &SdkData_efed50);
    SdkRoutine_859a60(v5);
    LODWORD(v42) = 0;
    v6 = SdkRoutine_859a70(&v42, "appletAE");
    if ((_DWORD)v6 != 0 ||
        (v7 = (unsigned int)v42, LODWORD(v43) = 0,
         (_DWORD)(v6 = SdkRoutine_85b0d0(&SdkData_efed50, &v43,
                                         (unsigned int)v42)) != 0)) {
      v26 = v6;
      SdkRoutine_859a80(v6);
      SdkData_efed50 = SdkData_e86d80 + 16;
      SdkRoutine_1d3d5c(&SdkData_efed50);
      SdkRoutine_1d3d98(&SdkData_efd3a0);
      SdkRoutine_858b80(&SdkData_efeea8);
      LODWORD(v43) = v26;
      SdkRoutine_858db0(&v43);
      goto LABEL_80;
    }
    v8 = v4 + 144;
    v9 = (int)v43;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)(v4 + 144) +
                                                      16LL))(v4 + 144, 56, 8);
    v11 = v10;
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = &SdkData_efed50;
      *(_DWORD*)(v10 + 24) = v9;
      *(_DWORD*)(v10 + 28) = 0;
      *(_QWORD*)(v10 + 48) = v8;
      *(_DWORD*)(v10 + 40) = 1;
      *(_BYTE*)(v10 + 8) = 1;
      *(_QWORD*)v10 = SdkData_e59460;
      *(_QWORD*)(v10 + 32) = &SdkData_e59500;
    }
    v12 = SdkRoutine_1c9854(&SdkData_efed60, v7);
    ++SdkData_efed8c;
    SdkRoutine_859a80(v12);
    SdkData_efeeac = 1;
    SdkData_efeea0 = v11;
    SdkData_efeeb0 = (__int64)SdkRoutine_1d5464;
    SdkData_efeeb8 = (__int64)&SdkData_efd3a0;
  }
  SdkRoutine_858b80(&SdkData_efeea8);
  v13 = SdkRoutine_858b60(&SdkData_efd140);
  if (SdkData_efd144 != 0) {
    if (SdkData_efd148 == 0) {
      SdkData_efd148 = 0;
      SdkData_efd150 = 0;
    }
    ++SdkData_efd144;
  }
  else {
    v41 = 0;
    v14 = SdkRoutine_859350(v13);
    if (*(_BYTE*)a2 != 0) {
      v15 = *(_QWORD*)(a2 + 8);
    }
    else {
      v15 = 864000000000000000LL;
    }
    v16 = SdkRoutine_85d1a0(v15);
    v17 = v16 + v14;
    v18 = SdkRoutine_859350(v16);
    v19 = SdkRoutine_85d1a0(1000000000);
    v20 = v19 + v18;
    v21 = *(_BYTE*)a2 ^ 1;
    while (1) {
      a2 = SdkData_efeea0;
      LODWORD(v42) = SdkRoutine_85d990(v19);
      BYTE4(v42) = 0;
      v43 = &v41;
      v22 = (*(__int64 (**)(__int64, __int64**, _QWORD, __int64*, __int64))(
          *(_QWORD*)a2 + 56LL))(a2, &v43, 0, &v42, a1);
      LODWORD(a2) = v22;
      if (BYTE4(v42) == 1) {
        v22 = SdkRoutine_85adb0((unsigned int)v42);
      }
      if ((_DWORD)a2 == 0) {
        break;
      }
      if ((a2 & 0x3FFFFF) != 0x19280) {
        goto LABEL_101;
      }
      v23 = SdkRoutine_859350(v22);
      if (v23 >= v17) {
        goto LABEL_104;
      }
      if ((v21 & 1 | (v23 < v20)) != 0) {
        v19 = SdkRoutine_859720(10000000);
      }
      else {
        if (SdkData_efeec0 == nullptr) {
          goto LABEL_105;
        }
        v19 = SdkData_efeec0();
        v21 = 1;
      }
    }
    SdkData_efd144 = 1;
    SdkData_efd148 = 0;
    SdkData_efd150 = 0;
    SdkData_efd138 = v41;
  }
  SdkRoutine_858b80(&SdkData_efd140);
  SdkRoutine_858b60(&SdkData_efd280);
  if (SdkData_efd284 == 0) {
    v42 = 0;
    v24 = SdkData_efeea0;
    LODWORD(a2) = 103040;
    while (1) {
      v43 = &v42;
      v25 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v24 + 104LL))(v24,
                                                                         &v43);
      if ((v25 & 0x3FFFFF) != 0x19280) {
        break;
      }
      SdkRoutine_859720(10000000);
      v24 = SdkData_efeea0;
    }
    v26 = v25;
    if (v25 == 0) {
      SdkData_efd284 = 1;
      SdkData_efd288 = 0;
      SdkData_efd290 = 0;
      SdkData_efd278 = v42;
      goto LABEL_37;
    }
  LABEL_80:
    if (v42 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    }
    SdkRoutine_858b80(&SdkData_efd280);
    LODWORD(v43) = v26;
    SdkRoutine_858db0(&v43);
    goto LABEL_83;
  }
  if (SdkData_efd288 == 0) {
    SdkData_efd288 = 0;
    SdkData_efd290 = 0;
  }
  ++SdkData_efd284;
LABEL_37:
  SdkRoutine_858b80(&SdkData_efd280);
  SdkRoutine_858b60(&SdkData_efd2a0);
  if (SdkData_efd2a4 == 0) {
    v42 = 0;
    v27 = SdkData_efeea0;
    LODWORD(a2) = 103040;
    while (1) {
      v43 = &v42;
      v28 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v27 + 112LL))(v27,
                                                                         &v43);
      if ((v28 & 0x3FFFFF) != 0x19280) {
        break;
      }
      SdkRoutine_859720(10000000);
      v27 = SdkData_efeea0;
    }
    v26 = v28;
    if (v28 == 0) {
      SdkData_efd2a4 = 1;
      SdkData_efd2a8 = 0;
      SdkData_efd2b0 = 0;
      SdkData_efd298 = v42;
      goto LABEL_46;
    }
  LABEL_83:
    if (v42 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    }
    SdkRoutine_858b80(&SdkData_efd2a0);
    LODWORD(v43) = v26;
    v29 = SdkRoutine_858db0(&v43);
    goto LABEL_86;
  }
  if (SdkData_efd2a8 == 0) {
    SdkData_efd2a8 = 0;
    SdkData_efd2b0 = 0;
  }
  ++SdkData_efd2a4;
LABEL_46:
  SdkRoutine_858b80(&SdkData_efd2a0);
  SdkRoutine_858b60(&SdkData_efd0a0);
  if (SdkData_efd0a4 == 0) {
    v42 = 0;
    v43 = &v42;
    v29 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)SdkData_efd138 +
                                               104LL))(SdkData_efd138, &v43);
    if (v29 == 0) {
      SdkData_efd0a4 = 1;
      SdkData_efd0a8 = 0;
      SdkData_efd0b0 = 0;
      SdkData_efd098 = v42;
      goto LABEL_52;
    }
  LABEL_86:
    v36 = v29;
    if (v42 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    }
    SdkRoutine_858b80(&SdkData_efd0a0);
    LODWORD(v43) = v36;
    v30 = SdkRoutine_858db0(&v43);
    goto LABEL_89;
  }
  if (SdkData_efd0a8 == 0) {
    SdkData_efd0a8 = 0;
    SdkData_efd0b0 = 0;
  }
  ++SdkData_efd0a4;
LABEL_52:
  SdkRoutine_858b80(&SdkData_efd0a0);
  SdkRoutine_858b60(&SdkData_efd160);
  if (SdkData_efd164 == 0) {
    v42 = 0;
    v43 = &v42;
    v30 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)SdkData_efd138 +
                                               96LL))(SdkData_efd138, &v43);
    if (v30 == 0) {
      SdkData_efd164 = 1;
      SdkData_efd168 = 0;
      SdkData_efd170 = 0;
      SdkData_efd158 = v42;
      goto LABEL_58;
    }
  LABEL_89:
    v37 = v30;
    if (v42 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    }
    SdkRoutine_858b80(&SdkData_efd160);
    LODWORD(v43) = v37;
    v31 = SdkRoutine_858db0(&v43);
    goto LABEL_92;
  }
  if (SdkData_efd168 == 0) {
    SdkData_efd168 = 0;
    SdkData_efd170 = 0;
  }
  ++SdkData_efd164;
LABEL_58:
  SdkRoutine_858b80(&SdkData_efd160);
  SdkRoutine_858b60(&SdkData_efd180);
  if (SdkData_efd184 == 0) {
    v42 = 0;
    v43 = &v42;
    v31 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)SdkData_efd138 +
                                               80LL))(SdkData_efd138, &v43);
    if (v31 == 0) {
      SdkData_efd184 = 1;
      SdkData_efd188 = 0;
      SdkData_efd190 = 0;
      SdkData_efd178 = v42;
      goto LABEL_64;
    }
  LABEL_92:
    v38 = v31;
    if (v42 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    }
    SdkRoutine_858b80(&SdkData_efd180);
    LODWORD(v43) = v38;
    v32 = SdkRoutine_858db0(&v43);
    goto LABEL_95;
  }
  if (SdkData_efd188 == 0) {
    SdkData_efd188 = 0;
    SdkData_efd190 = 0;
  }
  ++SdkData_efd184;
LABEL_64:
  SdkRoutine_858b80(&SdkData_efd180);
  SdkRoutine_858b60(&SdkData_efd0e0);
  if (SdkData_efd0e4 != 0) {
    if (SdkData_efd0e8 == 0) {
      SdkData_efd0e8 = 0;
      SdkData_efd0f0 = 0;
    }
    ++SdkData_efd0e4;
    goto LABEL_70;
  }
  v42 = 0;
  v43 = &v42;
  v32 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)SdkData_efd138 + 112LL))(
      SdkData_efd138, &v43);
  if (v32 != 0) {
  LABEL_95:
    LODWORD(a2) = v32;
    if (v42 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
    }
    SdkRoutine_858b80(&SdkData_efd0e0);
    LODWORD(v43) = a2;
    v33 = SdkRoutine_858db0(&v43);
    goto LABEL_98;
  }
  SdkData_efd0e4 = 1;
  SdkData_efd0e8 = 0;
  SdkData_efd0f0 = 0;
  SdkData_efd0d8 = v42;
LABEL_70:
  SdkRoutine_858b80(&SdkData_efd0e0);
  SdkRoutine_858b60(&SdkData_efd100);
  if (SdkData_efd104 != 0) {
    if (SdkData_efd108 == 0) {
      SdkData_efd108 = 0;
      SdkData_efd110 = 0;
    }
    ++SdkData_efd104;
    goto LABEL_76;
  }
  v42 = 0;
  v43 = &v42;
  v33 = (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)SdkData_efd138 + 120LL))(
      SdkData_efd138, &v43);
  if (v33 == 0) {
    SdkData_efd104 = 1;
    SdkData_efd108 = 0;
    SdkData_efd110 = 0;
    SdkData_efd0f8 = v42;
  LABEL_76:
    SdkRoutine_858b80(&SdkData_efd100);
    v34 = SdkData_efd138;
    if (SdkData_efd138 != 0) {
      (**(void (***)(__int64))SdkData_efd138)(SdkData_efd138);
      (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34);
    }
    return SdkRoutine_1c6580(v34);
  }
LABEL_98:
  v39 = v33;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  SdkRoutine_858b80(&SdkData_efd100);
  LODWORD(v43) = v39;
  SdkRoutine_858db0(&v43);
LABEL_101:
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  SdkRoutine_858b80(&SdkData_efd140);
  LODWORD(v43) = a2;
  v23 = SdkRoutine_858db0(&v43);
LABEL_104:
  v23 = SdkRoutine_856170(v23);
LABEL_105:
  v40 = SdkRoutine_856170(v23);
  SdkRoutine_1c6b2c(v40);
  SdkRoutine_1c6b88(&SdkData_efd178);
  SdkRoutine_1c6b88(&SdkData_efd158);
  SdkRoutine_1c6b88(&SdkData_efd098);
  SdkRoutine_1c6b88(&SdkData_efd298);
  SdkRoutine_1c6b88(&SdkData_efd278);
  SdkRoutine_1c6b88(&SdkData_efd138);
  return SdkRoutine_1c6b88(&SdkData_efeea0);
}

__int64 SdkHr_1dbd3c(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                     __int64 a5, __int64 a6)
{
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = a1;
  v16 = &v17;
  SdkRoutine_1dbc8c(&v15, 0);
  if (v16 != nullptr) {
    v11 = *a4;
    v14 = *a3;
    v12 = SdkRoutine_1c9a7c(a2, &v14, v11, a5, a6, 128, 110, &v17);
  }
  else {
    v12 = 5642;
  }
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  return v12;
}

__int64 SdkHr_1dbf48(__int64 a1, __int64 a2, __int64* a3, __int64* a4,
                     __int64 a5, __int64 a6)
{
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;

  v17 = 0;
  v15 = a1;
  v16 = &v17;
  SdkRoutine_1dbe98(&v15, 0);
  if (v16 != nullptr) {
    v11 = *a4;
    v14 = *a3;
    v12 = SdkRoutine_1c9a7c(a2, &v14, v11, a5, a6, 128, 201, &v17);
  }
  else {
    v12 = 5642;
  }
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  return v12;
}

__int64 SdkHr_1e2f60(__int64 a1, __int64 a2)
{
  void* v4;
  void (***v5)(_QWORD);
  __int64 v6;
  void* v7;
  void (***v8)(_QWORD);
  char v9;
  char v10;
  __int64 v12;
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  int v15;

  v15 = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 128LL))(
      *(_QWORD*)(a1 + 16), a1 + 200);
  if (v15 != 0) {
    SdkRoutine_858db0(&v15);
  LABEL_23:
    SdkRoutine_858db0(&v15);
    goto LABEL_24;
  }
  if (*(_DWORD*)(a1 + 28) != 7) {
    SdkRoutine_1e2e20(a1);
    if (SdkData_f01320 != nullptr) {
      SdkData_f01320(a1);
    }
    *(_BYTE*)(a1 + 185) = 1;
    v7 = SdkData_f01330;
    if (SdkData_f01330 != nullptr) {
      v8 = *(void (****)(_QWORD))(a1 + 16);
      v13 = v8;
      if (v8 != nullptr) {
        (**v8)(v8);
      }
      v9 = ((__int64 (*)(void (****)(_QWORD), _QWORD, _QWORD, __int64))v7)(
          &v13, *(unsigned int*)(a1 + 24), *(unsigned int*)(a1 + 28), a2);
      if (v13 != nullptr) {
        (*v13)[1](v13);
      }
      if ((v9 & 1) != 0) {
        return 0;
      }
    }
    SdkRoutine_1e3100(a1 + 80);
    v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56LL))(
        *(_QWORD*)(a1 + 16));
    if (v15 == 0) {
      atomic_store(1u, (unsigned __int8*)(a1 + 186));
      return 0;
    }
    goto LABEL_23;
  }
  *(_BYTE*)(a1 + 185) = 1;
  v4 = SdkData_f01330;
  if (SdkData_f01330 != nullptr) {
    v5 = *(void (****)(_QWORD))(a1 + 16);
    v14 = v5;
    if (v5 != nullptr) {
      (**v5)(v5);
      v6 = *(unsigned int*)(a1 + 28);
    }
    else {
      v6 = 7;
    }
    v10 = ((__int64 (*)(void (****)(_QWORD), _QWORD, __int64, __int64))v4)(
        &v14, *(unsigned int*)(a1 + 24), v6, a2);
    if (v14 != nullptr) {
      (*v14)[1](v14);
    }
    if ((v10 & 1) != 0) {
      return 0;
    }
  }
  SdkRoutine_1e3100(a1 + 80);
  v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56LL))(
      *(_QWORD*)(a1 + 16));
  if (v15 == 0) {
    return 0;
  }
LABEL_24:
  v12 = SdkRoutine_858db0(&v15);
  return SdkRoutine_1e3100(v12);
}

__int64 SdkHr_1e31f0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  void* v6;
  void (***v7)(_QWORD);
  char v8;
  __int64 result;
  int v10;
  void (***v11)(_QWORD);

  v4 = SdkRoutine_1e3350();
  if ((SdkRoutine_85d430(v4) & 1) == 0) {
    return 7811;
  }
  v5 = SdkRoutine_858b60(&SdkData_f01338);
  *(_BYTE*)(a1 + 1) = 1;
  *(_QWORD*)(a1 + 8) = ++SdkData_f01a88;
  if (SdkData_f01a90 != 0 || SdkRoutine_1e4100(v5) != a1) {
    *(_BYTE*)(a1 + 1) = 0;
    SdkRoutine_858b80(&SdkData_f01338);
    return 7811;
  }
  SdkData_f01a90 = a1;
  *(_BYTE*)(a1 + 1) = 0;
  SdkRoutine_858b80(&SdkData_f01338);
  if (SdkData_f01320 != nullptr) {
    SdkData_f01320(a1);
  }
  *(_BYTE*)(a1 + 185) = 1;
  v6 = SdkData_f01330;
  if (SdkData_f01330 != nullptr) {
    v7 = *(void (****)(_QWORD))(a1 + 16);
    v11 = v7;
    if (v7 != nullptr) {
      (**v7)(v7);
    }
    v8 = ((__int64 (*)(void (****)(_QWORD), _QWORD, _QWORD, __int64))v6)(
        &v11, *(unsigned int*)(a1 + 24), *(unsigned int*)(a1 + 28), a2);
    if (v11 != nullptr) {
      (*v11)[1](v11);
    }
    if ((v8 & 1) != 0) {
      return 0;
    }
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 56LL))(
      *(_QWORD*)(a1 + 16));
  v10 = result;
  if ((_DWORD)result != 0) {
    SdkRoutine_858db0(&v10);
    __udf(0);
  }
  return result;
}

#pragma GCC visibility pop
