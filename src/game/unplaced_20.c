#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_d5fc50(_QWORD*, __int64);
_QWORD* Signal_d30dc0(__int64, const char*, __int64, int);
__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8, __int64, unsigned __int64,
                                           __int64);
__attribute__((swiftcall)) void game_ff6680(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64* GameRoutine_c22420(_QWORD*, unsigned __int8*);
__int64* GameRoutine_d5e9a0(__int64* result, _QWORD*, _QWORD*);
__int64* GameRoutine_d5f8e0(__int64* result, int*, int*, unsigned __int64);
__int64* GameRoutine_d5ffa0(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CharacterAnimator_1079e10(__int64);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 CharacterModel_1071880(__int64, int);
__int64 GameHr_7aa0(int**, _QWORD*);
__int64 GameHr_a7d120(__int64 result);
__int64 GameHr_a867a0(__int64 result);
__int64 GameHr_c08540(__int64, __int64, __int64, unsigned int, float);
__int64 GameHr_dbd8e0();
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_5c01e0(__int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_62cf40(__int64, __int64, __int64);
__int64 GameRoutine_ce6740(__int64, __int64);
__int64 GameRoutine_d5e840(__int64 result, int*);
__int64 GameRoutine_efbb60(__int64, __int64*, char);
__int64 GameRoutine_f48ea0(__int64, __int64, float, float);
__int64 GameRoutine_ff32a0(_QWORD*);
__int64 MapObjectModule_a7d220(__int64 result);
__int64 ProcRunEvent_1194a00(__int64, const char*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_edede0(__int64, float, float, float);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_oe_GetCurrentFocusState(void);
__int64 nn_oe_GetCurrentGraphicsScale(void);
__int64 nn_oe_PopNotificationMessage(void);
__int64 nn_oe_SetGraphicsScaleChangedNotificationEnabled(bool);
__int64 nn_os_AcquireWriteLock(__int64);
__int64 nn_os_ReleaseWriteLock(__int64);
__int64 nn_os_SignalLightEvent(__int64);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_vi_CreateLayer(__int64, __int64);
__int64 nn_vi_GetNativeWindow(__int64, __int64);
__int64 nn_vi_OpenDefaultDisplay(__int64);
__int64 nn_vi_QueryDisplayBufferMaxResolution(_QWORD);
__int64 nn_vi_SetLayerNextHdrContentGamutMetadata(_QWORD, _QWORD);
__int64 nn_vi_SetLayerNextHdrExtendedContentLuminanceRangeMetadata(
    __int64, unsigned __int16, unsigned __int16);
__int64 nn_vi_SetLayerNextHdrStandardContentLuminanceRangeMetadata(
    __int64, unsigned __int16, unsigned __int16);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, __int64, __int64,
                                                 __int64, float, float, __int64,
                                                 unsigned int, unsigned int,
                                                 int);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               float, float, __int64,
                                               unsigned int, unsigned int, int);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 strtol(const char*, __int64, int);
__int64 timeline_7910(__int64, __int64);
__int64 timeline_Cursor_Next(_BYTE**);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool nn_g3d_5eb5c0(__int64, float32x4_t*);
bool timeline_Cursor_HasNext(_DWORD*);
double timeline_Value_ToDouble(__int64);
extern _DWORD GameData_1a82b60[4];
extern _DWORD GameData_1a82c20[4];
extern _DWORD GameData_1a82e90[4];
extern _QWORD as_g_context_slots[16384];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_1a8d3c2;
extern _UNKNOWN GameData_1ab10a2;
extern _UNKNOWN GameData_1fd1588;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21ed530;
extern _UNKNOWN GameData_21f4d48;
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN GameData_22660d0;
extern _UNKNOWN GameData_22660dc;
extern _UNKNOWN GameData_22660e8;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83800;
extern __int128 GameData_1a83850;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int64 (*GameData_1fd7c18[])();
extern __int64 (*nn_nlib_MemoryInputStream_vtable[])();
extern __int64* GameData_212cfb0[12];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212dcd0;
extern __int64* GameData_2136400[2];
extern __int64* GameData_2136408;
extern __int64* as_g_script_manager_ptr;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212cc60[59];
extern __int64 GameData_212d270;
extern __int64 GameData_212d6e8;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_21c6978;
extern __int64 GameData_21ca060;
extern __int64 GameData_21f3ca0;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2212260;
extern __int64 GameData_22127a8;
extern __int64 GameData_2241720;
extern __int64 GameData_2265ab0;
extern __int64 GameData_2265ab8;
extern __int64 GameData_22660f8;
extern __int64 GameData_2266100;
extern __int64 GameData_2266108;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
extern char GameData_1a9f09e;
extern float GameData_1bb1c88[5];
extern int GameData_21675c0;
extern int GameData_21ed528;
extern int GameData_21f4d44;
extern int GameData_2265aa8;
extern int GameData_2266110;
extern int GameData_2266118;
float CharacterAnimator_1079580(__int64, int, long double, float, float);
float game_combat_e401e0(float*, float*);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 nn_os_GetThreadAvailableCoreMask();
unsigned __int64 strlen(const char*);
unsigned __int64 timeline_Value_ToInt(__int64);
unsigned __int64 timeline_Value_ToUInt(__int64);
unsigned __int8* GameRoutine_a539c0(unsigned __int8* result, __int64,
                                    unsigned __int64);
void GameHr_17ccc20(__int64, char, char);
void GameHr_a5aca0(__int64);
void GameHr_ad69c0(_QWORD*);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
void GameRoutine_7a8220(__int64*, _QWORD*);
void GameRoutine_82f300(__int64*, unsigned __int64);
void GameRoutine_d5e6c0(__int64);
void GameRoutine_d5fd80(__int64);
void Value_77d0(__int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_ce7000();
void __attribute__((noreturn)) GameRoutine_d5e820();
void __attribute__((noreturn)) GameRoutine_d5ff80();
void __attribute__((noreturn)) GameRoutine_f0b120();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void game_10332b0(__int64, int8x16_t*, int, __int64, float);
void game_f6af20(unsigned __int64*, unsigned int);
void game_ff33e0(__int64, int*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void nn_oe_LeaveExitRequestHandlingSection();
void nn_vi_Initialize();
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_5c5380();
void game_82eee0(__int64 a1);
__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2);
__int64 game_ce5d20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                    unsigned __int64 a5, char a6);
void game_d3a060(__int64 a1);
__int64 game_d5da40(__int64 a1, __int64 a2, __int64 a3);
__int64 game_f69f40(__int64 a1);
void game_f6ab70(__int64 a1);
void game_f91e40();
void game_f9b9f0();
void game_fb9a90(__int64 a1);
void game_1032160(__int64 a1);
__attribute__((swiftcall)) void game_104fe60(PSEUDO_X8 x8_);
void game_1052fc0(_QWORD* a1, const char* a2, unsigned __int64 a3);
void game_1109640(__int64* a1);
__int64 game_11943c0(__int64 a1);
__attribute__((swiftcall)) void game_17d34b0(PSEUDO_X8 x8_, _DWORD* a1);
__int64 game_17e3cc0();
void __attribute__((noreturn)) game_17e3de0();

__int64 game_5c5380()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  __int128 v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;

  v0 = GameRoutine_5c01e0(0x2000, 128);
  v1 = GameData_2136408;
  *GameData_2136408 = v0;
  v2 = GameRoutine_5c01e0(0x2000, 128);
  v3 = *v1;
  *GameData_2136400[0] = v2;
  memset(v3, 0, 0x2000u);
  result = memset(v2, 0, 0x2000u);
  v5 = 0;
  v6 = 395225900;
  v7 = -484961186;
  v8 = 1173409204;
  v9 = 1913259373;
  do {
    v10 = ((v6 ^ (v6 << 11)) >> 8) ^ (v9 >> 19) ^ v6 ^ (v6 << 11) ^ v9;
    v11 = ((v7 ^ (v7 << 11)) >> 8) ^ (v10 >> 19) ^ v7 ^ (v7 << 11) ^ v10;
    v6 = ((v8 ^ (v8 << 11)) >> 8) ^ (v11 >> 19) ^ v8 ^ (v8 << 11) ^ v11;
    HIDWORD(v12) = 0;
    v7 = ((v9 ^ (v9 << 11)) >> 8) ^ (v6 >> 19) ^ v9 ^ (v9 << 11) ^ v6;
    *(float*)&v12 = (float)((float)(COERCE_FLOAT((v10 >> 9) | 0x3F800000) +
                                    -0x1.0000000000000p+0f) *
                            0x1.0000000000000p+1f) +
                    -0x1.0000000000000p+0f;
    *((float*)&v12 + 1) =
        (float)((float)(COERCE_FLOAT((v11 >> 9) | 0x3F800000) +
                        -0x1.0000000000000p+0f) *
                0x1.0000000000000p+1f) +
        -0x1.0000000000000p+0f;
    v8 = ((v10 ^ (v10 << 11)) >> 8) ^ (v7 >> 19) ^ v10 ^ (v10 << 11) ^ v7;
    LANES128(v13).n128_u32[3] = 0;
    LANES128(v13).n128_f32[0] =
        (float)((float)(COERCE_FLOAT((v7 >> 9) | 0x3F800000) +
                        -0x1.0000000000000p+0f) *
                0x1.0000000000000p+1f) +
        -0x1.0000000000000p+0f;
    *((float*)&v12 + 2) = (float)((float)(COERCE_FLOAT((v6 >> 9) | 0x3F800000) +
                                          -0x1.0000000000000p+0f) *
                                  0x1.0000000000000p+1f) +
                          -0x1.0000000000000p+0f;
    v9 = ((v11 ^ (v11 << 11)) >> 8) ^ (v8 >> 19) ^ v11 ^ (v11 << 11) ^ v8;
    *(_OWORD*)(v3 + v5) = v12;
    LANES128(v13).n128_f32[1] =
        (float)((float)(COERCE_FLOAT((v8 >> 9) | 0x3F800000) +
                        -0x1.0000000000000p+0f) *
                0x1.0000000000000p+1f) +
        -0x1.0000000000000p+0f;
    LANES128(v13).n128_f32[2] =
        (float)((float)(COERCE_FLOAT((v9 >> 9) | 0x3F800000) +
                        -0x1.0000000000000p+0f) *
                0x1.0000000000000p+1f) +
        -0x1.0000000000000p+0f;
    v14 = vmulq_f32(v13, v13);
    LANES128(v14).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    LANES128(v14).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_u64[0];
    LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
    v15 = vrsqrteq_f32(v14);
    v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
    *(int8x16_t*)(v2 + v5) = vbicq_s8(
        vmulq_f32(v13, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
        vceqzq_f32(v14));
    v5 += 16;
  } while (v5 != 0x2000);
  return result;
}

void game_82eee0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 primeEm;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = a1 + 3928064;
  v3 = 0;
  do {
    v4 = a1 + v3;
    v3 += 784;
    *(_QWORD*)v4 = 0;
    *(_QWORD*)(v4 + 8) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 20) = 0;
    *(_QWORD*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 128) = 0;
    *(_QWORD*)(v4 + 140) = 0;
    *(_QWORD*)(v4 + 132) = 0;
    *(_QWORD*)(v4 + 152) = 0;
    *(_QWORD*)(v4 + 160) = 0;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 176) = 0;
    *(_QWORD*)(v4 + 184) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 232) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 240) = 0;
    *(_QWORD*)(v4 + 244) = 0;
    *(_QWORD*)(v4 + 356) = 0;
    *(_QWORD*)(v4 + 364) = 0;
    *(_QWORD*)(v4 + 252) = 0;
    *(_QWORD*)(v4 + 312) = 0;
    *(_QWORD*)(v4 + 320) = 0;
    *(_QWORD*)(v4 + 296) = 0;
    *(_QWORD*)(v4 + 304) = 0;
    *(_QWORD*)(v4 + 280) = 0;
    *(_QWORD*)(v4 + 288) = 0;
    *(_QWORD*)(v4 + 264) = 0;
    *(_QWORD*)(v4 + 272) = 0;
    *(_QWORD*)(v4 + 328) = 0;
    *(_QWORD*)(v4 + 336) = 0;
    *(_QWORD*)(v4 + 344) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 352) = 0;
    *(_QWORD*)(v4 + 424) = 0;
    *(_QWORD*)(v4 + 432) = 0;
    *(_QWORD*)(v4 + 408) = 0;
    *(_QWORD*)(v4 + 416) = 0;
    *(_QWORD*)(v4 + 468) = 0;
    *(_QWORD*)(v4 + 476) = 0;
    *(_QWORD*)(v4 + 392) = 0;
    *(_QWORD*)(v4 + 400) = 0;
    *(_QWORD*)(v4 + 376) = 0;
    *(_QWORD*)(v4 + 384) = 0;
    *(_QWORD*)(v4 + 440) = 0;
    *(_QWORD*)(v4 + 448) = 0;
    *(_QWORD*)(v4 + 456) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 464) = 0;
    *(_QWORD*)(v4 + 552) = 0;
    *(_QWORD*)(v4 + 544) = 0;
    *(_QWORD*)(v4 + 536) = 0;
    *(_QWORD*)(v4 + 528) = 0;
    *(_QWORD*)(v4 + 520) = 0;
    *(_QWORD*)(v4 + 580) = 0;
    *(_QWORD*)(v4 + 588) = 0;
    *(_QWORD*)(v4 + 504) = 0;
    *(_QWORD*)(v4 + 512) = 0;
    *(_QWORD*)(v4 + 488) = 0;
    *(_QWORD*)(v4 + 496) = 0;
    *(_QWORD*)(v4 + 560) = 0;
    *(_QWORD*)(v4 + 568) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 576) = 0;
    *(_QWORD*)(v4 + 664) = 0;
    *(_QWORD*)(v4 + 656) = 0;
    *(_QWORD*)(v4 + 648) = 0;
    *(_QWORD*)(v4 + 640) = 0;
    *(_QWORD*)(v4 + 632) = 0;
    *(_QWORD*)(v4 + 624) = 0;
    *(_QWORD*)(v4 + 616) = 0;
    *(_QWORD*)(v4 + 608) = 0;
    *(_QWORD*)(v4 + 600) = 0;
    *(_QWORD*)(v4 + 672) = 0;
    *(_QWORD*)(v4 + 680) = &GameData_1a9f09e;
    *(_WORD*)(v4 + 688) = 0;
    *(_QWORD*)(v4 + 692) = 0;
    *(_QWORD*)(v4 + 700) = 0;
    *(_QWORD*)(v4 + 776) = 0;
    *(_QWORD*)(v4 + 768) = 0;
    *(_QWORD*)(v4 + 760) = 0;
    *(_QWORD*)(v4 + 752) = 0;
    *(_QWORD*)(v4 + 744) = 0;
    *(_QWORD*)(v4 + 736) = 0;
    *(_QWORD*)(v4 + 728) = 0;
    *(_QWORD*)(v4 + 720) = 0;
    *(_QWORD*)(v4 + 712) = 0;
  } while (v3 != 3669904);
  *(_QWORD*)(a1 + 3932040) = 0;
  *(_DWORD*)(a1 + 3932048) = 0;
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      262136, 16, 0);
  v7 = v6 + 262136;
  *(_QWORD*)(v1 + 3992) = v6;
  *(_QWORD*)(v1 + 4008) = v6 + 262136;
  memset(v6, 0, 0x3FFF8u);
  *(_QWORD*)(v1 + 4000) = v7;
  v8 = (_QWORD*)(v1 + 4016);
  *(_QWORD*)(v1 + 4016) = 0;
  *(_QWORD*)(v1 + 4024) = 0;
  *(_QWORD*)(v1 + 4032) = 0;
  *(_QWORD*)(v1 + 4040) = 0;
  *(_DWORD*)(v1 + 4048) = 1065353216;
  primeEm = std___1___next_prime(0x7FFFu);
  v10 = *(_QWORD*)(v1 + 4024);
  v11 = primeEm;
  if (primeEm > v10) {
    goto LABEL_4;
  }
  if (primeEm < v10) {
    v12 = vcvtps_u64_f32((float)*(unsigned __int64*)(v1 + 4040) /
                         *(float*)(v1 + 4048));
    if (v10 < 3 || (v10 & (v10 - 1)) != 0) {
      v12 = std___1___next_prime(v12);
    }
    else {
      v13 = 1LL << -(char)__clz(v12 - 1);
      if (v12 >= 2) {
        v12 = v13;
      }
    }
    if (v11 <= v12) {
      v11 = v12;
    }
    if (v11 < v10) {
    LABEL_4:
      GameRoutine_82f300((__int64*)(v1 + 4016), v11);
    }
  }
  v14 = 0;
  v15 = 3669904;
  do {
    v16 = a1 + v14;
    v17 = (_QWORD*)(a1 + v15);
    v14 += 784;
    v15 += 56;
    *v17 = v16;
    v17[1] = v16 + 112;
    v17[2] = v16 + 224;
    v17[3] = v16 + 336;
    v17[4] = v16 + 448;
    v17[5] = v16 + 560;
    v17[6] = v16 + 672;
  } while (v14 != 3669904);
  v18 = *(_QWORD*)(v1 + 3992);
  *(_QWORD*)(v1 + 3976) = a1 + 3669904;
  *(_DWORD*)(v1 + 3984) = 0;
  *(_QWORD*)(v1 + 4000) = v18;
  if (*(_QWORD*)(v1 + 4040) != 0) {
    v19 = *(_QWORD**)(v1 + 4032);
    if (v19 != nullptr) {
      do {
        v20 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v21, (__int64)v19);
        v19 = v20;
      } while (v20 != nullptr);
    }
    v22 = *(_QWORD*)(v1 + 4024);
    *(_QWORD*)(v1 + 4032) = 0;
    if (v22 != 0) {
      v23 = v22 & 7;
      if (v22 >= 8) {
        v25 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v24 = 0;
        do {
          *(_QWORD*)(*v8 + 8 * v24) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 8) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 16) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 24) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 32) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 40) = 0;
          *(_QWORD*)(*v8 + 8 * v24 + 48) = 0;
          v26 = *v8 + 8 * v24;
          v24 += 8;
          *(_QWORD*)(v26 + 56) = 0;
        } while (v25 != v24);
      }
      else {
        v24 = 0;
      }
      if (v23 != 0) {
        v27 = 8 * v24;
        do {
          --v23;
          *(_QWORD*)(*v8 + v27) = 0;
          v27 += 8;
        } while (v23 != 0);
      }
    }
    *(_QWORD*)(v1 + 4040) = 0;
  }
}

