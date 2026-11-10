#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_572470(__int64, __int64, int, const char*, _QWORD*);
__int64 GameRoutine_572ae0(__int64, __int64, __int64, const char*);
__int64 GameRoutine_572ec0(__int64, __int64, __int64, const char*);
__int64 GameRoutine_573070(__int64, __int64, __int64, unsigned int, __int64,
                           __int64);
__int64 GameRoutine_574580(_QWORD, _QWORD);
__int64 GameRoutine_575670(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5756e0(_QWORD, _QWORD);
__int64 GameRoutine_576c10(_QWORD);
__int64 GameRoutine_576c20(_QWORD);
__int64 GameRoutine_576ce0(_QWORD, _QWORD);
__int64 GameRoutine_576d40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576ec0(_QWORD);
__int64 GameRoutine_576f40(_QWORD);
__int64 GameRoutine_579180(_QWORD);
__int64 GameRoutine_5791a0(_QWORD);
__int64 GameRoutine_597120(_QWORD);
__int64 GameRoutine_597ad0(_QWORD);
__int64 GameRoutine_597ae0(_QWORD, _QWORD);
__int64 GameRoutine_597b70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_597c80(_QWORD, _QWORD);
__int64 GameRoutine_59e0f0(_QWORD);
__int64 GameRoutine_59e100(_QWORD, _QWORD);
__int64 GameRoutine_59e1c0(_QWORD, _QWORD);
__int64 GameRoutine_59e5a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59e640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59e700(_QWORD, _QWORD);
__int64 GameRoutine_59ed60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe3b0(void);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
extern __int64* GameData_2136148;
__int64 MultiArcResourceAccessor_DeletingDestructor(_QWORD* a1);
__int64 MultiArcResourceAccessor_Unknown7(__int64 a1, __int64 a2);
_QWORD* MultiArcResourceAccessor_574050(__int64 a1, __int64 a2);
__int64* MultiArcResourceAccessor_5740a0(__int64 a1, __int64 a2);
__int64 MultiArcResourceAccessor_Unknown8(__int64 a1, _QWORD* a2, int a3,
                                          const char* a4);
__int64 MultiArcResourceAccessor_Unknown13(_QWORD* a1, __int64 a2, __int64 a3);
__int64 MultiArcResourceAccessor_574300(__int64 a1, const char* a2);
__int64 MultiArcResourceAccessor_Unknown14(_QWORD* a1, __int64 a2, __int64 a3);
__int64 MultiArcResourceAccessor_Unknown19(__int64 a1, __int64 a2, __int64 a3,
                                           const char* a4);
__int64 MultiArcResourceAccessor_Unknown21(__int64 a1, __int64 a2, __int64 a3,
                                           const char* a4);
__int64 MultiArcResourceAccessor_Unknown22(__int64 a1, __int64 a2, __int64 a3,
                                           unsigned int a4, __int64 a5,
                                           __int64 a6);
__int64 MultiArcResourceAccessor_Unknown17(_QWORD* a1, __int64 a2, __int64 a3);
__int64 MultiArcResourceAccessor_574b60(__int64 a1, const char* a2);
__int64 MultiArcResourceAccessor_Unknown18(_QWORD* a1, __int64 a2,
                                           unsigned int a3, __int64 a4,
                                           __int64 a5);
__int64 MultiArcResourceAccessor_574e40(__int64 a1, unsigned int a2, __int64 a3,
                                        __int64 a4);
__int64 MultiArcResourceAccessor_Unknown3(__int64 a1, __int64 a2, __int64 a3);
__int64 MultiArcResourceAccessor_Unknown4(__int64 a1, __int64 a2, __int64 a3);
__int64 MultiArcResourceAccessor_Unknown10(__int64 a1, unsigned int a2,
                                           __int64 a3);
__int64 MultiArcResourceAccessor_Unknown11(__int64 a1, unsigned int a2,
                                           __int64 a3);
__int64 GameRoutine_55ea10(void);
__int64 LayoutEx_579180(__int64);
__int64 LayoutEx_5791a0(__int64);
__int64 ResFont_55eae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MultiArcResourceAccessor_Unknown20(__int64* a1, __int64 a2, __int64 a3);

__int64 MultiArcResourceAccessor_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_2136148 + 2;
  GameRoutine_597ad0(a1 + 7);
  GameRoutine_59e0f0(a1 + 5);
  GameRoutine_576c10(a1 + 3);
  return GameRoutine_597120(a1);
}

