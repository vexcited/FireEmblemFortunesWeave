#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _Unwind_DeleteException_plt(_QWORD);
__int64 _Unwind_RaiseException_plt(_QWORD);
__int64 __cxa_get_globals_fast_plt(void);
__int64 __cxa_get_globals_plt(_QWORD);
__int64 __cxxabiv1___aligned_free_with_fallback(unsigned __int64);
__int64 std_terminate_plt(_QWORD);
void __attribute__((noreturn)) SdkRoutine_7cd620(_QWORD);
void __attribute__((noreturn)) std___terminate(void (*)(void));
__int64 __cxa_free_exception(__int64 a1);
void __attribute__((noreturn)) cxa_exception_84e3cc(__int64 a1);
__int64 __cxxabiv1_exception_cleanup_func(__int64 result, __int64 a2);
void __attribute__((noreturn)) __cxxabiv1_failed_throw(__int64 a1);
unsigned __int64 __cxa_end_catch();
__int64 __cxa_decrement_exception_refcount(__int64 result);
void __attribute__((noreturn)) __cxa_rethrow();
__int64* __cxa_current_primary_exception();
__int64 __cxxabiv1_dependent_exception_cleanup(int a1, __int64 a2);
__int64 __cxa_uncaught_exception();
__int64 __cxa_uncaught_exceptions();

__int64 __cxa_free_exception(__int64 a1)
{
  return __cxxabiv1___aligned_free_with_fallback(a1 - 128);
}

void __attribute__((noreturn)) cxa_exception_84e3cc(__int64 a1)
{
  SdkRoutine_7cd620(a1);
}

__int64 __cxxabiv1_exception_cleanup_func(__int64 result, __int64 a2)
{
  void (*v2)(__int64);
  __int64 v3;

  if ((_DWORD)result != 1) {
    std___terminate(*(void (**)(void))(a2 - 56));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(a2 - 88),
                       0xFFFFFFFFFFFFFFFFLL) == 1) {
    v2 = *(void (**)(__int64))(a2 - 72);
    if (v2 != nullptr) {
      v3 = a2;
      v2(a2 + 32);
      a2 = v3;
    }
    return __cxxabiv1___aligned_free_with_fallback(a2 - 96);
  }
  return result;
}

void __attribute__((noreturn)) __cxxabiv1_failed_throw(__int64 a1)
{
  _cxa_begin_catch(a1 + 96);
  std___terminate(*(void (**)(void))(a1 + 40));
}

unsigned __int64 __cxa_end_catch()
{
  unsigned __int64* v0;
  unsigned __int64 result;
  int v2;
  int v3;
  __int64 v4;
  void (*v5)(unsigned __int64);
  unsigned __int64 v6;

  v0 = (unsigned __int64*)__cxa_get_globals_fast_plt();
  result = *v0;
  if (*v0 != 0) {
    if (*(_QWORD*)(result + 96) >> 8 == 0x434C4E47432B2BLL) {
      v2 = *(_DWORD*)(result + 56);
      if (v2 < 0) {
        *(_DWORD*)(result + 56) = v2 + 1;
        if (v2 == -1) {
          *v0 = *(_QWORD*)(result + 48);
        }
      }
      else {
        v3 = v2 - 1;
        *(_DWORD*)(result + 56) = v3;
        if (v3 == 0) {
          *v0 = *(_QWORD*)(result + 48);
          if (*(_BYTE*)(result + 96) == 1) {
            v4 = *(_QWORD*)(result + 8) - 128LL;
            __cxxabiv1___aligned_free_with_fallback(result);
            result = v4;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 1) {
            v5 = *(void (**)(unsigned __int64))(result + 24);
            if (v5 != nullptr) {
              v6 = result;
              v5(result + 128);
              result = v6;
            }
            return __cxxabiv1___aligned_free_with_fallback(result);
          }
        }
      }
    }
    else {
      result = _Unwind_DeleteException_plt(result + 96);
      *v0 = 0;
    }
  }
  return result;
}

