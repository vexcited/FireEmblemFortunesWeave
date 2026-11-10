#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation();
__int64 physx_NpAggregate_setEnvironmentID(__int64 a1, int a2);

__int64 physx_NpAggregate_setEnvironmentID(__int64 a1, int a2)
{
  __int64 v2;
  __int64 v4;

  if ((unsigned int)(a2 - 0x1000000) > 0xFEFFFFFE) {
    if (*(_QWORD*)(a1 + 24) != 0) {
      v4 = PxGetFoundation();
      return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                             const char*))(*(_QWORD*)v4 + 88LL))(
          v4, 8, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpAggregate.cpp",
          507,
          "PxAggregate::setEnvironmentID: environment ID cannot be set while "
          "the aggregate is in a scene.");
    }
    else {
      *(_DWORD*)(a1 + 56) = a2;
      return 1;
    }
  }
  else {
    v2 = PxGetFoundation();
    return (*(__int64 (**)(__int64, __int64, const char*, __int64,
                           const char*))(*(_QWORD*)v2 + 88LL))(
        v2, 4, "/Inside/Lib/PhysX/O/physx/source/physx/src/NpAggregate.cpp",
        503,
        "PxAggregate::setEnvironmentID: environment ID must be smaller than "
        "1<<24.");
  }
}

#pragma GCC visibility pop
