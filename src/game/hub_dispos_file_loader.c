#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ca7f00(_QWORD);
__int64 hub_ResetDisposition(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd3ca8[])();
extern __int64 (*game_HubDisposFileLoader_vtable[])();
extern __int64 GameData_21c9720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220b6b0;
__int64 HubDisposFileLoader_Destructor(_QWORD* a1);
__int64 HubDisposFileLoader_DeletingDestructor(_QWORD* a1);

__int64 HubDisposFileLoader_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 result;
  _QWORD* v5;
  _QWORD* v6;
  bool v7;

  v1 = (_QWORD*)a1[1];
  v2 = a1 + 2;
  *a1 = game_HubDisposFileLoader_vtable;
  if (v1 != a1 + 2) {
    do {
      hub_ResetDisposition(v1[7]);
      v5 = (_QWORD*)v1[1];
      if (v5 != nullptr) {
        do {
          v6 = v5;
          v5 = (_QWORD*)*v5;
        } while (v5 != nullptr);
      }
      else {
        do {
          v6 = (_QWORD*)v1[2];
          v7 = v1 == (_QWORD*)*v6;
          v1 = v6;
        } while (!v7);
      }
      v1 = v6;
    } while (v6 != v2);
  }
  result = GameRoutine_ca7f00(a1[2]);
  a1[2] = 0;
  a1[3] = 0;
  *a1 = GameData_1fd3ca8;
  a1[1] = v2;
  if ((_QWORD*)GameData_21c9720 == a1) {
    GameData_21c9720 = 0;
    GameData_220b6b0 = 0;
  }
  return result;
}

__int64 HubDisposFileLoader_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  _QWORD* v6;
  _QWORD* v7;
  bool v8;

  v1 = (_QWORD*)a1[1];
  v2 = a1 + 2;
  *a1 = game_HubDisposFileLoader_vtable;
  if (v1 != a1 + 2) {
    do {
      hub_ResetDisposition(v1[7]);
      v6 = (_QWORD*)v1[1];
      if (v6 != nullptr) {
        do {
          v7 = v6;
          v6 = (_QWORD*)*v6;
        } while (v6 != nullptr);
      }
      else {
        do {
          v7 = (_QWORD*)v1[2];
          v8 = v1 == (_QWORD*)*v7;
          v1 = v7;
        } while (!v8);
      }
      v1 = v7;
    } while (v7 != v2);
  }
  GameRoutine_ca7f00(a1[2]);
  a1[2] = 0;
  a1[3] = 0;
  *a1 = GameData_1fd3ca8;
  a1[1] = v2;
  if ((_QWORD*)GameData_21c9720 == a1) {
    GameData_21c9720 = 0;
    GameData_220b6b0 = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
