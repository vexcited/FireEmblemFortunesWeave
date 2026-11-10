#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 SdkData_e86d80;

extern __int64 SdkData_e87068;

extern __int64 SdkData_e88110;

extern __int64 SdkData_f3f060;

extern _UNKNOWN SdkData_f3f068;

__int64 SdkRoutine_2d0();

__int64 SdkRoutine_4335b0();

__int64 SdkRoutine_4336b0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_4337a0();

__int64 SdkRoutine_433800();

__int64 SdkRoutine_45a7d0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_4880b0(void);

__int64 SdkRoutine_4881d0(void);

__int64 SdkRoutine_488980(void);

__int64 SdkRoutine_488a80(void);

__int64 SdkRoutine_488b80(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_488ca0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_488dc0(void);

__int64 SdkRoutine_488ee0(void);

__int64 SdkRoutine_489000(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_489120(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_489460(void);

__int64 SdkRoutine_489980(void);

__int64 SdkRoutine_489a80(void);

__int64 SdkRoutine_489b80(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_489c80(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_858b60(_QWORD);

__int64 SdkRoutine_858b80(_QWORD);

__int64 SdkRoutine_858d40(_QWORD);

__int64 SdkRoutine_858d50(_QWORD);

__int64 SdkRoutine_859a60(_QWORD);

__int64 SdkRoutine_859a70(_QWORD, _QWORD);

__int64 SdkRoutine_859a80(void);

__int64 SdkRoutine_859ab0(_QWORD);

__int64 SdkRoutine_859ac0(_QWORD);

__int64 SdkRoutine_859ad0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_859ae0(_QWORD);

__int64 SdkRoutine_859af0(_QWORD, _QWORD);

__int64 SdkRoutine_85adb0(_QWORD);

__int64 SdkRoutine_85b0d0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_85b0e0(_QWORD);

__int64 SdkRoutine_85b140(_QWORD);

__int64 SdkRoutine_85c330(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_85c340(_QWORD);

__int64 SdkRoutine_8694c0(_QWORD, _QWORD);

__int64 SdkRoutine_869520(_QWORD, _QWORD);

__int64 SdkRoutine_869550(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_869590(_QWORD, _QWORD);

__int64 SdkRoutine_8696e0(_QWORD, _QWORD);

__int64 SdkRoutine_8696f0(_QWORD, _QWORD);

__int64 SdkRoutine_869730(_QWORD, _QWORD);

__int64 SdkRoutine_869750(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_869ab0(_QWORD, _QWORD);

__int64 SdkRoutine_869ca0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_869cb0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_869e20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_f3b00(__int64, int);

__int64 SdkHr_431cd0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int16 v6;
  int v7;
  int v8;
  __int16 v9;
  __int16 v10;
  unsigned int v11;
  __int16 v12;

  v1 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = v1 - 4;
  v3 = *(int*)(v1 - 4);
  *(_QWORD*)(a1 + 40) = v1 - 8;
  v4 = *(int*)(v1 - 8);
  SdkRoutine_4336b0(
      (unsigned int)(*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4 * v4) -
                     *(_DWORD*)(**(_QWORD**)(a1 + 16) + 4 * v3)),
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 4 * v4) -
                     *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 8LL) +
                                4 * v3)),
      a1 + 24);
  result = SdkRoutine_4336b0(
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) +
                                4 * v4) -
                     *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16LL) +
                                4 * v3)),
      (unsigned int)(*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) +
                                4 * v4) -
                     *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 24LL) +
                                4 * v3)),
      a1 + 32);
  v6 = *(_WORD*)(a1 + 24);
  v7 = *(unsigned __int16*)(a1 + 26);
  if ((*(_BYTE*)(a1 + 90) & 1) != 0) {
    v8 = -v7;
    v9 = *(_WORD*)(a1 + 34);
    v10 = *(_WORD*)(a1 + 32);
    *(_WORD*)(a1 + 26) = v6;
    *(_WORD*)(a1 + 24) = v8;
    *(_WORD*)(a1 + 34) = v10;
    *(_WORD*)(a1 + 32) = -v9;
    LOWORD(v7) = v6;
    v6 = v8;
  }
  v11 =
      ((unsigned int)(4 * (__int16)v7 * *(__int16*)(a1 + 30) + 0x8000) >> 16) +
      ((unsigned int)(4 * v6 * *(__int16*)(a1 + 28) + 0x8000) >> 16);
  if ((v11 & 0x8000u) != 0) {
    v12 = -16384;
  }
  else {
    v12 = 0x4000;
  }
  if ((unsigned int)((__int16)v11 + 1023) < 0x7FF) {
    LOWORD(v11) = v12;
  }
  *(_WORD*)(a1 + 92) = v11;
  *(_QWORD*)(a1 + 96) = SdkRoutine_4335b0;
  *(_QWORD*)(a1 + 104) = SdkRoutine_4337a0;
  *(_QWORD*)(a1 + 112) = SdkRoutine_433800;
  return result;
}

