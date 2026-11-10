#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5634c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5645a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5646e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_564920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_564b00(void);
__int64 GameRoutine_564c80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_564f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ScalableFont_5603e0(__int64 a1, __int64 a2);
__int64 ScalableFont_Unknown12(__int64 a1);
__int64 ScalableFont_Unknown14(__int64 result, __int16* a2);
__int64 ScalableFont_Unknown15(__int64 a1, unsigned int a2);
__int64 ScalableFont_Unknown16(__int64 a1, unsigned int a2);
__int64 ScalableFont_Unknown17(__int64 a1, unsigned int a2);
unsigned __int64 ScalableFont_Unknown18(__int64 a1, unsigned int a2);
__int64 ScalableFont_Unknown19(__int64 a1, __int64 a2, unsigned int a3);
__int64 ScalableFont_Unknown20(__int64 a1, __int64 a2);
__int64 ScalableFont_Unknown23(__int64 a1, __int64 a2, __int64 a3);
__int64 ScalableFont_Unknown35(__int64 a1);
__int64 ScalableFont_Unknown36(__int64 a1, __int64 a2, unsigned int a3);
__int64 ScalableFont_Unknown7(__int64 a1);

__int64 ScalableFont_5603e0(__int64 a1, __int64 a2)
{
  __int64 result;
  float* v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __int64 vars10;
  __int64 _18;

  result = *(_QWORD*)a2;
  if (*(_QWORD*)a2 != 0) {
    *(_QWORD*)(a1 + 16) = result;
    *(_DWORD*)(a1 + 24) = *(_DWORD*)(a2 + 8);
    *(_WORD*)(a1 + 50) = *(_WORD*)(a2 + 12);
    v5 = (float*)GameRoutine_564b00();
    v6 = *(_DWORD*)(a1 + 24);
    *(_DWORD*)(a1 + 32) = (int)(float)((float)(*v5 * (float)v6) + 0.5);
    v7 = (int)(float)((float)(v5[1] * (float)v6) + 0.5);
    *(_DWORD*)(a1 + 28) = v7;
    *(_DWORD*)(a1 + 36) = (int)(float)((float)(v5[2] * (float)v6) + 0.5);
    v8 = *(_DWORD*)(a2 + 20);
    *(_BYTE*)(a1 + 44) = 0;
    *(_BYTE*)(a1 + 45) = v6;
    *(_BYTE*)(a1 + 46) = v6;
    *(_DWORD*)(a1 + 40) = v8 + v7;
    if (*(_BYTE*)(a2 + 14) == 1) {
      *(_BYTE*)(a1 + 47) = 0;
      v9 = 32;
    }
    else {
      v10 = *(unsigned __int8*)(a2 + 15);
      if (v10 != 1) {
        LOBYTE(v10) = 2;
      }
      *(_BYTE*)(a1 + 47) = v10;
      v9 = *(_DWORD*)(a2 + 16);
    }
    *(_DWORD*)(a1 + 52) = v9;
    *(_BYTE*)(a1 + 48) = *(_BYTE*)(a2 + 24);
    vars10 = _18;
    GameRoutine_5634c0(*(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 52),
                       *(unsigned int*)(a1 + 24), *(unsigned __int16*)(a1 + 50),
                       0xFFFFFFFFLL, *(unsigned __int8*)(a1 + 48));
    result = GameRoutine_564920(*(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 52),
                                *(unsigned int*)(a1 + 24),
                                *(unsigned __int16*)(a1 + 50));
    *(_BYTE*)(result + 56) |= 0x20u;
    if (*(_BYTE*)(a1 + 47) == 1) {
      GameRoutine_5634c0(*(_QWORD*)(a1 + 16), 32, *(unsigned int*)(a1 + 24),
                         *(unsigned __int16*)(a1 + 50), 0xFFFFFFFFLL,
                         *(unsigned __int8*)(a1 + 48));
      result =
          GameRoutine_564920(*(_QWORD*)(a1 + 16), 32, *(unsigned int*)(a1 + 24),
                             *(unsigned __int16*)(a1 + 50));
      if (result != 0) {
        result = GameRoutine_564920(*(_QWORD*)(a1 + 16), 32,
                                    *(unsigned int*)(a1 + 24),
                                    *(unsigned __int16*)(a1 + 50));
        *(_BYTE*)(result + 56) |= 0x20u;
      }
    }
  }
  return result;
}

