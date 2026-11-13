#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*SdkData_e6d4d0[])();

extern __int64 (*SdkData_e6d5f8)();

extern __int64 (*SdkData_e6d7c8[])();

extern __int64 (*SdkData_e6d8e8)();

extern __int64 (*SdkData_e6f000[])();

extern __int64 (*SdkData_e6f048)();

extern __int64 SdkData_e86d80;

extern __int64 SdkData_e87068;

extern __int64 SdkData_e88e10;

extern __int64 SdkData_e88e38;

extern __int64 SdkData_e88e40;

extern __int64 SdkData_e88ee8;

extern __int64 SdkData_e88ef0;

extern __int64 SdkData_e88f00;

extern __int64 SdkData_e88f50;

extern __int64 SdkData_e88f70;

extern __int64 SdkData_f5c1e0;

extern _UNKNOWN SdkData_f5c1e8;

extern __int64 SdkData_f60360;

extern _UNKNOWN SdkData_f60368;

extern __int64 SdkData_f65e70;

extern _UNKNOWN SdkData_f65e78;

extern _UNKNOWN SdkData_f65ea0;

extern __int64 SdkData_f662b0;

extern _UNKNOWN SdkData_f662b8;

extern __int64 SdkData_f6d980;

extern __int64 SdkData_f6d990;

extern int SdkData_f6d998;

extern _UNKNOWN SdkData_f6d99c;

extern __int64 SdkData_f6d9a0;

extern __int64 SdkData_f6d9a8;

extern __int64 SdkData_f6d9b0;

extern __int64 SdkData_f6d9b8;

extern int SdkData_f6d9c0;

extern int SdkData_f6d9c8;

extern int SdkData_f6d9d8;

extern int SdkData_f6d9e8;

extern int SdkData_f6d9f8;

extern int SdkData_f6da08;

extern int SdkData_f6da18;

extern int SdkData_f6da28;

extern int SdkData_f6da38;

extern int SdkData_f6da48;

extern int SdkData_f6da58;

extern int SdkData_f6da68;

extern int SdkData_f6da78;

extern int SdkData_f6da88;

extern int SdkData_f6da98;

extern int SdkData_f6daa8;

extern int SdkData_f6dab8;

__int64 SdkRoutine_2d0();

__int64 SdkRoutine_589700(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_5cda10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);

__int64 SdkRoutine_5d9ce0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_5dcc50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_5dce10(_QWORD, _QWORD);

__int64 SdkRoutine_858b60(_QWORD);

__int64 SdkRoutine_858b80(_QWORD);

