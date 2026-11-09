#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15823b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212cf80[5];
extern __int64* GameData_212ceb0;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64* ComebackMenuItem_Unknown73(__int64 a1);
__int64 ComebackMenuItem_Unknown55(__int64 a1);

__int64* ComebackMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    return (
        __int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v1);
  }
  else {
    return GameData_212ceb0;
  }
}

__int64 ComebackMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v10;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v10 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v10;
  if (v10 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v7 = *(unsigned int*)(a1 + 40);
  if ((int)v7 >= 0) {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                               48LL) +
                    8 * v7);
  }
  else {
    v8 = GameData_212ceb0;
  }
  return GameRoutine_15823b0(v6, v8, 0, *(unsigned __int8*)(a1 + 82), 0);
}

#pragma GCC visibility pop
