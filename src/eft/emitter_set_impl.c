#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5d35c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5d3790(_QWORD, _QWORD);
__int64 EmitterSet_5b5ec0(__int64 result, __int64 a2, char a3, __int64 a4,
                          int a5, char a6, __int64 a7, __int64 a8,
                          __int64 (*a9)(_QWORD*), __int64 (*a10)(_QWORD*));
__int64
EmitterSet_5b60e0_alt1(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                       __int64 a6, __int64 a7, __int64 (*a8)(_QWORD*),
                       __int64 (*a9)(_QWORD*)) __asm__("EmitterSet_5b60e0");
__int64 EmitterSet_5b6440(__int64 result, __int64 a2);
__int64 EmitterSet_5b66c0(__int64 a1, int a2);
_BYTE* GameRoutine_5d35c0_alt1(_BYTE* result, __int64, _QWORD*, __int64,
                               __int64, __int64) __asm__("GameRoutine_5d35c0");
__int64 GameRoutine_5d3790_alt1(__int64, __int64) __asm__("GameRoutine_5d3790");
_BYTE* EmitterSet_5b60e0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                         __int64 a6, __int64 a7, __int64 (*a8)(_QWORD*),
                         __int64 (*a9)(_QWORD*));

__int64 EmitterSet_5b5ec0(__int64 result, __int64 a2, char a3, __int64 a4,
                          int a5, char a6, __int64 a7, __int64 a8,
                          __int64 (*a9)(_QWORD*), __int64 (*a10)(_QWORD*))
{

#pragma clang fp contract(off)
  __int64 v10;
  int v11;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  int v19;
  _BOOL4 v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  _BYTE* v28;
  int v29;
  int v30;
  int v31;
  __int64 v33;
  char v35;
  struct {
    _QWORD v38[4];
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v38_;

  v10 = *(_QWORD*)(a4 + 568);
  if (*(int*)(v10 + 136) >= 1) {
    v11 = a3 & 1;
    v14 = result;
    v15 = 0;
    v31 = v11;
    v33 = a4 + 1088;
    v35 = a6 & 1;
    do {
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 8 * v15 + 144) +
                                         16LL) +
                              2017LL) == v11) {
        v16 = *(_QWORD*)(v33 + 8 * v15);
        if (v16 != 0) {
          do {
            v17 = v16;
            v18 = *(_BYTE*)(*(_QWORD*)(v16 + 160) + 1872LL) == 0 ||
                  *(_BYTE*)(v16 + 2) == 0;
            v20 = false;
            if (!v18 && *(float*)(v16 + 112) > 0x0.0p+0f) {
              v19 = *(_DWORD*)(v16 + 40);
              if (v19 > 0 ||
                  v19 == 0 &&
                      (unsigned int)(*(_DWORD*)(*(_QWORD*)(v16 + 568) + 816LL) -
                                     1) < 3) {
                v20 = true;
              }
            }
            v21 = *(_DWORD*)(a8 + 16) & *(_DWORD*)(v16 + 64);
            v16 = *(_QWORD*)(v16 + 128);
            v22 = *(_QWORD*)(v17 + 152);
            v23 = 1 << *(_DWORD*)(v17 + 1024);
            v24 = v23 & a5;
            result = GameRoutine_5d3790_alt1(*(_QWORD*)(v14 + 32), v23);
            *(_QWORD*)(v17 + 1016) = result;
            if (v22 != 0 && v20 && v21 != 0 && v24 != 0) {
              if (a9 == nullptr || (v38_.v38[0] = v17, v38_.v38[1] = a7,
                                    ((result = a9(v38_.v38)) & 1) != 0)) {
                v28 = *(_BYTE**)(v14 + 32);
                if (a10 != nullptr) {
                  v29 = *(_DWORD*)(a8 + 20);
                  v38_.v38[2] = 0;
                  v38_.v38[3] = v17;
                  v38_.v42 = a8;
                  v38_.v40 = 0;
                  v38_.v41 = 0;
                  v38_.v39 = 0;
                  v30 = *(_DWORD*)(v14 + 48);
                  HIDWORD(v38_.v39) = v29;
                  v38_.v38[0] = a2;
                  v38_.v38[1] = v28;
                  LODWORD(v38_.v41) = v30;
                  BYTE4(v38_.v41) = v35;
                  v38_.v40 = a7;
                  result = a10(v38_.v38);
                }
                else {
                  result = (__int64)GameRoutine_5d35c0_alt1(
                      v28, a2, (_QWORD*)v17, a6 & 1, a7, a8);
                }
              }
            }
          } while (v16 != 0);
          v11 = v31;
          v10 = *(_QWORD*)(a4 + 568);
        }
      }
      ++v15;
    } while (v15 < *(int*)(v10 + 136));
  }
  return result;
}

