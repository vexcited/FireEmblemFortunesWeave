#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1_condition_variable_notify_all_plt(_QWORD);
__int64 std___1_condition_variable_notify_one_plt(_QWORD);
__int64 std___1_condition_variable_wait_plt(_QWORD, _QWORD);
__int64 std___1_mutex_lock_plt(_QWORD);
__int64 std___1_mutex_unlock_plt(_QWORD);
__int64 std___1___shared_mutex_base___shared_mutex_base(__int64 result);
__int64 std___1___shared_mutex_base_lock(void* this_);
bool std___1___shared_mutex_base_try_lock(void* this_);
__int64 std___1___shared_mutex_base_unlock(void* this_);
__int64 std___1___shared_mutex_base_lock_shared(void* this_);
bool std___1___shared_mutex_base_try_lock_shared(void* this_);
__int64 std___1___shared_mutex_base_unlock_shared(void* this_);
__int64 std___1_shared_timed_mutex_lock(void* this_);
bool std___1_shared_timed_mutex_try_lock(void* this_);
__int64 std___1_shared_timed_mutex_unlock(void* this_);
__int64 std___1_shared_timed_mutex_lock_shared(void* this_);
bool std___1_shared_timed_mutex_try_lock_shared(void* this_);
__int64 std___1_shared_timed_mutex_unlock_shared(void* this_);

__int64 std___1___shared_mutex_base___shared_mutex_base(__int64 result)
{
  *(_DWORD*)(result + 1) = 0;
  *(_DWORD*)(result + 4) = 0;
  *(_DWORD*)(result + 9) = 0;
  *(_DWORD*)(result + 12) = 0;
  *(_QWORD*)(result + 17) = 0;
  *(_DWORD*)(result + 24) = 0;
  *(_BYTE*)result = 1;
  *(_BYTE*)(result + 8) = 1;
  *(_BYTE*)(result + 16) = 1;
  return result;
}

__int64 std___1___shared_mutex_base_lock(void* this_)
{
  __int64 result;
  int i;
  struct {
    void* v4;
    char v5;
  } v4_;

  v4_.v4 = this_;
  v4_.v5 = 1;
  result = std___1_mutex_lock_plt(this_);
  for (i = *((_DWORD*)this_ + 6); i < 0; i = *((_DWORD*)this_ + 6)) {
    result = std___1_condition_variable_wait_plt((char*)this_ + 8, &v4_.v4);
  }
  *((_DWORD*)this_ + 6) = i | 0x80000000;
  if (i != 0) {
    do {
      result = std___1_condition_variable_wait_plt((char*)this_ + 16, &v4_.v4);
    } while ((*((_DWORD*)this_ + 6) & 0x7FFFFFFF) != 0);
  }
  if (v4_.v5 == 1) {
    return std___1_mutex_unlock_plt(v4_.v4);
  }
  return result;
}

bool std___1___shared_mutex_base_try_lock(void* this_)
{
  int v2;
  void* v3;
  _BOOL4 v4;

  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)this_ + 6);
  v3 = this_;
  if (v2 == 0) {
    *((_DWORD*)this_ + 6) = 0x80000000;
  }
  v4 = v2 == 0;
  std___1_mutex_unlock_plt(v3);
  return v4;
}

__int64 std___1___shared_mutex_base_unlock(void* this_)
{
  std___1_mutex_lock_plt(this_);
  *((_DWORD*)this_ + 6) = 0;
  std___1_mutex_unlock_plt(this_);
  return std___1_condition_variable_notify_all_plt((char*)this_ + 8);
}

__int64 std___1___shared_mutex_base_lock_shared(void* this_)
{
  unsigned int v2;
  __int64 result;
  unsigned int v4;
  int v5;
  struct {
    void* v6;
    unsigned __int8 v7;
  } v6_;

  v6_.v6 = this_;
  v6_.v7 = 1;
  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)this_ + 6);
  if (v2 <= 0x7FFFFFFE) {
    *((_DWORD*)this_ + 6) = v2 + 1;
    return std___1_mutex_unlock_plt(v6_.v6);
  }
  do {
    result = std___1_condition_variable_wait_plt((char*)this_ + 8, &v6_.v6);
    v4 = *((_DWORD*)this_ + 6);
  } while (v4 > 0x7FFFFFFE);
  v5 = v6_.v7;
  *((_DWORD*)this_ + 6) = v4 + 1;
  if (v5 == 1) {
    return std___1_mutex_unlock_plt(v6_.v6);
  }
  return result;
}

bool std___1___shared_mutex_base_try_lock_shared(void* this_)
{
  unsigned int v2;
  void* v3;
  _BOOL4 v4;

  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)this_ + 6);
  v3 = this_;
  if (v2 <= 0x7FFFFFFE) {
    *((_DWORD*)this_ + 6) = v2 + 1;
  }
  v4 = v2 < 0x7FFFFFFF;
  std___1_mutex_unlock_plt(v3);
  return v4;
}

