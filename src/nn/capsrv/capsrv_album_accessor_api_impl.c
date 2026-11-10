#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int, unsigned __int64);
__int64 nn_applet_GetAppletResourceUserId_plt(void* this_);
__int64 nn_capsrv_detail_ScreenShotAttributeForApplicationBase_SetDefault_plt(
    _QWORD);
__int64 nn_os_SdkMutexType_Lock_plt(_QWORD);
__int64 nn_os_SdkMutexType_Unlock_plt(_QWORD);
extern _UNKNOWN nn_capsrv_detail_g_AlbumMovieReadStreamServiceMutex;
extern __int64 SdkData_f29960;
extern __int64 nn_capsrv_detail_g_AlbumAccessorService;
extern __int64 nn_capsrv_detail_g_AlbumMovieReadStreamService;
__int64 nn_capsrv_LoadAlbumContentsFileScreenShotImageForApplication(
    _DWORD* a1, _DWORD* a2, __int64 a3, void* a4, _QWORD* a5, __int64 a6,
    void* a7, __int64 a8, __int64* a9);
__int64 nn_capsrv_LoadAlbumContentsFileThumbnailImageForApplication(
    _DWORD* a1, _DWORD* a2, __int64 a3, void* this_, __int64 a5, __int64 a6,
    void* a7, __int64 a8, __int64* a9);
__int64 nn_capsrv_OpenAlbumMovieReadStreamForApplication(__int64** a1,
                                                         __int64* a2);

