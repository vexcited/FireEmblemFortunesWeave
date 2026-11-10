#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BufferAllocator_5b4450(_QWORD, _QWORD, _QWORD);
__int64 CalculateAllocatedSizeHeap_5b7620(_QWORD*, __int64);
__int64 GameRoutine_5b4770(_QWORD, _QWORD);
__int64 GameRoutine_5c02b0(_QWORD, _QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5d24a0(_QWORD);
__int64 GameRoutine_5d2520(_QWORD, _QWORD);
__int64 GameRoutine_5d2530(_QWORD, _QWORD);
__int64 nn_5b2f80(__int64, __int64, __int64, __int64, int, __int64, __int64);
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
int* GameRoutine_5c52e0();
__int64 nn_vfx_detail_5b4f80(__int64 a1, int a2, int a3, int a4, int a5, int a6,
                             __int64 a7);
int* nn_vfx_detail_5b5240(__int64 a1);
unsigned __int8* nn_vfx_detail_5b5430(_QWORD* a1, __int64 a2, int a3,
                                      __int64 a4, int a5);

__int64 nn_vfx_detail_5b4f80(__int64 a1, int a2, int a3, int a4, int a5, int a6,
                             __int64 a7)
{
  _QWORD* v7;
  __int64 v8;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int128 v22;
  void (*v23)(_QWORD*);
  int v24;
  _QWORD v25[2];

  v7 = *(_QWORD**)(a1 + 32);
  v8 = *(_QWORD*)(v7[19] + 8LL * a4);
  if (v8 == 0 || (*(_BYTE*)(v8 + 9) & 1) == 0) {
    GameRoutine_5c02c0(
        "The Resource is not found in VfxSystem. ResourceId : %d.\n", a4);
    return 0;
  }
  *(_QWORD*)a1 = *(_QWORD*)(v8 + 16);
  if (a2 >= *(_DWORD*)(v8 + 76)) {
    *(_QWORD*)(a1 + 568) = 0;
    goto LABEL_8;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(v8 + 96) + 8LL * a2);
  if (v10 == 0) {
    v12 = *(_QWORD*)(v8 + 88);
    v10 = v12 + 56LL * a2;
    *(_QWORD*)(a1 + 568) = v10;
    if (v12 != 0) {
      goto LABEL_10;
    }
  LABEL_8:
    GameRoutine_5c02c0("The EmitterSet is not found in this resource. "
                       "EmitterSet Id : %d. ResourceId : %d\n",
                       a2, a4);
    return 0;
  }
  *(_QWORD*)(a1 + 568) = v10;
LABEL_10:
  v13 = *(_QWORD*)(v10 + 24);
  if (v13 != 0) {
    v24 = a3;
    v14 = a5;
    v15 = a4;
    v16 = a7;
    v17 = a6;
    v18 = a1;
    do {
      if ((CalculateAllocatedSizeHeap_5b7620((_QWORD*)v13, v8) & 1) == 0) {
        goto LABEL_19;
      }
      if (*(int*)(v13 + 136) >= 1) {
        v19 = 0;
        while ((CalculateAllocatedSizeHeap_5b7620(
                    *(_QWORD**)(v13 + 144 + 8 * v19), v8) &
                1) != 0) {
          if (++v19 >= *(int*)(v13 + 136)) {
            goto LABEL_12;
          }
        }
      LABEL_19:
        GameRoutine_5c02c0("EmitterResource Setup Failed.\n");
        return 0;
      }
    LABEL_12:
      v13 = *(_QWORD*)(v13 + 272);
    } while (v13 != 0);
    v7 = *(_QWORD**)(v18 + 32);
    a3 = v24;
    a1 = v18;
    a6 = v17;
    a7 = v16;
    a4 = v15;
    a5 = v14;
  }
  *(_DWORD*)(a1 + 40) = a2;
  *(_DWORD*)(a1 + 44) = a3;
  *(_DWORD*)(a1 + 48) = a4;
  *(_DWORD*)(a1 + 20) = a5;
  v20 = a1;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_OWORD*)(a1 + 224) = GameData_1a837f0;
  *(_OWORD*)(a1 + 240) = GameData_1a837f0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_DWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_BYTE*)(a1 + 13) = 0;
  *(_QWORD*)(a1 + 480) = a7;
  *(_DWORD*)(a1 + 560) = 0;
  *(_DWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_DWORD*)(a1 + 456) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_DWORD*)(a1 + 8) = 16842752;
  *(_WORD*)(a1 + 612) = 256;
  *(_WORD*)(a1 + 15) = 0x8000;
  *(_DWORD*)(a1 + 528) = 1065353216;
  *(_OWORD*)(a1 + 272) = (__typeof__(*(_OWORD*)(a1 + 272))){0};
  *(_OWORD*)(a1 + 544) = (__typeof__(*(_OWORD*)(a1 + 544))){0};
  *(_OWORD*)(a1 + 320) = GameData_1a837f0;
  *(_DWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 80) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 88) = 1065353216;
  *(_QWORD*)(a1 + 60) = 0;
  *(_BYTE*)(a1 + 14) = 0;
  *(_DWORD*)(a1 + 604) = 0;
  *(_DWORD*)(a1 + 72) = -1;
  *(_DWORD*)(a1 + 76) = 1065353216;
  *(_QWORD*)(a1 + 576) = v7[559];
  v21 = v7[560];
  *(_DWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 68) = a6;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 584) = v21;
  *(_OWORD*)(a1 + 96) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 112) = GameData_1a83610;
  *(_OWORD*)(a1 + 128) = GameData_1a83090;
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  *(_OWORD*)(a1 + 160) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 176) = GameData_1a83610;
  *(_OWORD*)(a1 + 192) = GameData_1a83090;
  *(_OWORD*)(a1 + 208) = (__typeof__(*(_OWORD*)(a1 + 208))){0};
  nn_vfx_detail_5b5240(a1);
  *(_QWORD*)&v22 = 0x3F8000003F800000LL;
  *((_QWORD*)&v22 + 1) = 0x3F8000003F800000LL;
  v23 = *(void (**)(_QWORD*))(v20 + 576);
  result = 1;
  *(_QWORD*)(v20 + 488) = 0x3F8000003F800000LL;
  *(_DWORD*)(v20 + 528) = 1065353216;
  *(_DWORD*)(v20 + 24) = 1;
  *(_OWORD*)(v20 + 256) = v22;
  *(_OWORD*)(v20 + 288) = GameData_1a837f0;
  *(_OWORD*)(v20 + 304) = GameData_1a837f0;
  *(_OWORD*)(v20 + 496) = (__typeof__(*(_OWORD*)(v20 + 496))){0};
  if (v23 != nullptr) {
    v25[0] = *(_QWORD*)(v20 + 32);
    v25[1] = v20;
    v23(v25);
    return 1;
  }
  return result;
}

