#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_a7fda0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212edb0[9];
struct PseudoSret GameRoutine_d31ee0(_QWORD);
_QWORD* CameraStateCircleHub_Unknown2(__int64 a1);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN GameData_1aa14dc;
extern _UNKNOWN GameData_1aea2a3;
extern _UNKNOWN GameData_1aee1e4;
extern _UNKNOWN GameData_1af5c1d;
extern __int64* GameData_212eda8[10];
extern __int64 GameData_21d96b8;
extern __int64 GameData_220b6f0;
extern __int64 game_GameModeData_instance_;
float GameRoutine_d1fae0(_QWORD);
float GameRoutine_d20650(_QWORD, _QWORD);
float powf(_QWORD, float, float);
__attribute__((swiftcall)) void
CameraStateCircleHub_d31ee0(PSEUDO_X8 x8_, __int64 a1, unsigned int a2);
float CameraStateCircleHub_Unknown5(float* a1);
float CameraStateCircleHub_Unknown6(float* a1);

_QWORD* CameraStateCircleHub_Unknown2(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int128 v4;
  __int128 v5;
  float v6;
  float v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  atomic_ullong* v14;
  _QWORD* v15;
  __int64* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
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
  int v32;

  v2 = (__int64*)GameData_212dc38[0];
  GameRoutine_a7fda0(a1 + 80, *(_QWORD*)GameData_212dc38[0] + 16LL);
  v3 = *(_QWORD*)(a1 + 912);
  v4 = *(_OWORD*)(*(_QWORD*)(v3 + 8) + 112LL);
  *(_QWORD*)(v3 + 16) = v4;
  v5 = *(_OWORD*)(v3 + 16);
  *((_QWORD*)&v5 + 1) = DWORD2(v4);
  *(_OWORD*)(v3 + 16) = v5;
  LODWORD(v5) = *(_DWORD*)(a1 + 164);
  LODWORD(v4) = *(_DWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 516) = 0x42440000C1200000LL;
  *(_DWORD*)(a1 + 524) = 1065353216;
  *(_DWORD*)(a1 + 836) = v4;
  *(_DWORD*)(a1 + 832) = v5;
  v6 = *(float*)(a1 + 628);
  v7 = 3.5f;
  v8 = *(_QWORD*)GameData_212d310;
  v9 = *(_DWORD*)(*(_QWORD*)GameData_212d310 + 48LL);
  if ((v9 & 2) == 0) {
    v7 = *(float*)(a1 + 628);
  }
  if ((v9 & 4) != 0) {
    v7 = 2.0f;
  }
  if (v7 >= v6) {
    v6 = v7;
  }
  *(float*)(a1 + 628) = v6;
  v10 = *(_DWORD*)(v8 + 48);
  if ((v10 & 0x20) != 0) {
    *(_BYTE*)(a1 + 632) = 1;
    v10 = *(_DWORD*)(v8 + 48);
  }
  if ((v10 & 0x10) != 0) {
    *(_DWORD*)(a1 + 536) = 1065353216;
  }
  v11 = *v2;
  *(_DWORD*)(a1 + 1108) = *(_DWORD*)(a1 + 500);
  *(_DWORD*)(a1 + 1112) = *(_DWORD*)(a1 + 512);
  v12 = *(_QWORD*)(v11 + 1128);
  if (v12 != 0) {
    *(_QWORD*)(v11 + 1128) = 0;
  }
  else {
    v12 = *(_QWORD*)(*GameData_212eba8[0] + 56);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  result[1] = 0;
  v14 = (atomic_ullong*)(result + 1);
  result[2] = 0;
  v15 = result;
  v16 = GameData_212edb0[0];
  *((_BYTE*)result + 48) = 0;
  *((_BYTE*)result + 64) = 0;
  result[10] = 0;
  result[11] = 0;
  result[4] = v12;
  *result = v16 + 2;
  *((_BYTE*)result + 96) = 1;
  *(_QWORD*)(a1 + 1116) = 0x3F8000003ECCCCCDLL;
  v17 = GameData_212c6a0[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 720LL) != 0) {
    v18 = *(unsigned __int8*)(*(_QWORD*)GameData_212c6a0[0] + 720LL);
  }
  else {
    v18 = 3;
  }
  if (*(_DWORD*)(a1 + 992) != v18) {
    *(_DWORD*)(a1 + 992) = v18;
    *(_QWORD*)(a1 + 1100) = 0;
    *(struct PseudoSret*)(&v26) = GameRoutine_d31ee0(a1);
    v19 = v31;
    *(_QWORD*)(a1 + 1028) = v30;
    *(_QWORD*)(a1 + 1036) = v19;
    v20 = v27;
    *(_DWORD*)(a1 + 1044) = v32;
    *(_QWORD*)(a1 + 996) = v26;
    *(_QWORD*)(a1 + 1004) = v20;
    v21 = v29;
    *(_QWORD*)(a1 + 1012) = v28;
    *(_QWORD*)(a1 + 1020) = v21;
    result =
        (*(struct PseudoSret*)(&v26) = GameRoutine_d31ee0(a1), (void*)(&v26));
    v22 = v31;
    v23 = v28;
    *(_QWORD*)(a1 + 1072) = v29;
    v24 = v30;
    *(_QWORD*)(a1 + 1088) = v22;
    v25 = v27;
    *(_QWORD*)(a1 + 1064) = v23;
    *(_QWORD*)(a1 + 1080) = v24;
    LODWORD(v24) = v32;
    *(_QWORD*)(a1 + 1056) = v25;
    *(_DWORD*)(a1 + 1096) = v24;
    *(_QWORD*)(a1 + 1048) = v26;
    *(_BYTE*)(*(_QWORD*)v17 + 720LL) = v18;
  }
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v15);
  }
  return result;
}

