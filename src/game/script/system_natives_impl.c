#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
extern _UNKNOWN GameData_223e300;
extern __int64 (*anonymous_FadeWaitProc_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_223e288;
extern __int64 GameData_223e290;
extern __int64 GameData_223e298;
extern __int64 GameData_223e2a8;
extern __int64 GameData_223e2b8;
extern __int64 GameData_223e2c8;
extern __int64 GameData_223e2d0;
extern __int64 GameData_223e2d8;
extern __int64 GameData_223e2e8;
extern __int64 GameData_223e2f8;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
extern char GameData_223e280;
extern char GameData_223e2c0;
extern int GameData_223e2a0;
extern int GameData_223e2b0;
extern int GameData_223e2e0;
extern int GameData_223e2f0;
_QWORD* SystemNatives_1192410();

_QWORD* SystemNatives_1192410()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
           *(_QWORD*)(v3 + 24)) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  if (game_ProcFadeView_instance_ == 0 ||
      *(float*)((v4 = game_ProcFadeView_instance_ +
                      ((unsigned __int64)*(
                           unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                       << 6)) +
                172) == *(float*)(v4 + 168)) {
    v10 = *v0;
    v11 = *(_QWORD*)(v10 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v11 != 0) {
      v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 472LL))(v11);
    }
    else {
      v12 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v12 + 24) + 448LL))(
        *(_QWORD*)(v12 + 24), 1);
    result = *(_QWORD**)(v12 + 2240);
    *(_QWORD*)(v12 + 2240) = 0;
    if (result == (_QWORD*)(v12 + 2208)) {
      v13 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v13 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
  }
  v5 = GameData_212cfb0[0];
  v6 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v6 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v6 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v7 = v6[10];
    if (v7 != 0) {
      v8 = *(_QWORD*)(*(_QWORD*)(v6[6] + 8 * ((v7 + v6[9] - 1) / 0x33uLL)) +
                      80 * ((v7 + v6[9] - 1) % 0x33uLL) + 72);
      goto LABEL_22;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_22;
  }
  v8 = 0;

LABEL_22:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_223e300,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_223e300) != 0) {
    GameData_223e280 = 14;
    GameData_223e2a0 = 0;
    GameData_223e2a8 = 0;
    GameData_223e2b0 = 0;
    GameData_223e2b8 = 0;
    GameData_223e2c0 = 0;
    GameData_223e2e8 = 0;
    GameData_223e2f0 = 0;
    GameData_223e2f8 = 0;
    GameData_223e2c8 = 0;
    GameData_223e2d0 = 0;
    GameData_223e2d8 = 0;
    GameData_223e2e0 = 0;
    GameData_223e288 = 0;
    GameData_223e290 = 16;
    GameData_223e298 = 1;
    __cxa_guard_release(&GameData_223e300);
  }
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       152, 16, 0);
  v15 = GameData_212c608[0];
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_QWORD*)(v14 + 128) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 24) = "NULL";
  *(_QWORD*)(v14 + 138) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)v14 = v15 + 16;
  *(_QWORD*)(v14 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)v14 = anonymous_FadeWaitProc_vtable;
  v16 = GameRoutine_657850(v14, &GameData_223e280, "FadeWaitProc", 1, v8);
  game_script_StartWaitProc(v16);
  v17 = (_QWORD*)*v5;
  if (*v5 != 0 ||
      (v17 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v17 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v18 = v17[10];
    if (v18 != 0) {
      v19 = *(_QWORD*)(*(_QWORD*)(v17[6] + 8 * ((v18 + v17[9] - 1) / 0x33uLL)) +
                       80 * ((v18 + v17[9] - 1) % 0x33uLL) + 72);
    }
    else {
      v19 = 0;
    }
  }
  else {
    v19 = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v19 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    }
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v21 = 2)
           : (v21 = 3),
       (v21 & v20) != 0)) {
    v22 = *(float*)(v19 + 144);
    if (v22 < 1.0f) {
      v22 = 1.0f;
    }
    *(_WORD*)(v19 + 136) = *(_WORD*)(v19 + 136) & 0xFF97 | 0x20;
    *(float*)(v19 + 144) = v22;
  }
  v23 = *v0;
  v24 = *(
      _QWORD*)(v23 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v24 + 472LL))(v24);
  return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
      **(_QWORD**)(v25 + 24) + 448LL))(*(_QWORD*)(v25 + 24), 0);
}

#pragma GCC visibility pop
