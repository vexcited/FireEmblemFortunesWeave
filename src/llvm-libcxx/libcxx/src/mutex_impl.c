#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_7e7180(__int64 result);
__int64 _Unwind_Resume_plt(_QWORD);
__int64 pthread_mutex_lock_plt(_QWORD);
__int64 pthread_mutex_trylock_plt(void);
__int64
    pthread_mutex_trylock_plt_alt1(_QWORD) __asm__("pthread_mutex_trylock_plt");
__int64 pthread_mutex_unlock_plt(_QWORD);
__int64 pthread_self_plt(void);
__int64 std___1___throw_system_error_plt(_QWORD, _QWORD);
__int64 std___1_condition_variable_notify_one_plt(_QWORD);
__int64 std___1_condition_variable_wait_plt(_QWORD, _QWORD);
void __attribute__((noreturn)) SdkRoutine_7cd620();
__int64 std___1_timed_mutex_timed_mutex(__int64 result);
void std___1_timed_mutex_Destroy_timed_mutex(void* this_);
__int64 std___1_timed_mutex_lock(void* this_);
__int64 std___1_timed_mutex_try_lock(void* this_);
__int64 std___1_timed_mutex_unlock(void* this_);
void __attribute__((noreturn)) mutex_7e725c();
__int64 std___1_recursive_timed_mutex_recursive_timed_mutex(__int64 this_);
void std___1_recursive_timed_mutex_Destroy_recursive_timed_mutex(void* this_);
__int64 std___1_recursive_timed_mutex_lock(void* this_);
__int64 std___1_recursive_timed_mutex_try_lock(void* this_);
__int64 std___1_recursive_timed_mutex_unlock(void* this_);

__int64 std___1_timed_mutex_timed_mutex(__int64 result)
{
  *(_DWORD*)(result + 1) = 0;
  *(_DWORD*)(result + 4) = 0;
  *(_QWORD*)(result + 9) = 0;
  *(_BYTE*)result = 1;
  *(_BYTE*)(result + 8) = 1;
  return result;
}

void std___1_timed_mutex_Destroy_timed_mutex(void* this_)
{
  __int64 v2;

  v2 = pthread_mutex_lock_plt(this_);
  if ((_DWORD)v2 != 0) {
    std___1___throw_system_error_plt(v2, "mutex lock failed");
    SdkRoutine_7cd620();
  }
  pthread_mutex_unlock_plt(this_);
}

__int64 std___1_timed_mutex_lock(void* this_)
{
  __int64 v2;
  __int64 result;
  int v4;
  struct {
    void* v5;
    unsigned __int8 v6;
  } v5_;

  v5_.v5 = this_;
  v5_.v6 = 1;
  v2 = pthread_mutex_lock_plt(this_);
  if ((_DWORD)v2 != 0) {
    std___1___throw_system_error_plt(v2, "mutex lock failed");
    SdkRoutine_7cd620();
  }
  if ((*((_BYTE*)this_ + 16) & 1) == 0) {
    *((_BYTE*)this_ + 16) = 1;
    return pthread_mutex_unlock_plt(v5_.v5);
  }
  do {
    result = std___1_condition_variable_wait_plt((char*)this_ + 8, &v5_.v5);
  } while ((*((_BYTE*)this_ + 16) & 1) != 0);
  v4 = v5_.v6;
  *((_BYTE*)this_ + 16) = 1;
  if (v4 == 1) {
    return pthread_mutex_unlock_plt(v5_.v5);
  }
  return result;
}

__int64 std___1_timed_mutex_try_lock(void* this_)
{
  int v3;

  if ((unsigned int)pthread_mutex_trylock_plt() != 0) {
    return 0;
  }
  v3 = *((unsigned __int8*)this_ + 16);
  if ((v3 & 1) == 0) {
    *((_BYTE*)this_ + 16) = 1;
  }
  pthread_mutex_unlock_plt(this_);
  return v3 ^ 1u;
}

__int64 std___1_timed_mutex_unlock(void* this_)
{
  __int64 v2;

  v2 = pthread_mutex_lock_plt(this_);
  if ((_DWORD)v2 != 0) {
    std___1___throw_system_error_plt(v2, "mutex lock failed");
    SdkRoutine_7cd620();
  }
  *((_BYTE*)this_ + 16) = 0;
  std___1_condition_variable_notify_one_plt((char*)this_ + 8);
  return pthread_mutex_unlock_plt(this_);
}

