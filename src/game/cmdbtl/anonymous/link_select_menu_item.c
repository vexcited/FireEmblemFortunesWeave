#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e6cfa0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2203490;
extern __int64 ui_Manager_instance_;
extern char GameData_1a9f09e;
extern char GameData_225c920;
extern char* GameData_206a130[3];
extern int GameData_225c924;
__int64 LinkSelectMenuItem_ACall(unsigned int* a1);
__int64 LinkSelectMenuItem_Unknown70(__int64 a1, __int64 a2);

__int64 LinkSelectMenuItem_ACall(unsigned int* a1)
{
  char v2;
  __int64 result;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)a1 + 464LL))(a1);
  result = 1;
  if ((v2 & 1) != 0) {
    GameData_225c920 = 1;
    GameData_225c924 = a1[36];
    if ((unsigned int)GameData_225c924 >= 3) {
      v4 = 0;
    }
    else {
      v4 = 0x80907u >> (8 * GameData_225c924);
    }
    v5 = GameData_2203490;
    v6 = *(_QWORD*)(GameData_2203490 + 640);
    v7 = *(_QWORD*)(GameData_2203490 + 648);
    if (v7 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8),
                                              1u, memory_order_relaxed),
                    atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      if (v6 != 0) {
        goto LABEL_8;
      }
    }
    else if (v6 != 0) {
    LABEL_8:
      *(_BYTE*)(v6 + 8) = v4;
      GameRoutine_e6cfa0(a1[10], 8);
      return 4;
    }
    v6 = *(_QWORD*)(v5 + 656);
    v8 = *(_QWORD*)(v5 + 664);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    goto LABEL_8;
  }
  return result;
}

__int64 LinkSelectMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  __int64 v2;
  char* v3;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(unsigned int*)(a1 + 144);
  if ((unsigned int)v2 > 2) {
    v3 = &GameData_1a9f09e;
  }
  else {
    v3 = GameData_206a130[v2];
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, a2, 0, 7, v3);
}

#pragma GCC visibility pop
