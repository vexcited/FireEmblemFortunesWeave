#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e6cfa0(_QWORD, _QWORD);
__int64 GameRoutine_e76460(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 GameData_2203490;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ea58;
__int64 CmdBtlSkillMenuItem_Unknown71(__int64 a1);
__int64 CmdBtlSkillMenuItem_Unknown72(__int64 a1);

__int64 CmdBtlSkillMenuItem_Unknown71(__int64 a1)
{
  __int64* v2;
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
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  __int64 v33;
  __int64 v34;

  v2 = GameData_212ea58;
  v3 = *GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 640);
  v5 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v6 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v4 = v6;
    if (v6 != 0) {
      goto LABEL_9;
    }
  }
  else if (v4 != 0) {
    goto LABEL_9;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v7 = *(_QWORD*)(v3 + 664);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      v4 = v8;
    }
  }

LABEL_9:
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  v10 = *(_QWORD*)(v9 + 88);
  if (v10 == 0) {
    v15 = 0;
    return v15 & 1;
  }
  v11 = *(_QWORD*)(v9 + 80);
  v12 = *(_QWORD*)(v9 + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
  v13 = std___1___shared_weak_count_lock(v12);
  std___1___shared_weak_count___release_weak(v10);
  if (v13 == 0 || v11 == 0) {
    v15 = 0;
    if (v13 == 0) {
      return v15 & 1;
    }
    goto LABEL_39;
  }
  v16 = *v2;
  v17 = *(_QWORD*)(*v2 + 640);
  v18 = *(_QWORD*)(*v2 + 648);
  if (v18 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    if (v17 != 0) {
      goto LABEL_21;
    }
  }
  else if (v17 != 0) {
    goto LABEL_21;
  }
  v17 = *(_QWORD*)(v16 + 656);
  v25 = *(_QWORD*)(v16 + 664);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }

LABEL_21:
  v19 = *(_BYTE*)(v17 + 8);
  v20 = *v2;
  v21 = v19 - 1;
  v22 = *(_QWORD*)(*v2 + 640);
  v23 = *(_QWORD*)(*v2 + 648);
  if ((v21 & 0xFC) != 0) {
    v24 = 256;
  }
  else {
    v24 = 0x104010201200101uLL >> (16 * v21);
  }
  if (v23 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v26 = v22;
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
    v22 = v26;
    if (v26 == 0) {
    LABEL_33:
      v22 = *(_QWORD*)(v20 + 656);
      v27 = *(_QWORD*)(v20 + 664);
      if (v27 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v28 = v22;
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v27);
          v22 = v28;
        }
      }
    }
  }
  else if (v22 == 0) {
    goto LABEL_33;
  }
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
  v33 = v11;
  v34 = v13;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                            memory_order_relaxed);
  v30 = GameRoutine_e76460(v29, &v33, a1 + 84, v24);
  v31 = v34;
  v15 = v30;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }

LABEL_39:
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  return v15 & 1;
}

__int64 CmdBtlSkillMenuItem_Unknown72(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = GameData_2203490;
  v2 = *(_QWORD*)(GameData_2203490 + 640);
  v3 = *(_QWORD*)(GameData_2203490 + 648);
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v8 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    a1 = v8;
    if (v2 != 0) {
      goto LABEL_4;
    }
  }
  else if (v2 != 0) {
    goto LABEL_4;
  }
  v2 = *(_QWORD*)(v1 + 656);
  v9 = *(_QWORD*)(v1 + 664);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      a1 = v10;
    }
  }

LABEL_4:
  v4 = 9;
  v5 = *GameData_212c880[0];
  *(_QWORD*)(v2 + 24) = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8LL * (*(_DWORD*)(a1 + 84) & 0xFFF));
  v6 = *(_QWORD*)(*(_QWORD*)(v5 + 64) + 8LL * (*(_DWORD*)(a1 + 84) & 0xFFF));
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v6 + 104)) & 1) !=
          0 &&
      *(_QWORD*)(v6 + 576) == 0) {
    if (*(_WORD*)(v6 + 136) != 0) {
      v4 = 4;
    }
    else {
      v4 = 9;
    }
  }
  return GameRoutine_e6cfa0(*(unsigned int*)(a1 + 40), v4);
}

#pragma GCC visibility pop
