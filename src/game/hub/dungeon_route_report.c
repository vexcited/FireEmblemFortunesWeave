#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1b00(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
_QWORD* DungeonRouteReport_f604e0(_QWORD* result);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_hub_DungeonRouteReport_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 DungeonRouteReport_f60360(_QWORD* a1);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 Manager_d55430(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1aa18e9;
extern _UNKNOWN GameData_1aa53fd;
extern _UNKNOWN GameData_1ab0ecf;
extern _UNKNOWN GameData_1ac0a92;
extern _UNKNOWN GameData_1ac3eca;
extern _UNKNOWN GameData_1ad729b;
extern _UNKNOWN GameData_1adb73c;
extern _UNKNOWN GameData_1adef41;
extern _UNKNOWN GameData_1aea6fb;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 GameData_212dbb8[9];
extern __int64 game_GameModeData_instance_;
__int64 DungeonRouteReport_f608a0(__int64 a1);
long double DungeonRouteReport_f60e40(__int64 a1);
__int64* DungeonRouteReport_f62340(__int64* result, __int64* a2, __int64* a3,
                                   __int64* a4, __int64* a5);
__int64 DungeonRouteReport_f62800(__int64 result);
__int64 GameRoutine_14a1b00_alt1(__int64*,
                                 float) __asm__("GameRoutine_14a1b00");
bool nn_g3d_5eb5c0(__int64, float32x4_t*);
extern __int128 GameData_1a83610;
extern __int64* GameData_212d458[7];
extern __int64 GameData_21323e8[4];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float atan2f(long double, float);
float powf(float, float);
void game_hub_DungeonRouteReport_Update_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       atomic_uint* a3);

__n128 DungeonRouteReport_f60360(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *a1 = game_hub_DungeonRouteReport_vtable;
  v3 = a1[1];
  v2 = a1[2];
  if (v2 != v3) {
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v3 + 8 * v4);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
        *(_QWORD*)(v3 + 8 * v4) = 0;
        v3 = a1[1];
        v2 = a1[2];
      }
      ++v4;
    } while (v4 < (v2 - v3) >> 3);
  }
  a1[2] = v3;
  DungeonRouteReport_f604e0(a1);
  v7 = a1[4];
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = a1[5];
    if (v7 == v9) {
      goto LABEL_14;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v7);
    v11 = a1[4];
    a1[5] = v7;
    if (v11 != 0) {
    LABEL_14:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12);
    }
  }
  v13 = a1[1];
  if (v13 != 0) {
    v14 = *(_QWORD*)v8;
    a1[2] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(v14 + v15);
  }
  return result;
}

_QWORD* DungeonRouteReport_f604e0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = result[1];
  v1 = result[2];
  v3 = result;
  if (v1 != v2) {
    for (i = 0; i < (v1 - v2) >> 3; ++i) {
      v5 = *(_QWORD*)(v2 + 8 * i);
      v6 = *(_QWORD*)(v5 + 80);
      if (v6 == 0) {
        continue;
      }
      result = *(_QWORD**)(v6 + 8);
      *(_BYTE*)v6 = 0;
      v7 = *result;
      if (*result != 0) {
        if (*(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
          *(_BYTE*)(v7 + 33) = 0;
          if (*(_BYTE*)v6 != 0) {
            goto LABEL_5;
          }
        }
        result = *(_QWORD**)(v6 + 8);
      }
      result = (_QWORD*)GameRoutine_14a1b00(result, 0.0);
    LABEL_5:
      *(_QWORD*)(v5 + 80) = 0;
      v2 = v3[1];
      v1 = v3[2];
    }
  }
  v8 = v3[4];
  v9 = v3[5];
  if (v9 != v8) {
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v3[5] = v8;
  }
  return result;
}

