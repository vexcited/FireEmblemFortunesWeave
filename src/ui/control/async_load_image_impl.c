#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_636000(_QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
__int64 ui_LayoutAccessor_Setup_155dea0(_QWORD, _QWORD);
extern _UNKNOWN GameData_2259378;
extern _UNKNOWN* GameData_2131900;
extern __int64 (*ui_control_AsyncLoadImage_vtable[])();
extern __int64 GameData_2259370;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2131b48[2];
__int64 AsyncLoadImage_17e48a0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 AsyncLoadImage_17e4980(__int64 a1, __int64 a2, __int64 a3);
__int64 AsyncLoadImage_17e51e0(__int64 a1);
__int64 AsyncLoadImage_17e5360(__int64 result);

__int64 AsyncLoadImage_17e48a0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;

  v5 = GameRoutine_576600(a3, *a4);
  v7 = 0;
  if (a2 != 0) {
    v6 = v5;
    if (v5 != 0) {
      v7 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)(a2 + 24) + 120LL))(*(_QWORD*)(a2 + 24), v5, 1);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259378,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2259378) != 0) {
    GameData_2259370 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(&GameData_2259378);
  }
  if (v7 == 0) {
    return 0;
  }
  v8 = (__int64*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v7 + 16LL))(v7,
                                                                          v6);
  if (v8 != &GameData_2259370) {
    do {
      v8 = (__int64*)*v8;
    } while (v8 != &GameData_2259370 && v8 != nullptr);
    if (v8 == nullptr) {
      return 0;
    }
  }
  return v7;
}

__int64 AsyncLoadImage_17e4980(__int64 a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v23;
  __int64 v24;

  v6 = GameData_2131b48[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = v6 + 2;
  *(_QWORD*)(a1 + 8) = a3;
  v7 = *(_QWORD*)(a3 + 24) + 176LL;
  v8 = strlen(v7);
  *(_QWORD*)(a1 + 16) = v7;
  *(_QWORD*)(a1 + 24) = v8;
  v9 = *(_QWORD*)(a3 + 48);
  v10 = strlen(v9);
  *(_QWORD*)(a1 + 32) = v9;
  *(_QWORD*)(a1 + 40) = v10;
  ui_ILayoutControl_UpdatePath(a1);
  *(_QWORD*)a1 = ui_control_AsyncLoadImage_vtable;
  v11 = *(_QWORD*)(a2 + 72);
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 1065353216;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 104) = a1 + 112;
  *(_QWORD*)(a1 + 72) = v11;
  v12 = GameData_212fca0[0];
  *(_DWORD*)(a1 + 232) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 216) = v12 + 2;
  *(_QWORD*)(a1 + 224) = -1;
  if (v11 != 0) {
    v13 = *(_QWORD*)(v11 + 16);
    if (v13 != 0) {
      v14 = *(_QWORD*)(v11 + 8);
      v15 = *(_QWORD*)(v11 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
      v23 = 0;
      v16 = std___1___shared_weak_count_lock(v15);
      v24 = v16;
      if (v16 != 0) {
        v17 = v16;
        v23 = v14;
        ui_LayoutAccessor_Setup_155dea0(a1 + 80, &v23);
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
      else {
        ui_LayoutAccessor_Setup_155dea0(a1 + 80, &v23);
      }
      std___1___shared_weak_count___release_weak(v13);
    }
    else {
      v23 = 0;
      v24 = 0;
      ui_LayoutAccessor_Setup_155dea0(a1 + 80, &v23);
    }
  }
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  if (v18 != 0) {
    v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v18 + 120LL))(
        v18, *(_QWORD*)(a2 + 184) + 176LL, 1);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2131900,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_2259378) != 0) {
      GameData_2259370 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(&GameData_2259378);
    }
    if (v19 == 0) {
      goto LABEL_19;
    }
    v20 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    if (v20 != &GameData_2259370) {
      do {
        v20 = (__int64*)*v20;
      } while (v20 != &GameData_2259370 && v20 != nullptr);
      if (v20 == nullptr) {
      LABEL_19:
        v19 = 0;
      }
    }
    *(_QWORD*)(a1 + 184) = v19;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 152LL))(a1);
}

__int64 AsyncLoadImage_17e51e0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  int v4;
  __int64 result;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  float v15;

  v1 = *(_QWORD*)(a1 + 152);
  if (v1 == 0) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 160) == 1) {
    GameRoutine_636000(*(_QWORD*)(*(_QWORD*)(v1 + 208) + 8LL));
    v1 = *(_QWORD*)(a1 + 152);
  }
  v3 = *(_QWORD*)(v1 + 208);
  nn_os_AcquireReadLock(v3 + 696);
  v4 = *(_DWORD*)(v3 + 656);
  nn_os_ReleaseReadLock(v3 + 696);
  if ((v4 & 8) == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(a1 + 152);
  v7 = *(
      __int64**)(GameRoutine_5fc1f0(*(_QWORD*)(*(_QWORD*)(v6 + 208) + 592LL)) +
                 40);
  v8 = *(_QWORD*)(v6 + 184);
  v9 = *v7;
  *(_QWORD*)(v6 + 224) = *(_QWORD*)(v9 + 144);
  *(_DWORD*)(v6 + 192) =
      *(unsigned __int16*)(v9 + 36) | (*(_DWORD*)(v9 + 40) << 16);
  v10 = Pane_58f8a0(v8);
  if (v10 != 0) {
    *(_QWORD*)(*(_QWORD*)(v10 + 24) + 8LL) = v6 + 216;
  }
  (*(void (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6);
  v11 = *(_QWORD*)(v6 + 200);
  *(_BYTE*)(v6 + 240) = 0;
  if (v11 == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6) & 1) != 0) {
    return 0;
  }
  v12 = *(_QWORD*)(v6 + 200);
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v13 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v14 = (v13 & 8) != 0 ? 2 : 3;
    if ((v14 & v13) == 0) {
      return 0;
    }
  }
  v15 = *(float*)(v12 + 144);
  result = 0;
  if (v15 < 1.0) {
    v15 = 1.0;
  }
  *(_WORD*)(v12 + 136) = *(_WORD*)(v12 + 136) & 0xFF97 | 0x20;
  *(float*)(v12 + 144) = v15;
  return result;
}

__int64 AsyncLoadImage_17e5360(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(result + 152) + 200LL) = 0;
  return result;
}

#pragma GCC visibility pop
