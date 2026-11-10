#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11032f0(_QWORD*);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterIllusion_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CharacterIllusion_Destructor(_QWORD* a1);
__int64 CharacterIllusion_DeletingDestructor(_QWORD* a1);
__int64 CharacterBuilder_1083e90(_QWORD, _QWORD);
__int64 CharacterIllusion_11032f0(_QWORD*);
__int64 CharacterIllusion_1103440(__int64, _QWORD*);
__int64 GameRoutine_10784f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_109d900(_QWORD);
__int64 GameRoutine_1103e80(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 GameRoutine_a8c380(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN* GameData_2130058;
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern __int64 (*GameData_200eaf0[])();
extern __int64 GameData_212d270;
extern int* GameData_212deb0;
extern int* GameData_2130050;
__int64 CharacterIllusion_11032f0(_QWORD* a1);
__int64 CharacterIllusion_1103440(__int64 a1, _QWORD* a2);
__int64 CharacterIllusion_11036e0(__int64 result);
__int64 CharacterIllusion_1103820(__int64 result);
__int64 (***game_character_1084940(__int64 (***result)(), char, float))();
__int64
CharacterBuilder_1083e90_alt1(_QWORD*,
                              __int64) __asm__("CharacterBuilder_1083e90");
extern _DWORD* GameData_212d280;
extern __int128 GameData_1a82f70;
extern __int64 (*GameData_200ebf0[])();
float GameRoutine_10a00a0(float, long double, float);
__int64 (***CharacterIllusion_Unknown5(__int64 (***result)(), double a2,
                                       long double a3))();

__int64 CharacterIllusion_11032f0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;

  v1 = a1[1];
  if (v1 != 0) {
    v15 = *(_QWORD*)(v1 + 8);
    GameRoutine_a867a0(&v15);
  }
  GameRoutine_109d900(a1 + 46);
  v3 = a1[49];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_109d900(a1 + 42);
  v4 = a1[45];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_109d900(a1 + 38);
  v5 = a1[41];
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_109d900(a1 + 34);
  v6 = a1[37];
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_109d900(a1 + 30);
  v7 = a1[33];
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_109d900(a1 + 26);
  v8 = a1[29];
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  GameRoutine_109d900(a1 + 22);
  v9 = a1[25];
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_109d900(a1 + 18);
  v10 = a1[21];
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  GameRoutine_109d900(a1 + 14);
  v11 = a1[17];
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_109d900(a1 + 10);
  v12 = a1[13];
  if (v12 != 0) {
    std___1___shared_weak_count___release_weak(v12);
  }
  GameRoutine_109d900(a1 + 6);
  v13 = a1[9];
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak(v13);
  }
  GameRoutine_109d900(a1 + 2);
  result = a1[5];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterIllusion_1103440(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned __int8 explicit;
  int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[4];
  _QWORD* v20;

  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 16) = -1;
  *(_DWORD*)(a1 + 48) = -1;
  *(_DWORD*)(a1 + 80) = -1;
  *(_DWORD*)(a1 + 112) = -1;
  *(_DWORD*)(a1 + 144) = -1;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 176) = -1;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 208) = -1;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 240) = -1;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_DWORD*)(a1 + 272) = -1;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 304) = -1;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 336) = -1;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_DWORD*)(a1 + 368) = -1;
  *(_DWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  v4 = a2[50];
  v17 = a2[49];
  v18 = v4;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v19[2] = a2;
  v19[0] = GameData_200eaf0;
  v19[1] = a1;
  v20 = v19;
  v5 = GameRoutine_10784f0(&v17, 64, v19);
  if (v20 == v19) {
    v6 = 32;
    goto LABEL_7;
  }
  if (v20 != nullptr) {
    v6 = 40;
  LABEL_7:
    (*(void (**)(_QWORD*))(*v20 + v6))(v20);
  }
  v7 = v18;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  result = GameRoutine_a8c380(v5, a2[1]);
  *(_QWORD*)a1 = a2;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire);
  v10 = GameData_212deb0;
  if ((explicit & 1) == 0) {
    result = __cxa_guard_acquire(GameData_212deb8);
    if ((_DWORD)result != 0) {
      *v10 = wld_Crc32(0, "CharacterBuilder", 16);
      result = __cxa_guard_release(GameData_212deb8);
    }
  }
  v11 = *(_QWORD*)(v5 + 512);
  v12 = v11;
  do {
    v13 = *(_DWORD*)(v12 - 16);
    v12 -= 16;
    v11 -= 16;
  } while (v13 != *v10);
  v14 = *(_QWORD*)(v11 + 8);
  *(_QWORD*)(a1 + 8) = v14;
  if (*(float*)(v14 + 348) == 0.0) {
    return result;
  }
  *(_DWORD*)(v14 + 348) = 0;
  LODWORD(v19[1]) = 0;
  v19[0] = GameData_20076d8;
  v20 = v19;
  CharacterBuilder_1083e90(v14, v19);
  if (v20 == v19) {
    v15 = 32;
    goto LABEL_19;
  }
  if (v20 != nullptr) {
    v15 = 40;
  LABEL_19:
    (*(void (**)(_QWORD*))(*v20 + v15))(v20);
  }
  LODWORD(v19[1]) = 0;
  v19[0] = GameData_2007758;
  v20 = v19;
  CharacterBuilder_1083e90(v14, v19);
  result = (__int64)v20;
  if (v20 == v19) {
    v16 = 32;
  }
  else {
    if (v20 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v20 + v16))(v20);
}

