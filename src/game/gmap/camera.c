#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_734a80(_QWORD, _QWORD);
extern __int64 GameData_21f1628;
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
__int64 Camera_1314ca0(__int64 a1);
__int64 Camera_1314db0(__int64 a1);
__int64 Camera_1315450(__int64 result);
bool Camera_1315550();
bool Camera_1315680();
__int64 Camera_13156b0();
__int64 Camera_13156f0();
__int64 Camera_1315960(__int64 a1, long double a2, long double a3);
__int64 Camera_Unknown7(long double a1, long double a2, __int64 a3, __int64 a4);
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    double, float) __asm__("snd_play_ff2d0");
__int64* game_8224a0(unsigned __int8);
__int64 Cursor_734a80(_QWORD, _QWORD);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_112180_alt1(_QWORD, _QWORD) __asm__("GameRoutine_112180");
__int64 GameRoutine_13176d0(__int64, long double, double, long double);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_190240_alt1(_QWORD) __asm__("GameRoutine_190240");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(_QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_get_alt1(_QWORD) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_isValid_alt1(_QWORD) __asm__(
    "snd_fnd_WeakHandle_isValid");
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__int64 snd_stop_ffc40_alt1(__int64*, __int64) __asm__("snd_stop_ffc40");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, long double);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN GameData_1a9e13f;
extern _UNKNOWN GameData_1a9e159;
extern _UNKNOWN GameData_1a9e179;
extern _UNKNOWN GameData_1aa0752;
extern _UNKNOWN GameData_1aa227b;
extern _UNKNOWN GameData_1aa9d02;
extern _UNKNOWN GameData_1ac855b;
extern _UNKNOWN GameData_1ae35ab;
extern _UNKNOWN GameData_1ae737c;
extern _UNKNOWN GameData_1ae9494;
extern _UNKNOWN GameData_1aeec1e;
extern _UNKNOWN GameData_1af2904;
extern _UNKNOWN GameData_1af291e;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212c780;
extern __int64* GameData_212d2f0;
extern __int64* GameData_212e740[2];
extern __int64* GameData_2130df0[3];
extern __int64* GameData_2130df8[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212e438;
extern __int64 GameData_21c96e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float Cursor_734120(int, int, float, float, float, float);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
float Camera_Unknown2_1314240(__int64 a1);
__int64 Camera_Unknown3(__int64 result);
__int64 Camera_1314ec0(__int64 result, __int128* a2, char a3);
float32x4_t* Camera_1314fe0(float32x4_t* result, float32x4_t* a2, __int64 a3,
                            float a4, float a5);
float Camera_1315570(__int64 a1);
__int64 Camera_1315730(__int64 a1);
void Camera_Unknown6(__int64 a1, __int64 a2);
void Camera_Unknown2_1316dc0(__int64 a1, __int64 a2);
__int64 Camera_1317300(__int64 a1, long double a2, double a3, long double a4);
__int64 Camera_1317820(__int64 a1);
__int64 Cursor_734a80_alt1(__int64, __int64*) __asm__("Cursor_734a80");
__int64 GameRoutine_1317f10_alt1(float32x4_t*,
                                 float32x4_t*) __asm__("GameRoutine_1317f10");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 Camera_1317300_alt1(_QWORD, long double) __asm__("Camera_1317300");
__int64 Camera_1317820_alt1(_QWORD) __asm__("Camera_1317820");
__int64 GameRoutine_13176d0_alt1(_QWORD) __asm__("GameRoutine_13176d0");
__int64 game_8224a0_alt1(_QWORD) __asm__("game_8224a0");
__int64 gfx_render_b3aee0(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_startSurroundPan(_QWORD, _QWORD, float);
__int64 wld_a7fda0(_QWORD, _QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1adbf71;
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212d728[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c638;
extern __int64 GameData_2258178;
extern __int64 game_g_game_setting_ptr;
float Camera_1315570_alt1(__int64, double, double,
                          long double) __asm__("Camera_1315570");
float Cursor_734120_alt1(_QWORD, _QWORD, float, float,
                         long double) __asm__("Cursor_734120");
__int64 Camera_1315b10(__int64 a1, long double a2);

float Camera_Unknown2_1314240(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
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
  float v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  long double v31;
  long double v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  long double v38;
  long double v39;
  __int64 v40;
  __int64 v41;
  long double v42;
  long double v43;
  __int64 v44;
  __int64 v45;
  long double v46;
  long double v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  long double v54;
  long double v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  float v60;
  float v61;
  float v62;
  float v63;
  __int64 v64;
  __int128 v65;
  float v66;
  float result;
  struct {
    __int64 v68;
    __int64 v69;
  } v68_;
  int v70;

  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 976, 16, 0),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 8) = &GameData_1af2904;
  *(_QWORD*)v2 = game_HashString_alt1((__int64)&GameData_1af2904),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 24) = &GameData_1a9e13f;
  *(_QWORD*)(v2 + 16) = game_HashString_alt1((__int64)&GameData_1a9e13f),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 40) = &GameData_1aa9d02;
  *(_QWORD*)(v2 + 32) = game_HashString_alt1((__int64)&GameData_1aa9d02),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 56) = &GameData_1ae737c;
  *(_QWORD*)(v2 + 48) = game_HashString_alt1((__int64)&GameData_1ae737c),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 72) = &GameData_1af291e;
  *(_QWORD*)(v2 + 64) = game_HashString_alt1((__int64)&GameData_1af291e),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 88) = &GameData_1ae35ab;
  *(_QWORD*)(v2 + 80) = game_HashString_alt1((__int64)&GameData_1ae35ab),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 104) = &GameData_1ac855b;
  *(_QWORD*)(v2 + 96) = game_HashString_alt1((__int64)&GameData_1ac855b),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 120) = &GameData_1a9e159;
  *(_QWORD*)(v2 + 112) = game_HashString_alt1((__int64)&GameData_1a9e159),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 136) = &GameData_1aa227b;
  *(_QWORD*)(v2 + 128) = game_HashString_alt1((__int64)&GameData_1aa227b),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 152) = &GameData_1aeec1e;
  *(_QWORD*)(v2 + 144) = game_HashString_alt1((__int64)&GameData_1aeec1e),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v2 + 168) = &GameData_1a9e179;
  *(_QWORD*)(v2 + 160) = game_HashString_alt1((__int64)&GameData_1a9e179),
                  v31 = COERCE_AS(__typeof__(v31),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v38 = COERCE_AS(__typeof__(v38),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v42 = COERCE_AS(__typeof__(v42),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v46 = COERCE_AS(__typeof__(v46),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v54 = COERCE_AS(__typeof__(v54),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = 0x0.0p+0f;
  *(_QWORD*)(v2 + 256) = 1065353216;
  v4 = GameData_212c2a0;
  *(_QWORD*)(v2 + 272) = 0x4248000041D80000LL;
  *(_QWORD*)(v2 + 280) = 0x41C0000042100000LL;
  *(_QWORD*)(v2 + 312) = 1092616192;
  *(_QWORD*)(v2 + 288) = 0x4110000041800000LL;
  v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8);
  *(_QWORD*)(v2 + 352) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4);
  *(_QWORD*)(v2 + 360) = v5;
  v6 = v4[1];
  *(_QWORD*)(v2 + 336) = *v4;
  *(_QWORD*)(v2 + 344) = v6;
  v7 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v4);
  *(_QWORD*)(v2 + 384) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v4);
  *(_QWORD*)(v2 + 392) = v7;
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4 + 8);
  *(_QWORD*)(v2 + 368) = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4);
  *(_QWORD*)(v2 + 376) = v8;
  v9 = (__int64*)GameData_212c2b0;
  *(_DWORD*)(v2 + 264) = 0;
  *(_DWORD*)(v2 + 296) = 0;
  *(_DWORD*)(v2 + 320) = 0;
  *(_QWORD*)(v2 + 560) = 0;
  *(_QWORD*)(v2 + 552) = 0;
  *(_QWORD*)(v2 + 544) = 0;
  *(_QWORD*)(v2 + 536) = 0;
  *(_QWORD*)(v2 + 528) = 0;
  v10 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9);
  v12 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9);
  v11 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
  v14 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9);
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v9);
  v16 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9);
  v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9 + 8);
  v17 = *v9;
  *(_QWORD*)(v2 + 416) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 8);
  *(_QWORD*)(v2 + 424) = v11;
  v18 = *v9;
  v19 = v9[1];
  *(_QWORD*)(v2 + 464) = v17;
  *(_QWORD*)(v2 + 472) = v10;
  *(_QWORD*)(v2 + 496) = v16;
  *(_QWORD*)(v2 + 400) = v18;
  *(_QWORD*)(v2 + 408) = v19;
  v20 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v9);
  *(_QWORD*)(v2 + 448) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9);
  *(_QWORD*)(v2 + 456) = v13;
  v22 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 16);
  v23 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v9);
  *(_QWORD*)(v2 + 504) = v20;
  *(_QWORD*)(v2 + 512) = v14;
  *(_QWORD*)(v2 + 432) = v21;
  *(_QWORD*)(v2 + 440) = v15;
  *(_QWORD*)(v2 + 480) = v12;
  *(_QWORD*)(v2 + 488) = v22;
  *(_QWORD*)(v2 + 520) = v23;
  *(_BYTE*)(v2 + 308) = 1;
  *(_OWORD*)(v2 + 192) = GameData_1a83090;
  *(_OWORD*)(v2 + 208) = (__typeof__(*(_OWORD*)(v2 + 208))){0};
  v24 = 0x0.0p+0f;
  *(_OWORD*)(v2 + 224) = GameData_1a83610;
  *(_OWORD*)(v2 + 240) = (__typeof__(*(_OWORD*)(v2 + 240))){0};
  v25 = GameData_212e438;
  *(_BYTE*)(v2 + 309) = 1;
  *(_QWORD*)(v2 + 592) = 0;
  *(_QWORD*)(v2 + 584) = 0;
  *(_WORD*)(v2 + 600) = 1;
  *(_QWORD*)(v2 + 176) = v25 + 16;
  *(_QWORD*)(v2 + 300) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(v2 + 568) = 1023;
  *(_QWORD*)(v2 + 536) = 1023;
  v26 = GameData_2130df0[0];
  *(_QWORD*)(v2 + 632) = 0;
  *(_QWORD*)(v2 + 624) = 0;
  *(_WORD*)(v2 + 640) = 1;
  *(_QWORD*)(v2 + 672) = 0;
  *(_QWORD*)(v2 + 664) = 0;
  *(_WORD*)(v2 + 680) = 1;
  *(_QWORD*)(v2 + 712) = 0;
  *(_QWORD*)(v2 + 704) = 0;
  *(_WORD*)(v2 + 720) = 1;
  *(_QWORD*)(v2 + 752) = 0;
  *(_QWORD*)(v2 + 744) = 0;
  *(_WORD*)(v2 + 760) = 1;
  *(_QWORD*)(v2 + 800) = 0;
  *(_QWORD*)(v2 + 792) = 0;
  *(_WORD*)(v2 + 808) = 1;
  *(_QWORD*)(v2 + 840) = 0;
  *(_QWORD*)(v2 + 832) = 0;
  *(_QWORD*)(v2 + 824) = 0;
  *(_QWORD*)(v2 + 816) = 0;
  v26 += 2;
  *(_QWORD*)(v2 + 576) = v26;
  *(_QWORD*)(v2 + 616) = v26;
  *(_QWORD*)(v2 + 656) = v26;
  *(_QWORD*)(v2 + 696) = v26;
  *(_QWORD*)(v2 + 736) = v26;
  v27 = GameData_2130df8[0];
  *(_QWORD*)(v2 + 872) = 0;
  *(_QWORD*)(v2 + 864) = 0;
  *(_QWORD*)(v2 + 856) = 0;
  *(_QWORD*)(v2 + 848) = 0;
  *(_QWORD*)(v2 + 896) = 0;
  *(_QWORD*)(v2 + 888) = 0;
  *(_QWORD*)(v2 + 784) = v27 + 2;
  *(_DWORD*)(v2 + 904) = 0x2000;
  v28 = GameData_212d2f0;
  *(_DWORD*)(v2 + 920) = 0;
  *(_DWORD*)(v2 + 956) = 0;
  *(_QWORD*)(v2 + 184) = 2;
  *(_DWORD*)(v2 + 268) = 0;
  *(_QWORD*)(v2 + 912) = v28 + 2;
  if (game_GameModeData_instance_ != 0) {
    v29 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(v2 + 128)),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v24 = 0x0.0p+0f;
    if (v29 != 0) {
      v24 = (float)*(int*)(v29 + 32);
    }
  }
  v30 = *(_QWORD*)(v2 + 8);
  *(float*)(v2 + 272) = v24;
  *(_DWORD*)(v2 + 268) = 0;
  *(_QWORD*)(v2 + 592) = 0x500000002LL;
  v68_.v69 = v30;
  v68_.v68 = game_HashString_alt1(v30),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_GameModeData_instance_ != 0) {
    v33 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v68_.v68),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v33 != 0) {
      v3 = (float)*(int*)(v33 + 32);
    }
  }
  v34 = *(unsigned __int8*)(v2 + 600);
  v35 = v2 + 576;
  *(float*)&v68_.v68 = v3;
  if (v34 == 1) {
    v36 = *(_QWORD*)v35;
    v37 = v2 + 576;
    *(float*)&v31 = v3;
  LABEL_11:
    *(float*)&v32 = v3;
  LABEL_12:
    (*(void (**)(__int64, long double, long double))(v36 + 24))(v37, v31, v32),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(v2 + 584) = 0;
    *(_WORD*)(v2 + 600) = 256;
    goto LABEL_13;
  }
  if (*(float*)(v2 + 584) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v2 + 576),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v36 = *(_QWORD*)v35;
    v37 = v2 + 576;
    goto LABEL_11;
  }
  if (((*(__int64 (**)(__int64, __int64*, __int64))(
           *(_QWORD*)(v2 + 576) + 8LL))(v2 + 576, &v68_.v68, v2 + 608) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v2 + 576),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v36 = *(_QWORD*)v35;
    LODWORD(v32) = v68_.v68;
    v37 = v2 + 576;
    goto LABEL_12;
  }