__int64 ScalableFont_Unknown7(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(a1 + 28) - *(_DWORD*)(a1 + 32));
}

__int64 ScalableFont_Unknown12(__int64 a1)
{
  return *(unsigned __int16*)(a1 + 44) | (*(unsigned __int8*)(a1 + 46) << 16);
}

__int64 ScalableFont_Unknown14(__int64 result, __int16* a2)
{
  __int16 v2;

  v2 = *a2;
  *(_BYTE*)(result + 46) = *((_BYTE*)a2 + 2);
  *(_WORD*)(result + 44) = v2;
  return result;
}

__int64 ScalableFont_Unknown15(__int64 a1, unsigned int a2)
{
  unsigned int v2;

  if (((a2 == 8209) & *(_BYTE*)(a1 + 48)) != 0) {
    v2 = 45;
  }
  else {
    v2 = a2;
  }
  if (*(_BYTE*)(a1 + 47) == 0 ||
      (GameRoutine_5645a0(*(_QWORD*)(a1 + 16), v2,
                          *(unsigned __int16*)(a1 + 50)) &
       1) == 0) {
    return 0;
  }
  *(_DWORD*)(a1 + 52) = v2;
  return 1;
}

__int64 ScalableFont_Unknown16(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  bool v8;

  v2 = *(_BYTE*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 16);
  if (((a2 == 8209) & v2) != 0) {
    v5 = 45;
  }
  else {
    v5 = a2;
  }
  v6 = GameRoutine_564920(v4, v5, *(unsigned int*)(a1 + 24),
                          *(unsigned __int16*)(a1 + 50));
  if (v6 != 0 && (*(_BYTE*)(v6 + 56) & 0x42) == 0) {
    return *(unsigned __int16*)(v6 + 76);
  }
  if (*(_BYTE*)(a1 + 47) != 2 &&
      (GameRoutine_5645a0(*(_QWORD*)(a1 + 16), v5,
                          *(unsigned __int16*)(a1 + 50)) &
       1) != 0) {
    return GameRoutine_564c80(*(_QWORD*)(a1 + 16), v5,
                              *(unsigned int*)(a1 + 24),
                              *(unsigned __int16*)(a1 + 50));
  }
  v7 = GameRoutine_564920(*(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 52),
                          *(unsigned int*)(a1 + 24),
                          *(unsigned __int16*)(a1 + 50));
  v8 = v7 != 0 || *(_BYTE*)(a1 + 47) == 2;
  if (v8 || (GameRoutine_5645a0(*(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 52),
                                *(unsigned __int16*)(a1 + 50)) &
             1) == 0) {
    return *(unsigned __int16*)(v7 + 76);
  }
  else {
    return GameRoutine_564c80(*(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 52),
                              *(unsigned int*)(a1 + 24),
                              *(unsigned __int16*)(a1 + 50));
  }
}