__int64 SdkRoutine_858d00(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_858d40(_QWORD);

__int64 SdkRoutine_858d50(_QWORD);

__int64 SdkRoutine_859a50(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859a60(_QWORD);

__int64 SdkRoutine_859a70(_QWORD, _QWORD);

__int64 SdkRoutine_859a80(_QWORD);

__int64 SdkRoutine_859a90(_QWORD, _QWORD);

__int64 SdkRoutine_859aa0(_QWORD);

__int64 SdkRoutine_859ab0(_QWORD);

__int64 SdkRoutine_859ac0(_QWORD);

__int64 SdkRoutine_859ad0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859ae0(_QWORD);

__int64 SdkRoutine_859af0(_QWORD, _QWORD);

__int64 SdkRoutine_85b0d0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_85b0e0(_QWORD);

__int64 SdkRoutine_85b140(_QWORD);

__int64 SdkRoutine_85c330(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_85c340(_QWORD);

__int64 SdkRoutine_872be0(void);

__int64 SdkRoutine_872bf0(void);

__int64 SdkRoutine_872c20(void);

__int64 SdkRoutine_872c30(void);

__int64 SdkRoutine_872c40(void);

__int64 SdkRoutine_872c50(void);

__int64 SdkRoutine_872c60(void);

__int64 SdkRoutine_872c70(void);

__int64 SdkRoutine_872ca0(void);

__int64 SdkRoutine_872cb0(void);

__int64 SdkRoutine_872cc0(void);

__int64 SdkRoutine_872cd0(void);

__int64 SdkRoutine_872ce0(void);

__int64 SdkRoutine_872cf0(void);

__int64 SdkRoutine_872d00(void);

__int64 SdkRoutine_872d10(void);

__int64 SdkRoutine_872d20(void);

__int64 SdkRoutine_872d30(void);

__int64 SdkRoutine_872d40(void);

__int64 SdkRoutine_872d50(void);

__int64 SdkRoutine_872d60(void);

__int64 SdkRoutine_872d70(void);

__int64 SdkRoutine_872d80(void);

__int64 SdkRoutine_872d90(void);

__int64 SdkRoutine_f3b00(__int64, int);

_QWORD* SdkHr_5850d0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_f5c1e8);
    v2 = SdkRoutine_859a90(SdkData_f5c1e0, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_f5c1e8);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e6d4d0;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e6d5f8;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

_QWORD* SdkHr_5856b0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_f60368);
    v2 = SdkRoutine_859a90(SdkData_f60360, 48);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_f60368);
    if (v2 != 0) {
      *(_QWORD*)(v2 + 16) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_DWORD*)(v2 + 40) = 1;
      *(_QWORD*)v2 = SdkData_e6d7c8;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 32) = &SdkData_e6d8e8;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_589410(__int64* a1, _QWORD** a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  int v18;
  _QWORD* v20;
  _QWORD* v21;
  unsigned int v22;

  v2 = *a1;
  SdkRoutine_858b60(*a1 + 8);
  v5 = *(_DWORD*)(v2 + 12);
  if (v5 != 0) {
    *(_DWORD*)(v2 + 12) = v5 + 1;
    SdkRoutine_858b80(v2 + 8);
    if (a1[2] != 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v14 = SdkRoutine_85c330(v2 + 176, 1024, 64, 4, 16, v2 + 16);
  v15 = SdkData_e87068;
  *(_QWORD*)v2 = v2 + 16;
  *(_QWORD*)(v2 + 160) = v15 + 16;
  *(_QWORD*)(v2 + 168) = v14;
  *(_DWORD*)(v2 + 12) = 1;
  SdkRoutine_858b80(v2 + 8);
  if (a1[2] == 0) {
  LABEL_3:
    a1[2] = *(_QWORD*)v2 + 144LL;
  }
LABEL_4:
  v6 = SdkData_e86d80;
  *(_DWORD*)(v2 + 1224) = 0;
  *(_QWORD*)(v2 + 1200) = v6 + 16;
  *(_QWORD*)(v2 + 1216) = v2 + 1272;
  v7 = SdkRoutine_85b140(v2 + 1228);
  v8 = *(_QWORD*)(v2 + 1216);
  *(_QWORD*)(v2 + 1232) = 0;
  *(_QWORD*)(v2 + 1248) = v2 + 1200;
  *(_QWORD*)(v2 + 1240) = v8;
  *(_QWORD*)(v8 + 8) = v8 + 16;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 24LL) = *(_QWORD*)(v2 + 1216) + 32LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 40LL) = *(_QWORD*)(v2 + 1216) + 48LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 56LL) = *(_QWORD*)(v2 + 1216) + 64LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 72LL) = *(_QWORD*)(v2 + 1216) + 80LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 88LL) = *(_QWORD*)(v2 + 1216) + 96LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 104LL) = *(_QWORD*)(v2 + 1216) + 112LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 120LL) = *(_QWORD*)(v2 + 1216) + 128LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 136LL) = *(_QWORD*)(v2 + 1216) + 144LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 152LL) = *(_QWORD*)(v2 + 1216) + 160LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 168LL) = *(_QWORD*)(v2 + 1216) + 176LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 184LL) = *(_QWORD*)(v2 + 1216) + 192LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 200LL) = *(_QWORD*)(v2 + 1216) + 208LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 216LL) = *(_QWORD*)(v2 + 1216) + 224LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 232LL) = *(_QWORD*)(v2 + 1216) + 240LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 1216) + 248LL) = 0;
  *(_DWORD*)(v2 + 1264) = 0;
  *(_DWORD*)(v2 + 1272) = 0;
  *(_DWORD*)(v2 + 1288) = 0;
  *(_DWORD*)(v2 + 1304) = 0;
  *(_DWORD*)(v2 + 1320) = 0;
  *(_DWORD*)(v2 + 1336) = 0;
  *(_DWORD*)(v2 + 1352) = 0;
  *(_DWORD*)(v2 + 1368) = 0;
  *(_DWORD*)(v2 + 1384) = 0;
  *(_DWORD*)(v2 + 1400) = 0;
  *(_DWORD*)(v2 + 1416) = 0;
  *(_DWORD*)(v2 + 1432) = 0;
  *(_DWORD*)(v2 + 1448) = 0;
  *(_DWORD*)(v2 + 1464) = 0;
  *(_DWORD*)(v2 + 1480) = 0;
  *(_DWORD*)(v2 + 1496) = 0;
  *(_DWORD*)(v2 + 1512) = 0;
  v21 = nullptr;
  *(_QWORD*)(v2 + 1256) = 16;
  v11 = a1 + 1;
  v9 = a1[1];
  v10 = v11[1];
  SdkRoutine_859a60(v7);
  v22 = 0;
  v12 = SdkRoutine_859a70(&v22, v9);
  if ((_DWORD)v12 == 0) {
    v16 = SdkRoutine_589700(v2 + 1200, &v21, v10, v22);
    v13 = v16;
    SdkRoutine_859a80(v16);
    v17 = v21;
    if (v13 != 0) {
      if (v21 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v20 = *a2;
      v21 = nullptr;
      *a2 = v17;
      if (v20 == nullptr) {
        return 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v20 + 8LL))(
          (void*)v20, v20);
      v17 = v21;
      if (v21 == nullptr) {
      LABEL_11:
        if (v13 == 0) {
          return v13;
        }
        goto LABEL_12;
      }
    }
    (*(void (**)(_QWORD*))(*v17 + 8LL))(v17);
    goto LABEL_11;
  }
  v13 = v12;
  SdkRoutine_859a80(v12);
