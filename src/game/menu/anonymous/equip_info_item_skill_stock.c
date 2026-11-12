#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 EquipInfoItem_SkillStock_Unknown70(__int64 a1, __int64* a2);
__int64 LayoutEx_579180(_QWORD);
__int64 LayoutEx_5791a0(_QWORD);
__int64 LayoutEx_57b150(void);
__int64 LayoutEx_57cf40(_QWORD, _QWORD);
__int64 LayoutEx_58d200(_QWORD, _QWORD);
__int64 Layout_13639a0(_QWORD, _QWORD, long double);
__int64 Layout_1364020(_QWORD, _QWORD, _QWORD);
__int64 Layout_579280(_QWORD, _QWORD);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212dfd0;
extern __int64* GameData_212dfc0[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_2131a20[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_2130ec0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void
EquipInfoItem_SkillStock_16cce20(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                 _QWORD* a3, _QWORD* a4, __n128 result);
_QWORD* GameRoutine_189afa0(__int64, int, int);
__int64 EquipInfoItem_Unknown17(_QWORD*);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a58[13];
void Element_1886580(__int64, char);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
__int64* EquipInfoItem_SkillStock_Unknown17(__int64 a1);
_QWORD* MenuItem_188b5e0(_QWORD* result, __int64);
__attribute__((swiftcall)) void EquipInfoItem_SkillStock_16cce20_alt1(
    PSEUDO_X8, __int64, _QWORD**, _QWORD*,
    _QWORD*) __asm__("EquipInfoItem_SkillStock_16cce20");
__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_15dd090(PSEUDO_X8);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_menu_16cccb0(PSEUDO_X8, __int64);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1() __asm__(
    "nn_ui2d_Pane_GetRuntimeTypeInfoStatic");
__int64 GameRoutine_16ccdc0(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_21f8028;
extern __int64 GameData_21f8020;
extern __int64 ui_LayoutAccessor_empty_;
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen(const char*);
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
__int64 EquipInfoItem_SkillStock_Unknown16(__int64 a1);

__int64 EquipInfoItem_SkillStock_Unknown16(__int64 a1)
{
  int v1;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64* v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  atomic_ullong* v49;
  __int64* v50;
  __int64* v52;
  _QWORD v53[2];
  _QWORD v54[2];
  struct {
    __int64* v55;
    __int64 v56;
  } v55_;
  struct {
    __int64* v57;
    __int64 v58;
  } v57_;
  struct {
    _QWORD* v59;
    __int64 v60;
  } v59_;

  v1 = *(_DWORD*)(a1 + 128);
  v54[0] = "L_MenuItem_SkillStock";
  v54[1] = 21;
  v3 = game_util_Format("StockSkill%02d", v1);
  v53[0] = v3;
  v53[1] = strlen(v3);
  v4 = *(_QWORD*)(a1 + 56);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock_alt1(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v25 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
  std___1___shared_weak_count___release_weak_alt2(v6);
  v8 = v25;
  if (v25 == nullptr) {
  LABEL_5:
    v8 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830((__int64)v8, 0);
  v9 = *(_QWORD*)(a1 + 112);
  if (v9 == 0 || *(_QWORD*)(v9 + 8) == -1) {
    v10 = *(_QWORD*)(a1 + 8);
    v11 = *(_QWORD*)(v10 + 960);
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock_alt1(v11);
      if (v12 != 0) {
        v13 = (__int64*)(v10 + 952);
        v14 = v12;
        v15 = *v13;
        if (*v13 == 0) {
          goto LABEL_66;
        }
        v16 = ui_LayoutAccessor_FindPane(v13, (__int64)"MenuItemList");
        if (v16 == 0) {
          goto LABEL_66;
        }
        v17 = (_QWORD*)v16;
        v18 = (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)v16 + 120LL))(
            v16, v3, 1);
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21f8028) != 0) {
          GameData_21f8020 =
              (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic_alt1();
          __cxa_guard_release_alt1((__int64)&GameData_21f8028);
        }
        if (v18 != 0) {
          v19 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          if (v19 == &GameData_21f8020) {
            goto LABEL_21;
          }
          do {
            v19 = (__int64*)*v19;
          } while (v19 != &GameData_21f8020 && v19 != nullptr);
          if (v19 != nullptr) {
          LABEL_21:
            GameRoutine_15dd090((void*)((__int64*)&v59_.v59));
            if (v59_.v60 != 0) {
              v21 = std___1___shared_weak_count_lock_alt1(v59_.v60);
              if (v21 != 0) {
                v22 = v21;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16),
                                          1u, memory_order_relaxed);
                v24 = v59_.v59;
                v23 = v59_.v60;
                v59_.v59 = nullptr;
                v59_.v60 = 0;
                if (v23 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v23);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                  std___1___shared_weak_count___release_weak_alt2(v22);
                }
              }
              else {
                v37 = v59_.v60;
                v59_.v59 = nullptr;
                v59_.v60 = 0;
                if (v37 != 0) {
                  std___1___shared_weak_count___release_weak_alt2(v37);
                }
                v24 = nullptr;
                v22 = 0;
              }
            }
            else {
              v24 = nullptr;
              v22 = 0;
              v59_.v59 = nullptr;
              v59_.v60 = 0;
            }
            v38 = *(_QWORD*)(a1 + 112);
            *(_QWORD*)(a1 + 104) = v24;
            *(_QWORD*)(a1 + 112) = v22;
            if (v38 == 0) {
              goto LABEL_64;
            }
            goto LABEL_63;
          }
        }
        GameRoutine_15d4100((void*)((__int64*)&v59_.v59), v13, v54);
        if (v59_.v60 == 0) {
        LABEL_66:
          if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
            std___1___shared_weak_count___release_weak_alt2(v14);
          }
          goto LABEL_68;
        }
        v26 = std___1___shared_weak_count_lock_alt1(v59_.v60);
        if (v26 == 0) {
          goto LABEL_64;
        }
        v27 = v26;
        if (v59_.v59 == nullptr) {
          goto LABEL_61;
        }
        v28 = v59_.v59[40];
        if (v28 != 0) {
          v29 = v59_.v59[39];
          v30 = v59_.v59[40];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                    memory_order_relaxed);
          v31 = std___1___shared_weak_count_lock_alt1(v30);
          std___1___shared_weak_count___release_weak_alt2(v28);
          if (v31 != 0 && v29 != 0) {
            game_menu_16cccb0((void*)(&v55_.v55), v29);
            v32 = v55_.v56;
            v57_.v57 = nullptr;
            v57_.v58 = 0;
            if (v55_.v56 != 0) {
              v33 = std___1___shared_weak_count_lock_alt1(v55_.v56);
              v57_.v58 = v33;
              if (v33 != 0) {
                v34 = v55_.v55;
                v35 = v33;
                v57_.v57 = v55_.v55;
                std___1___shared_weak_count___release_weak_alt2(v32);
                if (v34 == nullptr) {
                  goto LABEL_58;
                }
                MenuItem_188b5e0(v34, a1 + 88);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16),
                                          1u, memory_order_relaxed);
                v36 = *(_QWORD*)(a1 + 112);
                *(_QWORD*)(a1 + 104) = v34;
                *(_QWORD*)(a1 + 112) = v35;
                if (v36 == 0) {
                  goto LABEL_58;
                }
              }
              else {
                v36 = v32;
              }
              std___1___shared_weak_count___release_weak_alt2(v36);
            }
          LABEL_58:
            GameRoutine_16ccdc0((__int64)&v57_.v57);
          LABEL_59:
            if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
              std___1___shared_weak_count___release_weak_alt2(v31);
            }
            goto LABEL_61;
          }
        }
        else {
          v31 = 0;
        }
        EquipInfoItem_SkillStock_16cce20_alt1((void*)(&v55_.v55), v15,
                                              &v59_.v59, v53, v17);
        v39 = v55_.v56;
        v57_.v57 = nullptr;
        v57_.v58 = 0;
        if (v55_.v56 != 0) {
          v40 = std___1___shared_weak_count_lock_alt1(v55_.v56);
          v57_.v58 = v40;
          if (v40 != 0) {
            v41 = v55_.v55;
            v42 = v40;
            v57_.v57 = v55_.v55;
            std___1___shared_weak_count___release_weak_alt2(v39);
            if (v41 == nullptr) {
              goto LABEL_54;
            }
            MenuItem_188b5e0(v41, a1 + 88);
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 16), 1u,
                                      memory_order_relaxed);
            v43 = *(_QWORD*)(a1 + 112);
            *(_QWORD*)(a1 + 104) = v41;
            *(_QWORD*)(a1 + 112) = v42;
            if (v43 == 0) {
              goto LABEL_54;
            }
          }
          else {
            v43 = v39;
          }
          std___1___shared_weak_count___release_weak_alt2(v43);
        }
      LABEL_54:
        GameRoutine_16ccdc0((__int64)&v57_.v57);
        if (v31 != 0) {
          goto LABEL_59;
        }
      LABEL_61:
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          v38 = v27;
        LABEL_63:
          std___1___shared_weak_count___release_weak_alt2(v38);
        }
      LABEL_64:
        if (v59_.v60 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v59_.v60);
        }
        goto LABEL_66;
      }
    }
  }