__int64 ScalableFont_Unknown17(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2;
  __int64 v4;
  unsigned int v5;
  _BYTE* v6;
  int v7;
  unsigned __int8 v8;
  unsigned __int8 v9;

  v2 = *(_BYTE*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 16);
  if (((a2 == 8209) & v2) != 0) {
    v5 = 45;
  }
  else {
    v5 = a2;
  }
  v6 = (_BYTE*)GameRoutine_564920(v4, v5, *(unsigned int*)(a1 + 24),
                                  *(unsigned __int16*)(a1 + 50));
  if (v6 != nullptr && (v6[56] & 0x42) == 0) {
    goto LABEL_10;
  }
  if (*(_BYTE*)(a1 + 47) == 2 ||
      (GameRoutine_5645a0(*(_QWORD*)(a1 + 16), v5,
                          *(unsigned __int16*)(a1 + 50)) &
       1) == 0) {
    v6 = (_BYTE*)GameRoutine_564920(
        *(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 52),
        *(unsigned int*)(a1 + 24), *(unsigned __int16*)(a1 + 50));
  LABEL_10:
    v8 = v6[78];
    v9 = v6[72];
    v7 = (unsigned __int8)v6[76];
    return (v7 << 16) | (v9 << 8) | (unsigned int)v8;
  }
  v7 = GameRoutine_564c80(*(_QWORD*)(a1 + 16), v5, *(unsigned int*)(a1 + 24),
                          *(unsigned __int16*)(a1 + 50));
  v8 = 0;
  v9 = v7;
  return (v7 << 16) | (v9 << 8) | (unsigned int)v8;
}

unsigned __int64 ScalableFont_Unknown18(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;

  v2 = *(_BYTE*)(a1 + 48);
  v4 = *(_QWORD*)(a1 + 16);
  if (((a2 == 8209) & v2) != 0) {
    v5 = 45;
  }
  else {
    v5 = a2;
  }
  v6 = GameRoutine_564920(v4, v5, *(unsigned int*)(a1 + 24),
                          *(unsigned __int16*)(a1 + 50));
  if (v6 != 0 && (*(_BYTE*)(v6 + 56) & 0x42) == 0) {
    goto LABEL_10;
  }
  if (*(_BYTE*)(a1 + 47) == 2 ||
      (GameRoutine_5645a0(*(_QWORD*)(a1 + 16), v5,
                          *(unsigned __int16*)(a1 + 50)) &
       1) == 0) {
    v6 = GameRoutine_564920(*(_QWORD*)(a1 + 16), *(unsigned int*)(a1 + 52),
                            *(unsigned int*)(a1 + 24),
                            *(unsigned __int16*)(a1 + 50));
  LABEL_10:
    v8 = *(unsigned __int16*)(v6 + 78);
    v9 = *(unsigned __int16*)(v6 + 72);
    v7 = *(unsigned __int16*)(v6 + 76);
    return (unsigned int)(v9 << 16) | (unsigned __int64)(v7 << 32) | v8;
  }
  v7 = GameRoutine_564c80(*(_QWORD*)(a1 + 16), v5, *(unsigned int*)(a1 + 24),
                          *(unsigned __int16*)(a1 + 50));
  v8 = 0;
  v9 = v7;
  return (unsigned int)(v9 << 16) | (unsigned __int64)(v7 << 32) | v8;
}

