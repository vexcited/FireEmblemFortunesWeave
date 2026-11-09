#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_576a40(_QWORD, _QWORD, _QWORD);
__int64 DynamicRenderingTexture_575e40(void);
__int64 DynamicRenderingTexture_576440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5764b0(_QWORD, _QWORD);
__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_58aa70(__int64 result, __int64, __int64);
__int64 GameRoutine_58c1e0(__int64, __int64, __int64);
__int64 GameRoutine_58c380(__int64, __int64, __int64);
__int64 GameRoutine_58c720(__int64, __int64, __int64);
__int64 GameRoutine_58c810(_QWORD, _QWORD);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58d5b0(__int64, int);
__int64 GameRoutine_58d820(__int64, int);
__int64 GameRoutine_5b2420(_QWORD);
__int64 GameRoutine_5b2430(_QWORD);
__int64 GameRoutine_5b2440(_QWORD);
__int64 GameRoutine_5b2470(_QWORD);
__int64 GameRoutine_5b2480(_QWORD);
__int64 GameRoutine_5b24a0(_QWORD);
__int64 GameRoutine_5b24c0(_QWORD);
__int64 GameRoutine_5fcd30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fd5f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Material_5882b0(__int64, __int64);
__int64 Pane_58dc00(__int64 result, __int64);
__int64 Pane_58f8a0(__int64);
__int64 Pane_590280(__int64, __int64, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern unsigned int GameData_1b13dd4[3];
__int64 Picture_Unknown3(__int64 a1, __int64 a2);
__int64 Picture_Unknown11(_QWORD* a1, int a2);
__int64 Picture_Unknown4(__int64 a1, int a2);
__int64 Picture_Unknown5(__int64 result, int a2, _DWORD* a3);
__int64 Picture_595d60(__int64 a1, __int64 a2);
__int64 Picture_596c30(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5);
__int64 Picture_Unknown28(__int64 result, __int64 a2, __int64 a3);
__int64 Picture_5b2440(__int64 a1);

__int64 Picture_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v4;
  void (***v5)(_QWORD);
  __int64 result;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void (***v11)(_QWORD);

  Pane_58dc00(a1, a2);
  v4 = *(_QWORD*)(a1 + 216);
  if (v4 != 0 && (*(_BYTE*)(v4 + 73) & 1) == 0) {
    Material_5882b0(v4, a2);
    v5 = *(void (****)(_QWORD))(a1 + 216);
    if (v5 != nullptr) {
      (**v5)(*(_QWORD*)(a1 + 216));
      GameRoutine_5791a0((__int64)v5);
    }
  }
  result = a1 + 240;
  v7 = *(unsigned __int8*)(a1 + 240);
  *(_QWORD*)(a1 + 216) = 0;
  if (v7 <= 3) {
    return DynamicRenderingTexture_575e40();
  }
  v8 = *(_QWORD*)(a1 + 248);
  if (v8 != 0) {
    v9 = GameRoutine_5b2430(*(_QWORD*)(v8 + 24));
    if (v9 != 0) {
      GameRoutine_5791a0(v9);
    }
    v10 = GameRoutine_5b2420(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24LL));
    if (v10 != 0) {
      GameRoutine_5791a0(v10);
    }
    result = *(_QWORD*)(a1 + 248);
    v11 = *(void (****)(_QWORD))(result + 24);
    if (v11 == nullptr ||
        ((**v11)(*(_QWORD*)(result + 24)), GameRoutine_5791a0((__int64)v11),
         (result = *(_QWORD*)(a1 + 248)) != 0)) {
      result = GameRoutine_5791a0(result);
    }
    *(_QWORD*)(a1 + 248) = 0;
  }
  return result;
}

__int64 Picture_Unknown11(_QWORD* a1, int a2)
{
  (*(void (**)(_QWORD*))(*a1 + 80LL))(a1);
  if (a2 != 0) {
    return 0;
  }
  else {
    return a1[27];
  }
}

__int64 Picture_Unknown4(__int64 a1, int a2)
{
  return *(unsigned int*)(a1 + 4LL * a2 + 224);
}

__int64 Picture_Unknown5(__int64 result, int a2, _DWORD* a3)
{
  *(_DWORD*)(result + 4LL * a2 + 224) = *a3;
  return result;
}

