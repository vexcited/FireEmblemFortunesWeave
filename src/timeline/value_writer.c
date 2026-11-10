#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Value_2ad0(_QWORD);
__int64 Value_33e0(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 timeline_OutputStream_Write(_QWORD);
extern unsigned int GameData_1b37d88[29];
int** ValueWriter_4ff0(int** result);
int** ValueWriter_5280(int** result);

int** ValueWriter_4ff0(int** result)
{
  int* v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  int* v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int** v16;
  char v17;
  int v18;
  _BYTE* v19;
  int** v20;
  __int64 v21;
  char v22;
  int** v23;
  char v24;

  v1 = *result;
  v3 = (unsigned int)(*result)[4];
  v2 = (unsigned int)(*result)[5];
  v4 = v2 - 1;
  if (v2 - 1 >= v3) {
    v9 = v4 - v3;
    v10 = __clz(v9 + 16);
    v5 = (int*)(*(_QWORD*)(*((_QWORD*)v1 + 4) + 8 * (27 - v10) + 8) +
                8LL * (v9 - GameData_1b37d88[28 - v10]));
    v6 = *v5;
    if ((*v5 & 0xFFFFFFFB) != 2) {
      goto LABEL_3;
    }
  }
  else {
    v5 = (int*)(*((_QWORD*)v1 + 3) + 8 * v4);
    v6 = *v5;
    if ((*v5 & 0xFFFFFFFB) != 2) {
    LABEL_3:
      v7 = *v1;
      if (v6 == 1) {
        if (v7 == 0) {
          v8 = 11;
        LABEL_16:
          *v1 = v8;
        }
      LABEL_17:
        *v5 = 5;
        return result;
      }
      if (v7 != 0) {
        goto LABEL_17;
      }
    LABEL_15:
      v8 = 4;
      goto LABEL_16;
    }
  }
  v11 = v1[1];
  if ((v11 & 2) == 0) {
    v12 = *((_QWORD*)v1 + 1);
    if ((v11 & 4) != 0) {
      v19 = *((_BYTE**)v1 + 10);
      if (v19 + 1 > (_BYTE*)v1 + 152) {
        v20 = result;
        v21 = *((_QWORD*)v1 + 1);
        *((_QWORD*)v1 + 10) = v1 + 22;
        v22 = timeline_OutputStream_Write(v21);
        result = v20;
        if ((v22 & 1) == 0) {
          goto LABEL_25;
        }
        v19 = *((_BYTE**)v1 + 10);
      }
      v23 = result;
      *v19 = 10;
      ++*((_QWORD*)v1 + 10);
      v24 = Value_33e0(*result, (unsigned int)(*result)[5] - 1LL);
      result = v23;
      if ((v24 & 1) == 0) {
      LABEL_25:
        if (**result == 0) {
          **result = 8;
        }
        goto LABEL_17;
      }
      v1 = *v23;
      v13 = *((_QWORD*)*v23 + 10);
      if (v13 + 1 <= (unsigned __int64)(*v23 + 38)) {
      LABEL_28:
        *(_BYTE*)(*((_QWORD*)v1 + 10))++ = 93;
        v1 = *result;
        LODWORD(v2) = (*result)[5];
        if ((_DWORD)v2 == 0) {
          return result;
        }
        goto LABEL_20;
      }
    }
    else {
      v13 = *((_QWORD*)v1 + 10);
      if (v13 + 1 <= (unsigned __int64)(v1 + 38)) {
        goto LABEL_28;
      }
    }
    v14 = v13 - (_QWORD)(v1 + 22);
    *((_QWORD*)v1 + 10) = v1 + 22;
    if (v14 < 0) {
      if (*(_DWORD*)(v12 + 40) == 0) {
        *(_DWORD*)(v12 + 40) = 22;
      }
      goto LABEL_25;
    }
    v15 = *(_QWORD*)(v12 + 16);
    v16 = result;
    if ((unsigned __int64)(v15 + v14) <= *(_QWORD*)(v12 + 32)) {
      memcpy(*(_QWORD*)(v12 + 24) + v15, v1 + 22, v14);
      result = v16;
      *(_QWORD*)(v12 + 16) += v14;
    }
    else {
      v17 = Value_2ad0(v12);
      result = v16;
      if ((v17 & 1) == 0) {
        goto LABEL_25;
      }
    }
    goto LABEL_28;
  }
  if (v5[1] != 0) {
    if (*v1 != 0) {
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ((_DWORD)v2 != 0) {
  LABEL_20:
    v18 = v2 - 1;
    if (v18 != 0) {
      v1[5] = v18;
    }
    else {
      *v5 = 1;
    }
  }
  return result;
}

int** ValueWriter_5280(int** result)
{
  int* v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  int* v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int** v16;
  char v17;
  int v18;
  _BYTE* v19;
  int** v20;
  __int64 v21;
  char v22;
  int** v23;
  char v24;

  v1 = *result;
  v3 = (unsigned int)(*result)[4];
  v2 = (unsigned int)(*result)[5];
  v4 = v2 - 1;
  if (v2 - 1 >= v3) {
    v9 = v4 - v3;
    v10 = __clz(v9 + 16);
    v5 = (int*)(*(_QWORD*)(*((_QWORD*)v1 + 4) + 8 * (27 - v10) + 8) +
                8LL * (v9 - GameData_1b37d88[28 - v10]));
    v6 = *v5;
    if ((*v5 & 0xFFFFFFFB) != 3) {
      goto LABEL_3;
    }
  }
  else {
    v5 = (int*)(*((_QWORD*)v1 + 3) + 8 * v4);
    v6 = *v5;
    if ((*v5 & 0xFFFFFFFB) != 3) {
    LABEL_3:
      v7 = *v1;
      if (v6 == 1) {
        if (v7 == 0) {
          v8 = 11;
        LABEL_16:
          *v1 = v8;
        }
      LABEL_17:
        *v5 = 5;
        return result;
      }
      if (v7 != 0) {
        goto LABEL_17;
      }
    LABEL_15:
      v8 = 6;
      goto LABEL_16;
    }
  }
  v11 = v1[1];
  if ((v11 & 2) == 0) {
    v12 = *((_QWORD*)v1 + 1);
    if ((v11 & 4) != 0) {
      v19 = *((_BYTE**)v1 + 10);
      if (v19 + 1 > (_BYTE*)v1 + 152) {
        v20 = result;
        v21 = *((_QWORD*)v1 + 1);
        *((_QWORD*)v1 + 10) = v1 + 22;
        v22 = timeline_OutputStream_Write(v21);
        result = v20;
        if ((v22 & 1) == 0) {
          goto LABEL_24;
        }
        v19 = *((_BYTE**)v1 + 10);
      }
      v23 = result;
      *v19 = 10;
      ++*((_QWORD*)v1 + 10);
      v24 = Value_33e0(*result, (unsigned int)(*result)[5] - 1LL);
      result = v23;
      if ((v24 & 1) == 0) {
      LABEL_24:
        if (**result == 0) {
          **result = 8;
        }
        goto LABEL_17;
      }
      v1 = *v23;
      v13 = *((_QWORD*)*v23 + 10);
      if (v13 + 1 <= (unsigned __int64)(*v23 + 38)) {
      LABEL_27:
        *(_BYTE*)(*((_QWORD*)v1 + 10))++ = 125;
        v1 = *result;
        LODWORD(v2) = (*result)[5];
        if ((_DWORD)v2 == 0) {
          return result;
        }
        goto LABEL_20;
      }
    }
    else {
      v13 = *((_QWORD*)v1 + 10);
      if (v13 + 1 <= (unsigned __int64)(v1 + 38)) {
        goto LABEL_27;
      }
    }
    v14 = v13 - (_QWORD)(v1 + 22);
    *((_QWORD*)v1 + 10) = v1 + 22;
    if (v14 < 0) {
      if (*(_DWORD*)(v12 + 40) == 0) {
        *(_DWORD*)(v12 + 40) = 22;
      }
      goto LABEL_24;
    }
    v15 = *(_QWORD*)(v12 + 16);
    v16 = result;
    if ((unsigned __int64)(v15 + v14) <= *(_QWORD*)(v12 + 32)) {
      memcpy(*(_QWORD*)(v12 + 24) + v15, v1 + 22, v14);
      result = v16;
      *(_QWORD*)(v12 + 16) += v14;
    }
    else {
      v17 = Value_2ad0(v12);
      result = v16;
      if ((v17 & 1) == 0) {
        goto LABEL_24;
      }
    }
    goto LABEL_27;
  }
  if (v5[1] != 0) {
    if (*v1 != 0) {
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ((_DWORD)v2 != 0) {
  LABEL_20:
    v18 = v2 - 1;
    if (v18 != 0) {
      v1[5] = v18;
    }
    else {
      *v5 = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