__int64 ScalableFont_Unknown19(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 v3;
  __int64 v5;
  unsigned int v7;
  __int64 v8;
  char v9;
  unsigned int v10;
  __int16 v11;
  unsigned int v12;
  __int16 v13;
  __int64 v14;

  v3 = *(_BYTE*)(a1 + 48);
  v5 = *(_QWORD*)(a1 + 16);
  if (((a3 == 8209) & v3) != 0) {
    v7 = 45;
  }
  else {
    v7 = a3;
  }
  v8 = GameRoutine_564920(v5, v7, *(unsigned int*)(a1 + 24),
                          *(unsigned __int16*)(a1 + 50));
  if (v8 != 0 && (*(_BYTE*)(v8 + 56) & 0x42) == 0 &&
      ((*(_BYTE*)(v8 + 56) & 0x35) != 0 || *(_DWORD*)(v8 + 60) != 0)) {
    v10 = 0;
  LABEL_18:
    v11 = *(_WORD*)(v8 + 76);
    goto LABEL_19;
  }
  v9 = GameRoutine_5645a0(*(_QWORD*)(a1 + 16), v7,
                          *(unsigned __int16*)(a1 + 50));
  if ((v9 & 1) != 0) {
    v10 = 1;
  }
  else {
    v10 = 2;
  }
  if ((v9 & 1) == 0 || *(_BYTE*)(a1 + 47) == 2) {
    v12 = *(_DWORD*)(a1 + 52);
    v8 = GameRoutine_564920(*(_QWORD*)(a1 + 16), v12, *(unsigned int*)(a1 + 24),
                            *(unsigned __int16*)(a1 + 50));
    if (v8 == 0) {
      v8 = GameRoutine_5646e0(*(_QWORD*)(a1 + 16), v12,
                              *(unsigned int*)(a1 + 24));
    }
    goto LABEL_18;
  }
  v11 = GameRoutine_564c80(*(_QWORD*)(a1 + 16), v7, *(unsigned int*)(a1 + 24),
                           *(unsigned __int16*)(a1 + 50));
  v8 = GameRoutine_564920(*(_QWORD*)(a1 + 16), 32, *(unsigned int*)(a1 + 24),
                          *(unsigned __int16*)(a1 + 50));
  if (v8 == 0) {
    v8 = GameRoutine_5646e0(*(_QWORD*)(a1 + 16), 32, *(unsigned int*)(a1 + 24));
  }

LABEL_19:
  *(_WORD*)(a2 + 8) = *(_WORD*)(v8 + 78);
  v13 = *(_WORD*)(v8 + 72);
  *(_WORD*)(a2 + 12) = v11;
  *(_WORD*)(a2 + 10) = v13;
  *(_WORD*)(a2 + 14) = *(_WORD*)(v8 + 68);
  *(_WORD*)(a2 + 16) = *(_WORD*)(v8 + 74) + 1;
  *(_WORD*)(a2 + 18) = *(_WORD*)(v8 + 70) + 1;
  *(_WORD*)(a2 + 24) = *(_WORD*)(v8 + 64) + 1;
  *(_WORD*)(a2 + 26) = *(_WORD*)(v8 + 66);
  v14 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  *(_WORD*)(a2 + 42) = 0;
  *(_BYTE*)(a2 + 40) = 0;
  *(_QWORD*)a2 = v14;
  *(_WORD*)(a2 + 28) = 8;
  *(_WORD*)(a2 + 20) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 40LL);
  *(_WORD*)(a2 + 22) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 44LL);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 16) + 7848LL;
  *(_WORD*)(a2 + 44) = *(_WORD*)(v8 + 80) - *(_WORD*)(a1 + 36);
  *(_BYTE*)(v8 + 56) |= 4u;
  return v10;
}

__int64 ScalableFont_Unknown20(__int64 a1, __int64 a2)
{
  __int64 result;

  if ((((_DWORD)a2 == 8209) & *(_BYTE*)(a1 + 48)) != 0) {
    a2 = 45;
  }
  else {
    a2 = (unsigned int)a2;
  }
  result =
      GameRoutine_564920(*(_QWORD*)(a1 + 16), a2, *(unsigned int*)(a1 + 24),
                         *(unsigned __int16*)(a1 + 50));
  if (result != 0) {
    if ((*(_BYTE*)(result + 56) & 0x42) != 0) {
      return 0;
    }
    else {
      return (*(_BYTE*)(result + 56) & 0x35) != 0 ||
             *(_DWORD*)(result + 60) != 0;
    }
  }
  return result;
}

__int64 ScalableFont_Unknown23(__int64 a1, __int64 a2, __int64 a3)
{
  if (*(_BYTE*)(a1 + 8) != 1) {
    return 0;
  }
  if ((((_DWORD)a3 == 8209) & *(_BYTE*)(a1 + 48)) != 0) {
    a3 = 45;
  }
  else {
    a3 = (unsigned int)a3;
  }
  if ((((_DWORD)a2 == 8209) & *(_BYTE*)(a1 + 48)) != 0) {
    a2 = 45;
  }
  else {
    a2 = (unsigned int)a2;
  }
  return GameRoutine_564f80(*(_QWORD*)(a1 + 16), a2, a3,
                            *(unsigned int*)(a1 + 24),
                            *(unsigned __int16*)(a1 + 50));
}

