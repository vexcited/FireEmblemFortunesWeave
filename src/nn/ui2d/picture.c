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
__int64 GameRoutine_58c850(void);
extern __int64 (*nn_ui2d_Picture_vtable[])();
__int64 Picture_Destructor(_QWORD* a1);
__int64 LayoutEx_58d5b0(__int64, int);
__int64 LayoutEx_58d820(__int64, int);
__int64 Pane_58f8a0_alt1(void) __asm__("Pane_58f8a0");
__int64 Picture_596a90_alt1(__int64, __int64, __int64,
                            __int64) __asm__("Picture_596a90");
__int64 Window_5892c0(_QWORD, _QWORD);
__int64 sinf(float);
__n128 GameRoutine_59fe80_alt1(_QWORD, long double,
                               float) __asm__("GameRoutine_59fe80");
__n128 Pane_58e030(_QWORD);
float* GameRoutine_59fe80(float* result, float, float);
float Picture_5962f0_alt1(__int64, __int64, __int64,
                          long double) __asm__("Picture_5962f0");
float cosf_alt1(float) __asm__("cosf");
float sinf_alt1(float) __asm__("sinf");
long double cosf(float);
void GameRoutine_576270();
void GameRoutine_596660(__int64, __int64, char, char, int, float*, int, char,
                        long double, float, float, float);
__attribute__((swiftcall)) void Picture_Unknown8(PSEUDO_X8 x8_, __int64 a1,
                                                 int a2);