LABEL_12:
  *(_QWORD*)(v2 + 1200) = v6 + 16;
  SdkRoutine_858b60(v2 + 1264);
  SdkRoutine_f3b00(v2 + 1200, 0);
  SdkRoutine_858b80(v2 + 1264);
  SdkRoutine_858b60(v2 + 8);
  v18 = *(_DWORD*)(v2 + 12) - 1;
  *(_DWORD*)(v2 + 12) = v18;
  if (v18 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
    *(_QWORD*)v2 = 0;
  }
  SdkRoutine_858b80(v2 + 8);
  return v13;
}

__int64 SdkHr_589700(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
{
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v15 = 0;
  result = SdkRoutine_85b0d0(a1, &v15, a4);
  if ((_DWORD)result == 0) {
    v9 = v15;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
        a3, 56, 8);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = a1;
      *(_DWORD*)(v10 + 24) = v9;
      *(_DWORD*)(v10 + 28) = 0;
      *(_DWORD*)(v10 + 40) = 1;
      *(_BYTE*)(v10 + 8) = 1;
      v11 = SdkData_e88e10;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 88;
    }
    v12 = (_QWORD*)*a2;
    *a2 = v10;
    if (v12 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + 8LL))(
          (void*)v12, v12);
    }
    SdkRoutine_858b60(a1 + 24);
    v13 = *(_QWORD*)(a1 + 32);
    v14 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 40) = *(_QWORD*)(v14 + 8);
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(a1 + 32) = v14;
    *(_DWORD*)v14 = a4;
    if (v13 == 0) {
      SdkRoutine_85b0e0(a1 + 28);
    }
    SdkRoutine_858b80(a1 + 24);
    ++*(_DWORD*)(a1 + 60);
    return 0;
  }
  return result;
}

__int64 SdkHr_58c120(__int64 a1)
{
  int v2;

  *(_QWORD*)(a1 + 1200) = SdkData_e86d80 + 16;
  SdkRoutine_858b60(a1 + 1264);
  SdkRoutine_f3b00(a1 + 1200, 0);
  SdkRoutine_858b80(a1 + 1264);
  SdkRoutine_858b60(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12) - 1;
  *(_DWORD*)(a1 + 12) = v2;
  if (v2 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)a1 + 152LL));
    *(_QWORD*)a1 = 0;
  }
  return SdkRoutine_858b80(a1 + 8);
}

__int64 SdkHr_5932b0(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
{
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v15 = 0;
  result = SdkRoutine_85b0d0(a1, &v15, a4);
  if ((_DWORD)result == 0) {
    v9 = v15;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
        a3, 56, 8);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = a1;
      *(_DWORD*)(v10 + 24) = v9;
      *(_DWORD*)(v10 + 28) = 0;
      *(_DWORD*)(v10 + 40) = 1;
      *(_BYTE*)(v10 + 8) = 1;
      v11 = SdkData_e88e38;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 120;
    }
    v12 = (_QWORD*)*a2;
    *a2 = v10;
    if (v12 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + 8LL))(
          (void*)v12, v12);
    }
    SdkRoutine_858b60(a1 + 24);
    v13 = *(_QWORD*)(a1 + 32);
    v14 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 40) = *(_QWORD*)(v14 + 8);
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(a1 + 32) = v14;
    *(_DWORD*)v14 = a4;
    if (v13 == 0) {
      SdkRoutine_85b0e0(a1 + 28);
    }
    SdkRoutine_858b80(a1 + 24);
    ++*(_DWORD*)(a1 + 60);
    return 0;
  }
  return result;
}

__int64 SdkHr_593a00(_QWORD* a1)
{
  __int64 v2;
  int v3;

  a1[30] = SdkData_e86d80 + 16;
  v2 = (__int64)(a1 + 30);
  SdkRoutine_858b60(a1 + 38);
  SdkRoutine_f3b00(v2, 0);
  SdkRoutine_858b80(v2 + 64);
  SdkRoutine_858b60(v2 - 232);
  v3 = *(_DWORD*)(v2 - 228) - 1;
  *(_DWORD*)(v2 - 228) = v3;
  if (v3 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*a1 + 152LL));
    *a1 = 0;
  }
  return SdkRoutine_858b80(v2 - 232);
}

