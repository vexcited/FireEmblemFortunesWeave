#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Crc32List_1163b0(void);
__int64 GameManager_a20000(_QWORD);
__int64 GameManager_a2c910(void);
__int64 GameManager_a2d080(_QWORD);
__int64 GameRoutine_106500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_118fd0(_QWORD);
__int64 GameRoutine_1905100(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_820a30(_QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_a201c0(_QWORD);
__int64 GameRoutine_a28e10(_QWORD, _QWORD);
__int64 GameRoutine_a290c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, double);
__int64 GameRoutine_a292c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a2c9c0(_QWORD, _QWORD);
__int64 GameRoutine_e7a00(_QWORD);
__int64 GameRoutine_e7ae0(_QWORD, _QWORD);
__int64 GameRoutine_e7b50(void);
__int64 GameRoutine_ebfb0(_QWORD);
__int64 GameRoutine_ec260(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_BGM_BGM(void);
__int64 snd_BGM_destroy(_QWORD);
__int64 snd_BGM_getFirstName(_QWORD);
__int64 snd_BGM_isFirstActive(_QWORD);
__int64 snd_BGM_setInstance(_QWORD);
__int64 snd_Env_reset(_QWORD);
__int64 snd_Env_stop_dde60(_QWORD);
__int64 snd_Env_stop_df9a0(_QWORD, _QWORD);
__int64 snd_FF_stop(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10cd70(_QWORD, _QWORD);
__int64 snd_Voice_registry(_QWORD);
__int64 snd_Wind_reset(_QWORD);
__int64 snd_Wind_stop_e4440(_QWORD, _QWORD);
__int64 snd_Wind_stop_e4920(_QWORD, _QWORD);
__int64 snd_data_findFieldData(_QWORD);
__int64 snd_data_findSurroundData(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD, long double);
__int64 snd_fnd_calcCrc32(_QWORD, _QWORD);
__int64 snd_getDefineInt(_QWORD);
__int64 snd_getUnknown10(_QWORD);
__int64 snd_hasSound(_QWORD);
__int64 snd_resetBusVolume(_QWORD);
__int64 snd_resetBuses(_QWORD);
__int64 snd_setListenerSurround_100980(void);
__int64 snd_setVibrationSurround_101640(void);
__int64 snd_startBgmVolume(_QWORD, double);
__int64 snd_startMasterVolume(_QWORD, float);
__int64 snd_startSeVolume(_QWORD, double);
__int64 snd_startVolume_1006d0(_QWORD, _QWORD, _QWORD, float);
__int64 snd_stopBuses(_QWORD, _QWORD, double);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 GameRoutine_e8120(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _DWORD* GameData_21321f8;
extern _UNKNOWN GameData_21faa70;
extern _UNKNOWN* GameData_212e298;
extern __int16 GameData_21fab70;
extern __int64 (*GameData_1fbdec0[])();
extern __int64 (*snd_AnimeSound_vtable[])();
extern __int64 (*snd_GameManager_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9648;
extern __int64 GameData_21c96d8;
extern __int64 GameData_22400f8;
extern __int64 GameData_2265eb0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 snd_g_memory;
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212e290;
extern __int64* GameData_21321f0;
extern __int64* snd_s_target_ptr;
extern char GameData_1a9f09e;
extern char GameData_21fab72;
extern char GameData_21fab73;
extern char GameData_21fab74;
extern char* GameData_2167420[13];
extern char* GameData_2167428[12];
extern char* GameData_2167430[11];
extern char* GameData_2167438[10];
extern char* GameData_2167440[9];
extern char* GameData_2167448[8];
extern char* GameData_2167450[7];
extern char* GameData_2167458[6];
extern char* GameData_2167460[5];
extern char* GameData_2167468[4];
extern char* GameData_2167470[3];
extern char* GameData_2167478[2];
extern char* GameData_2167480;
extern int GameData_1b5c374[];
extern int GameData_1fbdc18;
extern int GameData_1fbdc28;
extern int GameData_1fbdc38;
extern int GameData_1fbdc48;
extern int GameData_1fbdc58;
extern int GameData_1fbdc68;
extern int GameData_1fbdc78;
extern int GameData_1fbdc88;
extern int GameData_1fbdc98;
extern int GameData_1fbdca8;
extern int GameData_1fbdcb8;
extern int GameData_1fbdcc8;
extern int GameData_1fbdcd8;
extern int GameData_1fbdce8;
extern int GameData_1fbdcf8;
extern int GameData_1fbdd08;
extern int GameData_1fbdd18;
extern int GameData_1fbdd28;
extern int GameData_1fbdd38;
extern int GameData_1fbdd48;
extern int GameData_1fbdd58;
extern int GameData_21fa938;
extern int GameData_21fa93c;
extern int GameData_21fa940;
float snd_BGM_getFirstPlayPosition(_QWORD);
float snd_Fade_getTime(_QWORD);
float snd_fnd_calcDistance_fe090(_QWORD, _QWORD);
float snd_getFadeTime(_QWORD);
struct PseudoSret GameRoutine_1181f0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_a3aba0(_QWORD, _QWORD, _QWORD, float);
struct PseudoSret snd_BGM_getFirstHandle(void);
struct PseudoSret snd_findSlot_100a50(_QWORD);
void GameManager_a2c6e0(__int64, __int64, _BYTE*, float);
void __attribute__((noreturn)) GameRoutine_60a230(void);
__int64 GameManager_Destructor(__int64 a1);
__int64 GameManager_initialize(__int64 a1);
__int64* GameManager_a223a0(__int64 a1);
void GameManager_stopField(__int64 a1);
__int64 GameManager_a22bd0();
__int64 GameManager_reset(__int64 a1);
__int64 GameManager_stopWithoutBGM(__int64 a1, __int64 a2);
__int64 GameManager_a22fd0(__int64 result, __int64 a2);
_QWORD* GameManager_a28c50(__int64 a1);
__int64 GameManager_a2a3a0(__int64 result);
__int64 GameManager_a2adb0(__int64 a1, __int64 a2);
__int64 GameManager_a2bd50(__int64 a1, __int64 a2, char a3);
__int64 GameManager_a2c3b0(__int64 a1, const char* a2, const char* a3, char a4,
                           char a5, char a6, __int64 a7);
_QWORD* GameManager_a2c820(__int64 a1, __int64 a2, char a3);
__int64 GameManager_a2cab0(__int64 result, __int64 a2, _BYTE* a3, float a4);
__int64 GameManager_a2cc00(__int64 result, _BYTE* a2);
__int64 GameManager_a2cf60(__int64 result, __int64 a2, _BYTE* a3, float a4);
_QWORD* GameManager_a2d8b0(_QWORD* result, __int64 a2, char a3, char a4);
__int64 GameManager_a2f490(__int64 a1);
__int64 GameManager_a30ab0(__int64 result, _BYTE* a2);
__int64 GameManager_a30b40(__int64 a1, __int64 a2);
__int64 GameManager_a31720(__int64 a1, _BYTE* a2);
const char* GameManager_a31a20();
__int64 GameManager_a32880(__int64 a1);
void GameManager_a32d60(__int64 a1, __int64 a2, float* a3, float* a4);
__int64 GameManager_a34a90(__int64 a1, __int64 a2, _DWORD* a3);
__int64 GameManager_a34c30(__int64 result, __int64 a2);
__int64 GameManager_a35190(__int64 result, __int64 a2);
bool GameManager_a35ca0(__int64 a1, __int16* a2);
__int64 GameManager_a38b10(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_17ca40(_QWORD);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 GameRoutine_e8510(_QWORD, _QWORD);
__int64 __cxa_guard_release_alt1(_QWORD) __asm__("__cxa_guard_release");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD, long double);
__int64 snd_Voice_hasFeature(_QWORD, _QWORD);
__int64 snd_data_findEffectData(_QWORD);
__int64 snd_isDisabled(void);
__int64 snd_setListenerSurround_100920(_QWORD);
__int64 snd_setVibrationSurround_101660(_QWORD);
__n128 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 long double) __asm__("snd_Fade_Fade_10c830");
extern _UNKNOWN GameData_21fac98;
extern __int64 (*GameData_1fbde20[])();
extern __int64 (*GameData_1fbdf30[])();
extern __int64 (*GameData_1fbdfb0[])();
extern __int64 (*GameData_1fbe040[])();
extern __int64 (*GameData_1fbe160[])();
extern __int64 (*GameData_1fbe1d0[])();
extern __int64 (*GameData_1fbe250[])();
extern __int64 (*GameData_1fbe360[])();
extern __int64 (*GameData_1fbe460[])();
extern __int64 GameData_21fa928;
extern __int64 GameData_21fac90;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212e248[2];
struct PseudoSret GameRoutine_120380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD, _QWORD, _QWORD, _QWORD,
                                             _QWORD);
void __attribute__((noreturn)) String_60a230(void);
float GameManager_getMasterScale();
__int64 GameManager_setupFields(__int64 a1);
_QWORD* snd_GameManager_main_lambda0_Invoke(__int64 a1, __int64 a2);
__n128 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a36f60(__int64 a1,
                                                            __int64* a2);
__int64 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a37280(__int64 a1,
                                                             __int64* a2);
__int64 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a37480(__int64 a1,
                                                             __int64* a2);
__int64 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a37640(__int64 a1,
                                                             __int64* a2);
void snd_GameManager_SetMode_lambda0_Invoke_a377c0_alt1(
    __int64 a1,
    __int64* a2) __asm__("snd_GameManager_SetMode_lambda0_Invoke_a377c0");
_QWORD* snd_GameManager_SetMode_lambda0_Invoke_a37a00(__int64 a1, __int64* a2);
__int64 snd_GameManager_SetMode_lambda0_Invoke_a37c40(__int64 a1, _QWORD* a2);
__int64 snd_GameManager_SetMode_lambda0_Invoke_a37db0(__int64 a1, _QWORD* a2);
_QWORD* snd_GameManager_SetMode_lambda1_Invoke_a37f20(__int64 a1, __int64 a2);
__n128 snd_GameManager_SetMode_lambda1_Invoke_a380c0(__int64 a1, _QWORD* a2);
_QWORD* snd_GameManager_EndDemo_lambda0_Invoke_a38220(__int64 a1, __int64 a2);
__n128 snd_GameManager_EndDemo_lambda0_Invoke_a383c0_alt1(
    __int64 a1,
    __int64* a2) __asm__("snd_GameManager_EndDemo_lambda0_Invoke_a383c0");
__int64
snd_GameManager_GetListCurrentEncountBattleBGM_lambda0_Invoke(__int64 a1,
                                                              _QWORD* a2);
__int64 snd_GameManager_GetListCurrentCommandBattleBGM_lambda0_Invoke_alt2(
    __int64 a1,
    _QWORD* a2) __asm__("snd_GameManager_GetListCurrentCommandBattleBGM_"
                        "lambda0_Invoke");
__n128 snd_GameManager__updatePauseWorld_lambda0_Invoke(__int64 a1, _QWORD* a2);
_DWORD* GameRoutine_e8be0(__int64, unsigned __int8*);
_DWORD* snd_data_findFieldData_alt1(int*) __asm__("snd_data_findFieldData");
__attribute__((swiftcall)) void snd_a2fe30(PSEUDO_X8, __int64, __int64*,
                                           const char*, char, char, char,
                                           __int64, __int64);
__attribute__((swiftcall)) void
snd_findSlot_100a50_alt1(PSEUDO_X8, int*) __asm__("snd_findSlot_100a50");
__int64* GameManager_a2e490(__int64, __int64, char);
__int64* game_8224a0(unsigned __int8);
__int64 GameManager_a2c4f0(_QWORD*, char*, const char*, char, char, char,
                           __int64);
__int64 GameManager_a2e6f0(__int64, unsigned __int8*, char, char, char,
                           __int64);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64 GameRoutine_820a80();
__int64 GameRoutine_a32b10(__int64 result);
__int64 GameRoutine_e7ef0(__int64 result);
__int64 GameRoutine_e8270(__int64 result, __int64);
__int64 GameVariable_82e7c0(_QWORD, _QWORD);
__int64 Seq_114d520(__int64, __int64);
__int64 Seq_114d680(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 snd_Fade_Destroy_Fade_alt2(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_GameManager_GetListCurrentCommandBattleBGM_lambda0_Invoke_alt1(
    _QWORD, _QWORD) __asm__("snd_GameManager_GetListCurrentCommandBattleBGM_"
                            "lambda0_Invoke");
__int64 snd_data_getMuseumData(_QWORD);
__int64 snd_data_getMuseumDataCount(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_getListener();
__int64 snd_startBusVolume(__int64, unsigned int, unsigned int, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
double snd_getDefineValue(unsigned __int8*);
extern _UNKNOWN* GameData_212c540;
extern __int64 (*GameData_1fbe4f0[])();
extern __int64 (*GameData_1fbe570[])();
extern __int64 (*GameData_1fbe5f0[])();
extern __int64 (*GameData_1fbe6f0[])();
extern __int64* GameData_212ce90[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_21ca000;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_220b6f0;
extern __int64 GameData_2219078;
extern __int64 GameData_22336e0;
extern __int64 game_sound_g_game_sound;
extern char* GameData_1fbe770[8];
extern int GameData_1fbdc18_alt1[] __asm__("GameData_1fbdc18");
extern int GameData_21fa944;
extern int GameData_21fa94c;
extern int GameData_21fa950;
extern int GameData_21fa954;
extern int GameData_21fa958;
extern int GameData_21fa95c;
float acosf(float);
float32x4_t snd_GameManager_UpdateListenerPos_lambda0_Invoke(__int64,
                                                             float32x4_t*,
                                                             float32x4_t*);
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void snd_Fade_Fade_10c830_alt2(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 GameManager_a21ca0_alt1(__int64 result, char* a2, unsigned __int8* a3,
                                char a4, char a5,
                                char a6) __asm__("GameManager_a21ca0");
__int64 snd_GameManager_UpdateListenerPos(__int64 result);
__attribute__((swiftcall)) void
snd_GameManager_GetListCurrentEncountBattleBGM(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2);
__int64 GameManager_a31fd0(__int64 a1, _BYTE* a2);
const char* GameManager_a32140();
__attribute__((swiftcall)) void
snd_GameManager_GetListCurrentCommandBattleBGM(PSEUDO_X8 x8_);
__int64 GameManager_a32960(__int64 a1, unsigned __int8* a2, char a3, char a4,
                           char a5, __int64 a6);
float* GameManager_setField(__int64 a1, unsigned __int8* a2);
__int64 GameManager_onSuspend(__int64 result);
__int64 (***snd_GameManager__updatePauseWorld_lambda0_Invoke_a38c40(
    __int64 a1, __int64 a2))();
__int64 GameRoutine_a2af20(__int64, __int64, __int64, ...);
__int64 GameRoutine_e8ff0(__int64, unsigned __int8*);
extern int GameData_226b690;
__int64 GameManager_a201c0();
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void game_a3aba0(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                                            float);
__int64 Crc32List_1163b0_alt1() __asm__("Crc32List_1163b0");
float snd_fnd_calcDistance_fe090_alt1(float*, float*) __asm__(
    "snd_fnd_calcDistance_fe090");
_QWORD* GameManager_a2e490_alt1(__int64, __int64,
                                char) __asm__("GameManager_a2e490");
__int64 GameHr_a2e6f0(__int64, unsigned __int8*, char, char, char, __int64);
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
snd_data_getMuseumDataCount_alt1() __asm__("snd_data_getMuseumDataCount");
__int64 snd_getUnknown10_alt1() __asm__("snd_getUnknown10");
bool snd_Voice_hasFeature_alt1(__int64,
                               unsigned int) __asm__("snd_Voice_hasFeature");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
int snprintf_alt1(__int64, unsigned __int64, const char*,
                  ...) __asm__("snprintf");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void* snd_data_getMuseumData_alt1(int) __asm__("snd_data_getMuseumData");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230_alt1() __asm__("String_60a230");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c910_alt1(__int64, int) __asm__("snd_Fade_Fade_10c910");
__int64 GameManager_a21ca0(__int64 result, const char* a2, unsigned __int8* a3,
                           char a4, char a5, char a6);
__int64 snd_GameManager_SetMode_lambda0_Invoke_a377c0(__int64 a1, __int64* a2);
__int64 snd_GameManager_EndDemo_lambda0_Invoke_a383c0(__int64 a1, __int64* a2);
void snd_GameManager_GetListCurrentCommandBattleBGM_lambda0_Invoke(
    __int64 a1, const char** a2);

__int64 GameManager_Destructor(__int64 a1)
{
  __int64 v2;
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
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 i;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  *(_QWORD*)a1 = snd_GameManager_vtable;
  GameRoutine_e7ae0(a1, 0);
  v2 = *(_QWORD*)(a1 + 3168);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 3176) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  if ((*(_BYTE*)(a1 + 3136) & 1) != 0 && *(_QWORD*)(a1 + 3152) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
  }
  if ((*(_BYTE*)(a1 + 3104) & 1) != 0 && *(_QWORD*)(a1 + 3120) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  if ((*(_BYTE*)(a1 + 3080) & 1) != 0 && *(_QWORD*)(a1 + 3096) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
  }
  if ((*(_BYTE*)(a1 + 3048) & 1) != 0 && *(_QWORD*)(a1 + 3064) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
  }
  if ((*(_BYTE*)(a1 + 3024) & 1) != 0 && *(_QWORD*)(a1 + 3040) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
  }
  if ((*(_BYTE*)(a1 + 2992) & 1) != 0 && *(_QWORD*)(a1 + 3008) != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
  }
  if ((*(_BYTE*)(a1 + 2968) & 1) != 0 && *(_QWORD*)(a1 + 2984) != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
  }
  if ((*(_BYTE*)(a1 + 2928) & 1) != 0 && *(_QWORD*)(a1 + 2944) != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
  }
  if ((*(_BYTE*)(a1 + 2896) & 1) != 0 && *(_QWORD*)(a1 + 2912) != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
  }
  if ((*(_BYTE*)(a1 + 2856) & 1) != 0 && *(_QWORD*)(a1 + 2872) != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15);
  }
  if ((*(_BYTE*)(a1 + 2824) & 1) != 0 && *(_QWORD*)(a1 + 2840) != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
  }
  if ((*(_BYTE*)(a1 + 2784) & 1) != 0 && *(_QWORD*)(a1 + 2800) != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17);
  }
  if ((*(_BYTE*)(a1 + 2760) & 1) != 0 && *(_QWORD*)(a1 + 2776) != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
  }
  if ((*(_BYTE*)(a1 + 2728) & 1) != 0 && *(_QWORD*)(a1 + 2744) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19);
  }
  if ((*(_BYTE*)(a1 + 2704) & 1) != 0 && *(_QWORD*)(a1 + 2720) != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20);
  }
  if ((*(_BYTE*)(a1 + 2680) & 1) != 0 && *(_QWORD*)(a1 + 2696) != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21);
  }
  if ((*(_BYTE*)(a1 + 2656) & 1) != 0 && *(_QWORD*)(a1 + 2672) != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v22);
  }
  if ((*(_BYTE*)(a1 + 2632) & 1) != 0 && *(_QWORD*)(a1 + 2648) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
  }
  if ((*(_BYTE*)(a1 + 2608) & 1) != 0 && *(_QWORD*)(a1 + 2624) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24);
  }
  if ((*(_BYTE*)(a1 + 2488) & 1) != 0 && *(_QWORD*)(a1 + 2504) != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v25);
  }
  if ((*(_BYTE*)(a1 + 2456) & 1) != 0 && *(_QWORD*)(a1 + 2472) != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26);
  }
  if ((*(_BYTE*)(a1 + 2432) & 1) != 0 && *(_QWORD*)(a1 + 2448) != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v27);
  }
  if ((*(_BYTE*)(a1 + 2200) & 1) != 0 && *(_QWORD*)(a1 + 2216) != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v28);
  }
  if ((*(_BYTE*)(a1 + 1968) & 1) != 0 && *(_QWORD*)(a1 + 1984) != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v29);
  }
  if ((*(_BYTE*)(a1 + 1936) & 1) != 0 && *(_QWORD*)(a1 + 1952) != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v30);
  }
  if ((*(_BYTE*)(a1 + 1904) & 1) != 0 && *(_QWORD*)(a1 + 1920) != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v31);
  }
  if ((*(_BYTE*)(a1 + 1872) & 1) != 0 && *(_QWORD*)(a1 + 1888) != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32);
  }
  if ((*(_BYTE*)(a1 + 1840) & 1) != 0 && *(_QWORD*)(a1 + 1856) != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v33);
  }
  if ((*(_BYTE*)(a1 + 1808) & 1) != 0 && *(_QWORD*)(a1 + 1824) != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v34);
  }
  if ((*(_BYTE*)(a1 + 1776) & 1) != 0 && *(_QWORD*)(a1 + 1792) != 0) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v35);
  }
  if ((*(_BYTE*)(a1 + 1744) & 1) != 0 && *(_QWORD*)(a1 + 1760) != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v36);
  }
  if ((*(_BYTE*)(a1 + 1712) & 1) != 0 && *(_QWORD*)(a1 + 1728) != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v37);
  }
  if ((*(_BYTE*)(a1 + 1680) & 1) != 0 && *(_QWORD*)(a1 + 1696) != 0) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v38);
  }
  if ((*(_BYTE*)(a1 + 1648) & 1) != 0 && *(_QWORD*)(a1 + 1664) != 0) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v39);
  }
  if ((*(_BYTE*)(a1 + 1616) & 1) != 0 && *(_QWORD*)(a1 + 1632) != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v40);
  }
  if ((*(_BYTE*)(a1 + 1584) & 1) != 0 && *(_QWORD*)(a1 + 1600) != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v41);
  }
  if ((*(_BYTE*)(a1 + 1552) & 1) != 0 && *(_QWORD*)(a1 + 1568) != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v42);
  }
  if ((*(_BYTE*)(a1 + 1520) & 1) != 0 && *(_QWORD*)(a1 + 1536) != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v43);
  }
  if ((*(_BYTE*)(a1 + 1488) & 1) != 0 && *(_QWORD*)(a1 + 1504) != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v44);
  }
  for (i = 768; i != 0; i -= 24) {
    if ((*(_BYTE*)(a1 + i + 688) & 1) != 0 && *(_QWORD*)(a1 + i + 704) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v46 = 128;
      }
      else {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v46);
    }
  }
  if ((*(_BYTE*)(a1 + 680) & 1) != 0 && *(_QWORD*)(a1 + 696) != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v47);
  }
  if ((*(_BYTE*)(a1 + 656) & 1) != 0 && *(_QWORD*)(a1 + 672) != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v48);
  }
  v49 = *(_QWORD*)(a1 + 568);
  *(_QWORD*)(a1 + 552) = snd_AnimeSound_vtable;
  if (v49 != 0) {
    *(_QWORD*)(a1 + 576) = v49;
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  if ((*(_BYTE*)(a1 + 496) & 1) != 0 && *(_QWORD*)(a1 + 512) != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v50);
  }
  if ((*(_BYTE*)(a1 + 472) & 1) != 0 && *(_QWORD*)(a1 + 488) != 0) {
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v51);
  }
  if ((*(_BYTE*)(a1 + 448) & 1) != 0 && *(_QWORD*)(a1 + 464) != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v52);
  }
  if ((*(_BYTE*)(a1 + 424) & 1) != 0 && *(_QWORD*)(a1 + 440) != 0) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v53);
  }
  return GameRoutine_e7a00(a1);
}

__int64 GameManager_initialize(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v2 = GameRoutine_e7b50();
  *(_BYTE*)(a1 + 48) = 0;
  snd_BGM_destroy(v2);
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  snd_BGM_BGM();
  *v3 = GameData_21321f0 + 2;
  snd_BGM_setInstance(v3);
  v4 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 8) = v3;
  GameRoutine_ebfb0(v4);
  GameRoutine_ec260(*(_QWORD*)(a1 + 40));
  *(_DWORD*)(a1 + 2752) = 0;
  v5 = GameManager_a20000(a1);
  *(_QWORD*)(a1 + 2564) = 0;
  *(_QWORD*)(a1 + 2572) = 0;
  *(_QWORD*)(a1 + 2548) = 0;
  *(_QWORD*)(a1 + 2556) = 0;
  result = GameRoutine_a201c0(v5);
  *(_BYTE*)(a1 + 48) = 1;
  return result;
}

__int64 GameManager_a201c0()
{
  const char* v0;
  __int64* v1;
  unsigned __int8 v3[256];

  if (GameData_226b690 != 0) {
    v0 = "voiceEN_%d";
    GameRoutine_a2af20((__int64)v3, 256, (__int64)"voiceEN_%d", 0);
  }
  else {
    v0 = "voiceJP_%d";
    GameRoutine_a2af20((__int64)v3, 256, (__int64)"voiceJP_%d", 0);
  }
  v1 = game_sound_g_game_sound_ptr[0];
  GameRoutine_e8ff0(*game_sound_g_game_sound_ptr[0], v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 1);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 2);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 3);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 4);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 5);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 6);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 7);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 8);
  GameRoutine_e8ff0(*v1, v3);
  GameRoutine_a2af20((__int64)v3, 256, (__int64)v0, 9);
  return GameRoutine_e8ff0(*v1, v3);
}

__int64 GameManager_a21ca0(__int64 result, const char* a2, unsigned __int8* a3,
                           char a4, char a5, char a6)
{

#pragma clang fp contract(off)
  __int64 v8;
  unsigned __int8* v10;
  _QWORD* v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  __int64 v17;
  char v18;
  __int64* v19;
  __int64 v20;
  char v21;
  char v22;
  const char* v23;
  char v24;
  __int64 v25;
  int v26;
  int v27;
  unsigned int v28;
  _DWORD* v29;
  const char* v30;
  _DWORD* v31;
  int v32;
  char v33;
  char v34;
  const char* v35;
  const char* v36;
  char* v37;
  const char* v38;
  const char* v39;
  char v40;
  const char* v41;
  const char* v42;
  unsigned __int8* v43;
  const char* v44;
  const char* v45;
  unsigned __int8* v46;
  __int64 v47;
  double v48;
  float v49;
  unsigned __int8* v50;
  _QWORD v51[25];
  _QWORD v52[34];
  unsigned int v53;

  if (*(int*)(result + 636) > 0) {
    return result;
  }
  v52[33] = v8;
  v10 = (unsigned __int8*)a2;
  v11 = (_QWORD*)result;
  if ((a6 & 1) == 0) {
    v12 = *(_QWORD*)(result + 664);
    if ((*(_BYTE*)(result + 656) & 1) == 0) {
      v12 = *(_BYTE*)(result + 656) >> 1;
    }
    if (v12 == 0) {
      v20 = result + 656;
      v21 = a4 & 1;
      v22 = a5 & 1;
      if (a2 == nullptr) {
        a2 = &GameData_1a9f09e;
      }
      GameRoutine_60a020_alt2(v20, a2);
      if (a3 != nullptr) {
        v23 = (const char*)a3;
      }
      else {
        v23 = &GameData_1a9f09e;
      }
      result = GameRoutine_60a020_alt2((__int64)(v11 + 85), v23);
      *((_BYTE*)v11 + 704) = v21;
      *((_BYTE*)v11 + 705) = v22;
      return result;
    }
  }
  if ((*(_BYTE*)(result + 656) & 1) != 0) {
    v13 = *(_BYTE**)(result + 672);
    *(_QWORD*)(result + 664) = 0;
  }
  else {
    v13 = (_BYTE*)(result + 657);
    *(_BYTE*)(result + 656) = 0;
  }
  *v13 = 0;
  if ((*(_BYTE*)(result + 680) & 1) != 0) {
    v14 = *(_BYTE**)(result + 696);
    *(_QWORD*)(result + 688) = 0;
  }
  else {
    v14 = (_BYTE*)(result + 681);
    *(_BYTE*)(result + 680) = 0;
  }
  *v14 = 0;
  *(_WORD*)(result + 704) = 0;
  if (*(_DWORD*)(result + 616) != 0) {
    snd_Fade_Fade_10c830_alt2((__int64)v52, 0x1.f400000000000p+9f);
    GameManager_a2e490_alt1((__int64)v11, (__int64)v52, 1);
    snd_Fade_Destroy_Fade_alt2(v52);
    *((_DWORD*)v11 + 713) = 1;
  }
  v17 = *v11;
  *((_BYTE*)v11 + 3076) = 0;
  (*(void (**)(_QWORD*))(v17 + 64))(v11);
  v18 = a5;
  v19 = GameData_212ce90[0];
  if ((a4 & 1) != 0) {
    if (*GameData_212ce90[0] != 0) {
      if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 0x10) == 0) {
        goto LABEL_33;
      }
    LABEL_32:
      *((_BYTE*)v11 + 2816) = 1;
      goto LABEL_33;
    }
    if (GameData_2219078 != 0) {
      if ((*(_BYTE*)(*(_QWORD*)(GameData_2219078 + 56) + 8LL) & 8) != 0) {
        goto LABEL_32;
      }
    }
    else if (GameData_22336e0 != 0) {
      v24 = Seq_114d680(GameData_22336e0);
      v18 = a5;
      if ((v24 & 1) != 0) {
        goto LABEL_32;
      }
    }
    else if (GameData_21f3cc0 != 0 && *(_DWORD*)(GameData_21f3cc0 + 160) == 1) {
      goto LABEL_32;
    }
  }
