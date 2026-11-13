#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13fc760(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_facility_SceneObjectHolder_vtable)();
extern __int64 (*game_facility_SceneObject_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
SceneObject_Destructor_alt1(__int64 a1) __asm__("SceneObject_Destructor");
_QWORD* GameRoutine_13fc020(__int64, __int64*);
__int64 GameRoutine_13fd4a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_2038508[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_2241860;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 SceneObject_13fca80(__int64 a1, char a2);
__int64 SceneObject_13fd320(__int64 a1);
_QWORD* game_facility_SceneObject_LoadAssetImpl_lambda0_Clone(__int64 a1);
__int64 game_facility_SceneObject_LoadAssetImpl_lambda0_CloneInto(_QWORD* a1,
                                                                  _QWORD* a2);
__attribute__((swiftcall)) void SceneEffectManager_1950ce0(PSEUDO_X8, _QWORD,
                                                           _QWORD, _QWORD);
__attribute__((swiftcall)) void game_13d2c60(PSEUDO_X8,
                                             unsigned __int16* result);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__int64 CharacterTrailModule_d3d1c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(__int64 result);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 LodModule_a97380(_QWORD, _QWORD);
__int64 MapObjectModule_a7d120(__int64 result);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_facility_13fe840(_QWORD, long double);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_Crc32_alt1(_QWORD, _QWORD, _QWORD) __asm__("wld_Crc32");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212eab0;
extern _UNKNOWN GameData_21ec980;
extern __int64 GameData_212c638;
extern __int64 GameData_212e4f8;
extern __int64 GameData_2132398[3];
extern int* GameData_212eaa8;
extern int GameData_21ec978;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
void SceneObject_13fc4d0(__int64 a1);
void SceneObject_Unknown2(float32x4_t* a1);
__n128 game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor_alt1(
    __int64 a1) __asm__("game_facility_SceneObject_LoadAssetImpl_lambda0_"
                        "Destructor");
__n128 game_facility_SceneObject_LoadAssetImpl_lambda0_DeletingDestructor_alt1(
    __int64 a1) __asm__("game_facility_SceneObject_LoadAssetImpl_lambda0_"
                        "DeletingDestructor");
__n128 game_facility_SceneObject_LoadAssetImpl_lambda0_Destroy_alt1(
    __int64
        a1) __asm__("game_facility_SceneObject_LoadAssetImpl_lambda0_Destroy");
__int64 game_facility_SceneObject_LoadAssetImpl_lambda0_Invoke(_QWORD* a1);
__attribute__((swiftcall)) void SceneEffectManager_1950ce0_alt1(
    PSEUDO_X8, __int64, __int64,
    unsigned int) __asm__("SceneEffectManager_1950ce0");
__int64 CharacterTrailModule_d3d1c0_alt1(
    __int64, __int64, unsigned int*) __asm__("CharacterTrailModule_d3d1c0");
__int64 GameHr_a97380(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_facility_13fe840_alt1(__int64) __asm__("game_facility_13fe840");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (
    *game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor_ptr[])();
float GameRoutine_13fd4a0_alt1(__int64, __int64) __asm__("GameRoutine_13fd4a0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_13fc020_alt1(__int64, __int64*) __asm__("GameRoutine_13fc020");
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 SceneObject_Destructor(float32x4_t* a1);
void game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor(__int64 a1);
void game_facility_SceneObject_LoadAssetImpl_lambda0_DeletingDestructor(
    __int64 a1);
void game_facility_SceneObject_LoadAssetImpl_lambda0_Destroy(__int64 a1);
_QWORD** GameRoutine_13fec20(_QWORD** result, __int64, _QWORD*);
__attribute__((swiftcall)) void MapObjectModule_a7d410(PSEUDO_X8,
                                                       __int64 result);
__attribute__((swiftcall)) void game_13f8980(PSEUDO_X8, unsigned __int8*);
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, float32x4_t*);
extern _UNKNOWN* GameData_212d498;
extern int* GameData_212d490;
float SceneObject_13fd4a0(__int64 a1, __int64 a2);

__int64 SceneObject_Destructor(float32x4_t* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  LANES128(*(a1)).n128_u64[0] =
      (unsigned __int64)game_facility_SceneObject_vtable;
  if (LANES128(*(a1)).n128_u64[1] != 0) {
    SceneObject_Unknown2(a1);
  }
  v2 = LANES128(a1[9]).n128_i64[0];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
    if ((LANES128(a1[3]).n128_u8[0] & 1) == 0) {
      goto LABEL_11;
    }
  }
  else if ((LANES128(a1[3]).n128_u8[0] & 1) == 0) {
    goto LABEL_11;
  }
  v3 = LANES128(a1[4]).n128_i64[0];
  if (v3 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
  }
LABEL_11:
  if ((LANES128(a1[1]).n128_u8[8] & 1) != 0) {
    v5 = LANES128(a1[2]).n128_i64[1];
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  result = LANES128(a1[1]).n128_i64[0];
  LANES128(a1[1]).n128_u64[0] = 0;
  LANES128(*(a1)).n128_u64[0] =
      (unsigned __int64)&game_facility_SceneObjectHolder_vtable;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

void SceneObject_13fc4d0(__int64 a1)
{
  float32x4_t* v1;
  unsigned __int32 v3;
  float32x4_t v4;
  int8x16_t v5;
  float32x4_t v6;
  float32x4_t v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  __int128 v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  double v22;
  float v23;
  float v24;
  float v25;
  float v26;
  bool v27;
  bool v28;
  int v30;
  float32x4_t* v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float v36;
  float v37;
  float32x4_t v38;

  v1 = *(float32x4_t**)(a1 + 8);
  if (v1 != nullptr && *(_BYTE*)(a1 + 128) == 1) {
    game_13f9200((void*)(&v38), (int8x16_t*)(a1 + 80));
    v3 = LANES128(v38).n128_u32[2];
    v4 = vsubq_f32(v1[19], v38);
    v5 = vmulq_f32(v4, v4);
    LANES128(v5).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
            .n64_f32[0] != 0.0) {
      LANES128(v1[19]).n128_u64[0] = LANES128(v38).n128_u64[0];
      v6 = v1[19];
      LANES128(v1[18]).n128_u32[2] |= 1u;
      LANES128(v6).n128_u64[1] = v3;
      v1[19] = v6;
    }
    v7 = *(float32x4_t*)(a1 + 96);
    v8 = *(_QWORD*)(a1 + 8);
    v9 = (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 96))) +
                 *(float*)(*(_QWORD*)GameData_212dce8 + 128LL)) *
         0x1.1df46a0000000p-6;
    v10 = 0x1.1df46a0000000p-6 * LANES128(v7).n128_f32[0];
    v11 = vmuls_lane_f32(0x1.1df46a0000000p-6, v7, 2);
    LANES128(v12).n128_f32[0] = v10;
    LANES128(v12).n128_f32[1] = v9;
    LANES128(v12).n128_u64[1] = LODWORD(v11);
    v13 = vsubq_f32(*(float32x4_t*)(v8 + 320), v12);
    v14 = vmulq_f32(v13, v13);
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_f32[0] != 0.0) {
      *(float*)(v8 + 320) = v10;
      *(float*)(v8 + 324) = v9;
      v36 = v10;
      v37 = v9;
      v15 = *(_OWORD*)(v8 + 320);
      *((_QWORD*)&v15 + 1) = LODWORD(v11);
      v16 = v11 * 0.5;
      *(_OWORD*)(v8 + 320) = v15;
      v17 = cos(v16);
      v18 = sin(v16);
      v19 = cos(v36 * 0.5);
      v20 = sin(v36 * 0.5);
      v21 = cos(v37 * 0.5);
      v22 = sin(v37 * 0.5);
      v23 = v17 * v20 * v21 - v22 * (v18 * v19);
      v24 = v18 * v20 * v21 + v17 * v19 * v22;
      v25 = v18 * v20 * v22 + v17 * v19 * v21;
      v26 = v18 * v19 * v21 - v22 * (v17 * v20);
      v27 = COERCE_FLOAT(*(_OWORD*)(v8 + 336)) == v23 &&
            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v8 + 336))) == v24;
      v28 = v27 && COERCE_FLOAT(*(_QWORD*)(v8 + 344)) == v26;
      if (!v28 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v8 + 336))) != v25) {
        v30 = *(_DWORD*)(v8 + 296);
        *(float*)(v8 + 336) = v23;
        *(float*)(v8 + 340) = v24;
        *(float*)(v8 + 344) = v26;
        *(float*)(v8 + 348) = v25;
        *(_DWORD*)(v8 + 296) = v30 | 1;
      }
    }
    v31 = *(float32x4_t**)(a1 + 8);
    v32 = *(float32x4_t*)(a1 + 112);
    v33 = vsubq_f32(v31[22], v32);
    v34 = vmulq_f32(v33, v33);
    LANES128(v34).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
            .n64_f32[0] != 0.0) {
      LANES128(v31[22]).n128_u32[0] = LANES128(v32).n128_u32[0];
      LANES128(v31[22]).n128_u32[1] = *(_DWORD*)(a1 + 116);
      v35 = v31[22];
      LANES128(v35).n128_u32[2] = *(_DWORD*)(a1 + 120);
      LANES128(v31[18]).n128_u32[2] |= 1u;
      LANES128(v35).n128_u64[1] = LANES128(v35).n128_u32[2];
      v31[22] = v35;
    }
    *(_BYTE*)(a1 + 128) = 0;
  }
}

