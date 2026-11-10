#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Actor_101e80_alt1(_QWORD, _QWORD) __asm__("Actor_101e80");
__int64 Actor_102150_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("Actor_102150");
__int64 Crc32List_11e6a0(_QWORD, _QWORD);
__int64 GameRoutine_101a70(__int64);
__int64 GameRoutine_10d050(_QWORD, _QWORD);
__int64 GameRoutine_119040(_QWORD);
__int64 GameRoutine_119060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_119080(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 snd_Manager_stopImpl(_QWORD, _QWORD, _QWORD);
__int64 snd_Param_update(_QWORD, float);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_WeakHandle_set(_QWORD, _QWORD);
__int64 snd_fnd_normalizeAngle(_QWORD, float);
__int64 snd_fnd_rotate(_QWORD, _QWORD, float);
extern _UNKNOWN* GameData_2134498;
extern __int64 (*GameData_1f54638[])();
extern __int64 (*GameData_1f546a8[])();
extern __int64 (*GameData_1f54728[])();
extern __int64 GameData_212e2d8;
extern __int64* GameData_21344a0[4];
extern __int64* snd_s_target_ptr;
extern float snd_g_semitoneRatios[170];
float Listener_112af0(void);
float Listener_112b10(_QWORD);
float snd_FadeRandom_getValue(_QWORD);
float snd_Fade_getValue(_QWORD);
float snd_Param_calcVolume_126ad0(_QWORD);
long double snd_fnd_calcDistance_fec10(float, float, float, float);
void GameRoutine_651250(void*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void Actor_DeletingDestructor_101be0(__int64 a1);
__int64 Actor_101c40(__int64 result, float a2);
__int64 Actor_101e80(__int64 a1, __int64 a2);
void Actor_102150(__int64 a1, float* a2, float* a3, float* a4);
_QWORD* Actor_102300(_QWORD* result);
void Actor_Unknown9(__int64 a1, float a2, float a3, float a4);
void Actor_Unknown128(__int64 a1, float a2, float a3, float a4);
__int64 Actor_Unknown10(__int64 a1, float* a2);
__int64 Actor_Unknown130(__int64 a1, float* a2);
float Actor_102560(__int64 a1, __int64 a2);
float Actor_102590(__int64 a1, __int64 a2);
float Actor_Unknown11(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5);
float Actor_Unknown129(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5);
float Actor_Unknown13(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5);
float Actor_Unknown133(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5);
__int64 Actor_Unknown20(__int64 a1);
__int64 Actor_Unknown93(__int64 a1);
void Actor_Unknown21(__int64 a1);
void Actor_Unknown94(__int64 a1);
void Actor_Unknown22(__int64 a1);
void Actor_Unknown95(__int64 a1);
void Actor_Unknown23(__int64 a1);
void Actor_Unknown96(__int64 a1);
void Actor_Unknown97(__int64 a1);
void Actor_Unknown25(__int64 a1);
void Actor_Unknown98(__int64 a1);
void Actor_Unknown26(__int64 a1);
void Actor_Unknown99(__int64 a1);
void Actor_Unknown27(__int64 a1);
void Actor_Unknown100(__int64 a1);
void Actor_Unknown28(__int64 a1);
void Actor_Unknown101(__int64 a1);
void Actor_Unknown29(__int64 a1);
void Actor_Unknown102(__int64 a1);
__int64 Actor_Unknown30(__int64 result, __int64 a2);
__int64 Actor_Unknown31(__int64 result, __int64 a2);
__int64* Actor_Unknown8();
__int64 Actor_Unknown17(__int64 result, int a2);
__int64 Actor_Unknown18(__int64 result, int a2);
bool Actor_Unknown19(__int64 a1, int a2);
_QWORD* snd_Actor_renewActorRestartVoice_lambda0_Invoke(__int64 a1,
                                                        __int64* a2);

void Actor_DeletingDestructor_101be0(__int64 a1)
{
  GameRoutine_101a70(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x1688u);
}

__int64 Actor_101c40(__int64 result, float a2)
{
  unsigned __int8* v2;
  __int64 v3;
  __int64 v5;
  _DWORD* v6;
  float v7;
  float v8;
  float v9;
  int v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  long double v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;

  v2 = (unsigned __int8*)(result + 4096);
  if (*(_BYTE*)(result + 5712) == 1) {
    v3 = result;
    v5 = snd_fnd_WeakHandle_get(result + 5640, a2);
    if (v5 == 0) {
      snd_Param_update(v3 + 40, a2);
      v7 = *(float*)(v3 + 2872);
      v8 = *(float*)(v3 + 2876);
      v9 = *(float*)(v3 + 2880);
      v10 = v2[1564];
      v22 = v8;
      v23 = v7;
      v21 = v9;
      if (v10 == 1) {
        v11 = *(float*)(v3 + 5672);
        if (v2[1623] == 1) {
          v12 = *(float*)(v3 + 5676);
          v13 = *(float*)(v3 + 5680);
          v2[1622] = 1;
        }
        else {
          v14 = v11 - v7;
          v15 = *(float*)(v3 + 5676);
          v16 = *(float*)(v3 + 5680) - v9;
          v17 = snd_fnd_calcDistance_fec10(0.0, 0.0, v11 - v7, v16);
          if (*(float*)&v17 >= 0.1) {
            if (*(float*)&v17 <= 20.0) {
              if (*(float*)&v17 <= 10.0) {
                v18 = 0.25;
              }
              else {
                v18 = 0.5;
              }
              v11 = v7 + (float)(v14 * v18);
              v12 = v8 + (float)((float)(v15 - v8) * v18);
              v13 = v9 + (float)(v16 * v18);
            }
            else {
              v11 = *(float*)(v3 + 5672);
              v12 = *(float*)(v3 + 5676);
              v13 = *(float*)(v3 + 5680);
              v2[1622] = 1;
            }
          }
          else {
            v11 = *(float*)(v3 + 5672);
            v12 = *(float*)(v3 + 5676);
            v13 = *(float*)(v3 + 5680);
          }
        }
        v22 = v12;
        v23 = v11;
        v21 = v13;
        *(float*)(v3 + 2872) = v11;
        *(float*)(v3 + 2876) = v12;
        *(float*)(v3 + 2880) = v13;
      }
      result = Actor_102150_alt1(v3, &v23, &v22, &v21);
      v19 = v22;
      if (*(float*)(v3 + 5696) == v23) {
        v20 = v21;
        if (*(float*)(v3 + 5700) == v22 && *(float*)(v3 + 5704) == v21) {
          return result;
        }
      }
      else {
        v20 = v21;
      }
      *(float*)(v3 + 5696) = v23;
      *(float*)(v3 + 5700) = v19;
      *(float*)(v3 + 5704) = v20;
      v2[1621] = 1;
      return result;
    }
    if (*(float*)(v3 + 5696) != *(float*)(v5 + 104) ||
        *(float*)(v3 + 5700) != *(float*)(v5 + 108) ||
        *(float*)(v3 + 5704) != *(float*)(v5 + 112)) {
      v2[1621] = 1;
    }
    v2[1616] = *(_BYTE*)(v5 + 120);
    v6 = (_DWORD*)v5;
    result = Actor_101e80_alt1(v3 + 48, v5 - 5544);
    *(_DWORD*)(v3 + 5696) = v6[26];
    *(_DWORD*)(v3 + 5700) = v6[27];
    *(_DWORD*)(v3 + 5704) = v6[28];
    *(_DWORD*)(v3 + 5732) = v6[35];
  }
  return result;
}

__int64 Actor_101e80(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
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
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *(_QWORD*)a1 = *(_QWORD*)a2;
  GameRoutine_10d050(a1 + 8, a2 + 8);
  GameRoutine_10d050(a1 + 208, a2 + 208);
  GameRoutine_10d050(a1 + 408, a2 + 408);
  GameRoutine_10d050(a1 + 608, a2 + 608);
  GameRoutine_10d050(a1 + 808, a2 + 808);
  GameRoutine_10d050(a1 + 1008, a2 + 1008);
  *(_DWORD*)(a1 + 1208) = *(_DWORD*)(a2 + 1208);
  GameRoutine_10d050(a1 + 1216, a2 + 1216);
  GameRoutine_10d050(a1 + 1416, a2 + 1416);
  GameRoutine_10d050(a1 + 1616, a2 + 1616);
  GameRoutine_10d050(a1 + 1816, a2 + 1816);
  GameRoutine_10d050(a1 + 2016, a2 + 2016);
  GameRoutine_10d050(a1 + 2216, a2 + 2216);
  GameRoutine_10d050(a1 + 2416, a2 + 2416);
  GameRoutine_10d050(a1 + 2616, a2 + 2616);
  *(_DWORD*)(a1 + 2824) = *(_DWORD*)(a2 + 2824);
  *(_DWORD*)(a1 + 2828) = *(_DWORD*)(a2 + 2828);
  *(_DWORD*)(a1 + 2832) = *(_DWORD*)(a2 + 2832);
  *(_DWORD*)(a1 + 2848) = *(_DWORD*)(a2 + 2848);
  *(_DWORD*)(a1 + 2852) = *(_DWORD*)(a2 + 2852);
  *(_DWORD*)(a1 + 2856) = *(_DWORD*)(a2 + 2856);
  v4 = *(_QWORD*)(a2 + 2864);
  v5 = *(_QWORD*)(a2 + 2872);
  v6 = *(_QWORD*)(a2 + 2880);
  *(_QWORD*)(a1 + 2888) = *(_QWORD*)(a2 + 2888);
  *(_QWORD*)(a1 + 2880) = v6;
  *(_QWORD*)(a1 + 2872) = v5;
  *(_QWORD*)(a1 + 2864) = v4;
  GameRoutine_10d050(a1 + 2896, a2 + 2896);
  v7 = *(_QWORD*)(a2 + 3104);
  *(_QWORD*)(a1 + 3096) = *(_QWORD*)(a2 + 3096);
  *(_QWORD*)(a1 + 3104) = v7;
  GameRoutine_10d050(a1 + 3112, a2 + 3112);
  v8 = *(_QWORD*)(a2 + 3320);
  *(_QWORD*)(a1 + 3312) = *(_QWORD*)(a2 + 3312);
  *(_QWORD*)(a1 + 3320) = v8;
  GameRoutine_10d050(a1 + 3328, a2 + 3328);
  v9 = *(_QWORD*)(a2 + 3528);
  *(_QWORD*)(a1 + 3536) = *(_QWORD*)(a2 + 3536);
  *(_QWORD*)(a1 + 3528) = v9;
  *(_QWORD*)(a1 + 3544) = *(_QWORD*)(a2 + 3544);
  *(_QWORD*)(a1 + 3560) = *(_QWORD*)(a2 + 3560);
  v10 = *(_QWORD*)(a2 + 3640);
  v11 = *(_QWORD*)(a2 + 3648);
  v12 = *(_QWORD*)(a2 + 3656);
  *(_DWORD*)(a1 + 3664) = *(_DWORD*)(a2 + 3664);
  *(_QWORD*)(a1 + 3656) = v12;
  *(_QWORD*)(a1 + 3648) = v11;
  *(_QWORD*)(a1 + 3640) = v10;
  v13 = *(_QWORD*)(a2 + 3608);
  v14 = *(_QWORD*)(a2 + 3616);
  v15 = *(_QWORD*)(a2 + 3624);
  *(_QWORD*)(a1 + 3632) = *(_QWORD*)(a2 + 3632);
  *(_QWORD*)(a1 + 3624) = v15;
  *(_QWORD*)(a1 + 3616) = v14;
  *(_QWORD*)(a1 + 3608) = v13;
  v16 = *(_QWORD*)(a2 + 3576);
  v17 = *(_QWORD*)(a2 + 3584);
  v18 = *(_QWORD*)(a2 + 3592);
  *(_QWORD*)(a1 + 3600) = *(_QWORD*)(a2 + 3600);
  *(_QWORD*)(a1 + 3592) = v18;
  *(_QWORD*)(a1 + 3584) = v17;
  *(_QWORD*)(a1 + 3576) = v16;
  *(_QWORD*)(a1 + 3568) = *(_QWORD*)(a2 + 3568);
  *(_QWORD*)(a1 + 3672) = *(_QWORD*)(a2 + 3672);
  GameRoutine_10d050(a1 + 3680, a2 + 3680);
  GameRoutine_10d050(a1 + 3880, a2 + 3880);
  GameRoutine_10d050(a1 + 4080, a2 + 4080);
  GameRoutine_10d050(a1 + 4280, a2 + 4280);
  GameRoutine_10d050(a1 + 4480, a2 + 4480);
  GameRoutine_10d050(a1 + 4680, a2 + 4680);
  GameRoutine_10d050(a1 + 4880, a2 + 4880);
  GameRoutine_10d050(a1 + 5080, a2 + 5080);
  memcpy(a1 + 5280, a2 + 5280, 192);
  *(_QWORD*)(a1 + 5472) = *(_QWORD*)(a2 + 5472);
  v20 = *(_QWORD*)(a2 + 5488);
  v21 = *(_QWORD*)(a2 + 5496);
  v22 = *(_QWORD*)(a2 + 5504);
  *(_QWORD*)(a1 + 5480) = *(_QWORD*)(a2 + 5480);
  *(_QWORD*)(a1 + 5504) = v22;
  *(_QWORD*)(a1 + 5496) = v21;
  *(_QWORD*)(a1 + 5488) = v20;
  v23 = *(_QWORD*)(a2 + 5520);
  v24 = *(_QWORD*)(a2 + 5528);
  LODWORD(v22) = *(_DWORD*)(a2 + 5536);
  *(_QWORD*)(a1 + 5512) = *(_QWORD*)(a2 + 5512);
  *(_DWORD*)(a1 + 5536) = v22;
  *(_QWORD*)(a1 + 5528) = v24;
  *(_QWORD*)(a1 + 5520) = v23;
  return a1;
}

void Actor_102150(__int64 a1, float* a2, float* a3, float* a4)
{
  __int64 v5;
  unsigned int v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;

  if (*(_BYTE*)(a1 + 5720) == 1) {
    *a4 = *(float*)(a1 + 5724) * *a4;
    *a3 = *(float*)(a1 + 5728) * *a3;
  }
  else {
    v5 = *(_QWORD*)(a1 + 32);
    v9 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 5624) + 16LL))(
        *(_QWORD*)(a1 + 5624));
    v10 = Crc32List_11e6a0(v5, v9);
    if (v10 != 0) {
      v11 = *(float*)(a1 + 5724);
      v12 = v10;
      v13 = v11 * Listener_112af0();
      if (v13 != 1.0) {
        (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)(v12 + 40) +
                                                      1048LL))(&v21, v12 + 40);
        v14 = (*(float (**)(__int64))(*(_QWORD*)(v12 + 40) + 312LL))(v12 + 40);
        v15 = *a2 - v22;
        v25 = *a4 - v24;
        v26 = v15;
        v16 = snd_fnd_rotate(&v26, &v25, v14);
        v25 = v13 * v25;
        snd_fnd_normalizeAngle(v16, -v14);
        snd_fnd_rotate(&v26, &v25, v17);
        v18 = v24;
        *a2 = v26 + v22;
        *a4 = v25 + v18;
      }
      v19 = *(float*)(a1 + 5728);
      v20 = v19 * Listener_112b10(v12);
      if (v20 != 1.0) {
        (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)(v12 + 40) +
                                                      1048LL))(&v21, v12 + 40);
        *a3 = v23 + (float)(v20 * (float)(*a3 - v23));
      }
    }
  }
}

