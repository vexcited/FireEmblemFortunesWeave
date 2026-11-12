#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c8a8;
extern __int64* GameData_212c880[5];
__int64 EquipInfoItem_RageInfo_Unknown70(__int64 a1, __int64* a2);
_QWORD* MenuItem_188b5e0(_QWORD* result, __int64);
__attribute__((swiftcall)) void GameRoutine_16c7c30(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_16d5d10(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_16d5e40(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_16d5fc0(PSEUDO_X8, __int64,
                                                    _QWORD**, _QWORD*, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 EquipInfoItem_Unknown17(_QWORD*);
__int64 GameRoutine_16d5f50(__int64 result);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 MenuItemRage_18a1120(__int64 result, __int64*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_GetPartsLayout(__int64*, const char*);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN GameData_21f8028;
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a58[13];
extern __int64 GameData_2131bd0[2];
extern __int64 GameData_21f8020;
extern __int64 ui_LayoutAccessor_empty_;
int __cxa_guard_acquire(__int64);
void Element_1886580(__int64, char);
void __cxa_guard_release(__int64);
__int64 EquipInfoItem_RageInfo_Unknown16(_QWORD* a1);
__int64 EquipInfoItem_RageInfo_Unknown17(_QWORD* a1);

__int64 EquipInfoItem_RageInfo_Unknown16(_QWORD* a1)
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
  v61[0] = "RageInfo";
  v61[1] = 8;
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
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
  std___1___shared_weak_count___release_weak_alt1(v4);
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
      v10 = std___1___shared_weak_count_lock_alt1(v9);
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
            std___1___shared_weak_count___release_weak_alt1(v12);
          }
          goto LABEL_65;
        }
        v15 = v14;
        v16 = (*(__int64 (**)(__int64, const char*, __int64))(
            *(_QWORD*)v14 + 120LL))(v14, "RageInfo", 1);
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
            GameRoutine_16d5d10((void*)((__int64*)&v66_.v66), v13, v16);
            v20 = v66_.v67;
            if (v66_.v67 != 0) {
              v21 = std___1___shared_weak_count_lock_alt1(v66_.v67);
              if (v21 != 0) {
                v22 = v66_.v66;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16),
                                          1u, memory_order_relaxed);
                v66_.v66 = nullptr;
                v66_.v67 = 0;
                std___1___shared_weak_count___release_weak_alt1(v20);
                if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
                  std___1___shared_weak_count___release_weak_alt1(v21);
                }
              }
              else {
                v66_.v66 = nullptr;
                v66_.v67 = 0;
                std___1___shared_weak_count___release_weak_alt1(v20);
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
              std___1___shared_weak_count___release_weak_alt1(v45);
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
        v25 = std___1___shared_weak_count_lock_alt1(v24);
        if (v25 == 0) {
          goto LABEL_63;
        }
        v26 = *v11;
        v27 = v25;
        if (*v11 != 0 &&
            (v28 = ui_LayoutAccessor_GetPartsLayout(v11, "L_MorphInfo")) != 0) {
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
          GameRoutine_16d5d10((void*)((__int64*)&v66_.v66), v26, v29);
          v32 = 0;
        }
        else {
          v32 = 1;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak_alt1(v27);
        }
        if ((v32 & 1) != 0) {
          goto LABEL_63;
        }
        v33 = v66_.v67;
        if (v66_.v67 == 0) {
          goto LABEL_63;
        }
        v34 = std___1___shared_weak_count_lock_alt1(v66_.v67);
        if (v34 == 0) {
        LABEL_95:
          v46 = v33;
        LABEL_62:
          std___1___shared_weak_count___release_weak_alt1(v46);
          goto LABEL_63;
        }
        v35 = v34;
        if (v66_.v66 == nullptr) {
        LABEL_92:
          if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
            std___1___shared_weak_count___release_weak_alt1(v35);
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
          v39 = std___1___shared_weak_count_lock_alt1(v38);
          std___1___shared_weak_count___release_weak_alt1(v36);
          if (v39 != 0 && v37 != 0) {
            GameRoutine_16d5e40((void*)(&v62_.v62), v37);
            v40 = v62_.v63;
            v64_.v64 = nullptr;
            v64_.v65 = 0;
            if (v62_.v63 != 0) {
              v41 = std___1___shared_weak_count_lock_alt1(v62_.v63);
              v64_.v65 = v41;
              if (v41 != 0) {
                v42 = v62_.v62;
                v43 = v41;
                v64_.v64 = v62_.v62;
                std___1___shared_weak_count___release_weak_alt1(v40);
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
              std___1___shared_weak_count___release_weak_alt1(v44);
            }
          LABEL_89:
            GameRoutine_16d5f50((__int64)&v64_.v64);
          LABEL_90:
            if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
              std___1___shared_weak_count___release_weak_alt1(v39);
            }
            goto LABEL_92;
          }
        }
        else {
          v39 = 0;
        }
        GameRoutine_16d5fc0((void*)(&v62_.v62), v13, &v66_.v66, v61, v15);
        v56 = v62_.v63;
        v64_.v64 = nullptr;
        v64_.v65 = 0;
        if (v62_.v63 != 0) {
          v57 = std___1___shared_weak_count_lock_alt1(v62_.v63);
          v64_.v65 = v57;
          if (v57 != 0) {
            v58 = v62_.v62;
            v59 = v57;
            v64_.v64 = v62_.v62;
            std___1___shared_weak_count___release_weak_alt1(v56);
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
          std___1___shared_weak_count___release_weak_alt1(v60);
        }
      LABEL_85:
        GameRoutine_16d5f50((__int64)&v64_.v64);
        if (v39 == 0) {
          goto LABEL_92;
        }
        goto LABEL_90;
      }
    }
  }
