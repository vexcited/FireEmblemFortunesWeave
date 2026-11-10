#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, _QWORD*);
__int64 Element_1888840(__int64);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_157b170(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_2259378;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2131900;
extern __int64 GameData_2132070;
extern __int64 GameData_21f8020;
extern __int64 GameData_2259370;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dfc8;
extern __int64* GameData_21318f8;
__int64 MenuItemItem_189f2c0(__int64 a1, unsigned __int16* a2);
__int64* MenuItemItem_189f620(__int64 a1);
bool MenuItemItem_189fb80(__int64 a1);
__int64 MenuItemItem_18a0260(__int64* a1);

__int64 MenuItemItem_189f2c0(__int64 a1, unsigned __int16* a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64* v14;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD v37[2];
  _QWORD v38[4];
  int v39;
  __int64 v40;
  __int64 v41;
  _QWORD v42[2];

  if (*a2 != 0) {
    v33 = "Icon";
    v34 = 4;
    v5 = Element_1886290(a1, &v33);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0) {
      v29 = __cxa_guard_acquire(&GameData_21f8028, v4);
      if ((_DWORD)v29 != 0) {
        GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v29, v30);
        __cxa_guard_release(&GameData_21f8028);
      }
    }
    if (v5 != nullptr) {
      v6 = (__int64*)(*(__int64 (**)(_QWORD*))(*v5 + 16LL))(v5);
      if (v6 == &GameData_21f8020) {
        goto LABEL_11;
      }
      do {
        v6 = (__int64*)*v6;
      } while (v6 != &GameData_21f8020 && v6 != nullptr);
      if (v6 != nullptr) {
      LABEL_11:
        v8 = *(_QWORD*)(a1 + 96);
        if (v8 != 0) {
          v9 = std___1___shared_weak_count_lock(v8);
          v10 = *(_QWORD*)(a1 + 88);
          v11 = v9;
          if (v9 == 0) {
            v10 = 0;
          }
        }
        else {
          v10 = 0;
          v11 = 0;
        }
        v25 = v5[29];
        v37[0] = 0;
        v37[1] = 0;
        v33 = nullptr;
        v34 = 0;
        memset(v38, 0, sizeof(v38));
        v40 = 0;
        v41 = 0;
        v42[0] = v10;
        v42[1] = v11;
        v35 = 0;
        v36 = v37;
        v39 = 1065353216;
        if (v11 == 0) {
          ui_LayoutAccessor_Setup_155dea0(&v33, v42, v25);
          goto LABEL_43;
        }
        v26 = (atomic_ullong*)(v11 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
        ui_LayoutAccessor_Setup_155dea0(&v33, v42, v25);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_43;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
          if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_43;
          }
        }
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      LABEL_43:
        GameRoutine_157b170(
            &v33, *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2),
            (*((_BYTE*)a2 + 3) & 8) != 0);
        LayoutAccessor_155e140(&v33);
        v27 = v41;
        if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak(v27);
        }
        GameRoutine_1564060(v38);
        GameRoutine_1563f90(&v36, v37[0]);
        if (v34 != 0) {
          std___1___shared_weak_count___release_weak(v34);
        }
        v24 = 1;
        return v24 & 1;
      }
    }
    v33 = "Icon";
    v34 = 4;
    v13 = Element_1886290(a1, &v33);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                              memory_order_acquire) &
         1) == 0) {
      v31 = __cxa_guard_acquire(&GameData_2259378, v12);
      if ((_DWORD)v31 != 0) {
        GameData_2259370 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v31, v32);
        __cxa_guard_release(&GameData_2259378);
      }
    }
    if (v13 != nullptr) {
      v14 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v13 + 16LL))(v13);
      if (v14 == &GameData_2259370) {
        goto LABEL_24;
      }
      do {
        v14 = (__int64*)*v14;
      } while (v14 != &GameData_2259370 && v14 != nullptr);
      if (v14 != nullptr) {
      LABEL_24:
        v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
        if (v16 != 0) {
          v17 = *(_QWORD*)(v16 + 24);
          v18 = *(unsigned __int8*)(v17 + 560);
          v19 = (v18 & 1) == 0;
          if ((v18 & 1) != 0) {
            v20 = *(_QWORD*)(v17 + 568);
          }
          else {
            v20 = v18 >> 1;
          }
          v21 = *(_QWORD*)(v17 + 576);
          v22 = v17 + 561;
          if (!v19) {
            v22 = v21;
          }
          if (v20 != 0) {
            v23 = v22;
          }
          else {
            v23 = 0;
          }
          v24 =
              GameRoutine_136a920(ui_Manager_instance_ + 1264, v13, 0, 2, v23);
        }
        else {
          v24 = 0;
        }
        v13[88] = v13[88] & 0xFE | v24 & 1;
        return v24 & 1;
      }
    }
  }
  MenuItemItem_189f620(a1);
  v24 = 0;
  return v24 & 1;
}

