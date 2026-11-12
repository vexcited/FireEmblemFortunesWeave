#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_CharacterControllerBase_vtable)();
__n128 CharacterControllerBase_Destructor_alt1(_QWORD* a1) __asm__(
    "CharacterControllerBase_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 CharacterControllerBase_Destructor(_QWORD* a1);

__int64 CharacterControllerBase_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = &game_hub_CharacterControllerBase_vtable;
  result = a1[3];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

void __attribute__((noreturn)) CharacterControllerBase_DeletingDestructor()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
