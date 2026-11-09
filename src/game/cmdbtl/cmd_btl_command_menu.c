#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_159da00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159e540(_QWORD);
__int64 GameRoutine_16ef9a0(void);
__int64 GameRoutine_16efdf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenu_Unknown135(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_206a0c0[])();
extern __int64 GameData_2068c78;
extern __int64 GameData_2203490;
extern __int64* GameData_212e008[9];
extern char GameData_225c920;
extern int GameData_2174ef4;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 CmdBtlCommandMenu_Unknown85(__int64 a1);
__int64 CmdBtlCommandMenu_Unknown122(__int64 a1);
__int64 CmdBtlCommandMenu_161ac20(__int64 a1);
__int64 CmdBtlCommandMenu_Unknown121(__int64 a1);
__int64 CmdBtlCommandMenu_161ad60(__int64 a1);
__int64 CmdBtlCommandMenu_Unknown135(__int64 a1);

__int64 CmdBtlCommandMenu_Unknown85(__int64 a1)
{
  __int64 v2;
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
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;

  GameRoutine_16ef9a0();
  v2 = GameData_2203490;
  v3 = *(_QWORD*)(GameData_2203490 + 640);
  v4 = *(_QWORD*)(GameData_2203490 + 648);
  if (v4 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v5 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v3 = v5;
    if (v5 != 0) {
      goto LABEL_9;
    }
  }
  else if (v3 != 0) {
    goto LABEL_9;
  }
  v3 = *(_QWORD*)(v2 + 656);
  v6 = *(_QWORD*)(v2 + 664);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v7 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      v3 = v7;
    }
  }

LABEL_9:
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 88);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v8 + 80);
      v11 = *(_QWORD*)(v8 + 88);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                memory_order_relaxed);
      v12 = std___1___shared_weak_count_lock(v11);
      if (v12 != 0) {
        v13 = *(_QWORD*)(v10 + 16);
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v14 = v12;
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v14);
        }
      }
      else {
        v13 = 0;
      }
      std___1___shared_weak_count___release_weak(v9);
    }
    else {
      v13 = 0;
    }
  }
  else {
    v13 = 0;
  }
  GameRoutine_16efdf0(a1, v13);
  v15 = GameData_2203490;
  v16 = *(_QWORD*)(GameData_2203490 + 640);
  v17 = *(_QWORD*)(GameData_2203490 + 648);
  if (v17 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v18 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
    v16 = v18;
    if (v18 != 0) {
      goto LABEL_26;
    }
  }
  else if (v16 != 0) {
    goto LABEL_26;
  }
  v16 = *(_QWORD*)(v15 + 656);
  v19 = *(_QWORD*)(v15 + 664);
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v20 = v16;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
      v16 = v20;
    }
  }

LABEL_26:
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  GameRoutine_1572370(
      a1 + 848, (int)((*(_QWORD*)(v21 + 48) - *(_QWORD*)(v21 + 40)) >> 4) > 1);
  v22 = GameRoutine_155fbe0(a1 + 848, "L_ArrowL");
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  GameRoutine_159da00(v22, v23, 14);
  v24 = GameRoutine_155fbe0(a1 + 848, "L_ArrowR");
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  return GameRoutine_159da00(v24, v25, 15);
}

__int64 CmdBtlCommandMenu_Unknown122(__int64 a1)
{
  __int64 v1;
  __int64 result;
  _DWORD* v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 != 0) {
    GameData_2174ef4 = *(_DWORD*)(v1 + 40);
  }
  (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)a1 + 392LL))(&v7, a1);
  GameRoutine_159e540(&v7);
  result = v8;
  if (v8 != 0) {
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v4 = *(_DWORD**)(a1 + 808);
  v5 = *(_DWORD**)(a1 + 816);
  if (v4 != v5) {
    v6 = *(_DWORD*)(a1 + 644);
    do {
      *v4++ = v6;
    } while (v4 != v5);
  }
  return result;
}

