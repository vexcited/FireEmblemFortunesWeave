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
