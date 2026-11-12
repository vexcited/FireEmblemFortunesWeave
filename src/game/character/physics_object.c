#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_PhysicsObject_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128
PhysicsObject_Destructor_alt1(_QWORD* a1) __asm__("PhysicsObject_Destructor");
__int64 PhysicsObject_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "PhysicsObject_DeletingDestructor");
__attribute__((swiftcall)) void GameRoutine_1096110(PSEUDO_X8, __int64 result,
                                                    unsigned __int8*,
                                                    const char*, __int64,
                                                    long double);
__int64 GameRoutine_10fa840(_QWORD);
__int64 GameRoutine_14a0820(_QWORD);
__int64 GameRoutine_2b0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_109ded0(__int128*, int8x16_t*, __int64);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN GameData_21a6118;
extern _UNKNOWN GameData_2236610;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_212c848[2])();
extern __int64* GameData_212c838;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d270;
extern __int64 GameData_21a6110;
extern __int64 GameData_21d8778;
extern __int64 GameData_21ec7b0;
extern __int64 game_script_hub_g_frame_counter;
extern int GameData_2236608;
float cosf(float);
float sinf(float);
__int64 PhysicsObject_10f9fe0(__int64 result, _OWORD* a2);
__int64 PhysicsObject_10fa1a0(__int64 result, _OWORD* a2);
_QWORD* PhysicsObject_10fa360(_QWORD* result, float32x4_t* a2);
void game_character_PhysicsObject_PhysicsObject_lambda0_Invoke_alt1(
    __int64 a1, __int64* a2) __asm__("game_character_PhysicsObject_"
                                     "PhysicsObject_lambda0_Invoke");
__attribute__((swiftcall)) void
GameRoutine_1096110_alt1(PSEUDO_X8, __int64, const char*, const char*,
                         int8x16_t*, float) __asm__("GameRoutine_1096110");
__int64
GameRoutine_10fa840_alt1(unsigned __int64*) __asm__("GameRoutine_10fa840");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
__int64 PhysicsObject_Destructor(_QWORD* a1);
__n128 game_character_PhysicsObject_PhysicsObject_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2,
                                                                 __n128 result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void PhysicsObject_DeletingDestructor(_QWORD* a1);

__int64 PhysicsObject_10f9fe0(__int64 result, _OWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 i;
  int v5;
  __int64 v6;
  __int128* v7;
  unsigned __int8 explicit;
  __int64* v9;
  _QWORD* v10;
  __int128 v11;
  __int64 v12;
  int v13;
  _DWORD v14[3];
  _OWORD* v15;

  v2 = *(_QWORD*)(result + 8);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236610,
                            memory_order_acquire) &
       1) == 0) {
    v15 = a2;
    result = __cxa_guard_acquire(&GameData_2236610);
    a2 = v15;
    if ((_DWORD)result != 0) {
      GameData_2236608 = wld_Crc32(0, "RigidBody", 9);
      result = __cxa_guard_release(&GameData_2236610);
      a2 = v15;
    }
  }
  v3 = *(_QWORD*)(v2 + 512);
  for (i = v3; i != *(_QWORD*)(v2 + 504); i -= 16) {
    v5 = *(_DWORD*)(i - 16);
    v3 -= 16;
    if (v5 == GameData_2236608) {
      if (*(_QWORD*)(v2 + 512) != v3) {
        v6 = *(_QWORD*)(v3 + 8);
        if (v6 != 0) {
          v7 = a2;
          explicit = atomic_load_explicit(
              (atomic_uchar* volatile)GameData_212c840, memory_order_acquire);
          v9 = GameData_212c838;
          if ((explicit & 1) == 0) {
            v13 = __cxa_guard_acquire(GameData_212c840);
            v9 = GameData_212c838;
            if (v13 != 0) {
              *(_QWORD*)((char*)((__int128*)0x10LL) +
                         (_QWORD)GameData_212c838) = 0;
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = 0;
              *v9 = 0;
              v9[1] = 0;
              *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v9) = 0;
              *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9) =
                  0;
              *((_BYTE*)((char*)0x40LL) + (_QWORD)v9) = 0;
              *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v9) = 0;
              *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v9) =
                  (_UNKNOWN*)1065353216;
              GameRoutine_14a0820(GameData_212c838);
              GameRoutine_2b0(GameData_212c848[0]);
              __cxa_guard_release(GameData_212c840);
              v9 = GameData_212c838;
            }
          }
          v10 = *(_QWORD**)(*v9 + 32);
          (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v10 + 952LL))(*v10,
                                                                         0, 0);
          v11 = *v7;
          v12 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL);
          *(_QWORD*)v14 = *(_QWORD*)v7;
          v14[2] = DWORD2(v11);
          (*(void (**)(__int64, _DWORD*, __int64))(*(_QWORD*)v12 + 656LL))(
              v12, v14, 1);
          return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v10 + 960LL))(*v10);
        }
      }
      return result;
    }
  }
  return result;
}

