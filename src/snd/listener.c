#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_101e80(__int64, __int64);
__int64 GameRoutine_112c20(__int64, int*);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 Param_Destructor(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 snd_HandlePtr_unregisterHandle(_QWORD);
__int64 snd_Obj_Destroy_Obj_126190(__int64);
__int64 snd_Param_update(_QWORD, float);
__int64 snd_data_findSurroundData(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__int64 snd_fnd_calcCrc32(_QWORD, _QWORD);
extern _UNKNOWN* GameData_2134558;
extern __int64 GameData_2134560;
extern __int64 snd_s_target;
extern __int64* GameData_2134248[3];
extern __int64* GameData_2134550;
extern __int64* snd_g_memory_ptr[2];
long double snd_fnd_calcAngle_fecf0(float, float, float, float);
__int64 Listener_Destructor(__int64 a1);
float Listener_112890(__int64 a1, float a2);
__int64 Listener_1129c0(__int64 a1);
float Listener_112af0(__int64 a1);
float Listener_112b10(__int64 a1);
__int64 Listener_Unknown9(__int64 result, float a2, float a3, float a4);
__int64 Listener_112b50(__int64 result, float a2, float a3, float a4);
float Listener_Unknown10(__int64 a1, __int64 a2);
float Listener_112ba0(__int64 a1, __int64 a2);
void Listener_112bd0(__int64 a1, float a2, float a3, float a4);
__int64 Listener_112d70(__int64 a1, __int64 a2);
__int64 Listener_Unknown8();
__int64 Listener_Destructor_alt1(_QWORD) __asm__("Listener_Destructor");
void GameRoutine_651250(void*, unsigned __int64);
void Listener_DeletingDestructor(__int64 a1);
_QWORD* ConstructString_1901f0(_QWORD* result);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_a392e0(__int64, __int64, ...);
__int64 Listener_112c20(__int64 a1, int* a2);

__int64 Listener_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;

  v2 = GameData_2134550;
  *(_QWORD*)a1 = GameData_2134550 + 2;
  *(_QWORD*)(a1 + 40) = v2 + 15;
  v3 = a1 + 40;
  *(_QWORD*)(a1 + 5592) = v2 + 156;
  v4 = *(_QWORD*)(a1 + 5624);
  *(_QWORD*)(a1 + 5624) = 0;
  (*(void (**)(__int64, __int64))(*(_QWORD*)snd_s_target + 448LL))(snd_s_target,
                                                                   v4);
  if ((*(_BYTE*)(a1 + 5640) & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5656));
  }
  *(_QWORD*)(a1 + 5592) = GameData_2134248[0] + 2;
  snd_HandlePtr_unregisterHandle(a1 + 5592);
  Param_Destructor(v3);
  return snd_Obj_Destroy_Obj_126190(a1);
}

void Listener_DeletingDestructor(__int64 a1)
{
  Listener_Destructor_alt1(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x1688u);
}

