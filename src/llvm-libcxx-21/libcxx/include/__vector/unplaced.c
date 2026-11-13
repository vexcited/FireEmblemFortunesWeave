#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_bf1600(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_b34600(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void GameRoutine_b35580(PSEUDO_X8, _QWORD*, __int64*,
                                                   __int64, unsigned __int64,
                                                   char, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_b36ae0(PSEUDO_X8, _QWORD* result,
                                                   _QWORD*);
__attribute__((swiftcall)) void GmapDisposFile_ae35a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void eft_bc9e40(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* GameRoutine_14a89d0(__int64* result, __int64, __int64,
                             unsigned __int64);
__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameHr_14a6a10(__int64 result);
__int64 GameHr_190c920(__int64*, _QWORD*);
__int64 GameRoutine_19131f0(__int64, float);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 GameRoutine_1a0a7b0(__int64, __int64, __int64);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_64be60();
__int64 GameRoutine_bf1300(_QWORD*, _QWORD*);
__int64 SpineModel_19119d0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_gmap_1347960(__int64, __int64, __int64);
__int64 game_gmap_TroopMgr_CountTroop_134e600(__int64, __int64);
__int64 llvm_libcxx_21_libcxx_include___vector_bef640_alt1(
    __int64 result, __int64, unsigned __int64, _QWORD*,
    signed __int64) __asm__("llvm_libcxx_21_libcxx_include___vector_bef640");
__int64 llvm_libcxx_21_libcxx_include___vector_befd80_alt1(
    __int64 result, _QWORD*, __int64,
    _QWORD*) __asm__("llvm_libcxx_21_libcxx_include___vector_befd80");
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 spine_1917700(__int64, unsigned __int8*, unsigned int);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 std___1_stoi(__int64, __int64, int);
bool GameHr_15a8320(_DWORD*, int*);
extern _UNKNOWN GameData_1a86cf1;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int64 (*GameData_202bb48[])();
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 (*gfx_light_PointLightActor_vtable[])();
extern __int64 (*gfx_light_SpotLightActor_vtable[])();
extern __int64* GameData_212c880[5];
extern __int64* GameData_2131b00[8];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_2131678;
extern __int64 GameData_2132398[3];
extern __int64 GameData_21c96e8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_1a9f09e;
float powf(float, float);
float32x4_t game_templates_a56ac0(_BYTE*, float32x4_t result, long double,
                                  long double, long double);
int* GameRoutine_15a8170(int* result, int*, int*, int*);
int memcmp(__int64, __int64, unsigned __int64);
int8x16_t* GameRoutine_a57200(int8x16_t* result, float32x4_t*, float);
unsigned __int64 strlen(const char*);
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameHr_1683ec0(__int64, __int64*, __int64, __int64, long double,
                    long double);
void GameRoutine_14a7860(__int64*, _QWORD*);
void GameRoutine_1683ce0(__int64*, __int64*);
void GameRoutine_d9e4e0(__int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_190c900();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e5a20();
void __attribute__((noreturn)) GameRoutine_a9b830();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(const char*);
void __attribute__((noreturn)) fs_60a230();
void game_templates_a55a00(__int64, __int64, unsigned __int8, char,
                           float32x4_t*, float, float, float, double,
                           long double, long double);
void llvm_libcxx_21_libcxx_include___vector_15ab030_alt1(
    _QWORD*, _QWORD*, _QWORD*, _QWORD*,
    _QWORD*) __asm__("llvm_libcxx_21_libcxx_include___vector_15ab030");
void nn_detail_UnexpectedDefaultImpl();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
float32x4_t llvm_libcxx_21_libcxx_include___vector_a56f20(_QWORD* a1,
                                                          float32x4_t* a2,
                                                          float32x2_t* a3);
int8x16_t* llvm_libcxx_21_libcxx_include___vector_a583e0(
    int8x16_t* result, float32x4_t* a2, char a3, char a4, int a5, float a6);
void llvm_libcxx_21_libcxx_include___vector_a58fe0(
    __int64 a1, __int64 a2, float32x4_t* a3, char a4, float32x4_t a5,
    long double a6, long double a7, long double a8, long double a9,
    long double a10);
void llvm_libcxx_21_libcxx_include___vector_a598e0(__int64 a1, __int64* a2,
                                                   __int64* a3);
_QWORD* llvm_libcxx_21_libcxx_include___vector_a993a0(__int64 a1, __int64* a2,
                                                      __int64* a3);
void llvm_libcxx_21_libcxx_include___vector_a9ac50(_QWORD* a1, __int64 a2,
                                                   int a3);
_QWORD* llvm_libcxx_21_libcxx_include___vector_a9afa0(_QWORD* result,
                                                      __int64 a2);
void llvm_libcxx_21_libcxx_include___vector_ad0a00(_BYTE* a1, float* a2);
void llvm_libcxx_21_libcxx_include___vector_ad0e40(float* a1, __int64 a2,
                                                   unsigned __int64 a3);
__attribute__((swiftcall)) void
llvm_libcxx_21_libcxx_include___vector_ad1560(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2);
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b34420(
    PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
    unsigned __int64 a5, __int64 a6);
__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b35d00(
    PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
    unsigned __int64 a5, __int64 a6, _QWORD* a7);
__int64 llvm_libcxx_21_libcxx_include___vector_b362c0(_QWORD* a1, __int64 a2,
                                                      __int64 a3,
                                                      unsigned __int64 a4);
void llvm_libcxx_21_libcxx_include___vector_b36540(_QWORD* a1, __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___vector_bd47b0(__int64* a1);
__int64 llvm_libcxx_21_libcxx_include___vector_bd62d0(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      __int64 a4);
char* llvm_libcxx_21_libcxx_include___vector_bef640(char* result, char* a2,
                                                    unsigned __int64 a3,
                                                    char* a4, __int64 a5);
__int64 llvm_libcxx_21_libcxx_include___vector_befd80(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      _QWORD* a4);
char* llvm_libcxx_21_libcxx_include___vector_bf0be0(char* result, char* a2,
                                                    char* a3, __int64 a4,
                                                    __int64 a5, char* a6,
                                                    __int64 a7);
_QWORD* llvm_libcxx_21_libcxx_include___vector_bf9ca0(__int64 a1,
                                                      unsigned __int64* a2,
                                                      __int64 a3, __int64** a4);
_QWORD* llvm_libcxx_21_libcxx_include___vector_d9e140(__int64 a1,
                                                      unsigned __int8* a2,
                                                      __int64 a3, __int64** a4);
__int64 llvm_libcxx_21_libcxx_include___vector_14a6dc0(__int64 a1, __int64 a2);
__int64 llvm_libcxx_21_libcxx_include___vector_14a73e0(__int64 a1);
__int64 llvm_libcxx_21_libcxx_include___vector_15a71f0(__int64 a1, __int64* a2,
                                                       const char** a3, int* a4,
                                                       __int64 a5, int* a6);
unsigned __int64
llvm_libcxx_21_libcxx_include___vector_15a73c0(unsigned __int64 result, int* a2,
                                               __int64 a3, char a4);
void llvm_libcxx_21_libcxx_include___vector_15a94c0(_QWORD* a1, __int64* a2,
                                                    __int64* a3);
void llvm_libcxx_21_libcxx_include___vector_15a9750(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4);
void llvm_libcxx_21_libcxx_include___vector_15a9910(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4,
                                                    __int64* a5);
bool llvm_libcxx_21_libcxx_include___vector_15a9b60(__int64* a1, char* a2);
void llvm_libcxx_21_libcxx_include___vector_15a9e40(unsigned __int64 a1,
                                                    char* a2, __int64 a3,
                                                    char a4);
void llvm_libcxx_21_libcxx_include___vector_15aabe0(_QWORD* a1, __int64* a2,
                                                    __int64* a3);
void llvm_libcxx_21_libcxx_include___vector_15aae70(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4);
void llvm_libcxx_21_libcxx_include___vector_15ab030(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4,
                                                    __int64* a5);
bool llvm_libcxx_21_libcxx_include___vector_15ab280(_QWORD* a1, char* a2);
void llvm_libcxx_21_libcxx_include___vector_1683540(
    __int64* a1, __int64* a2, unsigned __int64 a3, __int64* a4,
    signed __int64 a5, long double a6, long double a7);
void llvm_libcxx_21_libcxx_include___vector_1684780(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64 a4,
                                                    __int64 a5, __int64* a6,
                                                    __int64 a7);
__int64 llvm_libcxx_21_libcxx_include___vector_1686420(_QWORD* a1);
__int64 llvm_libcxx_21_libcxx_include___vector_17db7e0(__int64 a1, __int64 a2,
                                                       unsigned __int64 a3);
__int64* llvm_libcxx_21_libcxx_include___vector_18d94e0(
    __int64* result, __int64* a2, __int64* a3, __int64* a4, __int64* a5);
bool llvm_libcxx_21_libcxx_include___vector_18d9660(__int64* a1, __int64* a2);
__int64 llvm_libcxx_21_libcxx_include___vector_190cb20(_QWORD* a1, __int64* a2);

float32x4_t llvm_libcxx_21_libcxx_include___vector_a56f20(_QWORD* a1,
                                                          float32x4_t* a2,
                                                          float32x2_t* a3)
{
  float32x4_t v3;
  float32x4_t v4;
  float v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t result;
  __int128 v41;
  __int128 v42;

  v3 = *(float32x4_t*)LANES64(a3[2]).n64_u64;
  v4 = a2[1];
  v5 = LANES64(a3[2]).n64_f32[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)LANES64(*(a3)).n64_u64));
  v9 = vmulq_n_f32(*a2, LANES128(v3).n128_f32[0]);
  v10 = vmlaq_n_f32(v9, v4, v5);
  v11 = vmlaq_lane_f32(v8, v4,
                       COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]), 1);
  v12 = vmlaq_laneq_f32(v11, v6, v3, 2);
  v13 = vmlaq_n_f32(v8, v4, v5);
  v14 = vmlaq_lane_f32(v9, v4,
                       COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]), 1);
  v15 = vmlaq_laneq_f32(v13, v6, v3, 2);
  v16 = vmlaq_laneq_f32(v14, v6, v3, 2);
  v17 = vaddq_f32(vmlaq_laneq_f32(v10, v6, v3, 2), v7);
  v18 = vaddq_f32(v12, v7);
  v19 = vaddq_f32(
      vmlaq_laneq_f32(v11, v6, *(float32x4_t*)LANES64(*(a3)).n64_u64, 2), v7);
  v20 = vaddq_f32(
      vmlaq_laneq_f32(v10, v6, *(float32x4_t*)LANES64(*(a3)).n64_u64, 2), v7);
  v21 = vaddq_f32(v15, v7);
  LANES128(v18).n128_u32[3] = 0;
  v22 = vaddq_f32(v16, v7);
  LANES128(v17).n128_u32[3] = 0;
  v23 = vaddq_f32(
      vmlaq_laneq_f32(v13, v6, *(float32x4_t*)LANES64(*(a3)).n64_u64, 2), v7);
  LANES128(v19).n128_u32[3] = 0;
  v24 = vaddq_f32(
      vmlaq_laneq_f32(v14, v6, *(float32x4_t*)LANES64(*(a3)).n64_u64, 2), v7);
  LANES128(v20).n128_u32[3] = 0;
  LANES128(v21).n128_u32[3] = 0;
  LANES128(v22).n128_u32[3] = 0;
  LANES128(v23).n128_u32[3] = 0;
  LANES128(v24).n128_u32[3] = 0;
  v25 = vminq_f32(v23, COERCE_AS(float32x4_t, GameData_1a82f20));
  v26 = vmaxq_f32(v23, COERCE_AS(float32x4_t, GameData_1a82ea0));
  LANES128(v25).n128_u32[3] = 0;
  LANES128(v26).n128_u32[3] = 0;
  v27 = vminq_f32(v25, v19);
  v28 = vmaxq_f32(v26, v19);
  LANES128(v27).n128_u32[3] = 0;
  LANES128(v28).n128_u32[3] = 0;
  v29 = vminq_f32(v27, v24);
  v30 = vmaxq_f32(v28, v24);
  LANES128(v29).n128_u32[3] = 0;
  LANES128(v30).n128_u32[3] = 0;
  v31 = vminq_f32(v29, v20);
  v32 = vmaxq_f32(v30, v20);
  LANES128(v31).n128_u32[3] = 0;
  LANES128(v32).n128_u32[3] = 0;
  v33 = vminq_f32(v31, v21);
  v34 = vmaxq_f32(v32, v21);
  LANES128(v33).n128_u32[3] = 0;
  LANES128(v34).n128_u32[3] = 0;
  v35 = vminq_f32(v33, v18);
  v36 = vmaxq_f32(v34, v18);
  LANES128(v35).n128_u32[3] = 0;
  LANES128(v36).n128_u32[3] = 0;
  v37 = vminq_f32(v35, v22);
  v38 = vmaxq_f32(v36, v22);
  LANES128(v37).n128_u32[3] = 0;
  LANES128(v38).n128_u32[3] = 0;
  v39 = vminq_f32(v37, v17);
  result = vmaxq_f32(v38, v17);
  *a1 = LANES128(v39).n128_u64[0];
  a1[2] = LANES128(result).n128_u64[0];
  v41 = *(_OWORD*)a1;
  v42 = *((_OWORD*)a1 + 1);
  *((_QWORD*)&v41 + 1) = LANES128(v39).n128_u32[2];
  *((_QWORD*)&v42 + 1) = LANES128(result).n128_u32[2];
  *(_OWORD*)a1 = v41;
  *((_OWORD*)a1 + 1) = v42;
  return result;
}

int8x16_t* llvm_libcxx_21_libcxx_include___vector_a583e0(
    int8x16_t* result, float32x4_t* a2, char a3, char a4, int a5, float a6)
{

#pragma clang fp contract(off)
  __int64 v9;
  unsigned __int64 v10;
  int8x16_t* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;

  v10 = LANES128(*(result)).n128_u64[0];
  v9 = LANES128(*(result)).n128_i64[1];
  v16 = result;
  if (LANES128(*(result)).n128_u64[0] != v9) {
    v17 = 20;
    v18 = 0;
    v19 = 0;
    do {
      if ((*(_DWORD*)(v10 + v17) & a5) == 0) {
        result =
            GameRoutine_a57200((int8x16_t*)(LANES128(v16[1]).n128_u64[1] + v18),
                               a2, a6);
        v10 = LANES128(*(v16)).n128_u64[0];
        v9 = LANES128(*(v16)).n128_i64[1];
      }
      ++v19;
      v18 += 32;
      v17 += 112;
    } while (0x6DB6DB6DB6DB6DB7LL * ((__int64)(v9 - v10) >> 4) > v19);
  }
  if ((a3 & 1) != 0) {
    v21 = LANES128(v16[3]).n128_u64[0];
    v20 = LANES128(v16[3]).n128_u64[1];
    if (v21 != v20) {
      v22 = 20;
      v23 = 0;
      v24 = 0;
      do {
        if ((*(_DWORD*)(v21 + v22) & a5) == 0) {
          result = GameRoutine_a57200(
              (int8x16_t*)(LANES128(v16[4]).n128_u64[1] + v23), a2, a6);
          v21 = LANES128(v16[3]).n128_u64[0];
          v20 = LANES128(v16[3]).n128_u64[1];
        }
        ++v24;
        v23 += 32;
        v22 += 112;
      } while (0x6DB6DB6DB6DB6DB7LL * ((__int64)(v20 - v21) >> 4) > v24);
    }
  }
  if ((a4 & 1) != 0) {
    v26 = LANES128(v16[6]).n128_u64[0];
    v25 = LANES128(v16[6]).n128_u64[1];
    if (v26 != v25) {
      v27 = 20;
      v28 = 0;
      v29 = 0;
      do {
        if ((*(_DWORD*)(v26 + v27) & a5) == 0) {
          result = GameRoutine_a57200(
              (int8x16_t*)(LANES128(v16[7]).n128_u64[1] + v28), a2, a6);
          v26 = LANES128(v16[6]).n128_u64[0];
          v25 = LANES128(v16[6]).n128_u64[1];
        }
        ++v29;
        v28 += 32;
        v27 += 112;
      } while (0x6DB6DB6DB6DB6DB7LL * ((__int64)(v25 - v26) >> 4) > v29);
    }
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___vector_a58fe0(
    __int64 a1, __int64 a2, float32x4_t* a3, char a4, float32x4_t a5,
    long double a6, long double a7, long double a8, long double a9,
    long double a10)
{
  __int64 v10;
  __int64 v11;
  float v12;
  long double* v17;
  long double* i;
  __int64 v19;
  float32x4_t* v20;
  __int64 v21;
  float32x4_t* v22;
  _BYTE* v23;
  _BYTE* v24;
  int v25;
  int j;
  __int64 v27;
  __int64 v28;

  v10 = *(_QWORD*)a1;
  v11 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)a1 != v11) {
    v12 = LANES128(a5).n128_f32[0];
    if (*(_BYTE*)(a1 + 37) == 1) {
      do {
        v17 = *(long double**)(v10 + 8);
        for (i = *(long double**)(v10 + 16); v17 != i; v17 += 10) {
          a5 = *(float32x4_t*)(*((_QWORD*)v17 + 12) + 48LL);
          *((_QWORD*)v17 + 8) = LANES128(a5).n128_u64[0];
          a6 = v17[4];
          *((_QWORD*)v17 + 10) = *(_QWORD*)&a6;
          *((_QWORD*)&a6 + 1) = LANES128(a5).n128_u32[2];
          a7 = v17[5];
          *((_QWORD*)&a7 + 1) = LANES128(a5).n128_u32[2];
          v17[4] = a6;
          v17[5] = a7;
        }
        if (*(_BYTE*)(v10 + 128) == 1) {
          v19 = *(_QWORD*)(v10 + 8);
          if (v19 != *(_QWORD*)(v10 + 16)) {
            v20 = *(float32x4_t**)(v19 + 96);
            a5 = v20[1];
            a6 = COERCE_LONG_DOUBLE(vmulq_f32(a5, a5));
            *(float*)&a7 = COERCE_FLOAT(LANES128(v20[1]).n128_u64[1]);
            *(float*)&a6 = (float)(*((float*)&a6 + 1) +
                                   (float)(LANES128(a5).n128_f32[0] *
                                           LANES128(a5).n128_f32[0])) +
                           (float)(*(float*)&a7 * LANES128(a5).n128_f32[2]);
            LANES128(a5).n128_f32[0] = sqrtf(*(float*)&a6);
            *(_DWORD*)(v10 + 168) = LANES128(a5).n128_u32[0];
          }
        }
        v10 += 176;
      } while (v10 != v11);
      v23 = *(_BYTE**)a1;
      v24 = *(_BYTE**)(a1 + 8);
      if (*(_BYTE*)(a1 + 38) != 0) {
        v25 = 100;
      }
      else {
        v25 = 10;
      }
      if (v23 != v24) {
        for (j = 0; j != v25; ++j) {
          v27 = *(_QWORD*)a1;
          v28 = *(_QWORD*)(a1 + 8);
          if (*(_QWORD*)a1 != v28) {
            do {
              game_templates_a55a00(v27, a2, *(_BYTE*)(a1 + 36), a4 & 1, a3,
                                    v12 * *(float*)(a1 + 24),
                                    *(float*)(a1 + 28), *(float*)(a1 + 32),
                                    *(double*)&a8, a9, a10);
              v27 += 176;
            } while (v27 != v28);
          }
        }
        v23 = *(_BYTE**)a1;
        v24 = *(_BYTE**)(a1 + 8);
      }
      while (v23 != v24) {
        a5 = game_templates_a56ac0(v23, a5, a6, a7, a8);
        v23 += 176;
      }
      *(_BYTE*)(a1 + 37) = 0;
    }
    else {
      do {
        LANES128(a5).n128_u32[0] = *(_DWORD*)(a1 + 24);
        if (LANES128(a5).n128_f32[0] > 0x0.0p+0f) {
          if (*(_BYTE*)(v10 + 128) == 1) {
            v21 = *(_QWORD*)(v10 + 8);
            if (v21 != *(_QWORD*)(v10 + 16)) {
              v22 = *(float32x4_t**)(v21 + 96);
              *(float*)(v10 + 168) = sqrtf(
                  (float)(LANES128_OF(vmulq_f32(v22[1], v22[1])).n128_f32[1] +
                          (float)(COERCE_FLOAT(*(_OWORD*)&v22[1]) *
                                  COERCE_FLOAT(*(_OWORD*)&v22[1]))) +
                  (float)(COERCE_FLOAT(LANES128(v22[1]).n128_u64[1]) *
                          COERCE_FLOAT(LANES128(v22[1]).n128_u64[1])));
              LANES128(a5).n128_u32[0] = *(_DWORD*)(a1 + 24);
            }
          }
          game_templates_a55a00(v10, a2, *(_BYTE*)(a1 + 36), a4 & 1, a3,
                                v12 * LANES128(a5).n128_f32[0],
                                *(float*)(a1 + 28), *(float*)(a1 + 32),
                                *(double*)&a8, a9, a10);
        }
        a5 = game_templates_a56ac0((_BYTE*)v10, a5, a6, a7, a8);
        v10 += 176;
      } while (v10 != v11);
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_a598e0(__int64 a1, __int64* a2,
                                                   __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  float v20;
  _QWORD* v21;
  float v22;
  float v23;
  _BOOL8 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 primeEm;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;

  v4 = *a2;
  v5 = a2[1];
  v8 = std___1___hash_memory(*a2, v5);
  v9 = *(_QWORD*)(a1 + 8);
  v10 = v8;
  if (v9 != 0) {
    v11 = v9 - 1;
    if ((v9 & (v9 - 1)) != 0) {
      v3 = v8;
      if (v8 >= v9) {
        v3 = v8 % v9;
      }
    }
    else {
      v3 = v11 & v8;
    }
    v12 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v12 != nullptr) {
      v13 = (_QWORD*)*v12;
      if (*v12 != 0) {
        if ((v9 & v11) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == v10) {
              if (v13[3] == v5 && memcmp(v13[2], v4, v5) == 0) {
                return;
              }
            }
            else if ((v15 & v11) != v3) {
              goto LABEL_25;
            }
            v13 = (_QWORD*)*v13;
            if (v13 == nullptr) {
              goto LABEL_25;
            }
          }
        }
        do {
          v14 = v13[1];
          if (v14 == v10) {
            if (v13[3] == v5 && memcmp(v13[2], v4, v5) == 0) {
              return;
            }
          }
          else {
            if (v14 >= v9) {
              v14 %= v9;
            }
            if (v14 != v3) {
              break;
            }
          }
          v13 = (_QWORD*)*v13;
        } while (v13 != nullptr);
      }
    }
  }
LABEL_25:
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v18 = *a3;
  v19 = a3[1];
  v20 = *(float*)(a1 + 32);
  v21 = v17;
  *v17 = 0;
  v17[1] = v10;
  v17[2] = v18;
  v17[3] = v19;
  v22 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v9 == 0 || (float)(v20 * (float)v9) < v22) {
    v23 = v22 / v20;
    v24 = true;
    if (v9 >= 3) {
      v24 = (v9 & (v9 - 1)) != 0;
    }
    v25 = v24 | (2 * v9);
    v26 = vcvtps_u64_f32(v23);
    if (v25 <= v26) {
      v27 = v26;
    }
    else {
      v27 = v25;
    }
    if (v27 == 1) {
      v27 = 2;
    }
    else if ((v27 & (v27 - 1)) != 0) {
      primeEm = std___1___next_prime(v27);
      v9 = *(_QWORD*)(a1 + 8);
      v27 = primeEm;
    }
    if (v27 <= v9) {
      if (v27 >= v9) {
        goto LABEL_86;
      }
      v34 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v9 < 3 || (v9 & (v9 - 1)) != 0) {
        v34 = std___1___next_prime(v34);
      }
      else {
        v35 = 1LL << (-(char)__clz(v34 - 1) & 63);
        if (v34 >= 2) {
          v34 = v35;
        }
      }
      if (v27 <= v34) {
        v27 = v34;
      }
      if (v27 >= v9) {
        goto LABEL_86;
      }
      if (v27 == 0) {
        v47 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v47 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*v16 + v48, v47);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_86;
      }
    }
    if (v27 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v29 = fw_memory_HeapManager_Allocate(*v16, 8 * v27, 16, 0);
    v30 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v29;
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v16 + 200) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*v16 + v31, v30);
    }
    v32 = v27 & 7;
    *(_QWORD*)(a1 + 8) = v27;
    if (v27 >= 8) {
      v33 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 48) = 0;
        v36 = *(_QWORD*)a1 + 8 * v33;
        v33 += 8;
        *(_QWORD*)(v36 + 56) = 0;
      } while ((v27 & 0x1FFFFFFFFFFFFFF8LL) != v33);
    }
    else {
      v33 = 0;
    }
    if ((v27 & 7) != 0) {
      v37 = 8 * v33;
      do {
        --v32;
        *(_QWORD*)(*(_QWORD*)a1 + v37) = 0;
        v37 += 8;
      } while (v32 != 0);
    }
    v39 = a1 + 16;
    v38 = *(_QWORD**)(a1 + 16);
    if (v38 != nullptr) {
      v40 = v38[1];
      v41 = v27 - 1;
      if ((v27 & (v27 - 1)) != 0) {
        if (v40 >= v27) {
          v40 %= v27;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v39;
        v42 = (_QWORD*)*v38;
        if (*v38 == 0) {
          goto LABEL_86;
        }
        while (1) {
          v43 = v42[1];
          if (v43 >= v27) {
            v43 %= v27;
          }
          if (v43 != v40) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v38;
              goto LABEL_63;
            }
            *v38 = *v42;
            *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
            v42 = v38;
          }
          v43 = v40;
        LABEL_63:
          v38 = v42;
          v42 = (_QWORD*)*v42;
          v40 = v43;
          if (v42 == nullptr) {
            goto LABEL_86;
          }
        }
      }
      v44 = v40 & v41;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v39;
      while (1) {
        v45 = (_QWORD*)*v38;
        if (*v38 == 0) {
          break;
        }
        v46 = v45[1] & v41;
        if (v46 == v44) {
          v38 = (_QWORD*)*v38;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v46) != 0) {
          *v38 = *v45;
          *v45 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v46);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v46) = v45;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v46) = v38;
          v38 = v45;
          v44 = v46;
        }
      }
    }
  LABEL_86:
    v9 = *(_QWORD*)(a1 + 8);
    if ((v9 & (v9 - 1)) != 0) {
      if (v10 >= v9) {
        v3 = v10 % v9;
      }
      else {
        v3 = v10;
      }
    }
    else {
      v3 = (v9 - 1) & v10;
    }
  }
  v49 = *(_QWORD*)a1;
  v50 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v50 != nullptr) {
    *v21 = *v50;
    *v50 = v21;
  }
  else {
    v51 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v21;
    *v21 = v51;
    *(_QWORD*)(v49 + 8 * v3) = a1 + 16;
    if (*v21 != 0) {
      v52 = *(_QWORD*)(*v21 + 8LL);
      if ((v9 & (v9 - 1)) != 0) {
        if (v52 >= v9) {
          v52 %= v9;
        }
      }
      else {
        v52 &= v9 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v21;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

_QWORD* llvm_libcxx_21_libcxx_include___vector_a993a0(__int64 a1, __int64* a2,
                                                      __int64* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD** v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 primeEm;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;

  v4 = *a2;
  v52 = *a2;
  v7 = std___1___hash_memory((__int64)&v52, 8u);
  v8 = *(_QWORD*)(a1 + 8);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = result[1];
            if (v14 == v9) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v13 = result[1];
          if (v13 == v9) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v16 = *a3;
  v17 = *(float*)(a1 + 32);
  *result = 0;
  result[1] = v9;
  result[2] = v16;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v8 == 0 || (float)(v17 * (float)v8) < v18) {
    v19 = v18 / v17;
    v20 = true;
    if (v8 >= 3) {
      v20 = (v8 & (v8 - 1)) != 0;
    }
    v21 = v20 | (2 * v8);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      primeEm = v22;
    }
    else {
      primeEm = v21;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v24;
      v8 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_84;
      }
      v31 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v44 = result;
        v31 = std___1___next_prime(v31);
        result = v44;
      }
      else {
        v32 = 1LL << (-(char)__clz(v31 - 1) & 63);
        if (v31 >= 2) {
          v31 = v32;
        }
      }
      if (primeEm <= v31) {
        primeEm = v31;
      }
      if (primeEm >= v8) {
        goto LABEL_84;
      }
      if (primeEm == 0) {
        v45 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v45 != 0) {
          v46 = result;
          v47 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free(*v15 + v47, v45);
          result = v46;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_84;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v25 = result;
    v26 = fw_memory_HeapManager_Allocate(*v15, 8 * primeEm, 16, 0);
    v27 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v26;
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v15 + v28, v27);
    }
    v29 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v30 = 0;
      result = v25;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 48) = 0;
        v33 = *(_QWORD*)a1 + 8 * v30;
        v30 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v30);
    }
    else {
      v30 = 0;
      result = v25;
    }
    if ((primeEm & 7) != 0) {
      v34 = 8 * v30;
      do {
        --v29;
        *(_QWORD*)(*(_QWORD*)a1 + v34) = 0;
        v34 += 8;
      } while (v29 != 0);
    }
    v36 = a1 + 16;
    v35 = *(_QWORD**)(a1 + 16);
    if (v35 != nullptr) {
      v37 = v35[1];
      v38 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v37 >= primeEm) {
          v37 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v37) = v36;
        v39 = (_QWORD*)*v35;
        if (*v35 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v40 = v39[1];
          if (v40 >= primeEm) {
            v40 %= primeEm;
          }
          if (v40 != v37) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v40) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
              goto LABEL_61;
            }
            *v35 = *v39;
            *v39 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v40);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v40) = v39;
            v39 = v35;
          }
          v40 = v37;
        LABEL_61:
          v35 = v39;
          v39 = (_QWORD*)*v39;
          v37 = v40;
          if (v39 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v41 = v37 & v38;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
      while (1) {
        v42 = (_QWORD*)*v35;
        if (*v35 == 0) {
          break;
        }
        v43 = v42[1] & v38;
        if (v43 == v41) {
          v35 = (_QWORD*)*v35;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) != 0) {
          *v35 = *v42;
          *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v35;
          v35 = v42;
          v41 = v43;
        }
      }
    }
  LABEL_84:
    v8 = *(_QWORD*)(a1 + 8);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v48 = *(_QWORD*)a1;
  v49 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v49 != nullptr) {
    *result = *v49;
    *v49 = result;
  }
  else {
    v50 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v50;
    *(_QWORD*)(v48 + 8 * v3) = a1 + 16;
    if (*result != 0) {
      v51 = *(_QWORD*)(*result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v51 >= v8) {
          v51 %= v8;
        }
      }
      else {
        v51 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

void llvm_libcxx_21_libcxx_include___vector_a9ac50(_QWORD* a1, __int64 a2,
                                                   int a3)
{
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  __int128 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int128 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  *(long double*)&v6 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a2 + 16LL))(a2),
         v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
         v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v38 = v7;
  v40 = v6;
  v34 = v9;
  v36 = v8;
  *(long double*)&v10 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a2 + 24LL))(a2),
         v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
         v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
         v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v41 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v10, LANES128(v40).n128_f32[0]), v11,
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]), 1),
      v12, v40, 2);
  v39 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v10, LANES128(v38).n128_f32[0]), v11,
                     COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]), 1),
      v12, v38, 2);
  v37 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v10, LANES128(v36).n128_f32[0]), v11,
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
      v12, v36, 2);
  v35 = vaddq_f32(
      v13,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v10, LANES128(v34).n128_f32[0]), v11,
                         COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1),
          v12, v34, 2));
  (*(void (**)(__int64))(*(_QWORD*)a2 + 40LL))(a2),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v15 = a1[14];
  v16 = a1[15];
  if (v15 >= v16) {
    v18 = a1[13];
    v19 = v15 - v18;
    v20 = 1 - 0x5555555555555555LL * ((__int64)(v15 - v18) >> 5);
    if (v20 > 0x2AAAAAAAAAAAAAALL) {
      GameRoutine_a9b830(),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v21 = fw_memory_g_heap_manager_ptr;
    v22 = v39;
    v23 = v41;
    v25 = v35;
    v24 = v37;
    v26 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v16 - v18) >> 5);
    if (2 * v26 > v20) {
      v20 = 2 * v26;
    }
    if (v26 >= 0x155555555555555LL) {
      v27 = 0x2AAAAAAAAAAAAAALL;
    }
    else {
      v27 = v20;
    }
    if (v27 != 0) {
      v33 = v14;
      if (v27 > 0x2AAAAAAAAAAAAAALL) {
        GameRoutine_60a210(),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v13 =
                COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v27, 16, 0),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v22 = v39;
      v23 = v41;
      v25 = v35;
      v24 = v37;
      v29 = v28;
      v14 = v33;
    }
    else {
      v29 = 0;
    }
    v30 = v29 + v19;
    v31 = v29 + 96 * v27;
    *(float32x4_t*)v30 = v23;
    *(float32x4_t*)(v30 + 16) = v22;
    v17 = v29 + v19 + 96;
    *(_OWORD*)(v30 + 64) = v14;
    *(_DWORD*)(v30 + 80) = a3;
    *(float32x4_t*)(v30 + 32) = v24;
    *(float32x4_t*)(v30 + 48) = v25;
    memcpy(v29, v18, v19),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
    a1[13] = v29;
    a1[14] = v17;
    a1[15] = v31;
    if (v18 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v32, v18),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  else {
    *(_OWORD*)(v15 + 64) = v14;
    v17 = v15 + 96;
    *(_DWORD*)(v15 + 80) = a3;
    *(float32x4_t*)v15 = v41;
    *(float32x4_t*)(v15 + 16) = v39;
    *(float32x4_t*)(v15 + 32) = v37;
    *(float32x4_t*)(v15 + 48) = v35;
  }
  a1[14] = v17;
}

