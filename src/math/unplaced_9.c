#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a0a020(__int64);
__int64 GameRoutine_2b0();
__int64 std___1_random_device_random_device(__int64, __int64);
extern _UNKNOWN GameData_21a5688;
extern _UNKNOWN GameData_21a56a0;
extern __int64 GameData_21a6050;
extern __int64 GameData_21a6060[];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 util_g_handle_slots[];
extern float game_script_math_kDirCorrections[91];
extern int GameData_2166768[];
extern int GameData_21a5690;
extern int GameData_21a6068[];
extern int GameData_21a606c[];
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 math_624e60(__int64 a1, __int64 a2, _DWORD* a3);
__int64 math_625020();
float math_625180(float32x4_t* a1, float32x4_t* a2);
__int64 math_6252a0(__int64 result);

__int64 math_624e60(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;

  result = (unsigned int)a3[1];
  v4 = result - *a3;
  if ((_DWORD)result != *a3) {
    v5 = v4 + 1;
    if (v4 == -1) {
      v19 = *(_QWORD*)(a2 + 2496);
      v20 = (v19 + 1) % 0x270uLL;
      v21 = *(_DWORD*)(a2 + 4 * v20);
      if ((v21 & 1) != 0) {
        v22 = -1727483681;
      }
      else {
        v22 = 0;
      }
      *(_DWORD*)(a2 + 4 * v19) =
          v22 ^ *(_DWORD*)(a2 + 4 * ((v19 + 397) % 0x270uLL)) ^
          ((v21 & 0x7FFFFFFE | *(_DWORD*)(a2 + 4 * v19) & 0x80000000) >> 1);
      v23 = *(_DWORD*)(a2 + 4LL * *(_QWORD*)(a2 + 2496));
      *(_QWORD*)(a2 + 2496) = v20;
      v24 = ((v23 ^ (v23 >> 11)) << 7) & 0x9D2C5680 ^ v23 ^ (v23 >> 11);
      return (v24 << 15) & 0xEFC60000 ^ v24 ^
             (((v24 << 15) & 0xEFC60000 ^ v24) >> 18);
    }
    else {
      v6 = __clz(v5);
      v7 = 31;
      if (((v5 << v6) & 0x7FFFFFFF) != 0) {
        v7 = 32;
      }
      v8 = v7 - v6;
      v9 = (v8 + 31) >> 5;
      v10 = *(_QWORD*)(a2 + 2496);
      if (v9 <= v8) {
        v11 = 0xFFFFFFFF >> (-(char)((unsigned int)v8 / (unsigned int)v9) & 31);
      }
      else {
        v11 = 0;
      }
      do {
        v12 = (v10 + 1) % 0x270;
        v13 = *(_DWORD*)(a2 + 4 * v12);
        v14 = v13 & 0x7FFFFFFE | *(_DWORD*)(a2 + 4 * v10) & 0x80000000;
        if ((v13 & 1) != 0) {
          v15 = -1727483681;
        }
        else {
          v15 = 0;
        }
        *(_DWORD*)(a2 + 4 * v10) =
            v15 ^ *(_DWORD*)(a2 + 4 * ((v10 + 397) % 0x270)) ^ (v14 >> 1);
        v16 = *(_DWORD*)(a2 + 4LL * *(_QWORD*)(a2 + 2496));
        *(_QWORD*)(a2 + 2496) = v12;
        v17 = ((v16 ^ (v16 >> 11)) << 7) & 0x9D2C5680 ^ v16 ^ (v16 >> 11);
        v18 = ((v17 << 15) & 0xEFC60000 ^ v17 ^
               (((v17 << 15) & 0xEFC60000 ^ v17) >> 18)) &
              v11;
        v10 = v12;
      } while (v18 >= v5);
      return *a3 + v18;
    }
  }
  return result;
}

