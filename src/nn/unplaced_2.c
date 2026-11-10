#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5b2ba0(__int64);
__int64 GameRoutine_5c02b0(_QWORD, _QWORD);
__int64 GameRoutine_5c02c0(_QWORD);
__int64 GameRoutine_5c55e0(__int64 result, int);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
float nn_5b3210(unsigned __int8*, __int64, __int64);
int* GameRoutine_5c52e0();
__int64 nn_5b2f80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                  __int64 a6, __int64 a7);

__int64 nn_5b2f80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5,
                  __int64 a6, __int64 a7)
{

#pragma clang fp contract(off)
  float v7;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int* v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  char v22;
  __int64 v23;
  __int128 v24;
  __int64 v26;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  *(_QWORD*)(a1 + 120) = a3;
  v7 = 0x0.0p+0f;
  v11 = *(_QWORD*)(a4 + 16);
  *(_QWORD*)(a1 + 568) = a4;
  *(_QWORD*)(a1 + 160) = v11;
  *(_DWORD*)(a1 + 112) = 1065353216;
  v12 = *(_QWORD*)(a4 + 16);
  if (*(_BYTE*)(v12 + 1883) == 0 && *(_BYTE*)(v12 + 1884) == 0) {
    v7 = 0x1.0000000000000p+0f;
  }
  *(float*)(a1 + 116) = v7;
  *(_DWORD*)(a1 + 36) = a5;
  *(_QWORD*)(a1 + 552) = 0;
  *(_DWORD*)(a1 + 1508) = 1;
  *(_OWORD*)(a1 + 832) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 848) = GameData_1a83610;
  *(_OWORD*)(a1 + 864) = GameData_1a83090;
  *(_OWORD*)(a1 + 880) = (__typeof__(*(_OWORD*)(a1 + 880))){0};
  *(_OWORD*)(a1 + 896) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 912) = GameData_1a83610;
  *(_OWORD*)(a1 + 928) = GameData_1a83090;
  *(_OWORD*)(a1 + 944) = (__typeof__(*(_OWORD*)(a1 + 944))){0};
  if (*(_BYTE*)(a4 + 4) == 1 && *(_BYTE*)(*(_QWORD*)(a4 + 16) + 2020LL) == 0 &&
      *(_QWORD*)(a4 + 824) != 0 && (*(_DWORD*)(a4 + 816) & 0xFFFFFFFE) == 2) {
    GameRoutine_5c02c0("Lightweight child emitter and history based stripe "
                       "cannot be combined.\n"),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameRoutine_5c02b0(a1, 0x20000),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    goto LABEL_20;
  }
  v13 = *(_QWORD*)(a4 + 144);
  if (v13 != 0) {
    *(_QWORD*)(a1 + 576) = v13;
    *(_QWORD*)(a1 + 584) = *(_QWORD*)(a4 + 152);
    *(_QWORD*)(a1 + 592) = *(_QWORD*)(a4 + 160);
    *(_QWORD*)(a1 + 600) = *(_QWORD*)(a4 + 168);
    *(_QWORD*)(a1 + 608) = *(_QWORD*)(a4 + 176);
    *(_QWORD*)(a1 + 616) = *(_QWORD*)(a4 + 184);
    *(_QWORD*)(a1 + 624) = *(_QWORD*)(a4 + 192);
    *(_QWORD*)(a1 + 632) = *(_QWORD*)(a4 + 200);
    *(_QWORD*)(a1 + 640) = *(_QWORD*)(a4 + 208);
    *(_QWORD*)(a1 + 648) = *(_QWORD*)(a4 + 216);
    *(_QWORD*)(a1 + 656) = *(_QWORD*)(a4 + 224);
    *(_QWORD*)(a1 + 664) = *(_QWORD*)(a4 + 232);
    *(_QWORD*)(a1 + 672) = *(_QWORD*)(a4 + 240);
    *(_QWORD*)(a1 + 680) = *(_QWORD*)(a4 + 248);
    *(_QWORD*)(a1 + 688) = *(_QWORD*)(a4 + 256);
    *(_QWORD*)(a1 + 696) = *(_QWORD*)(a4 + 264);
  }
  *(_QWORD*)(a1 + 96) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 108) = 1065353216;
  v14 = *(_DWORD*)(a3 + 20);
  *(_DWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 16) = v14;
  *(_BYTE*)a1 = *(_BYTE*)(a4 + 4);
  *(_WORD*)(a1 + 2) = 257;
  *(_DWORD*)(a1 + 64) = -1;
  *(_WORD*)(a1 + 1724) = 256;
  *(_BYTE*)(a1 + 10) = 1;
  v15 = GameRoutine_5c52e0(),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v16 = *(_QWORD*)(a1 + 160);
  v17 = *(unsigned __int8*)(v16 + 1879);
  if (v17 == 2) {
    v21 = -539222987 * *(_DWORD*)(v16 + 1888);
  }
  else if (v17 == 1) {
    v21 = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 52LL);
  }
  else {
    if (*(_BYTE*)(v16 + 1879) != 0) {
      goto LABEL_15;
    }
    v18 = v15[2];
    v19 = v15[3];
    v20 = *v15 ^ (*v15 << 11);
    *v15 = v15[1];
    v15[1] = v18;
    v21 = (v20 >> 8) ^ (v19 >> 19) ^ v20 ^ v19;
    v15[2] = v19;
    v15[3] = v21;
  }
  GameRoutine_5c55e0(a1 + 168, v21),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
LABEL_15:
  nn_5b3210((unsigned __int8*)a1, a2, a7),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((v22 & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 120);
    *(_DWORD*)(a1 + 92) = 0;
    v26 = a1;
    *(_OWORD*)(a1 + 960) = *(_OWORD*)(v23 + 144);
    *(_OWORD*)(a1 + 976) = (__typeof__(*(_OWORD*)(a1 + 976))){0};
    *(_QWORD*)&v24 = 0x3F8000003F800000LL;
    *((_QWORD*)&v24 + 1) = 0x3F8000003F800000LL;
    LODWORD(v23) = *(_DWORD*)(v23 + 44);
    *(_OWORD*)(a1 + 1056) = v24;
    *(_OWORD*)(a1 + 1072) = v24;
    *(_DWORD*)(a1 + 24) = v23;
    return GameRoutine_5b2ba0((__int64)&v26) & 1;
  }
LABEL_20:
  *(_BYTE*)(a1 + 6) = 1;
  return 0;
}

#pragma GCC visibility pop