__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            float* a1, float* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float32x4_t v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t* result;
  int v19;
  int8x16_t v20;
  unsigned int v21;
  int8x16_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float v27;
  int8x16_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  int8x16_t v39;
  int8x16_t v40;
  float v41;
  float v42;
  float32x4_t v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x2_t v58;
  float32x4_t v59;
  int8x16_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float32x4_t v66;
  int8x16_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float v80;
  float v81;
  bool v82;
  unsigned int v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  int8x16_t v92;
  int8x16_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  int8x16_t v103;
  int8x16_t v104;
  float32x4_t v105;
  int v106;
  int8x16_t v107;
  unsigned int v108;
  float32x4_t v109;
  int8x16_t v110;
  float32x4_t v111;
  int8x16_t v112;
  int v113;
  __int64 v114;
  int v115;
  __int64 v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  int8x16_t v121;
  float v122;
  float v123;
  float v124;
  unsigned __int64 v125;
  float v126;
  float v127;
  float v128;
  unsigned __int64 v129;
  float v130;
  float32x4_t v131;
  float32x4_t v132;
  int8x16_t v133;
  int8x16_t v134;
  float32x4_t v135;
  float32x4_t v136;
  float32x4_t v137;
  float32x4_t v138;
  struct {
    _QWORD v139[10];
    unsigned __int8 v140;
    char gap353_[103];
    float v141;
    float v142;
  } v139_;

  *(_QWORD*)(a3 + 8) = 0;
  v4 = -1024;
  do {
    v7 = a3 + v4;
    v4 += 128;
    *(_WORD*)(v7 + 1040) = 0;
    *(_DWORD*)(v7 + 1052) = 0;
    *(_WORD*)(v7 + 1056) = 0;
    *(_DWORD*)(v7 + 1068) = 0;
    *(_WORD*)(v7 + 1072) = 0;
    *(_DWORD*)(v7 + 1084) = 0;
    *(_WORD*)(v7 + 1088) = 0;
    *(_DWORD*)(v7 + 1100) = 0;
    *(_WORD*)(v7 + 1104) = 0;
    *(_DWORD*)(v7 + 1116) = 0;
    *(_WORD*)(v7 + 1120) = 0;
    *(_DWORD*)(v7 + 1132) = 0;
    *(_WORD*)(v7 + 1136) = 0;
    *(_DWORD*)(v7 + 1148) = 0;
    *(_WORD*)(v7 + 1152) = 0;
    *(_DWORD*)(v7 + 1164) = 0;
    *(_QWORD*)(v7 + 1044) = 0;
    *(_QWORD*)(v7 + 1060) = 0;
    *(_QWORD*)(v7 + 1076) = 0;
    *(_QWORD*)(v7 + 1092) = 0;
    *(_QWORD*)(v7 + 1108) = 0;
    *(_QWORD*)(v7 + 1124) = 0;
    *(_QWORD*)(v7 + 1140) = 0;
    *(_QWORD*)(v7 + 1156) = 0;
  } while (v4 != 0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
    GameHr_a5aca0((__int64)&GameData_21fdd90);
    GameRoutine_2b0();
    __cxa_guard_release((__int64)&GameData_21fde98);
  }
  v8 = a1[2];
  v9 = a1[3];
  v10 = a2[2];
  v11 = a2[3];
  LANES128(v12).n128_u32[3] = 0;
  v13 = a1[4];
  v14 = a2[4];
  v15 = v9 + (float)((float)(v11 - v9) * 0x1.99999a0000000p-5f);
  v16 = v11 + (float)((float)(v9 - v11) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_u32[3] = 0;
  LANES128(v12).n128_f32[0] =
      v8 + (float)((float)(v10 - v8) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[0] =
      v10 + (float)((float)(v8 - v10) * 0x1.99999a0000000p-5f);
  LANES128(v12).n128_f32[1] = v15;
  LANES128(v17).n128_f32[1] = v16;
  LANES128(v12).n128_f32[2] =
      v13 + (float)((float)(v14 - v13) * 0x1.99999a0000000p-5f);
  LANES128(v17).n128_f32[2] =
      v14 + (float)((float)(v13 - v14) * 0x1.99999a0000000p-5f);
  v137 = v17;
  v138 = v12;
  result = X8CALL_X0(float32x4_t*,
                     collision_670c60((void*)((__int64)v139_.v139), &v138,
                                      &v137, 0x1000100000001LL));
  v20 = *(int8x16_t*)v139_.v139;
  v19 = v139_.v140;
  *(_BYTE*)(a3 + 1) = 0;
  *(_BYTE*)a3 = v19;
  LANES128(v20).n128_u32[3] = 0;
  if (v19 != 0) {
    v21 = -1;
  }
  else {
    v21 = 0;
  }
  v22 = vandq_s8(v20, vdupq_n_s32(v21));
  v23 = vsubq_f32(v22, v138);
  v24 = vmulq_f32(v23, v23);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
          .n64_u64[0];
  v25 = vsubq_f32(v137, v138);
  v26 = vmulq_f32(v25, v25);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  *(_DWORD*)(a3 + 4) =
      LANES64_OF(
          vdiv_f32(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]))),
                   vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))))
          .n64_u32[0];
  if (v19 == 1) {
    v133 = v22;
    LANES128(v30).n128_u64[1] = 0;
    LANES128(v30).n128_f32[0] = a1[2] - a2[2];
    LANES128(v28).n128_f32[0] = LANES128(v30).n128_f32[0];
    HIDWORD(v29) = 0;
    v27 = a1[4] - a2[4];
    LANES128(v28).n128_f32[1] = a1[3] - a2[3];
    *(float*)&v29 = v27;
    LANES128(v30).n128_f32[1] = LANES128(v28).n128_f32[1];
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                              memory_order_acquire) &
         1) == 0) {
      v125 = v29;
      v127 = v27;
      v129 = LANES128(v28).n128_u64[0];
      v131 = v30;
      v113 = __cxa_guard_acquire((__int64)&GameData_21a6170);
      v29 = v125;
      v27 = v127;
      LANES128(v28).n128_u64[0] = v129;
      v30 = v131;
      if (v113 != 0) {
        v114 = *((_QWORD*)GameData_212c550 + 1);
        *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
        *((_QWORD*)&GameData_21a6160 + 1) = v114;
        __cxa_guard_release((__int64)&GameData_21a6170);
        v29 = v125;
        v27 = v127;
        LANES128(v28).n128_u64[0] = v129;
        v30 = v131;
      }
    }
    LANES128(v30).n128_f32[2] = v27;
    LANES128(v28).n128_u64[1] = v29;
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v31).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v34 = vmulq_f32(v31, v32);
    *(int8x8_t*)&LANES128(v33).n128_i8[8] =
        vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                  COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v35 = vmlsq_f32(v34, v32, v33);
    v36 = vmulq_f32(v35, v35);
    LANES128(v36).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v36).n128_f32[0] == 0x0.0p+0f) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v132 = v30;
        v115 = __cxa_guard_acquire((__int64)&GameData_21a6190);
        v30 = v132;
        if (v115 != 0) {
          v116 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v116;
          __cxa_guard_release((__int64)&GameData_21a6190);
          v30 = v132;
        }
      }
      v39 = COERCE_AS(int8x16_t, GameData_21a6180);
      LANES128(v39).n128_u32[3] = 0;
    }
    else {
      LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
      v37 = vrsqrteq_f32(v36);
      v38 = vmulq_f32(v37, vrsqrtsq_f32(v37, vmulq_f32(v36, v37)));
      v39 = vbicq_s8(
          vmulq_f32(v35,
                    vmulq_f32(v38, vrsqrtsq_f32(v38, vmulq_f32(v36, v38)))),
          vceqzq_f32(v36));
    }
    v40 = vmulq_f32(v39, v39);
    v41 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
    LANES128(v40).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
            .n64_u64[0];
    v128 = *((float*)GameData_212c190 + 1);
    v130 = *(float*)GameData_212c190;
    v126 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
    v139_.v141 =
        *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
    v42 = v139_.v141;
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v45 = *(float*)GameData_212c188;
    v47 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v46 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v48 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v49 = vrsqrteq_f32(v43);
    v139_.v142 = *((float*)GameData_212c188 + 1);
    v44 = v139_.v142;
    v124 = v45;
    v122 = v47;
    v123 = v41;
    v50 = vmulq_f32(v49, vrsqrtsq_f32(v49, vmulq_f32(v43, v49)));
    v51 = vmulq_f32(v30, v30);
    v52 = vsubq_f32(COERCE_AS(float32x4_t, 0), v30);
    *(_DWORD*)(a3 + 1040) = 2;
    v53 = vmulq_n_f32(
        vbicq_s8(vmulq_f32(v39, vmulq_f32(v50, vrsqrtsq_f32(
                                                   v50, vmulq_f32(v43, v50)))),
                 vceqzq_f32(v43)),
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.9442500000000p-8f)) *
                                                                              0x1.9442500000000p-8f)) *
                                                           0x1.9442500000000p-8f)) *
                                           0x1.9442500000000p-8f)) *
                        0x1.9442500000000p-8f) +
                0x1.0000000000000p+0f) *
            0x1.41b2f80000000p-4f);
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] = LANES128(v52).n128_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v57 = v53;
    LANES64(v58).n64_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v51, v51, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v54).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v52).n128_u64[0];
    LANES128(v57).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)((float)(v44 -
                                                                              (float)(v45 *
                                                                                      0x1.9442500000000p-8f)) *
                                                                      0x1.9442500000000p-8f)) *
                                                   0x1.9442500000000p-8f)) *
                                   0x1.9442500000000p-8f)) *
                0x1.9442500000000p-8f) +
        0x1.0000000000000p+0f;
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v59).n128_u64[0] = LANES64_OF(vpadd_f32(v58, v58)).n64_u64[0];
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v60 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v63 = vrsqrteq_f32(v59);
    *(int8x8_t*)&LANES128(v61).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]), 1);
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v65 = v44 - (float)(v45 * 0x0.0p+0f);
    LANES128(v66).n128_u64[0] = LANES128(v53).n128_u64[0];
    v67 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v43, v60),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v55, v61)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v56, v62)),
                  v64, v54);
    v68 = vmulq_f32(v63, vrsqrtsq_f32(v63, vmulq_f32(v59, v63)));
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v57).n128_u64[1],
                                                   LANES128(v53).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
    LANES128(v66).n128_u64[1] = LANES128(v61).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v53).n128_u64[0];
    *(int8x8_t*)&LANES128(v64).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v69 = vmulq_f32(v63, v67);
    LANES128(v63).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v62).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v67).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v63).n128_i8[8] =
        vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v121 = vbicq_s8(
        vmulq_f32(v30, vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v59, v68)))),
        vceqzq_f32(v59));
    v70 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v41 -
                                   (float)((float)(v42 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x0.0p+0f)) *
                                                                              0x0.0p+0f)) *
                                                           0x0.0p+0f)) *
                                           0x0.0p+0f)) *
                        0x0.0p+0f) +
                0x1.0000000000000p+0f) *
            0x0.0p+0f);
    v71 = vmlsq_f32(
        vmlaq_f32(vmlaq_f32(v69, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v66, v64)),
                  COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v56, v62)),
        v63, v61);
    v72 = v70;
    LANES128(v71).n128_u32[3] = 0;
    LANES128(v72).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v47 -
                                                              (float)(v65 *
                                                                      0x0.0p+0f)) *
                                                   0x0.0p+0f)) *
                                   0x0.0p+0f)) *
                0x0.0p+0f) +
        0x1.0000000000000p+0f;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v73 = vmulq_f32(v72, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v61).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v64).n128_u64[0];
    LANES128(v64).n128_u64[1] = LANES128(v71).n128_u64[0];
    LANES128(v71).n128_u64[1] = LANES128(v61).n128_u64[0];
    v74 = v54;
    v119 = v54;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v54).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v73).n128_u64[0]), 1);
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v120 = v61;
    v117 = v71;
    v118 = v64;
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v73, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v75 =
        vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v74, v73),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v71, v68)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v64, v54)),
                  v57, v61);
    LANES128(v61).n128_u64[0] = LANES128(v70).n128_u64[0];
    LANES128(v73).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v72).n128_u64[1],
                                                   LANES128(v70).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
    LANES128(v61).n128_u64[1] = LANES128(v72).n128_u64[0];
    LANES128(v72).n128_u64[1] = LANES128(v68).n128_u64[0];
    LANES128(v68).n128_u64[1] = LANES128(v70).n128_u64[0];
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v57).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v64).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0]), 1);
    v76 = vmulq_f32(v61, v57);
    LANES128(v61).n128_f32[0] = a1[4];
    v77 = vmlaq_f32(vmulq_f32(v73, v75),
                    COERCE_AS(float32x4_t, GameData_1a83800), v76);
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v78 = vmulq_f32(v68, v64);
    LANES128(v64).n128_u32[3] = 0;
    v79 =
        vmlsq_f32(vmlaq_f32(v77, COERCE_AS(float32x4_t, GameData_1a83800), v78),
                  v70, v72);
    LANES128(v70).n128_f32[0] = a1[2];
    LANES128(v72).n128_f32[0] = a1[3];
    LANES128(v64).n128_f32[0] =
        LANES128(v70).n128_f32[0] +
        (float)((float)((float)(LANES128(v70).n128_f32[0] +
                                LANES128(v79).n128_f32[0]) -
                        LANES128(v70).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[1] =
        LANES128(v72).n128_f32[0] +
        (float)((float)((float)(LANES128(v72).n128_f32[0] +
                                LANES128(v79).n128_f32[1]) -
                        LANES128(v72).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v64).n128_f32[2] =
        LANES128(v61).n128_f32[0] +
        (float)((float)((float)(LANES128(v61).n128_f32[0] +
                                LANES128(v79).n128_f32[2]) -
                        LANES128(v61).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v72).n128_u32[3] = 0;
    v136 = v64;
    LANES128(v72).n128_u64[0] = __PAIR64__(
        COERCE_UNSIGNED_INT(
            (float)(LANES128(v72).n128_f32[0] + LANES128(v79).n128_f32[1]) +
            (float)((float)((float)(LANES128(v72).n128_f32[0] -
                                    LANES128(v72).n128_f32[0]) +
                            LANES128(v79).n128_f32[1]) *
                    0x1.99999a0000000p-5f)),
        COERCE_UNSIGNED_INT(
            (float)(LANES128(v70).n128_f32[0] + LANES128(v79).n128_f32[0]) +
            (float)((float)((float)(LANES128(v70).n128_f32[0] -
                                    LANES128(v70).n128_f32[0]) +
                            LANES128(v79).n128_f32[0]) *
                    0x1.99999a0000000p-5f)));
    LANES128(v72).n128_f32[2] =
        (float)(LANES128(v61).n128_f32[0] + LANES128(v79).n128_f32[2]) +
        (float)((float)((float)(LANES128(v61).n128_f32[0] -
                                LANES128(v61).n128_f32[0]) +
                        LANES128(v79).n128_f32[2]) *
                0x1.99999a0000000p-5f);
    v135 = v72;
    collision_670c60((void*)((__int64)v139_.v139), &v136, &v135,
                     0x1000100000001LL);
    v80 = v139_.v141;
    v81 = v139_.v142;
    *(_BYTE*)(a3 + 17) = 0;
    v82 = v139_.v140 == 0;
    *(_BYTE*)(a3 + 16) = v139_.v140;
    if (v82) {
      v83 = 0;
    }
    else {
      v83 = -1;
    }
    v84 = vmulq_n_f32(
        v121,
        (float)((float)((float)-(
                            float)(v123 -
                                   (float)((float)(v80 +
                                                   (float)((float)-(
                                                               float)(v126 -
                                                                      (float)((float)(v128 -
                                                                                      (float)(v130 *
                                                                                              0x1.3bd3ce0000000p+1f)) *
                                                                              0x1.3bd3ce0000000p+1f)) *
                                                           0x1.3bd3ce0000000p+1f)) *
                                           0x1.3bd3ce0000000p+1f)) *
                        0x1.3bd3ce0000000p+1f) +
                0x1.0000000000000p+0f) *
            0x1.921fb60000000p+0f);
    v85 = v84;
    LANES128(v86).n128_u64[0] = LANES128(v84).n128_u64[0];
    LANES128(v85).n128_f32[3] =
        (float)((float)-(
                    float)(v48 -
                           (float)((float)(v46 +
                                           (float)((float)-(
                                                       float)(v122 -
                                                              (float)((float)(v81 -
                                                                              (float)(v124 *
                                                                                      0x1.3bd3ce0000000p+1f)) *
                                                                      0x1.3bd3ce0000000p+1f)) *
                                                   0x1.3bd3ce0000000p+1f)) *
                                   0x1.3bd3ce0000000p+1f)) *
                0x1.3bd3ce0000000p+1f) +
        0x1.0000000000000p+0f;
    v87 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v88).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v89).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v87).n128_u64[0]), 1);
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v87, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v91 = vmlaq_f32(vmlaq_f32(vmulq_f32(v119, v87),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v117, v88)),
                    COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v118, v89));
    v92 = *(int8x16_t*)v139_.v139;
    LANES128(v89).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v93 = vmlsq_f32(v91, v90, v120);
    LANES128(v85).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v88).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t,
                                       __PAIR128__(LANES128(v85).n128_u64[1],
                                                   LANES128(v84).n128_u64[0])),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v92).n128_u32[3] = 0;
    LANES128(v86).n128_u64[1] = LANES128(v89).n128_u64[0];
    LANES128(v90).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v85).n128_u64[1] = LANES128(v85).n128_u64[0];
    LANES128(v94).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v89).n128_u64[1] = LANES128(v88).n128_u64[0];
    LANES128(v88).n128_u64[1] = LANES128(v84).n128_u64[0];
    LANES128(v84).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v95 = vbslq_s8(vdupq_n_s32(v83), v92, v133);
    *(int8x8_t*)&LANES128(v90).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    *(int32x2_t*)&LANES128(v94).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v93).n128_u64[0]), 1);
    v96 = a1[4];
    v97 = vmulq_f32(v85, v93);
    v134 = v95;
    v98 = vmulq_f32(v86, v90);
    v99 = vsubq_f32(v137, v138);
    v100 = vsubq_f32(v95, v138);
    *(int8x8_t*)&LANES128(v84).n128_i8[8] =
        vqtbl1_s8(v93, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v101 = vmulq_f32(v88, v94);
    LANES128(v86).n128_u32[3] = 0;
    v102 = vmlaq_f32(v97, COERCE_AS(float32x4_t, GameData_1a83800), v98);
    v103 = vmulq_f32(v99, v99);
    v104 = vmulq_f32(v100, v100);
    v105 = vmlsq_f32(
        vmlaq_f32(v102, COERCE_AS(float32x4_t, GameData_1a83800), v101), v84,
        v89);
    LANES128(v101).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0])))
            .n64_u64[0];
    LANES128(v103).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])))
            .n64_u64[0];
    LANES128(v84).n128_f32[0] = a1[2];
    PSEUDO_LOW_LANE128(v104, n128_f32, a1[3]);
    LANES128(v86).n128_f32[0] =
        LANES128(v84).n128_f32[0] +
        (float)((float)((float)(LANES128(v84).n128_f32[0] +
                                LANES128(v105).n128_f32[0]) -
                        LANES128(v84).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    *(_DWORD*)(a3 + 20) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v103).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))))
            .n64_u32[0];
    LANES128(v86).n128_f32[1] =
        LANES128(v104).n128_f32[0] +
        (float)((float)((float)(LANES128(v104).n128_f32[0] +
                                LANES128(v105).n128_f32[1]) -
                        LANES128(v104).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v103).n128_u32[3] = 0;
    LANES128(v103).n128_f32[0] =
        (float)(LANES128(v84).n128_f32[0] + LANES128(v105).n128_f32[0]) +
        (float)((float)((float)(LANES128(v84).n128_f32[0] -
                                LANES128(v84).n128_f32[0]) +
                        LANES128(v105).n128_f32[0]) *
                0x1.99999a0000000p-5f);
    LANES128(v86).n128_f32[2] =
        v96 + (float)((float)((float)(v96 + LANES128(v105).n128_f32[2]) - v96) *
                      0x1.99999a0000000p-5f);
    LANES128(v103).n128_f32[1] =
        (float)(LANES128(v104).n128_f32[0] + LANES128(v105).n128_f32[1]) +
        (float)((float)((float)(LANES128(v104).n128_f32[0] -
                                LANES128(v104).n128_f32[0]) +
                        LANES128(v105).n128_f32[1]) *
                0x1.99999a0000000p-5f);
    v136 = v86;
    LANES128(v103).n128_f32[2] =
        (float)(v96 + LANES128(v105).n128_f32[2]) +
        (float)((float)(LANES128(v105).n128_f32[2] + (float)(v96 - v96)) *
                0x1.99999a0000000p-5f);
    v135 = v103;
    result = X8CALL_X0(float32x4_t*,
                       collision_670c60((void*)((__int64)v139_.v139), &v136,
                                        &v135, 0x1000100000001LL));
    v107 = *(int8x16_t*)v139_.v139;
    v106 = v139_.v140;
    *(_WORD*)(a3 + 32) = v139_.v140;
    LANES128(v107).n128_u32[3] = 0;
    if (v106 != 0) {
      v108 = -1;
    }
    else {
      v108 = 0;
    }
    v109 = vsubq_f32(vbslq_s8(vdupq_n_s32(v108), v107, v134), v138);
    v110 = vmulq_f32(v109, v109);
    LANES128(v110).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
            .n64_u64[0];
    v111 = vsubq_f32(v137, v138);
    v112 = vmulq_f32(v111, v111);
    LANES128(v112).n128_u64[0] =
        LANES64_OF(
            vadd_f32(
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v112, v112, 8u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))
            .n64_u64[0];
    *(_DWORD*)(a3 + 36) =
        LANES64_OF(
            vdiv_f32(vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]))),
                     vsqrt_f32(vpadd_f32(
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0])))))
            .n64_u32[0];
  }
  {
    result;
    return;
  }
}

