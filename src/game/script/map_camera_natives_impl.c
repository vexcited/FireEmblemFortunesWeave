#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7bfd40(_QWORD, _QWORD, float);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
extern _UNKNOWN GameData_21c6868;
extern __int64 (*anonymous_CameraWaitProc_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
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
extern __int64 GameData_21cd140;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
float fmodf(float, float);
_QWORD* map_camera_MoveWait();
__int64 map_camera_GetRoll();
void map_camera_SetRoll(int a1);
float map_camera_GetTilt(float a1);

_QWORD* map_camera_MoveWait()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  int v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
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
  __int64 v26;

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
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) == 0) {
      v11 = *v0;
      v12 = *(_QWORD*)(v11 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
      if (v12 != 0) {
        v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
      }
      else {
        v13 = 0;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v13 + 24) + 448LL))(
          *(_QWORD*)(v13 + 24), 1);
      result = *(_QWORD**)(v13 + 2240);
      *(_QWORD*)(v13 + 2240) = 0;
      if (result == (_QWORD*)(v13 + 2208)) {
        v26 = 32;
      }
      else {
        if (result == nullptr) {
          return result;
        }
        v26 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(void))(*result + v26))();
    }
  }
  v6 = GameData_212cfb0[0];
  v7 = (_QWORD*)*GameData_212cfb0[0];
  if (*GameData_212cfb0[0] != 0 ||
      (v7 = *(_QWORD**)GameData_212eb20[0],
       *(_QWORD*)GameData_212eb20[0] != 0) ||
      (v7 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
    v8 = v7[10];
    if (v8 != 0) {
      v9 = *(_QWORD*)(*(_QWORD*)(v7[6] + 8 * ((v8 + v7[9] - 1) / 0x33uLL)) +
                      80 * ((v8 + v7[9] - 1) % 0x33uLL) + 72);
      goto LABEL_19;
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
    goto LABEL_19;
  }
  v9 = 0;
LABEL_19:
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
  game_ProcInst_Register(v14);
  *(_QWORD*)v14 = anonymous_CameraWaitProc_vtable;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
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
  }
  v16 = ProcInst_657850(v14, &GameData_21c67a8, "CameraWaitProc", 1, v9);
  game_script_StartWaitProc(v16);
  v17 = (_QWORD*)*v6;
  if (*v6 != 0 ||
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
    if (v22 < 1.0) {
      v22 = 1.0;
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

__int64 map_camera_GetRoll()
{
  _QWORD* v0;
  __int64 v1;
  float v2;
  float v3;
  float v4;

  if (GameData_21cd140 == 0) {
    return 0xFFFFFFFFLL;
  }
  v0 = *(_QWORD**)(GameData_21cd140 + 432);
  v1 = v0[2];
  v0 += 2;
  v2 = (*(float (**)(_QWORD*))(v1 + 16))(v0);
  v3 = (*(float (**)(_QWORD*))(*v0 + 16LL))(v0);
  v4 = fmodf(v3, 360.0);
  if (v2 < 0.0) {
    v4 = v4 + 360.0;
  }
  return (unsigned int)((int)(float)(v4 + 15.0) / 30 % 12);
}

void map_camera_SetRoll(int a1)
{
  __int64 v1;
  float v3;
  float v4;
  float v5;

  if (GameData_21cd140 != 0) {
    v1 = *(_QWORD*)(GameData_21cd140 + 432);
    v3 = (*(float (**)(__int64))(*(_QWORD*)(v1 + 16) + 16LL))(v1 + 16);
    v4 = (*(float (**)(__int64))(*(_QWORD*)(v1 + 16) + 16LL))(v1 + 16);
    v5 = fmodf(v4, 360.0);
    if (v3 < 0.0) {
      v5 = v5 + 360.0;
    }
    if ((int)(float)(v5 + 15.0) / 30 % 12 != a1) {
      GameRoutine_7bfd40(v1, 1, (float)a1 * 30.0);
    }
  }
}

float map_camera_GetTilt(float a1)
{
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  float v5;

  if (GameData_21cd140 == 0) {
    return 0.0f;
  }
  v1 = *(_QWORD*)(GameData_21cd140 + 432);
  if (game_GameModeData_instance_ != 0 &&
      (v2 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
    LOBYTE(a1) = *(_BYTE*)(v2 + 129);
    v3 = (float)LODWORD(a1);
    LOBYTE(a1) = *(_BYTE*)(v2 + 130);
    v4 = (float)LODWORD(a1);
  }
  else {
    v3 = 90.0f;
    v4 = 90.0f;
  }
  if (*(float*)(v1 + 68) == *(float*)(v1 + 64)) {
    (*(void (**)(__int64))(*(_QWORD*)(v1 + 56) + 16LL))(v1 + 56);
  }
  else {
    v5 = *(float*)(v1 + 88);
  }
  return (float)(v5 - v3) / (float)(v4 - v3);
}

#pragma GCC visibility pop