_QWORD* Actor_102300(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  _QWORD* v4;
  int v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD v8[2];
  int v9;
  __int64 v10;
  __int64 v11;

  if (*((_BYTE*)result + 5712) == 1 && *((_BYTE*)result + 5717) == 1) {
    v10 = v1;
    v11 = v2;
    v3 = *((unsigned __int8*)result + 5718);
    *((_BYTE*)result + 5717) = 0;
    if (v3 == 1) {
      *((_BYTE*)result + 5718) = 0;
      v4 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD))(
          *(_QWORD*)result[703] + 88LL))((_QWORD*)result[703], result[703]);
      result = v4;
    }
    v5 = *((_DWORD*)result + 1426);
    v6 = result[712];
    v7 = (_QWORD*)result[703];
    v8[0] = GameData_212e2d8 + 16;
    v8[1] = v6;
    v9 = v5;
    return (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
        *v7 + 72LL))(v7, v7, v8);
  }
  return result;
}

void Actor_Unknown9(__int64 a1, float a2, float a3, float a4)
{
  float v4;
  _BYTE* v5;
  bool v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v4 = *(float*)(a1 + 2872);
  v5 = (_BYTE*)(a1 + 4096);
  v12 = a2;
  v10 = a4;
  v11 = a3;
  if (v4 != a2 ||
      (*(float*)(a1 + 2876) == a3 ? (v7 = *(float*)(a1 + 2880) == a4)
                                  : (v7 = false),
       !v7)) {
    *(float*)(a1 + 2872) = a2;
    *(float*)(a1 + 2876) = a3;
    *(float*)(a1 + 2880) = a4;
    *(float*)(a1 + 5672) = a2;
    *(float*)(a1 + 5676) = a3;
    *(float*)(a1 + 5680) = a4;
    Actor_102150(a1, &v12, &v11, &v10);
    v8 = v12;
    v5[1621] = 1;
    *(float*)(a1 + 5696) = v8;
    v9 = v10;
    *(float*)(a1 + 5700) = v11;
    *(float*)(a1 + 5704) = v9;
  }
  v5[1564] = 0;
  v5[1616] = 1;
}

