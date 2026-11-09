#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212c880[5];
__int64 EquipInfoItem_RageInfo_Unknown70(__int64 a1, __int64* a2);

__int64 EquipInfoItem_RageInfo_Unknown70(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  void* v12;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        v6 = *(_QWORD*)(a1 + 96);
        if ((*(_WORD*)(v6 + 1536) & 0x40) == 0 ||
            (v7 = *(_QWORD*)(v6 + 1496), v8 = *(_QWORD*)(v6 + 1488),
             v7 == v8)) {
          v11 = GameData_212c8a8;
        }
        else {
          v9 = (v7 - v8) >> 2;
          v10 = 0;
          v11 = GameData_212c8a8;
          while (
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8LL * (*(_DWORD*)(v8 + 4 * v10) & 0xFFF)) +
                        104LL) != 6) {
            if (v9 == ++v10) {
              goto LABEL_11;
            }
          }
          v12 = (void*)(v8 + 4LL * (unsigned int)v10);
          if (v10 > -1) {
            v11 = v12;
          }
        }
      LABEL_11:
        result = GameRoutine_18a7ae0(result, v11, v6, 0, 0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
