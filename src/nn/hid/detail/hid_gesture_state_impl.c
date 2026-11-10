#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_hid_detail_SharedMemoryAccessor_Deactivate_plt(_QWORD);
__int64 nn_hid_server_CreateHidDebugServerProxy_plt(_QWORD);
__int64 hid_gesture_state_6ba240(__int64 a1);

__int64 hid_gesture_state_6ba240(__int64 a1)
{
  int v1;
  int v2;
  __int64 result;
  int v5;
  _QWORD* v6;
  unsigned int v7;
  _QWORD* v8;

  v1 = *(_DWORD*)(a1 + 24);
  if (v1 == 0) {
    return 267978;
  }
  v2 = v1 - 1;
  *(_DWORD*)(a1 + 24) = v2;
  if (v2 == 0) {
    v8 = nullptr;
    result = nn_hid_server_CreateHidDebugServerProxy_plt(&v8);
    if ((_DWORD)result != 0 ||
        (_DWORD)(result = (*(__int64 (**)(_QWORD*))(*v8 + 232LL))(v8)) != 0 ||
        (_DWORD)(result = nn_hid_detail_SharedMemoryAccessor_Deactivate_plt(
                     a1)) != 0) {
      v5 = 0;
      v6 = v8;
      if (v8 == nullptr) {
        goto LABEL_6;
      }
    }
    else {
      v5 = 1;
      v6 = v8;
      if (v8 == nullptr) {
      LABEL_6:
        if (v5 == 0) {
          return result;
        }
        return 0;
      }
    }
    v7 = result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v6 + 8LL))(
        (void*)v6, v6);
    result = v7;
    goto LABEL_6;
  }
  return 0;
}

#pragma GCC visibility pop
