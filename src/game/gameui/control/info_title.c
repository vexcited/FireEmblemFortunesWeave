#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Element_1886290(__int64, _QWORD*);
__int64 Alignment_56b600(_QWORD);
__int64 Element_18863e0(__int64, _QWORD*, char);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_157ee20(_QWORD, _QWORD);
__int64 GameRoutine_15823b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ed1a0(_QWORD);
__int64 GameRoutine_931120(_QWORD);
__int64 GameRoutine_996d60(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HistoryLogInfo_6fb810(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD, _QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD, _QWORD);
__int64* AsyncLoadThumbImage_18b72e0(__int64);
__int64* GameRoutine_18b8160(__int64, __int64, char);
__int64* GameRoutine_18b83a0(__int64, __int64, char);
__int64* GameRoutine_18b9480(__int64, unsigned int*, __int64, _WORD*);
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_22416d8;
extern _UNKNOWN GameData_2258d90;
extern _UNKNOWN* GameData_2106888;
extern _UNKNOWN* GameData_212c8a8;
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN* GameData_21318e0;
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_21f8020;
extern __int64 GameData_22416d0;
extern __int64 GameData_2258d88;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_2130ea0;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
__int64* InfoTitle_18b77e0(__int64 a1);
__int64* InfoTitle_18b7a00(__int64 a1, unsigned int a2);
__int64* InfoTitle_18b7c20(__int64 a1);
__int64* InfoTitle_18b7e40(__int64 a1, __int64 a2);
__int64* InfoTitle_18b7f20(__int64 a1, __int64 a2);
__int64* InfoTitle_18b8080(__int64 a1, char a2);
__int64* InfoTitle_18b8760(__int64 a1, __int64 a2);
__int64* InfoTitle_18b88c0(__int64 a1, int a2);
__int64* InfoTitle_18b8a60(__int64 a1);
__int64* InfoTitle_18b8be0(__int64 a1);
__int64* InfoTitle_18b8e80(__int64 a1, __int64 a2);
__int64* InfoTitle_18b90a0(__int64 a1);
__int64* InfoTitle_18b9170(__int64 a1, _WORD* a2);
__int64* InfoTitle_18b9330(__int64 a1, unsigned __int16* a2);
__int64 InfoTitle_18b9dd0(__int64 a1, _BYTE* a2);
__int64* InfoTitle_18b9f60(__int64 a1, unsigned __int8* a2);
__int64* InfoTitle_18ba0f0(__int64 a1, _BYTE* a2);

__int64* InfoTitle_18b77e0(__int64 a1)
{
  __int64* result;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD v18[2];
  _QWORD v19[4];
  int v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[2];

  LayoutAccessor_1562cf0(a1 + 88, "L_Icon");
  v14 = "Icon";
  v15 = 4;
  result = Element_1886290(a1, &v14);
  v4 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_21f8028, v3);
    if ((_DWORD)result != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v13);
      result = (__int64*)__cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v4 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v4 + 16))(v4);
    if (result == &GameData_21f8020) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_21f8020 && result != nullptr);
    if (result != nullptr) {
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
      v10 = v4[29];
      v18[0] = 0;
      v18[1] = 0;
      v14 = nullptr;
      v15 = 0;
      memset(v19, 0, sizeof(v19));
      v21 = 0;
      v22 = 0;
      v23[0] = v8;
      v23[1] = v9;
      v16 = 0;
      v17 = v18;
      v20 = 1065353216;
      if (v9 == 0) {
        ui_LayoutAccessor_Setup_155dea0(&v14, v23, v10);
        goto LABEL_22;
      }
      v11 = (atomic_ullong*)(v9 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0(&v14, v23, v10);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_22;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
        if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_22;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    LABEL_22:
      GameRoutine_157ee20(&v14, 0);
      LayoutAccessor_155e140(&v14);
      v12 = v22;
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
      GameRoutine_1564060(v19);
      GameRoutine_1563f90(&v17, v18[0]);
      result = (__int64*)v15;
      if (v15 != 0) {
        return (__int64*)std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
  return result;
}

__int64* InfoTitle_18b7a00(__int64 a1, unsigned int a2)
{
  __int64* result;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD v20[2];
  _QWORD v21[4];
  int v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[2];

  LayoutAccessor_1562cf0(a1 + 88, "L_Icon");
  v16 = "Icon";
  v17 = 4;
  result = Element_1886290(a1, &v16);
  v6 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_21f8028, v5);
    if ((_DWORD)result != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v15);
      result = (__int64*)__cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v6 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v6 + 16))(v6);
    if (result == &GameData_21f8020) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_21f8020 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
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
      v12 = v6[29];
      v20[0] = 0;
      v20[1] = 0;
      v16 = nullptr;
      v17 = 0;
      memset(v21, 0, sizeof(v21));
      v23 = 0;
      v24 = 0;
      v25[0] = v10;
      v25[1] = v11;
      v18 = 0;
      v19 = v20;
      v22 = 1065353216;
      if (v11 == 0) {
        ui_LayoutAccessor_Setup_155dea0(&v16, v25, v12);
        goto LABEL_22;
      }
      v13 = (atomic_ullong*)(v11 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0(&v16, v25, v12);
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_22;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
        if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_22;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    LABEL_22:
      GameRoutine_157ee20(&v16, a2);
      LayoutAccessor_155e140(&v16);
      v14 = v24;
      if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
      }
      GameRoutine_1564060(v21);
      GameRoutine_1563f90(&v19, v20[0]);
      result = (__int64*)v17;
      if (v17 != 0) {
        return (__int64*)std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
  return result;
}

