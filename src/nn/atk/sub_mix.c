#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FinalMix_Unknown13(_QWORD*, _QWORD*, unsigned int, __int64, __int64);
__int64 FinalMix_Unknown14(__int64, _QWORD*, unsigned int, __int64, __int64);
__int64 GameRoutine_2af700(__int64 result, __int64);
__int64 GameRoutine_2b72e0(__int64, int, int, unsigned int, unsigned int);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1f80740;
extern __int64 GameData_2135520[5];
extern __int64* GameData_2134b60;
void GameRoutine_651250(void*, unsigned __int64);
__int64 SubMix_Unknown4(__int64 a1, int a2);
__int64 SubMix_Unknown8(__int64 a1, int a2, int a3);
__int64 SubMix_Unknown9(__int64 a1, int a2);
__int64 SubMix_2b79e0(__int64 a1, __int64 a2, int a3, int a4);
__int64 SubMix_Unknown13(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                         __int64 a5);
__int64 SubMix_Unknown14(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                         __int64 a5);
__int64 SubMix_DeletingDestructor(__int64 a1);
__int64 SubMix_Unknown3(__int64 result, unsigned int a2);
__int64 SubMix_Unknown11(_QWORD* a1);
void SubMix_Unknown12(_QWORD* a1);

__int64 SubMix_Unknown4(__int64 a1, int a2)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 152) + a2);
}

__int64 SubMix_Unknown8(__int64 a1, int a2, int a3)
{
  return (unsigned int)(a3 + *(_DWORD*)(a1 + 168) * a2);
}

__int64 SubMix_Unknown9(__int64 a1, int a2)
{
  return (unsigned int)(a2 / *(_DWORD*)(a1 + 168));
}

