#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*nn_atk_detail_fnd_FileStreamProxy_vtable[])();
_QWORD* FileStreamProxy_Destructor(_QWORD* result);
__int64 FileStreamProxy_Unknown13(__int64 a1);
__int64 FileStreamProxy_Unknown3(__int64 a1);
__int64 FileStreamProxy_Unknown9(__int64 a1);
__int64 FileStreamProxy_Unknown10(__int64 a1);
__int64 FileStreamProxy_Unknown11(__int64 a1);
__int64 FileStreamProxy_Unknown8(__int64 a1);
__int64 FileStreamProxy_Unknown6(__int64 a1, __int64 a2, __int64 a3);
__int64 FileStreamProxy_Unknown15(__int64 a1);
__int64 FileStreamProxy_Unknown16(__int64 a1);
__int64 FileStreamProxy_Unknown17(__int64 a1);
__int64 FileStreamProxy_Unknown18(__int64 a1);
__int64 FileStreamProxy_Unknown20(__int64 a1);
__int64 FileStreamProxy_Unknown21(__int64 a1);

_QWORD* FileStreamProxy_Destructor(_QWORD* result)
{
  result[2] = 0;
  result[3] = 0;
  *result = nn_atk_detail_fnd_FileStreamProxy_vtable;
  result[1] = 0;
  return result;
}

__int64 FileStreamProxy_Unknown13(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 104LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown3(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown9(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 72LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown10(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 80LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown11(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown8(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 64LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown6(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;

  v3 = *(_QWORD*)(a1 + 24);
  switch ((_DWORD)a3) {
  case 2:
    v6 = a1;
    v5 = (char*)X8CALL_X0(_QWORD*,
                          (*(__attribute__((swiftcall)) void (**)(
                              PSEUDO_X8, _QWORD))(**(_QWORD**)(a1 + 8) + 56LL))(
                              (void*)*(_QWORD**)(a1 + 8), *(_QWORD*)(a1 + 8))) +
         a2;
    v4 = *(_QWORD*)(v6 + 16);
    a3 = 2;
    a1 = v6;
    break;
  case 1:
    v4 = *(_QWORD*)(a1 + 16);
    v5 = (char*)(v3 - a2 + v4);
    break;
  case 0:
    v4 = *(_QWORD*)(a1 + 16);
    v5 = (char*)(v4 + a2);
    break;
  default:
    return 0x80000000LL;
  }
  v7 = *(_QWORD*)(a1 + 8);
  v8 = (char*)(v4 + v3);
  if ((__int64)v5 < v4 + v3) {
    v8 = v5;
  }
  if ((__int64)v5 >= v4) {
    v9 = v8;
  }
  else {
    v9 = (char*)v4;
  }
  return (*(__int64 (**)(__int64, char*, __int64))(*(_QWORD*)v7 + 48LL))(v7, v9,
                                                                         a3);
}

__int64 FileStreamProxy_Unknown15(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 120LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown16(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 128LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown17(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 136LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown18(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 144LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown20(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 160LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 FileStreamProxy_Unknown21(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 168LL))(
      *(_QWORD*)(a1 + 8));
}

#pragma GCC visibility pop
