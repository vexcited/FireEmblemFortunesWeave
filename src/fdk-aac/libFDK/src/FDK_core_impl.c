#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FDKsprintf_plt(_QWORD, const char*, ...);
extern char SdkData_bbbd5c;
__int64 nn_codec_FDK_toolsGetLibInfo(_DWORD* a1);

__int64 nn_codec_FDK_toolsGetLibInfo(_DWORD* a1)
{
  unsigned int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  _DWORD* v33;

  if (a1 == nullptr) {
    return 0xFFFFFFFFLL;
  }
  v1 = a1[6];
  if (v1 != 0) {
    if (v1 == 1) {
      return 0xFFFFFFFFLL;
    }
    v2 = a1[24];
    if (v2 == 0) {
      v1 = 1;
      goto LABEL_97;
    }
    if (v2 == 1) {
      return 0xFFFFFFFFLL;
    }
    v3 = a1[42];
    if (v3 == 0) {
      v1 = 2;
      goto LABEL_97;
    }
    if (v3 == 1) {
      return 0xFFFFFFFFLL;
    }
    v4 = a1[60];
    if (v4 == 0) {
      v1 = 3;
      goto LABEL_97;
    }
    if (v4 == 1) {
      return 0xFFFFFFFFLL;
    }
    v5 = a1[78];
    if (v5 == 0) {
      v1 = 4;
      goto LABEL_97;
    }
    if (v5 == 1) {
      return 0xFFFFFFFFLL;
    }
    v6 = a1[96];
    if (v6 == 0) {
      v1 = 5;
      goto LABEL_97;
    }
    if (v6 == 1) {
      return 0xFFFFFFFFLL;
    }
    v7 = a1[114];
    if (v7 == 0) {
      v1 = 6;
      goto LABEL_97;
    }
    if (v7 == 1) {
      return 0xFFFFFFFFLL;
    }
    v8 = a1[132];
    if (v8 == 0) {
      v1 = 7;
      goto LABEL_97;
    }
    if (v8 == 1) {
      return 0xFFFFFFFFLL;
    }
    v9 = a1[150];
    if (v9 == 0) {
      v1 = 8;
      goto LABEL_97;
    }
    if (v9 == 1) {
      return 0xFFFFFFFFLL;
    }
    v10 = a1[168];
    if (v10 == 0) {
      v1 = 9;
      goto LABEL_97;
    }
    if (v10 == 1) {
      return 0xFFFFFFFFLL;
    }
    v11 = a1[186];
    if (v11 == 0) {
      v1 = 10;
      goto LABEL_97;
    }
    if (v11 == 1) {
      return 0xFFFFFFFFLL;
    }
    v12 = a1[204];
    if (v12 == 0) {
      v1 = 11;
      goto LABEL_97;
    }
    if (v12 == 1) {
      return 0xFFFFFFFFLL;
    }
    v13 = a1[222];
    if (v13 == 0) {
      v1 = 12;
      goto LABEL_97;
    }
    if (v13 == 1) {
      return 0xFFFFFFFFLL;
    }
    v14 = a1[240];
    if (v14 == 0) {
      v1 = 13;
      goto LABEL_97;
    }
    if (v14 == 1) {
      return 0xFFFFFFFFLL;
    }
    v15 = a1[258];
    if (v15 == 0) {
      v1 = 14;
      goto LABEL_97;
    }
    if (v15 == 1) {
      return 0xFFFFFFFFLL;
    }
    v16 = a1[276];
    if (v16 == 0) {
      v1 = 15;
      goto LABEL_97;
    }
    if (v16 == 1) {
      return 0xFFFFFFFFLL;
    }
    v17 = a1[294];
    if (v17 == 0) {
      v1 = 16;
      goto LABEL_97;
    }
    if (v17 == 1) {
      return 0xFFFFFFFFLL;
    }
    v18 = a1[312];
    if (v18 == 0) {
      v1 = 17;
      goto LABEL_97;
    }
    if (v18 == 1) {
      return 0xFFFFFFFFLL;
    }
    v19 = a1[330];
    if (v19 == 0) {
      v1 = 18;
      goto LABEL_97;
    }
    if (v19 == 1) {
      return 0xFFFFFFFFLL;
    }
    v20 = a1[348];
    if (v20 == 0) {
      v1 = 19;
      goto LABEL_97;
    }
    if (v20 == 1) {
      return 0xFFFFFFFFLL;
    }
    v21 = a1[366];
    if (v21 == 0) {
      v1 = 20;
      goto LABEL_97;
    }
    if (v21 == 1) {
      return 0xFFFFFFFFLL;
    }
    v22 = a1[384];
    if (v22 == 0) {
      v1 = 21;
      goto LABEL_97;
    }
    if (v22 == 1) {
      return 0xFFFFFFFFLL;
    }
    v23 = a1[402];
    if (v23 == 0) {
      v1 = 22;
      goto LABEL_97;
    }
    if (v23 == 1) {
      return 0xFFFFFFFFLL;
    }
    v24 = a1[420];
    if (v24 == 0) {
      v1 = 23;
      goto LABEL_97;
    }
    if (v24 == 1) {
      return 0xFFFFFFFFLL;
    }
    v25 = a1[438];
    if (v25 == 0) {
      v1 = 24;
      goto LABEL_97;
    }
    if (v25 == 1) {
      return 0xFFFFFFFFLL;
    }
    v26 = a1[456];
    if (v26 == 0) {
      v1 = 25;
      goto LABEL_97;
    }
    if (v26 == 1) {
      return 0xFFFFFFFFLL;
    }
    v27 = a1[474];
    if (v27 == 0) {
      v1 = 26;
      goto LABEL_97;
    }
    if (v27 == 1) {
      return 0xFFFFFFFFLL;
    }
    v28 = a1[492];
    if (v28 == 0) {
      v1 = 27;
      goto LABEL_97;
    }
    if (v28 == 1) {
      return 0xFFFFFFFFLL;
    }
    v29 = a1[510];
    if (v29 == 0) {
      v1 = 28;
      goto LABEL_97;
    }
    if (v29 == 1) {
      return 0xFFFFFFFFLL;
    }
    v30 = a1[528];
    if (v30 == 0) {
      v1 = 29;
      goto LABEL_97;
    }
    if (v30 == 1) {
      return 0xFFFFFFFFLL;
    }
    v31 = a1[546];
    if (v31 != 0) {
      if (v31 == 1 || a1[564] != 0) {
        return 0xFFFFFFFFLL;
      }
      v1 = 31;
    }
    else {
      v1 = 30;
    }
  }
LABEL_97:
  v33 = &a1[18 * v1];
  nn_codec_FDKsprintf_plt(v33 + 9, "%d.%d.%d", 2, 3, 6);
  v33[8] = 0;
  *((_QWORD*)v33 + 2) = &SdkData_bbbd5c;
  *((_QWORD*)v33 + 3) = 0x203060000000001LL;
  *(_QWORD*)v33 = "FDK Tools";
  *((_QWORD*)v33 + 1) = &SdkData_bbbd5c;
  return 0;
}

#pragma GCC visibility pop