LABEL_33:
  if ((v18 & 1) != 0) {
    if (*v19 != 0) {
      if ((*(_BYTE*)(*v19 + 21) & 8) == 0) {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    if (GameData_2219078 != 0) {
      if ((*(_BYTE*)(*(_QWORD*)(GameData_2219078 + 56) + 8LL) & 4) == 0) {
        goto LABEL_46;
      }
      goto LABEL_45;
    }
    if (GameData_22336e0 != 0) {
      v25 = (*(_BYTE*)(GameData_22336e0 + 280) & 1) != 0
                ? *(_QWORD*)(GameData_22336e0 + 296)
                : GameData_22336e0 + 281;
      if ((Seq_114d520(GameData_22336e0, v25) & 1) != 0) {
      LABEL_45:
        *((_DWORD*)v11 + 703) = 1;
      }
    }
  }
LABEL_46:
  v26 = *((_DWORD*)v11 + 703);
  v27 = *((_DWORD*)v11 + 702);
  v28 = *((unsigned __int8*)v11 + 2816);
  snd_Fade_Fade_10c830_alt2((__int64)v52, 0x0.0p+0f);
  GameRoutine_e8270((__int64)v11, (__int64)v52);
  snd_Fade_Destroy_Fade_alt2(v52);
  if (v10 != nullptr && *v10 != 0 &&
      (LODWORD(v52[0]) = (unsigned int)snd_fnd_calcCrc32_alt1(v10, 0),
       (v29 = snd_data_findFieldData_alt1((int*)v52)) != nullptr)) {
    if (v29[5] != 0) {
      v30 = (const char*)v10;
    }
    else {
      v30 = nullptr;
    }
    if (a3 == nullptr) {
      goto LABEL_72;
    }
  }
  else {
    v30 = nullptr;
    if (a3 == nullptr) {
      goto LABEL_72;
    }
  }
  if (v30 == nullptr) {
    if (*a3 != 0) {
      LODWORD(v52[0]) = (unsigned int)snd_fnd_calcCrc32_alt1(a3, 0);
      v31 = snd_data_findFieldData_alt1((int*)v52);
      if (v31 != nullptr) {
        v30 = (const char*)a3;
        if (v31[5] != 0) {
          goto LABEL_73;
        }
      }
    }
    goto LABEL_59;
  }
LABEL_72:
  if (v30 != nullptr) {
  LABEL_73:
    snd_Fade_Fade_10c830_alt2((__int64)v52, 0x0.0p+0f);
    GameManager_a2c3b0((__int64)v11, v30, &GameData_1a9f09e, v26 == 1, v27 == 1,
                       v28, (__int64)v52);
    snd_Fade_Destroy_Fade_alt2(v52);
    snd_Fade_Fade_10c830_alt2((__int64)v52, 0x0.0p+0f);
    (*(void (**)(_QWORD*, const char*, bool, bool, _QWORD, _QWORD*))(
        *v11 + 120LL))(v11, v30, v26 == 1, v27 == 1, v28, v52);
  LABEL_74:
    snd_Fade_Destroy_Fade_alt2(v52);
    if (v10 != nullptr && *v10 != 0) {
      GameRoutine_60a020_alt2((__int64)(v11 + 338), (const char*)v10);
      snd_Fade_Fade_10c830_alt2((__int64)v52, 0x0.0p+0f);
      GameHr_a2e6f0((__int64)v11, v10, v26 == 1, v27 == 1, v28, (__int64)v52);
      snd_Fade_Destroy_Fade_alt2(v52);
    }
    v40 = snd_fnd_WeakHandle_isValid_alt1(v11 + 43);
    if (a3 != nullptr && (v40 & 1) == 0 && *a3 != 0) {
      GameRoutine_60a020_alt2((__int64)(v11 + 338), (const char*)a3);
      snd_Fade_Fade_10c830_alt2((__int64)v52, 0x0.0p+0f);
      GameHr_a2e6f0((__int64)v11, a3, v26 == 1, v27 == 1, v28, (__int64)v52);
      snd_Fade_Destroy_Fade_alt2(v52);
    }
    if ((snd_fnd_WeakHandle_isValid_alt1(v11 + 43) & 1) == 0) {
      if ((v11[345] & 1) != 0) {
        v41 = (const char*)v11[347];
      }
      else {
        v41 = (char*)v11 + 2761;
      }
      if ((v11[341] & 1) != 0) {
        v42 = (const char*)v11[343];
      }
      else {
        v42 = (char*)v11 + 2729;
      }
      snd_Fade_Fade_10c830_alt2((__int64)v51, 0x0.0p+0f);
      snprintf_alt1((__int64)v52, 0x100u, "%s_%s", v41, v42);
      v53 = (unsigned int)snd_fnd_calcCrc32_alt1((unsigned __int8*)v52, 0);
      if (snd_data_findFieldData_alt1((int*)&v53) != nullptr) {
        v43 = (unsigned __int8*)v52;
      }
      else {
        v43 = (unsigned __int8*)v41;
      }
      GameHr_a2e6f0((__int64)v11, v43, v26 == 1, v27 == 1, v28, (__int64)v51);
      snd_Fade_Destroy_Fade_alt2(v51);
    }
    if ((snd_fnd_WeakHandle_isValid_alt1(v11 + 43) & 1) == 0) {
      if ((v11[345] & 1) != 0) {
        v44 = (const char*)v11[347];
      }
      else {
        v44 = (char*)v11 + 2761;
      }
      if ((v11[341] & 1) != 0) {
        v45 = (const char*)v11[343];
      }
      else {
        v45 = (char*)v11 + 2729;
      }
      snd_Fade_Fade_10c830_alt2((__int64)v51, 0x0.0p+0f);
      snprintf_alt1((__int64)v52, 0x100u, "%s_%s", v44, v45);
      v53 = (unsigned int)snd_fnd_calcCrc32_alt1((unsigned __int8*)v52, 0);
      if (snd_data_findFieldData_alt1((int*)&v53) != nullptr) {
        v46 = (unsigned __int8*)v52;
      }
      else {
        v46 = (unsigned __int8*)v44;
      }
      GameManager_a32960((__int64)v11, v46, v26 == 1, v27 == 1, v28,
                         (__int64)v51);
      snd_Fade_Destroy_Fade_alt2(v51);
    }
    snd_findSlot_100a50_alt1((void*)(v52), &GameData_21fa944);
    result = snd_fnd_WeakHandle_get_alt1((__int64)v52);
    if (result != 0) {
      v47 = result;
      v48 = snd_getDefineValue("SetVolume_ENV_PuppetDemo");
      v49 = *(float*)&v48 / 0x1.9000000000000p+6f;
      snd_Fade_Fade_10c830_alt2((__int64)v52, 0x1.f400000000000p+8f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v47 - 5552) + 96LL))(
          v47 - 5552, v52, v49);
      result = snd_Fade_Destroy_Fade_alt2(v52);
    }
    *((_BYTE*)v11 + 3076) = 0;
    *((_DWORD*)v11 + 688) = 5;
    ++*((_DWORD*)v11 + 159);
    return result;
  }
LABEL_59:
  v50 = a3;
  v32 = v26;
  v33 = v27 == 1;
  v34 = v26 == 1;
  if ((v11[345] & 1) != 0) {
    v35 = (const char*)v11[347];
  }
  else {
    v35 = (char*)v11 + 2761;
  }
  if ((v11[341] & 1) != 0) {
    v36 = (const char*)v11[343];
  }
  else {
    v36 = (char*)v11 + 2729;
  }
  snd_Fade_Fade_10c830_alt2((__int64)v52, 0x0.0p+0f);
  GameManager_a2c3b0((__int64)v11, v35, v36, v34, v33, v28, (__int64)v52);
  snd_Fade_Destroy_Fade_alt2(v52);
  if ((v11[345] & 1) != 0) {
    v37 = (char*)v11[347];
  }
  else {
    v37 = (char*)v11 + 2761;
  }
  if ((v11[341] & 1) != 0) {
    v38 = (const char*)v11[343];
  }
  else {
    v38 = (char*)v11 + 2729;
  }
  snd_Fade_Fade_10c830_alt2((__int64)v52, 0x0.0p+0f);
  v39 = v38;
  v26 = v32;
  a3 = v50;
  GameManager_a2c4f0(v11, v37, v39, v34, v33, v28, (__int64)v52);
  goto LABEL_74;
}

__int64* GameManager_a223a0(__int64 a1)
{
  __int64* result;
  __int64 v3;
  unsigned __int8 explicit;
  __int64* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;

  result = (__int64*)snd_fnd_WeakHandle_get(a1);
  if (result != nullptr) {
    v3 = snd_fnd_WeakHandle_get(a1);
    result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v3 - 5592) + 64LL))(
        v3 - 5592);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212e298,
                                    memory_order_acquire);
    v5 = GameData_212e290;
    if ((explicit & 1) == 0) {
      v12 = result;
      v8 = __cxa_guard_acquire(GameData_212e298);
      v5 = GameData_212e290;
      result = v12;
      if (v8 != 0) {
        *GameData_212e290 = snd_Voice_registry(v12);
        __cxa_guard_release(GameData_212e298, v9, v10, v11);
        v5 = GameData_212e290;
        result = v12;
      }
    }
    if (result == v5) {
      goto LABEL_10;
    }
    do {
      result = (__int64*)*result;
    } while (result != v5 && result != nullptr);
    if (result != nullptr) {
    LABEL_10:
      v7 = snd_fnd_WeakHandle_get(a1);
      if (v7 != 0) {
        return (__int64*)(v7 - 5592);
      }
      else {
        return nullptr;
      }
    }
  }
  return result;
}

__int64 snd_GameManager_UpdateListenerPos(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float32x4_t* v4;
  __int64 v5;
  int v6;
  float v7;
  double v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  int v13;
  __int64 v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  unsigned int v27;
  __int64 v28;
  float32x4_t* v29;
  float32x4_t* v30;
  float32x4_t v31;
  float v32;
  float v33;
  float v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  float v38;
  int8x16_t v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  float32x4_t* v49;
  float32x4_t v50;
  __int64 (***v51)();
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  __int64 v57;
  __int64 (***v58)();
  __int64 v59;
  unsigned __int64 v60;
  float32x4_t v61;
  __int64 v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  struct {
    __int64 (**v69)();
    int v70;
    char gap108_[20];
    __int64 (***v71)();
  } v69_;

  if (*(_BYTE*)(result + 48) == 1) {
    v1 = result;
    snd_getListener();
    if ((*(_BYTE*)(snd_fnd_WeakHandle_get_alt1((__int64)&v69_.v69) + 161) &
         1) != 0) {
      return GameRoutine_e7ef0(v1);
    }
    if (GameData_21c6978 == 0) {
      return GameRoutine_e7ef0(v1);
    }
    v2 = *(_QWORD*)(GameData_21c6978 + 32);
    if (*(_QWORD*)(GameData_21c6978 + 24) == v2) {
      return GameRoutine_e7ef0(v1);
    }
    v3 = *(_QWORD*)(v2 - 8);
    if (v3 == 0) {
      return GameRoutine_e7ef0(v1);
    }
    v4 = *(float32x4_t**)(v3 + 24);
    v5 = *(_QWORD*)(v3 + 32);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    if (v4 == nullptr) {
      return GameRoutine_e7ef0(v1);
    }
    v6 = *(_DWORD*)(v1 + 2820);
    if (LANES128(v4[5]).n128_f32[2] >= 0x1.6800000000000p+6f) {
      v7 = LANES128(v4[5]).n128_f32[1] + 0x1.6800000000000p+7f;
    }
    else {
      v7 = LANES128(v4[5]).n128_f32[1];
    }
    v66 = COERCE_FLOAT32X4_T(((long double (*)(float32x4_t*)) *
                              (_QWORD*)(LANES128(*(v4)).n128_u64[0] + 40))(v4));
    v8 = snd_getDefineValue("ListenerOffsetLength");
    v69_.v70 = LODWORD(v8);
    v69_.v69 = GameData_1fbe5f0;
    v69_.v71 = &v69_.v69;
    if (v6 == 1) {
      if (*(_DWORD*)(v1 + 2752) == 6) {
        v12 = v66;
        if (*(_BYTE*)(v1 + 2516) == 1) {
          LANES128(v12).n128_u64[0] = *(_QWORD*)(v1 + 2528);
          *(_BYTE*)(v1 + 2516) = 0;
          LANES128(v12).n128_u32[2] = *(_DWORD*)(v1 + 2536);
        }
      }
      else {
        v12 = v66;
      }
      goto LABEL_66;
    }
    v9 = v4[2];
    v13 = *(_DWORD*)(v1 + 2752);
    v68 = v9;
    if (v13 != 4) {
      v12 = v66;
      if (v13 == 3) {
        if (*(_BYTE*)(v1 + 2516) != 1) {
          v29 = *(float32x4_t**)(v1 + 3168);
          v30 = *(float32x4_t**)(v1 + 3176);
          v63 = *(float32x4_t*)GameData_212c540;
          if (v29 != v30) {
            v31 = vsubq_f32(v9, v66);
            v32 = 0x1.0000000000000p+20f;
            v33 = LANES128(v31).n128_f32[2];
            v64 = vmulq_f32(v31, v31);
            v65 = LANES128(v31).n128_f32[0];
            v34 = vmuls_lane_f32(LANES128(v31).n128_f32[2], v31, 2);
            do {
              if ((LANES128(v29[1]).n128_u8[0] & 3) == 0) {
                v35 = vsubq_f32(*v29, v12);
                if (acosf(
                        sqrtf(v34 + vmuls_lane_f32(LANES128(v35).n128_f32[2],
                                                   v35, 2)) *
                        (float)((float)(vmuls_lane_f32(
                                            LANES128(v35).n128_f32[0], v35, 2) +
                                        (float)(v65 * v33)) /
                                sqrtf(LANES128_OF(
                                          vaddq_f32(v64, vmulq_f32(v35, v35)))
                                          .n128_f32[0]))) <
                    0x1.99999a0000000p-2f) {
                  v12 = v66;
                }
                else {
                  v12 = v66;
                  v36 = vsubq_f32(v66, *v29);
                  v37 = vmulq_f32(v36, v36);
                  LANES128(v37).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v37, v37, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v37).n128_u64[0])))
                          .n64_u64[0];
                  v38 = LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v37).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v37).n128_u64[0])))
                            .n64_f32[0];
                  if (v38 <= v32) {
                    v32 = v38;
                    v63 = *v29;
                  }
                }
              }
              v29 += 2;
            } while (v29 != v30);
          }
          v10 = v63;
          v39 = vmulq_f32(v10, v10);
          v9 = vextq_s8(v39, v39, 8u);
          LANES128(v39).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
                  .n64_f32[0] == 0x0.0p+0f) {
            goto LABEL_62;
          }
          LANES128(v68).n128_u64[0] = LANES128(v63).n128_u64[0];
          LANES128(v25).n128_u64[0] = LANES128(v63).n128_u64[0];
          LANES128(v25).n128_u64[1] = LANES128(v63).n128_u32[2];
          goto LABEL_42;
        }
      }
      else {
        if (v13 != 2) {
          goto LABEL_62;
        }
        if (*(_BYTE*)(v1 + 2516) != 1) {
          if (GameData_21d96b8 == 0 ||
              (v14 = *(_QWORD*)(GameData_220b6f0 + 56)) == 0) {
          LABEL_62:
            if (v6 == 3) {
              v56 = vaddq_f32(v12, v68);
              LANES128(v12).n128_f32[0] =
                  0x1.0000000000000p-1f * LANES128(v56).n128_f32[0];
              LANES128(v12).n128_u32[1] = vmuls_lane_f32(
                  0x1.0000000000000p-1f,
                  COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]), 1);
              LANES128(v12).n128_u32[2] =
                  vmuls_lane_f32(0x1.0000000000000p-1f, v56, 2);
            }
            else if (v6 == 2) {
              v12 = v68;
            }
          LABEL_66:
            if (*(int*)(v1 + 616) > 0 || *(int*)(v1 + 620) > 0 ||
                *(int*)(v1 + 624) > 0 || *(int*)(v1 + 628) > 0 ||
                *(int*)(v1 + 632) > 0 || *(int*)(v1 + 636) > 0 ||
                *(int*)(v1 + 640) > 0 ||
                *(float*)(v1 + 592) < 0x1.0000000000000p+0f) {
              v57 = *(_QWORD*)v1;
              LANES128(v9).n128_u32[0] = LANES128(v12).n128_u32[1];
              PSEUDO_LOW_LANE128(v10, n128_u32, LANES128(v12).n128_u32[2]);
            }
            else {
              v57 = *(_QWORD*)v1;
              PSEUDO_LOW_LANE128(v10, n128_u32, LANES128(v12).n128_u32[2]);
              LANES128(v9).n128_u32[0] = -943501312;
            }
            PSEUDO_LOW_LANE128(v11, n128_f32, -v7);
            (*(void (**)(__int64, float, long double, long double,
                         long double))(v57 + 96))(
                v1, LANES128(v12).n128_f32[0], *(long double*)&v9,
                *(long double*)&v10, *(long double*)&v11);
            v58 = v69_.v71;
            *(_QWORD*)(v1 + 3176) = *(_QWORD*)(v1 + 3168);
            if (v58 == &v69_.v69) {
              v59 = 4;
            }
            else {
              if (v58 == nullptr) {
                return GameRoutine_e7ef0(v1);
              }
              v59 = 5;
            }
            ((__int64 (*)(__int64))(*v58)[v59])((__int64)v58);
            return GameRoutine_e7ef0(v1);
          }
          v15 = *(float32x4_t**)(*(_QWORD*)(v14 + 8) + 240LL);
          if (v15 != nullptr) {
            v16 = v15[3];
          }
          else {
            LODWORD(v54) = 0;
            *((float*)&v54 + 1) = *(float*)(v14 + 544) * 0x1.99999a0000000p-1f;
            v16 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v14 + 16) + 560LL),
                            COERCE_AS(float32x4_t, v54));
          }
          LANES128(v55).n128_u64[0] = LANES128(v16).n128_u64[0];
          LANES128(v55).n128_u64[1] = LANES128(v16).n128_u32[2];
          v67 = v66;
          v68 = v55;
          snd_GameManager_UpdateListenerPos_lambda0_Invoke((__int64)&v69_.v69,
                                                           &v68, &v67);
        LABEL_61:
          v12 = v66;
          goto LABEL_62;
        }
      }
      LANES128(v9).n128_u64[0] = *(_QWORD*)(v1 + 2528);
      *(_BYTE*)(v1 + 2516) = 0;
      LANES128(v68).n128_u64[0] = LANES128(v9).n128_u64[0];
      LANES128(v9).n128_u64[1] = *(unsigned int*)(v1 + 2536);
      v17 = vsubq_f32(v9, v66);
      v18 = vmulq_f32(v17, v17);
      LANES128(v18).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_u64[0];
      v19 = LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]))))
                .n64_f32[0];
      if (*(float*)&v8 > v19) {
        *(float*)&v8 = v19;
      }
      v20 = vsubq_f32(v66, v9);
      v21 = vmulq_f32(v20, v20);
      LANES128(v21).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
              .n64_u64[0];
      LANES128(v21).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
              .n64_u64[0];
      LANES128(v21).n128_u64[1] = LANES128(v21).n128_u64[0];
      v22 = vrsqrteq_f32(v21);
      v23 = vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v21, v22)));
      v24 = vmulq_f32(v21, v23);
      v11 = vceqzq_f32(v21);
      v10 =
          vbicq_s8(vmulq_f32(v20, vmulq_f32(v23, vrsqrtsq_f32(v23, v24))), v11);
      v25 = vaddq_f32(v9, vmulq_n_f32(v10, *(float*)&v8));
    LABEL_42:
      v68 = v25;
      goto LABEL_62;
    }
    v12 = v66;
    if (*(_BYTE*)(v1 + 2516) == 1) {
      LANES128(v26).n128_u64[0] = *(_QWORD*)(v1 + 2528);
      *(_BYTE*)(v1 + 2516) = 0;
      v27 = *(_DWORD*)(v1 + 2536);
      LANES128(v68).n128_u64[0] = LANES128(v26).n128_u64[0];
      v28 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 32);
      *(_QWORD*)(v28 + 400) = LANES128(v26).n128_u64[0];
      LANES128(v26).n128_u64[1] = v27;
      *(_DWORD*)(v28 + 408) = v27;
      v68 = v26;
      goto LABEL_62;
    }
    v40 = GameData_21ec7c0;
    if (GameData_21ec7c0 != 0) {
      v41 = *(_QWORD*)(GameData_21ec7c0 + 80);
      if (v41 != 0) {
        v42 = *(_QWORD*)(GameData_21ec7c0 + 72);
        v43 = *(_QWORD*)(GameData_21ec7c0 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                  memory_order_relaxed);
        v44 = std___1___shared_weak_count_lock(v43);
        if (v44 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v45 = v44;
            (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
            std___1___shared_weak_count___release_weak(v45);
          }
          std___1___shared_weak_count___release_weak(v41);
          v12 = v66;
          if (v42 != 0) {
            v47 = *(_QWORD*)(v40 + 72);
            v46 = *(_QWORD*)(v40 + 80);
            if (v46 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16), 1u,
                                        memory_order_relaxed);
            }
            LANES128(v67).n128_u64[0] = v47;
            LANES128(v67).n128_u64[1] = std___1___shared_weak_count_lock(v46);
            v48 = *(_QWORD*)(v47 + 24);
            GameRoutine_a32b10((__int64)&v67);
            std___1___shared_weak_count___release_weak(v46);
            v12 = v66;
            if (v48 == 0) {
              goto LABEL_62;
            }
            v49 = *(float32x4_t**)(*(_QWORD*)(v48 + 8) + 240LL);
            if (v49 != nullptr) {
              v50 = v49[3];
            }
            else {
              LODWORD(v60) = 0;
              *((float*)&v60 + 1) =
                  *(float*)(v48 + 544) * 0x1.99999a0000000p-1f;
              v50 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v48 + 16) + 560LL),
                              COERCE_AS(float32x4_t, v60));
            }
            LANES128(v68).n128_u64[0] = LANES128(v50).n128_u64[0];
            LANES128(v61).n128_u64[0] = LANES128(v50).n128_u64[0];
            v51 = v69_.v71;
            v62 = *(_QWORD*)(game_sound_g_game_sound + 32);
            *(_QWORD*)(v62 + 400) = LANES128(v50).n128_u64[0];
            LANES128(v61).n128_u64[1] = LANES128(v50).n128_u32[2];
            *(_DWORD*)(v62 + 408) = LANES128(v50).n128_u32[2];
            v67 = v66;
            v68 = v61;
            if (v51 == nullptr) {
            LABEL_85:
              GameRoutine_60a310_alt1();
            }
          LABEL_58:
            ((void (*)(__int64 (***)(void), float32x4_t*, float32x4_t*))(
                *v51)[6])(v51, &v68, &v67);
            goto LABEL_61;
          }
        }
        else {
          std___1___shared_weak_count___release_weak(v41);
          v12 = v66;
        }
      }
      LANES128(v9).n128_u32[0] = LANES128(v68).n128_u32[0];
      v51 = v69_.v71;
      v52 = *(__int64*)((char*)LANES128(v68).n128_i64 + 4);
    }
    else {
      v51 = &v69_.v69;
      v52 = *(__int64*)((char*)LANES128(v9).n128_i64 + 4);
    }
    v67 = v12;
    v53 = *(_QWORD*)(game_sound_g_game_sound + 32);
    *(_DWORD*)(v53 + 400) = LANES128(v9).n128_u32[0];
    *(_QWORD*)(v53 + 404) = v52;
    if (v51 == nullptr) {
      goto LABEL_85;
    }
    goto LABEL_58;
  }
  return result;
}

float GameManager_getMasterScale()
{
  return *(float*)(as_g_base_frame_counter + 104);
}

void GameManager_stopField(__int64 a1)
{
  __int64 v2;

  snd_Env_stop_df9a0(*(_QWORD*)(a1 + 32), "field");
  v2 = snd_Wind_stop_e4920(*(_QWORD*)(a1 + 16), "field");
  *(_BYTE*)(a1 + 306) = 0;
  GameManager_a22bd0(v2);
  *(_BYTE*)(a1 + 612) = 0;
  *(float*)(a1 + 520) = snd_getFadeTime("FadeTime_SE_ViewChange_Out");
}

__int64 GameManager_a22bd0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[25];

  *(struct PseudoSret*)(v6) = snd_findSlot_100a50(&GameData_21fa938);
  v0 = snd_fnd_WeakHandle_get(v6);
  if (v0 != 0) {
    v1 = v0;
    snd_Fade_Fade_10c830(v6, 0.0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v1 - 5552) + 96LL))(
        v1 - 5552, v6, 1.0f);
    snd_Fade_Destroy_Fade(v6);
  }
  *(struct PseudoSret*)(v6) = snd_findSlot_100a50(&GameData_21fa93c);
  v2 = snd_fnd_WeakHandle_get(v6);
  if (v2 != 0) {
    v3 = v2;
    snd_Fade_Fade_10c830(v6, 0.0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v3 - 5552) + 96LL))(
        v3 - 5552, v6, 1.0f);
    snd_Fade_Destroy_Fade(v6);
  }
  *(struct PseudoSret*)(v6) = snd_findSlot_100a50(&GameData_21fa940);
  result = snd_fnd_WeakHandle_get(v6);
  if (result != 0) {
    v5 = result;
    snd_Fade_Fade_10c830(v6, 0.0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v5 - 5552) + 96LL))(
        v5 - 5552, v6, 1.0f);
    return snd_Fade_Destroy_Fade(v6);
  }
  return result;
}

__int64 GameManager_reset(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _BYTE* v5;
  __n128 v6;
  double v7;
  double v8;
  _BYTE v10[200];

  (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  snd_Env_reset(*(_QWORD*)(a1 + 32));
  v2 = snd_Wind_reset(*(_QWORD*)(a1 + 16));
  v3 = snd_resetBusVolume(v2);
  snd_resetBuses(v3);
  v4 = *(_BYTE*)(a1 + 3136);
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_BYTE*)(a1 + 208) = 1;
  if ((v4 & 1) != 0) {
    v5 = *(_BYTE**)(a1 + 3152);
    *(_QWORD*)(a1 + 3144) = 0;
  }
  else {
    v5 = (_BYTE*)(a1 + 3137);
    *(_BYTE*)(a1 + 3136) = 0;
  }
  *v5 = 0;
  v6 = GameRoutine_e8120(a1);
  ((uint32_t*)&v6)[0] = 1140457472;
  snd_Fade_Fade_10c830(v10, ((double*)&v6)[0]);
  snd_startMasterVolume(v10, 1.0);
  snd_Fade_Destroy_Fade(v10);
  LODWORD(v7) = 1140457472;
  snd_Fade_Fade_10c830(v10, v7);
  snd_startBgmVolume(v10, 0.0);
  snd_Fade_Destroy_Fade(v10);
  LODWORD(v8) = 1140457472;
  snd_Fade_Fade_10c830(v10, v8);
  snd_startSeVolume(v10, 0.0);
  snd_Fade_Destroy_Fade(v10);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 184LL))(a1);
}

__int64 GameManager_stopWithoutBGM(__int64 a1, __int64 a2)
{
  _BYTE* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  _QWORD v13[2];
  _BYTE v14[200];

  snd_Env_stop_dde60(*(_QWORD*)(a1 + 32));
  snd_Wind_stop_e4440(*(_QWORD*)(a1 + 16), a2);
  snd_FF_stop(*(_QWORD*)(a1 + 24), a2);
  if ((*(_BYTE*)(a1 + 3136) & 1) != 0) {
    v4 = *(_BYTE**)(a1 + 3152);
    *(_QWORD*)(a1 + 3144) = 0;
  }
  else {
    v4 = (_BYTE*)(a1 + 3137);
    *(_BYTE*)(a1 + 3136) = 0;
  }
  *v4 = 0;
  v5 = snd_stopBuses(a2, 11, 0.0);
  v6 = snd_getUnknown10(v5);
  snd_Fade_Fade_10cd70(v14, a2);
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  *(_QWORD*)v7 = GameData_1fbdec0;
  snd_Fade_Fade_10cd70(v7 + 8, v14);
  v8 = **(_QWORD**)(v6 + 24);
  if (v8 != 0) {
    do {
      v9 = *(_QWORD*)(v8 + 5616);
      v13[0] = v8;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 48LL))(v7, v13);
      v8 = v9;
    } while (v9 != 0);
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 40LL))(v7);
  snd_Fade_Destroy_Fade(v14);
  *(struct PseudoSret*)(v13) = snd_findSlot_100a50(&GameData_21fa938);
  v10 = snd_fnd_WeakHandle_get(v13);
  if (v10 != 0) {
    (*(void (**)(__int64, __int64, double))(*(_QWORD*)(v10 - 5552) + 96LL))(
        v10 - 5552, a2, 0.0);
  }
  if ((*(_BYTE*)(a1 + 612) & 1) == 0) {
    *(struct PseudoSret*)(v13) = snd_findSlot_100a50(&GameData_21fa93c);
    v11 = snd_fnd_WeakHandle_get(v13);
    if (v11 != 0) {
      (*(void (**)(__int64, __int64, double))(*(_QWORD*)(v11 - 5552) + 96LL))(
          v11 - 5552, a2, 0.0);
    }
  }
  *(struct PseudoSret*)(v13) = snd_findSlot_100a50(&GameData_21fa940);
  result = snd_fnd_WeakHandle_get(v13);
  if (result != 0) {
    return (*(__int64 (**)(__int64, __int64, double))(
        *(_QWORD*)(result - 5552) + 96LL))(result - 5552, a2, 0.0);
  }
  return result;
}

