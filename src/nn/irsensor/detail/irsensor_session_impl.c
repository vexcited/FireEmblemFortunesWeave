#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_diag_detail_AbortImpl_plt_858db0(_QWORD);
__int64 nn_os_CloseNativeHandle_plt(_QWORD);
__int64 nn_os_LockMutex_plt(_QWORD);
__int64 nn_os_UnlockMutex_plt(_QWORD);
__int64 nn_irsensor_detail_Session_Activate(unsigned int* a1, __int64 a2);

__int64 nn_irsensor_detail_Session_Activate(unsigned int* a1, __int64 a2)
{
  unsigned int* v2;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  atomic_uint* v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v17;
  int v18;

  v2 = a1;
  nn_os_LockMutex_plt(a1 + 4);
  v4 = atomic_load(v2 + 3);
  if (v4 == v2[2]) {
    v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 16LL))(v2);
    goto LABEL_27;
  }
  v5 = atomic_load(v2 + 3);
  if (v5 != 0) {
    goto LABEL_3;
  }
  v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 40LL))(v2);
  if (v6 != 0) {
    goto LABEL_27;
  }
  v7 = (*(__int64 (**)(unsigned int*, __int64))(*(_QWORD*)v2 + 64LL))(v2, a2);
  if (v7 != 0) {
    v6 = v7;
    (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 48LL))(v2);
    goto LABEL_27;
  }
  v8 = *(_QWORD*)v2;
  v17 = 0;
  v9 = (*(__int64 (**)(unsigned int*, __int64*))(v8 + 80))(v2, &v17);
  if (v9 != 0) {
    v6 = v9;
  }
  else {
    (*(void (**)(unsigned int*, _QWORD, _QWORD))(*(_QWORD*)v2 + 96LL))(
        v2, (unsigned int)v17, BYTE4(v17));
    v10 = *(_QWORD*)v2;
    BYTE4(v17) = 0;
    LODWORD(v17) = 0;
    if (((*(__int64 (**)(unsigned int*))(v10 + 88))(v2) & 1) != 0) {
      v11 = 0;
      v6 = 0;
      v12 = 1;
      if (BYTE4(v17) != 1) {
        goto LABEL_10;
      }
      goto LABEL_9;
    }
    v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 32LL))(v2);
    (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 104LL))(v2);
  }
  v11 = 1;
  v12 = 0;
  if (BYTE4(v17) == 1) {
  LABEL_9:
    nn_os_CloseNativeHandle_plt((unsigned int)v17);
  }
LABEL_10:
  if (v11 == 0) {
    if ((v12 & 1) == 0) {
      goto LABEL_27;
    }
  LABEL_3:
    v6 = 0;
    atomic_fetch_add((atomic_uint* volatile)(v2 + 3), 1u);
    goto LABEL_27;
  }
  v18 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 72LL))(v2);
  if (v18 == 0) {
    (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 48LL))(v2);
    if (v12 == 0) {
      goto LABEL_27;
    }
    goto LABEL_3;
  }
  v2 = (unsigned int*)nn_diag_detail_AbortImpl_plt_858db0(&v18);
  nn_os_LockMutex_plt(v2 + 4);
  v13 = (atomic_uint*)(v2 + 3);
  v14 = atomic_load(v2 + 3);
  if (v14 != 0) {
    atomic_fetch_add(v13, 0xFFFFFFFF);
    v15 = atomic_load((unsigned int*)v13);
    if (v15 != 0) {
      v6 = 0;
    }
    else {
      (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 104LL))(v2);
      v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 72LL))(v2);
      if (v6 == 0) {
        (*(void (**)(unsigned int*))(*(_QWORD*)v2 + 48LL))(v2);
      }
    }
  }
  else {
    v6 = (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 24LL))(v2);
  }
LABEL_27:
  nn_os_UnlockMutex_plt(v2 + 4);
  return v6;
}

#pragma GCC visibility pop