__int64 MultiArcResourceAccessor_Unknown7(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;

  v2 = *(__int64**)(a1 + 16);
  v3 = (__int64*)(a1 + 8);
  if (v2 != (__int64*)(a1 + 8)) {
    do {
      v9 = (__int64*)v2[1];
      v10 = (_QWORD*)v2[2];
      v10[23] = 0;
      v10[24] = 0;
      GameRoutine_576c20(v10 + 16);
      GameRoutine_59e100(v10 + 18, a2);
      GameRoutine_597ae0(v10 + 20, a2);
      v11 = v10[22];
      if (v11 != 0) {
        if (*(_QWORD*)(v11 + 72) == *(_QWORD*)(v11 + 64)) {
          GameRoutine_5fe3b0();
        }
        *(_QWORD*)(v11 + 72) = 0;
        v10[22] = 0;
      }
      v7 = (__int64*)v2[1];
      v8 = *v7;
      *(_QWORD*)(*v2 + 8) = v7;
      *v7 = *v2;
      *(_QWORD*)(v8 + 8) = v2;
      *v2 = v8;
      GameRoutine_5791a0(v2);
      v2 = v9;
    } while (v9 != v3);
  }
  GameRoutine_576c20(a1 + 24);
  GameRoutine_59e100(a1 + 40, a2);
  GameRoutine_597ae0(a1 + 56, a2);
  return a1;
}

_QWORD* MultiArcResourceAccessor_574050(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 v6;

  result = (_QWORD*)GameRoutine_579180(24);
  if (result != nullptr) {
    *result = result;
    result[1] = result;
  }
  result[2] = a2;
  v6 = *(_QWORD*)(a1 + 8);
  v5 = a1 + 8;
  *result = v6;
  result[1] = v5;
  *(_QWORD*)(*(_QWORD*)v5 + 8LL) = result;
  *(_QWORD*)v5 = result;
  return result;
}

__int64* MultiArcResourceAccessor_5740a0(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64* result;
  __int64* v4;
  __int64 v5;

  v2 = (__int64*)(a1 + 8);
  result = *(__int64**)(a1 + 16);
  if (result != v2) {
    while (1) {
      v4 = (__int64*)result[1];
      if (a2 == result[2]) {
        break;
      }
      result = (__int64*)result[1];
      if (v4 == v2) {
        return result;
      }
    }
    v5 = *v4;
    *(_QWORD*)(*result + 8) = v4;
    *v4 = *result;
    *(_QWORD*)(v5 + 8) = result;
    *result = v5;
    return (__int64*)GameRoutine_5791a0(result);
  }
  return result;
}

__int64 MultiArcResourceAccessor_Unknown8(__int64 a1, _QWORD* a2, int a3,
                                          const char* a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = a1 + 8;
  if (v4 == a1 + 8) {
    return 0;
  }
  while (1) {
    result = GameRoutine_572470(*(_QWORD*)(v4 + 16), *(_QWORD*)(v4 + 16) + 64LL,
                                a3, a4, a2);
    if (result != 0) {
      break;
    }
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == v5) {
      return 0;
    }
  }
  return result;
}

__int64 MultiArcResourceAccessor_Unknown13(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  result = GameRoutine_576ce0(a1 + 3, a3);
  if (result == 0) {
    v7 = (_QWORD*)a1[2];
    if (v7 == a1 + 1) {
    LABEL_6:
      v8 = MultiArcResourceAccessor_574300(a1, a3);
      result =
          (*(__int64 (**)(_QWORD*, __int64, __int64))(*a1 + 160LL))(a1, a2, a3);
      if (result != 0) {
        v9 = result;
        GameRoutine_576d40(v8 + 128, a3, result, 1);
        return v9;
      }
    }
    else {
      while (1) {
        result = GameRoutine_576ce0(v7[2] + 128LL, a3);
        if (result != 0) {
          break;
        }
        v7 = (_QWORD*)v7[1];
        if (v7 == a1 + 1) {
          goto LABEL_6;
        }
      }
    }
  }
  return result;
}

