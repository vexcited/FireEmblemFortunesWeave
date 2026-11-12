#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12623a0(_QWORD*, __int64, int);
__int64 GameRoutine_1264480(_QWORD);
bool DeliveryRideExecutor_Unknown2(__int64 a1, __int64 a2, int a3);
bool DeliveryRideExecutor_Unknown3(__int64 a1, __int64 a2, int a3);
__int64 GameRoutine_12625e0(unsigned __int64, int*);
extern __int64 GameData_21c99a8;
unsigned __int64 GameRoutine_1262820(unsigned __int64 result, int*, int*, int*);
__int64 DeliveryRideExecutor_1264480(_QWORD* a1, unsigned __int8* a2);
__int64 RidePool_93d820(_QWORD);
__int64 UnitHeroes_6d2b90(_QWORD, _QWORD);
extern __int64* GameData_212c8b0[11];
__int64 DeliveryRideExecutor_Unknown5(__int64 result);
__int64 RidePool_93d820_alt1(__int64 result) __asm__("RidePool_93d820");
__int64 UnitHeroes_6d2b90_alt1(__int64,
                               unsigned __int8*) __asm__("UnitHeroes_6d2b90");

bool DeliveryRideExecutor_Unknown2(__int64 a1, __int64 a2, int a3)
{
  _QWORD* v5;
  int v6;
  int v7;

  v5 = (_QWORD*)GameRoutine_1264480(a1 + 8);
  GameRoutine_12623a0(v5, 0, a3);
  v6 = *(_DWORD*)(a1 + 48);
  v7 = *(_DWORD*)(a1 + 52) + 1;
  *(_DWORD*)(a1 + 52) = v7;
  return v7 >= v6;
}

bool DeliveryRideExecutor_Unknown3(__int64 a1, __int64 a2, int a3)
{
  _QWORD* v6;
  int v7;
  int v8;

  v6 = (_QWORD*)GameRoutine_1264480(a1 + 8);
  GameRoutine_12623a0(v6, a2, a3);
  v7 = *(_DWORD*)(a1 + 48);
  v8 = *(_DWORD*)(a1 + 52) + 1;
  *(_DWORD*)(a1 + 52) = v8;
  return v8 >= v7;
}

__int64 DeliveryRideExecutor_Unknown5(__int64 result)
{
  int v1;
  _QWORD* v2;
  unsigned __int8* v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  bool v13;

  v1 = *(_DWORD*)(result + 48);
  v2 = (_QWORD*)(result + 24);
  v3 = (unsigned __int8*)GameData_212c8b0[0];
  do {
    v2 = (_QWORD*)*v2;
    if (v2 == nullptr) {
      break;
    }
    v4 = (__int64*)v2[4];
    for (i = (__int64*)v2[5]; v4 != i; v4 += 4) {
      v6 = v4[1];
      v7 = v4[2];
      if (*v4 != 0) {
        if (v6 != v7) {
          v8 = v6 + 4;
          v9 = v1;
          do {
            v10 = *(unsigned int*)(v8 - 4);
            if ((v10 & 0x80000000) != 0) {
              result = UnitHeroes_6d2b90_alt1(*v4, v3);
            }
            else {
              result = RidePool_93d820_alt1(v10);
            }
            v1 = v9 - 1;
            if (v9 < 2) {
              break;
            }
            --v9;
            v11 = v8 == v7;
            v8 += 4;
          } while (!v11);
        }
      }
      else if (v6 != v7) {
        v12 = v6 + 4;
        do {
          result = RidePool_93d820_alt1(*(unsigned int*)(v12 - 4));
          v13 = __OFSUB__(v1--, 1);
          if ((v1 < 0) ^ v13 | (v1 == 0)) {
            break;
          }
          v11 = v12 == v7;
          v12 += 4;
        } while (!v11);
      }
      if (v1 < 1) {
        return result;
      }
    }
  } while (v1 > 0);
  return result;
}

__int64 DeliveryRideExecutor_1264480(_QWORD* a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  _DWORD* v13;
  int v14;
  int v15;
  int v16;

  v2 = *a2;
  v15 = *a2;
  v16 = 1;
  v4 = a1[1];
  v14 = *(
      unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) + 8 * v2) +
                        110LL);
  if (v4 != 0 && a1[3] != 0) {
    v6 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v7 = v2;
      if (v4 <= v2) {
        v7 = (unsigned int)v2 % (unsigned __int8)v4;
      }
    }
    else {
      v7 = ((_DWORD)v4 - 1) & (unsigned int)v2;
    }
    v8 = *(__int64***)(*a1 + 8 * v7);
    if (v8 != nullptr) {
      v9 = *v8;
      if (v9 != nullptr) {
        if ((v4 & v6) == 0) {
          while (1) {
            v11 = v9[1];
            if (v11 == v2) {
              if (*((_DWORD*)v9 + 4) == (_DWORD)v2) {
                goto LABEL_26;
              }
            }
            else if ((v11 & v6) != v7) {
              goto LABEL_24;
            }
            v9 = (__int64*)*v9;
            if (v9 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v10 = v9[1];
          if (v10 == v2) {
            if (*((_DWORD*)v9 + 4) == (_DWORD)v2) {
            LABEL_26:
              v13 = (_DWORD*)GameRoutine_12625e0((unsigned __int64)a1, &v15);
              ++*v13;
              return GameRoutine_12625e0((unsigned __int64)a1, &v15);
            }
          }
          else {
            if (v10 >= v4) {
              v10 %= v4;
            }
            if (v10 != v7) {
              break;
            }
          }
          v9 = (__int64*)*v9;
        } while (v9 != nullptr);
      }
    }
  }

LABEL_24:
  GameRoutine_1262820((unsigned __int64)a1, &v15, &v16, &v14);
  return GameRoutine_12625e0((unsigned __int64)a1, &v15);
}

#pragma GCC visibility pop