_QWORD* llvm_libcxx_21_libcxx_include___vector_a9afa0(_QWORD* result,
                                                      __int64 a2)
{
  __int64 v2;
  float32x4_t* v3;
  __int64* v4;
  float32x4_t v5;
  float32x4_t v6;
  __int64 v7;
  unsigned __int64 v8;
  float32x4_t v9;
  char v10;
  __int64 i;
  __int64 v12;
  float32x4_t* v13;
  unsigned __int64 v14;
  __int64 v15;
  float32x4_t* v16;
  int* v17;
  int* v18;
  __int64 v19;
  float32x4_t* v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t* v25;
  float32x4_t* v26;
  float32x4_t v27;
  __int64 v28;
  int v29;
  __int64 v30;
  signed __int32 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  float v42;
  __int64 v43;
  __int64 v44;
  float v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  unsigned __int64 v50;
  float32x2_t v51;
  float* v52;
  float32x2_t v53;
  __int64 v54;
  float32x4_t v55;
  __int64 v56;
  float32x4_t v57;
  float v58;
  float v59;
  float32x4_t v60;
  float32x4_t v61;
  float v62;
  __int64 v63;
  float32x4_t v64;
  float32x4_t v65;
  float v66;
  float32x4_t v67;
  float32x4_t v68;
  float v69;
  float v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  int v83;
  int v84;
  __int64 v85;
  float v86;
  int v87;
  int v88;
  float32x4_t v89;
  __int64 v90;
  int v91;
  __int64 v92;
  __int64 v93;
  float* v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  int8x16_t v98;
  float v99;
  float v100;
  int v101;
  float v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  int8x16_t v107;
  int v108;
  int* v109;
  int* v110;
  int v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  int v114;
  int v115;
  int v116;
  int v117;

  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = *(_QWORD*)(*result + 16632LL);
  if (*(_QWORD*)(*result + 16616LL) != 0) {
    v2 = *(_QWORD*)(*result + 16616LL);
  }
  v3 = (float32x4_t*)(result[7] + 224 * a2);
  if (LANES128(v3[11]).n128_u8[9] == 1 &&
      (LANES128(v3[11]).n128_u8[10] & 1) == 0 &&
      LANES128(v3[11]).n128_u8[8] == 1) {
    v4 = (__int64*)GameData_2132398[0];
    v5 = COERCE_AS(float32x4_t, GameData_1a82f20);
    v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
    v7 = *(_QWORD*)GameData_2132398[0] + 112LL * LANES128(v3[11]).n128_i32[0];
    v8 = LANES128(v3[8]).n128_u64[0];
    v9 = *(float32x4_t*)(v7 + 80);
    v10 = *(_BYTE*)(v7 + 96);
    v3[9] = COERCE_AS(float32x4_t, GameData_1a82f20);
    v3[10] = COERCE_AS(float32x4_t, GameData_1a82ea0);
    if (v8 != 0) {
      v5 = COERCE_AS(float32x4_t, GameData_1a82f20);
      v6 = COERCE_AS(float32x4_t, GameData_1a82ea0);
      for (i = 0; i != v8; ++i) {
        v12 = result[1];
        v13 = &v3[2 * i];
        v14 = LANES128(*(v13)).n128_u64[0];
        if (*(unsigned __int16*)(v12 + 50) ==
                HIWORD(LANES128(*(v13)).n128_u64[0]) &&
            *(unsigned __int16*)((v15 = *(_QWORD*)(v12 + 88)) +
                                 16LL * (unsigned int)v14 + 8) == WORD2(v14)) {
          v16 = *(float32x4_t**)(v15 + 16LL * (unsigned int)v14);
        }
        else {
          v16 = nullptr;
        }
        v18 = (int*)LANES128(*(v13)).n128_u64[1];
        v17 = (int*)LANES128(v13[1]).n128_u64[0];
        if (v18 == v17) {
          v5 = vminq_f32(v5, v16[3]);
          v3[9] = v5;
          v6 = vmaxq_f32(v6, v16[4]);
          v3[10] = v6;
        }
        else {
          do {
            v19 = *v18++;
            v20 = (float32x4_t*)(LANES128(v16[5]).n128_u64[0] + 32 * v19);
            v5 = vminq_f32(v5, *v20);
            v3[9] = v5;
            v6 = vmaxq_f32(v6, v20[1]);
            v3[10] = v6;
          } while (v18 != v17);
        }
      }
    }
    if ((v10 & 1) != 0) {
      v21 = vaddq_f32(v6, v5);
      LANES128(v22).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v22).n128_u64[1] = 0x3F0000003F000000LL;
      v23 = vmulq_f32(v21, v22);
      v24 = vmulq_f32(v9, v22);
      v3[9] = vsubq_f32(v23, v24);
      v3[10] = vaddq_f32(v24, v23);
    }
    v25 = (float32x4_t*)result[13];
    v26 = (float32x4_t*)result[14];
    if (v25 != v26) {
      LANES128(v27).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v27).n128_u64[1] = 0x3F0000003F000000LL;
      while (1) {
        v28 =
            LANES128(v3[12]).n128_u64[0] + 24LL * LANES128(v25[5]).n128_i32[0];
        if ((*(_BYTE*)(v28 + 20) & 1) != 0) {
          goto LABEL_23;
        }
        if ((*(_BYTE*)(v28 + 21) & 1) != 0) {
          goto LABEL_23;
        }
        if ((*(_BYTE*)(v28 + 22) & 1) != 0) {
          goto LABEL_23;
        }
        v29 = *(_DWORD*)(v28 + 8);
        if (v29 == 3) {
          goto LABEL_23;
        }
        v30 = *(_QWORD*)(*result + 16632LL);
        if (*(_QWORD*)(*result + 16616LL) != 0) {
          v30 = *(_QWORD*)(*result + 16616LL);
        }
        if (*(_BYTE*)(v30 + 56) == 1) {
          v31 = LANES128(v3[11]).n128_i32[0];
          v32 = *v4;
          v33 = v30 + 12LL * LANES128(v3[11]).n128_i32[1];
          v34 = *v4 + 112LL * v31;
          v35 = *(float*)(v33 + 76);
          v38 = *(_DWORD*)(v34 + 32);
          v36 = v34 + 32;
          v37 = v38;
          v39 = *(_DWORD*)(v33 + 68);
          v40 = *(_DWORD*)(v33 + 72);
          v41 = *(_DWORD*)(v36 + 32);
          v42 = *(float*)(v30 + 64) * v35;
          if (v41 < v40) {
            v40 = *(_DWORD*)(v36 + 32);
          }
          if (v37 == 1) {
            v89 = v3[10];
            v90 = 112LL * v31;
            v91 = v39 <= v40 ? v40 : v39;
            v84 = v39 - 1;
            v92 = v32 + v90 + 4LL * v39;
            v93 = v91 - (__int64)v39;
            v94 = (float*)(v92 + 36);
            v95 = vmulq_f32(vaddq_f32(v89, v3[9]), v27);
            v96 = vsubq_f32(v89, v95);
            v97 = vsubq_f32(vmaxq_f32(vabdq_f32(v25[4], v95), v96), v96);
            v98 = vmulq_f32(v97, v97);
            LANES128(v98).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v98, v98, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0])))
                    .n64_u64[0];
            LODWORD(v99) =
                LANES64_OF(
                    vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0]))))
                    .n64_u32[0];
            while (v93 != 0) {
              v100 = *v94++;
              ++v84;
              --v93;
              if (v99 <= (float)(v42 * v100)) {
                goto LABEL_101;
              }
            }
            v84 = v91;
          LABEL_101:
            if (v84 >= v41) {
              v101 = v41 - 1;
              if (*(_BYTE*)(v30 + 57) != 0) {
                v84 = -2;
              }
              else {
                v84 = v101;
              }
            }
          }
          else {
            if (v37 != 0) {
              goto LABEL_135;
            }
            v43 = LANES128(v3[9]).n128_u32[1];
            v44 = LANES128(v3[10]).n128_u32[1];
            v45 = 0x1.0000000000000p+0f / v42;
            v46 = *v25;
            v47 = v25[1];
            v49 = v25[2];
            v48 = v25[3];
            v50 = LANES128(v3[10]).n128_u32[0] |
                  ((unsigned __int64)(unsigned int)v44 << 32);
            LANES64(v51).n64_u64[0] =
                LANES128(v3[9]).n128_u32[0] | (unsigned __int64)(v44 << 32);
            v52 = (float*)(v32 + 112LL * v31 + 4LL * v39 + 36);
            PSEUDO_LOW_LANE64(v53, n64_u64, v50);
            v54 = LANES128(v3[10]).n128_u32[2];
            v55 = vmlaq_lane_f32(vmulq_n_f32(*v25, LANES64(v53).n64_f32[0]),
                                 v47, v53, 1);
            v56 = LANES128(v3[9]).n128_u32[2] | 0x3F80000000000000LL;
            v57 = vmlaq_lane_f32(
                vmlaq_n_f32(v55, v49, LANES128(v3[9]).n128_f32[2]), v48,
                COERCE_AS(float32x2_t, v56), 1);
            v58 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v57).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]), 1);
            v59 = 0x1.fffffe0000000p+127f;
            if (v58 <= 0x1.fffffe0000000p+127f) {
              v59 = v58;
            }
            if (v58 < -0x1.fffffe0000000p+127f) {
              v58 = -0x1.fffffe0000000p+127f;
            }
            v60 = vmlaq_lane_f32(vmulq_n_f32(v46, LANES64(v51).n64_f32[0]), v47,
                                 v51, 1);
            v61 = vmlaq_lane_f32(
                vmlaq_n_f32(v60, v49, LANES128(v3[9]).n128_f32[2]), v48,
                COERCE_AS(float32x2_t, v56), 1);
            v62 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v61).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]), 1);
            if (v59 >= v62) {
              v59 = v62;
            }
            if (v62 >= v58) {
              v58 = v62;
            }
            v63 = v54 | 0x3F80000000000000LL;
            v64 = vmlaq_lane_f32(
                vmulq_n_f32(v46, LANES128(v3[9]).n128_f32[0]), v47,
                COERCE_AS(float32x2_t,
                          (LANES128(v3[9]).n128_u32[0] |
                           ((unsigned __int64)(unsigned int)v43 << 32))),
                1);
            v65 = vmlaq_lane_f32(
                vmlaq_n_f32(v64, v49, LANES128(v3[9]).n128_f32[2]), v48,
                COERCE_AS(float32x2_t, v56), 1);
            v66 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v65).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]), 1);
            if (v59 >= v66) {
              v59 = v66;
            }
            if (v66 >= v58) {
              v58 = v66;
            }
            v67 = vmlaq_lane_f32(
                vmulq_n_f32(v46, LANES128(v3[10]).n128_f32[0]), v47,
                COERCE_AS(float32x2_t, (LANES128(v3[10]).n128_u32[0] |
                                        (unsigned __int64)(v43 << 32))),
                1);
            v68 = vmlaq_lane_f32(
                vmlaq_n_f32(v67, v49, LANES128(v3[9]).n128_f32[2]), v48,
                COERCE_AS(float32x2_t, v56), 1);
            v69 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v68).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]), 1);
            if (v59 >= v69) {
              v70 = v69;
            }
            else {
              v70 = v59;
            }
            if (v69 < v58) {
              v69 = v58;
            }
            v71 = vmlaq_lane_f32(vmlaq_n_f32(v55, v49, *(float*)&v54), v48,
                                 COERCE_AS(float32x2_t, v63), 1);
            v72 = vmlaq_lane_f32(vmlaq_n_f32(v60, v49, *(float*)&v54), v48,
                                 COERCE_AS(float32x2_t, v63), 1);
            v73 = vmlaq_lane_f32(vmlaq_n_f32(v64, v49, *(float*)&v54), v48,
                                 COERCE_AS(float32x2_t, v63), 1);
            v74 = vmlaq_lane_f32(vmlaq_n_f32(v67, v49, *(float*)&v54), v48,
                                 COERCE_AS(float32x2_t, v63), 1);
            v75 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v71).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]), 1);
            v76 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v74).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]), 1);
            if (v70 >= v75) {
              v70 = v75;
            }
            if (v75 < v69) {
              v75 = v69;
            }
            v77 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v72).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]), 1);
            if (v70 >= v77) {
              v70 = v77;
            }
            if (v77 >= v75) {
              v75 = v77;
            }
            v78 = vmuls_lane_f32(
                0x1.0000000000000p+0f / LANES128(v73).n128_f32[3],
                COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]), 1);
            if (v70 >= v78) {
              v70 = v78;
            }
            if (v78 >= v75) {
              v75 = v78;
            }
            if (v70 >= v76) {
              v79 = v76;
            }
            else {
              v79 = v70;
            }
            if (v76 < v75) {
              v76 = v75;
            }
            v80 = vabds_f32(v76, v79) * 0x1.0000000000000p-1f;
            v81 = v80 <= 0x1.0000000000000p+0f ? v80 : 0x1.0000000000000p+0f;
            v82 = v80 >= 0x0.0p+0f ? v81 : 0x0.0p+0f;
            v83 = v39 <= v40 ? v40 : v39;
            v84 = v39 - 1;
            v85 = v83 - (__int64)v39;
            while (v85 != 0) {
              v86 = *v52++;
              ++v84;
              --v85;
              if (v82 >= (float)(v45 * v86)) {
                goto LABEL_106;
              }
            }
            v84 = v83;
          LABEL_106:
            if (v84 >= v41) {
              v84 = v41 - 1;
              if (*(_BYTE*)(v30 + 57) == 1) {
                v102 = *(float*)(v36 + 36);
                if (v102 <= 0x0.0p+0f) {
                  v84 = -2;
                }
                else {
                  v103 = v3[10];
                  v104 = vmulq_f32(vaddq_f32(v103, v3[9]), v27);
                  v105 = vsubq_f32(v103, v104);
                  v106 =
                      vsubq_f32(vmaxq_f32(vabdq_f32(v25[4], v104), v105), v105);
                  v107 = vmulq_f32(v106, v106);
                  LANES128(v107).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(
                              COERCE_AS(float32x2_t,
                                        LANES128_OF(vextq_s8(v107, v107, 8u))
                                            .n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v107).n128_u64[0])))
                          .n64_u64[0];
                  if (v102 <=
                      LANES64_OF(vsqrt_f32(vpadd_f32(
                                     COERCE_AS(float32x2_t,
                                               LANES128(v107).n128_u64[0]),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v107).n128_u64[0]))))
                          .n64_f32[0]) {
                    v84 = -2;
                  }
                }
              }
            }
          }
        }
        else {
          v84 = 0;
        }
        if (*(_BYTE*)(v2 + 58) != 1 || *(_BYTE*)(v7 + 97) != 1) {
          break;
        }
        if (v29 > 1) {
          if (v29 != 2) {
            goto LABEL_135;
          }
          v108 = *(_DWORD*)v28;
          *(_DWORD*)(v28 + 4) = v84;
          if (v108 != v84) {
            goto LABEL_23;
          }
          goto LABEL_91;
        }
        if (v29 == 0) {
          break;
        }
        if (v29 != 1) {
        LABEL_135:
          nn_detail_UnexpectedDefaultImpl(),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        v87 = *(_DWORD*)v28;
        *(_DWORD*)(v28 + 4) = v84;
        if (v87 != v84) {
          v88 = 2;
        LABEL_92:
          *(_DWORD*)(v28 + 8) = v88;
        }
      LABEL_23:
        v25 += 6;
        if (v25 == v26) {
          goto LABEL_115;
        }
      }
      *(_DWORD*)v28 = v84;
      *(_DWORD*)(v28 + 4) = v84;
    LABEL_91:
      v88 = 1;
      goto LABEL_92;
    }
  LABEL_115:
    v109 = (int*)result[16];
    v110 = (int*)result[17];
    if (v109 != v110) {
      while (1) {
        v112 = LANES128(v3[12]).n128_u64[0];
        v113 = v112 + 24LL * v109[1];
        if ((*(_BYTE*)(v113 + 20) & 1) != 0) {
          goto LABEL_120;
        }
        if ((*(_BYTE*)(v113 + 21) & 1) != 0) {
          goto LABEL_120;
        }
        if ((*(_BYTE*)(v113 + 22) & 1) != 0) {
          goto LABEL_120;
        }
        v114 = *(_DWORD*)(v113 + 8);
        if (v114 == 3) {
          goto LABEL_120;
        }
        v115 = *(_DWORD*)(v112 + 24LL * *v109 + 4);
        if (*(_BYTE*)(v2 + 58) != 1 || *(_BYTE*)(v7 + 97) != 1 || v114 == 0) {
          break;
        }
        if (v114 == 2) {
          v117 = *(_DWORD*)v113;
          *(_DWORD*)(v113 + 4) = v115;
          if (v117 != v115) {
            goto LABEL_120;
          }
          goto LABEL_118;
        }
        if (v114 != 1) {
          goto LABEL_135;
        }
        v116 = *(_DWORD*)v113;
        *(_DWORD*)(v113 + 4) = v115;
        if (v116 != v115) {
          v111 = 2;
          goto LABEL_119;
        }
      LABEL_120:
        v109 += 2;
        if (v109 == v110) {
          goto LABEL_134;
        }
      }
      *(_DWORD*)v113 = v115;
      *(_DWORD*)(v113 + 4) = v115;
    LABEL_118:
      v111 = 1;
    LABEL_119:
      *(_DWORD*)(v113 + 8) = v111;
      goto LABEL_120;
    }
  }
LABEL_134:
  LANES128(v3[11]).n128_u8[9] = 0;
  return result;
}

void llvm_libcxx_21_libcxx_include___vector_ad0a00(_BYTE* a1, float* a2)
{
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  bool v21;
  int v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  __int64 v27;
  float v28;
  __int64 v29;
  float v30;
  float* v31;
  float* v32;
  float v33;
  float v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  float v40;
  __int64 v41;
  float v42;
  __int64 v43;
  float v44;
  __int64 v45;
  float v46;
  float* v47;
  bool v48;
  float v49;

  v3 = 128;
  if (a1[96] != 0) {
    v3 = 92;
  }
  v4 = *(_DWORD*)&a1[v3];
  if (v4 >= 5) {
    v4 = 5;
  }
  v5 = 208;
  if (a1[176] != 0) {
    v5 = 172;
  }
  v6 = *(_DWORD*)&a1[v5];
  v7 = v4 - v6;
  if (v4 - v6 <= 2) {
    v8 = 2;
  }
  else {
    v8 = (unsigned int)v7;
  }
  v9 = 288;
  if (a1[256] != 0) {
    v9 = 252;
  }
  v10 = *(float*)&a1[v9];
  *a2 = v10;
  v11 = v10 + 0x1.0000000000000p+0f;
  v12 = 760;
  if (a1[730] != 0) {
    v12 = 729;
  }
  if ((a1[v12] & 1) != 0) {
    v13 = v8 + v6;
    v14 = 608;
    if (a1[576] != 0) {
      v14 = 572;
    }
    v15 = *(float*)&a1[v14];
    if (v15 >= v11) {
      v16 = *(float*)&a1[v14];
    }
    else {
      v16 = v10 + 0x1.0000000000000p+0f;
    }
    v17 = 688;
    if (a1[656] != 0) {
      v17 = 652;
    }
    v18 = *(float*)&a1[v17];
    v19 = v16 + 0x1.0000000000000p+0f;
    if (v18 >= (float)(v16 + 0x1.0000000000000p+0f)) {
      v19 = *(float*)&a1[v17];
    }
    v20 = 840;
    if (a1[808] != 0) {
      v20 = 804;
    }
    v49 = v19;
    v21 = v18 > v15 && v13 > 4;
    if (v21) {
      v22 = 4;
    }
    else {
      v22 = v8 + v6;
    }
    if (v6 <= 1) {
      v23 = 1;
    }
    else {
      v23 = (unsigned int)v6;
    }
    if (v22 >= 5) {
      v24 = 5;
    }
    else {
      v24 = (unsigned int)v22;
    }
    if ((int)v23 < (int)v24) {
      v48 = v18 > v15 && v13 > 4;
      v25 = (float)v22;
      v26 = v16 - v10;
      v27 = v23;
      v28 = *(float*)&a1[v20];
      v29 = ((int)v24 - (int)v23) & 3LL;
      v30 = 0x1.0000000000000p+0f - v28;
      if (v29 != 0) {
        v27 = v23;
        v31 = &a2[-v6];
        do {
          --v29;
          v31[v27] =
              (float)(PSEUDO_UNFUSED(
                  v30 * (float)(v10 + (float)((float)((float)(unsigned int)v27 /
                                                      v25) *
                                              v26)))) +
              (float)(v28 *
                      (float)(v10 *
                              powf(v16 / v10, (float)(unsigned int)v27 / v25)));
          ++v27;
        } while (v29 != 0);
      }
      v21 = v48;
      if ((unsigned __int64)(v23 - v24) <= 0xFFFFFFFFFFFFFFFCLL) {
        v32 = &a2[v27 - v6 + 2];
        do {
          *(v32 - 2) =
              (float)(PSEUDO_UNFUSED(
                  v30 * (float)(v10 + (float)((float)((float)(unsigned int)v27 /
                                                      v25) *
                                              v26)))) +
              (float)(v28 *
                      (float)(v10 *
                              powf(v16 / v10, (float)(unsigned int)v27 / v25)));
          *(v32 - 1) =
              (float)(PSEUDO_UNFUSED(
                  v30 *
                  (float)(v10 + (float)((float)((float)(unsigned int)(v27 + 1) /
                                                v25) *
                                        v26)))) +
              (float)(v28 * (float)(v10 * powf(v16 / v10,
                                               (float)(unsigned int)(v27 + 1) /
                                                   v25)));
          *v32 =
              (float)(PSEUDO_UNFUSED(
                  v30 *
                  (float)(v10 + (float)((float)((float)(unsigned int)(v27 + 2) /
                                                v25) *
                                        v26)))) +
              (float)(v28 * (float)(v10 * powf(v16 / v10,
                                               (float)(unsigned int)(v27 + 2) /
                                                   v25)));
          v33 = (float)(unsigned int)(v27 + 3) / v25;
          v27 += 4;
          v32[1] =
              (float)(PSEUDO_UNFUSED(v30 * (float)(v10 + (float)(v33 * v26)))) +
              (float)(v28 * (float)(v10 * powf(v16 / v10, v33)));
          v32 += 4;
        } while (v27 != v24);
      }
    }
    v34 = v49;
    a2[v22 - v6] = v16;
    v35 = v8;
    if (!v21) {
      v34 = v16;
    }
  }
  else {
    v35 = (5 - v6) & ~((5 - v6) >> 31);
    v36 = 368;
    if (a1[336] != 0) {
      v36 = 332;
    }
    if (*(float*)&a1[v36] >= v11) {
      v11 = *(float*)&a1[v36];
    }
    v37 = 448;
    if (a1[416] != 0) {
      v37 = 412;
    }
    v38 = *(float*)&a1[v37];
    if (v38 < (float)(v11 + 0x1.0000000000000p+0f)) {
      v38 = v11 + 0x1.0000000000000p+0f;
    }
    v39 = 528;
    if (a1[496] != 0) {
      v39 = 492;
    }
    v40 = *(float*)&a1[v39];
    if (v40 < (float)(v38 + 0x1.0000000000000p+0f)) {
      v40 = v38 + 0x1.0000000000000p+0f;
    }
    v41 = 608;
    if (a1[576] != 0) {
      v41 = 572;
    }
    v42 = *(float*)&a1[v41];
    if (v42 < (float)(v40 + 0x1.0000000000000p+0f)) {
      v42 = v40 + 0x1.0000000000000p+0f;
    }
    v43 = 688;
    if (a1[656] != 0) {
      v43 = 652;
    }
    v44 = *(float*)&a1[v43];
    v34 = v42 + 0x1.0000000000000p+0f;
    a2[(1 - v6) & ~((1 - v6) >> 31)] = v11;
    a2[(2 - v6) & ~((2 - v6) >> 31)] = v38;
    if (v44 >= (float)(v42 + 0x1.0000000000000p+0f)) {
      v34 = v44;
    }
    a2[(3 - v6) & ~((3 - v6) >> 31)] = v40;
    a2[(4 - v6) & ~((4 - v6) >> 31)] = v42;
  }
  a2[v35] = v34;
  if (v7 <= 4) {
    v45 = (5 - (_BYTE)v8) & 7;
    if (((5 - (_BYTE)v8) & 7) != 0) {
      v46 = a2[(unsigned int)v8];
      v47 = &a2[v8 + 1];
      do {
        *v47++ = v46;
        --v45;
      } while (v45 != 0);
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_ad0e40(float* a1, __int64 a2,
                                                   unsigned __int64 a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  unsigned __int64 v31;
  float v32;
  _QWORD* v33;
  __int64 v34;
  float v35;
  float v36;
  _BOOL8 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 primeEm;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  _QWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    char* v72;
  } v70_;
  struct {
    __int64 v73;
    __int64 v74;
  } v73_;
  struct {
    _QWORD v75[2];
    char* v76;
  } v75_;

  llvm_libcxx_21_libcxx_include___vector_ad1560((void*)(v75_.v75), a2, a3);
  v7 = *(_QWORD*)a1;
  v73_.v73 = 0;
  v73_.v74 = 0;
  if ((v75_.v75[0] & 1) != 0) {
    v8 = v75_.v75[1];
  }
  else {
    v8 = (unsigned __int64)LOBYTE(v75_.v75[0]) >> 1;
  }
  if ((v75_.v75[0] & 1) != 0) {
    v9 = v75_.v76;
  }
  else {
    v9 = (char*)v75_.v75 + 1;
  }
  v10 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
      **(_QWORD**)(v7 + 13432) + 32LL))(*(_QWORD*)(v7 + 13432), v9, v8,
                                        &v73_.v73);
  if (v73_.v74 != 0) {
    std___1___shared_weak_count___release_weak(v73_.v74);
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (a3 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                16, 0);
    v70_.v71 = a3;
    v70_.v72 = v11;
    v70_.v70 = v12 | 1;
  }
  else {
    LOBYTE(v70_.v70) = 2 * a3;
    v11 = (char*)&v70_.v70 + 1;
    if (a3 == 0) {
      goto LABEL_18;
    }
  }
  memmove((__int64)v11, a2, a3);
LABEL_18:
  v11[a3] = 0;
  if ((v70_.v70 & 1) != 0) {
    v13 = v70_.v72;
  }
  else {
    v13 = (char*)&v70_.v70 + 1;
  }
  if ((v70_.v70 & 1) != 0) {
    v14 = v70_.v71;
  }
  else {
    v14 = (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
  }
  v15 = std___1___hash_memory((__int64)v13, v14);
  v16 = *((_QWORD*)a1 + 3);
  v17 = v15;
  if (v16 == 0) {
    goto LABEL_59;
  }
  v18 = v16 - 1;
  if ((v16 & (v16 - 1)) != 0) {
    v3 = v15;
    if (v15 >= v16) {
      v3 = v15 % v16;
    }
  }
  else {
    v3 = v18 & v15;
  }
  v19 = *(__int64***)(*((_QWORD*)a1 + 2) + 8 * v3);
  if (v19 == nullptr || (v20 = *v19, *v19 == nullptr)) {
  LABEL_59:
    v29 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 48,
                                                  16, 0);
    v30 = v70_.v70;
    v31 = v70_.v71;
    v32 = a1[12];
    v33 = v29;
    *v29 = 0;
    v29[1] = v17;
    v70_.v70 = 0;
    v70_.v71 = 0;
    v29[2] = v30;
    v29[3] = v31;
    v34 = (__int64)v70_.v72;
    v70_.v72 = nullptr;
    v29[4] = v34;
    v29[5] = v10;
    v35 = (float)(unsigned __int64)(*((_QWORD*)a1 + 5) + 1LL);
    if (v16 != 0 && (float)(v32 * (float)v16) >= v35) {
    LABEL_125:
      v64 = *((_QWORD*)a1 + 2);
      v65 = *(_QWORD**)(v64 + 8 * v3);
      if (v65 != nullptr) {
        *v33 = *v65;
        *v65 = v33;
      }
      else {
        v66 = *((_QWORD*)a1 + 4);
        *((_QWORD*)a1 + 4) = v33;
        *v33 = v66;
        *(_QWORD*)(v64 + 8 * v3) = a1 + 8;
        if (v66 != 0) {
          v67 = *(_QWORD*)(v66 + 8);
          if ((v16 & (v16 - 1)) != 0) {
            if (v67 >= v16) {
              v67 %= v16;
            }
          }
          else {
            v67 &= v16 - 1;
          }
          *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v67) = v33;
        }
      }
      ++*((_QWORD*)a1 + 5);
      if ((v70_.v70 & 1) != 0) {
        goto LABEL_134;
      }
      goto LABEL_138;
    }
    v36 = v35 / v32;
    v37 = true;
    if (v16 >= 3) {
      v37 = (v16 & (v16 - 1)) != 0;
    }
    v38 = v37 | (2 * v16);
    v39 = vcvtps_u64_f32(v36);
    if (v38 <= v39) {
      primeEm = v39;
    }
    else {
      primeEm = v38;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v41 = *((_QWORD*)a1 + 3);
    if (primeEm <= v41) {
      if (primeEm >= v41) {
        goto LABEL_120;
      }
      v47 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 5) / a1[12]);
      if (v41 < 3 || (v41 & (v41 - 1)) != 0) {
        v47 = std___1___next_prime(v47);
      }
      else {
        v48 = 1LL << (-(char)__clz(v47 - 1) & 63);
        if (v47 >= 2) {
          v47 = v48;
        }
      }
      if (primeEm <= v47) {
        primeEm = v47;
      }
      if (primeEm >= v41) {
        goto LABEL_120;
      }
      if (primeEm == 0) {
        v62 = *((_QWORD*)a1 + 2);
        *((_QWORD*)a1 + 2) = 0;
        if (v62 != 0) {
          v63 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v63, v62);
        }
        *((_QWORD*)a1 + 3) = 0;
        goto LABEL_120;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v42 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * primeEm,
                                         16, 0);
    v43 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v42;
    if (v43 != 0) {
      v44 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v44, v43);
    }
    v45 = primeEm & 7;
    *((_QWORD*)a1 + 3) = primeEm;
    if (primeEm >= 8) {
      v46 = 0;
      do {
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v46) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v46 + 8) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v46 + 16) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v46 + 24) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v46 + 32) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v46 + 40) = 0;
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v46 + 48) = 0;
        v49 = *((_QWORD*)a1 + 2) + 8 * v46;
        v46 += 8;
        *(_QWORD*)(v49 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v46);
    }
    else {
      v46 = 0;
    }
    if ((primeEm & 7) != 0) {
      v50 = 8 * v46;
      do {
        --v45;
        *(_QWORD*)(*((_QWORD*)a1 + 2) + v50) = 0;
        v50 += 8;
      } while (v45 != 0);
    }
    v52 = (__int64*)(a1 + 8);
    v51 = *((_QWORD**)a1 + 4);
    if (v51 != nullptr) {
      v53 = v51[1];
      v54 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v53 >= primeEm) {
          v53 %= primeEm;
        }
        *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v53) = v52;
        v55 = (_QWORD*)*v51;
        if (*v51 == 0) {
          goto LABEL_120;
        }
        while (1) {
          v56 = v55[1];
          if (v56 >= primeEm) {
            v56 %= primeEm;
          }
          if (v56 != v53) {
            v57 = *((_QWORD*)a1 + 2);
            if (*(_QWORD*)(v57 + 8 * v56) == 0) {
              *(_QWORD*)(v57 + 8 * v56) = v51;
              goto LABEL_97;
            }
            *v51 = *v55;
            *v55 = **(_QWORD**)(*((_QWORD*)a1 + 2) + 8 * v56);
            **(_QWORD**)(*((_QWORD*)a1 + 2) + 8 * v56) = v55;
            v55 = v51;
          }
          v56 = v53;
        LABEL_97:
          v51 = v55;
          v55 = (_QWORD*)*v55;
          v53 = v56;
          if (v55 == nullptr) {
            goto LABEL_120;
          }
        }
      }
      v58 = v53 & v54;
      *(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * v58) = v52;
      while (1) {
        v59 = (_QWORD*)*v51;
        if (*v51 == 0) {
          break;
        }
        v60 = v59[1] & v54;
        if (v60 == v58) {
          v51 = (_QWORD*)*v51;
        }
        else {
          v61 = *((_QWORD*)a1 + 2);
          if (*(_QWORD*)(v61 + 8 * v60) != 0) {
            *v51 = *v59;
            *v59 = **(_QWORD**)(*((_QWORD*)a1 + 2) + 8 * v60);
            **(_QWORD**)(*((_QWORD*)a1 + 2) + 8 * v60) = v59;
          }
          else {
            *(_QWORD*)(v61 + 8 * v60) = v51;
            v51 = v59;
            v58 = v60;
          }
        }
      }
    }
  LABEL_120:
    v16 = *((_QWORD*)a1 + 3);
    if ((v16 & (v16 - 1)) != 0) {
      if (v17 >= v16) {
        v3 = v17 % v16;
      }
      else {
        v3 = v17;
      }
    }
    else {
      v3 = (v16 - 1) & v17;
    }
    goto LABEL_125;
  }
  if ((v16 & v18) == 0) {
    while (1) {
      v25 = v20[1];
      if (v25 == v17) {
        v26 = *((unsigned __int8*)v20 + 16);
        v27 = v20[3];
        if ((v26 & 1) == 0) {
          v27 = v26 >> 1;
        }
        if (v27 == v14) {
          v28 = (v26 & 1) != 0 ? v20[4] : (__int64)v20 + 17;
          if (memcmp(v28, (__int64)v13, v14) == 0) {
            goto LABEL_57;
          }
        }
      }
      else if ((v25 & v18) != v3) {
        goto LABEL_59;
      }
      v20 = (__int64*)*v20;
      if (v20 == nullptr) {
        goto LABEL_59;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v17) {
      break;
    }
    if (v21 >= v16) {
      v21 %= v16;
    }
    if (v21 != v3) {
      goto LABEL_59;
    }
  LABEL_35:
    v20 = (__int64*)*v20;
    if (v20 == nullptr) {
      goto LABEL_59;
    }
  }
  v22 = *((unsigned __int8*)v20 + 16);
  v23 = v20[3];
  if ((v22 & 1) == 0) {
    v23 = v22 >> 1;
  }
  if (v23 != v14) {
    goto LABEL_35;
  }
  v24 = (v22 & 1) != 0 ? v20[4] : (__int64)v20 + 17;
  if (memcmp(v24, (__int64)v13, v14) != 0) {
    goto LABEL_35;
  }
LABEL_57:
  if ((v70_.v70 & 1) != 0) {
  LABEL_134:
    if (v70_.v72 != nullptr) {
      v68 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v68,
                                    (__int64)v70_.v72);
    }
  }
LABEL_138:
  if ((v75_.v75[0] & 1) != 0 && v75_.v76 != nullptr) {
    v69 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v69,
                                  (__int64)v75_.v76);
  }
}

__attribute__((swiftcall)) void

llvm_libcxx_21_libcxx_include___vector_ad1560(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[5];
  struct {
    _QWORD v14[2];
    unsigned __int64 v15;
    __int64 (*v16)();
    __int64 v17;
  } v14_;
  struct {
    _BYTE v18[256];
    _BYTE* v19;
  } v18_;
  struct {
    __int64* v20;
    __int64 v21;
    _QWORD* v22;
    __int64 v23;
  } v20_;
  struct {
    _BYTE v24[8];
    char v25;
  } v24_;
  struct {
    _QWORD v26[2];
    int v27;
    char gap412_[4];
    __int64 v28;
    __int64 v29;
  } v26_;

  a3[2] = 0;
  v13[0] = a1;
  *a3 = 0;
  a3[1] = 0;
  v14_.v17 = 0;
  v14_.v15 = 0;
  v14_.v16 = GameRoutine_64be60;
  v13[1] = a2;
  v13[2] = 13;
  v26_.v27 = 0;
  v24_.v24[0] = 0;
  v24_.v25 = 0;
  v14_.v14[0] = v18_.v18;
  v14_.v14[1] = 256;
  v18_.v19 = v18_.v18;
  v26_.v26[0] = "Shaders/{}.bfsha";
  v26_.v26[1] = "";
  v26_.v28 = 0;
  v26_.v29 = 1;
  v20_.v22 = v13;
  v20_.v23 = 13;
  v20_.v20 = v14_.v14;
  v20_.v21 = 1;
  GameRoutine_6380e0((__int64)v26_.v26, &v20_.v20);
  if (v24_.v25 == 1) {
    std___1_locale_Destroy_locale((__int64)v24_.v24);
  }
  v4 = v14_.v15;
  if (v14_.v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = (__int64)v18_.v19;
  if (v14_.v15 >= 0x17) {
    if ((v14_.v15 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v14_.v15 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v20_.v21 = v4;
    v20_.v22 = v6;
    v20_.v20 = (__int64*)(v7 | 1);
  }
  else {
    LOBYTE(v20_.v20) = 2 * v14_.v15;
    v6 = (char*)&v20_.v20 + 1;
    if (v14_.v15 == 0) {
      goto LABEL_12;
    }
  }
  memmove((__int64)v6, v5, v4);
LABEL_12:
  v8 = v18_.v19;
  v6[v4] = 0;
  if (v8 != v18_.v18 && v8 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v8);
  }
  if ((*(_BYTE*)a3 & 1) != 0) {
    v10 = a3[2];
    if (v10 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
    }
  }
  v12 = v20_.v21;
  *a3 = v20_.v20;
  a3[1] = v12;
  a3[2] = v20_.v22;
}

__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b34420(
    PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
    unsigned __int64 a5, __int64 a6)
{
  __int64 a7 = (__int64)PSEUDO_X8_VALUE(x8_);
  char* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD v21[2];
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;
  struct {
    __int64 v25[2];
    __int64 v26;
  } v25_;
  _QWORD v27[2];

  v27[0] = 0;
  v27[1] = 0;
  GameRoutine_b34600((void*)((_QWORD*)a7), a1, a2, a3, a4, a5, a6, 0, 1, v27);
  if (*(_DWORD*)(a7 + 8) != -1) {
    return;
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (a3 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14,
                                                16, 0);
    v22_.v23 = a3;
    v22_.v24 = v13;
    v22_.v22 = v14 | 1;
    goto LABEL_10;
  }
  LOBYTE(v22_.v22) = 2 * a3;
  v13 = (char*)&v22_.v22 + 1;
  if (a3 != 0) {
  LABEL_10:
    memmove((__int64)v13, a2, a3);
  }
  v13[a3] = 0;
  v15 = (__int64*)GameRoutine_1a09ce0((__int64)&v22_.v22, ".bntx", 5u);
  v17 = v15[1];
  v16 = v15[2];
  v25_.v25[0] = *v15;
  v25_.v25[1] = v17;
  v25_.v26 = v16;
  v15[1] = 0;
  v15[2] = 0;
  *v15 = 0;
  if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18,
                                  (__int64)v22_.v24);
  }
  v21[0] = 0;
  v21[1] = 0;
  GameRoutine_b35580((void*)((__int64)&v22_.v22), a1, v25_.v25, a4, a5, 1, v21);
  v19 = v22_.v23;
  *(_QWORD*)a7 = v22_.v22;
  *(_QWORD*)(a7 + 8) = v19;
  *(_DWORD*)(a7 + 16) = (_DWORD)v22_.v24;
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v25_.v26);
  }
}

__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b35d00(
    PSEUDO_X8 x8_, _QWORD* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
    unsigned __int64 a5, __int64 a6, _QWORD* a7)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64** v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD v58[2];
  struct {
    __int64 v59;
    unsigned __int64 v60;
    char* v61;
  } v59_;
  struct {
    __int64 v62[2];
    __int64 v63;
  } v62_;
  _QWORD v64[2];

  v9 = a7[1];
  v64[0] = *a7;
  v64[1] = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_b34600((void*)((_QWORD*)a8), a1, a2, a3, a4, a5, a6, 0, 0, v64);
    std___1___shared_weak_count___release_weak(v9);
  }
  else {
    GameRoutine_b34600((void*)((_QWORD*)a8), a1, a2, a3, a4, a5, a6, 0, 0, v64);
  }
  v16 = a1[7];
  if (v16 == 0 || a1[9] == 0) {
    goto LABEL_27;
  }
  v18 = *(unsigned int*)(a8 + 16);
  v19 = v16 - 1;
  if ((v16 & (v16 - 1)) != 0) {
    v20 = *(unsigned int*)(a8 + 16);
    if (v16 <= v18) {
      v20 = (unsigned int)v18 % (unsigned int)v16;
    }
  }
  else {
    v20 = ((_DWORD)v16 - 1) & (unsigned int)v18;
  }
  v21 = *(__int64***)(a1[6] + 8 * v20);
  if (v21 == nullptr) {
  LABEL_27:
    v22 = nullptr;
  }
  else {
    v22 = *v21;
    if (*v21 != nullptr) {
      if ((v16 & v19) == 0) {
        while (1) {
          v24 = v22[1];
          if (v24 == v18) {
            if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
              goto LABEL_28;
            }
          }
          else if ((v24 & v19) != v20) {
            goto LABEL_27;
          }
          v22 = (__int64*)*v22;
          if (v22 == nullptr) {
            goto LABEL_28;
          }
        }
      }
      do {
        v23 = v22[1];
        if (v23 == v18) {
          if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
            break;
          }
        }
        else {
          if (v23 >= v16) {
            v23 %= v16;
          }
          if (v23 != v20) {
            goto LABEL_27;
          }
        }
        v22 = (__int64*)*v22;
      } while (v22 != nullptr);
    }
  }