LABEL_68:
  LayoutAccessor_1560070((void*)(&v59_.v59),
                         (__int64*)(*(_QWORD*)(a1 + 8) + 952LL), v3);
  v45 = v59_.v59;
  v44 = v59_.v60;
  v46 = *(_QWORD*)(a1 + 56);
  v59_.v59 = nullptr;
  v59_.v60 = 0;
  *(_QWORD*)(a1 + 48) = v45;
  *(_QWORD*)(a1 + 56) = v44;
  if (v46 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v46);
    if (v59_.v60 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v59_.v60);
    }
    v44 = *(_QWORD*)(a1 + 56);
  }
  if (v44 == 0) {
    goto LABEL_76;
  }
  v47 = std___1___shared_weak_count_lock_alt1(v44);
  if (v47 == 0) {
    goto LABEL_76;
  }
  v48 = v47;
  v49 = (atomic_ullong*)(v47 + 8);
  v50 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v49, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v52 = v50;
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak_alt2(v48);
    v50 = v52;
    if (v52 != nullptr) {
      return LayoutAccessor_155e830((__int64)v50, 1);
    }
    goto LABEL_76;
  }
  if (v50 == nullptr) {
  LABEL_76:
    v50 = &ui_LayoutAccessor_empty_;
  }
  return LayoutAccessor_155e830((__int64)v50, 1);
}