__attribute__((swiftcall)) void

CameraStateCircleHub_d31ee0(PSEUDO_X8 x8_, __int64 a1, unsigned int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  float v7;
  float v8;
  void* v9;
  float v10;
  void* v11;
  char* v12;
  __int64 result;
  float v14;
  __int64 v15;
  float v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64* v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  _QWORD v39[2];
  _QWORD v40[2];
  char* v41;

  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_DWORD*)(a3 + 48) = 0;
  *(_QWORD*)a3 = 0x3F8000003C23D70ALL;
  *(_QWORD*)(a3 + 8) = 0;
  *(_QWORD*)(a3 + 16) = 0x3F8000003F800000LL;
  *(_QWORD*)(a3 + 24) = 0x3F80000000000000LL;
  v6 = (_QWORD*)GameData_212dc38[0];
  v7 = GameRoutine_d1fae0(*(_QWORD*)GameData_212dc38[0]);
  v8 = GameRoutine_d20650(*v6, a2);
  v9 = &GameData_1aa14dc;
  v10 = v8;
  v40[1] = 0;
  v41 = nullptr;
  v40[0] = 0;
  if (a2 == 2) {
    v9 = &GameData_1aea2a3;
  }
  if (a2 == 1) {
    v11 = &GameData_1aee1e4;
  }
  else {
    v11 = v9;
  }
  GameRoutine_60a020(v40, v11);
  if (*(_DWORD*)(GameData_21d96b8 + 8) != 2) {
    GameRoutine_1a09ce0(v40, &GameData_1af5c1d, 14);
  }
  if ((v40[0] & 1) != 0) {
    v12 = v41;
  }
  else {
    v12 = (char*)v40 + 1;
  }
  v39[1] = v12;
  result = game_HashString(v12);
  v14 = 0.0f;
  v39[0] = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v39);
    if (result != 0) {
      v14 = (float)*(int*)(result + 32);
    }
  }
  if ((v40[0] & 1) != 0 && v41 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v41);
  }
  v16 = v14 / 0x1.9000000000000p+6f;
  if (a2 != 3) {
    if (a2 != 2) {
      if (a2 != 1) {
        result;
        return;
      }
      *(float*)a3 = v16;
      *(_DWORD*)(a3 + 12) = 1051931443;
      *(float*)(a3 + 24) = v10 - v7;
      *(_DWORD*)(a3 + 4) = 1061997773;
      *(_DWORD*)(a3 + 28) = 0x40000000;
      v17 = *(__int64**)(a1 + 880);
      v18 = *(_QWORD*)(a1 + 888);
      if (v18 == 0) {
        v30 = *v17;
        if (v30 == 0 || GameData_220b6f0 == 0) {
          goto LABEL_80;
        }
        v31 = *(_QWORD**)(GameData_220b6f0 + 8);
        v32 = *(_QWORD**)(GameData_220b6f0 + 16);
        if (v31 != v32) {
          while (*v31 != v30) {
            v31 += 2;
            if (v31 == v32) {
              goto LABEL_80;
            }
          }
        }
        if (v31 != v32) {
          v38 = *(float*)(v30 + 560);
        }
        else {
        LABEL_80:
          v38 = 0x1.6666660000000p+0f;
          if (*GameData_212eda8[0] == 0) {
            v38 = 0.0f;
          }
        }
        *(float*)(a3 + 8) = v38;
        v34 = 6.0f;
        v35 = 0.0f;
        goto LABEL_83;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      v19 = *v17;
      if (v19 == 0 || GameData_220b6f0 == 0) {
        goto LABEL_74;
      }
      v20 = *(_QWORD**)(GameData_220b6f0 + 8);
      v21 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v20 != v21) {
        while (*v20 != v19) {
          v20 += 2;
          if (v20 == v21) {
            goto LABEL_74;
          }
        }
      }
      if (v20 != v21) {
        v37 = *(float*)(v19 + 560);
      }
      else {
      LABEL_74:
        v37 = 0x1.6666660000000p+0f;
        if (*GameData_212eda8[0] == 0) {
          v37 = 0.0f;
        }
      }
      *(float*)(a3 + 8) = v37;
      v34 = 6.0f;
      v35 = 0.0f;
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        goto LABEL_77;
      }
      goto LABEL_83;
    }
    *(float*)a3 = v16;
    *(_DWORD*)(a3 + 4) = 1050253722;
    v22 = *(__int64**)(a1 + 880);
    v18 = *(_QWORD*)(a1 + 888);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      v23 = *v22;
      if (v23 == 0 || GameData_220b6f0 == 0) {
        goto LABEL_63;
      }
      v24 = *(_QWORD**)(GameData_220b6f0 + 8);
      v25 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v24 != v25) {
        while (*v24 != v23) {
          v24 += 2;
          if (v24 == v25) {
            goto LABEL_63;
          }
        }
      }
      goto LABEL_61;
    }
    v27 = *v22;
    if (v27 == 0 || GameData_220b6f0 == 0) {
      goto LABEL_69;
    }
    v28 = *(_QWORD**)(GameData_220b6f0 + 8);
    v29 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v28 != v29) {
      while (*v28 != v27) {
        v28 += 2;
        if (v28 == v29) {
          goto LABEL_69;
        }
      }
    }
    goto LABEL_67;
  }
  *(float*)a3 = v16;
  *(_DWORD*)(a3 + 4) = 1050253722;
  v26 = *(__int64**)(a1 + 880);
  v18 = *(_QWORD*)(a1 + 888);
  *(float*)(a3 + 24) = v10 - v7;
  if (v18 == 0) {
    v27 = *v26;
    if (v27 == 0 || GameData_220b6f0 == 0) {
      goto LABEL_69;
    }
    v28 = *(_QWORD**)(GameData_220b6f0 + 8);
    v29 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v28 != v29) {
      while (*v28 != v27) {
        v28 += 2;
        if (v28 == v29) {
          goto LABEL_69;
        }
      }
    }
  LABEL_67:
    if (v28 != v29) {
      v36 = *(float*)(v27 + 556);
    LABEL_71:
      *(float*)(a3 + 8) = v36;
      v34 = 2.5f;
      v35 = 0x1.0000000000000p+0f;
      goto LABEL_83;
    }
  LABEL_69:
    v36 = 0x1.6666660000000p+0f;
    if (*GameData_212eda8[0] == 0) {
      v36 = 0.0f;
    }
    goto LABEL_71;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                            memory_order_relaxed);
  v23 = *v26;
  if (v23 != 0 && GameData_220b6f0 != 0) {
    v24 = *(_QWORD**)(GameData_220b6f0 + 8);
    v25 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v24 != v25) {
      while (*v24 != v23) {
        v24 += 2;
        if (v24 == v25) {
          goto LABEL_63;
        }
      }
    }
  LABEL_61:
    if (v24 != v25) {
      v33 = *(float*)(v23 + 556);
      goto LABEL_65;
    }
  }