LABEL_13:
  v40 = v2 + 616;
  LODWORD(v68_.v68) = 0;
  *(_QWORD*)(v2 + 632) = 0x500000002LL;
  if (*(_BYTE*)(v2 + 640) == 1) {
    v41 = *(_QWORD*)v40;
    *(_QWORD*)&v38 = 0;
  LABEL_17:
    *(_QWORD*)&v39 = 0;
  LABEL_18:
    (*(void (**)(__int64, long double, long double))(v41 + 24))(v2 + 616, v38,
                                                                v39),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(v2 + 624) = 0;
    *(_WORD*)(v2 + 640) = 256;
    goto LABEL_19;
  }
  if (*(float*)(v2 + 624) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v2 + 616),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v41 = *(_QWORD*)v40;
    goto LABEL_17;
  }
  if (((*(__int64 (**)(__int64, __int64*, __int64))(
           *(_QWORD*)(v2 + 616) + 8LL))(v2 + 616, &v68_.v68, v2 + 648) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v2 + 616),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v41 = *(_QWORD*)v40;
    LODWORD(v39) = v68_.v68;
    goto LABEL_18;
  }
LABEL_19:
  v44 = v2 + 696;
  *(_DWORD*)(v2 + 712) = 0;
  *(_QWORD*)(v2 + 672) = 0x500000002LL;
  LODWORD(v68_.v68) = 1065353216;
  if (*(_BYTE*)(v2 + 720) == 1) {
    v45 = *(_QWORD*)v44;
    LODWORD(v42) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LABEL_23:
    LODWORD(v43) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LABEL_24:
    (*(void (**)(__int64, long double, long double))(v45 + 24))(v2 + 696, v42,
                                                                v43),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(v2 + 704) = 0;
    *(_WORD*)(v2 + 720) = 256;
    goto LABEL_25;
  }
  if (*(float*)(v2 + 704) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v2 + 696),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v45 = *(_QWORD*)v44;
    goto LABEL_23;
  }
  if (((*(__int64 (**)(__int64, __int64*, __int64))(
           *(_QWORD*)(v2 + 696) + 8LL))(v2 + 696, &v68_.v68, v2 + 728) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v2 + 696),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v45 = *(_QWORD*)v44;
    LODWORD(v43) = v68_.v68;
    goto LABEL_24;
  }
LABEL_25:
  v48 = v2 + 656;
  *(_QWORD*)(v2 + 800) = 0x500000002LL;
  LODWORD(v68_.v68) = 1065353216;
  if (*(_BYTE*)(v2 + 680) == 1) {
    v49 = *(_QWORD*)v48;
    LODWORD(v46) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LABEL_29:
    LODWORD(v47) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  LABEL_30:
    (*(void (**)(__int64, long double, long double))(v49 + 24))(v2 + 656, v46,
                                                                v47),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(v2 + 664) = 0;
    *(_WORD*)(v2 + 680) = 256;
    goto LABEL_31;
  }
  if (*(float*)(v2 + 664) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v2 + 656),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v49 = *(_QWORD*)v48;
    goto LABEL_29;
  }
  if (((*(__int64 (**)(__int64, __int64*, __int64))(
           *(_QWORD*)(v2 + 656) + 8LL))(v2 + 656, &v68_.v68, v2 + 688) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v2 + 656),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v49 = *(_QWORD*)v48;
    LODWORD(v47) = v68_.v68;
    goto LABEL_30;
  }
LABEL_31:
  v50 = v2 + 736;
  v51 = *(_QWORD*)(*GameData_212d708 + 16);
  v53 = *(_QWORD*)(v51 + 80);
  v52 = *(_QWORD*)(v51 + 88);
  v68_.v68 = v53;
  v68_.v69 = v52;
  Cursor_734a80_alt1(v2 + 784, &v68_.v68),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_WORD*)(v2 + 964) = 0;
  *(_BYTE*)(v2 + 966) = 0;
  v70 = 0;
  *(_DWORD*)(v2 + 960) = 1;
  *(_QWORD*)(v2 + 752) = 0x400000001LL;
  if (*(_BYTE*)(v2 + 760) == 1) {
    v56 = *(_QWORD*)v50;
    *(_QWORD*)&v54 = 0;
  LABEL_35:
    *(_QWORD*)&v55 = 0;
  LABEL_36:
    (*(void (**)(__int64, long double, long double))(v56 + 24))(v2 + 736, v54,
                                                                v55),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(v2 + 744) = 0;
    *(_WORD*)(v2 + 760) = 256;
    goto LABEL_37;
  }
  if (*(float*)(v2 + 744) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v2 + 736),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v56 = *(_QWORD*)v50;
    goto LABEL_35;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(v2 + 736) + 8LL))(
           v2 + 736, &v70, v2 + 768) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v2 + 736),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v42 = COERCE_AS(__typeof__(v42), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v46 = COERCE_AS(__typeof__(v46), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v56 = *(_QWORD*)v50;
    LODWORD(v55) = v70;
    goto LABEL_36;
  }
LABEL_37:
  *(_QWORD*)(v2 + 948) = 0;
  v57 = *(_QWORD*)(*GameData_212c780 + 8);
  v58 = *(__int64**)(v57 + 48);
  v59 = *(__int64**)(v57 + 56);
  if (v58 == v59) {
    v63 = 0x0.0p+0f;
    v62 = 0x0.0p+0f;
    v61 = 0x0.0p+0f;
    v60 = 0x0.0p+0f;
  }
  else {
    v60 = 0x0.0p+0f;
    v61 = 0x0.0p+0f;
    v62 = 0x0.0p+0f;
    v63 = 0x0.0p+0f;
    do {
      v64 = *v58++;
      v65 = *(_OWORD*)(v64 + 32);
      if (*(float*)&v65 < v60) {
        v60 = *(float*)&v65;
      }
      if (*(float*)&v65 > v63) {
        v63 = *(float*)&v65;
      }
      if (*((float*)&v65 + 2) < v61) {
        v61 = *((float*)&v65 + 2);
      }
      if (*((float*)&v65 + 2) > v62) {
        v62 = *((float*)&v65 + 2);
      }
    } while (v58 != v59);
  }
  *(_DWORD*)(v2 + 944) = 0;
  *(_QWORD*)(a1 + 16) = v2;
  *(float*)(v2 + 928) = (float)(v63 + v60) * 0x1.0000000000000p-1f;
  *(float*)(v2 + 936) = (float)(v63 - v60) + 0x1.9000000000000p+6f;
  v66 = (float)(v62 + v61) * 0x1.0000000000000p-1f;
  result = (float)(v62 - v61) + 0x1.9000000000000p+6f;
  *(float*)(v2 + 940) = result;
  *(float*)(v2 + 932) = v66;
  return result;
}

__int64 Camera_Unknown3(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int8x16_t v3;
  __int64 v4;
  int8x16_t v5;
  __int64 v6;
  int8x16_t v7;
  int8x16_t v8;
  int8x16_t v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int8x16_t v24;
  int8x16_t v25;
  __int64 v26;
  void* v27;

  v1 = *(_QWORD*)(result + 16);
  if (v1 == 0) {
    return result;
  }
  *(_DWORD*)(v1 + 948) = 0;
  v27 = &GameData_1aa0752;
  v2 = game_HashString(&GameData_1aa0752);
  LANES128(v3).n128_u64[0] = 0;
  v26 = v2;
  v24 = v3;
  LANES128(v3).n128_u64[0] = 0;
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    LANES128(v3).n128_u64[0] = 0;
    if (v4 != 0) {
      LANES128(v3).n128_f32[0] = (float)*(int*)(v4 + 32);
    }
  }
  v25 = v3;
  v27 = &GameData_1ae9494;
  v26 = game_HashString(&GameData_1ae9494);
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v6 != 0) {
      LANES128(v7).n128_f32[0] = (float)*(int*)(v6 + 32);
      v24 = v7;
    }
  }
  LANES128(v8).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v8).n128_u64[1] = 0x8000000080000000LL;
  LANES128(v5).n128_u64[0] = 0;
  v9 = vbslq_s8(v8, v5, v25);
  v10 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v11 = LANES128(v9).n128_f32[0] * 4.0;
  v12 = *(_QWORD*)(v10 + 48);
  v13 = *(_QWORD*)(v10 + 56);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    v14 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 168LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
      LANES128(v8).n128_u64[0] = 0x8000000080000000LL;
      LANES128(v8).n128_u64[1] = 0x8000000080000000LL;
      LANES128(v5).n128_u64[0] = 0;
    }
    if (v11 > 0.0) {
      goto LABEL_12;
    }
  LABEL_15:
    if (*(_BYTE*)(v14 + 96) == 1) {
      *(_BYTE*)(v14 + 96) = 0;
    }
    goto LABEL_17;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(v12 + 8) + 168LL);
  if (v11 <= 0.0) {
    goto LABEL_15;
  }
