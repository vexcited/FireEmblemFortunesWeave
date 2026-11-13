#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* BaseNx_288cb0(__int64, __int64, char);
_QWORD* GameRoutine_2a4d20(_QWORD* result);
_QWORD* HardwareOpusDecoderManager_2b97b0(_QWORD* result);
__int64 BaseNx_288b50(__int64, unsigned int);
__int64 BaseNx_288da0(_QWORD*, __int64);
__int64 GameRoutine_2a3470(__int64 result, int);
__int64 GameRoutine_2a3510(_QWORD, _QWORD, float);
__int64 GameRoutine_2a6520(__int64, unsigned int*, int, __int64, unsigned int);
__int64 GameRoutine_2a6920(__int64 result, int);
__int64 GameRoutine_2a6930(__int64);
__int64 GameRoutine_2a6b30(unsigned int, unsigned int, __int64, __int64);
__int64 SequenceNoteOnCallback_28bc80(__int64, __int64, unsigned int,
                                      unsigned int, unsigned int);
__int64 StreamSoundPlayer_29baf0(__int64 result);
extern _QWORD GameData_21a3548[3];
extern _QWORD GameData_21a3560[6];
extern _UNKNOWN GameData_21a3518;
extern __int64 GameData_21a2ff8[];
extern __int64 GameData_21a3590;
extern char GameData_21a3598;
float GameRoutine_2a3450(__int64, int);
float GameRoutine_2a3490(__int64, int);
float GameRoutine_2a3520(__int64, int);
typedef __int64 GameAlign_21a359c __attribute__((aligned(4)));
extern GameAlign_21a359c GameData_21a359c;
__int64 nn_atk_detail_293bd0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
float nn_atk_detail_2a3850(__int64 a1, int a2, float result, float a4);
float nn_atk_detail_2a38f0(__int64 a1);
__int64 nn_atk_detail_2b9950();

