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
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_1572370_alt1(__int64, char) __asm__("GameRoutine_1572370");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
__int64* ListMenuItem_16731f0(__int64 a1);

__int64* ListMenuItem_16731f0(__int64 a1)
{
  __int64* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64* v20;
    __int64* v21;
  } v20_;
  struct {
    __int64* v22;
    __int64 v23;
  } v22_;
  struct {
    __int64 v24;
    __int64* v25;
  } v24_;

  result = *(__int64**)(a1 + 56);
  if (result != nullptr) {
    result = (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result);
    if (result != nullptr) {
      v3 = (__int64)result;
      result = *(__int64**)(a1 + 48);
      if (result != nullptr) {
        LayoutAccessor_1560070((void*)(&v24_.v24), result, "L_Change");
        v4 = v24_.v24;
        result = v24_.v25;
        v5 = *(_QWORD*)(a1 + 112);
        v24_.v24 = 0;
        v24_.v25 = nullptr;
        *(_QWORD*)(a1 + 104) = v4;
        *(_QWORD*)(a1 + 112) = result;
        if (v5 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v5);
          if (v24_.v25 != nullptr) {
            std___1___shared_weak_count___release_weak_alt1((__int64)v24_.v25);
          }
          result = *(__int64**)(a1 + 112);
        }
        if (result != nullptr) {
          result =
              (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result);
          if (result != nullptr) {
            v6 = (__int64)result;
            result = *(__int64**)(a1 + 104);
            if (result != nullptr) {
              LayoutAccessor_1560070((void*)(&v24_.v24), result, "L_Base");
              v8 = v24_.v24;
              v7 = (__int64)v24_.v25;
              v9 = *(_QWORD*)(a1 + 128);
              v24_.v24 = 0;
              v24_.v25 = nullptr;
              *(_QWORD*)(a1 + 120) = v8;
              *(_QWORD*)(a1 + 128) = v7;
              if (v9 != 0) {
                std___1___shared_weak_count___release_weak_alt1(v9);
                if (v24_.v25 != nullptr) {
                  std___1___shared_weak_count___release_weak_alt1(
                      (__int64)v24_.v25);
                }
                v8 = *(_QWORD*)(a1 + 120);
                v7 = *(_QWORD*)(a1 + 128);
              }
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                        memory_order_relaxed);
              v10 = std___1___shared_weak_count_lock_alt1(v7);
              if (v10 != 0) {
                v11 = v10;
                if (v8 != 0) {
                  GameRoutine_1572370_alt1(v8, 0);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
                  std___1___shared_weak_count___release_weak_alt1(v11);
                }
              }
              std___1___shared_weak_count___release_weak_alt1(v7);
              v12 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 128));
              LayoutAccessor_1560070((void*)(&v22_.v22), *(__int64**)(a1 + 120),
                                     "L_ArrowL");
              v13 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
                  *(_QWORD*)(a1 + 8));
              if (v22_.v23 != 0) {
                v14 = std___1___shared_weak_count_lock_alt1(v22_.v23);
                if (v14 != 0) {
                  v15 = v14;
                  if (v22_.v22 != nullptr) {
                    GameRoutine_159da00(v22_.v22, v13, 0xEu);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
                    std___1___shared_weak_count___release_weak_alt1(v15);
                  }
                }
                if (v22_.v23 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v22_.v23);
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                std___1___shared_weak_count___release_weak_alt1(v12);
              }
              v16 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 128));
              LayoutAccessor_1560070((void*)(&v20_.v20), *(__int64**)(a1 + 120),
                                     "L_ArrowR");
              v17 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
                  *(_QWORD*)(a1 + 8));
              result = v20_.v21;
              if (v20_.v21 != nullptr) {
                v18 = std___1___shared_weak_count_lock_alt1((__int64)v20_.v21);
                if (v18 != 0) {
                  v19 = v18;
                  if (v20_.v20 != nullptr) {
                    GameRoutine_159da00(v20_.v20, v17, 0xFu);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
                    std___1___shared_weak_count___release_weak_alt1(v19);
                  }
                }
                result = v20_.v21;
                if (v20_.v21 != nullptr) {
                  result =
                      (__int64*)std___1___shared_weak_count___release_weak_alt1(
                          (__int64)v20_.v21);
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
                result =
                    (__int64*)std___1___shared_weak_count___release_weak_alt1(
                        v16);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
              result =
                  (__int64*)std___1___shared_weak_count___release_weak_alt1(v6);
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return (__int64*)std___1___shared_weak_count___release_weak_alt1(v3);
      }
    }
  }
  return result;
}

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
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
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
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
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
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)v8 + 16LL))((void*)v8, v8);
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
