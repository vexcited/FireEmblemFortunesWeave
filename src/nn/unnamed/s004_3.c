#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_6666a0(__int64);

__int64 SdkRoutine_683090(__int64, __int64);

__int64 SdkRoutine_6831f0(__int64, __int64);

__int64 SdkRoutine_6b6810(_QWORD*, __int64);

__int64 SdkRoutine_858b60(_QWORD);

__int64 SdkRoutine_858b80(_QWORD);

__int64 SdkRoutine_85d430(_QWORD);

__int64 SdkRoutine_85d490(_QWORD);

__int64 SdkHr_6a5330(__int64 a1, __int64 a2, __int64 a3)
{
  if (a2 != 0) {
    SdkRoutine_683090(a1, a2);
  }
  if (a3 != 0) {
    SdkRoutine_6831f0(a1, a3);
  }
  return SdkRoutine_6666a0(a1);
}

__int64 SdkHr_6b7560(unsigned __int64* a1, __int64 a2, __int64 a3, __int64 a4,
                     unsigned __int64* a5)
{
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 i;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned int v19;

  SdkRoutine_858b60(a4);
  v10 = *a5;
  v11 = a4 + 8;
  if (*a5 >= 3) {
    v12 = (_QWORD*)a5[1];
  }
  else {
    v12 = a5 + 1;
  }
  if (v10 != 0) {
    for (i = 0; i < v10; ++i) {
      v14 = *((unsigned int*)v12 + i);
      if ((_DWORD)v14 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(v11 + ((v14 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v14) &
             1) != 0) {
        LABEL_23:
          *a1 = i;
          v19 = 1;
          goto LABEL_24;
        }
        v10 = *a5;
      }
    }
  }
  SdkRoutine_858b80(a4);
  SdkRoutine_858b60(a3);
  if ((SdkRoutine_85d430(a2) & 1) != 0) {
    SdkRoutine_85d490(a2);
    v15 = *(_QWORD**)(a3 + 8);
    if (v15 != nullptr) {
      SdkRoutine_6b6810(v15, a4);
    }
  }
  SdkRoutine_858b80(a3);
  SdkRoutine_858b60(a4);
  v16 = *a5;
  if (*a5 >= 3) {
    v17 = (_QWORD*)a5[1];
  }
  else {
    v17 = a5 + 1;
  }
  if (v16 != 0) {
    for (i = 0; i < v16; ++i) {
      v18 = *((unsigned int*)v17 + i);
      if ((_DWORD)v18 != 0) {
        if (((atomic_load_explicit(
                  (atomic_uint* volatile)(v11 + ((v18 >> 3) & 0x1FFFFFFC)),
                  memory_order_acquire) >>
              v18) &
             1) != 0) {
          goto LABEL_23;
        }
        v16 = *a5;
      }
    }
  }
  v19 = 0;
LABEL_24:
  SdkRoutine_858b80(a4);
  return v19;
}

#pragma GCC visibility pop