__int64 nn_atk_detail_293bd0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  char v9;
  __int64 result;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  char v14;
  int v15;
  __int64 v16;
  unsigned int v17;
  float v18;
  float v19;
  _QWORD v20[5];
  struct {
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
  } v21_;
  struct {
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v41_;

  v6 = *(_DWORD*)a4;
  v7 = *(_DWORD*)(a4 + 4);
  v8 = *(_DWORD*)(a4 + 8);
  v41_.v42 = 0;
  v41_.v43 = 0;
  v41_.v41 = 0;
  v9 = SequenceNoteOnCallback_28bc80(a2, (__int64)&v41_.v41, v6, v7, v8);
  result = 0;
  if ((v9 & 1) != 0) {
    v11 = BaseNx_288b50(a3, HIDWORD(v41_.v41));
    v21_.v39 = 0;
    v21_.v40 = 0;
    v21_.v37 = 0;
    v21_.v38 = 0;
    v21_.v35 = 0;
    v21_.v36 = 0;
    v21_.v33 = 0;
    v21_.v34 = 0;
    v21_.v31 = 0;
    v21_.v32 = 0;
    v21_.v29 = 0;
    v21_.v30 = 0;
    v21_.v27 = 0;
    v21_.v28 = 0;
    v21_.v25 = 0;
    v21_.v26 = 0;
    v21_.v23 = 0;
    v21_.v24 = 0;
    v21_.v21 = 0;
    v21_.v22 = 0;
    memset(v20, 0, sizeof(v20));
    BaseNx_288cb0((__int64)v20, v11, 0);
    if ((BaseNx_288da0(v20, (__int64)&v21_.v21) & 1) != 0) {
      if ((int)v21_.v22 >= 2) {
        v12 = 2;
      }
      else {
        v12 = v21_.v22;
      }
      result = GameRoutine_2a6b30(v12, *(_DWORD*)(a4 + 20), *(_QWORD*)(a4 + 24),
                                  *(_QWORD*)(a4 + 32));
      if (result != 0) {
        v14 = BYTE1(v41_.v43);
        v15 = BYTE4(v41_.v42);
        v16 = result;
        *(_BYTE*)(result + 368) = *(_DWORD*)(a4 + 4);
        *(_BYTE*)(result + 369) = v14;
        {
          __typeof__(v13) z_ = (__typeof__(v13)){0};
          LOBYTE(z_) = *(_BYTE*)(a4 + 8);
          v13 = z_;
        }
        *(float*)&v17 = (float)v13 * 0x1.0204080000000p-7f;
        *(float*)(result + 376) = *(float*)&v17;
        {
          __typeof__(v17) z_ = (__typeof__(v17)){0};
          LOBYTE(z_) = BYTE2(v41_.v43);
          v17 = z_;
        }
        *(float*)(result + 372) = (float)v17 * 0x1.0204080000000p-7f;
        *(_DWORD*)(result + 336) = v41_.v42;
        GameRoutine_2a3450(result + 32, v15);
        GameRoutine_2a3470(v16 + 32, HIBYTE(v41_.v42));
        v18 = GameRoutine_2a3490(v16 + 32, BYTE5(v41_.v42));
        GameRoutine_2a3510(v16 + 32, BYTE6(v41_.v42), v18);
        GameRoutine_2a3520(v16 + 32, (unsigned __int8)v41_.v43);
        v19 = (float)(*(int*)(a4 + 16) + BYTE3(v41_.v43) - 64) /
              0x1.f800000000000p+5f;
        *(_WORD*)(v16 + 370) = *(_WORD*)((char*)&v41_.v43 + 5);
        *(_BYTE*)(v16 + 197) = BYTE4(v41_.v43);
        *(float*)(v16 + 328) = v19;
        GameRoutine_2a6920(v16, *(_DWORD*)(a4 + 56));
        GameRoutine_2a6930(v16);
        GameRoutine_2a6520(v16, (unsigned int*)&v21_.v21, *(_DWORD*)(a4 + 12),
                           0, 0);
        return v16;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

float nn_atk_detail_2a3850(__int64 a1, int a2, float result, float a4)
{

#pragma clang fp contract(off)
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  float v7;
  float v8;

  v4 = *(_DWORD*)(a1 + 16);
  v5 = *(_DWORD*)(a1 + 8);
  if (v4 < v5) {
    v6 = v4 + a2;
    a2 = v6 - v5;
    if (v6 <= v5) {
      *(_DWORD*)(a1 + 16) = v6;
      return result;
    }
    *(_DWORD*)(a1 + 16) = v5;
  }
  result = *(float*)(a1 + 4);
  if (result > 0x0.0p+0f) {
    if (*(_BYTE*)(a1 + 28) != 0) {
      v7 = *(float*)(a1 + 20);
    }
    else {
      {
        __typeof__(a4) z_ = (__typeof__(a4)){0};
        LOBYTE(z_) = *(_BYTE*)(a1 + 14);
        a4 = z_;
      }
      *(_BYTE*)(a1 + 28) = 1;
      v7 = (float)LODWORD(a4) / 0x1.fc00000000000p+6f;
    }
    v8 = (float)((float)(result * (float)a2) / 0x1.f400000000000p+9f) + v7;
    *(_BYTE*)(a1 + 29) = v8 >= 0x1.0000000000000p+0f;
    result = v8 - (float)(int)v8;
    *(float*)(a1 + 20) = result;
  }
  return result;
}

float nn_atk_detail_2a38f0(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float result;
  __int64 v3;
  float (*v4)(float, float);
  __int64 v5;
  float v6;
  __int64 v7;
  unsigned int v8;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(float*)a1;
  result = 0x0.0p+0f;
  if (*(float*)a1 != 0x0.0p+0f && *(_DWORD*)(a1 + 16) >= *(_DWORD*)(a1 + 8)) {
    v3 = *(unsigned __int8*)(a1 + 13);
    v4 = (float (*)(float, float))GameData_21a2ff8[v3],
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v4 != nullptr) {
      if ((_DWORD)v3 == 4) {
        if (*(_BYTE*)(a1 + 29) == 1) {
          v5 = a1;
          v6 = v4(*(float*)(a1 + 20), v1);
          a1 = v5;
          *(float*)(v5 + 24) = v6;
        }
        else {
          v6 = *(float*)(a1 + 24);
        }
      }
      else {
        v7 = a1;
        v4(*(float*)(a1 + 20), v1),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
        a1 = v7;
      }
    }
    else {
      v6 = 0x1.0000000000000p+0f;
    }
    v8 = *(_DWORD*)a1;
    {
      __typeof__(v8) z_ = (__typeof__(v8)){0};
      LOBYTE(z_) = *(_BYTE*)(a1 + 12);
      v8 = z_;
    }
    return (float)(v6 * *(float*)a1) * (float)v8;
  }
  return result;
}

__int64 nn_atk_detail_2b9950()
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (GameData_21a3598 == 1) {
    result = StreamSoundPlayer_29baf0((__int64)&GameData_21a3518);
    if (GameData_21a3598 == 1) {
      HardwareOpusDecoderManager_2b97b0(GameData_21a3560),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      GameData_21a3590 = 0;
      result = (__int64)GameRoutine_2a4d20(GameData_21a3548);
      GameData_21a3598 = 0;
      GameData_21a359c = 0xFFFFFFFF00000000LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
