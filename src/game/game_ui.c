#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_17363e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18acaf0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*ui_Event_vtable[])();
extern __int64 GameData_212d8b0[3];
extern __int64 game_gameui_Footer_instance_;
extern __int64 ui_Manager_instance_;
extern int GameData_22593dc;
extern int GameData_22593f8;
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64 game_GameUI_Setup_lambda1_Invoke(__int64 a1, _DWORD* a2, int* a3);
_QWORD* game_GameUI_Setup_lambda2_Invoke();
_QWORD* game_GameUI_Setup_lambda3_Invoke();
void game_GameUI_Setup_lambda4_Invoke();

__int64 game_GameUI_Setup_lambda1_Invoke(__int64 a1, _DWORD* a2, int* a3)
{
  if (*a2 == 5) {
    a3 = &GameData_22593f8;
  }
  else if (*a2 == 4) {
    return (unsigned int)GameData_22593dc;
  }
  return (unsigned int)*a3;
}

_QWORD* game_GameUI_Setup_lambda2_Invoke()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[25];

  snd_Fade_Fade_10c830(v4, 0.0f);
  *(struct PseudoSret*)(v3) =
      snd_play_ff2d0("VIB_MouseOn", "VIB_MouseOn", v4, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  v4[0] = "MID_Mouse_Notice";
  v4[1] = 16;
  GameRoutine_17363e0(1, v4, 1);
  result = (_QWORD*)GameRoutine_18acaf0(*(_QWORD*)GameData_212d8b0[0], 1);
  if (game_gameui_Footer_instance_ != 0) {
    result = *(_QWORD**)(game_gameui_Footer_instance_ + 480);
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(result);
    }
  }
  v4[2] = 0;
  v4[0] = ui_Event_vtable;
  LODWORD(v4[1]) = 46;
  v1 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v2 = ui_Manager_instance_ + 1240;
  while (v1 != v2) {
    result = *(_QWORD**)(v1 + 16);
    if (result != nullptr) {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *result + 16LL))(v3, result, v4);
    }
    v1 = *(_QWORD*)(v1 + 8);
  }
  return result;
}

_QWORD* game_GameUI_Setup_lambda3_Invoke()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[25];

  snd_Fade_Fade_10c830(v4, 0.0f);
  *(struct PseudoSret*)(v3) = snd_play_ff2d0("VIB_MouseOff", "VIB_MouseOff", v4,
                                             0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  v4[0] = "MID_Mouse_Notice";
  v4[1] = 16;
  GameRoutine_17363e0(1, v4, 0);
  result = (_QWORD*)GameRoutine_18acaf0(*(_QWORD*)GameData_212d8b0[0], 0);
  if (game_gameui_Footer_instance_ != 0) {
    result = *(_QWORD**)(game_gameui_Footer_instance_ + 480);
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(result);
    }
  }
  v4[2] = 0;
  v4[0] = ui_Event_vtable;
  LODWORD(v4[1]) = 46;
  v1 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v2 = ui_Manager_instance_ + 1240;
  while (v1 != v2) {
    result = *(_QWORD**)(v1 + 16);
    if (result != nullptr) {
      result = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *result + 16LL))(v3, result, v4);
    }
    v1 = *(_QWORD*)(v1 + 8);
  }
  return result;
}

void game_GameUI_Setup_lambda4_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 (**v4)();
  int v5;
  __int64 v6;
  __int64 var4;

  v6 = 0;
  v4 = ui_Event_vtable;
  v5 = 46;
  v0 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v1 = ui_Manager_instance_ + 1240;
  while (v0 != v1) {
    v2 = *(_QWORD*)(v0 + 16);
    if (v2 != 0) {
      (*(void (**)(__int64* __return_ptr, __int64, __int64 (***)()))(
          *(_QWORD*)v2 + 16LL))(&var4, v2, &v4);
    }
    v0 = *(_QWORD*)(v0 + 8);
  }
  if (game_gameui_Footer_instance_ != 0) {
    v3 = *(_QWORD*)(game_gameui_Footer_instance_ + 480);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
    }
  }
}

#pragma GCC visibility pop