__int64 CharacterIllusion_11036e0(__int64 result)
{
  __int64 v1;
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;

  v1 = *(_QWORD*)(result + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2130058,
                                  memory_order_acquire);
  v3 = GameData_2130050;
  if ((explicit & 1) == 0) {
    result = __cxa_guard_acquire(GameData_2130058);
    if ((_DWORD)result != 0) {
      *v3 = wld_Crc32(0, "CharacterIllusion", 17);
      result = __cxa_guard_release(GameData_2130058);
    }
  }
  v4 = *(_QWORD*)(v1 + 512);
  for (i = v4; i != *(_QWORD*)(v1 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(v1 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          v8 = *(_QWORD**)(v7 + 56);
          v9 = *(_QWORD**)(v7 + 64);
          if (v8 != v9) {
            v10 = fw_memory_g_heap_manager_ptr;
            do {
              v12 = (_QWORD*)*--v9;
              v11 = v12;
              *v9 = 0;
              if (v12 != nullptr) {
                CharacterIllusion_11032f0(v11);
                if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
                  v13 = 128;
                }
                else {
                  v13 = 56;
                }
                result =
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v13, v11);
              }
            } while (v9 != v8);
          }
          *(_QWORD*)(v7 + 64) = v8;
        }
      }
      return result;
    }
  }
  return result;
}

__int64 CharacterIllusion_1103820(__int64 result)
{
  _QWORD* v1;
  int v2;
  _QWORD* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;

  v1 = (_QWORD*)(result + 56);
  if (*(_QWORD*)(result + 56) == *(_QWORD*)(result + 64)) {
    v2 = (int)(float)((float)(*(float*)(*(_QWORD*)GameData_212d270 + 532LL) *
                              30.0) /
                      (float)*(int*)(*(_QWORD*)GameData_212d270 + 528LL));
    if (v2 != 0) {
      v3 = (_QWORD*)result;
      result = GameRoutine_1103e80(result + 56, v2);
      if (v3[8] != v3[7]) {
        v4 = 0;
        v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        do {
          v6 = v3[4];
          if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
            v7 = nullptr;
          }
          else {
            v7 = (_QWORD*)v3[5];
          }
          v8 = fw_memory_HeapManager_Allocate(*v5, 416, 16, 0);
          result = CharacterIllusion_1103440(v8, v7);
          v9 = *(_QWORD**)(*v1 + 8 * v4);
          *(_QWORD*)(*v1 + 8 * v4) = v8;
          if (v9 != nullptr) {
            CharacterIllusion_11032f0(v9);
            if (*(_QWORD*)(*v5 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v5 + v10, v9);
          }
          ++v4;
        } while (v4 < (__int64)(v3[8] - v3[7]) >> 3);
      }
    }
  }
  return result;
}

