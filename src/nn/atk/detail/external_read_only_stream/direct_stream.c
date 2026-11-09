#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DirectStream_Unknown3_2a3f40(__int64 a1);
__int64 DirectStream_Unknown4_2a3f50(__int64 a1, __int64 a2, __int64 a3,
                                     int* a4);
__int64 DirectStream_Unknown8_2a4130(__int64 a1);
__int64 DirectStream_Unknown9_2a4140(__int64 a1);
__int64 DirectStream_Unknown10_2a4150(__int64 a1);
__int64 DirectStream_Unknown11_2a4160(__int64 a1);

__int64 DirectStream_Unknown3_2a3f40(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown4_2a3f50(__int64 a1, __int64 a2, __int64 a3,
                                     int* a4)
{
  _QWORD* v4;
  __int64 v8;
  int v9;
  __int64 v11;

  v4 = *(_QWORD**)(a1 + 8);
  (*(void (**)(_QWORD*))(*v4 + 136LL))(v4);
  v8 = v4[13];
  v11 = 0;
  if (((*(__int64 (**)(__int64, __int64*, _QWORD, __int64, __int64))(
           *(_QWORD*)v8 + 40LL))(v8, &v11, v4[1], a2, a3) &
       1) != 0) {
    v9 = a3 != v11;
    v4[1] += v11;
    if (a4 == nullptr) {
      return v11;
    }
    goto LABEL_5;
  }
  v9 = -2130706432;
  if (a4 != nullptr) {
  LABEL_5:
    *a4 = v9;
  }
  return v11;
}

__int64 DirectStream_Unknown8_2a4130(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 64LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown9_2a4140(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 72LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown10_2a4150(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 80LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown11_2a4160(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
      *(_QWORD*)(a1 + 8));
}

#pragma GCC visibility pop
