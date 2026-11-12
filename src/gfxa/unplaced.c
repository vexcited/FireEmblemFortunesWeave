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
__int64 gfxa_b40ac0(__int64 result, _QWORD* a2, long double a3, __int64 a4,
                    __int64 a5, __int64 a6, __int64 a7);
__int64 gfxa_b56ec0(__int64* a1, __int64 a2);
bool gfxa_b5ff30(__int64* a1);
__int64* gfxa_b6a300(__int64 a1, _QWORD* a2, __int64* a3);
__attribute__((swiftcall)) void gfxa_b722e0(PSEUDO_X8 x8_, __int64 a1, int* a2,
                                            __int64 unused_int2, __int64 a3,
                                            __int64 a4, __int64 a5);
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
  GameRoutine_647d00(v4, 1, (__int64)"PreparationLitCl", 0x10u,
                     (__int64)v37_.v37, 1, 0, 0);
  v35_.v35[0] = "RootCl";
  v35_.v35[1] = 6;
  v35_.v36 = 1;
  GameRoutine_647d00(v4, 0, (__int64)"GraphicsCl", 0xAu, (__int64)v35_.v35, 2,
                     0, 0);
  v33_.v33[0] = "RootCl";
  v33_.v33[1] = 6;
  v33_.v34 = 1;
  GameRoutine_647d00(v4, 1, (__int64)"DLSSCl", 6u, (__int64)v33_.v33, 3,
                     0x1000000, 1);
  v31_.v31[0] = "RootCl";
  v31_.v31[1] = 6;
  v31_.v32 = 1;
  GameRoutine_647d00(v4, 0, (__int64)"GraphicsCl2", 0xBu, (__int64)v31_.v31, 4,
                     0, 0);
  v29_.v29[0] = "GraphicsCl2";
  v29_.v29[1] = 11;
  v29_.v30 = 1;
  GameRoutine_647d00(v4, 0, (__int64)"RootCl2", 7u, (__int64)v29_.v29, 5, 0, 0);
  GameRoutine_a96350();
  gfxa_aa2110();
  gfxa_a96c40();
  GameRoutine_19a5c60();
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
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"Assign", 6u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"base", 4u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"Chara_Dress", 0xBu);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"Chara_Skin", 0xAu);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"Chara_Others", 0xCu);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"decal", 5u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"effect", 6u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"face", 4u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"filter", 6u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"map", 3u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"ui", 2u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"Lighting", 8u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"Probe", 5u);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"ImageProcessing", 0xFu);
  GameRoutine_ad0e40(*(float**)(*v0 + 13408), (__int64)"primitive", 9u);
  v7 = *v0;
  LODWORD(v25) = 0;
  LOBYTE(v26_.v26[0]) = 8;
  LODWORD(v26_.v28) = 0;
  v8 = *(_QWORD*)(v7 + 13416);
  strcpy((char*)v26_.v26 + 1, "None");
  GameRoutine_be2400((float*)(v8 + 64), (unsigned int*)&v25, (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  v10 = *v0;
  LOBYTE(v26_.v26[0]) = 14;
  LODWORD(v25) = 1;
  LODWORD(v26_.v28) = 1;
  strcpy((char*)v26_.v26 + 1, "Default");
  GameRoutine_be2400((float*)(*(_QWORD*)(v10 + 13416) + 64LL),
                     (unsigned int*)&v25, (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  v12 = *v0;
  LOBYTE(v26_.v26[0]) = 8;
  LODWORD(v25) = 2;
  LODWORD(v26_.v28) = 2;
  strcpy((char*)v26_.v26 + 1, "High");
  GameRoutine_be2400((float*)(*(_QWORD*)(v12 + 13416) + 64LL),
                     (unsigned int*)&v25, (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  v14 = *v0;
  LODWORD(v26_.v28) = 0;
  LOBYTE(v26_.v26[0]) = 6;
  LODWORD(v25) = 3;
  *(_DWORD*)((char*)v26_.v26 + 1) = 7827276;
  GameRoutine_be2400((float*)(*(_QWORD*)(v14 + 13416) + 64LL),
                     (unsigned int*)&v25, (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  v16 = *v0;
  LODWORD(v26_.v28) = 3;
  LOBYTE(v26_.v26[0]) = 16;
  LODWORD(v25) = 4;
  v17 = *(_QWORD*)(v16 + 13416);
  strcpy((char*)v26_.v26 + 1, "VeryHigh");
  GameRoutine_be2400((float*)(v17 + 64), (unsigned int*)&v25, (int*)&v25);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
  }
  GameRoutine_bda630(*(_QWORD*)(*v0 + 13416), (__int64)"Base", 4u);
  GameRoutine_bda630(*(_QWORD*)(*v0 + 13416), (__int64)"Chara", 5u);
  GameRoutine_bda630(*(_QWORD*)(*v0 + 13416), (__int64)"Effect", 6u);
  GameRoutine_bda630(*(_QWORD*)(*v0 + 13416), (__int64)"Map", 3u);
  GameRoutine_a93d00(*(_QWORD*)(*v0 + 13232), (__int64)"BmapToZoom", 0xAu,
                     0x1.0000000000000p+0f);
  GameRoutine_a93d00(*(_QWORD*)(*v0 + 13232), (__int64)"DitherAlphaBeginDist",
                     0x14u, 0x1.0000000000000p+2f);
  GameRoutine_a93d00(*(_QWORD*)(*v0 + 13232), (__int64)"DitherAlphaEndDist",
                     0x12u, 0x1.8000000000000p+1f);
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"GBuffer", 7u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"ProbeGBuffer", 0xCu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"BaseForward", 0xBu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaForward", 0xCu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaForwardTransparent",
                                           0x17u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaOutline", 0xCu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaTransparentOutline",
                                           0x17u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaMask", 9u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaGmapOutlineMask",
                                           0x14u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaDepth", 0xAu)) = 2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"CharaTransparentPreDepth",
                                           0x18u)) = 2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"Forward", 7u)) = 1;
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)GameRoutine_ad6000(
                                         (__int64)"3DUIAlwaysDraw", 0xEu)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"3DUI", 4u)) = 1;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"DepthOnly", 9u)) = 2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"ShadowCaster", 0xCu)) = 3;
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)GameRoutine_ad6000(
                                         (__int64)"CharaShadowCaster", 0x11u)) =
      3;
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)GameRoutine_ad6000(
                                         (__int64)"LocalShadowCaster", 0x11u)) =
      4;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"LocalOmniShadowCaster",
                                           0x15u)) = 4;
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)GameRoutine_ad6000(
                                         (__int64)"SelfShadowCaster", 0x10u)) =
      5;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"SSR", 3u)) = 1;
  *(_DWORD*)(g3d_g_passKinds + 4LL * (int)GameRoutine_ad6000(
                                         (__int64)"TranslucencyDepth", 0x11u)) =
      2;
  *(_DWORD*)(g3d_g_passKinds +
             4LL * (int)GameRoutine_ad6000((__int64)"MeshFog", 7u)) = 1;
  result = GameRoutine_ad6000((__int64)"DepthAndGBuffer", 0xFu);
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