__int64* EquipInfoItem_SkillStock_Unknown17(__int64 a1)
{
  __int64* result;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  struct {
    __int64* v10;
    __int64 v11;
  } v10_;
  char v12;
  struct {
    __int64* v13;
    __int64* v14;
    __int64 v15;
  } v13_;

  EquipInfoItem_Unknown17((_QWORD*)a1);
  result = *(__int64**)(a1 + 112);
  v13_.v13 = nullptr;
  v13_.v14 = nullptr;
  if (result != nullptr &&
      (result =
           (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result),
       v13_.v14 = result, result != nullptr) &&
      (v3 = result, result = *(__int64**)(a1 + 104), v13_.v13 = result,
       result != nullptr) &&
      (v4 = v3, (result = (__int64*)__dynamic_cast(result, GameData_2131a58[0],
                                                   GameData_2131a20[0], 0)) !=
                    nullptr)) {
    v5 = &v13_.v13;
    v10_.v10 = result;
    v10_.v11 = (__int64)v4;
  }
  else {
    v5 = &v10_.v10;
  }
  *v5 = nullptr;
  v5[1] = nullptr;
  v6 = (__int64)v13_.v14;
  if (v13_.v14 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt2(v6);
  }
  v7 = (__int64)v10_.v10;
  if (v10_.v10 != nullptr) {
    *((_BYTE*)v10_.v10 + 1072) = 0;
    GameRoutine_189afa0(v7, *(_DWORD*)(a1 + 128), *(_DWORD*)(a1 + 132));
    v8 = *(_DWORD*)(a1 + 136);
    if ((*(_BYTE*)(v7 + 1080) & 1) == 0) {
      *(_BYTE*)(v7 + 1080) = 1;
    }
    *(_DWORD*)(v7 + 1076) = v8;
    *(_QWORD*)(v7 + 1096) = *(_QWORD*)(a1 + 96);
    MenuItemSkill_1899480(v7, 1u, 0, 0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
    Element_1886580(v7, 1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 384LL))(v7);
    v13_.v15 = 0;
    v13_.v13 = GameData_212d890[0] + 2;
    LODWORD(v13_.v14) = 20;
    result = X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(v7 + 72) + 16LL))((void*)&v12, v7 + 72, &v13_.v13));
  }
  v9 = v10_.v11;
  if (v10_.v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return (__int64*)std___1___shared_weak_count___release_weak_alt2(v9);
  }
  return result;
}

