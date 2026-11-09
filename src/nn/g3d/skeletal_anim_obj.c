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

#pragma GCC visibility pop
