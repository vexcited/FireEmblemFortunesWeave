#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_5825e0(_DWORD* result);
__int64 AnimTransformBasic_56e6c0(_QWORD);
__int64 AnimTransformBasic_570f40(_QWORD);
__int64 AnimTransformBasic_570f60(_QWORD);
__int64 GameRoutine_56e670(_QWORD);
__int64 GameRoutine_56e690(void);
__int64 GameRoutine_578d60(__int64, __int64);
__int64 GameRoutine_5825a0(__int64 result, float);
__int64 GameRoutine_5825c0(void);
float GameRoutine_582600(__int64);
__int64 AnimatorEx_Unknown4(__int64 a1, char a2);
__int64 AnimatorEx_584880(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          char a5);
__int64 AnimatorEx_Unknown23(__int64* a1, int a2, float a3);
__int64 AnimatorEx_Unknown25(__int64 a1, int a2, float a3);
__int64 AnimatorEx_Unknown26(_QWORD* a1, float a2);
__int64 AnimatorEx_Unknown27(_QWORD* a1);
__int64 AnimatorEx_Unknown28(__int64 a1);
__int64 AnimatorEx_Unknown29(_QWORD* a1);
__int64 AnimatorEx_Unknown3(__int64 result, float a2);
__int64 AnimatorEx_Unknown30(__int64 a1);
__int64 AnimatorEx_Unknown32(__int64 result, __int64 a2);
__int64 GameRoutine_56e670_alt1(__int64) __asm__("GameRoutine_56e670");
extern int* GameData_2136208[16];
__int64 AnimatorEx_Unknown34(__int64 a1, unsigned int a2, float a3);
__int64 AnimatorEx_Unknown35(__int64 a1);

__int64 AnimatorEx_Unknown4(__int64 a1, char a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  result = GameRoutine_56e690();
  if ((a2 & 1) != 0) {
    if (*(_QWORD*)(a1 + 80) == a1 + 72) {
      v5 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 96LL);
      v6 = *(_QWORD*)(a1 + 72);
      v7 = *(_QWORD*)(v5 + 48);
      result = v5 + 48;
      *(_QWORD*)(a1 + 72) = v7;
      *(_QWORD*)(v6 + 8) = result;
      *(_QWORD*)(*(_QWORD*)result + 8LL) = a1 + 72;
      *(_QWORD*)result = v6;
    }
  }
  else {
    *(_DWORD*)(a1 + 60) = 0;
  }
  return result;
}

__int64 AnimatorEx_584880(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          char a5)
{
  unsigned __int16 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v10 = AnimTransformBasic_570f40(a2);
  if (v10 != 0) {
    v11 = 0;
    v12 = 36LL * v10;
    do {
      v13 = AnimTransformBasic_570f60(a2);
      v14 = GameRoutine_578d60(a4, v13 + v11);
      (*(void (**)(_QWORD*, __int64))(*a1 + 88LL))(a1, v14);
      v11 += 36;
    } while (v12 != v11);
  }
  v15 = *(_QWORD*)(a2 + 16);
  a1[11] = a3;
  a1[12] = v15;
  return (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, a5 & 1);
}

__int64 AnimatorEx_Unknown23(__int64* a1, int a2, float a3)
{
  float v3;
  char v6;
  int v7;
  int v8;
  __int64 v10;

  v3 = a3;
  if (a3 < (float)-(float)(unsigned __int16)GameRoutine_56e670(a1) ||
      v3 > (float)(unsigned __int16)GameRoutine_56e670(a1)) {
    v6 = AnimTransformBasic_56e6c0(a1);
    if (a2 != 0 || (v6 & 1) == 0) {
      return AnimTransformBasic_56e6c0(a1);
    }
  }
  v7 = *((_DWORD*)a1 + 17);
  *((float*)a1 + 15) = v3;
  *((_DWORD*)a1 + 16) = a2;
  *((_DWORD*)a1 + 17) = v7 & 0xFFFFFFF0;
  v8 = *((_DWORD*)a1 + 26);
  if (v3 >= 0.0) {
    if ((v8 & 8) == 0 || (unsigned __int16)GameRoutine_56e670(a1) == 0) {
      v3 = 0.0;
    }
  }
  else if ((v8 & 8) != 0 && (unsigned __int16)GameRoutine_56e670(a1) != 0) {
    v3 = v3 + (float)(unsigned __int16)GameRoutine_56e670(a1);
  }
  else {
    v3 = (float)(unsigned __int16)GameRoutine_56e670(a1);
  }
  v10 = *a1;
  *((float*)a1 + 8) = v3;
  (*(void (**)(__int64*, __int64))(v10 + 32))(a1, 1);
  return (*(__int64 (**)(_QWORD, _QWORD, __int64*))(
      **(_QWORD**)(a1[11] + 96) + 120LL))(*(_QWORD*)(a1[11] + 96), 0, a1);
}

