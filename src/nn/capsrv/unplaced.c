#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_1d3d98(_QWORD);
__int64 SdkRoutine_2c507c(_QWORD);
__int64 SdkRoutine_2c57f8(_DWORD*);
__int64 SdkRoutine_2c8538(_DWORD*);
__int64 am_interface_accessors_1c6b88(_QWORD*);
__int64 nn_applet_GetAppletResourceUserId_plt(void* this_);
__int64 nn_capsrv_2c4da8_alt1(_QWORD, _QWORD) __asm__("nn_capsrv_2c4da8");
__int64 nn_capsrv_2c4eb0_alt1(_QWORD) __asm__("nn_capsrv_2c4eb0");
__int64 nn_capsrv_2c6a88_alt1(_QWORD, _QWORD) __asm__("nn_capsrv_2c6a88");
__int64 nn_capsrv_2c6b90_alt1(_QWORD) __asm__("nn_capsrv_2c6b90");
__int64 nn_capsrv_GetShimLibraryVersion_plt(_QWORD);
__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_lmem_CreateUnitHeap_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
__int64 nn_sf_hipc_ConnectToHipcService_plt(_QWORD, _QWORD);
__int64 nn_sf_hipc_FinalizeHipcServiceResolution_plt(void);
__int64 nn_sf_hipc_InitializeHipcServiceResolution_plt(_QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_AddReferenceImpl_plt(_QWORD);
__int64 nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(_QWORD);
extern _UNKNOWN SdkData_f29810;
extern _UNKNOWN SdkData_f29980;
extern _UNKNOWN nn_capsrv_detail_g_AlbumMovieReadStreamServiceMutex;
extern __int64 SdkData_e87068;
extern __int64 SdkData_e877a0;
extern __int64 SdkData_e877a8;
extern __int64 SdkData_f29808;
extern __int64 SdkData_f29940;
extern __int64 SdkData_f29960;
extern __int64 SdkData_f29b30;
extern __int64 SdkData_f29b30_alt1[] __asm__("SdkData_f29b30");
extern __int64 nn_capsrv_detail_g_AlbumAccessorService;
extern __int64 nn_capsrv_detail_g_AlbumMovieReadStreamService;
extern int SdkData_f29968;
extern int nn_capsrv_detail_g_ScreenShotServiceHolder;
__int64 nn_capsrv_InitializeForApplication(void* this_);
void nn_capsrv_FinalizeForApplication();
__int64 nn_capsrv_2c4cf0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nn_capsrv_2c4da8(_QWORD* a1, __int64* a2);
__int64 nn_capsrv_2c4eb0(__int64 a1);
__int64 nn_capsrv_2c4f2c(__int64 a1);
__int64 nn_capsrv_2c592c(__int64* a1);
__int64 nn_capsrv_InitializeAlbumAccessForApplication(void* this_);
__int64 nn_capsrv_FinalizeAlbumAccessForApplication();
__int64 nn_capsrv_2c69d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nn_capsrv_2c6a88(_QWORD* a1, __int64* a2);
__int64 nn_capsrv_2c6b90(__int64 a1);

__int64 nn_capsrv_InitializeForApplication(void* this_)
{
  int v1;
  __int64 v2;
  void* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[3];

  v1 = nn_capsrv_detail_g_ScreenShotServiceHolder;
  if (nn_capsrv_detail_g_ScreenShotServiceHolder <= 0) {
    v7[2] = 0;
    v7[0] = &SdkData_f29810;
    v7[1] = "caps:su";
    result =
        nn_capsrv_2c4cf0((__int64)&SdkData_f29940, (__int64)v7,
                         (__int64)SdkRoutine_2c57f8, (__int64)&SdkData_f29810);
    if ((_DWORD)result != 0) {
      return result;
    }
    v6 = SdkData_f29940;
    if (SdkData_f29940 != 0) {
      (**(void (***)(__int64))SdkData_f29940)(SdkData_f29940);
    }
    this_ = (void*)SdkData_f29808;
    SdkData_f29808 = v6;
    if (this_ != nullptr) {
      this_ = (void*)(*(__int64 (**)(void*))(*(_QWORD*)this_ + 8LL))(this_);
    }
    v1 = nn_capsrv_detail_g_ScreenShotServiceHolder;
  }
  v2 = SdkData_f29808;
  nn_capsrv_detail_g_ScreenShotServiceHolder = v1 + 1;
  if (SdkData_f29808 != 0) {
    this_ = (void*)(**(__int64 (***)(__int64))SdkData_f29808)(SdkData_f29808);
  }
  v3 = (void*)nn_capsrv_GetShimLibraryVersion_plt(this_);
  v4 = nn_applet_GetAppletResourceUserId_plt(v3);
  LODWORD(v7[0]) = (*(__int64 (**)(__int64, void*, __int64))(*(_QWORD*)v2 +
                                                             32LL))(v2, v3, v4);
  if (LODWORD(v7[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v7);
  }
  (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  return 0;
}

void nn_capsrv_FinalizeForApplication()
{
  int v0;
  __int64 v1;

  v0 = nn_capsrv_detail_g_ScreenShotServiceHolder;
  if (nn_capsrv_detail_g_ScreenShotServiceHolder <= 1) {
    v1 = SdkData_f29808;
    SdkData_f29808 = 0;
    if (v1 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 8LL))(v1);
    }
    am_interface_accessors_1c6b88(&SdkData_f29940);
    v0 = nn_capsrv_detail_g_ScreenShotServiceHolder;
  }
  nn_capsrv_detail_g_ScreenShotServiceHolder = v0 - 1;
}

__int64 nn_capsrv_2c4cf0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8;
  unsigned int v9;
  __int64 v11;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v8 = *(_DWORD*)(a1 + 12);
  if (v8 != 0) {
    if (*(_QWORD*)(a1 + 16) == 0) {
      *(_QWORD*)(a1 + 16) = a3;
      *(_QWORD*)(a1 + 24) = a4;
    }
    v9 = 0;
    *(_DWORD*)(a1 + 12) = v8 + 1;
  }
  else {
    v11 = 0;
    v9 = nn_capsrv_2c4da8_alt1(a2, &v11);
    if (v9 != 0) {
      if (v11 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      }
    }
    else {
      *(_QWORD*)(a1 + 16) = a3;
      *(_QWORD*)(a1 + 24) = a4;
      *(_DWORD*)(a1 + 12) = 1;
      *(_QWORD*)a1 = v11;
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  return v9;
}

__int64 nn_capsrv_2c4da8(_QWORD* a1, __int64* a2)
{
  _QWORD* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;

  v2 = (_QWORD*)*a1;
  v5 = nn_capsrv_2c4eb0_alt1(*a1);
  v6 = a1[2];
  if (v6 == 0) {
    v6 = *v2 + 144LL;
    a1[2] = v6;
  }
  v7 = a1[1];
  v15 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v5);
  v8 = nn_sf_hipc_ConnectToHipcService_plt(&v15, v7);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt();
  if (v8 != 0) {
    SdkRoutine_1d3d98(v2);
  }
  else {
    v9 = v15;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 16LL))(
        v6, 40, 8);
    v11 = v10;
    if (v10 != 0) {
      *(_DWORD*)(v10 + 24) = 1;
      *(_DWORD*)(v10 + 8) = 1;
      *(_DWORD*)(v10 + 12) = v9;
      v12 = SdkData_e877a0;
      *(_QWORD*)(v10 + 32) = v6;
      *(_QWORD*)v10 = v12 + 16;
      *(_QWORD*)(v10 + 16) = v12 + 112;
      nn_sf_impl_detail_ServiceObjectImplBase2_AddReferenceImpl_plt(v10 + 24);
    }
    v13 = *a2;
    *a2 = v11;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  return v8;
}