__int64* InfoTitle_18b7c20(__int64 a1)
{
  __int64* result;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD v18[2];
  _QWORD v19[4];
  int v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[2];

  LayoutAccessor_1562cf0(a1 + 88, "L_Icon");
  v14 = "Icon";
  v15 = 4;
  result = Element_1886290(a1, &v14);
  v4 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_21f8028, v3);
    if ((_DWORD)result != 0) {
      GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v13);
      result = (__int64*)__cxa_guard_release(&GameData_21f8028);
    }
  }
  if (v4 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v4 + 16))(v4);
    if (result == &GameData_21f8020) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_21f8020 && result != nullptr);
    if (result != nullptr) {
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
      v10 = v4[29];
      v18[0] = 0;
      v18[1] = 0;
      v14 = nullptr;
      v15 = 0;
      memset(v19, 0, sizeof(v19));
      v21 = 0;
      v22 = 0;
      v23[0] = v8;
      v23[1] = v9;
      v16 = 0;
      v17 = v18;
      v20 = 1065353216;
      if (v9 == 0) {
        ui_LayoutAccessor_Setup_155dea0(&v14, v23, v10);
        goto LABEL_22;
      }
      v11 = (atomic_ullong*)(v9 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dea0(&v14, v23, v10);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_22;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
        if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_22;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    LABEL_22:
      LayoutAccessor_155e830(&v14, 0);
      LayoutAccessor_155e140(&v14);
      v12 = v22;
      if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
      GameRoutine_1564060(v19);
      GameRoutine_1563f90(&v17, v18[0]);
      result = (__int64*)v15;
      if (v15 != 0) {
        return (__int64*)std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
  return result;
}

__int64* InfoTitle_18b7e40(__int64 a1, __int64 a2)
{
  __int64* result;
  __int64 v4;
  __int64* v5;
  __int64 v7;
  _QWORD v8[2];

  v8[0] = "Name";
  v8[1] = 4;
  result = Element_1886290(a1, v8);
  v5 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v4);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v7);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v5 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      result = (__int64*)GameRoutine_156c5d0(v5, a2, 0);
      *((_BYTE*)v5 + 88) |= 1u;
    }
  }
  return result;
}

