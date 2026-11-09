#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_579280(_QWORD*, __int64);
__int64 GameRoutine_5714e0(_QWORD, _QWORD);
__int64 GameRoutine_5716e0(_QWORD, _QWORD);
__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_579180(__int64);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58c850(void);
__int64 GameRoutine_5904e0(_QWORD);
__int64 GameRoutine_5915c0(_QWORD, _QWORD);
__int64 GameRoutine_591740(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_591750(_QWORD, _QWORD);
__int64 GameRoutine_591d60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5997c0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_212dfe0;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a833d0;
extern __int64 (*nn_ui2d_Picture_vtable[])();
extern __int64* GameData_212dfc8;
extern __int64* GameData_212dfd8;
float GameRoutine_58e9d0(__int64, __int64);
__int64 Pane_58dc00(__int64 result, __int64 a2);
__int64 Pane_58de20(_QWORD* a1);
__int64 Pane_58dee0(__int64 result, __int64 a2);
__int64 Pane_58df20(__int64 result, __int64 a2);
__int64 Pane_58df60(__int64 result, _QWORD* a2);
float Pane_58e030(__int64 a1);
__int64 Pane_58e0c0(unsigned __int8* a1, int a2);
_BYTE* Pane_58e0e0(_BYTE* result, int a2, char a3);
__int64 Pane_58e120(__int64 a1, __int64 a2, char a3);
__int64 Pane_58e1e0(_QWORD* a1, __int64 a2, char a3);
__int64 Pane_58e2e0(__int64 a1);
__int64 Pane_58e3b0(__int64 a1);
__int64 Pane_58e480(__int64 a1, __int64 a2, __int64 a3);
__int64 Pane_58e560(__int64 result, __int64 a2, __int64 a3);
__int64 Pane_58e5e0(__int64 a1, __int64 a2);
__int64 Pane_58e6c0(__int64 result, __int64 a2);
__int64 Pane_58ed60(__int64 result, int a2, __int64 a3, unsigned int a4,
                    char a5);
__int64 Pane_58f020(__int64 a1, __int64 a2, int a3);
__int64 Pane_58f180(__int64 a1, __int64 a2, int a3, char a4);
__int64 Pane_58f460(__int64 result, __int64 a2, __int64 a3);
__int64 Pane_58f580(__int64 result, __int64 a2, __int64 a3);
__int64 Pane_58f610(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 Pane_58f660(_QWORD* a1, __int64 a2, char a3);
__int64 Pane_58f6e0(__int64 a1, __int64 a2);
_QWORD* Pane_58f780(_QWORD* result, __int64 a2);
void Pane_58f7c0(__int64 a1, __int64 a2, char a3);
__int64 Pane_58f850(__int64 a1);
__int64 Pane_58f8a0(__int64 a1);
__int64 Pane_58f910(__int64 a1);
float Pane_58f940(__int64 a1, float* a2);
float Pane_58f960(__int64* a1, __int64 a2);

double Pane_58fa30() { return 0.0; }

__int64 Picture_Destructor(_QWORD* a1);
__int64 Pane_58fa40(__int64 a1);
__int64 Pane_58fa70(__int64 a1);
unsigned int* Pane_58fac0(__int64 a1, __int64 a2);
__int64 Pane_58fb80(__int64 a1, __int64 a2);
__int64 Pane_58fc20(_QWORD* a1, __int64 a2);
__int64 Pane_58fd20(__int64 a1);
long double Pane_58fef0(__int64* a1, _OWORD* a2);
__int64 Pane_590280(__int64 a1, __int64 a2, __int64 a3);
__int64 Pane_5902c0(__int64 result, __int64 a2, __int64 a3);
bool Pane_590310(__int64 a1);
bool Pane_590370(__int64 a1);
bool Pane_5903d0(__int64 a1);
float Pane_590430(__int64 a1);
__int64* Pane_Unknown2();

__int64 Pane_58dc00(__int64 result, __int64 a2)
{
  int v2;
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
  _QWORD* v14;
  atomic_uchar* v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *(_DWORD*)(result + 96);
  v4 = result;
  if ((v2 & 0x20000) != 0) {
    v5 = *(_QWORD*)(result + 168);
    v6 =
        v5 + 12 +
        (unsigned int)(*(_DWORD*)(v5 + 12 + *(unsigned int*)(v5 + 16) + 4 +
                                  4LL *
                                      *(unsigned __int8*)(v5 + 12 +
                                                          (unsigned int)(*(_DWORD*)(v5 +
                                                                                    12 +
                                                                                    *(unsigned int*)(v5 +
                                                                                                     16) +
                                                                                    4) +
                                                                         *(_DWORD*)(v5 +
                                                                                    16)) +
                                                          12)) +
                       *(_DWORD*)(v5 + 16));
    GameRoutine_5915c0(*(_QWORD*)(v6 + 8), a2);
    result = GameRoutine_5791a0(*(_QWORD*)(v6 + 8));
    v2 = *(_DWORD*)(v4 + 96);
  }
  if (v2 != 0) {
    v7 = *(_QWORD*)(v4 + 168);
    v8 = v7 + 12;
    v9 = *(unsigned int*)(v7 + 16);
    v10 = v8 + (unsigned int)(*(_DWORD*)(v8 + v9 + 4) + v9);
    if (*(_DWORD*)v10 == 21) {
      v11 = *(char*)(v10 + 14);
      if ((v11 & 0x8000000000000000LL) == 0) {
        v12 = v8 + (unsigned int)(*(_DWORD*)(v8 + v9 + 4 + 4 * v11) + v9);
        v13 = *(_QWORD*)(v12 + 8);
        if (v13 != 0) {
          Pane_58de20(*(_QWORD*)(v12 + 8));
          result = GameRoutine_5791a0(v13);
        }
      }
    }
  }
  v14 = *(_QWORD**)(v4 + 40);
  if (v14 != (_QWORD*)(v4 + 32)) {
    v15 = (atomic_uchar*)GameData_212dfd0;
    v16 = GameData_212dfc8;
    do {
      v17 = (_QWORD*)v14[1];
      v18 = *v17;
      *(_QWORD*)(*v14 + 8LL) = v17;
      *v17 = *v14;
      *(_QWORD*)(v18 + 8) = v14;
      *v14 = v18;
      if ((v14[10] & 8) == 0) {
        if ((atomic_load_explicit(v15, memory_order_acquire) & 1) == 0) {
          v23 = __cxa_guard_acquire(v15);
          if ((_DWORD)v23 != 0) {
            *v16 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v23, v24);
            __cxa_guard_release(v15, v25);
          }
        }
        v19 = (__int64)(v14 - 1);
        v20 = (__int64*)(*(__int64 (**)(_QWORD*))(*(v14 - 1) + 16LL))(v14 - 1);
        if (v20 != v16) {
          do {
            v20 = (__int64*)*v20;
          } while (v20 != v16 && v20 != nullptr);
          if (v20 == nullptr) {
            goto LABEL_10;
          }
        }
        v22 = (_QWORD*)v14[28];
        if (v22 != nullptr) {
          GameRoutine_579280(v22, a2);
          (*(void (**)(_QWORD*))(*v22 + 8LL))(v22);
          v19 = (__int64)v22;
        }
        else {
        LABEL_10:
          (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, a2);
          (**(void (***)(__int64))v19)(v19);
        }
        result = GameRoutine_5791a0(v19);
      }
      v14 = v17;
    } while (v17 != (_QWORD*)(v4 + 32));
  }
  if ((*(_BYTE*)(v4 + 92) & 0x44) != 0) {
    return GameRoutine_5791a0(*(_QWORD*)(v4 + 168));
  }
  return result;
}

__int64 Pane_58de20(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  void (***v6)(_QWORD);
  __int64 v7;

  v1 = (_QWORD*)a1[3];
  v2 = a1 + 2;
  if (v1 != a1 + 2) {
    do {
      v4 = (_QWORD*)v1[1];
      v5 = *v4;
      *(_QWORD*)(*v1 + 8LL) = v4;
      *v4 = *v1;
      *(_QWORD*)(v5 + 8) = v1;
      *v1 = v5;
      GameRoutine_5904e0(v1);
      GameRoutine_5791a0((__int64)v1);
      v1 = v4;
    } while (v4 != v2);
  }
  v6 = (void (***)(_QWORD))a1[26];
  a1[24] = 0;
  *a1 = 0;
  a1[1] = 0;
  if (v6 != nullptr) {
    (**v6)(v6);
    GameRoutine_5791a0((__int64)v6);
  }
  v7 = a1[15];
  a1[26] = 0;
  a1[27] = 0;
  if (v7 != 0) {
    GameRoutine_5791a0(v7);
  }
  a1[15] = 0;
  return GameRoutine_5997c0(a1 + 20);
}

__int64 Pane_58dee0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a2 + 8);
  v3 = a2 + 8;
  *(_QWORD*)v3 = *(_QWORD*)(result + 32);
  *(_QWORD*)(v2 + 8) = result + 32;
  *(_QWORD*)(*(_QWORD*)(result + 32) + 8LL) = v3;
  *(_QWORD*)(result + 32) = v2;
  *(_QWORD*)(v3 + 16) = result;
  *(_BYTE*)(v3 + 80) |= 0x10u;
  return result;
}

