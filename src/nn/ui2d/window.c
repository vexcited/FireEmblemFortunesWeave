#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_576a40(_QWORD, _QWORD, _QWORD);
__int64 DynamicRenderingTexture_575e40(_QWORD);
__int64 DynamicRenderingTexture_576440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5716e0(_QWORD, _QWORD);
__int64 GameRoutine_5764b0(_QWORD, _QWORD);
__int64 GameRoutine_576a20(_QWORD, _QWORD);
__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_5876c0(_QWORD, _QWORD);
__int64 GameRoutine_5892c0(_QWORD, _QWORD);
__int64 GameRoutine_58a130(_QWORD, _QWORD);
__int64 GameRoutine_58aa70(__int64 result, __int64, __int64);
__int64 GameRoutine_58bda0(_QWORD, _QWORD);
__int64 GameRoutine_58c1e0(__int64, __int64, __int64);
__int64 GameRoutine_58c380(__int64, __int64, __int64);
__int64 GameRoutine_58c400(__int64 result, __int64, __int64);
__int64 GameRoutine_58c480(__int64 result, __int64, __int64);
__int64 GameRoutine_58c720(__int64, __int64, __int64);
__int64 GameRoutine_58c810(_QWORD, _QWORD);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58e740(void);
__int64 GameRoutine_58fe20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58ffc0(_QWORD, _QWORD);
__int64 GameRoutine_5ae2f0(__int64 result);
__int64 GameRoutine_5af420(_QWORD, _QWORD);
__int64 GameRoutine_5af7e0(_QWORD, _QWORD);
__int64 GameRoutine_5afb30(_QWORD, _QWORD);
__int64 GameRoutine_5fcd30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Material_5882b0(__int64, __int64);
__int64 Pane_58dc00(__int64 result, __int64);
__int64 Pane_58fd20(_QWORD);
__int64 Pane_58fef0(_QWORD, _QWORD);
__int64 Pane_590280(__int64, __int64, __int64);
extern _DWORD GameData_1b14170[3];
__int64 Window_Unknown3(__int64 a1, __int64 a2);
__int64 Window_Unknown4(__int64 a1, int a2);
__int64 Window_Unknown5(__int64 result, int a2, _DWORD* a3);
__int64 Window_Unknown10(__int64 a1);
__int64 Window_Unknown11(__int64 a1, int a2);
__int64 Window_Unknown17(__int64 a1, __int64 a2, char a3);
__int64 Window_Unknown26(__int64 a1, _QWORD* a2);
__int64 Window_5afc20(__int64 result, __int64 a2, __int64 a3);
__int64 Window_5afee0(__int64 result, __int64 a2, __int64 a3);
__int64 Window_Unknown28(__int64 result, __int64 a2, __int64 a3);
__int64 GameRoutine_58c850(void);
extern __int64 (*nn_ui2d_Window_vtable[])();
__int64 Window_Destructor(_QWORD* a1);
__int64 DynamicRenderingTexture_576230(__int64, _DWORD*, _DWORD*, _DWORD*);
__int64 DynamicRenderingTexture_576260(char*, __int64, _DWORD*, _DWORD*, int,
                                       __int64);
__int64 Pane_58fa40(__int64);
__int64 Pane_58fa70(__int64);
__int64 Window_5892c0(__int64, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_2136398;
extern _UNKNOWN* GameData_21363a0;
__attribute__((swiftcall)) void Window_Unknown8(PSEUDO_X8 x8_, __int64 a1,
                                                int a2);
unsigned __int8* Window_5b0080(unsigned __int8* result, __int64 a2, __int64 a3,
                               __int64 a4, float* a5, unsigned int a6);
__int64 Window_5b0760(__int64 result, __int64 a2, unsigned __int64* a3,
                      __int64 a4, float* a5, unsigned int a6);
__int64 Window_5b10d0(__int64 a1, char* a2, float* a3, float* a4);
unsigned __int8* Window_5b11a0(unsigned __int8* result, __int64 a2, __int64 a3,
                               __int64 a4, float* a5, unsigned int a6);
unsigned __int8* Window_5b1a80(unsigned __int8* result, __int64 a2, __int64 a3,
                               __int64 a4, float* a5, unsigned int a6);
__int64 DrawInfo_576a40_alt1(__int64, __int64,
                             unsigned __int16) __asm__("DrawInfo_576a40");
__int64 DynamicRenderingTexture_576440_alt1(__int64, __int64, __int64) __asm__(
    "DynamicRenderingTexture_576440");
__int64 GameRoutine_5764b0_alt1(__int64, __int64) __asm__("GameRoutine_5764b0");
__int64 GameRoutine_576a20_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_576a20");
__int64 GameRoutine_58c810_alt1(__int64, __int64) __asm__("GameRoutine_58c810");
__int64 GameRoutine_5fcd30_alt1(__int64, unsigned int, unsigned int, _QWORD*,
                                unsigned int,
                                unsigned int) __asm__("GameRoutine_5fcd30");
__int64 GameRoutine_5fe120_alt1(__int64, unsigned int, unsigned int, _QWORD*,
                                __int64) __asm__("GameRoutine_5fe120");
__int64 Window_58aa70(__int64 result, __int64, __int64);
__int64 Window_58c380(__int64, __int64, __int64);
__int64 Window_58c400(__int64 result, __int64, __int64);
__int64 Window_58c480(__int64 result, __int64, __int64);
__int64 Window_58c720(__int64, __int64, __int64);
__int64 Window_5b0760_alt1(__int64 result, __int64, __int64*, __int64, float*,
                           unsigned int) __asm__("Window_5b0760");
__int64 Window_5b0c00(__int64 result, __int64, float*, __int64, float*,
                      unsigned int);
__int64 Window_5b1ee0(__int64, __int64, __int64, __int64, float*, unsigned int);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern _UNKNOWN* GameData_21363b8;
extern _UNKNOWN* GameData_21363c0;
float Pane_58e030(__int64);
void Window_5af420(__int64 a1, char* a2, float a3);
void Window_5af7e0(__int64 a1, char* a2, float a3);
void Window_5afb30(__int64 a1, __int64 a2, float a3);
__int64 Window_5b1600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float* a5,
                      unsigned int a6);

__int64 Window_Destructor(_QWORD* a1)
{
  *a1 = nn_ui2d_Window_vtable;
  return GameRoutine_58c850();
}

__int64 Window_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);

  Pane_58dc00(a1, a2);
  v4 = *(_QWORD*)(a1 + 288);
  if (v4 != 0) {
    GameRoutine_5791a0(v4);
  }
  LODWORD(v5) = *(char*)(a1 + 265);
  if ((int)v5 >= 1) {
    v6 = 8;
    v7 = 0;
    do {
      Material_5882b0(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v6), a2);
      v5 = *(char*)(a1 + 265);
      ++v7;
      v6 += 16;
    } while (v7 < v5);
  }
  v8 = *(_QWORD*)(a1 + 272);
  if (v8 != 0) {
    v9 = (char)v5;
    if ((char)v5 >= 1) {
      v10 = *(_QWORD*)(a1 + 272);
      do {
        GameRoutine_5ae2f0(v10);
        --v9;
        v10 += 16;
      } while (v9 != 0);
    }
    GameRoutine_5791a0(v8);
  }
  v11 = *(_QWORD*)(a1 + 280);
  if (v11 != 0 && (*(_BYTE*)(v11 + 73) & 1) == 0) {
    Material_5882b0(v11, a2);
    v12 = *(void (****)(_QWORD))(a1 + 280);
    if (v12 != nullptr) {
      (**v12)(*(_QWORD*)(a1 + 280));
      GameRoutine_5791a0((__int64)v12);
    }
  }
  *(_QWORD*)(a1 + 280) = 0;
  return DynamicRenderingTexture_575e40(a1 + 248);
}

__int64 Window_Unknown4(__int64 a1, int a2)
{
  return *(unsigned int*)(a1 + 4LL * a2 + 232);
}

__int64 Window_Unknown5(__int64 result, int a2, _DWORD* a3)
{
  *(_DWORD*)(result + 4LL * a2 + 232) = *a3;
  return result;
}

__attribute__((swiftcall)) void Window_Unknown8(PSEUDO_X8 x8_, __int64 a1,
                                                int a2)
{
  int a3 = (int)PSEUDO_X8_VALUE(x8_);
  {
    *(unsigned __int8*)(a1 + 4LL * (a2 / 4) + (int)(a2 - (a3 & 0xFFFFFFFC)) +
                        232);
    return;
  }
}

__int64 Window_Unknown10(__int64 a1)
{
  return (unsigned int)*(unsigned __int8*)(a1 + 265) + 1;
}

__int64 Window_Unknown11(__int64 a1, int a2)
{
  (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  if (a2 == 0) {
    return *(_QWORD*)(a1 + 280);
  }
  if (a2 <= *(char*)(a1 + 265)) {
    return *(_QWORD*)(*(_QWORD*)(a1 + 272) + 16LL * (unsigned int)(a2 - 1) + 8);
  }
  return 0;
}

__int64 Window_Unknown17(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = *(_QWORD*)(a1 + 280);
  if (v3 != 0 && (GameRoutine_5716e0(*(_QWORD*)(v3 + 40), a2) & 1) != 0) {
    return *(_QWORD*)(a1 + 280);
  }
  if (*(char*)(a1 + 265) < 1) {
  LABEL_9:
    if ((a3 & 1) == 0) {
      return 0;
    }
    v10 = a1 + 32;
    v11 = *(_QWORD*)(a1 + 40);
    if (v11 == v10) {
      return 0;
    }
    else {
      while (1) {
        result = (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)(v11 - 8) + 136LL))(v11 - 8, a2, 1);
        if (result != 0) {
          break;
        }
        v11 = *(_QWORD*)(v11 + 8);
        if (v11 == v10) {
          return 0;
        }
      }
    }
  }
  else {
    v8 = 0;
    v9 = 8;
    while ((GameRoutine_5716e0(
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v9) + 40LL), a2) &
            1) == 0) {
      ++v8;
      v9 += 16;
      if (v8 >= *(char*)(a1 + 265)) {
        goto LABEL_9;
      }
    }
    return *(_QWORD*)(*(_QWORD*)(a1 + 272) + v9);
  }
  return result;
}

