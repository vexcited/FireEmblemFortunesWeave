#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10();
__int64 spine_SpineObject_Destroy_SpineObject_4e8a0(_QWORD);
extern __int64 (*spine_String_vtable[])();
extern __int64* GameData_2132b48[5];
__int64 SlotData_Destructor(__int64 a1);

__int64 SlotData_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = GameData_2132b48[0] + 2;
  v2 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 112) = spine_String_vtable;
  v3 = a1 + 112;
  if (v2 != 0 && (*(_BYTE*)(a1 + 136) & 1) != 0) {
    v4 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v4 + 40LL))(
        v4, v2, "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(v3);
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 80);
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 56);
  *(_QWORD*)(a1 + 16) = spine_String_vtable;
  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0 && (*(_BYTE*)(a1 + 40) & 1) != 0) {
    v6 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v6 + 40LL))(
        v6, v5, "/Program/Externals/Spine/include\\spine/SpineString.h", 206);
  }
  spine_SpineObject_Destroy_SpineObject_4e8a0(a1 + 16);
  return spine_SpineObject_Destroy_SpineObject_4e8a0(a1);
}

#pragma GCC visibility pop