__int64 Picture_595d60(__int64 a1, __int64 a2)
{
  __int64 v2;
  int* v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 add;
  unsigned __int64 v13;
  int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;

  v2 = *(_QWORD*)(a2 + 184);
  v4 = *(int**)(a2 + 200);
  v7 = *(_QWORD*)(v2 + 112);
  v6 = *(_QWORD*)(v2 + 120);
  v8 = (v7 + GameRoutine_5b2470(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24LL)) - 1) &
       -v7;
  v9 = *v4;
  if ((*v4 & 1) != 0) {
    add = atomic_fetch_add(*((atomic_ullong* volatile*)v4 + 9), v8);
    if ((*(_BYTE*)v4 & 1) != 0) {
      v28 = *((unsigned __int64**)v4 + 9);
      v29 = atomic_load(*((unsigned __int64**)v4 + 8));
      v30 = atomic_load(v28);
      v31 = v30 + v29;
      v11 = *((_QWORD*)v4 + 3);
      if (v31 > v11) {
        goto LABEL_22;
      }
    }
    else {
      v11 = *((_QWORD*)v4 + 3);
      if (*((_QWORD*)v4 + 9) + *((_QWORD*)v4 + 8) > v11) {
        goto LABEL_22;
      }
    }
    v10 = add + v8;
  LABEL_8:
    v13 = v11 - v10;
    *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8LL) = v11 - v10;
    v14 = *(int**)(a2 + 200);
    v15 = *((_QWORD*)v14 + 7);
    if (v15 == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v10 = *((_QWORD*)v4 + 9) + v8;
  *((_QWORD*)v4 + 9) = v10;
  if ((v9 & 2) != 0) {
    v13 = *((_QWORD*)v4 + 3) - v10;
    *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8LL) = v13;
    v14 = *(int**)(a2 + 200);
    v15 = *((_QWORD*)v14 + 7);
    if (v15 == 0) {
      goto LABEL_10;
    }
  LABEL_9:
    v16 = GameRoutine_5b2430(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24LL));
    v17 = GameRoutine_5b2470(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24LL));
    memcpy(v15 + v13, v16, v17);
    v14 = *(int**)(a2 + 200);
    goto LABEL_10;
  }
  v11 = *((_QWORD*)v4 + 3);
  if (*((_QWORD*)v4 + 8) + v10 <= v11) {
    goto LABEL_8;
  }

LABEL_22:
  v13 = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 248) + 8LL) = 0;
  v14 = *(int**)(a2 + 200);
  v15 = *((_QWORD*)v14 + 7);
  if (v15 != 0) {
    goto LABEL_9;
  }

LABEL_10:
  result = GameRoutine_5b2480(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24LL));
  v19 = (v6 + result - 1) & -v6;
  v20 = *v14;
  if ((*v14 & 1) != 0) {
    v23 = atomic_fetch_add(*((atomic_ullong* volatile*)v14 + 9), v19);
    if ((*(_BYTE*)v14 & 1) != 0) {
      v32 = *((unsigned __int64**)v14 + 9);
      v33 = atomic_load(*((unsigned __int64**)v14 + 8));
      v34 = atomic_load(v32);
      v35 = v34 + v33;
      v22 = *((_QWORD*)v14 + 3);
      if (v35 > v22) {
        goto LABEL_27;
      }
    }
    else {
      v22 = *((_QWORD*)v14 + 3);
      if (*((_QWORD*)v14 + 9) + *((_QWORD*)v14 + 8) > v22) {
        goto LABEL_27;
      }
    }
    v21 = v23 + v19;
  LABEL_17:
    v24 = v22 - v21;
    *(_QWORD*)(*(_QWORD*)(a1 + 248) + 16LL) = v22 - v21;
    v25 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
    if (v25 == 0) {
      return result;
    }
    goto LABEL_18;
  }
  v21 = *((_QWORD*)v14 + 9) + v19;
  *((_QWORD*)v14 + 9) = v21;
  if ((v20 & 2) == 0) {
    v22 = *((_QWORD*)v14 + 3);
    if (*((_QWORD*)v14 + 8) + v21 > v22) {
    LABEL_27:
      v24 = 0;
      *(_QWORD*)(*(_QWORD*)(a1 + 248) + 16LL) = 0;
      v25 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
      if (v25 == 0) {
        return result;
      }
    LABEL_18:
      v26 = GameRoutine_5b2420(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24LL));
      v27 = GameRoutine_5b2480(*(_QWORD*)(*(_QWORD*)(a1 + 248) + 24LL));
      return memcpy(v25 + v24, v26, v27);
    }
    goto LABEL_17;
  }
  v24 = *((_QWORD*)v14 + 3) - v21;
  *(_QWORD*)(*(_QWORD*)(a1 + 248) + 16LL) = v24;
  v25 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
  if (v25 != 0) {
    goto LABEL_18;
  }
  return result;
}

__int64 Picture_596c30(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;

  DynamicRenderingTexture_576440(a3, a2, *(_QWORD*)(a1 + 216));
  GameRoutine_58aa70(*(_QWORD*)(a1 + 216), a2, a3);
  if ((unsigned int)*(unsigned __int8*)(a4 + 10) - 1 > 2) {
    v10 = 0;
  }
  else {
    v10 = GameData_1b13dd4[(unsigned __int8)(*(_BYTE*)(a4 + 10) - 1)];
  }
  v11 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), v10);
  GameRoutine_58c820(a3, a2, v11);
  v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                   16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL) + 8);
  v20 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                   16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
  v21 = v12;
  v20 += *(int*)(a5 + 12);
  v13 = *(_QWORD*)(Pane_58f8a0(a1) + 32);
  v14 = Pane_58f8a0(a1);
  GameRoutine_5fe120(a3,
                     *(unsigned int*)(*(_QWORD*)(v13 + 24) +
                                      4LL * *(unsigned __int16*)(v14 + 74)),
                     0, &v20, 560);
  v15 = *(unsigned int*)(a5 + 4);
  v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                   16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL) + 8);
  v20 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                   16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
  v21 = v16;
  v20 += *(int*)(a5 + 16);
  GameRoutine_5fe120(a3, v15, 4, &v20, 288);
  GameRoutine_5764b0(a3, a2);
  v17 = Pane_58f8a0(a1);
  GameRoutine_58c720(v17, a3, a2);
  v18 = Pane_58f8a0(a1);
  return GameRoutine_58c380(v18, a3, a2);
}

