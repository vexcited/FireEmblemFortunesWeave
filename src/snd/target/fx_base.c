#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_2134b88;
extern __int64* GameData_2134820[3];
extern __int64* GameData_2134b90[6];
extern __int64* snd_g_memory_ptr[2];
__int64* FxBase_Destructor();
_QWORD* FxBase_DeletingDestructor(_QWORD* result);

__int64* FxBase_Destructor()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2134b88,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_2134b90[0];
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_2134b88) != 0) {
    *GameData_2134b90[0] = 0;
    __cxa_guard_release(GameData_2134b88);
  }
  return GameData_2134b90[0];
}

_QWORD* FxBase_DeletingDestructor(_QWORD* result)
{
  _QWORD* v1;
  void (***v2)(_QWORD);
  __int64* v3;
  void (***v4)(_QWORD);
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);

  v1 = result;
  v2 = (void (***)(_QWORD))result[1];
  *result = GameData_2134820[0] + 2;
  v3 = snd_g_memory_ptr[0];
  if (v2 != nullptr) {
    result[1] = 0;
    (**v2)(v2);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v2);
  }
  v4 = (void (***)(_QWORD))v1[2];
  if (v4 != nullptr) {
    v1[2] = 0;
    (**v4)(v4);
    result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v4);
    v5 = (void (***)(_QWORD))v1[2];
    v1[2] = 0;
    if (v5 != nullptr) {
      (**v5)(v5);
      result = (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
          *(_QWORD*)*v3 + 24LL))(*v3, v5);
    }
  }
  v6 = (void (***)(_QWORD))v1[1];
  v1[1] = 0;
  if (v6 != nullptr) {
    (**v6)(v6);
    return (_QWORD*)(*(__int64 (**)(__int64, void (***)(_QWORD)))(
        *(_QWORD*)*v3 + 24LL))(*v3, v6);
  }
  return result;
}

#pragma GCC visibility pop
