#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_fs_detail_Deallocate_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_client_DestroyDomainObject(__int64 result);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_eaf4a0;
extern _UNKNOWN SdkData_eaf520;
extern _UNKNOWN SdkData_eaf5a0;
__int64 client_session_e10e0(char* a1);

__int64 client_session_e10e0(char* a1)
{
  __int64 result;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    result = nn_sf_hipc_client_DestroyDomainObject((__int64)(a1 + 8));
    if (a1 != (char*)&SdkData_eaf5a0 && a1 != (char*)&SdkData_eaf4a0 &&
        a1 != (char*)&SdkData_eaf520) {
      return nn_fs_detail_Deallocate_plt(a1, 48);
    }
  }
  return result;
}

#pragma GCC visibility pop
