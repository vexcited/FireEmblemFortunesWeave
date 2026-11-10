#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_7e6a90(_QWORD*, unsigned int);
__int64 SdkRoutine_857220(_QWORD, _QWORD);
__int64 SdkRoutine_85e050(unsigned __int64);
__int64 SdkRoutine_87c810(_QWORD, _QWORD);
__int64 SdkRoutine_87cd10(_QWORD, double);
__int64 _Unwind_Resume_plt_alt1(_QWORD) __asm__("_Unwind_Resume_plt");
__int64 __cxa_allocate_exception_plt(_QWORD);
__int64 __cxa_guard_acquire_plt(_QWORD);
__int64 __cxa_guard_release_plt(_QWORD);
__int64 __cxa_throw_plt(_QWORD, _QWORD, _QWORD);
__int64 pthread_getspecific_plt(_QWORD);
__int64 std___1___shared_count_Destroy___shared_count_plt(_QWORD);
__int64 std___1___thread_local_data_plt(_QWORD);
__int64 std___1___thread_struct___make_ready_at_thread_exit_plt(_QWORD, _QWORD);
__int64 std___1_condition_variable_notify_all_plt(_QWORD);
__int64 std___1_condition_variable_wait_plt(_QWORD, _QWORD);
__int64 std___1_future_error_future_error_plt(_QWORD, _QWORD, _QWORD);
__int64 std___1_mutex_lock_plt(_QWORD);
__int64 std___1_mutex_unlock_plt(_QWORD);
__int64 std_exception_ptr_Destroy_exception_ptr_plt(_QWORD);
__int64 std_exception_ptr_exception_ptr_plt(_QWORD, _QWORD);
__int64 std_logic_error_logic_error_plt_87ca90(_QWORD, _QWORD);
__int64 std_rethrow_exception_plt(_QWORD);
double _Unwind_Resume_plt(_QWORD);
extern _UNKNOWN SdkData_105ff80;
extern _UNKNOWN* SdkData_ea9428;
extern __int64 SdkData_e893f0;
extern __int64 SdkData_e893f8;
extern __int64 SdkData_e89400;
extern __int64 SdkData_e89408;
void __attribute__((noreturn)) SdkRoutine_7cd620();
void __attribute__((noreturn)) std_rethrow_exception(_QWORD*);
void __attribute__((noreturn)) std_terminate_plt(_QWORD);
void __attribute__((noreturn)) std_nested_exception_rethrow_nested(void* this_);
__attribute__((swiftcall)) void
std___1___future_error_category_message(PSEUDO_X8 x8_, __int64 unused_int0,
                                        int a1);
void __attribute__((noreturn)) future_7e6194(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12);
__int64 std___1___assoc_sub_state_set_value(void* this_);
void __attribute__((noreturn)) future_7e62a0(unsigned int a1);
__int64 std___1___assoc_sub_state_set_value_at_thread_exit(__int64 a1);
__int64 std___1___assoc_sub_state_set_exception(__int64 a1, __int64 a2);
__int64 std___1___assoc_sub_state_set_exception_at_thread_exit(__int64 a1,
                                                               __int64 a2);
__int64 std___1___assoc_sub_state___make_ready(__int64 a1);
__int64 std___1___assoc_sub_state_copy(void* this_);
void __attribute__((noreturn)) std___1___assoc_sub_state___execute(void* this_);
__int64 std___1_future_future(_QWORD* a1, __int64 a2);
void __attribute__((noreturn)) future_7e68c8(__int64 a1);
__int64 std___1_promise_promise(__int64* a1);
__int64* std___1_promise_Destroy_promise(__int64* result);
void __attribute__((noreturn)) future_7e6a88();
void __attribute__((noreturn)) future_7e6a8c();
__int64 std___1_promise_get_future(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10, __int64 a11, __int64 a12);
__int64 std___1_promise_set_value(__int64* a1);
__int64 future_7e6dd0(_QWORD* a1);
__int64
std___1___future_error_category_Destroy___future_error_category(_QWORD* a1);