__int64 AnimatorEx_Unknown25(__int64 a1, int a2, float a3)
{
  char v6;
  int v7;
  float v8;

  if (a3 < (float)-(float)(unsigned __int16)GameRoutine_56e670(a1) ||
      a3 > (float)(unsigned __int16)GameRoutine_56e670(a1)) {
    v6 = AnimTransformBasic_56e6c0(a1);
    if (a2 != 0 || (v6 & 1) == 0) {
      return AnimTransformBasic_56e6c0(a1);
    }
  }
  v7 = *(_DWORD*)(a1 + 68);
  *(float*)(a1 + 60) = a3;
  *(_DWORD*)(a1 + 64) = a2;
  *(_DWORD*)(a1 + 68) = v7 & 0xFFFFFFF0;
  if ((*(_BYTE*)(a1 + 104) & 8) != 0 &&
      (unsigned __int16)GameRoutine_56e670(a1) != 0) {
    if (a3 >= 0.0) {
      if (*(float*)(a1 + 32) < a3) {
        *(float*)(a1 + 32) = a3;
      }
    }
    else {
      v8 = a3 + (float)(unsigned __int16)GameRoutine_56e670(a1);
      if (*(float*)(a1 + 32) > v8) {
        *(float*)(a1 + 32) = v8;
      }
    }
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 32LL))(a1, 1);
  return (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 88) + 96LL) + 120LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 96LL), 1, a1);
}

__int64 AnimatorEx_Unknown34(__int64 a1, unsigned int a2, float a3)
{

#pragma clang fp contract(off)
  unsigned __int16 v6;
  int* v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;

  v6 = GameRoutine_56e670_alt1(a1);
  v7 = GameData_2136208[0];
  v8 = *(int*)((char*)GameData_2136208[0] +
               (unsigned __int64)((_UNKNOWN**)0x8LL));
  v9 = *(int*)((char*)GameData_2136208[0] +
               (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v10 = *GameData_2136208[0] ^ (*GameData_2136208[0] << 11);
  *GameData_2136208[0] = GameData_2136208[0][1];
  v7[1] = v8;
  v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v9;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v11;
  v12 = *(_QWORD*)a1;
  *(float*)(a1 + 32) =
      (float)((v11 + v6 * (unsigned __int64)(unsigned int)v11) >> 32);
  return (*(__int64 (**)(__int64, _QWORD, float))(v12 + 200))(a1, a2, a3);
}

__int64 AnimatorEx_Unknown26(_QWORD* a1, float a2)
{
  GameRoutine_5825a0((__int64)a1, a2);
  (*(void (**)(_QWORD*, __int64))(*a1 + 32LL))(a1, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD*))(
      **(_QWORD**)(a1[11] + 96LL) + 120LL))(*(_QWORD*)(a1[11] + 96LL), 2, a1);
}

__int64 AnimatorEx_Unknown27(_QWORD* a1)
{
  GameRoutine_5825c0();
  (*(void (**)(_QWORD*, __int64))(*a1 + 32LL))(a1, 1);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD*))(
      **(_QWORD**)(a1[11] + 96LL) + 120LL))(*(_QWORD*)(a1[11] + 96LL), 3, a1);
}

__int64 AnimatorEx_Unknown28(__int64 a1)
{
  GameRoutine_5825e0((_DWORD*)a1);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 32LL))(a1, 1);
  return (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 88) + 96LL) + 120LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 96LL), 4, a1);
}

__int64 AnimatorEx_Unknown29(_QWORD* a1)
{
  float v2;

  v2 = GameRoutine_582600((__int64)a1);
  (*(void (**)(_QWORD*, __int64, float))(*a1 + 32LL))(a1, 1, v2);
  return (*(__int64 (**)(_QWORD, __int64, _QWORD*))(
      **(_QWORD**)(a1[11] + 96LL) + 120LL))(*(_QWORD*)(a1[11] + 96LL), 5, a1);
}

