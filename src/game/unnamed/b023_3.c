#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern __int64 (*GameData_20c2420[])();
extern __int64 (*GameData_20c6bf8[])();
extern __int64 (*GameData_20c7140[])();
extern __int64 (*GameData_20c7cf0[])();
extern __int64 (*GameData_20c8238[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_2265ed8;
__int64 GameRoutine_16de2e0(_QWORD, _QWORD);
__int64 GameRoutine_16dea40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17871c0(__int64 result, unsigned int, int);
__int64 GameRoutine_1787b80(__int64);
__int64 GameRoutine_178bfa0(__int64, __int64, __int64*);
__int64 GameRoutine_17a1df0(__int64);
__int64 GameRoutine_1990fb0(_QWORD);
__int64 GameRoutine_1a09c50();
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6881c0(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);

_QWORD* GameHr_17804b0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)GameData_212bf68;
  v3 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 48, 16, 0);
  v4 = a1[1];
  v5 = a1[2];
  v6 = v3;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  *v3 = GameData_20c2420;
  v3[1] = v4;
  v7 = a1[3];
  v8 = v7 - v5;
  if (v7 != v5) {
    if (v8 < 0) {
      GameRoutine_6881c0(v3);
    }
    v9 = GameRoutine_651b90(*v2, v7 - v5, 16, 0);
    v10 = v9 + v8;
    v6[2] = v9;
    v6[4] = v9 + v8;
    GameRoutine_1a0b950(v9, v5, v8);
    v6[3] = v10;
  }
  v6[5] = a1[5];
  return v6;
}

_QWORD* GameHr_1780570(_QWORD* result, _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = result;
  *a2 = GameData_20c2420;
  v4 = result[1];
  a2[3] = 0;
  a2[4] = 0;
  a2[1] = v4;
  a2[2] = 0;
  v6 = result[2];
  v5 = result[3];
  v7 = v5 - v6;
  if (v5 != v6) {
    if (v7 < 0) {
      GameRoutine_6881c0(result);
    }
    v8 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v5 - v6, 16, 0);
    v9 = v8 + v7;
    a2[2] = v8;
    a2[3] = v8;
    a2[4] = v8 + v7;
    result = (_QWORD*)GameRoutine_1a0b950(v8, v6, v7);
    a2[3] = v9;
  }
  a2[5] = v3[5];
  return result;
}

__int64 GameHr_1788370(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  if ((*(unsigned int (**)(_QWORD*))(*a1 + 1120LL))(a1) != 0 &&
      (*(_BYTE*)(a1[132] + 356LL) & 1) == 0) {
    v3 = a1[22];
    v2 = a1 + 22;
    (*(void (**)(_QWORD*))(v3 + 144))(v2);
    GameRoutine_17871c0(
        v2[110],
        *(_DWORD*)(*(_QWORD*)(v2[110] +
                              8LL * *(unsigned int*)(v2[110] + 352LL) + 304) +
                   1064LL) == 0,
        1);
  }
  return 0;
}

__int64 GameHr_17883f0(__int64 a1)
{
  return GameRoutine_17871c0(
      *(_QWORD*)(a1 + 1056),
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1056) +
                            8LL * *(unsigned int*)(*(_QWORD*)(a1 + 1056) +
                                                   352LL) +
                            304) +
                 1064LL) == 0,
      1);
}