__int64 Window_Unknown26(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  unsigned __int64 v18;
  __int128 v19;
  __int64 v20;
  __int128 v21;
  __int128 v22;
  _OWORD* v23;
  __int128 v24;
  __int128 v25;
  __int64 (*v26)(_QWORD*, __int64, _QWORD);
  unsigned int v27;
  __int64 v28;
  unsigned __int64* v29;
  unsigned __int64* v30;
  __int64 v31;
  unsigned __int64* v32;
  unsigned __int64* v33;
  unsigned __int64* v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;

  GameRoutine_58e740();
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 248LL))(a1, a2);
  result = Pane_58fd20(a1);
  if ((result & 1) != 0) {
    return result;
  }
  GameRoutine_58bda0(*(_QWORD*)(a1 + 280), a2);
  GameRoutine_5876c0(*(_QWORD*)(a1 + 280), a2);
  if (*(char*)(a1 + 265) >= 1) {
    v5 = 8;
    v6 = 0;
    do {
      GameRoutine_58bda0(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v5), a2);
      GameRoutine_5876c0(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v5), a2);
      ++v6;
      v5 += 16;
    } while (v6 < *(char*)(a1 + 265));
  }
  result = GameRoutine_5892c0(*(_QWORD*)(a1 + 280), a2);
  if (result != 0) {
    result = GameRoutine_58a130(*(_QWORD*)(a1 + 280), a2);
    if (result != 0) {
      v7 = *(unsigned __int8*)(a1 + 264);
      if (v7 != 2) {
        if (v7 == 1) {
          result = GameRoutine_5af7e0(a1, a2);
        }
        else if (*(_BYTE*)(a1 + 264) == 0) {
          result = GameRoutine_5af420(a1, a2);
          if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
          LABEL_29:
            v26 = (__int64 (*)(_QWORD*, __int64, _QWORD))a2[45];
            if (v26 != nullptr) {
              return v26(a2, a1, a2[46]);
            }
            return result;
          }
        LABEL_21:
          GameRoutine_58ffc0(a1, a2);
          v41 = 0u;
          v40 = 0u;
          v39 = 0u;
          v38 = 0u;
          Pane_58fef0(a1, &v38);
          v37 = 0u;
          v36 = 0u;
          v35 = 0u;
          result = GameRoutine_58fe20(a1, &v35, a2);
          if (*(char*)(a1 + 265) >= 1) {
            v11 = 8;
            v12 = 0;
            do {
              result = GameRoutine_5892c0(
                  *(_QWORD*)(*(_QWORD*)(a1 + 272) + v11), a2);
              v13 = v39;
              v14 = v40;
              v15 = v41;
              ++v12;
              v11 += 16;
              *(_OWORD*)result = v38;
              *(_OWORD*)(result + 16) = v13;
              *(_OWORD*)(result + 32) = v14;
              *(_OWORD*)(result + 48) = v15;
              v16 = v36;
              v17 = v37;
              *(_OWORD*)(result + 64) = v35;
              *(_OWORD*)(result + 80) = v16;
              *(_OWORD*)(result + 96) = v17;
            } while (v12 < *(char*)(a1 + 265));
          }
          if (*(_DWORD*)(a1 + 296) != 0) {
            v18 = 0;
            do {
              v19 = v39;
              v20 = *(unsigned int*)(*(_QWORD*)(a1 + 288) + 4 * v18);
              v21 = v40;
              v22 = v41;
              ++v18;
              v23 = (_OWORD*)(*(_QWORD*)(a2[25] + 56LL) + v20);
              *v23 = v38;
              v23[1] = v19;
              v23[2] = v21;
              v23[3] = v22;
              v24 = v36;
              v25 = v37;
              v23[4] = v35;
              v23[5] = v24;
              v23[6] = v25;
            } while (v18 < *(unsigned int*)(a1 + 296));
          }
          goto LABEL_29;
        }
        if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
          goto LABEL_29;
        }
        goto LABEL_21;
      }
      result = GameRoutine_5afb30(a1, a2);
      if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
        goto LABEL_29;
      }
      goto LABEL_21;
    }
  }
  if ((*(_BYTE*)a2[25] & 2) != 0 && *(_BYTE*)(a1 + 265) == 1) {
    v8 = *(unsigned __int8*)(a1 + 264);
    if (v8 <= 2) {
      v9 = (*(_QWORD*)(a2[23] + 104LL) + 559LL) & -*(_QWORD*)(a2[23] + 104LL);
      if (v8 - 1 >= 2) {
        v27 = GameData_1b14170[*(unsigned __int8*)(a1 + 264)] & 0xFFFFFFFE;
        do {
          v28 = a2[25];
          if ((*(_BYTE*)v28 & 1) != 0) {
            atomic_fetch_add(*(atomic_ullong* volatile*)(v28 + 64), v9);
            if ((*(_BYTE*)v28 & 1) != 0) {
              v30 = *(unsigned __int64**)(v28 + 64);
              v29 = *(unsigned __int64**)(v28 + 72);
              atomic_load(v30);
              atomic_load(v29);
            }
          }
          else {
            *(_QWORD*)(v28 + 64) += v9;
          }
          v31 = a2[25];
          if ((*(_BYTE*)v31 & 1) != 0) {
            atomic_fetch_add(*(atomic_ullong* volatile*)(v31 + 64), v9);
            if ((*(_BYTE*)v31 & 1) != 0) {
              v33 = *(unsigned __int64**)(v31 + 64);
              v32 = *(unsigned __int64**)(v31 + 72);
              atomic_load(v33);
              atomic_load(v32);
            }
          }
          else {
            *(_QWORD*)(v31 + 64) += v9;
          }
          v27 -= 2;
        } while (v27 != 0);
      }
      v10 = a2[25];
      if ((*(_BYTE*)v10 & 1) != 0) {
        atomic_fetch_add(*(atomic_ullong* volatile*)(v10 + 64), v9);
        if ((*(_BYTE*)v10 & 1) != 0) {
          v34 = *(unsigned __int64**)(v10 + 72);
          atomic_load(*(unsigned __int64**)(v10 + 64));
          atomic_load(v34);
        }
      }
      else {
        *(_QWORD*)(v10 + 64) += v9;
      }
    }
  }
  return result;
}

void Window_5af420(__int64 a1, char* a2, float a3)
{

#pragma clang fp contract(off)
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  int v10;
  unsigned int v11;
  _BYTE* v12;
  __int64 v13;
  int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  float* v18;
  unsigned int v19;
  __int64 v20;
  int v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int16 v37;
  __int16 v38;
  struct {
    unsigned __int64 v39;
    __int64 v40;
  } v39_;
  unsigned __int64 v41;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  {

    __typeof__(a3) z_ = (__typeof__(a3)){0};

    LOWORD(z_) = *(_WORD*)(a1 + 218);

    a3 = z_;
  }
  v5 = (float)LODWORD(a3);
  {
    __typeof__(a3) z_ = (__typeof__(a3)){0};
    LOWORD(z_) = *(_WORD*)(a1 + 220);
    a3 = z_;
  }
  v6 = (float)LODWORD(a3);
  {
    __typeof__(a3) z_ = (__typeof__(a3)){0};
    LOWORD(z_) = *(_WORD*)(a1 + 222);
    a3 = z_;
  }
  v39_.v39 = __PAIR64__(LODWORD(v6), LODWORD(v5));
  v7 = (float)LODWORD(a3);
  {
    __typeof__(a3) z_ = (__typeof__(a3)){0};
    LOWORD(z_) = *(_WORD*)(a1 + 224);
    a3 = z_;
  }
  v8 = (float)LODWORD(a3);
  *(float*)&v39_.v40 = v7;
  *((float*)&v39_.v40 + 1) = (float)LODWORD(a3);
  v9 = Pane_58e030(a1),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  v10 = *(unsigned __int8*)(a1 + 265);
  v41 = __PAIR64__(v11, LODWORD(v9));
  switch (v10) {
  case 8:
    Window_5b0c00(a1, (__int64)a2, (float*)&v41, *(_QWORD*)(a1 + 272),
                  (float*)&v39_.v39, *(unsigned __int8*)(a1 + 90)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((*(_BYTE*)(a1 + 266) & 4) != 0) {
      return;
    }
    goto LABEL_8;
  case 4:
    Window_5b0760_alt1(a1, (__int64)a2, (__int64*)&v41, *(_QWORD*)(a1 + 272),
                       (float*)&v39_.v39, *(unsigned __int8*)(a1 + 90)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    break;
  case 1:
    Window_5b0080((unsigned __int8*)a1, (__int64)a2, (__int64)&v41,
                  *(_QWORD*)(a1 + 272), (float*)&v39_.v39,
                  *(unsigned __int8*)(a1 + 90)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((*(_BYTE*)(a1 + 266) & 4) != 0) {
      return;
    }
    goto LABEL_8;
  default:
    break;
  }
  if ((*(_BYTE*)(a1 + 266) & 4) != 0) {
    return;
  }
LABEL_8:
  v12 = *(_BYTE**)(a1 + 280);
  if ((v12[18] & 2) == 0 && *(unsigned __int8*)(a1 + 232) == 255 &&
      *(unsigned __int8*)(a1 + 233) == 255 &&
      *(unsigned __int8*)(a1 + 234) == 255 &&
      *(unsigned __int8*)(a1 + 235) == 255 &&
      *(unsigned __int8*)(a1 + 236) == 255 &&
      *(unsigned __int8*)(a1 + 237) == 255 &&
      *(unsigned __int8*)(a1 + 238) == 255 &&
      *(unsigned __int8*)(a1 + 239) == 255 &&
      *(unsigned __int8*)(a1 + 240) == 255 &&
      *(unsigned __int8*)(a1 + 241) == 255 &&
      *(unsigned __int8*)(a1 + 242) == 255 &&
      *(unsigned __int8*)(a1 + 243) == 255 &&
      *(unsigned __int8*)(a1 + 244) == 255 &&
      *(unsigned __int8*)(a1 + 245) == 255 &&
      *(unsigned __int8*)(a1 + 246) == 255 &&
      *(unsigned __int8*)(a1 + 247) == 255 &&
      *(unsigned __int8*)(a1 + 90) == 255) {
    v13 = Pane_58fa70(a1),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    v37 = Pane_58fa40(a1),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(_BYTE*, char*, __int64, __int64, __int64, __int64, __int64,
                 __int64, __int64, __int16, unsigned __int64, __int64))(
        *(_QWORD*)v12 + 32LL))(v12, a2, 255, 1, 1, a1 + 112, a1 + 80, a1 + 72,
                               v13, v37, v39_.v39, v39_.v40),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    v14 = 0;
  }
  else {
    v15 = *(unsigned __int8*)(a1 + 90);
    v16 = Pane_58fa70(a1),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    v38 = Pane_58fa40(a1),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(_BYTE*, char*, _QWORD, _QWORD, __int64, __int64, __int64,
                 __int64, __int64, __int16, unsigned __int64, __int64))(
        *(_QWORD*)v12 + 32LL))(v12, a2, v15, 0, 1, a1 + 112, a1 + 80, a1 + 72,
                               v16, v38, v39_.v39, v39_.v40),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
    v17 = *(_QWORD*)(a1 + 280);
    if ((*(_BYTE*)(a1 + 266) & 1) != 0) {
      v20 = Window_5892c0(v17, (__int64)a2),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
      *(_DWORD*)(v20 + 432) = *(_DWORD*)(a1 + 80);
      v21 = *(_DWORD*)(a1 + 84);
      *(float*)(v20 + 416) = v5;
      *(float*)(v20 + 420) = v6;
      *(float*)(v20 + 424) = v7;
      *(float*)(v20 + 428) = v8;
      *(_DWORD*)(v20 + 436) = v21;
      v18 = (float*)Window_5892c0(*(_QWORD*)(a1 + 280), (__int64)a2),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
      {
        __typeof__(v19) z_ = (__typeof__(v19)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 232);
        v19 = z_;
      }
      v14 = 3328;
    }
    else {
      v18 = (float*)Window_5892c0(v17, (__int64)a2),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
      {
        __typeof__(v19) z_ = (__typeof__(v19)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 232);
        v19 = z_;
      }
      v14 = 0;
    }
    v22 = (float)v19;
    v18[116] = v22;
    {
      __typeof__(v22) z_ = (__typeof__(v22)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 233);
      v22 = z_;
    }
    v23 = (float)LODWORD(v22);
    v18[117] = v23;
    {
      __typeof__(v23) z_ = (__typeof__(v23)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 234);
      v23 = z_;
    }
    v24 = (float)LODWORD(v23);
    v18[118] = v24;
    {
      __typeof__(v24) z_ = (__typeof__(v24)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 235);
      v24 = z_;
    }
    v25 = (float)LODWORD(v24);
    v18[119] = v25;
    {
      __typeof__(v25) z_ = (__typeof__(v25)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 236);
      v25 = z_;
    }
    v26 = (float)LODWORD(v25);
    v18[120] = v26;
    {
      __typeof__(v26) z_ = (__typeof__(v26)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 237);
      v26 = z_;
    }
    v27 = (float)LODWORD(v26);
    v18[121] = v27;
    {
      __typeof__(v27) z_ = (__typeof__(v27)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 238);
      v27 = z_;
    }
    v28 = (float)LODWORD(v27);
    v18[122] = v28;
    {
      __typeof__(v28) z_ = (__typeof__(v28)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 239);
      v28 = z_;
    }
    v29 = (float)LODWORD(v28);
    v18[123] = v29;
    {
      __typeof__(v29) z_ = (__typeof__(v29)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 240);
      v29 = z_;
    }
    v30 = (float)LODWORD(v29);
    v18[124] = v30;
    {
      __typeof__(v30) z_ = (__typeof__(v30)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 241);
      v30 = z_;
    }
    v31 = (float)LODWORD(v30);
    v18[125] = v31;
    {
      __typeof__(v31) z_ = (__typeof__(v31)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 242);
      v31 = z_;
    }
    v32 = (float)LODWORD(v31);
    v18[126] = v32;
    {
      __typeof__(v32) z_ = (__typeof__(v32)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 243);
      v32 = z_;
    }
    v33 = (float)LODWORD(v32);
    v18[127] = v33;
    {
      __typeof__(v33) z_ = (__typeof__(v33)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 244);
      v33 = z_;
    }
    v34 = (float)LODWORD(v33);
    v18[128] = v34;
    {
      __typeof__(v34) z_ = (__typeof__(v34)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 245);
      v34 = z_;
    }
    v35 = (float)LODWORD(v34);
    v18[129] = v35;
    {
      __typeof__(v35) z_ = (__typeof__(v35)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 246);
      v35 = z_;
    }
    v36 = (float)LODWORD(v35);
    v18[130] = v36;
    {
      __typeof__(v36) z_ = (__typeof__(v36)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 247);
      v36 = z_;
    }
    v18[131] = (float)LODWORD(v36);
  }
  *(_DWORD*)(Window_5892c0(*(_QWORD*)(a1 + 280), (__int64)a2) +
             556) = v14,
             v11 =
                 COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
  Window_5b10d0(a1, a2, (float*)&v41, (float*)&v39_.v39),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w"));
}

