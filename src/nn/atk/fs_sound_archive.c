#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FileStreamImpl_2b3530(_QWORD);
__int64 FileStreamImpl_Unknown12(_QWORD, _QWORD, _QWORD);
__int64 FileStreamImpl_Unknown2(_QWORD);
__int64 FileStreamImpl_Unknown4(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 FileStreamImpl_Unknown6(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2785a0(_QWORD);
__int64 GameRoutine_2785d0(_QWORD, _QWORD);
__int64 GameRoutine_278600(_QWORD);
__int64 GameRoutine_279360(_QWORD, _QWORD);
__int64 GameRoutine_284370(_QWORD);
__int64 GameRoutine_2843a0(_QWORD);
__int64 GameRoutine_2843d0(_QWORD);
__int64 GameRoutine_284400(_QWORD);
__int64 GameRoutine_285210(_QWORD, _QWORD);
__int64 GameRoutine_285280(_QWORD, _QWORD);
__int64 GameRoutine_285290(_QWORD, _QWORD);
__int64 GameRoutine_2b3d00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 strlen(_QWORD);
extern __int64* GameData_2134fe8[2];
__int64 FsSoundArchive_Destructor(__int64 a1);
__int64 FsSoundArchive_2760a0(_BYTE* a1);
bool FsSoundArchive_276120(__int64 a1, const char* a2);
__int64 FsSoundArchive_Unknown7(__int64 a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, __int64 a5);
__int64 FsSoundArchive_Unknown8(__int64 a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, __int64 a5, __int64 a6);
__int64 FsSoundArchive_2763f0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 FsSoundArchive_2764c0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 FsSoundArchive_Unknown4(__int64 result);
__int64 FsSoundArchive_Unknown5(__int64 result);
extern __int64 (*nn_atk_detail_fnd_FileStreamProxy_vtable[])();
_QWORD* FsSoundArchive_2b3d00(_QWORD* result, __int64 a2, __int64 a3,
                              __int64 a4);
_QWORD* GameRoutine_285210_alt1(_QWORD* result,
                                __int64*) __asm__("GameRoutine_285210");
__int64 FileStreamImpl_Unknown12_alt1(__int64, const char*,
                                      int) __asm__("FileStreamImpl_Unknown12");
__int64
FileStreamImpl_Unknown4_alt1(_QWORD*, __int64, __int64,
                             __int64) __asm__("FileStreamImpl_Unknown4");
__int64 GameRoutine_2785d0_alt1(__int64, __int64) __asm__("GameRoutine_2785d0");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
unsigned __int64
GameRoutine_279360_alt1(__int64, const char*) __asm__("GameRoutine_279360");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");

__int64 FsSoundArchive_Destructor(__int64 a1)
{
  int v2;

  *(_QWORD*)a1 = GameData_2134fe8[0] + 2;
  if (*(_BYTE*)(a1 + 873) == 1) {
    nn_os_LockMutex(a1 + 1520);
    v2 = *(_DWORD*)(a1 + 876);
    if (v2 == 0) {
      FileStreamImpl_Unknown12(a1 + 744, a1 + 880, 1);
      v2 = *(_DWORD*)(a1 + 876);
    }
    *(_DWORD*)(a1 + 876) = v2 + 1;
    nn_os_UnlockMutex(a1 + 1520);
  }
  if (*(_BYTE*)(a1 + 872) == 1) {
    FileStreamImpl_Unknown2(a1 + 744);
    *(_BYTE*)(a1 + 872) = 0;
  }
  GameRoutine_278600(a1);
  nn_os_FinalizeMutex(a1 + 1520);
  return GameRoutine_2785a0(a1);
}

__int64 FsSoundArchive_2760a0(_BYTE* a1)
{
  (*(void (**)(_BYTE*))(*(_QWORD*)a1 + 32LL))(a1);
  if (a1[872] == 1) {
    FileStreamImpl_Unknown2(a1 + 744);
    a1[872] = 0;
  }
  return GameRoutine_278600(a1);
}

bool FsSoundArchive_276120(__int64 a1, const char* a2)
{
  int v4;
  int v5;
  _BOOL8 result;
  _BOOL4 v7;
  __int64 v8;
  int v10;
  int v11;
  int v12;
  char* v13;
  const char* v14;
  char v15;
  int v16;
  char v17[255];
  _BYTE v18[384];

  if ((FileStreamImpl_Unknown12_alt1(a1 + 744, a2, 1) & 0x80000000) != 0) {
    return false;
  }
  v4 = *(_DWORD*)(a1 + 876);
  *(_BYTE*)(a1 + 872) = 1;
  *(_DWORD*)(a1 + 876) = v4 + 1;
  memset_alt1((__int64)v17, 0, 0x238u);
  if (FileStreamImpl_Unknown4_alt1((_QWORD*)(a1 + 744),
                                   (unsigned __int64)v18 & 0xFFFFFFFFFFFFFF00LL,
                                   256, 0) != 256) {
    return false;
  }
  GameRoutine_285210_alt1(
      (_QWORD*)(a1 + 672),
      (__int64*)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFF00LL));
  GameRoutine_2785d0_alt1(a1, a1 + 672);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  memset_alt1((__int64)v17, 0, 0x27Fu);
  v5 = strlen_alt1(a2);
  result = v5 < 639;
  if (v5 <= 638) {
    v7 = v5 < 639;
    if (v5 >= 1) {
      v8 = v5 & 0x7FFFFFFF;
      while (1) {
        v10 = (unsigned __int8)a2[v8 - 1];
        if (v10 == 92 || v10 == 47) {
          break;
        }
        if (v8-- <= 1) {
          goto LABEL_19;
        }
      }
      if ((unsigned int)v8 >= 0x27F) {
        v11 = 639;
      }
      else {
        v11 = v8;
      }
      v12 = v11 - 1;
      if (v11 == 1) {
        v13 = v17;
      }
      else {
        v13 = v17;
        v14 = a2;
        do {
          v16 = *(unsigned __int8*)v14++;
          v15 = v16;
          if (v16 == 0) {
            break;
          }
          *v13++ = v15;
          --v12;
        } while (v12 != 0);
      }
      *v13 = 0;
      v17[v8 - 1] = 0;
    }
  LABEL_19:
    GameRoutine_279360_alt1(a1, v17);
    nn_util_SNPrintf(a1 + 880, 639, "%s", a2);
    return v7;
  }
  return result;
}

__int64 FsSoundArchive_Unknown7(__int64 a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, __int64 a5)
{
  __int64 result;

  result = 0;
  if (a3 >= 0x20 && (*(_BYTE*)(a1 + 872) & 1) != 0) {
    GameRoutine_2b3d00(a2, a1 + 744, a4, a5);
    return a2;
  }
  return result;
}

__int64 FsSoundArchive_Unknown8(__int64 a1, __int64 a2, unsigned __int64 a3,
                                __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result;

  result = 0;
  if (a3 >= 0x80 && (*(_BYTE*)(a1 + 872) & 1) != 0) {
    FileStreamImpl_2b3530(a2);
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)a2 + 96LL))(a2, a4, 1);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a2 + 24LL))(a2) & 1) != 0) {
      if (a5 != 0 && a6 != 0) {
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)a2 + 112LL))(a2, a5,
                                                                        a6);
      }
      return a2;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 FsSoundArchive_2763f0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v6;
  unsigned __int64 v7;

  v6 = GameRoutine_284400(a1 + 672);
  v7 = (unsigned int)GameRoutine_2843a0(a1 + 672);
  if (a3 < v7) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  FileStreamImpl_Unknown6(a1 + 744, v6, 0);
  if (FileStreamImpl_Unknown4(a1 + 744, a2, v7, 0) != v7) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  GameRoutine_285290(a1 + 672, a2);
  return 1;
}