__int64 game_ce5d20(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                    unsigned __int64 a5, char a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 i;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  double v20;
  float v21;
  int v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  _DWORD* v37;
  int v38;
  __int64 v39;
  char* v40;
  unsigned __int64 v41;
  char v42;
  __int64 v43;
  char* v44;
  unsigned __int64 v45;
  __int64 v46;
  char v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  __int64 v56;
  signed __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64* v64;
  _QWORD* v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  int v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  struct {
    __int64 v80;
    unsigned __int64 v81;
    char* v82;
  } v80_;
  struct {
    __int64 v83;
    unsigned __int64 v84;
    char* v85;
    _DWORD* v86;
    char v87;
  } v83_;
  struct {
    _QWORD v88[7];
    __int16 v89;
    char gap154_[2];
    int v90;
    __int64 v91;
    __int64 v92;
  } v88_;
  struct {
    __int64 v93;
    __int64 v94;
    char* v95;
    __int64 v96;
    __int64* v97;
    __int64 v98;
    __int64 v99;
  } v93_;
  int v100[3];

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *(_QWORD*)(a1 + 80);
  for (i = *(_QWORD*)(a1 + 88); i != v6; i -= 16) {
    v12 = *(_QWORD*)(i - 8);
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v12),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  *(_QWORD*)(a1 + 88) = v6;
  v13 = *(_QWORD*)(a1 + 40);
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v13),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 40) = 0;
    *(_DWORD*)(a1 + 32) = 0;
  }
  v88_.v88[6] = 0;
  v88_.v88[4] = -1;
  v88_.v88[5] = 0;
  v88_.v89 = 257;
  v16 = *v14;
  v88_.v90 = 0;
  v88_.v91 = a2;
  v88_.v92 = a3;
  v83_.v87 = 0;
  v83_.v85 = nullptr;
  v83_.v83 = 0;
  v83_.v84 = 0;
  v88_.v88[0] = nn_nlib_MemoryInputStream_vtable;
  __builtin_memset(&v88_.v88[1], 0, 24);
  v17 = fw_memory_HeapManager_Allocate(v16, 48, 16, 0),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)(v17 + 24) = 0;
  *(_QWORD*)v17 = 0;
  *(_DWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_WORD*)(v17 + 40) = 0;
  v83_.v86 = (_DWORD*)v17;
  v93_.v97 = nullptr;
  v93_.v98 = 0;
  v93_.v99 = 0;
  *(_DWORD*)(v17 + 16) = -1;
  v93_.v93 = 0x2000;
  v93_.v94 = 256;
  v93_.v95 = (_BYTE*)((_UNKNOWN*)0x800LL);
  v93_.v96 = 16;
  if (a5 != 0) {
    v93_.v94 = a5;
  }
  timeline_7910(v17, (__int64)&v93_.v93),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_7aa0((int**)v83_.v86, v88_.v88),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v83_.v87 & 1) == 0) {
    while (timeline_Cursor_HasNext(v83_.v86)) {
      v18 = timeline_Cursor_Next((_BYTE**)v83_.v86),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned int)(v18 - 2) < 9) {
        GameRoutine_60a020(a1, *((const char**)v83_.v86 + 3)),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        break;
      }
      if (v18 == 14) {
        v83_.v87 = 1;
        break;
      }
    }
  }
  if ((v83_.v87 & 1) == 0) {
    while (timeline_Cursor_HasNext(v83_.v86)) {
      v19 = timeline_Cursor_Next((_BYTE**)v83_.v86),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned int)(v19 - 2) < 9) {
        timeline_Value_ToDouble((__int64)(v83_.v86 + 4)),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v21 = v20;
        *(float*)(a1 + 24) = v21;
        if ((v83_.v87 & 1) == 0) {
          goto LABEL_27;
        }
        goto LABEL_34;
      }
      if (v19 == 14) {
        v83_.v87 = 1;
        break;
      }
    }
  }
  if ((v83_.v87 & 1) == 0) {
  LABEL_27:
    while (timeline_Cursor_HasNext(v83_.v86)) {
      v22 = timeline_Cursor_Next((_BYTE**)v83_.v86),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((unsigned int)(v22 - 2) < 9) {
        v23 = v83_.v86[4];
        if (v23 != 2) {
          if (v23 == 3) {
            *(_BYTE*)(a1 + 28) = 0;
          }
          break;
        }
        *(_BYTE*)(a1 + 28) = 1;
        if ((v83_.v87 & 1) == 0) {
        LABEL_38:
          while (timeline_Cursor_HasNext(v83_.v86)) {
            v25 = timeline_Cursor_Next((_BYTE**)v83_.v86),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((unsigned int)(v25 - 2) < 9) {
              v26 = timeline_Value_ToUInt((__int64)(v83_.v86 + 4)),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v24 = HIDWORD(v26);
              *(_DWORD*)(a1 + 32) = HIDWORD(v26);
              if (HIDWORD(v26) == 0) {
                goto LABEL_45;
              }
              goto LABEL_43;
            }
            if (v25 == 14) {
              v83_.v87 = 1;
              goto LABEL_35;
            }
          }
        }
        goto LABEL_35;
      }
      if (v22 == 14) {
        v83_.v87 = 1;
        goto LABEL_35;
      }
    }
  }
LABEL_34:
  if ((v83_.v87 & 1) == 0) {
    goto LABEL_38;
  }
LABEL_35:
  LODWORD(v24) = *(_DWORD*)(a1 + 32);
  if ((_DWORD)v24 != 0) {
  LABEL_43:
    v27 = (unsigned int)v24;
    v28 = fw_memory_HeapManager_Allocate(*v14, (unsigned int)v24, 16, 0),
    v20 = COERCE_AS(__typeof__(v20),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v29 = v83_.v87;
    v30 = v28;
    *(_QWORD*)(a1 + 40) = v28;
    if ((v29 & 1) != 0) {
      memset(v28, 0, v27),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v71 = 0;
      do {
        if ((v83_.v87 & 1) == 0) {
          while (timeline_Cursor_HasNext(v83_.v86)) {
            v73 = timeline_Cursor_Next((_BYTE**)v83_.v86),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((unsigned int)(v73 - 2) < 9) {
              v72 = timeline_Value_ToInt((__int64)(v83_.v86 + 4)) >> 32,
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              goto LABEL_134;
            }
            if (v73 == 14) {
              LOBYTE(v72) = 0;
              v83_.v87 = 1;
              goto LABEL_134;
            }
          }
        }
        LOBYTE(v72) = 0;
      LABEL_134:
        *(_BYTE*)(v30 + v71++) = v72;
      } while (v71 != v27);
    }
  }
LABEL_45:
  v31 = a4;
  while (2) {
    LOWORD(v80_.v80) = 0;
    do {
      do {
        if (!timeline_Cursor_HasNext(v83_.v86)) {
          v42 = 0;
          if ((v80_.v80 & 1) == 0) {
            goto LABEL_46;
          }
          goto LABEL_81;
        }
      } while ((unsigned int)timeline_Cursor_Next((_BYTE**)v83_.v86) != 15);
      v32 = *((const char**)v83_.v86 + 3);
      v33 = strlen(v32),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v34 = v33;
      if (v33 >= 0x17) {
        if ((v33 | 7) == 0x17) {
          v36 = 26;
        }
        else {
          v36 = (v33 | 7) + 1;
        }
        v35 = (char*)fw_memory_HeapManager_Allocate(*v14, v36, 16, 0),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v93_.v94 = v34;
        v93_.v95 = v35;
        v93_.v93 = v36 | 1;
      }
      else {
        v35 = (char*)&v93_.v93 + 1;
        LOBYTE(v93_.v93) = 2 * v33;
        if (v33 == 0) {
          goto LABEL_60;
        }
      }
      memmove((__int64)v35, (__int64)v32, v34),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_60:
      v37 = v83_.v86;
      v35[v34] = 0;
      if (!timeline_Cursor_HasNext(v37) ||
          (unsigned int)timeline_Cursor_Next((_BYTE**)v83_.v86) != 13) {
        v38 = 1;
        if ((v93_.v93 & 1) == 0) {
          continue;
        }
      LABEL_66:
        if (v93_.v95 != nullptr) {
          v39 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v39, (__int64)v93_.v95),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        continue;
      }
      if ((v80_.v80 & 1) != 0) {
        if ((v93_.v93 & 1) != 0) {
          v40 = v93_.v95;
        }
        else {
          v40 = (char*)&v93_.v93 + 1;
        }
        if ((v93_.v93 & 1) != 0) {
          v41 = v93_.v94;
        }
        else {
          v41 = (unsigned __int64)(unsigned __int8)v93_.v93 >> 1;
        }
        SpineModel_64dde0(&v80_.v80, (__int64)v40, v41),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        if ((v93_.v93 & 1) == 0) {
          v38 = 0;
          v80_.v80 = v93_.v93;
          v80_.v81 = v93_.v94;
          v80_.v82 = v93_.v95;
          continue;
        }
        GameRoutine_64df20(&v80_.v80, (__int64)v93_.v95, v93_.v94),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v38 = 0;
      if ((v93_.v93 & 1) != 0) {
        goto LABEL_66;
      }
    } while (v38 != 0);
    if ((v83_.v83 & 1) != 0) {
      if ((v80_.v80 & 1) != 0) {
        v44 = v80_.v82;
      }
      else {
        v44 = (char*)&v80_.v80 + 1;
      }
      if ((v80_.v80 & 1) != 0) {
        v45 = v80_.v81;
      }
      else {
        v45 = (unsigned __int64)(unsigned __int8)v80_.v80 >> 1;
      }
      SpineModel_64dde0(&v83_.v83, (__int64)v44, v45),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if ((v80_.v80 & 1) != 0) {
      GameRoutine_64df20(&v83_.v83, (__int64)v80_.v82, v80_.v81),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v83_.v83 = v80_.v80;
      v83_.v84 = v80_.v81;
      v83_.v85 = v80_.v82;
    }
    v46 = *(_QWORD*)(v31 + 32);
    v47 = v80_.v80;
    v83_.v87 = 0;
    if (v46 != 0) {
      if ((v80_.v80 & 1) != 0) {
        v48 = v80_.v82;
      }
      else {
        v48 = (char*)&v80_.v80 + 1;
      }
      v49 = strlen(v48),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v100[0] = wld_Crc32(0, (unsigned __int8*)v48, v49),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v50 = *(_QWORD*)(v31 + 32);
      if (v50 == 0) {
        GameRoutine_60a310(),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, int*))(
          *(_QWORD*)v50 + 48LL))((void*)(&v93_.v93), v50, v100),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v93_.v93 != 0) {
        (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v93_.v93 + 40LL))(
            v93_.v93, &v83_.v83, 0),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v51 = v93_.v93;
        *(_QWORD*)(v93_.v93 + 16) = a1;
        v52 = *(__int64**)(a1 + 88);
        v53 = *(_QWORD*)(a1 + 96);
        if ((unsigned __int64)v52 >= v53) {
          v56 = *(_QWORD*)(a1 + 80);
          v57 = (signed __int64)v52 - v56;
          v58 = ((__int64)v52 - v56) >> 4;
          v59 = v58 + 1;
          if ((unsigned __int64)(v58 + 1) >> 60 != 0) {
            GameRoutine_ce7000(),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v60 = v53 - v56;
          if (v60 >> 3 > v59) {
            v59 = v60 >> 3;
          }
          if ((unsigned __int64)v60 >= 0x7FFFFFFFFFFFFFF0LL) {
            v61 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v61 = v59;
          }
          if (v61 >> 60 != 0) {
            GameRoutine_60a210(),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v62 = fw_memory_HeapManager_Allocate(*v14, 16 * v61, 16, 0),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v63 = v93_.v94;
          v64 = (__int64*)(v62 + v57);
          *v64 = v51;
          v64[1] = v63;
          if (v63 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                      memory_order_relaxed);
            v65 = (_QWORD*)a1;
            v56 = *(_QWORD*)(a1 + 80);
            v57 = *(_QWORD*)(a1 + 88) - v56;
            v58 = v57 >> 4;
          }
          else {
            v65 = (_QWORD*)a1;
          }
          v66 = (__int64)&v64[-2 * v58];
          v67 = v62 + 16 * v61;
          v55 = v64 + 2;
          memcpy(v66, v56, v57),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v65[10] = v66;
          v65[11] = v55;
          v65[12] = v67;
          if (v56 != 0) {
            v68 = 128;
            if (*(_QWORD*)(*v14 + 200) == 0) {
              v68 = 56;
            }
            nn_mem_StandardAllocator_Free(*v14 + v68, v56),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v31 = a4;
        }
        else {
          *v52 = v51;
          v54 = v93_.v94;
          v52[1] = v93_.v94;
          if (v54 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                                      memory_order_relaxed);
          }
          v55 = v52 + 2;
        }
        *(_QWORD*)(a1 + 88) = v55;
      }
      v69 = v93_.v94;
      if (v93_.v94 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v93_.v94 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v69),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v47 = v80_.v80;
    }
    v42 = 1;
    if ((v47 & 1) != 0) {
    LABEL_81:
      if (v80_.v82 != nullptr) {
        v43 = 128;
        if (*(_QWORD*)(*v14 + 200) == 0) {
          v43 = 56;
        }
        nn_mem_StandardAllocator_Free(*v14 + v43, (__int64)v80_.v82),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  LABEL_46:
    if ((v42 & 1) != 0) {
      continue;
    }
    break;
  }
  if ((a6 & 1) != 0) {
    v93_.v93 = (__int64)GameData_1fd7c18;
    v93_.v97 = &v93_.v93;
    GameRoutine_ce6740(a1, (__int64)&v93_.v93),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v93_.v97 == &v93_.v93) {
      v70 = 32;
    LABEL_142:
      (*(void (**)(__int64))(*v93_.v97 + v70))((__int64)v93_.v97),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else if (v93_.v97 != nullptr) {
      v70 = 40;
      goto LABEL_142;
    }
  }
  v74 = (__int64*)v83_.v86;
  v83_.v86 = nullptr;
  if (v74 != nullptr) {
    Value_77d0(v74),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v75 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v75, (__int64)v74),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if ((v83_.v83 & 1) != 0 && v83_.v85 != nullptr) {
    v76 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(*v14 + v76, (__int64)v83_.v85),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return (*(__int64 (**)(_QWORD*))(v88_.v88[0] + 24LL))(v88_.v88);
}

void game_d3a060(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10[3];

  v2 = *(_DWORD*)(a1 + 16);
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 320LL);
  strcpy((char*)v10, "\"Signal_BeginTrail");
  Signal_d30dc0(v3, (const char*)v10 + 1, 17, v2);
  if ((v10[0] & 1) != 0 && v10[2] != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v10[2]);
  }
  v5 = *(_QWORD*)(a1 + 24);
  v6 = *(_QWORD*)(a1 + 32);
  if (v5 != v6) {
    v7 = GameData_21c6978;
    do {
      v8 = *(_QWORD*)(v7 + 32);
      if (v8 != *(_QWORD*)(v7 + 24) && *(_QWORD*)(v8 - 8) != 0) {
        GameHr_a867a0(v5);
        v7 = GameData_21c6978;
      }
      v5 += 16;
    } while (v5 != v6);
    v5 = *(_QWORD*)(a1 + 24);
  }
  *(_QWORD*)(a1 + 32) = v5;
  if (v5 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  v5);
  }
}

