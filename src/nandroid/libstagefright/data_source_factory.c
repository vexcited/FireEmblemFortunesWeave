#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
    nandroid_NuCachedSource2_Create_plt(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_86f010(_QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 nandroid_FileSource_FileSource_plt(_QWORD, _QWORD);
__int64 nandroid_NuCachedSource2_RemoveCacheSpecificHeaders_plt(_QWORD, _QWORD,
                                                                _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_SortedVectorImpl_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_length_plt(_QWORD);
__int64 nandroid_String8_setTo_plt_86ed10(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 sprintf_plt(_QWORD, const char*, ...);
__int64 strcmp_plt(void* this_, const char*);
__int64 strncasecmp_plt(_QWORD, _QWORD, _QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88420;
extern char SdkData_bbbd5c;
extern void (*SdkData_e88338[493])();
__attribute__((swiftcall)) void
nandroid_DataSourceFactory_CreateFromURI(PSEUDO_X8 x8_, __int64 unused_int0,
                                         __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void

nandroid_DataSourceFactory_CreateFromURI(PSEUDO_X8 x8_, __int64 unused_int0,
                                         __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v11)();
  _QWORD** v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD** v16;
  void* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  int v21;
  _QWORD* v22;
  _QWORD** v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD** v27;
  _QWORD* v28;
  __int64 v29;
  int v30;
  void(__attribute__((noreturn)) * v32)();
  void(__attribute__((noreturn)) * v33)();
  void(__attribute__((noreturn)) * v34)();
  _QWORD* v35;
  _QWORD* v36;
  _QWORD* v37;
  struct {
    _QWORD v38[2];
    int v39;
  } v38_;
  _QWORD v40[5];
  char v41[4];
  void* v42;

  if (a3 != 0) {
    nandroid_String8_setTo_plt_86ed10(a3, &SdkData_bbbd5c);
  }
  v42 = nullptr;
  nandroid_String8_String8_plt_86d870(&v42);
  v41[0] = 0;
  memset(v40, 0, sizeof(v40));
  nandroid_SortedVectorImpl_SortedVectorImpl_plt(v40, 16, 0);
  v7 = SdkData_e88420;
  v40[0] = SdkData_e88420 + 16;
  if (a2 != 0) {
    SdkRoutine_86f010(v40, a2);
    nandroid_NuCachedSource2_RemoveCacheSpecificHeaders_plt(v40, &v42, v41);
  }
  v38_.v39 = 0;
  v38_.v38[0] = 0;
  v38_.v38[1] = 0;
  sprintf_plt(v38_.v38, "%lu/%lu/%d", 0, 0, -1);
  v37 = nullptr;
  if ((unsigned int)strncasecmp_plt("file://", a1, 7) != 0) {
    if ((unsigned int)strncasecmp_plt("http://", a1, 7) == 0 ||
        (unsigned int)strncasecmp_plt("https://", a1, 8) == 0) {
    LABEL_27:
      *a4 = 0;
      goto LABEL_38;
    }
    if ((unsigned int)strcmp_plt(v42, (const char*)v38_.v38) != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                      memory_order_acquire);
      v11 = SdkData_e88338[0];
      if ((explicit & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
        *(_DWORD*)v11 = 0;
        *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v11) = 1;
        __cxa_guard_release_plt(SdkData_e88330);
      }
      v12 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v11);
      v13 = SdkRoutine_4c3860(16, 96, v12);
      v14 = (_QWORD*)v13;
      v15 = a1;
      goto LABEL_14;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v34 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v34) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v27 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v24 = SdkRoutine_4c3860(16, 96, v27);
    v26 = (_QWORD*)v24;
    v25 = a1;
  LABEL_32:
    nandroid_FileSource_FileSource_plt(v24, v25);
    v28 = v37;
    v29 = nandroid_RefBase_incStrong_plt((char*)v26 + *(_QWORD*)(*v26 - 24LL),
                                         &v37);
    if (v28 != nullptr) {
      v29 = nandroid_RefBase_decStrong_plt((char*)v28 + *(_QWORD*)(*v28 - 24LL),
                                           &v37);
    }
    if (v28 != v37) {
      nandroid_sp_report_race_plt(v29);
    }
    v37 = v26;
    v30 = (*(__int64 (**)(_QWORD*))*v26)(v26);
    v22 = v37;
    if (v30 != 0) {
      goto LABEL_25;
    }
  LABEL_37:
    *a4 = v22;
    goto LABEL_38;
  }
  if ((unsigned int)strcmp_plt(v42, (const char*)v38_.v38) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      v33 = SdkData_e88338[0];
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v33) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v23 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
    v24 = SdkRoutine_4c3860(16, 96, v23);
    v25 = a1 + 7;
    v26 = (_QWORD*)v24;
    goto LABEL_32;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    v32 = SdkData_e88338[0];
    *(_DWORD*)SdkData_e88338[0] = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v32) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v16 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)SdkData_e88338[0]);
  v13 = SdkRoutine_4c3860(16, 96, v16);
  v14 = (_QWORD*)v13;
  v15 = a1 + 7;
LABEL_14:
  nandroid_FileSource_FileSource_plt(v13, v15);
  v35 = v14;
  nandroid_RefBase_incStrong_plt((char*)v14 + *(_QWORD*)(*v14 - 24LL), &v35);
  if (nandroid_String8_length_plt(&v42) != 0) {
    v17 = v42;
  }
  else {
    v17 = nullptr;
  }
  v18 =
      X8CALL_X0(void*, nandroid_NuCachedSource2_Create_plt(
                           (void*)(&v36), &v35, v17, (unsigned __int8)v41[0]));
  v19 = v37;
  if (v37 != nullptr) {
    v18 = (_QWORD*)nandroid_RefBase_decStrong_plt(
        (char*)v37 + *(_QWORD*)(*v37 - 24LL), &v37);
  }
  if (v19 != v37) {
    nandroid_sp_report_race_plt(v18);
  }
  v20 = v36;
  v36 = nullptr;
  v37 = v20;
  if (v35 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v35 + *(_QWORD*)(*v35 - 24LL), &v35);
  }
  if (v37 == nullptr) {
    goto LABEL_27;
  }
  v21 = (*(__int64 (**)(_QWORD*))*v37)(v37);
  v22 = v37;
  if (v21 == 0) {
    goto LABEL_37;
  }
LABEL_25:
  *a4 = 0;
  if (v22 != nullptr) {
    nandroid_RefBase_decStrong_plt((char*)v22 + *(_QWORD*)(*v22 - 24LL), &v37);
  }
LABEL_38:
  v40[0] = v7 + 16;
  nandroid_VectorImpl_finish_vector_plt(v40);
  nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(v40);
  {
    nandroid_String8_Destroy_String8_plt(&v42);
    return;
  }
}

#pragma GCC visibility pop