__int64 PhysicsObject_10fa1a0(__int64 result, _OWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 i;
  int v5;
  __int64 v6;
  __int128* v7;
  unsigned __int8 explicit;
  __int64* v9;
  _QWORD* v10;
  __int128 v11;
  __int64 v12;
  int v13;
  _DWORD v14[3];
  _OWORD* v15;

  v2 = *(_QWORD*)(result + 8);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236610,
                            memory_order_acquire) &
       1) == 0) {
    v15 = a2;
    result = __cxa_guard_acquire(&GameData_2236610);
    a2 = v15;
    if ((_DWORD)result != 0) {
      GameData_2236608 = wld_Crc32(0, "RigidBody", 9);
      result = __cxa_guard_release(&GameData_2236610);
      a2 = v15;
    }
  }
  v3 = *(_QWORD*)(v2 + 512);
  for (i = v3; i != *(_QWORD*)(v2 + 504); i -= 16) {
    v5 = *(_DWORD*)(i - 16);
    v3 -= 16;
    if (v5 == GameData_2236608) {
      if (*(_QWORD*)(v2 + 512) != v3) {
        v6 = *(_QWORD*)(v3 + 8);
        if (v6 != 0) {
          v7 = a2;
          explicit = atomic_load_explicit(
              (atomic_uchar* volatile)GameData_212c840, memory_order_acquire);
          v9 = GameData_212c838;
          if ((explicit & 1) == 0) {
            v13 = __cxa_guard_acquire(GameData_212c840);
            v9 = GameData_212c838;
            if (v13 != 0) {
              *(_QWORD*)((char*)((__int128*)0x10LL) +
                         (_QWORD)GameData_212c838) = 0;
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = 0;
              *v9 = 0;
              v9[1] = 0;
              *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v9) = 0;
              *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9) =
                  0;
              *((_BYTE*)((char*)0x40LL) + (_QWORD)v9) = 0;
              *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v9) = 0;
              *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v9) =
                  (_UNKNOWN*)1065353216;
              GameRoutine_14a0820(GameData_212c838);
              GameRoutine_2b0(GameData_212c848[0]);
              __cxa_guard_release(GameData_212c840);
              v9 = GameData_212c838;
            }
          }
          v10 = *(_QWORD**)(*v9 + 32);
          (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v10 + 952LL))(*v10,
                                                                         0, 0);
          v11 = *v7;
          v12 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL);
          *(_QWORD*)v14 = *(_QWORD*)v7;
          v14[2] = DWORD2(v11);
          (*(void (**)(__int64, _DWORD*, __int64))(*(_QWORD*)v12 + 648LL))(
              v12, v14, 1);
          return (*(__int64 (**)(_QWORD))(*(_QWORD*)*v10 + 960LL))(*v10);
        }
      }
      return result;
    }
  }
  return result;
}