__int64 SubMix_2b79e0(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7;
  __int64 result;
  int v9;
  int v10;
  unsigned int v11;
  char v12;
  int v13;
  int v14;
  __int64 v15;
  char v16;
  int* v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  bool v25;
  char v32;
  int* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  int i;
  __int64 v54;
  char v55;
  __int64 v56;
  int* v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  char v71;
  int* v72;
  __int64 v73;
  int v74;
  int v75;
  int v77;
  int v78;
  unsigned int v79;
  int v80;
  unsigned int j;

  v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 104) + 16LL))(
      *(_QWORD*)(a1 + 104));
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 104) + 40LL))(
      *(_QWORD*)(a1 + 104));
  v9 = *(_DWORD*)(a1 + 168);
  if (v9 < 1) {
    return result;
  }
  if (v7 >= 1) {
    v10 = result & 7;
    v11 = result;
    v12 = 0;
    v13 = 0;
    v14 = -(result & 0x7FFFFFF8);
    while (1) {
      if (a3 < 1) {
        goto LABEL_40;
      }
      if ((unsigned int)a3 < 8) {
        break;
      }
      v17 = (int*)(a2 + 16);
      v18 = 0;
      v16 = 0;
      do {
        v19 = v17[2];
        v20 = *v17;
        v21 = v17[1];
        v18 -= 8;
        v25 = v13 == v17[3];
        v22 = *(v17 - 2);
        v23 = *(v17 - 1);
        v24 = *(v17 - 4);
        result = (unsigned int)*(v17 - 3);
        v17 += 8;
        v25 = v25 || v13 == v19;
        v32 = v25 || v13 == v21 || v13 == v20 || v13 == v23 || v13 == v22 ||
              v13 == (_DWORD)result || v13 == v24;
        v16 |= v32;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v18);
      v15 = -v18;
      if ((a3 & 7) != 0) {
        goto LABEL_37;
      }
    LABEL_39:
      if ((v16 & 1) != 0) {
        goto LABEL_5;
      }
    LABEL_40:
      nn_os_LockMutex(a1 + 184);
      if ((int)v11 < 1) {
        goto LABEL_4;
      }
      v36 = *(_QWORD*)(*(_QWORD*)(a1 + 160) +
                       8LL * (v13 + *(_DWORD*)(a1 + 168) * a4));
      if (v7 != 1) {
        v39 = 1;
        v37 = 0;
        while (v11 >= 8) {
          v41 = 7;
          do {
            *(_DWORD*)(v36 + 4 * (v41 + *(int*)(a1 + 176) * (__int64)v37) -
                       28) = 0;
            *(_DWORD*)(v36 + 4 * (v41 + *(int*)(a1 + 176) * (__int64)v37) -
                       24) = 0;
            *(_DWORD*)(v36 + 4 * (v41 + *(int*)(a1 + 176) * (__int64)v37) -
                       20) = 0;
            *(_DWORD*)(v36 + 4 * (v41 + *(int*)(a1 + 176) * (__int64)v37) -
                       16) = 0;
            *(_DWORD*)(v36 + 4 * (v41 + *(int*)(a1 + 176) * (__int64)v37) -
                       12) = 0;
            *(_DWORD*)(v36 + 4 * (v41 + *(int*)(a1 + 176) * (__int64)v37) - 8) =
                0;
            *(_DWORD*)(v36 + 4 * (v41 + *(int*)(a1 + 176) * (__int64)v37) - 4) =
                0;
            v42 = v41 + *(int*)(a1 + 176) * (__int64)v37;
            v41 += 8;
            *(_DWORD*)(v36 + 4 * v42) = 0;
          } while (v14 + (_DWORD)v41 != 7);
          v40 = (unsigned int)(v41 - 7);
          if (v10 != 0) {
            goto LABEL_55;
          }
        LABEL_57:
          if (v11 >= 8) {
            v46 = 7;
            do {
              *(_DWORD*)(v36 + 4 * (v46 + *(int*)(a1 + 176) * (__int64)v39) -
                         28) = 0;
              *(_DWORD*)(v36 + 4 * (v46 + *(int*)(a1 + 176) * (__int64)v39) -
                         24) = 0;
              *(_DWORD*)(v36 + 4 * (v46 + *(int*)(a1 + 176) * (__int64)v39) -
                         20) = 0;
              *(_DWORD*)(v36 + 4 * (v46 + *(int*)(a1 + 176) * (__int64)v39) -
                         16) = 0;
              *(_DWORD*)(v36 + 4 * (v46 + *(int*)(a1 + 176) * (__int64)v39) -
                         12) = 0;
              *(_DWORD*)(v36 + 4 * (v46 + *(int*)(a1 + 176) * (__int64)v39) -
                         8) = 0;
              *(_DWORD*)(v36 + 4 * (v46 + *(int*)(a1 + 176) * (__int64)v39) -
                         4) = 0;
              v47 = v46 + *(int*)(a1 + 176) * (__int64)v39;
              v46 += 8;
              *(_DWORD*)(v36 + 4 * v47) = 0;
            } while (v14 + (_DWORD)v46 != 7);
            v45 = (unsigned int)(v46 - 7);
            if (v10 == 0) {
              goto LABEL_48;
            }
          LABEL_63:
            v48 = v10;
            do {
              --v48;
              v49 = v45 + *(int*)(a1 + 176) * (__int64)v39;
              ++v45;
              *(_DWORD*)(v36 + 4 * v49) = 0;
            } while (v48 != 0);
            goto LABEL_48;
          }
          v45 = 0;
          if (v10 != 0) {
            goto LABEL_63;
          }
        LABEL_48:
          v37 += 2;
          v39 += 2;
          if (v37 == (v7 & 0x7FFFFFFE)) {
            goto LABEL_43;
          }
        }
        v40 = 0;
        if (v10 == 0) {
          goto LABEL_57;
        }
      LABEL_55:
        v43 = v10;
        do {
          --v43;
          v44 = v40 + *(int*)(a1 + 176) * (__int64)v37;
          ++v40;
          *(_DWORD*)(v36 + 4 * v44) = 0;
        } while (v43 != 0);
        goto LABEL_57;
      }
      v37 = 0;
    LABEL_43:
      if ((v7 & 1) == 0) {
        goto LABEL_4;
      }
      if (v11 >= 8) {
        v38 = 7;
        do {
          *(_DWORD*)(v36 + 4 * (v38 + *(int*)(a1 + 176) * (__int64)v37) - 28) =
              0;
          *(_DWORD*)(v36 + 4 * (v38 + *(int*)(a1 + 176) * (__int64)v37) - 24) =
              0;
          *(_DWORD*)(v36 + 4 * (v38 + *(int*)(a1 + 176) * (__int64)v37) - 20) =
              0;
          *(_DWORD*)(v36 + 4 * (v38 + *(int*)(a1 + 176) * (__int64)v37) - 16) =
              0;
          *(_DWORD*)(v36 + 4 * (v38 + *(int*)(a1 + 176) * (__int64)v37) - 12) =
              0;
          *(_DWORD*)(v36 + 4 * (v38 + *(int*)(a1 + 176) * (__int64)v37) - 8) =
              0;
          *(_DWORD*)(v36 + 4 * (v38 + *(int*)(a1 + 176) * (__int64)v37) - 4) =
              0;
          v50 = v38 + *(int*)(a1 + 176) * (__int64)v37;
          v38 += 8;
          *(_DWORD*)(v36 + 4 * v50) = 0;
        } while (v14 + (_DWORD)v38 != 7);
        LODWORD(v38) = v38 - 7;
        if (v10 == 0) {
          goto LABEL_4;
        }
      LABEL_69:
        v38 = (int)v38;
        v51 = v10;
        do {
          --v51;
          v52 = v38 + *(int*)(a1 + 176) * (__int64)v37;
          ++v38;
          *(_DWORD*)(v36 + 4 * v52) = 0;
        } while (v51 != 0);
        goto LABEL_4;
      }
      LODWORD(v38) = 0;
      if (v10 != 0) {
        goto LABEL_69;
      }
    LABEL_4:
      result = nn_os_UnlockMutex(a1 + 184);
      v9 = *(_DWORD*)(a1 + 168);
      v12 = 1;
    LABEL_5:
      if (++v13 >= v9) {
        goto LABEL_109;
      }
    }
    v15 = 0;
    v16 = 0;
    if ((a3 & 7) == 0) {
      goto LABEL_39;
    }
  LABEL_37:
    v33 = (int*)(a2 + 4 * v15);
    v34 = a3 & 7;
    do {
      v35 = *v33++;
      --v34;
      v16 |= v13 == v35;
    } while (v34 != 0);
    goto LABEL_39;
  }
  if (a3 <= 0) {
    v75 = 0;
    do {
      nn_os_LockMutex(a1 + 184);
      nn_os_UnlockMutex(a1 + 184);
      ++v75;
    } while (v75 < *(_DWORD*)(a1 + 168));
    goto LABEL_113;
  }
  v12 = 0;
  for (i = 0; i < v9; ++i) {
    if ((unsigned int)a3 < 8) {
      v54 = 0;
      v55 = 0;
      if ((a3 & 7) == 0) {
        goto LABEL_107;
      }
    LABEL_105:
      v72 = (int*)(a2 + 4 * v54);
      v73 = a3 & 7;
      do {
        v74 = *v72++;
        --v73;
        v55 |= i == v74;
      } while (v73 != 0);
      goto LABEL_107;
    }
    v56 = 0;
    v55 = 0;
    v57 = (int*)(a2 + 16);
    do {
      v58 = v57[2];
      v59 = *v57;
      v60 = v57[1];
      v56 -= 8;
      v25 = i == v57[3];
      v61 = *(v57 - 2);
      v62 = *(v57 - 1);
      v63 = *(v57 - 4);
      result = (unsigned int)*(v57 - 3);
      v57 += 8;
      v71 = v25 || i == v58 || i == v60 || i == v59 || i == v62 || i == v61 ||
            i == (_DWORD)result || i == v63;
      v55 |= v71;
    } while (-(__int64)(a3 & 0x7FFFFFF8) != v56);
    v54 = -v56;
    if ((a3 & 7) != 0) {
      goto LABEL_105;
    }
  LABEL_107:
    if ((v55 & 1) == 0) {
      nn_os_LockMutex(a1 + 184);
      result = nn_os_UnlockMutex(a1 + 184);
      v9 = *(_DWORD*)(a1 + 168);
      v12 = 1;
    }
  }

