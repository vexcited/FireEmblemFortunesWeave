#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
bool SystemMenuItem_Restart_IsActive(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_65a020(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_21c9600;
__int64
game_menu_anonymous_SystemMenuItem_Restart_ACall_closure_Invoke(__int64 a1);
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
__int64 Dialog_16499c0(__int64 result);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* Dialog_1649e50(char* result, const char*, char, char);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_20eb388[])();
extern __int64 (*GameData_20eb408[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64* GameData_212d640[9];
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
void SystemMenuItem_Restart_DeletingDestructor(__int64 a1);
const char* SystemMenuItem_Restart_Unknown3(__int64 a1);
__int64 game_menu_anonymous_SystemMenuItem_Restart_ACall(__int64 a1);

void SystemMenuItem_Restart_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = GameData_212d640[0] + 2;
  v2 = (_QWORD*)(a1 + 96);
  v3 = *(_QWORD**)(a1 + 128);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 32);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9, a1);
}

const char* SystemMenuItem_Restart_Unknown3(__int64 a1)
{
  const char* result;

  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    return "MID_Restart_Battle";
  }
  result = "MID_Restart_Chapter";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return "MID_Restart_Chapter_Part3";
  }
  return result;
}

__int64 game_menu_anonymous_SystemMenuItem_Restart_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  const char* v4;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  char* v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  char* v18;

  v1 = 368;
  if (*(_BYTE*)(a1 + 144) != 0) {
    v1 = 2208;
  }
  if (*(_DWORD*)(game_GameRestartData_unknown_ + v1 + 284) == 0) {
    return 1;
  }
  if (*(_BYTE*)(a1 + 144) != 0) {
    if (game_GameModeData_instance_ == 0 ||
        (*(_BYTE*)(game_GameModeData_instance_ + 93) & 1) == 0) {
      v3 = *(_QWORD*)(a1 + 8);
      v4 = "MID_Restart_Battle";
      goto LABEL_12;
    }
    return 1;
  }
  v3 = *(_QWORD*)(a1 + 8);
  v4 = "MID_Restart_Chapter";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v4 = "MID_Restart_Chapter_Part3";
  }
LABEL_12:
  v18 = game_util_Format("%s_Confirm", v4);
  v16_.v16[0] = GameData_20eb388;
  v16_.v16[1] = a1;
  v14_.v15 = v14_.v14;
  v12_.v13 = v12_.v12;
  v16_.v17 = v16_.v16;
  v14_.v14[0] = GameData_20eb408;
  v12_.v12[0] = GameData_20eb408;
  v6 = (char*)MapSortieMenu_871860(v3, (__int64)&v18, (__int64)v16_.v16,
                                   (__int64)v14_.v14, (__int64)v12_.v12);
  if (v12_.v13 == v12_.v12) {
    v7 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_17;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v12_.v13 + v7))((__int64)v12_.v13);
LABEL_17:
  if (v14_.v15 == v14_.v14) {
    v8 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_22;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v8))((__int64)v14_.v15);
LABEL_22:
  if (v16_.v17 == v16_.v16) {
    v9 = 32;
    goto LABEL_26;
  }
  if (v16_.v17 != nullptr) {
    v9 = 40;
  LABEL_26:
    (*(void (**)(__int64))(*v16_.v17 + v9))((__int64)v16_.v17);
  }
  Dialog_16499c0((__int64)v6);
  if ((*(_BYTE*)(a1 + 144) & 1) != 0) {
    v10 = "MID_Restart_Battle";
  }
  else {
    v10 = "MID_Restart_Chapter";
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v10 = "MID_Restart_Chapter_Part3";
    }
  }
  v11 = game_util_Format("%s_Annotation", v10);
  Dialog_1649e50(v6, v11, 1, 0);
  return 12;
}

bool SystemMenuItem_Restart_IsActive(__int64 a1)
{
  __int64 v1;

  v1 = 368;
  if (*(_BYTE*)(a1 + 144) != 0) {
    v1 = 2208;
  }
  return *(_DWORD*)(game_GameRestartData_unknown_ + v1 + 284) != 0 &&
         (*(_BYTE*)(a1 + 144) == 0 || game_GameModeData_instance_ == 0 ||
          (*(_BYTE*)(game_GameModeData_instance_ + 93) & 1) == 0);
}

__int64

game_menu_anonymous_SystemMenuItem_Restart_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  _BYTE v8[200];

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v1 + 144) != 0) {
    v2 = 6;
  }
  else {
    v2 = 1;
  }
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 368LL * v2 + 284) == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(v1 + 8);
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = v3;
  }
  GameRoutine_65a020(v4);
  v5 = game_GameRestartData_unknown_;
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 368LL * v2 + 284) != 0) {
    *(_DWORD*)(game_GameRestartData_unknown_ + 8) = v2;
    *(_BYTE*)(v5 + 16) = 0;
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 14;
    }
  }
  snd_Fade_Fade_10c830(v8, 0.0f);
  snd_play_ff2d0((void*)(&v7), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v8, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v8);
  return 13;
}

#pragma GCC visibility pop
