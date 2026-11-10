#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_sf_cmif_client_2c757c(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _DWORD);
__int64 capsrv_service_proxy_2c6c84(__int64 a1, __int64 a2, _QWORD* a3,
                                    __int64 a4, __int64 a5, _QWORD* a6,
                                    __int64 a7, __int64 a8);
__int64 capsrv_service_proxy_2c6cd4(__int64 a1, __int64 a2, _QWORD* a3,
                                    __int64 a4, __int64 a5, _QWORD* a6,
                                    __int64 a7, __int64 a8);

__int64 capsrv_service_proxy_2c6c84(__int64 a1, __int64 a2, _QWORD* a3,
                                    __int64 a4, __int64 a5, _QWORD* a6,
                                    __int64 a7, __int64 a8)
{
  return nn_sf_cmif_client_2c757c(a1 + 8, a2, 1280, *a3, a3[1], a4, a5, a8, *a6,
                                  a6[1], a7, 110);
}

__int64 capsrv_service_proxy_2c6cd4(__int64 a1, __int64 a2, _QWORD* a3,
                                    __int64 a4, __int64 a5, _QWORD* a6,
                                    __int64 a7, __int64 a8)
{
  return nn_sf_cmif_client_2c757c(a1 + 8, a2, 1280, *a3, a3[1], a4, a5, a8, *a6,
                                  a6[1], a7, 120);
}

#pragma GCC visibility pop
