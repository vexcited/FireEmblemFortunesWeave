#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
extern __int64 (*GameData_1f50c08[])();
extern __int64 (*GameData_1f50c40[])();
__int64 TrackEntry_e970(_QWORD* a1);
__int64 TrackEntry_e9d0(_QWORD* a1);

__int64 TrackEntry_e970(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_1f50c40;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

__int64 TrackEntry_e9d0(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_1f50c08;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

#pragma GCC visibility pop
