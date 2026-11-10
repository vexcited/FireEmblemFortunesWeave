#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f72800(_QWORD);
extern __int64 (*GameData_1ff7868[])();
extern __int64 (*game_hub_MapDivision_vtable[])();
extern __int64 GameData_220b6c8;
extern __int64* GameData_212f180;
extern int GameData_2213f78;
extern int GameData_22265d8;
__int64 MapDivision_Destructor(_QWORD* a1);
__int64 MapDivision_f72800(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 MapDivision_DeletingDestructor(_QWORD* a1);

__int64 MapDivision_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 result;

  *a1 = game_hub_MapDivision_vtable;
  v2 = GameData_212f180;
  v3 = *GameData_212f180;
  if (*GameData_212f180 != 0 && GameData_2213f78-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
    if (*v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
    }
    *v2 = 0;
  }
  result = GameRoutine_f72800(a1[2]);
  *a1 = GameData_1ff7868;
  if ((_QWORD*)GameData_220b6c8 == a1) {
    GameData_220b6c8 = 0;
    GameData_22265d8 = 0;
  }
  return result;
}

__n128 MapDivision_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;

  *a1 = game_hub_MapDivision_vtable;
  v2 = GameData_212f180;
  v3 = *GameData_212f180;
  if (*GameData_212f180 != 0 && GameData_2213f78-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
    if (*v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
    }
    *v2 = 0;
  }
  MapDivision_f72800(a1[2]);
  *a1 = GameData_1ff7868;
  if ((_QWORD*)GameData_220b6c8 == a1) {
    GameData_220b6c8 = 0;
    GameData_22265d8 = 0;
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

#pragma GCC visibility pop
