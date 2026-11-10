#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_4c3860(__int64, __int64, _QWORD**);
__int64 SdkRoutine_86eff0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_ABuffer_ABuffer_plt_86e010(_QWORD, _QWORD);
__int64 nandroid_ABuffer_setRange_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMediaFormat_fromMsg_plt(_QWORD);
__int64 nandroid_AMessage_AMessage_plt_86da50(void);
__int64 nandroid_AMessage_setBuffer_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_setString_plt_86de10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(_QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_String8_plt_86d890(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_finish_vector_plt(_QWORD);
__int64 nandroid_extractors_mp4_4f4ea0(__int64 result, __int64);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_GetTlsValue_plt(_QWORD);
__int64 snprintf_plt(_QWORD, _QWORD, const char*, ...);
__int64 strlen_plt(_QWORD);
extern __int64 SdkData_e88330;
extern __int64 SdkData_e88420;
extern __int64 SdkData_e888c0;
extern void (*SdkData_e88338[493])();
bool nandroid_4dffd0(__int64 a1, __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void nandroid_4e0050(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nandroid_4e0070(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nandroid_4e0080(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nandroid_4e0090(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void nandroid_4f8550(PSEUDO_X8 x8_);
__int64 AMediaFormat_new();
__int64 AMediaFormat_delete(_QWORD* a1);
__int64 AMediaFormat_setString(__int64* a1, __int64 a2, __int64 a3);
__int64 AMediaFormat_setBuffer(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
unsigned __int8* nandroid_55f480(unsigned __int8* result, unsigned __int64 a2);
__int64 nandroid_55f4d0(_QWORD* a1);
__int64 translate_error(__int64 result);
__int64 reverse_translate_error(__int64 result);

bool nandroid_4dffd0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5;
  const char* v8;

  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 88LL))((void*)(&v8), (__int64)a1);
  v5 = snprintf_plt(a2, a3, "%s", v8);
  nandroid_String8_Destroy_String8_plt(&v8);
  return v5 > -1 && a3 > v5;
}

__attribute__((swiftcall)) void nandroid_4e0050(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    nandroid_String8_String8_plt_86d890(a1, "<unspecified>");
    return;
  }
}

__attribute__((swiftcall)) void nandroid_4e0070(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    nandroid_String8_String8_plt_86d870(a1);
    return;
  }
}

__attribute__((swiftcall)) void nandroid_4e0080(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    nandroid_String8_String8_plt_86d890(a1, "application/octet-stream");
    return;
  }
}

__attribute__((swiftcall)) void nandroid_4e0090(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    nandroid_String8_String8_plt_86d890(a1, "[movie] StreamSource");
    return;
  }
}

__attribute__((swiftcall)) void nandroid_4f8550(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0;
}

__int64 AMediaFormat_new()
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v1)();
  _QWORD** v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v6 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v1 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v1 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v1) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v2 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v1);
  v3 = SdkRoutine_4c3860(16, 1344, v2);
  nandroid_AMessage_AMessage_plt_86da50();
  v6 = v3;
  nandroid_RefBase_incStrong_plt(v3, &v6);
  result = nandroid_AMediaFormat_fromMsg_plt(&v6);
  if (v6 != 0) {
    v5 = result;
    nandroid_RefBase_decStrong_plt(v6, &v6);
    return v5;
  }
  return result;
}

__int64 AMediaFormat_delete(_QWORD* a1)
{
  _QWORD* v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;

  if (a1 != nullptr) {
    a1[2] = SdkData_e88420 + 16;
    v2 = a1 + 2;
    nandroid_VectorImpl_finish_vector_plt(a1 + 2);
    nandroid_SortedVectorImpl_Destroy_SortedVectorImpl_plt(v2);
    nandroid_String8_Destroy_String8_plt(a1 + 1);
    if (*a1 != 0) {
      nandroid_RefBase_decStrong_plt(*a1, a1);
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                    memory_order_acquire);
    v4 = SdkData_e88338[0];
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
      *(_DWORD*)v4 = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
    }
    v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
    nn_movie_detail_FreeMemory((__int64)a1, v5);
  }
  return 0;
}

__int64 AMediaFormat_setString(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;

  v3 = *a1;
  v6 = strlen_plt(a3);
  return nandroid_AMessage_setString_plt_86de10(v3, a2, a3, v6);
}

