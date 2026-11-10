#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_rtld_RegisterCrtDestructor();
__int64 nn_lmem_CreateExpHeap_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_lmem_FreeToExpHeap_plt(_QWORD, _QWORD);
__int64 nn_nfp_583cd0(_QWORD);
__int64 nn_nfp_5850d0(_QWORD);
__int64 nn_nfp_5856b0(_QWORD);
__int64 nn_os_InitializeMutex_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_SdkConditionVariableType_Initialize_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_sf_hipc_client_DestroyDomainObject(__int64 result);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_f58068;
extern _UNKNOWN SdkData_f5c1e8;
extern _UNKNOWN SdkData_f5c210;
extern _UNKNOWN SdkData_f60234;
extern _UNKNOWN SdkData_f60368;
extern _UNKNOWN SdkData_f60390;
extern _UNKNOWN SdkData_f643b4;
extern __int64 SdkData_e86d80;
extern __int64 SdkData_f58060;
extern __int64 SdkData_f5c1e0;
extern __int64 SdkData_f60218;
extern __int64 SdkData_f60228;
extern __int64 SdkData_f60238;
extern __int64 SdkData_f60240;
extern __int64 SdkData_f60248;
extern __int64 SdkData_f60250;
extern __int64 SdkData_f60360;
extern __int64 SdkData_f64398;
extern __int64 SdkData_f643a8;
extern __int64 SdkData_f643b8;
extern __int64 SdkData_f643c0;
extern __int64 SdkData_f643c8;
extern __int64 SdkData_f643d0;
extern int SdkData_f60230;
extern int SdkData_f60258;
extern int SdkData_f60260;
extern int SdkData_f60270;
extern int SdkData_f60280;
extern int SdkData_f60290;
extern int SdkData_f602a0;
extern int SdkData_f602b0;
extern int SdkData_f602c0;
extern int SdkData_f602d0;
extern int SdkData_f602e0;
extern int SdkData_f602f0;
extern int SdkData_f60300;
extern int SdkData_f60310;
extern int SdkData_f60320;
extern int SdkData_f60330;
extern int SdkData_f60340;
extern int SdkData_f60350;
extern int SdkData_f643b0;
extern int SdkData_f643d8;
extern int SdkData_f643e0;
extern int SdkData_f643f0;
extern int SdkData_f64400;
extern int SdkData_f64410;
extern int SdkData_f64420;
extern int SdkData_f64430;
extern int SdkData_f64440;
extern int SdkData_f64450;
extern int SdkData_f64460;
extern int SdkData_f64470;
extern int SdkData_f64480;
extern int SdkData_f64490;
extern int SdkData_f644a0;
extern int SdkData_f644b0;
extern int SdkData_f644c0;
extern int SdkData_f644d0;
__int64 nn_nfp_583bd0(__int64 a1);
__int64 nn_nfp_583c40(__int64 a1, __int64* a2);
__int64 nn_nfp_584fd0(__int64 a1);
__int64 nn_nfp_585040(__int64 a1, __int64* a2);
__int64 nn_nfp_585180();
__int64 nn_nfp_5855b0(__int64 a1);
__int64 nn_nfp_585620(__int64 a1, __int64* a2);
__int64 nn_nfp_585760();

__int64 nn_nfp_583bd0(__int64 a1)
{
  __int64 result;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    nn_sf_hipc_client_DestroyDomainObject(a1 + 8);
    nn_os_LockMutex_plt(&SdkData_f58068);
    nn_lmem_FreeToExpHeap_plt(SdkData_f58060, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f58068);
  }
  return result;
}

__int64 nn_nfp_583c40(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_nfp_583cd0(&v7);
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

__int64 nn_nfp_584fd0(__int64 a1)
{
  __int64 result;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    nn_sf_hipc_client_DestroyDomainObject(a1 + 8);
    nn_os_LockMutex_plt(&SdkData_f5c1e8);
    nn_lmem_FreeToExpHeap_plt(SdkData_f5c1e0, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f5c1e8);
  }
  return result;
}

