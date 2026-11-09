#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b3520(void);
__int64 GameRoutine_2b3860(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b3f60(_QWORD);
__int64 GameRoutine_2b3fb0(_QWORD);
__int64 GameRoutine_2b47f0(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(void);
__int64 nn_fs_CloseFile(_QWORD);
__int64 nn_fs_FlushFile(_QWORD);
__int64 nn_fs_GetFileSize(_QWORD, _QWORD);
__int64 nn_fs_OpenFile(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_ReadFile_1a0a620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_WriteFile(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*nn_atk_detail_fnd_FileStreamImpl_DirectStream_vtable[])();
extern __int64 GameData_21354f8[10];
extern unsigned int GameData_1b12b80[5];
__int64 FileStreamImpl_Unknown6(__int64 a1, __int64 a2, unsigned int a3);
__int64 FileStreamImpl_Unknown14(__int64 a1, __int64 a2, __int64 a3);
__int64 FileStreamImpl_2b3530(__int64 a1);
__int64 FileStreamImpl_Unknown12(__int64 a1, __int64 a2, int a3);
__int64 FileStreamImpl_Unknown2(__int64 a1);
__int64 FileStreamImpl_Unknown13(_QWORD* a1);
__int64 FileStreamImpl_Unknown8(__int64 a1);
__int64 FileStreamImpl_2b3740(__int64 a1, __int64 a2, __int64 a3, int* a4);
__int64 FileStreamImpl_2b37d0(_QWORD* a1, __int64 a2, __int64 a3, int* a4);
__int64 FileStreamImpl_Unknown7(__int64 a1);
bool FileStreamImpl_Unknown16(_QWORD* a1);

__int64 FileStreamImpl_Unknown6(__int64 a1, __int64 a2, unsigned int a3)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1) & 1) != 0) {
    return GameRoutine_2b47f0(a1 + 40, a2, a3);
  }
  else {
    return GameRoutine_2b3860(a1, a2, a3);
  }
}

__int64 FileStreamImpl_Unknown14(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v8;
  __int64 v10;

  if (*(_QWORD*)(a1 + 48) != 0 && *(_QWORD*)(a1 + 64) != 0 &&
      *(_QWORD*)(a1 + 72) != 0) {
    GameRoutine_2b3fb0(a1 + 40);
  }
  v8 = (*(int (**)(__int64))(*(_QWORD*)a1 + 136LL))(a1);
  v10 = (a2 + v8 - 1) & -v8;
  *(_QWORD*)(a1 + 48) = a1 + 104;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = v10;
  *(_QWORD*)(a1 + 72) = a3 + a2 - v10;
  *(_BYTE*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 80) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 88) = 0;
  return a1 + 40;
}

__int64 FileStreamImpl_2b3530(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = GameData_21354f8[0];
  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 32) = 0;
  result = GameRoutine_2b3f60(a1 + 40);
  *(_QWORD*)(a1 + 112) = a1;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 104) = nn_atk_detail_fnd_FileStreamImpl_DirectStream_vtable;
  return result;
}

__int64 FileStreamImpl_Unknown12(__int64 a1, __int64 a2, int a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 result;

  v4 = 1;
  v5 = a3 - 2;
  *(_QWORD*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 16) = 1;
  if (v5 <= 4) {
    v4 = GameData_1b12b80[v5];
  }
  result = nn_fs_OpenFile(a1 + 8, a2, v4);
  if ((_DWORD)result != 0) {
    if ((result & 0x3FFFFF) == 0x202) {
      return 2164260865LL;
    }
    else if ((result & 0x1FF) == 2 &&
             (((unsigned int)result >> 9) & 0x1FF8) - 4000 < 0x3E8) {
      return 2164260866LL;
    }
    else if ((result & 0x3FFFFF) == 0xE02) {
      return 2164260867LL;
    }
    else {
      return 2164260864LL;
    }
  }
  return result;
}

__int64 FileStreamImpl_Unknown2(__int64 a1)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  if ((result & 1) != 0) {
    *(_QWORD*)(a1 + 32) = 0;
    *(_BYTE*)(a1 + 16) = 0;
    return nn_fs_CloseFile(*(_QWORD*)(a1 + 8));
  }
  return result;
}

__int64 FileStreamImpl_Unknown13(_QWORD* a1)
{
  __int64 result;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  if ((result & 1) != 0) {
    return nn_fs_FlushFile(a1[1]);
  }
  return result;
}

__int64 FileStreamImpl_Unknown8(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  result = *(_QWORD*)(a1 + 24);
  if (result == 0xFFFFFFFFLL) {
    v3 = *(_QWORD*)(a1 + 8);
    v4 = 0;
    if ((unsigned int)nn_fs_GetFileSize(&v4, v3) != 0) {
      nn_diag_detail_AbortImpl_1a0a590();
      return 1;
    }
    else {
      result = v4;
      *(_QWORD*)(a1 + 24) = v4;
    }
  }
  return result;
}

__int64 FileStreamImpl_2b3740(__int64 a1, __int64 a2, __int64 a3, int* a4)
{
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v12;

  GameRoutine_2b3520();
  v8 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(a1 + 32);
  v12 = 0;
  if ((unsigned int)nn_fs_ReadFile_1a0a620(&v12, v8, v9, a2, a3) == 0) {
    v10 = a3 != v12;
    *(_QWORD*)(a1 + 32) += v12;
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

__int64 FileStreamImpl_2b37d0(_QWORD* a1, __int64 a2, __int64 a3, int* a4)
{
  __int64 v8;
  __int64 v9;
  int v10;
  int v12;

  GameRoutine_2b3520();
  v8 = a1[1];
  v9 = a1[4];
  v12 = 0;
  a1[3] = 0xFFFFFFFFLL;
  if ((unsigned int)nn_fs_WriteFile(v8, v9, a2, a3, &v12) == 0) {
    v10 = 0;
    a1[4] += a3;
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

__int64 FileStreamImpl_Unknown7(__int64 a1)
{
  char v2;
  __int64 v3;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 128LL))(a1);
  v3 = 32;
  if ((v2 & 1) != 0) {
    v3 = 56;
  }
  return *(_QWORD*)(a1 + v3);
}

bool FileStreamImpl_Unknown16(_QWORD* a1)
{
  return a1[6] != 0 && a1[8] != 0 && a1[9] != 0;
}

#pragma GCC visibility pop
