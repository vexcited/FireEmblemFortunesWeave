#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21cd130;
extern __int64 GameData_21cd140;
__int64 Impl_Destructor_969c50();
__int64 Impl_DeletingDestructor_969cc0();

__int64 Impl_Destructor_969c50()
{
  __int64 result;
  int v1;
  __int64 v2;
  int v3;

  result = GameData_21cd130;
  v1 = *(_DWORD*)(GameData_21cd130 + 40);
  *(_DWORD*)(GameData_21cd130 + 40) = v1 + 1;
  if (v1 == 0) {
    result = (**(__int64 (***)(__int64))(result + 32))(result + 32);
  }
  v2 = GameData_21cd140;
  v3 = *(_DWORD*)(GameData_21cd140 + 424);
  *(_DWORD*)(GameData_21cd140 + 424) = v3 + 1;
  if (v3 == 0) {
    return (**(__int64 (***)(__int64))(v2 + 416))(v2 + 416);
  }
  return result;
}

__int64 Impl_DeletingDestructor_969cc0()
{
  __int64 result;
  int v1;
  __int64 v2;
  int v3;

  result = GameData_21cd130;
  v1 = *(_DWORD*)(GameData_21cd130 + 40) - 1;
  *(_DWORD*)(GameData_21cd130 + 40) = v1;
  if (v1 == 0) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(result + 32) + 8LL))(result + 32);
  }
  v2 = GameData_21cd140;
  v3 = *(_DWORD*)(GameData_21cd140 + 424) - 1;
  *(_DWORD*)(GameData_21cd140 + 424) = v3;
  if (v3 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(v2 + 416) + 8LL))(v2 + 416);
  }
  return result;
}

#pragma GCC visibility pop