__int64 SdkHr_450020(__int64 a1, __int64* a2, int a3, unsigned int a4,
                     unsigned int a5, unsigned int a6)
{
  __int64 v6;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _DWORD* v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  bool v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  __int64 v40;

  v6 = *a2;
  v40 = 0;
  v39 = 0;
  if (*(_QWORD*)(v6 + 56) == 0) {
    goto LABEL_4;
  }
  if ((unsigned int)SdkRoutine_8696f0(a1, v6) != 0) {
    return *(unsigned int*)(a1 + 72);
  }
  v13 = *(_QWORD*)(v6 + 56);
  if (v13 == 0) {
  LABEL_4:
    if ((unsigned int)SdkRoutine_8696e0(a1, v6) != 0) {
      return *(unsigned int*)(a1 + 72);
    }
    v13 = *(_QWORD*)(v6 + 56);
  }
  result =
      SdkRoutine_869e20(a1, *(_QWORD*)(v13 + 48), (unsigned int)a3, a4, a5, a6);
  *(_DWORD*)(a1 + 72) = result;
  if ((_DWORD)result != 0) {
    return result;
  }
  v15 = SdkRoutine_869730(*(_QWORD*)(a1 + 128) + 16792LL, a1);
  result = *(unsigned int*)(a1 + 72);
  if (v15 == 0 || (_DWORD)result != 0) {
    return result;
  }
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 88) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)v15 = 0;
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = a2;
  v16 = (_DWORD*)SdkRoutine_869730(*(_QWORD*)(a1 + 128) + 16792LL, a1);
  if (v16 == nullptr || *(_DWORD*)(a1 + 72) != 0) {
    SdkRoutine_869750(*(_QWORD*)(a1 + 128) + 16792LL, a1, v15);
    return *(unsigned int*)(a1 + 72);
  }
  v17 = v16;
  *v16 = 1336;
  v18 = SdkRoutine_869590(a1, 1336);
  *(_QWORD*)(v15 + 8) = v18;
  if (v18 == 0) {
    return *(unsigned int*)(a1 + 72);
  }
  *(_QWORD*)v18 = a2;
  *(_BYTE*)(v18 + 542) = 1;
  v19 = *(_QWORD*)(v13 + 72);
  *(_QWORD*)(v18 + 8) = v19;
  *(_WORD*)(v18 + 514) = *(_WORD*)(v19 + 8);
  v20 = *(_QWORD*)(v13 + 72);
  v21 = v18;
  LOWORD(v20) = *(_WORD*)(v20 + 6);
  *(_WORD*)(v18 + 492) = 1;
  *(_WORD*)(v18 + 516) = v20;
  *(_WORD*)(v15 + 48) = -1;
  v22 = SdkRoutine_869ca0(a1, v15, v17);
  *(_DWORD*)(a1 + 72) = v22;
  if (v22 != 0) {
    v23 = v22;
    SdkRoutine_869520(a1, *(_QWORD*)(v15 + 8));
    *(_DWORD*)(a1 + 72) = v23;
    return v23;
  }
  v24 = *(_QWORD*)(a1 + 128);
  v25 = *(_DWORD*)(v24 + 16808);
  v26 = v17[2];
  if (v25 < v26) {
    if (v25 >= 1) {
      SdkRoutine_869520(a1, *(_QWORD*)(v24 + 16816));
      v26 = v17[2];
      v24 = *(_QWORD*)(a1 + 128);
    }
    *(_DWORD*)(v24 + 16808) = v26;
    *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16816LL) =
        SdkRoutine_869590(a1, (unsigned int)v17[2]);
    v27 = *(_QWORD*)(a1 + 128);
    if (*(_QWORD*)(v27 + 16816) == 0) {
      *(_DWORD*)(v27 + 16808) = 0;
      goto LABEL_27;
    }
  }
  v28 = SdkRoutine_8694c0(a1, (unsigned int)v17[3]);
  *(_QWORD*)(v15 + 32) = v28;
  if (v28 == 0) {
  LABEL_27:
    v31 = *(_DWORD*)(a1 + 72);
    v32 = *(_QWORD*)(v15 + 8);
    goto LABEL_28;
  }
  *(_DWORD*)(v15 + 72) = a4;
  *(_DWORD*)(v15 + 76) = a6;
  *(_DWORD*)(v15 + 64) = a5;
  *(_DWORD*)(v15 + 68) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 88) = 0x4000000000000000LL;
  *(_QWORD*)(v15 + 48) = 0x48004800010000LL;
  *(_DWORD*)(v15 + 56) = 92682;
  *(_DWORD*)(v15 + 60) = a3;
  v29 = SdkRoutine_869cb0(a1, v15, v17);
  *(_DWORD*)(a1 + 72) = v29;
  if (v29 != 0 ||
      (v29 = SdkRoutine_869ab0(a1, v21), *(_DWORD*)(a1 + 72) = v29, v29 != 0)) {
    v30 = *(_QWORD*)(v15 + 8);
    v31 = v29;
  LABEL_25:
    SdkRoutine_869520(a1, v30);
    v32 = *(_QWORD*)(v15 + 32);
  LABEL_28:
    SdkRoutine_869520(a1, v32);
    SdkRoutine_869750(*(_QWORD*)(a1 + 128) + 16792LL, a1, v15);
    SdkRoutine_869750(*(_QWORD*)(a1 + 128) + 16792LL, a1, v17);
    *(_DWORD*)(a1 + 72) = v31;
    return v31;
  }
  *(_QWORD*)(*(_QWORD*)(a1 + 128) + 16824LL) = a2;
  v33 = SdkRoutine_869590(a1, 24);
  a2[5] = v33;
  if (v33 == 0) {
    v31 = *(_DWORD*)(a1 + 72);
    v30 = *(_QWORD*)(v15 + 8);
    goto LABEL_25;
  }
  *(_QWORD*)(v33 + 16) = v21;
  v36 = a3 > 0 && (int)a6 > 0 && (a5 | a4) == 0;
  *(_BYTE*)(a2[5] + 4) = v36;
  if (*(_BYTE*)(a2[5] + 4) == 0) {
    *((_WORD*)a2 + 24) = 0;
  }
  v37 = SdkRoutine_869550(a2 + 1, (char*)&v40 + 4, &v40, &v39);
  if (v37 != 0) {
    v38 = v37;
    SdkRoutine_869520(a1, *(_QWORD*)(v15 + 8));
    SdkRoutine_869520(a1, *(_QWORD*)(v15 + 32));
    SdkRoutine_869750(*(_QWORD*)(a1 + 128) + 16792LL, a1, v15);
    SdkRoutine_869750(*(_QWORD*)(a1 + 128) + 16792LL, a1, v17);
    *(_DWORD*)(a1 + 72) = v38;
    return v38;
  }
  else {
    *(_WORD*)a2[5] = (unsigned int)(HIDWORD(v40) + 0x8000) >> 16;
    *(_WORD*)(a2[5] + 2) = (unsigned int)(v40 + 0x8000) >> 16;
    *(_BYTE*)(a2[5] + 12) = 7;
    *(_WORD*)(a2[5] + 14) =
        (*((_DWORD*)a2 + 8) * (unsigned int)*(unsigned __int16*)(a1 + 112) +
         0x8000) >>
        16;
    SdkRoutine_869750(*(_QWORD*)(a1 + 128) + 16792LL, a1, v15);
    SdkRoutine_869750(*(_QWORD*)(a1 + 128) + 16792LL, a1, v17);
    *(_DWORD*)(a1 + 72) = 0;
    return 0;
  }
}

