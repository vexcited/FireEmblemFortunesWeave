#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN SdkData_c7e100;

__int64 SdkRoutine_44eee0(_QWORD, _QWORD);

__int64 SdkRoutine_65dfe0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_664890(_QWORD);

__int64 SdkRoutine_66d050(void);

__int64 SdkRoutine_66d8e0(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_66dbf0(void);

__int64 SdkRoutine_86acf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD);

__int64 SdkRoutine_86ad00(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_876210(_QWORD, _QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_8765c0(_QWORD, _QWORD, _QWORD);

__int64 SdkRoutine_876630(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD);

__int64 SdkHr_44eb20(__int64 a1, int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 result;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = *(_QWORD*)a2;
  if (*(_QWORD*)a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v2 + 56);
  if (v4 == 0) {
    return 0;
  }
  v5 = *((_QWORD*)a2 + 5);
  if (v5 == 0 || *(_DWORD*)(v4 + 164) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(v2 + 36) & 2) != 0) {
    if (a2[2] >= 1 && a2[4] == 0 && a2[5] > 0) {
      goto LABEL_17;
    }
    return 0;
  }
  if (*(_BYTE*)(v5 + 4) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 77) & 2) != 0) {
    if (*(unsigned __int16*)(a1 + 112) < 0x1Bu) {
      goto LABEL_17;
    }
    return 0;
  }
  if (*(_DWORD*)(a1 + 100) +
          *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                24LL * *(unsigned __int16*)(a1 + 40)) +
                     44LL) !=
      0) {
    return 0;
  }
LABEL_17:
  result = SdkRoutine_44eee0(a1, v4);
  if (result != 0) {
    *(_WORD*)(result + 36) = 1;
    *(_BYTE*)(result + 34) = 1;
    *(_WORD*)(result + 38) = 1;
  }
  return result;
}

__int64 SdkHr_44ec60(__int64 a1, int* a2, __int64 a3, __int16 a4)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int16 v8;
  __int64 result;
  __int16 v10;
  __int16 v11;
  __int16 v12;

  if ((a4 & 0x202) != 0) {
    v10 = 2;
  }
  else {
    v10 = 0;
  }
  if ((a4 & 0x808) != 0) {
    v11 = 8;
  }
  else {
    v11 = v10;
  }
  if ((a4 & 0x404) != 0) {
    v12 = 4;
  }
  else {
    v12 = v11;
  }
  if (a2 == nullptr) {
    return 0;
  }
  v4 = *(_QWORD*)a2;
  if (*(_QWORD*)a2 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(v4 + 56);
  if (v6 == 0) {
    return 0;
  }
  v7 = *((_QWORD*)a2 + 5);
  if (v7 == 0 || *(_DWORD*)(v6 + 164) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(v4 + 36) & 2) != 0) {
    if (a2[2] < 1) {
      return 0;
    }
    if (a2[4] != 0) {
      return 0;
    }
    v8 = v12;
    if (a2[5] <= 0) {
      return 0;
    }
  }
  else {
    if (*(_BYTE*)(v7 + 4) == 0) {
      return 0;
    }
    v8 = v12;
    if ((*(_BYTE*)(a1 + 77) & 2) == 0) {
      if (*(_DWORD*)(a1 + 100) +
              *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) +
                                    24LL * *(unsigned __int16*)(a1 + 40)) +
                         44LL) ==
          0) {
        goto LABEL_26;
      }
      return 0;
    }
    if (*(unsigned __int16*)(a1 + 112) >= 0x1Bu) {
      return 0;
    }
  }
LABEL_26:
  result = SdkRoutine_44eee0(a1, v6);
  if (result != 0) {
    *(_WORD*)(result + 36) = v8;
    *(_BYTE*)(result + 34) = 1;
    if (v8 <= 8u && ((1 << v8) & 0x116) != 0) {
      *(_WORD*)(result + 38) = v8;
    }
  }
  return result;
}

