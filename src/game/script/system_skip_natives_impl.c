#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 as_g_thread_info;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* as_g_script_manager_ptr;
_QWORD* system_skip_Escape();

_QWORD* system_skip_Escape()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  int v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (*v18)(void);
  _QWORD* result;
  __int64 v20;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  v5 = game_ProcGameSkipView_instance_;
  if ((v4 & 1) != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v7 = 2)
             : (v7 = 3),
         (v7 & v6) != 0)) {
      v8 = *v0;
      v9 = *(_QWORD*)(v8 +
                      8LL * (*(unsigned int (**)(__int64))(
                                *(_QWORD*)as_g_thread_info + 72LL))(
                                as_g_thread_info) +
                      4384);
      if (v9 != 0) {
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
      }
      else {
        v10 = 0;
      }
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v10 + 24) + 448LL))(
          *(_QWORD*)(v10 + 24), 1);
      result = *(_QWORD**)(v10 + 2240);
      *(_QWORD*)(v10 + 2240) = 0;
      if (result != (_QWORD*)(v10 + 2208)) {
        if (result != nullptr) {
          goto LABEL_29;
        }
        return result;
      }
    LABEL_30:
      v20 = 32;
      return (_QWORD*)(*(__int64 (**)(void*))(*result + v20))(result);
    }
  }
  else if (game_ProcGameSkipView_instance_ == 0) {
  LABEL_17:
    v14 = false;
    goto LABEL_18;
  }
  v11 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
  if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
    goto LABEL_17;
  }
  *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
  if (v11 > 3) {
    goto LABEL_17;
  }
  v12 = *(_DWORD*)(v5 + 156);
  if ((v12 & 8) != 0) {
    v13 = 2;
  }
  else {
    v13 = 3;
  }
  v14 = (v13 & v12) == 0;
LABEL_18:
  v15 = *v0;
  v16 = *(
      _QWORD*)(v15 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v16 != 0) {
    v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 472LL))(v16);
  }
  else {
    v17 = 0;
  }
  v18 = *(__int64 (**)(void))(**(_QWORD**)(v17 + 24) + 448LL);
  if (v14) {
    return (_QWORD*)v18();
  }
  v18();
  result = *(_QWORD**)(v17 + 2240);
  *(_QWORD*)(v17 + 2240) = 0;
  if (result == (_QWORD*)(v17 + 2208)) {
    goto LABEL_30;
  }
  if (result != nullptr) {
  LABEL_29:
    v20 = 40;
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v20))(result);
  }
  return result;
}

#pragma GCC visibility pop
