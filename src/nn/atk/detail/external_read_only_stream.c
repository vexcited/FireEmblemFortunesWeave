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
__int64 GameRoutine_2b47f0(__int64, __int64, int);
__int64 ExternalReadOnlyStream_Unknown6(__int64 a1, __int64 a2, int a3);
__int64 ExternalReadOnlyStream_DirectStream_Unknown6(__int64 a1, __int64 a2,
                                                     int a3);

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

__int64 ExternalReadOnlyStream_Unknown6(__int64 a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1) & 1) != 0) {
    return GameRoutine_2b47f0(a1 + 24, a2, a3);
  }
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  if (a3 != 2) {
    if (a3 == 1) {
      v8 = v7 - (a2 & (a2 >> 63));
      goto LABEL_16;
    }
    if (a3 == 0) {
      v8 = a2 & ~(a2 >> 63);
      goto LABEL_16;
    }
  LABEL_15:
    v8 = 0;
    goto LABEL_16;
  }
  if (a2 >= 1) {
    v8 = v7;
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
    if (v9 + a2 < v8) {
      v8 = v9 + a2;
    }
    goto LABEL_16;
  }
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  v8 = v10;
  if (a2 < 0) {
    if (!((v10 + a2 < 0) ^ __OFADD__(v10, a2) | (v10 + a2 == 0))) {
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1) + a2;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
LABEL_16:
  if (((*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 104) + 48LL))(
           *(_QWORD*)(a1 + 104), *(_QWORD*)(a1 + 8)) &
       1) == 0) {
    return 0x80000000LL;
  }
  result = 0;
  *(_QWORD*)(a1 + 8) = v8;
  return result;
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

__int64 ExternalReadOnlyStream_DirectStream_Unknown6(__int64 a1, __int64 a2,
                                                     int a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;

  v3 = *(_QWORD*)(a1 + 8);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
  if (a3 == 2) {
    if (a2 < 1) {
      v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 56LL))(v3);
      v8 = v11;
      if (a2 < 0) {
        if ((v11 + a2 < 0) ^ __OFADD__(v11, a2) | (v11 + a2 == 0)) {
          v8 = 0;
        }
        else {
          v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 56LL))(v3) + a2;
        }
      }
    }
    else {
      v8 = v6;
      v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 56LL))(v3);
      if (v10 + a2 < v8) {
        v8 = v10 + a2;
      }
    }
  }
  else {
    v7 = a2 & ~(a2 >> 63);
    if (a3 != 0) {
      v7 = 0;
    }
    if (a3 == 1) {
      v8 = v6 - (a2 & (a2 >> 63));
    }
    else {
      v8 = v7;
    }
  }
  if (((*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v3 + 104) + 48LL))(
           *(_QWORD*)(v3 + 104), *(_QWORD*)(v3 + 8)) &
       1) == 0) {
    return 0x80000000LL;
  }
  *(_QWORD*)(v3 + 8) = v8;
  return 0;
}

#pragma GCC visibility pop
