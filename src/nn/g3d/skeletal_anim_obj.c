#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5e9560(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5f1520(__int64, __int64);
__int64 GameRoutine_5f1900(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_21365e0;
extern __int64 (**GameData_21365d8)();
__int64 SkeletalAnimObj_Unknown4(__int64 a1, __int64 a2);
__int64 SkeletalAnimObj_Unknown5(__int64 a1, __int64 a2);
__int64 SkeletalAnimObj_5f1840(__int64 a1, __int64 a2);
__int64 SkeletalAnimObj_Unknown2(__int64 result);
float SkeletalAnimObj_Unknown3(__int64 a1, __int64 a2);
__int64 MaterialAnimObj_5dfe60(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 SkeletalAnimObj_5f1520(__int64 a1, __int64 a2);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
float GameRoutine_5f6ef0(float, float, float, float);
float SkeletalAnimObj_5f6770(__int64 a1, int a2, float result);
float SkeletalAnimObj_5f6870(__int64 a1, int a2, float result);
float SkeletalAnimObj_5f6950(__int64 a1, int a2, float result);
float SkeletalAnimObj_5f6ab0(__int64 a1, int a2, float result);
float SkeletalAnimObj_5f6c10(__int64 a1, int a2, float result);
float SkeletalAnimObj_5f6da0(__int64 a1, int a2, float result);
float SkeletalAnimObj_5f7690(float* a1, float a2, float a3, float a4);
__int64
MaterialAnimObj_5dfe60_alt1(__int64 result,
                            unsigned __int16) __asm__("MaterialAnimObj_5dfe60");
__int64 MaterialAnimObj_5dff40(__int64 result, __int64);
extern __int64 (**ModelAnimObj_Unknown9_ptr_ptr)();
__int64 SkeletalAnimObj_Unknown6(__int64 a1, __int64 a2);

__int64 SkeletalAnimObj_5f1520(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int16* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  bool v21;
  __int64 v22;
  __int64 v23;

  MaterialAnimObj_5dfe60(a1 + 88, *(unsigned __int16*)(a2 + 56));
  v4 = *(unsigned __int16*)(a1 + 100);
  if (*(_WORD*)(a1 + 100) != 0) {
    v5 = *(_QWORD*)(a2 + 8);
    if (v5 != 0) {
      v6 = 0;
      v7 = 0;
    LABEL_4:
      v8 = *(_QWORD*)(*(_QWORD*)(a1 + 112) + 56 * v6) + 2LL;
      v9 = strlen(v8);
      v10 = v5 + 8;
      v11 = *(unsigned __int16*)(v5 + 12);
      v12 = v5 + 8 + 16 * v11;
      v13 = *(_DWORD*)v12;
      if (*(_DWORD*)(v5 + 8) < *(_DWORD*)v12) {
        do {
          v15 = (__int64)v13 >> 3;
          if (v9 > v15) {
            v14 = (*(unsigned __int8*)(v8 + v9 + ~v15) >> (v13 & 7)) & 1;
          }
          else {
            v14 = 0;
          }
          v11 = *(unsigned __int16*)(v5 + 12 + 16 * v11 + 2 * v14);
          v21 = v13 < *(_DWORD*)(v10 + 16 * v11);
          v13 = *(_DWORD*)(v10 + 16 * v11);
        } while (v21);
        v12 = v10 + 16 * v11;
      }
      v16 = *(unsigned __int16**)(v12 + 8);
      if (v9 != *v16 || (unsigned int)memcmp(v16 + 1, v8, v9) != 0 ||
          (v17 = v12 - v5 - 24, v18 = v17 >> 4,
           ((v17 >> 4) & 0x80000000) != 0)) {
        while (1) {
          ++v6;
          v7 |= 0x10000u;
          if (v6 == v4) {
            break;
          }
        LABEL_17:
          v5 = *(_QWORD*)(a2 + 8);
          if (v5 != 0) {
            goto LABEL_4;
          }
        }
      }
      else {
        v19 = (v17 >> 2) & 0x1FFFFFFFCLL;
        *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v6) &= 0x3FFF8000u;
        *(_DWORD*)(*(_QWORD*)(a1 + 88) + 4 * v6) |= v18 & 0x7FFF;
        *(_DWORD*)(*(_QWORD*)(a1 + 88) + v19) &= 0xC0007FFF;
        *(_DWORD*)(*(_QWORD*)(a1 + 88) + v19) |= (v6++ & 0x7FFF) << 15;
        v7 |= 1u;
        if (v6 != v4) {
          goto LABEL_17;
        }
      }
    }
    else {
      v7 = 0x10000;
    }
  }
  else {
    v7 = 0;
  }
  *(_WORD*)(a1 + 96) |= 1u;
  v20 = *(_DWORD*)(a1 + 60);
  v21 = v20 >= 1 && v20 <= *(_DWORD*)(a1 + 56);
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v21) {
    v22 = 0;
    v23 = 0;
    do {
      ++v23;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v22) = 2139095040;
      v22 += 12;
    } while (v23 < *(int*)(a1 + 60));
  }
  return v7;
}