__int64 Pane_58df20(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(result + 40);
  v4 = *(_QWORD*)(a2 + 8);
  v3 = a2 + 8;
  *(_QWORD*)v3 = *(_QWORD*)v2;
  *(_QWORD*)(v4 + 8) = v2;
  *(_QWORD*)(*(_QWORD*)v2 + 8LL) = v3;
  *(_QWORD*)v2 = v4;
  *(_QWORD*)(v3 + 16) = result;
  *(_BYTE*)(v3 + 80) |= 0x10u;
  return result;
}

__int64 Pane_58df60(__int64 result, _QWORD* a2)
{
  __int64* v2;
  __int64 v3;

  if (a2 + 1 != (_QWORD*)(result + 32)) {
    v2 = (__int64*)a2[2];
    v3 = *v2;
    *(_QWORD*)(a2[1] + 8LL) = v2;
    *v2 = a2[1];
    *(_QWORD*)(v3 + 8) = a2 + 1;
    a2[1] = v3;
  }
  a2[3] = 0;
  return result;
}

float Pane_58e030(__int64 a1)
{
  float result;

  if ((*(_BYTE*)(a1 + 91) & 3) == 2) {
    return -*(float*)(a1 + 80);
  }
  result = 0.0;
  if ((*(_BYTE*)(a1 + 91) & 3) == 0) {
    return *(float*)(a1 + 80) * -0.5;
  }
  return result;
}

__int64 Pane_58e0c0(unsigned __int8* a1, int a2)
{
  if (a2 == 16) {
    return a1[89];
  }
  else {
    return (*(__int64 (**)(unsigned __int8*))(*(_QWORD*)a1 + 64LL))(a1);
  }
}

_BYTE* Pane_58e0e0(_BYTE* result, int a2, char a3)
{
  if (a2 != 16) {
    return (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 72LL))(result);
  }
  result[89] = a3;
  return result;
}

__int64 Pane_58e120(__int64 a1, __int64 a2, char a3)
{
  int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  v6 = GameRoutine_5714e0(a1 + 176, a2) & 1;
  if (v6 != 0) {
    result = a1;
  }
  else {
    result = 0;
  }
  if (v6 == 0 && (a3 & 1) != 0) {
    v8 = a1 + 32;
    v9 = *(_QWORD*)(a1 + 40);
    if (v9 == v8) {
      return 0;
    }
    else {
      while (1) {
        result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v9 - 8) +
                                                    256LL))(v9 - 8, a2);
        if (result != 0) {
          break;
        }
        v9 = *(_QWORD*)(v9 + 8);
        if (v9 == v8) {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 Pane_58e1e0(_QWORD* a1, __int64 a2, char a3)
{
  int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;

  v6 = (*(unsigned __int8 (**)(_QWORD*))(*a1 + 80LL))(a1);
  if (v6 != 0) {
    v7 = 0;
    while (1) {
      v8 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 88LL))(a1, v7);
      if (v8 != 0) {
        v9 = v8;
        if ((GameRoutine_5716e0(*(_QWORD*)(v8 + 40), a2) & 1) != 0) {
          break;
        }
      }
      if (v6 == ++v7) {
        goto LABEL_7;
      }
    }
  }
  else {
  LABEL_7:
    if ((a3 & 1) == 0) {
      return 0;
    }
    v10 = a1 + 4;
    v11 = (_QWORD*)a1[5];
    if (v11 == v10) {
      return 0;
    }
    else {
      while (1) {
        v12 = (*(__int64 (**)(_QWORD*, __int64))(*(v11 - 1) + 272LL))(v11 - 1,
                                                                      a2);
        if (v12 != 0) {
          break;
        }
        v11 = (_QWORD*)v11[1];
        if (v11 == v10) {
          return 0;
        }
      }
      return v12;
    }
  }
  return v9;
}

