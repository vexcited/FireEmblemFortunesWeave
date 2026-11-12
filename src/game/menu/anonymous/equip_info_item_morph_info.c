#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* MenuItem_188b5e0(_QWORD* result, __int64);
__attribute__((swiftcall)) void GameRoutine_16c7c30(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_16c9570(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_16c96a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_16c9820(PSEUDO_X8, __int64,
                                                    _QWORD**, _QWORD*, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 GameRoutine_16c97b0(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 MenuItemMorph_18bd000(__int64 result, __int64*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_21f8028;
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a58[13];
extern __int64 GameData_2131bb0[6];
extern __int64 GameData_21f8020;
extern __int64 ui_LayoutAccessor_empty_;
int __cxa_guard_acquire(__int64);
void Element_1886580(__int64, char);
void __cxa_guard_release(__int64);
__int64 EquipInfoItem_MorphInfo_Unknown16(_QWORD* a1);
__int64 EquipInfoItem_MorphInfo_Unknown17(_QWORD* a1);

__int64 EquipInfoItem_MorphInfo_Unknown16(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_uchar* v17;
  __int64* v18;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  atomic_ullong* v52;
  __int64* v53;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  _QWORD v61[2];
  struct {
    __int64* v62;
    __int64 v63;
  } v62_;
  struct {
    __int64* v64;
    __int64 v65;
  } v64_;
  struct {
    _QWORD* v66;
    __int64 v67;
  } v66_;

  v2 = a1[7];
  v61[0] = "MorphInfo";
  v61[1] = 9;
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v23 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v23;
  if (v23 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830((__int64)v6, 0);
  v7 = a1[14];
  if (v7 == 0 || *(_QWORD*)(v7 + 8) == -1) {
    v8 = a1[1];
    v9 = *(_QWORD*)(v8 + 960);
    if (v9 != 0) {
      v10 = std___1___shared_weak_count_lock(v9);
      if (v10 != 0) {
        v11 = (__int64*)(v8 + 952);
        v12 = v10;
        v13 = *(_QWORD*)(v8 + 952);
        if (v13 == 0 || (v14 = ui_LayoutAccessor_FindPane(
                             (__int64*)(v8 + 952), "MenuItemList")) == 0) {
        LABEL_63:
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
          goto LABEL_65;
        }
        v15 = v14;
        v16 = (*(__int64 (**)(__int64, const char*, __int64))(
            *(_QWORD*)v14 + 120LL))(v14, "MorphInfo", 1);
        v17 = (atomic_uchar*)GameData_212dfd0;
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
          GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
          __cxa_guard_release((__int64)&GameData_21f8028);
        }
        if (v16 != 0) {
          v18 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          if (v18 == &GameData_21f8020) {
            goto LABEL_21;
          }
          do {
            v18 = (__int64*)*v18;
          } while (v18 != &GameData_21f8020 && v18 != nullptr);
          if (v18 != nullptr) {
          LABEL_21:
            GameRoutine_16c9570((void*)((__int64*)&v66_.v66), v13, v16);
            v20 = v66_.v67;
            if (v66_.v67 != 0) {
              v21 = std___1___shared_weak_count_lock(v66_.v67);
              if (v21 != 0) {
                v22 = v66_.v66;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16),
                                          1u, memory_order_relaxed);
                v66_.v66 = nullptr;
                v66_.v67 = 0;
                std___1___shared_weak_count___release_weak(v20);
                if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
                  std___1___shared_weak_count___release_weak(v21);
                }
              }
              else {
                v66_.v66 = nullptr;
                v66_.v67 = 0;
                std___1___shared_weak_count___release_weak(v20);
                v22 = nullptr;
              }
            }
            else {
              v22 = nullptr;
              v21 = 0;
              v66_.v66 = nullptr;
              v66_.v67 = 0;
            }
            v45 = a1[14];
            a1[13] = v22;
            a1[14] = v21;
            if (v45 != 0) {
              std___1___shared_weak_count___release_weak(v45);
            }
            v46 = v66_.v67;
            if (v66_.v67 == 0) {
              goto LABEL_63;
            }
            goto LABEL_62;
          }
        }
        v24 = *(_QWORD*)(v8 + 960);
        if (v24 == 0) {
          goto LABEL_63;
        }
        v25 = std___1___shared_weak_count_lock(v24);
        if (v25 == 0) {
          goto LABEL_63;
        }
        v26 = *v11;
        v27 = v25;
        if (*v11 != 0 && (v28 = ui_LayoutAccessor_GetPartsLayout(
                              v11, "L_MenuItem_DragonInfo")) != 0) {
          v29 = *(_QWORD*)(v28 + 24);
          if ((atomic_load_explicit(v17, memory_order_acquire) & 1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
            GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
            __cxa_guard_release((__int64)&GameData_21f8028);
          }
          if (v29 == 0) {
            goto LABEL_40;
          }
          v30 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
          if (v30 != &GameData_21f8020) {
            do {
              v30 = (__int64*)*v30;
            } while (v30 != &GameData_21f8020 && v30 != nullptr);
            if (v30 == nullptr) {
            LABEL_40:
              v29 = 0;
            }
          }
          GameRoutine_16c9570((void*)((__int64*)&v66_.v66), v26, v29);
          v32 = 0;
        }
        else {
          v32 = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v27);
        }
        if ((v32 & 1) != 0) {
          goto LABEL_63;
        }
        v33 = v66_.v67;
        if (v66_.v67 == 0) {
          goto LABEL_63;
        }
        v34 = std___1___shared_weak_count_lock(v66_.v67);
        if (v34 == 0) {
        LABEL_95:
          v46 = v33;
        LABEL_62:
          std___1___shared_weak_count___release_weak(v46);
          goto LABEL_63;
        }
        v35 = v34;
        if (v66_.v66 == nullptr) {
        LABEL_92:
          if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            std___1___shared_weak_count___release_weak(v35);
          }
          v33 = v66_.v67;
          if (v66_.v67 == 0) {
            goto LABEL_63;
          }
          goto LABEL_95;
        }
        v36 = v66_.v66[40];
        if (v36 != 0) {
          v37 = v66_.v66[39];
          v38 = v66_.v66[40];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                    memory_order_relaxed);
          v39 = std___1___shared_weak_count_lock(v38);
          std___1___shared_weak_count___release_weak(v36);
          if (v39 != 0 && v37 != 0) {
            GameRoutine_16c96a0((void*)(&v62_.v62), v37);
            v40 = v62_.v63;
            v64_.v64 = nullptr;
            v64_.v65 = 0;
            if (v62_.v63 != 0) {
              v41 = std___1___shared_weak_count_lock(v62_.v63);
              v64_.v65 = v41;
              if (v41 != 0) {
                v42 = v62_.v62;
                v43 = v41;
                v64_.v64 = v62_.v62;
                std___1___shared_weak_count___release_weak(v40);
                if (v42 == nullptr) {
                  goto LABEL_89;
                }
                MenuItem_188b5e0(v42, (__int64)(a1 + 11));
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16),
                                          1u, memory_order_relaxed);
                v44 = a1[14];
                a1[13] = v42;
                a1[14] = v43;
                if (v44 == 0) {
                  goto LABEL_89;
                }
              }
              else {
                v44 = v40;
              }
              std___1___shared_weak_count___release_weak(v44);
            }
          LABEL_89:
            GameRoutine_16c97b0((__int64)&v64_.v64);
          LABEL_90:
            if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
              std___1___shared_weak_count___release_weak(v39);
            }
            goto LABEL_92;
          }
        }
        else {
          v39 = 0;
        }
        GameRoutine_16c9820((void*)(&v62_.v62), v13, &v66_.v66, v61, v15);
        v56 = v62_.v63;
        v64_.v64 = nullptr;
        v64_.v65 = 0;
        if (v62_.v63 != 0) {
          v57 = std___1___shared_weak_count_lock(v62_.v63);
          v64_.v65 = v57;
          if (v57 != 0) {
            v58 = v62_.v62;
            v59 = v57;
            v64_.v64 = v62_.v62;
            std___1___shared_weak_count___release_weak(v56);
            if (v58 == nullptr) {
              goto LABEL_85;
            }
            MenuItem_188b5e0(v58, (__int64)(a1 + 11));
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 16), 1u,
                                      memory_order_relaxed);
            v60 = a1[14];
            a1[13] = v58;
            a1[14] = v59;
            if (v60 == 0) {
              goto LABEL_85;
            }
          }
          else {
            v60 = v56;
          }
          std___1___shared_weak_count___release_weak(v60);
        }
      LABEL_85:
        GameRoutine_16c97b0((__int64)&v64_.v64);
        if (v39 == 0) {
          goto LABEL_92;
        }
        goto LABEL_90;
      }
    }
  }