void __attribute__((noreturn)) std_nested_exception_rethrow_nested(void* this_)
{
  char* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = (char*)this_ + 8;
  v2 = *((_QWORD*)this_ + 1);
  v5 = 0;
  v3 = std_exception_ptr_Destroy_exception_ptr_plt(&v5);
  if (v2 == 0) {
    std_terminate_plt(v3);
  }
  std_exception_ptr_exception_ptr_plt(&v4, v1);
  std_rethrow_exception(&v4);
}

__attribute__((swiftcall)) void

std___1___future_error_category_message(PSEUDO_X8 x8_, __int64 unused_int0,
                                        int a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* result;

  if (a1 <= 1) {
    if (a1 != 0) {
      if (a1 == 1) {
        result = (char*)SdkRoutine_85e050(0x50u);
        *a2 = 81;
        a2[1] = 72;
        a2[2] = result;
        strcpy(result, "The future has already been retrieved from the promise "
                       "or packaged_task.");
        {
          result;
          return;
        }
      }
      goto LABEL_12;
    }
  LABEL_9:
    result = (char*)SdkRoutine_85e050(0x60u);
    *a2 = 97;
    a2[1] = 88;
    a2[2] = result;
    strcpy(result, "The associated promise has been destructed prior to the "
                   "associated state becoming ready.");
    {
      result;
      return;
    }
  }
  switch (a1) {
  case 2:
    result = (char*)SdkRoutine_85e050(0x30u);
    *a2 = 49;
    a2[1] = 46;
    a2[2] = result;
    strcpy(result, "The state of the promise has already been set.");
    {
      result;
      return;
    }
  case 3:
    result = (char*)SdkRoutine_85e050(0x48u);
    *a2 = 73;
    a2[1] = 65;
    a2[2] = result;
    strcpy(result,
           "Operation not permitted on an object without an associated state.");
    {
      result;
      return;
    }
  case 4:
    goto LABEL_9;
  default:
    break;
  }
LABEL_12:
  result = (char*)SdkRoutine_85e050(0x20u);
  *a2 = 33;
  a2[1] = 30;
  a2[2] = result;
  strcpy(result, "unspecified future_errc value\n");
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) future_7e6194(__int64 a1, __int64 a2, __int64 a3,
                                             __int64 a4, __int64 a5, __int64 a6,
                                             __int64 a7, __int64 a8, __int64 a9,
                                             __int64 a10, __int64 a11,
                                             __int64 a12)
{
  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1___assoc_sub_state_set_value(void* this_)
{
  __int64 v2;
  __int64 v4;

  std___1_mutex_lock_plt((char*)this_ + 24);
  if ((*((_BYTE*)this_ + 40) & 1) != 0 ||
      (v2 = *((_QWORD*)this_ + 2), v4 = 0,
       std_exception_ptr_Destroy_exception_ptr_plt(&v4), v2 != 0)) {
    future_7e62a0(2u);
  }
  *((_DWORD*)this_ + 10) |= 5u;
  std___1_condition_variable_notify_all_plt((char*)this_ + 32);
  return std___1_mutex_unlock_plt((char*)this_ + 24);
}

void __attribute__((noreturn)) future_7e62a0(unsigned int a1)
{
  __int64 v2;

  v2 = __cxa_allocate_exception_plt(32);
  if ((atomic_load_explicit((atomic_uchar* volatile)&SdkData_105ff80,
                            memory_order_acquire) &
       1) == 0) {
    goto LABEL_3;
  }
  while (1) {
    std___1_future_error_future_error_plt(v2, a1, &SdkData_ea9428);
    __cxa_throw_plt(v2, SdkData_e89400, SdkData_e893f8);
  LABEL_3:
    if ((unsigned int)__cxa_guard_acquire_plt(&SdkData_105ff80) != 0) {
      __cxa_guard_release_plt(&SdkData_105ff80);
    }
  }
}

__int64 std___1___assoc_sub_state_set_value_at_thread_exit(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned int* v4;
  __int64 v6;
  __int64 v8;

  std___1_mutex_lock_plt(a1 + 24);
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 ||
      (v2 = *(_QWORD*)(a1 + 16), v8 = 0,
       v3 = std_exception_ptr_Destroy_exception_ptr_plt(&v8), v2 != 0)) {
    future_7e62a0(2u);
  }
  *(_DWORD*)(a1 + 40) |= 1u;
  v4 = (unsigned int*)std___1___thread_local_data_plt(v3);
  v6 = pthread_getspecific_plt(*v4);
  std___1___thread_struct___make_ready_at_thread_exit_plt(v6, a1);
  return std___1_mutex_unlock_plt(a1 + 24);
}