LABEL_28:
  if (*(_DWORD*)(a8 + 8) == -1) {
    if (v22 != nullptr) {
      return;
    }
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (a3 >= 0x17) {
      if ((a3 | 7) == 0x17) {
        v30 = 26;
      }
      else {
        v30 = (a3 | 7) + 1;
      }
      v25 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v30,
                                                  16, 0);
      v59_.v60 = a3;
      v59_.v61 = v25;
      v59_.v59 = v30 | 1;
    }
    else {
      LOBYTE(v59_.v59) = 2 * a3;
      v25 = (char*)&v59_.v59 + 1;
      if (a3 == 0) {
      LABEL_46:
        v25[a3] = 0;
        v31 = (__int64*)GameRoutine_1a09ce0((__int64)&v59_.v59, ".bntx", 5u);
        v33 = v31[1];
        v32 = v31[2];
        v62_.v62[0] = *v31;
        v62_.v62[1] = v33;
        v62_.v63 = v32;
        v31[1] = 0;
        v31[2] = 0;
        *v31 = 0;
        if ((v59_.v59 & 1) != 0 && v59_.v61 != nullptr) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, (__int64)v59_.v61);
        }
        v35 = a7[1];
        v58[0] = *a7;
        v58[1] = v35;
        if (v35 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_b35580((void*)((__int64)&v59_.v59), a1, v62_.v62, a4, a5,
                             0, v58);
          v36 = v59_.v60;
          *(_QWORD*)a8 = v59_.v59;
          *(_QWORD*)(a8 + 8) = v36;
          *(_DWORD*)(a8 + 16) = (_DWORD)v59_.v61;
          std___1___shared_weak_count___release_weak(v35);
        }
        else {
          GameRoutine_b35580((void*)((__int64)&v59_.v59), a1, v62_.v62, a4, a5,
                             0, v58);
          v37 = v59_.v60;
          *(_QWORD*)a8 = v59_.v59;
          *(_QWORD*)(a8 + 8) = v37;
          *(_DWORD*)(a8 + 16) = (_DWORD)v59_.v61;
        }
        if (*(_DWORD*)(a8 + 8) == -1) {
          v38 = a1[7];
          if (v38 != 0 && a1[9] != 0) {
            v39 = *(unsigned int*)(a8 + 16);
            v40 = v38 - 1;
            if ((v38 & (v38 - 1)) != 0) {
              v41 = *(unsigned int*)(a8 + 16);
              if (v38 <= v39) {
                v41 = (unsigned int)v39 % (unsigned int)v38;
              }
            }
            else {
              v41 = ((_DWORD)v38 - 1) & (unsigned int)v39;
            }
            v50 = *(__int64***)(a1[6] + 8 * v41);
            if (v50 != nullptr) {
              v51 = *v50;
              if (v51 != nullptr) {
                if ((v38 & v40) == 0) {
                  while (1) {
                    v53 = v51[1];
                    if (v53 == v39) {
                      if (*((_DWORD*)v51 + 4) == (_DWORD)v39) {
                        goto LABEL_98;
                      }
                    }
                    else if ((v53 & v40) != v41) {
                      goto LABEL_86;
                    }
                    v51 = (__int64*)*v51;
                    if (v51 == nullptr) {
                      goto LABEL_86;
                    }
                  }
                }
                do {
                  v52 = v51[1];
                  if (v52 == v39) {
                    if (*((_DWORD*)v51 + 4) == (_DWORD)v39) {
                      goto LABEL_98;
                    }
                  }
                  else {
                    if (v52 >= v38) {
                      v52 %= v38;
                    }
                    if (v52 != v41) {
                      break;
                    }
                  }
                  v51 = (__int64*)*v51;
                } while (v51 != nullptr);
              }
            }
          }
        LABEL_86:
          v54 = a7[1];
          if (v54 == 0) {
            goto LABEL_98;
          }
          v55 = std___1___shared_weak_count_lock(v54);
          if (v55 == 0) {
            goto LABEL_98;
          }
          v44 = *a7;
          v45 = v55;
          if (*a7 == 0) {
            goto LABEL_96;
          }
          v59_.v59 = 0;
        }
        else {
          v42 = a7[1];
          if (v42 == 0 || (v43 = std___1___shared_weak_count_lock(v42)) == 0) {
          LABEL_98:
            if ((v62_.v62[0] & 1) != 0 && v62_.v63 != 0) {
              v57 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v57 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v62_.v63);
            }
            return;
          }
          v44 = *a7;
          v45 = v43;
          if (*a7 == 0) {
          LABEL_96:
            if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
              std___1___shared_weak_count___release_weak(v45);
            }
            goto LABEL_98;
          }
          v46 = a1[7];
          v47 = *(unsigned int*)(a8 + 16);
          if ((v46 & (v46 - 1)) != 0) {
            v48 = *(unsigned int*)(a8 + 16);
            if (v46 <= v47) {
              v48 = (unsigned int)v47 % (unsigned int)v46;
            }
            v49 = *(__int64**)(a1[6] + 8 * v48);
            do {
              do {
                v49 = (__int64*)*v49;
              } while (v49[1] != v47);
            } while (*((_DWORD*)v49 + 4) != (_DWORD)v47);
          }
          else {
            v49 = *(__int64**)(a1[6] +
                               8LL * (((_DWORD)v46 - 1) & (unsigned int)v47));
            do {
              do {
                v49 = (__int64*)*v49;
              } while (v49[1] != v47);
            } while (*((_DWORD*)v49 + 4) != (_DWORD)v47);
          }
          v59_.v59 = v49[6];
        }
        v56 = *(_QWORD*)(v44 + 32);
        if (v56 != 0) {
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v56 + 48LL))(v56,
                                                                  &v59_.v59);
          goto LABEL_96;
        }
      LABEL_105:
        GameRoutine_60a310();
      }
    }
    memmove((__int64)v25, a2, a3);
    goto LABEL_46;
  }
  v26 = a7[1];
  if (v26 == 0) {
    return;
  }
  v27 = std___1___shared_weak_count_lock(v26);
  if (v27 == 0) {
    return;
  }
  v28 = v27;
  if (*a7 != 0) {
    v29 = *(_QWORD*)(*a7 + 32LL);
    v62_.v62[0] = v22[6];
    if (v29 == 0) {
      goto LABEL_105;
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v29 + 48LL))(v29, v62_.v62);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
}

__int64 llvm_libcxx_21_libcxx_include___vector_b362c0(_QWORD* a1, __int64 a2,
                                                      __int64 a3,
                                                      unsigned __int64 a4)
{
  unsigned __int64 v4;
  __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int16* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  __int64 v35;

  if (*(_DWORD*)(a2 + 8) != -1) {
    return 0;
  }
  v4 = a1[7];
  if (v4 == 0 || a1[9] == 0) {
    return 0xFFFFFFFFLL;
  }
  v7 = *(unsigned int*)(a2 + 16);
  v8 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v9 = *(unsigned int*)(a2 + 16);
    if (v4 <= v7) {
      v9 = (unsigned int)v7 % (unsigned int)v4;
    }
  }
  else {
    v9 = ((_DWORD)v4 - 1) & (unsigned int)v7;
  }
  v10 = *(__int64***)(a1[6] + 8 * v9);
  if (v10 == nullptr) {
    return 0xFFFFFFFFLL;
  }
  v11 = *v10;
  if (*v10 == nullptr) {
    return 0xFFFFFFFFLL;
  }
  result = 0xFFFFFFFFLL;
  if ((v4 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == v7) {
        if (*((_DWORD*)v11 + 4) == (_DWORD)v7) {
          goto LABEL_30;
        }
      }
      else if ((v13 & v8) != v9) {
        return 0xFFFFFFFFLL;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == v7) {
      break;
    }
    if (v12 >= v4) {
      v12 %= v4;
    }
    if (v12 != v9) {
      return 0xFFFFFFFFLL;
    }
  LABEL_18:
    v11 = (__int64*)*v11;
    if (v11 == nullptr) {
      return result;
    }
  }
  if (*((_DWORD*)v11 + 4) != (_DWORD)v7) {
    goto LABEL_18;
  }
LABEL_30:
  v14 = v11[6];
  nn_os_AcquireReadLock(v14 + 696);
  v18 = *(_DWORD*)(v14 + 656);
  nn_os_ReleaseReadLock(v14 + 696);
  if ((v18 & 8) == 0) {
    return 1;
  }
  v19 = GameRoutine_5fc1f0(*(_QWORD*)(v11[6] + 592));
  v11[7] = v19;
  v20 = a3;
  v21 = *(_QWORD*)(v19 + 56);
  v22 = *(unsigned __int16*)(v21 + 12);
  v23 = v21 + 8;
  v24 = v21 + 8 + 16 * v22;
  v25 = *(_DWORD*)v24;
  v26 = a2;
  if ((signed __int32)*(_DWORD*)(v21 + 8) < (signed __int32)*(_DWORD*)v24) {
    do {
      v29 = (__int64)v25 >> 3;
      if (a4 > v29) {
        v27 = (*(unsigned __int8*)(a3 + a4 + ~v29) >> (v25 & 7)) & 1;
      }
      else {
        v27 = 0;
      }
      v22 = *(unsigned __int16*)(v21 + 12 + 16 * v22 + 2 * v27);
      v28 = v25 < (signed __int32)*(_DWORD*)(v23 + 16 * v22);
      v25 = *(_DWORD*)(v23 + 16 * v22);
    } while (v28);
    v24 = v23 + 16 * v22;
  }
  v30 = *(unsigned __int16**)(v24 + 8);
  if (a4 != *v30) {
  LABEL_43:
    v32 = 0;
    v33 = -1;
    goto LABEL_44;
  }
  v31 = v19;
  if (memcmp((__int64)(v30 + 1), v20, a4) == 0) {
    v34 = v24 - v21 - 24;
    v26 = a2;
    if ((~v34 & 0xFFFFFFFF0LL) != 0) {
      v35 = *(_QWORD*)(*(_QWORD*)(v31 + 40) + 8LL * (int)(v34 >> 4));
      v33 = *(_DWORD*)(v35 + 144);
      v32 = *(_QWORD*)(*(_QWORD*)(v35 + 128) + 8LL);
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  v32 = 0;
  v33 = -1;
  v26 = a2;
LABEL_44:
  *(_QWORD*)v26 = v32;
  *(_DWORD*)(v26 + 8) = v33;
  if (v33 == -1) {
    return 0xFFFFFFFFLL;
  }
  else {
    return 0;
  }
}

void llvm_libcxx_21_libcxx_include___vector_b36540(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v24[2];
    char v25;
  } v24_;

  v2 = a1[7];
  if (v2 == 0 || a1[9] == 0) {
    goto LABEL_24;
  }
  v4 = *(unsigned int*)(a2 + 16);
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v6 = *(unsigned int*)(a2 + 16);
    if (v2 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)v2;
    }
  }
  else {
    v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
  }
  v7 = *(__int64***)(a1[6] + 8 * v6);
  if (v7 == nullptr) {
  LABEL_24:
    v8 = nullptr;
  }
  else {
    v8 = *v7;
    if (*v7 != nullptr) {
      if ((v2 & v5) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v4) {
            if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
              goto LABEL_25;
            }
          }
          else if ((v10 & v5) != v6) {
            goto LABEL_24;
          }
          v8 = (__int64*)*v8;
          if (v8 == nullptr) {
            goto LABEL_25;
          }
        }
      }
      do {
        v9 = v8[1];
        if (v9 == v4) {
          if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
            break;
          }
        }
        else {
          if (v9 >= v2) {
            v9 %= v2;
          }
          if (v9 != v6) {
            goto LABEL_24;
          }
        }
        v8 = (__int64*)*v8;
      } while (v8 != nullptr);
    }
  }
LABEL_25:
  if (*(_DWORD*)(a2 + 8) == -1) {
    if (v8 == nullptr) {
      return;
    }
    v11 = v8[8] - 1;
    v8[8] = v11;
    if (v11 == 0) {
      v12 = a2;
      GameRoutine_634d80(*(_QWORD*)(v8[6] + 8), v8[6]);
      GameRoutine_b36ae0((void*)((__int64)v24_.v24), a1 + 6, v8);
      v14 = v24_.v24[0];
      if (v24_.v24[0] != 0) {
        if (v24_.v25 == 1 && (*(_BYTE*)(v24_.v24[0] + 24LL) & 1) != 0 &&
            *(_QWORD*)(v24_.v24[0] + 40LL) != 0) {
          v15 = v24_.v24[0];
          v16 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v16,
                                        *(_QWORD*)(v24_.v24[0] + 40LL));
          v14 = v15;
        }
        v17 = fw_memory_g_heap_manager;
      LABEL_45:
        v23 = 128;
        if (*(_QWORD*)(v17 + 200) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(v17 + v23, v14);
        goto LABEL_48;
      }
      goto LABEL_48;
    }
  }
  else {
    v18 = v8[8] - 1;
    v8[8] = v18;
    if (v18 == 0) {
      v12 = a2;
      GameRoutine_634d80(*(_QWORD*)(v8[6] + 8), v8[6]);
      GameRoutine_b36ae0((void*)((__int64)v24_.v24), a1 + 6, v8);
      v14 = v24_.v24[0];
      if (v24_.v24[0] != 0) {
        v20 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v24_.v25 == 1 && (*(_BYTE*)(v24_.v24[0] + 24LL) & 1) != 0 &&
            *(_QWORD*)(v24_.v24[0] + 40LL) != 0) {
          v21 = v24_.v24[0];
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v22,
                                        *(_QWORD*)(v24_.v24[0] + 40LL));
          v14 = v21;
        }
        v17 = *v20;
        goto LABEL_45;
      }
    LABEL_48:
      a2 = v12;
    }
  }
  *(_QWORD*)a2 = 0;
  *(_DWORD*)(a2 + 16) = 0;
  *(_DWORD*)(a2 + 8) = -1;
}

__int64 llvm_libcxx_21_libcxx_include___vector_bd47b0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  int v7;
  const char* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v18[2];
    __int64 v19;
  } v18_;
  struct {
    __int64 (**v20)();
    __int64 v21;
    __int64 v22;
    __int64 v23;
    char gap64_[8];
    __int64 (**v24)();
    __int64 v25;
    __int64 v26;
    __int64 v27;
    char gap104_[8];
    __int64 v28;
  } v20_;
  struct {
    __int64 v29;
    unsigned __int64 v30;
    __int64 v31;
  } v29_;

  v1 = a1[2];
  v3 = *(_QWORD*)(*(_QWORD*)(v1 + 120) + 448LL);
  if (v3 == 0) {
    goto LABEL_36;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(v1 + 568) + 784LL);
  if (v4 == 0) {
    v3 = 0;
    goto LABEL_36;
  }
  strcpy((char*)&v29_.v29, "\nptcl.");
  v5 = *(_QWORD*)(v3 + 152);
  if (v5 != 0) {
    v7 = *(unsigned __int8*)(v5 + 72);
    v6 = (const char*)(v5 + 72);
    if (v7 != 0) {
      v8 = v6;
    }
    else {
      v8 = "<noname>";
    }
  }
  else {
    v8 = &GameData_1a9f09e;
  }
  v9 = strlen(v8);
  GameRoutine_1a09ce0((__int64)&v29_.v29, v8, v9);
  if ((v29_.v29 & 1) != 0) {
    fw_text_String_CopyTerminated(v18_.v18, v29_.v31, v29_.v30);
  }
  else {
    v18_.v18[0] = v29_.v29;
    v18_.v18[1] = v29_.v30;
    v18_.v19 = v29_.v31;
  }
  llvm_libcxx_21_libcxx_include___vector_bd62d0((__int64)&v20_.v20, v3, v4,
                                                (__int64)v18_.v18);
  if ((v18_.v18[0] & 1) != 0 && v18_.v19 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v18_.v19);
  }
  if (v20_.v22 == 0) {
    goto LABEL_23;
  }
  v11 = std___1___shared_weak_count_lock(v20_.v22);
  if (v11 == 0) {
    goto LABEL_23;
  }
  v12 = v20_.v21;
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v13 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v13);
    if (v12 != 0) {
      goto LABEL_21;
    }
  LABEL_23:
    v3 = 0;
    goto LABEL_24;
  }
  if (v12 == 0) {
    goto LABEL_23;
  }
LABEL_21:
  v3 = v20_.v28;
LABEL_24:
  v14 = v20_.v26;
  v20_.v26 = 0;
  v20_.v24 = gfx_light_Actor_vtable;
  v20_.v25 = 0;
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
    v20_.v27 = 0;
    if (v20_.v26 != 0) {
      std___1___shared_weak_count___release_weak(v20_.v26);
    }
  }
  else {
    v20_.v27 = 0;
  }
  v15 = v20_.v22;
  v20_.v22 = 0;
  v20_.v20 = gfx_light_Actor_vtable;
  v20_.v21 = 0;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
    v20_.v23 = 0;
    if (v20_.v22 != 0) {
      std___1___shared_weak_count___release_weak(v20_.v22);
    }
  }
  if ((v29_.v29 & 1) != 0 && v29_.v31 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v29_.v31);
  }
LABEL_36:
  *a1 = v3;
  return 1;
}

__int64 llvm_libcxx_21_libcxx_include___vector_bd62d0(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      __int64 a4)
{
  __int64 v4;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int128 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  struct {
    _QWORD v50[2];
    __int64 v51;
  } v50_;
  struct {
    __int64 v52;
    unsigned __int64 v53;
    const char* v54;
  } v52_;

  v4 = result;
  if (*(_DWORD*)a3 == 102) {
    eft_bc9e40((void*)((_QWORD*)result), a2);
    std___1_to_string_1a0a790((void*)(v50_.v50), *(unsigned int*)(v4 + 80));
    v8 = (__int64*)GameRoutine_1a0a680((__int64)v50_.v50, 0, ".", 1u);
    v10 = v8[1];
    v9 = v8[2];
    v52_.v52 = *v8;
    v52_.v53 = v10;
    v52_.v54 = (const char*)v9;
    v8[1] = 0;
    v8[2] = 0;
    *v8 = 0;
    if ((v52_.v52 & 1) != 0) {
      v11 = v52_.v54;
    }
    else {
      v11 = (char*)&v52_.v52 + 1;
    }
    if ((v52_.v52 & 1) != 0) {
      v12 = v52_.v53;
    }
    else {
      v12 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
    }
    GameRoutine_1a09ce0(a4, v11, v12);
    if ((v52_.v52 & 1) != 0 && v52_.v54 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v52_.v54);
    }
    if ((v50_.v50[0] & 1) != 0 && v50_.v51 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v50_.v51);
    }
    v15 = *(_QWORD*)(a2 + 152);
    if (v15 != 0) {
      v16 = *(unsigned int*)(v15 + 16);
    }
    else {
      v16 = 0xFFFFFFFFLL;
    }
    std___1_to_string_1a0a790((void*)(v50_.v50), v16);
    v17 = (__int64*)GameRoutine_1a0a680((__int64)v50_.v50, 0, ".", 1u);
    v19 = v17[1];
    v18 = v17[2];
    v52_.v52 = *v17;
    v52_.v53 = v19;
    v52_.v54 = (const char*)v18;
    v17[1] = 0;
    v17[2] = 0;
    *v17 = 0;
    if ((v52_.v52 & 1) != 0) {
      v20 = v52_.v54;
    }
    else {
      v20 = (char*)&v52_.v52 + 1;
    }
    if ((v52_.v52 & 1) != 0) {
      v21 = v52_.v53;
    }
    else {
      v21 = (unsigned __int64)(unsigned __int8)v52_.v52 >> 1;
    }
    GameRoutine_1a09ce0(a4, v20, v21);
    if ((v52_.v52 & 1) != 0 && v52_.v54 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v52_.v54);
    }
    if ((v50_.v50[0] & 1) != 0 && v50_.v51 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v50_.v51);
    }
    v24 = *(_QWORD*)(v4 + 16);
    if ((*(_BYTE*)a4 & 1) != 0) {
      v25 = *(const char**)(a4 + 16);
    }
    else {
      v25 = (const char*)(a4 + 1);
    }
    if (v24 != 0) {
      v26 = std___1___shared_weak_count_lock(v24);
      if (v26 != 0) {
        v27 = *(_QWORD*)(v4 + 8);
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v28 = v26;
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak(v28);
        }
        if (v27 != 0) {
          nn_util_SNPrintf(*(_QWORD*)(v4 + 24) + 184LL, 64, "%s", v25);
        }
      }
      v29 = *(_QWORD*)(v4 + 16);
      if (v29 != 0) {
        v30 = *(_DWORD*)(a3 + 24);
        v31 = std___1___shared_weak_count_lock(v29);
        if (v31 != 0) {
          v32 = *(_QWORD*)(v4 + 8);
          if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v33 = v31;
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak(v33);
          }
          if (v32 != 0) {
            *(_DWORD*)(*(_QWORD*)(v4 + 32) + 32LL) = v30;
          }
        }
      }
    }
    v34 = *(_QWORD*)(v4 + 16);
    if (v34 != 0) {
      v35 = *(unsigned int*)(a3 + 20);
      v49 = *(_QWORD*)(a3 + 12);
      v36 = std___1___shared_weak_count_lock(v34);
      if (v36 != 0) {
        v37 = *(_QWORD*)(v4 + 8);
        if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v38 = v36;
          (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
          std___1___shared_weak_count___release_weak(v38);
        }
        if (v37 != 0) {
          *(_QWORD*)&v39 = v49;
          *((_QWORD*)&v39 + 1) = v35;
          *(_OWORD*)(*(_QWORD*)(v4 + 24) + 48LL) = v39;
        }
      }
      v40 = *(_QWORD*)(v4 + 16);
      if (v40 != 0) {
        v41 = *(_DWORD*)(a3 + 8);
        v42 = std___1___shared_weak_count_lock(v40);
        if (v42 != 0) {
          v43 = *(_QWORD*)(v4 + 8);
          if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v44 = v42;
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
            std___1___shared_weak_count___release_weak(v44);
          }
          if (v43 != 0) {
            *(_DWORD*)(*(_QWORD*)(v4 + 24) + 64LL) = v41;
          }
        }
      }
    }
    *(_DWORD*)(*(_QWORD*)(v4 + 32) + 248LL) = *(_DWORD*)(a3 + 28);
    *(_DWORD*)(*(_QWORD*)(v4 + 32) + 252LL) = *(_DWORD*)(a3 + 32);
    result = *(_QWORD*)(v4 + 16);
    if ((*(_BYTE*)(a3 + 4) & 0x10) != 0) {
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        if (result != 0) {
          v47 = *(_QWORD*)(v4 + 8);
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v48 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak(v48);
          }
          if (v47 != 0) {
            *(_DWORD*)(*(_QWORD*)(v4 + 24) + 88LL) = 5;
          }
        }
      }
    }
    else if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v45 = *(_QWORD*)(v4 + 8);
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v46 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v46);
        }
        if (v45 != 0) {
          *(_DWORD*)(*(_QWORD*)(v4 + 24) + 88LL) = 0;
        }
      }
    }
  }
  else {
    *(_QWORD*)(result + 80) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)(result + 24) = 0;
    *(_QWORD*)(result + 48) = 0;
    *(_QWORD*)(result + 56) = 0;
    *(_QWORD*)(result + 64) = 0;
    *(_QWORD*)(result + 72) = 0;
    *(_QWORD*)result = gfx_light_PointLightActor_vtable;
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 40) = gfx_light_SpotLightActor_vtable;
  }
  return result;
}

char* llvm_libcxx_21_libcxx_include___vector_bef640(char* result, char* a2,
                                                    unsigned __int64 a3,
                                                    char* a4, __int64 a5)
{
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  char* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  char* v18;
  char* v19;
  char* v20;
  char* v21;
  __int64 v22;
  char* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  char* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  char* v43;
  char* v44;
  __int64 v45;
  char* v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  char* v56;
  char* v57;
  char* v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  struct {
    _BYTE v64[32];
    char* v65;
  } v64_;
  struct {
    _BYTE v66[32];
    char* v67;
  } v66_;
  struct {
    _BYTE v68[32];
    char* v69;
    char gap136_[8];
    __int64 v70;
    __int64 v71;
  } v68_;

  if (a3 < 2) {
    return result;
  }
  v6 = result;
  if (a3 == 2) {
    if ((signed __int32)*((_DWORD*)a2 - 4) <
        (signed __int32)*((_DWORD*)result + 36)) {
      return (char*)GameRoutine_bf1300(result, (_QWORD*)a2 - 20);
    }
    return result;
  }
  v7 = a3;
  if ((__int64)a3 <= 0) {
    if (result == a2) {
      return result;
    }
    v14 = result + 160;
    if (result + 160 == a2) {
      return result;
    }
    v15 = 0;
    v16 = result;
  LABEL_15:
    v18 = v14;
    if ((signed __int32)*((_DWORD*)v16 + 76) >=
        (signed __int32)*((_DWORD*)v16 + 36)) {
      goto LABEL_14;
    }
    v19 = *((char**)v16 + 24);
    if (v19 != nullptr) {
      if (v19 == v14) {
        v64_.v65 = v64_.v64;
        (*(void (**)(char*, _BYTE*))(*(_QWORD*)v19 + 24LL))(v19, v64_.v64);
        v20 = *((char**)v16 + 30);
        if (v20 == nullptr) {
          goto LABEL_25;
        }
      }
      else {
        v64_.v65 = *((char**)v16 + 24);
        *((_QWORD*)v16 + 24) = 0;
        v20 = *((char**)v16 + 30);
        if (v20 == nullptr) {
        LABEL_25:
          v66_.v67 = nullptr;
          v21 = *((char**)v16 + 36);
          if (v21 != nullptr) {
            goto LABEL_26;
          }
          goto LABEL_29;
        }
      }
    }
    else {
      v64_.v65 = nullptr;
      v20 = *((char**)v16 + 30);
      if (v20 == nullptr) {
        goto LABEL_25;
      }
    }
    if (v20 == v16 + 208) {
      v66_.v67 = v66_.v66;
      (*(void (**)(char*, _BYTE*))(*(_QWORD*)v20 + 24LL))(v20, v66_.v66);
      v21 = *((char**)v16 + 36);
      if (v21 != nullptr) {
      LABEL_26:
        if (v21 == v16 + 256) {
          v68_.v69 = v68_.v68;
          (*(void (**)(char*, _BYTE*))(*(_QWORD*)v21 + 24LL))(v21, v68_.v68);
        }
        else {
          v68_.v69 = v21;
          *((_QWORD*)v16 + 36) = 0;
        }
        goto LABEL_31;
      }
    }
    else {
      v66_.v67 = v20;
      *((_QWORD*)v16 + 30) = 0;
      v21 = *((char**)v16 + 36);
      if (v21 != nullptr) {
        goto LABEL_26;
      }
    }
  LABEL_29:
    v68_.v69 = nullptr;
  LABEL_31:
    v22 = v15;
    v68_.v71 = *((_QWORD*)v16 + 39);
    v68_.v70 = *((_QWORD*)v16 + 38);
    while (1) {
      v23 = &v6[v22];
      v24 = *(_QWORD**)&v6[v22 + 192];
      v25 = (__int64)&v6[v22 + 160];
      *(_QWORD*)&v6[v22 + 192] = 0;
      if ((_QWORD*)v25 == v24) {
        v26 = 32;
      }
      else {
        if (v24 == nullptr) {
          goto LABEL_37;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v24 + v26))((__int64)v24);
    LABEL_37:
      v27 = *(char**)&v6[v22 + 32];
      if (v27 != nullptr) {
        if (v23 == v27) {
          *((_QWORD*)v23 + 24) = v25;
          (*(void (**)(char*, char*))(*(_QWORD*)v27 + 24LL))(v27,
                                                             &v6[v22 + 160]);
        }
        else {
          *((_QWORD*)v23 + 24) = v27;
          *(_QWORD*)&v6[v22 + 32] = 0;
        }
      }
      else {
        *((_QWORD*)v23 + 24) = 0;
      }
      v28 = &v6[v22];
      v29 = *(_QWORD**)&v6[v22 + 240];
      v30 = (__int64)&v6[v22 + 208];
      *(_QWORD*)&v6[v22 + 240] = 0;
      if ((_QWORD*)v30 == v29) {
        v31 = 32;
      }
      else {
        if (v29 == nullptr) {
          goto LABEL_47;
        }
        v31 = 40;
      }
      (*(void (**)(__int64))(*v29 + v31))((__int64)v29);
    LABEL_47:
      v32 = *(char**)&v6[v22 + 80];
      if (v32 != nullptr) {
        if (v28 + 48 == v32) {
          *((_QWORD*)v28 + 30) = v30;
          (*(void (**)(char*, char*))(*(_QWORD*)v32 + 24LL))(v32,
                                                             &v6[v22 + 208]);
        }
        else {
          *((_QWORD*)v28 + 30) = v32;
          *(_QWORD*)&v6[v22 + 80] = 0;
        }
      }
      else {
        *((_QWORD*)v28 + 30) = 0;
      }
      v33 = &v6[v22];
      v34 = *(_QWORD**)&v6[v22 + 288];
      v35 = (__int64)&v6[v22 + 256];
      *(_QWORD*)&v6[v22 + 288] = 0;
      if ((_QWORD*)v35 == v34) {
        v36 = 32;
      }
      else {
        if (v34 == nullptr) {
          goto LABEL_57;
        }
        v36 = 40;
      }
      (*(void (**)(__int64))(*v34 + v36))((__int64)v34);
    LABEL_57:
      v37 = *(char**)&v6[v22 + 128];
      if (v37 != nullptr) {
        if (v33 + 96 == v37) {
          *((_QWORD*)v33 + 36) = v35;
          (*(void (**)(char*, char*))(*(_QWORD*)v37 + 24LL))(v37,
                                                             &v6[v22 + 256]);
        }
        else {
          *((_QWORD*)v33 + 36) = v37;
          *(_QWORD*)&v6[v22 + 128] = 0;
        }
      }
      else {
        *((_QWORD*)v33 + 36) = 0;
      }
      v38 = &v6[v22];
      v39 = *(_QWORD*)&v6[v22 + 152];
      *((_QWORD*)v38 + 38) = *(_QWORD*)&v6[v22 + 144];
      *((_QWORD*)v38 + 39) = v39;
      if (v22 == 0) {
        v40 = (__int64)v6;
      LABEL_66:
        v41 = *((_QWORD**)v38 + 4);
        *((_QWORD*)v38 + 4) = 0;
        if (v41 == (_QWORD*)v40) {
          v42 = 32;
        LABEL_70:
          (*(void (**)(__int64))(*v41 + v42))((__int64)v41);
        }
        else if (v41 != nullptr) {
          v42 = 40;
          goto LABEL_70;
        }
        if (v64_.v65 != nullptr) {
          if (v64_.v65 == v64_.v64) {
            v43 = v64_.v65;
            *((_QWORD*)v38 + 4) = v40;
            (*(void (**)(char*, __int64))(*(_QWORD*)v43 + 24LL))(v43, v40);
          }
          else {
            *((_QWORD*)v38 + 4) = v64_.v65;
            v64_.v65 = nullptr;
          }
        }
        else {
          *((_QWORD*)v38 + 4) = 0;
        }
        v44 = *((char**)v38 + 10);
        *((_QWORD*)v38 + 10) = 0;
        if (v38 + 48 == v44) {
          v45 = 32;
        LABEL_80:
          (*(void (**)(__int64))(*(_QWORD*)v44 + v45))((__int64)v44);
        }
        else if (v44 != nullptr) {
          v45 = 40;
          goto LABEL_80;
        }
        if (v66_.v67 != nullptr) {
          if (v66_.v67 == v66_.v66) {
            v46 = v66_.v67;
            *((_QWORD*)v38 + 10) = v38 + 48;
            (*(void (**)(char*, _QWORD*))(*(_QWORD*)v46 + 24LL))(
                v46, (_QWORD*)v38 + 6);
          }
          else {
            *((_QWORD*)v38 + 10) = v66_.v67;
            v66_.v67 = nullptr;
          }
        }
        else {
          *((_QWORD*)v38 + 10) = 0;
        }
        v47 = *((char**)v38 + 16);
        *((_QWORD*)v38 + 16) = 0;
        if (v38 + 96 == v47) {
          v48 = 32;
        LABEL_90:
          (*(void (**)(__int64))(*(_QWORD*)v47 + v48))((__int64)v47);
        }
        else if (v47 != nullptr) {
          v48 = 40;
          goto LABEL_90;
        }
        if (v68_.v69 != nullptr) {
          if (v68_.v69 != v68_.v68) {
            *((_QWORD*)v38 + 16) = v68_.v69;
            v49 = v68_.v71;
            v68_.v69 = nullptr;
            *((_QWORD*)v38 + 18) = v68_.v70;
            *((_QWORD*)v38 + 19) = v49;
            goto LABEL_101;
          }
          v50 = v68_.v69;
          *((_QWORD*)v38 + 16) = v38 + 96;
          (*(void (**)(char*, _QWORD*))(*(_QWORD*)v50 + 24LL))(
              v50, (_QWORD*)v38 + 12);
        }
        else {
          *((_QWORD*)v38 + 16) = 0;
        }
        v51 = v68_.v69;
        v52 = v68_.v71;
        *((_QWORD*)v38 + 18) = v68_.v70;
        *((_QWORD*)v38 + 19) = v52;
        if (v51 == v68_.v68) {
          v53 = 32;
        LABEL_100:
          (*(void (**)(__int64))(*(_QWORD*)v51 + v53))((__int64)v51);
        }
        else if (v51 != nullptr) {
          v53 = 40;
          goto LABEL_100;
        }
      LABEL_101:
        if (v66_.v67 == v66_.v66) {
          v54 = 32;
        LABEL_105:
          (*(void (**)(__int64))(*(_QWORD*)v66_.v67 + v54))((__int64)v66_.v67);
        }
        else if (v66_.v67 != nullptr) {
          v54 = 40;
          goto LABEL_105;
        }
        result = v64_.v65;
        if (v64_.v65 == v64_.v64) {
          v17 = 32;
          goto LABEL_13;
        }
        if (v64_.v65 != nullptr) {
          v17 = 40;
        LABEL_13:
          result = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)v64_.v65 + v17))(
              (__int64)v64_.v65);
        }
      LABEL_14:
        v14 = v18 + 160;
        v15 += 160;
        v16 = v18;
        if (v18 + 160 != a2) {
          goto LABEL_15;
        }
        return result;
      }
      v22 -= 160;
      if ((int)v68_.v70 >= (signed __int32)*((_DWORD*)v38 - 4)) {
        v40 = (__int64)&v6[v22 + 160];
        goto LABEL_66;
      }
    }
  }
  v8 = a3 >> 1;
  v9 = a4;
  v10 = a3 - (a3 >> 1);
  v11 = 160 * (a3 >> 1);
  v12 = &result[v11];
  if ((__int64)a3 > a5) {
    llvm_libcxx_21_libcxx_include___vector_bef640(result, v12, a3 >> 1, a4, a5);
    llvm_libcxx_21_libcxx_include___vector_bef640(&v6[v11], a2, v10, v9, a5);
    return llvm_libcxx_21_libcxx_include___vector_bf0be0(v6, &v6[v11], a2, v8,
                                                         v10, v9, a5);
  }
  llvm_libcxx_21_libcxx_include___vector_befd80_alt1((__int64)result, v12,
                                                     a3 >> 1, a4);
  v55 = &v9[v11];
  result = (char*)llvm_libcxx_21_libcxx_include___vector_befd80_alt1(
      (__int64)&v6[v11], a2, v7 - (v7 >> 1), &v9[v11]);
  v56 = &v9[v11];
  v57 = v9;
  v58 = &v9[160 * v7];
  while (v56 != v58) {
    if ((signed __int32)*((_DWORD*)v56 + 36) >=
        (signed __int32)*((_DWORD*)v57 + 36)) {
      result = (char*)GameRoutine_bf1600(v6, v57);
      v57 += 160;
    }
    else {
      result = (char*)GameRoutine_bf1600(v6, v56);
      v56 += 160;
    }
    v6 += 160;
    if (v57 == v55) {
      while (v56 != v58) {
        result = (char*)GameRoutine_bf1600(v6, v56);
        v56 += 160;
        v6 += 160;
      }
      goto LABEL_120;
    }
  }
  while (v57 != v55) {
    result = (char*)GameRoutine_bf1600(v6, v57);
    v57 += 160;
    v6 += 160;
  }