__int64 SdkHr_45a4e0(__int64* a1, _QWORD** a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  _QWORD* v19;
  _QWORD* v20;
  unsigned int v21;

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
  v20 = nullptr;
  *(_QWORD*)(v2 + 1256) = 16;
  v11 = a1 + 1;
  v9 = a1[1];
  v10 = v11[1];
  SdkRoutine_859a60(v7);
  v21 = 0;
  v12 = SdkRoutine_859a70(&v21, v9);
  if (v12 == 0) {
    v13 = SdkRoutine_45a7d0(v2 + 1200, &v20, v10, v21);
    SdkRoutine_859a80();
    v16 = v20;
    if (v13 != 0) {
      if (v20 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v19 = *a2;
      v20 = nullptr;
      *a2 = v16;
      if (v19 == nullptr) {
        return 0;
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v19 + 8LL))(
          (void*)v19, v19);
      v16 = v20;
      if (v20 == nullptr) {
      LABEL_11:
        if (v13 == 0) {
          return v13;
        }
        goto LABEL_12;
      }
    }
    (*(void (**)(_QWORD*))(*v16 + 8LL))(v16);
    goto LABEL_11;
  }
  v13 = v12;
  SdkRoutine_859a80();
LABEL_12:
  *(_QWORD*)(v2 + 1200) = v6 + 16;
  SdkRoutine_858b60(v2 + 1264);
  SdkRoutine_f3b00(v2 + 1200, 0);
  SdkRoutine_858b80(v2 + 1264);
  SdkRoutine_858b60(v2 + 8);
  v17 = *(_DWORD*)(v2 + 12) - 1;
  *(_DWORD*)(v2 + 12) = v17;
  if (v17 == 0) {
    SdkRoutine_85c340(*(_QWORD*)(*(_QWORD*)v2 + 152LL));
    *(_QWORD*)v2 = 0;
  }
  SdkRoutine_858b80(v2 + 8);
  return v13;
}

