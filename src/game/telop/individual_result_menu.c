#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* ListResultMenuBase_1754800(__int64);
__int64 GameRoutine_7fa250(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8c4ee0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20bb360;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212e008[9];
_DWORD* IndividualResultMenu_Unknown138(__int64 a1, char a2);
__int64 GameHr_7fa250(__int64, __int64*, __int64);
bool GameRoutine_8c4ee0_alt1(__int64) __asm__("GameRoutine_8c4ee0");

_DWORD* IndividualResultMenu_Unknown138(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  int v5;
  int v6;
  struct {
    __int16 v8;
    char v9;
  } v8_;

  if ((a2 & 1) == 0) {
    return ListResultMenuBase_1754800(a1);
  }
  if (*(_QWORD*)(a1 + 336) == 0) {
    return ListResultMenuBase_1754800(a1);
  }
  v2 = a1;
  v3 = __dynamic_cast(*(_QWORD*)(a1 + 336), GameData_212e008[0],
                      &GameData_20bb360, 0);
  a1 = v2;
  if (v3 == 0) {
    return ListResultMenuBase_1754800(a1);
  }
  v4 = GameRoutine_8c4ee0_alt1(v3 + 416);
  a1 = v2;
  if (!v4) {
    return ListResultMenuBase_1754800(a1);
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v5 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    if ((v6 & v5) == 0) {
      *(_BYTE*)(v3 + 506) = 3;
    }
  }
  v8_.v9 = 0;
  v8_.v8 = 257;
  return (_DWORD*)GameHr_7fa250(v2, (__int64*)(v3 + 416), (__int64)&v8_.v8);
}

#pragma GCC visibility pop