__int64* InfoTitle_18b7f20(__int64 a1, __int64 a2)
{
  __int64* result;
  __int64 v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v10[0] = "Name";
  v10[1] = 4;
  result = Element_1886290(a1, v10);
  v5 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v4);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v9);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v5 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v13 = -1;
      v14 = -1;
      v15 = -1;
      v16 = -1;
      v7 = *msg_MessageManager_instance__ptr[0];
      v17 = -1;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v10[0] = msg_TagSelector_vtable;
      v10[1] = 0xFFFF0001FFFF0000LL;
      v10[2] = 0xFFFF0004FFFF0002LL;
      v10[3] = 0xFFFF0006FFFF0005LL;
      v25 = 8;
      v11 = -65529;
      v12 = -65528;
      v8 = GameRoutine_a4dbe0(v7, a2, 0, v10);
      result = (__int64*)GameRoutine_156c5d0(v5, v8, 0);
      *((_BYTE*)v5 + 88) |= 1u;
    }
  }
  return result;
}

__int64* InfoTitle_18b8080(__int64 a1, char a2)
{
  __int64* result;
  __int64 v4;
  __int64* v5;
  __int64 v7;
  _QWORD v8[2];

  v8[0] = "Name";
  v8[1] = 4;
  result = Element_1886290(a1, v8);
  v5 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v4);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v7);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v5 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      *((_BYTE*)v5 + 88) = v5[11] & 0xFE | a2 & 1;
    }
  }
  return result;
}

__int64* InfoTitle_18b8760(__int64 a1, __int64 a2)
{
  __int64* result;
  __int64 v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v10[0] = "Info";
  v10[1] = 4;
  result = Element_1886290(a1, v10);
  v5 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v4);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v9);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v5 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v5 + 16))(v5);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v13 = -1;
      v14 = -1;
      v15 = -1;
      v16 = -1;
      v7 = *msg_MessageManager_instance__ptr[0];
      v17 = -1;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v10[0] = msg_TagSelector_vtable;
      v10[1] = 0xFFFF0001FFFF0000LL;
      v10[2] = 0xFFFF0004FFFF0002LL;
      v10[3] = 0xFFFF0006FFFF0005LL;
      v25 = 8;
      v11 = -65529;
      v12 = -65528;
      v8 = GameRoutine_a4dbe0(v7, a2, 0, v10);
      result = (__int64*)GameRoutine_156c5d0(v5, v8, 0);
      *((_BYTE*)v5 + 88) |= 1u;
    }
  }
  return result;
}

__int64* InfoTitle_18b88c0(__int64 a1, int a2)
{
  __int64* result;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v11[0] = "NumCost";
  v11[1] = 7;
  Element_18863e0(a1, v11, 1);
  v11[0] = "Cost";
  v11[1] = 4;
  result = Element_1886290(a1, v11);
  v6 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8, v5);
    if ((_DWORD)result != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v10);
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v6 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v6 + 16))(v6);
    if (result == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != GameData_2130ea0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      if (a2 < 0) {
        v14 = -1;
        v15 = -1;
        v16 = -1;
        v17 = -1;
        v8 = *msg_MessageManager_instance__ptr[0];
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v24 = -1;
        v25 = -1;
        v11[0] = GameData_212e348 + 2;
        v11[1] = 0xFFFF0001FFFF0000LL;
        v11[2] = 0xFFFF0004FFFF0002LL;
        v11[3] = 0xFFFF0006FFFF0005LL;
        v26 = 8;
        v12 = -65529;
        v13 = -65528;
        v9 = GameRoutine_a4dbe0(v8, "MID_Sys_unlimited", 0, v11);
        return (__int64*)GameRoutine_156c5d0(v6, v9, 0);
      }
      else {
        return (__int64*)GameRoutine_156c910(v6, "%d", 1);
      }
    }
  }
  return result;
}