_QWORD* PhysicsObject_10fa360(_QWORD* result, float32x4_t* a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  float32x4_t* v10;
  float v11;
  unsigned int v12;
  float v13;
  float v14;
  __int64* v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  int8x16_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  unsigned __int8 explicit;
  __int64* v35;
  float v36;
  float v37;
  _QWORD* v38;
  long double v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  float32x4_t v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  float32x4_t v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  float32x4_t* v56;
  float v57;
  int v58;
  unsigned __int64 v59;
  unsigned __int32 v60;

  v2 = result[4];
  if (v2 != 0) {
    v3 = (_QWORD*)result[5];
    if (*(_QWORD*)(v2 + 8) != -1 && v3 != nullptr) {
      v5 = result[1];
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236610,
                                memory_order_acquire) &
           1) == 0) {
        v56 = a2;
        result = (_QWORD*)__cxa_guard_acquire(&GameData_2236610);
        a2 = v56;
        if ((_DWORD)result != 0) {
          GameData_2236608 = wld_Crc32(0, "RigidBody", 9);
          result = (_QWORD*)__cxa_guard_release(&GameData_2236610);
          a2 = v56;
        }
      }
      v6 = *(_QWORD*)(v5 + 512);
      v7 = v6;
      do {
        if (v7 == *(_QWORD*)(v5 + 504)) {
          return result;
        }
        v8 = *(_DWORD*)(v7 - 16);
        v7 -= 16;
        v6 -= 16;
      } while (v8 != GameData_2236608);
      if (*(_QWORD*)(v5 + 512) != v6) {
        v9 = *(_QWORD*)(v6 + 8);
        if (v9 != 0) {
          v10 = a2;
          v11 = *(float*)(*(_QWORD*)GameData_212d270 + 560LL);
          v12 = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 564LL);
          v13 = *(float*)(*(_QWORD*)GameData_212d270 + 552LL);
          v14 = *(float*)(*(_QWORD*)GameData_212d270 + 556LL);
          nn_os_LockMutex(&game_g_random_mutex);
          v15 = game_map_MapRandom_instance__ptr[0];
          v16 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v17 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v18 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v15 + 1) = v16;
          v19 = (v18 >> 8) ^ (v17 >> 19) ^ v18 ^ v17;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15) = v17;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 4) = v19;
          v20 = v19 & 0x7FFFFFFF;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v21 = *(float*)(v3[1] + 324LL);
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6118,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_21a6118) != 0) {
            GameData_21a6110 = 0x3F80000000000000LL;
            __cxa_guard_release(&GameData_21a6118);
          }
          v23 = 0x1.921fb60000000p+1 - v21;
          v24 = sinf(v23);
          v25 = cosf(v23);
          v26 = vmuls_lane_f32(-v24, COERCE_AS(float32x2_t, GameData_21a6110),
                               1) +
                (float)(v25 * *(float*)&GameData_21a6110);
          v27 =
              vmuls_lane_f32(v25, COERCE_AS(float32x2_t, GameData_21a6110), 1) +
              (float)(v24 * *(float*)&GameData_21a6110);
          v28 = vmulq_f32(*v10, *v10);
          v29 = vextq_s8(v28, v28, 8u);
          LANES128(v28).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v29).n128_u64[0] = 0;
          LANES128(v28).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                  .n64_u64[0];
          v30 = vceqq_f32(v28, v29);
          LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
          v31 = vrsqrteq_f32(v28);
          v32 = vmulq_f32(v31, vrsqrtsq_f32(v31, vmulq_f32(v28, v31)));
          v33 = vbicq_s8(
              vmulq_f32(*v10,
                        vmulq_f32(v32, vrsqrtsq_f32(v32, vmulq_f32(v28, v32)))),
              vceqzq_f32(v28));
          v22 = (double)v20 / 0x1.fffffffc00000p+30;
          *v10 = vbslq_s8(
              vdupq_lane_s32(
                  COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v30)).n128_u64[0]),
                  0),
              vmulq_n_f32(v33, v13 + (float)((float)(v14 - v13) * v22)), v33);
          explicit = atomic_load_explicit(
              (atomic_uchar* volatile)GameData_212c840, memory_order_acquire);
          v35 = GameData_212c838;
          if ((explicit & 1) == 0) {
            v57 = v27;
            v58 = __cxa_guard_acquire(GameData_212c840);
            v27 = v57;
            v35 = GameData_212c838;
            if (v58 != 0) {
              *(_QWORD*)((char*)((__int128*)0x10LL) +
                         (_QWORD)GameData_212c838) = 0;
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v35 + 8) = 0;
              *v35 = 0;
              v35[1] = 0;
              *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v35) = 0;
              *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v35) =
                  0;
              *((_BYTE*)((char*)0x40LL) + (_QWORD)v35) = 0;
              *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v35) = 0;
              *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v35) =
                  (_UNKNOWN*)1065353216;
              GameRoutine_14a0820(GameData_212c838);
              GameRoutine_2b0(GameData_212c848[0]);
              __cxa_guard_release(GameData_212c840);
              v27 = v57;
              v35 = GameData_212c838;
            }
          }
          v36 = v11 * v26;
          v37 = v11 * v27;
          v38 = *(_QWORD**)(*v35 + 32);
          (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v38 + 952LL))(*v38,
                                                                         0, 0);
          v40 = v3[49];
          v41 = v3[50];
          if (v41 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                                      memory_order_relaxed);
            v42 = *(_DWORD*)(v40 + 11784);
            if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
              *(__n128*)&v39 = std___1___shared_weak_count___release_weak(v41);
            }
            if (v42 == 29) {
              goto LABEL_20;
            }
          }
          else if (*(_DWORD*)(v40 + 11784) == 29) {
          LABEL_20:
            v43 = *(_QWORD*)(v9 + 24);
            if (v43 == 0) {
              return (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
                  *(_QWORD*)*v38 + 960LL))(*v38, v39);
            }
            v44 = *(_QWORD*)(v43 + 16);
            v45 = vmulq_f32(*v10, vdupq_n_s32(0x3E99999Au));
            v59 = LANES128(v45).n128_u64[0];
            v60 = LANES128(v45).n128_u32[2];
            (*(void (**)(__int64, unsigned __int64*, __int64))(
                *(_QWORD*)v44 + 656LL))(v44, &v59, 1);
            v46 = *(_QWORD*)(v43 + 16);
            v59 = LODWORD(v36);
            v60 = LODWORD(v37);
            (*(void (**)(__int64, unsigned __int64*, __int64))(
                *(_QWORD*)v46 + 648LL))(v46, &v59, 1);
            (*(void (**)(_QWORD, float))(**(_QWORD**)(v43 + 16) + 320LL))(
                *(_QWORD*)(v43 + 16), 0x1.0000000000000p+0);
            v47 = *(_QWORD*)(v9 + 24);
            if (v47 == 0) {
              return (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
                  *(_QWORD*)*v38 + 960LL))(*v38, v39);
            }
            v48 =
                (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v47 + 40LL))(v47);
            if (v48 == nullptr) {
              return (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
                  *(_QWORD*)*v38 + 960LL))(*v38, v39);
            }
            v49 = *v48;
            LODWORD(v39) = 0x1.0000000000000p+0;
          LABEL_29:
            (*(void (**)(long double))(v49 + 304))(v39);
            return (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
                *(_QWORD*)*v38 + 960LL))(*v38, v39);
          }
          v50 = *(_QWORD*)(v9 + 24);
          if (v50 == 0) {
            return (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
                *(_QWORD*)*v38 + 960LL))(*v38, v39);
          }
          v51 = *v10;
          v52 = *(_QWORD*)(v50 + 16);
          v59 = LANES128(*(v10)).n128_u64[0];
          v60 = LANES128(v51).n128_u32[2];
          (*(void (**)(__int64, unsigned __int64*, __int64))(
              *(_QWORD*)v52 + 656LL))(v52, &v59, 1);
          v53 = *(_QWORD*)(v50 + 16);
          v59 = __PAIR64__(v12, LODWORD(v36));
          v60 = LODWORD(v37);
          (*(void (**)(__int64, unsigned __int64*, __int64))(
              *(_QWORD*)v53 + 648LL))(v53, &v59, 1);
          (*(void (**)(_QWORD, float))(**(_QWORD**)(v50 + 16) + 320LL))(
              *(_QWORD*)(v50 + 16), 0.5);
          v54 = *(_QWORD*)(v9 + 24);
          if (v54 == 0) {
            return (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
                *(_QWORD*)*v38 + 960LL))(*v38, v39);
          }
          v55 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v54 + 40LL))(v54);
          if (v55 == nullptr) {
            return (_QWORD*)(*(__int64 (**)(_QWORD, long double))(
                *(_QWORD*)*v38 + 960LL))(*v38, v39);
          }
          v49 = *v55;
          LODWORD(v39) = 1041865114;
          goto LABEL_29;
        }
      }
    }
  }
  return result;
}