LABEL_65:
  LayoutAccessor_1560070((void*)(&v66_.v66), (__int64*)(a1[1] + 952LL),
                         "RageInfo");
  v48 = v66_.v66;
  v47 = v66_.v67;
  v49 = a1[7];
  v66_.v66 = nullptr;
  v66_.v67 = 0;
  a1[6] = v48;
  a1[7] = v47;
  if (v49 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v49);
    if (v66_.v67 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v66_.v67);
    }
    v47 = a1[7];
  }
  if (v47 == 0) {
    goto LABEL_73;
  }
  v50 = std___1___shared_weak_count_lock_alt1(v47);
  if (v50 == 0) {
    goto LABEL_73;
  }
  v51 = v50;
  v52 = (atomic_ullong*)(v50 + 8);
  v53 = (__int64*)a1[6];
  if (atomic_fetch_add(v52, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v55 = v53;
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    std___1___shared_weak_count___release_weak_alt1(v51);
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

__int64 EquipInfoItem_RageInfo_Unknown17(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64** v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64* v17;
    __int64 v18;
  } v17_;
  _QWORD v19[2];
  struct {
    _QWORD* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64* v22;
    __int64 v23;
    __int64 v24;
  } v22_;

  EquipInfoItem_Unknown17(a1);
  result = a1[14];
  v22_.v22 = nullptr;
  v22_.v23 = 0;
  if (result != 0 &&
      (result = std___1___shared_weak_count_lock_alt1(result),
       v22_.v23 = result, result != 0) &&
      (v3 = result, result = a1[13], v22_.v22 = (__int64*)result,
       result != 0) &&
      (v4 = v3, (result = __dynamic_cast(result, GameData_2131a58[0],
                                         GameData_2131bd0[0], 0)) != 0)) {
    v5 = &v22_.v22;
    v20_.v20 = (_QWORD*)result;
    v20_.v21 = v4;
  }
  else {
    v5 = &v20_.v20;
  }
  *v5 = nullptr;
  v5[1] = nullptr;
  v6 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = v20_.v20;
  if (v20_.v20 != nullptr) {
    v8 = v20_.v20;
    v20_.v20[133] = a1[12];
    (*(void (**)(_QWORD*, __int64))(*v7 + 40LL))(v8, 1);
    Element_1886580((__int64)v7, 1);
    (*(void (**)(_QWORD*))(*v7 + 384LL))(v7);
    v22_.v24 = 0;
    v22_.v22 = GameData_212d890[0] + 2;
    LODWORD(v22_.v23) = 20;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
        v7[9] + 16LL))((void*)(v19), v7 + 9, &v22_.v22);
    v9 = a1[1];
    v19[0] = "L_EquipArts";
    v19[1] = 11;
    result = *(_QWORD*)(v9 + 856);
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result != 0) {
        v10 = *(_QWORD*)(v9 + 848);
        v11 = result;
        if (v10 != 0) {
          result = X8CALL_X0(__int64,
                             GameRoutine_16c7c30((void*)((__int64*)&v22_.v22),
                                                 v10, (__int64)v19));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          result = std___1___shared_weak_count___release_weak_alt1(v11);
        }
        if (v10 != 0) {
          result = v22_.v23;
          if (v22_.v23 != 0) {
            v12 = std___1___shared_weak_count_lock_alt1(v22_.v23);
            result = v22_.v23;
            if (v12 != 0) {
              v13 = v22_.v22;
            }
            else {
              v13 = nullptr;
            }
            if (v22_.v23 != 0) {
              result =
                  std___1___shared_weak_count___release_weak_alt1(v22_.v23);
            }
            if (v13 != nullptr) {
              v14 = (__int64)v20_.v20;
              v17_.v17 = v13;
              v17_.v18 = v12;
              if (v12 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8),
                                          1u, memory_order_relaxed);
              }
              result = MenuItemRage_18a1120(v14, (__int64*)&v17_.v17);
              v15 = v17_.v18;
              if (v17_.v18 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v17_.v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
                result = std___1___shared_weak_count___release_weak_alt1(v15);
              }
            }
            if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
              result = std___1___shared_weak_count___release_weak_alt1(v12);
            }
          }
        }
      }
    }
  }
  v16 = v20_.v21;
  if (v20_.v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return std___1___shared_weak_count___release_weak_alt1(v16);
  }
  return result;
}

__int64 EquipInfoItem_RageInfo_Unknown70(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  void* v12;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        v6 = *(_QWORD*)(a1 + 96);
        if ((*(_WORD*)(v6 + 1536) & 0x40) == 0 ||
            (v7 = *(_QWORD*)(v6 + 1496), v8 = *(_QWORD*)(v6 + 1488),
             v7 == v8)) {
          v11 = GameData_212c8a8;
        }
        else {
          v9 = (v7 - v8) >> 2;
          v10 = 0;
          v11 = GameData_212c8a8;
          while (
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8LL * (*(_DWORD*)(v8 + 4 * v10) & 0xFFF)) +
                        104LL) != 6) {
            if (v9 == ++v10) {
              goto LABEL_11;
            }
          }
          v12 = (void*)(v8 + 4LL * (unsigned int)v10);
          if (v10 > -1) {
            v11 = v12;
          }
        }
      LABEL_11:
        result = GameRoutine_18a7ae0(result, v11, v6, 0, 0, 0, 0);
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

#pragma GCC visibility pop
