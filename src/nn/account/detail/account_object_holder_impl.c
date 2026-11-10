#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_client_ResizeSessions(__int64, int);
extern _UNKNOWN SdkData_ebb8b8;
extern _UNKNOWN SdkData_ebb8e0;
extern __int64 SdkData_e86d80;
extern __int64 SdkData_ebb8b0;
__int64 nn_account_detail_ObjectHolder_ObjectHolder(void* this_);
void nn_account_detail_ObjectHolder_Destroy_ObjectHolder(void* this_);

__int64 nn_account_detail_ObjectHolder_ObjectHolder(void* this_)
{
  __int64 v3;
  __int64 v4;

  *((_QWORD*)this_ + 3) = 0;
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 1) = 0;
  *((_QWORD*)this_ + 2) = 0;
  *(_QWORD*)this_ = 0;
  v3 = SdkData_e86d80;
  *((_QWORD*)this_ + 7) = (char*)this_ + 112;
  *((_DWORD*)this_ + 16) = 0;
  *((_QWORD*)this_ + 5) = v3 + 16;
  nn_os_SdkConditionVariableType_Initialize_plt((char*)this_ + 68);
  v4 = *((_QWORD*)this_ + 7);
  *((_QWORD*)this_ + 9) = 0;
  *((_QWORD*)this_ + 10) = v4;
  *((_QWORD*)this_ + 11) = (char*)this_ + 40;
  *(_QWORD*)(v4 + 8) = v4 + 16;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 24LL) = *((_QWORD*)this_ + 7) + 32LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 40LL) = *((_QWORD*)this_ + 7) + 48LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 56LL) = *((_QWORD*)this_ + 7) + 64LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 72LL) = *((_QWORD*)this_ + 7) + 80LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 88LL) = *((_QWORD*)this_ + 7) + 96LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 104LL) = *((_QWORD*)this_ + 7) + 112LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 120LL) = *((_QWORD*)this_ + 7) + 128LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 136LL) = *((_QWORD*)this_ + 7) + 144LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 152LL) = *((_QWORD*)this_ + 7) + 160LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 168LL) = *((_QWORD*)this_ + 7) + 176LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 184LL) = *((_QWORD*)this_ + 7) + 192LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 200LL) = *((_QWORD*)this_ + 7) + 208LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 216LL) = *((_QWORD*)this_ + 7) + 224LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 232LL) = *((_QWORD*)this_ + 7) + 240LL;
  *(_QWORD*)(*((_QWORD*)this_ + 7) + 248LL) = 0;
  *((_DWORD*)this_ + 26) = 0;
  *((_DWORD*)this_ + 28) = 0;
  *((_DWORD*)this_ + 32) = 0;
  *((_DWORD*)this_ + 36) = 0;
  *((_DWORD*)this_ + 40) = 0;
  *((_DWORD*)this_ + 44) = 0;
  *((_DWORD*)this_ + 48) = 0;
  *((_DWORD*)this_ + 52) = 0;
  *((_DWORD*)this_ + 56) = 0;
  *((_DWORD*)this_ + 60) = 0;
  *((_DWORD*)this_ + 64) = 0;
  *((_DWORD*)this_ + 68) = 0;
  *((_DWORD*)this_ + 72) = 0;
  *((_DWORD*)this_ + 76) = 0;
  *((_DWORD*)this_ + 80) = 0;
  *((_DWORD*)this_ + 84) = 0;
  *((_DWORD*)this_ + 88) = 0;
  *((_QWORD*)this_ + 12) = 16;
  SdkData_ebb8b0 = nn_lmem_CreateExpHeap_plt(&SdkData_ebb8e0, 2048, 0);
  return nn_os_InitializeMutex_plt(&SdkData_ebb8b8, 0, 0);
}

void nn_account_detail_ObjectHolder_Destroy_ObjectHolder(void* this_)
{
  __int64 v2;
  char* v3;

  v2 = *(_QWORD*)this_;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    *((_QWORD*)this_ + 3) = 0;
    *((_QWORD*)this_ + 4) = 0;
    *((_QWORD*)this_ + 1) = 0;
    *((_QWORD*)this_ + 2) = 0;
    *(_QWORD*)this_ = 0;
    nn_os_SdkMutexType_Lock_plt((char*)this_ + 104);
    nn_sf_hipc_client_ResizeSessions((__int64)this_ + 40, 0);
    nn_os_SdkMutexType_Unlock_plt((char*)this_ + 104);
  }
  *((_QWORD*)this_ + 5) = SdkData_e86d80 + 16;
  v3 = (char*)this_ + 40;
  nn_os_SdkMutexType_Lock_plt(v3 + 64);
  nn_sf_hipc_client_ResizeSessions((__int64)v3, 0);
  nn_os_SdkMutexType_Unlock_plt(v3 + 64);
}

#pragma GCC visibility pop
