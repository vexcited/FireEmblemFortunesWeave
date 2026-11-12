#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AsyncLoadThumbImage_1899d60(_QWORD, _QWORD);
__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_1899480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_189a700(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1b47d74;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c998[148];
__int64 MenuItemLegionName_1896cc0(__int64 a1);
__int64 GameRoutine_18aadd0(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21f1e08;
__attribute__((swiftcall)) void
MenuItemLegionName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__int64 AsyncLoadThumbImage_1899d60_alt1(__int64, __int64) __asm__(
    "AsyncLoadThumbImage_1899d60");
__int64 Element_18863e0(__int64, const char**, char);
__int64 GameRoutine_189a700_alt1(__int64) __asm__("GameRoutine_189a700");
__int64 MenuItem_188bf10(__int64, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 GameData_212c998_alt1[148] __asm__("GameData_212c998");
void MenuItemSkill_1899480(__int64, unsigned int, char, char);

__int64 MenuItemLegionName_1896cc0(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int* v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  const char* v24[2];
  struct {
    const char* vars0;
    __int64 vars8;
    const char* vars10;
    __int64 vars18;
  } vars0_;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0) {
    result = *(_QWORD*)(a1 + 16);
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v4 = *(_QWORD*)(a1 + 8);
        v5 = result;
        if (v4 == 0) {
        LABEL_23:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            return std___1___shared_weak_count___release_weak_alt1(v5);
          }
          return result;
        }
        MenuItemSkill_1899480(*(_QWORD*)(a1 + 8), *(_DWORD*)(a1 + 32), 0, 0);
        v6 = *(unsigned __int8*)(v1 + 1944);
        v7 = GameData_212c998_alt1[0];
        MenuItem_188bf10(
            v4,
            *(const char**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                      GameData_212c998_alt1[0] +
                                                  64LL) +
                                       8 * v6) +
                            32LL));
        v8 = *(_QWORD*)(v4 + 1032);
        if (v8 != 0) {
          *(_BYTE*)(v8 + 88) |= 1u;
        }
        v24[0] = "NumNone";
        v24[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
        Element_18863e0(v4, v24, 1);
        v9 = *(_QWORD*)(a1 + 24);
        v10 = GameData_212c880[0];
        if (v9 == 0) {
          goto LABEL_19;
        }
        if ((*(_WORD*)(v9 + 1536) & 0x20) != 0 &&
            (v11 = *(_QWORD*)(v9 + 1488),
             (v12 = *(_QWORD*)(v9 + 1496) - v11) != 0)) {
          v13 = v12 >> 2;
          v14 = 0;
          v15 = (int*)&GameData_1b47d74;
          while (
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8LL * (*(_DWORD*)(v11 + 4 * v14) & 0xFFF)) +
                        104LL) != 5) {
            if (v13 == ++v14) {
              goto LABEL_16;
            }
          }
          v19 = (int*)(v11 + 4LL * (unsigned int)v14);
          if (v14 > -1) {
            v15 = v19;
          }
        }
        else {
          v15 = (int*)&GameData_1b47d74;
        }
      LABEL_16:
        v16 = *v15;
        if ((v16 & 0xFFF) == 0) {
          v17 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v7 + 64LL) +
                                      8LL * *(unsigned __int8*)(v9 + 1944)) +
                           64LL);
          if (v17 != 0) {
            v16 = *(_WORD*)(v17 + 16) & 0xFFF;
          }
          else {
          LABEL_19:
            v16 = 0;
          }
        }
        if ((*(_BYTE*)(v4 + 1080) & 1) == 0) {
          *(_BYTE*)(v4 + 1080) = 1;
        }
        *(_DWORD*)(v4 + 1076) = v16;
        v18 = *v10;
        *(_QWORD*)(v4 + 1096) = *(_QWORD*)(a1 + 24);
        AsyncLoadThumbImage_1899d60_alt1(
            v4, *(_QWORD*)(*(_QWORD*)(v18 + 64) + 8LL * (v16 & 0xFFF)));
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 40LL))(v4, 1);
        goto LABEL_23;
      }
    }
  }
  else {
    vars0_.vars10 = vars0_.vars0;
    vars0_.vars18 = vars0_.vars8;
    result = *(_QWORD*)(a1 + 16);
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v21 = *(_QWORD*)(a1 + 8);
        v22 = result;
        if (v21 != 0) {
          MenuItemSkill_1899480(v21, 4u, 0, 0);
          MenuItem_188bf10(v21, "MID_Sys_Empty");
          v23 = *(_QWORD*)(v21 + 1032);
          if (v23 != 0) {
            *(_BYTE*)(v23 + 88) |= 1u;
          }
          *(_BYTE*)(v21 + 1072) = 5;
          if ((*(_BYTE*)(v21 + 1080) & 1) == 0) {
            *(_BYTE*)(v21 + 1080) = 1;
          }
          *(_DWORD*)(v21 + 1076) = 0;
          GameRoutine_189a700_alt1(v21);
          vars0_.vars0 = "NumNone";
          vars0_.vars8 = 7;
          result = Element_18863e0(v21, &vars0_.vars0, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          return std___1___shared_weak_count___release_weak_alt1(v22);
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

MenuItemLegionName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;

  if (*(_DWORD*)(a2 + 8) == 45 && GameData_21f1e08 != 0) {
    v3 = *(_QWORD*)(GameData_21f1e08 + 144);
    if (v3 != 0) {
      v4 = *(_QWORD*)(GameData_21f1e08 + 136);
      v5 = result;
      v6 = *(_QWORD*)(GameData_21f1e08 + 144);
      v7 = a3;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock(v6);
      result = std___1___shared_weak_count___release_weak(v3);
      a3 = v7;
      if (v8 != 0) {
        if (v4 != 0) {
          v9 = *(_QWORD*)(v5 + 24);
          if (v9 != 0) {
            result = GameRoutine_18aadd0(
                v4,
                *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                           8LL * *(unsigned __int8*)(v9 + 1944)),
                0);
            a3 = v7;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak(v8);
          a3 = v7;
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