__int64 Pane_58e2e0(__int64 a1)
{
  unsigned __int8 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  _BOOL4 v8;

  v1 = *(_BYTE*)(a1 + 88);
  if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
    LODWORD(v2) = 0;
    return v1 & (*(_BYTE*)(a1 + 90) != 0) | (unsigned int)v2;
  }
  v3 = *(_QWORD*)(a1 + 168);
  v4 = v3 + 12;
  v5 = *(
      _QWORD*)(v4 +
               (unsigned int)(*(_DWORD*)(v4 + *(unsigned int*)(v3 + 16) + 4 +
                                         4LL *
                                             *(unsigned __int8*)(v4 +
                                                                 (unsigned int)(*(_DWORD*)(v4 +
                                                                                           *(unsigned int*)(v3 +
                                                                                                            16) +
                                                                                           4) +
                                                                                *(_DWORD*)(v3 +
                                                                                           16)) +
                                                                 12)) +
                              *(_DWORD*)(v3 + 16)) +
               8);
  v2 = *(_QWORD*)(v5 + 88);
  if (v2 != 0) {
    v6 = (*(_BYTE*)(v5 + 552) & 4) == 0 && (*(_BYTE*)(v2 + 8) & 0x20) != 0;
    LODWORD(v2) = v6 & (*(unsigned __int8*)(v5 + 152) ^ 1);
  }
  v7 = *(_QWORD*)(v5 + 8);
  if (v7 == 0) {
    return v1 & (*(_BYTE*)(a1 + 90) != 0) | (unsigned int)v2;
  }
  v8 = (*(_BYTE*)(v5 + 552) & 4) == 0 && (*(_BYTE*)(v7 + 4) & 2) != 0;
  return v1 & (*(_BYTE*)(a1 + 90) != 0) | (unsigned int)v2 |
         v8 & (*(unsigned __int8*)(v5 + 84) ^ 1);
}

__int64 Pane_58e3b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BOOL4 v5;
  __int64 v6;

  if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
    LODWORD(v1) = 0;
    return (unsigned int)v1;
  }
  v2 = *(_QWORD*)(a1 + 168);
  v3 = v2 + 12;
  v4 = *(
      _QWORD*)(v3 +
               (unsigned int)(*(_DWORD*)(v3 + *(unsigned int*)(v2 + 16) + 4 +
                                         4LL *
                                             *(unsigned __int8*)(v3 +
                                                                 (unsigned int)(*(_DWORD*)(v3 +
                                                                                           *(unsigned int*)(v2 +
                                                                                                            16) +
                                                                                           4) +
                                                                                *(_DWORD*)(v2 +
                                                                                           16)) +
                                                                 12)) +
                              *(_DWORD*)(v2 + 16)) +
               8);
  v1 = *(_QWORD*)(v4 + 88);
  if (v1 != 0) {
    v5 = (*(_BYTE*)(v4 + 552) & 4) == 0 && (*(_BYTE*)(v1 + 8) & 0x20) != 0;
    LODWORD(v1) = v5 & (*(unsigned __int8*)(v4 + 152) ^ 1);
  }
  v6 = *(_QWORD*)(v4 + 8);
  if (v6 == 0) {
    return (unsigned int)v1;
  }
  if ((*(_BYTE*)(v4 + 552) & 4) != 0) {
    return (unsigned int)v1;
  }
  else {
    return (unsigned int)v1 |
           ((*(_BYTE*)(v6 + 4) & 2) != 0) & (*(unsigned __int8*)(v4 + 84) ^ 1);
  }
}

__int64 Pane_58e480(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 98) & 2) != 0) {
    v9 = *(_QWORD*)(a1 + 168);
    result = GameRoutine_591740(
        *(_QWORD*)(v9 + 12 +
                   (unsigned int)(*(_DWORD*)(v9 + 12 +
                                             *(unsigned int*)(v9 + 16) + 4 +
                                             4LL *
                                                 *(unsigned __int8*)(v9 + 12 +
                                                                     (unsigned int)(*(_DWORD*)(v9 +
                                                                                               12 +
                                                                                               *(unsigned int*)(v9 +
                                                                                                                16) +
                                                                                               4) +
                                                                                    *(_DWORD*)(v9 +
                                                                                               16)) +
                                                                     12)) +
                                  *(_DWORD*)(v9 + 16)) +
                   8),
        a2, a3);
    v7 = a1 + 32;
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 == v7) {
      return result;
    }
  }
  else {
    result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 184LL))(
        a1, a2, a3);
    v7 = a1 + 32;
    v8 = *(_QWORD*)(a1 + 40);
    if (v8 == v7) {
      return result;
    }
  }
  do {
    v11 = *(_QWORD*)(v8 - 8);
    v10 = v8 - 8;
    result =
        (*(__int64 (**)(__int64, __int64, __int64))(v11 + 176))(v10, a2, a3);
    v8 = *(_QWORD*)(v10 + 16);
  } while (v8 != v7);
  return result;
}

__int64 Pane_58e560(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 i;
  __int64 v7;
  __int64 v8;

  v3 = *(_QWORD*)(result + 40);
  for (i = result + 32; v3 != i; v3 = *(_QWORD*)(v7 + 16)) {
    v8 = *(_QWORD*)(v3 - 8);
    v7 = v3 - 8;
    result = (*(__int64 (**)(__int64, __int64, __int64))(v8 + 176))(v7, a2, a3);
  }
  return result;
}

__int64 Pane_58e5e0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((*(_BYTE*)(a1 + 98) & 2) != 0) {
    v7 = *(_QWORD*)(a1 + 168);
    result = GameRoutine_591750(
        *(_QWORD*)(v7 + 12 +
                   (unsigned int)(*(_DWORD*)(v7 + 12 +
                                             *(unsigned int*)(v7 + 16) + 4 +
                                             4LL *
                                                 *(unsigned __int8*)(v7 + 12 +
                                                                     (unsigned int)(*(_DWORD*)(v7 +
                                                                                               12 +
                                                                                               *(unsigned int*)(v7 +
                                                                                                                16) +
                                                                                               4) +
                                                                                    *(_DWORD*)(v7 +
                                                                                               16)) +
                                                                     12)) +
                                  *(_DWORD*)(v7 + 16)) +
                   8),
        a2);
    v5 = a1 + 32;
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 == v5) {
      return result;
    }
  }
  else {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 200LL))(a1, a2);
    v5 = a1 + 32;
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 == v5) {
      return result;
    }
  }
  do {
    v9 = *(_QWORD*)(v6 - 8);
    v8 = v6 - 8;
    result = (*(__int64 (**)(__int64, __int64))(v9 + 192))(v8, a2);
    v6 = *(_QWORD*)(v8 + 16);
  } while (v6 != v5);
  return result;
}