__int64 Picture_Unknown28(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;

  v4 = *(_QWORD*)(result + 216);
  if (v4 == 0 || (**(_BYTE**)(a2 + 200) & 2) != 0) {
    return result;
  }
  v6 = result;
  if (*(unsigned __int8*)(result + 240) > 3u) {
    if ((DrawInfo_576a40(a2, *(_QWORD*)(v4 + 32),
                         *(unsigned __int16*)(v4 + 74)) &
         1) != 0) {
      GameRoutine_58c810(*(_QWORD*)(v6 + 216), a3);
    }
    GameRoutine_58aa70(*(_QWORD*)(v6 + 216), a2, a3);
    v14 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                     16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
    v15 = *v14;
    v28 = v14[1];
    v16 = *(_QWORD*)(v6 + 248);
    v17 = *(_QWORD*)(v16 + 24);
    v27 = v15 + *(_QWORD*)(v16 + 8);
    v18 = GameRoutine_5b2440(v17);
    v19 = GameRoutine_5b2470(*(_QWORD*)(*(_QWORD*)(v6 + 248) + 24LL));
    GameRoutine_5fd5f0(a3, 0, &v27, v18, v19);
    *(_BYTE*)(a2 + 404) |= 0x40u;
    GameRoutine_58c1e0(*(_QWORD*)(v6 + 216), a3, a2);
    if ((*(_BYTE*)(v6 + 98) & 2) != 0) {
      Pane_590280(v6, a3, a2);
    }
    v20 = *(_QWORD*)(v6 + 248);
    v21 = *(_QWORD*)(v20 + 24);
    v22 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                     16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
    v24 = *v22;
    v23 = v22[1];
    v27 = v24 + *(_QWORD*)(v20 + 16);
    v28 = v23;
    v25 = GameRoutine_5b24a0(v21);
    v26 = GameRoutine_5b24c0(*(_QWORD*)(*(_QWORD*)(v6 + 248) + 24LL));
    return GameRoutine_5fcd30(a3, 3, v25, &v27, v26, 0);
  }
  else {
    if ((*(_BYTE*)(result + 98) & 4) != 0) {
      v7 = GameRoutine_58d820(result, 18);
      if (v7 != 0) {
        v8 = v7;
        result = GameRoutine_58d5b0(v6, 6);
        if ((*(_BYTE*)(v6 + 98) & 2) == 0 &&
            (*(_BYTE*)(result + 4) & 0x10) != 0 &&
            *(float*)(result + 220) > 0.0) {
          v9 = result;
          Picture_596c30(v6, a2, a3, result, v8);
          result = v9;
        }
        if ((*(_BYTE*)(result + 4) & 0x9F) != 0x90) {
          DynamicRenderingTexture_576440(a3, a2, *(_QWORD*)(v6 + 216));
          GameRoutine_58aa70(*(_QWORD*)(v6 + 216), a2, a3);
          v10 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                           16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
          v12 = *v10;
          v11 = v10[1];
          v27 = v12;
          v28 = v11;
          v27 = v12 + *(unsigned int*)(v8 + 8);
          v13 = *(unsigned int*)(v8 + 4);
          if ((v13 & 0x80000000) == 0) {
            GameRoutine_5fe120(a3, v13, 4, &v27, 288);
          }
          if ((*(_BYTE*)(v6 + 98) & 2) != 0) {
            Pane_590280(v6, a3, a2);
          }
          return GameRoutine_5764b0(a3, a2);
        }
        return result;
      }
      v4 = *(_QWORD*)(v6 + 216);
    }
    DynamicRenderingTexture_576440(a3, a2, v4);
    GameRoutine_58aa70(*(_QWORD*)(v6 + 216), a2, a3);
    if ((*(_BYTE*)(v6 + 98) & 2) != 0) {
      Pane_590280(v6, a3, a2);
    }
    return GameRoutine_5764b0(a3, a2);
  }
}

__int64 Picture_5b2440(__int64 a1)
{
  int v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_DWORD*)(a1 + 24);
  v2 = 12;
  if ((v1 & 1) == 0) {
    v2 = 0;
  }
  v3 = (2 * (_BYTE)v1) & 8;
  if ((*(_DWORD*)(a1 + 24) & 2) != 0) {
    v2 += 12;
  }
  return v2 + v3;
}

#pragma GCC visibility pop
