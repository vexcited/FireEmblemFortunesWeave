#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_d57390(_QWORD* result, __int64);
__attribute__((swiftcall)) void CharacterModel_cf7a40(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
CharacterSound_1095750_alt1(PSEUDO_X8, __int64 result, __int64, __int64,
                            float) __asm__("CharacterSound_1095750");
__attribute__((swiftcall)) void
    __cxa_guard_acquire_alt1(PSEUDO_X8, _QWORD) __asm__("__cxa_guard_acquire");
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void collision_6725f0(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64, float);
__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8, float*);
__attribute__((swiftcall)) void
game_zview_d163f0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       float) __asm__("game_zview_d163f0");
__attribute__((swiftcall)) void game_zview_d56ba0(PSEUDO_X8, __int64, __int64,
                                                  float);
__attribute__((swiftcall)) void game_zview_d57000(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int16* GameRoutine_dacf80(__int64, __int64);
__int64* GameRoutine_d74b60(__int64* result, float*, float);
__int64 AssetTableFile_7e8000(__int64);
__int64 AssetTableFile_7e9960(__int64, __int64, __int64*);
__int64 AssetTableFile_7e9e00(__int64, unsigned __int8*, unsigned int, char);
__int64 CharacterAppearance_10735d0(__int64);
__int64 CharacterBuilder_1084a50(__int64, _BYTE*);
__int64 CharacterController_d0d7c0(__int64 result);
__int64 CharacterController_d15100(float*, char);
__int64 CharacterModel_cf4a30(__int64, __int64);
__int64 CharacterModel_d198c0(float32x2_t*, float32x2_t*, char, char);
__int64 CharacterSound_1095750(_QWORD, _QWORD, _QWORD, float);
__int64 Character_cb01a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Character_cea860(__int64);
__int64 GameRoutine_10761d0(__int64);
__int64 GameRoutine_108dd30(__int64, __int64, __int64, float32x4_t*, __int64,
                            long double);
__int64 GameRoutine_109ecc0(_BYTE*, unsigned __int64, char*, char*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_cec620(__int64, int);
__int64 GameRoutine_d0c0f0(__int64 result, __int64*, __int64);
__int64 GameRoutine_d0e1a0(_QWORD*);
__int64 GameRoutine_d1cf60(__int64, int);
__int64 GameRoutine_d23780(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_d24440(float);
__int64 GameRoutine_d2cec0(int);
__int64 GameRoutine_d47300(_QWORD);
__int64 GameRoutine_d4c8c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d4e840(_QWORD, _QWORD);
__int64 GameRoutine_d4eca0(_QWORD, _QWORD, long double);
__int64 GameRoutine_d51e80(__int64);
__int64 GameRoutine_d740c0(__int64, int*);
__int64 GameRoutine_d783a0(_QWORD, float);
__int64 GameRoutine_d96580(__int64 result, int, int, int);
__int64 GameRoutine_dacb90(_QWORD, long double);
__int64 GameRoutine_dad4f0(_QWORD);
__int64 GameRoutine_ede500(__int64);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 HubCharacterNatives_cf7940_alt1(_QWORD) __asm__(
    "HubCharacterNatives_cf7940");
__int64 MapCharacter_9da660(__int64);
__int64 StateAttack_d45e00(__int64, _QWORD*);
__int64 StateMoveTo_d42860(_QWORD, _QWORD);
__int64 TrickEntity_7d1480(__int64 result);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __cxa_guard_release_alt1(_QWORD, float) __asm__("__cxa_guard_release");
__int64 fmodf(float, float);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_Unit_GetJobUnknown30(__int64);
__int64 game_character_CharacterAppearance_Setup(unsigned __int64, char**);
__int64 game_edea70(__int64, float, float);
__int64 game_zview_d0e440_alt1(__int64 result,
                               char) __asm__("game_zview_d0e440");
__int64 game_zview_d17160_alt1(float, __int64, __int64, float32x4_t*,
                               float32x4_t*) __asm__("game_zview_d17160");
__int64 game_zview_d17160_alt2(_QWORD, _QWORD, _QWORD, _QWORD,
                               float) __asm__("game_zview_d17160");
__int64 game_zview_d1e580_alt1(__int64 result) __asm__("game_zview_d1e580");
__int64 game_zview_d24980_alt1(__int64, __int64, __int64, __int64,
                               _DWORD*) __asm__("game_zview_d24980");
__int64 game_zview_d33d70_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                               float) __asm__("game_zview_d33d70");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_isActive_100100(__int64*);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_Crc32_alt1(_QWORD, _QWORD, _QWORD) __asm__("wld_Crc32");
__n128 GameRoutine_d13680(__int64, _QWORD*, char);
__n128 GameRoutine_dab2c0(_QWORD*, _QWORD*);
__n128 GameRoutine_dab870(__int64, __int64**, char, __n128 result);
__n128 nn_os_LockMutex(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_d1cdc0(__int64, unsigned int);
bool GameRoutine_d24440_alt1(float, __int64, __int64, float32x4_t*,
                             float32x4_t*,
                             __int64) __asm__("GameRoutine_d24440");
bool GameRoutine_d26f50(__int64, int);
char* StateAttack_d45200(__int64, __int64, unsigned __int64, _DWORD*, __int64,
                         __int64);
double GameRoutine_d1cbc0(__int64, int);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212d4e8;
extern _UNKNOWN* GameData_212deb8;
extern _UNKNOWN GameData_1a89f63;
extern _UNKNOWN GameData_1aea24f;
extern _UNKNOWN GameData_1aee1b9;
extern _UNKNOWN GameData_2167628;
extern _UNKNOWN GameData_2167681;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN GameData_22110c8;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a831c0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_1fdab58[])();
extern __int64 (*GameData_1fdae80[])();
extern __int64 (*GameData_1fdaf68[])();
extern __int64 (*GameData_1fdafb8[])();
extern __int64 (*GameData_1fdb008[])();
extern __int64 (*GameData_1fdf3e0[])();
extern __int64 (*game_zview_CameraParam_vtable[])();
extern __int64 (*game_zview_CameraState_vtable[])();
extern __int64 (*game_zview_Camera_vtable[])();
extern __int64 (*gfx_render_Camera_vtable[])();
extern __int64* GameData_212d2f0;
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_212d448[9];
extern __int64* GameData_212e740[2];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebd0[3];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212eda8[10];
extern __int64* GameData_212edb8[8];
extern __int64* GameData_212edc0[7];
extern __int64* GameData_212edc8[6];
extern __int64* GameData_212edd0[5];
extern __int64* GameData_212edd8[4];
extern __int64* GameData_212ede0[3];
extern __int64* GameData_212ede8[2];
extern __int64* GameData_212f7d8[3];
extern __int64* GameData_212fdc8[7];
extern __int64* GameData_212fdd0[6];
extern __int64* GameData_212fdd8[5];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212e438;
extern __int64 GameData_2167688;
extern __int64 GameData_2167690;
extern __int64 GameData_21676a0;
extern __int64 GameData_21676a8;
extern __int64 GameData_21a60e0;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9d18;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f8a0;
extern __int64 GameData_220fc30;
extern __int64 GameData_220fc38;
extern __int64 GameData_220fc40;
extern __int64 GameData_220fc48;
extern __int64 GameData_220fc50;
extern __int64 GameData_220fc58;
extern __int64 GameData_220fc60;
extern __int64 GameData_220fc68;
extern __int64 GameData_220fc70;
extern __int64 GameData_220fc78;
extern __int64 GameData_220fc80;
extern __int64 GameData_220fc88;
extern __int64 GameData_220fc90;
extern __int64 GameData_220fc98;
extern __int64 GameData_220fca0;
extern __int64 GameData_220fca8;
extern __int64 GameData_220fcb0;
extern __int64 GameData_220fcb8;
extern __int64 GameData_220fcc0;
extern __int64 GameData_220fcc8;
extern __int64 GameData_220fcd0;
extern __int64 GameData_220fcd8;
extern __int64 GameData_220fce0;
extern __int64 GameData_220fce8;
extern __int64 GameData_220fcf0;
extern __int64 GameData_220fcf8;
extern __int64 GameData_22110ac;
extern __int64 GameData_22110c0;
extern __int64 GameData_22137b8;
extern __int64 GameData_22137c0;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
extern char GameData_2167680;
extern char GameData_2167698[7];
extern char GameData_21d9d78;
extern int* GameData_212d4e0;
extern int* GameData_212deb0;
extern int GameData_21d92e0;
extern int GameData_21d9d7c;
float CharacterRotate_d52080(_QWORD);
float GameRoutine_d14710(__int64);
float GameRoutine_d1fae0(_QWORD);
float GameRoutine_d1fae0_alt1() __asm__("GameRoutine_d1fae0");
float Unit_6c7fa0(__int64, __int64);
float atan2f(long double, float);
float cosf(float);
float fmodf_alt1(float, float) __asm__("fmodf");
float game_ede020(_QWORD*);
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
float powf(float, float);
float powf_alt1(_QWORD, float, float) __asm__("powf");
float sinf(float);
int8x16_t Camera_b3bb60(__int64);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_a7fed0(float32x4_t*, __int64, __int64, float, float);
void GameRoutine_b3aee0(float32x4_t*);
void GameRoutine_cfc7c0(__int64, float*, char, float);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_cefa90(void);
void __attribute__((noreturn)) GameRoutine_cf38d0();
void __attribute__((noreturn)) GameRoutine_d13d00(long double);
void __attribute__((noreturn)) GameRoutine_d17460();
void __attribute__((noreturn)) GameRoutine_d4c890(void);
void __attribute__((noreturn)) GameRoutine_d96270();
void __attribute__((noreturn)) GameRoutine_dac8a0();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a250(const char*);
void game_ede740(float32x4_t*);
void game_zview_daaeb0_alt1(__int64, _QWORD*) __asm__("game_zview_daaeb0");
void game_zview_dab170_alt1(__int64, _QWORD*,
                            __int16) __asm__("game_zview_dab170");
void wld_a7fda0(__int64, _DWORD*);
__int64* game_zview_ced660(__int64 a1);
__int64 game_zview_cedd40(__int64 a1);
float game_zview_ceef60(__int64 a1);
__int64 game_zview_cef0e0(__int64 result, __int64* a2);
__int64 game_zview_cf22c0(__int64 a1, __int64 a2, char a3);
__int64 game_zview_cf27d0(__int64 a1, __int64 a2);
void game_zview_d0e440(__int64 result, char a2);
void game_zview_d0e6d0(__int64 a1);
__int64 game_zview_d11e20(_QWORD* a1);
void game_zview_d127a0(__int64 a1);
void game_zview_d12d30(__int64 result, int32x2_t* a2, char a3);
__attribute__((swiftcall)) void game_zview_d13080(PSEUDO_X8 x8_,
                                                  float32x4_t* result,
                                                  float* a2, char a3, float a5,
                                                  float a6, float a7);
__int64 game_zview_d13480(__int64 a1, float a2);
__int64 game_zview_d13880(__int64 a1, float* a2, long double a3);
float game_zview_d15c20(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void
game_zview_d163f0(PSEUDO_X8 x8_, __int64 unused_int0, float32x4_t* a1,
                  float32x4_t* a2, __int64 a3, char a4, float a6);
__attribute__((swiftcall)) void game_zview_d16620(PSEUDO_X8 x8_, _QWORD* a1,
                                                  float32x4_t* a2,
                                                  float32x4_t* a3, __int64 a4,
                                                  float a6);
bool game_zview_d17160(float a1, __int64 a2, __int64 a3, float32x4_t* a4,
                       float32x4_t* a5);
__int64 game_zview_d1d920(__int64 a1);
void game_zview_d1dfd0(float32x4_t* a1);
__int64 game_zview_d1e580(__int64 result, long double a2);
void game_zview_d1ed40(float32x4_t* a1);
void game_zview_d1f7d0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_zview_d1fdc0(PSEUDO_X8 x8_, __int64 a1);
void game_zview_d1ff20(float32x4_t* a1, unsigned __int64* a2, char a3);
void game_zview_d20140(float32x4_t* a1, __int64 a2);
void game_zview_d20430(float32x4_t* a1, unsigned __int64* a2, char a3);
double game_zview_d209a0(__int64 a1);
void game_zview_d23060(__int64 a1);
__attribute__((swiftcall)) void game_zview_d234c0(PSEUDO_X8 x8_,
                                                  __int64 result);
__int64 game_zview_d23da0(float32x4_t* a1, float32x4_t* a2);
__int64 game_zview_d24980(__int64 a1, __int64 a2, float32x4_t* a3,
                          float32x4_t* a4, _DWORD* a5);
__int64 game_zview_d30720(__int64 a1, __int64 a2);
void game_zview_d32f80(__int64 a1, double a2, double a3, long double a4,
                       long double a5);
__int64 game_zview_d33d70(__int64 a1, float32x4_t* a2, float* a3, __int64 a4,
                          float a5);
__int64 game_zview_d470a0(__int64 a1);
__int64 game_zview_d4b5c0(__int64 result, float32x4_t** a2);
__int64 game_zview_d4bda0(int8x16_t** a1, _QWORD* a2);
__attribute__((swiftcall)) void game_zview_d4c2c0(PSEUDO_X8 x8_, __int64 a1,
                                                  float32x4_t* a2,
                                                  float32x4_t* a3, float a5);
__int64 game_zview_d569d0();
__attribute__((swiftcall)) void game_zview_d56a60(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float a4);
__attribute__((swiftcall)) void game_zview_d56ce0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float a4);
__int64 game_zview_d56e60(__int64 result, char a2, unsigned __int8* a3);
_QWORD* game_zview_d571e0(__int64 a1, unsigned __int8* a2);
__int64 game_zview_d57520(__int64 result, __int64 a2, char a3, float32x4_t* a4);
__int64 game_zview_d576f0(_QWORD* a1, __int64 a2, __int64 a3, char a4,
                          float32x4_t* a5);
_QWORD* game_zview_d95860(float* a1);
__attribute__((swiftcall)) void
game_zview_d95c70(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1);
__attribute__((swiftcall)) void game_zview_d95da0(PSEUDO_X8 x8_,
                                                  __int64 unused_int0,
                                                  unsigned __int8* a1,
                                                  signed __int64 a2);
bool game_zview_daa340(__int64 a1);
__attribute__((swiftcall)) void game_zview_daaa40(PSEUDO_X8 x8_, __int64* a1,
                                                  __int64* a2);
void game_zview_daac80(__int64 a1);
void game_zview_daaeb0(_QWORD* a1, _QWORD* a2);
void game_zview_dab170(_QWORD* a1, __int64** a2, __int16 a3);
void game_zview_dab4c0(_QWORD* a1, _QWORD* a2, char a3);
__n128 game_zview_dabc90(__int64 a1, __int64* a2, __int64* a3);
_QWORD* game_zview_dac700(_QWORD* a1, _QWORD* a2);
__n128 game_zview_daca70(__int64 a1);
void game_zview_103e8e0(__int64 a1);
__n128 game_zview_103ee50(__int64 a1);
float32x4_t game_zview_103fb80(__int64 a1);
char* game_zview_d25000(char* result, char* a2, char* a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7);

__int64* game_zview_ced660(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* result;
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 v7;
  __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  __int64 v13;
  struct {
    _BYTE v14[32];
    __int64* v15;
  } v14_;
  __int64 v16;

  Character_cea860(a1);
  if (*(_BYTE*)(a1 + 456) == 1) {
    *(_BYTE*)(a1 + 456) = 0;
  }
  v2 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(v2 + 145) & 1) == 0 && GameData_21d92e0 != 1 &&
      (*(_BYTE*)(v2 + 152) & 1) != 0 && GameData_21c6978 != 0) {
    v4 = *(_QWORD*)(GameData_21c6978 + 32);
    if (*(_QWORD*)(GameData_21c6978 + 24) != v4) {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0) {
        v6 = *(float*)(a1 + 460);
        v7 = *(_QWORD*)(v5 + 24);
        v8 = *(_QWORD*)(v5 + 32);
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak(v8);
          }
        }
        if (v7 != 0) {
          *(long double*)&v9 =
              ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v7 + 40LL))(v7);
          v10 = *(float32x4_t*)(*(_QWORD*)(a1 + 16) + 560LL);
          *(_BYTE*)(a1 + 456) = 1;
          v11 = vsubq_f32(v9, v10);
          v12 = vmulq_f32(v11, v11);
          LANES128(v12).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                  .n64_u64[0];
          *(float*)(a1 + 452) =
              v6 + LANES64_OF(
                       vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]))))
                       .n64_f32[0];
        }
      }
    }
  }
  game_zview_cedd40(a1);
  GameRoutine_d0e1a0(*(_QWORD**)(a1 + 16));
  result = &GameData_220fc30;
  if (GameData_220fcf0 != 0) {
    if ((__int64*)GameData_220fcf0 == &GameData_220fcd0) {
      v14_.v15 = (__int64*)v14_.v14;
      (*(void (**)(__int64*, _BYTE*))(GameData_220fcd0 + 24))(&GameData_220fcd0,
                                                              v14_.v14);
      result = v14_.v15;
      if (v14_.v15 == nullptr) {
        return result;
      }
    }
    else {
      result = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_220fcf0 +
                                                   16LL))(GameData_220fcf0);
      v14_.v15 = result;
      if (result == nullptr) {
        return result;
      }
    }
    v16 = a1;
    (*(void (**)(__int64*, __int64*))(*result + 48))(result, &v16);
    result = v14_.v15;
    if (v14_.v15 == (__int64*)v14_.v14) {
      v13 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
        return result;
      }
      v13 = 40;
    }
    return (__int64*)(*(__int64 (**)(__int64))(*v14_.v15 + v13))(
        (__int64)v14_.v15);
  }
  return result;
}

__int64 game_zview_cedd40(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v42;
  __int64 v43;
  int* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int16 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int8 v55;
  int v56;
  __int64 v57;
  char v58;
  float v59;
  bool v60;
  __int64 v61;
  _QWORD v62[2];
  struct {
    unsigned __int64 v63;
    __int64 v64;
  } v63_;
  __int64 v65[2];
  struct {
    __int64 v66;
    __int64 v67;
  } v66_;
  struct {
    char* v68;
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
    __int64 v89;
    __int64 v90;
    __int64 v91;
    char gap256_[8];
    __int64 v92;
    char gap272_[8];
    __int64 v93;
    char gap288_[96];
    __int64 v94;
    __int64 v95;
    char gap400_[8];
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    int v101;
    char gap452_[4];
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    char gap528_[8];
    unsigned __int64 v111;
  } v68_;

  v3 = *(_QWORD*)(a1 + 112);
  if (v3 != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v3 + 48LL))((void*)(&v68_.v68), (__int64)v3);
  LABEL_3:
    LOBYTE(v4) = v68_.v111;
    v1 = v68_.v111 >> 8;
    TrickEntity_7d1480((__int64)&v68_.v68);
  LABEL_10:
    v7 = 1;
    goto LABEL_11;
  }
  CharacterModel_cf7a40((void*)(&v68_.v68), *(_QWORD*)(a1 + 8));
  v5 = v68_.v68;
  if (v68_.v68 != nullptr) {
    v4 = *((_QWORD*)v68_.v68 + 21);
    v1 = v4 >> 8;
    v6 = v68_.v69;
    if (v68_.v69 == 0) {
      goto LABEL_9;
    }
  }
  else {
    LOBYTE(v4) = 0;
    v6 = v68_.v69;
    if (v68_.v69 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    if (v5 != nullptr) {
      goto LABEL_10;
    }
    goto LABEL_31;
  }
LABEL_9:
  if (v5 != nullptr) {
    goto LABEL_10;
  }
LABEL_31:
  v24 = *(_QWORD*)(a1 + 168);
  if (v24 != 0) {
    AssetTableFile_7e9960((__int64)&v68_.v68, v24, game_vstring_kEmpty_ptr[0]);
    goto LABEL_3;
  }
  v31 = *(_QWORD*)(a1 + 600);
  if (v31 == 0) {
    v47 = *(_QWORD*)(a1 + 192);
    if (v47 == 0) {
      LOBYTE(v4) = 0;
      v7 = 0;
      goto LABEL_11;
    }
    v48 = MapCharacter_9da660(v47);
    v1 = v48 >> 8;
    LOBYTE(v4) = v48;
    goto LABEL_10;
  }
  v32 = *(_QWORD*)(v31 + 168);
  v68_.v92 = 0;
  v68_.v93 = 0;
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  v68_.v70 = 0;
  v68_.v71 = 0;
  v68_.v72 = 0;
  v68_.v73 = 0;
  v68_.v74 = 0;
  v68_.v75 = 0;
  v68_.v76 = 0;
  v68_.v77 = 0;
  v68_.v78 = 0;
  v68_.v79 = 0;
  v68_.v101 = 1065353216;
  v33 = (int*)GameData_21d9d18;
  v34 = GameData_21d9d20;
  v68_.v80 = 0;
  v68_.v81 = 0;
  v68_.v82 = 0;
  v68_.v83 = 0;
  v68_.v84 = 0;
  v68_.v85 = 0;
  v68_.v86 = 0;
  v68_.v87 = 0;
  v68_.v88 = 0;
  v68_.v89 = 0;
  v68_.v90 = 0;
  v68_.v91 = 0;
  v68_.v94 = 0;
  v68_.v95 = 0;
  v68_.v96 = 0;
  v68_.v97 = 0;
  v68_.v98 = 0;
  v68_.v99 = 0;
  v68_.v100 = 0;
  v68_.v102 = 0;
  v68_.v103 = 0;
  v68_.v104 = 0;
  v68_.v105 = 0;
  v68_.v106 = 0;
  v68_.v107 = 0;
  v68_.v108 = 0;
  v68_.v109 = 0;
  v68_.v110 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v35 = *v33++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v35) = 0;
    } while (v33 != (int*)v34);
    v33 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v33;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  v7 = 1;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  AssetTableFile_7e9e00((__int64)&v68_.v68, (unsigned __int8*)(v32 + 1944), 0,
                        1);
  AssetTableFile_7e8000((__int64)&v68_.v68);
  LOBYTE(v4) = v68_.v111;
  v1 = v68_.v111 >> 8;
  TrickEntity_7d1480((__int64)&v68_.v68);
LABEL_11:
  v8 = *(_DWORD*)(a1 + 336);
  v9 = (unsigned __int8)v4 | (v1 << 8);
  if (v7 == (unsigned __int8)v8 && (v8 & 1) != 0) {
    if (*(_QWORD*)(a1 + 328) != v9) {
      goto LABEL_14;
    }
    return 0;
  }
  if (v7 == (unsigned __int8)v8) {
    return 0;
  }
LABEL_14:
  v10 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 328) = v9;
  *(_BYTE*)(a1 + 336) = v7;
  if (v10 != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)v10 + 48LL))((void*)(&v68_.v68), (__int64)v10);
    v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
    v11[2] = 0;
    v12 = (unsigned __int64)(v11 + 3);
    v13 = v11;
    *v11 = GameData_212d3c8[0] + 2;
    v11[1] = 0;
    CharacterAppearance_10735d0((__int64)(v11 + 3));
    game_character_CharacterAppearance_Setup(v12, &v68_.v68);
    v19 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 128) = v12;
    *(_QWORD*)(a1 + 136) = v13;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
    TrickEntity_7d1480((__int64)&v68_.v68);
  }
  else {
    v23 = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 128) = 0;
    *(_QWORD*)(a1 + 136) = 0;
    if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
    }
  }
  v20 = *(_QWORD*)(a1 + 128);
  if (v20 != 0) {
    v21 = *(_QWORD*)(a1 + 136);
    v66_.v66 = *(_QWORD*)(a1 + 128);
    v66_.v67 = v21;
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
    LABEL_49:
      v65[0] = v20;
      v65[1] = v21;
      goto LABEL_50;
    }
    goto LABEL_57;
  }
  CharacterModel_cf7a40((void*)(&v66_.v66), *(_QWORD*)(a1 + 8));
  v21 = v66_.v67;
  if (v66_.v66 == 0) {
    if (v66_.v67 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v66_.v67 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak(v21);
    }
    if (*(_QWORD*)(a1 + 168) != 0) {
      v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
      v25[2] = 0;
      v20 = (unsigned __int64)(v25 + 3);
      v21 = (__int64)v25;
      *v25 = GameData_212d3c8[0] + 2;
      v25[1] = 0;
      CharacterAppearance_10735d0((__int64)(v25 + 3));
      v66_.v66 = v20;
      v66_.v67 = v21;
      AssetTableFile_7e9960((__int64)&v68_.v68, *(_QWORD*)(a1 + 168),
                            game_vstring_kEmpty_ptr[0]);
    }
    else {
      if (*(_QWORD*)(a1 + 600) == 0) {
        v66_.v66 = 0;
        v66_.v67 = 0;
      LABEL_57:
        v65[0] = v20;
        v65[1] = 0;
      LABEL_58:
        game_zview_cef0e0(a1, v65);
        v63_.v63 = v20;
        v63_.v64 = 0;
        goto LABEL_59;
      }
      v36 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
      v36[2] = 0;
      v20 = (unsigned __int64)(v36 + 3);
      v21 = (__int64)v36;
      *v36 = GameData_212d3c8[0] + 2;
      v36[1] = 0;
      CharacterAppearance_10735d0((__int64)(v36 + 3));
      v42 = *(_QWORD*)(a1 + 600);
      v66_.v66 = v20;
      v66_.v67 = v21;
      v68_.v68 = nullptr;
      v68_.v69 = 0;
      v43 = *(_QWORD*)(v42 + 168);
      v68_.v101 = 1065353216;
      v44 = (int*)GameData_21d9d18;
      v45 = GameData_21d9d20;
      v68_.v92 = 0;
      v68_.v93 = 0;
      v68_.v70 = 0;
      v68_.v71 = 0;
      v68_.v72 = 0;
      v68_.v73 = 0;
      v68_.v74 = 0;
      v68_.v75 = 0;
      v68_.v76 = 0;
      v68_.v77 = 0;
      v68_.v78 = 0;
      v68_.v79 = 0;
      v68_.v80 = 0;
      v68_.v81 = 0;
      v68_.v82 = 0;
      v68_.v83 = 0;
      v68_.v84 = 0;
      v68_.v85 = 0;
      v68_.v86 = 0;
      v68_.v87 = 0;
      v68_.v88 = 0;
      v68_.v89 = 0;
      v68_.v90 = 0;
      v68_.v91 = 0;
      v68_.v94 = 0;
      v68_.v95 = 0;
      v68_.v96 = 0;
      v68_.v97 = 0;
      v68_.v98 = 0;
      v68_.v99 = 0;
      v68_.v100 = 0;
      v68_.v102 = 0;
      v68_.v103 = 0;
      v68_.v104 = 0;
      v68_.v105 = 0;
      v68_.v106 = 0;
      v68_.v107 = 0;
      v68_.v108 = 0;
      v68_.v109 = 0;
      v68_.v110 = 0;
      if (GameData_21d9d18 != GameData_21d9d20) {
        do {
          v46 = *v44++;
          *(_QWORD*)(GameData_21d9d00 + 8 * v46) = 0;
        } while (v44 != (int*)v45);
        v44 = (int*)GameData_21d9d18;
      }
      GameData_21d9d20 = (__int64)v44;
      GameData_21d9d60 = 0;
      GameData_21d9d68 = 0;
      GameData_21d9d70 = 0;
      GameData_21d9d7c = 0;
      GameData_21d9d38 = GameData_21d9d30;
      GameData_21d9cf0 = GameData_21d9ce8;
      GameData_21d9d50 = GameData_21d9d48;
      GameData_21d9d78 = 8;
      AssetTableFile_7e9e00((__int64)&v68_.v68, (unsigned __int8*)(v43 + 1944),
                            0, 1);
      AssetTableFile_7e8000((__int64)&v68_.v68);
    }
    game_character_CharacterAppearance_Setup(v20, &v68_.v68);
    TrickEntity_7d1480((__int64)&v68_.v68);
    goto LABEL_49;
  }
  v65[0] = v66_.v66;
  v65[1] = v66_.v67;
  v20 = v66_.v66;
  if (v66_.v67 == 0) {
    goto LABEL_58;
  }
LABEL_50:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                            memory_order_relaxed);
  game_zview_cef0e0(a1, v65);
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  v63_.v63 = v66_.v66;
  v63_.v64 = v66_.v67;
  if (v66_.v67 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v66_.v67 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_59:
  GameRoutine_d0c0f0(a1 + 520, (__int64*)&v63_.v63, *(_QWORD*)(a1 + 168));
  v49 = v63_.v64;
  if (v63_.v64 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v63_.v64 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    std___1___shared_weak_count___release_weak(v49);
  }
  v50 = *(_QWORD*)(a1 + 8);
  v51 = v66_.v67;
  v62[0] = v66_.v66;
  v62[1] = v66_.v67;
  if (v66_.v67 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v66_.v67 + 8), 1u,
                              memory_order_relaxed);
    CharacterModel_cf4a30(v50, (__int64)v62);
    if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
      std___1___shared_weak_count___release_weak(v51);
    }
  }
  else {
    CharacterModel_cf4a30(v50, (__int64)v62);
  }
  v53 = GameData_21d96b8;
  if (*(_DWORD*)(GameData_21d96b8 + 8) == 1) {
    v54 = *(_QWORD*)(a1 + 168);
    if (v54 != 0) {
      v55 = game_Unit_GetJobUnknown30(*(_QWORD*)(a1 + 168));
      v56 = *(_DWORD*)(v54 + 592);
      v53 = GameData_21d96b8;
      v52 = v55 | 0x100;
      if (GameData_21d96b8 == 0) {
        v57 = 0x11000000000000LL;
      LABEL_74:
        v59 = 0x1.3333340000000p-2f;
        v58 = 1;
        if ((*(_BYTE*)(a1 + 387) & 0x80) == 0) {
          v59 = 0x0.0p+0f;
        }
        goto LABEL_76;
      }
    }
    else {
      v56 = 1;
      v52 = 257;
    }
    v60 = *(_DWORD*)(v53 + 8) == 1;
    v57 = 2048;
    if (!v60) {
      v57 = 0x11000000000000LL;
    }
    goto LABEL_74;
  }
  v58 = 0;
  v57 = 0x11000000000000LL;
  v56 = 1050253722;
  v59 = 0x1.3333340000000p-2f;
LABEL_76:
  v61 = v66_.v67;
  *(_DWORD*)(a1 + 296) = v56;
  *(_DWORD*)(a1 + 288) = 0;
  *(_WORD*)(a1 + 292) = v52;
  *(_BYTE*)(a1 + 300) = v58;
  *(_QWORD*)(a1 + 304) = v57;
  *(float*)(a1 + 312) = v59;
  *(_DWORD*)(a1 + 316) = 0;
  *(_BYTE*)(a1 + 320) = 1;
  if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
    std___1___shared_weak_count___release_weak(v61);
  }
  return 1;
}

float game_zview_ceef60(__int64 a1)
{
  float v1;
  float v2;
  float v3;
  float v4;
  int v6;
  float v7;

  v1 = *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 488LL) + 36LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                            memory_order_acquire) &
       1) == 0) {
    v7 = v1;
    v6 = __cxa_guard_acquire(&GameData_22110c8);
    v1 = v7;
    if (v6 != 0) {
      GameData_22110c0 = 0x3F80000000000000LL;
      __cxa_guard_release(&GameData_22110c8);
      v1 = v7;
    }
  }
  v2 =
      v1 + (float)(roundf(v1 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v2 > 0x1.921fb60000000p+0f) {
    v3 = 0x1.921fb60000000p+1f;
  LABEL_6:
    v2 = v3 - v2;
    v4 = -0x1.0000000000000p+0f;
    return (float)(PSEUDO_UNFUSED(
               (float)(v2 *
                       (float)((float)((float)-(
                                           float)(*(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c190) -
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
                                                                                     (float)((float)(*((float*)
                                                                                                           GameData_212c190 +
                                                                                                       1) -
                                                                                                     (float)(*(float*)
                                                                                                                 GameData_212c190 *
                                                                                                             (float)(v2 *
                                                                                                                     v2))) *
                                                                                             (float)(v2 *
                                                                                                     v2))) *
                                                                          (float)(v2 *
                                                                                  v2))) *
                                                          (float)(v2 * v2))) *
                                       (float)(v2 * v2)) +
                               0x1.0000000000000p+0f)) *
               *((float*)&GameData_22110c0 + 1))) +
           (float)(*(float*)&GameData_22110c0 *
                   (float)(v4 *
                           (float)((
                                       float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                       __int128*)0x10LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188) -
                                                         (float)((
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)GameData_212c188 +
                                                                                      4) +
                                                                            (float)((
                                                                                        float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) - (float)((float)(*((float*)
                                                                                                                                                                                                GameData_212c188 +
                                                                                                                                                                                            1) -
                                                                                                                                                                                          (float)(*(float*)
                                                                                                                                                                                                      GameData_212c188 *
                                                                                                                                                                                                  (float)(v2 * v2))) *
                                                                                                                                                                                  (float)(v2 *
                                                                                                                                                                                          v2))) *
                                                                                    (float)(v2 *
                                                                                            v2))) *
                                                                 (float)(v2 *
                                                                         v2))) *
                                              (float)(v2 * v2)) +
                                   0x1.0000000000000p+0f)));
  }
  v4 = 0x1.0000000000000p+0f;
  if (v2 < -0x1.921fb60000000p+0f) {
    v3 = -0x1.921fb60000000p+1f;
    goto LABEL_6;
  }
  return (float)(PSEUDO_UNFUSED(
             (float)(v2 *
                     (float)((float)((float)-(
                                         float)(*(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                          (_QWORD)
                                                              GameData_212c190) -
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
                                                                                   (float)((float)(*((float*)
                                                                                                         GameData_212c190 +
                                                                                                     1) -
                                                                                                   (float)(*(float*)
                                                                                                               GameData_212c190 *
                                                                                                           (float)(v2 *
                                                                                                                   v2))) *
                                                                                           (float)(v2 *
                                                                                                   v2))) *
                                                                        (float)(v2 *
                                                                                v2))) *
                                                        (float)(v2 * v2))) *
                                     (float)(v2 * v2)) +
                             0x1.0000000000000p+0f)) *
             *((float*)&GameData_22110c0 + 1))) +
         (float)(*(float*)&GameData_22110c0 *
                 (float)(v4 * (float)((
                                          float)((
                                                     float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                                                              (_QWORD)GameData_212c188) -
                                                                    (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4) + (float)((float)-(float)(*(float*)((char*)((
                                                                                                                                                                                                 _UNKNOWN**)0x8LL) +
                                                                                                                                                                                             (_QWORD)
                                                                                                                                                                                                 GameData_212c188) -
                                                                                                                                                                                   (float)((
                                                                                                                                                                                               float)(*((float*)
                                                                                                                                                                                                            GameData_212c188 +
                                                                                                                                                                                                        1) -
                                                                                                                                                                                                      (float)(*(float*)
                                                                                                                                                                                                                  GameData_212c188 *
                                                                                                                                                                                                              (float)(v2 *
                                                                                                                                                                                                                      v2))) *
                                                                                                                                                                                           (float)(v2 *
                                                                                                                                                                                                   v2))) *
                                                                                                                                                                   (float)(v2 *
                                                                                                                                                                           v2))) *
                                                                            (float)(v2 *
                                                                                    v2))) *
                                                 (float)(v2 * v2)) +
                                      0x1.0000000000000p+0f)));
}

__int64 game_zview_cef0e0(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  unsigned int v5;
  _BOOL4 v6;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64** v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  bool v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  unsigned int v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned int v59;
  int v60;
  __int64 v61;

  v2 = *(_QWORD*)(result + 168);
  v4 = result;
  v5 = *(_DWORD*)(*a2 + 11784) - 7;
  v6 = v5 < 2;
  if (v2 != 0) {
    v6 = *(int*)(v2 + 592) > 1 || v5 < 2;
  }
  v8 = *(_QWORD*)(result + 384);
  v31 = !v6;
  v9 = 0x200000000LL;
  if (v31) {
    v9 = 0;
  }
  v10 = v8 & 0xFFFFFFFDFFFFFFFFLL | v9;
  *(_QWORD*)(result + 384) = v10;
  if (v10 != v8) {
    v11 = *(_QWORD**)(result + 8);
    if (v11 != nullptr && v11[39] != 0) {
      v12 = v11[29];
      if (v12 != 0) {
        v13 = *(_DWORD*)(v12 + 340) & 0xFFFFFFFD |
              (2 * ((*(_DWORD*)(v11[2] + 384LL) & 2) != 0));
        *(_DWORD*)(v12 + 340) = v13;
        *(_DWORD*)(v12 + 340) = v13 & 0xFFFFFFFE |
                                ((*(_DWORD*)(v11[2] + 384LL) & 0x20) != 0) |
                                0x2000;
      }
    }
    result = game_zview_d0e440_alt1(*(_QWORD*)(result + 16), 1);
    v8 = *(_QWORD*)(v4 + 384);
    if ((v8 & 0x40000000) != 0) {
      v14 = 33;
    }
    else {
      v14 = 1;
    }
    LODWORD(v15) = (v14 | (v8 >> 29) & 0x10 | ((unsigned int)v8 >> 1) & 6)
                   << 16;
    if (*(_QWORD*)(v4 + 168) != 0) {
      v15 = (unsigned int)v15 | 0x80000;
    }
    else {
      v15 = (unsigned int)v15;
    }
    *(_QWORD*)(v4 + 440) = v15 + *(unsigned int*)(v4 + 184);
  }
  v16 = *a2;
  v17 = *(unsigned __int8*)(*a2 + 472);
  if ((v17 & 1) != 0) {
    v18 = *(_QWORD*)(*a2 + 480);
  }
  else {
    v18 = v17 >> 1;
  }
  if (v18 != 0) {
    goto LABEL_30;
  }
  v19 = *(unsigned __int8*)(v16 + 400);
  v20 = *(_QWORD*)(v16 + 408);
  if ((v19 & 1) == 0) {
    v20 = v19 >> 1;
  }
  if (v20 != 0) {
  LABEL_30:
    v21 = v8 | 0x400000000LL;
  }
  else {
    v21 = v8 & 0xFFFFFFFBFFFFFFFFLL;
  }
  *(_QWORD*)(v4 + 384) = v21;
  if (v21 != v8) {
    v22 = *(_QWORD**)(v4 + 8);
    if (v22 != nullptr && v22[39] != 0) {
      v23 = v22[29];
      if (v23 != 0) {
        v24 = *(_DWORD*)(v23 + 340) & 0xFFFFFFFD |
              (2 * ((*(_DWORD*)(v22[2] + 384LL) & 2) != 0));
        *(_DWORD*)(v23 + 340) = v24;
        *(_DWORD*)(v23 + 340) = v24 & 0xFFFFFFFE |
                                ((*(_DWORD*)(v22[2] + 384LL) & 0x20) != 0) |
                                0x2000;
      }
    }
    result = game_zview_d0e440_alt1(*(_QWORD*)(v4 + 16), 1);
    v25 = *(_QWORD*)(v4 + 384);
    v26 = v25 >> 29;
    v27 = (unsigned int)v25 >> 1;
    if ((*(_QWORD*)(v4 + 384) & 0x40000000LL) != 0) {
      v28 = 33;
    }
    else {
      v28 = 1;
    }
    LODWORD(v29) = (v28 | v26 & 0x10 | v27 & 6) << 16;
    if (*(_QWORD*)(v4 + 168) != 0) {
      v29 = (unsigned int)v29 | 0x80000;
    }
    else {
      v29 = (unsigned int)v29;
    }
    *(_QWORD*)(v4 + 440) = v29 + *(unsigned int*)(v4 + 184);
  }
  v30 = *(_QWORD*)(*a2 + 11608);
  v31 = GameData_22356f8 == 0 || GameData_2235708 == 0;
  if (!v31) {
    v32 = GameData_22356f8 - 1;
    if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
      v33 = -574916402;
      if ((unsigned __int64)GameData_22356f8 <= 0xFFFFFFFFDDBB78CELL) {
        v33 = 0xFFFFFFFFDDBB78CELL % GameData_22356f8;
      }
    }
    else {
      v33 = v32 & 0xFFFFFFFFDDBB78CELL;
    }
    v34 = *(__int64***)(GameData_22356f0 + 8 * v33);
    if (v34 != nullptr) {
      v35 = *v34;
      if (*v34 == nullptr) {
      LABEL_70:
        v37 = *(_QWORD*)(v30 + 5112);
        if (v37 != 0) {
          goto LABEL_71;
        }
        goto LABEL_99;
      }
      if ((GameData_22356f8 & v32) == 0) {
        while (1) {
          v38 = v35[1];
          if (v38 == -574916402) {
            if (*((_DWORD*)v35 + 4) == -574916402) {
              goto LABEL_94;
            }
          }
          else if ((v38 & v32) != v33) {
            goto LABEL_70;
          }
          v35 = (__int64*)*v35;
          if (v35 == nullptr) {
            goto LABEL_70;
          }
        }
      }
      while (1) {
        v36 = v35[1];
        if (v36 == -574916402) {
          break;
        }
        if (v36 >= GameData_22356f8) {
          v36 %= (unsigned __int64)GameData_22356f8;
        }
        if (v36 != v33) {
          goto LABEL_70;
        }
      LABEL_56:
        v35 = (__int64*)*v35;
        if (v35 == nullptr) {
          goto LABEL_70;
        }
      }
      if (*((_DWORD*)v35 + 4) != -574916402) {
        goto LABEL_56;
      }
    LABEL_94:
      v37 = *(_QWORD*)(v30 + 8LL * *((int*)v35 + 5));
      if (v37 == 0) {
        goto LABEL_99;
      }
    LABEL_71:
      v39 = *(unsigned __int8*)(v37 + 8);
      if ((v39 & 1) != 0) {
        v40 = *(_QWORD*)(v37 + 16);
      }
      else {
        v40 = v39 >> 1;
      }
      if (v40 != 0) {
        result = GameRoutine_10761d0(v37);
        if ((result & 1) != 0) {
          v41 = *(unsigned __int8*)(v37 + 8);
          v42 = *(_QWORD*)(v37 + 16);
          v43 = (v41 & 1) == 0;
          v44 = v41 >> 1;
          if (v43) {
            v45 = v37 + 9;
          }
          else {
            v45 = *(_QWORD*)(v37 + 24);
          }
          if (!v43) {
            v44 = v42;
          }
          if (v44 != 0) {
            v46 = ~v45;
            v47 = v45 - 1;
            v48 = 0;
            while (v44 != v48) {
              v49 = *(unsigned __int8*)(v47 + v44);
              v50 = v48++;
              ++v46;
              --v47;
              if (v49 == 47) {
                if (v44 + 1 != v48) {
                  if (v44 - v48 >= (unsigned __int64)v44) {
                    String_60a250("string_view::substr");
                  }
                  v45 = v44 - v46;
                  v44 = v50;
                }
                break;
              }
            }
          }
          if (v44 >= 4) {
            v51 = v45 + v44;
            result = v45;
            do {
              result = memchr(result, 95, v44 - 3);
              if (result == 0) {
                break;
              }
              if (*(_DWORD*)result == 1597003615) {
                if (result != v51 && result - v45 != -1) {
                  v52 = *(_QWORD*)(v4 + 384);
                  v53 = v52 | 0x800000000LL;
                  goto LABEL_100;
                }
                break;
              }
              ++result;
              v44 = v51 - result;
            } while (v51 - result >= 4);
          }
        }
      }
    LABEL_99:
      v52 = *(_QWORD*)(v4 + 384);
      v53 = v52 & 0xFFFFFFF7FFFFFFFFLL;
    LABEL_100:
      *(_QWORD*)(v4 + 384) = v53;
      if (v53 != v52) {
        v54 = *(_QWORD**)(v4 + 8);
        if (v54 != nullptr && v54[39] != 0) {
          v55 = v54[29];
          if (v55 != 0) {
            v56 = *(_DWORD*)(v55 + 340) & 0xFFFFFFFD |
                  (2 * ((*(_DWORD*)(v54[2] + 384LL) & 2) != 0));
            *(_DWORD*)(v55 + 340) = v56;
            *(_DWORD*)(v55 + 340) = v56 & 0xFFFFFFFE |
                                    ((*(_DWORD*)(v54[2] + 384LL) & 0x20) != 0) |
                                    0x2000;
          }
        }
        result = game_zview_d0e440_alt1(*(_QWORD*)(v4 + 16), 1);
        v57 = *(_QWORD*)(v4 + 384);
        v58 = v57 >> 29;
        v59 = (unsigned int)v57 >> 1;
        if ((*(_QWORD*)(v4 + 384) & 0x40000000LL) != 0) {
          v60 = 33;
        }
        else {
          v60 = 1;
        }
        LODWORD(v61) = (v60 | v58 & 0x10 | v59 & 6) << 16;
        if (*(_QWORD*)(v4 + 168) != 0) {
          v61 = (unsigned int)v61 | 0x80000;
        }
        else {
          v61 = (unsigned int)v61;
        }
        *(_QWORD*)(v4 + 440) = v61 + *(unsigned int*)(v4 + 184);
      }
      return result;
    }
  }
  v37 = *(_QWORD*)(v30 + 5112);
  if (v37 != 0) {
    goto LABEL_71;
  }
  goto LABEL_99;
}

__int64 game_zview_cf22c0(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  bool v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  bool v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  struct {
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v28_;
  struct {
    _BYTE v31[24];
    int v32;
    int v33;
  } v31_;
  unsigned __int64 v34;

  v3 = *(__int64**)(a1 + 8);
  v4 = *(__int64**)(a1 + 16);
  if (v3 == v4) {
    return 0;
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((a3 & 1) == 0) {
    while (1) {
      v7 = *v3;
      v28_.v29 = 0;
      v28_.v30 = 0;
      v28_.v28 = 0;
      v8 = *(_QWORD*)(v7 + 168);
      if (v8 != 0) {
        v9 = *(char*)(v8 + 584);
        v10 = *(char*)(v8 + 585);
        v11 = *(_DWORD*)(v8 + 592);
      }
      else {
        v34 =
            LANES64_OF(
                vzip1_s32(
                    *(int32x2_t*)(*(_QWORD*)(v7 + 16) + 560LL),
                    COERCE_AS(
                        int32x2_t,
                        LANES128_OF(
                            vextq_s8(*(int8x16_t*)(*(_QWORD*)(v7 + 16) + 560LL),
                                     *(int8x16_t*)(*(_QWORD*)(v7 + 16) + 560LL),
                                     8u))
                            .n128_u64[0])))
                .n64_u64[0];
        game_d74a00((void*)((__int64)v31_.v31), (float*)&v34);
        v9 = v31_.v32;
        v10 = v31_.v33;
        v11 = 1;
      }
      GameRoutine_d96580((__int64)&v28_.v28, v9, v10, v11);
      if (v28_.v28 == v28_.v29) {
        break;
      }
      v12 = v28_.v28 + 40;
      do {
        v13 = *(_DWORD*)(v12 - 16) == *(_DWORD*)(a2 + 24) &&
              *(_DWORD*)(v12 - 12) == *(_DWORD*)(a2 + 28);
        v14 = v13;
        if (v13) {
          break;
        }
        v13 = v12 == v28_.v29;
        v12 += 40;
      } while (!v13);
      if (v28_.v28 != 0) {
        goto LABEL_18;
      }
    LABEL_22:
      if (v14 != 0) {
        return *v3;
      }
      v3 += 2;
      if (v3 == v4) {
        return 0;
      }
    }
    v14 = 0;
    if (v28_.v28 == 0) {
      goto LABEL_22;
    }
  LABEL_18:
    v15 = *v6;
    v28_.v29 = v28_.v28;
    if (*(_QWORD*)(v15 + 200) != 0) {
      v16 = 128;
    }
    else {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16);
    goto LABEL_22;
  }
  while (1) {
    v17 = *v3;
    v28_.v29 = 0;
    v28_.v30 = 0;
    v28_.v28 = 0;
    v18 = *(_QWORD*)(v17 + 168);
    if (v18 != 0) {
      v19 = *(char*)(v18 + 584);
      v20 = *(char*)(v18 + 585);
      v21 = *(_DWORD*)(v18 + 592);
    }
    else {
      v34 =
          LANES64_OF(
              vzip1_s32(
                  *(int32x2_t*)(*(_QWORD*)(v17 + 16) + 560LL),
                  COERCE_AS(
                      int32x2_t,
                      LANES128_OF(
                          vextq_s8(*(int8x16_t*)(*(_QWORD*)(v17 + 16) + 560LL),
                                   *(int8x16_t*)(*(_QWORD*)(v17 + 16) + 560LL),
                                   8u))
                          .n128_u64[0])))
              .n64_u64[0];
      game_d74a00((void*)((__int64)v31_.v31), (float*)&v34);
      v19 = v31_.v32;
      v20 = v31_.v33;
      v21 = 1;
    }
    GameRoutine_d96580((__int64)&v28_.v28, v19, v20, v21);
    if (v28_.v28 == v28_.v29) {
      v24 = 0;
      if (v28_.v28 == 0) {
        goto LABEL_47;
      }
    LABEL_43:
      v25 = *v6;
      v28_.v29 = v28_.v28;
      if (*(_QWORD*)(v25 + 200) != 0) {
        v26 = 128;
      }
      else {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(v25 + v26);
      goto LABEL_47;
    }
    v22 = v28_.v28 + 40;
    do {
      v23 = *(_DWORD*)(v22 - 16) == *(_DWORD*)(a2 + 24) &&
            *(_DWORD*)(v22 - 12) == *(_DWORD*)(a2 + 28);
      v24 = v23;
      if (v23) {
        break;
      }
      v13 = v22 == v28_.v29;
      v22 += 40;
    } while (!v13);
    if (v28_.v28 != 0) {
      goto LABEL_43;
    }
  LABEL_47:
    if (v24 != 0) {
      result = *v3;
      if ((*(_BYTE*)(*v3 + 388) & 0x10) == 0) {
        return result;
      }
    }
    v3 += 2;
    if (v3 == v4) {
      return 0;
    }
  }
}

__int64 game_zview_cf27d0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int128 v5;
  int v6;
  int v7;
  __int64 v8;
  _QWORD* v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;

  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_13;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) != 0x1.0000000000000p+0f ||
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160,
                                                           *((float*)&v5 + 3)))
              .n128_f32[3] != 0x1.0000000000000p+0f) {
  LABEL_13:
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v7 = 2)
             : (v7 = 3),
         (v7 & v6) != 0)) {
      if ((*(_BYTE*)(a2 + 388) & 0x20) == 0) {
        if (*(int*)(a1 + 184) > 0) {
          return 0;
        }
        v8 = *(_QWORD*)(a1 + 136);
        v9 = *(_QWORD**)(a1 + 144);
        v10 = (char*)v9 - v8;
        v11 = ((__int64)v9 - v8) >> 3;
        if (v11 >= *(int*)(a1 + 192)) {
          return 0;
        }
        v12 = *(_QWORD*)(a1 + 152);
        if ((unsigned __int64)v9 >= v12) {
          v15 = v11 + 1;
          if ((v11 + 1) >> 61 != 0) {
            GameRoutine_cf38d0();
          }
          v16 = v12 - v8;
          v17 = fw_memory_g_heap_manager_ptr;
          if (v16 >> 2 > v15) {
            v15 = v16 >> 2;
          }
          if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
            v18 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v18 = v15;
          }
          if (v18 != 0) {
            if (v18 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v19 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v18, 16, 0);
          }
          else {
            v19 = 0;
          }
          v20 = v19 + 8 * v18;
          v21 = (char*)v9 - v8;
          v22 = (__int64)&v10[v19 + -8 * v11];
          *(_QWORD*)&v10[v19] = a2;
          v13 = (__int64)&v10[v19 + 8];
          memcpy(v22, v8, v21);
          *(_QWORD*)(a1 + 136) = v22;
          *(_QWORD*)(a1 + 144) = v13;
          *(_QWORD*)(a1 + 152) = v20;
          if (v8 != 0) {
            v23 = 128;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v23);
          }
        }
        else {
          *v9 = a2;
          v13 = (__int64)(v9 + 1);
        }
        *(_QWORD*)(a1 + 144) = v13;
      }
    }
  }
  return 1;
}

void game_zview_d0e440(__int64 result, char a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  float v4;
  bool v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if ((a2 & 1) != 0 || *(_BYTE*)(result + 937) != 0) {
    *(_BYTE*)(result + 937) = 0;
    game_zview_d15c20(result + 352, result);
    v3 = *(_QWORD*)(result + 8);
    v4 = 0x1.e000000000000p+4f;
    v5 = (*(_QWORD*)(*(_QWORD*)(v3 + 8) + 216LL) & 2LL) == 0;
    v6 = 0x1.9000000000000p+6f;
    *(_DWORD*)(result + 392) = 1120403456;
    if (!v5) {
      v6 = 0x1.4000000000000p+2f;
    }
    v7 = 0x1.4000000000000p+6f;
    *(_QWORD*)(result + 404) = 0xC1F0000041A00000LL;
    *(float*)(result + 388) = v6;
    *(_DWORD*)(result + 412) = -1035468800;
    if (v5) {
      v7 = 0x1.e000000000000p+4f;
    }
    else {
      v4 = 0x1.4000000000000p+4f;
    }
    *(float*)(result + 396) = v7;
    *(float*)(result + 400) = v4;
    v5 = *(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1;
    v8 = 0x1.015bfa0000000p-5f;
    *(_DWORD*)(result + 420) = 1048620541;
    if (!v5) {
      v8 = 0x1.8209f60000000p-5f;
    }
    v9 = -0x1.e000000000000p+4f;
    *(float*)(result + 416) = v8;
    if ((*(_BYTE*)(v3 + 387) & 0x80) != 0) {
      *(_QWORD*)(result + 408) = 0xC1C80000C1400000LL;
      *(float*)(result + 416) = v8 * 0x1.0000000000000p+2f;
      v9 = -0x1.8000000000000p+3f;
    }
    v10 = *(_QWORD*)(result + 528);
    if (v10 == 0) {
      v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
      v12 = *(_QWORD*)(result + 536);
      v11[1] = 0;
      v11[2] = 0;
      v11[4] = 0;
      v11[5] = 0;
      v11[6] = 0;
      *(_QWORD*)(result + 536) = v11;
      *v11 = GameData_1fdab58;
      v11[3] = 0;
      *(_QWORD*)(result + 528) = v11 + 3;
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
      *(_QWORD*)(*(_QWORD*)(result + 528) + 24LL) = *(_QWORD*)(result + 8);
      v9 = *(float*)(result + 408);
      v10 = *(_QWORD*)(result + 528);
    }
    *(float*)(v10 + 4) = v9;
    *(_DWORD*)(*(_QWORD*)(result + 528) + 8LL) = *(_DWORD*)(result + 412);
    *(_QWORD*)(*(_QWORD*)(result + 528) + 16LL) =
        *(_QWORD*)(result + 8) + 288LL;
    v13 = *(_QWORD*)(result + 8);
    v14 = *(float*)(v13 + 528);
    v15 = (*(_QWORD*)(v13 + 384) & 0x80000000LL) != 0;
    if ((*(_QWORD*)(v13 + 384) & 0x80000000LL) != 0) {
      v14 = v14 * 0x1.99999a0000000p-1f;
    }
    **(float**)(result + 528) = v14;
    *(_DWORD*)(*(_QWORD*)(result + 528) + 12LL) = v15;
    v16 = *(_QWORD*)(result + 528);
    v17 = *(_QWORD*)(result + 536);
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                memory_order_relaxed);
    }
    v18 = *(_QWORD*)(result + 160);
    *(_QWORD*)(result + 152) = v16;
    *(_QWORD*)(result + 160) = v17;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v18);
      if (v17 == 0) {
        return;
      }
    }
    else if (v17 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v17);
    }
  }
}

void game_zview_d0e6d0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x4_t v5;
  float32x4_t v6;
  __int128 v7;
  float32x4_t v8;
  int8x16_t v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  __int64 v13;
  int8x16_t v14;
  __int64 v15;
  __int64 v16;
  int8x16_t v17;
  int v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  int v25;
  __int128 v26;
  __int128 v27;
  __int64 v28;
  unsigned int v29;
  __int128 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int8x16_t v35;
  unsigned __int32 v36;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_BYTE*)(v2 + 145) == 1 && HubCharacterNatives_cf7940(v2) != 0 &&
      (*(_BYTE*)((v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL)) + 144) & 1) == 0 &&
      *(_BYTE*)(a1 + 752) == 1) {
    v4 = HubCharacterNatives_cf7940(v3);
    if ((*(_BYTE*)(a1 + 752) & 1) == 0) {
      GameRoutine_8123d0();
    }
    v5 = *(float32x4_t*)(v4 + 304);
    v6 = vsubq_f32(v5, *(float32x4_t*)(a1 + 736));
    *(_QWORD*)(a1 + 800) = LANES128(v6).n128_u64[0];
    v7 = *(_OWORD*)(a1 + 800);
    LANES128(v8).n128_u64[0] = *(_QWORD*)(a1 + 800);
    LANES128(v8).n128_u64[1] = LANES128(v6).n128_u32[2];
    v9 = vmulq_f32(v8, v8);
    *(float32x4_t*)(a1 + 800) = v8;
    LANES128(v9).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
            .n64_f32[0] >= 0x1.0c6f7c0000000p-20f) {
      v11 = *((float*)&v7 + 1);
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        v36 = LANES128(v5).n128_u32[1];
        v33 = __cxa_guard_acquire(&GameData_21a6130);
        LANES128(v5).n128_u32[1] = v36;
        if (v33 != 0) {
          v34 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v34;
          __cxa_guard_release(&GameData_21a6130);
          LANES128(v5).n128_u32[1] = v36;
        }
      }
      v10 = DWORD2(GameData_21a6120);
      *(_QWORD*)(a1 + 800) = GameData_21a6120;
      v8 = *(float32x4_t*)(a1 + 800);
      LODWORD(v11) = HIDWORD(*(_QWORD*)(a1 + 800));
      LANES128(v8).n128_u64[1] = v10;
      *(float32x4_t*)(a1 + 800) = v8;
    }
    if (v11 != 0x0.0p+0f) {
      *(_QWORD*)(a1 + 200) = 0;
      *(_QWORD*)(a1 + 208) = 0;
      *(_DWORD*)(a1 + 224) = 0;
      *(_QWORD*)(a1 + 216) = 0x3F80000000000000LL;
      if (*(_BYTE*)(a1 + 232) == 1) {
        *(_BYTE*)(a1 + 232) = 0;
      }
      *(_BYTE*)(a1 + 240) = 0;
      *(_DWORD*)(a1 + 244) = 0;
      *(_DWORD*)(a1 + 236) = -1027080192;
      if (*(_BYTE*)(a1 + 256) == 1) {
        *(_BYTE*)(a1 + 256) = 0;
      }
      if (*(_BYTE*)(a1 + 264) == 1) {
        *(_BYTE*)(a1 + 264) = 0;
      }
      if (*(_BYTE*)(a1 + 269) == 1) {
        *(_BYTE*)(a1 + 269) = 0;
      }
      if (*(_BYTE*)(a1 + 271) == 1) {
        *(_BYTE*)(a1 + 271) = 0;
      }
      if (*(_BYTE*)(a1 + 273) == 1) {
        *(_BYTE*)(a1 + 273) = 0;
      }
      *(_DWORD*)(a1 + 276) = 0;
      *(_DWORD*)(a1 + 176) = LANES128(v5).n128_u32[1];
      *(_DWORD*)(a1 + 180) = LANES128(v5).n128_u32[1];
      *(_DWORD*)(a1 + 228) = LANES128(v5).n128_u32[1];
      *(_WORD*)(a1 + 280) = 256;
      *(_BYTE*)(a1 + 232) = 1;
      *(_BYTE*)(a1 + 824) = 1;
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v31 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v31;
      __cxa_guard_release(&GameData_21a6130);
    }
    v12 = DWORD2(GameData_21a6120);
    *(_QWORD*)(a1 + 800) = GameData_21a6120;
    v8 = *(float32x4_t*)(a1 + 800);
    LANES128(v8).n128_u64[1] = v12;
    *(float32x4_t*)(a1 + 800) = v8;
  }
  v13 = *(_QWORD*)(a1 + 8);
  v14 = vmulq_f32(v8, v8);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_f32[0] >
      (float)((float)((float)(*(float*)(v13 + 528) * 0x1.0000000000000p+1f) +
                      0x1.4000000000000p+4f) *
              (float)((float)(*(float*)(v13 + 528) * 0x1.0000000000000p+1f) +
                      0x1.4000000000000p+4f))) {
    v15 = *(_QWORD*)(v13 + 8);
    if (*(_BYTE*)(v15 + 145) == 1) {
      v16 = HubCharacterNatives_cf7940(v15);
      if (v16 != 0) {
        v17 = *(int8x16_t*)(v16 + 304);
        *(_QWORD*)(a1 + 200) = 0;
        *(_QWORD*)(a1 + 208) = 0;
        *(_DWORD*)(a1 + 216) = 0;
        *(_QWORD*)(a1 + 220) = 1065353216;
        v18 = *(unsigned __int8*)(a1 + 232);
        *(int32x2_t*)(a1 + 292) = vzip1_s32(
            COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]),
            COERCE_AS(int32x2_t,
                      LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]));
        if (v18 == 1) {
          *(_BYTE*)(a1 + 232) = 0;
        }
        *(_BYTE*)(a1 + 240) = 0;
        *(_DWORD*)(a1 + 244) = 0;
        *(_DWORD*)(a1 + 236) = -1027080192;
        if (*(_BYTE*)(a1 + 256) == 1) {
          *(_BYTE*)(a1 + 256) = 0;
        }
        if (*(_BYTE*)(a1 + 264) == 1) {
          *(_BYTE*)(a1 + 264) = 0;
        }
        if (*(_BYTE*)(a1 + 269) == 1) {
          *(_BYTE*)(a1 + 269) = 0;
        }
        if (*(_BYTE*)(a1 + 271) == 1) {
          *(_BYTE*)(a1 + 271) = 0;
        }
        v19 = LANES128(v17).n128_f32[1];
        v35 = v17;
        if (*(_BYTE*)(a1 + 273) == 1) {
          *(_BYTE*)(a1 + 273) = 0;
        }
        *(_DWORD*)(a1 + 276) = 0;
        *(_DWORD*)(a1 + 176) = LANES128(v17).n128_u32[1];
        *(_DWORD*)(a1 + 180) = LANES128(v17).n128_u32[1];
        *(_DWORD*)(a1 + 228) = LANES128(v17).n128_u32[1];
        *(_WORD*)(a1 + 280) = 256;
        *(_BYTE*)(a1 + 232) = 1;
        GameRoutine_cfc7c0(a1 + 136, (float*)(a1 + 292), 1, 0x0.0p+0f);
        v20 = *(float*)(a1 + 176);
        if (vabds_f32(v19, v20) > 0x1.0000000000000p-23f) {
          v21 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
          if ((*(_BYTE*)(v21 + 226) & 1) == 0) {
            *(_BYTE*)(v21 + 226) = 1;
            v20 = *(float*)(a1 + 176);
          }
        }
        v22 = *(float*)(a1 + 180);
        if (*(_BYTE*)(a1 + 724) == 1) {
          v23 = *(float*)(a1 + 720);
          if (v20 < v23) {
            v20 = *(float*)(a1 + 720);
          }
          if (v22 < v23) {
            v22 = *(float*)(a1 + 720);
          }
        }
        v24 = *(_QWORD*)(a1 + 292);
        *(float*)(a1 + 580) = v22;
        *(float*)(a1 + 564) = v20;
        *(float*)(a1 + 340) = v19;
        *(float*)(a1 + 576) = v20;
        v25 = *(unsigned __int8*)(a1 + 752);
        *(_DWORD*)(a1 + 560) = v24;
        *(_DWORD*)(a1 + 336) = LANES128(v35).n128_u32[0];
        v26 = *(_OWORD*)(a1 + 560);
        v27 = *(_OWORD*)(a1 + 336);
        *((_QWORD*)&v26 + 1) = HIDWORD(v24);
        *((_QWORD*)&v27 + 1) = LANES128(v35).n128_u32[2];
        *(_OWORD*)(a1 + 560) = v26;
        *(_OWORD*)(a1 + 336) = v27;
        if (v25 == 1) {
          *(_BYTE*)(a1 + 752) = 0;
        }
        v28 = *(_QWORD*)(a1 + 768);
        *(_DWORD*)(a1 + 928) = 0;
        *(_QWORD*)(a1 + 776) = v28;
        *(_QWORD*)(a1 + 912) = *(_QWORD*)(a1 + 904);
        if ((*(_BYTE*)(a1 + 816) & 1) == 0) {
          *(_BYTE*)(a1 + 816) = 1;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v32 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v32;
          __cxa_guard_release(&GameData_21a6130);
        }
        v29 = DWORD2(GameData_21a6120);
        *(_QWORD*)(a1 + 800) = GameData_21a6120;
        v30 = *(_OWORD*)(a1 + 800);
        *((_QWORD*)&v30 + 1) = v29;
        *(_OWORD*)(a1 + 800) = v30;
      }
    }
  }
}

__int64 game_zview_d11e20(_QWORD* a1)
{
  float v1;
  float* v2;
  float v3;
  float v4;
  long double v5;
  _QWORD* v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  unsigned __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  _DWORD* v21;
  __int64 v22;
  _DWORD* v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  float* v42;
  float v43;
  float v44;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  char* v53;
  char* v54;
  __int64 v55;
  float v56;
  __int64 v57;
  __int64 v58;
  float v59;
  bool v60;
  char* v61;
  unsigned __int64 v62;
  char* v63;
  __int128 v64;
  int v65;
  __int128 v66;
  float v67;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  float v73;
  __int64 v74;
  _QWORD v76[2];
  char v77;

  v5 = *((long double*)a1 + 21);
  v1 = *((float*)a1 + 168);
  v2 = (float*)a1;
  v3 = *((float*)a1 + 167);
  v4 = *((float*)a1 + 74) - COERCE_FLOAT(a1[43]);
  *(float*)&v5 = sqrtf((float)(v4 * v4) +
                       (float)((float)(*((float*)a1 + 73) - *(float*)&v5) *
                               (float)(*((float*)a1 + 73) - *(float*)&v5)));
  if (*(float*)&v5 <
      (float)((float)(*(float*)(*(_QWORD*)(a1[1] + 8LL) + 228LL) *
                      sqrtf((float)(v1 * v1) + (float)(v3 * v3))) *
              0x1.99999a0000000p-3)) {
    v6 = &GameData_22110b8;
    LOBYTE(v6) = atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                                      memory_order_acquire);
    if (((unsigned __int8)v6 & 1) == 0) {
      a1 = (__cxa_guard_acquire_alt1((void*)(v6), &GameData_22110b8),
            (void*)(v6));
      if ((_DWORD)a1 != 0) {
        GameData_22110ac = 0;
        a1 = (_QWORD*)__cxa_guard_release_alt1(&GameData_22110b8, *(float*)&v5);
      }
    }
    v3 = v2[167];
    v1 = v2[168];
    v7 = v2[98] * *(float*)(*(_QWORD*)(*((_QWORD*)v2 + 1) + 8LL) + 228LL);
    v8 = v7 + v7;
    LODWORD(v5) = HIDWORD(GameData_22110ac);
    v9 = *(float*)&GameData_22110ac - v3;
    v10 = *((float*)&GameData_22110ac + 1) - v1;
    if ((float)(*(float*)&GameData_22110ac - v3) != 0.0 || v10 != 0.0) {
      v11 = sqrtf((float)(v10 * v10) + (float)(v9 * v9));
      v9 = v9 / v11;
      v10 = v10 / v11;
    }
    v12 = fabsf(v8 * fabsf(v9));
    if (v3 <= *(float*)&GameData_22110ac) {
      if (v3 >= *(float*)&GameData_22110ac ||
          (v3 = v3 + v12) <= *(float*)&GameData_22110ac) {
      LABEL_12:
        v13 = fabsf(v8 * fabsf(v10));
        if (v1 <= *((float*)&GameData_22110ac + 1)) {
          if (v1 >= *((float*)&GameData_22110ac + 1)) {
            goto LABEL_18;
          }
          v1 = v1 + v13;
          if (v1 <= *((float*)&GameData_22110ac + 1)) {
            goto LABEL_18;
          }
        }
        else {
          v1 = v1 - v13;
          if (v1 >= *((float*)&GameData_22110ac + 1)) {
            goto LABEL_18;
          }
        }
        v1 = *((float*)&GameData_22110ac + 1);
      LABEL_18:
        v2[167] = v3;
        v2[168] = v1;
        goto LABEL_19;
      }
    }
    else {
      v3 = v3 - v12;
      if (v3 >= *(float*)&GameData_22110ac) {
        goto LABEL_12;
      }
    }
    v3 = *(float*)&GameData_22110ac;
    goto LABEL_12;
  }
LABEL_19:
  v14 = *((_QWORD*)v2 + 87);
  v15 = *((__int64**)v2 + 86);
  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v14 - (_QWORD)v15) >> 2) >= 0x3D) {
    do {
      v16 = v14;
      v14 -= 12LL;
      *((_QWORD*)v2 + 87) = v16 - 12;
    } while (0xAAAAAAAAAAAAAAABLL * ((__int64)(v16 - 12 - (_QWORD)v15) >> 2) >
             0x3C);
    v3 = v2[167];
    v1 = v2[168];
  }
  v17 = *((_DWORD*)v2 + 131);
  v18 = *((_QWORD*)v2 + 88);
  if (v14 >= v18) {
    v25 = 1 - 0x5555555555555555LL * ((__int64)(v14 - (_QWORD)v15) >> 2);
    if (v25 > 0x1555555555555555LL) {
      GameRoutine_d13d00(v5);
    }
    v26 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v18 - (_QWORD)v15) >> 2);
    if (2 * v26 > v25) {
      v25 = 2 * v26;
    }
    if (v26 >= 0xAAAAAAAAAAAAAAALL) {
      v25 = 0x1555555555555555LL;
    }
    if (v25 != 0) {
      if (v25 > 0x1555555555555555LL) {
        GameRoutine_60a210_alt1(a1);
      }
      v27 = 12 * v25;
    }
    else {
      v27 = 12;
    }
    v28 = fw_memory_g_heap_manager_ptr;
    v29 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v27, 16, 0);
    v30 = *((__int64**)v2 + 87);
    *(float*)v29 = v3;
    *(float*)(v29 + 4) = v1;
    *(_DWORD*)(v29 + 8) = v17;
    v31 = v15;
    if (v15 != v30) {
      v32 = v15;
      v33 = v29 + 12;
      do {
        v34 = *v32;
        v35 = *((_DWORD*)v32 + 2);
        v32 = (__int64*)((char*)v32 + 12);
        *(_DWORD*)(v33 + 8) = v35;
        *(_QWORD*)v33 = v34;
        v33 += 12;
      } while (v32 != v30);
      v31 = v30;
    }
    v36 = *((__int64**)v2 + 86);
    *((_QWORD*)v2 + 87) = v15;
    if (v36 != v15) {
      v37 = v36;
      v38 = v29 + (char*)v36 - (char*)v15;
      do {
        v39 = *v37;
        v40 = *((_DWORD*)v37 + 2);
        v37 = (__int64*)((char*)v37 + 12);
        *(_DWORD*)(v38 + 8) = v40;
        *(_QWORD*)v38 = v39;
        v38 += 12;
      } while (v37 != v15);
    }
    *((_QWORD*)v2 + 86) = v29 + (char*)v36 - (char*)v15;
    *((_QWORD*)v2 + 87) = v29 + 12 + (char*)v31 - (char*)v15;
    *((_QWORD*)v2 + 88) = v29 + v27;
    if (v36 != nullptr) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v28 + v41, v36);
    }
  }
  else if (v15 == (__int64*)v14) {
    *(float*)v14 = v3;
    *(float*)(v14 + 4) = v1;
    *(_DWORD*)(v14 + 8) = v17;
    *((_QWORD*)v2 + 87) = v14 + 12;
  }
  else {
    v19 = v14;
    if (v14 >= 0xC) {
      v20 = *(_QWORD*)(v14 - 12);
      v19 = v14 + 12;
      *(_DWORD*)(v14 + 8) = *(_DWORD*)(v14 - 4);
      *(_QWORD*)v14 = v20;
    }
    *((_QWORD*)v2 + 87) = v19;
    if ((__int64*)v14 != (__int64*)((char*)v15 + 12)) {
      v21 = (_DWORD*)(v14 - 24);
      v22 = (__int64)v15 - v14 + 12;
      v23 = (_DWORD*)(v14 - 4);
      do {
        v22 += 12;
        *(v23 - 2) = *v21;
        *(v23 - 1) = v21[1];
        v24 = v21[2];
        v21 -= 3;
        *v23 = v24;
        v23 -= 3;
      } while (v22 != 0);
    }
    *(float*)v15 = v3;
    *((float*)v15 + 1) = v1;
    *((_DWORD*)v15 + 2) = v17;
  }
  v42 = *((float**)v2 + 107);
  if (v42 != nullptr) {
    fmodf(*(float*)(*((_QWORD*)v2 + 61) + 36LL) - *v42, 0x1.921fb60000000p+2);
    if (v43 >= 0.0) {
      v44 = v43 + 0.0;
    }
    else {
      v44 = (float)(v43 + 0.0) + 0x1.921fb60000000p+2;
    }
    if (v44 > 0x1.921fb60000000p+1) {
      v44 = v44 + -0x1.921fb60000000p+2;
    }
    if (fabsf(v44) < 0x1.015bfa0000000p-5 && *((_QWORD*)v2 + 107) != 0) {
      v46 = *((_QWORD*)v2 + 108);
      *((_QWORD*)v2 + 107) = 0;
      *((_QWORD*)v2 + 108) = 0;
      if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
        std___1___shared_weak_count___release_weak(v46);
      }
    }
  }
  v47 = *(_QWORD*)(*((_QWORD*)v2 + 1) + 8LL);
  if (v47 != 0) {
    v48 = *((_QWORD*)v2 + 61);
    if (*(_BYTE*)(v48 + 64) == 1) {
      v49 = *(_QWORD*)(v48 + 48);
      v50 = *(_QWORD*)(v48 + 56);
      v51 = *(_DWORD*)(v48 + 80);
      v52 = *(_QWORD*)(v47 + 336);
      v76[0] = v49;
      v76[1] = v50;
      v77 = 1;
      if (*(_BYTE*)(v52 + 16) != 0) {
        v53 = *(char**)(v52 + 24);
        v54 = *(char**)(v52 + 32);
      }
      else {
        v53 = *(char**)(v52 + 24);
        *(_BYTE*)(v52 + 16) = 1;
        *(_QWORD*)(v52 + 32) = v53;
        v54 = v53;
      }
      if ((unsigned __int64)(v54 - v53) >= 0x51) {
        do {
          if (v53 + 16 == v54) {
            v61 = v53;
          }
          else {
            do {
              v63 = v53;
              v64 = *((_OWORD*)v53 + 1);
              v53 += 16;
              v65 = *((_DWORD*)v63 + 5);
              *(_DWORD*)v63 = v64;
              *((_DWORD*)v63 + 1) = v65;
              v66 = *(_OWORD*)v63;
              *((_QWORD*)&v66 + 1) = *((unsigned int*)v63 + 6);
              *(_OWORD*)v63 = v66;
            } while (v63 + 32 != v54);
            v61 = *(char**)(v52 + 24);
          }
          v62 = v53 - v61;
          v54 = v53;
          *(_QWORD*)(v52 + 32) = v53;
          v53 = v61;
        } while (v62 > 0x50);
      }
      StateMoveTo_d42860(v52 + 24, v76);
    }
    else {
      v51 = *(_DWORD*)(v48 + 80);
      v55 = *(_QWORD*)(v47 + 336);
      if (*(_BYTE*)(v55 + 16) == 1) {
        *(_BYTE*)(v55 + 16) = 0;
      }
    }
    *(_DWORD*)(*(_QWORD*)(v47 + 336) + 64LL) = v51;
  }
  GameRoutine_dad4f0(*((_QWORD*)v2 + 63));
  v56 = v2[205];
  v57 = game_script_hub_g_frame_counter_ptr[0];
  if (v56 == 0.0) {
    if (*((_BYTE*)v2 + 520) == 0) {
      goto LABEL_94;
    }
    v58 = *((_QWORD*)v2 + 1);
    *((_BYTE*)v2 + 520) = 0;
    *(_DWORD*)(v58 + 424) = 1065353216;
    v59 = *(float*)(v58 + 428);
    v60 = *(_BYTE*)(v58 + 448) == 0;
  }
  else {
    if (((_BYTE)v2[130] & 1) != 0) {
      goto LABEL_94;
    }
    *((_BYTE*)v2 + 520) = 1;
    v58 = *((_QWORD*)v2 + 1);
    v67 = *(float*)(v58 + 428);
    v68 = *(unsigned __int8*)(v58 + 448);
    *(_DWORD*)(v58 + 424) = 0;
    v60 = v68 == 0;
    v59 = v67 * 0.0;
  }
  v69 = *(_QWORD*)(v58 + 8);
  if (!v60) {
    v59 = 0.0;
  }
  v70 = *(_QWORD*)(v69 + 232);
  *(float*)(v69 + 148) = v59;
  if (v70 == 0) {
    goto LABEL_92;
  }
  *(float*)(*(_QWORD*)(v70 + 304) + 12LL) = v59;
  v71 = *(_QWORD*)(v69 + 232);
  if (v71 == 0) {
    v59 = *(float*)(v69 + 148);
  LABEL_92:
    v72 = (float)(*(float*)(*(_QWORD*)v57 + 160LL) * 0x1.0aef000000000p+4) /
          0x1.f400000000000p+9;
    goto LABEL_93;
  }
  v59 = *(float*)(*(_QWORD*)(v71 + 304) + 16LL) * 0x1.0aef000000000p+4;
  v72 = 0x1.0624de0000000p-10;
LABEL_93:
  *(float*)(v69 + 228) = v59 * v72;
  v56 = v2[205];
LABEL_94:
  v73 = fabsf((float)(*(float*)(*(_QWORD*)v57 + 160LL) * 0x1.0aef000000000p+4) /
              0x1.f400000000000p+9);
  if (v56 > 0.0) {
    v56 = v56 - v73;
    if (v56 >= 0.0) {
      goto LABEL_100;
    }
  }
  else if (v56 >= 0.0 || (v56 = v56 + v73) <= 0.0) {
  LABEL_100:
    v74 = *((_QWORD*)v2 + 57);
    v2[205] = v56;
    GameRoutine_d47300(v74);
    return GameRoutine_d783a0(
        *((_QWORD*)v2 + 58),
        *(float*)(*(_QWORD*)(*((_QWORD*)v2 + 1) + 8LL) + 228LL));
  }
  v56 = 0.0;
  goto LABEL_100;
}

void game_zview_d127a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  float v21;
  __int128 v22;
  int v23;
  float v24;
  __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  int v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  int8x16_t* v34;
  int v35;
  int v36;
  __int64 v37;
  float v38;
  int v39;
  __int64 v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  float v44;
  unsigned int v45;
  unsigned int v46;
  unsigned __int64 v47;
  __int128 v48;

  CharacterController_d0d7c0(a1);
  v2 = *(_QWORD*)(a1 + 456);
  v3 = *(_QWORD*)(v2 + 8);
  for (i = *(_QWORD*)(v2 + 16); i != v3; i -= 16) {
    v5 = *(_QWORD*)(i - 8);
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  *(_QWORD*)(v2 + 16) = v3;
  v6 = *(__int64**)(a1 + 464);
  v7 = *v6;
  v8 = v6[1];
  if (*v6 != v8) {
    do {
      v9 = *(_QWORD*)(v8 - 8);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
      v8 -= 16;
    } while (v8 != v7);
  }
  v6[1] = v7;
  GameRoutine_d51e80(*(_QWORD*)(a1 + 488));
  v10 = *(_QWORD*)(a1 + 504);
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 21) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  v11 = *(unsigned __int8*)(v10 + 56);
  *(_QWORD*)(v10 + 40) = GameData_21a60e0;
  if (v11 == 1) {
    *(_BYTE*)(v10 + 56) = 0;
  }
  if (*(_BYTE*)(v10 + 72) == 1) {
    *(_BYTE*)(v10 + 72) = 0;
  }
  v12 = *(unsigned __int8*)(v10 + 92);
  *(_QWORD*)(v10 + 80) = 0;
  if (v12 == 1) {
    *(_BYTE*)(v10 + 92) = 0;
  }
  if (*(_BYTE*)(v10 + 100) == 1) {
    *(_BYTE*)(v10 + 100) = 0;
  }
  *(_DWORD*)(v10 + 104) = 0;
  *(_WORD*)(v10 + 108) = 1;
  if (*(_BYTE*)(v10 + 116) == 1) {
    *(_BYTE*)(v10 + 116) = 0;
  }
  v13 = *(_QWORD*)(a1 + 448);
  if (v13 != 0) {
    GameRoutine_d14710(v13);
    v14 = *(_QWORD*)(a1 + 448);
    CharacterController_d15100((float*)v14, 1);
    v15 = *(_QWORD*)(v14 + 8);
    v16 = *(float*)(v14 + 16);
  }
  else {
    v17 = *(_QWORD*)(a1 + 8);
    v18 = *(_QWORD*)(v17 + 168);
    if (v18 != 0) {
      v19 = *(_DWORD*)(v18 + 592);
      v20 = *(_QWORD*)(v17 + 168);
      v21 = (float)(unsigned int)(v19 - 1) * 0x1.4000000000000p+1f;
      if (v19 <= 0) {
        v21 = 0x0.0p+0f;
      }
      *(float*)&v45 =
          (float)((float)((float)((float)(unsigned int)(*(char*)(v18 + 585) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v21;
      *(float*)&v46 =
          (float)((float)((float)((float)(unsigned int)(*(char*)(v18 + 584) +
                                                        256) *
                                  0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f) +
          v21;
      *(_QWORD*)&v22 = v46;
      *((_QWORD*)&v22 + 1) = v45;
      v48 = v22;
      Unit_6c7fa0(v20, (__int64)&v48);
      v16 = (*(float (**)(__int64))(*(_QWORD*)(v18 + 112) + 16LL))(v18 + 112) *
            0x1.1df46a0000000p-6f;
      v15 = __PAIR64__(v45, v46);
    }
    else {
      if (*(_QWORD*)(v17 + 192) == 0) {
        goto LABEL_61;
      }
      LODWORD(v15) = *(_DWORD*)(v17 + 208);
      v16 = *(float*)(v17 + 224);
      HIDWORD(v15) = *(_DWORD*)(v17 + 216);
    }
  }
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 220) = 1065353216;
  v23 = *(unsigned __int8*)(a1 + 232);
  *(_QWORD*)(a1 + 292) = v15;
  if (v23 == 1) {
    *(_BYTE*)(a1 + 232) = 0;
  }
  *(_BYTE*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 244) = 0;
  *(_DWORD*)(a1 + 236) = -1027080192;
  if (*(_BYTE*)(a1 + 256) == 1) {
    *(_BYTE*)(a1 + 256) = 0;
  }
  if (*(_BYTE*)(a1 + 264) == 1) {
    *(_BYTE*)(a1 + 264) = 0;
  }
  if (*(_BYTE*)(a1 + 269) == 1) {
    *(_BYTE*)(a1 + 269) = 0;
  }
  if (*(_BYTE*)(a1 + 271) == 1) {
    *(_BYTE*)(a1 + 271) = 0;
  }
  v47 = v15;
  if (*(_BYTE*)(a1 + 273) == 1) {
    *(_BYTE*)(a1 + 273) = 0;
  }
  *(_DWORD*)(a1 + 276) = 0;
  *(_WORD*)(a1 + 280) = 256;
  *(_DWORD*)(a1 + 228) = 1128792064;
  *(_QWORD*)(a1 + 176) = 0x4348000043480000LL;
  *(_BYTE*)(a1 + 232) = 1;
  GameRoutine_cfc7c0(a1 + 136, (float*)(a1 + 292), 1, 0x0.0p+0f);
  v24 = *(float*)(a1 + 176);
  if (vabds_f32(0x1.9000000000000p+7f, v24) > 0x1.0000000000000p-23f) {
    v25 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
    if ((*(_BYTE*)(v25 + 226) & 1) == 0) {
      *(_BYTE*)(v25 + 226) = 1;
      v24 = *(float*)(a1 + 176);
    }
  }
  v26 = *(float*)(a1 + 180);
  if (*(_BYTE*)(a1 + 724) == 1) {
    v27 = *(float*)(a1 + 720);
    if (v24 < v27) {
      v24 = *(float*)(a1 + 720);
    }
    if (v26 < v27) {
      v26 = *(float*)(a1 + 720);
    }
  }
  v28 = *(_QWORD*)(a1 + 292);
  *(float*)(a1 + 580) = v26;
  *(float*)(a1 + 564) = v24;
  *(float*)(a1 + 576) = v24;
  *(_DWORD*)(a1 + 340) = 1128792064;
  v29 = *(unsigned __int8*)(a1 + 752);
  *(_DWORD*)(a1 + 560) = v28;
  *(_DWORD*)(a1 + 336) = v47;
  v30 = *(_OWORD*)(a1 + 560);
  v31 = *(_OWORD*)(a1 + 336);
  *((_QWORD*)&v30 + 1) = HIDWORD(v28);
  *((_QWORD*)&v31 + 1) = HIDWORD(v47);
  *(_OWORD*)(a1 + 560) = v30;
  *(_OWORD*)(a1 + 336) = v31;
  if (v29 == 1) {
    *(_BYTE*)(a1 + 752) = 0;
  }
  v32 = *(_QWORD*)(a1 + 768);
  *(_DWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 776) = v32;
  *(_QWORD*)(a1 + 912) = *(_QWORD*)(a1 + 904);
  if (*(_QWORD*)(a1 + 856) != 0) {
    v33 = *(_QWORD*)(a1 + 864);
    *(_QWORD*)(a1 + 856) = 0;
    *(_QWORD*)(a1 + 864) = 0;
    if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak(v33);
    }
  }
  v34 = *(int8x16_t**)(a1 + 488);
  v35 = LANES128(v34[11]).n128_u8[4];
  LANES128(v34[2]).n128_f32[0] = v16;
  LANES128(v34[2]).n128_f32[1] = v16;
  if (v35 == 1) {
    LANES128(v34[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v34);
  v17 = *(_QWORD*)(a1 + 8);
LABEL_61:
  if ((*(_BYTE*)(a1 + 848) & 1) == 0) {
    v36 = *(_QWORD*)(v17 + 32) != 0 ? 5 : 0;
    *(_DWORD*)(a1 + 32) = v36;
    *(_BYTE*)(a1 + 36) = 1;
    if ((*(_BYTE*)(a1 + 112) & 1) == 0 && (*(_BYTE*)(a1 + 113) & 1) != 0) {
      WaitRelease_cfa2a0(a1 + 16);
    }
  }
  if (*(_BYTE*)(a1 + 520) != 0) {
    v37 = *(_QWORD*)(a1 + 8);
    *(_BYTE*)(a1 + 520) = 0;
    *(_DWORD*)(v37 + 424) = 1065353216;
    v38 = *(float*)(v37 + 428);
    v39 = *(unsigned __int8*)(v37 + 448);
    v40 = *(_QWORD*)(v37 + 8);
    v41 = v39 == 0;
    v42 = *(_QWORD*)(v40 + 232);
    if (!v41) {
      v38 = 0x0.0p+0f;
    }
    *(float*)(v40 + 148) = v38;
    if (v42 != 0) {
      *(float*)(*(_QWORD*)(v42 + 304) + 12LL) = v38;
      v43 = *(_QWORD*)(v40 + 232);
      if (v43 != 0) {
        v38 = *(float*)(*(_QWORD*)(v43 + 304) + 16LL) * 0x1.0aef000000000p+4f;
        v44 = 0x1.0624de0000000p-10f;
      LABEL_76:
        *(float*)(v40 + 228) = v38 * v44;
        return;
      }
      v38 = *(float*)(v40 + 148);
    }
    v44 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
    goto LABEL_76;
  }
}

void game_zview_d12d30(__int64 result, int32x2_t* a2, char a3)
{

#pragma clang fp contract(off)
  float* v3;
  float v6;
  int v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  int v15;
  __int64 v16;

  v3 = (float*)(result + 292);
  *(int32x2_t*)(result + 292) = vzip1_s32(
      COERCE_AS(int32x2_t, LANES64(*(a2)).n64_u64[0]),
      COERCE_AS(int32x2_t,
                LANES128_OF(vextq_s8(*(int8x16_t*)LANES64(*(a2)).n64_u64,
                                     *(int8x16_t*)LANES64(*(a2)).n64_u64, 8u))
                    .n128_u64[0]));
  v6 = LANES64(*(a2)).n64_f32[1];
  *(_QWORD*)(result + 216) = 0x3F80000000000000LL;
  v7 = *(unsigned __int8*)(result + 232);
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_DWORD*)(result + 224) = 0;
  if (v7 == 1) {
    *(_BYTE*)(result + 232) = 0;
  }
  *(_BYTE*)(result + 240) = 0;
  *(_DWORD*)(result + 244) = 0;
  *(_DWORD*)(result + 236) = -1027080192;
  if (*(_BYTE*)(result + 256) == 1) {
    *(_BYTE*)(result + 256) = 0;
  }
  if (*(_BYTE*)(result + 264) == 1) {
    *(_BYTE*)(result + 264) = 0;
  }
  if (*(_BYTE*)(result + 269) == 1) {
    *(_BYTE*)(result + 269) = 0;
  }
  if (*(_BYTE*)(result + 271) == 1) {
    *(_BYTE*)(result + 271) = 0;
  }
  if (*(_BYTE*)(result + 273) == 1) {
    *(_BYTE*)(result + 273) = 0;
  }
  *(_DWORD*)(result + 276) = 0;
  *(float*)(result + 176) = v6;
  *(float*)(result + 180) = v6;
  *(float*)(result + 228) = v6;
  *(_WORD*)(result + 280) = 256;
  *(_BYTE*)(result + 232) = 1;
  if ((a3 & 1) != 0) {
    GameRoutine_cfc7c0(result + 136, v3, 1, 0x0.0p+0f);
    v8 = *(float*)(result + 176);
    if (vabds_f32(v6, v8) > 0x1.0000000000000p-23f) {
      v9 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL);
      if ((*(_BYTE*)(v9 + 226) & 1) == 0) {
        *(_BYTE*)(v9 + 226) = 1;
        v8 = *(float*)(result + 176);
      }
    }
  }
  else {
    v8 = v6;
    *(_BYTE*)(result + 824) = 1;
  }
  v10 = *(float*)(result + 180);
  if (*(_BYTE*)(result + 724) == 1) {
    v11 = *(float*)(result + 720);
    if (v8 < v11) {
      v8 = *(float*)(result + 720);
    }
    if (v10 < v11) {
      v10 = *(float*)(result + 720);
    }
  }
  v12 = *(_QWORD*)v3;
  *(float*)(result + 564) = v8;
  *(float*)(result + 576) = v8;
  *(float*)(result + 580) = v10;
  *(_DWORD*)(result + 560) = v12;
  v13 = *(_OWORD*)(result + 560);
  *((_QWORD*)&v13 + 1) = HIDWORD(v12);
  *(_OWORD*)(result + 560) = v13;
  *(_DWORD*)(result + 336) = LANES64(*(a2)).n64_u32[0];
  *(_DWORD*)(result + 340) = LANES64(*(a2)).n64_u32[1];
  v14 = *(_OWORD*)(result + 336);
  v15 = *(unsigned __int8*)(result + 752);
  *((_QWORD*)&v14 + 1) = LANES64(a2[1]).n64_u32[0];
  *(_OWORD*)(result + 336) = v14;
  if (v15 == 1) {
    *(_BYTE*)(result + 752) = 0;
  }
  v16 = *(_QWORD*)(result + 768);
  *(_DWORD*)(result + 928) = 0;
  *(_QWORD*)(result + 776) = v16;
  *(_QWORD*)(result + 912) = *(_QWORD*)(result + 904);
}

__attribute__((swiftcall)) void game_zview_d13080(PSEUDO_X8 x8_,
                                                  float32x4_t* result,
                                                  float* a2, char a3, float a5,
                                                  float a6, float a7)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v8;
  float32x4_t* v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  unsigned int v19;
  unsigned int v20;
  float32x4_t v21;
  unsigned __int64 v22;
  float v23;
  float v24;
  __int64 v25;
  float32x4_t v26;
  float32x4_t v27;
  __int128 v28;
  __int128 v29;
  float v30;
  int v31;
  float32x4_t v32;
  float32x4_t v33;

  v8 = LANES128(result[21]).n128_u64[1];
  v11 = result;
  LANES128(v33).n128_u64[0] = LANES128(result[21]).n128_u64[0];
  LANES128(v33).n128_u64[1] = v8;
  v12 =
      a5 + (float)(roundf(a5 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v12 > 0x1.921fb60000000p+0f) {
    v13 = 0x1.921fb60000000p+1f;
  LABEL_5:
    v12 = v13 - v12;
    v14 = -0x1.0000000000000p+0f;
    goto LABEL_6;
  }
  v14 = 0x1.0000000000000p+0f;
  if (v12 < -0x1.921fb60000000p+0f) {
    v13 = -0x1.921fb60000000p+1f;
    goto LABEL_5;
  }
LABEL_6:
  v15 = v12 * v12;
  v16 =
      v12 *
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
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v12 *
                                                                                                    v12))) *
                                                                            (float)(v12 *
                                                                                    v12))) *
                                                         (float)(v12 * v12))) *
                                         (float)(v12 * v12))) *
                      (float)(v12 * v12)) +
              0x1.0000000000000p+0f);
  v17 =
      v14 *
      (float)((float)((float)-(
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
                                                                                            v15)) *
                                                                            v15)) *
                                                         v15)) *
                                         v15)) *
                      v15) +
              0x1.0000000000000p+0f);
  v18 = a2[1];
  *(float*)&v19 = (float)(PSEUDO_UNFUSED(v16 * v18)) + (float)(*a2 * v17);
  *(float*)&v20 = (float)(PSEUDO_UNFUSED(v18 * v17)) - (float)(*a2 * v16);
  LANES128(v21).n128_u64[0] = v19;
  LANES128(v21).n128_u64[1] = v20;
  v32 = vaddq_f32(result[21], vmulq_n_f32(v21, a7));
  if ((a3 & 1) == 0) {
    goto LABEL_10;
  }
  v22 = LANES128(*(result)).n128_u64[1];
  v23 = 0x0.0p+0f;
  if (*(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1) {
    v23 = *(float*)(v22 + 528);
  }
  result = (float32x4_t*)game_zview_d17160_alt1(v23, *GameData_212ebd0[0],
                                                v22 + 288, &v33, &v32);
  v24 = 0x1.0000000000000p+0f;
  if (((unsigned __int8)result & 1) != 0) {
  LABEL_10:
    v25 = LANES128(*(v11)).n128_i64[1];
    v24 = 0x0.0p+0f;
    if ((*(_BYTE*)(v25 + 384) & 4) == 0) {
      v31 = 10;
      result = (float32x4_t*)game_zview_d24980_alt1(
          *(_QWORD*)(GameData_220b6f0 + 72), v25, (__int64)&v33, (__int64)&v32,
          &v31);
      v24 = 0x0.0p+0f;
      if (((unsigned __int8)result & 1) != 0) {
        v24 = 0x1.0000000000000p+0f;
      }
    }
  }
  v27 = v32;
  v26 = v33;
  *(_QWORD*)(a4 + 24) = 0;
  *(_QWORD*)(a4 + 40) = 0;
  *(_DWORD*)a4 = 0;
  *(_QWORD*)(a4 + 16) = LANES128(v26).n128_u64[0];
  *(_QWORD*)(a4 + 32) = LANES128(v27).n128_u64[0];
  v28 = *(_OWORD*)(a4 + 16);
  v29 = *(_OWORD*)(a4 + 32);
  *((_QWORD*)&v28 + 1) = LANES128(v26).n128_u32[2];
  *((_QWORD*)&v29 + 1) = LANES128(v27).n128_u32[2];
  *(_OWORD*)(a4 + 16) = v28;
  *(_OWORD*)(a4 + 32) = v29;
  if (v24 > 0x0.0p+0f) {
    v30 = -a6;
    if (a5 < 0x0.0p+0f) {
      v30 = a6;
    }
    *(float*)a4 = v30 * v24;
  }
  {
    result;
    return;
  }
}

__int64 game_zview_d13480(__int64 a1, float a2)
{
  float* v2;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float32x4_t* v14;
  _QWORD** v15;
  float v16;
  unsigned int v17;
  float32x4_t v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  float32x4_t v25;

  v2 = *(float**)(a1 + 8);
  v4 =
      a2 + (float)(roundf(a2 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v4 <= 0x1.921fb60000000p+0f) {
    v6 = 1.0f;
    if (v4 >= -0x1.921fb60000000p+0f) {
      goto LABEL_6;
    }
    v5 = -0x1.921fb60000000p+1f;
  }
  else {
    v5 = 0x1.921fb60000000p+1f;
  }
  v4 = v5 - v4;
  v6 = -1.0f;
LABEL_6:
  v7 = v4 * v4;
  v8 =
      v4 *
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
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v4 *
                                                                                                    v4))) *
                                                                            (float)(v4 *
                                                                                    v4))) *
                                                         (float)(v4 * v4))) *
                                         (float)(v4 * v4))) *
                      (float)(v4 * v4)) +
              1.0f);
  v9 =
      v6 *
      (float)((float)((float)-(
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
                                                                                            v7)) *
                                                                            v7)) *
                                                         v7)) *
                                         v7)) *
                      v7) +
              1.0f);
  v10 = v2[1];
  v11 = (float)(v8 * v10) + (float)(*v2 * v9);
  v12 = (float)(v10 * v9) - (float)(*v2 * v8);
  v13 = **(float**)(a1 + 16);
  v14 = *(float32x4_t**)(a1 + 32);
  v15 = *(_QWORD***)(a1 + 40);
  v16 = v13 + **(float**)(a1 + 24);
  *(float*)&v17 = v12 * v16;
  LANES128(v18).n128_u32[1] = 0;
  LANES128(v18).n128_f32[0] = v11 * v16;
  LANES128(v18).n128_u64[1] = v17;
  v25 = vaddq_f32(*v14, v18);
  v19 = *v15;
  v20 = **(int**)(a1 + 48);
  v21 = (v19[1] - *v19) >> 3;
  if ((int)v21 <= (int)v20) {
  LABEL_13:
    if ((game_zview_d17160_alt2(*GameData_212ebd0[0], *(_QWORD*)(a1 + 56), v14,
                                &v25, v13) &
         1) != 0) {
      return 1;
    }
  }
  else {
    v22 = v21 - v20;
    v23 = 8 * v20;
    while (*(_QWORD*)(*v19 + v23) == 0 || (GameRoutine_d24440(1.0f) & 1) == 0) {
      --v22;
      v23 += 8;
      if (v22 == 0) {
        v14 = *(float32x4_t**)(a1 + 32);
        v13 = **(float**)(a1 + 16);
        goto LABEL_13;
      }
    }
  }
  return 0;
}

__int64 game_zview_d13880(__int64 a1, float* a2, long double a3)
{
  float v3;
  float v4;
  float v6;
  float v7;
  float v8;
  __int64 v9;
  int v10;
  int8x16_t* v11;
  int v12;
  float v13;
  __int64 v14;
  double v16;
  int v17;
  float32x2_t* v18;
  __int64 v19;
  struct {
    float32x2_t v21[2];
    int v22;
    char v23;
    char gap21_[3];
    char v24;
    char gap25_[3];
    char v25;
    char gap29_[3];
    int v26;
    char v27;
    char gap37_[3];
    int v28;
    float v29;
    _DWORD v30[2];
    __int64 v31;
  } v21_;

  v4 = *a2;
  v3 = a2[1];
  v6 = (float)(PSEUDO_UNFUSED(v3 * v3)) + (float)(v4 * v4);
  *(_QWORD*)&a3 = 0;
  if (v6 > 0x0.0p+0f) {
    if (v4 != 0x0.0p+0f || v3 != 0x0.0p+0f) {
      v7 = sqrtf(v6);
      v4 = v4 / v7;
      v3 = v3 / v7;
    }
    *(float*)&a3 = v4;
    *(float*)&a3 = atan2f(a3, v3);
  }
  v8 = **(float**)(*(_QWORD*)(a1 + 8) + 144LL);
  if (*(_QWORD*)(a1 + 856) != 0) {
    v9 = *(_QWORD*)(a1 + 864);
    *(_QWORD*)(a1 + 856) = 0;
    *(_QWORD*)(a1 + 864) = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = LODWORD(a3);
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      LODWORD(a3) = v10;
    }
  }
  v11 = *(int8x16_t**)(a1 + 488);
  v12 = LANES128(v11[11]).n128_u8[4];
  v13 = *(float*)&a3 +
        (float)((float)((float)((float)(v8 + -0x1.0000000000000p-1f) +
                                (float)(v8 + -0x1.0000000000000p-1f)) *
                        0x1.921fb60000000p+1f) *
                0x1.99999a0000000p-4f);
  LANES128(v11[2]).n128_f32[0] = v13;
  LANES128(v11[2]).n128_f32[1] = v13;
  if (v12 == 1) {
    LANES128(v11[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v11);
  v14 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v16 = GameRoutine_d1cbc0(*(_QWORD*)(v14 + 344), -2109400973);
  *(float*)(a1 + 828) = *(float*)&v16 / 0x1.e000000000000p+5f;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  v21_.v24 = 0;
  v21_.v25 = 0;
  v21_.v31 = 0;
  v21_.v30[0] = 0;
  *(_DWORD*)((char*)v21_.v30 + 3) = 0;
  LANES64(v21_.v21[0]).n64_u32[0] = -2109400973;
  LANES64(v21_.v21[1]).n64_u64[0] = GameData_21a60e0;
  v21_.v28 = 1065353216;
  v17 = GameRoutine_d2cec0(-1511520286) - 1;
  v18 = *(float32x2_t**)(v14 + 344);
  v21_.v26 = v17;
  v21_.v27 = 1;
  v21_.v23 = 1;
  v19 = *(_QWORD*)(a1 + 8);
  v21_.v22 = 1028443341;
  v21_.v29 =
      (float)(fminf(fmaxf(*(float*)(*(_QWORD*)(v19 + 144) + 8LL), 0x0.0p+0f),
                    0x1.0000000000000p+0f) *
              0x1.9999980000000p-3f) +
      0x1.0000000000000p-1f;
  return CharacterModel_d198c0(v18, v21_.v21, 0, 0);
}

float game_zview_d15c20(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  int v5;
  unsigned __int64 v6;
  float v7;
  float v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  float v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  __int64 v38;
  float v39;
  int v40;
  int v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v47;
  float v48;
  float result;
  _QWORD* v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    __int64 v55;
    __int64 v56;
  } v55_;

  v4 = (__int64*)GameData_212d310;
  v5 = *(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL);
  if (v5 == 1) {
    v8 = 0x1.0000000000000p+3f;
    v7 = 0x1.0000000000000p+3f;
    goto LABEL_13;
  }
  if (v5 != 3) {
    v7 = 0x1.8000000000000p+2f;
    v8 = 0x1.c000000000000p+3f;
    goto LABEL_13;
  }
  v6 = game_HashString((__int64)&GameData_1a89f63);
  v7 = 0x1.8000000000000p+2f;
  v8 = 0x1.2000000000000p+3f;
  if (v6 != 0) {
    v9 = *(_QWORD*)(GameData_21c9d18 + 96);
    if (v9 != 0 && *(_QWORD*)(GameData_21c9d18 + 112) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = v6;
        if (v6 >= v9) {
          v12 = v6 % v9;
        }
      }
      else {
        v12 = v11 & v6;
      }
      v50 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d18 + 88) + 8 * v12);
      if (v50 != nullptr) {
        v51 = (_QWORD*)*v50;
        if (v51 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v53 = v51[1];
              if (v53 == v6) {
                if (v51[2] == v6) {
                  goto LABEL_89;
                }
              }
              else if ((v53 & v11) != v12) {
                goto LABEL_13;
              }
              v51 = (_QWORD*)*v51;
              if (v51 == nullptr) {
                goto LABEL_13;
              }
            }
          }
          do {
            v52 = v51[1];
            if (v52 == v6) {
              if (v51[2] == v6) {
              LABEL_89:
                v54 = v51[3];
                if (v54 != 0) {
                  v8 = *(float*)(v54 + 32);
                }
                break;
              }
            }
            else {
              if (v52 >= v9) {
                v52 %= v9;
              }
              if (v52 != v12) {
                break;
              }
            }
            v51 = (_QWORD*)*v51;
          } while (v51 != nullptr);
        }
      }
    }
  }
LABEL_13:
  v13 = v8;
  *(float*)(a1 + 8) = v8;
  *(float*)(a1 + 12) = v7;
  *(_DWORD*)(a1 + 16) = 1065353216;
  if (*(_BYTE*)(a1 + 76) == 1) {
    v13 = *(float*)(a1 + 72);
    *(float*)(a1 + 8) = v13;
  }
  v14 = v7;
  if (*(_BYTE*)(a1 + 84) == 1) {
    v14 = *(float*)(a1 + 80);
    *(float*)(a1 + 12) = v14;
  }
  v15 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(a1 + 92) == 1) {
    v15 = *(float*)(a1 + 88);
    *(float*)(a1 + 16) = v15;
  }
  v16 = *(float*)(a2 + 544);
  *(float*)(a1 + 8) = v13 * v16;
  *(float*)(a1 + 12) = v14 * v16;
  *(float*)(a1 + 16) = v15 * v16;
  v17 = *(_QWORD*)(a2 + 8);
  if (*(_BYTE*)(*(_QWORD*)(v17 + 8) + 145LL) != 1) {
    *(float*)(a1 + 28) = v8;
    v22 = 0x1.0000000000000p+0f;
    *(float*)(a1 + 20) = v7;
    goto LABEL_47;
  }
  v18 = GameRoutine_cec620(v17, 2);
  v19 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL);
  v20 = *(_QWORD*)(v19 + 344);
  if ((*(_BYTE*)(v19 + 216) & 2) != 0) {
    v21 = -304822991;
    if (GameRoutine_d1cdc0(v20, 0xEDD4C531)) {
      goto LABEL_28;
    }
    v21 = -1672613899;
    if (GameRoutine_d1cdc0(v20, 0x9C4DEFF5)) {
      goto LABEL_28;
    }
  }
  else {
    v21 = 869686455;
    if (GameRoutine_d1cdc0(v20, 0x33D65CB7u)) {
      goto LABEL_28;
    }
    v21 = -1080537169;
    if (GameRoutine_d1cdc0(v20, 0xBF984FAF)) {
      goto LABEL_28;
    }
  }
  v21 = 869686455;
LABEL_28:
  v23 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL);
  if ((*(_BYTE*)(v23 + 216) & 2) == 0 ||
      (v25 = *(_QWORD*)(v23 + 344), v24 = 1373748927,
       !GameRoutine_d1cdc0(v25, 0x51E1BEBFu)) &&
          (v24 = -787182425, !GameRoutine_d1cdc0(v25, 0xD1148CA7))) {
    v24 = 387327021;
  }
  v26 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL);
  v27 = *(_QWORD*)(v26 + 344);
  if (v27 != 0 && GameRoutine_d1cdc0(*(_QWORD*)(v26 + 344), v18)) {
    v28 = GameRoutine_d1cf60(v27, v18);
    if (v28 != 0) {
      v29 = *(float*)(v28 + 84);
      if (v29 > 0x0.0p+0f) {
        v8 = v29 * 0x1.1c71c80000000p-2f;
      }
    }
  }
  *(float*)(a1 + 28) = v8;
  v30 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL);
  v31 = *(_QWORD*)(v30 + 344);
  if (v31 != 0 && GameRoutine_d1cdc0(*(_QWORD*)(v30 + 344), v21)) {
    v32 = GameRoutine_d1cf60(v31, v21);
    if (v32 != 0) {
      v33 = *(float*)(v32 + 84);
      if (v33 > 0x0.0p+0f) {
        v7 = v33 * 0x1.1c71c80000000p-2f;
      }
    }
  }
  *(float*)(a1 + 20) = v7;
  v22 = 0x1.0000000000000p+0f;
  v34 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL);
  v35 = *(_QWORD*)(v34 + 344);
  if (v35 != 0 && GameRoutine_d1cdc0(*(_QWORD*)(v34 + 344), v24)) {
    v36 = GameRoutine_d1cf60(v35, v24);
    if (v36 != 0) {
      v37 = *(float*)(v36 + 84);
      if (v37 > 0x0.0p+0f) {
        v22 = v37 * 0x1.1c71c80000000p-2f;
      }
    }
  }
LABEL_47:
  v38 = *v4;
  *(float*)(a1 + 24) = v22;
  v39 = 0x1.0000000000000p+0f;
  if (*(_DWORD*)(v38 + 8) == 1) {
    v40 = *(_DWORD*)(a1 + 28);
    v41 = *(_DWORD*)(a1 + 20);
    *(float*)(a1 + 16) = v22;
    *(_DWORD*)(a1 + 8) = v40;
    *(_DWORD*)(a1 + 12) = v41;
    CharacterModel_cf7a40((void*)(&v55_.v55),
                          *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL));
    if (v55_.v55 != 0) {
      v42 = *(_DWORD*)(v55_.v55 + 11784);
      if (v42 < 4 || v42 == 6) {
        v39 = *(float*)(v55_.v55 + 32);
      }
      v43 = v55_.v56;
      if (v55_.v56 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
        std___1___shared_weak_count___release_weak(v43);
      }
    }
    else {
      v44 = v55_.v56;
      if (v55_.v56 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
        std___1___shared_weak_count___release_weak(v44);
      }
      v55_.v55 = 0;
      v55_.v56 = 0;
    }
  }
  CharacterModel_cf7a40((void*)(&v55_.v55),
                        *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL));
  if (v55_.v55 != 0) {
    if (*(_DWORD*)(v55_.v55 + 11784) == 26) {
      *(float*)(a1 + 32) = 0x1.0000000000000p+0f / *(float*)(v55_.v55 + 32);
    }
    v45 = v55_.v56;
    if (v55_.v56 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
      std___1___shared_weak_count___release_weak(v45);
    }
  }
  else {
    v46 = v55_.v56;
    if (v55_.v56 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
      std___1___shared_weak_count___release_weak(v46);
    }
    v55_.v55 = 0;
    v55_.v56 = 0;
  }
  v47 = v39 * *(float*)(a1 + 28);
  v48 = *(float*)(a1 + 20);
  *(float*)(a1 + 24) = v39 * *(float*)(a1 + 24);
  *(float*)(a1 + 28) = v47;
  result = v39 * v48;
  *(float*)(a1 + 20) = result;
  return result;
}

__attribute__((swiftcall)) void

game_zview_d163f0(PSEUDO_X8 x8_, __int64 unused_int0, float32x4_t* a1,
                  float32x4_t* a2, __int64 a3, char a4, float a6)
{

#pragma clang fp contract(off)
  float32x4_t* a5 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t* result;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  bool v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  unsigned __int64 v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  unsigned __int32 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int32 v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  struct {
    float32x4_t v41;
    unsigned __int64 v42;
    unsigned __int64 v43;
    unsigned __int64 v44;
    unsigned __int64 v45;
    unsigned __int64 v46;
    unsigned __int32 v47;
  } v41_;
  struct {
    float32x4_t v48;
    float32x4_t v49;
    unsigned __int64 v50;
    unsigned __int64 v51;
    unsigned __int64 v52;
    unsigned __int64 v53;
    unsigned __int64 v54;
    unsigned __int32 v55;
    char gap220_[4];
    char v56;
  } v48_;
  struct {
    float32x4_t v57[2];
    unsigned __int64 v58;
    unsigned __int64 v59;
    unsigned __int64 v60;
    unsigned __int64 v61;
    unsigned __int64 v62;
    unsigned __int32 v63;
    char gap316_[4];
    char v64;
  } v57_;

  if (a6 > 0x0.0p+0f) {
    result =
        X8CALL_X0(float32x4_t*, collision_6725f0((void*)((__int64)&v48_.v48),
                                                 a1, a2, a3, a6));
    if (v48_.v56 == 1) {
      v12 = *a1;
      v15 = *a1;
      v13 = *a2;
      v14 = v48_.v48;
      v41_.v44 = v48_.v52;
      v41_.v45 = v48_.v53;
      v16 = v13;
      LANES128(v14).n128_u32[3] = 0;
      v17 = v48_.v49;
      v41_.v46 = v48_.v54;
      LANES128(v15).n128_u32[3] = 0;
      LANES128(v16).n128_u32[3] = 0;
      LANES128(v17).n128_u32[3] = 0;
      v18 = v14;
      v41_.v47 = v48_.v55;
      v41_.v42 = v48_.v50;
      v41_.v43 = v48_.v51;
      if ((a4 & 1) != 0) {
        v19 = vmulq_f32(v48_.v49, v48_.v49);
        LANES128(v19).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                .n64_u64[0];
        v20 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
                  .n64_f32[0] <= 0x0.0p+0f;
        v18 = v14;
        if (!v20) {
          v21 = vsubq_f32(v13, v12);
          v36 = v17;
          v37 = v14;
          v22 = vmulq_f32(v21, v21);
          v38 = v16;
          v39 = v15;
          LANES128(v22).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v22, v22, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v22).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
          v23 = vrsqrteq_f32(v22);
          v24 = vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v22, v23)));
          v41_.v41 = vaddq_f32(
              vaddq_f32(v14, vmulq_n_f32(v48_.v49, a6)),
              vmulq_n_f32(
                  vbicq_s8(
                      vmulq_f32(v21,
                                vmulq_f32(v24, vrsqrtsq_f32(
                                                   v24, vmulq_f32(v22, v24)))),
                      vceqzq_f32(v22)),
                  a6));
          result = X8CALL_X0(
              float32x4_t*,
              collision_670c60((void*)((__int64)v57_.v57), a1, &v41_.v41, a3));
          if (v57_.v64 == 1) {
            v18 = v57_.v57[0];
          }
          else {
            v18 = v41_.v41;
          }
          LANES128(v18).n128_u32[3] = 0;
          v16 = v38;
          v15 = v39;
          v17 = v36;
          v14 = v37;
        }
      }
      v33 = v41_.v45;
      v34 = v41_.v46;
      LANES128(a5[3]).n128_u64[0] = v41_.v44;
      LANES128(a5[3]).n128_u64[1] = v33;
      v35 = v41_.v47;
      *a5 = v14;
      a5[1] = v17;
      LANES128(a5[4]).n128_u64[0] = v34;
      a5[5] = v15;
      a5[6] = v16;
      LANES128(a5[4]).n128_u32[2] = v35;
      v31 = v41_.v42;
      v32 = v41_.v43;
      a5[7] = v14;
      a5[8] = v18;
      goto LABEL_13;
    }
  LABEL_9:
    LANES128(*(a5)).n128_u8[0] = 0;
    LANES128(a5[9]).n128_u8[0] = 0;
    {
      result;
      return;
    }
  }
  result = X8CALL_X0(float32x4_t*,
                     collision_670c60((void*)((__int64)v57_.v57), a1, a2, a3));
  if (v57_.v64 != 1) {
    goto LABEL_9;
  }
  v25 = v57_.v61;
  v26 = v57_.v57[0];
  v27 = v57_.v57[1];
  LANES128(v26).n128_u32[3] = 0;
  LANES128(a5[3]).n128_u64[0] = v57_.v60;
  LANES128(a5[3]).n128_u64[1] = v25;
  v28 = *a1;
  v29 = *a2;
  LANES128(v27).n128_u32[3] = 0;
  LANES128(v28).n128_u32[3] = 0;
  LANES128(v29).n128_u32[3] = 0;
  LANES128(a5[4]).n128_u64[0] = v57_.v62;
  v30 = v57_.v63;
  *a5 = v26;
  a5[1] = v27;
  a5[5] = v28;
  a5[6] = v29;
  a5[7] = v26;
  a5[8] = v26;
  LANES128(a5[4]).n128_u32[2] = v30;
  v31 = v57_.v58;
  v32 = v57_.v59;
LABEL_13:
  LANES128(a5[2]).n128_u64[0] = v31;
  LANES128(a5[2]).n128_u64[1] = v32;
  LANES128(a5[9]).n128_u8[0] = 1;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_zview_d16620(PSEUDO_X8 x8_, _QWORD* a1,
                                                  float32x4_t* a2,
                                                  float32x4_t* a3, __int64 a4,
                                                  float a6)
{

#pragma clang fp contract(off)
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  int v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  float32x4_t v20;
  float32x4_t v21;
  _QWORD* v22;
  __int128 v23;
  __int128 v24;
  float32x4_t v25;
  float32x4_t v26;
  __int128 v27;
  __int128 v28;
  int v29;
  float32x4_t v30;
  float32x4_t v31;
  __int128 v32;
  int v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  int v40;
  unsigned __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
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
  __int64 v69;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  unsigned __int8 v77[256];
  struct {
    __int128 v78;
    __int128 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    int v85;
    char gap380_[4];
    char v86;
  } v78_;

  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  nn_os_LockMutex(&GameData_2167628),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  sprintf(v77, "%f+%f+%f_%f+%f+%f_%f_%llu", COERCE_FLOAT(*a2),
          COERCE_FLOAT(HIDWORD(LANES128(*(a2)).n128_u64[0])),
          COERCE_FLOAT(LANES128(*(a2)).n128_u64[1]), COERCE_FLOAT(*a3),
          COERCE_FLOAT(HIDWORD(LANES128(*(a3)).n128_u64[0])),
          COERCE_FLOAT(LANES128(*(a3)).n128_u64[1]), a6, a4),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v12 = strlen(v77),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v13 = wld_Crc32(0, v77, v12),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v14 = (__int64*)a1[1];
  v15 = (__int64*)a1[2];
  v16 = v13;
  if (v14 != v15) {
    while (*(_DWORD*)(*v14 + 160) != v13) {
      if (++v14 == v15) {
        goto LABEL_7;
      }
    }
  }
  if (v14 != v15) {
    v17 = *v14;
    goto LABEL_44;
  }
LABEL_7:
  v18 = (__int64*)fw_memory_g_heap_manager_ptr;
  v19 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0),
  v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v20 = *a2;
  v21 = *a3;
  v19[22] = 0;
  v19[23] = 0;
  v22 = v19;
  v19[24] = 0;
  v19[25] = 0;
  *v19 = 0;
  v19[1] = 0;
  v19[2] = 0;
  v19[3] = 0;
  v19[4] = 0;
  v19[5] = 0;
  v19[6] = 0;
  v19[7] = 0;
  v19[8] = 0;
  v19[9] = 0;
  v19[10] = 0;
  v19[11] = 0;
  v19[12] = 0;
  v19[13] = 0;
  v19[14] = 0;
  v19[15] = 0;
  v19[16] = 0;
  v19[17] = 0;
  v19[18] = 0;
  v19[19] = 0;
  v19[20] = 0;
  v19[21] = 0;
  v19[26] = 0;
  v19[27] = 0;
  *((_DWORD*)v19 + 40) = v16;
  *((float*)v19 + 52) = a6;
  v19[27] = a4;
  v19[22] = LANES128(v20).n128_u64[0];
  v19[24] = LANES128(v21).n128_u64[0];
  v23 = *((_OWORD*)v19 + 11);
  v24 = *((_OWORD*)v19 + 12);
  *((_QWORD*)&v23 + 1) = LANES128(v20).n128_u32[2];
  *((_QWORD*)&v24 + 1) = LANES128(v21).n128_u32[2];
  *((_OWORD*)v19 + 11) = v23;
  *((_OWORD*)v19 + 12) = v24;
  if (a6 < 0x1.0000000000000p-23f) {
    collision_670c60((void*)((__int64)&v78_.v78), a2, a3, a4),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    if (v78_.v86 == 1) {
      v28 = v78_.v78;
      HIDWORD(v28) = 0;
      v73 = v78_.v82;
      v74 = v78_.v83;
      v27 = v78_.v79;
      v25 = *a2;
      v26 = *a3;
      HIDWORD(v27) = 0;
      LANES128(v25).n128_u32[3] = 0;
      LANES128(v26).n128_u32[3] = 0;
      v75 = v78_.v84;
      v76 = v78_.v85;
      v71 = v78_.v80;
      v72 = v78_.v81;
      v29 = 1;
    }
    else {
      v29 = 0;
      v28 = (__typeof__(v28)){0};
    }
    if (*((unsigned __int8*)v22 + 144) == v29) {
      if (*((_BYTE*)v22 + 144) != 0) {
        *v22 = v28;
        v22[2] = v27;
        v34 = *(_OWORD*)v22;
        v35 = *((_OWORD*)v22 + 1);
        v22[10] = LANES128(v25).n128_u64[0];
        v22[12] = LANES128(v26).n128_u64[0];
        DWORD2(v35) = DWORD2(v27);
        v36 = *((_OWORD*)v22 + 5);
        v37 = *((_OWORD*)v22 + 6);
        DWORD2(v36) = LANES128(v25).n128_u32[2];
        DWORD2(v37) = LANES128(v26).n128_u32[2];
      LABEL_20:
        v22[14] = v28;
        v22[16] = v28;
        *((_QWORD*)&v34 + 1) = DWORD2(v28);
        HIDWORD(v35) = 0;
        v38 = *((_OWORD*)v22 + 7);
        v39 = *((_OWORD*)v22 + 8);
        HIDWORD(v36) = 0;
        v22[6] = v73;
        v22[7] = v74;
        HIDWORD(v37) = 0;
        v22[8] = v75;
        *(_OWORD*)v22 = v34;
        *((_OWORD*)v22 + 1) = v35;
        *((_QWORD*)&v38 + 1) = DWORD2(v28);
        *((_QWORD*)&v39 + 1) = DWORD2(v28);
        *((_DWORD*)v22 + 18) = v76;
        *((_OWORD*)v22 + 5) = v36;
        *((_OWORD*)v22 + 6) = v37;
        v22[4] = v71;
        v22[5] = v72;
        *((_OWORD*)v22 + 7) = v38;
        *((_OWORD*)v22 + 8) = v39;
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    if (*((_BYTE*)v22 + 144) == 0) {
      v22[6] = v73;
      v22[7] = v74;
      v40 = v76;
      *(_OWORD*)v22 = v28;
      *((_OWORD*)v22 + 1) = v27;
      v22[8] = v75;
      *((float32x4_t*)v22 + 5) = v25;
      *((float32x4_t*)v22 + 6) = v26;
    LABEL_26:
      *((_DWORD*)v22 + 18) = v40;
      v22[4] = v71;
      v22[5] = v72;
      *((_OWORD*)v22 + 7) = v28;
      *((_OWORD*)v22 + 8) = v28;
      *((_BYTE*)v22 + 144) = 1;
      goto LABEL_27;
    }
    goto LABEL_24;
  }
  collision_6725f0((void*)((__int64)&v78_.v78), a2, a3, a4, a6),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (v78_.v86 == 1) {
    v31 = *a2;
    LANES128(v31).n128_u32[3] = 0;
    v73 = v78_.v82;
    v74 = v78_.v83;
    v30 = *a3;
    v28 = v78_.v78;
    v32 = v78_.v79;
    LANES128(v30).n128_u32[3] = 0;
    HIDWORD(v28) = 0;
    HIDWORD(v32) = 0;
    v75 = v78_.v84;
    v76 = v78_.v85;
    v71 = v78_.v80;
    v72 = v78_.v81;
    v33 = 1;
  }
  else {
    v33 = 0;
    v28 = (__typeof__(v28)){0};
  }
  if (*((unsigned __int8*)v22 + 144) != v33) {
    if (*((_BYTE*)v22 + 144) == 0) {
      v22[6] = v73;
      v22[7] = v74;
      v40 = v76;
      *(_OWORD*)v22 = v28;
      *((_OWORD*)v22 + 1) = v32;
      v22[8] = v75;
      *((float32x4_t*)v22 + 5) = v31;
      *((float32x4_t*)v22 + 6) = v30;
      goto LABEL_26;
    }
  LABEL_24:
    *((_BYTE*)v22 + 144) = 0;
    goto LABEL_27;
  }
  if (*((_BYTE*)v22 + 144) != 0) {
    *v22 = v28;
    v22[2] = v32;
    v34 = *(_OWORD*)v22;
    v35 = *((_OWORD*)v22 + 1);
    v22[10] = LANES128(v31).n128_u64[0];
    v22[12] = LANES128(v30).n128_u64[0];
    DWORD2(v35) = DWORD2(v32);
    v36 = *((_OWORD*)v22 + 5);
    v37 = *((_OWORD*)v22 + 6);
    DWORD2(v36) = LANES128(v31).n128_u32[2];
    DWORD2(v37) = LANES128(v30).n128_u32[2];
    goto LABEL_20;
  }
LABEL_27:
  v42 = (_QWORD*)a1[2];
  v41 = a1[3];
  if ((unsigned __int64)v42 >= v41) {
    v44 = a1[1];
    v45 = (char*)v42 - v44;
    v46 = ((__int64)v42 - v44) >> 3;
    v47 = v46 + 1;
    if ((unsigned __int64)(v46 + 1) >> 61 != 0) {
      GameRoutine_d17460(),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v48 = v41 - v44;
    if (v48 >> 2 > v47) {
      v47 = v48 >> 2;
    }
    if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFF8LL) {
      v49 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v49 = v47;
    }
    if (v49 != 0) {
      if (v49 >> 61 != 0) {
        GameRoutine_60a210(),
            v25 =
                COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v50 = fw_memory_HeapManager_Allocate(*v18, 8 * v49, 16, 0),
      v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v44 = a1[1];
      v51 = a1[2] - v44;
      v46 = v51 >> 3;
    }
    else {
      v50 = 0;
      v51 = (__int64)v42 - v44;
    }
    v52 = &v45[v50];
    v53 = v50 + 8 * v49;
    v54 = (__int64)&v45[v50 + -8 * v46];
    *(_QWORD*)v52 = v22;
    v43 = v52 + 8;
    memcpy(v54, v44, v51),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    a1[1] = v54;
    a1[2] = v43;
    a1[3] = v53;
    if (v44 != 0) {
      v55 = 128;
      if (*(_QWORD*)(*v18 + 200) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free(*v18 + v55),
          v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
  }
  else {
    *v42 = v22;
    v43 = v42 + 1;
  }
  a1[2] = v43;
  v17 = *(v43 - 1);
LABEL_44:
  v56 = *(unsigned __int8*)(v17 + 144);
  *(_BYTE*)a5 = 0;
  *(_BYTE*)(a5 + 144) = 0;
  if (v56 == 1) {
    v57 = *(_QWORD*)(v17 + 8);
    v58 = *(_QWORD*)(v17 + 16);
    v59 = *(_QWORD*)(v17 + 24);
    *(_QWORD*)a5 = *(_QWORD*)v17;
    *(_QWORD*)(a5 + 8) = v57;
    v60 = *(_QWORD*)(v17 + 48);
    v61 = *(_QWORD*)(v17 + 56);
    *(_QWORD*)(a5 + 16) = v58;
    *(_QWORD*)(a5 + 24) = v59;
    v62 = *(_QWORD*)(v17 + 64);
    *(_QWORD*)(a5 + 48) = v60;
    *(_QWORD*)(a5 + 56) = v61;
    LODWORD(v60) = *(_DWORD*)(v17 + 72);
    *(_QWORD*)(a5 + 64) = v62;
    *(_DWORD*)(a5 + 72) = v60;
    v63 = *(_QWORD*)(v17 + 40);
    *(_QWORD*)(a5 + 32) = *(_QWORD*)(v17 + 32);
    *(_QWORD*)(a5 + 40) = v63;
    v64 = *(_QWORD*)(v17 + 88);
    *(_QWORD*)(a5 + 80) = *(_QWORD*)(v17 + 80);
    *(_QWORD*)(a5 + 88) = v64;
    v65 = *(_QWORD*)(v17 + 104);
    *(_QWORD*)(a5 + 96) = *(_QWORD*)(v17 + 96);
    *(_QWORD*)(a5 + 104) = v65;
    v66 = *(_QWORD*)(v17 + 120);
    *(_QWORD*)(a5 + 112) = *(_QWORD*)(v17 + 112);
    *(_QWORD*)(a5 + 120) = v66;
    v69 = v17 + 128;
    v67 = *(_QWORD*)(v17 + 128);
    v68 = *(_QWORD*)(v69 + 8);
    *(_BYTE*)(a5 + 144) = 1;
    *(_QWORD*)(a5 + 128) = v67;
    *(_QWORD*)(a5 + 136) = v68;
  }
  {
    nn_os_UnlockMutex(&GameData_2167628),
        v25 = COERCE_AS(__typeof__(v25), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    return;
  }
}

bool game_zview_d17160(float a1, __int64 a2, __int64 a3, float32x4_t* a4,
                       float32x4_t* a5)
{
  unsigned __int64 v9;
  __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float v19;
  float32x4_t v20;
  float32x4_t v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64* v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  char v36;
  __int64 v37;
  float v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  struct {
    __int64 v43;
    __int64 v44;
    __int64 v45;
    char gap88_[56];
    char v46;
  } v43_;

  if (*(_BYTE*)(a3 + 32) == 1) {
    LODWORD(v9) = 0;
    v10 = *(_QWORD*)(a3 + 16);
    *((float*)&v9 + 1) = a1 + *(float*)(a3 + 24);
    v11 = vaddq_f32(*a4, COERCE_AS(float32x4_t, v9));
    v12 = vaddq_f32(COERCE_AS(float32x4_t, v9), *a5);
    v41 = (__typeof__(v41)){0};
    v42 = v11;
    v13 = vsubq_f32(v12, v11);
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
    v15 =
        LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
            .n64_f32[0];
    LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
    v16 = vrsqrteq_f32(v14);
    v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)));
    v18 = vbicq_s8(
        vmulq_f32(v13, vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v14, v17)))),
        vceqzq_f32(v14));
    v19 = 0x1.47ae140000000p-7f;
    if (v15 >= 0x1.47ae140000000p-7f) {
      v19 = v15;
    }
    v20 = vaddq_f32(v11, vmulq_n_f32(v18, v19));
    LANES128(v21).n128_u64[0] = LANES128(v20).n128_u64[0];
    LANES128(v21).n128_u64[1] = LANES128(v20).n128_u32[2];
    v41 = v21;
    if (a1 <= 0x0.0p+0f) {
      collision_670c60((void*)((__int64)&v43_.v43), &v42, &v41, v10);
      if ((v43_.v46 & 1) != 0) {
        return 0;
      }
    }
    else {
      collision_6725f0((void*)((__int64)&v43_.v43), &v42, &v41, v10, a1);
      if ((v43_.v46 & 1) != 0) {
        return 0;
      }
    }
  }
  if (*(_BYTE*)(a3 + 12) != 1) {
    return 1;
  }
  v22 = COERCE_FLOAT(LANES128(*(a4)).n128_u64[1]);
  v23 = COERCE_FLOAT(LANES128(*(a5)).n128_u64[1]);
  v24 = LANES128_OF(vsubq_f32(*a4, *a5)).n128_f32[0];
  v40 = *a4;
  v25 = v23 - v22;
  v26 = (float)(PSEUDO_UNFUSED((float)(v22 - v23) * (float)(v22 - v23))) +
        (float)(v24 * v24);
  v27 = LANES128_OF(vsubq_f32(*a5, *a4)).n128_f32[0];
  if (v27 != 0x0.0p+0f || v25 != 0x0.0p+0f) {
    v28 = sqrtf((float)(PSEUDO_UNFUSED(v25 * v25)) + (float)(v27 * v27));
    v27 = v27 / v28;
    v25 = v25 / v28;
  }
  v39 = v27;
  v29 = (__int64*)fw_memory_g_heap_manager_ptr;
  v43_.v43 = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 320, 16, 0);
  v43_.v44 = v43_.v43;
  v43_.v45 = v43_.v43 + 320;
  LANES128(v42).n128_f32[0] =
      LANES128(v40).n128_f32[0] + (float)(PSEUDO_UNFUSED(v39 * 0x0.0p+0f));
  LANES128(v42).n128_f32[1] = v22 + (float)(PSEUDO_UNFUSED(v25 * 0x0.0p+0f));
  GameRoutine_d74b60(&v43_.v43, (float*)&v42, a1);
  if (v26 != 0x0.0p+0f) {
    v30 = sqrtf(v26);
    v31 = 0x0.0p+0f;
    do {
      v31 =
          fminf(fmaxf((float)(PSEUDO_UNFUSED(a1 * 0x1.ffbe760000000p+0f)) + v31,
                      0x0.0p+0f),
                v30);
      LANES128(v42).n128_f32[0] =
          LANES128(v40).n128_f32[0] + (float)(PSEUDO_UNFUSED(v39 * v31));
      LANES128(v42).n128_f32[1] = v22 + (float)(PSEUDO_UNFUSED(v25 * v31));
      GameRoutine_d74b60(&v43_.v43, (float*)&v42, a1);
    } while (v31 < v30);
  }
  v32 = v43_.v43;
  v33 = v43_.v44;
  if (v43_.v43 == v43_.v44) {
    v34 = 1;
    if (v43_.v43 == 0) {
      return (v34 & 1) != 0;
    }
    goto LABEL_19;
  }
  do {
    v34 = GameRoutine_d740c0(v32, (int*)a3);
    if ((v34 & 1) == 0) {
      break;
    }
    v32 += 40;
  } while (v32 != v33);
  v32 = v43_.v43;
  if (v43_.v43 != 0) {
  LABEL_19:
    v35 = *v29;
    v36 = v34;
    v43_.v44 = v32;
    v37 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(v35 + v37);
    v34 = v36;
  }
  return (v34 & 1) != 0;
}

__int64 game_zview_d1d920(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
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
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  __int128 v28;
  _QWORD* v29;
  __int64 result;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;

  if (*(_QWORD*)GameData_212dc38[0] == 0) {
    *(_QWORD*)GameData_212dc38[0] = a1;
  }
  *(_DWORD*)(a1 + 8) = 0;
  v2 = GameData_212e740[0];
  *(_QWORD*)(a1 + 96) = 1065353216;
  *(_QWORD*)(a1 + 104) = 0x100000000LL;
  *(_QWORD*)(a1 + 112) = 0x4248000041D80000LL;
  *(_QWORD*)(a1 + 120) = 0x41C0000042100000LL;
  v3 = GameData_212c2a0;
  *(_QWORD*)a1 = game_zview_Camera_vtable;
  *(_QWORD*)(a1 + 128) = 0x4110000041800000LL;
  *(_QWORD*)(a1 + 152) = 1092616192;
  *(_QWORD*)(a1 + 16) = v2 + 2;
  *(_QWORD*)(a1 + 24) = 0;
  *(_OWORD*)(a1 + 32) = GameData_1a83090;
  *(_OWORD*)(a1 + 48) = (__typeof__(*(_OWORD*)(a1 + 48))){0};
  v4 = v3[1];
  v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3);
  v6 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 176) = *v3;
  *(_QWORD*)(a1 + 184) = v4;
  *(_QWORD*)(a1 + 192) = v5;
  *(_QWORD*)(a1 + 200) = v6;
  v7 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v3);
  *(_QWORD*)(a1 + 224) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3);
  *(_QWORD*)(a1 + 232) = v7;
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 208) = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3);
  *(_QWORD*)(a1 + 216) = v8;
  v9 = (__int64*)GameData_212c2b0;
  *(_DWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  v10 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9);
  v12 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9);
  v11 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
  v14 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9);
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v9);
  v16 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9);
  v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9 + 8);
  v17 = *v9;
  *(_QWORD*)(a1 + 256) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 8);
  *(_QWORD*)(a1 + 264) = v11;
  *(_QWORD*)(a1 + 304) = v17;
  *(_QWORD*)(a1 + 312) = v10;
  v18 = v9[1];
  *(_QWORD*)(a1 + 240) = *v9;
  *(_QWORD*)(a1 + 248) = v18;
  v19 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v9);
  *(_QWORD*)(a1 + 288) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9);
  *(_QWORD*)(a1 + 296) = v13;
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
  v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 16);
  v22 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v9);
  *(_QWORD*)(a1 + 336) = v16;
  *(_QWORD*)(a1 + 344) = v19;
  *(_QWORD*)(a1 + 272) = v20;
  *(_QWORD*)(a1 + 280) = v15;
  *(_QWORD*)(a1 + 320) = v12;
  *(_QWORD*)(a1 + 328) = v21;
  *(_QWORD*)(a1 + 352) = v14;
  *(_QWORD*)(a1 + 360) = v22;
  *(_BYTE*)(a1 + 148) = 1;
  *(_OWORD*)(a1 + 64) = GameData_1a83610;
  *(_OWORD*)(a1 + 80) = (__typeof__(*(_OWORD*)(a1 + 80))){0};
  v23 = GameData_212e438;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_BYTE*)(a1 + 149) = 1;
  *(_BYTE*)(a1 + 416) = 0;
  *(_BYTE*)(a1 + 816) = 0;
  *(_BYTE*)(a1 + 832) = 0;
  *(_BYTE*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_BYTE*)(a1 + 920) = 0;
  *(_DWORD*)(a1 + 924) = 0;
  *(_BYTE*)(a1 + 928) = 0;
  *(_BYTE*)(a1 + 932) = 0;
  *(_BYTE*)(a1 + 936) = 0;
  *(_BYTE*)(a1 + 948) = 0;
  *(_BYTE*)(a1 + 952) = 0;
  *(_BYTE*)(a1 + 956) = 0;
  *(_BYTE*)(a1 + 1020) = 0;
  *(_BYTE*)(a1 + 1024) = 0;
  *(_BYTE*)(a1 + 1028) = 0;
  *(_BYTE*)(a1 + 1032) = 0;
  *(_DWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 16) = v23 + 16;
  *(_QWORD*)(a1 + 408) = 1023;
  *(_QWORD*)(a1 + 376) = 1023;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 940) = 0x3F80000000000000LL;
  v24 = GameData_212d2f0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_DWORD*)(a1 + 1048) = 0;
  *(_BYTE*)(a1 + 1056) = 0;
  *(_BYTE*)(a1 + 1104) = 0;
  *(_BYTE*)(a1 + 1120) = 0;
  *(_BYTE*)(a1 + 1124) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_BYTE*)(a1 + 1136) = 0;
  *(_BYTE*)(a1 + 1068) = 0;
  *(_BYTE*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_BYTE*)(a1 + 1144) = 0;
  *(_DWORD*)(a1 + 1188) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 1040) = v24 + 2;
  *(_QWORD*)(a1 + 1060) = 0;
  *(_DWORD*)(a1 + 1140) = 1056964608;
  *(_QWORD*)(a1 + 1148) = 0;
  *(_QWORD*)(a1 + 1156) = 0;
  *(_QWORD*)(a1 + 1164) = 0;
  *(_QWORD*)(a1 + 1172) = 0;
  *(_QWORD*)(a1 + 1180) = 0;
  *(_QWORD*)(a1 + 140) = 0x469C40003DCCCCCDLL;
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  *(_DWORD*)(a1 + 1064) = 1036966167;
  *(_QWORD*)(a1 + 1012) = 0;
  v26 = fw_memory_HeapManager_Allocate(*v25, 176, 16, 0);
  v27 = GameData_212f7d8[0];
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0x3F80000000000000LL;
  *(_QWORD*)(v26 + 16) = 0;
  *(_QWORD*)(v26 + 24) = 0;
  *(_QWORD*)(v26 + 32) = 0;
  *(_QWORD*)(v26 + 40) = 0;
  *(_QWORD*)(v26 + 48) = 0;
  *(_QWORD*)v26 = v27 + 2;
  *(_QWORD*)(v26 + 8) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v35 = v26;
    v33 = __cxa_guard_acquire(&GameData_21a6130);
    v26 = v35;
    if (v33 != 0) {
      v34 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v34;
      __cxa_guard_release(&GameData_21a6130);
      v26 = v35;
    }
  }
  v28 = GameData_21a6120;
  *(_QWORD*)(v26 + 96) = 0;
  *(_QWORD*)(v26 + 160) = 0;
  *(_QWORD*)(v26 + 168) = 0;
  *(_QWORD*)(v26 + 112) = 0;
  *(_QWORD*)(v26 + 120) = 0;
  *(_QWORD*)(v26 + 128) = 0;
  *(_QWORD*)(v26 + 136) = 0;
  *(_DWORD*)(v26 + 144) = 0;
  *(_OWORD*)(v26 + 80) = v28;
  v29 = *(_QWORD**)(a1 + 912);
  *(_QWORD*)(a1 + 912) = v26;
  if (v29 != nullptr) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v29 + 8LL))(
        (void*)(v29), v29);
  }
  result = fw_memory_HeapManager_Allocate(*v25, 1, 16, 0);
  v31 = *(_QWORD*)(a1 + 1176);
  *(_QWORD*)(a1 + 1176) = result;
  if (v31 != 0) {
    *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 152LL) =
        *(_QWORD*)(*(_QWORD*)GameData_212c7d8[0] + 144LL);
    v32 = 128;
    if (*(_QWORD*)(*v25 + 200) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v25 + v32);
  }
  *(_QWORD*)(a1 + 1184) = 0;
  return result;
}

void game_zview_d1dfd0(float32x4_t* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
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
  __int64 v27;
  float v28;
  int v29;
  int8x16_t v30;
  __int64 v31;
  float32x4_t* v32;
  float v33;
  unsigned int v34;
  float32x4_t v35;
  float32x4_t* v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  float32x4_t v41;
  float32x4_t v42;
  __int64 v43;
  __int64 v44;
  float32x4_t* v45;
  char v46;
  unsigned __int64 v47;
  float32x4_t* v48;
  unsigned __int8 v49;
  __int64 v50;
  unsigned __int64 v51;
  char v52;
  __int64 v53;

  if (LANES128(a1[72]).n128_u32[1] == 0) {
    return;
  }
  game_zview_d1e580_alt1((__int64)a1);
  game_zview_d1ed40(a1);
  if (LANES128(a1[72]).n128_u64[1] != 0) {
    v2 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224);
    v3 = *(_QWORD*)(v2 + 48);
    v4 = *(_QWORD*)(v2 + 56);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 344LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    else {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 344LL);
    }
    v6 = 0x1.0000000000000p+0f;
    if (LANES128(a1[58]).n128_u8[4] == 1) {
      v7 = LANES128(a1[58]).n128_f32[0];
      if (v7 > 0x0.0p+0f) {
        v6 = LANES128(a1[57]).n128_f32[3] / v7;
      }
    }
    v8 = LANES128(a1[58]).n128_f32[3];
    v9 = (float)(PSEUDO_UNFUSED(v6 * 0x1.921fb60000000p+1f)) +
         (float)(roundf((float)(v6 * 0x1.921fb60000000p+1f) *
                        0x1.45f3060000000p-3f) *
                 -0x1.921fb60000000p+2f);
    if (v9 <= 0x1.921fb60000000p+0f) {
      v11 = 0x1.0000000000000p+0f;
      if (v9 >= -0x1.921fb60000000p+0f) {
      LABEL_15:
        v12 = v9 * v9;
        v13 =
            v11 *
            (float)((float)((float)-(
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
                                                                                                  v12)) *
                                                                                  v12)) *
                                                               v12)) *
                                               v12)) *
                            v12) +
                    0x1.0000000000000p+0f);
        v14 = 0x1.0000000000000p+0f / v8;
        v15 = fabsf(v13);
        if (v8 < 0x1.0000000000000p+0f) {
          v14 = 0x1.0000000000000p+0f;
        }
        v16 = powf(v15, v14);
        v17 = -0x1.0000000000000p+0f;
        v18 = v16 * 0x1.0000000000000p-1f;
        if (v13 < 0x0.0p+0f) {
          v17 = 0x1.0000000000000p+0f;
        }
        v19 = (float)(v18 * v17) + 0x1.0000000000000p-1f;
        if (v8 < 0x1.0000000000000p+0f) {
          v19 = (float)(PSEUDO_UNFUSED(v8 * v19)) +
                (float)(v6 * (float)(0x1.0000000000000p+0f - v8));
        }
        v20 = powf(v19, LANES128(a1[59]).n128_f32[0]);
        v21 = *(float*)(*(_QWORD*)(LANES128(a1[72]).n128_u64[1] + 928) + 92LL);
        if (LANES128(a1[70]).n128_u8[4] == 1) {
          v21 = LANES128(a1[70]).n128_f32[0] +
                (float)(fminf(fmaxf(v20, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                        (float)(v21 - LANES128(a1[70]).n128_f32[0]));
        }
        v22 = (float)(v21 + -0x1.0000000000000p-1f) * 0x1.0000000000000p-2f;
        if (v22 <= 0x1.0000000000000p+0f) {
          v23 = (float)(v21 + -0x1.0000000000000p-1f) * 0x1.0000000000000p-2f;
        }
        else {
          v23 = 0x1.0000000000000p+0f;
        }
        v24 = fminf(fmaxf(v23, 0x0.0p+0f), 0x1.0000000000000p+0f);
        if (v22 >= 0x0.0p+0f) {
          v25 = v24;
        }
        else {
          v25 = 0x0.0p+0f;
        }
        *(_BYTE*)(v5 + 176) = 1;
        *(_BYTE*)(v5 + 256) = 1;
        *(float*)(v5 + 172) =
            (float)(v25 * 0x1.b9999a0000000p+1f) + 0x1.19999a0000000p-1f;
        *(float*)(v5 + 252) =
            (float)(v25 * 0x1.4ccccc0000000p+1f) + 0x1.99999a0000000p-2f;
        goto LABEL_30;
      }
      v10 = -0x1.921fb60000000p+1f;
    }
    else {
      v10 = 0x1.921fb60000000p+1f;
    }
    v9 = v10 - v9;
    v11 = -0x1.0000000000000p+0f;
    goto LABEL_15;
  }
LABEL_30:
  v26 = LANES128(a1[66]).n128_f32[1];
  v27 = game_script_hub_g_frame_counter_ptr[0];
  v28 = fabsf(
      (float)((float)(*(float*)(*(_QWORD*)
                                    game_script_hub_g_frame_counter_ptr[0] +
                                160LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) /
      0x1.3333340000000p-2f);
  if (v26 > 0x1.0000000000000p+0f) {
    v26 = v26 - v28;
    if (v26 >= 0x1.0000000000000p+0f) {
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  if (v26 < 0x1.0000000000000p+0f) {
    v26 = v26 + v28;
    if (v26 > 0x1.0000000000000p+0f) {
    LABEL_35:
      v26 = 0x1.0000000000000p+0f;
    }
  }
LABEL_36:
  v29 = LANES128(a1[66]).n128_u8[12];
  LANES128(a1[66]).n128_f32[1] = v26;
  if (v29 != 0) {
    v30 = Camera_b3bb60((__int64)&a1[1]);
    v31 = *game_sound_g_game_sound_ptr[0];
    if (*game_sound_g_game_sound_ptr[0] != 0) {
      *(_QWORD*)(v31 + 2528) = LANES128(v30).n128_u64[0];
      *(_BYTE*)(v31 + 2516) = 1;
      *(_DWORD*)(v31 + 2536) = LANES128(v30).n128_u32[2];
    }
  }
  v32 = (float32x4_t*)LANES128(a1[57]).n128_u64[0];
  v33 = *(float*)(*(_QWORD*)v27 + 160LL);
  LANES128(v32[6]).n128_u64[0] = (unsigned __int64)LANES128(a1[1]).n128_u64;
  LANES128(v32[9]).n128_f32[0] =
      (float)(v33 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v53 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v53;
    __cxa_guard_release(&GameData_21a6130);
  }
  v34 = DWORD2(GameData_21a6120);
  LANES128(v32[10]).n128_u64[0] = GameData_21a6120;
  v35 = v32[10];
  LANES128(v35).n128_u64[1] = v34;
  v32[10] = v35;
  game_ede020(v32);
  GameRoutine_ede500((__int64)v32);
  game_ede740(v32);
  v36 = (float32x4_t*)LANES128(v32[6]).n128_u64[0];
  if (LANES128(*(v36)).n128_u32[2] == 0) {
    v36[2] = vaddq_f32(v36[2], v32[10]);
    *(float32x4_t*)(LANES128(v32[6]).n128_u64[0] + 16) =
        vaddq_f32(*(float32x4_t*)(LANES128(v32[6]).n128_u64[0] + 16), v32[10]);
  }
  v37 = 0x0.0p+0f;
  if (LANES128(a1[71]).n128_u8[8] != 0) {
    v37 = 0x1.99999a0000000p-2f;
  }
  v38 = LANES128(a1[71]).n128_f32[3];
  v39 =
      fabsf((float)(*(float*)(*(_QWORD*)v27 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (v38 > v37) {
    v38 = v38 - v39;
    if (v38 >= v37) {
      goto LABEL_50;
    }
  LABEL_49:
    v38 = v37;
    goto LABEL_50;
  }
  if (v38 < v37) {
    v38 = v38 + v39;
    if (v38 > v37) {
      goto LABEL_49;
    }
  }
LABEL_50:
  LANES128(a1[71]).n128_f32[3] = v38;
  LANES128(a1[72]).n128_u32[1] = 2;
  v40 = *(_QWORD*)(*GameData_212eba8[0] + 56);
  if (v40 != 0) {
    v41 = *(float32x4_t*)(*(_QWORD*)(v40 + 16) + 560LL);
    if (LANES128(a1[69]).n128_u8[0] != 0) {
    LABEL_52:
      LANES128(a1[68]).n128_u64[0] = LANES128(v41).n128_u64[0];
      v42 = a1[68];
      LANES128(v42).n128_u64[1] = LANES128(v41).n128_u32[2];
      a1[68] = v42;
      goto LABEL_57;
    }
  LABEL_56:
    a1[68] = v41;
    LANES128(a1[69]).n128_u8[0] = 1;
    goto LABEL_57;
  }
  if (*GameData_212eda8[0] != 0) {
    v43 = *(_QWORD*)(*GameData_212eda8[0] + 8);
    if (*(_BYTE*)(v43 + 320) == 1) {
      LANES128(v41).n128_u64[0] = *(_QWORD*)(v43 + 280);
      LANES128(v41).n128_u32[1] = *(_DWORD*)(v43 + 168);
      LANES128(v41).n128_u64[1] = (unsigned int)HIDWORD(*(_QWORD*)(v43 + 280));
      if (LANES128(a1[69]).n128_u8[0] != 0) {
        goto LABEL_52;
      }
      goto LABEL_56;
    }
  }
LABEL_57:
  if (LANES128(a1[69]).n128_u8[0] == 1) {
    v44 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     40LL);
    if (v44 != 0) {
      v45 = a1 + 68;
      v46 = *(_BYTE*)(v44 + 448);
      v47 = LANES128(a1[68]).n128_u64[1];
      *(_QWORD*)(v44 + 432) = LANES128(a1[68]).n128_u64[0];
      *(_QWORD*)(v44 + 440) = v47;
      if ((v46 & 1) == 0) {
        *(_BYTE*)(v44 + 448) = 1;
      }
      v48 = *(float32x4_t**)(v44 + 384);
      v49 = LANES128(v48[1]).n128_u8[0];
      *v48 = vaddq_f32(*v45, COERCE_AS(float32x4_t, GameData_1a831c0));
      if ((v49 & 1) == 0) {
        LANES128(v48[1]).n128_u8[0] = 1;
      }
      v50 = *(_QWORD*)(v44 + 480);
      v51 = LANES128(a1[68]).n128_u64[1];
      v52 = *(_BYTE*)(v50 + 64);
      *(_QWORD*)(v50 + 48) = LANES128(*(v45)).n128_u64[0];
      *(_QWORD*)(v50 + 56) = v51;
      if ((v52 & 1) == 0) {
        *(_BYTE*)(v50 + 64) = 1;
      }
    }
  }
}

__int64 game_zview_d1e580(__int64 result, long double a2)
{
  int v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
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
  char v38;
  int v39;
  int v40;
  __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  float v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64* v55;

  if (*(_BYTE*)(result + 904) != 1) {
    return result;
  }
  v2 = *(_DWORD*)(result + 872);
  v3 = *(_DWORD*)(result + 864);
  v4 = result;
  *(_DWORD*)(result + 924) = 0;
  *(_DWORD*)(result + 952) = v2;
  LOBYTE(v2) = *(_BYTE*)(result + 876);
  *(_DWORD*)(result + 940) = v3;
  LODWORD(a2) = *(_DWORD*)(result + 868);
  *(_BYTE*)(result + 956) = v2;
  v5 = *(_DWORD*)(result + 848);
  *(_DWORD*)(result + 944) = LODWORD(a2);
  *(_DWORD*)(result + 8) = v5;
  *(_DWORD*)(result + 928) = *(_DWORD*)(result + 852);
  *(_BYTE*)(result + 932) = *(_BYTE*)(result + 856);
  *(_BYTE*)(result + 936) = *(_BYTE*)(result + 860);
  v6 = *(_QWORD*)(result + 1160);
  if (v6 != 0) {
    LODWORD(a2) = *(_DWORD*)(*(_QWORD*)(v6 + 928) + 92LL);
    *(_BYTE*)(result + 1124) = 1;
    *(_DWORD*)(result + 1120) = LODWORD(a2);
  }
  if (*(_DWORD*)(result + 1156) == 2) {
    if (*(_BYTE*)(result + 816) == 1) {
      v7 = *(_QWORD*)(result + 784);
      *(_QWORD*)(result + 416) = GameData_212e740[0] + 2;
      if (v7 != 0) {
        v8 = *(_QWORD*)(result + 792);
        if (v7 == v8) {
          goto LABEL_13;
        }
        do {
          v9 = *(_QWORD*)(v8 - 8);
          *(_QWORD*)(v8 - 8) = 0;
          if (v9 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
          }
          v8 -= 24;
        } while (v8 != v7);
        v10 = *(_QWORD*)(v4 + 784);
        *(_QWORD*)(v4 + 792) = v7;
        if (v10 != 0) {
        LABEL_13:
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v11);
        }
      }
    }
    v12 = (__int64*)GameData_212c2a0;
    v13 = (__int64*)GameData_212c2b0;
    *(_QWORD*)(v4 + 496) = 1065353216;
    *(_QWORD*)(v4 + 504) = 0x100000000LL;
    *(_DWORD*)(v4 + 536) = 0;
    *(_DWORD*)(v4 + 560) = 0;
    *(_QWORD*)(v4 + 800) = 0;
    *(_QWORD*)(v4 + 792) = 0;
    *(_QWORD*)(v4 + 512) = 0x4248000041D80000LL;
    v14 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12);
    v15 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8);
    *(_QWORD*)(v4 + 520) = 0x41C0000042100000LL;
    *(_QWORD*)(v4 + 528) = 0x4110000041800000LL;
    *(_QWORD*)(v4 + 784) = 0;
    *(_QWORD*)(v4 + 776) = 0;
    *(_QWORD*)(v4 + 552) = 1092616192;
    v16 = *v12;
    v17 = v12[1];
    *(_QWORD*)(v4 + 600) = v15;
    v18 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v12);
    v19 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v12);
    *(_QWORD*)(v4 + 592) = v14;
    *(_QWORD*)(v4 + 576) = v16;
    v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v12);
    v20 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v12 + 8);
    *(_QWORD*)(v4 + 584) = v17;
    *(_QWORD*)(v4 + 624) = v18;
    *(_QWORD*)(v4 + 632) = v19;
    *(_QWORD*)(v4 + 616) = v20;
    *(_QWORD*)(v4 + 608) = v21;
    v22 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13);
    *(_QWORD*)(v4 + 664) =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8);
    v24 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13);
    v23 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 8);
    *(_QWORD*)(v4 + 720) = v22;
    *(_QWORD*)(v4 + 656) = v23;
    v26 = *v13;
    v25 = v13[1];
    *(_QWORD*)(v4 + 712) = v24;
    *(_QWORD*)(v4 + 648) = v25;
    v27 = *v13;
    *(_QWORD*)(v4 + 704) = v26;
    *(_QWORD*)(v4 + 640) = v27;
    v28 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v13);
    *(_QWORD*)(v4 + 696) =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v13);
    v30 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v13);
    v29 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v13);
    *(_QWORD*)(v4 + 752) = v28;
    *(_QWORD*)(v4 + 688) = v29;
    v32 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v13);
    v31 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v13 + 8);
    *(_QWORD*)(v4 + 744) = v30;
    *(_QWORD*)(v4 + 680) = v31;
    v34 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8);
    v33 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 16);
    v35 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v13);
    *(_QWORD*)(v4 + 736) = v32;
    *(_QWORD*)(v4 + 672) = v33;
    *(_QWORD*)(v4 + 728) = v34;
    *(_QWORD*)(v4 + 760) = v35;
    *(_BYTE*)(v4 + 548) = 1;
    *(_OWORD*)(v4 + 432) = GameData_1a83090;
    *(_OWORD*)(v4 + 448) = (__typeof__(*(_OWORD*)(v4 + 448))){0};
    *(_OWORD*)(v4 + 464) = GameData_1a83610;
    *(_OWORD*)(v4 + 480) = (__typeof__(*(_OWORD*)(v4 + 480))){0};
    v36 = GameData_212e438;
    *(_QWORD*)(v4 + 768) = 0;
    *(_BYTE*)(v4 + 549) = 1;
    *(_BYTE*)(v4 + 816) = 1;
    *(_QWORD*)(v4 + 416) = v36 + 16;
    *(_QWORD*)(v4 + 424) = 0;
    *(_QWORD*)(v4 + 540) = 0x469C40003DCCCCCDLL;
    *(_QWORD*)(v4 + 808) = 1023;
    *(_QWORD*)(v4 + 776) = 1023;
    wld_a7fda0(v4 + 416, (_DWORD*)(v4 + 16));
  }
  if (*(_BYTE*)(v4 + 881) == 1) {
    v37 = *(_QWORD*)(v4 + 1160);
    result = *(_QWORD*)(v4 + 1168);
    *(_QWORD*)(v4 + 1160) = 0;
    *(_QWORD*)(v4 + 1168) = v37;
    if (result == 0) {
      goto LABEL_24;
    }
  }
  else {
    result = *(_QWORD*)(v4 + 1168);
    *(_QWORD*)(v4 + 1168) = 0;
    if (result == 0) {
      goto LABEL_22;
    }
  }
  (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
LABEL_22:
  result = *(_QWORD*)(v4 + 1160);
  *(_QWORD*)(v4 + 1160) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
LABEL_24:
  v38 = *(_BYTE*)(v4 + 1032);
  if ((v38 & 1) != 0) {
    *(_BYTE*)(v4 + 1032) = 0;
  }
  v39 = *(_DWORD*)(v4 + 1028);
  v40 = *(_DWORD*)(v4 + 8);
  if (v40 <= 3) {
    switch (v40) {
    case 1:
      v41 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 992, 16, 0);
      *(double*)&a2 = game_zview_d209a0(v41);
      v42 = GameData_212edb8[0];
      break;
    case 2:
      v41 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1136, 16, 0);
      *(double*)&a2 = game_zview_d209a0(v41);
      *(_QWORD*)(v41 + 996) = 0x3F8000003C23D70ALL;
      *(_QWORD*)(v41 + 1004) = 0;
      *(_QWORD*)(v41 + 1012) = 0x3F8000003F800000LL;
      *(_QWORD*)(v41 + 1020) = 0x3F80000000000000LL;
      *(_QWORD*)(v41 + 1028) = 0;
      *(_QWORD*)(v41 + 1036) = 0;
      v55 = GameData_212edc0[0];
      *(_DWORD*)(v41 + 992) = 0;
      *(_DWORD*)(v41 + 1044) = 0;
      *(_QWORD*)(v41 + 1048) = 0x3F8000003C23D70ALL;
      *(_QWORD*)(v41 + 1056) = 0;
      *(_QWORD*)(v41 + 1064) = 0x3F8000003F800000LL;
      *(_QWORD*)(v41 + 1072) = 0x3F80000000000000LL;
      *(_QWORD*)(v41 + 1080) = 0;
      *(_QWORD*)(v41 + 1088) = 0;
      *(_QWORD*)(v41 + 1096) = 0;
      *(_QWORD*)(v41 + 1104) = 0;
      *(_QWORD*)(v41 + 1112) = 0;
      *(_QWORD*)(v41 + 1120) = 0;
      *(_QWORD*)v41 = v55 + 2;
      goto LABEL_41;
    case 3:
      v41 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1008, 16, 0);
      *(double*)&a2 = game_zview_d209a0(v41);
      v42 = GameData_212edc8[0];
      *(_BYTE*)(v41 + 992) = 0;
      break;
    default:
      goto LABEL_43;
    }
    goto LABEL_40;
  }
  if (v40 > 5) {
    if (v40 == 6) {
      v41 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1040, 16, 0);
      *(double*)&a2 = game_zview_d209a0(v41);
      v42 = GameData_212edd8[0];
      *(_BYTE*)(v41 + 992) = 0;
      *(_QWORD*)(v41 + 1008) = 0;
      *(_QWORD*)(v41 + 1016) = 0;
      *(_DWORD*)(v41 + 1024) = 0;
    }
    else {
      if (v40 != 7) {
        goto LABEL_43;
      }
      v41 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 992, 16, 0);
      *(double*)&a2 = game_zview_d209a0(v41);
      v42 = GameData_212ede8[0];
    }
    goto LABEL_40;
  }
  if (v40 != 4) {
    v41 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         992, 16, 0);
    *(double*)&a2 = game_zview_d209a0(v41);
    v42 = GameData_212ede0[0];
  LABEL_40:
    *(_QWORD*)v41 = v42 + 2;
    goto LABEL_41;
  }
  v41 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       1328, 16, 0);
  *(double*)&a2 = game_zview_d209a0(v41);
  *(_BYTE*)(v41 + 1060) = 1;
  v43 = GameData_212edd0[0];
  *(_QWORD*)(v41 + 992) = 0;
  *(_QWORD*)(v41 + 1000) = 0;
  *(_QWORD*)(v41 + 1008) = 0;
  *(_QWORD*)(v41 + 1016) = 0;
  *(_QWORD*)(v41 + 1024) = 0;
  *(_QWORD*)(v41 + 1032) = 0;
  *(_QWORD*)(v41 + 1040) = 0;
  *(_QWORD*)(v41 + 1048) = 0;
  *(_DWORD*)(v41 + 1056) = 0;
  *(_DWORD*)(v41 + 1064) = 0;
  *(_QWORD*)(v41 + 1072) = 0;
  *(_QWORD*)(v41 + 1080) = 0;
  *(_QWORD*)(v41 + 1088) = 0;
  *(_QWORD*)(v41 + 1096) = 0;
  *(_QWORD*)(v41 + 1104) = 0;
  *(_QWORD*)(v41 + 1112) = 0;
  *(_QWORD*)(v41 + 1120) = 0;
  *(_DWORD*)(v41 + 1136) = 0;
  *(_QWORD*)(v41 + 1200) = 0;
  *(_QWORD*)(v41 + 1152) = 0;
  *(_QWORD*)(v41 + 1160) = 0;
  *(_QWORD*)(v41 + 1168) = 0;
  *(_QWORD*)(v41 + 1176) = 0;
  *(_QWORD*)(v41 + 1184) = 0;
  *(_DWORD*)(v41 + 1192) = 0;
  *(_BYTE*)(v41 + 1264) = 0;
  *(_BYTE*)(v41 + 1280) = 0;
  *(_BYTE*)(v41 + 1296) = 0;
  *(_DWORD*)(v41 + 1300) = 0;
  *(_QWORD*)(v41 + 1216) = 0;
  *(_QWORD*)(v41 + 1224) = 0;
  *(_QWORD*)(v41 + 1232) = 0;
  *(_QWORD*)(v41 + 1240) = 0;
  *(_QWORD*)(v41 + 1248) = 0;
  *(_WORD*)(v41 + 1312) = 0;
  *(_QWORD*)v41 = v43 + 2;
  *(_QWORD*)(v41 + 1128) = 1065353216;
  *(_DWORD*)(v41 + 1208) = 1065353216;
  *(_QWORD*)(v41 + 1304) = 0x3F8000003F800000LL;
LABEL_41:
  v44 = *(_QWORD*)(v4 + 1160);
  *(_QWORD*)(v4 + 1160) = v41;
  if (v44 == 0) {
    goto LABEL_44;
  }
  result =
      (*(__int64 (**)(__int64, long double))(*(_QWORD*)v44 + 8LL))(v44, a2);
LABEL_43:
  v41 = *(_QWORD*)(v4 + 1160);
  if (v41 != 0) {
  LABEL_44:
    v45 = *(_QWORD*)(v4 + 832);
    v46 = *(_QWORD*)(v4 + 840);
    if (v46 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                                memory_order_relaxed);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                                memory_order_relaxed);
    }
    v47 = *(_QWORD*)(v41 + 888);
    *(_QWORD*)(v41 + 880) = v45;
    *(_QWORD*)(v41 + 888) = v46;
    if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v47 + 16LL))(v47, a2);
      std___1___shared_weak_count___release_weak(v47);
    }
    if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v46 + 16LL))(v46, a2);
      std___1___shared_weak_count___release_weak(v46);
    }
    result = (*(__int64 (**)(_QWORD, long double))(
        **(_QWORD**)(v4 + 1160) + 16LL))(*(_QWORD*)(v4 + 1160), a2);
    if (*(_BYTE*)(v4 + 888) == 1) {
      v48 = *(float*)(v4 + 884);
      v49 = *(_QWORD*)(v4 + 1160);
    }
    else {
      if ((*(_BYTE*)(v4 + 948) & 1) != 0) {
      LABEL_56:
        *(_BYTE*)(v4 + 948) = 1;
        if (*(_BYTE*)(v4 + 896) == 1) {
          *(_DWORD*)(*(_QWORD*)(v4 + 1160) + 836LL) = *(_DWORD*)(v4 + 892);
        }
        else if ((v38 & 1) != 0) {
          *(_DWORD*)(*(_QWORD*)(v4 + 1160) + 836LL) = v39;
          result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v4 + 1160) + 40LL))(
              *(_QWORD*)(v4 + 1160));
        }
        goto LABEL_60;
      }
      v49 = *(_QWORD*)(v4 + 1160);
      v48 = 0x0.0p+0f;
      v51 = **(_QWORD**)(v4 + 832);
      if (v51 != 0) {
        v52 = *GameData_212eba8[0];
        if (*GameData_212eba8[0] != 0) {
          v53 = *(_QWORD**)(v52 + 8);
          v54 = *(_QWORD**)(v52 + 16);
          if (v53 != v54) {
            while (*v53 != v51) {
              v53 += 2;
              if (v53 == v54) {
                goto LABEL_54;
              }
            }
          }
          if (v53 != v54) {
            v48 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v51 + 16) + 488LL) +
                                    32LL) *
                          0x1.ca5dc20000000p+5f) +
                  0x1.6800000000000p+7f;
          }
        }
      }
    }
  LABEL_54:
    *(float*)(v49 + 832) = v48;
    goto LABEL_56;
  }
LABEL_60:
  if (*(_BYTE*)(v4 + 904) == 1) {
    v50 = *(_QWORD*)(v4 + 840);
    if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
      result = std___1___shared_weak_count___release_weak(v50);
    }
    *(_BYTE*)(v4 + 904) = 0;
  }
  return result;
}

void game_zview_d1ed40(float32x4_t* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  float* v8;
  float32x4_t v9;
  int8x16_t v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float32x4_t v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float32x4_t v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float32x4_t v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float32x4_t v62;
  int8x16_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  int8x16_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float v72;
  float v73;
  float v74;
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
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  unsigned __int64 v99;
  float v100;
  __int64 v101;
  float32x4_t* v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  float v109;
  float v110;
  float v111;
  float32x4_t v112;
  float v113;
  float v114;
  float32x4_t v115;
  int8x16_t v116;
  float v117;
  float v118;
  float32x4_t v119;
  float v120;

  v2 = LANES128(a1[73]).n128_u64[0];
  if (v2 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v2 + 24LL))(v2);
  }
  v3 = LANES128(a1[72]).n128_u64[1];
  if (v3 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v3 + 24LL))(v3);
  }
  v4 = LANES128(a1[73]).n128_u64[0];
  if (v4 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v4 + 32LL))(v4);
  }
  v5 = LANES128(a1[72]).n128_u64[1];
  if (v5 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v5 + 32LL))(v5);
  }
  v6 = LANES128(a1[73]).n128_u64[0];
  if (v6 != 0 && LANES128(a1[51]).n128_u8[0] != 0) {
    wld_a7fda0((__int64)&a1[26], (_DWORD*)(v6 + 80));
    if ((LANES128(a1[51]).n128_u8[0] & 1) == 0) {
      goto LABEL_12;
    }
  }
  else if (LANES128(a1[51]).n128_u8[0] == 0) {
  LABEL_12:
    v7 = LANES128(a1[72]).n128_u64[1];
    if (v7 != 0) {
      wld_a7fda0((__int64)&a1[1], (_DWORD*)(v7 + 80));
    }
    return;
  }
  game_zview_d23060(LANES128(a1[72]).n128_i64[1]);
  if ((LANES128(a1[51]).n128_u8[0] & 1) == 0) {
  LABEL_86:
    GameRoutine_8123d0();
  }
  v8 = (float*)LANES128(a1[72]).n128_u64[1];
  v116 = Camera_b3bb60((__int64)&a1[26]);
  v9 = vsubq_f32(v116, Camera_b3bb60((__int64)(v8 + 20)));
  v10 = vmulq_f32(v9, v9);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v117) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]))))
          .n64_u32[0];
  v11 = LANES128(a1[31]).n128_f32[1] * 0x1.1df46a0000000p-6f;
  v12 = LANES128(a1[31]).n128_f32[2] * 0x1.1df46a0000000p-6f;
  v13 = sinf(v11);
  v14 = cosf(v11);
  v111 = sinf(v12);
  v15 = cosf(v12);
  LANES128(v16).n128_u32[3] = 0;
  LANES128(v16).n128_f32[0] = v13 * v15;
  LANES128(v16).n128_f32[1] = v111;
  LANES128(v16).n128_f32[2] = v14 * v15;
  v112 = vsubq_f32(COERCE_AS(float32x4_t, 0), v16);
  v17 = v8[41] * 0x1.1df46a0000000p-6f;
  v18 = v8[42] * 0x1.1df46a0000000p-6f;
  v19 = sinf(v17);
  v20 = cosf(v17);
  v109 = sinf(v18);
  v21 = cosf(v18);
  LANES128(v22).n128_u32[3] = 0;
  LANES128(v22).n128_f32[0] = v19 * v21;
  LANES128(v22).n128_f32[1] = v109;
  v23 = vmulq_f32(v112, v112);
  LANES128(v22).n128_f32[2] = v20 * v21;
  v24 = vsubq_f32(COERCE_AS(float32x4_t, 0), v22);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
  v25 = vrsqrteq_f32(v23);
  v26 = vmulq_f32(v25, vrsqrtsq_f32(v25, vmulq_f32(v23, v25)));
  v27 = vbicq_s8(
      vmulq_f32(v112, vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v23, v26)))),
      vceqzq_f32(v23));
  v28 = vmulq_f32(v24, v24);
  LANES128(v28).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
          .n64_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v28).n128_u64[0];
  v29 = vrsqrteq_f32(v28);
  v30 = vmulq_f32(v29, vrsqrtsq_f32(v29, vmulq_f32(v28, v29)));
  v31 = vmulq_f32(
      v27,
      vbicq_s8(vmulq_f32(
                   v24, vmulq_f32(v30, vrsqrtsq_f32(v30, vmulq_f32(v28, v30)))),
               vceqzq_f32(v28)));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v31, v31, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
          .n64_u64[0];
  v32 =
      (float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0])))
                  .n64_f32[0] +
              -0x1.0000000000000p+0f) *
      -0x1.0000000000000p-1f;
  v33 = 0x1.0000000000000p+0f;
  if (v32 <= 0x1.0000000000000p+0f) {
    v33 = v32;
  }
  v34 = v33 * 0x1.0000000000000p-1f;
  if (v32 >= 0x0.0p+0f) {
    v35 = v34;
  }
  else {
    v35 = 0x0.0p+0f;
  }
  v36 = fminf(fmaxf(fmaxf(0x1.99999a0000000p-5f * v117, v35), 0x0.0p+0f),
              0x1.99999a0000000p-2f);
  v37 = LANES128(a1[31]).n128_f32[1] * 0x1.1df46a0000000p-6f;
  v38 = LANES128(a1[31]).n128_f32[2] * 0x1.1df46a0000000p-6f;
  v39 = sinf(v37);
  v40 = cosf(v37);
  v118 = sinf(v38);
  v41 = cosf(v38);
  LANES128(v42).n128_u32[3] = 0;
  LANES128(v42).n128_f32[0] = v39 * v41;
  LANES128(v42).n128_f32[1] = v118;
  LANES128(v42).n128_f32[2] = v40 * v41;
  v119 = vsubq_f32(COERCE_AS(float32x4_t, 0), v42);
  v43 = v8[41] * 0x1.1df46a0000000p-6f;
  v44 = v8[42] * 0x1.1df46a0000000p-6f;
  v45 = sinf(v43);
  v46 = cosf(v43);
  v113 = sinf(v44);
  v47 = cosf(v44);
  LANES128(v48).n128_u32[3] = 0;
  LANES128(v48).n128_f32[0] = v45 * v47;
  LANES128(v48).n128_f32[1] = v113;
  LANES128(v48).n128_f32[2] = v46 * v47;
  v49 = vaddq_f32(v119, v48);
  v50 = vmulq_f32(v49, v49);
  LANES128(v50).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v50, v50, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
          .n64_u64[0];
  LODWORD(v120) =
      LANES64_OF(vsqrt_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]))))
          .n64_u32[0];
  v51 = LANES128(a1[31]).n128_f32[1] * 0x1.1df46a0000000p-6f;
  v52 = LANES128(a1[31]).n128_f32[2] * 0x1.1df46a0000000p-6f;
  v53 = sinf(v51);
  v54 = cosf(v51);
  v114 = sinf(v52);
  v55 = cosf(v52);
  LANES128(v56).n128_u32[3] = 0;
  LANES128(v56).n128_f32[0] = v53 * v55;
  LANES128(v56).n128_f32[1] = v114;
  LANES128(v56).n128_f32[2] = v54 * v55;
  v115 = vsubq_f32(COERCE_AS(float32x4_t, 0), v56);
  v57 = v8[41] * 0x1.1df46a0000000p-6f;
  v58 = v8[42] * 0x1.1df46a0000000p-6f;
  v59 = sinf(v57);
  v60 = cosf(v57);
  v110 = sinf(v58);
  v61 = cosf(v58);
  LANES128(v62).n128_u32[3] = 0;
  LANES128(v62).n128_f32[0] = v59 * v61;
  LANES128(v62).n128_f32[1] = v110;
  v63 = vmulq_f32(v115, v115);
  LANES128(v62).n128_f32[2] = v60 * v61;
  v64 = vsubq_f32(COERCE_AS(float32x4_t, 0), v62);
  LANES128(v63).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
          .n64_u64[0];
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
          .n64_u64[0];
  LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
  v65 = vrsqrteq_f32(v63);
  v66 = vmulq_f32(v65, vrsqrtsq_f32(v65, vmulq_f32(v63, v65)));
  v67 = vbicq_s8(
      vmulq_f32(v115, vmulq_f32(v66, vrsqrtsq_f32(v66, vmulq_f32(v63, v66)))),
      vceqzq_f32(v63));
  v68 = vmulq_f32(v64, v64);
  LANES128(v68).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
          .n64_u64[0];
  LANES128(v68).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
          .n64_u64[0];
  LANES128(v68).n128_u64[1] = LANES128(v68).n128_u64[0];
  v69 = vrsqrteq_f32(v68);
  v70 = vmulq_f32(v69, vrsqrtsq_f32(v69, vmulq_f32(v68, v69)));
  v71 = vmulq_f32(
      v67,
      vbicq_s8(vmulq_f32(
                   v64, vmulq_f32(v70, vrsqrtsq_f32(v70, vmulq_f32(v68, v70)))),
               vceqzq_f32(v68)));
  LANES128(v71).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
          .n64_u64[0];
  v72 =
      (float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
                  .n64_f32[0] +
              -0x1.0000000000000p+0f) *
      -0x1.0000000000000p-1f;
  v73 = 0x1.0000000000000p+0f;
  if (v72 <= 0x1.0000000000000p+0f) {
    v73 = v72;
  }
  v74 = v73 * 0x1.0000000000000p-1f;
  if (v72 >= 0x0.0p+0f) {
    v75 = v74;
  }
  else {
    v75 = 0x0.0p+0f;
  }
  v76 = fminf(fmaxf(fmaxf(0x1.99999a0000000p-5f * v120, v75), 0x0.0p+0f),
              0x1.99999a0000000p-2f);
  v77 = vabds_f32(LANES128(a1[32]).n128_f32[0], v8[44]);
  if (v76 < v36) {
    v76 = v36;
  }
  v78 = fminf(fmaxf(v77 * 0x1.47ae140000000p-6f, 0x0.0p+0f),
              0x1.99999a0000000p-2f);
  if (v78 >= v76) {
    v76 = v78;
  }
  v79 = fmaxf(v76, 0x1.99999a0000000p-3f);
  if (v76 > 0x0.0p+0f) {
    v76 = v79;
  }
  if ((LANES128(a1[58]).n128_u8[4] & 1) == 0) {
    LANES128(a1[58]).n128_f32[0] = v76;
    LANES128(a1[58]).n128_u8[4] = 1;
  }
  if (v76 == 0x0.0p+0f) {
    v80 = LANES128(a1[58]).n128_f32[0];
    LANES128(a1[57]).n128_f32[3] = v80;
    v81 = v80;
    goto LABEL_43;
  }
  v80 = LANES128(a1[57]).n128_f32[3];
  v81 = LANES128(a1[58]).n128_f32[0];
  v82 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (v80 <= v81) {
    if (v80 >= v81) {
      goto LABEL_42;
    }
    v80 = v80 + v82;
    if (v80 <= v81) {
      goto LABEL_42;
    }
  }
  else {
    v80 = v80 - v82;
    if (v80 >= v81) {
      goto LABEL_42;
    }
  }
  v80 = LANES128(a1[58]).n128_f32[0];
LABEL_42:
  LANES128(a1[57]).n128_f32[3] = v80;
LABEL_43:
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v83 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v84 = (v83 & 8) != 0 ? 2 : 3;
    if ((v84 & v83) == 0) {
      v80 = v81;
      LANES128(a1[57]).n128_f32[3] = v81;
    }
  }
  v85 = 0x1.0000000000000p+0f;
  if (v81 > 0x0.0p+0f) {
    v85 = v80 / v81;
  }
  v86 = LANES128(a1[58]).n128_f32[3];
  v87 = (float)(PSEUDO_UNFUSED(v85 * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)(v85 * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v87 <= 0x1.921fb60000000p+0f) {
    v89 = 0x1.0000000000000p+0f;
    if (v87 >= -0x1.921fb60000000p+0f) {
      goto LABEL_57;
    }
    v88 = -0x1.921fb60000000p+1f;
  }
  else {
    v88 = 0x1.921fb60000000p+1f;
  }
  v87 = v88 - v87;
  v89 = -0x1.0000000000000p+0f;
LABEL_57:
  v90 = v87 * v87;
  v91 =
      v89 *
      (float)((float)((float)-(
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
                                                                                            v90)) *
                                                                            v90)) *
                                                         v90)) *
                                         v90)) *
                      v90) +
              0x1.0000000000000p+0f);
  v92 = 0x1.0000000000000p+0f / v86;
  v93 = fabsf(v91);
  if (v86 < 0x1.0000000000000p+0f) {
    v92 = 0x1.0000000000000p+0f;
  }
  v94 = powf(v93, v92);
  v95 = -0x1.0000000000000p+0f;
  v96 = v94 * 0x1.0000000000000p-1f;
  if (v91 < 0x0.0p+0f) {
    v95 = 0x1.0000000000000p+0f;
  }
  v97 = (float)(v96 * v95) + 0x1.0000000000000p-1f;
  if (v86 < 0x1.0000000000000p+0f) {
    v97 = (float)(PSEUDO_UNFUSED(v86 * v97)) +
          (float)(v85 * (float)(0x1.0000000000000p+0f - v86));
  }
  v98 = powf(v97, LANES128(a1[59]).n128_f32[0]);
  if ((LANES128(a1[51]).n128_u8[0] & 1) == 0) {
    goto LABEL_86;
  }
  v99 = LANES128(a1[72]).n128_u64[1];
  v100 = v98;
  v101 = v99 + 80;
  if (v98 <= 0x0.0p+0f) {
    v102 = a1 + 26;
  }
  else {
    v102 = (float32x4_t*)(v99 + 80);
  }
  wld_a7fda0((__int64)&a1[1], v102);
  if (v100 > 0x0.0p+0f && v100 < 0x1.0000000000000p+0f) {
    GameRoutine_a7fed0(a1 + 1, (__int64)&a1[26], v101, v100, v100);
  }
  if (v100 >= 0x1.0000000000000p+0f) {
    v103 = LANES128(a1[73]).n128_u64[0];
    LANES128(a1[73]).n128_u64[0] = 0;
    if (v103 != 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v103 + 8LL))(v103);
    }
    if (LANES128(a1[51]).n128_u8[0] == 1) {
      v104 = LANES128(a1[49]).n128_u64[0];
      LANES128(a1[26]).n128_u64[0] = (unsigned __int64)gfx_render_Camera_vtable;
      if (v104 != 0) {
        v105 = LANES128(a1[49]).n128_u64[1];
        if (v104 == v105) {
          goto LABEL_81;
        }
        do {
          v106 = *(_QWORD*)(v105 - 8);
          *(_QWORD*)(v105 - 8) = 0;
          if (v106 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v106 + 8LL))(v106);
          }
          v105 -= 24LL;
        } while (v105 != v104);
        v107 = LANES128(a1[49]).n128_u64[0];
        LANES128(a1[49]).n128_u64[1] = v104;
        if (v107 != 0) {
        LABEL_81:
          v108 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v108 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v108);
        }
      }
      LANES128(a1[51]).n128_u8[0] = 0;
    }
  }
}

void game_zview_d1f7d0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  void* v12;
  int v13;
  __int64 v14;
  float v15;
  int v16;
  int v17;
  float v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  float v22;
  __int64 v23;
  int8x16_t* v24;
  int v25;
  unsigned __int64 v26[2];

  v2 = *(_QWORD*)(a1 + 1128);
  v5 = GameData_212eba8[0];
  if (v2 != 0) {
    *(_QWORD*)(a1 + 1128) = 0;
  }
  else {
    v2 = *(_QWORD*)(*GameData_212eba8[0] + 56);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_QWORD*)(v6 + 8) = 0;
  v7 = (atomic_ullong*)(v6 + 8);
  *(_QWORD*)(v6 + 16) = 0;
  v8 = v6;
  *(_QWORD*)(v6 + 32) = v2;
  v9 = v6 + 32;
  *(_BYTE*)(v6 + 48) = 0;
  *(_QWORD*)v6 = GameData_1fdae80;
  *(_BYTE*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_BYTE*)(v6 + 96) = 1;
  v10 = *(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL);
  if ((v10 & 0xFFFFFFFE) == 2) {
    v11 = 2;
  }
  else {
    v11 = 1;
  }
  if (v10 == 3) {
    v12 = &GameData_1aee1b9;
  }
  else {
    v12 = &GameData_1aea24f;
  }
  v26[1] = (unsigned __int64)v12;
  v26[0] = game_HashString((__int64)v12);
  v13 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v14 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v26);
    if (v14 != 0) {
      v13 = *(_DWORD*)(v14 + 32);
    }
    else {
      v13 = 0;
    }
  }
  if (*(_BYTE*)(a2 + 4) != 0) {
    v15 = *(float*)a2;
  }
  else {
    v15 = 0x1.99999a0000000p-2f;
  }
  if (*(int*)(a1 + 1048) <= 0) {
    v16 = *(_DWORD*)(a1 + 872);
    v17 = *(_DWORD*)(a1 + 956);
    if (*(_BYTE*)(a1 + 904) != 0) {
      LOBYTE(v17) = *(_BYTE*)(a1 + 876);
    }
    else {
      v16 = *(_DWORD*)(a1 + 952);
    }
    if ((unsigned __int8)v17 != 1 || v16 != 1) {
      v18 = (float)v13;
      if (*(_BYTE*)(a1 + 904) != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        *(_QWORD*)(a1 + 832) = v9;
        v19 = *(_QWORD*)(a1 + 840);
        *(_QWORD*)(a1 + 840) = v8;
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
        *(_DWORD*)(a1 + 848) = v11;
        *(float*)(a1 + 852) = v15;
        *(_BYTE*)(a1 + 856) = 1;
        *(_BYTE*)(a1 + 860) = 1;
        *(_DWORD*)(a1 + 872) = 1;
        *(_BYTE*)(a1 + 876) = 1;
        *(_WORD*)(a1 + 880) = 0;
        *(_BYTE*)(a1 + 884) = 0;
        *(_BYTE*)(a1 + 888) = 0;
        *(float*)(a1 + 892) = v18;
        *(_BYTE*)(a1 + 896) = 1;
      }
      else {
        *(_QWORD*)(a1 + 832) = v9;
        *(_QWORD*)(a1 + 840) = v8;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        *(_DWORD*)(a1 + 848) = v11;
        *(float*)(a1 + 852) = v15;
        *(_BYTE*)(a1 + 856) = 1;
        *(_BYTE*)(a1 + 860) = 1;
        *(_DWORD*)(a1 + 872) = 1;
        *(_BYTE*)(a1 + 876) = 1;
        *(_WORD*)(a1 + 880) = 0;
        *(_BYTE*)(a1 + 884) = 0;
        *(_BYTE*)(a1 + 888) = 0;
        *(float*)(a1 + 892) = v18;
        *(_BYTE*)(a1 + 896) = 1;
        *(_BYTE*)(a1 + 904) = 1;
      }
      *(_QWORD*)(a1 + 864) = 0x3F8000003F800000LL;
    }
  }
  v20 = *(_QWORD*)(*v5 + 56);
  if (v20 != 0) {
    v21 = *(_QWORD**)(v20 + 16);
    v22 = (float)(*(float*)(a1 + 100) + 0x1.6800000000000p+7f) *
          0x1.1df46a0000000p-6f;
    if (v21[107] != 0) {
      v23 = v21[108];
      v21[107] = 0;
      v21[108] = 0;
      if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v23);
      }
    }
    v24 = (int8x16_t*)v21[61];
    v25 = LANES128(v24[11]).n128_u8[4];
    LANES128(v24[2]).n128_f32[0] = v22;
    LANES128(v24[2]).n128_f32[1] = v22;
    if (v25 == 1) {
      LANES128(v24[11]).n128_u8[4] = 0;
    }
    CharacterRotate_d519c0(v24);
  }
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
}

__attribute__((swiftcall)) void game_zview_d1fdc0(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  int v5;
  __int64 result;
  float32x4_t* v7;
  __int64 v8;
  float32x4_t* v9;
  __int64 v10;
  char v11;

  *(_BYTE*)(a2 + 28) = 0;
  *(_WORD*)(a2 + 48) = 0;
  *(_BYTE*)(a2 + 52) = 0;
  *(_BYTE*)(a2 + 56) = 0;
  *(_BYTE*)(a2 + 60) = 0;
  *(_BYTE*)(a2 + 64) = 0;
  v4 = *(_QWORD*)(a1 + 1128);
  if ((*(_DWORD*)(GameData_21d96b8 + 8) & 0xFFFFFFFE) == 2) {
    v5 = 2;
  }
  else {
    v5 = 1;
  }
  *(_BYTE*)(a2 + 24) = 1;
  *(_DWORD*)(a2 + 16) = v5;
  *(_DWORD*)(a2 + 20) = 1056964608;
  *(_QWORD*)(a2 + 32) = 0x3F8000003F800000LL;
  if (v4 != 0) {
    *(_QWORD*)(a1 + 1128) = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_220b6f0 + 56);
  }
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_QWORD*)(result + 32) = v4;
  v7 = (float32x4_t*)(result + 32);
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 48) = 0;
  *(_BYTE*)(result + 64) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)result = GameData_1fdae80;
  v8 = *(_QWORD*)(a1 + 1160);
  *(_BYTE*)(result + 96) = 1;
  *(_QWORD*)a2 = result + 32;
  *(_QWORD*)(a2 + 8) = result;
  *(_DWORD*)(a2 + 40) = 1;
  *(_BYTE*)(a2 + 44) = 1;
  if (v8 != 0) {
    v9 = *(float32x4_t**)(v8 + 880);
    v10 = *(_QWORD*)(v8 + 888);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      result = game_zview_d23da0(v9, v7);
      v11 = result;
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((result & 1) != 0) {
          result;
          return;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak(v10);
        if ((v11 & 1) != 0) {
          result;
          return;
        }
      }
      goto LABEL_11;
    }
    result = game_zview_d23da0(v9, v7);
    if ((result & 1) == 0) {
    LABEL_11:
      *(_BYTE*)(a2 + 48) = 1;
    }
  }
  {
    result;
    return;
  }
}

void game_zview_d1ff20(float32x4_t* a1, unsigned __int64* a2, char a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned int v10;
  long double v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  struct {
    unsigned __int64 v25;
    unsigned __int64 v26;
    unsigned __int64 v27;
    unsigned __int64 v28;
    unsigned __int64 v29;
    unsigned __int64 v30;
    unsigned __int64 v31;
    unsigned __int64 v32;
    char v33;
  } v25_;

  v4 = *a2;
  v3 = a2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = LANES128(a1[60]).n128_u64[1];
  LANES128(a1[60]).n128_u64[0] = v4;
  LANES128(a1[60]).n128_u64[1] = v3;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    if ((a3 & 1) == 0) {
    LABEL_6:
      if (LANES128(*(a1)).n128_u32[2] == 5) {
        return;
      }
    }
  }
  else if ((a3 & 1) == 0) {
    goto LABEL_6;
  }
  if (*(float*)(*a2 + 36) == 0x0.0p+0f) {
    LANES128(a1[72]).n128_u32[1] = 2;
  }
  game_zview_d1fdc0((void*)((__int64)&v25_.v25), (__int64)a1);
  v8 = *a2;
  BYTE4(v25_.v30) = 0;
  LODWORD(v25_.v27) = 5;
  LOBYTE(v25_.v28) = 1;
  v9 = v25_.v25;
  v10 = *(_DWORD*)(v8 + 40);
  HIDWORD(v25_.v27) = *(_DWORD*)(v8 + 36);
  LODWORD(v11) = *(_DWORD*)(v8 + 44);
  *(_BYTE*)(v25_.v25 + 64) = *(_BYTE*)(v8 + 52);
  LODWORD(v8) = LANES128(a1[65]).n128_u32[2];
  v25_.v29 = __PAIR64__(LODWORD(v11), v10);
  if ((int)v8 <= 0) {
    if (LANES128(a1[56]).n128_u8[8] == 1) {
      v12 = v25_.v26;
      if (v25_.v26 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25_.v26 + 8), 1u,
                                  memory_order_relaxed);
      }
      v13 = LANES128(a1[52]).n128_u64[1];
      LANES128(a1[52]).n128_u64[0] = v9;
      LANES128(a1[52]).n128_u64[1] = v12;
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
      v14 = v25_.v29;
      LANES128(a1[54]).n128_u64[1] = v25_.v30;
      v15 = v25_.v31;
      v16 = v25_.v32;
      LANES128(a1[54]).n128_u64[0] = v14;
      LANES128(a1[55]).n128_u64[0] = v15;
      LOBYTE(v15) = v25_.v33;
      LANES128(a1[55]).n128_u64[1] = v16;
      LANES128(a1[56]).n128_u8[0] = v15;
      v17 = v25_.v28;
      LANES128(a1[53]).n128_u64[0] = v25_.v27;
      LANES128(a1[53]).n128_u64[1] = v17;
    }
    else {
      LANES128(a1[52]).n128_u64[0] = v9;
      v19 = v25_.v26;
      LANES128(a1[52]).n128_u64[1] = v25_.v26;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
      }
      v20 = v25_.v29;
      LANES128(a1[54]).n128_u64[1] = v25_.v30;
      v21 = v25_.v31;
      v22 = v25_.v32;
      LANES128(a1[54]).n128_u64[0] = v20;
      LANES128(a1[55]).n128_u64[0] = v21;
      LOBYTE(v21) = v25_.v33;
      LANES128(a1[55]).n128_u64[1] = v22;
      LANES128(a1[56]).n128_u8[0] = v21;
      v23 = v25_.v28;
      LANES128(a1[53]).n128_u64[0] = v25_.v27;
      LANES128(a1[53]).n128_u64[1] = v23;
      LANES128(a1[56]).n128_u8[8] = 1;
    }
  }
  game_zview_d1e580((__int64)a1, v11);
  game_zview_d1ed40(a1);
  v24 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
}

void game_zview_d20140(float32x4_t* a1, __int64 a2)
{
  long double v4;
  int v5;
  float v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  void* v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int32 v17;
  unsigned __int32 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  struct {
    _QWORD* v31;
    unsigned __int64 v32;
    unsigned __int64 v33;
    unsigned __int64 v34;
    unsigned __int64 v35;
    unsigned __int64 v36;
    unsigned __int64 v37;
    unsigned __int64 v38;
    char v39;
  } v31_;
  unsigned __int64 v40[2];

  game_zview_d1fdc0((void*)((__int64)&v31_.v31), (__int64)a1);
  LODWORD(v4) = *(_DWORD*)a2;
  LOBYTE(v31_.v34) = 1;
  v5 = *(unsigned __int8*)(a2 + 4);
  HIDWORD(v31_.v33) = LODWORD(v4);
  if (v5 == 1) {
    v6 = 0x0.0p+0f;
    v7 = *v31_.v31;
    if (*v31_.v31 != 0 && GameData_220b6f0 != 0) {
      v8 = *(_QWORD**)(GameData_220b6f0 + 8);
      v9 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v8 != v9) {
        while (*v8 != v7) {
          v8 += 2;
          if (v8 == v9) {
            goto LABEL_10;
          }
        }
      }
      if (v8 != v9) {
        v6 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 16) + 488LL) + 32LL) *
                     0x1.ca5dc20000000p+5f) +
             0x1.6800000000000p+7f;
      }
    }
  LABEL_10:
    *((float*)&v31_.v37 + 1) = v6;
    LOBYTE(v31_.v38) = 1;
    if (*(_DWORD*)(GameData_21d96b8 + 8) == 3) {
      v10 = &GameData_1aee1b9;
    }
    else {
      v10 = &GameData_1aea24f;
    }
    v40[1] = (unsigned __int64)v10;
    v40[0] = game_HashString((__int64)v10);
    v11 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v12 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v40);
      if (v12 != 0) {
        v11 = *(_DWORD*)(v12 + 32);
      }
      else {
        v11 = 0;
      }
    }
    v31_.v39 = 1;
    *((float*)&v31_.v38 + 1) = (float)v11;
  }
  if (*(_BYTE*)(a2 + 12) == 1) {
    v13 = *(_DWORD*)(a2 + 8);
    LOBYTE(v31_.v38) = 1;
    HIDWORD(v31_.v37) = v13;
  }
  if (*(_BYTE*)(a2 + 20) == 1) {
    v14 = *(_DWORD*)(a2 + 16);
    v31_.v39 = 1;
    HIDWORD(v31_.v38) = v14;
  }
  LODWORD(v4) = *(_DWORD*)(a2 + 28);
  BYTE1(v31_.v37) = *(_BYTE*)(a2 + 24);
  v15 = LANES128(a1[65]).n128_i32[2];
  HIDWORD(v31_.v35) = LODWORD(v4);
  if (v15 <= 0) {
    if (BYTE4(v31_.v36) != 1 || (v31_.v37 & 1) != 0 ||
        ((v17 = LANES128(a1[54]).n128_u32[2],
          v18 = LANES128(a1[59]).n128_u32[3], LANES128(a1[56]).n128_u8[8] != 0)
             ? (LOBYTE(v18) = LANES128(a1[54]).n128_u8[12])
             : (v17 = LANES128(a1[59]).n128_u32[2]),
         (unsigned __int8)v18 != 1 || v17 != (_DWORD)v31_.v36)) {
      v19 = v31_.v31;
      if (LANES128(a1[56]).n128_u8[8] != 0) {
        v20 = v31_.v32;
        if (v31_.v32 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v31_.v32 + 8), 1u,
                                    memory_order_relaxed);
        }
        v21 = LANES128(a1[52]).n128_u64[1];
        LANES128(a1[52]).n128_u64[0] = (unsigned __int64)v19;
        LANES128(a1[52]).n128_u64[1] = v20;
        if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v21 + 16LL))(v21);
          std___1___shared_weak_count___release_weak(v21);
        }
        v22 = v31_.v35;
        LANES128(a1[54]).n128_u64[1] = v31_.v36;
        v23 = v31_.v37;
        v24 = v31_.v38;
        LANES128(a1[54]).n128_u64[0] = v22;
        LANES128(a1[55]).n128_u64[0] = v23;
        LOBYTE(v23) = v31_.v39;
        LANES128(a1[55]).n128_u64[1] = v24;
        LANES128(a1[56]).n128_u8[0] = v23;
        v25 = v31_.v34;
        LANES128(a1[53]).n128_u64[0] = v31_.v33;
        LANES128(a1[53]).n128_u64[1] = v25;
      }
      else {
        v26 = v31_.v32;
        LANES128(a1[52]).n128_u64[0] = (unsigned __int64)v31_.v31;
        LANES128(a1[52]).n128_u64[1] = v26;
        if (v26 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                    memory_order_relaxed);
        }
        v27 = v31_.v35;
        LANES128(a1[54]).n128_u64[1] = v31_.v36;
        v28 = v31_.v37;
        v29 = v31_.v38;
        LANES128(a1[54]).n128_u64[0] = v27;
        LANES128(a1[55]).n128_u64[0] = v28;
        LOBYTE(v28) = v31_.v39;
        LANES128(a1[55]).n128_u64[1] = v29;
        LANES128(a1[56]).n128_u8[0] = v28;
        v30 = v31_.v34;
        LANES128(a1[53]).n128_u64[0] = v31_.v33;
        LANES128(a1[53]).n128_u64[1] = v30;
        LANES128(a1[56]).n128_u8[8] = 1;
      }
    }
  }
  game_zview_d1e580((__int64)a1, v4);
  game_zview_d1ed40(a1);
  v16 = v31_.v32;
  if (v31_.v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31_.v32 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
}

void game_zview_d20430(float32x4_t* a1, unsigned __int64* a2, char a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  long double v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  struct {
    unsigned __int64 v25;
    unsigned __int64 v26;
    unsigned __int64 v27;
    unsigned __int64 v28;
    unsigned __int64 v29;
    unsigned __int64 v30;
    unsigned __int64 v31;
    unsigned __int64 v32;
    char v33;
  } v25_;

  v4 = *a2;
  v3 = a2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v7 = LANES128(a1[61]).n128_u64[1];
  LANES128(a1[61]).n128_u64[0] = v4;
  LANES128(a1[61]).n128_u64[1] = v3;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    if ((a3 & 1) == 0) {
    LABEL_6:
      if (LANES128(*(a1)).n128_u32[2] == 6) {
        return;
      }
    }
  }
  else if ((a3 & 1) == 0) {
    goto LABEL_6;
  }
  if (*(float*)(*a2 + 40) == 0x0.0p+0f) {
    LANES128(a1[72]).n128_u32[1] = 2;
  }
  game_zview_d1fdc0((void*)((__int64)&v25_.v25), (__int64)a1);
  BYTE4(v25_.v30) = 0;
  LODWORD(v25_.v27) = 6;
  LODWORD(v8) = *(_DWORD*)(*a2 + 40);
  v9 = *(_DWORD*)(*a2 + 44);
  LOBYTE(v25_.v28) = 1;
  v10 = LANES128(a1[65]).n128_i32[2];
  HIDWORD(v25_.v27) = LODWORD(v8);
  LODWORD(v25_.v29) = v9;
  if (v10 <= 0) {
    v11 = v25_.v25;
    if (LANES128(a1[56]).n128_u8[8] == 1) {
      v12 = v25_.v26;
      if (v25_.v26 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25_.v26 + 8), 1u,
                                  memory_order_relaxed);
      }
      v13 = LANES128(a1[52]).n128_u64[1];
      LANES128(a1[52]).n128_u64[0] = v11;
      LANES128(a1[52]).n128_u64[1] = v12;
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
      v14 = v25_.v29;
      LANES128(a1[54]).n128_u64[1] = v25_.v30;
      v15 = v25_.v31;
      v16 = v25_.v32;
      LANES128(a1[54]).n128_u64[0] = v14;
      LANES128(a1[55]).n128_u64[0] = v15;
      LOBYTE(v15) = v25_.v33;
      LANES128(a1[55]).n128_u64[1] = v16;
      LANES128(a1[56]).n128_u8[0] = v15;
      v17 = v25_.v28;
      LANES128(a1[53]).n128_u64[0] = v25_.v27;
      LANES128(a1[53]).n128_u64[1] = v17;
    }
    else {
      LANES128(a1[52]).n128_u64[0] = v25_.v25;
      v19 = v25_.v26;
      LANES128(a1[52]).n128_u64[1] = v25_.v26;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
      }
      v20 = v25_.v29;
      LANES128(a1[54]).n128_u64[1] = v25_.v30;
      v21 = v25_.v31;
      v22 = v25_.v32;
      LANES128(a1[54]).n128_u64[0] = v20;
      LANES128(a1[55]).n128_u64[0] = v21;
      LOBYTE(v21) = v25_.v33;
      LANES128(a1[55]).n128_u64[1] = v22;
      LANES128(a1[56]).n128_u8[0] = v21;
      v23 = v25_.v28;
      LANES128(a1[53]).n128_u64[0] = v25_.v27;
      LANES128(a1[53]).n128_u64[1] = v23;
      LANES128(a1[56]).n128_u8[8] = 1;
    }
  }
  game_zview_d1e580((__int64)a1, v8);
  game_zview_d1ed40(a1);
  v24 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
}

double game_zview_d209a0(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
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
  __int64* v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  double result;
  __int64 v39;

  *(_BYTE*)(a1 + 32) = 0;
  *(_BYTE*)(a1 + 36) = 0;
  *(_BYTE*)(a1 + 40) = 0;
  v2 = (_QWORD*)(a1 + 612);
  *(_QWORD*)a1 = game_zview_CameraState_vtable;
  *(_BYTE*)(a1 + 56) = 0;
  *(_BYTE*)(a1 + 60) = 0;
  *(_QWORD*)(a1 + 160) = 1065353216;
  *(_QWORD*)(a1 + 168) = 0x100000000LL;
  *(_BYTE*)(a1 + 64) = 0;
  *(_OWORD*)(a1 + 96) = GameData_1a83090;
  *(_OWORD*)(a1 + 112) = (__typeof__(*(_OWORD*)(a1 + 112))){0};
  *(_QWORD*)(a1 + 176) = 0x4248000041D80000LL;
  *(_QWORD*)(a1 + 184) = 0x41C0000042100000LL;
  *(_QWORD*)(a1 + 192) = 0x4110000041800000LL;
  *(_BYTE*)(a1 + 68) = 0;
  *(_BYTE*)(a1 + 72) = 0;
  *(_BYTE*)(a1 + 76) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 21) = 0;
  *(_BYTE*)(a1 + 52) = 0;
  *(_QWORD*)(a1 + 44) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 216) = 1092616192;
  *(_DWORD*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 212) = 1;
  *(_OWORD*)(a1 + 128) = GameData_1a83610;
  *(_OWORD*)(a1 + 144) = (__typeof__(*(_OWORD*)(a1 + 144))){0};
  v3 = (__int64*)GameData_212c2a0;
  v4 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
  v5 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                   (_QWORD)GameData_212c2a0);
  v6 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                   (_QWORD)GameData_212c2a0);
  *(_QWORD*)(a1 + 256) =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
  *(_QWORD*)(a1 + 264) = v4;
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3);
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 288) = v5;
  *(_QWORD*)(a1 + 296) = v6;
  *(_QWORD*)(a1 + 272) = v7;
  *(_QWORD*)(a1 + 280) = v8;
  v10 = *v3;
  v9 = v3[1];
  *(_QWORD*)(a1 + 240) = v10;
  *(_QWORD*)(a1 + 248) = v9;
  v11 = (__int64*)GameData_212c2b0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  v12 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8);
  v13 = *v11;
  v14 = v11[1];
  v16 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11);
  v15 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v11);
  *(_QWORD*)(a1 + 320) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11);
  *(_QWORD*)(a1 + 328) = v12;
  v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11);
  v18 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 8);
  v19 = *v11;
  *(_QWORD*)(a1 + 304) = v13;
  *(_QWORD*)(a1 + 312) = v17;
  v21 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11);
  *(_QWORD*)(a1 + 368) = v19;
  *(_QWORD*)(a1 + 376) = v14;
  *(_QWORD*)(a1 + 352) = v20;
  *(_QWORD*)(a1 + 360) = v15;
  v23 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8);
  v22 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 16);
  v24 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11);
  v25 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11 + 8);
  v26 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11);
  *(_QWORD*)(a1 + 336) = v22;
  *(_QWORD*)(a1 + 344) = v25;
  *(_QWORD*)(a1 + 384) = v18;
  *(_QWORD*)(a1 + 392) = v23;
  *(_QWORD*)(a1 + 416) = v16;
  *(_QWORD*)(a1 + 424) = v26;
  *(_QWORD*)(a1 + 400) = v24;
  *(_QWORD*)(a1 + 408) = v21;
  v27 = GameData_212e438;
  *(_DWORD*)(a1 + 596) = 1065353216;
  *(_DWORD*)(a1 + 628) = 1065353216;
  *(_DWORD*)(a1 + 772) = 1065353216;
  *(_DWORD*)(a1 + 804) = 1065353216;
  *(_BYTE*)(a1 + 213) = 1;
  *(_QWORD*)(a1 + 504) = 0x3F00000043C80000LL;
  *(_QWORD*)(a1 + 512) = 0x40A00000425C0000LL;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 1077936128;
  *(_BYTE*)(a1 + 552) = 1;
  *(_BYTE*)(a1 + 556) = 0;
  *(_BYTE*)(a1 + 560) = 0;
  *(_BYTE*)(a1 + 564) = 0;
  *(_QWORD*)(a1 + 584) = 0x4000000040C00000LL;
  *(_BYTE*)(a1 + 592) = 1;
  *(_BYTE*)(a1 + 600) = 1;
  *(_BYTE*)(a1 + 604) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *v2 = 0;
  v2[1] = 0;
  *(_BYTE*)(a1 + 632) = 0;
  *(_OWORD*)(a1 + 640) = (__typeof__(*(_OWORD*)(a1 + 640))){0};
  *(_QWORD*)(a1 + 656) = game_zview_CameraParam_vtable;
  *(_QWORD*)(a1 + 680) = 0x3F00000043C80000LL;
  *(_QWORD*)(a1 + 688) = 0x40A00000425C0000LL;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 720) = 1077936128;
  *(_BYTE*)(a1 + 728) = 1;
  *(_BYTE*)(a1 + 732) = 0;
  *(_BYTE*)(a1 + 736) = 0;
  *(_BYTE*)(a1 + 740) = 0;
  *(_QWORD*)(a1 + 760) = 0x4000000040C00000LL;
  *(_BYTE*)(a1 + 768) = 1;
  *(_BYTE*)(a1 + 776) = 1;
  *(_BYTE*)(a1 + 780) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_BYTE*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_DWORD*)(a1 + 840) = 0;
  *(_BYTE*)(a1 + 876) = 1;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 844) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 520) = 0x4000000042440000LL;
  *(_QWORD*)(a1 + 528) = 0x3F80000040000000LL;
  *(_QWORD*)(a1 + 568) = 0x408000003F000000LL;
  *(_QWORD*)(a1 + 576) = 0x408000003F800000LL;
  *(_QWORD*)(a1 + 672) = 0x42C800003F000000LL;
  *(_QWORD*)(a1 + 696) = 0x4000000042440000LL;
  *(_QWORD*)(a1 + 704) = 0x3F80000040000000LL;
  *(_QWORD*)(a1 + 744) = 0x408000003F000000LL;
  *(_QWORD*)(a1 + 752) = 0x408000003F800000LL;
  *(_QWORD*)(a1 + 852) = 0;
  *(_QWORD*)(a1 + 860) = 0;
  *(_QWORD*)(a1 + 868) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 80) = v27 + 16;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 204) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(a1 + 440) = 1023;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 472) = 1023;
  *(_QWORD*)(a1 + 480) = game_zview_CameraParam_vtable;
  *(_QWORD*)(a1 + 488) = 0x4416000042200000LL;
  *(_QWORD*)(a1 + 496) = 0x42C800003F000000LL;
  *(_QWORD*)(a1 + 664) = 0x4416000042200000LL;
  *(_QWORD*)(a1 + 788) = 0;
  *(_QWORD*)(a1 + 796) = 0;
  v28 = (__int64*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  v29 = fw_memory_HeapManager_Allocate(*v28, 144, 16, 0);
  *(_QWORD*)(v29 + 8) = 0;
  *(_QWORD*)(v29 + 16) = 0;
  *(_QWORD*)v29 = GameData_1fdaf68;
  v30 = GameData_212fdd0[0];
  v31 = *(_QWORD*)(a1 + 920);
  *(_QWORD*)(v29 + 100) = 0;
  *(_QWORD*)(v29 + 40) = a1;
  *(_QWORD*)(v29 + 48) = 0;
  *(_QWORD*)(v29 + 56) = 0;
  *(_QWORD*)(v29 + 64) = 0;
  *(_QWORD*)(v29 + 72) = 0;
  *(_QWORD*)(v29 + 80) = 0;
  *(_QWORD*)(v29 + 88) = 0;
  *(_BYTE*)(v29 + 96) = 0;
  *(_QWORD*)(v29 + 112) = 0;
  *(_QWORD*)(v29 + 120) = 0;
  *(_QWORD*)(v29 + 128) = 0;
  *(_QWORD*)(v29 + 136) = 0;
  *(_QWORD*)(a1 + 920) = v29;
  *(_QWORD*)(v29 + 32) = v30 + 2;
  *(_QWORD*)(a1 + 912) = v29 + 32;
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  v32 = fw_memory_HeapManager_Allocate(*v28, 144, 16, 0);
  *(_QWORD*)(v32 + 8) = 0;
  *(_QWORD*)(v32 + 16) = 0;
  *(_QWORD*)v32 = GameData_1fdafb8;
  v33 = GameData_212fdc8[0];
  *(_QWORD*)(v32 + 40) = a1;
  *(_QWORD*)(v32 + 48) = 0;
  *(_QWORD*)(v32 + 56) = 0;
  *(_QWORD*)(v32 + 64) = 0;
  *(_QWORD*)(v32 + 72) = 0;
  *(_QWORD*)(v32 + 80) = 0;
  *(_QWORD*)(v32 + 88) = 0;
  *(_WORD*)(v32 + 96) = 0;
  *(_QWORD*)(v32 + 100) = 0;
  *(_QWORD*)(v32 + 108) = 0;
  *(_QWORD*)(v32 + 116) = 0;
  *(_QWORD*)(v32 + 124) = 0x3F8000003F800000LL;
  *(_QWORD*)(v32 + 132) = 0x3F8000003F800000LL;
  *(_QWORD*)(v32 + 32) = v33 + 2;
  if ((*(_BYTE*)(*(_QWORD*)GameData_212d310 + 48LL) & 4) != 0) {
    *(_QWORD*)(v32 + 124) = 0x4080000040400000LL;
    *(_QWORD*)(v32 + 132) = 0x3F00000040400000LL;
  }
  v34 = *(_QWORD*)(a1 + 904);
  *(_QWORD*)(a1 + 896) = v32 + 32;
  *(_QWORD*)(a1 + 904) = v32;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = fw_memory_HeapManager_Allocate(*v28, 240, 16, 0);
  *(_QWORD*)(v35 + 8) = 0;
  *(_QWORD*)(v35 + 16) = 0;
  *(_QWORD*)v35 = GameData_1fdb008;
  v36 = GameData_212fdd8[0];
  v37 = *(_QWORD*)(a1 + 936);
  *(_QWORD*)(v35 + 40) = a1;
  *(_BYTE*)(v35 + 48) = 0;
  *(_QWORD*)(v35 + 52) = 0;
  *(_QWORD*)(v35 + 60) = 0;
  *(_QWORD*)(v35 + 68) = 0;
  *(_QWORD*)(v35 + 73) = 0;
  *(_QWORD*)(v35 + 84) = 0;
  *(_QWORD*)(v35 + 92) = 0;
  *(_QWORD*)(v35 + 100) = 0;
  *(_QWORD*)(v35 + 108) = 0;
  *(_DWORD*)(v35 + 116) = 1065353216;
  *(_BYTE*)(v35 + 120) = 0;
  *(_DWORD*)(v35 + 124) = 0;
  *(_BYTE*)(v35 + 128) = 0;
  *(_BYTE*)(v35 + 144) = 0;
  *(_BYTE*)(v35 + 208) = 0;
  *(_DWORD*)(v35 + 224) = 0;
  *(_QWORD*)(a1 + 936) = v35;
  *(_QWORD*)(v35 + 32) = v36 + 2;
  *(_QWORD*)(a1 + 928) = v35 + 32;
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  *(_DWORD*)(a1 + 16) = 0;
  result = *(double*)&GameData_21a60e0;
  v39 = *(_QWORD*)(a1 + 928);
  *(_QWORD*)(a1 + 8) = GameData_21a60e0;
  *(_DWORD*)(v39 + 80) = 0;
  return result;
}

void game_zview_d23060(__int64 a1)
{
  int8x16_t v2;
  int8x16_t v3;
  float32x4_t v4;
  float32x4_t v5;
  int8x8_t v6;
  int8x16_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
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
  int8x16_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float v46;
  int8x16_t v47;
  float32x4_t v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  int8x16_t v57;
  struct {
    int8x16_t v58;
    char gap112_[24];
    __int64 v59;
  } v58_;

  math_Quat_FromYawPitchRoll(
      (void*)(&v58_.v58),
      (float)(COERCE_FLOAT(*(_OWORD*)(a1 + 960)) + 0x1.6800000000000p+7f) *
          0x1.1df46a0000000p-6f,
      vmuls_lane_f32(0x1.1df46a0000000p-6f, *(float32x2_t*)(a1 + 960), 1),
      vmuls_lane_f32(0x1.1df46a0000000p-6f, *(float32x4_t*)(a1 + 960), 2));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
    v49 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v49;
    __cxa_guard_release(&GameData_21a61b0);
  }
  v2 = v58_.v58;
  v3 = COERCE_AS(int8x16_t, GameData_21a61a0);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v54 = v3;
    v56 = v2;
    v50 = __cxa_guard_acquire(&GameData_21a6190);
    v3 = v54;
    v2 = v56;
    if (v50 != 0) {
      v51 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v51;
      __cxa_guard_release(&GameData_21a6190);
      v3 = v54;
      v2 = v56;
    }
  }
  v4 = COERCE_AS(float32x4_t, GameData_1a829d0);
  v5 = COERCE_AS(float32x4_t, GameData_1a83800);
  PSEUDO_LOW_LANE64(v6, n64_u64, 0xB0A090803020100LL);
  if (fabsf(*(float*)(a1 + 968)) >= 0x1.0624de0000000p-10f) {
    v8 = vmulq_f32(v58_.v58, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v11).n128_u64[0] = GameData_21a6180;
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
    LANES128(v11).n128_u64[1] = LANES128(v10).n128_u64[0];
    *(int8x8_t*)&LANES128(v12).n128_i8[8] =
        vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v13).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v14 = vmlaq_f32(vmulq_f32(v8, v9), COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v11, v12));
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v13).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 1);
    LANES128(v10).n128_u64[1] = LANES128(v12).n128_u64[0];
    LANES128(v12).n128_u64[1] = GameData_21a6180;
    v15 = vmulq_f32(v12, v13);
    LANES128(v13).n128_u64[0] = LANES128(v58_.v58).n128_u64[0];
    v16 = vmlaq_f32(v14, COERCE_AS(float32x4_t, GameData_1a83800), v15);
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v15).n128_i8[8] =
        vqtbl1_s8(v8, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v8).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v58_.v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(v8).n128_u64[0];
    v17 = vmlsq_f32(v16, v15, v10);
    LANES128(v15).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v58_.v58, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v10).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
    *(int8x8_t*)&LANES128(v10).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v12).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v18 =
        vmlaq_f32(vmulq_f32(v15, v17), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v13, v10));
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v58_.v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v12).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 1);
    LANES128(v8).n128_u64[1] = LANES128(v10).n128_u64[0];
    LANES128(v10).n128_u64[1] = LANES128(v58_.v58).n128_u64[0];
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v19).n128_i8[8] =
        vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v20 = vmlsq_f32(vmlaq_f32(v18, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v10, v12)),
                    v19, v8);
    LANES128(v20).n128_u32[3] = 0;
    v21 = vmulq_f32(v20, v20);
    LANES128(v21).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
            .n64_u64[0];
    LANES128(v21).n128_u64[1] = LANES128(v21).n128_u64[0];
    v22 = vrsqrteq_f32(v21);
    v23 = vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v21, v22)));
    v7 = vbicq_s8(
        vmulq_f32(vmulq_f32(v23, vrsqrtsq_f32(v23, vmulq_f32(v21, v23))), v20),
        vceqzq_f32(v21));
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v55 = v3;
      v57 = v2;
      v58_.v59 = 0xB0A090803020100LL;
      v52 = __cxa_guard_acquire(&GameData_21a6190);
      v4 = COERCE_AS(float32x4_t, GameData_1a829d0);
      v5 = COERCE_AS(float32x4_t, GameData_1a83800);
      v3 = v55;
      v2 = v57;
      PSEUDO_LOW_LANE64(v6, n64_u64, v58_.v59);
      if (v52 != 0) {
        v53 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v53;
        __cxa_guard_release(&GameData_21a6190);
        v4 = COERCE_AS(float32x4_t, GameData_1a829d0);
        v5 = COERCE_AS(float32x4_t, GameData_1a83800);
        v3 = v55;
        v2 = v57;
        PSEUDO_LOW_LANE64(v6, n64_u64, v58_.v59);
      }
    }
    v7 = COERCE_AS(int8x16_t, GameData_21a6180);
    LANES128(v7).n128_u32[3] = 0;
  }
  v24 = vmulq_f32(v2, v4);
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v3, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(_DWORD*)(a1 + 88) = 0;
  *(int8x16_t*)(a1 + 128) = v7;
  *(_DWORD*)(a1 + 172) = 0;
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v3, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] = LANES128(v3).n128_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v2, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v2, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] = LANES128(v2).n128_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v25).n128_u64[0];
  LANES128(v25).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v3).n128_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v29).n128_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v28).n128_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v2).n128_u64[0];
  *(int8x8_t*)&LANES128(v31).n128_i8[8] = vqtbl1_s8(v24, v6);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v32).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
  v33 = vmulq_f32(v26, v32);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v32).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v34 = vmulq_f32(v27, v32);
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v3, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v32).n128_u64[0];
  v35 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v24, v32), v5, v34), v5, v33),
                  v31, v25);
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v36).n128_i8[8] = vqtbl1_s8(v35, v6);
  *(int32x2_t*)&LANES128(v37).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v35).n128_u64[0]), 1);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v2, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v40 = vmlsq_f32(
      vmlaq_f32(vmlaq_f32(vmulq_f32(v35, v39), v5, vmulq_f32(v30, v38)), v5,
                vmulq_f32(v28, v37)),
      v36, v29);
  LANES128(v40).n128_u32[3] = 0;
  v41 = vmulq_f32(v40, v40);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v41).n128_u64[0];
  v42 = vrsqrteq_f32(v41);
  v43 = vceqzq_f32(v41);
  v44 = vmulq_f32(v42, vrsqrtsq_f32(v42, vmulq_f32(v41, v42)));
  v45 = vmulq_f32(vmulq_f32(v44, vrsqrtsq_f32(v44, vmulq_f32(v41, v44))), v40);
  v46 = *(float*)(a1 + 980);
  v47 = vbicq_s8(v45, v43);
  if (v46 < 0x1.0000000000000p+1f) {
    v46 = 0x1.0000000000000p+1f;
  }
  v48 = vsubq_f32(*(float32x4_t*)(a1 + 944),
                  vmulq_n_f32(v47, COERCE_FLOAT(*(_QWORD*)(a1 + 980))));
  *(float32x4_t*)(a1 + 96) = v48;
  *(float32x4_t*)(a1 + 112) = vaddq_f32(vmulq_n_f32(v47, v46), v48);
  *(_DWORD*)(a1 + 176) = *(_DWORD*)(a1 + 976);
  GameRoutine_b3aee0((float32x4_t*)(a1 + 80));
}

__attribute__((swiftcall)) void game_zview_d234c0(PSEUDO_X8 x8_, __int64 result)
{

#pragma clang fp contract(off)
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
  __int64 v3;
  __int64 v4;
  float32x4_t v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int128 v12;
  unsigned __int32* v13;
  int32x4_t v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  float v26;
  unsigned __int64 v27;
  float v28;
  unsigned __int64 v29;
  int v30;
  __int64 v31;
  float32x4_t* v32;
  __int64 v33;

  v2 = *(__int64**)(result + 880);
  v3 = *(_QWORD*)(result + 888);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v32 = a2;
    v33 = result;
    v30 = __cxa_guard_acquire(&GameData_21a6130);
    a2 = v32;
    result = v33;
    if (v30 != 0) {
      v31 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v31;
      __cxa_guard_release(&GameData_21a6130);
      a2 = v32;
      result = v33;
    }
  }
  v4 = *v2;
  v5 = COERCE_AS(float32x4_t, GameData_21a6120);
  v6 = GameData_212eba8[0];
  v7 = GameData_212eda8[0];
  if (*v2 == 0) {
    goto LABEL_12;
  }
  v8 = *GameData_212eba8[0];
  if (*GameData_212eba8[0] == 0) {
    goto LABEL_12;
  }
  v9 = *(_QWORD**)(v8 + 8);
  v10 = *(_QWORD**)(v8 + 16);
  if (v9 != v10) {
    while (*v9 != v4) {
      v9 += 2;
      if (v9 == v10) {
        goto LABEL_12;
      }
    }
  }
  if (v9 != v10) {
    v11 = *(_QWORD*)(v4 + 16);
    v12 = *(_OWORD*)(v11 + 560);
    v13 = (unsigned __int32*)(v11 + 580);
    LANES128(v14).n128_u32[2] = DWORD2(v12);
  }
  else {
  LABEL_12:
    if (*GameData_212eda8[0] == 0) {
      goto LABEL_15;
    }
    v15 = *(_QWORD*)(*GameData_212eda8[0] + 8);
    *(_QWORD*)&v12 = *(_QWORD*)(v15 + 280);
    v13 = (unsigned __int32*)(v15 + 168);
    v14 = vdupq_lane_s32(*(int32x2_t*)&v12, 1);
  }
  LANES128(v5).n128_u32[0] = v12;
  LANES128(v5).n128_u32[1] = *v13;
  LANES128(v5).n128_u64[1] = LANES128(v14).n128_u32[2];
LABEL_15:
  v16 = *(__int64**)(result + 880);
  v17 = *(_QWORD*)(result + 888);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
    v18 = *v16;
    if (v18 == 0) {
      goto LABEL_30;
    }
    v19 = *v6;
    if (*v6 == 0) {
      goto LABEL_30;
    }
    v20 = *(_QWORD**)(v19 + 8);
    v21 = *(_QWORD**)(v19 + 16);
    if (v20 != v21) {
      while (*v20 != v18) {
        v20 += 2;
        if (v20 == v21) {
          goto LABEL_30;
        }
      }
    }
    if (v20 != v21) {
      v26 = *(float*)(v18 + 556);
    }
    else {
    LABEL_30:
      v26 = 0x1.6666660000000p+0f;
      if (*v7 == 0) {
        v26 = 0x0.0p+0f;
      }
    }
    LODWORD(v27) = 0;
    *((float*)&v27 + 1) = v26;
    *a2 = vaddq_f32(v5, COERCE_AS(float32x4_t, v27));
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      result = std___1___shared_weak_count___release_weak(v17);
    }
    if (v3 == 0) {
      result;
      return;
    }
  LABEL_41:
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      {
        std___1___shared_weak_count___release_weak(v3);
        return;
      }
    }
    {
      result;
      return;
    }
  }
  v22 = *v16;
  if (v22 == 0) {
    goto LABEL_38;
  }
  v23 = *GameData_212eba8[0];
  if (*GameData_212eba8[0] == 0) {
    goto LABEL_38;
  }
  v24 = *(_QWORD**)(v23 + 8);
  v25 = *(_QWORD**)(v23 + 16);
  if (v24 != v25) {
    while (*v24 != v22) {
      v24 += 2;
      if (v24 == v25) {
        goto LABEL_38;
      }
    }
  }
  if (v24 != v25) {
    v28 = *(float*)(v22 + 556);
  }
  else {
  LABEL_38:
    v28 = 0x1.6666660000000p+0f;
    if (*GameData_212eda8[0] == 0) {
      v28 = 0x0.0p+0f;
    }
  }
  LODWORD(v29) = 0;
  *((float*)&v29 + 1) = v28;
  *a2 = vaddq_f32(v5, COERCE_AS(float32x4_t, v29));
  if (v3 != 0) {
    goto LABEL_41;
  }
  {
    result;
    return;
  }
}

__int64 game_zview_d23da0(float32x4_t* a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  char v2;
  int v4;
  int v5;
  int16x4_t v7;
  float32x4_t* v8;
  float32x4_t* v9;
  int v10;

  if (LANES128(*(a1)).n128_u64[0] != LANES128(*(a2)).n128_u64[0]) {
    goto LABEL_2;
  }
  v4 = LANES128(a1[2]).n128_u8[0];
  v5 = LANES128(a2[2]).n128_u8[0];
  if (v4 != v5 || v4 == 0) {
    if (v4 == v5) {
      goto LABEL_14;
    }
  LABEL_2:
    v2 = 0;
    return v2 & 1;
  }
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(a1[1], a2[1]))).n64_u64[0];
  if ((LANES64(v7).n64_u8[0] & 1) == 0 || (LANES64(v7).n64_u8[2] & 1) == 0 ||
      (LANES64(v7).n64_u8[4] & 1) == 0) {
    goto LABEL_2;
  }
LABEL_14:
  v8 = (float32x4_t*)LANES128(a1[3]).n128_u64[0];
  v9 = (float32x4_t*)LANES128(a2[3]).n128_u64[0];
  v2 = 1;
  v10 = (v8 == nullptr) ^ (v9 == nullptr);
  if (v8 != nullptr && v9 != nullptr) {
    v2 = game_zview_d23da0(v8, v9);
  }
  if (v10 != 0) {
    goto LABEL_2;
  }
  return v2 & 1;
}

__int64 game_zview_d24980(__int64 a1, __int64 a2, float32x4_t* a3,
                          float32x4_t* a4, _DWORD* a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  bool v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;

  v5 = *(_QWORD*)a1;
  v6 = *(_QWORD*)(a1 + 8);
  v11 = v6 - *(_QWORD*)a1;
  v10 = v6 == *(_QWORD*)a1;
  v12 = (unsigned __int64)v11 >> 3;
  if (!v10) {
    if (*(_DWORD*)(a2 + 376) == 0) {
    LABEL_16:
      LODWORD(v15) = v12 - 1;
      goto LABEL_17;
    }
    if ((*a5 & 2) == 0) {
      v13 = v11 >> 3;
      v14 = *(_QWORD*)(*(_QWORD*)(a2 + 632) + 8LL);
      if ((*a5 & 4) != 0) {
        v15 = 0;
        while (1) {
          v17 = *(_QWORD*)(v5 + 8 * v15);
          if (v17 != 0 && v14 < *(_QWORD*)(*(_QWORD*)(v17 + 632) + 8LL)) {
            break;
          }
          if (v13 == ++v15) {
            goto LABEL_16;
          }
        }
      }
      else {
        v15 = 0;
        while (1) {
          v16 = *(_QWORD*)(v5 + 8 * v15);
          if (v16 != 0 && v14 == *(_QWORD*)(*(_QWORD*)(v16 + 632) + 8LL)) {
            break;
          }
          if (v13 == ++v15) {
            goto LABEL_16;
          }
        }
      }
    LABEL_17:
      if ((*a5 & 8) != 0) {
        v18 = 0x1.0000000000000p-1f;
      }
      else {
        v18 = 0x1.0000000000000p+0f;
      }
      if ((*a5 & 8) != 0) {
        LODWORD(v12) = *(_DWORD*)(a1 + 52);
      }
      v19 = v12 - v15;
      if ((int)v12 <= (int)v15) {
        return 0;
      }
      v20 = (__int64*)(v5 + 8LL * (int)v15);
      while (1) {
        v22 = *v20++;
        v21 = v22;
        if (v22 != 0) {
          LOBYTE(a1) = GameRoutine_d24440_alt1(v18, a1, a2, a3, a4, v21);
          if ((a1 & 1) != 0) {
            break;
          }
        }
        if (--v19 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  LODWORD(v15) = 0;
  goto LABEL_17;
}

char* game_zview_d25000(char* result, char* a2, char* a3, __int64 a4,
                        __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  char* v28;
  char* v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  _QWORD* v49;
  _QWORD* v50;
  char* v51;
  __int64 v52;
  bool v53;
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  bool v66;
  __int64 v67;
  _QWORD* v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  bool v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  char* v81;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = *(_QWORD*)a2;
      if (*(_QWORD*)a2 == 0) {
        return result;
      }
      v10 = 0;
      v11 = 0;
      while (1) {
        v12 = *(_QWORD*)&result[8 * v11];
        if (v12 != 0 && *(_QWORD*)(*(_QWORD*)(v9 + 632) + 8LL) <
                            *(_QWORD*)(*(_QWORD*)(v12 + 632) + 8LL)) {
          break;
        }
        ++v11;
        v10 -= 8;
        if (a4 == v11) {
          return result;
        }
      }
      v13 = a4 - v11;
      v14 = &result[-v10];
      if (a4 - v11 >= a5) {
        if (a4 - 1 == v11) {
          *(_QWORD*)&result[8 * v11] = v9;
          *(_QWORD*)a2 = v12;
          return result;
        }
        v16 = a3;
        v22 = v13 / 2;
        v23 = &result[8 * (v13 / 2)];
        if (a3 != a2) {
          v24 = *(_QWORD*)&v23[8 * v11];
          v16 = a2;
          if (v24 != 0) {
            v25 = (a3 - a2) >> 3;
            v16 = a2;
            do {
              v26 = v25 >> 1;
              v27 = &v16[8 * (v25 >> 1)];
              if (*(_QWORD*)v27 != 0 &&
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v27 + 632LL) + 8LL) <
                      *(_QWORD*)(*(_QWORD*)(v24 + 632) + 8LL)) {
                v16 = v27 + 8;
                v26 = v25 + ~v26;
              }
              v25 = v26;
            } while (v26 != 0);
          }
        }
        v17 = &v23[-v10];
        v15 = (v16 - a2) >> 3;
      }
      else {
        v15 = a5 / 2;
        v16 = &a2[8 * (a5 / 2)];
        if (v14 == a2) {
          v19 = a2;
          v17 = a2;
        }
        else {
          v17 = &result[-v10];
          v18 = (a2 - result + v10) >> 3;
          if (*(_QWORD*)v16 != 0) {
            do {
              v20 = v18 >> 1;
              v21 = &v17[8 * (v18 >> 1)];
              if (*(_QWORD*)v21 == 0 ||
                  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v16 + 632LL) + 8LL) >=
                      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v21 + 632LL) + 8LL)) {
                v17 = v21 + 8;
                v20 = v18 + ~v20;
              }
              v18 = v20;
            } while (v20 != 0);
          }
          else {
            do {
              v17 += 8 * (v18 >> 1) + 8;
              v18 += ~(v18 >> 1);
            } while (v18 != 0);
          }
          v19 = v14;
        }
        v22 = (v17 - v19) >> 3;
      }
      v28 = v16;
      if (v17 != a2) {
        v28 = v17;
        if (a2 != v16) {
          v29 = v17 + 8;
          if (v17 + 8 == a2) {
            v35 = v16 - a2;
            v36 = a4;
            v37 = v14;
            v76 = *(_QWORD*)v17;
            v80 = a3;
            v78 = a6;
            v38 = a5;
            memmove(v17, v17 + 8, v16 - a2);
            a5 = v38;
            a6 = v78;
            a3 = v80;
            v28 = &v17[v35];
            v14 = v37;
            a4 = v36;
            *(_QWORD*)v28 = v76;
          }
          else {
            v30 = a2 + 8;
            if (a2 + 8 == v16) {
              v39 = *((_QWORD*)v16 - 1);
              v28 = v17 + 8;
              if (v16 - 8 != v17) {
                v81 = a3;
                v40 = a4;
                v77 = *((_QWORD*)v16 - 1);
                v79 = a6;
                v41 = a5;
                v42 = v14;
                memmove(v17 + 8, v17, v16 - 8 - v17);
                a5 = v41;
                v39 = v77;
                a6 = v79;
                a3 = v81;
                v14 = v42;
                a4 = v40;
              }
              *(_QWORD*)v17 = v39;
            }
            else {
              v31 = (char*)(a2 - v17);
              v32 = (a2 - v17) >> 3;
              v33 = (v16 - a2) >> 3;
              if (v32 == v33) {
                do {
                  v34 = *((_QWORD*)v29 - 1);
                  *((_QWORD*)v29 - 1) = *((_QWORD*)v30 - 1);
                  *((_QWORD*)v30 - 1) = v34;
                  if (v29 == a2) {
                    break;
                  }
                  v29 += 8;
                  v66 = v30 == v16;
                  v30 += 8;
                } while (!v66);
                v28 = a2;
              }
              else {
                v43 = (a2 - v17) >> 3;
                do {
                  v44 = v43;
                  v43 = v33;
                  v33 = v44 % v33;
                } while (v33 != 0);
                if (8 * v43 != 0) {
                  v45 = &v17[8 * v43];
                  do {
                    v47 = *((_QWORD*)v45 - 1);
                    v45 -= 8;
                    v46 = v47;
                    v48 = &v45[(_QWORD)v31];
                    v49 = v45;
                    do {
                      v50 = v48;
                      *v49 = *(_QWORD*)v48;
                      v51 = &v31[(_QWORD)v48];
                      v52 = (v16 - v48) >> 3;
                      v53 = __OFSUB__(v32, v52);
                      v55 = v32 - v52;
                      v54 = (v55 < 0) ^ v53;
                      v48 = &v17[8 * v55];
                      if (v54) {
                        v48 = v51;
                      }
                      v49 = v50;
                    } while (v48 != v45);
                    *v50 = v46;
                  } while (v45 != v17);
                }
                v28 = &v17[v16 - a2];
              }
            }
          }
        }
      }
      v56 = a5 - v15;
      v57 = a4 - v22 - v11;
      if (v22 + v15 >= a5 + a4 - (v22 + v15) - v11) {
        v59 = a4 - v22 - v11;
        v60 = v14;
        game_zview_d25000(v28, v16, a3, v59, a5 - v15, a6, a7);
        result = v60;
        v16 = v17;
        v56 = v15;
        v57 = v22;
        a3 = v28;
      }
      else {
        v58 = a3;
        game_zview_d25000(v14, v17, v28, v22, v15, a6, a7);
        a3 = v58;
        result = v28;
      }
      a4 = v57;
      a5 = v56;
      a2 = v16;
      if (v56 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v67 = -a6;
        v68 = (_QWORD*)a6;
        v69 = result;
        do {
          v70 = *(_QWORD*)v69;
          v69 += 8;
          v67 -= 8;
          *v68++ = v70;
        } while (v69 != a2);
        while (a2 != a3) {
          v71 = *(_QWORD*)a2;
          v72 = *(_QWORD*)a6;
          v73 = *(_QWORD*)a2 == 0 || v72 == 0;
          if (v73 || *(_QWORD*)(*(_QWORD*)(v71 + 632) + 8LL) >=
                         *(_QWORD*)(*(_QWORD*)(v72 + 632) + 8LL)) {
            a6 += 8;
            *(_QWORD*)result = v72;
          }
          else {
            *(_QWORD*)result = v71;
            a2 += 8;
          }
          result += 8;
          if (v68 == (_QWORD*)a6) {
            return result;
          }
        }
        return (char*)memmove(result, a6, -(a6 + v67));
      }
    }
    else if (a2 != a3) {
      v61 = 0;
      do {
        *(_QWORD*)(a6 + v61) = *(_QWORD*)&a2[v61];
        v61 += 8;
      } while (&a2[v61] != a3);
      v62 = a6 + v61;
      while (a2 != result) {
        v64 = a2 - 8;
        v63 = *((_QWORD*)a2 - 1);
        v65 = *(_QWORD*)(v62 - 8);
        v66 = v63 == 0 || v65 == 0;
        if (v66 || *(_QWORD*)(*(_QWORD*)(v65 + 632) + 8LL) >=
                       *(_QWORD*)(*(_QWORD*)(v63 + 632) + 8LL)) {
          v63 = *(_QWORD*)(v62 - 8);
          v64 = a2;
          v62 -= 8;
        }
        *((_QWORD*)a3 - 1) = v63;
        a3 -= 8;
        a2 = v64;
        if (v62 == a6) {
          return result;
        }
      }
      if (a6 != v62) {
        v74 = -8;
        do {
          v75 = *(_QWORD*)(v62 - 8);
          v62 -= 8;
          *(_QWORD*)&a3[v74] = v75;
          v74 -= 8;
        } while (v62 != a6);
      }
    }
  }
  return result;
}

__int64 game_zview_d30720(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float32x4_t v12;
  float v13;
  float v14;
  float v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  float32x4_t v25;
  int8x16_t v26;

  v3 = GameData_212c638;
  if (*(_BYTE*)(*(_QWORD*)GameData_212d310 + 53LL) != 1) {
    goto LABEL_29;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 8LL) + 384LL);
  v5 = GameData_212dc38[0];
  if ((v4 & 0x40000000) != 0 && *(float*)(*(_QWORD*)GameData_212dc38[0] +
                                          1148LL) > 0x1.eb85200000000p-3f) {
    if (*(_BYTE*)(*(_QWORD*)GameData_212dc38[0] + 1144LL) != 0) {
      return 3;
    }
    else {
      return 2;
    }
  }
  v7 = *(float*)(a2 + 532);
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v9 = *(_QWORD*)(v8 + 24);
  v10 = *(_QWORD*)(v8 + 32);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      v9 = v11;
    }
  }
  v12 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a2 + 16) + 560LL),
                  Camera_b3bb60(v9));
  v13 = *(float*)(*(_QWORD*)v5 + 1148LL);
  v14 = 0x0.0p+0f;
  if (v13 <= 0x1.eb85200000000p-3f) {
    v14 = 0x1.99999a0000000p-3f;
    if ((*(_DWORD*)(a2 + 592) & 0xFFFFFFFE) != 2) {
      v14 = 0x0.0p+0f;
    }
  }
  if (fabsf(LANES128(v12).n128_f32[1]) >=
      (float)(v14 +
              (float)((float)(*(float*)(a2 + 548) * 0x1.3333340000000p+0f) +
                      0x1.0000000000000p-1f))) {
    goto LABEL_29;
  }
  v15 = LANES128_OF(vmulq_f32(v12, v12)).n128_f32[2] +
        (float)(LANES128(v12).n128_f32[0] * LANES128(v12).n128_f32[0]);
  if ((v4 & 0x40000000) != 0) {
    if (v15 >= (float)((float)(v7 * 0x1.3333340000000p-1f) *
                       (float)(v7 * 0x1.3333340000000p-1f))) {
      v21 = v7 + (float)(v14 + 0x1.3333340000000p-2f);
      if ((*(_BYTE*)(a2 + 389) & 1) == 0) {
        v21 = v7;
      }
    LABEL_28:
      if (v15 < (float)(v21 * v21)) {
        return 2;
      }
      goto LABEL_29;
    }
    return 3;
  }
  if (v15 < (float)((float)(v7 + v14) * (float)(v7 + v14))) {
    return 3;
  }
  if ((*(_BYTE*)(a2 + 568) & 4) == 0) {
    v16 = *(char**)(*GameData_212eba8[0] + 160);
    v17 = *(char**)(*GameData_212eba8[0] + 168);
    if (v16 == v17) {
      goto LABEL_23;
    }
    v18 = v17 - v16 - 8;
    if ((~(_BYTE)v18 & 0x18) != 0) {
      v19 = ((unsigned __int8)((unsigned int)v18 >> 3) + 1) & 3;
      do {
        v20 = *(_QWORD*)v16;
        v16 += 8;
        if (v20 == a2) {
          goto LABEL_29;
        }
      } while (--v19 != 0);
    }
    if (v18 < 0x18) {
    LABEL_23:
      if (v13 <= 0x1.eb85200000000p-3f) {
        v21 = (float)((float)(v7 * 0x1.6666660000000p+0f) +
                      0x1.0000000000000p-1f) +
              v14;
        goto LABEL_28;
      }
    }
    else {
      while (*(_QWORD*)v16 != a2 && *((_QWORD*)v16 + 1) != a2 &&
             *((_QWORD*)v16 + 2) != a2 && *((_QWORD*)v16 + 3) != a2) {
        v16 += 32;
        if (v16 == v17) {
          goto LABEL_23;
        }
      }
    }
  }
LABEL_29:
  v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 32LL) - 8LL);
  v24 = *(float32x4_t**)(v22 + 24);
  v23 = *(_QWORD*)(v22 + 32);
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v23);
    }
  }
  v25 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a2 + 16) + 560LL), v24[2]);
  v26 = vmulq_f32(v25, v25);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
          .n64_u64[0];
  return LANES64_OF(
             vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
                 .n64_f32[0] > 0x1.c200000000000p+13f &&
         *(_QWORD*)(a2 + 600) != 0;
}

void game_zview_d32f80(__int64 a1, double a2, double a3, long double a4,
                       long double a5)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int128 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v35;
  _QWORD* v36;
  float32x4_t v37;
  float32x4_t* v38;
  __int128 v39;
  float32x4_t v40;
  __int64 v41;
  float v42;
  float v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  float v47;
  __int64 v48;
  unsigned __int64 v49;
  __int128 v50;
  float v51;
  __int128** v52;
  __int128** i;
  __int128* v54;
  __int128* v55;
  __int128 v56;
  __int128 v57;
  __int128 v58;
  __int64* v59;
  __int64* j;
  unsigned __int64 v61;
  float32x4_t v62;
  __int128 v63;
  float v64;
  __int64 v65;
  _QWORD* v67;
  _QWORD* v68;
  float32x4_t* v69;
  __int64 v70;
  float32x4_t v71;
  float32x4_t* v72;
  __int128 v73;
  int v74;
  unsigned int v75;
  __int128 v76;
  __int128 v77;
  __int128 v78;
  int v79;
  float v80;
  float v81;
  unsigned __int64 v82;
  __int128 v83;
  __int64 v84;
  __int64 v85;
  _DWORD* v86;
  __int128 v87;
  float32x4_t* v88;
  float32x4_t v89;
  unsigned __int64 v90;
  __int128 v91;
  __int64 v92;
  float v93;
  float v94;
  float v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  long double v100;
  unsigned __int64 v101;
  long double v102;
  _QWORD v103[2];
  __int64 v104;
  __int64 v105;
  __int128 v106;
  int v107;
  char v108;
  _QWORD v109[2];
  __int128 v110;
  __int128 v111;
  int v112;
  int v113;

  v6 = GameData_212eba8[0];
  if (*(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) != 1 ||
      (v7 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 168LL)) == 0 ||
      ((v8 = GameRoutine_d26f50(*GameData_212ed08[0], 2)) & 1) == 0 ||
      (v9 = *(__int64**)(*v6 + 32), v10 = *(__int64**)(*v6 + 40), v9 == v10)) {
    v28 = 0;
    v29 = 0;
    goto LABEL_46;
  }
  v11 = 0;
  v12 = nullptr;
  v101 = 0;
  v98 = v7;
  do {
    v13 = *v9;
    v14 = v9[1];
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    v15 = *(_QWORD*)(a1 + 8);
    if (v13 == v15 ||
        (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 16) + 8LL) + 387LL) & 0x40) ==
                0 &&
            (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 16) + 8LL) + 387LL) &
             0x40) == 0 ||
        (v16 = *(_QWORD*)(v13 + 168)) == 0) {
    LABEL_22:
      if (v14 == 0) {
        goto LABEL_6;
      }
    LABEL_23:
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        v8 = std___1___shared_weak_count___release_weak(v14);
      }
      goto LABEL_6;
    }
    v17 = *(_QWORD*)(v7 + 440);
    if (v17 != 0) {
      v18 = *(unsigned __int8*)(v17 + 16);
      v19 = *(_QWORD*)(v16 + 440);
      if (v19 != 0) {
        goto LABEL_15;
      }
    }
    else {
      v18 = 9;
      v19 = *(_QWORD*)(v16 + 440);
      if (v19 != 0) {
      LABEL_15:
        v20 = *(unsigned __int8*)(v19 + 16);
        if (v18 == v20) {
          goto LABEL_22;
        }
        goto LABEL_19;
      }
    }
    v20 = 9;
    if (v18 == 9) {
      goto LABEL_22;
    }
  LABEL_19:
    if (v18 != 0) {
      if (v18 == 3 && v20 == 0) {
        goto LABEL_22;
      }
    }
    else if (v20 == 3) {
      goto LABEL_22;
    }
    if ((unsigned __int64)v12 < v101) {
      *(_QWORD*)v12 = v13;
      v12 += 8;
      if (v14 == 0) {
        goto LABEL_6;
      }
      goto LABEL_23;
    }
    v21 = &v12[-v11];
    v22 = (__int64)&v12[-v11] >> 3;
    v23 = v22 + 1;
    if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
      GameRoutine_cefa90();
    }
    v99 = v11;
    if ((__int64)(v101 - v11) >> 2 > v23) {
      v23 = (__int64)(v101 - v11) >> 2;
    }
    if (v101 - v11 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v23;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        GameRoutine_60a210_alt1(v8);
      }
      v25 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v11 = (__int64)&v21[v25 + -8 * v22];
    *(_QWORD*)&v21[v25] = v13;
    v12 = &v21[v25 + 8];
    v101 = v26;
    v8 = memcpy(v11, v99, v21);
    if (v99 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      v8 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v99);
    }
    v7 = v98;
    if (v14 != 0) {
      goto LABEL_23;
    }
  LABEL_6:
    v9 += 2;
  } while (v9 != v10);
  if ((char*)v11 == v12) {
    v29 = 0;
    goto LABEL_140;
  }
  LODWORD(a4) = 7.5;
  v29 = 0;
  v41 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
  v42 = *(float*)(v41 + 292);
  v43 = *(float*)(v41 + 296);
  v44 = (char*)v11;
  do {
    v46 = *(_QWORD*)v44;
    v44 += 8;
    v45 = v46;
    *(float*)&a5 =
        (float)((float)(v43 - *(float*)(*(_QWORD*)(v46 + 16) + 296LL)) *
                (float)(v43 - *(float*)(*(_QWORD*)(v46 + 16) + 296LL))) +
        (float)((float)(v42 - *(float*)(*(_QWORD*)(v46 + 16) + 292LL)) *
                (float)(v42 - *(float*)(*(_QWORD*)(v46 + 16) + 292LL)));
    v47 = sqrtf(*(float*)&a5);
    if (*(float*)&a5 <= (float)(*(float*)&a4 * *(float*)&a4)) {
      v29 = v45;
      *(float*)&a4 = v47;
    }
  } while (v44 != v12);
  if (v29 == 0) {
  LABEL_140:
    v28 = 0;
    if (v11 != 0) {
      goto LABEL_144;
    }
    goto LABEL_46;
  }
  a4 = *(long double*)(*(_QWORD*)(v29 + 16) + 560LL);
  v48 = *(_QWORD*)(*(_QWORD*)(v29 + 8) + 240LL);
  if (v48 != 0) {
    a5 = *(long double*)(v48 + 48);
  }
  else {
    LODWORD(v96) = 0;
    *((float*)&v96 + 1) = *(float*)(v29 + 544) * 0x1.99999a0000000p-1;
    a5 = COERCE_LONG_DOUBLE(
        vaddq_f32(*(float32x4_t*)&a4, COERCE_AS(float32x4_t, v96)));
  }
  HIDWORD(a4) = 0;
  v28 = 1;
  HIDWORD(a5) = 0;
  if (v11 != 0) {
  LABEL_144:
    v100 = a5;
    v102 = a4;
    v97 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v97, v11);
    a5 = v100;
    a4 = v102;
  }
LABEL_46:
  if (*(unsigned __int8*)(a1 + 256) == v28) {
    if (*(_BYTE*)(a1 + 256) != 0) {
      *(_QWORD*)(a1 + 208) = *(_QWORD*)&a4;
      *(_QWORD*)(a1 + 224) = *(_QWORD*)&a5;
      v30 = *(_OWORD*)(a1 + 208);
      v31 = *(_OWORD*)(a1 + 224);
      *(_QWORD*)(a1 + 192) = v29;
      *(_DWORD*)(a1 + 240) = 1065353216;
      *((_QWORD*)&v30 + 1) = DWORD2(a4);
      *((_QWORD*)&v31 + 1) = DWORD2(a5);
      *(_OWORD*)(a1 + 208) = v30;
      *(_OWORD*)(a1 + 224) = v31;
    }
  }
  else if (*(_BYTE*)(a1 + 256) != 0) {
    *(_BYTE*)(a1 + 256) = 0;
  }
  else {
    *(_QWORD*)(a1 + 192) = v29;
    *(long double*)(a1 + 208) = a4;
    *(long double*)(a1 + 224) = a5;
    *(_DWORD*)(a1 + 240) = 1065353216;
    *(_BYTE*)(a1 + 256) = 1;
  }
  LOBYTE(v103[0]) = 0;
  v108 = 0;
  v113 = 1090519040;
  if (*(_BYTE*)(a1 + 24) == 1) {
    v32 = *v6;
    v33 = *(_QWORD*)(*v6 + 56);
    if (v33 != 0 && v33 != *(_QWORD*)(a1 + 8)) {
      v35 = *(_QWORD**)(v32 + 8);
      v36 = *(_QWORD**)(v32 + 16);
      if (v35 != v36) {
        while (*v35 != v33) {
          v35 += 2;
          if (v35 == v36) {
            goto LABEL_74;
          }
        }
      }
      if (v35 != v36) {
        *((_QWORD*)&v110 + 1) = 0;
        v111 = (__typeof__(v111)){0};
        v109[0] = v33;
        v112 = 1065353216;
        v37 = *(float32x4_t*)(*(_QWORD*)(v33 + 16) + 560LL);
        v38 = *(float32x4_t**)(*(_QWORD*)(v33 + 8) + 240LL);
        *(_QWORD*)&v39 = *(_QWORD*)(*(_QWORD*)(v33 + 16) + 560LL);
        *((_QWORD*)&v39 + 1) = LANES128(v37).n128_u32[2];
        v110 = v39;
        if (v38 != nullptr) {
          v40 = v38[3];
        }
        else {
          LODWORD(v49) = 0;
          *((float*)&v49 + 1) = *(float*)(v33 + 544) * 0x1.99999a0000000p-1;
          v40 = vaddq_f32(v37, COERCE_AS(float32x4_t, v49));
        }
        *(_QWORD*)&v111 = LANES128(v40).n128_u64[0];
        *(_QWORD*)&v50 = LANES128(v40).n128_u64[0];
        *((_QWORD*)&v50 + 1) = LANES128(v40).n128_u32[2];
        v51 = *(float*)(v33 + 528);
        v111 = v50;
        game_zview_d33d70_alt1(a1, v109, &v113, v103, v51);
      }
    }
  }
LABEL_74:
  v52 = *(__int128***)(a1 + 352);
  for (i = *(__int128***)(a1 + 360); v52 != i; v52 += 2) {
    v54 = *v52;
    v55 = v52[1];
    if (v55 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)((char*)v55 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v54 != nullptr) {
      v56 = *v54;
      v111 = (__typeof__(v111)){0};
      v109[0] = 0;
      v112 = 1065353216;
      v110 = (unsigned __int64)v56;
      *(_QWORD*)&v111 = v56;
      *(_QWORD*)&v57 = v56;
      *(_QWORD*)&v58 = v56;
      *((_QWORD*)&v57 + 1) = DWORD2(v56);
      *((_QWORD*)&v58 + 1) = DWORD2(v56);
      LODWORD(v56) = *((_DWORD*)v54 + 4);
      v110 = v57;
      v111 = v58;
      game_zview_d33d70_alt1(a1, v109, &v113, v103, *(float*)&v56);
    }
    if (v55 != nullptr &&
        atomic_fetch_add((atomic_ullong* volatile)((char*)v55 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int128*))(*(_QWORD*)v55 + 16LL))(v55);
      std___1___shared_weak_count___release_weak(v55);
    }
  }
  v59 = *(__int64**)(a1 + 376);
  for (j = *(__int64**)(a1 + 384); v59 != j; ++v59) {
    v65 = *v59;
    if (*v59 != 0 && v65 != *(_QWORD*)(a1 + 8)) {
      v67 = *(_QWORD**)(*v6 + 8);
      v68 = *(_QWORD**)(*v6 + 16);
      if (v67 != v68) {
        while (*v67 != v65) {
          v67 += 2;
          if (v67 == v68) {
            goto LABEL_88;
          }
        }
        if (v67 != v68) {
          v70 = *(_QWORD*)(v65 + 8);
          v69 = *(float32x4_t**)(v65 + 16);
          v111 = (__typeof__(v111)){0};
          v110 = (__typeof__(v110)){0};
          v109[0] = v65;
          v112 = 1065353216;
          v71 = v69[35];
          v72 = *(float32x4_t**)(v70 + 240);
          *(_QWORD*)&v73 = LANES128(v71).n128_u64[0];
          *((_QWORD*)&v73 + 1) = LANES128(v71).n128_u32[2];
          v110 = v73;
          if (v72 != nullptr) {
            v62 = v72[3];
          }
          else {
            LODWORD(v61) = 0;
            *((float*)&v61 + 1) = *(float*)(v65 + 544) * 0x1.99999a0000000p-1;
            v62 = vaddq_f32(v71, COERCE_AS(float32x4_t, v61));
          }
          *(_QWORD*)&v111 = LANES128(v62).n128_u64[0];
          *(_QWORD*)&v63 = LANES128(v62).n128_u64[0];
          *((_QWORD*)&v63 + 1) = LANES128(v62).n128_u32[2];
          v64 = *(float*)(v65 + 528);
          v111 = v63;
          game_zview_d33d70_alt1(a1, v109, &v113, v103, v64);
        }
      }
    }
  LABEL_88:;
  }
  if (v108 == 1) {
    v74 = *(unsigned __int8*)(a1 + 464);
    *(_QWORD*)(a1 + 400) = v103[0];
    if (v74 != 0) {
      v75 = v105;
      v76 = v106;
      *(_QWORD*)(a1 + 416) = v104;
      *(_QWORD*)(a1 + 432) = v76;
      v77 = *(_OWORD*)(a1 + 416);
      v78 = *(_OWORD*)(a1 + 432);
      *((_QWORD*)&v77 + 1) = v75;
      *((_QWORD*)&v78 + 1) = DWORD2(v76);
      v79 = v107;
      *(_OWORD*)(a1 + 416) = v77;
      *(_OWORD*)(a1 + 432) = v78;
    }
    else {
      v79 = v107;
      v84 = v105;
      *(_QWORD*)(a1 + 416) = v104;
      *(_QWORD*)(a1 + 424) = v84;
      *(_OWORD*)(a1 + 432) = v106;
      *(_BYTE*)(a1 + 464) = 1;
    }
    *(_DWORD*)(a1 + 448) = v79;
    *(_DWORD*)(a1 + 480) = 1056964608;
    goto LABEL_122;
  }
  v80 = *(float*)(a1 + 480);
  v81 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 228LL));
  if (v80 > 0.0) {
    v80 = v80 - v81;
    if (v80 >= 0.0) {
      goto LABEL_109;
    }
  LABEL_108:
    v80 = 0.0;
    goto LABEL_109;
  }
  if (v80 < 0.0) {
    v80 = v80 + v81;
    if (v80 > 0.0) {
      goto LABEL_108;
    }
  }
LABEL_109:
  *(float*)(a1 + 480) = v80;
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_119;
  }
  v82 =
      game_ProcFadeView_instance_ +
      ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
       << 6);
  if (*(float*)(v82 + 172) == *(float*)(v82 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v82 + 160) + 16LL))(v82 + 160);
  }
  else {
    v83 = *(_OWORD*)(v82 + 208);
  }
  if (*((float*)&v83 + 3) != 0x1.0000000000000p+0 ||
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v82 + 160) + 16LL))(
                      v82 + 160, *((float*)&v83 + 3)))
              .n128_f32[3] != 0x1.0000000000000p+0) {
    v80 = *(float*)(a1 + 480);
  LABEL_119:
    if (v80 != 0.0) {
      goto LABEL_122;
    }
    goto LABEL_120;
  }
  *(_DWORD*)(a1 + 480) = 0;
LABEL_120:
  if (*(_BYTE*)(a1 + 464) == 1) {
    *(_BYTE*)(a1 + 464) = 0;
  }
LABEL_122:
  if (*(_BYTE*)(a1 + 336) == 1) {
    v85 = *(_QWORD*)(a1 + 272);
    if (v85 != 0) {
      v86 = *(_DWORD**)(v85 + 16);
      *(_DWORD*)(a1 + 288) = v86[140];
      *(_DWORD*)(a1 + 292) = v86[141];
      v87 = *(_OWORD*)(a1 + 288);
      *((_QWORD*)&v87 + 1) = (unsigned int)v86[142];
      *(_OWORD*)(a1 + 288) = v87;
      v88 = *(float32x4_t**)(*(_QWORD*)(v85 + 8) + 240LL);
      if (v88 != nullptr) {
        v89 = v88[3];
      }
      else {
        LODWORD(v90) = 0;
        *((float*)&v90 + 1) = *(float*)(v85 + 544) * 0x1.99999a0000000p-1;
        v89 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v85 + 16) + 560LL),
                        COERCE_AS(float32x4_t, v90));
      }
      *(_QWORD*)(a1 + 304) = LANES128(v89).n128_u64[0];
      v91 = *(_OWORD*)(a1 + 304);
      *((_QWORD*)&v91 + 1) = LANES128(v89).n128_u32[2];
      *(_OWORD*)(a1 + 304) = v91;
    }
  }
  if (*(_BYTE*)(a1 + 25) != 0) {
    v92 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 488LL);
    v93 = CharacterRotate_d52080(v92);
    fmodf(*(float*)(v92 + 36) - v93, 0x1.921fb60000000p+2);
    if (v94 >= 0.0) {
      v95 = v94 + 0.0;
    }
    else {
      v95 = (float)(v94 + 0.0) + 0x1.921fb60000000p+2;
    }
    if (v95 > 0x1.921fb60000000p+1) {
      v95 = v95 + -0x1.921fb60000000p+2;
    }
    if (fabsf(v95) <= 0x1.0000000000000p-23) {
      if (*(_BYTE*)(a1 + 96) == 1) {
        *(_BYTE*)(a1 + 96) = 0;
      }
      *(_BYTE*)(a1 + 25) = 0;
    }
  }
}

__int64 game_zview_d33d70(__int64 a1, float32x4_t* a2, float* a3, __int64 a4,
                          float a5)
{
  __int64 v5;
  float32x4_t* v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  float v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v21;
  float32x4_t v22;
  double v23;
  double v24;
  double v25;
  unsigned int v26;
  float32x4_t v27;
  unsigned __int64 v28;
  unsigned int v29;
  float32x4_t v30;
  int8x16_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  int v46;
  __int128 v47;
  __int128 v48;
  unsigned __int32 v49;
  int v50;
  __int64 v51;
  int8x16_t v52;
  float32x4_t v53;
  struct {
    float32x4_t v54;
    char gap48_[8];
    __int64 v55;
  } v54_;

  v5 = *(_QWORD*)(a1 + 8);
  v6 = a2 + 1;
  v7 = a2[1];
  v8 = *(float32x4_t*)(*(_QWORD*)(v5 + 16) + 560LL);
  v9 = vsubq_f32(v8, v7);
  if (fabsf(LANES128(v9).n128_f32[1]) > *(float*)(v5 + 544)) {
    return 0;
  }
  v10 = vmulq_f32(v9, v9);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
          .n64_u64[0];
  v11 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]))))
            .n64_f32[0] -
        (float)(a5 + *(float*)(v5 + 528));
  if (v11 > *a3) {
    return 0;
  }
  v12 = vsubq_f32(v7, v8);
  v13 = vmulq_f32(v12, v12);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
  v14 = vrsqrteq_f32(v13);
  v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v13, v14)));
  v16 = vbicq_s8(
      vmulq_f32(v12, vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15)))),
      vceqzq_f32(v13));
  LANES128(v16).n128_u32[1] = 0;
  v17 = vmulq_f32(v16, v16);
  LANES128(v17).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v17).n128_f32[0] == 0x0.0p+0f) {
    return 0;
  }
  LANES128(v17).n128_u64[1] = LANES128(v17).n128_u64[0];
  v21 = vrsqrteq_f32(v17);
  v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v17, v21)));
  v52 = vbicq_s8(
      vmulq_f32(v16, vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v17, v22)))),
      vceqzq_f32(v17));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0) {
    v54_.v55 = a1;
    v50 = __cxa_guard_acquire(&GameData_21a61b0);
    a1 = v54_.v55;
    if (v50 != 0) {
      v51 = *((_QWORD*)GameData_212c560 + 1);
      *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
      *((_QWORD*)&GameData_21a61a0 + 1) = v51;
      __cxa_guard_release(&GameData_21a61b0);
      a1 = v54_.v55;
    }
  }
  v23 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) + 488LL) +
                  36LL) *
        0x1.0000000000000p-1;
  v24 = cos(v23);
  v25 = sin(v23);
  *(float*)&v26 = v24 + PSEUDO_UNFUSED(v25 * 0x0.0p+0);
  LANES128(v27).n128_u64[0] = GameData_21a61a0;
  *(float*)&v28 = PSEUDO_UNFUSED(v25 * -0x0.0p+0) + v24 * 0x0.0p+0;
  *(float*)&v29 = v25 + PSEUDO_UNFUSED(v24 * 0x0.0p+0);
  LANES128(v30).n128_u64[0] = __PAIR64__(v29, v28);
  LANES128(v30).n128_u64[1] = __PAIR64__(v26, v28);
  v31 = vmulq_f32(v30, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[1] = LANES128(v30).n128_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v33).n128_u64[0];
  *(int32x2_t*)&LANES128(v34).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v31).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v32).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v35 = vmlaq_f32(vmulq_f32(v30, v31), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v27, v32));
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v27).n128_u64[0];
  LANES128(v27).n128_u64[1] = GameData_21a61a0;
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v36).n128_i8[8] =
      vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v37 = vmlsq_f32(vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v27, v34)),
                  v36, v33);
  LANES128(v36).n128_u64[0] = __PAIR64__(v29, v28);
  HIDWORD(v28) = v26;
  LANES128(v38).n128_u64[0] = __PAIR64__(v29, v28);
  LANES128(v33).n128_u64[0] = __PAIR64__(v29, v28);
  LANES128(v38).n128_u64[1] = v28;
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v40).n128_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v40).n128_u64[1] = LANES128(v38).n128_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v36).n128_u64[0];
  *(int32x2_t*)&LANES128(v42).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v37).n128_u64[0]), 1);
  v43 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v39, v37), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v33, v41)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v38, v42));
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v44 = vmlsq_f32(v43, v38, v40);
  LANES128(v37).n128_u64[0] = LANES128(v52).n128_u32[0];
  LANES128(v37).n128_u64[1] = LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u32[0];
  v54_.v54 = v37;
  LANES128(v37).n128_u32[0] = LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u32[0];
  LANES128(v44).n128_u32[1] = 0;
  LANES128(v44).n128_u64[1] = LANES128(v37).n128_u32[0];
  v53 = v44;
  if (fabsf(math_Vec3_Angle(&v54_.v54, &v53) * 0x1.ca5dc00000000p+5f) >
      0x1.6800000000000p+6f) {
    return 0;
  }
  *a3 = v11;
  v46 = *(unsigned __int8*)(a4 + 64);
  *(_QWORD*)a4 = LANES128(*(a2)).n128_u64[0];
  if (v46 == 1) {
    *(_DWORD*)(a4 + 16) = LANES128(a2[1]).n128_u32[0];
    *(_DWORD*)(a4 + 20) = LANES128(a2[1]).n128_u32[1];
    v47 = *(_OWORD*)(a4 + 16);
    *((_QWORD*)&v47 + 1) = LANES128(a2[1]).n128_u32[2];
    *(_OWORD*)(a4 + 16) = v47;
    *(_DWORD*)(a4 + 32) = LANES128(a2[2]).n128_u32[0];
    *(_DWORD*)(a4 + 36) = LANES128(a2[2]).n128_u32[1];
    v48 = *(_OWORD*)(a4 + 32);
    *((_QWORD*)&v48 + 1) = LANES128(a2[2]).n128_u32[2];
    *(_OWORD*)(a4 + 32) = v48;
    v49 = LANES128(a2[3]).n128_u32[0];
  }
  else {
    *(_QWORD*)(a4 + 24) = LANES128(*(v6)).n128_u64[1];
    *(_QWORD*)(a4 + 16) = LANES128(*(v6)).n128_u64[0];
    *(_QWORD*)(a4 + 40) = LANES128(a2[2]).n128_u64[1];
    *(_QWORD*)(a4 + 32) = LANES128(a2[2]).n128_u64[0];
    v49 = LANES128(a2[3]).n128_u32[0];
    *(_BYTE*)(a4 + 64) = 1;
  }
  *(_DWORD*)(a4 + 48) = v49;
  return 1;
}

__int64 game_zview_d470a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;

  v2 = *GameData_212ed08[0];
  if (GameRoutine_d26f50(*GameData_212ed08[0], 2)) {
    v3 = *(_QWORD*)(v2 + 88);
    v4 = *(_QWORD*)(v2 + 96);
    if (v3 != v4) {
      v5 = *(_QWORD*)(v2 + 88);
      while (*(float*)(v5 + 4) >=
             (float)(*(float*)(v2 + 8) + -0x1.6666660000000p-2f)) {
        if (*(_BYTE*)(v5 + 9) == 1) {
          *(_QWORD*)(v2 + 96) = v3;
          v7 = *(__int64**)(a1 + 880);
          v8 = *(_QWORD*)(a1 + 888);
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                      memory_order_relaxed);
            v9 = *v7;
            if (v9 == 0 || GameData_220b6f0 == 0) {
              goto LABEL_24;
            }
            v10 = *(_QWORD**)(GameData_220b6f0 + 8);
            v11 = *(_QWORD**)(GameData_220b6f0 + 16);
            if (v10 != v11) {
              while (*v10 != v9) {
                v10 += 2;
                if (v10 == v11) {
                  goto LABEL_24;
                }
              }
            }
            if (v10 != v11) {
              v15 = COERCE_UNSIGNED_INT(
                        (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v9 + 16) +
                                                     488LL) +
                                          32LL) *
                                0x1.ca5dc20000000p+5f) +
                        0x1.6800000000000p+7f) |
                    0x100000000LL;
            }
            else {
            LABEL_24:
              v15 = 0x100000000LL;
            }
            *(float*)&v16 = GameRoutine_d1fae0(GameData_21f3cb0);
            GameRoutine_d23780(a1, v15, v16 | 0x100000000LL, 0,
                               0x1.6666660000000p-2f);
            if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
              std___1___shared_weak_count___release_weak(v8);
            }
          }
          else {
            v12 = *v7;
            if (v12 == 0 || GameData_220b6f0 == 0) {
              goto LABEL_29;
            }
            v13 = *(_QWORD**)(GameData_220b6f0 + 8);
            v14 = *(_QWORD**)(GameData_220b6f0 + 16);
            if (v13 != v14) {
              while (*v13 != v12) {
                v13 += 2;
                if (v13 == v14) {
                  goto LABEL_29;
                }
              }
            }
            if (v13 != v14) {
              v17 = COERCE_UNSIGNED_INT(
                        (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v12 + 16) +
                                                     488LL) +
                                          32LL) *
                                0x1.ca5dc20000000p+5f) +
                        0x1.6800000000000p+7f) |
                    0x100000000LL;
            }
            else {
            LABEL_29:
              v17 = 0x100000000LL;
            }
            *(float*)&v18 = GameRoutine_d1fae0(GameData_21f3cb0);
            GameRoutine_d23780(a1, v17, v18 | 0x100000000LL, 0,
                               0x1.6666660000000p-2f);
          }
          return 1;
        }
        v5 += 12;
        if (v5 == v4) {
          return 0;
        }
      }
    }
  }
  return 0;
}

__int64 game_zview_d4b5c0(__int64 result, float32x4_t** a2)
{
  float32x4_t* v2;
  __int64 v3;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  __int64* v9;
  __int64* v10;
  float v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  int8x16_t v15;
  float32x2_t v16;
  __int64 v17;
  __int64 v18;
  int8x16_t** v19;
  int8x16_t** v20;
  float32x4_t* v21;
  int8x16_t* v22;
  int v24;
  unsigned __int64 v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float v31;
  float32x2_t v32;
  int8x16_t v33;
  float v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  bool v38;
  float32x2_t v39;
  float v40;
  int8x16_t v41;
  float v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  int8x16_t v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float32x4_t v51;
  int8x16_t v52;
  int8x16_t v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float32x4_t v59;
  float v60;
  int8x16_t v61;
  int8x16_t* v62;
  float32x4_t* v63;
  char v64;
  int8x16_t* v65;
  int8x16_t* v66;
  char* v67;
  char* v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  float32x4_t* v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  int8x16_t* v76;
  float32x4_t* v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int8x16_t* v96;
  float32x4_t* v97;
  __int64 v98;
  __int64 v99;
  char* v100;
  unsigned __int64 v101;
  float v102;
  float32x4_t v103;
  float32x4_t v104;
  struct {
    float32x4_t* v105;
    float32x4_t* v106;
  } v105_;
  struct {
    int8x16_t* v107;
    __int64 v108;
  } v107_;
  struct {
    float32x4_t* v109;
    float32x4_t* v110;
  } v109_;
  struct {
    int8x16_t* v111;
    __int64 v112;
  } v111_;
  _QWORD v113[2];
  int8x16_t* v114[3];

  v2 = *a2;
  if (*a2 != nullptr && LANES128(v2[7]).n128_u32[1] == 0) {
    v3 = LANES128(v2[10]).n128_i64[1];
    if (v3 != 0) {
      v5 = *(float32x4_t*)(*(_QWORD*)(v3 + 8) + 304LL);
      v6 = vaddq_f32(v5, v2[5]);
      v7 = vaddq_f32(v5, v2[6]);
      LANES128(v6).n128_u32[3] = 0;
      LANES128(v7).n128_u32[3] = 0;
      v103 = v6;
    }
    else {
      v7 = (__typeof__(v7)){0};
      v103 = (__typeof__(v103)){0};
    }
    if (LANES128(v2[2]).n128_u8[0] == 1) {
      v8 = v2[1];
      LANES128(v8).n128_u32[3] = 0;
      v103 = v8;
    }
    if (LANES128(v2[4]).n128_u8[0] == 1) {
      v7 = v2[3];
      LANES128(v7).n128_u32[3] = 0;
    }
    v9 = *(__int64**)(result + 16);
    v10 = *(__int64**)(result + 24);
    if (v9 != v10) {
      v11 = LANES128(v2[7]).n128_f32[0];
      v12 = vsubq_f32(v103, v7);
      v13 = vsubq_f32(v7, v103);
      v14 = vmulq_f32(v12, v12);
      v15 = vmulq_f32(v13, v13);
      LANES128(v14).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u64[0];
      LANES64(v16).n64_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
              .n64_u64[0];
      LODWORD(v102) =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u32[0];
      while (1) {
        v17 = *v9;
        v18 = *(_QWORD*)(*v9 + 8);
        if (*(_BYTE*)(v18 + 288) == 1) {
          while (1) {
            v18 = *(_QWORD*)(v18 + 736);
            if (v18 == 0) {
              break;
            }
            if ((*(_BYTE*)(v18 + 288) & 1) == 0) {
              goto LABEL_13;
            }
          }
          if (*(_BYTE*)(v17 + 16) == 1 &&
              v17 != LANES128((*a2)[10]).n128_u64[1]) {
            break;
          }
        }
      LABEL_13:
        if (++v9 == v10) {
          return result;
        }
      }
      v20 = *(int8x16_t***)(v17 + 24);
      v19 = *(int8x16_t***)(v17 + 32);
      while (1) {
        if (v20 == v19) {
          goto LABEL_13;
        }
        v21 = *a2;
        v22 = *v20;
        if (*a2 != nullptr && v22 != nullptr &&
            LANES128(v21[14]).n128_u8[8] == 1 &&
            (LANES128(v21[14]).n128_u8[9] & 1) == 0 &&
            LANES128(v22[14]).n128_u8[8] == 1 &&
            (LANES128(v22[14]).n128_u8[9] & 1) == 0 &&
            LANES128(v21[7]).n128_u32[1] == 0 &&
            LANES128(v22[7]).n128_u32[1] == 1) {
          v24 = LANES128(v21[7]).n128_i32[2];
          if (v24 == 0 || v24 != LANES128(v22[7]).n128_u32[2]) {
            break;
          }
        }
      LABEL_21:
        v20 += 2;
      }
      v25 = LANES128(v22[10]).n128_u64[1];
      if (v25 != 0) {
        v26 = *(float32x4_t*)(*(_QWORD*)(v25 + 8) + 304LL);
        v27 = vaddq_f32(v26, v22[5]);
        v28 = vaddq_f32(v26, v22[6]);
        LANES128(v27).n128_u32[3] = 0;
        LANES128(v28).n128_u32[3] = 0;
      }
      else {
        v27 = (__typeof__(v27)){0};
        v28 = (__typeof__(v28)){0};
      }
      if (LANES128(v22[2]).n128_u8[0] == 1) {
        v27 = v22[1];
        LANES128(v27).n128_u32[3] = 0;
      }
      if (LANES128(v22[4]).n128_u8[0] == 1) {
        v28 = v22[3];
        LANES128(v28).n128_u32[3] = 0;
      }
      if (v102 >= 0x1.47ae140000000p-7f) {
        v36 = vsubq_f32(v27, v28);
        v37 = vmulq_f32(v36, v36);
        LANES128(v37).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v37, v37, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
                .n64_u64[0];
        v38 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])))
                  .n64_f32[0] < 0x1.47ae140000000p-7f;
        LANES64(v39).n64_u64[0] = LANES64_OF(vpadd_f32(v16, v16)).n64_u64[0];
        if (v38) {
          v40 = 0x0.0p+0f;
          if (LANES64(v39).n64_f32[0] >= 0x1.a36e2e0000000p-14f) {
            v41 = vmulq_f32(v13, vsubq_f32(v27, v103));
            LANES128(v41).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v41, v41, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
                    .n64_u64[0];
            LODWORD(v40) =
                LANES64_OF(
                    vdiv_f32(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])),
                        v39))
                    .n64_u32[0];
          }
          if (v40 <= 0x1.0000000000000p+0f) {
            v42 = v40;
          }
          else {
            v42 = 0x1.0000000000000p+0f;
          }
          if (v40 < 0x0.0p+0f) {
            v42 = 0x0.0p+0f;
          }
          v43 = vaddq_f32(v103, vmulq_n_f32(v13, v42));
        }
        else {
          v44 = vsubq_f32(v28, v27);
          v45 = vmulq_f32(v44, v44);
          LANES128(v45).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                  .n64_u64[0];
          v46 = vmulq_f32(v13, v44);
          v47 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                  .n64_f32[0];
          LANES128(v46).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v46, v46, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0])))
                  .n64_u64[0];
          v48 =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0])))
                  .n64_f32[0];
          v49 = (float)(PSEUDO_UNFUSED((float)-v48 * v48)) +
                (float)(LANES64(v39).n64_f32[0] * v47);
          if (fabsf(v49) >= 0x1.a36e2e0000000p-14f) {
            v50 = 0x1.0000000000000p+0f / v49;
            v51 = vsubq_f32(v27, v103);
            v52 = vmulq_f32(v13, v51);
            v53 = vmulq_f32(v51, v44);
            LANES128(v52).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v53).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v53, v53, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
                    .n64_u64[0];
            LANES128(v52).n128_f32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
                    .n64_f32[0];
            LANES128(v53).n128_f32[0] =
                LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0])))
                    .n64_f32[0];
            v54 = v50 * (float)((float)(v47 * LANES128(v52).n128_f32[0]) -
                                (float)(PSEUDO_UNFUSED(
                                    LANES128(v53).n128_f32[0] * v48)));
            v55 =
                v50 * (float)((float)(v48 * LANES128(v52).n128_f32[0]) -
                              (float)(PSEUDO_UNFUSED(LANES128(v53).n128_f32[0] *
                                                     LANES64(v39).n64_f32[0])));
            if (v54 <= 0x1.0000000000000p+0f) {
              v56 = v54;
            }
            else {
              v56 = 0x1.0000000000000p+0f;
            }
            if (v54 >= 0x0.0p+0f) {
              v57 = v56;
            }
            else {
              v57 = 0x0.0p+0f;
            }
            if (v55 <= 0x1.0000000000000p+0f) {
              v58 = v55;
            }
            else {
              v58 = 0x1.0000000000000p+0f;
            }
            v59 = vmulq_n_f32(v13, v57);
            if (v55 >= 0x0.0p+0f) {
              v60 = v58;
            }
            else {
              v60 = 0x0.0p+0f;
            }
            v35 = vsubq_f32(vaddq_f32(v103, v59),
                            vaddq_f32(v27, vmulq_n_f32(v44, v60)));
            goto LABEL_77;
          }
          v43 = v103;
        }
        v35 = vsubq_f32(v43, v27);
      }
      else {
        v29 = vsubq_f32(v28, v27);
        v30 = vmulq_f32(v29, v29);
        LANES128(v30).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                .n64_u64[0];
        v31 = 0x0.0p+0f;
        LANES64(v32).n64_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                .n64_u64[0];
        if (LANES64(v32).n64_f32[0] >= 0x1.a36e2e0000000p-14f) {
          v33 = vmulq_f32(vsubq_f32(v103, v27), v29);
          LANES128(v33).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
                  .n64_u64[0];
          LODWORD(v31) =
              LANES64_OF(
                  vdiv_f32(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])),
                      v32))
                  .n64_u32[0];
        }
        if (v31 <= 0x1.0000000000000p+0f) {
          v34 = v31;
        }
        else {
          v34 = 0x1.0000000000000p+0f;
        }
        if (v31 < 0x0.0p+0f) {
          v34 = 0x0.0p+0f;
        }
        v35 = vsubq_f32(vaddq_f32(v27, vmulq_n_f32(v29, v34)), v103);
      }
    LABEL_77:
      v61 = vmulq_f32(v35, v35);
      LANES128(v61).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
              .n64_f32[0] <=
          (float)((float)(v11 + LANES128(v22[7]).n128_f32[0]) *
                  (float)(v11 + LANES128(v22[7]).n128_f32[0]))) {
        v62 = v20[1];
        v114[0] = *v20;
        v114[1] = v62;
        if (v62 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)&v62[1], 1u,
                                    memory_order_relaxed);
          v21 = *a2;
        }
        v63 = a2[1];
        v104 = v13;
        v113[0] = v21;
        v113[1] = v63;
        if (v63 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)&v63[1], 1u,
                                    memory_order_relaxed);
          v64 = game_zview_d4bda0(v114, v113);
          result = std___1___shared_weak_count___release_weak(v63);
        }
        else {
          result = game_zview_d4bda0(v114, v113);
          v64 = result;
        }
        if (v62 != nullptr) {
          result = std___1___shared_weak_count___release_weak(v62);
        }
        v13 = v104;
        if ((v64 & 1) != 0) {
          v65 = *v20;
          v66 = v20[1];
          v68 = (char*)LANES128((*a2)[13]).n128_u64[0];
          v67 = (char*)LANES128((*a2)[13]).n128_u64[1];
          if (v66 != nullptr) {
            atomic_fetch_add_explicit(
                (atomic_ullong* volatile)&LANES128(*(v66)).n128_i8[8], 1u,
                memory_order_relaxed);
          }
          if (v68 != v67) {
            v69 = LANES128(v65[10]).n128_u64[0];
            v70 = v67 - v68 - 8;
            if ((~(_BYTE)v70 & 0x18) != 0) {
              v71 = ((unsigned __int8)((unsigned int)v70 >> 3) + 1) & 3;
              while (*(_QWORD*)v68 != v69) {
                v68 += 8;
                if (--v71 == 0) {
                  goto LABEL_93;
                }
              }
            }
            else {
            LABEL_93:
              if (v70 >= 0x18) {
                v68 += 16;
                while (1) {
                  if (*((_QWORD*)v68 - 2) == v69) {
                    v68 -= 16;
                    goto LABEL_95;
                  }
                  if (*((_QWORD*)v68 - 1) == v69) {
                    v68 -= 8;
                    goto LABEL_95;
                  }
                  if (*(_QWORD*)v68 == v69) {
                    goto LABEL_95;
                  }
                  if (*((_QWORD*)v68 + 1) == v69) {
                    break;
                  }
                  v82 = v68 + 16;
                  v68 += 32;
                  if (v82 == v67) {
                    goto LABEL_94;
                  }
                }
                v68 += 8;
              }
              else {
              LABEL_94:
                v68 = v67;
              }
            }
          }
        LABEL_95:
          if (v66 != nullptr &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)&LANES128(*(v66)).n128_i8[8],
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(int8x16_t*))(LANES128(*(v66)).n128_u64[0] + 16))(v66);
            result = std___1___shared_weak_count___release_weak(v66);
            v13 = v104;
          }
          v72 = *a2;
          v73 = (char*)LANES128((*a2)[13]).n128_u64[1];
          if (v68 == v73) {
            v74 = LANES128(v72[15]).n128_i64[0];
            v75 = LANES128(v72[15]).n128_i64[1];
            if (v74 != v75) {
              do {
                if (*(_QWORD*)(v74 + 32) != 0) {
                  v76 = v20[1];
                  v111_.v111 = *v20;
                  v111_.v112 = (__int64)v76;
                  if (v76 != nullptr) {
                    atomic_fetch_add_explicit((atomic_ullong* volatile)&v76[1],
                                              1u, memory_order_relaxed);
                  }
                  v77 = a2[1];
                  v109_.v109 = *a2;
                  v109_.v110 = v77;
                  if (v77 != nullptr) {
                    atomic_fetch_add_explicit((atomic_ullong* volatile)&v77[1],
                                              1u, memory_order_relaxed);
                  }
                  v78 = *(_QWORD*)(v74 + 32);
                  if (v78 == 0) {
                  LABEL_154:
                    GameRoutine_60a310();
                  }
                  (*(void (**)(__int64, int8x16_t**, float32x4_t**))(
                      *(_QWORD*)v78 + 48LL))(v78, &v111_.v111, &v109_.v109);
                  if (v109_.v110 != nullptr) {
                    std___1___shared_weak_count___release_weak(v109_.v110);
                  }
                  v13 = v104;
                  result = v111_.v112;
                  if (v111_.v112 != 0) {
                    result =
                        std___1___shared_weak_count___release_weak(v111_.v112);
                    v13 = v104;
                  }
                }
                v74 += 48;
              } while (v74 != v75);
              v72 = *a2;
              v73 = (char*)LANES128((*a2)[13]).n128_u64[1];
            }
            v79 = LANES128((*v20)[10]).n128_u64[0];
            v80 = LANES128(v72[14]).n128_u64[0];
            if ((unsigned __int64)v73 >= v80) {
              v83 = LANES128(v72[13]).n128_i64[0];
              v84 = &v73[-v83];
              v85 = (__int64)&v73[-v83] >> 3;
              v86 = v85 + 1;
              if ((unsigned __int64)(v85 + 1) >> 61 != 0) {
                GameRoutine_65c760();
              }
              v87 = v80 - v83;
              if (v87 >> 2 > v86) {
                v86 = v87 >> 2;
              }
              if ((unsigned __int64)v87 >= 0x7FFFFFFFFFFFFFF8LL) {
                v88 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v88 = v86;
              }
              if (v88 != 0) {
                v99 = (__int64)&v73[-v83] >> 3;
                v100 = &v73[-v83];
                if (v88 >> 61 != 0) {
                  GameRoutine_60a210();
                }
                v89 = LANES128((*v20)[10]).n128_u64[0];
                v90 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v88, 16, 0);
                v85 = v99;
                v84 = v100;
                v79 = v89;
              }
              else {
                v90 = 0;
              }
              v91 = v90 + 8 * v88;
              v92 = (__int64)&v84[v90 + -8 * v85];
              v101 = v91;
              *(_QWORD*)&v84[v90] = v79;
              v81 = (__int64)&v84[v90 + 8];
              result = memcpy(v92, v83, v84);
              LANES128(v72[13]).n128_u64[0] = v92;
              LANES128(v72[13]).n128_u64[1] = v81;
              LANES128(v72[14]).n128_u64[0] = v101;
              if (v83 != 0) {
                v93 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v93 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v93);
              }
              v13 = v104;
            }
            else {
              *(_QWORD*)v73 = v79;
              v81 = (__int64)(v73 + 8);
            }
            LANES128(v72[13]).n128_u64[1] = v81;
            v72 = *a2;
          }
          v94 = LANES128(v72[16]).n128_i64[1];
          v95 = LANES128(v72[17]).n128_i64[0];
          if (v94 != v95) {
            while (1) {
              if (*(_QWORD*)(v94 + 32) != 0) {
                v96 = v20[1];
                v107_.v107 = *v20;
                v107_.v108 = (__int64)v96;
                if (v96 != nullptr) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)&v96[1],
                                            1u, memory_order_relaxed);
                }
                v97 = a2[1];
                v105_.v105 = *a2;
                v105_.v106 = v97;
                if (v97 != nullptr) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)&v97[1],
                                            1u, memory_order_relaxed);
                }
                v98 = *(_QWORD*)(v94 + 32);
                if (v98 == 0) {
                  goto LABEL_154;
                }
                (*(void (**)(__int64, int8x16_t**, float32x4_t**))(
                    *(_QWORD*)v98 + 48LL))(v98, &v107_.v107, &v105_.v105);
                if (v105_.v106 != nullptr) {
                  std___1___shared_weak_count___release_weak(v105_.v106);
                }
                v13 = v104;
                result = v107_.v108;
                if (v107_.v108 != 0) {
                  result =
                      std___1___shared_weak_count___release_weak(v107_.v108);
                  v13 = v104;
                }
              }
              v94 += 48;
              if (v94 == v95) {
                goto LABEL_21;
              }
            }
          }
        }
      }
      goto LABEL_21;
    }
  }
  return result;
}

__int64 game_zview_d4bda0(int8x16_t** a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  int8x16_t* v5;
  __int64 v6;
  int8x16_t** v7;
  __int64 v9;
  int8x16_t* v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  _QWORD* v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  int v18;
  int v19;
  __int64* v21;
  __int64* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  float32x4_t v27;
  int8x16_t v28;
  int8x16_t v29;
  int8x16_t v30;
  unsigned int v31;
  int8x16_t v32;
  int8x16_t v33;
  unsigned int v34;
  float32x4_t v35;
  float32x4_t v36;
  __int64 v37;
  __int64 v38;
  int8x16_t* v39;
  unsigned __int8* v40;
  unsigned __int8* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int8* v44;
  int v45;
  int v46;
  __int64* v48;
  __int64* v49;
  int v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  float32x4_t v54;
  int8x16_t v55;
  int8x16_t v56;
  int8x16_t v57;
  unsigned int v58;
  int8x16_t v59;
  int8x16_t v60;
  unsigned int v61;
  float32x4_t v62;
  float32x4_t v63;
  __int64 v64;
  int16x4_t v65;
  char v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  float32x4_t v75;
  float32x4_t v76;
  struct {
    _BYTE v77[80];
    char v78;
  } v77_;

  v5 = a1[1];
  if (v5 == nullptr) {
    return 0;
  }
  if (LANES128(*(v5)).n128_u64[1] == -1) {
    return 0;
  }
  v6 = a2[1];
  if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
    return 0;
  }
  v7 = a1;
  v9 = std___1___shared_weak_count_lock(v5);
  if (v9 != 0) {
    v10 = *v7;
    if (*v7 != nullptr) {
      v11 = (unsigned __int8*)LANES128(v10[11]).n128_u64[1];
      v12 = (unsigned __int8*)LANES128(v10[12]).n128_u64[0];
      if (v11 == v12) {
        v13 = a2;
      }
      else {
        v13 = a2;
        while (1) {
          v15 = *v11;
          v16 = *((_QWORD*)v11 + 1);
          if ((v15 & 1) == 0) {
            v16 = v15 >> 1;
          }
          if (v16 == 6) {
            v17 = (v15 & 1) != 0 ? *((unsigned __int8**)v11 + 2) : v11 + 1;
            v18 = *(_DWORD*)v17;
            v19 = *((unsigned __int16*)v17 + 2);
            if (*(_DWORD*)"MakeId" == v18 && *(unsigned __int16*)"Id" == v19) {
              break;
            }
          }
          v11 += 160;
          if (v11 == v12) {
            goto LABEL_33;
          }
        }
      }
      if (v11 == v12 || *((_DWORD*)v11 + 36) != 3 ||
          (v21 = *(__int64**)(*GameData_212eba8[0] + 8),
           v22 = *(__int64**)(*GameData_212eba8[0] + 16), v21 == v22)) {
      LABEL_33:
        v26 = LANES128(v10[10]).n128_u64[1];
        if (v26 != 0) {
          v27 = *(float32x4_t*)(*(_QWORD*)(v26 + 8) + 304LL);
          v28 = vaddq_f32(v27, v10[5]);
          v29 = vaddq_f32(v27, v10[6]);
          LANES128(v28).n128_u32[3] = 0;
          LANES128(v29).n128_u32[3] = 0;
        }
        else {
          v29 = (__typeof__(v29)){0};
          v28 = (__typeof__(v28)){0};
        }
        v30 = v10[1];
        LANES128(v30).n128_u32[3] = 0;
        if (LANES128(v10[2]).n128_u8[0] != 0) {
          v31 = -1;
        }
        else {
          v31 = 0;
        }
        v32 = vbslq_s8(vdupq_n_s32(v31), v30, v28);
        v33 = v10[3];
        if (LANES128(v10[4]).n128_u8[0] != 0) {
          v34 = -1;
        }
        else {
          v34 = 0;
        }
        LANES128(v33).n128_u32[3] = 0;
        v35 = vaddq_f32(v32, vbslq_s8(vdupq_n_s32(v34), v33, v29));
        LANES128(v36).n128_u64[0] = 0x3F0000003F000000LL;
        LANES128(v36).n128_u64[1] = 0x3F0000003F000000LL;
        v76 = vmulq_f32(v35, v36);
      }
      else {
        v23 = *((_DWORD*)v11 + 12);
        while (1) {
          v25 = *v21;
          v21 += 2;
          v24 = v25;
          if (*(_DWORD*)(v25 + 184) == v23) {
            break;
          }
          if (v21 == v22) {
            goto LABEL_33;
          }
        }
        LODWORD(v67) = 0;
        *((float*)&v67 + 1) = *(float*)(v24 + 544) * 0x1.99999a0000000p-1f;
        v76 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v24 + 16) + 560LL),
                        COERCE_AS(float32x4_t, v67));
      }
      goto LABEL_43;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v72 = v9;
    v73 = __cxa_guard_acquire(&GameData_21a6130);
    v9 = v72;
    if (v73 != 0) {
      v74 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v74;
      __cxa_guard_release(&GameData_21a6130);
      v9 = v72;
    }
  }
  v76 = COERCE_AS(float32x4_t, GameData_21a6120);
  v13 = a2;
  if (v9 != 0) {
  LABEL_43:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v37 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v37);
      v13 = a2;
    }
  }
  v38 = v13[1];
  if (v38 != 0 && (v38 = std___1___shared_weak_count_lock(v38)) != 0 &&
      (v39 = (int8x16_t*)*a2, *a2 != 0)) {
    v40 = (unsigned __int8*)LANES128(v39[11]).n128_u64[1];
    v41 = (unsigned __int8*)LANES128(v39[12]).n128_u64[0];
    if (v40 != v41) {
      while (1) {
        v42 = *v40;
        v43 = *((_QWORD*)v40 + 1);
        if ((v42 & 1) == 0) {
          v43 = v42 >> 1;
        }
        if (v43 == 6) {
          v44 = (v42 & 1) != 0 ? *((unsigned __int8**)v40 + 2) : v40 + 1;
          v45 = *(_DWORD*)v44;
          v46 = *((unsigned __int16*)v44 + 2);
          if (*(_DWORD*)"MakeId" == v45 && *(unsigned __int16*)"Id" == v46) {
            break;
          }
        }
        v40 += 160;
        if (v40 == v41) {
          goto LABEL_68;
        }
      }
    }
    if (v40 == v41 || *((_DWORD*)v40 + 36) != 3 ||
        (v48 = *(__int64**)(*GameData_212eba8[0] + 8),
         v49 = *(__int64**)(*GameData_212eba8[0] + 16), v48 == v49)) {
    LABEL_68:
      v53 = LANES128(v39[10]).n128_u64[1];
      if (v53 != 0) {
        v54 = *(float32x4_t*)(*(_QWORD*)(v53 + 8) + 304LL);
        v55 = vaddq_f32(v54, v39[5]);
        v56 = vaddq_f32(v54, v39[6]);
        LANES128(v55).n128_u32[3] = 0;
        LANES128(v56).n128_u32[3] = 0;
      }
      else {
        v56 = (__typeof__(v56)){0};
        v55 = (__typeof__(v55)){0};
      }
      v57 = v39[1];
      LANES128(v57).n128_u32[3] = 0;
      if (LANES128(v39[2]).n128_u8[0] != 0) {
        v58 = -1;
      }
      else {
        v58 = 0;
      }
      v59 = vbslq_s8(vdupq_n_s32(v58), v57, v55);
      v60 = v39[3];
      if (LANES128(v39[4]).n128_u8[0] != 0) {
        v61 = -1;
      }
      else {
        v61 = 0;
      }
      LANES128(v60).n128_u32[3] = 0;
      v62 = vaddq_f32(v59, vbslq_s8(vdupq_n_s32(v61), v60, v56));
      LANES128(v63).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v63).n128_u64[1] = 0x3F0000003F000000LL;
      v75 = vmulq_f32(v62, v63);
    }
    else {
      v50 = *((_DWORD*)v40 + 12);
      while (1) {
        v52 = *v48;
        v48 += 2;
        v51 = v52;
        if (*(_DWORD*)(v52 + 184) == v50) {
          break;
        }
        if (v48 == v49) {
          goto LABEL_68;
        }
      }
      LODWORD(v68) = 0;
      *((float*)&v68 + 1) = *(float*)(v51 + 544) * 0x1.99999a0000000p-1f;
      v75 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v51 + 16) + 560LL),
                      COERCE_AS(float32x4_t, v68));
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v69 = v38;
      v70 = __cxa_guard_acquire(&GameData_21a6130);
      v38 = v69;
      if (v70 != 0) {
        v71 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v71;
        __cxa_guard_release(&GameData_21a6130);
        v38 = v69;
      }
    }
    v75 = COERCE_AS(float32x4_t, GameData_21a6120);
    if (v38 == 0) {
      goto LABEL_83;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v64 = v38;
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v64);
  }
LABEL_83:
  LANES64(v65).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(v76, v75))).n64_u64[0];
  if ((LANES64(v65).n64_u8[0] & 1) != 0 && (LANES64(v65).n64_u8[2] & 1) != 0 &&
          (LANES64(v65).n64_u8[4] & 1) != 0 ||
      (X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v77_.v77),
                                                &v76, &v75, 0x100000001LL)),
       v77_.v78 != 1)) {
    v66 = 1;
  }
  else {
    collision_670c60((void*)((__int64)v77_.v77), &v75, &v76, 0x100000001LL);
    v66 = v77_.v78 ^ 1;
  }
  return v66 & 1;
}

__attribute__((swiftcall)) void game_zview_d4c2c0(PSEUDO_X8 x8_, __int64 a1,
                                                  float32x4_t* a2,
                                                  float32x4_t* a3, float a5)
{
  char** a4 = (char**)PSEUDO_X8_VALUE(x8_);
  __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  __int64* v13;
  __int64* v14;
  float32x4_t v15;
  char* v16;
  char* v17;
  float32x4_t v18;
  __int64 v19;
  __int64 v20;
  int8x16_t** v21;
  int8x16_t** v22;
  int8x16_t* v23;
  unsigned __int64 v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float v33;
  float32x2_t v34;
  int8x16_t v35;
  float v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  int8x16_t v41;
  float v42;
  float32x2_t v43;
  int8x16_t v44;
  float v45;
  int8x16_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float v49;
  int8x16_t v50;
  float v51;
  float v52;
  float v53;
  float32x4_t v54;
  float v55;
  int8x16_t v56;
  int8x16_t v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  int8x16_t v63;
  float v64;
  float32x4_t v65;
  int8x16_t v66;
  int8x16_t v67;
  int8x16_t v68;
  unsigned int v69;
  int32x4_t v70;
  unsigned int v71;
  float32x4_t v72;
  int8x16_t v73;
  float32x4_t v74;
  int8x16_t v75;
  float v76;
  unsigned __int64 v77;
  int8x16_t* v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  char* v84;
  __int64 v85;
  unsigned __int64 v86;
  char* v87;
  __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v93;
  float32x4_t* v94;
  float32x4_t v95;
  float32x4_t* v96;
  int8x16_t** v97;
  __int64* v98;

  nn_os_LockMutex(a1 + 48);
  v11 = *a2;
  v12 = *a3;
  v14 = *(__int64**)(a1 + 16);
  v13 = *(__int64**)(a1 + 24);
  *a4 = nullptr;
  a4[1] = nullptr;
  a4[2] = nullptr;
  v93 = a1;
  v98 = v13;
  if (v14 != v13) {
    LANES128(v15).n128_u64[0] = 0x3F0000003F000000LL;
    LANES128(v15).n128_u64[1] = 0x3F0000003F000000LL;
    v16 = nullptr;
    v17 = nullptr;
    v96 = a2;
    v94 = a3;
    v18 = vmulq_f32(vaddq_f32(v11, v12), v15);
    v95 = v18;
    do {
      v19 = *v14;
      v20 = *(_QWORD*)(*v14 + 8);
      if (*(_BYTE*)(v20 + 288) == 1) {
        while (1) {
          v20 = *(_QWORD*)(v20 + 736);
          if (v20 == 0) {
            break;
          }
          if ((*(_BYTE*)(v20 + 288) & 1) == 0) {
            goto LABEL_4;
          }
        }
        if (*(_BYTE*)(v19 + 16) == 1) {
          v22 = *(int8x16_t***)(v19 + 24);
          v21 = *(int8x16_t***)(v19 + 32);
          if (v22 != v21) {
            v97 = *(int8x16_t***)(v19 + 32);
            do {
              v23 = *v22;
              if (*v22 != nullptr && LANES128(v23[14]).n128_u8[8] == 1 &&
                  (LANES128(v23[14]).n128_u8[9] & 1) == 0) {
                v24 = LANES128(v23[10]).n128_u64[1];
                if (v24 != 0) {
                  v25 = *(float32x4_t*)(*(_QWORD*)(v24 + 8) + 304LL);
                  v26 = vaddq_f32(v25, v23[5]);
                  v27 = vaddq_f32(v25, v23[6]);
                  LANES128(v26).n128_u32[3] = 0;
                  LANES128(v27).n128_u32[3] = 0;
                }
                else {
                  v26 = (__typeof__(v26)){0};
                  v27 = (__typeof__(v27)){0};
                }
                if (LANES128(v23[2]).n128_u8[0] == 1) {
                  v26 = v23[1];
                  LANES128(v26).n128_u32[3] = 0;
                }
                if (LANES128(v23[4]).n128_u8[0] == 1) {
                  v27 = v23[3];
                  LANES128(v27).n128_u32[3] = 0;
                }
                v28 = *a2;
                v29 = vsubq_f32(*a2, *a3);
                v30 = vmulq_f32(v29, v29);
                LANES128(v30).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v30, v30, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                        .n64_u64[0];
                if (LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                        .n64_f32[0] >= 0x1.47ae140000000p-7f) {
                  v38 = vsubq_f32(v26, v27);
                  v39 = vsubq_f32(*a3, v28);
                  v40 = vmulq_f32(v38, v38);
                  LANES128(v40).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v40, v40, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v40).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v40).n128_u64[0])))
                          .n64_f32[0] >= 0x1.47ae140000000p-7f) {
                    v46 = vmulq_f32(v39, v39);
                    v47 = vsubq_f32(v27, v26);
                    LANES128(v46).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v46, v46, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v46).n128_u64[0])))
                            .n64_u64[0];
                    v48 = vmulq_f32(v47, v47);
                    v49 = LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v46).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v46).n128_u64[0])))
                              .n64_f32[0];
                    LANES128(v48).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v48, v48, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v48).n128_u64[0])))
                            .n64_u64[0];
                    v50 = vmulq_f32(v47, v39);
                    v51 = LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v48).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v48).n128_u64[0])))
                              .n64_f32[0];
                    LANES128(v50).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v50, v50, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v50).n128_u64[0])))
                            .n64_u64[0];
                    v52 = LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v50).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v50).n128_u64[0])))
                              .n64_f32[0];
                    v53 = (float)((float)-v52 * v52) + (float)(v49 * v51);
                    if (fabsf(v53) >= 0x1.a36e2e0000000p-14f) {
                      v54 = vsubq_f32(v26, v28);
                      v55 = 1.0f / v53;
                      v56 = vmulq_f32(v54, v39);
                      v57 = vmulq_f32(v47, v54);
                      LANES128(v56).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(
                                  COERCE_AS(float32x2_t,
                                            LANES128_OF(vextq_s8(v56, v56, 8u))
                                                .n128_u64[0]),
                                  COERCE_AS(float32x2_t,
                                            LANES128(v56).n128_u64[0])))
                              .n64_u64[0];
                      LANES128(v57).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(
                                  COERCE_AS(float32x2_t,
                                            LANES128_OF(vextq_s8(v57, v57, 8u))
                                                .n128_u64[0]),
                                  COERCE_AS(float32x2_t,
                                            LANES128(v57).n128_u64[0])))
                              .n64_u64[0];
                      LANES128(v56).n128_f32[0] =
                          LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v56).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v56).n128_u64[0])))
                              .n64_f32[0];
                      LANES128(v57).n128_f32[0] =
                          LANES64_OF(
                              vpadd_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v57).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v57).n128_u64[0])))
                              .n64_f32[0];
                      v58 = v55 *
                            (float)((float)(v51 * LANES128(v56).n128_f32[0]) -
                                    (float)(LANES128(v57).n128_f32[0] * v52));
                      v59 = v55 *
                            (float)((float)(v52 * LANES128(v56).n128_f32[0]) -
                                    (float)(LANES128(v57).n128_f32[0] * v49));
                      if (v58 <= 1.0f) {
                        v60 = v58;
                      }
                      else {
                        v60 = 1.0f;
                      }
                      if (v58 >= 0.0f) {
                        v61 = v60;
                      }
                      else {
                        v61 = 0.0f;
                      }
                      v28 = vaddq_f32(v28, vmulq_n_f32(v39, v61));
                      if (v59 <= 1.0f) {
                        v62 = v59;
                      }
                      else {
                        v62 = 1.0f;
                      }
                      if (v59 < 0.0f) {
                        v62 = 0.0f;
                      }
                      v26 = vaddq_f32(v26, vmulq_n_f32(v47, v62));
                    }
                  }
                  else {
                    v41 = vmulq_f32(v39, v39);
                    LANES128(v41).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v41, v41, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v41).n128_u64[0])))
                            .n64_u64[0];
                    v42 = 0.0f;
                    LANES64(v43).n64_u64[0] =
                        LANES64_OF(
                            vpadd_f32(COERCE_AS(float32x2_t,
                                                LANES128(v41).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v41).n128_u64[0])))
                            .n64_u64[0];
                    if (LANES64(v43).n64_f32[0] >= 0x1.a36e2e0000000p-14f) {
                      v44 = vmulq_f32(vsubq_f32(v26, v28), v39);
                      LANES128(v44).n128_u64[0] =
                          LANES64_OF(
                              vadd_f32(
                                  COERCE_AS(float32x2_t,
                                            LANES128_OF(vextq_s8(v44, v44, 8u))
                                                .n128_u64[0]),
                                  COERCE_AS(float32x2_t,
                                            LANES128(v44).n128_u64[0])))
                              .n64_u64[0];
                      LODWORD(v42) =
                          LANES64_OF(
                              vdiv_f32(
                                  vpadd_f32(
                                      COERCE_AS(float32x2_t,
                                                LANES128(v44).n128_u64[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v44).n128_u64[0])),
                                  v43))
                              .n64_u32[0];
                    }
                    if (v42 <= 1.0f) {
                      v45 = v42;
                    }
                    else {
                      v45 = 1.0f;
                    }
                    if (v42 < 0.0f) {
                      v45 = 0.0f;
                    }
                    v28 = vaddq_f32(v28, vmulq_n_f32(v39, v45));
                  }
                  v37 = vsubq_f32(v28, v26);
                }
                else {
                  v31 = vsubq_f32(v27, v26);
                  v32 = vmulq_f32(v31, v31);
                  LANES128(v32).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v32, v32, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v32).n128_u64[0])))
                          .n64_u64[0];
                  v33 = 0.0f;
                  LANES64(v34).n64_u64[0] =
                      LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v32).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES64(v34).n64_f32[0] >= 0x1.a36e2e0000000p-14f) {
                    v35 = vmulq_f32(v31, vsubq_f32(v28, v26));
                    LANES128(v35).n128_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                COERCE_AS(float32x2_t,
                                          LANES128_OF(vextq_s8(v35, v35, 8u))
                                              .n128_u64[0]),
                                COERCE_AS(float32x2_t,
                                          LANES128(v35).n128_u64[0])))
                            .n64_u64[0];
                    LODWORD(v33) =
                        LANES64_OF(
                            vdiv_f32(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v35).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v35).n128_u64[0])),
                                v34))
                            .n64_u32[0];
                  }
                  if (v33 <= 1.0f) {
                    v36 = v33;
                  }
                  else {
                    v36 = 1.0f;
                  }
                  if (v33 < 0.0f) {
                    v36 = 0.0f;
                  }
                  v37 = vsubq_f32(vaddq_f32(v26, vmulq_n_f32(v31, v36)), v28);
                }
                v63 = vmulq_f32(v37, v37);
                v64 = LANES128(v23[7]).n128_f32[0];
                LANES128(v63).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v63, v63, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
                        .n64_u64[0];
                if (LANES64_OF(
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
                        .n64_f32[0] <=
                    (float)((float)(a5 + v64) * (float)(a5 + v64))) {
                  if (v24 != 0) {
                    v65 = *(float32x4_t*)(*(_QWORD*)(v24 + 8) + 304LL);
                    v66 = vaddq_f32(v65, v23[5]);
                    v67 = vaddq_f32(v65, v23[6]);
                    LANES128(v66).n128_u32[3] = 0;
                    LANES128(v67).n128_u32[3] = 0;
                  }
                  else {
                    v67 = (__typeof__(v67)){0};
                    v66 = (__typeof__(v66)){0};
                  }
                  v68 = v23[1];
                  if (LANES128(v23[2]).n128_u8[0] != 0) {
                    v69 = -1;
                  }
                  else {
                    v69 = 0;
                  }
                  v70 = vdupq_n_s32(v69);
                  if (LANES128(v23[4]).n128_u8[0] != 0) {
                    v71 = -1;
                  }
                  else {
                    v71 = 0;
                  }
                  LANES128(v68).n128_u32[3] = 0;
                  v72 = vbslq_s8(v70, v68, v66);
                  v73 = v23[3];
                  LANES128(v73).n128_u32[3] = 0;
                  v74 = vsubq_f32(
                      vmulq_f32(
                          vaddq_f32(v72, vbslq_s8(vdupq_n_s32(v71), v73, v67)),
                          v15),
                      v18);
                  v75 = vmulq_f32(v74, v74);
                  LANES128(v75).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v75, v75, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v75).n128_u64[0])))
                          .n64_u64[0];
                  v76 =
                      LANES64_OF(
                          vsqrt_f32(vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v75).n128_u64[0]))))
                          .n64_f32[0] -
                      v64;
                  if (v76 < 0.0f) {
                    v76 = 0.0f;
                  }
                  LANES128(v23[14]).n128_f32[3] = v76;
                  v77 = (unsigned __int64)a4[2];
                  v78 = *v22;
                  if ((unsigned __int64)v16 < v77) {
                    *(_QWORD*)v16 = v78;
                    v16 += 8;
                  }
                  else {
                    v79 = (char*)(v16 - v17);
                    v80 = (v16 - v17) >> 3;
                    v81 = v80 + 1;
                    if ((unsigned __int64)(v80 + 1) >> 61 != 0) {
                      *a4 = v17;
                      GameRoutine_d4c890();
                    }
                    v82 = v77 - (_QWORD)v17;
                    if (v82 >> 2 > v81) {
                      v81 = v82 >> 2;
                    }
                    if ((unsigned __int64)v82 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v83 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v83 = v81;
                    }
                    if (v83 != 0) {
                      v84 = v17;
                      if (v83 >> 61 != 0) {
                        *a4 = v17;
                        GameRoutine_60a210_alt1(v10);
                      }
                      v85 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v83, 16,
                          0);
                      v17 = v84;
                    }
                    else {
                      v85 = 0;
                    }
                    v86 = v85 + 8 * v83;
                    v87 = v17;
                    v88 = (__int64)&v79[v85 + -8 * v80];
                    *(_QWORD*)&v79[v85] = v78;
                    v89 = (__int64)&v79[v85 + 8];
                    v10 = memcpy(v88, v17, v79);
                    v90 = v87;
                    v16 = (char*)v89;
                    a4[1] = (char*)v89;
                    a4[2] = (char*)v86;
                    if (v90 != nullptr) {
                      v91 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v91 = 56;
                      }
                      v10 = nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v90);
                    }
                    v18 = v95;
                    a3 = v94;
                    a2 = v96;
                    v21 = v97;
                    LANES128(v15).n128_u64[0] = 0x3F0000003F000000LL;
                    LANES128(v15).n128_u64[1] = 0x3F0000003F000000LL;
                    v17 = (char*)v88;
                  }
                  a4[1] = v16;
                }
              }
              v22 += 2;
            } while (v22 != v21);
          }
          *a4 = v17;
        }
      }
    LABEL_4:
      ++v14;
    } while (v14 != v98);
    if (v17 != v16) {
      GameRoutine_d4c8c0(v17, v16, (2 * __clz((v16 - v17) >> 3)) ^ 0x7E, 1);
    }
  }
  {
    nn_os_UnlockMutex(v93 + 48);
    return;
  }
}

__int64 game_zview_d569d0()
{
  GameData_220fcf0 = 0;
  GameData_220fcf8 = 0;
  GameData_220fce0 = 0;
  GameData_220fce8 = 0;
  GameData_220fcd0 = 0;
  GameData_220fcd8 = 0;
  GameData_220fcc0 = 0;
  GameData_220fcc8 = 0;
  GameData_220fcb0 = 0;
  GameData_220fcb8 = 0;
  GameData_220fca0 = 0;
  GameData_220fca8 = 0;
  GameData_220fc90 = 0;
  GameData_220fc98 = 0;
  GameData_220fc80 = 0;
  GameData_220fc88 = 0;
  GameData_220fc70 = 0;
  GameData_220fc78 = 0;
  GameData_220fc60 = 0;
  GameData_220fc68 = 0;
  GameData_220fc50 = 0;
  GameData_220fc58 = 0;
  GameData_220fc40 = 0;
  GameData_220fc48 = 0;
  GameData_220fc30 = 0;
  GameData_220fc38 = 0;
  return GameRoutine_2b0();
}

__attribute__((swiftcall)) void game_zview_d56a60(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float a4)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  unsigned __int8 explicit;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  float v15;
  __int64 v16;

  result = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_BYTE*)(result + 145) == 1) {
    result = HubCharacterNatives_cf7940_alt1(result);
    if (result != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4e8,
                                      memory_order_acquire);
      v9 = GameData_212d4e0;
      if ((explicit & 1) == 0) {
        v16 = result;
        v14 = (unsigned int)(__cxa_guard_acquire_alt1((void*)(GameData_212d4e8),
                                                      GameData_212d4e8),
                             (void*)(GameData_212d4e8));
        v9 = GameData_212d4e0;
        result = v16;
        if (v14 != 0) {
          *GameData_212d4e0 = wld_Crc32_alt1(0, "CharacterSound", 14);
          __cxa_guard_release_alt1(GameData_212d4e8, v15);
          v9 = GameData_212d4e0;
          result = v16;
        }
      }
      v10 = *v9;
      v11 = *(_QWORD*)(result + 512);
      v12 = v11;
      while (v12 != *(_QWORD*)(result + 504)) {
        v13 = *(_DWORD*)(v12 - 16);
        v12 -= 16;
        v11 -= 16;
        if (v13 == v10) {
          if (*(_QWORD*)(result + 512) != v11) {
            result = *(_QWORD*)(v11 + 8);
            if (result != 0) {
              CharacterSound_1095750(result, a2, 0, a4);
              return;
            }
          }
          break;
        }
      }
    }
  }
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_zview_d56ce0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, float a4)
{

#pragma clang fp contract(off)
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _BYTE v17[16];

  result = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_BYTE*)(result + 145) == 1) {
    result = HubCharacterNatives_cf7940(result);
    if (result != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4e8,
                                      memory_order_acquire);
      v9 = GameData_212d4e0;
      if ((explicit & 1) == 0) {
        v16 = result;
        v15 = __cxa_guard_acquire(GameData_212d4e8);
        result = v16;
        if (v15 != 0) {
          *v9 = wld_Crc32(0, "CharacterSound", 0xEu);
          __cxa_guard_release(GameData_212d4e8);
          result = v16;
        }
      }
      v10 = *(_QWORD*)(result + 512);
      v11 = v10;
      while (v11 != *(_QWORD*)(result + 504)) {
        v12 = *(_DWORD*)(v11 - 16);
        v11 -= 16;
        v10 -= 16;
        if (v12 == *v9) {
          if (*(_QWORD*)(result + 512) != v10) {
            v13 = *(_QWORD*)(v10 + 8);
            if (v13 != 0 &&
                (*GameData_212d448[0] == 0 ||
                 (v14 = *(_QWORD*)(*GameData_212d448[0] + 8)) == 0 ||
                 (*(_BYTE*)(v14 + 113) & 0x80) == 0)) {
              result = snd_isActive_100100((__int64*)(v13 + 104));
              if ((result & 1) == 0) {
                CharacterSound_1095750_alt1((void*)((__int64)v17), v13,
                                            (__int64)"V_AV_<VoiceID>_<Arg>", a2,
                                            a4);
                GameRoutine_112180(v13 + 104, (__int64)v17);
                *(_QWORD*)a3 = 0;
                *(_DWORD*)(a3 + 8) = 0x2000;
                {
                  GameRoutine_112180(a3, v13 + 104);
                  return;
                }
              }
            }
          }
          break;
        }
      }
    }
  }
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  {
    result;
    return;
  }
}

__int64 game_zview_d56e60(__int64 result, char a2, unsigned __int8* a3)
{
  __int16 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13[7];
  char* v14;
  _QWORD v15[2];
  __int64 v16;

  v15[0] = 4;
  v15[1] = 0;
  v16 = 0;
  if ((a2 & 1) != 0) {
    v3 = 18527;
  }
  else {
    v3 = 19551;
  }
  v4 = *a3;
  *(_WORD*)((char*)v15 + 1) = v3;
  v5 = *((_QWORD*)a3 + 1);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v5 != 0) {
    v6 = result;
    v12 = 8;
    strcpy(v13, "Hit_");
    if ((v4 & 1) != 0) {
      v7 = *((unsigned __int8**)a3 + 2);
    }
    else {
      v7 = a3 + 1;
    }
    GameRoutine_1a09ce0(&v12, v7, v5);
    GameRoutine_1a09ce0(&v12, (char*)v15 + 1, 2);
    if ((v12 & 1) != 0) {
      v8 = v14;
    }
    else {
      v8 = v13;
    }
    result = X8CALL_X0(__int64, game_zview_d56ba0((void*)((__int64)&v11), v6,
                                                  (__int64)v8, 1.0f));
    if ((v12 & 1) != 0 && v14 != nullptr) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v14);
    }
    if ((v15[0] & 1) != 0 && v16 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v16);
    }
  }
  return result;
}

_QWORD* game_zview_d571e0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  _BYTE* v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  _BYTE* v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  _QWORD* result;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;
  struct {
    _QWORD v26[2];
    char* v27;
  } v26_;
  struct {
    _QWORD v28[2];
    char* v29;
  } v28_;

  v2 = *a2;
  v4 = *((_QWORD*)a2 + 1);
  v3 = *((_BYTE**)a2 + 2);
  v7 = (v2 & 1) == 0;
  v8 = v2 >> 1;
  v28_.v28[1] = 0;
  v28_.v29 = nullptr;
  v28_.v28[0] = 0;
  v26_.v26[1] = 0;
  v26_.v27 = nullptr;
  v26_.v26[0] = 0;
  if (v7) {
    v9 = a2 + 1;
  }
  else {
    v9 = v3;
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = v4;
  }
  if ((GameRoutine_109ecc0(v9, v10, (char*)v28_.v28, (char*)v26_.v26) & 1) !=
      0) {
    if ((v28_.v28[0] & 1) != 0) {
      v11 = v28_.v29;
    }
    else {
      v11 = (char*)v28_.v28 + 1;
    }
    v12 = strlen(v11);
    if ((v26_.v26[0] & 1) != 0) {
      v13 = v26_.v27;
    }
    else {
      v13 = (char*)v26_.v26 + 1;
    }
    v14 = strlen(v13);
    result = X8CALL_X0(
        void*, game_zview_d57000((void*)(&v24_.v24), a1, v11, v12, v13, v14));
    v16 = v24_.v25;
    if (v24_.v25 == 0) {
      goto LABEL_24;
    }
  }
  else {
    v17 = *a2;
    if ((v17 & 1) != 0) {
      v18 = *((unsigned __int8**)a2 + 2);
    }
    else {
      v18 = a2 + 1;
    }
    if ((v17 & 1) != 0) {
      v19 = *((_QWORD*)a2 + 1);
    }
    else {
      v19 = v17 >> 1;
    }
    result = X8CALL_X0(void*, game_zview_d57000((void*)(&v22_.v22), a1, v18,
                                                v19, "Loc_C_Center", 12));
    v16 = v22_.v23;
    if (v22_.v23 == 0) {
    LABEL_24:
      if ((v26_.v26[0] & 1) == 0) {
        goto LABEL_30;
      }
      goto LABEL_25;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_24;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  result = (_QWORD*)std___1___shared_weak_count___release_weak(v16);
  if ((v26_.v26[0] & 1) != 0) {
  LABEL_25:
    if (v26_.v27 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
  }
LABEL_30:
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
  }
  return result;
}

__int64 game_zview_d57520(__int64 result, __int64 a2, char a3, float32x4_t* a4)
{

#pragma clang fp contract(off)
  int8x16_t v6;
  char v10;
  __int64 v11;
  float32x4_t* v12;
  unsigned __int8 explicit;
  int* v14;
  int v15;
  __int64 v16;
  __int64 i;
  int v18;
  __int64 v19;
  const char* v20;
  long double v21;
  __int64 v22;
  int v23;
  struct {
    __int128 v24;
    char gap16_[8];
    __int64 v25;
  } v24_;
  __int64 v28;

  v6 = vmulq_f32(*a4, *a4);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_f32[0] > 0x0.0p+0f) {
    result = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL);
    if (*(_BYTE*)(result + 145) == 1) {
      result = HubCharacterNatives_cf7940(result);
      if (result != 0) {
        v10 = a3;
        v11 = a2;
        v12 = a4;
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212deb8, memory_order_acquire);
        v14 = GameData_212deb0;
        if ((explicit & 1) == 0) {
          v28 = result;
          v23 = __cxa_guard_acquire(GameData_212deb8);
          v10 = a3;
          v11 = a2;
          v12 = a4;
          v14 = GameData_212deb0;
          result = v28;
          if (v23 != 0) {
            *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 0x10u);
            __cxa_guard_release(GameData_212deb8);
            v10 = a3;
            v11 = a2;
            v12 = a4;
            v14 = GameData_212deb0;
            result = v28;
          }
        }
        v15 = *v14;
        v16 = *(_QWORD*)(result + 512);
        for (i = v16; i != *(_QWORD*)(result + 504); i -= 16) {
          v18 = *(_DWORD*)(i - 16);
          v16 -= 16;
          if (v18 == v15) {
            if (*(_QWORD*)(result + 512) != v16) {
              v19 = *(_QWORD*)(v16 + 8);
              if (v19 != 0) {
                result = *(_QWORD*)(v19 + 80);
                if (result != 0) {
                  if ((v10 & 1) != 0) {
                    v20 = "Btl_Hit_Slash_H";
                  }
                  else {
                    v20 = "Btl_Hit_Slash_L";
                  }
                  v21 = *(long double*)&GameData_1a83610;
                  v24_.v24 = GameData_1a83610;
                  LODWORD(v21) =
                      COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                  result = GameRoutine_108dd30(result, (__int64)v20, v11, v12,
                                               (__int64)&v24_.v24, v21);
                  v22 = v24_.v25;
                  if (v24_.v25 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                    return std___1___shared_weak_count___release_weak(v22);
                  }
                }
              }
            }
            return result;
          }
        }
      }
    }
  }
  return result;
}

__int64 game_zview_d576f0(_QWORD* a1, __int64 a2, __int64 a3, char a4,
                          float32x4_t* a5)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int128 v21;
  struct {
    __int128 v22;
    char* v23;
  } v22_;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  result = (__int64)GameRoutine_d57390(a1, a2);
  v10 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 232LL);
  if (v10 == 0) {
    return result;
  }
  v11 = *(_QWORD*)(v10 + 392);
  v12 = *(_QWORD*)(v10 + 400);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    v13 = *(_QWORD*)(v11 + 11744);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
    if (v13 == 0) {
      goto LABEL_22;
    }
  LABEL_8:
    v14 = *(_QWORD*)(a3 + 48);
    v15 = strlen(v13);
    if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v16 = v15;
    if (v15 >= 0x17) {
      if ((v15 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v15 | 7) + 1;
      }
      v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                                  16, 0);
      *((_QWORD*)&v22_.v22 + 1) = v16;
      v22_.v23 = v17;
      *(_QWORD*)&v22_.v22 = v18 | 1;
    }
    else {
      LOBYTE(v22_.v22) = 2 * v15;
      v17 = (char*)&v22_.v22 + 1;
      if (v15 == 0) {
        goto LABEL_17;
      }
    }
    memmove(v17, v13, v16);
  LABEL_17:
    v17[v16] = 0;
    game_zview_d571e0(v14, (unsigned __int8*)&v22_.v22);
    if ((v22_.v22 & 1) != 0 && v22_.v23 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v19);
    }
    goto LABEL_22;
  }
  v13 = *(_QWORD*)(v11 + 11744);
  if (v13 != 0) {
    goto LABEL_8;
  }
LABEL_22:
  game_zview_d57000((void*)(&v24_.v24), *(_QWORD*)(a3 + 48), "Btl_Hit_Damage",
                    14, "Loc_C_Center", 12);
  v20 = v24_.v25;
  if (v24_.v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  result = CharacterBuilder_1084a50(v10, "Loc_C_Center");
  if (result != 0) {
    v21 = *(_OWORD*)(result + 48);
    LOBYTE(v22_.v23) = 1;
    v22_.v22 = v21;
    return game_zview_d57520((__int64)a1, (__int64)&v22_.v22, a4 & 1, a5);
  }
  return result;
}

_QWORD* game_zview_d95860(float* a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* result;
  float v14;
  int v15;
  int v16;
  float32x4_t v17;
  unsigned int v18;
  __int64* v19;
  float v20;
  unsigned int v21;
  __int64 v22;
  float v23;
  unsigned __int64 v24;
  float* v25;
  float32x4_t v26;
  int8x16_t v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  float* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  unsigned int v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43[2];

  v1 = *((_QWORD**)a1 + 2);
  v2 = *((_QWORD*)a1 + 4);
  *((_QWORD*)a1 + 3) = v1;
  if ((unsigned __int64)v1 >= v2) {
    v5 = v2 - (_QWORD)v1;
    v6 = v5 >> 2;
    if ((unsigned __int64)(v5 >> 2) <= 1) {
      v6 = 1;
    }
    if ((unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
      v7 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v7 = v6;
    }
    if (v7 >> 61 != 0) {
    LABEL_37:
      GameRoutine_60a210();
    }
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v7, 16, 0);
    v10 = (__int64)&v9[v7];
    *v9 = 0;
    v4 = (__int64)(v9 + 1);
    *((_QWORD*)a1 + 2) = v9;
    *((_QWORD*)a1 + 3) = v9 + 1;
    *((_QWORD*)a1 + 4) = v10;
    if (v1 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v11);
    }
  }
  else {
    *v1 = 0;
    v4 = (__int64)(v1 + 1);
  }
  v12 = *(_QWORD*)a1;
  *((_QWORD*)a1 + 3) = v4;
  result = (_QWORD*)(*(__int64 (**)(float*))(v12 + 24))(a1);
  v14 = 0x0.0p+0f;
  if ((int)result >= 2) {
    v15 = *((unsigned __int8*)a1 + 12);
    v16 = (int)result;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, float*, double))(
        *(_QWORD*)a1 + 16LL))((void*)(v43), a1, 0x0.0p+0);
    v17 = v43[0];
    v18 = 0;
    v39 = v16 + v15 - 1;
    v19 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v20 = (float)v18;
      v21 = 1;
      v40 = v18;
      do {
        v42 = v17;
        v23 = v20 + (float)((float)v21 * 0x1.99999a0000000p-4f);
        result = (*(_QWORD * (**)(float32x4_t * __return_ptr, float*, float))(
            *(_QWORD*)a1 + 16LL))(v43, a1, v23);
        v17 = v43[0];
        v25 = *((float**)a1 + 3);
        v24 = *((_QWORD*)a1 + 4);
        v26 = vsubq_f32(v43[0], v42);
        v27 = vmulq_f32(v26, v26);
        LANES128(v27).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0])))
                .n64_u64[0];
        v14 = v14 + LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]))))
                        .n64_f32[0];
        if ((unsigned __int64)v25 < v24) {
          *v25 = v23;
          v25[1] = v14;
          v22 = (__int64)(v25 + 2);
        }
        else {
          v28 = *((_QWORD*)a1 + 2);
          v29 = (char*)v25 - v28;
          v30 = ((__int64)v25 - v28) >> 3;
          v31 = v30 + 1;
          if ((unsigned __int64)(v30 + 1) >> 61 != 0) {
            GameRoutine_d96270();
          }
          v32 = v24 - v28;
          v41 = v43[0];
          if (v32 >> 2 > v31) {
            v31 = v32 >> 2;
          }
          if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF8LL) {
            v33 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v33 = v31;
          }
          if (v33 != 0) {
            if (v33 >> 61 != 0) {
              goto LABEL_37;
            }
            v34 = fw_memory_HeapManager_Allocate(*v19, 8 * v33, 16, 0);
          }
          else {
            v34 = 0;
          }
          v35 = (float*)&v29[v34];
          v36 = v34 + 8 * v33;
          v37 = (__int64)&v29[v34 + -8 * v30];
          *v35 = v23;
          v35[1] = v14;
          v22 = (__int64)&v29[v34 + 8];
          result = (_QWORD*)memcpy(v37, v28, v29);
          *((_QWORD*)a1 + 2) = v37;
          *((_QWORD*)a1 + 3) = v22;
          *((_QWORD*)a1 + 4) = v36;
          if (v28 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v19 + 200) == 0) {
              v38 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*v19 + v38);
          }
          v17 = v41;
        }
        LANES128(v17).n128_u32[3] = 0;
        ++v21;
        *((_QWORD*)a1 + 3) = v22;
      } while (v21 != 11);
      v18 = v40 + 1;
    } while (v40 + 1 != v39);
  }
  a1[2] = v14;
  return result;
}

__attribute__((swiftcall)) void

game_zview_d95c70(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  void* v8;
  __int64 v9;
  char* v10;
  __int64 v11;

  v4 = strlen(a1);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v7, 16,
                                             0);
    a2[1] = v5;
    a2[2] = v6;
    *a2 = v7 | 1;
    goto LABEL_9;
  }
  *(_BYTE*)a2 = 2 * v4;
  v6 = (__int64)a2 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove(v6, a1, v5);
  }
  *(_BYTE*)(v6 + v5) = 0;
  if ((GameData_2167680 & 1) != 0) {
    v8 = (void*)GameData_2167690;
  }
  else {
    v8 = &GameData_2167681;
  }
  v9 = strlen(v8);
  Character_cb01a0(a2, v8, v9, &GameData_1a9f09e, 0);
  if ((GameData_2167698[0] & 1) != 0) {
    v10 = (char*)GameData_21676a8;
  }
  else {
    v10 = &GameData_2167698[1];
  }
  v11 = strlen(v10);
  {
    Character_cb01a0(a2, v10, v11, &GameData_1a9f09e, 0);
    return;
  }
}

__attribute__((swiftcall)) void game_zview_d95da0(PSEUDO_X8 x8_,
                                                  __int64 unused_int0,
                                                  unsigned __int8* a1,
                                                  signed __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  signed __int64 v11;
  unsigned int v12;
  unsigned __int8* v13;
  signed __int64 v14;
  unsigned __int8* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  unsigned __int64 v31;
  unsigned __int8* v32;
  int v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  unsigned __int8* v36;
  signed __int64 v37;
  __int64 v38;
  unsigned __int8* v39;
  unsigned __int8* v40;
  unsigned __int64 v41;
  unsigned __int8* v42;
  int v43;
  int v44;
  unsigned int v45;
  bool v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char v52;
  __int64 v53;
  char* v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  struct {
    __int64 v59;
    __int64 v60;
    unsigned __int64 v61;
  } v59_;

  result = strlen(a1);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_114;
  }
  v7 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16, 0);
    a3[1] = v7;
    a3[2] = v8;
    *a3 = v9 | 1;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v8 = (__int64)a3 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memmove(v8, a1, v7);
LABEL_10:
  *(_BYTE*)(v8 + v7) = 0;
  if ((GameData_2167680 & 1) != 0) {
    v10 = (unsigned __int8*)GameData_2167690;
  }
  else {
    v10 = (unsigned __int8*)&GameData_2167681;
  }
  if ((GameData_2167680 & 1) != 0) {
    v11 = GameData_2167688;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)GameData_2167680 >> 1;
  }
  if (v11 != 0) {
    if (a2 < v11) {
      goto LABEL_25;
    }
    v12 = *v10;
    v13 = &a1[a2];
    v14 = a2;
    v15 = a1;
    while (1) {
      v16 = memchr(v15, v12, v14 - v11 + 1);
      if (v16 == 0) {
        goto LABEL_25;
      }
      v17 = v16;
      result = memcmp(v16, v10, v11);
      if ((_DWORD)result == 0) {
        break;
      }
      v15 = (unsigned __int8*)(v17 + 1);
      v14 = (signed __int64)&v13[-v17 - 1];
      if (v14 < v11) {
        goto LABEL_25;
      }
    }
    if ((unsigned __int8*)v17 == v13 || v17 - (_QWORD)a1 == -1) {
    LABEL_25:
      v18 = *(unsigned __int8*)a3;
      v19 = a3[2];
      if ((v18 & 1) != 0) {
        v20 = a3[1];
      }
      else {
        v20 = v18 >> 1;
      }
      if ((v18 & 1) != 0) {
        v21 = (char*)a3[2];
      }
      else {
        v21 = (char*)a3 + 1;
      }
      v22 = v20 + v11;
      if ((unsigned __int64)(v20 + v11) >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_114;
      }
      v58 = v21;
      if (v22 > 0x16) {
        if ((v22 | 7) == 0x17) {
          v25 = 26;
        }
        else {
          v25 = (v22 | 7) + 1;
        }
        v24 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v25, 16,
                                             0);
        v59_.v60 = v20 + v11;
        v59_.v61 = v24;
        v59_.v59 = v25 | 1;
        v23 = v25 | 1;
      }
      else {
        v23 = 2 * v22;
        v24 = 0;
        v59_.v60 = 0;
        v59_.v61 = 0;
        v59_.v59 = (unsigned __int8)(2 * v22);
      }
      if ((v23 & 1) != 0) {
        v26 = (char*)v24;
      }
      else {
        v26 = (char*)&v59_.v59 + 1;
      }
      result = memmove(v26, v10, v11);
      v27 = &v26[v11];
      if (v20 != 0) {
        result = memmove(v27, v58, v20);
      }
      v27[v20] = 0;
      if ((v18 & 1) != 0 && v19 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
      }
      v29 = v59_.v60;
      *a3 = v59_.v59;
      a3[1] = v29;
      a3[2] = v59_.v61;
    }
  }
  if ((GameData_2167698[0] & 1) != 0) {
    v30 = (char*)GameData_21676a8;
  }
  else {
    v30 = &GameData_2167698[1];
  }
  if ((GameData_2167698[0] & 1) != 0) {
    v31 = GameData_21676a0;
  }
  else {
    v31 = (unsigned __int64)(unsigned __int8)GameData_2167698[0] >> 1;
  }
  v32 = &a1[a2];
  if (a2 != 0 && v31 != 0) {
    v33 = (unsigned __int8)*v30;
    v34 = &a1[a2];
    v35 = a1;
    v36 = &a1[a2];
    do {
      v37 = v34 - v35;
      v38 = (v34 - v35) & 3;
      if (v38 != 0) {
        while (*v35 != v33) {
          ++v35;
          if (--v38 == 0) {
            goto LABEL_61;
          }
        }
      }
      else {
      LABEL_61:
        if ((unsigned __int64)(v37 - 1) < 3) {
          break;
        }
        v35 += 3;
        while (1) {
          if (*(v35 - 3) == v33) {
            v35 -= 3;
            goto LABEL_72;
          }
          if (*(v35 - 2) == v33) {
            v35 -= 2;
            goto LABEL_72;
          }
          if (*(v35 - 1) == v33) {
            break;
          }
          if (*v35 == v33) {
            goto LABEL_72;
          }
          v39 = v35 + 1;
          v35 += 4;
          if (v39 == v32) {
            goto LABEL_81;
          }
        }
        --v35;
      }
    LABEL_72:
      v40 = v35 + 1;
      v41 = v31 - 1;
      v42 = (unsigned __int8*)(v30 + 1);
      while (v41 != 0) {
        if (v40 == v32) {
          goto LABEL_81;
        }
        v44 = *v40++;
        v43 = v44;
        v45 = *v42++;
        result = v45;
        --v41;
        if (v43 != v45) {
          goto LABEL_78;
        }
      }
      v36 = v35;
    LABEL_78:
      ++v35;
    } while (v35 != v32);
  }
  else {
    v36 = &a1[a2];
  }
LABEL_81:
  v46 = v36 != v32 || v31 == 0;
  if (!v46 || v36 - a1 == -1) {
    v47 = *(unsigned __int8*)a3;
    v48 = a3[2];
    if ((v47 & 1) != 0) {
      v49 = a3[1];
    }
    else {
      v49 = v47 >> 1;
    }
    if ((v47 & 1) != 0) {
      v50 = (char*)a3[2];
    }
    else {
      v50 = (char*)a3 + 1;
    }
    v51 = v49 + v31;
    if (v49 + v31 < 0xFFFFFFFFFFFFFFF7LL) {
      if (v51 > 0x16) {
        if ((v51 | 7) == 0x17) {
          v53 = 26;
        }
        else {
          v53 = (v51 | 7) + 1;
        }
        result = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v53,
                                                16, 0);
        v59_.v60 = v49 + v31;
        v59_.v61 = result;
        v59_.v59 = v53 | 1;
        v52 = v53 | 1;
      }
      else {
        v52 = 2 * v51;
        result = 0;
        v59_.v60 = 0;
        v59_.v61 = 0;
        v59_.v59 = (unsigned __int8)(2 * v51);
      }
      if ((v52 & 1) != 0) {
        v54 = (char*)result;
      }
      else {
        v54 = (char*)&v59_.v59 + 1;
      }
      if (v49 != 0) {
        result = memmove(v54, v50, v49);
      }
      v55 = &v54[v49];
      if (v31 != 0) {
        result = memmove(v55, v30, v31);
      }
      v55[v31] = 0;
      if ((v47 & 1) != 0 && v48 != 0) {
        v56 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v56 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
      }
      v57 = v59_.v60;
      *a3 = v59_.v59;
      a3[1] = v57;
      a3[2] = v59_.v61;
      {
        result;
        return;
      }
    }
  LABEL_114:
    String_60a1d0();
  }
  {
    result;
    return;
  }
}

bool game_zview_daa340(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  unsigned int v3;
  int v4;
  _BOOL4 v5;
  int v6;
  unsigned __int8 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int16* v12;
  __int16* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  char* v25;
  __int16* v26;
  __int16* v27;
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
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int8* v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  signed __int64 v50;
  unsigned __int8* v51;
  unsigned __int8* v52;
  unsigned __int8* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 i;
  __int64 v66;
  __int64 v67;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned int v77;
  struct {
    __int64 v78;
    unsigned __int64 v79;
    __int64 v80;
    char v81;
  } v78_;
  _BYTE v82[7];
  __int64 v83;
  struct {
    __int64 v84;
    unsigned __int64 v85;
    __int64 v86;
  } v84_;
  struct {
    __int64 v87[2];
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
  } v87_;
  struct {
    __int128 v95;
    __int64 v96;
  } v95_;
  struct {
    __int64 v97;
    unsigned __int64 v98;
    char* v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
  } v97_;
  struct {
    __int64 v106;
    unsigned __int64 v107;
    char* v108;
  } v106_;

  if (*(_BYTE*)(a1 + 112) != 1) {
    return false;
  }
  v1 = a1;
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 388LL) & 8) != 0) {
    v2 = (__int64*)&v82[6];
    v3 = 12;
    qmemcpy(v82, "Short_", 6);
    v4 = 83;
  }
  else {
    v2 = &v83;
    v3 = 14;
    qmemcpy(v82, "Medium_", sizeof(v82));
    v4 = 77;
  }
  v77 = v4;
  v6 = *(_DWORD*)(a1 + 48);
  *(_BYTE*)v2 = 0;
  v7 = *(_BYTE*)(a1 + 360);
  v8 = *(_QWORD*)(a1 + 368);
  v74 = v6;
  v9 = v7 >> 1;
  v78_.v81 = v3;
  if ((v7 & 1) != 0) {
    v9 = v8;
  }
  if (v9 != 0 && (float)(*(float*)(a1 + 352) - *(float*)(a1 + 356)) <=
                     *(float*)(a1 + 168)) {
    if ((v7 & 1) != 0) {
      fw_text_String_CopyTerminated(&v106_.v106, *(_QWORD*)(a1 + 376), v8);
    }
    else {
      v16 = *(_QWORD*)(a1 + 368);
      v106_.v106 = *(_QWORD*)(a1 + 360);
      v106_.v107 = v16;
      v106_.v108 = *(char**)(a1 + 376);
    }
  }
  else {
    LOWORD(v106_.v106) = 0;
  }
  if ((v106_.v106 & 1) != 0) {
    v10 = v106_.v107;
  }
  else {
    v10 = (unsigned __int64)(unsigned __int8)v106_.v106 >> 1;
  }
  if (v10 != 0) {
    if ((v106_.v106 & 1) != 0) {
      v11 = v106_.v108;
    }
    else {
      v11 = (char*)&v106_.v106 + 1;
    }
    v12 = GameRoutine_dacf80((__int64)v11, v10);
    v13 = v12;
    if ((*(_BYTE*)v12 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)&v95_.v95, *((_QWORD*)v12 + 2),
                                    *((_QWORD*)v12 + 1));
    }
    else {
      v14 = *(_QWORD*)v12;
      v15 = *((_QWORD*)v12 + 2);
      *((_QWORD*)&v95_.v95 + 1) = *((_QWORD*)v12 + 1);
      v95_.v96 = v15;
      *(_QWORD*)&v95_.v95 = v14;
    }
    if ((v13[12] & 1) != 0) {
      fw_text_String_CopyTerminated(&v97_.v97, *((_QWORD*)v13 + 5),
                                    *((_QWORD*)v13 + 4));
    }
    else {
      v17 = *((_QWORD*)v13 + 3);
      v18 = *((char**)v13 + 5);
      v97_.v98 = *((_QWORD*)v13 + 4);
      v97_.v99 = v18;
      v97_.v97 = v17;
    }
    v19 = *((_QWORD*)v13 + 7);
    v97_.v100 = *((_QWORD*)v13 + 6);
    v97_.v101 = v19;
    v20 = *((_QWORD*)v13 + 9);
    v21 = *((_QWORD*)v13 + 10);
    v22 = *((_QWORD*)v13 + 11);
    v97_.v102 = *((_QWORD*)v13 + 8);
    v97_.v103 = v20;
    v97_.v104 = v21;
    v97_.v105 = v22;
    v23 = v97_.v97 & 1;
    if (v23 != 0) {
      v24 = v97_.v98;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v97_.v97 >> 1;
    }
    if (v24 != 0) {
      if (v23 != 0) {
        v25 = v97_.v99;
      }
      else {
        v25 = (char*)&v97_.v97 + 1;
      }
      v26 = GameRoutine_dacf80((__int64)v25, v24);
      v27 = v26;
      if ((*(_BYTE*)v26 & 1) != 0) {
        fw_text_String_CopyTerminated(&v84_.v84, *((_QWORD*)v26 + 2),
                                      *((_QWORD*)v26 + 1));
      }
      else {
        v28 = *(_QWORD*)v26;
        v29 = *((_QWORD*)v26 + 2);
        v84_.v85 = *((_QWORD*)v26 + 1);
        v84_.v86 = v29;
        v84_.v84 = v28;
      }
      if ((v27[12] & 1) != 0) {
        fw_text_String_CopyTerminated(v87_.v87, *((_QWORD*)v27 + 5),
                                      *((_QWORD*)v27 + 4));
      }
      else {
        v30 = *((_QWORD*)v27 + 3);
        v31 = *((_QWORD*)v27 + 5);
        v87_.v87[1] = *((_QWORD*)v27 + 4);
        v87_.v88 = v31;
        v87_.v87[0] = v30;
      }
      v33 = *((_QWORD*)v27 + 6);
      v32 = *((_QWORD*)v27 + 7);
      v87_.v89 = v33;
      v87_.v90 = v32;
      v34 = *((_QWORD*)v27 + 9);
      v35 = *((_QWORD*)v27 + 10);
      v36 = *((_QWORD*)v27 + 11);
      v87_.v91 = *((_QWORD*)v27 + 8);
      v87_.v92 = v34;
      v87_.v93 = v35;
      v87_.v94 = v36;
      v37 = v84_.v84 & 1;
      v38 = (unsigned __int64)(unsigned __int8)v84_.v84 >> 1;
      if (v37 != 0) {
        v38 = v84_.v85;
      }
      if (v38 != 0 && (_DWORD)v33 == v74) {
        if (v37 != 0) {
          fw_text_String_CopyTerminated(&v78_.v78, v84_.v86, v84_.v85);
          if ((v87_.v87[0] & 1) == 0) {
            goto LABEL_121;
          }
        }
        else {
          v78_.v78 = v84_.v84;
          v78_.v79 = v84_.v85;
          v78_.v80 = v84_.v86;
          if ((v87_.v87[0] & 1) == 0) {
          LABEL_121:
            if ((v84_.v84 & 1) != 0 && v84_.v86 != 0) {
              v70 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v70 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
            }
            if ((v97_.v97 & 1) != 0 && v97_.v99 != nullptr) {
              v71 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v71 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
            }
            if ((v95_.v95 & 1) != 0 && v95_.v96 != 0) {
              v72 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v72 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
            }
            goto LABEL_88;
          }
        }
        if (v87_.v88 != 0) {
          v69 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v69);
        }
        goto LABEL_121;
      }
      if ((v87_.v87[0] & 1) != 0 && v87_.v88 != 0) {
        v39 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v39);
        v37 = v84_.v84 & 1;
      }
      if (v37 != 0 && v84_.v86 != 0) {
        v40 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v40);
      }
      v23 = v97_.v97 & 1;
    }
    if (v23 != 0 && v97_.v99 != nullptr) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v41);
    }
    if ((v95_.v95 & 1) != 0 && v95_.v96 != 0) {
      v42 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v42 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v42);
    }
  }
  v73 = v1;
  v76 = GameData_22137b8;
  v43 = 0xAAAAAAAAAAAAAAABLL * ((GameData_22137c0 - GameData_22137b8) >> 5);
  if ((int)v43 >= 1) {
    v44 = v3 >> 1;
    v45 = 0;
    v75 = v43 & 0x7FFFFFFF;
    do {
      v46 = (unsigned __int8*)(v76 + 96 * v45);
      v47 = *v46;
      v49 = *((_QWORD*)v46 + 1);
      v48 = *((_QWORD*)v46 + 2);
      v50 = v47 >> 1;
      if ((v47 & 1) != 0) {
        v51 = *((unsigned __int8**)v46 + 2);
      }
      else {
        v51 = v46 + 1;
      }
      if ((v47 & 1) != 0) {
        v50 = *((_QWORD*)v46 + 1);
      }
      if (v50 >= v44) {
        v52 = &v51[v50];
        v53 = v51;
        do {
          v54 = memchr(v53, v77, v50 - v44 + 1);
          if (v54 == 0) {
            break;
          }
          v55 = v54;
          if ((unsigned int)memcmp(v54, v82, v44) == 0) {
            if ((unsigned __int8*)v55 != v52 && (unsigned __int8*)v55 == v51 &&
                *((_DWORD*)v46 + 12) == v74) {
              if ((v47 & 1) != 0) {
                fw_text_String_CopyTerminated(&v78_.v78, v48, v49);
              }
              else {
                v56 = *(_QWORD*)v46;
                v57 = *((_QWORD*)v46 + 2);
                v78_.v79 = *((_QWORD*)v46 + 1);
                v78_.v80 = v57;
                v78_.v78 = v56;
              }
              goto LABEL_87;
            }
            break;
          }
          v53 = (unsigned __int8*)(v55 + 1);
          v50 = (signed __int64)&v52[-v55 - 1];
        } while (v50 >= v44);
      }
      ++v45;
    } while (v45 != v75);
  }
  LOWORD(v78_.v78) = 0;
LABEL_87:
  v1 = v73;
LABEL_88:
  if ((v106_.v106 & 1) != 0 && v106_.v108 != nullptr) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
  }
  if ((v78_.v78 & 1) != 0) {
    v59 = v78_.v79;
  }
  else {
    v59 = (unsigned __int64)(unsigned __int8)v78_.v78 >> 1;
  }
  v5 = v59 != 0;
  if (v59 == 0) {
    goto LABEL_109;
  }
  v60 = *(_QWORD*)(v1 + 16);
  v61 = *(_QWORD*)(v1 + 64);
  if ((v78_.v78 & 1) != 0) {
    v62 = (char*)v78_.v80;
  }
  else {
    v62 = (char*)&v78_.v78 + 1;
  }
  if (*(_BYTE*)(v1 + 96) == 1) {
    v63 = *(_QWORD*)(*(_QWORD*)(v60 + 40) + 32LL);
    if (v63 == 0) {
      goto LABEL_106;
    }
    v95_.v95 = *(_OWORD*)(v1 + 80);
    LOBYTE(v95_.v96) = 1;
  }
  else {
    v63 = *(_QWORD*)(*(_QWORD*)(v60 + 40) + 32LL);
    if (v63 == 0) {
      goto LABEL_106;
    }
    LOBYTE(v95_.v95) = 0;
    LOBYTE(v95_.v96) = 0;
  }
  StateAttack_d45200(v63, (__int64)v62, v59, (_DWORD*)(v1 + 52), v61,
                     (__int64)&v95_.v95);
LABEL_106:
  v64 = *(_QWORD*)(v1 + 248);
  for (i = *(_QWORD*)(v1 + 256); v64 != i; v64 += 64) {
    LODWORD(v95_.v95) = 0;
    v66 = *(_QWORD*)(v64 + 48);
    if (v66 == 0) {
      GameRoutine_60a310();
    }
    (*(void (**)(__int64, __int128*, __int64))(*(_QWORD*)v66 + 48LL))(
        v66, &v95_.v95, v1 + 32);
  }
LABEL_109:
  if ((v78_.v78 & 1) != 0 && v78_.v80 != 0) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
  }
  return v5;
}

__attribute__((swiftcall)) void game_zview_daaa40(PSEUDO_X8 x8_, __int64* a1,
                                                  __int64* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  long double v19;
  _QWORD v20[2];
  _QWORD v21[2];

  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
  v9 = *a1;
  v8 = a1[1];
  v6[1] = 0;
  v10 = (atomic_ullong*)(v6 + 1);
  v11 = v6;
  v6[10] = 0;
  v12 = v6 + 10;
  v6[2] = 0;
  *v6 = GameData_1fdf3e0;
  v6[8] = 0;
  v6[9] = 0;
  v6[11] = 0;
  v6[12] = 0;
  v6[13] = 0;
  v6[14] = 0;
  v6[15] = 0;
  v6[16] = 0;
  v6[17] = 0;
  v6[18] = 0;
  v6[19] = 0;
  v6[20] = 0;
  v6[21] = 0;
  v6[22] = 0;
  v6[23] = 0;
  v6[24] = 0;
  v6[28] = 0;
  v6[29] = 0;
  v6[30] = 0;
  v6[31] = 0;
  *((_DWORD*)v6 + 36) = 1065353216;
  v6[24] = 0;
  v6[25] = 0;
  v6[25] = 0;
  v6[26] = 0;
  v6[26] = 0;
  v6[27] = 0;
  v6[28] = 0;
  v6[29] = 0;
  v6[30] = 0;
  *(_QWORD*)((char*)v6 + 148) = 0;
  *(_QWORD*)((char*)v6 + 156) = 0;
  *(_QWORD*)((char*)v6 + 164) = 0;
  *(_QWORD*)((char*)v6 + 169) = 0;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  v14 = *a2;
  v13 = a2[1];
  v6[4] = v9;
  v6[5] = v8;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  v6[6] = v14;
  v6[7] = v13;
  if (v8 == 0) {
    goto LABEL_18;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock(v8);
  if (v15 == 0) {
    goto LABEL_17;
  }
  v16 = v15;
  if (v9 != 0) {
    LOBYTE(v12) = GameRoutine_d4e840(v9, v12);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != 0) {
      goto LABEL_11;
    }
  LABEL_17:
    result = std___1___shared_weak_count___release_weak_alt1(v8);
    goto LABEL_18;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  std___1___shared_weak_count___release_weak_alt1(v16);
  if (v9 == 0) {
    goto LABEL_17;
  }
LABEL_11:
  result = std___1___shared_weak_count___release_weak_alt1(v8);
  if (((unsigned __int8)v12 & 1) != 0) {
    v17 = v11[5];
    v20[0] = v11[4];
    v20[1] = v17;
    v21[0] = 0;
    if (v17 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                memory_order_relaxed);
      v18 = GameRoutine_d4eca0(v20, v21, *(long double*)&result);
      *(__n128*)&v19 = std___1___shared_weak_count___release_weak_alt1(v17);
      if ((v18 & 1) == 0) {
      LABEL_15:
        GameRoutine_dacb90(v11 + 4, v19);
        *a3 = v11 + 4;
        a3[1] = v11;
        {
          result;
          return;
        }
      }
    }
    else if ((GameRoutine_d4eca0(v20, v21, *(long double*)&result) & 1) == 0) {
      goto LABEL_15;
    }
    v11[9] = v21[0];
    goto LABEL_15;
  }
LABEL_18:
  *a3 = 0;
  a3[1] = 0;
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*, long double))(*v11 + 16LL))(v11,
                                                      *(long double*)&result);
    {
      std___1___shared_weak_count___release_weak_alt1(v11);
      return;
    }
  }
  {
    result;
    return;
  }
}

void game_zview_daac80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[2];
  _QWORD v13[2];
  __int64 v14[2];
  __int64 v15[2];
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  v2 = *(__int64**)(a1 + 400);
  v3 = *(__int64**)(a1 + 408);
  if (v2 != v3) {
    while (1) {
      v5 = v2[1];
      v15[0] = *v2;
      v15[1] = v5;
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
      }
      v6 = v2[3];
      v14[0] = v2[2];
      v14[1] = v6;
      if (v6 != 0) {
        break;
      }
      game_zview_daaa40((void*)(&v16_.v16), v15, v14);
      if (v5 != 0) {
        goto LABEL_9;
      }
    LABEL_10:
      v7 = v16_.v16;
      if (v16_.v16 == 0) {
        goto LABEL_23;
      }
      if ((*(_BYTE*)(a1 + 392) & 1) == 0) {
        if (*(float*)(a1 + 388) > 0x0.0p+0f) {
          *(_BYTE*)(v16_.v16 + 36) = 0;
          *(_DWORD*)(v7 + 32) = 2;
          v9 = v16_.v17;
          if (v16_.v17 != 0) {
            goto LABEL_24;
          }
          goto LABEL_4;
        }
        v8 = v16_.v17;
        *(_BYTE*)(v16_.v16 + 36) = 0;
        *(_DWORD*)(v7 + 32) = 0;
        v13[0] = v7;
        v13[1] = v8;
        if (v8 == 0) {
          game_zview_daaeb0_alt1(a1, v13);
          goto LABEL_4;
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        game_zview_daaeb0_alt1(a1, v13);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
        LABEL_22:
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v8);
        }
      LABEL_23:
        v9 = v16_.v17;
        if (v16_.v17 != 0) {
          goto LABEL_24;
        }
        goto LABEL_4;
      }
      v8 = v16_.v17;
      *(_BYTE*)(v16_.v16 + 36) = 0;
      *(_DWORD*)(v7 + 32) = 1;
      v12[0] = v7;
      v12[1] = v8;
      if (v8 != 0) {
        v1 &= 0xFFFFFFFFFFFF0000LL;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        game_zview_dab170_alt1(a1, v12, v1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          goto LABEL_22;
        }
        goto LABEL_23;
      }
      v1 &= 0xFFFFFFFFFFFF0000LL;
      game_zview_dab170_alt1(a1, v12, v1);
      v9 = v16_.v17;
      if (v16_.v17 != 0) {
      LABEL_24:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak_alt1(v9);
        }
      }
    LABEL_4:
      v2 += 4;
      if (v2 == v3) {
        v2 = *(__int64**)(a1 + 400);
        v3 = *(__int64**)(a1 + 408);
        goto LABEL_29;
      }
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    game_zview_daaa40((void*)(&v16_.v16), v15, v14);
    std___1___shared_weak_count___release_weak_alt1(v6);
    if (v5 == 0) {
      goto LABEL_10;
    }
  LABEL_9:
    std___1___shared_weak_count___release_weak_alt1(v5);
    goto LABEL_10;
  }
LABEL_29:
  while (v3 != v2) {
    v10 = *(v3 - 1);
    if (v10 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
    v11 = *(v3 - 3);
    if (v11 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v11);
    }
    v3 -= 4;
  }
  *(_QWORD*)(a1 + 408) = v2;
}

void game_zview_daaeb0(_QWORD* a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  int v6;
  __n128 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  _QWORD* v14;
  __int16 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v24;
  atomic_ullong* v25;
  _QWORD v26[2];
  _QWORD v27[2];
  _QWORD v28[2];
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  _QWORD v31[2];

  v2 = (_QWORD*)a1[26];
  if (v2 == nullptr) {
  LABEL_11:
    v10 = a2[1];
    v26[0] = *a2;
    v26[1] = v10;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      v7 = GameRoutine_dab2c0(a1, v26);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(
            v10, *(long double*)&v7);
        v7 = std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
    else {
      v7 = GameRoutine_dab2c0(a1, v26);
    }
    goto LABEL_20;
  }
  v4 = a2[1];
  v29_.v29 = *a2;
  v29_.v30 = v4;
  if (v4 != 0) {
    v5 = (__int64)a1;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v2 = (_QWORD*)a1[26];
    if (v2 == nullptr) {
      GameRoutine_60a310();
    }
  }
  else {
    v5 = (__int64)a1;
  }
  v6 =
      (unsigned int)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, __int64*))(
          *v2 + 48LL))(v2, v2, &v29_.v29);
  v8 = v29_.v30;
  v9 = v6;
  if (v29_.v30 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v29_.v30 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 <= 1) {
      goto LABEL_9;
    }
  LABEL_16:
    if (v9 == 3) {
      v24 = *a2;
      v12 = a2[1];
      v27[0] = v24;
      v27[1] = v12;
      if (v12 == 0) {
        game_zview_dab170_alt1(v5, v27, 257);
        return;
      }
      v13 = (atomic_ullong*)(v12 + 8);
      v14 = v27;
      v15 = 257;
    }
    else {
      if (v9 != 2) {
        goto LABEL_20;
      }
      v11 = *a2;
      v12 = a2[1];
      v28[0] = v11;
      v28[1] = v12;
      if (v12 == 0) {
        game_zview_dab170_alt1(v5, v28, 0);
        return;
      }
      v13 = (atomic_ullong*)(v12 + 8);
      v14 = v28;
      v15 = 0;
    }
    atomic_fetch_add_explicit(v13, 1u, memory_order_relaxed);
    game_zview_dab170_alt1(v5, v14, v15);
    if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
      return;
    }
  LABEL_42:
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
    return;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  v7 = std___1___shared_weak_count___release_weak_alt1(v8);
  if (v9 > 1) {
    goto LABEL_16;
  }
LABEL_9:
  if (v9 == 0) {
    return;
  }
  a1 = (_QWORD*)v5;
  if (v9 == 1) {
    goto LABEL_11;
  }
LABEL_20:
  v16 = *a2;
  v17 = *(_QWORD*)(*a2 + 40LL);
  if (v17 == 0) {
    return;
  }
  v18 = *(_QWORD*)(v17 + 32);
  v12 = a2[1];
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    v19 = *(_QWORD*)(v18 + 16);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v19 = *(_QWORD*)(v18 + 16);
  }
  v20 = *(_QWORD*)(*(_QWORD*)(v19 + 40) + 32LL);
  if (v20 != 0) {
    v21 = *(unsigned __int8*)(v19 + 28);
    v22 = *(_DWORD*)(v19 + 24);
    if (v21 == 1 && v22 == 4) {
      v31[0] = v16;
      v31[1] = v12;
      if (v12 == 0) {
        StateAttack_d45e00(v20, v31);
        return;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      StateAttack_d45e00(v20, v31);
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        v7 = std___1___shared_weak_count___release_weak_alt1(v12);
      }
      goto LABEL_38;
    }
  }
  if (v12 != 0) {
  LABEL_38:
    v25 = (atomic_ullong*)(v12 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        return;
      }
    }
    else {
      (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
          v12, *(long double*)&v7);
      std___1___shared_weak_count___release_weak_alt1(v12);
      if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        return;
      }
    }
    goto LABEL_42;
  }
}

void game_zview_dab170(_QWORD* a1, __int64** a2, __int16 a3)
{

#pragma clang fp contract(off)
  char v3;
  __int64* v5;
  __int64* v6;
  __n128 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  long double v12;
  __int64* v13[2];
  _QWORD v14[2];

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = a3;
  if ((a3 & 0x100) != 0) {
    v5 = *a2;
  }
  else {
    v5 = *a2;
    if (*(_DWORD*)(GameData_220f8a0 + 8) != 0) {
      v3 = 0;
    }
    else {
      v3 = *((_BYTE*)v5 + 36);
    }
  }
  v6 = a2[1];
  v14[0] = v5;
  v14[1] = v6;
  if (v6 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 1), 1u,
                              memory_order_relaxed);
    game_zview_dab4c0(a1, v14, v3 & 1),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v6 + 16))(v6),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  else {
    game_zview_dab4c0(a1, v14, v3 & 1),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v8 = *a2;
  v9 = (*a2)[5];
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 32);
    v11 = a2[1];
    v13[0] = v8;
    v13[1] = v11;
    if (v11 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 1), 1u,
                                memory_order_relaxed);
      *(__n128*)&v12 = GameRoutine_dab870(v10, v13, v3 & 1, v7),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*, long double))(*v11 + 16))(v11, v12),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v11),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else {
      GameRoutine_dab870(v10, v13, v3 & 1, v7),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
}

void game_zview_dab4c0(_QWORD* a1, _QWORD* a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __n128 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
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
  __int64* v32;
  __int64* v33;
  _QWORD v34[2];
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;
  int v37;

  v4 = a1[2];
  v5 = a2[1];
  v34[0] = *a2;
  v34[1] = v5;
  if (v5 == 0) {
    v8 = GameRoutine_d13680(v4, v34, a3 & 1);
    v10 = *a2;
    v9 = a2[1];
    if (v9 != 0) {
      goto LABEL_5;
    }
  LABEL_13:
    v17 = a1[34];
    v18 = a1[35];
    v11 = a1 + 34;
    v12 = a1 + 35;
    if (v17 == v18) {
      goto LABEL_22;
    }
    v32 = a1 + 35;
    v33 = a1 + 34;
    do {
      v35_.v35 = v10;
      v35_.v36 = 0;
      v37 = 0;
      v19 = *(_QWORD*)(v17 + 48);
      if (v19 == 0) {
        goto LABEL_48;
      }
      (*(void (**)(__int64, int*, __int64*, long double))(
          *(_QWORD*)v19 + 48LL))(v19, &v37, &v35_.v35, *(long double*)&v8);
      v20 = v35_.v36;
      if (v35_.v36 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        v8 = std___1___shared_weak_count___release_weak_alt1(v20);
      }
      v17 += 64;
    } while (v17 != v18);
  LABEL_20:
    v12 = v32;
    v11 = v33;
    if (v9 == 0) {
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                            memory_order_relaxed);
  v8 = GameRoutine_d13680(v4, v34, a3 & 1);
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
        v5, *(long double*)&v8);
    v8 = std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v10 = *a2;
  v9 = a2[1];
  if (v9 == 0) {
    goto LABEL_13;
  }
LABEL_5:
  v11 = a1 + 34;
  v12 = a1 + 35;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                            memory_order_relaxed);
  v13 = a1[34];
  v14 = a1[35];
  if (v13 != v14) {
    v32 = a1 + 35;
    v33 = a1 + 34;
    while (1) {
      v35_.v35 = v10;
      v35_.v36 = v9;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      v37 = 0;
      v15 = *(_QWORD*)(v13 + 48);
      if (v15 == 0) {
        break;
      }
      (*(void (**)(__int64, int*, __int64*, long double))(
          *(_QWORD*)v15 + 48LL))(v15, &v37, &v35_.v35, *(long double*)&v8);
      v16 = v35_.v36;
      if (v35_.v36 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        v8 = std___1___shared_weak_count___release_weak_alt1(v16);
      }
      v13 += 64;
      if (v13 == v14) {
        goto LABEL_20;
      }
    }
  LABEL_48:
    GameRoutine_60a310();
  }
LABEL_21:
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
    if ((a3 & 1) == 0) {
      return;
    }
    goto LABEL_23;
  }
LABEL_22:
  if ((a3 & 1) == 0) {
    return;
  }
LABEL_23:
  v22 = *a2;
  v21 = a2[1];
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                              memory_order_relaxed);
    v23 = *v11;
    v24 = *v12;
    if (v23 != v24) {
      while (1) {
        v35_.v35 = v22;
        v35_.v36 = v21;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                  memory_order_relaxed);
        v37 = 1;
        v25 = *(_QWORD*)(v23 + 48);
        if (v25 == 0) {
          goto LABEL_48;
        }
        (*(void (**)(__int64, int*, __int64*))(*(_QWORD*)v25 + 48LL))(
            v25, &v37, &v35_.v35);
        v26 = v35_.v36;
        if (v35_.v36 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak_alt1(v26);
        }
        v23 += 64;
        if (v23 == v24) {
          goto LABEL_40;
        }
      }
    }
  }
  else {
    v27 = *v11;
    v28 = *v12;
    if (v27 == *v12) {
      goto LABEL_42;
    }
    do {
      v35_.v35 = v22;
      v35_.v36 = 0;
      v37 = 1;
      v29 = *(_QWORD*)(v27 + 48);
      if (v29 == 0) {
        goto LABEL_48;
      }
      (*(void (**)(__int64, int*, __int64*))(*(_QWORD*)v29 + 48LL))(v29, &v37,
                                                                    &v35_.v35);
      v30 = v35_.v36;
      if (v35_.v36 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak_alt1(v30);
      }
      v27 += 64;
    } while (v27 != v28);
  LABEL_40:
    if (v21 == 0) {
    LABEL_42:
      v31 = a1[1];
      if (v31 != 0) {
        goto LABEL_43;
      }
      goto LABEL_46;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_42;
  }
  (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
  std___1___shared_weak_count___release_weak_alt1(v21);
  v31 = a1[1];
  if (v31 != 0) {
  LABEL_43:
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v31 + 16) + 8LL) + 387LL) & 0x40) ==
        0) {
      return;
    }
  }
LABEL_46:
  game_edea70(*(_QWORD*)(GameData_21f3cb0 + 912), 0x1.eb851e0000000p-4f,
              0x1.47ae140000000p-4f);
}

__n128 game_zview_dabc90(__int64 a1, __int64* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  bool v13;
  atomic_ullong* v14;
  __int64 v15;
  __int64 v16[2];
  __int64 v17[2];
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  _QWORD v20[2];

  v3 = a2[1];
  v17[0] = *a2;
  v17[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  v5 = a3[1];
  v16[0] = *a3;
  v16[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    game_zview_daaa40((void*)(&v18_.v18), v17, v16);
    result = std___1___shared_weak_count___release_weak_alt1(v5);
    if (v3 == 0) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  result = X8CALL_V0(__n128, game_zview_daaa40((void*)(&v18_.v18), v17, v16));
  if (v3 != 0) {
  LABEL_5:
    result = std___1___shared_weak_count___release_weak_alt1(v3);
  }
LABEL_6:
  v7 = v18_.v18;
  if (v18_.v18 == 0) {
    goto LABEL_27;
  }
  v8 = v18_.v19;
  *(_DWORD*)(v18_.v18 + 32) = 0;
  *(_BYTE*)(v7 + 36) = 0;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    v9 = *(_QWORD*)(a1 + 16);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v9 = *(_QWORD*)(a1 + 16);
  }
  v10 = *(_QWORD*)(*(_QWORD*)(v9 + 40) + 32LL);
  if (v10 == 0 ||
      ((v11 = *(unsigned __int8*)(v9 + 28), v12 = *(_DWORD*)(v9 + 24), v11 == 1)
           ? (v13 = v12 == 4)
           : (v13 = false),
       !v13)) {
    if (v8 == 0) {
      goto LABEL_27;
    }
    goto LABEL_22;
  }
  v20[0] = v7;
  v20[1] = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    StateAttack_d45e00(v10, v20);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak_alt1(v8);
    }
  LABEL_22:
    v14 = (atomic_ullong*)(v8 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_27;
      }
    }
    else {
      (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
          v8, *(long double*)&result);
      result = std___1___shared_weak_count___release_weak_alt1(v8);
      if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_27;
      }
    }
    (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
        v8, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak_alt1(v8);
  LABEL_27:
    v15 = v18_.v19;
    if (v18_.v19 == 0) {
      return result;
    }
    goto LABEL_28;
  }
  StateAttack_d45e00(v10, v20);
  v15 = v18_.v19;
  if (v18_.v19 == 0) {
    return result;
  }
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(
        v15, *(long double*)&result);
    return std___1___shared_weak_count___release_weak_alt1(v15);
  }
  return result;
}

_QWORD* game_zview_dac700(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v2 = a1[1] - *a1;
  v3 = (v2 >> 5) + 1;
  if (v3 >> 59 != 0) {
    GameRoutine_dac8a0();
  }
  v5 = a1[2] - *a1;
  if (v5 >> 4 > v3) {
    v3 = v5 >> 4;
  }
  v6 = (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFE0LL;
  v7 = 0x7FFFFFFFFFFFFFFLL;
  if (!v6) {
    v7 = v3;
  }
  if (v7 >> 59 != 0) {
    GameRoutine_60a210();
  }
  v8 = 32 * v7;
  v10 = fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32 * v7, 16, 0);
  v12 = a2[1];
  v13 = (_QWORD*)(v11 + v2);
  *v13 = *a2;
  v13[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
  }
  v14 = a2[3];
  v13[2] = a2[2];
  v13[3] = v14;
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  }
  v15 = v11 + v8;
  v16 = (_QWORD*)*a1;
  v17 = (_QWORD*)a1[1];
  v18 = v13 + 4;
  v19 = (_QWORD*)((char*)v13 + *a1 - (_QWORD)v17);
  if (v17 != (_QWORD*)*a1) {
    v20 = (_QWORD*)*a1;
    v21 = v19;
    do {
      *v21 = *v20;
      v21[1] = v20[1];
      *v20 = 0;
      v20[1] = 0;
      v21[2] = v20[2];
      v21[3] = v20[3];
      v20[2] = 0;
      v20[3] = 0;
      v20 += 4;
      v21 += 4;
    } while (v20 != v17);
    do {
      v22 = v16[3];
      if (v22 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v22);
      }
      v23 = v16[1];
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23);
      }
      v16 += 4;
    } while (v16 != v17);
    v16 = (_QWORD*)*a1;
  }
  *a1 = v19;
  a1[1] = v18;
  a1[2] = v15;
  if (v16 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v24);
  }
  return v18;
}

__n128 game_zview_daca70(__int64 a1)
{
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 192) & 1) != 0 && *(_QWORD*)(a1 + 208) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((*(_BYTE*)(a1 + 104) & 1) != 0 && *(_QWORD*)(a1 + 120) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0 && *(_QWORD*)(a1 + 96) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v6 = *(_QWORD*)(a1 + 56);
  if (v6 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = *(_QWORD*)(a1 + 40);
  if (v7 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v7);
  }
  return result;
}

void game_zview_103e8e0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  _QWORD** v4;
  float v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  float* v16;
  float* v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  float v28;
  float v29;
  bool v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  __int64 v44;
  float v45;
  float v46;
  float v48;
  float v49;
  float v50;
  float v51;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (__int64*)GameData_212dc38[0];
  if ((*(_BYTE*)(v2 + 876) & 1) != 0 || *(float*)(v2 + 868) > 0x0.0p+0f ||
      *(_BYTE*)(*(_QWORD*)GameData_212dc38[0] + 1056LL) != 1 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 56LL))(v2) & 1) == 0) {
    *(_QWORD*)(a1 + 80) = 0;
    *(_DWORD*)(a1 + 72) = 0;
  }
  v4 = *(_QWORD***)(a1 + 8);
  v5 = 0x0.0p+0f;
  v6 = *v4[110];
  if (v6 != 0 && GameData_220b6f0 != 0) {
    v7 = *(_QWORD**)(GameData_220b6f0 + 8);
    v8 = *(_QWORD**)(GameData_220b6f0 + 16);
    if (v7 != v8) {
      while (*v7 != v6) {
        v7 += 2;
        if (v7 == v8) {
          goto LABEL_15;
        }
      }
    }
    if (v7 != v8) {
      v5 = fminf(
          fmaxf((float)(sqrtf((float)(PSEUDO_UNFUSED(
                                  *(float*)(*(_QWORD*)(v6 + 16) + 672LL) *
                                  *(float*)(*(_QWORD*)(v6 + 16) + 672LL))) +
                              (float)(*(float*)(*(_QWORD*)(v6 + 16) + 668LL) *
                                      *(float*)(*(_QWORD*)(v6 + 16) + 668LL))) +
                        -0x1.0000000000000p+1f) *
                    0x1.0000000000000p-2f,
                0x0.0p+0f),
          0x1.0000000000000p+0f);
      v9 = (float)(fminf(fmaxf(v5, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                   0x1.99999a0000000p-1f) +
           0x1.99999a0000000p-3f;
      if (v5 > 0x0.0p+0f) {
        v5 = v9;
      }
    }
  }
LABEL_15:
  v10 = *(float*)(a1 + 68);
  v11 = fabsf(*(float*)(a1 + 36));
  if (v10 > v5) {
    v10 = v10 - v11;
    if (v10 >= v5) {
      goto LABEL_21;
    }
  LABEL_20:
    v10 = v5;
    goto LABEL_21;
  }
  if (v10 < v5) {
    v10 = v10 + v11;
    if (v10 > v5) {
      goto LABEL_20;
    }
  }
LABEL_21:
  v12 = *v3;
  if (v10 >= v5) {
    v5 = v10;
  }
  *(float*)(a1 + 68) = v5;
  if (*(_BYTE*)(v12 + 1056) != 1 ||
      (((__int64 (*)(_QWORD**))(*v4)[7])(v4) & 1) == 0) {
    return;
  }
  v13 = *(_QWORD*)(a1 + 8);
  v14 = *(float*)(v13 + 804);
  if (*(_BYTE*)(a1 + 65) != 1) {
    v18 = *(float*)(a1 + 72);
    v28 = *(float*)(a1 + 68) / 0x1.99999a0000000p-3f;
    if (v28 <= 0x1.0000000000000p+0f) {
      v29 = *(float*)(a1 + 68) / 0x1.99999a0000000p-3f;
    }
    else {
      v29 = 0x1.0000000000000p+0f;
    }
    v30 = v28 < 0x0.0p+0f;
    v31 = 0x1.4000000000000p+2f;
    if (!v30) {
      v31 = (float)((float)(0x1.0000000000000p+0f - v29) *
                    0x1.0000000000000p+2f) +
            0x1.0000000000000p+0f;
    }
    v32 = fabsf(*(float*)(a1 + 36) * v31);
    if (v18 <= 0x0.0p+0f) {
      if (v18 >= 0x0.0p+0f || (v18 = v18 + v32) <= 0x0.0p+0f) {
      LABEL_52:
        v22 = 0x0.0p+0f;
        *(float*)(a1 + 72) = v18;
        if (v14 > 0x0.0p+0f) {
          v33 = v14 * 0x1.0000000000000p-1f;
          if (v33 == 0x0.0p+0f) {
            v36 = 0x0.0p+0f;
          }
          else {
            v34 = v18 / v33;
            v35 = 0x1.0000000000000p+0f;
            if (v34 <= 0x1.0000000000000p+0f) {
              v35 = v34;
            }
            v30 = v34 < 0x0.0p+0f;
            v36 = 0x0.0p+0f;
            if (!v30) {
              v36 = v35;
            }
          }
          v22 = v36 * *(float*)(a1 + 84);
        }
        goto LABEL_61;
      }
    }
    else {
      v18 = v18 - v32;
      if (v18 >= 0x0.0p+0f) {
        goto LABEL_52;
      }
    }
    v18 = 0x0.0p+0f;
    goto LABEL_52;
  }
  v15 = 0x0.0p+0f;
  v17 = *(float**)(a1 + 40);
  v16 = *(float**)(a1 + 48);
  v18 = v14 * (float)((float)(fminf(fmaxf(fabsf(*(float*)(a1 + 76)), 0x0.0p+0f),
                                    0x1.0000000000000p+0f) *
                              0x1.99999a0000000p-1f) +
                      0x1.99999a0000000p-3f);
  if (*(float*)(a1 + 72) >= v18) {
    v18 = *(float*)(a1 + 72);
  }
  *(float*)(a1 + 72) = v18;
  if (v16 != v17) {
    v19 = 0x0.0p+0f;
    v20 = v16 - v17;
    do {
      v21 = *v17++;
      v19 = v19 + v21;
    } while (v17 != v16);
    v15 = v19 / (float)(unsigned __int64)v20;
  }
  v22 = fabsf(v15);
  if (*(float*)(a1 + 84) <= v22) {
    v23 = -0x1.0000000000000p+0f;
    if (*(_BYTE*)(a1 + 64) == 0) {
      v23 = 0x1.0000000000000p+0f;
    }
    *(float*)(a1 + 80) = v23;
    *(float*)(a1 + 84) = v22;
    v24 = 0x0.0p+0f;
    v25 = **(_QWORD**)(v13 + 880);
    if (v25 != 0 && GameData_220b6f0 != 0) {
      v26 = *(_QWORD**)(GameData_220b6f0 + 8);
      v27 = *(_QWORD**)(GameData_220b6f0 + 16);
      if (v26 != v27) {
        while (*v26 != v25) {
          v26 += 2;
          if (v26 == v27) {
            v24 = 0x0.0p+0f;
            goto LABEL_75;
          }
        }
      }
      v24 = 0x0.0p+0f;
      if (v26 != v27) {
        v24 =
            (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(v25 + 16) + 488LL) + 32LL) *
                    0x1.ca5dc20000000p+5f) +
            0x1.6800000000000p+7f;
      }
    }
  LABEL_75:
    v42 = fmodf_alt1(*(float*)(v13 + 832) - v24, 0x1.6800000000000p+8f);
    if (v42 >= 0x0.0p+0f) {
      v43 = v42 + 0x0.0p+0f;
    }
    else {
      v43 = (float)(v42 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
    }
    v44 = *(_QWORD*)(a1 + 8);
    if (v43 > 0x1.6800000000000p+7f) {
      v43 = v43 + -0x1.6800000000000p+8f;
    }
    v45 = fabsf(v43);
    if ((float)((float)((float)(v45 / 0x1.6800000000000p+7f) +
                        -0x1.0000000000000p-1f) +
                (float)((float)(v45 / 0x1.6800000000000p+7f) +
                        -0x1.0000000000000p-1f)) >= 0x0.0p+0f) {
      v46 = *(float*)(a1 + 80);
    }
    else {
      v46 = -*(float*)(a1 + 80);
    }
    *(float*)(a1 + 80) = v46;
    v48 = (float)(vabds_f32(*(float*)(v44 + 964), GameRoutine_d1fae0_alt1()) +
                  -0x1.e000000000000p+3f) /
          -0x1.4000000000000p+3f;
    if (v48 <= 0x1.0000000000000p+0f) {
      v49 = v48;
    }
    else {
      v49 = 0x1.0000000000000p+0f;
    }
    if (v48 >= 0x0.0p+0f) {
      v50 = v49;
    }
    else {
      v50 = 0x0.0p+0f;
    }
    *(float*)(a1 + 80) = powf(v50, 0x1.0000000000000p-1f) * *(float*)(a1 + 80);
    if (*(float*)(a1 + 72) <= 0x0.0p+0f) {
      goto LABEL_90;
    }
    return;
  }
LABEL_61:
  if (v18 <= 0x0.0p+0f) {
  LABEL_90:
    v37 = *(float*)(a1 + 84);
    v51 = fabsf(*(float*)(a1 + 36) /
                (float)((float)(fminf(fmaxf(*(float*)(a1 + 68), 0x0.0p+0f),
                                      0x1.0000000000000p+0f) +
                                0x1.0000000000000p+1f) /
                        *(float*)(a1 + 104)));
    if (v37 <= 0x0.0p+0f) {
      if (v37 >= 0x0.0p+0f) {
        goto LABEL_96;
      }
      v37 = v37 + v51;
      if (v37 <= 0x0.0p+0f) {
        goto LABEL_96;
      }
    }
    else {
      v37 = v37 - v51;
      if (v37 >= 0x0.0p+0f) {
        goto LABEL_96;
      }
    }
    v37 = 0x0.0p+0f;
    goto LABEL_96;
  }
  v37 = *(float*)(a1 + 84);
  v38 = (float)(vabds_f32(v37, v22) + -0x1.99999a0000000p-3f) /
        0x1.99999c0000000p-4f;
  v39 = 0x1.0000000000000p+0f;
  if (v38 <= 0x1.0000000000000p+0f) {
    v39 = v38;
  }
  v30 = v38 < 0x0.0p+0f;
  v40 = 0x0.0p+0f;
  if (!v30) {
    v40 = v39;
  }
  if (v40 > 0x0.0p+0f) {
    v41 = fabsf(*(float*)(a1 + 36) /
                (float)((float)((float)(0x1.0000000000000p+1f - v40) *
                                0x1.0000000000000p+3f) /
                        *(float*)(a1 + 104)));
    if (v37 <= v22) {
      if (v37 >= v22) {
        goto LABEL_96;
      }
      v37 = v37 + v41;
      if (v37 <= v22) {
        goto LABEL_96;
      }
    }
    else {
      v37 = v37 - v41;
      if (v37 >= v22) {
        goto LABEL_96;
      }
    }
    v37 = v22;
  LABEL_96:
    *(float*)(a1 + 84) = v37;
  }
}

__n128 game_zview_103ee50(__int64 a1)
{
  float v2;
  bool v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __n128 result;

  v2 = *(float*)(a1 + 80) * *(float*)(a1 + 84);
  if (*(_BYTE*)(*(_QWORD*)(a1 + 8) + 876LL) != 1) {
    v7 = *(float*)(a1 + 88);
    v8 = fabsf(*(float*)(a1 + 36));
    if (vabds_f32(v2, *(float*)(a1 + 76)) < 0x1.0000000000000p-23f) {
      if (v7 > 0x0.0p+0f) {
        v7 = v7 - v8;
        if (v7 >= 0x0.0p+0f) {
          goto LABEL_19;
        }
      }
      else if (v7 >= 0x0.0p+0f || (v7 = v7 + v8) <= 0x0.0p+0f) {
      LABEL_19:
        *(float*)(a1 + 88) = v7;
        v9 = powf_alt1(a1, v7, 0x1.0000000000000p-1f);
        v10 = *(float*)(a1 + 76);
        v11 = vabds_f32(v10, v2) / 0x1.99999a0000000p-3f;
        if (v11 > 0x1.0000000000000p+0f) {
          v11 = 0x1.0000000000000p+0f;
        }
        v12 = fabsf(
            (float)(v9 * (float)(*(float*)(a1 + 36) + *(float*)(a1 + 36))) *
            (float)((float)(fminf(fmaxf(v11 * v11, 0x0.0p+0f),
                                  0x1.0000000000000p+0f) *
                            0x1.fae1480000000p-1f) +
                    0x1.47ae140000000p-7f));
        if (v10 <= v2) {
          if (v10 >= v2 || (v10 = v10 + v12) <= v2) {
          LABEL_27:
            v2 = v10;
            *(float*)(a1 + 76) = v10;
            v3 = v10 < 0x0.0p+0f;
            if (v10 <= 0x0.0p+0f) {
              goto LABEL_3;
            }
          LABEL_28:
            v5 = *(float*)(a1 + 100);
            v6 = *(float*)(*(_QWORD*)(a1 + 8) + 800LL);
            goto LABEL_29;
          }
        }
        else {
          v10 = v10 - v12;
          if (v10 >= v2) {
            goto LABEL_27;
          }
        }
        v10 = v2;
        goto LABEL_27;
      }
      v7 = 0x0.0p+0f;
      goto LABEL_19;
    }
    if (v7 <= 0x1.0000000000000p+0f) {
      if (v7 >= 0x1.0000000000000p+0f) {
        goto LABEL_19;
      }
      v7 = v7 + v8;
      if (v7 <= 0x1.0000000000000p+0f) {
        goto LABEL_19;
      }
    }
    else {
      v7 = v7 - v8;
      if (v7 >= 0x1.0000000000000p+0f) {
        goto LABEL_19;
      }
    }
    v7 = 0x1.0000000000000p+0f;
    goto LABEL_19;
  }
  *(float*)(a1 + 76) = v2;
  *(_DWORD*)(a1 + 88) = 1065353216;
  v3 = v2 < 0x0.0p+0f;
  if (v2 > 0x0.0p+0f) {
    goto LABEL_28;
  }
LABEL_3:
  v4 = 0x0.0p+0f;
  if (v3) {
    v5 = *(float*)(a1 + 96);
    v6 = *(float*)(*(_QWORD*)(a1 + 8) + 796LL);
  LABEL_29:
    v4 = (float)(v2 * v6) * v5;
  }
  *(_DWORD*)(a1 + 16) = 0;
  *(float*)(a1 + 20) = v4;
  result = *(__n128*)(a1 + 16);
  LANES128(result).n128_u64[1] = 0;
  *(_OWORD*)(a1 + 16) = LANES128(result).n128_u64[0];
  return result;
}

float32x4_t game_zview_103fb80(__int64 a1)
{
  __int64 v2;
  float v3;
  _QWORD* v4;
  int8x16_t v5;
  float v6;
  float v7;
  float v8;
  unsigned int v9;
  float v10;
  float v11;
  __int64* v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  unsigned int v23;
  float32x4_t v24;
  __int64 v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  bool v49;
  float v50;
  float v51;
  float v52;
  float v53;
  int8x16_t v54;
  float32x4_t v55;
  float v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  int8x16_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t result;
  __int128 v80;
  __int128 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  int8x16_t v97;
  float v98;
  float v99;
  int8x16_t v100;
  int8x16_t v101;
  float32x4_t v102;
  struct {
    _QWORD v103[18];
    char v104;
  } v103_;
  float32x4_t v105[2];

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v82 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v82;
    __cxa_guard_release(&GameData_21a6130),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  math_Quat_FromYawPitchRoll((void*)(&v101),
                             *(float*)(*(_QWORD*)(a1 + 8) + 960LL) *
                                 0x1.1df46a0000000p-6f,
                             0x0.0p+0f, 0x0.0p+0f),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v6 = 0x1.0000000000000p+0f;
  if (*(_BYTE*)(v2 + 728) != 1) {
    goto LABEL_23;
  }
  v7 = *(float*)(v2 + 724);
  if (v7 == 0x0.0p+0f) {
    goto LABEL_23;
  }
  v8 = fabsf(v7);
  game_zview_d234c0((void*)(v105), *(_QWORD*)(a1 + 8)),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v9 = 0;
  v10 = (float)(v8 + 0x1.0000000000000p+0f) - v8;
  v11 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 1064LL);
  v95 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v96 = *((float*)GameData_212c190 + 1);
  if (v11 < 0x1.cccccc0000000p-2f) {
    v11 = 0x1.cccccc0000000p-2f;
  }
  v86 = v11;
  v94 = *((float*)GameData_212c188 + 1);
  v92 = -*(float*)GameData_212c190;
  v93 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v91 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v89 = -*(float*)GameData_212c188;
  v90 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v87 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 8);
  v88 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v12 = GameData_212ebd0[0];
  while (2) {
    v13 = 0;
    v85 = vcvts_n_f32_u32(v9, 2u);
    v98 =
        v8 + (float)(fminf(fmaxf(v85, 0x0.0p+0f), 0x1.0000000000000p+0f) * v10);
    do {
      v14 = *(float*)(*(_QWORD*)(a1 + 8) + 832LL);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_22110c8) != 0) {
        GameData_22110c0 = 0x3F80000000000000LL;
        __cxa_guard_release(&GameData_22110c8),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      v15 =
          (float)(PSEUDO_UNFUSED(v14 * 0x1.1df46a0000000p-6f)) +
          (float)((float)((float)((float)((float)(fminf(
                                                      fmaxf(
                                                          (float)v13 /
                                                              0x1.8000000000000p+2f,
                                                          0x0.0p+0f),
                                                      0x1.0000000000000p+0f) *
                                                  0x1.9999980000000p-1f) +
                                          0x1.99999a0000000p-4f) +
                                  0x1.0000000000000p-1f) *
                          0x1.921fb60000000p+1f) *
                  0x1.0000000000000p-1f);
      v16 = v15 + (float)(roundf(v15 * 0x1.45f3060000000p-3f) *
                          -0x1.921fb60000000p+2f);
      if (v16 <= 0x1.921fb60000000p+0f) {
        v17 = 0x1.0000000000000p+0f;
        if (v16 >= -0x1.921fb60000000p+0f) {
          goto LABEL_14;
        }
        v16 = -0x1.921fb60000000p+1f - v16;
      }
      else {
        v16 = 0x1.921fb60000000p+1f - v16;
      }
      v17 = -0x1.0000000000000p+0f;
    LABEL_14:
      v18 = v16 * v16;
      v19 = *v12;
      v20 =
          v16 *
          (float)((float)((float)(v90 +
                                  (float)((float)(v95 +
                                                  (float)((float)(v91 +
                                                                  (float)((float)(v96 +
                                                                                  (float)(v92 *
                                                                                          (float)(v16 *
                                                                                                  v16))) *
                                                                          (float)(v16 *
                                                                                  v16))) *
                                                          (float)(v16 * v16))) *
                                          (float)(v16 * v16))) *
                          (float)(v16 * v16)) +
                  0x1.0000000000000p+0f);
      v21 =
          v17 *
          (float)((float)((float)(v87 +
                                  (float)((float)(v93 +
                                                  (float)((float)(v88 +
                                                                  (float)((float)(v94 +
                                                                                  (float)(v89 *
                                                                                          v18)) *
                                                                          v18)) *
                                                          v18)) *
                                          v18)) *
                          v18) +
                  0x1.0000000000000p+0f);
      *(float*)&v22 =
          (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v20)) +
          (float)(*(float*)&GameData_22110c0 * v21);
      *(float*)&v23 =
          (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v21)) -
          (float)(*(float*)&GameData_22110c0 * v20);
      LANES128(v24).n128_u64[0] = v22;
      LANES128(v24).n128_u64[1] = v23;
      v102 = vaddq_f32(v105[0], vmulq_n_f32(v24, v98));
      v4 = X8CALL_X0(void*,
                     game_zview_d163f0_alt1((void*)(v103_.v103), v19, v105,
                                            &v102, 0x100000000LL, 0, v86));
      if (v103_.v104 == 1) {
        v6 = 0x1.0000000000000p+0f;
        if (v85 <= 0x1.0000000000000p+0f) {
          v6 = v85;
        }
        goto LABEL_23;
      }
      ++v13;
    } while (v13 != 7);
    v10 = (float)(v8 + 0x1.0000000000000p+0f) - v8;
    if (++v9 != 4) {
      continue;
    }
    break;
  }
  v6 = 0x1.0000000000000p+0f;
LABEL_23:
  v25 = *(_QWORD*)(a1 + 8);
  PSEUDO_LOW_LANE128(v5, n128_f32, v6 * *(float*)(v2 + 724));
  if ((*(_BYTE*)(v25 + 876) & 1) != 0 || (*(_BYTE*)(a1 + 64) & 1) != 0) {
    *(_DWORD*)(a1 + 68) = LANES128(v5).n128_u32[0];
    v33 = 0x0.0p+0f;
    goto LABEL_72;
  }
  v26 = (float)(v3 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
  v27 = *(float*)(a1 + 68);
  if (v27 >= LANES128(v5).n128_f32[0]) {
    if (*(float*)(a1 + 72) > 0x0.0p+0f) {
      *(_DWORD*)(a1 + 72) = 1065353216;
    }
    v34 = 0x1.99999a0000000p-1f;
  }
  else {
    v28 = 0x0.0p+0f;
    v29 = **(_QWORD**)(v25 + 880);
    if (v29 != 0) {
      v30 = *GameData_212eba8[0];
      if (*GameData_212eba8[0] != 0) {
        v31 = *(_QWORD**)(v30 + 8);
        v32 = *(_QWORD**)(v30 + 16);
        if (v31 != v32) {
          while (*v31 != v29) {
            v31 += 2;
            if (v31 == v32) {
              v28 = 0x0.0p+0f;
              goto LABEL_39;
            }
          }
        }
        v28 = 0x0.0p+0f;
        if (v31 != v32) {
          v28 = fminf(
              fmaxf(
                  (float)(sqrtf(
                              (float)(PSEUDO_UNFUSED(
                                  *(float*)(*(_QWORD*)(v29 + 16) + 672LL) *
                                  *(float*)(*(_QWORD*)(v29 + 16) + 672LL))) +
                              (float)(*(float*)(*(_QWORD*)(v29 + 16) + 668LL) *
                                      *(float*)(*(_QWORD*)(v29 + 16) +
                                                668LL))) +
                          -0x1.0000000000000p+1f) *
                      0x1.0000000000000p-2f,
                  0x0.0p+0f),
              0x1.0000000000000p+0f);
          v35 = (float)(fminf(fmaxf(v28, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                        0x1.99999a0000000p-1f) +
                0x1.99999a0000000p-3f;
          if (v28 > 0x0.0p+0f) {
            v28 = v35;
          }
        }
      }
    }
  LABEL_39:
    v36 = *(float*)(a1 + 72);
    v37 = fabsf(v26 / (float)((float)(fminf(fmaxf(v28, 0x0.0p+0f),
                                            0x1.0000000000000p+0f) *
                                      0x1.7333340000000p+1f) +
                              0x1.99999a0000000p-4f));
    if (v36 <= 0x0.0p+0f) {
      if (v36 >= 0x0.0p+0f) {
        goto LABEL_45;
      }
      v36 = v36 + v37;
      if (v36 <= 0x0.0p+0f) {
        goto LABEL_45;
      }
    }
    else {
      v36 = v36 - v37;
      if (v36 >= 0x0.0p+0f) {
        goto LABEL_45;
      }
    }
    v36 = 0x0.0p+0f;
  LABEL_45:
    *(float*)(a1 + 72) = v36;
    v34 = 0x0.0p+0f;
    if (v36 <= 0x0.0p+0f) {
      v34 = 0x1.47ae160000000p-1f;
    }
  }
  v38 = 0x0.0p+0f;
  v39 = 0x0.0p+0f;
  v40 = **(_QWORD**)(v25 + 880);
  if (v40 != 0) {
    v41 = *GameData_212eba8[0];
    if (*GameData_212eba8[0] != 0) {
      v42 = *(_QWORD**)(v41 + 8);
      v43 = *(_QWORD**)(v41 + 16);
      if (v42 != v43) {
        while (*v42 != v40) {
          v42 += 2;
          if (v42 == v43) {
            v39 = 0x0.0p+0f;
            goto LABEL_56;
          }
        }
      }
      v39 = 0x0.0p+0f;
      if (v42 != v43) {
        v39 = fminf(
            fmaxf(
                (float)(sqrtf(
                            (float)(PSEUDO_UNFUSED(
                                *(float*)(*(_QWORD*)(v40 + 16) + 672LL) *
                                *(float*)(*(_QWORD*)(v40 + 16) + 672LL))) +
                            (float)(*(float*)(*(_QWORD*)(v40 + 16) + 668LL) *
                                    *(float*)(*(_QWORD*)(v40 + 16) + 668LL))) +
                        -0x1.0000000000000p+1f) /
                    0x1.c000000000000p+2f,
                0x0.0p+0f),
            0x1.0000000000000p+0f);
        v44 = (float)(fminf(fmaxf(v39, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                      0x1.99999a0000000p-1f) +
              0x1.99999a0000000p-3f;
        if (v39 > 0x0.0p+0f) {
          v39 = v44;
        }
      }
    }
  }
LABEL_56:
  v99 = LANES128(v5).n128_f32[0];
  v45 = v34 *
        (float)((float)(fminf(fmaxf(v39, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                        -0x1.0000000000000p-1f) +
                0x1.0000000000000p+0f);
  v46 = *(float*)(v2 + 724);
  if ((float)(v46 * 0x1.0000000000000p-1f) != 0x0.0p+0f) {
    v47 = vabds_f32(v27, v46) / (float)(v46 * 0x1.0000000000000p-1f);
    v48 = v47 <= 0x1.0000000000000p+0f ? v47 : 0x1.0000000000000p+0f;
    v49 = v47 < 0x0.0p+0f;
    v38 = 0x0.0p+0f;
    if (!v49) {
      v38 = v48;
    }
  }
  v50 = v45 *
        (float)((float)(fminf(fmaxf(powf_alt1(v4, v38, 0x1.0000000000000p-1f),
                                    0x0.0p+0f),
                              0x1.0000000000000p+0f) *
                        0x1.99999a0000000p-1f) +
                0x1.99999a0000000p-3f),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v51 = *(float*)(a1 + 68);
  v52 = fabsf(v26 * v50);
  if (v51 <= v99) {
    v53 = *(float*)(a1 + 68);
    if (v51 >= v99) {
      goto LABEL_68;
    }
    v53 = v51 + v52;
    if ((float)(v51 + v52) <= v99) {
      goto LABEL_68;
    }
    goto LABEL_67;
  }
  v53 = v51 - v52;
  if ((float)(v51 - v52) < v99) {
  LABEL_67:
    v53 = v99;
  }
LABEL_68:
  *(float*)(a1 + 68) = v53;
  if (*(float*)(v2 + 724) >= v53) {
    PSEUDO_LOW_LANE128(v5, n128_f32, v53);
  }
  else {
    PSEUDO_LOW_LANE128(v5, n128_u32, *(_DWORD*)(v2 + 724));
  }
  v33 = 0x1.0000000000000p+0f;
  *(_DWORD*)(a1 + 68) = LANES128(v5).n128_u32[0];
  if (LANES128(v5).n128_f32[0] < v51) {
  LABEL_72:
    *(float*)(a1 + 72) = v33;
  }
  v54 = v101;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v97 = v54;
    v100 = v5;
    v83 = __cxa_guard_acquire(&GameData_21a6130),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v54 = v97;
    v5 = v100;
    if (v83 != 0) {
      v84 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v84;
      __cxa_guard_release(&GameData_21a6130),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v54 = v97;
      v5 = v100;
    }
  }
  v55 = COERCE_AS(float32x4_t, GameData_21a6120);
  if (*(_BYTE*)(v2 + 736) == 1) {
    v56 = *(float*)(v2 + 732);
  }
  else {
    v57 = **(_QWORD**)(*(_QWORD*)(a1 + 8) + 880LL);
    if (v57 == 0) {
      goto LABEL_84;
    }
    v58 = *GameData_212eba8[0];
    if (*GameData_212eba8[0] == 0) {
      goto LABEL_84;
    }
    v59 = *(_QWORD**)(v58 + 8);
    v60 = *(_QWORD**)(v58 + 16);
    if (v59 != v60) {
      while (*v59 != v57) {
        v59 += 2;
        if (v59 == v60) {
          goto LABEL_84;
        }
      }
    }
    if (v59 != v60) {
      v56 = *(float*)(v57 + 556);
    }
    else {
    LABEL_84:
      v56 = 0x1.6666660000000p+0f;
      if (*GameData_212eda8[0] == 0) {
        v56 = 0x0.0p+0f;
      }
    }
  }
  LANES128(v61).n128_u64[0] = LANES128(v54).n128_u64[0];
  LANES128(v62).n128_u64[0] = LANES128(v5).n128_u32[0];
  LANES128(v63).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v65 = vmulq_f32(v54, COERCE_AS(float32x4_t, GameData_1a829d0));
  PSEUDO_LOW_LANE128(v5, n128_u64, LANES128(v62).n128_u64[0]);
  LANES128(v61).n128_u64[1] = LANES128(v63).n128_u64[0];
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v67).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v63).n128_u64[1] = LANES128(v64).n128_u64[0];
  LANES128(v64).n128_u64[1] = LANES128(v54).n128_u64[0];
  LANES128(v68).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v66).n128_i8[8] =
      vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v69).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v68).n128_u64[1] = LANES128(v67).n128_u64[0];
  LANES128(v67).n128_u64[1] = LANES128(v62).n128_u32[0];
  *(int32x2_t*)&LANES128(v69).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v65).n128_u64[0]), 1);
  LANES128(v62).n128_u64[1] = LANES128(v68).n128_u64[0];
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v70).n128_u64[1] = LANES128(v70).n128_u64[0];
  *(int8x8_t*)&LANES128(v71).n128_i8[8] =
      vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v72 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v65, v70),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v62, v71)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v67, v69)),
                  v66, v68);
  LANES128(v73).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v73).n128_i8[8] =
      vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  *(int32x2_t*)&LANES128(v74).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 1);
  v75 = vmulq_f32(v64, v74);
  LANES128(v64).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v64).n128_i8[8] =
      vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v76 = vmulq_f32(v61, v64);
  LANES128(v61).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v61).n128_u64[1] = LANES128(v61).n128_u64[0];
  v77 = vmlaq_f32(vmlaq_f32(vmulq_f32(v72, v61),
                            COERCE_AS(float32x4_t, GameData_1a83800), v76),
                  COERCE_AS(float32x4_t, GameData_1a83800), v75);
  LANES128(v75).n128_u32[0] = 0;
  LANES128(v75).n128_f32[1] = v56;
  v78 = vmlsq_f32(v77, v73, v63);
  *(_QWORD*)(a1 + 80) = LANES128(v78).n128_u64[0];
  result = vaddq_f32(v55, COERCE_AS(float32x4_t, LANES128(v75).n128_u64[0]));
  *(_QWORD*)(a1 + 96) = LANES128(result).n128_u64[0];
  v80 = *(_OWORD*)(a1 + 80);
  v81 = *(_OWORD*)(a1 + 96);
  *((_QWORD*)&v80 + 1) = LANES128(v78).n128_u32[2];
  *((_QWORD*)&v81 + 1) = LANES128(result).n128_u32[2];
  *(_OWORD*)(a1 + 80) = v80;
  *(_OWORD*)(a1 + 96) = v81;
  return result;
}

#pragma GCC visibility pop
