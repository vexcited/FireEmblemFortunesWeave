#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e8510(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 game_sound_g_game_sound;
_QWORD* snd_effect_Setup(__int64 a1);

_QWORD* snd_effect_Setup(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;

  v1 = game_sound_g_game_sound;
  v2 = as_string_c_str(a1);
  GameRoutine_e8510(v1, v2);
  v3 = as_g_script_manager;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v4 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  }
  else {
    v5 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 24) + 448LL))(
      *(_QWORD*)(v5 + 24), 1);
  result = *(_QWORD**)(v5 + 2240);
  *(_QWORD*)(v5 + 2240) = 0;
  if (result == (_QWORD*)(v5 + 2208)) {
    v7 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
}

#pragma GCC visibility pop
