#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_734a80(_QWORD, _QWORD);
extern __int64 GameData_21f1628;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
__int64 Camera_1314ca0(__int64 a1);
__int64 Camera_1314db0(__int64 a1);
__int64 Camera_1315450(__int64 result);
bool Camera_1315550();
bool Camera_1315680();
__int64 Camera_13156b0();
__int64 Camera_13156f0();
__int64 Camera_1315960(__int64 a1, long double a2, long double a3);
__int64 Camera_Unknown7(long double a1, long double a2, __int64 a3, __int64 a4);

__int64 Camera_1314ca0(__int64 a1)
{
  float v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  int v7;
  float v8;

  v2 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 656) + 16LL))(a1 + 656);
  v3 = *(unsigned __int8*)(a1 + 720);
  v8 = v2;
  if (v3 == 1) {
    v4 = *(_QWORD*)(a1 + 696);
    v5 = a1 + 696;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(v4 + 24))(v5);
    *(_QWORD*)(a1 + 704) = 0;
    *(_WORD*)(a1 + 720) = 256;
    goto LABEL_6;
  }
  if (*(float*)(a1 + 704) > 0.0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 696) + 16LL))(a1 + 696);
    v4 = *(_QWORD*)(a1 + 696);
    v5 = a1 + 696;
    goto LABEL_5;
  }
  result = (*(__int64 (**)(__int64, float*, __int64))(
      *(_QWORD*)(a1 + 696) + 8LL))(a1 + 696, &v8, a1 + 728);
  if ((result & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 696) + 16LL))(a1 + 696);
    v4 = *(_QWORD*)(a1 + 696);
    v5 = a1 + 696;
    goto LABEL_5;
  }

LABEL_6:
  *(_BYTE*)(a1 + 964) = 1;
  *(_DWORD*)(a1 + 960) = 3;
  v7 = *(_DWORD*)(a1 + 920);
  *(_DWORD*)(a1 + 920) = v7 + 1;
  if (v7 == 0) {
    return (**(__int64 (***)(__int64))(a1 + 912))(a1 + 912);
  }
  return result;
}

__int64 Camera_1314db0(__int64 a1)
{
  int v2;
  float v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  float v8;

  v2 = *(_DWORD*)(a1 + 920) - 1;
  *(_DWORD*)(a1 + 920) = v2;
  if (v2 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 912) + 8LL))(a1 + 912);
  }
  v3 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 696) + 16LL))(a1 + 696);
  v4 = *(unsigned __int8*)(a1 + 680);
  v8 = v3;
  if (v4 == 1) {
    v5 = *(_QWORD*)(a1 + 656);
    v6 = a1 + 656;
  }
  else if (*(float*)(a1 + 664) <= 0.0) {
    result = (*(__int64 (**)(__int64, float*, __int64))(
        *(_QWORD*)(a1 + 656) + 8LL))(a1 + 656, &v8, a1 + 688);
    if ((result & 1) == 0) {
      goto LABEL_8;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 656) + 16LL))(a1 + 656);
    v5 = *(_QWORD*)(a1 + 656);
    v6 = a1 + 656;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 656) + 16LL))(a1 + 656);
    v5 = *(_QWORD*)(a1 + 656);
    v6 = a1 + 656;
  }
  result = (*(__int64 (**)(__int64))(v5 + 24))(v6);
  *(_QWORD*)(a1 + 664) = 0;
  *(_WORD*)(a1 + 680) = 256;

LABEL_8:
  *(_BYTE*)(a1 + 964) = 0;
  *(_DWORD*)(a1 + 960) = 1;
  return result;
}

