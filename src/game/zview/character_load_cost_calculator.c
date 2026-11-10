#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Model_a65960(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD, double);
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64 CharacterLoadCostCalculator_170f460(__int64 result);
_QWORD*
game_zview_CharacterLoadCostCalculator_collectCharaPolygon_lambda0_Invoke(
    _QWORD* result, __int64 a2);

__int64 CharacterLoadCostCalculator_170f460(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (result == 0) {
    return result;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(result + 8) + 232LL);
  if (v1 == 0) {
    return result;
  }
  if ((*(_BYTE*)(v1 + 342) & 1) == 0) {
    return result;
  }
  v2 = *(_QWORD*)(result + 384);
  if ((v2 & 0x400000000LL) == 0) {
    return result;
  }
  v3 = *(_QWORD*)(v1 + 440);
  if (v3 == 0) {
    v8 = *(_QWORD*)(v1 + 432);
    if (v8 == 0) {
      return result;
    }
    goto LABEL_15;
  }
  v4 = v3 + 16;
  v5 = *(_QWORD*)(v3 + 272);
  v6 = v4 + v5;
  if (v5 >= 2) {
    v7 = v4;
    do {
      result = memchr(v7, 87, v5 - 1);
      if (result == 0) {
        break;
      }
      if (*(_WORD*)result == 14423) {
        goto LABEL_12;
      }
      v7 = result + 1;
      v5 = v6 - v7;
    } while (v6 - v7 > 1);
  }
  result = v6;
LABEL_12:
  v8 = *(_QWORD*)(v1 + 432);
  if (v8 != 0) {
  LABEL_15:
    v9 = *(_QWORD*)(v8 + 272);
    if (v9 >= 2) {
      v10 = v8 + 16 + v9;
      result = v8 + 16;
      do {
        result = memchr(result, 87, v9 - 1);
        if (result == 0) {
          break;
        }
        if (*(_WORD*)result == 14423) {
          break;
        }
        ++result;
        v9 = v10 - result;
      } while (v10 - result >= 2);
    }
  }
  return result;
}

_QWORD*

game_zview_CharacterLoadCostCalculator_collectCharaPolygon_lambda0_Invoke(
    _QWORD* result, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  int v25;
  double v26;
  int v27;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v23 = result;
    v24 = a2;
    v25 = __cxa_guard_acquire(GameData_212df10);
    a2 = v24;
    v27 = v25;
    result = v23;
    if (v27 != 0) {
      *v3 = wld_Crc32(0, "ModelModule", 11, v26);
      __cxa_guard_release(GameData_212df10);
      a2 = v24;
      result = v23;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          v8 = result;
          result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD))(
              **(_QWORD**)(v7 + 24) + 56LL))(*(_QWORD**)(v7 + 24),
                                             *(_QWORD*)(v7 + 24));
          v12 = *((_DWORD*)v8 + 4);
          v13 = (_DWORD)result - 1;
          if (v12 < (int)result - 1) {
            v13 = *((_DWORD*)v8 + 4);
          }
          if (v12 >= 0) {
            v14 = v13;
          }
          else {
            v14 = 0;
          }
          if ((v14 & 0x80000000) != 0 ||
              (v15 = *((unsigned int*)v8 + 5), v16 = v8,
               (unsigned int)v15 > 5) ||
              (v17 = *(_QWORD*)(v7 + 88),
               0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v7 + 96) - v17) >> 3) <=
                   v14)) {
            v19 = *(_QWORD*)(v7 + 88);
            v20 = *(_QWORD*)(v7 + 96);
            if (v19 != v20) {
              memset(v19, 0, 24 * ((v20 - v19 - 24) / 0x18uLL) + 24, v9, v10,
                     v11);
            }
            result = (_QWORD*)Model_a65960(*(_QWORD*)(v7 + 24), v7 + 88);
            v18 = 0;
            if ((v14 & 0x80000000) != 0) {
              v16 = v8;
            }
            else {
              v21 = *((unsigned int*)v8 + 5);
              v16 = v8;
              if ((unsigned int)v21 <= 5) {
                v22 = *(_QWORD*)(v7 + 88);
                if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v7 + 96) - v22) >> 3) >
                    v14) {
                  v18 = *(_DWORD*)(v22 + 24LL * (unsigned int)v14 + 4 * v21);
                }
              }
            }
          }
          else {
            v18 = *(_DWORD*)(v17 + 24LL * (unsigned int)v14 + 4 * v15);
          }
          *(_DWORD*)v16[1] += v18;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
