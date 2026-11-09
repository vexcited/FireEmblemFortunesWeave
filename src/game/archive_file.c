#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_6315e0(_QWORD*);
_QWORD* GameRoutine_65c380(_QWORD* result, unsigned __int64*, __int64);
__int64 GameRoutine_65c4a0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern __int64 (*game_ArchiveFile_vtable[])();
_QWORD* ArchiveFile_Destructor(_QWORD* a1);
_QWORD* ArchiveFile_Unknown2(_QWORD* result);

_QWORD* ArchiveFile_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  unsigned int v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;

  v1 = a1[100];
  *a1 = game_ArchiveFile_vtable;
  if (v1 != 0) {
    if (*(_BYTE*)(v1 + 31) != 0) {
      v3 = (unsigned int)(*(_DWORD*)(v1 + 12) - 1);
      if ((int)v3 >= 0) {
        v4 = a1[101];
        v5 = v3 + 1;
        v6 = (unsigned int*)(8 * ((unsigned __int64)*(unsigned int*)(v1 + 4) >>
                                  3) +
                             8LL * *(unsigned int*)(v1 + 8) +
                             8LL * (unsigned int)v3 + v1 + 32);
        do {
          v7 = *v6;
          v6 -= 2;
          v11 = *(_QWORD*)(v1 + 40 + 8 * ((unsigned __int64)v7 >> 3));
          v10 = game_HashString(v11);
          GameRoutine_65c4a0(v4, &v10);
          --v5;
        } while (v5 != 0);
      }
      *(_BYTE*)(v1 + 31) = 0;
    }
    a1[100] = 0;
  }
  v8 = a1[101];
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    a1[101] = 0;
  }
  return GameRoutine_6315e0(a1);
}

_QWORD* ArchiveFile_Unknown2(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  int* v15;
  unsigned __int64 v16;
  _BYTE* v17;
  int v18;
  unsigned __int64* v19;

  v1 = result[74];
  if (v1 == 0) {
    return result;
  }
  v2 = (_QWORD*)result[101];
  v3 = result;
  v4 = *(unsigned int*)(v1 + 8);
  v5 = v1 + 32;
  v6 = (unsigned __int64)*(unsigned int*)(v1 + 4) >> 3;
  v7 = v1 + 32 + 8 * v6;
  if (*(_BYTE*)(v1 + 24) != 72 || *(_BYTE*)(v1 + 25) != 83 ||
      *(_BYTE*)(v1 + 26) != 68 || *(_BYTE*)(v1 + 27) != 65 ||
      *(_BYTE*)(v1 + 28) != 114 || *(_BYTE*)(v1 + 29) != 99 ||
      *(_BYTE*)(v1 + 30) != 0) {
    strcpy((char*)(v1 + 24), "HSDArc");
    if ((_DWORD)v4 != 0) {
      v8 = v4 & 7;
      if ((unsigned int)v4 >= 8) {
        v10 = (_QWORD*)(v7 + 16);
        v11 = 0;
        do {
          v11 -= 8;
          *(_QWORD*)(v5 + (*(v10 - 2) & 0xFFFFFFFFFFFFFFF8LL)) += v5;
          *(_QWORD*)(v5 + (*(v10 - 1) & 0xFFFFFFFFFFFFFFF8LL)) += v5;
          *(_QWORD*)(v5 + (*v10 & 0xFFFFFFFFFFFFFFF8LL)) += v5;
          *(_QWORD*)(v5 + (v10[1] & 0xFFFFFFFFFFFFFFF8LL)) += v5;
          *(_QWORD*)(v5 + (v10[2] & 0xFFFFFFFFFFFFFFF8LL)) += v5;
          *(_QWORD*)(v5 + (v10[3] & 0xFFFFFFFFFFFFFFF8LL)) += v5;
          *(_QWORD*)(v5 + (v10[4] & 0xFFFFFFFFFFFFFFF8LL)) += v5;
          v12 = v10[5];
          v10 += 8;
          *(_QWORD*)(v5 + (v12 & 0xFFFFFFFFFFFFFFF8LL)) += v5;
        } while (-(__int64)((unsigned int)v4 & 0xFFFFFFF8) != v11);
        v9 = -v11;
        if ((v4 & 7) == 0) {
          goto LABEL_18;
        }
      }
      else {
        v9 = 0;
        if ((v4 & 7) == 0) {
          goto LABEL_18;
        }
      }
      v13 = (__int64*)(8 * v9 + 8 * v6 + v1 + 32);
      do {
        v14 = *v13++;
        --v8;
        *(_QWORD*)(v5 + (v14 & 0xFFFFFFFFFFFFFFF8LL)) += v5;
      } while (v8 != 0);
    }
  }

LABEL_18:
  if (*(_BYTE*)(v1 + 31) == 0) {
    *(_BYTE*)(v1 + 31) = 1;
    if (*(_DWORD*)(v1 + 12) != 0) {
      v15 = (int*)(v7 + 8 * v4);
      v16 = 0;
      do {
        v18 = *v15;
        v15 += 2;
        v19 = (unsigned __int64*)(v5 + (v18 & 0xFFFFFFF8));
        v17 = (_BYTE*)v19[1];
        if (v17 != nullptr) {
          if (*v17 != 0) {
            v17 = (_BYTE*)game_HashString(v17);
          }
          else {
            v17 = nullptr;
          }
        }
        *v19 = (unsigned __int64)v17;
        result = GameRoutine_65c380(v2, v19, (__int64)v19);
        ++v16;
      } while (v16 < *(unsigned int*)(v1 + 12));
    }
  }
  v3[100] = v5;
  return result;
}

#pragma GCC visibility pop
