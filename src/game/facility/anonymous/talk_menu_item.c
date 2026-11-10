#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_16eacc0(_QWORD*);
__int64 game_menu_GameMenuItem_PlayIdleAnimation(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 TalkMenuItem_PlayIdleAnimation(__int64 a1);

__int64 TalkMenuItem_PlayIdleAnimation(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v8;

  if (*(_BYTE*)(a1 + 83) == 1) {
    v2 = *(_QWORD*)(a1 + 56);
    if (v2 != 0) {
      v3 = std___1___shared_weak_count_lock(v2);
      if (v3 != 0) {
        v4 = v3;
        v5 = (atomic_ullong*)(v3 + 8);
        v6 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v6 != nullptr) {
          LABEL_7:
            GameRoutine_1562680(v6, "Wait", 1.0);
            return GameRoutine_16eacc0((_QWORD*)a1);
          }
        }
        else {
          v8 = v6;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v4);
          v6 = v8;
          if (v8 != nullptr) {
            goto LABEL_7;
          }
        }
      }
    }
    v6 = &ui_LayoutAccessor_empty_;
    goto LABEL_7;
  }
  return game_menu_GameMenuItem_PlayIdleAnimation();
}

#pragma GCC visibility pop
