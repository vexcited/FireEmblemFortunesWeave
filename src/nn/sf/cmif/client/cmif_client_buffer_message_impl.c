#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* SdkRoutine_5cc220(_QWORD* result, int);
__int64 SdkRoutine_e3b70(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_lmem_AllocateFromExpHeap_plt_859a90(_QWORD, _QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
extern __int64 SdkData_e88ef8;
_QWORD* cmif_client_buffer_message_5ce3a0(_QWORD* result, int a2);
__int64 cmif_client_buffer_message_5ce460(__int64 a1, __int64* a2);

_QWORD* cmif_client_buffer_message_5ce3a0(_QWORD* result, int a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (result[1] != 0) {
    v2 = (_QWORD*)*result;
    v3 = result;
    nn_os_LockMutex_plt(*result + 8LL);
    v5 = nn_lmem_AllocateFromExpHeap_plt_859a90(*v2, 56);
    result = (_QWORD*)nn_os_UnlockMutex_plt(v2 + 1);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 16) = 0;
      *(_QWORD*)(v5 + 24) = 0;
      *(_DWORD*)(v5 + 40) = 1;
      v6 = SdkData_e88ef8;
      *(_QWORD*)(v5 + 48) = v2;
      *(_QWORD*)v5 = v6 + 16;
      *(_QWORD*)(v5 + 8) = 0;
      *(_QWORD*)(v5 + 32) = v6 + 192;
      v7 = v3[1];
      result = *(_QWORD**)(v7 + 8LL * a2);
      *(_QWORD*)(v7 + 8LL * a2) = v5;
      if (result != nullptr) {
        return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
    }
    else {
      v3[1] = 0;
    }
  }
  return result;
}

__int64 cmif_client_buffer_message_5ce460(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64* v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 48);
  v10 = 0;
  v8 = v2;
  v9 = &v10;
  SdkRoutine_5cc220(&v8, 0);
  if (v9 == nullptr) {
    v5 = 5642;
    v6 = v10;
    if (v10 == 0) {
      return v5;
    }
    goto LABEL_3;
  }
  v8 = *a2;
  v5 = SdkRoutine_e3b70(a1 + 8, &v8, 100, &v10);
  v6 = v10;
  if (v10 != 0) {
  LABEL_3:
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  return v5;
}

#pragma GCC visibility pop
