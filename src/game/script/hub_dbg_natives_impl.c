#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
_QWORD* hub_dbg_PushString_e0ecc0();
_QWORD* hub_dbg_PushString_e0ed70();

_QWORD* hub_dbg_PushString_e0ecc0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
}

_QWORD* hub_dbg_PushString_e0ed70()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v4 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
}

#pragma GCC visibility pop
