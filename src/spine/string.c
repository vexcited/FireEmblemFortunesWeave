#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10(void);
__int64 GameRoutine_4e860(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
extern __int64 (*spine_String_vtable[])();
extern __int64* GameData_21322b8[2];
__int64 String_Destructor(__int64 a1);
__int64 String_DeletingDestructor(__int64 a1);

__int64 String_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = spine_String_vtable;
  if (v1 != 0 && (*(_BYTE*)(a1 + 24) & 1) != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
    a1 = v2;
  }
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

__int64 String_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)a1 = GameData_21322b8[0] + 2;
  if (v2 != 0 && (*(_BYTE*)(a1 + 24) & 1) != 0) {
    v3 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v2, "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
  return GameRoutine_4e860(a1);
}

#pragma GCC visibility pop