__int64 std___1___assoc_sub_state_set_exception(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v6;

  std___1_mutex_lock_plt(a1 + 24);
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 ||
      (v4 = *(_QWORD*)(a1 + 16), v6 = 0,
       std_exception_ptr_Destroy_exception_ptr_plt(&v6), v4 != 0)) {
    future_7e62a0(2u);
  }
  SdkRoutine_87c810(a1 + 16, a2);
  *(_DWORD*)(a1 + 40) |= 4u;
  std___1_condition_variable_notify_all_plt(a1 + 32);
  return std___1_mutex_unlock_plt(a1 + 24);
}

__int64 std___1___assoc_sub_state_set_exception_at_thread_exit(__int64 a1,
                                                               __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v8;
  __int64 v10;

  std___1_mutex_lock_plt(a1 + 24);
  if ((*(_BYTE*)(a1 + 40) & 1) != 0 ||
      (v4 = *(_QWORD*)(a1 + 16), v10 = 0,
       std_exception_ptr_Destroy_exception_ptr_plt(&v10), v4 != 0)) {
    future_7e62a0(2u);
  }
  v5 = SdkRoutine_87c810(a1 + 16, a2);
  v6 = (unsigned int*)std___1___thread_local_data_plt(v5);
  v8 = pthread_getspecific_plt(*v6);
  std___1___thread_struct___make_ready_at_thread_exit_plt(v8, a1);
  return std___1_mutex_unlock_plt(a1 + 24);
}

__int64 std___1___assoc_sub_state___make_ready(__int64 a1)
{
  std___1_mutex_lock_plt(a1 + 24);
  *(_DWORD*)(a1 + 40) |= 4u;
  std___1_condition_variable_notify_all_plt(a1 + 32);
  return std___1_mutex_unlock_plt(a1 + 24);
}

__int64 std___1___assoc_sub_state_copy(void* this_)
{
  char* v1;
  int v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    char* v11;
    char v12;
  } v11_;

  v1 = (char*)this_ + 24;
  v11_.v11 = (char*)this_ + 24;
  v11_.v12 = 1;
  std___1_mutex_lock_plt((char*)this_ + 24);
  v3 = *((_DWORD*)this_ + 10);
  if ((v3 & 4) == 0) {
    if ((v3 & 8) != 0) {
      *((_DWORD*)this_ + 10) = v3 & 0xFFFFFFF3;
      std___1_mutex_unlock_plt(v1);
      v4 = *(_QWORD*)this_;
      v11_.v12 = 0;
      (*(void (**)(void*))(v4 + 24))(this_);
    }
    else {
      do {
        std___1_condition_variable_wait_plt((char*)this_ + 32, &v11_.v11);
      } while ((*((_BYTE*)this_ + 40) & 4) == 0);
    }
  }
  v6 = *((_QWORD*)this_ + 2);
  v5 = (char*)this_ + 16;
  v10 = 0;
  result = std_exception_ptr_Destroy_exception_ptr_plt(&v10);
  if (v6 != 0) {
    std_exception_ptr_exception_ptr_plt(&v9, v5);
    v8 = std_rethrow_exception_plt(&v9);
    std_exception_ptr_Destroy_exception_ptr_plt(&v9);
    if (v11_.v12 == 1) {
      std___1_mutex_unlock_plt(v11_.v11);
    }
    _Unwind_Resume_plt_alt1(v8);
    __udf(0);
  }
  if (v11_.v12 == 1) {
    return std___1_mutex_unlock_plt(v11_.v11);
  }
  return result;
}

void __attribute__((noreturn)) std___1___assoc_sub_state___execute(void* this_)
{
  future_7e62a0(3u);
}

