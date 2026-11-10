#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_ssl_detail_ServiceSession_GetServiceSession_plt(void);
__int64 nn_ssl_detail_ServiceSession_IsInitialized_plt(void);
__int64 nn_ssl_SetInterfaceVersion(unsigned int a1);
__int64 nn_ssl_5caff0();

__int64 nn_ssl_SetInterfaceVersion(unsigned int a1)
{
  __int64* v2;
  __int64 v3;

  if ((nn_ssl_detail_ServiceSession_IsInitialized_plt() & 1) != 0 &&
      (v2 = (__int64*)nn_ssl_detail_ServiceSession_GetServiceSession_plt()) !=
          nullptr &&
      (v3 = *v2) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 72LL))(v3, a1);
  }
  else {
    return 51835;
  }
}

__int64 nn_ssl_5caff0()
{
  fw_rtld_RegisterCrtDestructor();
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