LABEL_12:
  *(_BYTE*)(v14 + 96) = 1;
  v9 = vbslq_s8(v8, v5, v24);
  v15 = (int)(float)((float)(LANES128(v9).n128_f32[0] * 4.0) + 0.0);
  *(float*)(v14 + 92) = v11 + 0.0;
  if (v15 >= 1) {
    *(_DWORD*)(v14 + 172) = v15;
    *(_BYTE*)(v14 + 176) = 1;
  }
LABEL_17:
  LANES128(v9).n128_u64[0] = 0;
  *(__n128*)&v16 = snd_Fade_Fade_10c830(&v26, *(long double*)&v9);
  snd_stop_ffc40(v1 + 896, &v26, v16);
  snd_Fade_Destroy_Fade(&v26);
  v17 = *(_QWORD*)(v1 + 544);
  *(_QWORD*)(v1 + 176) = GameData_212e740[0] + 2;
  v18 = fw_memory_g_heap_manager_ptr;
  if (v17 != 0) {
    v19 = *(_QWORD*)(v1 + 552);
    if (v17 == v19) {
      goto LABEL_24;
    }
    do {
      v20 = *(_QWORD*)(v19 - 8);
      *(_QWORD*)(v19 - 8) = 0;
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
      }
      v19 -= 24;
    } while (v19 != v17);
    v21 = *(_QWORD*)(v1 + 544);
    *(_QWORD*)(v1 + 552) = v17;
    if (v21 != 0) {
    LABEL_24:
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v22, (_QWORD)(v17));
    }
  }
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
    v23 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v23, (_QWORD)(v1));
}

__int64 Camera_1314ca0(__int64 a1)
{
  float v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  int v7;
  float v8;

  v2 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 656) + 16LL))(a1 + 656);
  v3 = *(unsigned __int8*)(a1 + 720);
  v8 = v2;
  if (v3 == 1) {
    v4 = *(_QWORD*)(a1 + 696);
    v5 = a1 + 696;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(v4 + 24))(v5);
    *(_QWORD*)(a1 + 704) = 0;
    *(_WORD*)(a1 + 720) = 256;
    goto LABEL_6;
  }
  if (*(float*)(a1 + 704) > 0.0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 696) + 16LL))(a1 + 696);
    v4 = *(_QWORD*)(a1 + 696);
    v5 = a1 + 696;
    goto LABEL_5;
  }
  result = (*(__int64 (**)(__int64, float*, __int64))(
      *(_QWORD*)(a1 + 696) + 8LL))(a1 + 696, &v8, a1 + 728);
  if ((result & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 696) + 16LL))(a1 + 696);
    v4 = *(_QWORD*)(a1 + 696);
    v5 = a1 + 696;
    goto LABEL_5;
  }

LABEL_6:
  *(_BYTE*)(a1 + 964) = 1;
  *(_DWORD*)(a1 + 960) = 3;
  v7 = *(_DWORD*)(a1 + 920);
  *(_DWORD*)(a1 + 920) = v7 + 1;
  if (v7 == 0) {
    return (**(__int64 (***)(__int64))(a1 + 912))(a1 + 912);
  }
  return result;
}

__int64 Camera_1314db0(__int64 a1)
{
  int v2;
  float v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  float v8;

  v2 = *(_DWORD*)(a1 + 920) - 1;
  *(_DWORD*)(a1 + 920) = v2;
  if (v2 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 912) + 8LL))(a1 + 912);
  }
  v3 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 696) + 16LL))(a1 + 696);
  v4 = *(unsigned __int8*)(a1 + 680);
  v8 = v3;
  if (v4 == 1) {
    v5 = *(_QWORD*)(a1 + 656);
    v6 = a1 + 656;
  }
  else if (*(float*)(a1 + 664) <= 0.0) {
    result = (*(__int64 (**)(__int64, float*, __int64))(
        *(_QWORD*)(a1 + 656) + 8LL))(a1 + 656, &v8, a1 + 688);
    if ((result & 1) == 0) {
      goto LABEL_8;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 656) + 16LL))(a1 + 656);
    v5 = *(_QWORD*)(a1 + 656);
    v6 = a1 + 656;
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 656) + 16LL))(a1 + 656);
    v5 = *(_QWORD*)(a1 + 656);
    v6 = a1 + 656;
  }
  result = (*(__int64 (**)(__int64))(v5 + 24))(v6);
  *(_QWORD*)(a1 + 664) = 0;
  *(_WORD*)(a1 + 680) = 256;

LABEL_8:
  *(_BYTE*)(a1 + 964) = 0;
  *(_DWORD*)(a1 + 960) = 1;
  return result;
}

__int64 Camera_1314ec0(__int64 result, __int128* a2, char a3)
{

#pragma clang fp contract(off)
  __int128 v3;
  float v4;
  __int64 v5;
  int v6;
  float v7;
  int v8;
  __int64 v9;
  __int128 v10;
  __int128 v11;
  __int128 v12;

  if ((*(_BYTE*)(result + 966) & 1) == 0) {
    v3 = *a2;
    v4 = 0x0.0p+0f;
    v5 = result;
    if ((a3 & 1) == 0) {
      v6 = *(_DWORD*)(result + 960);
      v7 = 0x1.3333340000000p-3f;
      if (v6 != 2) {
        v7 = 0x1.8000000000000p-1f;
      }
      if (v6 == 3) {
        v4 = 0x0.0p+0f;
      }
      else {
        v4 = v7;
      }
    }
    v8 = *(unsigned __int8*)(result + 808);
    v10 = *a2;
    if (v8 == 1) {
      v9 = *(_QWORD*)(result + 784);
      v12 = v3;
      v11 = v3;
      result = (*(__int64 (**)(__int64, __int128*, __int128*))(v9 + 24))(
          result + 784, &v12, &v11);
      *(_DWORD*)(v5 + 792) = 0;
    LABEL_13:
      *(_DWORD*)(v5 + 796) = 0;
      *(_WORD*)(v5 + 808) = 256;
      return result;
    }
    if (v4 < *(float*)(result + 792) ||
        ((result = (*(__int64 (**)(__int64, __int128*, __int64))(
              *(_QWORD*)(result + 784) + 8LL))(result + 784, &v10,
                                               result + 832)) &
         1) != 0) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v5 + 784) + 16LL))((void*)(&v12), v5 + 784);
      v11 = v10;
      result = (*(__int64 (**)(__int64, __int128*, __int128*))(
          *(_QWORD*)(v5 + 784) + 24LL))(v5 + 784, &v12, &v11);
      *(float*)(v5 + 792) = v4;
      goto LABEL_13;
    }
  }
  return result;
}

float32x4_t* Camera_1314fe0(float32x4_t* result, float32x4_t* a2, __int64 a3,
                            float a4, float a5)
{
  float32x4_t v5;
  __int64 v6;
  float32x4_t v7;
  int8x16_t v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int128 v13;
  __int128 v14;

  v5 = *result;
  v6 = *(_QWORD*)(GameData_21f1628 + 16);
  if ((a3 & 0x100000000LL) != 0) {
    v12 = *(float*)&a3 * 0x1.e000000000000p+5f;
  }
  else {
    v7 = vsubq_f32(*a2, v5);
    v8 = vmulq_f32(v7, v7);
    LANES128(v8).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
            .n64_u64[0];
    v9 = LANES64_OF(vsqrt_f32(vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]))))
             .n64_f32[0] /
         0x1.9000000000000p+9f;
    v10 = 1.0f;
    if (v9 <= 1.0f) {
      v10 = v9;
    }
    v11 = (float)(v10 * 0x1.e000000000000p+6f) + 0x1.e000000000000p+5f;
    if (v9 >= 0.0f) {
      v12 = v11;
    }
    else {
      v12 = 0x1.e000000000000p+5f;
    }
  }
  *(_DWORD*)(v6 + 848) = LANES128(v5).n128_u32[0];
  *(_DWORD*)(v6 + 852) = LANES128(*(result)).n128_u32[1];
  v13 = *(_OWORD*)(v6 + 848);
  *((_QWORD*)&v13 + 1) = LANES128(*(result)).n128_u32[2];
  *(_OWORD*)(v6 + 848) = v13;
  *(_DWORD*)(v6 + 864) = LANES128(*(a2)).n128_u32[0];
  *(_DWORD*)(v6 + 868) = LANES128(*(a2)).n128_u32[1];
  v14 = *(_OWORD*)(v6 + 864);
  DWORD2(v14) = LANES128(*(a2)).n128_u32[2];
  *(float*)(v6 + 880) = a4;
  *(float*)(v6 + 884) = a5;
  *(float*)(v6 + 956) = v12;
  *(_DWORD*)(v6 + 944) = 0;
  *((_QWORD*)&v14 + 1) = DWORD2(v14);
  *(_OWORD*)(v6 + 864) = v14;
  return result;
}

__int64 Camera_1315450(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v4;
  long double v5;
  long double v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;

  if (*(float*)(result + 956) > 0x0.0p+0f) {
    v4 = result;
    GameRoutine_1317f10_alt1(*(float32x4_t**)(*GameData_212d708 + 16),
                             (float32x4_t*)(result + 864));
    LODWORD(v6) = *(_DWORD*)(v4 + 884);
    v7 = *(unsigned __int8*)(v4 + 720);
    v11 = LODWORD(v6);
    if (v7 == 1) {
      v8 = *(_QWORD*)(v4 + 696);
      v9 = v4 + 696;
      LODWORD(v5) = LODWORD(v6);
    }
    else if (*(float*)(v4 + 704) <= 0x0.0p+0f) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(v4 + 696) + 8LL))(v4 + 696, &v11, v4 + 728);
      if ((result & 1) == 0) {
      LABEL_9:
        *(_DWORD*)(v4 + 944) = 0;
        *(_DWORD*)(v4 + 956) = 0;
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 696) + 16LL))(v4 + 696);
      v8 = *(_QWORD*)(v4 + 696);
      LODWORD(v5) = v11;
      v9 = v4 + 696;
    }
    else {
      v10 = LODWORD(v6);
      (*(void (**)(__int64))(*(_QWORD*)(v4 + 696) + 16LL))(v4 + 696);
      v8 = *(_QWORD*)(v4 + 696);
      v9 = v4 + 696;
      LODWORD(v5) = v10;
    }
    result = (*(__int64 (**)(__int64, long double, long double))(v8 + 24))(
        v9, v6, v5);
    *(_QWORD*)(v4 + 704) = 0;
    *(_WORD*)(v4 + 720) = 256;
    goto LABEL_9;
  }
  return result;
}

