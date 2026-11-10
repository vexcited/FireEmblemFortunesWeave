#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_196e120(_QWORD, _QWORD);
__int64 SceneCharacter_14020c0(void);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 SceneTalk_1497520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_21f4000;
__attribute__((swiftcall)) void ThermaeArgs_Destructor(PSEUDO_X8 x8_,
                                                       __int64 result,
                                                       __int64 a2,
                                                       unsigned int a3);

__attribute__((swiftcall)) void ThermaeArgs_Destructor(PSEUDO_X8 x8_,
                                                       __int64 result,
                                                       __int64 a2,
                                                       unsigned int a3)
{
  _WORD* a4 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  if (a2 != 0) {
    v5 = result;
    result = GameRoutine_196e120(a2, a3);
    v6 = *(_QWORD**)(v5 + 8);
    if (*(_QWORD*)(*v6 + 392LL) == result) {
      v7 = 0;
    }
    else {
      if (*(_QWORD*)(v6[1] + 392LL) != result) {
        goto LABEL_8;
      }
      v7 = 1;
    }
    result = SceneManager_138e5e0(GameData_21f4000, v7);
    if (result != 0) {
      v8 = SceneCharacter_14020c0();
      {
        SceneTalk_1497520("Thermae", 7, v8, "m01", 3, 3);
        return;
      }
    }
  }
LABEL_8:
  *a4 = 0;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
