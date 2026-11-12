#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1885bc0(__int64, __int64*);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64
MenuItemLegion_1897d20_alt1(__int64 result,
                            __int64* a2) __asm__("MenuItemLegion_1897d20");
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
GameRoutine_15d4100_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_15d4100");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_18855c0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_18855c0");
void MenuItemLegion_1897d20(__int64 a1, _QWORD** a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 MenuItemLegionGambit_1897250(__int64);
__int64 MenuItemLegionName_1896cc0(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_15def40(_DWORD*, int*, __int64);
extern _UNKNOWN GameData_1b47d74;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d890[2];
void AsyncLoadThumbImage_1899ba0(__int64);
void GameRoutine_157f4e0(__int64*, __int64, __int64);
void GameRoutine_1896ee0();
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
__int64 MenuItemLegion_1897960(__int64 a1);
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

__int64 MenuItemLegion_1897960(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  __int64 result;
  float v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _BOOL4 v20;
  int* v21;
  int v22;
  __int64 v23;
  __int64* v24;
  int v25;
  struct {
    __int64* v26;
    __int64 v27;
    __int64 v28;
  } v26_;
  int v29;
  __int64 var4;

  v1 = *(_QWORD*)(a1 + 1064);
  if (v1 == 0 || *(_BYTE*)(v1 + 1944) == 0) {
    ((void (*)(_QWORD))GameRoutine_1896ee0)(*(_QWORD*)(a1 + 1080));
    MenuItemLegionGambit_1897250(*(_QWORD*)(a1 + 1088));
    result =
        ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_GambitRange", 0);
    v10 = 0x1.0000000000000p+0f;
    goto LABEL_46;
  }
  LayoutAccessor_1562cf0(a1 + 88, "InfoDefault");
  *(_QWORD*)(*(_QWORD*)(a1 + 1080) + 24LL) = *(_QWORD*)(a1 + 1064);
  *(_DWORD*)(*(_QWORD*)(a1 + 1080) + 32LL) = *(_DWORD*)(a1 + 1072);
  MenuItemLegionName_1896cc0(*(_QWORD*)(a1 + 1080));
  v3 = *(_QWORD*)(a1 + 1064);
  if (v3 == 0) {
  LABEL_15:
    LOWORD(v11) = 0;
    goto LABEL_16;
  }
  if ((*(_WORD*)(v3 + 1536) & 0x20) != 0 &&
      (v4 = *(_QWORD*)(v3 + 1488), (v5 = *(_QWORD*)(v3 + 1496) - v4) != 0)) {
    v6 = v5 >> 2;
    v7 = 0;
    v8 = (int*)&GameData_1b47d74;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v4 + 4 * v7) & 0xFFF)) +
                     104LL) != 5) {
      if (v6 == ++v7) {
        goto LABEL_12;
      }
    }
    v21 = (int*)(v4 + 4LL * (unsigned int)v7);
    if (v7 > -1) {
      v8 = v21;
    }
  }
  else {
    v8 = (int*)&GameData_1b47d74;
  }
LABEL_12:
  v11 = *v8;
  if ((*v8 & 0xFFF) == 0) {
    v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                8LL * *(unsigned __int8*)(v3 + 1944)) +
                     64LL);
    if (v12 != 0) {
      LOWORD(v11) = *(_WORD*)(v12 + 16);
      goto LABEL_16;
    }
    goto LABEL_15;
  }