__int64 SkeletalAnimObj_Unknown4(__int64 a1, __int64 a2)
{
  __int64 v2;
  unsigned int v4;
  unsigned int v5;

  v2 = *(_QWORD*)(a2 + 24);
  v4 = *(_DWORD*)(a1 + 124) & 0xFFFFFFFC;
  *(_QWORD*)(a1 + 136) = v2;
  *(_DWORD*)(a1 + 124) = v4;
  v5 = GameRoutine_5f1520(a1, v2);
  ((void (*)(__int64,
             __int64))GameData_21365d8[2 * (*(_DWORD*)(a1 + 124) & 3)])(a1, v2);
  return v5;
}

__int64 SkeletalAnimObj_Unknown5(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;

  v3 = **(_QWORD**)(a2 + 32);
  v4 = *(_DWORD*)(a1 + 124) & 0xFFFFFFFC;
  *(_QWORD*)(a1 + 136) = v3;
  *(_DWORD*)(a1 + 124) = v4;
  v5 = GameRoutine_5f1520(a1, v3);
  ((void (*)(__int64,
             __int64))GameData_21365d8[2 * (*(_DWORD*)(a1 + 124) & 3)])(a1, v3);
  return v5;
}

__int64 SkeletalAnimObj_5f1840(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;

  v2 = *(_QWORD*)a2;
  v3 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a1 + 136) = *(_QWORD*)a2;
  v6 = GameRoutine_5f1520(a1, v2);
  v7 = *(_DWORD*)(a1 + 124) & 0xFFFFFFFD | (2 * (*(_BYTE*)(a2 + 17) & 1));
  *(_DWORD*)(a1 + 124) = v7;
  if (v2 == v3 || (*(_BYTE*)(a2 + 16) & 1) == 0) {
    v9 = v7 & 0xFFFFFFFE;
    *(_DWORD*)(a1 + 124) = v9;
  }
  else {
    *(_DWORD*)(a1 + 124) = v7 | 1;
    v8 = GameRoutine_5f1900(a1, v2, v3);
    v9 = *(_DWORD*)(a1 + 124);
    v6 = v8;
  }
  ((void (*)(__int64, __int64))GameData_21365d8[2 * (v9 & 3)])(a1, v2);
  return v6;
}