__int64 SdkHr_5959a0(__int64* a1, __int64* a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;

  v2 = *a1;
  SdkRoutine_858b60(*a1 + 8);
  v5 = *(_DWORD*)(v2 + 12);
  if (v5 != 0) {
    *(_DWORD*)(v2 + 12) = v5 + 1;
    v6 = SdkRoutine_858b80(v2 + 8);
    v7 = a1[2];
    if (v7 != 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v17 = SdkRoutine_85c330(v2 + 176, 64, 64, 4, 16, v2 + 16);
  v18 = SdkData_e87068;
  *(_QWORD*)v2 = v2 + 16;
  *(_QWORD*)(v2 + 160) = v18 + 16;
  *(_QWORD*)(v2 + 168) = v17;
  *(_DWORD*)(v2 + 12) = 1;
  v6 = SdkRoutine_858b80(v2 + 8);
  v7 = a1[2];
  if (v7 == 0) {
  LABEL_3:
    v7 = *(_QWORD*)v2 + 144LL;
    a1[2] = v7;
  }
LABEL_4:
  v8 = a1[1];
  v20 = 0;
  SdkRoutine_859a60(v6);
  v9 = SdkRoutine_859a70(&v20, v8);
  v10 = v9;
  SdkRoutine_859a80(v9);
  if (v10 != 0) {
    SdkRoutine_858b60(v2 + 8);
    v19 = *(_DWORD*)(v2 + 12) - 1;
    *(_DWORD*)(v2 + 12) = v19;
    if (v19 == 0) {
      SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
      *(_QWORD*)v2 = 0;
    }
    SdkRoutine_858b80(v2 + 8);
  }
  else {
    v11 = v20;
    v12 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 16LL))(
        v7, 40, 8);
    v13 = v12;
    if (v12 != 0) {
      *(_DWORD*)(v12 + 24) = 1;
      *(_DWORD*)(v12 + 8) = 1;
      *(_DWORD*)(v12 + 12) = v11;
      v14 = SdkData_e88e40;
      *(_QWORD*)(v12 + 32) = v7;
      *(_QWORD*)v12 = v14 + 16;
      *(_QWORD*)(v12 + 16) = v14 + 280;
      SdkRoutine_859aa0(v12 + 24);
    }
    v15 = *a2;
    *a2 = v13;
    if (v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    }
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
  }
  return v10;
}

__int64 SdkHr_5964b0(_DWORD* a1)
{
  int v2;

  SdkRoutine_858b60(a1 + 2);
  v2 = a1[3] - 1;
  a1[3] = v2;
  if (v2 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)a1 + 152LL));
    *(_QWORD*)a1 = 0;
  }
  return SdkRoutine_858b80(a1 + 2);
}

__int64 SdkHr_5a3040()
{
  SdkData_f65e70 = SdkRoutine_859a50(&SdkData_f65ea0, 1024, 0);
  return SdkRoutine_858d00(&SdkData_f65e78, 0, 0);
}

__int64 SdkHr_5a3090(__int64 a1)
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
    SdkRoutine_858d40(&SdkData_f65e78);
    SdkRoutine_859af0(SdkData_f65e70, a1);
    return SdkRoutine_858d50(&SdkData_f65e78);
  }
  return result;
}

