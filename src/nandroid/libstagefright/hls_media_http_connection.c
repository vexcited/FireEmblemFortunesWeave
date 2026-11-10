#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_86e240(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64
    nandroid_HlsMediaHttpConnection_Destroy_HlsMediaHttpConnection_plt(_QWORD);
__int64 nandroid_RefBase_RefBase_plt(_QWORD);
__int64 nandroid_SortedVectorImpl_indexOf_plt(_QWORD, _QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_String8_plt_86d890(_QWORD, _QWORD);
__int64 nandroid_String8_String8_plt_86d8a0(_QWORD, _QWORD);
__int64 nandroid_String8_setTo_plt_86e250(_QWORD, _QWORD);
__int64 nandroid_libstagefright_4df7e0(__int64 result, __int64);
__int64 nn_movie_detail_AllocateMemory(__int64, _QWORD**);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 strlen_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e885c8;
extern void (*SdkData_e88338[493])();
void __attribute__((noreturn)) nn_fs_dc4d0();
__int64 nandroid_HlsMediaHttpConnection_HlsMediaHttpConnection_4def10(
    _QWORD* a1, __int64 a2, __int64 a3);
__int64* nandroid_HlsMediaHttpConnection_HlsMediaHttpConnection_4def60(
    __int64* result, __int64* a2, __int64 a3, __int64 a4);
void nandroid_HlsMediaHttpConnection_Destroy_HlsMediaHttpConnection_4def90(
    void* this_, __int64* a2);
void nandroid_HlsMediaHttpConnection_Destroy_HlsMediaHttpConnection_4df1f0(
    void* this_);
bool nandroid_HlsMediaHttpConnection_connect(__int64 a1, __int64 a2,
                                             __int64 a3);
__int64 nandroid_HlsMediaHttpConnection_disconnect(void* this_);
__int64 nandroid_HlsMediaHttpConnection_readAt(void* this_, __int64 a2,
                                               void* a3, __int64 a4);
__int64 nandroid_HlsMediaHttpConnection_getSize(void* this_);
__int64 nandroid_HlsMediaHttpConnection_getMIMEType(void* this_, void* a2);
__int64 nandroid_HlsMediaHttpConnection_getUri(void* this_, void* a2);

__int64 nandroid_HlsMediaHttpConnection_HlsMediaHttpConnection_4def10(
    _QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;

  result = nandroid_RefBase_RefBase_plt(a1 + 3);
  v7 = SdkData_e885c8 + 144;
  *a1 = SdkData_e885c8 + 24;
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = v7;
  return result;
}

__int64* nandroid_HlsMediaHttpConnection_HlsMediaHttpConnection_4def60(
    __int64* result, __int64* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;

  v4 = a2[1];
  *result = v4;
  *(__int64*)((char*)result + *(_QWORD*)(v4 - 24)) = a2[2];
  v5 = *a2;
  *result = *a2;
  *(__int64*)((char*)result + *(_QWORD*)(v5 - 24)) = a2[3];
  result[1] = a3;
  result[2] = a4;
  return result;
}

void nandroid_HlsMediaHttpConnection_Destroy_HlsMediaHttpConnection_4def90(
    void* this_, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  *(_QWORD*)this_ = *a2;
  *(_QWORD*)((char*)this_ + *(_QWORD*)(v2 - 24)) = a2[3];
  (*(void (**)(void*))(*(_QWORD*)this_ + 8LL))(this_);
  v4 = *((_QWORD*)this_ + 1);
  if (v4 != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 80LL))(v4,
                                                         *((_QWORD*)this_ + 2));
  }
}

void nandroid_HlsMediaHttpConnection_Destroy_HlsMediaHttpConnection_4df1f0(
    void* this_)
{
  nandroid_HlsMediaHttpConnection_Destroy_HlsMediaHttpConnection_plt(
      (char*)this_ + *(_QWORD*)(*(_QWORD*)this_ - 24LL));
}