__int64 SkeletalAnimObj_Unknown6(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int16 v4;
  long double v5;
  int v6;
  int v7;
  bool v8;
  bool v9;
  bool v10;
  __int64 v11;
  __int64 v12;

  v2 = *(_QWORD*)(a2 + 24);
  *(_DWORD*)(a1 + 124) &= 0xFFFFFFFC;
  MaterialAnimObj_5dfe60_alt1(a1 + 88, *(_WORD*)(v2 + 56));
  MaterialAnimObj_5dff40(a1 + 88, *(_QWORD*)(*(_QWORD*)(a1 + 104) + 32LL));
  v4 = *(_WORD*)(a1 + 96);
  *(_QWORD*)(a1 + 136) = v2;
  *(_WORD*)(a1 + 96) = v4 | 1;
  LODWORD(v5) = 2139095040;
  v7 = *(_DWORD*)(a1 + 56);
  v6 = *(_DWORD*)(a1 + 60);
  if (v6 >= 1) {
    v10 = __OFSUB__(v6, v7);
    v8 = v6 == v7;
    v9 = v6 - v7 < 0;
  }
  else {
    v10 = false;
    v8 = false;
    v9 = false;
  }
  *(_DWORD*)(a1 + 64) = 2139095040;
  if (v9 ^ v10 | v8) {
    v11 = 0;
    v12 = 0;
    do {
      ++v12;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v11) = 2139095040;
      v11 += 12;
    } while (v12 < *(int*)(a1 + 60));
  }
  return ((__int64 (*)(__int64, __int64, long double))
              ModelAnimObj_Unknown9_ptr_ptr[2 * (*(_DWORD*)(a1 + 124) & 3)])(
      a1, v2, v5);
}

__int64 SkeletalAnimObj_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (*(_WORD*)(result + 100) != 0) {
    v1 = *(_QWORD*)(result + 72);
    v2 = result;
    v3 = 0;
    v4 = 56LL * *(unsigned __int16*)(result + 100);
    do {
      result = GameRoutine_5e9560(*(_QWORD*)(v2 + 112) + v3, v1, 0);
      v1 += 48;
      v3 += 56;
    } while (v4 != v3);
  }
  return result;
}

float SkeletalAnimObj_Unknown3(__int64 a1, __int64 a2)
{
  float result;
  float* v4;

  result = *(float*)(a1 + 64);
  if (result != **(float**)(a1 + 8)) {
    (*((void (**)(__int64, __int64))GameData_21365e0 +
       2 * (*(_DWORD*)(a1 + 124) & 3)))(a1, a2);
    v4 = *(float**)(a1 + 8);
    result = *v4;
    *(float*)(a1 + 64) = *v4;
  }
  return result;
}

float SkeletalAnimObj_5f6770(__int64 a1, int a2, float result)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int64 v4;
  float v5;
  float* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  HIDWORD(v4) = a2;
  LODWORD(v4) = a2;
  v3 = v4 >> 20;
  if (v3 == 3) {
    v6 = (float*)(a1 + 32);
    v7 = *(float*)(a1 + 32);
    if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
      v8 = GameRoutine_5f6ef0(v7, *(float*)(a1 + 36), *(float*)(a1 + 40),
                              *(float*)(a1 + 44)),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      return SkeletalAnimObj_5f7690(v6, v8 + 0x1.921fb60000000p+1f, -v9, -v10);
    }
    else {
      v11 = *(float*)(a1 + 40);
      v12 = -*(float*)(a1 + 36);
      *(float*)(a1 + 32) = v7 + 0x1.921fb60000000p+1f;
      *(float*)(a1 + 36) = v12;
      *(float*)(a1 + 40) = -v11;
      return -v11;
    }
  }
  else if (v3 == 0) {
    result = -*(float*)(a1 + 36);
    v5 = -*(float*)(a1 + 40);
    *(float*)(a1 + 36) = result;
    *(float*)(a1 + 40) = v5;
  }
  return result;
}

float SkeletalAnimObj_5f6870(__int64 a1, int a2, float result)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int64 v4;
  float v5;
  float* v6;
  float v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w"));
  HIDWORD(v4) = a2;
  LODWORD(v4) = a2;
  v3 = v4 >> 20;
  if (v3 == 4) {
    v12 = 24;
    v13 = -*(float*)(a1 + 20);
    *(float*)(a1 + 16) = -*(float*)(a1 + 16);
    *(float*)(a1 + 20) = v13;
  }
  else {
    if (v3 == 3) {
      v6 = (float*)(a1 + 32);
      v7 = *(float*)(a1 + 32);
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v8 = a1;
        v9 = GameRoutine_5f6ef0(v7, *(float*)(a1 + 36), *(float*)(a1 + 40),
                                *(float*)(a1 + 44)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w"));
        SkeletalAnimObj_5f7690(v6, v9 + 0x1.921fb60000000p+1f, -v10, -v11),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w"));
        a1 = v8;
      }
      else {
        v14 = *(float*)(a1 + 40);
        v15 = -*(float*)(a1 + 36);
        *(float*)(a1 + 32) = v7 + 0x1.921fb60000000p+1f;
        *(float*)(a1 + 36) = v15;
        *(float*)(a1 + 40) = -v14;
      }
    }
    else {
      if (v3 != 0) {
        return result;
      }
      v5 = -*(float*)(a1 + 40);
      *(float*)(a1 + 36) = -*(float*)(a1 + 36);
      *(float*)(a1 + 40) = v5;
    }
    v12 = 16;
  }
  result = -*(float*)(a1 + v12);
  *(float*)(a1 + v12) = result;
  return result;
}

