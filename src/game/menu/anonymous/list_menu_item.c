#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_1673c10(_QWORD, _QWORD);
__int64 GameRoutine_181b920(_QWORD, _QWORD);
__int64 GameRoutine_181bd40(_QWORD, _QWORD);
__int64 GameRoutine_181bfe0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ListMenuItem_16734f0(__int64 a1);
__int64 ListMenuItem_1673610(__int64 a1);
__int64 ListMenuItem_16736d0(__int64 a1);
__int64 ListMenuItem_1673720(char* a1, char a2);
__int64 ListMenuItem_16737f0(char* a1, char a2);
__int64 ListMenuItem_16738e0(__int64 a1);
__int64 ListMenuItem_Unknown70(__int64 a1);

__int64 ListMenuItem_16734f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  char v8;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 120);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
    v6 = std___1___shared_weak_count_lock(v3);
    if (v6 != 0) {
      v7 = v6;
      if (v4 != 0) {
        GameRoutine_1572370(v4, v5 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    std___1___shared_weak_count___release_weak(v3);
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  }
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  GameRoutine_1567590("ItemChange", (v8 & 1) == 0);
  return GameRoutine_1673c10(a1, 1);
}

__int64 ListMenuItem_1673610(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  v3 = *(_QWORD*)(a1 + 128);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 120);
    v5 = *(_QWORD*)(a1 + 128);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    if (v6 != 0) {
      v7 = v6;
      if (v4 != 0) {
        GameRoutine_1572370(v4, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    std___1___shared_weak_count___release_weak(v3);
  }
  return GameRoutine_1673c10(a1, 0);
}

__int64 ListMenuItem_16736d0(__int64 a1)
{
  unsigned int v2;

  v2 = 1;
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 312LL))(a1, 1) & 1) !=
      0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 432LL))(a1);
    return 13;
  }
  return v2;
}

__int64 ListMenuItem_1673720(char* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (((*(__int64 (**)(char*))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0 ||
      (GameRoutine_181bd40(a1 + 140, a2 & 1) & 1) == 0) {
    return 0;
  }
  (*(void (**)(char*))(*(_QWORD*)a1 + 440LL))(a1);
  v4 = *((_QWORD*)a1 + 16);
  if (v4 != 0) {
    v5 = *((_QWORD*)a1 + 15);
    v6 = *((_QWORD*)a1 + 16);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 != 0) {
      v8 = v7;
      if (v5 != 0) {
        GameRoutine_159e7c0(v5, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    std___1___shared_weak_count___release_weak(v4);
  }
  return 1;
}

__int64 ListMenuItem_16737f0(char* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if (((*(__int64 (**)(char*))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0 ||
      (GameRoutine_181bfe0(a1 + 140, a2 & 1) & 1) == 0) {
    return 0;
  }
  (*(void (**)(char*))(*(_QWORD*)a1 + 440LL))(a1);
  v4 = *((_QWORD*)a1 + 16);
  if (v4 != 0) {
    v5 = *((_QWORD*)a1 + 15);
    v6 = *((_QWORD*)a1 + 16);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock(v6);
    if (v7 != 0) {
      v8 = v7;
      if (v5 != 0) {
        GameRoutine_159e7c0(v5, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
    std___1___shared_weak_count___release_weak(v4);
  }
  return 1;
}

__int64 ListMenuItem_16738e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = *(_QWORD*)(a1 + 112);
  if (v2 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  }
  v4 = *(_QWORD*)(a1 + 104);
  v5 = v3;
  if (v4 != 0) {
    ui_LayoutAccessor_SetPaneVisible(*(_QWORD*)(a1 + 104), "DefaultPoint", 0);
    v6 = *(_QWORD*)(a1 + 128);
    if (v6 == 0 || (v7 = std___1___shared_weak_count_lock(v6)) == 0) {
    LABEL_14:
      GameRoutine_1673c10(a1, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL) == a1);
      goto LABEL_15;
    }
    v8 = v7;
    v9 = *(_QWORD*)(a1 + 120);
    if (v9 != 0) {
      v10 = *(_DWORD*)(a1 + 136);
      if (v10 != 0) {
        if (v10 != 1) {
          goto LABEL_12;
        }
        v11 = 1;
        v12 = v8;
        v13 = 0;
      }
      else {
        v12 = v8;
        v11 = 0;
        v13 = 1;
      }
      ui_LayoutAccessor_SetPaneVisible(v9, "T_Txt", v13);
      ui_LayoutAccessor_SetPaneVisible(v4, "A_Gauge", v11);
      v8 = v12;
    }
  LABEL_12:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v14 = v8;
      (*(void (**)(__int64 __return_ptr, __int64))(*(_QWORD*)v8 + 16LL))(v8,
                                                                         v8);
      std___1___shared_weak_count___release_weak(v14);
    }
    goto LABEL_14;
  }

LABEL_15:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
}

__int64 ListMenuItem_Unknown70(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  const char* v12;
  __int64 v13;

  result = *(_QWORD*)(a1 + 128);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 120);
      v4 = result;
      if (v3 != 0) {
        v5 = *(unsigned int*)(a1 + 140);
        if ((_DWORD)v5 != 0) {
          v6 = (int)GameRoutine_181b920(v5, 0);
        }
        else {
          v6 = 0;
        }
        v7 = *(_QWORD*)(a1 + 88);
        v8 = *(_QWORD*)(v7 + 24);
        if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v7 + 32) - v8) >> 3) <= v6) {
          v12 = "MID_Sys_ValueEmptyLong";
        }
        else {
          v9 = *(unsigned int*)(a1 + 140);
          if ((_DWORD)v9 != 0) {
            v10 = GameRoutine_181b920(v9, 0);
            v8 = *(_QWORD*)(v7 + 24);
            v11 = v10;
          }
          else {
            v11 = 0;
          }
          v13 = v8 + 24LL * v11;
          if ((*(_BYTE*)v13 & 1) != 0) {
            v12 = *(const char**)(v13 + 16);
          }
          else {
            v12 = (const char*)(v13 + 1);
          }
        }
        result = GameRoutine_1562060(v3, "T_Txt", v12);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
