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
__int64 ProcCmdBtlSeqHuman_Unknown3_alt1(__int64 a1) __asm__(
    "ProcCmdBtlSeqHuman_Unknown3");
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*GameData_1fe7810[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 GameData_221a540;
__int64 ProcCmdBtlSeqHuman_Destructor(__int64 a1);
_BYTE* ProcInst_657a50(__int64, char);
__int64 AutoPlay_f82bc0(__int64, int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void Manager_e9b830(__int64, int);
void ProcCmdBtlSeqHuman_Unknown3(__int64 a1);

__int64 ProcCmdBtlSeqHuman_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(_BYTE*)(*GameData_212f4e0[0] + 10) = 1;
  *(_QWORD*)a1 = GameData_1fe7810;
  v2 = (_QWORD*)(a1 + 160);
  v3 = *(_QWORD**)(a1 + 192);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  GameData_221a540 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcCmdBtlSeqHuman_Unknown3(__int64 a1)
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  int v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  v1 = GameData_212ea58;
  if (*(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) != 1) {
    v5 = GameData_212f4e0[0];
    v6 = (_BYTE*)*GameData_212f4e0[0];
    if (*(_BYTE*)(*GameData_212f4e0[0] + 168) != 1) {
      goto LABEL_39;
    }
    v7 = v6[9] == 0 || v6[10] == 0;
    v8 = v7 || v6[11] == 0;
    if (v8 || v6[12] == 0) {
      goto LABEL_39;
    }
    if (v6[13] == 0) {
      goto LABEL_39;
    }
    v10 = *GameData_212ea58 + ((__int64)*(int*)(*GameData_212ea58 + 608) << 7);
    v11 = *(_QWORD*)(v10 + 760);
    if (v11 == 0) {
      goto LABEL_39;
    }
    v12 = *(_QWORD*)(v10 + 752);
    v13 = (_QWORD*)a1;
    v14 = *(_QWORD*)(v10 + 760);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v15 = std___1___shared_weak_count_lock_alt1(v14);
    std___1___shared_weak_count___release_weak_alt1(v11);
    if (v15 == 0 || v12 == 0) {
      if (v15 == 0) {
        goto LABEL_39;
      }
      goto LABEL_67;
    }
    v18 = *(_QWORD*)(*(_QWORD*)(v12 + 16) + 440LL);
    if (v18 != 0 &&
        (unsigned __int64)(v19 = *(unsigned __int8*)(v18 + 16)) <= 3) {
      v20 = GameData_1b01768[v19];
    }
    else {
      v20 = 3;
    }
    v21 = *v1 + (v20 << 7);
    v22 = *(__int64**)(v21 + 712);
    v23 = *(__int64**)(v21 + 720);
    if (v22 == v23) {
      v24 = 0;
    }
    else {
      v24 = 0;
      do {
        v25 = *v22;
        v22 += 2;
        if (v25 == v12) {
          break;
        }
        ++v24;
      } while (v22 != v23);
    }
    AutoPlay_f82bc0(*v5, v24);
    if (game_cmdbtl_ProcCmdBtlSeqView_instance_ != 0) {
      *(_DWORD*)(game_cmdbtl_ProcCmdBtlSeqView_instance_ + 152) = 4;
    }
    v26 = (_QWORD*)v13[24];
    v13[19] = 0;
    v13[24] = 0;
    if (v26 == v13 + 20) {
      v28 = 32;
    }
    else {
      v27 = (__int64)v13;
      if (v26 == nullptr) {
        goto LABEL_57;
      }
      v28 = 40;
    }
    (*(void (**)(_QWORD*))(*v26 + v28))(v26);
    v27 = (__int64)v13;
  LABEL_57:
    v29 = *(_QWORD*)(v27 + 8);
    if (v29 == 0) {
      goto LABEL_65;
    }
    while (1) {
      if (*(_BYTE*)v29 == 2) {
        if (*(_DWORD*)(v29 + 32) == 11) {
          *(_QWORD*)(v27 + 16) = v29;
          *(_WORD*)(v27 + 136) &= ~0x80u;
        LABEL_65:
          if ((*(_WORD*)(v27 + 136) & 1) == 0) {
            ProcInst_657a50(v27, 1);
          }
        LABEL_67:
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak_alt1(v15);
          }
          goto LABEL_39;
        }
      }
      else if (*(_BYTE*)v29 == 0) {
        goto LABEL_65;
      }
      v29 += 64;
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
    goto LABEL_39;
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
    ProcInst_657a50(a1, 1);
  }
LABEL_39:
  Manager_e9b830(*v1, 0);
}

#pragma GCC visibility pop