__int64 AMediaFormat_setBuffer(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v9)();
  _QWORD** v10;
  __int64 v11;
  __int64 result;
  __int64 v13;

  v13 = 0;
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v9 = SdkData_e88338[0];
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire_plt(SdkData_e88330) != 0) {
    *(_DWORD*)v9 = 0;
    *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v9) = 1;
    __cxa_guard_release_plt(SdkData_e88330);
  }
  v10 = (_QWORD**)nn_os_GetTlsValue_plt(*(unsigned int*)v9);
  v11 = SdkRoutine_4c3860(16, 64, v10);
  nandroid_ABuffer_ABuffer_plt_86e010(v11, a4);
  v13 = v11;
  nandroid_RefBase_incStrong_plt(v11, &v13);
  memcpy_plt(*(_QWORD*)(v13 + 24) + *(_QWORD*)(v13 + 40), a3, a4);
  nandroid_ABuffer_setRange_plt(v13, 0, a4);
  nandroid_AMessage_setBuffer_plt(*a1, a2, &v13);
  result = v13;
  if (v13 != 0) {
    return nandroid_RefBase_decStrong_plt(v13, &v13);
  }
  return result;
}

unsigned __int8* nandroid_55f480(unsigned __int8* result, unsigned __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  __int64 v6;

  v2 = *result;
  v3 = *((_QWORD*)result + 1);
  if ((v2 & 1) == 0) {
    v3 = v2 >> 1;
  }
  v4 = a2 >= v3;
  v5 = a2 - v3;
  if (v5 != 0 && v4) {
    return (unsigned __int8*)SdkRoutine_86eff0(result, v5, 0);
  }
  if ((v2 & 1) != 0) {
    v6 = *((_QWORD*)result + 2);
    *((_QWORD*)result + 1) = a2;
    *(_BYTE*)(v6 + a2) = 0;
  }
  else {
    *result++ = 2 * a2;
    result[a2] = 0;
  }
  return result;
}

__int64 nandroid_55f4d0(_QWORD* a1)
{
  __int64 v2;
  unsigned __int8 explicit;
  void(__attribute__((noreturn)) * v4)();
  _QWORD* v5;
  int v7;

  v2 = a1[2];
  *a1 = SdkData_e888c0 + 16;
  nandroid_extractors_mp4_4f4ea0((__int64)(a1 + 1), v2);
  explicit = atomic_load_explicit((atomic_uchar* volatile)SdkData_e88330,
                                  memory_order_acquire);
  v4 = SdkData_e88338[0];
  if ((explicit & 1) == 0) {
    v7 = __cxa_guard_acquire_plt(SdkData_e88330);
    v4 = SdkData_e88338[0];
    if (v7 != 0) {
      *(_DWORD*)SdkData_e88338[0] = 0;
      *((_BYTE*)((__int64*)0x4LL) + (_QWORD)v4) = 1;
      __cxa_guard_release_plt(SdkData_e88330);
      v4 = SdkData_e88338[0];
    }
  }
  v5 = (_QWORD*)nn_os_GetTlsValue_plt(*(unsigned int*)v4);
  return nn_movie_detail_FreeMemory((__int64)a1, v5);
}

__int64 translate_error(__int64 result)
{
  if ((int)result <= -1005) {
    if ((_DWORD)result == -1011) {
      return 4294957290LL;
    }
    if ((_DWORD)result == -1007) {
      return 4294957295LL;
    }
    return 4294957296LL;
  }
  if ((_DWORD)result == -1004) {
    return 4294957289LL;
  }
  if ((_DWORD)result == -38) {
    return 4294957291LL;
  }
  if ((_DWORD)result != 0) {
    return 4294957296LL;
  }
  return result;
}

__int64 reverse_translate_error(__int64 result)
{
  if ((int)result > -10006) {
    switch ((_DWORD)result) {
    case 0xFFFFD8EB:
      return 4294967258LL;
    case 0xFFFFD8EF:
      return 4294966289LL;
    case 0:
      break;
    default:
      return 0x80000000LL;
    }
  }
  else {
    if ((_DWORD)result == -10008) {
      return 4294967285LL;
    }
    if ((_DWORD)result != -10007) {
      if ((_DWORD)result == -10006) {
        return 4294966285LL;
      }
      return 0x80000000LL;
    }
    return 4294966292LL;
  }
  return result;
}

#pragma GCC visibility pop