__int64 MultiArcResourceAccessor_574300(__int64 a1, const char* a2)
{
  __int64 v2;
  __int64 i;
  __int64 v5;
  int v6;
  unsigned int v7;
  _QWORD v9[32];
  char v10[8];

  v2 = *(_QWORD*)(a1 + 16);
  for (i = a1 + 8; v2 != i; v2 = *(_QWORD*)(v2 + 8)) {
    v5 = *(_QWORD*)(v2 + 16);
    v6 = *(unsigned __int8*)(v5 + 64);
    strcpy(v10, "font");
    memset(v9, 0, sizeof(v9));
    if (v6 == 46 && *(_BYTE*)(v5 + 65) == 0) {
      nn_util_SNPrintf(v9, 255, "%s/%s", v10, a2);
      v7 = GameRoutine_5756e0(v5 + 8, v9);
      if (v7 == -1) {
        continue;
      }
    }
    else {
      nn_util_SNPrintf(v9, 255, "%s/%s/%s", (const char*)(v5 + 64), v10, a2);
      v7 = GameRoutine_5756e0(v5 + 8, v9);
      if (v7 == -1) {
        continue;
      }
    }
    v9[0] = 0;
    if (GameRoutine_575670(v5 + 8, v9, v7) != 0) {
      return *(_QWORD*)(v2 + 16);
    }
  }
  return 0;
}

