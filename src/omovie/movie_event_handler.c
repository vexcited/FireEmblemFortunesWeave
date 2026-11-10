#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ClearSystemEvent(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_GetMultiWaitHolderUserData(_QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__int64 nn_os_SignalEvent(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_os_StartThread(_QWORD);
__int64 nn_os_WaitAny(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 MovieEventHandler_18cbc40(__int64 a1);
__int64 MovieEventHandler_18cc080(__int64 a1);
__int64 omovie_MovieEventHandler_Initialize_lambda0_Invoke(__int64 a1);

__int64 MovieEventHandler_18cbc40(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v8[32];
  _BYTE* v9;

  atomic_store(1u, (unsigned __int8*)(a1 + 57));
  do {
    v5 = nn_os_WaitAny(a1);
    result = nn_os_GetMultiWaitHolderUserData(v5);
    if (result != 0) {
      v6 = result;
      v7 = *(_QWORD*)(result + 32);
      if (v7 != 0) {
        if (v7 == v6) {
          v9 = v8;
          (*(void (**)(_QWORD, _BYTE*))(**(_QWORD**)(v6 + 32) + 24LL))(
              *(_QWORD*)(v6 + 32), v8);
        }
        else {
          v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        }
      }
      else {
        v9 = nullptr;
      }
      if (*(_BYTE*)(v6 + 48) == 1) {
        nn_os_ClearSystemEvent(*(_QWORD*)(v6 + 56));
      }
      if (v9 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_BYTE*))(*(_QWORD*)v9 + 48LL))(v9);
      result = (__int64)v9;
      if (v9 == v8) {
        v2 = 32;
      LABEL_3:
        result = (*(__int64 (**)(void*))(*(_QWORD*)v9 + v2))((void*)v9);
        goto LABEL_4;
      }
      if (v9 != nullptr) {
        v2 = 40;
        goto LABEL_3;
      }
    }
  LABEL_4:
    v4 = atomic_load((unsigned __int8*)(a1 + 536));
  } while (v4 != 1);
  return result;
}

__int64 MovieEventHandler_18cc080(__int64 a1)
{
  __int64 started;
  __int64 SystemTickEv;
  __int64 v4;
  unsigned __int8 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  started = nn_os_StartThread(a1 + 88);
  SystemTickEv = nn_os_GetSystemTick(started);
  v4 = nn_os_ConvertToTimeSpan(SystemTickEv) / -1000000;
  do {
    v5 = atomic_load((unsigned __int8*)(a1 + 57));
    if ((v5 & 1) != 0) {
      break;
    }
    v6 = nn_os_SleepThread(1000000LL * *(int*)(a1 + 60));
    v7 = nn_os_GetSystemTick(v6);
  } while (nn_os_ConvertToTimeSpan(v7) / 1000000 + v4 < *(int*)(a1 + 64));
  v8 = atomic_load((unsigned __int8*)(a1 + 57));
  if (v8 != 0) {
    return 0;
  }
  else {
    return 18;
  }
}

__int64 omovie_MovieEventHandler_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  atomic_store(1u, (unsigned __int8*)(v1 + 536));
  return nn_os_SignalEvent(v1 + 544);
}

#pragma GCC visibility pop
