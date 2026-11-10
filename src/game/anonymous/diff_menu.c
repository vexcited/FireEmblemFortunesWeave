#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_1fbb878;
extern __int64* GameData_212e008[9];
__int64 DiffMenu_a09f90(__int64 a1);
__int64 DiffMenu_a0a000(__int64 a1);
bool game_anonymous_DiffMenu_CreateBind_closure_Invoke(__int64 a1, __int64 a2);

__int64 DiffMenu_a09f90(__int64 a1)
{
  __int64 v1;
  __int64 result;
  char v3;

  v1 = *(_QWORD*)(a1 + 1088);
  if (v1 == 0) {
    return 0;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_1fbb878, 0);
    if (result != 0) {
      v3 = *(_BYTE*)(result + 83);
      (*(void (**)(__int64, char*))(*(_QWORD*)v1 + 48LL))(v1, &v3);
      return 2;
    }
  }
  return result;
}

__int64 DiffMenu_a0a000(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 1136);
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    return 3;
  }
  return result;
}

bool game_anonymous_DiffMenu_CreateBind_closure_Invoke(__int64 a1, __int64 a2)
{
  return *(unsigned __int8*)(*(_QWORD*)a2 + 83LL) ==
         *(unsigned __int8*)(a1 + 8);
}

#pragma GCC visibility pop