float Listener_112890(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  float result;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;

  v4 = snd_fnd_WeakHandle_get(a1 + 5664, a2);
  if (v4 != 0) {
    v5 = v4;
    GameRoutine_101e80(a1 + 48, v4 - 5544);
    *(_DWORD*)(a1 + 5688) = *(_DWORD*)(v5 + 96);
    *(_DWORD*)(a1 + 5692) = *(_DWORD*)(v5 + 100);
    *(_DWORD*)(a1 + 5696) = *(_DWORD*)(v5 + 104);
    *(_DWORD*)(a1 + 5712) = *(_DWORD*)(v5 + 120);
    *(_DWORD*)(a1 + 5716) = *(_DWORD*)(v5 + 124);
    *(_DWORD*)(a1 + 5720) = *(_DWORD*)(v5 + 128);
    *(_DWORD*)(a1 + 5736) = *(_DWORD*)(v5 + 144);
    *(_DWORD*)(a1 + 5740) = *(_DWORD*)(v5 + 148);
    result = *(float*)(v5 + 152);
    *(float*)(a1 + 5744) = result;
    *(_QWORD*)(a1 + 5632) = *(_QWORD*)(v5 + 40);
  }
  else {
    snd_Param_update(a1 + 40, a2);
    if (*(_BYTE*)(a1 + 5752) == 1 && (*(_BYTE*)(a1 + 5753) & 1) == 0) {
      v7 = *(float*)(a1 + 5736);
      v8 = *(float*)(a1 + 5756);
      v9 = *(float*)(a1 + 5712) - v7;
      *(_BYTE*)(a1 + 5752) = 0;
      v10 = v7 + (float)(v9 / v8);
      v11 = *(float*)(a1 + 5716);
      *(float*)(a1 + 2872) = v10;
      v12 = *(float*)(a1 + 5740) +
            (float)((float)(v11 - *(float*)(a1 + 5740)) / v8);
      v13 = *(float*)(a1 + 5720);
      *(float*)(a1 + 2876) = v12;
      result = *(float*)(a1 + 5744) +
               (float)((float)(v13 - *(float*)(a1 + 5744)) / v8);
      *(float*)(a1 + 2880) = result;
    }
  }
  return result;
}

__int64 Listener_1129c0(__int64 a1)
{
  __int64 v2;

  if (*(_BYTE*)(a1 + 5760) == 1) {
    *(_BYTE*)(a1 + 5760) = 0;
    v2 = *(_QWORD*)(a1 + 5632);
    if (v2 != 0) {
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 32LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(v2 + 4));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 40LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 8LL));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 48LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 12LL));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 56LL))(
          *(_QWORD*)(a1 + 5624),
          *(float*)(*(_QWORD*)(a1 + 5632) + 16LL) / 59.999f);
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 24LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 32LL));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(a1 + 5624) + 16LL))(
          *(_QWORD*)(a1 + 5624), *(float*)(*(_QWORD*)(a1 + 5632) + 36LL));
    }
  }
  return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 5624) + 88LL))(
      *(_QWORD*)(a1 + 5624), a1);
}

float Listener_112af0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 5632);
  if (v1 != 0) {
    return *(float*)(v1 + 24);
  }
  else {
    return 1.0;
  }
}

float Listener_112b10(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 5632);
  if (v1 != 0) {
    return *(float*)(v1 + 28);
  }
  else {
    return 1.0;
  }
}

__int64 Listener_Unknown9(__int64 result, float a2, float a3, float a4)
{
  if ((*(_BYTE*)(result + 5753) & 1) == 0) {
    *(float*)(result + 2872) = a2;
    *(float*)(result + 2876) = a3;
    *(float*)(result + 2880) = a4;
    *(_BYTE*)(result + 5752) = 0;
  }
  return result;
}

__int64 Listener_112b50(__int64 result, float a2, float a3, float a4)
{
  if ((*(_BYTE*)(result + 5713) & 1) == 0) {
    *(float*)(result + 2832) = a2;
    *(float*)(result + 2836) = a3;
    *(float*)(result + 2840) = a4;
    *(_BYTE*)(result + 5712) = 0;
  }
  return result;
}

float Listener_Unknown10(__int64 a1, __int64 a2)
{
  float result;

  if ((*(_BYTE*)(a1 + 5753) & 1) == 0) {
    *(_DWORD*)(a1 + 2872) = *(_DWORD*)(a2 + 8);
    *(_DWORD*)(a1 + 2876) = *(_DWORD*)(a2 + 12);
    result = *(float*)(a2 + 16);
    *(_BYTE*)(a1 + 5752) = 0;
    *(float*)(a1 + 2880) = result;
  }
  return result;
}