void SceneObject_Unknown2(float32x4_t* a1)
{
  unsigned __int64 v2;
  float32x4_t v3;
  float32x4_t v4;
  int8x16_t v5;
  __int128 v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  __int128 v10;
  float v11;
  float v12;
  double v13;
  double v14;
  double v15;
  double v16;
  double v17;
  double v18;
  double v19;
  double v20;
  double v21;
  float v22;
  float v23;
  float v24;
  float v25;
  bool v26;
  bool v27;
  int v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  __int128 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 i;
  int v38;
  __int64 v39;

  if ((LANES128(a1[13]).n128_u8[3] & 1) != 0) {
    v2 = LANES128(*(a1)).n128_u64[1];
    if (v2 != 0) {
      v3 = a1[10];
      v4 = vsubq_f32(*(float32x4_t*)(v2 + 304), v3);
      v5 = vmulq_f32(v4, v4);
      LANES128(v5).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                                 LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_DWORD*)(v2 + 304) = LANES128(v3).n128_u32[0];
        *(_DWORD*)(v2 + 308) = LANES128(a1[10]).n128_u32[1];
        v6 = *(_OWORD*)(v2 + 304);
        DWORD2(v6) = LANES128(a1[10]).n128_u32[2];
        *(_DWORD*)(v2 + 296) |= 1u;
        *((_QWORD*)&v6 + 1) = DWORD2(v6);
        *(_OWORD*)(v2 + 304) = v6;
      }
      v7 = a1[11];
      v8 = vsubq_f32(*(float32x4_t*)(v2 + 320), v7);
      v9 = vmulq_f32(v8, v8);
      LANES128(v9).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                                 LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_DWORD*)(v2 + 320) = LANES128(v7).n128_u32[0];
        *(_DWORD*)(v2 + 324) = LANES128(a1[11]).n128_u32[1];
        v10 = *(_OWORD*)(v2 + 320);
        *((_QWORD*)&v10 + 1) = LANES128(a1[11]).n128_u32[2];
        *(_OWORD*)(v2 + 320) = v10;
        v11 = LANES128(a1[11]).n128_f32[1];
        v12 = LANES128(a1[11]).n128_f32[0];
        v13 = LANES128(a1[11]).n128_f32[2] * 0x1.0000000000000p-1;
        v14 = cos(v13);
        v15 = sin(v13);
        v16 = v12 * 0x1.0000000000000p-1;
        v17 = cos(v16);
        v18 = sin(v16);
        v19 = v11 * 0x1.0000000000000p-1;
        v20 = cos(v19);
        v21 = sin(v19);
        v22 = v14 * v18 * v20 - PSEUDO_UNFUSED(v21 * (v15 * v17));
        v23 = PSEUDO_UNFUSED(v15 * v18 * v20) + PSEUDO_UNFUSED(v14 * v17) * v21;
        v24 = PSEUDO_UNFUSED(v15 * v18 * v21) + PSEUDO_UNFUSED(v14 * v17) * v20;
        v25 = v15 * v17 * v20 - PSEUDO_UNFUSED(v21 * (v14 * v18));
        v26 = COERCE_FLOAT(*(_OWORD*)(v2 + 336)) == v22 &&
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v2 + 336))) == v23;
        v27 = v26 && COERCE_FLOAT(*(_QWORD*)(v2 + 344)) == v25;
        if (!v27 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v2 + 336))) != v24) {
          v29 = *(_DWORD*)(v2 + 296);
          *(float*)(v2 + 336) = v22;
          *(float*)(v2 + 340) = v23;
          *(float*)(v2 + 344) = v25;
          *(float*)(v2 + 348) = v24;
          *(_DWORD*)(v2 + 296) = v29 | 1;
        }
      }
      v30 = a1[12];
      v31 = vsubq_f32(*(float32x4_t*)(v2 + 352), v30);
      v32 = vmulq_f32(v31, v31);
      LANES128(v32).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v32, v32, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_DWORD*)(v2 + 352) = LANES128(v30).n128_u32[0];
        *(_DWORD*)(v2 + 356) = LANES128(a1[12]).n128_u32[1];
        v33 = *(_OWORD*)(v2 + 352);
        DWORD2(v33) = LANES128(a1[12]).n128_u32[2];
        *(_DWORD*)(v2 + 296) |= 1u;
        *((_QWORD*)&v33 + 1) = DWORD2(v33);
        *(_OWORD*)(v2 + 352) = v33;
      }
      v34 = *(unsigned __int8*)(v2 + 288);
      *(_BYTE*)(v2 + 289) = LANES128(a1[13]).n128_u8[0];
      v35 = LANES128(a1[13]).n128_u8[1];
      if (v34 != v35) {
        *(_BYTE*)(v2 + 288) = v35;
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec980,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21ec980) != 0) {
        GameData_21ec978 = wld_Crc32(0, "MapObjectModule", 0xFu);
        __cxa_guard_release(&GameData_21ec980);
      }
      v36 = *(_QWORD*)(v2 + 512);
      for (i = v36; i != *(_QWORD*)(v2 + 504); i -= 16) {
        v38 = *(_DWORD*)(i - 16);
        v36 -= 16;
        if (v38 == GameData_21ec978) {
          if (*(_QWORD*)(v2 + 512) != v36) {
            v39 = *(_QWORD*)(v36 + 8);
            if (v39 != 0) {
              *(_BYTE*)(v39 + 156) = LANES128(a1[13]).n128_u8[2] ^ 1;
              MapObjectModule_a7d120(v39);
            }
          }
          return;
        }
      }
    }
  }
  else {
    GameRoutine_a867a0((__int64)&LANES128(*(a1)).n128_i64[1]);
    LANES128(*(a1)).n128_u64[1] = 0;
  }
}