int* nn_vfx_detail_5b5240(__int64 a1)
{

#pragma clang fp contract(off)
  int* result;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  __int128 v8;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  float v13;
  __int128 v14;

  *(_DWORD*)(a1 + 364) = **(_DWORD**)(a1 + 568);
  result = GameRoutine_5c52e0();
  v3 = result[2];
  v4 = result[3];
  v5 = *result ^ (*result << 11);
  *result = result[1];
  result[1] = v3;
  v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
  result[2] = v4;
  result[3] = v6;
  *(_DWORD*)(a1 + 52) = v6;
  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 568) + 24LL);
  if (v7 != 0) {
    *(_QWORD*)&v8 = 0x3F8000003F800000LL;
    *((_QWORD*)&v8 + 1) = 0x3F8000003F800000LL;
    v14 = v8;
    do {
      result = (int*)nn_vfx_detail_5b5430((_QWORD*)a1, v7, *(_DWORD*)(a1 + 68),
                                          0, -1);
      if (result != nullptr) {
        v9 = result;
        ++*(_DWORD*)(a1 + 456);
        ++*(_DWORD*)(a1 + 380);
        if (*(_BYTE*)(*(_QWORD*)(v7 + 16) + 2032LL) != 0) {
          if (*(int*)(*((_QWORD*)result + 71) + 136LL) >= 1) {
            goto LABEL_9;
          }
        }
        else {
          *(_BYTE*)(a1 + 8) = 1;
          if (*(int*)(*((_QWORD*)result + 71) + 136LL) >= 1) {
          LABEL_9:
            v10 = 0;
            do {
              v11 = *(_QWORD*)&v9[2 * v10 + 144];
              if (v11 != 0 && *(_BYTE*)(*(_QWORD*)(v11 + 16) + 2020LL) == 0) {
                result = (int*)nn_vfx_detail_5b5430((_QWORD*)a1, v11, 0,
                                                    (__int64)v9, v10);
                if (result != nullptr) {
                  v12 = v9[5];
                  result[341] = -1;
                  result[340] = v12;
                  *((_OWORD*)result + 52) = GameData_1a82dd0;
                  *((_OWORD*)result + 53) = GameData_1a83610;
                  *((_OWORD*)result + 54) = GameData_1a83090;
                  *((_OWORD*)result + 55) =
                      (__typeof__(*((_OWORD*)result + 55))){0};
                  *((_OWORD*)result + 56) = GameData_1a82dd0;
                  *((_OWORD*)result + 57) = GameData_1a83610;
                  *((_OWORD*)result + 58) = GameData_1a83090;
                  *((_OWORD*)result + 59) =
                      (__typeof__(*((_OWORD*)result + 59))){0};
                  v13 = (float)*(int*)(*((_QWORD*)v9 + 20) + 2232LL);
                  result[344] = 0;
                  result[342] = -1;
                  *((_QWORD*)result + 174) = 0;
                  *((_QWORD*)result + 175) = 0;
                  *((_QWORD*)result + 176) = 0;
                  *((_QWORD*)result + 177) = 0;
                  *((_QWORD*)result + 180) = 0;
                  *((_QWORD*)result + 182) = 0;
                  *((_QWORD*)result + 183) = 0;
                  *((_QWORD*)result + 181) = 0;
                  *((float*)result + 343) = v13;
                  *((_OWORD*)result + 89) = v14;
                }
              }
              ++v10;
            } while (v10 < *(int*)(*((_QWORD*)v9 + 71) + 136LL));
          }
        }
      }
      v7 = *(_QWORD*)(v7 + 272);
    } while (v7 != 0);
  }
  *(_BYTE*)(a1 + 12) = 1;
  return result;
}