__int64 Pane_58e6c0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 i;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(result + 40);
  for (i = result + 32; v2 != i; v2 = *(_QWORD*)(v5 + 16)) {
    v6 = *(_QWORD*)(v2 - 8);
    v5 = v2 - 8;
    result = (*(__int64 (**)(__int64, __int64))(v6 + 192))(v5, a2);
  }
  return result;
}

__int64 Pane_58ed60(__int64 result, int a2, __int64 a3, unsigned int a4,
                    char a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  _DWORD* v8;
  int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  _DWORD* v19;
  _DWORD* v20;
  __int64 v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  int v25;
  unsigned int v26;
  int v27;

  v5 = *(_QWORD*)(result + 168);
  v6 = result;
  if (v5 == 0) {
    v10 = a4 + 32;
    v11 = (int)a4;
    v13 = GameRoutine_579180(a4 + 32);
    *(_DWORD*)v13 = 828666741;
    *(_DWORD*)(v13 + 4) = v10;
    *(_WORD*)(v13 + 8) = 1;
    *(_QWORD*)(v13 + 12) = 0xC00000000LL;
    *(_DWORD*)(v13 + 20) = 196609;
    *(_QWORD*)(v13 + 24) = 0x800010000LL;
    *(_QWORD*)(v6 + 168) = v13;
    *(_BYTE*)(v6 + 92) |= 0x40u;
    result = memcpy(v13 + 32, a3, v11);
    goto LABEL_15;
  }
  if ((*(_BYTE*)(result + 92) & 0x44) == 0) {
    v7 = *(_DWORD*)(result + 96);
    v5 = 0;
    goto LABEL_12;
  }
  v7 = *(_DWORD*)(result + 96);
  if ((*(_BYTE*)(result + 92) & 0x40) == 0 || v7 == 0) {
  LABEL_12:
    if (v7 == 0) {
      result = Pane_58f020(result, a3, a4);
      if (v5 == 0) {
        goto LABEL_15;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v8 = (_DWORD*)(v5 + 12 +
                 (unsigned int)(*(_DWORD*)(v5 + 12 + *(unsigned int*)(v5 + 16) +
                                           4) +
                                *(_DWORD*)(v5 + 16)));
  if (*v8 != 21) {
    goto LABEL_13;
  }
  v9 = a2 - 9;
  if (a2 <= 15) {
    v9 = a2;
  }
  if (*((char*)v8 + v9 + 4) < 0) {
  LABEL_13:
    result = Pane_58f180(result, a3, a4, a5 & 1);
    if (v5 != 0) {
    LABEL_14:
      result = GameRoutine_5791a0(v5);
    }
  LABEL_15:
    v14 = *(_QWORD*)(v6 + 168);
    *(_BYTE*)(v6 + 92) |= 0x40u;
    if (v14 != 0 && *(_BYTE*)(v14 + 22) == 3) {
      v15 = *(unsigned int*)(v14 + 16);
      v16 = v14 + 12;
      v17 = v14 + 12 + v15;
      v18 = *(unsigned __int16*)(v17 + 2);
      if (*(_WORD*)(v17 + 2) != 0) {
        v19 = (_DWORD*)(v16 + (unsigned int)(*(_DWORD*)(v17 + 4) + v15));
        v20 = v19 + 1;
        if (v18 == 1) {
          v21 = 0;
        }
        else {
          v21 = 0;
          do {
            v24 = *(_DWORD*)(v14 + *(unsigned int*)(v14 + 16) + 4 * v21 + 16) +
                  *(_DWORD*)(v14 + 16);
            *(_DWORD*)(v6 + 96) |= 1 << *(_DWORD*)(v16 + v24);
            if (*v19 == 21) {
              v25 = *(_DWORD*)(v16 + v24);
              if (v25 > 15) {
                v25 -= 9;
              }
              *((_BYTE*)v20 + v25) = v21;
            }
            result = *(unsigned int*)(v6 + 96);
            v26 = *(_DWORD*)(v14 + *(unsigned int*)(v14 + 16) + 4 * v21 + 20) +
                  *(_DWORD*)(v14 + 16);
            *(_DWORD*)(v6 + 96) = result | (1 << *(_DWORD*)(v16 + v26));
            if (*v19 == 21) {
              v27 = *(_DWORD*)(v16 + v26);
              result = (unsigned int)(v27 - 9);
              if (v27 > 15) {
                v27 -= 9;
              }
              *((_BYTE*)v20 + v27) = v21 + 1;
            }
            v21 += 2;
          } while ((v18 & 0xFFFE) != v21);
        }
        if ((v18 & 1) != 0) {
          v22 = *(_DWORD*)(v14 + 16 + *(unsigned int*)(v14 + 16) + 4 * v21) +
                *(_DWORD*)(v14 + 16);
          *(_DWORD*)(v6 + 96) |= 1 << *(_DWORD*)(v16 + v22);
          if (*v19 == 21) {
            v23 = *(_DWORD*)(v16 + v22);
            if (v23 > 15) {
              v23 -= 9;
            }
            *((_BYTE*)v20 + v23) = v21;
          }
        }
      }
    }
  }
  return result;
}

__int64 Pane_58f020(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int16 v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  __int64 result;

  v6 = a3 + *(_DWORD*)(*(_QWORD*)(a1 + 168) + 4LL) + 20;
  v7 = GameRoutine_579180(v6);
  v8 = *(_QWORD*)(a1 + 168);
  v9 = v7;
  v10 = *(_DWORD*)(v8 + 8);
  *(_QWORD*)v7 = *(_QWORD*)v8;
  *(_DWORD*)(v7 + 4) = v6;
  *(_DWORD*)(v7 + 8) = v10;
  LOWORD(v8) = *(_WORD*)(*(_QWORD*)(a1 + 168) + 8LL) + 1;
  *(_WORD*)(v7 + 8) = v8;
  *(_DWORD*)(v7 + 12) = 0;
  *(_DWORD*)(v7 + 16) = 12 * (unsigned __int16)v8;
  *(_DWORD*)(v7 + 20) = 196609;
  v11 = *(_QWORD*)(a1 + 168);
  if (*(_WORD*)(v11 + 8) != 0) {
    v12 = a3 + 8;
    v13 = 0;
    v14 = 0;
    do {
      v15 = v11 + v13;
      v16 = v7 + v13;
      ++v14;
      v13 += 12;
      v17 = *(_DWORD*)(v15 + 12);
      v18 = *(_DWORD*)(v15 + 16);
      v19 = *(_WORD*)(v15 + 20);
      LOBYTE(v15) = *(_BYTE*)(v15 + 22);
      *(_BYTE*)(v16 + 35) = 0;
      *(_WORD*)(v16 + 32) = v19;
      *(_BYTE*)(v16 + 34) = v15;
      *(_DWORD*)(v16 + 24) = v17 + v12;
      *(_DWORD*)(v16 + 28) = v18 + v12;
    } while (v14 < *(unsigned __int16*)(*(_QWORD*)(a1 + 168) + 8LL));
    v20 = v13 + 12;
    v21 = v13 + 24;
  }
  else {
    v21 = 24;
    v20 = 12;
  }
  v22 = v21 + 8;
  *(_DWORD*)(v7 + v21) = 0x10000;
  *(_DWORD*)(v7 + v21 + 4) = 8;
  memcpy(v7 + v22, a2, a3);
  result = memcpy(
      v9 + (unsigned int)(v22 + a3), *(_QWORD*)(a1 + 168) + v20,
      *(_DWORD*)(*(_QWORD*)(a1 + 168) + 4LL) -
          12 * (unsigned int)*(unsigned __int16*)(*(_QWORD*)(a1 + 168) + 8LL) -
          12);
  *(_QWORD*)(a1 + 168) = v9;
  return result;
}

__int64 Pane_58f180(__int64 a1, __int64 a2, int a3, char a4)
{
  int v4;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  unsigned int* v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  __int64 v38;
  __int64 result;
  unsigned int v40;
  __int64 v41;
  unsigned __int8* v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  unsigned int v47;
  int v48;
  __int64 v49;

  v4 = a3 + 4;
  v9 = *(_DWORD*)(*(_QWORD*)(a1 + 168) + 4LL) + a3 + 4;
  v10 = GameRoutine_579180(v9);
  v11 = *(_QWORD*)(a1 + 168);
  v12 = v10;
  v13 = *(_DWORD*)(v11 + 8);
  *(_QWORD*)v10 = *(_QWORD*)v11;
  *(_DWORD*)(v10 + 4) = v9;
  *(_DWORD*)(v10 + 8) = v13;
  *(_WORD*)(v10 + 8) = *(_WORD*)(*(_QWORD*)(a1 + 168) + 8LL);
  v14 = *(_QWORD*)(a1 + 168);
  if (*(_WORD*)(v14 + 8) != 0) {
    v15 = 0;
    v16 = 0;
    do {
      v17 = v14 + v15;
      v18 = v10 + v15;
      ++v16;
      v15 += 12;
      v19 = *(unsigned __int8*)(v17 + 22);
      v20 = *(_DWORD*)(v17 + 12);
      v21 = *(_DWORD*)(v17 + 16);
      LOWORD(v17) = *(_WORD*)(v17 + 20);
      *(_BYTE*)(v18 + 23) = 0;
      v22 = v20 + v4;
      *(_WORD*)(v18 + 20) = v17;
      *(_BYTE*)(v18 + 22) = v19;
      if (v19 == 3) {
        v23 = 0;
      }
      else {
        v23 = v4;
      }
      *(_DWORD*)(v18 + 12) = v22;
      *(_DWORD*)(v18 + 16) = v21 + v23;
      v24 = *(_QWORD*)(a1 + 168);
    } while (v16 < *(unsigned __int16*)(v24 + 8));
    v25 = v15 + 12;
  }
  else {
    v25 = 12;
    v24 = *(_QWORD*)(a1 + 168);
  }
  v26 = v25;
  v27 = (unsigned int*)(v24 + v25);
  v28 = v10 + v25;
  v29 = v25 + 4;
  v30 = *v27;
  *(_DWORD*)v28 = *v27;
  v31 = HIWORD(v30) + 1;
  *(_WORD*)(v28 + 2) = HIWORD(v30) + 1;
  v32 = *(_QWORD*)(a1 + 168);
  v33 = *(unsigned __int16*)(v32 + 8);
  if (*(_WORD*)(v32 + 8) != 0) {
    if ((_DWORD)v33 == 1) {
      v34 = *((unsigned __int16*)v27 + 1);
      v35 = (unsigned int)(*(_DWORD*)(v32 + 4) - 28 - 4 * v34);
      if ((a4 & 1) == 0) {
        goto LABEL_12;
      }
      goto LABEL_23;
    }
    v42 = (unsigned __int8*)(v32 + 34);
    v43 = 1;
    while (1) {
      v44 = *v42;
      v42 += 12;
      if (v44 != 0) {
        break;
      }
      if (v33 == ++v43) {
        goto LABEL_21;
      }
    }
  }
  else {
  LABEL_21:
    v43 = 1;
  }
  v45 =
      12 * v43 - *(_DWORD*)(v14 + 16) + *(_DWORD*)(v14 + 12 + 12 * v43 + 4) - 4;
  v34 = *((unsigned __int16*)v27 + 1);
  v35 = (unsigned int)(v45 - 4 * v34);
  if ((a4 & 1) == 0) {
  LABEL_12:
    if (v34 != 0) {
      v36 = 0;
      do {
        ++v36;
        *(_DWORD*)(v10 + v29) = *(_DWORD*)(v32 + v29) + 4;
        v29 += 4;
      } while (v36 < *((unsigned __int16*)v27 + 1));
      LOWORD(v31) = *(_WORD*)(v28 + 2);
    }
    v37 = (unsigned int)(v29 + 4);
    *(_DWORD*)(v10 + v29) = v35 + 4 * (unsigned __int16)v31 + 4;
    memcpy(v10 + v37, *(_QWORD*)(a1 + 168) + v29, v35);
    v38 = (unsigned int)(v37 + v35);
    result = memcpy(v12 + v38, a2, a3);
    v40 = v38 + a3;
    v41 = *(_QWORD*)(a1 + 168);
    if (*(unsigned __int16*)(v41 + 8) < 2u) {
      goto LABEL_29;
    }
  LABEL_28:
    result = memcpy(v12 + v40, v41 + (unsigned int)(v29 + v35),
                    (unsigned int)(*(_DWORD*)(v41 + 4) - (v29 + v35)));
    goto LABEL_29;
  }

LABEL_23:
  *(_DWORD*)(v10 + v29) = 4 * (unsigned __int16)v31 + 4;
  if (*((_WORD*)v27 + 1) != 0) {
    v46 = v32 + 4;
    v47 = 0;
    do {
      ++v47;
      *(_DWORD*)(v10 + 8 + v26) = v4 + *(_DWORD*)(v46 + v26);
      v26 += 4;
    } while (v47 < *((unsigned __int16*)v27 + 1));
    v29 = v26 + 4;
  }
  v48 = v26 + 8;
  memcpy(v10 + (unsigned int)(v26 + 8), a2, a3);
  v49 = (unsigned int)(v48 + a3);
  result = memcpy(v12 + v49, *(_QWORD*)(a1 + 168) + v29, v35);
  v40 = v49 + v35;
  v41 = *(_QWORD*)(a1 + 168);
  if (*(unsigned __int16*)(v41 + 8) >= 2u) {
    goto LABEL_28;
  }

LABEL_29:
  *(_QWORD*)(a1 + 168) = v12;
  return result;
}

__int64 Pane_58f460(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  __int64 v10;
  __int64 v11;

  if ((~*(unsigned __int8*)(result + 88) & 0x81) == 0) {
    if ((*(_BYTE*)(result + 92) & 0x10) != 0 && *(_BYTE*)(result + 90) != 0) {
      if ((*(_BYTE*)(result + 98) & 2) != 0) {
        v6 = *(_QWORD*)(result + 168);
        v5 = result;
        v7 = v6 + 12;
        GameRoutine_591d60(
            *(_QWORD*)(v7 +
                       (unsigned int)(*(_DWORD*)(v7 +
                                                 *(unsigned int*)(v6 + 16) + 4 +
                                                 4LL *
                                                     *(unsigned __int8*)(v7 +
                                                                         (unsigned int)(*(_DWORD*)(v7 +
                                                                                                   *(unsigned int*)(v6 +
                                                                                                                    16) +
                                                                                                   4) +
                                                                                        *(_DWORD*)(v6 +
                                                                                                   16)) +
                                                                         12)) +
                                      *(_DWORD*)(v6 + 16)) +
                       8),
            a2, a3);
      }
      else {
        v5 = result;
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)result + 224LL))(
            result, a2, a3);
      }
      result = v5;
    }
    if ((*(_BYTE*)(result + 88) & 2) == 0 || *(_BYTE*)(result + 90) != 0) {
      v8 = *(_QWORD*)(result + 40);
      for (i = result + 32; v8 != i; v8 = *(_QWORD*)(v10 + 16)) {
        v11 = *(_QWORD*)(v8 - 8);
        v10 = v8 - 8;
        result = (*(__int64 (**)(__int64, __int64, __int64))(v11 + 216))(
            v10, a2, a3);
      }
    }
  }
  return result;
}

