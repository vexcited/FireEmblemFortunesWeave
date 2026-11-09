#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a85600(_QWORD);
__int64 GameRoutine_fe6920(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21c6978;
extern __int64 GameData_220f8b0;
extern __int64* GameData_212eec0[4];
__int64 MapManager_d6e320(__int64 result);

__int64 MapManager_d6e320(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 j;
  __int64 v8;
  char v9;

  if (*(_DWORD*)(result + 8) != 0) {
    *(_DWORD*)(result + 8) = 0;
    v1 = result;
    v2 = (_QWORD*)*GameData_212eec0[0];
    if (*GameData_212eec0[0] != 0) {
      v3 = v2[5];
      for (i = v2[6]; i != v3; i -= 16) {
        v5 = *(_QWORD*)(i - 8);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
      v2[6] = v3;
      v6 = v2[8];
      for (j = v2[9]; j != v6; j -= 16) {
        v8 = *(_QWORD*)(j - 8);
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
      v2[9] = v6;
    }
    if (*(_QWORD*)(GameData_220f8b0 + 8) != 0) {
      GameRoutine_fe6920();
    }
    if ((*(_BYTE*)(v1 + 112) & 1) != 0) {
      **(_BYTE**)(v1 + 128) = 0;
      *(_QWORD*)(v1 + 120) = 0;
    }
    else {
      *(_WORD*)(v1 + 112) = 0;
    }
    v9 = *(_BYTE*)(v1 + 64);
    *(_QWORD*)(v1 + 92) = 0;
    if ((v9 & 1) != 0) {
      **(_BYTE**)(v1 + 80) = 0;
      *(_QWORD*)(v1 + 72) = 0;
    }
    else {
      *(_WORD*)(v1 + 64) = 0;
    }
    return GameRoutine_a85600(GameData_21c6978);
  }
  return result;
}

#pragma GCC visibility pop
