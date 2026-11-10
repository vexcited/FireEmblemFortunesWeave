#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_630ca0(__int64 result, __int64);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 ElfFile_Unknown2(__int64 a1);
__int64 __cxa_demangle(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strstr(_QWORD, _QWORD);
__int64 ElfFile_631220(__int64* a1, __int64 a2);

__int64 ElfFile_Unknown2(__int64 a1)
{
  int v2;
  __int64 result;
  __int64 v4;

  nn_os_AcquireReadLock(a1 + 696);
  v2 = *(_DWORD*)(a1 + 656);
  result = nn_os_ReleaseReadLock(a1 + 696);
  if ((v2 & 0x10) == 0) {
    v4 = *(_QWORD*)(a1 + 592);
    if (v4 != 0) {
      return GameRoutine_630ca0(a1 + 800, v4);
    }
  }
  return result;
}

__int64 ElfFile_631220(__int64* a1, __int64 a2)
{
  __int64 v4;
  int v11;
  int v12;
  __int64 v13;
  _QWORD* i;
  __int64 v15;
  __int64 v16;
  __int64 v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  _QWORD* j;
  __int64 v30;
  __int64 v32;
  _BYTE v33[512];
  int v34;

  v4 = strstr(a2, "::");
  v11 = *((_DWORD*)a1 + 22);
  if (v4 != 0) {
    if (v11 != 0) {
      v12 = *((_DWORD*)a1 + 21);
      if (v12 < v11) {
        v13 = *(_QWORD*)(a1[7] + 24) + *a1;
        for (i = (_QWORD*)(a1[9] + 24LL * v12 + 8);; i += 3) {
          v15 = *((unsigned int*)i - 2);
          if ((_DWORD)v15 != 0 && (*((_BYTE*)i - 4) & 0xF0) == 0x10 &&
              i[1] != 0) {
            v34 = 0;
            v32 = 512;
            v16 = __cxa_demangle(v13 + v15, v33, &v32, &v34);
            if (v34 == 0 && (unsigned int)strcmp(a2, v16) == 0) {
              v23 = *i + *a1;
              v24 =
                  a1[1] + ((unsigned __int64)*((unsigned __int16*)i - 1) << 6);
              return v23 + *(_QWORD*)(v24 + 24);
            }
            v11 = *((_DWORD*)a1 + 22);
          }
          if (++v12 >= v11) {
            return 0;
          }
        }
      }
    }
    return 0;
  }
  if (v11 == 0) {
    return 0;
  }
  v25 = *((_DWORD*)a1 + 21);
  if (v11 <= v25) {
    return 0;
  }
  v26 = *a1;
  v27 = v11 - v25;
  v28 = *(_QWORD*)(a1[7] + 24) + *a1;
  for (j = (_QWORD*)(a1[9] + 24LL * v25 + 8);; j += 3) {
    v30 = *((unsigned int*)j - 2);
    if ((_DWORD)v30 != 0 && (*((_BYTE*)j - 4) & 0xF0) == 0x10 && j[1] != 0 &&
        (unsigned int)strcmp(a2, v28 + v30) == 0) {
      break;
    }
    if (--v27 == 0) {
      return 0;
    }
  }
  v24 = a1[1] + ((unsigned __int64)*((unsigned __int16*)j - 1) << 6);
  v23 = *j + v26;
  return v23 + *(_QWORD*)(v24 + 24);
}

#pragma GCC visibility pop