_BYTE* EmitterSet_5b60e0(__int64 a1, __int64 a2, __int64 a3, int a4, char a5,
                         __int64 a6, __int64 a7, __int64 (*a8)(_QWORD*),
                         __int64 (*a9)(_QWORD*))
{

#pragma clang fp contract(off)
  __int64 v9;
  bool v16;
  int v17;
  _BOOL4 v18;
  int v19;
  int v20;
  int v21;
  _BYTE* result;
  _BYTE* v26;
  int v27;
  int v28;
  struct {
    _QWORD v30[4];
    int v31;
    int v32;
    __int64 v33;
    int v34;
    int v35;
    __int64 v36;
  } v30_;

  v9 = *(_QWORD*)(a3 + 152);
  v16 = *(_BYTE*)(*(_QWORD*)(a3 + 160) + 1872LL) == 0 || *(_BYTE*)(a3 + 2) == 0;
  v18 = false;
  if (!v16 && *(float*)(a3 + 112) > 0x0.0p+0f) {
    v17 = *(_DWORD*)(a3 + 40);
    if (v17 > 0 ||
        v17 == 0 &&
            (unsigned int)(*(_DWORD*)(*(_QWORD*)(a3 + 568) + 816LL) - 1) < 3) {
      v18 = true;
    }
  }
  v19 = *(_DWORD*)(a7 + 16) & *(_DWORD*)(a3 + 64);
  v20 = 1 << *(_DWORD*)(a3 + 1024);
  v21 = v20 & a4;
  result = (_BYTE*)GameRoutine_5d3790_alt1(*(_QWORD*)(a1 + 32), v20);
  *(_QWORD*)(a3 + 1016) = result;
  if (v9 != 0 && v18 && v19 != 0 && v21 != 0) {
    if (a8 == nullptr ||
        (v30_.v30[0] = a3, v30_.v30[1] = a6,
         ((unsigned __int8)(result = (_BYTE*)a8(v30_.v30)) & 1) != 0)) {
      v26 = *(_BYTE**)(a1 + 32);
      if (a9 != nullptr) {
        v27 = *(_DWORD*)(a7 + 20);
        v28 = *(_DWORD*)(a1 + 48);
        v30_.v30[3] = a3;
        v30_.v31 = 0;
        v30_.v33 = a6;
        v30_.v30[2] = 0;
        v30_.v36 = a7;
        v30_.v35 = a5 & 1;
        v30_.v30[0] = a2;
        v30_.v30[1] = v26;
        v30_.v32 = v27;
        v30_.v34 = v28;
        return (_BYTE*)a9(v30_.v30);
      }
      else {
        return GameRoutine_5d35c0_alt1(v26, a2, (_QWORD*)a3, a5 & 1, a6, a7);
      }
    }
  }
  return result;
}

__int64 EmitterSet_5b6440(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (*(_BYTE*)a2 != 0) {
    v2 = *(_QWORD*)(a2 + 1352);
    v3 = *(int*)(a2 + 32);
    v4 = *(_QWORD*)(a2 + 136);
    if (v4 != 0 && (v5 = *(_QWORD*)(a2 + 128)) != 0) {
      *(_QWORD*)(v4 + 128) = v5;
      *(_QWORD*)(*(_QWORD*)(a2 + 128) + 136LL) = *(_QWORD*)(a2 + 136);
    }
    else {
      v6 = v2 + 1088;
      if (*(_QWORD*)(v2 + 1088 + 8 * v3) == a2) {
        v11 = *(_QWORD*)(a2 + 128);
        *(_QWORD*)(v6 + 8 * v3) = v11;
        if (v11 != 0) {
          *(_QWORD*)(v11 + 136) = *(_QWORD*)(a2 + 136);
        }
        else {
          *(_QWORD*)(v2 + 8 * v3 + 1216) = 0;
        }
      }
      else {
        v7 = v2 + 1216;
        if (*(_QWORD*)(v7 + 8 * v3) == a2) {
          *(_QWORD*)(v7 + 8 * v3) = v4;
          v12 = *(_QWORD*)(a2 + 136);
          if (v12 != 0) {
            *(_QWORD*)(v12 + 128) = *(_QWORD*)(a2 + 128);
          }
          else {
            *(_QWORD*)(v6 + 8 * v3) = 0;
          }
        }
      }
    }
  }
  else {
    v8 = *(_QWORD*)(a2 + 136);
    if (v8 != 0 && (v9 = *(_QWORD*)(a2 + 128)) != 0) {
      *(_QWORD*)(v8 + 128) = v9;
      *(_QWORD*)(*(_QWORD*)(a2 + 128) + 136LL) = *(_QWORD*)(a2 + 136);
    }
    else if (*(_QWORD*)(result + 336) == a2) {
      v13 = *(_QWORD*)(a2 + 128);
      *(_QWORD*)(result + 336) = v13;
      if (v13 != 0) {
        *(_QWORD*)(v13 + 136) = *(_QWORD*)(a2 + 136);
      }
      else {
        *(_QWORD*)(result + 344) = 0;
      }
    }
    else if (*(_QWORD*)(result + 344) == a2) {
      *(_QWORD*)(result + 344) = v8;
      v10 = *(_QWORD*)(a2 + 136);
      if (v10 != 0) {
        *(_QWORD*)(v10 + 128) = *(_QWORD*)(a2 + 128);
      }
      else {
        *(_QWORD*)(result + 336) = 0;
      }
    }
  }
  return result;
}

__int64 EmitterSet_5b66c0(__int64 a1, int a2)
{
  __int64 result;
  int v4;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0 && a2 != 0) {
    v4 = a2 - 1;
    do {
      result = *(_QWORD*)(result + 128);
    } while (result != 0 && v4-- != 0);
  }
  return result;
}

#pragma GCC visibility pop