__int64 game_d5da40(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int* v17;
  int* v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  signed __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  float32x4_t v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  bool v66;
  float32x4_t v67;
  float32x4_t v68;
  unsigned __int64 v69;
  __int64* v70;
  __int64* v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  _QWORD* v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  _QWORD* v82;
  __int64* v83;
  __int64* v84;
  __int64 v85;
  _QWORD* v86;
  _QWORD* v87;
  float32x4_t v88;
  float32x4_t v89;
  int8x16_t v90;
  __int64* v91;
  __int64* v92;
  _QWORD* v93;
  __int64 v94;
  _QWORD* v95;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  __int64 v99;
  _QWORD* v100;
  _QWORD* v101;
  _QWORD* v102;
  __int64* v103;
  __int64* v104;
  __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  float32x4_t v108;
  float32x4_t v109;
  int8x16_t v110;
  __int64 v111;
  unsigned int v112;
  __int64 v113;
  __int64 v115;
  __int64 v116;
  __int64 v118;
  __int64 v119;
  float32x4_t v120;
  _QWORD* v121;
  _QWORD v122[2];
  _QWORD* v123;
  _QWORD v124[2];
  _QWORD* v125;
  struct {
    _QWORD v126[2];
    int v127;
    __int16 v128;
  } v126_;
  struct {
    __int64 v129[3];
    char* v130;
    char* v131;
    __int64 v132;
  } v129_;
  struct {
    __int64 v133[3];
    __int64 v134;
    __int64 v135;
  } v133_;
  _BYTE v136[240];
  struct {
    float32x4_t v137;
    __int64 v138;
    _QWORD* v139;
  } v137_;
  struct {
    _QWORD v140[2];
    _QWORD* v141;
  } v140_;
  struct {
    _QWORD v142[2];
    int v143;
    __int16 v144;
    char gap542_[2];
    int* v145;
    int* v146;
    __int64 v147;
    __int64 v148;
    __int64 v149;
    __int64 v150;
    __int64 v151;
    __int64 v152;
    __int64 v153;
    __int64 v154;
    __int64 v155;
  } v142_;
  struct {
    __int64* v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
  } v156_;

  GameRoutine_edf510((void*)((__int64)v136),
                     *(_QWORD*)GameData_212dc38[0] + 16LL);
  v124[0] = 0;
  v124[1] = 0;
  v126_.v126[0] = 0;
  v126_.v126[1] = 0;
  v126_.v127 = 0;
  __builtin_memset(v129_.v129, 0, sizeof(v129_.v129));
  v129_.v130 = nullptr;
  v129_.v131 = nullptr;
  v129_.v132 = 0;
  __builtin_memset(v133_.v133, 0, sizeof(v133_.v133));
  v133_.v134 = 0;
  v133_.v135 = 0;
  v121 = v122;
  v122[0] = 0;
  v122[1] = 0;
  v123 = v124;
  v125 = v126_.v126;
  v126_.v128 = 256;
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v5 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v5 = 0;
  }
  if (GameData_22127a8 != 0) {
    v6 = (_QWORD*)GameData_22127a8;
  }
  else {
    v6 = (_QWORD*)v5;
  }
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v6[10] != 0) {
    v8 = (_QWORD*)v6[9];
    if (v8 != nullptr) {
      do {
        v9 = (_QWORD*)*v8;
        if (*(_QWORD*)(*v7 + 200) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(*v7 + v10, (__int64)v8);
        v8 = v9;
      } while (v9 != nullptr);
    }
    v11 = v6[8];
    v6[9] = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(v6[7] + 8 * v13) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 8) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 16) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 24) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 32) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 40) = 0;
          *(_QWORD*)(v6[7] + 8 * v13 + 48) = 0;
          v15 = v6[7] + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(v6[7] + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    v6[10] = 0;
  }
  v18 = *(int**)(a1 + 32);
  v17 = *(int**)(a1 + 40);
  v19 = (char*)v17 - (char*)v18;
  LODWORD(v156_.v156) = *(_DWORD*)(a1 + 24);
  v20 = *(_WORD*)(a1 + 28);
  v156_.v157 = 0;
  v156_.v158 = 0;
  v156_.v159 = 0;
  WORD2(v156_.v156) = v20;
  if (v17 != v18) {
    if (0xCCCCCCCCCCCCCCCDLL * (v19 >> 4) >= 0x333333333333334LL) {
      GameRoutine_d5e820();
    }
    v21 = fw_memory_HeapManager_Allocate(*v7, (char*)v17 - (char*)v18, 16, 0);
    v156_.v157 = v21;
    v156_.v159 = v21 + v19;
    do {
      GameRoutine_d5e840(v21, v18);
      v18 += 20;
      v21 += 80;
    } while (v18 != v17);
    v156_.v158 = v21;
  }
  v140_.v140[0] = 0;
  v140_.v140[1] = 0;
  v142_.v142[0] = 0;
  v142_.v142[1] = 0;
  v142_.v143 = 0;
  LODWORD(v156_.v156) = 3;
  v142_.v145 = nullptr;
  v142_.v146 = nullptr;
  v142_.v147 = 0;
  v142_.v148 = 0;
  v142_.v149 = 0;
  v142_.v150 = 0;
  v142_.v151 = 0;
  v142_.v152 = 0;
  v142_.v153 = 0;
  v142_.v154 = 0;
  v142_.v155 = 0;
  LANES128(v137_.v137).n128_u64[0] =
      (unsigned __int64)&LANES128(v137_.v137).n128_u64[1];
  LANES128(v137_.v137).n128_u64[1] = 0;
  v137_.v138 = 0;
  v137_.v139 = v140_.v140;
  v140_.v141 = v142_.v142;
  v142_.v144 = 256;
  game_ff33e0((__int64)&v137_.v137, (int*)&v156_.v156);
  v118 = v142_.v154;
  v119 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 152LL);
  if (v119 != v142_.v154) {
    v116 = a2;
    GameRoutine_d5e9a0((__int64*)&v121, LANES128(v137_.v137).n128_u64[0],
                       &LANES128(v137_.v137).n128_u64[1]);
    GameRoutine_d5e9a0((__int64*)&v123, v137_.v139, v140_.v140);
    GameRoutine_d5e9a0((__int64*)&v125, v140_.v141, v142_.v142);
    v126_.v127 = v142_.v143;
    v126_.v128 = v142_.v144;
    GameRoutine_d5f8e0(v129_.v129, v142_.v145, v142_.v146,
                       0xCCCCCCCCCCCCCCCDLL *
                           (((char*)v142_.v146 - (char*)v142_.v145) >> 4));
    v23 = v142_.v148;
    v22 = v142_.v149;
    v24 = v129_.v132;
    v25 = v142_.v149 - v142_.v148;
    v26 = v129_.v130;
    if (v142_.v149 - v142_.v148 >
        (unsigned __int64)(v129_.v132 - (_QWORD)v129_.v130)) {
      v27 = 0x86BCA1AF286BCA1BLL * (v25 >> 3);
      if (v129_.v130 != nullptr) {
        v28 = (__int64)v129_.v131;
        if (v129_.v130 == v129_.v131) {
          goto LABEL_33;
        }
        do {
          v28 -= 152;
          GameRoutine_d5fd80(v28);
        } while ((char*)v28 != v26);
        v129_.v131 = v26;
        v26 = v129_.v130;
        if (v129_.v130 != nullptr) {
        LABEL_33:
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v26);
        }
        v24 = 0;
        v129_.v131 = nullptr;
        v129_.v132 = 0;
        v129_.v130 = nullptr;
      }
      if (v27 <= 0x1AF286BCA1AF286LL) {
        v30 = 0x86BCA1AF286BCA1BLL * (v24 >> 3);
        v31 = 2 * v30;
        if (2 * v30 <= v27) {
          v31 = v27;
        }
        v32 = v30 >= 0xD79435E50D7943LL ? 0x1AF286BCA1AF286LL : v31;
        if (v32 <= 0x1AF286BCA1AF286LL) {
          v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          v33 = 152 * v32;
          v34 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 152 * v32, 16, 0);
          v129_.v130 = (char*)v34;
          v129_.v131 = (char*)v34;
          v129_.v132 = v34 + v33;
          if (v23 != v22) {
            v35 = 0;
            do {
              v37 = (_QWORD*)(v23 + v35);
              v38 = (_QWORD*)(v34 + v35);
              GameRoutine_d5e840(v34 + v35, (int*)(v23 + v35));
              v38[10] = *(_QWORD*)(v23 + v35 + 80);
              v39 = *(_QWORD*)(v23 + v35 + 88);
              v38[11] = v39;
              if (v39 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v39 + 8),
                                          1u, memory_order_relaxed);
              }
              v38[12] = v37[12];
              v38[13] = v37[13];
              v40 = v37[14];
              v38[14] = v40;
              if (v40 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8),
                                          1u, memory_order_relaxed);
              }
              v41 = (__int64*)(v34 + v35);
              if ((*(_BYTE*)(v23 + v35 + 120) & 1) != 0) {
                fw_text_String_CopyTerminated(v41 + 15,
                                              *(_QWORD*)(v23 + v35 + 136),
                                              *(_QWORD*)(v23 + v35 + 128));
              }
              else {
                v42 = *(_QWORD*)(v23 + v35 + 120);
                v43 = *(_QWORD*)(v23 + v35 + 136);
                v41[16] = *(_QWORD*)(v23 + v35 + 128);
                v41[17] = v43;
                v41[15] = v42;
              }
              v36 = v23 + v35;
              v35 += 152;
              v38[18] = *(_QWORD*)(v36 + 144);
            } while (v23 + v35 != v22);
            v34 += v35;
            v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          v129_.v131 = (char*)v34;
        LABEL_78:
          a2 = v116;
          goto LABEL_79;
        }
      }
      GameRoutine_d5ff80();
    }
    v44 = (__int64)v129_.v131;
    v45 = v129_.v131 - v129_.v130;
    if (v25 > (unsigned __int64)(v129_.v131 - v129_.v130)) {
      v46 = v142_.v148 + v45;
      if (v129_.v131 != v129_.v130) {
        do {
          GameRoutine_d5fc50(v26, v23);
          v23 += 152;
          v26 += 152;
          v45 -= 152LL;
        } while (v45 != 0);
        v44 = (__int64)v129_.v131;
      }
      v47 = v44;
      if (v46 != v22) {
        v48 = 0;
        do {
          v50 = (_QWORD*)(v46 + v48);
          v51 = (_QWORD*)(v44 + v48);
          GameRoutine_d5e840(v44 + v48, (int*)(v46 + v48));
          v51[10] = *(_QWORD*)(v46 + v48 + 80);
          v52 = *(_QWORD*)(v46 + v48 + 88);
          v51[11] = v52;
          if (v52 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 8), 1u,
                                      memory_order_relaxed);
          }
          v51[12] = v50[12];
          v51[13] = v50[13];
          v53 = v50[14];
          v51[14] = v53;
          if (v53 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                                      memory_order_relaxed);
          }
          v54 = (__int64*)(v44 + v48);
          if ((*(_BYTE*)(v46 + v48 + 120) & 1) != 0) {
            fw_text_String_CopyTerminated(v54 + 15, *(_QWORD*)(v46 + v48 + 136),
                                          *(_QWORD*)(v46 + v48 + 128));
          }
          else {
            v55 = *(_QWORD*)(v46 + v48 + 120);
            v56 = *(_QWORD*)(v46 + v48 + 136);
            v54[16] = *(_QWORD*)(v46 + v48 + 128);
            v54[17] = v56;
            v54[15] = v55;
          }
          v49 = v46 + v48;
          v48 += 152;
          v51[18] = *(_QWORD*)(v49 + 144);
        } while (v46 + v48 != v22);
        v47 = v44 + v48;
        v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      }
      v129_.v131 = (char*)v47;
      goto LABEL_78;
    }
    if (v142_.v148 == v142_.v149) {
      a2 = v116;
      if (v129_.v130 == v129_.v131) {
      LABEL_75:
        v129_.v131 = v26;
      LABEL_79:
        GameRoutine_d5ffa0(v133_.v133, v142_.v151, v142_.v152,
                           (v142_.v152 - v142_.v151) >> 3);
        v133_.v134 = v142_.v154;
        v133_.v135 = v142_.v155;
        goto LABEL_80;
      }
    }
    else {
      a2 = v116;
      do {
        GameRoutine_d5fc50(v26, v23);
        v23 += 152;
        v26 += 152;
      } while (v23 != v22);
      v44 = (__int64)v129_.v131;
      if (v26 == v129_.v131) {
        goto LABEL_75;
      }
    }
    do {
      v44 -= 152;
      GameRoutine_d5fd80(v44);
    } while ((char*)v44 != v26);
    goto LABEL_75;
  }
LABEL_80:
  GameRoutine_ff32a0(&v137_.v137);
  v57 = v156_.v157;
  if (v156_.v157 != 0) {
    v58 = v156_.v158;
    if (v156_.v157 == v156_.v158) {
      goto LABEL_84;
    }
    do {
      v58 -= 80;
      GameRoutine_d5e6c0(v58);
    } while (v58 != v57);
    v156_.v158 = v57;
    v57 = v156_.v157;
    if (v156_.v157 != 0) {
    LABEL_84:
      v59 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v59, v57);
    }
  }
  if (v119 == v118) {
    goto LABEL_165;
  }
  v60 = *(_QWORD*)(a1 + 8);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_21a6130) != 0) {
    v115 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v115;
    __cxa_guard_release((__int64)&GameData_21a6130);
  }
  if (*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 32LL) == 0) {
    v120 = COERCE_AS(float32x4_t, GameData_21a6120);
    v62 = *(_QWORD*)(*GameData_212d458[0] + 80);
    if (v62 != 0) {
      v63 = *(_QWORD*)(*GameData_212d458[0] + 72);
      v64 = *(_QWORD*)(*GameData_212d458[0] + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 16), 1u,
                                memory_order_relaxed);
      v65 = std___1___shared_weak_count_lock(v64);
      std___1___shared_weak_count___release_weak(v62);
      v66 = v65 == 0 || v63 == 0;
      if (!v66) {
        v67 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v63 + 24) + 16LL) + 560LL);
        LANES128(v67).n128_u32[3] = 0;
        v120 = v67;
      LABEL_101:
        if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
          std___1___shared_weak_count___release_weak(v65);
        }
        goto LABEL_103;
      }
    }
    else {
      v65 = 0;
    }
    if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 1) {
      v68 = *(float32x4_t*)(*(_QWORD*)GameData_212c6a0[0] + 128LL);
      LANES128(v68).n128_u32[3] = 0;
      v120 = v68;
    }
    if (v65 == 0) {
      goto LABEL_103;
    }
    goto LABEL_101;
  }
  v61 = *(float32x4_t*)(*(_QWORD*)GameData_212dc38[0] + 32LL);
  LANES128(v61).n128_u32[3] = 0;
  v120 = v61;
LABEL_103:
  game_ff6680((void*)(&v156_.v156), (__int64)&v121, v60);
  if (a3 != 0) {
    v70 = v156_.v156;
    v71 = (__int64*)v156_.v157;
    if (v156_.v156 != (__int64*)v156_.v157) {
      v72 = *(_QWORD*)(a3 + 264);
      v73 = (_QWORD*)(v60 + 32);
      while (1) {
        v74 = *v70;
        if (*v70 == v72) {
          goto LABEL_158;
        }
        v75 = v123;
        if (v123 == v124) {
        LABEL_118:
          v82 = *(_QWORD**)(v60 + 24);
          if (v82 == v73) {
            goto LABEL_106;
          }
          while (1) {
            v83 = (__int64*)v82[7];
            v84 = (__int64*)v82[8];
            if (v83 != v84) {
              break;
            }
          LABEL_122:
            v86 = (_QWORD*)v82[1];
            if (v86 != nullptr) {
              do {
                v87 = v86;
                v86 = (_QWORD*)*v86;
              } while (v86 != nullptr);
            }
            else {
              do {
                v87 = (_QWORD*)v82[2];
                v66 = v82 == (_QWORD*)*v87;
                v82 = v87;
              } while (!v66);
            }
            v82 = v87;
            if (v87 == v73) {
              goto LABEL_106;
            }
          }
          while (1) {
            v85 = *v83;
            v83 += 6;
            v78 = v85;
            if (*(_QWORD*)(v85 + 56) == v74) {
              break;
            }
            if (v83 == v84) {
              goto LABEL_122;
            }
          }
        }
        else {
          while (1) {
            v76 = (__int64*)v75[7];
            v77 = (__int64*)v75[8];
            if (v76 != v77) {
              break;
            }
          LABEL_112:
            v80 = (_QWORD*)v75[1];
            if (v80 != nullptr) {
              do {
                v81 = v80;
                v80 = (_QWORD*)*v80;
              } while (v80 != nullptr);
            }
            else {
              do {
                v81 = (_QWORD*)v75[2];
                v66 = v75 == (_QWORD*)*v81;
                v75 = v81;
              } while (!v66);
            }
            v75 = v81;
            if (v81 == v124) {
              goto LABEL_118;
            }
          }
          while (1) {
            v79 = *v76;
            v76 += 6;
            v78 = v79;
            if (*(_QWORD*)(v79 + 56) == v74) {
              break;
            }
            if (v76 == v77) {
              goto LABEL_112;
            }
          }
        }
        LANES128(v88).n128_u64[0] = *(_QWORD*)(v78 + 184);
        LODWORD(v69) = *(_DWORD*)(v78 + 192);
        LANES128(v88).n128_u64[1] = v69;
        v89 = vsubq_f32(v88, v120);
        v90 = vmulq_f32(v89, v89);
        LANES128(v90).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v90, v90, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
                .n64_u64[0];
        v69 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
                  .n64_u64[0];
        if (*(float*)&v69 < 0x1.9000000000000p+6f) {
          LODWORD(v137_.v138) = 1061997773;
          v137_.v137 = vaddq_f32(v88, COERCE_AS(float32x4_t, GameData_1a83850));
          if (nn_g3d_5eb5c0((__int64)v136, &v137_.v137)) {
            goto LABEL_158;
          }
        }
      LABEL_106:
        if (++v70 == v71) {
          goto LABEL_160;
        }
      }
    }
    goto LABEL_160;
  }
  v91 = v156_.v156;
  v92 = (__int64*)v156_.v157;
  if (v156_.v156 == (__int64*)v156_.v157) {
  LABEL_160:
    v111 = (__int64)v156_.v156;
    if (v156_.v156 != nullptr) {
      v112 = 0;
      v156_.v157 = (__int64)v156_.v156;
    LABEL_162:
      v113 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v113 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v113, v111);
      goto LABEL_166;
    }
  LABEL_165:
    v112 = 0;
    goto LABEL_166;
  }
  v93 = (_QWORD*)(v60 + 32);
  while (1) {
    v94 = *v91;
    v95 = v123;
    if (v123 != v124) {
      break;
    }
  LABEL_145:
    v102 = *(_QWORD**)(v60 + 24);
    if (v102 != v93) {
      while (1) {
        v103 = (__int64*)v102[7];
        v104 = (__int64*)v102[8];
        if (v103 != v104) {
          break;
        }
      LABEL_149:
        v106 = (_QWORD*)v102[1];
        if (v106 != nullptr) {
          do {
            v107 = v106;
            v106 = (_QWORD*)*v106;
          } while (v106 != nullptr);
        }
        else {
          do {
            v107 = (_QWORD*)v102[2];
            v66 = v102 == (_QWORD*)*v107;
            v102 = v107;
          } while (!v66);
        }
        v102 = v107;
        if (v107 == v93) {
          goto LABEL_134;
        }
      }
      while (1) {
        v105 = *v103;
        v103 += 6;
        v98 = v105;
        if (*(_QWORD*)(v105 + 56) == v94) {
          goto LABEL_156;
        }
        if (v103 == v104) {
          goto LABEL_149;
        }
      }
    }
  LABEL_134:
    if (++v91 == v92) {
      goto LABEL_160;
    }
  }
  while (1) {
    v96 = (__int64*)v95[7];
    v97 = (__int64*)v95[8];
    if (v96 != v97) {
      break;
    }
  LABEL_139:
    v100 = (_QWORD*)v95[1];
    if (v100 != nullptr) {
      do {
        v101 = v100;
        v100 = (_QWORD*)*v100;
      } while (v100 != nullptr);
    }
    else {
      do {
        v101 = (_QWORD*)v95[2];
        v66 = v95 == (_QWORD*)*v101;
        v95 = v101;
      } while (!v66);
    }
    v95 = v101;
    if (v101 == v124) {
      goto LABEL_145;
    }
  }
  while (1) {
    v99 = *v96;
    v96 += 6;
    v98 = v99;
    if (*(_QWORD*)(v99 + 56) == v94) {
      break;
    }
    if (v96 == v97) {
      goto LABEL_139;
    }
  }
LABEL_156:
  LANES128(v108).n128_u64[0] = *(_QWORD*)(v98 + 184);
  LODWORD(v69) = *(_DWORD*)(v98 + 192);
  LANES128(v108).n128_u64[1] = v69;
  v109 = vsubq_f32(v108, v120);
  v110 = vmulq_f32(v109, v109);
  LANES128(v110).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v110, v110, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
          .n64_u64[0];
  v69 =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0])))
          .n64_u64[0];
  if (*(float*)&v69 >= 0x1.9000000000000p+6f) {
    goto LABEL_134;
  }
  LODWORD(v137_.v138) = 1061997773;
  v137_.v137 = vaddq_f32(v108, COERCE_AS(float32x4_t, GameData_1a83850));
  if (!nn_g3d_5eb5c0((__int64)v136, &v137_.v137)) {
    goto LABEL_134;
  }
LABEL_158:
  GameRoutine_f48ea0(a2, *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL),
                     0x1.0000000000000p-1f, 0x1.99999a0000000p-3f);
  v111 = (__int64)v156_.v156;
  if (v156_.v156 != nullptr) {
    v156_.v157 = (__int64)v156_.v156;
    v112 = 1;
    goto LABEL_162;
  }
  v112 = 1;
LABEL_166:
  GameRoutine_ff32a0(&v121);
  return v112;
}

__int64 game_f69f40(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  float32x4_t v11;
  float32x4_t v12;
  __int64 v13;
  __int64 v14;
  struct {
    float32x4_t v16;
    unsigned __int32 v17;
  } v16_;
  float32x4_t v18[13];

  v2 = *(_QWORD*)(a1 + 160);
  if (v2 != 0) {
    if ((*(_BYTE*)(GameData_2212260 + 12) & 1) == 0) {
      goto LABEL_20;
    }
    v3 =
        ((*(_DWORD*)(GameData_2212260 + 8) - 1) & 0xFFFFFFFD) != 0 ? 4LL : 12LL;
    v4 = ((*(_DWORD*)(GameData_2212260 + 8) - 1) & 0xFFFFFFFD) != 0
             ? "Open"
             : "Open_Reverse";
    GameHr_c08540(v2, (__int64)v4, v3, 0, 0x0.0p+0f);
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v7 = GameData_2212260;
    strcpy(v6, "SE_OBJ_Door_Open_Metal_L");
    if ((*(_BYTE*)(v7 + 12) & 1) == 0 ||
        (v8 = (__int64)v6,
         game_f6af20(LANES128(v18[0]).n128_u64, *(_DWORD*)(v7 + 8)),
         (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0)) {
    LABEL_20:
      GameRoutine_8123d0();
    }
    v9 = *(unsigned int*)(GameData_2212260 + 8);
    if ((unsigned int)v9 > 3) {
      v10 = 3;
    }
    else {
      v10 = GameData_1a82b60[v9];
    }
    game_f6af20(LANES128(v16_.v16).n128_u64, v10);
    LANES128(v11).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v11).n128_u64[1] = 0x3F0000003F000000LL;
    v12 = vmulq_f32(vaddq_f32(v18[0], v16_.v16), v11);
    LANES128(v16_.v16).n128_u64[1] = LANES128(v12).n128_u64[0];
    v16_.v17 = LANES128(v12).n128_u32[2];
    LANES128(v16_.v16).n128_u64[0] =
        (unsigned __int64)(GameData_212d1e0[0] + 2);
    snd_Fade_Fade_10c830((__int64)v18, 0x0.0p+0f);
    snd_playAt_ff5f0((void*)(handle), v8, v8, (__int64)&v16_.v16, 0x0.0p+0f,
                     0x1.0000000000000p+0f, (__int64)v18, 0, 0x10001u, 0);
    snd_Fade_Destroy_Fade(v18);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v13, v8);
  }
  v14 = *(_QWORD*)(a1 + 152);
  if (v14 != 0) {
    *(_BYTE*)(v14 + 156) = 1;
    GameHr_a7d120(v14);
    *(_BYTE*)(v14 + 157) = 1;
    MapObjectModule_a7d220(v14);
  }
  return game_edede0(*(_QWORD*)(*(_QWORD*)GameData_212dc38[0] + 912LL),
                     0x1.0000000000000p+0f, 0x1.47ae140000000p-7f,
                     0x1.0000000000000p+0f);
}

