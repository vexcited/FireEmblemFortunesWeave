#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*kaneko_disposable_DisposableProcInst_vtable[])();
extern __int64 (*kaneko_disposable_EveryFrameProc_vtable[])();
__int64 EveryFrameProc_Destructor(__int64 a1);
__int64 EveryFrameProc_Unknown3(__int64 a1);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*kaneko_disposable_DoLaterProc_vtable[])();
extern __int64* GameData_212c628;
extern __int64* GameData_212fe80;
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 EveryFrameProc_10aa5e0(__int64 a1, __int64 a2, float a3);

__int64 EveryFrameProc_10aa5e0(__int64 a1, __int64 a2, float a3)
{
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  int v18;

  if (a3 <= 0.0f) {
    v11 = *(_QWORD*)(a2 + 32);
    if (v11 == 0) {
      GameRoutine_60a310(0);
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
    v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        256, 16, 0);
    v13 = GameData_212c608[0];
    *(_QWORD*)(v7 + 96) = 0;
    *(_QWORD*)(v7 + 104) = 0;
    *(_QWORD*)(v7 + 112) = 0;
    *(_QWORD*)(v7 + 120) = 0;
    *(_QWORD*)(v7 + 128) = 0;
    *(_WORD*)(v7 + 136) = 0;
    *(_QWORD*)(v7 + 16) = 0;
    *(_QWORD*)(v7 + 24) = "NULL";
    *(_QWORD*)(v7 + 138) = 0;
    *(_QWORD*)(v7 + 144) = 0;
    *(_QWORD*)(v7 + 32) = 0;
    *(_QWORD*)(v7 + 40) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)(v7 + 80) = 0;
    *(_QWORD*)(v7 + 88) = 0;
    *(_QWORD*)v7 = v13 + 16;
    *(_QWORD*)(v7 + 8) = 0;
    game_ProcInst_Register();
    v14 = fw_memory_HeapManager_Allocate(*v12, 32, 16, 0);
    *(_QWORD*)v14 = GameData_212fe80 + 2;
    *(_QWORD*)(v14 + 8) = 0;
    *(_DWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v7 + 152) = v14 + 24;
    *(_QWORD*)(v7 + 160) = v14;
    *(_QWORD*)(v7 + 168) = v14 + 24;
    *(_QWORD*)(v7 + 176) = v14;
    *(_QWORD*)(v14 + 16) = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v7 + 184) = v7;
    *(_QWORD*)(v7 + 192) = 0;
    *(_QWORD*)(v7 + 200) = a1;
    *(_QWORD*)(v7 + 240) = 0;
    *(_QWORD*)v7 = kaneko_disposable_DoLaterProc_vtable;
    if (a1 == 0) {
      goto LABEL_10;
    }
  }
  else {
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        256, 16, 0);
    v8 = GameData_212c608[0];
    *(_QWORD*)(v7 + 96) = 0;
    *(_QWORD*)(v7 + 104) = 0;
    *(_QWORD*)(v7 + 112) = 0;
    *(_QWORD*)(v7 + 120) = 0;
    *(_QWORD*)(v7 + 128) = 0;
    *(_WORD*)(v7 + 136) = 0;
    *(_QWORD*)(v7 + 16) = 0;
    *(_QWORD*)(v7 + 24) = "NULL";
    *(_QWORD*)(v7 + 138) = 0;
    *(_QWORD*)(v7 + 144) = 0;
    *(_QWORD*)(v7 + 32) = 0;
    *(_QWORD*)(v7 + 40) = 0;
    *(_QWORD*)(v7 + 48) = 0;
    *(_QWORD*)(v7 + 56) = 0;
    *(_QWORD*)(v7 + 64) = 0;
    *(_QWORD*)(v7 + 72) = 0;
    *(_QWORD*)(v7 + 80) = 0;
    *(_QWORD*)(v7 + 88) = 0;
    *(_QWORD*)v7 = v8 + 16;
    *(_QWORD*)(v7 + 8) = 0;
    game_ProcInst_Register();
    v9 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
    *(_QWORD*)v9 = GameData_212fe80 + 2;
    *(_QWORD*)(v9 + 8) = 0;
    *(_DWORD*)(v9 + 24) = 0;
    *(_QWORD*)(v7 + 152) = v9 + 24;
    *(_QWORD*)(v7 + 160) = v9;
    *(_QWORD*)(v7 + 168) = v9 + 24;
    *(_QWORD*)(v7 + 176) = v9;
    *(_QWORD*)(v9 + 16) = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v7 + 184) = v7;
    *(_DWORD*)(v7 + 192) = 0;
    *(float*)(v7 + 196) = a3;
    *(_QWORD*)(v7 + 200) = a1;
    v10 = *(_QWORD*)(a2 + 32);
    *(_QWORD*)v7 = kaneko_disposable_DoLaterProc_vtable;
    if (v10 != 0) {
      if (v10 == a2) {
        *(_QWORD*)(v7 + 240) = v7 + 208;
        (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
        if (*(_QWORD*)(v7 + 200) != 0) {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      *(_QWORD*)(v7 + 240) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      if (*(_QWORD*)(v7 + 200) == 0) {
      LABEL_10:
        *(_QWORD*)(v7 + 200) =
            *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
      }
    }
    else {
      *(_QWORD*)(v7 + 240) = 0;
      if (*(_QWORD*)(v7 + 200) == 0) {
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  v15 = *GameData_212c628;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    v17 = v15;
    v18 = __cxa_guard_acquire(&GameData_21c6868);
    v15 = v17;
    if (v18 != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      __cxa_guard_release(&GameData_21c6868);
      v15 = v17;
    }
  }
  return ProcInst_657850(v7, &GameData_21c67a8, "disposable::DoLaterProc", 0,
                         v15);
}

__int64 EveryFrameProc_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)a1 = kaneko_disposable_EveryFrameProc_vtable;
  v2 = *(_QWORD*)(a1 + 288);
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
    v3 = *(_QWORD**)(a1 + 288);
    *(_QWORD*)(a1 + 288) = 0;
    if (v3 == (_QWORD*)(a1 + 256)) {
      v4 = 32;
    }
    else {
      if (v3 == nullptr) {
        goto LABEL_11;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
    v5 = *(_QWORD**)(a1 + 288);
    if (v5 == (_QWORD*)(a1 + 256)) {
      v6 = 32;
    }
    else {
      if (v5 == nullptr) {
        goto LABEL_11;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
LABEL_11:
  v7 = *(_QWORD**)(a1 + 240);
  if (v7 == (_QWORD*)(a1 + 208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  v9 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = kaneko_disposable_DisposableProcInst_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = *(_QWORD*)(a1 + 160);
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 EveryFrameProc_Unknown3(__int64 a1)
{
  float v2;
  float v3;
  __int64 result;
  __int64 (*v5)(__int64, float*);
  float v6;

  v2 = *(float*)(a1 + 196);
  v3 = *(float*)(a1 + 192) +
       (float)((float)(*(float*)(*(_QWORD*)(a1 + 200) + 16LL) * 16.683f) /
               1000.0f);
  *(float*)(a1 + 192) = v3;
  if (v3 > v2) {
    v3 = v2;
    *(float*)(a1 + 192) = v2;
  }
  result = *(_QWORD*)(a1 + 240);
  if (result == 0) {
    if (v3 < v2) {
      return result;
    }
    goto LABEL_8;
  }
  v5 = *(__int64 (**)(__int64, float*))(*(_QWORD*)result + 48LL);
  v6 = v3 / v2;
  result = v5(result, &v6);
  if (v3 >= v2 || (result & 1) == 0) {
  LABEL_8:
    if ((*(_WORD*)(a1 + 136) & 1) == 0) {
      return ProcInst_657a50(a1, 1);
    }
  }
  return result;
}

#pragma GCC visibility pop
