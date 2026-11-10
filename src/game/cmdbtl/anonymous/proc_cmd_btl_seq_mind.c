#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD, long double);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ebd860(_QWORD);
__int64 Unit_6cef00(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _UNKNOWN GameData_1a853f5;
extern __int64 (*GameData_1fe78b0[])();
extern __int64 (*GameData_1fe7930[])();
extern __int64 GameData_21f4cc0;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2203490;
extern __int64 GameData_22190a8;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqMind_FixedCycleSkill(long double a1);
void ProcCmdBtlSeqMind_e6ef20();
__int64
game_cmdbtl_anonymous_ProcCmdBtlSeqMind_EndShowControlMind(long double a1);
void ProcCmdBtlSeqMind_e6f1a0();
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqMind_FixedCycleSkill_closure_Invoke(
    __int64 a1, __int64* a2);

__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqMind_FixedCycleSkill(long double a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  v5 = v4;
  v1 = *GameData_212ea58;
  v4[0] = GameData_1fe78b0;
  CmdbtlPartyNatives_e9a800(v1, v4, a1);
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

void ProcCmdBtlSeqMind_e6ef20()
{
  __int64 v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v5[2];

  v0 = GameData_2203490;
  if ((*(_BYTE*)(GameData_2203490 + 1208) & 2) != 0) {
    v1 = *(_DWORD*)(GameData_2203490 + 1204);
    v5[1] = &GameData_1a853f5;
    *(_DWORD*)(GameData_2203490 + 1204) = v1 | 0x200;
    v5[0] = game_HashString(&GameData_1a853f5);
    GameRoutine_9b11a0(&GameData_21f61c0, v5, 1);
    v0 = GameData_2203490;
    *(_BYTE*)(GameData_21f4cc0 + 8) = 1;
  }
  v2 = *(_QWORD*)(v0 + 640);
  v3 = *(_QWORD*)(v0 + 648);
  *(_DWORD*)(v0 + 1208) = 0;
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
    if (v2 != 0) {
      goto LABEL_6;
    }
  }
  else if (v2 != 0) {
    goto LABEL_6;
  }
  v2 = *(_QWORD*)(v0 + 656);
  v4 = *(_QWORD*)(v0 + 664);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak();
    }
  }
LABEL_6:
  if ((*(_BYTE*)(v2 + 56) & 4) != 0) {
    GameRoutine_ebd860(GameData_2203490 + 576);
  }
}

__int64

game_cmdbtl_anonymous_ProcCmdBtlSeqMind_EndShowControlMind(long double a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;

  v5 = v4;
  v1 = *GameData_212ea58;
  v4[0] = GameData_1fe7930;
  CmdbtlPartyNatives_e9a800(v1, v4, a1);
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

void ProcCmdBtlSeqMind_e6f1a0()
{
  __int64 v0;
  unsigned __int8* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;

  if (*(_BYTE*)(GameData_22190a8 + 160) == 1) {
    *(_BYTE*)(GameData_22190a8 + 160) = 0;
  }
  v0 = GameData_2203490;
  v1 = *(unsigned __int8**)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak();
    if (v1 != nullptr) {
      goto LABEL_6;
    }
  }
  else if (v1 != nullptr) {
    goto LABEL_6;
  }
  v1 = *(unsigned __int8**)(v0 + 656);
  v6 = *(_QWORD*)(v0 + 664);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak();
    }
  }
LABEL_6:
  v3 = GameData_2203490;
  *(_DWORD*)(GameData_2203490 + 1228) = 0;
  if ((*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) != 0) {
    v4 = 1;
  }
  else if ((v1[56] & 2) != 0) {
    v4 = 4;
  }
  else {
    v5 = *((_DWORD*)v1 + 15);
    if ((v5 & 0x100000) != 0) {
      if (*(_DWORD*)((*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v1 + 32LL))(
                         v1) +
                     8) == 0 &&
          ((v8 = v1[8]) != 5 ? (v9 = v8 == 10) : (v9 = true), v9)) {
        v4 = 3;
      }
      else {
        v7 = (*(__int64 (**)(unsigned __int8*))(*(_QWORD*)v1 + 48LL))(v1);
        if ((v7 & 0x100000000LL) != 0) {
          v4 = v7;
        }
        else {
          v4 = 2;
        }
      }
    }
    else {
      *(_DWORD*)(v3 + 1228) = v5;
      v4 = 5;
    }
  }
  *(_DWORD*)(v3 + 1220) = v4;
}

__int64 game_cmdbtl_anonymous_ProcCmdBtlSeqMind_FixedCycleSkill_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int16 v6;

  v2 = *a2;
  v3 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(v2 + 16);
  v6 = 256;
  result = Unit_6cef00(v4, &v6);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
