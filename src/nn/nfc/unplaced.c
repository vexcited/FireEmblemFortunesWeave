#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_nfc_57f8e0(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_client_DestroyDomainObject(__int64 result);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_f53ed8;
extern _UNKNOWN SdkData_f53f00;
extern _UNKNOWN SdkData_f57f24;
extern __int64 SdkData_e86d80;
extern __int64 SdkData_f53ed0;
extern __int64 SdkData_f57f08;
extern __int64 SdkData_f57f18;
extern __int64 SdkData_f57f28;
extern __int64 SdkData_f57f30;
extern __int64 SdkData_f57f38;
extern __int64 SdkData_f57f40;
extern int SdkData_f57f20;
extern int SdkData_f57f48;
extern int SdkData_f57f50;
extern int SdkData_f57f60;
extern int SdkData_f57f70;
extern int SdkData_f57f80;
extern int SdkData_f57f90;
extern int SdkData_f57fa0;
extern int SdkData_f57fb0;
extern int SdkData_f57fc0;
extern int SdkData_f57fd0;
extern int SdkData_f57fe0;
extern int SdkData_f57ff0;
extern int SdkData_f58000;
extern int SdkData_f58010;
extern int SdkData_f58020;
extern int SdkData_f58030;
extern int SdkData_f58040;
__int64 nn_nfc_57f7e0(__int64 a1);
__int64 nn_nfc_57f850(__int64 a1, __int64* a2);
__int64 nn_nfc_57f990();

__int64 nn_nfc_57f7e0(__int64 a1)
{
  __int64 result;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    nn_sf_hipc_client_DestroyDomainObject(a1 + 8);
    nn_os_LockMutex_plt(&SdkData_f53ed8);
    nn_lmem_FreeToExpHeap_plt(SdkData_f53ed0, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f53ed8);
  }
  return result;
}

__int64 nn_nfc_57f850(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_nfc_57f8e0(&v7);
  if (v8 == nullptr) {
    v4 = 5642;
    v5 = v9;
    if (v9 == 0) {
      return v4;
    }
    goto LABEL_3;
  }
  v7 = *a2;
  v4 = SdkRoutine_e3b70(a1 + 8, &v7, 0, &v9);
  v5 = v9;
  if (v9 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  return v4;
}

__int64 nn_nfc_57f990()
{
  SdkData_f57f20 = 0;
  SdkData_f57f08 = SdkData_e86d80 + 16;
  SdkData_f57f18 = (__int64)&SdkData_f57f50;
  nn_os_SdkConditionVariableType_Initialize_plt(&SdkData_f57f24);
  SdkData_f57f28 = 0;
  SdkData_f57f30 = SdkData_f57f18;
  SdkData_f57f38 = (__int64)&SdkData_f57f08;
  *(_QWORD*)(SdkData_f57f18 + 8) = SdkData_f57f18 + 16;
  *(_QWORD*)(SdkData_f57f18 + 24) = SdkData_f57f18 + 32;
  *(_QWORD*)(SdkData_f57f18 + 40) = SdkData_f57f18 + 48;
  *(_QWORD*)(SdkData_f57f18 + 56) = SdkData_f57f18 + 64;
  *(_QWORD*)(SdkData_f57f18 + 72) = SdkData_f57f18 + 80;
  *(_QWORD*)(SdkData_f57f18 + 88) = SdkData_f57f18 + 96;
  *(_QWORD*)(SdkData_f57f18 + 104) = SdkData_f57f18 + 112;
  *(_QWORD*)(SdkData_f57f18 + 120) = SdkData_f57f18 + 128;
  *(_QWORD*)(SdkData_f57f18 + 136) = SdkData_f57f18 + 144;
  *(_QWORD*)(SdkData_f57f18 + 152) = SdkData_f57f18 + 160;
  *(_QWORD*)(SdkData_f57f18 + 168) = SdkData_f57f18 + 176;
  *(_QWORD*)(SdkData_f57f18 + 184) = SdkData_f57f18 + 192;
  *(_QWORD*)(SdkData_f57f18 + 200) = SdkData_f57f18 + 208;
  *(_QWORD*)(SdkData_f57f18 + 216) = SdkData_f57f18 + 224;
  *(_QWORD*)(SdkData_f57f18 + 232) = SdkData_f57f18 + 240;
  *(_QWORD*)(SdkData_f57f18 + 248) = 0;
  SdkData_f57f48 = 0;
  SdkData_f57f50 = 0;
  SdkData_f57f60 = 0;
  SdkData_f57f70 = 0;
  SdkData_f57f80 = 0;
  SdkData_f57f90 = 0;
  SdkData_f57fa0 = 0;
  SdkData_f57fb0 = 0;
  SdkData_f57fc0 = 0;
  SdkData_f57fd0 = 0;
  SdkData_f57fe0 = 0;
  SdkData_f57ff0 = 0;
  SdkData_f58000 = 0;
  SdkData_f58010 = 0;
  SdkData_f58020 = 0;
  SdkData_f58030 = 0;
  SdkData_f58040 = 0;
  SdkData_f57f40 = 16;
  fw_rtld_RegisterCrtDestructor();
  SdkData_f53ed0 = nn_lmem_CreateExpHeap_plt(&SdkData_f53f00, 0x4000, 0);
  nn_os_InitializeMutex_plt(&SdkData_f53ed8, 0, 0);
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