bool nandroid_HlsMediaHttpConnection_connect(__int64 a1, __int64 a2, __int64 a3)
{
  _BOOL8 result;
  atomic_uchar* v6;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v8)();
  __int64 v9;
  unsigned __int64 i;
  __int64 v11;
  __int64 v12;
  _QWORD** v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD** v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v29;
  struct {
    unsigned __int64 v30;
    __int64 v31;
    _QWORD* v32;
    __int64 v33;
    unsigned __int64 v34;
    __int64 v35;
    _QWORD* v36;
  } v30_;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    __int64 v39;
    _QWORD* v40;
  } v37_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    __int64 v43;
    _QWORD* v44;
  } v41_;
  __int64* v45;
  struct {
    __int64 v46;
    __int64 v47;
    __int64 v48;
  } v46_;

  result = false;
  if (a2 != 0 && a3 != 0) {
    if (*(_QWORD*)(a1 + 8) == 0) {
      return false;
    }
    v27 = a1;
    v46_.v47 = 0;
    v46_.v48 = 0;
    v45 = nullptr;
    v46_.v46 = 0;
    v6 = (atomic_uchar*)SdkData_e88330;
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v8 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v8 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v46_.v47 = nn_os_GetTlsValue_plt(*(unsigned int*)v8);
    v46_.v48 = 0;
    v45 = &v46_.v46;
    v46_.v46 = 0;
    if (*(_QWORD*)(a3 + 16) != 0) {
      v9 = 0;
      for (i = 0; i < *(_QWORD*)(a3 + 16); ++i) {
        v11 = *(_QWORD*)(a3 + 8);
        v41_.v43 = 0;
        v41_.v44 = nullptr;
        v41_.v41 = 0;
        v41_.v42 = 0;
        v12 = *(_QWORD*)(v11 + v9);
        if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v6) != 0) {
          *(_DWORD*)v8 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
          __cxa_guard_release_plt(v6);
        }
        v13 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
        v41_.v44 = v13;
        v14 = strlen_plt(v12);
        if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_41:
          nn_fs_dc4d0();
        }
        v15 = v14;
        if (v14 >= 0x17) {
          if ((v14 | 7) == 0x17) {
            v17 = 26;
          }
          else {
            v17 = (v14 | 7) + 1;
          }
          v16 = (char*)nn_movie_detail_AllocateMemory(v17, v13);
          v41_.v42 = v15;
          v41_.v43 = (__int64)v16;
          v41_.v41 = v17 | 1;
        }
        else {
          v16 = (char*)&v41_.v41 + 1;
          LOBYTE(v41_.v41) = 2 * v14;
          if (v14 == 0) {
            goto LABEL_18;
          }
        }
        memmove_plt(v16, v12, v15);
      LABEL_18:
        v16[v15] = 0;
        v37_.v39 = 0;
        v37_.v40 = nullptr;
        v18 = *(_QWORD*)(a3 + 8);
        v37_.v37 = 0;
        v37_.v38 = 0;
        nandroid_String8_String8_plt_86d8a0(&v29, v18 + v9);
        nandroid_String8_String8_plt_86d870(&v30_.v30);
        v19 = nandroid_SortedVectorImpl_indexOf_plt(a3, &v29);
        nandroid_String8_Destroy_String8_plt(&v30_.v30);
        nandroid_String8_Destroy_String8_plt(&v29);
        v20 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 16 * v19 + 8);
        if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0 &&
            (unsigned int)__cxa_guard_acquire_plt(v6) != 0) {
          *(_DWORD*)v8 = 0;
          *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v8) = 1;
          __cxa_guard_release_plt(v6);
        }
        v21 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v8);
        v37_.v40 = v21;
        v22 = strlen_plt(v20);
        if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_41;
        }
        v23 = v22;
        if (v22 >= 0x17) {
          if ((v22 | 7) == 0x17) {
            v25 = 26;
          }
          else {
            v25 = (v22 | 7) + 1;
          }
          v24 = (char*)nn_movie_detail_AllocateMemory(v25, v21);
          v37_.v38 = v23;
          v37_.v39 = (__int64)v24;
          v37_.v37 = v25 | 1;
        LABEL_27:
          memmove_plt(v24, v20, v23);
          goto LABEL_28;
        }
        v24 = (char*)&v37_.v37 + 1;
        LOBYTE(v37_.v37) = 2 * v22;
        if (v22 != 0) {
          goto LABEL_27;
        }
      LABEL_28:
        v24[v23] = 0;
        v29 = v41_.v41;
        v30_.v30 = v41_.v42;
        v30_.v31 = v41_.v43;
        v30_.v32 = v41_.v44;
        v30_.v33 = v37_.v37;
        v30_.v34 = v37_.v38;
        v30_.v35 = v37_.v39;
        v30_.v36 = v37_.v40;
        SdkRoutine_86e240(&v45, &v29, &v29);
        if ((v30_.v33 & 1) != 0) {
          nn_movie_detail_FreeMemory(v30_.v35, v30_.v36);
          if ((v29 & 1) != 0) {
          LABEL_32:
            nn_movie_detail_FreeMemory(v30_.v31, v30_.v32);
          }
        }
        else if ((v29 & 1) != 0) {
          goto LABEL_32;
        }
        v9 += 16;
      }
    }
    v26 = (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64**, _QWORD))(
        **(_QWORD**)(v27 + 8) + 32LL))(*(_QWORD*)(v27 + 8), a2, 0, &v45,
                                       *(_QWORD*)(v27 + 16));
    nandroid_libstagefright_4df7e0((__int64)&v45, v46_.v46);
    return v26 == 0;
  }
  return result;
}