__int64 GameHr_1788900(_QWORD* a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  _BOOL8 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  __int64 result;
  int v18;
  _DWORD* v19;
  _DWORD* v20;
  int v21;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1248LL))(a1) & 1) != 0) {
    (*(void (**)(_QWORD*))(*a1 + 1280LL))(a1);
    (*(void (**)(_QWORD*))(a1[22] + 144LL))(a1 + 22);
    v6 = a1[132];
    if (*(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                   1064LL) != 0) {
      v7 = 0;
    }
    else {
      v7 = 2;
    }
    if (*(_QWORD*)(v6 + 320) != 0) {
      v8 = v7;
    }
    else {
      v8 = *(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                      1064LL) == 0;
    }
    GameRoutine_17871c0(v6, v8, 0);
    v9 = a1[132];
    if (*((_DWORD*)a1 + 266) != 0) {
      v10 = 0;
    }
    else {
      v10 = 2;
    }
    if (*(_QWORD*)(v9 + 320) != 0) {
      v11 = v10;
    }
    else {
      v11 = *((_DWORD*)a1 + 266) == 0;
    }
    v12 = *(_QWORD*)(v9 + 8 * v11 + 304);
    GameRoutine_16de2e0(v12, 1);
    v13 = *(_QWORD**)(v12 + 232);
    v14 = *(_QWORD**)(v12 + 240);
    if (v13 != v14) {
      v15 = 0;
      do {
        v16 = *v13;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v13 + 48LL))(*v13) & 1) != 0) {
          if (v16 == *(_QWORD*)(v12 + 336)) {
            goto LABEL_23;
          }
          ++v15;
        }
        ++v13;
      } while (v13 != v14);
    }
    v15 = -1;
  LABEL_23:
    if (v15 <= 1) {
      v18 = 1;
    }
    else {
      v18 = v15;
    }
    *(_DWORD*)(v12 + 552) = v18 - 1;
    GameRoutine_16dea40(v12, 1, 0, 0);
    v19 = *(_DWORD**)(v12 + 808);
    v20 = *(_DWORD**)(v12 + 816);
    if (v19 != v20) {
      v21 = *(_DWORD*)(v12 + 644);
      do {
        *v19++ = v21;
      } while (v19 != v20);
    }
    (*(void (**)(_QWORD*))(*a1 + 1264LL))(a1);
    return 0;
  }
  else {
    result = (*(__int64 (**)(_QWORD*, __int64, _QWORD, _QWORD))(a1[22] + 88LL))(
        a1 + 22, 1, a2 & 1, a3 & 1);
    if ((_DWORD)result == 13) {
      GameRoutine_1787b80(a1[132]);
      return 13;
    }
  }
  return result;
}

__int64 GameHr_1788c00(__int64 a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  _BOOL8 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  int v15;
  __int64 v16;
  __int64 result;
  int v18;
  _QWORD* v19;
  _QWORD* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _QWORD* v27;
  _QWORD* v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  _DWORD* v33;
  _DWORD* v34;
  int v35;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1240LL))(a1) & 1) == 0) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)(a1 + 176) + 88LL))(a1 + 176, 0xFFFFFFFFLL, a2 & 1, a3 & 1);
    if ((_DWORD)result == 13) {
      GameRoutine_1787b80(*(_QWORD*)(a1 + 1056));
      return 13;
    }
    return result;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1272LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)(a1 + 176) + 144LL))(a1 + 176);
  v6 = *(_QWORD*)(a1 + 1056);
  if (*(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                 1064LL) != 0) {
    v7 = 0;
  }
  else {
    v7 = 2;
  }
  if (*(_QWORD*)(v6 + 320) != 0) {
    v8 = v7;
  }
  else {
    v8 = *(_DWORD*)(*(_QWORD*)(v6 + 8LL * *(unsigned int*)(v6 + 352) + 304) +
                    1064LL) == 0;
  }
  GameRoutine_17871c0(v6, v8, 0);
  v9 = *(_QWORD*)(a1 + 1056);
  if (*(_DWORD*)(a1 + 1064) != 0) {
    v10 = 0;
  }
  else {
    v10 = 2;
  }
  if (*(_QWORD*)(v9 + 320) != 0) {
    v11 = v10;
  }
  else {
    v11 = *(_DWORD*)(a1 + 1064) == 0;
  }
  v12 = *(_QWORD*)(v9 + 8 * v11 + 304);
  v13 = *(_QWORD**)(v12 + 232);
  v14 = *(_QWORD**)(v12 + 240);
  if (v13 == v14) {
    goto LABEL_49;
  }
  v15 = 0;
  do {
    v16 = *v13;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v13 + 48LL))(*v13) & 1) != 0) {
      v15 += (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16) & 1;
    }
    ++v13;
  } while (v13 != v14);
  v18 = v15 - 1;
  if (v15 < 1) {
    goto LABEL_49;
  }
  v19 = *(_QWORD**)(v12 + 232);
  v20 = *(_QWORD**)(v12 + 240);
  if (v19 == v20) {
    goto LABEL_49;
  }
  v21 = 0;
  while (1) {
    v22 = *v19;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v19 + 48LL))(*v19) & 1) != 0 &&
        ((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22) & 1) != 0) {
      if (v18 == v21) {
        break;
      }
      ++v21;
    }
    if (++v19 == v20) {
      goto LABEL_49;
    }
  }
  v23 = *(_QWORD*)(v12 + 336);
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 168LL))(v23);
  }
  *(_QWORD*)(v12 + 336) = v22;
  GameRoutine_16dea40(v12, 1, 0, 0);
  v24 = *(_QWORD*)(v12 + 336);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 160LL))(v24);
    GameRoutine_1990fb0(GameData_2265ed8 + 712);
    v25 = *(_QWORD*)(v12 + 336);
    v26 = 4;
    if (v25 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 120LL))(v25) & 1) != 0) {
        v26 = 4;
      }
      else {
        v26 = 0;
      }
    }
  }
  else {
    v26 = 4;
  }
  v27 = *(_QWORD**)(v12 + 232);
  v28 = *(_QWORD**)(v12 + 240);
  *(_DWORD*)(v12 + 356) = *(_DWORD*)(v12 + 356) & 0xFFFFFFFB | v26;
  if (v27 == v28) {
    v31 = 0;
  }
  else {
    v29 = 0;
    do {
      v30 = *v27;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v27 + 48LL))(*v27) & 1) != 0) {
        if (v30 == *(_QWORD*)(v12 + 336)) {
          goto LABEL_44;
        }
        ++v29;
      }
      ++v27;
    } while (v27 != v28);
    v29 = -1;
  LABEL_44:
    v31 = v29 + 1;
  }
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)(v12 + 176) + 8LL))(v12 + 176);
  *(_DWORD*)(v12 + 552) = (v31 - v32) & ~((v31 - v32) >> 31);
  GameRoutine_16dea40(v12, 1, 0, 0);
  v33 = *(_DWORD**)(v12 + 808);
  v34 = *(_DWORD**)(v12 + 816);
  if (v33 != v34) {
    v35 = *(_DWORD*)(v12 + 644);
    do {
      *v33++ = v35;
    } while (v33 != v34);
  }
