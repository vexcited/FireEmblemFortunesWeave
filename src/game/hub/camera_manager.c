#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7c51c0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD GameData_21d925c[32];
extern __int64 (*GameData_1fd4ea0[])();
extern __int64 (*game_hub_CameraManager_vtable[])();
extern __int64 GameData_21c96a8;
extern __int64 GameData_21f3ca8;
extern int GameData_21d92dc;
extern int GameData_21d92e0;
extern int GameData_220f810;
__int64 CameraManager_Destructor(_QWORD* a1);

__int64 CameraManager_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;

  *a1 = game_hub_CameraManager_vtable;
  v2 = --GameData_21d92dc;
  GameData_21d92e0 = GameData_21d925c[v2];
  GameRoutine_7c51c0(a1);
  (*(void (**)(__int64))(*(_QWORD*)GameData_21c96a8 + 24LL))(GameData_21c96a8);
  result = GameData_21c96a8;
  if (GameData_21c96a8 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21c96a8 + 8LL))(
        GameData_21c96a8);
  }
  GameData_21c96a8 = 0;
  v4 = a1[5];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = a1[3];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  *a1 = GameData_1fd4ea0;
  if ((_QWORD*)GameData_21f3ca8 == a1) {
    GameData_21f3ca8 = 0;
    GameData_220f810 = 0;
  }
  return result;
}

#pragma GCC visibility pop
