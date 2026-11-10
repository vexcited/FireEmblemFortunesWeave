#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SceneCharacter_14020c0(__int64);
__attribute__((swiftcall)) void
SceneTalk_1497520(PSEUDO_X8, __int64, __int64, __int64, __int64, __int64, int);
__int64 GameRoutine_196e120();
__int64 SceneManager_138e5e0(__int64);
extern _UNKNOWN GameData_1ae1fdd;
extern __int64 GameData_212dce8;
__attribute__((swiftcall)) void
DiningArgs_Destructor(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__attribute__((swiftcall)) void

DiningArgs_Destructor(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _QWORD* v5;
  unsigned int v6;
  unsigned int v7;
  _QWORD* v8;
  const char* v9;
  const char* v11;

  if (a2 == 0) {
    goto LABEL_18;
  }
  v4 = result;
  result = GameRoutine_196e120();
  v5 = *(_QWORD**)(v4 + 8);
  if (*(_QWORD*)(*v5 + 392LL) == result) {
    v6 = 0;
  }
  else if (*(_QWORD*)(v5[1] + 392LL) == result) {
    v6 = 1;
  }
  else {
    if (*(_QWORD*)(v5[2] + 392LL) != result) {
    LABEL_18:
      *(_WORD*)a3 = 0;
      {
        result;
        return;
      }
    }
    v6 = 2;
  }
  result = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (result == 0) {
    goto LABEL_18;
  }
  v7 = *(unsigned __int8*)(v4 + v6 + 49);
  v8 = SceneCharacter_14020c0(result);
  v9 = (const char*)&GameData_1ae1fdd;
  if ((v7 & 0xFB) == 0) {
    v9 = "m03";
  }
  if (v7 > 5 || ((1 << v7) & 0x2C) == 0) {
    v11 = v9;
  }
  else {
    v11 = "m01";
  }
  {
    X8CALL_X0(__int64, SceneTalk_1497520((void*)(a3), (__int64)"Meal", 4,
                                         (__int64)v8, (__int64)v11, 3, 2));
    return;
  }
}

#pragma GCC visibility pop