__int64 nn_capsrv_2c4eb0(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12);
  if (v2 != 0) {
    v3 = v2 + 1;
  }
  else {
    v4 = nn_lmem_CreateUnitHeap_plt(a1 + 176, 128, 64, 4, 16, a1 + 16);
    v5 = SdkData_e87068;
    *(_QWORD*)a1 = a1 + 16;
    *(_QWORD*)(a1 + 160) = v5 + 16;
    *(_QWORD*)(a1 + 168) = v4;
    v3 = 1;
  }
  *(_DWORD*)(a1 + 12) = v3;
  return nn_os_SdkMutexType_Unlock_plt(a1 + 8);
}

__int64 nn_capsrv_2c4f2c(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = nn_sf_impl_detail_ServiceObjectImplBase2_ReleaseImpl_plt(a1 + 24);
  if ((result & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
    SdkRoutine_2c507c(a1 + 8);
    return (*(__int64 (**)(__int64, __int64, __int64, __int64))(
        *(_QWORD*)v3 + 24LL))(v3, a1, 40, 8);
  }
  return result;
}

__int64 nn_capsrv_2c592c(__int64* a1)
{
  __int64 v2;
  __int64 result;

  v2 = a1[2];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = *a1;
  if (*a1 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 nn_capsrv_InitializeAlbumAccessForApplication(void* this_)
{
  int v1;
  __int64 v2;
  void* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[3];

  v1 = SdkData_f29968;
  if (SdkData_f29968 <= 0) {
    v7[2] = 0;
    v7[0] = &SdkData_f29980;
    v7[1] = "caps:u";
    result =
        nn_capsrv_2c69d0((__int64)&SdkData_f29b30, (__int64)v7,
                         (__int64)SdkRoutine_2c8538, (__int64)&SdkData_f29980);
    if ((_DWORD)result != 0) {
      return result;
    }
    v6 = SdkData_f29b30;
    if (SdkData_f29b30 != 0) {
      (**(void (***)(__int64))SdkData_f29b30)(SdkData_f29b30);
    }
    this_ = (void*)nn_capsrv_detail_g_AlbumAccessorService;
    nn_capsrv_detail_g_AlbumAccessorService = v6;
    if (this_ != nullptr) {
      this_ = (void*)(*(__int64 (**)(void*))(*(_QWORD*)this_ + 8LL))(this_);
    }
    v1 = SdkData_f29968;
  }
  v2 = nn_capsrv_detail_g_AlbumAccessorService;
  SdkData_f29968 = v1 + 1;
  if (nn_capsrv_detail_g_AlbumAccessorService != 0) {
    this_ = (void*)(**(
        __int64 (***)(__int64))nn_capsrv_detail_g_AlbumAccessorService)(
        nn_capsrv_detail_g_AlbumAccessorService);
  }
  v3 = (void*)nn_capsrv_GetShimLibraryVersion_plt(this_);
  v4 = nn_applet_GetAppletResourceUserId_plt(v3);
  LODWORD(v7[0]) = (*(__int64 (**)(__int64, void*, __int64))(*(_QWORD*)v2 +
                                                             32LL))(v2, v3, v4);
  if (LODWORD(v7[0]) != 0) {
    nn_diag_detail_AbortImpl_plt_858db0(v7);
  }
  (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  return 0;
}

__int64 nn_capsrv_FinalizeAlbumAccessForApplication()
{
  __int64 v0;
  __int64 result;
  int v2;
  __int64 v3;
  __int64 v4;

  nn_os_SdkMutexType_Lock_plt(
      &nn_capsrv_detail_g_AlbumMovieReadStreamServiceMutex);
  v0 = nn_capsrv_detail_g_AlbumMovieReadStreamService;
  nn_capsrv_detail_g_AlbumMovieReadStreamService = 0;
  if (v0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 8LL))(v0);
  }
  result = nn_os_SdkMutexType_Unlock_plt(
      &nn_capsrv_detail_g_AlbumMovieReadStreamServiceMutex);
  v2 = SdkData_f29968;
  if (SdkData_f29968 <= 1) {
    v3 = SdkData_f29960;
    SdkData_f29960 = 0;
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    }
    v4 = nn_capsrv_detail_g_AlbumAccessorService;
    nn_capsrv_detail_g_AlbumAccessorService = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
    result = am_interface_accessors_1c6b88(SdkData_f29b30_alt1);
    v2 = SdkData_f29968;
  }
  SdkData_f29968 = v2 - 1;
  return result;
}

__int64 nn_capsrv_2c69d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8;
  unsigned int v9;
  __int64 v11;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v8 = *(_DWORD*)(a1 + 12);
  if (v8 != 0) {
    if (*(_QWORD*)(a1 + 16) == 0) {
      *(_QWORD*)(a1 + 16) = a3;
      *(_QWORD*)(a1 + 24) = a4;
    }
    v9 = 0;
    *(_DWORD*)(a1 + 12) = v8 + 1;
  }
  else {
    v11 = 0;
    v9 = nn_capsrv_2c6a88_alt1(a2, &v11);
    if (v9 != 0) {
      if (v11 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      }
    }
    else {
      *(_QWORD*)(a1 + 16) = a3;
      *(_QWORD*)(a1 + 24) = a4;
      *(_DWORD*)(a1 + 12) = 1;
      *(_QWORD*)a1 = v11;
    }
  }
  nn_os_SdkMutexType_Unlock_plt(a1 + 8);
  return v9;
}

