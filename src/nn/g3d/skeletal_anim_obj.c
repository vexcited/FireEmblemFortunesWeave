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