__int64 Pane_58f580(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;

  if ((*(_BYTE*)(result + 88) & 2) == 0 || *(_BYTE*)(result + 90) != 0) {
    v5 = *(_QWORD*)(result + 40);
    for (i = result + 32; v5 != i; v5 = *(_QWORD*)(v7 + 16)) {
      v8 = *(_QWORD*)(v5 - 8);
      v7 = v5 - 8;
      result =
          (*(__int64 (**)(__int64, __int64, __int64))(v8 + 216))(v7, a2, a3);
    }
  }
  return result;
}

__int64 Pane_58f610(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 80LL))(a2, a1);
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 32LL))(a2, a4);
}

__int64 Pane_58f660(_QWORD* a1, __int64 a2, char a3)
{
  __int64 result;
  _QWORD* v7;
  _QWORD* i;
  _QWORD* v9;
  __int64 v10;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((a3 & 1) != 0) {
    v7 = a1 + 4;
    for (i = (_QWORD*)a1[5]; i != v7; i = (_QWORD*)v9[2]) {
      v10 = *(i - 1);
      v9 = i - 1;
      result =
          (*(__int64 (**)(_QWORD*, __int64, __int64))(v10 + 160))(v9, a2, 1);
    }
  }
  return result;
}

__int64 Pane_58f6e0(__int64 a1, __int64 a2)
{
  int v4;
  unsigned int v5;
  __int64 v6;

  v4 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  if (v4 != 0) {
    v5 = 0;
    do {
      v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 88LL))(a1, v5);
      if (v6 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)a2 + 128LL))(a2, v6);
      }
      ++v5;
    } while (v4 != v5);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2 + 112LL))(a2, a1);
}