LABEL_109:
  if ((v12 & 1) == 0) {
    return result;
  }

LABEL_113:
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 104) + 16LL))(
      *(_QWORD*)(a1 + 104));
  if ((int)result >= 1 && *(_DWORD*)(a1 + 168) >= 1) {
    v77 = result;
    v78 = 0;
    do {
      v79 = 0;
      do {
        result = (*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(a1 + 104) + 48LL))(*(_QWORD*)(a1 + 104), v79);
        if ((int)result >= 1) {
          v80 = result;
          for (j = 0; j != v80; ++j) {
            result = GameRoutine_2b72e0(a1, a4, v78, v79, j);
          }
        }
        ++v79;
      } while (v79 != v77);
      ++v78;
    } while (v78 < *(_DWORD*)(a1 + 168));
  }
  return result;
}

__int64 SubMix_Unknown13(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                         __int64 a5)
{
  __int64 result;
  unsigned int v9;
  int v10;
  _QWORD v11[3];

  result = FinalMix_Unknown13((_QWORD*)a1, a2, a3, a4, a5);
  if (*(_BYTE*)(a1 + 249) == 1) {
    v11[0] = 0x600000006LL;
    v11[1] = 0x600000006LL;
    v11[2] = 0x600000006LL;
    v9 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    (*(void (**)(_QWORD*, _QWORD*, _QWORD))(*a2 + 64LL))(a2, v11, v9);
    v10 = (*(__int64 (**)(_QWORD*))(*a2 + 72LL))(a2);
    return SubMix_2b79e0(a1, (__int64)v11, v10, a3);
  }
  return result;
}

