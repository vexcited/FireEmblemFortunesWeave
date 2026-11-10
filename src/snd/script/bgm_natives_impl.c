#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_BGM_isPlaying(void);
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 game_sound_g_game_sound;
extern __int64* as_g_script_manager_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
_QWORD* snd_bgm_WaitDoneChangeCtrlBGM();
_QWORD* snd_bgm_EnableIgnoreStopBGM();
_QWORD* snd_bgm_DisableIgnoreStopBGM();

_QWORD* snd_bgm_WaitDoneChangeCtrlBGM()
{
  char v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 (*v4)(void);
  _QWORD* result;
  __int64 v6;

  v0 = snd_BGM_isPlaying();
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  else {
    v3 = 0;
  }
  v4 = *(__int64 (**)(void))(**(_QWORD**)(v3 + 24) + 448LL);
  if ((v0 & 1) == 0) {
    return (_QWORD*)v4();
  }
  v4();
  result = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (result == (_QWORD*)(v3 + 2208)) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(void))(*result + v6))();
}

_QWORD* snd_bgm_EnableIgnoreStopBGM()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;

  *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 3076) = 1;
  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(void))(*result + v4))();
}

_QWORD* snd_bgm_DisableIgnoreStopBGM()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;

  *(_BYTE*)(game_sound_g_game_sound + 3076) = 0;
  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
}

#pragma GCC visibility pop