float SkeletalAnimObj_5f6950(__int64 a1, int a2, float result)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int64 v4;
  float v5;
  int v6;
  float* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
  HIDWORD(v4) = a2;
  LODWORD(v4) = a2;
  v3 = v4 >> 20;
  if (v3 > 1) {
    if (v3 == 2) {
      *(float*)(a1 + 32) = -*(float*)(a1 + 32);
      result = -*(float*)(a1 + 40);
    LABEL_13:
      *(float*)(a1 + 40) = result;
      return result;
    }
    if (v3 == 3) {
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v7 = (float*)(a1 + 32);
        v8 = GameRoutine_5f6ef0(*(float*)(a1 + 32), *(float*)(a1 + 36),
                                *(float*)(a1 + 40), *(float*)(a1 + 44)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s2", "=w"));
        return SkeletalAnimObj_5f7690(v7, v8, v10 + 0x1.921fb60000000p+1f, -v9);
      }
      else {
        result = *(float*)(a1 + 36) + 0x1.921fb60000000p+1f;
        v12 = -*(float*)(a1 + 40);
        *(float*)(a1 + 36) = result;
        *(float*)(a1 + 40) = v12;
      }
    }
  }
  else {
    if (v3 == 0) {
      result = -*(float*)(a1 + 36);
      v11 = -*(float*)(a1 + 40);
      *(float*)(a1 + 36) = result;
      *(float*)(a1 + 40) = v11;
      return result;
    }
    if (v3 == 1) {
      v5 = *(float*)(a1 + 32);
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v6 = *(_DWORD*)(a1 + 40);
        *(_DWORD*)(a1 + 32) = *(_DWORD*)(a1 + 36);
        *(float*)(a1 + 36) = v5;
        result = *(float*)(a1 + 44);
        *(float*)(a1 + 40) = result;
        *(_DWORD*)(a1 + 44) = v6;
        return result;
      }
      *(float*)(a1 + 32) = -v5;
      result = 0x1.921fb60000000p+1f - *(float*)(a1 + 40);
      goto LABEL_13;
    }
  }
  return result;
}

float SkeletalAnimObj_5f6ab0(__int64 a1, int a2, float result)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  int v8;
  float* v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s1", "=w"));
  HIDWORD(v4) = a2;
  LODWORD(v4) = a2;
  v3 = v4 >> 20;
  if (v3 > 1) {
    switch (v3) {
    case 2:
      *(float*)(a1 + 32) = -*(float*)(a1 + 32);
      *(float*)(a1 + 40) = -*(float*)(a1 + 40);
      break;
    case 3:
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v9 = (float*)(a1 + 32);
        v10 = a1;
        v11 = GameRoutine_5f6ef0(*(float*)(a1 + 32), *(float*)(a1 + 36),
                                 *(float*)(a1 + 40), *(float*)(a1 + 44)),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s1", "=w"));
        SkeletalAnimObj_5f7690(v9, v11, v13 + 0x1.921fb60000000p+1f, -v12),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s1", "=w"));
        a1 = v10;
        v5 = 20;
        goto LABEL_17;
      }
      v15 = -*(float*)(a1 + 40);
      *(float*)(a1 + 36) = *(float*)(a1 + 36) + 0x1.921fb60000000p+1f;
      *(float*)(a1 + 40) = v15;
      break;
    case 4:
      v5 = 24;
      v6 = -*(float*)(a1 + 20);
      *(float*)(a1 + 16) = -*(float*)(a1 + 16);
      *(float*)(a1 + 20) = v6;
      goto LABEL_17;
    default:
      return result;
    }
    v5 = 20;
    goto LABEL_17;
  }
  if (v3 != 0) {
    if (v3 != 1) {
      return result;
    }
    v7 = *(float*)(a1 + 32);
    if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
      v8 = *(_DWORD*)(a1 + 40);
      v5 = 16;
      *(_DWORD*)(a1 + 32) = *(_DWORD*)(a1 + 36);
      *(float*)(a1 + 36) = v7;
      *(_DWORD*)(a1 + 40) = *(_DWORD*)(a1 + 44);
      *(_DWORD*)(a1 + 44) = v8;
    }
    else {
      *(float*)(a1 + 32) = -v7;
      v5 = 16;
      *(float*)(a1 + 40) = 0x1.921fb60000000p+1f - *(float*)(a1 + 40);
    }
  }
  else {
    v5 = 16;
    v14 = -*(float*)(a1 + 40);
    *(float*)(a1 + 36) = -*(float*)(a1 + 36);
    *(float*)(a1 + 40) = v14;
  }