LABEL_120:
  if (v9 != nullptr) {
    do {
      v60 = *((char**)v9 + 16);
      if (v9 + 96 == v60) {
        v61 = 32;
      }
      else {
        if (v60 == nullptr) {
          goto LABEL_130;
        }
        v61 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v60 + v61))((__int64)v60);
    LABEL_130:
      v62 = *((char**)v9 + 10);
      if (v9 + 48 == v62) {
        v63 = 32;
      }
      else {
        if (v62 == nullptr) {
          goto LABEL_135;
        }
        v63 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v62 + v63))((__int64)v62);
    LABEL_135:
      result = *((char**)v9 + 4);
      if (v9 == result) {
        v59 = 32;
      }
      else {
        if (result == nullptr) {
          goto LABEL_124;
        }
        v59 = 40;
      }
      result = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)result + v59))(
          (__int64)result);
    LABEL_124:
      v9 += 160;
      --v7;
    } while (v7 != 0);
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___vector_befd80(__int64 result,
                                                      __int64 a2, __int64 a3,
                                                      _QWORD* a4)
{
  _QWORD* v4;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  _QWORD* v44;
  _QWORD* v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  _QWORD* v52;
  _QWORD* v53;
  _QWORD* v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  _QWORD* v71;
  _QWORD* v72;
  _QWORD* v73;
  _QWORD* v74;
  _QWORD* v75;
  _QWORD* v76;
  _QWORD* v77;
  _QWORD* v78;
  _QWORD* v79;
  _QWORD* v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  char* v85;
  _DWORD* v86;
  _QWORD* v87;
  __int64 v88;
  _QWORD* v89;
  char* v90;
  _QWORD* v91;
  __int64 v92;
  __int64 v93;
  char* v94;
  char* v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  char* v99;

  if (a3 == 0) {
    return result;
  }
  v4 = a4;
  v6 = (_QWORD*)result;
  if (a3 == 2) {
    v10 = (_QWORD*)(a2 - 16);
    v11 = (__int64*)(result + 144);
    v12 = a2 - 160;
    if ((signed __int32)*(_DWORD*)(a2 - 16) <
        (signed __int32)*(_DWORD*)(result + 144)) {
      v13 = *(_QWORD*)(a2 - 128);
      if (v13 != 0) {
        if (v13 == v12) {
          a4[4] = a4;
          result = (*(__int64 (**)(_QWORD, _QWORD*))(
              **(_QWORD**)(a2 - 128) + 24LL))(*(_QWORD*)(a2 - 128), a4);
          v14 = *(_QWORD*)(a2 - 80);
          if (v14 != 0) {
            goto LABEL_15;
          }
        }
        else {
          a4[4] = v13;
          *(_QWORD*)(a2 - 128) = 0;
          v14 = *(_QWORD*)(a2 - 80);
          if (v14 != 0) {
          LABEL_15:
            if (v14 != a2 - 112) {
              v4[10] = v14;
              *(_QWORD*)(a2 - 80) = 0;
              v15 = *(_QWORD*)(a2 - 32);
              if (v15 != 0) {
                goto LABEL_17;
              }
            LABEL_84:
              v4[16] = 0;
              goto LABEL_130;
            }
            v4[10] = v4 + 6;
            result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 - 80) + 24LL))(
                *(_QWORD*)(a2 - 80));
            v15 = *(_QWORD*)(a2 - 32);
            if (v15 == 0) {
              goto LABEL_84;
            }
          LABEL_17:
            if (v15 == a2 - 64) {
              v4[16] = v4 + 12;
              result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 - 32) + 24LL))(
                  *(_QWORD*)(a2 - 32));
            }
            else {
              v4[16] = v15;
              *(_QWORD*)(a2 - 32) = 0;
            }
          LABEL_130:
            v60 = *(_QWORD*)(a2 - 8);
            v4[18] = *v10;
            v4[19] = v60;
            v61 = (_QWORD*)v6[4];
            if (v61 != nullptr) {
              if (v61 == v6) {
                v4[24] = v4 + 20;
                result =
                    (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[4] + 24LL))(v6[4]);
                v62 = (_QWORD*)v6[10];
                if (v62 != nullptr) {
                  goto LABEL_133;
                }
              }
              else {
                v4[24] = v61;
                v6[4] = 0;
                v62 = (_QWORD*)v6[10];
                if (v62 != nullptr) {
                LABEL_133:
                  if (v62 != v6 + 6) {
                    v4[30] = v62;
                    v6[10] = 0;
                    v63 = (_QWORD*)v6[16];
                    if (v63 != nullptr) {
                      goto LABEL_135;
                    }
                  LABEL_139:
                    v4[36] = 0;
                  LABEL_160:
                    v4[39] = v6[19];
                    v68 = *v11;
                  LABEL_167:
                    v4[38] = v68;
                    return result;
                  }
                  v4[30] = v4 + 26;
                  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[10] + 24LL))(
                      v6[10]);
                  v63 = (_QWORD*)v6[16];
                  if (v63 == nullptr) {
                    goto LABEL_139;
                  }
                LABEL_135:
                  if (v63 == v6 + 12) {
                    v4[36] = v4 + 32;
                    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[16] + 24LL))(
                        v6[16]);
                  }
                  else {
                    v4[36] = v63;
                    v6[16] = 0;
                  }
                  goto LABEL_160;
                }
              }
            }
            else {
              v4[24] = 0;
              v62 = (_QWORD*)v6[10];
              if (v62 != nullptr) {
                goto LABEL_133;
              }
            }
            v4[30] = 0;
            v63 = (_QWORD*)v6[16];
            if (v63 == nullptr) {
              goto LABEL_139;
            }
            goto LABEL_135;
          }
        }
      }
      else {
        a4[4] = 0;
        v14 = *(_QWORD*)(a2 - 80);
        if (v14 != 0) {
          goto LABEL_15;
        }
      }
      v4[10] = 0;
      v15 = *(_QWORD*)(a2 - 32);
      if (v15 == 0) {
        goto LABEL_84;
      }
      goto LABEL_17;
    }
    v19 = *(_QWORD*)(result + 32);
    if (v19 != 0) {
      if (v19 == result) {
        a4[4] = a4;
        result = (*(__int64 (**)(_QWORD, _QWORD*))(
            **(_QWORD**)(result + 32) + 24LL))(*(_QWORD*)(result + 32), a4);
        v20 = (_QWORD*)v6[10];
        if (v20 != nullptr) {
          goto LABEL_31;
        }
      }
      else {
        a4[4] = v19;
        *(_QWORD*)(result + 32) = 0;
        v20 = *(_QWORD**)(result + 80);
        if (v20 != nullptr) {
        LABEL_31:
          if (v20 != v6 + 6) {
            v4[10] = v20;
            v6[10] = 0;
            v21 = (_QWORD*)v6[16];
            if (v21 != nullptr) {
              goto LABEL_33;
            }
          LABEL_87:
            v4[16] = 0;
            goto LABEL_145;
          }
          v4[10] = v4 + 6;
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[10] + 24LL))(v6[10]);
          v21 = (_QWORD*)v6[16];
          if (v21 == nullptr) {
            goto LABEL_87;
          }
        LABEL_33:
          if (v21 == v6 + 12) {
            v4[16] = v4 + 12;
            result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[16] + 24LL))(v6[16]);
          }
          else {
            v4[16] = v21;
            v6[16] = 0;
          }
        LABEL_145:
          v64 = v6[19];
          v4[18] = *v11;
          v4[19] = v64;
          v65 = *(_QWORD*)(a2 - 128);
          if (v65 != 0) {
            if (v65 == v12) {
              v4[24] = v4 + 20;
              result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 - 128) + 24LL))(
                  *(_QWORD*)(a2 - 128));
              v66 = *(_QWORD*)(a2 - 80);
              if (v66 != 0) {
                goto LABEL_148;
              }
            }
            else {
              v4[24] = v65;
              *(_QWORD*)(a2 - 128) = 0;
              v66 = *(_QWORD*)(a2 - 80);
              if (v66 != 0) {
              LABEL_148:
                if (v66 != a2 - 112) {
                  v4[30] = v66;
                  *(_QWORD*)(a2 - 80) = 0;
                  v67 = *(_QWORD*)(a2 - 32);
                  if (v67 != 0) {
                    goto LABEL_150;
                  }
                LABEL_154:
                  v4[36] = 0;
                LABEL_166:
                  v4[39] = *(_QWORD*)(a2 - 8);
                  v68 = *v10;
                  goto LABEL_167;
                }
                v4[30] = v4 + 26;
                result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 - 80) +
                                                  24LL))(*(_QWORD*)(a2 - 80));
                v67 = *(_QWORD*)(a2 - 32);
                if (v67 == 0) {
                  goto LABEL_154;
                }
              LABEL_150:
                if (v67 == a2 - 64) {
                  v4[36] = v4 + 32;
                  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 - 32) +
                                                    24LL))(*(_QWORD*)(a2 - 32));
                }
                else {
                  v4[36] = v67;
                  *(_QWORD*)(a2 - 32) = 0;
                }
                goto LABEL_166;
              }
            }
          }
          else {
            v4[24] = 0;
            v66 = *(_QWORD*)(a2 - 80);
            if (v66 != 0) {
              goto LABEL_148;
            }
          }
          v4[30] = 0;
          v67 = *(_QWORD*)(a2 - 32);
          if (v67 == 0) {
            goto LABEL_154;
          }
          goto LABEL_150;
        }
      }
    }
    else {
      a4[4] = 0;
      v20 = *(_QWORD**)(result + 80);
      if (v20 != nullptr) {
        goto LABEL_31;
      }
    }
    v4[10] = 0;
    v21 = (_QWORD*)v6[16];
    if (v21 == nullptr) {
      goto LABEL_87;
    }
    goto LABEL_33;
  }
  if (a3 == 1) {
    v7 = *(_QWORD*)(result + 32);
    if (v7 != 0) {
      if (v7 == result) {
        a4[4] = a4;
        result = (*(__int64 (**)(_QWORD, _QWORD*))(
            **(_QWORD**)(result + 32) + 24LL))(*(_QWORD*)(result + 32), a4);
        v8 = (_QWORD*)v6[10];
        if (v8 != nullptr) {
          goto LABEL_7;
        }
      }
      else {
        a4[4] = v7;
        *(_QWORD*)(result + 32) = 0;
        v8 = *(_QWORD**)(result + 80);
        if (v8 != nullptr) {
        LABEL_7:
          if (v8 != v6 + 6) {
            v4[10] = v8;
            v6[10] = 0;
            v9 = (_QWORD*)v6[16];
            if (v9 != nullptr) {
              goto LABEL_9;
            }
          LABEL_75:
            v4[16] = 0;
          LABEL_81:
            v4[19] = v6[19];
            v4[18] = v6[18];
            return result;
          }
          v4[10] = v4 + 6;
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[10] + 24LL))(v6[10]);
          v9 = (_QWORD*)v6[16];
          if (v9 == nullptr) {
            goto LABEL_75;
          }
        LABEL_9:
          if (v9 == v6 + 12) {
            v4[16] = v4 + 12;
            result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[16] + 24LL))(v6[16]);
          }
          else {
            v4[16] = v9;
            v6[16] = 0;
          }
          goto LABEL_81;
        }
      }
    }
    else {
      a4[4] = 0;
      v8 = *(_QWORD**)(result + 80);
      if (v8 != nullptr) {
        goto LABEL_7;
      }
    }
    v4[10] = 0;
    v9 = (_QWORD*)v6[16];
    if (v9 == nullptr) {
      goto LABEL_75;
    }
    goto LABEL_9;
  }
  if (a3 <= 8) {
    if (result == a2) {
      return result;
    }
    v16 = *(_QWORD*)(result + 32);
    if (v16 != 0) {
      if (v16 == result) {
        a4[4] = a4;
        result = (*(__int64 (**)(_QWORD, _QWORD*))(
            **(_QWORD**)(result + 32) + 24LL))(*(_QWORD*)(result + 32), a4);
        v17 = (_QWORD*)v6[10];
        if (v17 != nullptr) {
          goto LABEL_24;
        }
      }
      else {
        a4[4] = v16;
        *(_QWORD*)(result + 32) = 0;
        v17 = *(_QWORD**)(result + 80);
        if (v17 != nullptr) {
        LABEL_24:
          if (v17 != v6 + 6) {
            v4[10] = v17;
            v6[10] = 0;
            v18 = (_QWORD*)v6[16];
            if (v18 != nullptr) {
              goto LABEL_26;
            }
          LABEL_171:
            v4[16] = 0;
          LABEL_177:
            v4[19] = v6[19];
            v4[18] = v6[18];
            v69 = v6 + 20;
            if (v6 + 20 == (_QWORD*)a2) {
              return result;
            }
            v70 = 0;
            v71 = v4;
            while (1) {
              v73 = v69;
              v74 = v6 + 38;
              v75 = v71 + 20;
              if ((signed __int32)*((_DWORD*)v6 + 76) >=
                  (signed __int32)*((_DWORD*)v71 + 36)) {
                v79 = (_QWORD*)v6[24];
                if (v79 != nullptr) {
                  if (v79 != v73) {
                    v71[24] = v79;
                    v6[24] = 0;
                    v80 = (_QWORD*)v6[30];
                    if (v80 != nullptr) {
                      goto LABEL_193;
                    }
                  LABEL_201:
                    v71[30] = 0;
                    v81 = (_QWORD*)v6[36];
                    if (v81 == nullptr) {
                    LABEL_202:
                      v71[36] = 0;
                    LABEL_247:
                      v71[39] = v6[39];
                      v71[38] = *v74;
                      goto LABEL_181;
                    }
                  LABEL_195:
                    if (v81 == v6 + 32) {
                      v71[36] = v71 + 32;
                      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[36] +
                                                        24LL))(v6[36]);
                    }
                    else {
                      v71[36] = v81;
                      v6[36] = 0;
                    }
                    goto LABEL_247;
                  }
                  v71[24] = v75;
                  result = (*(__int64 (**)(_QWORD, _QWORD*))(
                      *(_QWORD*)v6[24] + 24LL))(v6[24], v71 + 20);
                  v80 = (_QWORD*)v6[30];
                  if (v80 == nullptr) {
                    goto LABEL_201;
                  }
                }
                else {
                  v71[24] = 0;
                  v80 = (_QWORD*)v6[30];
                  if (v80 == nullptr) {
                    goto LABEL_201;
                  }
                }
              LABEL_193:
                if (v80 == v6 + 26) {
                  v71[30] = v71 + 26;
                  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[30] + 24LL))(
                      v6[30]);
                  v81 = (_QWORD*)v6[36];
                  if (v81 == nullptr) {
                    goto LABEL_202;
                  }
                }
                else {
                  v71[30] = v80;
                  v6[30] = 0;
                  v81 = (_QWORD*)v6[36];
                  if (v81 == nullptr) {
                    goto LABEL_202;
                  }
                }
                goto LABEL_195;
              }
              v76 = (_QWORD*)v71[4];
              if (v76 != nullptr) {
                if (v76 == v71) {
                  v71[24] = v75;
                  (*(void (**)(_QWORD*, _QWORD*))(*v76 + 24LL))(v76, v71 + 20);
                  v77 = (_QWORD*)v71[10];
                  if (v77 == nullptr) {
                  LABEL_198:
                    v71[30] = 0;
                    v78 = (_QWORD*)v71[16];
                    if (v78 != nullptr) {
                      goto LABEL_188;
                    }
                    goto LABEL_199;
                  }
                }
                else {
                  v71[24] = v76;
                  v71[4] = 0;
                  v77 = (_QWORD*)v71[10];
                  if (v77 == nullptr) {
                    goto LABEL_198;
                  }
                }
              }
              else {
                v71[24] = 0;
                v77 = (_QWORD*)v71[10];
                if (v77 == nullptr) {
                  goto LABEL_198;
                }
              }
              if (v77 == v71 + 6) {
                v71[30] = v71 + 26;
                (*(void (**)(_QWORD*))(*v77 + 24LL))(v77);
                v78 = (_QWORD*)v71[16];
                if (v78 != nullptr) {
                LABEL_188:
                  if (v78 == v71 + 12) {
                    v71[36] = v71 + 32;
                    (*(void (**)(_QWORD*))(*v78 + 24LL))(v78);
                  }
                  else {
                    v71[36] = v78;
                    v71[16] = 0;
                  }
                  goto LABEL_208;
                }
              }
              else {
                v71[30] = v77;
                v71[10] = 0;
                v78 = (_QWORD*)v71[16];
                if (v78 != nullptr) {
                  goto LABEL_188;
                }
              }
            LABEL_199:
              v71[36] = 0;
            LABEL_208:
              v82 = v71[19];
              v72 = v4;
              v71[38] = v71[18];
              v71[39] = v82;
              if (v71 != v4) {
                v83 = v70;
                while (1) {
                  v72 = (_QWORD*)((char*)v4 + v83);
                  v86 = (_DWORD*)((char*)v4 + v83 - 16);
                  if ((signed __int32)*(_DWORD*)v74 >= (signed __int32)*v86) {
                    break;
                  }
                  v87 = (_QWORD*)v72[4];
                  v72[4] = 0;
                  if (v72 == v87) {
                    v88 = 32;
                  }
                  else {
                    if (v87 == nullptr) {
                      goto LABEL_218;
                    }
                    v88 = 40;
                  }
                  (*(void (**)(__int64))(*v87 + v88))((__int64)v87);
                LABEL_218:
                  v89 = *(_QWORD**)((char*)v4 + v83 - 128);
                  if (v89 != nullptr) {
                    if (v72 - 20 == v89) {
                      v72[4] = v72;
                      (*(void (**)(_QWORD*, char*))(*v89 + 24LL))(
                          v89, (char*)v4 + v83);
                    }
                    else {
                      v72[4] = v89;
                      *(_QWORD*)((char*)v4 + v83 - 128) = 0;
                    }
                  }
                  else {
                    v72[4] = 0;
                  }
                  v90 = (char*)v4 + v83;
                  v91 = *(_QWORD**)((char*)v4 + v83 + 80);
                  v92 = (__int64)v4 + v83 + 48;
                  *(_QWORD*)((char*)v4 + v83 + 80) = 0;
                  if ((_QWORD*)v92 == v91) {
                    v93 = 32;
                  }
                  else {
                    if (v91 == nullptr) {
                      goto LABEL_228;
                    }
                    v93 = 40;
                  }
                  (*(void (**)(__int64))(*v91 + v93))((__int64)v91);
                LABEL_228:
                  v94 = *(char**)((char*)v4 + v83 - 80);
                  if (v94 != nullptr) {
                    if (v90 - 112 == v94) {
                      *((_QWORD*)v90 + 10) = v92;
                      (*(void (**)(char*, __int64))(*(_QWORD*)v94 + 24LL))(
                          v94, (__int64)v4 + v83 + 48);
                    }
                    else {
                      *((_QWORD*)v90 + 10) = v94;
                      *(_QWORD*)((char*)v4 + v83 - 80) = 0;
                    }
                  }
                  else {
                    *((_QWORD*)v90 + 10) = 0;
                  }
                  v95 = (char*)v4 + v83;
                  v96 = *(_QWORD**)((char*)v4 + v83 + 128);
                  v97 = (__int64)v4 + v83 + 96;
                  *(_QWORD*)((char*)v4 + v83 + 128) = 0;
                  if ((_QWORD*)v97 == v96) {
                    v98 = 32;
                    goto LABEL_237;
                  }
                  if (v96 != nullptr) {
                    v98 = 40;
                  LABEL_237:
                    (*(void (**)(__int64))(*v96 + v98))((__int64)v96);
                  }
                  v99 = *(char**)((char*)v4 + v83 - 32);
                  if (v99 != nullptr) {
                    if (v95 - 64 == v99) {
                      *((_QWORD*)v95 + 16) = v97;
                      (*(void (**)(char*, __int64))(*(_QWORD*)v99 + 24LL))(
                          v99, (__int64)v4 + v83 + 96);
                    }
                    else {
                      *((_QWORD*)v95 + 16) = v99;
                      *(_QWORD*)((char*)v4 + v83 - 32) = 0;
                    }
                  }
                  else {
                    *((_QWORD*)v95 + 16) = 0;
                  }
                  v84 = *(_QWORD*)((char*)v4 + v83 - 8);
                  v85 = (char*)v4 + v83;
                  v83 -= 160;
                  *((_QWORD*)v85 + 18) = *(_QWORD*)v86;
                  *((_QWORD*)v85 + 19) = v84;
                  if (v83 == 0) {
                    v72 = v4;
                    break;
                  }
                }
              }
              result = (__int64)GameRoutine_bf1600(v72, v73);
            LABEL_181:
              v69 = v73 + 20;
              v70 += 160;
              v71 = v75;
              v6 = v73;
              if (v73 + 20 == (_QWORD*)a2) {
                return result;
              }
            }
          }
          v4[10] = v4 + 6;
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[10] + 24LL))(v6[10]);
          v18 = (_QWORD*)v6[16];
          if (v18 == nullptr) {
            goto LABEL_171;
          }
        LABEL_26:
          if (v18 == v6 + 12) {
            v4[16] = v4 + 12;
            result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[16] + 24LL))(v6[16]);
          }
          else {
            v4[16] = v18;
            v6[16] = 0;
          }
          goto LABEL_177;
        }
      }
    }
    else {
      a4[4] = 0;
      v17 = *(_QWORD**)(result + 80);
      if (v17 != nullptr) {
        goto LABEL_24;
      }
    }
    v4[10] = 0;
    v18 = (_QWORD*)v6[16];
    if (v18 == nullptr) {
      goto LABEL_171;
    }
    goto LABEL_26;
  }
  v22 = (unsigned __int64)a3 >> 1;
  v24 = 20 * ((unsigned __int64)a3 >> 1);
  v25 = v24 * 8 + result;
  llvm_libcxx_21_libcxx_include___vector_bef640_alt1(result, v24 * 8 + result,
                                                     v22, a4, v22);
  result = llvm_libcxx_21_libcxx_include___vector_bef640_alt1(
      v25, a2, a3 - v22, &v4[v24], a3 - v22);
  if (v24 != 0) {
    v26 = (_QWORD*)v25;
    while (1) {
      if (v26 == (_QWORD*)a2) {
        if (v6 != (_QWORD*)v25) {
          v48 = 0;
          do {
            v51 = &v6[v48];
            v52 = &v4[v48];
            v53 = (_QWORD*)v6[v48 + 4];
            if (v53 != nullptr) {
              if (v51 == v53) {
                v52[4] = v52;
                result =
                    (*(__int64 (**)(_QWORD))(*(_QWORD*)v51[4] + 24LL))(v51[4]);
              }
              else {
                v52[4] = v53;
                v51[4] = 0;
              }
            }
            else {
              v52[4] = 0;
            }
            v54 = &v6[v48];
            v55 = &v4[v48];
            v56 = (_QWORD*)v6[v48 + 10];
            if (v56 != nullptr) {
              if (v54 + 6 == v56) {
                v55[10] = v55 + 6;
                result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v54[10] + 24LL))(
                    v54[10]);
              }
              else {
                v55[10] = v56;
                v54[10] = 0;
              }
            }
            else {
              v55[10] = 0;
            }
            v57 = &v6[v48];
            v58 = &v4[v48];
            v59 = (_QWORD*)v6[v48 + 16];
            if (v59 != nullptr) {
              if (v57 + 12 == v59) {
                v58[16] = v58 + 12;
                result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v57[16] + 24LL))(
                    v57[16]);
              }
              else {
                v58[16] = v59;
                v57[16] = 0;
              }
            }
            else {
              v58[16] = 0;
            }
            v49 = &v6[v48];
            v50 = &v4[v48];
            v48 += 20;
            v50[19] = v49[19];
            v50[18] = v49[18];
          } while (&v6[v48] != (_QWORD*)v25);
        }
        return result;
      }
      v28 = v26 + 18;
      v29 = v6 + 18;
      if ((signed __int32)*((_DWORD*)v26 + 36) <
          (signed __int32)*((_DWORD*)v6 + 36)) {
        v30 = (_QWORD*)v26[4];
        if (v30 != nullptr) {
          if (v30 != v26) {
            v4[4] = v30;
            v26[4] = 0;
            v31 = (_QWORD*)v26[10];
            if (v31 != nullptr) {
              goto LABEL_45;
            }
          LABEL_56:
            v4[10] = 0;
            v32 = (_QWORD*)v26[16];
            if (v32 == nullptr) {
            LABEL_57:
              v4[16] = 0;
            LABEL_66:
              v26 += 20;
              v4[19] = v28[1];
              v27 = *v28;
              goto LABEL_39;
            }
          LABEL_47:
            if (v32 == v26 + 12) {
              v4[16] = v4 + 12;
              result =
                  (*(__int64 (**)(_QWORD))(*(_QWORD*)v26[16] + 24LL))(v26[16]);
            }
            else {
              v4[16] = v32;
              v26[16] = 0;
            }
            goto LABEL_66;
          }
          v4[4] = v4;
          result = (*(__int64 (**)(_QWORD, _QWORD*))(*(_QWORD*)v26[4] + 24LL))(
              v26[4], v4);
          v31 = (_QWORD*)v26[10];
          if (v31 == nullptr) {
            goto LABEL_56;
          }
        }
        else {
          v4[4] = 0;
          v31 = (_QWORD*)v26[10];
          if (v31 == nullptr) {
            goto LABEL_56;
          }
        }
      LABEL_45:
        if (v31 == v26 + 6) {
          v4[10] = v4 + 6;
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v26[10] + 24LL))(v26[10]);
          v32 = (_QWORD*)v26[16];
          if (v32 == nullptr) {
            goto LABEL_57;
          }
        }
        else {
          v4[10] = v31;
          v26[10] = 0;
          v32 = (_QWORD*)v26[16];
          if (v32 == nullptr) {
            goto LABEL_57;
          }
        }
        goto LABEL_47;
      }
      v33 = (_QWORD*)v6[4];
      if (v33 != nullptr) {
        if (v33 == v6) {
          v4[4] = v4;
          result = (*(__int64 (**)(_QWORD, _QWORD*))(*(_QWORD*)v6[4] + 24LL))(
              v6[4], v4);
          v34 = (_QWORD*)v6[10];
          if (v34 == nullptr) {
          LABEL_59:
            v4[10] = 0;
            v35 = (_QWORD*)v6[16];
            if (v35 != nullptr) {
              goto LABEL_70;
            }
            goto LABEL_37;
          }
        }
        else {
          v4[4] = v33;
          v6[4] = 0;
          v34 = (_QWORD*)v6[10];
          if (v34 == nullptr) {
            goto LABEL_59;
          }
        }
      }
      else {
        v4[4] = 0;
        v34 = (_QWORD*)v6[10];
        if (v34 == nullptr) {
          goto LABEL_59;
        }
      }
      if (v34 == v6 + 6) {
        v4[10] = v4 + 6;
        result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[10] + 24LL))(v6[10]);
        v35 = (_QWORD*)v6[16];
        if (v35 != nullptr) {
        LABEL_70:
          if (v35 == v6 + 12) {
            v4[16] = v4 + 12;
            result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6[16] + 24LL))(v6[16]);
          }
          else {
            v4[16] = v35;
            v6[16] = 0;
          }
          goto LABEL_38;
        }
      }
      else {
        v4[10] = v34;
        v6[10] = 0;
        v35 = (_QWORD*)v6[16];
        if (v35 != nullptr) {
          goto LABEL_70;
        }
      }
    LABEL_37:
      v4[16] = 0;
    LABEL_38:
      v6 += 20;
      v4[19] = v29[1];
      v27 = *v29;
    LABEL_39:
      v4[18] = v27;
      v4 += 20;
      if (v6 == (_QWORD*)v25) {
        goto LABEL_89;
      }
    }
  }
  v26 = (_QWORD*)v25;
LABEL_89:
  if (v26 != (_QWORD*)a2) {
    v36 = 0;
    do {
      v39 = &v26[v36];
      v40 = &v4[v36];
      v41 = (_QWORD*)v26[v36 + 4];
      if (v41 != nullptr) {
        if (v39 == v41) {
          v40[4] = v40;
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v39[4] + 24LL))(v39[4]);
        }
        else {
          v40[4] = v41;
          v39[4] = 0;
        }
      }
      else {
        v40[4] = 0;
      }
      v42 = &v26[v36];
      v43 = &v4[v36];
      v44 = (_QWORD*)v26[v36 + 10];
      if (v44 != nullptr) {
        if (v42 + 6 == v44) {
          v43[10] = v43 + 6;
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v42[10] + 24LL))(v42[10]);
        }
        else {
          v43[10] = v44;
          v42[10] = 0;
        }
      }
      else {
        v43[10] = 0;
      }
      v45 = &v26[v36];
      v46 = &v4[v36];
      v47 = (_QWORD*)v26[v36 + 16];
      if (v47 != nullptr) {
        if (v45 + 12 == v47) {
          v46[16] = v46 + 12;
          result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v45[16] + 24LL))(v45[16]);
        }
        else {
          v46[16] = v47;
          v45[16] = 0;
        }
      }
      else {
        v46[16] = 0;
      }
      v37 = &v26[v36];
      v38 = &v4[v36];
      v36 += 20;
      v38[19] = v37[19];
      v38[18] = v37[18];
    } while (&v26[v36] != (_QWORD*)a2);
  }
  return result;
}

char* llvm_libcxx_21_libcxx_include___vector_bf0be0(char* result, char* a2,
                                                    char* a3, __int64 a4,
                                                    __int64 a5, char* a6,
                                                    __int64 a7)
{
  char* v11;
  __int64 v12;
  __int64 i;
  char* v14;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  int v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  int v29;
  char* v30;
  char* v31;
  char* j;
  char* v33;
  char* v34;
  _BOOL4 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  char* v44;
  char* v45;
  char* v46;
  char* v47;
  char* v48;
  char* v49;
  char* v50;
  char* v51;
  char* v52;
  char* v53;
  __int64 v54;
  char* v55;
  char* v56;
  char* v57;
  char* v58;
  char* v59;
  char* v60;
  char* v61;
  char* v62;
  char* v63;
  char* v64;
  char* v65;
  char* v66;
  int v67;
  int v68;
  char* v69;
  char* v70;
  char* v71;
  __int64 v72;
  char* v73;
  __int64 v74;
  char* v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;

  if (a5 != 0) {
    v11 = result;
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v12 = -a4;
      for (i = 0;; i += 160) {
        v14 = &v11[i];
        if ((signed __int32)*((_DWORD*)a2 + 36) <
            (signed __int32)*(_DWORD*)&v11[i + 144]) {
          break;
        }
        if (__CFADD__(v12++, 1)) {
          return result;
        }
      }
      v16 = -v12;
      v81 = a3;
      if (-v12 >= a5) {
        if (v12 == -1) {
          return (char*)GameRoutine_bf1300(&v11[i], a2);
        }
        v24 = v16 / 2;
        v18 = &v11[160 * (v16 / 2) + i];
        v25 = a3 - a2;
        if (a3 != a2) {
          a3 = a2;
          v26 = 0xCCCCCCCCCCCCCCCDLL * (v25 >> 5);
          do {
            v27 = v26 >> 1;
            v28 = &a3[160 * (v26 >> 1)];
            v29 = *((_DWORD*)v28 + 36);
            v30 = v28 + 160;
            v26 += ~(v26 >> 1);
            if (v29 < (signed __int32)*((_DWORD*)v18 + 36)) {
              a3 = v30;
            }
            else {
              v26 = v27;
            }
          } while (v26 != 0);
        }
        v17 = 0xCCCCCCCCCCCCCCCDLL * ((a3 - a2) >> 5);
      }
      else {
        v17 = a5 / 2;
        a3 = &a2[160 * (a5 / 2)];
        if (v14 == a2) {
          v18 = a2;
        }
        else {
          v18 = &v11[i];
          v19 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - v11 - i) >> 5);
          do {
            v20 = v19 >> 1;
            v21 = &v18[160 * (v19 >> 1)];
            v22 = *((_DWORD*)v21 + 36);
            v23 = v21 + 160;
            v19 += ~(v19 >> 1);
            if ((signed __int32)*((_DWORD*)a3 + 36) < v22) {
              v19 = v20;
            }
            else {
              v18 = v23;
            }
          } while (v19 != 0);
        }
        v24 = 0xCCCCCCCCCCCCCCCDLL * ((v18 - v11 - i) >> 5);
      }
      v31 = a3;
      if (v18 != a2) {
        v31 = v18;
        if (a2 != a3) {
          v77 = v24;
          v78 = v17;
          v79 = a7;
          v80 = a5;
          GameRoutine_bf1300(v18, a2);
          v31 = v18 + 160;
          for (j = a2 + 160; j != a3; j += 160) {
            if (v31 == a2) {
              a2 = j;
            }
            GameRoutine_bf1300(v31, j);
            v31 += 160;
          }
          if (v31 != a2) {
            v33 = v31;
            v34 = a2;
            while (1) {
              GameRoutine_bf1300(v33, v34);
              v34 += 160;
              v35 = v33 + 160 == a2;
              if (v34 == a3) {
                if (v33 + 160 == a2) {
                  break;
                }
                v34 = a2 + 160;
                v33 += 320;
                while (1) {
                  GameRoutine_bf1300((_QWORD*)v33 - 20, a2);
                  v35 = v33 == a2;
                  if (v34 != a3) {
                    break;
                  }
                  v36 = v33 == a2;
                  v33 += 160;
                  if (v36) {
                    goto LABEL_47;
                  }
                }
              }
              else {
                v33 += 160;
              }
              if (v35) {
                a2 = v34;
              }
            }
          }
        LABEL_47:
          a5 = v80;
          v17 = v78;
          a7 = v79;
          v24 = v77;
        }
      }
      v37 = a5 - v17;
      a4 = -v12 - v24;
      if ((__int64)(v24 + v17) >= (__int64)(a5 - (v24 + v17) - v12)) {
        v39 = v24;
        v40 = -v12 - v24;
        v38 = a7;
        v37 = v17;
        result = llvm_libcxx_21_libcxx_include___vector_bf0be0(
            v31, a3, v81, v40, a5 - v17, a6, a7);
        a3 = v18;
        a4 = v39;
        v81 = v31;
      }
      else {
        v38 = a7;
        result = llvm_libcxx_21_libcxx_include___vector_bf0be0(
            v14, v18, v31, v24, v17, a6, a7);
        v14 = v31;
      }
      a2 = a3;
      a3 = v81;
      a5 = v37;
      v11 = v14;
      a7 = v38;
      if (v37 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (v11 == a2) {
        return result;
      }
      v54 = 0;
      v42 = 0;
      do {
        v57 = &v11[v54];
        v58 = &a6[v54];
        v59 = *(char**)&v11[v54 + 32];
        if (v59 != nullptr) {
          if (v57 == v59) {
            *((_QWORD*)v58 + 4) = v58;
            (*(void (**)(_QWORD))(**((_QWORD**)v57 + 4) + 24LL))(
                *((_QWORD*)v57 + 4));
          }
          else {
            *((_QWORD*)v58 + 4) = v59;
            *((_QWORD*)v57 + 4) = 0;
          }
        }
        else {
          *((_QWORD*)v58 + 4) = 0;
        }
        v60 = &v11[v54];
        v61 = &a6[v54];
        v62 = *(char**)&v11[v54 + 80];
        if (v62 != nullptr) {
          if (v60 + 48 == v62) {
            *((_QWORD*)v61 + 10) = v61 + 48;
            (*(void (**)(_QWORD))(**((_QWORD**)v60 + 10) + 24LL))(
                *((_QWORD*)v60 + 10));
          }
          else {
            *((_QWORD*)v61 + 10) = v62;
            *((_QWORD*)v60 + 10) = 0;
          }
        }
        else {
          *((_QWORD*)v61 + 10) = 0;
        }
        v63 = &v11[v54];
        v64 = &a6[v54];
        v65 = *(char**)&v11[v54 + 128];
        if (v65 != nullptr) {
          if (v63 + 96 == v65) {
            *((_QWORD*)v64 + 16) = v64 + 96;
            (*(void (**)(_QWORD))(**((_QWORD**)v63 + 16) + 24LL))(
                *((_QWORD*)v63 + 16));
          }
          else {
            *((_QWORD*)v64 + 16) = v65;
            *((_QWORD*)v63 + 16) = 0;
          }
        }
        else {
          *((_QWORD*)v64 + 16) = 0;
        }
        v55 = &v11[v54];
        v56 = &a6[v54];
        v54 += 160;
        ++v42;
        *((_QWORD*)v56 + 19) = *((_QWORD*)v55 + 19);
        *((_QWORD*)v56 + 18) = *((_QWORD*)v55 + 18);
      } while (&v11[v54] != a2);
      v70 = &a6[v54];
      v71 = a6;
      while (a2 != a3) {
        if ((signed __int32)*((_DWORD*)a2 + 36) >=
            (signed __int32)*((_DWORD*)v71 + 36)) {
          result = (char*)GameRoutine_bf1600(v11, v71);
          v71 += 160;
        }
        else {
          result = (char*)GameRoutine_bf1600(v11, a2);
          a2 += 160;
        }
        v11 += 160;
        if (v70 == v71) {
          goto LABEL_112;
        }
      }
      do {
        result = (char*)GameRoutine_bf1600(v11, v71);
        v11 += 160;
        v36 = v70 - 160 == v71;
        v71 += 160;
      } while (!v36);
    }
    else {
      if (a2 == a3) {
        return result;
      }
      v41 = 0;
      v42 = 0;
      do {
        v45 = &a2[v41];
        v46 = &a6[v41];
        v47 = *(char**)&a2[v41 + 32];
        if (v47 != nullptr) {
          if (v45 == v47) {
            *((_QWORD*)v46 + 4) = v46;
            (*(void (**)(_QWORD))(**((_QWORD**)v45 + 4) + 24LL))(
                *((_QWORD*)v45 + 4));
          }
          else {
            *((_QWORD*)v46 + 4) = v47;
            *((_QWORD*)v45 + 4) = 0;
          }
        }
        else {
          *((_QWORD*)v46 + 4) = 0;
        }
        v48 = &a2[v41];
        v49 = &a6[v41];
        v50 = *(char**)&a2[v41 + 80];
        if (v50 != nullptr) {
          if (v48 + 48 == v50) {
            *((_QWORD*)v49 + 10) = v49 + 48;
            (*(void (**)(_QWORD))(**((_QWORD**)v48 + 10) + 24LL))(
                *((_QWORD*)v48 + 10));
          }
          else {
            *((_QWORD*)v49 + 10) = v50;
            *((_QWORD*)v48 + 10) = 0;
          }
        }
        else {
          *((_QWORD*)v49 + 10) = 0;
        }
        v51 = &a2[v41];
        v52 = &a6[v41];
        v53 = *(char**)&a2[v41 + 128];
        if (v53 != nullptr) {
          if (v51 + 96 == v53) {
            *((_QWORD*)v52 + 16) = v52 + 96;
            (*(void (**)(_QWORD))(**((_QWORD**)v51 + 16) + 24LL))(
                *((_QWORD*)v51 + 16));
          }
          else {
            *((_QWORD*)v52 + 16) = v53;
            *((_QWORD*)v51 + 16) = 0;
          }
        }
        else {
          *((_QWORD*)v52 + 16) = 0;
        }
        v43 = &a2[v41];
        v44 = &a6[v41];
        v41 += 160;
        ++v42;
        *((_QWORD*)v44 + 19) = *((_QWORD*)v43 + 19);
        *((_QWORD*)v44 + 18) = *((_QWORD*)v43 + 18);
      } while (&a2[v41] != a3);
      result = a3 - 160;
      v66 = &a6[v41];
      while (a2 != v11) {
        v67 = *((_DWORD*)a2 - 4);
        v68 = *((_DWORD*)v66 - 4);
        if (v68 >= v67) {
          v69 = v66 - 160;
        }
        else {
          v69 = a2 - 160;
        }
        if (v68 >= v67) {
          v66 -= 160;
        }
        else {
          a2 -= 160;
        }
        result = (char*)(GameRoutine_bf1600(result, v69) - 20);
        if (v66 == a6) {
          goto LABEL_112;
        }
      }
      for (; v66 != a6;
           result = (char*)(GameRoutine_bf1600(result, v66) - 20)) {
        v66 -= 160;
      }
    }
  LABEL_112:
    if (a6 != nullptr && v42 != 0) {
      do {
        v73 = *((char**)a6 + 16);
        if (a6 + 96 == v73) {
          v74 = 32;
        }
        else {
          if (v73 == nullptr) {
            goto LABEL_123;
          }
          v74 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v73 + v74))((__int64)v73);
      LABEL_123:
        v75 = *((char**)a6 + 10);
        if (a6 + 48 == v75) {
          v76 = 32;
        }
        else {
          if (v75 == nullptr) {
            goto LABEL_128;
          }
          v76 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v75 + v76))((__int64)v75);
      LABEL_128:
        result = *((char**)a6 + 4);
        if (a6 == result) {
          v72 = 32;
        }
        else {
          if (result == nullptr) {
            goto LABEL_117;
          }
          v72 = 40;
        }
        result = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)result + v72))(
            (__int64)result);
      LABEL_117:
        a6 += 160;
        --v42;
      } while (v42 != 0);
    }
  }
  return result;
}