__int64 gfxa_b40ac0(__int64 result, _QWORD* a2, long double a3, __int64 a4,
                    __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  _QWORD* v11;
  int v12;
  _QWORD* v13;
  _QWORD* v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64* v25;
  __int64* v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  float32x4_t v32;
  _BYTE* v33;
  float32x4_t v34;
  float32x4_t v35;
  unsigned __int64 v36;
  float32x4_t v37;
  float32x4_t v38;
  unsigned __int64 v39;
  float32x4_t v40;
  __int64 v41;
  int v42;
  __int64* v43;
  __int64* v44;
  int v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  float32x4_t v50;
  unsigned __int64 v51;
  __int64 v52;
  _QWORD* v53;
  float32x4_t v54;
  signed __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  int v69;
  _QWORD* v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  float32x4_t* v93;
  __int64 v94;
  _QWORD* v95;
  _QWORD* v96;
  __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  int v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  int16x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  int16x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  _QWORD* v122;
  _QWORD* v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  _QWORD* v128;
  unsigned __int64 v129;
  int v130;
  int v131;
  int v132;
  int v133;
  int v134;
  __int64 v135;
  unsigned __int64 v136;
  _QWORD* v137;
  __int64 i;
  int v139;
  __int64 v140;
  __int64 v141;
  _QWORD* v142;
  int v143;
  bool v144;
  __int64 v145;
  int v146;
  _QWORD* v147;
  __int64 v148;
  __int64 v149;
  __int64* v150;
  int v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64* v156;
  __int64 v157;
  __int64* v158;
  __int64** v159;
  __int64* v160;
  __int64 v161;
  __int64 v162;
  __int64* v163;
  __int64 v164;
  __int64** v165;
  __int64 v166;
  __int64** v167;
  __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  unsigned __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  __int64 v176;
  int v177;
  __int64 v178;
  _BYTE** v179;
  __int64* v180;
  __int64 v181;
  int v182;
  char* v183;
  char* v184;
  unsigned __int64 v185;
  _BYTE* v186;
  _BYTE* v187;
  __int64 v188;
  char* v189;
  __int64 v190;
  unsigned __int64 v191;
  unsigned __int64 v192;
  char* v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  char* v197;
  long double v198;
  __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  char* v202;
  unsigned __int64 v203;
  char* v204;
  int v205;
  __int64 v206;
  bool v207;
  __int64 v208;
  int v209;
  int v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  _QWORD* v216;
  __int64 v217;
  int8x16_t v218;
  int8x16_t v219;
  int8x16_t v220;
  unsigned __int32 v221;
  float32x4_t v222;
  float v223;
  unsigned int v224;
  float v225;
  int8x16_t v226;
  float v227;
  __int64 v228;
  float v229;
  float v230;
  int8x16_t v231;
  float v232;
  float32x4_t v233;
  __int64 v234;
  float32x4_t v235;
  unsigned __int64 v236;
  __int64 v237;
  float32x4_t v238;
  __int64 v239;
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
  int v263;
  int v264;
  int v265;
  int v266;
  __int64 v267;
  _DWORD* v268;
  _DWORD* v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  _QWORD* v274;
  float32x4_t v275;
  _BYTE* v276;
  __int64 v277;
  __int64 v278;
  float v279;
  __int64 v280;
  float32x4_t v281;
  float v282;
  int v283;
  float32x4_t v284;
  int8x16_t v285;
  int8x16_t v286;
  int8x16_t v287;
  unsigned __int32 v288;
  __int64 v289;
  float v290;
  float v291;
  float v292;
  int v293;
  int v294;
  float v295;
  __int64 v296;
  int v297;
  int v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  int v302;
  float32x4_t v303;
  int8x16_t v304;
  int8x16_t v305;
  int8x16_t v306;
  unsigned __int32 v307;
  __int64 v308;
  float32x4_t v309;
  float32x2_t v310;
  float v311;
  float32x4_t v312;
  __int64 v313;
  int v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  int v318;
  __int64 v319;
  _QWORD* v320;
  __int64 v321;
  _QWORD* v322;
  int v323;
  bool v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  int v329;
  __int64 v330;
  __int64 v331;
  unsigned int v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  unsigned int v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  __int64 v341;
  unsigned int v342;
  __int64 v343;
  __int64 v344;
  unsigned int v345;
  __int64 v346;
  __int64 v347;
  unsigned int v348;
  __int64 v349;
  __int64 v350;
  unsigned int v351;
  __int64 v352;
  __int64 v353;
  unsigned int v354;
  __int64 v355;
  __int64 v356;
  unsigned int v357;
  __int64 v358;
  void (**v359)(__int64, __int64);
  __int64 v360;
  int v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  int v367;
  bool v368;
  __int64 v369;
  __int64 v370;
  int v371;
  __int64 v372;
  unsigned int v373;
  __int64 v374;
  unsigned int v375;
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
  __int64 v395;
  unsigned int v396;
  __int64 v397;
  unsigned int v398;
  _QWORD* v399;
  __int64 v400;
  int v401;
  __int64 v402;
  __int64 v403;
  __int64 v404;
  __int64 v405;
  int v406;
  bool v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  unsigned int v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  unsigned int v416;
  __int64 v417;
  __int64 v418;
  unsigned int v419;
  __int64 v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  unsigned int v424;
  __int64 v425;
  __int64 v426;
  unsigned int v427;
  __int64 v428;
  __int64 v429;
  __int64 v430;
  __int64 v431;
  unsigned int v432;
  __int64 v433;
  __int64 v434;
  unsigned int v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  unsigned int v440;
  __int64 v441;
  __int64 v442;
  unsigned int v443;
  __int64 v444;
  __int64 v445;
  __int64 v446;
  __int64 v447;
  unsigned int v448;
  __int64 v449;
  __int64 v450;
  unsigned int v451;
  __int64 v452;
  __int64 v453;
  __int64 v454;
  __int64 v455;
  unsigned int v456;
  __int64 v457;
  __int64 v458;
  __int64 (**v459)(__int64, __int64);
  __int64 v460;
  int v461;
  __int64 v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  int v467;
  bool v468;
  __int64 v469;
  __int64 v470;
  unsigned int v471;
  __int64 v472;
  __int64 v473;
  unsigned int v474;
  int* v475;
  __int64 v476;
  __int64 v477;
  __int64 v478;
  __int64 v479;
  unsigned int v480;
  __int64 v481;
  int v482;
  __int64 v483;
  int* v484;
  __int64 v485;
  unsigned int v486;
  __int64 v487;
  int v488;
  __int64 v489;
  int* v490;
  __int64 v491;
  __int64 v492;
  __int64 v493;
  unsigned int v494;
  __int64 v495;
  int v496;
  __int64 v497;
  int* v498;
  __int64 v499;
  __int64 v500;
  unsigned int v501;
  __int64 v502;
  int v503;
  __int64 v504;
  int* v505;
  __int64 v506;
  __int64 v507;
  __int64 v508;
  unsigned int v509;
  __int64 v510;
  int v511;
  int v512;
  __int64 v513;
  int* v514;
  __int64 v515;
  __int64 v516;
  __int64 v517;
  unsigned int v518;
  __int64 v519;
  int v520;
  __int64 v521;
  char* v522;
  int v523;
  __int64 v524;
  __int64 (**v525)(__int64, __int64);
  __int64* v526;
  __int64 v527;
  char* v528;
  __int64 v529;
  __int64 v530;
  __int64 v531;
  __int64 v532;
  __int64 v533;
  unsigned __int8* v534;
  __int64* v535;
  int v536;
  __int64 v537;
  __int64 v538;
  __int64 v539;
  int v540;
  char* v541;
  int v542;
  __int64 v543;
  __int64 v544;
  __int64 v545;
  __int64 v547;
  __int64 v548;
  __int64 v549;
  unsigned int v550;
  unsigned int v551;
  unsigned int v552;
  unsigned int v553;
  unsigned int v554;
  __int64* v555;
  float32x4_t v556;
  _QWORD* v557;
  int32x4_t v558;
  __int64 v559;
  _QWORD* v560;
  int8x16_t v561;
  __int64 v562;
  unsigned __int64 v563;
  float32x4_t v564;
  int8x16_t v565;
  __int64 v566;
  __int64 v567;
  unsigned __int64 v568;
  int v569;
  float32x4_t* v570;
  __int64 v571;
  __int64 v572;
  int v573;
  float32x4_t v574;
  float32x4_t v575;
  _QWORD v576[4];

  v7 = result;
  v8 = *(_QWORD*)(*(_QWORD*)(result + 32) + 288LL);
  v9 = *(_DWORD*)(v8 + 780);
  if (v9 == *(_DWORD*)(result + 432)) {
    v10 = *(_QWORD**)(result + 440);
    v11 = a2;
    if (v10 != (_QWORD*)(result + 448)) {
      do {
        if ((*(_BYTE*)(result + 540) & 1) != 0 ||
            (v12 = *((_DWORD*)v10 + 9)) <= 0) {
          *((_BYTE*)v10 + 32) = 1;
          v13 = (_QWORD*)v10[1];
          if (v13 != nullptr) {
            goto LABEL_12;
          }
        }
        else {
          if ((v10[4] & 1) == 0) {
            *((_DWORD*)v10 + 9) = v12 - 1;
          }
          v13 = (_QWORD*)v10[1];
          if (v13 != nullptr) {
            do {
            LABEL_12:
              v14 = v13;
              v13 = (_QWORD*)*v13;
            } while (v13 != nullptr);
            goto LABEL_4;
          }
        }
        do {
          v14 = (_QWORD*)v10[2];
          v15 = v10 == (_QWORD*)*v14;
          v10 = v14;
        } while (!v15);
      LABEL_4:
        v10 = v14;
      } while (v14 != (_QWORD*)(result + 448));
    }
  }
  else {
    result = Probe2UpdateTask_b47f40(*(_QWORD*)(result + 448));
    *(_QWORD*)(v7 + 440) = v7 + 448;
    v11 = a2;
    *(_QWORD*)(v7 + 448) = 0;
    *(_QWORD*)(v7 + 456) = 0;
  }
  *(_DWORD*)(v7 + 432) = v9;
  *(_BYTE*)(v7 + 540) = 0;
  v16 = 0;
  v17 = 0;
  v18 = *(_QWORD**)(v8 + 752);
  v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v560 = (_QWORD*)(v8 + 760);
  v567 = v7;
  if (v18 == (_QWORD*)(v8 + 760)) {
    v563 = 0;
    goto LABEL_85;
  }
  v20 = (__int64*)(v7 + 448);
  v563 = 0;
  a3 = *(long double*)&GameData_1a82ea0;
  do {
    v21 = v18[5];
    v22 = v16;
    if (*(_BYTE*)(v21 + 84) != 1) {
      LANES128(v32).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v32).n128_u64[1] = 0x3F0000003F000000LL;
      v33 = *(_BYTE**)(v7 + 72);
      v574 = COERCE_AS(float32x4_t, GameData_1a82f20);
      v575 = COERCE_AS(float32x4_t, GameData_1a82ea0);
      LANES128(v34).n128_u64[0] = *(_QWORD*)v21;
      LANES128(v34).n128_u64[1] = *(unsigned int*)(v21 + 8);
      LANES128(v35).n128_u64[0] = *(_QWORD*)(v21 + 12);
      v36 = *(unsigned int*)(v21 + 20);
      LANES128(v35).n128_u64[1] = v36;
      v37 = vsubq_f32(v34, vmulq_f32(v35, v32));
      LANES128(v35).n128_u64[0] = *(_QWORD*)(v21 + 24);
      LANES128(v35).n128_u64[1] = *(unsigned int*)(v21 + 32);
      v574 = vsubq_f32(v37, v35);
      LANES128(v37).n128_u64[0] = *(_QWORD*)v21;
      LANES128(v37).n128_u64[1] = *(unsigned int*)(v21 + 8);
      LANES128(v35).n128_u64[0] = *(_QWORD*)(v21 + 12);
      LANES128(v35).n128_u64[1] = v36;
      v38 = vaddq_f32(v37, vmulq_f32(v35, v32));
      LANES128(v35).n128_u64[0] = *(_QWORD*)(v21 + 36);
      LANES128(v35).n128_u64[1] = *(unsigned int*)(v21 + 44);
      v575 = vaddq_f32(v38, v35);
      if (v33[8] == 1) {
        result = (*(__int64 (**)(_BYTE*, float32x4_t*))(*(_QWORD*)v33 + 24LL))(
            v33, &v574);
        if ((result & 1) == 0) {
          goto LABEL_76;
        }
      }
      v39 = *(unsigned int*)(v21 + 8);
      v568 = *(_QWORD*)v21;
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 56) + 40LL))(
          *(_QWORD*)(v7 + 56));
      v41 = *(_QWORD*)(v7 + 448);
      v42 = *((_DWORD*)v18 + 8);
      v43 = v20;
      v44 = v20;
      if (v41 != 0) {
        while (1) {
          while (1) {
            v44 = (__int64*)v41;
            v45 = *(_DWORD*)(v41 + 28);
            if (v42 >= v45) {
              break;
            }
            v41 = *v44;
            v43 = v44;
            if (*v44 == 0) {
              goto LABEL_43;
            }
          }
          if (v45 >= v42) {
            break;
          }
          v41 = v44[1];
          if (v41 == 0) {
            v43 = v44 + 1;
            goto LABEL_43;
          }
        }
      }
      else {
      LABEL_43:
        v556 = v40;
        v46 = v44;
        v47 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        *(_DWORD*)(v47 + 28) = v42;
        *(_QWORD*)v47 = 0;
        *(_QWORD*)(v47 + 8) = 0;
        v44 = (__int64*)v47;
        v48 = v47;
        *(_QWORD*)(v47 + 16) = v46;
        *(_QWORD*)(v47 + 32) = 1;
        *v43 = v47;
        v49 = **(_QWORD**)(v567 + 440);
        if (v49 != 0) {
          *(_QWORD*)(v567 + 440) = v49;
          v48 = *v43;
        }
        result = fw_containers_BalanceAfterInsert(*(_QWORD*)(v567 + 448), v48);
        v40 = v556;
        v11 = a2;
        ++*(_QWORD*)(v567 + 456);
        v42 = *((_DWORD*)v18 + 8);
      }
      LANES128(v50).n128_u64[0] = v568;
      v51 = v39;
      v52 = v18[5];
      v53 = v44 + 4;
      LANES128(v50).n128_u64[1] = v51;
      v54 = vsubq_f32(v50, v40);
      a3 = COERCE_LONG_DOUBLE(vmulq_f32(v54, v54));
      *(float32x2_t*)&a3 = vadd_f32(
          COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&a3,
                                                      *(int8x16_t*)&a3, 8u))
                                     .n128_u64[0]),
          *(float32x2_t*)&a3);
      *(float32x2_t*)&a3 = vpadd_f32(*(float32x2_t*)&a3, *(float32x2_t*)&a3);
      if (v17 < v563) {
        *(_DWORD*)v17 = LODWORD(a3);
        *(_DWORD*)(v17 + 4) = v42;
        *(_QWORD*)(v17 + 8) = v52;
        *(_QWORD*)(v17 + 16) = v53;
        goto LABEL_48;
      }
      v55 = v17 - v22;
      v59 = 1 - 0x5555555555555555LL * ((__int64)(v17 - v22) >> 3);
      if (v59 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_507;
      }
      if (0x5555555555555556LL * ((__int64)(v563 - v22) >> 3) > v59) {
        v59 = 0x5555555555555556LL * ((__int64)(v563 - v22) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v563 - v22) >> 3) >=
          0x555555555555555LL) {
        v60 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v60 = v59;
      }
      if (v60 != 0) {
        v569 = LODWORD(a3);
        if (v60 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_506;
        }
        v61 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v60, 16, 0);
        LODWORD(a3) = v569;
      }
      else {
        v61 = 0;
      }
      v62 = v61 + 24 * v60;
      v63 = v61 + v55;
      *(_DWORD*)v63 = LODWORD(a3);
      *(_DWORD*)(v63 + 4) = v42;
      *(_QWORD*)(v63 + 8) = v52;
      *(_QWORD*)(v63 + 16) = v53;
    LABEL_71:
      v563 = v62;
      v17 = v63 + 24;
      v16 = v63 + 24 * (v55 / -24);
      result = memcpy(v16, v22, v55);
      v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v22 != 0) {
        v64 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v64 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, a3);
      }
      goto LABEL_75;
    }
    v23 = *v20;
    v24 = *((_DWORD*)v18 + 8);
    v25 = v20;
    v26 = v20;
    if (*v20 != 0) {
      while (1) {
        while (1) {
          v26 = (__int64*)v23;
          v27 = *(_DWORD*)(v23 + 28);
          if (v24 >= v27) {
            break;
          }
          v23 = *v26;
          v25 = v26;
          if (*v26 == 0) {
            goto LABEL_29;
          }
        }
        if (v27 >= v24) {
          break;
        }
        v23 = v26[1];
        if (v23 == 0) {
          v25 = v26 + 1;
          goto LABEL_29;
        }
      }
    }
    else {
    LABEL_29:
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      *(_QWORD*)(v28 + 16) = v26;
      *(_DWORD*)(v28 + 28) = v24;
      v26 = (__int64*)v28;
      v29 = v28;
      *(_QWORD*)v28 = 0;
      *(_QWORD*)(v28 + 8) = 0;
      *(_QWORD*)(v28 + 32) = 1;
      *v25 = v28;
      v30 = **(_QWORD**)(v567 + 440);
      if (v30 != 0) {
        *(_QWORD*)(v567 + 440) = v30;
        v29 = *v25;
      }
      result = fw_containers_BalanceAfterInsert(*(_QWORD*)(v567 + 448), v29);
      ++*(_QWORD*)(v567 + 456);
      v21 = v18[5];
      v24 = *((_DWORD*)v18 + 8);
    }
    v31 = v26 + 4;
    if (v17 >= v563) {
      v55 = v17 - v22;
      v56 = 1 - 0x5555555555555555LL * ((__int64)(v17 - v22) >> 3);
      if (v56 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_507;
      }
      if (0x5555555555555556LL * ((__int64)(v563 - v22) >> 3) > v56) {
        v56 = 0x5555555555555556LL * ((__int64)(v563 - v22) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v563 - v22) >> 3) >=
          0x555555555555555LL) {
        v57 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v57 = v56;
      }
      if (v57 != 0) {
        if (v57 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_506;
        }
        v58 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v57, 16, 0);
      }
      else {
        v58 = 0;
      }
      v62 = v58 + 24 * v57;
      v63 = v58 + v55;
      *(_DWORD*)v63 = 0;
      *(_DWORD*)(v63 + 4) = v24;
      *(_QWORD*)(v63 + 8) = v21;
      *(_QWORD*)(v63 + 16) = v31;
      goto LABEL_71;
    }
    *(_DWORD*)v17 = 0;
    *(_DWORD*)(v17 + 4) = v24;
    *(_QWORD*)(v17 + 8) = v21;
    *(_QWORD*)(v17 + 16) = v31;
  LABEL_48:
    v17 += 24LL;
    v16 = v22;
    v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  LABEL_75:
    v7 = v567;
  LABEL_76:
    v65 = (_QWORD*)v18[1];
    if (v65 != nullptr) {
      do {
        v66 = v65;
        v65 = (_QWORD*)*v65;
      } while (v65 != nullptr);
    }
    else {
      do {
        v66 = (_QWORD*)v18[2];
        v15 = v18 == (_QWORD*)*v66;
        v18 = v66;
      } while (!v15);
    }
    v18 = v66;
  } while (v66 != v560);
  if (v16 != v17) {
    result = GameRoutine_b44a80(
        v16, v17,
        (2 * __clz(0xAAAAAAAAAAAAAAABLL * ((__int64)(v17 - v16) >> 3))) ^ 0x7E,
        1);
  }