bool Camera_1315550()
{
  return *(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 888LL) > 0.0;
}

float Camera_1315570(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  float v3;
  float v5;
  float v6;
  __int64 v7;
  __int64 v8;
  float v9;
  float v10;
  float v11;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  v1 = *(float*)(a1 + 628);
  v2 = *(float*)(a1 + 624);
  v3 = *(float*)(a1 + 648);
  if (v1 < v2) {
    v3 = Cursor_734120(*(_DWORD*)(a1 + 632), *(_DWORD*)(a1 + 636),
                       *(float*)(a1 + 644), v3, v1, v2);
  }
  v13_.v14 = *(_QWORD*)(a1 + 120);
  v5 = 0x0.0p+0f;
  v6 = 0x0.0p+0f;
  v13_.v13 = game_HashString_alt1(v13_.v14);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v13_.v13);
    if (v7 != 0) {
      v6 = (float)*(int*)(v7 + 32);
    }
  }
  v13_.v14 = *(_QWORD*)(a1 + 104);
  v13_.v13 = game_HashString_alt1(v13_.v14);
  if (game_GameModeData_instance_ != 0) {
    v8 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v13_.v13);
    if (v8 != 0) {
      v5 = (float)*(int*)(v8 + 32);
    }
  }
  v9 = *(float*)(a1 + 668);
  v10 = *(float*)(a1 + 664);
  v11 = *(float*)(a1 + 688);
  if (v9 < v10) {
    v11 = Cursor_734120(*(_DWORD*)(a1 + 672), *(_DWORD*)(a1 + 676),
                        *(float*)(a1 + 684), v11, v9, v10);
  }
  return v3 * (float)(v6 + (float)((float)(v5 - v6) * v11));
}

bool Camera_1315680()
{
  return *(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 796LL) !=
         *(float*)(*(_QWORD*)(GameData_21f1628 + 16) + 792LL);
}

__int64 Camera_13156b0()
{
  __int64 v0;
  int v1;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21f1628 + 16);
  v1 = *(_DWORD*)(v0 + 920);
  *(_DWORD*)(v0 + 920) = v1 + 1;
  if (v1 == 0) {
    return (**(__int64 (***)(__int64))(v0 + 912))(v0 + 912);
  }
  return result;
}

__int64 Camera_13156f0()
{
  __int64 v0;
  int v1;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21f1628 + 16);
  v1 = *(_DWORD*)(v0 + 920) - 1;
  *(_DWORD*)(v0 + 920) = v1;
  if (v1 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(v0 + 912) + 8LL))(v0 + 912);
  }
  return result;
}

__int64 Camera_1315730(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v2;
  __int128 v3;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  int v10;
  __int64* v11;
  __int128 v12;
  __int64 v13;
  long double v14;
  long double v15;
  float v16;
  float v17;
  int v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 result;
  float v25;
  unsigned int v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(float*)(a1 + 796);
  v2 = *(float*)(a1 + 792);
  v3 = *(_OWORD*)(a1 + 832);
  if (v1 >= v2) {
    LODWORD(v6) = HIDWORD(*(_QWORD*)(a1 + 832));
  }
  else {
    v5 = Cursor_734120(*(_DWORD*)(a1 + 800), *(_DWORD*)(a1 + 804),
                       *(float*)(a1 + 816), *(float*)&v3, v1, v2),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = *(float*)(a1 + 836);
    v1 = *(float*)(a1 + 796);
    v2 = *(float*)(a1 + 792);
    *(float*)&v3 = v5;
  }
  v26 = v3;
  if (v1 < v2) {
    v7 = Cursor_734120(*(_DWORD*)(a1 + 800), *(_DWORD*)(a1 + 804),
                       *(float*)(a1 + 820), v6, v1, v2),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v1 = *(float*)(a1 + 796);
    v2 = *(float*)(a1 + 792);
    v6 = v7;
  }
  v8 = *(float*)(a1 + 840);
  if (v1 < v2) {
    v25 = v6;
    v9 = Cursor_734120(*(_DWORD*)(a1 + 800), *(_DWORD*)(a1 + 804),
                       *(float*)(a1 + 824), v8, v1, v2),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = v25;
    v8 = v9;
  }
  v10 = *(unsigned __int8*)(a1 + 808);
  v11 = (__int64*)(a1 + 784);
  *(_QWORD*)&v12 = __PAIR64__(LODWORD(v6), v26);
  *((_QWORD*)&v12 + 1) = LODWORD(v8);
  v27 = v12;
  if (v10 == 1) {
    v29 = v12;
    v28 = v12;
  }
  else {
    v13 = *(_QWORD*)(a1 + 784);
    if (*(float*)(a1 + 792) <= 0x0.0p+0f) {
      if (((*(__int64 (**)(__int64, __int128*, __int64))(v13 + 8))(
               a1 + 784, &v27, a1 + 832) &
           1) == 0) {
        goto LABEL_15;
      }
      v13 = *v11;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(v13 + 16))(
        (void*)(&v29), a1 + 784),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v28 = v27;
  }
  (*(void (**)(__int64, __int128*, __int128*))(*v11 + 24))(a1 + 784, &v29,
                                                           &v28),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 792) = 0;
  *(_WORD*)(a1 + 808) = 256;
LABEL_15:
  v16 = *(float*)(a1 + 668);
  v17 = *(float*)(a1 + 664);
  LODWORD(v15) = *(_DWORD*)(a1 + 688);
  if (v16 < v17) {
    LODWORD(v15) = Cursor_734120(*(_DWORD*)(a1 + 672), *(_DWORD*)(a1 + 676),
                                 *(float*)(a1 + 684), *(float*)&v15, v16, v17),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v18 = *(unsigned __int8*)(a1 + 680);
  v19 = (__int64*)(a1 + 656);
  LODWORD(v29) = LODWORD(v15);
  if (v18 == 1) {
    v20 = *v19;
    v21 = a1 + 656;
    LODWORD(v14) = LODWORD(v15);
  LABEL_23:
    result = (*(__int64 (**)(__int64, long double, long double))(v20 + 24))(
        v21, v14, v15),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)(a1 + 664) = 0;
    *(_WORD*)(a1 + 680) = 256;
    goto LABEL_24;
  }
  v22 = *(_QWORD*)(a1 + 656);
  if (*(float*)(a1 + 664) > 0x0.0p+0f) {
    v23 = LODWORD(v15);
    (*(void (**)(__int64))(v22 + 16))(a1 + 656),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v20 = *v19;
    v21 = a1 + 656;
    LODWORD(v15) = v23;
    goto LABEL_23;
  }
  result = (*(__int64 (**)(__int64, __int128*, __int64))(v22 + 8))(
      a1 + 656, &v29, a1 + 688),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((result & 1) != 0) {
    (*(void (**)(__int64))(*v19 + 16))(a1 + 656),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v20 = *v19;
    LODWORD(v15) = v29;
    v21 = a1 + 656;
    goto LABEL_23;
  }
LABEL_24:
  *(_DWORD*)(a1 + 952) = 0;
  return result;
}

__int64 Camera_1315960(__int64 a1, long double a2, long double a3)
{
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _DWORD* v9;
  __int64 result;
  int v11;
  int v12;
  int v13;

  LODWORD(a2) = *(_DWORD*)(a1 + 256);
  v3 = a1 + 736;
  *(_BYTE*)(a1 + 965) = 1;
  v5 = *(unsigned __int8*)(a1 + 760);
  v12 = LODWORD(a2);
  if (v5 == 1) {
    v6 = *(_QWORD*)(a1 + 736);
    v7 = a1 + 736;
    LODWORD(a3) = LODWORD(a2);
  LABEL_7:
    (*(void (**)(__int64, long double, long double))(v6 + 24))(v7, a2, a3);
    v9 = (_DWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 744) = 0;
    *(_WORD*)(a1 + 760) = 256;
    v13 = 1120403456;
  LABEL_8:
    result = (*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(a1 + 736) +
                                                      8LL))(v3, &v13, a1 + 768);
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_9;
  }
  if (*(float*)(a1 + 744) > 0.0) {
    v8 = LODWORD(a2);
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 736) + 16LL))(a1 + 736);
    v6 = *(_QWORD*)(a1 + 736);
    v7 = v3;
    LODWORD(a3) = v8;
    goto LABEL_7;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(a1 + 736) + 8LL))(
           a1 + 736, &v12, a1 + 768) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 736) + 16LL))(v3);
    v6 = *(_QWORD*)(a1 + 736);
    LODWORD(a3) = v12;
    v7 = v3;
    goto LABEL_7;
  }
  v11 = *(unsigned __int8*)(a1 + 760);
  v13 = 1120403456;
  if (v11 == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(a1 + 736) +
                                                     24LL))(v3, 100.0, 100.0);
    *(_DWORD*)(a1 + 744) = 0;
    goto LABEL_10;
  }
  v9 = (_DWORD*)(a1 + 744);
  if (*(float*)(a1 + 744) <= 0.5) {
    goto LABEL_8;
  }

LABEL_9:
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
  *v9 = 1056964608;

LABEL_10:
  *(_DWORD*)(a1 + 748) = 0;
  *(_WORD*)(a1 + 760) = 256;
  return result;
}

