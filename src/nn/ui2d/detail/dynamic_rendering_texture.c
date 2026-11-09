#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_576a40(_QWORD, _QWORD, _QWORD);
__int64 DrawInfo_576b40(_QWORD, _QWORD);
__int64 GameRoutine_576a20(_QWORD, _QWORD);
__int64 GameRoutine_579180(_QWORD);
__int64 GameRoutine_5791a0(_QWORD);
__int64 GameRoutine_58c1e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58c810(_QWORD, _QWORD);
__int64 DynamicRenderingTexture_Unknown3(__int64 a1, __int64 a2);
__int64 DynamicRenderingTexture_575e30(__int64 result);
__int64 DynamicRenderingTexture_575e40(__int64 a1);
_QWORD* DynamicRenderingTexture_575e80(_QWORD* result, int a2);
unsigned __int8* DynamicRenderingTexture_575ee0(unsigned __int8* result,
                                                int a2);
__int64 DynamicRenderingTexture_576060(__int64 result, int a2, _QWORD* a3);
float DynamicRenderingTexture_5760c0(__int64 a1, __int64 a2, int a3);
__int64 DynamicRenderingTexture_5761f0(__int64 a1, unsigned __int16 a2);
__int64 DynamicRenderingTexture_576210(__int64 a1, unsigned int a2);
__int64 DynamicRenderingTexture_576230(__int64 a1, _DWORD* a2, _DWORD* a3,
                                       _DWORD* a4);
__int64 DynamicRenderingTexture_576260(char* a1, __int64 a2, _DWORD* a3,
                                       _DWORD* a4, int a5, __int64 a6);
__int64 DynamicRenderingTexture_576440(__int64 a1, __int64 a2, __int64 a3);

__int64 DynamicRenderingTexture_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  __int64 v6;

  v3 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    GameRoutine_5791a0(v3);
    *(_QWORD*)(a1 + 16) = 0;
  }
  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 24LL))(
        result, a2);
    v6 = *(_QWORD*)(a1 + 8);
    if (v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 8LL))(*(_QWORD*)(a1 + 8));
      result = GameRoutine_5791a0(v6);
    }
    *(_QWORD*)(a1 + 8) = 0;
  }
  return result;
}

__int64 DynamicRenderingTexture_575e30(__int64 result)
{
  *(_WORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 DynamicRenderingTexture_575e40(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = GameRoutine_5791a0(result);
    *(_QWORD*)(a1 + 8) = 0;
    *(_WORD*)a1 = 0;
  }
  return result;
}

_QWORD* DynamicRenderingTexture_575e80(_QWORD* result, int a2)
{
  _QWORD* v2;
  __int64 v3;

  if (a2 > *(unsigned __int8*)result) {
    v2 = result;
    v3 = result[1];
    if (v3 != 0) {
      GameRoutine_5791a0(v3);
      v2[1] = 0;
      *(_WORD*)v2 = 0;
    }
    result = (_QWORD*)GameRoutine_579180(32LL * (unsigned int)a2);
    *result = 0;
    v2[1] = result;
    *(_BYTE*)v2 = a2;
  }
  return result;
}

unsigned __int8* DynamicRenderingTexture_575ee0(unsigned __int8* result, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*((_QWORD*)result + 1) != 0 && a2 <= *result) {
    v3 = result[1];
    if (a2 > (int)v3) {
      v4 = ((_BYTE)a2 - (_BYTE)v3) & 3;
      v5 = result[1];
      if ((((_BYTE)a2 - (_BYTE)v3) & 3) != 0) {
        v6 = 32 * v3;
        v5 = v3 + v4;
        do {
          --v4;
          *(_QWORD*)(*((_QWORD*)result + 1) + v6) = 0;
          *(_QWORD*)(*((_QWORD*)result + 1) + v6 + 8) = 1065353216;
          *(_QWORD*)(*((_QWORD*)result + 1) + v6 + 16) = 0x3F80000000000000LL;
          v7 = *((_QWORD*)result + 1) + v6;
          v6 += 32;
          *(_QWORD*)(v7 + 24) = 0x3F8000003F800000LL;
        } while (v4 != 0);
      }
      if (v3 - (unsigned __int64)(unsigned int)a2 <= 0xFFFFFFFFFFFFFFFCLL) {
        v8 = (unsigned int)a2 - v5;
        v9 = 32 * v5 + 120;
        do {
          v8 -= 4;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 120) = 0;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 112) = 1065353216;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 104) = 0x3F80000000000000LL;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 96) = 0x3F8000003F800000LL;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 88) = 0;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 80) = 1065353216;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 72) = 0x3F80000000000000LL;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 64) = 0x3F8000003F800000LL;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 56) = 0;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 48) = 1065353216;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 40) = 0x3F80000000000000LL;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 32) = 0x3F8000003F800000LL;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 24) = 0;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 16) = 1065353216;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9 - 8) = 0x3F80000000000000LL;
          *(_QWORD*)(*((_QWORD*)result + 1) + v9) = 0x3F8000003F800000LL;
          v9 += 128;
        } while (v8 != 0);
      }
    }
    result[1] = a2;
  }
  return result;
}