float Listener_112ba0(__int64 a1, __int64 a2)
{
  float result;

  if ((*(_BYTE*)(a1 + 5713) & 1) == 0) {
    *(_DWORD*)(a1 + 2832) = *(_DWORD*)(a2 + 8);
    *(_DWORD*)(a1 + 2836) = *(_DWORD*)(a2 + 12);
    result = *(float*)(a2 + 16);
    *(_BYTE*)(a1 + 5712) = 0;
    *(float*)(a1 + 2840) = result;
  }
  return result;
}

void Listener_112bd0(__int64 a1, float a2, float a3, float a4)
{
  long double v5;

  *(float*)(a1 + 5688) = a2;
  *(float*)(a1 + 5692) = a3;
  *(float*)(a1 + 5696) = a4;
  v5 = snd_fnd_calcAngle_fecf0(0.0, 0.0, a2, a4);
  *(_DWORD*)(a1 + 2912) = LODWORD(v5);
}

__int64 Listener_112c20(__int64 a1, int* a2)
{
  int v2;
  __int64 v4;
  __int64 result;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  struct {
    __int64 v13;
    unsigned __int64 v14;
    char* v15;
  } v13_;

  v2 = *a2;
  v4 = a1 + 4096;
  ConstructString_1901f0(&v13_.v13);
  result = GameRoutine_a392e0((__int64)&v13_.v13, (__int64)"[ %08x ]", v2);
  v7 = (_QWORD*)(v4 + 1544);
  if ((__int64*)(v4 + 1544) == &v13_.v13) {
    if ((*(_BYTE*)(v4 + 1544) & 1) != 0) {
      result = (*(__int64 (**)(_QWORD, _QWORD))(
          **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                   *(_QWORD*)(a1 + 5656));
    }
    v9 = v13_.v13;
    v10 = v13_.v14;
    LOWORD(v13_.v13) = 0;
    *v7 = v9;
    *(_QWORD*)(v4 + 1552) = v10;
    *(_QWORD*)(v4 + 1560) = v13_.v15;
  }
  else {
    if ((*(_BYTE*)(v4 + 1544) & 1) == 0) {
      if ((v13_.v13 & 1) != 0) {
        result = (__int64)GameRoutine_a3a3a0((_QWORD*)(v4 + 1544),
                                             (__int64)v13_.v15, v13_.v14);
        if ((v13_.v13 & 1) == 0) {
          goto LABEL_17;
        }
      }
      else {
        v8 = v13_.v14;
        *v7 = v13_.v13;
        *(_QWORD*)(v4 + 1552) = v8;
        *(_QWORD*)(v4 + 1560) = v13_.v15;
        if ((v13_.v13 & 1) == 0) {
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    if ((v13_.v13 & 1) != 0) {
      v11 = v13_.v15;
    }
    else {
      v11 = (char*)&v13_.v13 + 1;
    }
    if ((v13_.v13 & 1) != 0) {
      v12 = v13_.v14;
    }
    else {
      v12 = (unsigned __int64)(unsigned __int8)v13_.v13 >> 1;
    }
    result =
        (__int64)GameRoutine_a3a260((__int64*)(v4 + 1544), (__int64)v11, v12);
    if ((v13_.v13 & 1) != 0) {
    LABEL_16:
      result = (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0],
                                                      v13_.v15);
    }
  }
LABEL_17:
  *(_QWORD*)(a1 + 5632) = a2;
  *(_BYTE*)(v4 + 1664) = 1;
  return result;
}

__int64 Listener_112d70(__int64 a1, __int64 a2)
{
  int* v4;
  int v6;

  GameRoutine_190200(a1 + 5640, a2);
  v6 = snd_fnd_calcCrc32(a2, 0);
  v4 = (int*)snd_data_findSurroundData(&v6);
  return GameRoutine_112c20(a1, v4);
}

__int64 Listener_Unknown8()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2134558,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_2134560;
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_2134558) != 0) {
    *(_QWORD*)GameData_2134560 = 0;
    __cxa_guard_release(GameData_2134558);
  }
  return GameData_2134560;
}

#pragma GCC visibility pop