__int64 SceneObject_13fca80(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
  }
  else {
    v3 = a1 + 1;
  }
  v4 = game_HashString(v3);
  if (v4 == 0) {
    goto LABEL_31;
  }
  v5 = *(_QWORD*)(GameData_2241860 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_2241860 + 112) == 0) {
    goto LABEL_31;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_2241860 + 88) + 8 * v8);
  if (v9 == nullptr) {
    goto LABEL_31;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    goto LABEL_31;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v7) != v8) {
        goto LABEL_31;
      }
      v10 = (_QWORD*)*v10;
      v12 = 1;
      if (v10 == nullptr) {
        return v12 & 1;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      goto LABEL_31;
    }
  LABEL_18:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      goto LABEL_31;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v10[3];
  if (v14 == 0) {
  LABEL_31:
    v12 = 1;
    return v12 & 1;
  }
  v12 = a2 ^ *(_BYTE*)(v14 + 32);
  return v12 & 1;
}

__int64 SceneObject_13fd320(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v13[2];
    char* v14;
  } v13_;

  if (a1 == 0) {
    return 0;
  }
  v2 = *(__int64**)(*(_QWORD*)GameData_212dce8 + 232LL);
  v3 = *(__int64**)(*(_QWORD*)GameData_212dce8 + 240LL);
  while (v2 != v3) {
    v4 = *v2++;
    if (*(_QWORD*)(v4 + 8) == a1) {
      return 0;
    }
  }
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  v7 = strlen_alt1((const char*)(a1 + 16));
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(*v5, v10, 16, 0);
    v13_.v13[1] = v8;
    v13_.v14 = v9;
    v13_.v13[0] = v10 | 1;
    goto LABEL_14;
  }
  LOBYTE(v13_.v13[0]) = 2 * v7;
  v9 = (char*)v13_.v13 + 1;
  if (v7 != 0) {
  LABEL_14:
    memcpy_alt1((__int64)v9, a1 + 16, v8);
  }
  v9[v8] = 0;
  GameRoutine_13fc020_alt1(v6, v13_.v13);
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v5 + v11, (__int64)v13_.v14);
  }
  GameRoutine_13fd4a0_alt1(v6, a1);
  return v6;
}

