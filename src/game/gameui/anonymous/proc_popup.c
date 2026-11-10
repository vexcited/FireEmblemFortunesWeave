#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcPopup_vtable[])();
extern __int64 GameData_2262c00;
__int64 ProcPopup_Destructor(__int64 a1);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 Pane_58dee0(_QWORD, _QWORD);
__int64 Pane_58df60(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ProcPopup_Unknown2(_QWORD* a1);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157cff0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17372e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1737960(_QWORD);
__int64 GameRoutine_1737ae0(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcBindInOut_1737bc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetTranslate(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__n128 ProcPopup_1735f10(int a1, __int64* a2, __int64 a3, unsigned int a4,
                         __int64 a5);
__n128 ProcPopup_17361d0(int a1, __int64* a2, __int64 a3, unsigned int a4,
                         __int64 a5);
__n128 ProcPopup_1736c50(int a1, __int64* a2, __int64 a3, int* a4);

__n128 ProcPopup_1735f10(int a1, __int64* a2, __int64 a3, unsigned int a4,
                         __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v11;
  __n128 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  long double v22;
  const char* v23;
  _QWORD v24[2];
  _QWORD v25[2];
  _QWORD v26[2];
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;
  _QWORD v30[4];
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;

  v5 = GameData_2262c00;
  if (GameData_2262c00 != 0) {
    v7 = *a2;
    v6 = a2[1];
    if (v6 != 0) {
      v11 = GameData_2262c00;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      v27[0] = v7;
      v27[1] = v6;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_17372e0(&v28, v11, 0, v27, a3);
      result = std___1___shared_weak_count___release_weak_alt1(v6);
      v13 = v29;
      if (v29 == 0) {
      LABEL_23:
        if (v6 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v6);
        }
        return result;
      }
    }
    else {
      v27[0] = *a2;
      v27[1] = 0;
      GameRoutine_17372e0(&v28, GameData_2262c00, 0, v27, a3);
      v13 = v29;
      if (v29 == 0) {
        goto LABEL_23;
      }
    }
    v14 = std___1___shared_weak_count_lock(v13);
    if (v14 == 0) {
      goto LABEL_22;
    }
    v15 = v28;
    v16 = v14;
    if (v28 != 0) {
      if (a1 < 0) {
        v19 = game_util_Format("%d", a1);
      }
      else {
        v33 = -1;
        v34 = -1;
        v35 = -1;
        v36 = -1;
        v17 = *msg_MessageManager_instance__ptr[0];
        v37 = -1;
        v38 = -1;
        v39 = -1;
        v40 = -1;
        v41 = -1;
        v42 = -1;
        v43 = -1;
        v44 = -1;
        v30[0] = GameData_212e348 + 2;
        v30[1] = 0xFFFF0001FFFF0000LL;
        v30[2] = 0xFFFF0004FFFF0002LL;
        v30[3] = 0xFFFF0006FFFF0005LL;
        v45 = 8;
        v31 = -65529;
        v32 = -65528;
        v18 = (const char*)GameRoutine_a4dbe0(v17, "MID_Sys_Plus", 0, v30);
        v19 = game_util_Format("%s%d", v18, a1);
      }
      v20 = v19;
      v21 = ui_LayoutAccessor_FindTextBox(v15, "T_Txt");
      if (v21 != 0) {
        GameRoutine_156c5d0(v21, v20, 0);
      }
      v26[0] = v15;
      v26[1] = v13;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1737960(v26);
      *(__n128*)&v22 = std___1___shared_weak_count___release_weak_alt1(v13);
      v25[0] = v15;
      v25[1] = v13;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1737ae0(v25, a4, a5, v22);
      std___1___shared_weak_count___release_weak_alt1(v13);
      if (a1 >= 0) {
        v23 = "Add";
      }
      else {
        v23 = "Sub";
      }
      LayoutAccessor_1562cf0(v15, v23);
      v24[0] = v7;
      v24[1] = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        ProcBindInOut_1737bc0(v5, v15, v24, v5 + 168, *(_QWORD*)(v5 + 272));
        result = std___1___shared_weak_count___release_weak_alt1(v6);
      }
      else {
        ProcBindInOut_1737bc0(v5, v15, v24, v5 + 168, *(_QWORD*)(v5 + 272));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = std___1___shared_weak_count___release_weak_alt1(v16);
    }
    v13 = v29;
    if (v29 != 0) {
    LABEL_22:
      result = std___1___shared_weak_count___release_weak_alt1(v13);
    }
    goto LABEL_23;
  }
  return result;
}

__n128 ProcPopup_17361d0(int a1, __int64* a2, __int64 a3, unsigned int a4,
                         __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v11;
  __n128 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  const char* v18;
  _QWORD v19[2];
  _QWORD v20[2];
  _QWORD v21[2];
  _QWORD v22[2];
  __int64 v23;
  __int64 v24;

  v5 = GameData_2262c00;
  if (GameData_2262c00 != 0) {
    v7 = *a2;
    v6 = a2[1];
    if (v6 != 0) {
      v11 = GameData_2262c00;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      v22[0] = v7;
      v22[1] = v6;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_17372e0(&v23, v11, 0, v22, a3);
      result = std___1___shared_weak_count___release_weak_alt1(v6);
      v13 = v24;
      if (v24 == 0) {
      LABEL_18:
        if (v6 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v6);
        }
        return result;
      }
    }
    else {
      v22[0] = *a2;
      v22[1] = 0;
      GameRoutine_17372e0(&v23, GameData_2262c00, 0, v22, a3);
      v13 = v24;
      if (v24 == 0) {
        goto LABEL_18;
      }
    }
    v14 = std___1___shared_weak_count_lock(v13);
    if (v14 == 0) {
      goto LABEL_17;
    }
    v15 = v23;
    v16 = v14;
    if (v23 != 0) {
      GameRoutine_157cff0(v23, "T_Txt", (unsigned int)a1, 1);
      v21[0] = v15;
      v21[1] = v13;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1737960(v21);
      *(__n128*)&v17 = std___1___shared_weak_count___release_weak_alt1(v13);
      v20[0] = v15;
      v20[1] = v13;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1737ae0(v20, a4, a5, v17);
      std___1___shared_weak_count___release_weak_alt1(v13);
      if (a1 >= 0) {
        v18 = "Add";
      }
      else {
        v18 = "Sub";
      }
      LayoutAccessor_1562cf0(v15, v18);
      v19[0] = v7;
      v19[1] = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        ProcBindInOut_1737bc0(v5, v15, v19, v5 + 168, *(_QWORD*)(v5 + 272));
        result = std___1___shared_weak_count___release_weak_alt1(v6);
      }
      else {
        ProcBindInOut_1737bc0(v5, v15, v19, v5 + 168, *(_QWORD*)(v5 + 272));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      result = std___1___shared_weak_count___release_weak_alt1(v16);
    }
    v13 = v24;
    if (v24 != 0) {
    LABEL_17:
      result = std___1___shared_weak_count___release_weak_alt1(v13);
    }
    goto LABEL_18;
  }
  return result;
}

__n128 ProcPopup_1736c50(int a1, __int64* a2, __int64 a3, int* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v9;
  __n128 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  const char* v17;
  _QWORD v18[2];
  _DWORD v19[3];
  _QWORD v20[2];
  __int64 v21;
  __int64 v22;

  v4 = GameData_2262c00;
  if (GameData_2262c00 != 0) {
    v6 = *a2;
    v5 = a2[1];
    if (v5 != 0) {
      v9 = GameData_2262c00;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v20[0] = v6;
      v20[1] = v5;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_17372e0(&v21, v9, 2, v20, a3);
      result = std___1___shared_weak_count___release_weak_alt1(v5);
      v11 = v22;
      if (v22 == 0) {
      LABEL_18:
        if (v5 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v5);
        }
        return result;
      }
    }
    else {
      v20[0] = *a2;
      v20[1] = 0;
      GameRoutine_17372e0(&v21, GameData_2262c00, 2, v20, a3);
      v11 = v22;
      if (v22 == 0) {
        goto LABEL_18;
      }
    }
    v12 = std___1___shared_weak_count_lock(v11);
    if (v12 == 0) {
      goto LABEL_17;
    }
    v13 = v21;
    v14 = v12;
    if (v21 != 0) {
      v15 = *a4;
      v16 = a4[1];
      v19[2] = 0;
      v19[0] = v15;
      v19[1] = v16;
      ui_LayoutAccessor_SetTranslate(v21, v19);
      if (a1 != 0) {
        v17 = "Animal";
      }
      else {
        v17 = "Unit";
      }
      LayoutAccessor_1562cf0(v13, v17);
      v18[0] = v6;
      v18[1] = v5;
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        ProcBindInOut_1737bc0(v4, v13, v18, v4 + 168, *(_QWORD*)(v4 + 272));
        result = std___1___shared_weak_count___release_weak_alt1(v5);
      }
      else {
        ProcBindInOut_1737bc0(v4, v13, v18, v4 + 168, *(_QWORD*)(v4 + 272));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      result = std___1___shared_weak_count___release_weak_alt1(v14);
    }
    v11 = v22;
    if (v22 != 0) {
    LABEL_17:
      result = std___1___shared_weak_count___release_weak_alt1(v11);
    }
    goto LABEL_18;
  }
  return result;
}

