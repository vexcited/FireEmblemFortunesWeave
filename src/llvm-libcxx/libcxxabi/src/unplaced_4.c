#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_get_globals_fast();
__int64 __cxxabiv1___calloc_with_fallback(__int64, __int64);
__int64 nn_os_SetTlsValue_plt(__int64, __int64);
char* __dynamic_cast(_QWORD*, _QWORD*, _QWORD*, __int64);
extern _UNKNOWN SdkData_d02cc8;
extern _UNKNOWN SdkData_d02cd8;
extern __int64 SdkData_e89848;
extern __int64 SdkData_e89850;
extern __int64 SdkData_e89858;
extern __int64 SdkData_e89860;
extern __int64 SdkData_e89878;
extern __int64 SdkData_e89880;
extern int SdkData_1061698;
int strcmp_plt(const char*, const char*);
unsigned __int64* __cxa_begin_catch(unsigned __int64*);
void SdkRoutine_aec10();
void __attribute__((noreturn)) std_terminate_plt(_QWORD);
__int64 llvm_libcxx_libcxxabi_src_84afa0();
void __attribute__((noreturn)) llvm_libcxx_libcxxabi_src_84c1f0(__int64 a1,
                                                                ...);
char* llvm_libcxx_libcxxabi_src_84c6c0(__int64 a1, _QWORD* a2, __int64* a3);
char* llvm_libcxx_libcxxabi_src_84d260(__int64 a1, _QWORD* a2, _QWORD* a3);
void __attribute__((noreturn))
llvm_libcxx_libcxxabi_src_84e710(unsigned __int64* a1);

__int64 llvm_libcxx_libcxxabi_src_84afa0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;

  result = __cxa_get_globals_fast();
  if (result == 0) {
    v1 = __cxxabiv1___calloc_with_fallback(1, 16);
    if (v1 == 0) {
      llvm_libcxx_libcxxabi_src_84c1f0(
          (__int64)"libc++abi: cannot allocate __cxa_eh_globals");
    }
    v2 = v1;
    nn_os_SetTlsValue_plt((unsigned int)SdkData_1061698, v1);
    return v2;
  }
  return result;
}

void __attribute__((noreturn)) llvm_libcxx_libcxxabi_src_84c1f0(__int64 a1, ...)
{
  __builtin_va_list va;
  __builtin_va_list va1;

  __builtin_va_start(va, a1);
  __builtin_va_start(va1, a1);
  ((void(__attribute__((noreturn))*)(__int64, void*))SdkRoutine_aec10)(
      a1, (__int64)&va);
}

char* llvm_libcxx_libcxxabi_src_84c6c0(__int64 a1, _QWORD* a2, __int64* a3)
{
  char* result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    _BYTE v13[7];
    char v14;
    __int64 v15;
  } v7_;

  if (*(_QWORD*)(a1 + 8) == a2[1]) {
    return (_BYTE*)(((char*)0x0LL) + 1);
  }
  result =
      __dynamic_cast(a2, (_QWORD*)SdkData_e89848, (_QWORD*)SdkData_e89850, 0);
  if (result != nullptr) {
    {
      v6 = *a3;
      __asm__ volatile("" ::"r"(v6));
    }
    if (*a3 == 0) {
      llvm_libcxx_libcxxabi_src_84c1f0(
          (__int64)"libc++abi: catching a class without an object?");
    }
    *(_DWORD*)&v7_.v13[3] = 0;
    v7_.v8 = 0;
    v7_.v9 = 0;
    v7_.v11 = 0;
    v7_.v12 = 0;
    v7_.v10 = 0;
    v7_.v15 = 0;
    v7_.v7[0] = result;
    v7_.v7[1] = 0;
    v7_.v7[2] = a1;
    v7_.v7[3] = -1;
    v7_.v14 = 1;
    *(_DWORD*)v7_.v13 = 1;
    (*(void (**)(char*, _QWORD*, __int64, __int64))(*(_QWORD*)result + 56LL))(
        result, v7_.v7, v6, 1);
    result = (char*)((_DWORD)v7_.v10 == 1);
    if ((_DWORD)v7_.v10 == 1) {
      *a3 = v7_.v8;
    }
  }
  return result;
}

char* llvm_libcxx_libcxxabi_src_84d260(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  char* v3;
  int v5;
  char* result;
  _QWORD* v8;
  _QWORD* v9;
  char* v10;
  void* v11;
  char* v12;
  int v13;

  {
    v3 = (const char*)a2[1];
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3 == (const char*)SdkData_e89860) {
    {
      v8 = *(_QWORD**)(a1 + 24);
      __asm__ volatile("" ::"r"(v8));
    }
    if (v8 != nullptr && (v9 = a3,
                          v10 = __dynamic_cast(v8, (_QWORD*)SdkData_e89848,
                                               (_QWORD*)SdkData_e89878, 0),
                          a3 = v9, v10 != nullptr)) {
      v11 = &SdkData_d02cc8;
    }
    else {
      v11 = &SdkData_d02cd8;
    }
    *a3 = v11;
    return (_BYTE*)(((char*)0x0LL) + 1);
  }
  {
    v5 = *(_DWORD*)(a1 + 16);
    __asm__ volatile("" ::"r"(v5));
  }
  if ((v5 & 0x18) != 0) {
    goto LABEL_3;
  }
  v12 = __dynamic_cast(a2, (_QWORD*)SdkData_e89848, (_QWORD*)SdkData_e89858, 0);
  if (v12 != nullptr) {
    if ((v12[16] & 0x18) != 0) {
    LABEL_3:
      if ((_QWORD*)a1 != a2) {
        if (strcmp_plt(*(const char**)(a1 + 8), v3) == 0) {
          return (_BYTE*)(((char*)0x0LL) + 1);
        }
        goto LABEL_12;
      }
      return (_BYTE*)(((char*)0x0LL) + 1);
    }
    if (*(const char**)(a1 + 8) == v3) {
      return (_BYTE*)(((char*)0x0LL) + 1);
    }
  }
LABEL_12:
  result =
      __dynamic_cast(a2, (_QWORD*)SdkData_e89848, (_QWORD*)SdkData_e89880, 0);
  if (result != nullptr) {
    {
      v13 = *((_DWORD*)result + 4);
      __asm__ volatile("" ::"r"(v13));
    }
    if (((unsigned __int8)v13 & (unsigned __int8)~(_BYTE)v5 & 7) != 0 ||
        ((unsigned __int8)v5 & (unsigned __int8)~(_BYTE)v13 & 0x60) != 0 ||
        *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL) !=
            *(_QWORD*)(*((_QWORD*)result + 3) + 8LL)) {
      return nullptr;
    }
    else {
      return (char*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8LL) ==
                     *(_QWORD*)(*((_QWORD*)result + 4) + 8LL));
    }
  }
  return result;
}

void __attribute__((noreturn))

llvm_libcxx_libcxxabi_src_84e710(unsigned __int64* a1)
{
  unsigned __int64* v1;

  v1 = __cxa_begin_catch(a1);
  std_terminate_plt(v1);
}

#pragma GCC visibility pop