__int64 (***CharacterIllusion_Unknown5(__int64 (***result)(), double a2,
                                       long double a3))()
{

#pragma clang fp contract(off)
  __int64 (**v3)();
  __int64 (**v4)();
  __int64 (***v5)();
  float v6;
  __int64 (*v7)();
  float v8;
  int v9;
  int v10;
  __int64 (*v11)();
  float32x4_t* v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t* v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    __int64 (**v26)();
    int v27;
    char gap12_[20];
    __int64 (***v28)();
  } v26_;

  v3 = result[7];
  v4 = result[8];
  if (v3 == v4) {
    return result;
  }
  v5 = result;
  v6 = (float)(*((float*)result[1][62] + 4) * 0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  do {
    v7 = *v3;
    LODWORD(a3) = *((_DWORD*)*v3 + 101);
    if (*(float*)&a3 > 0x0.0p+0f) {
      v8 = GameRoutine_10a00a0(0x0.0p+0f, a3, *((float*)v7 + 100));
      game_character_1084940(*((__int64 (****)())v7 + 1), 0,
                             v8 * *((float*)v7 + 102));
      *((float*)v7 + 101) = *((float*)v7 + 101) - v6;
    }
    ++v3;
  } while (v3 != v4);
  v9 = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 532LL);
  v10 = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 536LL);
  v11 = v5[7][(int)(*GameData_212d280 /
                    *(_DWORD*)(*(_QWORD*)GameData_212d270 + 528LL) %
                    (unsigned __int64)(v5[8] - v5[7]))];
  v12 = *(float32x4_t**)(*((_QWORD*)v11 + 1) + 8LL);
  v13 = v12[19];
  v14 = vaddq_f32(v13, COERCE_AS(float32x4_t, GameData_1a82f70));
  v15 = vmulq_f32(v14, v14);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v12[19]).n128_u64[0] = 0x447A000000000000LL;
    v13 = v12[19];
    LANES128(v12[18]).n128_u32[2] |= 1u;
    LANES128(v13).n128_u64[1] = 0;
    v12[19] = COERCE_AS(float32x4_t, LANES128(v13).n128_u64[0]);
  }
  v16 = *(float32x4_t**)(*(_QWORD*)v11 + 8LL);
  v17 = v16[19];
  v18 = vsubq_f32(v13, v17);
  v19 = vmulq_f32(v18, v18);
  LANES128(v19).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_f32[0] != 0x0.0p+0f) {
    LANES128(v12[19]).n128_u32[0] = LANES128(v17).n128_u32[0];
    LANES128(v12[19]).n128_u32[1] = LANES128(v16[19]).n128_u32[1];
    v20 = v12[19];
    LANES128(v20).n128_u32[2] = LANES128(v16[19]).n128_u32[2];
    LANES128(v12[18]).n128_u32[2] |= 1u;
    LANES128(v20).n128_u64[1] = LANES128(v20).n128_u32[2];
    v12[19] = v20;
  }
  v21 = *((_QWORD**)v11 + 1);
  LOBYTE(v26_.v27) = 0;
  v26_.v26 = GameData_200ebf0;
  v26_.v28 = &v26_.v26;
  CharacterBuilder_1083e90_alt1(v21, (__int64)&v26_.v26);
  result = v26_.v28;
  if (v26_.v28 == &v26_.v26) {
    v22 = 4;
  }
  else {
    if (v26_.v28 == nullptr) {
      goto LABEL_15;
    }
    v22 = 5;
  }
  result = (__int64 (***)(void))((__int64 (*)(__int64))(*v26_.v28)[v22])(
      (__int64)v26_.v28);
LABEL_15:
  *((_DWORD*)v11 + 100) = v9;
  *((_DWORD*)v11 + 101) = v9;
  *((_DWORD*)v11 + 102) = v10;
  v23 = *((_QWORD*)v11 + 1);
  if (*(float*)(v23 + 348) == 0x0.0p+0f) {
    return result;
  }
  *(_DWORD*)(v23 + 348) = 0;
  v26_.v27 = 0;
  v26_.v26 = GameData_20076d8;
  v26_.v28 = &v26_.v26;
  CharacterBuilder_1083e90_alt1((_QWORD*)v23, (__int64)&v26_.v26);
  if (v26_.v28 == &v26_.v26) {
    v24 = 4;
    goto LABEL_20;
  }
  if (v26_.v28 != nullptr) {
    v24 = 5;
  LABEL_20:
    ((__int64 (*)(__int64))(*v26_.v28)[v24])((__int64)v26_.v28);
  }
  v26_.v27 = 0;
  v26_.v26 = GameData_2007758;
  v26_.v28 = &v26_.v26;
  CharacterBuilder_1083e90_alt1((_QWORD*)v23, (__int64)&v26_.v26);
  result = v26_.v28;
  if (v26_.v28 == &v26_.v26) {
    v25 = 4;
  }
  else {
    if (v26_.v28 == nullptr) {
      return result;
    }
    v25 = 5;
  }
  return (__int64 (***)(void))((__int64 (*)(__int64))(*v26_.v28)[v25])(
      (__int64)v26_.v28);
}

__int64 CharacterIllusion_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 result;

  v1 = (_QWORD*)a1[7];
  *a1 = game_character_CharacterIllusion_vtable;
  if (v1 != nullptr) {
    v3 = (_QWORD*)a1[8];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_11;
    }
    do {
      v6 = (_QWORD*)*--v3;
      v5 = v6;
      *v3 = 0;
      if (v6 != nullptr) {
        GameRoutine_11032f0(v5);
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v5);
      }
    } while (v3 != v1);
    v8 = (_QWORD*)a1[7];
    a1[8] = v1;
    v1 = v8;
    if (v8 != nullptr) {
    LABEL_11:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v1);
    }
  }
  result = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterIllusion_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = (_QWORD*)a1[7];
  *a1 = game_character_CharacterIllusion_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    v4 = (_QWORD*)a1[8];
    if (v1 == v4) {
      goto LABEL_11;
    }
    do {
      v6 = (_QWORD*)*--v4;
      v5 = v6;
      *v4 = 0;
      if (v6 != nullptr) {
        GameRoutine_11032f0(v5);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v5);
      }
    } while (v4 != v1);
    v8 = (_QWORD*)a1[7];
    a1[8] = v1;
    v1 = v8;
    if (v8 != nullptr) {
    LABEL_11:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v1);
    }
  }
  v10 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, a1);
}

#pragma GCC visibility pop
