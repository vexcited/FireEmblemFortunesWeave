#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d1f7d0(__int64, __int64);
extern __int64 GameData_21f3cb0;
extern __int64 as_g_thread_info;
extern __int64* as_g_script_manager_ptr;
__int64 HubCameraNatives_e11540(float a1);
__int64 game_zview_d1f7d0(__int64, __int64);

__int64 HubCameraNatives_e11540(float a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  struct {
    float v8;
    char v9;
  } v8_;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  result = GameData_21f3cb0;
  if (*(_BYTE*)(GameData_21f3cb0 + 1136) != 0) {
    *(_BYTE*)(GameData_21f3cb0 + 1136) = 0;
    *(float*)(result + 1140) = a1;
    v8_.v8 = a1;
    v8_.v9 = 1;
    return game_zview_d1f7d0(result, (__int64)&v8_.v8);
  }
  return result;
}

#pragma GCC visibility pop