void Actor_Unknown128(__int64 a1, float a2, float a3, float a4)
{
  float v4;
  _BYTE* v5;
  bool v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  v4 = *(float*)(a1 + 2832);
  v5 = (_BYTE*)(a1 + 4096);
  v12 = a2;
  v10 = a4;
  v11 = a3;
  if (v4 != a2 ||
      (*(float*)(a1 + 2836) == a3 ? (v7 = *(float*)(a1 + 2840) == a4)
                                  : (v7 = false),
       !v7)) {
    *(float*)(a1 + 2832) = a2;
    *(float*)(a1 + 2836) = a3;
    *(float*)(a1 + 2840) = a4;
    *(float*)(a1 + 5632) = a2;
    *(float*)(a1 + 5636) = a3;
    *(float*)(a1 + 5640) = a4;
    Actor_102150(a1 - 40, &v12, &v11, &v10);
    v8 = v12;
    v5[1581] = 1;
    *(float*)(a1 + 5656) = v8;
    v9 = v10;
    *(float*)(a1 + 5660) = v11;
    *(float*)(a1 + 5664) = v9;
  }
  v5[1524] = 0;
  v5[1576] = 1;
}

__int64 Actor_Unknown10(__int64 a1, float* a2)
{
  return (*(__int64 (**)(__int64, float, float, float))(*(_QWORD*)a1 + 72LL))(
      a1, a2[2], a2[3], a2[4]);
}