__int64 Camera_1315450(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  long double v5;
  long double v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(float*)(result + 956) > 0.0) {
    v12 = v3;
    v13 = v1;
    v14 = v2;
    v4 = result;
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), result + 864);
    LODWORD(v6) = *(_DWORD*)(v4 + 884);
    v7 = *(unsigned __int8*)(v4 + 720);
    v11 = LODWORD(v6);
    if (v7 == 1) {
      v8 = *(_QWORD*)(v4 + 696);
      v9 = v4 + 696;
      LODWORD(v5) = LODWORD(v6);
    }
    else if (*(float*)(v4 + 704) <= 0.0) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(v4 + 696) + 8LL))(v4 + 696, &v11, v4 + 728);
      if ((result & 1) == 0) {
      LABEL_9:
        *(_DWORD*)(v4 + 944) = 0;
        *(_DWORD*)(v4 + 956) = 0;
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 696) + 16LL))(v4 + 696);
      v8 = *(_QWORD*)(v4 + 696);
      LODWORD(v5) = v11;
      v9 = v4 + 696;
    }
    else {
      v10 = LODWORD(v6);
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 696) + 16LL))(v4 + 696);
      v8 = *(_QWORD*)(v4 + 696);
      v9 = v4 + 696;
      LODWORD(v5) = v10;
    }
    result = (*(__int64 (**)(__int64, long double, long double))(v8 + 24))(
        v9, v6, v5);
    *(_QWORD*)(v4 + 704) = 0;
    *(_WORD*)(v4 + 720) = 256;
    goto LABEL_9;
  }
  return result;
}

bool Camera_1315550()
{
  return *(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 888LL) > 0.0;
}

bool Camera_1315680()
{
  return *(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 796LL) !=
         *(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 792LL);
}

__int64 Camera_13156b0()
{
  __int64 v0;
  int v1;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1628 + 16);
  v1 = *(_DWORD*)(v0 + 920);
  *(_DWORD*)(v0 + 920) = v1 + 1;
  if (v1 == 0) {
    return (**(__int64 (***)(__int64))(v0 + 912))(v0 + 912);
  }
  return result;
}

__int64 Camera_13156f0()
{
  __int64 v0;
  int v1;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1628 + 16);
  v1 = *(_DWORD*)(v0 + 920) - 1;
  *(_DWORD*)(v0 + 920) = v1;
  if (v1 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(v0 + 912) + 8LL))(v0 + 912);
  }
  return result;
}

__int64 Camera_1315960(__int64 a1, long double a2, long double a3)
{
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _DWORD* v9;
  __int64 result;
  int v11;
  int v12;
  int v13;

  LODWORD(a2) = *(_DWORD*)(a1 + 256);
  v3 = a1 + 736;
  *(_BYTE*)(a1 + 965) = 1;
  v5 = *(unsigned __int8*)(a1 + 760);
  v12 = LODWORD(a2);
  if (v5 == 1) {
    v6 = *(_QWORD*)(a1 + 736);
    v7 = a1 + 736;
    LODWORD(a3) = LODWORD(a2);
  LABEL_7:
    (*(void (**)(__int64, long double, long double))(v6 + 24))(v7, a2, a3);
    v9 = (_DWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 744) = 0;
    *(_WORD*)(a1 + 760) = 256;
    v13 = 1120403456;
  LABEL_8:
    result = (*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(a1 + 736) +
                                                      8LL))(v3, &v13, a1 + 768);
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_9;
  }
  if (*(float*)(a1 + 744) > 0.0) {
    v8 = LODWORD(a2);
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 736) + 16LL))(a1 + 736);
    v6 = *(_QWORD*)(a1 + 736);
    v7 = v3;
    LODWORD(a3) = v8;
    goto LABEL_7;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(a1 + 736) + 8LL))(
           a1 + 736, &v12, a1 + 768) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 736) + 16LL))(v3);
    v6 = *(_QWORD*)(a1 + 736);
    LODWORD(a3) = v12;
    v7 = v3;
    goto LABEL_7;
  }
  v11 = *(unsigned __int8*)(a1 + 760);
  v13 = 1120403456;
  if (v11 == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(a1 + 736) +
                                                     24LL))(v3, 100.0, 100.0);
    *(_DWORD*)(a1 + 744) = 0;
    goto LABEL_10;
  }
  v9 = (_DWORD*)(a1 + 744);
  if (*(float*)(a1 + 744) <= 0.5) {
    goto LABEL_8;
  }

LABEL_9:
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
  *v9 = 1056964608;

LABEL_10:
  *(_DWORD*)(a1 + 748) = 0;
  *(_WORD*)(a1 + 760) = 256;
  return result;
}