__int64 FsSoundArchive_2764c0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v6;
  unsigned int v7;
  __int64 v8;

  v6 = GameRoutine_2843d0(a1 + 672);
  v7 = GameRoutine_284370(a1 + 672);
  if (v6 == -1) {
    return 0;
  }
  v8 = v7;
  if (a3 < v7) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  FileStreamImpl_Unknown6(a1 + 744, v6, 0);
  if (FileStreamImpl_Unknown4(a1 + 744, a2, v8, 0) != v8) {
    return 0;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  GameRoutine_285280(a1 + 672, a2);
  return 1;
}

__int64 FsSoundArchive_Unknown4(__int64 result)
{
  __int64 v1;
  int v2;

  if (*(_BYTE*)(result + 873) == 1) {
    v1 = result;
    nn_os_LockMutex(result + 1520);
    v2 = *(_DWORD*)(v1 + 876);
    if (v2 == 0) {
      FileStreamImpl_Unknown12(v1 + 744, v1 + 880, 1);
      v2 = *(_DWORD*)(v1 + 876);
    }
    *(_DWORD*)(v1 + 876) = v2 + 1;
    return nn_os_UnlockMutex(v1 + 1520);
  }
  return result;
}

__int64 FsSoundArchive_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;

  if (*(_BYTE*)(result + 873) == 1) {
    v1 = result;
    nn_os_LockMutex(result + 1520);
    v2 = *(_DWORD*)(v1 + 876);
    if (v2 == 1) {
      FileStreamImpl_Unknown2(v1 + 744);
      v2 = *(_DWORD*)(v1 + 876);
    }
    if (v2 != 0) {
      *(_DWORD*)(v1 + 876) = v2 - 1;
    }
    return nn_os_UnlockMutex(v1 + 1520);
  }
  return result;
}

_QWORD* FsSoundArchive_2b3d00(_QWORD* result, __int64 a2, __int64 a3,
                              __int64 a4)
{
  result[2] = a3;
  result[3] = a4;
  *result = nn_atk_detail_fnd_FileStreamProxy_vtable;
  result[1] = a2;
  return result;
}

#pragma GCC visibility pop
