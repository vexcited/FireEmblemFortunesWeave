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
__n128 ProcPopup_1735f10_alt1(int a1, __int64* a2, __int64 a3, unsigned int a4,
                              __int64 a5) __asm__("ProcPopup_1735f10");
__n128 ProcPopup_17361d0_alt1(int a1, __int64* a2, __int64 a3, unsigned int a4,
                              __int64 a5) __asm__("ProcPopup_17361d0");
__n128 ProcPopup_1736c50_alt1(int a1, __int64* a2, __int64 a3,
                              int* a4) __asm__("ProcPopup_1736c50");
__int64 GameHr_1737960(__int64);
__int64 GameRoutine_1737ae0_alt1(__int64*, int,
                                 float*) __asm__("GameRoutine_1737ae0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ProcBindInOut_1737bc0_alt1(__int64, __int64, __int64*, __int64,
                                   __int64) __asm__("ProcBindInOut_1737bc0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
float ui_LayoutAccessor_SetTranslate_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_SetTranslate");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_157cff0_alt1(__int64*, __int64, int,
                              char) __asm__("GameRoutine_157cff0");
void GameRoutine_17372e0_alt1(_QWORD*, __int64, int, __int64*,
                              __int64) __asm__("GameRoutine_17372e0");
void ProcPopup_1735f10(int a1, __int64* a2, __int64 a3, int a4, float* a5);
void ProcPopup_17361d0(int a1, __int64* a2, __int64 a3, int a4, float* a5);
void ProcPopup_1736c50(int a1, __int64* a2, __int64 a3, int* a4);

void ProcPopup_1735f10(int a1, __int64* a2, __int64 a3, int a4, float* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22[2];
  __int64 v23[2];
  _QWORD v24[2];
  __int64 v25[2];
  struct {
    __int64* v26;
    __int64 v27;
    __int64* v28;
    unsigned __int64 v29;
    unsigned __int64 v30;
    unsigned __int64 v31;
    int v32;
    int v33;
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
    __int64 v46;
  } v26_;

  v5 = GameData_2262c00;
  if (GameData_2262c00 != 0) {
    v7 = *a2;
    v6 = a2[1];
    if (v6 != 0) {
      v11 = GameData_2262c00;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      v25[0] = v7;
      v25[1] = v6;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_17372e0_alt1(&v26_.v26, v11, 0, v25, a3);
      std___1___shared_weak_count___release_weak_alt2(v6);
      v12 = v26_.v27;
      if (v26_.v27 == 0) {
      LABEL_23:
        if (v6 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v6);
        }
        return;
      }
    }
    else {
      v25[0] = *a2;
      v25[1] = 0;
      GameRoutine_17372e0_alt1(&v26_.v26, GameData_2262c00, 0, v25, a3);
      v12 = v26_.v27;
      if (v26_.v27 == 0) {
        goto LABEL_23;
      }
    }
    v13 = std___1___shared_weak_count_lock_alt1(v12);
    if (v13 == 0) {
      goto LABEL_22;
    }
    v14 = v26_.v26;
    v15 = v13;
    if (v26_.v26 != nullptr) {
      if (a1 < 0) {
        v18 = game_util_Format_alt1("%d", a1);
      }
      else {
        v26_.v34 = -1;
        v26_.v35 = -1;
        v26_.v36 = -1;
        v26_.v37 = -1;
        v16 = *msg_MessageManager_instance__ptr[0];
        v26_.v38 = -1;
        v26_.v39 = -1;
        v26_.v40 = -1;
        v26_.v41 = -1;
        v26_.v42 = -1;
        v26_.v43 = -1;
        v26_.v44 = -1;
        v26_.v45 = -1;
        v26_.v28 = GameData_212e348 + 2;
        v26_.v29 = 0xFFFF0001FFFF0000LL;
        v26_.v30 = 0xFFFF0004FFFF0002LL;
        v26_.v31 = 0xFFFF0006FFFF0005LL;
        v26_.v46 = 8;
        v26_.v32 = -65529;
        v26_.v33 = -65528;
        v17 = GameRoutine_a4dbe0_alt1(v16, "MID_Sys_Plus", 0);
        v18 = game_util_Format_alt1("%s%d", v17, a1);
      }
      v19 = (__int64)v18;
      v20 = ui_LayoutAccessor_FindTextBox_alt1(v14, (__int64)"T_Txt");
      if (v20 != 0) {
        GameRoutine_156c5d0_alt1(v20, v19, 0);
      }
      v24[0] = v14;
      v24[1] = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      GameHr_1737960((__int64)v24);
      std___1___shared_weak_count___release_weak_alt2(v12);
      v23[0] = (__int64)v14;
      v23[1] = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1737ae0_alt1(v23, a4, a5);
      std___1___shared_weak_count___release_weak_alt2(v12);
      if (a1 >= 0) {
        v21 = "Add";
      }
      else {
        v21 = "Sub";
      }
      LayoutAccessor_1562cf0_alt1((__int64)v14, v21);
      v22[0] = v7;
      v22[1] = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        ProcBindInOut_1737bc0_alt1(v5, (__int64)v14, v22, v5 + 168,
                                   *(_QWORD*)(v5 + 272));
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
      else {
        ProcBindInOut_1737bc0_alt1(v5, (__int64)v14, v22, v5 + 168,
                                   *(_QWORD*)(v5 + 272));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt2(v15);
    }
    v12 = v26_.v27;
    if (v26_.v27 != 0) {
    LABEL_22:
      std___1___shared_weak_count___release_weak_alt2(v12);
    }
    goto LABEL_23;
  }
}