float SceneObject_13fd4a0(__int64 a1, __int64 a2)
{
  bool v3;
  __int128 v4;
  __int128 v5;
  __int128 v6;
  __int64 v7;
  bool v8;
  _QWORD* v9;
  unsigned __int8 explicit;
  int* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  float result;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float32x4_t v28;
  __int64 v29;
  float32x4_t* v30;
  __int128 v31;
  unsigned __int32 v32;
  float32x4_t* v33;
  __int128 v34;
  float32x4_t v35;
  float v36;
  float v37;
  __int128 v38;
  __int64 v39;
  int v40;
  struct {
    _QWORD v41[2];
    char* v42;
  } v41_;
  struct {
    float32x4_t v43;
    __int64 v44;
  } v43_;
  __int64 v45;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  *(_QWORD*)(a1 + 8) = a2;
  if (a2 != 0) {
    v3 = false;
    *(_DWORD*)(a1 + 160) = *(_DWORD*)(a2 + 304);
    *(_DWORD*)(a1 + 164) = *(_DWORD*)(a2 + 308);
    v4 = *(_OWORD*)(a1 + 160);
    *((_QWORD*)&v4 + 1) = *(unsigned int*)(a2 + 312);
    *(_OWORD*)(a1 + 160) = v4;
    *(_DWORD*)(a1 + 176) = *(_DWORD*)(a2 + 320);
    *(_DWORD*)(a1 + 180) = *(_DWORD*)(a2 + 324);
    v5 = *(_OWORD*)(a1 + 176);
    *((_QWORD*)&v5 + 1) = *(unsigned int*)(a2 + 328);
    *(_OWORD*)(a1 + 176) = v5;
    *(_DWORD*)(a1 + 192) = *(_DWORD*)(a2 + 352);
    *(_DWORD*)(a1 + 196) = *(_DWORD*)(a2 + 356);
    v6 = *(_OWORD*)(a1 + 192);
    *((_QWORD*)&v6 + 1) = *(unsigned int*)(a2 + 360);
    *(_OWORD*)(a1 + 192) = v6;
    if (*(_BYTE*)(a2 + 289) == 1 && (*(_BYTE*)(a2 + 288) & 1) != 0) {
      if ((*(_BYTE*)(a2 + 300) & 0xFD) == 1) {
        v3 = false;
      }
      else {
        v18 = a2;
        do {
          v18 = *(_QWORD*)(v18 + 736);
          v3 = v18 == 0;
        } while (v18 != 0 && *(_BYTE*)(v18 + 289) == 1 &&
                 *(_BYTE*)(v18 + 288) == 1 &&
                 (*(_BYTE*)(v18 + 300) & 0xFD) != 1);
      }
    }
    *(_BYTE*)(a1 + 208) = v3;
    if (*(_BYTE*)(a2 + 288) == 1) {
      v7 = a2;
      do {
        v7 = *(_QWORD*)(v7 + 736);
        v8 = v7 == 0;
      } while (v7 != 0 && (*(_BYTE*)(v7 + 288) & 1) != 0);
    }
    else {
      v8 = false;
    }
    *(_BYTE*)(a1 + 209) = v8;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d498,
                                    memory_order_acquire);
    v11 = GameData_212d490;
    if ((explicit & 1) == 0) {
      v39 = a2;
      v40 = __cxa_guard_acquire_alt1((__int64)GameData_212d498),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      a2 = v39;
      if (v40 != 0) {
        *v11 = wld_Crc32(0, "MapObjectModule", 0xFu),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        __cxa_guard_release_alt1((__int64)GameData_212d498),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        a2 = v39;
      }
    }
    v12 = *(_QWORD*)(a2 + 512);
    v13 = v12;
    do {
      if (v13 == *(_QWORD*)(a2 + 504)) {
        goto LABEL_32;
      }
      v14 = *(_DWORD*)(v13 - 16);
      v13 -= 16;
      v12 -= 16;
    } while (v14 != *v11);
    if (*(_QWORD*)(a2 + 512) != v12) {
      v15 = *(_QWORD*)(v12 + 8);
      if (v15 != 0) {
        MapObjectModule_a7d410((void*)(&v43_.v43), v15),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
        if (LANES128(v43_.v43).n128_u64[0] != 0) {
          v16 = *(_BYTE*)(LANES128(v43_.v43).n128_u64[0] + 184);
          v17 = LANES128(v43_.v43).n128_i64[1];
          if (LANES128(v43_.v43).n128_u64[1] == 0) {
            goto LABEL_31;
          }
        }
        else {
          v16 = 0;
          v17 = LANES128(v43_.v43).n128_i64[1];
          if (LANES128(v43_.v43).n128_u64[1] == 0) {
          LABEL_31:
            *(_BYTE*)(a1 + 210) = v16 & 1;
            goto LABEL_32;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v17),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
        }
        goto LABEL_31;
      }
    }
  LABEL_32:
    v9 = *(_QWORD**)(a1 + 8);
    *(_BYTE*)(a1 + 211) = 1;
  }
  else {
    v9 = nullptr;
  }
  v45 = 0;
  LANES128(v43_.v43).n128_u64[0] = (unsigned __int64)&v45;
  GameRoutine_13fec20(&v43_.v43, (__int64)&v43_.v43, v9),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v45 != 0) {
    v20 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + v45);
    if (v20 != 0) {
      v21 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + v20);
      v22 = strlen_alt1((const char*)(v21 + 16)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v23 = v22;
      if (v22 >= 0x17) {
        if ((v22 | 7) == 0x17) {
          v25 = 26;
        }
        else {
          v25 = (v22 | 7) + 1;
        }
        v24 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v25, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v41_.v41[1] = v23;
        v41_.v42 = v24;
        v41_.v41[0] = v25 | 1;
      }
      else {
        LOBYTE(v41_.v41[0]) = 2 * v22;
        v24 = (char*)v41_.v41 + 1;
        if (v22 == 0) {
        LABEL_44:
          v24[v23] = 0;
          game_13f8980((void*)((__int64*)&v43_.v43),
                       (unsigned __int8*)v41_.v41),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
            v26 = *(_QWORD*)(a1 + 64);
            if (v26 != 0) {
              v27 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
            }
          }
          v28 = v43_.v43;
          LANES128(v43_.v43).n128_u16[0] = 0;
          *(float32x4_t*)(a1 + 48) = v28;
          *(_QWORD*)(a1 + 64) = v43_.v44;
          if ((v41_.v41[0] & 1) != 0 && v41_.v42 != nullptr) {
            v29 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v29 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                (__int64)v41_.v42),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
          }
          goto LABEL_54;
        }
      }
      memmove_alt1((__int64)v24, v21 + 16, v23),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      goto LABEL_44;
    }
  }