__int64 math_625020()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  unsigned int* v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  struct {
    char v14[16];
    __int64 v15;
  } v14_;

  v14_.v14[0] = 24;
  strcpy(&v14_.v14[1], "/dev/urandom");
  std___1_random_device_random_device((__int64)&GameData_21a5688,
                                      (__int64)v14_.v14);
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0,
                                  v14_.v15);
  }
  GameRoutine_2b0();
  LODWORD(result) = GameRoutine_1a0a020((__int64)&GameData_21a5688);
  v2 = -623;
  v3 = 1;
  GameData_21a5690 = result;
  v4 = (unsigned int*)&GameData_21a56a0;
  do {
    v5 = v2 + 1812433253 * (result ^ ((unsigned int)result >> 30)) + 624;
    v6 = v2 + 1812433253 * (v5 ^ (v5 >> 30)) + 625;
    *(v4 - 3) = v5;
    *(v4 - 2) = v6;
    v7 = v2 + 1812433253 * (v6 ^ (v6 >> 30)) + 626;
    v8 = v2 + 1812433253 * (v7 ^ (v7 >> 30)) + 627;
    *(v4 - 1) = v7;
    *v4 = v8;
    v9 = v2 + 1812433253 * (v8 ^ (v8 >> 30)) + 628;
    v10 = v2 + 1812433253 * (v9 ^ (v9 >> 30)) + 629;
    v4[1] = v9;
    v4[2] = v10;
    v11 = 1812433253 * (v10 ^ (v10 >> 30));
    v12 = v3 + v11;
    v13 = v2 + v11;
    v3 += 7;
    v2 += 7;
    result = (unsigned int)(v12 + 6);
    v4[3] = v13 + 630;
    v4 += 7;
  } while (v2 != 0);
  GameData_21a6050 = 0;
  return result;
}

float math_625180(float32x4_t* a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  float32x4_t v2;
  float v3;
  float v4;
  float v5;
  int v6;
  float result;
  float v8;
  float v9;
  int v10;

  v2 = vsubq_f32(*a2, *a1);
  v3 = fabsf(LANES128(v2).n128_f32[0]);
  v4 = fabsf(LANES128(v2).n128_f32[2]);
  if (v3 > v4) {
    v5 = (float)(v4 / v3) * 0x1.6800000000000p+5f;
    if ((float)(v5 + v5) < 0x0.0p+0f) {
      v6 = -(int)(float)(0x1.0000000000000p-1f - (float)(v5 + v5));
    }
    else {
      v6 = (int)(float)((float)(v5 + v5) + 0x1.0000000000000p-1f);
    }
    result = v5 * game_script_math_kDirCorrections[v6];
    if (LANES128(v2).n128_f32[0] >= 0x0.0p+0f) {
      v8 = 0x1.6800000000000p+6f;
      if (LANES128(v2).n128_f32[2] < 0x0.0p+0f) {
        return v8 - result;
      }
    }
    else {
      v8 = 0x1.0e00000000000p+8f;
      if (LANES128(v2).n128_f32[2] >= 0x0.0p+0f) {
        return v8 - result;
      }
    }
    return result + v8;
  }
  result = 0x0.0p+0f;
  if (LANES128(v2).n128_f32[2] != 0x0.0p+0f) {
    v9 = (float)(v3 / v4) * 0x1.6800000000000p+5f;
    if ((float)(v9 + v9) < 0x0.0p+0f) {
      v10 = -(int)(float)(0x1.0000000000000p-1f - (float)(v9 + v9));
    }
    else {
      v10 = (int)(float)((float)(v9 + v9) + 0x1.0000000000000p-1f);
    }
    result = v9 * game_script_math_kDirCorrections[v10];
    if (LANES128(v2).n128_f32[2] >= 0x0.0p+0f) {
      v8 = 0x1.6800000000000p+7f;
      if (LANES128(v2).n128_f32[0] < 0x0.0p+0f) {
        return result + v8;
      }
    }
    else {
      if (LANES128(v2).n128_f32[0] >= 0x0.0p+0f) {
        return result;
      }
      v8 = 0x1.6800000000000p+8f;
    }
    return v8 - result;
  }
  return result;
}

__int64 math_6252a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  __int64* v4;
  int v5;
  __int64 v6;

  v1 = *(unsigned int*)(result + 8);
  v2 = (unsigned int)GameData_21a6068[v1];
  v3 = GameData_2166768[v1];
  if ((unsigned int)v2 < v3) {
    v4 = (__int64*)(util_g_handle_slots[v1] + 16 * v2);
    v5 = GameData_21a6068[v1];
    while (*v4 != 0) {
      ++v5;
      v4 += 2;
      if (v3 == v5) {
        if (result == 0) {
          goto LABEL_12;
        }
        goto LABEL_6;
      }
    }
    goto LABEL_11;
  }
LABEL_6:
  if ((_DWORD)v2 != 0) {
    v5 = 0;
    v4 = (__int64*)util_g_handle_slots[v1];
    while (*v4 != 0) {
      ++v5;
      v4 += 2;
      if ((_DWORD)v2 == v5) {
        goto LABEL_12;
      }
    }
  LABEL_11:
    v6 = GameData_21a6060[v1] + 1;
    GameData_21a6060[v1] = v6;
    *v4 = v6;
    v4[1] = result;
    *(_DWORD*)(result + 12) = v5;
    GameData_21a6068[v1] = v5;
  }
LABEL_12:
  ++GameData_21a606c[v1];
  return result;
}

#pragma GCC visibility pop