_QWORD* SdkHr_5a4410(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;

  if (result[1] != 0) {
    v1 = result;
    SdkRoutine_858d40(&SdkData_f662b8);
    v2 = SdkRoutine_859a90(SdkData_f662b0, 32);
    result = (_QWORD*)SdkRoutine_858d50(&SdkData_f662b8);
    if (v2 != 0) {
      *(_DWORD*)(v2 + 24) = 1;
      *(_QWORD*)v2 = SdkData_e6f000;
      *(_QWORD*)(v2 + 8) = 0;
      *(_QWORD*)(v2 + 16) = &SdkData_e6f048;
      v3 = (__int64*)v1[1];
      result = (_QWORD*)*v3;
      *v3 = v2;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v1[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_5ac450(__int64 a1)
{
  int v2;

  *(_QWORD*)(a1 + 496) = SdkData_e86d80 + 16;
  SdkRoutine_858b60(a1 + 560);
  SdkRoutine_f3b00(a1 + 496, 0);
  SdkRoutine_858b80(a1 + 560);
  SdkRoutine_858b60(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12) - 1;
  *(_DWORD*)(a1 + 12) = v2;
  if (v2 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)a1 + 152LL));
    *(_QWORD*)a1 = 0;
  }
  return SdkRoutine_858b80(a1 + 8);
}

__int64 SdkHr_5acc68(__int64 a1)
{
  SdkRoutine_872be0();
  SdkRoutine_872bf0();
  return a1;
}

__int64 SdkHr_5acdd0(__int64 a1)
{
  SdkRoutine_872c20();
  SdkRoutine_872c30();
  return a1;
}

__int64 SdkHr_5ace84(__int64 a1)
{
  SdkRoutine_872c40();
  SdkRoutine_872c50();
  return a1;
}

__int64 SdkHr_5acf38(__int64 a1)
{
  SdkRoutine_872c60();
  SdkRoutine_872c70();
  return a1;
}

__int64 SdkHr_5ad0ac(__int64 a1)
{
  SdkRoutine_872ca0();
  SdkRoutine_872cb0();
  return a1;
}

__int64 SdkHr_5ad160(__int64 a1)
{
  SdkRoutine_872cc0();
  SdkRoutine_872cd0();
  return a1;
}

__int64 SdkHr_5ad214(__int64 a1)
{
  SdkRoutine_872ce0();
  SdkRoutine_872cf0();
  return a1;
}

__int64 SdkHr_5ad2c8(__int64 a1)
{
  SdkRoutine_872d00();
  SdkRoutine_872d10();
  return a1;
}

__int64 SdkHr_5ad37c(__int64 a1)
{
  SdkRoutine_872d20();
  SdkRoutine_872d30();
  return a1;
}

__int64 SdkHr_5ad430(__int64 a1)
{
  SdkRoutine_872d40();
  SdkRoutine_872d50();
  return a1;
}

__int64 SdkHr_5ad4e4(__int64 a1)
{
  SdkRoutine_872d60();
  SdkRoutine_872d70();
  return a1;
}

__int64 SdkHr_5ad598(__int64 a1)
{
  SdkRoutine_872d80();
  SdkRoutine_872d90();
  return a1;
}

_QWORD* SdkHr_5cbf70(_QWORD* result, int a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (result[1] != 0) {
    v2 = (_QWORD*)*result;
    v3 = result;
    SdkRoutine_858d40(*result + 8LL);
    v5 = SdkRoutine_859a90(*v2, 56);
    result = (_QWORD*)SdkRoutine_858d50(v2 + 1);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 16) = 0;
      *(_QWORD*)(v5 + 24) = 0;
      *(_DWORD*)(v5 + 40) = 1;
      v6 = SdkData_e88ee8;
      *(_QWORD*)(v5 + 48) = v2;
      *(_QWORD*)v5 = v6 + 16;
      *(_QWORD*)(v5 + 8) = 0;
      *(_QWORD*)(v5 + 32) = v6 + 184;
      v7 = v3[1];
      result = *(_QWORD**)(v7 + 8LL * a2);
      *(_QWORD*)(v7 + 8LL * a2) = v5;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v3[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_5cc1c0(__int64 a1, _QWORD* a2, __int64 a3, _QWORD* a4, __int64 a5,
                     unsigned int a6, _QWORD* a7)
{
  return SdkRoutine_5cda10(a1 + 8, *a2, a2[1], a3, *a4, a4[1], a5, a6, *a7,
                           a7[1], 13);
}

_QWORD* SdkHr_5cc220(_QWORD* result, int a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (result[1] != 0) {
    v2 = (_QWORD*)*result;
    v3 = result;
    SdkRoutine_858d40(*result + 8LL);
    v5 = SdkRoutine_859a90(*v2, 56);
    result = (_QWORD*)SdkRoutine_858d50(v2 + 1);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 16) = 0;
      *(_QWORD*)(v5 + 24) = 0;
      *(_DWORD*)(v5 + 40) = 1;
      v6 = SdkData_e88ef0;
      *(_QWORD*)(v5 + 48) = v2;
      *(_QWORD*)v5 = v6 + 16;
      *(_QWORD*)(v5 + 8) = 0;
      *(_QWORD*)(v5 + 32) = v6 + 376;
      v7 = v3[1];
      result = *(_QWORD**)(v7 + 8LL * a2);
      *(_QWORD*)(v7 + 8LL * a2) = v5;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v3[1] = 0;
    }
  }
  return result;
}

__int64 SdkHr_5ce700(__int64 a1, __int64* a2, _QWORD* a3, unsigned int a4)
{
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v15 = 0;
  result = SdkRoutine_85b0d0(a1, &v15, a4);
  if ((_DWORD)result == 0) {
    v9 = v15;
    SdkRoutine_858d40(a3 + 1);
    v10 = SdkRoutine_859a90(*a3, 56);
    SdkRoutine_858d50(a3 + 1);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = a1;
      *(_DWORD*)(v10 + 24) = v9;
      *(_DWORD*)(v10 + 28) = 0;
      *(_DWORD*)(v10 + 40) = 1;
      *(_BYTE*)(v10 + 8) = 1;
      v11 = SdkData_e88f00;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 168;
    }
    v12 = *a2;
    *a2 = v10;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
    SdkRoutine_858b60(a1 + 24);
    v13 = *(_QWORD*)(a1 + 32);
    v14 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 40) = *(_QWORD*)(v14 + 8);
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(a1 + 32) = v14;
    *(_DWORD*)v14 = a4;
    if (v13 == 0) {
      SdkRoutine_85b0e0(a1 + 28);
    }
    SdkRoutine_858b80(a1 + 24);
    ++*(_DWORD*)(a1 + 60);
    return 0;
  }
  return result;
}