void Window_5af7e0(__int64 a1, char* a2, float a3)
{

#pragma clang fp contract(off)
  char v3;
  float v6;
  float v7;
  float v8;
  int v9;
  float v10;
  _BOOL4 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  float* v18;
  unsigned int v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  __int16 v36;
  float v37[2];
  _QWORD v38[2];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  {

    __typeof__(a3) z_ = (__typeof__(a3)){0};

    LOWORD(z_) = *(_WORD*)(a1 + 218);

    a3 = z_;
  }
  v3 = *(_BYTE*)(a1 + 88);
  v38[1] = 0;
  v6 = (float)LODWORD(a3);
  {
    __typeof__(a3) z_ = (__typeof__(a3)){0};
    LOWORD(z_) = *(_WORD*)(a1 + 220);
    a3 = z_;
  }
  *(_BYTE*)(a1 + 88) = v3 | 0x10;
  v7 = (float)LODWORD(a3);
  {
    __typeof__(a3) z_ = (__typeof__(a3)){0};
    LOWORD(z_) = *(_WORD*)(a1 + 222);
    a3 = z_;
  }
  v38[0] = __PAIR64__(LODWORD(v7), LODWORD(v6));
  *(float*)(a1 + 84) = (float)LODWORD(a3);
  v8 = Pane_58e030(a1),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  v9 = *(unsigned __int8*)(a1 + 265);
  v37[0] = v8;
  v37[1] = v10;
  if (v9 == 2) {
    Window_5b1600(a1, (__int64)a2, (__int64)v37, *(_QWORD*)(a1 + 272),
                  (float*)v38, *(unsigned __int8*)(a1 + 90)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((*(_BYTE*)(a1 + 266) & 4) != 0) {
      return;
    }
    goto LABEL_7;
  }
  if (v9 == 1) {
    Window_5b11a0((unsigned __int8*)a1, (__int64)a2, (__int64)v37,
                  *(_QWORD*)(a1 + 272), (float*)v38,
                  *(unsigned __int8*)(a1 + 90)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if ((*(_BYTE*)(a1 + 266) & 4) == 0) {
  LABEL_7:
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 272) + 8LL) + 18LL) & 2) != 0) {
      v11 = true;
    }
    else {
      v11 = true;
      if (*(unsigned __int8*)(a1 + 232) == 255 &&
          *(unsigned __int8*)(a1 + 233) == 255 &&
          *(unsigned __int8*)(a1 + 234) == 255 &&
          *(unsigned __int8*)(a1 + 235) == 255 &&
          *(unsigned __int8*)(a1 + 236) == 255 &&
          *(unsigned __int8*)(a1 + 237) == 255 &&
          *(unsigned __int8*)(a1 + 238) == 255 &&
          *(unsigned __int8*)(a1 + 239) == 255 &&
          *(unsigned __int8*)(a1 + 240) == 255 &&
          *(unsigned __int8*)(a1 + 241) == 255 &&
          *(unsigned __int8*)(a1 + 242) == 255 &&
          *(unsigned __int8*)(a1 + 243) == 255 &&
          *(unsigned __int8*)(a1 + 244) == 255 &&
          *(unsigned __int8*)(a1 + 245) == 255 &&
          *(unsigned __int8*)(a1 + 246) == 255 &&
          *(unsigned __int8*)(a1 + 247) == 255) {
        v11 = *(unsigned __int8*)(a1 + 90) != 255;
      }
    }
    v12 = *(_QWORD*)(a1 + 280);
    v13 = *(unsigned __int8*)(a1 + 90);
    v14 = !v11;
    v15 = Pane_58fa70(a1),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    v36 = Pane_58fa40(a1),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(__int64, char*, _QWORD, _QWORD, _QWORD, __int64, __int64,
                 __int64, __int64, __int16))(*(_QWORD*)v12 + 32LL))(
        v12, a2, v13, v14, 0, a1 + 112, a1 + 80, a1 + 72, v15, v36),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
    if ((v14 & 1) == 0) {
      v16 = Window_5892c0(*(_QWORD*)(a1 + 280), (__int64)a2),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      *(_DWORD*)(v16 + 432) = *(_DWORD*)(a1 + 80);
      v17 = *(_DWORD*)(a1 + 84);
      *(float*)(v16 + 416) = v6;
      *(float*)(v16 + 420) = v7;
      *(_QWORD*)(v16 + 424) = 0;
      *(_DWORD*)(v16 + 436) = v17;
      v18 = (float*)Window_5892c0(*(_QWORD*)(a1 + 280), (__int64)a2),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
      {
        __typeof__(v19) z_ = (__typeof__(v19)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 232);
        v19 = z_;
      }
      v20 = (float)v19;
      v18[116] = v20;
      {
        __typeof__(v20) z_ = (__typeof__(v20)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 233);
        v20 = z_;
      }
      v21 = (float)LODWORD(v20);
      v18[117] = v21;
      {
        __typeof__(v21) z_ = (__typeof__(v21)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 234);
        v21 = z_;
      }
      v22 = (float)LODWORD(v21);
      v18[118] = v22;
      {
        __typeof__(v22) z_ = (__typeof__(v22)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 235);
        v22 = z_;
      }
      v23 = (float)LODWORD(v22);
      v18[119] = v23;
      {
        __typeof__(v23) z_ = (__typeof__(v23)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 236);
        v23 = z_;
      }
      v24 = (float)LODWORD(v23);
      v18[120] = v24;
      {
        __typeof__(v24) z_ = (__typeof__(v24)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 237);
        v24 = z_;
      }
      v25 = (float)LODWORD(v24);
      v18[121] = v25;
      {
        __typeof__(v25) z_ = (__typeof__(v25)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 238);
        v25 = z_;
      }
      v26 = (float)LODWORD(v25);
      v18[122] = v26;
      {
        __typeof__(v26) z_ = (__typeof__(v26)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 239);
        v26 = z_;
      }
      v27 = (float)LODWORD(v26);
      v18[123] = v27;
      {
        __typeof__(v27) z_ = (__typeof__(v27)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 240);
        v27 = z_;
      }
      v28 = (float)LODWORD(v27);
      v18[124] = v28;
      {
        __typeof__(v28) z_ = (__typeof__(v28)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 241);
        v28 = z_;
      }
      v29 = (float)LODWORD(v28);
      v18[125] = v29;
      {
        __typeof__(v29) z_ = (__typeof__(v29)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 242);
        v29 = z_;
      }
      v30 = (float)LODWORD(v29);
      v18[126] = v30;
      {
        __typeof__(v30) z_ = (__typeof__(v30)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 243);
        v30 = z_;
      }
      v31 = (float)LODWORD(v30);
      v18[127] = v31;
      {
        __typeof__(v31) z_ = (__typeof__(v31)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 244);
        v31 = z_;
      }
      v32 = (float)LODWORD(v31);
      v18[128] = v32;
      {
        __typeof__(v32) z_ = (__typeof__(v32)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 245);
        v32 = z_;
      }
      v33 = (float)LODWORD(v32);
      v18[129] = v33;
      {
        __typeof__(v33) z_ = (__typeof__(v33)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 246);
        v33 = z_;
      }
      v34 = (float)LODWORD(v33);
      v18[130] = v34;
      {
        __typeof__(v34) z_ = (__typeof__(v34)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 247);
        v34 = z_;
      }
      v18[131] = (float)LODWORD(v34);
    }
    v35 = (*(unsigned __int8*)(a1 + 266) << 31 >> 31) & 0xD00;
    *(_DWORD*)(Window_5892c0(*(_QWORD*)(a1 + 280), (__int64)a2) +
               556) = v35,
               v10 = COERCE_AS(__typeof__(v10),
                               PSEUDO_REGISTER(float, "s1", "=w"));
    Window_5b10d0(a1, a2, v37, (float*)v38),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