__int64 Actor_Unknown130(__int64 a1, float* a2)
{
  return (*(__int64 (**)(__int64, float, float, float))(
      *(_QWORD*)(a1 - 40) + 72LL))(a1 - 40, a2[2], a2[3], a2[4]);
}

float Actor_102560(__int64 a1, __int64 a2)
{
  float result;

  result = *(float*)(a2 + 16);
  *(_QWORD*)(a1 + 5672) = *(_QWORD*)(a2 + 8);
  *(float*)(a1 + 5680) = result;
  *(_BYTE*)(a1 + 5719) = 0;
  *(_BYTE*)(a1 + 5660) = 1;
  *(_BYTE*)(a1 + 5712) = 1;
  return result;
}

float Actor_102590(__int64 a1, __int64 a2)
{
  float result;

  result = *(float*)(a2 + 16);
  *(_QWORD*)(a1 + 5672) = *(_QWORD*)(a2 + 8);
  *(float*)(a1 + 5680) = result;
  *(_BYTE*)(a1 + 5719) = 1;
  *(_BYTE*)(a1 + 5660) = 1;
  *(_BYTE*)(a1 + 5712) = 1;
  return result;
}

float Actor_Unknown11(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5)
{
  __int64 v9;
  float result;

  v9 = snd_fnd_WeakHandle_get(a1 + 5640, a5);
  if (v9 != 0) {
    (*(void (**)(__int64, _DWORD*, _DWORD*, float*))(
        *(_QWORD*)(v9 - 5592) + 88LL))(v9 - 5592, a2, a3, a4);
  }
  else {
    *a2 = *(_DWORD*)(a1 + 2872);
    *a3 = *(_DWORD*)(a1 + 2876);
    result = *(float*)(a1 + 2880);
    *a4 = result;
  }
  return result;
}

