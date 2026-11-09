#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MassMeshData_f44c80(__int64 result);

__int64 MassMeshData_f44c80(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  _QWORD* v11;
  bool v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  _QWORD* v24;

  v1 = *(_QWORD**)(result + 8);
  v2 = (_QWORD*)(result + 16);
  v3 = (_QWORD*)result;
  if (v1 != (_QWORD*)(result + 16)) {
    do {
      v8 = v1[6];
      *((_BYTE*)v1 + 272) = 0;
      result = (*(__int64 (**)(void))(v8 + 48))();
      if ((result & 1) != 0) {
        v9 = 1036831949;
      }
      else {
        v9 = 0;
        *((_DWORD*)v1 + 69) = 0;
      }
      v10 = (_QWORD*)v1[1];
      *((_DWORD*)v1 + 70) = v9;
      if (v10 != nullptr) {
        do {
          v11 = v10;
          v10 = (_QWORD*)*v10;
        } while (v10 != nullptr);
      }
      else {
        do {
          v11 = (_QWORD*)v1[2];
          v12 = v1 == (_QWORD*)*v11;
          v1 = v11;
        } while (!v12);
      }
      v1 = v11;
    } while (v11 != v2);
  }
  v4 = (_QWORD*)v3[4];
  if (v4 != v3 + 5) {
    do {
      v13 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      result = (*(__int64 (**)(void))(v13 + 48))();
      if ((result & 1) != 0) {
        v14 = 1036831949;
      }
      else {
        v14 = 0;
        *((_DWORD*)v4 + 69) = 0;
      }
      v15 = (_QWORD*)v4[1];
      *((_DWORD*)v4 + 70) = v14;
      if (v15 != nullptr) {
        do {
          v16 = v15;
          v15 = (_QWORD*)*v15;
        } while (v15 != nullptr);
      }
      else {
        do {
          v16 = (_QWORD*)v4[2];
          v12 = v4 == (_QWORD*)*v16;
          v4 = v16;
        } while (!v12);
      }
      v4 = v16;
    } while (v16 != v3 + 5);
  }
  v5 = (_QWORD*)v3[7];
  if (v5 != v3 + 8) {
    do {
      v17 = v5[6];
      *((_BYTE*)v5 + 272) = 0;
      result = (*(__int64 (**)(void))(v17 + 48))();
      if ((result & 1) != 0) {
        v18 = 1036831949;
      }
      else {
        v18 = 0;
        *((_DWORD*)v5 + 69) = 0;
      }
      v19 = (_QWORD*)v5[1];
      *((_DWORD*)v5 + 70) = v18;
      if (v19 != nullptr) {
        do {
          v20 = v19;
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
      else {
        do {
          v20 = (_QWORD*)v5[2];
          v12 = v5 == (_QWORD*)*v20;
          v5 = v20;
        } while (!v12);
      }
      v5 = v20;
    } while (v20 != v3 + 8);
  }
  v6 = (_QWORD*)v3[10];
  v7 = v3 + 11;
  if (v6 != v7) {
    do {
      v21 = v6[6];
      *((_BYTE*)v6 + 272) = 0;
      result = (*(__int64 (**)(void))(v21 + 48))();
      if ((result & 1) != 0) {
        v22 = 1036831949;
      }
      else {
        v22 = 0;
        *((_DWORD*)v6 + 69) = 0;
      }
      v23 = (_QWORD*)v6[1];
      *((_DWORD*)v6 + 70) = v22;
      if (v23 != nullptr) {
        do {
          v24 = v23;
          v23 = (_QWORD*)*v23;
        } while (v23 != nullptr);
      }
      else {
        do {
          v24 = (_QWORD*)v6[2];
          v12 = v6 == (_QWORD*)*v24;
          v6 = v24;
        } while (!v12);
      }
      v6 = v24;
    } while (v24 != v7);
  }
  return result;
}

#pragma GCC visibility pop