unsigned __int8* nn_vfx_detail_5b5430(_QWORD* a1, __int64 a2, int a3,
                                      __int64 a4, int a5)
{
  __int64 v10;
  unsigned __int8* v11;
  int v12;
  bool v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  int v29;

  v10 = GameRoutine_5d24a0(a1[4]);
  v11 = (unsigned __int8*)v10;
  if (v10 == 0) {
    return v11;
  }
  v12 = *(_DWORD*)(a2 + 816);
  v13 = __OFSUB__(v12, 1);
  v14 = v12 - 1;
  if (v14 < 0 == v13) {
    *(_QWORD*)(v10 + 1008) = a1[4] + 88LL * (unsigned int)v14 + 3768;
  }
  v15 = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 2340LL);
  if (v15 == 0) {
    v19 = a1[4];
    if (*(_BYTE*)(v19 + 2256) == 1) {
      v18 = v19 + 2976;
    LABEL_9:
      *(_QWORD*)(v10 + 1000) = v18;
    }
    v20 = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 2400LL);
    v21 = (unsigned int)(v20 - 1);
    if (v20 < 1) {
      goto LABEL_18;
    }
  LABEL_13:
    if (*(_QWORD*)(a2 + 784) != 0) {
      v22 = a1[4];
      if (*(_BYTE*)(v22 + v21 + 2248) == 1) {
        *((_QWORD*)v11 + 124) = v22 + 88LL * (unsigned int)v21 + 2272;
      }
      else {
        GameRoutine_5c02c0(
            "CustomAction Callback is not established. CustomActionID : %d\n",
            v20);
      }
    }
    else {
      *((_QWORD*)v11 + 15) = a1;
      GameRoutine_5c02b0(v11, 16);
    }
    goto LABEL_18;
  }
  v16 = a1[4];
  v17 = (unsigned int)(v15 + 8);
  if (*(_BYTE*)(v16 + v17 + 2248) == 1) {
    v18 = v16 + 88LL * (unsigned int)v17 + 2272;
    goto LABEL_9;
  }
  GameRoutine_5c02c0(
      "CustomShader Callback is not established. CustomShaderID : %d\n", v15);
  v20 = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 2400LL);
  v21 = (unsigned int)(v20 - 1);
  if (v20 >= 1) {
    goto LABEL_13;
  }