float Actor_Unknown129(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5)
{
  __int64 v9;
  float result;

  v9 = snd_fnd_WeakHandle_get(a1 + 5600, a5);
  if (v9 != 0) {
    (*(void (**)(__int64, _DWORD*, _DWORD*, float*))(
        *(_QWORD*)(v9 - 5592) + 88LL))(v9 - 5592, a2, a3, a4);
  }
  else {
    *a2 = *(_DWORD*)(a1 + 2832);
    *a3 = *(_DWORD*)(a1 + 2836);
    result = *(float*)(a1 + 2840);
    *a4 = result;
  }
  return result;
}

float Actor_Unknown13(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5)
{
  __int64 v9;
  float result;

  v9 = snd_fnd_WeakHandle_get(a1 + 5640, a5);
  if (v9 != 0) {
    (*(void (**)(__int64, _DWORD*, _DWORD*, float*))(
        *(_QWORD*)(v9 - 5592) + 104LL))(v9 - 5592, a2, a3, a4);
  }
  else {
    *a2 = *(_DWORD*)(a1 + 5696);
    *a3 = *(_DWORD*)(a1 + 5700);
    result = *(float*)(a1 + 5704);
    *a4 = result;
  }
  return result;
}

float Actor_Unknown133(__int64 a1, _DWORD* a2, _DWORD* a3, float* a4, float a5)
{
  __int64 v9;
  float result;

  v9 = snd_fnd_WeakHandle_get(a1 + 5600, a5);
  if (v9 != 0) {
    (*(void (**)(__int64, _DWORD*, _DWORD*, float*))(
        *(_QWORD*)(v9 - 5592) + 104LL))(v9 - 5592, a2, a3, a4);
  }
  else {
    *a2 = *(_DWORD*)(a1 + 5656);
    *a3 = *(_DWORD*)(a1 + 5660);
    result = *(float*)(a1 + 5664);
    *a4 = result;
  }
  return result;
}