__int64 SdkHr_65d550(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v16;
  bool v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  char v21;
  int v22;
  int v24;
  char v25;
  unsigned int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v37;
  __int64 v38;
  int v40;
  int v41;
  __int64 v42;
  __int128 v43;
  _QWORD* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  bool v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  __int64 v75;
  int v76;
  char v77;
  __int64 v78;
  __int16 v79;
  __int64 v80;
  __int16 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _BYTE v86[20];
  __int128 v87;
  _BYTE v88[44];
  _DWORD v89[7];
  __int64 v90;
  __int64 v91;

  if (*(_DWORD*)a1 == 1) {
    return SdkRoutine_66dbf0();
  }
  if ((*(_BYTE*)(a2 + 7) & 0x20) == 0) {
    v90 = v8;
    v91 = v9;
    v12 = *(_QWORD*)(a1 + 8);
    v13 = *(_QWORD*)(a2 + 16);
    if (*(_QWORD*)(*(_QWORD*)(v12 + 7568) + 16LL) != 0) {
      v14 = a2 + 40;
    }
    else {
      v14 = 0;
    }
    if (*(_DWORD*)(a2 + 32) != 0 && v13 == 0) {
      if (*(_QWORD*)(a2 + 24) == 0) {
        *(_QWORD*)(a1 + 56) = 0;
        v28 = *(_DWORD*)(a2 + 32);
        v87 = 0u;
        memset(v88, 0, 24);
        *(_OWORD*)&v86[4] = 0u;
        v29 = SdkRoutine_876210(v28, 0, &v86[4], 56);
        v30 = a1;
        if (v29 == 0) {
          *(_QWORD*)(a1 + 56) = *(_QWORD*)&v86[12];
        }
        v31 = *(unsigned int*)(a2 + 32);
        v32 = 0;
        goto LABEL_37;
      }
      v16 = (_QWORD*)(a2 + 16);
      if ((*(_BYTE*)(a1 + 17) & 8) == 0) {
        goto LABEL_35;
      }
    }
    else {
      v16 = (_QWORD*)(a2 + 16);
      v17 = v13 != 0 && (*(_QWORD*)(a2 + 16) & 0xFFFLL) == 0;
      if (!v17 && (*(_BYTE*)(a1 + 17) & 8) == 0) {
        goto LABEL_35;
      }
    }
    v20 = *(_QWORD*)(a1 + 56);
    v21 = 0;
    if (v20 == 0 || (v20 & 0xFFF) != 0) {
      return v21 & 1;
    }
    v22 = *(_DWORD*)(a1 + 16);
    if ((v22 & 0x100) != 0 && v20 % *(unsigned int*)(v12 + 216) != 0) {
      goto LABEL_35;
    }
    *(_OWORD*)&v86[4] = 0u;
    *(_QWORD*)((char*)&v87 + 4) = 0;
    if ((v22 & 2) != 0) {
      v24 = 2;
    }
    else {
      v24 = 1;
    }
    HIDWORD(v87) = 0;
    v88[0] = 0;
    *(_QWORD*)&v88[16] = 0;
    *(_WORD*)&v88[24] = 0;
    *(_QWORD*)&v88[4] = 0;
    *(_WORD*)&v88[12] = 0;
    LODWORD(v87) = 2;
    *(_QWORD*)&v88[28] = SdkRoutine_86acf0(a1, a2, a3, a4, a5, a6, a7, a8);
    *(_QWORD*)&v88[36] = 0;
    v25 = *(_BYTE*)(a1 + 17);
    *(_OWORD*)v89 = 0u;
    *(_QWORD*)&v89[4] = 0xFFFFFFFF00000003LL;
    if ((v25 & 8) == 0) {
      *(_QWORD*)&v88[36] = *v16;
    LABEL_34:
      *(_DWORD*)&v86[16] = 0x20000;
      LODWORD(v87) = v24;
      *(_QWORD*)((char*)&v87 + 4) = *(_QWORD*)(a1 + 56);
      HIDWORD(v87) = 6656;
      if ((unsigned int)SdkRoutine_86ad00(
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 2544LL), &v86[4], a1 + 88) != 0) {
        goto LABEL_35;
      }
      v31 = *(unsigned int*)(a1 + 88);
      v32 = 1;
      v30 = a1;
      *(_QWORD*)(a1 + 48) = *v16;
    LABEL_37:
      v21 = SdkRoutine_66d8e0(v30, v31, v32, v14);
      return v21 & 1;
    }
    if (*v16 == 0) {
      *(_QWORD*)&v86[4] = &SdkData_c7e100;
      *(_DWORD*)&v86[12] = 1;
      goto LABEL_34;
    }
  LABEL_35:
    v21 = 0;
    return v21 & 1;
  }
  v18 = *(_DWORD*)(a2 + 40);
  v19 = *(_QWORD*)(a2 + 48);
  v33 = *(_DWORD*)(a1 + 16);
  if ((v33 & 0xB00) != 0) {
    return 0;
  }
  if (*(_QWORD*)(a2 + 16) == 0 || (*(_QWORD*)(a2 + 16) & 0xFFFLL) != 0) {
    return 0;
  }
  *(_QWORD*)&v89[1] = v10;
  *(_QWORD*)&v89[3] = v8;
  *(_QWORD*)&v89[5] = v9;
  if (*(_QWORD*)(a1 + 56) == 0 || (*(_QWORD*)(a1 + 56) & 0xFFFLL) != 0) {
    return 0;
  }
  v37 = v18;
  v38 = v19;
  v72 = 0;
  v71 = 0;
  if ((v33 & 2) != 0) {
    v40 = 2;
  }
  else {
    v40 = 1;
  }
  v77 = 0;
  v80 = 0;
  v81 = 0;
  v78 = 0;
  v79 = 0;
  v82 = ((__int64 (*)(void))SdkRoutine_86acf0)();
  v85 = 0;
  v84 = 0;
  v73 = 0x20000;
  v74 = v40;
  v75 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)v86 = 0xFFFFFFFF00000003LL;
  v76 = 6656;
  v83 = *(_QWORD*)(a2 + 16);
  v41 =
      SdkRoutine_86ad00(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 2544LL), &v71, a1 + 88);
  result = 0;
  if (v41 == 0) {
    *(_BYTE*)(a1 + 120) = 1;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)(a2 + 16);
    if (v37 >= 1) {
      v42 = (unsigned int)v37;
      v43 = 0u;
      v44 = (_QWORD*)(v38 + 8);
      do {
        v45 = *((_DWORD*)v44 - 2);
        switch (v45) {
        case 5:
          v62 = *(_QWORD*)(a1 + 8);
          v70 = 0;
          *(_OWORD*)v88 = v43;
          *(_OWORD*)&v88[16] = v43;
          v63 = *(_QWORD*)(v62 + 2528);
          v88[6] = 1;
          *(_QWORD*)&v88[8] = 0x400000002LL;
          *(_DWORD*)&v88[32] = 0;
          if ((unsigned int)SdkRoutine_8765c0(v63, v88, &v70) != 0) {
            return 0;
          }
          v64 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)&v88[32] = 0;
          v65 = *(_DWORD*)(v64 + 212);
          memset(v88, 0, 32);
          *(_DWORD*)&v88[12] = v70;
          *(_DWORD*)&v88[16] = -1;
          v66 = *(_QWORD*)(v64 + 7568);
          v67 = *v44;
          v68 = v44[1];
          v69 = (*(_BYTE*)(a1 + 16) & 0x20) != 0;
          *(_DWORD*)&v88[32] = v65;
          v88[26] = 1;
          v88[20] = v69;
          result = SdkRoutine_65dfe0(v66, v67, v68);
          if (result == 0) {
            return result;
          }
          if ((unsigned int)SdkRoutine_876630(result, *(unsigned int*)(a1 + 88),
                                              *v44, v44[1], v88, a1 + 104,
                                              &v86[12]) != 0) {
            return 0;
          }
          *(_QWORD*)(a1 + 32) = *v44;
          break;
        case 2:
          v54 = *(_QWORD*)(a1 + 8);
          v70 = 0;
          *(_OWORD*)v88 = v43;
          *(_OWORD*)&v88[16] = v43;
          v55 = *(_QWORD*)(v54 + 2528);
          v88[4] = 1;
          v88[6] = 1;
          *(_QWORD*)&v88[8] = 0x400000002LL;
          *(_DWORD*)&v88[32] = 0;
          if ((unsigned int)SdkRoutine_8765c0(v55, v88, &v70) != 0) {
            return 0;
          }
          v56 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)&v88[32] = 0;
          v57 = *(_DWORD*)(v56 + 212);
          memset(v88, 0, 32);
          *(_DWORD*)&v88[12] = v70;
          *(_DWORD*)&v88[16] = -1;
          v58 = *(_QWORD*)(v56 + 7568);
          v59 = *v44;
          v60 = v44[1];
          v61 = (*(_BYTE*)(a1 + 16) & 0x20) != 0;
          *(_DWORD*)&v88[32] = v57;
          v88[20] = v61;
          v88[26] = *(_BYTE*)(v56 + 10) & 1;
          result = SdkRoutine_65dfe0(v58, v59, v60);
          if (result == 0) {
            return result;
          }
          if ((unsigned int)SdkRoutine_876630(result, *(unsigned int*)(a1 + 88),
                                              *v44, v44[1], v88, a1 + 112,
                                              &v86[12]) != 0) {
            return 0;
          }
          *(_QWORD*)(a1 + 40) = *v44;
          break;
        case 1:
          v46 = *(_QWORD*)(a1 + 8);
          v70 = 0;
          *(_OWORD*)v88 = v43;
          *(_OWORD*)&v88[16] = v43;
          v47 = *(_QWORD*)(v46 + 2528);
          v88[6] = 1;
          *(_QWORD*)&v88[8] = 0x400000002LL;
          *(_DWORD*)&v88[32] = 0;
          if ((unsigned int)SdkRoutine_8765c0(v47, v88, &v70) != 0) {
            return 0;
          }
          v48 = *(_QWORD*)(a1 + 8);
          *(_QWORD*)&v88[32] = 0;
          v49 = *(_DWORD*)(v48 + 212);
          memset(v88, 0, 32);
          *(_DWORD*)&v88[12] = v70;
          *(_DWORD*)&v88[16] = -1;
          v50 = *(_QWORD*)(v48 + 7568);
          v51 = *v44;
          v52 = v44[1];
          v53 = (*(_BYTE*)(a1 + 16) & 0x20) != 0;
          *(_DWORD*)&v88[32] = v49;
          v88[20] = v53;
          result = SdkRoutine_65dfe0(v50, v51, v52);
          if (result == 0) {
            return result;
          }
          if ((unsigned int)SdkRoutine_876630(result, *(unsigned int*)(a1 + 88),
                                              *v44, v44[1], v88, a1 + 96,
                                              &v86[12]) != 0) {
            return 0;
          }
          *(_QWORD*)(a1 + 24) = *v44;
          break;
        default:
          return 0;
        }
        v43 = 0u;
        v44 += 3;
        --v42;
      } while (v42 != 0);
    }
    *(_DWORD*)(a1 + 16) |= 0x20000000u;
    return 1;
  }
  return result;
}

