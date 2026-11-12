#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_15d4100(PSEUDO_X8, _QWORD, _QWORD);
__int64 Element_1885bc0(__int64, __int64*);
__int64 GameRoutine_18855c0(__int64 result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 MenuItemRage_18a1120_alt1(__int64 result,
                                  __int64* a2) __asm__("MenuItemRage_18a1120");
__attribute__((swiftcall)) void
GameRoutine_15d4100_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_15d4100");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_18855c0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_18855c0");
void MenuItemRage_18a1120(__int64 a1, _QWORD** a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 MenuItemRageName_18a0790(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d890[2];
void GameRoutine_157f4e0(__int64*, __int64, __int64);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
__int64 MenuItemRage_18a0d40(__int64* a1);

__int64 MenuItemRage_18a0d40(__int64* a1)
{
  int* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _WORD* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _WORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _BOOL4 v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64* v34;
    __int64 v35;
    __int64 v36;
  } v34_;
  __int64 var4;

  v2 = a1[133];
  if (v2 == 0) {
    v9 = a1[134];
  LABEL_15:
    MenuItemRageName_18a0790(v9);
    return ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 11),
                                            (__int64)"L_MorphRange", 0);
  }
  if ((*(_WORD*)(v2 + 1536) & 0x40) == 0 ||
      (v4 = *(_QWORD*)(v2 + 1496), v5 = *(_QWORD*)(v2 + 1488), v4 == v5)) {
    v8 = GameData_212c8a8;
  }
  else {
    v6 = (v4 - v5) >> 2;
    v7 = 0;
    v8 = GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v5 + 4 * v7) & 0xFFF)) +
                     104LL) != 6) {
      if (v6 == ++v7) {
        goto LABEL_9;
      }
    }
    v18 = (_WORD*)(v5 + 4LL * (unsigned int)v7);
    if (v7 > -1) {
      v8 = v18;
    }
  }
LABEL_9:
  v9 = a1[134];
  if ((*v8 & 0xFFF) == 0) {
    goto LABEL_15;
  }
  *(_QWORD*)(v9 + 24) = v2;
  v10 = (__int64*)a1[134];
  v11 = v10[3];
  if (v11 == 0) {
    MenuItemRageName_18a0790(a1[134]);
    goto LABEL_39;
  }
  if ((*(_WORD*)(v11 + 1536) & 0x40) == 0) {
    v1 = (int*)GameData_212c8a8;
    v12 = v10[2];
    if (v12 == 0) {
      goto LABEL_39;
    }
    goto LABEL_27;
  }
  v14 = *(_QWORD*)(v11 + 1496);
  v15 = *(_QWORD*)(v11 + 1488);
  if (v14 != v15) {
    v16 = (v14 - v15) >> 2;
    v17 = 0;
    v1 = (int*)GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v15 + 4 * v17) & 0xFFF)) +
                     104LL) != 6) {
      if (v16 == ++v17) {
        goto LABEL_26;
      }
    }
    v24 = (int*)(v15 + 4LL * (unsigned int)v17);
    if (v17 > -1) {
      v1 = v24;
    }
    v12 = v10[2];
    if (v12 == 0) {
      goto LABEL_39;
    }
  LABEL_27:
    v19 = std___1___shared_weak_count_lock_alt1(v12);
    if (v19 != 0) {
      v20 = v10[1];
      v21 = v19;
      if (v20 != 0) {
        MenuItemSkill_1899480(v10[1], 1u, 0, 0);
        *(_BYTE*)(v20 + 1072) = 6;
        v22 = *(_QWORD*)(v20 + 1032);
        if (v22 != 0) {
          *(_BYTE*)(v22 + 88) |= 1u;
        }
        *(_BYTE*)(v20 + 1108) = 1;
        v23 = *v1;
        if ((*(_BYTE*)(v20 + 1080) & 1) == 0) {
          *(_BYTE*)(v20 + 1080) = 1;
        }
        *(_DWORD*)(v20 + 1076) = v23;
        *(_QWORD*)(v20 + 1096) = v10[3];
        v34_.v36 = 0;
        v34_.v34 = GameData_212d890[0] + 2;
        LODWORD(v34_.v35) = 20;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(v20 + 72) + 16LL))((void*)(&var4), v20 + 72, &v34_.v34);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 40LL))(v20, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak_alt1(v21);
      }
    }
    goto LABEL_39;
  }
  v1 = (int*)GameData_212c8a8;
LABEL_26:
  v12 = v10[2];
  if (v12 != 0) {
    goto LABEL_27;
  }
LABEL_39:
  LayoutAccessor_1560070((void*)(&v34_.v34), a1 + 11, "L_MorphRange");
  if (v34_.v35 != 0) {
    v25 = std___1___shared_weak_count_lock_alt1(v34_.v35);
    v26 = v34_.v34;
    if (v34_.v35 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v34_.v35);
    }
    if (v25 != 0 && v26 != nullptr) {
      if (v26[2] != 0) {
        v27 = v26[1];
        if (v27 != 0) {
          v28 = std___1___shared_weak_count_lock_alt1(v27);
          if (v28 == 0) {
            goto LABEL_57;
          }
          v29 = *v26;
          if (*v26 != 0) {
            LODWORD(v1) = *(unsigned __int8*)(v29 + 24);
            v30 = v29 + 152;
            if ((_DWORD)v1 == 0) {
              v30 = 0;
            }
            v31 = v30 != v26[2];
          }
          else {
            v31 = true;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v32 = v28;
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak_alt1(v32);
          }
          if (!v31) {
            if (((unsigned __int8)v1 & 1) != 0) {
            LABEL_59:
              LayoutAccessor_155e830((__int64)v26, 1);
              GameRoutine_157f4e0(
                  v26, a1[133],
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*(_DWORD*)v8 & 0xFFF)));
            }
          }
          else {
          LABEL_57:
            v33 = v26[1];
            if (v33 != 0 && *(_QWORD*)(v33 + 8) != -1) {
              goto LABEL_59;
            }
          }
        }
      }
    LABEL_60:
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak_alt1(v25);
      }
      goto LABEL_62;
    }
    if (v25 != 0) {
      goto LABEL_60;
    }
  }
LABEL_62:
  result = ui_LayoutAccessor_FindAlignment(a1 + 11, (__int64)"A_MenuItem");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

void MenuItemRage_18a1120(__int64 a1, _QWORD** a2)
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
    v22[0] = (__int64)"L_MorphRange";
    v22[1] = 12;
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