_QWORD* Pane_58f780(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = result[19];
  *(_QWORD*)(a2 + 152) = result[17];
  *(_QWORD*)(a2 + 168) = v2;
  *(_QWORD*)(a2 + 136) = result[15];
  *(_QWORD*)(a2 + 128) = result[14];
  v3 = result[18];
  *(_QWORD*)(a2 + 144) = result[16];
  LOBYTE(v2) = *(_BYTE*)(a2 + 404);
  *(_QWORD*)(a2 + 160) = v3;
  *(_BYTE*)(a2 + 404) = v2 & 0xDF;
  return result;
}

void Pane_58f7c0(__int64 a1, __int64 a2, char a3)
{
  char v3;
  char v6;
  __int64 v7;
  __int64 i;

  v3 = *(_BYTE*)(a1 + 88);
  v6 = a3 | ((v3 & 0x10) != 0);
  if ((v3 & 0x40) == 0 && (a3 & 1 | ((v3 & 0x10) != 0)) != 0) {
    *(_BYTE*)(a1 + 88) = v3 & 0xAF;
    GameRoutine_58e9d0(a1, a2);
  }
  v7 = a1 + 32;
  for (i = *(_QWORD*)(a1 + 40); i != v7; i = *(_QWORD*)(i + 8)) {
    Pane_58f7c0(i - 8, a2, v6 & 1);
  }
}

__int64 Pane_58f850(__int64 a1)
{
  __int64 v2;

  if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 168);
  return *(
      _QWORD*)(v2 + 12 +
               (unsigned int)(*(_DWORD*)(v2 + 12 + *(unsigned int*)(v2 + 16) +
                                         4 +
                                         4LL *
                                             *(unsigned __int8*)(v2 + 12 +
                                                                 (unsigned int)(*(_DWORD*)(v2 +
                                                                                           12 +
                                                                                           *(unsigned int*)(v2 +
                                                                                                            16) +
                                                                                           4) +
                                                                                *(_DWORD*)(v2 +
                                                                                           16)) +
                                                                 12)) +
                              *(_DWORD*)(v2 + 16)) +
               8);
}

__int64 Pane_58f8a0(__int64 a1)
{
  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 88LL))(a1, 0);
  }
  else {
    return 0;
  }
}

__int64 Pane_58f910(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  return 0;
}

float Pane_58f940(__int64 a1, float* a2)
{
  float result;

  *a2 = fabsf(*(float*)(a1 + 80));
  result = fabsf(*(float*)(a1 + 84));
  a2[1] = result;
  return result;
}