LABEL_54:
  v30 = *(float32x4_t**)(a1 + 8);
  if (v30 != nullptr) {
    *(_DWORD*)(a1 + 112) = LANES128(v30[22]).n128_u32[0];
    *(_DWORD*)(a1 + 116) = LANES128(v30[22]).n128_u32[1];
    v31 = *(_OWORD*)(a1 + 112);
    *((_QWORD*)&v31 + 1) = LANES128(v30[22]).n128_u32[2];
    *(_OWORD*)(a1 + 112) = v31;
    game_13f9460((void*)(&v43_.v43), v30 + 19),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    v32 = LANES128(v43_.v43).n128_u32[2];
    v33 = *(float32x4_t**)(a1 + 8);
    *(_QWORD*)(a1 + 80) = LANES128(v43_.v43).n128_u64[0];
    v34 = *(_OWORD*)(a1 + 80);
    *((_QWORD*)&v34 + 1) = v32;
    *(_OWORD*)(a1 + 80) = v34;
    v35 = v33[20];
    v36 = 0x1.ca5dc00000000p+5f * LANES128(v35).n128_f32[0];
    v37 = (float)(0x1.ca5dc00000000p+5f * LANES128(v35).n128_f32[1]) -
          *(float*)(*(_QWORD*)GameData_212dce8 + 128LL);
    result = vmuls_lane_f32(0x1.ca5dc00000000p+5f, v35, 2);
    *(float*)(a1 + 96) = v36;
    *(float*)(a1 + 100) = v37;
    v38 = *(_OWORD*)(a1 + 96);
    *((_QWORD*)&v38 + 1) = LODWORD(result);
    *(_OWORD*)(a1 + 96) = v38;
  }
  return result;
}