__int64 MultiArcResourceAccessor_Unknown14(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  result = GameRoutine_59e700(a1 + 5, a3);
  if (result == 0) {
    v7 = (_QWORD*)a1[2];
    if (v7 == a1 + 1) {
    LABEL_6:
      v8 = GameRoutine_574580(a1, a3);
      result = GameRoutine_59e1c0(v8 + 144, a3);
      if (result != 0) {
        v9 = result;
        (*(void (**)(_QWORD*, __int64, __int64, __int64))(*a1 + 152LL))(
            a1, result, a2, a3);
        (*(void (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9);
        return v9;
      }
    }
    else {
      while (1) {
        result = GameRoutine_59e700(v7[2] + 144LL, a3);
        if (result != 0) {
          break;
        }
        v7 = (_QWORD*)v7[1];
        if (v7 == a1 + 1) {
          goto LABEL_6;
        }
      }
    }
  }
  return result;
}

__int64 MultiArcResourceAccessor_Unknown19(__int64 a1, __int64 a2, __int64 a3,
                                           const char* a4)
{
  __int64 v4;
  __int64 v5;
  char v9;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = a1 + 8;
  if (v4 == a1 + 8) {
    v9 = 0;
  }
  else {
    do {
      v9 = GameRoutine_572ae0(*(_QWORD*)(v4 + 16), a2, a3, a4);
      if ((v9 & 1) != 0) {
        break;
      }
      v4 = *(_QWORD*)(v4 + 8);
    } while (v4 != v5);
  }
  return v9 & 1;
}

__int64 MultiArcResourceAccessor_Unknown21(__int64 a1, __int64 a2, __int64 a3,
                                           const char* a4)
{
  __int64 v4;
  __int64 v5;
  char v9;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = a1 + 8;
  if (v4 == a1 + 8) {
    v9 = 0;
  }
  else {
    do {
      v9 = GameRoutine_572ec0(*(_QWORD*)(v4 + 16), a2, a3, a4);
      if ((v9 & 1) != 0) {
        break;
      }
      v4 = *(_QWORD*)(v4 + 8);
    } while (v4 != v5);
  }
  return v9 & 1;
}

__int64 MultiArcResourceAccessor_Unknown22(__int64 a1, __int64 a2, __int64 a3,
                                           unsigned int a4, __int64 a5,
                                           __int64 a6)
{
  __int64 v6;
  __int64 v7;
  char v13;

  v6 = *(_QWORD*)(a1 + 16);
  v7 = a1 + 8;
  if (v6 == a1 + 8) {
    v13 = 0;
  }
  else {
    do {
      v13 = GameRoutine_573070(*(_QWORD*)(v6 + 16), a2, a3, a4, a5, a6);
      if ((v13 & 1) != 0) {
        break;
      }
      v6 = *(_QWORD*)(v6 + 8);
    } while (v6 != v7);
  }
  return v13 & 1;
}

__int64 MultiArcResourceAccessor_Unknown17(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 result;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;

  result = GameRoutine_597c80(a1 + 7, a3);
  if (result == 0) {
    v7 = (_QWORD*)a1[2];
    if (v7 == a1 + 1) {
    LABEL_6:
      v8 = MultiArcResourceAccessor_574b60(a1, a3);
      result = GameRoutine_597b70(v8 + 160, a3, 1);
      if (result != 0) {
        v9 = result;
        (*(void (**)(_QWORD*, __int64, __int64, __int64))(*a1 + 168LL))(
            a1, result, a2, a3);
        return v9;
      }
    }
    else {
      while (1) {
        result = GameRoutine_597c80(v7[2] + 160LL, a3);
        if (result != 0) {
          break;
        }
        v7 = (_QWORD*)v7[1];
        if (v7 == a1 + 1) {
          goto LABEL_6;
        }
      }
    }
  }
  return result;
}

__int64 MultiArcResourceAccessor_574b60(__int64 a1, const char* a2)
{
  __int64 i;
  __int64 v4;
  int v5;
  unsigned int v6;
  _QWORD v8[32];
  _QWORD v9[32];
  char v10[8];

  memset(v8, 0, sizeof(v8));
  nn_util_SNPrintf(v8, 256, "ArchiveShader-%s.bnsh", a2);
  for (i = *(_QWORD*)(a1 + 16); i != a1 + 8; i = *(_QWORD*)(i + 8)) {
    v4 = *(_QWORD*)(i + 16);
    v5 = *(unsigned __int8*)(v4 + 64);
    strcpy(v10, "bgsh");
    memset(v9, 0, sizeof(v9));
    if (v5 == 46 && *(_BYTE*)(v4 + 65) == 0) {
      nn_util_SNPrintf(v9, 255, "%s/%s", v10, (const char*)v8);
      v6 = GameRoutine_5756e0(v4 + 8, v9);
      if (v6 == -1) {
        continue;
      }
    }
    else {
      nn_util_SNPrintf(v9, 255, "%s/%s/%s", (const char*)(v4 + 64), v10,
                       (const char*)v8);
      v6 = GameRoutine_5756e0(v4 + 8, v9);
      if (v6 == -1) {
        continue;
      }
    }
    v9[0] = 0;
    if (GameRoutine_575670(v4 + 8, v9, v6) != 0) {
      return *(_QWORD*)(i + 16);
    }
  }
  return 0;
}

__int64 MultiArcResourceAccessor_Unknown18(_QWORD* a1, __int64 a2,
                                           unsigned int a3, __int64 a4,
                                           __int64 a5)
{
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  v10 = GameRoutine_597c80(a1 + 7, "__arcsh");
  if (v10 == 0) {
    v11 = (_QWORD*)a1[2];
    if (v11 == a1 + 1) {
    LABEL_8:
      v13 = MultiArcResourceAccessor_574e40(a1, a3, a4, a5);
      v10 = GameRoutine_597b70(v13 + 160, "__arcsh", 1);
      if (v10 != 0) {
        (*(void (**)(_QWORD*, __int64, __int64, _QWORD, __int64, __int64))(
            *a1 + 176LL))(a1, v10, a2, a3, a4, a5);
      }
    }
    else {
      while (1) {
        v12 = GameRoutine_597c80(v11[2] + 160LL, "__arcsh");
        if (v12 != 0) {
          v10 = v12;
          if ((unsigned int)GameRoutine_59ed60(*(_QWORD*)(v12 + 56), a3, a4,
                                               a5) != -1) {
            break;
          }
        }
        v11 = (_QWORD*)v11[1];
        if (v11 == a1 + 1) {
          goto LABEL_8;
        }
      }
    }
  }
  return v10;
}

__int64 MultiArcResourceAccessor_574e40(__int64 a1, unsigned int a2, __int64 a3,
                                        __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v9;
  int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  _QWORD v16[2];
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47[16];

  v4 = *(_QWORD*)(a1 + 16);
  v5 = a1 + 8;
  if (v4 == a1 + 8) {
    return 0;
  }
  while (1) {
    v9 = *(_QWORD*)(v4 + 16);
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v41 = 0;
    v42 = 0;
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    v31 = 0;
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v23 = 0;
    v24 = 0;
    v10 = *(unsigned __int8*)(v9 + 64);
    strcpy(v47, "bgsh");
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    v16[0] = 0;
    v16[1] = 0;
    if (v10 == 46 && *(_BYTE*)(v9 + 65) == 0) {
      nn_util_SNPrintf(v16, 255, "%s/%s", v47, "__ArchiveShader.bnsh");
      v11 = GameRoutine_5756e0(v9 + 8, v16);
      if (v11 == -1) {
        goto LABEL_15;
      }
    }
    else {
      nn_util_SNPrintf(v16, 255, "%s/%s/%s", (const char*)(v9 + 64), v47,
                       "__ArchiveShader.bnsh");
      v11 = GameRoutine_5756e0(v9 + 8, v16);
      if (v11 == -1) {
        goto LABEL_15;
      }
    }
    v16[0] = 0;
    if (GameRoutine_575670(v9 + 8, v16, v11) == 0) {
      goto LABEL_15;
    }
    v45 = 0;
    v46 = 0;
    v43 = 0;
    v44 = 0;
    v41 = 0;
    v42 = 0;
    v39 = 0;
    v40 = 0;
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v33 = 0;
    v34 = 0;
    v31 = 0;
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v25 = 0;
    v26 = 0;
    v23 = 0;
    v24 = 0;
    v12 = *(unsigned __int8*)(v9 + 64);
    strcpy(v47, "bgsh");
    v21 = 0;
    v22 = 0;
    v19 = 0;
    v20 = 0;
    v17 = 0;
    v18 = 0;
    v16[0] = 0;
    v16[1] = 0;
    if (v12 != 46 || *(_BYTE*)(v9 + 65) != 0) {
      nn_util_SNPrintf(v16, 255, "%s/%s/%s", (const char*)(v9 + 64), v47,
                       "__ArchiveShader.bushvt");
      v13 = GameRoutine_5756e0(v9 + 8, v16);
      if (v13 != -1) {
        break;
      }
      goto LABEL_3;
    }
    nn_util_SNPrintf(v16, 255, "%s/%s", v47, "__ArchiveShader.bushvt");
    v13 = GameRoutine_5756e0(v9 + 8, v16);
    if (v13 != -1) {
      break;
    }
  LABEL_3:
    if ((unsigned int)GameRoutine_59ed60(0, a2, a3, a4) != -1) {
      return *(_QWORD*)(v4 + 16);
    }
  LABEL_15:
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == v5) {
      return 0;
    }
  }
  v16[0] = 0;
  v14 = GameRoutine_575670(v9 + 8, v16, v13);
  if ((unsigned int)GameRoutine_59ed60(v14, a2, a3, a4) == -1) {
    goto LABEL_15;
  }
  return *(_QWORD*)(v4 + 16);
}

__int64 MultiArcResourceAccessor_Unknown3(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 i;
  __int64 v9;

  GameRoutine_576ec0(a1 + 24);
  result = GameRoutine_59e5a0(a1 + 40, a2, a3);
  v7 = a1 + 8;
  for (i = *(_QWORD*)(a1 + 16); i != v7; i = *(_QWORD*)(i + 8)) {
    v9 = *(_QWORD*)(i + 16);
    GameRoutine_576ec0(v9 + 128);
    result = GameRoutine_59e5a0(v9 + 144, a2, a3);
  }
  return result;
}

__int64 MultiArcResourceAccessor_Unknown4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 i;
  __int64 v9;

  GameRoutine_576f40(a1 + 24);
  result = GameRoutine_59e640(a1 + 40, a2, a3);
  v7 = a1 + 8;
  for (i = *(_QWORD*)(a1 + 16); i != v7; i = *(_QWORD*)(i + 8)) {
    v9 = *(_QWORD*)(i + 16);
    GameRoutine_576f40(v9 + 128);
    result = GameRoutine_59e640(v9 + 144, a2, a3);
  }
  return result;
}

__int64 MultiArcResourceAccessor_Unknown10(__int64 a1, unsigned int a2,
                                           __int64 a3)
{
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)a1 + 64LL))(a1, 0, a2, a3);
}

__int64 MultiArcResourceAccessor_Unknown11(__int64 a1, unsigned int a2,
                                           __int64 a3)
{
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)a1 + 72LL))(a1, 0, a2, a3);
}

__int64 MultiArcResourceAccessor_Unknown20(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;

  v3 = *a1;
  v10 = 0;
  v5 = (*(__int64 (**)(__int64*, __int64*, __int64, __int64))(v3 + 64))(
      a1, &v10, 1718578804, a3);
  if (v5 == 0 || v10 == 0) {
    return 0;
  }
  v7 = v5;
  result = LayoutEx_579180(264);
  if (result == 0) {
    return result;
  }
  v9 = result;
  GameRoutine_55ea10();
  if ((ResFont_55eae0(v9, a2, v7, 0, 0, 0) & 1) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    LayoutEx_5791a0(v9);
    return 0;
  }
  return v9;
}

#pragma GCC visibility pop
