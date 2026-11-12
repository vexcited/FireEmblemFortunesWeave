#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 movie_detail_SerialTaskQueue_QueueNextTask_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_os_YieldThread_plt(_QWORD);
__int64 movie_detail_SerialTaskQueue_InvokeNextTask(void* this_);

__int64 movie_detail_SerialTaskQueue_InvokeNextTask(void* this_)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  int v11;

  nn_os_LockMutex_plt((char*)this_ + 24);
  if ((*((_BYTE*)this_ + 56) & 1) != 0) {
    return nn_os_UnlockMutex_plt((char*)this_ + 24);
  }
  if (*((_QWORD*)this_ + 11) != 0) {
    v3 = *((_QWORD*)this_ + 10);
    v4 = *(_QWORD*)(v3 + 24);
    v5 = *(_QWORD*)(v3 + 32);
    *(_QWORD*)(v3 + 24) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    nn_os_UnlockMutex_plt((char*)this_ + 24);
    if (v4 != 0) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      nn_os_YieldThread_plt(v6);
    }
    nn_os_LockMutex_plt((char*)this_ + 24);
    if ((*((_BYTE*)this_ + 56) & 1) != 0) {
      goto LABEL_17;
    }
    goto LABEL_9;
  }
  nn_os_UnlockMutex_plt((char*)this_ + 24);
  v5 = 0;
  v4 = 0;
  nn_os_LockMutex_plt((char*)this_ + 24);
  if ((*((_BYTE*)this_ + 56) & 1) == 0) {
  LABEL_9:
    if (*((_QWORD*)this_ + 11) != 0) {
      v7 = *((_QWORD**)this_ + 10);
      v8 = (_QWORD*)v7[1];
      *(_QWORD*)(*v7 + 8LL) = v8;
      *v8 = *v7;
      --*((_QWORD*)this_ + 11);
      v9 = v7[4];
      if (v9 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
        v7[4] = 0;
      }
      v10 = v7[3];
      if (v10 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
        v7[3] = 0;
      }
      (*(void (**)(_QWORD, _QWORD*))(**((_QWORD**)this_ + 12) + 56LL))(
          *((_QWORD*)this_ + 12), v7);
      v11 = movie_detail_SerialTaskQueue_QueueNextTask_plt(this_);
      if (v11 != 0 && *((_DWORD*)this_ + 15) == 0) {
        *((_DWORD*)this_ + 15) = v11;
      }
    }
  }
LABEL_17:
  result = nn_os_UnlockMutex_plt((char*)this_ + 24);
  if (v5 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  if (v4 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  return result;
}

#pragma GCC visibility pop
