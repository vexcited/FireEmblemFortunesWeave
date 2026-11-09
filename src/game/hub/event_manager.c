#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cbcbe0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd48f8[])();
extern __int64 (*game_hub_EventManager_vtable[])();
extern __int64 GameData_21f3c98;
extern int GameData_220b700;
__int64 EventManager_Destructor(_QWORD* a1);

__int64 EventManager_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 j;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = a1[15];
  a1[14] = 0;
  a1[15] = 0;
  *a1 = game_hub_EventManager_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = (_QWORD*)a1[19];
  if (v3 != a1 + 20) {
    do {
      v4 = v3[7];
      for (i = v3[8]; i != v4; i -= 16) {
        v10 = *(_QWORD*)(i - 8);
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      v3[8] = v4;
      v6 = v3[10];
      for (j = v3[11]; j != v6; j -= 16) {
        v11 = *(_QWORD*)(j - 8);
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      v8 = (_QWORD*)v3[1];
      v3[11] = v6;
      if (v8 != nullptr) {
        do {
          v9 = v8;
          v8 = (_QWORD*)*v8;
        } while (v8 != nullptr);
      }
      else {
        do {
          v9 = (_QWORD*)v3[2];
          v12 = v3 == (_QWORD*)*v9;
          v3 = v9;
        } while (!v12);
      }
      v3 = v9;
    } while (v9 != a1 + 20);
  }
  result = GameRoutine_cbcbe0(a1[20]);
  v14 = a1[17];
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  v15 = a1[15];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    result = std___1___shared_weak_count___release_weak(v15);
  }
  v16 = a1[13];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  *a1 = GameData_1fd48f8;
  if ((_QWORD*)GameData_21f3c98 == a1) {
    GameData_21f3c98 = 0;
    GameData_220b700 = 0;
  }
  return result;
}

#pragma GCC visibility pop