__int64 nn_capsrv_LoadAlbumContentsFileScreenShotImageForApplication(
    _DWORD* a1, _DWORD* a2, __int64 a3, void* a4, _QWORD* a5, __int64 a6,
    void* a7, __int64 a8, __int64* a9)
{
  __int64 v17;
  void* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  _QWORD v26[4];
  _QWORD v27[2];
  struct {
    _QWORD v28[2];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v28_;
  _QWORD v33[2];
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;
  __int64 v36;
  __int64 v37;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset(v26, 0, sizeof(v26));
  if (a1 != nullptr) {
    *a1 = 0;
  }
  if (a2 != nullptr) {
    *a2 = 0;
  }
  if (a3 != 0) {
    nn_capsrv_detail_ScreenShotAttributeForApplicationBase_SetDefault_plt(a3),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  if (a4 != nullptr) {
    memset_plt(a4, nullptr, 1028, (unsigned __int64)a4),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v17 = nn_capsrv_detail_g_AlbumAccessorService;
  if (nn_capsrv_detail_g_AlbumAccessorService != 0) {
    (**(void (***)(__int64))nn_capsrv_detail_g_AlbumAccessorService)(
        nn_capsrv_detail_g_AlbumAccessorService),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v18 =
      (void*)memset_plt((void*)&v34_.v34, nullptr, 1280, (unsigned __int64)a4),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v19 = nn_applet_GetAppletResourceUserId_plt(v18),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v20 = *a9;
  v21 = a9[1];
  v33[0] = a5;
  v33[1] = a6;
  v27[0] = a7;
  v27[1] = a8;
  v28_.v28[0] = v20;
  v28_.v28[1] = v21;
  v22 = a9[3];
  v28_.v29 = a9[2];
  v28_.v30 = v22;
  v28_.v31 = v28_.v29;
  v28_.v32 = 0;
  v23 = (*(__int64 (**)(__int64, __int64*, _QWORD*, _QWORD*, _QWORD*, _QWORD*,
                        __int64))(*(_QWORD*)v17 + 72LL))(
      v17, &v34_.v34, v33, v28_.v28, v26, v27, v19),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if ((v23 & 0x3FFFFF) == 0x34CE) {
    *a1 = 320;
    *a2 = 180;
    *a5 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    goto LABEL_15;
  }
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (a1 == nullptr) {
    LABEL_16:
      if (a2 != nullptr) {
        *a2 = 0;
      }
      if (a3 != 0) {
        nn_capsrv_detail_ScreenShotAttributeForApplicationBase_SetDefault_plt(
            a3),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      if (a4 != nullptr) {
        memset_plt(a4, nullptr, 1028, v24),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      }
      goto LABEL_31;
    }
  LABEL_15:
    *a1 = 0;
    goto LABEL_16;
  }
  if (a1 != nullptr) {
    *a1 = v34_.v34;
  }
  if (a2 != nullptr) {
    *a2 = v34_.v35;
  }
  if (a3 != 0) {
    memcpy_plt(a3, &v36, 64),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  if (a4 != nullptr) {
    memcpy_plt(a4, &v37, 1028),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
LABEL_31:
  memset_plt(a7, nullptr, a8, v24),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  return v23;
}

__int64 nn_capsrv_LoadAlbumContentsFileThumbnailImageForApplication(
    _DWORD* a1, _DWORD* a2, __int64 a3, void* this_, __int64 a5, __int64 a6,
    void* a7, __int64 a8, __int64* a9)
{
  __int64 v17;
  void* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  _QWORD v26[4];
  _QWORD v27[2];
  struct {
    _QWORD v28[2];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v28_;
  _QWORD v33[2];
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;
  __int64 v36;
  __int64 v37;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  memset(v26, 0, sizeof(v26));
  if (a1 != nullptr) {
    *a1 = 0;
  }
  if (a2 != nullptr) {
    *a2 = 0;
  }
  if (a3 != 0) {
    nn_capsrv_detail_ScreenShotAttributeForApplicationBase_SetDefault_plt(a3),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  if (this_ != nullptr) {
    memset_plt(this_, nullptr, 1028, (unsigned __int64)this_),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v17 = nn_capsrv_detail_g_AlbumAccessorService;
  if (nn_capsrv_detail_g_AlbumAccessorService != 0) {
    (**(void (***)(__int64))nn_capsrv_detail_g_AlbumAccessorService)(
        nn_capsrv_detail_g_AlbumAccessorService),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  v18 = (void*)memset_plt((void*)&v34_.v34, nullptr, 1280,
                          (unsigned __int64)this_),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v19 = nn_applet_GetAppletResourceUserId_plt(v18),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v20 = *a9;
  v21 = a9[1];
  v33[0] = a5;
  v33[1] = a6;
  v27[0] = a7;
  v27[1] = a8;
  v28_.v28[0] = v20;
  v28_.v28[1] = v21;
  v22 = a9[3];
  v28_.v29 = a9[2];
  v28_.v30 = v22;
  v28_.v31 = v28_.v29;
  v28_.v32 = 0;
  v23 = (*(__int64 (**)(__int64, __int64*, _QWORD*, _QWORD*, _QWORD*, _QWORD*,
                        __int64))(*(_QWORD*)v17 + 80LL))(
      v17, &v34_.v34, v33, v28_.v28, v26, v27, v19),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    if (a1 != nullptr) {
      *a1 = 0;
    }
    if (a2 != nullptr) {
      *a2 = 0;
    }
    if (a3 != 0) {
      nn_capsrv_detail_ScreenShotAttributeForApplicationBase_SetDefault_plt(a3),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    if (this_ != nullptr) {
      memset_plt(this_, nullptr, 1028, v24),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
  }
  else {
    if (a1 != nullptr) {
      *a1 = v34_.v34;
    }
    if (a2 != nullptr) {
      *a2 = v34_.v35;
    }
    if (a3 != 0) {
      memcpy_plt(a3, &v36, 64),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    if (this_ != nullptr) {
      memcpy_plt(this_, &v37, 1028),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    }
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  }
  memset_plt(a7, nullptr, a8, v24),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  return v23;
}

__int64 nn_capsrv_OpenAlbumMovieReadStreamForApplication(__int64** a1,
                                                         __int64* a2)
{
  void* v4;
  __int64 v5;
  void* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v21_;
  __int64 v26;
  __int64* v27;

  v4 = (void*)nn_os_SdkMutexType_Lock_plt(
      &nn_capsrv_detail_g_AlbumMovieReadStreamServiceMutex);
  v5 = nn_capsrv_detail_g_AlbumMovieReadStreamService;
  if (nn_capsrv_detail_g_AlbumMovieReadStreamService != 0) {
    (**(void (***)(__int64))nn_capsrv_detail_g_AlbumMovieReadStreamService)(
        nn_capsrv_detail_g_AlbumMovieReadStreamService);
    v6 = (void*)nn_os_SdkMutexType_Unlock_plt(
        &nn_capsrv_detail_g_AlbumMovieReadStreamServiceMutex);
    goto LABEL_3;
  }
  v12 = nn_capsrv_detail_g_AlbumAccessorService;
  if (nn_capsrv_detail_g_AlbumAccessorService != 0) {
    v4 = (void*)(**(
        __int64 (***)(__int64))nn_capsrv_detail_g_AlbumAccessorService)(
        nn_capsrv_detail_g_AlbumAccessorService);
  }
  v13 = *a2;
  v14 = a2[1];
  v26 = 0;
  v21_.v21[0] = v13;
  v21_.v21[1] = v14;
  v15 = a2[3];
  v21_.v22 = a2[2];
  v21_.v23 = v15;
  v21_.v24 = v21_.v22;
  v21_.v25 = 0;
  v16 = nn_applet_GetAppletResourceUserId_plt(v4);
  v27 = &v26;
  v10 = (*(__int64 (**)(__int64, __int64**, _QWORD*, __int64))(
      *(_QWORD*)v12 + 168LL))(v12, &v27, v21_.v21, v16);
  v5 = 0;
  if (v10 != 0) {
    goto LABEL_22;
  }
  v17 = v26;
  if (v26 != 0) {
    (**(void (***)(__int64))v26)(v26);
    (**(void (***)(__int64))v17)(v17);
  }
  v18 = SdkData_f29960;
  SdkData_f29960 = v17;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v19 = v26;
  if (v26 != 0) {
    (**(void (***)(__int64))v26)(v26);
  }
  v20 = nn_capsrv_detail_g_AlbumMovieReadStreamService;
  nn_capsrv_detail_g_AlbumMovieReadStreamService = v19;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  v5 = v26;
  if (v26 != 0) {
    (**(void (***)(__int64))v26)(v26);
  LABEL_22:
    if (v26 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  v6 = (void*)nn_os_SdkMutexType_Unlock_plt(
      &nn_capsrv_detail_g_AlbumMovieReadStreamServiceMutex);
  if (v10 != 0) {
    if (v5 == 0) {
      return v10;
    }
    goto LABEL_5;
  }
LABEL_3:
  v27 = nullptr;
  v7 = nn_applet_GetAppletResourceUserId_plt(v6);
  v8 = a2[1];
  v21_.v21[0] = *a2;
  v21_.v21[1] = v8;
  v9 = a2[3];
  v21_.v22 = a2[2];
  v21_.v23 = v9;
  v21_.v24 = v21_.v22;
  v21_.v25 = 0;
  v10 = (*(__int64 (**)(__int64, __int64**, _QWORD*, __int64))(
      *(_QWORD*)v5 + 32LL))(v5, &v27, v21_.v21, v7);
  if (v10 == 0) {
    *a1 = v27;
  }
LABEL_5:
  (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  return v10;
}

#pragma GCC visibility pop
