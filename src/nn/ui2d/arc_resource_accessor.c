#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ArchiveHandle_Destructor(_QWORD);
__int64 GameRoutine_575420(_QWORD);
__int64 GameRoutine_575670(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_575980(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576c10(_QWORD);
__int64 GameRoutine_576c20(_QWORD);
__int64 GameRoutine_576ce0(_QWORD, _QWORD);
__int64 GameRoutine_576d40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576ec0(_QWORD);
__int64 GameRoutine_576f40(_QWORD);
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
__int64 GameRoutine_5fe3b0(void);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_2136140[2];
__int64 ArcResourceAccessor_DeletingDestructor(_QWORD* a1);
_QWORD* ArcResourceAccessor_Unknown7(_QWORD* a1, __int64 a2);
__int64 ArcResourceAccessor_573580(_QWORD* a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6);
__int64 ArcResourceAccessor_573800(__int64 a1);
__int64 ArcResourceAccessor_Unknown12(__int64 a1, int a2,
                                      void (*a3)(__int64, _QWORD, _QWORD*,
                                                 __int64),
                                      __int64 a4);
__int64 ArcResourceAccessor_Unknown13(__int64 a1, __int64 a2, __int64 a3);
__int64 ArcResourceAccessor_Unknown14(__int64 a1, __int64 a2, __int64 a3);
__int64 ArcResourceAccessor_Unknown17(__int64 a1, __int64 a2, __int64 a3);
__int64 ArcResourceAccessor_Unknown18(__int64 a1, __int64 a2, unsigned int a3,
                                      __int64 a4, __int64 a5);
__int64 ArcResourceAccessor_Unknown3(__int64 a1, __int64 a2, __int64 a3);
__int64 ArcResourceAccessor_Unknown4(__int64 a1, __int64 a2, __int64 a3);
__int64 ArcResourceAccessor_Unknown10(__int64 a1, unsigned int a2, __int64 a3);
__int64 ArcResourceAccessor_Unknown11(__int64 a1, unsigned int a2, __int64 a3);

__int64 ArcResourceAccessor_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_2136140[0] + 2;
  GameRoutine_597ad0(a1 + 35);
  GameRoutine_59e0f0(a1 + 33);
  GameRoutine_576c10(a1 + 31);
  ArchiveHandle_Destructor(a1 + 1);
  return GameRoutine_597120(a1);
}

_QWORD* ArcResourceAccessor_Unknown7(_QWORD* a1, __int64 a2)
{
  __int64 v4;

  a1[24] = 0;
  a1[25] = 0;
  GameRoutine_576c20(a1 + 17);
  GameRoutine_59e100(a1 + 19, a2);
  GameRoutine_597ae0(a1 + 21, a2);
  v4 = a1[23];
  if (v4 != 0) {
    if (*(_QWORD*)(v4 + 72) == *(_QWORD*)(v4 + 64)) {
      GameRoutine_5fe3b0();
    }
    *(_QWORD*)(v4 + 72) = 0;
    a1[23] = 0;
  }
  GameRoutine_576c20(a1 + 31);
  GameRoutine_59e100(a1 + 33, a2);
  GameRoutine_597ae0(a1 + 35, a2);
  return a1;
}

__int64 ArcResourceAccessor_573580(_QWORD* a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v12;
  _BYTE* v13;
  char* v14;
  char* v15;
  char* v16;
  char* v17;
  char* v18;
  int v19;
  _BYTE* v20;
  __int64 v22;
  _BYTE* v23;
  char* v24;
  char* v25;
  char* v26;
  char* v27;
  char* v28;
  int v29;
  _BYTE* v30;

  if ((GameRoutine_575420(a1 + 2) & 1) == 0) {
    return 0;
  }
  v12 = 0;
  while (1) {
    v13 = (_BYTE*)(a3 + v12);
    v14 = (char*)a1 + v12;
    if (*(_BYTE*)(a3 + v12) == 0) {
      v20 = v14 + 72;
      goto LABEL_24;
    }
    v14[72] = *(_BYTE*)(a3 + v12);
    if (v13[1] == 0) {
      v20 = (char*)a1 + v12 + 73;
      goto LABEL_24;
    }
    v14[73] = v13[1];
    v15 = (char*)a1 + v12;
    if (v13[2] == 0) {
      v20 = v15 + 74;
      goto LABEL_24;
    }
    v15[74] = v13[2];
    if (v13[3] == 0) {
      v20 = (char*)a1 + v12 + 75;
      goto LABEL_24;
    }
    v15[75] = v13[3];
    v16 = (char*)a1 + v12;
    if (v13[4] == 0) {
      v20 = v16 + 76;
      goto LABEL_24;
    }
    v16[76] = v13[4];
    if (v13[5] == 0) {
      v20 = (char*)a1 + v12 + 77;
      goto LABEL_24;
    }
    v16[77] = v13[5];
    v17 = (char*)a1 + v12;
    if (v13[6] == 0) {
      v20 = v17 + 78;
      goto LABEL_24;
    }
    v17[78] = v13[6];
    if (v13[7] == 0) {
      v20 = (char*)a1 + v12 + 79;
      goto LABEL_24;
    }
    v17[79] = v13[7];
    v18 = (char*)a1 + v12;
    v19 = (unsigned __int8)v13[8];
    if (v19 == 0) {
      break;
    }
    v12 += 9;
    v18[80] = v19;
    if ((_DWORD)v12 == 63) {
      v20 = (char*)a1 + v12 + 72;
      goto LABEL_24;
    }
  }
  v20 = v18 + 80;

LABEL_24:
  v22 = 0;
  *v20 = 0;
  a1[26] = a2;
  a1[27] = a4;
  a1[28] = a5;
  a1[29] = a6;
  a1[30] = a2;
  while (1) {
    v23 = (_BYTE*)(a3 + v22);
    v24 = (char*)a1 + v22;
    if (*(_BYTE*)(a3 + v22) == 0) {
      v30 = v24 + 296;
      goto LABEL_45;
    }
    v24[296] = *(_BYTE*)(a3 + v22);
    if (v23[1] == 0) {
      v30 = (char*)a1 + v22 + 297;
      goto LABEL_45;
    }
    v24[297] = v23[1];
    v25 = (char*)a1 + v22;
    if (v23[2] == 0) {
      v30 = v25 + 298;
      goto LABEL_45;
    }
    v25[298] = v23[2];
    if (v23[3] == 0) {
      v30 = (char*)a1 + v22 + 299;
      goto LABEL_45;
    }
    v25[299] = v23[3];
    v26 = (char*)a1 + v22;
    if (v23[4] == 0) {
      v30 = v26 + 300;
      goto LABEL_45;
    }
    v26[300] = v23[4];
    if (v23[5] == 0) {
      v30 = (char*)a1 + v22 + 301;
      goto LABEL_45;
    }
    v26[301] = v23[5];
    v27 = (char*)a1 + v22;
    if (v23[6] == 0) {
      v30 = v27 + 302;
      goto LABEL_45;
    }
    v27[302] = v23[6];
    if (v23[7] == 0) {
      v30 = (char*)a1 + v22 + 303;
      goto LABEL_45;
    }
    v27[303] = v23[7];
    v28 = (char*)a1 + v22;
    v29 = (unsigned __int8)v23[8];
    if (v29 == 0) {
      break;
    }
    v22 += 9;
    v28[304] = v29;
    if ((_DWORD)v22 == 63) {
      v30 = (char*)a1 + v22 + 296;
      goto LABEL_45;
    }
  }
  v30 = v28 + 304;

LABEL_45:
  *v30 = 0;
  return (*(__int64 (**)(_QWORD*))(*a1 + 184LL))(a1);
}

__int64 ArcResourceAccessor_573800(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 240) = 0;
  return v1;
}

