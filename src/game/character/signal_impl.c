#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64* Signal_d31360(__int64** a1, unsigned __int8* a2, __int64 a3,
                       __int64** a4);
__int64* Signal_d31360(__int64** a1, unsigned __int8* a2, __int64 a3,
                       __int64** a4)
{
  __int64* v4;
  __int64* v5;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;

  v5 = (__int64*)(a1 + 1);
  v4 = a1[1];
  if (v4 == nullptr) {
    v13 = (__int64*)(a1 + 1);
    goto LABEL_29;
  }
  v8 = *a2;
  v9 = (v8 & 1) == 0;
  v10 = v8 >> 1;
  if (v9) {
    v11 = a2 + 1;
  }
  else {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  do {
    while (1) {
      v13 = v4;
      v14 = *((unsigned __int8*)v4 + 32);
      v15 = (v14 & 1) == 0;
      v16 = v14 >> 1;
      v17 = v15 ? v16 : v13[5];
      v18 = v15 ? (__int64)v13 + 33 : v13[6];
      v19 = v17 >= v12 ? v12 : v17;
      v20 = memcmp(v11, v18, v19);
      if (v20 != 0) {
        break;
      }
      if (v12 >= v17) {
        goto LABEL_22;
      }
    LABEL_8:
      v4 = (__int64*)*v13;
      v5 = v13;
      if (*v13 == 0) {
        goto LABEL_29;
      }
    }
    if (v20 < 0) {
      goto LABEL_8;
    }
  LABEL_22:
    v21 = memcmp(v18, v11, v19);
    if (v21 != 0) {
      if ((v21 & 0x80000000) == 0) {
        return v13;
      }
    }
    else if (v17 >= v12) {
      return v13;
    }
    v4 = (__int64*)v13[1];
  } while (v4 != nullptr);
  v5 = v13 + 1;

LABEL_29:
  v22 = v13;
  v23 = (__int64*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v24 = *a4;
  v13 = v23;
  v25 = v23;
  v27 = (*a4)[1];
  v26 = (*a4)[2];
  v23[4] = **a4;
  v23[5] = v27;
  v23[6] = v26;
  *v24 = 0;
  v24[1] = 0;
  v24[2] = 0;
  v23[7] = 0;
  v23[8] = 0;
  v23[9] = 0;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = (__int64)v22;
  *v5 = (__int64)v23;
  v28 = (__int64*)**a1;
  if (v28 != nullptr) {
    *a1 = v28;
    v25 = (_QWORD*)*v5;
  }
  fw_containers_BalanceAfterInsert(a1[1], v25);
  a1[2] = (__int64*)((char*)a1[2] + 1);
  return v13;
}

#pragma GCC visibility pop