_QWORD* llvm_libcxx_21_libcxx_include___vector_bf9ca0(__int64 a1,
                                                      unsigned __int64* a2,
                                                      __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  _QWORD** v10;
  _QWORD* result;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  _BOOL8 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 primeEm;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v9 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v9 & v5;
    }
    v10 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v4);
    if (v10 != nullptr) {
      result = *v10;
      if (*v10 != nullptr) {
        if ((v6 & v9) == 0) {
          while (1) {
            v13 = result[1];
            if (v13 == v5) {
              if (result[2] == v5) {
                return result;
              }
            }
            else if ((v13 & v9) != v4) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v12 = result[1];
          if (v12 == v5) {
            if (result[2] == v5) {
              return result;
            }
          }
          else {
            if (v12 >= v6) {
              v12 %= v6;
            }
            if (v12 != v4) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v15 = *a4;
  *result = 0;
  result[1] = v5;
  v16 = *v15;
  result[10] = 0;
  result[11] = 0;
  result[8] = 0;
  result[9] = 0;
  result[24] = 0;
  result[25] = 0;
  result[22] = 0;
  result[23] = 0;
  result[20] = 0;
  result[21] = 0;
  result[18] = 0;
  result[19] = 0;
  result[16] = 0;
  result[17] = 0;
  result[14] = 0;
  result[15] = 0;
  result[12] = 0;
  result[13] = 0;
  result[6] = 0;
  result[7] = 0;
  result[4] = 0;
  result[5] = 0;
  result[2] = v16;
  v17 = *(_QWORD*)(a1 + 24) + 1LL;
  *((_OWORD*)result + 4) = GameData_1a82f20;
  *((_OWORD*)result + 5) = GameData_1a82ea0;
  v18 = *(float*)(a1 + 32);
  v19 = (float)(unsigned __int64)v17;
  if (v6 == 0 || (float)(v18 * (float)v6) < v19) {
    v20 = v19 / v18;
    v21 = true;
    if (v6 >= 3) {
      v21 = (v6 & (v6 - 1)) != 0;
    }
    v22 = v21 | (2 * v6);
    v23 = vcvtps_u64_f32(v20);
    if (v22 <= v23) {
      primeEm = v23;
    }
    else {
      primeEm = v22;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v25 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v25;
      v6 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v6) {
      if (primeEm >= v6) {
        goto LABEL_84;
      }
      v32 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v45 = result;
        v32 = std___1___next_prime(v32);
        result = v45;
      }
      else {
        v33 = 1LL << (-(char)__clz(v32 - 1) & 63);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (primeEm <= v32) {
        primeEm = v32;
      }
      if (primeEm >= v6) {
        goto LABEL_84;
      }
      if (primeEm == 0) {
        v46 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v46 != 0) {
          v47 = result;
          v48 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v48, v46);
          result = v47;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_84;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v26 = result;
    v27 = fw_memory_HeapManager_Allocate(*v14, 8 * primeEm, 16, 0);
    v28 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v27;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v29, v28);
    }
    v30 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v31 = 0;
      result = v26;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 48) = 0;
        v34 = *(_QWORD*)a1 + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v34 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v31);
    }
    else {
      v31 = 0;
      result = v26;
    }
    if ((primeEm & 7) != 0) {
      v35 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(*(_QWORD*)a1 + v35) = 0;
        v35 += 8;
      } while (v30 != 0);
    }
    v37 = a1 + 16;
    v36 = *(_QWORD**)(a1 + 16);
    if (v36 != nullptr) {
      v38 = v36[1];
      v39 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v38 >= primeEm) {
          v38 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v37;
        v40 = (_QWORD*)*v36;
        if (*v36 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v41 = v40[1];
          if (v41 >= primeEm) {
            v41 %= primeEm;
          }
          if (v41 != v38) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
              goto LABEL_61;
            }
            *v36 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
            v40 = v36;
          }
          v41 = v38;
        LABEL_61:
          v36 = v40;
          v40 = (_QWORD*)*v40;
          v38 = v41;
          if (v40 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v42 = v38 & v39;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
      while (1) {
        v43 = (_QWORD*)*v36;
        if (*v36 == 0) {
          break;
        }
        v44 = v43[1] & v39;
        if (v44 == v42) {
          v36 = (_QWORD*)*v36;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) != 0) {
          *v36 = *v43;
          *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v36;
          v36 = v43;
          v42 = v44;
        }
      }
    }
  LABEL_84:
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v49 = *(_QWORD*)a1;
  v50 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v50 != nullptr) {
    *result = *v50;
    *v50 = result;
  }
  else {
    v51 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v51;
    *(_QWORD*)(v49 + 8 * v4) = a1 + 16;
    if (*result != 0) {
      v52 = *(_QWORD*)(*result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v52 >= v6) {
          v52 %= v6;
        }
      }
      else {
        v52 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

_QWORD* llvm_libcxx_21_libcxx_include___vector_d9e140(__int64 a1,
                                                      unsigned __int8* a2,
                                                      __int64 a3, __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v43;

  v5 = *a2;
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = (__int64)(a2 + 1);
  }
  else {
    v10 = *((_QWORD*)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = std___1___hash_memory(v10, v11);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = v12;
  if (v13 != 0) {
    v15 = v13 - 1;
    if ((v13 & (v13 - 1)) != 0) {
      v4 = v12;
      if (v12 >= v13) {
        v4 = v12 % v13;
      }
    }
    else {
      v4 = v15 & v12;
    }
    v16 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
    if (v16 != nullptr) {
      v17 = (_QWORD*)*v16;
      if (*v16 != 0) {
        if ((v13 & v15) == 0) {
          while (1) {
            v22 = v17[1];
            if (v22 == v14) {
              v23 = *((unsigned __int8*)v17 + 16);
              v24 = v17[3];
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v11) {
                v25 = (v23 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
                if (memcmp(v25, v10, v11) == 0) {
                  return v17;
                }
              }
            }
            else if ((v22 & v15) != v4) {
              goto LABEL_41;
            }
            v17 = (_QWORD*)*v17;
            if (v17 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v18 = v17[1];
          if (v18 == v14) {
            v19 = *((unsigned __int8*)v17 + 16);
            v20 = v17[3];
            if ((v19 & 1) == 0) {
              v20 = v19 >> 1;
            }
            if (v20 == v11) {
              v21 = (v19 & 1) != 0 ? v17[4] : (__int64)v17 + 17;
              if (memcmp(v21, v10, v11) == 0) {
                return v17;
              }
            }
          }
          else {
            if (v18 >= v13) {
              v18 %= v13;
            }
            if (v18 != v4) {
              break;
            }
          }
          v17 = (_QWORD*)*v17;
        } while (v17 != nullptr);
      }
    }
  }
LABEL_41:
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v27 = *a4;
  *v26 = 0;
  v26[1] = v14;
  v17 = v26;
  v28 = *v27;
  v29 = v27[2];
  v26[3] = v27[1];
  v26[4] = v29;
  v26[2] = v28;
  v27[1] = 0;
  v27[2] = 0;
  *v27 = 0;
  v26[5] = 0;
  v26[6] = 0;
  v26[7] = 0;
  v30 = *(float*)(a1 + 32);
  v31 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v13 == 0 || (float)(v30 * (float)v13) < v31) {
    v32 = v31 / v30;
    v33 = true;
    if (v13 >= 3) {
      v33 = (v13 & (v13 - 1)) != 0;
    }
    v34 = v33 | (2 * v13);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *(_QWORD*)(a1 + 8);
    if (primeEm > v37) {
      goto LABEL_53;
    }
    if (primeEm < v37) {
      v38 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v38 = std___1___next_prime(v38);
      }
      else {
        v39 = 1LL << (-(char)__clz(v38 - 1) & 63);
        if (v38 >= 2) {
          v38 = v39;
        }
      }
      if (primeEm <= v38) {
        primeEm = v38;
      }
      if (primeEm < v37) {
      LABEL_53:
        GameRoutine_d9e4e0((__int64*)a1, primeEm);
      }
    }
    v13 = *(_QWORD*)(a1 + 8);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v4 = v14 % v13;
      }
      else {
        v4 = v14;
      }
    }
    else {
      v4 = (v13 - 1) & v14;
    }
  }
  v40 = *(_QWORD*)a1;
  v41 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v41 != nullptr) {
    *v17 = *v41;
    *v41 = v17;
  }
  else {
    v42 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v17;
    *v17 = v42;
    *(_QWORD*)(v40 + 8 * v4) = a1 + 16;
    if (*v17 != 0) {
      v43 = *(_QWORD*)(*v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v43 >= v13) {
          v43 %= v13;
        }
      }
      else {
        v43 &= v13 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v17;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v17;
}

__int64 llvm_libcxx_21_libcxx_include___vector_14a6dc0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      296, 16, 0);
  *(_QWORD*)(v5 + 16) = 0;
  v6 = GameData_2131678;
  *(_DWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_DWORD*)(v5 + 48) = 0x2000;
  v7 = v6 + 16;
  *(_DWORD*)(v5 + 104) = 0;
  *(_WORD*)(v5 + 108) = 256;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_WORD*)(v5 + 80) = 0;
  *(_DWORD*)(v5 + 112) = -1082130432;
  *(_WORD*)(v5 + 116) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_DWORD*)(v5 + 127) = 0;
  *(_DWORD*)(v5 + 292) = 2;
  *(_QWORD*)(a1 + 24) = v5;
  *(_QWORD*)(v5 + 24) = 0;
  v8 = v5 + 24;
  *(_QWORD*)v5 = v7;
  *(_QWORD*)(v5 + 8) = 0;
  v9 = *v4;
  *(_QWORD*)(a1 + 16) = v8;
  v10 = fw_memory_HeapManager_Allocate(v9, 296, 16, 0);
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)v10 = v7;
  v11 = v10;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 48) = 0x2000;
  *(_DWORD*)(v10 + 104) = 0;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(a1 + 40) = v10;
  v12 = *v4;
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(a1 + 32) = v11 + 24;
  v13 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
  *(_QWORD*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)v13 = v7;
  *(_DWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_DWORD*)(v13 + 48) = 0x2000;
  *(_DWORD*)(v13 + 104) = 0;
  *(_WORD*)(v13 + 108) = 256;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_WORD*)(v13 + 80) = 0;
  *(_DWORD*)(v13 + 112) = -1082130432;
  *(_WORD*)(v13 + 116) = 0;
  *(_WORD*)(v13 + 136) = 0;
  *(_BYTE*)(v13 + 160) = 0;
  *(_BYTE*)(v13 + 288) = 0;
  *(_QWORD*)(v13 + 272) = 0;
  *(_QWORD*)(v13 + 280) = 0;
  *(_QWORD*)(v13 + 256) = 0;
  *(_QWORD*)(v13 + 264) = 0;
  *(_QWORD*)(v13 + 240) = 0;
  *(_QWORD*)(v13 + 248) = 0;
  *(_QWORD*)(v13 + 224) = 0;
  *(_QWORD*)(v13 + 232) = 0;
  *(_QWORD*)(v13 + 208) = 0;
  *(_QWORD*)(v13 + 216) = 0;
  *(_QWORD*)(v13 + 192) = 0;
  *(_QWORD*)(v13 + 200) = 0;
  *(_QWORD*)(v13 + 176) = 0;
  *(_QWORD*)(v13 + 184) = 0;
  *(_QWORD*)(v13 + 168) = 0;
  *(_QWORD*)(v13 + 120) = 0;
  *(_DWORD*)(v13 + 127) = 0;
  *(_DWORD*)(v13 + 292) = 2;
  *(_QWORD*)(a1 + 56) = v13;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(a1 + 48) = v13 + 24;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 128) = -1;
  *(_QWORD*)(a1 + 112) = a2;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 120) = game_gmap_SpotMgr_FindSpot(*(unsigned int**)(a2 + 48));
  *(_DWORD*)a1 = *(unsigned __int16*)(a2 + 76);
  *(_DWORD*)(a1 + 4) = *(unsigned __int8*)(a2 + 74);
  GmapDisposFile_ae35a0((void*)(&v17_.v17), a2);
  if ((__int64*)(a1 + 64) != &v17_.v17) {
    GameRoutine_14a89d0((__int64*)(a1 + 64), v17_.v17, v17_.v18,
                        (v17_.v18 - v17_.v17) >> 3);
  }
  if (v17_.v17 != 0) {
    v14 = *v4;
    v17_.v18 = v17_.v17;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(v14 + v15, v17_.v17);
  }
  return GameHr_14a6a10(a1);
}

__int64 llvm_libcxx_21_libcxx_include___vector_14a73e0(__int64 a1)
{
  unsigned int* v2;
  char* v3;
  __int64* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  signed __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int*** v18;
  unsigned int*** v19;
  unsigned int** v20;
  int v21;
  bool v22;
  int v23;
  __int64 v24;
  int v25;
  __int64* v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  unsigned int v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 (**v40)();
  __int64 (**v41)();
  int v42;
  __int64 v43;
  __int64 (**v44)();
  __int64 (**v45)();
  struct {
    __int64 (**v47)();
    void* v48;
    char gap16_[16];
    unsigned __int64* v49;
  } v47_;

  v2 = game_gmap_SpotMgr_FindSpot(
      *(unsigned int**)(*(_QWORD*)(a1 + 112) + 48LL));
  if (v2 != nullptr) {
    GameHr_14a6a10(a1);
  }
  v5 = *(char**)(a1 + 88);
  v3 = *(char**)(a1 + 96);
  v4 = (__int64*)(a1 + 88);
  if (v5 != v3) {
    while (1) {
      v6 = *(_QWORD*)v5;
      if (*(_QWORD*)v5 == 0) {
        goto LABEL_27;
      }
      v7 = *(_QWORD*)(GameData_21c96e8 + 8);
      v9 = *(char**)(v7 + 8);
      v8 = *(char**)(v7 + 16);
      if (v9 != v8) {
        v10 = v8 - v9 - 8;
        if ((~(_BYTE)v10 & 0x18) == 0) {
        LABEL_12:
          if (v10 >= 0x18) {
            v9 += 16;
            while (1) {
              if (*((_QWORD*)v9 - 2) == v6) {
                if (v9 - 16 != v8) {
                  goto LABEL_24;
                }
                goto LABEL_27;
              }
              if (*((_QWORD*)v9 - 1) == v6) {
                v9 -= 8;
                goto LABEL_23;
              }
              if (*(_QWORD*)v9 == v6) {
                goto LABEL_23;
              }
              if (*((_QWORD*)v9 + 1) == v6) {
                break;
              }
              v12 = v9 + 16;
              v9 += 32;
              if (v12 == v8) {
                goto LABEL_27;
              }
            }
            if (v9 + 8 != v8) {
              goto LABEL_24;
            }
          }
          goto LABEL_27;
        }
        v11 = ((unsigned __int8)((unsigned int)v10 >> 3) + 1) & 3;
        while (*(_QWORD*)v9 != v6) {
          v9 += 8;
          if (--v11 == 0) {
            goto LABEL_12;
          }
        }
      }
    LABEL_23:
      if (v9 == v8) {
      LABEL_27:
        v13 = v3 - (v5 + 8);
        if (v3 != v5 + 8) {
          memmove((__int64)v5, (__int64)(v5 + 8), v3 - (v5 + 8));
        }
        v3 = &v5[v13];
        *(_QWORD*)(a1 + 96) = &v5[v13];
        if (v5 == &v5[v13]) {
        LABEL_29:
          v5 = (char*)*v4;
          goto LABEL_31;
        }
      }
      else {
      LABEL_24:
        v5 += 8;
        if (v5 == v3) {
          goto LABEL_29;
        }
      }
    }
  }
  v3 = *(char**)(a1 + 88);
LABEL_31:
  v14 = v3 - v5;
  v15 = *(_QWORD*)(a1 + 112);
  if (*(unsigned __int8*)(v15 + 72) > (unsigned __int64)(v14 >> 3)) {
    v16 = *(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64);
    if (v16 != 0) {
      if (v2 != nullptr) {
        v17 = *(_QWORD*)(GameData_21c96e8 + 8);
        v18 = *(unsigned int****)(v17 + 8);
        v19 = *(unsigned int****)(v17 + 16);
        while (v18 != v19) {
          v20 = *v18;
          if (**v18 == v2 && v20[12] == nullptr && v20[69] == nullptr) {
            return 1;
          }
          ++v18;
        }
      }
      v21 = *(_DWORD*)(a1 + 4);
      v22 = __OFSUB__(v21--, 1);
      *(_DWORD*)(a1 + 4) = v21;
      if ((v21 < 0) ^ v22 | (v21 == 0)) {
        *(_DWORD*)(a1 + 4) = *(unsigned __int8*)(v15 + 73);
        if (v16 == 8) {
          v47_.v47 = GameData_202bb48;
          v47_.v49 = (unsigned __int64*)&v47_.v47;
          v23 = game_gmap_TroopMgr_CountTroop_134e600((__int64)v2,
                                                      (__int64)&v47_.v47);
          if (v47_.v49 == (unsigned __int64*)&v47_.v47) {
            v24 = 32;
          }
          else {
            if (v47_.v49 == nullptr) {
              goto LABEL_58;
            }
            v24 = 40;
          }
          (*(void (**)(__int64))(*v47_.v49 + v24))((__int64)v47_.v49);
        LABEL_58:
          v47_.v48 = &GameData_1a86cf1;
          v47_.v47 =
              (__int64 (**)(void))game_HashString((__int64)&GameData_1a86cf1);
          v38 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v39 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v47_.v47);
            if (v39 == 0) {
              if (v23 >= 0) {
                return 1;
              }
            LABEL_62:
              if (GameData_21c96e8 != 0) {
                v40 = (__int64 (**)(void))game_gmap_1347960(
                    *(_QWORD*)(GameData_21c96e8 + 8), (__int64)v2,
                    **(_QWORD**)(a1 + 64));
                v47_.v47 = v40;
                if (v40 != nullptr) {
                  v41 = v40;
                  GameRoutine_14a7860(v4, &v47_.v47);
                  if (((_WORD)v41[68] & 0x400) == 0) {
                    *((_WORD*)v41 + 272) |= 0x400u;
                  }
                }
              }
              return 1;
            }
            v38 = *(_DWORD*)(v39 + 32);
          }
          if (v23 >= v38) {
            return 1;
          }
          goto LABEL_62;
        }
        v25 = (v16 >> 3) - (*(_DWORD*)(a1 + 128) != -1);
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v26 = game_map_MapRandom_instance__ptr[0];
        v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8);
        v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
        v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL)) ^
              (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((__int128*)0x10LL))
               << 11);
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) =
            *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((__int128*)0x10LL) + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 4) = v27;
        v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 8) = v28;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 12) = v30;
        v31 = v30 & 0x7FFFFFFF;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v32 = *(_DWORD*)(a1 + 128);
        v33 = v31 % v25;
        v47_.v49 = (unsigned __int64*)&v47_.v47;
        if (v32 == -1 || v33 < v32) {
          v35 = v31 % v25;
        }
        else {
          v35 = v33 + 1;
        }
        v47_.v47 = GameData_202bb48;
        v36 = game_gmap_TroopMgr_CountTroop_134e600((__int64)v2,
                                                    (__int64)&v47_.v47);
        if (v47_.v49 == (unsigned __int64*)&v47_.v47) {
          v37 = 32;
        }
        else {
          if (v47_.v49 == nullptr) {
            goto LABEL_68;
          }
          v37 = 40;
        }
        (*(void (**)(__int64))(*v47_.v49 + v37))((__int64)v47_.v49);
      LABEL_68:
        v47_.v48 = &GameData_1a86cf1;
        v47_.v47 =
            (__int64 (**)(void))game_HashString((__int64)&GameData_1a86cf1);
        v42 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v43 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v47_.v47);
          if (v43 == 0) {
            if (v36 >= 0) {
              return 1;
            }
          LABEL_72:
            if (GameData_21c96e8 != 0) {
              v44 = (__int64 (**)(void))game_gmap_1347960(
                  *(_QWORD*)(GameData_21c96e8 + 8), (__int64)v2,
                  *(_QWORD*)(*(_QWORD*)(a1 + 64) + 8LL * v35));
              v47_.v47 = v44;
              if (v44 != nullptr) {
                v45 = v44;
                *(_DWORD*)(a1 + 128) = v35;
                GameRoutine_14a7860((__int64*)(a1 + 88), &v47_.v47);
                if (((_WORD)v45[68] & 0x400) == 0) {
                  *((_WORD*)v45 + 272) |= 0x400u;
                }
              }
            }
            return 1;
          }
          v42 = *(_DWORD*)(v43 + 32);
        }
        if (v36 >= v42) {
          return 1;
        }
        goto LABEL_72;
      }
    }
  }
  return 1;
}

__int64 llvm_libcxx_21_libcxx_include___vector_15a71f0(__int64 a1, __int64* a2,
                                                       const char** a3, int* a4,
                                                       __int64 a5, int* a6)
{
  const char* v6;
  __int64 v7;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  int v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  char v24;
  __int64 v25;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    __int64 v29;
  } v27_;
  struct {
    __int64 v30;
    unsigned __int64 v31;
    char* v32;
  } v30_;

  v6 = *a3;
  v7 = *a2;
  v12 = strlen(*a3);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v30_.v31 = v13;
    v30_.v32 = v14;
    v30_.v30 = v15 | 1;
    goto LABEL_9;
  }
  LOBYTE(v30_.v30) = 2 * v12;
  v14 = (char*)&v30_.v30 + 1;
  if (v12 != 0) {
  LABEL_9:
    memmove((__int64)v14, (__int64)v6, v13);
  }
  v14[v13] = 0;
  v16 = *a4;
  if ((*(_BYTE*)a5 & 1) != 0) {
    fw_text_String_CopyTerminated(&v27_.v27, *(_QWORD*)(a5 + 16),
                                  *(_QWORD*)(a5 + 8));
  }
  else {
    v17 = *(_QWORD*)(a5 + 8);
    v27_.v27 = *(_QWORD*)a5;
    v27_.v28 = v17;
    v27_.v29 = *(_QWORD*)(a5 + 16);
  }
  v18 = v30_.v30;
  v19 = v30_.v31;
  v20 = *a6;
  *(_DWORD*)(a1 + 32) = v16;
  *(_QWORD*)a1 = v7;
  *(_QWORD*)(a1 + 8) = v18;
  v21 = v30_.v32;
  *(_QWORD*)(a1 + 16) = v19;
  *(_QWORD*)(a1 + 24) = v21;
  if ((v27_.v27 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(a1 + 40), v27_.v29, v27_.v28);
    v24 = v27_.v27;
    *(_DWORD*)(a1 + 64) = v20;
    if ((v24 & 1) != 0 && v27_.v29 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v27_.v29);
    }
  }
  else {
    v22 = v27_.v27;
    v23 = v27_.v28;
    *(_DWORD*)(a1 + 64) = v20;
    *(_QWORD*)(a1 + 40) = v22;
    *(_QWORD*)(a1 + 48) = v23;
    *(_QWORD*)(a1 + 56) = v27_.v29;
  }
  return a1;
}

unsigned __int64

llvm_libcxx_21_libcxx_include___vector_15a73c0(unsigned __int64 result, int* a2,
                                               __int64 a3, char a4)
{
  int* v7;
  __int64* v8;
  int* v9;
  __int64 v10;
  int* v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  int* v61;
  int v62;
  int* v63;
  int* v64;
  int v65;
  int v66;
  int v67;
  int* v68;
  int* v69;
  __int64 v70;
  unsigned int v71;
  int v72;
  int v73;
  int* v74;
  bool v75;
  bool v76;
  int v77;
  unsigned __int64 v78;
  int* v79;
  int v80;
  int v81;
  int v82;
  __int64 v83;
  unsigned int v84;
  int v85;
  int v86;
  int* v87;
  int v88;
  int v89;
  __int64 v90;
  int v91;
  int v92;
  __int64 v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  unsigned int v102;
  int v103;
  unsigned int v104;
  int* v105;
  bool v107;
  __int64 v108;
  __int64 v109;
  int* v110;
  int* v111;
  int v112;
  int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned int v117;
  unsigned int v118;
  signed __int64 v119;
  signed __int64 v120;
  signed __int64 v121;
  __int64 v122;
  __int64 v123;
  int* v124;
  int v125;
  __int64 v126;
  int* v127;
  int v128;
  __int64 v129;
  int* v130;
  __int64 v131;
  bool v132;
  int v133;
  __int64 v134;
  int* v135;
  int* v136;
  int v137;
  int v138;
  __int64 v139;
  unsigned int v140;
  int v141;
  int* v142;
  int* v143;
  __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  int v148;
  int* v149;
  int v150;
  int* v151;
  int v152;
  int v153;
  __int64 v154;
  int v155;
  int v156;
  int v157;
  int v158;

  v7 = (int*)result;
  v8 = GameData_212c880[0];
LABEL_2:
  v9 = v7;
  while (1) {
    v7 = v9;
    v10 = a2 - v9;
    if (v10 <= 2) {
      if ((unsigned __int64)v10 < 2) {
        return result;
      }
      if (v10 == 2) {
        v96 = *(a2 - 1);
        v97 = *v9;
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                            8LL * (v96 & 0xFFF)) +
                                 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                          8 * (*v9 & 0xFFFLL)) +
                                               16LL)) {
          *v9 = v96;
          *(a2 - 1) = v97;
        }
        return result;
      }
      goto LABEL_10;
    }
    if (v10 == 3) {
      break;
    }
    if (v10 == 4) {
      return (unsigned __int64)GameRoutine_15a8170(v9, v9 + 1, v9 + 2, a2 - 1);
    }
    if (v10 == 5) {
      result =
          (unsigned __int64)GameRoutine_15a8170(v9, v9 + 1, v9 + 2, v9 + 3);
      v88 = *(a2 - 1);
      v89 = v9[3];
      if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                          8LL * (v88 & 0xFFF)) +
                               16LL) <
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                        8LL * (v89 & 0xFFF)) +
                                             16LL)) {
        v9[3] = v88;
        *(a2 - 1) = v89;
        v90 = *v8;
        v92 = v9[2];
        v91 = v9[3];
        v93 = v91 & 0xFFF;
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v93) +
                                 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                          8LL * (v92 & 0xFFF)) +
                                               16LL)) {
          v9[2] = v91;
          v9[3] = v92;
          v94 = v9[1];
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v90 + 64) + 8 * v93) +
                                   16LL) <
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v90 + 64) +
                                                8LL * (v94 & 0xFFF)) +
                                     16LL)) {
            v9[1] = v91;
            v9[2] = v94;
            v95 = *v9;
            if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                8 * v93) +
                                     16LL) <
                (unsigned int)*(
                    unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                  8 * (*v9 & 0xFFFLL)) +
                                       16LL)) {
              *v9 = v91;
              v9[1] = v95;
            }
          }
        }
      }
      return result;
    }
  LABEL_10:
    if (v10 <= 23) {
      v105 = v9 + 1;
      v107 = v9 == a2 || v105 == a2;
      if ((a4 & 1) != 0) {
        if (!v107) {
          v108 = *v8;
          v109 = 4;
          v110 = v9;
          do {
            v113 = *v110;
            v112 = v110[1];
            v110 = v105;
            if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v108 + 64) +
                                                8LL * (v112 & 0xFFF)) +
                                     16LL) <
                (unsigned int)*(
                    unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v108 + 64) +
                                                  8LL * (v113 & 0xFFF)) +
                                       16LL)) {
              v114 = v109;
              do {
                v115 = v114 - 4;
                *(int*)((char*)v9 + v114) = v113;
                if (v114 == 4) {
                  v111 = v9;
                  goto LABEL_126;
                }
                v113 = *(int*)((char*)v9 + v114 - 8);
                v116 = *(_QWORD*)(*v8 + 64);
                v117 = *(
                    unsigned __int16*)(*(_QWORD*)(v116 + 8LL * (v112 & 0xFFF)) +
                                       16LL);
                v118 = *(
                    unsigned __int16*)(*(_QWORD*)(v116 + 8LL * (v113 & 0xFFF)) +
                                       16LL);
                v114 = v115;
              } while (v117 < v118);
              v111 = (int*)((char*)v9 + v115);
            LABEL_126:
              *v111 = v112;
              v108 = *v8;
            }
            v105 = v110 + 1;
            v109 += 4;
          } while (v110 + 1 != a2);
        }
      }
      else if (!v107) {
        v154 = *v8;
        do {
          v156 = *v7;
          v155 = v7[1];
          v7 = v105;
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v154 + 64) +
                                              8LL * (v155 & 0xFFF)) +
                                   16LL) <
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v154 + 64) +
                                                8LL * (v156 & 0xFFF)) +
                                     16LL)) {
            v157 = v156;
            do {
              *v105 = v157;
              v157 = *(v105 - 2);
              --v105;
            } while (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                     8LL * (v155 & 0xFFF)) +
                                          16LL) <
                     (unsigned int)*(
                         unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                       8LL * (v157 & 0xFFF)) +
                                            16LL));
            *v105 = v155;
            v154 = *v8;
          }
          v105 = v7 + 1;
        } while (v7 + 1 != a2);
      }
      return result;
    }
    if (a3 == 0) {
      if (v9 != a2) {
        v119 = (unsigned __int64)(v10 - 2) >> 1;
        v120 = v119;
        do {
          v121 = v120;
          if (v119 >= v120) {
            v122 = (2 * (v120 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
            v123 = 2 * v120 + 2;
            v124 = &v9[v122];
            v125 = *v124;
            if (v123 >= v10) {
              v126 = *(_QWORD*)(*v8 + 64);
            }
            else {
              v126 = *(_QWORD*)(*v8 + 64);
              result = *(unsigned __int16*)(*(_QWORD*)(v126 + 8 * (v124[1] &
                                                                   0xFFFLL)) +
                                            16LL);
              if (*(unsigned __int16*)(*(_QWORD*)(v126 + 8LL * (v125 & 0xFFF)) +
                                       16LL) < (unsigned int)result) {
                v125 = v124[1];
                ++v124;
                v122 = 2 * v121 + 2;
              }
            }
            v127 = &v9[v121];
            v128 = *v127;
            if (*(unsigned __int16*)(*(_QWORD*)(v126 + 8LL * (v125 & 0xFFF)) +
                                     16LL) >=
                (unsigned int)*(
                    unsigned __int16*)(*(_QWORD*)(v126 +
                                                  8 * (*v127 & 0xFFFLL)) +
                                       16LL)) {
              do {
                v130 = v124;
                *v127 = v125;
                if (v119 < v122) {
                  break;
                }
                v131 = (2 * v122) | 1;
                v122 = 2 * v122 + 2;
                v124 = &v9[v131];
                v125 = *v124;
                if (v122 < v10) {
                  v129 = *(_QWORD*)(*v8 + 64);
                  if (*(unsigned __int16*)(*(_QWORD*)(v129 +
                                                      8LL * (v125 & 0xFFF)) +
                                           16LL) >=
                      (unsigned int)*(
                          unsigned __int16*)(*(_QWORD*)(v129 + 8 * (v124[1] &
                                                                    0xFFFLL)) +
                                             16LL)) {
                    v122 = v131;
                  }
                  else {
                    v125 = v124[1];
                    ++v124;
                  }
                }
                else {
                  v129 = *(_QWORD*)(*v8 + 64);
                  v122 = v131;
                }
                result = *(
                    unsigned __int16*)(*(_QWORD*)(v129 + 8LL * (v125 & 0xFFF)) +
                                       16LL);
                v127 = v130;
              } while (
                  (unsigned int)result >=
                  *(unsigned __int16*)(*(_QWORD*)(v129 + 8LL * (v128 & 0xFFF)) +
                                       16LL));
              *v130 = v128;
            }
          }
          v120 = v121 - 1;
        } while (v121 != 0);
        do {
          v133 = *v9;
          v134 = 0;
          v135 = v9;
          do {
            v143 = &v135[v134];
            v142 = v143 + 1;
            v141 = v143[1];
            v144 = (2 * v134) | 1;
            v134 = 2 * v134 + 2;
            if (v134 < v10) {
              v138 = v143[2];
              v136 = v143 + 2;
              v137 = v138;
              v139 = *(_QWORD*)(*v8 + 64);
              v140 =
                  *(unsigned __int16*)(*(_QWORD*)(v139 + 8LL * (v141 & 0xFFF)) +
                                       16LL);
              result =
                  *(unsigned __int16*)(*(_QWORD*)(v139 + 8LL * (v138 & 0xFFF)) +
                                       16LL);
              if (v140 >= (unsigned int)result) {
                v134 = v144;
              }
              else {
                v141 = v137;
                v142 = v136;
              }
            }
            else {
              v134 = v144;
            }
            *v135 = v141;
            v135 = v142;
          } while (v134 <= (__int64)((unsigned __int64)(v10 - 2) >> 1));
          if (v142 == --a2) {
            *v142 = v133;
          }
          else {
            *v142 = *a2;
            *a2 = v133;
            v145 = ((char*)v142 - (char*)v9 + 4) >> 2;
            v132 = v145 < 2;
            v146 = v145 - 2;
            if (!v132) {
              v147 = v146 >> 1;
              v148 = *v142;
              v149 = &v9[v147];
              v150 = *v149;
              if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                  8 * (*v149 & 0xFFFLL)) +
                                       16LL) <
                  (unsigned int)*(
                      unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                    8 * (*v142 & 0xFFFLL)) +
                                         16LL)) {
                do {
                  v151 = v149;
                  *v142 = v150;
                  if (v147 == 0) {
                    break;
                  }
                  v147 = (v147 - 1) >> 1;
                  v149 = &v9[v147];
                  v150 = *v149;
                  v142 = v151;
                } while (
                    *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                    8 * (*v149 & 0xFFFLL)) +
                                         16LL) <
                    (unsigned int)*(
                        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                      8LL * (v148 & 0xFFF)) +
                                           16LL));
                *v151 = v148;
              }
            }
          }
          v132 = v10-- <= 2;
        } while (!v132);
      }
      return result;
    }
    v11 = &v9[(unsigned __int64)v10 >> 1];
    v12 = *(_QWORD*)(*v8 + 64);
    v13 = *(a2 - 1);
    v14 = *(unsigned __int16*)(*(_QWORD*)(v12 + 8LL * (v13 & 0xFFF)) + 16LL);
    if ((unsigned __int64)v10 >= 0x81) {
      v15 = *v11;
      v16 = *v9;
      v17 = *(unsigned __int16*)(*(_QWORD*)(v12 + 8 * (*v11 & 0xFFFLL)) + 16LL);
      if (v17 >=
          *(unsigned __int16*)(*(_QWORD*)(v12 + 8 * (*v9 & 0xFFFLL)) + 16LL)) {
        if (v14 < v17) {
          *v11 = v13;
          *(a2 - 1) = v15;
          v21 = *v9;
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                              8 * (*v11 & 0xFFFLL)) +
                                   16LL) <
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                8 * (*v9 & 0xFFFLL)) +
                                     16LL)) {
            *v9 = *v11;
            *v11 = v21;
          }
        }
      }
      else {
        if (v14 < v17) {
          *v9 = v13;
          goto LABEL_27;
        }
        *v9 = v15;
        *v11 = v16;
        v23 = *(a2 - 1);
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                            8LL * (v23 & 0xFFF)) +
                                 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                          8LL * (v16 & 0xFFF)) +
                                               16LL)) {
          *v11 = v23;
        LABEL_27:
          *(a2 - 1) = v16;
        }
      }
      v24 = *(v11 - 1);
      v25 = v9[1];
      v26 = *(_QWORD*)(*v8 + 64);
      v27 = *(unsigned __int16*)(*(_QWORD*)(v26 + 8LL * (v24 & 0xFFF)) + 16LL);
      v28 = *(unsigned __int16*)(*(_QWORD*)(v26 + 8LL * (v25 & 0xFFF)) + 16LL);
      v29 = *(a2 - 2);
      v30 = *(unsigned __int16*)(*(_QWORD*)(v26 + 8LL * (v29 & 0xFFF)) + 16LL);
      if (v27 >= v28) {
        if (v30 < v27) {
          *(v11 - 1) = v29;
          *(a2 - 2) = v24;
          v31 = *(v11 - 1);
          v32 = v9[1];
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                              8LL * (v31 & 0xFFF)) +
                                   16LL) <
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                8LL * (v32 & 0xFFF)) +
                                     16LL)) {
            v9[1] = v31;
            *(v11 - 1) = v32;
          }
        }
      }
      else {
        if (v30 < v27) {
          v9[1] = v29;
          goto LABEL_39;
        }
        v9[1] = v24;
        *(v11 - 1) = v25;
        v34 = *(a2 - 2);
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                            8LL * (v34 & 0xFFF)) +
                                 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                          8LL * (v25 & 0xFFF)) +
                                               16LL)) {
          *(v11 - 1) = v34;
        LABEL_39:
          *(a2 - 2) = v25;
        }
      }
      v35 = v11[1];
      v36 = v9[2];
      v37 = *(_QWORD*)(*v8 + 64);
      v38 = *(unsigned __int16*)(*(_QWORD*)(v37 + 8LL * (v35 & 0xFFF)) + 16LL);
      v39 = *(unsigned __int16*)(*(_QWORD*)(v37 + 8LL * (v36 & 0xFFF)) + 16LL);
      v40 = *(a2 - 3);
      v41 = *(unsigned __int16*)(*(_QWORD*)(v37 + 8LL * (v40 & 0xFFF)) + 16LL);
      if (v38 >= v39) {
        if (v41 < v38) {
          v11[1] = v40;
          *(a2 - 3) = v35;
          v42 = v11[1];
          v43 = v9[2];
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                              8LL * (v42 & 0xFFF)) +
                                   16LL) <
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                8LL * (v43 & 0xFFF)) +
                                     16LL)) {
            v9[2] = v42;
            v11[1] = v43;
          }
        }
      }
      else {
        if (v41 < v38) {
          v9[2] = v40;
          goto LABEL_48;
        }
        v9[2] = v35;
        v11[1] = v36;
        v44 = *(a2 - 3);
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                            8LL * (v44 & 0xFFF)) +
                                 16LL) <
            (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                          8LL * (v36 & 0xFFF)) +
                                               16LL)) {
          v11[1] = v44;
        LABEL_48:
          *(a2 - 3) = v36;
        }
      }
      v45 = *(v11 - 1);
      v46 = *v11;
      v47 = *(_QWORD*)(*v8 + 64);
      v48 = v11[1];
      v49 = *(unsigned __int16*)(*(_QWORD*)(v47 + 8 * (*v11 & 0xFFFLL)) + 16LL);
      v50 = v45 & 0xFFF;
      v51 = *(unsigned __int16*)(*(_QWORD*)(v47 + 8 * v50) + 16LL);
      v52 = v48 & 0xFFF;
      v53 = *(unsigned __int16*)(*(_QWORD*)(v47 + 8 * v52) + 16LL);
      if (v49 >= v51) {
        if (v53 >= v49) {
        LABEL_55:
          v45 = v46;
        }
        else {
          *v11 = v48;
          v11[1] = v46;
          if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v52) +
                                   16LL) >=
              (unsigned int)*(
                  unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                8 * v50) +
                                     16LL)) {
            goto LABEL_58;
          }
          *(v11 - 1) = v48;
          *v11 = v45;
        }
      }
      else {
        if (v53 < v49) {
          *(v11 - 1) = v48;
          v11[1] = v45;
          goto LABEL_55;
        }
        *(v11 - 1) = v46;
        *v11 = v45;
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v52) +
                                 16LL) <
            (unsigned int)*(
                unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v50) +
                                   16LL)) {
          *v11 = v48;
          v11[1] = v45;
        LABEL_58:
          v45 = v48;
        }
      }
      v54 = *v9;
      *v9 = v45;
      *v11 = v54;
      goto LABEL_60;
    }
    v18 = *v9;
    v19 = *v11;
    v20 = *(unsigned __int16*)(*(_QWORD*)(v12 + 8 * (*v9 & 0xFFFLL)) + 16LL);
    if (v20 >=
        *(unsigned __int16*)(*(_QWORD*)(v12 + 8 * (*v11 & 0xFFFLL)) + 16LL)) {
      if (v14 < v20) {
        *v9 = v13;
        *(a2 - 1) = v18;
        v22 = *v11;
        if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                            8 * (*v9 & 0xFFFLL)) +
                                 16LL) <
            (unsigned int)*(
                unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                              8 * (*v11 & 0xFFFLL)) +
                                   16LL)) {
          *v11 = *v9;
          *v9 = v22;
        }
      }
      goto LABEL_60;
    }
    if (v14 < v20) {
      *v11 = v13;
    LABEL_36:
      *(a2 - 1) = v19;
      goto LABEL_60;
    }
    *v11 = v18;
    *v9 = v19;
    v33 = *(a2 - 1);
    if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                        8LL * (v33 & 0xFFF)) +
                             16LL) <
        (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                      8LL * (v19 & 0xFFF)) +
                                           16LL)) {
      *v9 = v33;
      goto LABEL_36;
    }
  LABEL_60:
    v55 = *v9;
    v56 = *v8;
    --a3;
    if ((a4 & 1) != 0) {
      v57 = *(_QWORD*)(v56 + 64);
      v58 = v55 & 0xFFF;
      v59 = *(unsigned __int16*)(*(_QWORD*)(v57 + 8 * v58) + 16LL);
    LABEL_63:
      v60 = 0;
      do {
        v61 = &v9[v60++];
        v62 = v61[1];
      } while (*(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (v62 & 0xFFF)) +
                                    16LL) < v59);
      v63 = &v9[v60];
      v64 = a2;
      if (v60 == 1) {
        v64 = a2;
        do {
          if (v63 >= v64) {
            break;
          }
          v66 = *--v64;
        } while (*(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (v66 & 0xFFF)) +
                                      16LL) >= v59);
      }
      else {
        do {
          v65 = *--v64;
        } while (*(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (v65 & 0xFFF)) +
                                      16LL) >= v59);
      }
      if (v63 >= v64) {
        v74 = v63 - 1;
        if (v9 == v63 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v9 = *v74;
        goto LABEL_81;
      }
      v67 = *v64;
      v68 = &v9[v60];
      v69 = v64;
      do {
        *v68 = v67;
        *v69 = v62;
        v70 = *(_QWORD*)(*v8 + 64);
        v71 = *(unsigned __int16*)(*(_QWORD*)(v70 + 8 * v58) + 16LL);
        do {
          v72 = v68[1];
          ++v68;
          v62 = v72;
        } while (*(unsigned __int16*)(*(_QWORD*)(v70 + 8LL * (v72 & 0xFFF)) +
                                      16LL) < v71);
        do {
          v73 = *--v69;
          v67 = v73;
        } while (*(unsigned __int16*)(*(_QWORD*)(v70 + 8LL * (v73 & 0xFFF)) +
                                      16LL) >= v71);
      } while (v68 < v69);
      v74 = v68 - 1;
      if (v9 != v68 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v74 = v55;
      if (v63 < v64) {
        goto LABEL_84;
      }
      v75 = GameHr_15a8320(v9, v74);
      v9 = v74 + 1;
      v76 = v75;
      result = GameHr_15a8320(v74 + 1, a2);
      if ((result & 1) != 0) {
        a2 = v74;
        if (!v76) {
          goto LABEL_2;
        }
        return result;
      }
      if (!v76) {
      LABEL_84:
        result = llvm_libcxx_21_libcxx_include___vector_15a73c0(
            (unsigned __int64)v7, v74, a3, a4 & 1);
        a4 = 0;
        v9 = v74 + 1;
      }
    }
    else {
      v57 = *(_QWORD*)(v56 + 64);
      v58 = v55 & 0xFFF;
      v59 = *(unsigned __int16*)(*(_QWORD*)(v57 + 8 * v58) + 16LL);
      if (*(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (*(v9 - 1) & 0xFFF)) +
                               16LL) < v59) {
        goto LABEL_63;
      }
      if (v59 >=
          *(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (*(a2 - 1) & 0xFFF)) +
                               16LL)) {
        v78 = (unsigned __int64)(v9 + 1);
        do {
          v9 = (int*)v78;
          if (v78 >= (unsigned __int64)a2) {
            break;
          }
          v78 += 4LL;
        } while (
            v59 >=
            *(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (*v9 & 0xFFF)) + 16LL));
      }
      else {
        do {
          v77 = v9[1];
          ++v9;
        } while (
            v59 >=
            *(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (v77 & 0xFFF)) + 16LL));
      }
      v79 = a2;
      if (v9 < a2) {
        v79 = a2;
        do {
          v80 = *--v79;
        } while (
            v59 <
            *(unsigned __int16*)(*(_QWORD*)(v57 + 8LL * (v80 & 0xFFF)) + 16LL));
      }
      if (v9 < v79) {
        v81 = *v9;
        v82 = *v79;
        do {
          *v9 = v82;
          *v79 = v81;
          v83 = *(_QWORD*)(*v8 + 64);
          v84 = *(unsigned __int16*)(*(_QWORD*)(v83 + 8 * v58) + 16LL);
          do {
            v85 = v9[1];
            ++v9;
            v81 = v85;
          } while (v84 >=
                   *(unsigned __int16*)(*(_QWORD*)(v83 + 8LL * (v85 & 0xFFF)) +
                                        16LL));
          do {
            v86 = *--v79;
            v82 = v86;
          } while (v84 <
                   *(unsigned __int16*)(*(_QWORD*)(v83 + 8LL * (v86 & 0xFFF)) +
                                        16LL));
        } while (v9 < v79);
      }
      v87 = v9 - 1;
      if (v7 != v9 - 1) {
        *v7 = *v87;
      }
      a4 = 0;
      *v87 = v55;
    }
  }
  v98 = *v9;
  v99 = (unsigned int)v9[1];
  v100 = *(_QWORD*)(*v8 + 64);
  v101 = *(unsigned __int16*)(*(_QWORD*)(v100 + 8 * (v99 & 0xFFF)) + 16LL);
  v102 = *(unsigned __int16*)(*(_QWORD*)(v100 + 8 * (*v9 & 0xFFFLL)) + 16LL);
  v103 = *(a2 - 1);
  v104 = *(unsigned __int16*)(*(_QWORD*)(v100 + 8LL * (v103 & 0xFFF)) + 16LL);
  if (v101 >= v102) {
    if (v104 < v101) {
      v9[1] = v103;
      *(a2 - 1) = v99;
      v153 = *v9;
      v152 = v9[1];
      if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                          8LL * (v152 & 0xFFF)) +
                               16LL) <
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                        8 * (*v9 & 0xFFFLL)) +
                                             16LL)) {
        *v9 = v152;
        v9[1] = v153;
      }
    }
  }
  else {
    if (v104 >= v101) {
      *v9 = v99;
      v9[1] = v98;
      v158 = *(a2 - 1);
      if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                          8LL * (v158 & 0xFFF)) +
                               16LL) >=
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                        8LL * (v98 & 0xFFF)) +
                                             16LL)) {
        return result;
      }
      v9[1] = v158;
    }
    else {
      *v9 = v103;
    }
    *(a2 - 1) = v98;
  }
  return result;
}