void game_f6ab70(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v1;
  __int64 v2;
  char* v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  float32x4_t v10;
  float32x4_t v11;
  __int64 v12;
  struct {
    float32x4_t v13;
    unsigned __int32 v14;
  } v13_;
  float32x4_t v15[13];

  v1 = *(_QWORD*)(a1 + 160);
  if (v1 != 0) {
    if ((*(_BYTE*)(GameData_2212260 + 12) & 1) == 0) {
      goto LABEL_18;
    }
    v2 =
        ((*(_DWORD*)(GameData_2212260 + 8) - 1) & 0xFFFFFFFD) != 0 ? 5LL : 13LL;
    v3 = ((*(_DWORD*)(GameData_2212260 + 8) - 1) & 0xFFFFFFFD) != 0
             ? "Close"
             : "Close_Reverse";
    GameHr_c08540(v1, (__int64)v3, v2, 0, 0x0.0p+0f);
    v4 = fw_memory_g_heap_manager_ptr;
    v5 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v6 = GameData_2212260;
    strcpy(v5, "SE_OBJ_Door_Close_Metal_L");
    if ((*(_BYTE*)(v6 + 12) & 1) == 0 ||
        (v7 = (__int64)v5,
         game_f6af20(LANES128(v15[0]).n128_u64, *(_DWORD*)(v6 + 8)),
         (*(_BYTE*)(GameData_2212260 + 12) & 1) == 0)) {
    LABEL_18:
      GameRoutine_8123d0();
    }
    v8 = *(unsigned int*)(GameData_2212260 + 8);
    if ((unsigned int)v8 > 3) {
      v9 = 3;
    }
    else {
      v9 = GameData_1a82b60[v8];
    }
    game_f6af20(LANES128(v13_.v13).n128_u64, v9);
    LANES128(v10).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v10).n128_u64[1] = 0x3F0000003F000000LL;
    v11 = vmulq_f32(vaddq_f32(v15[0], v13_.v13), v10);
    LANES128(v13_.v13).n128_u64[1] = LANES128(v11).n128_u64[0];
    v13_.v14 = LANES128(v11).n128_u32[2];
    LANES128(v13_.v13).n128_u64[0] =
        (unsigned __int64)(GameData_212d1e0[0] + 2);
    snd_Fade_Fade_10c830((__int64)v15, 0x0.0p+0f);
    snd_playAt_ff5f0((void*)(handle), v7, v7, (__int64)&v13_.v13, 0x0.0p+0f,
                     0x1.0000000000000p+0f, (__int64)v15, 0, 0x10001u, 0);
    snd_Fade_Destroy_Fade(v15);
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v7);
  }
}

void game_f91e40()
{
  _QWORD handle[2];
  __int64 v0;
  __int64 v1[3];
  __int64 v2[25];

  strcpy((char*)v1, "&SE_SYS_Ish_Warp_Out");
  snd_Fade_Fade_10c830((__int64)v2, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)v1 + 1, (__int64)v1 + 1, 0x0.0p+0f,
                 0x1.0000000000000p+0f, (__int64)v2, 0, 0x10001u, 0);
  snd_Fade_Destroy_Fade(v2);
  if ((v1[0] & 1) != 0 && v1[2] != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0,
                                  v1[2]);
  }
  if (GameData_2241720 != 0) {
    GameHr_17ccc20(GameData_2241720, 0, 0);
  }
  *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL) = 5;
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v2[0] = 0;
    v2[1] = 0;
    GameRoutine_efbb60(GameData_21f3d08, v2, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
}

void game_f9b9f0()
{
  __int64* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  char* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
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
  __int64 v42;
  __int64 v43;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    char* v46;
  } v44_;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    __int64 v49;
  } v47_;

  v47_.v48 = 0;
  v47_.v49 = 0;
  v47_.v47 = 0;
  v0 = (__int64*)GameData_212dbf0[0];
  v1 = *(_QWORD*)(*(_QWORD*)GameData_212dbf0[0] + 32LL);
  if (v1 != 0) {
    v2 = *(_QWORD**)(*(_QWORD*)GameData_212dbf0[0] + 24LL);
    v3 = *(_QWORD*)(*(_QWORD*)GameData_212dbf0[0] + 32LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v4 = std___1___shared_weak_count_lock(v3);
    std___1___shared_weak_count___release_weak(v1);
    if (v4 == 0 || v2 == nullptr) {
      if (v4 == 0) {
        goto LABEL_15;
      }
    }
    else {
      v6 = v2 + 40;
      if (&v47_.v47 != v2 + 40) {
        if ((*(_BYTE*)v6 & 1) != 0) {
          GameRoutine_64df20(&v47_.v47, v2[42], v2[41]);
        }
        else {
          v7 = *v6;
          v8 = v2[41];
          v9 = v2[42];
          v47_.v47 = v7;
          v47_.v48 = v8;
          v47_.v49 = v9;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_15:
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24, 16, 0);
  strcpy((char*)v11, "(RunReturnTempleTrial");
  *(_WORD*)(v11 + 22) = 0;
  v12 = *(
      const char**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cc60[0] +
                                          64LL) +
                               8LL * *(unsigned int*)(*GameData_212dcd0 + 8)) +
                    8LL);
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(*v10, v16, 16, 0);
    v44_.v45 = v14;
    v44_.v46 = v15;
    v44_.v44 = v16 | 1;
    goto LABEL_23;
  }
  LOBYTE(v44_.v44) = 2 * v13;
  v15 = (char*)&v44_.v44 + 1;
  if (v13 != 0) {
  LABEL_23:
    memmove((__int64)v15, (__int64)v12, v14);
  }
  v17 = *v10;
  v15[v14] = 0;
  v18 = (_QWORD*)fw_memory_HeapManager_Allocate(v17, 48, 16, 0);
  v19 = v44_.v44;
  v20 = v44_.v46;
  v21 = v18;
  v18[4] = v44_.v45;
  v18[5] = v20;
  v22 = *(_QWORD*)(v11 + 8);
  *v18 = *(_QWORD*)v11;
  v18[1] = v22;
  v18[2] = *(_QWORD*)(v11 + 16);
  v18[3] = v19;
  v23 = 128;
  if (*(_QWORD*)(*v10 + 200) == 0) {
    v23 = 56;
  }
  nn_mem_StandardAllocator_Free(*v10 + v23, v11);
  v24 = (__int64*)fw_memory_HeapManager_Allocate(*v10, 96, 16, 0);
  v25 = (__int64)v24;
  if ((v47_.v47 & 1) != 0) {
    fw_text_String_CopyTerminated(v24 + 6, v47_.v49, v47_.v48);
  }
  else {
    v26 = v47_.v48;
    v24[6] = v47_.v47;
    v24[7] = v26;
    v24[8] = v47_.v49;
  }
  v27 = v21[3];
  *(_QWORD*)(v25 + 16) = v21[2];
  *(_QWORD*)(v25 + 24) = v27;
  v28 = v21[5];
  *(_QWORD*)(v25 + 32) = v21[4];
  *(_QWORD*)(v25 + 40) = v28;
  v29 = v21[1];
  *(_QWORD*)v25 = *v21;
  *(_QWORD*)(v25 + 8) = v29;
  v30 = 128;
  if (*(_QWORD*)(*v10 + 200) == 0) {
    v30 = 56;
  }
  nn_mem_StandardAllocator_Free(*v10 + v30, (__int64)v21);
  v31 = GameData_212c6a0[0];
  GameRoutine_6b7aa0(*(_QWORD*)GameData_212c6a0[0] + 232LL, (__int64*)v25,
                     (__int64*)(v25 + 72), 3u);
  v32 = *(_QWORD*)(*(_QWORD*)v31 + 328LL);
  if ((v32 & 0x20) == 0) {
    *(_QWORD*)(*(_QWORD*)v31 + 328LL) = v32 | 0x20;
    if (game_GameModeData_instance_ != 0) {
      *(_BYTE*)(game_GameModeData_instance_ + 57) =
          *(_BYTE*)(game_GameModeData_instance_ + 56);
    }
  }
  v33 = *(_QWORD*)GameData_212dbe0[0];
  *(_DWORD*)(v33 + 8) = 14;
  *(_DWORD*)(v33 + 68) = 9;
  if (*(_BYTE*)(v33 + 84) != 0) {
    *(_BYTE*)(v33 + 84) = 0;
  }
  GameHr_dbd8e0();
  v34 = *(_QWORD*)GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 11LL) & 1) == 0) {
    v35 = *v0;
    v44_.v44 = 0;
    v44_.v45 = 0;
    *(_BYTE*)(v34 + 11) = 1;
    GameRoutine_efbb60(v35, &v44_.v44, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
  if ((*(_BYTE*)(v25 + 48) & 1) != 0) {
    v36 = *(_QWORD*)(v25 + 64);
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v37, v36);
    }
  }
  if ((*(_BYTE*)(v25 + 24) & 1) != 0) {
    v38 = *(_QWORD*)(v25 + 40);
    if (v38 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v39, v38);
    }
  }
  if ((*(_BYTE*)v25 & 1) != 0) {
    v40 = *(_QWORD*)(v25 + 16);
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v41, v40);
    }
  }
  v42 = 128;
  if (*(_QWORD*)(*v10 + 200) == 0) {
    v42 = 56;
  }
  nn_mem_StandardAllocator_Free(*v10 + v42, v25);
  if ((v47_.v47 & 1) != 0 && v47_.v49 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v43, v47_.v49);
  }
}

void game_fb9a90(__int64 a1)
{
  _QWORD handle[2];
  __int64 v1;
  __int64 v2;
  __int128 v3;
  __int64 v4;
  __int64 v5[3];
  struct {
    _QWORD v6[2];
    int v7;
  } v6_;
  _QWORD v8[25];

  *(_BYTE*)(a1 + 188) = 1;
  v1 = *(_QWORD*)(GameData_21f3ca0 + 8LL * *(int*)(a1 + 168) + 8);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 24);
    strcpy((char*)v5, "(SE_EFF_Obelisk_Flash");
    v3 = *(_OWORD*)(v2 + 304);
    v6_.v6[1] = *(_QWORD*)(v2 + 304);
    v6_.v7 = DWORD2(v3);
    v6_.v6[0] = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830((__int64)v8, 0x0.0p+0f);
    snd_playAt_ff5f0((void*)(handle), (__int64)v5 + 1, (__int64)v5 + 1,
                     (__int64)v6_.v6, 0x0.0p+0f, 0x1.0000000000000p+0f,
                     (__int64)v8, 0, 0x10001u, 0);
    snd_Fade_Destroy_Fade(v8);
    if ((v5[0] & 1) != 0 && v5[2] != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v5[2]);
    }
  }
}