LABEL_65:
  LayoutAccessor_1560070((void*)(&v66_.v66), (__int64*)(a1[1] + 952LL),
                         "MorphInfo");
  v48 = v66_.v66;
  v47 = v66_.v67;
  v49 = a1[7];
  v66_.v66 = nullptr;
  v66_.v67 = 0;
  a1[6] = v48;
  a1[7] = v47;
  if (v49 != 0) {
    std___1___shared_weak_count___release_weak(v49);
    if (v66_.v67 != 0) {
      std___1___shared_weak_count___release_weak(v66_.v67);
    }
    v47 = a1[7];
  }
  if (v47 == 0) {
    goto LABEL_73;
  }
  v50 = std___1___shared_weak_count_lock(v47);
  if (v50 == 0) {
    goto LABEL_73;
  }
  v51 = v50;
  v52 = (atomic_ullong*)(v50 + 8);
  v53 = (__int64*)a1[6];
  if (atomic_fetch_add(v52, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v55 = v53;
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    std___1___shared_weak_count___release_weak(v51);
    v53 = v55;
    if (v55 != nullptr) {
      return LayoutAccessor_155e830((__int64)v53, 1);
    }
    goto LABEL_73;
  }
  if (v53 == nullptr) {
  LABEL_73:
    v53 = &ui_LayoutAccessor_empty_;
  }
  return LayoutAccessor_155e830((__int64)v53, 1);
}