__int64 Actor_Unknown20(__int64 a1)
{
  __int64 v2;

  v2 = -1;
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)a1 + 168LL))(a1, &v2);
}

__int64 Actor_Unknown93(__int64 a1)
{
  __int64 v2;

  v2 = -1;
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)(a1 - 40) + 168LL))(
      a1 - 40, &v2);
}

void Actor_Unknown21(__int64 a1)
{
  float v2;
  int v3;

  v2 = snd_Param_calcVolume_126ad0(a1 + 40);
  v3 = 0;
  if (v2 >= 0.0) {
    v3 = LODWORD(v2);
    if (v2 > 128.0) {
      v3 = 1124073472;
    }
  }
  *(_DWORD*)(a1 + 5520) = v3;
}

void Actor_Unknown94(__int64 a1)
{
  float v2;
  int v3;

  v2 = snd_Param_calcVolume_126ad0(a1);
  v3 = 0;
  if (v2 >= 0.0) {
    v3 = LODWORD(v2);
    if (v2 > 128.0) {
      v3 = 1124073472;
    }
  }
  *(_DWORD*)(a1 + 5480) = v3;
}

void Actor_Unknown22(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 1664);
  v3 = -2.0;
  if (v2 >= -2.0) {
    v3 = v2;
    if (v2 > 2.0) {
      v3 = 2.0;
    }
  }
  *(float*)(a1 + 5524) = v3;
}

void Actor_Unknown95(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 1624);
  v3 = -2.0;
  if (v2 >= -2.0) {
    v3 = v2;
    if (v2 > 2.0) {
      v3 = 2.0;
    }
  }
  *(float*)(a1 + 5484) = v3;
}

void Actor_Unknown23(__int64 a1)
{
  float v2;
  float v3;
  float v4;

  v2 = snd_Fade_getValue(a1 + 1864);
  v3 = v2 + snd_FadeRandom_getValue(a1 + 3376);
  v4 = -2.0;
  if (v3 >= -2.0) {
    v4 = v3;
    if (v3 > 2.0) {
      v4 = 2.0;
    }
  }
  *(float*)(a1 + 5528) = v4;
}

void Actor_Unknown96(__int64 a1)
{
  float v2;
  float v3;
  float v4;

  v2 = snd_Fade_getValue(a1 + 1824);
  v3 = v2 + snd_FadeRandom_getValue(a1 + 3336);
  v4 = -2.0;
  if (v3 >= -2.0) {
    v4 = v3;
    if (v3 > 2.0) {
      v4 = 2.0;
    }
  }
  *(float*)(a1 + 5488) = v4;
}

void Actor_Unknown97(__int64 a1)
{
  float v2;
  float v3;
  int v4;
  int v5;
  float v6;
  float v7;
  float v8;
  int v9;

  v2 = snd_Fade_getValue(a1 + 2024);
  v3 = v2 + snd_FadeRandom_getValue(a1 + 3120);
  if ((int)(float)(v3 * 12.0) <= -84) {
    v4 = -84;
  }
  else {
    v4 = (int)(float)(v3 * 12.0);
  }
  if (v4 >= 84) {
    v5 = 84;
  }
  else {
    v5 = v4;
  }
  v6 = -(float)((float)(int)(float)(v3 * 12.0) - (float)(v3 * 12.0));
  v7 = snd_g_semitoneRatios[v5 + 84];
  if (v6 <= 0.0) {
    if (v5 <= -83) {
      v9 = -83;
    }
    else {
      v9 = v5;
    }
    v8 = v7 - snd_g_semitoneRatios[v9 + 83];
  }
  else {
    if (v4 >= 83) {
      v4 = 83;
    }
    v8 = snd_g_semitoneRatios[v4 + 85] - v7;
  }
  *(float*)(a1 + 5492) = v7 + (float)(v8 * v6);
}

void Actor_Unknown25(__int64 a1)
{
  float v2;
  float v3;
  float v4;

  v2 = snd_Fade_getValue(a1 + 3928);
  v3 = (float)(v2 + snd_Fade_getValue(a1 + 4128)) + *(float*)(a1 + 3724);
  v4 = 0.0;
  if (v3 >= 0.0) {
    v4 = v3;
    if (v3 > 1.0) {
      v4 = 1.0;
    }
  }
  *(float*)(a1 + 5536) = v4;
}

void Actor_Unknown98(__int64 a1)
{
  float v2;
  float v3;
  float v4;

  v2 = snd_Fade_getValue(a1 + 3888);
  v3 = (float)(v2 + snd_Fade_getValue(a1 + 4088)) + *(float*)(a1 + 3684);
  v4 = 0.0;
  if (v3 >= 0.0) {
    v4 = v3;
    if (v3 > 1.0) {
      v4 = 1.0;
    }
  }
  *(float*)(a1 + 5496) = v4;
}