__int64 GameManager_a22fd0(__int64 result, __int64 a2)
{
  unsigned __int64 v2;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  int* v35;
  __int64 v36;
  char v37;
  __int64 v38;
  char v39;
  __int64 v40;
  char v41;
  __int64 v42;
  char v43;
  unsigned __int64 v44;
  bool v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  bool v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  bool v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  bool v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  bool v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  bool v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  bool v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  bool v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  bool v126;
  unsigned __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  unsigned __int64 v134;
  bool v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned __int64 v143;
  bool v144;
  unsigned __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  bool v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  bool v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  bool v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  bool v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  bool v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  unsigned __int64 v197;
  bool v198;
  unsigned __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  unsigned __int64 v206;
  bool v207;
  unsigned __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  bool v216;
  unsigned __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  bool v225;
  unsigned __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  unsigned __int64 v233;
  bool v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  unsigned __int64 v242;
  bool v243;
  unsigned __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  unsigned __int64 v251;
  bool v252;
  unsigned __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  unsigned __int64 v260;
  bool v261;
  unsigned __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  unsigned __int64 v269;
  bool v270;
  unsigned __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  __int64 v277;
  unsigned __int64 v278;
  bool v279;
  unsigned __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  bool v288;
  unsigned __int64 v289;
  __int64 v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  unsigned __int64 v296;
  bool v297;
  unsigned __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  unsigned __int64 v305;
  bool v306;
  unsigned __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  unsigned __int64 v314;
  bool v315;
  unsigned __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  unsigned __int64 v323;
  bool v324;
  unsigned __int64 v325;
  __int64 v326;
  int v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  int v331;
  __int64 v332;
  __int64 v333;
  char v334;
  unsigned __int64 v335;
  bool v336;
  unsigned __int64 v337;
  __int64 v338;
  int v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  int v343;
  __int64 v344;
  __int64 v345;
  char v346;
  unsigned __int64 v347;
  bool v348;
  unsigned __int64 v349;
  __int64 v350;
  int v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  int v355;
  __int64 v356;
  __int64 v357;
  char v358;
  unsigned __int64 v359;
  bool v360;
  unsigned __int64 v361;
  __int64 v362;
  int v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  int v367;
  __int64 v368;
  __int64 v369;
  char v370;
  unsigned __int64 v371;
  bool v372;
  unsigned __int64 v373;
  __int64 v374;
  int v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  int v379;
  __int64 v380;
  __int64 v381;
  char v382;
  unsigned __int64 v383;
  bool v384;
  unsigned __int64 v385;
  __int64 v386;
  int v387;
  __int64 v388;
  __int64 v389;
  __int64 v390;
  int v391;
  __int64 v392;
  __int64 v393;
  char v394;
  unsigned __int64 v395;
  bool v396;
  unsigned __int64 v397;
  __int64 v398;
  int v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  int v403;
  __int64 v404;
  __int64 v405;
  char v406;
  unsigned __int64 v407;
  bool v408;
  unsigned __int64 v409;
  __int64 v410;
  int v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  int v415;
  __int64 v416;
  __int64 v417;
  char v418;
  unsigned __int64 v419;
  bool v420;
  unsigned __int64 v421;
  __int64 v422;
  int v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  int v427;
  __int64 v428;
  __int64 v429;
  char v430;
  unsigned __int64 v431;
  bool v432;
  unsigned __int64 v433;
  __int64 v434;
  int v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  int v439;
  __int64 v440;
  __int64 v441;
  char v442;
  unsigned __int64 v443;
  bool v444;
  unsigned __int64 v445;
  __int64 v446;
  int v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  int v451;
  __int64 v452;
  __int64 v453;
  char v454;
  unsigned __int64 v455;
  bool v456;
  unsigned __int64 v457;
  __int64 v458;
  int v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  int v463;
  __int64 v464;
  __int64 v465;
  char v466;
  unsigned __int64 v467;
  bool v468;
  unsigned __int64 v469;
  __int64 v470;
  int v471;
  __int64 v472;
  __int64 v473;
  __int64 v474;
  int v475;
  __int64 v476;
  __int64 v477;
  char v478;
  unsigned __int64 v479;
  bool v480;
  unsigned __int64 v481;
  __int64 v482;
  int v483;
  __int64 v484;
  __int64 v485;
  __int64 v486;
  int v487;
  __int64 v488;
  __int64 v489;
  char v490;
  unsigned __int64 v491;
  bool v492;
  unsigned __int64 v493;
  __int64 v494;
  int v495;
  __int64 v496;
  __int64 v497;
  __int64 v498;
  int v499;
  __int64 v500;
  __int64 v501;
  char v502;
  unsigned __int64 v503;
  bool v504;
  unsigned __int64 v505;
  __int64 v506;
  int v507;
  __int64 v508;
  __int64 v509;
  __int64 v510;
  int v511;
  __int64 v512;
  __int64 v513;
  char v514;
  unsigned __int64 v515;
  bool v516;
  unsigned __int64 v517;
  __int64 v518;
  int v519;
  __int64 v520;
  __int64 v521;
  __int64 v522;
  int v523;
  __int64 v524;
  __int64 v525;
  char v526;
  __int64 v527;
  char v528;
  __int64 v529;
  char v530;
  __int64 v531;
  char v532;
  __int64 v533;
  char v534;
  __int64 v535;
  char v536;
  __int64 v537;
  char v538;
  __int64 v539;
  char v540;
  __int64 v541;
  char v542;
  __int64 v543;
  char v544;
  __int64 v545;
  char v546;
  __int64 v547;
  char v548;
  __int64 v549;
  char v550;
  __int64 v551;
  char v552;
  __int64 v553;
  char v554;
  __int64 v555;
  char v556;
  __int64 v557;
  char v558;
  __int64 v559;
  char v560;
  __int64 v561;
  char v562;
  __int64 v563;
  char v564;
  __int64 v565;
  char v566;
  __int64 v567;
  char v568;
  __int64 v569;
  char v570;
  __int64 v571;
  char v572;
  __int64 v573;
  char v574;
  __int64 v575;
  char v576;
  __int64 v577;
  char v578;
  __int64 v579;
  char v580;
  __int64 v581;
  char v582;
  __int64 v583;
  char v584;
  __int64 v585;
  char v586;
  __int64 v587;
  char v588;
  __int64 v589;
  char v590;
  __int64 v591;
  char v592;
  __int64 v593;
  char v594;
  __int64 v595;
  char v596;
  __int64 v597;
  char v598;
  __int64 v599;
  char v600;
  __int64 v601;
  char v602;
  __int64 v603;
  char v604;
  __int64 v605;
  char v606;
  __int64 v607;
  char v608;
  __int64 v609;
  char v610;
  __int64 v611;
  char v612;
  __int64 v613;
  char v614;
  __int64 v615;
  char v616;
  __int64 v617;
  char v618;
  unsigned __int64 v619;
  bool v620;
  unsigned __int64 v621;
  __int64 v622;
  __int64 v623;
  __int64 v624;
  __int64 v625;
  __int64 v626;
  __int64 v627;
  unsigned __int64 v628;
  bool v629;
  unsigned __int64 v630;
  __int64 v631;
  int v632;
  __int64 v633;
  __int64 v634;
  __int64 v635;
  int v636;
  __int64 v637;
  __int64 v638;
  char v639;
  __int64 v640;
  float v641;
  __int64 v642;
  __int64 v643;
  __int64 v644;
  __int64 v645;
  char v646;
  unsigned __int64 v647;
  bool v648;
  unsigned __int64 v649;
  __int64 v650;
  int v651;
  __int64 v652;
  __int64 v653;
  __int64 v654;
  int v655;
  __int64 v656;
  __int64 v657;
  char v658;
  __int64 v659;
  char v660;
  __int64 v661;
  char v662;
  unsigned __int64 v663;
  bool v664;
  unsigned __int64 v665;
  __int64 v666;
  int v667;
  __int64 v668;
  __int64 v669;
  __int64 v670;
  int v671;
  __int64 v672;
  __int64 v673;
  float v674;
  __int64 v675;
  __int64 v676;
  __int64 v677;
  __int64 v678;
  char v679;
  unsigned __int64 v680;
  bool v681;
  unsigned __int64 v682;
  __int64 v683;
  int v684;
  __int64 v685;
  __int64 v686;
  __int64 v687;
  int v688;
  __int64 v689;
  __int64 v690;
  char v691;
  __int64 v692;
  char v693;
  __int64 v694;
  char v695;
  unsigned __int64 v696;
  bool v697;
  unsigned __int64 v698;
  __int64 v699;
  int v700;
  __int64 v701;
  __int64 v702;
  __int64 v703;
  int v704;
  __int64 v705;
  __int64 v706;
  unsigned int v707;
  __int64 v708;
  __int64 v709;
  unsigned int v710;
  __int64 v711;
  __int64 v712;
  int v713;
  __int64 v714;
  __int64 v715;
  __int64 v716;
  __int64 v717;
  int v718;
  __int64 v719;
  __int64 v720;
  __int64 v721;
  __int64 v722;
  int v723;
  __int64 v724;
  __int64 v725;
  __int64 v726;
  __int64 v727;
  int v728;
  __int64 v729;
  __int64 v730;
  __int64 v731;
  __int64 v732;
  int v733;
  __int64 v734;
  __int64 v735;
  __int64 v736;
  __int64 v737;
  int v738;
  __int64 v739;
  __int64 v740;
  __int64 v741;
  __int64 v742;
  int v743;
  __int64 v744;
  __int64 v745;
  __int64 v746;

  v2 = *(unsigned __int8*)(result + 2824);
  v4 = result;
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  if (v5) {
    v7 = result + 2825;
  }
  else {
    v7 = *(_QWORD*)(result + 2840);
  }
  if (!v5) {
    LODWORD(v6) = *(_DWORD*)(result + 2832);
  }
  if ((_DWORD)v6 != 0) {
    v8 = *(int*)(a2 + 20);
    v9 = (unsigned int)(v6 + 1);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v6 + 1;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v9);
    if ((v6 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20), v7, v9);
      *(_DWORD*)(a2 + 20) += v9;
    }
  }
  else {
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = 0;
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = 0;
  }
  v13 = *(unsigned __int8*)(v4 + 2456);
  v14 = (v13 & 1) == 0;
  v15 = v13 >> 1;
  if (v14) {
    v16 = v4 + 2457;
  }
  else {
    v16 = *(_QWORD*)(v4 + 2472);
  }
  if (!v14) {
    LODWORD(v15) = *(_DWORD*)(v4 + 2464);
  }
  if ((_DWORD)v15 != 0) {
    v17 = *(int*)(a2 + 20);
    v18 = (unsigned int)(v15 + 1);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v15 + 1;
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE1(v18);
    if ((v15 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20), v16, v18);
      *(_DWORD*)(a2 + 20) += v18;
    }
  }
  else {
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = 0;
    v21 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = 0;
  }
  v22 = *(unsigned __int8*)(v4 + 2760);
  v23 = (v22 & 1) == 0;
  v24 = v22 >> 1;
  if (v23) {
    v25 = v4 + 2761;
  }
  else {
    v25 = *(_QWORD*)(v4 + 2776);
  }
  if (!v23) {
    LODWORD(v24) = *(_DWORD*)(v4 + 2768);
  }
  if ((_DWORD)v24 != 0) {
    v26 = *(int*)(a2 + 20);
    v27 = (unsigned int)(v24 + 1);
    *(_DWORD*)(a2 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = v24 + 1;
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE1(v27);
    if ((v24 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20), v25, v27);
      *(_DWORD*)(a2 + 20) += v27;
    }
  }
  else {
    v29 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = 0;
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = 0;
  }
  v32 = *(_QWORD*)(a2 + 8);
  v31 = a2 + 8;
  v33 = *(_DWORD*)(v4 + 2812);
  v35 = (int*)(v31 + 12);
  v34 = *(int*)(v31 + 12);
  *(_DWORD*)(v31 + 12) = v34 + 1;
  *(_BYTE*)(v32 + v34) = v33;
  v36 = *(int*)(v31 + 12);
  v37 = *(_DWORD*)(v4 + 2808);
  *(_DWORD*)(v31 + 12) = v36 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v36) = v37;
  v38 = *(int*)(v31 + 12);
  v39 = *(_BYTE*)(v4 + 2848);
  *(_DWORD*)(v31 + 12) = v38 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v38) = v39;
  v40 = *(int*)(v31 + 12);
  v41 = *(_DWORD*)(v4 + 2180);
  *(_DWORD*)(v31 + 12) = v40 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v40) = v41;
  v42 = *(int*)(v31 + 12);
  v43 = *(_DWORD*)(v4 + 2184);
  *(_DWORD*)(v31 + 12) = v42 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v42) = v43;
  v44 = *(unsigned __int8*)(v4 + 712);
  v45 = (v44 & 1) == 0;
  v46 = v44 >> 1;
  if (v45) {
    v47 = v4 + 713;
  }
  else {
    v47 = *(_QWORD*)(v4 + 728);
  }
  if (!v45) {
    LODWORD(v46) = *(_DWORD*)(v4 + 720);
  }
  if ((_DWORD)v46 != 0) {
    v48 = *v35;
    v49 = (unsigned int)(v46 + 1);
    *v35 = v48 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v48) = v46 + 1;
    v50 = *v35;
    *v35 = v50 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v50) = BYTE1(v49);
    if ((v46 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v47, v49);
      *v35 += v49;
    }
  }
  else {
    v51 = *v35;
    *v35 = v51 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v51) = 0;
    v52 = *v35;
    *v35 = v52 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v52) = 0;
  }
  v53 = *(unsigned __int8*)(v4 + 736);
  v54 = (v53 & 1) == 0;
  v55 = v53 >> 1;
  if (v54) {
    v56 = v4 + 737;
  }
  else {
    v56 = *(_QWORD*)(v4 + 752);
  }
  if (!v54) {
    LODWORD(v55) = *(_DWORD*)(v4 + 744);
  }
  if ((_DWORD)v55 != 0) {
    v57 = *v35;
    v58 = (unsigned int)(v55 + 1);
    *v35 = v57 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v57) = v55 + 1;
    v59 = *v35;
    *v35 = v59 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v59) = BYTE1(v58);
    if ((v55 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v56, v58);
      *v35 += v58;
    }
  }
  else {
    v60 = *v35;
    *v35 = v60 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v60) = 0;
    v61 = *v35;
    *v35 = v61 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v61) = 0;
  }
  v62 = *(unsigned __int8*)(v4 + 760);
  v63 = (v62 & 1) == 0;
  v64 = v62 >> 1;
  if (v63) {
    v65 = v4 + 761;
  }
  else {
    v65 = *(_QWORD*)(v4 + 776);
  }
  if (!v63) {
    LODWORD(v64) = *(_DWORD*)(v4 + 768);
  }
  if ((_DWORD)v64 != 0) {
    v66 = *v35;
    v67 = (unsigned int)(v64 + 1);
    *v35 = v66 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v66) = v64 + 1;
    v68 = *v35;
    *v35 = v68 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v68) = BYTE1(v67);
    if ((v64 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v65, v67);
      *v35 += v67;
    }
  }
  else {
    v69 = *v35;
    *v35 = v69 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v69) = 0;
    v70 = *v35;
    *v35 = v70 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v70) = 0;
  }
  v71 = *(unsigned __int8*)(v4 + 784);
  v72 = (v71 & 1) == 0;
  v73 = v71 >> 1;
  if (v72) {
    v74 = v4 + 785;
  }
  else {
    v74 = *(_QWORD*)(v4 + 800);
  }
  if (!v72) {
    LODWORD(v73) = *(_DWORD*)(v4 + 792);
  }
  if ((_DWORD)v73 != 0) {
    v75 = *v35;
    v76 = (unsigned int)(v73 + 1);
    *v35 = v75 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v75) = v73 + 1;
    v77 = *v35;
    *v35 = v77 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v77) = BYTE1(v76);
    if ((v73 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v74, v76);
      *v35 += v76;
    }
  }
  else {
    v78 = *v35;
    *v35 = v78 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v78) = 0;
    v79 = *v35;
    *v35 = v79 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v79) = 0;
  }
  v80 = *(unsigned __int8*)(v4 + 808);
  v81 = (v80 & 1) == 0;
  v82 = v80 >> 1;
  if (v81) {
    v83 = v4 + 809;
  }
  else {
    v83 = *(_QWORD*)(v4 + 824);
  }
  if (!v81) {
    LODWORD(v82) = *(_DWORD*)(v4 + 816);
  }
  if ((_DWORD)v82 != 0) {
    v84 = *v35;
    v85 = (unsigned int)(v82 + 1);
    *v35 = v84 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v84) = v82 + 1;
    v86 = *v35;
    *v35 = v86 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v86) = BYTE1(v85);
    if ((v82 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v83, v85);
      *v35 += v85;
    }
  }
  else {
    v87 = *v35;
    *v35 = v87 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v87) = 0;
    v88 = *v35;
    *v35 = v88 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v88) = 0;
  }
  v89 = *(unsigned __int8*)(v4 + 832);
  v90 = (v89 & 1) == 0;
  v91 = v89 >> 1;
  if (v90) {
    v92 = v4 + 833;
  }
  else {
    v92 = *(_QWORD*)(v4 + 848);
  }
  if (!v90) {
    LODWORD(v91) = *(_DWORD*)(v4 + 840);
  }
  if ((_DWORD)v91 != 0) {
    v93 = *v35;
    v94 = (unsigned int)(v91 + 1);
    *v35 = v93 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v93) = v91 + 1;
    v95 = *v35;
    *v35 = v95 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v95) = BYTE1(v94);
    if ((v91 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v92, v94);
      *v35 += v94;
    }
  }
  else {
    v96 = *v35;
    *v35 = v96 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v96) = 0;
    v97 = *v35;
    *v35 = v97 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v97) = 0;
  }
  v98 = *(unsigned __int8*)(v4 + 856);
  v99 = (v98 & 1) == 0;
  v100 = v98 >> 1;
  if (v99) {
    v101 = v4 + 857;
  }
  else {
    v101 = *(_QWORD*)(v4 + 872);
  }
  if (!v99) {
    LODWORD(v100) = *(_DWORD*)(v4 + 864);
  }
  if ((_DWORD)v100 != 0) {
    v102 = *v35;
    v103 = (unsigned int)(v100 + 1);
    *v35 = v102 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v102) = v100 + 1;
    v104 = *v35;
    *v35 = v104 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v104) = BYTE1(v103);
    if ((v100 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v101, v103);
      *v35 += v103;
    }
  }
  else {
    v105 = *v35;
    *v35 = v105 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v105) = 0;
    v106 = *v35;
    *v35 = v106 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v106) = 0;
  }
  v107 = *(unsigned __int8*)(v4 + 880);
  v108 = (v107 & 1) == 0;
  v109 = v107 >> 1;
  if (v108) {
    v110 = v4 + 881;
  }
  else {
    v110 = *(_QWORD*)(v4 + 896);
  }
  if (!v108) {
    LODWORD(v109) = *(_DWORD*)(v4 + 888);
  }
  if ((_DWORD)v109 != 0) {
    v111 = *v35;
    v112 = (unsigned int)(v109 + 1);
    *v35 = v111 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v111) = v109 + 1;
    v113 = *v35;
    *v35 = v113 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v113) = BYTE1(v112);
    if ((v109 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v110, v112);
      *v35 += v112;
    }
  }
  else {
    v114 = *v35;
    *v35 = v114 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v114) = 0;
    v115 = *v35;
    *v35 = v115 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v115) = 0;
  }
  v116 = *(unsigned __int8*)(v4 + 904);
  v117 = (v116 & 1) == 0;
  v118 = v116 >> 1;
  if (v117) {
    v119 = v4 + 905;
  }
  else {
    v119 = *(_QWORD*)(v4 + 920);
  }
  if (!v117) {
    LODWORD(v118) = *(_DWORD*)(v4 + 912);
  }
  if ((_DWORD)v118 != 0) {
    v120 = *v35;
    v121 = (unsigned int)(v118 + 1);
    *v35 = v120 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v120) = v118 + 1;
    v122 = *v35;
    *v35 = v122 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v122) = BYTE1(v121);
    if ((v118 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v119, v121);
      *v35 += v121;
    }
  }
  else {
    v123 = *v35;
    *v35 = v123 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v123) = 0;
    v124 = *v35;
    *v35 = v124 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v124) = 0;
  }
  v125 = *(unsigned __int8*)(v4 + 928);
  v126 = (v125 & 1) == 0;
  v127 = v125 >> 1;
  if (v126) {
    v128 = v4 + 929;
  }
  else {
    v128 = *(_QWORD*)(v4 + 944);
  }
  if (!v126) {
    LODWORD(v127) = *(_DWORD*)(v4 + 936);
  }
  if ((_DWORD)v127 != 0) {
    v129 = *v35;
    v130 = (unsigned int)(v127 + 1);
    *v35 = v129 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v129) = v127 + 1;
    v131 = *v35;
    *v35 = v131 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v131) = BYTE1(v130);
    if ((v127 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v128, v130);
      *v35 += v130;
    }
  }
  else {
    v132 = *v35;
    *v35 = v132 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v132) = 0;
    v133 = *v35;
    *v35 = v133 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v133) = 0;
  }
  v134 = *(unsigned __int8*)(v4 + 952);
  v135 = (v134 & 1) == 0;
  v136 = v134 >> 1;
  if (v135) {
    v137 = v4 + 953;
  }
  else {
    v137 = *(_QWORD*)(v4 + 968);
  }
  if (!v135) {
    LODWORD(v136) = *(_DWORD*)(v4 + 960);
  }
  if ((_DWORD)v136 != 0) {
    v138 = *v35;
    v139 = (unsigned int)(v136 + 1);
    *v35 = v138 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v138) = v136 + 1;
    v140 = *v35;
    *v35 = v140 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v140) = BYTE1(v139);
    if ((v136 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v137, v139);
      *v35 += v139;
    }
  }
  else {
    v141 = *v35;
    *v35 = v141 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v141) = 0;
    v142 = *v35;
    *v35 = v142 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v142) = 0;
  }
  v143 = *(unsigned __int8*)(v4 + 976);
  v144 = (v143 & 1) == 0;
  v145 = v143 >> 1;
  if (v144) {
    v146 = v4 + 977;
  }
  else {
    v146 = *(_QWORD*)(v4 + 992);
  }
  if (!v144) {
    LODWORD(v145) = *(_DWORD*)(v4 + 984);
  }
  if ((_DWORD)v145 != 0) {
    v147 = *v35;
    v148 = (unsigned int)(v145 + 1);
    *v35 = v147 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v147) = v145 + 1;
    v149 = *v35;
    *v35 = v149 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v149) = BYTE1(v148);
    if ((v145 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v146, v148);
      *v35 += v148;
    }
  }
  else {
    v150 = *v35;
    *v35 = v150 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v150) = 0;
    v151 = *v35;
    *v35 = v151 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v151) = 0;
  }
  v152 = *(unsigned __int8*)(v4 + 1000);
  v153 = (v152 & 1) == 0;
  v154 = v152 >> 1;
  if (v153) {
    v155 = v4 + 1001;
  }
  else {
    v155 = *(_QWORD*)(v4 + 1016);
  }
  if (!v153) {
    LODWORD(v154) = *(_DWORD*)(v4 + 1008);
  }
  if ((_DWORD)v154 != 0) {
    v156 = *v35;
    v157 = (unsigned int)(v154 + 1);
    *v35 = v156 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v156) = v154 + 1;
    v158 = *v35;
    *v35 = v158 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v158) = BYTE1(v157);
    if ((v154 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v155, v157);
      *v35 += v157;
    }
  }
  else {
    v159 = *v35;
    *v35 = v159 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v159) = 0;
    v160 = *v35;
    *v35 = v160 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v160) = 0;
  }
  v161 = *(unsigned __int8*)(v4 + 1024);
  v162 = (v161 & 1) == 0;
  v163 = v161 >> 1;
  if (v162) {
    v164 = v4 + 1025;
  }
  else {
    v164 = *(_QWORD*)(v4 + 1040);
  }
  if (!v162) {
    LODWORD(v163) = *(_DWORD*)(v4 + 1032);
  }
  if ((_DWORD)v163 != 0) {
    v165 = *v35;
    v166 = (unsigned int)(v163 + 1);
    *v35 = v165 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v165) = v163 + 1;
    v167 = *v35;
    *v35 = v167 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v167) = BYTE1(v166);
    if ((v163 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v164, v166);
      *v35 += v166;
    }
  }
  else {
    v168 = *v35;
    *v35 = v168 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v168) = 0;
    v169 = *v35;
    *v35 = v169 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v169) = 0;
  }
  v170 = *(unsigned __int8*)(v4 + 1048);
  v171 = (v170 & 1) == 0;
  v172 = v170 >> 1;
  if (v171) {
    v173 = v4 + 1049;
  }
  else {
    v173 = *(_QWORD*)(v4 + 1064);
  }
  if (!v171) {
    LODWORD(v172) = *(_DWORD*)(v4 + 1056);
  }
  if ((_DWORD)v172 != 0) {
    v174 = *v35;
    v175 = (unsigned int)(v172 + 1);
    *v35 = v174 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v174) = v172 + 1;
    v176 = *v35;
    *v35 = v176 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v176) = BYTE1(v175);
    if ((v172 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v173, v175);
      *v35 += v175;
    }
  }
  else {
    v177 = *v35;
    *v35 = v177 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v177) = 0;
    v178 = *v35;
    *v35 = v178 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v178) = 0;
  }
  v179 = *(unsigned __int8*)(v4 + 1072);
  v180 = (v179 & 1) == 0;
  v181 = v179 >> 1;
  if (v180) {
    v182 = v4 + 1073;
  }
  else {
    v182 = *(_QWORD*)(v4 + 1088);
  }
  if (!v180) {
    LODWORD(v181) = *(_DWORD*)(v4 + 1080);
  }
  if ((_DWORD)v181 != 0) {
    v183 = *v35;
    v184 = (unsigned int)(v181 + 1);
    *v35 = v183 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v183) = v181 + 1;
    v185 = *v35;
    *v35 = v185 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v185) = BYTE1(v184);
    if ((v181 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v182, v184);
      *v35 += v184;
    }
  }
  else {
    v186 = *v35;
    *v35 = v186 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v186) = 0;
    v187 = *v35;
    *v35 = v187 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v187) = 0;
  }
  v188 = *(unsigned __int8*)(v4 + 1096);
  v189 = (v188 & 1) == 0;
  v190 = v188 >> 1;
  if (v189) {
    v191 = v4 + 1097;
  }
  else {
    v191 = *(_QWORD*)(v4 + 1112);
  }
  if (!v189) {
    LODWORD(v190) = *(_DWORD*)(v4 + 1104);
  }
  if ((_DWORD)v190 != 0) {
    v192 = *v35;
    v193 = (unsigned int)(v190 + 1);
    *v35 = v192 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v192) = v190 + 1;
    v194 = *v35;
    *v35 = v194 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v194) = BYTE1(v193);
    if ((v190 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v191, v193);
      *v35 += v193;
    }
  }
  else {
    v195 = *v35;
    *v35 = v195 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v195) = 0;
    v196 = *v35;
    *v35 = v196 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v196) = 0;
  }
  v197 = *(unsigned __int8*)(v4 + 1120);
  v198 = (v197 & 1) == 0;
  v199 = v197 >> 1;
  if (v198) {
    v200 = v4 + 1121;
  }
  else {
    v200 = *(_QWORD*)(v4 + 1136);
  }
  if (!v198) {
    LODWORD(v199) = *(_DWORD*)(v4 + 1128);
  }
  if ((_DWORD)v199 != 0) {
    v201 = *v35;
    v202 = (unsigned int)(v199 + 1);
    *v35 = v201 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v201) = v199 + 1;
    v203 = *v35;
    *v35 = v203 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v203) = BYTE1(v202);
    if ((v199 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v200, v202);
      *v35 += v202;
    }
  }
  else {
    v204 = *v35;
    *v35 = v204 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v204) = 0;
    v205 = *v35;
    *v35 = v205 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v205) = 0;
  }
  v206 = *(unsigned __int8*)(v4 + 1144);
  v207 = (v206 & 1) == 0;
  v208 = v206 >> 1;
  if (v207) {
    v209 = v4 + 1145;
  }
  else {
    v209 = *(_QWORD*)(v4 + 1160);
  }
  if (!v207) {
    LODWORD(v208) = *(_DWORD*)(v4 + 1152);
  }
  if ((_DWORD)v208 != 0) {
    v210 = *v35;
    v211 = (unsigned int)(v208 + 1);
    *v35 = v210 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v210) = v208 + 1;
    v212 = *v35;
    *v35 = v212 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v212) = BYTE1(v211);
    if ((v208 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v209, v211);
      *v35 += v211;
    }
  }
  else {
    v213 = *v35;
    *v35 = v213 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v213) = 0;
    v214 = *v35;
    *v35 = v214 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v214) = 0;
  }
  v215 = *(unsigned __int8*)(v4 + 1168);
  v216 = (v215 & 1) == 0;
  v217 = v215 >> 1;
  if (v216) {
    v218 = v4 + 1169;
  }
  else {
    v218 = *(_QWORD*)(v4 + 1184);
  }
  if (!v216) {
    LODWORD(v217) = *(_DWORD*)(v4 + 1176);
  }
  if ((_DWORD)v217 != 0) {
    v219 = *v35;
    v220 = (unsigned int)(v217 + 1);
    *v35 = v219 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v219) = v217 + 1;
    v221 = *v35;
    *v35 = v221 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v221) = BYTE1(v220);
    if ((v217 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v218, v220);
      *v35 += v220;
    }
  }
  else {
    v222 = *v35;
    *v35 = v222 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v222) = 0;
    v223 = *v35;
    *v35 = v223 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v223) = 0;
  }
  v224 = *(unsigned __int8*)(v4 + 1192);
  v225 = (v224 & 1) == 0;
  v226 = v224 >> 1;
  if (v225) {
    v227 = v4 + 1193;
  }
  else {
    v227 = *(_QWORD*)(v4 + 1208);
  }
  if (!v225) {
    LODWORD(v226) = *(_DWORD*)(v4 + 1200);
  }
  if ((_DWORD)v226 != 0) {
    v228 = *v35;
    v229 = (unsigned int)(v226 + 1);
    *v35 = v228 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v228) = v226 + 1;
    v230 = *v35;
    *v35 = v230 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v230) = BYTE1(v229);
    if ((v226 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v227, v229);
      *v35 += v229;
    }
  }
  else {
    v231 = *v35;
    *v35 = v231 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v231) = 0;
    v232 = *v35;
    *v35 = v232 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v232) = 0;
  }
  v233 = *(unsigned __int8*)(v4 + 1216);
  v234 = (v233 & 1) == 0;
  v235 = v233 >> 1;
  if (v234) {
    v236 = v4 + 1217;
  }
  else {
    v236 = *(_QWORD*)(v4 + 1232);
  }
  if (!v234) {
    LODWORD(v235) = *(_DWORD*)(v4 + 1224);
  }
  if ((_DWORD)v235 != 0) {
    v237 = *v35;
    v238 = (unsigned int)(v235 + 1);
    *v35 = v237 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v237) = v235 + 1;
    v239 = *v35;
    *v35 = v239 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v239) = BYTE1(v238);
    if ((v235 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v236, v238);
      *v35 += v238;
    }
  }
  else {
    v240 = *v35;
    *v35 = v240 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v240) = 0;
    v241 = *v35;
    *v35 = v241 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v241) = 0;
  }
  v242 = *(unsigned __int8*)(v4 + 1240);
  v243 = (v242 & 1) == 0;
  v244 = v242 >> 1;
  if (v243) {
    v245 = v4 + 1241;
  }
  else {
    v245 = *(_QWORD*)(v4 + 1256);
  }
  if (!v243) {
    LODWORD(v244) = *(_DWORD*)(v4 + 1248);
  }
  if ((_DWORD)v244 != 0) {
    v246 = *v35;
    v247 = (unsigned int)(v244 + 1);
    *v35 = v246 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v246) = v244 + 1;
    v248 = *v35;
    *v35 = v248 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v248) = BYTE1(v247);
    if ((v244 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v245, v247);
      *v35 += v247;
    }
  }
  else {
    v249 = *v35;
    *v35 = v249 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v249) = 0;
    v250 = *v35;
    *v35 = v250 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v250) = 0;
  }
  v251 = *(unsigned __int8*)(v4 + 1264);
  v252 = (v251 & 1) == 0;
  v253 = v251 >> 1;
  if (v252) {
    v254 = v4 + 1265;
  }
  else {
    v254 = *(_QWORD*)(v4 + 1280);
  }
  if (!v252) {
    LODWORD(v253) = *(_DWORD*)(v4 + 1272);
  }
  if ((_DWORD)v253 != 0) {
    v255 = *v35;
    v256 = (unsigned int)(v253 + 1);
    *v35 = v255 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v255) = v253 + 1;
    v257 = *v35;
    *v35 = v257 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v257) = BYTE1(v256);
    if ((v253 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v254, v256);
      *v35 += v256;
    }
  }
  else {
    v258 = *v35;
    *v35 = v258 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v258) = 0;
    v259 = *v35;
    *v35 = v259 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v259) = 0;
  }
  v260 = *(unsigned __int8*)(v4 + 1288);
  v261 = (v260 & 1) == 0;
  v262 = v260 >> 1;
  if (v261) {
    v263 = v4 + 1289;
  }
  else {
    v263 = *(_QWORD*)(v4 + 1304);
  }
  if (!v261) {
    LODWORD(v262) = *(_DWORD*)(v4 + 1296);
  }
  if ((_DWORD)v262 != 0) {
    v264 = *v35;
    v265 = (unsigned int)(v262 + 1);
    *v35 = v264 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v264) = v262 + 1;
    v266 = *v35;
    *v35 = v266 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v266) = BYTE1(v265);
    if ((v262 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v263, v265);
      *v35 += v265;
    }
  }
  else {
    v267 = *v35;
    *v35 = v267 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v267) = 0;
    v268 = *v35;
    *v35 = v268 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v268) = 0;
  }
  v269 = *(unsigned __int8*)(v4 + 1312);
  v270 = (v269 & 1) == 0;
  v271 = v269 >> 1;
  if (v270) {
    v272 = v4 + 1313;
  }
  else {
    v272 = *(_QWORD*)(v4 + 1328);
  }
  if (!v270) {
    LODWORD(v271) = *(_DWORD*)(v4 + 1320);
  }
  if ((_DWORD)v271 != 0) {
    v273 = *v35;
    v274 = (unsigned int)(v271 + 1);
    *v35 = v273 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v273) = v271 + 1;
    v275 = *v35;
    *v35 = v275 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v275) = BYTE1(v274);
    if ((v271 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v272, v274);
      *v35 += v274;
    }
  }
  else {
    v276 = *v35;
    *v35 = v276 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v276) = 0;
    v277 = *v35;
    *v35 = v277 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v277) = 0;
  }
  v278 = *(unsigned __int8*)(v4 + 1336);
  v279 = (v278 & 1) == 0;
  v280 = v278 >> 1;
  if (v279) {
    v281 = v4 + 1337;
  }
  else {
    v281 = *(_QWORD*)(v4 + 1352);
  }
  if (!v279) {
    LODWORD(v280) = *(_DWORD*)(v4 + 1344);
  }
  if ((_DWORD)v280 != 0) {
    v282 = *v35;
    v283 = (unsigned int)(v280 + 1);
    *v35 = v282 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v282) = v280 + 1;
    v284 = *v35;
    *v35 = v284 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v284) = BYTE1(v283);
    if ((v280 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v281, v283);
      *v35 += v283;
    }
  }
  else {
    v285 = *v35;
    *v35 = v285 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v285) = 0;
    v286 = *v35;
    *v35 = v286 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v286) = 0;
  }
  v287 = *(unsigned __int8*)(v4 + 1360);
  v288 = (v287 & 1) == 0;
  v289 = v287 >> 1;
  if (v288) {
    v290 = v4 + 1361;
  }
  else {
    v290 = *(_QWORD*)(v4 + 1376);
  }
  if (!v288) {
    LODWORD(v289) = *(_DWORD*)(v4 + 1368);
  }
  if ((_DWORD)v289 != 0) {
    v291 = *v35;
    v292 = (unsigned int)(v289 + 1);
    *v35 = v291 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v291) = v289 + 1;
    v293 = *v35;
    *v35 = v293 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v293) = BYTE1(v292);
    if ((v289 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v290, v292);
      *v35 += v292;
    }
  }
  else {
    v294 = *v35;
    *v35 = v294 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v294) = 0;
    v295 = *v35;
    *v35 = v295 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v295) = 0;
  }
  v296 = *(unsigned __int8*)(v4 + 1384);
  v297 = (v296 & 1) == 0;
  v298 = v296 >> 1;
  if (v297) {
    v299 = v4 + 1385;
  }
  else {
    v299 = *(_QWORD*)(v4 + 1400);
  }
  if (!v297) {
    LODWORD(v298) = *(_DWORD*)(v4 + 1392);
  }
  if ((_DWORD)v298 != 0) {
    v300 = *v35;
    v301 = (unsigned int)(v298 + 1);
    *v35 = v300 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v300) = v298 + 1;
    v302 = *v35;
    *v35 = v302 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v302) = BYTE1(v301);
    if ((v298 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v299, v301);
      *v35 += v301;
    }
  }
  else {
    v303 = *v35;
    *v35 = v303 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v303) = 0;
    v304 = *v35;
    *v35 = v304 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v304) = 0;
  }
  v305 = *(unsigned __int8*)(v4 + 1408);
  v306 = (v305 & 1) == 0;
  v307 = v305 >> 1;
  if (v306) {
    v308 = v4 + 1409;
  }
  else {
    v308 = *(_QWORD*)(v4 + 1424);
  }
  if (!v306) {
    LODWORD(v307) = *(_DWORD*)(v4 + 1416);
  }
  if ((_DWORD)v307 != 0) {
    v309 = *v35;
    v310 = (unsigned int)(v307 + 1);
    *v35 = v309 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v309) = v307 + 1;
    v311 = *v35;
    *v35 = v311 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v311) = BYTE1(v310);
    if ((v307 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v308, v310);
      *v35 += v310;
    }
  }
  else {
    v312 = *v35;
    *v35 = v312 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v312) = 0;
    v313 = *v35;
    *v35 = v313 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v313) = 0;
  }
  v314 = *(unsigned __int8*)(v4 + 1432);
  v315 = (v314 & 1) == 0;
  v316 = v314 >> 1;
  if (v315) {
    v317 = v4 + 1433;
  }
  else {
    v317 = *(_QWORD*)(v4 + 1448);
  }
  if (!v315) {
    LODWORD(v316) = *(_DWORD*)(v4 + 1440);
  }
  if ((_DWORD)v316 != 0) {
    v318 = *v35;
    v319 = (unsigned int)(v316 + 1);
    *v35 = v318 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v318) = v316 + 1;
    v320 = *v35;
    *v35 = v320 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v320) = BYTE1(v319);
    if ((v316 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v317, v319);
      *v35 += v319;
    }
  }
  else {
    v321 = *v35;
    *v35 = v321 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v321) = 0;
    v322 = *v35;
    *v35 = v322 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v322) = 0;
  }
  v323 = *(unsigned __int8*)(v4 + 1456);
  v324 = (v323 & 1) == 0;
  v325 = v323 >> 1;
  if (v324) {
    v326 = v4 + 1457;
  }
  else {
    v326 = *(_QWORD*)(v4 + 1472);
  }
  v327 = *(_DWORD*)(v4 + 1464);
  if (v324) {
    v327 = v325;
  }
  if (v327 != 0) {
    v328 = *v35;
    v329 = (unsigned int)(v327 + 1);
    *v35 = v328 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v328) = v327 + 1;
    v330 = *v35;
    *v35 = v330 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v330) = BYTE1(v329);
    v331 = *v35;
    if ((v327 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v331, v326, v329);
      v331 = *v35 + v329;
      *v35 = v331;
    }
  }
  else {
    v332 = *v35;
    *v35 = v332 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v332) = 0;
    v333 = *v35;
    *v35 = v333 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v333) = 0;
    v331 = *v35;
  }
  v334 = *(_BYTE*)(v4 + 1480);
  *v35 = v331 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v331) = v334;
  v335 = *(unsigned __int8*)(v4 + 1488);
  v336 = (v335 & 1) == 0;
  v337 = v335 >> 1;
  if (v336) {
    v338 = v4 + 1489;
  }
  else {
    v338 = *(_QWORD*)(v4 + 1504);
  }
  v339 = *(_DWORD*)(v4 + 1496);
  if (v336) {
    v339 = v337;
  }
  if (v339 != 0) {
    v340 = *v35;
    v341 = (unsigned int)(v339 + 1);
    *v35 = v340 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v340) = v339 + 1;
    v342 = *v35;
    *v35 = v342 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v342) = BYTE1(v341);
    v343 = *v35;
    if ((v339 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v343, v338, v341);
      v343 = *v35 + v341;
      *v35 = v343;
    }
  }
  else {
    v344 = *v35;
    *v35 = v344 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v344) = 0;
    v345 = *v35;
    *v35 = v345 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v345) = 0;
    v343 = *v35;
  }
  v346 = *(_BYTE*)(v4 + 1512);
  *v35 = v343 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v343) = v346;
  v347 = *(unsigned __int8*)(v4 + 1520);
  v348 = (v347 & 1) == 0;
  v349 = v347 >> 1;
  if (v348) {
    v350 = v4 + 1521;
  }
  else {
    v350 = *(_QWORD*)(v4 + 1536);
  }
  v351 = *(_DWORD*)(v4 + 1528);
  if (v348) {
    v351 = v349;
  }
  if (v351 != 0) {
    v352 = *v35;
    v353 = (unsigned int)(v351 + 1);
    *v35 = v352 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v352) = v351 + 1;
    v354 = *v35;
    *v35 = v354 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v354) = BYTE1(v353);
    v355 = *v35;
    if ((v351 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v355, v350, v353);
      v355 = *v35 + v353;
      *v35 = v355;
    }
  }
  else {
    v356 = *v35;
    *v35 = v356 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v356) = 0;
    v357 = *v35;
    *v35 = v357 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v357) = 0;
    v355 = *v35;
  }
  v358 = *(_BYTE*)(v4 + 1544);
  *v35 = v355 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v355) = v358;
  v359 = *(unsigned __int8*)(v4 + 1552);
  v360 = (v359 & 1) == 0;
  v361 = v359 >> 1;
  if (v360) {
    v362 = v4 + 1553;
  }
  else {
    v362 = *(_QWORD*)(v4 + 1568);
  }
  v363 = *(_DWORD*)(v4 + 1560);
  if (v360) {
    v363 = v361;
  }
  if (v363 != 0) {
    v364 = *v35;
    v365 = (unsigned int)(v363 + 1);
    *v35 = v364 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v364) = v363 + 1;
    v366 = *v35;
    *v35 = v366 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v366) = BYTE1(v365);
    v367 = *v35;
    if ((v363 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v367, v362, v365);
      v367 = *v35 + v365;
      *v35 = v367;
    }
  }
  else {
    v368 = *v35;
    *v35 = v368 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v368) = 0;
    v369 = *v35;
    *v35 = v369 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v369) = 0;
    v367 = *v35;
  }
  v370 = *(_BYTE*)(v4 + 1576);
  *v35 = v367 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v367) = v370;
  v371 = *(unsigned __int8*)(v4 + 1584);
  v372 = (v371 & 1) == 0;
  v373 = v371 >> 1;
  if (v372) {
    v374 = v4 + 1585;
  }
  else {
    v374 = *(_QWORD*)(v4 + 1600);
  }
  v375 = *(_DWORD*)(v4 + 1592);
  if (v372) {
    v375 = v373;
  }
  if (v375 != 0) {
    v376 = *v35;
    v377 = (unsigned int)(v375 + 1);
    *v35 = v376 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v376) = v375 + 1;
    v378 = *v35;
    *v35 = v378 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v378) = BYTE1(v377);
    v379 = *v35;
    if ((v375 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v379, v374, v377);
      v379 = *v35 + v377;
      *v35 = v379;
    }
  }
  else {
    v380 = *v35;
    *v35 = v380 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v380) = 0;
    v381 = *v35;
    *v35 = v381 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v381) = 0;
    v379 = *v35;
  }
  v382 = *(_BYTE*)(v4 + 1608);
  *v35 = v379 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v379) = v382;
  v383 = *(unsigned __int8*)(v4 + 1616);
  v384 = (v383 & 1) == 0;
  v385 = v383 >> 1;
  if (v384) {
    v386 = v4 + 1617;
  }
  else {
    v386 = *(_QWORD*)(v4 + 1632);
  }
  v387 = *(_DWORD*)(v4 + 1624);
  if (v384) {
    v387 = v385;
  }
  if (v387 != 0) {
    v388 = *v35;
    v389 = (unsigned int)(v387 + 1);
    *v35 = v388 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v388) = v387 + 1;
    v390 = *v35;
    *v35 = v390 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v390) = BYTE1(v389);
    v391 = *v35;
    if ((v387 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v391, v386, v389);
      v391 = *v35 + v389;
      *v35 = v391;
    }
  }
  else {
    v392 = *v35;
    *v35 = v392 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v392) = 0;
    v393 = *v35;
    *v35 = v393 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v393) = 0;
    v391 = *v35;
  }
  v394 = *(_BYTE*)(v4 + 1640);
  *v35 = v391 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v391) = v394;
  v395 = *(unsigned __int8*)(v4 + 1648);
  v396 = (v395 & 1) == 0;
  v397 = v395 >> 1;
  if (v396) {
    v398 = v4 + 1649;
  }
  else {
    v398 = *(_QWORD*)(v4 + 1664);
  }
  v399 = *(_DWORD*)(v4 + 1656);
  if (v396) {
    v399 = v397;
  }
  if (v399 != 0) {
    v400 = *v35;
    v401 = (unsigned int)(v399 + 1);
    *v35 = v400 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v400) = v399 + 1;
    v402 = *v35;
    *v35 = v402 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v402) = BYTE1(v401);
    v403 = *v35;
    if ((v399 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v403, v398, v401);
      v403 = *v35 + v401;
      *v35 = v403;
    }
  }
  else {
    v404 = *v35;
    *v35 = v404 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v404) = 0;
    v405 = *v35;
    *v35 = v405 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v405) = 0;
    v403 = *v35;
  }
  v406 = *(_BYTE*)(v4 + 1672);
  *v35 = v403 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v403) = v406;
  v407 = *(unsigned __int8*)(v4 + 1680);
  v408 = (v407 & 1) == 0;
  v409 = v407 >> 1;
  if (v408) {
    v410 = v4 + 1681;
  }
  else {
    v410 = *(_QWORD*)(v4 + 1696);
  }
  v411 = *(_DWORD*)(v4 + 1688);
  if (v408) {
    v411 = v409;
  }
  if (v411 != 0) {
    v412 = *v35;
    v413 = (unsigned int)(v411 + 1);
    *v35 = v412 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v412) = v411 + 1;
    v414 = *v35;
    *v35 = v414 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v414) = BYTE1(v413);
    v415 = *v35;
    if ((v411 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v415, v410, v413);
      v415 = *v35 + v413;
      *v35 = v415;
    }
  }
  else {
    v416 = *v35;
    *v35 = v416 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v416) = 0;
    v417 = *v35;
    *v35 = v417 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v417) = 0;
    v415 = *v35;
  }
  v418 = *(_BYTE*)(v4 + 1704);
  *v35 = v415 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v415) = v418;
  v419 = *(unsigned __int8*)(v4 + 1712);
  v420 = (v419 & 1) == 0;
  v421 = v419 >> 1;
  if (v420) {
    v422 = v4 + 1713;
  }
  else {
    v422 = *(_QWORD*)(v4 + 1728);
  }
  v423 = *(_DWORD*)(v4 + 1720);
  if (v420) {
    v423 = v421;
  }
  if (v423 != 0) {
    v424 = *v35;
    v425 = (unsigned int)(v423 + 1);
    *v35 = v424 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v424) = v423 + 1;
    v426 = *v35;
    *v35 = v426 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v426) = BYTE1(v425);
    v427 = *v35;
    if ((v423 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v427, v422, v425);
      v427 = *v35 + v425;
      *v35 = v427;
    }
  }
  else {
    v428 = *v35;
    *v35 = v428 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v428) = 0;
    v429 = *v35;
    *v35 = v429 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v429) = 0;
    v427 = *v35;
  }
  v430 = *(_BYTE*)(v4 + 1736);
  *v35 = v427 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v427) = v430;
  v431 = *(unsigned __int8*)(v4 + 1744);
  v432 = (v431 & 1) == 0;
  v433 = v431 >> 1;
  if (v432) {
    v434 = v4 + 1745;
  }
  else {
    v434 = *(_QWORD*)(v4 + 1760);
  }
  v435 = *(_DWORD*)(v4 + 1752);
  if (v432) {
    v435 = v433;
  }
  if (v435 != 0) {
    v436 = *v35;
    v437 = (unsigned int)(v435 + 1);
    *v35 = v436 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v436) = v435 + 1;
    v438 = *v35;
    *v35 = v438 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v438) = BYTE1(v437);
    v439 = *v35;
    if ((v435 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v439, v434, v437);
      v439 = *v35 + v437;
      *v35 = v439;
    }
  }
  else {
    v440 = *v35;
    *v35 = v440 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v440) = 0;
    v441 = *v35;
    *v35 = v441 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v441) = 0;
    v439 = *v35;
  }
  v442 = *(_BYTE*)(v4 + 1768);
  *v35 = v439 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v439) = v442;
  v443 = *(unsigned __int8*)(v4 + 1776);
  v444 = (v443 & 1) == 0;
  v445 = v443 >> 1;
  if (v444) {
    v446 = v4 + 1777;
  }
  else {
    v446 = *(_QWORD*)(v4 + 1792);
  }
  v447 = *(_DWORD*)(v4 + 1784);
  if (v444) {
    v447 = v445;
  }
  if (v447 != 0) {
    v448 = *v35;
    v449 = (unsigned int)(v447 + 1);
    *v35 = v448 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v448) = v447 + 1;
    v450 = *v35;
    *v35 = v450 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v450) = BYTE1(v449);
    v451 = *v35;
    if ((v447 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v451, v446, v449);
      v451 = *v35 + v449;
      *v35 = v451;
    }
  }
  else {
    v452 = *v35;
    *v35 = v452 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v452) = 0;
    v453 = *v35;
    *v35 = v453 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v453) = 0;
    v451 = *v35;
  }
  v454 = *(_BYTE*)(v4 + 1800);
  *v35 = v451 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v451) = v454;
  v455 = *(unsigned __int8*)(v4 + 1808);
  v456 = (v455 & 1) == 0;
  v457 = v455 >> 1;
  if (v456) {
    v458 = v4 + 1809;
  }
  else {
    v458 = *(_QWORD*)(v4 + 1824);
  }
  v459 = *(_DWORD*)(v4 + 1816);
  if (v456) {
    v459 = v457;
  }
  if (v459 != 0) {
    v460 = *v35;
    v461 = (unsigned int)(v459 + 1);
    *v35 = v460 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v460) = v459 + 1;
    v462 = *v35;
    *v35 = v462 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v462) = BYTE1(v461);
    v463 = *v35;
    if ((v459 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v463, v458, v461);
      v463 = *v35 + v461;
      *v35 = v463;
    }
  }
  else {
    v464 = *v35;
    *v35 = v464 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v464) = 0;
    v465 = *v35;
    *v35 = v465 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v465) = 0;
    v463 = *v35;
  }
  v466 = *(_BYTE*)(v4 + 1832);
  *v35 = v463 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v463) = v466;
  v467 = *(unsigned __int8*)(v4 + 1840);
  v468 = (v467 & 1) == 0;
  v469 = v467 >> 1;
  if (v468) {
    v470 = v4 + 1841;
  }
  else {
    v470 = *(_QWORD*)(v4 + 1856);
  }
  v471 = *(_DWORD*)(v4 + 1848);
  if (v468) {
    v471 = v469;
  }
  if (v471 != 0) {
    v472 = *v35;
    v473 = (unsigned int)(v471 + 1);
    *v35 = v472 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v472) = v471 + 1;
    v474 = *v35;
    *v35 = v474 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v474) = BYTE1(v473);
    v475 = *v35;
    if ((v471 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v475, v470, v473);
      v475 = *v35 + v473;
      *v35 = v475;
    }
  }
  else {
    v476 = *v35;
    *v35 = v476 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v476) = 0;
    v477 = *v35;
    *v35 = v477 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v477) = 0;
    v475 = *v35;
  }
  v478 = *(_BYTE*)(v4 + 1864);
  *v35 = v475 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v475) = v478;
  v479 = *(unsigned __int8*)(v4 + 1872);
  v480 = (v479 & 1) == 0;
  v481 = v479 >> 1;
  if (v480) {
    v482 = v4 + 1873;
  }
  else {
    v482 = *(_QWORD*)(v4 + 1888);
  }
  v483 = *(_DWORD*)(v4 + 1880);
  if (v480) {
    v483 = v481;
  }
  if (v483 != 0) {
    v484 = *v35;
    v485 = (unsigned int)(v483 + 1);
    *v35 = v484 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v484) = v483 + 1;
    v486 = *v35;
    *v35 = v486 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v486) = BYTE1(v485);
    v487 = *v35;
    if ((v483 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v487, v482, v485);
      v487 = *v35 + v485;
      *v35 = v487;
    }
  }
  else {
    v488 = *v35;
    *v35 = v488 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v488) = 0;
    v489 = *v35;
    *v35 = v489 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v489) = 0;
    v487 = *v35;
  }
  v490 = *(_BYTE*)(v4 + 1896);
  *v35 = v487 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v487) = v490;
  v491 = *(unsigned __int8*)(v4 + 1904);
  v492 = (v491 & 1) == 0;
  v493 = v491 >> 1;
  if (v492) {
    v494 = v4 + 1905;
  }
  else {
    v494 = *(_QWORD*)(v4 + 1920);
  }
  v495 = *(_DWORD*)(v4 + 1912);
  if (v492) {
    v495 = v493;
  }
  if (v495 != 0) {
    v496 = *v35;
    v497 = (unsigned int)(v495 + 1);
    *v35 = v496 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v496) = v495 + 1;
    v498 = *v35;
    *v35 = v498 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v498) = BYTE1(v497);
    v499 = *v35;
    if ((v495 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v499, v494, v497);
      v499 = *v35 + v497;
      *v35 = v499;
    }
  }
  else {
    v500 = *v35;
    *v35 = v500 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v500) = 0;
    v501 = *v35;
    *v35 = v501 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v501) = 0;
    v499 = *v35;
  }
  v502 = *(_BYTE*)(v4 + 1928);
  *v35 = v499 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v499) = v502;
  v503 = *(unsigned __int8*)(v4 + 1936);
  v504 = (v503 & 1) == 0;
  v505 = v503 >> 1;
  if (v504) {
    v506 = v4 + 1937;
  }
  else {
    v506 = *(_QWORD*)(v4 + 1952);
  }
  v507 = *(_DWORD*)(v4 + 1944);
  if (v504) {
    v507 = v505;
  }
  if (v507 != 0) {
    v508 = *v35;
    v509 = (unsigned int)(v507 + 1);
    *v35 = v508 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v508) = v507 + 1;
    v510 = *v35;
    *v35 = v510 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v510) = BYTE1(v509);
    v511 = *v35;
    if ((v507 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v511, v506, v509);
      v511 = *v35 + v509;
      *v35 = v511;
    }
  }
  else {
    v512 = *v35;
    *v35 = v512 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v512) = 0;
    v513 = *v35;
    *v35 = v513 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v513) = 0;
    v511 = *v35;
  }
  v514 = *(_BYTE*)(v4 + 1960);
  *v35 = v511 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v511) = v514;
  v515 = *(unsigned __int8*)(v4 + 1968);
  v516 = (v515 & 1) == 0;
  v517 = v515 >> 1;
  if (v516) {
    v518 = v4 + 1969;
  }
  else {
    v518 = *(_QWORD*)(v4 + 1984);
  }
  v519 = *(_DWORD*)(v4 + 1976);
  if (v516) {
    v519 = v517;
  }
  if (v519 != 0) {
    v520 = *v35;
    v521 = (unsigned int)(v519 + 1);
    *v35 = v520 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v520) = v519 + 1;
    v522 = *v35;
    *v35 = v522 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v522) = BYTE1(v521);
    v523 = *v35;
    if ((v519 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v523, v518, v521);
      v523 = *v35 + v521;
      *v35 = v523;
    }
  }
  else {
    v524 = *v35;
    *v35 = v524 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v524) = 0;
    v525 = *v35;
    *v35 = v525 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v525) = 0;
    v523 = *v35;
  }
  v526 = *(_DWORD*)(v4 + 1992);
  *v35 = v523 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v523) = v526;
  v527 = *v35;
  v528 = *(_DWORD*)(v4 + 1996);
  *v35 = v527 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v527) = v528;
  v529 = *v35;
  v530 = *(_DWORD*)(v4 + 2000);
  *v35 = v529 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v529) = v530;
  v531 = *v35;
  v532 = *(_DWORD*)(v4 + 2004);
  *v35 = v531 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v531) = v532;
  v533 = *v35;
  v534 = *(_DWORD*)(v4 + 2008);
  *v35 = v533 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v533) = v534;
  v535 = *v35;
  v536 = *(_DWORD*)(v4 + 2012);
  *v35 = v535 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v535) = v536;
  v537 = *v35;
  v538 = *(_DWORD*)(v4 + 2016);
  *v35 = v537 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v537) = v538;
  v539 = *v35;
  v540 = *(_DWORD*)(v4 + 2020);
  *v35 = v539 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v539) = v540;
  v541 = *v35;
  v542 = *(_DWORD*)(v4 + 2024);
  *v35 = v541 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v541) = v542;
  v543 = *v35;
  v544 = *(_DWORD*)(v4 + 2028);
  *v35 = v543 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v543) = v544;
  v545 = *v35;
  v546 = *(_DWORD*)(v4 + 2032);
  *v35 = v545 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v545) = v546;
  v547 = *v35;
  v548 = *(_DWORD*)(v4 + 2036);
  *v35 = v547 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v547) = v548;
  v549 = *v35;
  v550 = *(_DWORD*)(v4 + 2040);
  *v35 = v549 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v549) = v550;
  v551 = *v35;
  v552 = *(_DWORD*)(v4 + 2044);
  *v35 = v551 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v551) = v552;
  v553 = *v35;
  v554 = *(_DWORD*)(v4 + 2048);
  *v35 = v553 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v553) = v554;
  v555 = *v35;
  v556 = *(_DWORD*)(v4 + 2052);
  *v35 = v555 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v555) = v556;
  v557 = *v35;
  v558 = *(_DWORD*)(v4 + 2056);
  *v35 = v557 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v557) = v558;
  v559 = *v35;
  v560 = *(_DWORD*)(v4 + 2060);
  *v35 = v559 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v559) = v560;
  v561 = *v35;
  v562 = *(_DWORD*)(v4 + 2064);
  *v35 = v561 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v561) = v562;
  v563 = *v35;
  v564 = *(_DWORD*)(v4 + 2068);
  *v35 = v563 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v563) = v564;
  v565 = *v35;
  v566 = *(_DWORD*)(v4 + 2072);
  *v35 = v565 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v565) = v566;
  v567 = *v35;
  v568 = *(_DWORD*)(v4 + 2076);
  *v35 = v567 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v567) = v568;
  v569 = *v35;
  v570 = *(_DWORD*)(v4 + 2080);
  *v35 = v569 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v569) = v570;
  v571 = *v35;
  v572 = *(_DWORD*)(v4 + 2084);
  *v35 = v571 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v571) = v572;
  v573 = *v35;
  v574 = *(_DWORD*)(v4 + 2088);
  *v35 = v573 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v573) = v574;
  v575 = *v35;
  v576 = *(_DWORD*)(v4 + 2092);
  *v35 = v575 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v575) = v576;
  v577 = *v35;
  v578 = *(_DWORD*)(v4 + 2096);
  *v35 = v577 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v577) = v578;
  v579 = *v35;
  v580 = *(_DWORD*)(v4 + 2100);
  *v35 = v579 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v579) = v580;
  v581 = *v35;
  v582 = *(_DWORD*)(v4 + 2104);
  *v35 = v581 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v581) = v582;
  v583 = *v35;
  v584 = *(_DWORD*)(v4 + 2108);
  *v35 = v583 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v583) = v584;
  v585 = *v35;
  v586 = *(_DWORD*)(v4 + 2112);
  *v35 = v585 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v585) = v586;
  v587 = *v35;
  v588 = *(_DWORD*)(v4 + 2116);
  *v35 = v587 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v587) = v588;
  v589 = *v35;
  v590 = *(_DWORD*)(v4 + 2120);
  *v35 = v589 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v589) = v590;
  v591 = *v35;
  v592 = *(_DWORD*)(v4 + 2124);
  *v35 = v591 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v591) = v592;
  v593 = *v35;
  v594 = *(_DWORD*)(v4 + 2128);
  *v35 = v593 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v593) = v594;
  v595 = *v35;
  v596 = *(_DWORD*)(v4 + 2132);
  *v35 = v595 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v595) = v596;
  v597 = *v35;
  v598 = *(_DWORD*)(v4 + 2136);
  *v35 = v597 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v597) = v598;
  v599 = *v35;
  v600 = *(_DWORD*)(v4 + 2140);
  *v35 = v599 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v599) = v600;
  v601 = *v35;
  v602 = *(_DWORD*)(v4 + 2144);
  *v35 = v601 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v601) = v602;
  v603 = *v35;
  v604 = *(_DWORD*)(v4 + 2148);
  *v35 = v603 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v603) = v604;
  v605 = *v35;
  v606 = *(_DWORD*)(v4 + 2152);
  *v35 = v605 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v605) = v606;
  v607 = *v35;
  v608 = *(_DWORD*)(v4 + 2156);
  *v35 = v607 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v607) = v608;
  v609 = *v35;
  v610 = *(_DWORD*)(v4 + 2160);
  *v35 = v609 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v609) = v610;
  v611 = *v35;
  v612 = *(_DWORD*)(v4 + 2164);
  *v35 = v611 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v611) = v612;
  v613 = *v35;
  v614 = *(_DWORD*)(v4 + 2168);
  *v35 = v613 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v613) = v614;
  v615 = *v35;
  v616 = *(_DWORD*)(v4 + 2188);
  *v35 = v615 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v615) = v616;
  v617 = *v35;
  v618 = *(_DWORD*)(v4 + 2192);
  *v35 = v617 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v617) = v618;
  v619 = *(unsigned __int8*)(v4 + 3080);
  v620 = (v619 & 1) == 0;
  v621 = v619 >> 1;
  if (v620) {
    v622 = v4 + 3081;
  }
  else {
    v622 = *(_QWORD*)(v4 + 3096);
  }
  if (!v620) {
    LODWORD(v621) = *(_DWORD*)(v4 + 3088);
  }
  if ((_DWORD)v621 != 0) {
    v623 = *v35;
    v624 = (unsigned int)(v621 + 1);
    *v35 = v623 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v623) = v621 + 1;
    v625 = *v35;
    *v35 = v625 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v625) = BYTE1(v624);
    if ((v621 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + *v35, v622, v624);
      *v35 += v624;
    }
  }
  else {
    v626 = *v35;
    *v35 = v626 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v626) = 0;
    v627 = *v35;
    *v35 = v627 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v627) = 0;
  }
  v628 = *(unsigned __int8*)(v4 + 3104);
  v629 = (v628 & 1) == 0;
  v630 = v628 >> 1;
  if (v629) {
    v631 = v4 + 3105;
  }
  else {
    v631 = *(_QWORD*)(v4 + 3120);
  }
  v632 = *(_DWORD*)(v4 + 3112);
  if (v629) {
    v632 = v630;
  }
  if (v632 != 0) {
    v633 = *v35;
    v634 = (unsigned int)(v632 + 1);
    *v35 = v633 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v633) = v632 + 1;
    v635 = *v35;
    *v35 = v635 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v635) = BYTE1(v634);
    v636 = *v35;
    if ((v632 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v636, v631, v634);
      v636 = *v35 + v634;
      *v35 = v636;
    }
  }
  else {
    v637 = *v35;
    *v35 = v637 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v637) = 0;
    v638 = *v35;
    *v35 = v638 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v638) = 0;
    v636 = *v35;
  }
  v639 = *(_BYTE*)(v4 + 2816);
  *v35 = v636 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v636) = v639;
  v640 = *v35;
  v641 = *(float*)(v4 + 2892);
  *v35 = v640 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v640) = (int)v641;
  v642 = *v35;
  *v35 = v642 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v642) = (unsigned __int16)(int)v641 >> 8;
  v643 = *v35;
  *v35 = v643 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v643) = (unsigned int)(int)v641 >> 16;
  v644 = *v35;
  *v35 = v644 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v644) = (unsigned int)(int)v641 >> 24;
  v645 = *v35;
  v646 = *(_DWORD*)(v4 + 2852);
  *v35 = v645 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v645) = v646;
  v647 = *(unsigned __int8*)(v4 + 2856);
  v648 = (v647 & 1) == 0;
  v649 = v647 >> 1;
  if (v648) {
    v650 = v4 + 2857;
  }
  else {
    v650 = *(_QWORD*)(v4 + 2872);
  }
  v651 = *(_DWORD*)(v4 + 2864);
  if (v648) {
    v651 = v649;
  }
  if (v651 != 0) {
    v652 = *v35;
    v653 = (unsigned int)(v651 + 1);
    *v35 = v652 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v652) = v651 + 1;
    v654 = *v35;
    *v35 = v654 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v654) = BYTE1(v653);
    v655 = *v35;
    if ((v651 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v655, v650, v653);
      v655 = *v35 + v653;
      *v35 = v655;
    }
  }
  else {
    v656 = *v35;
    *v35 = v656 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v656) = 0;
    v657 = *v35;
    *v35 = v657 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v657) = 0;
    v655 = *v35;
  }
  v658 = *(_DWORD*)(v4 + 2880);
  *v35 = v655 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v655) = v658;
  v659 = *v35;
  v660 = *(_DWORD*)(v4 + 2884);
  *v35 = v659 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v659) = v660;
  v661 = *v35;
  v662 = *(_BYTE*)(v4 + 2888);
  *v35 = v661 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v661) = v662;
  v663 = *(unsigned __int8*)(v4 + 2896);
  v664 = (v663 & 1) == 0;
  v665 = v663 >> 1;
  if (v664) {
    v666 = v4 + 2897;
  }
  else {
    v666 = *(_QWORD*)(v4 + 2912);
  }
  v667 = *(_DWORD*)(v4 + 2904);
  if (v664) {
    v667 = v665;
  }
  if (v667 != 0) {
    v668 = *v35;
    v669 = (unsigned int)(v667 + 1);
    *v35 = v668 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v668) = v667 + 1;
    v670 = *v35;
    *v35 = v670 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v670) = BYTE1(v669);
    v671 = *v35;
    if ((v667 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v671, v666, v669);
      v671 = *v35 + v669;
      *v35 = v671;
    }
  }
  else {
    v672 = *v35;
    *v35 = v672 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v672) = 0;
    v673 = *v35;
    *v35 = v673 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v673) = 0;
    v671 = *v35;
  }
  v674 = *(float*)(v4 + 2964);
  *v35 = v671 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v671) = (int)v674;
  v675 = *v35;
  *v35 = v675 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v675) = (unsigned __int16)(int)v674 >> 8;
  v676 = *v35;
  *v35 = v676 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v676) = (unsigned int)(int)v674 >> 16;
  v677 = *v35;
  *v35 = v677 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v677) = (unsigned int)(int)v674 >> 24;
  v678 = *v35;
  v679 = *(_DWORD*)(v4 + 2920);
  *v35 = v678 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v678) = v679;
  v680 = *(unsigned __int8*)(v4 + 2928);
  v681 = (v680 & 1) == 0;
  v682 = v680 >> 1;
  if (v681) {
    v683 = v4 + 2929;
  }
  else {
    v683 = *(_QWORD*)(v4 + 2944);
  }
  v684 = *(_DWORD*)(v4 + 2936);
  if (v681) {
    v684 = v682;
  }
  if (v684 != 0) {
    v685 = *v35;
    v686 = (unsigned int)(v684 + 1);
    *v35 = v685 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v685) = v684 + 1;
    v687 = *v35;
    *v35 = v687 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v687) = BYTE1(v686);
    v688 = *v35;
    if ((v684 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v688, v683, v686);
      v688 = *v35 + v686;
      *v35 = v688;
    }
  }
  else {
    v689 = *v35;
    *v35 = v689 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v689) = 0;
    v690 = *v35;
    *v35 = v690 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v690) = 0;
    v688 = *v35;
  }
  v691 = *(_DWORD*)(v4 + 2952);
  *v35 = v688 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v688) = v691;
  v692 = *v35;
  v693 = *(_DWORD*)(v4 + 2956);
  *v35 = v692 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v692) = v693;
  v694 = *v35;
  v695 = *(_BYTE*)(v4 + 2960);
  *v35 = v694 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v694) = v695;
  v696 = *(unsigned __int8*)(v4 + 2968);
  v697 = (v696 & 1) == 0;
  v698 = v696 >> 1;
  if (v697) {
    v699 = v4 + 2969;
  }
  else {
    v699 = *(_QWORD*)(v4 + 2984);
  }
  v700 = *(_DWORD*)(v4 + 2976);
  if (v697) {
    v700 = v698;
  }
  if (v700 != 0) {
    v701 = *v35;
    v702 = (unsigned int)(v700 + 1);
    *v35 = v701 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v701) = v700 + 1;
    v703 = *v35;
    *v35 = v703 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v703) = BYTE1(v702);
    v704 = *v35;
    if ((v700 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)v31 + v704, v699, v702);
      v704 = *v35 + v702;
      *v35 = v704;
    }
  }
  else {
    v705 = *v35;
    *v35 = v705 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v705) = 0;
    v706 = *v35;
    *v35 = v706 + 1;
    *(_BYTE*)(*(_QWORD*)v31 + v706) = 0;
    v704 = *v35;
  }
  v707 = *(_DWORD*)(v4 + 2548);
  *v35 = v704 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v704) = v707;
  v708 = *v35;
  *v35 = v708 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v708) = BYTE1(v707);
  v709 = *v35;
  *v35 = v709 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v709) = BYTE2(v707);
  v710 = HIBYTE(v707);
  v711 = *v35;
  *v35 = v711 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v711) = v710;
  v712 = *v35;
  v713 = *(_DWORD*)(v4 + 2552);
  *v35 = v712 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v712) = v713;
  v714 = *v35;
  *v35 = v714 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v714) = BYTE1(v713);
  v715 = *v35;
  *v35 = v715 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v715) = BYTE2(v713);
  v716 = *v35;
  *v35 = v716 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v716) = HIBYTE(v713);
  v717 = *v35;
  v718 = *(_DWORD*)(v4 + 2556);
  *v35 = v717 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v717) = v718;
  v719 = *v35;
  *v35 = v719 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v719) = BYTE1(v718);
  v720 = *v35;
  *v35 = v720 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v720) = BYTE2(v718);
  v721 = *v35;
  *v35 = v721 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v721) = HIBYTE(v718);
  v722 = *v35;
  v723 = *(_DWORD*)(v4 + 2560);
  *v35 = v722 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v722) = v723;
  v724 = *v35;
  *v35 = v724 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v724) = BYTE1(v723);
  v725 = *v35;
  *v35 = v725 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v725) = BYTE2(v723);
  v726 = *v35;
  *v35 = v726 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v726) = HIBYTE(v723);
  v727 = *v35;
  v728 = *(_DWORD*)(v4 + 2564);
  *v35 = v727 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v727) = v728;
  v729 = *v35;
  *v35 = v729 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v729) = BYTE1(v728);
  v730 = *v35;
  *v35 = v730 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v730) = BYTE2(v728);
  v731 = *v35;
  *v35 = v731 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v731) = HIBYTE(v728);
  v732 = *v35;
  v733 = *(_DWORD*)(v4 + 2568);
  *v35 = v732 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v732) = v733;
  v734 = *v35;
  *v35 = v734 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v734) = BYTE1(v733);
  v735 = *v35;
  *v35 = v735 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v735) = BYTE2(v733);
  v736 = *v35;
  *v35 = v736 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v736) = HIBYTE(v733);
  v737 = *v35;
  v738 = *(_DWORD*)(v4 + 2572);
  *v35 = v737 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v737) = v738;
  v739 = *v35;
  *v35 = v739 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v739) = BYTE1(v738);
  v740 = *v35;
  *v35 = v740 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v740) = BYTE2(v738);
  v741 = *v35;
  *v35 = v741 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v741) = HIBYTE(v738);
  v742 = *v35;
  v743 = *(_DWORD*)(v4 + 2576);
  *v35 = v742 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v742) = v743;
  v744 = *v35;
  *v35 = v744 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v744) = BYTE1(v743);
  v745 = *v35;
  *v35 = v745 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v745) = BYTE2(v743);
  v746 = *v35;
  *v35 = v746 + 1;
  *(_BYTE*)(*(_QWORD*)v31 + v746) = HIBYTE(v743);
  return result;
}