__int64 __cxa_decrement_exception_refcount(__int64 result)
{
  void (*v1)(void);
  __int64 v2;

  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result - 120),
                                      0xFFFFFFFFFFFFFFFFLL) == 1) {
    v1 = *(void (**)(void))(result - 104);
    if (v1 != nullptr) {
      v2 = result;
      v1();
      result = v2;
    }
    return __cxxabiv1___aligned_free_with_fallback(result - 128);
  }
  return result;
}

void __attribute__((noreturn)) __cxa_rethrow()
{
  __int64 v0;
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v0 = ((__int64 (*)(void))__cxa_get_globals_plt)();
  v1 = *(_QWORD*)v0;
  if (*(_QWORD*)v0 != 0) {
    goto LABEL_3;
  }
  while (1) {
    v0 = std_terminate_plt(v0);
  LABEL_3:
    v2 = *(_QWORD*)(v1 + 96) & 0xFFFFFFFFFFFFFF00LL;
    if (v2 == 0x434C4E47432B2B00LL) {
      *(_DWORD*)(v1 + 56) = -*(_DWORD*)(v1 + 56);
      ++*(_DWORD*)(v0 + 8);
    }
    else {
      *(_QWORD*)v0 = 0;
    }
    v3 = _Unwind_RaiseException_plt(v1 + 96);
    v4 = *(_QWORD*)(v1 + 96);
    v0 = __cxa_get_globals_plt(v3);
    if ((v4 & 0xFFFFFFFFFFFFFF00LL) == 0x434C4E47432B2B00LL) {
      v5 = *(_DWORD*)(v1 + 56);
      if (v5 < 0) {
        v5 = -v5;
      }
      *(_DWORD*)(v1 + 56) = v5 + 1;
      if (v1 != *(_QWORD*)v0) {
        *(_QWORD*)(v1 + 48) = *(_QWORD*)v0;
        *(_QWORD*)v0 = v1;
      }
      --*(_DWORD*)(v0 + 8);
      if (v2 == 0x434C4E47432B2B00LL) {
      LABEL_15:
        std___terminate(*(void (**)(void))(v1 + 40));
      }
    }
    else if (*(_QWORD*)v0 == 0) {
      *(_QWORD*)v0 = v1;
      if (v2 == 0x434C4E47432B2B00LL) {
        goto LABEL_15;
      }
    }
  }
}

__int64* __cxa_current_primary_exception()
{
  __int64* result;
  __int64 v1;

  result = (__int64*)__cxa_get_globals_fast_plt();
  if (result != nullptr) {
    v1 = *result;
    if (*result != 0 && *(_QWORD*)(v1 + 96) >> 8 == 0x434C4E47432B2BLL) {
      if ((unsigned __int8)*(_QWORD*)(v1 + 96) == 1) {
        v1 = *(_QWORD*)(v1 + 8) - 128LL;
      }
      result = (__int64*)(v1 + 128);
      atomic_fetch_add((atomic_ullong* volatile)(v1 + 8), 1u);
    }
    else {
      return nullptr;
    }
  }
  return result;
}

__int64 __cxxabiv1_dependent_exception_cleanup(int a1, __int64 a2)
{
  __int64 v2;
  void (*v3)(__int64);
  __int64 v4;

  if (a1 != 1) {
    std___terminate(*(void (**)(void))(a2 - 56));
  }
  v2 = *(_QWORD*)(a2 - 88);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 - 120),
                                  0xFFFFFFFFFFFFFFFFLL) == 1) {
    v3 = *(void (**)(__int64))(v2 - 104);
    v4 = a2;
    if (v3 != nullptr) {
      v3(v2);
    }
    __cxxabiv1___aligned_free_with_fallback(v2 - 128);
    a2 = v4;
  }
  return __cxxabiv1___aligned_free_with_fallback(a2 - 96);
}

__int64 __cxa_uncaught_exception()
{
  __int64 result;

  result = __cxa_get_globals_fast_plt();
  if (result != 0) {
    return *(_DWORD*)(result + 8) != 0;
  }
  return result;
}

__int64 __cxa_uncaught_exceptions()
{
  __int64 result;

  result = __cxa_get_globals_fast_plt();
  if (result != 0) {
    return *(unsigned int*)(result + 8);
  }
  return result;
}

#pragma GCC visibility pop
