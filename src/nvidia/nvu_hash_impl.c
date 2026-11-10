#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nvu_hash_5ef600(__int64 a1, __int64 a2, unsigned int a3, char a4);

__int64 nvu_hash_5ef600(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v4;
  unsigned int v5;
  unsigned int v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;

  v4 = *(_DWORD*)(a1 + 16);
  if (v4 != 0) {
    v5 = a3 >> 1;
    v8 = (v4 - 1) & 0xFFFFFFF8;
    v9 = v8 & (a3 >> 1);
    v10 = (a3 >> 18) & 0x3FE0 | 0x18;
    if (a4 == 0) {
      v23 = (a3 >> 1) & 7;
      v25 = v8 & (a3 >> 1);
      v62 = ((_BYTE)v5 + 2) & 7;
      v63 = ((_BYTE)v5 + 1) & 7;
      v61 = ((_BYTE)v5 + 3) & 7;
      v59 = ((_BYTE)v5 + 5) & 7;
      v60 = v23 ^ 4;
      v57 = ((_BYTE)v5 - 1) & 7;
      v58 = ((_BYTE)v5 + 6) & 7;
      while (1) {
        v26 = *(_QWORD*)(a1 + 56);
        if (v26 != 0) {
          v21 = v23 | v25;
          v27 = *(_DWORD*)(v26 + 4LL * (v23 | v25));
          if (v27 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v27 == 0) {
            return (unsigned int)-1;
          }
          v21 = v63 | v25;
          v28 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL * (v63 | v25));
          if (v28 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v28 == 0) {
            return (unsigned int)-1;
          }
          v21 = v62 | v25;
          v29 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL * (v62 | v25));
          if (v29 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v29 == 0) {
            return (unsigned int)-1;
          }
          v21 = v61 | v25;
          v30 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL * (v61 | v25));
          if (v30 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v30 == 0) {
            return (unsigned int)-1;
          }
          v21 = v60 | v25;
          v31 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL * (v60 | v25));
          if (v31 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v31 == 0) {
            return (unsigned int)-1;
          }
          v21 = v59 | v25;
          v32 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL * (v59 | v25));
          if (v32 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v32 == 0) {
            return (unsigned int)-1;
          }
          v21 = v58 | v25;
          v33 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL * (v58 | v25));
          if (v33 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v33 == 0) {
            return (unsigned int)-1;
          }
          v21 = v57 | v25;
          v34 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL * (v57 | v25));
          if (v34 == a3 &&
              (*(unsigned __int8 (**)(_QWORD, __int64))(a1 + 8))(
                  *(_QWORD*)(*(_QWORD*)(a1 + 48) + 8LL * (int)v21), a2) != 0) {
            return v21;
          }
          if (v34 == 0) {
            return (unsigned int)-1;
          }
        }
        else {
          v35 = *(_QWORD*)(a1 + 48);
          v21 = v23 | v25;
          v36 = *(_QWORD*)(v35 + 8LL * (v23 | v25));
          if (v36 != -2) {
            if (v36 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v36, a2) !=
                0) {
              return v21;
            }
            v35 = *(_QWORD*)(a1 + 48);
          }
          v21 = v63 | v25;
          v37 = *(_QWORD*)(v35 + 8LL * (v63 | v25));
          if (v37 != -2) {
            if (v37 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v37, a2) !=
                0) {
              return v21;
            }
            v35 = *(_QWORD*)(a1 + 48);
          }
          v21 = v62 | v25;
          v38 = *(_QWORD*)(v35 + 8LL * (v62 | v25));
          if (v38 != -2) {
            if (v38 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v38, a2) !=
                0) {
              return v21;
            }
            v35 = *(_QWORD*)(a1 + 48);
          }
          v21 = v61 | v25;
          v39 = *(_QWORD*)(v35 + 8LL * (v61 | v25));
          if (v39 != -2) {
            if (v39 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v39, a2) !=
                0) {
              return v21;
            }
            v35 = *(_QWORD*)(a1 + 48);
          }
          v21 = v60 | v25;
          v40 = *(_QWORD*)(v35 + 8LL * (v60 | v25));
          if (v40 != -2) {
            if (v40 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v40, a2) !=
                0) {
              return v21;
            }
            v35 = *(_QWORD*)(a1 + 48);
          }
          v21 = v59 | v25;
          v41 = *(_QWORD*)(v35 + 8LL * (v59 | v25));
          if (v41 != -2) {
            if (v41 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v41, a2) !=
                0) {
              return v21;
            }
            v35 = *(_QWORD*)(a1 + 48);
          }
          v21 = v58 | v25;
          v42 = *(_QWORD*)(v35 + 8LL * (v58 | v25));
          if (v42 != -2) {
            if (v42 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v42, a2) !=
                0) {
              return v21;
            }
            v35 = *(_QWORD*)(a1 + 48);
          }
          v21 = v57 | v25;
          v43 = *(_QWORD*)(v35 + 8LL * (v57 | v25));
          if (v43 != -2) {
            if (v43 == -1) {
              return (unsigned int)-1;
            }
            if ((*(unsigned __int8 (**)(__int64, __int64))(a1 + 8))(v43, a2) !=
                0) {
              return v21;
            }
          }
        }
        v44 = v25 + v10;
        v10 += 32;
        v21 = -1;
        v25 = v44 & v8;
        if ((v44 & v8) == v9) {
          return v21;
        }
      }
    }
    v11 = *(_QWORD*)(a1 + 56);
    if (v11 != 0) {
      v12 = (a3 >> 1) & 7;
      v13 = v8 & (a3 >> 1);
      v14 = ((_BYTE)v5 + 1) & 7;
      v15 = ((_BYTE)v5 + 2) & 7;
      v16 = ((_BYTE)v5 + 3) & 7;
      v17 = v12 ^ 4;
      v18 = ((_BYTE)v5 + 5) & 7;
      v19 = ((_BYTE)v5 + 6) & 7;
      v20 = ((_BYTE)v5 - 1) & 7;
      do {
        v21 = v12 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v12 | v13)) & 1) == 0) {
          break;
        }
        v21 = v14 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v14 | v13)) & 1) == 0) {
          break;
        }
        v21 = v15 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v15 | v13)) & 1) == 0) {
          break;
        }
        v21 = v16 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v16 | v13)) & 1) == 0) {
          break;
        }
        v21 = v17 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v17 | v13)) & 1) == 0) {
          break;
        }
        v21 = v18 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v18 | v13)) & 1) == 0) {
          break;
        }
        v21 = v19 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v19 | v13)) & 1) == 0) {
          break;
        }
        v21 = v20 | v13;
        if ((*(_DWORD*)(v11 + 4LL * (v20 | v13)) & 1) == 0) {
          break;
        }
        v22 = v13 + v10;
        v10 += 32;
        v21 = -1;
        v13 = v22 & v8;
      } while (v13 != v9);
    }
    else {
      v46 = *(_QWORD*)(a1 + 48);
      v47 = (a3 >> 1) & 7;
      v48 = v8 & (a3 >> 1);
      v49 = ((_BYTE)v5 + 1) & 7;
      v50 = ((_BYTE)v5 + 2) & 7;
      v51 = ((_BYTE)v5 + 3) & 7;
      v52 = v47 ^ 4;
      v53 = ((_BYTE)v5 + 5) & 7;
      v54 = ((_BYTE)v5 + 6) & 7;
      v55 = ((_BYTE)v5 - 1) & 7;
      do {
        v21 = v47 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v47 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v21 = v49 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v49 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v21 = v50 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v50 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v21 = v51 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v51 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v21 = v52 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v52 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v21 = v53 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v53 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v21 = v54 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v54 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v21 = v55 | v48;
        if (*(_QWORD*)(v46 + 8LL * (v55 | v48)) > 0xFFFFFFFFFFFFFFFDLL) {
          break;
        }
        v56 = v10 + v48;
        v10 += 32;
        v21 = -1;
        v48 = v56 & v8;
      } while (v48 != v9);
    }
  }
  else {
    return (unsigned int)-1;
  }
  return v21;
}

#pragma GCC visibility pop