void Actor_Unknown26(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 3728);
  v3 = 0.0;
  if (v2 >= 0.0) {
    v3 = v2;
    if (v2 > 1.0) {
      v3 = 1.0;
    }
  }
  *(float*)(a1 + 5540) = v3;
}

void Actor_Unknown99(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 3688);
  v3 = 0.0;
  if (v2 >= 0.0) {
    v3 = v2;
    if (v2 > 1.0) {
      v3 = 1.0;
    }
  }
  *(float*)(a1 + 5500) = v3;
}

void Actor_Unknown27(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 4528);
  v3 = 0.0;
  if (v2 >= 0.0) {
    v3 = v2;
    if (v2 > 1.0) {
      v3 = 1.0;
    }
  }
  *(float*)(a1 + 5544) = v3;
}

void Actor_Unknown100(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 4488);
  v3 = 0.0;
  if (v2 >= 0.0) {
    v3 = v2;
    if (v2 > 1.0) {
      v3 = 1.0;
    }
  }
  *(float*)(a1 + 5504) = v3;
}

void Actor_Unknown28(__int64 a1)
{
  float v2;
  float v3;
  float v4;

  v2 = snd_Fade_getValue(a1 + 4728);
  v3 = v2 + snd_Fade_getValue(a1 + 4928);
  v4 = 0.0;
  if (v3 >= 0.0) {
    v4 = v3;
    if (v3 > 1.0) {
      v4 = 1.0;
    }
  }
  *(float*)(a1 + 5548) = v4;
}

void Actor_Unknown101(__int64 a1)
{
  float v2;
  float v3;
  float v4;

  v2 = snd_Fade_getValue(a1 + 4688);
  v3 = v2 + snd_Fade_getValue(a1 + 4888);
  v4 = 0.0;
  if (v3 >= 0.0) {
    v4 = v3;
    if (v3 > 1.0) {
      v4 = 1.0;
    }
  }
  *(float*)(a1 + 5508) = v4;
}

void Actor_Unknown29(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 5128);
  v3 = 0.0;
  if (v2 >= 0.0) {
    v3 = v2;
    if (v2 > 1.0) {
      v3 = 1.0;
    }
  }
  *(float*)(a1 + 5552) = v3;
}

void Actor_Unknown102(__int64 a1)
{
  float v2;
  float v3;

  v2 = snd_Fade_getValue(a1 + 5088);
  v3 = 0.0;
  if (v2 >= 0.0) {
    v3 = v2;
    if (v2 > 1.0) {
      v3 = 1.0;
    }
  }
  *(float*)(a1 + 5512) = v3;
}

__int64 Actor_Unknown30(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  int v13;

  v2 = result + 4096;
  if ((*(_BYTE*)(result + 5720) & 1) == 0) {
    v3 = *(_QWORD*)(result + 32);
    v4 = (_QWORD*)result;
    v12 = 0;
    v13 = 0x2000;
    snd_fnd_WeakHandle_set(&v12, result + 5592);
    snd_Manager_stopImpl(v3, a2, &v12);
    v6 = snd_s_target_ptr;
    if (v4[704] != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 480LL))(
          *snd_s_target_ptr);
    }
    v7 = v4[4];
    v4[704] = v4[703];
    v8 = GameRoutine_119080(v7);
    v9 = *v6;
    v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v4[703] + 32LL))(v4[703]);
    v11 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v9 + 472LL))(
        v9, v10, v8);
    v4[703] = v11;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v11 + 24LL))(v11, v8);
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v4[703] + 112LL))(v4[703]);
    *(_BYTE*)(v2 + 1621) = 1;
  }
  return result;
}