void game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor_ptr;
  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
}

void game_facility_SceneObject_LoadAssetImpl_lambda0_DeletingDestructor(
    __int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_facility_SceneObject_LoadAssetImpl_lambda0_Destructor_ptr;
  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 48);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v8, a1);
}

_QWORD* game_facility_SceneObject_LoadAssetImpl_lambda0_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  v3 = v2;
  *v2 = GameData_2038508;
  v4 = *(_BYTE*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 24);
  v2[2] = *(_QWORD*)(a1 + 16);
  v2[3] = v5;
  if ((v4 & 1) == 0) {
    v6 = *(_QWORD*)(a1 + 40);
    v7 = *(_QWORD*)(a1 + 48);
    v2[4] = *(_QWORD*)(a1 + 32);
    v2[5] = v6;
    v2[6] = v7;
    v8 = *(_QWORD*)(a1 + 96);
    if (v8 != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    v3[12] = 0;
    return v3;
  }
  fw_text_String_CopyTerminated(v2 + 4, *(_QWORD*)(a1 + 48),
                                *(_QWORD*)(a1 + 40));
  v8 = *(_QWORD*)(a1 + 96);
  if (v8 == 0) {
    goto LABEL_6;
  }
LABEL_3:
  if (v8 == a1 + 64) {
    v3[12] = v3 + 8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  else {
    v3[12] = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  }
  return v3;
}

__int64 game_facility_SceneObject_LoadAssetImpl_lambda0_CloneInto(_QWORD* a1,
                                                                  _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_2038508;
  a2[3] = a1[3];
  a2[2] = a1[2];
  if ((a1[4] & 1) == 0) {
    a2[5] = a1[5];
    v4 = a1[4];
    a2[6] = a1[6];
    a2[4] = v4;
    result = a1[12];
    if (result != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    a2[12] = 0;
    return result;
  }
  fw_text_String_CopyTerminated(a2 + 4, a1[6], a1[5]);
  result = a1[12];
  if (result == 0) {
    goto LABEL_6;
  }
LABEL_3:
  if ((_QWORD*)result == a1 + 8) {
    a2[12] = a2 + 8;
    return (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[12] + 24LL))(a1[12]);
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    a2[12] = result;
  }
  return result;
}

void game_facility_SceneObject_LoadAssetImpl_lambda0_Destroy(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  if (v3 == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 48);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
}

__int64 game_facility_SceneObject_LoadAssetImpl_lambda0_Invoke(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 explicit;
  int* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  bool v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  unsigned __int16* v59;
  int v60;
  __int64 v61;
  __int64 v62;
  const char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 result;
  struct {
    _QWORD v72[2];
    char* v73;
  } v72_;
  struct {
    __int64 v74;
    __int64 v75;
  } v74_;
  struct {
    __int64 v76;
    __int64 v77;
  } v76_;

  v1 = a1[2];
  LODWORD(v76_.v76) = 0;
  v3 = CharacterTrailModule_d3d1c0_alt1(*(_QWORD*)(v1 + 8), v1 + 136,
                                        (unsigned int*)&v76_.v76);
  v4 = *(_QWORD*)(v1 + 8);
  nn_os_LockMutex_alt1((__int64)GameData_212df28);
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  *(_BYTE*)(v5 + 16) = 0;
  v6 = v5;
  *(_DWORD*)(v5 + 17) = 33686018;
  *(_QWORD*)v5 = GameData_212e4f8 + 16;
  *(_QWORD*)(v5 + 8) = v4;
  v7 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               40LL);
  *(_QWORD*)(v5 + 24) = *(_QWORD*)(v7 + 16);
  v8 = *(_QWORD*)(v7 + 24);
  *(_QWORD*)(v5 + 32) = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_BYTE*)(v5 + 112) = 0;
  *(_BYTE*)(v5 + 116) = 0;
  *(_BYTE*)(v5 + 120) = 0;
  *(_BYTE*)(v5 + 124) = 0;
  *(_BYTE*)(v5 + 128) = 0;
  *(_BYTE*)(v5 + 132) = 0;
  *(_BYTE*)(v5 + 164) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_BYTE*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 136) = 0;
  *(_DWORD*)(v5 + 200) = 1065353216;
  *(_QWORD*)(v5 + 208) = 0;
  *(_WORD*)(v5 + 216) = 0;
  GameHr_a97380(v5, v3);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eab0,
                                  memory_order_acquire);
  v10 = GameData_212eaa8;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212eab0) != 0) {
    *v10 = wld_Crc32(0, "LODModule", 9u);
    __cxa_guard_release_alt1((__int64)GameData_212eab0);
  }
  v11 = *v10;
  v13 = *(_QWORD*)(v4 + 504);
  v12 = *(_QWORD*)(v4 + 512);
  v14 = v12;
  LODWORD(v76_.v76) = v11;
  v76_.v77 = v6;
  while (v14 != v13) {
    v15 = *(_DWORD*)(v14 - 16);
    v14 -= 16;
    if (v15 == v11) {
      if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
        goto LABEL_22;
      }
      goto LABEL_16;
    }
  }
  if (v13 == v12 && (unsigned __int64)(*(_QWORD*)(v4 + 520) - v13) <= 0x6F) {
    v16 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)(v4 + 504) = v16;
    *(_QWORD*)(v4 + 512) = v16;
    *(_QWORD*)(v4 + 520) = v16 + 112;
    if (v12 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v13);
    }
  }
  GameRoutine_98f140_alt1((__int64*)(v4 + 504), &v76_.v76);
  if ((*(_BYTE*)(v6 + 16) & 1) == 0) {
  LABEL_16:
    *(_BYTE*)(v6 + 16) = 1;
    *(_BYTE*)(v6 + 17) &= ~2u;
    *(_BYTE*)(v6 + 18) &= ~2u;
    *(_BYTE*)(v6 + 19) &= ~2u;
    *(_BYTE*)(v6 + 20) &= ~2u;
    v18 = *(_BYTE**)(v6 + 8);
    v18[632] = 0;
    v18[664] = 0;
    v18[696] = 0;
    v18[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6);
    v19 = *(_BYTE**)(v6 + 8);
    v20 = v19[300] == 3 && v19[301] == 3;
    if (v20 || v19[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 72LL))(v6);
    }
  }