__int64 EquipInfoItem_MorphInfo_Unknown17(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  _QWORD v22[2];
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    __int64* v25;
    __int64 v26;
    __int64 v27;
  } v25_;

  result = a1[14];
  v25_.v25 = nullptr;
  v25_.v26 = 0;
  if (result != 0 &&
      (result = std___1___shared_weak_count_lock(result), v25_.v26 = result,
       result != 0) &&
      (v3 = result, result = a1[13], v25_.v25 = (__int64*)result,
       result != 0) &&
      (v4 = v3, (result = __dynamic_cast(result, GameData_2131a58[0],
                                         GameData_2131bb0[0], 0)) != 0)) {
    v5 = &v25_.v25;
    v23_.v23 = result;
    v23_.v24 = v4;
  }
  else {
    v5 = (__int64**)&v23_.v23;
  }
  *v5 = nullptr;
  v5[1] = nullptr;
  v6 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  v7 = v23_.v23;
  if (v23_.v23 != 0) {
    v8 = v23_.v23;
    *(_DWORD*)(v23_.v23 + 1112) = 1;
    v9 = a1[12];
    v10 = a1[16];
    *(_BYTE*)(v7 + 1116) = 1;
    v11 = *(_QWORD*)v7;
    *(_QWORD*)(v7 + 1064) = v9;
    *(_QWORD*)(v7 + 1072) = v10;
    (*(void (**)(__int64, __int64))(v11 + 40))(v8, 1);
    Element_1886580(v7, 1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 384LL))(v7);
    v25_.v27 = 0;
    v25_.v25 = GameData_212d890[0] + 2;
    LODWORD(v25_.v26) = 20;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
        *(_QWORD*)(v7 + 72) + 16LL))((void*)(v22), v7 + 72, &v25_.v25);
    v12 = a1[1];
    v22[0] = "L_EquipDeploy";
    v22[1] = 13;
    result = *(_QWORD*)(v12 + 856);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v13 = *(_QWORD*)(v12 + 848);
        v14 = result;
        if (v13 != 0) {
          result = X8CALL_X0(__int64,
                             GameRoutine_16c7c30((void*)((__int64*)&v25_.v25),
                                                 v13, (__int64)v22));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
          result = std___1___shared_weak_count___release_weak(v14);
        }
        if (v13 != 0) {
          result = v25_.v26;
          if (v25_.v26 != 0) {
            v15 = std___1___shared_weak_count_lock(v25_.v26);
            result = v25_.v26;
            if (v15 != 0) {
              v16 = v25_.v25;
            }
            else {
              v16 = nullptr;
            }
            if (v25_.v26 != 0) {
              result = std___1___shared_weak_count___release_weak(v25_.v26);
            }
            if (v16 != nullptr) {
              v17 = v23_.v23;
              v20_.v20 = v16;
              v20_.v21 = v15;
              if (v15 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8),
                                          1u, memory_order_relaxed);
              }
              result = MenuItemMorph_18bd000(v17, (__int64*)&v20_.v20);
              v18 = v20_.v21;
              if (v20_.v21 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                result = std___1___shared_weak_count___release_weak(v18);
              }
            }
            if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
              result = std___1___shared_weak_count___release_weak(v15);
            }
          }
        }
      }
    }
  }
  v19 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    return std___1___shared_weak_count___release_weak(v19);
  }
  return result;
}

#pragma GCC visibility pop