__int64 DungeonRouteReport_f608a0(__int64 a1)
{
  __int64 v2;
  float v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 result;
  float v25;
  __int64 v26;
  void* v27;

  v27 = &GameData_1adb73c;
  v2 = game_HashString(&GameData_1adb73c);
  v3 = 0.0;
  v4 = 0.0;
  v26 = v2;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    v4 = 0.0;
    if (v5 != 0) {
      v4 = (float)*(int*)(v5 + 32);
    }
  }
  *(float*)(a1 + 68) = v4;
  v27 = &GameData_1ab0ecf;
  v26 = game_HashString(&GameData_1ab0ecf);
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v6 != 0) {
      v3 = (float)*(int*)(v6 + 32);
    }
  }
  *(float*)(a1 + 76) = v3;
  v27 = &GameData_1adef41;
  v7 = game_HashString(&GameData_1adef41);
  v8 = 0.0;
  v9 = 0.0;
  v26 = v7;
  if (game_GameModeData_instance_ != 0) {
    v10 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    v9 = 0.0;
    if (v10 != 0) {
      v9 = (float)*(int*)(v10 + 32);
    }
  }
  *(float*)(a1 + 80) = v9;
  v27 = &GameData_1ac3eca;
  v26 = game_HashString(&GameData_1ac3eca);
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v11 != 0) {
      v8 = (float)*(int*)(v11 + 32);
    }
  }
  v27 = &GameData_1ad729b;
  *(float*)(a1 + 84) = v8 / 100.0;
  v12 = 0.0;
  v26 = game_HashString(&GameData_1ad729b);
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v13 != 0) {
      v12 = (float)*(int*)(v13 + 32);
    }
  }
  v27 = &GameData_1aa53fd;
  *(float*)(a1 + 72) = v12 / 100.0;
  v14 = game_HashString(&GameData_1aa53fd);
  v15 = game_GameModeData_instance_;
  v26 = v14;
  if (game_GameModeData_instance_ != 0) {
    v16 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v16 != 0) {
      v15 = *(_DWORD*)(v16 + 32);
    }
    else {
      v15 = 0;
    }
  }
  *(_DWORD*)(a1 + 88) = v15;
  v27 = &GameData_1aa18e9;
  v17 = game_HashString(&GameData_1aa18e9);
  v18 = 0.0;
  v19 = 0.0;
  v26 = v17;
  if (game_GameModeData_instance_ != 0) {
    v20 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    v19 = 0.0;
    if (v20 != 0) {
      v19 = (float)*(int*)(v20 + 32);
    }
  }
  v27 = &GameData_1ac0a92;
  *(float*)(a1 + 92) = v19 / 100.0;
  v26 = game_HashString(&GameData_1ac0a92);
  if (game_GameModeData_instance_ != 0) {
    v21 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v21 != 0) {
      v18 = (float)*(int*)(v21 + 32);
    }
  }
  v27 = &GameData_1aea6fb;
  *(float*)(a1 + 96) = v18 / 100.0;
  v22 = 0.0;
  v26 = game_HashString(&GameData_1aea6fb);
  if (game_GameModeData_instance_ != 0) {
    v23 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v23 != 0) {
      v22 = (float)*(int*)(v23 + 32);
    }
  }
  *(float*)(a1 + 100) = v22 / 100.0;
  result = Manager_d55430(*(_QWORD*)GameData_212dbb8[0]);
  if ((result & 1) != 0) {
    v25 = *(float*)(a1 + 68) * 0.25;
    *(int*)(a1 + 88) /= 2;
    *(float*)(a1 + 68) = v25;
  }
  return result;
}

long double DungeonRouteReport_f60e40(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  long double result;
  __int128 v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(a1 + 16) != v1) {
    v3 = 0;
    v4 = GameData_212c540;
    while (1) {
      v5 = *(_QWORD*)(v1 + 8 * v3);
      v6 = *(_QWORD*)(v5 + 80);
      if (v6 != 0) {
        break;
      }
    LABEL_10:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v11 = v4[1];
        *(_QWORD*)&GameData_21a6120 = *v4;
        *((_QWORD*)&GameData_21a6120 + 1) = v11;
        __cxa_guard_release(&GameData_21a6130);
      }
      result = *(long double*)&GameData_21a6120;
      *(_DWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = -1;
      ++v3;
      *(_BYTE*)(v5 + 72) = 0;
      *(_QWORD*)(v5 + 32) = *(_QWORD*)&result;
      v10 = *(_OWORD*)(v5 + 32);
      *((_QWORD*)&v10 + 1) = DWORD2(result);
      *(_OWORD*)(v5 + 32) = v10;
      v1 = *(_QWORD*)(a1 + 8);
      if (v3 >= (*(_QWORD*)(a1 + 16) - v1) >> 3) {
        return result;
      }
    }
    v7 = *(__int64**)(v6 + 8);
    *(_BYTE*)v6 = 0;
    v8 = *v7;
    if (*v7 != 0) {
      if (*(_DWORD*)(v8 + 16) == *((_DWORD*)v7 + 2)) {
        *(_BYTE*)(v8 + 33) = 0;
        if (*(_BYTE*)v6 != 0) {
          goto LABEL_9;
        }
      }
      v7 = *(__int64**)(v6 + 8);
    }
    GameRoutine_14a1b00(v7, 0.0);
  LABEL_9:
    *(_QWORD*)(v5 + 80) = 0;
    goto LABEL_10;
  }
  return result;
}

