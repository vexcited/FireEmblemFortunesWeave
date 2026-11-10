#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_cmif_client_1e5d20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 nn_sf_cmif_client_1e6270(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD);
__int64 audio_service_proxy_1e59e0(__int64 a1, _QWORD* a2, __int64 a3,
                                   __int64 a4);
__int64 audio_service_proxy_1e5a40(__int64 a1, _QWORD* a2, __int64 a3,
                                   __int64 a4);

__int64 audio_service_proxy_1e59e0(__int64 a1, _QWORD* a2, __int64 a3,
                                   __int64 a4)
{
  return nn_sf_cmif_client_1e5d20(a1 + 8, *a2, a2[1], a3, a4, 7);
}

__int64 audio_service_proxy_1e5a40(__int64 a1, _QWORD* a2, __int64 a3,
                                   __int64 a4)
{
  return nn_sf_cmif_client_1e6270(a1 + 8, *a2, a2[1], a3, a4, 10);
}

#pragma GCC visibility pop