__int64 DynamicRenderingTexture_576060(__int64 result, int a2, _QWORD* a3)
{
  __int64 v3;

  v3 = 32LL * a2;
  *(_QWORD*)(*(_QWORD*)(result + 8) + v3) = *a3;
  *(_QWORD*)(*(_QWORD*)(result + 8) + v3 + 8) = a3[1];
  *(_QWORD*)(*(_QWORD*)(result + 8) + v3 + 16) = a3[2];
  *(_QWORD*)(*(_QWORD*)(result + 8) + v3 + 24) = a3[3];
  return result;
}

float DynamicRenderingTexture_5760c0(__int64 a1, __int64 a2, int a3)
{
  char v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _DWORD* v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  float result;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  _DWORD* v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;

  v3 = a3;
  if (*(unsigned __int8*)(a1 + 1) > (unsigned int)(unsigned __int8)a3) {
    v3 = *(_BYTE*)(a1 + 1);
  }
  *(_BYTE*)(a1 + 1) = v3;
  if (a3 >= 1) {
    if (a3 == 1) {
      v4 = 0;
    }
    else {
      v5 = 0;
      v4 = 0;
      do {
        v4 += 2;
        v6 = *(_DWORD*)(a2 + v5 + 4);
        v7 = (_DWORD*)(*(_QWORD*)(a1 + 8) + v5);
        *v7 = *(_DWORD*)(a2 + v5);
        v7[1] = v6;
        v8 = *(_DWORD*)(a2 + v5 + 12);
        v9 = *(_QWORD*)(a1 + 8) + v5;
        *(_DWORD*)(v9 + 8) = *(_DWORD*)(a2 + v5 + 8);
        *(_DWORD*)(v9 + 12) = v8;
        v10 = *(_DWORD*)(a2 + v5 + 20);
        v11 = *(_QWORD*)(a1 + 8) + v5;
        *(_DWORD*)(v11 + 16) = *(_DWORD*)(a2 + v5 + 16);
        *(_DWORD*)(v11 + 20) = v10;
        v12 = *(_DWORD*)(a2 + v5 + 28);
        v13 = *(_QWORD*)(a1 + 8) + v5;
        *(_DWORD*)(v13 + 24) = *(_DWORD*)(a2 + v5 + 24);
        *(_DWORD*)(v13 + 28) = v12;
        v14 = *(_DWORD*)(a2 + v5 + 36);
        v15 = *(_QWORD*)(a1 + 8) + v5;
        *(_DWORD*)(v15 + 32) = *(_DWORD*)(a2 + v5 + 32);
        *(_DWORD*)(v15 + 36) = v14;
        v16 = *(_DWORD*)(a2 + v5 + 44);
        v17 = *(_QWORD*)(a1 + 8) + v5;
        *(_DWORD*)(v17 + 40) = *(_DWORD*)(a2 + v5 + 40);
        *(_DWORD*)(v17 + 44) = v16;
        v18 = *(_DWORD*)(a2 + v5 + 52);
        v19 = *(_QWORD*)(a1 + 8) + v5;
        *(_DWORD*)(v19 + 48) = *(_DWORD*)(a2 + v5 + 48);
        *(_DWORD*)(v19 + 52) = v18;
        result = *(float*)(a2 + v5 + 56);
        v21 = *(_DWORD*)(a2 + v5 + 60);
        v22 = *(_QWORD*)(a1 + 8) + v5;
        v5 += 64;
        *(float*)(v22 + 56) = result;
        *(_DWORD*)(v22 + 60) = v21;
      } while (((32LL * (unsigned int)a3) & 0xFFFFFFFC0LL) != v5);
    }
    if ((a3 & 1) != 0) {
      v23 = 32 * v4;
      v24 = a2 + 32 * v4;
      v25 = *(_DWORD*)(v24 + 4);
      v26 = (_DWORD*)(*(_QWORD*)(a1 + 8) + v23);
      *v26 = *(_DWORD*)v24;
      v26[1] = v25;
      v27 = *(_DWORD*)(v24 + 12);
      v28 = *(_QWORD*)(a1 + 8) + v23;
      *(_DWORD*)(v28 + 8) = *(_DWORD*)(v24 + 8);
      *(_DWORD*)(v28 + 12) = v27;
      v29 = *(_DWORD*)(v24 + 20);
      v30 = *(_QWORD*)(a1 + 8) + v23;
      *(_DWORD*)(v30 + 16) = *(_DWORD*)(v24 + 16);
      *(_DWORD*)(v30 + 20) = v29;
      result = *(float*)(v24 + 24);
      v31 = *(_DWORD*)(v24 + 28);
      v32 = *(_QWORD*)(a1 + 8) + v23;
      *(float*)(v32 + 24) = result;
      *(_DWORD*)(v32 + 28) = v31;
    }
  }
  return result;
}