LABEL_63:
  v33 = 0x1.6666660000000p+0f;
  if (*GameData_212eda8[0] == 0) {
    v33 = 0.0f;
  }
LABEL_65:
  *(float*)(a3 + 8) = v33;
  v34 = 2.5f;
  v35 = 0x1.0000000000000p+0f;
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
  LABEL_77:
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = std___1___shared_weak_count___release_weak(v18);
  }
LABEL_83:
  *(float*)(a3 + 32) = v35;
  *(float*)(a3 + 36) = v35;
  *(float*)(a3 + 48) = v34;
  *(_QWORD*)(a3 + 40) = 0x406000003DCCCCCDLL;
  {
    result;
    return;
  }
}

float CameraStateCircleHub_Unknown5(float* a1)
{
  float v1;
  float v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float result;

  v1 = a1[276];
  v2 = 1.0f;
  if (v1 > 0.0f) {
    v2 = a1[275] / v1;
  }
  v4 = a1[280];
  v5 = (float)(v2 * 0x1.921fb60000000p+1f) +
       (float)(roundf((float)(v2 * 0x1.921fb60000000p+1f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v5 <= 0x1.921fb60000000p+0f) {
    v7 = 1.0f;
    if (v5 >= -0x1.921fb60000000p+0f) {
      goto LABEL_8;
    }
    v6 = -0x1.921fb60000000p+1f;
  }
  else {
    v6 = 0x1.921fb60000000p+1f;
  }
  v5 = v6 - v5;
  v7 = -1.0f;
LABEL_8:
  v8 = v5 * v5;
  v9 =
      v7 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v8)) *
                                                                            v8)) *
                                                         v8)) *
                                         v8)) *
                      v8) +
              1.0f);
  v10 = 1.0f / v4;
  v11 = fabsf(v9);
  if (v4 < 1.0f) {
    v10 = 1.0f;
  }
  v12 = powf(a1, v11, v10);
  v13 = -1.0f;
  v14 = v12 * 0.5f;
  if (v9 < 0.0f) {
    v13 = 1.0f;
  }
  v15 = (float)(v14 * v13) + 0.5f;
  if (v4 < 1.0f) {
    v15 = (float)(v4 * v15) + (float)(v2 * (float)(1.0f - v4));
  }
  result = a1[255] +
           (float)(fminf(fmaxf(v15, 0.0f), 1.0f) * (float)(a1[268] - a1[255]));
  a1[281] = result;
  return result;
}

