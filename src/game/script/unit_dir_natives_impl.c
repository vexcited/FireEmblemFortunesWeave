#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 UnitActor_81ab40(__int64, float, float);
__int64 as_string_c_str(__int64);
extern __int64 GameData_21ca310;
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
unsigned __int64 unit_dir_Set(__int64 a1, unsigned __int8 a2);

unsigned __int64 unit_dir_Set(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;

  result = as_string_c_str(a1);
  if (*(_BYTE*)result == 0) {
    return result;
  }
  result = GameRoutine_682bc0(&v15, result);
  if (v15 == 0) {
    return result;
  }
  result = *(_QWORD*)(GameData_21ca310 + 56);
  if (result == 0) {
    return result;
  }
  v4 = 250;
  while (1) {
    v5 = *(_QWORD*)(result + 440);
    if (v5 != 0) {
      v6 = *(unsigned __int8*)(v5 + 16);
      if (v6 != 9 && *(_QWORD*)(result + 392) == v15) {
        goto LABEL_25;
      }
    }
    v7 = *(_QWORD*)(result + 2664);
    if (v7 != 0) {
      v8 = *(unsigned __int8*)(v7 + 16);
      if (v8 != 9 && *(_QWORD*)(result + 2616) == v15) {
        result += 2224LL;
        if (v8 > 3) {
          return result;
        }
        goto LABEL_29;
      }
    }
    v9 = *(_QWORD*)(result + 4888);
    if (v9 != 0) {
      v6 = *(unsigned __int8*)(v9 + 16);
      if (v6 != 9 && *(_QWORD*)(result + 4840) == v15) {
        result += 4448LL;
      LABEL_25:
        if (v6 > 3) {
          return result;
        }
        goto LABEL_29;
      }
    }
    v10 = *(_QWORD*)(result + 7112);
    if (v10 != 0) {
      v11 = *(unsigned __int8*)(v10 + 16);
      if (v11 != 9 && *(_QWORD*)(result + 7064) == v15) {
        break;
      }
    }
    v12 = *(_QWORD*)(result + 9336);
    if (v12 != 0) {
      v11 = *(unsigned __int8*)(v12 + 16);
      if (v11 != 9 && *(_QWORD*)(result + 9288) == v15) {
        v13 = 8896;
        goto LABEL_28;
      }
    }
    result += 11120LL;
    v4 -= 5;
    if (v4 == 0) {
      return result;
    }
  }
  v13 = 6672;
LABEL_28:
  result += v13;
  if (v11 > 3) {
    return result;
  }
LABEL_29:
  if (a2 > 5u) {
    if (a2 > 8u) {
      if (a2 == 9) {
        v14 = 0x1.0e00000000000p+7f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
      if (a2 == 12) {
        v14 = 0x1.6800000000000p+5f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
    }
    else {
      if (a2 == 6) {
        v14 = 0x1.3b00000000000p+8f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
      if (a2 == 8) {
        v14 = 0x1.6800000000000p+6f;
        return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
      }
    }
  LABEL_47:
    v14 = 0x0.0p+0f;
    return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
  }
  if (a2 > 1u) {
    if (a2 == 2) {
      v14 = 0x1.0e00000000000p+8f;
      return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
    }
    if (a2 == 3) {
      v14 = 0x1.c200000000000p+7f;
      return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
    }
    goto LABEL_47;
  }
  if (a2 != 0) {
    v14 = 0x1.6800000000000p+7f;
    return UnitActor_81ab40(result, v14, -0x1.0000000000000p+0f);
  }
  return result;
}

#pragma GCC visibility pop