float Pane_58f960(__int64* a1, __int64 a2)
{
  __int64 v2;
  float v5;
  int v6;
  float result;
  __int64 v8;

  v2 = *a1;
  v8 = 0;
  (*(void (**)(__int64*, __int64*))(v2 + 96))(a1, &v8);
  if ((*((_BYTE*)a1 + 91) & 3) != 2) {
    v5 = 0.0;
    if ((*((_BYTE*)a1 + 91) & 3) == 0) {
      v5 = *(float*)&v8 * -0.5;
    }
    *(float*)a2 = v5;
    v6 = (*((unsigned __int8*)a1 + 91) >> 2) & 3;
    if (v6 != 2) {
      goto LABEL_5;
    }
  LABEL_9:
    result = *((float*)&v8 + 1);
    *(_DWORD*)(a2 + 4) = HIDWORD(v8);
    return result;
  }
  *(float*)a2 = -*(float*)&v8;
  v6 = (*((unsigned __int8*)a1 + 91) >> 2) & 3;
  if (v6 == 2) {
    goto LABEL_9;
  }

LABEL_5:
  result = 0.0;
  if (v6 == 0) {
    result = *((float*)&v8 + 1) * 0.5;
  }
  *(float*)(a2 + 4) = result;
  return result;
}

__int64 Pane_58fa40(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 168);
  if (v1 != 0) {
    return *(unsigned __int16*)(v1 + 8) -
           (unsigned int)(*(_DWORD*)(a1 + 96) != 0);
  }
  else {
    return 0;
  }
}

__int64 Pane_58fa70(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 168);
  if (v1 == 0) {
    return 0;
  }
  if (*(_DWORD*)(a1 + 96) == 0) {
    return v1 + 12;
  }
  v2 = *(unsigned __int16*)(v1 + 8);
  v3 = v1 + 24;
  if (v2 == 1) {
    return 0;
  }
  else {
    return v3;
  }
}

unsigned int* Pane_58fac0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  int v5;
  unsigned int* v6;
  __int16 v7;
  int v8;
  unsigned __int16 v9;

  v2 = *(_QWORD*)(a1 + 168);
  if (v2 == 0) {
    return nullptr;
  }
  v3 = *(_DWORD*)(a1 + 96);
  if (v3 == 0) {
    v9 = *(_WORD*)(v2 + 8);
    v6 = (unsigned int*)(v2 + 12);
    v8 = v9;
    if (v9 != 0) {
      goto LABEL_7;
    }
    return nullptr;
  }
  v5 = *(unsigned __int16*)(v2 + 8);
  if (v5 == 1) {
    return nullptr;
  }
  v6 = (unsigned int*)(v2 + 24);
  v7 = v3 != 0;
  v8 = (unsigned __int16)(v5 - v7);
  if ((_WORD)v5 == v7) {
    return nullptr;
  }

LABEL_7:
  while ((unsigned int)strcmp(a2, (char*)v6 + *v6) != 0) {
    v6 += 3;
    if (--v8 == 0) {
      return nullptr;
    }
  }
  return v6;
}

__int64 Pane_58fb80(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;

  if ((GameRoutine_5714e0(a1 + 176, a2) & 1) != 0) {
    return a1;
  }
  v5 = *(_QWORD*)(a1 + 40);
  v6 = a1 + 32;
  if (v5 == v6) {
    return 0;
  }
  while (1) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(v5 - 8) + 256LL))(
        v5 - 8, a2);
    if (result != 0) {
      break;
    }
    v5 = *(_QWORD*)(v5 + 8);
    if (v5 == v6) {
      return 0;
    }
  }
  return result;
}

__int64 Pane_58fc20(_QWORD* a1, __int64 a2)
{
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 result;
  _QWORD* v10;
  _QWORD* v11;

  v4 = (*(unsigned __int8 (**)(_QWORD*))(*a1 + 80LL))(a1);
  if (v4 != 0) {
    v5 = 0;
    while (1) {
      v6 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 88LL))(a1, v5);
      if (v6 != 0) {
        v7 = v6;
        v8 = GameRoutine_5716e0(*(_QWORD*)(v6 + 40), a2);
        result = v7;
        if ((v8 & 1) != 0) {
          break;
        }
      }
      if (v4 == ++v5) {
        goto LABEL_7;
      }
    }
  }
  else {
  LABEL_7:
    v10 = a1 + 4;
    v11 = (_QWORD*)a1[5];
    if (v11 == v10) {
      return 0;
    }
    else {
      while (1) {
        result = (*(__int64 (**)(_QWORD*, __int64))(*(v11 - 1) + 272LL))(
            v11 - 1, a2);
        if (result != 0) {
          break;
        }
        v11 = (_QWORD*)v11[1];
        if (v11 == v10) {
          return 0;
        }
      }
    }
  }
  return result;
}

__int64 Pane_58fd20(__int64 a1)
{
  unsigned __int8 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  _BOOL4 v8;
  int v9;

  v1 = *(_BYTE*)(a1 + 88);
  if ((*(_BYTE*)(a1 + 98) & 2) != 0) {
    v3 = *(_QWORD*)(a1 + 168);
    v4 = v3 + 12;
    v5 = *(
        _QWORD*)(v4 +
                 (unsigned int)(*(_DWORD*)(v4 + *(unsigned int*)(v3 + 16) + 4 +
                                           4LL *
                                               *(unsigned __int8*)(v4 +
                                                                   (unsigned int)(*(_DWORD*)(v4 +
                                                                                             *(unsigned int*)(v3 +
                                                                                                              16) +
                                                                                             4) +
                                                                                  *(_DWORD*)(v3 +
                                                                                             16)) +
                                                                   12)) +
                                *(_DWORD*)(v3 + 16)) +
                 8);
    v2 = *(_QWORD*)(v5 + 88);
    if (v2 != 0) {
      v6 = (*(_BYTE*)(v5 + 552) & 4) == 0 && (*(_BYTE*)(v2 + 8) & 0x20) != 0;
      LODWORD(v2) = v6 & (*(unsigned __int8*)(v5 + 152) ^ 1);
    }
    v7 = *(_QWORD*)(v5 + 8);
    if (v7 != 0) {
      v8 = (*(_BYTE*)(v5 + 552) & 4) == 0 && (*(_BYTE*)(v7 + 4) & 2) != 0;
      v9 = v1 & (*(_BYTE*)(a1 + 90) != 0) | v2 |
           v8 & (*(unsigned __int8*)(v5 + 84) ^ 1);
      if ((v1 & (*(_BYTE*)(a1 + 90) != 0) |
           ((unsigned int)v2 | v8 & (*(unsigned __int8*)(v5 + 84) ^ 1)) & 1) !=
          0) {
        return v9 ^ 1u;
      }
      goto LABEL_15;
    }
  }
  else {
    LODWORD(v2) = 0;
  }
  v9 = v1 & (*(_BYTE*)(a1 + 90) != 0) | v2;
  if ((v1 & (*(_BYTE*)(a1 + 90) != 0) | v2 & 1) != 0) {
    return v9 ^ 1u;
  }

LABEL_15:
  if ((*(_BYTE*)(a1 + 88) & 2) != 0) {
    *(_BYTE*)(a1 + 88) = v1 & 0x7F;
  }
  else {
    *(_BYTE*)(a1 + 92) &= ~0x10u;
  }
  return v9 ^ 1u;
}