__int64 SdkHr_5ce810()
{
  SdkData_f6d998 = 0;
  SdkData_f6d980 = SdkData_e86d80 + 16;
  SdkData_f6d990 = (__int64)&SdkData_f6d9c8;
  SdkRoutine_85b140(&SdkData_f6d99c);
  SdkData_f6d9a0 = 0;
  SdkData_f6d9a8 = SdkData_f6d990;
  SdkData_f6d9b0 = (__int64)&SdkData_f6d980;
  *(_QWORD*)(SdkData_f6d990 + 8) = SdkData_f6d990 + 16;
  *(_QWORD*)(SdkData_f6d990 + 24) = SdkData_f6d990 + 32;
  *(_QWORD*)(SdkData_f6d990 + 40) = SdkData_f6d990 + 48;
  *(_QWORD*)(SdkData_f6d990 + 56) = SdkData_f6d990 + 64;
  *(_QWORD*)(SdkData_f6d990 + 72) = SdkData_f6d990 + 80;
  *(_QWORD*)(SdkData_f6d990 + 88) = SdkData_f6d990 + 96;
  *(_QWORD*)(SdkData_f6d990 + 104) = SdkData_f6d990 + 112;
  *(_QWORD*)(SdkData_f6d990 + 120) = SdkData_f6d990 + 128;
  *(_QWORD*)(SdkData_f6d990 + 136) = SdkData_f6d990 + 144;
  *(_QWORD*)(SdkData_f6d990 + 152) = SdkData_f6d990 + 160;
  *(_QWORD*)(SdkData_f6d990 + 168) = SdkData_f6d990 + 176;
  *(_QWORD*)(SdkData_f6d990 + 184) = SdkData_f6d990 + 192;
  *(_QWORD*)(SdkData_f6d990 + 200) = SdkData_f6d990 + 208;
  *(_QWORD*)(SdkData_f6d990 + 216) = SdkData_f6d990 + 224;
  *(_QWORD*)(SdkData_f6d990 + 232) = SdkData_f6d990 + 240;
  *(_QWORD*)(SdkData_f6d990 + 248) = 0;
  SdkData_f6d9c0 = 0;
  SdkData_f6d9c8 = 0;
  SdkData_f6d9d8 = 0;
  SdkData_f6d9e8 = 0;
  SdkData_f6d9f8 = 0;
  SdkData_f6da08 = 0;
  SdkData_f6da18 = 0;
  SdkData_f6da28 = 0;
  SdkData_f6da38 = 0;
  SdkData_f6da48 = 0;
  SdkData_f6da58 = 0;
  SdkData_f6da68 = 0;
  SdkData_f6da78 = 0;
  SdkData_f6da88 = 0;
  SdkData_f6da98 = 0;
  SdkData_f6daa8 = 0;
  SdkData_f6dab8 = 0;
  SdkData_f6d9b8 = 16;
  SdkRoutine_2d0();
  SdkRoutine_2d0();
  return SdkRoutine_2d0();
}

