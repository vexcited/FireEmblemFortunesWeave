#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSound_282750(_QWORD, _QWORD);
__int64 GameRoutine_276ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_277230(_QWORD, _QWORD);
__int64 GameRoutine_278790(_QWORD, _QWORD);
__int64 GameRoutine_278ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27a290(void);
__int64 Sound3DManager_278080(_QWORD);
__int64 SoundActor_278380(_QWORD);
__int64 SoundActor_Destructor(_QWORD);
__int64 SoundActor_Unknown7(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
extern __int64* GameData_2135018[6];
__int64 Sound3DActor_Destructor(__int64 a1);
__int64 Sound3DActor_Unknown5(__int64 a1, __int64* a2, unsigned int a3,
                              __int64 a4, __int64 a5);
__int64 Sound3DActor_2771d0(__int64 result, __int64 a2);
__int64 Sound3DActor_Unknown2(__int64 result, __int64 a2);
__int64* SoundArchivePlayer_27bd30(__int64* result);
__int64 GameRoutine_27bd80(_QWORD*, __int64);
__int64 Sound3DActor_276ce0(_QWORD* a1, __int64 a2, char a3);
float32x4_t* Sound3DActor_277160(float32x4_t* result, float32x4_t* a2);

__int64 Sound3DActor_Destructor(__int64 a1)
{
  __int64* v2;
  char v3;
  __int64 v5;

  v2 = GameData_2135018[0] + 2;
  *(_QWORD*)(a1 + 208) = GameData_2135018[0] + 13;
  v3 = *(_BYTE*)(a1 + 274);
  *(_QWORD*)a1 = v2;
  if ((v3 & 1) == 0) {
    v5 = 0;
    GameRoutine_277230(&v5, a1);
    GameRoutine_276ce0(a1, v5, 0);
    SoundActor_278380(a1);
    *(_QWORD*)(a1 + 216) = 0;
    *(_QWORD*)(a1 + 224) = 0;
    *(_WORD*)(a1 + 273) = 256;
  }
  return SoundActor_Destructor(a1);
}

__int64 Sound3DActor_276ce0(_QWORD* a1, __int64 a2, char a3)
{
  __int64 v3;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
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
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;

  v3 = a1[18];
  v6 = *(_QWORD**)(v3 + 16);
  v7 = (_QWORD*)(v3 + 8);
  if ((a3 & 1) != 0) {
    if (v7 != v6) {
      do {
        v28 = 0;
        GameRoutine_27bd80(&v28, *v7 - 528LL);
        if (v28 != 0) {
          if (*(_QWORD*)(v28 + 40) == a2) {
            *(_QWORD*)(v28 + 72) = 0;
          }
          v7 = (_QWORD*)*v7;
        }
        SoundArchivePlayer_27bd30(&v28);
      } while (v7 != *(_QWORD**)(v3 + 16));
    }
    v8 = a1[19];
    v9 = (_QWORD*)(v8 + 8);
    while (v9 != *(_QWORD**)(v8 + 16)) {
      v28 = 0;
      GameRoutine_27bd80(&v28, *v9 - 528LL);
      if (v28 != 0) {
        if (*(_QWORD*)(v28 + 40) == a2) {
          *(_QWORD*)(v28 + 72) = 0;
        }
        v9 = (_QWORD*)*v9;
      }
      SoundArchivePlayer_27bd30(&v28);
    }
    v24 = a1[20];
    v25 = (_QWORD*)(v24 + 8);
    while (v25 != *(_QWORD**)(v24 + 16)) {
      v28 = 0;
      GameRoutine_27bd80(&v28, *v25 - 528LL);
      if (v28 != 0) {
        if (*(_QWORD*)(v28 + 40) == a2) {
          *(_QWORD*)(v28 + 72) = 0;
        }
        v25 = (_QWORD*)*v25;
      }
      SoundArchivePlayer_27bd30(&v28);
    }
    v26 = a1[21];
    v27 = (_QWORD*)(v26 + 8);
    while (v27 != *(_QWORD**)(v26 + 16)) {
      v28 = 0;
      GameRoutine_27bd80(&v28, *v27 - 528LL);
      if (v28 != 0) {
        if (*(_QWORD*)(v28 + 40) == a2) {
          *(_QWORD*)(v28 + 72) = 0;
        }
        v27 = (_QWORD*)*v27;
      }
      SoundArchivePlayer_27bd30(&v28);
    }
  }
  else {
    while (v6 != v7) {
      v20 = (__int64)(v6 - 66);
      v6 = (_QWORD*)v6[1];
      v28 = 0;
      GameRoutine_27bd80(&v28, v20);
      if (v28 != 0 &&
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v28) == a2) {
        *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) + v28) = 0;
      }
      SoundArchivePlayer_27bd30(&v28);
    }
    v10 = a1[19];
    v11 = *(_QWORD*)(v10 + 16);
    v12 = v10 + 8;
    while (v11 != v12) {
      v21 = v11 - 528;
      v11 = *(_QWORD*)(v11 + 8);
      v28 = 0;
      GameRoutine_27bd80(&v28, v21);
      if (v28 != 0 &&
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v28) == a2) {
        *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) + v28) = 0;
      }
      SoundArchivePlayer_27bd30(&v28);
    }
    v13 = a1[20];
    v14 = *(_QWORD*)(v13 + 16);
    v15 = v13 + 8;
    while (v14 != v15) {
      v22 = v14 - 528;
      v14 = *(_QWORD*)(v14 + 8);
      v28 = 0;
      GameRoutine_27bd80(&v28, v22);
      if (v28 != 0 &&
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v28) == a2) {
        *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) + v28) = 0;
      }
      SoundArchivePlayer_27bd30(&v28);
    }
    v16 = a1[21];
    v17 = *(_QWORD*)(v16 + 16);
    v18 = v16 + 8;
    while (v17 != v18) {
      v23 = v17 - 528;
      v17 = *(_QWORD*)(v17 + 8);
      v28 = 0;
      GameRoutine_27bd80(&v28, v23);
      if (v28 != 0 &&
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + v28) == a2) {
        *(_QWORD*)((char*)((_UNKNOWN*)0x48LL) + v28) = 0;
      }
      SoundArchivePlayer_27bd30(&v28);
    }
  }
  return a2;
}