__int64 Camera_Unknown7(long double a1, long double a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64* v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 result;
  __int128 v33;

  v4 = *(int*)(a4 + 20);
  v5 = *(_QWORD*)(a4 + 8);
  v7 = v4 + 9;
  v8 = v4 + 10;
  *(_DWORD*)(a4 + 20) = v4 + 1;
  v9 = *(unsigned __int8*)(v5 + v4);
  *(_DWORD*)(a4 + 20) = v4 + 2;
  v10 = *(unsigned __int8*)(v5 + v4 + 1);
  *(_DWORD*)(a4 + 20) = v4 + 3;
  v11 = *(unsigned __int8*)(v5 + v4 + 2);
  *(_DWORD*)(a4 + 20) = v4 + 4;
  v12 = *(unsigned __int8*)(v5 + v4 + 3);
  *(_DWORD*)(a4 + 20) = v4 + 5;
  v13 = *(unsigned __int8*)(v5 + v4 + 4);
  *(_DWORD*)(a4 + 20) = v4 + 6;
  v14 = *(unsigned __int8*)(v5 + v4 + 5);
  *(_DWORD*)(a4 + 20) = v4 + 7;
  v15 = *(unsigned __int8*)(v5 + v4 + 6);
  *(_DWORD*)(a4 + 20) = v4 + 8;
  v16 = *(unsigned __int8*)(v5 + v4 + 7);
  *(_DWORD*)(a4 + 20) = v4 + 9;
  v17 = *(unsigned __int8*)(v5 + v4 + 8);
  *(_DWORD*)(a4 + 20) = v4 + 10;
  v18 = v4 + 11;
  v19 = v4 + 12;
  v20 = *(unsigned __int8*)(v5 + v7);
  *(_DWORD*)(a4 + 20) = v18;
  v21 = *(unsigned __int8*)(v5 + v8);
  *(_DWORD*)(a4 + 20) = v19;
  v22 = GameData_212d718;
  v23 = *(_QWORD*)(*GameData_212d718 + 16);
  if ((*(_BYTE*)(v23 + 966) & 1) == 0) {
    LODWORD(v24) = v9 | (v10 << 8) | (v11 << 16) | (v12 << 24);
    DWORD1(v24) = v13 | (v14 << 8) | (v15 << 16) | (v16 << 24);
    *((_QWORD*)&v24 + 1) =
        v17 | (v20 << 8) | (v21 << 16) | (*(unsigned __int8*)(v5 + v18) << 24);
    v33 = v24;
    GameRoutine_734a80(v23 + 784, &v33);
    v19 = *(_DWORD*)(a4 + 20);
    v23 = *(_QWORD*)(*v22 + 16);
    v5 = *(_QWORD*)(a4 + 8);
  }
  v25 = v19 + 1LL;
  v26 = v19 + 2LL;
  *(_DWORD*)(a4 + 20) = v25;
  v27 = *(unsigned __int8*)(v5 + v19);
  *(_DWORD*)(a4 + 20) = v26;
  v28 = v19 + 3LL;
  LODWORD(v25) = *(unsigned __int8*)(v5 + v25);
  *(_DWORD*)(a4 + 20) = v28;
  LODWORD(v25) =
      v27 | ((_DWORD)v25 << 8) | (*(unsigned __int8*)(v5 + v26) << 16);
  *(_DWORD*)(a4 + 20) = v19 + 4;
  LODWORD(v33) = v25 | (*(unsigned __int8*)(v5 + v28) << 24);
  LODWORD(a1) = v33;
  if (*(_BYTE*)(v23 + 680) == 1) {
    v29 = *(_QWORD*)(v23 + 656);
    v30 = v23 + 656;
    LODWORD(a2) = v33;
  }
  else if (*(float*)(v23 + 664) <= 0.0) {
    result = (*(__int64 (**)(__int64, __int128*, __int64, float))(
        *(_QWORD*)(v23 + 656) + 8LL))(v23 + 656, &v33, v23 + 688,
                                      *(float*)&v33);
    if ((result & 1) == 0) {
      return result;
    }
    (*(void (**)(__int64))(*(_QWORD*)(v23 + 656) + 16LL))(v23 + 656);
    v29 = *(_QWORD*)(v23 + 656);
    LODWORD(a2) = v33;
    v30 = v23 + 656;
  }
  else {
    v31 = v33;
    (*(void (**)(__int64))(*(_QWORD*)(v23 + 656) + 16LL))(v23 + 656);
    v29 = *(_QWORD*)(v23 + 656);
    v30 = v23 + 656;
    LODWORD(a2) = v31;
  }
  result = (*(__int64 (**)(__int64, long double, long double))(v29 + 24))(
      v30, a1, a2);
  *(_QWORD*)(v23 + 664) = 0;
  *(_WORD*)(v23 + 680) = 256;
  return result;
}

#pragma GCC visibility pop