LABEL_22:
  v21 = *(__int64**)(v4 + 536);
  v22 = *(_QWORD*)(v4 + 544);
  if ((unsigned __int64)v21 >= v22) {
    v24 = *(_QWORD*)(v4 + 528);
    v25 = (char*)v21 - v24;
    v26 = ((__int64)v21 - v24) >> 3;
    v27 = v26 + 1;
    if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
      goto LABEL_98;
    }
    v28 = v22 - v24;
    if (v28 >> 2 > v27) {
      v27 = v28 >> 2;
    }
    if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
      v29 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v29 = v27;
    }
    if (v29 != 0) {
      if (v29 >> 61 != 0) {
        goto LABEL_99;
      }
      v30 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v29;
    v32 = (unsigned __int64)v21 - v24;
    v33 = (__int64)&v25[v30 + -8 * v26];
    *(_QWORD*)&v25[v30] = v6;
    v23 = (__int64)&v25[v30 + 8];
    memcpy_alt1(v33, v24, v32);
    *(_QWORD*)(v4 + 528) = v33;
    *(_QWORD*)(v4 + 536) = v23;
    *(_QWORD*)(v4 + 544) = v31;
    if (v24 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v24);
    }
  }
  else {
    *v21 = v6;
    v23 = (__int64)(v21 + 1);
  }
  *(_QWORD*)(v4 + 536) = v23;
  v35 = *(__int64**)(v4 + 560);
  v36 = *(_QWORD*)(v4 + 568);
  if ((unsigned __int64)v35 < v36) {
    *v35 = v6;
    v37 = (__int64)(v35 + 1);
    goto LABEL_54;
  }
  v38 = *(_QWORD*)(v4 + 552);
  v39 = (char*)v35 - v38;
  v40 = ((__int64)v35 - v38) >> 3;
  v41 = v40 + 1;
  if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
  LABEL_98:
    GameRoutine_98f290_alt1();
  }
  v42 = v36 - v38;
  if (v42 >> 2 > v41) {
    v41 = v42 >> 2;
  }
  if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
    v43 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v43 = v41;
  }
  if (v43 != 0) {
    if (v43 >> 61 == 0) {
      v44 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v43, 16, 0);
      goto LABEL_50;
    }
  LABEL_99:
    GameRoutine_60a210_alt1();
  }
  v44 = 0;
