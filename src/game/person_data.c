#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1f909e0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_PersonData_EachLearnSkill_lambda0_Clone(__int64 a1);
__int64 game_PersonData_EachLearnSkill_lambda0_Invoke(__int64 result,
                                                      __int64 a2);

_QWORD* game_PersonData_EachLearnSkill_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1f909e0;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_PersonData_EachLearnSkill_lambda0_Invoke(__int64 result,
                                                      __int64 a2)
{
  __int64 v2;
  __int64 v3;

  if (*(_QWORD*)(*(_QWORD*)a2 + 48LL) != 0) {
    v2 = *(_QWORD*)(result + 48);
    v3 = *(_QWORD*)(*(_QWORD*)a2 + 48LL);
    if (v2 == 0) {
      GameRoutine_60a310(0);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v3);
  }
  return result;
}

#pragma GCC visibility pop
