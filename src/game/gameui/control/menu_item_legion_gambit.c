#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 AsyncLoadThumbImage_1899ba0(_QWORD);
__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_1899480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemLegionGambit_1897250(__int64 a1);
__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
extern _UNKNOWN GameData_1b47d74;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c998[148];
extern __int64 GameData_21f1e08;
__attribute__((swiftcall)) void
MenuItemLegionGambit_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);

__int64 MenuItemLegionGambit_1897250(__int64 a1)
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
        GameRoutine_1899480(v3, 1, 0, 0);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        if ((*(_BYTE*)(v3 + 1080) & 1) == 0) {
          *(_BYTE*)(v3 + 1080) = 1;
        }
        *(_DWORD*)(v3 + 1076) = 0;
        *(_QWORD*)(v3 + 1096) = 0;
        AsyncLoadThumbImage_1899ba0(v3);
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

MenuItemLegionGambit_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _WORD* v14;
  _WORD* v15;
  int v16;

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
            if ((*(_WORD*)(v9 + 1536) & 0x20) != 0 &&
                (v10 = *(_QWORD*)(v9 + 1488),
                 (v11 = *(_QWORD*)(v9 + 1496) - v10) != 0)) {
              v12 = v11 >> 2;
              v13 = 0;
              v14 = &GameData_1b47d74;
              while (
                  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                       8LL * (*(_DWORD*)(v10 + 4 * v13) &
                                              0xFFF)) +
                            104LL) != 5) {
                if (v12 == ++v13) {
                  goto LABEL_14;
                }
              }
              v15 = (_WORD*)(v10 + 4LL * (unsigned int)v13);
              if (v13 > -1) {
                v14 = v15;
              }
            }
            else {
              v14 = &GameData_1b47d74;
            }
          LABEL_14:
            LODWORD(v14) = *(_DWORD*)v14;
            if (((unsigned __int16)v14 & 0xFFF) == 0) {
              v14 =
                  *(_WORD**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                        8LL * *(unsigned __int8*)(v9 + 1944)) +
                             64LL);
              if (v14 != nullptr) {
                LODWORD(v14) = v14[8] & 0xFFF;
              }
            }
            v16 = (int)v14;
            result = GameRoutine_18a7ae0(v4, &v16, v9, 0, 0, 0, 0);
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
