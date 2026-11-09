#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b3fb0(_QWORD);
__int64 GameRoutine_2b3fd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ExternalReadOnlyStream_Unknown12(__int64 a1);
__int64 ExternalReadOnlyStream_Unknown2(__int64 a1);
__int64 ExternalReadOnlyStream_Unknown4(_QWORD* a1, __int64 a2, __int64 a3,
                                        int* a4);
__int64 ExternalReadOnlyStream_Unknown14(__int64 a1, __int64 a2, __int64 a3);
bool ExternalReadOnlyStream_Unknown16(_QWORD* a1);
__int64 ExternalReadOnlyStream_Unknown20(_QWORD* a1);
__int64 ExternalReadOnlyStream_Unknown21(_QWORD* a1);

__int64 ExternalReadOnlyStream_Unknown12(__int64 a1)
{
  char v2;

  *(_QWORD*)(a1 + 8) = 0;
  v2 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 104) + 16LL))(
      *(_QWORD*)(a1 + 104));
  *(_BYTE*)(a1 + 112) = v2 & 1;
  if ((v2 & 1) == 0) {
    return 0x80000000LL;
  }
  *(_QWORD*)(a1 + 16) = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 104) +
                                                 32LL))(*(_QWORD*)(a1 + 104));
  return 0;
}

__int64 ExternalReadOnlyStream_Unknown2(__int64 a1)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 104) + 24LL))(
        *(_QWORD*)(a1 + 104));
    *(_QWORD*)(a1 + 8) = 0;
    *(_BYTE*)(a1 + 112) = 0;
  }
  return result;
}

__int64 ExternalReadOnlyStream_Unknown4(_QWORD* a1, __int64 a2, __int64 a3,
                                        int* a4)
{
  __int64 v9;
  int v10;
  __int64 v11;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 128LL))(a1) & 1) != 0) {
    return GameRoutine_2b3fd0(a1 + 3, a2, a3, a4, 0, a1);
  }
  (*(void (**)(_QWORD*))(*a1 + 136LL))(a1);
  v9 = a1[13];
  v11 = 0;
  if (((*(__int64 (**)(__int64, __int64*, _QWORD, __int64, __int64))(
           *(_QWORD*)v9 + 40LL))(v9, &v11, a1[1], a2, a3) &
       1) != 0) {
    v10 = a3 != v11;
    a1[1] += v11;
    if (a4 == nullptr) {
      return v11;
    }
    goto LABEL_7;
  }
  v10 = -2130706432;
  if (a4 != nullptr) {
  LABEL_7:
    *a4 = v10;
  }
  return v11;
}

__int64 ExternalReadOnlyStream_Unknown14(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v8;
  __int64 v10;

  if (*(_QWORD*)(a1 + 32) != 0 && *(_QWORD*)(a1 + 48) != 0 &&
      *(_QWORD*)(a1 + 56) != 0) {
    GameRoutine_2b3fb0(a1 + 24);
  }
  v8 = (*(int (**)(__int64))(*(_QWORD*)a1 + 136LL))(a1);
  v10 = (a2 + v8 - 1) & -v8;
  *(_QWORD*)(a1 + 32) = a1 + 88;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = a3 + a2 - v10;
  *(_BYTE*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 64) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 72) = 0;
  return a1 + 24;
}

bool ExternalReadOnlyStream_Unknown16(_QWORD* a1)
{
  return a1[4] != 0 && a1[6] != 0 && a1[7] != 0;
}

__int64 ExternalReadOnlyStream_Unknown20(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 128LL))(a1) & 1) != 0) {
    return a1[8];
  }
  else {
    return 0;
  }
}

__int64 ExternalReadOnlyStream_Unknown21(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 128LL))(a1) & 1) != 0) {
    return a1[9];
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