_QWORD* GameManager_a28c50(__int64 a1)
{
  int v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD v14[2];
  _BYTE v15[200];

  if ((snd_BGM_isFirstActive(*(_QWORD*)(a1 + 8)) & 1) == 0) {
    v2 = *(_DWORD*)(a1 + 2180);
    if (v2 >= 1) {
      *(_DWORD*)(a1 + 2172) = v2;
      *(_DWORD*)(a1 + 2176) = *(_DWORD*)(a1 + 2184);
      GameRoutine_a28e10(a1, 1);
    }
    v3 = *(unsigned __int8*)(a1 + 2824);
    if ((v3 & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 2832);
    }
    else {
      v4 = v3 >> 1;
    }
    if (v4 != 0 && (snd_BGM_isFirstActive(*(_QWORD*)(a1 + 8)) & 1) == 0) {
      if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
        v5 = *(_QWORD*)(a1 + 2840);
      }
      else {
        v5 = a1 + 2825;
      }
      snd_Fade_Fade_10c830(v15, 0.0f);
      GameRoutine_a290c0(a1, v5, v15, 0, 0, 0.0f);
      snd_Fade_Destroy_Fade(v15);
      *(struct PseudoSret*)(v14) = snd_BGM_getFirstHandle();
      snd_Fade_Fade_10c830(v15, 0.0f);
      snd_startVolume_1006d0(v14, 0, v15, 1.0f);
      snd_Fade_Destroy_Fade(v15);
      snd_Fade_Fade_10c830(v15, 0.0f);
      snd_startVolume_1006d0(v14, 1, v15, 0.0f);
      snd_Fade_Destroy_Fade(v15);
      snd_Fade_Fade_10c830(v15, 0.0f);
      snd_startVolume_1006d0(v14, 2, v15, 0.0f);
      snd_Fade_Destroy_Fade(v15);
    }
  }
  GameRoutine_a292c0(a1, *(unsigned int*)(a1 + 2752), 1);
  v6 = *(unsigned __int8*)(a1 + 2760);
  result = (_QWORD*)(a1 + 2784);
  if ((*(_BYTE*)(a1 + 2784) & 1) != 0) {
    v10 = (v6 & 1) == 0;
    v11 = v6 >> 1;
    if (v10) {
      v12 = a1 + 2761;
    }
    else {
      v12 = *(_QWORD*)(a1 + 2776);
    }
    if (v10) {
      v13 = v11;
    }
    else {
      v13 = *(_QWORD*)(a1 + 2768);
    }
    result = (_QWORD*)GameRoutine_64dde0(result, v12, v13);
  }
  else if ((v6 & 1) != 0) {
    result = (_QWORD*)GameRoutine_64df20(result, *(_QWORD*)(a1 + 2776),
                                         *(_QWORD*)(a1 + 2768));
  }
  else {
    v8 = *(_QWORD*)(a1 + 2768);
    v9 = *(_QWORD*)(a1 + 2776);
    *result = *(_QWORD*)(a1 + 2760);
    *(_QWORD*)(a1 + 2792) = v8;
    *(_QWORD*)(a1 + 2800) = v9;
  }
  *(_BYTE*)(a1 + 610) = 1;
  return result;
}