__int64 Camera_1315b10(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  float v9;
  __int64 v10;
  float v11;
  __int64 v12;
  char v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  long double v24;
  __int64 v25;
  __int64 v26;
  float v27;
  int v28;
  float v29;
  float v30;
  _BYTE* v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  long double v48;
  long double v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  float v62;
  float v63;
  __int64 v64;
  __int64 v65;
  float v66;
  float v67;
  __int64 v68;
  float32x4_t v69;
  long double v70;
  __int64 v71;
  float v72;
  float v73;
  __int64 v74;
  __int64 v75;
  float v76;
  __int128 v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  long double v94;
  float32x4_t v95;
  int v96;
  __int64* v97;
  int v98;
  unsigned int v99;
  unsigned int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  unsigned int v106;
  unsigned int v107;
  int v108;
  int v109;
  __n128 v110;
  int v111;
  int v112;
  int v113;
  unsigned int v114;
  unsigned int v115;
  int v116;
  float v117;
  long double v118;
  __int64 v119;
  float v120;
  float v121;
  float v122;
  __int64 v123;
  __int64 v124;
  float v125;
  float v126;
  __int64 v127;
  int v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  __int64 v134;
  float v135;
  __int64 v136;
  float v137;
  float v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  int v143;
  float32x4_t v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 result;
  __int64 v149;
  __int64 v150;
  float v151;
  __n128 v152;
  float v153;
  unsigned int v154;
  float v155;
  float32x4_t v156;
  __int128 v157;
  __int64 v158;
  void* v159;

  v3 = game_g_game_setting_ptr;
  v4 = game_script_hub_g_frame_counter_ptr[0];
  if (*(int*)(a1 + 920) < 1) {
    v7 = *(_BYTE**)game_g_game_setting_ptr;
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 1 &&
             ((v7[804] & 1) != 0 ||
              v7[940] == 1 && (v7[805] & 1) != 0 && (v7[806] & 1) != 0) ||
         v7[903] == 1 &&
             ((v7[900] & 1) != 0 ||
              v7[940] == 1 && (v7[901] & 1) != 0 && v7[902] == 1)) &&
        GameData_2258178 != 0) {
      if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
          ((v7[804] & 1) != 0 ||
           v7[940] == 1 && v7[805] == 1 && (v7[806] & 1) != 0)) {
        if ((*(_BYTE*)(GameData_2258178 + 440) & 1) == 0) {
          goto LABEL_56;
        }
      LABEL_30:
        if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
            ((v7[804] & 1) != 0 ||
             v7[940] == 1 && v7[805] == 1 && (v7[806] & 1) != 0)) {
          v8 = 520;
        }
        else {
          *(_QWORD*)&a2 = 0;
          if (v7[903] != 1 ||
              (v7[900] & 1) == 0 &&
                  (v7[940] != 1 || v7[901] != 1 || v7[902] != 1)) {
          LABEL_44:
            v9 = fabsf(*(float*)&a2);
            if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
                ((v7[804] & 1) != 0 ||
                 v7[940] == 1 && v7[805] == 1 && (v7[806] & 1) != 0)) {
              v10 = 524;
            }
            else {
              v11 = 0.0;
              if (v7[903] != 1 ||
                  (v7[900] & 1) == 0 &&
                      (v7[940] != 1 || v7[901] != 1 || v7[902] != 1)) {
              LABEL_54:
                if (v9 > fabsf(v11) ||
                    (*(_BYTE*)(*(_QWORD*)(*GameData_212d708 + 16) + 170LL) &
                     1) != 0) {
                  goto LABEL_56;
                }
                if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
                    ((v7[804] & 1) != 0 ||
                     v7[940] == 1 && v7[805] == 1 && (v7[806] & 1) != 0)) {
                  v149 = 524;
                }
                else {
                  *(_QWORD*)&a2 = 0;
                  if (v7[903] != 1 ||
                      (v7[900] & 1) == 0 &&
                          (v7[940] != 1 || v7[901] != 1 || v7[902] != 1)) {
                    goto LABEL_243;
                  }
                  v149 = 532;
                }
                LODWORD(a2) = *(_DWORD*)(GameData_2258178 + v149);
              LABEL_243:
                v150 = *(_QWORD*)(GameData_2258178 + 192);
                v151 = -*(float*)&a2;
                if (v150 != 0) {
                  v150 = *(
                      int*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                                       8 * ((unsigned __int64)(v150 +
                                                               *(_QWORD*)(GameData_2258178 +
                                                                          184) -
                                                               1) >>
                                            10)) +
                            4 * ((v150 + *(_QWORD*)(GameData_2258178 + 184) -
                                  1) &
                                 0x3FF));
                }
                *(float*)&a2 =
                    *(float*)(GameData_2258178 + 4 * v150 + 300) * v151;
                goto LABEL_77;
              }
              v10 = 532;
            }
            v11 = *(float*)(GameData_2258178 + v10);
            goto LABEL_54;
          }
          v8 = 528;
        }
        *(_QWORD*)&a2 = *(_QWORD*)(GameData_2258178 + v8);
        goto LABEL_44;
      }
      if (v7[903] == 1 &&
          ((v7[900] & 1) != 0 ||
           v7[940] == 1 && v7[901] == 1 && v7[902] == 1) &&
          (*(_BYTE*)(GameData_2258178 + 500) & 1) != 0) {
        goto LABEL_30;
      }
    }
  LABEL_56:
    v159 = &GameData_1adbf71;
    v12 = game_HashString(&GameData_1adbf71);
    v13 = game_GameModeData_instance_;
    v158 = v12;
    if (game_GameModeData_instance_ != 0) {
      v14 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
      v13 = v14 != 0 && *(_DWORD*)(v14 + 32) != 0;
    }
    v15 = -0.25;
    v16 = *(float*)(*(_QWORD*)v3 + 972LL);
    if (v16 <= 0.25 && (v15 = 0.25, v16 >= -0.25)) {
      *(_QWORD*)&a2 = 0;
      if ((v13 & 1) != 0) {
        goto LABEL_91;
      }
    }
    else {
      *(float*)&a2 = (float)(v16 + v15) * 0x1.5555560000000p+0;
      if ((v13 & 1) != 0) {
        if (*(float*)&a2 == 0.0) {
          goto LABEL_91;
        }
        v17 = -(float)(*(float*)&a2 * *(float*)(*(_QWORD*)v4 + 160LL));
        v18 = v17 + v17;
        v19 = game_8224a0_alt1(9);
        if (game_GameModeData_instance_ != 0) {
          v20 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v19);
          if (v20 != 0 && (unsigned __int8)*(_DWORD*)(v20 + 32) == 1) {
            v18 = -v18;
          }
        }
        v159 = *(void**)(a1 + 8);
        v21 = 0.0;
        v22 = 0.0;
        v158 = game_HashString(v159);
        if (game_GameModeData_instance_ != 0) {
          v23 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
          if (v23 != 0) {
            v22 = (float)*(int*)(v23 + 32);
          }
        }
        v159 = *(void**)(a1 + 24);
        v158 = game_HashString(v159);
        if (game_GameModeData_instance_ != 0) {
          v25 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
          if (v25 != 0) {
            v21 = (float)*(int*)(v25 + 32);
          }
        }
        v26 = a1 + 576;
        if (*(float*)(a1 + 588) == *(float*)(a1 + 584)) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(a1 + 576);
        }
        else {
          LODWORD(v24) = *(_DWORD*)(a1 + 608);
        }
        v27 = v18 + *(float*)&v24;
        v28 = *(unsigned __int8*)(a1 + 600);
        if (v21 >= v27) {
          v29 = v27;
        }
        else {
          v29 = v21;
        }
        if (v27 >= v22) {
          *(float*)&v24 = v29;
        }
        else {
          *(float*)&v24 = v22;
        }
        LODWORD(v158) = LODWORD(v24);
        if (v28 == 1) {
          (*(void (**)(__int64, long double, float))(*(_QWORD*)v26 + 24LL))(
              a1 + 576, v24, *(float*)&v24);
          v30 = 0.0;
        }
        else {
          v30 = 0.75;
          if (*(float*)(a1 + 584) <= 0.75 &&
              ((*(__int64 (**)(__int64, __int64*, __int64))(
                   *(_QWORD*)(a1 + 576) + 8LL))(a1 + 576, &v158, a1 + 608) &
               1) == 0) {
            goto LABEL_91;
          }
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(a1 + 576);
          (*(void (**)(__int64))(*(_QWORD*)v26 + 24LL))(a1 + 576);
        }
        *(float*)(a1 + 584) = v30;
        *(_DWORD*)(a1 + 588) = 0;
        *(_WORD*)(a1 + 600) = 256;
        goto LABEL_91;
      }
    }
  LABEL_77:
    Camera_1317300_alt1(a1, a2);
    goto LABEL_91;
  }
  GameRoutine_13176d0_alt1(a1);
  if (*(float*)(a1 + 952) != 0.0 &&
      (snd_fnd_WeakHandle_isValid_alt1(a1 + 896) & 1) != 0) {
    v5 = snd_fnd_WeakHandle_get_alt1(a1 + 896);
    v6 = GameRoutine_190240_alt1(v5 + 144);
    if (v6 != 0 && (unsigned int)strcmp(v6, "SE_SYS_Zoom_Move") == 0) {
      Camera_1317820_alt1(a1);
    }
  }
  *(_DWORD*)(a1 + 952) = 0;
