#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a0820(_QWORD*);
__int64 GameRoutine_14a0c60(_QWORD*, __int64);
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c840;
extern __int64 (*wld_RigidBodyModule_vtable[])();
extern __int64* GameData_212c838;
__int64 RigidBodyModule_Destructor(_QWORD* a1);

__int64 RigidBodyModule_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  __int64* v6;

  *a1 = wld_RigidBodyModule_vtable;
  if (a1[3] != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
      v6 = GameData_212c838;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = 0;
      *v6 = 0;
      v6[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v6) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v6) =
          (_UNKNOWN*)1065353216;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v6) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v6) = 0;
      GameRoutine_14a0820(v6);
      GameRoutine_2b0();
      __cxa_guard_release(GameData_212c840);
    }
    GameRoutine_14a0c60(GameData_212c838, a1[3]);
    v2 = a1[3];
    a1[3] = 0;
    if (v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    }
  }
  v3 = (_QWORD*)a1[10];
  if (v3 == a1 + 6) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_10;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_10:
  result = a1[3];
  a1[3] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

#pragma GCC visibility pop