LABEL_16:
  *(_BYTE*)(*(_QWORD*)(a1 + 1088) + 32LL) = *(_BYTE*)(a1 + 1096);
  *(_QWORD*)(*(_QWORD*)(a1 + 1088) + 24LL) = *(_QWORD*)(a1 + 1064);
  v13 = *(_QWORD*)(a1 + 1088);
  if (*(_QWORD*)(v13 + 24) != 0) {
    v14 = *(_QWORD*)(v13 + 16);
    if (v14 != 0) {
      v15 = std___1___shared_weak_count_lock_alt1(v14);
      if (v15 != 0) {
        v16 = *(_QWORD*)(v13 + 8);
        v17 = v15;
        if (v16 != 0) {
          v18 = *(_QWORD*)(v13 + 24);
          v29 = 0;
          v25 = 0;
          GameRoutine_15def40(&v29, &v25, v18);
          v19 = v25;
          if (*(_BYTE*)(v13 + 32) == 1) {
            v20 = v25 >= 1 && *(_QWORD*)(*(_QWORD*)(v13 + 24) + 408LL) == 0;
          }
          else {
            v20 = true;
          }
          (*(void (**)(__int64, _BOOL4))(*(_QWORD*)v16 + 152LL))(v16, v20);
          MenuItemSkill_1899480(v16, 1u, !v20, v19 < 1);
          v22 = v29;
          if ((*(_BYTE*)(v16 + 1080) & 1) == 0) {
            *(_BYTE*)(v16 + 1080) = 1;
          }
          *(_DWORD*)(v16 + 1076) = v22;
          v26_.v28 = 0;
          v26_.v26 = GameData_212d890[0] + 2;
          LODWORD(v26_.v27) = 20;
          (*(__attribute__((swiftcall)) void (**)(
              PSEUDO_X8, __int64, __int64**))(*(_QWORD*)(v16 + 72) + 16LL))(
              (void*)(&var4), v16 + 72, &v26_.v26);
          AsyncLoadThumbImage_1899ba0(v16);
          (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 40LL))(v16, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt1(v17);
        }
      }
    }
  }
  else {
    MenuItemLegionGambit_1897250(*(_QWORD*)(a1 + 1088));
  }
  if (*(_BYTE*)(a1 + 1076) != 1) {
    goto LABEL_44;
  }
  LayoutAccessor_1560070((void*)(&v26_.v26), (__int64*)(a1 + 88),
                         "L_GambitRange");
  if (v26_.v27 == 0) {
    goto LABEL_44;
  }
  v23 = std___1___shared_weak_count_lock_alt1(v26_.v27);
  v24 = v26_.v26;
  if (v26_.v27 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v26_.v27);
  }
  if (v23 != 0 && v24 != nullptr) {
    LayoutAccessor_155e830((__int64)v24, 1);
    GameRoutine_157f4e0(v24, *(_QWORD*)(a1 + 1064),
                        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8LL * (v11 & 0xFFF)));
  }
  else if (v23 == 0) {
  LABEL_44:
    result = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                             (__int64)"A_MenuItem");
    v10 = 0x1.0000000000000p+1f;
    if (result != 0) {
      result = Alignment_56b600(result);
    }
  LABEL_46:
    if ((*(_BYTE*)(a1 + 1076) & 1) == 0) {
      result = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88),
                                          (__int64)"Bg_Magic00_00");
      if (result != 0) {
        *(_BYTE*)(result + 88) |= 0x11u;
        *(float*)(result + 84) =
            (float)(v10 * 0x1.8000000000000p+5f) + 0x1.0000000000000p+1f;
      }
    }
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v23);
  }
  goto LABEL_44;
}

void MenuItemLegion_1897d20(__int64 a1, _QWORD** a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22[2];
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  if (*a2 != nullptr) {
    v22[0] = (__int64)"L_MenuItem_Name";
    v22[1] = 15;
    GameRoutine_15d4100_alt1((void*)(&v23_.v23), (__int64*)(a1 + 88), v22);
    if (v23_.v24 != 0) {
      v4 = std___1___shared_weak_count_lock_alt1(v23_.v24);
      v5 = v23_.v23;
      if (v4 != 0) {
        v6 = v23_.v23;
      }
      else {
        v6 = 0;
      }
      if (v23_.v24 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23_.v24);
      }
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 + 320);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v5 + 312);
          v9 = *(_QWORD*)(v5 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                    memory_order_relaxed);
          v10 = std___1___shared_weak_count_lock_alt1(v9);
          std___1___shared_weak_count___release_weak_alt1(v7);
          if (v10 != 0) {
            if (v8 != 0) {
              v23_.v23 = v6;
              v23_.v24 = v4;
              if (v4 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                          memory_order_relaxed);
                Element_1885bc0(v8, &v23_.v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
                  std___1___shared_weak_count___release_weak_alt1(v4);
                }
              }
              else {
                Element_1885bc0(v8, &v23_.v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
              std___1___shared_weak_count___release_weak_alt1(v10);
            }
          }
        }
        v11 = *a2;
        v23_.v23 = v6;
        v23_.v24 = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v11, &v23_.v23);
        v12 = v23_.v24;
        if (v23_.v24 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
    v22[0] = (__int64)"L_MenuItem_Gambit";
    v22[1] = 17;
    GameRoutine_15d4100_alt1((void*)(&v23_.v23), (__int64*)(a1 + 88), v22);
    if (v23_.v24 != 0) {
      v13 = std___1___shared_weak_count_lock_alt1(v23_.v24);
      v14 = v23_.v23;
      if (v13 != 0) {
        v15 = v23_.v23;
      }
      else {
        v15 = 0;
      }
      if (v23_.v24 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23_.v24);
      }
      if (v15 != 0) {
        v16 = *(_QWORD*)(v14 + 320);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v14 + 312);
          v18 = *(_QWORD*)(v14 + 320);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v19 = std___1___shared_weak_count_lock_alt1(v18);
          std___1___shared_weak_count___release_weak_alt1(v16);
          if (v19 != 0) {
            if (v17 != 0) {
              v23_.v23 = v15;
              v23_.v24 = v13;
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                          1u, memory_order_relaxed);
                Element_1885bc0(v17, &v23_.v23);
                if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                  std___1___shared_weak_count___release_weak_alt1(v13);
                }
              }
              else {
                Element_1885bc0(v17, &v23_.v23);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              std___1___shared_weak_count___release_weak_alt1(v19);
            }
          }
        }
        v20 = *a2;
        v23_.v23 = v15;
        v23_.v24 = v13;
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_18855c0_alt1(v20, &v23_.v23);
        v21 = v23_.v24;
        if (v23_.v24 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak_alt1(v21);
        }
      }
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
    }
  }
}

#pragma GCC visibility pop