LABEL_49:
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1256LL))(a1);
  return 0;
}

_QWORD* GameHr_178e880(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  v2 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1184, 16, 0);
  v3 = *(_QWORD*)(a1 + 208);
  v6 = 0;
  v7 = 0;
  if (v3 != 0) {
    v4 = GameRoutine_1a0a0c0(v3);
    v7 = v4;
    if (v4 != 0) {
      v6 = *(_QWORD*)(a1 + 200);
    }
  }
  else {
    v4 = 0;
  }
  GameRoutine_178bfa0((__int64)v2, a1, &v6);
  *v2 = GameData_20c7cf0;
  v2[22] = GameData_20c8238;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    GameRoutine_1a09c50();
  }
  return v2;
}

__int64 GameHr_178eae0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v19[2];

  v2 = (_QWORD*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1216, 16, 0);
  v4 = *(_QWORD*)(a1 + 208);
  if (v4 != 0 && (v5 = GameRoutine_1a0a0c0(v4)) != 0) {
    v6 = (atomic_ullong*)(v5 + 8);
    v7 = v5;
    v19[0] = *(_QWORD*)(a1 + 200);
    v19[1] = v5;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v8 = GameRoutine_178bfa0(v3, a1, v19);
    *(_QWORD*)v3 = GameData_20c7cf0;
    *(_QWORD*)(v3 + 176) = GameData_20c8238;
    if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      v8 = GameRoutine_1a09c50();
    }
    v9 = 0;
  }
  else {
    v19[0] = 0;
    v19[1] = 0;
    v8 = GameRoutine_178bfa0(v3, a1, v19);
    v7 = 0;
    v9 = 1;
  }
  v10 = *(_QWORD*)(a1 + 512);
  *(_QWORD*)(v3 + 1192) = 0;
  *(_QWORD*)(v3 + 1200) = 0;
  *(_QWORD*)(v3 + 1208) = 0;
  *(_QWORD*)v3 = GameData_20c6bf8;
  *(_QWORD*)(v3 + 176) = GameData_20c7140;
  *(_DWORD*)(v3 + 1184) = *(_DWORD*)(a1 + 504);
  v11 = *(_QWORD*)(a1 + 520);
  v12 = v11 - v10;
  if (v11 != v10) {
    if (v12 < 0) {
      GameRoutine_688200(v8);
    }
    v13 = GameRoutine_651b90(*v2, v11 - v10, 16, 0);
    v14 = v13 + v12;
    *(_QWORD*)(v3 + 1192) = v13;
    *(_QWORD*)(v3 + 1200) = v13;
    *(_QWORD*)(v3 + 1208) = v13 + v12;
    GameRoutine_1a0b950(v13, v10, v12);
    *(_QWORD*)(v3 + 1200) = v14;
  }
  v16 = *(_QWORD**)(v3 + 256);
  v15 = *(_QWORD**)(v3 + 264);
  *(_QWORD*)(v3 + 336) = 0;
  while (v16 != v15) {
    if (*v16 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v16 + 8LL))(*v16);
      v15 = *(_QWORD**)(v3 + 264);
    }
    ++v16;
  }
  v17 = *(_QWORD*)(v3 + 344);
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    *(_QWORD*)(v3 + 344) = 0;
  }
  *(_QWORD*)(v3 + 264) = *(_QWORD*)(v3 + 256);
  *(_QWORD*)(v3 + 240) = *(_QWORD*)(v3 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1024LL))(v3);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3);
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    GameRoutine_1a09c50();
  }
  return v3;
}