__int64 Actor_Unknown31(__int64 result, __int64 a2)
{
  _BYTE* v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;
  _QWORD v25[2];
  int v26;

  v2 = (_BYTE*)(result + 4096);
  if ((*(_BYTE*)(result + 5720) & 1) == 0) {
    v4 = result;
    v5 = snd_s_target_ptr;
    if (*(_QWORD*)(result + 5632) != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 480LL))(
          *snd_s_target_ptr);
    }
    v6 = *(_QWORD*)(v4 + 32);
    *(_QWORD*)(v4 + 5632) = *(_QWORD*)(v4 + 5624);
    v7 = GameRoutine_119080(v6);
    v8 = *v5;
    v9 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 5624) + 32LL))(
        *(_QWORD*)(v4 + 5624));
    v10 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v8 + 472LL))(
        v8, v9, v7);
    *(_QWORD*)(v4 + 5624) = v10;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v10 + 24LL))(v10, v7);
    v11 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 5624) + 112LL))(
        *(_QWORD*)(v4 + 5624));
    v2[1621] = 1;
    if (v2[1616] == 1) {
      v12 = (unsigned __int8)v2[1622];
      v2[1621] = 0;
      if (v12 == 1) {
        v13 = *(_QWORD*)(v4 + 5624);
        v2[1622] = 0;
        (*(void (**)(__int64))(*(_QWORD*)v13 + 88LL))(v13);
      }
      v14 = *(_QWORD*)(v4 + 5624);
      v15 = *(_DWORD*)(v4 + 5704);
      v16 = *(_QWORD*)(v4 + 5696);
      v25[0] = GameData_212e2d8 + 16;
      v25[1] = v16;
      v26 = v15;
      v11 = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v14 + 72LL))(v14, v25);
    }
    GameRoutine_119040(v11);
    v19 = *(_QWORD*)(v4 + 32);
    v20 = v23;
    v23[2] = a2;
    v23[0] = GameData_1f54638;
    v23[1] = v4;
    v24 = v23;
    v21 = **(_QWORD**)(v19 + 40);
    if (v21 == 0) {
      goto LABEL_14;
    }
    do {
      v25[0] = v21;
      v21 = *(_QWORD*)(v21 + 5616);
      if (v24 == nullptr) {
        GameRoutine_60a310(0, v17, v18);
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v24 + 48LL))(v24, v25);
    } while (v21 != 0);
    v20 = v24;
    if (v24 == v23) {
    LABEL_14:
      v22 = 32;
    }
    else {
      if (v24 == nullptr) {
        return GameRoutine_119060(v20, v17, v18);
      }
      v22 = 40;
    }
    v20 = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*v20 + v22))(
        v20, v17, v18);
    return GameRoutine_119060(v20, v17, v18);
  }
  return result;
}

__int64* Actor_Unknown8()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2134498,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_21344a0[0];
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_2134498) != 0) {
    *GameData_21344a0[0] = 0;
    __cxa_guard_release(GameData_2134498);
  }
  return GameData_21344a0[0];
}

__int64 Actor_Unknown17(__int64 result, int a2)
{
  *(_DWORD*)(result + 5732) |= a2;
  return result;
}

__int64 Actor_Unknown18(__int64 result, int a2)
{
  *(_DWORD*)(result + 5732) &= ~a2;
  return result;
}

bool Actor_Unknown19(__int64 a1, int a2)
{
  return (*(_DWORD*)(a1 + 5732) & a2) != 0;
}

_QWORD* snd_Actor_renewActorRestartVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;
  __int64 v22;

  v2 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  result = v20;
  v21 = v20;
  v20[2] = v3;
  v7 = *(__int64**)(v2 + 5816);
  v20[0] = GameData_1f546a8;
  v20[1] = v4;
  v8 = *v7;
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 5640);
    result = v20;
    v18[0] = v8;
    while (1) {
      (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v18);
      result = v21;
      if (v9 == 0) {
        break;
      }
      v18[0] = v9;
      v9 = *(_QWORD*)(v9 + 5640);
      if (v21 == nullptr) {
      LABEL_15:
        GameRoutine_60a310(result, v10, v11);
      }
    }
    if (v21 != v20) {
      if (v21 != nullptr) {
        v12 = 40;
      LABEL_10:
        (*(void (**)(_QWORD*))(*result + v12))(result);
      }
      v13 = *(_QWORD*)(a1 + 16);
      v14 = *(__int64**)(v2 + 5856);
      result = v18;
      v18[0] = GameData_1f54728;
      v18[1] = v4;
      v19 = v18;
      v18[2] = v13;
      v15 = *v14;
      if (v15 == 0) {
        goto LABEL_19;
      }
      v16 = *(_QWORD*)(v15 + 6080);
      result = v18;
      v22 = v15;
      while (1) {
        (*(void (**)(_QWORD*, __int64*))(*result + 48LL))(result, &v22);
        result = v19;
        if (v16 == 0) {
          break;
        }
        v22 = v16;
        v16 = *(_QWORD*)(v16 + 6080);
        if (v19 == nullptr) {
          goto LABEL_15;
        }
      }
      if (v19 == v18) {
      LABEL_19:
        v17 = 32;
      }
      else {
        if (v19 == nullptr) {
          return result;
        }
        v17 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
          *result + v17))(result, v10, v11);
    }
  }
  v12 = 32;
  goto LABEL_10;
}

#pragma GCC visibility pop