LABEL_17:
  result = -*(float*)(a1 + v5);
  *(float*)(a1 + v5) = result;
  return result;
}

float SkeletalAnimObj_5f6c10(__int64 a1, int a2, float result)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int64 v4;
  float* v5;
  float v6;
  float v7;
  float v8;
  float v9;
  int v10;
  float v11;
  float v12;

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  HIDWORD(v4) = a2;
  LODWORD(v4) = a2;
  v3 = v4 >> 20;
  if (v3 > 1) {
    if (v3 == 2) {
      result = -*(float*)(a1 + 32);
      v12 = -*(float*)(a1 + 36);
      *(float*)(a1 + 32) = result;
      *(float*)(a1 + 36) = v12;
    }
    else if (v3 == 3) {
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v10 = *(_DWORD*)(a1 + 32);
        *(float*)(a1 + 32) = -*(float*)(a1 + 36);
        *(_DWORD*)(a1 + 36) = v10;
        result = -*(float*)(a1 + 40);
        *(_DWORD*)(a1 + 40) = *(_DWORD*)(a1 + 44);
        *(float*)(a1 + 44) = result;
      }
      else {
        result = *(float*)(a1 + 40) + 0x1.921fb60000000p+1f;
        *(float*)(a1 + 40) = result;
      }
    }
  }
  else if (v3 != 0) {
    if (v3 == 1) {
      v5 = (float*)(a1 + 32);
      v6 = *(float*)(a1 + 32);
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v7 = GameRoutine_5f6ef0(v6, *(float*)(a1 + 36), *(float*)(a1 + 40),
                                *(float*)(a1 + 44)),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
        return SkeletalAnimObj_5f7690(v5, 0x1.921fb60000000p+1f - v7, v9,
                                      0x1.921fb60000000p+1f - v8);
      }
      else {
        *(float*)(a1 + 32) = 0x1.921fb60000000p+1f - v6;
        result = 0x1.921fb60000000p+1f - *(float*)(a1 + 40);
        *(float*)(a1 + 40) = result;
      }
    }
  }
  else {
    result = -*(float*)(a1 + 36);
    v11 = -*(float*)(a1 + 40);
    *(float*)(a1 + 36) = result;
    *(float*)(a1 + 40) = v11;
  }
  return result;
}