__int64* MenuItemItem_189f620(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* result;
  __int64 v11;
  __int64* v12;
  __int64 v14;
  atomic_ullong* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD v26[2];
  _QWORD v27[4];
  int v28;
  __int64 v29;
  __int64 v30;
  _QWORD v31[2];

  v22 = "Icon";
  v23 = 4;
  v3 = Element_1886290(a1, &v22);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    v19 = __cxa_guard_acquire(GameData_212dfd0, v2);
    if ((_DWORD)v19 != 0) {
      *GameData_212dfc8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v19, v20);
      __cxa_guard_release(GameData_212dfd0);
    }
  }
  if (v3 != nullptr) {
    v4 = (__int64*)(*(__int64 (**)(_QWORD*))(*v3 + 16LL))(v3);
    if (v4 == GameData_212dfc8) {
      goto LABEL_10;
    }
    do {
      v4 = (__int64*)*v4;
    } while (v4 != GameData_212dfc8 && v4 != nullptr);
    if (v4 != nullptr) {
    LABEL_10:
      v6 = *(_QWORD*)(a1 + 96);
      if (v6 != 0) {
        v7 = std___1___shared_weak_count_lock(v6);
        v8 = *(_QWORD*)(a1 + 88);
        v9 = v7;
        if (v7 == 0) {
          v8 = 0;
        }
      }
      else {
        v8 = 0;
        v9 = 0;
      }
      v14 = v3[29];
      v26[0] = 0;
      v26[1] = 0;
      v22 = nullptr;
      v23 = 0;
      memset(v27, 0, sizeof(v27));
      v29 = 0;
      v30 = 0;
      v31[0] = v8;
      v31[1] = v9;
      v24 = 0;
      v25 = v26;
      v28 = 1065353216;
      if (v9 == 0) {
        ui_LayoutAccessor_Setup_155dea0(&v22, v31, v14);
        goto LABEL_32;
      }
      v15 = (atomic_ullong*)(v9 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0(&v22, v31, v14);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_32;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
        if (atomic_fetch_add(v15, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_32;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    LABEL_32:
      ui_LayoutAccessor_SetPaneVisible(&v22, "IconDamage", 0);
      ui_LayoutAccessor_SetPaneVisible(&v22, "IconLock", 0);
      ui_LayoutAccessor_SetPaneVisible(&v22, "IconDrop", 0);
      v16 = ui_LayoutAccessor_FindPane(&v22, "Icon");
      if (v16 != 0) {
        v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
        if (v17 != 0) {
          GameRoutine_136a920(ui_Manager_instance_ + 1264, v17, 0, 7,
                              "IconEmpty");
        }
      }
      *((_BYTE*)v3 + 88) |= 1u;
      LayoutAccessor_155e140(&v22);
      v18 = v30;
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak(v18);
      }
      GameRoutine_1564060(v27);
      GameRoutine_1563f90(&v25, v26[0]);
      result = (__int64*)v23;
      if (v23 != 0) {
        return (__int64*)std___1___shared_weak_count___release_weak(v23);
      }
      return result;
    }
  }
  v22 = "Icon";
  v23 = 4;
  result = Element_1886290(a1, &v22);
  v12 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2131900, v11);
    if ((_DWORD)result != 0) {
      *GameData_21318f8 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v21);
      result = (__int64*)__cxa_guard_release(GameData_2131900);
    }
  }
  if (v12 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v12 + 16))(v12);
    if (result == GameData_21318f8) {
      goto LABEL_23;
    }
    do {
      result = (__int64*)*result;
    } while (result != GameData_21318f8 && result != nullptr);
    if (result != nullptr) {
    LABEL_23:
      result = (__int64*)GameRoutine_136a920(ui_Manager_instance_ + 1264, v12,
                                             0, 7, "IconEmpty");
      *((_BYTE*)v12 + 88) |= 1u;
    }
  }
  return result;
}

bool MenuItemItem_189fb80(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1064) + 8LL))(a1 + 1064) &
       1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    return *(_WORD*)(a1 + 1080) != 0;
  }
  v5 = *(_QWORD*)(a1 + 312);
  v6 = *(_QWORD*)(a1 + 320);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return *(_WORD*)(a1 + 1080) != 0;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && *(_WORD*)(a1 + 1080) != 0;
}

__int64 MenuItemItem_18a0260(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v2 = GameData_2132070 + 16;
  a1[9] = GameData_2132070 + 440;
  v3 = a1[132];
  *a1 = v2;
  if (v3 != 0) {
    v4 = (__int64*)a1[131];
    v5 = a1 + 130;
    v6 = *(__int64**)(a1[130] + 8);
    *(_QWORD*)(*v4 + 8) = v6;
    *v6 = *v4;
    a1[132] = 0;
    if (v4 != a1 + 130) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (__int64*)v4[1];
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
        v4 = v8;
      } while (v8 != v5);
    }
  }
  return Element_1888840((__int64)a1);
}

#pragma GCC visibility pop