void llvm_libcxx_21_libcxx_include___vector_15a94c0(_QWORD* a1, __int64* a2,
                                                    __int64* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;

  v3 = *((_DWORD*)a2 + 6);
  v4 = *((_DWORD*)a3 + 6);
  if (v3 >= (signed __int32)*((_DWORD*)a1 + 6)) {
    if (v4 < v3) {
      v11 = *a2;
      v12 = a2[1];
      *a2 = 0;
      a2[1] = 0;
      v13 = a2[2];
      v14 = a2[3];
      a2[2] = 0;
      v16 = a3[1];
      v15 = a3[2];
      *a2 = *a3;
      a2[1] = v16;
      a2[2] = v15;
      *(_WORD*)a3 = 0;
      a2[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) != 0 && a3[2] != 0) {
        v17 = a1;
        v18 = a2;
        v19 = a3;
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, a3[2]);
        a1 = v17;
        a2 = v18;
        a3 = v19;
      }
      *a3 = v11;
      a3[1] = v12;
      a3[2] = v13;
      a3[3] = v14;
      if ((signed __int32)*((_DWORD*)a2 + 6) <
          (signed __int32)*((_DWORD*)a1 + 6)) {
        v21 = *a1;
        v22 = a1[1];
        *a1 = 0;
        a1[1] = 0;
        v23 = a1[2];
        v24 = a1[3];
        a1[2] = 0;
        v26 = a2[1];
        v25 = a2[2];
        *a1 = *a2;
        a1[1] = v26;
        a1[2] = v25;
        *(_WORD*)a2 = 0;
        a1[3] = a2[3];
        if ((*(_BYTE*)a2 & 1) != 0 && a2[2] != 0) {
          v27 = a2;
          v28 = a2[2];
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
          a2 = v27;
        }
        *a2 = v21;
        a2[1] = v22;
        a2[2] = v23;
        a2[3] = v24;
      }
    }
  }
  else {
    v6 = *a1;
    v5 = a1[1];
    v7 = a1[2];
    v8 = a1[3];
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    if (v4 < v3) {
      v9 = *a3;
      v10 = a3[2];
      a1[1] = a3[1];
      a1[2] = v10;
      *a1 = v9;
      *(_WORD*)a3 = 0;
      a1[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) == 0) {
        goto LABEL_29;
      }
      goto LABEL_25;
    }
    v30 = *a2;
    v31 = a2[2];
    a1[1] = a2[1];
    a1[2] = v31;
    *a1 = v30;
    *(_WORD*)a2 = 0;
    a1[3] = a2[3];
    if ((*(_BYTE*)a2 & 1) != 0 && a2[2] != 0) {
      v32 = a2;
      v33 = a2[2];
      v34 = a3;
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v33);
      a2 = v32;
      a3 = v34;
    }
    *a2 = v6;
    a2[1] = v5;
    a2[2] = v7;
    a2[3] = v8;
    if ((signed __int32)*((_DWORD*)a3 + 6) < (int)v8) {
      a2[1] = 0;
      a2[2] = 0;
      *a2 = 0;
      v36 = *a3;
      v37 = a3[2];
      a2[1] = a3[1];
      a2[2] = v37;
      *a2 = v36;
      *(_WORD*)a3 = 0;
      a2[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) == 0) {
      LABEL_29:
        *a3 = v6;
        a3[1] = v5;
        a3[2] = v7;
        a3[3] = v8;
        return;
      }
    LABEL_25:
      v38 = a3[2];
      if (v38 != 0) {
        v39 = a3;
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v38);
        a3 = v39;
      }
      goto LABEL_29;
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_15a9750(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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

  llvm_libcxx_21_libcxx_include___vector_15a94c0(a1, a2, a3);
  if ((signed __int32)*((_DWORD*)a4 + 6) < (signed __int32)*((_DWORD*)a3 + 6)) {
    v8 = *a3;
    v9 = a3[1];
    *a3 = 0;
    a3[1] = 0;
    v10 = a3[2];
    v11 = a3[3];
    a3[2] = 0;
    v13 = a4[1];
    v12 = a4[2];
    *a3 = *a4;
    a3[1] = v13;
    a3[2] = v12;
    *(_WORD*)a4 = 0;
    a3[3] = a4[3];
    if ((*(_BYTE*)a4 & 1) != 0) {
      v14 = a4[2];
      if (v14 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
      }
    }
    *a4 = v8;
    a4[1] = v9;
    a4[2] = v10;
    a4[3] = v11;
    if ((signed __int32)*((_DWORD*)a3 + 6) <
        (signed __int32)*((_DWORD*)a2 + 6)) {
      v16 = *a2;
      v17 = a2[1];
      *a2 = 0;
      a2[1] = 0;
      v18 = a2[2];
      v19 = a2[3];
      a2[2] = 0;
      v21 = a3[1];
      v20 = a3[2];
      *a2 = *a3;
      a2[1] = v21;
      a2[2] = v20;
      *(_WORD*)a3 = 0;
      a2[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) != 0) {
        v22 = a3[2];
        if (v22 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
        }
      }
      *a3 = v16;
      a3[1] = v17;
      a3[2] = v18;
      a3[3] = v19;
      if ((signed __int32)*((_DWORD*)a2 + 6) <
          (signed __int32)*((_DWORD*)a1 + 6)) {
        v24 = *a1;
        v25 = a1[1];
        *a1 = 0;
        a1[1] = 0;
        v26 = a1[2];
        v27 = a1[3];
        a1[2] = 0;
        v29 = a2[1];
        v28 = a2[2];
        *a1 = *a2;
        a1[1] = v29;
        a1[2] = v28;
        *(_WORD*)a2 = 0;
        a1[3] = a2[3];
        if ((*(_BYTE*)a2 & 1) != 0) {
          v30 = a2[2];
          if (v30 != 0) {
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
          }
        }
        *a2 = v24;
        a2[1] = v25;
        a2[2] = v26;
        a2[3] = v27;
      }
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_15a9910(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4,
                                                    __int64* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  llvm_libcxx_21_libcxx_include___vector_15a9750(a1, a2, a3, a4);
  if ((signed __int32)*((_DWORD*)a5 + 6) < (signed __int32)*((_DWORD*)a4 + 6)) {
    v10 = *a4;
    v11 = a4[1];
    *a4 = 0;
    a4[1] = 0;
    v12 = a4[2];
    v13 = a4[3];
    a4[2] = 0;
    v15 = a5[1];
    v14 = a5[2];
    *a4 = *a5;
    a4[1] = v15;
    a4[2] = v14;
    *(_WORD*)a5 = 0;
    a4[3] = a5[3];
    if ((*(_BYTE*)a5 & 1) != 0) {
      v16 = a5[2];
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
      }
    }
    *a5 = v10;
    a5[1] = v11;
    a5[2] = v12;
    a5[3] = v13;
    if ((signed __int32)*((_DWORD*)a4 + 6) <
        (signed __int32)*((_DWORD*)a3 + 6)) {
      v18 = *a3;
      v19 = a3[1];
      *a3 = 0;
      a3[1] = 0;
      v20 = a3[2];
      v21 = a3[3];
      a3[2] = 0;
      v23 = a4[1];
      v22 = a4[2];
      *a3 = *a4;
      a3[1] = v23;
      a3[2] = v22;
      *(_WORD*)a4 = 0;
      a3[3] = a4[3];
      if ((*(_BYTE*)a4 & 1) != 0) {
        v24 = a4[2];
        if (v24 != 0) {
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
        }
      }
      *a4 = v18;
      a4[1] = v19;
      a4[2] = v20;
      a4[3] = v21;
      if ((signed __int32)*((_DWORD*)a3 + 6) <
          (signed __int32)*((_DWORD*)a2 + 6)) {
        v26 = *a2;
        v27 = a2[1];
        *a2 = 0;
        a2[1] = 0;
        v28 = a2[2];
        v29 = a2[3];
        a2[2] = 0;
        v31 = a3[1];
        v30 = a3[2];
        *a2 = *a3;
        a2[1] = v31;
        a2[2] = v30;
        *(_WORD*)a3 = 0;
        a2[3] = a3[3];
        if ((*(_BYTE*)a3 & 1) != 0) {
          v32 = a3[2];
          if (v32 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
          }
        }
        *a3 = v26;
        a3[1] = v27;
        a3[2] = v28;
        a3[3] = v29;
        if ((signed __int32)*((_DWORD*)a2 + 6) <
            (signed __int32)*((_DWORD*)a1 + 6)) {
          v34 = *a1;
          v35 = a1[1];
          *a1 = 0;
          a1[1] = 0;
          v36 = a1[2];
          v37 = a1[3];
          a1[2] = 0;
          v39 = a2[1];
          v38 = a2[2];
          *a1 = *a2;
          a1[1] = v39;
          a1[2] = v38;
          *(_WORD*)a2 = 0;
          a1[3] = a2[3];
          if ((*(_BYTE*)a2 & 1) != 0) {
            v40 = a2[2];
            if (v40 != 0) {
              v41 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v41 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v40);
            }
          }
          *a2 = v34;
          a2[1] = v35;
          a2[2] = v36;
          a2[3] = v37;
        }
      }
    }
  }
}

bool llvm_libcxx_21_libcxx_include___vector_15a9b60(__int64* a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v14;
  char* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v4 = (a2 - (char*)a1) >> 5;
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      llvm_libcxx_21_libcxx_include___vector_15a94c0(a1, a1 + 4,
                                                     (__int64*)a2 - 4);
      return true;
    case 4LL:
      llvm_libcxx_21_libcxx_include___vector_15a9750(a1, a1 + 4, a1 + 8,
                                                     (__int64*)a2 - 4);
      return true;
    case 5LL:
      llvm_libcxx_21_libcxx_include___vector_15a9910(a1, a1 + 4, a1 + 8,
                                                     a1 + 12, (__int64*)a2 - 4);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v4 < 2) {
      return true;
    }
    if (v4 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) <
          (signed __int32)*((_DWORD*)a1 + 6)) {
        v5 = *a1;
        v6 = a1[1];
        *a1 = 0;
        a1[1] = 0;
        v7 = a1[2];
        v8 = a1[3];
        a1[2] = 0;
        v10 = *((_QWORD*)a2 - 3);
        v9 = *((_QWORD*)a2 - 2);
        *a1 = *((_QWORD*)a2 - 4);
        a1[1] = v10;
        a1[2] = v9;
        *((_WORD*)a2 - 16) = 0;
        a1[3] = *((_QWORD*)a2 - 1);
        if ((*(a2 - 32) & 1) != 0) {
          v11 = *((_QWORD*)a2 - 2);
          if (v11 != 0) {
            v12 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
          }
        }
        *((_QWORD*)a2 - 4) = v5;
        *((_QWORD*)a2 - 3) = v6;
        *((_QWORD*)a2 - 2) = v7;
        *((_QWORD*)a2 - 1) = v8;
        return true;
      }
      return true;
    }
  }
  v14 = (char*)(a1 + 8);
  llvm_libcxx_21_libcxx_include___vector_15a94c0(a1, a1 + 4, a1 + 8);
  v15 = (char*)(a1 + 12);
  if (a1 + 12 == (__int64*)a2) {
    return true;
  }
  v16 = 0;
  v17 = 0;
  while (1) {
    if ((signed __int32)*((_DWORD*)v15 + 6) <
        (signed __int32)*((_DWORD*)v14 + 6)) {
      v19 = *(_QWORD*)v15;
      v18 = *((_QWORD*)v15 + 1);
      v20 = *((_QWORD*)v15 + 2);
      v21 = *((_QWORD*)v15 + 3);
      v22 = v16;
      *(_QWORD*)v15 = 0;
      *((_QWORD*)v15 + 1) = 0;
      *((_QWORD*)v15 + 2) = 0;
      v34 = v18;
      v35 = v19;
      while (1) {
        v23 = (char*)a1 + v22;
        if ((*((_BYTE*)a1 + v22 + 96) & 1) != 0) {
          v24 = *((_QWORD*)v23 + 14);
          if (v24 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
          }
        }
        v26 = *(__int64*)((char*)a1 + v22 + 64);
        v27 = *(__int64*)((char*)a1 + v22 + 72);
        *((_BYTE*)a1 + v22 + 64) = 0;
        *(__int64*)((char*)a1 + v22 + 96) = v26;
        *(__int64*)((char*)a1 + v22 + 104) = v27;
        v28 = *(__int64*)((char*)a1 + v22 + 80);
        v29 = *((_QWORD*)v23 + 11);
        v23[65] = 0;
        *(__int64*)((char*)a1 + v22 + 112) = v28;
        *((_QWORD*)v23 + 15) = v29;
        if (v22 == -64) {
          break;
        }
        v30 = (char*)a1 + v22;
        v22 -= 32;
        if ((signed __int32)*((_DWORD*)v30 + 14) <= (int)v21) {
          v31 = (__int64)a1 + v22 + 96;
          if ((*(_BYTE*)v31 & 1) == 0) {
            goto LABEL_18;
          }
          goto LABEL_32;
        }
      }
      v31 = (__int64)a1;
      if ((*(_BYTE*)a1 & 1) != 0) {
      LABEL_32:
        v32 = *(_QWORD*)(v31 + 16);
        if (v32 != 0) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
        }
      }
    LABEL_18:
      ++v17;
      *(_QWORD*)(v31 + 16) = v20;
      *(_QWORD*)(v31 + 24) = v21;
      *(_QWORD*)v31 = v35;
      *(_QWORD*)(v31 + 8) = v34;
      if (v17 == 8) {
        return v15 + 32 == a2;
      }
    }
    v14 = v15;
    v15 += 32;
    v16 += 32;
    if (v15 == a2) {
      return true;
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_15a9e40(unsigned __int64 a1,
                                                    char* a2, __int64 a3,
                                                    char a4)
{
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  int v27;
  char* v28;
  char* v29;
  int v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  bool v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  unsigned __int64 v57;
  int v58;
  __int64 v59;
  char* v60;
  char* v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  char* v89;
  bool v91;
  __int64 v92;
  unsigned __int64 v93;
  char* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  signed __int64 v111;
  signed __int64 v112;
  __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  int v116;
  int v117;
  bool v118;
  __int64 v119;
  _QWORD* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  bool v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  char* v137;
  __int64 v138;
  __int64 v139;
  char* v140;
  __int64 v141;
  char* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  char* v147;
  char* v148;
  int v149;
  int v150;
  char* v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  char* v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  _QWORD* v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  _QWORD* v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  _QWORD* v186;
  _QWORD* v187;
  char v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64* v193;
  __int64* v194;
  __int64* v195;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  char* v208;
  __int64 v209;
  char* v210;

LABEL_1:
  v7 = a1;
  v194 = (__int64*)(a2 - 64);
  v195 = (__int64*)(a2 - 32);
  v193 = (__int64*)(a2 - 96);
  v208 = a2;
  while (1) {
    a1 = v7;
    v8 = (__int64)&a2[-v7] >> 5;
    v9 = v8 - 2;
    if (v8 > 2) {
      switch (v8) {
      case 3LL:
        llvm_libcxx_21_libcxx_include___vector_15aabe0(
            (_QWORD*)v7, (__int64*)(v7 + 32), v195);
        return;
      case 4LL:
        llvm_libcxx_21_libcxx_include___vector_15aae70(
            (__int64*)v7, (__int64*)(v7 + 32), (__int64*)(v7 + 64), v195);
        return;
      case 5LL:
        llvm_libcxx_21_libcxx_include___vector_15ab030_alt1(
            (_QWORD*)v7, (_QWORD*)(v7 + 32), (_QWORD*)(v7 + 64),
            (_QWORD*)(v7 + 96), v195);
        return;
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v8 < 2) {
        return;
      }
      if (v8 == 2) {
        if ((signed __int32)*((_DWORD*)a2 - 2) <
            (signed __int32)*(_DWORD*)(v7 + 24)) {
          v80 = *(_QWORD*)v7;
          v81 = *(_QWORD*)(v7 + 8);
          v82 = a2;
          *(_QWORD*)v7 = 0;
          *(_QWORD*)(v7 + 8) = 0;
          v83 = *(_QWORD*)(v7 + 16);
          v84 = *(_QWORD*)(v7 + 24);
          *(_QWORD*)(v7 + 16) = 0;
          v86 = v195[1];
          v85 = v195[2];
          *(_QWORD*)v7 = *v195;
          *(_QWORD*)(v7 + 8) = v86;
          *(_QWORD*)(v7 + 16) = v85;
          *((_WORD*)v82 - 16) = 0;
          *(_QWORD*)(v7 + 24) = *((_QWORD*)v82 - 1);
          if ((*(v82 - 32) & 1) != 0) {
            v87 = *((_QWORD*)v82 - 2);
            if (v87 != 0) {
              v88 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v88 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v87);
            }
          }
          *((_QWORD*)v82 - 4) = v80;
          *((_QWORD*)v82 - 3) = v81;
          *((_QWORD*)v82 - 2) = v83;
          *((_QWORD*)v82 - 1) = v84;
        }
        return;
      }
    }
    if (v8 <= 23) {
      v89 = (char*)(v7 + 32);
      v91 = (char*)v7 == a2 || v89 == a2;
      if ((a4 & 1) == 0) {
        if (!v91) {
          v176 = (_QWORD*)(v7 + 56);
          do {
            v177 = (__int64)v89;
            if ((signed __int32)*(_DWORD*)(a1 + 56) <
                (signed __int32)*(_DWORD*)(a1 + 24)) {
              v178 = *(_QWORD*)v89;
              v179 = *(_QWORD*)(a1 + 40);
              v180 = *(_QWORD*)(a1 + 48);
              v181 = v176;
              *((_QWORD*)v89 + 1) = 0;
              *((_QWORD*)v89 + 2) = 0;
              *(_QWORD*)v89 = 0;
              v182 = *(_QWORD*)(a1 + 56);
              do {
                v186 = v181;
                v188 = *((_BYTE*)v181 - 24);
                v187 = v181 - 3;
                if ((v188 & 1) != 0) {
                  v189 = *(v186 - 1);
                  if (v189 != 0) {
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                      v190 = 128;
                    }
                    else {
                      v190 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        fw_memory_g_heap_manager + v190, v189);
                  }
                }
                v183 = *(v187 - 4);
                v184 = *(v187 - 3);
                v185 = *(v187 - 2);
                *((_WORD*)v186 - 28) = 0;
                *v187 = v183;
                v187[1] = v184;
                v187[2] = v185;
                v181 = v186 - 4;
                *v186 = *(v186 - 4);
              } while ((signed __int32)*((_DWORD*)v186 - 16) > (int)v182);
              if ((*(_BYTE*)(v186 - 7) & 1) != 0) {
                v191 = *(v186 - 5);
                if (v191 != 0) {
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                    v192 = 128;
                  }
                  else {
                    v192 = 56;
                  }
                  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v192,
                                                v191);
                }
              }
              *(v186 - 7) = v178;
              *(v186 - 6) = v179;
              *(v186 - 5) = v180;
              *v181 = v182;
            }
            v89 = (char*)(v177 + 32);
            v176 += 4;
            a1 = v177;
          } while ((char*)(v177 + 32) != v208);
        }
        return;
      }
      if (v91) {
        return;
      }
      v92 = 0;
      v93 = v7;
      while (1) {
        v94 = v89;
        if ((signed __int32)*(_DWORD*)(v93 + 56) <
            (signed __int32)*(_DWORD*)(v93 + 24)) {
          v95 = *(_QWORD*)v89;
          v96 = *(_QWORD*)(v93 + 40);
          v97 = *(_QWORD*)(v93 + 48);
          v98 = v92;
          *((_QWORD*)v89 + 1) = 0;
          *((_QWORD*)v89 + 2) = 0;
          *(_QWORD*)v89 = 0;
          v99 = *(_QWORD*)(v93 + 56);
          while (1) {
            v100 = (__int64*)(a1 + v98);
            if ((*(_BYTE*)(a1 + v98 + 32) & 1) != 0) {
              v101 = v100[6];
              if (v101 != 0) {
                v102 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v102 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v102, v101);
              }
            }
            v103 = *v100;
            v104 = v100[1];
            *(_WORD*)v100 = 0;
            *(_QWORD*)(a1 + v98 + 32) = v103;
            *(_QWORD*)(a1 + v98 + 40) = v104;
            v105 = v100[3];
            *(_QWORD*)(a1 + v98 + 48) = v100[2];
            v100[7] = v105;
            if (v98 == 0) {
              break;
            }
            v106 = a1 + v98;
            v98 -= 32;
            if ((signed __int32)*(_DWORD*)(v106 - 8) <= (int)v99) {
              v107 = a1 + v98 + 32;
              if ((*(_BYTE*)v107 & 1) != 0) {
                goto LABEL_123;
              }
              goto LABEL_109;
            }
          }
          v107 = a1;
          if ((*(_BYTE*)a1 & 1) != 0) {
          LABEL_123:
            v108 = *(_QWORD*)(v107 + 16);
            if (v108 != 0) {
              v109 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v109 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, v108);
            }
          }
        LABEL_109:
          *(_QWORD*)v107 = v95;
          *(_QWORD*)(v107 + 8) = v96;
          *(_QWORD*)(v107 + 16) = v97;
          *(_QWORD*)(v107 + 24) = v99;
        }
        v89 = v94 + 32;
        v92 += 32;
        v93 = (unsigned __int64)v94;
        if (v94 + 32 == v208) {
          return;
        }
      }
    }
    if (a3 == 0) {
      break;
    }
    v10 = (__int64*)(v7 + 32 * ((unsigned __int64)v8 >> 1));
    if ((unsigned __int64)v8 < 0x81) {
      llvm_libcxx_21_libcxx_include___vector_15aabe0(
          (_QWORD*)(a1 + 32 * ((unsigned __int64)v8 >> 1)), (__int64*)a1, v195);
    }
    else {
      llvm_libcxx_21_libcxx_include___vector_15aabe0(
          (_QWORD*)a1, (__int64*)(a1 + 32 * ((unsigned __int64)v8 >> 1)), v195);
      llvm_libcxx_21_libcxx_include___vector_15aabe0((_QWORD*)(a1 + 32),
                                                     v10 - 4, v194);
      llvm_libcxx_21_libcxx_include___vector_15aabe0((_QWORD*)(a1 + 64),
                                                     v10 + 4, v193);
      llvm_libcxx_21_libcxx_include___vector_15aabe0(
          v10 - 4, (__int64*)(a1 + 32 * ((unsigned __int64)v8 >> 1)), v10 + 4);
      v11 = *(_QWORD*)a1;
      v12 = *(_QWORD*)(a1 + 8);
      v13 = *(_QWORD*)(a1 + 16);
      v14 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 8) = 0;
      *(_QWORD*)(a1 + 16) = 0;
      *(_QWORD*)a1 = 0;
      v15 = v10[1];
      v16 = v10[2];
      v17 = v10[3];
      *(_QWORD*)a1 = *v10;
      *(_QWORD*)(a1 + 8) = v15;
      *(_QWORD*)(a1 + 16) = v16;
      *(_QWORD*)(a1 + 24) = v17;
      *v10 = v11;
      v10[1] = v12;
      v10[2] = v13;
      v10[3] = v14;
    }
    v18 = a3 - 1;
    if ((a4 & 1) != 0 || (signed __int32)*(_DWORD*)(a1 - 8) <
                             (signed __int32)*(_DWORD*)(a1 + 24)) {
      v20 = *(_QWORD*)a1;
      v19 = *(_QWORD*)(a1 + 8);
      v21 = 0;
      *(_QWORD*)a1 = 0;
      *(_QWORD*)(a1 + 8) = 0;
      v198 = v19;
      v199 = v20;
      v22 = *(_QWORD*)(a1 + 16);
      v23 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 16) = 0;
      v197 = v22;
      do {
        v24 = a1 + v21;
        v21 += 32;
      } while ((signed __int32)*(_DWORD*)(v24 + 56) < (int)v23);
      v25 = a1 + v21;
      v26 = a2;
      if (v21 == 32) {
        v29 = v208;
        while (v25 < (unsigned __int64)v29) {
          v30 = *((_DWORD*)v29 - 2);
          v28 = v29 - 32;
          v29 -= 32;
          if (v30 < (int)v23) {
            goto LABEL_26;
          }
        }
        v28 = v29;
      }
      else {
        do {
          v27 = *((_DWORD*)v26 - 2);
          v28 = v26 - 32;
          v26 -= 32;
        } while (v27 >= (int)v23);
      }
    LABEL_26:
      v203 = v18;
      v7 = v25;
      if (v25 < (unsigned __int64)v28) {
        v31 = v28;
        do {
          v32 = *(_QWORD*)v7;
          v33 = *(_QWORD*)(v7 + 8);
          *(_QWORD*)v7 = 0;
          *(_QWORD*)(v7 + 8) = 0;
          v35 = *(_QWORD*)(v7 + 16);
          v34 = *(_QWORD*)(v7 + 24);
          *(_QWORD*)(v7 + 16) = 0;
          v37 = *((_QWORD*)v31 + 1);
          v36 = *((_QWORD*)v31 + 2);
          *(_QWORD*)v7 = *(_QWORD*)v31;
          *(_QWORD*)(v7 + 8) = v37;
          *(_QWORD*)(v7 + 16) = v36;
          *(_WORD*)v31 = 0;
          *(_QWORD*)(v7 + 24) = *((_QWORD*)v31 + 3);
          if ((*v31 & 1) != 0) {
            v38 = *((_QWORD*)v31 + 2);
            if (v38 != 0) {
              v39 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v38);
            }
          }
          *(_QWORD*)v31 = v32;
          *((_QWORD*)v31 + 1) = v33;
          *((_QWORD*)v31 + 2) = v35;
          *((_QWORD*)v31 + 3) = v34;
          do {
            v40 = *(_DWORD*)(v7 + 56);
            v7 += 32LL;
          } while (v40 < (int)v23);
          do {
            v41 = *((_DWORD*)v31 - 2);
            v31 -= 32;
          } while (v41 >= (int)v23);
        } while (v7 < (unsigned __int64)v31);
      }
      a3 = v203;
      v42 = (__int64*)(v7 - 32);
      if (a1 != v7 - 32) {
        if ((*(_BYTE*)a1 & 1) != 0) {
          v43 = *(_QWORD*)(a1 + 16);
          if (v43 != 0) {
            v44 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v43);
          }
        }
        v45 = *v42;
        v46 = *(_QWORD*)(v7 - 16);
        *(_QWORD*)(a1 + 8) = *(_QWORD*)(v7 - 24);
        *(_QWORD*)(a1 + 16) = v46;
        *(_QWORD*)a1 = v45;
        *(_WORD*)(v7 - 32) = 0;
        *(_QWORD*)(a1 + 24) = *(_QWORD*)(v7 - 8);
      }
      if ((*(_BYTE*)v42 & 1) != 0) {
        v47 = *(_QWORD*)(v7 - 16);
        if (v47 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v47);
        }
      }
      *(_QWORD*)(v7 - 32) = v199;
      *(_QWORD*)(v7 - 24) = v198;
      *(_QWORD*)(v7 - 16) = v197;
      *(_QWORD*)(v7 - 8) = v23;
      v49 = v25 >= (unsigned __int64)v28;
      a2 = v208;
      if (!v49) {
        goto LABEL_53;
      }
      v50 = llvm_libcxx_21_libcxx_include___vector_15ab280((_QWORD*)a1,
                                                           (char*)(v7 - 32));
      if (llvm_libcxx_21_libcxx_include___vector_15ab280((_QWORD*)v7, v208)) {
        a2 = (char*)(v7 - 32);
        if (v50) {
          return;
        }
        goto LABEL_1;
      }
      if (!v50) {
      LABEL_53:
        llvm_libcxx_21_libcxx_include___vector_15a9e40(a1, (char*)(v7 - 32),
                                                       v203, a4 & 1);
        a4 = 0;
      }
    }
    else {
      v52 = *(_QWORD*)a1;
      v51 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)a1 = 0;
      *(_QWORD*)(a1 + 8) = 0;
      v200 = v51;
      v204 = v52;
      v53 = *(_QWORD*)(a1 + 16);
      v54 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(a1 + 16) = 0;
      if ((signed __int32)*((_DWORD*)a2 - 2) <= (int)v54) {
        v57 = a1 + 32;
        do {
          v7 = v57;
          if (v57 >= (unsigned __int64)a2) {
            break;
          }
          v58 = *(_DWORD*)(v57 + 24);
          v57 += 32LL;
        } while (v58 <= (int)v54);
      }
      else {
        v55 = a1;
        do {
          v56 = *(_DWORD*)(v55 + 56);
          v7 = v55 + 32;
          v55 += 32;
        } while (v56 <= (int)v54);
      }
      v59 = v18;
      v60 = a2;
      if (v7 < (unsigned __int64)a2) {
        v61 = a2;
        do {
          v62 = *((_DWORD*)v61 - 2);
          v60 = v61 - 32;
          v61 -= 32;
        } while (v62 > (int)v54);
      }
      while (v7 < (unsigned __int64)v60) {
        v63 = *(_QWORD*)v7;
        v64 = *(_QWORD*)(v7 + 8);
        *(_QWORD*)v7 = 0;
        *(_QWORD*)(v7 + 8) = 0;
        v65 = *(_QWORD*)(v7 + 16);
        v66 = *(_QWORD*)(v7 + 24);
        *(_QWORD*)(v7 + 16) = 0;
        v68 = *((_QWORD*)v60 + 1);
        v67 = *((_QWORD*)v60 + 2);
        *(_QWORD*)v7 = *(_QWORD*)v60;
        *(_QWORD*)(v7 + 8) = v68;
        *(_QWORD*)(v7 + 16) = v67;
        *(_WORD*)v60 = 0;
        *(_QWORD*)(v7 + 24) = *((_QWORD*)v60 + 3);
        if ((*v60 & 1) != 0) {
          v69 = *((_QWORD*)v60 + 2);
          if (v69 != 0) {
            v70 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v70 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v69);
          }
        }
        *(_QWORD*)v60 = v63;
        *((_QWORD*)v60 + 1) = v64;
        *((_QWORD*)v60 + 2) = v65;
        *((_QWORD*)v60 + 3) = v66;
        do {
          v71 = *(_DWORD*)(v7 + 56);
          v7 += 32LL;
        } while (v71 <= (int)v54);
        a2 = v208;
        do {
          v72 = *((_DWORD*)v60 - 2);
          v60 -= 32;
        } while (v72 > (int)v54);
      }
      v73 = (__int64*)(v7 - 32);
      if (a1 != v7 - 32) {
        if ((*(_BYTE*)a1 & 1) != 0) {
          v74 = *(_QWORD*)(a1 + 16);
          if (v74 != 0) {
            v75 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v75 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v75, v74);
          }
        }
        v76 = *v73;
        v77 = *(_QWORD*)(v7 - 16);
        *(_QWORD*)(a1 + 8) = *(_QWORD*)(v7 - 24);
        *(_QWORD*)(a1 + 16) = v77;
        *(_QWORD*)a1 = v76;
        *(_WORD*)(v7 - 32) = 0;
        *(_QWORD*)(a1 + 24) = *(_QWORD*)(v7 - 8);
      }
      if ((*(_BYTE*)v73 & 1) != 0) {
        v78 = *(_QWORD*)(v7 - 16);
        if (v78 != 0) {
          v79 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v78);
        }
      }
      a4 = 0;
      *(_QWORD*)(v7 - 16) = v53;
      *(_QWORD*)(v7 - 8) = v54;
      a3 = v59;
      *(_QWORD*)(v7 - 32) = v204;
      *(_QWORD*)(v7 - 24) = v200;
    }
  }
  if ((char*)v7 == a2) {
    return;
  }
  v110 = v9 >> 1;
  v111 = v9 >> 1;
  do {
    v112 = v111;
    if (v110 >= v111) {
      v113 = (2 * (v111 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
      v114 = 2 * v111 + 2;
      v115 = a1 + 32 * v113;
      if (v114 < v8) {
        v116 = *(_DWORD*)(v115 + 24);
        v117 = *(_DWORD*)(v115 + 56);
        v118 = v116 < v117;
        if (v116 >= v117) {
          v119 = 0;
        }
        else {
          v119 = 32;
        }
        if (v118) {
          v113 = 2 * v112 + 2;
        }
        v115 += v119;
      }
      v120 = (_QWORD*)(a1 + 32 * v112);
      if ((signed __int32)*(_DWORD*)(v115 + 24) >=
          (signed __int32)*((_DWORD*)v120 + 6)) {
        v122 = *v120;
        v121 = v120[1];
        v124 = v120[2];
        v123 = v120[3];
        *v120 = 0;
        v120[1] = 0;
        v120[2] = 0;
        v201 = v121;
        v205 = v122;
        do {
          v125 = (_QWORD*)v115;
          if ((*(_BYTE*)v120 & 1) != 0) {
            v126 = v120[2];
            if (v126 != 0) {
              v127 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v127 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v126);
            }
          }
          v128 = *v125;
          v129 = v125[2];
          v120[1] = v125[1];
          v120[2] = v129;
          *v120 = v128;
          *(_WORD*)v125 = 0;
          v120[3] = v125[3];
          if (v110 < v113) {
            break;
          }
          v130 = (2 * v113) | 1;
          v115 = a1 + 32 * v130;
          if (2 * v113 + 2 < v8) {
            v131 = *(_DWORD*)(v115 + 24);
            v132 = *(_DWORD*)(v115 + 56);
            v133 = v131 < v132;
            if (v131 >= v132) {
              v134 = 0;
            }
            else {
              v134 = 32;
            }
            if (v133) {
              v130 = 2 * v113 + 2;
            }
            v115 += v134;
          }
          v120 = v125;
          v113 = v130;
        } while ((signed __int32)*(_DWORD*)(v115 + 24) >= (int)v123);
        if ((*(_BYTE*)v125 & 1) != 0) {
          v135 = v125[2];
          if (v135 != 0) {
            v136 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v136 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v136, v135);
          }
        }
        v125[2] = v124;
        v125[3] = v123;
        *v125 = v205;
        v125[1] = v201;
      }
    }
    v111 = v112 - 1;
  } while (v112 != 0);
  v137 = v208;
  while (2) {
    v139 = *(_QWORD*)a1;
    v138 = *(_QWORD*)(a1 + 8);
    v140 = v137;
    v141 = 0;
    *(_QWORD*)a1 = 0;
    *(_QWORD*)(a1 + 8) = 0;
    v142 = (char*)a1;
    v206 = v138;
    v209 = v139;
    v143 = *(_QWORD*)(a1 + 16);
    v144 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 16) = 0;
    v202 = v143;
    do {
      v147 = &v142[32 * v141];
      v148 = v142;
      v142 = v147 + 32;
      if (2 * v141 + 2 >= v8) {
        v141 = (2 * v141) | 1;
        if ((*v148 & 1) == 0) {
          goto LABEL_164;
        }
      }
      else {
        v149 = *((_DWORD*)v147 + 14);
        v150 = *((_DWORD*)v147 + 22);
        v151 = v147 + 64;
        if (v149 >= v150) {
          v141 = (2 * v141) | 1;
        }
        else {
          v142 = v151;
          v141 = 2 * v141 + 2;
        }
        if ((*v148 & 1) == 0) {
          goto LABEL_164;
        }
      }
      v152 = *((_QWORD*)v148 + 2);
      if (v152 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v153 = 128;
        }
        else {
          v153 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v153, v152);
      }
    LABEL_164:
      v145 = *(_QWORD*)v142;
      v146 = *((_QWORD*)v142 + 2);
      *((_QWORD*)v148 + 1) = *((_QWORD*)v142 + 1);
      *((_QWORD*)v148 + 2) = v146;
      *(_QWORD*)v148 = v145;
      *(_WORD*)v142 = 0;
      *((_QWORD*)v148 + 3) = *((_QWORD*)v142 + 3);
    } while (v141 <= (__int64)((unsigned __int64)(v8 - 2) >> 1));
    v137 = v140 - 32;
    if (v142 == v140 - 32) {
      if ((*v142 & 1) != 0) {
        v174 = *((_QWORD*)v142 + 2);
        if (v174 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v175 = 128;
          }
          else {
            v175 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v175, v174);
        }
      }
      *(_QWORD*)v142 = v209;
      *((_QWORD*)v142 + 1) = v206;
      *((_QWORD*)v142 + 2) = v202;
      *((_QWORD*)v142 + 3) = v144;
    }
    else {
      if ((*v142 & 1) != 0) {
        v154 = *((_QWORD*)v142 + 2);
        if (v154 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v155 = 128;
          }
          else {
            v155 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v155, v154);
        }
      }
      v156 = *(_QWORD*)v137;
      v157 = *((_QWORD*)v140 - 2);
      *((_QWORD*)v142 + 1) = *((_QWORD*)v140 - 3);
      *((_QWORD*)v142 + 2) = v157;
      *(_QWORD*)v142 = v156;
      *((_WORD*)v140 - 16) = 0;
      *((_QWORD*)v142 + 3) = *((_QWORD*)v140 - 1);
      if ((*(v140 - 32) & 1) != 0) {
        v158 = *((_QWORD*)v140 - 2);
        if (v158 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v159 = 128;
          }
          else {
            v159 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v159, v158);
        }
      }
      v160 = (__int64)&v142[-a1 + 32] >> 5;
      v118 = v160 < 2;
      v161 = v160 - 2;
      *((_QWORD*)v140 - 4) = v209;
      *((_QWORD*)v140 - 3) = v206;
      *((_QWORD*)v140 - 2) = v202;
      *((_QWORD*)v140 - 1) = v144;
      if (!v118) {
        v162 = v161 >> 1;
        v163 = a1 + 32 * (v161 >> 1);
        if ((signed __int32)*(_DWORD*)(v163 + 24) <
            (signed __int32)*((_DWORD*)v142 + 6)) {
          v164 = *((_QWORD*)v142 + 3);
          v207 = *(_QWORD*)v142;
          v210 = v137;
          v165 = *((_QWORD*)v142 + 1);
          v166 = *((_QWORD*)v142 + 2);
          *(_QWORD*)v142 = 0;
          *((_QWORD*)v142 + 1) = 0;
          *((_QWORD*)v142 + 2) = 0;
          do {
            v167 = (char*)v163;
            if ((*v142 & 1) != 0) {
              v168 = *((_QWORD*)v142 + 2);
              if (v168 != 0) {
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v169 = 128;
                }
                else {
                  v169 = 56;
                }
                nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v169,
                                              v168);
              }
            }
            v170 = *(_QWORD*)v167;
            v171 = *((_QWORD*)v167 + 2);
            *((_QWORD*)v142 + 1) = *((_QWORD*)v167 + 1);
            *((_QWORD*)v142 + 2) = v171;
            *(_QWORD*)v142 = v170;
            *(_WORD*)v167 = 0;
            *((_QWORD*)v142 + 3) = *((_QWORD*)v167 + 3);
            if (v162 == 0) {
              break;
            }
            v142 = v167;
            v162 = (v162 - 1) >> 1;
            v163 = a1 + 32 * v162;
          } while ((signed __int32)*(_DWORD*)(v163 + 24) < (int)v164);
          if ((*v167 & 1) != 0) {
            v172 = *((_QWORD*)v167 + 2);
            if (v172 != 0) {
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                v173 = 128;
              }
              else {
                v173 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v173,
                                            v172);
            }
          }
          *((_QWORD*)v167 + 2) = v166;
          *((_QWORD*)v167 + 3) = v164;
          *(_QWORD*)v167 = v207;
          *((_QWORD*)v167 + 1) = v165;
          v137 = v210;
        }
      }
    }
    v118 = v8-- <= 2;
    if (!v118) {
      continue;
    }
    break;
  }
}