__int64 ArcResourceAccessor_Unknown12(__int64 a1, int a2,
                                      void (*a3)(__int64, _QWORD, _QWORD*,
                                                 __int64),
                                      __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 result;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[2];
  __int64 v15;
  __int64 v16;
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
  _BYTE v45[256];
  __int64 v46;
  __int64 v47;
  unsigned int v48;

  v46 = v4;
  v47 = v5;
  v8 = a1 + 8;
  LOBYTE(v14[0]) = HIBYTE(a2);
  memset(v45, 0, sizeof(v45));
  *(_WORD*)((char*)v14 + 3) = (unsigned __int8)a2;
  BYTE1(v14[0]) = BYTE2(a2);
  BYTE2(v14[0]) = BYTE1(a2);
  if (*(_BYTE*)(a1 + 296) == 46 && *(_BYTE*)(a1 + 297) == 0) {
    nn_util_SNPrintf(v45, 255, "%s/", (const char*)v14);
  }
  else {
    nn_util_SNPrintf(v45, 255, "%s/%s/", (const char*)(a1 + 296),
                     (const char*)v14);
  }
  v48 = 0;
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
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0;
  v18 = 0;
  v15 = 0;
  v16 = 0;
  v14[0] = 0;
  v14[1] = 0;
  result = GameRoutine_575980(v8 + 8, &v48, v14, 1);
  if ((_DWORD)result != 0) {
    v10 = 0;
    do {
      v11 = strlen(v45);
      if ((unsigned int)strncmp(v14, v45, v11) == 0) {
        v13 = 0;
        v12 = GameRoutine_575670(v8 + 8, &v13, v10);
        a3(v12, SHIDWORD(v13), v14, a4);
      }
      v10 = v48;
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
      v21 = 0;
      v22 = 0;
      v19 = 0;
      v20 = 0;
      v17 = 0;
      v18 = 0;
      v15 = 0;
      v16 = 0;
      v14[0] = 0;
      v14[1] = 0;
      result = GameRoutine_575980(v8 + 8, &v48, v14, 1);
    } while ((_DWORD)result != 0);
  }
  return result;
}