__int64* DungeonRouteReport_f62340(__int64* result, __int64* a2, __int64* a3,
                                   __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = *(_QWORD*)(*a2 + 64);
  v9 = *(_QWORD*)(*a3 + 64);
  if (v8 >= *(_QWORD*)(*result + 64)) {
    if (v9 >= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if (*(_QWORD*)(*a2 + 64) < *(_QWORD*)(*result + 64)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 < v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if (*(_QWORD*)(*a3 + 64) < *(_QWORD*)(v6 + 64)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if (*(_QWORD*)(*a4 + 64) < *(_QWORD*)(v5 + 64)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if (*(_QWORD*)(*a3 + 64) < *(_QWORD*)(*a2 + 64)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if (*(_QWORD*)(*a2 + 64) < *(_QWORD*)(*result + 64)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if (*(_QWORD*)(*a5 + 64) < *(_QWORD*)(*a4 + 64)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if (*(_QWORD*)(*a4 + 64) < *(_QWORD*)(*a3 + 64)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if (*(_QWORD*)(*a3 + 64) < *(_QWORD*)(*a2 + 64)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if (*(_QWORD*)(*a2 + 64) < *(_QWORD*)(*result + 64)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

__int64 DungeonRouteReport_f62800(__int64 result)
{
  _DWORD* v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_DWORD**)(result + 32);
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v2 = result;
    GameRoutine_14a1390(result + 32, 1);
    result = v2;
  }
  v3 = *(_QWORD*)(result + 40);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

void game_hub_DungeonRouteReport_Update_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       atomic_uint* a3)
{
  int v13;
  float v14;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  float32x4_t* v21;
  float* v22;
  float v23;
  float v24;
  float i;
  float j;
  float v27;
  float v28;
  int v29;
  float v30;
  __int64 v31;
  unsigned __int64 v32;
  float v33;
  float v34;
  float v35;
  float v37;
  float v38;
  float* v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float32x4_t* v51;
  float32x4_t v52;
  int8x16_t v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  float32x4_t* v64;
  float v65;
  float v66;
  int v67;
  bool v68;
  float32x4_t v69;
  float v70;
  int v71;
  __int64 v72;
  float32x4_t* v73;
  float v74;
  float v75;
  int v76;
  float32x4_t v77;
  float v78;
  float32x4_t v79;
  int8x16_t v80;
  float v81;
  float32x4_t v82;
  float32x4_t v83;
  long double v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float32x4_t v90;
  int v91;
  atomic_uint* v92;
  struct {
    float32x4_t v93;
    int v94;
  } v93_;

  v13 = *(_DWORD*)(a1 + 16);
  if (v13 >= 1) {
    v14 = 0x1.8000000000000p-1f;
    v16 = game_script_hub_g_frame_counter_ptr[0];
    v92 = a3;
    v91 = v13;
    if (v13 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2) <=
        1) {
      v17 = 1;
    }
    else {
      v17 =
          v13 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                        2) &
                       0xFFFFFFFE) +
                      2);
    }
    while (1) {
      LODWORD(v18) = atomic_fetch_add(a3, v17);
      if ((int)v18 < v13) {
        break;
      }
    LABEL_6:
      if (v17 >> 1 <= 1) {
        v17 = 1;
      }
      else {
        v17 >>= 1;
      }
      if ((int)v18 >= v13) {
        return;
      }
    }
    v19 = v18 + v17;
    v18 = (int)v18;
    if ((int)(v18 + v17) >= v13) {
      v19 = v13;
    }
    v20 = v19;
    while (1) {
      v21 = *(float32x4_t**)(*(_QWORD*)(a1 + 8) + 8 * v18);
      v22 = (float*)LANES128(v21[1]).n128_u64[1];
      v23 = LANES128(*(v21)).n128_f32[2];
      v24 = v22[17];
      for (i = v22[14]; v23 < i; v23 = v24 + v23)
        ;
      for (j = v22[15]; v23 > j; v23 = v23 - v24)
        ;
      v27 = v22[16];
      v28 = v22[18];
      v29 = *(unsigned __int8*)(a1 + 24);
      v30 = 0x0.0p+0f;
      LANES128(v21[1]).n128_f32[0] = v23;
      if (v29 != 0) {
        v31 = *(_QWORD*)(*(_QWORD*)(*GameData_212d458[0] + 88) + 8LL);
        v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212d458[0] + 88) + 16LL) - v31;
        if (v32 >= 0x21) {
          v34 = v22[14];
          v33 = v22[15];
          v35 = v23 - v28;
          if ((float)(v23 - v28) >= v34 && v35 <= v33) {
            v58 = v32 >> 5;
            v59 = v31 + 52;
            v60 = 0;
            v61 = v58 - 1;
            v62 = v61;
            while (1) {
              v63 = (__int64)(int)(v60 + v62 +
                                   ((unsigned int)(v60 + v62) >> 31)) >>
                    1;
              v64 = (float32x4_t*)(v31 + 32 * v63);
              v65 = LANES128(v64[1]).n128_f32[1];
              if (v65 <= v35) {
                v66 = *(float*)(v59 + 32 * v63);
                if (v35 < v66) {
                  break;
                }
              }
              v67 = (v60 + v62) / 2;
              if (v35 <= v65) {
                v68 = v62 == v67;
                v62 = (v60 + v62) / 2;
                if (v68) {
                  goto LABEL_27;
                }
              }
              else {
                v68 = v60 == v67;
                v60 = (v60 + v62) / 2;
                if (v68) {
                  goto LABEL_27;
                }
              }
            }
            v69 = *v64;
            v70 = v66 - v65;
            if (v70 > 0x0.0p+0f) {
              v69 = vaddq_f32(v69, vmulq_n_f32(vsubq_f32(v64[2], v69),
                                               (float)(v35 - v65) / v70));
            }
            if (v23 >= v34 && v23 <= v33) {
              v71 = 0;
              while (1) {
                v72 = (__int64)(int)(v71 + v61 +
                                     ((unsigned int)(v71 + v61) >> 31)) >>
                      1;
                v73 = (float32x4_t*)(v31 + 32 * v72);
                v74 = LANES128(v73[1]).n128_f32[1];
                if (v74 <= v23) {
                  v75 = *(float*)(v59 + 32 * v72);
                  if (v23 < v75) {
                    break;
                  }
                }
                v76 = (v71 + v61) / 2;
                if (v23 <= v74) {
                  v68 = v61 == v76;
                  v61 = (v71 + v61) / 2;
                  if (v68) {
                    goto LABEL_27;
                  }
                }
                else {
                  v68 = v71 == v76;
                  v71 = (v71 + v61) / 2;
                  if (v68) {
                    goto LABEL_27;
                  }
                }
              }
              v77 = *v73;
              v78 = v75 - v74;
              if (v78 > 0x0.0p+0f) {
                v77 = vaddq_f32(v77, vmulq_n_f32(vsubq_f32(v73[2], v77),
                                                 (float)(v23 - v74) / v78));
              }
              v79 = vsubq_f32(v69, v77);
              v80 = vmulq_f32(v79, v79);
              LANES128(v80).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(v80, v80, 8u)).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])))
                      .n64_f32[0] >
                  (float)((float)(v28 * v14) * (float)(v28 * v14))) {
                v81 = LANES128(v79).n128_f32[2];
                v90 = v79;
                v82 = vaddq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83610));
                LANES128(v21[2]).n128_u64[0] = LANES128(v82).n128_u64[0];
                v83 = v21[2];
                LANES128(v83).n128_u64[1] = LANES128(v82).n128_u32[2];
                v21[2] = v83;
                LANES128(v21[3]).n128_f32[0] =
                    (float)(atan2f(*(long double*)&v79,
                                   LANES128(v79).n128_f32[2]) *
                            0x1.ca5dc20000000p+5f) +
                    0x1.6800000000000p+7f;
                LODWORD(v84) = LANES128(v90).n128_u32[1];
                v85 = atan2f(v84, sqrtf(vmuls_lane_f32(v81, v90, 2) +
                                        (float)(LANES128(v90).n128_f32[0] *
                                                LANES128(v90).n128_f32[0]))) *
                      0x1.ca5dc20000000p+5f;
                v14 = 0x1.8000000000000p-1f;
                v30 = 0x1.0000000000000p+0f;
                v86 = fabsf(v85) + -0x1.0000000000000p+0f;
                if (v86 < 0x0.0p+0f) {
                  v86 = 0x0.0p+0f;
                }
                if (v85 >= 0x0.0p+0f) {
                  v87 = v86;
                }
                else {
                  v87 = -v86;
                }
                v88 = 0x1.9000000000000p+4f;
                if (v87 <= 0x1.9000000000000p+4f) {
                  v88 = v87;
                }
                if (v87 >= -0x1.9000000000000p+4f) {
                  v89 = v88;
                }
                else {
                  v89 = -0x1.9000000000000p+4f;
                }
                LANES128(v21[3]).n128_f32[1] = v89;
              }
            }
          }
        }
      }
    LABEL_27:
      v37 = LANES128(*(v21)).n128_f32[3];
      v38 = fabsf((float)((float)(*(float*)(*(_QWORD*)v16 + 160LL) *
                                  0x1.0aef000000000p+4f) /
                          0x1.f400000000000p+9f) /
                  0x1.99999a0000000p-3f);
      if (v37 <= v30) {
        if (v37 < v30) {
          v37 = v37 + v38;
          if (v37 > v30) {
          LABEL_32:
            v37 = v30;
          }
        }
      }
      else {
        v37 = v37 - v38;
        if (v37 < v30) {
          goto LABEL_32;
        }
      }
      LANES128(*(v21)).n128_f32[3] = v37;
      if (v37 > 0x0.0p+0f) {
        v39 = (float*)LANES128(v21[1]).n128_u64[1];
        v40 = LANES128(v21[1]).n128_f32[0];
        v41 = 0x0.0p+0f;
        v42 = j - v39[20];
        v43 = (float)(j - v39[19]) - v42;
        if (v43 != 0x0.0p+0f) {
          v44 = (float)(v40 - v42) / v43;
          v41 = v44 <= 0x1.0000000000000p+0f ? v44 : 0x1.0000000000000p+0f;
          if (v44 < 0x0.0p+0f) {
            v41 = 0x0.0p+0f;
          }
        }
        v45 = v27 + -0x1.0000000000000p-1f;
        v46 = (float)(v27 + -0x1.8000000000000p+0f) -
              (float)(v27 + -0x1.0000000000000p-1f);
        v47 = 0x0.0p+0f;
        if (v46 != 0x0.0p+0f) {
          v48 = (float)(v40 - v45) / v46;
          if (v48 <= 0x1.0000000000000p+0f) {
            v49 = (float)(v40 - v45) / v46;
          }
          else {
            v49 = 0x1.0000000000000p+0f;
          }
          if (v48 >= 0x0.0p+0f) {
            v47 = v49;
          }
          else {
            v47 = 0x0.0p+0f;
          }
        }
        v50 = v37 * (float)(v39[21] +
                            (float)(fminf(fmaxf(v41, 0x0.0p+0f),
                                          0x1.0000000000000p+0f) *
                                    (float)(0x1.0000000000000p+0f - v39[21])));
        v37 = v50 * powf(v47, 0x1.0000000000000p-1f);
      }
      LANES128(v21[3]).n128_f32[2] = v37;
      if (v37 <= 0x0.0p+0f) {
        LANES128(v21[4]).n128_u64[0] = -1;
      }
      else {
        v51 = (float32x4_t*)LANES128(v21[1]).n128_u64[1];
        v52 = vsubq_f32(v51[22], v21[2]);
        v53 = vmulq_f32(v52, v52);
        LANES128(v53).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v53, v53, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
                .n64_u64[0];
        LANES128(v21[4]).n128_u64[0] =
            (unsigned __int64)LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
                .n64_f32[0];
        v54 = LANES128(v21[2]).n128_u64[1];
        LANES128(v93_.v93).n128_u64[0] = LANES128(v21[2]).n128_u64[0];
        LANES128(v93_.v93).n128_u64[1] = v54;
        v93_.v94 = 1065353216;
        if (nn_g3d_5eb5c0((__int64)&v51[7], &v93_.v93)) {
          LANES128(v21[4]).n128_u8[8] = 1;
          goto LABEL_15;
        }
      }
      v55 = LANES128(v21[5]).n128_u64[0];
      LANES128(v21[4]).n128_u8[8] = 0;
      if (v55 != 0) {
        v56 = *(_QWORD*)(v55 + 8);
        *(_BYTE*)v55 = 0;
        v57 = *(_QWORD*)v56;
        if (*(_QWORD*)v56 != 0 && *(_DWORD*)(v57 + 16) == *(_DWORD*)(v56 + 8)) {
          *(_BYTE*)(v57 + 33) = 0;
          if (*(_BYTE*)v55 == 0) {
            v56 = *(_QWORD*)(v55 + 8);
            goto LABEL_57;
          }
        }
        else {
        LABEL_57:
          GameRoutine_14a1b00_alt1((__int64*)v56, 0x0.0p+0f);
        }
        LANES128(v21[5]).n128_u64[0] = 0;
      }
    LABEL_15:
      if (++v18 >= v20) {
        a3 = v92;
        v13 = v91;
        goto LABEL_6;
      }
    }
  }
}

#pragma GCC visibility pop
