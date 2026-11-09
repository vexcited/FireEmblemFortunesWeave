#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*cphysx_RigidActor_vtable)();
__int64 RigidActor_Destructor(_QWORD* a1);

__int64 RigidActor_Destructor(_QWORD* a1)
{
  __int64 result;

  result = a1[1];
  *a1 = &cphysx_RigidActor_vtable;
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
