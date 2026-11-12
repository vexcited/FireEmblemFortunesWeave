#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 PxGetFoundation();
__int64 physx_source_geomutils_src_cooking_543ae0();

__int64 physx_source_geomutils_src_cooking_543ae0()
{
  __int64 v0;

  v0 = PxGetFoundation();
  return (*(__int64 (**)(__int64, __int64, const char*, __int64, const char*))(
      *(_QWORD*)v0 + 88LL))(
      v0, 2,
      "/Inside/Lib/PhysX/O/physx/source/geomutils/src/cooking/"
      "GuCookingConvexMeshBuilder.cpp",
      263,
      "Gu::ConvexMesh: Mesh has a negative volume! Is it open or do (some) "
      "faces have reversed winding? (Taking absolute value.)");
}

#pragma GCC visibility pop