void Window_5afb30(__int64 a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  float v3;
  char v6;
  float v7;
  float v8;
  int v9;
  int v10;
  _DWORD v11[2];
  _QWORD v12[2];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  {

    __typeof__(a3) z_ = (__typeof__(a3)){0};

    LOWORD(z_) = *(_WORD*)(a1 + 220);

    a3 = z_;
  }
  v3 = *(float*)(a1 + 80);
  v6 = *(_BYTE*)(a1 + 88) | 0x10;
  v12[1] = 0;
  v7 = (float)LODWORD(a3);
  *(_BYTE*)(a1 + 88) = v6;
  *(float*)v12 = v3 - v7;
  *((float*)v12 + 1) = v7;
  {
    __typeof__(v7) z_ = (__typeof__(v7)){0};
    LOWORD(z_) = *(_WORD*)(a1 + 222);
    v7 = z_;
  }
  *(float*)(a1 + 84) = (float)LODWORD(v7);
  v8 = Pane_58e030(a1),
  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  v9 = *(unsigned __int8*)(a1 + 265);
  *(float*)v11 = v8;
  v11[1] = v10;
  if (v9 == 2) {
    Window_5b1ee0(a1, a2, (__int64)v11, *(_QWORD*)(a1 + 272), (float*)v12,
                  *(unsigned __int8*)(a1 + 90)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  else if (v9 == 1) {
    Window_5b1a80((unsigned __int8*)a1, a2, (__int64)v11, *(_QWORD*)(a1 + 272),
                  (float*)v12, *(unsigned __int8*)(a1 + 90)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

__int64 Window_5afc20(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v5 = result;
  v6 = *(_QWORD*)(*(_QWORD*)(result + 272) + 8LL);
  if ((*(_BYTE*)(v6 + 20) & 3) != 0) {
    if ((DrawInfo_576a40_alt1(a2, *(_QWORD*)(v6 + 32), *(_WORD*)(v6 + 74)) &
         1) != 0) {
      GameRoutine_58c810_alt1(v6, a3);
    }
    GameRoutine_576a20_alt1(a2, a3);
    Window_58c480(v6, a3, a2);
    result = Window_58c720(v6, a3, a2);
    if ((*(_BYTE*)(v5 + 98) & 2) != 0) {
      result = Pane_590280(v5, a3, a2);
    }
    if (*(_DWORD*)(v5 + 296) != 0) {
      Window_58aa70(v6, a2, a3);
      Window_58c380(v6, a3, a2);
      Window_58c400(v6, a3, a2);
      result = GameRoutine_5764b0_alt1(a3, a2);
      if (*(_DWORD*)(v5 + 296) != 0) {
        v7 = *(_QWORD*)(a2 + 184);
        v8 = 0;
        do {
          v9 = *(_QWORD*)(a2 + 200);
          v16_.v16 = 0;
          v16_.v17 = 0;
          v10 = *(_QWORD*)(*(_QWORD*)(v9 + 16) + 16LL * *(int*)(v9 + 48) + 8);
          v16_.v16 = *(_QWORD*)(*(_QWORD*)(v9 + 16) + 16LL * *(int*)(v9 + 48));
          v16_.v17 = v10;
          v11 = *(unsigned __int16*)(v6 + 74);
          v16_.v16 += *(unsigned int*)(*(_QWORD*)(v5 + 288) + 4 * v8);
          GameRoutine_5fe120_alt1(
              a3, *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 32) + 24LL) + 4 * v11),
              0, &v16_.v16, 560);
          result =
              GameRoutine_5fcd30_alt1(a3, 3u, 1u, (_QWORD*)(v7 + 584), 6u, 0);
          ++v8;
        } while (v8 < *(unsigned int*)(v5 + 296));
      }
    }
    else {
      v12 = *(char*)(v5 + 265);
      if (v12 >= 1) {
        v13 = 8;
        v14 = 0;
        do {
          v15 = *(_QWORD*)(v5 + 272);
          result = *(_QWORD*)(v15 + v13);
          if ((*(_BYTE*)(result + 20) & 3) != 0) {
            Window_58aa70(result, a2, a3);
            Window_58c380(*(_QWORD*)(v15 + v13), a3, a2);
            Window_58c400(*(_QWORD*)(v15 + v13), a3, a2);
            result = GameRoutine_5764b0_alt1(a3, a2);
            LOBYTE(v12) = *(_BYTE*)(v5 + 265);
          }
          ++v14;
          v13 += 16;
        } while (v14 < (char)v12);
      }
    }
  }
  if ((*(_BYTE*)(v5 + 266) & 4) == 0) {
    if (*(_BYTE*)(v5 + 264) == 1) {
      Window_58aa70(*(_QWORD*)(v5 + 280), a2, a3);
      Window_58c380(*(_QWORD*)(v5 + 280), a3, a2);
      Window_58c400(*(_QWORD*)(v5 + 280), a3, a2);
    }
    else {
      if (*(_BYTE*)(v5 + 264) != 0) {
        return result;
      }
      DynamicRenderingTexture_576440_alt1(a3, a2, *(_QWORD*)(v5 + 280));
      Window_58aa70(*(_QWORD*)(v5 + 280), a2, a3);
      if ((*(_BYTE*)(v5 + 98) & 2) != 0) {
        Pane_590280(v5, a3, a2);
      }
    }
    return GameRoutine_5764b0_alt1(a3, a2);
  }
  return result;
}

__int64 Window_5afee0(__int64 result, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = *(char*)(result + 265);
  v6 = result;
  if (v3 >= 1) {
    v7 = 8;
    v8 = 0;
    do {
      v9 = *(_QWORD*)(v6 + 272);
      v10 = *(_QWORD*)(v9 + v7);
      if ((*(_BYTE*)(v10 + 20) & 3) != 0) {
        if ((DrawInfo_576a40(a2, *(_QWORD*)(v10 + 32),
                             *(unsigned __int16*)(v10 + 74)) &
             1) != 0) {
          GameRoutine_58c810(v10, a3);
        }
        GameRoutine_576a20(a2, a3);
        GameRoutine_58c1e0(*(_QWORD*)(v9 + v7), a3, a2);
        GameRoutine_58aa70(*(_QWORD*)(v9 + v7), a2, a3);
        if ((*(_BYTE*)(v6 + 98) & 2) != 0) {
          v11 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), 1);
          GameRoutine_58c820(a3, a2, v11);
        }
        result = GameRoutine_5764b0(a3, a2);
        LOBYTE(v3) = *(_BYTE*)(v6 + 265);
      }
      ++v8;
      v7 += 16;
    } while (v8 < (char)v3);
  }
  if ((*(_BYTE*)(v6 + 266) & 4) == 0) {
    DynamicRenderingTexture_576440(a3, a2, *(_QWORD*)(v6 + 280));
    GameRoutine_58aa70(*(_QWORD*)(v6 + 280), a2, a3);
    if ((*(_BYTE*)(v6 + 98) & 2) != 0) {
      Pane_590280(v6, a3, a2);
    }
    return GameRoutine_5764b0(a3, a2);
  }
  return result;
}

__int64 Window_Unknown28(__int64 result, __int64 a2, __int64 a3)
{
  if ((**(_BYTE**)(a2 + 200) & 2) == 0) {
    if ((*(_BYTE*)(result + 266) & 2 | *(_DWORD*)(result + 296)) != 0) {
      return Window_5afc20(result, a2, a3);
    }
    else {
      return Window_5afee0(result, a2, a3);
    }
  }
  return result;
}