LABEL_91:
  v31 = *(_BYTE**)v3;
  if ((*(_BYTE*)(*(_QWORD*)v3 + 807LL) == 1 &&
           ((v31[804] & 1) != 0 ||
            v31[940] == 1 && (v31[805] & 1) != 0 && (v31[806] & 1) != 0) ||
       v31[903] == 1 &&
           ((v31[900] & 1) != 0 ||
            v31[940] == 1 && (v31[901] & 1) != 0 && v31[902] == 1)) &&
      *(_BYTE*)((v32 = *(_QWORD*)(*GameData_212d708 + 16)) + 169) == 1) {
    v33 = (__int64*)(v32 + 336);
  }
  else {
    v33 = (__int64*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL);
  }
  v35 = *v33;
  v34 = v33[1];
  *(_QWORD*)&v157 = (unsigned int)v35;
  *((_QWORD*)&v157 + 1) = v34;
  Camera_1314ec0(a1, &v157, 0);
  if ((*(_BYTE*)(a1 + 966) & 1) == 0) {
    if (*(float*)(a1 + 628) != *(float*)(a1 + 624)) {
      *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
    }
    v36 = *(float*)(a1 + 668);
    v37 = *(float*)(a1 + 664);
    *(_BYTE*)(a1 + 681) = 0;
    if (v36 < v37) {
      v38 = v36 + (**(float (***)(__int64))(a1 + 656))(a1 + 656);
      if (*(float*)(a1 + 664) < v38) {
        v38 = *(float*)(a1 + 664);
      }
      *(float*)(a1 + 668) = v38;
    }
    v39 = *(float*)(a1 + 628);
    v40 = *(float*)(a1 + 624);
    *(_BYTE*)(a1 + 641) = 0;
    if (v39 < v40) {
      v41 = v39 + (**(float (***)(__int64))(a1 + 616))(a1 + 616);
      if (*(float*)(a1 + 624) < v41) {
        v41 = *(float*)(a1 + 624);
      }
      *(float*)(a1 + 628) = v41;
    }
    v42 = *(float*)(a1 + 796);
    v43 = *(float*)(a1 + 792);
    *(_BYTE*)(a1 + 809) = 0;
    if (v42 < v43) {
      v44 = v42 + (**(float (***)(__int64))(a1 + 784))(a1 + 784);
      if (*(float*)(a1 + 792) < v44) {
        v44 = *(float*)(a1 + 792);
      }
      *(float*)(a1 + 796) = v44;
    }
    v45 = *(float*)(a1 + 588);
    v46 = *(float*)(a1 + 584);
    *(_BYTE*)(a1 + 601) = 0;
    if (v45 < v46) {
      v47 = v45 + (**(float (***)(__int64))(a1 + 576))(a1 + 576);
      if (*(float*)(a1 + 584) < v47) {
        v47 = *(float*)(a1 + 584);
      }
      *(float*)(a1 + 588) = v47;
    }
    if ((snd_fnd_WeakHandle_isValid_alt1(a1 + 896) & 1) != 0) {
      LODWORD(v49) = *(_DWORD*)(a1 + 668);
      v50 = *(float*)(a1 + 688);
      if (*(float*)&v49 < *(float*)(a1 + 664)) {
        v50 = Cursor_734120_alt1(*(unsigned int*)(a1 + 672),
                                 *(unsigned int*)(a1 + 676),
                                 *(float*)(a1 + 684), v50, v49);
      }
      v51 = 0x1.99999a0000000p-2 - (float)(v50 * 0x1.99999a0000000p-2);
      *(_QWORD*)&v48 = 0;
      snd_Fade_Fade_10c830(&v158, v48);
      snd_startSurroundPan(a1 + 896, &v158, v51);
      snd_Fade_Destroy_Fade(&v158);
    }
  }
  if (*(_BYTE*)(a1 + 965) == 1) {
    v52 = *(float*)(a1 + 748);
    v53 = *(float*)(a1 + 744);
    *(_BYTE*)(a1 + 761) = 0;
    if (v52 < v53) {
      v54 = v52 + (**(float (***)(__int64))(a1 + 736))(a1 + 736);
      if (*(float*)(a1 + 744) < v54) {
        v54 = *(float*)(a1 + 744);
      }
      *(float*)(a1 + 748) = v54;
    }
  }
  if (*(_BYTE*)(a1 + 964) == 1) {
    v55 = *(float*)(a1 + 708);
    v56 = *(float*)(a1 + 704);
    *(_BYTE*)(a1 + 721) = 0;
    if (v55 < v56) {
      v57 = v55 + (**(float (***)(__int64))(a1 + 696))(a1 + 696);
      if (*(float*)(a1 + 704) < v57) {
        v57 = *(float*)(a1 + 704);
      }
      *(float*)(a1 + 708) = v57;
    }
  }
  v159 = *(void**)(a1 + 8);
  v58 = 0.0;
  v59 = 0.0;
  v158 = game_HashString(v159);
  if (game_GameModeData_instance_ != 0) {
    v60 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v60 != 0) {
      v59 = (float)*(int*)(v60 + 32);
    }
  }
  v159 = *(void**)(a1 + 24);
  v158 = game_HashString(v159);
  if (game_GameModeData_instance_ != 0) {
    v61 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v61 != 0) {
      v58 = (float)*(int*)(v61 + 32);
    }
  }
  v159 = *(void**)(a1 + 40);
  v62 = 0.0;
  v63 = 0.0;
  v158 = game_HashString(v159);
  if (game_GameModeData_instance_ != 0) {
    v64 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v64 != 0) {
      v63 = (float)*(int*)(v64 + 32);
    }
  }
  v159 = *(void**)(a1 + 56);
  v158 = game_HashString(v159);
  if (game_GameModeData_instance_ != 0) {
    v65 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v65 != 0) {
      v62 = (float)*(int*)(v65 + 32);
    }
  }
  v159 = *(void**)(a1 + 72);
  v66 = 0.0;
  v67 = 0.0;
  v158 = game_HashString(v159);
  if (game_GameModeData_instance_ != 0) {
    v68 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v68 != 0) {
      v67 = (float)*(int*)(v68 + 32);
    }
  }
  v159 = *(void**)(a1 + 88);
  v158 = game_HashString(v159);
  if (game_GameModeData_instance_ != 0) {
    v71 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v71 != 0) {
      v66 = (float)*(int*)(v71 + 32);
    }
  }
  if (*(_BYTE*)(a1 + 964) == 1) {
    LODWORD(v70) = *(_DWORD*)(a1 + 708);
    v72 = *(float*)(a1 + 728);
    if (*(float*)&v70 >= *(float*)(a1 + 704)) {
      goto LABEL_161;
    }
    v73 = *(float*)(a1 + 724);
    v74 = *(unsigned int*)(a1 + 712);
    v75 = *(unsigned int*)(a1 + 716);
  }
  else {
    LODWORD(v70) = *(_DWORD*)(a1 + 668);
    v72 = *(float*)(a1 + 688);
    if (*(float*)&v70 >= *(float*)(a1 + 664)) {
      goto LABEL_161;
    }
    v73 = *(float*)(a1 + 684);
    v74 = *(unsigned int*)(a1 + 672);
    v75 = *(unsigned int*)(a1 + 676);
  }
  v72 = Cursor_734120_alt1(v74, v75, v73, v72, v70);
LABEL_161:
  LODWORD(v70) = *(_DWORD*)(a1 + 796);
  v76 = *(float*)(a1 + 792);
  v77 = *(_OWORD*)(a1 + 832);
  v78 = v67 - v66;
  if (*(float*)&v70 >= v76) {
    LODWORD(v79) = HIDWORD(*(_QWORD*)(a1 + 832));
  }
  else {
    LANES128(v69).n128_f32[0] = Cursor_734120_alt1(
        *(unsigned int*)(a1 + 800), *(unsigned int*)(a1 + 804),
        *(float*)(a1 + 816), *(float*)&v77, v70);
    v79 = *(float*)(a1 + 836);
    LODWORD(v70) = *(_DWORD*)(a1 + 796);
    v76 = *(float*)(a1 + 792);
    LODWORD(v77) = LANES128(v69).n128_u32[0];
  }
  v80 = v78 * v72;
  v155 = *(float*)&v77;
  if (*(float*)&v70 < v76) {
    LANES128(v69).n128_f32[0] = Cursor_734120_alt1(
        *(unsigned int*)(a1 + 800), *(unsigned int*)(a1 + 804),
        *(float*)(a1 + 820), v79, v70);
    LODWORD(v70) = *(_DWORD*)(a1 + 796);
    v76 = *(float*)(a1 + 792);
    v79 = LANES128(v69).n128_f32[0];
  }
  v81 = *(float*)(a1 + 840);
  v82 = v66 + v80;
  if (*(float*)&v70 < v76) {
    v153 = v79;
    LANES128(v69).n128_f32[0] = Cursor_734120_alt1(
        *(unsigned int*)(a1 + 800), *(unsigned int*)(a1 + 804),
        *(float*)(a1 + 824), v81, v70);
    v79 = v153;
    v81 = LANES128(v69).n128_f32[0];
  }
  v83 = *(float*)(a1 + 928);
  v84 = *(float*)(a1 + 936);
  v85 = v83 - (float)(v84 * 0.5);
  v86 = (float)(v83 + (float)(v84 * 0.5)) - v82;
  v87 = v82 + v85;
  if (v86 >= v155) {
    v86 = v155;
  }
  v88 = *(float*)(a1 + 932);
  if (v155 < v87) {
    v86 = v87;
  }
  v89 = *(float*)(a1 + 940);
  v90 = v88 - (float)(v89 * 0.5);
  v91 = (float)(v88 + (float)(v89 * 0.5)) - v82;
  v92 = v82 + v90;
  if (v91 >= v81) {
    v91 = v81;
  }
  if (v81 >= v92) {
    v93 = v91;
  }
  else {
    v93 = v92;
  }
  *(_QWORD*)&v94 = __PAIR64__(LODWORD(v79), LODWORD(v86));
  *((_QWORD*)&v94 + 1) = LODWORD(v93);
  LANES128(v69).n128_f32[0] =
      *(float*)(a1 + 888) - *(float*)(*(_QWORD*)v4 + 160LL);
  LANES128(v95).n128_u64[0] = 0;
  v156 = *(float32x4_t*)&v94;
  if (LANES128(v69).n128_f32[0] < 0.0) {
    LANES128(v69).n128_f32[0] = 0.0;
  }
  *(_DWORD*)(a1 + 888) = LANES128(v69).n128_u32[0];
  if (LANES128(v69).n128_f32[0] <= 0.0) {
    *(_QWORD*)(a1 + 888) = 0;
  }
  else {
    v96 = *(_DWORD*)(a1 + 892);
    nn_os_LockMutex(&game_g_random_mutex);
    v97 = game_map_MapRandom_instance__ptr[0];
    v98 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v99 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v100 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v97 + 1) = v98;
    v101 = (v100 >> 8) ^ (v99 >> 19) ^ v100 ^ v99;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97) = v99;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97 + 4) = v101;
    v102 = v101 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v103 = v102 % ((2 * v96) | 1) - v96;
    v104 = *(_DWORD*)(a1 + 892);
    *(float*)&v154 = (float)v103 * 0x1.47ae140000000p-7;
    nn_os_LockMutex(&game_g_random_mutex);
    v105 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97);
    v106 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97 + 4);
    v107 = *(_DWORD*)v97 ^ (*(_DWORD*)v97 << 11);
    *(_DWORD*)v97 = *((_DWORD*)v97 + 1);
    *((_DWORD*)v97 + 1) = v105;
    v108 = (v107 >> 8) ^ (v106 >> 19) ^ v107 ^ v106;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97) = v106;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97 + 4) = v108;
    v109 = v108 & 0x7FFFFFFF;
    v110 = nn_os_UnlockMutex(&game_g_random_mutex);
    v111 = v109 % ((2 * v104) | 1) - v104;
    v112 = *(_DWORD*)(a1 + 892);
    LANES128(v110).n128_f32[0] = (float)v111 * 0x1.47ae140000000p-7;
    v152 = v110;
    nn_os_LockMutex(&game_g_random_mutex);
    v113 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97);
    v114 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97 + 4);
    v115 = *(_DWORD*)v97 ^ (*(_DWORD*)v97 << 11);
    *(_DWORD*)v97 = *((_DWORD*)v97 + 1);
    *((_DWORD*)v97 + 1) = v113;
    v116 = (v115 >> 8) ^ (v114 >> 19) ^ v115 ^ v114;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97) = v114;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v97 + 4) = v116;
    LODWORD(v97) = v116 & 0x7FFFFFFF;
    nn_os_UnlockMutex(&game_g_random_mutex);
    v94 = *(long double*)&v152;
    LANES128(v95).n128_u32[3] = 0;
    LANES128(v95).n128_u64[0] = __PAIR64__(LANES128(v152).n128_u32[0], v154);
    LANES128(v95).n128_f32[2] =
        (float)((int)v97 % ((2 * v112) | 1) - v112) * 0x1.47ae140000000p-7;
    v69 = vaddq_f32(v156, v95);
    v156 = v69;
  }
  v117 = 0.0;
  if ((*(_BYTE*)(a1 + 964) & 1) == 0) {
    v117 = Camera_1315570_alt1(a1, LANES128(v69).n128_f64[0],
                               LANES128(v95).n128_f64[0], v94);
  }
  v159 = &GameData_1adbf71;
  v158 = game_HashString(&GameData_1adbf71);
  if (game_GameModeData_instance_ != 0 &&
      (v119 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v158)) != 0 &&
      *(_DWORD*)(v119 + 32) != 0) {
    LODWORD(v118) = *(_DWORD*)(a1 + 588);
    v120 = *(float*)(a1 + 608);
    if (*(float*)&v118 < *(float*)(a1 + 584)) {
      v120 = Cursor_734120_alt1(*(unsigned int*)(a1 + 592),
                                *(unsigned int*)(a1 + 596), *(float*)(a1 + 604),
                                v120, v118);
    }
    v121 = 1.0 - v72;
    v122 = v120 + (float)((float)(1.0 - v72) * (float)(v58 - v120));
  }
  else {
    v121 = 1.0 - v72;
    v122 = v59 + (float)((float)(v58 - v59) * (float)(1.0 - v72));
  }
  v123 = game_GameModeData_instance_;
  *(float*)(a1 + 260) = v117;
  *(float*)(a1 + 264) = v122;
  if (v123 != 0) {
    v124 = game_GameVariableTable_Find(*(_QWORD*)(v123 + 48), a1 + 128);
    v125 = 0.0;
    v126 = 0.0;
    if (v124 != 0) {
      v126 = (float)*(int*)(v124 + 32);
    }
    if (game_GameModeData_instance_ != 0) {
      v127 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), a1 + 144);
      if (v127 != 0) {
        v125 = (float)*(int*)(v127 + 32);
      }
    }
  }
  else {
    v126 = 0.0;
    v125 = 0.0;
  }
  v128 = *(unsigned __int8*)(a1 + 965);
  *(_DWORD*)(a1 + 268) = 0;
  *(float*)(a1 + 272) = v126 + (float)(v121 * (float)(v125 - v126));
  if (v128 != 1) {
    *(float*)(a1 + 256) = v62 + (float)((float)(v63 - v62) * v72);
    v144 = v156;
    goto LABEL_215;
  }
  LODWORD(v118) = *(_DWORD*)(a1 + 748);
  v129 = *(float*)(a1 + 744);
  v130 = *(float*)(a1 + 768);
  if (*(float*)&v118 < v129) {
    v131 = Cursor_734120_alt1(*(unsigned int*)(a1 + 752),
                              *(unsigned int*)(a1 + 756), *(float*)(a1 + 764),
                              v130, v118);
    v129 = *(float*)(a1 + 744);
    v130 = v131;
  }
  v132 = 0.0;
  *(float*)(a1 + 256) = v130;
  v133 = 0.0;
  if (v129 > 0.0) {
    v133 = *(float*)(a1 + 748) / v129;
  }
  *(float*)(a1 + 948) = v133;
  v159 = &GameData_1aa0752;
  v158 = game_HashString(&GameData_1aa0752);
  if (game_GameModeData_instance_ != 0) {
    v134 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v134 != 0) {
      v132 = (float)*(int*)(v134 + 32);
    }
  }
  v159 = &GameData_1ae9494;
  v135 = 0.0;
  v158 = game_HashString(&GameData_1ae9494);
  if (game_GameModeData_instance_ != 0) {
    v136 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v158);
    if (v136 != 0) {
      v135 = (float)*(int*)(v136 + 32);
    }
  }
  v137 = v133 * v133;
  v138 = (float)(v137 * v132) * 4.0;
  v139 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
  v140 = *(_QWORD*)(v139 + 48);
  v141 = *(_QWORD*)(v139 + 56);
  if (v141 == 0) {
    v142 = *(_QWORD*)(*(_QWORD*)(v140 + 8) + 168LL);
    if (v138 <= 0.0) {
      goto LABEL_221;
    }
    goto LABEL_212;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v141 + 8), 1u,
                            memory_order_relaxed);
  v142 = *(_QWORD*)(*(_QWORD*)(v140 + 8) + 168LL);
  if (atomic_fetch_add((atomic_ullong* volatile)(v141 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v141 + 16LL))(v141);
    std___1___shared_weak_count___release_weak(v141);
    if (v138 <= 0.0) {
      goto LABEL_221;
    }
  LABEL_212:
    *(_BYTE*)(v142 + 96) = 1;
    v143 = (int)(float)((float)((float)(v137 * v135) * 4.0) + 0.0);
    *(float*)(v142 + 92) = v138 + 0.0;
    v144 = v156;
    if (v143 >= 1) {
      *(_DWORD*)(v142 + 172) = v143;
      *(_BYTE*)(v142 + 176) = 1;
    }
    goto LABEL_215;
  }
  if (v138 > 0.0) {
    goto LABEL_212;
  }