void game_1032160(__int64 a1)
{
  __int64 v2;
  const char* v3;
  _BOOL4 v4;
  char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  const char* v19;
  __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  float v44;
  char* v45;
  char* v46;
  float v47;
  float v48;
  __int64 v49;
  __int128 v50;
  __int64 v51;
  int8x8_t v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  signed __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  unsigned __int16* v67;
  __int64 v68;
  __int64 v69;
  const char* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64 v76;
  unsigned __int64 v77;
  signed __int64 v78;
  __int64 v79;
  char* v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  _DWORD* v85;
  __int64 v87;
  char v88;
  unsigned __int64 v89;
  const char* v90;
  const char* v91;
  int v92;
  int v93;
  __int64 v94;
  unsigned __int8 v95;
  __int64 v96;
  const char* v97;
  int v98;
  __int64 v99;
  const char* v100;
  int v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  int8x16_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  int8x16_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  unsigned int v138;
  unsigned __int64 v139;
  int v140;
  unsigned __int64 v141;
  __int64 v142;
  float v143;
  unsigned __int64 v144;
  float v145;
  float v146;
  unsigned __int64 v147;
  float v148;
  unsigned __int64 v149;
  int8x16_t v150;
  float32x4_t v151;
  __int64 v152;
  int8x16_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  float32x4_t v159;
  float32x4_t v160;
  int8x16_t v161;
  float32x4_t v162;
  float32x4_t v163;
  float32x4_t v164;
  __int64 v165;
  __int64 v166;
  float v167;
  float v168;
  float v169;
  float v170;
  float v171;
  float v172;
  float v173;
  float32x4_t v174;
  int8x8_t v175;
  unsigned __int64 v176;
  float32x4_t v177;
  float32x4_t v178;
  char* v179;
  unsigned __int64 v180;
  __int64 v181;
  __int64 v182;
  struct {
    __int16 v183;
    char gap234_[6];
    unsigned __int64 v184;
    char* v185;
  } v183_;
  int8x16_t v186;
  int8x16_t v187;
  struct {
    __int64 v188;
    __int64 v189;
    const char* v190;
    __int64 v191;
    __int64 v192;
    __int64 v193;
    int8x16_t v194;
  } v188_;
  struct {
    __int64 v195;
    unsigned __int64 v196;
    const char* v197;
  } v195_;
  struct {
    __int64 v198;
    unsigned __int64 v199;
    __int64 v200;
  } v198_;
  int8x16_t v201;
  int8x16_t v202[2];

  v183_.v183 = 0;
  if (game_GameModeData_instance_ != 0 &&
      (v2 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0 &&
      (v3 = *(const char**)(v2 + 144)) != nullptr && *v3 != 0) {
    GameRoutine_60a020((__int64)&v183_.v183, v3);
    v4 = (v183_.v183 & 1) == 0;
  }
  else {
    v4 = true;
  }
  if (v4) {
    v5 = (char*)&v183_.v183 + 1;
  }
  else {
    v5 = v183_.v185;
  }
  v6 = game_HashString((__int64)v5);
  if (v6 != 0) {
    v7 = *(_QWORD*)(GameData_21ca060 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_21ca060 + 112) != 0) {
      v9 = v7 - 1;
      if ((v7 & (v7 - 1)) != 0) {
        v10 = v6;
        if (v6 >= v7) {
          v10 = v6 % v7;
        }
      }
      else {
        v10 = v9 & v6;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21ca060 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == v6) {
                if (v12[2] == v6) {
                  goto LABEL_35;
                }
              }
              else if ((v14 & v9) != v10) {
                goto LABEL_37;
              }
              v12 = (_QWORD*)*v12;
              if (v12 == nullptr) {
                goto LABEL_37;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == v6) {
              if (v12[2] == v6) {
              LABEL_35:
                v15 = v12[3];
                if (v15 != 0) {
                  *(_QWORD*)(a1 + 32) = v15;
                }
                break;
              }
            }
            else {
              if (v13 >= v7) {
                v13 %= v7;
              }
              if (v13 != v10) {
                break;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
LABEL_37:
  if (*(_QWORD*)(a1 + 32) == 0) {
    goto LABEL_250;
  }
  if ((v183_.v183 & 1) != 0) {
    v16 = v183_.v185;
  }
  else {
    v16 = (char*)&v183_.v183 + 1;
  }
  if ((v183_.v183 & 1) != 0) {
    v17 = v183_.v184;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v183_.v183 >> 1;
  }
  v18 = v17 + 13;
  if (v17 + 13 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_258:
    String_60a1d0();
  }
  if (v18 >= 0x17) {
    if ((v18 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v18 | 7) + 1;
    }
    v19 = (const char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v20, 16, 0);
    v188_.v189 = v17 + 13;
    v188_.v190 = v19;
    v188_.v188 = v20 | 1;
  }
  else {
    v188_.v189 = 0;
    v188_.v190 = nullptr;
    v188_.v188 = (unsigned __int8)(2 * v18);
    v19 = (char*)&v188_.v188 + 1;
    if (v17 == 0) {
      goto LABEL_53;
    }
  }
  memmove((__int64)v19, (__int64)v16, v17);
LABEL_53:
  *(_QWORD*)&v19[v17] = 0xE7A08AE5BDBFE85FLL;
  strcpy((char*)&v19[v17 + 5], "\x8A\xA0群衆");
  if ((v188_.v188 & 1) != 0) {
    v21 = v188_.v190;
  }
  else {
    v21 = (char*)&v188_.v188 + 1;
  }
  v22 = game_HashString((__int64)v21);
  if (v22 != 0) {
    v23 = *(_QWORD*)(GameData_21ca060 + 96);
    if (v23 != 0 && *(_QWORD*)(GameData_21ca060 + 112) != 0) {
      v25 = v23 - 1;
      if ((v23 & (v23 - 1)) != 0) {
        v26 = v22;
        if (v22 >= v23) {
          v26 = v22 % v23;
        }
      }
      else {
        v26 = v25 & v22;
      }
      v27 = *(_QWORD**)(*(_QWORD*)(GameData_21ca060 + 88) + 8 * v26);
      if (v27 != nullptr) {
        v28 = (_QWORD*)*v27;
        if (v28 != nullptr) {
          if ((v23 & v25) == 0) {
            while (1) {
              v31 = v28[1];
              if (v31 == v22) {
                if (v28[2] == v22) {
                  goto LABEL_256;
                }
              }
              else if ((v31 & v25) != v26) {
                goto LABEL_80;
              }
              v28 = (_QWORD*)*v28;
              v30 = 0;
              if (v28 == nullptr) {
                goto LABEL_81;
              }
            }
          }
          do {
            v29 = v28[1];
            if (v29 == v22) {
              if (v28[2] == v22) {
              LABEL_256:
                v30 = v28[3];
                if ((v188_.v188 & 1) != 0) {
                  goto LABEL_82;
                }
                goto LABEL_86;
              }
            }
            else {
              if (v29 >= v23) {
                v29 %= v23;
              }
              if (v29 != v26) {
                break;
              }
            }
            v28 = (_QWORD*)*v28;
          } while (v28 != nullptr);
        }
      }
    }
  }
LABEL_80:
  v30 = 0;
LABEL_81:
  if ((v188_.v188 & 1) != 0) {
  LABEL_82:
    if (v188_.v190 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v188_.v190);
    }
  }
LABEL_86:
  v33 = *(_QWORD*)(a1 + 32);
  if (v30 != 0) {
    v33 = v30;
  }
  *(_QWORD*)(a1 + 40) = v33;
  v34 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 64LL);
  if (v34 == 0) {
    goto LABEL_250;
  }
  v35 = *(_QWORD*)(v34 + 96);
  if (v35 != 0) {
    v36 = *(_QWORD*)(v35 + 24);
    v37 = *(_QWORD*)(v35 + 32);
    if (v37 == 0) {
      goto LABEL_102;
    }
  }
  else {
    LOWORD(v188_.v188) = 0;
    v38 =
        GameRoutine_c22420((_QWORD*)(v34 + 104), (unsigned __int8*)&v188_.v188);
    if ((v188_.v188 & 1) != 0 && v188_.v190 != nullptr) {
      v39 = v38;
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v188_.v190);
      v38 = v39;
    }
    if (v38 == nullptr) {
      v36 = 0;
      goto LABEL_102;
    }
    v41 = v38[5];
    v36 = *(_QWORD*)(v41 + 24);
    v37 = *(_QWORD*)(v41 + 32);
    if (v37 == 0) {
      goto LABEL_102;
    }
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
LABEL_102:
  v43 = *(__int64**)(v36 + 88);
  v42 = *(__int64**)(v36 + 96);
  if (v43 != v42) {
    v44 = 0x1.0000000000000p+0f;
    v45 = (char*)&v198_.v198 + 1;
    v46 = (char*)&v195_.v195 + 1;
    v172 = -*((float*)GameData_212c2f0 + 1);
    v173 = *(float*)GameData_212c2f0;
    v47 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v48 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4);
    v170 =
        -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4);
    v171 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v168 =
        -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12);
    v169 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v49 = 0x30201000F0E0D0CLL;
    *(int8x8_t*)&v50 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL));
    *((_QWORD*)&v50 + 1) = v50;
    v177 = COERCE_AS(float32x4_t, v50);
    *(int8x8_t*)&v50 = vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL));
    LANES64(v175).n64_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v176 = v50;
    *((int8x8_t*)&v50 + 1) = v175;
    v174 = COERCE_AS(float32x4_t, v50);
    do {
      v51 = *v43;
      PSEUDO_LOW_LANE64(v52, n64_u64, v49);
      v53 = strlen((const char*)(*v43 + 16));
      if (v53 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_258;
      }
      v54 = v53;
      if (v53 >= 0x17) {
        if ((v53 | 7) == 0x17) {
          v56 = 26;
        }
        else {
          v56 = (v53 | 7) + 1;
        }
        v55 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v56, 16,
                                             0);
        v198_.v199 = v54;
        v198_.v200 = v55;
        v198_.v198 = v56 | 1;
      }
      else {
        v55 = (__int64)v45;
        LOBYTE(v198_.v198) = 2 * v53;
        if (v53 == 0) {
          goto LABEL_114;
        }
      }
      memcpy(v55, v51 + 16, v54);
    LABEL_114:
      *(_BYTE*)(v55 + v54) = 0;
      v57 = (unsigned __int64)(unsigned __int8)v198_.v198 >> 1;
      if ((v198_.v198 & 1) != 0) {
        v58 = v198_.v200;
      }
      else {
        v58 = (__int64)v45;
      }
      if ((v198_.v198 & 1) != 0) {
        v57 = v198_.v199;
      }
      if (v57 >= 6) {
        v59 = v58 + v57;
        v60 = v58;
        while (1) {
          v61 = memchr(v60, 66, v57 - 5);
          v49 = LANES64(v52).n64_u64[0];
          if (v61 == 0) {
            goto LABEL_243;
          }
          if (*(_DWORD*)v61 == 1298097986 && *(_WORD*)(v61 + 4) == 25199) {
            break;
          }
          v60 = v61 + 1;
          v57 = v59 - v60;
          if (v59 - v60 < 6) {
            goto LABEL_243;
          }
        }
        if (v61 != v59 && v61 - v58 != -1) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                                    memory_order_acquire) &
               1) == 0) {
            v49 = LANES64(v52).n64_u64[0];
            if (__cxa_guard_acquire((__int64)&GameData_21f4d48) != 0) {
              GameData_21f4d44 = wld_Crc32(0, "ModelModule", 0xBu);
              __cxa_guard_release((__int64)&GameData_21f4d48);
              v49 = LANES64(v52).n64_u64[0];
            }
          }
          v63 = *(_QWORD*)(v51 + 512);
          v64 = v63;
          do {
            if (v64 == *(_QWORD*)(v51 + 504)) {
              goto LABEL_243;
            }
            v65 = *(_DWORD*)(v64 - 16);
            v64 -= 16;
            v63 -= 16;
          } while (v65 != GameData_21f4d44);
          if (*(_QWORD*)(v51 + 512) != v63) {
            v66 = *(_QWORD*)(v63 + 8);
            if (v66 != 0) {
              v67 = *(unsigned __int16**)(*(_QWORD*)(v66 + 24) + 168LL);
              if (v67 != nullptr && v67[40] != 0) {
                v68 = 0;
                v179 = v46;
                v181 = *(_QWORD*)(*(_QWORD*)(v66 + 24) + 168LL);
                while (1) {
                  v182 = v68;
                  v69 = *(_QWORD*)(*(_QWORD*)v67 + 8LL);
                  if (v69 != 0) {
                    v70 = (const char*)(*(_QWORD*)(v69 + 16 * v68 + 32) + 2LL);
                  }
                  else {
                    v70 = nullptr;
                  }
                  v71 = strlen(v70);
                  if (v71 >= 0xFFFFFFFFFFFFFFF7LL) {
                    goto LABEL_258;
                  }
                  v72 = v71;
                  if (v71 >= 0x17) {
                    break;
                  }
                  v73 = (__int64)v46;
                  LOBYTE(v195_.v195) = 2 * v71;
                  if (v71 != 0) {
                    goto LABEL_151;
                  }
                LABEL_152:
                  *(_BYTE*)(v73 + v72) = 0;
                  v75 = v195_.v195;
                  v77 = v195_.v196;
                  v76 = (__int64)v195_.v197;
                  v78 = (unsigned __int64)(unsigned __int8)v195_.v195 >> 1;
                  if ((v195_.v195 & 1) != 0) {
                    v79 = (__int64)v195_.v197;
                  }
                  else {
                    v79 = (__int64)v46;
                  }
                  if ((v195_.v195 & 1) != 0) {
                    v78 = v195_.v196;
                  }
                  if (v78 < 7) {
                    goto LABEL_168;
                  }
                  v80 = v45;
                  v81 = v42;
                  v82 = a1;
                  v83 = v79 + v78;
                  v84 = v79;
                  while (1) {
                    v85 = (_DWORD*)memchr(v84, 76, v78 - 6);
                    if (v85 == nullptr) {
                    LABEL_165:
                      a1 = v82;
                      goto LABEL_167;
                    }
                    if (*v85 == 1600352076 &&
                        *(_DWORD*)((char*)v85 + 3) == 1953383263) {
                      break;
                    }
                    v84 = (__int64)v85 + 1;
                    v78 = v83 - v84;
                    if (v83 - v84 < 7) {
                      goto LABEL_165;
                    }
                  }
                  a1 = v82;
                  if (v85 != (_DWORD*)v79) {
                  LABEL_167:
                    v42 = v81;
                    v45 = v80;
                    v46 = v179;
                  LABEL_168:
                    v49 = LANES64(v52).n64_u64[0];
                    v67 = (unsigned __int16*)v181;
                    if ((v75 & 1) != 0) {
                      goto LABEL_169;
                    }
                    goto LABEL_139;
                  }
                  v67 = (unsigned __int16*)v181;
                  v42 = v81;
                  if ((v75 & 1) != 0) {
                    fw_text_String_CopyTerminated(&v188_.v188, v76, v77);
                  }
                  else {
                    v188_.v188 = v195_.v195;
                    v188_.v189 = v195_.v196;
                    v188_.v190 = v195_.v197;
                  }
                  v45 = v80;
                  GameRoutine_a539c0((unsigned __int8*)&v188_.v188, 0, 7u);
                  v88 = v188_.v188;
                  v89 = v188_.v189;
                  v46 = v179;
                  if ((v188_.v188 & 1) == 0) {
                    v89 = (unsigned __int64)(unsigned __int8)v188_.v188 >> 1;
                  }
                  if (v89 == 0) {
                  LABEL_259:
                    fs_60a230();
                  }
                  if ((v188_.v188 & 1) != 0) {
                    v90 = v188_.v190;
                    v188_.v189 = 1;
                  }
                  else {
                    LOBYTE(v188_.v188) = 2;
                    v90 = (char*)&v188_.v188 + 1;
                  }
                  *((_BYTE*)v90 + 1) = 0;
                  if ((v88 & 1) != 0) {
                    v91 = v188_.v190;
                  }
                  else {
                    v91 = (char*)&v188_.v188 + 1;
                  }
                  v92 = strtol(v91, (__int64)v202, 10);
                  v93 = *(unsigned __int8*)LANES128(v202[0]).n128_u64[0];
                  if ((v188_.v188 & 1) != 0 && v188_.v190 != nullptr) {
                    v94 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v94 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v94,
                        (__int64)v188_.v190);
                  }
                  if (v93 == 0) {
                    if ((v195_.v195 & 1) != 0) {
                      fw_text_String_CopyTerminated(
                          &v188_.v188, (__int64)v195_.v197, v195_.v196);
                    }
                    else {
                      v188_.v188 = v195_.v195;
                      v188_.v189 = v195_.v196;
                      v188_.v190 = v195_.v197;
                    }
                    GameRoutine_a539c0((unsigned __int8*)&v188_.v188, 0, 8u);
                    v95 = v188_.v188;
                    v96 = v188_.v189;
                    if ((v188_.v188 & 1) == 0) {
                      v96 = (unsigned __int8)v188_.v188 >> 1;
                    }
                    if (v96 == 0) {
                      goto LABEL_259;
                    }
                    if ((v188_.v188 & 1) != 0) {
                      v97 = v188_.v190;
                      v188_.v189 = 1;
                    }
                    else {
                      v95 = 2;
                      v97 = (char*)&v188_.v188 + 1;
                      LOBYTE(v188_.v188) = 2;
                    }
                    *((_BYTE*)v97 + 1) = 0;
                    v98 = 0;
                    v99 = v188_.v189;
                    if ((v95 & 1) == 0) {
                      v99 = v95 >> 1;
                    }
                    if (v99 == 1) {
                      v100 = v188_.v190;
                      if ((v95 & 1) == 0) {
                        v100 = (char*)&v188_.v188 + 1;
                      }
                      v101 = *(unsigned __int8*)v100;
                      switch (v101) {
                      case 'A':
                        v98 = 1;
                        break;
                      case 'B':
                        v98 = 2;
                        break;
                      case 'C':
                        v98 = 3;
                        break;
                      default:
                        v98 = 0;
                        break;
                      }
                    }
                    if ((v95 & 1) != 0 && v188_.v190 != nullptr) {
                      v102 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v102 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v102,
                          (__int64)v188_.v190);
                    }
                    v103 = (__int64*)(*(_QWORD*)(v181 + 32) + (v182 << 6));
                    v104 = v103[1];
                    v105 = v103[3];
                    v106 = v103[5];
                    LANES128(v188_.v194).n128_u64[1] = v103[7];
                    v107 = *v103;
                    v108 = v103[2];
                    v109 = v103[4];
                    v110 = v103[6];
                    v188_.v193 = v106;
                    LANES128(v188_.v194).n128_u64[0] = v110;
                    v188_.v191 = v105;
                    v188_.v192 = v109;
                    v188_.v189 = v104;
                    v188_.v190 = (const char*)v108;
                    v188_.v188 = v107;
                    v178 = v188_.v194;
                    v187 = v188_.v194;
                    Quat_624bc0((void*)(&v186), (__int64)&v188_.v188);
                    v111 = vmulq_f32(v186,
                                     COERCE_AS(float32x4_t, GameData_1a829d0));
                    LANES128(v112).n128_u64[0] = LANES128(v186).n128_u64[0];
                    LANES128(v113).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v111,
                                      COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                            .n64_u64[0];
                    LANES128(v113).n128_u64[1] = v176;
                    LANES128(v114).n128_u64[0] = 0;
                    *(int8x8_t*)&LANES128(v114).n128_i8[8] =
                        vqtbl1_s8(v111, v52);
                    v115 = vmulq_f32(v114, v113);
                    LANES128(v114).n128_u64[0] = LANES64(v175).n64_u64[0];
                    v116 = vmlaq_f32(vmulq_f32(v111, v177),
                                     COERCE_AS(float32x4_t, GameData_1a83800),
                                     v115);
                    LANES128(v115).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v111,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    *(int32x2_t*)&LANES128(v114).n128_i8[8] = vdup_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v111).n128_u64[0]), 1);
                    v117 = vmlaq_f32(v116,
                                     COERCE_AS(float32x4_t, GameData_1a83800),
                                     vmulq_f32(v114, v115));
                    LANES128(v115).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v111,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v115).n128_i8[8] = vqtbl1_s8(
                        v111, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                    v118 = vmlsq_f32(v117, v115, v174);
                    LANES128(v111).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v186,
                                      COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                            .n64_u64[0];
                    LANES128(v115).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v186,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    LANES128(v119).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v118,
                                      COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                            .n64_u64[0];
                    LANES128(v111).n128_u64[1] = LANES128(v111).n128_u64[0];
                    LANES128(v112).n128_u64[1] = LANES128(v115).n128_u64[0];
                    *(int8x8_t*)&LANES128(v119).n128_i8[8] =
                        vqtbl1_s8(v118, v52);
                    LANES128(v114).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v118,
                                      COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                            .n64_u64[0];
                    v120 = vmlaq_f32(vmulq_f32(v111, v118),
                                     COERCE_AS(float32x4_t, GameData_1a83800),
                                     vmulq_f32(v112, v119));
                    LANES128(v119).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v186,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int32x2_t*)&LANES128(v114).n128_i8[8] = vdup_lane_s32(
                        COERCE_AS(int32x2_t, LANES128(v118).n128_u64[0]), 1);
                    LANES128(v115).n128_u64[1] = LANES128(v119).n128_u64[0];
                    LANES128(v119).n128_u64[1] = LANES128(v186).n128_u64[0];
                    LANES128(v121).n128_u64[0] =
                        LANES64_OF(
                            vqtbl1_s8(v118,
                                      COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                            .n64_u64[0];
                    *(int8x8_t*)&LANES128(v121).n128_i8[8] = vqtbl1_s8(
                        v118, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                    v122 = vmlsq_f32(
                        vmlaq_f32(v120,
                                  COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v119, v114)),
                        v121, v115);
                    if (LANES128(v122).n128_f32[2] == 0x0.0p+0f) {
                      v123 = 0x0.0p+0f;
                      if (LANES128(v122).n128_f32[0] == 0x0.0p+0f) {
                        goto LABEL_238;
                      }
                    }
                    if (LANES128(v122).n128_f32[2] >= 0x0.0p+0f) {
                      if (LANES128(v122).n128_f32[0] < 0x0.0p+0f) {
                        LANES128(v122).n128_f32[0] =
                            -LANES128(v122).n128_f32[0];
                        if (LANES128(v122).n128_f32[2] <
                            LANES128(v122).n128_f32[0]) {
                          v128 = LANES128(v122).n128_f32[2] /
                                 LANES128(v122).n128_f32[0];
                          v130 = v172;
                          v129 = v173;
                          v131 = -0x1.921fb60000000p+0f;
                          goto LABEL_233;
                        }
                        v133 = LANES128(v122).n128_f32[0] /
                               LANES128(v122).n128_f32[2];
                        v123 = -(
                            float)(v133 *
                                   (float)(v44 +
                                           (float)((float)(v168 +
                                                           (float)((float)(v169 +
                                                                           (float)((
                                                                                       float)(v170 +
                                                                                              (float)((
                                                                                                          float)(v171 + (float)((
                                                                                                                                    float)(v48 + (float)((float)(v47 + (float)((float)(v172 + (float)(v173 * (float)(v133 * v133))) *
                                                                                                                                                                               (float)(v133 *
                                                                                                                                                                                       v133))) *
                                                                                                                                                         (float)(v133 *
                                                                                                                                                                 v133))) *
                                                                                                                                (float)(v133 *
                                                                                                                                        v133))) *
                                                                                                      (float)(v133 *
                                                                                                              v133))) *
                                                                                   (float)(v133 *
                                                                                           v133))) *
                                                                   (float)(v133 *
                                                                           v133))) *
                                                   (float)(v133 * v133))));
                        goto LABEL_238;
                      }
                      if (LANES128(v122).n128_f32[2] >=
                          LANES128(v122).n128_f32[0]) {
                        v134 = LANES128(v122).n128_f32[0] /
                               LANES128(v122).n128_f32[2];
                        v123 = v134 *
                               (float)(v44 +
                                       (float)((float)(v168 +
                                                       (float)((float)(v169 +
                                                                       (float)((float)(v170 +
                                                                                       (float)((
                                                                                                   float)(v171 + (float)((
                                                                                                                             float)(v48 + (float)((float)(v47 + (float)((float)(v172 + (float)(v173 * (float)(v134 * v134))) *
                                                                                                                                                                        (float)(v134 *
                                                                                                                                                                                v134))) *
                                                                                                                                                  (float)(v134 *
                                                                                                                                                          v134))) *
                                                                                                                         (float)(v134 *
                                                                                                                                 v134))) *
                                                                                               (float)(v134 *
                                                                                                       v134))) *
                                                                               (float)(v134 *
                                                                                       v134))) *
                                                               (float)(v134 *
                                                                       v134))) *
                                               (float)(v134 * v134)));
                        goto LABEL_238;
                      }
                      v124 = LANES128(v122).n128_f32[2] /
                             LANES128(v122).n128_f32[0];
                      v126 = v172;
                      v125 = v173;
                      v127 = 0x1.921fb60000000p+0f;
                    }
                    else {
                      if (LANES128(v122).n128_f32[0] < 0x0.0p+0f) {
                        if (LANES128(v122).n128_f32[2] >
                            LANES128(v122).n128_f32[0]) {
                          v124 = LANES128(v122).n128_f32[2] /
                                 LANES128(v122).n128_f32[0];
                          v126 = v172;
                          v125 = v173;
                          v127 = -0x1.921fb60000000p+0f;
                          goto LABEL_236;
                        }
                        v128 = LANES128(v122).n128_f32[0] /
                               LANES128(v122).n128_f32[2];
                        v130 = v172;
                        v129 = v173;
                        v131 = -0x1.921fb60000000p+1f;
                      LABEL_233:
                        v123 =
                            (float)(PSEUDO_UNFUSED(
                                v128 *
                                (float)(v44 +
                                        (float)((float)(v168 +
                                                        (float)((float)(v169 +
                                                                        (float)((float)(v170 + (float)((
                                                                                                           float)(v171 + (float)((
                                                                                                                                     float)(v48 + (float)((
                                                                                                                                                              float)(v47 + (float)((
                                                                                                                                                                                       float)(v130 + (float)(v129 * (float)(v128 *
                                                                                                                                                                                                                            v128))) *
                                                                                                                                                                                   (float)(v128 *
                                                                                                                                                                                           v128))) *
                                                                                                                                                          (float)(v128 *
                                                                                                                                                                  v128))) *
                                                                                                                                 (float)(v128 *
                                                                                                                                         v128))) *
                                                                                                       (float)(v128 *
                                                                                                               v128))) *
                                                                                (float)(v128 *
                                                                                        v128))) *
                                                                (float)(v128 *
                                                                        v128))) *
                                                (float)(v128 * v128))))) +
                            v131;
                      LABEL_238:
                        v167 = v47;
                        v135 = v123 * 0x1.ca5dc20000000p+5f;
                        game_10332b0(a1, &v187, v98, *(_QWORD*)(a1 + 32),
                                     v123 * 0x1.ca5dc20000000p+5f);
                        v136 = 0x1.0000000000000p+0f;
                        v137 = -0x1.e000000000000p+4f;
                        if (v92 >= 2) {
                          v138 = 0;
                          do {
                            v139 = *(int*)(a1 + 48);
                            v140 = 1812433253 * ((v139 >> 30) ^ v139) + 1;
                            v141 =
                                1812433253 * ((v139 + 1) ^ ((v139 + 1) >> 30)) +
                                2;
                            v142 = (v139 >> 29) & 0x3FFFFFFFFLL;
                            v143 = vcvts_n_f32_u64(
                                (unsigned __int16)((v141 >> 19) ^
                                                   ((v140 ^
                                                     (unsigned int)(v140
                                                                    << 11)) >>
                                                    8) ^
                                                   v141 ^ v140 ^
                                                   ((_WORD)v140 << 11)),
                                0x10u);
                            LODWORD(v141) = 2 * v139;
                            v144 = 1812433253 * (((2 * v139) | 1) ^ v142) + 2;
                            v139 *= 3LL;
                            LODWORD(v141) =
                                (1812433253 * (v142 ^ v141) + 1) ^
                                ((1812433253 * ((unsigned int)v142 ^
                                                (unsigned int)v141) +
                                  1)
                                 << 11);
                            v145 =
                                (float)((float)(0x1.921fb60000000p+1f /
                                                (float)v92) +
                                        (float)(PSEUDO_UNFUSED(
                                            (float)(0x1.921fb60000000p+2f /
                                                    (float)v92) *
                                            (float)v138))) +
                                (float)((float)(0x1.921fb60000000p+2f /
                                                (float)v92) *
                                        (float)((float)(fminf(fmaxf(v143,
                                                                    0x0.0p+0f),
                                                              v136) *
                                                        0x1.99999a0000000p-2f) +
                                                -0x1.99999a0000000p-3f));
                            v146 = vcvts_n_f32_u64(
                                (unsigned __int16)((v144 >> 19) ^
                                                   ((unsigned int)v141 >> 8) ^
                                                   v144 ^ v141),
                                0x10u);
                            v147 = v139 + 1;
                            LODWORD(v139) =
                                1812433253 * ((v139 >> 30) ^ v139) + 1;
                            v148 =
                                v135 +
                                (float)(v137 +
                                        (float)(fminf(
                                                    fmaxf(
                                                        vcvts_n_f32_u64(
                                                            (unsigned __int16)(((1812433253 *
                                                                                     (v147 ^
                                                                                      (v147 >>
                                                                                       30)) +
                                                                                 2) >>
                                                                                19) ^
                                                                               (((unsigned int)
                                                                                     v139 ^
                                                                                 ((_DWORD)
                                                                                      v139
                                                                                  << 11)) >>
                                                                                8) ^
                                                                               (-30363 *
                                                                                    (v147 ^
                                                                                     (v147 >>
                                                                                      30)) +
                                                                                2) ^
                                                                               v139 ^
                                                                               ((_WORD)
                                                                                    v139
                                                                                << 11)),
                                                            0x10u),
                                                        0x0.0p+0f),
                                                    v136) *
                                                0x1.e000000000000p+5f));
                            HIDWORD(v149) = 0;
                            *(float*)&v149 =
                                (float)(v136 +
                                        (float)(fminf(fmaxf(v146, 0x0.0p+0f),
                                                      v136) *
                                                0x1.9999a00000000p-3f)) *
                                0x1.99999a0000000p+0f;
                            v180 = v149;
                            math_Quat_FromYawPitchRoll((void*)(&v201), v145,
                                                       0x0.0p+0f, 0x0.0p+0f);
                            LANES128(v150).n128_u64[0] = 0;
                            LANES128(v151).n128_u64[0] = 0;
                            v152 = *(_QWORD*)(a1 + 40);
                            LANES128(v150).n128_u64[1] = v180;
                            v153 = vmulq_f32(
                                v201, COERCE_AS(float32x4_t, GameData_1a829d0));
                            LANES128(v154).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v153,
                                              COERCE_AS(int8x8_t,
                                                        0xF0E0D0C0F0E0D0CLL)))
                                    .n64_u64[0];
                            LANES128(v155).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v150,
                                              COERCE_AS(int8x8_t,
                                                        0xF0E0D0C0F0E0D0CLL)))
                                    .n64_u64[0];
                            LANES128(v156).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v150,
                                              COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                                    .n64_u64[0];
                            LANES128(v150).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v150,
                                              COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                                    .n64_u64[0];
                            *(int8x8_t*)&LANES128(v151).n128_i8[8] =
                                vqtbl1_s8(v153, v52);
                            LANES128(v155).n128_u64[1] =
                                LANES128(v155).n128_u64[0];
                            LANES128(v154).n128_u64[1] =
                                LANES128(v156).n128_u64[0];
                            LANES128(v156).n128_u64[1] =
                                LANES128(v150).n128_u64[0];
                            *(int32x2_t*)&LANES128(v150).n128_i8[8] =
                                vdup_lane_s32(
                                    COERCE_AS(int32x2_t,
                                              LANES128(v153).n128_u64[0]),
                                    1);
                            LANES128(v157).n128_u64[0] =
                                LANES128(v201).n128_u64[0];
                            v158 = vmulq_f32(v151, v154);
                            v159 = vmlaq_f32(
                                vmulq_f32(v153, v155),
                                COERCE_AS(float32x4_t, GameData_1a83800), v158);
                            LANES128(v158).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v153,
                                              COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                                    .n64_u64[0];
                            v160 = vmlaq_f32(
                                v159, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v150, v158));
                            LANES128(v150).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v153,
                                              COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                                    .n64_u64[0];
                            *(int8x8_t*)&LANES128(v150).n128_i8[8] = vqtbl1_s8(
                                v153, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                            LANES128(v153).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v201,
                                              COERCE_AS(int8x8_t,
                                                        0xF0E0D0C0F0E0D0CLL)))
                                    .n64_u64[0];
                            LANES128(v153).n128_u64[1] =
                                LANES128(v153).n128_u64[0];
                            v161 = vmlsq_f32(v160, v150, v156);
                            LANES128(v150).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v201,
                                              COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                                    .n64_u64[0];
                            LANES128(v156).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v161,
                                              COERCE_AS(int8x8_t,
                                                        0xF0E0D0C0F0E0D0CLL)))
                                    .n64_u64[0];
                            LANES128(v157).n128_u64[1] =
                                LANES128(v150).n128_u64[0];
                            *(int8x8_t*)&LANES128(v156).n128_i8[8] =
                                vqtbl1_s8(v161, v52);
                            LANES128(v158).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v161,
                                              COERCE_AS(int8x8_t,
                                                        0x30201000B0A0908LL)))
                                    .n64_u64[0];
                            v162 = vmlaq_f32(
                                vmulq_f32(v153, v161),
                                COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v157, v156));
                            LANES128(v156).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v201,
                                              COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                                    .n64_u64[0];
                            *(int32x2_t*)&LANES128(v158).n128_i8[8] =
                                vdup_lane_s32(
                                    COERCE_AS(int32x2_t,
                                              LANES128(v161).n128_u64[0]),
                                    1);
                            LANES128(v150).n128_u64[1] =
                                LANES128(v156).n128_u64[0];
                            LANES128(v156).n128_u64[1] =
                                LANES128(v201).n128_u64[0];
                            LANES128(v163).n128_u64[0] =
                                LANES64_OF(
                                    vqtbl1_s8(v161,
                                              COERCE_AS(int8x8_t,
                                                        0xB0A090807060504LL)))
                                    .n64_u64[0];
                            *(int8x8_t*)&LANES128(v163).n128_i8[8] = vqtbl1_s8(
                                v161, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
                            v164 =
                                vmlsq_f32(vmlaq_f32(v162,
                                                    COERCE_AS(float32x4_t,
                                                              GameData_1a83800),
                                                    vmulq_f32(v156, v158)),
                                          v163, v150);
                            LANES128(v164).n128_u32[3] = 0;
                            v202[0] = vaddq_f32(v178, v164);
                            game_10332b0(a1, v202, v98, v152, v148);
                            v137 = -0x1.e000000000000p+4f;
                            v136 = 0x1.0000000000000p+0f;
                            ++v138;
                          } while (v92 - 1 != v138);
                        }
                        v47 = v167;
                        v49 = LANES64(v52).n64_u64[0];
                        v44 = 0x1.0000000000000p+0f;
                        v67 = (unsigned __int16*)v181;
                        if ((v195_.v195 & 1) == 0) {
                          goto LABEL_139;
                        }
                      LABEL_169:
                        if (v195_.v197 != nullptr) {
                          v87 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v87 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                              (__int64)v195_.v197);
                          v49 = LANES64(v52).n64_u64[0];
                        }
                        goto LABEL_139;
                      }
                      v132 = -LANES128(v122).n128_f32[2];
                      if (LANES128(v122).n128_f32[0] >
                          (float)-LANES128(v122).n128_f32[2]) {
                        v128 = v132 / LANES128(v122).n128_f32[0];
                        v130 = v172;
                        v129 = v173;
                        v131 = 0x1.921fb60000000p+0f;
                        goto LABEL_233;
                      }
                      v124 = LANES128(v122).n128_f32[0] / v132;
                      v126 = v172;
                      v125 = v173;
                      v127 = 0x1.921fb60000000p+1f;
                    }
                  LABEL_236:
                    v123 = v127 -
                           (float)(PSEUDO_UNFUSED(
                               v124 *
                               (float)(v44 +
                                       (float)((float)(v168 +
                                                       (float)((float)(v169 +
                                                                       (float)((float)(v170 +
                                                                                       (float)((
                                                                                                   float)(v171 + (float)((
                                                                                                                             float)(v48 + (float)((float)(v47 + (float)((float)(v126 + (float)(v125 * (float)(v124 * v124))) *
                                                                                                                                                                        (float)(v124 *
                                                                                                                                                                                v124))) *
                                                                                                                                                  (float)(v124 *
                                                                                                                                                          v124))) *
                                                                                                                         (float)(v124 *
                                                                                                                                 v124))) *
                                                                                               (float)(v124 *
                                                                                                       v124))) *
                                                                               (float)(v124 *
                                                                                       v124))) *
                                                               (float)(v124 *
                                                                       v124))) *
                                               (float)(v124 * v124)))));
                    goto LABEL_238;
                  }
                  v49 = LANES64(v52).n64_u64[0];
                  if ((v195_.v195 & 1) != 0) {
                    goto LABEL_169;
                  }
                LABEL_139:
                  v68 = v182 + 1;
                  if (v182 + 1 >= (unsigned __int64)v67[40]) {
                    goto LABEL_243;
                  }
                }
                if ((v71 | 7) == 0x17) {
                  v74 = 26;
                }
                else {
                  v74 = (v71 | 7) + 1;
                }
                v73 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                     v74, 16, 0);
                v195_.v196 = v72;
                v195_.v197 = (const char*)v73;
                v195_.v195 = v74 | 1;
              LABEL_151:
                memmove(v73, (__int64)v70, v72);
                goto LABEL_152;
              }
            }
          }
        }
      }
    LABEL_243:
      if ((v198_.v198 & 1) != 0 && v198_.v200 != 0) {
        v165 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v165 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v165, v198_.v200);
        v49 = LANES64(v52).n64_u64[0];
      }
      ++v43;
    } while (v43 != v42);
  }