__int64 PhysicsObject_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_character_PhysicsObject_vtable;
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

void PhysicsObject_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_character_PhysicsObject_vtable;
  v2 = a1[4];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

__n128 game_character_PhysicsObject_PhysicsObject_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2,
                                                                 __n128 result)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  float v10;
  int v11;
  int8x16_t* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  float32x2_t v16;
  const char* v17;
  __int64 v18;
  const char* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int8x16_t v24;
  unsigned __int64 v25;
  int8x16_t v26;
  struct {
    float32x2_t v27;
    unsigned __int32 v28;
  } v27_;
  struct {
    __int128 v29;
    __int64 v30;
    __int64 v31;
    char gap64_[17];
    char v32;
  } v29_;
  struct {
    unsigned __int64 v33[3];
    int v34;
  } v33_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v3 + 32);
  if (v4 != 0) {
    v5 = *a2;
    v6 = *(_QWORD*)(v3 + 40);
    v7 = *(_QWORD*)(v4 + 8) == -1 || v6 == 0;
    if (!v7 && (*(_BYTE*)(v6 + 340) & 8) == 0) {
      v8 = GameData_21ec7b0;
      if (GameData_21ec7b0 != 0) {
        v9 = nn_os_ConvertToTimeSpan(
                 *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
                 1000 -
             *(_QWORD*)(v8 + 136),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v10 = 0x1.e848000000000p+19f;
      }
      else {
        v9 = nn_os_ConvertToTimeSpan(
                 *(_QWORD*)(game_script_hub_g_frame_counter + 344)) /
             1000000,
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v10 = 0x1.f400000000000p+9f;
      }
      PSEUDO_LOW_LANE128(result, n128_f32,
                         (float)((float)v9 / v10) - *(float*)(v3 + 48));
      if (LANES128(result).n128_f32[0] >= 0x1.3333340000000p-2f) {
        v11 = *(_DWORD*)(v3 + 52);
        if (v11 <= 4) {
          *(_DWORD*)(v3 + 52) = v11 + 1;
          v12 = *(int8x16_t**)(v3 + 8);
          if (LANES128(v12[18]).n128_u8[1] == 1 &&
              (LANES128(v12[18]).n128_u8[0] & 1) != 0 &&
              (LANES128(v12[18]).n128_u8[12] & 0xFD) != 1) {
            v13 = *(_QWORD*)(v3 + 8);
            while (1) {
              v13 = *(_QWORD*)(v13 + 736);
              if (v13 == 0) {
                break;
              }
              if (*(_BYTE*)(v13 + 289) != 1 || *(_BYTE*)(v13 + 288) != 1 ||
                  (*(_BYTE*)(v13 + 300) & 0xFD) == 1) {
                return result;
              }
            }
            v29_.v30 = 0;
            v29_.v31 = 0;
            v29_.v29 = (__typeof__(v29_.v29)){0};
            result = GameRoutine_109ded0(&v29_.v29, v12 + 19, 513),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            if ((v14 & 1) != 0 && (v29_.v32 & 2) == 0) {
              v15 = (*(__int64 (**)(_QWORD, long double))(
                  **(_QWORD**)(v5 + 24) + 40LL))(*(_QWORD*)(v5 + 24),
                                                 *(long double*)&result),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                  *(_QWORD*)v15 + 336LL))((void*)(&v27_.v27), (__int64)v15),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              PSEUDO_LOW_LANE64(v16, n64_u32, v27_.v28);
              LANES128(result).n128_u64[0] =
                  LANES64_OF(vadd_f32(vmul_f32(v16, v16),
                                      vmul_f32(v27_.v27, v27_.v27)))
                      .n64_u64[0];
              LANES128(result).n128_u64[0] =
                  LANES64_OF(
                      vsqrt_f32(vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(result).n128_u64[0]),
                          COERCE_AS(float32x2_t,
                                    LANES128(result).n128_u64[0]))))
                      .n64_u64[0];
              if (LANES128(result).n128_f32[0] <=
                  *(float*)(GameData_21d8778 + 568)) {
                if (LANES128(result).n128_f32[0] <=
                    *(float*)(GameData_21d8778 + 572)) {
                  return result;
                }
                v17 = "SE_ACT_<LD/MB>_Drop_<WeaponID>_<Ground>_L";
              }
              else {
                v17 = "SE_ACT_<LD/MB>_Drop_<WeaponID>_<Ground>_H";
              }
              v18 = *(_QWORD*)(v3 + 8);
              v20 = *(unsigned __int8*)(v18 + 16);
              v19 = (const char*)(v18 + 16);
              if (v20 != 0) {
                v21 = strchr_alt1(v19, 58),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if (v21 != 0) {
                  v33_.v33[1] = v21 + 1;
                  v33_.v33[0] = game_HashString_alt1(v21 + 1),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v22 = GameRoutine_10fa840_alt1(v33_.v33),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  if (v22 != 0) {
                    *(_QWORD*)(*(_QWORD*)(v6 + 136) + 120LL) =
                        *(_QWORD*)(v22 + 48);
                  }
                }
              }
              v23 = *(_QWORD*)(v6 + 136);
              (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, long double))(
                  **(_QWORD**)(*(_QWORD*)(v5 + 24) + 16LL) + 176LL))(
                  (void*)(v33_.v33), *(long double*)&result),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              LANES128(v24).n128_u64[0] = v33_.v33[2];
              LODWORD(v25) = v33_.v34;
              LANES128(v24).n128_u64[1] = v25;
              v26 = v24;
              GameRoutine_1096110_alt1((void*)((__int64)v33_.v33), v23, v17,
                                       nullptr, &v26, 0x1.0000000000000p+0f),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