__int64 std___1___shared_mutex_base_unlock_shared(void* this_)
{
  int v2;
  int v3;
  unsigned int v4;

  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)this_ + 6);
  v3 = (v2 & 0x7FFFFFFF) - 1;
  v4 = v3 | v2 & 0x80000000;
  *((_DWORD*)this_ + 6) = v4;
  if ((v4 & 0x80000000) != 0) {
    if (v3 == 0) {
      std___1_mutex_unlock_plt(this_);
      return std___1_condition_variable_notify_one_plt((char*)this_ + 16);
    }
    return std___1_mutex_unlock_plt(this_);
  }
  if (v3 != 2147483646) {
    return std___1_mutex_unlock_plt(this_);
  }
  std___1_mutex_unlock_plt(this_);
  return std___1_condition_variable_notify_one_plt((char*)this_ + 8);
}

__int64 std___1_shared_timed_mutex_lock(void* this_)
{
  __int64 result;
  int i;
  struct {
    void* v4;
    char v5;
  } v4_;

  v4_.v4 = this_;
  v4_.v5 = 1;
  result = std___1_mutex_lock_plt(this_);
  for (i = *((_DWORD*)this_ + 6); i < 0; i = *((_DWORD*)this_ + 6)) {
    result = std___1_condition_variable_wait_plt((char*)this_ + 8, &v4_.v4);
  }
  *((_DWORD*)this_ + 6) = i | 0x80000000;
  if (i != 0) {
    do {
      result = std___1_condition_variable_wait_plt((char*)this_ + 16, &v4_.v4);
    } while ((*((_DWORD*)this_ + 6) & 0x7FFFFFFF) != 0);
  }
  if (v4_.v5 == 1) {
    return std___1_mutex_unlock_plt(v4_.v4);
  }
  return result;
}

bool std___1_shared_timed_mutex_try_lock(void* this_)
{
  int v2;
  void* v3;
  _BOOL4 v4;

  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)this_ + 6);
  v3 = this_;
  if (v2 == 0) {
    *((_DWORD*)this_ + 6) = 0x80000000;
  }
  v4 = v2 == 0;
  std___1_mutex_unlock_plt(v3);
  return v4;
}

__int64 std___1_shared_timed_mutex_unlock(void* this_)
{
  std___1_mutex_lock_plt(this_);
  *((_DWORD*)this_ + 6) = 0;
  std___1_mutex_unlock_plt(this_);
  return std___1_condition_variable_notify_all_plt((char*)this_ + 8);
}

__int64 std___1_shared_timed_mutex_lock_shared(void* this_)
{
  void* v1;
  unsigned int v2;
  __int64 result;
  unsigned int v4;
  int v5;
  struct {
    void* v6;
    unsigned __int8 v7;
  } v6_;

  v1 = this_;
  v6_.v6 = this_;
  v6_.v7 = 1;
  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)v1 + 6);
  if (v2 <= 0x7FFFFFFE) {
    *((_DWORD*)v1 + 6) = v2 + 1;
    return std___1_mutex_unlock_plt(v1);
  }
  do {
    result = std___1_condition_variable_wait_plt((char*)v1 + 8, &v6_.v6);
    v4 = *((_DWORD*)v1 + 6);
  } while (v4 > 0x7FFFFFFE);
  v5 = v6_.v7;
  *((_DWORD*)v1 + 6) = v4 + 1;
  if (v5 == 1) {
    v1 = v6_.v6;
    return std___1_mutex_unlock_plt(v1);
  }
  return result;
}

bool std___1_shared_timed_mutex_try_lock_shared(void* this_)
{
  unsigned int v2;
  void* v3;
  _BOOL4 v4;

  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)this_ + 6);
  v3 = this_;
  if (v2 <= 0x7FFFFFFE) {
    *((_DWORD*)this_ + 6) = v2 + 1;
  }
  v4 = v2 < 0x7FFFFFFF;
  std___1_mutex_unlock_plt(v3);
  return v4;
}

__int64 std___1_shared_timed_mutex_unlock_shared(void* this_)
{
  int v2;
  int v3;
  unsigned int v4;

  std___1_mutex_lock_plt(this_);
  v2 = *((_DWORD*)this_ + 6);
  v3 = (v2 & 0x7FFFFFFF) - 1;
  v4 = v3 | v2 & 0x80000000;
  *((_DWORD*)this_ + 6) = v4;
  if ((v4 & 0x80000000) != 0) {
    if (v3 == 0) {
      std___1_mutex_unlock_plt(this_);
      return std___1_condition_variable_notify_one_plt((char*)this_ + 16);
    }
    return std___1_mutex_unlock_plt(this_);
  }
  if (v3 != 2147483646) {
    return std___1_mutex_unlock_plt(this_);
  }
  std___1_mutex_unlock_plt(this_);
  return std___1_condition_variable_notify_one_plt((char*)this_ + 8);
}

#pragma GCC visibility pop
