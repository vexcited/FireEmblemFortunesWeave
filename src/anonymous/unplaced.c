#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* MenuItem_188b5e0(_QWORD* result, __int64);
__attribute__((swiftcall)) void EquipInfoItem_DustItem_16d4cf0(PSEUDO_X8,
                                                               __int64);
__attribute__((swiftcall)) void
EquipInfoItem_DustItem_16d4e60(PSEUDO_X8, __int64, _QWORD**, _QWORD*, __int64);
__attribute__((swiftcall)) void GameRoutine_15d4240(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void GameRoutine_15dd400(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 GameRoutine_16d4e00(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_21f8028;
extern __int64 GameData_21f8020;
extern __int64 ui_LayoutAccessor_empty_;
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
__int64 anonymous_16d4820(_QWORD* a1, const char** a2, _QWORD* a3);

__int64 anonymous_16d4820(_QWORD* a1, const char** a2, _QWORD* a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  atomic_ullong* v51;
  __int64* v52;
  __int64* v54;
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

  v4 = a1[7];
  if (v4 == 0) {
    goto LABEL_5;
  }
  v7 = std___1___shared_weak_count_lock(v4);
  if (v7 == 0) {
    goto LABEL_5;
  }
  v8 = v7;
  v9 = (atomic_ullong*)(v7 + 8);
  v10 = (__int64*)a1[6];
  if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v27 = v10;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v8);
  v10 = v27;
  if (v27 == nullptr) {
  LABEL_5:
    v10 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830((__int64)v10, 0);
  v11 = a1[14];
  if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
    v12 = a1[1];
    v13 = *(_QWORD*)(v12 + 960);
    if (v13 != 0) {
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 != 0) {
        v15 = (__int64*)(v12 + 952);
        v16 = v14;
        v17 = *v15;
        if (*v15 == 0) {
          goto LABEL_66;
        }
        v18 = ui_LayoutAccessor_FindPane(v15, "MenuItemList");
        if (v18 == 0) {
          goto LABEL_66;
        }
        v19 = v18;
        v20 = (*(__int64 (**)(__int64, _QWORD, __int64))(*(_QWORD*)v18 +
                                                         120LL))(v18, *a3, 1);
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
          GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release((__int64)&GameData_21f8028);
        }
        if (v20 != 0) {
          v21 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          if (v21 == &GameData_21f8020) {
            goto LABEL_21;
          }
          do {
            v21 = (__int64*)*v21;
          } while (v21 != &GameData_21f8020 && v21 != nullptr);
          if (v21 != nullptr) {
          LABEL_21:
            GameRoutine_15dd400((void*)((__int64*)&v59_.v59), v17, v20);
            if (v59_.v60 != 0) {
              v23 = std___1___shared_weak_count_lock(v59_.v60);
              if (v23 != 0) {
                v24 = v23;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16),
                                          1u, memory_order_relaxed);
                v26 = v59_.v59;
                v25 = v59_.v60;
                v59_.v59 = nullptr;
                v59_.v60 = 0;
                if (v25 != 0) {
                  std___1___shared_weak_count___release_weak(v25);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
                  std___1___shared_weak_count___release_weak(v24);
                }
              }
              else {
                v39 = v59_.v60;
                v59_.v59 = nullptr;
                v59_.v60 = 0;
                if (v39 != 0) {
                  std___1___shared_weak_count___release_weak(v39);
                }
                v26 = nullptr;
                v24 = 0;
              }
            }
            else {
              v26 = nullptr;
              v24 = 0;
              v59_.v59 = nullptr;
              v59_.v60 = 0;
            }
            v40 = a1[14];
            a1[13] = v26;
            a1[14] = v24;
            if (v40 == 0) {
              goto LABEL_64;
            }
            goto LABEL_63;
          }
        }
        GameRoutine_15d4240((void*)(&v59_.v59), v15, a2);
        if (v59_.v60 == 0) {
        LABEL_66:
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak(v16);
          }
          goto LABEL_68;
        }
        v28 = std___1___shared_weak_count_lock(v59_.v60);
        if (v28 == 0) {
          goto LABEL_64;
        }
        v29 = v28;
        if (v59_.v59 == nullptr) {
          goto LABEL_61;
        }
        v30 = v59_.v59[40];
        if (v30 != 0) {
          v31 = v59_.v59[39];
          v32 = v59_.v59[40];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                    memory_order_relaxed);
          v33 = std___1___shared_weak_count_lock(v32);
          std___1___shared_weak_count___release_weak(v30);
          if (v33 != 0 && v31 != 0) {
            EquipInfoItem_DustItem_16d4cf0((void*)(&v55_.v55), v31);
            v34 = v55_.v56;
            v57_.v57 = nullptr;
            v57_.v58 = 0;
            if (v55_.v56 != 0) {
              v35 = std___1___shared_weak_count_lock(v55_.v56);
              v57_.v58 = v35;
              if (v35 != 0) {
                v36 = v55_.v55;
                v37 = v35;
                v57_.v57 = v55_.v55;
                std___1___shared_weak_count___release_weak(v34);
                if (v36 == nullptr) {
                  goto LABEL_58;
                }
                MenuItem_188b5e0(v36, (__int64)(a1 + 11));
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16),
                                          1u, memory_order_relaxed);
                v38 = a1[14];
                a1[13] = v36;
                a1[14] = v37;
                if (v38 == 0) {
                  goto LABEL_58;
                }
              }
              else {
                v38 = v34;
              }
              std___1___shared_weak_count___release_weak(v38);
            }
          LABEL_58:
            GameRoutine_16d4e00((__int64)&v57_.v57);
          LABEL_59:
            if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
              std___1___shared_weak_count___release_weak(v33);
            }
            goto LABEL_61;
          }
        }
        else {
          v33 = 0;
        }
        EquipInfoItem_DustItem_16d4e60((void*)(&v55_.v55), v17, &v59_.v59, a3,
                                       v19);
        v41 = v55_.v56;
        v57_.v57 = nullptr;
        v57_.v58 = 0;
        if (v55_.v56 != 0) {
          v42 = std___1___shared_weak_count_lock(v55_.v56);
          v57_.v58 = v42;
          if (v42 != 0) {
            v43 = v55_.v55;
            v44 = v42;
            v57_.v57 = v55_.v55;
            std___1___shared_weak_count___release_weak(v41);
            if (v43 == nullptr) {
              goto LABEL_54;
            }
            MenuItem_188b5e0(v43, (__int64)(a1 + 11));
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 16), 1u,
                                      memory_order_relaxed);
            v45 = a1[14];
            a1[13] = v43;
            a1[14] = v44;
            if (v45 == 0) {
              goto LABEL_54;
            }
          }
          else {
            v45 = v41;
          }
          std___1___shared_weak_count___release_weak(v45);
        }
      LABEL_54:
        GameRoutine_16d4e00((__int64)&v57_.v57);
        if (v33 != 0) {
          goto LABEL_59;
        }
      LABEL_61:
        if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          v40 = v29;
        LABEL_63:
          std___1___shared_weak_count___release_weak(v40);
        }
      LABEL_64:
        if (v59_.v60 != 0) {
          std___1___shared_weak_count___release_weak(v59_.v60);
        }
        goto LABEL_66;
      }
    }
  }