LABEL_221:
  v144 = v156;
  if (*(_BYTE*)(v142 + 96) == 1) {
    *(_BYTE*)(v142 + 96) = 0;
  }
LABEL_215:
  *(float32x4_t*)(a1 + 208) = v144;
  gfx_render_b3aee0(a1 + 176);
  v145 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v146 = *(_QWORD*)(v145 + 24);
  v147 = *(_QWORD*)(v145 + 32);
  if (v147 == 0) {
    return wld_a7fda0(v146, a1 + 176);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v147 + 8), 1u,
                            memory_order_relaxed);
  result = wld_a7fda0(v146, a1 + 176);
  if (atomic_fetch_add((atomic_ullong* volatile)(v147 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v147 + 16LL))(v147);
    return std___1___shared_weak_count___release_weak(v147);
  }
  return result;
}

void Camera_Unknown6(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  int v5;
  int** v6;
  int** v7;
  int* v8;
  int* v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  int v13;
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
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int128 v32;

  v3 = GameData_212d718;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(*(_QWORD*)(*GameData_212d718 + 16) + 784LL) + 16LL))(
      (void*)(&v32), *(_QWORD*)(*GameData_212d718 + 16) + 784LL);
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(int***)(v4 + 8);
  v7 = *(int***)(v4 + 16);
  if (v5 < 0) {
    if (v6 == v7) {
      goto LABEL_13;
    }
    while (1) {
      v8 = *v6;
      if (*((_QWORD*)*v6 + 12) == 0 && *((_QWORD*)v8 + 69) == 0) {
        break;
      }
      if (++v6 == v7) {
        goto LABEL_13;
      }
    }
  }
  else {
    if (v6 == v7) {
      goto LABEL_13;
    }
    while (1) {
      v9 = *v6++;
      v8 = v9;
      if (v9[21] == v5) {
        break;
      }
      if (v6 == v7) {
        goto LABEL_13;
      }
    }
  }
  if (v8[135] >= 1) {
    v10 = *(_OWORD*)(*(_QWORD*)v8 + 32LL);
    *(_QWORD*)&v32 = *(_QWORD*)(*(_QWORD*)v8 + 32LL);
    *(_QWORD*)&v11 = v32;
    *((_QWORD*)&v11 + 1) = DWORD2(v10);
    v32 = v11;
  }
LABEL_13:
  v12 = *(int*)(a2 + 20);
  v13 = v32;
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE1(v13);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE2(v13);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = HIBYTE(v13);
  v17 = *(int*)(a2 + 20);
  LODWORD(v16) = DWORD1(v32);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v16;
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE1(v16);
  v19 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE2(v16);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE3(v16);
  v21 = *(int*)(a2 + 20);
  LODWORD(v16) = DWORD2(v32);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v16;
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE1(v16);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = BYTE2(v16);
  v24 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE3(v16);
  v25 = *(_QWORD*)(*v3 + 16);
  v26 = 656;
  if (*(_BYTE*)(v25 + 964) != 0) {
    v26 = 696;
  }
  v27 = (*(float (**)(__int64))(*(_QWORD*)(v25 + v26) + 16LL))(v25 + v26);
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = LOBYTE(v27);
  v29 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = BYTE1(v27);
  v30 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE2(v27);
  v31 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = HIBYTE(v27);
}

void Camera_Unknown2_1316dc0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  int v5;
  int** v6;
  int** v7;
  int* v8;
  int* v9;
  __int128 v10;
  __int128 v11;
  __int64 v12;
  int v13;
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
  float v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int128 v32;

  v3 = GameData_212d718;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(*(_QWORD*)(*GameData_212d718 + 16) + 784LL) + 16LL))(
      (void*)(&v32), *(_QWORD*)(*GameData_212d718 + 16) + 784LL);
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(int***)(v4 + 8);
  v7 = *(int***)(v4 + 16);
  if (v5 < 0) {
    if (v6 == v7) {
      goto LABEL_13;
    }
    while (1) {
      v8 = *v6;
      if (*((_QWORD*)*v6 + 12) == 0 && *((_QWORD*)v8 + 69) == 0) {
        break;
      }
      if (++v6 == v7) {
        goto LABEL_13;
      }
    }
  }
  else {
    if (v6 == v7) {
      goto LABEL_13;
    }
    while (1) {
      v9 = *v6++;
      v8 = v9;
      if (v9[21] == v5) {
        break;
      }
      if (v6 == v7) {
        goto LABEL_13;
      }
    }
  }
  if (v8[135] >= 1) {
    v10 = *(_OWORD*)(*(_QWORD*)v8 + 32LL);
    *(_QWORD*)&v32 = *(_QWORD*)(*(_QWORD*)v8 + 32LL);
    *(_QWORD*)&v11 = v32;
    *((_QWORD*)&v11 + 1) = DWORD2(v10);
    v32 = v11;
  }
LABEL_13:
  v12 = *(int*)(a2 + 20);
  v13 = v32;
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE1(v13);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE2(v13);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = HIBYTE(v13);
  v17 = *(int*)(a2 + 20);
  LODWORD(v16) = DWORD1(v32);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v16;
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE1(v16);
  v19 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE2(v16);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE3(v16);
  v21 = *(int*)(a2 + 20);
  LODWORD(v16) = DWORD2(v32);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v16;
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE1(v16);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = BYTE2(v16);
  v24 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE3(v16);
  v25 = *(_QWORD*)(*v3 + 16);
  v26 = 656;
  if (*(_BYTE*)(v25 + 964) != 0) {
    v26 = 696;
  }
  v27 = (*(float (**)(__int64))(*(_QWORD*)(v25 + v26) + 16LL))(v25 + v26);
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = LOBYTE(v27);
  v29 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = BYTE1(v27);
  v30 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE2(v27);
  v31 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = HIBYTE(v27);
}

