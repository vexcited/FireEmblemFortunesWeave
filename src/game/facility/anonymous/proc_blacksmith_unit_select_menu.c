#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e2280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
__int64 ProcBlacksmithUnitSelectMenu_Unknown147(__int64 a1, char a2);
__int64 BasicMenu_16e2280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcBlacksmithUnitSelectMenu_Unknown148(__int64 a1, char a2);

__int64 ProcBlacksmithUnitSelectMenu_Unknown147(__int64 a1, char a2)
{
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 result;
  _QWORD* v8;

  v4 = 0;
  v5 = GameData_212e008[0];
  v6 = GameData_212e0c8[0];
  while (v4 < (int)((*(_QWORD*)(a1 + 240) - *(_QWORD*)(a1 + 232)) >> 3)) {
    result = GameRoutine_16e2280(a1, (unsigned int)v4, 0, 0);
    if (result != 0) {
      result = __dynamic_cast(result, v5, v6, 0);
      if (result != 0) {
        v8 = (_QWORD*)result;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result) & 1) !=
                0 &&
            ((*(__int64 (**)(_QWORD*))(*v8 + 40LL))(v8) & 1) != 0 &&
            ((a2 & 1) != 0 ||
             ((*(__int64 (**)(_QWORD*))(*v8 + 464LL))(v8) & 1) != 0)) {
          result = v8[11];
        }
        else {
          result = 0;
        }
      }
    }
    ++v4;
    if (result != 0) {
      return result;
    }
  }
  return 0;
}

__int64 ProcBlacksmithUnitSelectMenu_Unknown148(__int64 a1, char a2)
{
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 result;
  bool v8;
  _QWORD* v9;

  v4 = GameData_212e008[0];
  v5 = GameData_212e0c8[0];
  v6 = (*(_QWORD*)(a1 + 240) - *(_QWORD*)(a1 + 232)) >> 3;
  while (1) {
    v8 = __OFSUB__((_DWORD)v6, 1);
    LODWORD(v6) = v6 - 1;
    if ((int)v6 < 0 != v8) {
      break;
    }
    result = BasicMenu_16e2280(a1, (unsigned int)v6, 0, 0);
    if (result != 0) {
      result = __dynamic_cast(result, v4, v5, 0);
      if (result != 0) {
        v9 = (_QWORD*)result;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result) & 1) !=
                0 &&
            ((*(__int64 (**)(_QWORD*))(*v9 + 40LL))(v9) & 1) != 0 &&
            ((a2 & 1) != 0 ||
             ((*(__int64 (**)(_QWORD*))(*v9 + 464LL))(v9) & 1) != 0)) {
          result = v9[11];
        }
        else {
          result = 0;
        }
      }
    }
    if (result != 0) {
      return result;
    }
  }
  return 0;
}

#pragma GCC visibility pop
