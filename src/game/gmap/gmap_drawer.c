#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct GmapDrawer_mtx44 {
  float32x4_t v[4];
};

__int64 GameRoutine_19931a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2241420;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GmapDrawer_Unknown3(__int64 result);
__attribute__((swiftcall)) void SpotMgr_1332660(PSEUDO_X8, _QWORD);
__int64 GameRoutine_135bd70(_QWORD, double, long double);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1b00(__int64*, float);
__int64 GameRoutine_14b8e30(_QWORD);
__int64 GameRoutine_1541180(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1541940(_QWORD, _QWORD);
__int64 GameRoutine_155c5a0(void);
__int64 GameRoutine_155c5d0(_QWORD);
__int64 GameRoutine_1993840(_QWORD);
__int64 GameRoutine_1994460(_QWORD);
__int64 GmapDrawer_153aa40_alt1(_QWORD, _QWORD) __asm__("GmapDrawer_153aa40");
__int64 Impl_13261c0(_QWORD);
__int64 Impl_1327b40(_QWORD, float, long double, long double, long double,
                     long double);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 PrimitiveDrawManager_19935e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 PrimitiveDrawManager_1994180(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_1540e50(_QWORD, _QWORD, _QWORD, _QWORD, float, float, float);
__int64 game_util_Format(const char*, ...);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_a6c440(_QWORD, _QWORD, _QWORD);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212ea30;
extern _UNKNOWN GameData_1a9a548;
extern _UNKNOWN GameData_21a55c0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_2130e00;
extern __int64* GameData_21318c8[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_212c638;
extern __int64 GameData_212d748[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
float Camera_1315570(_QWORD);
long double BladeResonance_14b7810(void);
long double GameRoutine_1994460_alt1(_QWORD) __asm__("GameRoutine_1994460");
long double powf(float, float);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GmapDrawer_1538c80_alt1(__int64*** a1,
                                char a2) __asm__("GmapDrawer_1538c80");
void GmapDrawer_153aa40(__int64** a1, char a2);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, const char*);
_QWORD* PrimitiveDrawManager_19935e0_alt1(
    _QWORD*, __int64, __int64,
    unsigned int) __asm__("PrimitiveDrawManager_19935e0");
__int64* GameRoutine_1993840_alt1(__int64) __asm__("GameRoutine_1993840");
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64* PrimitiveDrawManager_1994180_alt1(__int64* result) __asm__(
    "PrimitiveDrawManager_1994180");
__int64* game_gmap_1541180(__int64* result, unsigned int*, __int128*, float);
__int64 GameRoutine_14a1390_alt1(__int64*, char) __asm__("GameRoutine_14a1390");
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 game_14a1b00(__int64*, float);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__n64 GameRoutine_a6c440_alt1(float32x4_t*, __int128*,
                              float32x4_t*) __asm__("GameRoutine_a6c440");
__n64 game_gmap_1540e50_alt1(__int64**, __int128*, __int64*, __int128*, float,
                             float, float) __asm__("game_gmap_1540e50");
char* game_util_Format_alt1(__int64, ...) __asm__("game_util_Format");
const char* Impl_1327b40_alt1(__int64) __asm__("Impl_1327b40");
float Camera_1315570_alt1(__int64) __asm__("Camera_1315570");
float powf_alt1(float, float) __asm__("powf");
float32x4_t*
GameRoutine_1994460_alt2(float32x4_t* result) __asm__("GameRoutine_1994460");
long double BladeResonance_14b7810_alt1() __asm__("BladeResonance_14b7810");
long double GameRoutine_155c5a0_alt1() __asm__("GameRoutine_155c5a0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_14b8e30_alt1(__int64) __asm__("GameRoutine_14b8e30");
void GameRoutine_1541940_alt1(__int64***, __int64, float32x4_t*,
                              __int64) __asm__("GameRoutine_1541940");
void GameRoutine_155c5d0_alt1(__int64) __asm__("GameRoutine_155c5d0");
void GmapDrawer_153aa40_alt2(__int64****, char) __asm__("GmapDrawer_153aa40");
__int64 GmapDrawer_1538c80(__int64* a1, char a2);
__int64 Components_a870e0(__int64*, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(__int64, __int64, unsigned __int64);
extern _DWORD* GameData_2131848;
extern __int64* GameData_212ca80[119];
extern __int64* GameData_2130df0[3];
extern __int64* GameData_2131840;
extern __int64* GameData_21318a8[3];
extern __int64* GameData_21318b0[2];
extern __int64* GameData_2132588[10];
extern __int64 GameData_2131678;
extern __int64 game_map_MapColorPalette_g_texture_archives;
unsigned __int64 GameHr_151d2b0(float*);
void GameRoutine_151d100(__int64*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_153aa20();
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx(_QWORD*, __int64,
                                                    unsigned __int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GmapDrawer_Unknown2(__int64 a1);

__int64 GmapDrawer_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  __int64 v3;
  _QWORD** v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  signed __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 result;
  _QWORD v42[6];

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  v4 = (_QWORD**)game_map_MapColorPalette_g_texture_archives;
  *(_WORD*)(v3 + 57) = 0;
  *(_QWORD*)(v3 + 60) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 8) = 0;
  v5 = (__int64*)(v3 + 8);
  *(_QWORD*)(v3 + 48) = 0x3F8000003F800000LL;
  *(_QWORD*)v3 = v4;
  v6 = fw_memory_HeapManager_Allocate_alt1(*v2, 296, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = GameData_2131678;
  *(_DWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 0;
  *(_WORD*)(v6 + 116) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_BYTE*)(v6 + 160) = 0;
  *(_BYTE*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_DWORD*)(v6 + 127) = 0;
  *(_DWORD*)(v6 + 292) = 2;
  *(_QWORD*)(v3 + 104) = v6;
  *(_BYTE*)(v3 + 56) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  *(_DWORD*)(v6 + 48) = 0x2000;
  *(_WORD*)(v6 + 108) = 256;
  *(_DWORD*)(v6 + 112) = -1082130432;
  *(_QWORD*)(v6 + 24) = 0;
  *(_QWORD*)(v3 + 96) = v6 + 24;
  gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx(
      *v4, (__int64)"UI/Gmap/gmap_textures.bntx", 0x1Au);
  gfxa_PrimitiveDrawManager_Impl_LoadTextureBntx(
      *v4, (__int64)"UI/Common/common_textures.bntx", 0x1Eu);
  v8 = fw_memory_HeapManager_Allocate_alt1(*v2, 672, 16, 0);
  v9 = v8;
  v10 = GameData_2130e00;
  if (*GameData_2130e00 == 0) {
    *GameData_2130e00 = v8;
    *GameData_2131848 = 1;
  }
  v11 = GameData_2131840;
  *(_QWORD*)(v8 + 312) = 0;
  *(_QWORD*)(v8 + 320) = 0;
  *(_QWORD*)(v8 + 328) = 0;
  *(_DWORD*)(v8 + 656) = 2;
  *(_DWORD*)(v8 + 668) = 0;
  *(_QWORD*)v8 = v11 + 2;
  *(_QWORD*)(v8 + 660) = 0;
  v12 = *(__int64**)(*GameData_212ca80[0] + 64);
  v13 = *(__int64**)(*GameData_212ca80[0] + 72);
  while (v12 != v13) {
    v14 = *v12++;
    __builtin_memset(&v42[2], 0, 32);
    v42[0] = v14;
    GameRoutine_151d100((__int64*)(v9 + 312), v42);
  }
  GameHr_151d2b0((float*)v9);
  v15 = *(_QWORD*)v9;
  *v10 = v9;
  (*(void (**)(__int64))(v15 + 16))(v9);
  v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 16, 16, 0);
  *v16 = GameData_21318b0[0] + 2;
  v17 = fw_memory_HeapManager_Allocate_alt1(*v2, 56, 16, 0);
  *(_DWORD*)v17 = 0;
  *(_QWORD*)(v17 + 24) = 2;
  *(_BYTE*)(v17 + 52) = 1;
  v18 = GameData_2130df0[0];
  *(_DWORD*)(v17 + 48) = 0;
  *(_QWORD*)(v17 + 36) = 0;
  v16[1] = v17;
  *(_QWORD*)(v17 + 8) = v18 + 2;
  *(_QWORD*)(v17 + 16) = 0;
  *(_WORD*)(v17 + 32) = 256;
  v19 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v2, 8, 16, 0);
  *v19 = (__int64)v16;
  v20 = *v2;
  *(_QWORD*)(v3 + 16) = v19 + 1;
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v20, 16, 16, 0);
  *v21 = GameData_2132588[0] + 2;
  v22 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 24, 16, 0);
  *v22 = 0;
  v22[1] = 0;
  v22[2] = 0;
  v21[1] = v22;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 16, 16, 0);
  v24 = *v19;
  v25 = v23 + 2;
  *(_QWORD*)(v3 + 8) = v23;
  v26 = v23;
  *(_QWORD*)(v3 + 24) = v23 + 2;
  *v23 = v24;
  v23[1] = v21;
  v27 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v27 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v27, (__int64)v19);
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v2, 8, 16, 0);
  *v28 = GameData_21318a8[0] + 2;
  v29 = *(_QWORD*)(v3 + 24);
  if ((unsigned __int64)v25 >= v29) {
    v31 = *v5;
    v32 = (signed __int64)v25 - *v5;
    v33 = (v32 >> 3) + 1;
    if (v33 >> 61 != 0) {
      GameRoutine_153aa20();
    }
    v34 = v29 - v31;
    if (v34 >> 2 > v33) {
      v33 = v34 >> 2;
    }
    if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
      v35 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v35 = v33;
    }
    if (v35 != 0) {
      if (v35 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v36 = v28;
      v37 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v35, 16, 0);
      v28 = v36;
    }
    else {
      v37 = 0;
    }
    v38 = v37 + 8 * v35;
    v39 = v37 + v32 - 8 * (v32 >> 3);
    *(_QWORD*)(v37 + v32) = v28;
    v30 = v37 + v32 + 8;
    memcpy(v39, v31, v32);
    *(_QWORD*)(v3 + 8) = v39;
    *(_QWORD*)(v3 + 24) = v38;
    if (v31 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v2 + v40, v31);
    }
  }
  else {
    v26[2] = v28;
    v30 = (__int64)(v26 + 3);
  }
  *(_QWORD*)(v3 + 16) = v30;
  result = Components_a870e0(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                              8LL) +
                   48LL),
      0);
  *(_QWORD*)(v3 + 32) = result;
  strcpy((char*)(result + 16), "GmapDrawObj");
  *(_QWORD*)(result + 272) = 11;
  *(_QWORD*)(a1 + 8) = v3;
  return result;
}

__int64 GmapDrawer_Unknown3(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *(_QWORD**)(result + 8);
  if (v1 != nullptr) {
    if (v1[4] != 0) {
      GameRoutine_a867a0(v1 + 4);
    }
    (*(void (**)(__int64))(*(_QWORD*)GameData_2241420 + 24LL))(
        GameData_2241420);
    if (GameData_2241420 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2241420 + 8LL))(
          GameData_2241420);
    }
    GameData_2241420 = 0;
    GameRoutine_19931a0(*v1, "UI/Common/common_textures.bntx", 30);
    GameRoutine_19931a0(*v1, "UI/Gmap/gmap_textures.bntx", 26);
    v2 = (_QWORD*)v1[1];
    v3 = (_QWORD*)v1[2];
    if (v2 != v3) {
      do {
        if (*v2 != 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
        }
        ++v2;
      } while (v2 != v3);
      v2 = (_QWORD*)v1[1];
    }
    v1[2] = v2;
    v4 = v1[13];
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = v1[9];
    v6 = fw_memory_g_heap_manager_ptr;
    if (v5 != 0) {
      v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v1[10] = v5;
      v8 = 128;
      if (*(_QWORD*)(v7 + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(v7 + v8, v5);
    }
    v9 = v1[1];
    if (v9 != 0) {
      v10 = *(_QWORD*)v6;
      v1[2] = v9;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v10 + v11, v9);
    }
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v12, v1);
  }
  return result;
}