__int64 GameManager_a2a3a0(__int64 result)
{
  __int64 i;
  _BYTE* v2;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  _BYTE* v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  _BYTE* v23;
  _BYTE* v24;
  _BYTE* v25;
  char v26;
  _BYTE* v27;

  for (i = 0; i != 768; i += 96) {
    v3 = result + i;
    if ((*(_BYTE*)(result + i + 712) & 1) != 0) {
      *(_QWORD*)(v3 + 720) = 0;
      v4 = *(_BYTE**)(v3 + 728);
    }
    else {
      *(_BYTE*)(v3 + 712) = 0;
      v4 = (_BYTE*)(v3 + 713);
    }
    *v4 = 0;
    v5 = result + i;
    if ((*(_BYTE*)(result + i + 736) & 1) != 0) {
      *(_QWORD*)(v5 + 744) = 0;
      v6 = *(_BYTE**)(v5 + 752);
    }
    else {
      *(_BYTE*)(v5 + 736) = 0;
      v6 = (_BYTE*)(v5 + 737);
    }
    *v6 = 0;
    v7 = result + i;
    if ((*(_BYTE*)(result + i + 760) & 1) != 0) {
      *(_QWORD*)(v7 + 768) = 0;
      v8 = *(_BYTE**)(v7 + 776);
    }
    else {
      *(_BYTE*)(v7 + 760) = 0;
      v8 = (_BYTE*)(v7 + 761);
    }
    *v8 = 0;
    v9 = result + i;
    if ((*(_BYTE*)(result + i + 784) & 1) != 0) {
      *(_QWORD*)(v9 + 792) = 0;
      v2 = *(_BYTE**)(v9 + 800);
    }
    else {
      *(_BYTE*)(v9 + 784) = 0;
      v2 = (_BYTE*)(v9 + 785);
    }
    *v2 = 0;
  }
  *(_BYTE*)(result + 1480) = 10;
  if ((*(_BYTE*)(result + 1488) & 1) != 0) {
    v10 = *(_BYTE**)(result + 1504);
    *(_QWORD*)(result + 1496) = 0;
  }
  else {
    v10 = (_BYTE*)(result + 1489);
    *(_BYTE*)(result + 1488) = 0;
  }
  *v10 = 0;
  *(_BYTE*)(result + 1512) = 10;
  if ((*(_BYTE*)(result + 1520) & 1) != 0) {
    v11 = *(_BYTE**)(result + 1536);
    *(_QWORD*)(result + 1528) = 0;
  }
  else {
    v11 = (_BYTE*)(result + 1521);
    *(_BYTE*)(result + 1520) = 0;
  }
  *v11 = 0;
  *(_BYTE*)(result + 1544) = 10;
  if ((*(_BYTE*)(result + 1552) & 1) != 0) {
    v12 = *(_BYTE**)(result + 1568);
    *(_QWORD*)(result + 1560) = 0;
  }
  else {
    v12 = (_BYTE*)(result + 1553);
    *(_BYTE*)(result + 1552) = 0;
  }
  *v12 = 0;
  *(_BYTE*)(result + 1576) = 10;
  if ((*(_BYTE*)(result + 1584) & 1) != 0) {
    v13 = *(_BYTE**)(result + 1600);
    *(_QWORD*)(result + 1592) = 0;
  }
  else {
    v13 = (_BYTE*)(result + 1585);
    *(_BYTE*)(result + 1584) = 0;
  }
  *v13 = 0;
  *(_BYTE*)(result + 1608) = 10;
  if ((*(_BYTE*)(result + 1616) & 1) != 0) {
    v14 = *(_BYTE**)(result + 1632);
    *(_QWORD*)(result + 1624) = 0;
  }
  else {
    v14 = (_BYTE*)(result + 1617);
    *(_BYTE*)(result + 1616) = 0;
  }
  *v14 = 0;
  *(_BYTE*)(result + 1640) = 10;
  if ((*(_BYTE*)(result + 1648) & 1) != 0) {
    v15 = *(_BYTE**)(result + 1664);
    *(_QWORD*)(result + 1656) = 0;
  }
  else {
    v15 = (_BYTE*)(result + 1649);
    *(_BYTE*)(result + 1648) = 0;
  }
  *v15 = 0;
  *(_BYTE*)(result + 1672) = 10;
  if ((*(_BYTE*)(result + 1680) & 1) != 0) {
    v16 = *(_BYTE**)(result + 1696);
    *(_QWORD*)(result + 1688) = 0;
  }
  else {
    v16 = (_BYTE*)(result + 1681);
    *(_BYTE*)(result + 1680) = 0;
  }
  *v16 = 0;
  *(_BYTE*)(result + 1704) = 10;
  if ((*(_BYTE*)(result + 1712) & 1) != 0) {
    v17 = *(_BYTE**)(result + 1728);
    *(_QWORD*)(result + 1720) = 0;
  }
  else {
    v17 = (_BYTE*)(result + 1713);
    *(_BYTE*)(result + 1712) = 0;
  }
  *v17 = 0;
  *(_BYTE*)(result + 1736) = 10;
  if ((*(_BYTE*)(result + 1744) & 1) != 0) {
    v18 = *(_BYTE**)(result + 1760);
    *(_QWORD*)(result + 1752) = 0;
  }
  else {
    v18 = (_BYTE*)(result + 1745);
    *(_BYTE*)(result + 1744) = 0;
  }
  *v18 = 0;
  *(_BYTE*)(result + 1768) = 10;
  if ((*(_BYTE*)(result + 1776) & 1) != 0) {
    v19 = *(_BYTE**)(result + 1792);
    *(_QWORD*)(result + 1784) = 0;
  }
  else {
    v19 = (_BYTE*)(result + 1777);
    *(_BYTE*)(result + 1776) = 0;
  }
  *v19 = 0;
  *(_BYTE*)(result + 1800) = 10;
  if ((*(_BYTE*)(result + 1808) & 1) != 0) {
    v20 = *(_BYTE**)(result + 1824);
    *(_QWORD*)(result + 1816) = 0;
  }
  else {
    v20 = (_BYTE*)(result + 1809);
    *(_BYTE*)(result + 1808) = 0;
  }
  *v20 = 0;
  *(_BYTE*)(result + 1832) = 10;
  if ((*(_BYTE*)(result + 1840) & 1) != 0) {
    v21 = *(_BYTE**)(result + 1856);
    *(_QWORD*)(result + 1848) = 0;
  }
  else {
    v21 = (_BYTE*)(result + 1841);
    *(_BYTE*)(result + 1840) = 0;
  }
  *v21 = 0;
  *(_BYTE*)(result + 1864) = 10;
  if ((*(_BYTE*)(result + 1872) & 1) != 0) {
    v22 = *(_BYTE**)(result + 1888);
    *(_QWORD*)(result + 1880) = 0;
  }
  else {
    v22 = (_BYTE*)(result + 1873);
    *(_BYTE*)(result + 1872) = 0;
  }
  *v22 = 0;
  *(_BYTE*)(result + 1896) = 10;
  if ((*(_BYTE*)(result + 1904) & 1) != 0) {
    v23 = *(_BYTE**)(result + 1920);
    *(_QWORD*)(result + 1912) = 0;
  }
  else {
    v23 = (_BYTE*)(result + 1905);
    *(_BYTE*)(result + 1904) = 0;
  }
  *v23 = 0;
  *(_BYTE*)(result + 1928) = 10;
  if ((*(_BYTE*)(result + 1936) & 1) != 0) {
    v24 = *(_BYTE**)(result + 1952);
    *(_QWORD*)(result + 1944) = 0;
  }
  else {
    v24 = (_BYTE*)(result + 1937);
    *(_BYTE*)(result + 1936) = 0;
  }
  *v24 = 0;
  *(_BYTE*)(result + 1960) = 10;
  if ((*(_BYTE*)(result + 1968) & 1) != 0) {
    v25 = *(_BYTE**)(result + 1984);
    *(_QWORD*)(result + 1976) = 0;
  }
  else {
    v25 = (_BYTE*)(result + 1969);
    *(_BYTE*)(result + 1968) = 0;
  }
  *v25 = 0;
  *(_QWORD*)(result + 2180) = 0;
  v26 = *(_BYTE*)(result + 2456);
  *(_DWORD*)(result + 2176) = -1;
  *(_QWORD*)(result + 2168) = -1;
  *(_QWORD*)(result + 2160) = -1;
  *(_QWORD*)(result + 2152) = -1;
  *(_QWORD*)(result + 2144) = -1;
  *(_QWORD*)(result + 2136) = -1;
  *(_QWORD*)(result + 2128) = -1;
  *(_QWORD*)(result + 2120) = -1;
  *(_QWORD*)(result + 2112) = -1;
  *(_QWORD*)(result + 2104) = -1;
  *(_QWORD*)(result + 2096) = -1;
  *(_QWORD*)(result + 2088) = -1;
  *(_QWORD*)(result + 2080) = -1;
  *(_QWORD*)(result + 2072) = -1;
  *(_QWORD*)(result + 2064) = -1;
  *(_QWORD*)(result + 2056) = -1;
  *(_QWORD*)(result + 2048) = -1;
  *(_QWORD*)(result + 2040) = -1;
  *(_QWORD*)(result + 2032) = -1;
  *(_QWORD*)(result + 2024) = -1;
  *(_QWORD*)(result + 2016) = -1;
  *(_QWORD*)(result + 2008) = -1;
  *(_QWORD*)(result + 2000) = -1;
  *(_QWORD*)(result + 1992) = -1;
  *(_DWORD*)(result + 2188) = -1;
  if ((v26 & 1) != 0) {
    v27 = *(_BYTE**)(result + 2472);
    *(_QWORD*)(result + 2464) = 0;
  }
  else {
    v27 = (_BYTE*)(result + 2457);
    *(_BYTE*)(result + 2456) = 0;
  }
  *v27 = 0;
  *(_DWORD*)(result + 2480) = 0;
  *(_BYTE*)(result + 652) = 0;
  return result;
}

__int64 GameManager_a2adb0(__int64 a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  long double v11;
  __int64 result;
  __int64 v13;
  long double v14;
  _BYTE* v15;

  if ((snd_fnd_WeakHandle_isValid(a1 + 344) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1 + 344);
    v5 = ((long double (*)(__int64, __int64, _QWORD, double)) *
          (_QWORD*)(*(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, a2, 0, 0.0);
    snd_fnd_WeakHandle_reset(a1 + 344, v5);
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 360) & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get(a1 + 360);
    v7 = ((long double (*)(__int64, __int64, _QWORD, double)) *
          (_QWORD*)(*(_QWORD*)(v6 - 5592) + 248LL))(v6 - 5592, a2, 0, 0.0);
    snd_fnd_WeakHandle_reset(a1 + 360, v7);
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 376) & 1) != 0) {
    v8 = snd_fnd_WeakHandle_get(a1 + 376);
    v9 = ((long double (*)(__int64, __int64, _QWORD, double)) *
          (_QWORD*)(*(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, a2, 0, 0.0);
    snd_fnd_WeakHandle_reset(a1 + 376, v9);
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 392) & 1) != 0) {
    v10 = snd_fnd_WeakHandle_get(a1 + 392);
    v11 = ((long double (*)(__int64, __int64, _QWORD, double)) *
           (_QWORD*)(*(_QWORD*)(v10 - 5592) + 248LL))(v10 - 5592, a2, 0, 0.0);
    snd_fnd_WeakHandle_reset(a1 + 392, v11);
  }
  result = snd_fnd_WeakHandle_isValid(a1 + 408);
  if ((result & 1) != 0) {
    v13 = snd_fnd_WeakHandle_get(a1 + 408);
    v14 = ((long double (*)(__int64, __int64, _QWORD, double)) *
           (_QWORD*)(*(_QWORD*)(v13 - 5592) + 248LL))(v13 - 5592, a2, 0, 0.0);
    result = snd_fnd_WeakHandle_reset(a1 + 408, v14);
  }
  if ((*(_BYTE*)(a1 + 3048) & 1) != 0) {
    v15 = *(_BYTE**)(a1 + 3064);
    *(_QWORD*)(a1 + 3056) = 0;
  }
  else {
    v15 = (_BYTE*)(a1 + 3049);
    *(_BYTE*)(a1 + 3048) = 0;
  }
  *v15 = 0;
  return result;
}

__int64 GameManager_a2bd50(__int64 a1, __int64 a2, char a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;

  v11 = snd_fnd_calcCrc32(a2, 0);
  v5 = snd_data_findFieldData(&v11);
  if (v5 == 0) {
    v11 = snd_fnd_calcCrc32("DEFAULT_FIELD", 0);
    v10 = snd_data_findSurroundData(&v11);
    *(_QWORD*)(a1 + 136) = v10;
    if (v10 != 0) {
      snd_setListenerSurround_100980();
    }
    goto LABEL_18;
  }
  v6 = v5;
  *(_QWORD*)(a1 + 136) = 0;
  if ((a3 & 1) == 0 || *(_DWORD*)(v5 + 88) == 0 ||
      (v11 = *(_DWORD*)(v5 + 88), v7 = snd_data_findSurroundData(&v11),
       *(_QWORD*)(a1 + 136) = v7, v7 == 0) ||
      (result = snd_setListenerSurround_100980(), *(_QWORD*)(a1 + 136) == 0)) {
    if (*(_DWORD*)(v6 + 84) == 0 ||
        (v11 = *(_DWORD*)(v6 + 84), v9 = snd_data_findSurroundData(&v11),
         *(_QWORD*)(a1 + 136) = v9, v9 == 0) ||
        (result = snd_setListenerSurround_100980(),
         *(_QWORD*)(a1 + 136) == 0)) {
      v11 = snd_fnd_calcCrc32("DEFAULT_FIELD", 0);
      result = snd_data_findSurroundData(&v11);
      *(_QWORD*)(a1 + 136) = result;
      if (result != 0) {
        result = snd_setListenerSurround_100980();
      }
    }
  }
  if (*(_DWORD*)(v6 + 92) != 0) {
    v11 = *(_DWORD*)(v6 + 92);
    result = snd_data_findSurroundData(&v11);
    *(_QWORD*)(a1 + 144) = result;
    if (result != 0) {
      result = snd_setVibrationSurround_101640();
    }
  }
  if (*(_QWORD*)(a1 + 144) == 0) {
  LABEL_18:
    v11 = snd_fnd_calcCrc32("VIBRATION_FIELD", 0);
    result = snd_data_findSurroundData(&v11);
    *(_QWORD*)(a1 + 144) = result;
    if (result != 0) {
      return snd_setVibrationSurround_101640();
    }
  }
  return result;
}

__int64 GameManager_a2c3b0(__int64 a1, const char* a2, const char* a3, char a4,
                           char a5, char a6, __int64 a7)
{
  const char* v7;
  char* v14;
  _DWORD v16[64];
  int v17;

  v7 = a2;
  if ((unsigned int)strcmp(a2, "Hub_000_A70") == 0 &&
      game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    snprintf(&GameData_21faa70, 256, "%s_P3S%d", v7,
             *(_DWORD*)(game_GameModeData_instance_ + 64));
    v16[0] = snd_fnd_calcCrc32(&GameData_21faa70, 0);
    if (snd_data_findFieldData(v16) != 0) {
      v7 = (const char*)&GameData_21faa70;
    }
  }
  snprintf(v16, 256, "%s_%s", v7, a3);
  v17 = snd_fnd_calcCrc32(v16, 0);
  if (snd_data_findFieldData(&v17) != 0) {
    v14 = (char*)v16;
  }
  else {
    v14 = (char*)v7;
  }
  return (*(__int64 (**)(__int64, char*, _QWORD, _QWORD, _QWORD, __int64))(
      *(_QWORD*)a1 + 112LL))(a1, v14, a4 & 1, a5 & 1, a6 & 1, a7);
}