__int64 nn_nfp_585040(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_nfp_5850d0(&v7);
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

__int64 nn_nfp_585180()
{
  SdkData_f60230 = 0;
  SdkData_f60218 = SdkData_e86d80 + 16;
  SdkData_f60228 = (__int64)&SdkData_f60260;
  nn_os_SdkConditionVariableType_Initialize_plt(&SdkData_f60234);
  SdkData_f60238 = 0;
  SdkData_f60240 = SdkData_f60228;
  SdkData_f60248 = (__int64)&SdkData_f60218;
  *(_QWORD*)(SdkData_f60228 + 8) = SdkData_f60228 + 16;
  *(_QWORD*)(SdkData_f60228 + 24) = SdkData_f60228 + 32;
  *(_QWORD*)(SdkData_f60228 + 40) = SdkData_f60228 + 48;
  *(_QWORD*)(SdkData_f60228 + 56) = SdkData_f60228 + 64;
  *(_QWORD*)(SdkData_f60228 + 72) = SdkData_f60228 + 80;
  *(_QWORD*)(SdkData_f60228 + 88) = SdkData_f60228 + 96;
  *(_QWORD*)(SdkData_f60228 + 104) = SdkData_f60228 + 112;
  *(_QWORD*)(SdkData_f60228 + 120) = SdkData_f60228 + 128;
  *(_QWORD*)(SdkData_f60228 + 136) = SdkData_f60228 + 144;
  *(_QWORD*)(SdkData_f60228 + 152) = SdkData_f60228 + 160;
  *(_QWORD*)(SdkData_f60228 + 168) = SdkData_f60228 + 176;
  *(_QWORD*)(SdkData_f60228 + 184) = SdkData_f60228 + 192;
  *(_QWORD*)(SdkData_f60228 + 200) = SdkData_f60228 + 208;
  *(_QWORD*)(SdkData_f60228 + 216) = SdkData_f60228 + 224;
  *(_QWORD*)(SdkData_f60228 + 232) = SdkData_f60228 + 240;
  *(_QWORD*)(SdkData_f60228 + 248) = 0;
  SdkData_f60258 = 0;
  SdkData_f60260 = 0;
  SdkData_f60270 = 0;
  SdkData_f60280 = 0;
  SdkData_f60290 = 0;
  SdkData_f602a0 = 0;
  SdkData_f602b0 = 0;
  SdkData_f602c0 = 0;
  SdkData_f602d0 = 0;
  SdkData_f602e0 = 0;
  SdkData_f602f0 = 0;
  SdkData_f60300 = 0;
  SdkData_f60310 = 0;
  SdkData_f60320 = 0;
  SdkData_f60330 = 0;
  SdkData_f60340 = 0;
  SdkData_f60350 = 0;
  SdkData_f60250 = 16;
  fw_rtld_RegisterCrtDestructor();
  SdkData_f5c1e0 = nn_lmem_CreateExpHeap_plt(&SdkData_f5c210, 0x4000, 0);
  nn_os_InitializeMutex_plt(&SdkData_f5c1e8, 0, 0);
  return fw_rtld_RegisterCrtDestructor();
}

__int64 nn_nfp_5855b0(__int64 a1)
{
  __int64 result;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 40);
  if ((result & 1) != 0) {
    nn_sf_hipc_client_DestroyDomainObject(a1 + 8);
    nn_os_LockMutex_plt(&SdkData_f60368);
    nn_lmem_FreeToExpHeap_plt(SdkData_f60360, a1);
    return nn_os_UnlockMutex_plt(&SdkData_f60368);
  }
  return result;
}

__int64 nn_nfp_585620(__int64 a1, __int64* a2)
{
  unsigned int v4;
  __int64 v5;
  __int64 v7;
  __int64* v8;
  __int64 v9;

  v9 = 0;
  v7 = 0;
  v8 = &v9;
  nn_nfp_5856b0(&v7);
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

__int64 nn_nfp_585760()
{
  SdkData_f643b0 = 0;
  SdkData_f64398 = SdkData_e86d80 + 16;
  SdkData_f643a8 = (__int64)&SdkData_f643e0;
  nn_os_SdkConditionVariableType_Initialize_plt(&SdkData_f643b4);
  SdkData_f643b8 = 0;
  SdkData_f643c0 = SdkData_f643a8;
  SdkData_f643c8 = (__int64)&SdkData_f64398;
  *(_QWORD*)(SdkData_f643a8 + 8) = SdkData_f643a8 + 16;
  *(_QWORD*)(SdkData_f643a8 + 24) = SdkData_f643a8 + 32;
  *(_QWORD*)(SdkData_f643a8 + 40) = SdkData_f643a8 + 48;
  *(_QWORD*)(SdkData_f643a8 + 56) = SdkData_f643a8 + 64;
  *(_QWORD*)(SdkData_f643a8 + 72) = SdkData_f643a8 + 80;
  *(_QWORD*)(SdkData_f643a8 + 88) = SdkData_f643a8 + 96;
  *(_QWORD*)(SdkData_f643a8 + 104) = SdkData_f643a8 + 112;
  *(_QWORD*)(SdkData_f643a8 + 120) = SdkData_f643a8 + 128;
  *(_QWORD*)(SdkData_f643a8 + 136) = SdkData_f643a8 + 144;
  *(_QWORD*)(SdkData_f643a8 + 152) = SdkData_f643a8 + 160;
  *(_QWORD*)(SdkData_f643a8 + 168) = SdkData_f643a8 + 176;
  *(_QWORD*)(SdkData_f643a8 + 184) = SdkData_f643a8 + 192;
  *(_QWORD*)(SdkData_f643a8 + 200) = SdkData_f643a8 + 208;
  *(_QWORD*)(SdkData_f643a8 + 216) = SdkData_f643a8 + 224;
  *(_QWORD*)(SdkData_f643a8 + 232) = SdkData_f643a8 + 240;
  *(_QWORD*)(SdkData_f643a8 + 248) = 0;
  SdkData_f643d8 = 0;
  SdkData_f643e0 = 0;
  SdkData_f643f0 = 0;
  SdkData_f64400 = 0;
  SdkData_f64410 = 0;
  SdkData_f64420 = 0;
  SdkData_f64430 = 0;
  SdkData_f64440 = 0;
  SdkData_f64450 = 0;
  SdkData_f64460 = 0;
  SdkData_f64470 = 0;
  SdkData_f64480 = 0;
  SdkData_f64490 = 0;
  SdkData_f644a0 = 0;
  SdkData_f644b0 = 0;
  SdkData_f644c0 = 0;
  SdkData_f644d0 = 0;
  SdkData_f643d0 = 16;
  fw_rtld_RegisterCrtDestructor();
  SdkData_f60360 = nn_lmem_CreateExpHeap_plt(&SdkData_f60390, 0x4000, 0);
  nn_os_InitializeMutex_plt(&SdkData_f60368, 0, 0);
  return fw_rtld_RegisterCrtDestructor();
}

#pragma GCC visibility pop
