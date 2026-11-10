#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CastFilter_Destructor(__int64 a1, __int64 a2, _QWORD* a3);

__int64 CastFilter_Destructor(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 result;
  __int64 v12;

  v3 = a3[2];
  if (v3 == 0) {
    return 0;
  }
  if ((**(unsigned int (***)(_QWORD))v3)(a3[2]) != 0) {
    if ((**(unsigned int (***)(__int64))v3)(v3) == 1 &&
        *(_BYTE*)(v3 + 8) != 1) {
      return 0;
    }
  LABEL_12:
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*a3 + 136LL))(
        (void*)(&v12), a3);
    if ((*(_QWORD*)(a1 + 8) & v12) != 0) {
      return 2;
    }
    else {
      return 0;
    }
  }
  v6 = *(_QWORD*)(v3 + 8);
  if (*(_BYTE*)(v6 + 184) != 1) {
    return 0;
  }
  v7 = *(_DWORD*)(v3 + 80);
  v8 = *(_QWORD*)(v6 + 96);
  do {
    v9 = v8 + 40LL * v7;
    v10 = *(unsigned __int8*)(v9 + 36);
    v7 = *(_DWORD*)(v9 + 32);
  } while ((v7 & 0x80000000) == 0 && v10 != 0);
  result = 0;
  if (v7 < 0 && (v10 & 1) != 0) {
    goto LABEL_12;
  }
  return result;
}

#pragma GCC visibility pop
