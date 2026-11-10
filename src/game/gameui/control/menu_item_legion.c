#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1885bc0(__int64, __int64*);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemLegion_1897d20(__int64 result, __int64* a2);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 MenuItem_188afa0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MenuItem_188b0e0(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_1897520(__int64);
extern __int64 (*GameData_2102220[])();
extern __int64 (*GameData_2102290[])();
extern __int64 (*GameData_2102488[])();
extern __int64 (
    *game_gameui_control_MenuItemLegion_Destroy_MenuItemLegion_1898480_ptr[])();
extern __int64 (*game_gameui_control_MenuItemLegion_vtable[])();
__attribute__((swiftcall)) void
MenuItemLegion_18977d0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void MenuItemLegion_1897890(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2);
__attribute__((swiftcall)) void

MenuItemLegion_18977d0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;

  v8 = (_QWORD*)LayoutEx_579160(1128, 8);
  v9 = (__int64)(v8 + 3);
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2102290;
  MenuItem_188afa0(v8 + 3, a1, a2, a3);
  *((_DWORD*)v10 + 274) = 0;
  *((_BYTE*)v10 + 1100) = 0;
  v10[138] = 0;
  v10[139] = 0;
  *((_BYTE*)v10 + 1120) = 0;
  v10[3] = game_gameui_control_MenuItemLegion_vtable;
  v10[12] = GameData_2102220;
  GameRoutine_1897520(v9);
  *a4 = v9;
  a4[1] = (__int64)v10;
  v10[3] =
      game_gameui_control_MenuItemLegion_Destroy_MenuItemLegion_1898480_ptr;
  v10[12] = GameData_2102488;
}

__attribute__((swiftcall)) void MenuItemLegion_1897890(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;

  v6 = (_QWORD*)LayoutEx_579160(1128, 8);
  v7 = (__int64)(v6 + 3);
  v8 = v6;
  v6[1] = 0;
  v6[2] = 0;
  *v6 = GameData_2102290;
  MenuItem_188b0e0(v6 + 3, a1, a2);
  *((_DWORD*)v8 + 274) = 0;
  *((_BYTE*)v8 + 1100) = 0;
  v8[138] = 0;
  v8[139] = 0;
  *((_BYTE*)v8 + 1120) = 0;
  v8[3] = game_gameui_control_MenuItemLegion_vtable;
  v8[12] = GameData_2102220;
  GameRoutine_1897520(v7);
  *a3 = v7;
  a3[1] = (__int64)v8;
  v8[3] = game_gameui_control_MenuItemLegion_Destroy_MenuItemLegion_1898480_ptr;
  v8[12] = GameData_2102488;
}

__int64 MenuItemLegion_1897d20(__int64 result, __int64* a2)
{
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  __int64 v23;
  __int64 v24;

  if (*a2 != 0) {
    v3 = result;
    v22[0] = "L_MenuItem_Name";
    v22[1] = 15;
    GameRoutine_15d4100((void*)&v23, result + 88, v22);
    if (v24 != 0) {
      v4 = std___1___shared_weak_count_lock(v24);
      v5 = v23;
      if (v4 != 0) {
        v6 = v23;
      }
      else {
        v6 = 0;
      }
      if (v24 != 0) {
        std___1___shared_weak_count___release_weak(v24);
      }
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 320);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v5 + 312);
          v9 = *(_QWORD*)(v5 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v10 = std___1___shared_weak_count_lock(v9);
          std___1___shared_weak_count___release_weak(v7);
          if (v10 != 0) {
            if (v8 != 0) {
              v23 = v6;
              v24 = v4;
              if (v4 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                          memory_order_relaxed);
                Element_1885bc0(v8, &v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                  std___1___shared_weak_count___release_weak(v4);
                }
              }
              else {
                Element_1885bc0(v8, &v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak(v10);
            }
          }
        }
        v11 = *a2;
        v23 = v6;
        v24 = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0(v11, &v23);
        v12 = v24;
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    v22[0] = "L_MenuItem_Gambit";
    v22[1] = 17;
    GameRoutine_15d4100((void*)&v23, v3 + 88, v22);
    result = v24;
    if (v24 != 0) {
      v13 = std___1___shared_weak_count_lock(v24);
      v14 = v23;
      result = v24;
      if (v13 != 0) {
        v15 = v23;
      }
      else {
        v15 = 0;
      }
      if (v24 != 0) {
        result = std___1___shared_weak_count___release_weak(v24);
      }
      if (v15 != 0) {
        v16 = *(_QWORD*)(v14 + 320);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v14 + 312);
          v18 = *(_QWORD*)(v14 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v19 = std___1___shared_weak_count_lock(v18);
          std___1___shared_weak_count___release_weak(v16);
          if (v19 != 0) {
            if (v17 != 0) {
              v23 = v15;
              v24 = v13;
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                          1u, memory_order_relaxed);
                Element_1885bc0(v17, &v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                  std___1___shared_weak_count___release_weak(v13);
                }
              }
              else {
                Element_1885bc0(v17, &v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak(v19);
            }
          }
        }
        v20 = *a2;
        v23 = v15;
        v24 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        result = GameRoutine_18855c0(v20, &v23);
        v21 = v24;
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          result = std___1___shared_weak_count___release_weak(v21);
        }
      }
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        return std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