_QWORD* GameManager_a2c820(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v6;
  _BYTE* v7;
  _QWORD* result;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _BYTE* v14;
  int v15;

  GameManager_a2c910();
  if ((a3 & 1) != 0) {
    GameRoutine_a2c9c0(a1, a2);
  }
  v6 = *(unsigned __int8*)(a1 + 2760);
  v7 = (_BYTE*)(a1 + 2760);
  result = (_QWORD*)(a1 + 2784);
  if ((*(_BYTE*)(a1 + 2784) & 1) != 0) {
    v10 = (v6 & 1) == 0;
    v11 = v6 >> 1;
    if (v10) {
      v12 = a1 + 2761;
    }
    else {
      v12 = *(_QWORD*)(a1 + 2776);
    }
    if (v10) {
      v13 = v11;
    }
    else {
      v13 = *(_QWORD*)(a1 + 2768);
    }
    result = (_QWORD*)GameRoutine_64dde0(result, v12, v13);
    if ((*v7 & 1) != 0) {
      goto LABEL_16;
    }
  }
  else if ((v6 & 1) != 0) {
    result = (_QWORD*)GameRoutine_64df20(result, *(_QWORD*)(a1 + 2776),
                                         *(_QWORD*)(a1 + 2768));
    if ((*v7 & 1) != 0) {
    LABEL_16:
      v14 = *(_BYTE**)(a1 + 2776);
      *(_QWORD*)(a1 + 2768) = 0;
      goto LABEL_17;
    }
  }
  else {
    v9 = *(_QWORD*)(a1 + 2768);
    *result = *(_QWORD*)v7;
    *(_QWORD*)(a1 + 2792) = v9;
    *(_QWORD*)(a1 + 2800) = *(_QWORD*)(a1 + 2776);
    if ((*v7 & 1) != 0) {
      goto LABEL_16;
    }
  }
  v14 = (_BYTE*)(a1 + 2761);
  *(_BYTE*)(a1 + 2760) = 0;

LABEL_17:
  *v14 = 0;
  *(_DWORD*)(a1 + 2480) = 0;
  v15 = *(_DWORD*)(a1 + 2752);
  *(_DWORD*)(a1 + 2752) = 0;
  *(_QWORD*)(a1 + 2808) = 0;
  *(_BYTE*)(a1 + 2816) = 0;
  *(_DWORD*)(a1 + 2756) = v15;
  return result;
}

__int64 GameManager_a2cab0(__int64 result, __int64 a2, _BYTE* a3, float a4)
{
  __int64 v4;
  char v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  float v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;

  if (*(int*)(result + 616) > 0) {
    return result;
  }
  v4 = result;
  v5 = *(_BYTE*)(result + 2656);
  v6 = *(unsigned __int8*)(result + 2608);
  v7 = (_QWORD*)(result + 2656);
  if ((v5 & 1) != 0) {
    v12 = *(_QWORD*)(v4 + 2624);
    v13 = (v6 & 1) == 0;
    v14 = v6 >> 1;
    v15 = a2;
    v16 = a4;
    if (v13) {
      v12 = v4 + 2609;
      v17 = v14;
    }
    else {
      v17 = *(_QWORD*)(v4 + 2616);
    }
    GameRoutine_64dde0(v7, v12, v17);
  LABEL_11:
    a2 = v15;
    a4 = v16;
    if ((*(_BYTE*)(v4 + 2680) & 1) != 0) {
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  if ((v6 & 1) != 0) {
    v15 = a2;
    v16 = a4;
    GameRoutine_64df20(v7, *(_QWORD*)(v4 + 2624), *(_QWORD*)(v4 + 2616));
    goto LABEL_11;
  }
  v9 = *(_QWORD*)(v4 + 2616);
  v10 = *(_QWORD*)(v4 + 2624);
  *v7 = *(_QWORD*)(v4 + 2608);
  v7[1] = v9;
  v7[2] = v10;
  if ((*(_BYTE*)(v4 + 2680) & 1) != 0) {
  LABEL_5:
    v11 = *(_BYTE**)(v4 + 2696);
    *(_QWORD*)(v4 + 2688) = 0;
    goto LABEL_13;
  }

LABEL_12:
  v11 = (_BYTE*)(v4 + 2681);
  *(_BYTE*)(v4 + 2680) = 0;

LABEL_13:
  *v11 = 0;
  *(_BYTE*)(v4 + 652) = 0;
  GameManager_a2c6e0(v4, a2, a3, a4);
  if (a3 == nullptr || *a3 == 0) {
    v18 = snd_BGM_getFirstName(*(_QWORD*)(v4 + 8));
    if (v18 != 0) {
      v19 = (char*)v18;
    }
    else {
      v19 = &GameData_1a9f09e;
    }
    GameRoutine_60a020(v4 + 2824, v19);
  }
  result = GameManager_a2cc00(v4, a3);
  ++*(_DWORD*)(v4 + 616);
  return result;
}

__int64 GameManager_a2cc00(__int64 result, _BYTE* a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
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
  int v26;

  if (a2 != nullptr && *a2 != 0) {
    v3 = result;
    GameRoutine_60a020(result + 2456, a2);
    v4 = v3 + 712;
    result = strlen(a2);
    v5 = (_QWORD*)(v3 + 728);
    v6 = result;
    v7 = 0;
    while (1) {
      v8 = *((_BYTE*)v5 - 16) >> 1;
      if ((*(_BYTE*)(v5 - 2) & 1) != 0) {
        v8 = *(v5 - 1);
      }
      if (v6 == v8) {
        if (v6 == -1) {
          GameRoutine_60a230();
        }
        v9 = (*(_BYTE*)(v5 - 2) & 1) != 0 ? (_QWORD*)*v5
                                          : (_QWORD*)((char*)v5 - 15);
        result = memcmp(v9, a2, v6);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      ++v7;
      v5 += 3;
      if (v7 == 32) {
        if ((*(_BYTE*)(v3 + 712) & 1) != 0) {
          v10 = *(_QWORD*)(v3 + 720);
        }
        else {
          v10 = *(_BYTE*)(v3 + 712) >> 1;
        }
        if (v10 != 0) {
          if ((*(_BYTE*)(v3 + 736) & 1) != 0) {
            v11 = *(_QWORD*)(v3 + 744);
          }
          else {
            v11 = *(_BYTE*)(v3 + 736) >> 1;
          }
          if (v11 != 0) {
            if ((*(_BYTE*)(v3 + 760) & 1) != 0) {
              v12 = *(_QWORD*)(v3 + 768);
            }
            else {
              v12 = *(_BYTE*)(v3 + 760) >> 1;
            }
            if (v12 != 0) {
              if ((*(_BYTE*)(v3 + 784) & 1) != 0) {
                v13 = *(_QWORD*)(v3 + 792);
              }
              else {
                v13 = *(_BYTE*)(v3 + 784) >> 1;
              }
              if (v13 != 0) {
                if ((*(_BYTE*)(v3 + 808) & 1) != 0) {
                  v14 = *(_QWORD*)(v3 + 816);
                }
                else {
                  v14 = *(_BYTE*)(v3 + 808) >> 1;
                }
                if (v14 != 0) {
                  if ((*(_BYTE*)(v3 + 832) & 1) != 0) {
                    v15 = *(_QWORD*)(v3 + 840);
                  }
                  else {
                    v15 = *(_BYTE*)(v3 + 832) >> 1;
                  }
                  if (v15 != 0) {
                    if ((*(_BYTE*)(v3 + 856) & 1) != 0) {
                      v16 = *(_QWORD*)(v3 + 864);
                    }
                    else {
                      v16 = *(_BYTE*)(v3 + 856) >> 1;
                    }
                    if (v16 != 0) {
                      if ((*(_BYTE*)(v3 + 880) & 1) != 0) {
                        v17 = *(_QWORD*)(v3 + 888);
                      }
                      else {
                        v17 = *(_BYTE*)(v3 + 880) >> 1;
                      }
                      if (v17 != 0) {
                        if ((*(_BYTE*)(v3 + 904) & 1) != 0) {
                          v18 = *(_QWORD*)(v3 + 912);
                        }
                        else {
                          v18 = *(_BYTE*)(v3 + 904) >> 1;
                        }
                        if (v18 != 0) {
                          if ((*(_BYTE*)(v3 + 928) & 1) != 0) {
                            v19 = *(_QWORD*)(v3 + 936);
                          }
                          else {
                            v19 = *(_BYTE*)(v3 + 928) >> 1;
                          }
                          if (v19 != 0) {
                            if ((*(_BYTE*)(v3 + 952) & 1) != 0) {
                              v20 = *(_QWORD*)(v3 + 960);
                            }
                            else {
                              v20 = *(_BYTE*)(v3 + 952) >> 1;
                            }
                            if (v20 != 0) {
                              if ((*(_BYTE*)(v3 + 976) & 1) != 0) {
                                v21 = *(_QWORD*)(v3 + 984);
                              }
                              else {
                                v21 = *(_BYTE*)(v3 + 976) >> 1;
                              }
                              if (v21 != 0) {
                                if ((*(_BYTE*)(v3 + 1000) & 1) != 0) {
                                  v22 = *(_QWORD*)(v3 + 1008);
                                }
                                else {
                                  v22 = *(_BYTE*)(v3 + 1000) >> 1;
                                }
                                if (v22 != 0) {
                                  if ((*(_BYTE*)(v3 + 1024) & 1) != 0) {
                                    v23 = *(_QWORD*)(v3 + 1032);
                                  }
                                  else {
                                    v23 = *(_BYTE*)(v3 + 1024) >> 1;
                                  }
                                  if (v23 != 0) {
                                    if ((*(_BYTE*)(v3 + 1048) & 1) != 0) {
                                      v24 = *(_QWORD*)(v3 + 1056);
                                    }
                                    else {
                                      v24 = *(_BYTE*)(v3 + 1048) >> 1;
                                    }
                                    if (v24 != 0) {
                                      if ((*(_BYTE*)(v3 + 1072) & 1) != 0) {
                                        v25 = *(_QWORD*)(v3 + 1080);
                                      }
                                      else {
                                        v25 = *(_BYTE*)(v3 + 1072) >> 1;
                                      }
                                      if (v25 != 0) {
                                        LODWORD(v7) = -1;
                                        break;
                                      }
                                      v4 = v3 + 1072;
                                      LODWORD(v7) = 15;
                                    }
                                    else {
                                      v4 = v3 + 1048;
                                      LODWORD(v7) = 14;
                                    }
                                  }
                                  else {
                                    v4 = v3 + 1024;
                                    LODWORD(v7) = 13;
                                  }
                                }
                                else {
                                  v4 = v3 + 1000;
                                  LODWORD(v7) = 12;
                                }
                              }
                              else {
                                v4 = v3 + 976;
                                LODWORD(v7) = 11;
                              }
                            }
                            else {
                              v4 = v3 + 952;
                              LODWORD(v7) = 10;
                            }
                          }
                          else {
                            v4 = v3 + 928;
                            LODWORD(v7) = 9;
                          }
                        }
                        else {
                          v4 = v3 + 904;
                          LODWORD(v7) = 8;
                        }
                      }
                      else {
                        v4 = v3 + 880;
                        LODWORD(v7) = 7;
                      }
                    }
                    else {
                      v4 = v3 + 856;
                      LODWORD(v7) = 6;
                    }
                  }
                  else {
                    v4 = v3 + 832;
                    LODWORD(v7) = 5;
                  }
                }
                else {
                  v4 = v3 + 808;
                  LODWORD(v7) = 4;
                }
              }
              else {
                v4 = v3 + 784;
                LODWORD(v7) = 3;
              }
            }
            else {
              v4 = v3 + 760;
              LODWORD(v7) = 2;
            }
          }
          else {
            v4 = v3 + 736;
            LODWORD(v7) = 1;
          }
        }
        else {
          LODWORD(v7) = 0;
        }
        result = GameRoutine_60a020(v4, a2);
        break;
      }
    }
    v26 = *(_DWORD*)(v3 + 2192);
    *(_DWORD*)(v3 + 2188) = v7;
    if (v26 < 0) {
      *(_DWORD*)(v3 + 2192) = v7;
    }
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x10000u;
    }
  }
  return result;
}

__int64 GameManager_a2cf60(__int64 result, __int64 a2, _BYTE* a3, float a4)
{
  __int64 v4;
  unsigned __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v4 = result;
  if (*(int*)(result + 620) < 1) {
    GameManager_a2c6e0(result, a2, a3, a4);
    ++*(_DWORD*)(v4 + 620);
    return GameRoutine_a292c0(v4, 6, 0);
  }
  else {
    v5 = *(unsigned __int8*)(result + 2856);
    v6 = (v5 & 1) == 0;
    v7 = v5 >> 1;
    if (v6) {
      v8 = result + 2857;
    }
    else {
      v8 = *(_QWORD*)(result + 2872);
    }
    if (!v6) {
      v7 = *(_QWORD*)(result + 2864);
    }
    if (v7 >= 5) {
      v9 = v8 + v7;
      result = v8;
      do {
        result = memchr(result, 71, v7 - 4);
        if (result == 0) {
          break;
        }
        if (*(_DWORD*)result == 1885433159 && *(_BYTE*)(result + 4) == 95) {
          if (result != v9 && result - v8 != -1) {
            return GameManager_a2d080(v4);
          }
          return result;
        }
        ++result;
        v7 = v9 - result;
      } while (v9 - result >= 5);
    }
  }
  return result;
}

_QWORD* GameManager_a2d8b0(_QWORD* result, __int64 a2, char a3, char a4)
{
  int v4;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;

  v4 = *((_DWORD*)result + 157);
  if (v4 != 0) {
    v6 = (__int64)result;
    *((_DWORD*)result + 157) = v4 - 1;
    if ((a3 & 1) != 0 && (a4 & 1) != 0) {
      v7 = a2;
      v8 = snd_BGM_getFirstPlayPosition(result[1]);
      a2 = v7;
      if (v8 > 0.0) {
        v9 = v8;
        v10 = snd_Fade_getTime(v7);
        v11 = *(_QWORD*)(v6 + 8);
        *(float*)(v6 + 3020) = v9 + v10;
        v12 = snd_BGM_getFirstName(v11);
        GameRoutine_60a020(v6 + 3024, v12);
        a2 = v7;
      }
    }
    return GameManager_a2c820(v6, a2, a3 & 1);
  }
  return result;
}

__int64 GameManager_a2f490(__int64 a1)
{
  char v2;
  unsigned __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;

  v2 = *(_BYTE*)(a1 + 2784);
  v3 = *(unsigned __int8*)(a1 + 2760);
  v4 = a1 + 2760;
  v5 = (_QWORD*)(a1 + 2784);
  if ((v2 & 1) != 0) {
    v7 = (v3 & 1) == 0;
    v8 = v3 >> 1;
    if (v7) {
      v9 = a1 + 2761;
    }
    else {
      v9 = *(_QWORD*)(a1 + 2776);
    }
    if (v7) {
      v10 = v8;
    }
    else {
      v10 = *(_QWORD*)(a1 + 2768);
    }
    GameRoutine_64dde0(v5, v9, v10);
    if ((*(_BYTE*)v4 & 1) != 0) {
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  if ((v3 & 1) == 0) {
    v6 = *(_QWORD*)(v4 + 8);
    *v5 = *(_QWORD*)v4;
    v5[1] = v6;
    v5[2] = *(_QWORD*)(v4 + 16);
    if ((*(_BYTE*)v4 & 1) != 0) {
      goto LABEL_14;
    }
  LABEL_12:
    *(_BYTE*)(a1 + 2760) = 26;
    v11 = (char*)(a1 + 2761);
    goto LABEL_15;
  }
  GameRoutine_64df20(v5, *(_QWORD*)(a1 + 2776), *(_QWORD*)(a1 + 2768));
  if ((*(_BYTE*)v4 & 1) == 0) {
    goto LABEL_12;
  }

LABEL_14:
  *(_QWORD*)(a1 + 2768) = 13;
  v11 = *(char**)(a1 + 2776);

LABEL_15:
  strcpy(v11, "Chapter_Title");
  if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 2776);
  }
  else {
    v12 = a1 + 2761;
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 128LL))(a1, v12);
  if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 2776);
  }
  else {
    v13 = a1 + 2761;
  }
  GameManager_a2bd50(a1, v13, 0);
  return GameManager_a22bd0();
}

__int64 GameManager_a30ab0(__int64 result, _BYTE* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (a2 == nullptr || *a2 == 0) {
    return result;
  }
  if ((*(_BYTE*)(result + 424) & 1) != 0) {
    v2 = *(_QWORD*)(result + 432);
  }
  else {
    v2 = *(_BYTE*)(result + 424) >> 1;
  }
  if (v2 == 0) {
    v6 = result + 424;
    return GameRoutine_60a020(v6, a2);
  }
  if ((*(_BYTE*)(result + 448) & 1) != 0) {
    v3 = *(_QWORD*)(result + 456);
  }
  else {
    v3 = *(_BYTE*)(result + 448) >> 1;
  }
  if (v3 == 0) {
    v6 = result + 448;
    return GameRoutine_60a020(v6, a2);
  }
  if ((*(_BYTE*)(result + 472) & 1) != 0) {
    v4 = *(_QWORD*)(result + 480);
  }
  else {
    v4 = *(_BYTE*)(result + 472) >> 1;
  }
  if (v4 == 0) {
    v6 = result + 472;
    return GameRoutine_60a020(v6, a2);
  }
  if ((*(_BYTE*)(result + 496) & 1) != 0) {
    v5 = *(_QWORD*)(result + 504);
  }
  else {
    v5 = *(_BYTE*)(result + 496) >> 1;
  }
  if (v5 == 0) {
    v6 = result + 496;
    return GameRoutine_60a020(v6, a2);
  }
  return result;
}

__int64 GameManager_a30b40(__int64 a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  long double v9;
  __int64 result;
  __int64 v11;
  long double v12;

  if ((snd_fnd_WeakHandle_isValid(a1 + 360) & 1) != 0) {
    v4 = snd_fnd_WeakHandle_get(a1 + 360);
    v5 = ((long double (*)(__int64, __int64, _QWORD, double)) *
          (_QWORD*)(*(_QWORD*)(v4 - 5592) + 248LL))(v4 - 5592, a2, 0, 0.0);
    snd_fnd_WeakHandle_reset(a1 + 360, v5);
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 376) & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get(a1 + 376);
    v7 = ((long double (*)(__int64, __int64, _QWORD, double)) *
          (_QWORD*)(*(_QWORD*)(v6 - 5592) + 248LL))(v6 - 5592, a2, 0, 0.0);
    snd_fnd_WeakHandle_reset(a1 + 376, v7);
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 392) & 1) != 0) {
    v8 = snd_fnd_WeakHandle_get(a1 + 392);
    v9 = ((long double (*)(__int64, __int64, _QWORD, double)) *
          (_QWORD*)(*(_QWORD*)(v8 - 5592) + 248LL))(v8 - 5592, a2, 0, 0.0);
    snd_fnd_WeakHandle_reset(a1 + 392, v9);
  }
  result = snd_fnd_WeakHandle_isValid(a1 + 408);
  if ((result & 1) != 0) {
    v11 = snd_fnd_WeakHandle_get(a1 + 408);
    v12 = ((long double (*)(__int64, __int64, _QWORD, double)) *
           (_QWORD*)(*(_QWORD*)(v11 - 5592) + 248LL))(v11 - 5592, a2, 0, 0.0);
    return snd_fnd_WeakHandle_reset(a1 + 408, v12);
  }
  return result;
}

__int64 GameManager_a31720(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64 result;
  int* v5;
  __int64 v6;

  v2 = a2;
  if (a2 == nullptr) {
    goto LABEL_48;
  }
  if (*a2 == 0) {
    LODWORD(v2) = 0;
  LABEL_48:
    v6 = GameRoutine_8224a0(21);
    return game_VariableManager_SetFlag(v6, (unsigned int)v2);
  }
  v3 = GameRoutine_8224a0(21);
  game_VariableManager_SetFlag(v3, 0);
  if ((unsigned int)strcmp("BGM_B_MAP0", v2) == 0) {
    v5 = &GameData_1fbdc18;
  LABEL_47:
    LODWORD(v2) = *v5;
    goto LABEL_48;
  }
  if ((unsigned int)strcmp("BGM_B_MAP14", v2) == 0) {
    v5 = &GameData_1fbdc28;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP1_Intro", v2) == 0) {
    v5 = &GameData_1fbdc38;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP2_Intro", v2) == 0) {
    v5 = &GameData_1fbdc48;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP3_Intro", v2) == 0) {
    v5 = &GameData_1fbdc58;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP4_Intro", v2) == 0) {
    v5 = &GameData_1fbdc68;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP5_Intro", v2) == 0) {
    v5 = &GameData_1fbdc78;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP6_Intro", v2) == 0) {
    v5 = &GameData_1fbdc88;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP7_Intro", v2) == 0) {
    v5 = &GameData_1fbdc98;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP8", v2) == 0) {
    v5 = &GameData_1fbdca8;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP9", v2) == 0) {
    v5 = &GameData_1fbdcb8;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP18", v2) == 0) {
    v5 = &GameData_1fbdcc8;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP10_Intro", v2) == 0) {
    v5 = &GameData_1fbdcd8;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP11", v2) == 0) {
    v5 = &GameData_1fbdce8;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP15", v2) == 0) {
    v5 = &GameData_1fbdcf8;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP19", v2) == 0) {
    v5 = &GameData_1fbdd08;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP16", v2) == 0) {
    v5 = &GameData_1fbdd18;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP17", v2) == 0) {
    v5 = &GameData_1fbdd28;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP20", v2) == 0) {
    v5 = &GameData_1fbdd38;
    goto LABEL_47;
  }
  if ((unsigned int)strcmp("BGM_B_MAP12", v2) == 0) {
    v5 = &GameData_1fbdd48;
    goto LABEL_47;
  }
  result = strcmp("BGM_B_MAP13_ALL", v2);
  if ((_DWORD)result == 0) {
    v5 = &GameData_1fbdd58;
    goto LABEL_47;
  }
  return result;
}