void llvm_libcxx_21_libcxx_include___vector_15aabe0(_QWORD* a1, __int64* a2,
                                                    __int64* a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;

  v3 = *((_DWORD*)a2 + 6);
  v4 = *((_DWORD*)a3 + 6);
  if (v3 >= (signed __int32)*((_DWORD*)a1 + 6)) {
    if (v4 < v3) {
      v11 = *a2;
      v12 = a2[1];
      *a2 = 0;
      a2[1] = 0;
      v13 = a2[2];
      v14 = a2[3];
      a2[2] = 0;
      v16 = a3[1];
      v15 = a3[2];
      *a2 = *a3;
      a2[1] = v16;
      a2[2] = v15;
      *(_WORD*)a3 = 0;
      a2[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) != 0 && a3[2] != 0) {
        v17 = a1;
        v18 = a2;
        v19 = a3;
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, a3[2]);
        a1 = v17;
        a2 = v18;
        a3 = v19;
      }
      *a3 = v11;
      a3[1] = v12;
      a3[2] = v13;
      a3[3] = v14;
      if ((signed __int32)*((_DWORD*)a2 + 6) <
          (signed __int32)*((_DWORD*)a1 + 6)) {
        v21 = *a1;
        v22 = a1[1];
        *a1 = 0;
        a1[1] = 0;
        v23 = a1[2];
        v24 = a1[3];
        a1[2] = 0;
        v26 = a2[1];
        v25 = a2[2];
        *a1 = *a2;
        a1[1] = v26;
        a1[2] = v25;
        *(_WORD*)a2 = 0;
        a1[3] = a2[3];
        if ((*(_BYTE*)a2 & 1) != 0 && a2[2] != 0) {
          v27 = a2;
          v28 = a2[2];
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
          a2 = v27;
        }
        *a2 = v21;
        a2[1] = v22;
        a2[2] = v23;
        a2[3] = v24;
      }
    }
  }
  else {
    v6 = *a1;
    v5 = a1[1];
    v7 = a1[2];
    v8 = a1[3];
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    if (v4 < v3) {
      v9 = *a3;
      v10 = a3[2];
      a1[1] = a3[1];
      a1[2] = v10;
      *a1 = v9;
      *(_WORD*)a3 = 0;
      a1[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) == 0) {
        goto LABEL_29;
      }
      goto LABEL_25;
    }
    v30 = *a2;
    v31 = a2[2];
    a1[1] = a2[1];
    a1[2] = v31;
    *a1 = v30;
    *(_WORD*)a2 = 0;
    a1[3] = a2[3];
    if ((*(_BYTE*)a2 & 1) != 0 && a2[2] != 0) {
      v32 = a2;
      v33 = a2[2];
      v34 = a3;
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v33);
      a2 = v32;
      a3 = v34;
    }
    *a2 = v6;
    a2[1] = v5;
    a2[2] = v7;
    a2[3] = v8;
    if ((signed __int32)*((_DWORD*)a3 + 6) < (int)v8) {
      a2[1] = 0;
      a2[2] = 0;
      *a2 = 0;
      v36 = *a3;
      v37 = a3[2];
      a2[1] = a3[1];
      a2[2] = v37;
      *a2 = v36;
      *(_WORD*)a3 = 0;
      a2[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) == 0) {
      LABEL_29:
        *a3 = v6;
        a3[1] = v5;
        a3[2] = v7;
        a3[3] = v8;
        return;
      }
    LABEL_25:
      v38 = a3[2];
      if (v38 != 0) {
        v39 = a3;
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v38);
        a3 = v39;
      }
      goto LABEL_29;
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_15aae70(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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

  llvm_libcxx_21_libcxx_include___vector_15aabe0(a1, a2, a3);
  if ((signed __int32)*((_DWORD*)a4 + 6) < (signed __int32)*((_DWORD*)a3 + 6)) {
    v8 = *a3;
    v9 = a3[1];
    *a3 = 0;
    a3[1] = 0;
    v10 = a3[2];
    v11 = a3[3];
    a3[2] = 0;
    v13 = a4[1];
    v12 = a4[2];
    *a3 = *a4;
    a3[1] = v13;
    a3[2] = v12;
    *(_WORD*)a4 = 0;
    a3[3] = a4[3];
    if ((*(_BYTE*)a4 & 1) != 0) {
      v14 = a4[2];
      if (v14 != 0) {
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
      }
    }
    *a4 = v8;
    a4[1] = v9;
    a4[2] = v10;
    a4[3] = v11;
    if ((signed __int32)*((_DWORD*)a3 + 6) <
        (signed __int32)*((_DWORD*)a2 + 6)) {
      v16 = *a2;
      v17 = a2[1];
      *a2 = 0;
      a2[1] = 0;
      v18 = a2[2];
      v19 = a2[3];
      a2[2] = 0;
      v21 = a3[1];
      v20 = a3[2];
      *a2 = *a3;
      a2[1] = v21;
      a2[2] = v20;
      *(_WORD*)a3 = 0;
      a2[3] = a3[3];
      if ((*(_BYTE*)a3 & 1) != 0) {
        v22 = a3[2];
        if (v22 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
        }
      }
      *a3 = v16;
      a3[1] = v17;
      a3[2] = v18;
      a3[3] = v19;
      if ((signed __int32)*((_DWORD*)a2 + 6) <
          (signed __int32)*((_DWORD*)a1 + 6)) {
        v24 = *a1;
        v25 = a1[1];
        *a1 = 0;
        a1[1] = 0;
        v26 = a1[2];
        v27 = a1[3];
        a1[2] = 0;
        v29 = a2[1];
        v28 = a2[2];
        *a1 = *a2;
        a1[1] = v29;
        a1[2] = v28;
        *(_WORD*)a2 = 0;
        a1[3] = a2[3];
        if ((*(_BYTE*)a2 & 1) != 0) {
          v30 = a2[2];
          if (v30 != 0) {
            v31 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
          }
        }
        *a2 = v24;
        a2[1] = v25;
        a2[2] = v26;
        a2[3] = v27;
      }
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_15ab030(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64* a4,
                                                    __int64* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  llvm_libcxx_21_libcxx_include___vector_15aae70(a1, a2, a3, a4);
  if ((signed __int32)*((_DWORD*)a5 + 6) < (signed __int32)*((_DWORD*)a4 + 6)) {
    v10 = *a4;
    v11 = a4[1];
    *a4 = 0;
    a4[1] = 0;
    v12 = a4[2];
    v13 = a4[3];
    a4[2] = 0;
    v15 = a5[1];
    v14 = a5[2];
    *a4 = *a5;
    a4[1] = v15;
    a4[2] = v14;
    *(_WORD*)a5 = 0;
    a4[3] = a5[3];
    if ((*(_BYTE*)a5 & 1) != 0) {
      v16 = a5[2];
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
      }
    }
    *a5 = v10;
    a5[1] = v11;
    a5[2] = v12;
    a5[3] = v13;
    if ((signed __int32)*((_DWORD*)a4 + 6) <
        (signed __int32)*((_DWORD*)a3 + 6)) {
      v18 = *a3;
      v19 = a3[1];
      *a3 = 0;
      a3[1] = 0;
      v20 = a3[2];
      v21 = a3[3];
      a3[2] = 0;
      v23 = a4[1];
      v22 = a4[2];
      *a3 = *a4;
      a3[1] = v23;
      a3[2] = v22;
      *(_WORD*)a4 = 0;
      a3[3] = a4[3];
      if ((*(_BYTE*)a4 & 1) != 0) {
        v24 = a4[2];
        if (v24 != 0) {
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
        }
      }
      *a4 = v18;
      a4[1] = v19;
      a4[2] = v20;
      a4[3] = v21;
      if ((signed __int32)*((_DWORD*)a3 + 6) <
          (signed __int32)*((_DWORD*)a2 + 6)) {
        v26 = *a2;
        v27 = a2[1];
        *a2 = 0;
        a2[1] = 0;
        v28 = a2[2];
        v29 = a2[3];
        a2[2] = 0;
        v31 = a3[1];
        v30 = a3[2];
        *a2 = *a3;
        a2[1] = v31;
        a2[2] = v30;
        *(_WORD*)a3 = 0;
        a2[3] = a3[3];
        if ((*(_BYTE*)a3 & 1) != 0) {
          v32 = a3[2];
          if (v32 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
          }
        }
        *a3 = v26;
        a3[1] = v27;
        a3[2] = v28;
        a3[3] = v29;
        if ((signed __int32)*((_DWORD*)a2 + 6) <
            (signed __int32)*((_DWORD*)a1 + 6)) {
          v34 = *a1;
          v35 = a1[1];
          *a1 = 0;
          a1[1] = 0;
          v36 = a1[2];
          v37 = a1[3];
          a1[2] = 0;
          v39 = a2[1];
          v38 = a2[2];
          *a1 = *a2;
          a1[1] = v39;
          a1[2] = v38;
          *(_WORD*)a2 = 0;
          a1[3] = a2[3];
          if ((*(_BYTE*)a2 & 1) != 0) {
            v40 = a2[2];
            if (v40 != 0) {
              v41 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v41 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v40);
            }
          }
          *a2 = v34;
          a2[1] = v35;
          a2[2] = v36;
          a2[3] = v37;
        }
      }
    }
  }
}

bool llvm_libcxx_21_libcxx_include___vector_15ab280(_QWORD* a1, char* a2)
{
  signed __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v14;
  char* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v4 = (a2 - (char*)a1) >> 5;
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      llvm_libcxx_21_libcxx_include___vector_15aabe0(a1, a1 + 4,
                                                     (__int64*)a2 - 4);
      return true;
    case 4LL:
      llvm_libcxx_21_libcxx_include___vector_15aae70(a1, a1 + 4, a1 + 8,
                                                     (__int64*)a2 - 4);
      return true;
    case 5LL:
      llvm_libcxx_21_libcxx_include___vector_15ab030(a1, a1 + 4, a1 + 8,
                                                     a1 + 12, (__int64*)a2 - 4);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v4 < 2) {
      return true;
    }
    if (v4 == 2) {
      if ((signed __int32)*((_DWORD*)a2 - 2) <
          (signed __int32)*((_DWORD*)a1 + 6)) {
        v5 = *a1;
        v6 = a1[1];
        *a1 = 0;
        a1[1] = 0;
        v7 = a1[2];
        v8 = a1[3];
        a1[2] = 0;
        v10 = *((_QWORD*)a2 - 3);
        v9 = *((_QWORD*)a2 - 2);
        *a1 = *((_QWORD*)a2 - 4);
        a1[1] = v10;
        a1[2] = v9;
        *((_WORD*)a2 - 16) = 0;
        a1[3] = *((_QWORD*)a2 - 1);
        if ((*(a2 - 32) & 1) != 0) {
          v11 = *((_QWORD*)a2 - 2);
          if (v11 != 0) {
            v12 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
          }
        }
        *((_QWORD*)a2 - 4) = v5;
        *((_QWORD*)a2 - 3) = v6;
        *((_QWORD*)a2 - 2) = v7;
        *((_QWORD*)a2 - 1) = v8;
        return true;
      }
      return true;
    }
  }
  v14 = (char*)(a1 + 8);
  llvm_libcxx_21_libcxx_include___vector_15aabe0(a1, a1 + 4, a1 + 8);
  v15 = (char*)(a1 + 12);
  if (a1 + 12 == (_QWORD*)a2) {
    return true;
  }
  v16 = 0;
  v17 = 0;
  while (1) {
    if ((signed __int32)*((_DWORD*)v15 + 6) <
        (signed __int32)*((_DWORD*)v14 + 6)) {
      v19 = *(_QWORD*)v15;
      v18 = *((_QWORD*)v15 + 1);
      v20 = *((_QWORD*)v15 + 2);
      v21 = *((_QWORD*)v15 + 3);
      v22 = v16;
      *(_QWORD*)v15 = 0;
      *((_QWORD*)v15 + 1) = 0;
      *((_QWORD*)v15 + 2) = 0;
      v34 = v18;
      v35 = v19;
      while (1) {
        v23 = (char*)a1 + v22;
        if ((*((_BYTE*)a1 + v22 + 96) & 1) != 0) {
          v24 = *((_QWORD*)v23 + 14);
          if (v24 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
          }
        }
        v26 = *(_QWORD*)((char*)a1 + v22 + 64);
        v27 = *(_QWORD*)((char*)a1 + v22 + 72);
        *((_BYTE*)a1 + v22 + 64) = 0;
        *(_QWORD*)((char*)a1 + v22 + 96) = v26;
        *(_QWORD*)((char*)a1 + v22 + 104) = v27;
        v28 = *(_QWORD*)((char*)a1 + v22 + 80);
        v29 = *((_QWORD*)v23 + 11);
        v23[65] = 0;
        *(_QWORD*)((char*)a1 + v22 + 112) = v28;
        *((_QWORD*)v23 + 15) = v29;
        if (v22 == -64) {
          break;
        }
        v30 = (char*)a1 + v22;
        v22 -= 32;
        if ((signed __int32)*((_DWORD*)v30 + 14) <= (int)v21) {
          v31 = (char*)a1 + v22 + 96;
          if ((*v31 & 1) == 0) {
            goto LABEL_18;
          }
          goto LABEL_32;
        }
      }
      v31 = (char*)a1;
      if ((*(_BYTE*)a1 & 1) != 0) {
      LABEL_32:
        v32 = *((_QWORD*)v31 + 2);
        if (v32 != 0) {
          v33 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v32);
        }
      }
    LABEL_18:
      ++v17;
      *((_QWORD*)v31 + 2) = v20;
      *((_QWORD*)v31 + 3) = v21;
      *(_QWORD*)v31 = v35;
      *((_QWORD*)v31 + 1) = v34;
      if (v17 == 8) {
        return v15 + 32 == a2;
      }
    }
    v14 = v15;
    v15 += 32;
    v16 += 32;
    if (v15 == a2) {
      return true;
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_1683540(
    __int64* a1, __int64* a2, unsigned __int64 a3, __int64* a4,
    signed __int64 a5, long double a6, long double a7)
{

#pragma clang fp contract(off)
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  long double v18;
  long double v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  float v25;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  __int64* v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  long double v64;
  long double v65;
  __int64 v66;
  __int64* v67;
  __int64* v68;
  __int64* v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int16 v73;
  __int64* v74;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int16 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int16 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  int v130;
  __int64 v131;
  __int64 v132;
  __int16 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  __int64 v138;
  int v139;
  __int64 v140;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v64 = COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v65 = COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (a3 >= 2) {
    if (a3 == 2) {
      if (*((_DWORD*)a1 + 23) != 0 && *((_DWORD*)a2 - 3) == 0 ||
          *((float*)a2 - 23) > *((float*)a1 + 3)) {
        GameRoutine_1683ce0(a1, a2 - 13),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v64 =
                COERCE_AS(__typeof__(v64), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v65 =
                COERCE_AS(__typeof__(v65), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
    }
    else {
      v11 = a3;
      if ((__int64)a3 <= 0) {
        if (a1 != a2) {
          v20 = a1 + 13;
          if (a1 + 13 != a2) {
            v21 = 0;
            v22 = a1;
            v23 = fw_memory_g_heap_manager_ptr;
            do {
              v24 = v20;
              v25 = *((float*)v22 + 29);
              if (*((_DWORD*)v22 + 23) != 0 && *((_DWORD*)v22 + 49) == 0 ||
                  v25 > *((float*)v22 + 3)) {
                v138 = *v20;
                v139 = *((_DWORD*)v20 + 2);
                v130 = *((_DWORD*)v22 + 30);
                v29 = v22[16];
                v28 = v22[17];
                v22[16] = 0;
                v22[17] = 0;
                v128 = v28;
                v129 = v29;
                v31 = v22[18];
                v30 = v22[19];
                v22[18] = 0;
                v22[19] = 0;
                v131 = v30;
                v132 = v31;
                v32 = v22[20];
                v33 = v22[21];
                v22[20] = 0;
                v140 = v32;
                v35 = v22[22];
                v34 = v22[23];
                v22[21] = 0;
                v22[22] = 0;
                v134 = v35;
                v135 = v33;
                v136 = v34;
                v36 = v21;
                v137 = *((_DWORD*)v22 + 48);
                v37 = *((_DWORD*)v22 + 49);
                v133 = *((_WORD*)v22 + 100);
                while (1) {
                  v38 = (char*)a1 + v36;
                  v39 = v36;
                  v40 = *(__int64*)((char*)a1 + v36);
                  v41 = *(__int64*)((char*)a1 + v36 + 8);
                  v42 = *((_QWORD*)v38 + 17);
                  *((_QWORD*)v38 + 13) = v40;
                  *((_QWORD*)v38 + 14) = v41;
                  *((_DWORD*)v38 + 30) = *((_DWORD*)v38 + 4);
                  v43 = *((_QWORD*)v38 + 3);
                  v44 = *((_QWORD*)v38 + 4);
                  *((_QWORD*)v38 + 3) = 0;
                  *((_QWORD*)v38 + 4) = 0;
                  *((_QWORD*)v38 + 16) = v43;
                  *((_QWORD*)v38 + 17) = v44;
                  if (v42 != 0) {
                    std___1___shared_weak_count___release_weak(v42),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v64 = COERCE_AS(__typeof__(v64),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(__n128, "v1", "=w"));
                  }
                  v45 = *((_QWORD*)v38 + 5);
                  v46 = *((_QWORD*)v38 + 6);
                  v47 = *((_QWORD*)v38 + 19);
                  *((_QWORD*)v38 + 5) = 0;
                  *((_QWORD*)v38 + 6) = 0;
                  *((_QWORD*)v38 + 18) = v45;
                  *((_QWORD*)v38 + 19) = v46;
                  if (v47 != 0) {
                    std___1___shared_weak_count___release_weak(v47),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v64 = COERCE_AS(__typeof__(v64),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(__n128, "v1", "=w"));
                  }
                  v48 = (char*)a1 + v39;
                  v49 = *(__int64*)((char*)a1 + v39 + 160);
                  if (v49 != 0) {
                    *((_QWORD*)v48 + 21) = v49;
                    if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
                      v50 = 128;
                    }
                    else {
                      v50 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v50, v49),
                        v18 = COERCE_AS(__typeof__(v18),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v19 = COERCE_AS(__typeof__(v19),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v64 = COERCE_AS(__typeof__(v64),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v65 = COERCE_AS(__typeof__(v65),
                                        PSEUDO_REGISTER(__n128, "v1", "=w"));
                    *((_QWORD*)v48 + 21) = 0;
                    *((_QWORD*)v48 + 22) = 0;
                  }
                  v51 = *((_QWORD*)v48 + 7);
                  v52 = *((_QWORD*)v48 + 8);
                  *((_QWORD*)v48 + 7) = 0;
                  *((_QWORD*)v48 + 20) = v51;
                  *((_QWORD*)v48 + 21) = v52;
                  v53 = *((_QWORD*)v48 + 9);
                  v54 = *((_QWORD*)v48 + 10);
                  *((_QWORD*)v48 + 8) = 0;
                  *((_QWORD*)v48 + 9) = 0;
                  *((_QWORD*)v48 + 22) = v53;
                  *((_QWORD*)v48 + 23) = v54;
                  *((_QWORD*)v48 + 24) = *((_QWORD*)v48 + 11);
                  *((_WORD*)v48 + 100) = *((_WORD*)v48 + 48);
                  if (v39 == 0) {
                    break;
                  }
                  v36 = v39 - 104;
                  v55 = *(_DWORD*)((char*)a1 + v39 - 12) != 0 && v37 == 0;
                  if (!v55 && v25 <= *(float*)((char*)a1 + v39 - 92)) {
                    v56 = (__int64*)((char*)a1 + v39);
                    goto LABEL_45;
                  }
                }
                v56 = a1;
              LABEL_45:
                v57 = (char*)a1 + v39;
                *((float*)v56 + 3) = v25;
                *v56 = v138;
                *((_DWORD*)v56 + 4) = v130;
                *((_DWORD*)v56 + 2) = v139;
                *((_QWORD*)v57 + 3) = v129;
                v58 = v56[4];
                v56[4] = v128;
                if (v58 != 0) {
                  std___1___shared_weak_count___release_weak(v58),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                *((_QWORD*)v57 + 5) = v132;
                v59 = v56[6];
                v56[6] = v131;
                if (v59 != 0) {
                  std___1___shared_weak_count___release_weak(v59),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                v60 = *((_QWORD*)v57 + 7);
                if (v60 != 0) {
                  v61 = *(_QWORD*)v23;
                  v56[8] = v60;
                  if (*(_QWORD*)(v61 + 200) != 0) {
                    v62 = 128;
                  }
                  else {
                    v62 = 56;
                  }
                  nn_mem_StandardAllocator_Free(v61 + v62, v60),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                *((_QWORD*)v57 + 7) = v140;
                v56[8] = v135;
                v56[9] = v134;
                *((_QWORD*)v57 + 10) = v136;
                *((_DWORD*)v57 + 22) = v137;
                *((_DWORD*)v56 + 23) = v37;
                *((_WORD*)v56 + 48) = v133;
              }
              v20 = v24 + 13;
              v21 += 104;
              v22 = v24;
            } while (v24 + 13 != a2);
          }
        }
      }
      else {
        v12 = a3 >> 1;
        v14 = 13 * (a3 >> 1);
        v15 = a3 - (a3 >> 1);
        v16 = &a1[v14];
        if ((__int64)a3 <= a5) {
          GameHr_1683ec0((__int64)a1, v16, a3 >> 1, (__int64)a4, a6, a7),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          v63 = &a4[v14];
          GameHr_1683ec0((__int64)&a1[v14], a2, v11 - (v11 >> 1),
                         (__int64)&a4[v14], v64, v65),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          v66 = fw_memory_g_heap_manager_ptr;
          v67 = &a4[13 * v11];
          v68 = a1 + 5;
          v69 = v63;
          v70 = a4;
          while (v69 != v67) {
            v74 = v68 - 5;
            if ((*((_DWORD*)v70 + 23) == 0 || *((_DWORD*)v69 + 23) != 0) &&
                *((float*)v69 + 3) <= *((float*)v70 + 3)) {
              v87 = *v70;
              v88 = v70[1];
              *((_DWORD*)v68 - 6) = *((_DWORD*)v70 + 4);
              *v74 = v87;
              *(v68 - 4) = v88;
              v89 = v70[3];
              v90 = v70[4];
              v70[3] = 0;
              v70[4] = 0;
              v91 = *(v68 - 1);
              *(v68 - 2) = v89;
              *(v68 - 1) = v90;
              if (v91 != 0) {
                std___1___shared_weak_count___release_weak(v91),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v92 = v70[5];
              v93 = v70[6];
              v70[5] = 0;
              v70[6] = 0;
              v94 = v68[1];
              *v68 = v92;
              v68[1] = v93;
              if (v94 != 0) {
                std___1___shared_weak_count___release_weak(v94),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v95 = v68[2];
              if (v95 != 0) {
                v68[3] = v95;
                v96 = 128;
                if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) == 0) {
                  v96 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v96, v95),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                v68[3] = 0;
                v68[4] = 0;
                v68[2] = 0;
              }
              v68[2] = v70[7];
              v68[3] = v70[8];
              v68[4] = v70[9];
              v70[8] = 0;
              v70[9] = 0;
              v70[7] = 0;
              v71 = v70[10];
              v72 = v70[11];
              v73 = *((_WORD*)v70 + 48);
              v70 += 13;
            }
            else {
              v77 = *v69;
              v78 = v69[1];
              *((_DWORD*)v68 - 6) = *((_DWORD*)v69 + 4);
              *v74 = v77;
              *(v68 - 4) = v78;
              v79 = v69[3];
              v80 = v69[4];
              v69[3] = 0;
              v69[4] = 0;
              v81 = *(v68 - 1);
              *(v68 - 2) = v79;
              *(v68 - 1) = v80;
              if (v81 != 0) {
                std___1___shared_weak_count___release_weak(v81),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v82 = v69[5];
              v83 = v69[6];
              v69[5] = 0;
              v69[6] = 0;
              v84 = v68[1];
              *v68 = v82;
              v68[1] = v83;
              if (v84 != 0) {
                std___1___shared_weak_count___release_weak(v84),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v85 = v68[2];
              if (v85 != 0) {
                v68[3] = v85;
                v86 = 128;
                if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) == 0) {
                  v86 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v86, v85),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
                v68[3] = 0;
                v68[4] = 0;
                v68[2] = 0;
              }
              v68[2] = v69[7];
              v68[3] = v69[8];
              v68[4] = v69[9];
              v69[8] = 0;
              v69[9] = 0;
              v69[7] = 0;
              v71 = v69[10];
              v72 = v69[11];
              v73 = *((_WORD*)v69 + 48);
              v69 += 13;
            }
            *((_WORD*)v68 + 28) = v73;
            v68[5] = v71;
            v68[6] = v72;
            v68 += 13;
            if (v70 == v63) {
              for (; v69 != v67; v68 += 13) {
                v113 = *v69;
                v114 = v69[1];
                *((_DWORD*)v68 - 6) = *((_DWORD*)v69 + 4);
                *(v68 - 5) = v113;
                *(v68 - 4) = v114;
                v115 = v69[3];
                v116 = v69[4];
                v69[3] = 0;
                v69[4] = 0;
                v117 = *(v68 - 1);
                *(v68 - 2) = v115;
                *(v68 - 1) = v116;
                if (v117 != 0) {
                  std___1___shared_weak_count___release_weak(v117),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                v118 = v69[5];
                v119 = v69[6];
                v69[5] = 0;
                v69[6] = 0;
                v120 = v68[1];
                *v68 = v118;
                v68[1] = v119;
                if (v120 != 0) {
                  std___1___shared_weak_count___release_weak(v120),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                }
                v121 = v68[2];
                if (v121 != 0) {
                  v68[3] = v121;
                  if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) != 0) {
                    v122 = 128;
                  }
                  else {
                    v122 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v122, v121),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v64 = COERCE_AS(__typeof__(v64),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v65 = COERCE_AS(__typeof__(v65),
                                      PSEUDO_REGISTER(__n128, "v1", "=w"));
                  v68[3] = 0;
                  v68[4] = 0;
                  v68[2] = 0;
                }
                v68[2] = v69[7];
                v68[3] = v69[8];
                v68[4] = v69[9];
                v69[8] = 0;
                v69[9] = 0;
                v69[7] = 0;
                v110 = v69[10];
                v111 = v69[11];
                v112 = *((_WORD*)v69 + 48);
                v69 += 13;
                *((_WORD*)v68 + 28) = v112;
                v68[5] = v110;
                v68[6] = v111;
              }
              goto LABEL_106;
            }
          }
          for (; v70 != v63; v68 += 13) {
            v100 = *v70;
            v101 = v70[1];
            *((_DWORD*)v68 - 6) = *((_DWORD*)v70 + 4);
            *(v68 - 5) = v100;
            *(v68 - 4) = v101;
            v102 = v70[3];
            v103 = v70[4];
            v70[3] = 0;
            v70[4] = 0;
            v104 = *(v68 - 1);
            *(v68 - 2) = v102;
            *(v68 - 1) = v103;
            if (v104 != 0) {
              std___1___shared_weak_count___release_weak(v104),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v64 = COERCE_AS(__typeof__(v64),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            v105 = v70[5];
            v106 = v70[6];
            v70[5] = 0;
            v70[6] = 0;
            v107 = v68[1];
            *v68 = v105;
            v68[1] = v106;
            if (v107 != 0) {
              std___1___shared_weak_count___release_weak(v107),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v64 = COERCE_AS(__typeof__(v64),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
            }
            v108 = v68[2];
            if (v108 != 0) {
              v68[3] = v108;
              if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) != 0) {
                v109 = 128;
              }
              else {
                v109 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v109, v108),
                  v18 = COERCE_AS(__typeof__(v18),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v19 = COERCE_AS(__typeof__(v19),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v64 = COERCE_AS(__typeof__(v64),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v65 = COERCE_AS(__typeof__(v65),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
              v68[3] = 0;
              v68[4] = 0;
              v68[2] = 0;
            }
            v68[2] = v70[7];
            v68[3] = v70[8];
            v68[4] = v70[9];
            v70[8] = 0;
            v70[9] = 0;
            v70[7] = 0;
            v97 = v70[10];
            v98 = v70[11];
            v99 = *((_WORD*)v70 + 48);
            v70 += 13;
            *((_WORD*)v68 + 28) = v99;
            v68[5] = v97;
            v68[6] = v98;
          }
        LABEL_106:
          if (a4 != nullptr) {
            v123 = a4 + 8;
            do {
              v124 = *(v123 - 1);
              if (v124 != 0) {
                *v123 = v124;
                if (*(_QWORD*)(*(_QWORD*)v66 + 200LL) != 0) {
                  v125 = 128;
                }
                else {
                  v125 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v66 + v125, v124),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v126 = *(v123 - 2);
              if (v126 != 0) {
                std___1___shared_weak_count___release_weak(v126),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              v127 = *(v123 - 4);
              if (v127 != 0) {
                std___1___shared_weak_count___release_weak(v127),
                    v18 = COERCE_AS(__typeof__(v18),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v19 = COERCE_AS(__typeof__(v19),
                                    PSEUDO_REGISTER(__n128, "v1", "=w")),
                    v64 = COERCE_AS(__typeof__(v64),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v65 = COERCE_AS(__typeof__(v65),
                                    PSEUDO_REGISTER(__n128, "v1", "=w"));
              }
              --v11;
              v123 += 13;
            } while (v11 != 0);
          }
        }
        else {
          llvm_libcxx_21_libcxx_include___vector_1683540(a1, v16, a3 >> 1, a4,
                                                         a5, a6, a7),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          llvm_libcxx_21_libcxx_include___vector_1683540(&a1[v14], a2, v15, a4,
                                                         a5, v18, v19),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          llvm_libcxx_21_libcxx_include___vector_1684780(a1, &a1[v14], a2, v12,
                                                         v15, a4, a5),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v64 = COERCE_AS(__typeof__(v64),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
      }
    }
  }
}

void llvm_libcxx_21_libcxx_include___vector_1684780(__int64* a1, __int64* a2,
                                                    __int64* a3, __int64 a4,
                                                    __int64 a5, __int64* a6,
                                                    __int64 a7)
{

#pragma clang fp contract(off)
  __int64 v9;
  __int64 i;
  __int64* v11;
  bool v12;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  float v23;
  int v24;
  __int64* v25;
  _BOOL4 v27;
  __int64 v28;
  unsigned __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64* v32;
  int v33;
  float v34;
  __int64* v35;
  _BOOL4 v37;
  __int64* v38;
  __int64* v39;
  __int64* j;
  __int64* v41;
  __int64* v42;
  _BOOL4 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64* v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int16 v95;
  __int64* v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int16 v101;
  __int64* v102;
  __int64* v103;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64* v126;
  __int64 v127;
  __int64 v128;
  __int16 v129;
  __int64 v130;
  __int64 v131;
  int v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64* v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64* v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64* v162;
  __int64 v163;
  __int64* v164;
  __int64* v165;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return;
      }
      v9 = -a4;
      for (i = 0;; i += 13) {
        v11 = &a1[i];
        v12 = HIDWORD(a1[i + 11]) != 0 && *((_DWORD*)a2 + 23) == 0;
        if (v12 || *((float*)a2 + 3) > *((float*)&a1[i + 1] + 1)) {
          break;
        }
        if (__CFADD__(v9++, 1)) {
          return;
        }
      }
      v15 = -v9;
      v164 = a6;
      if (-v9 >= a5) {
        if (v9 == -1) {
          GameRoutine_1683ce0(&a1[i], a2);
          return;
        }
        v28 = v15 / 2;
        v19 = &a1[13 * (v15 / 2) + i];
        if (a3 == a2) {
          v17 = a3;
          v38 = a3;
        }
        else {
          v17 = a2;
          v29 = 0x4EC4EC4EC4EC4EC5LL * (a3 - a2);
          v30 = HIDWORD(a1[13 * v28 + 11 + i]);
          do {
            v31 = v29 >> 1;
            v32 = &v17[13 * (v29 >> 1)];
            v33 = *((_DWORD*)v32 + 23);
            v34 = *((float*)v32 + 3);
            v35 = v32 + 13;
            v29 += ~(v29 >> 1);
            v37 = v33 == 0 && v30 != 0;
            if (v34 > *((float*)v19 + 3)) {
              v37 = true;
            }
            if (v37) {
              v17 = v35;
            }
            else {
              v29 = v31;
            }
          } while (v29 != 0);
          v38 = a2;
        }
        v16 = 0x4EC4EC4EC4EC4EC5LL * (v17 - v38);
      }
      else {
        v16 = a5 / 2;
        v17 = &a2[13 * (a5 / 2)];
        if (v11 == a2) {
          v19 = a2;
          v18 = a2;
        }
        else {
          v18 = &a1[i];
          v19 = &a1[i];
          v20 = 0x4EC4EC4EC4EC4EC5LL * (((char*)a2 - (char*)a1 - i * 8) >> 3);
          do {
            v21 = v20 >> 1;
            v22 = &v19[13 * (v20 >> 1)];
            v23 = *((float*)v22 + 3);
            v24 = *((_DWORD*)v22 + 23);
            v25 = v22 + 13;
            v20 += ~(v20 >> 1);
            v27 = *((_DWORD*)v17 + 23) == 0 && v24 != 0;
            if (*((float*)v17 + 3) > v23) {
              v27 = true;
            }
            if (v27) {
              v20 = v21;
            }
            else {
              v19 = v25;
            }
          } while (v20 != 0);
        }
        v28 = 0x4EC4EC4EC4EC4EC5LL * (v19 - v18);
      }
      v39 = v17;
      if (v19 != a2) {
        v39 = v19;
        if (a2 != v17) {
          v160 = v16;
          v161 = a7;
          v162 = a3;
          v163 = a5;
          GameRoutine_1683ce0(v19, a2);
          v39 = v19 + 13;
          for (j = a2 + 13; j != v17; j += 13) {
            if (v39 == a2) {
              a2 = j;
            }
            GameRoutine_1683ce0(v39, j);
            v39 += 13;
          }
          if (v39 != a2) {
            v41 = v39;
            v42 = a2;
            while (1) {
              GameRoutine_1683ce0(v41, v42);
              v42 += 13;
              v43 = v41 + 13 == a2;
              if (v42 == v17) {
                if (v41 + 13 == a2) {
                  break;
                }
                v42 = a2 + 13;
                v41 += 26;
                while (1) {
                  GameRoutine_1683ce0(v41 - 13, a2);
                  v43 = v41 == a2;
                  if (v42 != v17) {
                    break;
                  }
                  v12 = v41 == a2;
                  v41 += 13;
                  if (v12) {
                    goto LABEL_71;
                  }
                }
              }
              else {
                v41 += 13;
              }
              if (v43) {
                a2 = v42;
              }
            }
          }
        LABEL_71:
          a5 = v163;
          a7 = v161;
          a3 = v162;
          v16 = v160;
        }
      }
      v44 = a5 - v16;
      a4 = -(v28 + v9);
      if (v28 + v16 >= a5 - (v28 + v16) - v9) {
        v47 = -(v28 + v9);
        v46 = a7;
        v48 = v16;
        llvm_libcxx_21_libcxx_include___vector_1684780(v39, v17, a3, v47,
                                                       a5 - v16, v164, a7);
        v17 = v19;
        a6 = v164;
        v44 = v48;
        a4 = v28;
        a3 = v39;
      }
      else {
        v45 = a3;
        v46 = a7;
        llvm_libcxx_21_libcxx_include___vector_1684780(v11, v19, v39, v28, v16,
                                                       v164, a7);
        a3 = v45;
        a6 = v164;
        v11 = v39;
      }
      a5 = v44;
      a1 = v11;
      a2 = v17;
      a7 = v46;
      if (v44 == 0) {
        return;
      }
    }
    if (a4 <= a5) {
      if (a1 == a2) {
        return;
      }
      v50 = 0;
      v165 = a6;
      v89 = a6;
      v90 = a1;
      do {
        v91 = *v90;
        v92 = v90[1];
        ++v50;
        *((_DWORD*)v89 + 4) = *((_DWORD*)v90 + 4);
        *v89 = v91;
        v89[1] = v92;
        v89[3] = v90[3];
        v89[4] = v90[4];
        v90[3] = 0;
        v90[4] = 0;
        v89[5] = v90[5];
        v89[6] = v90[6];
        v90[5] = 0;
        v90[6] = 0;
        v89[8] = 0;
        v89[9] = 0;
        v89[7] = 0;
        v89[7] = v90[7];
        v89[8] = v90[8];
        v89[9] = v90[9];
        v90[8] = 0;
        v90[9] = 0;
        v90[7] = 0;
        v93 = v90[10];
        v94 = v90[11];
        v95 = *((_WORD*)v90 + 48);
        v90 += 13;
        *((_WORD*)v89 + 48) = v95;
        v89[10] = v93;
        v89[11] = v94;
        v89 += 13;
      } while (v90 != a2);
      v96 = a1 + 5;
      v97 = fw_memory_g_heap_manager_ptr;
      v98 = a6;
      while (a2 != a3) {
        v102 = v96 - 5;
        v103 = a3;
        if ((*((_DWORD*)v98 + 23) == 0 || *((_DWORD*)a2 + 23) != 0) &&
            *((float*)a2 + 3) <= *((float*)v98 + 3)) {
          v116 = *v98;
          v117 = v98[1];
          *((_DWORD*)v96 - 6) = *((_DWORD*)v98 + 4);
          *v102 = v116;
          *(v96 - 4) = v117;
          v118 = v98[3];
          v119 = v98[4];
          v98[3] = 0;
          v98[4] = 0;
          v120 = *(v96 - 1);
          *(v96 - 2) = v118;
          *(v96 - 1) = v119;
          if (v120 != 0) {
            std___1___shared_weak_count___release_weak(v120);
          }
          v121 = v98[5];
          v122 = v98[6];
          v98[5] = 0;
          v98[6] = 0;
          v123 = v96[1];
          *v96 = v121;
          v96[1] = v122;
          if (v123 != 0) {
            std___1___shared_weak_count___release_weak(v123);
          }
          v124 = v96[2];
          if (v124 != 0) {
            v96[3] = v124;
            v125 = 128;
            if (*(_QWORD*)(*(_QWORD*)v97 + 200LL) == 0) {
              v125 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v97 + v125, v124);
            v96[3] = 0;
            v96[4] = 0;
            v96[2] = 0;
          }
          v96[2] = v98[7];
          v96[3] = v98[8];
          v96[4] = v98[9];
          v98[8] = 0;
          v98[9] = 0;
          v98[7] = 0;
          v99 = v98[10];
          v100 = v98[11];
          v101 = *((_WORD*)v98 + 48);
          v98 += 13;
        }
        else {
          v106 = *a2;
          v107 = a2[1];
          *((_DWORD*)v96 - 6) = *((_DWORD*)a2 + 4);
          *v102 = v106;
          *(v96 - 4) = v107;
          v108 = a2[3];
          v109 = a2[4];
          a2[3] = 0;
          a2[4] = 0;
          v110 = *(v96 - 1);
          *(v96 - 2) = v108;
          *(v96 - 1) = v109;
          if (v110 != 0) {
            std___1___shared_weak_count___release_weak(v110);
          }
          v111 = a2[5];
          v112 = a2[6];
          a2[5] = 0;
          a2[6] = 0;
          v113 = v96[1];
          *v96 = v111;
          v96[1] = v112;
          if (v113 != 0) {
            std___1___shared_weak_count___release_weak(v113);
          }
          v114 = v96[2];
          if (v114 != 0) {
            v96[3] = v114;
            v115 = 128;
            if (*(_QWORD*)(*(_QWORD*)v97 + 200LL) == 0) {
              v115 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v97 + v115, v114);
            v96[3] = 0;
            v96[4] = 0;
            v96[2] = 0;
          }
          v96[2] = a2[7];
          v96[3] = a2[8];
          v96[4] = a2[9];
          a2[8] = 0;
          a2[9] = 0;
          a2[7] = 0;
          v99 = a2[10];
          v100 = a2[11];
          v101 = *((_WORD*)a2 + 48);
          a2 += 13;
        }
        *((_WORD*)v96 + 28) = v101;
        v96[5] = v99;
        v96[6] = v100;
        v96 += 13;
        a3 = v103;
        if (v89 == v98) {
          goto LABEL_167;
        }
      }
      do {
        v144 = *v98;
        v145 = v98[1];
        *((_DWORD*)v96 - 6) = *((_DWORD*)v98 + 4);
        *(v96 - 5) = v144;
        *(v96 - 4) = v145;
        v146 = v98[3];
        v147 = v98[4];
        v98[3] = 0;
        v98[4] = 0;
        v148 = *(v96 - 1);
        *(v96 - 2) = v146;
        *(v96 - 1) = v147;
        if (v148 != 0) {
          std___1___shared_weak_count___release_weak(v148);
        }
        v149 = v98[5];
        v150 = v98[6];
        v98[5] = 0;
        v98[6] = 0;
        v151 = v96[1];
        *v96 = v149;
        v96[1] = v150;
        if (v151 != 0) {
          std___1___shared_weak_count___release_weak(v151);
        }
        v152 = v96[2];
        if (v152 != 0) {
          v96[3] = v152;
          if (*(_QWORD*)(*(_QWORD*)v97 + 200LL) != 0) {
            v153 = 128;
          }
          else {
            v153 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v97 + v153, v152);
          v96[3] = 0;
          v96[4] = 0;
          v96[2] = 0;
        }
        v96[2] = v98[7];
        v96[3] = v98[8];
        v96[4] = v98[9];
        v98[8] = 0;
        v98[9] = 0;
        v98[7] = 0;
        v142 = v98[10];
        v143 = v98[11];
        *((_WORD*)v96 + 28) = *((_WORD*)v98 + 48);
        v96[5] = v142;
        v96[6] = v143;
        v96 += 13;
        v12 = v89 - 13 == v98;
        v98 += 13;
      } while (!v12);
    LABEL_167:
      v141 = v165;
    }
    else {
      if (a2 == a3) {
        return;
      }
      v49 = 0;
      v50 = 0;
      do {
        v51 = &a2[v49];
        v52 = &a6[v49];
        ++v50;
        v49 += 13;
        v53 = *v51;
        v54 = v51[1];
        *((_DWORD*)v52 + 4) = *((_DWORD*)v51 + 4);
        *v52 = v53;
        v52[1] = v54;
        v52[3] = v51[3];
        v52[4] = v51[4];
        v51[3] = 0;
        v51[4] = 0;
        v52[5] = v51[5];
        v52[6] = v51[6];
        v51[5] = 0;
        v51[6] = 0;
        v52[8] = 0;
        v52[9] = 0;
        v52[7] = 0;
        v52[7] = v51[7];
        v52[8] = v51[8];
        v52[9] = v51[9];
        v51[8] = 0;
        v51[9] = 0;
        v51[7] = 0;
        v55 = v51[10];
        v56 = v51[11];
        *((_WORD*)v52 + 48) = *((_WORD*)v51 + 48);
        v52[10] = v55;
        v52[11] = v56;
      } while (v51 + 13 != a3);
      v57 = a3 - 6;
      v58 = &a6[v49];
      v59 = a6;
      v60 = a1;
      v61 = fw_memory_g_heap_manager_ptr;
      while (a2 != a1) {
        v66 = v57 - 7;
        if ((*((_DWORD*)a2 - 3) == 0 || *((_DWORD*)v58 - 3) != 0) &&
            *((float*)v58 - 23) <= *((float*)a2 - 23)) {
          v79 = *(v58 - 13);
          v80 = *(v58 - 12);
          *((_DWORD*)v57 - 10) = *((_DWORD*)v58 - 22);
          *v66 = v79;
          *(v57 - 6) = v80;
          v81 = *(v58 - 10);
          v82 = *(v58 - 9);
          *(v58 - 10) = 0;
          *(v58 - 9) = 0;
          v83 = *(v57 - 3);
          *(v57 - 4) = v81;
          *(v57 - 3) = v82;
          if (v83 != 0) {
            std___1___shared_weak_count___release_weak(v83);
            a1 = v60;
          }
          v84 = *(v58 - 8);
          v85 = *(v58 - 7);
          *(v58 - 8) = 0;
          *(v58 - 7) = 0;
          v86 = *(v57 - 1);
          *(v57 - 2) = v84;
          *(v57 - 1) = v85;
          if (v86 != 0) {
            std___1___shared_weak_count___release_weak(v86);
            a1 = v60;
          }
          v87 = *v57;
          if (*v57 != 0) {
            v57[1] = v87;
            if (*(_QWORD*)(*(_QWORD*)v61 + 200LL) != 0) {
              v88 = 128;
            }
            else {
              v88 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v61 + v88, v87);
            a1 = v60;
            v57[1] = 0;
            v57[2] = 0;
            *v57 = 0;
          }
          v62 = v58 - 6;
          *v57 = *(v58 - 6);
          v63 = v58;
          v58 -= 13;
        }
        else {
          v69 = *(a2 - 13);
          v70 = *(a2 - 12);
          *((_DWORD*)v57 - 10) = *((_DWORD*)a2 - 22);
          *v66 = v69;
          *(v57 - 6) = v70;
          v71 = *(a2 - 10);
          v72 = *(a2 - 9);
          *(a2 - 10) = 0;
          *(a2 - 9) = 0;
          v73 = *(v57 - 3);
          *(v57 - 4) = v71;
          *(v57 - 3) = v72;
          if (v73 != 0) {
            std___1___shared_weak_count___release_weak(v73);
            a1 = v60;
          }
          v74 = *(a2 - 8);
          v75 = *(a2 - 7);
          *(a2 - 8) = 0;
          *(a2 - 7) = 0;
          v76 = *(v57 - 1);
          *(v57 - 2) = v74;
          *(v57 - 1) = v75;
          if (v76 != 0) {
            std___1___shared_weak_count___release_weak(v76);
            a1 = v60;
          }
          v77 = *v57;
          if (*v57 != 0) {
            v57[1] = v77;
            if (*(_QWORD*)(*(_QWORD*)v61 + 200LL) != 0) {
              v78 = 128;
            }
            else {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v61 + v78, v77);
            a1 = v60;
            v57[1] = 0;
            v57[2] = 0;
            *v57 = 0;
          }
          v62 = a2 - 6;
          *v57 = *(a2 - 6);
          v63 = a2;
          a2 -= 13;
        }
        v57[1] = *(v63 - 5);
        v57[2] = *(v63 - 4);
        v62[1] = 0;
        v62[2] = 0;
        *v62 = 0;
        v64 = *(v63 - 3);
        v65 = *(v63 - 2);
        *((_WORD*)v57 + 20) = *((_WORD*)v63 - 4);
        v57[3] = v64;
        v57[4] = v65;
        v57 -= 13;
        if (v58 == v59) {
          goto LABEL_155;
        }
      }
      if (v59 != v58) {
        v126 = v58;
        do {
          v130 = *(v126 - 13);
          v131 = *(v126 - 12);
          v126 -= 13;
          v132 = *((_DWORD*)v126 + 4);
          *(v57 - 7) = v130;
          *(v57 - 6) = v131;
          *((_DWORD*)v57 - 10) = v132;
          v133 = v126[3];
          v134 = v126[4];
          v126[3] = 0;
          v126[4] = 0;
          v135 = *(v57 - 3);
          *(v57 - 4) = v133;
          *(v57 - 3) = v134;
          if (v135 != 0) {
            std___1___shared_weak_count___release_weak(v135);
          }
          v136 = *(v58 - 8);
          v137 = *(v58 - 7);
          *(v58 - 8) = 0;
          *(v58 - 7) = 0;
          v138 = *(v57 - 1);
          *(v57 - 2) = v136;
          *(v57 - 1) = v137;
          if (v138 != 0) {
            std___1___shared_weak_count___release_weak(v138);
          }
          v139 = *v57;
          if (*v57 != 0) {
            v57[1] = v139;
            if (*(_QWORD*)(*(_QWORD*)v61 + 200LL) != 0) {
              v140 = 128;
            }
            else {
              v140 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v61 + v140, v139);
            v57[1] = 0;
            v57[2] = 0;
            *v57 = 0;
          }
          *v57 = *(v58 - 6);
          v57[1] = *(v58 - 5);
          v57[2] = *(v58 - 4);
          *(v58 - 5) = 0;
          *(v58 - 4) = 0;
          *(v58 - 6) = 0;
          v127 = *(v58 - 3);
          v128 = *(v58 - 2);
          v129 = *((_WORD*)v58 - 4);
          v58 = v126;
          *((_WORD*)v57 + 20) = v129;
          v57[3] = v127;
          v57[4] = v128;
          v57 -= 13;
        } while (v126 != v59);
      }
    LABEL_155:
      v141 = v59;
    }
    if (v141 != nullptr) {
      v154 = v141 + 8;
      v155 = fw_memory_g_heap_manager_ptr;
      do {
        v156 = *(v154 - 1);
        if (v156 != 0) {
          *v154 = v156;
          if (*(_QWORD*)(*(_QWORD*)v155 + 200LL) != 0) {
            v157 = 128;
          }
          else {
            v157 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v155 + v157, v156);
        }
        v158 = *(v154 - 2);
        if (v158 != 0) {
          std___1___shared_weak_count___release_weak(v158);
        }
        v159 = *(v154 - 4);
        if (v159 != 0) {
          std___1___shared_weak_count___release_weak(v159);
        }
        --v50;
        v154 += 13;
      } while (v50 != 0);
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___vector_1686420(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;

  v2 = a1[6];
  a1[2] = GameData_2131b00[0] + 2;
  if (v2 == 0) {
    goto LABEL_14;
  }
  v3 = a1[7];
  if (v2 == v3) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v2);
    goto LABEL_14;
  }
  do {
    v5 = *(_QWORD**)(v3 - 16);
    v6 = v3 - 48;
    if ((_QWORD*)(v3 - 48) == v5) {
      v4 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
      goto LABEL_6;
    }
    if (v5 != nullptr) {
      v4 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v3 = v6;
  } while (v6 != v2);
  v7 = a1[6];
  a1[7] = v2;
  v2 = v7;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v10 = a1[1];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 llvm_libcxx_21_libcxx_include___vector_17db7e0(__int64 a1, __int64 a2,
                                                       unsigned __int64 a3)
{
  __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v11;

  v3 = a2;
  v5 = a3;
  v6 = memchr(a2, 58, a3);
  if (v6 != 0 && v6 - v3 != -1) {
    v7 = v6 - v3 + 2;
    v8 = v5 >= v7;
    v5 -= v7;
    if (!v8) {
      String_60a250("string_view::substr");
    }
    v3 = v6 + 2;
  }
  if (v5 < 0xA) {
    if (v5 < 4) {
      if (v5 != 3) {
      LABEL_31:
        v11 = 16;
        return a1 + v11;
      }
    LABEL_27:
      if (*(_WORD*)v3 == 18773 && *(_BYTE*)(v3 + 2) == 47) {
        v11 = 48;
        return a1 + v11;
      }
      goto LABEL_31;
    }
    if (*(_DWORD*)v3 != 795894093) {
      if (v5 < 7) {
        goto LABEL_27;
      }
      goto LABEL_23;
    }
  LABEL_32:
    v11 = 32;
    return a1 + v11;
  }
  if (*(_QWORD*)v3 != 0x6574636172616843LL || *(_WORD*)(v3 + 8) != 12146) {
    if (*(_DWORD*)v3 == 795894093) {
      goto LABEL_32;
    }
    if (*(_QWORD*)v3 != 0x6F6974616D696E41LL || *(_WORD*)(v3 + 8) != 12142) {
    LABEL_23:
      if (*(_DWORD*)v3 == 1701209669 && *(_DWORD*)(v3 + 3) == 796156773) {
        v11 = 40;
        return a1 + v11;
      }
      goto LABEL_27;
    }
  }
  v11 = 24;
  return a1 + v11;
}

__int64* llvm_libcxx_21_libcxx_include___vector_18d94e0(
    __int64* result, __int64* a2, __int64* a3, __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
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
  v8 = *(_DWORD*)(*a2 + 4);
  v9 = *(_DWORD*)(*a3 + 4);
  if (v8 >= (signed __int32)*(_DWORD*)(*result + 4)) {
    if (v9 >= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 4) <
          (signed __int32)*(_DWORD*)(*result + 4)) {
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
    if ((signed __int32)*(_DWORD*)(*a3 + 4) <
        (signed __int32)*(_DWORD*)(v6 + 4)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if ((signed __int32)*(_DWORD*)(*a4 + 4) <
      (signed __int32)*(_DWORD*)(v5 + 4)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if ((signed __int32)*(_DWORD*)(*a3 + 4) <
        (signed __int32)*(_DWORD*)(*a2 + 4)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 4) <
          (signed __int32)*(_DWORD*)(*result + 4)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if ((signed __int32)*(_DWORD*)(*a5 + 4) <
      (signed __int32)*(_DWORD*)(*a4 + 4)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if ((signed __int32)*(_DWORD*)(*a4 + 4) <
        (signed __int32)*(_DWORD*)(*a3 + 4)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if ((signed __int32)*(_DWORD*)(*a3 + 4) <
          (signed __int32)*(_DWORD*)(*a2 + 4)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if ((signed __int32)*(_DWORD*)(*a2 + 4) <
            (signed __int32)*(_DWORD*)(*result + 4)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

bool llvm_libcxx_21_libcxx_include___vector_18d9660(__int64* a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 i;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v49;
  int v50;

  v3 = ((__int64)a2 - (__int64)a1) >> 3;
  if (v3 > 2) {
    if (v3 == 3) {
      v6 = *a1;
      v7 = a1[1];
      v8 = *(a2 - 1);
      v9 = *(_DWORD*)(v7 + 4);
      v10 = *(_DWORD*)(v8 + 4);
      if (v9 < (signed __int32)*(_DWORD*)(*a1 + 4)) {
        if (v10 >= v9) {
          *a1 = v7;
          a1[1] = v6;
          v23 = *(a2 - 1);
          if ((signed __int32)*(_DWORD*)(v23 + 4) <
              (signed __int32)*(_DWORD*)(v6 + 4)) {
            a1[1] = v23;
            *(a2 - 1) = v6;
          }
        }
        else {
          *a1 = v8;
          *(a2 - 1) = v6;
        }
        return true;
      }
      if (v10 >= v9) {
        return true;
      }
      a1[1] = v8;
      *(a2 - 1) = v7;
      v22 = a1[1];
    LABEL_82:
      v47 = *a1;
      if ((signed __int32)*(_DWORD*)(v22 + 4) <
          (signed __int32)*(_DWORD*)(*a1 + 4)) {
        *a1 = v22;
        a1[1] = v47;
      }
      return true;
    }
    if (v3 != 4) {
      if (v3 != 5) {
        goto LABEL_13;
      }
      llvm_libcxx_21_libcxx_include___vector_18d94e0(a1, a1 + 1, a1 + 2, a1 + 3,
                                                     a2 - 1);
      return true;
    }
    v18 = *a1;
    v17 = a1[1];
    v19 = a1[2];
    v20 = *(_DWORD*)(v17 + 4);
    v21 = *(_DWORD*)(v19 + 4);
    if (v20 >= (signed __int32)*(_DWORD*)(*a1 + 4)) {
      if (v21 < v20) {
        a1[1] = v19;
        a1[2] = v17;
        if ((signed __int32)*(_DWORD*)(v19 + 4) <
            (signed __int32)*(_DWORD*)(v18 + 4)) {
          *a1 = v19;
          a1[1] = v18;
        }
        goto LABEL_79;
      }
    }
    else {
      if (v21 < v20) {
        *a1 = v19;
      LABEL_77:
        a1[2] = v18;
        v17 = v18;
        goto LABEL_79;
      }
      *a1 = v17;
      a1[1] = v18;
      if ((signed __int32)*(_DWORD*)(v19 + 4) <
          (signed __int32)*(_DWORD*)(v18 + 4)) {
        a1[1] = v19;
        goto LABEL_77;
      }
    }
    v17 = v19;
  LABEL_79:
    v45 = *(a2 - 1);
    if ((signed __int32)*(_DWORD*)(v45 + 4) >=
        (signed __int32)*(_DWORD*)(v17 + 4)) {
      return true;
    }
    a1[2] = v45;
    *(a2 - 1) = v17;
    v46 = a1[1];
    v22 = a1[2];
    if ((signed __int32)*(_DWORD*)(v22 + 4) >=
        (signed __int32)*(_DWORD*)(v46 + 4)) {
      return true;
    }
    a1[1] = v22;
    a1[2] = v46;
    goto LABEL_82;
  }
  if ((unsigned __int64)v3 < 2) {
    return true;
  }
  if (v3 == 2) {
    v4 = *(a2 - 1);
    v5 = *a1;
    if ((signed __int32)*(_DWORD*)(v4 + 4) <
        (signed __int32)*(_DWORD*)(*a1 + 4)) {
      *a1 = v4;
      *(a2 - 1) = v5;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v12 = a1[2];
  v13 = *a1;
  v14 = a1[1];
  v15 = *(_DWORD*)(v14 + 4);
  v16 = *(_DWORD*)(v12 + 4);
  if (v15 >= (signed __int32)*(_DWORD*)(*a1 + 4)) {
    if (v16 < v15) {
      a1[1] = v12;
      a1[2] = v14;
      if ((signed __int32)*(_DWORD*)(v12 + 4) <
          (signed __int32)*(_DWORD*)(v13 + 4)) {
        *a1 = v12;
        a1[1] = v13;
      }
    }
  }
  else {
    if (v16 >= v15) {
      *a1 = v14;
      a1[1] = v13;
      if ((signed __int32)*(_DWORD*)(v12 + 4) >=
          (signed __int32)*(_DWORD*)(v13 + 4)) {
        goto LABEL_32;
      }
      a1[1] = v12;
    }
    else {
      *a1 = v12;
    }
    a1[2] = v13;
  }
LABEL_32:
  v24 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v25 = 0;
  v26 = 0;
  v27 = fw_memory_g_heap_manager_ptr;
  v49 = a2;
  while (1) {
    v29 = *v24;
    v30 = *v11;
    if ((signed __int32)*(_DWORD*)(*v24 + 4) <
        (signed __int32)*(_DWORD*)(v30 + 4)) {
      v50 = v26;
      v31 = 0;
      *v24 = 0;
      for (i = v25;; i -= 8) {
        v33 = (char*)a1 + i;
        *((_QWORD*)v33 + 2) = 0;
        *((_QWORD*)v33 + 3) = v30;
        if (v31 != 0) {
          if ((*(_BYTE*)(v31 + 16) & 1) != 0) {
            v34 = *(_QWORD*)(v31 + 32);
            if (v34 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
                v35 = 128;
              }
              else {
                v35 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v35, v34);
            }
          }
          v36 = *(_QWORD*)(v31 + 8);
          *(_QWORD*)(v31 + 8) = 0;
          if (v36 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
              v37 = 128;
            }
            else {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v37, v36);
          }
          if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
            v38 = 128;
          }
          else {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v38, v31);
        }
        if (i == -16) {
          v39 = a1;
          goto LABEL_63;
        }
        v30 = *(__int64*)((char*)a1 + i + 8);
        if ((signed __int32)*(_DWORD*)(v29 + 4) >=
            (signed __int32)*(_DWORD*)(v30 + 4)) {
          break;
        }
        v31 = *((_QWORD*)v33 + 2);
      }
      v39 = (__int64*)((char*)a1 + i + 16);
    LABEL_63:
      v40 = *v39;
      *v39 = v29;
      if (v40 != 0) {
        if ((*(_BYTE*)(v40 + 16) & 1) != 0) {
          v41 = *(_QWORD*)(v40 + 32);
          if (v41 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
              v42 = 128;
            }
            else {
              v42 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v42, v41);
          }
        }
        v43 = *(_QWORD*)(v40 + 8);
        *(_QWORD*)(v40 + 8) = 0;
        if (v43 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
            v44 = 128;
          }
          else {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v44, v43);
        }
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v28, v40);
      }
      a2 = v49;
      v26 = v50 + 1;
      if (v50 == 7) {
        return v24 + 1 == v49;
      }
    }
    v11 = v24++;
    v25 += 8;
    if (v24 == a2) {
      return true;
    }
  }
}

__int64 llvm_libcxx_21_libcxx_include___vector_190cb20(_QWORD* a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  signed int* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  char v21;
  signed int v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  signed int v33;
  signed int* v34;
  signed int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  signed __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  char v57;
  __int16 v58;
  char v59;
  char v60;
  __int64 v61;

  GameRoutine_19131f0(
      *a2, (float)(*(float*)(a1[9] + 104LL) * 0x1.0aef000000000p+4f) *
               0x1.0624de0000000p-10f);
  v4 = a2[1];
  if (v4 != 0 && *(_QWORD*)(v4 + 8) == 0) {
    v36 = *(_QWORD*)(*a2 + 8);
    if (v36 != 0) {
      SpineModel_19119d0(v36);
    }
    v37 = a1[7];
    if (v37 >= a1[8]) {
      a1[7] = GameHr_190c920(a1 + 6, a2);
    }
    else {
      *(_QWORD*)v37 = *a2;
      v38 = a2[1];
      *(_QWORD*)(v37 + 8) = v38;
      if (v38 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(_DWORD*)(v37 + 16) = 2;
      a1[7] = v37 + 24;
    }
    return 1;
  }
  v5 = *a2;
  if (*(_BYTE*)(*a2 + 1041) != 1) {
    return 0;
  }
  v6 = (__int64*)a1[3];
  v7 = (__int64*)a1[4];
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6 == v7) {
    GameRoutine_1a0a7b0(0, 0, (__int64)&v57);
    v33 = 0;
    goto LABEL_65;
  }
  v9 = 0;
  v10 = nullptr;
  v56 = 0;
  do {
    v11 = *v6;
    if (*(_BYTE*)(*v6 + 1041) != 1) {
      goto LABEL_6;
    }
    v12 = *(unsigned __int8*)(v5 + 40);
    v13 = (v12 & 1) != 0 ? *(_QWORD*)(v5 + 48) : v12 >> 1;
    v14 = *(unsigned __int8*)(v11 + 40);
    v15 = (v14 & 1) != 0 ? *(_QWORD*)(v11 + 48) : v14 >> 1;
    if (v15 < v13) {
      goto LABEL_6;
    }
    v16 = (v12 & 1) != 0 ? *(_QWORD*)(v5 + 56) : v5 + 41;
    v17 = v11 + 41;
    v18 = *(_QWORD*)(v11 + 56);
    v19 = (v14 & 1) != 0 ? v18 : v17;
    if (memcmp(v19, v16, v13) != 0) {
      goto LABEL_6;
    }
    if (v15 <= 2) {
      fs_60a230();
    }
    v57 = 6;
    v20 = *(_WORD*)(v19 + v15 - 3);
    v21 = *(_BYTE*)(v19 + v15 - 1);
    v60 = 0;
    v59 = v21;
    v58 = v20;
    v22 = std___1_stoi((__int64)&v57, 0, 10);
    if ((unsigned __int64)v10 < v56) {
      *v10++ = v22;
      if ((v57 & 1) == 0) {
        goto LABEL_6;
      }
    LABEL_42:
      if (v61 != 0) {
        v31 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v31, v61);
      }
      goto LABEL_6;
    }
    v23 = (unsigned __int64)v10 - v9;
    v24 = ((__int64)v10 - v9) >> 2;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 62 != 0) {
      GameRoutine_6e5a20();
    }
    if ((__int64)(v56 - v9) >> 1 > v25) {
      v25 = (__int64)(v56 - v9) >> 1;
    }
    if (v56 - v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v26 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v25;
    }
    if (v26 != 0) {
      if (v26 >> 62 != 0) {
        goto LABEL_86;
      }
      v27 = v22;
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v26, 16, 0);
      v22 = v27;
    }
    else {
      v28 = 0;
    }
    v29 = v28 + v23 - 4 * v24;
    v56 = v28 + 4 * v26;
    *(_DWORD*)(v28 + v23) = v22;
    v10 = (signed int*)(v28 + v23 + 4);
    memcpy(v29, v9, v23);
    if (v9 == 0) {
      v9 = v29;
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      if ((v57 & 1) == 0) {
        goto LABEL_6;
      }
      goto LABEL_42;
    }
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v30,
                                  v9);
    v9 = v29;
    if ((v57 & 1) != 0) {
      goto LABEL_42;
    }
  LABEL_6:
    v6 += 2;
  } while (v6 != v7);
  GameRoutine_1a0a7b0(v9, (__int64)v10, (__int64)&v57);
  if ((signed int*)v9 == v10) {
    v33 = 0;
  }
  else {
    v33 = 0;
    v34 = (signed int*)v9;
    do {
      v35 = *v34++;
      if (v35 > v33) {
        break;
      }
      ++v33;
    } while (v34 != v10);
  }
  if (v9 != 0) {
    v39 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v39, v9);
  }
LABEL_65:
  spine_1917700(v5 + 40, (unsigned __int8*)(v5 + 40), v33);
  v40 = (_QWORD*)a1[4];
  v41 = a1[5];
  if ((unsigned __int64)v40 >= v41) {
    v44 = a1[3];
    v45 = (signed __int64)v40 - v44;
    v46 = ((__int64)v40 - v44) >> 4;
    v47 = v46 + 1;
    if ((unsigned __int64)(v46 + 1) >> 60 != 0) {
      GameRoutine_190c900();
    }
    v48 = v41 - v44;
    if (v48 >> 3 > v47) {
      v47 = v48 >> 3;
    }
    if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF0LL) {
      v49 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v49 = v47;
    }
    if (v49 >> 60 != 0) {
    LABEL_86:
      GameRoutine_60a210();
    }
    v50 = fw_memory_HeapManager_Allocate(*v8, 16 * v49, 16, 0);
    v51 = a2[1];
    v52 = (_QWORD*)(v50 + v45);
    v53 = v50 + 16 * v49;
    *v52 = *a2;
    v52[1] = v51;
    if (v51 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                memory_order_relaxed);
      v44 = a1[3];
      v45 = a1[4] - v44;
      v46 = v45 >> 4;
    }
    v54 = (__int64)&v52[-2 * v46];
    v43 = v52 + 2;
    memcpy(v54, v44, v45);
    a1[3] = v54;
    a1[4] = v43;
    a1[5] = v53;
    if (v44 != 0) {
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v44);
    }
  }
  else {
    *v40 = *a2;
    v42 = a2[1];
    v40[1] = v42;
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                memory_order_relaxed);
    }
    v43 = v40 + 2;
  }
  a1[4] = v43;
  return 1;
}

#pragma GCC visibility pop