float CameraStateCircleHub_Unknown6(float* a1)
{
  float v1;
  float v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v1 = a1[276];
  v2 = 1.0f;
  if (v1 > 0.0f) {
    v2 = a1[275] / v1;
  }
  v4 = a1[280];
  v5 = (float)(v2 * 0x1.921fb60000000p+1f) +
       (float)(roundf((float)(v2 * 0x1.921fb60000000p+1f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v5 <= 0x1.921fb60000000p+0f) {
    v7 = 1.0f;
    if (v5 >= -0x1.921fb60000000p+0f) {
      goto LABEL_8;
    }
    v6 = -0x1.921fb60000000p+1f;
  }
  else {
    v6 = 0x1.921fb60000000p+1f;
  }
  v5 = v6 - v5;
  v7 = -1.0f;
LABEL_8:
  v8 = v5 * v5;
  v9 =
      v7 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            v8)) *
                                                                            v8)) *
                                                         v8)) *
                                         v8)) *
                      v8) +
              1.0f);
  v10 = 1.0f / v4;
  v11 = fabsf(v9);
  if (v4 < 1.0f) {
    v10 = 1.0f;
  }
  v12 = powf(a1, v11, v10);
  v13 = -1.0f;
  v14 = v12 * 0.5f;
  if (v9 < 0.0f) {
    v13 = 1.0f;
  }
  v15 = (float)(v14 * v13) + 0.5f;
  if (v4 < 1.0f) {
    v15 = (float)(v4 * v15) + (float)(v2 * (float)(1.0f - v4));
  }
  return a1[255] +
         (float)(fminf(fmaxf(v15, 0.0f), 1.0f) * (float)(a1[268] - a1[255]));
}

#pragma GCC visibility pop