unsigned __int8* Window_5b0080(unsigned __int8* result, __int64 a2, __int64 a3,
                               __int64 a4, float* a5, unsigned int a6)
{

#pragma clang fp contract(off)
  _BYTE* v6;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float* v17;
  unsigned int v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  __int64 v37;
  unsigned __int8 v38;
  int v39;
  _DWORD* v40;
  int* v41;
  unsigned __int64 v42;
  int v43;
  __int64 v44;
  unsigned __int64* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  int* v48;
  __int64 v49;
  _DWORD* v50;
  __int64 v51;
  int v52;
  int v53;
  float v54;
  float v55;
  float v56;
  int v57;
  __int64 v58;
  unsigned __int64* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  int* v62;
  __int64 v63;
  _DWORD* v64;
  __int64 v65;
  int v66;
  float v67;
  unsigned int v68;
  unsigned int v69;
  int v70;
  __int64 v71;
  unsigned __int64* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  _DWORD* v76;
  __int64 v77;
  int v78;
  float v79;
  float v80;
  float v81;
  __int16 v82;
  __int16 v83;
  float v84[2];
  unsigned __int64 v85;

  v6 = *(_BYTE**)(a4 + 8);
  if ((v6[20] & 3) == 0) {
    return result;
  }
  v12 = result;
  if ((v6[18] & 2) == 0 && result[232] == 255 && result[233] == 255 &&
      result[234] == 255 && result[235] == 255 && result[236] == 255 &&
      result[237] == 255 && result[238] == 255 && result[239] == 255 &&
      result[240] == 255 && result[241] == 255 && result[242] == 255 &&
      result[243] == 255 && result[244] == 255 && result[245] == 255 &&
      result[246] == 255 && result[247] == 255 && result[90] == 255) {
    v13 = Pane_58fa70((__int64)result);
    v82 = Pane_58fa40((__int64)v12);
    (*(void (**)(_BYTE*, __int64, _QWORD, __int64, _QWORD, unsigned __int8*,
                 unsigned __int8*, unsigned __int8*, __int64,
                 __int16))(*(_QWORD*)v6 + 32LL))(v6, a2, a6, 1, 0, v12 + 112,
                                                 v12 + 80, v12 + 72, v13, v82);
    if ((v12[266] & 1) != 0) {
      v14 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
      *(_DWORD*)(v14 + 432) = *((_DWORD*)v12 + 20);
      *(_DWORD*)(v14 + 436) = *((_DWORD*)v12 + 21);
      *(float*)(v14 + 416) = *a5;
      *(float*)(v14 + 420) = a5[1];
      *(float*)(v14 + 424) = a5[2];
      *(float*)(v14 + 428) = a5[3];
    }
  }
  else {
    v15 = Pane_58fa70((__int64)result);
    v83 = Pane_58fa40((__int64)v12);
    (*(void (**)(_BYTE*, __int64, _QWORD, _QWORD, _QWORD, unsigned __int8*,
                 unsigned __int8*, unsigned __int8*, __int64,
                 __int16))(*(_QWORD*)v6 + 32LL))(v6, a2, a6, 0, 0, v12 + 112,
                                                 v12 + 80, v12 + 72, v15, v83);
    if ((v12[266] & 1) != 0) {
      v16 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
      *(_DWORD*)(v16 + 432) = *((_DWORD*)v12 + 20);
      *(_DWORD*)(v16 + 436) = *((_DWORD*)v12 + 21);
      *(float*)(v16 + 416) = *a5;
      *(float*)(v16 + 420) = a5[1];
      *(float*)(v16 + 424) = a5[2];
      *(float*)(v16 + 428) = a5[3];
      v17 = (float*)Window_5892c0(*(_QWORD*)(a4 + 8), a2);
      LOBYTE(v18) = v12[232];
      v19 = (float)v18;
      v17[116] = v19;
      LOBYTE(v19) = v12[233];
      v20 = (float)LODWORD(v19);
      v17[117] = v20;
      LOBYTE(v20) = v12[234];
      v21 = (float)LODWORD(v20);
      v17[118] = v21;
      LOBYTE(v21) = v12[235];
      v22 = (float)LODWORD(v21);
      v17[119] = v22;
      LOBYTE(v22) = v12[236];
      v23 = (float)LODWORD(v22);
      v17[120] = v23;
      LOBYTE(v23) = v12[237];
      v24 = (float)LODWORD(v23);
      v17[121] = v24;
      LOBYTE(v24) = v12[238];
      v25 = (float)LODWORD(v24);
      v17[122] = v25;
      LOBYTE(v25) = v12[239];
      v26 = (float)LODWORD(v25);
      v17[123] = v26;
      LOBYTE(v26) = v12[240];
      v27 = (float)LODWORD(v26);
      v17[124] = v27;
      LOBYTE(v27) = v12[241];
      v28 = (float)LODWORD(v27);
      v17[125] = v28;
      LOBYTE(v28) = v12[242];
      v29 = (float)LODWORD(v28);
      v17[126] = v29;
      LOBYTE(v29) = v12[243];
      v30 = (float)LODWORD(v29);
      v17[127] = v30;
      LOBYTE(v30) = v12[244];
      v31 = (float)LODWORD(v30);
      v17[128] = v31;
      LOBYTE(v31) = v12[245];
      v32 = (float)LODWORD(v31);
      v17[129] = v32;
      LOBYTE(v32) = v12[246];
      v33 = (float)LODWORD(v32);
      v17[130] = v33;
      LOBYTE(v33) = v12[247];
      v17[131] = (float)LODWORD(v33);
    }
  }
  v34 = *((float*)v12 + 20);
  v35 = a5[1];
  v36 = a5[2];
  v37 = *(_QWORD*)(a4 + 8);
  v85 = *(_QWORD*)a3;
  v38 = v12[266];
  v84[0] = v34 - v35;
  v84[1] = v36;
  if ((v38 & 1) != 0) {
    v39 = 2067;
  }
  else {
    v39 = 1073743891;
  }
  *(_DWORD*)(Window_5892c0(v37, a2) + 556) = v39;
  v40 = (_DWORD*)Window_5892c0(*(_QWORD*)(a4 + 8), a2);
  result = (unsigned __int8*)DynamicRenderingTexture_576230(a2, v40, &v85, v84);
  v41 = *(int**)(a2 + 200);
  v42 = (*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL) + 559LL) &
        -*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL);
  v43 = *v41;
  if ((*v41 & 1) != 0) {
    LODWORD(v44) = atomic_fetch_add(*((atomic_ullong* volatile*)v41 + 8), v42);
    if ((*(_BYTE*)v41 & 1) != 0) {
      v45 = *((unsigned __int64**)v41 + 9);
      v46 = atomic_load(*((unsigned __int64**)v41 + 8));
      v47 = atomic_load(v45);
      if (v47 + v46 <= *((_QWORD*)v41 + 3)) {
        goto LABEL_36;
      }
    }
    else if (*((_QWORD*)v41 + 9) + *((_QWORD*)v41 + 8) <= *((_QWORD*)v41 + 3)) {
      goto LABEL_36;
    }
  LABEL_35:
    LODWORD(v44) = 0;
    goto LABEL_36;
  }
  v44 = *((_QWORD*)v41 + 8);
  *((_QWORD*)v41 + 8) = v44 + v42;
  if ((v43 & 2) == 0 && *((_QWORD*)v41 + 9) + v44 + v42 > *((_QWORD*)v41 + 3)) {
    goto LABEL_35;
  }
LABEL_36:
  **((_DWORD**)v12 + 36) = v44;
  v48 = *(int**)(a2 + 200);
  v49 = *((_QWORD*)v48 + 7);
  if (v49 != 0) {
    v50 = (_DWORD*)(v49 + **((unsigned int**)v12 + 36));
    v51 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    memcpy(v50, v51, 560);
    if ((v12[266] & 1) != 0) {
      v52 = 133411;
    }
    else {
      v52 = 1073875235;
    }
    v50[139] = v52;
    v53 = *(_DWORD*)(a3 + 4);
    v54 = *((float*)v12 + 21);
    v55 = a5[1];
    *(float*)&v85 = (float)(*(float*)a3 + *((float*)v12 + 20)) - v55;
    HIDWORD(v85) = v53;
    v56 = v54 - a5[3];
    v84[0] = v55;
    v84[1] = v56;
    result =
        (unsigned __int8*)DynamicRenderingTexture_576230(a2, v50, &v85, v84);
    v48 = *(int**)(a2 + 200);
  }
  v57 = *v48;
  if ((*v48 & 1) != 0) {
    LODWORD(v58) = atomic_fetch_add(*((atomic_ullong* volatile*)v48 + 8), v42);
    if ((*(_BYTE*)v48 & 1) != 0) {
      v59 = *((unsigned __int64**)v48 + 9);
      v60 = atomic_load(*((unsigned __int64**)v48 + 8));
      v61 = atomic_load(v59);
      if (v61 + v60 <= *((_QWORD*)v48 + 3)) {
        goto LABEL_50;
      }
    }
    else if (*((_QWORD*)v48 + 9) + *((_QWORD*)v48 + 8) <= *((_QWORD*)v48 + 3)) {
      goto LABEL_50;
    }
  LABEL_49:
    LODWORD(v58) = 0;
    goto LABEL_50;
  }
  v58 = *((_QWORD*)v48 + 8);
  *((_QWORD*)v48 + 8) = v58 + v42;
  if ((v57 & 2) == 0 && *((_QWORD*)v48 + 9) + v58 + v42 > *((_QWORD*)v48 + 3)) {
    goto LABEL_49;
  }
LABEL_50:
  *(_DWORD*)(*((_QWORD*)v12 + 36) + 4LL) = v58;
  v62 = *(int**)(a2 + 200);
  v63 = *((_QWORD*)v62 + 7);
  if (v63 != 0) {
    v64 = (_DWORD*)(v63 + *(unsigned int*)(*((_QWORD*)v12 + 36) + 4LL));
    v65 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    memcpy(v64, v65, 560);
    if ((v12[266] & 1) != 0) {
      v66 = 396055;
    }
    else {
      v66 = 1074137879;
    }
    v64[139] = v66;
    v67 = a5[3];
    *(float*)&v68 = *(float*)a3 + *a5;
    *(float*)&v69 = (float)(*(float*)(a3 + 4) - *((float*)v12 + 21)) + v67;
    v84[0] = *((float*)v12 + 20) - *a5;
    v84[1] = v67;
    v85 = __PAIR64__(v69, v68);
    result =
        (unsigned __int8*)DynamicRenderingTexture_576230(a2, v64, &v85, v84);
    v62 = *(int**)(a2 + 200);
  }
  v70 = *v62;
  if ((*v62 & 1) != 0) {
    LODWORD(v71) = atomic_fetch_add(*((atomic_ullong* volatile*)v62 + 8), v42);
    if ((*(_BYTE*)v62 & 1) != 0) {
      v72 = *((unsigned __int64**)v62 + 9);
      v73 = atomic_load(*((unsigned __int64**)v62 + 8));
      v74 = atomic_load(v72);
      if (v74 + v73 <= *((_QWORD*)v62 + 3)) {
        goto LABEL_64;
      }
    }
    else if (*((_QWORD*)v62 + 9) + *((_QWORD*)v62 + 8) <= *((_QWORD*)v62 + 3)) {
      goto LABEL_64;
    }
  LABEL_63:
    LODWORD(v71) = 0;
    goto LABEL_64;
  }
  v71 = *((_QWORD*)v62 + 8);
  *((_QWORD*)v62 + 8) = v71 + v42;
  if ((v70 & 2) == 0 && *((_QWORD*)v62 + 9) + v71 + v42 > *((_QWORD*)v62 + 3)) {
    goto LABEL_63;
  }
LABEL_64:
  *(_DWORD*)(*((_QWORD*)v12 + 36) + 8LL) = v71;
  v75 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
  if (v75 != 0) {
    v76 = (_DWORD*)(v75 + *(unsigned int*)(*((_QWORD*)v12 + 36) + 8LL));
    v77 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    memcpy(v76, v77, 560);
    if ((v12[266] & 1) != 0) {
      v78 = 264747;
    }
    else {
      v78 = 1074006571;
    }
    v76[139] = v78;
    v79 = a5[2];
    v80 = *(float*)(a3 + 4) - v79;
    LODWORD(v85) = *(_DWORD*)a3;
    *((float*)&v85 + 1) = v80;
    v81 = *((float*)v12 + 21) - v79;
    v84[0] = *a5;
    v84[1] = v81;
    return (unsigned __int8*)DynamicRenderingTexture_576230(a2, v76, &v85, v84);
  }
  return result;
}

