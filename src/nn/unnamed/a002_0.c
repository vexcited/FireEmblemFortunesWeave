#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};

__int64 SdkRoutine_810f00(int, int, int, int, int, void*);

__int64 SdkRoutine_812100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_830290(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_86ee60(_QWORD);

struct PseudoSret SdkRoutine_87cd90(_QWORD);

__int64 SdkRoutine_87d080(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

__int64 SdkRoutine_87d0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

__int64 SdkHr_802900(__int64 a1, int a2, __int64 a3, unsigned int a4,
                     __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  char* v9;
  int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 i;
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
  char* v31;
  __int64 v33;
  __int64 v34;
  int v35;
  _BYTE v36[45];
  char v37;
  unsigned __int8 v38;
  _BYTE v39[6];
  _QWORD v40[2];

  v40[0] = v5;
  v40[1] = v6;
  v7 = *(_DWORD*)(a3 + 8);
  v9 = &v37;
  v12 = v7 & 0x4A;
  if (v12 == 8) {
    v13 = 16;
  }
  else {
    v13 = 10;
  }
  if (v12 == 64) {
    v14 = 8;
  }
  else {
    v14 = v13;
  }
  if (a5 < 0) {
    if (v12 == 8) {
      goto LABEL_15;
    }
    v15 = a5;
    if (v12 != 64) {
      v15 = -a5;
      v9 = (char*)&v38;
      v37 = 45;
    }
  }
  else {
    if ((v7 & 0x800) == 0 || v12 == 8) {
      goto LABEL_15;
    }
    v15 = a5;
    if (v12 != 64) {
      v9 = (char*)&v38;
      v37 = 43;
    LABEL_15:
      v15 = a5;
    }
  }
  if (a5 != 0 && (v7 & 0x200) != 0) {
    if (v12 == 64) {
      *v9++ = 48;
    }
    else if (v12 == 8) {
      *v9 = 48;
      if ((v7 & 0x4000) != 0) {
        v16 = 88;
      }
      else {
        v16 = 120;
      }
      v9[1] = v16;
      v9 += 2;
    }
  }
  v17 = SdkRoutine_830290(v9, v40, v15, v14);
  v18 = v17;
  if ((~v7 & 0x4008) == 0) {
    v19 = (unsigned __int64)&v9[-v17];
    if (v9 != (char*)v17) {
      for (i = ((_BYTE)v17 - (_BYTE)v9) & 7; i != 0; *v9++ = v21) {
        v21 = (unsigned __int8)*v9;
        if ((unsigned int)(v21 - 97) < 6) {
          LOBYTE(v21) = v21 - 32;
        }
        --i;
      }
      if (v19 <= 0xFFFFFFFFFFFFFFF8LL) {
        do {
          v22 = (unsigned __int8)*v9;
          if ((unsigned int)(v22 - 97) < 6) {
            LOBYTE(v22) = v22 - 32;
          }
          *v9 = v22;
          v23 = (unsigned __int8)v9[1];
          if ((unsigned int)(v23 - 97) < 6) {
            LOBYTE(v23) = v23 - 32;
          }
          v9[1] = v23;
          v24 = (unsigned __int8)v9[2];
          if ((unsigned int)(v24 - 97) < 6) {
            LOBYTE(v24) = v24 - 32;
          }
          v9[2] = v24;
          v25 = (unsigned __int8)v9[3];
          if ((unsigned int)(v25 - 97) < 6) {
            LOBYTE(v25) = v25 - 32;
          }
          v9[3] = v25;
          v26 = (unsigned __int8)v9[4];
          if ((unsigned int)(v26 - 97) < 6) {
            LOBYTE(v26) = v26 - 32;
          }
          v9[4] = v26;
          v27 = (unsigned __int8)v9[5];
          if ((unsigned int)(v27 - 97) < 6) {
            LOBYTE(v27) = v27 - 32;
          }
          v9[5] = v27;
          v28 = (unsigned __int8)v9[6];
          if ((unsigned int)(v28 - 97) < 6) {
            LOBYTE(v28) = v28 - 32;
          }
          v9[6] = v28;
          v29 = (unsigned __int8)v9[7];
          if ((unsigned int)(v29 - 97) < 6) {
            LOBYTE(v29) = v29 - 32;
          }
          v9[7] = v29;
          v9 += 8;
        } while (v9 != (char*)v17);
      }
    }
  }
  v30 = *(_DWORD*)(a3 + 8) & 0xB0;
  if (v30 == 32) {
    v31 = (char*)v17;
    goto LABEL_60;
  }
  if (v30 != 16) {
  LABEL_59:
    v31 = &v37;
    goto LABEL_60;
  }
  if (v37 != 45 && v37 != 43) {
    if (v17 - (__int64)&v37 >= 2 && v37 == 48 && (v38 | 0x20) == 0x78) {
      v31 = v39;
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v31 = (char*)&v38;
LABEL_60:
  *(struct PseudoSret*)(&v33) = SdkRoutine_87cd90(a3);
  SdkRoutine_87d080(&v37, v31, v18, v36, &v35, &v34, &v33);
  SdkRoutine_86ee60(&v33);
  return SdkRoutine_810f00(a2, (int)v36, v35, v34, a3, (void*)a4);
}

__int64 SdkHr_804ad0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                     __int64 a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  char* v9;
  int v12;
  unsigned int v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  char* v20;
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
  char* v31;
  __int64 v33;
  __int64 v34;
  _BYTE v35[180];
  char v36;
  unsigned __int8 v37;
  _BYTE v38[22];
  _QWORD v39[2];
  __int64 v40;

  v39[0] = v5;
  v39[1] = v6;
  v7 = *(_DWORD*)(a3 + 8);
  v9 = &v36;
  v12 = v7 & 0x4A;
  if (v12 == 8) {
    v13 = 16;
  }
  else {
    v13 = 10;
  }
  if (v12 == 64) {
    v14 = 8;
  }
  else {
    v14 = v13;
  }
  if (a5 != 0 && (v7 & 0x200) != 0) {
    if (v12 == 64) {
      v9 = (char*)&v37;
      v36 = 48;
    }
    else if (v12 == 8) {
      v9 = v38;
      v36 = 48;
      if ((v7 & 0x4000) != 0) {
        v15 = 88;
      }
      else {
        v15 = 120;
      }
      v37 = v15;
    }
  }
  v16 = SdkRoutine_830290(v9, v39, a5, v14);
  v17 = v16;
  if ((~v7 & 0x4008) == 0 && v9 != (char*)v16) {
    v19 = ((_BYTE)v16 - (_BYTE)v9) & 7;
    v20 = v9;
    if ((((_BYTE)v16 - (_BYTE)v9) & 7) != 0) {
      v20 = v9;
      do {
        v21 = (unsigned __int8)*v20;
        if ((unsigned int)(v21 - 97) < 6) {
          LOBYTE(v21) = v21 - 32;
        }
        --v19;
        *v20++ = v21;
      } while (v19 != 0);
    }
    if ((unsigned __int64)&v9[-v16] <= 0xFFFFFFFFFFFFFFF8LL) {
      do {
        v22 = (unsigned __int8)*v20;
        if ((unsigned int)(v22 - 97) < 6) {
          LOBYTE(v22) = v22 - 32;
        }
        *v20 = v22;
        v23 = (unsigned __int8)v20[1];
        if ((unsigned int)(v23 - 97) < 6) {
          LOBYTE(v23) = v23 - 32;
        }
        v20[1] = v23;
        v24 = (unsigned __int8)v20[2];
        if ((unsigned int)(v24 - 97) < 6) {
          LOBYTE(v24) = v24 - 32;
        }
        v20[2] = v24;
        v25 = (unsigned __int8)v20[3];
        if ((unsigned int)(v25 - 97) < 6) {
          LOBYTE(v25) = v25 - 32;
        }
        v20[3] = v25;
        v26 = (unsigned __int8)v20[4];
        if ((unsigned int)(v26 - 97) < 6) {
          LOBYTE(v26) = v26 - 32;
        }
        v20[4] = v26;
        v27 = (unsigned __int8)v20[5];
        if ((unsigned int)(v27 - 97) < 6) {
          LOBYTE(v27) = v27 - 32;
        }
        v20[5] = v27;
        v28 = (unsigned __int8)v20[6];
        if ((unsigned int)(v28 - 97) < 6) {
          LOBYTE(v28) = v28 - 32;
        }
        v20[6] = v28;
        v29 = (unsigned __int8)v20[7];
        if ((unsigned int)(v29 - 97) < 6) {
          LOBYTE(v29) = v29 - 32;
        }
        v20[7] = v29;
        v20 += 8;
      } while (v20 != (char*)v16);
    }
  }
  v30 = *(_DWORD*)(a3 + 8) & 0xB0;
  if (v30 == 32) {
    v31 = (char*)v16;
    goto LABEL_54;
  }
  if (v30 != 16) {
  LABEL_53:
    v31 = &v36;
    goto LABEL_54;
  }
  if (v36 != 45 && v36 != 43) {
    if (v16 - (__int64)&v36 >= 2 && v36 == 48 && (v37 | 0x20) == 0x78) {
      v31 = v38;
      goto LABEL_54;
    }
    goto LABEL_53;
  }
  v31 = (char*)&v37;
LABEL_54:
  *(struct PseudoSret*)(&v33) = SdkRoutine_87cd90(a3);
  SdkRoutine_87d0a0(&v36, v31, v17, v35, &v40, &v34, &v33);
  SdkRoutine_86ee60(&v33);
  return SdkRoutine_812100(a2, v35, v40, v34, a3, a4);
}

#pragma GCC visibility pop