__int64 nn_capsrv_2c6a88(_QWORD* a1, __int64* a2)
{
  _QWORD* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;

  v2 = (_QWORD*)*a1;
  v5 = nn_capsrv_2c6b90_alt1(*a1);
  v6 = a1[2];
  if (v6 == 0) {
    v6 = *v2 + 144LL;
    a1[2] = v6;
  }
  v7 = a1[1];
  v15 = 0;
  nn_sf_hipc_InitializeHipcServiceResolution_plt(v5);
  v8 = nn_sf_hipc_ConnectToHipcService_plt(&v15, v7);
  nn_sf_hipc_FinalizeHipcServiceResolution_plt();
  if (v8 != 0) {
    SdkRoutine_1d3d98(v2);
  }
  else {
    v9 = v15;
    v10 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v6 + 16LL))(
        v6, 40, 8);
    v11 = v10;
    if (v10 != 0) {
      *(_DWORD*)(v10 + 24) = 1;
      *(_DWORD*)(v10 + 8) = 1;
      *(_DWORD*)(v10 + 12) = v9;
      v12 = SdkData_e877a8;
      *(_QWORD*)(v10 + 32) = v6;
      *(_QWORD*)v10 = v12 + 16;
      *(_QWORD*)(v10 + 16) = v12 + 216;
      nn_sf_impl_detail_ServiceObjectImplBase2_AddReferenceImpl_plt(v10 + 24);
    }
    v13 = *a2;
    *a2 = v11;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  return v8;
}

__int64 nn_capsrv_2c6b90(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  nn_os_SdkMutexType_Lock_plt(a1 + 8);
  v2 = *(_DWORD*)(a1 + 12);
  if (v2 != 0) {
    v3 = v2 + 1;
  }
  else {
    v4 = nn_lmem_CreateUnitHeap_plt(a1 + 176, 256, 64, 4, 16, a1 + 16);
    v5 = SdkData_e87068;
    *(_QWORD*)a1 = a1 + 16;
    *(_QWORD*)(a1 + 160) = v5 + 16;
    *(_QWORD*)(a1 + 168) = v4;
    v3 = 1;
  }
  *(_DWORD*)(a1 + 12) = v3;
  return nn_os_SdkMutexType_Unlock_plt(a1 + 8);
}

#pragma GCC visibility pop