__int64 Window_5b0760(__int64 result, __int64 a2, unsigned __int64* a3,
                      __int64 a4, float* a5, unsigned int a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v14;
  unsigned __int64 v15;
  char v16;
  unsigned int v17;
  float v18;
  __int64* v19;
  __int64 v20;
  _DWORD* v21;
  int v22;
  _DWORD* v23;
  _BYTE* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float* v29;
  unsigned int v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64* v50;
  bool v52;
  __int64 v53;
  __int64 v54;
  float v55[8];
  struct {
    unsigned __int64 v56;
    float v57;
    int v58;
    int v59;
    float v60;
    float v61;
    float v62;
  } v56_;

  v6 = result + 80;
  v7 = *(float*)(result + 80);
  v9 = *a5;
  v8 = a5[1];
  v10 = a5[2];
  v11 = a5[3];
  v14 = result;
  v15 = HIDWORD(*a3);
  v56_.v56 = *a3;
  v56_.v58 = v15;
  v56_.v59 = v56_.v56;
  v16 = *(_BYTE*)(result + 266);
  v55[0] = v7 - v8;
  v55[1] = v10;
  v17 = *(unsigned __int8*)(result + 232);
  v55[6] = v7 - v9;
  v55[7] = v11;
  v56_.v57 = (float)(v7 + *(float*)&v56_.v56) - v8;
  v18 = *(float*)(result + 84);
  v55[2] = v8;
  v55[3] = v18 - v11;
  v55[4] = v9;
  v55[5] = v18 - v10;
  v52 = true;
  v56_.v60 = *(float*)&v15 - v10;
  v56_.v61 = v9 + *(float*)&v56_.v56;
  v56_.v62 = (float)(*(float*)&v15 - v18) + v11;
  if (__PAIR64__(*(unsigned __int8*)(result + 233), v17) == 0xFF000000FFLL &&
      *(unsigned __int8*)(result + 234) == 255) {
    v52 = true;
    if (*(unsigned __int8*)(result + 235) == 255 &&
        *(unsigned __int8*)(result + 236) == 255 &&
        *(unsigned __int8*)(result + 237) == 255 &&
        *(unsigned __int8*)(result + 238) == 255 &&
        *(unsigned __int8*)(result + 239) == 255 &&
        *(unsigned __int8*)(result + 240) == 255 &&
        *(unsigned __int8*)(result + 241) == 255 &&
        *(unsigned __int8*)(result + 242) == 255 &&
        *(unsigned __int8*)(result + 243) == 255 &&
        *(unsigned __int8*)(result + 244) == 255 &&
        *(unsigned __int8*)(result + 245) == 255 &&
        *(unsigned __int8*)(result + 246) == 255 &&
        *(unsigned __int8*)(result + 247) == 255) {
      v52 = *(unsigned __int8*)(result + 90) != 255;
    }
  }
  v19 = (__int64*)(a4 + 8);
  v20 = 0;
  v21 = GameData_2136398;
  v50 = (__int64*)(a4 + 8);
  do {
    v24 = (_BYTE*)*v19;
    if (*v19 != 0 && (v24[20] & 3) != 0) {
      if (v52 || (v24[18] & 2) != 0) {
        v27 = Pane_58fa70(v14);
        LOWORD(v49) = Pane_58fa40(v14);
        (*(void (**)(_BYTE*, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64,
                     __int64, __int64, int))(*(_QWORD*)v24 + 32LL))(
            v24, a2, a6, 0, 0, v14 + 112, v6, v14 + 72, v27, v49);
        if ((v16 & 1) != 0) {
          v28 = Window_5892c0(*v19, a2);
          *(_DWORD*)(v28 + 432) = *(_DWORD*)(v14 + 80);
          *(_DWORD*)(v28 + 436) = *(_DWORD*)(v14 + 84);
          *(float*)(v28 + 416) = *a5;
          *(float*)(v28 + 420) = a5[1];
          *(float*)(v28 + 424) = a5[2];
          *(float*)(v28 + 428) = a5[3];
          v29 = (float*)Window_5892c0(*v19, a2);
          LOBYTE(v30) = *(_BYTE*)(v14 + 232);
          v31 = (float)v30;
          v29[116] = v31;
          LOBYTE(v31) = *(_BYTE*)(v14 + 233);
          v32 = (float)LODWORD(v31);
          v29[117] = v32;
          LOBYTE(v32) = *(_BYTE*)(v14 + 234);
          v33 = (float)LODWORD(v32);
          v29[118] = v33;
          LOBYTE(v33) = *(_BYTE*)(v14 + 235);
          v34 = (float)LODWORD(v33);
          v29[119] = v34;
          LOBYTE(v34) = *(_BYTE*)(v14 + 236);
          v35 = (float)LODWORD(v34);
          v29[120] = v35;
          LOBYTE(v35) = *(_BYTE*)(v14 + 237);
          v36 = (float)LODWORD(v35);
          v29[121] = v36;
          LOBYTE(v36) = *(_BYTE*)(v14 + 238);
          v37 = (float)LODWORD(v36);
          v29[122] = v37;
          LOBYTE(v37) = *(_BYTE*)(v14 + 239);
          v38 = (float)LODWORD(v37);
          v29[123] = v38;
          LOBYTE(v38) = *(_BYTE*)(v14 + 240);
          v39 = (float)LODWORD(v38);
          v29[124] = v39;
          LOBYTE(v39) = *(_BYTE*)(v14 + 241);
          v40 = (float)LODWORD(v39);
          v29[125] = v40;
          LOBYTE(v40) = *(_BYTE*)(v14 + 242);
          v41 = (float)LODWORD(v40);
          v29[126] = v41;
          LOBYTE(v41) = *(_BYTE*)(v14 + 243);
          v42 = (float)LODWORD(v41);
          v29[127] = v42;
          LOBYTE(v42) = *(_BYTE*)(v14 + 244);
          v43 = (float)LODWORD(v42);
          v29[128] = v43;
          LOBYTE(v43) = *(_BYTE*)(v14 + 245);
          v44 = (float)LODWORD(v43);
          v29[129] = v44;
          LOBYTE(v44) = *(_BYTE*)(v14 + 246);
          v45 = (float)LODWORD(v44);
          v29[130] = v45;
          LOBYTE(v45) = *(_BYTE*)(v14 + 247);
          v29[131] = (float)LODWORD(v45);
        }
      }
      else {
        v25 = Pane_58fa70(v14);
        LOWORD(v49) = Pane_58fa40(v14);
        (*(void (**)(_BYTE*, __int64, _QWORD, __int64, _QWORD, __int64, __int64,
                     __int64, __int64, int))(*(_QWORD*)v24 + 32LL))(
            v24, a2, a6, 1, 0, v14 + 112, v6, v14 + 72, v25, v49);
        if ((v16 & 1) != 0) {
          v26 = Window_5892c0(*v19, a2);
          *(_DWORD*)(v26 + 432) = *(_DWORD*)(v14 + 80);
          *(_DWORD*)(v26 + 436) = *(_DWORD*)(v14 + 84);
          *(float*)(v26 + 416) = *a5;
          *(float*)(v26 + 420) = a5[1];
          *(float*)(v26 + 424) = a5[2];
          *(float*)(v26 + 428) = a5[3];
        }
      }
      v46 = *v19;
      if (v20 != 0 && (v16 & 2) != 0) {
        v47 = Window_5892c0(v46, a2);
        v53 = *(_QWORD*)(v47 + 448);
        v54 = *(_QWORD*)(v47 + 456);
        v48 = Window_5892c0(*v50, a2);
        memcpy(v47, v48, 560);
        *(_QWORD*)(v47 + 448) = v53;
        *(_QWORD*)(v47 + 456) = v54;
        v46 = *v19;
      }
      if ((v16 & 1) != 0) {
        v22 =
            *((_DWORD*)GameData_21363a0 + *((unsigned __int8*)v19 - 8)) | *v21;
      }
      else {
        v22 = *((_DWORD*)GameData_21363a0 + *((unsigned __int8*)v19 - 8)) |
              *v21 | 0x40000000;
      }
      *(_DWORD*)(Window_5892c0(v46, a2) + 556) = v22;
      v23 = (_DWORD*)Window_5892c0(*v19, a2);
      result = DynamicRenderingTexture_576230(
          a2, v23, (unsigned __int64*)((char*)&v56_.v56 + v20 * 4), &v55[v20]);
    }
    v20 += 2;
    v19 += 2;
    ++v21;
  } while (v20 != 8);
  return result;
}

__int64 Window_5b10d0(__int64 a1, char* a2, float* a3, float* a4)
{

#pragma clang fp contract(off)
  char v4;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float v18[2];
  float v19[2];

  v4 = *(_BYTE*)(a1 + 266);
  v7 = *a3 + *a4;
  v8 = (float)(*(float*)(a1 + 80) - *a4) - a4[1];
  v9 = a4[2];
  v10 = a3[1] - v9;
  v11 = (float)(*(float*)(a1 + 84) - v9) - a4[3];
  v19[0] = v7;
  v19[1] = v10;
  v18[0] = v8;
  v18[1] = v11;
  if ((v4 & 8) != 0) {
    v12 = vcvts_n_f32_s32(*(__int16*)(a1 + 210), 4u);
    v13 = vcvts_n_f32_s32(*(__int16*)(a1 + 212), 4u);
    v14 = vcvts_n_f32_s32(*(__int16*)(a1 + 214), 4u);
    v15 = vcvts_n_f32_s32(*(__int16*)(a1 + 216), 4u);
    v19[0] = v7 - v12;
    v19[1] = v10 + v14;
    v18[0] = v8 + (float)(v12 + v13);
    v18[1] = v11 + (float)(v14 + v15);
  }
  v16 = Window_5892c0(*(_QWORD*)(a1 + 280), (__int64)a2);
  return DynamicRenderingTexture_576260(
      a2, v16, v19, v18, *(unsigned __int8*)(a1 + 249), *(_QWORD*)(a1 + 256));
}