__int64 SdkHr_5d99f0(__int64* a1, _QWORD** a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  int v18;
  _QWORD* v20;
  _QWORD* v21;
  unsigned int v22;

  v2 = *a1;
  SdkRoutine_858b60(*a1 + 8);
  v5 = *(_DWORD*)(v2 + 12);
  if (v5 != 0) {
    *(_DWORD*)(v2 + 12) = v5 + 1;
    SdkRoutine_858b80(v2 + 8);
    if (a1[2] != 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v14 = SdkRoutine_85c330(v2 + 176, 320, 64, 4, 16, v2 + 16);
  v15 = SdkData_e87068;
  *(_QWORD*)v2 = v2 + 16;
  *(_QWORD*)(v2 + 160) = v15 + 16;
  *(_QWORD*)(v2 + 168) = v14;
  *(_DWORD*)(v2 + 12) = 1;
  SdkRoutine_858b80(v2 + 8);
  if (a1[2] == 0) {
  LABEL_3:
    a1[2] = *(_QWORD*)v2 + 144LL;
  }
LABEL_4:
  v6 = SdkData_e86d80;
  *(_DWORD*)(v2 + 520) = 0;
  *(_QWORD*)(v2 + 496) = v6 + 16;
  *(_QWORD*)(v2 + 512) = v2 + 568;
  v7 = SdkRoutine_85b140(v2 + 524);
  v8 = *(_QWORD*)(v2 + 512);
  *(_QWORD*)(v2 + 528) = 0;
  *(_QWORD*)(v2 + 544) = v2 + 496;
  *(_QWORD*)(v2 + 536) = v8;
  *(_QWORD*)(v8 + 8) = v8 + 16;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 24LL) = *(_QWORD*)(v2 + 512) + 32LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 40LL) = *(_QWORD*)(v2 + 512) + 48LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 56LL) = *(_QWORD*)(v2 + 512) + 64LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 72LL) = *(_QWORD*)(v2 + 512) + 80LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 88LL) = *(_QWORD*)(v2 + 512) + 96LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 104LL) = *(_QWORD*)(v2 + 512) + 112LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 120LL) = *(_QWORD*)(v2 + 512) + 128LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 136LL) = *(_QWORD*)(v2 + 512) + 144LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 152LL) = *(_QWORD*)(v2 + 512) + 160LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 168LL) = *(_QWORD*)(v2 + 512) + 176LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 184LL) = *(_QWORD*)(v2 + 512) + 192LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 200LL) = *(_QWORD*)(v2 + 512) + 208LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 216LL) = *(_QWORD*)(v2 + 512) + 224LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 232LL) = *(_QWORD*)(v2 + 512) + 240LL;
  *(_QWORD*)(*(_QWORD*)(v2 + 512) + 248LL) = 0;
  *(_DWORD*)(v2 + 560) = 0;
  *(_DWORD*)(v2 + 568) = 0;
  *(_DWORD*)(v2 + 584) = 0;
  *(_DWORD*)(v2 + 600) = 0;
  *(_DWORD*)(v2 + 616) = 0;
  *(_DWORD*)(v2 + 632) = 0;
  *(_DWORD*)(v2 + 648) = 0;
  *(_DWORD*)(v2 + 664) = 0;
  *(_DWORD*)(v2 + 680) = 0;
  *(_DWORD*)(v2 + 696) = 0;
  *(_DWORD*)(v2 + 712) = 0;
  *(_DWORD*)(v2 + 728) = 0;
  *(_DWORD*)(v2 + 744) = 0;
  *(_DWORD*)(v2 + 760) = 0;
  *(_DWORD*)(v2 + 776) = 0;
  *(_DWORD*)(v2 + 792) = 0;
  *(_DWORD*)(v2 + 808) = 0;
  v21 = nullptr;
  *(_QWORD*)(v2 + 552) = 16;
  v11 = a1 + 1;
  v9 = a1[1];
  v10 = v11[1];
  SdkRoutine_859a60(v7);
  v22 = 0;
  v12 = SdkRoutine_859a70(&v22, v9);
  if ((_DWORD)v12 == 0) {
    v16 = SdkRoutine_5d9ce0(v2 + 496, &v21, v10, v22);
    v13 = v16;
    SdkRoutine_859a80(v16);
    v17 = v21;
    if (v13 != 0) {
      if (v21 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v20 = *a2;
      v21 = nullptr;
      *a2 = v17;
      if (v20 == nullptr) {
        return 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v20 + 8LL))(
          (void*)v20, v20);
      v17 = v21;
      if (v21 == nullptr) {
      LABEL_11:
        if (v13 == 0) {
          return v13;
        }
        goto LABEL_12;
      }
    }
    (*(void (**)(_QWORD*))(*v17 + 8LL))(v17);
    goto LABEL_11;
  }
  v13 = v12;
  SdkRoutine_859a80(v12);
LABEL_12:
  *(_QWORD*)(v2 + 496) = v6 + 16;
  SdkRoutine_858b60(v2 + 560);
  SdkRoutine_f3b00(v2 + 496, 0);
  SdkRoutine_858b80(v2 + 560);
  SdkRoutine_858b60(v2 + 8);
  v18 = *(_DWORD*)(v2 + 12) - 1;
  *(_DWORD*)(v2 + 12) = v18;
  if (v18 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
    *(_QWORD*)v2 = 0;
  }
  SdkRoutine_858b80(v2 + 8);
  return v13;
}

__int64 SdkHr_5d9ce0(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
{
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;

  v15 = 0;
  result = SdkRoutine_85b0d0(a1, &v15, a4);
  if ((_DWORD)result == 0) {
    v9 = v15;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a3 + 16LL))(
        a3, 56, 8);
    if (v10 != 0) {
      *(_QWORD*)(v10 + 16) = a1;
      *(_DWORD*)(v10 + 24) = v9;
      *(_DWORD*)(v10 + 28) = 0;
      *(_DWORD*)(v10 + 40) = 1;
      *(_BYTE*)(v10 + 8) = 1;
      v11 = SdkData_e88f50;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 240;
    }
    v12 = (_QWORD*)*a2;
    *a2 = v10;
    if (v12 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v12 + 8LL))(
          (void*)v12, v12);
    }
    SdkRoutine_858b60(a1 + 24);
    v13 = *(_QWORD*)(a1 + 32);
    v14 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 40) = *(_QWORD*)(v14 + 8);
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(a1 + 32) = v14;
    *(_DWORD*)v14 = a4;
    if (v13 == 0) {
      SdkRoutine_85b0e0(a1 + 28);
    }
    SdkRoutine_858b80(a1 + 24);
    ++*(_DWORD*)(a1 + 60);
    return 0;
  }
  return result;
}

