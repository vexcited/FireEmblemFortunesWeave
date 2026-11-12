#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_a90790(__int64);
_QWORD* GameRoutine_a93d00(__int64, __int64, unsigned __int64, float);
_QWORD* GameRoutine_ad0e40(float*, __int64, unsigned __int64);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
_QWORD* gfxa_TaskCharaDepth_Impl_Impl(__int64, __int64);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__attribute__((swiftcall)) void gfxa_aa1540_alt1(PSEUDO_X8, __int64*, __int64,
                                                 unsigned __int64, __int64,
                                                 unsigned __int64,
                                                 int*) __asm__("gfxa_aa1540");
__int64* GameRoutine_b447c0(__int64* result, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_18e1120(void);
__int64 GameRoutine_19a5c60();
__int64 GameRoutine_5de60(_QWORD*, __int64);
__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(__int64);
__int64 GameRoutine_647d00(_QWORD*, int, __int64, unsigned __int64, __int64,
                           int, __int64, char);
__int64 GameRoutine_652ba0(_QWORD, float, float);
__int64 GameRoutine_a8e660(__int64, unsigned __int64**, __int64,
                           unsigned __int64, __int64, unsigned __int64,
                           long double);
__int64 GameRoutine_a8e9a0(__int64, unsigned __int64**, __int64,
                           unsigned __int64, __int64, unsigned __int64,
                           long double);
__int64 GameRoutine_a96350();
__int64 GameRoutine_aa21d0(__int64, int*);
__int64 GameRoutine_ab4070(_QWORD);
__int64 GameRoutine_ad07c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(__int64*);
__int64 GameRoutine_ad6000(__int64, unsigned __int64);
__int64 GameRoutine_b3f6c0(_QWORD, _QWORD);
__int64 GameRoutine_b3f800(_QWORD, _QWORD);
__int64 GameRoutine_b44a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b45a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b469e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bda630(__int64 result, __int64, unsigned __int64);
__int64 GameRoutine_be2400(float*, unsigned int*, int*);
__int64 GameRoutine_bfaa20(__int64, __int64);
__int64 GameRoutine_bfae60(_QWORD*);
__int64 Probe2UpdateTask_b47f40(_QWORD);
__int64 ResourceBuilder_b4f5e0(__int64, __int64);
__int64 ResourceBuilder_b4f9e0(_QWORD*);
__int64 ResourceBuilder_b51360(_QWORD*);
__int64 ResourceBuilder_b540f0(__int64 result);
__int64 ResourceBuilder_b702d0(_QWORD*);
__int64 ResourceBuilder_b70b00(_QWORD*);
__int64 Settings_aa1690(__int64, __int64, unsigned __int64);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 gfx_flow_SetSyncCallbacks(__int64, __int64);
__int64 gfxa_TaskCharaDiffusion_Impl_Impl(_QWORD*, __int64);
__int64 gfxa_TaskCharaMask_Impl_Impl(__int64**, __int64*);
__int64 gfxa_TaskCharaSceneBuffers_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskCharaSilhouette_Impl_Impl(__int64, __int64);
__int64 gfxa_TaskPostCharaOutline_Impl_Impl(__int64*, __int64);
__int64 gfxa_TaskPostCharaRimlight_Impl_Impl(__int64, __int64);
__int64 gfxa_a96c40();
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
bool Resource_5c92d0(__int64, __int64, unsigned int, _QWORD*, __int64);
extern _UNKNOWN** GameData_212e4a8[8];
extern _UNKNOWN** GameData_212e4b8[6];
extern _UNKNOWN** GameData_212e4f0;
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e840[12];
extern _UNKNOWN** GameData_212e848[11];
extern _UNKNOWN** GameData_212e850[10];
extern _UNKNOWN** GameData_212e858[9];
extern _UNKNOWN** GameData_212e860[8];
extern _UNKNOWN GameData_1b61490;
extern _UNKNOWN GameData_1b614c0;
extern _UNKNOWN GameData_1b614f0;
extern _UNKNOWN GameData_1b61520;
extern __int128 GameData_1a82a70;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82d00;
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82ea0;
extern __int128 GameData_1a82f20;
extern __int128 GameData_1a82fa0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a830c0;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83550;
extern __int128 GameData_1a83620;
extern __int128 GameData_1a83750;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a838c0;
extern __int128 GameData_1a83930;
extern __int64 (*GameData_1fc10b0[])();
extern __int64 (*GameData_1fc1140[])();
extern __int64 (*GameData_1fc21f0[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 g3d_g_passKinds;
extern __int64 game_g_frame_clock;
extern char* GameData_21323c0;
float exp2f(float);
float expf(float);
float powf(float, float);
long double GameRoutine_ab69a0(_QWORD);
long double GameRoutine_b3bca0(_QWORD, _QWORD);
void GameRoutine_5b28f0();
void __attribute__((noreturn)) GameRoutine_18e1100(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_b44a60(_QWORD);
void __attribute__((noreturn)) GameRoutine_b45a30(_QWORD);
void __attribute__((noreturn)) GameRoutine_b469b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_b6aee0();
void __attribute__((noreturn)) GameRoutine_b6af00();
__int64 gfxa_a94e20();
__attribute__((swiftcall)) void gfxa_aa1540(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, unsigned __int64 a3,
                                            __int64 a4, unsigned __int64 a5,
                                            int* a6);
__attribute__((swiftcall)) void gfxa_aa1a00(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, unsigned __int64 a3,
                                            __int64 a4, unsigned __int64 a5,
                                            int* a6);
__int64 gfxa_aa1f20();
__int64 gfxa_aa2110();
__int64 gfxa_b40ac0_alt1(__int64 result, _QWORD* a2, long double a3, __int64 a4,
                         __int64 a5, __int64 a6,
                         __int64 a7) __asm__("gfxa_b40ac0");
__int64 gfxa_b56ec0(__int64* a1, __int64 a2);
bool gfxa_b5ff30(__int64* a1);
__int64* gfxa_b6a300_alt1(__int64 a1, _QWORD* a2,
                          __int64* a3) __asm__("gfxa_b6a300");
__attribute__((swiftcall)) void
gfxa_b722e0_alt1(PSEUDO_X8 x8_, __int64 a1, int* a2, __int64 unused_int2,
                 __int64 a3, __int64 a4, __int64 a5) __asm__("gfxa_b722e0");
__int64 gfxa_b77270(__int64 a1, __int64 a2, __int64* a3);
__int64 gfxa_b89070(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4);
__int64 gfxa_18e0a40(__int64* a1, float* a2);
__int64 GameHr_18e1120(__int64 result, float*, __int64, char);
__int64 GameHr_ad5280(_QWORD*);
__int64 GameHr_ad6000(__int64, unsigned __int64);
__int64 gfxa_ab4070(__int64 result);
__int64 gfxa_ab69a0(__int64 result);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float32x4_t GameRoutine_b3bca0_alt1(float*,
                                    float32x4_t*) __asm__("GameRoutine_b3bca0");
void GameRoutine_a8e660_alt1(__int64, unsigned __int64**, __int64,
                             unsigned __int64, __int64,
                             unsigned __int64) __asm__("GameRoutine_a8e660");
void GameRoutine_a8e9a0_alt1(__int64, unsigned __int64**, __int64,
                             unsigned __int64, __int64,
                             unsigned __int64) __asm__("GameRoutine_a8e9a0");
void GameRoutine_ad07c0_alt1(__int64*, unsigned __int64,
                             _QWORD*) __asm__("GameRoutine_ad07c0");
void __attribute__((noreturn))
GameRoutine_18e1100_alt1() __asm__("GameRoutine_18e1100");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64* GameRoutine_b3f6c0_alt1(_QWORD*,
                                 const char*) __asm__("GameRoutine_b3f6c0");
__int64* GameRoutine_b3f800_alt1(_QWORD*,
                                 const char*) __asm__("GameRoutine_b3f800");
__int64* fw_containers_BalanceAfterInsert_alt1(
    __int64* result, __int64*) __asm__("fw_containers_BalanceAfterInsert");
__int64 GameHr_b44a80(__int64 result, float*, __int64, char);
__int64 GameHr_b469e0(__int64 result, float*, __int64, char);
__int64 GameRoutine_b45a60_alt1(__int64 result, int*, __int64,
                                char) __asm__("GameRoutine_b45a60");
__int64 GameRoutine_be2400_alt1(__int64, unsigned int*,
                                int*) __asm__("GameRoutine_be2400");
__int64 gfxa_TaskCharaMask_Impl_Impl_alt1(_QWORD*, __int64) __asm__(
    "gfxa_TaskCharaMask_Impl_Impl");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
float GameRoutine_652ba0_alt1(float32x4_t*, float,
                              float) __asm__("GameRoutine_652ba0");
void GameHr_bda630(_QWORD*, __int64, unsigned __int64);
void GameHr_bfae60(_QWORD*);
void GameRoutine_19a5c60_alt1() __asm__("GameRoutine_19a5c60");
void GameRoutine_a93d00_alt1(__int64, __int64, unsigned __int64,
                             float) __asm__("GameRoutine_a93d00");
void GameRoutine_ad0e40_alt1(float*, __int64,
                             unsigned __int64) __asm__("GameRoutine_ad0e40");
void Probe2UpdateTask_b47f40_alt1(_QWORD*) __asm__("Probe2UpdateTask_b47f40");
void ResourceBuilder_b4f9e0_alt1(_QWORD*) __asm__("ResourceBuilder_b4f9e0");
void __attribute__((noreturn))
GameRoutine_b44a60_alt1() __asm__("GameRoutine_b44a60");
void __attribute__((noreturn))
GameRoutine_b45a30_alt1() __asm__("GameRoutine_b45a30");
void __attribute__((noreturn))
GameRoutine_b469b0_alt1() __asm__("GameRoutine_b469b0");
void gfxa_TaskCharaDepth_Impl_Impl_alt1(__int64, __int64) __asm__(
    "gfxa_TaskCharaDepth_Impl_Impl");
void gfxa_b447c0(__int64, unsigned __int64);
void task_647d00(_QWORD*, int, __int64, unsigned __int64, __int64, int, __int64,
                 char);
void gfxa_b40ac0(__int64 a1, _QWORD* a2);
void gfxa_b6a300(__int64 a1, _QWORD* a2, __int64* a3);
__attribute__((swiftcall)) void gfxa_b722e0(PSEUDO_X8 x8_, __int64 a1, int* a2);

__int64 gfxa_a94e20()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  void (**v2)(__int64, __int64 (***)(void), __int64);
  void (*v3)(__int64, __int64 (***)(void), __int64);
  _QWORD* v4;
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
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  char* v21;
  char* v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  __int64 (**v25)();
  struct {
    _QWORD v26[2];
    __int64 v27;
    __int64 (***v28)();
  } v26_;
  struct {
    _QWORD v29[2];
    char v30;
  } v29_;
  struct {
    _QWORD v31[2];
    char v32;
  } v31_;
  struct {
    _QWORD v33[2];
    char v34;
  } v33_;
  struct {
    _QWORD v35[2];
    char v36;
  } v35_;
  struct {
    _QWORD v37[2];
    char v38;
  } v37_;
  _QWORD v39[2];
  _QWORD v40[2];

  v0 = game_g_frame_clock_ptr[0];
  v25 = nullptr;
  v26_.v26[0] = 0x3F80000000000000LL;
  v1 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 256);
  v2 = (void (**)(__int64, __int64 (***)(void), __int64))GameData_212e4f0;
  ((void (*)(__int64, __int64 (***)(void), __int64))*GameData_212e4f0)(
      v1 + 8, &v25, 41);
  (*v2)(v1 + 8, &v25, 56);
  (*v2)(v1 + 8, &v25, 61);
  (*v2)(v1 + 8, &v25, 63);
  v23_.v23[0] = 0x3F8000003F800000LL;
  v23_.v23[1] = 1055846127;
  (*v2)(v1 + 8, (__int64 (***)(void))v23_.v23, 37);
  v3 = *v2;
  v40[0] = 0x3F80000000000000LL;
  v40[1] = 0;
  v3(v1 + 8, (__int64 (***)(void))v40, 37);
  v39[0] = 0;
  v39[1] = 0x447A000000000000LL;
  (*v2)(v1 + 8, (__int64 (***)(void))v39, 41);
  v4 = (_QWORD*)*v0;
  v37_.v37[0] = "RootCl";
  v37_.v37[1] = 6;
  v37_.v38 = 1;
  task_647d00(v4, 1, (__int64)"PreparationLitCl", 0x10u, (__int64)v37_.v37, 1,
              0, 0);
  v35_.v35[0] = "RootCl";
  v35_.v35[1] = 6;
  v35_.v36 = 1;
  task_647d00(v4, 0, (__int64)"GraphicsCl", 0xAu, (__int64)v35_.v35, 2, 0, 0);
  v33_.v33[0] = "RootCl";
  v33_.v33[1] = 6;
  v33_.v34 = 1;
  task_647d00(v4, 1, (__int64)"DLSSCl", 6u, (__int64)v33_.v33, 3, 0x1000000, 1);
  v31_.v31[0] = "RootCl";
  v31_.v31[1] = 6;
  v31_.v32 = 1;
  task_647d00(v4, 0, (__int64)"GraphicsCl2", 0xBu, (__int64)v31_.v31, 4, 0, 0);
  v29_.v29[0] = "GraphicsCl2";
  v29_.v29[1] = 11;
  v29_.v30 = 1;
  task_647d00(v4, 0, (__int64)"RootCl2", 7u, (__int64)v29_.v29, 5, 0, 0);
  GameRoutine_a96350();
  gfxa_aa2110();
  gfxa_a96c40();
  GameRoutine_19a5c60_alt1();
  v26_.v28 = &v25;
  v23_.v24 = v23_.v23;
  v25 = GameData_1fc10b0;
  v23_.v23[0] = GameData_1fc1140;
  gfx_flow_SetSyncCallbacks((__int64)&v25, (__int64)v23_.v23);
  if (v23_.v24 == v23_.v23) {
    v5 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v5))((__int64)v23_.v24);
LABEL_6:
  if (v26_.v28 == &v25) {
    v6 = 4;
    goto LABEL_10;
  }
  if (v26_.v28 != nullptr) {
    v6 = 5;
  LABEL_10:
    ((__int64 (*)(__int64))(*v26_.v28)[v6])((__int64)v26_.v28);
  }
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"Assign", 6u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"base", 4u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"Chara_Dress",
                          0xBu);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"Chara_Skin", 0xAu);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"Chara_Others",
                          0xCu);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"decal", 5u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"effect", 6u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"face", 4u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"filter", 6u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"map", 3u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"ui", 2u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"Lighting", 8u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"Probe", 5u);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"ImageProcessing",
                          0xFu);
  GameRoutine_ad0e40_alt1(*(float**)(*v0 + 13408), (__int64)"primitive", 9u);
  v7 = *v0;
  LODWORD(v25) = 0;
  LOBYTE(v26_.v26[0]) = 8;
  LODWORD(v26_.v28) = 0;
  v8 = *(_QWORD*)(v7 + 13416);
  strcpy((char*)v26_.v26 + 1, "None");
  GameRoutine_be2400_alt1(v8 + 64, (unsigned int*)&v25, (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v26_.v27);
  }
  v10 = *v0;
  LOBYTE(v26_.v26[0]) = 14;
  LODWORD(v25) = 1;
  LODWORD(v26_.v28) = 1;
  strcpy((char*)v26_.v26 + 1, "Default");
  GameRoutine_be2400_alt1(*(_QWORD*)(v10 + 13416) + 64LL, (unsigned int*)&v25,
                          (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v26_.v27);
  }
  v12 = *v0;
  LOBYTE(v26_.v26[0]) = 8;
  LODWORD(v25) = 2;
  LODWORD(v26_.v28) = 2;
  strcpy((char*)v26_.v26 + 1, "High");
  GameRoutine_be2400_alt1(*(_QWORD*)(v12 + 13416) + 64LL, (unsigned int*)&v25,
                          (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v26_.v27);
  }
  v14 = *v0;
  LODWORD(v26_.v28) = 0;
  LOBYTE(v26_.v26[0]) = 6;
  LODWORD(v25) = 3;
  *(_DWORD*)((char*)v26_.v26 + 1) = 7827276;
  GameRoutine_be2400_alt1(*(_QWORD*)(v14 + 13416) + 64LL, (unsigned int*)&v25,
                          (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v26_.v27);
  }
  v16 = *v0;
  LODWORD(v26_.v28) = 3;
  LOBYTE(v26_.v26[0]) = 16;
  LODWORD(v25) = 4;
  v17 = *(_QWORD*)(v16 + 13416);
  strcpy((char*)v26_.v26 + 1, "VeryHigh");
  GameRoutine_be2400_alt1(v17 + 64, (unsigned int*)&v25, (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v26_.v27);
  }
  GameHr_bda630(*(_QWORD**)(*v0 + 13416), (__int64)"Base", 4u);
  GameHr_bda630(*(_QWORD**)(*v0 + 13416), (__int64)"Chara", 5u);
  GameHr_bda630(*(_QWORD**)(*v0 + 13416), (__int64)"Effect", 6u);
  GameHr_bda630(*(_QWORD**)(*v0 + 13416), (__int64)"Map", 3u);
  GameRoutine_a93d00_alt1(*(_QWORD*)(*v0 + 13232), (__int64)"BmapToZoom", 0xAu,
                          0x1.0000000000000p+0f);
  GameRoutine_a93d00_alt1(*(_QWORD*)(*v0 + 13232),
                          (__int64)"DitherAlphaBeginDist", 0x14u,
                          0x1.0000000000000p+2f);
  GameRoutine_a93d00_alt1(*(_QWORD*)(*v0 + 13232),
                          (__int64)"DitherAlphaEndDist", 0x12u,
                          0x1.8000000000000p+1f);
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"GBuffer", 7u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"ProbeGBuffer", 0xCu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"BaseForward", 0xBu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaForward", 0xCu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaForwardTransparent",
                                      0x17u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaOutline", 0xCu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaTransparentOutline",
                                      0x17u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaMask", 9u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaGmapOutlineMask", 0x14u)) =
      1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaDepth", 0xAu)) = 2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaTransparentPreDepth",
                                      0x18u)) = 2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"Forward", 7u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"3DUIAlwaysDraw", 0xEu)) = 1;
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)GameHr_ad6000((__int64)"3DUI", 4u)) =
      1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"DepthOnly", 9u)) = 2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"ShadowCaster", 0xCu)) = 3;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"CharaShadowCaster", 0x11u)) = 3;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"LocalShadowCaster", 0x11u)) = 4;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"LocalOmniShadowCaster",
                                      0x15u)) = 4;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"SelfShadowCaster", 0x10u)) = 5;
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)GameHr_ad6000((__int64)"SSR", 3u)) =
      1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"TranslucencyDepth", 0x11u)) = 2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameHr_ad6000((__int64)"MeshFog", 7u)) = 1;
  result = GameHr_ad6000((__int64)"DepthAndGBuffer", 0xFu);
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)result) = 1;
  v20 = *(_QWORD*)(*v0 + 13408);
  if ((*(_BYTE*)(v20 + 208) & 1) != 0) {
    *(_QWORD*)(v20 + 216) = 6;
    v21 = *(char**)(v20 + 224);
  }
  else {
    v21 = (char*)(v20 + 209);
    *(_BYTE*)(v20 + 208) = 12;
  }
  strcpy(v21, "Assign");
  if ((*(_BYTE*)(v20 + 232) & 1) != 0) {
    *(_QWORD*)(v20 + 240) = 9;
    v22 = *(char**)(v20 + 248);
  }
  else {
    *(_BYTE*)(v20 + 232) = 18;
    v22 = (char*)(v20 + 233);
  }
  strcpy(v22, "MapShadow");
  return result;
}

__attribute__((swiftcall)) void gfxa_aa1540(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, unsigned __int64 a3,
                                            __int64 a4, unsigned __int64 a5,
                                            int* a6)
{
  unsigned __int64** a7 = (unsigned __int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v14;
  int v15;
  __int64 v16;
  atomic_ullong* v17;
  unsigned __int64* v18;
  __int64 v19;
  struct {
    unsigned __int64* v20;
    __int64 v21;
  } v20_;

  v14 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 408, 16, 0);
  v15 = *a6;
  v16 = v14;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 8) = 0;
  v17 = (atomic_ullong*)(v14 + 8);
  *(_QWORD*)v14 = GameData_1fc21f0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_BYTE*)(v14 + 60) = 0;
  v20_.v20 = nullptr;
  *(_QWORD*)(v14 + 24) = 45;
  v18 = (unsigned __int64*)(v14 + 24);
  *(_DWORD*)(v14 + 56) = 1065353216;
  GameRoutine_ad07c0_alt1((__int64*)(v14 + 32), 0x2Du, &v20_.v20);
  *(_DWORD*)(v16 + 64) = v15;
  memset_alt1(v16 + 72, 0, 0x150u);
  gfxa_ab4070((__int64)v18);
  gfxa_ab69a0((__int64)v18);
  *a7 = v18;
  a7[1] = (unsigned __int64*)v16;
  v20_.v20 = v18;
  v20_.v21 = v16;
  atomic_fetch_add_explicit(v17, 1u, memory_order_relaxed);
  GameRoutine_a8e660_alt1(a1, &v20_.v20, a2, a3, a4, a5);
  v19 = v20_.v21;
  if (v20_.v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
}

