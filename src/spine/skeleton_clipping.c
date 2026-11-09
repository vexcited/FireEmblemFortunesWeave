#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10(_QWORD);
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
__int64 spine_Triangulator_Destroy_Triangulator_50d00(_QWORD);
extern __int64 (*GameData_2110158[])();
extern __int64 (*GameData_21101c8[])();
extern __int64 (*spine_SkeletonClipping_vtable[])();
__int64 SkeletonClipping_Destructor(_QWORD* a1);

__int64 SkeletonClipping_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = a1[55];
  *a1 = spine_SkeletonClipping_vtable;
  a1[52] = GameData_2110158;
  a1[53] = 0;
  if (v1 != 0) {
    v3 = GameRoutine_19e10(a1);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  v4 = spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 52);
  v5 = a1[51];
  a1[48] = GameData_2110158;
  a1[49] = 0;
  if (v5 != 0) {
    v6 = GameRoutine_19e10(v4);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v6 + 40LL))(
        v6, v5, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  v7 = spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 48);
  v8 = a1[47];
  a1[44] = GameData_21101c8;
  a1[45] = 0;
  if (v8 != 0) {
    v9 = GameRoutine_19e10(v7);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v9 + 40LL))(
        v9, v8, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  v10 = spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 44);
  v11 = a1[43];
  a1[40] = GameData_2110158;
  a1[41] = 0;
  if (v11 != 0) {
    v12 = GameRoutine_19e10(v10);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v12 +
                                                          40LL))(
        v12, v11, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  v13 = spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 40);
  v14 = a1[39];
  a1[36] = GameData_2110158;
  a1[37] = 0;
  if (v14 != 0) {
    v15 = GameRoutine_19e10(v13);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v15 +
                                                          40LL))(
        v15, v14, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  v16 = spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 36);
  v17 = a1[35];
  a1[32] = GameData_2110158;
  a1[33] = 0;
  if (v17 != 0) {
    v18 = GameRoutine_19e10(v16);
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v18 +
                                                          40LL))(
        v18, v17, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 32);
  spine_Triangulator_Destroy_Triangulator_50d00(a1 + 1);
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

#pragma GCC visibility pop