float SkeletalAnimObj_5f6da0(__int64 a1, int a2, float result)
{

#pragma clang fp contract(off)
  int v3;
  unsigned __int64 v4;
  float v5;
  float* v6;
  float v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  int v14;
  float v15;
  float v16;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  HIDWORD(v4) = a2;
  LODWORD(v4) = a2;
  v3 = v4 >> 20;
  if (v3 <= 1) {
    if (v3 != 0) {
      if (v3 != 1) {
        return result;
      }
      v6 = (float*)(a1 + 32);
      v7 = *(float*)(a1 + 32);
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v8 = a1;
        v9 = GameRoutine_5f6ef0(v7, *(float*)(a1 + 36), *(float*)(a1 + 40),
                                *(float*)(a1 + 44)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
        SkeletalAnimObj_5f7690(v6, 0x1.921fb60000000p+1f - v9, v11,
                               0x1.921fb60000000p+1f - v10),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s2", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
        a1 = v8;
        v12 = 16;
      }
      else {
        v12 = 16;
        *(float*)(a1 + 32) = 0x1.921fb60000000p+1f - v7;
        *(float*)(a1 + 40) = 0x1.921fb60000000p+1f - *(float*)(a1 + 40);
      }
    }
    else {
      v12 = 16;
      v16 = -*(float*)(a1 + 40);
      *(float*)(a1 + 36) = -*(float*)(a1 + 36);
      *(float*)(a1 + 40) = v16;
    }
  }
  else {
    switch (v3) {
    case 2:
      v13 = -*(float*)(a1 + 36);
      *(float*)(a1 + 32) = -*(float*)(a1 + 32);
      *(float*)(a1 + 36) = v13;
      break;
    case 3:
      if ((*(_BYTE*)(a1 + 2) & 0x30) != 0) {
        v14 = *(_DWORD*)(a1 + 32);
        *(float*)(a1 + 32) = -*(float*)(a1 + 36);
        *(_DWORD*)(a1 + 36) = v14;
        v15 = -*(float*)(a1 + 40);
        *(_DWORD*)(a1 + 40) = *(_DWORD*)(a1 + 44);
        *(float*)(a1 + 44) = v15;
      }
      else {
        *(float*)(a1 + 40) = *(float*)(a1 + 40) + 0x1.921fb60000000p+1f;
      }
      break;
    case 4:
      v5 = -*(float*)(a1 + 20);
      *(float*)(a1 + 16) = -*(float*)(a1 + 16);
      *(float*)(a1 + 20) = v5;
      break;
    default:
      return result;
    }
    v12 = 24;
  }
  result = -*(float*)(a1 + v12);
  *(float*)(a1 + v12) = result;
  return result;
}