const char* GameManager_a31a20()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  const char* v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  _BOOL4 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
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

  v0 = GameRoutine_8224a0(21);
  if (game_GameModeData_instance_ != 0 &&
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) != 0 &&
      *(_DWORD*)(v1 + 32) != 0) {
    v2 = GameRoutine_8224a0(21);
    if (game_GameModeData_instance_ != 0 &&
        (v3 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) != 0 &&
        *(_DWORD*)(v3 + 32) == 1) {
      v4 = "BGM_B_MAP0";
    }
    else {
      v12 = GameRoutine_8224a0(21);
      if (game_GameModeData_instance_ != 0 &&
          (v13 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v12)) != 0 &&
          *(_DWORD*)(v13 + 32) == 2) {
        v4 = "BGM_B_MAP14";
      }
      else {
        v14 = GameRoutine_8224a0(21);
        if (game_GameModeData_instance_ != 0 &&
            (v15 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v14)) != 0 &&
            *(_DWORD*)(v15 + 32) == 3) {
          v4 = "BGM_B_MAP1_Intro";
        }
        else {
          v17 = GameRoutine_8224a0(21);
          if (game_GameModeData_instance_ != 0 &&
              (v18 = game_GameVariableTable_Find(
                   *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) != 0 &&
              *(_DWORD*)(v18 + 32) == 4) {
            v4 = "BGM_B_MAP2_Intro";
          }
          else {
            v19 = GameRoutine_8224a0(21);
            if (game_GameModeData_instance_ != 0 &&
                (v19 = game_GameVariableTable_Find(
                     *(_QWORD*)(game_GameModeData_instance_ + 48), v19)) != 0 &&
                *(_DWORD*)(v19 + 32) == 5) {
              v4 = "BGM_B_MAP3_Intro";
            }
            else {
              v20 = GameRoutine_820a30(v19);
              if ((_DWORD)v20 == 6) {
                v4 = "BGM_B_MAP4_Intro";
              }
              else {
                v22 = GameRoutine_820a30(v20);
                if ((_DWORD)v22 == 7) {
                  v4 = "BGM_B_MAP5_Intro";
                }
                else {
                  v23 = GameRoutine_820a30(v22);
                  if ((_DWORD)v23 == 8) {
                    v4 = "BGM_B_MAP6_Intro";
                  }
                  else {
                    v24 = GameRoutine_820a30(v23);
                    if ((_DWORD)v24 == 9) {
                      v4 = "BGM_B_MAP7_Intro";
                    }
                    else {
                      v25 = GameRoutine_820a30(v24);
                      if ((_DWORD)v25 == 10) {
                        v4 = "BGM_B_MAP8";
                      }
                      else {
                        v26 = GameRoutine_820a30(v25);
                        if ((_DWORD)v26 == 11) {
                          v4 = "BGM_B_MAP9";
                        }
                        else {
                          v27 = GameRoutine_820a30(v26);
                          if ((_DWORD)v27 == 12) {
                            v4 = "BGM_B_MAP18";
                          }
                          else {
                            v28 = GameRoutine_820a30(v27);
                            if ((_DWORD)v28 == 13) {
                              v4 = "BGM_B_MAP10_Intro";
                            }
                            else {
                              v29 = GameRoutine_820a30(v28);
                              if ((_DWORD)v29 == 14) {
                                v4 = "BGM_B_MAP11";
                              }
                              else {
                                v30 = GameRoutine_820a30(v29);
                                if ((_DWORD)v30 == 15) {
                                  v4 = "BGM_B_MAP15";
                                }
                                else {
                                  v31 = GameRoutine_820a30(v30);
                                  if ((_DWORD)v31 == 16) {
                                    v4 = "BGM_B_MAP19";
                                  }
                                  else {
                                    v32 = GameRoutine_820a30(v31);
                                    if ((_DWORD)v32 == 17) {
                                      v4 = "BGM_B_MAP16";
                                    }
                                    else {
                                      v33 = GameRoutine_820a30(v32);
                                      if ((_DWORD)v33 == 18) {
                                        v4 = "BGM_B_MAP17";
                                      }
                                      else {
                                        v34 = GameRoutine_820a30(v33);
                                        if ((_DWORD)v34 == 19) {
                                          v4 = "BGM_B_MAP20";
                                        }
                                        else {
                                          v35 = GameRoutine_820a30(v34);
                                          if ((_DWORD)v35 == 20) {
                                            v4 = "BGM_B_MAP12";
                                          }
                                          else if ((unsigned int)
                                                       GameRoutine_820a30(
                                                           v35) == 21) {
                                            v4 = "BGM_B_MAP13_ALL";
                                          }
                                          else {
                                            v4 = nullptr;
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
  else {
    v4 = nullptr;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  if (v5 != 0) {
    v6 = *(_DWORD*)(v5 + 284);
  LABEL_11:
    v7 = snd_getDefineInt("SetTime_BGM_Night");
    v8 = snd_getDefineInt("SetTime_BGM_Day");
    v10 = v7 <= v6 || v6 < v8;
    if (v4 != nullptr) {
      return v4;
    }
    goto LABEL_18;
  }
  if (GameData_21c9648 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v6 = *(__int16*)(game_gmap_GmapClock_instance_ + 14);
    }
    else {
      v6 = 0;
    }
    goto LABEL_11;
  }
  v10 = false;
  if (v4 != nullptr) {
    return v4;
  }

LABEL_18:
  if (GameData_21c96d8 == 0 || game_GameModeData_instance_ == 0) {
    return "BGM_B_MAP12";
  }
  v11 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v11 == 1) {
    v21 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    if (v10) {
      v4 = "BGM_B_MAP14";
      if ((unsigned __int8)(v21 - 1) >= 7u && v21 != 8) {
        return "BGM_B_MAP12";
      }
    }
    else if ((unsigned __int8)(v21 - 1) >= 7u) {
      if (v21 == 8) {
        return "BGM_B_MAP8";
      }
      else {
        return "BGM_B_MAP12";
      }
    }
    else {
      return (char*)GameData_1b5c374 +
             GameData_1b5c374[(unsigned __int8)(v21 - 1)];
    }
  }
  else {
    v4 = "BGM_B_MAP12";
    if (v11 == 3) {
      if (v10) {
        return "BGM_B_MAP14";
      }
      else {
        return "BGM_B_MAP12";
      }
    }
  }
  return v4;
}

__attribute__((swiftcall)) void

snd_GameManager_GetListCurrentEncountBattleBGM(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  _DWORD* v10;
  int v11;
  int v13;
  __int64 result;
  __int64 v16;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  __int64 v19;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v3 = a1 + 2548;
  v4 = 0;
  v17_.v17[0] = GameData_1fbe4f0;
  v17_.v17[1] = a3;
  v17_.v18 = v17_.v17;
  do {
    v5 = *(_QWORD*)&GameData_1fbdc18_alt1[v4 + 2];
    if (v5 != 0) {
      v6 = (unsigned int)snd_fnd_calcCrc32_alt1(
          *(unsigned __int8**)&GameData_1fbdc18_alt1[v4 + 2], 0);
      v7 = snd_data_getMuseumDataCount_alt1();
      if (v7 >= 1) {
        v8 = v7;
        v9 = 0;
        while (1) {
          v10 = snd_data_getMuseumData_alt1(v9);
          if (v10[3] == v6) {
            break;
          }
          v11 = v10[6];
          if (v11 != 0 && v11 == v6) {
            break;
          }
          v13 = v10[7];
          if (v13 != 0 && v13 == v6) {
            break;
          }
          if (v8 == ++v9) {
            goto LABEL_2;
          }
        }
        if (((*(_DWORD*)(v3 + 4LL * ((signed __int32)v10[1] / 32)) >> v10[1]) &
             1) != 0) {
          v19 = v5;
          if (v17_.v18 == nullptr) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(_QWORD*, __int64*))(*v17_.v18 + 48LL))(v17_.v18, &v19);
        }
      }
    }
  LABEL_2:
    v4 += 4;
  } while (v4 != 88);
  result = (__int64)v17_.v18;
  if (v17_.v18 == v17_.v17) {
    v16 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      result;
      return;
    }
    v16 = 40;
  }
  {
    (*(__int64 (**)(_QWORD*, __int64))(*v17_.v18 + v16))(v17_.v18, a2);
    return;
  }
}

__int64 GameManager_a31fd0(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64* v6;

  v2 = a2;
  if (a2 == nullptr) {
    goto LABEL_24;
  }
  if (*a2 == 0) {
    LODWORD(v2) = 0;
  LABEL_24:
    v6 = game_8224a0(0x16u);
    return game_VariableManager_SetFlag_alt1((__int64)v6, (int)v2);
  }
  v3 = game_8224a0(0x16u);
  game_VariableManager_SetFlag_alt1((__int64)v3, 0);
  if ((unsigned int)strcmp("BGM_B_MAP0_CB", v2) == 0) {
    v5 = 0;
  LABEL_23:
    LODWORD(v2) = GameData_1fbdc18_alt1[4 * v5];
    goto LABEL_24;
  }
  if ((unsigned int)strcmp("BGM_B_MAP1_CB", v2) == 0) {
    v5 = 1;
    goto LABEL_23;
  }
  if ((unsigned int)strcmp("BGM_B_MAP2_CB", v2) == 0) {
    v5 = 2;
    goto LABEL_23;
  }
  if ((unsigned int)strcmp("BGM_B_MAP3_CB", v2) == 0) {
    v5 = 3;
    goto LABEL_23;
  }
  if ((unsigned int)strcmp("BGM_B_MAP4_CB", v2) == 0) {
    v5 = 4;
    goto LABEL_23;
  }
  if ((unsigned int)strcmp("BGM_B_MAP5_CB", v2) == 0) {
    v5 = 5;
    goto LABEL_23;
  }
  if ((unsigned int)strcmp("BGM_B_MAP6_CB", v2) == 0) {
    v5 = 6;
    goto LABEL_23;
  }
  if ((unsigned int)strcmp("BGM_B_MAP7_CB", v2) == 0) {
    v5 = 7;
    goto LABEL_23;
  }
  result = strcmp("BGM_B_MAP8_CB", v2);
  if ((_DWORD)result == 0) {
    v5 = 8;
    goto LABEL_23;
  }
  return result;
}

const char* GameManager_a32140()
{
  __int64* v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  v0 = game_8224a0(0x16u);
  if (game_GameModeData_instance_ != 0) {
    v1 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v0);
    if (v1 != 0 && *(_DWORD*)(v1 + 32) != 0) {
      v2 = game_8224a0(0x16u);
      if (game_GameModeData_instance_ != 0) {
        v3 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v2);
        if (v3 != 0 && *(_DWORD*)(v3 + 32) == 1) {
          return "BGM_B_MAP0_CB";
        }
      }
      v4 = game_8224a0(0x16u);
      if (game_GameModeData_instance_ != 0) {
        v5 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v4);
        if (v5 != 0 && *(_DWORD*)(v5 + 32) == 2) {
          return "BGM_B_MAP1_CB";
        }
      }
      v7 = game_8224a0(0x16u);
      if (game_GameModeData_instance_ != 0) {
        v8 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v7);
        if (v8 != 0 && *(_DWORD*)(v8 + 32) == 3) {
          return "BGM_B_MAP2_CB";
        }
      }
      v9 = game_8224a0(0x16u);
      if (game_GameModeData_instance_ != 0) {
        v10 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v9);
        if (v10 != 0 && *(_DWORD*)(v10 + 32) == 4) {
          return "BGM_B_MAP3_CB";
        }
      }
      v11 = game_8224a0(0x16u);
      if (game_GameModeData_instance_ != 0) {
        v12 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v11);
        if (v12 != 0 && *(_DWORD*)(v12 + 32) == 5) {
          return "BGM_B_MAP4_CB";
        }
      }
      if ((unsigned int)GameRoutine_820a80() == 6) {
        return "BGM_B_MAP5_CB";
      }
      if ((unsigned int)GameRoutine_820a80() == 7) {
        return "BGM_B_MAP6_CB";
      }
      if ((unsigned int)GameRoutine_820a80() == 8) {
        return "BGM_B_MAP7_CB";
      }
      if ((unsigned int)GameRoutine_820a80() == 9) {
        return "BGM_B_MAP8_CB";
      }
    }
  }
  if (GameData_21c96d8 != 0 && game_GameModeData_instance_ != 0) {
    if ((unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1) <
        8u) {
      return GameData_1fbe770[(
          unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1)];
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
        *(int*)(game_GameModeData_instance_ + 64) > 1) {
      return "BGM_B_MAP12_CB";
    }
  }
  return "BGM_B_MAP0_CB";
}

__attribute__((swiftcall)) void

snd_GameManager_GetListCurrentCommandBattleBGM(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  bool v1;
  __int64* v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  bool v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  bool v36;
  _QWORD* v37;
  bool v38;
  bool v39;
  bool v40;
  bool v41;
  bool v42;
  char v43;
  char v44;
  __int64 result;
  __int64 v46;
  bool v47;
  bool v48;
  bool v49;
  bool v50;
  bool v51;
  bool v52;
  _QWORD v53[4];
  _QWORD* v54;
  const char* v55;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v53[0] = GameData_1fbe570;
  v53[1] = a1;
  v54 = v53;
  v55 = "BGM_B_MAP0_CB";
  snd_GameManager_GetListCurrentCommandBattleBGM_lambda0_Invoke_alt1(v53, &v55);
  if (GameData_21c96d8 != 0) {
    v2 = &GameData_21ca000;
    if (game_GameModeData_instance_ != 0) {
      v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    else {
      v3 = 0;
    }
    v4 = (__int64*)GameVariable_82e7c0(1, 1);
    v5 = *v4;
    if (*v4 != 0) {
      v1 = game_GameModeData_instance_ != 0 &&
           (v6 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v4)) != 0 &&
           *(_DWORD*)(v6 + 32) != 0;
    }
    v7 = v5 != 0;
    v8 = (__int64*)GameVariable_82e7c0(2, 1);
    v9 = *v8;
    if (*v8 != 0) {
      v51 = game_GameModeData_instance_ != 0 &&
            (v10 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v8)) != 0 &&
            *(_DWORD*)(v10 + 32) != 0;
    }
    v52 = v9 != 0;
    v11 = (__int64*)GameVariable_82e7c0(3, 1);
    v12 = *v11;
    if (*v11 != 0) {
      v50 = game_GameModeData_instance_ != 0 &&
            (v13 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v11)) != 0 &&
            *(_DWORD*)(v13 + 32) != 0;
    }
    v14 = v12 != 0;
    v15 = (__int64*)GameVariable_82e7c0(4, 1);
    v16 = *v15;
    if (*v15 != 0) {
      v49 = game_GameModeData_instance_ != 0 &&
            (v17 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v15)) != 0 &&
            *(_DWORD*)(v17 + 32) != 0;
    }
    v18 = v16 != 0;
    v19 = (__int64*)GameVariable_82e7c0(5, 1);
    v20 = *v19;
    if (*v19 != 0) {
      v48 = game_GameModeData_instance_ != 0 &&
            (v21 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v19)) != 0 &&
            *(_DWORD*)(v21 + 32) != 0;
    }
    v22 = v20 != 0;
    v23 = (__int64*)GameVariable_82e7c0(6, 1);
    v24 = *v23;
    if (*v23 != 0) {
      v47 = game_GameModeData_instance_ != 0 &&
            (v25 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v23)) != 0 &&
            *(_DWORD*)(v25 + 32) != 0;
    }
    v26 = v24 != 0;
    v27 = (__int64*)GameVariable_82e7c0(7, 1);
    v28 = *v27;
    if (*v27 != 0) {
      LOBYTE(v24) =
          game_GameModeData_instance_ != 0 &&
          (v29 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v27)) != 0 &&
          *(_DWORD*)(v29 + 32) != 0;
    }
    v30 = v7 && v1;
    v31 = v28 != 0;
    v32 = (__int64*)GameVariable_82e7c0(8, 1);
    v33 = *v32;
    if (*v32 != 0) {
      LOBYTE(v2) =
          game_GameModeData_instance_ != 0 &&
          (v34 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v32)) != 0 &&
          *(_DWORD*)(v34 + 32) != 0;
    }
    v35 = !v30;
    v36 = v33 != 0;
    if (v3 == 1) {
      v35 = false;
    }
    if (!v35) {
      v37 = v54;
      v55 = "BGM_B_MAP1_CB";
      if (v54 == nullptr) {
        goto LABEL_91;
      }
      (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
    }
    v38 = !v52 || !v51;
    if (v3 == 2) {
      v38 = false;
    }
    if (!v38) {
      v37 = v54;
      v55 = "BGM_B_MAP2_CB";
      if (v54 == nullptr) {
        goto LABEL_91;
      }
      (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
    }
    v39 = !v14 || !v50;
    if (v3 == 3) {
      v39 = false;
    }
    if (!v39) {
      v37 = v54;
      v55 = "BGM_B_MAP3_CB";
      if (v54 == nullptr) {
        goto LABEL_91;
      }
      (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
    }
    v40 = !v18 || !v49;
    if (v3 == 4) {
      v40 = false;
    }
    if (!v40) {
      v37 = v54;
      v55 = "BGM_B_MAP4_CB";
      if (v54 == nullptr) {
        goto LABEL_91;
      }
      (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
    }
    v41 = !v22 || !v48;
    if (v3 == 5) {
      v41 = false;
    }
    if (!v41) {
      v37 = v54;
      v55 = "BGM_B_MAP5_CB";
      if (v54 == nullptr) {
        goto LABEL_91;
      }
      (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
    }
    v42 = !v26 || !v47;
    if (v3 == 6) {
      v42 = false;
    }
    if (!v42) {
      v37 = v54;
      v55 = "BGM_B_MAP6_CB";
      if (v54 == nullptr) {
        goto LABEL_91;
      }
      (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
    }
    v43 = v31 & v24 ^ 1;
    if (v3 == 7) {
      v43 = 0;
    }
    if ((v43 & 1) == 0) {
      v37 = v54;
      v55 = "BGM_B_MAP7_CB";
      if (v54 == nullptr) {
        goto LABEL_91;
      }
      (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
    }
    v44 = v36 & (unsigned __int8)v2 ^ 1;
    if (v3 == 8) {
      v44 = 0;
    }
    if ((v44 & 1) == 0) {
      v37 = v54;
      v55 = "BGM_B_MAP8_CB";
      if (v54 != nullptr) {
        (*(void (**)(_QWORD*, const char**))(*v54 + 48LL))(v54, &v55);
        goto LABEL_85;
      }
    LABEL_91:
      GameRoutine_60a310(v37);
    }
  }
LABEL_85:
  result = (__int64)v54;
  if (v54 == v53) {
    v46 = 32;
  }
  else {
    if (v54 == nullptr) {
      result;
      return;
    }
    v46 = 40;
  }
  {
    (*(__int64 (**)(__int64))(*v54 + v46))((__int64)v54);
    return;
  }
}

__int64 GameManager_a32880(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 result;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 568);
  v2 = *(_QWORD*)(a1 + 576);
  v3 = (__int64*)(a1 + 568);
  if (v1 != v2) {
    do {
      if ((snd_fnd_WeakHandle_isValid(v1 + 40) & 1) != 0) {
        v5 = snd_fnd_WeakHandle_get(v1 + 40);
        (*(void (**)(__int64))(*(_QWORD*)(v5 - 5592) + 264LL))(v5 - 5592);
      }
      v1 += 56;
    } while (v1 != v2);
    v1 = *v3;
  }
  *(_QWORD*)(a1 + 576) = v1;
  result = GameRoutine_1905100(v3);
  *(_DWORD*)(a1 + 560) = 0;
  if (GameData_21c6978 != 0) {
    v7 = *(_QWORD*)(GameData_21c6978 + 32);
    if (v7 != *(_QWORD*)(GameData_21c6978 + 24) && *(_QWORD*)(v7 - 8) != 0) {
      *(_QWORD*)(a1 + 576) = *(_QWORD*)(a1 + 568);
      result = GameRoutine_1905100(v3);
      *(_DWORD*)(a1 + 560) = 1;
    }
  }
  return result;
}

__int64 GameManager_a32960(__int64 a1, unsigned __int8* a2, char a3, char a4,
                           char a5, __int64 a6)
{
  const char** v11;
  __int64 result;
  struct {
    __int64 v13;
    int v14;
  } v13_;
  int v15[4];

  v15[0] = (unsigned int)snd_fnd_calcCrc32_alt1(a2, 0);
  v11 = (const char**)snd_data_findFieldData_alt1(v15);
  result = GameManager_a2adb0(a1, a6);
  if (v11 != nullptr && v11[4] != nullptr) {
    v13_.v13 = 0;
    v13_.v14 = 0x2000;
    GameRoutine_112180_alt1((__int64)&v13_.v13, a1 + 344);
    snd_a2fe30((void*)((__int64)v15), a1, &v13_.v13, v11[4], a3 & 1, a4 & 1,
               a5 & 1, a6, a6);
    return GameRoutine_112180_alt1(a1 + 344, (__int64)v15);
  }
  return result;
}

float* GameManager_setField(__int64 a1, unsigned __int8* a2)
{

#pragma clang fp contract(off)
  float* result;
  float v4;
  float* v5;
  float v6;
  float v7;
  _QWORD v8[25];

  GameRoutine_e8be0(a1, a2);
  LODWORD(v8[0]) = (unsigned int)snd_fnd_calcCrc32_alt1(a2, 0);
  result = (float*)snd_data_findFieldData_alt1((int*)v8);
  if (result != nullptr) {
    v4 = result[2];
    v5 = result;
    snd_Fade_Fade_10c830_alt2((__int64)v8, 0x0.0p+0f);
    snd_startBusVolume((__int64)v8, 0, 0, v4);
    snd_Fade_Destroy_Fade_alt2(v8);
    v6 = v5[3];
    snd_Fade_Fade_10c830_alt2((__int64)v8, 0x0.0p+0f);
    snd_startBusVolume((__int64)v8, 0, 1u, v6);
    snd_Fade_Destroy_Fade_alt2(v8);
    v7 = v5[4];
    snd_Fade_Fade_10c830_alt2((__int64)v8, 0x0.0p+0f);
    snd_startBusVolume((__int64)v8, 0, 2u, v7);
    return (float*)snd_Fade_Destroy_Fade_alt2(v8);
  }
  return result;
}

__int64 GameManager_setupFields(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  __int64 v12;
  int v13;
  _QWORD v14[2];

  result = snd_isDisabled();
  if ((result & 1) == 0) {
    LODWORD(v14[0]) = snd_fnd_calcCrc32("MultiBridge_FinalMix", 0);
    v3 = snd_data_findEffectData(v14);
    *(struct PseudoSret*)(v14) =
        GameRoutine_120380(*GameData_212e248[0], "FxMultiBridgeFinalMix",
                           *(unsigned int*)(*(_QWORD*)(v3 + 8) + 16LL),
                           *(unsigned int*)(*(_QWORD*)(v3 + 8) + 20LL), 3);
    GameRoutine_112180(a1 + 528, v14);
    snd_setListenerSurround_100920("DEFAULT_FIELD");
    LODWORD(v14[0]) = snd_fnd_calcCrc32("DEFAULT_FIELD", 0);
    *(_QWORD*)(a1 + 136) = snd_data_findSurroundData(v14);
    snd_setVibrationSurround_101660("VIBRATION_FIELD");
    LODWORD(v14[0]) = snd_fnd_calcCrc32("VIBRATION_FIELD", 0);
    *(_QWORD*)(a1 + 144) = snd_data_findSurroundData(v14);
    GameRoutine_e8510(a1, "None");
    if (snd_fnd_WeakHandle_get(a1 + 528) == 0) {
      goto LABEL_14;
    }
    v4 = snd_fnd_WeakHandle_get(a1 + 528);
    v5 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)(v4 - 5592) + 64LL))(
        v4 - 5592);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fac98,
                              memory_order_acquire) &
         1) == 0) {
      v10 = v5;
      v11 = __cxa_guard_acquire(&GameData_21fac98);
      v5 = v10;
      if (v11 != 0) {
        GameData_21fac90 = GameManager_a38b10(v10);
        __cxa_guard_release_alt1(&GameData_21fac98);
        v5 = v10;
      }
    }
    if (v5 == &GameData_21fac90) {
      goto LABEL_11;
    }
    do {
      v5 = (__int64*)*v5;
    } while (v5 != &GameData_21fac90 && v5 != nullptr);
    if (v5 != nullptr) {
    LABEL_11:
      v7 = snd_fnd_WeakHandle_get(a1 + 528);
      if (v7 != 0) {
        v8 = v7 - 5592;
      }
      else {
        v8 = 0;
      }
    }
    else {
    LABEL_14:
      v8 = 0;
    }
    v12 = 0;
    v13 = 0x2000;
    GameRoutine_112180(&v12, &GameData_21fa928);
    v9 = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v8 + 192LL))(v8, &v12);
    return GameRoutine_17ca40(v9);
  }
  return result;
}

void GameManager_a32d60(__int64 a1, __int64 a2, float* a3, float* a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  float v13;
  float v14;
  __int64 v16;
  __int64 v17;
  int v18;
  float v19;
  __int64 v20;
  __int64* v21;
  _BYTE* v22;
  float v23;
  struct {
    _QWORD v24[2];
    int v25;
  } v24_;
  struct {
    _QWORD v26[2];
    int v27;
  } v26_;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  _DWORD v30[12];
  struct {
    __int64 v31;
    char gap128_[968];
    int v32;
  } v31_;
  struct {
    __int64* v33;
    __int64 v34;
    int v35;
  } v33_;
  struct {
    __int64* v36;
    __int64 v37;
    int v38;
  } v36_;

  *a3 = 0x1.0000000000000p+0f;
  *a4 = 0x0.0p+0f;
  v8 = snd_fnd_WeakHandle_get_alt1(a2 + 5848);
  if (v8 != 0) {
    v9 = v8;
    v10 = Crc32List_1163b0_alt1();
    Manager_1181f0((void*)((__int64)&v28_.v28), v10, -1);
    v11 = snd_fnd_WeakHandle_get_alt1((__int64)&v28_.v28);
    if (v11 != 0) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v11 - 5552) + 1048LL))((void*)(&v28_.v28), v11 - 5552);
      v36_.v38 = v30[0];
      v12 = GameData_212d1e0[0] + 2;
      v36_.v36 = GameData_212d1e0[0] + 2;
      v36_.v37 = v28_.v29;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v9 - 5592) + 96LL))((void*)(&v28_.v28), v9 - 5592);
      v33_.v33 = v12;
      v33_.v34 = v28_.v29;
      v33_.v35 = v30[0];
      v13 =
          snd_fnd_calcDistance_fe090_alt1((float*)&v36_.v36, (float*)&v33_.v33);
      v14 = (*(float (**)(__int64))(*(_QWORD*)a2 + 112LL))(a2);
      if (v14 <= 0x0.0p+0f || v13 < v14) {
        v26_.v26[0] = v12;
        v26_.v26[1] = v33_.v34;
        v26_.v27 = v33_.v35;
        v24_.v24[0] = v12;
        v24_.v24[1] = v36_.v37;
        v24_.v25 = v36_.v38;
        game_a3aba0((void*)(&v28_.v28), a1 + 544, v26_.v26, v24_.v24,
                    0x1.0000000000000p+0f);
        if ((v28_.v28 & 1) != 0 || (v28_.v28 & 0x100) != 0) {
          if (v31_.v32 < 1) {
            v19 = 0x0.0p+0f;
          }
          else {
            v16 = v31_.v32 & 7;
            if ((unsigned int)v31_.v32 >= 8) {
              v20 = 0;
              v18 = 0;
              v21 = &v31_.v31;
              do {
                if ((*(_BYTE*)(v21 - 6) & 1) != 0 || *((_BYTE*)v21 - 47) == 1) {
                  ++v18;
                }
                if ((*(_BYTE*)(v21 - 4) & 1) != 0 || *((_BYTE*)v21 - 31) == 1) {
                  ++v18;
                }
                if ((*(_BYTE*)(v21 - 2) & 1) != 0 || *((_BYTE*)v21 - 15) == 1) {
                  ++v18;
                }
                if ((*(_BYTE*)v21 & 1) != 0 || *((_BYTE*)v21 + 1) == 1) {
                  ++v18;
                }
                if ((v21[2] & 1) != 0 || *((_BYTE*)v21 + 17) == 1) {
                  ++v18;
                }
                if ((v21[4] & 1) != 0 || *((_BYTE*)v21 + 33) == 1) {
                  ++v18;
                }
                if ((v21[6] & 1) != 0 || *((_BYTE*)v21 + 49) == 1) {
                  ++v18;
                }
                if ((v21[8] & 1) != 0 || *((_BYTE*)v21 + 65) == 1) {
                  ++v18;
                }
                v20 -= 8;
                v21 += 16;
              } while (-(__int64)(v31_.v32 & 0x7FFFFFF8) != v20);
              v17 = -v20;
            }
            else {
              v17 = 0;
              v18 = 0;
            }
            if ((v31_.v32 & 7) != 0) {
              v22 = (char*)&v30[4 * v17] + 1;
              do {
                if ((*(v22 - 1) & 1) != 0 || *v22 == 1) {
                  ++v18;
                }
                v22 += 16;
                --v16;
              } while (v16 != 0);
            }
            v19 = (float)v18;
          }
          v23 = v19 / (float)v31_.v32;
          *a3 = 0x1.0000000000000p+0f - (float)(v23 * 0x1.99999a0000000p-1f);
          *a4 = v23 * 0x1.99999a0000000p-1f;
        }
      }
    }
  }
}

__int64 GameManager_a34a90(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;

  *a3 = 0;
  if (strstr(a2, GameData_2167420[0]) != 0) {
    return 1;
  }
  if (strstr(a2, GameData_2167428[0]) != 0) {
    return 2;
  }
  if (strstr(a2, GameData_2167430[0]) != 0) {
    return 3;
  }
  if (strstr(a2, GameData_2167438[0]) != 0) {
    return 4;
  }
  result = strstr(a2, GameData_2167440[0]);
  if (result != 0) {
    if ((unsigned int)strcmp(a2, GameData_2167448[0]) == 0) {
      *a3 = 1;
    }
    if ((unsigned int)strcmp(a2, GameData_2167450[0]) == 0) {
      *a3 = 2;
    }
    if ((unsigned int)strcmp(a2, GameData_2167458[0]) == 0) {
      *a3 = 3;
    }
    if ((unsigned int)strcmp(a2, GameData_2167460[0]) == 0) {
      *a3 = 4;
    }
    if ((unsigned int)strcmp(a2, GameData_2167468[0]) == 0) {
      *a3 = 5;
    }
    if ((unsigned int)strcmp(a2, GameData_2167470[0]) == 0) {
      *a3 = 6;
    }
    if ((unsigned int)strcmp(a2, GameData_2167478[0]) == 0) {
      *a3 = 7;
    }
    if ((unsigned int)strcmp(a2, GameData_2167480) != 0) {
      return 5;
    }
    else {
      *a3 = 8;
      return 5;
    }
  }
  return result;
}

__int64 GameManager_a34c30(__int64 result, __int64 a2)
{
  __int64 v2;
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
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  bool v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v59;
  __int64 v60;

  v2 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 7;
  v3 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 1992);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v2;
  v4 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 1996);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v2;
  v5 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2000);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v2;
  v6 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2004);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v2;
  v7 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2008);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v2;
  v8 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2012);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v2;
  v9 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2016);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v2;
  v10 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2020);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v2;
  v11 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2024);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v2;
  v12 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2028);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v2;
  v13 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2032);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v2;
  v14 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2036);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v2;
  v15 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2040);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v2;
  v16 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2044);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v2;
  v17 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2048);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v2;
  v18 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2052);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v2;
  v19 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2056);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v2;
  v20 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2060);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = v2;
  v21 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2064);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v2;
  v22 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2068);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v2;
  v23 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2072);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v2;
  v24 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2076);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v2;
  v25 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2080);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v2;
  v26 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2084);
  *(_DWORD*)(a2 + 20) = v26 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = v2;
  v27 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2088);
  *(_DWORD*)(a2 + 20) = v27 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = v2;
  v28 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2092);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v2;
  v29 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2096);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = v2;
  v30 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2100);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = v2;
  v31 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2104);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = v2;
  v32 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2108);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v2;
  v33 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2112);
  *(_DWORD*)(a2 + 20) = v33 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v2;
  v34 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2116);
  *(_DWORD*)(a2 + 20) = v34 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = v2;
  v35 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2120);
  *(_DWORD*)(a2 + 20) = v35 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v2;
  v36 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2124);
  *(_DWORD*)(a2 + 20) = v36 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = v2;
  v37 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2128);
  *(_DWORD*)(a2 + 20) = v37 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = v2;
  v38 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2132);
  *(_DWORD*)(a2 + 20) = v38 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = v2;
  v39 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2136);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = v2;
  v40 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2140);
  *(_DWORD*)(a2 + 20) = v40 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = v2;
  v41 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2144);
  *(_DWORD*)(a2 + 20) = v41 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = v2;
  v42 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2148);
  *(_DWORD*)(a2 + 20) = v42 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = v2;
  v43 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2152);
  *(_DWORD*)(a2 + 20) = v43 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = v2;
  v44 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2156);
  *(_DWORD*)(a2 + 20) = v44 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44) = v2;
  v45 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2160);
  *(_DWORD*)(a2 + 20) = v45 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v2;
  v46 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2164);
  *(_DWORD*)(a2 + 20) = v46 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v46) = v2;
  v47 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2168);
  *(_DWORD*)(a2 + 20) = v47 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v47) = v2;
  v48 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2180);
  *(_DWORD*)(a2 + 20) = v48 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v48) = v2;
  v49 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2184);
  *(_DWORD*)(a2 + 20) = v49 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49) = v2;
  v50 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 2188);
  *(_DWORD*)(a2 + 20) = v50 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v50) = v2;
  v51 = *(unsigned __int8*)(result + 2456);
  v52 = *(_QWORD*)(result + 2472);
  v53 = (v51 & 1) == 0;
  v54 = v51 >> 1;
  if (v53) {
    v52 = result + 2457;
  }
  else {
    LODWORD(v54) = *(_DWORD*)(result + 2464);
  }
  if ((_DWORD)v54 != 0) {
    v55 = *(int*)(a2 + 20);
    v56 = (unsigned int)(v54 + 1);
    *(_DWORD*)(a2 + 20) = v55 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = v54 + 1;
    v57 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v57 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = BYTE1(v56);
    if ((v54 & 0x80000000) == 0) {
      result = memmove(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20), v52, v56);
      *(_DWORD*)(a2 + 20) += v56;
    }
  }
  else {
    v59 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v59 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59) = 0;
    v60 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v60 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v60) = 0;
  }
  return result;
}

__int64 GameManager_a35190(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
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
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  int v60;
  char v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  bool v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  int v69;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  v4 = result;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v5 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  *(_DWORD*)(result + 2224) = *(char*)(v3 + v2 + 1);
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_DWORD*)(result + 2228) = *(char*)(*(_QWORD*)(a2 + 8) + v6);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_DWORD*)(result + 2232) = *(char*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_DWORD*)(result + 2236) = *(char*)(*(_QWORD*)(a2 + 8) + v8);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_DWORD*)(result + 2240) = *(char*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_DWORD*)(result + 2244) = *(char*)(*(_QWORD*)(a2 + 8) + v10);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_DWORD*)(result + 2248) = *(char*)(*(_QWORD*)(a2 + 8) + v11);
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_DWORD*)(result + 2252) = *(char*)(*(_QWORD*)(a2 + 8) + v12);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_DWORD*)(result + 2256) = *(char*)(*(_QWORD*)(a2 + 8) + v13);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_DWORD*)(result + 2260) = *(char*)(*(_QWORD*)(a2 + 8) + v14);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_DWORD*)(result + 2264) = *(char*)(*(_QWORD*)(a2 + 8) + v15);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_DWORD*)(result + 2268) = *(char*)(*(_QWORD*)(a2 + 8) + v16);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_DWORD*)(result + 2272) = *(char*)(*(_QWORD*)(a2 + 8) + v17);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_DWORD*)(result + 2276) = *(char*)(*(_QWORD*)(a2 + 8) + v18);
  v19 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_DWORD*)(result + 2280) = *(char*)(*(_QWORD*)(a2 + 8) + v19);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_DWORD*)(result + 2284) = *(char*)(*(_QWORD*)(a2 + 8) + v20);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_DWORD*)(result + 2288) = *(char*)(*(_QWORD*)(a2 + 8) + v21);
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_DWORD*)(result + 2292) = *(char*)(*(_QWORD*)(a2 + 8) + v22);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_DWORD*)(result + 2296) = *(char*)(*(_QWORD*)(a2 + 8) + v23);
  v24 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_DWORD*)(result + 2300) = *(char*)(*(_QWORD*)(a2 + 8) + v24);
  v25 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  *(_DWORD*)(result + 2304) = *(char*)(*(_QWORD*)(a2 + 8) + v25);
  v26 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v26 + 1;
  *(_DWORD*)(result + 2308) = *(char*)(*(_QWORD*)(a2 + 8) + v26);
  v27 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v27 + 1;
  *(_DWORD*)(result + 2312) = *(char*)(*(_QWORD*)(a2 + 8) + v27);
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_DWORD*)(result + 2316) = *(char*)(*(_QWORD*)(a2 + 8) + v28);
  v29 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_DWORD*)(result + 2320) = *(char*)(*(_QWORD*)(a2 + 8) + v29);
  v30 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_DWORD*)(result + 2324) = *(char*)(*(_QWORD*)(a2 + 8) + v30);
  v31 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  *(_DWORD*)(result + 2328) = *(char*)(*(_QWORD*)(a2 + 8) + v31);
  v32 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  *(_DWORD*)(result + 2332) = *(char*)(*(_QWORD*)(a2 + 8) + v32);
  v33 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v33 + 1;
  *(_DWORD*)(result + 2336) = *(char*)(*(_QWORD*)(a2 + 8) + v33);
  v34 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v34 + 1;
  *(_DWORD*)(result + 2340) = *(char*)(*(_QWORD*)(a2 + 8) + v34);
  v35 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v35 + 1;
  *(_DWORD*)(result + 2344) = *(char*)(*(_QWORD*)(a2 + 8) + v35);
  v36 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v36 + 1;
  *(_DWORD*)(result + 2348) = *(char*)(*(_QWORD*)(a2 + 8) + v36);
  v37 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v37 + 1;
  *(_DWORD*)(result + 2352) = *(char*)(*(_QWORD*)(a2 + 8) + v37);
  v38 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v38 + 1;
  *(_DWORD*)(result + 2356) = *(char*)(*(_QWORD*)(a2 + 8) + v38);
  v39 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  *(_DWORD*)(result + 2360) = *(char*)(*(_QWORD*)(a2 + 8) + v39);
  v40 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v40 + 1;
  *(_DWORD*)(result + 2364) = *(char*)(*(_QWORD*)(a2 + 8) + v40);
  if (v5 <= 3) {
    v52 = 0;
    *(_QWORD*)(result + 2392) = -1;
    *(_QWORD*)(result + 2384) = -1;
    *(_QWORD*)(result + 2376) = -1;
    *(_QWORD*)(result + 2368) = -1;
    *(_DWORD*)(result + 2400) = -1;
    v53 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v53 + 1;
    *(_DWORD*)(result + 2412) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v53);
  }
  else {
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_DWORD*)(result + 2368) = *(char*)(*(_QWORD*)(a2 + 8) + v41);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_DWORD*)(result + 2372) = *(char*)(*(_QWORD*)(a2 + 8) + v42);
    v43 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v43 + 1;
    *(_DWORD*)(result + 2376) = *(char*)(*(_QWORD*)(a2 + 8) + v43);
    v44 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(_DWORD*)(result + 2380) = *(char*)(*(_QWORD*)(a2 + 8) + v44);
    v45 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(_DWORD*)(result + 2384) = *(char*)(*(_QWORD*)(a2 + 8) + v45);
    v46 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *(_DWORD*)(result + 2388) = *(char*)(*(_QWORD*)(a2 + 8) + v46);
    v47 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v47 + 1;
    *(_DWORD*)(result + 2392) = *(char*)(*(_QWORD*)(a2 + 8) + v47);
    v48 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v48 + 1;
    *(_DWORD*)(result + 2396) = *(char*)(*(_QWORD*)(a2 + 8) + v48);
    v49 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v49 + 1;
    *(_DWORD*)(result + 2400) = *(char*)(*(_QWORD*)(a2 + 8) + v49);
    v50 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v50 + 1;
    *(_DWORD*)(result + 2412) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v50);
    v51 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v51 + 1;
    v52 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v51);
  }
  *(_DWORD*)(result + 2416) = v52;
  v54 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v54 + 1;
  *(_DWORD*)(result + 2420) = *(char*)(*(_QWORD*)(a2 + 8) + v54);
  if (v5 < 7) {
    v61 = *(_BYTE*)(result + 2432);
    v62 = *(unsigned __int8*)(result + 2456);
    result += 2432;
    if ((v61 & 1) != 0) {
      v65 = (v62 & 1) == 0;
      v66 = v62 >> 1;
      if (v65) {
        v67 = v4 + 2457;
      }
      else {
        v67 = *(_QWORD*)(v4 + 2472);
      }
      if (v65) {
        v68 = v66;
      }
      else {
        v68 = *(_QWORD*)(v4 + 2464);
      }
      result = GameRoutine_64dde0(result, v67, v68);
    }
    else if ((v62 & 1) != 0) {
      result = GameRoutine_64df20(result, *(_QWORD*)(v4 + 2472),
                                  *(_QWORD*)(v4 + 2464));
    }
    else {
      v63 = *(_QWORD*)(v4 + 2464);
      v64 = *(_QWORD*)(v4 + 2472);
      *(_QWORD*)result = *(_QWORD*)(v4 + 2456);
      *(_QWORD*)(v4 + 2440) = v63;
      *(_QWORD*)(v4 + 2448) = v64;
    }
  }
  else {
    v55 = *(int*)(a2 + 20);
    v56 = *(_QWORD*)(a2 + 8);
    v57 = v55 + 1;
    *(_DWORD*)(a2 + 20) = v55 + 1;
    v58 = *(unsigned __int8*)(v56 + v55);
    v59 = v55 + 2;
    *(_DWORD*)(a2 + 20) = v59;
    v60 = v58 | (*(unsigned __int8*)(v56 + v57) << 8);
    if (v60 != 0) {
      *(_DWORD*)(a2 + 20) = v59 + v60;
      result = GameRoutine_60a020(result + 2432, v56 + v59);
    }
    else if ((*(_BYTE*)(result + 2432) & 1) != 0) {
      **(_BYTE**)(result + 2448) = 0;
      *(_QWORD*)(result + 2440) = 0;
    }
    else {
      *(_WORD*)(result + 2432) = 0;
    }
  }
  v69 = *(_DWORD*)(v4 + 2192);
  if (*(_DWORD*)(v4 + 2420) == 0 && v69 >= 1) {
    *(_DWORD*)(v4 + 2420) = v69;
  }
  *(_DWORD*)(v4 + 2424) = v69;
  return result;
}