__int64 GmapDrawer_1538c80(__int64* a1, char a2)
{
  __int64* v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  unsigned int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float32x4_t** v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  __int64 v22;
  float v25;
  __int64 v27;
  __int64****** v29;
  __int64***** v30;
  __int64**** v31;
  __int64*** v32;
  __int64** v33;
  __int64* v34;
  __int64 v35;
  float32x4_t* v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  float v41;
  float v42;
  float32x4_t* v43;
  float* v44;
  __int64 v45;
  float32x4_t*** v46;
  float32x4_t*** v47;
  float32x4_t** v48;
  float32x4_t* v49;
  float32x4_t* v50;
  float v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int128 v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  __int128 v61;
  float v62;
  bool v63;
  bool v64;
  bool v65;
  const char* v66;
  char* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD** v71;
  unsigned __int64 v72;
  float32x4_t*** v73;
  float32x4_t** v74;
  float32x4_t* v75;
  float v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int128 v82;
  __int128 v83;
  __int128 v84;
  __int128 v85;
  __int128 v86;
  __int128 v87;
  __int128 v88;
  float* v89;
  unsigned __int64 v90;
  __int64 v91;
  char* v92;
  float32x4_t** v93;
  unsigned __int64 v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  float32x4_t*** v98;
  float32x4_t*** v99;
  float32x4_t** v100;
  float32x4_t* v101;
  float32x4_t* v102;
  float v103;
  __int64 v104;
  float v106;
  float v107;
  float v108;
  long double v109;
  __int64 v110;
  char* v111;
  float32x4_t** v112;
  unsigned __int64 v113;
  __int64 v114;
  char* v115;
  float v116;
  unsigned __int8 v117;
  int v118;
  unsigned int v119;
  unsigned int v120;
  __int64 v121;
  int v122;
  long double v123;
  float* v124;
  __int64 v125;
  float32x4_t*** v126;
  float32x4_t*** v127;
  float32x4_t** v128;
  float32x4_t* v129;
  float32x4_t* v130;
  float v131;
  __int64 v132;
  char v133;
  float v134;
  float* v135;
  __int64 v136;
  float32x4_t*** v137;
  float32x4_t*** v138;
  float32x4_t** v139;
  float32x4_t* v140;
  float32x4_t* v141;
  float v142;
  __int64 v143;
  char v144;
  __int64* v145;
  float v146;
  float v147;
  _QWORD** v148;
  unsigned __int64 v149;
  float32x4_t*** v150;
  float32x4_t** v151;
  float32x4_t* v152;
  float32x4_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x4_t v165;
  float32x4_t v166;
  __int64 v167;
  float32x4_t* v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x4_t v171;
  unsigned __int64 v172;
  float32x4_t* v173;
  float v174;
  float v175;
  float32x4_t* v176;
  float32x4_t* v177;
  float v178;
  float v179;
  int v180;
  unsigned int v181;
  unsigned int v182;
  unsigned __int64 v183;
  float32x4_t v184;
  float v185;
  float v186;
  __int64 result;
  _QWORD* v188;
  _QWORD* v189;
  __int64 v190;
  float v191;
  float v192;
  float v193;
  float v194;
  __int128 v196;
  __int128 v197;
  int32x4_t v198;
  int32x4_t v199;
  struct {
    long double v200;
    __int128 v201;
    __int128 v202;
    __int128 v203;
    __int64 v204;
    __int64 v205;
  } v200_;
  long double v206;
  struct {
    long double v207;
    __int128 v208;
    __int128 v209;
    __int128 v210;
  } v207_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v3 = GameData_212d708;
  if (*((_BYTE*)a1 + 57) == 1) {
    v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL);
    if (v4 != 0) {
      v5 = (_DWORD*)a1[12];
      if (*(_QWORD*)v5 == 0 || *(_DWORD*)(*(_QWORD*)v5 + 16LL) != v5[2]) {
        DWORD2(v200_.v201) = 5;
        v6 = *(_QWORD*)(v4 + 32);
        *(_OWORD*)&v200_.v200 = (__typeof__(*(_OWORD*)&v200_.v200)){0};
        *(_QWORD*)&v200_.v202 = v6;
        v7 = (_QWORD*)*eft_g_effectSystem_ptr[0];
        *((_QWORD*)&v200_.v202 + 1) = *(_QWORD*)(v4 + 40);
        v200_.v203 = GameData_1a837f0;
        v8 = *((_QWORD*)GameData_212c540 + 1);
        v200_.v204 = *(_QWORD*)GameData_212c540;
        v200_.v205 = v8;
        *(_QWORD*)&v200_.v201 = "Gmap_Quest_Main";
        v9 = Manager_bc6460_alt1(v7, (__int64)&v200_.v200, 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        GameHr_14a10d0(&v200_.v200, (__int64)v9, v10, &GameData_1a9f09e),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v12 = *((_QWORD*)&v200_.v200 + 1);
        v11 = *(_QWORD*)&v200_.v200;
        if (*((_QWORD*)&v200_.v200 + 1) != 0) {
          atomic_fetch_add_explicit(
              (atomic_ullong* volatile)(*((_QWORD*)&v200_.v200 + 1) + 8LL), 1u,
              memory_order_relaxed);
        }
        v13 = a1[13];
        a1[12] = v11;
        a1[13] = v12;
        if (v13 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v82 = COERCE_AS(__typeof__(v82),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v85 = COERCE_AS(__typeof__(v85),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v13),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v82 = COERCE_AS(__typeof__(v82),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v85 = COERCE_AS(__typeof__(v85),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
          v12 = a1[13];
        }
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v82 = COERCE_AS(__typeof__(v82),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v85 = COERCE_AS(__typeof__(v85),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak_alt1(v12),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v82 = COERCE_AS(__typeof__(v82),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v85 = COERCE_AS(__typeof__(v85),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
        }
        v14 = *((_QWORD*)&v200_.v200 + 1);
        if (*((_QWORD*)&v200_.v200 + 1) != 0 &&
            atomic_fetch_add(
                (atomic_ullong* volatile)(*((_QWORD*)&v200_.v200 + 1) + 8LL),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v14),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
      }
    }
  }
  else {
    GameRoutine_14a1390_alt1(a1 + 12, 1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v15 = (float32x4_t**)GameData_2130e00;
  if (*(_BYTE*)(*(_QWORD*)(*v3 + 16) + 170LL) == 1) {
    v16 = *(float*)(*GameData_2130e00 + 380);
    v17 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL) +
          *((float*)a1 + 15);
    if (v17 >= v16) {
      v17 = v17 - v16;
    }
    *((float*)a1 + 15) = v17;
    v18 = (float)(PSEUDO_UNFUSED(
              (float)((float)(v17 / v16) * 0x1.6800000000000p+8f) *
              0x1.1df46a0000000p-6f)) +
          (float)(roundf((float)((float)((float)(v17 / v16) *
                                         0x1.6800000000000p+8f) *
                                 0x1.1df46a0000000p-6f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v18 <= 0x1.921fb60000000p+0f) {
      v20 = 0x1.0000000000000p+0f;
      if (v18 >= -0x1.921fb60000000p+0f) {
      LABEL_26:
        *((float*)a1 + 16) =
            (float)((float)(v20 *
                            (float)((float)((float)-(
                                                float)(*(float*)((char*)((
                                                                     __int128*)0x10LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188) -
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
                                                                                                                  (float)(v18 *
                                                                                                                          v18))) *
                                                                                                  (float)(v18 *
                                                                                                          v18))) *
                                                                               (float)(v18 *
                                                                                       v18))) *
                                                               (float)(v18 *
                                                                       v18))) *
                                            (float)(v18 * v18)) +
                                    0x1.0000000000000p+0f)) *
                    -0x1.0000000000000p-1f) +
            0x1.0000000000000p-1f;
        goto LABEL_27;
      }
      v19 = -0x1.921fb60000000p+1f;
    }
    else {
      v19 = 0x1.921fb60000000p+1f;
    }
    v18 = v19 - v18;
    v20 = -0x1.0000000000000p+0f;
    goto LABEL_26;
  }
LABEL_27:
  v21 = GameData_212d748[0];
  v22 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  if (*(_DWORD*)(v22 + 164) != 1 &&
      (unsigned int)(*(_DWORD*)(v22 + 244) - 1) > 1) {
    if (*GameData_21318c8[0] != 0) {
      v27 = *(_QWORD*)(*GameData_21318c8[0] + 8);
      if ((unsigned int)(*(_DWORD*)(v27 + 132) - 1) <= 1 &&
          ((**(__int64 (***)(__int64))(v27 + 80))(v27 + 80) & 1) != 0) {
        GameRoutine_155c5d0_alt1(v27 + 80),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        *(float32x4_t*)(v27 +
                        144) =
            vmlaq_n_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                        COERCE_AS(float32x4_t, 0),
                        (*(float (**)(__int64))(*(_QWORD*)(v27 + 88) + 16LL))(
                            v27 + 88)),
                        v10 = COERCE_AS(
                            __typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v55 = COERCE_AS(__typeof__(v55),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v56 = COERCE_AS(__typeof__(v56),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v57 = COERCE_AS(__typeof__(v57),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v58 = COERCE_AS(__typeof__(v58),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v59 = COERCE_AS(__typeof__(v59),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v60 = COERCE_AS(__typeof__(v60),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v82 = COERCE_AS(__typeof__(v82),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v83 = COERCE_AS(__typeof__(v83),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v84 = COERCE_AS(__typeof__(v84),
                                        PSEUDO_REGISTER(__n128, "v3", "=w")),
                        v85 = COERCE_AS(__typeof__(v85),
                                        PSEUDO_REGISTER(__n128, "v1", "=w")),
                        v86 = COERCE_AS(__typeof__(v86),
                                        PSEUDO_REGISTER(__n128, "v2", "=w")),
                        v87 = COERCE_AS(__typeof__(v87),
                                        PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    }
  }
  else {
    if (((**(__int64 (***)(__int64))(v22 + 112))(v22 + 112) & 1) != 0 ||
        *(_DWORD*)(v22 + 164) == 2) {
      GameRoutine_14b8e30_alt1(v22 + 112),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v25 = (*(float (**)(__int64))(*(_QWORD*)(v22 + 120) + 16LL))(v22 + 120),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      game_14a1b00(*(__int64**)(v22 + 168), v25),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    if (((**(__int64 (***)(__int64))(v22 + 192))(v22 + 192) & 1) != 0) {
      GameRoutine_14b8e30_alt1(v22 + 192),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      *(float32x4_t*)(v22 +
                      256) =
          vmlaq_n_f32((*v15)[32], vsubq_f32((*v15)[33], (*v15)[32]),
                      (*(float (**)(__int64))(*(_QWORD*)(v22 + 200) + 16LL))(
                          v22 + 200)),
                      v10 = COERCE_AS(
                          __typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v55 = COERCE_AS(__typeof__(v55),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v56 = COERCE_AS(__typeof__(v56),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v57 = COERCE_AS(__typeof__(v57),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v58 = COERCE_AS(__typeof__(v58),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v59 = COERCE_AS(__typeof__(v59),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v60 = COERCE_AS(__typeof__(v60),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v82 = COERCE_AS(__typeof__(v82),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v83 = COERCE_AS(__typeof__(v83),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v84 = COERCE_AS(__typeof__(v84),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v85 = COERCE_AS(__typeof__(v85),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v86 = COERCE_AS(__typeof__(v86),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v87 = COERCE_AS(__typeof__(v87),
                                      PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  GameRoutine_1993840_alt1(**(_QWORD**)*a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v29 = **(__int64********)*a1;
  *((_DWORD*)v29 + 4327) = 1;
  v30 = *v29;
  *((_DWORD*)v30 + 4328) = 2;
  v31 = *v30;
  *((_DWORD*)v31 + 4351) = 1;
  v32 = *v31;
  *((_BYTE*)v32 + 17393) = 1;
  v33 = *v32;
  *((_BYTE*)v33 + 17394) = 1;
  v34 = *v33;
  *((_BYTE*)v34 + 17395) = 1;
  v35 = *v34;
  v36 = *(float32x4_t**)v35;
  *(_DWORD*)(v35 + 17296) = 0;
  GameRoutine_1994460_alt2(v36),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v37 = *(_QWORD*)(*GameData_212c780 + 8);
  v39 = *(__int64**)(v37 + 48);
  v38 = *(__int64**)(v37 + 56);
  if (v39 != v38) {
    v40 = GameData_212c638;
    v41 = 0x1.0000000000000p+4f;
    v42 = *(float*)GameData_212ea30;
    while (1) {
      v43 = (float32x4_t*)*v39;
      if (*(_BYTE*)(*v39 + 115) == 1) {
        v44 = &LANES128((*v15)[41]).n128_f32[1];
      }
      else {
        v45 = *(_QWORD*)(*GameData_212c790 + 8);
        v46 = *(float32x4_t****)(v45 + 8);
        v47 = *(float32x4_t****)(v45 + 16);
        while (1) {
          if (v46 == v47) {
            v50 = *v15;
            goto LABEL_56;
          }
          v48 = *v46;
          if (**v46 == v43) {
            v49 = v48[12];
            if (v49 != nullptr &&
                (unsigned int)LANES128(v49[2]).n128_u8[0] - 3 < 2) {
              break;
            }
          }
          ++v46;
        }
        v50 = *v15;
        if (((_WORD)v48[68] & 8) != 0) {
          v44 = &LANES128(v50[41]).n128_f32[2];
          goto LABEL_57;
        }
      LABEL_56:
        v44 = (float*)&v50[5] + (unsigned __int8)Impl_13261c0_alt1(*v39),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    LABEL_57:
      v51 = *v44;
      v52 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v40 + 32LL) - 8LL);
      v54 = *(_QWORD*)(v52 + 24);
      v53 = *(_QWORD*)(v52 + 32);
      if (v53 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                                  memory_order_relaxed);
      }
      v200_.v200 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v54 + 16LL))(v54),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v200_.v201 = v55;
      v200_.v202 = v56;
      v200_.v203 = v57;
      v207_.v207 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v54 + 24LL))(v54),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v207_.v208 = v58;
      v207_.v209 = v59;
      v207_.v210 = v60;
      *(__n64*)&v61 = GameRoutine_a6c440_alt1(v43 + 2, (__int128*)&v200_.v200,
                                              (float32x4_t*)&v207_.v207),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v196 = v61;
        (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v53),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v61 = v196;
      }
      if (*((float*)&v61 + 2) > 0x0.0p+0f) {
        goto LABEL_44;
      }
      v62 = (float)(v51 * 0x1.ddddde0000000p-5f) * 0x1.4000000000000p+3f;
      v63 = (float)(0x0.0p+0f - v62) > *(float*)&v61 ||
            *(float*)&v61 > (float)(v62 + 0x1.e000000000000p+10f);
      v64 = v63 || (float)(0x0.0p+0f - v62) > *((float*)&v61 + 1);
      v65 = v64 || *((float*)&v61 + 1) > (float)(v62 + 0x1.0e00000000000p+10f);
      if (v65 || LANES128(v43[18]).n128_f32[0] == 0x0.0p+0f) {
        goto LABEL_44;
      }
      v66 = Impl_1327b40_alt1((__int64)v43),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v67 = game_util_Format_alt1((__int64)"Spot_%s", v66),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (*((_BYTE*)a1 + 56) == 1) {
        v68 = LANES128(v43[7]).n128_u64[1];
        if (v68 != 0 && game_GameModeData_instance_ != 0) {
          v69 = *(_QWORD*)(game_GameModeData_instance_ + 24);
          if (v69 != 0 && v68 == *(_QWORD*)(v69 + 200)) {
            v67 = game_util_Format_alt1((__int64)"%s_Destination", v67),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
        }
      }
      v70 = *(_QWORD*)(*GameData_212d708 + 16);
      if (*(_BYTE*)(v70 + 169) == 1 && v43 == *(float32x4_t**)(v70 + 96)) {
        v90 = *((_QWORD*)GameData_212c958 + 1);
        *(_QWORD*)&v200_.v200 = *(_QWORD*)GameData_212c958;
        *((_QWORD*)&v200_.v200 + 1) = v90;
        if (*GameData_21318c8[0] != 0) {
          v91 = *(_QWORD*)(*GameData_21318c8[0] + 8);
          v93 = *(float32x4_t***)(v91 + 160);
          v92 = *(char**)(v91 + 168);
          if (v93 != (float32x4_t**)v92) {
            v94 = v92 - (char*)v93 - 8;
            if ((~(_BYTE)v94 & 0x18) != 0) {
              v95 = ((unsigned __int8)((unsigned int)v94 >> 3) + 1) & 3;
              while (*v93 != v43) {
                ++v93;
                if (--v95 == 0) {
                  goto LABEL_102;
                }
              }
            LABEL_144:
              if (v93 != (float32x4_t**)v92 &&
                  (unsigned int)(*(_DWORD*)(v91 + 132) - 1) <= 1) {
                v200_.v200 = GameRoutine_155c5a0_alt1(),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v55 = COERCE_AS(__typeof__(v55),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v57 = COERCE_AS(__typeof__(v57),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v58 = COERCE_AS(__typeof__(v58),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v82 = COERCE_AS(__typeof__(v82),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v83 = COERCE_AS(__typeof__(v83),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v84 = COERCE_AS(__typeof__(v84),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v85 = COERCE_AS(__typeof__(v85),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v86 = COERCE_AS(__typeof__(v86),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v87 = COERCE_AS(__typeof__(v87),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
              }
            }
            else {
            LABEL_102:
              if (v94 >= 0x18) {
                v93 += 2;
                while (1) {
                  if (*(v93 - 2) == v43) {
                    v93 -= 2;
                    goto LABEL_144;
                  }
                  if (*(v93 - 1) == v43) {
                    --v93;
                    goto LABEL_144;
                  }
                  if (*v93 == v43) {
                    goto LABEL_144;
                  }
                  if (v93[1] == v43) {
                    break;
                  }
                  v96 = (char*)(v93 + 2);
                  v93 += 4;
                  if (v96 == v92) {
                    goto LABEL_147;
                  }
                }
                ++v93;
                goto LABEL_144;
              }
            }
          }
        }
      LABEL_147:
        v116 = LANES128(v43[18]).n128_f32[0];
        v117 = LANES128(v43[11]).n128_u8[2];
        if (v116 == 0x0.0p+0f) {
          v116 = 0x1.0000000000000p-1f;
        }
        *((float*)&v200_.v200 + 3) = v116;
        if ((v117 & 1) == 0 || (v118 = LANES128(v43[11]).n128_u8[0]) == 2 ||
            v118 == 3 && LANES128(v43[7]).n128_u8[0] == 1) {
          *(float*)&v119 = vmuls_lane_f32(0x1.0000000000000p-1f,
                                          *(float32x2_t*)&v200_.v200, 1);
          *(float*)&v120 = vmuls_lane_f32(0x1.0000000000000p-1f,
                                          *(float32x4_t*)&v200_.v200, 2);
          *(float*)&v200_.v200 = 0x1.0000000000000p-1f * *(float*)&v200_.v200;
          *(_QWORD*)((char*)&v200_.v200 + 4) = __PAIR64__(v120, v119);
        }
        v198 = *(int32x4_t*)&v200_.v200;
        v193 = powf_alt1(*(float*)&v200_.v200, v42),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v191 = powf_alt1(LANES128(v198).n128_f32[1], v42),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        *(float*)&v121 = powf_alt1(LANES128(v198).n128_f32[2], v42),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v122 = LANES128(v43[7]).n128_u8[3];
        HIDWORD(v121) = LANES64_OF(vdup_laneq_s32(v198, 3)).n64_u32[0];
        *(_QWORD*)&v123 = __PAIR64__(LODWORD(v191), LODWORD(v193));
        *((_QWORD*)&v123 + 1) = v121;
        v200_.v200 = v123;
        if (v122 == 1) {
          v124 = &LANES128((*v15)[41]).n128_f32[1];
        }
        else {
          v125 = *(_QWORD*)(*GameData_212c790 + 8);
          v126 = *(float32x4_t****)(v125 + 8);
          v127 = *(float32x4_t****)(v125 + 16);
          while (1) {
            if (v126 == v127) {
              v130 = *v15;
              goto LABEL_165;
            }
            v128 = *v126;
            if (**v126 == v43) {
              v129 = v128[12];
              if (v129 != nullptr &&
                  (unsigned int)LANES128(v129[2]).n128_u8[0] - 3 < 2) {
                break;
              }
            }
            ++v126;
          }
          v130 = *v15;
          if (((_WORD)v128[68] & 8) != 0) {
            v124 = &LANES128(v130[41]).n128_f32[2];
            goto LABEL_166;
          }
        LABEL_165:
          v124 = (float*)&v130[5] +
                 (unsigned __int8)Impl_13261c0_alt1((__int64)v43),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
      LABEL_166:
        v131 = *v124;
        if ((unsigned __int8)Impl_13261c0_alt1((__int64)v43) == 13) {
          v132 = 252;
        }
        else {
          v133 = Impl_13261c0_alt1((__int64)v43),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
          v132 = 252;
          if (v133 != 12) {
            v132 = 248;
          }
        }
        v134 = *(float*)(*(_QWORD*)(*GameData_212d708 + 16) + v132);
        if (LANES128(v43[7]).n128_u8[3] == 1) {
          v135 = &LANES128((*v15)[41]).n128_f32[1];
        }
        else {
          v136 = *(_QWORD*)(*GameData_212c790 + 8);
          v137 = *(float32x4_t****)(v136 + 8);
          v138 = *(float32x4_t****)(v136 + 16);
          while (1) {
            if (v137 == v138) {
              v141 = *v15;
              goto LABEL_181;
            }
            v139 = *v137;
            if (**v137 == v43) {
              v140 = v139[12];
              if (v140 != nullptr &&
                  (unsigned int)LANES128(v140[2]).n128_u8[0] - 3 < 2) {
                break;
              }
            }
            ++v137;
          }
          v141 = *v15;
          if (((_WORD)v139[68] & 8) != 0) {
            v135 = &LANES128(v141[41]).n128_f32[2];
            goto LABEL_182;
          }
        LABEL_181:
          v135 = (float*)&v141[5] +
                 (unsigned __int8)Impl_13261c0_alt1((__int64)v43),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
      LABEL_182:
        v142 = *v135;
        if ((unsigned __int8)Impl_13261c0_alt1((__int64)v43) == 13) {
          v143 = 260;
        }
        else {
          v144 = Impl_13261c0_alt1((__int64)v43),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
          v143 = 260;
          if (v144 != 12) {
            v143 = 256;
          }
        }
        v145 = GameData_212d708;
        v146 = (float)(v131 * 0x1.ddddde0000000p-5f) * v134;
        v147 = (float)(v142 * 0x1.ddddde0000000p-5f) *
               *(float*)(*(_QWORD*)(*GameData_212d708 + 16) + v143);
        GameRoutine_1993840_alt1(**(_QWORD**)*a1),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v148 = *(_QWORD***)*a1;
        v149 = strlen_alt1(v67),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v150 = (float32x4_t***)PrimitiveDrawManager_19935e0_alt1(
            *v148, (__int64)v67, v149, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v151 = *v150;
        v152 = **v150;
        *((_BYTE*)v151 + 17392) = 1;
        GameRoutine_1994460_alt2(v152),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        GameRoutine_1993840_alt1(**(_QWORD**)*a1),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        LANES128(v153).n128_u64[0] = 0;
        v155 = *(float32x4_t*)GameData_212c2a0;
        v154 = *((float32x4_t*)GameData_212c2a0 + 1);
        v157 =
            *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
        v156 = *(float32x4_t*)((char*)((char*)0x20LL) +
                               (_QWORD)GameData_212c2a0 + 16);
        LANES128(v158).n128_u64[0] = 0;
        LANES128(v153).n128_u64[1] = LODWORD(v146);
        v159 = vmlaq_f32(
            vmlaq_f32(
                vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0), v146),
                COERCE_AS(float32x4_t, GameData_1a83610),
                COERCE_AS(float32x4_t, 0)),
            COERCE_AS(float32x4_t, GameData_1a83090),
            COERCE_AS(float32x4_t, 0));
        v160 = vmlaq_f32(
            vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0),
                                     COERCE_AS(float32x4_t, GameData_1a82dd0)),
                           COERCE_AS(float32x4_t, GameData_1a83610),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL), 1),
            COERCE_AS(float32x4_t, GameData_1a83090),
            COERCE_AS(float32x4_t, 0));
        v161 = vmlaq_laneq_f32(
            vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0),
                                COERCE_AS(float32x4_t, GameData_1a82dd0)),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x4_t, 0)),
            COERCE_AS(float32x4_t, GameData_1a83090), v153, 2);
        v162 = vaddq_f32(v43[2], COERCE_AS(float32x4_t, 0));
        v163 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v159, LANES128(v157).n128_f32[0]), v160,
                           COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                           1),
            v161, v157, 2);
        v164 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v159, COERCE_FLOAT(*(_OWORD*)GameData_212c2a0)),
                v160, *(float32x2_t*)GameData_212c2a0, 1),
            v161, *(float32x4_t*)GameData_212c2a0, 2);
        v165 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v159, LANES128(v154).n128_f32[0]), v160,
                           COERCE_AS(float32x2_t, LANES128(v154).n128_u64[0]),
                           1),
            v161, v154, 2);
        v166 = vaddq_f32(
            v162,
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v159, LANES128(v156).n128_f32[0]), v160,
                    COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0]), 1),
                v161, v156, 2));
        LANES128(v158).n128_u64[1] = LODWORD(v147);
        v167 = **(_QWORD**)*a1;
        *(_BYTE*)(v167 + 17396) = 1;
        v168 = *(float32x4_t**)v167;
        v169 = vmlaq_f32(
            vmlaq_f32(
                vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0), v147),
                COERCE_AS(float32x4_t, GameData_1a83610),
                COERCE_AS(float32x4_t, 0)),
            COERCE_AS(float32x4_t, GameData_1a83090),
            COERCE_AS(float32x4_t, 0));
        v170 = vmlaq_f32(
            vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0),
                                     COERCE_AS(float32x4_t, GameData_1a82dd0)),
                           COERCE_AS(float32x4_t, GameData_1a83610),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL), 1),
            COERCE_AS(float32x4_t, GameData_1a83090),
            COERCE_AS(float32x4_t, 0));
        v171 = vmlaq_laneq_f32(
            vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0),
                                COERCE_AS(float32x4_t, GameData_1a82dd0)),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x4_t, 0)),
            COERCE_AS(float32x4_t, GameData_1a83090), v158, 2);
        v168[1166] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v169, LANES128(v155).n128_f32[0]), v170,
                           COERCE_AS(float32x2_t, LANES128(v155).n128_u64[0]),
                           1),
            v171, v155, 2);
        v168[1167] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v169, LANES128(v154).n128_f32[0]), v170,
                           COERCE_AS(float32x2_t, LANES128(v154).n128_u64[0]),
                           1),
            v171, v154, 2);
        v168[1168] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v169, LANES128(v157).n128_f32[0]), v170,
                           COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                           1),
            v171, v157, 2);
        v168[1169] = vaddq_f32(
            v162,
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v169, LANES128(v156).n128_f32[0]), v170,
                    COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0]), 1),
                v171, v156, 2));
        v172 = LANES128(*(v168)).n128_u64[0];
        v173 = *(float32x4_t**)v172;
        *(float32x4_t*)(v172 + 18592) = v164;
        *(float32x4_t*)(v172 + 18608) = v165;
        *(float32x4_t*)(v172 + 18624) = v163;
        *(float32x4_t*)(v172 + 18640) = v166;
        GameRoutine_1994460_alt2(v173),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        *(_OWORD*)&v207_.v207 = (__typeof__(*(_OWORD*)&v207_.v207)){0};
        v174 = Camera_1315570_alt1(*(_QWORD*)(*GameData_212d718 + 16)),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v41 = 0x1.0000000000000p+4f;
        v175 = (float)(15 - (unsigned __int8)Impl_13261c0_alt1((__int64)v43)),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if (*(float32x4_t**)(*(_QWORD*)(*v145 + 16) + 96LL) == v43) {
          v175 = 0x1.0000000000000p+4f;
        }
        game_gmap_1540e50_alt1(
            (__int64**)a1, (__int128*)&v207_.v207, a1 + 5,
            (__int128*)&v200_.v200, v174,
            (float)(PSEUDO_UNFUSED(
                LANES128((*v15)[41]).n128_f32[3] *
                (float)(LANES128((*v15)[36]).n128_u32[0] + 1))) +
                (float)(LANES128((*v15)[41]).n128_f32[3] * v175),
            0x1.0000000000000p+0f),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        if ((a2 & 1) == 0) {
          game_HashString_alt1((__int64)&GameData_1a9a548),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          *(_OWORD*)&v207_.v207 = (__typeof__(*(_OWORD*)&v207_.v207)){0};
          game_gmap_1541180(a1, (unsigned int*)v43, (__int128*)&v207_.v207,
                            0x1.0000000000000p+0f),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v55 = COERCE_AS(__typeof__(v55),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v57 = COERCE_AS(__typeof__(v57),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v82 = COERCE_AS(__typeof__(v82),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v83 = COERCE_AS(__typeof__(v83),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v84 = COERCE_AS(__typeof__(v84),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v85 = COERCE_AS(__typeof__(v85),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v86 = COERCE_AS(__typeof__(v86),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v87 = COERCE_AS(__typeof__(v87),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
        }
        PrimitiveDrawManager_1994180_alt1(**(__int64***)*a1),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v21 = GameData_212d748[0];
        if (game_gmap_GmapClock_instance_ == 0 ||
            *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                    *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                    *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
                0) {
          goto LABEL_43;
        }
        v176 = v43 + 2;
        v177 = (float32x4_t*)&v200_.v200;
        goto LABEL_42;
      }
      GameRoutine_1993840_alt1(**(_QWORD**)*a1),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v71 = *(_QWORD***)*a1;
      v72 = strlen_alt1(v67),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v73 = (float32x4_t***)PrimitiveDrawManager_19935e0_alt1(
          *v71, (__int64)v67, v72, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v74 = *v73;
      v75 = **v73;
      *((_BYTE*)v74 + 17392) = 1;
      GameRoutine_1994460_alt2(v75),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v76 = LANES128(v43[18]).n128_f32[0];
      v77 = *((_QWORD*)GameData_212c958 + 1);
      if (v76 == 0x0.0p+0f) {
        v76 = 0x1.0000000000000p-1f;
      }
      *(_QWORD*)&v206 = *(_QWORD*)GameData_212c958;
      *((_QWORD*)&v206 + 1) = v77;
      v78 = *(_QWORD*)v40;
      *((float*)&v206 + 3) = v76;
      v79 = *(_QWORD*)(*(_QWORD*)(v78 + 32) - 8LL);
      v81 = *(_QWORD*)(v79 + 24);
      v80 = *(_QWORD*)(v79 + 32);
      if (v80 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 8), 1u,
                                  memory_order_relaxed);
      }
      v200_.v200 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v81 + 16LL))(v81),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v200_.v201 = v82;
      v200_.v202 = v83;
      v200_.v203 = v84;
      v207_.v207 =
          ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v81 + 24LL))(v81),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v207_.v208 = v85;
      v207_.v209 = v86;
      v207_.v210 = v87;
      *(__n64*)&v88 = GameRoutine_a6c440_alt1(v43 + 2, (__int128*)&v200_.v200,
                                              (float32x4_t*)&v207_.v207),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v197 = v88;
        (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v80),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v88 = v197;
      }
      if (*((float*)&v88 + 2) > 0x0.0p+0f ||
          *(float*)&v88 < -0x1.9000000000000p+6f ||
          *(float*)&v88 > 0x1.f900000000000p+10f ||
          *((float*)&v88 + 1) < -0x1.9000000000000p+6f ||
          *((float*)&v88 + 1) > 0x1.2700000000000p+10f) {
        goto LABEL_43;
      }
      if (LANES128(v43[7]).n128_u8[3] == 1) {
        v89 = &LANES128((*v15)[41]).n128_f32[1];
      }
      else {
        v97 = *(_QWORD*)(*GameData_212c790 + 8);
        v98 = *(float32x4_t****)(v97 + 8);
        v99 = *(float32x4_t****)(v97 + 16);
        while (1) {
          if (v98 == v99) {
            v102 = *v15;
            goto LABEL_119;
          }
          v100 = *v98;
          if (**v98 == v43) {
            v101 = v100[12];
            if (v101 != nullptr &&
                (unsigned int)LANES128(v101[2]).n128_u8[0] - 3 < 2) {
              break;
            }
          }
          ++v98;
        }
        v102 = *v15;
        if (((_WORD)v100[68] & 8) != 0) {
          v89 = &LANES128(v102[41]).n128_f32[2];
          goto LABEL_120;
        }
      LABEL_119:
        v89 =
            (float*)&v102[5] + (unsigned __int8)Impl_13261c0_alt1((__int64)v43),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    LABEL_120:
      v103 = *v89 * 0x1.ddddde0000000p-5f;
      if (LANES128(v43[7]).n128_u8[5] == 1) {
        v104 = *(_QWORD*)(*(_QWORD*)v21 + 8LL);
        if (*(_DWORD*)(v104 + 164) == 1 ||
            (unsigned int)(*(_DWORD*)(v104 + 244) - 1) <= 1) {
          break;
        }
      }
      if (*GameData_21318c8[0] == 0) {
        goto LABEL_199;
      }
      v110 = *(_QWORD*)(*GameData_21318c8[0] + 8);
      v112 = *(float32x4_t***)(v110 + 160);
      v111 = *(char**)(v110 + 168);
      if (v112 == (float32x4_t**)v111) {
        goto LABEL_199;
      }
      v113 = v111 - (char*)v112 - 8;
      if ((~(_BYTE)v113 & 0x18) != 0) {
        v114 = ((unsigned __int8)((unsigned int)v113 >> 3) + 1) & 3;
        while (*v112 != v43) {
          ++v112;
          if (--v114 == 0) {
            goto LABEL_133;
          }
        }
      LABEL_196:
        if (v112 == (float32x4_t**)v111 ||
            (unsigned int)(*(_DWORD*)(v110 + 132) - 1) > 1) {
          goto LABEL_199;
        }
        v178 = LANES128((*v15)[21]).n128_f32[0];
        v179 = LANES128((*v15)[21]).n128_f32[1];
        v108 = v178 + (float)(PSEUDO_UNFUSED(
                          (float)(v179 - v178) *
                          (*(float (**)(__int64))(*(_QWORD*)(v110 + 88) +
                                                  16LL))(v110 + 88))),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v109 = GameRoutine_155c5a0_alt1(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      LABEL_126:
        v103 = v103 * v108;
        v41 = 0x1.0000000000000p+4f;
        v206 = v109;
        goto LABEL_199;
      }
    LABEL_133:
      if (v113 >= 0x18) {
        v112 += 2;
        while (1) {
          if (*(v112 - 2) == v43) {
            v112 -= 2;
            goto LABEL_196;
          }
          if (*(v112 - 1) == v43) {
            --v112;
            goto LABEL_196;
          }
          if (*v112 == v43) {
            goto LABEL_196;
          }
          if (v112[1] == v43) {
            break;
          }
          v115 = (char*)(v112 + 2);
          v112 += 4;
          if (v115 == v111) {
            goto LABEL_199;
          }
        }
        ++v112;
        goto LABEL_196;
      }
    LABEL_199:
      if ((LANES128(v43[11]).n128_u8[2] & 1) == 0 ||
          (v180 = LANES128(v43[11]).n128_u8[0]) == 2 ||
          v180 == 3 && LANES128(v43[7]).n128_u8[0] == 1) {
        *(float*)&v181 =
            vmuls_lane_f32(0x1.0000000000000p-1f, *(float32x2_t*)&v206, 1);
        *(float*)&v182 =
            vmuls_lane_f32(0x1.0000000000000p-1f, *(float32x4_t*)&v206, 2);
        *(float*)&v206 = 0x1.0000000000000p-1f * *(float*)&v206;
        *(_QWORD*)((char*)&v206 + 4) = __PAIR64__(v182, v181);
      }
      v199 = *(int32x4_t*)&v206;
      v194 = powf_alt1(*(float*)&v206, v42),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v192 = powf_alt1(LANES128(v199).n128_f32[1], v42),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      *(float*)&v183 = powf_alt1(LANES128(v199).n128_f32[2], v42),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      HIDWORD(v183) = LANES64_OF(vdup_laneq_s32(v199, 3)).n64_u32[0];
      LANES128(v184).n128_u64[0] = __PAIR64__(LODWORD(v192), LODWORD(v194));
      LANES128(v184).n128_u64[1] = v183;
      v206 = *(long double*)&v184;
      v185 = Camera_1315570_alt1(*(_QWORD*)(*GameData_212d718 + 16)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v186 = (float)(15 - (unsigned __int8)Impl_13261c0_alt1((__int64)v43)),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if (*(float32x4_t**)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL) == v43) {
        v186 = v41;
      }
      game_gmap_1540e50_alt1(
          (__int64**)a1, (__int128*)&v43[2], a1 + 5, (__int128*)&v206, v185,
          (float)(PSEUDO_UNFUSED(
              LANES128((*v15)[41]).n128_f32[3] *
              (float)(LANES128((*v15)[36]).n128_u32[0] + 1))) +
              (float)(LANES128((*v15)[41]).n128_f32[3] * v186),
          v103),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      if ((a2 & 1) == 0) {
        game_HashString_alt1((__int64)&GameData_1a9a548),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
        game_gmap_1541180(a1, (unsigned int*)v43, (__int128*)&v43[2], v103),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      if (game_gmap_GmapClock_instance_ != 0 &&
          *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
              0) {
        v176 = v43 + 2;
        v177 = (float32x4_t*)&v206;
      LABEL_42:
        GameRoutine_1541940_alt1((__int64***)a1, (__int64)v43, v176,
                                 (__int64)v177),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v55 =
                COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v57 =
                COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v58 =
                COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v82 =
                COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v83 =
                COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v84 =
                COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v85 =
                COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v86 =
                COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v87 =
                COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    LABEL_43:
      PrimitiveDrawManager_1994180_alt1(**(__int64***)*a1),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
    LABEL_44:
      if (++v39 == v38) {
        goto LABEL_211;
      }
    }
    v106 = LANES128((*v15)[21]).n128_f32[0];
    v107 = LANES128((*v15)[21]).n128_f32[1];
    v108 = v106 + (float)(PSEUDO_UNFUSED(
                      (float)(v107 - v106) *
                      (*(float (**)(__int64))(*(_QWORD*)(v104 + 200) + 16LL))(
                          v104 + 200))),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v109 = BladeResonance_14b7810_alt1(),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
    goto LABEL_126;
  }
LABEL_211:
  GmapDrawer_153aa40_alt2((__int64****)a1, a2 & 1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
  result = (__int64)PrimitiveDrawManager_1994180_alt1(**(__int64***)*a1),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v188 = (_QWORD*)a1[1];
  v189 = (_QWORD*)a1[2];
  while (v188 != v189) {
    v190 = *v188;
    (*(void (**)(_QWORD))(*(_QWORD*)*v188 + 24LL))(*v188),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v190 + 16LL))(v190),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
    if ((result & 1) != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v190 + 32LL))(v190),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v57 = COERCE_AS(__typeof__(v57), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v58 = COERCE_AS(__typeof__(v58), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v82 = COERCE_AS(__typeof__(v82), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v83 = COERCE_AS(__typeof__(v83), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v84 = COERCE_AS(__typeof__(v84), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v85 = COERCE_AS(__typeof__(v85), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v86 = COERCE_AS(__typeof__(v86), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v87 = COERCE_AS(__typeof__(v87), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    ++v188;
  }
  return result;
}

void GmapDrawer_153aa40(__int64** a1, char a2)
{
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  long double v13;
  __int64 v14;
  float32x4_t** v15;
  float32x4_t** v16;
  _QWORD* v17;
  long double v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  unsigned __int64 v26;
  bool v27;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  float32x4_t v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __n128 v43;
  __int64 v44;
  unsigned __int64 v45;
  float32x4_t*** v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  float v51;
  float32x4_t** v52;
  _QWORD* v53;
  float32x4_t* v54;
  char* v55;
  float32x4_t*** v56;
  unsigned __int64 v57;
  __int64* v58;
  float32x4_t* v59;
  _BOOL4 v60;
  int v61;
  __int64 v62;
  float32x4_t*** v63;
  unsigned __int64 v64;
  __int64 v65;
  float32x4_t*** v66;
  char* v67;
  int v68;
  int v69;
  float32x4_t* v70;
  __int64 v71;
  long double v72;
  int32x4_t v73;
  unsigned __int8 v74;
  float32x4_t v75;
  __int64 v76;
  __int128 v77;
  unsigned __int64 v78;
  __int64 v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float v87;
  float v88;
  float32x4_t* v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  int8x16_t v93;
  float32x4_t v94;
  int8x16_t v95;
  float32x4_t v96;
  int8x16_t v97;
  __int64 v98;
  __int128* v99;
  __int128 v100;
  __int64 v101;
  float32x4_t* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  float32x4_t v106;
  __int128 v107;
  __int128 v108;
  __int128 v109;
  __int128 v110;
  __int128 v111;
  __n128 v112;
  __int64* v113;
  float* v114;
  int v115;
  int v116;
  __int64 v117;
  float v118;
  float v119;
  int8x16_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  __int64 v124;
  int8x8_t v125;
  float32x4_t v126;
  __int64 v127;
  int v128;
  int v129;
  float32x4_t v130;
  float32x4_t v131;
  int8x16_t v132;
  float32x4_t v133;
  float32x4_t v134;
  float32x4_t v135;
  float32x4_t v136;
  int8x16_t v137;
  float32x4_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  float32x4_t v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  int v150;
  int v151;
  float32x4_t v152;
  __int64 v153;
  __int64 v154;
  float32x4_t v155;
  __int64 v156;
  __int64 v157;
  int v158;
  int v159;
  float32x4_t v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  int v165;
  int v166;
  float32x4_t v167;
  __int64 v168;
  int32x4_t v169;
  __int64 v170;
  int v171;
  float32x4_t v172;
  float32x4_t v173;
  int8x8_t v174;
  float32x4_t v175;
  int8x8_t v176;
  float v177;
  float v178;
  __int64 v179;
  float32x4_t v180;
  int8x16_t v181;
  __int64 v182;
  int v183;
  int v184;
  float32x4_t v185;
  float32x4_t v186;
  float32x4_t v187;
  int8x16_t v188;
  float32x4_t v189;
  float32x4_t v190;
  float32x4_t v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;
  float32x4_t v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  int v201;
  int v202;
  float32x4_t v203;
  __int64 v204;
  __int64 v205;
  float32x4_t v206;
  __int64 v207;
  __int64 v208;
  int v209;
  int v210;
  float32x4_t v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  int v216;
  int v217;
  float32x4_t v218;
  __int64 v219;
  __int64 v220;
  __int64* v221;
  __int64 v222;
  float32x4_t* v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64* v228;
  __int64 v229;
  float32x4_t v230;
  __int128 v231;
  __int128 v232;
  __int128 v233;
  __int128 v234;
  __int128 v235;
  __n128 v236;
  __int64 v237;
  float v238;
  __int64 v239;
  int v240;
  float v241;
  float v242;
  __int64 v243;
  float32x4_t v244;
  float32x4_t v245;
  float32x4_t v246;
  float32x4_t v247;
  float v248;
  float v249;
  float32x4_t v250;
  __int128 v251;
  float32x4_t v252;
  float32x4_t v253;
  __int64 v254;
  float v255;
  float32x4_t v256;
  __int64 v257;
  int v258;
  int v259;
  float32x4_t v260;
  int8x16_t v261;
  float32x4_t v262;
  float32x4_t v263;
  float32x4_t v264;
  int8x16_t v265;
  float32x4_t v266;
  float32x4_t v267;
  float32x4_t v268;
  float32x4_t v269;
  float32x4_t v270;
  float32x4_t v271;
  float32x4_t v272;
  float32x4_t v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  int v278;
  int v279;
  float32x4_t v280;
  __int64 v281;
  __int64 v282;
  float32x4_t v283;
  __int64 v284;
  __int64 v285;
  int v286;
  int v287;
  float32x4_t v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  int v293;
  int v294;
  float32x4_t v295;
  __int64 v296;
  __int64 v297;
  __int64* v298;
  __int64 v299;
  float32x4_t v300;
  float32x4_t v301;
  int v302;
  float32x4_t v303;
  float32x4_t v304;
  __int128 v305;
  unsigned int v306;
  float32x4_t v307;
  float32x4_t v308;
  float32x4_t v309;
  float32x4_t v310;
  float v311;
  float v312;
  float32x4_t* v313;
  float v314;
  __int128* v315;
  float32x4_t v316;
  __int128 v317;
  float v318;
  unsigned __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  float32x4_t v323;
  __int128 v324;
  __int128 v325;
  __int128 v326;
  __int128 v327;
  __int128 v328;
  __n128 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  float32x4_t v333;
  __int128 v334;
  __int128 v335;
  __int128 v336;
  __int128 v337;
  __int128 v338;
  __n128 v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  float32x4_t v343;
  __int128 v344;
  __int128 v345;
  __int128 v346;
  __int128 v347;
  __int128 v348;
  __n128 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  float32x4_t v353;
  __int128 v354;
  __int128 v355;
  __int128 v356;
  __int128 v357;
  __int128 v358;
  __n128 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  float32x4_t v363;
  __int128 v364;
  __int128 v365;
  __int128 v366;
  __int128 v367;
  __int128 v368;
  __n128 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  float32x4_t v373;
  __int128 v374;
  __int128 v375;
  __int128 v376;
  __int128 v377;
  __int128 v378;
  __n128 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  float32x4_t v383;
  __int128 v384;
  __int128 v385;
  __int128 v386;
  __int128 v387;
  __int128 v388;
  __n128 v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  float32x4_t v393;
  __int128 v394;
  __int128 v395;
  __int128 v396;
  __int128 v397;
  __int128 v398;
  __n128 v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  float32x4_t v403;
  __int128 v404;
  __int128 v405;
  __int128 v406;
  __int128 v407;
  __int128 v408;
  __n128 v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  float32x4_t v413;
  __int128 v414;
  __int128 v415;
  __int128 v416;
  __int128 v417;
  __int128 v418;
  __n128 v419;
  long double v420;
  long double v421;
  long double v422;
  long double v423;
  long double v424;
  long double v425;
  long double v426;
  long double v427;
  long double v428;
  long double v429;
  long double v430;
  long double v431;
  __int64 v432;
  int v433;
  __int64* v434;
  __int64* v435;
  _QWORD* v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  float32x4_t* v440;
  float32x4_t*** v441;
  float32x4_t*** v442;
  float32x4_t** v443;
  float32x4_t** v444;
  float v445;
  __int64 v446;
  float32x4_t v447;
  __int128 v448;
  unsigned int v449;
  float v450;
  float v451;
  float v452;
  float32x4_t v453;
  float32x4_t v454;
  float32x4_t v455;
  float v456;
  float v457;
  float32x4_t* v458;
  float32x4_t v459;
  float32x4_t v460;
  float32x4_t v461;
  int8x16_t v462;
  float32x4_t v463;
  int8x16_t v464;
  _QWORD* v465;
  __int128 v466;
  unsigned int v467;
  float32x4_t* v468;
  __int64 v469;
  __int64 v470;
  __int64* v471;
  __int64 v472;
  __int128 v473;
  __int128 v474;
  __int128 v475;
  __int128 v476;
  __int128 v477;
  __int128 v478;
  __n128 v479;
  __int64 v480;
  float32x4_t v481;
  int32x4_t** v482;
  float32x4_t v483;
  int8x16_t v484;
  long double v485;
  __int128 v486;
  int32x4_t* v487;
  signed __int32 v488;
  float v489;
  float v490;
  __int64 v491;
  float v492;
  unsigned __int64 v493;
  __int64 v494;
  int v495;
  int v496;
  int8x16_t v497;
  float32x4_t v498;
  float32x4_t v499;
  float32x4_t v500;
  float32x4_t v501;
  float32x4_t v502;
  int8x16_t v503;
  float32x4_t v504;
  float32x4_t v505;
  float32x4_t v506;
  int8x16_t v507;
  float32x4_t v508;
  float32x4_t v509;
  float32x4_t v510;
  float32x4_t v511;
  float32x4_t v512;
  float32x4_t v513;
  float32x4_t v514;
  float32x4_t v515;
  __int64 v516;
  __int64 v517;
  __int64 v518;
  __int64 v519;
  int v520;
  int v521;
  float32x4_t v522;
  __int64 v523;
  __int64 v524;
  float32x4_t v525;
  __int64 v526;
  __int64 v527;
  int v528;
  int v529;
  float32x4_t v530;
  __int64 v531;
  __int64 v532;
  __int64 v533;
  __int64 v534;
  int v535;
  int v536;
  float32x4_t v537;
  __int64 v538;
  __int64 v539;
  long double v540;
  float32x4_t v541;
  float32x4_t v542;
  __int128 v543;
  int32x4_t* v544;
  signed __int32 v545;
  float32x4_t v546;
  int8x8_t v547;
  float32x4_t v548;
  float v549;
  float v550;
  __int64 v551;
  float32x4_t v552;
  int8x16_t v553;
  __int64 v554;
  int v555;
  int v556;
  float32x4_t v557;
  float32x4_t v558;
  float32x4_t v559;
  int8x16_t v560;
  float32x4_t v561;
  float32x4_t v562;
  float32x4_t v563;
  float32x4_t v564;
  float32x4_t v565;
  float32x4_t v566;
  float32x4_t v567;
  float32x4_t v568;
  __int64 v569;
  __int64 v570;
  __int64 v571;
  __int64 v572;
  int v573;
  int v574;
  float32x4_t v575;
  __int64 v576;
  __int64 v577;
  float32x4_t v578;
  __int64 v579;
  __int64 v580;
  int v581;
  int v582;
  float32x4_t v583;
  __int64 v584;
  __int64 v585;
  __int64 v586;
  __int64 v587;
  int v588;
  int v589;
  float32x4_t v590;
  __int64 v591;
  __int64 v592;
  bool v593;
  __int64 v594;
  float32x4_t v595;
  float32x4_t v596;
  __int64* v597;
  __int64 v598;
  int32x4_t** v599;
  long double v600;
  __int128 v601;
  int32x4_t* v602;
  signed __int32 v603;
  float v604;
  float v605;
  __int64 v606;
  __int64 v607;
  int v608;
  int v609;
  float v610;
  int8x16_t v611;
  float32x4_t v612;
  float32x4_t v613;
  float32x4_t v614;
  int8x16_t v615;
  float32x4_t v616;
  float32x4_t v617;
  float32x4_t v618;
  int8x16_t v619;
  float32x4_t v620;
  float32x4_t v621;
  float32x4_t v622;
  float32x4_t v623;
  float32x4_t v624;
  float32x4_t v625;
  float32x4_t v626;
  float32x4_t v627;
  __int64 v628;
  __int64 v629;
  __int64 v630;
  __int64 v631;
  int v632;
  int v633;
  float32x4_t v634;
  __int64 v635;
  __int64 v636;
  float32x4_t v637;
  __int64 v638;
  __int64 v639;
  int v640;
  int v641;
  float32x4_t v642;
  __int64 v643;
  __int64 v644;
  __int64 v645;
  __int64 v646;
  int v647;
  int v648;
  float32x4_t v649;
  __int64 v650;
  __int64 v651;
  long double v652;
  __int128 v653;
  float32x4_t v654;
  int32x4_t* v655;
  signed __int32 v656;
  int8x8_t v657;
  int8x8_t v658;
  float32x4_t v659;
  float32x4_t v660;
  float v661;
  float v662;
  __int64 v663;
  float32x4_t v664;
  int8x16_t v665;
  __int64 v666;
  int v667;
  int v668;
  float32x4_t v669;
  float32x4_t v670;
  float32x4_t v671;
  int8x16_t v672;
  float32x4_t v673;
  float32x4_t v674;
  float32x4_t v675;
  float32x4_t v676;
  float32x4_t v677;
  float32x4_t v678;
  float32x4_t v679;
  float32x4_t v680;
  __int64 v681;
  __int64 v682;
  __int64 v683;
  __int64 v684;
  int v685;
  int v686;
  float32x4_t v687;
  __int64 v688;
  __int64 v689;
  float32x4_t v690;
  __int64 v691;
  __int64 v692;
  int v693;
  int v694;
  float32x4_t v695;
  __int64 v696;
  __int64 v697;
  __int64 v698;
  __int64 v699;
  int v700;
  int v701;
  float32x4_t v702;
  __int64 v703;
  __int64 v704;
  __int64* v705;
  __int64 v706;
  int32x4_t v707;
  float v708;
  float32x4_t* v709;
  int v710;
  float v711;
  float32x4_t v712;
  float32x4_t v713;
  float32x4_t v714;
  float32x4_t v715;
  float v716;
  float v717;
  float32x4_t v718;
  __int64 v719;
  __int64 v720;
  int v721;
  int v722;
  __int128 v723;
  float32x4_t v724;
  float32x4_t v725;
  int8x16_t v726;
  float32x4_t v727;
  float32x4_t v728;
  float32x4_t v729;
  int8x16_t v730;
  float32x4_t v731;
  float32x4_t v732;
  float v733;
  float32x4_t v734;
  float32x4_t v735;
  float32x4_t v736;
  float32x4_t v737;
  float32x4_t v738;
  float32x4_t v739;
  __int64 v740;
  __int64 v741;
  __int64 v742;
  __int64 v743;
  int v744;
  int v745;
  float32x4_t v746;
  __int64 v747;
  __int64 v748;
  float32x4_t v749;
  __int64 v750;
  __int64 v751;
  int v752;
  int v753;
  float32x4_t v754;
  __int64 v755;
  __int64 v756;
  __int64 v757;
  __int64 v758;
  int v759;
  int v760;
  float32x4_t v761;
  __int64 v762;
  __int64 v763;
  __int64* v764;
  float32x4_t* v765;
  __int64 v766;
  float32x4_t v767;
  unsigned __int64 v768;
  float32x4_t v769;
  __int64 v770;
  __int64 v771;
  float v772;
  float32x4_t v773;
  float32x4_t* v774;
  float32x4_t v775;
  int v776;
  float32x4_t v777;
  int8x16_t v778;
  float v779;
  __int64 v780;
  float32x4_t v781;
  float32x4_t v782;
  __int64 v783;
  int v784;
  int v785;
  float32x4_t v786;
  float32x4_t v787;
  int8x16_t v788;
  float32x4_t v789;
  float32x4_t v790;
  int8x16_t v791;
  __int64 v792;
  float32x4_t v793;
  __int64 v794;
  __int64 v795;
  int8x16_t v796;
  __int64 v797;
  float32x4_t v798;
  int v799;
  int v800;
  float32x4_t v801;
  float32x4_t v802;
  int8x16_t v803;
  float32x4_t v804;
  float32x4_t v805;
  int8x16_t v806;
  __int64 v807;
  float32x4_t v808;
  __int64 v809;
  float v810;
  __int64 v811;
  __int64 v812;
  int v813;
  int v814;
  __int64 v815;
  float32x4_t v816;
  __int64 v817;
  __int64 v818;
  __int64 v819;
  int v820;
  int v821;
  __int64 v822;
  float32x4_t v823;
  __int64 v824;
  float v825;
  int v826;
  float v827;
  __int64 v828;
  float32x4_t v829;
  __int64 v830;
  int v831;
  int v832;
  __int64 v833;
  float32x4_t v834;
  __int64 v835;
  __int64 v836;
  __int64 v837;
  int v838;
  int v839;
  __int64 v840;
  float32x4_t v841;
  __int64 v842;
  float v843;
  __int64 v844;
  __int64 v845;
  int v846;
  int v847;
  __int64 v848;
  float32x4_t v849;
  __int64 v850;
  __int64 v851;
  __int64 v852;
  int v853;
  int v854;
  __int64 v855;
  float32x4_t v856;
  __int64 v857;
  __int64* v858;
  __int64 v859;
  __int64* v860;
  __int64 v861;
  __int64 v862;
  __int64 v863;
  int32x4_t* v864;
  int32x4_t* v865;
  float32x4_t v866;
  float32x4_t v867;
  float32x4_t v868;
  float32x4_t v869;
  float32x4_t v870;
  float32x4_t v871;
  int32x4_t v872;
  __int64 v873;
  float v874;
  float v875;
  __int64 v876;
  int v877;
  float32x4_t v878;
  float v879;
  int v880;
  float v881;
  float v882;
  __int64 v883;
  unsigned __int64 v884;
  float32x4_t v885;
  float32x4_t v886;
  float32x4_t v887;
  int8x16_t v888;
  float32x4_t v889;
  float32x4_t v890;
  int8x16_t v891;
  float32x4_t v892;
  float32x4_t v893;
  float v894;
  float v895;
  long double v896;
  __int64 v897;
  __int64 v898;
  int v899;
  int v900;
  __int128 v901;
  __int64 v902;
  float32x4_t v903;
  __int64 v904;
  float32x4_t v905;
  __int64 v906;
  __int64 v907;
  int v908;
  int v909;
  int8x16_t v910;
  float32x4_t v911;
  float32x4_t v912;
  float32x4_t v913;
  int8x16_t v914;
  float32x4_t v915;
  float32x4_t v916;
  int8x16_t v917;
  __int64 v918;
  float32x4_t v919;
  __int64 v920;
  float v921;
  __int64 v922;
  __int64 v923;
  int v924;
  int v925;
  __int64 v926;
  float32x4_t v927;
  __int64 v928;
  __int64 v929;
  __int64 v930;
  int v931;
  int v932;
  __int64 v933;
  float32x4_t v934;
  __int64 v935;
  __int64* v936;
  __int64 v937;
  float32x4_t v938;
  float32x4_t v939;
  int v940;
  float32x4_t v941;
  float32x4_t v942;
  __int128 v943;
  unsigned int v944;
  float32x4_t v945;
  float32x4_t v946;
  float32x4_t v947;
  float32x4_t v948;
  float v949;
  float v950;
  float32x4_t* v951;
  float v952;
  float32x4_t v953;
  float32x4_t v954;
  __int64 v955;
  float32x4_t v956;
  __int128 v957;
  float v958;
  unsigned int v959;
  __int64 v960;
  float32x4_t v961;
  __int64 v962;
  float v963;
  float32x4_t v964;
  int8x16_t v965;
  float v966;
  float32x4_t* v967;
  __int64 v968;
  float32x4_t v969;
  float32x4_t v970;
  float32x4_t v971;
  int8x16_t v972;
  float32x4_t v973;
  float v974;
  float* v975;
  __int64 v976;
  float32x4_t*** v977;
  float32x4_t*** v978;
  float32x4_t** v979;
  float32x4_t* v980;
  __int64 v981;
  float v982;
  float v983;
  unsigned __int64 v984;
  int8x8_t v985;
  int8x8_t v986;
  int8x8_t v987;
  int8x8_t v988;
  float32x4_t v989;
  float32x4_t v990;
  __int64* v991;
  float v992;
  float v993;
  float v994;
  long double v995;
  unsigned __int64 v996;
  float32x4_t v997;
  float32x4_t* v998;
  float32x4_t v999;
  float32x4_t v1000;
  __int128 v1001;
  int v1002;
  float32x4_t v1003;
  int8x16_t v1004;
  __int64 v1005;
  float32x4_t v1006;
  __int64 v1007;
  int v1008;
  int v1009;
  float32x4_t v1010;
  float32x4_t v1011;
  int8x16_t v1012;
  float32x4_t v1013;
  float32x4_t v1014;
  int8x16_t v1015;
  float32x4_t v1016;
  float32x4_t v1017;
  unsigned __int32 v1018;
  __int64 v1019;
  __int64 v1020;
  __int64 v1021;
  int8x16_t v1022;
  __int64 v1023;
  float32x4_t v1024;
  int v1025;
  int v1026;
  float32x4_t v1027;
  float32x4_t v1028;
  int8x16_t v1029;
  float32x4_t v1030;
  float32x4_t v1031;
  int8x16_t v1032;
  float32x4_t v1033;
  float32x4_t v1034;
  __int64 v1035;
  __int64 v1036;
  __int64 v1037;
  float32x4_t v1038;
  __int64 v1039;
  int v1040;
  float32x4_t v1041;
  int v1042;
  __int64 v1043;
  __int64 v1044;
  float32x4_t v1045;
  __int64 v1046;
  float32x4_t v1047;
  __int64 v1048;
  int v1049;
  int v1050;
  __int64 v1051;
  __int64 v1052;
  float32x4_t v1053;
  __int128 v1054;
  unsigned __int32 v1055;
  unsigned __int32 v1056;
  unsigned __int32 v1057;
  unsigned __int32 v1058;
  float v1059;
  unsigned __int64 v1060;
  unsigned __int64 v1061;
  unsigned __int64 v1062;
  unsigned __int64 v1063;
  float v1064;
  float* v1065;
  __int64 v1066;
  float32x4_t*** v1067;
  float32x4_t*** v1068;
  float32x4_t** v1069;
  float32x4_t* v1070;
  __int64 v1071;
  unsigned __int8 v1072;
  float v1073;
  float32x4_t v1074;
  float v1075;
  float v1076;
  float v1077;
  float v1078;
  bool v1079;
  float v1080;
  bool v1082;
  int v1083;
  __int64 v1084;
  __int64 v1085;
  int v1086;
  int v1087;
  __int64 v1088;
  __int64 v1089;
  __int64 v1090;
  __int64 v1091;
  int v1092;
  int v1093;
  __int64 v1094;
  __int64 v1095;
  __int64 v1096;
  __int64 v1097;
  int v1098;
  int v1099;
  __int64 v1100;
  __int64 v1101;
  __int64 v1102;
  __int64 v1103;
  int v1104;
  int v1105;
  __int64 v1106;
  __int64 v1107;
  __int64* v1108;
  long double v1109;
  __int128 v1110;
  int v1111;
  __int64 v1112;
  float32x4_t v1113;
  __int64 v1114;
  int v1115;
  int v1116;
  __int64 v1117;
  float32x4_t v1118;
  __int64 v1119;
  __int64 v1120;
  __int64 v1121;
  int v1122;
  int v1123;
  __int64 v1124;
  float32x4_t v1125;
  __int64 v1126;
  float v1127;
  __int64 v1128;
  __int64 v1129;
  int v1130;
  int v1131;
  __int64 v1132;
  float32x4_t v1133;
  __int64 v1134;
  __int64 v1135;
  __int64 v1136;
  int v1137;
  int v1138;
  __int64 v1139;
  float32x4_t v1140;
  __int64 v1141;
  __int64* v1142;
  __int64 v1143;
  __int64* v1144;
  __int64 v1145;
  __int64********* v1146;
  __int64******** v1147;
  __int64******* v1148;
  __int64****** v1149;
  __int64***** v1150;
  __int64**** v1151;
  __int64*** v1152;
  __int64** v1153;
  __int64* v1154;
  __int64 v1155;
  __int64** v1156;
  __int64* v1157;
  __int64 v1158;
  float32x4_t v1159;
  float32x4_t v1160;
  float32x4_t v1161;
  float32x4_t** v1162;
  float v1163;
  float32x4_t v1164;
  float v1165;
  float v1166;
  float v1167;
  float v1168;
  float v1169;
  float v1170;
  float v1171;
  float v1172;
  float v1173;
  float v1174;
  __int64 v1175;
  float32x4_t v1176;
  float32x4_t v1177;
  int32x4_t* v1178;
  float32x4_t v1179;
  float32x4_t v1180;
  float32x4_t v1181;
  float v1182;
  float32x4_t* v1183;
  int v1184;
  unsigned __int64 v1185;
  float32x4_t v1186;
  float32x4_t v1187;
  float32x4_t v1188;
  int8x16_t v1189;
  float32x4_t v1190;
  float32x4_t v1191;
  float32x4_t v1192;
  float32x4_t v1193;
  float v1194;
  float v1195;
  long double v1196;
  __int64 v1197;
  float32x4_t v1198;
  __int64 v1199;
  int v1200;
  int v1201;
  __int128 v1202;
  __int64 v1203;
  float32x4_t v1204;
  __int64 v1205;
  float32x4_t v1206;
  __int64 v1207;
  __int64 v1208;
  int v1209;
  int v1210;
  int8x16_t v1211;
  float32x4_t v1212;
  float32x4_t v1213;
  float32x4_t v1214;
  int8x16_t v1215;
  float32x4_t v1216;
  float32x4_t v1217;
  int8x16_t v1218;
  __int64 v1219;
  float32x4_t v1220;
  __int64 v1221;
  float v1222;
  __int64 v1223;
  __int64 v1224;
  int v1225;
  int v1226;
  __int64 v1227;
  float32x4_t v1228;
  __int64 v1229;
  __int64* v1230;
  __int64 v1231;
  __int64 v1232;
  int v1233;
  int v1234;
  __int64 v1235;
  float32x4_t v1236;
  __int64 v1237;
  float32x4_t v1238;
  __int128 v1239;
  float v1240;
  float32x4_t* v1241;
  float* v1242;
  __int64 v1243;
  float32x4_t*** v1244;
  float32x4_t*** v1245;
  __int64* v1246;
  unsigned __int8 v1247;
  char* v1248;
  float v1249;
  float32x4_t v1250;
  float v1251;
  float v1252;
  float v1253;
  float v1254;
  bool v1255;
  float v1256;
  signed __int32 v1259;
  float v1260;
  float32x4_t v1261;
  float32x4_t v1262;
  float v1263;
  float v1264;
  long double v1265;
  __int64 v1266;
  __int64 v1267;
  int v1268;
  int v1269;
  __int128 v1270;
  __int64 v1271;
  float32x4_t v1272;
  __int64 v1273;
  float32x4_t v1274;
  __int64 v1275;
  __int64 v1276;
  int v1277;
  int v1278;
  __int64 v1279;
  float32x4_t v1280;
  __int64 v1281;
  float v1282;
  __int64 v1283;
  __int64 v1284;
  int v1285;
  int v1286;
  __int64 v1287;
  float32x4_t v1288;
  __int64 v1289;
  __int64 v1290;
  __int64 v1291;
  int v1292;
  int v1293;
  __int64 v1294;
  float32x4_t v1295;
  __int64 v1296;
  float32x4_t** v1297;
  float32x4_t* v1298;
  float v1299;
  float v1300;
  float32x4_t v1301;
  double v1302;
  double v1303;
  double v1304;
  float v1305;
  unsigned int v1306;
  int8x16_t v1307;
  unsigned __int64 v1308;
  float32x4_t v1309;
  float32x4_t v1310;
  unsigned __int64 v1311;
  float32x4_t v1312;
  float32x4_t v1313;
  float32x4_t v1314;
  float32x4_t v1315;
  float32x4_t v1316;
  float32x4_t v1317;
  float32x4_t v1318;
  int32x4_t* v1319;
  signed __int32 v1320;
  float32x4_t v1321;
  float32x4_t v1322;
  float32x4_t v1323;
  float32x4_t v1324;
  float32x4_t v1325;
  float32x4_t v1326;
  unsigned __int64 v1327;
  float32x4_t v1328;
  long double v1329;
  long double v1330;
  float v1331;
  long double v1332;
  float v1333;
  float v1334;
  float32x4_t v1335;
  float32x4_t v1336;
  float v1337;
  float v1338;
  float v1339;
  long double v1340;
  float v1341;
  long double v1342;
  float v1343;
  long double v1344;
  __int64 v1345;
  __int64 v1346;
  int v1347;
  int v1348;
  __int128 v1349;
  __int64* v1350;
  __int64 v1351;
  float32x4_t v1352;
  __int64 v1353;
  __int64* v1354;
  int v1355;
  __int64 v1356;
  __int64 v1357;
  int v1358;
  int v1359;
  __int64 v1360;
  float32x4_t v1361;
  __int64 v1362;
  float32x4_t v1363;
  __int64 v1364;
  __int64* v1365;
  __int64 v1366;
  int v1367;
  int v1368;
  float32x4_t v1369;
  __int64 v1370;
  __int64 v1371;
  __int64* v1372;
  int v1373;
  __int64 v1374;
  __int64 v1375;
  int v1376;
  int v1377;
  float32x4_t v1378;
  __int64 v1379;
  __int64 v1380;
  __int64 v1381;
  __int64 v1382;
  __int64 v1383;
  __int64 v1384;
  _QWORD* v1385;
  _QWORD* v1386;
  unsigned __int64 v1387;
  __int64 v1388;
  _QWORD* primeEm;
  float v1390;
  _QWORD* v1391;
  unsigned __int64 v1392;
  float v1393;
  float v1394;
  _BOOL8 v1395;
  unsigned __int64 v1396;
  unsigned __int64 v1397;
  unsigned __int64 v1398;
  __int64 v1399;
  __int64 v1400;
  __int64 v1401;
  __int64 v1402;
  __int64 v1403;
  __int64 v1404;
  unsigned __int64 v1405;
  __int64 v1406;
  _QWORD** v1407;
  unsigned __int64 v1408;
  unsigned __int64 v1409;
  _QWORD* v1410;
  unsigned __int64 v1411;
  unsigned __int64 v1412;
  _QWORD* v1413;
  unsigned __int64 v1414;
  __int64 v1415;
  __int64 v1416;
  __int64 v1417;
  _QWORD* v1418;
  _QWORD* v1419;
  unsigned __int64 v1420;
  _QWORD* v1421;
  _QWORD* v1422;
  __int64 v1423;
  __int64 v1424;
  __int64 v1425;
  __int64 v1426;
  __int64 v1427;
  float v1428;
  float v1429;
  float v1430;
  float v1431;
  float v1432;
  float v1433;
  float v1434;
  float v1435;
  int v1436;
  float32x4_t v1437;
  float32x4_t v1438;
  unsigned __int32 v1439;
  float32x4_t v1440;
  unsigned __int32 v1441;
  unsigned __int32 v1442;
  float32x4_t v1443;
  unsigned __int32 v1444;
  float32x4_t v1445;
  float32x4_t v1446;
  float32x4_t v1447;
  float v1448;
  float32x4_t v1449;
  unsigned int v1450;
  float32x4_t v1451;
  unsigned int v1452;
  unsigned int v1453;
  unsigned int v1454;
  float32x4_t** v1455;
  float32x4_t** v1456;
  float32x4_t v1458;
  float32x4_t v1459;
  unsigned int v1460;
  unsigned int v1461;
  unsigned int v1462;
  float v1463;
  float32x4_t v1464;
  unsigned int v1465;
  __int128 v1466;
  float v1467;
  float32x4_t*** v1468;
  unsigned int v1469;
  unsigned int v1470;
  float32x4_t v1471;
  float v1472;
  float32x4_t v1473;
  unsigned int v1474;
  unsigned int v1475;
  unsigned int v1476;
  unsigned int v1477;
  float32x4_t v1478;
  float32x4_t v1479;
  float v1480;
  unsigned int v1481;
  unsigned int v1482;
  unsigned int v1483;
  unsigned int v1484;
  unsigned int v1485;
  float v1486;
  float32x4_t v1487;
  float32x4_t v1488;
  int v1489;
  unsigned int v1490;
  unsigned int v1491;
  float v1492;
  unsigned int v1493;
  int8x16_t v1494;
  float32x4_t v1495;
  unsigned int v1496;
  float32x4_t v1497;
  float32x4_t v1498;
  float32x4_t v1499;
  float32x4_t v1500;
  unsigned int v1501;
  unsigned int v1502;
  unsigned int v1503;
  float32x4_t v1504;
  float32x4_t v1505;
  float32x4_t v1506;
  float32x4_t v1507;
  float32x4_t v1508;
  float32x4_t v1509;
  float32x4_t v1510;
  unsigned int v1511;
  unsigned int v1512;
  unsigned int v1513;
  unsigned __int64 v1514;
  float v1515;
  float32x4_t v1516;
  int8x16_t v1517;
  float32x4_t v1518;
  float32x4_t v1519;
  unsigned __int64 v1520;
  float32x4_t v1521;
  __n128 v1522;
  int8x16_t v1523;
  __n128 v1524;
  __n128 v1525;
  __n128 v1526;
  __n128 v1527;
  __n128 v1528;
  __n128 v1529;
  __n128 v1530;
  __n128 v1531;
  __n128 v1532;
  __n128 v1533;
  float v1534;
  int8x8_t v1535;
  float32x4_t v1536;
  float32x4_t v1537;
  unsigned int v1538;
  __int128 v1539;
  float v1540;
  float32x4_t v1541;
  float32x4_t v1542;
  float32x4_t v1543;
  unsigned int v1544;
  float32x4_t* v1545;
  long double v1546;
  int32x4_t v1547;
  __int128 v1548;
  float32x4_t v1549;
  __int64 v1550;
  __int64 v1551;
  __int64 v1552;
  __int64 v1553;
  __int64 v1554;
  __int64 v1555;
  __int64 v1556;
  __int64 v1557;
  __int64 v1558;
  __int64 v1559;
  __int64 v1560;
  __int64 v1561;
  __int64 v1562;
  __int64 v1563;
  __int64 v1564;
  __int64 v1565;
  __int64 v1566;
  __int64 v1567;
  __int64 v1568;
  __int64 v1569;
  __int64 v1570;
  unsigned __int64 v1571;
  _QWORD* v1572;
  unsigned __int64 v1573;
  float v1574;
  float32x4_t*** v1575;
  float32x4_t*** v1576;
  _QWORD v1577[44] __attribute__((aligned(16)));
  _QWORD v1581[8] __attribute__((aligned(16)));
  _QWORD v1582[8] __attribute__((aligned(16)));
  int8x16x2_t v1585;
  int8x16x2_t v1586;
  int8x16x2_t v1587;

  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        goto LABEL_8;
      }
    }
  }
  else {
    while (v5 != v6) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        goto LABEL_8;
      }
    }
  }
  v7 = 0;
LABEL_8:
  SpotMgr_1332660((void*)(&v1575), v7);
  v1573 = 0;
  v1572 = nullptr;
  v1571 = 0;
  v1570 = 0;
  v1574 = 0x1.0000000000000p+0;
  memset(&v1548, 0, 352, v9, v10, v11);
  v1547 = *(int32x4_t*)(*GameData_2130e00 + 192);
  v12 = *(float*)GameData_212ea30;
  v1546 = powf(LANES128(v1547).n128_f32[0], *(float*)GameData_212ea30);
  v1544 = COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[1], v12));
  v13 = powf(LANES128(v1547).n128_f32[2], v12);
  v14 = *(_QWORD*)(*GameData_212c780 + 8);
  v15 = *(float32x4_t***)(v14 + 48);
  v16 = *(float32x4_t***)(v14 + 56);
  v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v15 == v16) {
    goto LABEL_758;
  }
  *(_QWORD*)&v18 = __PAIR64__(v1544, LODWORD(v1546));
  v19 = 0.25;
  v20 = 3.0;
  v1455 = *(float32x4_t***)(v14 + 56);
  v21 = -0x1.0000000000000p-1;
  DWORD1(v13) = LANES64_OF(vdup_laneq_s32(v1547, 3)).n64_u32[0];
  v1435 = *(float*)GameData_212c2f0;
  *((_QWORD*)&v18 + 1) = *(_QWORD*)&v13;
  v22 = -*((float*)GameData_212c2f0 + 1);
  v1434 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v23 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
  v25 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v24 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
  v1546 = v18;
  v1433 = v25;
  v1431 = v22;
  v1432 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  v1429 = -v24;
  v1430 = v23;
  v1428 =
    -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
  LODWORD(v26) = 0;
  HIDWORD(v26) = 0x1.0000000000000p+0;
  v1447 = COERCE_AS(float32x4_t, v26);
  do {
    v1545 = *v15;
    v31 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
    v33 = *(_QWORD*)(v31 + 24);
    v32 = *(__int64**)(v31 + 32);
    if (v32 != nullptr) {
      atomic_fetch_add_explicit(
        (atomic_ullong* volatile)(v32 + 1), 1u, memory_order_relaxed);
    }
    *(struct GmapDrawer_mtx44*)v1577 = ((struct GmapDrawer_mtx44 (*)(__int64)) *
                                        (_QWORD*)(*(_QWORD*)v33 + 16LL))(v33);
    *(struct GmapDrawer_mtx44*)v1582 = ((struct GmapDrawer_mtx44 (*)(__int64)) *
                                        (_QWORD*)(*(_QWORD*)v33 + 24LL))(v33);
    v43 = GameRoutine_a6c440(&v1545[2], v1577, v1582);
    if (v32 != nullptr &&
      atomic_fetch_add(
        (atomic_ullong* volatile)(v32 + 1), 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v44 = *v32;
      v1547 = v43;
      (*(void (**)(__int64*))(v44 + 16))(v32);
      std___1___shared_weak_count___release_weak(v32);
      v43 = v1547;
    }
    v27 = LANES128(v43).n128_f32[2] > 0.0 ||
      LANES128(v43).n128_f32[0] < -0x1.9000000000000p+5;
    if (!v27 && LANES128(v43).n128_f32[0] <= 0x1.ec80000000000p+10 &&
      LANES128(v43).n128_f32[1] >= -0x1.9000000000000p+5 &&
      LANES128(v43).n128_f32[1] <= 0x1.1a80000000000p+10) {
      v45 = (unsigned __int64)&v1548;
      v1456 = v15;
      v46 = (float32x4_t***)LANES128(v1545[3]).n128_u64[0];
      v1520 = LANES128(v1545[3]).n128_u64[1];
      if (v46 == (float32x4_t***)v1520) {
      LABEL_31:
        v1577[0] = v1545;
        v47 = std___1___hash_memory(v1577, 8);
        v48 = v1571;
        v49 = v47;
        v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v16 = v1455;
        v15 = v1456;
        if (v1571 != 0) {
          v50 = v1571 - 1;
          if ((v1571 & (v1571 - 1)) != 0) {
            v45 = v47;
            if (v47 >= v1571) {
              v45 = v47 % v1571;
            }
          }
          else {
            v45 = v50 & v47;
          }
          v1385 = *(_QWORD**)(v1570 + 8 * v45);
          if (v1385 != nullptr) {
            v1386 = (_QWORD*)*v1385;
            if (v1386 != nullptr) {
              if ((v1571 & v50) == 0) {
                while (1) {
                  v1388 = v1386[1];
                  if (v1388 == v47) {
                    if ((float32x4_t*)v1386[2] == v1545) {
                      goto LABEL_24;
                    }
                  }
                  else if ((v1388 & v50) != v45) {
                    goto LABEL_674;
                  }
                  v1386 = (_QWORD*)*v1386;
                  if (v1386 == nullptr) {
                    goto LABEL_674;
                  }
                }
              }
              do {
                v1387 = v1386[1];
                if (v1387 == v47) {
                  if ((float32x4_t*)v1386[2] == v1545) {
                    goto LABEL_24;
                  }
                }
                else {
                  if (v1387 >= v1571) {
                    v1387 %= v1571;
                  }
                  if (v1387 != v45) {
                    break;
                  }
                }
                v1386 = (_QWORD*)*v1386;
              } while (v1386 != nullptr);
            }
          }
        }
      LABEL_674:
        primeEm = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
        primeEm[2] = v1545;
        v1390 = v1574;
        v1391 = primeEm;
        v1392 = v1573 + 1;
        *primeEm = 0;
        primeEm[1] = v49;
        v1393 = (float)v1392;
        if (v48 != 0 && (float)(v1390 * (float)v48) >= v1393) {
          goto LABEL_740;
        }
        v1394 = v1393 / v1390;
        v1395 = (v48 & (v48 - 1)) != 0;
        if (v48 < 3) {
          v1395 = true;
        }
        v1396 = v1395 | (2 * v48);
        v1397 = vcvtps_u64_f32(v1394);
        if (v1396 <= v1397) {
          v1398 = v1397;
        }
        else {
          v1398 = v1396;
        }
        if (v1398 == 1) {
          v1398 = 2;
        }
        else if ((v1398 & (v1398 - 1)) != 0) {
          primeEm = (_QWORD*)std___1___next_prime(v1398);
          v48 = v1571;
          v1398 = (unsigned __int64)primeEm;
        }
        if (v1398 <= v48) {
          if (v1398 >= v48) {
            goto LABEL_735;
          }
          primeEm = (_QWORD*)vcvtps_u64_f32((float)v1573 / v1574);
          if (v48 < 3 || (v48 & (v48 - 1)) != 0) {
            primeEm = (_QWORD*)std___1___next_prime(primeEm);
          }
          else {
            v1403 = 1LL << -(char)__clz((unsigned __int64)primeEm - 1);
            if ((unsigned __int64)primeEm >= 2) {
              primeEm = (_QWORD*)v1403;
            }
          }
          if (v1398 <= (unsigned __int64)primeEm) {
            v1398 = (unsigned __int64)primeEm;
          }
          if (v1398 >= v48) {
            goto LABEL_735;
          }
          if (v1398 == 0) {
            v1415 = v1570;
            v1570 = 0;
            if (v1415 != 0) {
              v1416 = 128;
              if (*(_QWORD*)(*v17 + 200LL) == 0) {
                v1416 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v17 + v1416, (_QWORD)(v1415));
            }
            v1571 = 0;
            goto LABEL_735;
          }
        }
        if (v1398 >> 61 != 0) {
          GameRoutine_60a210(primeEm);
        }
        v1399 = fw_memory_HeapManager_Allocate(*v17, 8 * v1398, 16, 0);
        v1400 = v1570;
        v1570 = v1399;
        if (v1400 != 0) {
          v1401 = 128;
          if (*(_QWORD*)(*v17 + 200LL) == 0) {
            v1401 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v17 + v1401, (_QWORD)(v1400));
        }
        v1571 = v1398;
        if (v1398 >= 8) {
          v1402 = 0;
          do {
            *(_QWORD*)(v1570 + 8 * v1402) = 0;
            *(_QWORD*)(v1570 + 8 * v1402 + 8) = 0;
            *(_QWORD*)(v1570 + 8 * v1402 + 16) = 0;
            *(_QWORD*)(v1570 + 8 * v1402 + 24) = 0;
            *(_QWORD*)(v1570 + 8 * v1402 + 32) = 0;
            *(_QWORD*)(v1570 + 8 * v1402 + 40) = 0;
            *(_QWORD*)(v1570 + 8 * v1402 + 48) = 0;
            v1404 = v1570 + 8 * v1402;
            v1402 += 8;
            *(_QWORD*)(v1404 + 56) = 0;
          } while ((v1398 & 0x1FFFFFFFFFFFFFF8LL) != v1402);
        }
        else {
          v1402 = 0;
        }
        v1405 = v1398 & 7;
        if ((v1398 & 7) != 0) {
          v1406 = 8 * v1402;
          do {
            --v1405;
            *(_QWORD*)(v1570 + v1406) = 0;
            v1406 += 8;
          } while (v1405 != 0);
        }
        v1407 = (_QWORD**)v1572;
        if (v1572 != nullptr) {
          v1408 = v1572[1];
          v1409 = v1398 - 1;
          if ((v1398 & (v1398 - 1)) != 0) {
            if (v1408 >= v1398) {
              v1408 %= v1398;
            }
            *(_QWORD*)(v1570 + 8 * v1408) = &v1572;
            v1410 = *v1407;
            if (*v1407 == nullptr) {
              goto LABEL_735;
            }
            while (1) {
              v1411 = v1410[1];
              if (v1411 >= v1398) {
                v1411 %= v1398;
              }
              if (v1411 != v1408) {
                if (*(_QWORD*)(v1570 + 8 * v1411) == 0) {
                  *(_QWORD*)(v1570 + 8 * v1411) = v1407;
                  goto LABEL_712;
                }
                *v1407 = (_QWORD*)*v1410;
                *v1410 = **(_QWORD**)(v1570 + 8 * v1411);
                **(_QWORD**)(v1570 + 8 * v1411) = v1410;
                v1410 = v1407;
              }
              v1411 = v1408;
            LABEL_712:
              v1407 = (_QWORD**)v1410;
              v1410 = (_QWORD*)*v1410;
              v1408 = v1411;
              if (v1410 == nullptr) {
                goto LABEL_735;
              }
            }
          }
          v1412 = v1408 & v1409;
          *(_QWORD*)(v1570 + 8 * v1412) = &v1572;
          while (1) {
            v1413 = *v1407;
            if (*v1407 == nullptr) {
              break;
            }
            v1414 = v1413[1] & v1409;
            if (v1414 == v1412) {
              v1407 = (_QWORD**)*v1407;
            }
            else if (*(_QWORD*)(v1570 + 8 * v1414) != 0) {
              *v1407 = (_QWORD*)*v1413;
              *v1413 = **(_QWORD**)(v1570 + 8 * v1414);
              **(_QWORD**)(v1570 + 8 * v1414) = v1413;
            }
            else {
              *(_QWORD*)(v1570 + 8 * v1414) = v1407;
              v1407 = (_QWORD**)v1413;
              v1412 = v1414;
            }
          }
        }
      LABEL_735:
        v48 = v1571;
        if ((v1571 & (v1571 - 1)) != 0) {
          if (v49 >= v1571) {
            v45 = v49 % v1571;
          }
          else {
            v45 = v49;
          }
        }
        else {
          v45 = (v1571 - 1) & v49;
        }
      LABEL_740:
        v1417 = v1570;
        v1418 = *(_QWORD**)(v1570 + 8 * v45);
        if (v1418 != nullptr) {
          *v1391 = *v1418;
          *v1418 = v1391;
        }
        else {
          v1419 = v1572;
          v1572 = v1391;
          *v1391 = v1419;
          *(_QWORD*)(v1417 + 8 * v45) = &v1572;
          if (*v1391 != 0) {
            v1420 = *(_QWORD*)(*v1391 + 8LL);
            if ((v48 & (v48 - 1)) != 0) {
              if (v1420 >= v48) {
                v1420 %= v48;
              }
            }
            else {
              v1420 &= v48 - 1;
            }
            *(_QWORD*)(v1570 + 8 * v1420) = v1391;
          }
        }
        ++v1573;
        goto LABEL_24;
      }
      while (1) {
        v52 = *v46;
        v53 = v1572;
        v54 = (*v46)[1];
        if (v1572 != nullptr) {
          while ((float32x4_t*)v53[2] != v54) {
            v53 = (_QWORD*)*v53;
            if (v53 == nullptr) {
              goto LABEL_35;
            }
          }
          goto LABEL_38;
        }
      LABEL_35:
        v51 = LANES128(v54[18]).n128_f32[0];
        if (v51 >= LANES128(v1545[18]).n128_f32[0]) {
          v51 = LANES128(v1545[18]).n128_f32[0];
        }
        if (v51 == 0.0) {
          goto LABEL_38;
        }
        v1468 = v46;
        if (*((_BYTE*)a1 + 58) != 1) {
          v60 = false;
          v61 = 0;
          goto LABEL_48;
        }
        v56 = (float32x4_t***)a1[9];
        v55 = (char*)a1[10];
        if (v56 == (float32x4_t***)v55) {
          v58 = GameData_2130e00;
          v59 = v1545;
        }
        else {
          v57 = v55 - (char*)v56 - 8;
          if ((~(_BYTE)v57 & 0x18) != 0) {
            v58 = GameData_2130e00;
            v59 = v1545;
            v62 = ((unsigned __int8)((unsigned int)v57 >> 3) + 1) & 3;
            while (*v56 != v52) {
              ++v56;
              if (--v62 == 0) {
                goto LABEL_53;
              }
            }
          }
          else {
            v58 = GameData_2130e00;
            v59 = v1545;
          LABEL_53:
            if (v57 >= 0x18) {
              v56 += 2;
              while (1) {
                if (*(v56 - 2) == v52) {
                  v56 -= 2;
                  goto LABEL_55;
                }
                if (*(v56 - 1) == v52) {
                  --v56;
                  goto LABEL_55;
                }
                if (*v56 == v52) {
                  goto LABEL_55;
                }
                if (v56[1] == v52) {
                  break;
                }
                v67 = (char*)(v56 + 2);
                v56 += 4;
                if (v67 == v55) {
                  goto LABEL_54;
                }
              }
              ++v56;
            }
            else {
            LABEL_54:
              v56 = (float32x4_t***)a1[10];
            }
          }
        }
      LABEL_55:
        v60 = v56 != (float32x4_t***)v55;
        if ((a2 & 1) != 0) {
          goto LABEL_80;
        }
        v63 = v1575;
        if (v1575 != v1576) {
          v64 = (char*)v1576 - (char*)v1575 - 8;
          if ((~(_BYTE)v64 & 0x18) == 0) {
          LABEL_61:
            if (v64 >= 0x18) {
              v63 += 2;
              while (1) {
                if (*(v63 - 2) == v52) {
                  if (v63 - 2 != v1576) {
                    goto LABEL_299;
                  }
                  goto LABEL_80;
                }
                if (*(v63 - 1) == v52) {
                  --v63;
                  goto LABEL_298;
                }
                if (*v63 == v52) {
                  goto LABEL_298;
                }
                if (v63[1] == v52) {
                  break;
                }
                v66 = v63 + 2;
                v63 += 4;
                if (v66 == v1576) {
                  goto LABEL_80;
                }
              }
              if (v63 + 1 != v1576) {
                goto LABEL_299;
              }
            }
          LABEL_80:
            v61 = 0;
            goto LABEL_81;
          }
          v65 = ((unsigned __int8)((unsigned int)v64 >> 3) + 1) & 3;
          while (*v63 != v52) {
            ++v63;
            if (--v65 == 0) {
              goto LABEL_61;
            }
          }
        }
      LABEL_298:
        if (v63 == v1576) {
          goto LABEL_80;
        }
      LABEL_299:
        v432 = *(_QWORD*)(*GameData_212c790 + 8);
        v433 = *(_DWORD*)(v432 + 56);
        v434 = *(__int64**)(v432 + 8);
        if (v433 < 0) {
          v46 = v1468;
          while (1) {
            v436 = (_QWORD*)*v434;
            if (*(_QWORD*)(*v434 + 96) == 0 && v436[69] == 0) {
              break;
            }
            ++v434;
          }
        }
        else {
          v437 = *v434;
          v435 = v434 + 1;
          v436 = (_QWORD*)v437;
          v46 = v1468;
          if (*(_DWORD*)(v437 + 84) != v433) {
            do {
              v438 = *v435++;
              v436 = (_QWORD*)v438;
            } while (*(_DWORD*)(v438 + 84) != v433);
          }
        }
        v439 = v436[4];
        if (v439 == v436[3]) {
          v440 = nullptr;
          if (v59 == nullptr) {
          LABEL_312:
            v59 = v54;
            goto LABEL_313;
          }
        }
        else {
          v440 = *(float32x4_t**)(v439 - 8);
          if (v59 == v440) {
            goto LABEL_312;
          }
        }
        if (v54 != v440) {
          v61 = 1;
        LABEL_48:
          v58 = GameData_2130e00;
          v59 = v1545;
        LABEL_81:
          v68 = LANES128(v59[11]).n128_u8[0];
          v1489 = v61;
          if (v68 == 2 || v68 == 3 && (LANES128(v59[7]).n128_u8[0] & 1) != 0 ||
            (v69 = LANES128(v54[11]).n128_u8[0]) == 2 ||
            v69 == 3 && LANES128(v54[7]).n128_u8[0] == 1) {
            v70 = (float32x4_t*)(*v58 + 208);
          }
          else {
            v71 = *v58 + 176;
            v70 = (float32x4_t*)(*v58 + 240);
            if (v60) {
              v71 = *v58 + 224;
            }
            if (v61 == 0) {
              v70 = (float32x4_t*)v71;
            }
          }
          v1521 = *v70;
          *(float*)&v1511 = vmuls_lane_f32(v51, *v70, 3) + 0.0;
          v1547 = COERCE_INT32X4_T(powf(COERCE_FLOAT(*v70), v12));
          v1501 =
            COERCE_UNSIGNED_INT128(powf(LANES128(v1521).n128_f32[1], v12));
          v72 = powf(LANES128(v1521).n128_f32[2], v12);
          LANES128(v73).n128_u64[0] =
            __PAIR64__(v1501, LANES128(v1547).n128_u32[0]);
          v74 = LANES128(v59[7]).n128_u8[3];
          LANES128(v73).n128_u64[1] = __PAIR64__(v1511, LODWORD(v72));
          v1547 = v73;
          if ((v74 & 1) != 0 || (LANES128(v54[7]).n128_u8[3] & 1) != 0) {
            v75 = (*v52)[2];
            v76 = *v58;
            *(_QWORD*)&v1548 = LANES128((*v52)[2]).n128_u64[0];
            *(_QWORD*)&v77 = v1548;
            *((_QWORD*)&v77 + 1) = LANES128(v75).n128_u32[2];
            LANES128(v75).n128_u32[0] = *(_DWORD*)(v76 + 164);
            v78 = 1;
            LODWORD(v79) = 1;
            v80 = LANES128(v75).n128_f32[0] * LANES128(v75).n128_f32[0];
            v1548 = v77;
            v81 = v80 * v19;
            do {
              v82 = (float)v78 / 0x1.e000000000000p+5;
              if (v82 >= 0x1.0000000000000p-1) {
                v85 = *((float32x4_t*)v52 + 5);
                v86 = *((float32x4_t*)v52 + 6);
                v84 = *((float32x4_t*)v52 + 4);
                v83 = (float)(v82 + v21) + (float)(v82 + v21);
                v87 = 0x1.0000000000000p+0 - v83;
                v89 = v52[1] + 2;
                v88 = v87 * v87;
              }
              else {
                v83 = v82 + v82;
                v84 = *((float32x4_t*)v52 + 2);
                v85 = *((float32x4_t*)v52 + 3);
                v86 = (*v52)[2];
                v87 = 0x1.0000000000000p+0 - (float)(v82 + v82);
                v88 = v87 * v87;
                v89 = (float32x4_t*)(v52 + 12);
              }
              v90 = vaddq_f32(
                vaddq_f32(
                  vaddq_f32(vmulq_n_f32(v86, v87 * v88),
                    vmulq_n_f32(v84, v83 * (float)(v87 * (float)(v87 * v20)))),
                  vmulq_n_f32(v85, v83 * (float)(v83 * (float)(v87 * v20)))),
                vmulq_n_f32(*v89, v83 * (float)(v83 * v83)));
              v91 = v90;
              LANES128(v91).n128_u32[3] = 0;
              v92 = vsubq_f32(*((float32x4_t*)&v1548 + (int)v79 - 1), v91);
              v93 = vmulq_f32(v92, v92);
              LANES128(v93).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v93, v93, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0])))
                                            .n64_u64[0];
              if (LANES64_OF(
                    vpadd_f32(COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0])))
                    .n64_f32[0] > v80) {
                v94 = vsubq_f32(v91, v54[2]);
                v95 = vmulq_f32(v94, v94);
                LANES128(v95).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v95, v95, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0])))
                                              .n64_u64[0];
                if (LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0])))
                      .n64_f32[0] > v81) {
                  v96 = vsubq_f32(v91, v59[2]);
                  v97 = vmulq_f32(v96, v96);
                  LANES128(v97).n128_u64[0] = LANES64_OF(
                    vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v97, v97, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0])))
                                                .n64_u64[0];
                  if (LANES64_OF(
                        vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0])))
                        .n64_f32[0] > v81) {
                    v98 = (int)v79;
                    LODWORD(v79) = v79 + 1;
                    v99 = &v1548 + v98;
                    *(_QWORD*)v99 = LANES128(v90).n128_u64[0];
                    v100 = *v99;
                    *((_QWORD*)&v100 + 1) = LANES128(v90).n128_u32[2];
                    *v99 = v100;
                    if ((_DWORD)v79 == 22) {
                      v101 = 22;
                      LODWORD(v79) = 22;
                      goto LABEL_106;
                    }
                  }
                }
              }
              ++v78;
            } while (v78 != 60);
            if ((_DWORD)v79 == 0) {
              goto LABEL_142;
            }
            v101 = (int)v79;
          LABEL_106:
            v102 = (float32x4_t*)&v1548;
            do {
              v103 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
              v105 = *(_QWORD*)(v103 + 24);
              v104 = *(_QWORD*)(v103 + 32);
              if (v104 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v104 + 8),
                  1u, memory_order_relaxed);
              }
              *(struct GmapDrawer_mtx44*)v1577 =
                ((struct GmapDrawer_mtx44 (*)(__int64)) *
                  (_QWORD*)(*(_QWORD*)v105 + 16LL))(v105);
              *(struct GmapDrawer_mtx44*)v1582 =
                ((struct GmapDrawer_mtx44 (*)(__int64)) *
                  (_QWORD*)(*(_QWORD*)v105 + 24LL))(v105);
              v112 = GameRoutine_a6c440(v102, v1577, v1582);
              if (v104 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                v1522 = v112;
                (*(void (**)(__int64))(*(_QWORD*)v104 + 16LL))(v104);
                std___1___shared_weak_count___release_weak(v104);
                v112 = v1522;
              }
              if (LANES128(v112).n128_f32[2] <= 0.0 &&
                LANES128(v112).n128_f32[0] >= 0.0 &&
                LANES128(v112).n128_f32[0] <= 0x1.e000000000000p+10 &&
                LANES128(v112).n128_f32[1] >= 0.0 &&
                LANES128(v112).n128_f32[1] <= 0x1.0e00000000000p+10) {
                v113 = GameData_2130e00;
                v114 = (float*)*GameData_2130e00;
                v115 = *(_DWORD*)(*GameData_2130e00 + 548);
                if (v115 <= *(_DWORD*)(*GameData_2130e00 + 576)) {
                  v116 = *(_DWORD*)(*GameData_2130e00 + 548);
                }
                else {
                  v116 = v115 + 16;
                }
                if (v60) {
                  v117 = 160;
                  v118 = v114[96] +
                    (float)((float)(v114[97] - v114[96]) * *((float*)a1 + 16));
                }
                else {
                  v118 = v114[36];
                  v117 = 148;
                }
                v119 = v114[167] * (float)(v116 + 1);
                v120 = vsubq_f32(v54[2], v1545[2]);
                LANES128(v121).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                LANES128(v122).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                LANES128(v123).n128_u64[0] =
                  LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
                v124 = **a1;
                LANES64(v125).n64_u64[0] =
                  LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                               COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                    .n64_u64[0];
                *(int8x8_t*)&LANES128(v121).n128_i8[8] =
                  vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v126).n128_u64[0] = LANES128(v123).n128_u64[0];
                v127 = *(_QWORD*)(v124 + 18736);
                v128 = *(_DWORD*)(v124 + 19200);
                v129 = *(_DWORD*)(v124 + 17280);
                *(int8x8_t*)&LANES128(v126).n128_i8[8] = v125;
                v130 = vmulq_f32(v121, v126);
                *(int8x8_t*)&LANES128(v122).n128_i8[8] =
                  vqtbl1_s8(v120, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                LANES128(v131).n128_u64[0] =
                  LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
                *(int8x8_t*)&LANES128(v131).n128_i8[8] =
                  vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                v132 = vmulq_f32(v120, v120);
                v133 = vmlsq_f32(v130, v131, v122);
                LANES128(v132).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v132, v132, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v132).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v132).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v132).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v132).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v132).n128_u64[1] = LANES128(v132).n128_u64[0];
                v134 = vrsqrteq_f32(v132);
                v135 =
                  vmulq_f32(v134, vrsqrtsq_f32(v134, vmulq_f32(v132, v134)));
                v136 = vbicq_s8(
                  vmulq_f32(v120,
                    vmulq_f32(v135, vrsqrtsq_f32(v135, vmulq_f32(v132, v135)))),
                  vceqzq_f32(v132));
                v137 = vmulq_f32(v133, v133);
                v138 = vmulq_n_f32(v136, v118);
                LANES128(v137).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v137, v137, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v137).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v137).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v137).n128_u64[1] = LANES128(v137).n128_u64[0];
                v139 = vrsqrteq_f32(v137);
                v140 =
                  vmulq_f32(v139, vrsqrtsq_f32(v139, vmulq_f32(v137, v139)));
                v141 = vbicq_s8(
                  vmulq_f32(v133,
                    vmulq_f32(v140, vrsqrtsq_f32(v140, vmulq_f32(v137, v140)))),
                  vceqzq_f32(v137));
                v142 = *v102;
                *(_DWORD*)(v124 + 19200) = v128 + 1;
                v143 = vmulq_n_f32(v141, v118);
                v144 = vsubq_f32(v142, v138);
                if (v128 <= 262142) {
                  v145 = vsubq_f32(v144, v143);
                  v146 = *(_QWORD*)(v124 + 19136) + 40LL * (v128 + 1);
                  *(_QWORD*)(v146 + 16) = 0;
                  *(_DWORD*)(v146 + 12) = 0;
                  *(_DWORD*)(v146 + 8) = LANES128(v145).n128_u32[2];
                  LANES128(v145).n128_f32[1] =
                    v119 + LANES128(v145).n128_f32[1];
                  *(_QWORD*)v146 = LANES128(v145).n128_u64[0];
                  *(int32x4_t*)(v146 + 24) = v1547;
                  v147 = v127 + 1440LL * v129 +
                    4LL * *(int*)(v127 + 1440LL * v129 + 256);
                  ++*(_DWORD*)(v147 + 260);
                }
                v148 = **a1;
                v149 = *(_QWORD*)(v148 + 18736);
                v150 = *(_DWORD*)(v148 + 19200);
                v151 = *(_DWORD*)(v148 + 17280);
                *(_DWORD*)(v148 + 19200) = v150 + 1;
                if (v150 <= 262142) {
                  v152 = vaddq_f32(v144, v143);
                  v153 = *(_QWORD*)(v148 + 19136) + 40LL * (v150 + 1);
                  *(_QWORD*)(v153 + 16) = 0;
                  *(_DWORD*)(v153 + 12) = 0;
                  *(_DWORD*)(v153 + 8) = LANES128(v152).n128_u32[2];
                  LANES128(v152).n128_f32[1] =
                    v119 + LANES128(v152).n128_f32[1];
                  *(_QWORD*)v153 = LANES128(v152).n128_u64[0];
                  *(int32x4_t*)(v153 + 24) = v1547;
                  v154 = v149 + 1440LL * v151 +
                    4LL * *(int*)(v149 + 1440LL * v151 + 256);
                  ++*(_DWORD*)(v154 + 260);
                }
                v155 = vaddq_f32(v138, v142);
                v156 = **a1;
                v157 = *(_QWORD*)(v156 + 18736);
                v158 = *(_DWORD*)(v156 + 19200);
                v159 = *(_DWORD*)(v156 + 17280);
                *(_DWORD*)(v156 + 19200) = v158 + 1;
                if (v158 <= 262142) {
                  v160 = vaddq_f32(v155, v143);
                  v161 = *(_QWORD*)(v156 + 19136) + 40LL * (v158 + 1);
                  *(_QWORD*)(v161 + 16) = 0;
                  *(_DWORD*)(v161 + 12) = 0;
                  *(_DWORD*)(v161 + 8) = LANES128(v160).n128_u32[2];
                  LANES128(v160).n128_f32[1] =
                    v119 + LANES128(v160).n128_f32[1];
                  *(_QWORD*)v161 = LANES128(v160).n128_u64[0];
                  *(int32x4_t*)(v161 + 24) = v1547;
                  v162 = v157 + 1440LL * v159 +
                    4LL * *(int*)(v157 + 1440LL * v159 + 256);
                  ++*(_DWORD*)(v162 + 260);
                }
                v163 = **a1;
                v164 = *(_QWORD*)(v163 + 18736);
                v165 = *(_DWORD*)(v163 + 19200);
                v166 = *(_DWORD*)(v163 + 17280);
                *(_DWORD*)(v163 + 19200) = v165 + 1;
                if (v165 <= 262142) {
                  v167 = vsubq_f32(v155, v143);
                  v168 = *(_QWORD*)(v163 + 19136) + 40LL * (v165 + 1);
                  *(_QWORD*)(v168 + 16) = 0;
                  *(_DWORD*)(v168 + 12) = 0;
                  *(_DWORD*)(v168 + 8) = LANES128(v167).n128_u32[2];
                  LANES128(v167).n128_f32[1] =
                    v119 + LANES128(v167).n128_f32[1];
                  v169 = v1547;
                  *(_QWORD*)v168 = LANES128(v167).n128_u64[0];
                  *(int32x4_t*)(v168 + 24) = v169;
                  v170 = v164 + 1440LL * v166 +
                    4LL * *(int*)(v164 + 1440LL * v166 + 256);
                  ++*(_DWORD*)(v170 + 260);
                }
                *(int8x8_t*)&LANES128(v123).n128_i8[8] = v125;
                v171 = *(_DWORD*)(*v113 + 544);
                v172 = vsubq_f32(v54[2], v1545[2]);
                LANES128(v173).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                LANES64(v174).n64_u64[0] = LANES64_OF(
                  vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                                             .n64_u64[0];
                LANES128(v175).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                LANES64(v176).n64_u64[0] = LANES64_OF(
                  vqtbl1_s8(v172, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                                             .n64_u64[0];
                if (v171 > *(_DWORD*)(*v113 + 576)) {
                  v171 += 16;
                }
                *(int8x8_t*)&LANES128(v173).n128_i8[8] = v174;
                *(int8x8_t*)&LANES128(v175).n128_i8[8] = v176;
                v177 = *(float*)(*v113 + 668) * (float)(v171 + 1);
                v178 = *(float*)(*v113 + v117);
                v179 = **a1;
                v180 = vmlsq_f32(vmulq_f32(v123, v173), v131, v175);
                v181 = vmulq_f32(v172, v172);
                v182 = *(_QWORD*)(v179 + 18736);
                v183 = *(_DWORD*)(v179 + 19200);
                v184 = *(_DWORD*)(v179 + 17280);
                LANES128(v181).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v181, v181, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v181).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v181).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v181).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v181).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v181).n128_u64[1] = LANES128(v181).n128_u64[0];
                v185 = vrsqrteq_f32(v181);
                v186 =
                  vmulq_f32(v185, vrsqrtsq_f32(v185, vmulq_f32(v181, v185)));
                v187 = vbicq_s8(
                  vmulq_f32(v172,
                    vmulq_f32(v186, vrsqrtsq_f32(v186, vmulq_f32(v181, v186)))),
                  vceqzq_f32(v181));
                v188 = vmulq_f32(v180, v180);
                LANES128(v188).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v188, v188, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v188).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v188).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v188).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v188).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v188).n128_u64[1] = LANES128(v188).n128_u64[0];
                v189 = vrsqrteq_f32(v188);
                v190 =
                  vmulq_f32(v189, vrsqrtsq_f32(v189, vmulq_f32(v188, v189)));
                v191 = vbicq_s8(
                  vmulq_f32(v180,
                    vmulq_f32(v190, vrsqrtsq_f32(v190, vmulq_f32(v188, v190)))),
                  vceqzq_f32(v188));
                v192 = *v102;
                v193 = vmulq_n_f32(v187, v178);
                *(_DWORD*)(v179 + 19200) = v183 + 1;
                v194 = vmulq_n_f32(v191, v178);
                v195 = vsubq_f32(v192, v193);
                if (v183 <= 262142) {
                  v196 = vsubq_f32(v195, v194);
                  v197 = *(_QWORD*)(v179 + 19136) + 40LL * (v183 + 1);
                  *(_QWORD*)(v197 + 16) = 0;
                  *(_DWORD*)(v197 + 12) = 0;
                  *(_DWORD*)(v197 + 8) = LANES128(v196).n128_u32[2];
                  LANES128(v196).n128_f32[1] =
                    v177 + LANES128(v196).n128_f32[1];
                  *(_QWORD*)v197 = LANES128(v196).n128_u64[0];
                  *(long double*)(v197 + 24) = v1546;
                  v198 = v182 + 1440LL * v184 +
                    4LL * *(int*)(v182 + 1440LL * v184 + 256);
                  ++*(_DWORD*)(v198 + 260);
                }
                v199 = **a1;
                v200 = *(_QWORD*)(v199 + 18736);
                v201 = *(_DWORD*)(v199 + 19200);
                v202 = *(_DWORD*)(v199 + 17280);
                *(_DWORD*)(v199 + 19200) = v201 + 1;
                if (v201 <= 262142) {
                  v203 = vaddq_f32(v195, v194);
                  v204 = *(_QWORD*)(v199 + 19136) + 40LL * (v201 + 1);
                  *(_QWORD*)(v204 + 16) = 0;
                  *(_DWORD*)(v204 + 12) = 0;
                  *(_DWORD*)(v204 + 8) = LANES128(v203).n128_u32[2];
                  LANES128(v203).n128_f32[1] =
                    v177 + LANES128(v203).n128_f32[1];
                  *(_QWORD*)v204 = LANES128(v203).n128_u64[0];
                  *(long double*)(v204 + 24) = v1546;
                  v205 = v200 + 1440LL * v202 +
                    4LL * *(int*)(v200 + 1440LL * v202 + 256);
                  ++*(_DWORD*)(v205 + 260);
                }
                v206 = vaddq_f32(v193, v192);
                v207 = **a1;
                v208 = *(_QWORD*)(v207 + 18736);
                v209 = *(_DWORD*)(v207 + 19200);
                v210 = *(_DWORD*)(v207 + 17280);
                *(_DWORD*)(v207 + 19200) = v209 + 1;
                if (v209 <= 262142) {
                  v211 = vaddq_f32(v206, v194);
                  v212 = *(_QWORD*)(v207 + 19136) + 40LL * (v209 + 1);
                  *(_QWORD*)(v212 + 16) = 0;
                  *(_DWORD*)(v212 + 12) = 0;
                  *(_DWORD*)(v212 + 8) = LANES128(v211).n128_u32[2];
                  LANES128(v211).n128_f32[1] =
                    v177 + LANES128(v211).n128_f32[1];
                  *(_QWORD*)v212 = LANES128(v211).n128_u64[0];
                  *(long double*)(v212 + 24) = v1546;
                  v213 = v208 + 1440LL * v210 +
                    4LL * *(int*)(v208 + 1440LL * v210 + 256);
                  ++*(_DWORD*)(v213 + 260);
                }
                v214 = **a1;
                v215 = *(_QWORD*)(v214 + 18736);
                v216 = *(_DWORD*)(v214 + 19200);
                v217 = *(_DWORD*)(v214 + 17280);
                *(_DWORD*)(v214 + 19200) = v216 + 1;
                if (v216 <= 262142) {
                  v218 = vsubq_f32(v206, v194);
                  v219 = *(_QWORD*)(v214 + 19136) + 40LL * (v216 + 1);
                  *(_QWORD*)(v219 + 16) = 0;
                  *(_DWORD*)(v219 + 12) = 0;
                  *(_DWORD*)(v219 + 8) = LANES128(v218).n128_u32[2];
                  LANES128(v218).n128_f32[1] =
                    v177 + LANES128(v218).n128_f32[1];
                  *(_QWORD*)v219 = LANES128(v218).n128_u64[0];
                  *(long double*)(v219 + 24) = v1546;
                  v220 = v215 + 1440LL * v217 +
                    4LL * *(int*)(v215 + 1440LL * v217 + 256);
                  ++*(_DWORD*)(v220 + 260);
                }
              }
              --v101;
              ++v102;
            } while (v101 != 0);
          LABEL_142:
            v46 = v1468;
            if (!v60) {
              goto LABEL_38;
            }
            v221 = *(__int64**)**a1;
            v222 = *v221;
            *((_DWORD*)v221 + 4324) = 1;
            GameRoutine_1994460_alt1(v222);
            if ((int)v79 >= 1) {
              v223 = (float32x4_t*)&v1548;
              v79 = (unsigned int)v79;
              if (v1489 != 0) {
                v224 = 2;
              }
              else {
                v224 = 0;
              }
              if (v1489 != 0) {
                v225 = 3;
              }
              else {
                v225 = 1;
              }
              if (v1489 != 0) {
                v226 = 7;
              }
              else {
                v226 = 4;
              }
              do {
                v227 = *(
                  _QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
                v229 = *(_QWORD*)(v227 + 24);
                v228 = *(__int64**)(v227 + 32);
                if (v228 != nullptr) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v228 + 1),
                    1u, memory_order_relaxed);
                }
                *(struct GmapDrawer_mtx44*)v1577 =
                  ((struct GmapDrawer_mtx44 (*)(__int64)) *
                    (_QWORD*)(*(_QWORD*)v229 + 16LL))(v229);
                *(struct GmapDrawer_mtx44*)v1582 =
                  ((struct GmapDrawer_mtx44 (*)(__int64)) *
                    (_QWORD*)(*(_QWORD*)v229 + 24LL))(v229);
                v236 = GameRoutine_a6c440(v223, v1577, v1582);
                if (v228 != nullptr &&
                  atomic_fetch_add((atomic_ullong* volatile)(v228 + 1),
                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v237 = *v228;
                  v1547 = v236;
                  (*(void (**)(__int64*))(v237 + 16))(v228);
                  std___1___shared_weak_count___release_weak(v228);
                  v236 = v1547;
                }
                if (LANES128(v236).n128_f32[2] <= 0.0 &&
                  LANES128(v236).n128_f32[0] >= 0.0 &&
                  LANES128(v236).n128_f32[0] <= 0x1.e000000000000p+10 &&
                  LANES128(v236).n128_f32[1] >= 0.0 &&
                  LANES128(v236).n128_f32[1] <= 0x1.0e00000000000p+10) {
                  v238 = *((float*)a1 + 16);
                  v239 = *GameData_2130e00;
                  v240 = *(_DWORD*)(*GameData_2130e00 + 4 * v226 + 544);
                  if (v240 > *(_DWORD*)(*GameData_2130e00 + 576)) {
                    v240 += 16;
                  }
                  v241 = *(float*)(*GameData_2130e00 + 668) * (float)(v240 + 1);
                  LANES128(v236).n128_u32[0] = *(_DWORD*)(v239 + 384);
                  v242 = *(float*)(v239 + 388);
                  v243 = v239 + 400;
                  LANES128(v236).n128_f32[0] = LANES128(v236).n128_f32[0] +
                    (float)((float)(v242 - LANES128(v236).n128_f32[0]) * v238);
                  v244 = v1545[2];
                  v1547 = v236;
                  v245 = vsubq_f32(v54[2], v244);
                  v246 = *(float32x4_t*)(v243 + 16 * v224);
                  v1523 = v245;
                  v247 = vsubq_f32(*(float32x4_t*)(v243 + 16 * v225), v246);
                  v248 = LANES128(v246).n128_f32[1] +
                    vmuls_lane_f32(v238,
                      COERCE_AS(float32x2_t, LANES128(v247).n128_u64[0]), 1);
                  v249 =
                    LANES128(v246).n128_f32[2] + vmuls_lane_f32(v238, v247, 2);
                  *(float*)&v1512 =
                    LANES128(v246).n128_f32[3] + vmuls_lane_f32(v238, v247, 3);
                  v1502 =
                    COERCE_UNSIGNED_INT128(powf(LANES128(v246).n128_f32[0] +
                        (float)(v238 * LANES128(v247).n128_f32[0]),
                      v12));
                  v1490 = COERCE_UNSIGNED_INT128(powf(v248, v12));
                  *(long double*)&v250 = powf(v249, v12);
                  *(_QWORD*)&v251 = __PAIR64__(v1490, v1502);
                  *((_QWORD*)&v251 + 1) =
                    __PAIR64__(v1512, LANES128(v250).n128_u32[0]);
                  LANES128(v252).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v1523, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                 .n64_u64[0];
                  LANES128(v253).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
                  LANES128(v250).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
                  v254 = **a1;
                  v255 = LANES128(v1547).n128_f32[0];
                  *(int8x8_t*)&LANES128(v252).n128_i8[8] =
                    vqtbl1_s8(v1523, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                  LANES128(v256).n128_u64[0] = LANES64_OF(
                    vqtbl1_s8(v1523, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                 .n64_u64[0];
                  *(int8x8_t*)&LANES128(v250).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                  v257 = *(_QWORD*)(v254 + 18736);
                  *(int8x8_t*)&LANES128(v253).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                  v258 = *(_DWORD*)(v254 + 19200);
                  v259 = *(_DWORD*)(v254 + 17280);
                  *(int8x8_t*)&LANES128(v256).n128_i8[8] =
                    vqtbl1_s8(v1523, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                  v260 = vmlsq_f32(vmulq_f32(v252, v253), v250, v256);
                  v261 = vmulq_f32(v1523, v1523);
                  LANES128(v261).n128_u64[0] = LANES64_OF(
                    vadd_f32(
                      COERCE_AS(float32x2_t,
                        LANES128_OF(vextq_s8(v261, v261, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0])))
                                                 .n64_u64[0];
                  LANES128(v261).n128_u64[0] = LANES64_OF(
                    vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0])))
                                                 .n64_u64[0];
                  LANES128(v261).n128_u64[1] = LANES128(v261).n128_u64[0];
                  v262 = vrsqrteq_f32(v261);
                  v263 =
                    vmulq_f32(v262, vrsqrtsq_f32(v262, vmulq_f32(v261, v262)));
                  v264 =
                    vbicq_s8(vmulq_f32(v1523,
                               vmulq_f32(v263,
                                 vrsqrtsq_f32(v263, vmulq_f32(v261, v263)))),
                      vceqzq_f32(v261));
                  v265 = vmulq_f32(v260, v260);
                  LANES128(v265).n128_u64[0] = LANES64_OF(
                    vadd_f32(
                      COERCE_AS(float32x2_t,
                        LANES128_OF(vextq_s8(v265, v265, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v265).n128_u64[0])))
                                                 .n64_u64[0];
                  LANES128(v265).n128_u64[0] = LANES64_OF(
                    vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v265).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v265).n128_u64[0])))
                                                 .n64_u64[0];
                  LANES128(v265).n128_u64[1] = LANES128(v265).n128_u64[0];
                  v266 = vrsqrteq_f32(v265);
                  v267 =
                    vmulq_f32(v266, vrsqrtsq_f32(v266, vmulq_f32(v265, v266)));
                  v268 =
                    vbicq_s8(vmulq_f32(v260,
                               vmulq_f32(v267,
                                 vrsqrtsq_f32(v267, vmulq_f32(v265, v267)))),
                      vceqzq_f32(v265));
                  v269 = *v223;
                  v270 = vmulq_n_f32(v264, LANES128(v1547).n128_f32[0]);
                  *(_DWORD*)(v254 + 19200) = v258 + 1;
                  v271 = vmulq_n_f32(v268, v255);
                  v272 = vsubq_f32(v269, v270);
                  if (v258 <= 262142) {
                    v273 = vsubq_f32(v272, v271);
                    v274 = *(_QWORD*)(v254 + 19136) + 40LL * (v258 + 1);
                    *(_QWORD*)(v274 + 16) = 0;
                    *(_DWORD*)(v274 + 12) = 0;
                    *(_OWORD*)(v274 + 24) = v251;
                    *(_DWORD*)(v274 + 8) = LANES128(v273).n128_u32[2];
                    LANES128(v273).n128_f32[1] =
                      v241 + LANES128(v273).n128_f32[1];
                    *(_QWORD*)v274 = LANES128(v273).n128_u64[0];
                    v275 = v257 + 1440LL * v259 +
                      4LL * *(int*)(v257 + 1440LL * v259 + 256);
                    ++*(_DWORD*)(v275 + 260);
                  }
                  v276 = **a1;
                  v277 = *(_QWORD*)(v276 + 18736);
                  v278 = *(_DWORD*)(v276 + 19200);
                  v279 = *(_DWORD*)(v276 + 17280);
                  *(_DWORD*)(v276 + 19200) = v278 + 1;
                  if (v278 <= 262142) {
                    v280 = vaddq_f32(v272, v271);
                    v281 = *(_QWORD*)(v276 + 19136) + 40LL * (v278 + 1);
                    *(_QWORD*)(v281 + 16) = 0;
                    *(_DWORD*)(v281 + 12) = 0;
                    *(_OWORD*)(v281 + 24) = v251;
                    *(_DWORD*)(v281 + 8) = LANES128(v280).n128_u32[2];
                    LANES128(v280).n128_f32[1] =
                      v241 + LANES128(v280).n128_f32[1];
                    *(_QWORD*)v281 = LANES128(v280).n128_u64[0];
                    v282 = v277 + 1440LL * v279 +
                      4LL * *(int*)(v277 + 1440LL * v279 + 256);
                    ++*(_DWORD*)(v282 + 260);
                  }
                  v283 = vaddq_f32(v270, v269);
                  v21 = -0x1.0000000000000p-1;
                  v284 = **a1;
                  v285 = *(_QWORD*)(v284 + 18736);
                  v286 = *(_DWORD*)(v284 + 19200);
                  v287 = *(_DWORD*)(v284 + 17280);
                  *(_DWORD*)(v284 + 19200) = v286 + 1;
                  if (v286 <= 262142) {
                    v288 = vaddq_f32(v283, v271);
                    v289 = *(_QWORD*)(v284 + 19136) + 40LL * (v286 + 1);
                    *(_QWORD*)(v289 + 16) = 0;
                    *(_DWORD*)(v289 + 12) = 0;
                    *(_OWORD*)(v289 + 24) = v251;
                    *(_DWORD*)(v289 + 8) = LANES128(v288).n128_u32[2];
                    LANES128(v288).n128_f32[1] =
                      v241 + LANES128(v288).n128_f32[1];
                    *(_QWORD*)v289 = LANES128(v288).n128_u64[0];
                    v290 = v285 + 1440LL * v287 +
                      4LL * *(int*)(v285 + 1440LL * v287 + 256);
                    ++*(_DWORD*)(v290 + 260);
                  }
                  v291 = **a1;
                  v292 = *(_QWORD*)(v291 + 18736);
                  v293 = *(_DWORD*)(v291 + 19200);
                  v294 = *(_DWORD*)(v291 + 17280);
                  *(_DWORD*)(v291 + 19200) = v293 + 1;
                  if (v293 <= 262142) {
                    v295 = vsubq_f32(v283, v271);
                    v296 = *(_QWORD*)(v291 + 19136) + 40LL * (v293 + 1);
                    *(_QWORD*)(v296 + 16) = 0;
                    *(_DWORD*)(v296 + 12) = 0;
                    *(_OWORD*)(v296 + 24) = v251;
                    *(_DWORD*)(v296 + 8) = LANES128(v295).n128_u32[2];
                    LANES128(v295).n128_f32[1] =
                      v241 + LANES128(v295).n128_f32[1];
                    *(_QWORD*)v296 = LANES128(v295).n128_u64[0];
                    v297 = v292 + 1440LL * v294 +
                      4LL * *(int*)(v292 + 1440LL * v294 + 256);
                    ++*(_DWORD*)(v297 + 260);
                  }
                }
                --v79;
                ++v223;
              } while (v79 != 0);
            }
            v298 = *(__int64**)**a1;
            v299 = *v298;
            *((_DWORD*)v298 + 4324) = 0;
            GameRoutine_1994460_alt1(v299);
            v45 = (unsigned __int64)&v1548;
          }
          else {
            v300 = *((float32x4_t*)v52 + 2);
            v301 = *((float32x4_t*)v52 + 3);
            v302 = 2;
            v303 = *((float32x4_t*)v52 + 6);
            v46 = v1468;
            v304 =
              vaddq_f32(vaddq_f32(vaddq_f32((*v52)[2],
                                    vmulq_f32(v300, COERCE_AS(float32x4_t, 0))),
                          vmulq_f32(v301, COERCE_AS(float32x4_t, 0))),
                vmulq_f32(v303, COERCE_AS(float32x4_t, 0)));
            *(_QWORD*)&v305 = LANES128(v304).n128_u64[0];
            *((_QWORD*)&v305 + 1) = LANES128(v304).n128_u32[2];
            v1548 = v305;
            v306 = 2;
            v307 = vaddq_f32(vmulq_f32(v303, vdupq_n_s32(0x381B5839u)),
              vaddq_f32(vmulq_f32(v301, vdupq_n_s32(0x3B532BEBu)),
                vaddq_f32(vmulq_f32(v300, vdupq_n_s32(0x3DBF5FCCu)),
                  vmulq_f32((*v52)[2], vdupq_n_s32(0x3F673E6Bu)))));
            LANES128(v304).n128_u64[0] = LANES128(v307).n128_u64[0];
            LANES128(v304).n128_u64[1] = LANES128(v307).n128_u32[2];
            v1549 = v304;
            while (1) {
              if (-1431655765 * v306 <= 0x55555555) {
                v318 = (float)v306 / 0x1.e000000000000p+5;
                if (v318 >= 0x1.0000000000000p-1) {
                  v309 = *((float32x4_t*)v52 + 5);
                  v308 = *((float32x4_t*)v52 + 6);
                  v310 = *((float32x4_t*)v52 + 4);
                  v311 = (float)(v318 + v21) + (float)(v318 + v21);
                  v312 = 0x1.0000000000000p+0 - v311;
                  v313 = v52[1] + 2;
                  v314 = v312 * v312;
                }
                else {
                  v311 = v318 + v318;
                  v310 = *((float32x4_t*)v52 + 2);
                  v309 = *((float32x4_t*)v52 + 3);
                  v308 = (*v52)[2];
                  v312 = 0x1.0000000000000p+0 - (float)(v318 + v318);
                  v314 = v312 * v312;
                  v313 = (float32x4_t*)(v52 + 12);
                }
                v315 = &v1548 + v302++;
                v316 = vaddq_f32(
                  vaddq_f32(vaddq_f32(vmulq_n_f32(v308, v312 * v314),
                              vmulq_n_f32(v310,
                                v311 * (float)(v312 * (float)(v312 * v20)))),
                    vmulq_n_f32(
                      v309, v311 * (float)(v311 * (float)(v312 * v20)))),
                  vmulq_n_f32(*v313, v311 * (float)(v311 * v311)));
                *(_QWORD*)v315 = LANES128(v316).n128_u64[0];
                v317 = *v315;
                *((_QWORD*)&v317 + 1) = LANES128(v316).n128_u32[2];
                *v315 = v317;
                if (v302 == 22) {
                  break;
                }
              }
              if (++v306 == 61) {
                v319 = v302 - 1;
                goto LABEL_184;
              }
            }
            v319 = 21;
          LABEL_184:
            v320 =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
            v322 = *(_QWORD*)(v320 + 24);
            v321 = *(_QWORD*)(v320 + 32);
            if (v321 != 0) {
              atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(v321 + 8), 1u, memory_order_relaxed);
            }
            *(struct GmapDrawer_mtx44*)v1577 =
              ((struct GmapDrawer_mtx44 (*)(__int64)) *
                (_QWORD*)(*(_QWORD*)v322 + 16LL))(v322);
            *(struct GmapDrawer_mtx44*)v1582 =
              ((struct GmapDrawer_mtx44 (*)(__int64)) *
                (_QWORD*)(*(_QWORD*)v322 + 24LL))(v322);
            v329 = GameRoutine_a6c440(&v1548, v1577, v1582);
            if (v321 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v321 + 8),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
              v1524 = v329;
              (*(void (**)(__int64))(*(_QWORD*)v321 + 16LL))(v321);
              std___1___shared_weak_count___release_weak(v321);
              v329 = v1524;
            }
            if (LANES128(v329).n128_f32[2] > 0.0 ||
              LANES128(v329).n128_f32[0] < 0.0 ||
              LANES128(v329).n128_f32[0] > 0x1.e000000000000p+10 ||
              LANES128(v329).n128_f32[1] < 0.0 ||
              LANES128(v329).n128_f32[1] > 0x1.0e00000000000p+10) {
              v330 =
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
              v332 = *(_QWORD*)(v330 + 24);
              v331 = *(_QWORD*)(v330 + 32);
              if (v331 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v331 + 8),
                  1u, memory_order_relaxed);
              }
              *(struct GmapDrawer_mtx44*)v1577 =
                ((struct GmapDrawer_mtx44 (*)(__int64)) *
                  (_QWORD*)(*(_QWORD*)v332 + 16LL))(v332);
              *(struct GmapDrawer_mtx44*)v1582 =
                ((struct GmapDrawer_mtx44 (*)(__int64)) *
                  (_QWORD*)(*(_QWORD*)v332 + 24LL))(v332);
              v339 = GameRoutine_a6c440(&v1549, v1577, v1582);
              if (v331 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v331 + 8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                v1525 = v339;
                (*(void (**)(__int64))(*(_QWORD*)v331 + 16LL))(v331);
                std___1___shared_weak_count___release_weak(v331);
                v339 = v1525;
              }
              if (LANES128(v339).n128_f32[2] > 0.0 ||
                LANES128(v339).n128_f32[0] < 0.0 ||
                LANES128(v339).n128_f32[0] > 0x1.e000000000000p+10 ||
                LANES128(v339).n128_f32[1] < 0.0 ||
                LANES128(v339).n128_f32[1] > 0x1.0e00000000000p+10) {
                v340 = *(
                  _QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
                v342 = *(_QWORD*)(v340 + 24);
                v341 = *(_QWORD*)(v340 + 32);
                if (v341 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v341 + 8),
                    1u, memory_order_relaxed);
                }
                *(struct GmapDrawer_mtx44*)v1577 =
                  ((struct GmapDrawer_mtx44 (*)(__int64)) *
                    (_QWORD*)(*(_QWORD*)v342 + 16LL))(v342);
                *(struct GmapDrawer_mtx44*)v1582 =
                  ((struct GmapDrawer_mtx44 (*)(__int64)) *
                    (_QWORD*)(*(_QWORD*)v342 + 24LL))(v342);
                v349 = GameRoutine_a6c440(&v1550, v1577, v1582);
                if (v341 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v341 + 8),
                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v1526 = v349;
                  (*(void (**)(__int64))(*(_QWORD*)v341 + 16LL))(v341);
                  std___1___shared_weak_count___release_weak(v341);
                  v349 = v1526;
                }
                if (LANES128(v349).n128_f32[2] > 0.0 ||
                  LANES128(v349).n128_f32[0] < 0.0 ||
                  LANES128(v349).n128_f32[0] > 0x1.e000000000000p+10 ||
                  LANES128(v349).n128_f32[1] < 0.0 ||
                  LANES128(v349).n128_f32[1] > 0x1.0e00000000000p+10) {
                  v350 =
                    *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                      8LL);
                  v352 = *(_QWORD*)(v350 + 24);
                  v351 = *(_QWORD*)(v350 + 32);
                  if (v351 != 0) {
                    atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v351 + 8), 1u,
                      memory_order_relaxed);
                  }
                  *(struct GmapDrawer_mtx44*)v1577 =
                    ((struct GmapDrawer_mtx44 (*)(__int64)) *
                      (_QWORD*)(*(_QWORD*)v352 + 16LL))(v352);
                  *(struct GmapDrawer_mtx44*)v1582 =
                    ((struct GmapDrawer_mtx44 (*)(__int64)) *
                      (_QWORD*)(*(_QWORD*)v352 + 24LL))(v352);
                  v359 = GameRoutine_a6c440(&v1551, v1577, v1582);
                  if (v351 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v351 + 8),
                      0xFFFFFFFFFFFFFFFFLL) == 0) {
                    v1527 = v359;
                    (*(void (**)(__int64))(*(_QWORD*)v351 + 16LL))(v351);
                    std___1___shared_weak_count___release_weak(v351);
                    v359 = v1527;
                  }
                  if (LANES128(v359).n128_f32[2] > 0.0 ||
                    LANES128(v359).n128_f32[0] < 0.0 ||
                    LANES128(v359).n128_f32[0] > 0x1.e000000000000p+10 ||
                    LANES128(v359).n128_f32[1] < 0.0 ||
                    LANES128(v359).n128_f32[1] > 0x1.0e00000000000p+10) {
                    v360 =
                      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                        8LL);
                    v362 = *(_QWORD*)(v360 + 24);
                    v361 = *(_QWORD*)(v360 + 32);
                    if (v361 != 0) {
                      atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v361 + 8), 1u,
                        memory_order_relaxed);
                    }
                    *(struct GmapDrawer_mtx44*)v1577 =
                      ((struct GmapDrawer_mtx44 (*)(__int64)) *
                        (_QWORD*)(*(_QWORD*)v362 + 16LL))(v362);
                    *(struct GmapDrawer_mtx44*)v1582 =
                      ((struct GmapDrawer_mtx44 (*)(__int64)) *
                        (_QWORD*)(*(_QWORD*)v362 + 24LL))(v362);
                    v369 = GameRoutine_a6c440(&v1552, v1577, v1582);
                    if (v361 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v361 + 8),
                        0xFFFFFFFFFFFFFFFFLL) == 0) {
                      v1528 = v369;
                      (*(void (**)(__int64))(*(_QWORD*)v361 + 16LL))(v361);
                      std___1___shared_weak_count___release_weak(v361);
                      v369 = v1528;
                    }
                    if (LANES128(v369).n128_f32[2] > 0.0 ||
                      LANES128(v369).n128_f32[0] < 0.0 ||
                      LANES128(v369).n128_f32[0] > 0x1.e000000000000p+10 ||
                      LANES128(v369).n128_f32[1] < 0.0 ||
                      LANES128(v369).n128_f32[1] > 0x1.0e00000000000p+10) {
                      v370 = *(
                        _QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                        8LL);
                      v372 = *(_QWORD*)(v370 + 24);
                      v371 = *(_QWORD*)(v370 + 32);
                      if (v371 != 0) {
                        atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v371 + 8), 1u,
                          memory_order_relaxed);
                      }
                      *(struct GmapDrawer_mtx44*)v1577 =
                        ((struct GmapDrawer_mtx44 (*)(__int64)) *
                          (_QWORD*)(*(_QWORD*)v372 + 16LL))(v372);
                      *(struct GmapDrawer_mtx44*)v1582 =
                        ((struct GmapDrawer_mtx44 (*)(__int64)) *
                          (_QWORD*)(*(_QWORD*)v372 + 24LL))(v372);
                      v379 = GameRoutine_a6c440(&v1553, v1577, v1582);
                      if (v371 != 0 &&
                        atomic_fetch_add((atomic_ullong* volatile)(v371 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0) {
                        v1529 = v379;
                        (*(void (**)(__int64))(*(_QWORD*)v371 + 16LL))(v371);
                        std___1___shared_weak_count___release_weak(v371);
                        v379 = v1529;
                      }
                      if (LANES128(v379).n128_f32[2] > 0.0 ||
                        LANES128(v379).n128_f32[0] < 0.0 ||
                        LANES128(v379).n128_f32[0] > 0x1.e000000000000p+10 ||
                        LANES128(v379).n128_f32[1] < 0.0 ||
                        LANES128(v379).n128_f32[1] > 0x1.0e00000000000p+10) {
                        v380 =
                          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                       32LL) -
                            8LL);
                        v382 = *(_QWORD*)(v380 + 24);
                        v381 = *(_QWORD*)(v380 + 32);
                        if (v381 != 0) {
                          atomic_fetch_add_explicit(
                            (atomic_ullong* volatile)(v381 + 8), 1u,
                            memory_order_relaxed);
                        }
                        *(struct GmapDrawer_mtx44*)v1577 =
                          ((struct GmapDrawer_mtx44 (*)(__int64)) *
                            (_QWORD*)(*(_QWORD*)v382 + 16LL))(v382);
                        *(struct GmapDrawer_mtx44*)v1582 =
                          ((struct GmapDrawer_mtx44 (*)(__int64)) *
                            (_QWORD*)(*(_QWORD*)v382 + 24LL))(v382);
                        v389 = GameRoutine_a6c440(&v1554, v1577, v1582);
                        if (v381 != 0 &&
                          atomic_fetch_add((atomic_ullong* volatile)(v381 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0) {
                          v1530 = v389;
                          (*(void (**)(__int64))(*(_QWORD*)v381 + 16LL))(v381);
                          std___1___shared_weak_count___release_weak(v381);
                          v389 = v1530;
                        }
                        if (LANES128(v389).n128_f32[2] > 0.0 ||
                          LANES128(v389).n128_f32[0] < 0.0 ||
                          LANES128(v389).n128_f32[0] > 0x1.e000000000000p+10 ||
                          LANES128(v389).n128_f32[1] < 0.0 ||
                          LANES128(v389).n128_f32[1] > 0x1.0e00000000000p+10) {
                          v390 =
                            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                         32LL) -
                              8LL);
                          v392 = *(_QWORD*)(v390 + 24);
                          v391 = *(_QWORD*)(v390 + 32);
                          if (v391 != 0) {
                            atomic_fetch_add_explicit(
                              (atomic_ullong* volatile)(v391 + 8), 1u,
                              memory_order_relaxed);
                          }
                          *(struct GmapDrawer_mtx44*)v1577 =
                            ((struct GmapDrawer_mtx44 (*)(__int64)) *
                              (_QWORD*)(*(_QWORD*)v392 + 16LL))(v392);
                          *(struct GmapDrawer_mtx44*)v1582 =
                            ((struct GmapDrawer_mtx44 (*)(__int64)) *
                              (_QWORD*)(*(_QWORD*)v392 + 24LL))(v392);
                          v399 = GameRoutine_a6c440(&v1555, v1577, v1582);
                          if (v391 != 0 &&
                            atomic_fetch_add(
                              (atomic_ullong* volatile)(v391 + 8),
                              0xFFFFFFFFFFFFFFFFLL) == 0) {
                            v1531 = v399;
                            (*(void (**)(__int64))(*(_QWORD*)v391 + 16LL))(
                              v391);
                            std___1___shared_weak_count___release_weak(v391);
                            v399 = v1531;
                          }
                          if (LANES128(v399).n128_f32[2] > 0.0 ||
                            LANES128(v399).n128_f32[0] < 0.0 ||
                            LANES128(v399).n128_f32[0] >
                              0x1.e000000000000p+10 ||
                            LANES128(v399).n128_f32[1] < 0.0 ||
                            LANES128(v399).n128_f32[1] >
                              0x1.0e00000000000p+10) {
                            v400 =
                              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                           32LL) -
                                8LL);
                            v402 = *(_QWORD*)(v400 + 24);
                            v401 = *(_QWORD*)(v400 + 32);
                            if (v401 != 0) {
                              atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v401 + 8), 1u,
                                memory_order_relaxed);
                            }
                            *(struct GmapDrawer_mtx44*)v1577 =
                              ((struct GmapDrawer_mtx44 (*)(__int64)) *
                                (_QWORD*)(*(_QWORD*)v402 + 16LL))(v402);
                            *(struct GmapDrawer_mtx44*)v1582 =
                              ((struct GmapDrawer_mtx44 (*)(__int64)) *
                                (_QWORD*)(*(_QWORD*)v402 + 24LL))(v402);
                            v409 = GameRoutine_a6c440(&v1556, v1577, v1582);
                            if (v401 != 0 &&
                              atomic_fetch_add(
                                (atomic_ullong* volatile)(v401 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                              v1532 = v409;
                              (*(void (**)(__int64))(*(_QWORD*)v401 + 16LL))(
                                v401);
                              std___1___shared_weak_count___release_weak(v401);
                              v409 = v1532;
                            }
                            if (LANES128(v409).n128_f32[2] > 0.0 ||
                              LANES128(v409).n128_f32[0] < 0.0 ||
                              LANES128(v409).n128_f32[0] >
                                0x1.e000000000000p+10 ||
                              LANES128(v409).n128_f32[1] < 0.0 ||
                              LANES128(v409).n128_f32[1] >
                                0x1.0e00000000000p+10) {
                              v410 = *(
                                _QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                           32LL) -
                                8LL);
                              v412 = *(_QWORD*)(v410 + 24);
                              v411 = *(_QWORD*)(v410 + 32);
                              if (v411 != 0) {
                                atomic_fetch_add_explicit(
                                  (atomic_ullong* volatile)(v411 + 8), 1u,
                                  memory_order_relaxed);
                              }
                              *(struct GmapDrawer_mtx44*)v1577 =
                                ((struct GmapDrawer_mtx44 (*)(__int64)) *
                                  (_QWORD*)(*(_QWORD*)v412 + 16LL))(v412);
                              *(struct GmapDrawer_mtx44*)v1582 =
                                ((struct GmapDrawer_mtx44 (*)(__int64)) *
                                  (_QWORD*)(*(_QWORD*)v412 + 24LL))(v412);
                              v419 = GameRoutine_a6c440(&v1557, v1577, v1582);
                              if (v411 != 0 &&
                                atomic_fetch_add(
                                  (atomic_ullong* volatile)(v411 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
                                v1533 = v419;
                                (*(void (**)(__int64))(*(_QWORD*)v411 + 16LL))(
                                  v411);
                                std___1___shared_weak_count___release_weak(
                                  v411);
                                v419 = v1533;
                              }
                              LODWORD(v420) = LANES128(v419).n128_u32[2];
                              if (LANES128(v419).n128_f32[2] > 0.0 ||
                                LANES128(v419).n128_f32[0] < 0.0 ||
                                (LODWORD(v420) = 1156579328,
                                  LANES128(v419).n128_f32[0] >
                                    0x1.e000000000000p+10) ||
                                LANES128(v419).n128_f32[1] < 0.0 ||
                                (LODWORD(v420) = 1149698048,
                                  LANES128(v419).n128_f32[1] >
                                    0x1.0e00000000000p+10)) {
                                if ((GameRoutine_135bd70(&v1558, 0.0, v420) &
                                      1) == 0 &&
                                  (GameRoutine_135bd70(&v1559, 0.0, v421) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1560, 0.0, v422) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1561, 0.0, v423) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1562, 0.0, v424) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1563, 0.0, v425) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1564, 0.0, v426) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1565, 0.0, v427) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1566, 0.0, v428) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1567, 0.0, v429) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1568, 0.0, v430) &
                                    1) == 0 &&
                                  (GameRoutine_135bd70(&v1569, 0.0, v431) &
                                    1) == 0) {
                                  goto LABEL_38;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v764 = GameData_2130e00;
            if (v319 >= 2) {
              v765 = (float32x4_t*)(&v1548 + v319);
              v766 = 3;
              if (v1489 != 0) {
                v766 = 6;
              }
              if (!v60) {
                v766 = 1;
              }
              LANES128(v767).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
              *(int8x8_t*)&LANES128(v767).n128_i8[8] =
                vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v768 = v319;
              LANES128(v769).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
              *(int8x8_t*)&LANES128(v769).n128_i8[8] =
                vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              do {
                v770 = *v764;
                if (v60) {
                  v771 = 160;
                  v772 = *(float*)(v770 + 384) +
                    (float)((float)(*(float*)(v770 + 388) -
                              *(float*)(v770 + 384)) *
                      *((float*)a1 + 16));
                }
                else {
                  v772 = *(float*)(v770 + 140);
                  v771 = 148;
                }
                v775 = v765[-2];
                v773 = *v765;
                v774 = v765 - 1;
                v777 = v765[-1];
                LANES128(v775).n128_u32[3] = 0;
                v776 = *(_DWORD*)(v770 + 4 * v766 + 544);
                LANES128(v777).n128_u32[3] = 0;
                if (v776 > *(_DWORD*)(v770 + 576)) {
                  v776 += 16;
                }
                v778 = vsubq_f32(v777, v775);
                v779 = *(float*)(v770 + 668) * (float)(v776 + 1);
                LANES128(v781).n128_u32[0] = 0;
                LANES128(v781).n128_u64[1] = 0;
                v780 = **a1;
                LANES128(v781).n128_f32[1] = v779;
                LANES128(v782).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v778, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                v783 = *(_QWORD*)(v780 + 18736);
                v784 = *(_DWORD*)(v780 + 19200);
                v785 = *(_DWORD*)(v780 + 17280);
                *(int8x8_t*)&LANES128(v782).n128_i8[8] =
                  vqtbl1_s8(v778, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v786).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v778, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                *(_DWORD*)(v780 + 19200) = v784 + 1;
                *(int8x8_t*)&LANES128(v786).n128_i8[8] =
                  vqtbl1_s8(v778, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v787 = vmlsq_f32(vmulq_f32(v782, v767), v769, v786);
                v788 = vmulq_f32(v787, v787);
                LANES128(v788).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v788, v788, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v788).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v788).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v788).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v788).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v788).n128_u64[1] = LANES128(v788).n128_u64[0];
                v789 = vrsqrteq_f32(v788);
                v790 =
                  vmulq_f32(v789, vrsqrtsq_f32(v789, vmulq_f32(v788, v789)));
                v791 = vbicq_s8(
                  vmulq_f32(v787,
                    vmulq_f32(v790, vrsqrtsq_f32(v790, vmulq_f32(v788, v790)))),
                  vceqzq_f32(v788));
                if (v784 <= 262142) {
                  v792 = *(_QWORD*)(v780 + 19136) + 40LL * (v784 + 1);
                  *(_QWORD*)(v792 + 16) = 0;
                  *(_DWORD*)(v792 + 12) = 0;
                  v793 =
                    vaddq_f32(v781, vaddq_f32(v777, vmulq_n_f32(v791, v772)));
                  *(_QWORD*)v792 = LANES128(v793).n128_u64[0];
                  *(_DWORD*)(v792 + 8) = LANES128(v793).n128_u32[2];
                  *(int32x4_t*)(v792 + 24) = v1547;
                  v794 = v783 + 1440LL * v785 +
                    4LL * *(int*)(v783 + 1440LL * v785 + 256);
                  ++*(_DWORD*)(v794 + 260);
                }
                LANES128(v773).n128_u32[3] = 0;
                v795 = **a1;
                v796 = vsubq_f32(v773, v777);
                v797 = *(_QWORD*)(v795 + 18736);
                LANES128(v798).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v796, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                v799 = *(_DWORD*)(v795 + 19200);
                v800 = *(_DWORD*)(v795 + 17280);
                *(int8x8_t*)&LANES128(v798).n128_i8[8] =
                  vqtbl1_s8(v796, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v801).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v796, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                *(_DWORD*)(v795 + 19200) = v799 + 1;
                *(int8x8_t*)&LANES128(v801).n128_i8[8] =
                  vqtbl1_s8(v796, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v802 = vmlsq_f32(vmulq_f32(v767, v798), v769, v801);
                v803 = vmulq_f32(v802, v802);
                LANES128(v803).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v803, v803, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v803).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v803).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v803).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v803).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v803).n128_u64[1] = LANES128(v803).n128_u64[0];
                v804 = vrsqrteq_f32(v803);
                v805 =
                  vmulq_f32(v804, vrsqrtsq_f32(v804, vmulq_f32(v803, v804)));
                v806 = vbicq_s8(
                  vmulq_f32(v802,
                    vmulq_f32(v805, vrsqrtsq_f32(v805, vmulq_f32(v803, v805)))),
                  vceqzq_f32(v803));
                if (v799 <= 262142) {
                  v807 = *(_QWORD*)(v795 + 19136) + 40LL * (v799 + 1);
                  *(_QWORD*)(v807 + 16) = 0;
                  *(_DWORD*)(v807 + 12) = 0;
                  v808 =
                    vaddq_f32(v781, vaddq_f32(v773, vmulq_n_f32(v806, v772)));
                  *(_QWORD*)v807 = LANES128(v808).n128_u64[0];
                  *(_DWORD*)(v807 + 8) = LANES128(v808).n128_u32[2];
                  *(int32x4_t*)(v807 + 24) = v1547;
                  v809 = v797 + 1440LL * v800 +
                    4LL * *(int*)(v797 + 1440LL * v800 + 256);
                  ++*(_DWORD*)(v809 + 260);
                }
                v810 = -v772;
                v811 = **a1;
                v812 = *(_QWORD*)(v811 + 18736);
                v813 = *(_DWORD*)(v811 + 19200);
                v814 = *(_DWORD*)(v811 + 17280);
                *(_DWORD*)(v811 + 19200) = v813 + 1;
                if (v813 <= 262142) {
                  v815 = *(_QWORD*)(v811 + 19136) + 40LL * (v813 + 1);
                  *(_QWORD*)(v815 + 16) = 0;
                  *(_DWORD*)(v815 + 12) = 0;
                  v816 =
                    vaddq_f32(v781, vaddq_f32(v773, vmulq_n_f32(v806, v810)));
                  *(_QWORD*)v815 = LANES128(v816).n128_u64[0];
                  *(_DWORD*)(v815 + 8) = LANES128(v816).n128_u32[2];
                  *(int32x4_t*)(v815 + 24) = v1547;
                  v817 = v812 + 1440LL * v814 +
                    4LL * *(int*)(v812 + 1440LL * v814 + 256);
                  ++*(_DWORD*)(v817 + 260);
                }
                v818 = **a1;
                v819 = *(_QWORD*)(v818 + 18736);
                v820 = *(_DWORD*)(v818 + 19200);
                v821 = *(_DWORD*)(v818 + 17280);
                *(_DWORD*)(v818 + 19200) = v820 + 1;
                if (v820 <= 262142) {
                  v822 = *(_QWORD*)(v818 + 19136) + 40LL * (v820 + 1);
                  *(_QWORD*)(v822 + 16) = 0;
                  *(_DWORD*)(v822 + 12) = 0;
                  v823 =
                    vaddq_f32(v781, vaddq_f32(v777, vmulq_n_f32(v791, v810)));
                  *(_QWORD*)v822 = LANES128(v823).n128_u64[0];
                  *(_DWORD*)(v822 + 8) = LANES128(v823).n128_u32[2];
                  *(int32x4_t*)(v822 + 24) = v1547;
                  v824 = v819 + 1440LL * v821 +
                    4LL * *(int*)(v819 + 1440LL * v821 + 256);
                  ++*(_DWORD*)(v824 + 260);
                }
                v825 = *(float*)(*v764 + v771);
                v826 = *(_DWORD*)(*v764 + 544);
                if (v826 > *(_DWORD*)(*v764 + 576)) {
                  v826 += 16;
                }
                v827 = *(float*)(*v764 + 668) * (float)(v826 + 1);
                LANES128(v829).n128_u32[0] = 0;
                LANES128(v829).n128_u64[1] = 0;
                v828 = **a1;
                LANES128(v829).n128_f32[1] = v827;
                v830 = *(_QWORD*)(v828 + 18736);
                v831 = *(_DWORD*)(v828 + 19200);
                v832 = *(_DWORD*)(v828 + 17280);
                *(_DWORD*)(v828 + 19200) = v831 + 1;
                if (v831 <= 262142) {
                  v833 = *(_QWORD*)(v828 + 19136) + 40LL * (v831 + 1);
                  *(_QWORD*)(v833 + 16) = 0;
                  *(_DWORD*)(v833 + 12) = 0;
                  v834 =
                    vaddq_f32(vaddq_f32(v777, vmulq_n_f32(v791, v825)), v829);
                  *(_QWORD*)v833 = LANES128(v834).n128_u64[0];
                  *(_DWORD*)(v833 + 8) = LANES128(v834).n128_u32[2];
                  *(long double*)(v833 + 24) = v1546;
                  v835 = v830 + 1440LL * v832 +
                    4LL * *(int*)(v830 + 1440LL * v832 + 256);
                  ++*(_DWORD*)(v835 + 260);
                }
                v836 = **a1;
                v837 = *(_QWORD*)(v836 + 18736);
                v838 = *(_DWORD*)(v836 + 19200);
                v839 = *(_DWORD*)(v836 + 17280);
                *(_DWORD*)(v836 + 19200) = v838 + 1;
                if (v838 <= 262142) {
                  v840 = *(_QWORD*)(v836 + 19136) + 40LL * (v838 + 1);
                  *(_QWORD*)(v840 + 16) = 0;
                  *(_DWORD*)(v840 + 12) = 0;
                  v841 =
                    vaddq_f32(vaddq_f32(v773, vmulq_n_f32(v806, v825)), v829);
                  *(_QWORD*)v840 = LANES128(v841).n128_u64[0];
                  *(_DWORD*)(v840 + 8) = LANES128(v841).n128_u32[2];
                  *(long double*)(v840 + 24) = v1546;
                  v842 = v837 + 1440LL * v839 +
                    4LL * *(int*)(v837 + 1440LL * v839 + 256);
                  ++*(_DWORD*)(v842 + 260);
                }
                v843 = -v825;
                v844 = **a1;
                v845 = *(_QWORD*)(v844 + 18736);
                v846 = *(_DWORD*)(v844 + 19200);
                v847 = *(_DWORD*)(v844 + 17280);
                *(_DWORD*)(v844 + 19200) = v846 + 1;
                if (v846 <= 262142) {
                  v848 = *(_QWORD*)(v844 + 19136) + 40LL * (v846 + 1);
                  *(_QWORD*)(v848 + 16) = 0;
                  *(_DWORD*)(v848 + 12) = 0;
                  v849 =
                    vaddq_f32(vaddq_f32(v773, vmulq_n_f32(v806, v843)), v829);
                  *(_QWORD*)v848 = LANES128(v849).n128_u64[0];
                  *(_DWORD*)(v848 + 8) = LANES128(v849).n128_u32[2];
                  *(long double*)(v848 + 24) = v1546;
                  v850 = v845 + 1440LL * v847 +
                    4LL * *(int*)(v845 + 1440LL * v847 + 256);
                  ++*(_DWORD*)(v850 + 260);
                }
                v851 = **a1;
                v852 = *(_QWORD*)(v851 + 18736);
                v853 = *(_DWORD*)(v851 + 19200);
                v854 = *(_DWORD*)(v851 + 17280);
                *(_DWORD*)(v851 + 19200) = v853 + 1;
                if (v853 <= 262142) {
                  v855 = *(_QWORD*)(v851 + 19136) + 40LL * (v853 + 1);
                  *(_QWORD*)(v855 + 16) = 0;
                  *(_DWORD*)(v855 + 12) = 0;
                  v856 =
                    vaddq_f32(vaddq_f32(v777, vmulq_n_f32(v791, v843)), v829);
                  *(_QWORD*)v855 = LANES128(v856).n128_u64[0];
                  *(_DWORD*)(v855 + 8) = LANES128(v856).n128_u32[2];
                  *(long double*)(v855 + 24) = v1546;
                  v857 = v852 + 1440LL * v854 +
                    4LL * *(int*)(v852 + 1440LL * v854 + 256);
                  ++*(_DWORD*)(v857 + 260);
                }
                --v768;
                v765 = v774;
              } while (v768 > 1);
            }
            if (!v60) {
              goto LABEL_38;
            }
            v858 = *(__int64**)**a1;
            v859 = *v858;
            *((_DWORD*)v858 + 4324) = 1;
            GameRoutine_1994460_alt1(v859);
            v860 = GameData_2130e00;
            if (v319 >= 2) {
              if (v1489 != 0) {
                v861 = 2;
              }
              else {
                v861 = 0;
              }
              if (v1489 != 0) {
                v862 = 3;
              }
              else {
                v862 = 1;
              }
              if (v1489 != 0) {
                v863 = 7;
              }
              else {
                v863 = 4;
              }
              v864 = (int32x4_t*)(&v1548 + v319);
              v865 = v864;
              LANES128(v866).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
              LANES128(v867).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
              *(int8x8_t*)&LANES128(v866).n128_i8[8] =
                vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              *(int8x8_t*)&LANES128(v867).n128_i8[8] =
                vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v1458 = v867;
              v1464 = v866;
              do {
                v868 = v865[-1];
                --v865;
                v869 = v868;
                v870 = v864[-2];
                LANES128(v869).n128_u32[3] = 0;
                LANES128(v870).n128_u32[3] = 0;
                v871 = v869;
                v1495 = v869;
                v872 = *v864;
                v873 = *v860;
                v874 = *(float*)(*v860 + 384);
                v875 = *(float*)(*v860 + 388);
                v876 = *v860 + 4 * v863;
                v877 = *(_DWORD*)(*v860 + 576);
                v878 = vsubq_f32(v871, v870);
                v1547 = v872;
                v879 = *((float*)a1 + 16);
                v880 = *(_DWORD*)(v876 + 544);
                v881 = v875 - v874;
                if (v880 > v877) {
                  v880 += 16;
                }
                v1515 = v874 + (float)(v881 * v879);
                v882 = *(float*)(v873 + 668);
                v883 = v873 + 400;
                LODWORD(v884) = 0;
                *((float*)&v884 + 1) = v882 * (float)(v880 + 1);
                LANES128(v885).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v878, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                v1506 = COERCE_AS(float32x4_t, v884);
                *(int8x8_t*)&LANES128(v885).n128_i8[8] =
                  vqtbl1_s8(v878, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v886).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v878, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                *(int8x8_t*)&LANES128(v886).n128_i8[8] =
                  vqtbl1_s8(v878, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v887 = vmlsq_f32(vmulq_f32(v885, v866), v867, v886);
                v888 = vmulq_f32(v887, v887);
                LANES128(v888).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v888, v888, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v888).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v888).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v888).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v888).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v888).n128_u64[1] = LANES128(v888).n128_u64[0];
                v889 = vrsqrteq_f32(v888);
                v890 =
                  vmulq_f32(v889, vrsqrtsq_f32(v889, vmulq_f32(v888, v889)));
                v891 = vbicq_s8(
                  vmulq_f32(v887,
                    vmulq_f32(v890, vrsqrtsq_f32(v890, vmulq_f32(v888, v890)))),
                  vceqzq_f32(v888));
                v892 = *(float32x4_t*)(v883 + 16 * v861);
                v1537 = v891;
                v893 = vsubq_f32(*(float32x4_t*)(v883 + 16 * v862), v892);
                v894 = LANES128(v892).n128_f32[1] +
                  vmuls_lane_f32(v879,
                    COERCE_AS(float32x2_t, LANES128(v893).n128_u64[0]), 1);
                v895 =
                  LANES128(v892).n128_f32[2] + vmuls_lane_f32(v879, v893, 2);
                *(float*)&v1485 =
                  LANES128(v892).n128_f32[3] + vmuls_lane_f32(v879, v893, 3);
                v1476 = COERCE_UNSIGNED_INT128(powf(LANES128(v892).n128_f32[0] +
                    (float)(v879 * LANES128(v893).n128_f32[0]),
                  v12));
                v1470 = COERCE_UNSIGNED_INT128(powf(v894, v12));
                v896 = powf(v895, v12);
                *(_QWORD*)&v901 = __PAIR64__(v1470, v1476);
                v897 = **a1;
                v898 = *(_QWORD*)(v897 + 18736);
                v899 = *(_DWORD*)(v897 + 19200);
                v900 = *(_DWORD*)(v897 + 17280);
                *((_QWORD*)&v901 + 1) = __PAIR64__(v1485, LODWORD(v896));
                *(_DWORD*)(v897 + 19200) = v899 + 1;
                if (v899 <= 262142) {
                  v902 = *(_QWORD*)(v897 + 19136) + 40LL * (v899 + 1);
                  *(_QWORD*)(v902 + 16) = 0;
                  *(_DWORD*)(v902 + 12) = 0;
                  *(_OWORD*)(v902 + 24) = v901;
                  v903 = vaddq_f32(
                    v1506, vaddq_f32(v1495, vmulq_n_f32(v1537, v1515)));
                  *(_QWORD*)v902 = LANES128(v903).n128_u64[0];
                  *(_DWORD*)(v902 + 8) = LANES128(v903).n128_u32[2];
                  v904 = v898 + 1440LL * v900 +
                    4LL * *(int*)(v898 + 1440LL * v900 + 256);
                  ++*(_DWORD*)(v904 + 260);
                }
                v905 = v1547;
                v867 = v1458;
                v866 = v1464;
                LANES128(v905).n128_u32[3] = 0;
                v906 = **a1;
                v907 = *(_QWORD*)(v906 + 18736);
                v908 = *(_DWORD*)(v906 + 19200);
                v909 = *(_DWORD*)(v906 + 17280);
                v910 = vsubq_f32(v905, v1495);
                LANES128(v911).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v910, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                               .n64_u64[0];
                *(_DWORD*)(v906 + 19200) = v908 + 1;
                *(int8x8_t*)&LANES128(v911).n128_i8[8] =
                  vqtbl1_s8(v910, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v912).n128_u64[0] = LANES64_OF(
                  vqtbl1_s8(v910, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                               .n64_u64[0];
                *(int8x8_t*)&LANES128(v912).n128_i8[8] =
                  vqtbl1_s8(v910, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                v913 = vmlsq_f32(vmulq_f32(v1464, v911), v1458, v912);
                v914 = vmulq_f32(v913, v913);
                LANES128(v914).n128_u64[0] = LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v914, v914, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v914).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v914).n128_u64[0] = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v914).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v914).n128_u64[0])))
                                               .n64_u64[0];
                LANES128(v914).n128_u64[1] = LANES128(v914).n128_u64[0];
                v915 = vrsqrteq_f32(v914);
                v916 =
                  vmulq_f32(v915, vrsqrtsq_f32(v915, vmulq_f32(v914, v915)));
                v917 = vbicq_s8(
                  vmulq_f32(v913,
                    vmulq_f32(v916, vrsqrtsq_f32(v916, vmulq_f32(v914, v916)))),
                  vceqzq_f32(v914));
                if (v908 <= 262142) {
                  v918 = *(_QWORD*)(v906 + 19136) + 40LL * (v908 + 1);
                  *(_QWORD*)(v918 + 16) = 0;
                  *(_DWORD*)(v918 + 12) = 0;
                  *(_OWORD*)(v918 + 24) = v901;
                  v919 =
                    vaddq_f32(v1506, vaddq_f32(v905, vmulq_n_f32(v917, v1515)));
                  *(_QWORD*)v918 = LANES128(v919).n128_u64[0];
                  *(_DWORD*)(v918 + 8) = LANES128(v919).n128_u32[2];
                  v920 = v907 + 1440LL * v909 +
                    4LL * *(int*)(v907 + 1440LL * v909 + 256);
                  ++*(_DWORD*)(v920 + 260);
                }
                v921 = -v1515;
                v922 = **a1;
                v923 = *(_QWORD*)(v922 + 18736);
                v924 = *(_DWORD*)(v922 + 19200);
                v925 = *(_DWORD*)(v922 + 17280);
                *(_DWORD*)(v922 + 19200) = v924 + 1;
                if (v924 <= 262142) {
                  v926 = *(_QWORD*)(v922 + 19136) + 40LL * (v924 + 1);
                  *(_QWORD*)(v926 + 16) = 0;
                  *(_DWORD*)(v926 + 12) = 0;
                  *(_OWORD*)(v926 + 24) = v901;
                  v927 =
                    vaddq_f32(v1506, vaddq_f32(v905, vmulq_n_f32(v917, v921)));
                  *(_QWORD*)v926 = LANES128(v927).n128_u64[0];
                  *(_DWORD*)(v926 + 8) = LANES128(v927).n128_u32[2];
                  v928 = v923 + 1440LL * v925 +
                    4LL * *(int*)(v923 + 1440LL * v925 + 256);
                  ++*(_DWORD*)(v928 + 260);
                }
                v929 = **a1;
                v930 = *(_QWORD*)(v929 + 18736);
                v931 = *(_DWORD*)(v929 + 19200);
                v932 = *(_DWORD*)(v929 + 17280);
                *(_DWORD*)(v929 + 19200) = v931 + 1;
                if (v931 <= 262142) {
                  v933 = *(_QWORD*)(v929 + 19136) + 40LL * (v931 + 1);
                  *(_QWORD*)(v933 + 16) = 0;
                  *(_DWORD*)(v933 + 12) = 0;
                  *(_OWORD*)(v933 + 24) = v901;
                  v934 = vaddq_f32(
                    v1506, vaddq_f32(v1495, vmulq_n_f32(v1537, v921)));
                  *(_QWORD*)v933 = LANES128(v934).n128_u64[0];
                  *(_DWORD*)(v933 + 8) = LANES128(v934).n128_u32[2];
                  v935 = v930 + 1440LL * v932 +
                    4LL * *(int*)(v930 + 1440LL * v932 + 256);
                  ++*(_DWORD*)(v935 + 260);
                }
                --v319;
                v864 = v865;
              } while (v319 > 1);
            }
            v936 = *(__int64**)**a1;
            v937 = *v936;
            *((_DWORD*)v936 + 4324) = 0;
            GameRoutine_1994460_alt1(v937);
            v19 = 0.25;
            v20 = 3.0;
            v45 = (unsigned __int64)&v1548;
            v21 = -0x1.0000000000000p-1;
          }
          v46 = v1468;
          goto LABEL_38;
        }
      LABEL_313:
        v441 = (float32x4_t***)LANES128(v59[3]).n128_u64[0];
        v442 = (float32x4_t***)LANES128(v59[3]).n128_u64[1];
        if (v441 != v442) {
          while (1) {
            v444 = *v441++;
            v443 = v444;
            if (v444[1] == v440) {
              break;
            }
            v46 = v1468;
            if (v441 == v442) {
              goto LABEL_38;
            }
          }
          memset(v1577, 0, 352, v40, v41, v42);
          v445 = LANES128(v440[18]).n128_f32[0];
          if (v445 >= LANES128(v59[18]).n128_f32[0]) {
            v445 = LANES128(v59[18]).n128_f32[0];
          }
          v1463 = v445;
          if ((LANES128(v59[7]).n128_u8[3] & 1) == 0 &&
            LANES128(v440[7]).n128_u8[3] != 1) {
            v938 = *((float32x4_t*)v443 + 2);
            v939 = *((float32x4_t*)v443 + 3);
            v940 = 2;
            v941 = *((float32x4_t*)v443 + 6);
            v942 =
              vaddq_f32(vaddq_f32(vaddq_f32((*v443)[2],
                                    vmulq_f32(v938, COERCE_AS(float32x4_t, 0))),
                          vmulq_f32(v939, COERCE_AS(float32x4_t, 0))),
                vmulq_f32(v941, COERCE_AS(float32x4_t, 0)));
            *(_QWORD*)&v943 = LANES128(v942).n128_u64[0];
            *((_QWORD*)&v943 + 1) = LANES128(v942).n128_u32[2];
            *(_OWORD*)v1577 = v943;
            v944 = 2;
            v945 = vaddq_f32(vmulq_f32(v941, vdupq_n_s32(0x381B5839u)),
              vaddq_f32(vmulq_f32(v939, vdupq_n_s32(0x3B532BEBu)),
                vaddq_f32(vmulq_f32(v938, vdupq_n_s32(0x3DBF5FCCu)),
                  vmulq_f32((*v443)[2], vdupq_n_s32(0x3F673E6Bu)))));
            LANES128(v942).n128_u64[0] = LANES128(v945).n128_u64[0];
            LANES128(v942).n128_u64[1] = LANES128(v945).n128_u32[2];
            *(float32x4_t*)&v1577[2] = v942;
            while (1) {
              if (-1431655765 * v944 <= 0x55555555) {
                v958 = (float)v944 / 0x1.e000000000000p+5;
                if (v958 >= 0x1.0000000000000p-1) {
                  v947 = *((float32x4_t*)v443 + 5);
                  v946 = *((float32x4_t*)v443 + 6);
                  v948 = *((float32x4_t*)v443 + 4);
                  v949 = (float)(v958 + v21) + (float)(v958 + v21);
                  v950 = 0x1.0000000000000p+0 - v949;
                  v951 = v443[1] + 2;
                  v952 = v950 * v950;
                }
                else {
                  v949 = v958 + v958;
                  v948 = *((float32x4_t*)v443 + 2);
                  v947 = *((float32x4_t*)v443 + 3);
                  v946 = (*v443)[2];
                  v950 = 0x1.0000000000000p+0 - (float)(v958 + v958);
                  v952 = v950 * v950;
                  v951 = (float32x4_t*)(v443 + 12);
                }
                v953 =
                  vaddq_f32(vaddq_f32(vmulq_n_f32(v946, v950 * v952),
                              vmulq_n_f32(v948,
                                v949 * (float)(v950 * (float)(v950 * v20)))),
                    vmulq_n_f32(
                      v947, v949 * (float)(v949 * (float)(v950 * v20))));
                v954 = *v951;
                v955 = 2LL * v940++;
                v956 = vaddq_f32(
                  v953, vmulq_n_f32(v954, v949 * (float)(v949 * v949)));
                v1577[v955] = LANES128(v956).n128_u64[0];
                v957 = *(_OWORD*)&v1577[v955];
                *((_QWORD*)&v957 + 1) = LANES128(v956).n128_u32[2];
                *(_OWORD*)&v1577[v955] = v957;
                if (v940 == 22) {
                  break;
                }
              }
              if (++v944 == 61) {
                v959 = v940 - 1;
                v960 = *GameData_2130e00;
                if (v940 < 3) {
                  v593 = false;
                LABEL_485:
                  v973 = (__typeof__(v973)){0};
                LABEL_488:
                  v1446 = v973;
                  if (LANES128(v440[7]).n128_u64[1] != 0) {
                    goto LABEL_489;
                  }
                LABEL_494:
                  v974 = *(float*)(*GameData_2130e00 + 356);
                  goto LABEL_495;
                }
                goto LABEL_477;
              }
            }
            v959 = 21;
            v960 = *GameData_2130e00;
          LABEL_477:
            v961 = v440[2];
            v962 = v959;
            v963 = (float)(*(float*)(v960 + 172) * 0x1.0000000000000p-1) *
              (float)(*(float*)(v960 + 172) * 0x1.0000000000000p-1);
            while (1) {
              v964 = vsubq_f32(v961, *(float32x4_t*)&v1577[2 * v962]);
              v965 = vmulq_f32(v964, v964);
              LANES128(v965).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v965, v965, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v965).n128_u64[0])))
                                             .n64_u64[0];
              if (LANES64_OF(
                    vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v965).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v965).n128_u64[0])))
                    .n64_f32[0] >= (float)(v963 * 0x1.6666660000000p-1)) {
                break;
              }
              v27 = v962-- <= 2;
              if (v27) {
                if ((int)v959 >= 2) {
                LABEL_482:
                  v966 = v963 + v963;
                  v967 = (float32x4_t*)&v1577[2 * v959];
                  v968 = v959 + 1LL;
                  while (1) {
                    v969 = *v967--;
                    v970 = v969;
                    v971 = vsubq_f32(v961, v969);
                    v972 = vmulq_f32(v971, v971);
                    LANES128(v972).n128_u64[0] = LANES64_OF(
                      vadd_f32(
                        COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v972, v972, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v972).n128_u64[0])))
                                                   .n64_u64[0];
                    LANES128(v972).n128_f32[0] = LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v972).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v972).n128_u64[0])))
                                                   .n64_f32[0];
                    v593 = LANES128(v972).n128_f32[0] >= v966;
                    if (LANES128(v972).n128_f32[0] >= v966) {
                      break;
                    }
                    if (--v968 < 3) {
                      goto LABEL_485;
                    }
                  }
                  v1446 = v970;
                  if (LANES128(v440[7]).n128_u64[1] == 0) {
                    goto LABEL_494;
                  }
                LABEL_489:
                  v974 = *(float*)(v960 + 340);
                  if ((unsigned __int8)Impl_13261c0(v440) == 13 ||
                    (unsigned __int8)Impl_13261c0(v440) == 12 ||
                    (unsigned __int8)Impl_13261c0(v440) == 11) {
                    goto LABEL_494;
                  }
                LABEL_495:
                  if (LANES128(v440[7]).n128_u8[3] == 1) {
                    v975 = (float*)(*GameData_2130e00 + 660);
                  }
                  else {
                    v976 = *(_QWORD*)(*GameData_212c790 + 8);
                    v977 = *(float32x4_t****)(v976 + 8);
                    v978 = *(float32x4_t****)(v976 + 16);
                    while (1) {
                      if (v977 == v978) {
                        v981 = *GameData_2130e00;
                        goto LABEL_506;
                      }
                      v979 = *v977;
                      if (**v977 == v440) {
                        v980 = v979[12];
                        if (v980 != nullptr &&
                          (unsigned int)LANES128(v980[2]).n128_u8[0] - 3 < 2) {
                          break;
                        }
                      }
                      ++v977;
                    }
                    v981 = *GameData_2130e00;
                    if (((_WORD)v979[68] & 8) != 0) {
                      v975 = (float*)(v981 + 664);
                      goto LABEL_507;
                    }
                  LABEL_506:
                    v975 = (float*)(v981 +
                      4LL * (unsigned __int8)Impl_13261c0(v440) + 80);
                  }
                LABEL_507:
                  v982 = *v975 * 0x1.ddddde0000000p-5;
                  v983 = v974 * v982;
                  if (v959 >= 2) {
                    v984 = (int)v959;
                    v1448 = v974 * v982;
                    LANES64(v985).n64_u64[0] = 0x30201000B0A0908LL;
                    LANES64(v986).n64_u64[0] = 0xF0E0D0C07060504LL;
                    LANES64(v987).n64_u64[0] = 0xB0A090807060504LL;
                    LANES64(v988).n64_u64[0] = 0xF0E0D0C03020100LL;
                    LANES128(v989).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                                   .n64_u64[0];
                    *(int8x8_t*)&LANES128(v989).n128_i8[8] =
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    LANES128(v990).n128_u64[0] = LANES64_OF(
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                                   .n64_u64[0];
                    *(int8x8_t*)&LANES128(v990).n128_i8[8] =
                      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                        COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    v1516 = v989;
                    v1507 = v990;
                    do {
                      v991 = GameData_2130e00;
                      v992 = *((float*)a1 + 16);
                      v993 = *(float*)(*GameData_2130e00 + 384);
                      v994 = *(float*)(*GameData_2130e00 + 388) - v993;
                      v1547 = *(int32x4_t*)(*GameData_2130e00 + 240);
                      v1486 = v993 + (float)(v994 * v992);
                      *(float*)&v1496 = vmuls_lane_f32(v1463, v1547, 3) + 0.0;
                      v1538 = COERCE_UNSIGNED_INT128(
                        powf(LANES128(v1547).n128_f32[0], v12));
                      v1477 = COERCE_UNSIGNED_INT128(
                        powf(LANES128(v1547).n128_f32[1], v12));
                      v995 = powf(LANES128(v1547).n128_f32[2], v12);
                      *(_QWORD*)&v1001 = __PAIR64__(v1477, v1538);
                      v996 = v984 - 1;
                      LANES128(v997).n128_u32[0] = 0;
                      LANES128(v997).n128_u64[1] = 0;
                      v998 = (float32x4_t*)&v1577[2 * v984];
                      v1000 = *(float32x4_t*)&v1577[2 * v984 - 2];
                      v999 = *v998;
                      LANES128(v1000).n128_u32[3] = 0;
                      *((_QWORD*)&v1001 + 1) = __PAIR64__(v1496, LODWORD(v995));
                      v1003 = v998[-2];
                      v1002 = *(_DWORD*)(*v991 + 568);
                      LANES128(v1003).n128_u32[3] = 0;
                      if (v1002 > *(_DWORD*)(*v991 + 576)) {
                        v1002 += 16;
                      }
                      v1004 = vsubq_f32(v1000, v1003);
                      v1005 = **a1;
                      LANES128(v997).n128_f32[1] =
                        *(float*)(*v991 + 668) * (float)(v1002 + 1);
                      LANES128(v1006).n128_u64[0] =
                        LANES64_OF(vqtbl1_s8(v1004, v987)).n64_u64[0];
                      v1007 = *(_QWORD*)(v1005 + 18736);
                      v1008 = *(_DWORD*)(v1005 + 19200);
                      v1009 = *(_DWORD*)(v1005 + 17280);
                      *(int8x8_t*)&LANES128(v1006).n128_i8[8] =
                        vqtbl1_s8(v1004, v988);
                      *(_DWORD*)(v1005 + 19200) = v1008 + 1;
                      LANES128(v1010).n128_u64[0] =
                        LANES64_OF(vqtbl1_s8(v1004, v985)).n64_u64[0];
                      *(int8x8_t*)&LANES128(v1010).n128_i8[8] =
                        vqtbl1_s8(v1004, v986);
                      v1011 = vmlsq_f32(vmulq_f32(v1516, v1006), v1507, v1010);
                      v1012 = vmulq_f32(v1011, v1011);
                      LANES128(v1012).n128_u64[0] = LANES64_OF(
                        vadd_f32(COERCE_AS(float32x2_t,
                                   LANES128_OF(vextq_s8(v1012, v1012, 8u))
                                     .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v1012).n128_u64[0])))
                                                      .n64_u64[0];
                      LANES128(v1012).n128_u64[0] = LANES64_OF(
                        vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v1012).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v1012).n128_u64[0])))
                                                      .n64_u64[0];
                      LANES128(v1012).n128_u64[1] = LANES128(v1012).n128_u64[0];
                      v1013 = vrsqrteq_f32(v1012);
                      v1014 = vmulq_f32(
                        v1013, vrsqrtsq_f32(v1013, vmulq_f32(v1012, v1013)));
                      v1015 = vbicq_s8(
                        vmulq_f32(v1011,
                          vmulq_f32(v1014,
                            vrsqrtsq_f32(v1014, vmulq_f32(v1012, v1014)))),
                        vceqzq_f32(v1012));
                      v1016 = vaddq_f32(v1000, vmulq_n_f32(v1015, v1486));
                      v1017 = vaddq_f32(v997, v1016);
                      v1018 = LANES128(v1017).n128_u32[2];
                      if (v1008 <= 262142) {
                        v1019 = *(_QWORD*)(v1005 + 19136) + 40LL * (v1008 + 1);
                        *(_QWORD*)v1019 = LANES128(v1017).n128_u64[0];
                        *(_DWORD*)(v1019 + 8) = LANES128(v1017).n128_u32[2];
                        *(_QWORD*)(v1019 + 16) = 0;
                        *(_DWORD*)(v1019 + 12) = 0;
                        *(_OWORD*)(v1019 + 24) = v1001;
                        v1020 = v1007 + 1440LL * v1009 +
                          4LL * *(int*)(v1007 + 1440LL * v1009 + 256);
                        ++*(_DWORD*)(v1020 + 260);
                      }
                      LANES128(v999).n128_u32[3] = 0;
                      v1021 = **a1;
                      v1022 = vsubq_f32(v999, v1000);
                      v1023 = *(_QWORD*)(v1021 + 18736);
                      LANES128(v1024).n128_u64[0] =
                        LANES64_OF(vqtbl1_s8(v1022, v987)).n64_u64[0];
                      v1025 = *(_DWORD*)(v1021 + 19200);
                      v1026 = *(_DWORD*)(v1021 + 17280);
                      *(int8x8_t*)&LANES128(v1024).n128_i8[8] =
                        vqtbl1_s8(v1022, v988);
                      *(_DWORD*)(v1021 + 19200) = v1025 + 1;
                      LANES128(v1027).n128_u64[0] =
                        LANES64_OF(vqtbl1_s8(v1022, v985)).n64_u64[0];
                      *(int8x8_t*)&LANES128(v1027).n128_i8[8] =
                        vqtbl1_s8(v1022, v986);
                      v1028 = vmlsq_f32(vmulq_f32(v1516, v1024), v1507, v1027);
                      v1029 = vmulq_f32(v1028, v1028);
                      LANES128(v1029).n128_u64[0] = LANES64_OF(
                        vadd_f32(COERCE_AS(float32x2_t,
                                   LANES128_OF(vextq_s8(v1029, v1029, 8u))
                                     .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v1029).n128_u64[0])))
                                                      .n64_u64[0];
                      LANES128(v1029).n128_u64[0] = LANES64_OF(
                        vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v1029).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v1029).n128_u64[0])))
                                                      .n64_u64[0];
                      LANES128(v1029).n128_u64[1] = LANES128(v1029).n128_u64[0];
                      v1030 = vrsqrteq_f32(v1029);
                      v1031 = vmulq_f32(
                        v1030, vrsqrtsq_f32(v1030, vmulq_f32(v1029, v1030)));
                      v1032 = vbicq_s8(
                        vmulq_f32(v1028,
                          vmulq_f32(v1031,
                            vrsqrtsq_f32(v1031, vmulq_f32(v1029, v1031)))),
                        vceqzq_f32(v1029));
                      v1033 = vaddq_f32(v999, vmulq_n_f32(v1032, v1486));
                      v1034 = vaddq_f32(v997, v1033);
                      if (v1025 <= 262142) {
                        v1035 = *(_QWORD*)(v1021 + 19136) + 40LL * (v1025 + 1);
                        *(_QWORD*)v1035 = LANES128(v1034).n128_u64[0];
                        *(_QWORD*)(v1035 + 16) = 0;
                        *(_DWORD*)(v1035 + 12) = 0;
                        *(_OWORD*)(v1035 + 24) = v1001;
                        *(_DWORD*)(v1035 + 8) = LANES128(v1034).n128_u32[2];
                        v1036 = v1023 + 1440LL * v1026 +
                          4LL * *(int*)(v1023 + 1440LL * v1026 + 256);
                        ++*(_DWORD*)(v1036 + 260);
                      }
                      v1037 = **a1;
                      v1038 = vaddq_f32(v999, vmulq_n_f32(v1032, -v1486));
                      v1039 = *(_QWORD*)(v1037 + 18736);
                      v1040 = *(_DWORD*)(v1037 + 19200);
                      v1041 = vaddq_f32(v997, v1038);
                      v1042 = *(_DWORD*)(v1037 + 17280);
                      *(_DWORD*)(v1037 + 19200) = v1040 + 1;
                      if (v1040 <= 262142) {
                        v1043 = *(_QWORD*)(v1037 + 19136) + 40LL * (v1040 + 1);
                        *(_QWORD*)v1043 = LANES128(v1041).n128_u64[0];
                        *(_QWORD*)(v1043 + 16) = 0;
                        *(_DWORD*)(v1043 + 12) = 0;
                        *(_OWORD*)(v1043 + 24) = v1001;
                        *(_DWORD*)(v1043 + 8) = LANES128(v1041).n128_u32[2];
                        v1044 = v1039 + 1440LL * v1042 +
                          4LL * *(int*)(v1039 + 1440LL * v1042 + 256);
                        ++*(_DWORD*)(v1044 + 260);
                      }
                      v1045 = vaddq_f32(v1000, vmulq_n_f32(v1015, -v1486));
                      v1046 = **a1;
                      v1047 = vaddq_f32(v997, v1045);
                      v1048 = *(_QWORD*)(v1046 + 18736);
                      v1049 = *(_DWORD*)(v1046 + 19200);
                      v1050 = *(_DWORD*)(v1046 + 17280);
                      *(_DWORD*)(v1046 + 19200) = v1049 + 1;
                      if (v1049 <= 262142) {
                        v1051 = *(_QWORD*)(v1046 + 19136) + 40LL * (v1049 + 1);
                        *(_QWORD*)v1051 = LANES128(v1047).n128_u64[0];
                        *(_QWORD*)(v1051 + 16) = 0;
                        *(_DWORD*)(v1051 + 12) = 0;
                        *(_OWORD*)(v1051 + 24) = v1001;
                        *(_DWORD*)(v1051 + 8) = LANES128(v1047).n128_u32[2];
                        v1052 = v1048 + 1440LL * v1050 +
                          4LL * *(int*)(v1048 + 1440LL * v1050 + 256);
                        ++*(_DWORD*)(v1052 + 260);
                      }
                      v1053 = v440[2];
                      v1054 = *(_OWORD*)&v1577[2 * v984];
                      v1055 = LANES128(v1017).n128_u32[1];
                      v1056 = LANES128(v1034).n128_u32[1];
                      v1057 = LANES128(v1041).n128_u32[1];
                      v1058 = LANES128(v1047).n128_u32[1];
                      v1471 = v1032;
                      v1478 = v1015;
                      v1487 = v999;
                      v1497 = v1000;
                      if (*(float*)&v1054 <=
                          (float)(v983 + LANES128(v1053).n128_f32[0]) &&
                        *(float*)&v1054 >=
                          (float)(LANES128(v1053).n128_f32[0] - v983)) {
                        v1059 = v983;
                        v1060 = LANES64(v988).n64_u64[0];
                        v1061 = LANES64(v987).n64_u64[0];
                        v1062 = LANES64(v986).n64_u64[0];
                        v1063 = LANES64(v985).n64_u64[0];
                        LODWORD(v1064) = v1577[2 * v984 + 1];
                        if (*((float*)&v1054 + 2) >
                          (float)(v1059 + LANES128(v1053).n128_f32[2])) {
                          LANES64(v985).n64_u64[0] = v1063;
                          LANES64(v986).n64_u64[0] = v1062;
                          LANES64(v987).n64_u64[0] = v1061;
                          LANES64(v988).n64_u64[0] = v1060;
                          v983 = v1059;
                        }
                        else if (*((float*)&v1054 + 2) <
                          (float)(LANES128(v1053).n128_f32[2] - v1059)) {
                          LANES64(v985).n64_u64[0] = v1063;
                          LANES64(v986).n64_u64[0] = v1062;
                          LANES64(v987).n64_u64[0] = v1061;
                          LANES64(v988).n64_u64[0] = v1060;
                          v983 = v1448;
                        }
                        else {
                          if (LANES128(v59[7]).n128_u8[3] == 1) {
                            v1065 = (float*)(*GameData_2130e00 + 660);
                          }
                          else {
                            v1066 = *(_QWORD*)(*GameData_212c790 + 8);
                            v1067 = *(float32x4_t****)(v1066 + 8);
                            v1068 = *(float32x4_t****)(v1066 + 16);
                            while (1) {
                              if (v1067 == v1068) {
                                v1071 = *GameData_2130e00;
                                goto LABEL_535;
                              }
                              v1069 = *v1067;
                              if (**v1067 == v59) {
                                v1070 = v1069[12];
                                if (v1070 != nullptr &&
                                  (unsigned int)LANES128(v1070[2]).n128_u8[0] -
                                      3 <
                                    2) {
                                  break;
                                }
                              }
                              ++v1067;
                            }
                            v1071 = *GameData_2130e00;
                            if (((_WORD)v1069[68] & 8) != 0) {
                              v1065 = (float*)(v1071 + 664);
                              goto LABEL_536;
                            }
                          LABEL_535:
                            v1539 = v1001;
                            v1547 = v1017;
                            v1436 = v1054;
                            v1437 = v1045;
                            v1459 = v1034;
                            v1438 = v1038;
                            v1439 = LANES128(v1017).n128_u32[1];
                            v1440 = v1033;
                            v1441 = LANES128(v1034).n128_u32[1];
                            v1442 = LANES128(v1041).n128_u32[1];
                            v1443 = v1016;
                            v1444 = LANES128(v1047).n128_u32[1];
                            v1445 = v997;
                            v1449 = v1047;
                            v1451 = v1041;
                            v1072 = Impl_13261c0(v59);
                            LODWORD(v1054) = v1436;
                            v1045 = v1437;
                            v1038 = v1438;
                            v1055 = v1439;
                            v1065 = (float*)(v1071 + 4LL * v1072 + 80);
                            v1033 = v1440;
                            v1056 = v1441;
                            v1057 = v1442;
                            v1016 = v1443;
                            v1058 = v1444;
                            v997 = v1445;
                            v1034 = v1459;
                            LANES128(v1017).n128_u32[0] =
                              LANES128(v1547).n128_u32[0];
                            v1001 = v1539;
                            v1047 = v1449;
                            v1041 = v1451;
                          }
                        LABEL_536:
                          v1073 = *v1065 * 0x1.ddddde0000000p-5;
                          v1074 = v59[2];
                          v1075 = v1073 + LANES128(v1074).n128_f32[0];
                          v1076 = LANES128(v1074).n128_f32[0] - v1073;
                          v1077 = COERCE_FLOAT(LANES128(v59[2]).n128_u64[1]);
                          v1078 = v1073 + v1077;
                          v1079 =
                            *(float*)&v1054 > v1075 || *(float*)&v1054 < v1076;
                          v1080 = v1077 - v1073;
                          v1082 = v1079 || v1064 > v1078 || v1064 < v1080;
                          LANES64(v985).n64_u64[0] = v1063;
                          LANES64(v986).n64_u64[0] = v1062;
                          LANES64(v987).n64_u64[0] = v1061;
                          LANES64(v988).n64_u64[0] = v1060;
                          v983 = v1448;
                          if (v1082) {
                            v1083 = *(_DWORD*)(*GameData_2130e00 + 580);
                            if (v1083 > *(_DWORD*)(*GameData_2130e00 + 576)) {
                              v1083 += 16;
                            }
                            LANES128(v997).n128_f32[1] =
                              *(float*)(*GameData_2130e00 + 668) *
                              (float)(v1083 + 1);
                            v1017 = vaddq_f32(v1016, v997);
                            v1034 = vaddq_f32(v1033, v997);
                            v1041 = vaddq_f32(v1038, v997);
                            v1047 = vaddq_f32(v1045, v997);
                            v1055 = LANES128(v1017).n128_u32[1];
                            v1056 = LANES128(v1034).n128_u32[1];
                            v1057 = LANES128(v1041).n128_u32[1];
                            v1058 = LANES128(v1047).n128_u32[1];
                            v1018 = LANES128(v1017).n128_u32[2];
                          }
                        }
                      }
                      v1084 = **a1;
                      v1085 = *(_QWORD*)(v1084 + 18736);
                      v1086 = *(_DWORD*)(v1084 + 19200);
                      v1087 = *(_DWORD*)(v1084 + 17280);
                      *(_DWORD*)(v1084 + 19200) = v1086 + 1;
                      if (v1086 <= 262142) {
                        LANES128(v1017).n128_u32[1] = v1055;
                        v1088 = *(_QWORD*)(v1084 + 19136) + 40LL * (v1086 + 1);
                        *(_QWORD*)v1088 = LANES128(v1017).n128_u64[0];
                        *(_DWORD*)(v1088 + 8) = v1018;
                        *(_QWORD*)(v1088 + 16) = 0;
                        *(_DWORD*)(v1088 + 12) = 0;
                        *(_OWORD*)(v1088 + 24) = v1001;
                        v1089 = v1085 + 1440LL * v1087 +
                          4LL * *(int*)(v1085 + 1440LL * v1087 + 256);
                        ++*(_DWORD*)(v1089 + 260);
                      }
                      v1090 = **a1;
                      v1091 = *(_QWORD*)(v1090 + 18736);
                      v1092 = *(_DWORD*)(v1090 + 19200);
                      v1093 = *(_DWORD*)(v1090 + 17280);
                      *(_DWORD*)(v1090 + 19200) = v1092 + 1;
                      if (v1092 <= 262142) {
                        v1094 = *(_QWORD*)(v1090 + 19136) + 40LL * (v1092 + 1);
                        *(_QWORD*)(v1094 + 16) = 0;
                        *(_DWORD*)(v1094 + 12) = 0;
                        *(_OWORD*)(v1094 + 24) = v1001;
                        *(_DWORD*)(v1094 + 8) = LANES128(v1034).n128_u32[2];
                        *(_QWORD*)v1094 =
                          __PAIR64__(v1056, LANES128(v1034).n128_u32[0]);
                        v1095 = v1091 + 1440LL * v1093 +
                          4LL * *(int*)(v1091 + 1440LL * v1093 + 256);
                        ++*(_DWORD*)(v1095 + 260);
                      }
                      v1096 = **a1;
                      v1097 = *(_QWORD*)(v1096 + 18736);
                      v1098 = *(_DWORD*)(v1096 + 19200);
                      v1099 = *(_DWORD*)(v1096 + 17280);
                      *(_DWORD*)(v1096 + 19200) = v1098 + 1;
                      if (v1098 <= 262142) {
                        v1100 = *(_QWORD*)(v1096 + 19136) + 40LL * (v1098 + 1);
                        *(_QWORD*)(v1100 + 16) = 0;
                        *(_DWORD*)(v1100 + 12) = 0;
                        *(_OWORD*)(v1100 + 24) = v1001;
                        *(_DWORD*)(v1100 + 8) = LANES128(v1041).n128_u32[2];
                        *(_QWORD*)v1100 =
                          __PAIR64__(v1057, LANES128(v1041).n128_u32[0]);
                        v1101 = v1097 + 1440LL * v1099 +
                          4LL * *(int*)(v1097 + 1440LL * v1099 + 256);
                        ++*(_DWORD*)(v1101 + 260);
                      }
                      v1102 = **a1;
                      v1103 = *(_QWORD*)(v1102 + 18736);
                      v1104 = *(_DWORD*)(v1102 + 19200);
                      v1105 = *(_DWORD*)(v1102 + 17280);
                      *(_DWORD*)(v1102 + 19200) = v1104 + 1;
                      if (v1104 <= 262142) {
                        v1106 = *(_QWORD*)(v1102 + 19136) + 40LL * (v1104 + 1);
                        *(_QWORD*)(v1106 + 16) = 0;
                        *(_DWORD*)(v1106 + 12) = 0;
                        *(_OWORD*)(v1106 + 24) = v1001;
                        *(_DWORD*)(v1106 + 8) = LANES128(v1047).n128_u32[2];
                        *(_QWORD*)v1106 =
                          __PAIR64__(v1058, LANES128(v1047).n128_u32[0]);
                        v1107 = v1103 + 1440LL * v1105 +
                          4LL * *(int*)(v1103 + 1440LL * v1105 + 256);
                        ++*(_DWORD*)(v1107 + 260);
                      }
                      v1108 = GameData_2130e00;
                      v1540 = *(float*)(*GameData_2130e00 + 160);
                      v1547 = *(int32x4_t*)(*GameData_2130e00 + 192);
                      v1460 = COERCE_UNSIGNED_INT128(
                        powf(LANES128(v1547).n128_f32[0], v12));
                      v1452 = COERCE_UNSIGNED_INT128(
                        powf(LANES128(v1547).n128_f32[1], v12));
                      v1109 = powf(LANES128(v1547).n128_f32[2], v12);
                      *(_QWORD*)&v1110 = __PAIR64__(v1452, v1460);
                      v1111 = *(_DWORD*)(*v1108 + 544);
                      if (v1111 > *(_DWORD*)(*v1108 + 576)) {
                        v1111 += 16;
                      }
                      DWORD1(v1109) =
                        LANES64_OF(vdup_laneq_s32(v1547, 3)).n64_u32[0];
                      *((_QWORD*)&v1110 + 1) = *(_QWORD*)&v1109;
                      v1112 = **a1;
                      LANES128(v1113).n128_u32[0] = 0;
                      LANES128(v1113).n128_u64[1] = 0;
                      LANES128(v1113).n128_f32[1] =
                        *(float*)(*v1108 + 668) * (float)(v1111 + 1);
                      v1114 = *(_QWORD*)(v1112 + 18736);
                      v1115 = *(_DWORD*)(v1112 + 19200);
                      v1116 = *(_DWORD*)(v1112 + 17280);
                      *(_DWORD*)(v1112 + 19200) = v1115 + 1;
                      if (v1115 <= 262142) {
                        v1117 = *(_QWORD*)(v1112 + 19136) + 40LL * (v1115 + 1);
                        *(_QWORD*)(v1117 + 16) = 0;
                        *(_DWORD*)(v1117 + 12) = 0;
                        *(_OWORD*)(v1117 + 24) = v1110;
                        v1118 = vaddq_f32(
                          vaddq_f32(v1497, vmulq_n_f32(v1478, v1540)), v1113);
                        *(_QWORD*)v1117 = LANES128(v1118).n128_u64[0];
                        *(_DWORD*)(v1117 + 8) = LANES128(v1118).n128_u32[2];
                        v1119 = v1114 + 1440LL * v1116 +
                          4LL * *(int*)(v1114 + 1440LL * v1116 + 256);
                        ++*(_DWORD*)(v1119 + 260);
                      }
                      v1120 = **a1;
                      v1121 = *(_QWORD*)(v1120 + 18736);
                      v1122 = *(_DWORD*)(v1120 + 19200);
                      v1123 = *(_DWORD*)(v1120 + 17280);
                      *(_DWORD*)(v1120 + 19200) = v1122 + 1;
                      if (v1122 <= 262142) {
                        v1124 = *(_QWORD*)(v1120 + 19136) + 40LL * (v1122 + 1);
                        *(_QWORD*)(v1124 + 16) = 0;
                        *(_DWORD*)(v1124 + 12) = 0;
                        *(_OWORD*)(v1124 + 24) = v1110;
                        v1125 = vaddq_f32(
                          vaddq_f32(v1487, vmulq_n_f32(v1471, v1540)), v1113);
                        *(_QWORD*)v1124 = LANES128(v1125).n128_u64[0];
                        *(_DWORD*)(v1124 + 8) = LANES128(v1125).n128_u32[2];
                        v1126 = v1121 + 1440LL * v1123 +
                          4LL * *(int*)(v1121 + 1440LL * v1123 + 256);
                        ++*(_DWORD*)(v1126 + 260);
                      }
                      v1127 = -v1540;
                      v1128 = **a1;
                      v1129 = *(_QWORD*)(v1128 + 18736);
                      v1130 = *(_DWORD*)(v1128 + 19200);
                      v1131 = *(_DWORD*)(v1128 + 17280);
                      *(_DWORD*)(v1128 + 19200) = v1130 + 1;
                      if (v1130 <= 262142) {
                        v1132 = *(_QWORD*)(v1128 + 19136) + 40LL * (v1130 + 1);
                        *(_QWORD*)(v1132 + 16) = 0;
                        *(_DWORD*)(v1132 + 12) = 0;
                        *(_OWORD*)(v1132 + 24) = v1110;
                        v1133 = vaddq_f32(
                          vaddq_f32(v1487, vmulq_n_f32(v1471, v1127)), v1113);
                        *(_QWORD*)v1132 = LANES128(v1133).n128_u64[0];
                        *(_DWORD*)(v1132 + 8) = LANES128(v1133).n128_u32[2];
                        v1134 = v1129 + 1440LL * v1131 +
                          4LL * *(int*)(v1129 + 1440LL * v1131 + 256);
                        ++*(_DWORD*)(v1134 + 260);
                      }
                      v1135 = **a1;
                      v1136 = *(_QWORD*)(v1135 + 18736);
                      v1137 = *(_DWORD*)(v1135 + 19200);
                      v1138 = *(_DWORD*)(v1135 + 17280);
                      *(_DWORD*)(v1135 + 19200) = v1137 + 1;
                      if (v1137 <= 262142) {
                        v1139 = *(_QWORD*)(v1135 + 19136) + 40LL * (v1137 + 1);
                        *(_QWORD*)(v1139 + 16) = 0;
                        *(_DWORD*)(v1139 + 12) = 0;
                        *(_OWORD*)(v1139 + 24) = v1110;
                        v1140 = vaddq_f32(
                          vaddq_f32(v1497, vmulq_n_f32(v1478, v1127)), v1113);
                        *(_QWORD*)v1139 = LANES128(v1140).n128_u64[0];
                        *(_DWORD*)(v1139 + 8) = LANES128(v1140).n128_u32[2];
                        v1141 = v1136 + 1440LL * v1138 +
                          4LL * *(int*)(v1136 + 1440LL * v1138 + 256);
                        ++*(_DWORD*)(v1141 + 260);
                      }
                      v984 = v996;
                    } while (v996 > 1);
                  }
                  v1142 = *(__int64**)**a1;
                  v1143 = *v1142;
                  *((_DWORD*)v1142 + 4324) = 1;
                  GameRoutine_1994460_alt1(v1143);
                  v45 = (unsigned __int64)&v1548;
                  if (v959 < 2) {
                  LABEL_571:
                    v1144 = *(__int64**)**a1;
                    v1145 = *v1144;
                    *((_DWORD*)v1144 + 4324) = 0;
                    GameRoutine_1994460_alt1(v1145);
                    goto LABEL_572;
                  }
                  v1175 = 2;
                  LANES128(v1176).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
                  *(int8x8_t*)&LANES128(v1176).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                  LANES128(v1177).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
                  *(int8x8_t*)&LANES128(v1177).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                  v1498 = v1176;
                  v1479 = v1177;
                  while (2) {
                    v1178 = (int32x4_t*)&v1577[2 * v1175];
                    v1179 = v1178[-2];
                    v1180 = v1178[-1];
                    LANES128(v1180).n128_u32[3] = 0;
                    LANES128(v1179).n128_u32[3] = 0;
                    v1508 = v1180;
                    v1181 = vsubq_f32(v1180, v1179);
                    v1547 = *v1178;
                    v1182 = *((float*)a1 + 16);
                    v1183 = (float32x4_t*)*GameData_2130e00;
                    v1184 = *(_DWORD*)(*GameData_2130e00 + 572);
                    if (v1184 > *(_DWORD*)(*GameData_2130e00 + 576)) {
                      v1184 += 16;
                    }
                    LODWORD(v1185) = 0;
                    *((float*)&v1185 + 1) =
                      *(float*)(*GameData_2130e00 + 668) * (float)(v1184 + 1);
                    v1541 = COERCE_AS(float32x4_t, v1185);
                    v1472 = LANES128(v1183[24]).n128_f32[0] +
                      (float)((float)(LANES128(v1183[24]).n128_f32[1] -
                                LANES128(v1183[24]).n128_f32[0]) *
                        v1182);
                    LANES128(v1186).n128_u64[0] =
                      LANES64_OF(vqtbl1_s8(v1181,
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                    *(int8x8_t*)&LANES128(v1186).n128_i8[8] = vqtbl1_s8(
                      v1181, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    LANES128(v1187).n128_u64[0] =
                      LANES64_OF(vqtbl1_s8(v1181,
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                    *(int8x8_t*)&LANES128(v1187).n128_i8[8] = vqtbl1_s8(
                      v1181, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v1188 = vmlsq_f32(vmulq_f32(v1498, v1186), v1479, v1187);
                    v1189 = vmulq_f32(v1188, v1188);
                    LANES128(v1189).n128_u64[0] = LANES64_OF(
                      vadd_f32(
                        COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v1189, v1189, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v1189).n128_u64[0])))
                                                    .n64_u64[0];
                    LANES128(v1189).n128_u64[0] = LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v1189).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v1189).n128_u64[0])))
                                                    .n64_u64[0];
                    LANES128(v1189).n128_u64[1] = LANES128(v1189).n128_u64[0];
                    v1190 = vrsqrteq_f32(v1189);
                    v1191 = vmulq_f32(
                      v1190, vrsqrtsq_f32(v1190, vmulq_f32(v1189, v1190)));
                    v1517 = vbicq_s8(
                      vmulq_f32(v1188,
                        vmulq_f32(
                          v1191, vrsqrtsq_f32(v1191, vmulq_f32(v1189, v1191)))),
                      vceqzq_f32(v1189));
                    v1192 = v1183[27];
                    v1193 = vsubq_f32(v1183[28], v1192);
                    v1194 =
                      COERCE_FLOAT(HIDWORD(LANES128(v1183[27]).n128_u64[0])) +
                      vmuls_lane_f32(v1182,
                        COERCE_AS(float32x2_t, LANES128(v1193).n128_u64[0]), 1);
                    v1195 = COERCE_FLOAT(LANES128(v1183[27]).n128_u64[1]) +
                      vmuls_lane_f32(v1182, v1193, 2);
                    *(float*)&v1465 = LANES128(v1192).n128_f32[3] +
                      vmuls_lane_f32(v1182, v1193, 3);
                    v1461 =
                      COERCE_UNSIGNED_INT128(powf(LANES128(v1192).n128_f32[0] +
                          (float)(v1182 * LANES128(v1193).n128_f32[0]),
                        v12));
                    v1453 = COERCE_UNSIGNED_INT128(powf(v1194, v12));
                    v1196 = powf(v1195, v12);
                    *(_QWORD*)&v1202 = __PAIR64__(v1453, v1461);
                    v1197 = **a1;
                    v1198 = v1541;
                    v1199 = *(_QWORD*)(v1197 + 18736);
                    v1200 = *(_DWORD*)(v1197 + 19200);
                    v1201 = *(_DWORD*)(v1197 + 17280);
                    *((_QWORD*)&v1202 + 1) = __PAIR64__(v1465, LODWORD(v1196));
                    *(_DWORD*)(v1197 + 19200) = v1200 + 1;
                    if (v1200 <= 262142) {
                      v1203 = *(_QWORD*)(v1197 + 19136) + 40LL * (v1200 + 1);
                      *(_QWORD*)(v1203 + 16) = 0;
                      *(_DWORD*)(v1203 + 12) = 0;
                      *(_OWORD*)(v1203 + 24) = v1202;
                      v1204 = vaddq_f32(
                        v1541, vaddq_f32(v1508, vmulq_n_f32(v1517, v1472)));
                      *(_QWORD*)v1203 = LANES128(v1204).n128_u64[0];
                      *(_DWORD*)(v1203 + 8) = LANES128(v1204).n128_u32[2];
                      v1205 = v1199 + 1440LL * v1201 +
                        4LL * *(int*)(v1199 + 1440LL * v1201 + 256);
                      ++*(_DWORD*)(v1205 + 260);
                    }
                    v1206 = v1547;
                    LANES128(v1206).n128_u32[3] = 0;
                    v1207 = **a1;
                    v1208 = *(_QWORD*)(v1207 + 18736);
                    v1209 = *(_DWORD*)(v1207 + 19200);
                    v1210 = *(_DWORD*)(v1207 + 17280);
                    v1211 = vsubq_f32(v1206, v1508);
                    LANES128(v1212).n128_u64[0] =
                      LANES64_OF(vqtbl1_s8(v1211,
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                    *(_DWORD*)(v1207 + 19200) = v1209 + 1;
                    *(int8x8_t*)&LANES128(v1212).n128_i8[8] = vqtbl1_s8(
                      v1211, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                    LANES128(v1213).n128_u64[0] =
                      LANES64_OF(vqtbl1_s8(v1211,
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                    *(int8x8_t*)&LANES128(v1213).n128_i8[8] = vqtbl1_s8(
                      v1211, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                    v1214 = vmlsq_f32(vmulq_f32(v1498, v1212), v1479, v1213);
                    v1215 = vmulq_f32(v1214, v1214);
                    LANES128(v1215).n128_u64[0] = LANES64_OF(
                      vadd_f32(
                        COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v1215, v1215, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v1215).n128_u64[0])))
                                                    .n64_u64[0];
                    LANES128(v1215).n128_u64[0] = LANES64_OF(
                      vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v1215).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v1215).n128_u64[0])))
                                                    .n64_u64[0];
                    LANES128(v1215).n128_u64[1] = LANES128(v1215).n128_u64[0];
                    v1216 = vrsqrteq_f32(v1215);
                    v1217 = vmulq_f32(
                      v1216, vrsqrtsq_f32(v1216, vmulq_f32(v1215, v1216)));
                    v1218 = vbicq_s8(
                      vmulq_f32(v1214,
                        vmulq_f32(
                          v1217, vrsqrtsq_f32(v1217, vmulq_f32(v1215, v1217)))),
                      vceqzq_f32(v1215));
                    if (v1209 <= 262142) {
                      v1219 = *(_QWORD*)(v1207 + 19136) + 40LL * (v1209 + 1);
                      *(_QWORD*)(v1219 + 16) = 0;
                      *(_DWORD*)(v1219 + 12) = 0;
                      *(_OWORD*)(v1219 + 24) = v1202;
                      v1220 = vaddq_f32(
                        v1541, vaddq_f32(v1206, vmulq_n_f32(v1218, v1472)));
                      *(_QWORD*)v1219 = LANES128(v1220).n128_u64[0];
                      *(_DWORD*)(v1219 + 8) = LANES128(v1220).n128_u32[2];
                      v1221 = v1208 + 1440LL * v1210 +
                        4LL * *(int*)(v1208 + 1440LL * v1210 + 256);
                      ++*(_DWORD*)(v1221 + 260);
                    }
                    v1222 = -v1472;
                    v1223 = **a1;
                    v1224 = *(_QWORD*)(v1223 + 18736);
                    v1225 = *(_DWORD*)(v1223 + 19200);
                    v1226 = *(_DWORD*)(v1223 + 17280);
                    *(_DWORD*)(v1223 + 19200) = v1225 + 1;
                    if (v1225 <= 262142) {
                      v1227 = *(_QWORD*)(v1223 + 19136) + 40LL * (v1225 + 1);
                      *(_QWORD*)(v1227 + 16) = 0;
                      *(_DWORD*)(v1227 + 12) = 0;
                      *(_OWORD*)(v1227 + 24) = v1202;
                      v1228 = vaddq_f32(
                        v1541, vaddq_f32(v1206, vmulq_n_f32(v1218, v1222)));
                      *(_QWORD*)v1227 = LANES128(v1228).n128_u64[0];
                      *(_DWORD*)(v1227 + 8) = LANES128(v1228).n128_u32[2];
                      v1229 = v1224 + 1440LL * v1226 +
                        4LL * *(int*)(v1224 + 1440LL * v1226 + 256);
                      ++*(_DWORD*)(v1229 + 260);
                    }
                    v1230 = *a1;
                    v1473 = v1218;
                    v1547 = v1206;
                    v1231 = *v1230;
                    v1232 = *(_QWORD*)(v1231 + 18736);
                    v1233 = *(_DWORD*)(v1231 + 19200);
                    v1234 = *(_DWORD*)(v1231 + 17280);
                    *(_DWORD*)(v1231 + 19200) = v1233 + 1;
                    if (v1233 <= 262142) {
                      v1235 = *(_QWORD*)(v1231 + 19136) + 40LL * (v1233 + 1);
                      *(_QWORD*)(v1235 + 16) = 0;
                      *(_DWORD*)(v1235 + 12) = 0;
                      *(_OWORD*)(v1235 + 24) = v1202;
                      v1236 = vaddq_f32(
                        v1541, vaddq_f32(v1508, vmulq_n_f32(v1517, v1222)));
                      *(_QWORD*)v1235 = LANES128(v1236).n128_u64[0];
                      *(_DWORD*)(v1235 + 8) = LANES128(v1236).n128_u32[2];
                      v1237 = v1232 + 1440LL * v1234 +
                        4LL * *(int*)(v1232 + 1440LL * v1234 + 256);
                      ++*(_DWORD*)(v1237 + 260);
                    }
                    v1238 = v440[2];
                    v1239 = *(_OWORD*)&v1577[2 * v1175];
                    if (*(float*)&v1239 >
                        (float)(v983 + LANES128(v1238).n128_f32[0]) ||
                      *(float*)&v1239 <
                        (float)(LANES128(v1238).n128_f32[0] - v983) ||
                      (LODWORD(v1240) = v1577[2 * v1175 + 1],
                        *((float*)&v1239 + 2) >
                          (float)(v983 + LANES128(v1238).n128_f32[2])) ||
                      *((float*)&v1239 + 2) <
                        (float)(LANES128(v1238).n128_f32[2] - v983)) {
                      v1241 = (float32x4_t*)*GameData_2130e00;
                    }
                    else {
                      if (LANES128(v59[7]).n128_u8[3] == 1) {
                        v1241 = (float32x4_t*)*GameData_2130e00;
                        v1242 = (float*)(*GameData_2130e00 + 660);
                      }
                      else {
                        v1466 = *(_OWORD*)&v1577[2 * v1175];
                        v1243 = *(_QWORD*)(*GameData_212c790 + 8);
                        v1244 = *(float32x4_t****)(v1243 + 8);
                        v1245 = *(float32x4_t****)(v1243 + 16);
                        if (v1244 == v1245) {
                        LABEL_607:
                          v1246 = GameData_2130e00;
                          v1241 = (float32x4_t*)*GameData_2130e00;
                        }
                        else {
                          while (1) {
                            v1297 = *v1244;
                            if (**v1244 == v59) {
                              v1298 = v1297[12];
                              if (v1298 != nullptr &&
                                (unsigned int)LANES128(v1298[2]).n128_u8[0] -
                                    3 <
                                  2) {
                                break;
                              }
                            }
                            if (++v1244 == v1245) {
                              goto LABEL_607;
                            }
                          }
                          v1241 = (float32x4_t*)*GameData_2130e00;
                          if (((_WORD)v1297[68] & 8) != 0) {
                            v1242 = &LANES128(v1241[41]).n128_f32[2];
                            goto LABEL_609;
                          }
                          v1246 = GameData_2130e00;
                        }
                        v1247 = Impl_13261c0(v59);
                        v1198 = v1541;
                        LODWORD(v1239) = v1466;
                        v1248 = (char*)v1241 + 4 * v1247;
                        v1241 = (float32x4_t*)*v1246;
                        v1242 = (float*)(v1248 + 80);
                      }
                    LABEL_609:
                      v1249 = *v1242 * 0x1.ddddde0000000p-5;
                      v1250 = v59[2];
                      v1251 = v1249 + LANES128(v1250).n128_f32[0];
                      v1252 = LANES128(v1250).n128_f32[0] - v1249;
                      v1253 = COERCE_FLOAT(LANES128(v59[2]).n128_u64[1]);
                      v1254 = v1249 + v1253;
                      v1255 =
                        *(float*)&v1239 > v1251 || *(float*)&v1239 < v1252;
                      v1256 = v1253 - v1249;
                      if (v1255 || v1240 > v1254 || v1240 < v1256) {
                        v1259 = LANES128(v1241[36]).n128_i32[3];
                        if (v1259 >
                          (signed __int32)LANES128(v1241[36]).n128_u32[0]) {
                          v1259 += 16;
                        }
                        LANES128(v1198).n128_f32[1] =
                          LANES128(v1241[41]).n128_f32[3] * (float)(v1259 + 1);
                        v1541 = v1198;
                      }
                    }
                    v1260 = *((float*)a1 + 16);
                    v1467 = LANES128(v1241[24]).n128_f32[0] +
                      (float)((float)(LANES128(v1241[24]).n128_f32[1] -
                                LANES128(v1241[24]).n128_f32[0]) *
                        v1260);
                    v1261 = v1241[27];
                    v1262 = vsubq_f32(v1241[28], v1261);
                    v1263 =
                      COERCE_FLOAT(HIDWORD(LANES128(v1241[27]).n128_u64[0])) +
                      vmuls_lane_f32(v1260,
                        COERCE_AS(float32x2_t, LANES128(v1262).n128_u64[0]), 1);
                    v1264 = COERCE_FLOAT(LANES128(v1241[27]).n128_u64[1]) +
                      vmuls_lane_f32(v1260, v1262, 2);
                    *(float*)&v1462 = LANES128(v1261).n128_f32[3] +
                      vmuls_lane_f32(v1260, v1262, 3);
                    v1454 =
                      COERCE_UNSIGNED_INT128(powf(LANES128(v1261).n128_f32[0] +
                          (float)(v1260 * LANES128(v1262).n128_f32[0]),
                        v12));
                    v1450 = COERCE_UNSIGNED_INT128(powf(v1263, v12));
                    v1265 = powf(v1264, v12);
                    *(_QWORD*)&v1270 = __PAIR64__(v1450, v1454);
                    v1266 = **a1;
                    v1267 = *(_QWORD*)(v1266 + 18736);
                    v1268 = *(_DWORD*)(v1266 + 19200);
                    v1269 = *(_DWORD*)(v1266 + 17280);
                    *((_QWORD*)&v1270 + 1) = __PAIR64__(v1462, LODWORD(v1265));
                    *(_DWORD*)(v1266 + 19200) = v1268 + 1;
                    if (v1268 <= 262142) {
                      v1271 = *(_QWORD*)(v1266 + 19136) + 40LL * (v1268 + 1);
                      *(_QWORD*)(v1271 + 16) = 0;
                      *(_DWORD*)(v1271 + 12) = 0;
                      *(_OWORD*)(v1271 + 24) = v1270;
                      v1272 = vaddq_f32(
                        v1541, vaddq_f32(v1508, vmulq_n_f32(v1517, v1467)));
                      *(_QWORD*)v1271 = LANES128(v1272).n128_u64[0];
                      *(_DWORD*)(v1271 + 8) = LANES128(v1272).n128_u32[2];
                      v1273 = v1267 + 1440LL * v1269 +
                        4LL * *(int*)(v1267 + 1440LL * v1269 + 256);
                      ++*(_DWORD*)(v1273 + 260);
                    }
                    v1274 = v1547;
                    v45 = (unsigned __int64)&v1548;
                    v1275 = **a1;
                    v1276 = *(_QWORD*)(v1275 + 18736);
                    v1277 = *(_DWORD*)(v1275 + 19200);
                    v1278 = *(_DWORD*)(v1275 + 17280);
                    *(_DWORD*)(v1275 + 19200) = v1277 + 1;
                    if (v1277 <= 262142) {
                      v1279 = *(_QWORD*)(v1275 + 19136) + 40LL * (v1277 + 1);
                      *(_QWORD*)(v1279 + 16) = 0;
                      *(_DWORD*)(v1279 + 12) = 0;
                      *(_OWORD*)(v1279 + 24) = v1270;
                      v1280 = vaddq_f32(
                        v1541, vaddq_f32(v1274, vmulq_n_f32(v1473, v1467)));
                      *(_QWORD*)v1279 = LANES128(v1280).n128_u64[0];
                      *(_DWORD*)(v1279 + 8) = LANES128(v1280).n128_u32[2];
                      v1281 = v1276 + 1440LL * v1278 +
                        4LL * *(int*)(v1276 + 1440LL * v1278 + 256);
                      ++*(_DWORD*)(v1281 + 260);
                    }
                    v1282 = -v1467;
                    v1283 = **a1;
                    v1284 = *(_QWORD*)(v1283 + 18736);
                    v1285 = *(_DWORD*)(v1283 + 19200);
                    v1286 = *(_DWORD*)(v1283 + 17280);
                    *(_DWORD*)(v1283 + 19200) = v1285 + 1;
                    if (v1285 <= 262142) {
                      v1287 = *(_QWORD*)(v1283 + 19136) + 40LL * (v1285 + 1);
                      *(_QWORD*)(v1287 + 16) = 0;
                      *(_DWORD*)(v1287 + 12) = 0;
                      *(_OWORD*)(v1287 + 24) = v1270;
                      v1288 = vaddq_f32(
                        v1541, vaddq_f32(v1274, vmulq_n_f32(v1473, v1282)));
                      *(_QWORD*)v1287 = LANES128(v1288).n128_u64[0];
                      *(_DWORD*)(v1287 + 8) = LANES128(v1288).n128_u32[2];
                      v1289 = v1284 + 1440LL * v1286 +
                        4LL * *(int*)(v1284 + 1440LL * v1286 + 256);
                      ++*(_DWORD*)(v1289 + 260);
                    }
                    v1290 = **a1;
                    v1291 = *(_QWORD*)(v1290 + 18736);
                    v1292 = *(_DWORD*)(v1290 + 19200);
                    v1293 = *(_DWORD*)(v1290 + 17280);
                    *(_DWORD*)(v1290 + 19200) = v1292 + 1;
                    if (v1292 <= 262142) {
                      v1294 = *(_QWORD*)(v1290 + 19136) + 40LL * (v1292 + 1);
                      *(_QWORD*)(v1294 + 16) = 0;
                      *(_DWORD*)(v1294 + 12) = 0;
                      *(_OWORD*)(v1294 + 24) = v1270;
                      v1295 = vaddq_f32(
                        v1541, vaddq_f32(v1508, vmulq_n_f32(v1517, v1282)));
                      *(_QWORD*)v1294 = LANES128(v1295).n128_u64[0];
                      *(_DWORD*)(v1294 + 8) = LANES128(v1295).n128_u32[2];
                      v1296 = v1291 + 1440LL * v1293 +
                        4LL * *(int*)(v1291 + 1440LL * v1293 + 256);
                      ++*(_DWORD*)(v1296 + 260);
                    }
                    if (++v1175 > (unsigned __int64)(int)v959) {
                      goto LABEL_571;
                    }
                    continue;
                  }
                }
              LABEL_487:
                v973 = (__typeof__(v973)){0};
                v593 = false;
                goto LABEL_488;
              }
            }
            v959 = v962;
            if ((int)v962 >= 2) {
              goto LABEL_482;
            }
            goto LABEL_487;
          }
          LODWORD(v446) = 1;
          v447 = (*v443)[2];
          v1577[0] = LANES128((*v443)[2]).n128_u64[0];
          *(_QWORD*)&v448 = v1577[0];
          *((_QWORD*)&v448 + 1) = LANES128(v447).n128_u32[2];
          *(_OWORD*)v1577 = v448;
          v449 = 1;
          v450 = *(float*)(*GameData_2130e00 + 164) *
            *(float*)(*GameData_2130e00 + 164);
          do {
            v451 = (float)v449 / 0x1.e000000000000p+5;
            if (v451 >= 0x1.0000000000000p-1) {
              v454 = *((float32x4_t*)v443 + 5);
              v455 = *((float32x4_t*)v443 + 6);
              v453 = *((float32x4_t*)v443 + 4);
              v452 = (float)(v451 + v21) + (float)(v451 + v21);
              v456 = 0x1.0000000000000p+0 - v452;
              v458 = v443[1] + 2;
              v457 = v456 * v456;
            }
            else {
              v452 = v451 + v451;
              v453 = *((float32x4_t*)v443 + 2);
              v454 = *((float32x4_t*)v443 + 3);
              v455 = (*v443)[2];
              v456 = 0x1.0000000000000p+0 - (float)(v451 + v451);
              v457 = v456 * v456;
              v458 = (float32x4_t*)(v443 + 12);
            }
            v459 = vaddq_f32(
              vaddq_f32(vaddq_f32(vmulq_n_f32(v455, v456 * v457),
                          vmulq_n_f32(
                            v453, v452 * (float)(v456 * (float)(v456 * v20)))),
                vmulq_n_f32(v454, v452 * (float)(v452 * (float)(v456 * v20)))),
              vmulq_n_f32(*v458, v452 * (float)(v452 * v452)));
            v460 = v459;
            LANES128(v460).n128_u32[3] = 0;
            v461 = vsubq_f32(*(float32x4_t*)&v1577[2 * (int)v446 - 2], v460);
            v462 = vmulq_f32(v461, v461);
            LANES128(v462).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v462, v462, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v462).n128_u64[0])))
                                           .n64_u64[0];
            if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v462).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v462).n128_u64[0])))
                  .n64_f32[0] > v450) {
              v463 = vsubq_f32(v460, v440[2]);
              v464 = vmulq_f32(v463, v463);
              LANES128(v464).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v464, v464, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v464).n128_u64[0])))
                                             .n64_u64[0];
              if (LANES64_OF(
                    vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v464).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v464).n128_u64[0])))
                    .n64_f32[0] > (float)(v450 * v19)) {
                v446 = (int)v446 + 1LL;
                v465 = &v1577[2 * v446];
                *v465 = LANES128(v459).n128_u64[0];
                v466 = *(_OWORD*)v465;
                *((_QWORD*)&v466 + 1) = LANES128(v459).n128_u32[2];
                *(_OWORD*)v465 = v466;
                if ((_DWORD)v446 == 22) {
                  v467 = 21;
                  goto LABEL_331;
                }
              }
            }
            ++v449;
          } while (v449 != 60);
          v467 = v446 - 1;
          if ((int)v446 < 1) {
            v593 = false;
            v45 = (unsigned __int64)&v1548;
            v1446 = (__typeof__(v1446)){0};
            goto LABEL_572;
          }
        LABEL_331:
          v468 = (float32x4_t*)&v1577[2 * v467];
          v469 = v467 + 1LL;
          do {
            v470 =
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
            v472 = *(_QWORD*)(v470 + 24);
            v471 = *(__int64**)(v470 + 32);
            if (v471 != nullptr) {
              atomic_fetch_add_explicit(
                (atomic_ullong* volatile)(v471 + 1), 1u, memory_order_relaxed);
            }
            *(struct GmapDrawer_mtx44*)v1582 =
              ((struct GmapDrawer_mtx44 (*)(__int64)) *
                (_QWORD*)(*(_QWORD*)v472 + 16LL))(v472);
            *(struct GmapDrawer_mtx44*)v1581 =
              ((struct GmapDrawer_mtx44 (*)(__int64)) *
                (_QWORD*)(*(_QWORD*)v472 + 24LL))(v472);
            v479 = GameRoutine_a6c440(v468, v1582, v1581);
            if (v471 != nullptr &&
              atomic_fetch_add((atomic_ullong* volatile)(v471 + 1),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
              v480 = *v471;
              v1547 = v479;
              (*(void (**)(__int64*))(v480 + 16))(v471);
              std___1___shared_weak_count___release_weak(v471);
              v479 = v1547;
            }
            if (LANES128(v479).n128_f32[2] <= 0.0 &&
              LANES128(v479).n128_f32[0] >= 0.0 &&
              LANES128(v479).n128_f32[0] <= 0x1.e000000000000p+10 &&
              LANES128(v479).n128_f32[1] >= 0.0 &&
              LANES128(v479).n128_f32[1] <= 0x1.0e00000000000p+10) {
              v481 = *v468;
              v482 = (int32x4_t**)GameData_2130e00;
              v483 = vsubq_f32(v440[2], *v468);
              v484 = vmulq_f32(v483, v483);
              LANES128(v484).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v484, v484, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v484).n128_u64[0])))
                                             .n64_u64[0];
              if (LANES64_OF(
                    vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v484).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v484).n128_u64[0])))
                    .n64_f32[0] >=
                (float)((float)(*(float*)(*GameData_2130e00 + 172) *
                          0x1.0000000000000p-1) *
                  (float)(*(float*)(*GameData_2130e00 + 172) *
                    0x1.0000000000000p-1))) {
                v467 = v469 - 1;
                v593 = true;
                v1446 = v481;
                if ((_DWORD)v469 - 1 < 0) {
                  goto LABEL_475;
                }
                goto LABEL_373;
              }
              v1547 = *(int32x4_t*)(*GameData_2130e00 + 176);
              v1534 = vmuls_lane_f32(v1463, v1547, 3) + 0.0;
              v1513 =
                COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[0], v12));
              v1503 =
                COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[1], v12));
              v485 = powf(LANES128(v1547).n128_f32[2], v12);
              *(_QWORD*)&v486 = __PAIR64__(v1503, v1513);
              v487 = *v482;
              v488 = LANES128((*v482)[35]).n128_i32[2];
              if (v488 > (signed __int32)LANES128((*v482)[36]).n128_u32[0]) {
                v488 += 16;
              }
              *((_QWORD*)&v486 + 1) = __PAIR64__(LODWORD(v1534), LODWORD(v485));
              v489 = LANES128(v487[41]).n128_f32[3] * (float)(v488 + 1);
              v490 = LANES128(v487[24]).n128_f32[0];
              v491 = **a1;
              v492 = v490 +
                (float)((float)(LANES128((*v482)[24]).n128_f32[1] - v490) *
                  *((float*)a1 + 16));
              v493 =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                  .n64_u64[0];
              LANES64(v1535).n64_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
              v494 = *(_QWORD*)(v491 + 18736);
              v495 = *(_DWORD*)(v491 + 19200);
              v496 = *(_DWORD*)(v491 + 17280);
              v497 = vsubq_f32(v440[2], v59[2]);
              LANES128(v498).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v497, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                             .n64_u64[0];
              *(int8x8_t*)&LANES128(v498).n128_i8[8] =
                vqtbl1_s8(v497, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              LANES128(v499).n128_u64[0] = LANES64(v1535).n64_u64[0];
              LANES128(v499).n128_u64[1] = v493;
              v500 = vmulq_f32(v498, v499);
              LANES128(v499).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v497, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                             .n64_u64[0];
              *(int8x8_t*)&LANES128(v499).n128_i8[8] =
                vqtbl1_s8(v497, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              LANES128(v501).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
              *(int8x8_t*)&LANES128(v501).n128_i8[8] =
                vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
              v502 = vmlsq_f32(v500, v501, v499);
              v503 = vmulq_f32(v497, v497);
              v1504 = v501;
              v1514 = v493;
              LANES128(v503).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v503, v503, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v503).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v503).n128_u64[0] = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v503).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v503).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v503).n128_u64[1] = LANES128(v503).n128_u64[0];
              v504 = vrsqrteq_f32(v503);
              v505 = vmulq_f32(v504, vrsqrtsq_f32(v504, vmulq_f32(v503, v504)));
              v506 = vbicq_s8(
                vmulq_f32(v497,
                  vmulq_f32(v505, vrsqrtsq_f32(v505, vmulq_f32(v503, v505)))),
                vceqzq_f32(v503));
              v507 = vmulq_f32(v502, v502);
              v508 = vmulq_n_f32(v506, v492);
              LANES128(v507).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v507, v507, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v507).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v507).n128_u64[0] = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v507).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v507).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v507).n128_u64[1] = LANES128(v507).n128_u64[0];
              v509 = vrsqrteq_f32(v507);
              v510 = vmulq_f32(v509, vrsqrtsq_f32(v509, vmulq_f32(v507, v509)));
              v511 = vbicq_s8(
                vmulq_f32(v502,
                  vmulq_f32(v510, vrsqrtsq_f32(v510, vmulq_f32(v507, v510)))),
                vceqzq_f32(v507));
              v512 = *v468;
              *(_DWORD*)(v491 + 19200) = v495 + 1;
              v513 = vmulq_n_f32(v511, v492);
              v514 = vsubq_f32(v512, v508);
              if (v495 <= 262142) {
                v515 = vsubq_f32(v514, v513);
                v516 = *(_QWORD*)(v491 + 19136) + 40LL * (v495 + 1);
                *(_QWORD*)(v516 + 16) = 0;
                *(_DWORD*)(v516 + 12) = 0;
                *(_OWORD*)(v516 + 24) = v486;
                *(_DWORD*)(v516 + 8) = LANES128(v515).n128_u32[2];
                LANES128(v515).n128_f32[1] = v489 + LANES128(v515).n128_f32[1];
                *(_QWORD*)v516 = LANES128(v515).n128_u64[0];
                v517 = v494 + 1440LL * v496 +
                  4LL * *(int*)(v494 + 1440LL * v496 + 256);
                ++*(_DWORD*)(v517 + 260);
              }
              v518 = **a1;
              v519 = *(_QWORD*)(v518 + 18736);
              v520 = *(_DWORD*)(v518 + 19200);
              v521 = *(_DWORD*)(v518 + 17280);
              *(_DWORD*)(v518 + 19200) = v520 + 1;
              if (v520 <= 262142) {
                v522 = vaddq_f32(v514, v513);
                v523 = *(_QWORD*)(v518 + 19136) + 40LL * (v520 + 1);
                *(_QWORD*)(v523 + 16) = 0;
                *(_DWORD*)(v523 + 12) = 0;
                *(_OWORD*)(v523 + 24) = v486;
                *(_DWORD*)(v523 + 8) = LANES128(v522).n128_u32[2];
                LANES128(v522).n128_f32[1] = v489 + LANES128(v522).n128_f32[1];
                *(_QWORD*)v523 = LANES128(v522).n128_u64[0];
                v524 = v519 + 1440LL * v521 +
                  4LL * *(int*)(v519 + 1440LL * v521 + 256);
                ++*(_DWORD*)(v524 + 260);
              }
              v525 = vaddq_f32(v508, v512);
              v526 = **a1;
              v527 = *(_QWORD*)(v526 + 18736);
              v528 = *(_DWORD*)(v526 + 19200);
              v529 = *(_DWORD*)(v526 + 17280);
              *(_DWORD*)(v526 + 19200) = v528 + 1;
              if (v528 <= 262142) {
                v530 = vaddq_f32(v525, v513);
                v531 = *(_QWORD*)(v526 + 19136) + 40LL * (v528 + 1);
                *(_QWORD*)(v531 + 16) = 0;
                *(_DWORD*)(v531 + 12) = 0;
                *(_OWORD*)(v531 + 24) = v486;
                *(_DWORD*)(v531 + 8) = LANES128(v530).n128_u32[2];
                LANES128(v530).n128_f32[1] = v489 + LANES128(v530).n128_f32[1];
                *(_QWORD*)v531 = LANES128(v530).n128_u64[0];
                v532 = v527 + 1440LL * v529 +
                  4LL * *(int*)(v527 + 1440LL * v529 + 256);
                ++*(_DWORD*)(v532 + 260);
              }
              v533 = **a1;
              v534 = *(_QWORD*)(v533 + 18736);
              v535 = *(_DWORD*)(v533 + 19200);
              v536 = *(_DWORD*)(v533 + 17280);
              *(_DWORD*)(v533 + 19200) = v535 + 1;
              if (v535 <= 262142) {
                v537 = vsubq_f32(v525, v513);
                v538 = *(_QWORD*)(v533 + 19136) + 40LL * (v535 + 1);
                *(_QWORD*)(v538 + 16) = 0;
                *(_DWORD*)(v538 + 12) = 0;
                *(_OWORD*)(v538 + 24) = v486;
                *(_DWORD*)(v538 + 8) = LANES128(v537).n128_u32[2];
                LANES128(v537).n128_f32[1] = v489 + LANES128(v537).n128_f32[1];
                *(_QWORD*)v538 = LANES128(v537).n128_u64[0];
                v539 = v534 + 1440LL * v536 +
                  4LL * *(int*)(v534 + 1440LL * v536 + 256);
                ++*(_DWORD*)(v539 + 260);
              }
              v1547 = (*v482)[12];
              v1491 =
                COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[0], v12));
              v1481 =
                COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[1], v12));
              v540 = powf(LANES128(v1547).n128_f32[2], v12);
              LANES128(v542).n128_u64[0] = LANES64(v1535).n64_u64[0];
              v541 = vsubq_f32(v440[2], v59[2]);
              LANES128(v542).n128_u64[1] = v1514;
              *(_QWORD*)&v543 = __PAIR64__(v1481, v1491);
              v544 = *v482;
              v545 = LANES128((*v482)[34]).n128_i32[0];
              LANES128(v546).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v541, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                             .n64_u64[0];
              LANES64(v547).n64_u64[0] = LANES64_OF(
                vqtbl1_s8(v541, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                                           .n64_u64[0];
              if (v545 > (signed __int32)LANES128((*v482)[36]).n128_u32[0]) {
                v545 += 16;
              }
              DWORD1(v540) = LANES64_OF(vdup_laneq_s32(v1547, 3)).n64_u32[0];
              *(int8x8_t*)&LANES128(v546).n128_i8[8] = v547;
              LANES128(v548).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v541, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                             .n64_u64[0];
              *((_QWORD*)&v543 + 1) = *(_QWORD*)&v540;
              *(int8x8_t*)&LANES128(v548).n128_i8[8] =
                vqtbl1_s8(v541, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
              v549 = LANES128(v544[41]).n128_f32[3] * (float)(v545 + 1);
              v550 = LANES128(v544[10]).n128_f32[0];
              v551 = **a1;
              v552 = vmlsq_f32(vmulq_f32(v542, v546), v1504, v548);
              v553 = vmulq_f32(v541, v541);
              v554 = *(_QWORD*)(v551 + 18736);
              v555 = *(_DWORD*)(v551 + 19200);
              v556 = *(_DWORD*)(v551 + 17280);
              LANES128(v553).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v553, v553, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v553).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v553).n128_u64[0] = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v553).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v553).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v553).n128_u64[1] = LANES128(v553).n128_u64[0];
              v557 = vrsqrteq_f32(v553);
              v558 = vmulq_f32(v557, vrsqrtsq_f32(v557, vmulq_f32(v553, v557)));
              v559 = vbicq_s8(
                vmulq_f32(v541,
                  vmulq_f32(v558, vrsqrtsq_f32(v558, vmulq_f32(v553, v558)))),
                vceqzq_f32(v553));
              v560 = vmulq_f32(v552, v552);
              v561 = vmulq_n_f32(v559, v550);
              LANES128(v560).n128_u64[0] = LANES64_OF(
                vadd_f32(COERCE_AS(float32x2_t,
                           LANES128_OF(vextq_s8(v560, v560, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v560).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v560).n128_u64[0] = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v560).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v560).n128_u64[0])))
                                             .n64_u64[0];
              LANES128(v560).n128_u64[1] = LANES128(v560).n128_u64[0];
              v562 = vrsqrteq_f32(v560);
              v563 = vmulq_f32(v562, vrsqrtsq_f32(v562, vmulq_f32(v560, v562)));
              v564 = vbicq_s8(
                vmulq_f32(v552,
                  vmulq_f32(v563, vrsqrtsq_f32(v563, vmulq_f32(v560, v563)))),
                vceqzq_f32(v560));
              v565 = *v468;
              *(_DWORD*)(v551 + 19200) = v555 + 1;
              v566 = vmulq_n_f32(v564, v550);
              v567 = vsubq_f32(v565, v561);
              if (v555 <= 262142) {
                v568 = vsubq_f32(v567, v566);
                v569 = *(_QWORD*)(v551 + 19136) + 40LL * (v555 + 1);
                *(_QWORD*)(v569 + 16) = 0;
                *(_DWORD*)(v569 + 12) = 0;
                *(_OWORD*)(v569 + 24) = v543;
                *(_DWORD*)(v569 + 8) = LANES128(v568).n128_u32[2];
                LANES128(v568).n128_f32[1] = v549 + LANES128(v568).n128_f32[1];
                *(_QWORD*)v569 = LANES128(v568).n128_u64[0];
                v570 = v554 + 1440LL * v556 +
                  4LL * *(int*)(v554 + 1440LL * v556 + 256);
                ++*(_DWORD*)(v570 + 260);
              }
              v571 = **a1;
              v572 = *(_QWORD*)(v571 + 18736);
              v573 = *(_DWORD*)(v571 + 19200);
              v574 = *(_DWORD*)(v571 + 17280);
              *(_DWORD*)(v571 + 19200) = v573 + 1;
              if (v573 <= 262142) {
                v575 = vaddq_f32(v567, v566);
                v576 = *(_QWORD*)(v571 + 19136) + 40LL * (v573 + 1);
                *(_QWORD*)(v576 + 16) = 0;
                *(_DWORD*)(v576 + 12) = 0;
                *(_OWORD*)(v576 + 24) = v543;
                *(_DWORD*)(v576 + 8) = LANES128(v575).n128_u32[2];
                LANES128(v575).n128_f32[1] = v549 + LANES128(v575).n128_f32[1];
                *(_QWORD*)v576 = LANES128(v575).n128_u64[0];
                v577 = v572 + 1440LL * v574 +
                  4LL * *(int*)(v572 + 1440LL * v574 + 256);
                ++*(_DWORD*)(v577 + 260);
              }
              v578 = vaddq_f32(v561, v565);
              v579 = **a1;
              v580 = *(_QWORD*)(v579 + 18736);
              v581 = *(_DWORD*)(v579 + 19200);
              v582 = *(_DWORD*)(v579 + 17280);
              *(_DWORD*)(v579 + 19200) = v581 + 1;
              if (v581 <= 262142) {
                v583 = vaddq_f32(v578, v566);
                v584 = *(_QWORD*)(v579 + 19136) + 40LL * (v581 + 1);
                *(_QWORD*)(v584 + 16) = 0;
                *(_DWORD*)(v584 + 12) = 0;
                *(_OWORD*)(v584 + 24) = v543;
                *(_DWORD*)(v584 + 8) = LANES128(v583).n128_u32[2];
                LANES128(v583).n128_f32[1] = v549 + LANES128(v583).n128_f32[1];
                *(_QWORD*)v584 = LANES128(v583).n128_u64[0];
                v585 = v580 + 1440LL * v582 +
                  4LL * *(int*)(v580 + 1440LL * v582 + 256);
                ++*(_DWORD*)(v585 + 260);
              }
              v586 = **a1;
              v587 = *(_QWORD*)(v586 + 18736);
              v588 = *(_DWORD*)(v586 + 19200);
              v589 = *(_DWORD*)(v586 + 17280);
              *(_DWORD*)(v586 + 19200) = v588 + 1;
              if (v588 <= 262142) {
                v590 = vsubq_f32(v578, v566);
                v591 = *(_QWORD*)(v586 + 19136) + 40LL * (v588 + 1);
                *(_QWORD*)(v591 + 16) = 0;
                *(_DWORD*)(v591 + 12) = 0;
                *(_OWORD*)(v591 + 24) = v543;
                *(_DWORD*)(v591 + 8) = LANES128(v590).n128_u32[2];
                LANES128(v590).n128_f32[1] = v549 + LANES128(v590).n128_f32[1];
                *(_QWORD*)v591 = LANES128(v590).n128_u64[0];
                v592 = v587 + 1440LL * v589 +
                  4LL * *(int*)(v587 + 1440LL * v589 + 256);
                ++*(_DWORD*)(v592 + 260);
              }
              v467 = v469 - 1;
            }
            v27 = v469-- <= 1;
            --v468;
          } while (!v27);
          v593 = false;
          v1446 = (__typeof__(v1446)){0};
          if ((v467 & 0x80000000) != 0) {
          LABEL_475:
            v45 = (unsigned __int64)&v1548;
            goto LABEL_572;
          }
        LABEL_373:
          v594 = 2LL * v467;
          v45 = (unsigned __int64)&v1548;
          LANES128(v595).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                         COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
          LANES128(v596).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
                         COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
          *(int8x8_t*)&LANES128(v595).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
              COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
          *(int8x8_t*)&LANES128(v596).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83610),
              COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          v1536 = v595;
          v1505 = v596;
          do {
            v599 = (int32x4_t**)GameData_2130e00;
            v1547 = *(int32x4_t*)(*GameData_2130e00 + 240);
            v1492 = vmuls_lane_f32(v1463, v1547, 3) + 0.0;
            v1482 =
              COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[0], v12));
            v1474 =
              COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[1], v12));
            v600 = powf(LANES128(v1547).n128_f32[2], v12);
            *(_QWORD*)&v601 = __PAIR64__(v1474, v1482);
            v602 = *v599;
            v603 = LANES128((*v599)[35]).n128_i32[2];
            if (v603 > (signed __int32)LANES128((*v599)[36]).n128_u32[0]) {
              v603 += 16;
            }
            *((_QWORD*)&v601 + 1) = __PAIR64__(LODWORD(v1492), LODWORD(v600));
            v604 = LANES128(v602[41]).n128_f32[3] * (float)(v603 + 1);
            v605 = LANES128(v602[24]).n128_f32[0];
            v606 = **a1;
            v607 = *(_QWORD*)(v606 + 18736);
            v608 = *(_DWORD*)(v606 + 19200);
            v609 = *(_DWORD*)(v606 + 17280);
            v610 = v605 +
              (float)((float)(LANES128((*v599)[24]).n128_f32[1] - v605) *
                *((float*)a1 + 16));
            v611 = vsubq_f32(v440[2], v59[2]);
            LANES128(v612).n128_u64[0] = LANES64_OF(
              vqtbl1_s8(v611, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                           .n64_u64[0];
            *(int8x8_t*)&LANES128(v612).n128_i8[8] =
              vqtbl1_s8(v611, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v613).n128_u64[0] = LANES64_OF(
              vqtbl1_s8(v611, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                           .n64_u64[0];
            *(int8x8_t*)&LANES128(v613).n128_i8[8] =
              vqtbl1_s8(v611, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            v614 = vmlsq_f32(vmulq_f32(v1536, v612), v1505, v613);
            v615 = vmulq_f32(v611, v611);
            LANES128(v615).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v615, v615, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v615).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v615).n128_u64[0] = LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v615).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v615).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v615).n128_u64[1] = LANES128(v615).n128_u64[0];
            v616 = vrsqrteq_f32(v615);
            v617 = vmulq_f32(v616, vrsqrtsq_f32(v616, vmulq_f32(v615, v616)));
            v618 = vbicq_s8(
              vmulq_f32(v611,
                vmulq_f32(v617, vrsqrtsq_f32(v617, vmulq_f32(v615, v617)))),
              vceqzq_f32(v615));
            v619 = vmulq_f32(v614, v614);
            v620 = vmulq_n_f32(v618, v610);
            LANES128(v619).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v619, v619, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v619).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v619).n128_u64[0] = LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v619).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v619).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v619).n128_u64[1] = LANES128(v619).n128_u64[0];
            v621 = vrsqrteq_f32(v619);
            v622 = vmulq_f32(v621, vrsqrtsq_f32(v621, vmulq_f32(v619, v621)));
            v623 = vbicq_s8(
              vmulq_f32(v614,
                vmulq_f32(v622, vrsqrtsq_f32(v622, vmulq_f32(v619, v622)))),
              vceqzq_f32(v619));
            v624 = *(float32x4_t*)&v1577[v594];
            *(_DWORD*)(v606 + 19200) = v608 + 1;
            v625 = vmulq_n_f32(v623, v610);
            v626 = vsubq_f32(v624, v620);
            if (v608 <= 262142) {
              v627 = vsubq_f32(v626, v625);
              v628 = *(_QWORD*)(v606 + 19136) + 40LL * (v608 + 1);
              *(_QWORD*)(v628 + 16) = 0;
              *(_DWORD*)(v628 + 12) = 0;
              *(_OWORD*)(v628 + 24) = v601;
              *(_DWORD*)(v628 + 8) = LANES128(v627).n128_u32[2];
              LANES128(v627).n128_f32[1] = v604 + LANES128(v627).n128_f32[1];
              *(_QWORD*)v628 = LANES128(v627).n128_u64[0];
              v629 = v607 + 1440LL * v609 +
                4LL * *(int*)(v607 + 1440LL * v609 + 256);
              ++*(_DWORD*)(v629 + 260);
            }
            v630 = **a1;
            v631 = *(_QWORD*)(v630 + 18736);
            v632 = *(_DWORD*)(v630 + 19200);
            v633 = *(_DWORD*)(v630 + 17280);
            *(_DWORD*)(v630 + 19200) = v632 + 1;
            if (v632 <= 262142) {
              v634 = vaddq_f32(v626, v625);
              v635 = *(_QWORD*)(v630 + 19136) + 40LL * (v632 + 1);
              *(_QWORD*)(v635 + 16) = 0;
              *(_DWORD*)(v635 + 12) = 0;
              *(_OWORD*)(v635 + 24) = v601;
              *(_DWORD*)(v635 + 8) = LANES128(v634).n128_u32[2];
              LANES128(v634).n128_f32[1] = v604 + LANES128(v634).n128_f32[1];
              *(_QWORD*)v635 = LANES128(v634).n128_u64[0];
              v636 = v631 + 1440LL * v633 +
                4LL * *(int*)(v631 + 1440LL * v633 + 256);
              ++*(_DWORD*)(v636 + 260);
            }
            v637 = vaddq_f32(v620, v624);
            v638 = **a1;
            v639 = *(_QWORD*)(v638 + 18736);
            v640 = *(_DWORD*)(v638 + 19200);
            v641 = *(_DWORD*)(v638 + 17280);
            *(_DWORD*)(v638 + 19200) = v640 + 1;
            if (v640 <= 262142) {
              v642 = vaddq_f32(v637, v625);
              v643 = *(_QWORD*)(v638 + 19136) + 40LL * (v640 + 1);
              *(_QWORD*)(v643 + 16) = 0;
              *(_DWORD*)(v643 + 12) = 0;
              *(_OWORD*)(v643 + 24) = v601;
              *(_DWORD*)(v643 + 8) = LANES128(v642).n128_u32[2];
              LANES128(v642).n128_f32[1] = v604 + LANES128(v642).n128_f32[1];
              *(_QWORD*)v643 = LANES128(v642).n128_u64[0];
              v644 = v639 + 1440LL * v641 +
                4LL * *(int*)(v639 + 1440LL * v641 + 256);
              ++*(_DWORD*)(v644 + 260);
            }
            v645 = **a1;
            v646 = *(_QWORD*)(v645 + 18736);
            v647 = *(_DWORD*)(v645 + 19200);
            v648 = *(_DWORD*)(v645 + 17280);
            *(_DWORD*)(v645 + 19200) = v647 + 1;
            if (v647 <= 262142) {
              v649 = vsubq_f32(v637, v625);
              v650 = *(_QWORD*)(v645 + 19136) + 40LL * (v647 + 1);
              *(_QWORD*)(v650 + 16) = 0;
              *(_DWORD*)(v650 + 12) = 0;
              *(_OWORD*)(v650 + 24) = v601;
              *(_DWORD*)(v650 + 8) = LANES128(v649).n128_u32[2];
              LANES128(v649).n128_f32[1] = v604 + LANES128(v649).n128_f32[1];
              *(_QWORD*)v650 = LANES128(v649).n128_u64[0];
              v651 = v646 + 1440LL * v648 +
                4LL * *(int*)(v646 + 1440LL * v648 + 256);
              ++*(_DWORD*)(v651 + 260);
            }
            v1547 = (*v599)[12];
            v1493 =
              COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[0], v12));
            v1483 =
              COERCE_UNSIGNED_INT128(powf(LANES128(v1547).n128_f32[1], v12));
            v652 = powf(LANES128(v1547).n128_f32[2], v12);
            *(_QWORD*)&v653 = __PAIR64__(v1483, v1493);
            v654 = vsubq_f32(v440[2], v59[2]);
            v655 = *v599;
            v656 = LANES128((*v599)[34]).n128_i32[0];
            LANES64(v657).n64_u64[0] = LANES64_OF(
              vqtbl1_s8(v654, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                                         .n64_u64[0];
            LANES64(v658).n64_u64[0] = LANES64_OF(
              vqtbl1_s8(v654, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                                         .n64_u64[0];
            if (v656 > (signed __int32)LANES128((*v599)[36]).n128_u32[0]) {
              v656 += 16;
            }
            LANES128(v659).n128_u64[0] = LANES64_OF(
              vqtbl1_s8(v654, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                           .n64_u64[0];
            DWORD1(v652) = LANES64_OF(vdup_laneq_s32(v1547, 3)).n64_u32[0];
            *(int8x8_t*)&LANES128(v659).n128_i8[8] = v657;
            *((_QWORD*)&v653 + 1) = *(_QWORD*)&v652;
            LANES128(v660).n128_u64[0] = LANES64_OF(
              vqtbl1_s8(v654, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                           .n64_u64[0];
            v661 = LANES128(v655[41]).n128_f32[3] * (float)(v656 + 1);
            v662 = LANES128(v655[10]).n128_f32[0];
            *(int8x8_t*)&LANES128(v660).n128_i8[8] = v658;
            v663 = **a1;
            v664 = vmlsq_f32(vmulq_f32(v1536, v659), v1505, v660);
            v665 = vmulq_f32(v654, v654);
            v666 = *(_QWORD*)(v663 + 18736);
            v667 = *(_DWORD*)(v663 + 19200);
            v668 = *(_DWORD*)(v663 + 17280);
            LANES128(v665).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v665, v665, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v665).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v665).n128_u64[0] = LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v665).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v665).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v665).n128_u64[1] = LANES128(v665).n128_u64[0];
            v669 = vrsqrteq_f32(v665);
            v670 = vmulq_f32(v669, vrsqrtsq_f32(v669, vmulq_f32(v665, v669)));
            v671 = vbicq_s8(
              vmulq_f32(v654,
                vmulq_f32(v670, vrsqrtsq_f32(v670, vmulq_f32(v665, v670)))),
              vceqzq_f32(v665));
            v672 = vmulq_f32(v664, v664);
            v673 = vmulq_n_f32(v671, v662);
            LANES128(v672).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v672, v672, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v672).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v672).n128_u64[0] = LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v672).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v672).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v672).n128_u64[1] = LANES128(v672).n128_u64[0];
            v674 = vrsqrteq_f32(v672);
            v675 = vmulq_f32(v674, vrsqrtsq_f32(v674, vmulq_f32(v672, v674)));
            v676 = vbicq_s8(
              vmulq_f32(v664,
                vmulq_f32(v675, vrsqrtsq_f32(v675, vmulq_f32(v672, v675)))),
              vceqzq_f32(v672));
            v677 = *(float32x4_t*)&v1577[v594];
            *(_DWORD*)(v663 + 19200) = v667 + 1;
            v678 = vmulq_n_f32(v676, v662);
            v679 = vsubq_f32(v677, v673);
            if (v667 <= 262142) {
              v680 = vsubq_f32(v679, v678);
              v681 = *(_QWORD*)(v663 + 19136) + 40LL * (v667 + 1);
              *(_QWORD*)(v681 + 16) = 0;
              *(_DWORD*)(v681 + 12) = 0;
              *(_OWORD*)(v681 + 24) = v653;
              *(_DWORD*)(v681 + 8) = LANES128(v680).n128_u32[2];
              LANES128(v680).n128_f32[1] = v661 + LANES128(v680).n128_f32[1];
              *(_QWORD*)v681 = LANES128(v680).n128_u64[0];
              v682 = v666 + 1440LL * v668 +
                4LL * *(int*)(v666 + 1440LL * v668 + 256);
              ++*(_DWORD*)(v682 + 260);
            }
            v683 = **a1;
            v684 = *(_QWORD*)(v683 + 18736);
            v685 = *(_DWORD*)(v683 + 19200);
            v686 = *(_DWORD*)(v683 + 17280);
            *(_DWORD*)(v683 + 19200) = v685 + 1;
            if (v685 <= 262142) {
              v687 = vaddq_f32(v679, v678);
              v688 = *(_QWORD*)(v683 + 19136) + 40LL * (v685 + 1);
              *(_QWORD*)(v688 + 16) = 0;
              *(_DWORD*)(v688 + 12) = 0;
              *(_OWORD*)(v688 + 24) = v653;
              *(_DWORD*)(v688 + 8) = LANES128(v687).n128_u32[2];
              LANES128(v687).n128_f32[1] = v661 + LANES128(v687).n128_f32[1];
              *(_QWORD*)v688 = LANES128(v687).n128_u64[0];
              v689 = v684 + 1440LL * v686 +
                4LL * *(int*)(v684 + 1440LL * v686 + 256);
              ++*(_DWORD*)(v689 + 260);
            }
            v690 = vaddq_f32(v673, v677);
            v691 = **a1;
            v692 = *(_QWORD*)(v691 + 18736);
            v693 = *(_DWORD*)(v691 + 19200);
            v694 = *(_DWORD*)(v691 + 17280);
            *(_DWORD*)(v691 + 19200) = v693 + 1;
            if (v693 <= 262142) {
              v695 = vaddq_f32(v690, v678);
              v696 = *(_QWORD*)(v691 + 19136) + 40LL * (v693 + 1);
              *(_QWORD*)(v696 + 16) = 0;
              *(_DWORD*)(v696 + 12) = 0;
              *(_OWORD*)(v696 + 24) = v653;
              *(_DWORD*)(v696 + 8) = LANES128(v695).n128_u32[2];
              LANES128(v695).n128_f32[1] = v661 + LANES128(v695).n128_f32[1];
              *(_QWORD*)v696 = LANES128(v695).n128_u64[0];
              v697 = v692 + 1440LL * v694 +
                4LL * *(int*)(v692 + 1440LL * v694 + 256);
              ++*(_DWORD*)(v697 + 260);
            }
            v698 = **a1;
            v699 = *(_QWORD*)(v698 + 18736);
            v700 = *(_DWORD*)(v698 + 19200);
            v701 = *(_DWORD*)(v698 + 17280);
            *(_DWORD*)(v698 + 19200) = v700 + 1;
            if (v700 <= 262142) {
              v702 = vsubq_f32(v690, v678);
              v703 = *(_QWORD*)(v698 + 19136) + 40LL * (v700 + 1);
              *(_QWORD*)(v703 + 16) = 0;
              *(_DWORD*)(v703 + 12) = 0;
              *(_OWORD*)(v703 + 24) = v653;
              *(_DWORD*)(v703 + 8) = LANES128(v702).n128_u32[2];
              LANES128(v702).n128_f32[1] = v661 + LANES128(v702).n128_f32[1];
              *(_QWORD*)v703 = LANES128(v702).n128_u64[0];
              v704 = v699 + 1440LL * v701 +
                4LL * *(int*)(v699 + 1440LL * v701 + 256);
              ++*(_DWORD*)(v704 + 260);
            }
            v705 = *(__int64**)**a1;
            v706 = *v705;
            *((_DWORD*)v705 + 4324) = 1;
            GameRoutine_1994460_alt1(v706);
            v708 = *((float*)a1 + 16);
            v709 = (float32x4_t*)*GameData_2130e00;
            v710 = *(_DWORD*)(*GameData_2130e00 + 572);
            if (v710 > *(_DWORD*)(*GameData_2130e00 + 576)) {
              v710 += 16;
            }
            v711 = *(float*)(*GameData_2130e00 + 668) * (float)(v710 + 1);
            LANES128(v707).n128_f32[0] = LANES128(v709[24]).n128_f32[0] +
              (float)((float)(LANES128(v709[24]).n128_f32[1] -
                        LANES128(v709[24]).n128_f32[0]) *
                v708);
            v712 = v59[2];
            v1547 = v707;
            v713 = vsubq_f32(v440[2], v712);
            v714 = v709[27];
            v715 = vsubq_f32(v709[28], v714);
            v716 = COERCE_FLOAT(HIDWORD(LANES128(v709[27]).n128_u64[0])) +
              vmuls_lane_f32(
                v708, COERCE_AS(float32x2_t, LANES128(v715).n128_u64[0]), 1);
            v717 = COERCE_FLOAT(LANES128(v709[27]).n128_u64[1]) +
              vmuls_lane_f32(v708, v715, 2);
            *(float*)&v1484 =
              LANES128(v714).n128_f32[3] + vmuls_lane_f32(v708, v715, 3);
            v1494 = v713;
            v1475 = COERCE_UNSIGNED_INT128(powf(LANES128(v714).n128_f32[0] +
                (float)(v708 * LANES128(v715).n128_f32[0]),
              v12));
            v1469 = COERCE_UNSIGNED_INT128(powf(v716, v12));
            *(long double*)&v718 = powf(v717, v12);
            *(_QWORD*)&v723 = __PAIR64__(v1469, v1475);
            v719 = **a1;
            v720 = *(_QWORD*)(v719 + 18736);
            v721 = *(_DWORD*)(v719 + 19200);
            v722 = *(_DWORD*)(v719 + 17280);
            *((_QWORD*)&v723 + 1) =
              __PAIR64__(v1484, LANES128(v718).n128_u32[0]);
            LANES128(v718).n128_u64[0] = LANES64_OF(
              vqtbl1_s8(v1494, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                           .n64_u64[0];
            *(int8x8_t*)&LANES128(v718).n128_i8[8] =
              vqtbl1_s8(v1494, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v724).n128_u64[0] = LANES64_OF(
              vqtbl1_s8(v1494, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                           .n64_u64[0];
            *(int8x8_t*)&LANES128(v724).n128_i8[8] =
              vqtbl1_s8(v1494, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            v725 = vmlsq_f32(vmulq_f32(v1536, v718), v1505, v724);
            v726 = vmulq_f32(v1494, v1494);
            LANES128(v726).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v726, v726, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v726).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v726).n128_u64[0] = LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v726).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v726).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v726).n128_u64[1] = LANES128(v726).n128_u64[0];
            v727 = vrsqrteq_f32(v726);
            v728 = vmulq_f32(v727, vrsqrtsq_f32(v727, vmulq_f32(v726, v727)));
            v729 = vbicq_s8(
              vmulq_f32(v1494,
                vmulq_f32(v728, vrsqrtsq_f32(v728, vmulq_f32(v726, v728)))),
              vceqzq_f32(v726));
            v730 = vmulq_f32(v725, v725);
            LANES128(v730).n128_u64[0] = LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                         LANES128_OF(vextq_s8(v730, v730, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v730).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v730).n128_u64[0] = LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v730).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v730).n128_u64[0])))
                                           .n64_u64[0];
            LANES128(v730).n128_u64[1] = LANES128(v730).n128_u64[0];
            v731 = vrsqrteq_f32(v730);
            v732 = vmulq_f32(v731, vrsqrtsq_f32(v731, vmulq_f32(v730, v731)));
            v733 = LANES128(v1547).n128_f32[0];
            v734 = vmulq_n_f32(v729, LANES128(v1547).n128_f32[0]);
            v735 = vbicq_s8(
              vmulq_f32(v725,
                vmulq_f32(v732, vrsqrtsq_f32(v732, vmulq_f32(v730, v732)))),
              vceqzq_f32(v730));
            v736 = *(float32x4_t*)&v1577[v594];
            *(_DWORD*)(v719 + 19200) = v721 + 1;
            v737 = vmulq_n_f32(v735, v733);
            v738 = vsubq_f32(v736, v734);
            if (v721 <= 262142) {
              v739 = vsubq_f32(v738, v737);
              v740 = *(_QWORD*)(v719 + 19136) + 40LL * (v721 + 1);
              *(_QWORD*)(v740 + 16) = 0;
              *(_DWORD*)(v740 + 12) = 0;
              *(_OWORD*)(v740 + 24) = v723;
              *(_DWORD*)(v740 + 8) = LANES128(v739).n128_u32[2];
              LANES128(v739).n128_f32[1] = v711 + LANES128(v739).n128_f32[1];
              *(_QWORD*)v740 = LANES128(v739).n128_u64[0];
              v741 = v720 + 1440LL * v722 +
                4LL * *(int*)(v720 + 1440LL * v722 + 256);
              ++*(_DWORD*)(v741 + 260);
            }
            v742 = **a1;
            v743 = *(_QWORD*)(v742 + 18736);
            v744 = *(_DWORD*)(v742 + 19200);
            v745 = *(_DWORD*)(v742 + 17280);
            *(_DWORD*)(v742 + 19200) = v744 + 1;
            if (v744 <= 262142) {
              v746 = vaddq_f32(v738, v737);
              v747 = *(_QWORD*)(v742 + 19136) + 40LL * (v744 + 1);
              *(_QWORD*)(v747 + 16) = 0;
              *(_DWORD*)(v747 + 12) = 0;
              *(_OWORD*)(v747 + 24) = v723;
              *(_DWORD*)(v747 + 8) = LANES128(v746).n128_u32[2];
              LANES128(v746).n128_f32[1] = v711 + LANES128(v746).n128_f32[1];
              *(_QWORD*)v747 = LANES128(v746).n128_u64[0];
              v748 = v743 + 1440LL * v745 +
                4LL * *(int*)(v743 + 1440LL * v745 + 256);
              ++*(_DWORD*)(v748 + 260);
            }
            v749 = vaddq_f32(v734, v736);
            v750 = **a1;
            v751 = *(_QWORD*)(v750 + 18736);
            v752 = *(_DWORD*)(v750 + 19200);
            v753 = *(_DWORD*)(v750 + 17280);
            *(_DWORD*)(v750 + 19200) = v752 + 1;
            if (v752 <= 262142) {
              v754 = vaddq_f32(v749, v737);
              v755 = *(_QWORD*)(v750 + 19136) + 40LL * (v752 + 1);
              *(_QWORD*)(v755 + 16) = 0;
              *(_DWORD*)(v755 + 12) = 0;
              *(_OWORD*)(v755 + 24) = v723;
              *(_DWORD*)(v755 + 8) = LANES128(v754).n128_u32[2];
              LANES128(v754).n128_f32[1] = v711 + LANES128(v754).n128_f32[1];
              *(_QWORD*)v755 = LANES128(v754).n128_u64[0];
              v756 = v751 + 1440LL * v753 +
                4LL * *(int*)(v751 + 1440LL * v753 + 256);
              ++*(_DWORD*)(v756 + 260);
            }
            v757 = **a1;
            v758 = *(_QWORD*)(v757 + 18736);
            v759 = *(_DWORD*)(v757 + 19200);
            v760 = *(_DWORD*)(v757 + 17280);
            *(_DWORD*)(v757 + 19200) = v759 + 1;
            if (v759 <= 262142) {
              v761 = vsubq_f32(v749, v737);
              v762 = *(_QWORD*)(v757 + 19136) + 40LL * (v759 + 1);
              *(_QWORD*)(v762 + 16) = 0;
              *(_DWORD*)(v762 + 12) = 0;
              *(_OWORD*)(v762 + 24) = v723;
              *(_DWORD*)(v762 + 8) = LANES128(v761).n128_u32[2];
              LANES128(v761).n128_f32[1] = v711 + LANES128(v761).n128_f32[1];
              *(_QWORD*)v762 = LANES128(v761).n128_u64[0];
              v763 = v758 + 1440LL * v760 +
                4LL * *(int*)(v758 + 1440LL * v760 + 256);
              ++*(_DWORD*)(v763 + 260);
            }
            v597 = *(__int64**)**a1;
            v598 = *v597;
            *((_DWORD*)v597 + 4324) = 0;
            GameRoutine_1994460_alt1(v598);
            v594 -= 2;
          } while (v594 != -2);
        LABEL_572:
          GameRoutine_1993840(*(_QWORD*)**a1);
          v1146 = *(__int64**********)**a1;
          *((_DWORD*)v1146 + 4328) = 2;
          v1147 = *v1146;
          *((_DWORD*)v1147 + 4330) = 0;
          v1148 = *v1147;
          *((_DWORD*)v1148 + 4351) = 1;
          v1149 = *v1148;
          *((_OWORD*)v1149 + 1090) = GameData_1a82dd0;
          v1150 = *v1149;
          v1547 = COERCE_AS(int32x4_t, GameData_1a82dd0);
          *((_DWORD*)v1150 + 4333) = 0;
          v1151 = *v1150;
          *((_BYTE*)v1151 + 17395) = 1;
          v1152 = *v1151;
          *((_DWORD*)v1152 + 4324) = 0;
          v1153 = *v1152;
          *((_BYTE*)v1153 + 17394) = 1;
          v1154 = *v1153;
          v1155 = *v1154;
          *((_BYTE*)v1154 + 17393) = 1;
          v1156 =
            *(__int64***)PrimitiveDrawManager_19935e0(v1155, "Arrow", 5, 0);
          *((_BYTE*)v1156 + 17392) = 1;
          v1157 = *v1156;
          v1158 = *v1157;
          *((_DWORD*)v1157 + 4327) = 1;
          GameRoutine_1994460_alt1(v1158);
          v1160 = v1446;
          if (!v593) {
            v1160 = v59[2];
          }
          v1161 = v440[2];
          v1162 = (float32x4_t**)GameData_2130e00;
          LODWORD(v1163) = LANES128_OF(vsubq_f32(v1161, v1160)).n128_u32[0];
          v1164 = vsubq_f32(v1160, v1161);
          if (LANES128(v1164).n128_f32[2] == 0.0) {
            v1165 = 0.0;
            if (v1163 == 0.0) {
              goto LABEL_644;
            }
          }
          if (LANES128(v1164).n128_f32[2] >= 0.0) {
            if (v1163 < 0.0) {
              v1170 = -v1163;
              if (LANES128(v1164).n128_f32[2] < v1170) {
                v1171 = LANES128(v1164).n128_f32[2] / v1170;
                v1172 = v1435;
                v1173 = v1431;
                v1174 = -0x1.921fb60000000p+0;
                goto LABEL_639;
              }
              v1299 = v1170 / LANES128(v1164).n128_f32[2];
              v1165 = -(float)(v1299 *
                (float)((float)((float)(v1428 +
                                  (float)((float)(v1432 +
                                            (float)((float)(v1429 +
                                                      (float)((float)(v1433 +
                                                                (float)((float)(v1430 +
                                                                          (float)((float)(v1434 +
                                                                                    (float)((float)(v1431 +
                                                                                              (float)(v1435 *
                                                                                                (float)(v1299 *
                                                                                                  v1299))) *
                                                                                      (float)(v1299 *
                                                                                        v1299))) *
                                                                            (float)(v1299 *
                                                                              v1299))) *
                                                                  (float)(v1299 *
                                                                    v1299))) *
                                                        (float)(v1299 *
                                                          v1299))) *
                                              (float)(v1299 * v1299))) *
                                    (float)(v1299 * v1299))) *
                          (float)(v1299 * v1299)) +
                  0x1.0000000000000p+0));
              goto LABEL_644;
            }
            if (LANES128(v1164).n128_f32[2] >= v1163) {
              v1300 = v1163 / LANES128(v1164).n128_f32[2];
              v1165 = v1300 *
                (float)((float)((float)(v1428 +
                                  (float)((float)(v1432 +
                                            (float)((float)(v1429 +
                                                      (float)((float)(v1433 +
                                                                (float)((float)(v1430 +
                                                                          (float)((float)(v1434 +
                                                                                    (float)((float)(v1431 +
                                                                                              (float)(v1435 *
                                                                                                (float)(v1300 *
                                                                                                  v1300))) *
                                                                                      (float)(v1300 *
                                                                                        v1300))) *
                                                                            (float)(v1300 *
                                                                              v1300))) *
                                                                  (float)(v1300 *
                                                                    v1300))) *
                                                        (float)(v1300 *
                                                          v1300))) *
                                              (float)(v1300 * v1300))) *
                                    (float)(v1300 * v1300))) *
                          (float)(v1300 * v1300)) +
                  0x1.0000000000000p+0);
              goto LABEL_644;
            }
            v1166 = LANES128(v1164).n128_f32[2] / v1163;
            v1167 = v1435;
            v1168 = v1431;
            v1169 = 0x1.921fb60000000p+0;
          }
          else {
            if (v1163 < 0.0) {
              if (LANES128(v1164).n128_f32[2] > v1163) {
                v1166 = LANES128(v1164).n128_f32[2] / v1163;
                v1167 = v1435;
                v1168 = v1431;
                v1169 = -0x1.921fb60000000p+0;
                goto LABEL_642;
              }
              v1171 = v1163 / LANES128(v1164).n128_f32[2];
              v1172 = v1435;
              v1173 = v1431;
              v1174 = -0x1.921fb60000000p+1;
            LABEL_639:
              v1165 =
                (float)(v1171 *
                  (float)((float)((float)(v1428 +
                                    (float)((float)(v1432 +
                                              (float)((float)(v1429 +
                                                        (float)((float)(v1433 +
                                                                  (float)((float)(v1430 +
                                                                            (float)((float)(v1434 +
                                                                                      (float)((float)(v1173 +
                                                                                                (float)(v1172 *
                                                                                                  (float)(v1171 *
                                                                                                    v1171))) *
                                                                                        (float)(v1171 *
                                                                                          v1171))) *
                                                                              (float)(v1171 *
                                                                                v1171))) *
                                                                    (float)(v1171 *
                                                                      v1171))) *
                                                          (float)(v1171 *
                                                            v1171))) *
                                                (float)(v1171 * v1171))) *
                                      (float)(v1171 * v1171))) *
                            (float)(v1171 * v1171)) +
                    0x1.0000000000000p+0)) +
                v1174;
            LABEL_644:
              if ((atomic_load_explicit(
                     (atomic_uchar* volatile)&GameData_21a55c0,
                     memory_order_acquire) &
                    1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
                v1381 = *(_QWORD*)((char*)((char*)0x20LL) +
                  (_QWORD)GameData_212c2a0 + 8);
                *(_QWORD*)&GameData_21a55a0 =
                  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
                *((_QWORD*)&GameData_21a55a0 + 1) = v1381;
                v1382 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                  (_QWORD)GameData_212c2a0);
                *(_QWORD*)&GameData_21a55b0 =
                  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
                *((_QWORD*)&GameData_21a55b0 + 1) = v1382;
                v1383 = *((_QWORD*)GameData_212c2a0 + 1);
                *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
                *((_QWORD*)&GameData_21a5580 + 1) = v1383;
                v1384 = *(_QWORD*)((char*)((__int128*)0x10LL) +
                  (_QWORD)GameData_212c2a0 + 8);
                *(_QWORD*)&GameData_21a5590 =
                  *(_QWORD*)((char*)((__int128*)0x10LL) +
                    (_QWORD)GameData_212c2a0);
                *((_QWORD*)&GameData_21a5590 + 1) = v1384;
                __cxa_guard_release(&GameData_21a55c0);
              }
              LANES128(v1301).n128_u64[0] = 0;
              LANES128(v1159).n128_u32[0] = LANES128((*v1162)[10]).n128_u32[2];
              LANES128(v1301).n128_u64[1] = LANES128((*v1162)[10]).n128_u32[3];
              v1542 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1159, *(float*)&GameData_21a5580),
                  v1447, *(float32x2_t*)&GameData_21a5580, 1),
                v1301, COERCE_AS(float32x4_t, GameData_21a5580), 2);
              v1518 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1159, *(float*)&GameData_21a5590),
                  v1447, *(float32x2_t*)&GameData_21a5590, 1),
                v1301, COERCE_AS(float32x4_t, GameData_21a5590), 2);
              v1509 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1159, *(float*)&GameData_21a55a0),
                  v1447, *(float32x2_t*)&GameData_21a55a0, 1),
                v1301, COERCE_AS(float32x4_t, GameData_21a55a0), 2);
              v1499 = vaddq_f32(
                vmlaq_laneq_f32(
                  vmlaq_lane_f32(vmulq_n_f32(v1159, *(float*)&GameData_21a55b0),
                    v1447, *(float32x2_t*)&GameData_21a55b0, 1),
                  v1301, COERCE_AS(float32x4_t, GameData_21a55b0), 2),
                COERCE_AS(float32x4_t, 0));
              v1302 = v1165 * -0x1.0000000000000p-1;
              v1303 = cos(v1302);
              v1304 = sin(v1302);
              v1305 = v1303 + v1304 * 0.0;
              *(float*)&v1306 = v1304 * -0.0 + v1303 * 0.0;
              *(float*)&v1304 = v1304 + v1303 * 0.0;
              LANES128(v1307).n128_u64[0] = __PAIR64__(LODWORD(v1304), v1306);
              LANES128(v1307).n128_u64[1] = v1306;
              v1308 = LANES64_OF(
                vqtbl1_s8(v1307, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                        .n64_u64[0];
              LANES128(v1309).n128_u64[0] = LANES64_OF(
                vrev64_s32(COERCE_AS(int32x2_t, LANES128(v1307).n128_u64[0])))
                                              .n64_u64[0];
              LANES128(v1310).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v1307, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                                              .n64_u64[0];
              v1311 = LANES64_OF(
                vqtbl1_s8(v1307, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                        .n64_u64[0];
              LANES128(v1309).n128_u64[1] = v1308;
              LANES128(v1310).n128_u64[1] = v1311;
              v1312 = vmulq_f32(v1309, v1309);
              v1313 = vmulq_f32(v1310, v1310);
              v1587.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                vaddq_f32(vaddq_f32(v1313, v1313), vaddq_f32(v1312, v1312)));
              LANES128(v1312).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v1307, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                                              .n64_u64[0];
              LANES128(v1312).n128_u64[1] = v1308;
              v1314 = vmulq_f32(v1312, v1307);
              v1315 = vaddq_f32(v1314, v1314);
              LANES128(v1312).n128_u64[0] = LANES64_OF(
                vqtbl1_s8(v1307, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                                              .n64_u64[0];
              LANES128(v1312).n128_u64[1] = v1311;
              v1316 = vmulq_n_f32(v1312, v1305);
              v1585.val[1] = vaddq_f32(v1316, v1316);
              v1586.val[0] = vaddq_f32(v1585.val[1], v1315);
              v1586.val[1] = vsubq_f32(v1315, v1585.val[1]);
              LANES128(v1585.val[1]).n128_u64[0] = LANES64_OF(
                vqtbl2_s8(v1586, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                                                     .n64_u64[0];
              LANES128(v1587.val[1]).n128_u64[0] = LANES64_OF(
                vqtbl2_s8(v1586, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                                                     .n64_u64[0];
              *(int8x8_t*)&LANES128(v1585.val[1]).n128_i8[8] =
                vqtbl2_s8(v1586, COERCE_AS(int8x8_t, 0x706050413121110LL));
              *(int8x8_t*)&LANES128(v1587.val[1]).n128_i8[8] =
                vqtbl2_s8(v1586, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
              v1585.val[0] = v1587.val[0];
              LANES128(v1317).n128_u64[0] = LANES64_OF(
                vqtbl2_s8(v1585, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                                              .n64_u64[0];
              *(int8x8_t*)&LANES128(v1317).n128_i8[8] =
                vqtbl2_s8(v1585, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
              LANES128(v1318).n128_u64[0] = LANES64_OF(
                vqtbl2_s8(v1585, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                                              .n64_u64[0];
              *(int8x8_t*)&LANES128(v1318).n128_i8[8] =
                vqtbl2_s8(v1585, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
              v1319 = *v1162;
              LANES128(v1321).n128_u64[0] = LANES64_OF(
                vqtbl2_s8(v1587, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                                              .n64_u64[0];
              v1320 = LANES128((*v1162)[36]).n128_i32[1];
              *(int8x8_t*)&LANES128(v1321).n128_i8[8] =
                vqtbl2_s8(v1587, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
              v1322 = vmulq_n_f32(v1317, LANES128(v1542).n128_f32[0]);
              if (v1320 > (signed __int32)LANES128((*v1162)[36]).n128_u32[0]) {
                v1320 += 16;
              }
              v1323 = vmlaq_laneq_f32(
                vmlaq_lane_f32(v1322, v1318,
                  COERCE_AS(float32x2_t, LANES128(v1542).n128_u64[0]), 1),
                v1321, v1542, 2);
              v1324 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1317, LANES128(v1518).n128_f32[0]),
                  v1318, COERCE_AS(float32x2_t, LANES128(v1518).n128_u64[0]),
                  1),
                v1321, v1518, 2);
              v1325 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1317, LANES128(v1509).n128_f32[0]),
                  v1318, COERCE_AS(float32x2_t, LANES128(v1509).n128_u64[0]),
                  1),
                v1321, v1509, 2);
              v1326 = vaddq_f32(
                vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32(v1317, LANES128(v1499).n128_f32[0]), v1318,
                    COERCE_AS(float32x2_t, LANES128(v1499).n128_u64[0]), 1),
                  v1321, v1499, 2),
                COERCE_AS(float32x4_t, 0LL));
              LODWORD(v1327) = 0;
              *((float*)&v1327 + 1) =
                LANES128(v1319[41]).n128_f32[3] * (float)(v1320 + 1);
              v1328 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1547, LANES128(v1324).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83610),
                  COERCE_AS(float32x2_t, LANES128(v1324).n128_u64[0]), 1),
                COERCE_AS(float32x4_t, GameData_1a83090), v1324, 2);
              v1543 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1547, LANES128(v1323).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83610),
                  COERCE_AS(float32x2_t, LANES128(v1323).n128_u64[0]), 1),
                COERCE_AS(float32x4_t, GameData_1a83090), v1323, 2);
              v1500 = vmlaq_laneq_f32(
                vmlaq_lane_f32(vmulq_n_f32(v1547, LANES128(v1325).n128_f32[0]),
                  COERCE_AS(float32x4_t, GameData_1a83610),
                  COERCE_AS(float32x2_t, LANES128(v1325).n128_u64[0]), 1),
                COERCE_AS(float32x4_t, GameData_1a83090), v1325, 2);
              v1488 = vaddq_f32(
                vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                    vmulq_n_f32(v1547, LANES128(v1326).n128_f32[0]),
                    COERCE_AS(float32x4_t, GameData_1a83610),
                    COERCE_AS(float32x2_t, LANES128(v1326).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v1326, 2),
                vaddq_f32(v440[2], COERCE_AS(float32x4_t, v1327)));
              v1510 =
                vmlaq_f32(vnegq_f32(v1543), COERCE_AS(float32x4_t, 0LL), v1328);
              v1519 = v1328;
              v1547 = v1319[15];
              v1329 = powf(LANES128(v1547).n128_f32[0], v12);
              v1480 = *(float*)&v1329;
              v1330 = powf(LANES128(v1547).n128_f32[1], v12);
              v1331 = *(float*)&v1330;
              v1332 = powf(LANES128(v1547).n128_f32[2], v12);
              v1333 = *(float*)&v1332;
              v1334 = *((float*)a1 + 16);
              v1335 = (*v1162)[27];
              v1336 = vsubq_f32((*v1162)[28], v1335);
              v1337 =
                COERCE_FLOAT(HIDWORD(LANES128((*v1162)[27]).n128_u64[0])) +
                vmuls_lane_f32(v1334,
                  COERCE_AS(float32x2_t, LANES128(v1336).n128_u64[0]), 1);
              v1338 =
                LANES128(v1335).n128_f32[3] + vmuls_lane_f32(v1334, v1336, 3);
              v1339 = COERCE_FLOAT(LANES128((*v1162)[27]).n128_u64[1]) +
                vmuls_lane_f32(v1334, v1336, 2);
              v1340 = powf(LANES128(v1335).n128_f32[0] +
                  (float)(v1334 * LANES128(v1336).n128_f32[0]),
                v12);
              v1341 = *(float*)&v1340;
              v1342 = powf(v1337, v12);
              v1343 = *(float*)&v1342;
              v1344 = powf(v1339, v12);
              *(float*)&v1344 = v1333 + (float)(*(float*)&v1344 * v1338);
              *(float*)&v1349 = v1480 + (float)(v1341 * v1338);
              v1345 = **a1;
              v1346 = *(_QWORD*)(v1345 + 18736);
              *((float*)&v1349 + 1) = v1331 + (float)(v1343 * v1338);
              v1347 = *(_DWORD*)(v1345 + 19200);
              v1348 = *(_DWORD*)(v1345 + 17280);
              DWORD1(v1344) = LANES64_OF(vdup_laneq_s32(v1547, 3)).n64_u32[0];
              *((_QWORD*)&v1349 + 1) = *(_QWORD*)&v1344;
              v1350 = a1[5];
              *(_DWORD*)(v1345 + 19200) = v1347 + 1;
              if (v1347 <= 262142) {
                v1351 = *(_QWORD*)(v1345 + 19136) + 40LL * (v1347 + 1);
                *(_QWORD*)(v1351 + 12) = v1350;
                *(_DWORD*)(v1351 + 20) = 0;
                *(_OWORD*)(v1351 + 24) = v1349;
                v1352 = vaddq_f32(vsubq_f32(v1510, v1500), v1488);
                *(_QWORD*)v1351 = LANES128(v1352).n128_u64[0];
                *(_DWORD*)(v1351 + 8) = LANES128(v1352).n128_u32[2];
                v1353 = v1346 + 1440LL * v1348 +
                  4LL * *(int*)(v1346 + 1440LL * v1348 + 256);
                ++*(_DWORD*)(v1353 + 260);
              }
              v1354 = a1[5];
              v1355 = *((_DWORD*)a1 + 13);
              v19 = 0.25;
              v20 = 3.0;
              v46 = v1468;
              v1356 = **a1;
              v21 = -0x1.0000000000000p-1;
              v1357 = *(_QWORD*)(v1356 + 18736);
              v1358 = *(_DWORD*)(v1356 + 19200);
              v1359 = *(_DWORD*)(v1356 + 17280);
              *(_DWORD*)(v1356 + 19200) = v1358 + 1;
              if (v1358 <= 262142) {
                HIDWORD(v1354) = v1355;
                v1360 = *(_QWORD*)(v1356 + 19136) + 40LL * (v1358 + 1);
                *(_QWORD*)(v1360 + 12) = v1354;
                *(_DWORD*)(v1360 + 20) = 0;
                *(_OWORD*)(v1360 + 24) = v1349;
                v1361 = vaddq_f32(vaddq_f32(v1500, v1510), v1488);
                *(_QWORD*)v1360 = LANES128(v1361).n128_u64[0];
                *(_DWORD*)(v1360 + 8) = LANES128(v1361).n128_u32[2];
                v1362 = v1357 + 1440LL * v1359 +
                  4LL * *(int*)(v1357 + 1440LL * v1359 + 256);
                ++*(_DWORD*)(v1362 + 260);
              }
              v1363 = vmlaq_f32(v1543, COERCE_AS(float32x4_t, 0), v1519);
              v1364 = **a1;
              v1365 = a1[6];
              v1366 = *(_QWORD*)(v1364 + 18736);
              v1367 = *(_DWORD*)(v1364 + 19200);
              v1368 = *(_DWORD*)(v1364 + 17280);
              *(_DWORD*)(v1364 + 19200) = v1367 + 1;
              if (v1367 <= 262142) {
                v1369 = vaddq_f32(vaddq_f32(v1500, v1363), v1488);
                v1370 = *(_QWORD*)(v1364 + 19136) + 40LL * (v1367 + 1);
                *(_QWORD*)(v1370 + 12) = v1365;
                *(_DWORD*)(v1370 + 20) = 0;
                *(_OWORD*)(v1370 + 24) = v1349;
                *(_QWORD*)v1370 = LANES128(v1369).n128_u64[0];
                *(_DWORD*)(v1370 + 8) = LANES128(v1369).n128_u32[2];
                v1371 = v1366 + 1440LL * v1368 +
                  4LL * *(int*)(v1366 + 1440LL * v1368 + 256);
                ++*(_DWORD*)(v1371 + 260);
              }
              v1372 = a1[6];
              v1373 = *((_DWORD*)a1 + 11);
              v1374 = **a1;
              v1375 = *(_QWORD*)(v1374 + 18736);
              v1376 = *(_DWORD*)(v1374 + 19200);
              v1377 = *(_DWORD*)(v1374 + 17280);
              *(_DWORD*)(v1374 + 19200) = v1376 + 1;
              if (v1376 <= 262142) {
                HIDWORD(v1372) = v1373;
                v1378 = vaddq_f32(vsubq_f32(v1363, v1500), v1488);
                v1379 = *(_QWORD*)(v1374 + 19136) + 40LL * (v1376 + 1);
                *(_QWORD*)(v1379 + 12) = v1372;
                *(_DWORD*)(v1379 + 20) = 0;
                *(_OWORD*)(v1379 + 24) = v1349;
                *(_QWORD*)v1379 = LANES128(v1378).n128_u64[0];
                *(_DWORD*)(v1379 + 8) = LANES128(v1378).n128_u32[2];
                v1380 = v1375 + 1440LL * v1377 +
                  4LL * *(int*)(v1375 + 1440LL * v1377 + 256);
                ++*(_DWORD*)(v1380 + 260);
              }
              PrimitiveDrawManager_1994180(*(_QWORD*)**a1);
              goto LABEL_38;
            }
            LANES128(v1164).n128_f32[0] = -LANES128(v1164).n128_f32[2];
            if (v1163 > (float)-LANES128(v1164).n128_f32[2]) {
              v1171 = LANES128(v1164).n128_f32[0] / v1163;
              v1172 = v1435;
              v1173 = v1431;
              v1174 = 0x1.921fb60000000p+0;
              goto LABEL_639;
            }
            v1166 = v1163 / LANES128(v1164).n128_f32[0];
            v1167 = v1435;
            v1168 = v1431;
            v1169 = 0x1.921fb60000000p+1;
          }
        LABEL_642:
          v1165 = v1169 -
            (float)(v1166 *
              (float)((float)((float)(v1428 +
                                (float)((float)(v1432 +
                                          (float)((float)(v1429 +
                                                    (float)((float)(v1433 +
                                                              (float)((float)(v1430 +
                                                                        (float)((float)(v1434 +
                                                                                  (float)((float)(v1168 +
                                                                                            (float)(v1167 *
                                                                                              (float)(v1166 *
                                                                                                v1166))) *
                                                                                    (float)(v1166 *
                                                                                      v1166))) *
                                                                          (float)(v1166 *
                                                                            v1166))) *
                                                                (float)(v1166 *
                                                                  v1166))) *
                                                      (float)(v1166 * v1166))) *
                                            (float)(v1166 * v1166))) *
                                  (float)(v1166 * v1166))) *
                        (float)(v1166 * v1166)) +
                0x1.0000000000000p+0));
          goto LABEL_644;
        }
      LABEL_38:
        if (++v46 == (float32x4_t***)v1520) {
          goto LABEL_31;
        }
      }
    }
  LABEL_24:
    ++v15;
  } while (v15 != v16);
  v1421 = v1572;
  if (v1572 != nullptr) {
    do {
      v1422 = (_QWORD*)*v1421;
      if (*(_QWORD*)(*v17 + 200LL) != 0) {
        v1423 = 128;
      }
      else {
        v1423 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v17 + v1423, (_QWORD)(v1421));
      v1421 = v1422;
    } while (v1422 != nullptr);
  }
LABEL_758:
  v1424 = v1570;
  v1570 = 0;
  if (v1424 != 0) {
    v1425 = 128;
    if (*(_QWORD*)(*v17 + 200LL) == 0) {
      v1425 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v17 + v1425, (_QWORD)(v1424));
  }
  if (v1575 != nullptr) {
    v1426 = *v17;
    v1576 = v1575;
    v1427 = 128;
    if (*(_QWORD*)(v1426 + 200) == 0) {
      v1427 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v1426 + v1427, (_QWORD)(v1575));
  }
}

#pragma GCC visibility pop
