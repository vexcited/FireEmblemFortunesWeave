#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f392c0(__int64 result, __int64);
__int64 GameRoutine_f3ca00(_QWORD, _QWORD);
extern __int64 GameData_212c7d8[6];
__int64 ObjectTransparentModule_Unknown8(__int64 a1);
__int64 ObjectTransparentModuleBase_febe40(__int64 result);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN GameData_21f4d48;
extern __int64 GameData_21c9758;
extern int GameData_21f4d44;
__int64 ObjectTransparentModule_Unknown9(__int64 a1);
__int64 ObjectTransparentModule_f3cec0(__int64 result, float a2, float a3);

__int64 ObjectTransparentModule_Unknown8(__int64 a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  int v5;
  int v6;
  char v7;
  __int64 v8;
  __int64 v9;

  v2 = (__int64*)GameData_212c7d8[0];
  result = *(_QWORD*)GameData_212c7d8[0];
  if (*(_QWORD*)GameData_212c7d8[0] != 0) {
    GameRoutine_f392c0(result, a1);
    if (*(_BYTE*)(a1 + 100) == 1) {
      *(_BYTE*)(a1 + 100) = 0;
    }
    v4 = *v2;
    v8 = 0;
    v9 = 0;
    v5 = *(_DWORD*)(v4 + 304);
    v7 = 1;
    v6 = v5;
    return GameRoutine_f3ca00(a1, &v6);
  }
  return result;
}

__int64 ObjectTransparentModule_Unknown9(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_DWORD*)(a1 + 52) = 0;
  *(_QWORD*)(a1 + 56) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 68) = 0x3F80000000000000LL;
  *(_DWORD*)(a1 + 44) = 1065353216;
  *(_QWORD*)(a1 + 84) = 1065353216;
  *(_DWORD*)(a1 + 80) = 1065353216;
  *(_DWORD*)(a1 + 64) = 1;
  ObjectTransparentModule_f3cec0(a1, 0x1.0000000000000p+0f, 0x0.0p+0f);
  result = ObjectTransparentModule_f3cec0(a1, 0x1.0000000000000p+0f,
                                          0x1.0000000000000p+0f);
  if (GameData_21c9758 != 0) {
    v3 = *(_QWORD*)(GameData_21c9758 + 240);
    v4 = *(int*)(a1 + 40);
    if (0xAAAAAAAAAAAAAAABLL *
            ((*(_QWORD*)(GameData_21c9758 + 248) - v3) >> 3) >
        v4) {
      v5 = (__int64*)(v3 + 24LL * (int)v4);
      v7 = *v5;
      v6 = v5[1];
      if (v7 != v6) {
        while (*(_QWORD*)(v7 + 8) != a1) {
          v7 += 48;
          if (v7 == v6) {
            return result;
          }
        }
      }
      if (v7 != v6) {
        if (*(_QWORD*)(v7 + 8) != 0) {
          v8 = *(_QWORD*)(v7 + 8);
        }
        else {
          v8 = *(_QWORD*)(v7 + 16);
        }
        result = ObjectTransparentModuleBase_febe40(v8);
        *(_BYTE*)v7 = 1;
      }
    }
  }
  return result;
}

__int64 ObjectTransparentModule_f3cec0(__int64 result, float a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  int v9;
  __int64 v10;
  float v12;
  float v13;
  float v14;
  float v15;
  bool v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  float v22;
  float v23;

  if (*(float*)(result + 104) != a2 || *(float*)(result + 108) != a3) {
    *(float*)(result + 104) = a2;
    *(float*)(result + 108) = a3;
    v4 = *(_QWORD*)(result + 8);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0) {
      v23 = a3;
      v22 = a2;
      v21 = v4;
      result = __cxa_guard_acquire(&GameData_21f4d48);
      a2 = v22;
      a3 = v23;
      v4 = v21;
      if ((_DWORD)result != 0) {
        GameData_21f4d44 = wld_Crc32(0, "ModelModule", 0xBu);
        result = __cxa_guard_release(&GameData_21f4d48);
        a2 = v22;
        a3 = v23;
        v4 = v21;
      }
    }
    v6 = *(_QWORD*)(v4 + 504);
    v5 = *(_QWORD*)(v4 + 512);
    v7 = v5;
    for (i = v5; i != v6; i -= 16) {
      v9 = *(_DWORD*)(i - 16);
      v7 -= 16;
      if (v9 == GameData_21f4d44) {
        if (v5 != v7) {
          v10 = *(_QWORD*)(v7 + 8);
          if (v10 != 0) {
            if (*(float*)(v10 + 124) == a2 && *(float*)(v10 + 128) == a3) {
              if ((*(_BYTE*)(v10 + 169) & 1) == 0) {
                return result;
              }
            }
            else {
              v12 = *(float*)(v10 + 120);
              v13 = *(float*)(v10 + 144);
              v14 = *(float*)(v10 + 148);
              v15 = *(float*)(v10 + 152);
              *(float*)(v10 + 124) = a2;
              *(float*)(v10 + 128) = a3;
              v17 = v12 == v13 && a2 == v14 && a3 == v15;
              if (v17 && *(float*)(v10 + 132) == *(float*)(v10 + 156)) {
                v18 = *(_DWORD*)(v10 + 136);
                v19 = ((unsigned __int8)v18 ^
                       (unsigned __int8)*(_DWORD*)(v10 + 160)) &
                      0x3F;
                *(_BYTE*)(v10 + 169) =
                    (((unsigned __int8)v18 ^
                      (unsigned __int8)*(_DWORD*)(v10 + 160)) &
                     0x3F) != 0;
                if (v19 == 0) {
                  return result;
                }
              }
              else {
                *(_BYTE*)(v10 + 169) = 1;
              }
            }
            v20 = *(unsigned __int8*)(v10 + 20);
            *(_BYTE*)(v10 + 20) = v20 & 0xFB;
            if (v20 != (v20 & 0xFFFFFFFB)) {
              *(_BYTE*)(*(_QWORD*)(v10 + 8) + 728LL) = 0;
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