__int64* InfoTitle_18b8a60(__int64 a1)
{
  __int64* result;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
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
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v9[0] = "NumCost";
  v9[1] = 7;
  Element_18863e0(a1, v9, 1);
  v9[0] = "Cost";
  v9[1] = 4;
  result = Element_1886290(a1, v9);
  v4 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8, v3);
    if ((_DWORD)result != 0) {
      *GameData_2130ea0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v8);
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v4 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v4 + 16))(v4);
    if (result == GameData_2130ea0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != GameData_2130ea0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v12 = -1;
      v13 = -1;
      v14 = -1;
      v15 = -1;
      v6 = *msg_MessageManager_instance__ptr[0];
      v16 = -1;
      v17 = -1;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v9[0] = GameData_212e348 + 2;
      v9[1] = 0xFFFF0001FFFF0000LL;
      v9[2] = 0xFFFF0004FFFF0002LL;
      v9[3] = 0xFFFF0006FFFF0005LL;
      v24 = 8;
      v10 = -65529;
      v11 = -65528;
      v7 = GameRoutine_a4dbe0(v6, "MID_Sys_ValueEmpty", 0, v9);
      return (__int64*)GameRoutine_156c5d0(v4, v7, 0);
    }
  }
  return result;
}

__int64* InfoTitle_18b8be0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  atomic_uchar* v4;
  unsigned __int8 explicit;
  __int64* v6;
  __int64* v7;
  __int64 v9;
  __int64 v10;
  __int64* result;
  __int64 v12;
  __int64* v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  unsigned __int64 v21;
  unsigned __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v20[0] = "NumEndurance";
  v20[1] = 12;
  Element_18863e0(a1, v20, 1);
  v20[0] = "Count";
  v20[1] = 5;
  v3 = Element_1886290(a1, v20);
  v4 = (atomic_uchar*)GameData_2130ea8;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                                  memory_order_acquire);
  v6 = GameData_2130ea0;
  if ((explicit & 1) == 0) {
    v17 = __cxa_guard_acquire(GameData_2130ea8, v2);
    if ((_DWORD)v17 != 0) {
      *v6 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(v17, v18);
      __cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v3 != nullptr) {
    v7 = (__int64*)(*(__int64 (**)(_QWORD*))(*v3 + 16LL))(v3);
    if (v7 == v6) {
      goto LABEL_10;
    }
    do {
      v7 = (__int64*)*v7;
    } while (v7 != v6 && v7 != nullptr);
    if (v7 != nullptr) {
    LABEL_10:
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v9 = *msg_MessageManager_instance__ptr[0];
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v20[0] = GameData_212e348 + 2;
      v20[1] = 0xFFFF0001FFFF0000LL;
      v21 = 0xFFFF0004FFFF0002LL;
      v22 = 0xFFFF0006FFFF0005LL;
      v37 = 8;
      v23 = -65529;
      v24 = -65528;
      v10 = GameRoutine_a4dbe0(v9, "MID_Sys_ValueEmpty", 0, v20);
      GameRoutine_156c5d0(v3, v10, 0);
    }
  }
  v20[0] = "CountMax";
  v20[1] = 8;
  result = Element_1886290(a1, v20);
  v13 = result;
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
    result = (__int64*)__cxa_guard_acquire(GameData_2130ea8, v12);
    if ((_DWORD)result != 0) {
      *v6 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v19);
      result = (__int64*)__cxa_guard_release(GameData_2130ea8);
    }
  }
  if (v13 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v13 + 16))(v13);
    if (result == v6) {
      goto LABEL_20;
    }
    do {
      result = (__int64*)*result;
    } while (result != v6 && result != nullptr);
    if (result != nullptr) {
    LABEL_20:
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v15 = *msg_MessageManager_instance__ptr[0];
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v20[0] = GameData_212e348 + 2;
      v20[1] = 0xFFFF0001FFFF0000LL;
      v21 = 0xFFFF0004FFFF0002LL;
      v22 = 0xFFFF0006FFFF0005LL;
      v37 = 8;
      v23 = -65529;
      v24 = -65528;
      v16 = GameRoutine_a4dbe0(v15, "MID_Sys_ValueEmpty", 0, v20);
      return (__int64*)GameRoutine_156c5d0(v13, v16, 0);
    }
  }
  return result;
}

