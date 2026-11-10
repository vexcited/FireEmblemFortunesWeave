#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_189a700(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64* GameRoutine_1899480(__int64, unsigned int, char, char);
__int64 MenuItemRageName_18a0790(__int64 a1);
__int64 GameRoutine_18ab7b0(_QWORD);
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212c880[5];
extern __int64 GameData_212d8b0[3];
__attribute__((swiftcall)) void
MenuItemRageName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);

__int64 MenuItemRageName_18a0790(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];

  result = *(_QWORD*)(a1 + 16);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 8);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1899480(v3, 1u, 0, 0);
        *(_BYTE*)(v3 + 1072) = 6;
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        v6[0] = "NumNone";
        v6[1] = 7;
        result = GameRoutine_18863e0(v3, v6, 1);
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

MenuItemRageName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _WORD* v15;
  _WORD* v16;

  if (*(_DWORD*)(a2 + 8) == 45) {
    v3 = *(_QWORD*)GameData_212d8b0[0];
    if (*(_QWORD*)GameData_212d8b0[0] != 0) {
      v4 = *(_QWORD*)(v3 + 144);
      if (v4 != 0) {
        v5 = *(_QWORD*)(v3 + 136);
        v6 = result;
        v7 = *(_QWORD*)(v3 + 144);
        v8 = a3;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        v9 = std___1___shared_weak_count_lock(v7);
        result = std___1___shared_weak_count___release_weak(v4);
        a3 = v8;
        if (v9 != 0) {
          if (v5 != 0) {
            v10 = *(_QWORD*)(v6 + 24);
            if (v10 != 0) {
              if ((*(_WORD*)(v10 + 1536) & 0x40) == 0 ||
                  (v11 = *(_QWORD*)(v10 + 1496), v12 = *(_QWORD*)(v10 + 1488),
                   v11 == v12)) {
                v15 = GameData_212c8a8;
              }
              else {
                v13 = (v11 - v12) >> 2;
                v14 = 0;
                v15 = GameData_212c8a8;
                while (
                    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8LL * (*(_DWORD*)(v12 + 4 * v14) &
                                                0xFFF)) +
                              104LL) != 6) {
                  if (v13 == ++v14) {
                    goto LABEL_14;
                  }
                }
                v16 = (_WORD*)(v12 + 4LL * (unsigned int)v14);
                if (v14 > -1) {
                  v15 = v16;
                }
              }
            LABEL_14:
              if ((*v15 & 0xFFF) != 0) {
                result = GameRoutine_18ab7b0(v5);
                a3 = v8;
              }
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            result = std___1___shared_weak_count___release_weak(v9);
            a3 = v8;
          }
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