__attribute__((swiftcall)) void gfxa_aa1a00(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, unsigned __int64 a3,
                                            __int64 a4, unsigned __int64 a5,
                                            int* a6)
{
  unsigned __int64** a7 = (unsigned __int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v14;
  int v15;
  __int64 v16;
  atomic_ullong* v17;
  unsigned __int64* v18;
  __int64 v19;
  struct {
    unsigned __int64* v20;
    __int64 v21;
  } v20_;

  v14 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 408, 16, 0);
  v15 = *a6;
  v16 = v14;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 8) = 0;
  v17 = (atomic_ullong*)(v14 + 8);
  *(_QWORD*)v14 = GameData_1fc21f0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_BYTE*)(v14 + 60) = 0;
  v20_.v20 = nullptr;
  *(_QWORD*)(v14 + 24) = 45;
  v18 = (unsigned __int64*)(v14 + 24);
  *(_DWORD*)(v14 + 56) = 1065353216;
  GameRoutine_ad07c0_alt1((__int64*)(v14 + 32), 0x2Du, &v20_.v20);
  *(_DWORD*)(v16 + 64) = v15;
  memset_alt1(v16 + 72, 0, 0x150u);
  gfxa_ab4070((__int64)v18);
  gfxa_ab69a0((__int64)v18);
  *a7 = v18;
  a7[1] = (unsigned __int64*)v16;
  v20_.v20 = v18;
  v20_.v21 = v16;
  atomic_fetch_add_explicit(v17, 1u, memory_order_relaxed);
  GameRoutine_a8e9a0_alt1(a1, &v20_.v20, a2, a3, a4, a5);
  v19 = v20_.v21;
  if (v20_.v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
}

