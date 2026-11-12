#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SubObjectCullingJob_Unknown3(_QWORD* result);
__int64 Scene_a70700(long double);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void SubObjectCullingJob_Unknown2_alt1(__int64 a1, int a2) __asm__(
    "SubObjectCullingJob_Unknown2");
__int64 Scene_a70700_alt1(_QWORD*, unsigned int, __int64*, int,
                          int) __asm__("Scene_a70700");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
__int64 SubObjectCullingJob_Unknown2(__int64 a1, int a2);

__int64 SubObjectCullingJob_Unknown2(__int64 a1, int a2)
{
  unsigned __int64 v2;
  __int64 result;
  __int64 v6;
  __int64 v7;
  atomic_uint* v8;
  _QWORD* v9;
  signed int v10;
  signed int add;
  int* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  bool v16;
  bool v17;
  __int64 v18;
  int v19;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 >> 62 != 0) {
    GameRoutine_60a210_alt1();
  }
  result = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 8) + 2112LL) + 16LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 2112LL), 4 * v2, 4);
  v6 = result;
  if (v2 != 0) {
    result = memset_alt1(result, 0, 4 * v2);
  }
  v7 = a1 + 16LL * a2;
  v8 = (atomic_uint*)(a1 + 20);
  *(_QWORD*)(v7 + 64) = v6;
  *(_QWORD*)(v7 + 72) = v2;
  v9 = (_QWORD*)(v7 + 64);
  v10 = *(_DWORD*)(a1 + 56);
  while (1) {
    add = atomic_fetch_add(v8, 1u);
    if (add >= v10) {
      break;
    }
    v12 = (int*)(*(_QWORD*)(a1 + 48) + 16LL * add);
    v13 = *v12;
    v14 = v12[2];
    if ((_DWORD)v13 == v14) {
      result = Scene_a70700_alt1(*(_QWORD**)(a1 + 24), v13,
                                 (__int64*)(*(_QWORD*)(a1 + 32) + 16 * v13),
                                 v12[1], v12[3]);
      *(_DWORD*)(*v9 + 4 * v13) += result;
      v8 = (atomic_uint*)(a1 + 20);
    }
    else {
      if ((int)v13 <= v14) {
        v15 = 16 * v13;
        do {
          result = *(_QWORD*)(a1 + 24);
          v18 = *(_QWORD*)(result + 16) + 32LL * (unsigned int)v13;
          v19 = *(_DWORD*)(v18 + 16) - *(_DWORD*)(v18 + 8);
          if (v19 >= 1) {
            result = Scene_a70700_alt1((_QWORD*)result, v13,
                                       (__int64*)(*(_QWORD*)(a1 + 32) + v15), 0,
                                       v19);
            *(_DWORD*)(*v9 + 4 * v13) += result;
            v14 = v12[2];
          }
          v17 = __OFSUB__(v13, v14);
          v16 = v13 - v14 < 0;
          ++v13;
          v15 += 16;
        } while (v16 != v17);
      }
      v8 = (atomic_uint*)(a1 + 20);
    }
  }
  return result;
}

_QWORD* SubObjectCullingJob_Unknown3(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;

  if ((int)result[5] >= 1) {
    v1 = result[5] & 0x7FFFFFFFLL;
    v2 = 0;
    do {
      v3 = *(_QWORD*)(result[3] + 16LL) + 32LL * (unsigned int)v2;
      v4 = *(_QWORD*)(v3 + 8);
      v5 = *(_DWORD*)(v3 + 16) - v4;
      if (v5 >= 1) {
        v6 = result[9];
        if (v6 != 0) {
          LODWORD(v6) = *(_DWORD*)(result[8] + 4 * v2);
        }
        if (result[11] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[10] + 4 * v2) + v6;
        }
        if (result[13] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[12] + 4 * v2) + v6;
        }
        if (result[15] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[14] + 4 * v2) + v6;
        }
        if (result[17] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[16] + 4 * v2) + v6;
        }
        if (result[19] != 0) {
          LODWORD(v6) = *(_DWORD*)(result[18] + 4 * v2) + v6;
        }
        if ((_DWORD)v6 == v5) {
          *(_QWORD*)(v3 + 16) = v4;
          *(_DWORD*)v3 = 3;
        }
      }
      ++v2;
    } while (v1 != v2);
  }
  return result;
}

#pragma GCC visibility pop
