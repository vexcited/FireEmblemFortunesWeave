#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13e100(_QWORD, _QWORD);
__int64 GameRoutine_13e2c0(_QWORD);
__int64 GameRoutine_190240(_QWORD);
extern __int64* GameData_2134690;
extern __int64* snd_g_memory_ptr[2];
__int64 VibrationGroup_Destructor(__int64 result);

__int64 VibrationGroup_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = result;
  *(_QWORD*)result = GameData_2134690 + 2;
  if (*(_BYTE*)(result + 64) == 1) {
    v2 = *(_QWORD*)(result + 16);
    if (v2 != *(_QWORD*)(result + 8)) {
      do {
        v3 = GameRoutine_190240(v2 - 48);
        GameRoutine_13e100(v1, v3);
        v2 = *(_QWORD*)(v1 + 16);
      } while (v2 != *(_QWORD*)(v1 + 8));
    }
    *(_QWORD*)(v1 + 40) = *(_QWORD*)(v1 + 32);
    result = GameRoutine_13e2c0(v1 + 32);
    *(_BYTE*)(v1 + 64) = 0;
  }
  v4 = *(_QWORD*)(v1 + 32);
  v5 = snd_g_memory_ptr[0];
  if (v4 != 0) {
    v6 = *snd_g_memory_ptr[0];
    *(_QWORD*)(v1 + 40) = v4;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  v7 = *(_QWORD*)(v1 + 8);
  if (v7 != 0) {
    v8 = *(_QWORD*)(v1 + 16);
    v9 = *(_QWORD*)(v1 + 8);
    if (v7 != v8) {
      do {
        v10 = *(_QWORD*)(v8 - 24);
        if (v10 != 0) {
          *(_QWORD*)(v8 - 16) = v10;
          (*(void (**)(__int64))(*(_QWORD*)*v5 + 24LL))(*v5);
        }
        v11 = v8 - 48;
        if ((*(_BYTE*)(v8 - 48) & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
              *v5, *(_QWORD*)(v8 - 32));
        }
        v8 -= 48;
      } while (v11 != v7);
      v9 = *(_QWORD*)(v1 + 8);
    }
    v12 = *v5;
    *(_QWORD*)(v1 + 16) = v7;
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v12 + 24LL))(v12, v9);
  }
  return result;
}

#pragma GCC visibility pop