__int64* InfoTitle_18b8e80(__int64 a1, __int64 a2)
{
  __int64* result;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v15[0] = "BodyAnnot";
  v15[1] = 9;
  result = Element_1886290(a1, v15);
  v6 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v5);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v13);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v6 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v6 + 16))(v6);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      *((_BYTE*)v6 + 88) |= 1u;
      v18 = -1;
      v19 = -1;
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v8 = *msg_MessageManager_instance__ptr[0];
      v24 = -1;
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v29 = -1;
      v15[0] = msg_TagSelector_vtable;
      v15[1] = 0xFFFF0001FFFF0000LL;
      v15[2] = 0xFFFF0004FFFF0002LL;
      v15[3] = 0xFFFF0006FFFF0005LL;
      v30 = 8;
      v16 = -65529;
      v17 = -65528;
      v9 = GameRoutine_a4dbe0(v8, a2, 0, v15);
      GameRoutine_156c5d0(v6, v9, 0);
      v15[0] = "AnnotAligne";
      v15[1] = 11;
      result = Element_1886290(a1, v15);
      v11 = result;
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21318e0,
                                memory_order_acquire) &
           1) == 0) {
        result = (__int64*)__cxa_guard_acquire(&GameData_2258d90, v10);
        if ((_DWORD)result != 0) {
          GameData_2258d88 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v14);
          result = (__int64*)__cxa_guard_release(&GameData_2258d90);
        }
      }
      if (v11 != nullptr) {
        result = (__int64*)(*(__int64 (**)(__int64*))(*v11 + 16))(v11);
        if (result == &GameData_2258d88) {
          return (__int64*)Alignment_56b600(v11);
        }
        do {
          result = (__int64*)*result;
        } while (result != &GameData_2258d88 && result != nullptr);
        if (result != nullptr) {
          return (__int64*)Alignment_56b600(v11);
        }
      }
    }
  }
  return result;
}

__int64* InfoTitle_18b90a0(__int64 a1)
{
  __int64* result;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  _QWORD v6[2];

  v6[0] = "BodyAnnot";
  v6[1] = 9;
  result = Element_1886290(a1, v6);
  v3 = result;
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                            memory_order_acquire) &
       1) == 0) {
    result = (__int64*)__cxa_guard_acquire(&GameData_22416d8, v2);
    if ((_DWORD)result != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic(result, v5);
      result = (__int64*)__cxa_guard_release(&GameData_22416d8);
    }
  }
  if (v3 != nullptr) {
    result = (__int64*)(*(__int64 (**)(__int64*))(*v3 + 16))(v3);
    if (result == &GameData_22416d0) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != &GameData_22416d0 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      *((_BYTE*)v3 + 88) &= ~1u;
    }
  }
  return result;
}

__int64* InfoTitle_18b9170(__int64 a1, _WORD* a2)
{
  char v4;
  __int64* v5;
  __int64 v6;
  __int64* result;
  __int64 v8;
  __int64* v9;
  _QWORD v10[4];
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  LayoutAccessor_1562cf0(a1 + 88, "L_Icon");
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1);
  GameRoutine_15792c0(a1 + 88, a2, 0, 0, 0, "L_Icon", "T_Txt", v4 & 1);
  v5 = GameData_212c878[0];
  if (*a2 != 0) {
    v6 = GameRoutine_6ed1a0(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * (unsigned __int16)*a2));
    result = GameRoutine_18b8160(a1, v6, 1);
  }
  else {
    result = GameRoutine_18b83a0(a1, (__int64)"MID_Sys_ValueEmptyLong", 1);
  }
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (unsigned __int16)*a2) +
                72LL) == 15) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, "T_Txt", 1);
    v13 = -1;
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v8 = *msg_MessageManager_instance__ptr[0];
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v10[0] = GameData_212e348 + 2;
    v10[1] = 0xFFFF0001FFFF0000LL;
    v10[2] = 0xFFFF0004FFFF0002LL;
    v10[3] = 0xFFFF0006FFFF0005LL;
    v25 = 8;
    v11 = -65529;
    v12 = -65528;
    result = (__int64*)GameRoutine_a4dbe0(v8, "MID_Sys_ValueEmptyLong", 0, v10);
    if (result != nullptr) {
      v9 = result;
      result = (__int64*)ui_LayoutAccessor_FindTextBox(a1 + 88, "T_Txt");
      if (result != nullptr) {
        return (__int64*)GameRoutine_156c5d0(result, v9, 0);
      }
    }
  }
  return result;
}