void ProcPopup_17361d0(int a1, __int64* a2, __int64 a3, int a4, float* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  const char* v16;
  __int64 v17[2];
  __int64 v18[2];
  _QWORD v19[2];
  __int64 v20[2];
  struct {
    __int64* v21;
    __int64 v22;
  } v21_;

  v5 = GameData_2262c00;
  if (GameData_2262c00 != 0) {
    v7 = *a2;
    v6 = a2[1];
    if (v6 != 0) {
      v11 = GameData_2262c00;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      v20[0] = v7;
      v20[1] = v6;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_17372e0_alt1(&v21_.v21, v11, 0, v20, a3);
      std___1___shared_weak_count___release_weak_alt2(v6);
      v12 = v21_.v22;
      if (v21_.v22 == 0) {
      LABEL_18:
        if (v6 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v6);
        }
        return;
      }
    }
    else {
      v20[0] = *a2;
      v20[1] = 0;
      GameRoutine_17372e0_alt1(&v21_.v21, GameData_2262c00, 0, v20, a3);
      v12 = v21_.v22;
      if (v21_.v22 == 0) {
        goto LABEL_18;
      }
    }
    v13 = std___1___shared_weak_count_lock_alt1(v12);
    if (v13 == 0) {
      goto LABEL_17;
    }
    v14 = v21_.v21;
    v15 = v13;
    if (v21_.v21 != nullptr) {
      GameRoutine_157cff0_alt1(v21_.v21, (__int64)"T_Txt", a1, 1);
      v19[0] = v14;
      v19[1] = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      GameHr_1737960((__int64)v19);
      std___1___shared_weak_count___release_weak_alt2(v12);
      v18[0] = (__int64)v14;
      v18[1] = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1737ae0_alt1(v18, a4, a5);
      std___1___shared_weak_count___release_weak_alt2(v12);
      if (a1 >= 0) {
        v16 = "Add";
      }
      else {
        v16 = "Sub";
      }
      LayoutAccessor_1562cf0_alt1((__int64)v14, v16);
      v17[0] = v7;
      v17[1] = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        ProcBindInOut_1737bc0_alt1(v5, (__int64)v14, v17, v5 + 168,
                                   *(_QWORD*)(v5 + 272));
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
      else {
        ProcBindInOut_1737bc0_alt1(v5, (__int64)v14, v17, v5 + 168,
                                   *(_QWORD*)(v5 + 272));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt2(v15);
    }
    v12 = v21_.v22;
    if (v21_.v22 != 0) {
    LABEL_17:
      std___1___shared_weak_count___release_weak_alt2(v12);
    }
    goto LABEL_18;
  }
}

void ProcPopup_1736c50(int a1, __int64* a2, __int64 a3, int* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  int v14;
  int v15;
  const char* v16;
  __int64 v17[2];
  _DWORD v18[3];
  __int64 v19[2];
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;

  v4 = GameData_2262c00;
  if (GameData_2262c00 != 0) {
    v6 = *a2;
    v5 = a2[1];
    if (v5 != 0) {
      v9 = GameData_2262c00;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v19[0] = v6;
      v19[1] = v5;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_17372e0_alt1(&v20_.v20, v9, 2, v19, a3);
      std___1___shared_weak_count___release_weak_alt2(v5);
      v10 = v20_.v21;
      if (v20_.v21 == 0) {
      LABEL_18:
        if (v5 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v5);
        }
        return;
      }
    }
    else {
      v19[0] = *a2;
      v19[1] = 0;
      GameRoutine_17372e0_alt1(&v20_.v20, GameData_2262c00, 2, v19, a3);
      v10 = v20_.v21;
      if (v20_.v21 == 0) {
        goto LABEL_18;
      }
    }
    v11 = std___1___shared_weak_count_lock_alt1(v10);
    if (v11 == 0) {
      goto LABEL_17;
    }
    v12 = v20_.v20;
    v13 = v11;
    if (v20_.v20 != nullptr) {
      v14 = *a4;
      v15 = a4[1];
      v18[2] = 0;
      v18[0] = v14;
      v18[1] = v15;
      ui_LayoutAccessor_SetTranslate_alt1(v20_.v20, (__int64)v18);
      if (a1 != 0) {
        v16 = "Animal";
      }
      else {
        v16 = "Unit";
      }
      LayoutAccessor_1562cf0_alt1((__int64)v12, v16);
      v17[0] = v6;
      v17[1] = v5;
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
        ProcBindInOut_1737bc0_alt1(v4, (__int64)v12, v17, v4 + 168,
                                   *(_QWORD*)(v4 + 272));
        std___1___shared_weak_count___release_weak_alt2(v5);
      }
      else {
        ProcBindInOut_1737bc0_alt1(v4, (__int64)v12, v17, v4 + 168,
                                   *(_QWORD*)(v4 + 272));
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt2(v13);
    }
    v10 = v20_.v21;
    if (v20_.v21 != 0) {
    LABEL_17:
      std___1___shared_weak_count___release_weak_alt2(v10);
    }
    goto LABEL_18;
  }
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