__int64 Picture_595fe0(__int64 a1, __int64 a2);
float Picture_5962f0(__int64 a1, float* a2, __int64 a3);
__int64 Picture_596820(__int64 result, __int64 a2, __int64 a3);
void Picture_596a90(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

__int64 Picture_Destructor(_QWORD* a1)
{
  *a1 = nn_ui2d_Picture_vtable;
  return GameRoutine_58c850();
}

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

__attribute__((swiftcall)) void Picture_Unknown8(PSEUDO_X8 x8_, __int64 a1,
                                                 int a2)
{
  int a3 = (int)PSEUDO_X8_VALUE(x8_);
  {
    *(unsigned __int8*)(a1 + 4LL * (a2 / 4) + (int)(a2 - (a3 & 0xFFFFFFFC)) +
                        224);
    return;
  }
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

__int64 Picture_595fe0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int128 v13;
  __int128 v14;
  float v15;
  float v16;
  float v17;
  char v18;
  int v19;
  __int64 v20;
  float v21;
  long double v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;

  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = LayoutEx_58d5b0(a1, 6),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  result = LayoutEx_58d820(a1, 18),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
  if (result != 0) {
    v6 = result;
    v7 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
    if (v7 != 0) {
      v8 = v7 + *(unsigned int*)(result + 8);
      v9 = Picture_5962f0(a1, (float*)v8, v4),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
      v10 = 0x0.0p+0f;
      v11 = 0x0.0p+0f;
      if ((*(_BYTE*)(v4 + 4) & 1) != 0) {
        v12 = *(float*)(v4 + 60);
        *(float*)(v8 + 96) = v12;
        v13 = *(_OWORD*)(a1 + 128);
        if (*(float*)&v13 == 0x0.0p+0f &&
            (v14 = *(_OWORD*)(a1 + 144), *(float*)&v14 == 0x0.0p+0f) &&
            *(float*)(a1 + 116) == 0x0.0p+0f &&
            *((float*)&v14 + 1) == 0x0.0p+0f &&
            *(float*)(a1 + 120) == 0x0.0p+0f &&
            *((float*)&v13 + 2) == 0x0.0p+0f) {
          v15 = 0x1.e848000000000p+19f;
        }
        else {
          v15 = 0x1.0000000000000p+0f / (float)(0x1.6666660000000p-1f / v12);
        }
        *(float*)(v8 + 100) = v15;
        *(_DWORD*)(v8 + 80) = *(unsigned __int8*)(v4 + 5);
        *(float*)(v8 + 112) = *(float*)(v4 + 64) / 0x1.fe00000000000p+7f;
        *(float*)(v8 + 116) = *(float*)(v4 + 68) / 0x1.fe00000000000p+7f;
        *(float*)(v8 + 120) = *(float*)(v4 + 72) / 0x1.fe00000000000p+7f;
        v11 = *(float*)(v4 + 76) / 0x1.fe00000000000p+7f;
      }
      *(float*)(v8 + 124) = v11;
      v16 = *(float*)(v4 + 104);
      v17 = *(float*)(v4 + 96);
      v18 = *(_BYTE*)(v4 + 4);
      v19 = *(unsigned __int8*)(v4 + 6);
      v20 = *(unsigned __int8*)(v4 + 7);
      v29 = *(float*)(v4 + 100);
      v30 = v16;
      if ((v18 & 2) != 0) {
        GameRoutine_59fe80(&v30, 0x0.0p+0f, 0x1.9000000000000p+6f),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
        v21 = v30;
        *(_DWORD*)(v8 + 84) = v19;
        *(float*)(v8 + 128) = (float)(v21 / v9) + 0x1.4f8b580000000p-17f;
        GameRoutine_59fe80(&v29, 0x0.0p+0f, 0x1.9000000000000p+6f),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
        v22 = cosf(v17 * 0x1.1df46a0000000p-6f),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
        *(float*)(v8 + 132) =
            (float)(*(float*)&v22 * (float)(v29 / *(float*)(a1 + 80))) +
            (float)(*(float*)&v22 * (float)(v29 / *(float*)(a1 + 80)));
        sinf(v17 * 0x1.1df46a0000000p-6f),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
        *(float*)(v8 + 136) =
            (float)-(float)(v23 * (float)(v29 / *(float*)(a1 + 84))) -
            (float)(v23 * (float)(v29 / *(float*)(a1 + 84)));
        v24 = *(float*)(v4 + 80) / 0x1.fe00000000000p+7f;
        *(_DWORD*)(v8 + 160) = 0;
        *(float*)(v8 + 144) = v24;
        v25 = *(float*)(v4 + 84);
        *(_DWORD*)(v8 + 164) = 0;
        *(float*)(v8 + 148) = v25 / 0x1.fe00000000000p+7f;
        v26 = *(float*)(v4 + 88);
        *(_DWORD*)(v8 + 168) = 0;
        *(float*)(v8 + 152) = v26 / 0x1.fe00000000000p+7f;
        v27 = *(float*)(v4 + 92);
        *(_DWORD*)(v8 + 172) = 0;
        *(_DWORD*)(v8 + 160 + 4 * v20) = 1065353216;
        *(_DWORD*)(v8 + 140) = 0;
        v10 = v27 / 0x1.fe00000000000p+7f;
      }
      *(float*)(v8 + 156) = v10;
      v28 = 0x0.0p+0f;
      if ((*(_BYTE*)(v4 + 4) & 4) != 0) {
        *(_DWORD*)(v8 + 88) = *(unsigned __int8*)(v4 + 8);
        *(float*)(v8 + 176) = *(float*)(v4 + 108) / 0x1.fe00000000000p+7f;
        *(float*)(v8 + 180) = *(float*)(v4 + 112) / 0x1.fe00000000000p+7f;
        *(float*)(v8 + 184) = *(float*)(v4 + 116) / 0x1.fe00000000000p+7f;
        v28 = *(float*)(v4 + 120) / 0x1.fe00000000000p+7f;
      }
      *(float*)(v8 + 188) = v28;
      result = Picture_596820(a1, v8, v4),
      v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    if ((*(_BYTE*)(v4 + 4) & 0x10) != 0) {
      return Picture_596a90_alt1(a1, a2, v4, v6);
    }
  }
  return result;
}

float Picture_5962f0(__int64 a1, float* a2, __int64 a3)
{

#pragma clang fp contract(off)
  float v5;
  float v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  float v13;
  float v14;
  unsigned __int64 v15;
  float v16;
  float v17;
  float v18;
  unsigned __int64 v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  float v28;

  v5 = *(float*)(a1 + 80) * 0x1.0000000000000p-1f;
  v6 = *(float*)(a1 + 84) * 0x1.0000000000000p-1f;
  v7 = a3 + 44;
  v8 = 0x1.0000000000000p+0f / v5;
  v9 = 0x1.0000000000000p+0f / v6;
  v28 = *(float*)(a3 + 44);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v5);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v6);
  *a2 = 0x1.0000000000000p+0f / v5;
  a2[1] = 0x1.0000000000000p+0f / v6;
  if (*(char*)(a3 + 4) <= -1) {
    v10 = 0x1.0000000000000p+0f;
  }
  else {
    v10 = 0x0.0p+0f;
  }
  a2[2] = v10;
  a2[5] = v28;
  v11 = a3 + 28;
  a2[4] = *(float*)(a3 + 28);
  GameRoutine_59fe80(a2 + 4, 0x1.0000000000000p-1f, 0x1.8000000000000p+1f);
  if ((float)(v28 / v5) == 0x0.0p+0f) {
    v12 = 0x1.fffeb00000000p-1f;
  }
  else {
    v12 = 0x1.0000000000000p+0f - (float)(v28 / v5);
  }
  a2[6] = v12;
  GameRoutine_59fe80(a2 + 6, 0x0.0p+0f, 0x1.0000000000000p+0f);
  if ((float)(v28 / v6) == 0x0.0p+0f) {
    v13 = 0x1.fffeb00000000p-1f;
  }
  else {
    v13 = 0x1.0000000000000p+0f - (float)(v28 / v6);
  }
  a2[7] = v13;
  GameRoutine_59fe80(a2 + 7, 0x0.0p+0f, 0x1.0000000000000p+0f);
  v14 = v28;
  v15 = ((unsigned __int64)*(unsigned __int8*)(a3 + 4) >> 4) & 4;
  v28 = *(float*)(v7 + v15);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v5);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v6);
  *a2 = v8;
  a2[1] = v9;
  if (*(char*)(a3 + 4) <= -1) {
    v16 = 0x1.0000000000000p+0f;
  }
  else {
    v16 = 0x0.0p+0f;
  }
  a2[2] = v16;
  a2[9] = v28;
  a2[8] = *(float*)(v11 + v15);
  GameRoutine_59fe80(a2 + 8, 0x1.0000000000000p-1f, 0x1.8000000000000p+1f);
  if ((float)(v28 / v5) == 0x0.0p+0f) {
    v17 = 0x1.fffeb00000000p-1f;
  }
  else {
    v17 = 0x1.0000000000000p+0f - (float)(v28 / v5);
  }
  a2[10] = v17;
  GameRoutine_59fe80(a2 + 10, 0x0.0p+0f, 0x1.0000000000000p+0f);
  if ((float)(v28 / v6) == 0x0.0p+0f) {
    v18 = 0x1.fffeb00000000p-1f;
  }
  else {
    v18 = 0x1.0000000000000p+0f - (float)(v28 / v6);
  }
  a2[11] = v18;
  GameRoutine_59fe80(a2 + 11, 0x0.0p+0f, 0x1.0000000000000p+0f);
  v19 = ((unsigned __int64)*(unsigned __int8*)(a3 + 4) >> 3) & 8;
  v28 = *(float*)(v7 + v19);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v5);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v6);
  *a2 = v8;
  a2[1] = v9;
  if (*(char*)(a3 + 4) <= -1) {
    v20 = 0x1.0000000000000p+0f;
  }
  else {
    v20 = 0x0.0p+0f;
  }
  a2[2] = v20;
  a2[13] = v28;
  a2[12] = *(float*)(v11 + v19);
  GameRoutine_59fe80(a2 + 12, 0x1.0000000000000p-1f, 0x1.8000000000000p+1f);
  if ((float)(v28 / v5) == 0x0.0p+0f) {
    v21 = 0x1.fffeb00000000p-1f;
  }
  else {
    v21 = 0x1.0000000000000p+0f - (float)(v28 / v5);
  }
  a2[14] = v21;
  GameRoutine_59fe80(a2 + 14, 0x0.0p+0f, 0x1.0000000000000p+0f);
  if ((float)(v28 / v6) == 0x0.0p+0f) {
    v22 = 0x1.fffeb00000000p-1f;
  }
  else {
    v22 = 0x1.0000000000000p+0f - (float)(v28 / v6);
  }
  a2[15] = v22;
  GameRoutine_59fe80(a2 + 15, 0x0.0p+0f, 0x1.0000000000000p+0f);
  if ((*(_BYTE*)(a3 + 4) & 0x40) != 0) {
    v23 = 12;
  }
  else {
    v23 = 0;
  }
  v28 = *(float*)(v7 + v23);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v5);
  GameRoutine_59fe80(&v28, 0x0.0p+0f, v6);
  *a2 = v8;
  a2[1] = v9;
  if (*(char*)(a3 + 4) <= -1) {
    v24 = 0x1.0000000000000p+0f;
  }
  else {
    v24 = 0x0.0p+0f;
  }
  a2[2] = v24;
  a2[17] = v28;
  a2[16] = *(float*)(v11 + v23);
  GameRoutine_59fe80(a2 + 16, 0x1.0000000000000p-1f, 0x1.8000000000000p+1f);
  if ((float)(v28 / v5) == 0x0.0p+0f) {
    v25 = 0x1.fffeb00000000p-1f;
  }
  else {
    v25 = 0x1.0000000000000p+0f - (float)(v28 / v5);
  }
  a2[18] = v25;
  GameRoutine_59fe80(a2 + 18, 0x0.0p+0f, 0x1.0000000000000p+0f);
  if ((float)(v28 / v6) == 0x0.0p+0f) {
    v26 = 0x1.fffeb00000000p-1f;
  }
  else {
    v26 = 0x1.0000000000000p+0f - (float)(v28 / v6);
  }
  a2[19] = v26;
  GameRoutine_59fe80(a2 + 19, 0x0.0p+0f, 0x1.0000000000000p+0f);
  return v14;
}