unsigned __int8* Window_5b11a0(unsigned __int8* result, __int64 a2, __int64 a3,
                               __int64 a4, float* a5, unsigned int a6)
{

#pragma clang fp contract(off)
  _BYTE* v6;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  float* v15;
  unsigned int v16;
  float v17;
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
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  _DWORD* v37;
  int* v38;
  int v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _DWORD* v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned __int64* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int16 v53;
  __int16 v54;
  _DWORD v55[2];
  unsigned __int64 v56;

  v6 = *(_BYTE**)(a4 + 8);
  if ((v6[20] & 3) == 0) {
    return result;
  }
  v12 = result;
  if ((v6[18] & 2) != 0 || result[232] != 255 || result[233] != 255 ||
      result[234] != 255 || result[235] != 255 || result[236] != 255 ||
      result[237] != 255 || result[238] != 255 || result[239] != 255 ||
      result[240] != 255 || result[241] != 255 || result[242] != 255 ||
      result[243] != 255 || result[244] != 255 || result[245] != 255 ||
      result[246] != 255 || result[247] != 255 || result[90] != 255) {
    v14 = Pane_58fa70((__int64)result);
    v54 = Pane_58fa40((__int64)v12);
    (*(void (**)(_BYTE*, __int64, _QWORD, _QWORD, _QWORD, unsigned __int8*,
                 unsigned __int8*, unsigned __int8*, __int64,
                 __int16))(*(_QWORD*)v6 + 32LL))(v6, a2, a6, 0, 0, v12 + 112,
                                                 v12 + 80, v12 + 72, v14, v54);
    v15 = (float*)Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    LOBYTE(v16) = v12[232];
    v17 = (float)v16;
    v15[116] = v17;
    LOBYTE(v17) = v12[233];
    v18 = (float)LODWORD(v17);
    v15[117] = v18;
    LOBYTE(v18) = v12[234];
    v19 = (float)LODWORD(v18);
    v15[118] = v19;
    LOBYTE(v19) = v12[235];
    v20 = (float)LODWORD(v19);
    v15[119] = v20;
    LOBYTE(v20) = v12[236];
    v21 = (float)LODWORD(v20);
    v15[120] = v21;
    LOBYTE(v21) = v12[237];
    v22 = (float)LODWORD(v21);
    v15[121] = v22;
    LOBYTE(v22) = v12[238];
    v23 = (float)LODWORD(v22);
    v15[122] = v23;
    LOBYTE(v23) = v12[239];
    v24 = (float)LODWORD(v23);
    v15[123] = v24;
    LOBYTE(v24) = v12[240];
    v25 = (float)LODWORD(v24);
    v15[124] = v25;
    LOBYTE(v25) = v12[241];
    v26 = (float)LODWORD(v25);
    v15[125] = v26;
    LOBYTE(v26) = v12[242];
    v27 = (float)LODWORD(v26);
    v15[126] = v27;
    LOBYTE(v27) = v12[243];
    v28 = (float)LODWORD(v27);
    v15[127] = v28;
    LOBYTE(v28) = v12[244];
    v29 = (float)LODWORD(v28);
    v15[128] = v29;
    LOBYTE(v29) = v12[245];
    v30 = (float)LODWORD(v29);
    v15[129] = v30;
    LOBYTE(v30) = v12[246];
    v31 = (float)LODWORD(v30);
    v15[130] = v31;
    LOBYTE(v31) = v12[247];
    v15[131] = (float)LODWORD(v31);
    if ((v12[266] & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v13 = Pane_58fa70((__int64)result);
  v53 = Pane_58fa40((__int64)v12);
  (*(void (**)(_BYTE*, __int64, _QWORD, __int64, _QWORD, unsigned __int8*,
               unsigned __int8*, unsigned __int8*, __int64,
               __int16))(*(_QWORD*)v6 + 32LL))(v6, a2, a6, 1, 0, v12 + 112,
                                               v12 + 80, v12 + 72, v13, v53);
  if ((v12[266] & 1) != 0) {
  LABEL_23:
    v32 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    *(_DWORD*)(v32 + 432) = *((_DWORD*)v12 + 20);
    *(_DWORD*)(v32 + 436) = *((_DWORD*)v12 + 21);
    *(float*)(v32 + 416) = *a5;
    *(float*)(v32 + 420) = a5[1];
    *(float*)(v32 + 424) = a5[2];
    *(float*)(v32 + 428) = a5[3];
  }
LABEL_24:
  if ((v12[266] & 1) != 0) {
    v33 = 1027;
  }
  else {
    v33 = 1073742851;
  }
  *(_DWORD*)(Window_5892c0(*(_QWORD*)(a4 + 8), a2) + 556) = v33;
  v34 = *(_DWORD*)a5;
  v35 = *((_DWORD*)v12 + 21);
  v36 = *(_QWORD*)(a4 + 8);
  v56 = *(_QWORD*)a3;
  v55[0] = v34;
  v55[1] = v35;
  v37 = (_DWORD*)Window_5892c0(v36, a2);
  result = (unsigned __int8*)DynamicRenderingTexture_576230(a2, v37, &v56, v55);
  v38 = *(int**)(a2 + 200);
  v39 = *v38;
  v40 = (*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL) + 559LL) &
        -*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL);
  if ((*v38 & 1) == 0) {
    v41 = *((_QWORD*)v38 + 8);
    v42 = v41 + v40;
    *((_QWORD*)v38 + 8) = v42;
    if ((v39 & 2) != 0) {
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  LODWORD(v41) = atomic_fetch_add(*((atomic_ullong* volatile*)v38 + 8), v40);
  if ((*(_BYTE*)v38 & 1) == 0) {
    v42 = *((_QWORD*)v38 + 8);
  LABEL_32:
    if ((unsigned __int64)(*((_QWORD*)v38 + 9) + v42) <= *((_QWORD*)v38 + 3)) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v50 = *((unsigned __int64**)v38 + 9);
  v51 = atomic_load(*((unsigned __int64**)v38 + 8));
  v52 = atomic_load(v50);
  if (v52 + v51 > *((_QWORD*)v38 + 3)) {
  LABEL_33:
    LODWORD(v41) = 0;
  }
LABEL_34:
  **((_DWORD**)v12 + 36) = v41;
  v43 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
  if (v43 != 0) {
    v44 = (_DWORD*)(v43 + **((unsigned int**)v12 + 36));
    v45 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    memcpy(v44, v45, 560);
    if ((v12[266] & 1) != 0) {
      v46 = 132355;
    }
    else {
      v46 = 1073874179;
    }
    v44[139] = v46;
    v47 = *(_DWORD*)(a3 + 4);
    v48 = *((_DWORD*)v12 + 21);
    *(float*)&v49 = (float)(*(float*)a3 + *((float*)v12 + 20)) - a5[1];
    *(float*)v55 = a5[1];
    v55[1] = v48;
    v56 = __PAIR64__(v47, v49);
    return (unsigned __int8*)DynamicRenderingTexture_576230(a2, v44, &v56, v55);
  }
  return result;
}

__int64 Window_5b1600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float* a5,
                      unsigned int a6)
{

#pragma clang fp contract(off)
  char v10;
  __int64 v11;
  int v12;
  char v13;
  _DWORD* v14;
  __int64 v15;
  __int64 result;
  char v17;
  unsigned __int8* v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float* v24;
  unsigned int v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  char v45;
  unsigned int v46;
  int v47;
  int v48;
  int v49;
  bool v51;
  unsigned __int64 v53;
  unsigned __int64 v54;

  v51 = true;
  if (__PAIR64__(*(unsigned __int8*)(a1 + 233),
                 *(unsigned __int8*)(a1 + 232)) == 0xFF000000FFLL &&
      *(unsigned __int8*)(a1 + 234) == 255) {
    v51 = true;
    if (*(unsigned __int8*)(a1 + 235) == 255 &&
        *(unsigned __int8*)(a1 + 236) == 255 &&
        *(unsigned __int8*)(a1 + 237) == 255 &&
        *(unsigned __int8*)(a1 + 238) == 255 &&
        *(unsigned __int8*)(a1 + 239) == 255 &&
        *(unsigned __int8*)(a1 + 240) == 255 &&
        *(unsigned __int8*)(a1 + 241) == 255 &&
        *(unsigned __int8*)(a1 + 242) == 255 &&
        *(unsigned __int8*)(a1 + 243) == 255 &&
        *(unsigned __int8*)(a1 + 244) == 255 &&
        *(unsigned __int8*)(a1 + 245) == 255 &&
        *(unsigned __int8*)(a1 + 246) == 255 &&
        *(unsigned __int8*)(a1 + 247) == 255) {
      v51 = *(unsigned __int8*)(a1 + 90) != 255;
    }
  }
  v10 = *(_BYTE*)(a1 + 266);
  v11 = 0;
  if ((v10 & 1) != 0) {
    v12 = 1283;
  }
  else {
    v12 = 1073743107;
  }
  v49 = v12;
  v13 = 1;
  do {
    v17 = v13;
    v18 = (unsigned __int8*)(a4 + 16 * v11);
    v19 = *((_BYTE**)v18 + 1);
    if (v51 || (v19[18] & 2) != 0) {
      v22 = Pane_58fa70(a1);
      LOWORD(v48) = Pane_58fa40(a1);
      (*(void (**)(_BYTE*, __int64, _QWORD, _QWORD, _QWORD, __int64, __int64,
                   __int64, __int64, int))(*(_QWORD*)v19 + 32LL))(
          v19, a2, a6, 0, 0, a1 + 112, a1 + 80, a1 + 72, v22, v48);
      if ((v10 & 1) != 0) {
        v23 = Window_5892c0(*((_QWORD*)v18 + 1), a2);
        *(_DWORD*)(v23 + 432) = *(_DWORD*)(a1 + 80);
        *(_DWORD*)(v23 + 436) = *(_DWORD*)(a1 + 84);
        *(float*)(v23 + 416) = *a5;
        *(float*)(v23 + 420) = a5[1];
        *(float*)(v23 + 424) = a5[2];
        *(float*)(v23 + 428) = a5[3];
        v24 = (float*)Window_5892c0(*((_QWORD*)v18 + 1), a2);
        {
          __typeof__(v25) z_ = (__typeof__(v25)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 232);
          v25 = z_;
        }
        v26 = (float)v25;
        v24[116] = v26;
        {
          __typeof__(v26) z_ = (__typeof__(v26)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 233);
          v26 = z_;
        }
        v27 = (float)LODWORD(v26);
        v24[117] = v27;
        {
          __typeof__(v27) z_ = (__typeof__(v27)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 234);
          v27 = z_;
        }
        v28 = (float)LODWORD(v27);
        v24[118] = v28;
        {
          __typeof__(v28) z_ = (__typeof__(v28)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 235);
          v28 = z_;
        }
        v29 = (float)LODWORD(v28);
        v24[119] = v29;
        {
          __typeof__(v29) z_ = (__typeof__(v29)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 236);
          v29 = z_;
        }
        v30 = (float)LODWORD(v29);
        v24[120] = v30;
        {
          __typeof__(v30) z_ = (__typeof__(v30)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 237);
          v30 = z_;
        }
        v31 = (float)LODWORD(v30);
        v24[121] = v31;
        {
          __typeof__(v31) z_ = (__typeof__(v31)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 238);
          v31 = z_;
        }
        v32 = (float)LODWORD(v31);
        v24[122] = v32;
        {
          __typeof__(v32) z_ = (__typeof__(v32)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 239);
          v32 = z_;
        }
        v33 = (float)LODWORD(v32);
        v24[123] = v33;
        {
          __typeof__(v33) z_ = (__typeof__(v33)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 240);
          v33 = z_;
        }
        v34 = (float)LODWORD(v33);
        v24[124] = v34;
        {
          __typeof__(v34) z_ = (__typeof__(v34)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 241);
          v34 = z_;
        }
        v35 = (float)LODWORD(v34);
        v24[125] = v35;
        {
          __typeof__(v35) z_ = (__typeof__(v35)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 242);
          v35 = z_;
        }
        v36 = (float)LODWORD(v35);
        v24[126] = v36;
        {
          __typeof__(v36) z_ = (__typeof__(v36)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 243);
          v36 = z_;
        }
        v37 = (float)LODWORD(v36);
        v24[127] = v37;
        {
          __typeof__(v37) z_ = (__typeof__(v37)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 244);
          v37 = z_;
        }
        v38 = (float)LODWORD(v37);
        v24[128] = v38;
        {
          __typeof__(v38) z_ = (__typeof__(v38)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 245);
          v38 = z_;
        }
        v39 = (float)LODWORD(v38);
        v24[129] = v39;
        {
          __typeof__(v39) z_ = (__typeof__(v39)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 246);
          v39 = z_;
        }
        v40 = (float)LODWORD(v39);
        v24[130] = v40;
        {
          __typeof__(v40) z_ = (__typeof__(v40)){0};
          LOBYTE(z_) = *(_BYTE*)(a1 + 247);
          v40 = z_;
        }
        v24[131] = (float)LODWORD(v40);
      }
    }
    else {
      v20 = Pane_58fa70(a1);
      LOWORD(v48) = Pane_58fa40(a1);
      (*(void (**)(_BYTE*, __int64, _QWORD, __int64, _QWORD, __int64, __int64,
                   __int64, __int64, int))(*(_QWORD*)v19 + 32LL))(
          v19, a2, a6, 1, 0, a1 + 112, a1 + 80, a1 + 72, v20, v48);
      if ((v10 & 1) != 0) {
        v21 = Window_5892c0(*((_QWORD*)v18 + 1), a2);
        *(_DWORD*)(v21 + 432) = *(_DWORD*)(a1 + 80);
        *(_DWORD*)(v21 + 436) = *(_DWORD*)(a1 + 84);
        *(float*)(v21 + 416) = *a5;
        *(float*)(v21 + 420) = a5[1];
        *(float*)(v21 + 424) = a5[2];
        *(float*)(v21 + 428) = a5[3];
      }
    }
    v53 = 0;
    v54 = 0;
    if ((v17 & 1) != 0) {
      v41 = *(_DWORD*)a5;
      v42 = *(_DWORD*)(a1 + 84);
      v54 = *(_QWORD*)a3;
      v53 = __PAIR64__(v42, v41);
    }
    else {
      v43 = *(_DWORD*)(a3 + 4);
      v44 = *(_DWORD*)(a1 + 84);
      v45 = *(_BYTE*)(a1 + 266);
      *(float*)&v46 = (float)(*(float*)a3 + *(float*)(a1 + 80)) - a5[1];
      *(float*)&v53 = a5[1];
      HIDWORD(v53) = v44;
      v54 = __PAIR64__(v43, v46);
      if ((v45 & 2) != 0) {
        v14 = (_DWORD*)Window_5892c0(*((_QWORD*)v18 + 1), a2);
        v15 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
        memcpy_alt1((__int64)v14, v15, 0x230u);
        v14[139] = *((_DWORD*)GameData_21363b8 + *v18) | v49;
        goto LABEL_22;
      }
    }
    if ((v10 & 1) != 0) {
      v47 = *((_DWORD*)GameData_21363b8 + *v18) |
            *((_DWORD*)GameData_21363c0 + v11);
    }
    else {
      v47 = *((_DWORD*)GameData_21363b8 + *v18) |
            *((_DWORD*)GameData_21363c0 + v11) | 0x40000000;
    }
    *(_DWORD*)(Window_5892c0(*((_QWORD*)v18 + 1), a2) + 556) = v47;
    v14 = (_DWORD*)Window_5892c0(*((_QWORD*)v18 + 1), a2);
  LABEL_22:
    result = DynamicRenderingTexture_576230(a2, v14, &v54, &v53);
    v11 = 1;
    v13 = 0;
    *(_BYTE*)(*((_QWORD*)v18 + 1) + 72LL) =
        *(_BYTE*)(*((_QWORD*)v18 + 1) + 72LL) & 0xF0 |
        *(_BYTE*)(a2 + 403) & 0xF;
  } while ((v17 & 1) != 0);
  return result;
}

unsigned __int8* Window_5b1a80(unsigned __int8* result, __int64 a2, __int64 a3,
                               __int64 a4, float* a5, unsigned int a6)
{

#pragma clang fp contract(off)
  _BYTE* v6;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  float* v15;
  unsigned int v16;
  float v17;
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
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  _DWORD* v37;
  int* v38;
  int v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _DWORD* v44;
  __int64 v45;
  int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  unsigned __int64* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int16 v53;
  __int16 v54;
  _DWORD v55[2];
  unsigned __int64 v56;

  v6 = *(_BYTE**)(a4 + 8);
  if ((v6[20] & 3) == 0) {
    return result;
  }
  v12 = result;
  if ((v6[18] & 2) != 0 || result[232] != 255 || result[233] != 255 ||
      result[234] != 255 || result[235] != 255 || result[236] != 255 ||
      result[237] != 255 || result[238] != 255 || result[239] != 255 ||
      result[240] != 255 || result[241] != 255 || result[242] != 255 ||
      result[243] != 255 || result[244] != 255 || result[245] != 255 ||
      result[246] != 255 || result[247] != 255 || result[90] != 255) {
    v14 = Pane_58fa70((__int64)result);
    v54 = Pane_58fa40((__int64)v12);
    (*(void (**)(_BYTE*, __int64, _QWORD, _QWORD, _QWORD, unsigned __int8*,
                 unsigned __int8*, unsigned __int8*, __int64,
                 __int16))(*(_QWORD*)v6 + 32LL))(v6, a2, a6, 0, 0, v12 + 112,
                                                 v12 + 80, v12 + 72, v14, v54);
    v15 = (float*)Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    LOBYTE(v16) = v12[232];
    v17 = (float)v16;
    v15[116] = v17;
    LOBYTE(v17) = v12[233];
    v18 = (float)LODWORD(v17);
    v15[117] = v18;
    LOBYTE(v18) = v12[234];
    v19 = (float)LODWORD(v18);
    v15[118] = v19;
    LOBYTE(v19) = v12[235];
    v20 = (float)LODWORD(v19);
    v15[119] = v20;
    LOBYTE(v20) = v12[236];
    v21 = (float)LODWORD(v20);
    v15[120] = v21;
    LOBYTE(v21) = v12[237];
    v22 = (float)LODWORD(v21);
    v15[121] = v22;
    LOBYTE(v22) = v12[238];
    v23 = (float)LODWORD(v22);
    v15[122] = v23;
    LOBYTE(v23) = v12[239];
    v24 = (float)LODWORD(v23);
    v15[123] = v24;
    LOBYTE(v24) = v12[240];
    v25 = (float)LODWORD(v24);
    v15[124] = v25;
    LOBYTE(v25) = v12[241];
    v26 = (float)LODWORD(v25);
    v15[125] = v26;
    LOBYTE(v26) = v12[242];
    v27 = (float)LODWORD(v26);
    v15[126] = v27;
    LOBYTE(v27) = v12[243];
    v28 = (float)LODWORD(v27);
    v15[127] = v28;
    LOBYTE(v28) = v12[244];
    v29 = (float)LODWORD(v28);
    v15[128] = v29;
    LOBYTE(v29) = v12[245];
    v30 = (float)LODWORD(v29);
    v15[129] = v30;
    LOBYTE(v30) = v12[246];
    v31 = (float)LODWORD(v30);
    v15[130] = v31;
    LOBYTE(v31) = v12[247];
    v15[131] = (float)LODWORD(v31);
    if ((v12[266] & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  v13 = Pane_58fa70((__int64)result);
  v53 = Pane_58fa40((__int64)v12);
  (*(void (**)(_BYTE*, __int64, _QWORD, __int64, _QWORD, unsigned __int8*,
               unsigned __int8*, unsigned __int8*, __int64,
               __int16))(*(_QWORD*)v6 + 32LL))(v6, a2, a6, 1, 0, v12 + 112,
                                               v12 + 80, v12 + 72, v13, v53);
  if ((v12[266] & 1) != 0) {
  LABEL_23:
    v32 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    *(_DWORD*)(v32 + 432) = *((_DWORD*)v12 + 20);
    *(_DWORD*)(v32 + 436) = *((_DWORD*)v12 + 21);
    *(float*)(v32 + 416) = *a5;
    *(float*)(v32 + 420) = a5[1];
    *(float*)(v32 + 424) = a5[2];
    *(float*)(v32 + 428) = a5[3];
  }
LABEL_24:
  if ((v12[266] & 1) != 0) {
    v33 = 3091;
  }
  else {
    v33 = 1073744915;
  }
  *(_DWORD*)(Window_5892c0(*(_QWORD*)(a4 + 8), a2) + 556) = v33;
  v34 = *(_DWORD*)a5;
  v35 = *((_DWORD*)v12 + 21);
  v36 = *(_QWORD*)(a4 + 8);
  v56 = *(_QWORD*)a3;
  v55[0] = v34;
  v55[1] = v35;
  v37 = (_DWORD*)Window_5892c0(v36, a2);
  result = (unsigned __int8*)DynamicRenderingTexture_576230(a2, v37, &v56, v55);
  v38 = *(int**)(a2 + 200);
  v39 = *v38;
  v40 = (*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL) + 559LL) &
        -*(_QWORD*)(*(_QWORD*)(a2 + 184) + 104LL);
  if ((*v38 & 1) == 0) {
    v41 = *((_QWORD*)v38 + 8);
    v42 = v41 + v40;
    *((_QWORD*)v38 + 8) = v42;
    if ((v39 & 2) != 0) {
      goto LABEL_34;
    }
    goto LABEL_32;
  }
  LODWORD(v41) = atomic_fetch_add(*((atomic_ullong* volatile*)v38 + 8), v40);
  if ((*(_BYTE*)v38 & 1) == 0) {
    v42 = *((_QWORD*)v38 + 8);
  LABEL_32:
    if ((unsigned __int64)(*((_QWORD*)v38 + 9) + v42) <= *((_QWORD*)v38 + 3)) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v50 = *((unsigned __int64**)v38 + 9);
  v51 = atomic_load(*((unsigned __int64**)v38 + 8));
  v52 = atomic_load(v50);
  if (v52 + v51 > *((_QWORD*)v38 + 3)) {
  LABEL_33:
    LODWORD(v41) = 0;
  }
LABEL_34:
  **((_DWORD**)v12 + 36) = v41;
  v43 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
  if (v43 != 0) {
    v44 = (_DWORD*)(v43 + **((unsigned int**)v12 + 36));
    v45 = Window_5892c0(*(_QWORD*)(a4 + 8), a2);
    memcpy(v44, v45, 560);
    if ((v12[266] & 1) != 0) {
      v46 = 132355;
    }
    else {
      v46 = 1073874179;
    }
    v44[139] = v46;
    v47 = *(_DWORD*)(a3 + 4);
    v48 = *((_DWORD*)v12 + 21);
    *(float*)&v49 = (float)(*(float*)a3 + *((float*)v12 + 20)) - a5[1];
    *(float*)v55 = a5[1];
    v55[1] = v48;
    v56 = __PAIR64__(v47, v49);
    return (unsigned __int8*)DynamicRenderingTexture_576230(a2, v44, &v56, v55);
  }
  return result;
}

#pragma GCC visibility pop