bool GameManager_a35ca0(__int64 a1, __int16* a2)
{
  __int16* v2;
  int v4;
  char v5;
  char v6;
  char v7;
  unsigned __int8* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE v13[8];
  char v14;

  v2 = a2;
  if ((snd_hasSound(a2) & 1) != 0) {
    return true;
  }
  if (*(_BYTE*)v2 != 86 || *((_BYTE*)v2 + 1) != 95) {
    return false;
  }
  v4 = *((unsigned __int8*)v2 + 2);
  if (v4 == 69) {
    if (*((_BYTE*)v2 + 3) != 78) {
      goto LABEL_13;
    }
  }
  else if (v4 != 74 || *((_BYTE*)v2 + 3) != 80) {
  LABEL_13:
    GameData_21fab70 = 24406;
    if (*GameData_21321f8 != 0) {
      v5 = 69;
    }
    else {
      v5 = 74;
    }
    if (*GameData_21321f8 != 0) {
      v6 = 78;
    }
    else {
      v6 = 80;
    }
    GameData_21fab72 = v5;
    GameData_21fab73 = v6;
    GameData_21fab74 = 95;
    v7 = *((_BYTE*)v2 + 2);
    if (v7 != 0) {
      v8 = (unsigned __int8*)v2 + 3;
      v9 = 5;
      do {
        *((_BYTE*)&GameData_21fab70 + v9++) = v7;
        v10 = *v8++;
        v7 = v10;
      } while (v10 != 0);
      v11 = (unsigned int)v9;
    }
    else {
      v11 = 5;
    }
    *((_BYTE*)&GameData_21fab70 + v11) = 0;
    v2 = &GameData_21fab70;
    goto LABEL_25;
  }
  if (*((_BYTE*)v2 + 4) != 95) {
    goto LABEL_13;
  }

LABEL_25:
  if ((*(unsigned int (**)(_QWORD, __int16*, char*, _BYTE*))(
          *(_QWORD*)*snd_s_target_ptr + 168LL))(*snd_s_target_ptr, v2, &v14,
                                                v13) != -1) {
    return true;
  }
  v12 = GameRoutine_118fd0(GameData_2265eb0);
  return GameRoutine_106500(v12, "sound", v2) != 0;
}

__int64 GameManager_onSuspend(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  __int64* v11;
  float v12;
  __int64 v13;
  __int64* v14;
  float v15;
  __int64 v16;
  __int64* v17;
  float v18;
  __int64 v19;
  __int64* v20;
  float v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  float v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD v39[25];
  _QWORD v40[11];

  if (*(_DWORD*)(result + 2604) == 0) {
    v40[2] = v9;
    v40[3] = v8;
    v40[4] = v7;
    v40[5] = v6;
    v40[6] = v5;
    v40[7] = v4;
    v40[8] = v3;
    v40[9] = v1;
    v40[10] = v2;
    v10 = (float*)result;
    v11 = game_8224a0(0x21u);
    v12 = 0x1.4000000000000p+3f;
    if (game_GameModeData_instance_ != 0) {
      v13 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v11);
      if (v13 != 0) {
        v12 = (float)*(int*)(v13 + 32);
      }
    }
    v14 = game_8224a0(0x22u);
    v15 = 0x1.4000000000000p+3f;
    if (game_GameModeData_instance_ != 0) {
      v16 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v14);
      if (v16 != 0) {
        v15 = (float)*(int*)(v16 + 32);
      }
    }
    v17 = game_8224a0(0x23u);
    v18 = 0x1.4000000000000p+3f;
    if (game_GameModeData_instance_ != 0) {
      v19 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v17);
      if (v19 != 0) {
        v18 = (float)*(int*)(v19 + 32);
      }
    }
    v20 = game_8224a0(0x24u);
    v21 = 0x1.4000000000000p+3f;
    if (game_GameModeData_instance_ != 0) {
      v22 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v20);
      if (v22 != 0) {
        v21 = (float)*(int*)(v22 + 32);
      }
    }
    v23 = v12 / 0x1.4000000000000p+3f;
    result = (__int64)game_8224a0(0x25u);
    v24 = 0x0.0p+0f;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)result);
      if (result != 0) {
        v24 = (float)*(int*)(result + 32);
      }
    }
    v25 = v15 / 0x1.4000000000000p+3f;
    if (v23 != v10[645]) {
      snd_findSlot_100a50_alt1((void*)(v40), &GameData_21fa94c);
      v26 = snd_fnd_WeakHandle_get_alt1((__int64)v40);
      if (v26 != 0) {
        v27 = v26 - 5592;
      }
      else {
        v27 = 0;
      }
      snd_Fade_Fade_10c830_alt2((__int64)v39, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v27 + 40) + 128LL))(
          v27 + 40, v39, v23);
      result = snd_Fade_Destroy_Fade_alt2(v39);
      v10[645] = v23;
    }
    v28 = v18 / 0x1.4000000000000p+3f;
    if (v25 != v10[646]) {
      snd_findSlot_100a50_alt1((void*)(v40), &GameData_21fa954);
      v29 = snd_fnd_WeakHandle_get_alt1((__int64)v40);
      if (v29 != 0) {
        v30 = v29 - 5592;
      }
      else {
        v30 = 0;
      }
      snd_Fade_Fade_10c830_alt2((__int64)v39, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v30 + 40) + 128LL))(
          v30 + 40, v39, v25);
      result = snd_Fade_Destroy_Fade_alt2(v39);
      v10[646] = v25;
    }
    v31 = v21 / 0x1.4000000000000p+3f;
    if (v28 != v10[647]) {
      snd_findSlot_100a50_alt1((void*)(v40), &GameData_21fa950);
      v32 = snd_fnd_WeakHandle_get_alt1((__int64)v40);
      if (v32 != 0) {
        v33 = v32 - 5592;
      }
      else {
        v33 = 0;
      }
      snd_Fade_Fade_10c830_alt2((__int64)v39, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v33 + 40) + 128LL))(
          v33 + 40, v39, v18 / 0x1.4000000000000p+3f);
      result = snd_Fade_Destroy_Fade_alt2(v39);
      v10[647] = v28;
    }
    v34 = v24 / 0x1.4000000000000p+3f;
    if (v31 != v10[648]) {
      snd_findSlot_100a50_alt1((void*)(v40), &GameData_21fa958);
      v35 = snd_fnd_WeakHandle_get_alt1((__int64)v40);
      if (v35 != 0) {
        v36 = v35 - 5592;
      }
      else {
        v36 = 0;
      }
      snd_Fade_Fade_10c830_alt2((__int64)v39, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v36 + 40) + 128LL))(
          v36 + 40, v39, v21 / 0x1.4000000000000p+3f);
      result = snd_Fade_Destroy_Fade_alt2(v39);
      v10[648] = v31;
    }
    if (v34 != v10[649]) {
      snd_findSlot_100a50_alt1((void*)(v40), &GameData_21fa95c);
      v37 = snd_fnd_WeakHandle_get_alt1((__int64)v40);
      if (v37 != 0) {
        v38 = v37 - 5592;
      }
      else {
        v38 = 0;
      }
      snd_Fade_Fade_10c830_alt2((__int64)v39, 0x0.0p+0f);
      (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v38 + 40) + 128LL))(
          v38 + 40, v39, v24 / 0x1.4000000000000p+3f);
      result = snd_Fade_Destroy_Fade_alt2(v39);
      v10[649] = v34;
    }
  }
  return result;
}

_QWORD* snd_GameManager_main_lambda0_Invoke(__int64 a1, __int64 a2)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;
  __int64 v8;

  result = v6;
  v3 = **(_QWORD**)(*(_QWORD*)a2 + 5816LL);
  v6[0] = GameData_1fbde20;
  v7 = v6;
  if (v3 == 0) {
    goto LABEL_9;
  }
  v4 = *(_QWORD*)(v3 + 5640);
  result = v6;
  v8 = v3;
  while (1) {
    (*(void (**)(_QWORD*, __int64*))(*result + 48LL))(result, &v8);
    result = v7;
    if (v4 == 0) {
      break;
    }
    v8 = v4;
    v4 = *(_QWORD*)(v4 + 5640);
    if (v7 == nullptr) {
      GameRoutine_60a310(0);
    }
  }
  if (v7 == v6) {
  LABEL_9:
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v5))(result);
}

__n128 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a36f60(__int64 a1,
                                                            __int64* a2)
{
  _QWORD** v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v17[25];
  _QWORD v18[25];
  _BYTE v19[200];
  __int64 v20;

  v2 = (_QWORD**)*a2;
  snd_Fade_Fade_10cd70(v19, a1 + 8);
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  *(_QWORD*)v5 = GameData_1fbdf30;
  snd_Fade_Fade_10cd70(v5 + 8, v19);
  v6 = *v2[727];
  if (v6 != 0) {
    do {
      v7 = *(_QWORD*)(v6 + 5640);
      v18[0] = v6;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v5 + 48LL))(v5, v18);
      v6 = v7;
    } while (v7 != 0);
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 40LL))(v5);
  snd_Fade_Destroy_Fade_alt1(v19);
  v8 = v2[732];
  snd_Fade_Fade_10cd70(v18, a1 + 8);
  v9 = fw_memory_HeapManager_Allocate(*v4, 208, 16, 0);
  *(_QWORD*)v9 = GameData_1fbdfb0;
  snd_Fade_Fade_10cd70(v9 + 8, v18);
  v10 = *v8;
  if (*v8 != 0) {
    do {
      v11 = *(_QWORD*)(v10 + 6080);
      v17[0] = v10;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v17);
      v10 = v11;
    } while (v11 != 0);
  }
  (*(void (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9);
  snd_Fade_Destroy_Fade_alt1(v18);
  v12 = v2[737];
  snd_Fade_Fade_10cd70(v17, a1 + 8);
  v13 = fw_memory_HeapManager_Allocate(*v4, 208, 16, 0);
  *(_QWORD*)v13 = GameData_1fbe040;
  snd_Fade_Fade_10cd70(v13 + 8, v17);
  v14 = *v12;
  if (*v12 != 0) {
    do {
      v15 = *(_QWORD*)(v14 + 6080);
      v20 = v14;
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v13 + 48LL))(v13, &v20);
      v14 = v15;
    } while (v15 != 0);
  }
  (*(void (**)(__int64))(*(_QWORD*)v13 + 40LL))(v13);
  return snd_Fade_Destroy_Fade_alt1(v17);
}

__int64 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a37280(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 664LL))(v2, 1) & 1) ==
          0 &&
      snd_fnd_WeakHandle_get(v2 + 5848) != 0) {
    return (*(__int64 (**)(__int64, __int64, __int64, double))(
        *(_QWORD*)v2 + 248LL))(v2, a1 + 8, 1, 0.0);
  }
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 664LL))(v2, 1) & 1) ==
          0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 512LL))(v2) & 1) != 0) {
    return (*(__int64 (**)(__int64, __int64, __int64, double))(
        *(_QWORD*)v2 + 248LL))(v2, a1 + 8, 1, 0.0);
  }
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 664LL))(v2, 16);
  if ((result & 1) != 0) {
    return (*(__int64 (**)(__int64, __int64, __int64, double))(
        *(_QWORD*)v2 + 248LL))(v2, a1 + 8, 1, 0.0);
  }
  return result;
}

__int64 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a37480(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 664LL))(v2, 1);
  if ((result & 1) == 0) {
    result = snd_fnd_WeakHandle_get(v2 + 5848);
    if (result != 0) {
      return (*(__int64 (**)(__int64, __int64, __int64, double))(
          *(_QWORD*)v2 + 248LL))(v2, a1 + 8, 1, 0.0);
    }
  }
  return result;
}

__int64 snd_GameManager_stopWithoutBGM_lambda0_Invoke_a37640(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 664LL))(v2, 1);
  if ((result & 1) == 0) {
    result = snd_fnd_WeakHandle_get(v2 + 5848);
    if (result != 0) {
      return (*(__int64 (**)(__int64, __int64, __int64, double))(
          *(_QWORD*)v2 + 248LL))(v2, a1 + 8, 1, 0.0);
    }
  }
  return result;
}

__int64 snd_GameManager_SetMode_lambda0_Invoke_a377c0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  char v15;
  _QWORD v16[25];

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 152LL))(v2, 32) & 1) !=
      0) {
    goto LABEL_2;
  }
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 152LL))(v2, 64),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((result & 1) != 0) {
    v15 = 0;
    v7 = snd_getUnknown10_alt1(),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v8 = v13_.v13;
    v13_.v14 = v13_.v13;
    v13_.v13[0] = GameData_1fbe160;
    v13_.v13[1] = v2;
    v9 = *(__int64**)(v7 + 24);
    v13_.v13[2] = &v15;
    v10 = *v9;
    if (v10 == 0) {
      goto LABEL_14;
    }
    v11 = *(_QWORD*)(v10 + 5616);
    v8 = v13_.v13;
    v16[0] = v10;
    while (1) {
      (*(void (**)(_QWORD*, _QWORD*))(*v8 + 48LL))(v8, v16),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v8 = v13_.v14;
      if (v11 == 0) {
        break;
      }
      v16[0] = v11;
      v11 = *(_QWORD*)(v11 + 5616);
      if (v13_.v14 == nullptr) {
        GameRoutine_60a310_alt1(),
            v5 = COERCE_AS(__typeof__(v5),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    if (v13_.v14 == v13_.v13) {
    LABEL_14:
      v12 = 32;
    }
    else {
      if (v13_.v14 == nullptr) {
        goto LABEL_16;
      }
      v12 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v8 + v12))(v8, v5, v6),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LABEL_16:
    if (v15 == 1) {
      snd_Fade_Fade_10c830_alt2((__int64)v16, *(float*)(v3 + 520)),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 248LL))(v2, v16),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      return snd_Fade_Destroy_Fade_alt2(v16);
    }
  LABEL_2:
    snd_Fade_Fade_10c830_alt2((__int64)v16, *(float*)(v3 + 520)),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 240LL))(v2, v16),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    return snd_Fade_Destroy_Fade_alt2(v16);
  }
  return result;
}

_QWORD* snd_GameManager_SetMode_lambda0_Invoke_a37a00(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  __int64 v24;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v6 = v22_.v22;
  v22_.v23 = v22_.v22;
  v22_.v22[0] = GameData_1fbe1d0;
  v22_.v22[1] = v3;
  v7 = *(__int64**)(v2 + 5816);
  v22_.v22[2] = v4;
  v8 = *v7;
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 5640);
    v6 = v22_.v22;
    v20_.v20[0] = v8;
    while (1) {
      (*(void (**)(_QWORD*, _QWORD*))(*v6 + 48LL))(v6, v20_.v20),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v6 = v22_.v23;
      if (v9 == 0) {
        break;
      }
      v20_.v20[0] = v9;
      v9 = *(_QWORD*)(v9 + 5640);
      if (v22_.v23 == nullptr) {
      LABEL_15:
        GameRoutine_60a310_alt1(),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
    if (v22_.v23 != v22_.v22) {
      if (v22_.v23 != nullptr) {
        v12 = 40;
      LABEL_10:
        (*(void (**)(_QWORD*))(*v6 + v12))(v6),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v13 = *(_QWORD*)(a1 + 8);
      v14 = *(_QWORD*)(a1 + 16);
      v15 = *(__int64**)(v2 + 5856);
      result = v20_.v20;
      v20_.v21 = v20_.v20;
      v20_.v20[0] = GameData_1fbe250;
      v20_.v20[1] = v13;
      v20_.v20[2] = v14;
      v17 = *v15;
      if (v17 == 0) {
        goto LABEL_19;
      }
      v18 = *(_QWORD*)(v17 + 6080);
      result = v20_.v20;
      v24 = v17;
      while (1) {
        (*(void (**)(_QWORD*, __int64*))(*result + 48LL))(result, &v24),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        result = v20_.v21;
        if (v18 == 0) {
          break;
        }
        v24 = v18;
        v18 = *(_QWORD*)(v18 + 6080);
        if (v20_.v21 == nullptr) {
          goto LABEL_15;
        }
      }
      if (v20_.v21 == v20_.v20) {
      LABEL_19:
        v19 = 32;
      }
      else {
        if (v20_.v21 == nullptr) {
          return result;
        }
        v19 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
          *result + v19))(result, v10, v11);
    }
  }
  v12 = 32;
  goto LABEL_10;
}

__int64 snd_GameManager_SetMode_lambda0_Invoke_a37c40(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;

  v2 = *a2;
  result = snd_Voice_hasFeature(*a2, 29);
  if ((result & 1) != 0) {
    result = snd_fnd_WeakHandle_get(v2 + 5848);
    v5 = result - 5592;
    if (result == 0) {
      v5 = 0;
    }
    if (v5 == *(_QWORD*)(a1 + 8)) {
      **(_BYTE**)(a1 + 16) = 1;
    }
  }
  return result;
}

__int64 snd_GameManager_SetMode_lambda0_Invoke_a37db0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;

  v2 = *a2;
  result = snd_Voice_hasFeature(*a2, 29);
  if ((result & 1) != 0) {
    result = snd_fnd_WeakHandle_get(v2 + 5848);
    v5 = result - 5592;
    if (result == 0) {
      v5 = 0;
    }
    if (v5 == *(_QWORD*)(a1 + 8)) {
      **(_BYTE**)(a1 + 16) = 1;
    }
  }
  return result;
}

_QWORD* snd_GameManager_SetMode_lambda1_Invoke_a37f20(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 8);
  result = v7;
  v4 = **(_QWORD**)(*(_QWORD*)a2 + 5816LL);
  v7[0] = GameData_1fbe360;
  v7[1] = v2;
  v8 = v7;
  if (v4 == 0) {
    goto LABEL_9;
  }
  v5 = *(_QWORD*)(v4 + 5640);
  result = v7;
  v9 = v4;
  while (1) {
    (*(void (**)(_QWORD*, __int64*))(*result + 48LL))(result, &v9);
    result = v8;
    if (v5 == 0) {
      break;
    }
    v9 = v5;
    v5 = *(_QWORD*)(v5 + 5640);
    if (v8 == nullptr) {
      GameRoutine_60a310(0);
    }
  }
  if (v8 == v7) {
  LABEL_9:
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v6))(result, a2);
}

__n128 snd_GameManager_SetMode_lambda1_Invoke_a380c0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  _BYTE v5[200];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if ((snd_Voice_hasFeature(*a2, 24) & 1) != 0) {
    ((uint32_t*)&result)[0] = *(_DWORD*)(v3 + 520);
    snd_Fade_Fade_10c830_alt1(v5, *(long double*)&result);
    (*(void (**)(__int64, _BYTE*, _QWORD, double))(*(_QWORD*)v2 + 248LL))(
        v2, v5, 0, 0.0);
    return snd_Fade_Destroy_Fade_alt1(v5);
  }
  return result;
}

_QWORD* snd_GameManager_EndDemo_lambda0_Invoke_a38220(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 8);
  result = v7;
  v4 = **(_QWORD**)(*(_QWORD*)a2 + 5816LL);
  v7[0] = GameData_1fbe460;
  v7[1] = v2;
  v8 = v7;
  if (v4 == 0) {
    goto LABEL_9;
  }
  v5 = *(_QWORD*)(v4 + 5640);
  result = v7;
  v9 = v4;
  while (1) {
    (*(void (**)(_QWORD*, __int64*))(*result + 48LL))(result, &v9);
    result = v8;
    if (v5 == 0) {
      break;
    }
    v9 = v5;
    v5 = *(_QWORD*)(v5 + 5640);
    if (v8 == nullptr) {
      GameRoutine_60a310(0);
    }
  }
  if (v8 == v7) {
  LABEL_9:
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v6))(result, a2);
}

__int64 snd_GameManager_EndDemo_lambda0_Invoke_a383c0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD v5[25];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 664LL))(v2, 128);
  if ((result & 1) != 0) {
    result = snd_Voice_hasFeature_alt1(v2, 0x1Bu);
    if ((result & 1) == 0 || *(_BYTE*)(v3 + 601) == 1) {
      snd_Fade_Fade_10c910_alt1((__int64)v5, 200);
      (*(void (**)(__int64, _QWORD*, __int64, double))(*(_QWORD*)v2 + 248LL))(
          v2, v5, 1, 0x0.0p+0);
      return snd_Fade_Destroy_Fade_alt2(v5);
    }
  }
  return result;
}

__int64

snd_GameManager_GetListCurrentEncountBattleBGM_lambda0_Invoke(__int64 a1,
                                                              _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 result;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  char* v21;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = (_QWORD*)v2[1];
  if ((_QWORD*)*v2 == v4) {
  LABEL_13:
    v11 = strlen(v3);
    if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(v11, v12, v13, v14, v15);
    }
    v16 = v11;
    if (v11 >= 0x17) {
      if ((v11 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v11 | 7) + 1;
      }
      v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                                  16, 0);
      v20[1] = v16;
      v21 = v17;
      v20[0] = v18 | 1;
    }
    else {
      LOBYTE(v20[0]) = 2 * v11;
      v17 = (char*)v20 + 1;
      if (v11 == 0) {
        goto LABEL_22;
      }
    }
    memcpy(v17, v3, v16);
  LABEL_22:
    v17[v16] = 0;
    result = GameRoutine_7a8220(v2, v20);
    if ((v20[0] & 1) != 0 && v21 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    }
    return result;
  }
  v5 = (_QWORD*)(*v2 + 16LL);
  v6 = strlen(*a2);
  while (1) {
    v7 = v5 - 2;
    v8 = *((_BYTE*)v5 - 16) >> 1;
    if ((*(_BYTE*)(v5 - 2) & 1) != 0) {
      v8 = *(v5 - 1);
    }
    if (v6 == v8) {
      if (v6 == -1) {
        String_60a230();
      }
      v9 = (*(_BYTE*)(v5 - 2) & 1) != 0 ? (_QWORD*)*v5
                                        : (_QWORD*)((char*)v5 - 15);
      result = memcmp(v9, v3, v6);
      if ((_DWORD)result == 0) {
        return result;
      }
    }
    v5 += 3;
    if (v7 + 3 == v4) {
      goto LABEL_13;
    }
  }
}

void snd_GameManager_GetListCurrentCommandBattleBGM_lambda0_Invoke(
    __int64 a1, const char** a2)
{
  __int64* v2;
  const char* v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v15[2];
    char* v16;
  } v15_;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v4 = v2[1];
  if (*v2 == v4) {
  LABEL_13:
    v10 = strlen_alt1(v3);
    if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    v11 = v10;
    if (v10 >= 0x17) {
      if ((v10 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (v10 | 7) + 1;
      }
      v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v13, 16, 0);
      v15_.v15[1] = v11;
      v15_.v16 = v12;
      v15_.v15[0] = v13 | 1;
    }
    else {
      LOBYTE(v15_.v15[0]) = 2 * v10;
      v12 = (char*)v15_.v15 + 1;
      if (v10 == 0) {
        goto LABEL_22;
      }
    }
    memcpy_alt1((__int64)v12, (__int64)v3, v11);
  LABEL_22:
    v12[v11] = 0;
    GameRoutine_7a8220_alt1(v2, v15_.v15);
    if ((v15_.v15[0] & 1) != 0 && v15_.v16 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v15_.v16);
    }
    return;
  }
  v5 = (_QWORD*)(*v2 + 16);
  v6 = strlen_alt1(*a2);
  while (1) {
    v7 = v5 - 2;
    v8 = *((_BYTE*)v5 - 16) >> 1;
    if ((*(_BYTE*)(v5 - 2) & 1) != 0) {
      v8 = *(v5 - 1);
    }
    if (v6 == v8) {
      if (v6 == -1) {
        String_60a230_alt1();
      }
      v9 = (*(_BYTE*)(v5 - 2) & 1) != 0 ? *v5 : (__int64)v5 - 15;
      if (memcmp_alt1(v9, (__int64)v3, v6) == 0) {
        break;
      }
    }
    v5 += 3;
    if (v7 + 3 == (_QWORD*)v4) {
      goto LABEL_13;
    }
  }
}

__int64 (***snd_GameManager__updatePauseWorld_lambda0_Invoke_a38c40(
    __int64 a1, __int64 a2))()
{
  char v2;
  __int64 (***result)();
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 (**v7)();
    char v8;
    char gap9_[23];
    __int64 (***v9)();
  } v7_;
  __int64 v10;

  v2 = *(_BYTE*)(a1 + 8);
  result = &v7_.v7;
  v4 = **(_QWORD**)(*(_QWORD*)a2 + 5816LL);
  v7_.v7 = GameData_1fbe6f0;
  v7_.v8 = v2;
  v7_.v9 = &v7_.v7;
  if (v4 == 0) {
    goto LABEL_9;
  }
  v5 = *(_QWORD*)(v4 + 5640);
  result = &v7_.v7;
  v10 = v4;
  while (1) {
    ((void (*)(__int64 (***)(void), __int64*))(*result)[6])(result, &v10);
    result = v7_.v9;
    if (v5 == 0) {
      break;
    }
    v10 = v5;
    v5 = *(_QWORD*)(v5 + 5640);
    if (v7_.v9 == nullptr) {
      GameRoutine_60a310_alt1();
    }
  }
  if (v7_.v9 == &v7_.v7) {
  LABEL_9:
    v6 = 4;
  }
  else {
    if (v7_.v9 == nullptr) {
      return result;
    }
    v6 = 5;
  }
  return (__int64 (***)(void))(
      (__int64 (*)(__int64 (***)(void), __int64))(*result)[v6])(result, a2);
}

__n128 snd_GameManager__updatePauseWorld_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __n128 result;
  int v5;
  char v6;
  _BYTE v7[200];

  v2 = *a2;
  if ((snd_Voice_hasFeature(*a2, 28) & 1) != 0) {
    v5 = *(unsigned __int8*)(a1 + 8);
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 392LL))(v2);
    if (v5 == 1) {
      if ((v6 & 1) != 0) {
        return result;
      }
      snd_Fade_Fade_10c910(v7, 100, *(long double*)&result);
      (*(void (**)(__int64, _BYTE*, _QWORD))(*(_QWORD*)v2 + 312LL))(v2, v7, 0);
    }
    else {
      if ((v6 & 1) == 0) {
        return result;
      }
      snd_Fade_Fade_10c910(v7, 100, *(long double*)&result);
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v2 + 328LL))(v2, v7);
    }
    return snd_Fade_Destroy_Fade_alt1(v7);
  }
  return result;
}

#pragma GCC visibility pop