__int64 SubMix_Unknown14(__int64 a1, _QWORD* a2, unsigned int a3, __int64 a4,
                         __int64 a5)
{
  __int64 result;
  _QWORD v9[3];

  result = FinalMix_Unknown14(a1, a2, a3, a4, a5);
  if (*(_BYTE*)(a1 + 249) == 1) {
    v9[0] = 0x600000006LL;
    v9[1] = 0x600000006LL;
    v9[2] = 0x600000006LL;
    GameRoutine_2af700((__int64)a2, (__int64)v9);
    return SubMix_2b79e0(a1, (__int64)v9, 6, a3);
  }
  return result;
}

__int64 SubMix_DeletingDestructor(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 48LL))(a1, 0);
}

__int64 SubMix_Unknown3(__int64 result, unsigned int a2)
{
  atomic_fetch_add((atomic_uint* volatile)(result + 96), a2);
  return result;
}

__int64 SubMix_Unknown11(_QWORD* a1)
{
  *a1 = GameData_2135520[0] + 16;
  nn_os_FinalizeMutex(a1 + 27);
  nn_os_FinalizeMutex(a1 + 23);
  *a1 = &GameData_1f80740;
  return nn_os_FinalizeMutex(a1 + 1);
}

void SubMix_Unknown12(_QWORD* a1)
{
  *a1 = GameData_2135520[0] + 16;
  nn_os_FinalizeMutex(a1 + 27);
  nn_os_FinalizeMutex(a1 + 23);
  *a1 = GameData_2134b60 + 2;
  nn_os_FinalizeMutex(a1 + 1);
  GameRoutine_651250(a1, 0x100u);
}

#pragma GCC visibility pop