__int64 SdkHr_45a7d0(__int64 a1, __int64* a2, __int64 a3, unsigned int a4)
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
      v11 = SdkData_e88110;
      *(_QWORD*)(v10 + 48) = a3;
      *(_QWORD*)v10 = v11 + 16;
      *(_QWORD*)(v10 + 32) = v11 + 96;
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

__int64 SdkHr_461050(__int64 a1)
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

__int64 SdkHr_466b90(__int64 a1)
{
  __int64 result;

  result = *(unsigned int*)(a1 + 4);
  if ((_DWORD)result != 0) {
    result = SdkRoutine_85adb0(result);
    *(_DWORD*)(a1 + 4) = 0;
  }
  return result;
}

__int64 SdkHr_487f90(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[4];
  char* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD v11[2];
  _BYTE* v12;
  char** v13;

  SdkRoutine_4880b0();
  v2 = *a1;
  v7[0] = 0;
  v8 = (char*)a1 + 395;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 13;
  v10 = v2;
  SdkRoutine_488dc0();
  v3 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v8 = (char*)a1 + 394;
  v9 = a1 + 9;
  v10 = v3;
  SdkRoutine_488ee0();
  v4 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 5;
  v10 = v4;
  v8 = (char*)a1 + 393;
  SdkRoutine_489000(a1 + 5, a1 + 8, 0, v11);
  v5 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v8 = (char*)(a1 + 49);
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 1;
  v10 = v5;
  return SdkRoutine_489120(a1 + 1, a1 + 4, 0, v11);
}

__int64 SdkHr_4880b0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[4];
  char* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD v11[2];
  _BYTE* v12;
  char** v13;

  SdkRoutine_4881d0();
  v2 = *a1;
  v7[0] = 0;
  v8 = (char*)a1 + 399;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 29;
  v10 = v2;
  SdkRoutine_488980();
  v3 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v8 = (char*)a1 + 398;
  v9 = a1 + 25;
  v10 = v3;
  SdkRoutine_488a80();
  v4 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 21;
  v10 = v4;
  v8 = (char*)a1 + 397;
  SdkRoutine_488b80(a1 + 21, a1 + 24, 0, v11);
  v5 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v8 = (char*)a1 + 396;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 17;
  v10 = v5;
  return SdkRoutine_488ca0(a1 + 17, a1 + 20, 0, v11);
}

__int64 SdkHr_489340(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[4];
  char* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD v11[2];
  _BYTE* v12;
  char** v13;

  SdkRoutine_489460();
  v2 = *a1;
  v7[0] = 0;
  v8 = (char*)a1 + 300;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 17;
  v10 = v2;
  SdkRoutine_489980();
  v3 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v8 = (char*)a1 + 299;
  v9 = a1 + 13;
  v10 = v3;
  SdkRoutine_489a80();
  v4 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 9;
  v10 = v4;
  v8 = (char*)a1 + 298;
  SdkRoutine_489b80(a1 + 9, a1 + 12, 0, v11);
  v5 = *a1;
  v7[0] = 0;
  v11[0] = &v10;
  v11[1] = &v9;
  v8 = (char*)a1 + 297;
  v12 = v7;
  v13 = &v8;
  v9 = a1 + 5;
  v10 = v5;
  return SdkRoutine_489c80(a1 + 5, a1 + 8, 0, v11);
}

__int64 SdkHr_490bb0() { return SdkRoutine_2d0(); }

__int64 SdkHr_490e00(__int64 a1)
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
    SdkRoutine_858d40(&SdkData_f3f068);
    SdkRoutine_859af0(SdkData_f3f060, a1);
    return SdkRoutine_858d50(&SdkData_f3f068);
  }
  return result;
}

#pragma GCC visibility pop