__int64 Picture_596820(__int64 result, __int64 a2, __int64 a3)
{
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float* v15;
  float v16;
  float* v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  long double v28;
  float v29;
  __int64 v30;
  float v32;

  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((*(_BYTE*)(a3 + 4) & 8) != 0) {
    v6 = 0x0.0p+0f;
    v7 = a3 + 124;
    v8 = a3 + 140;
    v9 = a3 + 144;
    v10 = a3 + 148;
    v11 = a3 + 152;
    v30 = result;
    v12 = 0;
    *(_DWORD*)(a2 + 92) = *(unsigned __int8*)(a3 + 9);
    v13 = -64;
    v14 = 0xFFFFFFFFLL;
    do {
      v32 = *(float*)(v7 + 4 * v12);
      GameRoutine_59fe80(&v32, 0x0.0p+0f, 0x1.0000000000000p+0f),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((v14 & 0x80000000) != 0) {
        v16 = v32;
        v17 = (float*)(a2 + v13);
        if (v32 >= v6) {
          v6 = v32;
        }
        *(float*)(a2 + 4 * v12 + 192) = v6;
        v17[68] = *(float*)(v7 + v13 + 80) / 0x1.fe00000000000p+7f;
        v17[69] = *(float*)(v7 + v13 + 84) / 0x1.fe00000000000p+7f;
        v17[70] = *(float*)(v7 + v13 + 88) / 0x1.fe00000000000p+7f;
        v17[71] = *(float*)(v7 + v13 + 92) / 0x1.fe00000000000p+7f;
        if (v16 >= 0x1.0000000000000p+0f) {
          v14 = (unsigned int)v12;
        }
      }
      else {
        *(_DWORD*)(a2 + 4 * v12 + 192) = 1065353216;
        v15 = (float*)(a2 + v13);
        v15[68] = *(float*)(v8 + 16 * v14) / 0x1.fe00000000000p+7f;
        v15[69] = *(float*)(v9 + 16 * v14) / 0x1.fe00000000000p+7f;
        v15[70] = *(float*)(v10 + 16 * v14) / 0x1.fe00000000000p+7f;
        v15[71] = *(float*)(v11 + 16 * v14) / 0x1.fe00000000000p+7f;
      }
      ++v12;
      v13 += 16;
    } while (v12 != 4);
    v18 = *(float*)(a3 + 204);
    v19 =
        (float)(fabsf(
                    (float)((float)(v18 -
                                    (float)((float)(int)(float)(v18 /
                                                                0x1.6800000000000p+6f) *
                                            0x1.6800000000000p+6f)) /
                            0x1.6800000000000p+6f) +
                    -0x1.0000000000000p-1f) *
                -0x1.0000000000000p+1f) +
        0x1.0000000000000p+0f;
    v20 = (float)(v19 * 0x1.a8279a0000000p-2f) + 0x1.0000000000000p+0f;
    v21 = *(float*)(v30 + 80);
    v22 = *(float*)(v30 + 84);
    v23 = v21 / v22;
    v24 = v22 / v21;
    v25 = v18 * 0x1.1df46a0000000p-6f;
    if (v23 >= 0x1.0000000000000p+0f) {
      v26 = v23;
    }
    else {
      v26 = 0x1.0000000000000p+0f;
    }
    if (v24 >= 0x1.0000000000000p+0f) {
      v27 = v24;
    }
    else {
      v27 = 0x1.0000000000000p+0f;
    }
    v28 = cosf(v25),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w"));
    *(float*)(a2 + 272) =
        *(float*)&v28 /
        (float)(v20 /
                (float)((float)((float)(v26 + -0x1.0000000000000p+0f) * v19) +
                        0x1.0000000000000p+0f));
    result = sinf(*(float*)(a3 + 204) * 0x1.1df46a0000000p-6f),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(float, "s0", "=w"));
    v5 = 276;
    v4 = (float)-v29 /
         (float)(v20 /
                 (float)((float)((float)(v27 + -0x1.0000000000000p+0f) * v19) +
                         0x1.0000000000000p+0f));
  }
  else {
    v4 = -0x1.0000000000000p+0f;
    *(_QWORD*)(a2 + 192) = 0xBF800000BF800000LL;
    *(_DWORD*)(a2 + 200) = -1082130432;
    v5 = 204;
  }
  *(float*)(a2 + v5) = v4;
  return result;
}

