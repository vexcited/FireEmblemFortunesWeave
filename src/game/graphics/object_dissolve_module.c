#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f3d070(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
__int64 ObjectDissolveModule_f8e8c0(__int64 result, __int64 a2);

__int64 ObjectDissolveModule_f8e8c0(__int64 result, __int64 a2)
{
  _QWORD* v3;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 i;
  __int64* v13;
  __int64* j;
  __int64 v15;

  if (result != 0) {
    v3 = (_QWORD*)result;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v5 = GameData_212df08;
    if ((explicit & 1) == 0) {
      result = __cxa_guard_acquire(GameData_212df10);
      if ((_DWORD)result != 0) {
        *v5 = wld_Crc32(0, "ModelModule", 11);
        result = __cxa_guard_release(GameData_212df10);
      }
    }
    v6 = v3[64];
    v7 = v6;
    while (v7 != v3[63]) {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
      if (v8 == *v5) {
        if (v3[64] != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            v11 = *(_QWORD*)(v10 + 312);
            for (i = *(_QWORD*)(v10 + 320); v11 != i; v11 += 16) {
              result = GameRoutine_f3d070(a2, v11);
            }
          }
        }
        break;
      }
    }
    v13 = (__int64*)v3[93];
    for (j = (__int64*)v3[94]; v13 != j;
         result = ObjectDissolveModule_f8e8c0(v15, a2)) {
      v15 = *v13++;
    }
  }
  return result;
}

#pragma GCC visibility pop
