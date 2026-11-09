#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_717b40(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2042fd8[])();
extern __int64 (*GameData_2043fd8[])();
extern __int64 (*GameData_2044078[])();
extern __int64 (*game_facility_anonymous_Impl_vtable[])();
extern __int64 GameData_21ca208;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd0d8;
extern __int64 GameData_224ade8;
extern __int64 GameData_224b470;
extern __int64 GameData_224b478;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_2131288;
extern int GameData_224ade4;
__int64 Impl_Destructor_14870f0(_QWORD* a1);
__int64 Impl_Destructor_1499ce0(_QWORD* a1);
_QWORD* Impl_1499ec0(_QWORD* result);
__int64 Impl_Destructor_149a1f0(_QWORD* a1);
__int64 Impl_DeletingDestructor_149a240(_QWORD* a1);

__int64 Impl_Destructor_14870f0(_QWORD* a1)
{
  __int64* v2;
  __int64 result;

  *a1 = game_facility_anonymous_Impl_vtable;
  v2 = GameData_2131288;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2131288 + 24LL))(*GameData_2131288);
  result = *v2;
  if (*v2 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *v2 = 0;
  *a1 = GameData_2042fd8;
  if ((_QWORD*)GameData_224ade8 == a1) {
    GameData_224ade8 = 0;
    GameData_224ade4 = 0;
  }
  return result;
}

__int64 Impl_Destructor_1499ce0(_QWORD* a1)
{
  __int64* v2;
  __int64 result;

  *a1 = game_facility_anonymous_Impl_vtable;
  v2 = GameData_212cfb8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_212cfb8[0] + 24LL))(
      *GameData_212cfb8[0]);
  if (*v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
  }
  *v2 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2e8 + 24LL))(GameData_21ca2e8);
  if (GameData_21ca2e8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2e8 + 8LL))(GameData_21ca2e8);
  }
  GameData_21ca2e8 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca300 + 24LL))(GameData_21ca300);
  if (GameData_21ca300 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca300 + 8LL))(GameData_21ca300);
  }
  GameData_21ca300 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2f8 + 24LL))(GameData_21ca2f8);
  if (GameData_21ca2f8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21ca2f8 + 8LL))(GameData_21ca2f8);
  }
  GameData_21ca2f8 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21cd0d8 + 24LL))(GameData_21cd0d8);
  if (GameData_21cd0d8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21cd0d8 + 8LL))(GameData_21cd0d8);
  }
  GameData_21cd0d8 = 0;
  (*(void (**)(__int64))(*(_QWORD*)GameData_21ca208 + 24LL))(GameData_21ca208);
  result = GameData_21ca208;
  if (GameData_21ca208 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21ca208 + 8LL))(
        GameData_21ca208);
  }
  GameData_21ca208 = 0;
  *a1 = GameData_2043fd8;
  if ((_QWORD*)GameData_224b470 == a1) {
    GameData_224b470 = 0;
  }
  return result;
}

_QWORD* Impl_1499ec0(_QWORD* result)
{
  *result = GameData_2043fd8;
  if ((_QWORD*)GameData_224b470 == result) {
    GameData_224b470 = 0;
  }
  return result;
}

__int64 Impl_Destructor_149a1f0(_QWORD* a1)
{
  __int64 result;

  *a1 = game_facility_anonymous_Impl_vtable;
  result = GameRoutine_717b40();
  *a1 = GameData_2044078;
  if ((_QWORD*)GameData_224b478 == a1) {
    GameData_224b478 = 0;
  }
  return result;
}

__int64 Impl_DeletingDestructor_149a240(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_facility_anonymous_Impl_vtable;
  GameRoutine_717b40();
  if ((_QWORD*)GameData_224b478 == a1) {
    GameData_224b478 = 0;
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
