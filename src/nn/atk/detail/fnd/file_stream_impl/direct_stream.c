#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b3520(_QWORD);
__int64 nn_fs_ReadFile_1a0a620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_WriteFile(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 DirectStream_Unknown3_2b3a80(__int64 a1);
__int64 DirectStream_Unknown4_2b3a90(__int64 a1, __int64 a2, __int64 a3,
                                     int* a4);
__int64 DirectStream_Unknown5(__int64 a1, __int64 a2, __int64 a3, int* a4);
__int64 DirectStream_Unknown8_2b3cc0(__int64 a1);
__int64 DirectStream_Unknown9_2b3cd0(__int64 a1);
__int64 DirectStream_Unknown10_2b3ce0(__int64 a1);
__int64 DirectStream_Unknown11_2b3cf0(__int64 a1);

__int64 DirectStream_Unknown3_2b3a80(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown4_2b3a90(__int64 a1, __int64 a2, __int64 a3,
                                     int* a4)
{
  __int64 v4;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v12;

  v4 = *(_QWORD*)(a1 + 8);
  GameRoutine_2b3520(v4);
  v8 = *(_QWORD*)(v4 + 8);
  v9 = *(_QWORD*)(v4 + 32);
  v12 = 0;
  if ((unsigned int)nn_fs_ReadFile_1a0a620(&v12, v8, v9, a2, a3) == 0) {
    v10 = a3 != v12;
    *(_QWORD*)(v4 + 32) += v12;
    if (a4 == nullptr) {
      return v12;
    }
    goto LABEL_3;
  }
  v10 = -2130706432;
  if (a4 != nullptr) {
  LABEL_3:
    *a4 = v10;
  }
  return v12;
}

__int64 DirectStream_Unknown5(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
  _QWORD* v4;
  __int64 v8;
  __int64 v9;
  int v10;
  int v12;

  v4 = *(_QWORD**)(a1 + 8);
  GameRoutine_2b3520(v4);
  v8 = v4[1];
  v9 = v4[4];
  v12 = 0;
  v4[3] = 0xFFFFFFFFLL;
  if ((unsigned int)nn_fs_WriteFile(v8, v9, a2, a3, &v12) == 0) {
    v10 = 0;
    v4[4] += a3;
    if (a4 == nullptr) {
      return a3;
    }
    goto LABEL_3;
  }
  v10 = -2130706432;
  if (a4 != nullptr) {
  LABEL_3:
    *a4 = v10;
  }
  return a3;
}

__int64 DirectStream_Unknown8_2b3cc0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 64LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown9_2b3cd0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 72LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown10_2b3ce0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 80LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 DirectStream_Unknown11_2b3cf0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 88LL))(
      *(_QWORD*)(a1 + 8));
}

#pragma GCC visibility pop