LABEL_85:
  v67 = v17 - v16;
  v68 = v16;
  v69 = -1431655765 * ((v17 - v16) >> 3);
  v70 = *(_QWORD**)(v567 + 464);
  if (v69 >= 8) {
    LODWORD(v71) = 8;
  }
  else {
    LODWORD(v71) = -1431655765 * ((v17 - v16) >> 3);
  }
  v70[2] = -1;
  v70[3] = -1;
  *v70 = -1;
  v70[1] = -1;
  *(_DWORD*)(*(_QWORD*)(v567 + 464) + 32LL) = v71;
  *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = -1;
  if (v69 > 0) {
    v72 = *(_DWORD*)(v16 + 4);
    if (*(_BYTE*)(*(_QWORD*)(v16 + 8) + 84LL) == 1) {
      *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v72;
    }
    **(_DWORD**)(v567 + 464) = v72;
    if (v69 != 1) {
      v73 = *(_DWORD*)(v16 + 28);
      if (*(_BYTE*)(*(_QWORD*)(v16 + 32) + 84LL) == 1) {
        *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v73;
      }
      *(_DWORD*)(*(_QWORD*)(v567 + 464) + 4LL) = v73;
      if (v69 != 2) {
        v74 = *(_DWORD*)(v16 + 52);
        if (*(_BYTE*)(*(_QWORD*)(v16 + 56) + 84LL) == 1) {
          *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v74;
        }
        *(_DWORD*)(*(_QWORD*)(v567 + 464) + 8LL) = v74;
        if (v69 != 3) {
          v75 = *(_DWORD*)(v16 + 76);
          if (*(_BYTE*)(*(_QWORD*)(v16 + 80) + 84LL) == 1) {
            *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v75;
          }
          *(_DWORD*)(*(_QWORD*)(v567 + 464) + 12LL) = v75;
          if (v69 != 4) {
            v76 = *(_DWORD*)(v16 + 100);
            if (*(_BYTE*)(*(_QWORD*)(v16 + 104) + 84LL) == 1) {
              *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v76;
            }
            *(_DWORD*)(*(_QWORD*)(v567 + 464) + 16LL) = v76;
            if (v69 != 5) {
              v77 = *(_DWORD*)(v16 + 124);
              if (*(_BYTE*)(*(_QWORD*)(v16 + 128) + 84LL) == 1) {
                *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v77;
              }
              *(_DWORD*)(*(_QWORD*)(v567 + 464) + 20LL) = v77;
              if (v69 != 6) {
                v78 = *(_DWORD*)(v16 + 148);
                if (*(_BYTE*)(*(_QWORD*)(v16 + 152) + 84LL) == 1) {
                  *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v78;
                }
                *(_DWORD*)(*(_QWORD*)(v567 + 464) + 24LL) = v78;
                if (v69 != 7) {
                  v79 = *(_DWORD*)(v16 + 172);
                  if (*(_BYTE*)(*(_QWORD*)(v16 + 176) + 84LL) == 1) {
                    *(_DWORD*)(*(_QWORD*)(v567 + 464) + 36LL) = v79;
                  }
                  *(_DWORD*)(*(_QWORD*)(v567 + 464) + 28LL) = v79;
                }
              }
            }
          }
        }
      }
    }
  }
  v71 = (int)v71;
  v80 = 0xAAAAAAAAAAAAAAABLL * (v67 >> 3);
  v81 = (int)v71 - v80;
  if ((int)v71 <= v80) {
    v92 = v16;
    if ((int)v71 >= v80) {
      v90 = v17;
    }
    else {
      v90 = v16 + 24LL * (int)v71;
    }
  }
  else if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v563 - v17) >> 3) >= v81) {
    result = memset(v17, 0, 24 * ((24 * v81 - 24) / 0x18) + 24, a5, a6, a7);
    v90 = v17 + 24 * ((24 * v81 - 24) / 0x18) + 24;
    v92 = v16;
  }
  else {
    if (v69 < 0) {
    LABEL_507:
      GameRoutine_b44a60(result);
    }
    if (0x5555555555555556LL * ((__int64)(v563 - v16) >> 3) >
        (unsigned __int64)(int)v71) {
      v71 = 0x5555555555555556LL * ((__int64)(v563 - v16) >> 3);
    }
    if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v563 - v16) >> 3) >=
        0x555555555555555LL) {
      v82 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v82 = v71;
    }
    if (v82 > 0xAAAAAAAAAAAAAAALL) {
    LABEL_506:
      GameRoutine_60a210(result);
    }
    v83 = 3 * v82;
    v84 = fw_memory_HeapManager_Allocate(*v19, 24 * v82, 16, 0);
    v85 = v84 + v67;
    v86 = v84;
    v563 = v84 + 8 * v83;
    memset(v84 + v67, 0, 24 * ((24 * v81 - 24) / 0x18) + 24, v87, v88, v89);
    v90 = v85 + 24 * ((24 * v81 - 24) / 0x18) + 24;
    result = memcpy(v86, v68, v67);
    if (v68 != 0) {
      v91 = 128;
      if (*(_QWORD*)(*v19 + 200LL) == 0) {
        v91 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*v19 + v91, a3);
    }
    v11 = a2;
    v92 = v86;
  }
  v93 = *(float32x4_t**)(v567 + 496);
  if (v93 == nullptr) {
    goto LABEL_305;
  }
  v555 = (__int64*)(v567 + 448);
  while (2) {
    *(_QWORD*)(LANES128(v93[5]).n128_u64[0] + 32) = 0xFFFFFFFF00000000LL;
    if (LANES128(v93[4]).n128_u8[0] != 1) {
      goto LABEL_134;
    }
    v544 = v92;
    v570 = v93;
    v94 = *(_QWORD*)(*(_QWORD*)(v567 + 32) + 288LL);
    v95 = *(_QWORD**)(v94 + 752);
    v96 = (_QWORD*)(v94 + 760);
    if (v95 == (_QWORD*)(v94 + 760)) {
      v97 = 0;
      v127 = 0;
      goto LABEL_195;
    }
    v97 = 0;
    v98 = 0;
    v99 = 0;
    v557 = (_QWORD*)(v94 + 760);
    while (2) {
      v100 = v95[5];
      if (*(_BYTE*)(v100 + 84) == 1) {
        v101 = *((_DWORD*)v95 + 8);
        if (v98 < v99) {
          *(_DWORD*)v98 = -1110651699;
          goto LABEL_142;
        }
        v114 = v98 - v97;
        v115 = (__int64)(v98 - v97) >> 4;
        v116 = v115 + 1;
        if ((unsigned __int64)(v115 + 1) >> 60 != 0) {
          goto LABEL_505;
        }
        if ((__int64)(v99 - v97) >> 3 > v116) {
          v116 = (__int64)(v99 - v97) >> 3;
        }
        if (v99 - v97 >= 0x7FFFFFFFFFFFFFF0LL) {
          v117 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v117 = v116;
        }
        if (v117 != 0) {
          if (v117 >> 60 != 0) {
            goto LABEL_506;
          }
          v118 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v117, 16, 0);
        }
        else {
          v118 = 0;
        }
        v119 = v118 + v114;
        v99 = v118 + 16 * v117;
        *(_DWORD*)(v118 + v114) = -1110651699;
      LABEL_169:
        *(_QWORD*)(v119 + 8) = v100;
        v120 = v119 - 16 * v115;
        *(_DWORD*)(v119 + 4) = v101;
        v98 = v119 + 16;
        result = memcpy(v120, v97, v114);
        if (v97 != 0) {
          v121 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v121 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, a3);
        }
        v93 = v570;
        v96 = v557;
        v97 = v120;
      }
      else {
        *(_QWORD*)&a3 = *(_QWORD*)v100;
        LANES128(v102).n128_u64[0] = *(_QWORD*)(v100 + 24);
        *((_QWORD*)&a3 + 1) = *(unsigned int*)(v100 + 8);
        LANES128(v103).n128_u64[0] = *(_QWORD*)(v100 + 12);
        LANES128(v103).n128_u64[1] = *(unsigned int*)(v100 + 20);
        LANES128(v104).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v104).n128_u64[1] = 0x3F0000003F000000LL;
        LANES128(v102).n128_u64[1] = *(unsigned int*)(v100 + 32);
        v105 = vmulq_f32(v103, v104);
        v106 = v93[3];
        LANES64(v107).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(vcgeq_f32(
                           v106, vsubq_f32(vsubq_f32(*(float32x4_t*)&a3, v105),
                                           v102)))))
                .n64_u64[0];
        if ((LANES64(v107).n64_u8[0] & 1) == 0 &&
            (LANES64(v107).n64_u8[2] & 1) == 0 &&
            (LANES64(v107).n64_u8[4] & 1) == 0) {
          LANES128(v108).n128_u64[0] = *(_QWORD*)(v100 + 36);
          LANES128(v108).n128_u64[1] = *(unsigned int*)(v100 + 44);
          v109 = v93[2];
          LANES64(v110).n64_u64[0] =
              LANES64_OF(
                  vmovn_s32(vmvnq_s8(vcgeq_f32(
                      vaddq_f32(vaddq_f32(*(float32x4_t*)&a3, v105), v108),
                      v109))))
                  .n64_u64[0];
          if ((LANES64(v110).n64_u8[0] & 1) == 0 &&
              (LANES64(v110).n64_u8[2] & 1) == 0 &&
              (LANES64(v110).n64_u8[4] & 1) == 0) {
            v111 = vaddq_f32(v106, v109);
            LANES128(v112).n128_u64[0] = 0x3F0000003F000000LL;
            LANES128(v112).n128_u64[1] = 0x3F0000003F000000LL;
            v101 = *((_DWORD*)v95 + 8);
            a3 = COERCE_LONG_DOUBLE(vsubq_f32(
                vabdq_f32(vmulq_f32(v111, v112), *(float32x4_t*)&a3), v105));
            if (*((float*)&a3 + 1) < *(float*)&a3) {
              *(float*)&a3 = *((float*)&a3 + 1);
            }
            if (*((float*)&a3 + 2) < *(float*)&a3) {
              *(float*)&a3 = *((float*)&a3 + 2);
            }
            if (*(float*)&a3 >= 0.0) {
              v113 = *(float*)&a3;
            }
            else {
              v113 = 0.0;
            }
            if (v98 >= v99) {
              v114 = v98 - v97;
              v115 = (__int64)(v98 - v97) >> 4;
              v124 = v115 + 1;
              if ((unsigned __int64)(v115 + 1) >> 60 != 0) {
              LABEL_505:
                GameRoutine_b469b0(result);
              }
              if ((__int64)(v99 - v97) >> 3 > v124) {
                v124 = (__int64)(v99 - v97) >> 3;
              }
              if (v99 - v97 >= 0x7FFFFFFFFFFFFFF0LL) {
                v125 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v125 = v124;
              }
              if (v125 != 0) {
                if (v125 >> 60 != 0) {
                  goto LABEL_506;
                }
                v126 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v125, 16, 0);
              }
              else {
                v126 = 0;
              }
              v119 = v126 + v114;
              v99 = v126 + 16 * v125;
              *(float*)(v126 + v114) = v113;
              goto LABEL_169;
            }
            *(float*)v98 = v113;
          LABEL_142:
            *(_DWORD*)(v98 + 4) = v101;
            *(_QWORD*)(v98 + 8) = v100;
            v98 += 16LL;
          }
        }
      }
      v122 = (_QWORD*)v95[1];
      if (v122 != nullptr) {
        do {
          v123 = v122;
          v122 = (_QWORD*)*v122;
        } while (v122 != nullptr);
      }
      else {
        do {
          v123 = (_QWORD*)v95[2];
          v15 = v95 == (_QWORD*)*v123;
          v95 = v123;
        } while (!v15);
      }
      v95 = v123;
      if (v123 != v96) {
        continue;
      }
      break;
    }
    v127 = v98 - v97;
    if (v97 != v98) {
      result = GameRoutine_b469e0(
          v97, v98, (2 * __clz((__int64)(v98 - v97) >> 4)) ^ 0x7E, 1);
    }
    v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  LABEL_195:
    v128 = (_QWORD*)LANES128(v93[5]).n128_u64[0];
    v129 = v127 >> 4;
    v92 = v544;
    if ((int)(v127 >> 4) >= 4) {
      v130 = 4;
    }
    else {
      v130 = v127 >> 4;
    }
    v128[2] = -1;
    v128[3] = -1;
    *v128 = -1;
    v128[1] = -1;
    *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 32) = v130;
    *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 36) = -1;
    if ((int)v129 <= 0) {
      if (v97 != 0) {
        goto LABEL_212;
      }
    }
    else {
      v131 = *(_DWORD*)(v97 + 4);
      if (*(_BYTE*)(*(_QWORD*)(v97 + 8) + 84LL) == 1) {
        *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 36) = v131;
      }
      *(_DWORD*)LANES128(v93[5]).n128_u64[0] = v131;
      if ((_DWORD)v129 != 1) {
        v132 = *(_DWORD*)(v97 + 20);
        if (*(_BYTE*)(*(_QWORD*)(v97 + 24) + 84LL) == 1) {
          *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 36) = v132;
        }
        *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 4) = v132;
        if ((_DWORD)v129 != 2) {
          v133 = *(_DWORD*)(v97 + 36);
          if (*(_BYTE*)(*(_QWORD*)(v97 + 40) + 84LL) == 1) {
            *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 36) = v133;
          }
          *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 8) = v133;
          if ((_DWORD)v129 != 3) {
            v134 = *(_DWORD*)(v97 + 52);
            if (*(_BYTE*)(*(_QWORD*)(v97 + 56) + 84LL) == 1) {
              *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 36) = v134;
            }
            *(_DWORD*)(LANES128(v93[5]).n128_u64[0] + 12) = v134;
          }
        }
      }
    LABEL_212:
      v135 = 128;
      if (*(_QWORD*)(*v19 + 200LL) == 0) {
        v135 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*v19 + v135, a3);
    }
    v136 = LANES128(v93[5]).n128_u64[0];
    if (*(int*)(v136 + 32) >= 1) {
      v137 = v560;
      for (i = 0; i < *(int*)(v136 + 32); ++i) {
        v139 = *(_DWORD*)(v136 + 4 * i);
        if (v92 == v90) {
        LABEL_223:
          v141 = *v137;
          if (*v137 != 0) {
            v142 = v137;
            do {
              v143 = *(_DWORD*)(v141 + 32);
              v144 = v143 < v139;
              if (v143 >= v139) {
                v145 = 0;
              }
              else {
                v145 = 8;
              }
              if (!v144) {
                v142 = (_QWORD*)v141;
              }
              v141 = *(_QWORD*)(v141 + v145);
            } while (v141 != 0);
            if (v142 != v137) {
              v146 = *((_DWORD*)v142 + 8);
              if (v139 >= v146) {
                v147 = v142;
              }
              else {
                v147 = v137;
              }
              if (v139 < v146) {
                v137 = v560;
              }
              else {
                result = v567 + 448;
                v148 = v92;
                while (1) {
                  v149 = *(_QWORD*)result;
                  v150 = (__int64*)result;
                  if (*(_QWORD*)result == 0) {
                    break;
                  }
                  while (1) {
                    result = v149;
                    v151 = *(_DWORD*)(v149 + 28);
                    if (v139 < v151) {
                      break;
                    }
                    if (v151 >= v139) {
                      v92 = v148;
                      goto LABEL_286;
                    }
                    v149 = *(_QWORD*)(result + 8);
                    if (v149 == 0) {
                      v150 = (__int64*)(result + 8);
                      goto LABEL_242;
                    }
                  }
                }
              LABEL_242:
                v152 = result;
                result = fw_memory_HeapManager_Allocate(*v19, 40, 16, 0);
                *(_DWORD*)(result + 28) = v139;
                *(_QWORD*)result = 0;
                *(_QWORD*)(result + 8) = 0;
                v153 = result;
                *(_QWORD*)(result + 16) = v152;
                *(_QWORD*)(result + 32) = 1;
                *v150 = result;
                v154 = **(_QWORD**)(v567 + 440);
                if (v154 != 0) {
                  *(_QWORD*)(v567 + 440) = v154;
                  v153 = *v150;
                }
                v92 = v148;
                v155 = *v555;
                v15 = v153 == *v555;
                *(_BYTE*)(v153 + 24) = v15;
                if (!v15) {
                  do {
                    v156 = *(__int64**)(v153 + 16);
                    if ((v156[3] & 1) != 0) {
                      break;
                    }
                    v157 = v156[2];
                    v158 = *(__int64**)v157;
                    if (v156 == *(__int64**)v157) {
                      v158 = *(__int64**)(v157 + 8);
                      if (v158 == nullptr || (v158[3] & 1) != 0) {
                        if (v153 == *v156) {
                          v159 = *(__int64***)(v153 + 16);
                        }
                        else {
                          v159 = (__int64**)v156[1];
                          v160 = *v159;
                          v156[1] = (__int64)*v159;
                          if (v160 != nullptr) {
                            v160[2] = (__int64)v156;
                            v157 = v156[2];
                          }
                          v159[2] = (__int64*)v157;
                          if (v156 == *(__int64**)v157) {
                            *(_QWORD*)v157 = v159;
                          }
                          else {
                            *(_QWORD*)(v157 + 8) = v159;
                          }
                          *v159 = v156;
                          v156[2] = (__int64)v159;
                          v157 = (__int64)v159[2];
                        }
                        *((_BYTE*)v159 + 24) = 1;
                        *(_BYTE*)(v157 + 24) = 0;
                        v163 = *(__int64**)v157;
                        v164 = *(_QWORD*)(*(_QWORD*)v157 + 8LL);
                        *(_QWORD*)v157 = v164;
                        if (v164 != 0) {
                          *(_QWORD*)(v164 + 16) = v157;
                        }
                        v165 = *(__int64***)(v157 + 16);
                        v163[2] = (__int64)v165;
                        if ((__int64*)v157 == *v165) {
                          *v165 = v163;
                        }
                        else {
                          v165[1] = v163;
                        }
                        v163[1] = v157;
                        goto LABEL_284;
                      }
                    }
                    else if (v158 == nullptr || (v158[3] & 1) != 0) {
                      v161 = *v156;
                      if (v153 == *v156) {
                        v162 = *(_QWORD*)(v161 + 8);
                        *v156 = v162;
                        if (v162 != 0) {
                          *(_QWORD*)(v162 + 16) = v156;
                          v157 = v156[2];
                        }
                        *(_QWORD*)(v161 + 16) = v157;
                        if (v156 == *(__int64**)v157) {
                          *(_QWORD*)v157 = v161;
                        }
                        else {
                          *(_QWORD*)(v157 + 8) = v161;
                        }
                        *(_QWORD*)(v161 + 8) = v156;
                        v156[2] = v161;
                        v157 = *(_QWORD*)(v161 + 16);
                      }
                      else {
                        v161 = *(_QWORD*)(v153 + 16);
                      }
                      *(_BYTE*)(v161 + 24) = 1;
                      *(_BYTE*)(v157 + 24) = 0;
                      v163 = *(__int64**)(v157 + 8);
                      v166 = *v163;
                      *(_QWORD*)(v157 + 8) = *v163;
                      if (v166 != 0) {
                        *(_QWORD*)(v166 + 16) = v157;
                      }
                      v167 = *(__int64***)(v157 + 16);
                      v163[2] = (__int64)v167;
                      if ((__int64*)v157 == *v167) {
                        *v167 = v163;
                      }
                      else {
                        v167[1] = v163;
                      }
                      *v163 = v157;
                    LABEL_284:
                      *(_QWORD*)(v157 + 16) = v163;
                      break;
                    }
                    *((_BYTE*)v156 + 24) = 1;
                    v153 = v157;
                    *(_BYTE*)(v157 + 24) = v157 == v155;
                    *((_BYTE*)v158 + 24) = 1;
                  } while (v157 != v155);
                }
                ++*(_QWORD*)(v567 + 456);
              LABEL_286:
                v168 = v147[5];
                v169 = result + 32;
                if (v90 >= v563) {
                  v170 = v90 - v92;
                  v171 = 1 - 0x5555555555555555LL * ((__int64)(v90 - v92) >> 3);
                  if (v171 > 0xAAAAAAAAAAAAAAALL) {
                    goto LABEL_507;
                  }
                  if (0x5555555555555556LL * ((__int64)(v563 - v92) >> 3) >
                      v171) {
                    v171 = 0x5555555555555556LL * ((__int64)(v563 - v92) >> 3);
                  }
                  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v563 - v92) >> 3) >=
                      0x555555555555555LL) {
                    v172 = 0xAAAAAAAAAAAAAAALL;
                  }
                  else {
                    v172 = v171;
                  }
                  if (v172 != 0) {
                    if (v172 > 0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_506;
                    }
                    v92 =
                        fw_memory_HeapManager_Allocate(*v19, 24 * v172, 16, 0);
                  }
                  else {
                    v92 = 0;
                  }
                  v173 = v92 + v170;
                  v174 = v92 + 24 * v172;
                  *(_DWORD*)v173 = 0;
                  *(_DWORD*)(v173 + 4) = v139;
                  *(_QWORD*)(v173 + 8) = v168;
                  *(_QWORD*)(v173 + 16) = v169;
                  v90 = v92 + v170 + 24;
                  v563 = v174;
                  result = memcpy(v92, v148, v170);
                  if (v148 != 0) {
                    v175 = 128;
                    if (*(_QWORD*)(*v19 + 200LL) == 0) {
                      v175 = 56;
                    }
                    result =
                        nn_mem_StandardAllocator_Free_alt1(*v19 + v175, a3);
                  }
                }
                else {
                  *(_DWORD*)v90 = 0;
                  *(_DWORD*)(v90 + 4) = v139;
                  *(_QWORD*)(v90 + 8) = v168;
                  *(_QWORD*)(v90 + 16) = v169;
                  v90 += 24LL;
                }
                v93 = v570;
                v137 = v560;
                v136 = LANES128(v570[5]).n128_u64[0];
              }
            }
          }
        }
        else {
          v140 = v92;
          while (*(_DWORD*)(v140 + 4) != v139) {
            v140 += 24;
            if (v140 == v90) {
              goto LABEL_223;
            }
          }
        }
      }
    }
    if (LANES128(v93[4]).n128_u8[0] == 1) {
      LANES128(v93[4]).n128_u8[0] = 0;
    }
    v11 = a2;
  LABEL_134:
    v93 = (float32x4_t*)LANES128(*(v93)).n128_u64[0];
    if (v93 != nullptr) {
      continue;
    }
    break;
  }