__int64 Sound3DActor_Unknown5(__int64 a1, __int64* a2, unsigned int a3,
                              __int64 a4, __int64 a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD v25[2];
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (*(_BYTE*)(a1 + 273) == 0) {
    return 17;
  }
  v30 = 0;
  v31 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  v25[0] = 0;
  v25[1] = 0;
  Sound3DManager_278080(v25);
  v10 = *(_QWORD*)(a1 + 248);
  v11 = *(_QWORD*)(a1 + 224);
  v25[0] = *(_QWORD*)(a1 + 240);
  v25[1] = v10;
  v12 = *(_QWORD*)(a1 + 264);
  v26 = *(_QWORD*)(a1 + 256);
  v27 = v12;
  HIDWORD(v28) = *(_DWORD*)(a1 + 232);
  if (v11 != 0) {
    v14 = GameRoutine_27a290();
    v15 = v14;
    LODWORD(v21) = 0;
    v20 = 0;
    if ((GameRoutine_278ce0(v14, &v20, a3) & 1) != 0) {
      HIDWORD(v29) = HIDWORD(v20);
      LODWORD(v28) = v20;
      BYTE1(v30) = BYTE1(v21);
      if ((unsigned __int8)v21 == 2) {
        v16 = 2;
      }
      else {
        v16 = 1;
      }
      LOBYTE(v30) = v16;
    }
    LODWORD(v29) = GameRoutine_278790(v15, a3);
    if (a4 != 0 && (*(_BYTE*)(a4 + 2) & 8) != 0) {
      HIDWORD(v30) = *(_DWORD*)(a4 + 364);
    }
  }
  v20 = *(_QWORD*)(a1 + 216);
  v21 = a1 + 208;
  if (v20 != 0) {
    v17 = v20 + 8;
  }
  else {
    v17 = 0;
  }
  v22 = v17;
  v23 = v25;
  v24 = 64;
  result = SoundActor_Unknown7(a1, a2, a3, 0, a4, &v20, a5);
  v18 = *a2;
  if (*a2 != 0) {
    v19 = result;
    BasicSound_282750(v18, 3);
    return v19;
  }
  return result;
}

float32x4_t* Sound3DActor_277160(float32x4_t* result, float32x4_t* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;

  if ((LANES128(result[17]).n128_u8[0] & 1) == 0) {
    result[16] = vsubq_f32(*a2, result[15]);
  }
  LANES128(result[15]).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
  v2 = LANES128(*(a2)).n128_u64[0];
  LANES128(result[17]).n128_u8[0] = 0;
  LANES128(result[15]).n128_u64[0] = v2;
  return result;
}

__int64 Sound3DActor_2771d0(__int64 result, __int64 a2)
{
  *(_QWORD*)(a2 + 8) = *(_QWORD*)(result + 248);
  *(_QWORD*)a2 = *(_QWORD*)(result + 240);
  *(_QWORD*)(a2 + 24) = *(_QWORD*)(result + 264);
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(result + 256);
  *(_DWORD*)(a2 + 36) = *(_DWORD*)(result + 232);
  return result;
}

__int64 Sound3DActor_Unknown2(__int64 result, __int64 a2)
{
  *(_QWORD*)(a2 + 8) = *(_QWORD*)(result + 40);
  *(_QWORD*)a2 = *(_QWORD*)(result + 32);
  *(_QWORD*)(a2 + 24) = *(_QWORD*)(result + 56);
  *(_QWORD*)(a2 + 16) = *(_QWORD*)(result + 48);
  *(_DWORD*)(a2 + 36) = *(_DWORD*)(result + 24);
  return result;
}

#pragma GCC visibility pop