__int64 SdkHr_65d580(__int64 a1, __int64 a2)
{
  if (*(_DWORD*)a1 == 1) {
    return *(_QWORD*)(a1 + 24) + ((__int64)(*(_QWORD*)(a2 + 24) << 16) >> 16);
  }
  else {
    return SdkRoutine_66d050();
  }
}

__int64 SdkHr_66ea90(__int64 result, int a2, __int64 a3)
{
  _BYTE* v3;
  unsigned __int64 v4;
  int v5;
  __int64 v6;
  unsigned int* v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int64 v13;

  if (a2 != 0) {
    v3 = (_BYTE*)(a3 + 20);
    v4 = *(_QWORD*)(result + 40);
    v5 = a2;
    v6 = result;
    v7 = (unsigned int*)(*(_QWORD*)(result + 192) +
                         8LL * *(unsigned int*)(result + 184));
    if (v4 >= *(_QWORD*)(result + 224) - 2LL) {
      v4 = *(_QWORD*)(result + 224) - 2LL;
    }
    if (*(_BYTE*)(result + 129) != 0) {
      v8 = (unsigned int)v4 >> 3;
    }
    else {
      v8 = v4;
    }
    v9 = v8 - 6;
    do {
      v10 =
          (unsigned __int8)*(v3 - 16) | ((*((_DWORD*)v3 - 1) & 0x1FFFFF) << 10);
      if ((*v3 & 4) != 0) {
        v11 = -2147483136;
      }
      else {
        v11 = 512;
      }
      *v7 = *((_DWORD*)v3 - 5) & 0xFFFFFFFC;
      v7[1] = v10 | v11;
      v7 += 2;
      v12 = *(_DWORD*)(v6 + 184) + 1;
      *(_DWORD*)(v6 + 184) = v12;
      if ((*v3 & 2) != 0 && v12 >= v9) {
        v13 = *(_QWORD*)(v6 + 208);
        if (*(_DWORD*)(v13 + 11348) != 0) {
          *(_BYTE*)(v13 + 11448) = 1;
          result = SdkRoutine_664890(*(_QWORD*)(v6 + 208));
        }
        else {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
        }
        v7 = (unsigned int*)(*(_QWORD*)(v6 + 192) +
                             8LL * *(unsigned int*)(v6 + 184));
      }
      v3 += 24;
      --v5;
    } while (v5 != 0);
  }
  return result;
}

#pragma GCC visibility pop