LABEL_50:
  v45 = v44 + 8 * v43;
  v46 = (unsigned __int64)v35 - v38;
  v47 = (__int64)&v39[v44 + -8 * v40];
  *(_QWORD*)&v39[v44] = v6;
  v37 = (__int64)&v39[v44 + 8];
  memcpy_alt1(v47, v38, v46);
  *(_QWORD*)(v4 + 552) = v47;
  *(_QWORD*)(v4 + 560) = v37;
  *(_QWORD*)(v4 + 568) = v45;
  if (v38 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v38);
  }
LABEL_54:
  *(_QWORD*)(v4 + 560) = v37;
  GameRoutine_a8c0c0_alt1(v4);
  *(_BYTE*)(v4 + 576) = 1;
  nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
  *(_DWORD*)(v6 + 212) = 8;
  v49 = *(_QWORD*)(v6 + 56) - *(_QWORD*)(v6 + 48);
  if (v49 != 0) {
    v50 = v49 >> 3;
    v51 = 0;
    v52 = (_QWORD*)GameData_2132398[0];
    do {
      v53 = *(_DWORD*)(v6 + 212);
      v54 = *(_QWORD*)(*(_QWORD*)(v6 + 40) + 56LL) +
            224LL * *(_QWORD*)(*(_QWORD*)(v6 + 48) + 8 * v51);
      *(_QWORD*)(v6 + 96) = v54;
      *(_DWORD*)(v54 + 176) = v53;
      if (*(_BYTE*)(v54 + 186) == 1) {
        v55 = *(_QWORD*)(v54 + 192);
        v56 = *(_QWORD*)(v54 + 200);
        if (v55 != v56) {
          v57 = *(_DWORD*)(*v52 + 112LL * v53 + 64) - 1;
          do {
            if ((*(_BYTE*)(v55 + 22) & 1) == 0) {
              *(_DWORD*)v55 = v57;
              *(_DWORD*)(v55 + 4) = v57;
              *(_DWORD*)(v55 + 8) = 1;
            }
            *(_DWORD*)(v55 + 16) = v57;
            *(_BYTE*)(v55 + 21) = 1;
            v55 += 24;
          } while (v55 != v56);
        }
      }
      ++v51;
      *(_QWORD*)(v6 + 96) = 0;
    } while (v51 != v50);
  }
  v58 = a1[3];
  if ((*(_BYTE*)(v58 + 32) & 2) != 0) {
    game_facility_13fe840_alt1(*(_QWORD*)(v1 + 8));
    v58 = a1[3];
  }
  v60 = *(unsigned __int16*)(v58 + 56);
  v59 = (unsigned __int16*)(v58 + 56);
  if (v60 != 0) {
    game_13d2c60((void*)(&v76_.v76), v59);
    v61 = v76_.v76;
    v62 = v76_.v77;
    if (v76_.v76 != v76_.v77) {
      while (1) {
        v63 = *(const char**)(*(_QWORD*)v61 + 8LL);
        v64 = strlen_alt1(v63);
        if (v64 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0_alt1();
        }
        v65 = v64;
        if (v64 >= 0x17) {
          if ((v64 | 7) == 0x17) {
            v67 = 26;
          }
          else {
            v67 = (v64 | 7) + 1;
          }
          v66 = (char*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v67, 16, 0);
          v72_.v72[1] = v65;
          v72_.v73 = v66;
          v72_.v72[0] = v67 | 1;
        }
        else {
          v66 = (char*)v72_.v72 + 1;
          LOBYTE(v72_.v72[0]) = 2 * v64;
          if (v64 == 0) {
            goto LABEL_78;
          }
        }
        memmove_alt1((__int64)v66, (__int64)v63, v65);
      LABEL_78:
        v66[v65] = 0;
        SceneEffectManager_1950ce0_alt1((void*)(&v74_.v74), (__int64)v72_.v72,
                                        v1, 2u);
        v68 = v74_.v75;
        if (v74_.v75 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v74_.v75 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
          std___1___shared_weak_count___release_weak_alt1(v68);
          if ((v72_.v72[0] & 1) != 0) {
          LABEL_81:
            if (v72_.v73 != nullptr) {
              v69 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v69 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v69,
                  (__int64)v72_.v73);
            }
          }
        }
        else if ((v72_.v72[0] & 1) != 0) {
          goto LABEL_81;
        }
        v61 += 8;
        if (v61 == v62) {
          v61 = v76_.v76;
          break;
        }
      }
    }
    if (v61 != 0) {
      v76_.v77 = v61;
      v70 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v70 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v61);
    }
  }
  result = a1[12];
  if (result != 0) {
    v76_.v76 = v1;
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + 48LL))(
        result, &v76_.v76);
  }
  return result;
}

#pragma GCC visibility pop