__int64* InfoTitle_18b9330(__int64 a1, unsigned __int16* a2)
{
  __int64* result;
  __int64* v5;
  __int64 v6;
  int v7;
  const char* v8;
  unsigned int v9;
  unsigned int v10;

  result = InfoTitle_18b9170(a1, a2);
  v5 = GameData_212c878[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
  v7 = *(unsigned __int8*)(v6 + 72);
  if ((unsigned int)(v7 - 5) >= 2) {
    if (v7 == 14) {
      v9 = *(unsigned __int8*)(v6 + 73);
      if (v9 <= 0x11) {
        if (((1 << v9) & 0x800C) != 0) {
          if (*(unsigned __int8*)(v6 + 88) >> ((*((_BYTE*)a2 + 3) & 8) != 0) ==
              0) {
            goto LABEL_14;
          }
        }
        else if (((1 << v9) & 0x10030) == 0) {
          if (v9 != 17) {
            goto LABEL_14;
          }
          result = *(__int64**)(v6 + 376);
          if (result == nullptr) {
            goto LABEL_14;
          }
          if ((*((_DWORD*)a2 + 1) & 0x3FF0) == 0) {
            goto LABEL_14;
          }
          result = (__int64*)GameRoutine_996d60();
          if (result == nullptr || result[5] == 0) {
            goto LABEL_14;
          }
        }
      LABEL_15:
        v8 = "MID_Sys_WeaponEndure";
        goto LABEL_16;
      }
    }
  LABEL_14:
    v10 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *a2) +
                              72LL);
    if (v10 > 7) {
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  v8 = "MID_Sys_Remaining";
LABEL_16:
  result = InfoTitle_18b8760(a1, (__int64)v8);
  v10 =
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * *a2) + 72LL);
LABEL_17:
  if (v10 == 15) {
    return InfoTitle_18b8be0(a1);
  }
  return result;
}

__int64 InfoTitle_18b9dd0(__int64 a1, _BYTE* a2)
{
  char v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  _QWORD v12[4];
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  LayoutAccessor_1562cf0(a1 + 88, "Icon");
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1);
  GameRoutine_15823b0(a1 + 88, a2, 0, v4 & 1);
  v5 = GameData_212c998[0];
  if (*a2 != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                               8LL * (unsigned __int8)*a2) +
                    32LL);
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v7 = *msg_MessageManager_instance__ptr[0];
    v12[0] = GameData_212e348 + 2;
    v12[1] = 0xFFFF0001FFFF0000LL;
    v12[2] = 0xFFFF0004FFFF0002LL;
    v12[3] = 0xFFFF0006FFFF0005LL;
    v27 = 8;
    v13 = -65529;
    v14 = -65528;
    v8 = GameRoutine_a4dbe0(v7, v6, 0, v12);
    InfoTitle_18b7e40(a1, v8);
    v9 = (unsigned __int8)*a2;
    if (*a2 != 0) {
    LABEL_3:
      v10 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v9) + 40LL);
      goto LABEL_6;
    }
  }
  else {
    InfoTitle_18b7f20(a1, (__int64)"MID_Sys_ValueEmptyLong");
    v9 = (unsigned __int8)*a2;
    if (*a2 != 0) {
      goto LABEL_3;
    }
  }
  v10 = "MID_Sys_ValueEmptyLong";
LABEL_6:
  GameRoutine_18b83a0(a1, (__int64)v10, 1);
  if (*a2 == 0) {
    InfoTitle_18b7a00(a1, 5u);
  }
  v12[0] = "NumNone";
  v12[1] = 7;
  return Element_18863e0(a1, v12, 1);
}

