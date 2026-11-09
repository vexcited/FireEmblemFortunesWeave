#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_5768f0(_QWORD);
__int64 DrawInfo_576aa0(_QWORD, _QWORD);
__int64 GameRoutine_575d70(_QWORD);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_5ace30(__int64);
__int64 GameRoutine_5ace60(__int64, _QWORD*, __int64, __int64, __int64*,
                           __int64, int, int);
__int64 GameRoutine_5ad720(__int64, __int64, __int64);
__int64 GameRoutine_5adfc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fc260(_QWORD);
__int64 GameRoutine_5fc280(_QWORD);
__int64 GameRoutine_5fc380(_QWORD);
__int64 GameRoutine_5fc390(_QWORD);
__int64 GameRoutine_5fdc90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6054b0(_QWORD);
__int64 GameRoutine_605680(_QWORD, _QWORD);
__int64 GameRoutine_6067a0(_QWORD);
__int64 GameRoutine_606870(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
extern _DWORD GameData_1b14098[3];
extern _UNKNOWN** GameData_2130ef8;
extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a833d0;
extern __int64* GameData_2130f00[5];
extern __int64* GameData_2136390;
__int64 VectorGraphicsTexture_DeletingDestructor(_QWORD* a1);
__int64 VectorGraphicsTexture_5ada40(__int64 a1, _QWORD* a2, __int64 a3,
                                     __int64* a4, __int64 a5, __int64 a6,
                                     const char* a7, __int64 a8);
__int64 VectorGraphicsTexture_5adbb0(_QWORD* a1, __int64 a2);
__int64 VectorGraphicsTexture_Unknown4(__int64 a1, __int64 a2, __int64* a3);
__int64 VectorGraphicsTexture_Unknown5(__int64 a1);
__int64 VectorGraphicsTexture_Unknown6(__int64 result, __int64 a2);
__int64 VectorGraphicsTexture_Unknown7(__int64 result, __int64 a2, __int64* a3,
                                       __int64 a4);

__int64 VectorGraphicsTexture_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_2136390 + 2;
  GameRoutine_6067a0(a1 + 47);
  GameRoutine_5ace30((__int64)(a1 + 4));
  return GameRoutine_575d70(a1);
}

__int64 VectorGraphicsTexture_5ada40(__int64 a1, _QWORD* a2, __int64 a3,
                                     __int64* a4, __int64 a5, __int64 a6,
                                     const char* a7, __int64 a8)
{
  int v9;
  int v16;
  _QWORD v18[9];

  v9 = *(_DWORD*)(a6 + 4);
  memset(v18, 0, 71);
  nn_util_SNPrintf(v18, 71, "%s_%d", a7, v9);
  if ((unsigned int)*(unsigned __int16*)(a6 + 10) - 1 > 2) {
    v16 = 0;
  }
  else {
    v16 = GameData_1b14098[(unsigned __int16)(*(_WORD*)(a6 + 10) - 1)];
  }
  *(_DWORD*)(a1 + 340) = v16;
  GameRoutine_5ace60(a1 + 32, a2, a3, a5, a4, a8, 0, 0);
  GameRoutine_5ad720(a1, a3, a5);
  return 1;
}

__int64 VectorGraphicsTexture_5adbb0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;

  GameRoutine_606870(a1 + 47);
  ((void (*)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))*GameData_2130ef8)(
      a1[44], a1[45], a1[46], 0, *GameData_2130f00[0], 0);
  v4 = a1[57];
  a1[45] = 0;
  a1[46] = 0;
  a1[44] = 0;
  if (v4 != 0) {
    GameRoutine_605680(v4, a2);
    v5 = a1[57];
    if (v5 != 0) {
      GameRoutine_6054b0(a1[57]);
      GameRoutine_5791a0(v5);
    }
    a1[57] = 0;
  }
  result = a1[56];
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 24LL))(
        result, a2);
    v7 = a1[56];
    if (v7 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 8LL))(a1[56]);
      result = GameRoutine_5791a0(v7);
    }
    a1[56] = 0;
  }
  return result;
}

__int64 VectorGraphicsTexture_Unknown4(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  int v7;
  __int64 result;
  _QWORD v9[4];
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[3];
  _QWORD v15[5];
  _QWORD v16[3];
  __int64* v17;
  __int64 v18;

  v3 = *a3;
  v4 = a3[1];
  memset(v15, 0, sizeof(v15));
  memset(v14, 0, sizeof(v14));
  v16[0] = v3;
  v16[1] = v4;
  v16[2] = a3[2];
  v17 = nullptr;
  v18 = a3[4];
  if (*(_QWORD*)(a1 + 448) != 0) {
    GameRoutine_5fc280(v14);
    BYTE2(v14[0]) = 0;
    WORD2(v14[0]) |= 0xEu;
    GameRoutine_5fc260(v15);
    v7 = *(_DWORD*)(a1 + 340);
    v16[0] = v14;
    LOBYTE(v15[0]) = v7;
  }
  v12 = 0;
  v13 = 0;
  v10 = 0;
  v11 = nullptr;
  memset(v9, 0, sizeof(v9));
  GameRoutine_5fc390(&v10);
  GameRoutine_5fc380(v9);
  result = *(_QWORD*)(a1 + 40);
  v11 = v9;
  v17 = &v10;
  LODWORD(v9[0]) = 2817;
  LOBYTE(v10) = 1;
  HIDWORD(v10) = 4871;
  if (result != 0) {
    return (*(__int64 (**)(__int64, __int64, _QWORD*, __int64))(
        *(_QWORD*)result + 32LL))(result, a2, v16, a1 + 64);
  }
  return result;
}

