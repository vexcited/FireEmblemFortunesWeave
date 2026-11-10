#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1890220(__int64, int, int, int, char, char, int);
_QWORD* StatusNum_1890080(__int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParamLimit(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
_QWORD* StatusHP_18920d0(_QWORD* a1, __int64 a2, char a3);
_QWORD* StatusHP_18922b0(_QWORD* a1);

_QWORD* StatusHP_18920d0(_QWORD* a1, __int64 a2, char a3)
{
  __int64 v4;
  _QWORD* result;
  __int64 v8;
  _QWORD* v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BYTE v16[4];
  _BYTE v17[4];
  _QWORD v18[4];
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  if (a2 != 0) {
    v4 = a1[136];
    a1[135] = a2;
    if (v4 != 0) {
      GameRoutine_156c910(v4, "%d", 1);
    }
    result = (_QWORD*)a1[138];
    if (result != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count_lock(result);
      if (result != nullptr) {
        v8 = a1[137];
        v9 = result;
        if (v8 != 0) {
          LOBYTE(v18[0]) = 0;
          v10 = game_Unit_GetParam(a2, v18, 1);
          v17[0] = 0;
          v11 = game_Unit_GetParam(a2, v17, 0);
          v16[0] = 0;
          v12 = game_Unit_GetParamLimit(a2, v16);
          result = GameRoutine_1890220(v8, v10, v11, v12, a3 & 1, 0, -1);
        }
      LABEL_14:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(_QWORD*))(*v9 + 16LL))(v9);
          return (_QWORD*)std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }
  else {
    v13 = a1[136];
    if (v13 != 0) {
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v14 = *msg_MessageManager_instance__ptr[0];
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v32 = -1;
      v18[0] = GameData_212e348 + 2;
      v18[1] = 0xFFFF0001FFFF0000LL;
      v18[2] = 0xFFFF0004FFFF0002LL;
      v18[3] = 0xFFFF0006FFFF0005LL;
      v33 = 8;
      v19 = -65529;
      v20 = -65528;
      v15 = GameRoutine_a4dbe0(v14, "MID_Sys_ValueEmpty", 0, v18);
      GameRoutine_156c5d0(v13, v15, 0);
    }
    result = (_QWORD*)a1[138];
    if (result != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count_lock(result);
      if (result != nullptr) {
        v9 = result;
        result = (_QWORD*)a1[137];
        if (result != nullptr) {
          result = StatusNum_1890080((__int64)result);
        }
        goto LABEL_14;
      }
    }
  }
  return result;
}

_QWORD* StatusHP_18922b0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  _QWORD* v6;
  _QWORD v7[4];
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v1 = a1[136];
  if (v1 != 0) {
    v10 = -1;
    v11 = -1;
    v12 = -1;
    v13 = -1;
    v3 = *msg_MessageManager_instance__ptr[0];
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v7[0] = GameData_212e348 + 2;
    v7[1] = 0xFFFF0001FFFF0000LL;
    v7[2] = 0xFFFF0004FFFF0002LL;
    v7[3] = 0xFFFF0006FFFF0005LL;
    v22 = 8;
    v8 = -65529;
    v9 = -65528;
    v4 = GameRoutine_a4dbe0(v3, "MID_Sys_ValueEmpty", 0, v7);
    GameRoutine_156c5d0(v1, v4, 0);
  }
  result = (_QWORD*)a1[138];
  if (result != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v6 = result;
      result = (_QWORD*)a1[137];
      if (result != nullptr) {
        result = StatusNum_1890080((__int64)result);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v6 + 16LL))(v6);
        return (_QWORD*)std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
