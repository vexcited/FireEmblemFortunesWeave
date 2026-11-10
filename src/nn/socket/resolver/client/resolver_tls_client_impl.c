#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_socket_detail_Alloc_plt(_QWORD);
__int64 nn_socket_detail_Free_plt(_QWORD);
__int64 nn_socket_resolver_tls_Client__1a28d0();
__int64 nn_socket_resolver_tls_Client__1a2910(_QWORD*);
__int64 nn_socket_resolver_tls_GetClientTLS_plt(void);
__int64 nn_socket_resolver_tls_Initialize_plt(void* this_);
__int64 nn_socket_resolver_tls_SetClientTLS_plt(_QWORD, _QWORD);
__int64 resolver_tls_client_1a2500(__int64* a1);

__int64 resolver_tls_client_1a2500(__int64* a1)
{
  void* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;

  *a1 = 0;
  v2 = (void*)nn_socket_resolver_tls_GetClientTLS_plt();
  if ((_DWORD)v2 == 0 && *a1 != 0) {
    return 0;
  }
  result = nn_socket_resolver_tls_Initialize_plt(v2);
  if ((_DWORD)result == 0) {
    v4 = nn_socket_detail_Alloc_plt(40);
    if (v4 != 0) {
      *(_DWORD*)v4 = 0;
      *(_QWORD*)(v4 + 8) = 0;
      *(_QWORD*)(v4 + 16) = 0;
      *(_QWORD*)(v4 + 24) = 0;
      *(_QWORD*)(v4 + 32) = 0;
      *a1 = v4;
      result = nn_socket_resolver_tls_SetClientTLS_plt(
          nn_socket_resolver_tls_Client__1a28d0, v4);
      if ((_DWORD)result != 0) {
        v5 = *a1;
        if (*a1 != 0) {
          nn_socket_resolver_tls_Client__1a2910((_QWORD*)*a1);
          nn_socket_detail_Free_plt(v5);
        }
        *a1 = 0;
        return 2075;
      }
    }
    else {
      *a1 = 0;
      return 4099;
    }
  }
  return result;
}

#pragma GCC visibility pop