__int64 ScalableFont_Unknown35(__int64 a1)
{
  __int64 result;
  unsigned __int16 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  unsigned int v8;

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    v3 = *(_WORD*)(a1 + 50);
    v4 = result + v3;
    if (*(_BYTE*)(v4 + 6280) != 0) {
      v5 = *(_QWORD*)(result + 7168);
      v6 = *(unsigned __int8*)(v4 + 6280) - 1LL;
      v7 = *(unsigned __int8**)(result + 8LL * v3 + 6312);
      do {
        v8 = *v7++;
        result = *(_BYTE*)(v5 + v8) != 0;
      } while (*(_BYTE*)(v5 + v8) == 0 && v6-- != 0);
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 ScalableFont_Unknown36(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5;
  __int16 v6;
  __int64 result;
  unsigned int v8;
  __int16 v9;
  __int64 v10;

  if (((a3 == 8209) & *(_BYTE*)(a1 + 48)) != 0) {
    v5 = 45;
  }
  else {
    v5 = a3;
  }
  if (*(_BYTE*)(a1 + 47) == 2 ||
      (GameRoutine_5645a0(*(_QWORD*)(a1 + 16), v5,
                          *(unsigned __int16*)(a1 + 50)) &
       1) == 0) {
    v8 = *(_DWORD*)(a1 + 52);
    result =
        GameRoutine_564920(*(_QWORD*)(a1 + 16), v8, *(unsigned int*)(a1 + 24),
                           *(unsigned __int16*)(a1 + 50));
    if (result == 0) {
      result = GameRoutine_5646e0(*(_QWORD*)(a1 + 16), v8,
                                  *(unsigned int*)(a1 + 24));
    }
    v6 = *(_WORD*)(result + 76);
  }
  else {
    v6 = GameRoutine_564c80(*(_QWORD*)(a1 + 16), v5, *(unsigned int*)(a1 + 24),
                            *(unsigned __int16*)(a1 + 50));
    result =
        GameRoutine_564920(*(_QWORD*)(a1 + 16), 32, *(unsigned int*)(a1 + 24),
                           *(unsigned __int16*)(a1 + 50));
    if (result == 0) {
      result = GameRoutine_5646e0(*(_QWORD*)(a1 + 16), 32,
                                  *(unsigned int*)(a1 + 24));
    }
  }
  *(_WORD*)(a2 + 8) = *(_WORD*)(result + 78);
  v9 = *(_WORD*)(result + 72);
  *(_WORD*)(a2 + 12) = v6;
  *(_WORD*)(a2 + 10) = v9;
  *(_WORD*)(a2 + 14) = *(_WORD*)(result + 68);
  *(_WORD*)(a2 + 16) = *(_WORD*)(result + 74) + 1;
  *(_WORD*)(a2 + 18) = *(_WORD*)(result + 70) + 1;
  *(_WORD*)(a2 + 24) = *(_WORD*)(result + 64) + 1;
  *(_WORD*)(a2 + 26) = *(_WORD*)(result + 66);
  v10 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  *(_WORD*)(a2 + 42) = 0;
  *(_BYTE*)(a2 + 40) = 0;
  *(_QWORD*)a2 = v10;
  *(_WORD*)(a2 + 28) = 8;
  *(_WORD*)(a2 + 20) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 40LL);
  *(_WORD*)(a2 + 22) = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 44LL);
  *(_QWORD*)(a2 + 32) = *(_QWORD*)(a1 + 16) + 7848LL;
  *(_WORD*)(a2 + 44) = *(_WORD*)(result + 80) - *(_WORD*)(a1 + 36);
  *(_BYTE*)(result + 56) |= 4u;
  return result;
}

#pragma GCC visibility pop