void Picture_596a90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  long double v20;
  __int64 v21;
  long double v22;
  float v23;
  float v24;
  float v25;

  v8 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + *(int*)(a4 + 12);
  v9 = Pane_58f8a0_alt1();
  v10 = Window_5892c0(v9, a2);
  memcpy(v8, v10, 560);
  *(__n128*)&v11 = Pane_58e030(a1);
  v12 = *(float*)&v11;
  v24 = *(float*)&v11;
  v25 = v13;
  v14 = v13;
  v15 = 0.0;
  v23 = *(float*)(a3 + 228);
  *(_QWORD*)&v11 = 0;
  GameRoutine_59fe80_alt1(&v23, v11, 0x1.9000000000000p+6);
  v16 = 0.0;
  if (*(float*)(a3 + 228) > 0.0) {
    v17 = *(float*)(a3 + 224) * 0x1.1df46a0000000p-6;
    v18 = cosf_alt1(v17);
    v16 = -(float)(v18 * v23);
    v24 = v12 - (float)(v18 * v23);
    v19 = sinf_alt1(v17);
    v15 = -(float)(v19 * v23);
    v25 = v14 - (float)(v19 * v23);
  }
  v20 = ((long double (*)(__int64, __int64, float*, __int64, _QWORD, _QWORD,
                          float, float))GameRoutine_576270)(
      a2, v8, &v24, a1 + 80, *(unsigned __int8*)(a1 + 241),
      *(_QWORD*)(a1 + 248), v16 / *(float*)(a1 + 80),
      (float)-v15 / *(float*)(a1 + 84));
  *(_QWORD*)(v8 + 208) = 0x3F8000003F800000LL;
  *(_QWORD*)(v8 + 216) = 0x3F8000003F800000LL;
  v21 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL) + *(int*)(a4 + 16);
  *(float*)&v22 = Picture_5962f0_alt1(a1, v21, a3, v20);
  *(_DWORD*)(v21 + 124) = 0;
  GameRoutine_596660(a1, v21, (*(_BYTE*)(a3 + 4) & 0x10) != 0,
                     (*(_BYTE*)(a3 + 4) & 0x20) != 0,
                     *(unsigned __int8*)(a3 + 10), (float*)(a3 + 208),
                     *(unsigned __int8*)(a3 + 11), 1, v22, *(float*)(a3 + 232),
                     *(float*)(a3 + 224), *(float*)(a3 + 228));
  *(_QWORD*)(v21 + 188) = 0xBF80000000000000LL;
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