LABEL_305:
  v176 = (__int64)(v90 - v92) >> 3;
  v177 = -1431655765 * v176;
  if (-1431655765 * (_DWORD)v176 != 0) {
    v545 = v92;
    v542 = -1431655765 * v176;
    v572 = 0x101010101010101LL;
    v573 = 16843009;
    if (v177 < 3) {
      v183 = nullptr;
      goto LABEL_342;
    }
    v178 = v177 & 0x7FFFFFFF;
    v179 = (_BYTE**)(v92 + 16);
    v180 = &v572;
    v181 = 0;
    v182 = 0;
    v183 = nullptr;
    v184 = nullptr;
    v185 = 0;
    do {
      v187 = *v179;
      v179 += 3;
      v186 = v187;
      if (*v187 == 1) {
        ++v182;
      }
      else {
        v188 = *((unsigned int*)v186 + 1);
        *(_BYTE*)v180 = 0;
        if ((unsigned __int64)v184 >= v185) {
          v189 = (char*)(v184 - v183);
          v190 = (v184 - v183) >> 3;
          v191 = v190 + 1;
          if ((unsigned __int64)(v190 + 1) >> 61 != 0) {
            GameRoutine_b45a30(result);
          }
          if ((__int64)(v185 - (_QWORD)v183) >> 2 > v191) {
            v191 = (__int64)(v185 - (_QWORD)v183) >> 2;
          }
          if (v185 - (unsigned __int64)v183 >= 0x7FFFFFFFFFFFFFF8LL) {
            v192 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v192 = v191;
          }
          if (v192 != 0) {
            if (v192 >> 61 != 0) {
              goto LABEL_506;
            }
            v193 = v183;
            v194 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v192, 16, 0);
            v183 = v193;
          }
          else {
            v194 = 0;
          }
          v195 = v181 + v188;
          v185 = v194 + 8 * v192;
          v196 = (__int64)&v189[v194 + -8 * v190];
          *(_QWORD*)&v189[v194] = v195;
          v184 = &v189[v194 + 8];
          v197 = v183;
          result = memcpy(v196, v183, v189);
          if (v197 != nullptr) {
            v199 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v199 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v199, v198);
          }
          v183 = (char*)v196;
        }
        else {
          *(_QWORD*)v184 = v181 + v188;
          v184 += 8;
        }
      }
      --v178;
      v181 += 0x100000000LL;
      v180 = (__int64*)((char*)v180 + 1);
    } while (v178 != 0);
    v11 = a2;
    if (v182 >= 2) {
      v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v177 = v542;
      if (v182 == 2) {
        v92 = v545;
        goto LABEL_342;
      }
      v92 = v545;
      v208 = v567;
      v209 = 2;
      v210 = 15;
    }
    else {
      v200 = v184 - v183;
      v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v184 == v183) {
        v92 = v545;
      }
      else {
        v201 = v200 >> 3;
        v202 = v183;
        GameRoutine_b45a60(v183, v184, (2 * __clz(v200 >> 3)) ^ 0x7E, 1);
        v183 = v202;
        v203 = 0;
        do {
          v204 = &v202[8 * v203];
          v205 = v182 + v203++;
          v206 = *((int*)v204 + 1);
          v207 = v201 > v203 && v205 < 1;
          *((_BYTE*)&v572 + v206) = 1;
        } while (v207);
        v92 = v545;
        v11 = a2;
      }
      v177 = v542;
    LABEL_342:
      v208 = v567;
      v211 = *(_QWORD*)(v567 + 8);
      v212 = *(_QWORD*)(v211 + 16616);
      v213 = *(_QWORD*)(v211 + 16632);
      if (v212 != 0) {
        v213 = v212;
      }
      v210 = 30;
      v209 = *(_DWORD*)(v213 + 120);
    }
    v541 = v183;
    *(_DWORD*)(v208 + 536) = v209;
    if (v177 <= 0) {
      v525 = (__int64 (**)(__int64, __int64))GameData_212e738;
      ((void (*)(__int64, __int64))*GameData_212e738)(*v11 + 8LL, 17);
      result = (*v525)(*v11 + 8LL, 17);
      v522 = v541;
    }
    else {
      v214 = v567;
      v215 = v177 & 0x7FFFFFFF;
      v216 = (_QWORD*)(v92 + 8);
      v540 = v210;
      v217 = 0;
      v543 = v215;
      v558 = vdupq_n_s32(0x3C23D70Au);
      do {
        v267 = *(_QWORD*)(v214 + 32);
        v269 = (_DWORD*)*v216;
        v216 += 3;
        v268 = v269;
        v270 = *(_QWORD*)(v267 + 288);
        v271 = GameRoutine_b3f6c0(v270 + 592, "Sun");
        v272 = v271 + 48;
        v273 = v271 + 96;
        if (*(_BYTE*)(v271 + 112) == 0) {
          v273 = v271 + 48;
        }
        if (*(float*)(v273 + 4) > 0.0) {
          v272 =
              GameRoutine_b3f800(*(_QWORD*)(v267 + 288) + 592LL, "Moon") + 48;
        }
        v275 = vmulq_f32(*(float32x4_t*)(v272 + 16), v558);
        v274 = *(_QWORD**)(*(_QWORD*)(v567 + 16) + 8LL);
        LANES128(v275).n128_u32[3] = 0;
        v277 = *v274;
        v276 = (_BYTE*)v274[1];
        v15 = *(_BYTE*)(*v274 + 96LL) == 0;
        v278 = 92;
        if (v15) {
          v278 = 128;
        }
        v279 = *(float*)(v277 + v278);
        v280 = 552;
        v281 = vmulq_n_f32(v275, v279);
        if (v276[520] != 0) {
          v280 = 516;
        }
        v564 = v281;
        v282 = exp2f(*(float*)&v276[v280]);
        v283 = *(_DWORD*)(*(_QWORD*)(v567 + 8) + 13240LL);
        v284 = vmulq_n_f32(v564, v282);
        v574 = v284;
        if ((unsigned int)(v283 - 3) <= 3) {
          if ((unsigned int)(v283 - 5) > 1) {
            v285 = vmulq_f32(v284, COERCE_AS(float32x4_t, GameData_1a83620));
            LANES128(v285).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v285, v285, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v285).n128_u64[0])))
                    .n64_u64[0];
            v286 = vmulq_f32(v284, COERCE_AS(float32x4_t, GameData_1a834b0));
            LANES128(v286).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v286, v286, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v286).n128_u64[0])))
                    .n64_u64[0];
            v287 = vmulq_f32(v284, COERCE_AS(float32x4_t, GameData_1a82d20));
            LANES128(v287).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v287, v287, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v287).n128_u64[0])))
                    .n64_u64[0];
            v288 = LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v287).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v287).n128_u64[0])))
                       .n64_u32[0];
            LANES128(v284).n128_u32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v285).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v285).n128_u64[0])))
                    .n64_u32[0];
            LANES128(v284).n128_u32[1] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v286).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v286).n128_u64[0])))
                    .n64_u32[0];
            LANES128(v284).n128_u64[1] = v288;
          }
          else {
            GameRoutine_652ba0(&v574, 1.0, 1.0);
          }
        }
        v574 = v284;
        v289 = 712;
        v290 = *(float*)(v270 + 376);
        v291 = *(float*)(v277 + 172);
        v292 = *(float*)(v277 + 208);
        v293 = *(unsigned __int8*)(v272 + 64);
        v294 = *(unsigned __int8*)(v277 + 176);
        v561 = *(int8x16_t*)v272;
        v565 = *(int8x16_t*)(v272 + 48);
        if (v276[680] != 0) {
          v289 = 676;
        }
        v295 = expf(*(float*)&v276[v289]);
        v296 = *(_QWORD*)(v567 + 368) + 56LL * SHIDWORD(v217);
        v297 = *(_DWORD*)(v296 + 16);
        v144 = v297 < -1;
        v298 = ((_BYTE)v297 + 1) & 1;
        if (v144) {
          v298 = -v298;
        }
        v299 = *(_QWORD*)(v296 + 8LL * v298);
        *(_DWORD*)(v296 + 16) = v298;
        v300 = (*(__int64 (**)(__int64))(*(_QWORD*)v299 + 56LL))(v299);
        v301 = 256;
        v302 = *(_DWORD*)(*(_QWORD*)(v567 + 8) + 13240LL);
        if (v276[208] != 0) {
          v301 = 192;
        }
        v303 = *(float32x4_t*)&v276[v301];
        *(float32x4_t*)v576 = v303;
        if ((unsigned int)(v302 - 3) <= 3) {
          if ((unsigned int)(v302 - 5) > 1) {
            v304 = vmulq_f32(v303, COERCE_AS(float32x4_t, GameData_1a83620));
            LANES128(v304).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v304, v304, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v304).n128_u64[0])))
                    .n64_u64[0];
            v305 = vmulq_f32(v303, COERCE_AS(float32x4_t, GameData_1a834b0));
            LANES128(v305).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v305, v305, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v305).n128_u64[0])))
                    .n64_u64[0];
            v306 = vmulq_f32(v303, COERCE_AS(float32x4_t, GameData_1a82d20));
            LANES128(v306).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v306, v306, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v306).n128_u64[0])))
                    .n64_u64[0];
            v307 = LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v306).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v306).n128_u64[0])))
                       .n64_u32[0];
            LANES128(v303).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v304).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v304).n128_u64[0])))
                    .n64_u32[0] |
                ((unsigned __int64)LANES64_OF(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v305).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v305).n128_u64[0])))
                     .n64_u32[0]
                 << 32);
            LANES128(v303).n128_u64[1] = v307;
          }
          else {
            GameRoutine_652ba0(v576, 1.0, 1.0);
          }
        }
        v308 = 92;
        v309 = vmulq_f32(v303, COERCE_AS(float32x4_t, GameData_1a83750));
        if (v276[96] == 0) {
          v308 = 128;
        }
        LANES64(v310).n64_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v309, v309, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v309).n128_u64[0])))
                .n64_u64[0];
        v311 = LANES64_OF(vpadd_f32(v310, v310)).n64_f32[0];
        if (v311 < 0x1.0624de0000000p-10) {
          v311 = 0x1.0624de0000000p-10;
        }
        v312 =
            vmulq_n_f32(vmulq_n_f32(v303, 1.0 / v311),
                        (float)(*(float*)&v276[v308] / 0x1.921fb40000000p+1) /
                            0x1.9000000000000p+6);
        *(_DWORD*)(v300 + 8) = LANES128(v312).n128_u32[2];
        *(_QWORD*)v300 = LANES128(v312).n128_u64[0];
        v313 = 464;
        if (v276[416] != 0) {
          v313 = 400;
        }
        v222 = *(float32x4_t*)&v276[v313];
        v314 = *(_DWORD*)(*(_QWORD*)(v567 + 8) + 13240LL);
        *(float32x4_t*)v576 = v222;
        if ((unsigned int)(v314 - 3) <= 3) {
          if ((unsigned int)(v314 - 5) > 1) {
            v218 = vmulq_f32(v222, COERCE_AS(float32x4_t, GameData_1a83620));
            LANES128(v218).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v218, v218, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])))
                    .n64_u64[0];
            v219 = vmulq_f32(v222, COERCE_AS(float32x4_t, GameData_1a834b0));
            LANES128(v219).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v219, v219, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v219).n128_u64[0])))
                    .n64_u64[0];
            v220 = vmulq_f32(v222, COERCE_AS(float32x4_t, GameData_1a82d20));
            LANES128(v220).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v220, v220, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v220).n128_u64[0])))
                    .n64_u64[0];
            v221 = LANES64_OF(
                       vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v220).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v220).n128_u64[0])))
                       .n64_u32[0];
            LANES128(v222).n128_u64[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])))
                    .n64_u32[0] |
                ((unsigned __int64)LANES64_OF(
                     vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v219).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v219).n128_u64[0])))
                     .n64_u32[0]
                 << 32);
            LANES128(v222).n128_u64[1] = v221;
          }
          else {
            GameRoutine_652ba0(v576, 1.0, 1.0);
          }
        }
        v15 = v294 == 0;
        v214 = v567;
        if (v15) {
          v223 = v292;
        }
        else {
          v223 = v291;
        }
        if (v293 != 0) {
          v224 = -1;
        }
        else {
          v224 = 0;
        }
        v225 = (float)(v290 / 0x1.9000000000000p+6) * v223;
        v226 = vbslq_s8(vdupq_n_s32(v224), v565, v561);
        v227 = v225 * v295;
        v228 = 344;
        if (v276[312] != 0) {
          v228 = 308;
        }
        v229 = *(float*)&v276[v228];
        *(_DWORD*)(v300 + 12) = 0;
        *(_DWORD*)(v300 + 28) = 0;
        v230 = v229 / 0x1.921fb40000000p+1;
        v231 = vmulq_f32(v222, COERCE_AS(float32x4_t, GameData_1a83750));
        LANES128(v231).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v231, v231, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])))
                .n64_u64[0];
        v232 =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])))
                .n64_f32[0];
        if (v232 < 0x1.0624de0000000p-10) {
          v232 = 0x1.0624de0000000p-10;
        }
        v233 = vmulq_n_f32(vmulq_n_f32(v222, 1.0 / v232),
                           v230 / 0x1.9000000000000p+6);
        *(_QWORD*)(v300 + 16) = LANES128(v233).n128_u64[0];
        *(_DWORD*)(v300 + 24) = LANES128(v233).n128_u32[2];
        v234 = *(unsigned int*)(v567 + 532);
        *(float*)(v300 + 60) = v227;
        v235 = vsubq_f32(COERCE_AS(float32x4_t, 0), v226);
        v236 = LANES128(v235).n128_u64[0];
        v237 = LANES128(v235).n128_u32[2];
        v238 = v574;
        *(_QWORD*)(v300 + 32) = v236;
        *(_QWORD*)(v300 + 40) = v237 | (v234 << 32);
        *(_QWORD*)(v300 + 48) = LANES128(v238).n128_u64[0];
        *(_DWORD*)(v300 + 56) = LANES128(v238).n128_u32[2];
        v239 = 792;
        if (v276[760] != 0) {
          v239 = 756;
        }
        *(float*)(v300 + 208) = *(float*)&v276[v239] + 1.0;
        *(_DWORD*)(v300 + 212) = 4 * *(_DWORD*)(v567 + 524);
        *(_DWORD*)(v300 + 216) = 4 * *(_DWORD*)(v567 + 528);
        v240 = v268[40];
        v241 = v268[49];
        v242 = v268[58];
        *(_DWORD*)(v300 + 76) = 0;
        *(_DWORD*)(v300 + 64) = v240;
        *(_DWORD*)(v300 + 68) = v241;
        *(_DWORD*)(v300 + 72) = v242;
        v243 = v268[41];
        v244 = v268[50];
        v245 = v268[59];
        *(_DWORD*)(v300 + 92) = 0;
        *(_DWORD*)(v300 + 80) = v243;
        *(_DWORD*)(v300 + 84) = v244;
        *(_DWORD*)(v300 + 88) = v245;
        v246 = v268[42];
        v247 = v268[51];
        v248 = v268[60];
        *(_DWORD*)(v300 + 108) = 0;
        *(_DWORD*)(v300 + 96) = v246;
        *(_DWORD*)(v300 + 100) = v247;
        *(_DWORD*)(v300 + 104) = v248;
        v249 = v268[43];
        v250 = v268[52];
        v251 = v268[61];
        *(_DWORD*)(v300 + 124) = 0;
        *(_DWORD*)(v300 + 112) = v249;
        *(_DWORD*)(v300 + 116) = v250;
        *(_DWORD*)(v300 + 120) = v251;
        v252 = v268[44];
        v253 = v268[53];
        v254 = v268[62];
        *(_DWORD*)(v300 + 140) = 0;
        *(_DWORD*)(v300 + 128) = v252;
        *(_DWORD*)(v300 + 132) = v253;
        *(_DWORD*)(v300 + 136) = v254;
        v255 = v268[45];
        v256 = v268[54];
        v257 = v268[63];
        *(_DWORD*)(v300 + 156) = 0;
        *(_DWORD*)(v300 + 144) = v255;
        *(_DWORD*)(v300 + 148) = v256;
        *(_DWORD*)(v300 + 152) = v257;
        v258 = v268[46];
        v259 = v268[55];
        v260 = v268[64];
        *(_DWORD*)(v300 + 172) = 0;
        *(_DWORD*)(v300 + 160) = v258;
        *(_DWORD*)(v300 + 164) = v259;
        *(_DWORD*)(v300 + 168) = v260;
        v261 = v268[47];
        v262 = v268[56];
        v263 = v268[65];
        *(_DWORD*)(v300 + 188) = 0;
        *(_DWORD*)(v300 + 176) = v261;
        *(_DWORD*)(v300 + 180) = v262;
        *(_DWORD*)(v300 + 184) = v263;
        v264 = v268[48];
        v265 = v268[57];
        v266 = v268[66];
        *(_DWORD*)(v300 + 204) = 0;
        *(_DWORD*)(v300 + 192) = v264;
        *(_DWORD*)(v300 + 196) = v265;
        *(_DWORD*)(v300 + 200) = v266;
        (*(void (**)(__int64))(*(_QWORD*)v299 + 64LL))(v299);
        --v215;
        v217 += 0x100000000LL;
      } while (v215 != 0);
      v315 = v543;
      v92 = v545;
      v316 = 0;
      do {
        if (*((_BYTE*)&v572 + v316) == 1) {
          v317 = v92 + 24 * v316;
          v318 = *(_DWORD*)(v317 + 4);
          v319 = *(_QWORD*)(v317 + 8);
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*a2 + 336LL))(
                *a2,
                (char*)&GameData_1b61490 + *((int*)&GameData_1b61490 + v316));
          }
          v320 = *(_QWORD**)(*(_QWORD*)(v567 + 32) + 288LL);
          v321 = v320[99];
          if (v321 == 0) {
            goto LABEL_409;
          }
          v322 = v320 + 99;
          do {
            v323 = *(_DWORD*)(v321 + 32);
            v324 = v323 < v318;
            if (v323 >= v318) {
              v325 = 0;
            }
            else {
              v325 = 8;
            }
            if (!v324) {
              v322 = (_QWORD*)v321;
            }
            v321 = *(_QWORD*)(v321 + v325);
          } while (v321 != 0);
          if (v322 != v320 + 99 && v318 >= *((_DWORD*)v322 + 8)) {
            v326 = v322[5];
          }
          else {
          LABEL_409:
            v326 = 0;
          }
          v327 = v320[126];
          v328 = v320[127];
          v329 = *(_DWORD*)(v319 + 80);
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
              *a2, 8, *(_QWORD*)(*(_QWORD*)(v567 + 336) + 144LL));
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, *(_QWORD*)(v319 + 112),
                                      *(_QWORD*)(v319 + 120),
                                      *(unsigned int*)(v567 + 200));
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 1, *(_QWORD*)(v319 + 128),
                                      *(_QWORD*)(v319 + 136),
                                      *(unsigned int*)(v567 + 328));
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 2, *(_QWORD*)(v319 + 144),
                                      *(_QWORD*)(v319 + 152),
                                      *(unsigned int*)(v567 + 328));
          (*(void (**)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))(
              *(_QWORD*)*a2 + 248LL))(*a2, 8, 3, v327, v328,
                                      *(unsigned int*)(v567 + 200));
          v330 = *a2;
          v331 = (*(__int64 (**)(_QWORD))(
              **(_QWORD**)(*(_QWORD*)(v567 + 416) + 24LL) + 40LL))(
              *(_QWORD*)(*(_QWORD*)(v567 + 416) + 24LL));
          (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v330 + 248LL))(v330, 8, 5, v331, v332,
                                       *(unsigned int*)(v567 + 200));
          v333 = *a2;
          v334 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v567 + 416) + 32LL) +
                            8LL * *(int*)(*(_QWORD*)(v567 + 416) + 128LL));
          v335 = (*(__int64 (**)(__int64))(*(_QWORD*)v334 + 40LL))(v334);
          (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v333 + 248LL))(v333, 8, 6, v335, v336,
                                       *(unsigned int*)(v567 + 200));
          v337 = v326 + 16LL * *(int*)(v326 + 776);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, *(_QWORD*)(v337 + 784),
                                      *(_QWORD*)(v337 + 792));
          v338 = *(_QWORD*)(v567 + 368) + 56LL * (int)v316;
          v339 = v338 + 16LL * *(int*)(v338 + 16);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 1, *(_QWORD*)(v339 + 24),
                                      *(_QWORD*)(v339 + 32));
          LODWORD(v333) = v329 / 16;
          v340 = v326 + 16LL * *(int*)(v326 + 8);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v340 + 16),
                                      *(_QWORD*)(v340 + 24));
          v341 = *a2;
          v342 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
              **(_QWORD**)(v326 + 800) + 72LL))(*(_QWORD*)(v326 + 800), 0, 0);
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v341 + 256LL))(v341, 8, 0, v342);
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v333,
                                      (unsigned int)v333, 1);
          v343 = v326 + 16LL * *(int*)(v326 + 40);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v343 + 48),
                                      *(_QWORD*)(v343 + 56));
          v344 = *a2;
          v345 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v326 + 800) + 72LL))(*(_QWORD*)(v326 + 800), 0, 1);
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v344 + 256LL))(v344, 8, 0, v345);
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v333,
                                      (unsigned int)v333, 1);
          v346 = v326 + 16LL * *(int*)(v326 + 72);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v346 + 80),
                                      *(_QWORD*)(v346 + 88));
          v347 = *a2;
          v348 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v326 + 800) + 72LL))(*(_QWORD*)(v326 + 800), 0, 2);
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v347 + 256LL))(v347, 8, 0, v348);
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v333,
                                      (unsigned int)v333, 1);
          v349 = v326 + 16LL * *(int*)(v326 + 104);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v349 + 112),
                                      *(_QWORD*)(v349 + 120));
          v350 = *a2;
          v351 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v326 + 800) + 72LL))(*(_QWORD*)(v326 + 800), 0, 3);
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v350 + 256LL))(v350, 8, 0, v351);
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v333,
                                      (unsigned int)v333, 1);
          v352 = v326 + 16LL * *(int*)(v326 + 136);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v352 + 144),
                                      *(_QWORD*)(v352 + 152));
          v353 = *a2;
          v354 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v326 + 800) + 72LL))(*(_QWORD*)(v326 + 800), 0, 4);
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v353 + 256LL))(v353, 8, 0, v354);
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v333,
                                      (unsigned int)v333, 1);
          v355 = v326 + 16LL * *(int*)(v326 + 168);
          (*(void (**)(_QWORD, __int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 8, 2, *(_QWORD*)(v355 + 176),
                                      *(_QWORD*)(v355 + 184));
          v356 = *a2;
          v357 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v326 + 800) + 72LL))(*(_QWORD*)(v326 + 800), 0, 5);
          (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
              *(_QWORD*)v356 + 256LL))(v356, 8, 0, v357);
          (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
              *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)v333,
                                      (unsigned int)v333, 1);
          v315 = v543;
          v92 = v545;
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2);
          }
        }
        ++v316;
      } while (v316 != v315);
      ((void (*)(__int64, __int64))*GameData_212e738)(*a2 + 8LL, 17);
      v358 = 0;
      v359 = (void (**)(__int64, __int64))GameData_212e738;
      do {
        if (*((_BYTE*)&v572 + v358) == 1) {
          v360 = v92 + 24 * v358;
          v361 = *(_DWORD*)(v360 + 4);
          v362 = *(_QWORD*)(v360 + 8);
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*a2 + 336LL))(
                *a2,
                (char*)&GameData_1b614c0 + *((int*)&GameData_1b614c0 + v358));
          }
          v363 = *(_QWORD*)(*(_QWORD*)(v567 + 32) + 288LL);
          v364 = *(_QWORD*)(v363 + 792);
          if (v364 == 0) {
            goto LABEL_428;
          }
          v365 = v363 + 792;
          v366 = v363 + 792;
          do {
            v367 = *(_DWORD*)(v364 + 32);
            v368 = v367 < v361;
            if (v367 >= v361) {
              v369 = 0;
            }
            else {
              v369 = 8;
            }
            if (!v368) {
              v366 = v364;
            }
            v364 = *(_QWORD*)(v364 + v369);
          } while (v364 != 0);
          if (v366 != v365 && v361 >= *(_DWORD*)(v366 + 32)) {
            v370 = *(_QWORD*)(v366 + 40);
          }
          else {
          LABEL_428:
            v370 = 0;
          }
          v371 = *(_DWORD*)(v362 + 80);
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
              *a2, 8, *(_QWORD*)(*(_QWORD*)(v567 + 352) + 144LL));
          v372 = *(_QWORD*)(v370 + 800);
          if ((*(int (**)(__int64))(*(_QWORD*)v372 + 88LL))(v372) >= 2) {
            v373 = 1;
            do {
              v374 = *a2;
              v375 = (v371 >> v373) / 8;
              v376 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373 - 1, 0);
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v374 + 256LL))(v374, 8, 0, v376);
              v377 = *a2;
              v378 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373, 0);
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v377 + 256LL))(v377, 8, 1, v378);
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v375, v375, 1);
              v379 = *a2;
              v380 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373 - 1, 1);
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v379 + 256LL))(v379, 8, 0, v380);
              v381 = *a2;
              v382 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373, 1);
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v381 + 256LL))(v381, 8, 1, v382);
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v375, v375, 1);
              v383 = *a2;
              v384 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373 - 1, 2);
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v383 + 256LL))(v383, 8, 0, v384);
              v385 = *a2;
              v386 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373, 2);
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v385 + 256LL))(v385, 8, 1, v386);
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v375, v375, 1);
              v387 = *a2;
              v388 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373 - 1, 3);
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v387 + 256LL))(v387, 8, 0, v388);
              v389 = *a2;
              v390 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373, 3);
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v389 + 256LL))(v389, 8, 1, v390);
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v375, v375, 1);
              v391 = *a2;
              v392 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373 - 1, 4);
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v391 + 256LL))(v391, 8, 0, v392);
              v393 = *a2;
              v394 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373, 4);
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v393 + 256LL))(v393, 8, 1, v394);
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v375, v375, 1);
              v395 = *a2;
              v396 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373 - 1, 5);
              (*(void (**)(__int64, __int64, _QWORD, _QWORD))(
                  *(_QWORD*)v395 + 256LL))(v395, 8, 0, v396);
              v397 = *a2;
              v398 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                  **(_QWORD**)(v370 + 800) + 72LL))(*(_QWORD*)(v370 + 800),
                                                    v373, 5);
              (*(void (**)(__int64, __int64, __int64, _QWORD))(
                  *(_QWORD*)v397 + 256LL))(v397, 8, 1, v398);
              (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                  *(_QWORD*)*a2 + 304LL))(*a2, v375, v375, 1);
              (*v359)(*a2 + 8LL, 17);
              ++v373;
            } while ((int)v373 <
                     (*(int (**)(__int64))(*(_QWORD*)v372 + 88LL))(v372));
          }
          v315 = v543;
          v92 = v545;
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2);
          }
        }
        ++v358;
      } while (v358 != v315);
      v399 = a2;
      v400 = 0;
      v566 = v567 + 392;
      do {
        if (*((_BYTE*)&v572 + v400) == 1) {
          v401 = *(_DWORD*)(v92 + 24 * v400 + 4);
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*v399 + 336LL))(
                *v399,
                (char*)&GameData_1b614f0 + *((int*)&GameData_1b614f0 + v400));
          }
          v402 = *(_QWORD*)(*(_QWORD*)(v567 + 32) + 288LL);
          v403 = *(_QWORD*)(v402 + 792);
          if (v403 == 0) {
            goto LABEL_450;
          }
          v404 = v402 + 792;
          v405 = v402 + 792;
          do {
            v406 = *(_DWORD*)(v403 + 32);
            v407 = v406 < v401;
            if (v406 >= v401) {
              v408 = 0;
            }
            else {
              v408 = 8;
            }
            if (!v407) {
              v405 = v403;
            }
            v403 = *(_QWORD*)(v403 + v408);
          } while (v403 != 0);
          if (v405 != v404 && v401 >= *(_DWORD*)(v405 + 32)) {
            v409 = *(_QWORD*)(v405 + 40);
          }
          else {
          LABEL_450:
            v409 = 0;
          }
          v410 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
          v411 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
              **(_QWORD**)(v409 + 808) + 72LL))(*(_QWORD*)(v409 + 808), 0, 0);
          v412 = v409 + 16LL * *(int*)(v409 + 8);
          v413 = *(_QWORD*)(v412 + 16);
          v414 = *(_QWORD*)(v412 + 24);
          v399 = a2;
          v415 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v409 + 800) + 40LL))(
              *(_QWORD*)(v409 + 800));
          v417 = v416;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
              *a2, 8, *(_QWORD*)(*(_QWORD*)(v410 + 8) + 144LL));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v399 + 248LL))(*v399, 8, 0, v415, v417,
                                        *(unsigned int*)(v410 + 176));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v399 + 224LL))(*v399, 8, 0, v413, v414);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v399 + 256LL))(*v399, 8, 0, v411);
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v399 + 304LL))(*v399, 2, 2, 1);
          v418 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
          v419 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v409 + 808) + 72LL))(*(_QWORD*)(v409 + 808), 0, 1);
          v420 = v409 + 16LL * *(int*)(v409 + 40);
          v421 = *(_QWORD*)(v420 + 48);
          v422 = *(_QWORD*)(v420 + 56);
          v423 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v409 + 800) + 40LL))(
              *(_QWORD*)(v409 + 800));
          v425 = v424;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v399 + 200LL))(
              *v399, 8, *(_QWORD*)(*(_QWORD*)(v418 + 8) + 144LL));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v399 + 248LL))(*v399, 8, 0, v423, v425,
                                        *(unsigned int*)(v418 + 176));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v399 + 224LL))(*v399, 8, 0, v421, v422);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v399 + 256LL))(*v399, 8, 0, v419);
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v399 + 304LL))(*v399, 2, 2, 1);
          v426 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
          v427 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v409 + 808) + 72LL))(*(_QWORD*)(v409 + 808), 0, 2);
          v428 = v409 + 16LL * *(int*)(v409 + 72);
          v429 = *(_QWORD*)(v428 + 80);
          v430 = *(_QWORD*)(v428 + 88);
          v431 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v409 + 800) + 40LL))(
              *(_QWORD*)(v409 + 800));
          v433 = v432;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v399 + 200LL))(
              *v399, 8, *(_QWORD*)(*(_QWORD*)(v426 + 8) + 144LL));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v399 + 248LL))(*v399, 8, 0, v431, v433,
                                        *(unsigned int*)(v426 + 176));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v399 + 224LL))(*v399, 8, 0, v429, v430);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v399 + 256LL))(*v399, 8, 0, v427);
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v399 + 304LL))(*v399, 2, 2, 1);
          v434 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
          v435 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v409 + 808) + 72LL))(*(_QWORD*)(v409 + 808), 0, 3);
          v436 = v409 + 16LL * *(int*)(v409 + 104);
          v437 = *(_QWORD*)(v436 + 112);
          v438 = *(_QWORD*)(v436 + 120);
          v439 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v409 + 800) + 40LL))(
              *(_QWORD*)(v409 + 800));
          v441 = v440;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v399 + 200LL))(
              *v399, 8, *(_QWORD*)(*(_QWORD*)(v434 + 8) + 144LL));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v399 + 248LL))(*v399, 8, 0, v439, v441,
                                        *(unsigned int*)(v434 + 176));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v399 + 224LL))(*v399, 8, 0, v437, v438);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v399 + 256LL))(*v399, 8, 0, v435);
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v399 + 304LL))(*v399, 2, 2, 1);
          v442 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
          v443 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v409 + 808) + 72LL))(*(_QWORD*)(v409 + 808), 0, 4);
          v444 = v409 + 16LL * *(int*)(v409 + 136);
          v445 = *(_QWORD*)(v444 + 144);
          v446 = *(_QWORD*)(v444 + 152);
          v447 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v409 + 800) + 40LL))(
              *(_QWORD*)(v409 + 800));
          v449 = v448;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v399 + 200LL))(
              *v399, 8, *(_QWORD*)(*(_QWORD*)(v442 + 8) + 144LL));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v399 + 248LL))(*v399, 8, 0, v447, v449,
                                        *(unsigned int*)(v442 + 176));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v399 + 224LL))(*v399, 8, 0, v445, v446);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v399 + 256LL))(*v399, 8, 0, v443);
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v399 + 304LL))(*v399, 2, 2, 1);
          v450 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
          v451 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
              **(_QWORD**)(v409 + 808) + 72LL))(*(_QWORD*)(v409 + 808), 0, 5);
          v452 = v409 + 16LL * *(int*)(v409 + 168);
          v453 = *(_QWORD*)(v452 + 176);
          v454 = *(_QWORD*)(v452 + 184);
          v455 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v409 + 800) + 40LL))(
              *(_QWORD*)(v409 + 800));
          v457 = v456;
          (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*v399 + 200LL))(
              *v399, 8, *(_QWORD*)(*(_QWORD*)(v450 + 8) + 144LL));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
              *(_QWORD*)*v399 + 248LL))(*v399, 8, 0, v455, v457,
                                        *(unsigned int*)(v450 + 176));
          (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
              *(_QWORD*)*v399 + 224LL))(*v399, 8, 0, v453, v454);
          (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
              *(_QWORD*)*v399 + 256LL))(*v399, 8, 0, v451);
          (*(void (**)(_QWORD, __int64, __int64, __int64))(
              *(_QWORD*)*v399 + 304LL))(*v399, 2, 2, 1);
          v315 = v543;
          v92 = v545;
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2);
          }
        }
        ++v400;
      } while (v400 != v315);
      v458 = 0;
      v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v459 = (__int64 (**)(__int64, __int64))GameData_212e738;
      do {
        if (*((_BYTE*)&v572 + v458) == 1) {
          v460 = v92 + 24 * v458;
          v461 = *(_DWORD*)(v460 + 4);
          v462 = *(_QWORD*)(v460 + 8);
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD, char*))(*(_QWORD*)*v399 + 336LL))(
                *v399,
                (char*)&GameData_1b61520 + *((int*)&GameData_1b61520 + v458));
          }
          v463 = *(_QWORD*)(*(_QWORD*)(v567 + 32) + 288LL);
          v464 = *(_QWORD*)(v463 + 792);
          if (v464 == 0) {
            goto LABEL_469;
          }
          v465 = v463 + 792;
          v466 = v463 + 792;
          do {
            v467 = *(_DWORD*)(v464 + 32);
            v468 = v467 < v461;
            if (v467 >= v461) {
              v469 = 0;
            }
            else {
              v469 = 8;
            }
            if (!v468) {
              v466 = v464;
            }
            v464 = *(_QWORD*)(v464 + v469);
          } while (v464 != 0);
          if (v466 != v465 && v461 >= *(_DWORD*)(v466 + 32)) {
            v470 = *(_QWORD*)(v466 + 40);
          }
          else {
          LABEL_469:
            v470 = 0;
          }
          v562 = v462;
          v471 = 0;
          v472 = 0;
          v571 = v470;
          do {
            v559 = v472;
            v473 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
            v474 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
                **(_QWORD**)(v470 + 816) + 72LL))(*(_QWORD*)(v470 + 816), v471,
                                                  0);
            v475 = (int*)(v470 + v559);
            v476 = v470 + v559 + 16LL * *(int*)(v470 + v559 + 8);
            v477 = *(_QWORD*)(v476 + 16);
            v478 = *(_QWORD*)(v476 + 24);
            v479 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v470 + 800) + 40LL))(
                *(_QWORD*)(v470 + 800));
            v481 = v480;
            v482 = *(int*)(v562 + 80) >> v471;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v473 + 24) + 144LL));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v479, v481,
                                        *(unsigned int*)(v473 + 176));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v477, v478);
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v474);
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v482 / 8),
                                        (unsigned int)(v482 / 8), 1);
            v483 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
            v550 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v571 + 816) + 72LL))(*(_QWORD*)(v571 + 816), v471,
                                                  1);
            v484 = &v475[4 * v475[10]];
            v547 = *((_QWORD*)v484 + 7);
            v548 = *((_QWORD*)v484 + 6);
            v485 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v571 + 800) + 40LL))(
                *(_QWORD*)(v571 + 800));
            v487 = v486;
            v488 = *(int*)(v562 + 80) >> v471;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v483 + 24) + 144LL));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v485, v487,
                                        *(unsigned int*)(v483 + 176));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v548, v547);
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v550);
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v488 / 8),
                                        (unsigned int)(v488 / 8), 1);
            v489 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
            v551 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v571 + 816) + 72LL))(*(_QWORD*)(v571 + 816), v471,
                                                  2);
            v490 = &v475[4 * v475[18]];
            v492 = *((_QWORD*)v490 + 10);
            v491 = *((_QWORD*)v490 + 11);
            v493 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v571 + 800) + 40LL))(
                *(_QWORD*)(v571 + 800));
            v495 = v494;
            v496 = *(int*)(v562 + 80) >> v471;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v489 + 24) + 144LL));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v493, v495,
                                        *(unsigned int*)(v489 + 176));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v492, v491);
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v551);
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v496 / 8),
                                        (unsigned int)(v496 / 8), 1);
            v497 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
            v552 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v571 + 816) + 72LL))(*(_QWORD*)(v571 + 816), v471,
                                                  3);
            v498 = &v475[4 * v475[26]];
            v499 = *((_QWORD*)v498 + 15);
            v549 = *((_QWORD*)v498 + 14);
            v500 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v571 + 800) + 40LL))(
                *(_QWORD*)(v571 + 800));
            v502 = v501;
            v503 = *(int*)(v562 + 80) >> v471;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v497 + 24) + 144LL));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v500, v502,
                                        *(unsigned int*)(v497 + 176));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v549, v499);
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v552);
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v503 / 8),
                                        (unsigned int)(v503 / 8), 1);
            v504 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
            v553 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v571 + 816) + 72LL))(*(_QWORD*)(v571 + 816), v471,
                                                  4);
            v505 = &v475[4 * v475[34]];
            v506 = *((_QWORD*)v505 + 18);
            v507 = *((_QWORD*)v505 + 19);
            v508 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v571 + 800) + 40LL))(
                *(_QWORD*)(v571 + 800));
            v510 = v509;
            v511 = *(int*)(v562 + 80) >> v471;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v504 + 24) + 144LL));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v508, v510,
                                        *(unsigned int*)(v504 + 176));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v506, v507);
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v553);
            v512 = v511 + 7;
            if (v511 >= 0) {
              v512 = v511;
            }
            v470 = v571;
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v512 >> 3),
                                        (unsigned int)(v512 >> 3), 1);
            v513 = *(_QWORD*)(v566 + 8LL * *(int*)(v567 + 536));
            v554 = (*(__int64 (**)(_QWORD, _QWORD, __int64))(
                **(_QWORD**)(v470 + 816) + 72LL))(*(_QWORD*)(v470 + 816), v471,
                                                  5);
            v514 = &v475[4 * v475[42]];
            v515 = *((_QWORD*)v514 + 22);
            v516 = *((_QWORD*)v514 + 23);
            v517 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v470 + 800) + 40LL))(
                *(_QWORD*)(v470 + 800));
            v519 = v518;
            v520 = *(int*)(v562 + 80) >> v471;
            (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
                *a2, 8, *(_QWORD*)(*(_QWORD*)(v513 + 24) + 144LL));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64, _QWORD))(
                *(_QWORD*)*a2 + 248LL))(*a2, 8, 0, v517, v519,
                                        *(unsigned int*)(v513 + 176));
            (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v515, v516);
            (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v554);
            (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v520 / 8),
                                        (unsigned int)(v520 / 8), 1);
            v472 = v559 + 192;
            ++v471;
          } while (v559 != 576);
          v399 = a2;
          v19 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v315 = v543;
          v92 = v545;
          v459 = (__int64 (**)(__int64, __int64))GameData_212e738;
          if (*(_BYTE*)(*(_QWORD*)(v567 + 8) + 304LL) == 1) {
            (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 344LL))(*a2);
          }
        }
        ++v458;
      } while (v458 != v315);
      result = (*v459)(*v399 + 8LL, 17);
      v521 = v542 & 3;
      if ((unsigned __int64)(v315 - 1) >= 3) {
        v522 = v541;
        v523 = v540;
        v526 = (__int64*)(v92 + 64);
        v527 = 0;
        v528 = (char*)&v572 + 1;
        do {
          if (*(v528 - 1) == 1) {
            v529 = *(v526 - 6);
            *(_BYTE*)v529 = 0;
            *(_DWORD*)(v529 + 4) = v540;
          }
          if (*v528 == 1) {
            v530 = *(v526 - 3);
            *(_BYTE*)v530 = 0;
            *(_DWORD*)(v530 + 4) = v540;
          }
          if (v528[1] == 1) {
            v531 = *v526;
            *(_BYTE*)v531 = 0;
            *(_DWORD*)(v531 + 4) = v540;
          }
          if (v528[2] == 1) {
            v532 = v526[3];
            *(_BYTE*)v532 = 0;
            *(_DWORD*)(v532 + 4) = v540;
          }
          v527 -= 4;
          v528 += 4;
          v526 += 12;
        } while (-(__int64)(v542 & 0x7FFFFFFC) != v527);
        v524 = -v527;
        if ((v542 & 3) != 0) {
          goto LABEL_492;
        }
      }
      else {
        v522 = v541;
        v523 = v540;
        v524 = 0;
        if ((v542 & 3) == 0) {
          goto LABEL_496;
        }
      LABEL_492:
        v533 = v92 + 24 * v524;
        v534 = (unsigned __int8*)&v572 + v524;
        v535 = (__int64*)(v533 + 16);
        do {
          v536 = *v534++;
          if (v536 == 1) {
            v537 = *v535;
            *(_BYTE*)v537 = 0;
            *(_DWORD*)(v537 + 4) = v523;
          }
          v535 += 3;
          --v521;
        } while (v521 != 0);
      }
    }
  LABEL_496:
    if (v522 != nullptr) {
      v538 = 128;
      if (*(_QWORD*)(*v19 + 200LL) == 0) {
        v538 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*v19 + v538, a3);
    }
  }
  if (v92 != 0) {
    v539 = 128;
    if (*(_QWORD*)(*v19 + 200LL) == 0) {
      v539 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*v19 + v539, a3);
  }
  return result;
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

