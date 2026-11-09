#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ec1aa0(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2216820;
extern char GameData_2216858;
void __attribute__((noreturn)) GameRoutine_8123d0(void);
__int64 EscapeMenuItem_Unknown6();

__int64 EscapeMenuItem_Unknown6()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v3 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v3;
    if (v3 != 0) {
      goto LABEL_9;
    }
  }
  else if (v1 != 0) {
    goto LABEL_9;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v4 = *(_QWORD*)(v0 + 664);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = v1;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      v1 = v5;
    }
  }

LABEL_9:
  (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  if ((*(_BYTE*)(GameData_21f4cc0 + 13) & 1) != 0) {
    return GameRoutine_ec1aa0();
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 8) != 0) {
    return 0;
  }
  else {
    return GameRoutine_ec1aa0();
  }
}

#pragma GCC visibility pop