__int64 GameHr_17a2160(__int64 a1, __int64 a2, int* a3)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;

  v4 = *(_QWORD*)(a1 + 16);
  v5 = 3LL * *(int*)(a1 + 8);
  v6 = *a3;
  *(_DWORD*)(*(_QWORD*)(v4 + 1104) + 24LL * *(int*)(a1 + 8) + 8) =
      *(_DWORD*)(a1 + 12);
  *(_DWORD*)(*(_QWORD*)(v4 + 1104) + 8 * v5 + 16) = v6;
  v7 = *(_QWORD*)(v4 + 1104);
  v8 = *(_QWORD*)(v4 + 1112) - v7;
  if (v8 != 0) {
    v9 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
    v10 = v9 & 7;
    if (v9 >= 8) {
      v13 = (_DWORD*)(v7 + 112);
      v14 = 0;
      v12 = 0;
      v15 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v12 += v13[12] + v13[6] + *v13 + *(v13 - 6) + *(v13 - 12) +
               *(v13 - 18) + *(v13 - 24);
        if (v14 != 0xFFFFFFFF00000008LL) {
          v12 += v13[18];
        }
        v13 += 48;
        v14 -= 8;
      } while (v15 != v14);
      v11 = -v14;
      if (v10 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v11 = 0;
      v12 = 0;
      if ((v9 & 7) == 0) {
      LABEL_16:
        *(_DWORD*)(v4 + 1128) = v12;
        return GameRoutine_17a1df0(v4);
      }
    }
    v16 = v7 + 24 * v11;
    v17 = v11 - 0xFFFFFFFFLL;
    v18 = (_DWORD*)(v16 + 16);
    do {
      if (v17 != 0) {
        v12 += *v18;
      }
      v18 += 6;
      ++v17;
      --v10;
    } while (v10 != 0);
    goto LABEL_16;
  }
  *(_DWORD*)(v4 + 1128) = 0;
  return GameRoutine_17a1df0(v4);
}

__int64 GameHr_17a2af0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v1 + 1088) -= 16LL;
  GameRoutine_17a1df0(v1);
  return 3;
}

__int64 GameHr_17a2c20(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  _DWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _DWORD* v18;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_DWORD*)(a1 + 16);
  v4 = 3LL * *(int*)(a1 + 20);
  v5 = *(_QWORD*)(v2 + 1104) + 24LL * *(int*)(a1 + 20);
  v6 = *(_DWORD*)(v5 + 16);
  *(_DWORD*)(v5 + 8) = *(_DWORD*)(a1 + 24);
  if (v6 <= 0) {
    v3 = 0;
  }
  *(_DWORD*)(*(_QWORD*)(v2 + 1104) + 8 * v4 + 16) = v3;
  v7 = *(_QWORD*)(v2 + 1104);
  v8 = *(_QWORD*)(v2 + 1112) - v7;
  if (v8 == 0) {
    v12 = 0;
    goto LABEL_17;
  }
  v9 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
  v10 = v9 & 7;
  if (v9 < 8) {
    v11 = 0;
    v12 = 0;
    if ((v9 & 7) == 0) {
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  v13 = (_DWORD*)(v7 + 112);
  v14 = 0;
  v12 = 0;
  v15 = -(__int64)(v9 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v12 += v13[12] + v13[6] + *v13 + *(v13 - 6) + *(v13 - 12) + *(v13 - 18) +
           *(v13 - 24);
    if (v14 != 0xFFFFFFFF00000008LL) {
      v12 += v13[18];
    }
    v13 += 48;
    v14 -= 8;
  } while (v15 != v14);
  v11 = -v14;
  if (v10 != 0) {
  LABEL_13:
    v16 = v7 + 24 * v11;
    v17 = v11 - 0xFFFFFFFFLL;
    v18 = (_DWORD*)(v16 + 16);
    do {
      if (v17 != 0) {
        v12 += *v18;
      }
      v18 += 6;
      ++v17;
      --v10;
    } while (v10 != 0);
  }
LABEL_17:
  *(_DWORD*)(v2 + 1128) = v12;
  GameRoutine_17a1df0(v2);
  return 3;
}

#pragma GCC visibility pop
