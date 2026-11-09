#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_e9b830(_QWORD, _QWORD);
__int64 GameRoutine_f82bc0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _QWORD GameData_1b01768[4];
extern __int64 GameData_212f520[4];
extern __int64 game_cmdbtl_ProcCmdBtlSeqView_instance_;
extern __int64* GameData_212ea58;
extern __int64* GameData_212f4e0[3];
__int64 ProcCmdBtlSeqHuman_Unknown3(__int64 a1);

__int64 ProcCmdBtlSeqHuman_Unknown3(__int64 a1)
{
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  _BYTE* v6;
  bool v7;
  bool v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;

  v1 = GameData_212ea58;
  if (*(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) != 1) {
    v5 = GameData_212f4e0[0];
    v6 = (_BYTE*)*GameData_212f4e0[0];
    if (*(_BYTE*)(*GameData_212f4e0[0] + 168) != 1) {
      return GameRoutine_e9b830(*v1, 0);
    }
    v7 = v6[9] == 0 || v6[10] == 0;
    v8 = v7 || v6[11] == 0;
    if (v8 || v6[12] == 0) {
      return GameRoutine_e9b830(*v1, 0);
    }
    if (v6[13] == 0) {
      return GameRoutine_e9b830(*v1, 0);
    }
    v10 = *GameData_212ea58 + ((__int64)*(int*)(*GameData_212ea58 + 608) << 7);
    v11 = *(_QWORD*)(v10 + 760);
    if (v11 == 0) {
      return GameRoutine_e9b830(*v1, 0);
    }
    v12 = *(_QWORD*)(v10 + 752);
    v13 = (_QWORD*)a1;
    v14 = *(_QWORD*)(v10 + 760);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v15 = std___1___shared_weak_count_lock(v14);
    std___1___shared_weak_count___release_weak();
    if (v15 == 0 || v12 == 0) {
      if (v15 == 0) {
        return GameRoutine_e9b830(*v1, 0);
      }
      goto LABEL_67;
    }
    v19 = *(_QWORD*)(*(_QWORD*)(v12 + 16) + 440LL);
    if (v19 != 0 &&
        (unsigned __int64)(v20 = *(unsigned __int8*)(v19 + 16)) <= 3) {
      v21 = GameData_1b01768[v20];
    }
    else {
      v21 = 3;
    }
    v22 = *v1 + (v21 << 7);
    v23 = *(__int64**)(v22 + 712);
    v24 = *(__int64**)(v22 + 720);
    if (v23 == v24) {
      v25 = 0;
    }
    else {
      v25 = 0;
      do {
        v26 = *v23;
        v23 += 2;
        if (v26 == v12) {
          break;
        }
        v25 = (unsigned int)(v25 + 1);
      } while (v23 != v24);
    }
    GameRoutine_f82bc0(*v5, v25);
    if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
      *(_DWORD*)(game_cmdbtl_ProcCmdBtlSeqView_instance_ + 152) = 4;
    }
    v27 = (_QWORD*)v13[24];
    v13[19] = 0;
    v13[24] = 0;
    if (v27 == v13 + 20) {
      v29 = 32;
    }
    else {
      v28 = v13;
      if (v27 == nullptr) {
        goto LABEL_57;
      }
      v29 = 40;
    }
    (*(void (**)(_QWORD*))(*v27 + v29))(v27);
    v28 = v13;
  LABEL_57:
    v30 = v28[1];
    if (v30 == 0) {
      goto LABEL_65;
    }
    while (1) {
      if (*(_BYTE*)v30 == 2) {
        if (*(_DWORD*)(v30 + 32) == 11) {
          v28[2] = v30;
          *((_WORD*)v28 + 68) &= ~0x80u;
        LABEL_65:
          if ((v28[17] & 1) == 0) {
            GameRoutine_657a50(v28, 1);
          }
        LABEL_67:
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak();
          }
          return GameRoutine_e9b830(*v1, 0);
        }
      }
      else if (*(_BYTE*)v30 == 0) {
        goto LABEL_65;
      }
      v30 += 64;
    }
  }
  if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
    *(_DWORD*)(game_cmdbtl_ProcCmdBtlSeqView_instance_ + 152) = 4;
  }
  v2 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (v2 == (_QWORD*)(a1 + 160)) {
    v4 = a1;
    v3 = 32;
  }
  else {
    if (v2 == nullptr) {
      goto LABEL_29;
    }
    v3 = 40;
    v4 = a1;
  }
  (*(void (**)(_QWORD*))(*v2 + v3))(v2);
  a1 = v4;

LABEL_29:
  v17 = *(_QWORD*)(a1 + 8);
  if (v17 == 0) {
  LABEL_35:
    if ((*(_WORD*)(a1 + 136) & 1) == 0) {
      goto LABEL_38;
    }
    return GameRoutine_e9b830(*v1, 0);
  }
  while (*(_BYTE*)v17 != 2) {
    if (*(_BYTE*)v17 == 0) {
      goto LABEL_35;
    }
  LABEL_32:
    v17 += 64;
  }
  if (*(_DWORD*)(v17 + 32) != 11) {
    goto LABEL_32;
  }
  *(_QWORD*)(a1 + 16) = v17;
  *(_WORD*)(a1 + 136) &= ~0x80u;
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
  LABEL_38:
    GameRoutine_657a50(a1, 1);
  }
  return GameRoutine_e9b830(*v1, 0);
}

#pragma GCC visibility pop
