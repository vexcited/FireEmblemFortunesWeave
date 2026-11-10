#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_188bf10(__int64, __int64);
__int64 GameRoutine_1899480(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_189a700(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 MenuItemAnimalName_1892e90(__int64 a1);
__int64 GameRoutine_18ab160(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212c8a0;
extern __int64 GameData_21f1e08;
extern __int64 GameData_21f4018[];
extern __int64 GameData_21f4228;
__attribute__((swiftcall)) void
MenuItemAnimalName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);

__int64 MenuItemAnimalName_1892e90(__int64 a1)
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
        GameRoutine_1899480(v3, 4, 0, 0);
        GameRoutine_189a700(v3);
        GameRoutine_188bf10(v3, (__int64)"MID_Sys_Empty");
        v5 = *(_QWORD*)(v3 + 1032);
        if (v5 != 0) {
          *(_BYTE*)(v5 + 88) |= 1u;
        }
        v6[0] = "NumNone";
        v6[1] = 7;
        GameRoutine_18863e0(v3, v6, 1);
        result = ui_LayoutAccessor_SetPaneVisible(v3 + 88, "L_AnimalLv", 0);
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

MenuItemAnimalName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
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
  unsigned int v11;
  __int64 v13;
  __int64* v14;

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
            v10 = *(_QWORD*)(v9 + 400);
            v11 = *(unsigned __int8*)(v9 + 1880);
            if (*(_BYTE*)(v10 + 96) == 2 && v11 == 0) {
              v13 = *(_QWORD*)(v10 + 112);
              if (v13 != 0) {
                v14 = &GameData_21f4018[8 * (unsigned __int64)*(
                                                unsigned __int8*)(v13 + 32)];
              }
              else {
                v14 = &GameData_21f4228;
              }
              v11 = *(unsigned __int8*)v14;
            }
            if (v11 != 0) {
              result = GameRoutine_18ab160(
                  v4,
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * v11),
                  0);
              a3 = v7;
            }
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
