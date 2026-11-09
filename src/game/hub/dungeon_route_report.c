#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1b00(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
_QWORD* DungeonRouteReport_f604e0(_QWORD* result);

_QWORD* DungeonRouteReport_f604e0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = result[1];
  v1 = result[2];
  v3 = result;
  if (v1 != v2) {
    for (i = 0; i < (v1 - v2) >> 3; ++i) {
      v5 = *(_QWORD*)(v2 + 8 * i);
      v6 = *(_QWORD*)(v5 + 80);
      if (v6 == 0) {
        continue;
      }
      result = *(_QWORD**)(v6 + 8);
      *(_BYTE*)v6 = 0;
      v7 = *result;
      if (*result != 0) {
        if (*(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
          *(_BYTE*)(v7 + 33) = 0;
          if (*(_BYTE*)v6 != 0) {
            goto LABEL_5;
          }
        }
        result = *(_QWORD**)(v6 + 8);
      }
      result = (_QWORD*)GameRoutine_14a1b00(result, 0.0);
    LABEL_5:
      *(_QWORD*)(v5 + 80) = 0;
      v2 = v3[1];
      v1 = v3[2];
    }
  }
  v8 = v3[4];
  v9 = v3[5];
  if (v9 != v8) {
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v3[5] = v8;
  }
  return result;
}

#pragma GCC visibility pop