void __attribute__((noreturn)) mutex_7e725c() { SdkRoutine_7cd620(); }

__int64 std___1_recursive_timed_mutex_recursive_timed_mutex(__int64 this_)
{
  *(_DWORD*)(this_ + 1) = 0;
  *(_DWORD*)(this_ + 4) = 0;
  *(_QWORD*)(this_ + 9) = 0;
  *(_QWORD*)(this_ + 17) = 0;
  *(_QWORD*)(this_ + 24) = 0;
  *(_BYTE*)this_ = 1;
  *(_BYTE*)(this_ + 8) = 1;
  return this_;
}

void std___1_recursive_timed_mutex_Destroy_recursive_timed_mutex(void* this_)
{
  __int64 v2;

  v2 = pthread_mutex_lock_plt(this_);
  if ((_DWORD)v2 != 0) {
    std___1___throw_system_error_plt(v2, "mutex lock failed");
    SdkRoutine_7cd620();
  }
  pthread_mutex_unlock_plt(this_);
}

__int64 std___1_recursive_timed_mutex_lock(void* this_)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  struct {
    void* v8;
    unsigned __int8 v9;
  } v8_;

  v2 = pthread_self_plt();
  v8_.v8 = this_;
  v8_.v9 = 1;
  v3 = pthread_mutex_lock_plt(this_);
  if ((_DWORD)v3 != 0) {
    std___1___throw_system_error_plt(v3, "mutex lock failed");
    goto LABEL_13;
  }
  v4 = *((_QWORD*)this_ + 2);
  if (*((_QWORD*)this_ + 3) == v2) {
    if (v4 != -1) {
      *((_QWORD*)this_ + 2) = v4 + 1;
      return pthread_mutex_unlock_plt(v8_.v8);
    }
  LABEL_13:
    v7 = std___1___throw_system_error_plt(
        11, "recursive_timed_mutex lock limit reached");
    SdkRoutine_7e7180((__int64)&v8_.v8);
    _Unwind_Resume_plt(v7);
    SdkRoutine_7cd620();
  }
  if (v4 == 0) {
    *((_QWORD*)this_ + 2) = 1;
    *((_QWORD*)this_ + 3) = v2;
    return pthread_mutex_unlock_plt(v8_.v8);
  }
  do {
    result = std___1_condition_variable_wait_plt((char*)this_ + 8, &v8_.v8);
  } while (*((_QWORD*)this_ + 2) != 0);
  v6 = v8_.v9;
  *((_QWORD*)this_ + 2) = 1;
  *((_QWORD*)this_ + 3) = v2;
  if (v6 == 1) {
    return pthread_mutex_unlock_plt(v8_.v8);
  }
  return result;
}

__int64 std___1_recursive_timed_mutex_try_lock(void* this_)
{
  __int64 v2;
  __int64 v4;
  unsigned int v5;

  v2 = pthread_self_plt();
  if ((unsigned int)pthread_mutex_trylock_plt_alt1(this_) != 0) {
    return 0;
  }
  v4 = *((_QWORD*)this_ + 2);
  if (v4 == 0 || (v5 = 0, v4 != -1) && *((_QWORD*)this_ + 3) == v2) {
    v5 = 1;
    *((_QWORD*)this_ + 2) = v4 + 1;
    *((_QWORD*)this_ + 3) = v2;
  }
  pthread_mutex_unlock_plt(this_);
  return v5;
}

__int64 std___1_recursive_timed_mutex_unlock(void* this_)
{
  __int64 v2;
  __int64 v3;

  v2 = pthread_mutex_lock_plt(this_);
  if ((_DWORD)v2 != 0) {
    std___1___throw_system_error_plt(v2, "mutex lock failed");
    SdkRoutine_7cd620();
  }
  v3 = *((_QWORD*)this_ + 2) - 1LL;
  *((_QWORD*)this_ + 2) = v3;
  if (v3 != 0) {
    return pthread_mutex_unlock_plt(this_);
  }
  *((_QWORD*)this_ + 3) = 0;
  pthread_mutex_unlock_plt(this_);
  return std___1_condition_variable_notify_one_plt((char*)this_ + 8);
}

#pragma GCC visibility pop