__int64 VectorGraphicsTexture_Unknown5(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 40);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 40LL))(result);
  }
  return result;
}

__int64 VectorGraphicsTexture_Unknown6(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int128 v8;
  float v9;
  __int64 v10;
  __int128 v11;
  float v12;

  if ((~*(unsigned __int8*)(result + 344) & 3) == 0) {
    v2 = result;
    result = *(_QWORD*)(result + 40);
    if (result != 0) {
      v3 = *(_QWORD*)(v2 + 32);
      v4 = *(float*)(v3 + 32);
      v5 = *(float*)(v3 + 36);
      v6 = 1.0 / v4;
      v7 = -(float)((float)(v4 + 0.0) * (float)(1.0 / v4));
      DWORD1(v8) = 0;
      DWORD2(v8) = 0;
      *(float*)&v8 = v6 + v6;
      v9 = 0.0 - v5;
      if ((*(_BYTE*)(a2 + 404) & 8) == 0) {
        v9 = *(float*)(v3 + 36);
      }
      *((float*)&v8 + 3) = v7;
      *(_OWORD*)(v2 + 64) = v8;
      v10 = v2 + 64;
      LODWORD(v11) = 0;
      DWORD2(v11) = 0;
      v12 = *(float*)(v10 + 272);
      *((float*)&v11 + 1) = (float)(1.0 / v9) + (float)(1.0 / v9);
      *((float*)&v11 + 3) = -(float)((float)(v5 + 0.0) * (float)(1.0 / v9));
      *(_OWORD*)(v10 + 16) = v11;
      *(_OWORD*)(v10 + 32) = GameData_1a833d0;
      *(_OWORD*)(v10 + 48) = GameData_1a82dc0;
      return (*(__int64 (**)(__int64, float))(*(_QWORD*)result + 48LL))(result,
                                                                        v12);
    }
  }
  return result;
}

__int64 VectorGraphicsTexture_Unknown7(__int64 result, __int64 a2, __int64* a3,
                                       __int64 a4)
{
  char v4;
  __int64 v5;
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
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v4 = *(_BYTE*)(result + 344);
  if ((v4 & 2) != 0) {
    v5 = result;
    *(_BYTE*)(result + 344) = v4 & 0xFD;
    if ((v4 & 1) != 0) {
      *(_BYTE*)(result + 344) = v4 & 0xFC;
      v8 = a3[42];
      v9 = a3[44];
      v20 = a3[38];
      v21 = a3[39];
      v22 = a3[40];
      v23 = a3[41];
      v16 = a3[34];
      v17 = a3[35];
      v10 = a3[31];
      v18 = a3[36];
      v19 = a3[37];
      v14 = a3[32];
      v15 = a3[33];
      GameRoutine_5adfc0(result, a3, a4);
      v11 = *(_QWORD*)(v5 + 40);
      if (v11 != 0) {
        *(_DWORD*)(v5 + 272) = 0;
        (*(void (**)(__int64, __int64*, __int64, __int64))(
            *(_QWORD*)v11 + 56LL))(v11, a3, v5 + 64, a4);
      }
      a3[44] = v9;
      a3[35] = v17;
      a3[36] = v18;
      a3[31] = v10;
      a3[32] = v14;
      a3[33] = v15;
      a3[34] = v16;
      a3[41] = v23;
      a3[42] = v8;
      a3[39] = v21;
      a3[40] = v22;
      v12 = *a3;
      a3[37] = v19;
      a3[38] = v20;
      (*(void (**)(__int64*, __int64))(v12 + 32))(a3, a4);
      DrawInfo_5768f0(a3);
      *((_BYTE*)a3 + 404) |= 0x40u;
      DrawInfo_576aa0(a3, a4);
      v13 = *(_QWORD*)(v5 + 448);
      if (v13 != 0) {
        GameRoutine_5fdc90(a4, *(_QWORD*)(*(_QWORD*)(v5 + 8) + 24LL), 0, 0,
                           v13 + 64, 0);
      }
      return (*(__int64 (**)(__int64*, __int64))(*a3 + 24))(a3, a4);
    }
  }
  return result;
}

#pragma GCC visibility pop