__int64 Camera_Unknown7(long double a1, long double a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64* v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 result;
  __int128 v33;

  v4 = *(int*)(a4 + 20);
  v5 = *(_QWORD*)(a4 + 8);
  v7 = v4 + 9;
  v8 = v4 + 10;
  *(_DWORD*)(a4 + 20) = v4 + 1;
  v9 = *(unsigned __int8*)(v5 + v4);
  *(_DWORD*)(a4 + 20) = v4 + 2;
  v10 = *(unsigned __int8*)(v5 + v4 + 1);
  *(_DWORD*)(a4 + 20) = v4 + 3;
  v11 = *(unsigned __int8*)(v5 + v4 + 2);
  *(_DWORD*)(a4 + 20) = v4 + 4;
  v12 = *(unsigned __int8*)(v5 + v4 + 3);
  *(_DWORD*)(a4 + 20) = v4 + 5;
  v13 = *(unsigned __int8*)(v5 + v4 + 4);
  *(_DWORD*)(a4 + 20) = v4 + 6;
  v14 = *(unsigned __int8*)(v5 + v4 + 5);
  *(_DWORD*)(a4 + 20) = v4 + 7;
  v15 = *(unsigned __int8*)(v5 + v4 + 6);
  *(_DWORD*)(a4 + 20) = v4 + 8;
  v16 = *(unsigned __int8*)(v5 + v4 + 7);
  *(_DWORD*)(a4 + 20) = v4 + 9;
  v17 = *(unsigned __int8*)(v5 + v4 + 8);
  *(_DWORD*)(a4 + 20) = v4 + 10;
  v18 = v4 + 11;
  v19 = v4 + 12;
  v20 = *(unsigned __int8*)(v5 + v7);
  *(_DWORD*)(a4 + 20) = v18;
  v21 = *(unsigned __int8*)(v5 + v8);
  *(_DWORD*)(a4 + 20) = v19;
  v22 = GameData_212d718;
  v23 = *(_QWORD*)(*GameData_212d718 + 16);
  if ((*(_BYTE*)(v23 + 966) & 1) == 0) {
    LODWORD(v24) = v9 | (v10 << 8) | (v11 << 16) | (v12 << 24);
    DWORD1(v24) = v13 | (v14 << 8) | (v15 << 16) | (v16 << 24);
    *((_QWORD*)&v24 + 1) =
        v17 | (v20 << 8) | (v21 << 16) | (*(unsigned __int8*)(v5 + v18) << 24);
    v33 = v24;
    GameRoutine_734a80(v23 + 784, &v33);
    v19 = *(_DWORD*)(a4 + 20);
    v23 = *(_QWORD*)(*v22 + 16);
    v5 = *(_QWORD*)(a4 + 8);
  }
  v25 = v19 + 1LL;
  v26 = v19 + 2LL;
  *(_DWORD*)(a4 + 20) = v25;
  v27 = *(unsigned __int8*)(v5 + v19);
  *(_DWORD*)(a4 + 20) = v26;
  v28 = v19 + 3LL;
  LODWORD(v25) = *(unsigned __int8*)(v5 + v25);
  *(_DWORD*)(a4 + 20) = v28;
  LODWORD(v25) =
      v27 | ((_DWORD)v25 << 8) | (*(unsigned __int8*)(v5 + v26) << 16);
  *(_DWORD*)(a4 + 20) = v19 + 4;
  LODWORD(v33) = v25 | (*(unsigned __int8*)(v5 + v28) << 24);
  LODWORD(a1) = v33;
  if (*(_BYTE*)(v23 + 680) == 1) {
    v29 = *(_QWORD*)(v23 + 656);
    v30 = v23 + 656;
    LODWORD(a2) = v33;
  }
  else if (*(float*)(v23 + 664) <= 0.0) {
    result = (*(__int64 (**)(__int64, __int128*, __int64, float))(
        *(_QWORD*)(v23 + 656) + 8LL))(v23 + 656, &v33, v23 + 688,
                                      *(float*)&v33);
    if ((result & 1) == 0) {
      return result;
    }
    (*(void (**)(__int64))(*(_QWORD*)(v23 + 656) + 16LL))(v23 + 656);
    v29 = *(_QWORD*)(v23 + 656);
    LODWORD(a2) = v33;
    v30 = v23 + 656;
  }
  else {
    v31 = v33;
    (*(void (**)(__int64))(*(_QWORD*)(v23 + 656) + 16LL))(v23 + 656);
    v29 = *(_QWORD*)(v23 + 656);
    v30 = v23 + 656;
    LODWORD(a2) = v31;
  }
  result = (*(__int64 (**)(__int64, long double, long double))(v29 + 24))(
      v30, a1, a2);
  *(_QWORD*)(v23 + 664) = 0;
  *(_WORD*)(v23 + 680) = 256;
  return result;
}

__int64 Camera_1317300(__int64 a1, long double a2, double a3, long double a4)
{

#pragma clang fp contract(off)
  float v4;
  float v6;
  __int64* v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 result;
  __int64 v18;
  float v19;
  int v20;
  float v21;
  float v22;
  bool v23;
  float v24;
  float v25;
  bool v26;
  int v27;
  float v28;
  __int64 v29;
  float v30;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  _BYTE v37[16];
  _QWORD v38[25];

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = *(float*)&a2;
  if (*(float*)&a2 == 0x0.0p+0f) {
    result = GameRoutine_13176d0(a1, a2, a3, a4),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*(float*)(a1 + 952) != v4) {
      result = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 896)),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
      if ((result & 1) != 0) {
        v18 = snd_fnd_WeakHandle_get(a1 + 896),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        result = GameRoutine_190240(v18 + 144),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        if (result != 0) {
          result = strcmp(result, "SE_SYS_Zoom_Move"),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
          if ((_DWORD)result == 0) {
          LABEL_48:
            result = Camera_1317820(a1),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
      }
    }
  }
  else {
    v6 = (float)(*(float*)&a2 *
                 *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           160LL)) *
         0x1.99999a0000000p-5f;
    v7 = game_8224a0(0xAu),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
    v8 = 0x0.0p+0f;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_12;
    }
    v9 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v7),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v9 != 0 && (unsigned __int8)*(_DWORD*)(v9 + 32) == 1) {
      v6 = -v6;
    }
    if (game_GameModeData_instance_ != 0) {
      v10 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)(a1 + 160)),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
      v11 = 0x0.0p+0f;
      if (v10 != 0) {
        v11 = (float)*(int*)(v10 + 32);
      }
      v12 = v11 / -0x1.9000000000000p+6f;
      if (game_GameModeData_instance_ != 0) {
        v13 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)(a1 + 160)),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v13 != 0) {
          v8 = (float)*(int*)(v13 + 32);
        }
      }
    }
    else {
    LABEL_12:
      v12 = -0x0.0p+0f;
    }
    v14 = a1 + 656;
    v15 = (float)(v8 / 0x1.9000000000000p+6f) + 0x1.0000000000000p+0f;
    if (*(float*)(a1 + 668) == *(float*)(a1 + 664)) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(a1 + 656),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      v16 = *(float*)(a1 + 688);
    }
    v19 = v6 + v16;
    v20 = *(_DWORD*)(a1 + 960);
    v21 = 0x0.0p+0f;
    if (v15 >= v19) {
      v22 = v19;
    }
    else {
      v22 = v15;
    }
    v23 = v19 < v12;
    v24 = 0x1.3333340000000p-3f;
    if (v23) {
      v25 = v12;
    }
    else {
      v25 = v22;
    }
    if (v20 != 2) {
      v24 = 0x1.8000000000000p-1f;
    }
    v26 = v20 == 3;
    v27 = *(unsigned __int8*)(a1 + 680);
    *(float*)v38 = v25;
    if (v26) {
      v28 = 0x0.0p+0f;
    }
    else {
      v28 = v24;
    }
    if (v27 == 1) {
      result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)v14 + 24LL))(
          a1 + 656, v25, v25),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      if (v28 >= *(float*)(a1 + 664)) {
        result = (*(__int64 (**)(__int64, _QWORD*, __int64))(
            *(_QWORD*)(a1 + 656) + 8LL))(a1 + 656, v38, a1 + 688),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((result & 1) == 0) {
          v36 = 0x1.0000000000000p+0f;
          if (v4 <= 0x0.0p+0f) {
            v36 = v4;
          }
          if (v36 >= 0x0.0p+0f) {
            v4 = v36;
          }
          else {
            v4 = -0x1.0000000000000p+0f;
          }
          goto LABEL_64;
        }
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(a1 + 656),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = *(_QWORD*)v14;
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(a1 + 656),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        v29 = *(_QWORD*)v14;
      }
      result = (*(__int64 (**)(__int64))(v29 + 24))(a1 + 656),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
      v21 = v28;
    }
    v30 = 0x1.0000000000000p+0f;
    *(float*)(a1 + 664) = v21;
    *(_DWORD*)(a1 + 668) = 0;
    *(_WORD*)(a1 + 680) = 256;
    if (v4 <= 0x0.0p+0f) {
      v30 = v4;
    }
    if (v30 >= 0x0.0p+0f) {
      v4 = v30;
    }
    else {
      v4 = -0x1.0000000000000p+0f;
    }
    if (v25 <= v12 || v15 <= v25) {
      goto LABEL_48;
    }
    if (*(float*)(a1 + 952) != v4) {
      if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 896)) & 1) == 0 ||
          (v32 = snd_fnd_WeakHandle_get(a1 + 896),
           (v33 = GameRoutine_190240(v32 + 144)) == 0) ||
          (_DWORD)(result = strcmp(v33, "SE_SYS_Zoom_Move")) != 0) {
        if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 896)) & 1) != 0) {
          snd_Fade_Fade_10c830_alt1((__int64)v38, 0x0.0p+0f),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          snd_stop_ffc40_alt1((__int64*)(a1 + 896), (__int64)v38),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          snd_Fade_Destroy_Fade_alt1(v38),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        snd_Fade_Fade_10c830_alt1((__int64)v38, 0x0.0p+0f),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        snd_play_ff2d0((__int64)"SE_SYS_Zoom_Move", (__int64)"SE_SYS_Zoom_Move",
                       (__int64)v38, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        snd_Fade_Destroy_Fade_alt1(v38),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        GameRoutine_112180(a1 + 896, (__int64)v37),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        v34 = snd_fnd_WeakHandle_get(a1 + 896),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v34 != 0) {
          v35 = v34 - 5592;
        }
        else {
          v35 = 0;
        }
        snd_Fade_Fade_10c830_alt1((__int64)v38, 0x1.f400000000000p+9f),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v35 + 40) + 72LL))(
            v35 + 40, v38, 0x1.3333340000000p-2f),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
        result = snd_Fade_Destroy_Fade_alt1(v38),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
  }
LABEL_64:
  *(float*)(a1 + 952) = v4;
  return result;
}

__int64 Camera_1317820(__int64 a1)
{
  long double v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  long double v8;
  float v9;
  long double v10;
  long double v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  _QWORD v15[2];
  _BYTE v16[200];

  if ((snd_fnd_WeakHandle_isValid_alt1(a1 + 896) & 1) != 0 &&
      (v3 = snd_fnd_WeakHandle_get_alt1(a1 + 896),
       (v4 = GameRoutine_190240_alt1(v3 + 144)) != 0) &&
      (unsigned int)strcmp(v4, "SE_SYS_Zoom_Move") == 0) {
    v6 = snd_fnd_WeakHandle_get_alt1(a1 + 896);
    if (v6 != 0) {
      v7 = v6 - 5592;
    }
    else {
      v7 = 0;
    }
    *(__n128*)&v8 = ((__n128 (*)(__int64)) *
                     (_QWORD*)(*(_QWORD*)(v7 + 40) + 64LL))(v7 + 40);
    v9 = *(float*)&v8;
    *(_QWORD*)&v8 = 0;
    *(__n128*)&v10 = snd_Fade_Fade_10c830(v16, v8);
    snd_stop_ffc40(a1 + 896, v16, v10);
    snd_Fade_Destroy_Fade(v16);
    *(_QWORD*)&v11 = 0;
    snd_Fade_Fade_10c830(v16, v11);
    snd_play_ff2d0_alt1((void*)(v15), "SE_SYS_Zoom_Stop", "SE_SYS_Zoom_Stop",
                        v16, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v16);
    GameRoutine_112180_alt1(a1 + 896, v15);
    v12 = snd_fnd_WeakHandle_get_alt1(a1 + 896);
    *(_QWORD*)&v13 = 0;
    if (v12 != 0) {
      v14 = v12 - 5592;
    }
    else {
      v14 = 0;
    }
    snd_Fade_Fade_10c830(v16, v13);
    (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)(v14 + 40) + 72LL))(
        v14 + 40, v16, v9);
    return snd_Fade_Destroy_Fade(v16);
  }
  else {
    *(_QWORD*)&v2 = 0;
    snd_Fade_Fade_10c830(v16, v2);
    snd_play_ff2d0_alt1((void*)(v15), "SE_SYS_Zoom_Stop", "SE_SYS_Zoom_Stop",
                        v16, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v16);
    return GameRoutine_112180_alt1(a1 + 896, v15);
  }
}

#pragma GCC visibility pop