__int64 DynamicRenderingTexture_5761f0(__int64 a1, unsigned __int16 a2)
{
  return *(_QWORD*)(a1 + 16) +
         *(unsigned int*)(*(_QWORD*)(a1 + 16) + 4LL * a2 + 12);
}

__int64 DynamicRenderingTexture_576210(__int64 a1, unsigned int a2)
{
  return *(_QWORD*)(a1 + 24) +
         *(unsigned int*)(*(_QWORD*)(a1 + 24) + 4LL * a2 + 12);
}

__int64 DynamicRenderingTexture_576230(__int64 a1, _DWORD* a2, _DWORD* a3,
                                       _DWORD* a4)
{
  a2[132] = *a4;
  a2[133] = a4[1];
  a2[134] = *a3;
  a2[135] = a3[1];
  return DrawInfo_576b40(a1, a2 + 16);
}

__int64 DynamicRenderingTexture_576260(char* a1, __int64 a2, _DWORD* a3,
                                       _DWORD* a4, int a5, __int64 a6)
{
  __int64 v6;
  float* v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  __int64 v18;
  float* v19;
  float v20;
  float v21;
  float v22;
  float v23;

  if (a5 >= 1 && a6 != 0) {
    v6 = (unsigned int)a1[400];
    if ((v6 & 0x80000000) == 0) {
      if (a5 > (int)v6) {
        v7 = (float*)(a6 + 32 * v6);
        *(float*)(a2 + 224) = *v7 + 0.0;
        v8 = v7[1];
        *(_QWORD*)(a2 + 232) = 0x3F80000000000000LL;
        *(float*)(a2 + 228) = v8 + 0.0;
        *(float*)(a2 + 240) = v7[2] + 0.0;
        v9 = v7[3];
        *(_QWORD*)(a2 + 248) = 0x3F80000000000000LL;
        *(float*)(a2 + 244) = v9 + 0.0;
        *(float*)(a2 + 256) = v7[4] + 0.0;
        v10 = v7[5];
        *(_QWORD*)(a2 + 264) = 0x3F80000000000000LL;
        *(float*)(a2 + 260) = v10 + 0.0;
        *(float*)(a2 + 272) = v7[6] + 0.0;
        v11 = v7[7];
        *(_QWORD*)(a2 + 280) = 0x3F80000000000000LL;
        *(float*)(a2 + 276) = v11 + 0.0;
      }
      v12 = (unsigned int)a1[401];
      if ((v12 & 0x80000000) == 0) {
        if (a5 > (int)v12) {
          v13 = (float*)(a6 + 32 * v12);
          *(float*)(a2 + 288) = *v13 + 0.0;
          v14 = v13[1];
          *(_QWORD*)(a2 + 296) = 0x3F80000000000000LL;
          *(float*)(a2 + 292) = v14 + 0.0;
          *(float*)(a2 + 304) = v13[2] + 0.0;
          v15 = v13[3];
          *(_QWORD*)(a2 + 312) = 0x3F80000000000000LL;
          *(float*)(a2 + 308) = v15 + 0.0;
          *(float*)(a2 + 320) = v13[4] + 0.0;
          v16 = v13[5];
          *(_QWORD*)(a2 + 328) = 0x3F80000000000000LL;
          *(float*)(a2 + 324) = v16 + 0.0;
          *(float*)(a2 + 336) = v13[6] + 0.0;
          v17 = v13[7];
          *(_QWORD*)(a2 + 344) = 0x3F80000000000000LL;
          *(float*)(a2 + 340) = v17 + 0.0;
        }
        v18 = (unsigned int)a1[402];
        if (a5 > (unsigned int)v18) {
          v19 = (float*)(a6 + 32 * v18);
          *(float*)(a2 + 352) = *v19 + 0.0;
          v20 = v19[1];
          *(_QWORD*)(a2 + 360) = 0x3F80000000000000LL;
          *(float*)(a2 + 356) = v20 + 0.0;
          *(float*)(a2 + 368) = v19[2] + 0.0;
          v21 = v19[3];
          *(_QWORD*)(a2 + 376) = 0x3F80000000000000LL;
          *(float*)(a2 + 372) = v21 + 0.0;
          *(float*)(a2 + 384) = v19[4] + 0.0;
          v22 = v19[5];
          *(_QWORD*)(a2 + 392) = 0x3F80000000000000LL;
          *(float*)(a2 + 388) = v22 + 0.0;
          *(float*)(a2 + 400) = v19[6] + 0.0;
          v23 = v19[7];
          *(_QWORD*)(a2 + 408) = 0x3F80000000000000LL;
          *(float*)(a2 + 404) = v23 + 0.0;
        }
      }
    }
  }
  *(_DWORD*)(a2 + 528) = *a4;
  *(_DWORD*)(a2 + 532) = a4[1];
  *(_DWORD*)(a2 + 536) = *a3;
  *(_DWORD*)(a2 + 540) = a3[1];
  return DrawInfo_576b40(a1, a2 + 64);
}

__int64 DynamicRenderingTexture_576440(__int64 a1, __int64 a2, __int64 a3)
{
  if ((DrawInfo_576a40(a2, *(_QWORD*)(a3 + 32), *(unsigned __int16*)(a3 + 74)) &
       1) != 0) {
    GameRoutine_58c810(a3, a1);
  }
  GameRoutine_576a20(a2, a1);
  return GameRoutine_58c1e0(a3, a1, a2);
}

#pragma GCC visibility pop
