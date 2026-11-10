#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_getPosition(_QWORD, _QWORD);
__int64 snd_isPlaying_1004b0(void);
__int64 snd_setPosition_100510(_QWORD, _QWORD);
extern __int64 GameData_212e2d8;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64* as_g_script_manager_ptr;
_QWORD* snd_se_WaitPrepared();
_QWORD* snd_se_SetPos(__int64 a1, __int128* a2);
_QWORD* snd_se_GetPos(__int64 a1, _QWORD* a2);

_QWORD* snd_se_WaitPrepared()
{
  char v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 (*v4)(void);
  _QWORD* result;
  __int64 v6;

  v0 = snd_isPlaying_1004b0();
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
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
}

_QWORD* snd_se_SetPos(__int64 a1, __int128* a2)
{
  __int128 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  _QWORD v8[2];
  int v9;

  v2 = *a2;
  v8[1] = *(_QWORD*)a2;
  v8[0] = GameData_212e2d8 + 16;
  v9 = DWORD2(v2);
  snd_setPosition_100510(a1, v8);
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

_QWORD* snd_se_GetPos(__int64 a1, _QWORD* a2)
{
  __int128 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;

  v11 = 0;
  v9 = GameData_212e2d8 + 16;
  v10 = 0;
  snd_getPosition(a1, &v9);
  *a2 = v10;
  v3 = *(_OWORD*)a2;
  *((_QWORD*)&v3 + 1) = v11;
  *(_OWORD*)a2 = v3;
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
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(void))(*result + v8))();
}

#pragma GCC visibility pop
