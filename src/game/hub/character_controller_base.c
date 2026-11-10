#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_CharacterControllerBase_vtable)();
__n128 CharacterControllerBase_Destructor(_QWORD* a1);

void __attribute__((noreturn)) CharacterControllerBase_DeletingDestructor()
{
  __udf(0x8002u);
};

__n128 CharacterControllerBase_Destructor(_QWORD* a1)
{
  __int64 v1;
  __n128 result;

  *a1 = &game_hub_CharacterControllerBase_vtable;
  v1 = a1[3];
  if (v1 != 0) {
    return std___1___shared_weak_count___release_weak(v1);
  }
  return result;
}

#pragma GCC visibility pop
