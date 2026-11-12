#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_1899480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_189a700(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemAnimalSkill_1893870(_QWORD* a1);
__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_932360(_QWORD, _QWORD);
__int64 GameRoutine_932460(_QWORD, _QWORD);
extern __int64 GameData_21f1e08;
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f4228;
__attribute__((swiftcall)) void
MenuItemAnimalSkill_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);
_DWORD* GameRoutine_932460_alt1(unsigned __int8*,
                                __int64*) __asm__("GameRoutine_932460");
__int64 GameRoutine_18a7ae0_alt1(__int64, unsigned int*, __int64, char, int,
                                 const char*,
                                 char) __asm__("GameRoutine_18a7ae0");
__int64 GameRoutine_932360_alt1(unsigned __int8*,
                                __int64*) __asm__("GameRoutine_932360");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");

__int64 MenuItemAnimalSkill_1893870(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = a1[2];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[1];
      v4 = result;
      if (v3 != 0) {
        if ((*(_BYTE*)(v3 + 1080) & 1) == 0) {
          *(_BYTE*)(v3 + 1080) = 1;
        }
        *(_DWORD*)(v3 + 1076) = 0;
        *(_QWORD*)(v3 + 1096) = a1[3];
        GameRoutine_1899480(v3, 1, 0, 0);
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        v6[0] = "NumNone";
        v6[1] = 7;
        GameRoutine_18863e0(v3, v6, 1);
        result = GameRoutine_1562cf0(v3 + 88, "RelianceOff");
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

__attribute__((swiftcall)) void

MenuItemAnimalSkill_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19[4];

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v19[2] = v3;
    v19[3] = v4;
    v5 = *(_QWORD*)(GameData_21f1e08 + 144);
    if (v5 != 0) {
      v6 = *(_QWORD*)(GameData_21f1e08 + 136);
      v7 = result;
      v8 = *(_QWORD*)(GameData_21f1e08 + 144);
      v9 = a3;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock_alt1(v8);
      result = std___1___shared_weak_count___release_weak_alt1(v5);
      a3 = v9;
      if (v10 != 0) {
        if (v6 != 0) {
          v11 = *(_QWORD*)(v7 + 24);
          if (v11 != 0) {
            v12 = *(_QWORD*)(v11 + 400);
            v13 = *(unsigned __int8*)(v11 + 1880);
            if (*(_BYTE*)(v12 + 96) == 2 && v13 == 0) {
              v16 = *(_QWORD*)(v12 + 112);
              v15 =
                  (unsigned __int8*)(v16 != 0
                                         ? &GameData_21f4018
                                               [8 *
                                                (unsigned __int64)*(
                                                    unsigned __int8*)(v16 + 32)]
                                         : &GameData_21f4228);
              v13 = *v15;
            }
            else {
              v15 = (unsigned __int8*)(v11 + 1880);
            }
            if (v13 != 0) {
              v17 = *(_QWORD*)(v11 + 392);
              v18 = 0;
              v19[0] = v17;
              v19[1] = v11;
              v18 = *(_DWORD*)GameRoutine_932360_alt1(v15, v19);
              if ((v18 & 0xFFF) == 0) {
                v19[0] = *(_QWORD*)(v11 + 392);
                v19[1] = v11;
                v18 = *GameRoutine_932460_alt1(v15, v19);
              }
              result = GameRoutine_18a7ae0_alt1(v6, &v18, *(_QWORD*)(v7 + 24),
                                                0, 0, nullptr, 0);
              a3 = v9;
            }
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          result = std___1___shared_weak_count___release_weak_alt1(v10);
          a3 = v9;
        }
      }
    }
  }
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
