#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157ac20(__int64, __int64, __int64, char);
__int64 GameRoutine_15baf60(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 EquipMenuItem_SkillPool_Unknown55(__int64 a1);

__int64 EquipMenuItem_SkillPool_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  char v11;

  GameRoutine_15baf60(a1);
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_8;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_8;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_5;
    }
  LABEL_8:
    v4 = &ui_LayoutAccessor_empty_;
    v5 = *(_QWORD**)(a1 + 88);
    if (v5 == nullptr) {
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  v6 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v6);
  if (v4 == nullptr) {
    goto LABEL_8;
  }

LABEL_5:
  v5 = *(_QWORD**)(a1 + 88);
  if (v5 != nullptr) {
  LABEL_9:
    v7 = *(unsigned int*)(a1 + 108);
    if (*(_BYTE*)(a1 + 104) == 2) {
      v8 = v5[147];
      v9 = v5[146];
    }
    else {
      v8 = v5[159];
      v9 = v5[158];
    }
    if (((v7 >> 5) & 0x7F) + 1 <= (v8 - v9) >> 2) {
      v10 = (*(_DWORD*)(v9 + 4 * ((v7 >> 5) & 0x7F)) >> v7) & 1;
      goto LABEL_15;
    }
  }

LABEL_13:
  v10 = 0;

LABEL_15:
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  return GameRoutine_157ac20((__int64)v4, (__int64)"IconEquip", v10, v11 & 1);
}

#pragma GCC visibility pop
