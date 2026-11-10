#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN** SdkData_e89c30;
extern __int64 (*SdkData_1040cf0)(__int64, __int64, __int128*, __int128*,
                                  __int128*);
extern __int64 (*SdkData_1040cf8)(__int64, __int64, __int128*, __int128*,
                                  __int128*);
__int64 nvn_cpp_procedures_6514b0(__int64 a1, __int64 a2, __int128* a3,
                                  __int128* a4, __int128* a5);
__int64 nvn_cpp_procedures_651520(__int64 a1, __int64 a2, __int128* a3,
                                  __int128* a4, __int128* a5);
__int64 nvn_cpp_procedures_652cf0(__int64 a1, __int64 a2, unsigned int a3);

__int64 nvn_cpp_procedures_6514b0(__int64 a1, __int64 a2, __int128* a3,
                                  __int128* a4, __int128* a5)
{
  __int128 v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  __int128 v9;
  __int128 v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int128 v15;
  __int64 v16;

  v5 = *a3;
  v16 = *((_QWORD*)a3 + 2);
  v6 = *((_QWORD*)a4 + 2);
  v15 = v5;
  v7 = *a4;
  v14 = v6;
  v8 = *((_QWORD*)a5 + 2);
  v13 = v7;
  v9 = *a5;
  v12 = v8;
  v11 = v9;
  return SdkData_1040cf0(a1, a2, &v15, &v13, &v11);
}

__int64 nvn_cpp_procedures_651520(__int64 a1, __int64 a2, __int128* a3,
                                  __int128* a4, __int128* a5)
{
  __int128 v5;
  __int64 v6;
  __int128 v7;
  __int64 v8;
  __int128 v9;
  __int128 v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int128 v15;
  __int64 v16;

  v5 = *a3;
  v16 = *((_QWORD*)a3 + 2);
  v6 = *((_QWORD*)a4 + 2);
  v15 = v5;
  v7 = *a4;
  v14 = v6;
  v8 = *((_QWORD*)a5 + 2);
  v13 = v7;
  v9 = *a5;
  v12 = v8;
  v11 = v9;
  return SdkData_1040cf8(a1, a2, &v15, &v13, &v11);
}

__int64 nvn_cpp_procedures_652cf0(__int64 a1, __int64 a2, unsigned int a3)
{
  return (*(__int64 (**)(__int64, __int64, _QWORD))(
      (char*)((_UNKNOWN*)0xF38LL) + (_QWORD)SdkData_e89c30))(a1, a2, a3);
}

#pragma GCC visibility pop