float SkeletalAnimObj_5f7690(float* a1, float a2, float a3, float a4)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  bool v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float result;

  v4 = a3 * 0.5f;
  v5 = a4 * 0.5f;
  v6 = (float)(a2 * 0.5f) +
       (float)(roundf((float)(a2 * 0.5f) * 0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v6 < -0x1.921fb60000000p+0f) {
    v7 = -1.0f;
  }
  else {
    v7 = 1.0f;
  }
  v8 = -0x1.921fb60000000p+1f - v6;
  if (v6 >= -0x1.921fb60000000p+0f) {
    v8 = v6;
  }
  if (v6 > 0x1.921fb60000000p+0f) {
    v9 = -1.0f;
  }
  else {
    v9 = v7;
  }
  if (v6 > 0x1.921fb60000000p+0f) {
    v10 = 0x1.921fb60000000p+1f - v6;
  }
  else {
    v10 = v8;
  }
  v11 = *(float*)GameData_212c190;
  v12 = *((float*)GameData_212c190 + 1);
  v13 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v14 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v15 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v16 = *(float*)GameData_212c188;
  v17 = *((float*)GameData_212c188 + 1);
  v18 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v21 =
      v4 + (float)(roundf(v4 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v21 < -0x1.921fb60000000p+0f) {
    v22 = -1.0f;
  }
  else {
    v22 = 1.0f;
  }
  v23 = -0x1.921fb60000000p+1f - v21;
  if (v21 >= -0x1.921fb60000000p+0f) {
    v23 = v21;
  }
  if (v21 > 0x1.921fb60000000p+0f) {
    v24 = 0x1.921fb60000000p+1f - v21;
  }
  else {
    v24 = v23;
  }
  if (v21 > 0x1.921fb60000000p+0f) {
    v25 = -1.0f;
  }
  else {
    v25 = v22;
  }
  v26 =
      v5 + (float)(roundf(v5 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v26 < -0x1.921fb60000000p+0f) {
    v27 = -1.0f;
  }
  else {
    v27 = 1.0f;
  }
  v28 = -0x1.921fb60000000p+1f - v26;
  if (v26 >= -0x1.921fb60000000p+0f) {
    v28 = v26;
  }
  v29 = v26 <= 0x1.921fb60000000p+0f;
  v30 = v24 * v24;
  v31 = 0x1.921fb60000000p+1f - v26;
  if (v26 > 0x1.921fb60000000p+0f) {
    v32 = -1.0f;
  }
  else {
    v32 = v27;
  }
  if (v29) {
    v33 = v28;
  }
  else {
    v33 = v31;
  }
  v34 =
      v25 *
      (float)((float)((float)-(
                          float)(v20 -
                                 (float)((float)(v19 +
                                                 (float)((float)-(
                                                             float)(v18 -
                                                                    (float)((float)(v17 -
                                                                                    (float)(v16 *
                                                                                            v30)) *
                                                                            v30)) *
                                                         v30)) *
                                         v30)) *
                      v30) +
              1.0f);
  v35 =
      v24 *
      (float)((float)((float)-(
                          float)(v15 -
                                 (float)((float)(v14 +
                                                 (float)((float)-(
                                                             float)(v13 -
                                                                    (float)((float)(v12 -
                                                                                    (float)(v11 *
                                                                                            v30)) *
                                                                            v30)) *
                                                         v30)) *
                                         v30)) *
                      v30) +
              1.0f);
  v36 =
      v9 *
      (float)((float)((float)-(
                          float)(v20 -
                                 (float)((float)(v19 +
                                                 (float)((float)-(
                                                             float)(v18 -
                                                                    (float)((float)(v17 -
                                                                                    (float)(v16 *
                                                                                            (float)(v10 *
                                                                                                    v10))) *
                                                                            (float)(v10 *
                                                                                    v10))) *
                                                         (float)(v10 * v10))) *
                                         (float)(v10 * v10))) *
                      (float)(v10 * v10)) +
              1.0f);
  v37 =
      v10 *
      (float)((float)((float)-(
                          float)(v15 -
                                 (float)((float)(v14 +
                                                 (float)((float)-(
                                                             float)(v13 -
                                                                    (float)((float)(v12 -
                                                                                    (float)(v11 *
                                                                                            (float)(v10 *
                                                                                                    v10))) *
                                                                            (float)(v10 *
                                                                                    v10))) *
                                                         (float)(v10 * v10))) *
                                         (float)(v10 * v10))) *
                      (float)(v10 * v10)) +
              1.0f);
  v38 =
      v33 *
      (float)((float)((float)-(
                          float)(v15 -
                                 (float)((float)(v14 +
                                                 (float)((float)-(
                                                             float)(v13 -
                                                                    (float)((float)(v12 -
                                                                                    (float)(v11 *
                                                                                            (float)(v33 *
                                                                                                    v33))) *
                                                                            (float)(v33 *
                                                                                    v33))) *
                                                         (float)(v33 * v33))) *
                                         (float)(v33 * v33))) *
                      (float)(v33 * v33)) +
              1.0f);
  v39 =
      v32 *
      (float)((float)((float)-(
                          float)(v20 -
                                 (float)((float)(v19 +
                                                 (float)((float)-(
                                                             float)(v18 -
                                                                    (float)((float)(v17 -
                                                                                    (float)(v16 *
                                                                                            (float)(v33 *
                                                                                                    v33))) *
                                                                            (float)(v33 *
                                                                                    v33))) *
                                                         (float)(v33 * v33))) *
                                         (float)(v33 * v33))) *
                      (float)(v33 * v33)) +
              1.0f);
  v40 = v37 * v34;
  v41 = v36 * v34;
  *a1 = (float)(v40 * v39) - (float)(v38 * (float)(v36 * v35));
  a1[1] = (float)(v40 * v38) + (float)((float)(v36 * v35) * v39);
  v42 = (float)(v37 * v35) * v38;
  v43 = (float)(v41 * v38) - (float)(v39 * (float)(v37 * v35));
  result = v42 + (float)(v41 * v39);
  a1[2] = v43;
  a1[3] = result;
  return result;
}

#pragma GCC visibility pop