LABEL_250:
  if ((v183_.v183 & 1) != 0 && v183_.v185 != nullptr) {
    v166 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v166 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v166,
                                  (__int64)v183_.v185);
  }
}

__attribute__((swiftcall)) void game_104fe60(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned __int64 v16[3];
  struct {
    __int64 v17;
    const char* v18;
    char gap48_[24];
    __int64 v19;
  } v17_;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      *(int*)(game_GameModeData_instance_ + 64) >= 2) {
    v16[1] = (unsigned __int64)&GameData_1a8d3c2;
    v16[0] = game_HashString((__int64)&GameData_1a8d3c2);
    if (game_GameModeData_instance_ != 0) {
      v2 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v16);
      if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0) {
        v17_.v18 = "MID_EV30_100_m01";
        v3 = game_HashString((__int64)"MID_EV30_100_m01");
        v4 = game_GameModeData_instance_;
        v5 = a1;
        v17_.v17 = v3;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_12;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                                  memory_order_acquire) &
             1) == 0) {
          v17_.v19 = v4;
          v14 = __cxa_guard_acquire((__int64)&GameData_21ed530);
          v4 = v17_.v19;
          v5 = a1;
          if (v14 != 0) {
            GameData_21ed528 = 1598310733;
            __cxa_guard_release((__int64)&GameData_21ed530);
            v4 = v17_.v19;
            v5 = a1;
          }
        }
        if (GameData_21ed528 != 1598310733 ||
            (v6 = game_GameVariableTable_Find(*(_QWORD**)(v4 + 48),
                                              (unsigned __int64*)&v17_.v17),
             v5 = a1, v6 == 0) ||
            *(_DWORD*)(v6 + 32) == 0) {
        LABEL_12:
          strcpy((char*)v16, " MID_EV30_100_m01");
          GameRoutine_7a8220(v5, v16);
          if ((v16[0] & 1) != 0 && v16[2] != 0) {
            v7 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v7 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v16[2]);
          }
        }
      }
    }
    v16[1] = (unsigned __int64)&GameData_1ab10a2;
    v16[0] = game_HashString((__int64)&GameData_1ab10a2);
    if (game_GameModeData_instance_ != 0) {
      v8 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v16);
      if (v8 != 0 && *(_DWORD*)(v8 + 32) != 0) {
        v17_.v18 = "MID_EV30_123_m01";
        v9 = game_HashString((__int64)"MID_EV30_123_m01");
        v10 = game_GameModeData_instance_;
        v17_.v17 = v9;
        v11 = a1;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_25;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                                  memory_order_acquire) &
             1) == 0) {
          v15 = __cxa_guard_acquire((__int64)&GameData_21ed530);
          v11 = a1;
          if (v15 != 0) {
            GameData_21ed528 = 1598310733;
            __cxa_guard_release((__int64)&GameData_21ed530);
            v11 = a1;
          }
        }
        if (GameData_21ed528 != 1598310733 ||
            (v12 = game_GameVariableTable_Find(*(_QWORD**)(v10 + 48),
                                               (unsigned __int64*)&v17_.v17),
             v11 = a1, v12 == 0) ||
            *(_DWORD*)(v12 + 32) == 0) {
        LABEL_25:
          strcpy((char*)v16, " MID_EV30_123_m01");
          GameRoutine_7a8220(v11, v16);
          if ((v16[0] & 1) != 0 && v16[2] != 0) {
            v13 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v16[2]);
          }
        }
      }
    }
  }
}

void game_1052fc0(_QWORD* a1, const char* a2, unsigned __int64 a3)
{
  __int64* v3;
  __int64* v4;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  const char* v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  struct {
    _BYTE v48[32];
    _BYTE* v49;
  } v48_;
  _QWORD* v50;
  __int64 v51[3];

  v3 = (__int64*)a1[1];
  v4 = (__int64*)a1[2];
  if (v3 == v4) {
    goto LABEL_18;
  }
  v8 = v3 + 4;
  while (1) {
    v10 = v8 - 4;
    v9 = *((unsigned __int8*)v8 - 32);
    v11 = *(v8 - 3);
    if ((v9 & 1) == 0) {
      v11 = v9 >> 1;
    }
    if (a3 == v11) {
      v12 = (v9 & 1) != 0 ? *(v8 - 2) : (__int64)v8 - 31;
      if (memcmp((__int64)a2, v12, a3) == 0) {
        break;
      }
    }
    v8 += 5;
    if (v10 + 5 == v4) {
      goto LABEL_18;
    }
  }
  v13 = *v8;
  if (*v8 == 0) {
    goto LABEL_18;
  }
  v14 = *(v8 - 1);
  v15 = *v8;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                            memory_order_relaxed);
  v16 = std___1___shared_weak_count_lock(v15);
  if (v16 == 0) {
    std___1___shared_weak_count___release_weak(v13);
    goto LABEL_18;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v17);
  }
  std___1___shared_weak_count___release_weak(v13);
  if (v14 == 0) {
  LABEL_18:
    strcpy((char*)v51, "\"Effect/model/Btl/");
    GameRoutine_1a09ce0((__int64)v51, a2, a3);
    if ((v51[0] & 1) != 0) {
      v18 = (const char*)v51[2];
    }
    else {
      v18 = (char*)v51 + 1;
    }
    v19 = strlen(v18);
    v48_.v49 = nullptr;
    g3d_ada070((void*)((__int64*)&v50), (__int64)v18, v19, (__int64)v48_.v48);
    if (v48_.v49 == v48_.v48) {
      v20 = 32;
    }
    else {
      if (v48_.v49 == nullptr) {
        goto LABEL_26;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v48_.v49 + v20))((__int64)v48_.v49);
  LABEL_26:
    v22 = (__int64*)a1[2];
    v21 = a1[3];
    if ((unsigned __int64)v22 < v21) {
      if (a3 < 0xFFFFFFFFFFFFFFF7LL) {
        if (a3 >= 0x17) {
          if ((a3 | 7) == 0x17) {
            v34 = 26;
          }
          else {
            v34 = (a3 | 7) + 1;
          }
          v23 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v34,
                                               16, 0);
          v22[1] = a3;
          v22[2] = v23;
          *v22 = v34 | 1;
        }
        else {
          *(_BYTE*)v22 = 2 * a3;
          v23 = (__int64)v22 + 1;
          if (a3 == 0) {
            goto LABEL_48;
          }
        }
        memmove(v23, (__int64)a2, a3);
      LABEL_48:
        *(_BYTE*)(v23 + a3) = 0;
        v35 = (__int64)v50;
        v22[3] = (__int64)v50;
        if (v35 != 0) {
          v36 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
          v36[2] = 0;
          v36[3] = v35;
          *v36 = &GameData_1fd1588;
          v36[1] = 0;
        }
        else {
          v36 = nullptr;
        }
        v22[4] = (__int64)v36;
        a1[2] = v22 + 5;
      LABEL_69:
        if ((v51[0] & 1) != 0 && v51[2] != 0) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v51[2]);
        }
        return;
      }
    LABEL_58:
      String_60a1d0();
    }
    v24 = a1[1];
    v25 = (char*)v22 - v24;
    v26 = 1 - 0x3333333333333333LL * (((__int64)v22 - v24) >> 3);
    if (v26 > 0x666666666666666LL) {
      GameRoutine_f0b120();
    }
    v27 = (__int64*)fw_memory_g_heap_manager_ptr;
    v28 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v21 - v24) >> 3);
    v29 = 2 * v28;
    if (2 * v28 <= v26) {
      v29 = v26;
    }
    if (v28 >= 0x333333333333333LL) {
      v30 = 0x666666666666666LL;
    }
    else {
      v30 = v29;
    }
    if (v30 != 0) {
      if (v30 > 0x666666666666666LL) {
        GameRoutine_60a210();
      }
      v31 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v30, 16, 0);
      if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_58;
      }
    }
    else {
      v31 = 0;
      if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_58;
      }
    }
    v32 = (__int64*)&v25[v31];
    if (a3 >= 0x17) {
      if ((a3 | 7) == 0x17) {
        v37 = 26;
      }
      else {
        v37 = (a3 | 7) + 1;
      }
      v33 = fw_memory_HeapManager_Allocate(*v27, v37, 16, 0);
      v32[1] = a3;
      v32[2] = v33;
      *v32 = v37 | 1;
    }
    else {
      *(_BYTE*)v32 = 2 * a3;
      v33 = (__int64)v32 + 1;
      if (a3 == 0) {
      LABEL_55:
        *(_BYTE*)(v33 + a3) = 0;
        v38 = v31 + 40 * v30;
        v39 = (__int64)v50;
        v32[3] = (__int64)v50;
        if (v39 != 0) {
          v40 = (_QWORD*)fw_memory_HeapManager_Allocate(*v27, 32, 16, 0);
          v40[2] = 0;
          v40[3] = v39;
          *v40 = &GameData_1fd1588;
          v40[1] = 0;
        }
        else {
          v40 = nullptr;
        }
        v42 = a1[1];
        v41 = a1[2];
        v32[4] = (__int64)v40;
        v50 = nullptr;
        v43 = (__int64)v32 - (v41 - v42);
        memcpy(v43, v42, v41 - v42);
        a1[1] = v43;
        a1[2] = v32 + 5;
        a1[3] = v38;
        if (v42 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*v27 + 200) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(*v27 + v44, v42);
          v45 = v50;
          a1[2] = v32 + 5;
          v50 = nullptr;
          if (v45 != nullptr) {
            GameHr_ad69c0(v45);
            v46 = 128;
            if (*(_QWORD*)(*v27 + 200) == 0) {
              v46 = 56;
            }
            nn_mem_StandardAllocator_Free(*v27 + v46, (__int64)v45);
          }
        }
        goto LABEL_69;
      }
    }
    memmove(v33, (__int64)a2, a3);
    goto LABEL_55;
  }
}