LABEL_18:
  if ((nn_5b2f80((__int64)v11, *a1, (__int64)a1, a2, a3, a1[60], a4) & 1) !=
      0) {
    GameRoutine_5d2520(a1[4], v11);
    GameRoutine_5b4770(v11, *(unsigned int*)(*(_QWORD*)(a2 + 16) + 1892LL));
    v23 = *v11;
    *((_DWORD*)v11 + 8) = a5;
    if (v23 != 0) {
      *((_QWORD*)v11 + 169) = a4;
      v24 = a4 + 1216;
      v25 = *(_QWORD*)(a4 + 1216 + 8LL * a5);
      if (v25 != 0) {
        *(_QWORD*)(v25 + 128) = v11;
        *((_QWORD*)v11 + 17) = *(_QWORD*)(v24 + 8LL * a5);
        *(_QWORD*)(v24 + 8LL * a5) = v11;
        *((_QWORD*)v11 + 16) = 0;
        v26 = a4 + 1088;
        if (*(_QWORD*)(a4 + 1088 + 8LL * a5) == 0) {
          goto LABEL_30;
        }
      }
      else {
        *(_QWORD*)(v24 + 8LL * a5) = v11;
        *((_QWORD*)v11 + 16) = 0;
        *((_QWORD*)v11 + 17) = 0;
        v26 = a4 + 1088;
        if (*(_QWORD*)(a4 + 1088 + 8LL * a5) == 0) {
        LABEL_30:
          *(_QWORD*)(v26 + 8LL * a5) = v11;
        }
      }
    LABEL_33:
      v29 = *((_DWORD*)a1 + 14);
      *((_DWORD*)v11 + 5) = v29;
      *((_DWORD*)a1 + 14) = v29 + 1;
      return v11;
    }
    v28 = a1[43];
    if (v28 != 0) {
      *(_QWORD*)(v28 + 128) = v11;
      *((_QWORD*)v11 + 17) = a1[43];
      a1[43] = v11;
      *((_QWORD*)v11 + 16) = 0;
      if (a1[42] != 0) {
        goto LABEL_33;
      }
    }
    else {
      a1[43] = v11;
      *((_QWORD*)v11 + 16) = 0;
      *((_QWORD*)v11 + 17) = 0;
      if (a1[42] != 0) {
        goto LABEL_33;
      }
    }
    a1[42] = v11;
    goto LABEL_33;
  }
  v27 = v11[6];
  if (v11[6] != 0) {
    GameRoutine_5c02c0("Emitter Initialize Failed.\n");
  }
  BufferAllocator_5b4450(v11, *a1, v27 == 0);
  GameRoutine_5d2530(a1[4], v11);
  return nullptr;
}

#pragma GCC visibility pop