__int64* gfxa_b6a300(__int64 a1, _QWORD* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v11;
  __int64* result;
  int v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  unsigned __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  int v53;
  __int64 v54;
  __int64 v55;
  float v56;
  __int128* v57;
  __int128* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int128 v70;
  __int128 v71;
  __int128 v72;
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
  __int64* v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  char* v99;
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

  v63 = COERCE_AS(__typeof__(v63),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
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
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = v108[0];
  result = *(__int64**)(a1 + 24);
  v108[0] = 0;
  *(_QWORD*)(a1 + 24) = v11;
  if (result != nullptr) {
    (*(void (**)(__int64*))(*result + 8))(result),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = (__int64*)v108[0];
    v108[0] = 0;
    if (result != nullptr) {
      result = (__int64*)(*(__int64 (**)(__int64*))(*result + 8))(result),
      v63 = COERCE_AS(__typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v109_.v109 = *(_DWORD*)(a1 + 16);
  v109_.v110 = v109_.v109;
  v13 = *(_DWORD*)a1;
  v109_.v112 = *(_DWORD*)(a1 + 4);
  if (v13 < 1) {
    if (*(_BYTE*)(a1 + 8) == 1) {
      v109_.v109 = *(_DWORD*)(a1 + 20);
      v109_.v110 = v109_.v109;
      v109_.v112 = 1;
    }
  }
  else {
    v14 = 0;
    do {
      GameRoutine_53c20((void*)(v108), (__int64)&v109_.v109),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v17 = *(__int64**)(a1 + 64);
      v16 = *(_QWORD*)(a1 + 72);
      if ((unsigned __int64)v17 >= v16) {
        v20 = *(_QWORD*)(a1 + 56);
        v21 = (char*)v17 - v20;
        v22 = ((__int64)v17 - v20) >> 3;
        v23 = v22 + 1;
        if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
        LABEL_91:
          GameRoutine_b6aee0(),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v24 = v16 - v20;
        if (v24 >> 2 > v23) {
          v23 = v24 >> 2;
        }
        if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
          v25 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v25 = v23;
        }
        if (v25 != 0) {
          if (v25 >> 61 != 0) {
          LABEL_90:
            GameRoutine_60a210_alt1(),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v26 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v26 = 0;
        }
        v27 = v108[0];
        v28 = v26 + 8 * v25;
        v108[0] = 0;
        v29 = (__int64)&v21[v26 + -8 * v22];
        *(_QWORD*)&v21[v26] = v27;
        v19 = (__int64)&v21[v26 + 8];
        memcpy(v29, v20, v21),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 56) = v29;
        *(_QWORD*)(a1 + 64) = v19;
        *(_QWORD*)(a1 + 72) = v28;
        if (v20 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v30),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      else {
        v18 = v108[0];
        v108[0] = 0;
        *v17 = v18;
        v19 = (__int64)(v17 + 1);
      }
      result = (__int64*)v108[0];
      *(_QWORD*)(a1 + 64) = v19;
      v108[0] = 0;
      if (result != nullptr) {
        result = (__int64*)(*(__int64 (**)(__int64*))(*result + 8))(result),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v15 = *(_DWORD*)a1;
      ++v14;
    } while (v14 < *(_DWORD*)a1);
    if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
      v109_.v109 = *(_DWORD*)(a1 + 20);
      v109_.v110 = v109_.v109;
      v109_.v112 = 1;
      if (v15 >= 1) {
        v31 = 0;
        do {
          GameRoutine_53c20((void*)(v108), (__int64)&v109_.v109),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v33 = *(__int64**)(a1 + 40);
          v32 = *(_QWORD*)(a1 + 48);
          if ((unsigned __int64)v33 >= v32) {
            v36 = *(_QWORD*)(a1 + 32);
            v37 = (char*)v33 - v36;
            v38 = ((__int64)v33 - v36) >> 3;
            v39 = v38 + 1;
            if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
              goto LABEL_91;
            }
            v40 = v32 - v36;
            if (v40 >> 2 > v39) {
              v39 = v40 >> 2;
            }
            if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
              v41 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v41 = v39;
            }
            if (v41 != 0) {
              if (v41 >> 61 != 0) {
                goto LABEL_90;
              }
              v42 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v41, 16, 0),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            else {
              v42 = 0;
            }
            v43 = v108[0];
            v44 = v42 + 8 * v41;
            v108[0] = 0;
            v45 = (__int64)&v37[v42 + -8 * v38];
            *(_QWORD*)&v37[v42] = v43;
            v35 = (__int64)&v37[v42 + 8];
            memcpy(v45, v36, v37),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_QWORD*)(a1 + 32) = v45;
            *(_QWORD*)(a1 + 40) = v35;
            *(_QWORD*)(a1 + 48) = v44;
            if (v36 != 0) {
              v46 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v46 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v46),
                  v63 = COERCE_AS(
                      __typeof__(v63),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v66 = COERCE_AS(
                      __typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          else {
            v34 = v108[0];
            v108[0] = 0;
            *v33 = v34;
            v35 = (__int64)(v33 + 1);
          }
          result = (__int64*)v108[0];
          *(_QWORD*)(a1 + 40) = v35;
          v108[0] = 0;
          if (result != nullptr) {
            result = (__int64*)(*(__int64 (**)(__int64*))(*result + 8))(result),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          ++v31;
        } while (v31 < *(_DWORD*)a1);
      }
    }
  }
  v47 = *(_QWORD*)(a1 + 80);
  v48 = *(_QWORD**)(a1 + 88);
  v49 = 6LL * *(int*)(a1 + 4);
  v50 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v48 - v47) >> 3);
  v51 = v49 - v50;
  if (v49 <= v50) {
    if (v49 < v50) {
      v52 = (_QWORD*)(v47 + 336LL * *(int*)(a1 + 4));
      while (v48 != v52) {
        v83 = *(v48 - 6);
        *(v48 - 6) = 0;
        if (v83 != 0) {
          (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)v83 + 8LL))(v83,
                                                                         v51),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v84 = (__int64*)*(v48 - 7);
        v48 -= 7;
        result = v84;
        *v48 = 0;
        if (v84 != nullptr) {
          result = (__int64*)(*(__int64 (**)(__int64*, unsigned __int64))(
              *result + 8))(result, v51),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      *(_QWORD*)(a1 + 88) = v52;
    }
  }
  else {
    result = GameRoutine_b447c0(v105, v51),
    v63 = COERCE_AS(__typeof__(v63),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
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
  v53 = *(_DWORD*)(a1 + 4);
  *(_OWORD*)&v106[8] = GameData_1a838c0;
  *(_OWORD*)&v106[10] = GameData_1a837f0;
  *(_OWORD*)&v107[8] = GameData_1a82fa0;
  *(_OWORD*)&v107[10] = GameData_1a82fa0;
  if (v53 >= 1) {
    v54 = 0;
    v55 = 0;
    do {
      v56 = (float)(unsigned int)v55;
      v57 = (__int128*)v106;
      v58 = (__int128*)v107;
      v59 = v108;
      v60 = 0;
      v103 = v55;
      do {
        v118_.v118 = 3;
        v73 = *v105;
        v74 = a2[39];
        v75 = *(_QWORD*)(a2[69] + 16LL);
        v76 = *v105 + v54;
        v118_.v119 = 48;
        v118_.v120 = v74;
        GameRoutine_53bd0((void*)(&v121), (__int64)&v118_.v118),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v77 = v121;
        v121 = 0;
        v78 = *(_QWORD*)(v76 + v60);
        *(_QWORD*)(v76 + v60) = v77;
        if (v78 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v78 + 8LL))(v78),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v79 = v121;
          v121 = 0;
          if (v79 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v79 + 8LL))(v79),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        GameRoutine_53bd0((void*)(&v121), (__int64)&v118_.v118),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v80 = v121;
        v121 = 0;
        v81 = *(_QWORD*)(v76 + v60 + 8);
        *(_QWORD*)(v76 + v60 + 8) = v80;
        if (v81 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v81 + 8LL))(v81),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v82 = v121;
          v121 = 0;
          if (v82 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v82 + 8LL))(v82),
                v63 =
                    COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v61 = v73 + v54 + v60;
        v62 = (*(__int64 (**)(__int64))(*(_QWORD*)v75 + 80LL))(v75),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v61 + 32) = v63;
        v64 = *(_QWORD*)(v76 + v60);
        *(_QWORD*)(v61 + 24) = v62;
        GameRoutine_5de60((_QWORD*)(v61 + 24), v64),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v65 = (*(__int64 (**)(__int64))(*(_QWORD*)v75 + 80LL))(v75),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v61 + 48) = v66;
        v67 = *(_QWORD*)(v76 + v60 + 8);
        *(_QWORD*)(v61 + 40) = v65;
        GameRoutine_5de60((_QWORD*)(v61 + 40), v67),
            v63 = COERCE_AS(__typeof__(v63),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v68 = *(_QWORD*)(v61 + 8LL * *(int*)(v61 + 16));
        v69 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 56LL))(v68),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v70 = *(_OWORD*)v59;
        v59 += 2;
        *(float*)(v69 + 12) = v56;
        *(_QWORD*)v69 = v70;
        *(_DWORD*)(v69 + 8) = DWORD2(v70);
        v71 = *v58++;
        *(_QWORD*)(v69 + 16) = v71;
        *(_DWORD*)(v69 + 24) = DWORD2(v71);
        v72 = *v57++;
        *(_QWORD*)(v69 + 32) = v72;
        *(_DWORD*)(v69 + 40) = DWORD2(v72);
        *(float*)(v69 + 28) = (float)*(int*)(a1 + 12);
        *(float*)(v69 + 44) = v56 / (float)(*(_DWORD*)(a1 + 4) - 1);
        result =
            (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v68 + 64LL))(v68),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v60 += 56;
      } while (v60 != 336);
      v54 += 336;
      v55 = v103 + 1;
    } while (v103 + 1 < *(int*)(a1 + 4));
  }
  v85 = *(_QWORD*)(a1 + 80);
  v86 = *(_QWORD*)(a1 + 88);
  if (v85 != v86) {
    v87 = *(char**)(a1 + 112);
    do {
      v88 = v85 + 16LL * *(int*)(v85 + 16);
      v90 = *(_QWORD*)(v88 + 24);
      v89 = *(_QWORD*)(v88 + 32);
      v91 = *(_QWORD*)(a1 + 120);
      if ((unsigned __int64)v87 < v91) {
        *(_QWORD*)v87 = v90;
        *((_QWORD*)v87 + 1) = v89;
        v87 += 16;
      }
      else {
        v92 = *(_QWORD*)(a1 + 104);
        v93 = &v87[-v92];
        v94 = (__int64)&v87[-v92] >> 4;
        v95 = v94 + 1;
        if ((unsigned __int64)(v94 + 1) >> 60 != 0) {
          GameRoutine_b6af00(),
              v63 = COERCE_AS(__typeof__(v63),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v66 = COERCE_AS(__typeof__(v66),
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
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          v98 = 0;
        }
        v99 = &v93[v98];
        v100 = v98 + 16 * v97;
        *(_QWORD*)v99 = v90;
        *((_QWORD*)v99 + 1) = v89;
        v101 = (__int64)&v93[v98 + -16 * v94];
        v87 = &v93[v98 + 16];
        result = (__int64*)memcpy(v101, v92, v93),
        v63 = COERCE_AS(__typeof__(v63),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 104) = v101;
        *(_QWORD*)(a1 + 112) = v87;
        *(_QWORD*)(a1 + 120) = v100;
        if (v92 != 0) {
          v102 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v102 = 56;
          }
          result = (__int64*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v102),
          v63 = COERCE_AS(__typeof__(v63),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      v85 += 56;
      *(_QWORD*)(a1 + 112) = v87;
    } while (v85 != v86);
  }
  return result;
}

__attribute__((swiftcall)) void gfxa_b722e0(PSEUDO_X8 x8_, __int64 a1, int* a2,
                                            __int64 unused_int2, __int64 a3,
                                            __int64 a4, __int64 a5)
{

#pragma clang fp contract(off)
  __int64 a6 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 i;
  _BYTE* v10;
  unsigned __int64 v11;
  char v12;
  char v13;
  char v14;
  char v15;
  char v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int128 v22;
  char v23;
  bool v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  float v43;
  __int128 v44;
  int v45;
  char v46;
  int v47;
  __int64 v48;
  float result;
  float v50;
  float v51;
  char v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;

  *(_QWORD*)(a6 + 16) = 0;
  *(_QWORD*)(a6 + 24) = 0;
  *(_QWORD*)a6 = 0;
  *(_QWORD*)(a6 + 8) = 0;
  *(_QWORD*)(a6 + 32) = 1063675494;
  *(_QWORD*)(a6 + 40) = 0x3F80000041C80000LL;
  memset(a6 + 48, 0, 1028, a3, a4, a5);
  *(_BYTE*)(a6 + 1096) = 0;
  *(_DWORD*)(a6 + 1100) = 0;
  *(_BYTE*)(a6 + 1104) = 0;
  *(_QWORD*)(a6 + 1080) = 0xBF80000040000000LL;
  *(_QWORD*)(a6 + 1088) = 3212836864LL;
  if (a2 != nullptr && *((_BYTE*)a2 + 136) == 1) {
    for (i = 0; i != 1024; i += 4LL) {
      v10 = (_BYTE*)(a6 + i);
      v11 = *(_QWORD*)&a2[2 * (i >> 6) + 2];
      if (((v11 >> (i & 0x3C)) & 1) != 0) {
        v12 = 0;
      }
      else {
        v12 = -1;
      }
      v10[52] = v12;
      if (((v11 >> ((i + 1) & 0x3D)) & 1) != 0) {
        v13 = 0;
      }
      else {
        v13 = -1;
      }
      v10[53] = v13;
      if (((v11 >> ((i + 2) & 0x3E)) & 1) != 0) {
        v14 = 0;
      }
      else {
        v14 = -1;
      }
      v10[54] = v14;
      v15 = i + 3;
      if (((v11 >> v15) & 1) != 0) {
        v16 = 0;
      }
      else {
        v16 = -1;
      }
      v10[55] = v16;
    }
    v17 = 120;
    if (*(_BYTE*)(a1 + 90) != 0) {
      v17 = 89;
    }
    if ((*(_BYTE*)(a1 + v17) & 1) == 0) {
      v35 = *((_QWORD*)a2 + 19);
      v36 = *((_QWORD*)a2 + 20);
      v37 = *((float*)a2 + 42);
      *(_QWORD*)a6 = *((_QWORD*)a2 + 18);
      *(_QWORD*)(a6 + 8) = v35;
      if (*(float*)&v36 <= 0x1.4b5dcc0000000p-5f) {
        v38 = *((float*)&v36 + 1);
        v57 = *(float*)&v36 / 0x1.9d70a40000000p+3f;
      }
      else {
        v55 = *((float*)&v36 + 1);
        v57 = powf((float)(*(float*)&v36 + 0x1.c28f5c0000000p-5f) /
                       0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v38 = v55;
      }
      if (v38 <= 0x1.4b5dcc0000000p-5f) {
        v42 = v38 / 0x1.9d70a40000000p+3f;
      }
      else {
        v42 = powf((float)(v38 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
      }
      if (v37 <= 0x1.4b5dcc0000000p-5f) {
        v43 = v37 / 0x1.9d70a40000000p+3f;
      }
      else {
        v53 = v42;
        v43 = powf((float)(v37 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v42 = v53;
      }
      *(_QWORD*)(a6 + 36) = *((_QWORD*)a2 + 22);
      *(_QWORD*)&v44 = __PAIR64__(LODWORD(v42), LODWORD(v57));
      v45 = a2[43];
      *(_BYTE*)(a6 + 1096) = *((_BYTE*)a2 + 192);
      v46 = *((_BYTE*)a2 + 193);
      *(_DWORD*)(a6 + 32) = v45;
      *(_BYTE*)(a6 + 1104) = v46;
      *((_QWORD*)&v44 + 1) = LODWORD(v43);
      v47 = *a2;
      *(_OWORD*)(a6 + 16) = v44;
      *(_DWORD*)(a6 + 44) = v47;
      LODWORD(v44) = a2[47];
      *(_DWORD*)(a6 + 1080) = a2[46];
      *(_DWORD*)(a6 + 1100) = v44;
      goto LABEL_57;
    }
    if (*(_BYTE*)(a1 + 352) == 1) {
      v18 = *(_OWORD*)(a1 + 336);
    }
    else {
      v39 = *((_QWORD*)a2 + 20);
      v40 = *((float*)a2 + 42);
      if (*(float*)&v39 <= 0x1.4b5dcc0000000p-5f) {
        LODWORD(v41) = HIDWORD(*((_QWORD*)a2 + 20));
        v58 = *(float*)&v39 / 0x1.9d70a40000000p+3f;
      }
      else {
        LODWORD(v56) = HIDWORD(*((_QWORD*)a2 + 20));
        v58 = powf((float)(*(float*)&v39 + 0x1.c28f5c0000000p-5f) /
                       0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v41 = v56;
      }
      if (v41 <= 0x1.4b5dcc0000000p-5f) {
        v50 = v41 / 0x1.9d70a40000000p+3f;
      }
      else {
        v50 = powf((float)(v41 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
      }
      if (v40 <= 0x1.4b5dcc0000000p-5f) {
        v51 = v40 / 0x1.9d70a40000000p+3f;
      }
      else {
        v54 = v50;
        v51 = powf((float)(v40 + 0x1.c28f5c0000000p-5f) / 0x1.0e147a0000000p+0f,
                   0x1.3333340000000p+1f);
        v50 = v54;
      }
      *(_QWORD*)&v18 = __PAIR64__(LODWORD(v50), LODWORD(v58));
      *((_QWORD*)&v18 + 1) = LODWORD(v51);
    }
    v52 = *(_BYTE*)(a1 + 456);
    *(_OWORD*)(a6 + 16) = v18;
    if ((v52 & 1) == 0) {
      v26 = a2[43];
      v20 = 1;
    LABEL_31:
      v27 = *(unsigned __int8*)(a1 + 536);
      *(_DWORD*)(a6 + 32) = v26;
      if (v20 == 0 || v27 != 0) {
        v24 = v27 == 0;
        v29 = 568;
        if (!v24) {
          v29 = 532;
        }
        v28 = *(_DWORD*)(a1 + v29);
      }
      else {
        v28 = a2[44];
      }
      v30 = *(unsigned __int8*)(a1 + 616);
      *(_DWORD*)(a6 + 36) = v28;
      if ((v20 & (v30 ^ 1)) == 1) {
        v31 = a2[45];
      }
      else {
        v32 = 648;
        if (v30 != 0) {
          v32 = 612;
        }
        v31 = *(_DWORD*)(a1 + v32);
      }
      v33 = *(unsigned __int8*)(a1 + 248);
      *(_DWORD*)(a6 + 40) = v31;
      *(_DWORD*)(a6 + 48) = 0;
      v24 = v33 == 0;
      v34 = 280;
      if (!v24) {
        v34 = 244;
      }
      *(_DWORD*)(a6 + 1080) = *(_DWORD*)(a1 + v34);
      goto LABEL_57;
    }
    v23 = 1;
    v20 = 1;
  LABEL_28:
    v24 = (v23 & 1) == 0;
    v25 = 488;
    if (!v24) {
      v25 = 452;
    }
    v26 = *(_DWORD*)(a1 + v25);
    goto LABEL_31;
  }
  v19 = 120;
  if (*(_BYTE*)(a1 + 90) != 0) {
    v19 = 89;
  }
  if ((*(_BYTE*)(a1 + v19) & 1) != 0) {
    v20 = 0;
    v21 = 400;
    if (*(_BYTE*)(a1 + 352) != 0) {
      v21 = 336;
    }
    v22 = *(_OWORD*)(a1 + v21);
    v23 = *(_BYTE*)(a1 + 456);
    *(_OWORD*)(a6 + 16) = v22;
    goto LABEL_28;
  }
LABEL_57:
  v48 = 200;
  if (*(_BYTE*)(a1 + 168) != 0) {
    v48 = 164;
  }
  result = *(float*)(a1 + v48);
  *(float*)(a6 + 1076) = result;
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
  __int64* v49;
  __int64** v50;
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
    nn_mem_StandardAllocator_Free(*v8 + v12);
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
    nn_mem_StandardAllocator_Free(*v8 + v18);
  }
  v19 = *(_QWORD*)a1;
  v20 = fw_memory_HeapManager_Allocate_alt1(*v8, 152, 16, 0);
  ResourceBuilder_b4f5e0(v20, v19);
  v21 = *(_QWORD**)(a1 + 64);
  *(_QWORD*)(a1 + 64) = v20;
  if (v21 != nullptr) {
    ResourceBuilder_b4f9e0(v21);
    v22 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v22);
  }
  v23 = *(_QWORD*)a1;
  v24 = fw_memory_HeapManager_Allocate_alt1(*v8, 160, 16, 0);
  GameRoutine_bfaa20(v24, v23);
  v25 = *(_QWORD**)(a1 + 72);
  *(_QWORD*)(a1 + 72) = v24;
  if (v25 != nullptr) {
    GameRoutine_bfae60(v25);
    v26 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v26);
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
    nn_mem_StandardAllocator_Free(*v8 + v40);
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
    nn_mem_StandardAllocator_Free(*v8 + v44);
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
    nn_mem_StandardAllocator_Free(*v8 + v48);
  }
  v49 = *(__int64**)a1;
  v50 = (__int64**)fw_memory_HeapManager_Allocate_alt1(*v8, 152, 16, 0);
  gfxa_TaskCharaMask_Impl_Impl(v50, v49);
  v51 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = v50;
  if (v51 != 0) {
    GameRoutine_6040f0(v51 + 24);
    GameRoutine_604050(v51 + 24);
    v52 = *(_QWORD*)(v51 + 16);
    if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
      std___1___shared_weak_count___release_weak(v52);
    }
    v53 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v53);
  }
  v54 = *(_QWORD*)a1;
  v55 = fw_memory_HeapManager_Allocate_alt1(*v8, 152, 16, 0);
  gfxa_TaskCharaDepth_Impl_Impl(v55, v54);
  v56 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = v55;
  if (v56 != 0) {
    GameRoutine_6040f0(v56 + 8);
    GameRoutine_604050(v56 + 8);
    v57 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v57);
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
    nn_mem_StandardAllocator_Free(*v8 + v61);
  }
  v62 = GameRoutine_ad6000((__int64)"CharaDepth", 0xAu);
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