__int64* InfoTitle_18b9f60(__int64 a1, unsigned __int8* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v14;
  unsigned int v15;
  int v16;
  int v17;

  if (a2[1] != 0 && (v4 = game_UnitPool_Get(a2 + 1)) != 0) {
    if ((*(_WORD*)(v4 + 1536) & 0x20) == 0 ||
        (v5 = *(_QWORD*)(v4 + 1496), v6 = *(_QWORD*)(v4 + 1488), v5 == v6)) {
      v9 = (unsigned int*)GameData_212c8a8;
    }
    else {
      v7 = (v5 - v6) >> 2;
      v8 = 0;
      v9 = (unsigned int*)GameData_212c8a8;
      while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v6 + 4 * v8) & 0xFFF)) +
                       104LL) != 5) {
        if (v7 == ++v8) {
          goto LABEL_14;
        }
      }
      v14 = (unsigned int*)(v6 + 4LL * (unsigned int)v8);
      if (v8 > -1) {
        v9 = v14;
      }
    }
  LABEL_14:
    v16 = 0;
    return GameRoutine_18b9480(a1, v9, v4, &v16);
  }
  else {
    v10 = GameData_212c998[0];
    v11 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) + 8LL * *a2) +
                 64LL);
    if (v11 != 0) {
      LODWORD(v11) = *(_WORD*)(v11 + 16) & 0xFFF;
    }
    v15 = v11;
    v17 = 0;
    GameRoutine_18b9480(a1, &v15, 0, &v17);
    if (*a2 != 0) {
      v12 = HistoryLogInfo_6fb810(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v10 + 64) + 8LL * *a2) + 64LL));
      return InfoTitle_18b7e40(a1, v12);
    }
    else {
      return InfoTitle_18b7f20(a1, (__int64)"MID_Sys_ValueEmptyLong");
    }
  }
}

__int64* InfoTitle_18ba0f0(__int64 a1, _BYTE* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v17[4];
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v4 = GameData_212c8a0;
  if (*a2 != 0) {
    LayoutAccessor_1562cf0(a1 + 88, "Icon");
    v5 = ui_LayoutAccessor_FindPane(a1 + 88, "Icon");
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
      if (v6 != 0) {
        v10 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (unsigned __int8)*a2);
        if (v10 != 0) {
          if ((unsigned int)*(unsigned __int8*)(v10 + 32) - 1 > 4) {
            v11 = &GameData_1a9f09e;
          }
          else {
            v11 = (char*)*(&GameData_2106888 +
                           (unsigned __int8)(*(_BYTE*)(v10 + 32) - 1));
          }
          GameRoutine_136a920(ui_Manager_instance_ + 1264, v6, 0, 2, v11);
        }
      }
    }
    v12 = GameRoutine_931120(a2);
    InfoTitle_18b7e40(a1, v12);
    v17[0] = "NumNone";
    v17[1] = 7;
    Element_18863e0(a1, v17, 1);
    v7 = (unsigned __int8)*a2;
    if (*a2 != 0) {
    LABEL_15:
      v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8 * v7) + 40LL);
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v14 = *msg_MessageManager_instance__ptr[0];
      v17[0] = GameData_212e348 + 2;
      v17[1] = 0xFFFF0001FFFF0000LL;
      v17[2] = 0xFFFF0004FFFF0002LL;
      v17[3] = 0xFFFF0006FFFF0005LL;
      v32 = 8;
      v18 = -65529;
      v19 = -65528;
      v15 = GameRoutine_a4dbe0(v14, v13, 0, v17);
      InfoTitle_18b7e40(a1, v15);
      v8 = (unsigned __int8)*a2;
      if (*a2 != 0) {
        goto LABEL_16;
      }
      goto LABEL_7;
    }
  }
  else {
    AsyncLoadThumbImage_18b72e0(a1);
    v7 = (unsigned __int8)*a2;
    if (*a2 != 0) {
      goto LABEL_15;
    }
  }
  InfoTitle_18b7f20(a1, (__int64)"MID_Sys_ValueEmptyLong");
  v8 = (unsigned __int8)*a2;
  if (*a2 != 0) {
  LABEL_16:
    v9 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8 * v8) + 48LL);
    return GameRoutine_18b83a0(a1, (__int64)v9, 0);
  }
LABEL_7:
  v9 = "MID_Sys_ValueEmptyLong";
  return GameRoutine_18b83a0(a1, (__int64)v9, 0);
}

#pragma GCC visibility pop