long double Pane_58fef0(__int64* a1, _OWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int128 v6;
  float v7;
  float v8;
  float v9;
  __int128 v10;
  __int64 v12;
  __int64 v13;

  v2 = *a1;
  v13 = 0;
  (*(void (**)(__int64*, __int64*))(v2 + 96))(a1, &v13);
  v5 = *a1;
  v12 = 0;
  (*(void (**)(__int64*, __int64*))(v5 + 104))(a1, &v12);
  LODWORD(v6) = 0;
  DWORD2(v6) = 0;
  v7 = 1.0 / (float)((float)(*(float*)&v12 + *(float*)&v13) - *(float*)&v12);
  v8 = 1.0 / (float)((float)(*((float*)&v12 + 1) - *((float*)&v13 + 1)) -
                     *((float*)&v12 + 1));
  v9 =
      -(float)((float)(*(float*)&v12 + (float)(*(float*)&v12 + *(float*)&v13)) *
               v7);
  DWORD1(v10) = 0;
  DWORD2(v10) = 0;
  *(float*)&v10 = v7 + v7;
  *((float*)&v10 + 3) = v9;
  *((float*)&v6 + 1) = v8 + v8;
  *((float*)&v6 + 3) =
      -(float)((float)(*((float*)&v12 + 1) +
                       (float)(*((float*)&v12 + 1) - *((float*)&v13 + 1))) *
               v8);
  *a2 = v10;
  a2[1] = v6;
  a2[2] = GameData_1a833d0;
  a2[3] = GameData_1a82dc0;
  return *(long double*)&GameData_1a833d0;
}

__int64 Pane_590280(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;

  v5 = GameRoutine_577d40(*(_QWORD*)(a3 + 184), 1);
  return GameRoutine_58c820(a2, a3, v5);
}

__int64 Pane_5902c0(__int64 result, __int64 a2, __int64 a3)
{
  char v3;

  *(_QWORD*)result = *(_QWORD*)(*(_QWORD*)(a2 + 184) + 128LL);
  *(_QWORD*)(result + 8) = a2 + 80;
  *(_QWORD*)(result + 16) = *(_QWORD*)(a2 + 176);
  *(_DWORD*)(result + 24) = 1065353216;
  *(_BYTE*)(result + 28) = *(_BYTE*)(a2 + 404) & 1;
  *(_BYTE*)(result + 29) = (*(_BYTE*)(a2 + 404) & 2) != 0;
  v3 = *(_BYTE*)(a2 + 404);
  *(_BYTE*)(result + 31) = 0;
  *(_QWORD*)(result + 32) = a3;
  *(_BYTE*)(result + 30) = (v3 & 4) != 0;
  return result;
}

bool Pane_590310(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL8 result;

  result = false;
  if ((*(_BYTE*)(a1 + 96) & 4) != 0) {
    v1 = *(_QWORD*)(a1 + 168);
    v2 = v1 + 12;
    v3 = *(unsigned int*)(v1 + 16);
    v4 = v2 + (unsigned int)(*(_DWORD*)(v2 + v3 + 4) + v3);
    if (*(_DWORD*)v4 == 21) {
      v5 = *(char*)(v4 + 6);
      if ((v5 & 0x8000000000000000LL) == 0 &&
          (*(_BYTE*)(v2 +
                     (unsigned int)(*(_DWORD*)(v2 + v3 + 4 + 4 * v5) + v3) +
                     4) &
           2) != 0) {
        return true;
      }
    }
  }
  return result;
}

bool Pane_590370(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL8 result;

  result = false;
  if ((*(_BYTE*)(a1 + 96) & 4) != 0) {
    v1 = *(_QWORD*)(a1 + 168);
    v2 = v1 + 12;
    v3 = *(unsigned int*)(v1 + 16);
    v4 = v2 + (unsigned int)(*(_DWORD*)(v2 + v3 + 4) + v3);
    if (*(_DWORD*)v4 == 21) {
      v5 = *(char*)(v4 + 6);
      if ((v5 & 0x8000000000000000LL) == 0 &&
          (*(_BYTE*)(v2 +
                     (unsigned int)(*(_DWORD*)(v2 + v3 + 4 + 4 * v5) + v3) +
                     4) &
           1) != 0) {
        return true;
      }
    }
  }
  return result;
}

bool Pane_5903d0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL8 result;

  result = false;
  if ((*(_BYTE*)(a1 + 96) & 4) != 0) {
    v1 = *(_QWORD*)(a1 + 168);
    v2 = v1 + 12;
    v3 = *(unsigned int*)(v1 + 16);
    v4 = v2 + (unsigned int)(*(_DWORD*)(v2 + v3 + 4) + v3);
    if (*(_DWORD*)v4 == 21) {
      v5 = *(char*)(v4 + 6);
      if ((v5 & 0x8000000000000000LL) == 0 &&
          (*(_BYTE*)(v2 +
                     (unsigned int)(*(_DWORD*)(v2 + v3 + 4 + 4 * v5) + v3) +
                     4) &
           4) != 0) {
        return true;
      }
    }
  }
  return result;
}

float Pane_590430(__int64 a1)
{
  float result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  result = 0.0;
  if ((*(_BYTE*)(a1 + 96) & 4) != 0) {
    v2 = *(_QWORD*)(a1 + 168);
    v3 = v2 + 12;
    v4 = *(unsigned int*)(v2 + 16);
    v5 = v3 + (unsigned int)(*(_DWORD*)(v3 + v4 + 4) + v4);
    if (*(_DWORD*)v5 == 21) {
      v6 = *(char*)(v5 + 6);
      if ((v6 & 0x8000000000000000LL) == 0) {
        return *(float*)(v3 +
                         (unsigned int)(*(_DWORD*)(v3 + v4 + 4 + 4 * v6) + v4) +
                         8);
      }
    }
  }
  return result;
}

__int64* Pane_Unknown2()
{
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfe0,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_212dfd8;
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_212dfe0) != 0) {
    *GameData_212dfd8 = 0;
    __cxa_guard_release(GameData_212dfe0, v1);
  }
  return GameData_212dfd8;
}

#pragma GCC visibility pop
