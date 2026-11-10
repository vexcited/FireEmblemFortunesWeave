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
bool game_cmdbtl_CmdBtlCommandMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
bool game_cmdbtl_CmdBtlCommandMenu_OpenImpl_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
extern _QWORD GameData_1b01768[4];
extern __int64* GameData_212ea58;
extern __int64 GameData_221a540;
__int64 CmdBtlCommandMenu_Unknown139(__int64 a1, int a2, char a3);

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

__int64 CmdBtlCommandMenu_Unknown139(__int64 a1, int a2, char a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  int v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  if (a2 == 0) {
    return 0;
  }
  v6 = GameData_212ea58;
  v7 = *GameData_212ea58;
  v8 = *(_QWORD*)(*GameData_212ea58 + 640);
  v9 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v9 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
    if (v8 != 0) {
      goto LABEL_5;
    }
  }
  else if (v8 != 0) {
    goto LABEL_5;
  }
  v8 = *(_QWORD*)(v7 + 656);
  v16 = *(_QWORD*)(v7 + 664);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      if ((*(_BYTE*)(v8 + 60) & 0x20) != 0) {
        return 0;
      }
      goto LABEL_6;
    }
  }
LABEL_5:
  if ((*(_BYTE*)(v8 + 60) & 0x20) != 0) {
    return 0;
  }
LABEL_6:
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  v11 = *v6;
  v12 = *(_QWORD*)(v10 + 48) - *(_QWORD*)(v10 + 40);
  v13 = *(_QWORD*)(*v6 + 640);
  v14 = *(_QWORD*)(*v6 + 648);
  if (v14 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v17 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
    v13 = v17;
    if (v17 != 0) {
      goto LABEL_20;
    }
  }
  else if (v13 != 0) {
    goto LABEL_20;
  }
  v13 = *(_QWORD*)(v11 + 656);
  v18 = *(_QWORD*)(v11 + 664);
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v19 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v18);
      v13 = v19;
    }
  }
LABEL_20:
  v20 = v12 >> 4;
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  v22 = *(_QWORD*)(v21 + 88);
  if (v22 == 0) {
    if (*(_QWORD*)((char*)((_QWORD*)0x1B4LL) + 4) != 0 &&
        (unsigned __int64)(v34 = *(
                               unsigned __int8*)(*(_QWORD*)((char*)((
                                                                _QWORD*)0x1B4LL) +
                                                            4) +
                                                 16LL)) <= 3) {
      v35 = GameData_1b01768[v34];
    }
    else {
      v35 = 3;
    }
    v36 = *v6 + (v35 << 7);
    v37 = *(__int64**)(v36 + 712);
    v38 = *(__int64**)(v36 + 720);
    if (v37 == v38) {
      v32 = 0;
      if ((a3 & 1) != 0) {
        goto LABEL_43;
      }
      goto LABEL_53;
    }
    v32 = 0;
    do {
      v39 = *v37;
      v37 += 2;
      if (v39 == 0) {
        break;
      }
      ++v32;
    } while (v37 != v38);
    goto LABEL_42;
  }
  v23 = *(_QWORD*)(v21 + 80);
  v24 = *(_QWORD*)(v21 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                            memory_order_relaxed);
  v25 = std___1___shared_weak_count_lock(v24);
  std___1___shared_weak_count___release_weak(v22);
  v26 = *(_QWORD*)(*(_QWORD*)(v23 + 16) + 440LL);
  if (v26 != 0 &&
      (unsigned __int64)(v27 = *(unsigned __int8*)(v26 + 16)) <= 3) {
    v28 = GameData_1b01768[v27];
  }
  else {
    v28 = 3;
  }
  v29 = *v6 + (v28 << 7);
  v30 = *(__int64**)(v29 + 712);
  v31 = *(__int64**)(v29 + 720);
  if (v30 == v31) {
    v32 = 0;
    if (v25 == 0) {
      goto LABEL_42;
    }
  }
  else {
    v32 = 0;
    do {
      v33 = *v30;
      v30 += 2;
      if (v33 == v23) {
        break;
      }
      ++v32;
    } while (v30 != v31);
    if (v25 == 0) {
      goto LABEL_42;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
    if ((a3 & 1) != 0) {
      goto LABEL_43;
    }
    goto LABEL_53;
  }
LABEL_42:
  if ((a3 & 1) == 0) {
  LABEL_53:
    if (a2 < 0 && v32 == 0 || a2 >= 1 && v32 == (_DWORD)v20 - 1) {
      return 0;
    }
  }
LABEL_43:
  if ((_DWORD)v20 != 0) {
    v40 = (v20 & (((v32 + a2) % (int)v20) >> 31)) + (v32 + a2) % (int)v20;
    if (v40 == v32) {
      return 0;
    }
  }
  else {
    v40 = 0;
    if (v32 == 0) {
      return 0;
    }
  }
  v41 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(
                                  v8) +
                              40) +
                   16LL * v40);
  v42 = *v41;
  v43 = v41[1];
  if (v43 == 0) {
    if (v42 != 0) {
      *(_BYTE*)(v8 + 8) = 6;
      goto LABEL_60;
    }
    return 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                            memory_order_relaxed);
  if (v42 == 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v43);
    }
    return 0;
  }
  *(_BYTE*)(v8 + 8) = 6;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                            memory_order_relaxed);
LABEL_60:
  v44 = *(_QWORD*)(v8 + 40);
  *(_QWORD*)(v8 + 32) = v42;
  *(_QWORD*)(v8 + 40) = v43;
  if (v44 != 0) {
    std___1___shared_weak_count___release_weak(v44);
  }
  if (v43 != 0) {
    std___1___shared_weak_count___release_weak(v43);
    if (GameData_221a540 != 0) {
      *(_DWORD*)(GameData_221a540 + 152) = 11;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v43);
    }
  }
  else if (GameData_221a540 != 0) {
    *(_DWORD*)(GameData_221a540 + 152) = 11;
  }
  BasicMenuCursor_16ddaa0(a1, 4);
  return 13;
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
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 392LL))((void*)&v7, a1);
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
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(a1 - 176) + 392LL))((void*)&v7, a1 - 176);
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
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 384LL))((void*)&v7, a1);
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
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(a1 - 176) + 384LL))((void*)&v7, a1 - 176);
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

bool game_cmdbtl_CmdBtlCommandMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                             __int64 a2)
{
  int v2;

  if (GameData_225c920 != 0) {
    v2 = 1;
  }
  else {
    v2 = GameData_2174ef4;
  }
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) == v2;
}

bool game_cmdbtl_CmdBtlCommandMenu_OpenImpl_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) == 1;
}

#pragma GCC visibility pop