__int64 nandroid_HlsMediaHttpConnection_disconnect(void* this_)
{
  __int64 result;

  result = *((_QWORD*)this_ + 1);
  if (result != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)result + 40LL))(
        result, *((_QWORD*)this_ + 2));
  }
  return result;
}

__int64 nandroid_HlsMediaHttpConnection_readAt(void* this_, __int64 a2,
                                               void* a3, __int64 a4)
{
  __int64 result;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;

  result = -22;
  if (a3 != nullptr && a4 != 0) {
    v6 = *((_QWORD*)this_ + 1);
    if (v6 != 0) {
      v9 = 0;
      v7 = (*(__int64 (**)(__int64, __int64*, __int64, void*))(
          *(_QWORD*)v6 + 48LL))(v6, &v9, a2, a3);
      if (v7 != 0) {
        v8 = -19;
        if ((v7 & 0x3FFFFF) == 0x7FB00) {
          v8 = -1005;
        }
        if ((v7 & 0x3FFFFF) == 0x7F700) {
          return -1003;
        }
        else {
          return v8;
        }
      }
      else {
        return v9;
      }
    }
    else {
      return -19;
    }
  }
  return result;
}

__int64 nandroid_HlsMediaHttpConnection_getSize(void* this_)
{
  __int64 v2;
  __int64 v4;

  v2 = *((_QWORD*)this_ + 1);
  if (v2 != 0 && (v4 = 0, (*(unsigned int (**)(__int64, __int64*, _QWORD))(
                              *(_QWORD*)v2 + 56LL))(
                              v2, &v4, *((_QWORD*)this_ + 2)) == 0)) {
    return v4;
  }
  else {
    return -1010;
  }
}

__int64 nandroid_HlsMediaHttpConnection_getMIMEType(void* this_, void* a2)
{
  __int64 v3;
  _BYTE v6[8];
  __int64 v7;

  if (a2 == nullptr) {
    return 4294967274LL;
  }
  v3 = *((_QWORD*)this_ + 1);
  if (v3 == 0) {
    return 4294966286LL;
  }
  v7 = 0;
  if ((*(unsigned int (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v3 + 72LL))(
          v3, &v7, *((_QWORD*)this_ + 2)) != 0) {
    return 4294966286LL;
  }
  nandroid_String8_String8_plt_86d890(v6, v7);
  nandroid_String8_setTo_plt_86e250(a2, v6);
  nandroid_String8_Destroy_String8_plt(v6);
  return 0;
}

__int64 nandroid_HlsMediaHttpConnection_getUri(void* this_, void* a2)
{
  __int64 v3;
  _BYTE v6[8];
  __int64 v7;

  if (a2 == nullptr) {
    return 4294967274LL;
  }
  v3 = *((_QWORD*)this_ + 1);
  if (v3 == 0) {
    return 4294966286LL;
  }
  v7 = 0;
  if ((*(unsigned int (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v3 + 64LL))(
          v3, &v7, *((_QWORD*)this_ + 2)) != 0) {
    return 4294966286LL;
  }
  nandroid_String8_String8_plt_86d890(v6, v7);
  nandroid_String8_setTo_plt_86e250(a2, v6);
  nandroid_String8_Destroy_String8_plt(v6);
  return 0;
}

#pragma GCC visibility pop