void game_1109640(__int64* a1)
{
  float v1;
  float v2;
  float v3;
  bool v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;
  __int64 v35;
  float v36;
  int v37;
  int v38;
  float v39;
  unsigned int v40;
  int v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  float v50;
  int v51;
  float* v52;
  float* v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  long double v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  __int64 v72;
  float v73;
  float v74;
  float v75;
  float v76;
  __int64 v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  float v86;
  int v87;
  float v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  float v93;
  float v94;
  int v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int128 v103;
  __int128 v104;
  int v105;
  int v106;
  unsigned __int64 v107;

  v1 = *((float*)a1 + 4);
  v2 = *((float*)a1 + 5);
  v3 = fabsf(v2);
  v4 = fabsf(v1) < 0x1.0000000000000p-23f && v3 < 0x1.0000000000000p-23f;
  if (v4) {
    return;
  }
  v5 = *a1;
  v7 = *(_QWORD*)(*a1 + 80);
  if (v7 == 0 || ((v8 = *(_QWORD*)(v7 + 8), v9 = *(_QWORD*)(v5 + 88), v8 != -1)
                      ? (v10 = v9 == 0)
                      : (v10 = true),
                  v10)) {
    v11 = 0x1.11570c0000000p-5f;
  }
  else {
    v11 = (float)(*(float*)(*(_QWORD*)(v9 + 304) + 16LL) *
                  0x1.0aef000000000p+4f) *
          0x1.0624de0000000p-10f;
  }
  v12 = *(float*)(v5 + 40);
  v13 = 0x1.0000000000000p+0f;
  *((float*)a1 + 9) = v12;
  v14 = *(float*)(v5 + 44);
  *((float*)a1 + 10) = v14;
  v15 = v2 - v14;
  v16 = 0x0.0p+0f;
  *((_DWORD*)a1 + 11) = *(_DWORD*)(v5 + 48);
  *((_DWORD*)a1 + 12) = *(_DWORD*)(v5 + 52);
  v17 = v1 - v12;
  v18 = (float)(PSEUDO_UNFUSED(v15 * v15)) + (float)(v17 * v17);
  v19 = 0x1.0000000000000p+0f;
  v20 = 0x0.0p+0f;
  if (v18 >= 0x1.0000000000000p-23f) {
    v21 = 0x1.0000000000000p+0f / sqrtf(v18);
    v20 = v17 * v21;
    v13 = v15 * v21;
  }
  *((float*)a1 + 13) = v20;
  *((float*)a1 + 14) = v13;
  v22 = *((float*)a1 + 3) - v14;
  v23 = *((float*)a1 + 2) - v12;
  v24 = (float)(PSEUDO_UNFUSED(v22 * v22)) + (float)(v23 * v23);
  v4 = v24 < 0x1.0000000000000p-23f;
  v25 = 0x1.0000000000000p+0f / sqrtf(v24);
  v26 = v23 * v25;
  v27 = v22 * v25;
  if (!v4) {
    v16 = v26;
    v19 = v27;
  }
  v107 = __PAIR64__(LODWORD(v19), LODWORD(v16));
  v28 = game_combat_e401e0((float*)&v107, (float*)a1 + 13);
  v29 = fabsf(v28);
  if (v29 >= 0x1.921fb60000000p-1f) {
    if (v29 <= 0x1.2d97c80000000p+1f) {
      if (v28 < 0x0.0p+0f) {
        v30 = 1;
      }
      else {
        v30 = 3;
      }
    }
    else {
      v30 = 2;
    }
  }
  else {
    v30 = 0;
  }
  v31 = *((float*)a1 + 4);
  v32 = *((float*)a1 + 5);
  v33 = *((float*)a1 + 9);
  v34 = *((float*)a1 + 10);
  *((_DWORD*)a1 + 15) = v30;
  v35 = *a1;
  *((float*)a1 + 16) =
      sqrtf((float)(PSEUDO_UNFUSED((float)(v32 - v34) * (float)(v32 - v34))) +
            (float)((float)(v31 - v33) * (float)(v31 - v33)));
  *((float*)a1 + 18) = v11 + *((float*)a1 + 18);
  if ((CharacterAnimator_1079e10(*(_QWORD*)(v35 + 368)) & 1) != 0) {
    v36 = *((float*)a1 + 16);
    if (v36 < 0x1.0000000000000p-1f) {
      if (*((_DWORD*)a1 + 17) != 0) {
        *((_WORD*)a1 + 38) = 0;
        *(__int64*)((char*)a1 + 68) = 0;
      }
      goto LABEL_43;
    }
    if (v36 < 0x1.8000000000000p+0f || (*((_BYTE*)a1 + 77) & 1) != 0) {
      goto LABEL_43;
    }
    v37 = *((_DWORD*)a1 + 15);
    if (v37 > 1) {
      if (v37 != 2) {
        if (v37 == 3) {
          if (*((_DWORD*)a1 + 17) != 3) {
            v38 = 3;
            goto LABEL_38;
          }
        LABEL_40:
          if (v36 <= 0x1.0000000000000p+1f ||
              *((float*)a1 + 18) <= 0x1.8000000000000p+0f) {
            goto LABEL_43;
          }
        LABEL_42:
          *(__int64*)((char*)a1 + 68) = 5;
          *((_BYTE*)a1 + 77) = 1;
          goto LABEL_43;
        }
      LABEL_39:
        if ((unsigned int)(*((_DWORD*)a1 + 17) - 3) > 1) {
          goto LABEL_43;
        }
        goto LABEL_40;
      }
      if (v36 <= 0x1.0000000000000p+1f || (*((_BYTE*)a1 + 76) & 1) != 0) {
        v106 = *((_DWORD*)a1 + 17);
        if (*((_BYTE*)a1 + 76) != 0) {
          if (v106 == 5) {
            goto LABEL_43;
          }
          goto LABEL_42;
        }
        if (v106 != 2) {
          *(__int64*)((char*)a1 + 68) = 2;
        }
      }
      else if (*((_DWORD*)a1 + 17) != 7) {
        *(__int64*)((char*)a1 + 68) = 7;
        *((_BYTE*)a1 + 76) = 1;
      }
    }
    else {
      if (v37 != 0) {
        if (v37 == 1) {
          if (*((_DWORD*)a1 + 17) != 4) {
            v38 = 4;
          LABEL_38:
            *((_DWORD*)a1 + 17) = v38;
            *((_DWORD*)a1 + 18) = 0;
            goto LABEL_40;
          }
          goto LABEL_40;
        }
        goto LABEL_39;
      }
      v105 = *((_DWORD*)a1 + 17);
      if (v36 > 0x1.4000000000000p+1f) {
        if (v105 == 5) {
          goto LABEL_43;
        }
        goto LABEL_42;
      }
      if (v105 != 1) {
        *(__int64*)((char*)a1 + 68) = 1;
      }
    }
  }
LABEL_43:
  v39 = 0x0.0p+0f;
  v40 = *((_DWORD*)a1 + 17) - 1;
  if (v40 <= 4) {
    v41 = *((_DWORD*)a1 + 14);
    v39 = GameData_1bb1c88[v40];
    *((_DWORD*)a1 + 7) = *((_DWORD*)a1 + 13);
    *((_DWORD*)a1 + 8) = v41;
  }
  v42 = v11 * 0x1.e000000000000p+3f;
  v43 = *((float*)a1 + 6);
  if (v43 > v39) {
    v42 = (float)(v11 * 0x1.e000000000000p+3f) * 0x1.8000000000000p+0f;
  }
  if (v43 != v39) {
    if (v43 >= v39) {
      v43 = v43 - v42;
      if (v43 >= v39) {
        goto LABEL_53;
      }
    }
    else {
      v43 = v43 + v42;
      if (v43 <= v39) {
        goto LABEL_53;
      }
    }
    v43 = v39;
  }
LABEL_53:
  v44 = *((float*)a1 + 7);
  v45 = *((float*)a1 + 8);
  v46 = *a1;
  *((float*)a1 + 6) = v43;
  v47 = v43 * v44;
  v48 = v43 * v45;
  v49 = *(float*)(v46 + 40);
  v50 = *(float*)(v46 + 44);
  v107 = 0;
  *(float*)(v46 + 40) = (float)(PSEUDO_UNFUSED(v11 * v47)) + v49;
  *(float*)(v46 + 44) = (float)(PSEUDO_UNFUSED(v11 * v48)) + v50;
  v51 = *((_DWORD*)a1 + 17);
  v52 = (float*)GameData_212c190;
  v53 = (float*)GameData_212c188;
  if (v51 <= 3) {
    if (v51 <= 1) {
      if (v51 == 0) {
        v58 = *((float*)a1 + 3) - *((float*)a1 + 10);
        v59 = *((float*)a1 + 2) - *((float*)a1 + 9);
        v60 = (float)(PSEUDO_UNFUSED(v58 * v58)) + (float)(v59 * v59);
        if (v60 >= 0x1.0000000000000p-23f) {
          v93 = 0x1.0000000000000p+0f / sqrtf(v60);
          v94 = v59 * v93;
          v54 = v58 * v93;
          *(float*)&v107 = v94;
        }
        else {
          v54 = 0x1.0000000000000p+0f;
          LODWORD(v107) = 0;
        }
        goto LABEL_70;
      }
      if (v51 != 1) {
        goto LABEL_71;
      }
      goto LABEL_62;
    }
    if (v51 != 2) {
      v55 = *(float*)GameData_212c190;
      v56 = *((float*)GameData_212c190 + 1);
      v57 = -0x1.921fb60000000p+0f;
    LABEL_69:
      v61 =
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c190 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c190) -
                                                                        (float)((float)(v56 -
                                                                                        (float)(v55 *
                                                                                                0x1.3bd3ce0000000p+1f)) *
                                                                                0x1.3bd3ce0000000p+1f)) *
                                                             0x1.3bd3ce0000000p+1f)) *
                                             0x1.3bd3ce0000000p+1f)) *
                          0x1.3bd3ce0000000p+1f) +
                  0x1.0000000000000p+0f) *
          v57;
      v62 =
          (float)((float)-(
                      float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c188) -
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
                                                                                        0x1.3bd3ce0000000p+1f)) *
                                                                        0x1.3bd3ce0000000p+1f)) *
                                                     0x1.3bd3ce0000000p+1f)) *
                                     0x1.3bd3ce0000000p+1f)) *
                  0x1.3bd3ce0000000p+1f) +
          0x1.0000000000000p+0f;
      v63 = *((float*)a1 + 13);
      v64 = *((float*)a1 + 14);
      v65 = (float)(PSEUDO_UNFUSED(v61 * v64)) + (float)(v63 * v62);
      v54 = (float)(PSEUDO_UNFUSED(v64 * v62)) - (float)(v63 * v61);
      *(float*)&v107 = v65;
      goto LABEL_70;
    }
    goto LABEL_65;
  }
  if ((unsigned int)(v51 - 5) < 2) {
  LABEL_62:
    v54 = *((float*)a1 + 14);
    LODWORD(v107) = *((_DWORD*)a1 + 13);
  LABEL_70:
    *((float*)&v107 + 1) = v54;
    goto LABEL_71;
  }
  if (v51 == 4) {
    v55 = *(float*)GameData_212c190;
    v56 = *((float*)GameData_212c190 + 1);
    v57 = 0x1.921fb60000000p+0f;
    goto LABEL_69;
  }
  if (v51 == 7) {
  LABEL_65:
    v54 = -*((float*)a1 + 14);
    *(float*)&v107 = -*((float*)a1 + 13);
    goto LABEL_70;
  }
LABEL_71:
  *(float*)&v66 = game_combat_e401e0((float*)&v107, (float*)a1 + 11);
  if (*(float*)&v66 != 0x0.0p+0f) {
    v67 = v11 * 0x1.0000000000000p+2f;
    if (*(float*)&v66 >= 0x0.0p+0f) {
      *(float*)&v66 = *(float*)&v66 - v67;
      if (*(float*)&v66 >= 0x0.0p+0f) {
        goto LABEL_77;
      }
      goto LABEL_76;
    }
    *(float*)&v66 = v67 + *(float*)&v66;
    if (*(float*)&v66 > 0x0.0p+0f) {
    LABEL_76:
      *(_QWORD*)&v66 = 0;
    }
  }
LABEL_77:
  v68 = *(float*)&v66 + (float)(roundf(*(float*)&v66 * 0x1.45f3060000000p-3f) *
                                -0x1.921fb60000000p+2f);
  if (v68 <= 0x1.921fb60000000p+0f) {
    v70 = 0x1.0000000000000p+0f;
    if (v68 >= -0x1.921fb60000000p+0f) {
      goto LABEL_82;
    }
    v69 = -0x1.921fb60000000p+1f;
  }
  else {
    v69 = 0x1.921fb60000000p+1f;
  }
  v68 = v69 - v68;
  v70 = -0x1.0000000000000p+0f;
LABEL_82:
  v71 = v68 * v68;
  v72 = *a1;
  v73 =
      v68 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)v52) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)v52 + 4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  v52) -
                                                                    (float)((float)(v52[1] -
                                                                                    (float)(*v52 *
                                                                                            (float)(v68 *
                                                                                                    v68))) *
                                                                            (float)(v68 *
                                                                                    v68))) *
                                                         (float)(v68 * v68))) *
                                         (float)(v68 * v68))) *
                      (float)(v68 * v68)) +
              0x1.0000000000000p+0f);
  v74 =
      v70 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)v53) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)v53 + 4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  v53) -
                                                                    (float)((float)(v53[1] -
                                                                                    (float)(*v53 *
                                                                                            v71)) *
                                                                            v71)) *
                                                         v71)) *
                                         v71)) *
                      v71) +
              0x1.0000000000000p+0f);
  v75 = (float)(PSEUDO_UNFUSED(v73 * *((float*)&v107 + 1))) +
        (float)(*(float*)&v107 * v74);
  v76 = (float)(PSEUDO_UNFUSED(*((float*)&v107 + 1) * v74)) -
        (float)(*(float*)&v107 * v73);
  *(float*)(v72 + 48) = v75;
  *(float*)(v72 + 52) = v76;
  if (*((float*)a1 + 18) == 0x0.0p+0f) {
    v77 = *(_QWORD*)(*a1 + 368);
    v78 = *((_DWORD*)a1 + 17);
    if (v78 <= 2) {
      switch (v78) {
      case 0:
        LODWORD(v66) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
        v86 = -0x1.0000000000000p+0f;
        v87 = 501870813;
        v88 = 0x1.0000000000000p+0f;
        goto LABEL_109;
      case 1:
        *(float*)&v85 = 0x1.6666660000000p+0f;
        break;
      case 2:
        *(float*)&v85 = -0x1.6666660000000p+0f;
        break;
      default:
        goto LABEL_110;
      }
      v88 = *(float*)&v85;
      LODWORD(v66) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      v86 = -0x1.0000000000000p+0f;
      v87 = 387327021;
      goto LABEL_109;
    }
    if (v78 <= 4) {
      if (v78 == 3) {
        v89 = *(_QWORD*)(v77 + 40);
        v90 = *(_QWORD*)(v89 + 392);
        v91 = *(_QWORD*)(v89 + 400);
        if (v91 != 0) {
          v82 = *(_QWORD*)(*a1 + 368);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v91 + 8), 1u,
                                    memory_order_relaxed);
          v83 = *(_QWORD*)(v90 + 11608);
          if (atomic_fetch_add((atomic_ullong* volatile)(v91 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v92 = v83;
            (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
            std___1___shared_weak_count___release_weak(v91);
            v83 = v92;
          }
        }
        else {
          v82 = *(_QWORD*)(*a1 + 368);
          v83 = *(_QWORD*)(v90 + 11608);
        }
        v95 = -878806841;
      }
      else {
        v79 = *(_QWORD*)(v77 + 40);
        v80 = *(_QWORD*)(v79 + 392);
        v81 = *(_QWORD*)(v79 + 400);
        if (v81 != 0) {
          v82 = *(_QWORD*)(*a1 + 368);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v81 + 8), 1u,
                                    memory_order_relaxed);
          v83 = *(_QWORD*)(v80 + 11608);
          if (atomic_fetch_add((atomic_ullong* volatile)(v81 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v84 = v83;
            (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81);
            std___1___shared_weak_count___release_weak(v81);
            v83 = v84;
          }
        }
        else {
          v82 = *(_QWORD*)(*a1 + 368);
          v83 = *(_QWORD*)(v80 + 11608);
        }
        v95 = -873265715;
      }
      v96 = CharacterModel_1071880(v83, v95);
      LODWORD(v66) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      v86 = -0x1.0000000000000p+0f;
      v87 = v96;
      v77 = v82;
      v88 = 0x1.6666660000000p+0f;
      goto LABEL_109;
    }
    if (v78 == 5) {
      LODWORD(v66) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      v86 = -0x1.0000000000000p+0f;
      v87 = 869686455;
      v88 = 0x1.0000000000000p+0f;
      goto LABEL_109;
    }
    if (v78 == 7) {
      LODWORD(v66) = COERCE_UNSIGNED_INT((float)(-0x1.0000000000000p+0f));
      v86 = -0x1.0000000000000p+0f;
      v87 = -2109400973;
      v88 = 0x1.0000000000000p+0f;
    LABEL_109:
      CharacterAnimator_1079580(v77, v87, v66, v86, v88);
    }
  }
LABEL_110:
  if (*GameData_212d448[0] != 0) {
    v97 = *GameData_212d448[0] +
          24LL * (((*(_DWORD*)(*a1 + 96) - 1) & 0xFFFFFFFD) != 0);
    v98 = *(_QWORD*)(v97 + 32);
    if (v98 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v98 + 16), 1u,
                                memory_order_relaxed);
      v99 = *(_QWORD*)(v97 + 40);
      if (*(_QWORD*)(v98 + 8) == -1 || v99 == 0 ||
          (v100 = *(_QWORD*)(v99 + 80)) == 0 || *(_QWORD*)(v100 + 8) == -1 ||
          *(_QWORD*)(v99 + 88) == 0 || *(_QWORD*)(v98 + 8) == -1) {
        std___1___shared_weak_count___release_weak(v98);
      }
      else {
        std___1___shared_weak_count___release_weak(v98);
        v101 = *(_QWORD*)(*(_QWORD*)(*a1 + 88) + 112LL);
        *(_DWORD*)(v101 + 148) = 1065353216;
        *(_DWORD*)(v101 + 152) = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 512LL);
        v102 = CharacterBuilder_1084a50(*(_QWORD*)(v99 + 88), "-Jnt_C_Head");
        if (v102 == 0) {
          GameRoutine_8123d0();
        }
        v103 = *(_OWORD*)(v102 + 48);
        *(_QWORD*)(v101 + 128) = v103;
        v104 = *(_OWORD*)(v101 + 128);
        *((_QWORD*)&v104 + 1) = DWORD2(v103);
        *(_OWORD*)(v101 + 128) = v104;
      }
    }
  }
}

__int64 game_11943c0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9[3];
  __int64 v10[3];

  strcpy((char*)v9, "\"void BmapLoaded()");
  v1 = *GameData_212cfb0[0];
  v2 = *(unsigned int*)(*GameData_212cfb0[0] + 24);
  if ((_DWORD)v2 != 0x2000) {
    v3 = &as_g_context_slots[2 * v2];
    if (v3[1] != 0 && *v3 == *(_QWORD*)(v1 + 16)) {
      v5 = GameRoutine_62cf40(*as_g_script_manager_ptr, v1 + 16,
                              (__int64)v9 + 1);
      if ((v9[0] & 1) != 0 && v9[2] != 0) {
        v6 = v5;
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v9[2]);
        if (v6 == 0) {
          goto LABEL_9;
        }
      }
      else if (v5 == 0) {
        return v5 & 1;
      }
      __builtin_memset(v10, 0, sizeof(v10));
      LOBYTE(v5) = ProcRunEvent_1194a00(a1, "BmapLoaded", v10);
      return v5 & 1;
    }
  }
LABEL_9:
  LOBYTE(v5) = 0;
  return v5 & 1;
}

__attribute__((swiftcall)) void game_17d34b0(PSEUDO_X8 x8_, _DWORD* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;

  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)a2 = 0;
  *(_BYTE*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 36) = 0xFFFFFFFF00000000LL;
  nn_os_GetThreadAvailableCoreMask();
  *(_DWORD*)(a2 + 24) = *a1;
  *(_BYTE*)(a2 + 33) = 1;
  result = nn_os_GetThreadAvailableCoreMask();
  *(_QWORD*)(a2 + 48) = result;
  {
    result;
    return;
  }
}

__int64 game_17e3cc0()
{

#pragma clang fp contract(off)
  __int64 result;
  int v1;
  __int64 v2;
  int v3;
  int v4;
  unsigned int v5;

  nn_oe_SetGraphicsScaleChangedNotificationEnabled(true);
  nn_vi_Initialize();
  nn_vi_OpenDefaultDisplay((__int64)&GameData_22660f8);
  nn_vi_CreateLayer((__int64)&GameData_2266100, GameData_22660f8);
  nn_vi_GetNativeWindow((__int64)&GameData_2266108, GameData_2266100);
  v5 = 0;
  GameData_2265ab0 = GameData_22660f8;
  GameData_2265ab8 = GameData_2266100;
  result = nn_vi_QueryDisplayBufferMaxResolution(&v5);
  v1 = v5;
  v2 = game_g_frame_clock;
  if (v5 > 3) {
    v4 = 1080;
    v3 = 1920;
  }
  else {
    v3 = GameData_1a82e90[v5];
    v4 = GameData_1a82c20[v5];
  }
  *(_DWORD*)(game_g_frame_clock + 13296) = v3;
  *(_DWORD*)(v2 + 13300) = v4;
  GameData_2266110 = v1;
  if ((unsigned __int8)GameData_2265aa8 == 1) {
    nn_vi_SetLayerNextHdrStandardContentLuminanceRangeMetadata(
        GameData_2265ab8, 0, (int)*(float*)&GameData_21675c0);
    nn_vi_SetLayerNextHdrExtendedContentLuminanceRangeMetadata(GameData_2265ab8,
                                                               0, 0x190u);
    return nn_vi_SetLayerNextHdrContentGamutMetadata(GameData_2265ab8, 1);
  }
  return result;
}

void __attribute__((noreturn)) game_17e3de0()
{
  __int64* v0;
  int v1;
  int CurrentGraphicsScaleEv;
  __int64 v3;
  __int64** v4;
  __int64 v5;
  unsigned int v6;
  int v7;

  v0 = (__int64*)game_g_game_setting_ptr;
  while (1) {
    while (1) {
      v1 = nn_oe_PopNotificationMessage();
      if (v1 <= 29) {
        break;
      }
      switch (v1) {
      case 30:
        nn_os_SignalLightEvent((__int64)&GameData_22660d0);
        break;
      case 31:
        nn_os_SignalLightEvent((__int64)&GameData_22660dc);
        break;
      case 300:
        CurrentGraphicsScaleEv = nn_oe_GetCurrentGraphicsScale();
        if (GameData_2266118 != CurrentGraphicsScaleEv) {
          GameData_2266118 = CurrentGraphicsScaleEv;
          nn_os_SignalLightEvent((__int64)&GameData_22660e8);
        }
        break;
      default:
        break;
      }
    }
    switch (v1) {
    case 15:
      nn_oe_GetCurrentFocusState();
      break;
    case 16:
      v3 = *v0;
      if (*v0 != 0) {
        nn_os_AcquireWriteLock(v3 + 984);
        *(_DWORD*)(v3 + 1032) = 1;
        nn_os_ReleaseWriteLock(v3 + 984);
      }
      break;
    case 4:
      v4 = (__int64**)GameData_212d6e8;
      while (*v4 != nullptr) {
        v5 = **v4;
        if (v5 == 0) {
          break;
        }
        v6 = atomic_load((unsigned int*)(v5 + 804));
        if (v6 == 0) {
          v7 = atomic_load((unsigned __int8*)(*(_QWORD*)(v5 + 792) + 81LL));
          if (v7 != 1) {
            break;
          }
        }
        nn_os_SleepThread(16000000);
      }
      nn_oe_LeaveExitRequestHandlingSection();
      while (1) {
        nn_os_SleepThread(86400000000000LL);
      }
    default:
      break;
    }
  }
}

#pragma GCC visibility pop
