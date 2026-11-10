#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e7fde0(_QWORD, _QWORD, _QWORD, _QWORD, float, double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2203490;
extern __int64 as_g_thread_info;
extern __int64* as_g_script_manager_ptr;
__int64 CmdbtlCameraNatives_ed68d0(char a1, float a2);
__int64 CmdbtlPartyNatives_e9a800(_QWORD, _QWORD);
__int64 GameRoutine_e80e80(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fed038[])();
extern __int64* GameData_212ea58;
__int64 cmdbtl_camera_StartSelfie(int a1, __int128* a2, float a3, float a4,
                                  float a5, float a6);

__int64 cmdbtl_camera_StartSelfie(int a1, __int128* a2, float a3, float a4,
                                  float a5, float a6)
{
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 (***v21)();
  __int64 (**v22)();
  __int128 v23;
  __int128 v24;
  __int64 result;
  __int64 v26;
  __int64 (**v27)();
  __int64 (***v28)();
  int* v29;
  __int64 (***v30)();
  float v31;
  float v32;
  float v33;
  __int128 v34;
  char v35;
  float v36;
  char v37;
  __int64 (**v38)();
  __int64 v39;
  int v40;

  v12 = *as_g_script_manager_ptr;
  v13 = *(
      _QWORD*)(v12 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v13 != 0) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 472LL))(v13);
  }
  else {
    v14 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v14 + 24) + 448LL))(
      *(_QWORD*)(v14 + 24), 1);
  v15 = *(_QWORD**)(v14 + 2240);
  *(_QWORD*)(v14 + 2240) = 0;
  if (v15 == (_QWORD*)(v14 + 2208)) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_9;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
LABEL_9:
  v40 = a1;
  v38 = nullptr;
  v39 = 0;
  v17 = GameData_212ea58;
  v27 = GameData_1fed038;
  v28 = &v38;
  v30 = &v27;
  v18 = *GameData_212ea58;
  v29 = &v40;
  CmdbtlPartyNatives_e9a800(v18, &v27);
  if (v30 == &v27) {
    v19 = 4;
    goto LABEL_13;
  }
  if (v30 != nullptr) {
    v19 = 5;
  LABEL_13:
    (*v30)[v19]();
  }
  LOBYTE(v30) = 0;
  LOBYTE(v29) = 0;
  v20 = *v17;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v26 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v26;
    __cxa_guard_release(&GameData_21a6130);
  }
  v34 = GameData_21a6120;
  v37 = 1;
  v22 = v38;
  v21 = (__int64 (***)())v39;
  if (v39 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 16), 1u,
                              memory_order_relaxed);
  }
  v23 = *a2;
  v27 = v22;
  v28 = v21;
  v31 = a3;
  v32 = a4;
  v33 = a5;
  v35 = 0;
  v36 = a6;
  *(_QWORD*)&v24 = v23;
  *((_QWORD*)&v24 + 1) = DWORD2(v23);
  v34 = v24;
  GameRoutine_e80e80(v20 + 16, &v27);
  if (v28 != nullptr) {
    std___1___shared_weak_count___release_weak(v28);
  }
  result = v39;
  if (v39 != 0) {
    return std___1___shared_weak_count___release_weak(v39);
  }
  return result;
}

__int64 CmdbtlCameraNatives_ed68d0(char a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  char v17;
  __int64 v18;
  __int64 result;
  _QWORD v20[2];
  _QWORD v21[2];

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_9:
  v9 = GameData_2203490;
  v10 = *(_QWORD*)(GameData_2203490 + 752);
  v11 = *(_QWORD*)(GameData_2203490 + 760);
  if ((a1 & 1) == 0) {
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
    }
    v14 = *(_QWORD*)(v9 + 880);
    v15 = *(_QWORD*)(v9 + 888);
    if (v15 == 0) {
      v18 = 0;
      v17 = 1;
      v12 = v10;
      if (v11 == 0) {
        goto LABEL_26;
      }
      goto LABEL_25;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v13 = v11;
    v12 = v10;
    v11 = v15;
    goto LABEL_20;
  }
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  v12 = *(_QWORD*)(v9 + 880);
  v13 = *(_QWORD*)(v9 + 888);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  if (v11 != 0) {
    v14 = v10;
  LABEL_20:
    v16 = (atomic_ullong*)(v11 + 16);
    v17 = 0;
    v18 = v11;
    v11 = v13;
    atomic_fetch_add_explicit(v16, 1u, memory_order_relaxed);
    if (v13 == 0) {
      goto LABEL_26;
    }
  LABEL_25:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_26;
  }
  v18 = 0;
  v17 = 1;
  v11 = v13;
  v14 = v10;
  if (v13 != 0) {
    goto LABEL_25;
  }

LABEL_26:
  v21[0] = v14;
  v21[1] = v18;
  if ((v17 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
  }
  v20[0] = v12;
  v20[1] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e7fde0(v9 + 16, v21, v20, 0, a2, 0.0f);
    result = std___1___shared_weak_count___release_weak(v11);
    if ((v17 & 1) != 0) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  result = GameRoutine_e7fde0(v9 + 16, v21, v20, 0, a2, 0.0f);
  if ((v17 & 1) == 0) {
  LABEL_30:
    result = std___1___shared_weak_count___release_weak(v18);
  }

LABEL_31:
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v17 & 1) == 0) {
    result = std___1___shared_weak_count___release_weak(v18);
  }
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v17 & 1) == 0) {
    return std___1___shared_weak_count___release_weak(v18);
  }
  return result;
}

#pragma GCC visibility pop