LABEL_68:
  LayoutAccessor_1560070((void*)(&v59_.v59), (__int64*)(a1[1] + 952LL),
                         (const char*)*a3);
  v47 = v59_.v59;
  v46 = v59_.v60;
  v48 = a1[7];
  v59_.v59 = nullptr;
  v59_.v60 = 0;
  a1[6] = v47;
  a1[7] = v46;
  if (v48 != 0) {
    std___1___shared_weak_count___release_weak(v48);
    if (v59_.v60 != 0) {
      std___1___shared_weak_count___release_weak(v59_.v60);
    }
    v46 = a1[7];
  }
  if (v46 == 0) {
    goto LABEL_76;
  }
  v49 = std___1___shared_weak_count_lock(v46);
  if (v49 == 0) {
    goto LABEL_76;
  }
  v50 = v49;
  v51 = (atomic_ullong*)(v49 + 8);
  v52 = (__int64*)a1[6];
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v54 = v52;
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak(v50);
    v52 = v54;
    if (v54 != nullptr) {
      return LayoutAccessor_155e830((__int64)v52, 1);
    }
    goto LABEL_76;
  }
  if (v52 == nullptr) {
  LABEL_76:
    v52 = &ui_LayoutAccessor_empty_;
  }
  return LayoutAccessor_155e830((__int64)v52, 1);
}

#pragma GCC visibility pop