__int64 CmdBtlCommandMenu_161ac20(__int64 a1)
{
  __int64 v1;
  __int64 result;
  _DWORD* v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 160);
  if (v1 != 0) {
    GameData_2174ef4 = *(_DWORD*)(v1 + 40);
  }
  (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)(a1 - 176) + 392LL))(
      &v7, a1 - 176);
  GameRoutine_159e540(&v7);
  result = v8;
  if (v8 != 0) {
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v4 = *(_DWORD**)(a1 + 632);
  v5 = *(_DWORD**)(a1 + 640);
  if (v4 != v5) {
    v6 = *(_DWORD*)(a1 + 468);
    do {
      *v4++ = v6;
    } while (v4 != v5);
  }
  return result;
}

__int64 CmdBtlCommandMenu_Unknown121(__int64 a1)
{
  __int64 v1;
  __int64 result;
  _DWORD* v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 != 0) {
    GameData_2174ef4 = *(_DWORD*)(v1 + 40);
  }
  (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)a1 + 384LL))(&v7, a1);
  GameRoutine_159e540(&v7);
  result = v8;
  if (v8 != 0) {
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v4 = *(_DWORD**)(a1 + 808);
  v5 = *(_DWORD**)(a1 + 816);
  if (v4 != v5) {
    v6 = *(_DWORD*)(a1 + 644);
    do {
      *v4++ = v6;
    } while (v4 != v5);
  }
  return result;
}

__int64 CmdBtlCommandMenu_161ad60(__int64 a1)
{
  __int64 v1;
  __int64 result;
  _DWORD* v4;
  _DWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 160);
  if (v1 != 0) {
    GameData_2174ef4 = *(_DWORD*)(v1 + 40);
  }
  (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)(a1 - 176) + 384LL))(
      &v7, a1 - 176);
  GameRoutine_159e540(&v7);
  result = v8;
  if (v8 != 0) {
    result = std___1___shared_weak_count___release_weak(v8);
  }
  v4 = *(_DWORD**)(a1 + 632);
  v5 = *(_DWORD**)(a1 + 640);
  if (v4 != v5) {
    v6 = *(_DWORD*)(a1 + 468);
    do {
      *v4++ = v6;
    } while (v4 != v5);
  }
  return result;
}

__int64 CmdBtlCommandMenu_Unknown135(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  result = game_menu_GameMenu_Unknown135();
  if (GameData_225c920 != 1) {
    return result;
  }
  v3 = *(_QWORD**)(a1 + 232);
  v4 = *(_QWORD**)(a1 + 240);
  result = (__int64)v12;
  v12[0] = GameData_206a0c0;
  v13 = v12;
  if (v3 == v4) {
    v8 = 0;
  LABEL_15:
    v9 = 32;
    goto LABEL_16;
  }
  v5 = GameData_212e008[0];
  while (1) {
    if (*v3 != 0) {
      v6 = __dynamic_cast(*v3, v5, &GameData_2068c78, 0);
      if (v6 != 0) {
        v8 = v6;
        v14 = v6;
        if (v13 == nullptr) {
          GameRoutine_60a310(0, v7);
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v14) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v3 == v4) {
      v8 = 0;
      break;
    }
  }
  result = (__int64)v13;
  if (v13 == v12) {
    goto LABEL_15;
  }
  if (v13 != nullptr) {
    v9 = 40;
  LABEL_16:
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v9))(result);
  }
  if (v8 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 48LL))(v8);
    if ((result & 1) != 0) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 64LL))(v8, 1);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 568LL))(v8, a1);
      v10 = *(_QWORD*)(a1 + 8);
      if (v10 == 0) {
        goto LABEL_25;
      }
      v11 = *(_QWORD*)(a1 + 16);
      if (v10 <= v11) {
        while (*(_BYTE*)v11 != 2) {
          v11 -= 64LL;
          if (v10 > v11) {
            goto LABEL_27;
          }
        }
        if (*(_DWORD*)(v11 + 32) == 4) {
        LABEL_25:
          result = *(_QWORD*)(a1 + 336);
          *(_DWORD*)(a1 + 352) = 10;
          if (result != 0) {
            result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result +
                                                        64LL))(result, 1);
          }
        }
      }
    }
  }

LABEL_27:
  GameData_225c920 = 0;
  return result;
}

#pragma GCC visibility pop