__int64 std___1_future_future(_QWORD* a1, __int64 a2)
{
  int v3;

  *a1 = a2;
  std___1_mutex_lock_plt(a2 + 24);
  v3 = *(_DWORD*)(a2 + 40);
  if ((v3 & 2) != 0) {
    future_7e62a0(1u);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(a2 + 8), 1u,
                            memory_order_relaxed);
  *(_DWORD*)(a2 + 40) = v3 | 2;
  return std___1_mutex_unlock_plt(a2 + 24);
}

void __attribute__((noreturn)) future_7e68c8(__int64 a1)
{
  __int64 v1;

  if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  }
  _Unwind_Resume_plt(a1);
  __udf(0);
}

__int64 std___1_promise_promise(__int64* a1)
{
  __int64 result;
  __int64 v3;

  result = SdkRoutine_85e050(0x30u);
  v3 = SdkData_e89408;
  *a1 = result;
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 25) = 0;
  *(_DWORD*)(result + 28) = 0;
  *(_QWORD*)(result + 33) = 0;
  *(_DWORD*)(result + 40) = 0;
  *(_QWORD*)result = v3 + 16;
  *(_QWORD*)(result + 8) = 0;
  *(_BYTE*)(result + 24) = 1;
  *(_BYTE*)(result + 32) = 1;
  return result;
}

__int64* std___1_promise_Destroy_promise(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD v6[4];
  __int64 v7;

  v1 = *result;
  if (*result != 0) {
    if ((*(_BYTE*)(v1 + 40) & 1) == 0) {
      v2 = *(_QWORD*)(v1 + 16);
      v3 = result;
      v7 = 0;
      result = (__int64*)std_exception_ptr_Destroy_exception_ptr_plt(&v7);
      v1 = *v3;
      if (v2 == 0 && *(__int64*)(v1 + 8) >= 1) {
        SdkRoutine_7e6a90(v6, 4u);
        v4 = (_QWORD*)__cxa_allocate_exception_plt(32);
        std_logic_error_logic_error_plt_87ca90(v4, v6);
        *v4 = SdkData_e893f0 + 16;
        v5 = v6[3];
        v4[2] = v6[2];
        v4[3] = v5;
        __cxa_throw_plt(v4, SdkData_e89400, SdkData_e893f8);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      return (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    }
  }
  return result;
}

void __attribute__((noreturn)) future_7e6a88() { SdkRoutine_7cd620(); }

void __attribute__((noreturn)) future_7e6a8c() { SdkRoutine_7cd620(); }

__int64 std___1_promise_get_future(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10, __int64 a11, __int64 a12)
{
  __int64 v13;
  double v14;
  _QWORD* v15;

  if ((a10 & 1) != 0) {
    SdkRoutine_857220(a12, a10 & 0xFFFFFFFFFFFFFFFELL);
  }
  v14 = _Unwind_Resume_plt(a1);
  if (*v15 == 0) {
    future_7e62a0(3u);
  }
  return SdkRoutine_87cd10(v13, v14);
}

__int64 std___1_promise_set_value(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;

  v1 = *a1;
  if (*a1 == 0) {
    future_7e62a0(3u);
  }
  std___1_mutex_lock_plt(v1 + 24);
  if ((*(_BYTE*)(v1 + 40) & 1) != 0 ||
      (v2 = *(_QWORD*)(v1 + 16), v4 = 0,
       std_exception_ptr_Destroy_exception_ptr_plt(&v4), v2 != 0)) {
    future_7e62a0(2u);
  }
  *(_DWORD*)(v1 + 40) |= 5u;
  std___1_condition_variable_notify_all_plt(v1 + 32);
  return std___1_mutex_unlock_plt(v1 + 24);
}

__int64 future_7e6dd0(_QWORD* a1)
{
  *a1 = SdkData_e89408 + 16;
  std_exception_ptr_Destroy_exception_ptr_plt(a1 + 2);
  return std___1___shared_count_Destroy___shared_count_plt(a1);
}

__int64

std___1___future_error_category_Destroy___future_error_category(_QWORD* a1)
{
  *a1 = SdkData_e89408 + 16;
  std_exception_ptr_Destroy_exception_ptr_plt(a1 + 2);
  std___1___shared_count_Destroy___shared_count_plt(a1);
  return SdkRoutine_857220(a1, 48);
}

#pragma GCC visibility pop