__int64 gfxa_aa1f20()
{
  _QWORD* v0;
  __int64 i;
  __int64 v2;
  __int64 j;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  struct {
    unsigned __int64* v18;
    __int64 v19;
  } v18_;
  int v20;

  v0 = *(_QWORD**)(game_g_frame_clock + 13224);
  v2 = v0[20];
  for (i = v0[21]; i != v2; GameRoutine_a90790(i)) {
    i -= 160;
  }
  v0[21] = v2;
  v4 = v0[23];
  for (j = v0[24]; j != v4; GameRoutine_a90790(j)) {
    j -= 160;
  }
  v5 = game_g_frame_clock;
  v0[24] = v4;
  v20 = 0;
  gfxa_aa1540_alt1((void*)(&v18_.v18), *(__int64**)(v5 + 13224),
                   (__int64)"Base", 4u, (__int64)"Preset/Base", 0xBu, &v20);
  result = Settings_aa1690((__int64)v18_.v18, (__int64)"Preset/Base", 0xBu);
  v7 = v18_.v19;
  if (v18_.v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(game_g_frame_clock + 13224);
  v10 = *(unsigned __int64**)(v8 + 48);
  v9 = *(_QWORD*)(v8 + 56);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = std___1___shared_weak_count___release_weak(v9);
    }
  }
  if (v10 != nullptr) {
    v11 = *v10;
    if (*v10 != 0) {
      v12 = 0;
      v13 = 0;
      do {
        v14 = *(_QWORD*)(v10[1] + 8 * v12);
        if (v14 != 0) {
          v15 = *(__int64**)(v14 + 32);
          v16 = *(__int64**)(v14 + 40);
          if (v15 != v16) {
            do {
              v17 = *v15++;
              result = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 72LL))(v17);
            } while (v15 != v16);
            v11 = *v10;
          }
        }
        v12 = ++v13;
      } while (v11 > v13);
    }
  }
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 gfxa_aa2110()
{
  __int64* v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    unsigned __int64* v4;
    __int64 v5;
  } v4_;
  int v6;

  v0 = game_g_frame_clock_ptr[0];
  v6 = 0;
  GameRoutine_aa21d0(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), &v6);
  v1 = *v0;
  v6 = 0;
  gfxa_aa1540_alt1((void*)(&v4_.v4), *(__int64**)(v1 + 13224), (__int64)"Base",
                   4u, (__int64)"Preset/Base", 0xBu, &v6);
  result = Settings_aa1690((__int64)v4_.v4, (__int64)"Preset/Base", 0xBu);
  v3 = v4_.v5;
  if (v4_.v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4_.v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

void gfxa_b40ac0(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v4;
  _QWORD* v5;
  _QWORD* v6;
  int v7;
  _QWORD* v8;
  _QWORD* v9;
  bool v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64* v20;
  __int64* v21;
  int v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  float32x4_t v27;
  _BYTE* v28;
  float32x4_t v29;
  float32x4_t v30;
  unsigned __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  unsigned __int64 v34;
  float32x4_t v35;
  __int64 v36;
  int v37;
  __int64* v38;
  __int64* v39;
  int v40;
  __int64* v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  float32x4_t v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD* v48;
  float32x4_t v49;
  int8x16_t v50;
  unsigned __int32 v51;
  signed __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  signed __int64 v64;
  __int64 v65;
  int v66;
  _QWORD* v67;
  __int64 v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  float32x4_t* v87;
  __int64 v88;
  _QWORD* v89;
  _QWORD* v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  int v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  int16x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  int16x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  _QWORD* v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  _QWORD* v124;
  unsigned __int64 v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  __int64 v131;
  unsigned __int64 v132;
  _QWORD* v133;
  __int64 i;
  int v135;
  __int64 v136;
  __int64 v137;
  _QWORD* v138;
  int v139;
  bool v140;
  __int64 v141;
  int v142;
  _QWORD* v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64* v147;
  int v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64* v153;
  __int64 v154;
  __int64* v155;
  __int64** v156;
  __int64* v157;
  __int64 v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  __int64** v162;
  __int64 v163;
  __int64** v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  unsigned __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  int v174;
  __int64 v175;
  _BYTE** v176;
  __int64* v177;
  __int64 v178;
  int v179;
  __int64 v180;
  int* v181;
  unsigned __int64 v182;
  _BYTE* v183;
  _BYTE* v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  unsigned __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  int v201;
  __int64 v202;
  bool v203;
  __int64 v204;
  int v205;
  int v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  _QWORD* v212;
  __int64 v213;
  int8x16_t v214;
  int8x16_t v215;
  int8x16_t v216;
  unsigned __int32 v217;
  float32x4_t v218;
  float v219;
  unsigned int v220;
  float v221;
  int8x16_t v222;
  float v223;
  __int64 v224;
  float v225;
  float v226;
  int8x16_t v227;
  float v228;
  float32x4_t v229;
  __int64 v230;
  float32x4_t v231;
  unsigned __int64 v232;
  __int64 v233;
  float32x4_t v234;
  __int64 v235;
  int v236;
  int v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  int v246;
  int v247;
  int v248;
  int v249;
  int v250;
  int v251;
  int v252;
  int v253;
  int v254;
  int v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  int v262;
  __int64 v263;
  _DWORD* v264;
  _DWORD* v265;
  __int64 v266;
  __int64* v267;
  __int64* v268;
  __int64* v269;
  _QWORD* v270;
  float32x4_t v271;
  _BYTE* v272;
  __int64 v273;
  __int64 v274;
  float v275;
  __int64 v276;
  float32x4_t v277;
  float v278;
  int v279;
  float32x4_t v280;
  int8x16_t v281;
  int8x16_t v282;
  int8x16_t v283;
  unsigned __int32 v284;
  __int64 v285;
  float v286;
  float v287;
  float v288;
  int v289;
  int v290;
  float v291;
  __int64 v292;
  int v293;
  int v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  int v298;
  float32x4_t v299;
  int8x16_t v300;
  int8x16_t v301;
  int8x16_t v302;
  unsigned __int32 v303;
  __int64 v304;
  float32x4_t v305;
  float32x2_t v306;
  float v307;
  float32x4_t v308;
  __int64 v309;
  int v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  int v314;
  __int64 v315;
  _QWORD* v316;
  __int64 v317;
  _QWORD* v318;
  int v319;
  bool v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  int v325;
  __int64 v326;
  __int64 v327;
  unsigned int v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  unsigned int v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  unsigned int v338;
  __int64 v339;
  __int64 v340;
  unsigned int v341;
  __int64 v342;
  __int64 v343;
  unsigned int v344;
  __int64 v345;
  __int64 v346;
  unsigned int v347;
  __int64 v348;
  __int64 v349;
  unsigned int v350;
  __int64 v351;
  __int64 v352;
  unsigned int v353;
  __int64 v354;
  void (**v355)(__int64, __int64);
  __int64 v356;
  int v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  int v363;
  bool v364;
  __int64 v365;
  __int64 v366;
  int v367;
  __int64 v368;
  unsigned int v369;
  __int64 v370;
  unsigned int v371;
  unsigned int v372;
  __int64 v373;
  unsigned int v374;
  __int64 v375;
  unsigned int v376;
  __int64 v377;
  unsigned int v378;
  __int64 v379;
  unsigned int v380;
  __int64 v381;
  unsigned int v382;
  __int64 v383;
  unsigned int v384;
  __int64 v385;
  unsigned int v386;
  __int64 v387;
  unsigned int v388;
  __int64 v389;
  unsigned int v390;
  __int64 v391;
  unsigned int v392;
  __int64 v393;
  unsigned int v394;
  _QWORD* v395;
  __int64 v396;
  int v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64 v401;
  int v402;
  bool v403;
  __int64 v404;
  __int64 v405;
  __int64 v406;
  unsigned int v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  unsigned int v412;
  __int64 v413;
  __int64 v414;
  unsigned int v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  unsigned int v420;
  __int64 v421;
  __int64 v422;
  unsigned int v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  unsigned int v428;
  __int64 v429;
  __int64 v430;
  unsigned int v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  unsigned int v436;
  __int64 v437;
  __int64 v438;
  unsigned int v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  unsigned int v444;
  __int64 v445;
  __int64 v446;
  unsigned int v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  unsigned int v452;
  __int64 v453;
  __int64 v454;
  void (**v455)(__int64, __int64);
  __int64 v456;
  int v457;
  __int64 v458;
  __int64 v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  int v463;
  bool v464;
  __int64 v465;
  __int64 v466;
  unsigned int v467;
  __int64 v468;
  __int64 v469;
  unsigned int v470;
  int* v471;
  __int64 v472;
  __int64 v473;
  __int64 v474;
  __int64 v475;
  unsigned int v476;
  __int64 v477;
  int v478;
  __int64 v479;
  int* v480;
  __int64 v481;
  unsigned int v482;
  __int64 v483;
  int v484;
  __int64 v485;
  int* v486;
  __int64 v487;
  __int64 v488;
  __int64 v489;
  unsigned int v490;
  __int64 v491;
  int v492;
  __int64 v493;
  int* v494;
  __int64 v495;
  __int64 v496;
  unsigned int v497;
  __int64 v498;
  int v499;
  __int64 v500;
  int* v501;
  __int64 v502;
  __int64 v503;
  __int64 v504;
  unsigned int v505;
  __int64 v506;
  int v507;
  int v508;
  __int64 v509;
  int* v510;
  __int64 v511;
  __int64 v512;
  __int64 v513;
  unsigned int v514;
  __int64 v515;
  int v516;
  __int64 v517;
  __int64 v518;
  int v519;
  __int64 v520;
  void (**v521)(__int64, __int64);
  __int64* v522;
  __int64 v523;
  char* v524;
  __int64 v525;
  __int64 v526;
  __int64 v527;
  __int64 v528;
  __int64 v529;
  unsigned __int8* v530;
  __int64* v531;
  int v532;
  __int64 v533;
  __int64 v534;
  __int64 v535;
  int v536;
  __int64 v537;
  int v538;
  __int64 v539;
  __int64 v540;
  __int64 v541;
  __int64 v543;
  __int64 v544;
  __int64 v545;
  unsigned int v546;
  unsigned int v547;
  unsigned int v548;
  unsigned int v549;
  unsigned int v550;
  __int64* v551;
  float32x4_t v552;
  _QWORD* v553;
  int32x4_t v554;
  __int64 v555;
  _QWORD* v556;
  int8x16_t v557;
  __int64 v558;
  unsigned __int64 v559;
  float32x4_t v560;
  int8x16_t v561;
  __int64 v562;
  __int64 v563;
  unsigned __int64 v564;
  unsigned __int32 v565;
  float32x4_t* v566;
  __int64 v567;
  struct {
    __int64 v568;
    int v569;
  } v568_;
  struct {
    float32x4_t v570;
    float32x4_t v571;
  } v570_;
  float32x4_t v572[2];

  v328 = COERCE_AS(__typeof__(v328),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v332 = COERCE_AS(__typeof__(v332),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v412 = COERCE_AS(__typeof__(v412),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v420 = COERCE_AS(__typeof__(v420),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v428 = COERCE_AS(__typeof__(v428),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v436 = COERCE_AS(__typeof__(v436),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v444 = COERCE_AS(__typeof__(v444),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v452 = COERCE_AS(__typeof__(v452),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v476 = COERCE_AS(__typeof__(v476),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v482 = COERCE_AS(__typeof__(v482),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v490 = COERCE_AS(__typeof__(v490),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v497 = COERCE_AS(__typeof__(v497),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v505 = COERCE_AS(__typeof__(v505),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v514 = COERCE_AS(__typeof__(v514),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = a1;
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 288LL);
  v4 = *(_DWORD*)(v3 + 780);
  if (v4 == *(_DWORD*)(a1 + 432)) {
    v5 = *(_QWORD**)(a1 + 440);
    v6 = a2;
    if (v5 != (_QWORD*)(a1 + 448)) {
      do {
        if ((*(_BYTE*)(a1 + 540) & 1) != 0 || (v7 = *((_DWORD*)v5 + 9)) <= 0) {
          *((_BYTE*)v5 + 32) = 1;
          v8 = (_QWORD*)v5[1];
          if (v8 != nullptr) {
            goto LABEL_12;
          }
        }
        else {
          if ((v5[4] & 1) == 0) {
            *((_DWORD*)v5 + 9) = v7 - 1;
          }
          v8 = (_QWORD*)v5[1];
          if (v8 != nullptr) {
            do {
            LABEL_12:
              v9 = v8;
              v8 = (_QWORD*)*v8;
            } while (v8 != nullptr);
            goto LABEL_4;
          }
        }
        do {
          v9 = (_QWORD*)v5[2];
          v10 = v5 == (_QWORD*)*v9;
          v5 = v9;
        } while (!v10);
      LABEL_4:
        v5 = v9;
      } while (v9 != (_QWORD*)(a1 + 448));
    }
  }
  else {
    Probe2UpdateTask_b47f40_alt1(*(_QWORD**)(a1 + 448)),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v2 + 440) = v2 + 448;
    v6 = a2;
    *(_QWORD*)(v2 + 448) = 0;
    *(_QWORD*)(v2 + 456) = 0;
  }
  *(_DWORD*)(v2 + 432) = v4;
  *(_BYTE*)(v2 + 540) = 0;
  v11 = 0;
  v12 = 0;
  v13 = *(_QWORD**)(v3 + 752);
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  v556 = (_QWORD*)(v3 + 760);
  v563 = v2;
  if (v13 == (_QWORD*)(v3 + 760)) {
    v559 = 0;
    goto LABEL_85;
  }
  v15 = (__int64*)(v2 + 448);
  v559 = 0;
  do {
    v16 = v13[5];
    v17 = v11;
    if (*(_BYTE*)(v16 + 84) != 1) {
      LANES128(v27).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v27).n128_u64[1] = 0x3F0000003F000000LL;
      v28 = *(_BYTE**)(v2 + 72);
      v570_.v570 = COERCE_AS(float32x4_t, GameData_1a82f20);
      v570_.v571 = COERCE_AS(float32x4_t, GameData_1a82ea0);
      LANES128(v29).n128_u64[0] = *(_QWORD*)v16;
      LANES128(v29).n128_u64[1] = *(unsigned int*)(v16 + 8);
      LANES128(v30).n128_u64[0] = *(_QWORD*)(v16 + 12);
      v31 = *(unsigned int*)(v16 + 20);
      LANES128(v30).n128_u64[1] = v31;
      v32 = vsubq_f32(v29, vmulq_f32(v30, v27));
      LANES128(v30).n128_u64[0] = *(_QWORD*)(v16 + 24);
      LANES128(v30).n128_u64[1] = *(unsigned int*)(v16 + 32);
      v570_.v570 = vsubq_f32(v32, v30);
      LANES128(v32).n128_u64[0] = *(_QWORD*)v16;
      LANES128(v32).n128_u64[1] = *(unsigned int*)(v16 + 8);
      LANES128(v30).n128_u64[0] = *(_QWORD*)(v16 + 12);
      LANES128(v30).n128_u64[1] = v31;
      v33 = vaddq_f32(v32, vmulq_f32(v30, v27));
      LANES128(v30).n128_u64[0] = *(_QWORD*)(v16 + 36);
      LANES128(v30).n128_u64[1] = *(unsigned int*)(v16 + 44);
      v570_.v571 = vaddq_f32(v33, v30);
      if (v28[8] == 1 && ((*(__int64 (**)(_BYTE*, float32x4_t*))(
                              *(_QWORD*)v28 + 24LL))(v28, &v570_.v570) &
                          1) == 0) {
        goto LABEL_76;
      }
      v34 = *(unsigned int*)(v16 + 8);
      v564 = *(_QWORD*)v16;
      (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 56) + 40LL))(*(_QWORD*)(v2 + 56)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v36 = *(_QWORD*)(v2 + 448);
      v37 = *((_DWORD*)v13 + 8);
      v38 = v15;
      v39 = v15;
      if (v36 != 0) {
        while (1) {
          while (1) {
            v39 = (__int64*)v36;
            v40 = *(_DWORD*)(v36 + 28);
            if (v37 >= v40) {
              break;
            }
            v36 = *v39;
            v38 = v39;
            if (*v39 == 0) {
              goto LABEL_43;
            }
          }
          if (v40 >= v37) {
            break;
          }
          v36 = v39[1];
          if (v36 == 0) {
            v38 = v39 + 1;
            goto LABEL_43;
          }
        }
      }
      else {
      LABEL_43:
        v552 = v35;
        v41 = v39;
        v42 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_DWORD*)(v42 + 28) = v37;
        *(_QWORD*)v42 = 0;
        *(_QWORD*)(v42 + 8) = 0;
        v39 = (__int64*)v42;
        v43 = (__int64*)v42;
        *(_QWORD*)(v42 + 16) = v41;
        *(_QWORD*)(v42 + 32) = 1;
        *v38 = v42;
        v44 = **(_QWORD**)(v563 + 440);
        if (v44 != 0) {
          *(_QWORD*)(v563 + 440) = v44;
          v43 = (__int64*)*v38;
        }
        fw_containers_BalanceAfterInsert_alt1(*(__int64**)(v563 + 448), v43),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v35 = v552;
        v6 = a2;
        ++*(_QWORD*)(v563 + 456);
        v37 = *((_DWORD*)v13 + 8);
      }
      LANES128(v45).n128_u64[0] = v564;
      v46 = v34;
      v47 = v13[5];
      v48 = v39 + 4;
      LANES128(v45).n128_u64[1] = v46;
      v49 = vsubq_f32(v45, v35);
      v50 = vmulq_f32(v49, v49);
      LANES128(v50).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
              .n64_u64[0];
      v51 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
                .n64_u32[0];
      if (v12 < v559) {
        *(_DWORD*)v12 = v51;
        *(_DWORD*)(v12 + 4) = v37;
        *(_QWORD*)(v12 + 8) = v47;
        *(_QWORD*)(v12 + 16) = v48;
        goto LABEL_48;
      }
      v52 = v12 - v17;
      v56 = 1 - 0x5555555555555555LL * ((__int64)(v12 - v17) >> 3);
      if (v56 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_507;
      }
      if (0x5555555555555556LL * ((__int64)(v559 - v17) >> 3) > v56) {
        v56 = 0x5555555555555556LL * ((__int64)(v559 - v17) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v559 - v17) >> 3) >=
          0x555555555555555LL) {
        v57 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v57 = v56;
      }
      if (v57 != 0) {
        v565 = v51;
        if (v57 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_506;
        }
        v58 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v57, 16, 0),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v51 = v565;
      }
      else {
        v58 = 0;
      }
      v59 = v58 + 24 * v57;
      v60 = v58 + v52;
      *(_DWORD*)v60 = v51;
      *(_DWORD*)(v60 + 4) = v37;
      *(_QWORD*)(v60 + 8) = v47;
      *(_QWORD*)(v60 + 16) = v48;
    LABEL_71:
      v559 = v59;
      v12 = v60 + 24;
      v11 = v60 + 24 * (v52 / -24);
      memcpy_alt1(v11, v17, v52),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v14 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v17 != 0) {
        v61 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v61 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v17),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      goto LABEL_75;
    }
    v18 = *v15;
    v19 = *((_DWORD*)v13 + 8);
    v20 = v15;
    v21 = v15;
    if (*v15 != 0) {
      while (1) {
        while (1) {
          v21 = (__int64*)v18;
          v22 = *(_DWORD*)(v18 + 28);
          if (v19 >= v22) {
            break;
          }
          v18 = *v21;
          v20 = v21;
          if (*v21 == 0) {
            goto LABEL_29;
          }
        }
        if (v22 >= v19) {
          break;
        }
        v18 = v21[1];
        if (v18 == 0) {
          v20 = v21 + 1;
          goto LABEL_29;
        }
      }
    }
    else {
    LABEL_29:
      v23 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0),
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v332 = COERCE_AS(__typeof__(v332),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v420 = COERCE_AS(__typeof__(v420),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v428 = COERCE_AS(__typeof__(v428),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v444 = COERCE_AS(__typeof__(v444),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v452 = COERCE_AS(__typeof__(v452),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v476 = COERCE_AS(__typeof__(v476),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v482 = COERCE_AS(__typeof__(v482),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v490 = COERCE_AS(__typeof__(v490),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v497 = COERCE_AS(__typeof__(v497),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v505 = COERCE_AS(__typeof__(v505),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v514 = COERCE_AS(__typeof__(v514),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(v23 + 16) = v21;
      *(_DWORD*)(v23 + 28) = v19;
      v21 = (__int64*)v23;
      v24 = (__int64*)v23;
      *(_QWORD*)v23 = 0;
      *(_QWORD*)(v23 + 8) = 0;
      *(_QWORD*)(v23 + 32) = 1;
      *v20 = v23;
      v25 = **(_QWORD**)(v563 + 440);
      if (v25 != 0) {
        *(_QWORD*)(v563 + 440) = v25;
        v24 = (__int64*)*v20;
      }
      fw_containers_BalanceAfterInsert_alt1(*(__int64**)(v563 + 448), v24),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ++*(_QWORD*)(v563 + 456);
      v16 = v13[5];
      v19 = *((_DWORD*)v13 + 8);
    }
    v26 = v21 + 4;
    if (v12 >= v559) {
      v52 = v12 - v17;
      v53 = 1 - 0x5555555555555555LL * ((__int64)(v12 - v17) >> 3);
      if (v53 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_507;
      }
      if (0x5555555555555556LL * ((__int64)(v559 - v17) >> 3) > v53) {
        v53 = 0x5555555555555556LL * ((__int64)(v559 - v17) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v559 - v17) >> 3) >=
          0x555555555555555LL) {
        v54 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v54 = v53;
      }
      if (v54 != 0) {
        if (v54 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_506;
        }
        v55 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v54, 16, 0),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        v55 = 0;
      }
      v59 = v55 + 24 * v54;
      v60 = v55 + v52;
      *(_DWORD*)v60 = 0;
      *(_DWORD*)(v60 + 4) = v19;
      *(_QWORD*)(v60 + 8) = v16;
      *(_QWORD*)(v60 + 16) = v26;
      goto LABEL_71;
    }
    *(_DWORD*)v12 = 0;
    *(_DWORD*)(v12 + 4) = v19;
    *(_QWORD*)(v12 + 8) = v16;
    *(_QWORD*)(v12 + 16) = v26;
  LABEL_48:
    v12 += 24LL;
    v11 = v17;
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  LABEL_75:
    v2 = v563;
  LABEL_76:
    v62 = (_QWORD*)v13[1];
    if (v62 != nullptr) {
      do {
        v63 = v62;
        v62 = (_QWORD*)*v62;
      } while (v62 != nullptr);
    }
    else {
      do {
        v63 = (_QWORD*)v13[2];
        v10 = v13 == (_QWORD*)*v63;
        v13 = v63;
      } while (!v10);
    }
    v13 = v63;
  } while (v63 != v556);
  if (v11 != v12) {
    GameHr_b44a80(
        v11, (float*)v12,
        (2 * __clz(0xAAAAAAAAAAAAAAABLL * ((__int64)(v12 - v11) >> 3))) ^ 0x7E,
        1),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_85:
  v64 = v12 - v11;
  v65 = v11;
  v66 = -1431655765 * ((v12 - v11) >> 3);
  v67 = *(_QWORD**)(v563 + 464);
  if (v66 >= 8) {
    LODWORD(v68) = 8;
  }
  else {
    LODWORD(v68) = -1431655765 * ((v12 - v11) >> 3);
  }
  v67[2] = -1;
  v67[3] = -1;
  *v67 = -1;
  v67[1] = -1;
  *(_DWORD*)(*(_QWORD*)(v563 + 464) + 32LL) = v68;
  *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = -1;
  if (v66 > 0) {
    v69 = *(_DWORD*)(v11 + 4);
    if (*(_BYTE*)(*(_QWORD*)(v11 + 8) + 84LL) == 1) {
      *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v69;
    }
    **(_DWORD**)(v563 + 464) = v69;
    if (v66 != 1) {
      v70 = *(_DWORD*)(v11 + 28);
      if (*(_BYTE*)(*(_QWORD*)(v11 + 32) + 84LL) == 1) {
        *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v70;
      }
      *(_DWORD*)(*(_QWORD*)(v563 + 464) + 4LL) = v70;
      if (v66 != 2) {
        v71 = *(_DWORD*)(v11 + 52);
        if (*(_BYTE*)(*(_QWORD*)(v11 + 56) + 84LL) == 1) {
          *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v71;
        }
        *(_DWORD*)(*(_QWORD*)(v563 + 464) + 8LL) = v71;
        if (v66 != 3) {
          v72 = *(_DWORD*)(v11 + 76);
          if (*(_BYTE*)(*(_QWORD*)(v11 + 80) + 84LL) == 1) {
            *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v72;
          }
          *(_DWORD*)(*(_QWORD*)(v563 + 464) + 12LL) = v72;
          if (v66 != 4) {
            v73 = *(_DWORD*)(v11 + 100);
            if (*(_BYTE*)(*(_QWORD*)(v11 + 104) + 84LL) == 1) {
              *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v73;
            }
            *(_DWORD*)(*(_QWORD*)(v563 + 464) + 16LL) = v73;
            if (v66 != 5) {
              v74 = *(_DWORD*)(v11 + 124);
              if (*(_BYTE*)(*(_QWORD*)(v11 + 128) + 84LL) == 1) {
                *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v74;
              }
              *(_DWORD*)(*(_QWORD*)(v563 + 464) + 20LL) = v74;
              if (v66 != 6) {
                v75 = *(_DWORD*)(v11 + 148);
                if (*(_BYTE*)(*(_QWORD*)(v11 + 152) + 84LL) == 1) {
                  *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v75;
                }
                *(_DWORD*)(*(_QWORD*)(v563 + 464) + 24LL) = v75;
                if (v66 != 7) {
                  v76 = *(_DWORD*)(v11 + 172);
                  if (*(_BYTE*)(*(_QWORD*)(v11 + 176) + 84LL) == 1) {
                    *(_DWORD*)(*(_QWORD*)(v563 + 464) + 36LL) = v76;
                  }
                  *(_DWORD*)(*(_QWORD*)(v563 + 464) + 28LL) = v76;
                }
              }
            }
          }
        }
      }
    }
  }
  v68 = (int)v68;
  v77 = 0xAAAAAAAAAAAAAAABLL * (v64 >> 3);
  v78 = (int)v68 - v77;
  if ((int)v68 <= v77) {
    v86 = v11;
    if ((int)v68 >= v77) {
      v84 = v12;
    }
    else {
      v84 = v11 + 24LL * (int)v68;
    }
  }
  else if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v559 - v12) >> 3) >= v78) {
    memset_alt1(v12, 0, 24 * ((24 * v78 - 24) / 0x18) + 24),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v84 = v12 + 24 * ((24 * v78 - 24) / 0x18) + 24;
    v86 = v11;
  }
  else {
    if (v66 < 0) {
    LABEL_507:
      GameRoutine_b44a60_alt1(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (0x5555555555555556LL * ((__int64)(v559 - v11) >> 3) >
        (unsigned __int64)(int)v68) {
      v68 = 0x5555555555555556LL * ((__int64)(v559 - v11) >> 3);
    }
    if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v559 - v11) >> 3) >=
        0x555555555555555LL) {
      v79 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v79 = v68;
    }
    if (v79 > 0xAAAAAAAAAAAAAAALL) {
    LABEL_506:
      GameRoutine_60a210_alt1(),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v80 = 3 * v79;
    v81 = fw_memory_HeapManager_Allocate_alt1(*v14, 24 * v79, 16, 0),
    v328 = COERCE_AS(__typeof__(v328),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v332 = COERCE_AS(__typeof__(v332),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v412 = COERCE_AS(__typeof__(v412),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v420 = COERCE_AS(__typeof__(v420),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v428 = COERCE_AS(__typeof__(v428),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v436 = COERCE_AS(__typeof__(v436),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v444 = COERCE_AS(__typeof__(v444),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v452 = COERCE_AS(__typeof__(v452),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v476 = COERCE_AS(__typeof__(v476),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v482 = COERCE_AS(__typeof__(v482),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v490 = COERCE_AS(__typeof__(v490),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v497 = COERCE_AS(__typeof__(v497),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v505 = COERCE_AS(__typeof__(v505),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v514 = COERCE_AS(__typeof__(v514),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v82 = v81 + v64;
    v83 = v81;
    v559 = v81 + 8 * v80;
    memset_alt1(v81 + v64, 0, 24 * ((24 * v78 - 24) / 0x18) + 24),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v84 = v82 + 24 * ((24 * v78 - 24) / 0x18) + 24;
    memcpy_alt1(v83, v65, v64),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v65 != 0) {
      v85 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v14 + v85, v65),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v6 = a2;
    v86 = v83;
  }
  v87 = *(float32x4_t**)(v563 + 496);
  if (v87 == nullptr) {
    goto LABEL_305;
  }
  v551 = (__int64*)(v563 + 448);
  while (2) {
    *(_QWORD*)(LANES128(v87[5]).n128_u64[0] + 32) = 0xFFFFFFFF00000000LL;
    if (LANES128(v87[4]).n128_u8[0] != 1) {
      goto LABEL_134;
    }
    v540 = v86;
    v566 = v87;
    v88 = *(_QWORD*)(*(_QWORD*)(v563 + 32) + 288LL);
    v89 = *(_QWORD**)(v88 + 752);
    v90 = (_QWORD*)(v88 + 760);
    if (v89 == (_QWORD*)(v88 + 760)) {
      v91 = 0;
      v123 = 0;
      goto LABEL_195;
    }
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v553 = (_QWORD*)(v88 + 760);
    while (2) {
      v94 = v89[5];
      if (*(_BYTE*)(v94 + 84) == 1) {
        v95 = *((_DWORD*)v89 + 8);
        if (v92 < v93) {
          *(_DWORD*)v92 = -1110651699;
          goto LABEL_142;
        }
        v110 = v92 - v91;
        v111 = (__int64)(v92 - v91) >> 4;
        v112 = v111 + 1;
        if ((unsigned __int64)(v111 + 1) >> 60 != 0) {
          goto LABEL_505;
        }
        if ((__int64)(v93 - v91) >> 3 > v112) {
          v112 = (__int64)(v93 - v91) >> 3;
        }
        if (v93 - v91 >= 0x7FFFFFFFFFFFFFF0LL) {
          v113 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v113 = v112;
        }
        if (v113 != 0) {
          if (v113 >> 60 != 0) {
            goto LABEL_506;
          }
          v114 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v113, 16, 0),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v114 = 0;
        }
        v115 = v114 + v110;
        v93 = v114 + 16 * v113;
        *(_DWORD*)(v114 + v110) = -1110651699;
      LABEL_169:
        *(_QWORD*)(v115 + 8) = v94;
        v116 = v115 - 16 * v111;
        *(_DWORD*)(v115 + 4) = v95;
        v92 = v115 + 16;
        memcpy_alt1(v116, v91, v110),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v91 != 0) {
          v117 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v117 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v117, v91),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v87 = v566;
        v90 = v553;
        v91 = v116;
      }
      else {
        LANES128(v97).n128_u64[0] = *(_QWORD*)v94;
        LANES128(v96).n128_u64[0] = *(_QWORD*)(v94 + 24);
        LANES128(v97).n128_u64[1] = *(unsigned int*)(v94 + 8);
        LANES128(v98).n128_u64[0] = *(_QWORD*)(v94 + 12);
        LANES128(v98).n128_u64[1] = *(unsigned int*)(v94 + 20);
        LANES128(v99).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v99).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v96).n128_u64[1] = *(unsigned int*)(v94 + 32);
        v100 = vmulq_f32(v98, v99);
        v101 = v87[3];
        LANES64(v102).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(vcgeq_f32(
                           v101, vsubq_f32(vsubq_f32(v97, v100), v96)))))
                .n64_u64[0];
        if ((LANES64(v102).n64_u8[0] & 1) == 0 &&
            (LANES64(v102).n64_u8[2] & 1) == 0 &&
            (LANES64(v102).n64_u8[4] & 1) == 0) {
          LANES128(v103).n128_u64[0] = *(_QWORD*)(v94 + 36);
          LANES128(v103).n128_u64[1] = *(unsigned int*)(v94 + 44);
          v104 = v87[2];
          LANES64(v105).n64_u64[0] =
              LANES64_OF(vmovn_s32(vmvnq_s8(vcgeq_f32(
                             vaddq_f32(vaddq_f32(v97, v100), v103), v104))))
                  .n64_u64[0];
          if ((LANES64(v105).n64_u8[0] & 1) == 0 &&
              (LANES64(v105).n64_u8[2] & 1) == 0 &&
              (LANES64(v105).n64_u8[4] & 1) == 0) {
            v106 = vaddq_f32(v101, v104);
            LANES128(v107).n128_u64[0] = 0x3F0000003F000000LL;
            LANES128(v107).n128_u64[1] = 0x3F0000003F000000LL;
            v95 = *((_DWORD*)v89 + 8);
            v108 = vsubq_f32(vabdq_f32(vmulq_f32(v106, v107), v97), v100);
            if (LANES128(v108).n128_f32[1] < LANES128(v108).n128_f32[0]) {
              LANES128(v108).n128_f32[0] = LANES128(v108).n128_f32[1];
            }
            if (LANES128(v108).n128_f32[2] < LANES128(v108).n128_f32[0]) {
              LANES128(v108).n128_f32[0] = LANES128(v108).n128_f32[2];
            }
            if (LANES128(v108).n128_f32[0] >= 0x0.0p+0f) {
              v109 = LANES128(v108).n128_f32[0];
            }
            else {
              v109 = 0x0.0p+0f;
            }
            if (v92 >= v93) {
              v110 = v92 - v91;
              v111 = (__int64)(v92 - v91) >> 4;
              v120 = v111 + 1;
              if ((unsigned __int64)(v111 + 1) >> 60 != 0) {
              LABEL_505:
                GameRoutine_b469b0_alt1(),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v332 = COERCE_AS(
                        __typeof__(v332),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v412 = COERCE_AS(
                        __typeof__(v412),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v420 = COERCE_AS(
                        __typeof__(v420),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v428 = COERCE_AS(
                        __typeof__(v428),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v436 = COERCE_AS(
                        __typeof__(v436),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v444 = COERCE_AS(
                        __typeof__(v444),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v452 = COERCE_AS(
                        __typeof__(v452),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v476 = COERCE_AS(
                        __typeof__(v476),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v482 = COERCE_AS(
                        __typeof__(v482),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v490 = COERCE_AS(
                        __typeof__(v490),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v497 = COERCE_AS(
                        __typeof__(v497),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v505 = COERCE_AS(
                        __typeof__(v505),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v514 = COERCE_AS(
                        __typeof__(v514),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if ((__int64)(v93 - v91) >> 3 > v120) {
                v120 = (__int64)(v93 - v91) >> 3;
              }
              if (v93 - v91 >= 0x7FFFFFFFFFFFFFF0LL) {
                v121 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v121 = v120;
              }
              if (v121 != 0) {
                if (v121 >> 60 != 0) {
                  goto LABEL_506;
                }
                v122 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v121, 16, 0),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v122 = 0;
              }
              v115 = v122 + v110;
              v93 = v122 + 16 * v121;
              *(float*)(v122 + v110) = v109;
              goto LABEL_169;
            }
            *(float*)v92 = v109;
          LABEL_142:
            *(_DWORD*)(v92 + 4) = v95;
            *(_QWORD*)(v92 + 8) = v94;
            v92 += 16LL;
          }
        }
      }
      v118 = (_QWORD*)v89[1];
      if (v118 != nullptr) {
        do {
          v119 = v118;
          v118 = (_QWORD*)*v118;
        } while (v118 != nullptr);
      }
      else {
        do {
          v119 = (_QWORD*)v89[2];
          v10 = v89 == (_QWORD*)*v119;
          v89 = v119;
        } while (!v10);
      }
      v89 = v119;
      if (v119 != v90) {
        continue;
      }
      break;
    }
    v123 = v92 - v91;
    if (v91 != v92) {
      GameHr_b469e0(v91, (float*)v92,
                    (2 * __clz((__int64)(v92 - v91) >> 4)) ^ 0x7E, 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  LABEL_195:
    v124 = (_QWORD*)LANES128(v87[5]).n128_u64[0];
    v125 = v123 >> 4;
    v86 = v540;
    if ((int)(v123 >> 4) >= 4) {
      v126 = 4;
    }
    else {
      v126 = v123 >> 4;
    }
    v124[2] = -1;
    v124[3] = -1;
    *v124 = -1;
    v124[1] = -1;
    *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 32) = v126;
    *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 36) = -1;
    if ((int)v125 <= 0) {
      if (v91 != 0) {
        goto LABEL_212;
      }
    }
    else {
      v127 = *(_DWORD*)(v91 + 4);
      if (*(_BYTE*)(*(_QWORD*)(v91 + 8) + 84LL) == 1) {
        *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 36) = v127;
      }
      *(_DWORD*)LANES128(v87[5]).n128_u64[0] = v127;
      if ((_DWORD)v125 != 1) {
        v128 = *(_DWORD*)(v91 + 20);
        if (*(_BYTE*)(*(_QWORD*)(v91 + 24) + 84LL) == 1) {
          *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 36) = v128;
        }
        *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 4) = v128;
        if ((_DWORD)v125 != 2) {
          v129 = *(_DWORD*)(v91 + 36);
          if (*(_BYTE*)(*(_QWORD*)(v91 + 40) + 84LL) == 1) {
            *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 36) = v129;
          }
          *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 8) = v129;
          if ((_DWORD)v125 != 3) {
            v130 = *(_DWORD*)(v91 + 52);
            if (*(_BYTE*)(*(_QWORD*)(v91 + 56) + 84LL) == 1) {
              *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 36) = v130;
            }
            *(_DWORD*)(LANES128(v87[5]).n128_u64[0] + 12) = v130;
          }
        }
      }
    LABEL_212:
      v131 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v131 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v14 + v131, v91),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v132 = LANES128(v87[5]).n128_u64[0];
    if (*(int*)(v132 + 32) >= 1) {
      v133 = v556;
      for (i = 0; i < *(int*)(v132 + 32); ++i) {
        v135 = *(_DWORD*)(v132 + 4 * i);
        if (v86 == v84) {
        LABEL_223:
          v137 = *v133;
          if (*v133 != 0) {
            v138 = v133;
            do {
              v139 = *(_DWORD*)(v137 + 32);
              v140 = v139 < v135;
              if (v139 >= v135) {
                v141 = 0;
              }
              else {
                v141 = 8;
              }
              if (!v140) {
                v138 = (_QWORD*)v137;
              }
              v137 = *(_QWORD*)(v137 + v141);
            } while (v137 != 0);
            if (v138 != v133) {
              v142 = *((_DWORD*)v138 + 8);
              if (v135 >= v142) {
                v143 = v138;
              }
              else {
                v143 = v133;
              }
              if (v135 < v142) {
                v133 = v556;
              }
              else {
                v144 = v563 + 448;
                v145 = v86;
                while (1) {
                  v146 = *(_QWORD*)v144;
                  v147 = (__int64*)v144;
                  if (*(_QWORD*)v144 == 0) {
                    break;
                  }
                  while (1) {
                    v144 = v146;
                    v148 = *(_DWORD*)(v146 + 28);
                    if (v135 < v148) {
                      break;
                    }
                    if (v148 >= v135) {
                      v86 = v145;
                      goto LABEL_286;
                    }
                    v146 = *(_QWORD*)(v144 + 8);
                    if (v146 == 0) {
                      v147 = (__int64*)(v144 + 8);
                      goto LABEL_242;
                    }
                  }
                }
              LABEL_242:
                v149 = v144;
                v144 = fw_memory_HeapManager_Allocate_alt1(*v14, 40, 16, 0),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                *(_DWORD*)(v144 + 28) = v135;
                *(_QWORD*)v144 = 0;
                *(_QWORD*)(v144 + 8) = 0;
                v150 = v144;
                *(_QWORD*)(v144 + 16) = v149;
                *(_QWORD*)(v144 + 32) = 1;
                *v147 = v144;
                v151 = **(_QWORD**)(v563 + 440);
                if (v151 != 0) {
                  *(_QWORD*)(v563 + 440) = v151;
                  v150 = *v147;
                }
                v86 = v145;
                v152 = *v551;
                v10 = v150 == *v551;
                *(_BYTE*)(v150 + 24) = v10;
                if (!v10) {
                  do {
                    v153 = *(__int64**)(v150 + 16);
                    if ((v153[3] & 1) != 0) {
                      break;
                    }
                    v154 = v153[2];
                    v155 = *(__int64**)v154;
                    if (v153 == *(__int64**)v154) {
                      v155 = *(__int64**)(v154 + 8);
                      if (v155 == nullptr || (v155[3] & 1) != 0) {
                        if (v150 == *v153) {
                          v156 = *(__int64***)(v150 + 16);
                        }
                        else {
                          v156 = (__int64**)v153[1];
                          v157 = *v156;
                          v153[1] = (__int64)*v156;
                          if (v157 != nullptr) {
                            v157[2] = (__int64)v153;
                            v154 = v153[2];
                          }
                          v156[2] = (__int64*)v154;
                          if (v153 == *(__int64**)v154) {
                            *(_QWORD*)v154 = v156;
                          }
                          else {
                            *(_QWORD*)(v154 + 8) = v156;
                          }
                          *v156 = v153;
                          v153[2] = (__int64)v156;
                          v154 = (__int64)v156[2];
                        }
                        *((_BYTE*)v156 + 24) = 1;
                        *(_BYTE*)(v154 + 24) = 0;
                        v160 = *(__int64**)v154;
                        v161 = *(_QWORD*)(*(_QWORD*)v154 + 8LL);
                        *(_QWORD*)v154 = v161;
                        if (v161 != 0) {
                          *(_QWORD*)(v161 + 16) = v154;
                        }
                        v162 = *(__int64***)(v154 + 16);
                        v160[2] = (__int64)v162;
                        if ((__int64*)v154 == *v162) {
                          *v162 = v160;
                        }
                        else {
                          v162[1] = v160;
                        }
                        v160[1] = v154;
                        goto LABEL_284;
                      }
                    }
                    else if (v155 == nullptr || (v155[3] & 1) != 0) {
                      v158 = *v153;
                      if (v150 == *v153) {
                        v159 = *(_QWORD*)(v158 + 8);
                        *v153 = v159;
                        if (v159 != 0) {
                          *(_QWORD*)(v159 + 16) = v153;
                          v154 = v153[2];
                        }
                        *(_QWORD*)(v158 + 16) = v154;
                        if (v153 == *(__int64**)v154) {
                          *(_QWORD*)v154 = v158;
                        }
                        else {
                          *(_QWORD*)(v154 + 8) = v158;
                        }
                        *(_QWORD*)(v158 + 8) = v153;
                        v153[2] = v158;
                        v154 = *(_QWORD*)(v158 + 16);
                      }
                      else {
                        v158 = *(_QWORD*)(v150 + 16);
                      }
                      *(_BYTE*)(v158 + 24) = 1;
                      *(_BYTE*)(v154 + 24) = 0;
                      v160 = *(__int64**)(v154 + 8);
                      v163 = *v160;
                      *(_QWORD*)(v154 + 8) = *v160;
                      if (v163 != 0) {
                        *(_QWORD*)(v163 + 16) = v154;
                      }
                      v164 = *(__int64***)(v154 + 16);
                      v160[2] = (__int64)v164;
                      if ((__int64*)v154 == *v164) {
                        *v164 = v160;
                      }
                      else {
                        v164[1] = v160;
                      }
                      *v160 = v154;
                    LABEL_284:
                      *(_QWORD*)(v154 + 16) = v160;
                      break;
                    }
                    *((_BYTE*)v153 + 24) = 1;
                    v150 = v154;
                    *(_BYTE*)(v154 + 24) = v154 == v152;
                    *((_BYTE*)v155 + 24) = 1;
                  } while (v154 != v152);
                }
                ++*(_QWORD*)(v563 + 456);
              LABEL_286:
                v165 = v143[5];
                v166 = v144 + 32;
                if (v84 >= v559) {
                  v167 = v84 - v86;
                  v168 = 1 - 0x5555555555555555LL * ((__int64)(v84 - v86) >> 3);
                  if (v168 > 0xAAAAAAAAAAAAAAALL) {
                    goto LABEL_507;
                  }
                  if (0x5555555555555556LL * ((__int64)(v559 - v86) >> 3) >
                      v168) {
                    v168 = 0x5555555555555556LL * ((__int64)(v559 - v86) >> 3);
                  }
                  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v559 - v86) >> 3) >=
                      0x555555555555555LL) {
                    v169 = 0xAAAAAAAAAAAAAAALL;
                  }
                  else {
                    v169 = v168;
                  }
                  if (v169 != 0) {
                    if (v169 > 0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_506;
                    }
                    v86 = fw_memory_HeapManager_Allocate_alt1(*v14, 24 * v169,
                                                              16, 0),
                    v328 = COERCE_AS(
                        __typeof__(v328),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v332 = COERCE_AS(
                        __typeof__(v332),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v35 = COERCE_AS(__typeof__(v35),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v412 = COERCE_AS(
                        __typeof__(v412),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v420 = COERCE_AS(
                        __typeof__(v420),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v428 = COERCE_AS(
                        __typeof__(v428),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v436 = COERCE_AS(
                        __typeof__(v436),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v444 = COERCE_AS(
                        __typeof__(v444),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v452 = COERCE_AS(
                        __typeof__(v452),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v476 = COERCE_AS(
                        __typeof__(v476),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v482 = COERCE_AS(
                        __typeof__(v482),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v490 = COERCE_AS(
                        __typeof__(v490),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v497 = COERCE_AS(
                        __typeof__(v497),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v505 = COERCE_AS(
                        __typeof__(v505),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v514 = COERCE_AS(
                        __typeof__(v514),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  else {
                    v86 = 0;
                  }
                  v170 = v86 + v167;
                  v171 = v86 + 24 * v169;
                  *(_DWORD*)v170 = 0;
                  *(_DWORD*)(v170 + 4) = v135;
                  *(_QWORD*)(v170 + 8) = v165;
                  *(_QWORD*)(v170 + 16) = v166;
                  v84 = v86 + v167 + 24;
                  v559 = v171;
                  memcpy_alt1(v86, v145, v167),
                      v328 = COERCE_AS(
                          __typeof__(v328),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v332 = COERCE_AS(
                          __typeof__(v332),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v35 = COERCE_AS(__typeof__(v35),
                                      PSEUDO_REGISTER(__n128, "v0", "=w")),
                      v412 = COERCE_AS(
                          __typeof__(v412),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v420 = COERCE_AS(
                          __typeof__(v420),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v428 = COERCE_AS(
                          __typeof__(v428),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v436 = COERCE_AS(
                          __typeof__(v436),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v444 = COERCE_AS(
                          __typeof__(v444),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v452 = COERCE_AS(
                          __typeof__(v452),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v476 = COERCE_AS(
                          __typeof__(v476),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v482 = COERCE_AS(
                          __typeof__(v482),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v490 = COERCE_AS(
                          __typeof__(v490),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v497 = COERCE_AS(
                          __typeof__(v497),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v505 = COERCE_AS(
                          __typeof__(v505),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v514 = COERCE_AS(
                          __typeof__(v514),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v145 != 0) {
                    v172 = 128;
                    if (*(_QWORD*)(*v14 + 200) == 0) {
                      v172 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v14 + v172, v145),
                        v328 = COERCE_AS(
                            __typeof__(v328),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v332 = COERCE_AS(
                            __typeof__(v332),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v35 = COERCE_AS(__typeof__(v35),
                                        PSEUDO_REGISTER(__n128, "v0", "=w")),
                        v412 = COERCE_AS(
                            __typeof__(v412),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v420 = COERCE_AS(
                            __typeof__(v420),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v428 = COERCE_AS(
                            __typeof__(v428),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v436 = COERCE_AS(
                            __typeof__(v436),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v444 = COERCE_AS(
                            __typeof__(v444),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v452 = COERCE_AS(
                            __typeof__(v452),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v476 = COERCE_AS(
                            __typeof__(v476),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v482 = COERCE_AS(
                            __typeof__(v482),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v490 = COERCE_AS(
                            __typeof__(v490),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v497 = COERCE_AS(
                            __typeof__(v497),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v505 = COERCE_AS(
                            __typeof__(v505),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v514 = COERCE_AS(
                            __typeof__(v514),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                }
                else {
                  *(_DWORD*)v84 = 0;
                  *(_DWORD*)(v84 + 4) = v135;
                  *(_QWORD*)(v84 + 8) = v165;
                  *(_QWORD*)(v84 + 16) = v166;
                  v84 += 24LL;
                }
                v87 = v566;
                v133 = v556;
                v132 = LANES128(v566[5]).n128_u64[0];
              }
            }
          }
        }
        else {
          v136 = v86;
          while (*(_DWORD*)(v136 + 4) != v135) {
            v136 += 24;
            if (v136 == v84) {
              goto LABEL_223;
            }
          }
        }
      }
    }
    if (LANES128(v87[4]).n128_u8[0] == 1) {
      LANES128(v87[4]).n128_u8[0] = 0;
    }
    v6 = a2;
  LABEL_134:
    v87 = (float32x4_t*)LANES128(*(v87)).n128_u64[0];
    if (v87 != nullptr) {
      continue;
    }
    break;
  }
LABEL_305:
  v173 = (__int64)(v84 - v86) >> 3;
  v174 = -1431655765 * v173;
  if (-1431655765 * (_DWORD)v173 != 0) {
    v541 = v86;
    v538 = -1431655765 * v173;
    v568_.v568 = 0x101010101010101LL;
    v568_.v569 = 16843009;
    if (v174 < 3) {
      v180 = 0;
      goto LABEL_342;
    }
    v175 = v174 & 0x7FFFFFFF;
    v176 = (_BYTE**)(v86 + 16);
    v177 = &v568_.v568;
    v178 = 0;
    v179 = 0;
    v180 = 0;
    v181 = nullptr;
    v182 = 0;
    do {
      v184 = *v176;
      v176 += 3;
      v183 = v184;
      if (*v184 == 1) {
        ++v179;
      }
      else {
        v185 = *((unsigned int*)v183 + 1);
        *(_BYTE*)v177 = 0;
        if ((unsigned __int64)v181 >= v182) {
          v186 = (unsigned __int64)v181 - v180;
          v187 = ((__int64)v181 - v180) >> 3;
          v188 = v187 + 1;
          if ((unsigned __int64)(v187 + 1) >> 61 != 0) {
            GameRoutine_b45a30_alt1(),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if ((__int64)(v182 - v180) >> 2 > v188) {
            v188 = (__int64)(v182 - v180) >> 2;
          }
          if (v182 - v180 >= 0x7FFFFFFFFFFFFFF8LL) {
            v189 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v189 = v188;
          }
          if (v189 != 0) {
            if (v189 >> 61 != 0) {
              goto LABEL_506;
            }
            v190 = v180;
            v191 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v189, 16, 0),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v180 = v190;
          }
          else {
            v191 = 0;
          }
          v192 = v178 + v185;
          v182 = v191 + 8 * v189;
          v193 = v191 + v186 - 8 * v187;
          *(_QWORD*)(v191 + v186) = v192;
          v181 = (int*)(v191 + v186 + 8);
          v194 = v180;
          memcpy_alt1(v193, v180, v186),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v194 != 0) {
            v195 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v195 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v195, v194),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v180 = v193;
        }
        else {
          *(_QWORD*)v181 = v178 + v185;
          v181 += 2;
        }
      }
      --v175;
      v178 += 0x100000000LL;
      v177 = (__int64*)((char*)v177 + 1);
    } while (v175 != 0);
    v6 = a2;
    if (v179 >= 2) {
      v14 = (__int64*)fw_memory_g_heap_manager_ptr;
      v174 = v538;
      if (v179 == 2) {
        v86 = v541;
        goto LABEL_342;
      }
      v86 = v541;
      v204 = v563;
      v205 = 2;
      v206 = 15;
    }
    else {
      v196 = (__int64)v181 - v180;
      v14 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v181 == (int*)v180) {
        v86 = v541;
      }
      else {
        v197 = v196 >> 3;
        v198 = v180;
        GameRoutine_b45a60_alt1(v180, v181, (2 * __clz(v196 >> 3)) ^ 0x7E, 1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v180 = v198;
        v199 = 0;
        do {
          v200 = v198 + 8 * v199;
          v201 = v179 + v199++;
          v202 = *(int*)(v200 + 4);
          v203 = v197 > v199 && v201 < 1;
          *((_BYTE*)&v568_.v568 + v202) = 1;
        } while (v203);
        v86 = v541;
        v6 = a2;
      }
      v174 = v538;
    LABEL_342:
      v204 = v563;
      v207 = *(_QWORD*)(v563 + 8);
      v208 = *(_QWORD*)(v207 + 16616);
      v209 = *(_QWORD*)(v207 + 16632);
      if (v208 != 0) {
        v209 = v208;
      }
      v206 = 30;
      v205 = *(_DWORD*)(v209 + 120);
    }
    v537 = v180;
    *(_DWORD*)(v204 + 536) = v205;
    if (v174 <= 0) {
      v521 = (void (**)(__int64, __int64))GameData_212e738,
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v332 = COERCE_AS(__typeof__(v332),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v420 = COERCE_AS(__typeof__(v420),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v428 = COERCE_AS(__typeof__(v428),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v444 = COERCE_AS(__typeof__(v444),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v452 = COERCE_AS(__typeof__(v452),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v476 = COERCE_AS(__typeof__(v476),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v482 = COERCE_AS(__typeof__(v482),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v490 = COERCE_AS(__typeof__(v490),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v497 = COERCE_AS(__typeof__(v497),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v505 = COERCE_AS(__typeof__(v505),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v514 = COERCE_AS(__typeof__(v514),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ((void (*)(__int64, __int64))*GameData_212e738)(*v6 + 8LL, 17),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*v521)(*v6 + 8LL, 17);
      v518 = v537;
    }
    else {
      v210 = v563;
      v211 = v174 & 0x7FFFFFFF;
      v212 = (_QWORD*)(v86 + 8);
      v536 = v206;
      v213 = 0;
      v539 = v211;
      v554 = vdupq_n_s32(0x3C23D70Au);
      do {
        v263 = *(_QWORD*)(v210 + 32);
        v265 = (_DWORD*)*v212;
        v212 += 3;
        v264 = v265;
        v266 = *(_QWORD*)(v263 + 288);
        v267 = GameRoutine_b3f6c0_alt1((_QWORD*)(v266 + 592), "Sun"),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v268 = v267 + 6;
        v269 = v267 + 12;
        if (*((_BYTE*)v267 + 112) == 0) {
          v269 = v267 + 6;
        }
        if (*((float*)v269 + 1) > 0x0.0p+0f) {
          v268 = GameRoutine_b3f800_alt1(
                     (_QWORD*)(*(_QWORD*)(v263 + 288) + 592LL), "Moon") +
                 6,
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v271 = vmulq_f32(*((float32x4_t*)v268 + 1), v554);
        v270 = *(_QWORD**)(*(_QWORD*)(v563 + 16) + 8LL);
        LANES128(v271).n128_u32[3] = 0;
        v273 = *v270;
        v272 = (_BYTE*)v270[1];
        v10 = *(_BYTE*)(*v270 + 96LL) == 0;
        v274 = 92;
        if (v10) {
          v274 = 128;
        }
        v275 = *(float*)(v273 + v274);
        v276 = 552;
        v277 = vmulq_n_f32(v271, v275);
        if (v272[520] != 0) {
          v276 = 516;
        }
        v560 = v277;
        v278 = exp2f(*(float*)&v272[v276]),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v279 = *(_DWORD*)(*(_QWORD*)(v563 + 8) + 13240LL);
        v280 = vmulq_n_f32(v560, v278);
        v570_.v570 = v280;
        if ((unsigned int)(v279 - 3) <= 3) {
          if ((unsigned int)(v279 - 5) > 1) {
            v281 = vmulq_f32(v280, COERCE_AS(float32x4_t, GameData_1a83620));
            LANES128(v281).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v281, v281, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])))
                    .n64_u64[0];
            v282 = vmulq_f32(v280, COERCE_AS(float32x4_t, GameData_1a834b0));
            LANES128(v282).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v282, v282, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v282).n128_u64[0])))
                    .n64_u64[0];
            v283 = vmulq_f32(v280, COERCE_AS(float32x4_t, GameData_1a82d20));
            LANES128(v283).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v283, v283, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v283).n128_u64[0])))
                    .n64_u64[0];
            v284 = LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v283).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v283).n128_u64[0])))
                       .n64_u32[0];
            LANES128(v280).n128_u32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v281).n128_u64[0])))
                    .n64_u32[0];
            LANES128(v280).n128_u32[1] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v282).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v282).n128_u64[0])))
                    .n64_u32[0];
            LANES128(v280).n128_u64[1] = v284;
          }
          else {
            LANES128(v280).n128_f32[0] = GameRoutine_652ba0_alt1(
                &v570_.v570, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v570_.v570 = v280;
        v285 = 712;
        v286 = *(float*)(v266 + 376);
        v287 = *(float*)(v273 + 172);
        v288 = *(float*)(v273 + 208);
        v289 = *((unsigned __int8*)v268 + 64);
        v290 = *(unsigned __int8*)(v273 + 176);
        v557 = *(int8x16_t*)v268;
        v561 = *((int8x16_t*)v268 + 3);
        if (v272[680] != 0) {
          v285 = 676;
        }
        v291 = expf(*(float*)&v272[v285]),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v292 = *(_QWORD*)(v563 + 368) + 56LL * SHIDWORD(v213);
        v293 = *(_DWORD*)(v292 + 16);
        v140 = v293 < -1;
        v294 = ((_BYTE)v293 + 1) & 1;
        if (v140) {
          v294 = -v294;
        }
        v295 = *(_QWORD*)(v292 + 8LL * v294);
        *(_DWORD*)(v292 + 16) = v294;
        v296 = (*(__int64 (**)(__int64))(*(_QWORD*)v295 + 56LL))(v295),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v297 = 256;
        v298 = *(_DWORD*)(*(_QWORD*)(v563 + 8) + 13240LL);
        if (v272[208] != 0) {
          v297 = 192;
        }
        v299 = *(float32x4_t*)&v272[v297];
        v572[0] = v299;
        if ((unsigned int)(v298 - 3) <= 3) {
          if ((unsigned int)(v298 - 5) > 1) {
            v300 = vmulq_f32(v299, COERCE_AS(float32x4_t, GameData_1a83620));
            LANES128(v300).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v300, v300, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v300).n128_u64[0])))
                    .n64_u64[0];
            v301 = vmulq_f32(v299, COERCE_AS(float32x4_t, GameData_1a834b0));
            LANES128(v301).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v301, v301, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v301).n128_u64[0])))
                    .n64_u64[0];
            v302 = vmulq_f32(v299, COERCE_AS(float32x4_t, GameData_1a82d20));
            LANES128(v302).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v302, v302, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v302).n128_u64[0])))
                    .n64_u64[0];
            v303 = LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v302).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v302).n128_u64[0])))
                       .n64_u32[0];
            LANES128(v299).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v300).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v300).n128_u64[0])))
                    .n64_u32[0] |
                ((unsigned __int64)LANES64_OF(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v301).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v301).n128_u64[0])))
                     .n64_u32[0]
                 << 32);
            LANES128(v299).n128_u64[1] = v303;
          }
          else {
            LANES128(v299).n128_f32[0] = GameRoutine_652ba0_alt1(
                v572, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v304 = 92;
        v305 = vmulq_f32(v299, COERCE_AS(float32x4_t, GameData_1a83750));
        if (v272[96] == 0) {
          v304 = 128;
        }
        LANES64(v306).n64_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v305, v305, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v305).n128_u64[0])))
                .n64_u64[0];
        v307 = LANES64_OF(vpadd_f32(v306, v306)).n64_f32[0];
        if (v307 < 0x1.0624de0000000p-10f) {
          v307 = 0x1.0624de0000000p-10f;
        }
        v308 =
            vmulq_n_f32(vmulq_n_f32(v299, 0x1.0000000000000p+0f / v307),
                        (float)(*(float*)&v272[v304] / 0x1.921fb40000000p+1f) /
                            0x1.9000000000000p+6f);
        *(_DWORD*)(v296 + 8) = LANES128(v308).n128_u32[2];
        *(_QWORD*)v296 = LANES128(v308).n128_u64[0];
        v309 = 464;
        if (v272[416] != 0) {
          v309 = 400;
        }
        v218 = *(float32x4_t*)&v272[v309];
        v310 = *(_DWORD*)(*(_QWORD*)(v563 + 8) + 13240LL);
        v572[0] = v218;
        if ((unsigned int)(v310 - 3) <= 3) {
          if ((unsigned int)(v310 - 5) > 1) {
            v214 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a83620));
            LANES128(v214).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v214, v214, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v214).n128_u64[0])))
                    .n64_u64[0];
            v215 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a834b0));
            LANES128(v215).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v215, v215, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v215).n128_u64[0])))
                    .n64_u64[0];
            v216 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a82d20));
            LANES128(v216).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v216, v216, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v216).n128_u64[0])))
                    .n64_u64[0];
            v217 = LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v216).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v216).n128_u64[0])))
                       .n64_u32[0];
            LANES128(v218).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v214).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v214).n128_u64[0])))
                    .n64_u32[0] |
                ((unsigned __int64)LANES64_OF(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v215).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v215).n128_u64[0])))
                     .n64_u32[0]
                 << 32);
            LANES128(v218).n128_u64[1] = v217;
          }
          else {
            LANES128(v218).n128_f32[0] = GameRoutine_652ba0_alt1(
                v572, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v10 = v290 == 0;
        v210 = v563;
        if (v10) {
          v219 = v288;
        }
        else {
          v219 = v287;
        }
        if (v289 != 0) {
          v220 = -1;
        }
        else {
          v220 = 0;
        }
        v221 = (float)(v286 / 0x1.9000000000000p+6f) * v219;
        v222 = vbslq_s8(vdupq_n_s32(v220), v561, v557);
        v223 = v221 * v291;
        v224 = 344;
        if (v272[312] != 0) {
          v224 = 308;
        }
        v225 = *(float*)&v272[v224];
        *(_DWORD*)(v296 + 12) = 0;
        *(_DWORD*)(v296 + 28) = 0;
        v226 = v225 / 0x1.921fb40000000p+1f;
        v227 = vmulq_f32(v218, COERCE_AS(float32x4_t, GameData_1a83750));
        LANES128(v227).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v227, v227, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
                .n64_u64[0];
        v228 =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
                .n64_f32[0];
        if (v228 < 0x1.0624de0000000p-10f) {
          v228 = 0x1.0624de0000000p-10f;
        }
        v229 = vmulq_n_f32(vmulq_n_f32(v218, 0x1.0000000000000p+0f / v228),
                           v226 / 0x1.9000000000000p+6f);
        *(_QWORD*)(v296 + 16) = LANES128(v229).n128_u64[0];
        *(_DWORD*)(v296 + 24) = LANES128(v229).n128_u32[2];
        v230 = *(unsigned int*)(v563 + 532);
        *(float*)(v296 + 60) = v223;
        v231 = vsubq_f32(COERCE_AS(float32x4_t, 0), v222);
        v232 = LANES128(v231).n128_u64[0];
        v233 = LANES128(v231).n128_u32[2];
        v234 = v570_.v570;
        *(_QWORD*)(v296 + 32) = v232;
        *(_QWORD*)(v296 + 40) = v233 | (v230 << 32);
        *(_QWORD*)(v296 + 48) = LANES128(v234).n128_u64[0];
        *(_DWORD*)(v296 + 56) = LANES128(v234).n128_u32[2];
        v235 = 792;
        if (v272[760] != 0) {
          v235 = 756;
        }
        *(float*)(v296 + 208) = *(float*)&v272[v235] + 0x1.0000000000000p+0f;
        *(_DWORD*)(v296 + 212) = 4 * *(_DWORD*)(v563 + 524);
        *(_DWORD*)(v296 + 216) = 4 * *(_DWORD*)(v563 + 528);
        v236 = v264[40];
        v237 = v264[49];
        v238 = v264[58];
        *(_DWORD*)(v296 + 76) = 0;
        *(_DWORD*)(v296 + 64) = v236;
        *(_DWORD*)(v296 + 68) = v237;
        *(_DWORD*)(v296 + 72) = v238;
        v239 = v264[41];
        v240 = v264[50];
        v241 = v264[59];
        *(_DWORD*)(v296 + 92) = 0;
        *(_DWORD*)(v296 + 80) = v239;
        *(_DWORD*)(v296 + 84) = v240;
        *(_DWORD*)(v296 + 88) = v241;
        v242 = v264[42];
        v243 = v264[51];
        v244 = v264[60];
        *(_DWORD*)(v296 + 108) = 0;
        *(_DWORD*)(v296 + 96) = v242;
        *(_DWORD*)(v296 + 100) = v243;
        *(_DWORD*)(v296 + 104) = v244;
        v245 = v264[43];
        v246 = v264[52];
        v247 = v264[61];
        *(_DWORD*)(v296 + 124) = 0;
        *(_DWORD*)(v296 + 112) = v245;
        *(_DWORD*)(v296 + 116) = v246;
        *(_DWORD*)(v296 + 120) = v247;
        v248 = v264[44];
        v249 = v264[53];
        v250 = v264[62];
        *(_DWORD*)(v296 + 140) = 0;
        *(_DWORD*)(v296 + 128) = v248;
        *(_DWORD*)(v296 + 132) = v249;
        *(_DWORD*)(v296 + 136) = v250;
        v251 = v264[45];
        v252 = v264[54];
        v253 = v264[63];
        *(_DWORD*)(v296 + 156) = 0;
        *(_DWORD*)(v296 + 144) = v251;
        *(_DWORD*)(v296 + 148) = v252;
        *(_DWORD*)(v296 + 152) = v253;
        v254 = v264[46];
        v255 = v264[55];
        v256 = v264[64];
        *(_DWORD*)(v296 + 172) = 0;
        *(_DWORD*)(v296 + 160) = v254;
        *(_DWORD*)(v296 + 164) = v255;
        *(_DWORD*)(v296 + 168) = v256;
        v257 = v264[47];
        v258 = v264[56];
        v259 = v264[65];
        *(_DWORD*)(v296 + 188) = 0;
        *(_DWORD*)(v296 + 176) = v257;
        *(_DWORD*)(v296 + 180) = v258;
        *(_DWORD*)(v296 + 184) = v259;
        v260 = v264[48];
        v261 = v264[57];
        v262 = v264[66];
        *(_DWORD*)(v296 + 204) = 0;
        *(_DWORD*)(v296 + 192) = v260;
        *(_DWORD*)(v296 + 196) = v261;
        *(_DWORD*)(v296 + 200) = v262;
        (*(void (**)(__int64))(*(_QWORD*)v295 + 64LL))(v295),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        --v211;
        v213 += 0x100000000LL;
      } while (v211 != 0);
      v311 = v539;
      v86 = v541;
      v312 = 0;
      do {
        if (*((_BYTE*)&v568_.v568 + v312) == 1) {
          v313 = v86 + 24 * v312;
          v314 = *(_DWORD*)(v313 + 4);
          v315 = *(_QWORD*)(v313 + 8);
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*a2 + 336LL))(
                *a2,
                (char*)&GameData_1b61490 + *((int*)&GameData_1b61490 + v312)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v316 = *(_QWORD**)(*(_QWORD*)(v563 + 32) + 288LL);
          v317 = v316[99];
          if (v317 == 0) {
            goto LABEL_409;
          }
          v318 = v316 + 99;
          do {
            v319 = *(_DWORD*)(v317 + 32);
            v320 = v319 < v314;
            if (v319 >= v314) {
              v321 = 0;
            }
            else {
              v321 = 8;
            }
            if (!v320) {
              v318 = (_QWORD*)v317;
            }
            v317 = *(_QWORD*)(v317 + v321);
          } while (v317 != 0);
          if (v318 != v316 + 99 &&
              v314 >= (signed __int32)*((_DWORD*)v318 + 8)) {
            v322 = v318[5];
          }
          else {
          LABEL_409:
            v322 = 0;
          }
          v323 = v316[126];
          v324 = v316[127];
          v325 = *(_DWORD*)(v315 + 80);
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
              *a2, 8, *(_QWORD*)(*(_QWORD*)(v563 + 336) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, *(_QWORD*)(v315 + 112),
                                      *(_QWORD*)(v315 + 120),
                                      *(unsigned int*)(v563 + 200)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 1, *(_QWORD*)(v315 + 128),
                                      *(_QWORD*)(v315 + 136),
                                      *(unsigned int*)(v563 + 328)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 2, *(_QWORD*)(v315 + 144),
                                      *(_QWORD*)(v315 + 152),
                                      *(unsigned int*)(v563 + 328)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 3, v323, v324,
                                      *(unsigned int*)(v563 + 200)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v326 = *a2;
          v327 = (*(__int64 (**)(_QWORD))(
              **(_QWORD**)(*(_QWORD*)(v563 + 416) + 24LL) + 40LL))(
              *(_QWORD*)(*(_QWORD*)(v563 + 416) + 24LL)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v326 + 248LL))(v326, 8, 5, v327, v328,
                                       *(unsigned int*)(v563 + 200)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v329 = *a2;
          v330 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v563 + 416) + 32LL) +
                            8LL * *(int*)(*(_QWORD*)(v563 + 416) + 128LL));
          v331 = (*(__int64 (**)(__int64))(*(_QWORD*)v330 + 40LL))(v330),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v329 + 248LL))(v329, 8, 6, v331, v332,
                                       *(unsigned int*)(v563 + 200)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v333 = v322 + 16LL * *(int*)(v322 + 776);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, *(_QWORD*)(v333 + 784),
                                      *(_QWORD*)(v333 + 792)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v334 = *(_QWORD*)(v563 + 368) + 56LL * (int)v312;
          v335 = v334 + 16LL * *(int*)(v334 + 16);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 1, *(_QWORD*)(v335 + 24),
                                      *(_QWORD*)(v335 + 32)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          LODWORD(v329) = v325 / 16;
          v336 = v322 + 16LL * *(int*)(v322 + 8);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v336 + 16),
                                      *(_QWORD*)(v336 + 24)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v337 = *a2;
          v338 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
              **(_QWORD**)(v322 + 800) + 72LL))(*(_QWORD*)(v322 + 800), 0, 0),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v337 + 256LL))(v337, 8, 0, v338),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v329,
                                      (unsigned int)v329, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v339 = v322 + 16LL * *(int*)(v322 + 40);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v339 + 48),
                                      *(_QWORD*)(v339 + 56)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v340 = *a2;
          v341 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v322 + 800) + 72LL))(*(_QWORD*)(v322 + 800), 0, 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v340 + 256LL))(v340, 8, 0, v341),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v329,
                                      (unsigned int)v329, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v342 = v322 + 16LL * *(int*)(v322 + 72);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v342 + 80),
                                      *(_QWORD*)(v342 + 88)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v343 = *a2;
          v344 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v322 + 800) + 72LL))(*(_QWORD*)(v322 + 800), 0, 2),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v343 + 256LL))(v343, 8, 0, v344),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v329,
                                      (unsigned int)v329, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v345 = v322 + 16LL * *(int*)(v322 + 104);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v345 + 112),
                                      *(_QWORD*)(v345 + 120)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v346 = *a2;
          v347 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v322 + 800) + 72LL))(*(_QWORD*)(v322 + 800), 0, 3),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v346 + 256LL))(v346, 8, 0, v347),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v329,
                                      (unsigned int)v329, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v348 = v322 + 16LL * *(int*)(v322 + 136);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v348 + 144),
                                      *(_QWORD*)(v348 + 152)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v349 = *a2;
          v350 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v322 + 800) + 72LL))(*(_QWORD*)(v322 + 800), 0, 4),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v349 + 256LL))(v349, 8, 0, v350),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v329,
                                      (unsigned int)v329, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v351 = v322 + 16LL * *(int*)(v322 + 168);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v351 + 176),
                                      *(_QWORD*)(v351 + 184)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v352 = *a2;
          v353 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v322 + 800) + 72LL))(*(_QWORD*)(v322 + 800), 0, 5),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v352 + 256LL))(v352, 8, 0, v353),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v329,
                                      (unsigned int)v329, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v311 = v539;
          v86 = v541;
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        ++v312;
      } while (v312 != v311);
      ((void (*)(__int64, __int64))*GameData_212e738)(*a2 + 8LL, 17),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v354 = 0;
      v355 = (void (**)(__int64, __int64))GameData_212e738,
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v332 = COERCE_AS(__typeof__(v332),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v420 = COERCE_AS(__typeof__(v420),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v428 = COERCE_AS(__typeof__(v428),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v444 = COERCE_AS(__typeof__(v444),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v452 = COERCE_AS(__typeof__(v452),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v476 = COERCE_AS(__typeof__(v476),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v482 = COERCE_AS(__typeof__(v482),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v490 = COERCE_AS(__typeof__(v490),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v497 = COERCE_AS(__typeof__(v497),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v505 = COERCE_AS(__typeof__(v505),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v514 = COERCE_AS(__typeof__(v514),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      do {
        if (*((_BYTE*)&v568_.v568 + v354) == 1) {
          v356 = v86 + 24 * v354;
          v357 = *(_DWORD*)(v356 + 4);
          v358 = *(_QWORD*)(v356 + 8);
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*a2 + 336LL))(
                *a2,
                (char*)&GameData_1b614c0 + *((int*)&GameData_1b614c0 + v354)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v359 = *(_QWORD*)(*(_QWORD*)(v563 + 32) + 288LL);
          v360 = *(_QWORD*)(v359 + 792);
          if (v360 == 0) {
            goto LABEL_428;
          }
          v361 = v359 + 792;
          v362 = v359 + 792;
          do {
            v363 = *(_DWORD*)(v360 + 32);
            v364 = v363 < v357;
            if (v363 >= v357) {
              v365 = 0;
            }
            else {
              v365 = 8;
            }
            if (!v364) {
              v362 = v360;
            }
            v360 = *(_QWORD*)(v360 + v365);
          } while (v360 != 0);
          if (v362 != v361 && v357 >= (signed __int32)*(_DWORD*)(v362 + 32)) {
            v366 = *(_QWORD*)(v362 + 40);
          }
          else {
          LABEL_428:
            v366 = 0;
          }
          v367 = *(_DWORD*)(v358 + 80);
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
              *a2, 8, *(_QWORD*)(*(_QWORD*)(v563 + 352) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v368 = *(_QWORD*)(v366 + 800);
          if ((*(int (**)(__int64))(*(_QWORD*)v368 + 88LL))(v368) >= 2) {
            v369 = 1;
            do {
              v370 = *a2;
              v371 = (v367 >> v369) / 8;
              v372 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369 - 1, 0),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v370 + 256LL))(v370, 8, 0, v372),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v373 = *a2;
              v374 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369, 0),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v373 + 256LL))(v373, 8, 1, v374),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v371, v371, 1),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v375 = *a2;
              v376 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369 - 1, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v375 + 256LL))(v375, 8, 0, v376),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v377 = *a2;
              v378 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v377 + 256LL))(v377, 8, 1, v378),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v371, v371, 1),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v379 = *a2;
              v380 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369 - 1, 2),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v379 + 256LL))(v379, 8, 0, v380),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v381 = *a2;
              v382 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369, 2),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v381 + 256LL))(v381, 8, 1, v382),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v371, v371, 1),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v383 = *a2;
              v384 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369 - 1, 3),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v383 + 256LL))(v383, 8, 0, v384),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v385 = *a2;
              v386 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369, 3),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v385 + 256LL))(v385, 8, 1, v386),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v371, v371, 1),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v387 = *a2;
              v388 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369 - 1, 4),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v387 + 256LL))(v387, 8, 0, v388),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v389 = *a2;
              v390 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369, 4),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v389 + 256LL))(v389, 8, 1, v390),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v371, v371, 1),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v391 = *a2;
              v392 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369 - 1, 5),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v391 + 256LL))(v391, 8, 0, v392),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v393 = *a2;
              v394 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v366 + 800) + 72LL))(*(_QWORD*)(v366 + 800),
                                                    v369, 5),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v393 + 256LL))(v393, 8, 1, v394),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v371, v371, 1),
                  v328 = COERCE_AS(
                      __typeof__(v328),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v332 = COERCE_AS(
                      __typeof__(v332),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v35 = COERCE_AS(__typeof__(v35),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v412 = COERCE_AS(
                      __typeof__(v412),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v420 = COERCE_AS(
                      __typeof__(v420),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v428 = COERCE_AS(
                      __typeof__(v428),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v436 = COERCE_AS(
                      __typeof__(v436),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v444 = COERCE_AS(
                      __typeof__(v444),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v452 = COERCE_AS(
                      __typeof__(v452),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v476 = COERCE_AS(
                      __typeof__(v476),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v482 = COERCE_AS(
                      __typeof__(v482),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v490 = COERCE_AS(
                      __typeof__(v490),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v497 = COERCE_AS(
                      __typeof__(v497),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v505 = COERCE_AS(
                      __typeof__(v505),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v514 = COERCE_AS(
                      __typeof__(v514),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*v355)(*a2 + 8LL, 17);
              ++v369;
            } while ((int)v369 <
                     (*(int (**)(__int64))(*(_QWORD*)v368 + 88LL))(v368));
          }
          v311 = v539;
          v86 = v541;
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        ++v354;
      } while (v354 != v311);
      v395 = a2;
      v396 = 0;
      v562 = v563 + 392;
      do {
        if (*((_BYTE*)&v568_.v568 + v396) == 1) {
          v397 = *(_DWORD*)(v86 + 24 * v396 + 4);
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*v395 + 336LL))(
                *v395,
                (char*)&GameData_1b614f0 + *((int*)&GameData_1b614f0 + v396)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v398 = *(_QWORD*)(*(_QWORD*)(v563 + 32) + 288LL);
          v399 = *(_QWORD*)(v398 + 792);
          if (v399 == 0) {
            goto LABEL_450;
          }
          v400 = v398 + 792;
          v401 = v398 + 792;
          do {
            v402 = *(_DWORD*)(v399 + 32);
            v403 = v402 < v397;
            if (v402 >= v397) {
              v404 = 0;
            }
            else {
              v404 = 8;
            }
            if (!v403) {
              v401 = v399;
            }
            v399 = *(_QWORD*)(v399 + v404);
          } while (v399 != 0);
          if (v401 != v400 && v397 >= (signed __int32)*(_DWORD*)(v401 + 32)) {
            v405 = *(_QWORD*)(v401 + 40);
          }
          else {
          LABEL_450:
            v405 = 0;
          }
          v406 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
          v407 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
              **(_QWORD**)(v405 + 808) + 72LL))(*(_QWORD*)(v405 + 808), 0, 0),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v408 = v405 + 16LL * *(int*)(v405 + 8);
          v409 = *(_QWORD*)(v408 + 16);
          v410 = *(_QWORD*)(v408 + 24);
          v395 = a2;
          v411 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v405 + 800) + 40LL))(
              *(_QWORD*)(v405 + 800)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v413 = v412;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
              *a2, 8, *(_QWORD*)(*(_QWORD*)(v406 + 8) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v395 + 248LL))(*v395, 8, 0, v411, v413,
                                        *(unsigned int*)(v406 + 176)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v395 + 224LL))(*v395, 8, 0, v409, v410),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v395 + 256LL))(*v395, 8, 0, v407),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v395 + 304LL))(*v395, 2, 2, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v414 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
          v415 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v405 + 808) + 72LL))(*(_QWORD*)(v405 + 808), 0, 1),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v416 = v405 + 16LL * *(int*)(v405 + 40);
          v417 = *(_QWORD*)(v416 + 48);
          v418 = *(_QWORD*)(v416 + 56);
          v419 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v405 + 800) + 40LL))(
              *(_QWORD*)(v405 + 800)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v421 = v420;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v395 + 200LL))(
              *v395, 8, *(_QWORD*)(*(_QWORD*)(v414 + 8) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v395 + 248LL))(*v395, 8, 0, v419, v421,
                                        *(unsigned int*)(v414 + 176)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v395 + 224LL))(*v395, 8, 0, v417, v418),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v395 + 256LL))(*v395, 8, 0, v415),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v395 + 304LL))(*v395, 2, 2, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v422 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
          v423 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v405 + 808) + 72LL))(*(_QWORD*)(v405 + 808), 0, 2),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v424 = v405 + 16LL * *(int*)(v405 + 72);
          v425 = *(_QWORD*)(v424 + 80);
          v426 = *(_QWORD*)(v424 + 88);
          v427 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v405 + 800) + 40LL))(
              *(_QWORD*)(v405 + 800)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v429 = v428;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v395 + 200LL))(
              *v395, 8, *(_QWORD*)(*(_QWORD*)(v422 + 8) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v395 + 248LL))(*v395, 8, 0, v427, v429,
                                        *(unsigned int*)(v422 + 176)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v395 + 224LL))(*v395, 8, 0, v425, v426),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v395 + 256LL))(*v395, 8, 0, v423),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v395 + 304LL))(*v395, 2, 2, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v430 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
          v431 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v405 + 808) + 72LL))(*(_QWORD*)(v405 + 808), 0, 3),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v432 = v405 + 16LL * *(int*)(v405 + 104);
          v433 = *(_QWORD*)(v432 + 112);
          v434 = *(_QWORD*)(v432 + 120);
          v435 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v405 + 800) + 40LL))(
              *(_QWORD*)(v405 + 800)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v437 = v436;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v395 + 200LL))(
              *v395, 8, *(_QWORD*)(*(_QWORD*)(v430 + 8) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v395 + 248LL))(*v395, 8, 0, v435, v437,
                                        *(unsigned int*)(v430 + 176)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v395 + 224LL))(*v395, 8, 0, v433, v434),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v395 + 256LL))(*v395, 8, 0, v431),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v395 + 304LL))(*v395, 2, 2, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v438 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
          v439 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v405 + 808) + 72LL))(*(_QWORD*)(v405 + 808), 0, 4),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v440 = v405 + 16LL * *(int*)(v405 + 136);
          v441 = *(_QWORD*)(v440 + 144);
          v442 = *(_QWORD*)(v440 + 152);
          v443 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v405 + 800) + 40LL))(
              *(_QWORD*)(v405 + 800)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v445 = v444;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v395 + 200LL))(
              *v395, 8, *(_QWORD*)(*(_QWORD*)(v438 + 8) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v395 + 248LL))(*v395, 8, 0, v443, v445,
                                        *(unsigned int*)(v438 + 176)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v395 + 224LL))(*v395, 8, 0, v441, v442),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v395 + 256LL))(*v395, 8, 0, v439),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v395 + 304LL))(*v395, 2, 2, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v446 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
          v447 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v405 + 808) + 72LL))(*(_QWORD*)(v405 + 808), 0, 5),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v448 = v405 + 16LL * *(int*)(v405 + 168);
          v449 = *(_QWORD*)(v448 + 176);
          v450 = *(_QWORD*)(v448 + 184);
          v451 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v405 + 800) + 40LL))(
              *(_QWORD*)(v405 + 800)),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v453 = v452;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v395 + 200LL))(
              *v395, 8, *(_QWORD*)(*(_QWORD*)(v446 + 8) + 144LL)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v395 + 248LL))(*v395, 8, 0, v451, v453,
                                        *(unsigned int*)(v446 + 176)),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v395 + 224LL))(*v395, 8, 0, v449, v450),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v395 + 256LL))(*v395, 8, 0, v447),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v395 + 304LL))(*v395, 2, 2, 1),
              v328 = COERCE_AS(__typeof__(v328),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v332 = COERCE_AS(__typeof__(v332),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v412 = COERCE_AS(__typeof__(v412),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v420 = COERCE_AS(__typeof__(v420),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v428 = COERCE_AS(__typeof__(v428),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v436 = COERCE_AS(__typeof__(v436),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v444 = COERCE_AS(__typeof__(v444),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v452 = COERCE_AS(__typeof__(v452),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v476 = COERCE_AS(__typeof__(v476),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v482 = COERCE_AS(__typeof__(v482),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v490 = COERCE_AS(__typeof__(v490),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v497 = COERCE_AS(__typeof__(v497),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v505 = COERCE_AS(__typeof__(v505),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v514 = COERCE_AS(__typeof__(v514),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v311 = v539;
          v86 = v541;
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        ++v396;
      } while (v396 != v311);
      v454 = 0;
      v14 = (__int64*)fw_memory_g_heap_manager_ptr;
      v455 = (void (**)(__int64, __int64))GameData_212e738,
      v328 = COERCE_AS(__typeof__(v328),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v332 = COERCE_AS(__typeof__(v332),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v412 = COERCE_AS(__typeof__(v412),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v420 = COERCE_AS(__typeof__(v420),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v428 = COERCE_AS(__typeof__(v428),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v436 = COERCE_AS(__typeof__(v436),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v444 = COERCE_AS(__typeof__(v444),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v452 = COERCE_AS(__typeof__(v452),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v476 = COERCE_AS(__typeof__(v476),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v482 = COERCE_AS(__typeof__(v482),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v490 = COERCE_AS(__typeof__(v490),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v497 = COERCE_AS(__typeof__(v497),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v505 = COERCE_AS(__typeof__(v505),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v514 = COERCE_AS(__typeof__(v514),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      do {
        if (*((_BYTE*)&v568_.v568 + v454) == 1) {
          v456 = v86 + 24 * v454;
          v457 = *(_DWORD*)(v456 + 4);
          v458 = *(_QWORD*)(v456 + 8);
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*v395 + 336LL))(
                *v395,
                (char*)&GameData_1b61520 + *((int*)&GameData_1b61520 + v454)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v459 = *(_QWORD*)(*(_QWORD*)(v563 + 32) + 288LL);
          v460 = *(_QWORD*)(v459 + 792);
          if (v460 == 0) {
            goto LABEL_469;
          }
          v461 = v459 + 792;
          v462 = v459 + 792;
          do {
            v463 = *(_DWORD*)(v460 + 32);
            v464 = v463 < v457;
            if (v463 >= v457) {
              v465 = 0;
            }
            else {
              v465 = 8;
            }
            if (!v464) {
              v462 = v460;
            }
            v460 = *(_QWORD*)(v460 + v465);
          } while (v460 != 0);
          if (v462 != v461 && v457 >= (signed __int32)*(_DWORD*)(v462 + 32)) {
            v466 = *(_QWORD*)(v462 + 40);
          }
          else {
          LABEL_469:
            v466 = 0;
          }
          v558 = v458;
          v467 = 0;
          v468 = 0;
          v567 = v466;
          do {
            v555 = v468;
            v469 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
            v470 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                **(_QWORD**)(v466 + 816) + 72LL))(*(_QWORD*)(v466 + 816), v467,
                                                  0),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v471 = (int*)(v466 + v555);
            v472 = v466 + v555 + 16LL * *(int*)(v466 + v555 + 8);
            v473 = *(_QWORD*)(v472 + 16);
            v474 = *(_QWORD*)(v472 + 24);
            v475 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v466 + 800) + 40LL))(
                *(_QWORD*)(v466 + 800)),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v477 = v476;
            v478 = *(int*)(v558 + 80) >> v467;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v469 + 24) + 144LL)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v475, v477,
                                        *(unsigned int*)(v469 + 176)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v473, v474),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v470),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v478 / 8),
                                        (unsigned int)(v478 / 8), 1),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v479 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
            v546 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v567 + 816) + 72LL))(*(_QWORD*)(v567 + 816), v467,
                                                  1),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v480 = &v471[4 * v471[10]];
            v543 = *((_QWORD*)v480 + 7);
            v544 = *((_QWORD*)v480 + 6);
            v481 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v567 + 800) + 40LL))(
                *(_QWORD*)(v567 + 800)),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v483 = v482;
            v484 = *(int*)(v558 + 80) >> v467;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v479 + 24) + 144LL)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v481, v483,
                                        *(unsigned int*)(v479 + 176)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v544, v543),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v546),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v484 / 8),
                                        (unsigned int)(v484 / 8), 1),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v485 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
            v547 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v567 + 816) + 72LL))(*(_QWORD*)(v567 + 816), v467,
                                                  2),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v486 = &v471[4 * v471[18]];
            v488 = *((_QWORD*)v486 + 10);
            v487 = *((_QWORD*)v486 + 11);
            v489 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v567 + 800) + 40LL))(
                *(_QWORD*)(v567 + 800)),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v491 = v490;
            v492 = *(int*)(v558 + 80) >> v467;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v485 + 24) + 144LL)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v489, v491,
                                        *(unsigned int*)(v485 + 176)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v488, v487),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v547),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v492 / 8),
                                        (unsigned int)(v492 / 8), 1),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v493 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
            v548 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v567 + 816) + 72LL))(*(_QWORD*)(v567 + 816), v467,
                                                  3),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v494 = &v471[4 * v471[26]];
            v495 = *((_QWORD*)v494 + 15);
            v545 = *((_QWORD*)v494 + 14);
            v496 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v567 + 800) + 40LL))(
                *(_QWORD*)(v567 + 800)),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v498 = v497;
            v499 = *(int*)(v558 + 80) >> v467;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v493 + 24) + 144LL)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v496, v498,
                                        *(unsigned int*)(v493 + 176)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v545, v495),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v548),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v499 / 8),
                                        (unsigned int)(v499 / 8), 1),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v500 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
            v549 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v567 + 816) + 72LL))(*(_QWORD*)(v567 + 816), v467,
                                                  4),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v501 = &v471[4 * v471[34]];
            v502 = *((_QWORD*)v501 + 18);
            v503 = *((_QWORD*)v501 + 19);
            v504 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v567 + 800) + 40LL))(
                *(_QWORD*)(v567 + 800)),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v506 = v505;
            v507 = *(int*)(v558 + 80) >> v467;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v500 + 24) + 144LL)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v504, v506,
                                        *(unsigned int*)(v500 + 176)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v502, v503),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v549),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v508 = v507 + 7;
            if (v507 >= 0) {
              v508 = v507;
            }
            v466 = v567;
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v508 >> 3),
                                        (unsigned int)(v508 >> 3), 1),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v509 = *(_QWORD*)(v562 + 8LL * *(int*)(v563 + 536));
            v550 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v466 + 816) + 72LL))(*(_QWORD*)(v466 + 816), v467,
                                                  5),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v510 = &v471[4 * v471[42]];
            v511 = *((_QWORD*)v510 + 22);
            v512 = *((_QWORD*)v510 + 23);
            v513 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v466 + 800) + 40LL))(
                *(_QWORD*)(v466 + 800)),
            v328 = COERCE_AS(__typeof__(v328),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v332 = COERCE_AS(__typeof__(v332),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v412 = COERCE_AS(__typeof__(v412),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v420 = COERCE_AS(__typeof__(v420),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v428 = COERCE_AS(__typeof__(v428),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v436 = COERCE_AS(__typeof__(v436),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v444 = COERCE_AS(__typeof__(v444),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v452 = COERCE_AS(__typeof__(v452),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v476 = COERCE_AS(__typeof__(v476),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v482 = COERCE_AS(__typeof__(v482),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v490 = COERCE_AS(__typeof__(v490),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v497 = COERCE_AS(__typeof__(v497),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v505 = COERCE_AS(__typeof__(v505),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v514 = COERCE_AS(__typeof__(v514),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v515 = v514;
            v516 = *(int*)(v558 + 80) >> v467;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v509 + 24) + 144LL)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v513, v515,
                                        *(unsigned int*)(v509 + 176)),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v511, v512),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v550),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v516 / 8),
                                        (unsigned int)(v516 / 8), 1),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v468 = v555 + 192;
            ++v467;
          } while (v555 != 576);
          v395 = a2;
          v14 = (__int64*)fw_memory_g_heap_manager_ptr;
          v311 = v539;
          v86 = v541;
          v455 = (void (**)(__int64, __int64))GameData_212e738,
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (*(_BYTE*)(*(_QWORD*)(v563 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2),
                v328 =
                    COERCE_AS(__typeof__(v328),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v332 =
                    COERCE_AS(__typeof__(v332),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v412 =
                    COERCE_AS(__typeof__(v412),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v420 =
                    COERCE_AS(__typeof__(v420),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v428 =
                    COERCE_AS(__typeof__(v428),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v436 =
                    COERCE_AS(__typeof__(v436),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v444 =
                    COERCE_AS(__typeof__(v444),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v452 =
                    COERCE_AS(__typeof__(v452),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v476 =
                    COERCE_AS(__typeof__(v476),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v482 =
                    COERCE_AS(__typeof__(v482),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v490 =
                    COERCE_AS(__typeof__(v490),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v497 =
                    COERCE_AS(__typeof__(v497),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v505 =
                    COERCE_AS(__typeof__(v505),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v514 =
                    COERCE_AS(__typeof__(v514),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        ++v454;
      } while (v454 != v311);
      (*v455)(*v395 + 8LL, 17);
      v517 = v538 & 3;
      if ((unsigned __int64)(v311 - 1) >= 3) {
        v518 = v537;
        v519 = v536;
        v522 = (__int64*)(v86 + 64);
        v523 = 0;
        v524 = (char*)&v568_.v568 + 1;
        do {
          if (*(v524 - 1) == 1) {
            v525 = *(v522 - 6);
            *(_BYTE*)v525 = 0;
            *(_DWORD*)(v525 + 4) = v536;
          }
          if (*v524 == 1) {
            v526 = *(v522 - 3);
            *(_BYTE*)v526 = 0;
            *(_DWORD*)(v526 + 4) = v536;
          }
          if (v524[1] == 1) {
            v527 = *v522;
            *(_BYTE*)v527 = 0;
            *(_DWORD*)(v527 + 4) = v536;
          }
          if (v524[2] == 1) {
            v528 = v522[3];
            *(_BYTE*)v528 = 0;
            *(_DWORD*)(v528 + 4) = v536;
          }
          v523 -= 4;
          v524 += 4;
          v522 += 12;
        } while (-(__int64)(v538 & 0x7FFFFFFC) != v523);
        v520 = -v523;
        if ((v538 & 3) != 0) {
          goto LABEL_492;
        }
      }
      else {
        v518 = v537;
        v519 = v536;
        v520 = 0;
        if ((v538 & 3) == 0) {
          goto LABEL_496;
        }
      LABEL_492:
        v529 = v86 + 24 * v520;
        v530 = (unsigned __int8*)&v568_.v568 + v520;
        v531 = (__int64*)(v529 + 16);
        do {
          v532 = *v530++;
          if (v532 == 1) {
            v533 = *v531;
            *(_BYTE*)v533 = 0;
            *(_DWORD*)(v533 + 4) = v519;
          }
          v531 += 3;
          --v517;
        } while (v517 != 0);
      }
    }
  LABEL_496:
    if (v518 != 0) {
      v534 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v534 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v14 + v534, v518),
          v328 = COERCE_AS(__typeof__(v328),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v332 = COERCE_AS(__typeof__(v332),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v412 = COERCE_AS(__typeof__(v412),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v420 = COERCE_AS(__typeof__(v420),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v428 = COERCE_AS(__typeof__(v428),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v436 = COERCE_AS(__typeof__(v436),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v444 = COERCE_AS(__typeof__(v444),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v452 = COERCE_AS(__typeof__(v452),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v476 = COERCE_AS(__typeof__(v476),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v482 = COERCE_AS(__typeof__(v482),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v490 = COERCE_AS(__typeof__(v490),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v497 = COERCE_AS(__typeof__(v497),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v505 = COERCE_AS(__typeof__(v505),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v514 = COERCE_AS(__typeof__(v514),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (v86 != 0) {
    v535 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v535 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v14 + v535, v86),
        v328 = COERCE_AS(__typeof__(v328),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v332 = COERCE_AS(__typeof__(v332),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v412 = COERCE_AS(__typeof__(v412),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v420 = COERCE_AS(__typeof__(v420),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v428 = COERCE_AS(__typeof__(v428),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v436 = COERCE_AS(__typeof__(v436),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v444 = COERCE_AS(__typeof__(v444),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v452 = COERCE_AS(__typeof__(v452),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v476 = COERCE_AS(__typeof__(v476),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v482 = COERCE_AS(__typeof__(v482),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v490 = COERCE_AS(__typeof__(v490),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v497 = COERCE_AS(__typeof__(v497),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v505 = COERCE_AS(__typeof__(v505),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v514 = COERCE_AS(__typeof__(v514),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

__int64 gfxa_b56ec0(__int64* a1, __int64 a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  *a1 = a2;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  *((_DWORD*)a1 + 2) = -1;
  v3 = GameHr_ad6000((__int64)"DecalOcclusion", 0xEu);
  v4 = *a1;
  *((_DWORD*)a1 + 2) = v3;
  gfx_shader_Archive_CreateShader((void*)(&v15_.v15), *(__int64**)(v4 + 13408),
                                  (__int64)"decal", 5u,
                                  (__int64)"GBufDecalOcclusion", 0x12u);
  v5 = v15_.v15;
  v6 = v15_.v16;
  v7 = a1[3];
  v15_.v15 = 0;
  v15_.v16 = 0;
  a1[2] = v5;
  a1[3] = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  GameHr_ad5280((_QWORD*)a1[2]);
  gfx_shader_Archive_CreateShader((void*)(&v15_.v15), *(__int64**)(*a1 + 13408),
                                  (__int64)"decal", 5u,
                                  (__int64)"GBufDecalOcclusion", 0x12u);
  v9 = v15_.v15;
  v10 = v15_.v16;
  v11 = a1[5];
  v15_.v15 = 0;
  v15_.v16 = 0;
  a1[4] = v9;
  a1[5] = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  v12 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = GameRoutine_ad5000((_QWORD*)a1[4], (__int64)"use_screen_quad", 0xFu, 1);
  return GameHr_ad5280(v13);
}

bool gfxa_b5ff30(__int64* a1)
{
  __int64 v1;
  _BYTE* v2;
  int v3;
  int v4;
  __int64* v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v23[2];

  v1 = a1[3];
  if (*(_BYTE*)(v1 + 96) == 1) {
    v2 = *(_BYTE**)(a1[1] + 160);
    if (v2[2201] != 0) {
      v3 = (unsigned __int8)v2[2202];
      v4 = (unsigned __int8)v2[2203];
      v5 = a1;
      if (v3 == 6) {
        v6 = 3;
      }
      else {
        v6 = 0;
      }
      if (v3 == 4) {
        v7 = 2;
      }
      else {
        v7 = v6;
      }
      if (v3 == 3) {
        v8 = 1;
      }
      else {
        v8 = v7;
      }
      if (v3 == 1) {
        v9 = 0;
      }
      else {
        v9 = v8;
      }
      if (v4 != 0) {
        v9 |= 4u;
      }
      (*(void (**)(_QWORD, __int64))GameData_212e840[0])(*(_QWORD*)(*a1 + 208),
                                                         v1 + 8LL * v9 + 104);
      v1 = v5[3];
      a1 = v5;
    }
  }
  v10 = *a1;
  v11 = *(_QWORD*)(a1[1] + 160);
  if (*(_BYTE*)(v11 + 2200) != 0) {
    v12 = *(unsigned __int8*)(v11 + 2206);
    if (v12 == 0) {
      v17 = a1;
      v18 = 1;
      v13 = 6;
      v14 = 16;
      v15 = 8;
      v16 = 20;
      goto LABEL_23;
    }
    if (v12 == 1) {
      v13 = 2;
      v14 = 32;
      v15 = 24;
      v16 = 36;
      v17 = a1;
      v18 = 0;
    LABEL_23:
      (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(v1 + v16, 0,
                                                                  1);
      (*(void (**)(__int64, __int64, _QWORD, __int64,
                   __int64))GameData_212e4b8[0])(v1 + v15, 5, v13, 1, 6);
      (*(void (**)(__int64, _QWORD, __int64, __int64, __int64,
                   _QWORD))GameData_212e848[0])(v1 + v14, 0, 1, 1, 1, v18);
      (*(void (**)(_QWORD, __int64))GameData_212e850[0])(*(_QWORD*)(v10 + 208),
                                                         v1 + v15);
      (*(void (**)(_QWORD, __int64))GameData_212e858[0])(*(_QWORD*)(v10 + 208),
                                                         v1 + v14);
      (*(void (**)(_QWORD, __int64))GameData_212e860[0])(*(_QWORD*)(v10 + 208),
                                                         v1 + v16);
      v1 = v17[3];
      v10 = *v17;
      a1 = v17;
    }
  }
  v19 = v1 + 16LL * *(int*)(v1 + 56);
  v20 = *(_QWORD*)(v19 + 72);
  v23[0] = *(_QWORD*)(v19 + 64);
  v23[1] = 0;
  v21 = ((__int64 (*)(__int64*))GameRoutine_5b28f0)(a1);
  return Resource_5c92d0(v21, v10, 0, v23, v20);
}

void gfxa_b6a300(__int64 a1, _QWORD* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  int v52;
  __int64 v53;
  __int64 v54;
  float v55;
  __int128* v56;
  __int128* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int128 v69;
  __int128 v70;
  __int128 v71;
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
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  _QWORD* v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64* v105;
  _QWORD v106[12];
  _QWORD v107[12];
  __int64 v108[12];
  struct {
    int v109;
    int v110;
    int v111;
    int v112;
    __int64 v113;
    __int16 v114;
    char v115;
    char gap347_[5];
    __int64 v116;
    __int64 v117;
  } v109_;
  struct {
    int v118;
    char gap372_[4];
    __int64 v119;
    __int64 v120;
  } v118_;
  __int64 v121;

  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v65 = COERCE_AS(__typeof__(v65),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *a3;
  v4 = a3[1];
  v5 = a3[2];
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  v109_.v115 = 0;
  *(_QWORD*)a1 = v3;
  *(_QWORD*)(a1 + 8) = v4;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 16) = v5;
  *(_QWORD*)(a1 + 24) = 0;
  v105 = (__int64*)(a1 + 80);
  v109_.v113 = 0x1400000003LL;
  v109_.v114 = 257;
  v109_.v116 = a2[45];
  v109_.v117 = *(_QWORD*)(a2[69] + 16LL);
  v109_.v109 = *(_DWORD*)(a1 + 12);
  v109_.v110 = v109_.v109;
  LODWORD(v4) = *((_DWORD*)a3 + 1);
  v109_.v111 = 1;
  v109_.v112 = v4;
  GameRoutine_53c20((void*)(v108), (__int64)&v109_.v109),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v65 = COERCE_AS(__typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v108[0];
  v8 = *(_QWORD*)(a1 + 24);
  v108[0] = 0;
  *(_QWORD*)(a1 + 24) = v7;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = v108[0];
    v108[0] = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v109_.v109 = *(_DWORD*)(a1 + 16);
  v109_.v110 = v109_.v109;
  v10 = *(_DWORD*)a1;
  v109_.v112 = *(_DWORD*)(a1 + 4);
  if (v10 < 1) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v109_.v109 = *(_DWORD*)(a1 + 20);
      v109_.v110 = v109_.v109;
      v109_.v112 = 1;
    }
  }
  else {
    v11 = 0;
    do {
      GameRoutine_53c20((void*)(v108), (__int64)&v109_.v109),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v14 = *(__int64**)(a1 + 64);
      v13 = *(_QWORD*)(a1 + 72);
      if ((unsigned __int64)v14 >= v13) {
        v17 = *(_QWORD*)(a1 + 56);
        v18 = (unsigned __int64)v14 - v17;
        v19 = ((__int64)v14 - v17) >> 3;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
        LABEL_91:
          GameRoutine_b6aee0(),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v21 = v13 - v17;
        if (v21 >> 2 > v20) {
          v20 = v21 >> 2;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
          LABEL_90:
            GameRoutine_60a210_alt1(),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v23 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v23 = 0;
        }
        v24 = v108[0];
        v25 = v23 + 8 * v22;
        v108[0] = 0;
        v26 = v23 + v18 - 8 * v19;
        *(_QWORD*)(v23 + v18) = v24;
        v16 = v23 + v18 + 8;
        memcpy_alt1(v26, v17, v18),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 56) = v26;
        *(_QWORD*)(a1 + 64) = v16;
        *(_QWORD*)(a1 + 72) = v25;
        if (v17 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v17),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        v15 = v108[0];
        v108[0] = 0;
        *v14 = v15;
        v16 = (__int64)(v14 + 1);
      }
      v28 = v108[0];
      *(_QWORD*)(a1 + 64) = v16;
      v108[0] = 0;
      if (v28 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v12 = *(_DWORD*)a1;
      ++v11;
    } while (v11 < (signed __int32)*(_DWORD*)a1);
    if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
      v109_.v109 = *(_DWORD*)(a1 + 20);
      v109_.v110 = v109_.v109;
      v109_.v112 = 1;
      if (v12 >= 1) {
        v29 = 0;
        do {
          GameRoutine_53c20((void*)(v108), (__int64)&v109_.v109),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v31 = *(__int64**)(a1 + 40);
          v30 = *(_QWORD*)(a1 + 48);
          if ((unsigned __int64)v31 >= v30) {
            v34 = *(_QWORD*)(a1 + 32);
            v35 = (unsigned __int64)v31 - v34;
            v36 = ((__int64)v31 - v34) >> 3;
            v37 = v36 + 1;
            if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
              goto LABEL_91;
            }
            v38 = v30 - v34;
            if (v38 >> 2 > v37) {
              v37 = v38 >> 2;
            }
            if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
              v39 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v39 = v37;
            }
            if (v39 != 0) {
              if (v39 >> 61 != 0) {
                goto LABEL_90;
              }
              v40 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v40 = 0;
            }
            v41 = v108[0];
            v42 = v40 + 8 * v39;
            v108[0] = 0;
            v43 = v40 + v35 - 8 * v36;
            *(_QWORD*)(v40 + v35) = v41;
            v33 = v40 + v35 + 8;
            memcpy_alt1(v43, v34, v35),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_QWORD*)(a1 + 32) = v43;
            *(_QWORD*)(a1 + 40) = v33;
            *(_QWORD*)(a1 + 48) = v42;
            if (v34 != 0) {
              v44 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v44 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v34),
                  v62 = COERCE_AS(
                      __typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v65 = COERCE_AS(
                      __typeof__(v65),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            v32 = v108[0];
            v108[0] = 0;
            *v31 = v32;
            v33 = (__int64)(v31 + 1);
          }
          v45 = v108[0];
          *(_QWORD*)(a1 + 40) = v33;
          v108[0] = 0;
          if (v45 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          ++v29;
        } while (v29 < (signed __int32)*(_DWORD*)a1);
      }
    }
  }
  v46 = *(_QWORD*)(a1 + 80);
  v47 = *(_QWORD**)(a1 + 88);
  v48 = 6LL * *(int*)(a1 + 4);
  v49 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v47 - v46) >> 3);
  v50 = v48 - v49;
  if (v48 <= v49) {
    if (v48 < v49) {
      v51 = (_QWORD*)(v46 + 336LL * *(int*)(a1 + 4));
      while (v47 != v51) {
        v82 = *(v47 - 6);
        *(v47 - 6) = 0;
        if (v82 != 0) {
          (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v82 + 8LL))(v82,
                                                                         v50),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v84 = *(v47 - 7);
        v47 -= 7;
        v83 = v84;
        *v47 = 0;
        if (v84 != 0) {
          (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v83 + 8LL))(v83,
                                                                         v50),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      *(_QWORD*)(a1 + 88) = v51;
    }
  }
  else {
    gfxa_b447c0((__int64)v105, v50),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *(_OWORD*)&v108[4] = GameData_1a82dd0;
  *(_OWORD*)&v108[6] = GameData_1a82dd0;
  *(_OWORD*)&v108[8] = GameData_1a82dd0;
  *(_OWORD*)&v108[10] = GameData_1a82d00;
  *(_OWORD*)v108 = GameData_1a83090;
  *(_OWORD*)&v108[2] = GameData_1a82c50;
  *(_OWORD*)v107 = GameData_1a82fa0;
  *(_OWORD*)&v107[2] = GameData_1a82fa0;
  *(_OWORD*)&v107[4] = GameData_1a82c50;
  *(_OWORD*)&v107[6] = GameData_1a83090;
  *(_OWORD*)v106 = GameData_1a830c0;
  *(_OWORD*)&v106[2] = GameData_1a82a70;
  *(_OWORD*)&v106[4] = GameData_1a82a70;
  *(_OWORD*)&v106[6] = GameData_1a83930;
  v52 = *(_DWORD*)(a1 + 4);
  *(_OWORD*)&v106[8] = GameData_1a838c0;
  *(_OWORD*)&v106[10] = GameData_1a837f0;
  *(_OWORD*)&v107[8] = GameData_1a82fa0;
  *(_OWORD*)&v107[10] = GameData_1a82fa0;
  if (v52 >= 1) {
    v53 = 0;
    v54 = 0;
    do {
      v55 = (float)(unsigned int)v54;
      v56 = (__int128*)v106;
      v57 = (__int128*)v107;
      v58 = v108;
      v59 = 0;
      v103 = v54;
      do {
        v118_.v118 = 3;
        v72 = *v105;
        v73 = a2[39];
        v74 = *(_QWORD*)(a2[69] + 16LL);
        v75 = *v105 + v53;
        v118_.v119 = 48;
        v118_.v120 = v73;
        GameRoutine_53bd0((void*)(&v121), (__int64)&v118_.v118),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v76 = v121;
        v121 = 0;
        v77 = *(_QWORD*)(v75 + v59);
        *(_QWORD*)(v75 + v59) = v76;
        if (v77 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v77 + 8LL))(v77),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v78 = v121;
          v121 = 0;
          if (v78 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v78 + 8LL))(v78),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        GameRoutine_53bd0((void*)(&v121), (__int64)&v118_.v118),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v79 = v121;
        v121 = 0;
        v80 = *(_QWORD*)(v75 + v59 + 8);
        *(_QWORD*)(v75 + v59 + 8) = v79;
        if (v80 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v80 + 8LL))(v80),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v81 = v121;
          v121 = 0;
          if (v81 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v81 + 8LL))(v81),
                v62 =
                    COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v65 =
                    COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v60 = v72 + v53 + v59;
        v61 = (*(__int64 (**)(__int64))(*(_QWORD*)v74 + 80LL))(v74),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v60 + 32) = v62;
        v63 = *(_QWORD*)(v75 + v59);
        *(_QWORD*)(v60 + 24) = v61;
        GameRoutine_5de60((_QWORD*)(v60 + 24), v63),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v64 = (*(__int64 (**)(__int64))(*(_QWORD*)v74 + 80LL))(v74),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v60 + 48) = v65;
        v66 = *(_QWORD*)(v75 + v59 + 8);
        *(_QWORD*)(v60 + 40) = v64;
        GameRoutine_5de60((_QWORD*)(v60 + 40), v66),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v67 = *(_QWORD*)(v60 + 8LL * *(int*)(v60 + 16));
        v68 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 56LL))(v67),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v65 = COERCE_AS(__typeof__(v65),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v69 = *(_OWORD*)v58;
        v58 += 2;
        *(float*)(v68 + 12) = v55;
        *(_QWORD*)v68 = v69;
        *(_DWORD*)(v68 + 8) = DWORD2(v69);
        v70 = *v57++;
        *(_QWORD*)(v68 + 16) = v70;
        *(_DWORD*)(v68 + 24) = DWORD2(v70);
        v71 = *v56++;
        *(_QWORD*)(v68 + 32) = v71;
        *(_DWORD*)(v68 + 40) = DWORD2(v71);
        *(float*)(v68 + 28) = (float)*(int*)(a1 + 12);
        *(float*)(v68 + 44) = v55 / (float)(*(_DWORD*)(a1 + 4) - 1);
        (*(void (**)(__int64))(*(_QWORD*)v67 + 64LL))(v67),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v59 += 56;
      } while (v59 != 336);
      v53 += 336;
      v54 = v103 + 1;
    } while (v103 + 1 < *(int*)(a1 + 4));
  }
  v85 = *(_QWORD*)(a1 + 80);
  v86 = *(_QWORD*)(a1 + 88);
  if (v85 != v86) {
    v87 = *(_QWORD**)(a1 + 112);
    do {
      v88 = v85 + 16LL * *(int*)(v85 + 16);
      v90 = *(_QWORD*)(v88 + 24);
      v89 = *(_QWORD*)(v88 + 32);
      v91 = *(_QWORD*)(a1 + 120);
      if ((unsigned __int64)v87 < v91) {
        *v87 = v90;
        v87[1] = v89;
        v87 += 2;
      }
      else {
        v92 = *(_QWORD*)(a1 + 104);
        v93 = (unsigned __int64)v87 - v92;
        v94 = ((__int64)v87 - v92) >> 4;
        v95 = v94 + 1;
        if ((unsigned __int64)(v94 + 1) >> 60 != 0) {
          GameRoutine_b6af00(),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v96 = v91 - v92;
        if (v96 >> 3 > v95) {
          v95 = v96 >> 3;
        }
        if ((unsigned __int64)v96 >= 0x7FFFFFFFFFFFFFF0LL) {
          v97 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v97 = v95;
        }
        if (v97 != 0) {
          if (v97 >> 60 != 0) {
            goto LABEL_90;
          }
          v98 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v97, 16, 0),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v65 = COERCE_AS(__typeof__(v65),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v98 = 0;
        }
        v99 = (_QWORD*)(v98 + v93);
        v100 = v98 + 16 * v97;
        *v99 = v90;
        v99[1] = v89;
        v101 = v98 + v93 - 16 * v94;
        v87 = (_QWORD*)(v98 + v93 + 16);
        memcpy_alt1(v101, v92, v93),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v65 = COERCE_AS(__typeof__(v65),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 104) = v101;
        *(_QWORD*)(a1 + 112) = v87;
        *(_QWORD*)(a1 + 120) = v100;
        if (v92 != 0) {
          v102 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v102 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v102, v92),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v65 = COERCE_AS(__typeof__(v65),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v85 += 56;
      *(_QWORD*)(a1 + 112) = v87;
    } while (v85 != v86);
  }
}

__attribute__((swiftcall)) void gfxa_b722e0(PSEUDO_X8 x8_, __int64 a1, int* a2)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 i;
  _BYTE* v7;
  unsigned __int64 v8;
  char v9;
  char v10;
  char v11;
  char v12;
  char v13;
  __int64 v14;
  __int128 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int128 v19;
  char v20;
  bool v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int128 v41;
  int v42;
  char v43;
  int v44;
  __int64 v45;
  float result;
  float v47;
  float v48;
  char v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;

  *(_QWORD*)(a3 + 16) = 0;
  *(_QWORD*)(a3 + 24) = 0;
  *(_QWORD*)a3 = 0;
  *(_QWORD*)(a3 + 8) = 0;
  *(_QWORD*)(a3 + 32) = 1063675494;
  *(_QWORD*)(a3 + 40) = 0x3F80000041C80000LL;
  memset_alt1(a3 + 48, 0, 0x404u);
  *(_BYTE*)(a3 + 1096) = 0;
  *(_DWORD*)(a3 + 1100) = 0;
  *(_BYTE*)(a3 + 1104) = 0;
  *(_QWORD*)(a3 + 1080) = 0xBF80000040000000LL;
  *(_QWORD*)(a3 + 1088) = 3212836864LL;
  if (a2 != nullptr && *((_BYTE*)a2 + 136) == 1) {
    for (i = 0; i != 1024; i += 4LL) {
      v7 = (_BYTE*)(a3 + i);
      v8 = *(_QWORD*)&a2[2 * (i >> 6) + 2];
      if (((v8 >> (i & 0x3C)) & 1) != 0) {
        v9 = 0;
      }
      else {
        v9 = -1;
      }
      v7[52] = v9;
      if (((v8 >> ((i + 1) & 0x3D)) & 1) != 0) {
        v10 = 0;
      }
      else {
        v10 = -1;
      }
      v7[53] = v10;
      if (((v8 >> ((i + 2) & 0x3E)) & 1) != 0) {
        v11 = 0;
      }
      else {
        v11 = -1;
      }
      v7[54] = v11;
      v12 = i + 3;
      if (((v8 >> v12) & 1) != 0) {
        v13 = 0;
      }
      else {
        v13 = -1;
      }
      v7[55] = v13;
    }
    v14 = 120;
    if (*(_BYTE*)(a1 + 90) != 0) {
      v14 = 89;
    }
    if ((*(_BYTE*)(a1 + v14) & 1) == 0) {
      v32 = *((_QWORD*)a2 + 19);
      v33 = *((_QWORD*)a2 + 20);
      v34 = *((float*)a2 + 42);
      *(_QWORD*)a3 = *((_QWORD*)a2 + 18);
      *(_QWORD*)(a3 + 8) = v32;
      if (*(float*)&v33 <= 0x1.4b5dcc0000000p-5f) {
        v35 = *((float*)&v33 + 1);
        v54 = *(float*)&v33 / 0x1.9d70a40000000p+3f;
      }
      else {
        v52 = *((float*)&v33 + 1);
        v54 = powf((float)(*(float*)&v33 + 0x1.c28f5c0000000p-5f) /
                       0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v35 = v52;
      }
      if (v35 <= 0x1.4b5dcc0000000p-5f) {
        v39 = v35 / 0x1.9d70a40000000p+3f;
      }
      else {
        v39 = powf((float)(v35 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
      }
      if (v34 <= 0x1.4b5dcc0000000p-5f) {
        v40 = v34 / 0x1.9d70a40000000p+3f;
      }
      else {
        v50 = v39;
        v40 = powf((float)(v34 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v39 = v50;
      }
      *(_QWORD*)(a3 + 36) = *((_QWORD*)a2 + 22);
      *(_QWORD*)&v41 = __PAIR64__(LODWORD(v39), LODWORD(v54));
      v42 = a2[43];
      *(_BYTE*)(a3 + 1096) = *((_BYTE*)a2 + 192);
      v43 = *((_BYTE*)a2 + 193);
      *(_DWORD*)(a3 + 32) = v42;
      *(_BYTE*)(a3 + 1104) = v43;
      *((_QWORD*)&v41 + 1) = LODWORD(v40);
      v44 = *a2;
      *(_OWORD*)(a3 + 16) = v41;
      *(_DWORD*)(a3 + 44) = v44;
      LODWORD(v41) = a2[47];
      *(_DWORD*)(a3 + 1080) = a2[46];
      *(_DWORD*)(a3 + 1100) = v41;
      goto LABEL_57;
    }
    if (*(_BYTE*)(a1 + 352) == 1) {
      v15 = *(_OWORD*)(a1 + 336);
    }
    else {
      v36 = *((_QWORD*)a2 + 20);
      v37 = *((float*)a2 + 42);
      if (*(float*)&v36 <= 0x1.4b5dcc0000000p-5f) {
        LODWORD(v38) = HIDWORD(*((_QWORD*)a2 + 20));
        v55 = *(float*)&v36 / 0x1.9d70a40000000p+3f;
      }
      else {
        LODWORD(v53) = HIDWORD(*((_QWORD*)a2 + 20));
        v55 = powf((float)(*(float*)&v36 + 0x1.c28f5c0000000p-5f) /
                       0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v38 = v53;
      }
      if (v38 <= 0x1.4b5dcc0000000p-5f) {
        v47 = v38 / 0x1.9d70a40000000p+3f;
      }
      else {
        v47 = powf((float)(v38 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
      }
      if (v37 <= 0x1.4b5dcc0000000p-5f) {
        v48 = v37 / 0x1.9d70a40000000p+3f;
      }
      else {
        v51 = v47;
        v48 = powf((float)(v37 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v47 = v51;
      }
      *(_QWORD*)&v15 = __PAIR64__(LODWORD(v47), LODWORD(v55));
      *((_QWORD*)&v15 + 1) = LODWORD(v48);
    }
    v49 = *(_BYTE*)(a1 + 456);
    *(_OWORD*)(a3 + 16) = v15;
    if ((v49 & 1) == 0) {
      v23 = a2[43];
      v17 = 1;
    LABEL_31:
      v24 = *(unsigned __int8*)(a1 + 536);
      *(_DWORD*)(a3 + 32) = v23;
      if (v17 == 0 || v24 != 0) {
        v21 = v24 == 0;
        v26 = 568;
        if (!v21) {
          v26 = 532;
        }
        v25 = *(_DWORD*)(a1 + v26);
      }
      else {
        v25 = a2[44];
      }
      v27 = *(unsigned __int8*)(a1 + 616);
      *(_DWORD*)(a3 + 36) = v25;
      if ((v17 & (v27 ^ 1)) == 1) {
        v28 = a2[45];
      }
      else {
        v29 = 648;
        if (v27 != 0) {
          v29 = 612;
        }
        v28 = *(_DWORD*)(a1 + v29);
      }
      v30 = *(unsigned __int8*)(a1 + 248);
      *(_DWORD*)(a3 + 40) = v28;
      *(_DWORD*)(a3 + 48) = 0;
      v21 = v30 == 0;
      v31 = 280;
      if (!v21) {
        v31 = 244;
      }
      *(_DWORD*)(a3 + 1080) = *(_DWORD*)(a1 + v31);
      goto LABEL_57;
    }
    v20 = 1;
    v17 = 1;
  LABEL_28:
    v21 = (v20 & 1) == 0;
    v22 = 488;
    if (!v21) {
      v22 = 452;
    }
    v23 = *(_DWORD*)(a1 + v22);
    goto LABEL_31;
  }
  v16 = 120;
  if (*(_BYTE*)(a1 + 90) != 0) {
    v16 = 89;
  }
  if ((*(_BYTE*)(a1 + v16) & 1) != 0) {
    v17 = 0;
    v18 = 400;
    if (*(_BYTE*)(a1 + 352) != 0) {
      v18 = 336;
    }
    v19 = *(_OWORD*)(a1 + v18);
    v20 = *(_BYTE*)(a1 + 456);
    *(_OWORD*)(a3 + 16) = v19;
    goto LABEL_28;
  }
LABEL_57:
  v45 = 200;
  if (*(_BYTE*)(a1 + 168) != 0) {
    v45 = 164;
  }
  result = *(float*)(a1 + v45);
  *(float*)(a3 + 1076) = result;
  {
    result;
    return;
  }
}

__int64 gfxa_b77270(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  struct {
    _QWORD v10[3];
    __int16 v11;
    char v12;
    char gap27_[5];
    __int64 v13;
    __int64 v14;
  } v10_;
  __int64 v15;

  v3 = *a3;
  *(_QWORD*)(a1 + 16) = 0;
  *(_WORD*)(a1 + 24) = 0;
  v10_.v12 = 0;
  v10_.v10[1] = 0x100000001LL;
  v10_.v10[2] = 0x1400000000LL;
  v10_.v11 = 257;
  *(_QWORD*)a1 = v3;
  *(_QWORD*)(a1 + 8) = 0;
  v10_.v13 = *(_QWORD*)(a2 + 360);
  v10_.v14 = *(_QWORD*)(*(_QWORD*)(a2 + 552) + 16LL);
  v10_.v10[0] = v3;
  GameRoutine_53c20((void*)(&v15), (__int64)v10_.v10);
  v5 = v15;
  v6 = *(_QWORD*)(a1 + 8);
  v15 = 0;
  *(_QWORD*)(a1 + 8) = v5;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    v7 = v15;
    v15 = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
  }
  GameRoutine_53c20((void*)(&v15), (__int64)v10_.v10);
  v8 = v15;
  result = *(_QWORD*)(a1 + 16);
  v15 = 0;
  *(_QWORD*)(a1 + 16) = v8;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v15;
    v15 = 0;
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  return result;
}

__int64 gfxa_b89070(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int8x16_t* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  int8x16_t v33;
  unsigned __int64 v34;
  __int64 v35;
  int8x16_t v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 result;

  *(_QWORD*)a1 = a2;
  *(_QWORD*)(a1 + 8) = *a3;
  v5 = a3[1];
  *(_QWORD*)(a1 + 16) = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 24) = *a4;
  v6 = a4[1];
  *(_QWORD*)(a1 + 32) = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  v7 = *(_QWORD*)a1;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 40) = -1;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v9, 632, 16, 0);
  gfxa_TaskCharaDiffusion_Impl_Impl(v10, v7);
  v11 = *(_QWORD**)(a1 + 48);
  *(_QWORD*)(a1 + 48) = v10;
  if (v11 != nullptr) {
    ResourceBuilder_b51360(v11);
    v12 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v12, (__int64)v11);
  }
  v13 = *(_QWORD*)a1;
  v14 = fw_memory_HeapManager_Allocate_alt1(*v8, 288, 16, 0);
  gfxa_TaskCharaSilhouette_Impl_Impl(v14, v13);
  v15 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 56) = v14;
  if (v15 != 0) {
    GameRoutine_6040f0(v15 + 160);
    GameRoutine_604050(v15 + 160);
    v16 = *(_QWORD*)(v15 + 112);
    *(_QWORD*)(v15 + 112) = 0;
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    }
    v17 = *(_QWORD*)(v15 + 104);
    *(_QWORD*)(v15 + 104) = 0;
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    }
    ResourceBuilder_b540f0(v15 + 8);
    v18 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v18, v15);
  }
  v19 = *(_QWORD*)a1;
  v20 = fw_memory_HeapManager_Allocate_alt1(*v8, 152, 16, 0);
  ResourceBuilder_b4f5e0(v20, v19);
  v21 = *(_QWORD**)(a1 + 64);
  *(_QWORD*)(a1 + 64) = v20;
  if (v21 != nullptr) {
    ResourceBuilder_b4f9e0_alt1(v21);
    v22 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v22, (__int64)v21);
  }
  v23 = *(_QWORD*)a1;
  v24 = fw_memory_HeapManager_Allocate_alt1(*v8, 160, 16, 0);
  GameRoutine_bfaa20(v24, v23);
  v25 = *(_QWORD**)(a1 + 72);
  *(_QWORD*)(a1 + 72) = v24;
  if (v25 != nullptr) {
    GameHr_bfae60(v25);
    v26 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v26, (__int64)v25);
  }
  v27 = *(_QWORD*)a1;
  v28 = fw_memory_HeapManager_Allocate_alt1(*v8, 96, 16, 0);
  *(_QWORD*)v28 = v27;
  *(_QWORD*)(v28 + 16) = 0;
  v29 = (int8x16_t*)v28;
  *(_DWORD*)(v28 + 24) = 0;
  *(_QWORD*)(v28 + 8) = 0;
  v30 = (__int64*)(v28 + 8);
  *(_QWORD*)(v28 + 32) = 0;
  *(_QWORD*)(v28 + 40) = 0;
  *(_QWORD*)(v28 + 48) = 0;
  *(_QWORD*)(v28 + 56) = 0;
  *(_QWORD*)(v28 + 80) = 1065353216;
  *(_OWORD*)(v28 + 64) = GameData_1a83550;
  DecalObject_a91100((__int64*)(v28 + 8), *(_QWORD*)(v27 + 312),
                     *(_QWORD*)(*(_QWORD*)(v27 + 552) + 16LL), 24);
  v31 = *v30;
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 56LL))(v31);
  v33 = v29[4];
  *(_QWORD*)v32 = LANES128(v33).n128_u64[0];
  *(_QWORD*)(v32 + 8) = LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0];
  *(_DWORD*)(v32 + 16) = LANES128(v29[5]).n128_u32[0];
  *(_DWORD*)(v32 + 20) = LANES128(v29[5]).n128_u32[1];
  (*(void (**)(__int64))(*(_QWORD*)v31 + 64LL))(v31);
  v34 = LANES128(v29[1]).n128_u64[0];
  v35 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v34 + 56LL))(v34);
  v36 = v29[4];
  *(_QWORD*)v35 = LANES128(v36).n128_u64[0];
  *(_QWORD*)(v35 + 8) = LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0];
  *(_DWORD*)(v35 + 16) = LANES128(v29[5]).n128_u32[0];
  *(_DWORD*)(v35 + 20) = LANES128(v29[5]).n128_u32[1];
  (*(void (**)(unsigned __int64))(*(_QWORD*)v34 + 64LL))(v34);
  v37 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 80) = v29;
  if (v37 != 0) {
    v38 = *(_QWORD*)(v37 + 16);
    *(_QWORD*)(v37 + 16) = 0;
    if (v38 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
    }
    v39 = *(_QWORD*)(v37 + 8);
    *(_QWORD*)(v37 + 8) = 0;
    if (v39 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
    }
    v40 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v40, v37);
  }
  v41 = *(_QWORD*)a1;
  v42 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v8, 304, 16, 0);
  gfxa_TaskPostCharaOutline_Impl_Impl(v42, v41);
  v43 = *(_QWORD**)(a1 + 88);
  *(_QWORD*)(a1 + 88) = v42;
  if (v43 != nullptr) {
    ResourceBuilder_b702d0(v43);
    v44 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v44, (__int64)v43);
  }
  v45 = *(_QWORD*)a1;
  v46 = fw_memory_HeapManager_Allocate_alt1(*v8, 336, 16, 0);
  gfxa_TaskPostCharaRimlight_Impl_Impl(v46, v45);
  v47 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 96) = v46;
  if (v47 != nullptr) {
    ResourceBuilder_b70b00(v47);
    v48 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v48, (__int64)v47);
  }
  v49 = *(_QWORD*)a1;
  v50 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v8, 152, 16, 0);
  gfxa_TaskCharaMask_Impl_Impl_alt1(v50, v49);
  v51 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = v50;
  if (v51 != 0) {
    GameRoutine_6040f0(v51 + 24);
    GameRoutine_604050(v51 + 24);
    v52 = *(_QWORD*)(v51 + 16);
    if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
      std___1___shared_weak_count___release_weak_alt1(v52);
    }
    v53 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v53, v51);
  }
  v54 = *(_QWORD*)a1;
  v55 = fw_memory_HeapManager_Allocate_alt1(*v8, 152, 16, 0);
  gfxa_TaskCharaDepth_Impl_Impl_alt1(v55, v54);
  v56 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = v55;
  if (v56 != 0) {
    GameRoutine_6040f0(v56 + 8);
    GameRoutine_604050(v56 + 8);
    v57 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v57, v56);
  }
  v58 = *(_QWORD*)a1;
  v59 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v8, 464, 16, 0);
  gfxa_TaskCharaSceneBuffers_Impl_Impl(v59, v58);
  v60 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a1 + 120) = v59;
  if (v60 != 0) {
    GameRoutine_6040f0(v60 + 72);
    GameRoutine_6040f0(v60 + 200);
    GameRoutine_6040f0(v60 + 328);
    GameRoutine_604050(v60 + 328);
    GameRoutine_604050(v60 + 200);
    GameRoutine_604050(v60 + 72);
    v61 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v61, v60);
  }
  v62 = GameHr_ad6000((__int64)"CharaDepth", 0xAu);
  v63 = *(_QWORD*)a1;
  *(_DWORD*)(a1 + 40) = v62;
  result = DecalObject_a91100((__int64*)(a1 + 128), *(_QWORD*)(v63 + 312),
                              *(_QWORD*)(*(_QWORD*)(v63 + 552) + 16LL), 552);
  *(_QWORD*)(*(_QWORD*)(a1 + 120) + 456LL) = a1 + 128;
  return result;
}

__int64 gfxa_18e0a40(__int64* a1, float* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  __int64 v10;
  float32x4_t v11;
  __int64 v12;
  unsigned int v13;
  float32x2_t** v14;
  float32x2_t* v15;
  long double v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  float32x4_t** v21;
  float32x4_t* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x2_t* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  float32x4_t v35;
  unsigned __int64 v36;
  float32x4_t v37;
  long double v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x2_t* v41;
  float32x4_t* v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  int8x16_t v46;
  unsigned __int64 v47;
  unsigned __int32 v48;
  unsigned __int32 v49;
  unsigned __int8 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  float v73;
  float v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _BYTE* v79;
  __int64 v80;
  __int64 v81;
  __int64 result;
  float* v83;
  __int64* v84;
  __int64 v85;
  unsigned __int32 v86;
  unsigned __int32 v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  long double v93;
  struct {
    float32x4_t v94;
    float32x4_t v95;
  } v94_;
  struct {
    float32x4_t v96;
    float32x4_t v97;
  } v96_;
  float32x4_t v98[4];
  struct {
    float32x4_t v99;
    unsigned __int64 v100;
    unsigned __int64 v101;
    unsigned __int64 v102;
    unsigned __int64 v103;
    unsigned __int64 v104;
    unsigned __int64 v105;
    char gap368_[24];
    float32x2_t** v106;
  } v99_;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v2 = *a1;
  v3 = a1[1];
  v5 = a1;
  if (*a1 != v3) {
    do {
      v6 = *(_QWORD*)(v3 - 72);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v73 =
                COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v6),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v73 =
                COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v3 -= 80;
    } while (v3 != v2);
  }
  v5[1] = v2;
  *(long double*)&v7 =
      ((long double (*)(_QWORD)) *
       (_QWORD*)(**((_QWORD**)a2 + 1) + 16LL))(*((_QWORD*)a2 + 1)),
         v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w")),
         v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v88 = v9;
  v89 = v8;
  v10 = **(_QWORD**)a2;
  v90 = v11;
  v91 = v7;
  if (*(_QWORD*)(*(_QWORD*)a2 + 8LL) != v10) {
    v12 = 0;
    v13 = 0;
    v84 = v5;
    do {
      v14 = (float32x2_t**)(v10 + 16 * v12);
      if (LANES64(*((*v14))).n64_u8[0] == 1 &&
          ((*(__int64 (**)(__int64*, _QWORD))(**((_QWORD**)a2 + 1) + 88LL))(
               *((__int64**)a2 + 1), LANES64(*((*v14))).n64_u32[1]) &
           1) != 0) {
        v15 = *v14;
        v16 = COERCE_LONG_DOUBLE(vaddq_f32(
            v88,
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v91, COERCE_FLOAT(
                                         *(_OWORD*)LANES64((*v14)[8]).n64_u64)),
                    v90, (*v14)[8], 1),
                v89, *(float32x4_t*)LANES64((*v14)[8]).n64_u64, 2)));
        LODWORD(v16) = DWORD2(v16);
        if (*((float*)&v16 + 2) >= (float)-a2[5]) {
          v17 = LANES64(v15[10]).n64_u64[0];
          if (LANES64(v15[11]).n64_u64[0] != v17) {
            v18 = 0;
            v19 = 0;
            v99_.v106 = v14;
            do {
              v21 = (float32x4_t**)(v17 + 16 * v18);
              if (LANES128(*((*v21))).n128_u8[0] == 1 &&
                  ((*(__int64 (**)(__int64*, _QWORD, long double))(
                       **((_QWORD**)a2 + 1) + 88LL))(
                       *((__int64**)a2 + 1), LANES128(*((*v21))).n128_u32[1],
                       v16) &
                   1) != 0) {
                v22 = *v21;
                v23 = LANES128((*v21)[3]).n128_u64[1];
                v99_.v102 = LANES128((*v21)[3]).n128_u64[0];
                v99_.v103 = v23;
                v24 = LANES128(v22[4]).n128_u64[1];
                v99_.v104 = LANES128(v22[4]).n128_u64[0];
                v99_.v105 = v24;
                v25 = LANES128(v22[1]).n128_u64[1];
                LANES128(v99_.v99).n128_u64[0] = LANES128(v22[1]).n128_u64[0];
                LANES128(v99_.v99).n128_u64[1] = v25;
                v27 = LANES128(v22[2]).n128_u64[0];
                v26 = LANES128(v22[2]).n128_u64[1];
                v99_.v100 = v27;
                v99_.v101 = v26;
                v28 = (*v21)[3];
                v29 = (*v21)[4];
                v30 = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v91, COERCE_FLOAT(*(_OWORD*)&(*v21)[2])),
                        v90,
                        COERCE_AS(float32x2_t, LANES128((*v21)[2]).n128_u64[0]),
                        1),
                    v89, (*v21)[2], 2);
                v98[0] = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v91, COERCE_FLOAT(*(_OWORD*)&(*v21)[1])),
                        v90,
                        COERCE_AS(float32x2_t, LANES128((*v21)[1]).n128_u64[0]),
                        1),
                    v89, (*v21)[1], 2);
                v98[1] = v30;
                v98[2] = vmlaq_laneq_f32(
                    vmlaq_lane_f32(
                        vmulq_n_f32(v91, LANES128(v28).n128_f32[0]), v90,
                        COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]), 1),
                    v89, v28, 2);
                v98[3] = vaddq_f32(
                    v88,
                    vmlaq_laneq_f32(
                        vmlaq_lane_f32(
                            vmulq_n_f32(v91, LANES128(v29).n128_f32[0]), v90,
                            COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                            1),
                        v89, v29, 2));
                v31 = (float32x2_t*)*v21;
                v32 = LANES128((*v21)[6]).n128_u64[1];
                LANES128(v96_.v97).n128_u64[0] =
                    LANES128((*v21)[6]).n128_u64[0];
                LANES128(v96_.v97).n128_u64[1] = v32;
                v34 = LANES64(v31[10]).n64_u64[0];
                v33 = LANES64(v31[11]).n64_u64[0];
                LANES128(v96_.v96).n128_u64[0] = v34;
                LANES128(v96_.v96).n128_u64[1] = v33;
                v35 = vsubq_f32(v96_.v97, v96_.v96);
                if (LANES128(v35).n128_f32[1] < LANES128(v35).n128_f32[0]) {
                  LANES128(v35).n128_f32[0] = LANES128(v35).n128_f32[1];
                }
                if (LANES128(v35).n128_f32[2] < LANES128(v35).n128_f32[0]) {
                  LANES128(v35).n128_f32[0] = LANES128(v35).n128_f32[2];
                }
                v94_.v94 = COERCE_AS(float32x4_t, GameData_1a82f20);
                v94_.v95 = COERCE_AS(float32x4_t, GameData_1a82ea0);
                v36 = COERCE_UNSIGNED_INT(LANES128(v35).n128_f32[0] *
                                          0x1.0000000000000p-1f);
                LANES128(v37).n128_u64[0] = v36 | (v36 << 32);
                LANES128(v37).n128_u64[1] = v36;
                v94_.v95 = vaddq_f32(
                    v96_.v97,
                    vmulq_n_f32(v37, LANES128((*v21)[7]).n128_f32[2]));
                v94_.v94 = vsubq_f32(
                    v96_.v96,
                    vmulq_n_f32(v37, LANES128((*v21)[7]).n128_f32[2]));
                v92 = GameRoutine_b3bca0_alt1((float*)&v96_.v96, &v99_.v99),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v73 = COERCE_AS(__typeof__(v73),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
                v9 = COERCE_AS(__typeof__(v9),
                               PSEUDO_REGISTER(__n128, "v3", "=w"));
                v93 = v38;
                v39 = GameRoutine_b3bca0_alt1((float*)&v94_.v94, v98),
                v11 = COERCE_AS(__typeof__(v11),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v38 = COERCE_AS(__typeof__(v38),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v73 = COERCE_AS(__typeof__(v73),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(__n128, "v2", "=w")),
                v9 = COERCE_AS(__typeof__(v9),
                               PSEUDO_REGISTER(__n128, "v3", "=w"));
                v41 = (float32x2_t*)*v21;
                v42 = v21[1];
                if (v42 != nullptr) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)&LANES128(*(v42)).n128_i8[8], 1u,
                      memory_order_relaxed);
                }
                LANES128(v43).n128_u64[0] = 0x3F0000003F000000LL;
                LANES128(v43).n128_u64[1] = 0x3F0000003F000000LL;
                v44 = vmulq_f32(vsubq_f32(v40, v39), v43);
                v45 = vaddq_f32(v39, v44);
                v46 = vmulq_f32(v44, v44);
                LANES128(v46).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v46, v46, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0])))
                        .n64_u64[0];
                v47 = LANES128(v45).n128_u64[0];
                v48 =
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]))))
                        .n64_u32[0];
                v49 = v48;
                v50 = LANES64((*v14)[13]).n64_u8[4];
                v51 = v5[1];
                v52 = v5[2];
                if (v51 < v52) {
                  *(_DWORD*)(v51 + 24) = LANES128(v45).n128_u32[2];
                  *(_DWORD*)(v51 + 28) = v48;
                  v16 = v93;
                  v20 = v51 + 80;
                  *(_QWORD*)v51 = v41;
                  *(_QWORD*)(v51 + 8) = v42;
                  *(_QWORD*)(v51 + 16) = v47;
                  *(_BYTE*)(v51 + 64) = v50;
                  *(float32x4_t*)(v51 + 32) = v92;
                  *(long double*)(v51 + 48) = v93;
                }
                else {
                  v53 = v51 - *v5;
                  v54 = 1 - 0x3333333333333333LL * (v53 >> 4);
                  if (v54 > 0x333333333333333LL) {
                    GameRoutine_18e1100_alt1(),
                        v11 = COERCE_AS(__typeof__(v11),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v73 = COERCE_AS(__typeof__(v73),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v9 = COERCE_AS(__typeof__(v9),
                                       PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                  v86 = LANES128(v45).n128_u32[2];
                  v87 = LANES128(v45).n128_u32[0];
                  v55 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v52 - *v5) >> 4);
                  if (2 * v55 > v54) {
                    v54 = 2 * v55;
                  }
                  if (v55 >= 0x199999999999999LL) {
                    v54 = 0x333333333333333LL;
                  }
                  if (v54 > 0x333333333333333LL) {
                    GameRoutine_60a210_alt1(),
                        v11 = COERCE_AS(__typeof__(v11),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v73 = COERCE_AS(__typeof__(v73),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v9 = COERCE_AS(__typeof__(v9),
                                       PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                  v85 = 5 * v54;
                  v56 = fw_memory_HeapManager_Allocate_alt1(
                      fw_memory_g_heap_manager, 80 * v54, 16, 0),
                  v11 = COERCE_AS(__typeof__(v11),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v40 = COERCE_AS(__typeof__(v40),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v73 = COERCE_AS(__typeof__(v73),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v9 = COERCE_AS(__typeof__(v9),
                                 PSEUDO_REGISTER(__n128, "v3", "=w"));
                  v57 = v56 + v53;
                  v58 = v5;
                  v59 = v5[1];
                  v60 = v56;
                  *(_QWORD*)v57 = v41;
                  *(_QWORD*)(v57 + 8) = v42;
                  v61 = *v58;
                  *(_BYTE*)(v57 + 64) = v50;
                  *(_DWORD*)(v57 + 24) = v86;
                  *(_DWORD*)(v57 + 28) = v49;
                  *(_DWORD*)(v57 + 16) = v87;
                  *(_DWORD*)(v57 + 20) = HIDWORD(v47);
                  v16 = v93;
                  v62 = v57 + v61 - v59;
                  *(float32x4_t*)(v57 + 32) = v92;
                  *(long double*)(v57 + 48) = v93;
                  if (v61 == v59) {
                    v5 = v84;
                  }
                  else {
                    v63 = v61;
                    v64 = v57 + v61 - v59;
                    do {
                      *(_QWORD*)v64 = *(_QWORD*)v63;
                      *(_QWORD*)(v64 + 8) = *(_QWORD*)(v63 + 8);
                      *(_QWORD*)v63 = 0;
                      *(_QWORD*)(v63 + 8) = 0;
                      v65 = *(_QWORD*)(v63 + 32);
                      v66 = *(_QWORD*)(v63 + 16);
                      *(_QWORD*)(v64 + 24) = *(_QWORD*)(v63 + 24);
                      *(_QWORD*)(v64 + 32) = v65;
                      *(_QWORD*)(v64 + 16) = v66;
                      v68 = *(_QWORD*)(v63 + 48);
                      v67 = *(_QWORD*)(v63 + 56);
                      v69 = *(_BYTE*)(v63 + 64);
                      v70 = *(_QWORD*)(v63 + 40);
                      v63 += 80;
                      *(_BYTE*)(v64 + 64) = v69;
                      *(_QWORD*)(v64 + 48) = v68;
                      *(_QWORD*)(v64 + 56) = v67;
                      *(_QWORD*)(v64 + 40) = v70;
                      v64 += 80;
                    } while (v63 != v59);
                    do {
                      v71 = *(_QWORD*)(v61 + 8);
                      if (v71 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
                        (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71),
                            v11 =
                                COERCE_AS(__typeof__(v11),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v38 =
                                COERCE_AS(__typeof__(v38),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v73 = COERCE_AS(__typeof__(v73),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v8 = COERCE_AS(__typeof__(v8),
                                           PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v9 = COERCE_AS(__typeof__(v9),
                                           PSEUDO_REGISTER(__n128, "v3", "=w"));
                        std___1___shared_weak_count___release_weak_alt1(v71),
                            v11 =
                                COERCE_AS(__typeof__(v11),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v38 =
                                COERCE_AS(__typeof__(v38),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v40 =
                                COERCE_AS(__typeof__(v40),
                                          PSEUDO_REGISTER(__n128, "v1", "=w")),
                            v73 = COERCE_AS(__typeof__(v73),
                                            PSEUDO_REGISTER(float, "s0", "=w")),
                            v8 = COERCE_AS(__typeof__(v8),
                                           PSEUDO_REGISTER(__n128, "v2", "=w")),
                            v9 = COERCE_AS(__typeof__(v9),
                                           PSEUDO_REGISTER(__n128, "v3", "=w"));
                      }
                      v61 += 80;
                    } while (v61 != v59);
                    v5 = v84;
                    v61 = *v84;
                  }
                  v20 = v57 + 80;
                  *v5 = v62;
                  v5[1] = v20;
                  v5[2] = v60 + 16 * v85;
                  if (v61 != 0) {
                    v72 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v72 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v61),
                        v11 = COERCE_AS(__typeof__(v11),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v38 = COERCE_AS(__typeof__(v38),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v40 = COERCE_AS(__typeof__(v40),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v73 = COERCE_AS(__typeof__(v73),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v9 = COERCE_AS(__typeof__(v9),
                                       PSEUDO_REGISTER(__n128, "v3", "=w"));
                  }
                }
                v5[1] = v20;
                v14 = v99_.v106;
              }
              v17 = LANES64(v15[10]).n64_u64[0];
              v18 = ++v19;
            } while (v19 <
                     (unsigned __int64)((__int64)(LANES64(v15[11]).n64_u64[0] -
                                                  v17) >>
                                        4));
          }
        }
      }
      v12 = ++v13;
      v10 = **(_QWORD**)a2;
    } while (v13 <
             (unsigned __int64)((*(_QWORD*)(*(_QWORD*)a2 + 8LL) - v10) >> 4));
  }
  (*(void (**)(__int64*))(**((_QWORD**)a2 + 1) + 64LL))(*((__int64**)a2 + 1)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (0xCCCCCCCCCCCCCCCDLL * ((v5[1] - *v5) >> 4) > *((int*)a2 + 4)) {
    v74 = -v73;
    v75 = (_QWORD*)(*(__int64 (**)(__int64*))(**((_QWORD**)a2 + 1) + 112LL))(
        *((__int64**)a2 + 1)),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w")),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v76 = v75[1];
    v77 = v76;
    while (v77 != *v75) {
      v78 = *(_QWORD*)(v77 - 24);
      v77 -= 24;
      v76 -= 24;
      if (*(char**)(v78 + 8) == GameData_21323c0) {
        if (v75[1] != v76) {
          v79 = *(_BYTE**)(v76 + 16);
          goto LABEL_55;
        }
        break;
      }
    }
    v79 = nullptr;
  LABEL_55:
    v80 = *v5;
    v81 = v5[1];
    if (*v5 != v81) {
      if (v79 != nullptr) {
        do {
          if (*(_BYTE*)(v80 + 64) == 1 && *(int*)(*(_QWORD*)v80 + 124LL) > 4 ||
              v79[8] == 1 && ((*(__int64 (**)(_BYTE*, __int64))(
                                  *(_QWORD*)v79 + 24LL))(v79, v80 + 32) &
                              1) == 0) {
            *(float*)(v80 + 24) = v74;
          }
          v80 += 80;
        } while (v80 != v81);
      }
      else {
        do {
          if (*(_BYTE*)(v80 + 64) == 1 && *(int*)(*(_QWORD*)v80 + 124LL) >= 5) {
            *(float*)(v80 + 24) = v74;
          }
          v80 += 80;
        } while (v80 != v81);
      }
    }
  }
  result = *v5;
  v83 = (float*)v5[1];
  if ((float*)*v5 != v83) {
    return GameHr_18e1120(
        result, v83,
        (2 * __clz(0xCCCCCCCCCCCCCCCDLL * (((__int64)v83 - result) >> 4))) ^
            0x7E,
        1);
  }
  return result;
}

#pragma GCC visibility pop
