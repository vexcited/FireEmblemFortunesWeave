#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15de630(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e8bc0(_QWORD, _QWORD);
__int64 GameRoutine_e6cfa0(void);
__int64 GameRoutine_e7d890(void);
__int64 GameRoutine_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_edb740(_QWORD);
__int64 GameRoutine_f47000(_QWORD);
__int64 GameRoutine_f47100(_QWORD);
__int64 GameRoutine_f47270(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fec818[])();
extern __int64 GameData_2203490;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212ea58;
bool CmdBtlTargetMenuItem_Unknown6(__int64 a1);
__int64 CmdBtlTargetMenuItem_Unknown70(__int64 a1);

bool CmdBtlTargetMenuItem_Unknown6(__int64 a1)
{
  __int64 v1;
  __int64* v2;

  if (*(_BYTE*)(a1 + 81) != 1) {
    return false;
  }
  v1 = *(int*)(a1 + 40);
  if ((_DWORD)v1 == -1) {
    v2 = &game_g_empty_item;
  }
  else {
    v2 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v1 + 828);
  }
  return (*((_BYTE*)v2 + 3) & 0x20) == 0 && *(_WORD*)v2 != 0;
}

__int64 CmdBtlTargetMenuItem_Unknown70(__int64 a1)
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
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;

  if ((GameRoutine_6e8bc0(*(_QWORD*)(a1 + 88) + 8LL * *(int*)(a1 + 40) + 828,
                          *(_QWORD*)(a1 + 88)) &
       1) == 0) {
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
        goto LABEL_9;
      }
    }
    else if (v6 != 0) {
    LABEL_9:
      *(_DWORD*)(v6 + 16) = *(_DWORD*)(a1 + 40);
      return GameRoutine_e6cfa0();
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
    goto LABEL_9;
  }
  if ((GameRoutine_15de630(1, *(_QWORD*)(a1 + 88), *(unsigned int*)(a1 + 40)) &
       1) == 0) {
    goto LABEL_21;
  }
  v2 = *(_QWORD*)(a1 + 88);
  v20 = 0;
  v21 = 0;
  v23 = v22;
  v3 = *GameData_212ea58;
  v24 = v2;
  v22[0] = GameData_1fec818;
  v22[1] = &v24;
  v22[2] = &v20;
  GameRoutine_e9a800(v3, v22);
  if (v23 == v22) {
    v4 = 32;
    goto LABEL_15;
  }
  if (v23 != nullptr) {
    v4 = 40;
  LABEL_15:
    (*(void (**)(void))(*v23 + v4))();
  }
  if (v20 != 0) {
    GameRoutine_e7d890();
  }
  v9 = v21;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }

LABEL_21:
  v10 = *(_QWORD*)(GameData_2203490 + 640);
  GameRoutine_edb740(v10);
  v11 = *(_QWORD**)(v10 + 88);
  v11[3] = v11[2];
  v11[6] = v11[5];
  GameRoutine_f47000(v11);
  GameRoutine_f47100(v11);
  GameRoutine_f47270(v11);
  v12 = GameData_2203490;
  v13 = *(_QWORD*)(GameData_2203490 + 640);
  v14 = *(_QWORD*)(GameData_2203490 + 648);
  if (v14 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
    if (v13 != 0) {
      goto LABEL_24;
    }
  }
  else if (v13 != 0) {
    goto LABEL_24;
  }
  v13 = *(_QWORD*)(v12 + 656);
  v18 = *(_QWORD*)(v12 + 664);
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v18);
    }
  }

LABEL_24:
  v15 = (_BYTE*)(*(_QWORD*)(a1 + 88) + 847LL);
  v16 = 2;
  v17 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v15 - 19) != 0 && (*(v15 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                       8LL * *(unsigned __int16*)(v15 - 19)) +
                            72LL) < 8u) {
      LODWORD(v16) = v16 - 2;
      goto LABEL_43;
    }
    if (*(_WORD*)(v15 - 11) != 0 && (*(v15 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                       8LL * *(unsigned __int16*)(v15 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v15 - 3) != 0 && (*v15 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                       8LL * *(unsigned __int16*)(v15 - 3)) +
                            72LL) < 8u) {
      goto LABEL_43;
    }
    v16 += 3;
    v15 += 24;
    if (v16 == 32) {
      LODWORD(v16) = -1;
      goto LABEL_43;
    }
  }
  LODWORD(v16) = v16 - 1;

LABEL_43:
  *(_DWORD*)(v13 + 16) = v16;
  return GameRoutine_e6cfa0();
}

#pragma GCC visibility pop