__int64 EquipInfoItem_SkillStock_Unknown70(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        result = GameRoutine_18a7ae0(result, a1 + 136, *(_QWORD*)(a1 + 96), 0,
                                     0, 0, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void

EquipInfoItem_SkillStock_16cce20(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                                 _QWORD* a3, _QWORD* a4, __n128 result)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  atomic_uchar* v18;
  __int64* v19;
  __int64* v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 i;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64** v45;
  _QWORD* v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;

  v7 = *(_QWORD*)(a2 + 8);
  if (v7 == 0) {
    goto LABEL_63;
  }
  v12 = std___1___shared_weak_count_lock(v7);
  if (v12 == 0) {
    goto LABEL_63;
  }
  v13 = *(_QWORD**)a2;
  v14 = v12;
  if (*(_QWORD*)a2 == 0) {
    goto LABEL_60;
  }
  v15 = v13[1];
  if (*(_QWORD*)(*(_QWORD*)(v15 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v16 = a4;
  v17 = *(_BYTE*)(a1 + 24) != 0 ? a1 + 152 : 0LL;
  v51 = v17;
  v18 = (atomic_uchar*)GameData_212dfd0;
  v19 = GameData_212dfc8;
  do {
    if ((atomic_load_explicit(v18, memory_order_acquire) & 1) == 0) {
      v22 = __cxa_guard_acquire(v18);
      if ((_DWORD)v22 != 0) {
        *v19 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v22, v23, v24, v25);
        __cxa_guard_release(v18);
      }
    }
    v20 = (__int64*)(*(__int64 (**)(_QWORD*))(*v16 + 16LL))(v16);
    if (v20 == v19) {
      goto LABEL_21;
    }
    do {
      v20 = (__int64*)*v20;
    } while (v20 != v19 && v20 != nullptr);
    if (v20 != nullptr) {
    LABEL_21:
      v26 = v16[29];
      if (v15 == 0) {
        goto LABEL_60;
      }
      goto LABEL_24;
    }
    v16 = (_QWORD*)v16[3];
  } while (v16 != nullptr);
  v26 = v51;
  if (v15 == 0) {
    goto LABEL_60;
  }
LABEL_24:
  if (*(_QWORD*)(*(_QWORD*)(v15 + 24) + 24LL) == 0) {
    goto LABEL_60;
  }
  v27 = (_QWORD*)LayoutEx_579180(96);
  if (v27 == nullptr) {
    goto LABEL_60;
  }
  v28 = v27;
  v29 = GameData_2130ec0[0];
  v27[2] = v27 + 1;
  v52 = v26;
  *v27 = v29 + 16;
  v27[1] = v27 + 1;
  v27[9] = v27 + 9;
  v27[10] = v27 + 9;
  LayoutEx_57b150();
  v30 = v28[3];
  LayoutEx_58d200(v30, *a3);
  Pane_58dee0(a4, v30);
  for (i = *(_QWORD*)(v15 + 80); i != v15 + 72; i = *(_QWORD*)(i + 8)) {
    v32 = LayoutEx_57cf40(v28, i - 40);
    if (v32 != 0) {
      Layout_1364020(a1, i - 216, v32);
    }
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
      *v13 + 16LL))((void*)&v53, v13, v28);
  if (v53 != 0 && (v33 = __dynamic_cast(v53, GameData_212dfc0[0],
                                        GameData_2131a20[0], 0)) != 0) {
    v55 = v33;
    v56 = v54;
    v34 = &v53;
  }
  else {
    v34 = &v55;
  }
  *v34 = 0;
  v34[1] = 0;
  v35 = v54;
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
    result = std___1___shared_weak_count___release_weak_alt1(v35);
  }
  v36 = v55;
  if (v55 == 0) {
    v44 = v56;
    if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v44 + 16LL))(
          v44, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak_alt1(v44);
    }
    v45 = (__int64**)(v52 + 72);
    if (*(_QWORD*)(v52 + 80) != v52 + 72) {
      v46 = (_QWORD*)(*v45)[2];
      if (v46 == v28) {
        v47 = *game_g_frame_clock_ptr[0];
        Layout_13639a0(a1, (*v45)[2], *(long double*)&result);
        v48 = *v45;
        v49 = (__int64*)(*v45)[1];
        v50 = *v49;
        *(_QWORD*)(**v45 + 8) = v49;
        *v49 = *v48;
        *(_QWORD*)(v50 + 8) = v48;
        *v48 = v50;
        Layout_579280(v46, v47 + 568);
        (*(void (**)(_QWORD*))(*v46 + 8LL))(v46);
        LayoutEx_5791a0(v46);
      }
    }
  LABEL_60:
    v43 = 0;
    goto LABEL_61;
  }
  v37 = v56;
  v53 = v55;
  v54 = v56;
  if (v56 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                              memory_order_relaxed);
  }
  v38 = *(_QWORD*)(a1 + 2280);
  v39 = a1 + 2272;
  if (v38 == a1 + 2272) {
    goto LABEL_44;
  }
  while (*(_QWORD*)(v38 + 16) != v36) {
    v38 = *(_QWORD*)(v38 + 8);
    if (v38 == v39) {
      goto LABEL_44;
    }
  }
  if (v38 == v39) {
  LABEL_44:
    v40 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v40[2] = v36;
    v40[3] = v37;
    if (v37 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                memory_order_relaxed);
    }
    v41 = *(_QWORD*)(a1 + 2272);
    *v40 = v41;
    v40[1] = v39;
    *(_QWORD*)(v41 + 8) = v40;
    *(_QWORD*)(a1 + 2272) = v40;
    ++*(_QWORD*)(a1 + 2288);
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v36 + 128LL))(v36, &v53);
    v37 = v54;
  }
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    result = std___1___shared_weak_count___release_weak_alt1(v37);
  }
  v42 = v56;
  *a5 = v55;
  a5[1] = v42;
  if (v42 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v42 + 16LL))(
          v42, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak_alt1(v42);
    }
  }
  v43 = 1;
LABEL_61:
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v43 & 1) != 0) {
      result;
      return;
    }
    goto LABEL_63;
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
      v14, *(long double*)&result);
  result = std___1___shared_weak_count___release_weak_alt1(v14);
  if ((v43 & 1) == 0) {
  LABEL_63:
    *a5 = 0;
    a5[1] = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