__int64 AnimatorEx_Unknown35(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int16 v2;
  int* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  int v8;

  v2 = GameRoutine_56e670_alt1(a1);
  v3 = GameData_2136208[0];
  v4 = *(int*)((char*)GameData_2136208[0] +
               (unsigned __int64)((_UNKNOWN**)0x8LL));
  v5 = *(int*)((char*)GameData_2136208[0] +
               (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v6 = *GameData_2136208[0] ^ (*GameData_2136208[0] << 11);
  *GameData_2136208[0] = GameData_2136208[0][1];
  v3[1] = v4;
  v7 = (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v5;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v7;
  v8 = *(_DWORD*)(a1 + 68);
  *(float*)(a1 + 32) =
      (float)((v7 + v2 * (unsigned __int64)(unsigned int)v7) >> 32);
  *(_DWORD*)(a1 + 68) = v8 & 0xFFFFFFF0;
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 32LL))(a1, 1);
  return (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 88) + 96LL) + 120LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 88) + 96LL), 2, a1);
}

__int64 AnimatorEx_Unknown3(__int64 result, float a2)
{
  float v2;
  unsigned int v3;
  float v4;
  __int64 v5;
  int v6;
  unsigned int v7;
  int v8;
  unsigned __int16 v9;
  __int64 v10;
  int v11;
  float v12;
  __int64 v13;

  v2 = *(float*)(result + 60);
  v3 = *(_DWORD*)(result + 68) & 0xFFFFFFF0;
  *(_DWORD*)(result + 68) = v3;
  if (v2 != 0.0) {
    v4 = *(float*)(result + 32) + (float)(v2 * a2);
    if (v2 <= 0.0) {
      if (v4 > 0.0) {
      LABEL_20:
        *(float*)(result + 32) = v4;
        return result;
      }
      v8 = *(_DWORD*)(result + 64);
      if (v8 == 2) {
        v4 = -v4;
        v5 = result;
        *(_DWORD*)(result + 68) = v3 | 2;
        v13 = *(_QWORD*)(result + 88);
        *(float*)(result + 60) = -v2;
        (*(void (**)(_QWORD* __return_ptr, _QWORD, __int64, __int64))(
            **(_QWORD**)(v13 + 96) + 120LL))(*(_QWORD**)(v13 + 96),
                                             *(_QWORD*)(v13 + 96), 6, result);
        goto LABEL_19;
      }
      if (v8 != 1) {
        if (v8 == 0) {
          *(_DWORD*)(result + 60) = 0;
          v4 = 0.0;
          *(_DWORD*)(result + 68) = v3 | 1;
        }
        goto LABEL_20;
      }
      v5 = result;
      v9 = GameRoutine_56e670(result);
      v10 = 6;
      v11 = *(_DWORD*)(v5 + 68);
      v4 = v4 + (float)v9;
    }
    else {
      v5 = result;
      if (v4 < (float)(unsigned __int16)GameRoutine_56e670(result)) {
      LABEL_19:
        result = v5;
        goto LABEL_20;
      }
      v6 = *(_DWORD*)(v5 + 64);
      result = v5;
      if (v6 == 2) {
        v12 = (float)(unsigned __int16)GameRoutine_56e670(v5);
        v4 =
            (float)((float)(unsigned __int16)GameRoutine_56e670(v5) - v4) + v12;
        *(float*)(v5 + 60) = -v2;
      }
      else {
        if (v6 != 1) {
          if (v6 == 0) {
            v7 = (unsigned __int16)GameRoutine_56e670(v5);
            result = v5;
            *(_DWORD*)(v5 + 60) = 0;
            v4 = (float)v7;
            *(_DWORD*)(v5 + 68) |= 1u;
          }
          goto LABEL_20;
        }
        v4 = v4 - (float)(unsigned __int16)GameRoutine_56e670(v5);
      }
      v11 = *(_DWORD*)(v5 + 68);
      v10 = 7;
    }
    *(_DWORD*)(v5 + 68) = v11 | 2;
    (*(void (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)(*(_QWORD*)(v5 + 88) + 96LL) + 120LL))(
        *(_QWORD*)(*(_QWORD*)(v5 + 88) + 96LL), v10, v5);
    goto LABEL_19;
  }
  return result;
}

__int64 AnimatorEx_Unknown30(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 != 0) {
    return v1 + *(unsigned int*)(v1 + 12);
  }
  else {
    return 0;
  }
}

__int64 AnimatorEx_Unknown32(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 96) = *(_QWORD*)(a2 + 16);
  return result;
}

#pragma GCC visibility pop
