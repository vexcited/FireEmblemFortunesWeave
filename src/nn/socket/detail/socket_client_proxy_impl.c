#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_198c50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_19d6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 socket_client_proxy_195690(__int64 a1, __int64 a2, __int64 a3,
                                   unsigned int a4);
__int64 socket_client_proxy_199c10(__int64 a1, __int64 a2, __int64 a3,
                                   unsigned int a4);

__int64 socket_client_proxy_195690(__int64 a1, __int64 a2, __int64 a3,
                                   unsigned int a4)
{
  return SdkRoutine_198c50(a1 + 8, a2, a3, a4);
}

__int64 socket_client_proxy_199c10(__int64 a1, __int64 a2, __int64 a3,
                                   unsigned int a4)
{
  return SdkRoutine_19d6c0(a1 + 8, a2, a3, a4);
}

#pragma GCC visibility pop
