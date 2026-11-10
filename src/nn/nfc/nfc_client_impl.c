#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern __int64 SdkData_f53d88;
extern __int64 SdkData_f57f08;
extern __int64 nn_nfc_client_g_SystemInterface;
extern __int64 nn_nfc_client_g_UserInterface;
extern int SdkData_f53dc8;
extern int SdkData_f57f48;
__int64 nn_nfc_client_DestroySystemInterface(void* this_);
__int64 nn_nfc_client_DestroyUserInterface(void* this_);

__int64 nn_nfc_client_DestroySystemInterface(void* this_)
{
  __int64 v1;

  v1 = nn_nfc_client_g_SystemInterface;
  nn_nfc_client_g_SystemInterface = 0;
  if (v1 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f53dc8);
  nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f53d88, 0);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f53dc8);
}

__int64 nn_nfc_client_DestroyUserInterface(void* this_)
{
  __int64 v1;

  v1 = nn_nfc_client_g_UserInterface;
  nn_nfc_client_g_UserInterface = 0;
  if (v1 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
  }
  nn_os_SdkMutexType_Lock_plt(&SdkData_f57f48);
  nn_sf_hipc_client_ResizeSessions((__int64)&SdkData_f57f08, 0);
  return nn_os_SdkMutexType_Unlock_plt(&SdkData_f57f48);
}

#pragma GCC visibility pop