__int64 ArcResourceAccessor_Unknown13(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;

  result = GameRoutine_576ce0(a1 + 248, a3);
  if (result == 0) {
    result = GameRoutine_576ce0(a1 + 136, a3);
    if (result == 0) {
      result = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)a1 +
                                                           160LL))(a1, a2, a3);
      if (result != 0) {
        v7 = result;
        GameRoutine_576d40(a1 + 136, a3, result, 1);
        return v7;
      }
    }
  }
  return result;
}

__int64 ArcResourceAccessor_Unknown14(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;

  result = GameRoutine_59e700(a1 + 264, a3);
  if (result == 0) {
    result = GameRoutine_59e700(a1 + 152, a3);
    if (result == 0) {
      result = GameRoutine_59e1c0(a1 + 152, a3);
      if (result != 0) {
        v7 = result;
        (*(void (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)a1 + 152LL))(a1, result, a2, a3);
        (*(void (**)(__int64))(*(_QWORD*)v7 + 48LL))(v7);
        return v7;
      }
    }
  }
  return result;
}

__int64 ArcResourceAccessor_Unknown17(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v7;

  result = GameRoutine_597c80(a1 + 280, a3);
  if (result == 0) {
    result = GameRoutine_597c80(a1 + 168, a3);
    if (result == 0) {
      result = GameRoutine_597b70(a1 + 168, a3, 1);
      if (result != 0) {
        v7 = result;
        (*(void (**)(__int64, __int64, __int64, __int64))(
            *(_QWORD*)a1 + 168LL))(a1, result, a2, a3);
        return v7;
      }
    }
  }
  return result;
}

__int64 ArcResourceAccessor_Unknown18(__int64 a1, __int64 a2, unsigned int a3,
                                      __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v11;

  result = GameRoutine_597c80(a1 + 280, "__arcsh");
  if (result == 0) {
    result = GameRoutine_597c80(a1 + 168, "__arcsh");
    if (result == 0) {
      result = GameRoutine_597b70(a1 + 168, "__arcsh", 1);
      if (result != 0) {
        v11 = result;
        (*(void (**)(__int64, __int64, __int64, _QWORD, __int64, __int64))(
            *(_QWORD*)a1 + 176LL))(a1, result, a2, a3, a4, a5);
        return v11;
      }
    }
  }
  return result;
}

__int64 ArcResourceAccessor_Unknown3(__int64 a1, __int64 a2, __int64 a3)
{
  GameRoutine_576ec0(a1 + 248);
  GameRoutine_59e5a0(a1 + 264, a2, a3);
  GameRoutine_576ec0(a1 + 136);
  return GameRoutine_59e5a0(a1 + 152, a2, a3);
}

__int64 ArcResourceAccessor_Unknown4(__int64 a1, __int64 a2, __int64 a3)
{
  GameRoutine_576f40(a1 + 248);
  GameRoutine_59e640(a1 + 264, a2, a3);
  GameRoutine_576f40(a1 + 136);
  return GameRoutine_59e640(a1 + 152, a2, a3);
}

__int64 ArcResourceAccessor_Unknown10(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)a1 + 64LL))(a1, 0, a2, a3);
}

__int64 ArcResourceAccessor_Unknown11(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64))(
      *(_QWORD*)a1 + 72LL))(a1, 0, a2, a3);
}

#pragma GCC visibility pop
