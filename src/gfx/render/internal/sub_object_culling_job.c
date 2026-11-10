#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SubObjectCullingJob_Unknown3(_QWORD* result);
__int64 Scene_a70700(long double);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void SubObjectCullingJob_Unknown2(__int64 a1, int a2);

void SubObjectCullingJob_Unknown2(__int64 a1, int a2)
{
  unsigned __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  atomic_uint* v12;
  _QWORD* v13;
  signed int v14;
  signed int add;
  int* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  bool v20;
  __int64 v21;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 >> 62 != 0) {
    GameRoutine_60a210(a1);
  }
  v5 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 8) + 2112LL) + 16LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 2112LL), 4 * v2, 4);
  v10 = v5;
  if (v2 != 0) {
    *(__n128*)&v9 = memset(v5, 0, 4 * v2, v6, v7, v8);
  }
  v11 = a1 + 16LL * a2;
  v12 = (atomic_uint*)(a1 + 20);
  *(_QWORD*)(v11 + 64) = v10;
  *(_QWORD*)(v11 + 72) = v2;
  v13 = (_QWORD*)(v11 + 64);
  v14 = *(_DWORD*)(a1 + 56);
  while (1) {
    add = atomic_fetch_add(v12, 1u);
    if (add >= v14) {
      break;
    }
    v16 = (int*)(*(_QWORD*)(a1 + 48) + 16LL * add);
    v17 = *v16;
    v18 = v16[2];
    if ((_DWORD)v17 == v18) {
      *(_DWORD*)(*v13 + 4 * v17) += Scene_a70700(v9);
      v12 = (atomic_uint*)(a1 + 20);
    }
    else {
      if ((int)v17 <= v18) {
        v19 = 16 * v17;
        do {
          v21 =
              *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL) + 32LL * (unsigned int)v17;
          if (*(_DWORD*)(v21 + 16) - *(_DWORD*)(v21 + 8) >= 1) {
            *(_DWORD*)(*v13 + 4 * v17) += Scene_a70700(v9);
            v18 = v16[2];
          }
          v20 = v17++ < v18;
          v19 += 16;
        } while (v20);
      }
      v12 = (atomic_uint*)(a1 + 20);
    }
  }
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