__int64 SdkHr_5db9f0(__int64 a1)
{
  int v2;

  *(_QWORD*)(a1 + 496) = SdkData_e86d80 + 16;
  SdkRoutine_858b60(a1 + 560);
  SdkRoutine_f3b00(a1 + 496, 0);
  SdkRoutine_858b80(a1 + 560);
  SdkRoutine_858b60(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12) - 1;
  *(_DWORD*)(a1 + 12) = v2;
  if (v2 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)a1 + 152LL));
    *(_QWORD*)a1 = 0;
  }
  return SdkRoutine_858b80(a1 + 8);
}

__int64 SdkHr_5dca00(__int64* a1, __int64* a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;

  v2 = *a1;
  SdkRoutine_858b60(*a1 + 8);
  v5 = *(_DWORD*)(v2 + 12);
  if (v5 != 0) {
    *(_DWORD*)(v2 + 12) = v5 + 1;
    v6 = SdkRoutine_858b80(v2 + 8);
    v7 = a1[2];
    if (v7 != 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v17 = SdkRoutine_85c330(v2 + 176, 256, 64, 4, 16, v2 + 16);
  v18 = SdkData_e87068;
  *(_QWORD*)v2 = v2 + 16;
  *(_QWORD*)(v2 + 160) = v18 + 16;
  *(_QWORD*)(v2 + 168) = v17;
  *(_DWORD*)(v2 + 12) = 1;
  v6 = SdkRoutine_858b80(v2 + 8);
  v7 = a1[2];
  if (v7 == 0) {
  LABEL_3:
    v7 = *(_QWORD*)v2 + 144LL;
    a1[2] = v7;
  }
LABEL_4:
  v8 = a1[1];
  v20 = 0;
  SdkRoutine_859a60(v6);
  v9 = SdkRoutine_859a70(&v20, v8);
  v10 = v9;
  SdkRoutine_859a80(v9);
  if (v10 != 0) {
    SdkRoutine_858b60(v2 + 8);
    v19 = *(_DWORD*)(v2 + 12) - 1;
    *(_DWORD*)(v2 + 12) = v19;
    if (v19 == 0) {
      SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
      *(_QWORD*)v2 = 0;
    }
    SdkRoutine_858b80(v2 + 8);
  }
  else {
    v11 = v20;
    v12 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v7 + 16LL))(
        v7, 40, 8);
    v13 = v12;
    if (v12 != 0) {
      *(_DWORD*)(v12 + 24) = 1;
      *(_DWORD*)(v12 + 8) = 1;
      *(_DWORD*)(v12 + 12) = v11;
      v14 = SdkData_e88f70;
      *(_QWORD*)(v12 + 32) = v7;
      *(_QWORD*)v12 = v14 + 16;
      *(_QWORD*)(v12 + 16) = v14 + 96;
      SdkRoutine_859aa0(v12 + 24);
    }
    v15 = *a2;
    *a2 = v13;
    if (v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    }
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
  }
  return v10;
}

__int64 SdkHr_5dcba0(__int64 a1, __int64* a2, unsigned int a3, unsigned int a4)
{
  __int64 v4;
  unsigned int v9;
  __int64 v10;
  __int64 v12;
  __int64* v13;
  __int64 v14;

  v4 = *(_QWORD*)(a1 + 32);
  v14 = 0;
  v12 = v4;
  v13 = &v14;
  SdkRoutine_5dce10(&v12, 0);
  if (v13 == nullptr) {
    v9 = 5642;
    v10 = v14;
    if (v14 == 0) {
      return v9;
    }
    goto LABEL_3;
  }
  v12 = *a2;
  v9 = SdkRoutine_5dcc50(a1 + 8, &v12, a3, a4, 0, &v14);
  v10 = v14;
  if (v14 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  return v9;
}

__int64 SdkHr_5dcef0(_DWORD* a1)
{
  int v2;

  SdkRoutine_858b60(a1 + 2);
  v2 = a1[3] - 1;
  a1[3] = v2;
  if (v2 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)a1 + 152LL));
    *(_QWORD*)a1 = 0;
  }
  return SdkRoutine_858b80(a1 + 2);
}

#pragma GCC visibility pop
