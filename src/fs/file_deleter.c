#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64* snd_g_fileIndex_ptr[2];
__int64 FileDeleter_Unknown2(__int64 a1);

__int64 FileDeleter_Unknown2(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  signed __int64 v11;
  __int64 v12;

  v2 = snd_g_fileIndex_ptr[0];
  v3 = *snd_g_fileIndex_ptr[0];
  nn_os_LockMutex(*snd_g_fileIndex_ptr[0] + 4456);
  v4 = *v2;
  v5 = *(_QWORD*)(a1 + 16);
  v6 = *(char**)(*v2 + 4352);
  v7 = *(char**)(v4 + 4360);
  if (v6 != v7) {
    v8 = v7 - v6 - 8;
    if ((~(_BYTE)v8 & 0x18) != 0) {
      v9 = ((unsigned __int8)((unsigned int)v8 >> 3) + 1) & 3;
      while (*(_QWORD*)v6 != v5) {
        v6 += 8;
        if (--v9 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v8 < 0x18) {
        goto LABEL_21;
      }
      v6 += 16;
      while (1) {
        if (*((_QWORD*)v6 - 2) == v5) {
          v6 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD*)v6 - 1) == v5) {
          v6 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD*)v6 == v5) {
          goto LABEL_17;
        }
        if (*((_QWORD*)v6 + 1) == v5) {
          break;
        }
        v10 = v6 + 16;
        v6 += 32;
        if (v10 == v7) {
          goto LABEL_21;
        }
      }
      v6 += 8;
    }
  }

LABEL_17:
  if (v6 != v7) {
    v11 = v7 - (v6 + 8);
    if (v7 != v6 + 8) {
      memmove(v6, v6 + 8, v7 - (v6 + 8));
    }
    *(_QWORD*)(v4 + 4360) = &v6[v11];
    v5 = *(_QWORD*)(a1 + 16);
  }

LABEL_21:
  v12 = *(_QWORD*)(v5 + 568);
  (**(void (***)(__int64))v5)(v5);
  (*(void (**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v12 + 24LL))(
      v12, *(_QWORD*)(a1 + 16), 0, 16);
  return nn_os_UnlockMutex(v3 + 4456);
}

#pragma GCC visibility pop
