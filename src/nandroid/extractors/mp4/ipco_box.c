#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_RefBase_RefBase_plt(_QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_insertAt_plt(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_heif_Box_parseChunk_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88c58;
extern __int64 SdkData_e88c68;
extern __int64 SdkData_e88c70;
extern __int64 SdkData_e88c78;
extern __int64 SdkData_e88c80;
extern __int64 SdkData_e88c88;
extern __int64 SdkData_e88c90;
extern void (*SdkData_e88338[493])();
__int64 nandroid_heif_IpcoBox_parse(void* this_, _QWORD* a2, __int64 a3);
__int64 nandroid_heif_IpcoBox_onChunkData(void* this_, int a2, __int64 a3,
                                          __int64 a4);

__int64 nandroid_heif_IpcoBox_parse(void* this_, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  _QWORD** v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 result;
  _QWORD* v13;

  v3 = *((_QWORD*)this_ + 3);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v8 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v8 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v9 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
  v10 = (_QWORD*)SdkRoutine_4c3860(16, 16, v9);
  nandroid_RefBase_RefBase_plt(v10);
  *v10 = SdkData_e88c68 + 16;
  v13 = v10;
  nandroid_RefBase_incStrong_plt(v10, &v13);
  nandroid_VectorImpl_insertAt_plt(v3, &v13, *(_QWORD*)(v3 + 16), 1);
  if (v13 != nullptr) {
    nandroid_RefBase_decStrong_plt(v13, &v13);
  }
  v11 = (_QWORD*)((char*)a2 + a3);
  v13 = a2;
  while ((__int64)v13 < (__int64)v11) {
    result = nandroid_heif_Box_parseChunk_plt(this_, &v13);
    if ((_DWORD)result != 0) {
      return result;
    }
  }
  if (v13 == v11) {
    return 0;
  }
  else {
    return 4294966289LL;
  }
}

__int64 nandroid_heif_IpcoBox_onChunkData(void* this_, int a2, __int64 a3,
                                          __int64 a4)
{
  unsigned __int8 explicit;
  _QWORD** v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  void(__attribute__((noreturn)) * v14)();
  _QWORD** v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD** v23;
  _QWORD** v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD** v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  void(__attribute__((noreturn)) * v35)();
  void(__attribute__((noreturn)) * v36)();
  void(__attribute__((noreturn)) * v37)();
  void(__attribute__((noreturn)) * v38)();
  __int64 v39;

  v39 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  if (a2 <= 1769107315) {
    if (a2 == 1668246642) {
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        v37 = SdkData_e88338[0];
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v37) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v24 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
      v25 = SdkRoutine_4c3860(16, 48, v24);
      v26 = *((_QWORD*)this_ + 1);
      v11 = v25 + 24;
      v12 = (_QWORD*)v25;
      *(_QWORD*)v25 = SdkData_e88c58 + 16;
      *(_QWORD*)(v25 + 8) = v26;
      *(_DWORD*)(v25 + 16) = 1668246642;
      nandroid_RefBase_RefBase_plt(v25 + 24);
      v13 = SdkData_e88c88;
      goto LABEL_16;
    }
    if (a2 == 1752589123) {
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        v36 = SdkData_e88338[0];
        *(_DWORD*)SdkData_e88338[0] = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v36) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v8 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
      v9 = SdkRoutine_4c3860(16, 48, v8);
      v10 = *((_QWORD*)this_ + 1);
      v11 = v9 + 24;
      v12 = (_QWORD*)v9;
      *(_QWORD*)v9 = SdkData_e88c58 + 16;
      *(_QWORD*)(v9 + 8) = v10;
      *(_DWORD*)(v9 + 16) = 1752589123;
      nandroid_RefBase_RefBase_plt(v9 + 24);
      v13 = SdkData_e88c70;
    LABEL_16:
      v27 = v13 + 16;
      v28 = v13 + 72;
      v12[5] = 0;
      goto LABEL_19;
    }
  LABEL_11:
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v35 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v35) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v23 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v11 = SdkRoutine_4c3860(16, 16, v23);
    nandroid_RefBase_RefBase_plt(v11);
    *(_QWORD*)v11 = SdkData_e88c68 + 16;
    v21 = v39;
    v22 = nandroid_RefBase_incStrong_plt(v11, &v39);
    if (v21 == 0) {
      goto LABEL_21;
    }
  LABEL_20:
    v22 = nandroid_RefBase_decStrong_plt(v21, &v39);
    goto LABEL_21;
  }
  if (a2 == 1769107316) {
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v38 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v38) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v29 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v30 = SdkRoutine_4c3860(16, 48, v29);
    v31 = *((_QWORD*)this_ + 1);
    v11 = v30 + 24;
    v12 = (_QWORD*)v30;
    *(_QWORD*)v30 = SdkData_e88c58 + 16;
    *(_QWORD*)(v30 + 8) = v31;
    *(_DWORD*)(v30 + 16) = 1769107316;
    nandroid_RefBase_RefBase_plt(v30 + 24);
    v32 = SdkData_e88c90;
    *((_BYTE*)v12 + 40) = 0;
    v27 = v32 + 16;
    v28 = v32 + 72;
  LABEL_19:
    *v12 = v27;
    v12[3] = v28;
    v21 = v39;
    v22 = nandroid_RefBase_incStrong_plt(v11, &v39);
    if (v21 == 0) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  if (a2 != 1769173093) {
    goto LABEL_11;
  }
  v14 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v14 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v14) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v15 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v14);
  v16 = SdkRoutine_4c3860(16, 56, v15);
  v17 = *((_QWORD*)this_ + 1);
  v11 = v16 + 32;
  v18 = (_QWORD*)v16;
  strcpy((char*)(v16 + 16), "epsi");
  v19 = SdkData_e88c78;
  *(_DWORD*)(v16 + 24) = 0;
  *(_QWORD*)v16 = v19 + 16;
  *(_QWORD*)(v16 + 8) = v17;
  nandroid_RefBase_RefBase_plt(v16 + 32);
  v20 = SdkData_e88c80;
  v18[6] = 0;
  *v18 = v20 + 16;
  v18[4] = v20 + 72;
  v21 = v39;
  v22 = nandroid_RefBase_incStrong_plt(v11, &v39);
  if (v21 != 0) {
    goto LABEL_20;
  }
LABEL_21:
  if (v21 != v39) {
    nandroid_sp_report_race_plt(v22);
  }
  v39 = v11;
  v33 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v11 + 56LL))(
      v11, a3, a4);
  if (v33 == 0) {
    nandroid_VectorImpl_insertAt_plt(*((_QWORD*)this_ + 3), &v39,
                                     *(_QWORD*)(*((_QWORD*)this_ + 3) + 16LL),
                                     1);
  }
  if (v39 != 0) {
    nandroid_RefBase_decStrong_plt(v39, &v39);
  }
  return v33;
}

#pragma GCC visibility pop
