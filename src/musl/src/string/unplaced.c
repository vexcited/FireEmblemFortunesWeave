#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

char* __memmove_fast(char* result, char* a2, unsigned __int64 a3);

char* __memmove_fast(char* result, char* a2, unsigned __int64 a3)
{
  char* v3;
  char v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  char v26;

  if (a3 <= 0xF) {
    if (a3 != 0) {
      if (result >= a2) {
        do {
          result[a3 - 1] = a2[a3 - 1];
          --a3;
        } while (a3 != 0);
      }
      else {
        v3 = result;
        do {
          v4 = *a2++;
          --a3;
          *v3++ = v4;
        } while (a3 != 0);
      }
    }
    return result;
  }
  if (result == a2) {
    return result;
  }
  if (result < a2) {
    v5 = result;
    if (a3 < 0x20) {
      goto LABEL_12;
    }
    do {
      v6 = *(_QWORD*)a2;
      v7 = *((_QWORD*)a2 + 1);
      v8 = *((_QWORD*)a2 + 2);
      v9 = *((_QWORD*)a2 + 3);
      a2 += 32;
      a3 -= 32LL;
      *v5 = v6;
      v5[1] = v7;
      v5[2] = v8;
      v5[3] = v9;
      v5 += 4;
    } while (a3 > 0x1F);
    if (a3 >= 0x10) {
    LABEL_12:
      v10 = *(_QWORD*)a2;
      v11 = *((_QWORD*)a2 + 1);
      a2 += 16;
      a3 -= 16LL;
      *v5 = v10;
      v5[1] = v11;
      v5 += 2;
    }
    for (; a3 != 0; v5 = (_QWORD*)((char*)v5 + 1)) {
      v12 = *a2++;
      --a3;
      *(_BYTE*)v5 = v12;
    }
    return result;
  }
  if (a3 < 0x20) {
    v20 = &a2[a3];
    v21 = &result[a3];
  LABEL_23:
    v22 = *((_QWORD*)v20 - 2);
    v23 = *((_QWORD*)v20 - 1);
    v20 -= 16;
    a3 -= 16LL;
    *((_QWORD*)v21 - 2) = v22;
    *((_QWORD*)v21 - 1) = v23;
    v21 -= 16;
    goto LABEL_24;
  }
  do {
    v13 = &a2[a3];
    v14 = &result[a3];
    a3 -= 32LL;
    v16 = *((_QWORD*)v13 - 2);
    v15 = *((_QWORD*)v13 - 1);
    v19 = v13 - 32;
    v17 = *((_QWORD*)v13 - 4);
    v18 = *((_QWORD*)v19 + 1);
    *((_QWORD*)v14 - 2) = v16;
    *((_QWORD*)v14 - 1) = v15;
    *((_QWORD*)v14 - 4) = v17;
    *((_QWORD*)v14 - 3) = v18;
  } while (a3 > 0x1F);
  v20 = &a2[a3];
  v21 = &result[a3];
  if (a3 >= 0x10) {
    goto LABEL_23;
  }
LABEL_24:
  if (a3 != 0) {
    v24 = v21 - 1;
    v25 = v20 - 1;
    do {
      v26 = *v25--;
      --a3;
      *v24-- = v26;
    } while (a3 != 0);
  }
  return result;
}

#pragma GCC visibility pop