__int64 ProcPopup_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_anonymous_ProcPopup_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 168);
  v4 = *(_QWORD*)(a1 + 328);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 312);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 296);
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_155e140(a1 + 168);
  v7 = *(_QWORD*)(a1 + 264);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v8 = *(_QWORD*)(a1 + 176);
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameData_2262c00 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcPopup_Unknown2(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  long double v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v2 = a1[37];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v5 = a1[36];
      v6 = v3;
      if (v5 != 0 && (LayoutAccessor_1563280(a1[36], "IO", 0, v4) & 1) == 0) {
        v7 = std___1___shared_weak_count_lock(*(_QWORD*)(v5 + 8));
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          v8 = v7;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v8);
        }
        v9 = *(_QWORD*)(*(_QWORD*)(v5 + 16) + 24LL);
        Pane_58df60(*(_QWORD*)(v9 + 24), v9);
        Pane_58dee0(a1[34], v9);
        v10 = a1[37];
        a1[36] = 0;
        a1[37] = 0;
        if (v10 != 0) {
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  v11 = a1[39];
  if (v11 == 0) {
    goto LABEL_22;
  }
  v12 = std___1___shared_weak_count_lock(v11);
  if (v12 == 0) {
    goto LABEL_22;
  }
  v14 = a1[38];
  v15 = v12;
  if (v14 != 0 && (LayoutAccessor_1563280(a1[38], "IO", 0, v13) & 1) == 0) {
    v16 = std___1___shared_weak_count_lock(*(_QWORD*)(v14 + 8));
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v16;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v17);
    }
    v18 = *(_QWORD*)(*(_QWORD*)(v14 + 16) + 24LL);
    Pane_58df60(*(_QWORD*)(v18 + 24), v18);
    Pane_58dee0(a1[34], v18);
    v19 = a1[39];
    a1[38] = 0;
    a1[39] = 0;
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
    result = a1[41];
    if (result == 0) {
      return result;
    }
  }
  else {
  LABEL_22:
    result = a1[41];
    if (result == 0) {
      return result;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v22 = a1[40];
    v23 = result;
    if (v22 != 0) {
      result = LayoutAccessor_1563280(a1[40], "IO", 0, v21);
      if ((result & 1) == 0) {
        v24 = std___1___shared_weak_count_lock(*(_QWORD*)(v22 + 8));
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          v25 = v24;
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak(v25);
        }
        v26 = *(_QWORD*)(*(_QWORD*)(v22 + 16) + 24LL);
        Pane_58df60(*(_QWORD*)(v26 + 24), v26);
        Pane_58dee0(a1[34], v26);
        result = a1[41];
        a1[40] = 0;
        a1[41] = 0;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      return std___1___shared_weak_count___release_weak(v23);
    }
  }
  return result;
}

#pragma GCC visibility pop
