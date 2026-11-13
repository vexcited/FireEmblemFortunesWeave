#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* ObjectBuildCreate_c2c570(__int64, _QWORD*);
_DWORD* GameRoutine_b86ea0(_DWORD* result, _QWORD*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_66f7e0(_QWORD* result, int, unsigned __int64);
_QWORD* GameRoutine_a853b0(__int64);
_QWORD* GameRoutine_b36540(_QWORD* result, __int64);
_QWORD* GameRoutine_bdff40(_QWORD* result, unsigned __int64, __int64, __int64);
_QWORD* GameRoutine_bebc00(float*, unsigned __int8*, __int64**);
_QWORD* GameRoutine_bec240(float*, unsigned __int8*, __int64**);
_QWORD* GameRoutine_c00fc0(__int64, __int64, __int64**, int*);
_QWORD* GameRoutine_c24db0(__int64, __int64, unsigned __int64);
_QWORD* ObjectBuildCreate_c29c40(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_a5cb20(PSEUDO_X8, __int64, __int64,
                                                   __int64);
__attribute__((swiftcall)) void GameRoutine_a97000(PSEUDO_X8, _QWORD*, int);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__attribute__((swiftcall)) void Layout_c1d100(PSEUDO_X8, __int64 result,
                                              unsigned __int64, __int64,
                                              unsigned __int64);
__attribute__((swiftcall)) void Model_a66f60(PSEUDO_X8, __int64 result, __int64,
                                             __int64);
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8,
                                                        float32x4_t*);
__attribute__((swiftcall)) void wld_c2c890_alt1(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD) __asm__("wld_c2c890");
__attribute__((swiftcall)) void wld_map_c23be0(PSEUDO_X8, __int64, __int64,
                                               unsigned __int64);
__int64* GameRoutine_1989340(__int64* result, _QWORD*, __int64,
                             unsigned __int64);
__int64* GameRoutine_bebfa0(__int64* result, unsigned __int64);
__int64* GameRoutine_bec5e0(__int64* result, unsigned __int64);
__int64* GameRoutine_c0b080(_QWORD*, _QWORD*);
__int64* GameRoutine_c0b220(_QWORD*, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Components_a87260(_QWORD, _QWORD, _QWORD);
__int64 Components_a878a0(_QWORD, _QWORD);
__int64 DecalModule_a93060(__int64*, __int64);
__int64 ElfFile_631220(__int64*, __int64);
__int64 ElfFile_631220_alt1(_QWORD, _QWORD) __asm__("ElfFile_631220");
__int64 GameRoutine_14a0820(_QWORD*);
__int64 GameRoutine_14a0af0(_QWORD*, __int64);
__int64 GameRoutine_1988ea0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1989b20(__int64 result, __int64, __int64, _QWORD*);
__int64 GameRoutine_198ad80(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ab90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0abb0(_QWORD);
__int64 GameRoutine_1a0abc0(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_55c130(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_5fc1f0_alt1(_QWORD) __asm__("GameRoutine_5fc1f0");
__int64 GameRoutine_5fcb50(__int64);
__int64 GameRoutine_5fcb70(_QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_64df20_alt1(_QWORD, _QWORD, _QWORD,
                                long double) __asm__("GameRoutine_64df20");
__int64 GameRoutine_66f720(__int64 result, int, char);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a81a70(__int64, unsigned __int64);
__int64 GameRoutine_a81a70_alt1(_QWORD, _QWORD) __asm__("GameRoutine_a81a70");
__int64 GameRoutine_a85710(__int64 result);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_a8c380(_QWORD, _QWORD);
__int64 GameRoutine_ad7390_alt1(_QWORD) __asm__("GameRoutine_ad7390");
__int64 GameRoutine_c0cd20(__int64, __int64, __int64*);
__int64 GameRoutine_c0ea80(void);
__int64 GameRoutine_c14e30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c156c0(_QWORD, _QWORD);
__int64 GameRoutine_c156c0_alt1(_QWORD*, int) __asm__("GameRoutine_c156c0");
__int64 GameRoutine_c15840(_QWORD, _QWORD, _QWORD, _QWORD, long double,
                           long double, long double, long double);
__int64 GameRoutine_c15840_alt1(__int64, _QWORD*, int,
                                char) __asm__("GameRoutine_c15840");
__int64 GameRoutine_c15960(_QWORD);
__int64 GameRoutine_c15960_alt1(__int64) __asm__("GameRoutine_c15960");
__int64 GameRoutine_c15dc0(__int64, __int64, __int64, __int64);
__int64 GameRoutine_c15dc0_alt1(__int64, __int64, __int64,
                                __int64*) __asm__("GameRoutine_c15dc0");
__int64 GameRoutine_c16a20(void);
__int64 GameRoutine_c17680(__int64, __int64*, int, float32x4_t*, __int64,
                           __int64, __int64);
__int64 GameRoutine_c1a5a0(__int64);
__int64 GameRoutine_c24eb0(_QWORD, _QWORD);
__int64 GameRoutine_c28e40(__int64, char);
__int64 GameRoutine_c2c4c0(__int64 result);
__int64 GameRoutine_c30250(_QWORD);
__int64 GameRoutine_c30400(_QWORD, _QWORD);
__int64 GameRoutine_c30530(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c30780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c309e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_c34200(__int64, _QWORD*, unsigned __int8*, unsigned int*,
                           __int64);
__int64 GameRoutine_c41bf0(__int64*, __int64, __int64, __int64, __int64,
                           __int64);
__int64 InstancedObjectCtrlModule_193b8a0(_QWORD, _QWORD);
__int64 LODModule_a98a50(__int64 result, __int64);
__int64 LODModule_a98be0(__int64 result, __int64, __int64, unsigned int);
__int64 LightingAnimModule_c687a0(__int64, char);
__int64 LodModule_a97380(__int64 result, __int64);
__int64 LodModule_a988a0(_QWORD, _QWORD, _QWORD);
__int64 LodModule_a988a0_alt1(__int64 result, __int64,
                              __int64*) __asm__("LodModule_a988a0");
__int64 MainRenderTask_bb8650(__int64 result, __int64*);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 Manager_c445f0(__int64 result, __int64, unsigned __int64, __int64,
                       unsigned __int64);
__int64 Manager_c46910(__int64 result);
__int64 Manager_c477c0(__int64 result);
__int64 MapAnimModule_c08540(__int64, unsigned __int8*, unsigned __int64,
                             unsigned int, float);
__int64 MapObjectModule_a7c8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD);
__int64 MapObjectModule_a7d8a0(__int64, _QWORD*, long double);
__int64 MaterialAnimModule_be6340(__int64 result);
__int64 MaterialAnimModule_beb940(__int64 result);
__int64 ModelModule_a7f2a0(__int64, __int64*, int, float32x4_t*, char);
__int64 ObjectBuildCreate_c284a0(_QWORD*, _DWORD*, __int64, char);
__int64 ObjectBuildCreate_c2c6e0(__int64 result);
__int64 ObjectBuildCreate_c31e60(__int64 result);
__int64 ObjectBuildCreate_c32110(__int64);
__int64 ObjectBuildCreate_c32350(__int64 result);
__int64 Registration_a5aca0(__int64);
__int64 ResFile_5e5f00(_QWORD);
__int64 ResFile_5e5f00_alt1(__int64) __asm__("ResFile_5e5f00");
__int64 RigidDynamic_14a0140(__int64*, __int64, float, __int64, __int64,
                             __int64);
__int64 SpineModel_64dde0_alt1(_QWORD, _QWORD, _QWORD,
                               long double) __asm__("SpineModel_64dde0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 g3d_a6c880(__int64*, __int64, unsigned __int64);
__int64 gfxa_MainRenderTask_initialize1(__int64, __int64, __int64, __int64*);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD) __asm__("memcmp");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 memset_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    _QWORD) __asm__("memset");
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 std___1_ios_base_clear(void);
__int64 std___1_ios_base_init(_QWORD, _QWORD);
__int64 std___1_locale_Destroy_locale(_QWORD);
__int64 std___1_locale_locale_1a0a220(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 updateMassAndInertia(__int64*, __int64, unsigned int, int*, char);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_DecalModule_AddDecal(_QWORD*, _QWORD*, __int64);
__int64 wld_GrassLoader_GrassLoader(__int64, __int64, __int64, __int64);
__int64 wld_MapCrowdLoader_MapCrowdLoader(unsigned __int64, __int64,
                                          unsigned __int64);
__int64 wld_c2faa0_alt1(_QWORD, _QWORD) __asm__("wld_c2faa0");
__int64 wld_map_MapEffectLoader_LoadAsync(__int64, __int64, __int64);
__int64 wld_map_c23d20(__int64, __int64, unsigned __int64);
__int64 wld_map_c24890(__int64, __int64, unsigned __int64);
__int64 wld_map_c24890_alt1(_QWORD*, __int64,
                            unsigned __int64) __asm__("wld_map_c24890");
bool GameRoutine_ad7390(_QWORD*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
double cos(double);
double cos_alt1(_QWORD, double) __asm__("cos");
double sin(double);
extern _QWORD GameData_21fdd90[];
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN* GameData_212d308;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea18;
extern _UNKNOWN* GameData_212eac0;
extern _UNKNOWN* GameData_212eae0;
extern _UNKNOWN GameData_2167560;
extern _UNKNOWN GameData_2167580;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21ec980;
extern _UNKNOWN GameData_21f4d48;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN GameData_22031a0;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fc0c88[])();
extern __int64 (*wld_Camera_vtable[])();
extern __int64 (*wld_GroundModule_vtable[])();
extern __int64 (*wld_InstancedObjectCtrlModule_vtable[])();
extern __int64 (*wld_MyContactCallback_vtable[])();
extern __int64* GameData_212c838;
extern __int64* GameData_212e740[2];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212e380;
extern __int64 GameData_212ead8;
extern __int64 GameData_212eae8;
extern __int64 GameData_212eaf0;
extern __int64 GameData_2131678;
extern __int64 GameData_2132398[3];
extern __int64 GameData_21c6978;
extern __int64 GameData_21fdde0;
extern __int64 GameData_21fdde8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern char GameData_1a9f09e;
extern char GameData_1af0f9a[4];
extern int* GameData_212d300;
extern int* GameData_212df08;
extern int* GameData_212eab8;
extern int GameData_2167624;
extern int GameData_21ec978;
extern int GameData_21f4d44;
extern int GameData_2203198;
long double GameRoutine_a7ad80(float32x4_t*, float32x4_t*, __int64);
unsigned __int64 GameRoutine_6360e0(__int64, __int64, unsigned __int64, char,
                                    int);
unsigned __int64 GameRoutine_a5b320(_QWORD*, __int64, unsigned __int64);
unsigned __int64 GameRoutine_a5b760(_QWORD*, __int64, unsigned __int64, __int64,
                                    unsigned __int64, char*, char);
unsigned __int64 GameRoutine_c15010(__int64, unsigned __int8*, __int64,
                                    unsigned __int64);
unsigned int* GameRoutine_1989130(unsigned int* result, __int64);
void GameRoutine_b3aee0(float32x4_t*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_64aa00(long double, long double,
                                                  long double, long double);
void __attribute__((noreturn)) GameRoutine_66df80(_QWORD);
void __attribute__((noreturn)) GameRoutine_81e570();
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
void __attribute__((noreturn)) GameRoutine_a61160();
void __attribute__((noreturn)) GameRoutine_c31680(void);
void __attribute__((noreturn)) GameRoutine_c31e20();
void __attribute__((noreturn)) GameRoutine_c31e40();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a250(const char*);
void __attribute__((noreturn))
String_60a250_alt1(_QWORD) __asm__("String_60a250");
void wld_a5ef20(__int64 a1);
void wld_a5f660(__int64 a1, char a2);
long double wld_a7ab80(__int64 a1, __int64 a2);
long double wld_a7fab0(__int64 a1);
void wld_a7fda0(__int64 a1, _DWORD* a2);
__attribute__((swiftcall)) void wld_a85bd0(PSEUDO_X8 x8_, __int64* a1,
                                           __int64* a2);
__attribute__((swiftcall)) void wld_bd3a40(PSEUDO_X8 x8_, __int64 a1,
                                           __int64* a2);
unsigned __int64 wld_be6480_alt1(unsigned __int64 result, __int64 a2,
                                 unsigned __int64 a3,
                                 float a4) __asm__("wld_be6480");
float wld_c0ed40(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
unsigned __int64 wld_c267a0(__int64 a1, __int64 a2, unsigned __int8* a3,
                            char a4, char a5, __int64 a6, unsigned __int64 a7);
__int64 wld_c2a300_alt1(__int64 result) __asm__("wld_c2a300");
__int64** wld_c2bb00_alt1(__int64** result) __asm__("wld_c2bb00");
float32x4_t* wld_c2c0c0(float32x4_t* result);
__attribute__((swiftcall)) void wld_c2c890(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2, unsigned __int64 a3);
__int64 wld_c2caa0(__int64 a1, char a2, char a3);
__int64 wld_c2faa0(__int64 a1, unsigned __int64 a2);
void wld_c32fa0(__int64 a1, float32x4_t** a2);
__int64* wld_c3abd0(_QWORD* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                    unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                    __int64 a8, __int64 a9, unsigned __int64 a10);
__int64 wld_c40980_alt2(__int64* a1) __asm__("wld_c40980");
__int64 wld_c43d90_alt1(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                        unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                        int a8, int a9) __asm__("wld_c43d90");
_DWORD* wld_c44120(__int64* a1);
__int64 wld_d28c30(__int64 result, char a2);
_QWORD* GameRoutine_19387a0(_QWORD* result, unsigned __int64, _QWORD*);
_QWORD* GameRoutine_b7fd60(__int64*, __int64, int, __int64*);
_QWORD* GameRoutine_b82060(__int64);
__int64** GameRoutine_a86500(__int64** result);
__int64 GfxLoader_c3f900(__int64, __int64);
extern __int128 GameData_1a82d30;
extern __int64 (*GameData_1fc0cd8[])();
extern __int64* GameData_212e468;
extern __int64 GameData_212e408[7];
extern __int64 GameData_212e438;
extern __int64 GameData_2132378;
extern __int64 GameData_2132388[5];
extern __int64 GameData_21323b8;
extern char* GameData_2132380;
extern char* GameData_21323c0;
void __attribute__((noreturn)) GameRoutine_a7f910(void);
void __attribute__((noreturn)) GameRoutine_a864d0();
_QWORD* wld_a7f580(_QWORD* result, unsigned __int64 a2, long double a3);
__int64 wld_a82d00(__int64 a1, __int64 a2);
_QWORD* MaterialAnimModule_bebc00(float*, unsigned __int8*, __int64**);
_QWORD* MaterialAnimModule_bec240(float*, unsigned __int8*, __int64**);
__attribute__((swiftcall)) void
Model_a66f60_alt1(PSEUDO_X8, __int64, __int64,
                  unsigned __int64) __asm__("Model_a66f60");
__int64* GameRoutine_c0b080_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_c0b080");
__int64* GameRoutine_c0b220_alt1(_QWORD*,
                                 __int64*) __asm__("GameRoutine_c0b220");
__int64* GameRoutine_c0ea80_alt1(_QWORD*,
                                 const char**) __asm__("GameRoutine_c0ea80");
__int64 ElfFile_631220_alt2(__int64*, const char*) __asm__("ElfFile_631220");
__int64 GameHr_a988a0(__int64 result, __int64, __int64*);
__int64 GameHr_c08540(__int64, __int64, __int64, unsigned int, float);
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_a5aca0(__int64);
void GameHr_a86500(__int64*);
void GameRoutine_19387a0_alt1(__int64*, unsigned __int64,
                              _QWORD*) __asm__("GameRoutine_19387a0");
void GameRoutine_a5b760_alt1(_QWORD*, __int64, unsigned __int64, __int64,
                             unsigned __int64, char*,
                             char) __asm__("GameRoutine_a5b760");
void GameRoutine_b82060_alt1(__int64) __asm__("GameRoutine_b82060");
void GameRoutine_bdff40_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bdff40");
void GameRoutine_bebfa0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bebfa0");
void GameRoutine_bec5e0_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_bec5e0");
void GameRoutine_c15840_alt2(__int64, _QWORD*, int,
                             char) __asm__("GameRoutine_c15840");
void GameRoutine_c15dc0_alt2(__int64, __int64, __int64,
                             __int64*) __asm__("GameRoutine_c15dc0");
void MaterialAnimModule_beb940_alt1(__int64*) __asm__(
    "MaterialAnimModule_beb940");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void wld_c40980_alt1(__int64*) __asm__("wld_c40980");
void wld_be6480(__int64 a1, __int64 a2, unsigned __int64 a3, float a4);
_QWORD* game_66f7e0(_QWORD* result, int, unsigned __int64);
__attribute__((swiftcall)) void
GameRoutine_a5cb20_alt1(PSEUDO_X8, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_a5cb20");
__attribute__((swiftcall)) void
GameRoutine_b34420_alt1(PSEUDO_X8, __int64, __int64, unsigned __int64, __int64,
                        __int64, __int64) __asm__("GameRoutine_b34420");
__int64 GameHr_66f720(__int64 result, int, char);
__int64 GameHr_a878a0(__int64 result, __int64);
__int64 GameHr_c1a5a0(__int64);
__int64 GameHr_c284a0(__int64*, _DWORD*, unsigned __int64, char);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_a8c380_alt1(__int64, _QWORD*) __asm__("GameRoutine_a8c380");
__int64 GameRoutine_c28e40_alt1(float32x4_t*,
                                char) __asm__("GameRoutine_c28e40");
__int64 GameRoutine_c41bf0_alt1(_QWORD*, __int64, __int64, __int64, __int64,
                                __int64) __asm__("GameRoutine_c41bf0");
__int64 nn_os_AcquireReadLock_alt1(__int64) __asm__("nn_os_AcquireReadLock");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_ReleaseReadLock_alt1(__int64) __asm__("nn_os_ReleaseReadLock");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
wld_DecalModule_AddDecal_alt1(_QWORD*, __int64,
                              __int64) __asm__("wld_DecalModule_AddDecal");
__int64 wld_map_c24890_alt2(__int64, __int64,
                            __int64) __asm__("wld_map_c24890");
void Components_a87260_alt1(__int64, __int64, int) __asm__("Components_a87260");
void GameHr_c15010(__int64, unsigned __int8*, __int64, unsigned __int64);
void GameHr_c24db0(__int64, __int64, unsigned __int64);
void GameHr_c29c40(__int64);
void GameHr_c2c6e0(__int64);
void GameHr_c31e60(__int64*);
void GameHr_c32110(__int64);
void GameRoutine_1989340_alt1(__int64, _QWORD*, __int64,
                              unsigned __int64) __asm__("GameRoutine_1989340");
void GameRoutine_1989b20_alt1(__int64, __int64, __int64,
                              _QWORD*) __asm__("GameRoutine_1989b20");
void GameRoutine_a853b0_alt1(__int64) __asm__("GameRoutine_a853b0");
void GameRoutine_b36540_alt1(_QWORD*, __int64) __asm__("GameRoutine_b36540");
void GameRoutine_c2c4c0_alt1(__int64) __asm__("GameRoutine_c2c4c0");
void LightingAnimModule_c687a0_alt1(__int64,
                                    char) __asm__("LightingAnimModule_c687a0");
void Manager_c445f0_alt1(__int64, __int64, unsigned __int64, __int64,
                         unsigned __int64) __asm__("Manager_c445f0");
void Manager_c46910_alt1(__int64) __asm__("Manager_c46910");
void Manager_c477c0_alt1(__int64) __asm__("Manager_c477c0");
void wld_MapCrowdLoader_MapCrowdLoader_alt1(
    unsigned __int64, __int64,
    unsigned __int64) __asm__("wld_MapCrowdLoader_MapCrowdLoader");
void wld_c2a300(__int64** a1);
void wld_c2bb00(__int64** a1);
void wld_c40980(__int64* a1);
void wld_c43d90(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                unsigned __int64 a5, __int64 a6, unsigned __int64 a7, int a8,
                int a9);

void wld_a5ef20(__int64 a1)
{
  __int64 v1;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  atomic_uchar* v22;
  unsigned __int8 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  int8x16_t v27;
  __int128 v28;
  __int64* v29;
  __int128 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int128 v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  __int128 v44;
  float v45;
  double v46;
  double v47;
  double v48;
  double v49;
  double v50;
  double v51;
  double v52;
  double v53;
  __int128 v54;
  float v55;
  float v56;
  float v57;
  float v58;
  int v59;
  float32x4_t* v60;
  float32x4_t v61;
  float32x4_t v62;
  int8x16_t v63;
  float32x4_t v64;
  _QWORD* v65;
  int v66;
  __int64* v67;
  int v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  float v73;
  __int64 v74;
  unsigned __int64 v75;
  float32x4_t v76;
  int v77;
  __int64 v78;
  int v79;
  struct {
    _QWORD v80[2];
    __int64 v81;
    int v82;
  } v80_;
  _BYTE v83[12];

  v1 = *(_QWORD*)(a1 + 8);
  v3 = (atomic_uchar*)GameData_212df10;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v5 = GameData_212df08;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
    *v5 = wld_Crc32(0, "ModelModule", 0xBu);
    __cxa_guard_release(GameData_212df10);
  }
  v6 = *(_QWORD*)(v1 + 512);
  v7 = v6;
  do {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
  } while (v8 != *v5);
  if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 8) + 24LL) + 112LL) +
                106LL) != 0) {
    v9 = *(_QWORD*)(a1 + 8);
    if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
      *v5 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release(GameData_212df10);
    }
    v10 = *(_QWORD*)(v9 + 512);
    v11 = v10;
    do {
      v12 = *(_DWORD*)(v11 - 16);
      v11 -= 16;
      v10 -= 16;
    } while (v12 != *v5);
    v13 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 8) + 24LL) + 112LL) +
                   40LL);
    v14 = *(_QWORD*)(v13 + 56) +
          24LL * *(unsigned __int16*)(*(_QWORD*)(v13 + 24) + 52LL);
    v15 = *(unsigned int*)(v14 + 8);
    v16 = *(_QWORD*)(v14 + 12);
    v17 = *(_DWORD*)(v14 + 20);
    v75 = *(_QWORD*)v14;
    v18 = (__int64*)fw_memory_g_heap_manager_ptr;
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
    v20 = GameData_212e380;
    v19[2] = 0;
    v19[3] = 0;
    v19[4] = 0;
    v19[5] = 0;
    v19[6] = 0;
    v19[7] = 0;
    v19[8] = 0;
    *v19 = v20 + 16;
    v19[1] = 0;
    v21 = *(_QWORD**)(a1 + 24);
    *(_QWORD*)(a1 + 24) = v19;
    if (v21 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v21 + 8LL))(
          (void*)(v21), v21);
      v19 = *(_QWORD**)(a1 + 24);
    }
    v22 = (atomic_uchar*)GameData_212c840;
    v23 = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                               memory_order_acquire);
    v24 = GameData_212c838;
    if ((v23 & 1) == 0) {
      v65 = v19;
      v66 = __cxa_guard_acquire(GameData_212c840);
      v19 = v65;
      if (v66 != 0) {
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) = 0;
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = 0;
        *v24 = 0;
        v24[1] = 0;
        *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24) = 0;
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24) = 0;
        *((_BYTE*)((char*)0x40LL) + (_QWORD)v24) = 0;
        *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v24) = 0;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v24) =
            (_UNKNOWN*)1065353216;
        GameRoutine_14a0820(v24);
        GameRoutine_2b0();
        __cxa_guard_release(GameData_212c840);
        v19 = v65;
      }
    }
    v25 = *(_QWORD*)(a1 + 8);
    v26 = *v24;
    v27 = *(int8x16_t*)(v25 + 336);
    v28 = *(_OWORD*)(v25 + 304);
    v80_.v81 = *(_QWORD*)(v25 + 304);
    v80_.v82 = DWORD2(v28);
    v80_.v80[0] = LANES128(v27).n128_u64[0];
    v80_.v80[1] = LANES128_OF(vextq_s8(v27, v27, 8u)).n128_u64[0];
    (*(void (**)(_QWORD*, __int64, _QWORD*))(*v19 + 16LL))(v19, v26, v80_.v80);
    v78 = v16;
    v79 = v17;
    v29 = *(__int64**)(a1 + 24);
    v77 = 3;
    v30 = *(_OWORD*)(*(_QWORD*)(a1 + 8) + 304LL);
    v80_.v80[0] = 0;
    v80_.v80[1] = 0x3F80000000000000LL;
    v80_.v81 = v30;
    v80_.v82 = DWORD2(v30);
    if ((atomic_load_explicit(v22, memory_order_acquire) & 1) == 0) {
      v67 = v29;
      v68 = __cxa_guard_acquire(GameData_212c840);
      v29 = v67;
      if (v68 != 0) {
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) = 0;
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = 0;
        *v24 = 0;
        v24[1] = 0;
        *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24) = 0;
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24) = 0;
        *((_BYTE*)((char*)0x40LL) + (_QWORD)v24) = 0;
        *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v24) = 0;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v24) =
            (_UNKNOWN*)1065353216;
        GameRoutine_14a0820(v24);
        GameRoutine_2b0();
        __cxa_guard_release(GameData_212c840);
        v29 = v67;
      }
    }
    RigidDynamic_14a0140(
        v29, (__int64)&v77, 0x1.0000000000000p+0f, (__int64)v80_.v80,
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v24), 0x100000001LL);
    v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 40LL))(
        *(_QWORD*)(a1 + 24));
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v31 + 664LL))(v31, 16,
                                                                     4);
    v32 = *(_QWORD*)(a1 + 24);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v69 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v69;
      __cxa_guard_release(&GameData_21a6130);
    }
    v33 = *(_QWORD*)(v32 + 16);
    qmemcpy(v83, &GameData_21a6120, sizeof(v83));
    (*(void (**)(__int64, _BYTE*, __int64))(*(_QWORD*)v33 + 648LL))(v33, v83,
                                                                    1);
    v34 = *(_QWORD*)(a1 + 24);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v74 = v34;
      v70 = __cxa_guard_acquire(&GameData_21a6130);
      v34 = v74;
      if (v70 != 0) {
        v71 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v71;
        __cxa_guard_release(&GameData_21a6130);
        v34 = v74;
      }
    }
    v35 = *(_QWORD*)(v34 + 16);
    qmemcpy(v83, &GameData_21a6120, sizeof(v83));
    (*(void (**)(__int64, _BYTE*, __int64))(*(_QWORD*)v35 + 656LL))(v35, v83,
                                                                    1);
    (*(void (**)(_QWORD, float))(**(_QWORD**)(*(_QWORD*)(a1 + 24) + 16LL) +
                                 320LL))(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL),
                                         0x1.0000000000000p-1f);
    updateMassAndInertia(*(__int64**)(*(_QWORD*)(a1 + 24) + 16LL),
                         *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48LL),
                         (*(_QWORD*)(*(_QWORD*)(a1 + 24) + 56LL) -
                          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 48LL)) >>
                             2,
                         nullptr, 0);
    v36 = *(_QWORD*)(a1 + 24);
    v37 = (_QWORD*)fw_memory_HeapManager_Allocate(*v18, 16, 16, 0);
    *v37 = wld_MyContactCallback_vtable;
    v37[1] = a1;
    v38 = *(_QWORD*)(v36 + 8);
    *(_QWORD*)(v36 + 8) = v37;
    if (v38 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
    }
    if ((atomic_load_explicit(v22, memory_order_acquire) & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = 0;
      *v24 = 0;
      v24[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v24) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v24) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v24) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820(v24);
      GameRoutine_2b0();
      __cxa_guard_release(GameData_212c840);
    }
    GameRoutine_14a0af0(GameData_212c838, *(_QWORD*)(a1 + 24));
    v39 = *(_QWORD*)(a1 + 8);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v72 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v72;
      __cxa_guard_release(&GameData_21a6130);
    }
    LANES128(v41).n128_u64[0] = v75;
    v40 = GameData_21a6120;
    LANES128(v41).n128_u64[1] = v15;
    v42 = vsubq_f32(*(float32x4_t*)(v39 + 384),
                    COERCE_AS(float32x4_t, GameData_21a6120));
    v43 = vmulq_f32(v42, v42);
    LANES128(v43).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      *(_QWORD*)(v39 + 384) = GameData_21a6120;
      v44 = *(_OWORD*)(v39 + 384);
      v45 = *((float*)&v40 + 1);
      v73 = *(float*)&v40;
      v76 = v41;
      *((_QWORD*)&v44 + 1) = DWORD2(v40);
      v46 = *((float*)&v40 + 2) * 0x1.0000000000000p-1;
      *(_OWORD*)(v39 + 384) = v44;
      v47 = cos(v46);
      v48 = sin(v46);
      v49 = cos(v73 * 0x1.0000000000000p-1);
      v50 = sin(v73 * 0x1.0000000000000p-1);
      v51 = v45 * 0x1.0000000000000p-1;
      v52 = cos(v51);
      v53 = sin(v51);
      v54 = *(_OWORD*)(v39 + 400);
      v41 = v76;
      v55 = v47 * v50 * v52 - PSEUDO_UNFUSED(v53 * (v48 * v49));
      v56 = PSEUDO_UNFUSED(v48 * v50 * v53) + PSEUDO_UNFUSED(v47 * v49) * v52;
      v57 = PSEUDO_UNFUSED(v48 * v50 * v52) + PSEUDO_UNFUSED(v47 * v49) * v53;
      v58 = v48 * v49 * v52 - PSEUDO_UNFUSED(v53 * (v47 * v50));
      if (*(float*)&v54 != v55 || *((float*)&v54 + 1) != v57 ||
          *((float*)&v54 + 2) != v58 || *((float*)&v54 + 3) != v56) {
        v59 = *(_DWORD*)(v39 + 296);
        *(float*)(v39 + 400) = v55;
        *(float*)(v39 + 404) = v57;
        *(float*)(v39 + 408) = v58;
        *(float*)(v39 + 412) = v56;
        *(_DWORD*)(v39 + 296) = v59 | 3;
      }
    }
    v60 = *(float32x4_t**)(a1 + 8);
    v61 = vsubq_f32(COERCE_AS(float32x4_t, 0), v41);
    v62 = vsubq_f32(v60[23], v61);
    v63 = vmulq_f32(v62, v62);
    LANES128(v63).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v60[23]).n128_u64[0] = LANES128(v61).n128_u64[0];
      v64 = v60[23];
      LANES128(v60[18]).n128_u32[2] |= 3u;
      LANES128(v64).n128_u64[1] = LANES128(v61).n128_u32[2];
      v60[23] = v64;
    }
  }
}

void wld_a5f660(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  __int64 v20;
  float32x4_t v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  int v30;
  int v31;
  bool v32;
  unsigned __int64 v33;
  __int64 v34;
  int8x16_t* v35;
  float32x4_t v36;
  int8x16_t v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v50;
  __int64 v51;
  int v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  unsigned int v59;
  int v60;
  __int64 v61;
  bool v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  int v66;
  __int64 v67;
  bool v68;
  int v69;
  __int64 v70;
  bool v71;
  _QWORD* v72;
  __int64 v73;
  int v74;
  __int64 v75;
  bool v76;
  _QWORD* v77;
  __int64 v78;
  int v79;
  __int64 v80;
  bool v81;
  _QWORD* v82;
  __int64 v83;
  int v84;
  __int64 v85;
  bool v86;
  _QWORD* v87;
  __int64 v88;
  int v89;
  __int64 v90;
  bool v91;
  _QWORD* v92;
  __int64 v93;
  int v94;
  __int64 v95;
  _QWORD* v96;
  __int64 v97;
  int v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  unsigned int v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  __int64 v106;
  __int64 v107;
  unsigned __int16* v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int16* v111;
  unsigned int v112;
  unsigned int* v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned int* v116;
  unsigned int v117;
  unsigned __int8* v118;
  __int64 v119;
  unsigned __int64 v120;
  unsigned __int8* v121;
  unsigned int v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  int8x16_t v132;
  float32x4_t v133;
  int32x4_t v134;
  int32x4_t v135;
  int8x16_t v136;
  int8x16_t v137;
  int8x16_t v138;
  float32x4_t v139;
  float32x4_t v140;
  float32x4_t v141;
  unsigned __int64 v142;
  int8x16_t v143;
  float32x4_t v144;
  int8x16_t v145;
  int8x16_t v146;
  float32x4_t v147;
  float32x4_t v148;
  int8x16_t v149;
  float32x4_t v150;
  float32x4_t v151;
  int v152;
  __int64 v153;
  unsigned __int64 v154;
  float32x4_t v155;
  unsigned __int32 v156;
  unsigned __int32 v157;
  signed __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int32* v162;
  __int64 v163;
  char* v164;
  _DWORD* v165;
  int v166;
  __int64 v167;
  __int64 v168;
  unsigned __int64 i;
  unsigned __int16* v170;
  int v171;
  int v172;
  unsigned int v173;
  unsigned int v174;
  unsigned int v175;
  unsigned int v176;
  unsigned int v177;
  int v178;
  int v179;
  unsigned int v180;
  unsigned int v181;
  unsigned int v182;
  unsigned int v183;
  unsigned int v184;
  int v185;
  int v186;
  unsigned int v187;
  unsigned int v188;
  unsigned int v189;
  unsigned int v190;
  unsigned int v191;
  float32x4_t v192;
  unsigned __int32 v193;
  unsigned __int32 v194;
  signed __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  __int64 v198;
  unsigned __int32* v199;
  __int64 v200;
  char* v201;
  _DWORD* v202;
  int v203;
  __int64 v204;
  atomic_uchar* v205;
  unsigned __int8 v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  __int16 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  _QWORD* v215;
  __int64 v216;
  _QWORD* v217;
  __int64 v218;
  __int64 v219;
  int8x16_t v220;
  __int128 v221;
  __int64* v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  _QWORD* v228;
  __int64 v229;
  __int64 v230;
  char v231;
  int v232;
  _QWORD* v233;
  int v234;
  __int64* v235;
  int v236;
  __int64 v237;
  __int64 v238;
  char v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  char* v243;
  __int64 v244;
  __int64 v245;
  int8x16_t v246;
  int32x4_t v247;
  int8x16_t v248;
  float32x4_t v249;
  __int64 v250;
  unsigned __int64 v251;
  unsigned __int32 v252;
  unsigned __int32 v253;
  __int64 v254;
  float32x4_t v255;
  float32x4_t v256;
  float32x4_t v257;
  float32x4_t v258;
  float32x4_t v259;
  float32x4_t v260;
  float32x4_t v261;
  float32x4_t v262;
  __int64 v263;
  __int64 v264;
  _DWORD v265[2];
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  char v270;
  int v271;
  __int64 v272;
  int v273;
  _QWORD v274[6];
  __int16 v275;
  int v276;
  __int16 v277;
  __int64 v278;
  _QWORD v279[4];
  int v280;
  void (***v281)(_QWORD);
  char v282;
  __int16 v283;
  char v284;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v284 = 0;
  v2 = *(_QWORD*)(a1 + 8);
  v3 = a1;
  LODWORD(v279[0]) = 5;
  v279[1] = 0x3F8000003F800000LL;
  v279[2] = 1065353216;
  v279[3] = 0;
  v280 = 1065353216;
  v281 = nullptr;
  v283 = 0;
  v282 = 1;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v5 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v231 = a2;
    v232 = __cxa_guard_acquire(GameData_212df10),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    a2 = v231;
    if (v232 != 0) {
      *v5 = wld_Crc32(0, "ModelModule", 0xBu),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      __cxa_guard_release(GameData_212df10),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      a2 = v231;
    }
  }
  v6 = *(_QWORD*)(v2 + 512);
  v7 = v6;
  while (v7 != *(_QWORD*)(v2 + 504)) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    v6 -= 16;
    if (v8 == *v5) {
      if (*(_QWORD*)(v2 + 512) != v6) {
        v9 = *(_QWORD*)(v6 + 8);
        goto LABEL_8;
      }
      break;
    }
  }
  v9 = 0;
LABEL_8:
  v10 = *(_QWORD*)(v9 + 24);
  if (*(_WORD*)(v10 + 164) == 0) {
    return;
  }
  v239 = a2;
  v11 = 0;
  v12 = nullptr;
  v13 = nullptr;
  v14 = 0;
  v240 = *(_QWORD*)(v9 + 24);
  v241 = v9;
  v242 = v3;
  do {
    v16 = *(_QWORD*)(v10 + 176) + 112 * v14;
    *(long double*)&v17 = ((long double (*)(_QWORD, _QWORD)) *
                           (_QWORD*)(**(_QWORD**)(v9 + 24) + 64LL))(
        *(_QWORD*)(v9 + 24), (unsigned int)v14),
           v18 =
               COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
           v19 =
               COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
           v21 =
               COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
           v33 = COERCE_AS(__typeof__(v33),
                           PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v245 = v14;
    v251 = v11;
    v255 = v19;
    v257 = v18;
    v20 = *(_QWORD*)(*(_QWORD*)v16 + 16LL);
    v259 = v21;
    v261 = v17;
    v22 = *(_QWORD*)(v20 + 16);
    if (v22 == 0) {
      goto LABEL_30;
    }
    v23 = v22 + 8;
    v24 = *(unsigned __int16*)(v22 + 12);
    v25 = v22 + 8 + 16 * v24;
    v26 = *(_DWORD*)v25;
    if (*(_DWORD*)(v22 + 8) < *(_DWORD*)v25) {
      do {
        if ((unsigned int)(v26 >> 3) <= 2) {
          v27 = ((unsigned __int8)GameData_1af0f9a[~(v26 >> 3) + 3] >>
                 (v26 & 7)) &
                1;
        }
        else {
          v27 = 0;
        }
        v24 = *(unsigned __int16*)(v22 + 12 + 16 * v24 + 2 * v27);
        v28 = v26 < *(_DWORD*)(v23 + 16 * v24);
        v26 = *(_DWORD*)(v23 + 16 * v24);
      } while (v28);
      v25 = v23 + 16 * v24;
    }
    v29 = *(_QWORD*)(v25 + 8);
    if (*(_WORD*)v29 == 3 &&
        ((v30 = *(unsigned __int16*)(v29 + 2),
          v31 = *(unsigned __int8*)(v29 + 4), v30 == 28767)
             ? (v32 = v31 == 48)
             : (v32 = false),
         v32 && (~(v33 = v25 - v22 - 24) & 0xFFFFFFFF0LL) != 0)) {
      v34 = *(_QWORD*)(v20 + 8) + 16LL * (int)(v33 >> 4);
    }
    else {
    LABEL_30:
      v34 = 0;
    }
    v35 = *(int8x16_t**)(v3 + 8);
    v250 = v34;
    v247 = v35[27];
    v248 = v35[28];
    v37 = v35[29];
    v36 = v35[30];
    v38 = *(unsigned __int8*)(v34 + 14);
    v246 = v37;
    v249 = v36;
    v244 = *(_QWORD*)(*(_QWORD*)(v20 + 40) + 8 * v38);
    v263 = *(int*)(*(_QWORD*)(v20 + 56) + 16 * v38);
    v254 = GameRoutine_5fcb50(v244),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v39 = *(_QWORD*)(*(_QWORD*)v16 + 24LL) +
          56LL * *(unsigned __int8*)(*(_QWORD*)v16 + 91LL);
    v40 = *(_QWORD*)(v39 - 40);
    v41 = GameRoutine_5fcb50(v40),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v42 = v20;
    v43 = *(unsigned int*)(v20 + 80);
    v44 = v41;
    if ((_DWORD)v43 != 0) {
      v243 = v13;
      v45 = v41;
      v46 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr,
          (((v43 - 1) >> 3) & 0x1FFFFFFFFFFFFFF8LL) + 8, 16, 0),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v50 = v43 >> 6;
      v51 = v46;
      if ((unsigned int)v43 >= 0x40) {
        memset(v46, 0, 8 * v50),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      if ((v43 & 0x3F) != 0) {
        *(_QWORD*)(v51 + 8 * v50) &=
            ~(0xFFFFFFFFFFFFFFFFLL >> (-(v43 & 0x3F) & 0x3F));
      }
      v52 = v43 & 0x3F;
      v44 = v45;
      if ((v43 & 0x3F) != 0) {
        v13 = v243;
        v53 = (_QWORD*)(v51 + 8 * v50);
        v54 = v42;
        v55 = v40;
        v56 = 64 - v52;
        v57 = (64 - v52) & 7;
        if (v57 != 0) {
          v58 = v254;
          v59 = v52 | 0xFFFFFFC0;
          v60 = v52;
          do {
            v61 = 1LL << v60;
            v62 = v60 == 63;
            ++v59;
            if (v60 == 63) {
              v60 = 0;
            }
            else {
              ++v60;
            }
            *v53 &= ~v61;
            if (v62) {
              v63 = 8;
            }
            else {
              v63 = 0;
            }
            --v57;
            v53 = (_QWORD*)((char*)v53 + v63);
          } while (v57 != 0);
          v56 = -v59;
        }
        else {
          v58 = v254;
          v60 = v52;
        }
        v11 = v251;
        if ((v52 ^ 0x3Fu) >= 7) {
          do {
            *v53 &= ~(1LL << v60);
            v64 = v60 == 63;
            v65 = &v53[v64];
            if (v60 == 63) {
              v66 = 0;
            }
            else {
              v66 = v60 + 1;
            }
            v67 = 1LL << v66;
            v68 = v66 == 63;
            if (v66 == 63) {
              v69 = 0;
            }
            else {
              v69 = v66 + 1;
            }
            *v65 &= ~v67;
            v70 = v68;
            v71 = v69 == 63;
            v72 = &v65[v70];
            v73 = 1LL << v69;
            if (v69 == 63) {
              v74 = 0;
            }
            else {
              v74 = v69 + 1;
            }
            *v72 &= ~v73;
            v75 = v71;
            v76 = v74 == 63;
            v77 = &v72[v75];
            v78 = 1LL << v74;
            if (v74 == 63) {
              v79 = 0;
            }
            else {
              v79 = v74 + 1;
            }
            *v77 &= ~v78;
            v80 = v76;
            v81 = v79 == 63;
            v82 = &v77[v80];
            v83 = 1LL << v79;
            if (v79 == 63) {
              v84 = 0;
            }
            else {
              v84 = v79 + 1;
            }
            *v82 &= ~v83;
            v85 = v81;
            v86 = v84 == 63;
            v87 = &v82[v85];
            v88 = 1LL << v84;
            if (v84 == 63) {
              v89 = 0;
            }
            else {
              v89 = v84 + 1;
            }
            *v87 &= ~v88;
            v90 = v86;
            v91 = v89 == 63;
            v92 = &v87[v90];
            v93 = 1LL << v89;
            if (v89 == 63) {
              v94 = 0;
            }
            else {
              v94 = v89 + 1;
            }
            *v92 &= ~v93;
            v95 = v91;
            v96 = &v92[v95];
            v97 = v94 == 63;
            if (v94 == 63) {
              v60 = 0;
            }
            else {
              v60 = v94 + 1;
            }
            v56 -= 8;
            v53 = &v96[v97];
            *v96 &= ~(1LL << v94);
          } while (v56 != 0);
        }
      }
      else {
        v54 = v42;
        v58 = v254;
        v11 = v251;
        v13 = v243;
        v55 = v40;
      }
    }
    else {
      v54 = v42;
      v58 = v254;
      v11 = v251;
      v51 = 0;
      v55 = v40;
    }
    v98 = *(_DWORD*)(v39 - 16);
    switch (v98) {
    case 2:
      v105 = *(_DWORD*)(v39 - 12);
      if (v105 == 0) {
        break;
      }
      if (v105 < 8) {
        v106 = 0;
        v107 = v105 & 7;
        if (v107 == 0) {
          break;
        }
      LABEL_124:
        v116 = (unsigned int*)(v44 + 4 * v106);
        do {
          v117 = *v116++;
          --v107;
          *(_QWORD*)(v51 + (((unsigned __int64)v117 >> 3) & 0x1FFFFFF8)) |=
              1LL << v117;
        } while (v107 != 0);
        break;
      }
      v113 = (unsigned int*)(v44 + 16);
      v114 = 0;
      do {
        v114 -= 8;
        *(_QWORD*)(v51 + (((unsigned __int64)*(v113 - 4) >> 3) & 0x1FFFFFF8)) |=
            1LL << *(v113 - 4);
        *(_QWORD*)(v51 + (((unsigned __int64)*(v113 - 3) >> 3) & 0x1FFFFFF8)) |=
            1LL << *(v113 - 3);
        *(_QWORD*)(v51 + (((unsigned __int64)*(v113 - 2) >> 3) & 0x1FFFFFF8)) |=
            1LL << *(v113 - 2);
        *(_QWORD*)(v51 + (((unsigned __int64)*(v113 - 1) >> 3) & 0x1FFFFFF8)) |=
            1LL << *(v113 - 1);
        *(_QWORD*)(v51 + (((unsigned __int64)*v113 >> 3) & 0x1FFFFFF8)) |=
            1LL << *v113;
        *(_QWORD*)(v51 + (((unsigned __int64)v113[1] >> 3) & 0x1FFFFFF8)) |=
            1LL << v113[1];
        *(_QWORD*)(v51 + (((unsigned __int64)v113[2] >> 3) & 0x1FFFFFF8)) |=
            1LL << v113[2];
        v115 = v113[3];
        v113 += 8;
        *(_QWORD*)(v51 + ((v115 >> 3) & 0x1FFFFFF8)) |= 1LL << v115;
      } while (-(__int64)(v105 & 0xFFFFFFF8) != v114);
      v106 = -v114;
      v107 = v105 & 7;
      if (v107 != 0) {
        goto LABEL_124;
      }
      break;
    case 1:
      v102 = *(_DWORD*)(v39 - 12);
      if (v102 == 0) {
        break;
      }
      if (v102 < 8) {
        v103 = 0;
        v104 = v102 & 7;
        if (v104 == 0) {
          break;
        }
      LABEL_118:
        v111 = (unsigned __int16*)(v44 + 2 * v103);
        do {
          v112 = *v111++;
          --v104;
          *(_QWORD*)(v51 + (((unsigned __int64)v112 >> 3) & 0x1FF8)) |= 1LL
                                                                        << v112;
        } while (v104 != 0);
        break;
      }
      v108 = (unsigned __int16*)(v44 + 8);
      v109 = 0;
      do {
        v109 -= 8;
        *(_QWORD*)(v51 + (((unsigned __int64)*(v108 - 4) >> 3) & 0x1FF8)) |=
            1LL << *(v108 - 4);
        *(_QWORD*)(v51 + (((unsigned __int64)*(v108 - 3) >> 3) & 0x1FF8)) |=
            1LL << *(v108 - 3);
        *(_QWORD*)(v51 + (((unsigned __int64)*(v108 - 2) >> 3) & 0x1FF8)) |=
            1LL << *(v108 - 2);
        *(_QWORD*)(v51 + (((unsigned __int64)*(v108 - 1) >> 3) & 0x1FF8)) |=
            1LL << *(v108 - 1);
        *(_QWORD*)(v51 + (((unsigned __int64)*v108 >> 3) & 0x1FF8)) |= 1LL
                                                                       << *v108;
        *(_QWORD*)(v51 + (((unsigned __int64)v108[1] >> 3) & 0x1FF8)) |=
            1LL << v108[1];
        *(_QWORD*)(v51 + (((unsigned __int64)v108[2] >> 3) & 0x1FF8)) |=
            1LL << v108[2];
        v110 = v108[3];
        v108 += 8;
        *(_QWORD*)(v51 + ((v110 >> 3) & 0x1FF8)) |= 1LL << v110;
      } while (-(__int64)(v102 & 0xFFFFFFF8) != v109);
      v103 = -v109;
      v104 = v102 & 7;
      if (v104 != 0) {
        goto LABEL_118;
      }
      break;
    case 0:
      v99 = *(_DWORD*)(v39 - 12);
      if (v99 != 0) {
        if (v99 < 8) {
          v100 = 0;
          v101 = v99 & 7;
          if (v101 == 0) {
            break;
          }
        LABEL_130:
          v121 = (unsigned __int8*)(v44 + v100);
          do {
            v122 = *v121++;
            --v101;
            *(_QWORD*)(v51 + (((unsigned __int64)v122 >> 3) & 0x18)) |= 1LL
                                                                        << v122;
          } while (v101 != 0);
          break;
        }
        v118 = (unsigned __int8*)(v44 + 3);
        v119 = 0;
        do {
          v119 -= 8;
          *(_QWORD*)(v51 + (((unsigned __int64)*(v118 - 3) >> 3) & 0x18)) |=
              1LL << *(v118 - 3);
          *(_QWORD*)(v51 + (((unsigned __int64)*(v118 - 2) >> 3) & 0x18)) |=
              1LL << *(v118 - 2);
          *(_QWORD*)(v51 + (((unsigned __int64)*(v118 - 1) >> 3) & 0x18)) |=
              1LL << *(v118 - 1);
          *(_QWORD*)(v51 + (((unsigned __int64)*v118 >> 3) & 0x18)) |= 1LL
                                                                       << *v118;
          *(_QWORD*)(v51 + (((unsigned __int64)v118[1] >> 3) & 0x18)) |=
              1LL << v118[1];
          *(_QWORD*)(v51 + (((unsigned __int64)v118[2] >> 3) & 0x18)) |=
              1LL << v118[2];
          *(_QWORD*)(v51 + (((unsigned __int64)v118[3] >> 3) & 0x18)) |=
              1LL << v118[3];
          v120 = v118[4];
          v118 += 8;
          *(_QWORD*)(v51 + ((v120 >> 3) & 0x18)) |= 1LL << v120;
        } while (-(__int64)(v99 & 0xFFFFFFF8) != v119);
        v100 = -v119;
        v101 = v99 & 7;
        if (v101 != 0) {
          goto LABEL_130;
        }
      }
      break;
    default:
      break;
    }
    LANES128(v123).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v248, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v123).n128_i8[8] =
        vqtbl1_s8(v248, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v124).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v124).n128_i8[8] =
        vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v125 = vmulq_f32(vmulq_f32(v247, v123), v124);
    LANES128(v124).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v248, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v124).n128_i8[8] =
        vqtbl1_s8(v248, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v126).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v126).n128_i8[8] =
        vqtbl1_s8(v246, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v127 = vsubq_f32(v125, vmulq_f32(vmulq_f32(v247, v124), v126));
    LANES128(v127).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v127, v127)).n128_u64[0];
    v128 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v127).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v127).n128_u64[0]), 1));
    v129 = vrecpeq_f32(v128);
    v130 = vmulq_f32(v129, vrecpsq_f32(v129, v128));
    v131 = vrecpsq_f32(v130, v128);
    v132 = vceqzq_f32(v128);
    v133 = vmulq_f32(v130, v131);
    v134 = vzip1q_s32(v247, v246);
    v135 = vzip1q_s32(v248, COERCE_AS(int32x4_t, 0));
    v136 = vzip2q_s32(v134, v135);
    v137 = vzip1q_s32(vzip2q_s32(v247, v246),
                      vzip2q_s32(v248, COERCE_AS(int32x4_t, 0)));
    v138 = vzip1q_s32(v134, v135);
    LANES128(v139).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v140).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v141).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v135).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v139).n128_i8[8] =
        vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v142 = LANES64_OF(vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
               .n64_u64[0];
    *(int8x8_t*)&LANES128(v141).n128_i8[8] =
        vqtbl1_s8(v137, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v137).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v140).n128_u64[1] = v142;
    *(int8x8_t*)&LANES128(v137).n128_i8[8] =
        vqtbl1_s8(v136, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v143 = vmulq_f32(v133, vmlsq_f32(vmulq_f32(v139, v140), v137, v141));
    *(int8x8_t*)&LANES128(v135).n128_i8[8] =
        vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v144 = vmulq_f32(v141, v135);
    LANES128(v141).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v141).n128_i8[8] =
        vqtbl1_s8(v138, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v145 = vmulq_f32(v133, vmlsq_f32(v144, v140, v141));
    v146 = vmulq_f32(v133, vmlsq_f32(vmulq_f32(v137, v141), v135, v139));
    v147 = vmlsq_lane_f32(
        vmulq_n_f32(vnegq_f32(v143), LANES128(v249).n128_f32[0]), v145,
        COERCE_AS(float32x2_t, LANES128(v249).n128_u64[0]), 1);
    v148 = vbicq_s8(v145, v132);
    v149 = vmlsq_laneq_f32(v147, v146, v249, 2);
    v150 = vbicq_s8(v143, v132);
    v151 = vbicq_s8(v146, v132);
    v262 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v150, LANES128(v261).n128_f32[0]), v148,
                       COERCE_AS(float32x2_t, LANES128(v261).n128_u64[0]), 1),
        v151, v261, 2);
    v260 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v150, LANES128(v259).n128_f32[0]), v148,
                       COERCE_AS(float32x2_t, LANES128(v259).n128_u64[0]), 1),
        v151, v259, 2);
    v258 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v150, LANES128(v257).n128_f32[0]), v148,
                       COERCE_AS(float32x2_t, LANES128(v257).n128_u64[0]), 1),
        v151, v257, 2);
    v256 = vaddq_f32(
        vbicq_s8(v149, v132),
        vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v150, LANES128(v255).n128_f32[0]), v148,
                           COERCE_AS(float32x2_t, LANES128(v255).n128_u64[0]),
                           1),
            v151, v255, 2));
    GameRoutine_5fcb70(v55),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v152 = *(_DWORD*)(v250 + 8);
    if (v152 != 5381) {
      if (v152 == 6149) {
        v153 = *(unsigned int*)(v54 + 80);
        if ((_DWORD)v153 != 0) {
          v154 = 0;
          while (1) {
            if (((*(_QWORD*)(v51 + 8 * (v154 >> 6)) >> v154) & 1) != 0) {
              v155 = vaddq_f32(
                  v256,
                  vmlaq_n_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v262, COERCE_FLOAT(
                                                *(_QWORD*)(v58 + v154 * v263))),
                          v260, *(float32x2_t*)(v58 + v154 * v263), 1),
                      v258, *(float*)(v58 + v154 * v263 + 8)));
              v156 = LANES128(v155).n128_u32[1];
              v157 = LANES128(v155).n128_u32[2];
              if ((unsigned __int64)v12 < v11) {
                *(_QWORD*)v12 = LANES128(v155).n128_u64[0];
                *((_DWORD*)v12 + 2) = LANES128(v155).n128_u32[2];
                v12 += 12;
              }
              else {
                v158 = v12 - v13;
                v159 = 1 - 0x5555555555555555LL * ((v12 - v13) >> 2);
                if (v159 > 0x1555555555555555LL) {
                  goto LABEL_228;
                }
                v252 = LANES128(v155).n128_u32[0];
                if (0x5555555555555556LL * ((__int64)(v11 - (_QWORD)v13) >> 2) >
                    v159) {
                  v159 = 0x5555555555555556LL *
                         ((__int64)(v11 - (_QWORD)v13) >> 2);
                }
                if (0xAAAAAAAAAAAAAAABLL *
                        ((__int64)(v11 - (_QWORD)v13) >> 2) >=
                    0xAAAAAAAAAAAAAAALL) {
                  v159 = 0x1555555555555555LL;
                }
                if (v159 > 0x1555555555555555LL) {
                  goto LABEL_227;
                }
                v160 = 3 * v159;
                v161 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v159, 16, 0),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                v162 = (unsigned __int32*)(v161 + v158);
                v162[2] = v157;
                *v162 = v252;
                v162[1] = v156;
                v163 = v161 + v158 + 12 * (v158 / -12);
                if (v13 != v12) {
                  v164 = v13;
                  v165 = (_DWORD*)v163;
                  do {
                    *v165 = *(_DWORD*)v164;
                    v165[1] = *((_DWORD*)v164 + 1);
                    v166 = *((_DWORD*)v164 + 2);
                    v164 += 12;
                    v165[2] = v166;
                    v165 += 3;
                  } while (v164 != v12);
                }
                v11 = v161 + 4 * v160;
                v12 = (char*)(v162 + 3);
                if (v13 != nullptr) {
                  v167 = 56;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v167 = 128;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v167),
                      v18 = COERCE_AS(__typeof__(v18),
                                      PSEUDO_REGISTER(__n128, "v2", "=w")),
                      v19 = COERCE_AS(__typeof__(v19),
                                      PSEUDO_REGISTER(__n128, "v3", "=w")),
                      v21 = COERCE_AS(__typeof__(v21),
                                      PSEUDO_REGISTER(__n128, "v1", "=w")),
                      v33 = COERCE_AS(
                          __typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
                }
                v13 = (char*)v163;
                v58 = v254;
              }
            }
            if (++v154 == v153) {
              goto LABEL_11;
            }
          }
        }
      }
    LABEL_10:
      if (v51 == 0) {
        goto LABEL_14;
      }
      goto LABEL_11;
    }
    v168 = *(unsigned int*)(v54 + 80);
    if ((_DWORD)v168 == 0) {
      goto LABEL_10;
    }
    for (i = 0; i != v168; ++i) {
      if (((*(_QWORD*)(v51 + 8 * (i >> 6)) >> i) & 1) != 0) {
        v170 = (unsigned __int16*)(v58 + i * v263);
        v171 = *v170;
        v172 = v171 & 0x7C00;
        v173 = (v171 << 16) & 0x80000000;
        if ((v171 & 0x7C00) != 0) {
          v174 = ((v171 & 0x3FF) << 13) + (v172 << 13) + v173;
          v173 |= (v171 << 13) | 0x7FC00000;
          v175 = v174 + 939524096;
          if ((v171 & 0x3FF) == 0) {
            v173 = (v171 << 16) | 0x7F800000;
          }
          if (v172 != 31744) {
            v173 = v175;
          }
        }
        else {
          v176 = v171 & 0x3FF;
          if (v176 != 0) {
            v177 = __clz(v176);
            v173 = (v176 << (v177 - 8)) & 0x7FFFFF |
                   ((v173 | 0x43000000) - (v177 << 23));
          }
        }
        v178 = v170[1];
        v179 = v178 & 0x7C00;
        v180 = (v178 << 16) & 0x80000000;
        if ((v178 & 0x7C00) != 0) {
          v181 = ((v178 & 0x3FF) << 13) + (v179 << 13) + v180;
          v180 |= (v178 << 13) | 0x7FC00000;
          v182 = v181 + 939524096;
          if ((v178 & 0x3FF) == 0) {
            v180 = (v178 << 16) | 0x7F800000;
          }
          if (v179 != 31744) {
            v180 = v182;
          }
        }
        else {
          v183 = v178 & 0x3FF;
          if (v183 != 0) {
            v184 = __clz(v183);
            v180 = (v183 << (v184 - 8)) & 0x7FFFFF |
                   ((v180 | 0x43000000) - (v184 << 23));
          }
        }
        v185 = v170[2];
        v186 = v185 & 0x7C00;
        v187 = (v185 << 16) & 0x80000000;
        if ((v185 & 0x7C00) != 0) {
          v188 = ((v185 & 0x3FF) << 13) + (v186 << 13) + v187;
          v187 |= (v185 << 13) | 0x7FC00000;
          v189 = v188 + 939524096;
          if ((v185 & 0x3FF) == 0) {
            v187 = (v185 << 16) | 0x7F800000;
          }
          if (v186 != 31744) {
            v187 = v189;
          }
        }
        else {
          v190 = v185 & 0x3FF;
          if (v190 != 0) {
            v191 = __clz(v190);
            v187 = (v190 << (v191 - 8)) & 0x7FFFFF |
                   ((v187 | 0x43000000) - (v191 << 23));
          }
        }
        v192 = vaddq_f32(
            v256,
            vmlaq_n_f32(vmlaq_lane_f32(
                            vmulq_n_f32(v262, *(float*)&v173), v260,
                            COERCE_AS(float32x2_t, __PAIR64__(v180, v173)), 1),
                        v258, *(float*)&v187));
        v193 = LANES128(v192).n128_u32[1];
        v194 = LANES128(v192).n128_u32[2];
        if ((unsigned __int64)v12 < v11) {
          *(_QWORD*)v12 = LANES128(v192).n128_u64[0];
          *((_DWORD*)v12 + 2) = LANES128(v192).n128_u32[2];
          v12 += 12;
        }
        else {
          v195 = v12 - v13;
          v196 = 0xAAAAAAAAAAAAAAABLL * ((v12 - v13) >> 2) + 1;
          if (v196 > 0x1555555555555555LL) {
          LABEL_228:
            GameRoutine_a61160(),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          v253 = LANES128(v192).n128_u32[0];
          if (0x5555555555555556LL * ((__int64)(v11 - (_QWORD)v13) >> 2) >
              v196) {
            v196 = 0x5555555555555556LL * ((__int64)(v11 - (_QWORD)v13) >> 2);
          }
          if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v11 - (_QWORD)v13) >> 2) >=
              0xAAAAAAAAAAAAAAALL) {
            v196 = 0x1555555555555555LL;
          }
          if (v196 > 0x1555555555555555LL) {
          LABEL_227:
            GameRoutine_60a210(),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          v197 = 3 * v196;
          v198 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v196, 16, 0),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v199 = (unsigned __int32*)(v198 + v195);
          v199[2] = v194;
          *v199 = v253;
          v199[1] = v193;
          v200 = v198 + v195 + 12 * (v195 / -12);
          if (v13 != v12) {
            v201 = v13;
            v202 = (_DWORD*)v200;
            do {
              *v202 = *(_DWORD*)v201;
              v202[1] = *((_DWORD*)v201 + 1);
              v203 = *((_DWORD*)v201 + 2);
              v201 += 12;
              v202[2] = v203;
              v202 += 3;
            } while (v201 != v12);
          }
          v11 = v198 + 4 * v197;
          v12 = (char*)(v199 + 3);
          if (v13 != nullptr) {
            v204 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v204 = 128;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v204),
                v18 = COERCE_AS(__typeof__(v18),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v21 = COERCE_AS(__typeof__(v21),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v33 =
                    COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          }
          v13 = (char*)v200;
          v58 = v254;
        }
      }
    }
  LABEL_11:
    v15 = 56;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
      v15 = 128;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  LABEL_14:
    GameRoutine_5fcb70(v244),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v10 = v240;
    v9 = v241;
    v14 = v245 + 1;
    v3 = v242;
  } while (v245 + 1 < (unsigned __int64)*(unsigned __int16*)(v240 + 164));
  if (v13 == v12) {
    if (v12 != nullptr) {
      v230 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v230 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v230),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  else {
    v205 = (atomic_uchar*)GameData_212c840;
    v206 = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                memory_order_acquire);
    v207 = GameData_212c838;
    if ((v206 & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207) = 0;
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207 + 8) = 0;
      *v207 = 0;
      v207[1] = 0;
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v207) = 0;
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v207) = 0;
      *((_BYTE*)((char*)0x40LL) + (_QWORD)v207) = 0;
      *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v207) = 0;
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v207) =
          (_UNKNOWN*)1065353216;
      GameRoutine_14a0820(v207),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      GameRoutine_2b0(),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      __cxa_guard_release(GameData_212c840),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    v208 = *v207;
    v274[0] = v13;
    v265[0] = 0;
    *(_DWORD*)((char*)v265 + 3) = 0;
    v209 = *(_QWORD*)(v208 + 24);
    HIDWORD(v274[2]) = 0;
    memset(&v274[3], 0, 24);
    v278 = 0;
    v271 = 1;
    v269 = 0x100000004LL;
    v270 = 1;
    v276 = 16711935;
    v277 = 255;
    LODWORD(v274[1]) = 12;
    *(_QWORD*)((char*)&v274[1] + 4) =
        -1431655765 * (unsigned int)((unsigned __int64)(v12 - v13) >> 2);
    if ((v239 & 1) != 0) {
      v210 = 10;
    }
    else {
      v210 = 2;
    }
    v275 = v210;
    v268 = 0x43FA000000000000LL;
    v273 = 3;
    v272 = 0x7F7FFFFF00000020LL;
    v264 = 0x3A3780343D75C28FLL;
    v267 = 0x3DCCCCCD00000001LL;
    v266 = 0x412000003F800000LL;
    v211 = (*(__int64 (**)(__int64))(*(_QWORD*)v209 + 32LL))(v209),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v212 = GameRoutine_55c130(&v264, v274, v211, &v273),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v213 = v212;
    if (v212 != 0) {
      v281 = (void (***)(_QWORD))v212,
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v13 != nullptr) {
        goto LABEL_206;
      }
    }
    else {
      wld_a5ef20(v242),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      if (v13 != nullptr) {
      LABEL_206:
        v214 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v214 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v214),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
    if (v213 != 0) {
      v215 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v216 = GameData_212e380;
      v215[2] = 0;
      v215[3] = 0;
      v215[4] = 0;
      v215[5] = 0;
      v215[6] = 0;
      v215[7] = 0;
      v215[8] = 0;
      *v215 = v216 + 16;
      v215[1] = 0;
      v217 = *(_QWORD**)(v242 + 24);
      *(_QWORD*)(v242 + 24) = v215;
      if (v217 != nullptr) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
            *v217 + 8LL))((void*)(v217), v217),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v215 = *(_QWORD**)(v242 + 24);
      }
      if ((atomic_load_explicit(v205, memory_order_acquire) & 1) == 0) {
        v233 = v215;
        v234 = __cxa_guard_acquire(GameData_212c840),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v215 = v233;
        if (v234 != 0) {
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207) = 0;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207 + 8) = 0;
          *v207 = 0;
          v207[1] = 0;
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v207) = 0;
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v207) = 0;
          *((_BYTE*)((char*)0x40LL) + (_QWORD)v207) = 0;
          *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v207) = 0;
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v207) =
              (_UNKNOWN*)1065353216;
          GameRoutine_14a0820(v207),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          GameRoutine_2b0(),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          __cxa_guard_release(GameData_212c840),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v215 = v233;
        }
      }
      v218 = *(_QWORD*)(v242 + 8);
      v219 = *v207;
      v220 = *(int8x16_t*)(v218 + 336);
      v221 = *(_OWORD*)(v218 + 304);
      v274[2] = *(_QWORD*)(v218 + 304);
      LODWORD(v274[3]) = DWORD2(v221);
      v274[0] = LANES128(v220).n128_u64[0];
      v274[1] = LANES128_OF(vextq_s8(v220, v220, 8u)).n128_u64[0];
      (*(void (**)(_QWORD*, __int64, _QWORD*))(*v215 + 16LL))(v215, v219, v274),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v274[2] = 0;
      LODWORD(v274[3]) = 0;
      v222 = *(__int64**)(v242 + 24);
      v274[0] = 0;
      v274[1] = 0x3F80000000000000LL;
      if ((atomic_load_explicit(v205, memory_order_acquire) & 1) == 0) {
        v235 = v222;
        v236 = __cxa_guard_acquire(GameData_212c840),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        v222 = v235;
        if (v236 != 0) {
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207) = 0;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207 + 8) = 0;
          *v207 = 0;
          v207[1] = 0;
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v207) = 0;
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v207) = 0;
          *((_BYTE*)((char*)0x40LL) + (_QWORD)v207) = 0;
          *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v207) = 0;
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v207) =
              (_UNKNOWN*)1065353216;
          GameRoutine_14a0820(v207),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          GameRoutine_2b0(),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          __cxa_guard_release(GameData_212c840),
              v18 = COERCE_AS(__typeof__(v18),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
          v222 = v235;
        }
      }
      RigidDynamic_14a0140(
          v222, (__int64)v279, 0x1.0000000000000p+0f, (__int64)v274,
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v207), 0x100000001LL),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      (**v281)(v281);
      updateMassAndInertia(*(__int64**)(*(_QWORD*)(v242 + 24) + 16LL),
                           *(_QWORD*)(*(_QWORD*)(v242 + 24) + 48LL),
                           (*(_QWORD*)(*(_QWORD*)(v242 + 24) + 56LL) -
                            *(_QWORD*)(*(_QWORD*)(v242 + 24) + 48LL)) >>
                               2,
                           nullptr, 0),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v223 = *(_QWORD*)(v242 + 24);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v237 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v237;
        __cxa_guard_release(&GameData_21a6130),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v224 = *(_QWORD*)(v223 + 16);
      v264 = GameData_21a6120;
      v265[0] = DWORD2(GameData_21a6120);
      (*(void (**)(__int64, __int64*, __int64))(*(_QWORD*)v224 + 648LL))(
          v224, &v264, 1),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v225 = *(_QWORD*)(v242 + 24);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v238 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v238;
        __cxa_guard_release(&GameData_21a6130),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v226 = *(_QWORD*)(v225 + 16);
      v264 = GameData_21a6120;
      v265[0] = DWORD2(GameData_21a6120);
      (*(void (**)(__int64, __int64*, __int64))(*(_QWORD*)v226 + 656LL))(
          v226, &v264, 1),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      (*(void (**)(_QWORD, float))(**(_QWORD**)(*(_QWORD*)(v242 + 24) + 16LL) +
                                   320LL))(
          *(_QWORD*)(*(_QWORD*)(v242 + 24) + 16LL), 0x1.0000000000000p-1f),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      v227 = *(_QWORD*)(v242 + 24);
      v228 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      *v228 = wld_MyContactCallback_vtable;
      v228[1] = v242;
      v229 = *(_QWORD*)(v227 + 8);
      *(_QWORD*)(v227 + 8) = v228;
      if (v229 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v229 + 8LL))(v229),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      if ((atomic_load_explicit(v205, memory_order_acquire) & 1) == 0 &&
          (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207) = 0;
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v207 + 8) = 0;
        *v207 = 0;
        v207[1] = 0;
        *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v207) = 0;
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v207) = 0;
        *((_BYTE*)((char*)0x40LL) + (_QWORD)v207) = 0;
        *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v207) = 0;
        *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v207) =
            (_UNKNOWN*)1065353216;
        GameRoutine_14a0820(v207),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        GameRoutine_2b0(),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        __cxa_guard_release(GameData_212c840),
            v18 =
                COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v21 =
                COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      GameRoutine_14a0af0(GameData_212c838, *(_QWORD*)(v242 + 24)),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
}

long double wld_a7ab80(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)a1 = *(_QWORD*)a2;
  *(_QWORD*)(a1 + 8) = *(_QWORD*)(a2 + 24);
  v2 = *(_DWORD*)(a2 + 32);
  *(_BYTE*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_DWORD*)(a1 + 16) = v2;
  *(_DWORD*)(a1 + 20) = 0;
  v3 = GameData_1a837f0;
  *(_OWORD*)(a1 + 64) = GameData_1a837f0;
  *(_OWORD*)(a1 + 112) = GameData_1a837f0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v22 = a1;
    v20 = a2;
    v7 = __cxa_guard_acquire(&GameData_21a55c0);
    v3 = GameData_1a837f0;
    a2 = v20;
    v8 = v7;
    a1 = v22;
    if (v8 != 0) {
      v9 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v9;
      v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v10;
      v11 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v11;
      v12 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v12;
      __cxa_guard_release(&GameData_21a55c0);
      v3 = GameData_1a837f0;
      a2 = v20;
      a1 = v22;
    }
  }
  v4 = GameData_21a55a0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_OWORD*)(a1 + 240) = v3;
  *(_OWORD*)(a1 + 176) = v4;
  *(_OWORD*)(a1 + 192) = GameData_21a55b0;
  *(_OWORD*)(a1 + 144) = GameData_21a5580;
  *(_OWORD*)(a1 + 160) = GameData_21a5590;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v23 = a1;
    v21 = a2;
    v19 = v3;
    v13 = __cxa_guard_acquire(&GameData_21a55c0);
    v3 = v19;
    a2 = v21;
    v14 = v13;
    a1 = v23;
    if (v14 != 0) {
      v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v15;
      v16 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v16;
      v17 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v17;
      v18 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v18;
      __cxa_guard_release(&GameData_21a55c0);
      v3 = v19;
      a2 = v21;
      a1 = v23;
    }
  }
  v5 = GameData_21a55a0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_OWORD*)(a1 + 352) = v3;
  *(_OWORD*)(a1 + 288) = v5;
  *(_OWORD*)(a1 + 304) = GameData_21a55b0;
  *(_OWORD*)(a1 + 256) = GameData_21a5580;
  *(_OWORD*)(a1 + 272) = GameData_21a5590;
  return GameRoutine_a7ad80((float32x4_t*)a1, (float32x4_t*)*(_QWORD*)(a2 + 8),
                            *(_QWORD*)(a2 + 16));
}

_QWORD* wld_a7f580(_QWORD* result, unsigned __int64 a2, long double a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  v3 = result[1];
  v4 = result[2];
  if (0x6DB6DB6DB6DB6DB7LL * ((v4 - v3) >> 3) >= a2) {
    if (a2 != 0) {
      v13 = v3 + 56 * a2;
      v14 = 56 * a2 - 56;
      if ((~(v14 / 0x38) & 3) != 0) {
        v15 = -(__int64)(((unsigned __int8)(v14 / 0x38) + 1) & 3);
        do {
          *(_QWORD*)v3 = 0x3F8000003F800000LL;
          *(_QWORD*)(v3 + 8) = 0x3F80000000000000LL;
          *(_WORD*)(v3 + 48) = 256;
          v16 = __CFADD__(v15++, 1);
          *(_QWORD*)(v3 + 16) = 0;
          *(_QWORD*)(v3 + 24) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 32) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 40) = 0;
          v3 += 56;
        } while (!v16);
      }
      if (v14 >= 0xA8) {
        do {
          *(_QWORD*)v3 = 0x3F8000003F800000LL;
          *(_QWORD*)(v3 + 8) = 0x3F80000000000000LL;
          *(_WORD*)(v3 + 48) = 256;
          *(_QWORD*)(v3 + 16) = 0;
          *(_QWORD*)(v3 + 24) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 32) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 40) = 0;
          *(_QWORD*)(v3 + 56) = 0x3F8000003F800000LL;
          *(_QWORD*)(v3 + 64) = 0x3F80000000000000LL;
          *(_WORD*)(v3 + 104) = 256;
          *(_QWORD*)(v3 + 72) = 0;
          *(_QWORD*)(v3 + 80) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 88) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 96) = 0;
          *(_QWORD*)(v3 + 112) = 0x3F8000003F800000LL;
          *(_QWORD*)(v3 + 120) = 0x3F80000000000000LL;
          *(_BYTE*)(v3 + 160) = 0;
          *(_QWORD*)(v3 + 128) = 0;
          *(_QWORD*)(v3 + 136) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 144) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 152) = 0;
          *(_BYTE*)(v3 + 161) = 1;
          *(_QWORD*)(v3 + 168) = 0x3F8000003F800000LL;
          *(_QWORD*)(v3 + 176) = 0x3F80000000000000LL;
          *(_WORD*)(v3 + 216) = 256;
          *(_QWORD*)(v3 + 184) = 0;
          *(_QWORD*)(v3 + 192) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 200) = 0xBF800000BF800000LL;
          *(_QWORD*)(v3 + 208) = 0;
          v3 += 224;
        } while (v3 != v13);
      }
      v3 = v13;
    }
    result[1] = v3;
  }
  else {
    v5 = v3 - *result;
    v6 = a2 + 0x6DB6DB6DB6DB6DB7LL * (v5 >> 3);
    if (v6 > 0x492492492492492LL) {
      GameRoutine_a7f910();
    }
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = 0x6DB6DB6DB6DB6DB7LL * ((v4 - *result) >> 3);
    if (2 * v8 > v6) {
      v6 = 2 * v8;
    }
    if (v8 >= 0x249249249249249LL) {
      v9 = 0x492492492492492LL;
    }
    else {
      v9 = v6;
    }
    if (v9 != 0) {
      if (v9 > 0x492492492492492LL) {
        GameRoutine_60a210_alt1(result);
      }
      v10 = result;
      v11 = a2;
      v12 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v9, 16, 0);
      result = v10;
      a2 = v11;
    }
    else {
      v12 = 0;
    }
    v17 = v12 + v5;
    v18 = 56 * a2 - 56;
    if ((~(v18 / 0x38) & 3) != 0) {
      v20 = -(__int64)(((unsigned __int8)(v18 / 0x38) + 1) & 3);
      v19 = v12 + v5;
      do {
        *(_QWORD*)v19 = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 8) = 0x3F80000000000000LL;
        *(_WORD*)(v19 + 48) = 256;
        v16 = __CFADD__(v20++, 1);
        *(_QWORD*)(v19 + 16) = 0;
        *(_QWORD*)(v19 + 24) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 32) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 40) = 0;
        v19 += 56;
      } while (!v16);
    }
    else {
      v19 = v12 + v5;
    }
    v21 = v17 + 56 * a2;
    if (v18 >= 0xA8) {
      do {
        *(_QWORD*)v19 = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 8) = 0x3F80000000000000LL;
        *(_WORD*)(v19 + 48) = 256;
        *(_QWORD*)(v19 + 16) = 0;
        *(_QWORD*)(v19 + 24) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 32) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 40) = 0;
        *(_QWORD*)(v19 + 56) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 64) = 0x3F80000000000000LL;
        *(_WORD*)(v19 + 104) = 256;
        *(_QWORD*)(v19 + 72) = 0;
        *(_QWORD*)(v19 + 80) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 88) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 96) = 0;
        *(_QWORD*)(v19 + 112) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 120) = 0x3F80000000000000LL;
        *(_BYTE*)(v19 + 160) = 0;
        *(_QWORD*)(v19 + 128) = 0;
        *(_QWORD*)(v19 + 136) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 144) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 152) = 0;
        *(_BYTE*)(v19 + 161) = 1;
        *(_QWORD*)(v19 + 168) = 0x3F8000003F800000LL;
        *(_QWORD*)(v19 + 176) = 0x3F80000000000000LL;
        *(_WORD*)(v19 + 216) = 256;
        *(_QWORD*)(v19 + 184) = 0;
        *(_QWORD*)(v19 + 192) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 200) = 0xBF800000BF800000LL;
        *(_QWORD*)(v19 + 208) = 0;
        v19 += 224;
      } while (v19 != v21);
    }
    v22 = v12 + 56 * v9;
    v23 = (__int64*)*result;
    v24 = (__int64*)result[1];
    v25 = (_QWORD*)(v17 + *result - (_QWORD)v24);
    if (v24 != (__int64*)*result) {
      v26 = v25;
      do {
        v27 = *v23;
        v28 = v23[2];
        v26[1] = v23[1];
        v26[2] = v28;
        *v26 = v27;
        v29 = v23[3];
        v30 = v23[4];
        v31 = v23[5];
        v32 = v23[6];
        v23 += 7;
        v26[5] = v31;
        v26[6] = v32;
        v26[3] = v29;
        v26[4] = v30;
        v26 += 7;
      } while (v23 != v24);
      v23 = (__int64*)*result;
    }
    *result = v25;
    result[1] = v21;
    result[2] = v22;
    if (v23 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v33 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v33,
                                                         a3);
    }
  }
  return result;
}

long double wld_a7fab0(__int64 a1)
{

#pragma clang fp contract(off)
  long double result;
  __int64* v2;
  __int64* v3;
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

  v2 = GameData_212e740[0];
  v3 = (__int64*)GameData_212c2a0;
  v4 = (__int64*)GameData_212c2b0;
  *(_QWORD*)(a1 + 80) = 1065353216;
  *(_QWORD*)(a1 + 88) = 0x100000000LL;
  *(_DWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_OWORD*)(a1 + 64) = (__typeof__(*(_OWORD*)(a1 + 64))){0};
  *(_QWORD*)(a1 + 96) = 0x4248000041D80000LL;
  *(_QWORD*)(a1 + 104) = 0x41C0000042100000LL;
  *(_QWORD*)(a1 + 112) = 0x4110000041800000LL;
  *(_QWORD*)a1 = v2 + 2;
  *(_QWORD*)(a1 + 8) = 0;
  *(_OWORD*)(a1 + 16) = GameData_1a83090;
  *(_OWORD*)(a1 + 32) = (__typeof__(*(_OWORD*)(a1 + 32))){0};
  v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3);
  v6 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8);
  *(_QWORD*)(a1 + 136) = 1092616192;
  v7 = *v3;
  v8 = v3[1];
  *(_OWORD*)(a1 + 48) = GameData_1a83610;
  *(_QWORD*)(a1 + 176) = v5;
  *(_QWORD*)(a1 + 184) = v6;
  v9 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v3);
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v3);
  *(_QWORD*)(a1 + 160) = v7;
  *(_QWORD*)(a1 + 168) = v8;
  v11 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3);
  v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v3 + 8);
  v14 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v4);
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v4);
  v16 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4);
  v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4 + 8);
  *(_QWORD*)(a1 + 208) = v9;
  *(_QWORD*)(a1 + 216) = v10;
  *(_QWORD*)(a1 + 192) = v11;
  *(_QWORD*)(a1 + 200) = v12;
  v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4);
  v19 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4);
  v18 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8);
  v20 = *v4;
  *(_QWORD*)(a1 + 240) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 8);
  *(_QWORD*)(a1 + 248) = v18;
  v21 = *v4;
  v22 = v4[1];
  *(_QWORD*)(a1 + 288) = v20;
  *(_QWORD*)(a1 + 296) = v17;
  *(_QWORD*)(a1 + 224) = v21;
  *(_QWORD*)(a1 + 232) = v22;
  v23 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v4);
  *(_QWORD*)(a1 + 272) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v4);
  *(_QWORD*)(a1 + 280) = v13;
  v25 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8);
  v24 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 16);
  v26 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v4);
  *(_QWORD*)(a1 + 320) = v16;
  *(_QWORD*)(a1 + 328) = v23;
  *(_QWORD*)(a1 + 336) = v14;
  *(_QWORD*)(a1 + 344) = v26;
  *(_QWORD*)(a1 + 256) = v24;
  *(_QWORD*)(a1 + 264) = v15;
  *(_QWORD*)(a1 + 304) = v19;
  *(_QWORD*)(a1 + 312) = v25;
  *(_QWORD*)a1 = wld_Camera_vtable;
  *(_BYTE*)(a1 + 132) = 1;
  *(_BYTE*)(a1 + 133) = 1;
  *(_QWORD*)(a1 + 124) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(a1 + 392) = 1023;
  *(_QWORD*)(a1 + 360) = 1023;
  *(_QWORD*)(a1 + 368) = 0;
  *(_OWORD*)&result = (__typeof__(*(_OWORD*)&result)){0};
  return result;
}

void wld_a7fda0(__int64 a1, _DWORD* a2)
{

#pragma clang fp contract(off)
  int v4;
  float v5;
  int v6;
  float v7;
  float v8;
  int v9;
  int v10;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
  if (a2 != nullptr) {
    *(_DWORD*)(a1 + 8) = a2[2];
    *(_DWORD*)(a1 + 120) = a2[30];
    *(_DWORD*)(a1 + 12) = a2[3];
    *(_OWORD*)(a1 + 16) = *((_OWORD*)a2 + 1);
    *(_OWORD*)(a1 + 32) = *((_OWORD*)a2 + 2);
    *(_OWORD*)(a1 + 48) = *((_OWORD*)a2 + 3);
    v4 = a2[22];
    *(_DWORD*)(a1 + 84) = a2[21];
    *(_DWORD*)(a1 + 88) = v4;
    *(_DWORD*)(a1 + 80) = a2[20];
    v5 = (*(float (**)(_DWORD*))(*(_QWORD*)a2 + 80LL))(a2),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
    (*(void (**)(_DWORD*))(*(_QWORD*)a2 + 80LL))(a2),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
    *(float*)(a1 + 112) = v5;
    *(_DWORD*)(a1 + 116) = v6;
    v7 = (*(float (**)(_DWORD*))(*(_QWORD*)a2 + 56LL))(a2),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
    v8 = (*(float (**)(_DWORD*))(*(_QWORD*)a2 + 64LL))(a2),
    v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
    *(float*)(a1 + 124) = v7;
    *(float*)(a1 + 128) = v8;
    *(_BYTE*)(a1 + 132) = *((_BYTE*)a2 + 132);
    *(_BYTE*)(a1 + 133) =
        (*(__int64 (**)(_DWORD*))(*(_QWORD*)a2 + 48LL))(a2) & 1,
                   v6 = COERCE_AS(__typeof__(v6),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
    v9 = a2[27];
    *(_DWORD*)(a1 + 104) = a2[26];
    *(_DWORD*)(a1 + 108) = v9;
    *(_DWORD*)(a1 + 136) = a2[34];
    v10 = a2[24];
    *(_DWORD*)(a1 + 92) = 0;
    *(_DWORD*)(a1 + 96) = v10;
    *(float*)(a1 + 100) = (*(float (**)(_DWORD*))(*(_QWORD*)a2 + 120LL))(a2),
                   v6 = COERCE_AS(__typeof__(v6),
                                  PSEUDO_REGISTER(float, "s1", "=w"));
    *(_DWORD*)(a1 + 92) = 1;
    *(_DWORD*)(a1 + 92) = a2[23];
    GameRoutine_b3aee0((float32x4_t*)a1),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

__int64 wld_a82d00(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
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
  __int64* v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  _QWORD* v42;
  __int64* v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64** v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
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
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64* v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64* v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  char v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64 result;
  _QWORD v109[6];

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      432, 16, 0);
  v6 = (__int64*)GameData_212c2a0;
  v7 = (__int64*)GameData_212c2b0;
  *(_QWORD*)(v5 + 112) = 1065353216;
  *(_QWORD*)(v5 + 120) = 0x100000000LL;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_DWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v5 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v5 + 144) = 0x4110000041800000LL;
  v8 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6);
  v9 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v6);
  v10 = *v6;
  v11 = v6[1];
  v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7 + 8);
  *(_QWORD*)(v5 + 168) = 1092616192;
  *(_QWORD*)v5 = GameData_1fc0cd8;
  *(_QWORD*)(v5 + 8) = 0;
  v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6);
  v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8);
  *(_QWORD*)(v5 + 240) = v8;
  *(_QWORD*)(v5 + 248) = v9;
  *(_QWORD*)(v5 + 192) = v10;
  *(_QWORD*)(v5 + 200) = v11;
  v17 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v16 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v19 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  v18 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v7);
  v20 = *v7;
  *(_QWORD*)(v5 + 224) = v14;
  *(_QWORD*)(v5 + 232) = v15;
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8);
  *(_QWORD*)(v5 + 208) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6);
  *(_QWORD*)(v5 + 216) = v21;
  v22 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7);
  *(_QWORD*)(v5 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 8);
  *(_QWORD*)(v5 + 280) = v16;
  v23 = *v7;
  v24 = v7[1];
  *(_QWORD*)(v5 + 320) = v20;
  *(_QWORD*)(v5 + 328) = v22;
  *(_QWORD*)(v5 + 256) = v23;
  *(_QWORD*)(v5 + 264) = v24;
  v25 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v7);
  *(_QWORD*)(v5 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  *(_QWORD*)(v5 + 312) = v18;
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  *(_QWORD*)(v5 + 288) =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  *(_QWORD*)(v5 + 296) = v12;
  *(_QWORD*)(v5 + 336) = v17;
  *(_QWORD*)(v5 + 344) = v26;
  v27 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v7);
  *(_OWORD*)(v5 + 48) = GameData_1a83090;
  *(_OWORD*)(v5 + 64) = (__typeof__(*(_OWORD*)(v5 + 64))){0};
  *(_QWORD*)(v5 + 368) = v19;
  *(_QWORD*)(v5 + 376) = v27;
  *(_OWORD*)(v5 + 80) = GameData_1a83610;
  *(_OWORD*)(v5 + 96) = (__typeof__(*(_OWORD*)(v5 + 96))){0};
  v28 = GameData_212e438;
  *(_QWORD*)(v5 + 352) = v13;
  *(_QWORD*)(v5 + 360) = v25;
  *(_BYTE*)(v5 + 164) = 1;
  *(_DWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_BYTE*)(v5 + 165) = 1;
  *(_QWORD*)(v5 + 424) = 1023;
  *(_QWORD*)(v5 + 392) = 1023;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 156) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(v5 + 32) = v28 + 16;
  *(_QWORD*)(a2 + 24) = v5 + 32;
  v29 = a2 + 24;
  v30 = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(a2 + 32) = v5;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt1(v30);
  }
  *(_DWORD*)(*(_QWORD*)(a2 + 24) + 8LL) = 2;
  *(_OWORD*)(*(_QWORD*)(a2 + 24) + 32LL) = GameData_1a82d30;
  *(_DWORD*)(*(_QWORD*)(a2 + 24) + 80LL) = 1084227584;
  *(_QWORD*)(*(_QWORD*)(a2 + 24) + 84LL) = 0x4120000000000000LL;
  v31 = *(_QWORD*)(a2 + 24);
  *(_DWORD*)(v31 + 100) = 1106247680;
  *(_DWORD*)(v31 + 92) = 1;
  GameRoutine_b3aee0(*(float32x4_t**)(a2 + 24));
  v32 = fw_memory_HeapManager_Allocate(*v4, 112, 16, 0);
  v33 = *(__int64**)(a2 + 48);
  *(_BYTE*)(v32 + 28) = 0;
  *(_QWORD*)v32 = 0;
  *(_QWORD*)(v32 + 8) = 0;
  *(_QWORD*)(v32 + 16) = 0;
  *(_BYTE*)(v32 + 24) = 0;
  *(_QWORD*)(v32 + 32) = 0;
  *(_QWORD*)(v32 + 40) = 0;
  *(_QWORD*)(v32 + 48) = 0;
  *(_QWORD*)(v32 + 56) = 0;
  *(_QWORD*)(v32 + 64) = 0;
  *(_QWORD*)(v32 + 72) = 0;
  *(_BYTE*)(v32 + 80) = 1;
  *(_QWORD*)(v32 + 88) = 0;
  *(_QWORD*)(v32 + 96) = 0;
  *(_QWORD*)(v32 + 104) = 0;
  *(_QWORD*)(a2 + 48) = v32;
  if (v33 != nullptr) {
    GameHr_a86500(v33);
    v34 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v34, (__int64)v33);
  }
  v35 = ((*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 3) - 1;
  v36 = (__int64*)fw_memory_HeapManager_Allocate(*v4, 560, 16, 0);
  GameRoutine_b7fd60(v36, a1, v35, (__int64*)(a2 + 24));
  v37 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a2 + 40) = v36;
  if (v37 != 0) {
    GameRoutine_b82060_alt1(v37);
    v38 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v38, v37);
    v36 = *(__int64**)(a2 + 40);
  }
  v39 = fw_memory_HeapManager_Allocate(*v4, 1008, 16, 0);
  GfxLoader_c3f900(v39, (__int64)v36);
  v40 = *(__int64**)(a2 + 56);
  *(_QWORD*)(a2 + 56) = v39;
  if (v40 != nullptr) {
    wld_c40980_alt1(v40);
    v41 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v4 + v41, (__int64)v40);
  }
  v42 = *(_QWORD**)(a2 + 24);
  *(_QWORD*)(a2 + 72) |= 7uLL;
  v43 = (__int64*)v42[46];
  v44 = (__int64*)v42[47];
  if (v43 == v44) {
  LABEL_20:
    v47 = fw_memory_HeapManager_Allocate(*v4, 272, 16, 0);
    v48 = GameData_21323b8;
    *(_BYTE*)(v47 + 8) = 1;
    *(_BYTE*)(v47 + 256) = 0;
    *(_QWORD*)(v47 + 16) = 0;
    *(_QWORD*)(v47 + 24) = 0;
    *(_QWORD*)(v47 + 32) = 0;
    *(_QWORD*)(v47 + 40) = 0;
    *(_QWORD*)(v47 + 48) = 0;
    *(_QWORD*)(v47 + 56) = 0;
    *(_QWORD*)(v47 + 64) = 0;
    *(_QWORD*)(v47 + 72) = 0;
    *(_QWORD*)(v47 + 80) = 0;
    *(_QWORD*)(v47 + 88) = 0;
    *(_QWORD*)(v47 + 96) = 0;
    *(_QWORD*)(v47 + 104) = 0;
    *(_QWORD*)(v47 + 112) = 0;
    *(_QWORD*)(v47 + 120) = 0;
    *(_QWORD*)(v47 + 128) = 0;
    *(_QWORD*)(v47 + 136) = 0;
    *(_QWORD*)(v47 + 144) = 0;
    *(_QWORD*)(v47 + 152) = 0;
    *(_QWORD*)(v47 + 160) = 0;
    *(_QWORD*)(v47 + 168) = 0;
    *(_QWORD*)(v47 + 176) = 0;
    *(_QWORD*)(v47 + 184) = 0;
    *(_QWORD*)(v47 + 192) = 0;
    *(_QWORD*)(v47 + 200) = 0;
    *(_QWORD*)(v47 + 208) = 0;
    *(_QWORD*)(v47 + 216) = 0;
    *(_QWORD*)(v47 + 224) = 0;
    *(_QWORD*)(v47 + 232) = 0;
    *(_QWORD*)(v47 + 240) = 0;
    *(_QWORD*)v47 = v48 + 16;
    v50 = v42[46];
    v49 = (_QWORD*)v42[47];
    if ((_QWORD*)v50 == v49 &&
        0xAAAAAAAAAAAAAAABLL * ((v42[48] - v50) >> 3) <= 6) {
      v49 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 168, 16, 0);
      v42[46] = v49;
      v42[47] = v49;
      v42[48] = v49 + 21;
      if (v50 != 0) {
        v51 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v4 + v51, v50);
        v49 = (_QWORD*)v42[47];
      }
    }
    v52 = v42[48];
    if ((unsigned __int64)v49 >= v52) {
      v55 = v42[46];
      v56 = (unsigned __int64)v49 - v55;
      v57 = 1 - 0x5555555555555555LL * (((__int64)v49 - v55) >> 3);
      if (v57 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_84;
      }
      v58 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v52 - v55) >> 3);
      if (2 * v58 > v57) {
        v57 = 2 * v58;
      }
      if (v58 >= 0x555555555555555LL) {
        v59 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v59 = v57;
      }
      if (v59 != 0) {
        if (v59 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_85;
        }
        v60 = fw_memory_HeapManager_Allocate(*v4, 24 * v59, 16, 0);
      }
      else {
        v60 = 0;
      }
      v61 = (__int64**)(v60 + v56);
      v62 = GameData_212e468;
      v61[2] = (__int64*)v47;
      v54 = v60 + v56 + 24;
      *v61 = v62;
      v61[1] = (__int64*)"ViewVolumeCulling";
      memcpy_alt1(v60, v55, v56);
      v42[46] = v60;
      v42[47] = v54;
      v42[48] = v60 + 24 * v59;
      v4 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v55 != 0) {
        v63 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v63 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v55);
      }
    }
    else {
      v53 = GameData_212e468;
      v49[2] = v47;
      v54 = (__int64)(v49 + 3);
      *v49 = v53;
      v49[1] = "ViewVolumeCulling";
    }
    v42[47] = v54;
    v42 = *(_QWORD**)v29;
    v43 = *(__int64**)(*(_QWORD*)v29 + 368LL);
    v44 = *(__int64**)(*(_QWORD*)v29 + 376LL);
  }
  else {
    v45 = (__int64*)v42[46];
    while (1) {
      v46 = *v45;
      v45 += 3;
      if (*(char**)(v46 + 8) == GameData_21323c0) {
        break;
      }
      if (v45 == v44) {
        goto LABEL_20;
      }
    }
  }
  if (v43 == v44) {
  LABEL_46:
    v65 = fw_memory_HeapManager_Allocate(*v4, 256, 16, 0);
    *(_BYTE*)(v65 + 8) = 1;
    *(_QWORD*)v65 = GameData_2132378 + 16;
    v66 = fw_memory_HeapManager_Allocate(*v4, 64, 16, 0);
    *(_QWORD*)(v66 + 16) = 0;
    v67 = v66;
    v68 = GameData_2132388[0];
    *(_QWORD*)(v66 + 24) = 0;
    v69 = v66 + 24;
    *(_QWORD*)(v66 + 32) = 0;
    *(_QWORD*)(v66 + 40) = 0;
    *(_BYTE*)(v66 + 56) = 1;
    __builtin_memset(v109, 0, sizeof(v109));
    *(_QWORD*)v66 = v68 + 16;
    *(_QWORD*)(v66 + 8) = 0;
    *(_QWORD*)(v66 + 48) = 0x10E0000003CLL;
    GameRoutine_19387a0_alt1((__int64*)(v66 + 24), 0x3F48u, v109);
    *(_QWORD*)(v65 + 16) = v69;
    *(_QWORD*)(v65 + 24) = v67;
    v70 = (__int64*)GameData_212c540;
    v71 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
    v72 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v7);
    v73 = *v7;
    v74 = v7[1];
    *(_QWORD*)(v65 + 160) = v71;
    *(_QWORD*)(v65 + 168) = v72;
    v76 = *v70;
    v75 = v70[1];
    v77 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
    v78 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
    *(_QWORD*)(v65 + 112) = v73;
    *(_QWORD*)(v65 + 120) = v74;
    *(_QWORD*)(v65 + 128) = v77;
    *(_QWORD*)(v65 + 136) = v78;
    *(_QWORD*)(v65 + 176) = v73;
    *(_QWORD*)(v65 + 184) = v74;
    *(_QWORD*)(v65 + 192) = v77;
    *(_QWORD*)(v65 + 200) = v78;
    *(_QWORD*)(v65 + 224) = v71;
    *(_QWORD*)(v65 + 232) = v72;
    *(_QWORD*)(v65 + 32) = v76;
    *(_QWORD*)(v65 + 40) = v75;
    v79 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8);
    *(_QWORD*)(v65 + 80) = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6);
    *(_QWORD*)(v65 + 88) = v79;
    v80 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v6);
    *(_QWORD*)(v65 + 96) =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6);
    *(_QWORD*)(v65 + 104) = v80;
    v81 = v6[1];
    *(_QWORD*)(v65 + 48) = *v6;
    *(_QWORD*)(v65 + 56) = v81;
    v82 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8);
    *(_QWORD*)(v65 + 64) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6);
    *(_QWORD*)(v65 + 72) = v82;
    v83 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7);
    v84 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7 + 8);
    *(_QWORD*)(v65 + 144) = v83;
    *(_QWORD*)(v65 + 152) = v84;
    *(_QWORD*)(v65 + 208) = v83;
    *(_QWORD*)(v65 + 216) = v84;
    *(_DWORD*)(v65 + 240) = 1036831949;
    v86 = v42[46];
    v85 = (_QWORD*)v42[47];
    if ((_QWORD*)v86 == v85 &&
        0xAAAAAAAAAAAAAAABLL * ((v42[48] - v86) >> 3) <= 6) {
      v85 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 168, 16, 0);
      v42[46] = v85;
      v42[47] = v85;
      v42[48] = v85 + 21;
      if (v86 != 0) {
        v87 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v87 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v4 + v87, v86);
        v85 = (_QWORD*)v42[47];
      }
    }
    v88 = v42[48];
    if ((unsigned __int64)v85 < v88) {
      v89 = (__int64)(v85 + 3);
      v90 = GameData_212e408[0];
      v85[2] = v65;
      *v85 = v90;
      v85[1] = "OcclusionCulling";
    LABEL_69:
      v42[47] = v89;
      goto LABEL_70;
    }
    v91 = v42[46];
    v92 = (unsigned __int64)v85 - v91;
    v93 = 1 - 0x5555555555555555LL * (((__int64)v85 - v91) >> 3);
    if (v93 <= 0xAAAAAAAAAAAAAAALL) {
      v94 = v4;
      v95 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v88 - v91) >> 3);
      if (2 * v95 > v93) {
        v93 = 2 * v95;
      }
      if (v95 >= 0x555555555555555LL) {
        v96 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v96 = v93;
      }
      if (v96 == 0) {
        v97 = 0;
      LABEL_65:
        v98 = (__int64*)(v97 + v92);
        v99 = v97 + 24 * v96;
        v89 = v97 + v92 + 24;
        v100 = GameData_212e408[0];
        v98[2] = v65;
        *v98 = v100;
        v98[1] = (__int64)"OcclusionCulling";
        memcpy_alt1(v97, v91, v92);
        v42[46] = v97;
        v42[47] = v89;
        v42[48] = v99;
        if (v91 != 0) {
          v101 = 128;
          if (*(_QWORD*)(*v94 + 200) == 0) {
            v101 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v94 + v101, v91);
        }
        goto LABEL_69;
      }
      if (v96 <= 0xAAAAAAAAAAAAAAALL) {
        v97 = fw_memory_HeapManager_Allocate(*v94, 24 * v96, 16, 0);
        goto LABEL_65;
      }
    LABEL_85:
      GameRoutine_60a210();
    }
  LABEL_84:
    GameRoutine_a864d0();
  }
  while (1) {
    v64 = *v43;
    v43 += 3;
    if (*(char**)(v64 + 8) == GameData_2132380) {
      break;
    }
    if (v43 == v44) {
      goto LABEL_46;
    }
  }
  v65 = 0;
LABEL_70:
  if ((*(_BYTE*)(*(_QWORD*)(a2 + 40) + 112LL) & 7) != 0) {
    if ((*(_BYTE*)(v65 + 8) & 1) == 0) {
      goto LABEL_76;
    }
    v102 = 0;
    v103 = 48;
  }
  else {
    if ((*(_BYTE*)(v65 + 8) & 1) != 0) {
      goto LABEL_76;
    }
    v102 = 1;
    v103 = 40;
  }
  *(_BYTE*)(v65 + 8) = v102;
  (*(void (**)(__int64))(*(_QWORD*)v65 + v103))(v65);
LABEL_76:
  v104 = *(_QWORD*)(a2 + 40);
  v105 = *(_QWORD*)(v65 + 16);
  v106 = *(_QWORD*)(v65 + 24);
  if (v106 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v106 + 16), 1u,
                              memory_order_relaxed);
    v107 = *(_QWORD**)(v104 + 144);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v106 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v107 = *(_QWORD**)(v104 + 144);
  }
  result = v107[1];
  *v107 = v105;
  v107[1] = v106;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  if (v106 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v106);
  }
  return result;
}

__attribute__((swiftcall)) void wld_a85bd0(PSEUDO_X8 x8_, __int64* a1,
                                           __int64* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 result;
  __int64 v12;
  __int64 v13;

  if (((a1[4] - a1[3]) & 0x7FFFFFFF8LL) != 8) {
    result = MainRenderTask_bb8650(a1[1], a2);
    v13 = a1[1];
    v10 = (_QWORD*)a1[2];
    *(_BYTE*)a3 = 0;
    *(_QWORD*)(a3 + 8) = v13;
    *(_QWORD*)(a3 + 16) = v10;
    if (v10 == nullptr) {
      result;
      return;
    }
  LABEL_10:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 1), 1u,
                              memory_order_relaxed);
    {
      result;
      return;
    }
  }
  v6 = *a1;
  v7 = *game_g_frame_clock_ptr[0];
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 1728,
                                               16, 0);
  v9 = v8 + 4;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_1fc0c88;
  result = gfxa_MainRenderTask_initialize1((__int64)(v8 + 4), v7, v6, a2);
  v12 = a1[2];
  a1[1] = (__int64)v9;
  a1[2] = (__int64)v10;
  if (v12 == 0) {
    *(_QWORD*)(a3 + 8) = v9;
    *(_QWORD*)(a3 + 16) = v10;
    *(_BYTE*)a3 = 1;
    goto LABEL_10;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = std___1___shared_weak_count___release_weak(v12);
  }
  *(_BYTE*)a3 = 1;
  v10 = (_QWORD*)a1[2];
  *(_QWORD*)(a3 + 8) = a1[1];
  *(_QWORD*)(a3 + 16) = v10;
  if (v10 != nullptr) {
    goto LABEL_10;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void wld_bd3a40(PSEUDO_X8 x8_, __int64 a1,
                                           __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = *(_QWORD*)(a1 + 24);
  v4 = *(_QWORD*)(a1 + 32);
  if (v3 == v4) {
  LABEL_9:
    v11 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
    *(_QWORD*)(v11 + 16) = 0;
    v12 = GameData_2131678;
    *(_DWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_DWORD*)(v11 + 48) = 0x2000;
    *(_DWORD*)(v11 + 104) = 0;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_WORD*)(v11 + 80) = 0;
    *(_WORD*)(v11 + 116) = 0;
    *(_WORD*)(v11 + 136) = 0;
    *(_BYTE*)(v11 + 160) = 0;
    *(_BYTE*)(v11 + 288) = 0;
    *(_QWORD*)(v11 + 272) = 0;
    *(_QWORD*)(v11 + 280) = 0;
    *(_QWORD*)(v11 + 256) = 0;
    *(_QWORD*)(v11 + 264) = 0;
    *(_QWORD*)(v11 + 240) = 0;
    *(_QWORD*)(v11 + 248) = 0;
    *(_QWORD*)(v11 + 224) = 0;
    *(_QWORD*)(v11 + 232) = 0;
    *(_QWORD*)(v11 + 208) = 0;
    *(_QWORD*)(v11 + 216) = 0;
    *(_QWORD*)(v11 + 192) = 0;
    *(_QWORD*)(v11 + 200) = 0;
    *(_QWORD*)(v11 + 176) = 0;
    *(_QWORD*)(v11 + 184) = 0;
    *(_QWORD*)(v11 + 168) = 0;
    *(_QWORD*)(v11 + 120) = 0;
    *(_DWORD*)(v11 + 127) = 0;
    a3[1] = v11;
    *(_QWORD*)v11 = v12 + 16;
    *(_QWORD*)(v11 + 8) = 0;
    *(_WORD*)(v11 + 108) = 256;
    *(_DWORD*)(v11 + 112) = -1082130432;
    *(_DWORD*)(v11 + 292) = 2;
    *(_QWORD*)(v11 + 24) = 0;
    result = v11 + 24;
    *a3 = result;
  }
  else {
    v6 = *a2;
    while (1) {
      v7 = *(_QWORD*)(v3 + 8);
      v8 = *(_QWORD*)v7;
      if (*(_QWORD*)v7 != 0 && *(_DWORD*)(v8 + 16) == *(_DWORD*)(v7 + 8)) {
        result = strcmp(**(_QWORD**)(v8 + 24), v6);
        if ((_DWORD)result == 0) {
          break;
        }
      }
      v3 += 128;
      if (v3 == v4) {
        goto LABEL_9;
      }
    }
    v10 = *(_QWORD*)(v3 + 16);
    *a3 = v7;
    a3[1] = v10;
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  {
    result;
    return;
  }
}

void wld_be6480(__int64 a1, __int64 a2, unsigned __int64 a3, float a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  __int64 v6;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int8* v39;
  unsigned __int8* v40;
  unsigned __int8* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int8 explicit;
  int* v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 primeEm;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64* v75;
  unsigned __int64 v76;
  bool v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  _QWORD* v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int8* v87;
  unsigned __int8* v88;
  unsigned __int64 v89;
  bool v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int8* v93;
  _QWORD* v94;
  int v95;
  __int64 v96;
  _QWORD** v97;
  __int64 v98;
  __int64 v99;
  _QWORD* v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  unsigned __int64 v104;
  __int64 v105;
  _QWORD* v106;
  __int64 v107;
  unsigned __int64 v108;
  bool v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int8* v112;
  unsigned __int64 v113;
  bool v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  unsigned __int8* v117;
  unsigned __int64 v118;
  bool v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  unsigned __int8* v122;
  __int64 v123;
  struct {
    __int64* v124;
    int v125;
    int v126;
  } v124_;
  struct {
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    char gap48_[16];
    __int64 vars0;
    __int64 vars8;
  } v127_;

  if (*(float*)(a1 + 272) <= 0x0.0p+0f) {
    if (a3 != 0) {
      GameRoutine_60a060((char*)(a1 + 48), a2, a3);
      MaterialAnimModule_be6340(a1);
      return;
    }
    if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
      **(_BYTE**)(a1 + 64) = 0;
      *(_QWORD*)(a1 + 56) = 0;
    }
    else {
      *(_WORD*)(a1 + 48) = 0;
    }
    *(_DWORD*)(a1 + 72) = -1;
    if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
      **(_BYTE**)(a1 + 96) = 0;
      *(_QWORD*)(a1 + 88) = 0;
    }
    else {
      *(_WORD*)(a1 + 80) = 0;
    }
    *(_QWORD*)(a1 + 108) = 0;
    goto LABEL_76;
  }
  if (a3 == 0) {
    *(_DWORD*)(a1 + 72) = *(_DWORD*)(a1 + 104);
    if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
      **(_BYTE**)(a1 + 96) = 0;
      *(_QWORD*)(a1 + 88) = 0;
    }
    else {
      *(_WORD*)(a1 + 80) = 0;
    }
    *(_DWORD*)(a1 + 104) = -1;
    if (*(_QWORD*)(a1 + 168) != 0) {
      v24 = *(_QWORD**)(a1 + 160);
      if (v24 != nullptr) {
        v25 = fw_memory_g_heap_manager_ptr;
        do {
          v27 = (__int64)v24;
          v24 = (_QWORD*)*v24;
          MaterialAnimModule_beb940_alt1((__int64*)(v27 + 40));
          if ((*(_BYTE*)(v27 + 16) & 1) != 0) {
            v28 = *(_QWORD*)(v27 + 32);
            if (v28 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
                v29 = 128;
              }
              else {
                v29 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v25 + v29, v28);
            }
          }
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v25 + v26, v27);
        } while (v24 != nullptr);
      }
      v30 = *(_QWORD*)(a1 + 152);
      *(_QWORD*)(a1 + 160) = 0;
      if (v30 != 0) {
        v31 = v30 & 7;
        if (v30 >= 8) {
          v33 = v30 & 0xFFFFFFFFFFFFFFF8LL;
          v32 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v32 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v32 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v32 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v32 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v32 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v32 + 48) = 0;
            v34 = *(_QWORD*)(a1 + 144) + 8 * v32;
            v32 += 8;
            *(_QWORD*)(v34 + 56) = 0;
          } while (v33 != v32);
        }
        else {
          v32 = 0;
        }
        if (v31 != 0) {
          v35 = 8 * v32;
          do {
            --v31;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + v35) = 0;
            v35 += 8;
          } while (v31 != 0);
        }
      }
      *(_QWORD*)(a1 + 168) = 0;
    }
    *(_QWORD*)(a1 + 108) = 0;
    return;
  }
  v5 = *(unsigned __int8*)(a1 + 48);
  v6 = a1 + 49;
  v10 = (v5 & 1) == 0;
  v11 = v5 >> 1;
  if (v10) {
    v12 = v11;
  }
  else {
    v12 = *(_QWORD*)(a1 + 56);
  }
  if (!v10) {
    v6 = *(_QWORD*)(a1 + 64);
  }
  if (v12 >= a3) {
    v13 = a3;
  }
  else {
    v13 = v12;
  }
  if (memcmp_alt2(a2, v6, v13) == 0 && a3 == v12) {
    if (*(_QWORD*)(a1 + 168) != 0) {
      v15 = *(_QWORD**)(a1 + 160);
      if (v15 != nullptr) {
        v16 = fw_memory_g_heap_manager_ptr;
        do {
          v18 = (__int64)v15;
          v15 = (_QWORD*)*v15;
          MaterialAnimModule_beb940_alt1((__int64*)(v18 + 40));
          if ((*(_BYTE*)(v18 + 16) & 1) != 0) {
            v19 = *(_QWORD*)(v18 + 32);
            if (v19 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
                v20 = 128;
              }
              else {
                v20 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v20, v19);
            }
          }
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v17, v18);
        } while (v15 != nullptr);
      }
      v21 = *(_QWORD*)(a1 + 152);
      *(_QWORD*)(a1 + 160) = 0;
      if (v21 != 0) {
        v22 = v21 & 7;
        if (v21 >= 8) {
          v36 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          v23 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v23) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v23 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v23 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v23 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v23 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v23 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v23 + 48) = 0;
            v37 = *(_QWORD*)(a1 + 144) + 8 * v23;
            v23 += 8;
            *(_QWORD*)(v37 + 56) = 0;
          } while (v36 != v23);
        }
        else {
          v23 = 0;
        }
        if (v22 != 0) {
          v38 = 8 * v23;
          do {
            --v22;
            *(_QWORD*)(*(_QWORD*)(a1 + 144) + v38) = 0;
            v38 += 8;
          } while (v22 != 0);
        }
      }
      *(_QWORD*)(a1 + 168) = 0;
    }
    if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
      **(_BYTE**)(a1 + 96) = 0;
      *(_QWORD*)(a1 + 88) = 0;
    }
    else {
      *(_WORD*)(a1 + 80) = 0;
    }
  LABEL_76:
    *(_DWORD*)(a1 + 104) = -1;
    return;
  }
  *(float*)(a1 + 108) = a4;
  *(_DWORD*)(a1 + 112) = 0;
  GameRoutine_60a060((char*)(a1 + 80), a2, a3);
  v127_.v129 = v127_.vars0;
  v127_.v130 = v127_.vars8;
  v39 = *(unsigned __int8**)(a1 + 24);
  v40 = *(unsigned __int8**)(a1 + 32);
  v41 = v39;
  if (v39 != v40) {
    if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
      v42 = *(_QWORD*)(a1 + 88);
    }
    else {
      v42 = *(_BYTE*)(a1 + 80) >> 1;
    }
    if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
      v46 = *(_QWORD*)(a1 + 96);
      v41 = *(unsigned __int8**)(a1 + 24);
      while (1) {
        v47 = *v41;
        v48 = *((_QWORD*)v41 + 1);
        if ((v47 & 1) == 0) {
          v48 = v47 >> 1;
        }
        if (v48 == v42) {
          v49 = (v47 & 1) != 0 ? *((_QWORD*)v41 + 2) : (__int64)(v41 + 1);
          if (memcmp_alt2(v49, v46, v42) == 0) {
            break;
          }
        }
        v41 += 64;
        if (v41 == v40) {
          return;
        }
      }
    }
    else {
      v41 = *(unsigned __int8**)(a1 + 24);
      while (1) {
        v43 = *v41;
        v44 = *((_QWORD*)v41 + 1);
        if ((v43 & 1) == 0) {
          v44 = v43 >> 1;
        }
        if (v44 == v42) {
          v45 = (v43 & 1) != 0 ? *((_QWORD*)v41 + 2) : (__int64)(v41 + 1);
          if (memcmp_alt2(v45, a1 + 81, v42) == 0) {
            break;
          }
        }
        v41 += 64;
        if (v41 == v40) {
          return;
        }
      }
    }
  }
  if (v41 != v40) {
    if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
      **(_BYTE**)(a1 + 96) = 0;
      *(_QWORD*)(a1 + 88) = 0;
      v39 = *(unsigned __int8**)(a1 + 24);
    }
    else {
      *(_WORD*)(a1 + 80) = 0;
    }
    *(_DWORD*)(a1 + 104) = (unsigned __int64)(v41 - v39) >> 6;
    *((_DWORD*)v41 + 6) = 0;
    v50 = *(_QWORD*)(a1 + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v52 = GameData_212df08;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
      *v52 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release_alt1((__int64)GameData_212df10);
    }
    v53 = *(_QWORD*)(v50 + 512);
    v54 = v53;
    do {
      if (v54 == *(_QWORD*)(v50 + 504)) {
        return;
      }
      v55 = *(_DWORD*)(v54 - 16);
      v54 -= 16;
      v53 -= 16;
    } while (v55 != *v52);
    if (*(_QWORD*)(v50 + 512) != v53) {
      v56 = *(_QWORD*)(v53 + 8);
      if (v56 != 0) {
        v57 = *(_QWORD*)(v56 + 24);
        if (*(_QWORD*)(a1 + 168) != 0) {
          v58 = *(_QWORD**)(a1 + 160);
          if (v58 != nullptr) {
            v59 = fw_memory_g_heap_manager_ptr;
            do {
              v61 = (__int64)v58;
              v58 = (_QWORD*)*v58;
              MaterialAnimModule_beb940_alt1((__int64*)(v61 + 40));
              if ((*(_BYTE*)(v61 + 16) & 1) != 0) {
                v62 = *(_QWORD*)(v61 + 32);
                if (v62 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v59 + 200LL) != 0) {
                    v63 = 128;
                  }
                  else {
                    v63 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v59 + v63, v62);
                }
              }
              if (*(_QWORD*)(*(_QWORD*)v59 + 200LL) != 0) {
                v60 = 128;
              }
              else {
                v60 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v59 + v60, v61);
            } while (v58 != nullptr);
          }
          v64 = *(_QWORD*)(a1 + 152);
          *(_QWORD*)(a1 + 160) = 0;
          if (v64 != 0) {
            v65 = v64 & 7;
            if (v64 >= 8) {
              v67 = v64 & 0xFFFFFFFFFFFFFFF8LL;
              v66 = 0;
              do {
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v66) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v66 + 8) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v66 + 16) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v66 + 24) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v66 + 32) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v66 + 40) = 0;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v66 + 48) = 0;
                v68 = *(_QWORD*)(a1 + 144) + 8 * v66;
                v66 += 8;
                *(_QWORD*)(v68 + 56) = 0;
              } while (v67 != v66);
            }
            else {
              v66 = 0;
            }
            if (v65 != 0) {
              v69 = 8 * v66;
              do {
                --v65;
                *(_QWORD*)(*(_QWORD*)(a1 + 144) + v69) = 0;
                v69 += 8;
              } while (v65 != 0);
            }
          }
          *(_QWORD*)(a1 + 168) = 0;
        }
        primeEm = vcvtps_u64_f32(
            (float)(0xAAAAAAAAAAAAAAABLL *
                    ((__int64)(*((_QWORD*)v41 + 6) - *((_QWORD*)v41 + 5)) >>
                     4)) /
            *(float*)(a1 + 176));
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime_alt1(primeEm);
        }
        v71 = *(_QWORD*)(a1 + 152);
        if (primeEm > v71) {
          goto LABEL_138;
        }
        if (primeEm < v71) {
          v72 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 168) /
                               *(float*)(a1 + 176));
          if (v71 < 3 || (v71 & (v71 - 1)) != 0) {
            v72 = std___1___next_prime_alt1(v72);
          }
          else {
            v73 = 1LL << (-(char)__clz(v72 - 1) & 63);
            if (v72 >= 2) {
              v72 = v73;
            }
          }
          if (primeEm <= v72) {
            primeEm = v72;
          }
          if (primeEm < v71) {
          LABEL_138:
            GameRoutine_bebfa0_alt1((__int64*)(a1 + 144), primeEm);
          }
        }
        v74 = *((__int64**)v41 + 5);
        v75 = *((__int64**)v41 + 6);
        if (v74 != v75) {
          while (1) {
            v76 = *(unsigned __int8*)v74;
            v77 = (v76 & 1) == 0;
            v78 = v76 >> 1;
            v79 = v77 ? (__int64)v74 + 1 : v74[2];
            v80 = v77 ? v78 : v74[1];
            Model_a66f60_alt1((void*)(&v127_.v127), v57, v79, v80);
            v81 = v127_.v127;
            if (v127_.v127 != 0) {
              break;
            }
          LABEL_227:
            v123 = v127_.v128;
            if (v127_.v128 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v127_.v128 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v123 + 16LL))(v123);
              std___1___shared_weak_count___release_weak_alt1(v123);
            }
            v74 += 6;
            if (v74 == v75) {
              return;
            }
          }
          v124_.v124 = v74;
          v82 = MaterialAnimModule_bebc00((float*)(a1 + 144),
                                          (unsigned __int8*)v74, &v124_.v124);
          v83 =
              vcvtps_u64_f32((float)(unsigned __int64)((v74[4] - v74[3]) >> 6) /
                             *((float*)v82 + 18));
          if (v83 == 1) {
            v83 = 2;
          }
          else if ((v83 & (v83 - 1)) != 0) {
            v83 = std___1___next_prime_alt1(v83);
          }
          v84 = v82[6];
          if (v83 > v84) {
            goto LABEL_164;
          }
          if (v83 < v84) {
            v85 = vcvtps_u64_f32((float)(unsigned __int64)v82[8] /
                                 *((float*)v82 + 18));
            if (v84 < 3 || (v84 & (v84 - 1)) != 0) {
              v85 = std___1___next_prime_alt1(v85);
            }
            else {
              v86 = 1LL << (-(char)__clz(v85 - 1) & 63);
              if (v85 >= 2) {
                v85 = v86;
              }
            }
            if (v83 <= v85) {
              v83 = v85;
            }
            if (v83 < v84) {
            LABEL_164:
              GameRoutine_bec5e0_alt1(v82 + 5, v83);
            }
          }
          v87 = (unsigned __int8*)v74[3];
          v88 = (unsigned __int8*)v74[4];
          while (1) {
            while (1) {
              if (v87 == v88) {
                goto LABEL_227;
              }
              v124_.v124 = (__int64*)v87;
              v94 =
                  MaterialAnimModule_bec240((float*)v82 + 10, v87, &v124_.v124);
              v95 = *((_DWORD*)v87 + 6);
              *((_DWORD*)v94 + 10) = v95;
              if (v95 <= 1) {
                break;
              }
              if (v95 == 2) {
                v105 = v94[6];
                v106 = v94 + 6;
                v107 = v94[7] - v105;
                if ((unsigned __int64)(v107 >> 2) > 2) {
                  if (v107 != 12) {
                    v94[7] = v105 + 12;
                  }
                }
                else {
                  GameRoutine_bdff40_alt1(v94 + 6, 3 - (v107 >> 2));
                }
                v113 = *v87;
                v114 = (v113 & 1) == 0;
                v115 = v113 >> 1;
                if (v114) {
                  v116 = v115;
                }
                else {
                  v116 = *((_QWORD*)v87 + 1);
                }
                if (v114) {
                  v117 = v87 + 1;
                }
                else {
                  v117 = *((unsigned __int8**)v87 + 2);
                }
                (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                             __int64**))(*(_QWORD*)v81 + 96LL))(v81, v117, v116,
                                                                &v124_.v124);
                v87 += 64;
                *(_QWORD*)*v106 = v124_.v124;
                *(_DWORD*)(*v106 + 8LL) = v124_.v125;
              }
              else {
                if (v95 == 3) {
                  v99 = v94[6];
                  v100 = v94 + 6;
                  v101 = v94[7] - v99;
                  if ((unsigned __int64)(v101 >> 2) <= 3) {
                    GameRoutine_bdff40_alt1(v94 + 6, 4 - (v101 >> 2));
                  }
                  else if (v101 != 16) {
                    v94[7] = v99 + 16;
                  }
                  v89 = *v87;
                  v90 = (v89 & 1) == 0;
                  v91 = v89 >> 1;
                  if (v90) {
                    v92 = v91;
                  }
                  else {
                    v92 = *((_QWORD*)v87 + 1);
                  }
                  if (v90) {
                    v93 = v87 + 1;
                  }
                  else {
                    v93 = *((unsigned __int8**)v87 + 2);
                  }
                  (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                               __int64**))(*(_QWORD*)v81 + 104LL))(
                      v81, v93, v92, &v124_.v124);
                  *(_QWORD*)*v100 = v124_.v124;
                  *(_DWORD*)(*v100 + 8LL) = v124_.v125;
                  *(_DWORD*)(*v100 + 12LL) = v124_.v126;
                }
              LABEL_184:
                v87 += 64;
              }
            }
            if (v95 != 0) {
              if (v95 != 1) {
                goto LABEL_184;
              }
              v96 = v94[6];
              v97 = (_QWORD**)(v94 + 6);
              v98 = v94[7] - v96;
              if ((unsigned __int64)(v98 >> 2) > 1) {
                if (v98 != 8) {
                  v94[7] = v96 + 8;
                }
              }
              else {
                GameRoutine_bdff40_alt1(v94 + 6, 2 - (v98 >> 2));
              }
              v108 = *v87;
              v109 = (v108 & 1) == 0;
              v110 = v108 >> 1;
              if (v109) {
                v111 = v110;
              }
              else {
                v111 = *((_QWORD*)v87 + 1);
              }
              if (v109) {
                v112 = v87 + 1;
              }
              else {
                v112 = *((unsigned __int8**)v87 + 2);
              }
              (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                           __int64**))(*(_QWORD*)v81 + 88LL))(v81, v112, v111,
                                                              &v124_.v124);
              v87 += 64;
              **v97 = v124_.v124;
            }
            else {
              v102 = v94[6];
              v103 = v94 + 6;
              v104 = (v94[7] - v102) >> 2;
              if (v94[7] == v102) {
                GameRoutine_bdff40_alt1(v94 + 6, 1 - v104);
                v102 = *v103;
              }
              else if (v104 >= 2) {
                v94[7] = v102 + 4;
              }
              v118 = *v87;
              v119 = (v118 & 1) == 0;
              v120 = v118 >> 1;
              if (v119) {
                v121 = v120;
              }
              else {
                v121 = *((_QWORD*)v87 + 1);
              }
              if (v119) {
                v122 = v87 + 1;
              }
              else {
                v122 = *((unsigned __int8**)v87 + 2);
              }
              (*(void (**)(__int64, unsigned __int8*, unsigned __int64,
                           __int64))(*(_QWORD*)v81 + 80LL))(v81, v122, v121,
                                                            v102);
              v87 += 64;
            }
          }
        }
      }
    }
  }
}

float wld_c0ed40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  const char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int128 v28;
  float result;
  __int64 v30;
  struct {
    _QWORD v31[2];
    int v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
    int v35;
  } v33_;

  *(_BYTE*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  v30 = a4;
  *(_DWORD*)(a1 + 17) = 33686018;
  *(_QWORD*)a1 = wld_GroundModule_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_DWORD*)(a1 + 32) = -1;
  *(_DWORD*)(a1 + 48) = -1;
  *(_DWORD*)(a1 + 64) = -1;
  *(_QWORD*)(a1 + 96) = 0x3F4CCCCD3F4CCCCDLL;
  v6 = *(const char**)(a3 + 24);
  v7 = strlen_alt1(v6);
  v8 = g3d_a6c880(&v30, (__int64)v6, v7);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 144);
    v10 = *(_QWORD*)(*(_QWORD*)(v8 + 128) + 8LL);
  }
  else {
    v11 = *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424);
    v12 = strlen_alt1(v6);
    GameRoutine_b34420((void*)((__int64)&v33_.v33), v11,
                       (__int64)"Graphics/Textures/common_default", 0x20u,
                       (__int64)v6, v12, 0);
    v10 = v33_.v33;
    if (v33_.v33 == 0 || (_DWORD)v33_.v34 == -1) {
      GameRoutine_b34420((void*)((__int64)v31_.v31), v11,
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"Cmn_Default_BC", 0xEu, 0);
      v10 = v31_.v31[0];
      v33_.v33 = v31_.v31[0];
      v33_.v34 = v31_.v31[1];
      v33_.v35 = v31_.v32;
    }
    LODWORD(v9) = v33_.v34;
  }
  *(_QWORD*)(a1 + 24) = v10;
  *(_DWORD*)(a1 + 32) = v9;
  v13 = *(const char**)(a3 + 32);
  v14 = strlen_alt1(v13);
  v15 = g3d_a6c880(&v30, (__int64)v13, v14);
  if (v15 != 0) {
    v16 = *(_QWORD*)(v15 + 144);
    v17 = *(_QWORD*)(*(_QWORD*)(v15 + 128) + 8LL);
  }
  else {
    v18 = *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424);
    v19 = strlen_alt1(v13);
    GameRoutine_b34420((void*)((__int64)&v33_.v33), v18,
                       (__int64)"Graphics/Textures/common_default", 0x20u,
                       (__int64)v13, v19, 0);
    v17 = v33_.v33;
    if (v33_.v33 == 0 || (_DWORD)v33_.v34 == -1) {
      GameRoutine_b34420((void*)((__int64)v31_.v31), v18,
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"Cmn_Default_BC", 0xEu, 0);
      v17 = v31_.v31[0];
      v33_.v33 = v31_.v31[0];
      v33_.v34 = v31_.v31[1];
      v33_.v35 = v31_.v32;
    }
    LODWORD(v16) = v33_.v34;
  }
  *(_QWORD*)(a1 + 40) = v17;
  *(_DWORD*)(a1 + 48) = v16;
  v20 = *(const char**)(a3 + 40);
  v21 = strlen_alt1(v20);
  v22 = g3d_a6c880(&v30, (__int64)v20, v21);
  if (v22 != 0) {
    v23 = *(_QWORD*)(v22 + 144);
    v24 = *(_QWORD*)(*(_QWORD*)(v22 + 128) + 8LL);
  }
  else {
    v25 = *(_QWORD**)(*game_g_frame_clock_ptr[0] + 13424);
    v26 = strlen_alt1(v20);
    GameRoutine_b34420((void*)((__int64)&v33_.v33), v25,
                       (__int64)"Graphics/Textures/common_default", 0x20u,
                       (__int64)v20, v26, 0);
    v24 = v33_.v33;
    if (v33_.v33 == 0 || (_DWORD)v33_.v34 == -1) {
      GameRoutine_b34420((void*)((__int64)v31_.v31), v25,
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"Cmn_Default_BC", 0xEu, 0);
      v24 = v31_.v31[0];
      v33_.v33 = v31_.v31[0];
      v33_.v34 = v31_.v31[1];
      v33_.v35 = v31_.v32;
    }
    LODWORD(v23) = v33_.v34;
  }
  *(_QWORD*)(a1 + 56) = v24;
  v27 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(a1 + 64) = v23;
  v28 = *(_OWORD*)(v27 + 304);
  *(_QWORD*)(a1 + 72) = *(_QWORD*)a3;
  *(_QWORD*)(a1 + 88) = *(_QWORD*)(a3 + 8);
  *(_QWORD*)(a1 + 80) = COERCE_UNSIGNED_INT(*(float*)&v28 + *(float*)(a3 + 8)) |
                        ((unsigned __int64)COERCE_UNSIGNED_INT(
                             *((float*)&v28 + 2) + *(float*)(a3 + 12))
                         << 32);
  *(_DWORD*)(a1 + 96) = *(_DWORD*)(a3 + 16);
  result = *(float*)(a3 + 20);
  *(float*)(a1 + 100) = result;
  return result;
}

unsigned __int64 wld_c267a0(__int64 a1, __int64 a2, unsigned __int8* a3,
                            char a4, char a5, __int64 a6, unsigned __int64 a7)
{
  __int64* v8;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v23;
  _QWORD* v24;
  int v25;
  __int128 v26;
  __int128 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int8* v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int8* v39;
  __int64* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  char* v53;
  unsigned __int64 v54;
  bool v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int8* v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  char* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int8* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  bool v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int8* v72;
  unsigned __int64 v73;
  char* v74;
  char* v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  char* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  bool v94;
  unsigned __int64 v95;
  unsigned __int64 v96;
  unsigned __int8* v97;
  unsigned __int64 v98;
  __int64* v99;
  char* v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64* v111;
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
  char v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 result;
  unsigned __int64 v129;
  bool v130;
  unsigned __int64 v131;
  unsigned __int64 v132;
  unsigned __int8* v133;
  unsigned __int64 v134;
  __int64* v135;
  char* v136;
  __int64 v137;
  __int64 v138;
  char* v139;
  __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  __int128* v143;
  __int64 v144;
  int v145;
  unsigned __int8* v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  char* v152;
  char* v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  char* v156;
  unsigned __int64 v157;
  const char* v158;
  char* v159;
  unsigned __int64 v160;
  char v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int128 v165;
  __int64 v166;
  bool v167;
  unsigned __int64 v168;
  char* v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  char* v178;
  __int64 v179;
  unsigned __int64 v180;
  unsigned __int8* v181;
  unsigned __int8* v182;
  bool v183;
  unsigned __int64 v184;
  unsigned __int64 v185;
  unsigned __int8* v186;
  unsigned __int64 v187;
  char* v188;
  __int64 v189;
  _WORD* v190;
  char* v191;
  unsigned __int64 v192;
  __int64 v193;
  __int128 v194;
  unsigned __int64 v195;
  char* v196;
  char* v197;
  unsigned __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  struct {
    __int64 v216;
    unsigned __int64 v217;
    char* v218;
  } v216_;
  struct {
    __int128 v219;
    __int128 v220;
    __int128 v221;
    __int128 v222;
  } v219_;
  struct {
    __int64 v223;
    unsigned __int64 v224;
  } v223_;
  __int64 v225;
  struct {
    unsigned __int64 v226;
    __int64 v227;
  } v226_;
  struct {
    __int64 v228;
    __int64 v229;
  } v228_;
  __int64 v230;
  struct {
    unsigned __int64 v231;
    char* v232;
  } v231_;
  struct {
    __int64 v233;
    __int64 v234;
  } v233_;
  struct {
    __int64 v235;
    unsigned __int64 v236;
    char* v237;
  } v235_;

  *(_QWORD*)a1 = a2;
  v8 = (__int64*)(a1 + 8);
  if ((*a3 & 1) != 0) {
    fw_text_String_CopyTerminated(v8, *((_QWORD*)a3 + 2), *((_QWORD*)a3 + 1));
  }
  else {
    v14 = *(_QWORD*)a3;
    v15 = *((_QWORD*)a3 + 2);
    v8[1] = *((_QWORD*)a3 + 1);
    v8[2] = v15;
    *v8 = v14;
  }
  if ((a3[24] & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(a1 + 32), *((_QWORD*)a3 + 5),
                                  *((_QWORD*)a3 + 4));
  }
  else {
    v16 = *((_QWORD*)a3 + 3);
    v17 = *((_QWORD*)a3 + 5);
    *(_QWORD*)(a1 + 40) = *((_QWORD*)a3 + 4);
    *(_QWORD*)(a1 + 48) = v17;
    *(_QWORD*)(a1 + 32) = v16;
  }
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 84) = 0;
  v18 = GameData_2167624;
  *(_DWORD*)(a1 + 92) = 0;
  *(_DWORD*)(a1 + 80) = v18;
  GameData_2167624 = v18 + 1;
  if ((a3[248] & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)(a1 + 96), *((_QWORD*)a3 + 33),
                                  *((_QWORD*)a3 + 32));
  }
  else {
    v19 = *((_QWORD*)a3 + 31);
    v20 = *((_QWORD*)a3 + 33);
    *(_QWORD*)(a1 + 104) = *((_QWORD*)a3 + 32);
    *(_QWORD*)(a1 + 112) = v20;
    *(_QWORD*)(a1 + 96) = v19;
  }
  *(_QWORD*)(a1 + 128) = 0;
  v21 = (_QWORD*)(a1 + 128);
  *(_WORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_WORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  v22 = (__int64*)fw_memory_g_heap_manager_ptr;
  v23 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  v24 = (_QWORD*)fw_memory_HeapManager_Allocate(v23, 24, 16, 0);
  *(_QWORD*)(a1 + 408) = v24;
  *(_QWORD*)(a1 + 416) = 0;
  *v24 = 0;
  v24[1] = 0;
  v25 = *((_DWORD*)a3 + 12);
  v24[2] = 0;
  *(_DWORD*)(a1 + 88) = v25;
  *(_DWORD*)(a1 + 92) = 1 << *((_DWORD*)a3 + 13);
  v26 = *((_OWORD*)a3 + 13);
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 64) = v26;
  v27 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v27 + 1) = DWORD2(v26);
  *(_OWORD*)(a1 + 64) = v27;
  GameRoutine_60a060((char*)(a1 + 192), a6, a7);
  *(_BYTE*)(a1 + 120) = a5 & 1;
  *(_QWORD*)(a1 + 184) = *(_QWORD*)(a2 + 160);
  v28 = a3[24];
  if ((v28 & 1) != 0) {
    v29 = *((_QWORD*)a3 + 4);
  }
  else {
    v29 = v28 >> 1;
  }
  if (v29 == 0) {
    if ((*a3 & 1) != 0) {
      fw_text_String_CopyTerminated(&v235_.v235, *((_QWORD*)a3 + 2),
                                    *((_QWORD*)a3 + 1));
    }
    else {
      v37 = *((_QWORD*)a3 + 1);
      v235_.v235 = *(_QWORD*)a3;
      v235_.v236 = v37;
      v235_.v237 = *((char**)a3 + 2);
    }
    goto LABEL_40;
  }
  v30 = *a3;
  v31 = (v30 & 1) == 0;
  v32 = v30 >> 1;
  if (v31) {
    v33 = v32;
  }
  else {
    v33 = *((_QWORD*)a3 + 1);
  }
  if (v31) {
    v34 = a3 + 1;
  }
  else {
    v34 = *((unsigned __int8**)a3 + 2);
  }
  v35 = v33 + 2;
  if (v33 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_355;
  }
  if (v35 >= 0x17) {
    if ((v35 | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (v35 | 7) + 1;
    }
    v36 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v38, 16, 0);
    *((_QWORD*)&v219_.v219 + 1) = v33 + 2;
    *(_QWORD*)&v219_.v220 = v36;
    *(_QWORD*)&v219_.v219 = v38 | 1;
    goto LABEL_30;
  }
  *(_QWORD*)&v219_.v220 = 0;
  v219_.v219 = (unsigned __int8)(2 * v35);
  v36 = (char*)&v219_.v219 + 1;
  if (v33 != 0) {
  LABEL_30:
    memmove(v36, v34, v33);
  }
  strcpy(&v36[v33], "__");
  if ((v28 & 1) != 0) {
    v39 = *((unsigned __int8**)a3 + 5);
  }
  else {
    v39 = a3 + 25;
  }
  v40 = (__int64*)GameRoutine_1a09ce0(&v219_.v219, v39, v29);
  v42 = v40[1];
  v41 = v40[2];
  v235_.v235 = *v40;
  v235_.v236 = v42;
  v235_.v237 = (char*)v41;
  v40[1] = 0;
  v40[2] = 0;
  *v40 = 0;
  v22 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v219_.v219 & 1) != 0 && (_QWORD)v219_.v220 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
  }
LABEL_40:
  if ((v235_.v235 & 1) != 0) {
    v44 = v235_.v236;
  }
  else {
    v44 = (unsigned __int64)(unsigned __int8)v235_.v235 >> 1;
  }
  if ((v235_.v235 & 1) != 0) {
    v45 = v235_.v237;
  }
  else {
    v45 = (char*)&v235_.v235 + 1;
  }
  v46 = v44 + 5;
  if (v44 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_355;
  }
  if (v46 >= 0x17) {
    if ((v46 | 7) == 0x17) {
      v48 = 26;
    }
    else {
      v48 = (v46 | 7) + 1;
    }
    v47 = (char*)fw_memory_HeapManager_Allocate(*v22, v48, 16, 0);
    *((_QWORD*)&v219_.v219 + 1) = v44 + 5;
    *(_QWORD*)&v219_.v220 = v47;
    *(_QWORD*)&v219_.v219 = v48 | 1;
    goto LABEL_54;
  }
  *(_QWORD*)&v219_.v220 = 0;
  v219_.v219 = (unsigned __int8)(2 * v46);
  v47 = (char*)&v219_.v219 + 1;
  if (v44 != 0) {
  LABEL_54:
    memmove(v47, v45, v44);
  }
  strcpy(&v47[v44], ".mapl");
  if ((v219_.v219 & 1) != 0) {
    v49 = (char*)v219_.v220;
  }
  else {
    v49 = (char*)&v219_.v219 + 1;
  }
  if (v49 != nullptr) {
    v50 = *snd_g_fileIndex_ptr[0];
    v51 = strlen(v49);
    if ((GameRoutine_6360e0(v50, (__int64)v49, v51, 0, 0) & 1) != 0) {
      v233_.v233 = 0;
      v233_.v234 = 0;
      if ((v219_.v219 & 1) != 0) {
        v52 = *((_QWORD*)&v219_.v219 + 1);
      }
      else {
        v52 = (unsigned __int64)(unsigned __int8)v219_.v219 >> 1;
      }
      if ((v219_.v219 & 1) != 0) {
        v53 = (char*)v219_.v220;
      }
      else {
        v53 = (char*)&v219_.v219 + 1;
      }
      *v21 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
          **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 24LL))(
          *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v53, v52,
          &v233_.v233);
      if (v233_.v234 != 0) {
        std___1___shared_weak_count___release_weak(v233_.v234);
      }
      goto LABEL_96;
    }
  }
  v54 = *a3;
  v55 = (v54 & 1) == 0;
  v56 = v54 >> 1;
  if (v55) {
    v57 = v56;
  }
  else {
    v57 = *((_QWORD*)a3 + 1);
  }
  if (v55) {
    v58 = a3 + 1;
  }
  else {
    v58 = *((unsigned __int8**)a3 + 2);
  }
  v59 = v57 + 5;
  if (v57 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_355;
  }
  if (v59 >= 0x17) {
    if ((v59 | 7) == 0x17) {
      v61 = 26;
    }
    else {
      v61 = (v59 | 7) + 1;
    }
    v60 = (char*)fw_memory_HeapManager_Allocate(*v22, v61, 16, 0);
    v231_.v231 = v57 + 5;
    v231_.v232 = v60;
    v230 = v61 | 1;
  }
  else {
    v231_.v231 = 0;
    v231_.v232 = nullptr;
    v230 = (unsigned __int8)(2 * v59);
    v60 = (char*)&v230 + 1;
    if (v57 == 0) {
      goto LABEL_83;
    }
  }
  memmove(v60, v58, v57);
LABEL_83:
  strcpy(&v60[v57], ".mapl");
  if ((v230 & 1) != 0) {
    v62 = v231_.v232;
  }
  else {
    v62 = (char*)&v230 + 1;
  }
  if ((v230 & 1) != 0) {
    v63 = v231_.v231;
  }
  else {
    v63 = (unsigned __int64)(unsigned __int8)v230 >> 1;
  }
  v228_.v228 = 0;
  v228_.v229 = 0;
  *v21 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
      **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 24LL))(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v62, v63, &v228_.v228);
  if (v228_.v229 != 0) {
    std___1___shared_weak_count___release_weak(v228_.v229);
  }
  if ((v230 & 1) != 0 && v231_.v232 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(*v22 + v64);
  }
LABEL_96:
  if ((v219_.v219 & 1) != 0 && (_QWORD)v219_.v220 != 0) {
    v65 = 128;
    if (*(_QWORD*)(*v22 + 200) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*v22 + v65);
  }
  v67 = *((_QWORD*)a3 + 38);
  v66 = *((unsigned __int8**)a3 + 39);
  qmemcpy(&v216_.v216, "Layout/", 7);
  v68 = a3[296];
  v69 = (v68 & 1) == 0;
  v70 = v68 >> 1;
  if (v69) {
    v71 = v70;
  }
  else {
    v71 = v67;
  }
  if (v69) {
    v72 = a3 + 297;
  }
  else {
    v72 = v66;
  }
  v73 = v71 + 14;
  if (v71 + 14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_355;
  }
  v74 = (char*)&v235_.v235 + 1;
  if (v73 >= 0x17) {
    if ((v73 | 7) == 0x17) {
      v76 = 26;
    }
    else {
      v76 = (v73 | 7) + 1;
    }
    v77 = (char*)fw_memory_HeapManager_Allocate(*v22, v76, 16, 0);
    v78 = v76 | 1;
    *((_QWORD*)&v219_.v219 + 1) = v71 + 14;
    *(_QWORD*)&v219_.v220 = v77;
    v75 = v77 + 14;
    *(_QWORD*)&v219_.v219 = v78;
    qmemcpy(v77, "Effect/Layout/", 14);
    goto LABEL_115;
  }
  HIBYTE(v219_.v219) = 0;
  *(_QWORD*)&v219_.v220 = 0;
  LOBYTE(v219_.v219) = 2 * v73;
  *(_QWORD*)((char*)&v219_.v219 + 1) = *(_QWORD*)"Effect/Layout/";
  *(_QWORD*)((char*)&v219_.v219 + 7) = *(_QWORD*)"/Layout/";
  v75 = (char*)&v219_.v219 + 15;
  if (v71 != 0) {
  LABEL_115:
    memmove(v75, v72, v71);
  }
  v75[v71] = 0;
  v79 = (__int64*)GameRoutine_1a09ce0(&v219_.v219, ".elf", 4);
  v80 = *v79;
  v81 = v79[1];
  v82 = v79[2];
  *v79 = 0;
  v79[1] = 0;
  v79[2] = 0;
  v214 = v80;
  v215 = v82;
  if ((v235_.v235 & 1) != 0) {
    v83 = v235_.v236;
  }
  else {
    v83 = (unsigned __int64)(unsigned __int8)v235_.v235 >> 1;
  }
  if ((v235_.v235 & 1) != 0) {
    v74 = v235_.v237;
  }
  v84 = v83 + 14;
  if (v83 + 14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_355;
  }
  v212 = v81;
  v213 = a1;
  if (v84 >= 0x17) {
    if ((v84 | 7) == 0x17) {
      v86 = 26;
    }
    else {
      v86 = (v84 | 7) + 1;
    }
    v87 = fw_memory_HeapManager_Allocate(*v22, v86, 16, 0);
    v88 = v86 | 1;
    v231_.v231 = v83 + 14;
    v231_.v232 = (char*)v87;
    *(_DWORD*)v87 = 1701209669;
    v85 = (char*)(v87 + 14);
    v230 = v88;
    *(_BYTE*)(v87 + 6) = 47;
    *(_WORD*)(v87 + 4) = 29795;
    *(_DWORD*)(v87 + 7) = v216_.v216;
    *(_DWORD*)(v87 + 10) = *(_DWORD*)((char*)&v216_.v216 + 3);
    goto LABEL_129;
  }
  HIBYTE(v231_.v231) = 0;
  v231_.v232 = nullptr;
  LOBYTE(v230) = 2 * v84;
  v85 = (char*)&v231_.v231 + 7;
  *(_DWORD*)((char*)&v230 + 1) = 1701209669;
  HIBYTE(v230) = 47;
  *(_WORD*)((char*)&v230 + 5) = 29795;
  LODWORD(v231_.v231) = v216_.v216;
  *(_DWORD*)((char*)&v231_.v231 + 3) = *(_DWORD*)((char*)&v216_.v216 + 3);
  if (v83 != 0) {
  LABEL_129:
    memmove(v85, v74, v83);
  }
  v85[v83] = 0;
  v89 = (__int64*)GameRoutine_1a09ce0(&v230, ".elf", 4);
  v90 = *v89;
  v91 = v89[1];
  v92 = v89[2];
  *v89 = 0;
  v89[1] = 0;
  v89[2] = 0;
  v93 = *a3;
  v94 = (v93 & 1) == 0;
  v95 = v93 >> 1;
  if (v94) {
    v96 = v95;
  }
  else {
    v96 = *((_QWORD*)a3 + 1);
  }
  if (v94) {
    v97 = a3 + 1;
  }
  else {
    v97 = *((unsigned __int8**)a3 + 2);
  }
  v98 = v96 + 14;
  if (v96 + 14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_355;
  }
  v99 = v22;
  if (v98 >= 0x17) {
    v101 = *v22;
    if ((v98 | 7) == 0x17) {
      v102 = 26;
    }
    else {
      v102 = (v98 | 7) + 1;
    }
    v103 = fw_memory_HeapManager_Allocate(v101, v102, 16, 0);
    v104 = v102 | 1;
    v226_.v226 = v96 + 14;
    v226_.v227 = v103;
    *(_DWORD*)v103 = 1701209669;
    v100 = (char*)(v103 + 14);
    v225 = v104;
    *(_BYTE*)(v103 + 6) = 47;
    *(_WORD*)(v103 + 4) = 29795;
    *(_DWORD*)(v103 + 7) = v216_.v216;
    *(_DWORD*)(v103 + 10) = *(_DWORD*)((char*)&v216_.v216 + 3);
    goto LABEL_144;
  }
  HIBYTE(v226_.v226) = 0;
  v226_.v227 = 0;
  *(_DWORD*)((char*)&v225 + 1) = 1701209669;
  LOBYTE(v225) = 2 * v98;
  HIBYTE(v225) = 47;
  *(_WORD*)((char*)&v225 + 5) = 29795;
  LODWORD(v226_.v226) = v216_.v216;
  *(_DWORD*)((char*)&v226_.v226 + 3) = *(_DWORD*)((char*)&v216_.v216 + 3);
  v100 = (char*)&v226_.v226 + 7;
  if (v96 != 0) {
  LABEL_144:
    memmove(v100, v97, v96);
  }
  v100[v96] = 0;
  v105 = (__int64*)GameRoutine_1a09ce0(&v225, ".elf", 4);
  v106 = *v105;
  v107 = v105[1];
  v108 = v105[2];
  *v105 = 0;
  v105[1] = 0;
  v105[2] = 0;
  v109 = (__int64*)fw_memory_HeapManager_Allocate(*v99, 72, 16, 0);
  v110 = (__int64)v109;
  if ((v214 & 1) != 0) {
    fw_text_String_CopyTerminated(v109, v215, v212);
    if ((v90 & 1) != 0) {
    LABEL_147:
      fw_text_String_CopyTerminated((__int64*)(v110 + 24), v92, v91);
      if ((v106 & 1) != 0) {
        goto LABEL_148;
      }
    LABEL_154:
      *(_QWORD*)(v110 + 48) = v106;
      *(_QWORD*)(v110 + 56) = v107;
      *(_QWORD*)(v110 + 64) = v108;
      v111 = v99;
      goto LABEL_155;
    }
  }
  else {
    *v109 = v214;
    v109[1] = v212;
    v109[2] = v215;
    if ((v90 & 1) != 0) {
      goto LABEL_147;
    }
  }
  *(_QWORD*)(v110 + 24) = v90;
  *(_QWORD*)(v110 + 32) = v91;
  *(_QWORD*)(v110 + 40) = v92;
  if ((v106 & 1) == 0) {
    goto LABEL_154;
  }
LABEL_148:
  fw_text_String_CopyTerminated((__int64*)(v110 + 48), v108, v107);
  v111 = v99;
  if (v108 != 0) {
    v112 = 128;
    if (*(_QWORD*)(*v99 + 200) == 0) {
      v112 = 56;
    }
    nn_mem_StandardAllocator_Free(*v99 + v112);
  }
LABEL_155:
  if ((v90 & 1) != 0 && v92 != 0) {
    v113 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v113 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v113);
  }
  if ((v214 & 1) != 0 && v215 != 0) {
    v114 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v114 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v114);
  }
  if ((v225 & 1) != 0 && v226_.v227 != 0) {
    v115 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v115 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v115);
  }
  if ((v230 & 1) != 0 && v231_.v232 != nullptr) {
    v116 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v116 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v116);
  }
  if ((v219_.v219 & 1) != 0 && (_QWORD)v219_.v220 != 0) {
    v117 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v117 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v117);
  }
  v118 = fw_memory_HeapManager_Allocate(*v111, 136, 16, 0);
  v119 = *(_QWORD*)(v213 + 416);
  *(_QWORD*)v118 = v213;
  *(_BYTE*)(v118 + 8) = 0;
  *(_BYTE*)(v118 + 112) = 0;
  *(_QWORD*)(v118 + 120) = 0;
  *(_QWORD*)(v118 + 128) = 0;
  *(_QWORD*)(v213 + 416) = v118;
  if (v119 != 0) {
    v120 = *(_QWORD*)(v119 + 128);
    if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
      std___1___shared_weak_count___release_weak(v120);
    }
    ObjectBuildCreate_c32350(v119 + 8);
    v121 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v121 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v121);
    v118 = *(_QWORD*)(v213 + 416);
  }
  v122 = wld_map_MapEffectLoader_LoadAsync(v118, v110, 3);
  v123 = *(_BYTE*)(v110 + 48);
  *(_QWORD*)(v213 + 144) = v122;
  if ((v123 & 1) != 0 && *(_QWORD*)(v110 + 64) != 0) {
    v124 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v124 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v124);
  }
  if ((*(_BYTE*)(v110 + 24) & 1) != 0 && *(_QWORD*)(v110 + 40) != 0) {
    v125 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v125 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v125);
  }
  if ((*(_BYTE*)v110 & 1) != 0 && *(_QWORD*)(v110 + 16) != 0) {
    v126 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v126 = 56;
    }
    nn_mem_StandardAllocator_Free(*v111 + v126);
  }
  v127 = 128;
  if (*(_QWORD*)(*v111 + 200) == 0) {
    v127 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*v111 + v127);
  v129 = *a3;
  v130 = (v129 & 1) == 0;
  v131 = v129 >> 1;
  if (v130) {
    v132 = v131;
  }
  else {
    v132 = *((_QWORD*)a3 + 1);
  }
  if (v130) {
    v133 = a3 + 1;
  }
  else {
    v133 = *((unsigned __int8**)a3 + 2);
  }
  v134 = v132 + 5;
  if (v132 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_355;
  }
  if (v134 >= 0x17) {
    if ((v134 | 7) == 0x17) {
      v137 = 26;
    }
    else {
      v137 = (v134 | 7) + 1;
    }
    v138 = fw_memory_HeapManager_Allocate(*v111, v137, 16, 0);
    *((_QWORD*)&v219_.v219 + 1) = v132 + 5;
    *(_QWORD*)&v219_.v220 = v138;
    v136 = (char*)v138;
    *(_QWORD*)&v219_.v219 = v137 | 1;
    v135 = snd_g_fileIndex_ptr[0];
    goto LABEL_218;
  }
  *(_QWORD*)&v219_.v220 = 0;
  v219_.v219 = (unsigned __int8)(2 * v134);
  v135 = snd_g_fileIndex_ptr[0];
  v136 = (char*)&v219_.v219 + 1;
  if (v132 != 0) {
  LABEL_218:
    result = memmove(v136, v133, v132);
  }
  strcpy(&v136[v132], ".bntx");
  if ((v219_.v219 & 1) != 0) {
    v139 = (char*)v219_.v220;
  }
  else {
    v139 = (char*)&v219_.v219 + 1;
  }
  if (v139 != nullptr) {
    v140 = *v135;
    v141 = strlen(v139);
    result = GameRoutine_6360e0(v140, (__int64)v139, v141, 0, 0);
    if ((result & 1) != 0) {
      v223_.v223 = 0;
      v223_.v224 = 0;
      v142 = (v219_.v219 & 1) != 0
                 ? *((_QWORD*)&v219_.v219 + 1)
                 : (unsigned __int64)(unsigned __int8)v219_.v219 >> 1;
      v143 = (v219_.v219 & 1) != 0 ? (__int128*)v219_.v220
                                   : (__int128*)((char*)&v219_.v219 + 1);
      *(_QWORD*)(v213 + 136) =
          (*(__int64 (**)(_QWORD, __int128*, __int64, __int64*))(
              **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 40LL))(
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v143, v142,
              &v223_.v223);
      result = v223_.v224;
      if (v223_.v224 != 0) {
        result = std___1___shared_weak_count___release_weak(v223_.v224);
      }
    }
  }
  if ((v219_.v219 & 1) != 0 && (_QWORD)v219_.v220 != 0) {
    v144 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v144 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*v111 + v144);
  }
  v145 = *(_DWORD*)(v213 + 88);
  if ((v145 & 5) != 0) {
    v146 = a3 + 136;
    v147 = a3[136];
    if ((v147 & 1) != 0) {
      v148 = *((_QWORD*)a3 + 18);
    }
    else {
      v148 = v147 >> 1;
    }
    v31 = v148 == 0;
    v149 = 136;
    if (v31) {
      v149 = 0;
      v146 = a3;
    }
    if ((a3[v149] & 1) != 0) {
      fw_text_String_CopyTerminated(&v230, *((_QWORD*)v146 + 2),
                                    *((_QWORD*)v146 + 1));
    }
    else {
      v150 = *(_QWORD*)v146;
      v151 = *((_QWORD*)v146 + 1);
      v152 = *((char**)v146 + 2);
      v230 = v150;
      v231_.v231 = v151;
      v231_.v232 = v152;
    }
    if ((v145 & 1) != 0 && (a4 & 1) != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      if ((v230 & 1) != 0) {
        v153 = v231_.v232;
      }
      else {
        v153 = (char*)&v230 + 1;
      }
      if ((v230 & 1) != 0) {
        v154 = v231_.v231;
      }
      else {
        v154 = (unsigned __int64)(unsigned __int8)v230 >> 1;
      }
      result = GameRoutine_a5b320(GameData_21fdd90, (__int64)v153, v154);
    }
    else {
      if ((a4 & 1) != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
          Registration_a5aca0((__int64)GameData_21fdd90);
          GameRoutine_2b0();
          __cxa_guard_release(&GameData_21fde98);
        }
        v155 = (unsigned __int8)v230;
        v157 = v231_.v231;
        v156 = v231_.v232;
        v158 = "Map_Base";
        v159 = nullptr;
        v160 = 8;
        v161 = (v145 & 1) == 0;
      }
      else {
        v162 = *(_QWORD*)(*(_QWORD*)v213 + 24LL);
        v163 = *(_QWORD*)(*(_QWORD*)v213 + 32LL);
        if (v163 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v163 + 8), 1u,
                                    memory_order_relaxed);
          v164 = *(_QWORD*)(v162 + 80) + 16LL;
          if (atomic_fetch_add((atomic_ullong* volatile)(v163 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v163 + 16LL))(v163);
            std___1___shared_weak_count___release_weak(v163);
          }
        }
        else {
          v164 = *(_QWORD*)(v162 + 80) + 16LL;
        }
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
          v207 =
              *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
          *(_QWORD*)&GameData_21a55a0 =
              *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
          *((_QWORD*)&GameData_21a55a0 + 1) = v207;
          v208 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                             (_QWORD)GameData_212c2a0);
          *(_QWORD*)&GameData_21a55b0 =
              *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                          (_QWORD)GameData_212c2a0);
          *((_QWORD*)&GameData_21a55b0 + 1) = v208;
          v209 = *((_QWORD*)GameData_212c2a0 + 1);
          *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
          *((_QWORD*)&GameData_21a5580 + 1) = v209;
          v210 = *(_QWORD*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2a0 + 8);
          *(_QWORD*)&GameData_21a5590 =
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
          *((_QWORD*)&GameData_21a5590 + 1) = v210;
          __cxa_guard_release(&GameData_21a55c0);
        }
        v165 = *(_OWORD*)(v213 + 64);
        v219_.v220 = GameData_21a5590;
        v219_.v222 = v165;
        v219_.v221 = GameData_21a55a0;
        v219_.v219 = GameData_21a5580;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
          Registration_a5aca0((__int64)GameData_21fdd90);
          GameRoutine_2b0();
          __cxa_guard_release(&GameData_21fde98);
        }
        v166 = strlen(v164);
        v155 = (unsigned __int8)v230;
        v157 = v231_.v231;
        v156 = v231_.v232;
        v160 = v166;
        v159 = (char*)&v219_.v219;
        v158 = (const char*)v164;
        v161 = (v145 & 1) == 0;
      }
      v167 = (v155 & 1) == 0;
      v168 = v155 >> 1;
      if (v167) {
        v169 = (char*)&v230 + 1;
      }
      else {
        v169 = v156;
      }
      if (v167) {
        v170 = v168;
      }
      else {
        v170 = v157;
      }
      result = GameRoutine_a5b760(GameData_21fdd90, (__int64)v158, v160,
                                  (__int64)v169, v170, v159, v161);
    }
    v171 = a3[24];
    if ((v171 & 1) != 0) {
      v172 = *((_QWORD*)a3 + 4);
    }
    else {
      v172 = v171 >> 1;
    }
    if (v172 == 0) {
      goto LABEL_344;
    }
    if ((v235_.v235 & 1) != 0) {
      fw_text_String_CopyTerminated(&v225, (__int64)v235_.v237, v235_.v236);
    }
    else {
      v225 = v235_.v235;
      v226_.v226 = v235_.v236;
      v226_.v227 = (__int64)v235_.v237;
    }
    v173 = *(_QWORD*)(*(_QWORD*)v213 + 24LL);
    v174 = *(_QWORD*)(*(_QWORD*)v213 + 32LL);
    if (v174 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v174 + 8), 1u,
                                memory_order_relaxed);
    }
    v175 = *(_QWORD*)(v173 + 80);
    v176 = strlen(v175 + 16);
    if (v176 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_355;
    }
    v177 = v176;
    if (v176 >= 0x17) {
      if ((v176 | 7) == 0x17) {
        v179 = 26;
      }
      else {
        v179 = (v176 | 7) + 1;
      }
      v178 = (char*)fw_memory_HeapManager_Allocate(*v111, v179, 16, 0);
      v216_.v217 = v177;
      v216_.v218 = v178;
      v216_.v216 = v179 | 1;
    }
    else {
      LOBYTE(v216_.v216) = 2 * v176;
      v178 = (char*)&v216_.v216 + 1;
      if (v176 == 0) {
        BYTE1(v216_.v216) = 0;
        if (v174 == 0) {
          goto LABEL_294;
        }
        goto LABEL_292;
      }
    }
    memmove(v178, v175 + 16, v177);
    v178[v177] = 0;
    if (v174 != 0) {
    LABEL_292:
      if (atomic_fetch_add((atomic_ullong* volatile)(v174 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v174 + 16LL))(v174);
        std___1___shared_weak_count___release_weak(v174);
      }
    }
  LABEL_294:
    v180 = a3[24];
    v181 = *((unsigned __int8**)a3 + 5);
    v182 = a3 + 25;
    v183 = (v180 & 1) == 0;
    v184 = v180 >> 1;
    if (v183) {
      v185 = v184;
    }
    else {
      v185 = *((_QWORD*)a3 + 4);
    }
    if (v183) {
      v186 = v182;
    }
    else {
      v186 = v181;
    }
    v187 = v185 + 2;
    if (v185 + 2 < 0xFFFFFFFFFFFFFFF7LL) {
      if (v187 >= 0x17) {
        if ((v187 | 7) == 0x17) {
          v189 = 26;
        }
        else {
          v189 = (v187 | 7) + 1;
        }
        v190 = (_WORD*)fw_memory_HeapManager_Allocate(*v111, v189, 16, 0);
        *((_QWORD*)&v219_.v219 + 1) = v185 + 2;
        *(_QWORD*)&v219_.v220 = v190;
        *(_QWORD*)&v219_.v219 = v189 | 1;
        *v190 = 24415;
        v188 = (char*)(v190 + 1);
      }
      else {
        *(_QWORD*)&v219_.v220 = 0;
        v219_.v219 = (unsigned __int8)(2 * v187);
        *(_WORD*)((char*)&v219_.v219 + 1) = 24415;
        v188 = (char*)&v219_.v219 + 3;
        if (v185 == 0) {
          goto LABEL_309;
        }
      }
      memmove(v188, v186, v185);
    LABEL_309:
      v188[v185] = 0;
      if ((v219_.v219 & 1) != 0) {
        v191 = (char*)v219_.v220;
      }
      else {
        v191 = (char*)&v219_.v219 + 1;
      }
      if ((v219_.v219 & 1) != 0) {
        v192 = *((_QWORD*)&v219_.v219 + 1);
      }
      else {
        v192 = (unsigned __int64)(unsigned __int8)v219_.v219 >> 1;
      }
      GameRoutine_1a09ce0(&v216_.v216, v191, v192);
      if ((v219_.v219 & 1) != 0 && (_QWORD)v219_.v220 != 0) {
        v193 = 128;
        if (*(_QWORD*)(*v111 + 200) == 0) {
          v193 = 56;
        }
        nn_mem_StandardAllocator_Free(*v111 + v193);
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
        v203 =
            *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
        *(_QWORD*)&GameData_21a55a0 =
            *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
        *((_QWORD*)&GameData_21a55a0 + 1) = v203;
        v204 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                           (_QWORD)GameData_212c2a0);
        *(_QWORD*)&GameData_21a55b0 =
            *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                        (_QWORD)GameData_212c2a0);
        *((_QWORD*)&GameData_21a55b0 + 1) = v204;
        v205 = *((_QWORD*)GameData_212c2a0 + 1);
        *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
        *((_QWORD*)&GameData_21a5580 + 1) = v205;
        v206 = *(_QWORD*)((char*)((__int128*)0x10LL) +
                          (_QWORD)GameData_212c2a0 + 8);
        *(_QWORD*)&GameData_21a5590 =
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
        *((_QWORD*)&GameData_21a5590 + 1) = v206;
        __cxa_guard_release(&GameData_21a55c0);
      }
      v194 = *(_OWORD*)(v213 + 64);
      v219_.v220 = GameData_21a5590;
      v219_.v222 = v194;
      v219_.v221 = GameData_21a55a0;
      v219_.v219 = GameData_21a5580;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
        Registration_a5aca0((__int64)GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release(&GameData_21fde98);
      }
      if ((v216_.v216 & 1) != 0) {
        v195 = v216_.v217;
      }
      else {
        v195 = (unsigned __int64)(unsigned __int8)v216_.v216 >> 1;
      }
      if ((v216_.v216 & 1) != 0) {
        v196 = v216_.v218;
      }
      else {
        v196 = (char*)&v216_.v216 + 1;
      }
      if ((v225 & 1) != 0) {
        v197 = (char*)v226_.v227;
      }
      else {
        v197 = (char*)&v225 + 1;
      }
      if ((v225 & 1) != 0) {
        v198 = v226_.v226;
      }
      else {
        v198 = (unsigned __int64)(unsigned __int8)v225 >> 1;
      }
      result = GameRoutine_a5b760(GameData_21fdd90, (__int64)v196, v195,
                                  (__int64)v197, v198, (char*)&v219_.v219,
                                  (v145 & 1) == 0);
      if ((v216_.v216 & 1) != 0 && v216_.v218 != nullptr) {
        v199 = 128;
        if (*(_QWORD*)(*v111 + 200) == 0) {
          v199 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v111 + v199);
      }
      if ((v225 & 1) != 0 && v226_.v227 != 0) {
        v200 = 128;
        if (*(_QWORD*)(*v111 + 200) == 0) {
          v200 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v111 + v200);
      }
    LABEL_344:
      if ((v230 & 1) != 0 && v231_.v232 != nullptr) {
        v201 = 128;
        if (*(_QWORD*)(*v111 + 200) == 0) {
          v201 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v111 + v201);
      }
      goto LABEL_349;
    }
  LABEL_355:
    String_60a1d0();
  }
LABEL_349:
  *(_DWORD*)(v213 + 84) = 1;
  if ((v235_.v235 & 1) != 0 && v235_.v237 != nullptr) {
    v202 = 128;
    if (*(_QWORD*)(*v111 + 200) == 0) {
      v202 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v111 + v202);
  }
  return result;
}

void wld_c2a300(__int64** a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned __int8* i;
  unsigned __int8* v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64* v29;
  int v30;
  __int64* v31;
  __int64* v32;
  _QWORD* v33;
  __int64 v34;
  int v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  int v48;
  __int64* v49;
  int v50;
  __int64* v51;
  unsigned int* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64* v57;
  __int64* v58;
  bool v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  unsigned __int64 v71;
  unsigned __int8* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64* v76;
  int v77;
  __int64* v78;
  __int64* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int8* v84;
  const char** v85;
  __int64* v86;
  const char* v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64* v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  char* v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64* v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64* v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned __int8 v112;
  __int64 v113;
  __int64** v114;
  __int64* v115;
  __int64* v116;
  __int64 v117;
  __int64* v118;
  int* v119;
  unsigned __int64 v120;
  __int64* v121;
  __int64* v122;
  _QWORD* v123;
  __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  const char** v129;
  __int64 v130;
  __int64* v131;
  __int8* v132;
  const char* v133;
  unsigned __int64 v134;
  unsigned __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  unsigned __int64 v142;
  unsigned __int64* v143;
  unsigned __int64* v144;
  __int64 v145;
  __int64 v146;
  char* v147;
  __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  __int64* v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64* v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  unsigned __int8 v158;
  __int64 v159;
  __int64* v160;
  __int64* j;
  unsigned __int64 v162;
  bool v163;
  unsigned __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  _QWORD* v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  __int64 v176;
  unsigned __int8* v177;
  unsigned __int8* k;
  unsigned __int64 v179;
  bool v180;
  unsigned __int64 v181;
  __int64 v182;
  unsigned __int64 v183;
  _QWORD* v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  bool v194;
  unsigned __int64 v195;
  __int64* v196;
  unsigned __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  _DWORD* v203;
  __int64* v204;
  __int64 v205;
  unsigned __int64 v206;
  const char* v207;
  unsigned __int64 v208;
  unsigned int v209;
  unsigned int v210;
  __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  const char* v214;
  bool v215;
  unsigned __int64 v216;
  __int64 v217;
  unsigned __int64 v218;
  unsigned __int64 v219;
  unsigned __int64 v220;
  unsigned __int64 v221;
  char v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  unsigned __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64* v231;
  _QWORD* v232;
  __int64 v233;
  float32x4_t v234;
  float32x4_t v235;
  float32x4_t v236;
  int8x16_t v237;
  __int128 v238;
  float v239;
  float v240;
  float v241;
  float32x4_t v242;
  float32x4_t v243;
  int8x16_t v244;
  __int128 v245;
  double v246;
  double v247;
  double v248;
  double v249;
  double v250;
  double v251;
  double v252;
  float v253;
  float v254;
  float v255;
  float v256;
  bool v257;
  bool v258;
  int v260;
  int v261;
  unsigned int v262;
  float32x4_t v263;
  float32x4_t v264;
  int8x16_t v265;
  __int128 v266;
  int v267;
  __int8* v268;
  __int64 v269;
  __int64 v270;
  unsigned __int64 v271;
  __int64* v272;
  bool v273;
  unsigned __int64 v274;
  __int64 v275;
  unsigned __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64* v279;
  bool v280;
  unsigned __int64 v281;
  __int64 v282;
  unsigned __int64 v283;
  __int64 v284;
  const char* v285;
  unsigned __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  unsigned __int64 v290;
  __int64* v291;
  bool v292;
  __int64* v293;
  __int64 v294;
  unsigned __int64 v295;
  __int8* v296;
  __int128 v297;
  __int64 v298;
  __int64 v299;
  unsigned __int64 v300;
  __int64* v301;
  float v302;
  __int64 v303;
  _DWORD* v304;
  __int64 v305;
  float v306;
  __int64* v307;
  unsigned __int64 v308;
  struct {
    float32x4_t v309;
    __int64 v310;
  } v309_;
  struct {
    __int64 v311;
    __int64* v312;
    __int64* v313;
    __int64 v314;
  } v311_;
  struct {
    _BYTE v315[32];
    __int8* v316;
    char gap184_[8];
    char v317;
    char gap193_[7];
    char v318;
    char gap201_[7];
    int v319;
    char gap212_[4];
    __int16 v320;
  } v315_;
  struct {
    _WORD v321[12];
    __int16 v322;
    char gap266_[22];
    __int128 v323;
    __int16 v324;
  } v321_;
  struct {
    __int64 v325;
    __int64* v326;
    __int64* v327;
    __int16 v328;
    char gap354_[22];
    __int16 v329;
    char gap378_[46];
    __int8* v330;
  } v325_;

  v1 = *((_DWORD*)a1 + 21);
  if (v1 > 4) {
    if (v1 > 6) {
      if (v1 == 7) {
        v114 = (__int64**)a1[51];
        v115 = v114[1];
        if (*v114 != v115) {
          v116 = *v114;
          do {
            v117 = *v116++;
            if (*(_QWORD*)(v117 + 64) != *(_QWORD*)(v117 + 72)) {
              return;
            }
          } while (v116 != v115);
        }
        v114[1] = *v114;
        v17 = 8;
      }
      else {
        if (v1 != 9 ||
            (GameRoutine_c28e40_alt1((float32x4_t*)a1[22], 0) & 1) == 0) {
          return;
        }
        v17 = 10;
      }
    }
    else if (v1 == 5) {
      v76 = a1[18];
      if (v76 != nullptr) {
        nn_os_AcquireReadLock_alt1((__int64)(v76 + 87));
        v77 = *((_DWORD*)v76 + 164);
        nn_os_ReleaseReadLock_alt1((__int64)(v76 + 87));
        if ((v77 & 8) == 0) {
          return;
        }
        if (((_BYTE)a1[15] & 1) == 0) {
          v78 = (__int64*)(*a1)[38];
          v79 = (__int64*)(*a1)[39];
          if (v78 != v79) {
            while (1) {
              v80 = *v78++;
              if (*(int*)(v80 + 84) <= 4) {
                return;
              }
              v17 = 6;
              if (v78 == v79) {
                goto LABEL_419;
              }
            }
          }
        }
      }
      v17 = 6;
    }
    else {
      if (((_BYTE)a1[11] & 5) == 0) {
        goto LABEL_279;
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
        GameHr_a5aca0((__int64)GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release_alt1((__int64)&GameData_21fde98);
      }
      if (GameData_21fdde0 != GameData_21fdde8) {
        return;
      }
      v19 = (unsigned __int8*)a1[27];
      for (i = (unsigned __int8*)a1[28]; v19 != i; v19 += 24) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
          GameHr_a5aca0((__int64)GameData_21fdd90);
          GameRoutine_2b0();
          __cxa_guard_release_alt1((__int64)&GameData_21fde98);
        }
        v20 = *v19;
        v21 = (v20 & 1) == 0;
        v22 = v20 >> 1;
        if (v21) {
          v23 = (__int64)(v19 + 1);
        }
        else {
          v23 = *((_QWORD*)v19 + 2);
        }
        if (v21) {
          v24 = v22;
        }
        else {
          v24 = *((_QWORD*)v19 + 1);
        }
        GameRoutine_a5cb20_alt1((void*)(&v309_.v309), (__int64)GameData_21fdd90,
                                v23, v24);
        if (LANES128(v309_.v309).n128_u64[0] != 0) {
          *(_BYTE*)(LANES128(v309_.v309).n128_u64[0] + 184) = 0;
        }
        v25 = LANES128(v309_.v309).n128_i64[1];
        if (LANES128(v309_.v309).n128_u64[1] != 0 &&
            atomic_fetch_add(
                (atomic_ullong* volatile)(LANES128(v309_.v309).n128_u64[1] + 8),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak_alt1(v25);
        }
      }
      v160 = a1[30];
      for (j = a1[31]; v160 != j; v160 += 4) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
          GameHr_a5aca0((__int64)GameData_21fdd90);
          GameRoutine_2b0();
          __cxa_guard_release_alt1((__int64)&GameData_21fde98);
        }
        v162 = *(unsigned __int8*)v160;
        v163 = (v162 & 1) == 0;
        v164 = v162 >> 1;
        if (v163) {
          v165 = (__int64)v160 + 1;
        }
        else {
          v165 = v160[2];
        }
        if (v163) {
          v166 = v164;
        }
        else {
          v166 = v160[1];
        }
        GameRoutine_a5cb20_alt1((void*)(&v309_.v309), (__int64)GameData_21fdd90,
                                v165, v166);
        v167 = (_QWORD*)LANES128(v309_.v309).n128_u64[0];
        if (LANES128(v309_.v309).n128_u64[0] != 0) {
          v168 = v160[3];
          v169 = (v168 << 61 >> 63) & 0x101000300000F0FLL;
          if ((v168 & 2) != 0) {
            v169 |= 0xF0000uLL;
          }
          v170 = *(_QWORD*)(LANES128(v309_.v309).n128_u64[0] + 96);
          if (*(_QWORD*)(LANES128(v309_.v309).n128_u64[0] + 104) != v170) {
            v171 = ~v169;
            v172 = 24;
            v173 = 0;
            do {
              v174 = *(_QWORD*)(v170 + v172);
              game_66f7e0(v167, v173, v174 & v171);
              if (v174 != 0 && (v174 & v171) == 0) {
                GameHr_66f720((__int64)v167, v173, 0);
              }
              v170 = v167[12];
              ++v173;
              v172 += 40;
            } while (v173 < 0xCCCCCCCCCCCCCCCDLL * ((v167[13] - v170) >> 3));
          }
        }
        v176 = LANES128(v309_.v309).n128_i64[1];
        if (LANES128(v309_.v309).n128_u64[1] != 0 &&
            atomic_fetch_add(
                (atomic_ullong* volatile)(LANES128(v309_.v309).n128_u64[1] + 8),
                0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v176 + 16LL))(v176);
          std___1___shared_weak_count___release_weak_alt1(v176);
        }
      }
      if (((_BYTE)a1[11] & 4) == 0) {
        v177 = (unsigned __int8*)a1[33];
        for (k = (unsigned __int8*)a1[34]; v177 != k; v177 += 32) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
            GameHr_a5aca0((__int64)GameData_21fdd90);
            GameRoutine_2b0();
            __cxa_guard_release_alt1((__int64)&GameData_21fde98);
          }
          v179 = *v177;
          v180 = (v179 & 1) == 0;
          v181 = v179 >> 1;
          if (v180) {
            v182 = (__int64)(v177 + 1);
          }
          else {
            v182 = *((_QWORD*)v177 + 2);
          }
          if (v180) {
            v183 = v181;
          }
          else {
            v183 = *((_QWORD*)v177 + 1);
          }
          GameRoutine_a5cb20_alt1((void*)(&v309_.v309),
                                  (__int64)GameData_21fdd90, v182, v183);
          v184 = (_QWORD*)LANES128(v309_.v309).n128_u64[0];
          if (LANES128(v309_.v309).n128_u64[0] != 0) {
            v185 = (*((_DWORD*)v177 + 6) & 0x800) != 0 ? 0x200000000LL
                                                       : 0x100000000LL;
            v186 = (*((_DWORD*)v177 + 6) & 0x800) != 0 ? 0x100000000LL
                                                       : 0x200000000LL;
            v188 = *(_QWORD*)(LANES128(v309_.v309).n128_u64[0] + 96);
            v187 = *(_QWORD*)(LANES128(v309_.v309).n128_u64[0] + 104);
            if (v187 != v188) {
              v189 = 24;
              v190 = 0;
              do {
                v191 = *(_QWORD*)(v188 + v189);
                if ((v191 & v185) != 0) {
                  game_66f7e0(v184, v190, v191 & ~v185 | v186);
                  v188 = v184[12];
                  v187 = v184[13];
                }
                ++v190;
                v189 += 40;
              } while (v190 < 0xCCCCCCCCCCCCCCCDLL * ((v187 - v188) >> 3));
            }
          }
          v192 = LANES128(v309_.v309).n128_i64[1];
          if (LANES128(v309_.v309).n128_u64[1] != 0 &&
              atomic_fetch_add(
                  (atomic_ullong* volatile)(LANES128(v309_.v309).n128_u64[1] +
                                            8),
                  0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v192 + 16LL))(v192);
            std___1___shared_weak_count___release_weak_alt1(v192);
          }
        }
      }
      if (((_BYTE)a1[15] & 1) == 0) {
        GameRoutine_c2c4c0_alt1((__int64)a1);
        v17 = 7;
      }
      else {
      LABEL_279:
        v17 = 7;
      }
    }
    goto LABEL_419;
  }
  if (v1 > 2) {
    if (v1 != 3) {
      v26 = *a1;
      v27 = (_QWORD*)(*a1)[59];
      if (v27 != nullptr) {
        while (1) {
          v41 = v27[6];
          if (v41 != 0 && (*(_BYTE*)(v41 + 165) != 1 ||
                           !GameRoutine_ad7390((_QWORD*)v41))) {
            break;
          }
          v27 = (_QWORD*)*v27;
          if (v27 == nullptr) {
            goto LABEL_45;
          }
        }
      }
      else {
      LABEL_45:
        v28 = (_QWORD*)v26[49];
        if (v28 != nullptr) {
          while (1) {
            v42 = v28[6];
            if (v42 != 0 && (*(_BYTE*)(v42 + 165) != 1 ||
                             !GameRoutine_ad7390((_QWORD*)v42))) {
              break;
            }
            v28 = (_QWORD*)*v28;
            if (v28 == nullptr) {
              goto LABEL_46;
            }
          }
        }
        else {
        LABEL_46:
          v29 = a1[17];
          if (v29 == nullptr ||
              (nn_os_AcquireReadLock_alt1((__int64)(v29 + 87)),
               v30 = *((_DWORD*)v29 + 164),
               nn_os_ReleaseReadLock_alt1((__int64)(v29 + 87)),
               (v30 & 8) != 0)) {
            v31 = a1[45];
            v32 = a1[46];
            if (v31 == v32) {
            LABEL_59:
              v39 = a1[48];
              v40 = a1[49];
              while (v39 != v40) {
                v43 = *v39;
                if (*(int*)(*v39 + 96) >= 2 &&
                    (v44 = *(_QWORD*)(v43 + 64),
                     nn_os_AcquireReadLock_alt1(v44 + 696),
                     v45 = *(_DWORD*)(v44 + 656),
                     nn_os_ReleaseReadLock_alt1(v44 + 696), (v45 & 8) != 0)) {
                  v46 = (_QWORD*)(v43 + 16);
                  while (1) {
                    v46 = (_QWORD*)*v46;
                    if (v46 == nullptr) {
                      break;
                    }
                    v47 = v46[5];
                    nn_os_AcquireReadLock_alt1(v47 + 696);
                    v48 = *(_DWORD*)(v47 + 656);
                    nn_os_ReleaseReadLock_alt1(v47 + 696);
                    if ((v48 & 8) == 0) {
                      goto LABEL_74;
                    }
                  }
                }
                else {
                LABEL_74:
                  if ((*(_BYTE*)(*v39 + 100) & 1) != 0) {
                    return;
                  }
                }
                ++v39;
              }
              ObjectBuildCreate_c2c570((__int64)&v309_.v309, a1);
              if (*(_QWORD*)(v309_.v310 + 24) != 0 &&
                  *((_DWORD*)a1[19] + 2) >= 3u) {
                v193 = *((unsigned __int8*)*a1 + 168);
                v194 = (v193 & 1) == 0;
                v195 = v193 >> 1;
                v196 =
                    v194 ? (__int64*)((char*)*a1 + 169) : (__int64*)(*a1)[23];
                v197 = v194 ? v195 : (*a1)[22];
                if ((GameHr_c284a0((__int64*)a1, v196, v197, 1) & 1) == 0) {
                  GameRoutine_c28e40_alt1(&v309_.v309, 1);
                  GameHr_c29c40((__int64)a1);
                }
              }
              GameHr_c2c6e0((__int64)&v309_.v309);
              v198 = **a1;
              v199 = *(_QWORD*)(v198 + 24);
              if (v199 != 0) {
                v200 = *(_QWORD*)(v198 + 16);
                v201 = *(_QWORD*)(v198 + 24);
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v199 + 16),
                                          1u, memory_order_relaxed);
                v202 = std___1___shared_weak_count_lock_alt1(v201);
                std___1___shared_weak_count___release_weak_alt1(v199);
                if (v202 != 0) {
                  v303 = v202;
                  if (v200 != 0) {
                    v203 = (_DWORD*)ElfFile_631220_alt2(
                        a1[16] + 100, "world::data::s_decalDataVersion");
                    if (v203 != nullptr && *v203 >= 3u) {
                      v205 = ElfFile_631220_alt2(a1[16] + 100,
                                                 "world::data::s_decalData");
                      v304 = (_DWORD*)ElfFile_631220_alt2(
                          a1[16] + 100, "world::data::s_decalDataNum");
                      if (v205 != 0 && v304 != nullptr && *v304 != 0) {
                        v206 = 0;
                        v325_.v330 = &LANES128(v309_.v309).n128_i8[1];
                        do {
                          v207 = *(const char**)(v205 + 8);
                          v208 = strlen_alt1(v207);
                          v209 = GameRoutine_a81a70((__int64)v207, v208);
                          if (v209 >= 0xA) {
                            String_60a250("bitset test argument out of range");
                          }
                          v210 = v209;
                          if ((((unsigned __int64)a1[23] >> v209) & 1) != 0) {
                            v308 = v206;
                            v211 = (*a1)[3];
                            v212 = (*a1)[4];
                            if (v212 != 0) {
                              atomic_fetch_add_explicit(
                                  (atomic_ullong* volatile)(v212 + 8), 1u,
                                  memory_order_relaxed);
                            }
                            v213 = *((unsigned __int8*)a1 + 192);
                            v214 = *(const char**)v205;
                            v215 = (v213 & 1) == 0;
                            v216 = v213 >> 1;
                            if (v215) {
                              v217 = (__int64)a1 + 193;
                            }
                            else {
                              v217 = (__int64)a1[26];
                            }
                            if (v215) {
                              v218 = v216;
                            }
                            else {
                              v218 = (unsigned __int64)a1[25];
                            }
                            v219 = strlen_alt1(*(const char**)v205);
                            v220 = v219 + v218;
                            if (v219 + v218 >= 0xFFFFFFFFFFFFFFF7LL) {
                              goto LABEL_421;
                            }
                            v221 = v219;
                            v305 = v211;
                            if (v220 > 0x16) {
                              if ((v220 | 7) == 0x17) {
                                v224 = 26;
                              }
                              else {
                                v224 = (v220 | 7) + 1;
                              }
                              v223 = fw_memory_HeapManager_Allocate(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v224,
                                  16, 0);
                              LANES128(v309_.v309).n128_u64[1] = v220;
                              v309_.v310 = v223;
                              LANES128(v309_.v309).n128_u64[0] = v224 | 1;
                              v222 = v224 | 1;
                            }
                            else {
                              v222 = 2 * v220;
                              v223 = 0;
                              v309_.v310 = 0;
                              v309_.v309 = COERCE_AS(
                                  float32x4_t, (unsigned __int8)(2 * v220));
                            }
                            if ((v222 & 1) != 0) {
                              v225 = v223;
                            }
                            else {
                              v225 = (__int64)v325_.v330;
                            }
                            if (v218 != 0) {
                              memmove_alt1(v225, v217, v218);
                            }
                            if (v221 != 0) {
                              memmove_alt1(v225 + v218, (__int64)v214, v221);
                            }
                            *(_BYTE*)(v225 + v218 + v221) = 0;
                            if ((LANES128(v309_.v309).n128_u8[0] & 1) != 0) {
                              v226 = v309_.v310;
                            }
                            else {
                              v226 = (__int64)v325_.v330;
                            }
                            if ((LANES128(v309_.v309).n128_u8[0] & 1) != 0) {
                              v227 = LANES128(v309_.v309).n128_u64[1];
                            }
                            else {
                              v227 = (unsigned __int64)LANES128(v309_.v309)
                                         .n128_u8[0] >>
                                     1;
                            }
                            v228 = wld_map_c24890_alt2(v305, v226, v227);
                            if ((LANES128(v309_.v309).n128_u8[0] & 1) != 0 &&
                                v309_.v310 != 0) {
                              v229 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v229 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt2(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v229,
                                  v309_.v310);
                            }
                            v206 = v308;
                            if (v212 != 0 &&
                                atomic_fetch_add(
                                    (atomic_ullong* volatile)(v212 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
                              (*(void (**)(__int64))(*(_QWORD*)v212 + 16LL))(
                                  v212);
                              std___1___shared_weak_count___release_weak_alt1(
                                  v212);
                            }
                            v230 = GameHr_c1a5a0(v228);
                            v231 = a1[17];
                            v232 = (_QWORD*)v230;
                            if (v231 != nullptr) {
                              v233 = GameRoutine_5fc1f0(v231[74]);
                            }
                            else {
                              v233 = 0;
                            }
                            wld_DecalModule_AddDecal_alt1(v232, v205, v233);
                            *(_DWORD*)(v228 + 284) = v210;
                            LANES128(v234).n128_u64[0] = *(_QWORD*)(v205 + 40);
                            LANES128(v234).n128_u32[2] = *(_DWORD*)(v205 + 48);
                            v235 = vaddq_f32(*((float32x4_t*)a1 + 4), v234);
                            v236 = vsubq_f32(*(float32x4_t*)(v228 + 304), v235);
                            v237 = vmulq_f32(v236, v236);
                            LANES128(v237).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v237, v237, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v237).n128_u64[0])))
                                    .n64_u64[0];
                            if (LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v237).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v237).n128_u64[0])))
                                    .n64_f32[0] != 0x0.0p+0f) {
                              *(_QWORD*)(v228 + 304) =
                                  LANES128(v235).n128_u64[0];
                              v238 = *(_OWORD*)(v228 + 304);
                              *(_DWORD*)(v228 + 296) |= 1u;
                              *((_QWORD*)&v238 + 1) =
                                  LANES128(v235).n128_u32[2];
                              *(_OWORD*)(v228 + 304) = v238;
                            }
                            v239 = *(float*)(v205 + 52) * 0x1.1df46a0000000p-6f;
                            v240 = *(float*)(v205 + 56) * 0x1.1df46a0000000p-6f;
                            v241 = *(float*)(v205 + 60) * 0x1.1df46a0000000p-6f;
                            LANES128(v242).n128_u32[3] = 0;
                            LANES128(v242).n128_f32[0] = v239;
                            LANES128(v242).n128_f32[1] = v240;
                            LANES128(v242).n128_f32[2] = v241;
                            v243 = vsubq_f32(*(float32x4_t*)(v228 + 320), v242);
                            v244 = vmulq_f32(v243, v243);
                            LANES128(v244).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v244, v244, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v244).n128_u64[0])))
                                    .n64_u64[0];
                            if (LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v244).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v244).n128_u64[0])))
                                    .n64_f32[0] != 0x0.0p+0f) {
                              *(float*)(v228 + 320) = v239;
                              *(float*)(v228 + 324) = v240;
                              v245 = *(_OWORD*)(v228 + 320);
                              v306 = v240;
                              v302 = v239;
                              *((_QWORD*)&v245 + 1) = LODWORD(v241);
                              v246 = v241 * 0x1.0000000000000p-1;
                              *(_OWORD*)(v228 + 320) = v245;
                              v247 = cos(v246);
                              v248 = sin(v246);
                              v249 = cos(v302 * 0x1.0000000000000p-1);
                              v250 = sin(v302 * 0x1.0000000000000p-1);
                              v251 = cos(v306 * 0x1.0000000000000p-1);
                              v252 = sin(v306 * 0x1.0000000000000p-1);
                              v253 = v247 * v250 * v251 -
                                     PSEUDO_UNFUSED(v252 * (v248 * v249));
                              v254 = PSEUDO_UNFUSED(v248 * v250 * v251) +
                                     PSEUDO_UNFUSED(v247 * v249) * v252;
                              v255 = PSEUDO_UNFUSED(v248 * v250 * v252) +
                                     PSEUDO_UNFUSED(v247 * v249) * v251;
                              v256 = v248 * v249 * v251 -
                                     PSEUDO_UNFUSED(v252 * (v247 * v250));
                              v257 = COERCE_FLOAT(*(_OWORD*)(v228 + 336)) ==
                                         v253 &&
                                     COERCE_FLOAT(HIDWORD(
                                         *(_QWORD*)(v228 + 336))) == v254;
                              v258 =
                                  v257 &&
                                  COERCE_FLOAT(*(_QWORD*)(v228 + 344)) == v256;
                              if (!v258 || COERCE_FLOAT(DWORD3(*(
                                               _OWORD*)(v228 + 336))) != v255) {
                                v260 = *(_DWORD*)(v228 + 296);
                                *(float*)(v228 + 336) = v253;
                                *(float*)(v228 + 340) = v254;
                                *(float*)(v228 + 344) = v256;
                                *(float*)(v228 + 348) = v255;
                                *(_DWORD*)(v228 + 296) = v260 | 1;
                              }
                            }
                            v261 = *(_DWORD*)(v205 + 68);
                            v262 = *(_DWORD*)(v205 + 72);
                            LANES128(v263).n128_u64[0] = *(_QWORD*)(v205 + 64);
                            LANES128(v263).n128_u64[1] = v262;
                            v264 = vsubq_f32(*(float32x4_t*)(v228 + 352), v263);
                            v265 = vmulq_f32(v264, v264);
                            LANES128(v265).n128_u64[0] =
                                LANES64_OF(
                                    vadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128_OF(
                                                      vextq_s8(v265, v265, 8u))
                                                      .n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v265).n128_u64[0])))
                                    .n64_u64[0];
                            if (LANES64_OF(
                                    vpadd_f32(
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v265).n128_u64[0]),
                                        COERCE_AS(float32x2_t,
                                                  LANES128(v265).n128_u64[0])))
                                    .n64_f32[0] != 0x0.0p+0f) {
                              *(_DWORD*)(v228 + 352) = *(_DWORD*)(v205 + 64);
                              *(_DWORD*)(v228 + 356) = v261;
                              v266 = *(_OWORD*)(v228 + 352);
                              *(_DWORD*)(v228 + 296) |= 1u;
                              *((_QWORD*)&v266 + 1) = v262;
                              *(_OWORD*)(v228 + 352) = v266;
                            }
                            DecalModule_a93060(a1[51], (__int64)v232);
                          }
                          ++v206;
                          v205 += 96;
                        } while (v206 < (unsigned int)*v304);
                      }
                    }
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v303 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v303 + 16LL))(v303);
                    std___1___shared_weak_count___release_weak_alt1(v303);
                  }
                }
              }
              if (a1[46] != a1[45]) {
                wld_c2bb00(a1);
              }
              if (a1[49] != a1[48]) {
                wld_c2c0c0((float32x4_t*)a1);
              }
              v17 = 5;
              goto LABEL_419;
            }
            while (1) {
              v33 = (_QWORD*)*v31;
              if (*(int*)(*v31 + 80) < 2) {
                break;
              }
              v34 = v33[7];
              nn_os_AcquireReadLock_alt1(v34 + 696);
              v35 = *(_DWORD*)(v34 + 656);
              nn_os_ReleaseReadLock_alt1(v34 + 696);
              if ((v35 & 8) == 0) {
                break;
              }
              v36 = (__int64*)v33[1];
              v37 = (__int64*)v33[2];
              while (v36 != v37) {
                v38 = *v36;
                if (*v36 != 0 && (*(_BYTE*)(v38 + 165) != 1 ||
                                  !GameRoutine_ad7390((_QWORD*)v38))) {
                  return;
                }
                v36 += 2;
              }
              if (++v31 == v32) {
                goto LABEL_59;
              }
            }
          }
        }
      }
      return;
    }
    if (*((int*)*a1 + 60) < 4) {
      return;
    }
    v81 = a1[19];
    if (*v81 != 0) {
      v82 = v81[11];
      v307 = a1[19];
      if (v82 != 0) {
        v83 = 8 * v82;
        v84 = &LANES128(v309_.v309).n128_i8[1];
        v85 = (const char**)v307[10];
        v86 = (__int64*)fw_memory_g_heap_manager_ptr;
        v325_.v330 = &LANES128(v309_.v309).n128_i8[1];
        do {
          v87 = *v85;
          v88 = strlen_alt1(*v85);
          if (v88 >= 0xFFFFFFFFFFFFFFF7LL) {
          LABEL_421:
            String_60a1d0();
          }
          v89 = v88;
          if (v88 >= 0x17) {
            if ((v88 | 7) == 0x17) {
              v91 = 26;
            }
            else {
              v91 = (v88 | 7) + 1;
            }
            v90 = fw_memory_HeapManager_Allocate(*v86, v91, 16, 0);
            LANES128(v309_.v309).n128_u64[1] = v89;
            v309_.v310 = v90;
            LANES128(v309_.v309).n128_u64[0] = v91 | 1;
          }
          else {
            v90 = (__int64)v84;
            LANES128(v309_.v309).n128_u8[0] = 2 * v88;
            if (v88 == 0) {
              goto LABEL_132;
            }
          }
          memmove_alt1(v90, (__int64)v87, v89);
        LABEL_132:
          *(_BYTE*)(v90 + v89) = 0;
          v92 = (__int64)*a1;
          v93 = fw_memory_HeapManager_Allocate(*v86, 88, 16, 0);
          v94 = v93;
          if ((LANES128(v309_.v309).n128_u8[0] & 1) != 0) {
            v95 = v309_.v310;
          }
          else {
            v95 = (__int64)v84;
          }
          if ((LANES128(v309_.v309).n128_u8[0] & 1) != 0) {
            v96 = LANES128(v309_.v309).n128_u64[1];
          }
          else {
            v96 = (unsigned __int64)LANES128(v309_.v309).n128_u8[0] >> 1;
          }
          wld_GrassLoader_GrassLoader(v93, v95, v96, v92);
          v98 = a1[46];
          v97 = a1[47];
          if (v98 >= v97) {
            v100 = (__int64)a1[45];
            v101 = (char*)v98 - v100;
            v102 = ((__int64)v98 - v100) >> 3;
            v103 = v102 + 1;
            if ((unsigned __int64)(v102 + 1) >> 61 != 0) {
              GameRoutine_c31e20();
            }
            v104 = (__int64)v97 - v100;
            v105 = v86;
            if (v104 >> 2 > v103) {
              v103 = v104 >> 2;
            }
            if ((unsigned __int64)v104 >= 0x7FFFFFFFFFFFFFF8LL) {
              v106 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v106 = v103;
            }
            if (v106 != 0) {
              if (v106 >> 61 != 0) {
              LABEL_422:
                GameRoutine_60a210();
              }
              v107 = fw_memory_HeapManager_Allocate(*v105, 8 * v106, 16, 0);
            }
            else {
              v107 = 0;
            }
            v108 = (__int64*)(v107 + 8 * v106);
            v109 = (unsigned __int64)v98 - v100;
            v110 = (__int64)&v101[v107 + -8 * v102];
            *(_QWORD*)&v101[v107] = v94;
            v99 = (__int64)&v101[v107 + 8];
            memcpy_alt1(v110, v100, v109);
            a1[45] = (__int64*)v110;
            a1[46] = (__int64*)v99;
            a1[47] = v108;
            if (v100 != 0) {
              v86 = v105;
              v111 = 128;
              if (*(_QWORD*)(*v105 + 200) == 0) {
                v111 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v105 + v111, v100);
            }
            else {
              v86 = v105;
            }
            v84 = v325_.v330;
          }
          else {
            *v98 = v94;
            v99 = (__int64)(v98 + 1);
          }
          v112 = LANES128(v309_.v309).n128_u8[0];
          a1[46] = (__int64*)v99;
          if ((v112 & 1) != 0 && v309_.v310 != 0) {
            v113 = 128;
            if (*(_QWORD*)(*v86 + 200) == 0) {
              v113 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v86 + v113, v309_.v310);
          }
          ++v85;
          v83 -= 8;
        } while (v83 != 0);
      }
      v128 = v307[13];
      if (v128 != 0) {
        v129 = (const char**)v307[12];
        v130 = 8 * v128;
        v131 = (__int64*)fw_memory_g_heap_manager_ptr;
        v132 = &LANES128(v309_.v309).n128_i8[1];
        v325_.v330 = &LANES128(v309_.v309).n128_i8[1];
        do {
          v133 = *v129;
          v134 = strlen_alt1(*v129);
          if (v134 >= 0xFFFFFFFFFFFFFFF7LL) {
            goto LABEL_421;
          }
          v135 = v134;
          if (v134 >= 0x17) {
            if ((v134 | 7) == 0x17) {
              v137 = 26;
            }
            else {
              v137 = (v134 | 7) + 1;
            }
            v136 = fw_memory_HeapManager_Allocate(*v131, v137, 16, 0);
            LANES128(v309_.v309).n128_u64[1] = v135;
            v309_.v310 = v136;
            LANES128(v309_.v309).n128_u64[0] = v137 | 1;
          }
          else {
            v136 = (__int64)v132;
            LANES128(v309_.v309).n128_u8[0] = 2 * v134;
            if (v134 == 0) {
              goto LABEL_193;
            }
          }
          memmove_alt1(v136, (__int64)v133, v135);
        LABEL_193:
          v138 = *v131;
          *(_BYTE*)(v136 + v135) = 0;
          v139 = fw_memory_HeapManager_Allocate(v138, 104, 16, 0);
          v140 = v139;
          if ((LANES128(v309_.v309).n128_u8[0] & 1) != 0) {
            v141 = v309_.v310;
          }
          else {
            v141 = (__int64)v132;
          }
          if ((LANES128(v309_.v309).n128_u8[0] & 1) != 0) {
            v142 = LANES128(v309_.v309).n128_u64[1];
          }
          else {
            v142 = (unsigned __int64)LANES128(v309_.v309).n128_u8[0] >> 1;
          }
          wld_MapCrowdLoader_MapCrowdLoader_alt1(v139, v141, v142);
          v144 = (unsigned __int64*)a1[49];
          v143 = (unsigned __int64*)a1[50];
          if (v144 >= v143) {
            v146 = (__int64)a1[48];
            v147 = (char*)v144 - v146;
            v148 = ((__int64)v144 - v146) >> 3;
            v149 = v148 + 1;
            if ((unsigned __int64)(v148 + 1) >> 61 != 0) {
              GameRoutine_c31e40();
            }
            v150 = (__int64)v143 - v146;
            v151 = v131;
            if (v150 >> 2 > v149) {
              v149 = v150 >> 2;
            }
            if ((unsigned __int64)v150 >= 0x7FFFFFFFFFFFFFF8LL) {
              v152 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v152 = v149;
            }
            if (v152 != 0) {
              if (v152 >> 61 != 0) {
                goto LABEL_422;
              }
              v153 = fw_memory_HeapManager_Allocate(*v151, 8 * v152, 16, 0);
            }
            else {
              v153 = 0;
            }
            v154 = (__int64*)(v153 + 8 * v152);
            v155 = (unsigned __int64)v144 - v146;
            v156 = (__int64)&v147[v153 + -8 * v148];
            *(_QWORD*)&v147[v153] = v140;
            v145 = (__int64)&v147[v153 + 8];
            memcpy_alt1(v156, v146, v155);
            a1[48] = (__int64*)v156;
            a1[49] = (__int64*)v145;
            a1[50] = v154;
            if (v146 != 0) {
              v131 = v151;
              v157 = 128;
              if (*(_QWORD*)(*v151 + 200) == 0) {
                v157 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v151 + v157, v146);
            }
            else {
              v131 = v151;
            }
            v132 = v325_.v330;
          }
          else {
            *v144 = v140;
            v145 = (__int64)(v144 + 1);
          }
          v158 = LANES128(v309_.v309).n128_u8[0];
          a1[49] = (__int64*)v145;
          if ((v158 & 1) != 0 && v309_.v310 != 0) {
            v159 = 128;
            if (*(_QWORD*)(*v131 + 200) == 0) {
              v159 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v131 + v159, v309_.v310);
          }
          ++v129;
          v130 -= 8;
        } while (v130 != 0);
      }
    }
    v17 = 4;
  LABEL_419:
    *((_DWORD*)a1 + 21) = v17;
    return;
  }
  if (v1 == 1) {
    v49 = a1[16];
    nn_os_AcquireReadLock_alt1((__int64)(v49 + 87));
    v50 = *((_DWORD*)v49 + 164);
    nn_os_ReleaseReadLock_alt1((__int64)(v49 + 87));
    if ((v50 & 8) == 0) {
      return;
    }
    v51 = (__int64*)fw_memory_g_heap_manager_ptr;
    v52 = (unsigned int*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
    GameRoutine_1989130(v52, (__int64)a1[16]);
    v53 = (__int64)a1[19];
    a1[19] = (__int64*)v52;
    if (v53 != 0) {
      v54 = 128;
      if (*(_QWORD*)(*v51 + 200) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v51 + v54, v53);
      v52 = (unsigned int*)a1[19];
    }
    v55 = fw_memory_HeapManager_Allocate(*v51, 72, 16, 0);
    v57 = (__int64*)(a1 + 12);
    v56 = *((unsigned __int8*)a1 + 96);
    v58 = (__int64*)v55;
    v59 = (v56 & 1) == 0;
    v60 = v56 >> 1;
    if (v59) {
      v61 = (__int64)a1 + 97;
    }
    else {
      v61 = (__int64)a1[14];
    }
    if (v59) {
      v62 = v60;
    }
    else {
      v62 = (unsigned __int64)a1[13];
    }
    GameRoutine_1989340_alt1(v55, v52, v61, v62);
    v63 = a1[20];
    a1[20] = v58;
    if (v63 != nullptr) {
      GameHr_c31e60(v63);
      v64 = 128;
      if (*(_QWORD*)(*v51 + 200) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v51 + v64, (__int64)v63);
    }
    v66 = (*a1)[3];
    v65 = (*a1)[4];
    if (v65 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v65 + 8), 1u,
                                memory_order_relaxed);
    }
    v67 = a1[20];
    v69 = v67[6];
    v68 = v67[7];
    if (v68 != v69) {
      v70 = 1;
      v71 = 0;
      do {
        v72 = (unsigned __int8*)(v69 + 24 * v71);
        v73 = *v72;
        if ((v73 & 1) != 0) {
          v74 = *((_QWORD*)v72 + 1);
        }
        else {
          v74 = v73 >> 1;
        }
        if (v74 != 0) {
          if ((v73 & 1) != 0) {
            v75 = *((_QWORD*)v72 + 2);
          }
          else {
            v75 = (__int64)(v72 + 1);
          }
          GameHr_c24db0(v66, v75, v74);
          v69 = v67[6];
          v68 = v67[7];
        }
        v71 = v70++;
      } while (0xAAAAAAAAAAAAAAABLL * ((v68 - v69) >> 3) > v71);
    }
    if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
      std___1___shared_weak_count___release_weak_alt1(v65);
    }
    if (((_BYTE)a1[15] & 1) != 0 || *(v118 = a1[19]) == 0 ||
        (v119 = (int*)v118[16]) == nullptr) {
    LABEL_418:
      v17 = 2;
      goto LABEL_419;
    }
    v121 = (__int64*)(a1 + 4);
    v120 = *((unsigned __int8*)a1 + 32);
    if ((v120 & 1) != 0) {
      v122 = a1[5];
    }
    else {
      v122 = (__int64*)(v120 >> 1);
    }
    if (v122 == nullptr || *((_DWORD*)v118 + 2) < 6u || (v119[4] & 1) == 0) {
    LABEL_388:
      if (*v119 >= 1) {
        v277 = 0;
        v278 = 0;
        v325_.v330 = v315_.v315;
        v279 = (__int64*)GameData_212c540;
        while (1) {
          v287 = *((_QWORD*)v119 + 1);
          v288 = *v279;
          v289 = v279[1];
          LANES128(v309_.v309).n128_u16[0] = 0;
          LOWORD(v311_.v311) = 0;
          v311_.v314 = 0;
          v315_.v316 = nullptr;
          v315_.v317 = 0;
          v315_.v318 = 0;
          v315_.v319 = 0;
          v315_.v320 = 0;
          v321_.v321[0] = 0;
          v321_.v322 = 0;
          *(_QWORD*)&v321_.v323 = v288;
          *((_QWORD*)&v321_.v323 + 1) = v289;
          v321_.v324 = 0;
          LOWORD(v325_.v325) = 0;
          v325_.v328 = 0;
          v325_.v329 = 0;
          GameRoutine_60a020_alt1((__int64)v321_.v321,
                                  *(const char**)(v287 + v277));
          GameRoutine_60a020_alt1((__int64)&v309_.v309,
                                  *(const char**)(v287 + v277 + 8));
          v290 = *(unsigned __int8*)v121;
          if ((v311_.v311 & 1) != 0) {
            v292 = (v290 & 1) == 0;
            v293 = (__int64*)(v290 >> 1);
            v294 = v292 ? (__int64)a1 + 33 : (__int64)a1[6];
            v295 = (unsigned __int64)(v292 ? v293 : a1[5]);
            SpineModel_64dde0(&v311_.v311, v294, v295);
          }
          else if ((v290 & 1) != 0) {
            GameRoutine_64df20(&v311_.v311, (__int64)a1[6],
                               (unsigned __int64)a1[5]);
          }
          else {
            v291 = a1[5];
            v311_.v311 = *v121;
            v311_.v312 = v291;
            v311_.v313 = a1[6];
          }
          v296 = v315_.v316;
          LODWORD(v311_.v314) = *((_DWORD*)a1 + 22);
          *(_QWORD*)&v297 = *(_QWORD*)(v287 + v277 + 24);
          v298 = *(unsigned int*)(v287 + v277 + 32);
          v315_.v316 = nullptr;
          *((_QWORD*)&v297 + 1) = v298;
          v321_.v323 = v297;
          if (v296 == v325_.v330) {
            break;
          }
          if (v296 != nullptr) {
            v299 = 40;
          LABEL_413:
            (*(void (**)(__int64))(*(_QWORD*)v296 + v299))((__int64)v296);
          }
          v300 = *(unsigned __int8*)v57;
          if ((v325_.v325 & 1) != 0) {
            v280 = (v300 & 1) == 0;
            v281 = v300 >> 1;
            if (v280) {
              v282 = (__int64)a1 + 97;
            }
            else {
              v282 = (__int64)a1[14];
            }
            if (v280) {
              v283 = v281;
            }
            else {
              v283 = (unsigned __int64)a1[13];
            }
            SpineModel_64dde0(&v325_.v325, v282, v283);
          }
          else if ((v300 & 1) != 0) {
            GameRoutine_64df20(&v325_.v325, (__int64)a1[14],
                               (unsigned __int64)a1[13]);
          }
          else {
            v301 = a1[13];
            v325_.v325 = *v57;
            v325_.v326 = v301;
            v325_.v327 = a1[14];
          }
          v284 = (__int64)*a1;
          v285 = *(const char**)(v287 + v277 + 16);
          v286 = strlen_alt1(v285);
          GameHr_c15010(v284, (unsigned __int8*)&v309_.v309, (__int64)v285,
                        v286);
          GameRoutine_a853b0_alt1((__int64)&v309_.v309);
          ++v278;
          v277 += 40;
          v17 = 2;
          if (v278 >= *v119) {
            goto LABEL_419;
          }
        }
        v299 = 32;
        goto LABEL_413;
      }
      goto LABEL_418;
    }
    LANES128(v309_.v309).n128_u16[0] = 0;
    v123 = GameData_212c540;
    LOWORD(v311_.v311) = 0;
    v311_.v314 = 0;
    v315_.v316 = nullptr;
    v124 = *(_QWORD*)GameData_212c540;
    v125 = *((_QWORD*)GameData_212c540 + 1);
    v315_.v317 = 0;
    v315_.v318 = 0;
    v315_.v319 = 0;
    v315_.v320 = 0;
    v321_.v322 = 0;
    v321_.v324 = 0;
    LOWORD(v325_.v325) = 0;
    v325_.v328 = 0;
    v325_.v329 = 0;
    *(_QWORD*)&v321_.v323 = v124;
    *((_QWORD*)&v321_.v323 + 1) = v125;
    LOBYTE(v321_.v321[0]) = 8;
    strcpy((char*)v321_.v321 + 1, "Base");
    if (((_BYTE)a1[1] & 1) != 0) {
      GameRoutine_64df20(&v309_.v309, (__int64)a1[3], (unsigned __int64)a1[2]);
      if ((v311_.v311 & 1) != 0) {
        v204 = v311_.v313;
        v311_.v312 = nullptr;
      LABEL_371:
        *(_BYTE*)v204 = 0;
        v267 = *((_DWORD*)a1 + 22);
        v268 = v315_.v316;
        v315_.v316 = nullptr;
        LODWORD(v311_.v314) = v267;
        v269 = v123[1];
        *(_QWORD*)&v321_.v323 = *v123;
        *((_QWORD*)&v321_.v323 + 1) = v269;
        if (v268 == v315_.v315) {
          v270 = 32;
        }
        else {
          if (v268 == nullptr) {
          LABEL_376:
            v271 = *(unsigned __int8*)v57;
            if ((v325_.v325 & 1) != 0) {
              v273 = (v271 & 1) == 0;
              v274 = v271 >> 1;
              if (v273) {
                v275 = (__int64)a1 + 97;
              }
              else {
                v275 = (__int64)a1[14];
              }
              if (v273) {
                v276 = v274;
              }
              else {
                v276 = (unsigned __int64)a1[13];
              }
              SpineModel_64dde0(&v325_.v325, v275, v276);
            }
            else if ((v271 & 1) != 0) {
              GameRoutine_64df20(&v325_.v325, (__int64)a1[14],
                                 (unsigned __int64)a1[13]);
            }
            else {
              v272 = a1[13];
              v325_.v325 = *v57;
              v325_.v326 = v272;
              v325_.v327 = a1[14];
            }
            GameHr_c15010((__int64)*a1, (unsigned __int8*)&v309_.v309,
                          (__int64)"Base:", 5u);
            GameRoutine_a853b0_alt1((__int64)&v309_.v309);
            goto LABEL_388;
          }
          v270 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v268 + v270))((__int64)v268);
        goto LABEL_376;
      }
    }
    else {
      v126 = (unsigned __int64)a1[2];
      v127 = (__int64)a1[3];
      LANES128(v309_.v309).n128_u64[0] = (unsigned __int64)a1[1];
      LANES128(v309_.v309).n128_u64[1] = v126;
      v309_.v310 = v127;
    }
    v204 = (__int64*)((char*)&v311_.v311 + 1);
    LOBYTE(v311_.v311) = 0;
    goto LABEL_371;
  }
  if (v1 == 2) {
    v3 = (__int64)*a1;
    if (*((int*)*a1 + 60) >= 2) {
      v4 = (__int64)a1[19];
      v5 = a1[20];
      v6 = fw_memory_g_heap_manager_ptr;
      v7 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      GameRoutine_1989b20_alt1(v7, v3, v4, v5);
      v8 = a1[21];
      a1[21] = (__int64*)v7;
      if (v8 != nullptr) {
        v9 = v8[7];
        if (v9 != 0) {
          v10 = *(_QWORD*)v6;
          v8[8] = v9;
          v11 = 128;
          if (*(_QWORD*)(v10 + 200) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v10 + v11, v9);
        }
        v12 = v8[4];
        if (v12 != 0) {
          v13 = v8[5];
          if (v12 == v13) {
            goto LABEL_15;
          }
          do {
            v13 -= 168;
            GameHr_c32110(v13);
          } while (v13 != v12);
          v14 = v8[4];
          v8[5] = v12;
          v12 = v14;
          if (v14 != 0) {
          LABEL_15:
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
              v15 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v15, v12);
          }
        }
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v16, (__int64)v8);
        v17 = 3;
      }
      else {
        v17 = 3;
      }
      goto LABEL_419;
    }
  }
}

void wld_c2bb00(__int64** a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64** v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  int* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int64 v16;
  char v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  char* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  unsigned int* v58;
  __int64 v59;
  __int64 v60;
  char* v61;
  __int64* v62;
  __int64 v63;
  __int64** v64;
  int* v65;
  __int64 v66;
  struct {
    __int64 v67;
    unsigned __int64 v68;
    char* v69;
  } v67_;

  v1 = **a1;
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 16);
    v4 = a1;
    v5 = *(_QWORD*)(v1 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    std___1___shared_weak_count___release_weak_alt1(v2);
    if (v6 != 0) {
      v57 = v6;
      if (v3 != 0) {
        v7 = ElfFile_631220_alt2(v4[16] + 100, "world::data::s_grassData");
        v58 = (unsigned int*)ElfFile_631220_alt2(v4[16] + 100,
                                                 "world::data::s_grassDataNum");
        v59 = v7;
        if (v7 != 0 && v58 != nullptr) {
          v8 = *v58;
          if ((_DWORD)v8 != 0) {
            v9 = 0;
            v64 = v4;
            v61 = (char*)v4 + 193;
            while (1) {
              v66 = v59 + 24 * v9;
              v62 = v4[45];
              v63 = *(unsigned int*)(v66 + 16);
              v10 = v62[v63];
              v11 = *(int**)(v10 + 32);
              v65 = *(int**)(v10 + 40);
              if (v11 != v65) {
                break;
              }
            LABEL_9:
              if (++v9 >= v8) {
                goto LABEL_91;
              }
            }
            v60 = v9;
            while (1) {
              v12 = *v11;
              if ((unsigned int)*v11 >= 0xA) {
                String_60a250("bitset test argument out of range");
              }
              if ((((unsigned __int64)v4[23] >> v12) & 1) == 0) {
                goto LABEL_14;
              }
              v14 = (*v4)[3];
              v13 = (*v4)[4];
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                          1u, memory_order_relaxed);
                v12 = *v11;
              }
              v15 = *(const char**)(v66 + 8);
              v16 = strlen_alt1(v15);
              wld_c2c890((void*)(&v67_.v67), (__int64)v4, (__int64)v15, v16);
              v17 = v67_.v67;
              v18 = (__int64)v67_.v69;
              v19 = *(__int64**)(v14 + 88);
              v20 = *(__int64**)(v14 + 96);
              if ((v67_.v67 & 1) != 0) {
                v21 = v67_.v69;
              }
              else {
                v21 = (char*)&v67_.v67 + 1;
              }
              if ((v67_.v67 & 1) != 0) {
                v22 = v67_.v68;
              }
              else {
                v22 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
              }
              if (v19 != v20) {
                while (1) {
                  v23 = *v19;
                  if (v12 == *(_DWORD*)(*v19 + 284) &&
                      *(_QWORD*)(v23 + 272) == v22 &&
                      memcmp_alt2(v23 + 16, (__int64)v21, v22) == 0) {
                    break;
                  }
                  if (++v19 == v20) {
                    goto LABEL_34;
                  }
                }
              }
              if (v19 == v20) {
              LABEL_34:
                v24 = 0;
                if ((v17 & 1) == 0) {
                  goto LABEL_39;
                }
              }
              else {
                v24 = *v19;
                if ((v17 & 1) == 0) {
                  goto LABEL_39;
                }
              }
              if (v18 != 0) {
                v25 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v25 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v18);
              }
            LABEL_39:
              if (v13 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                std___1___shared_weak_count___release_weak_alt1(v13);
                if (v24 != 0) {
                LABEL_42:
                  v26 = *v4;
                  v27 = (*v4)[3];
                  v28 = v26[4];
                  if (v28 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v28 + 8), 1u,
                        memory_order_relaxed);
                  }
                  v29 = *(const char**)v66;
                  v30 = *((unsigned __int8*)v64 + 192);
                  v31 = (v30 & 1) == 0;
                  v32 = v30 >> 1;
                  if (v31) {
                    v33 = (__int64)v61;
                  }
                  else {
                    v33 = (__int64)v64[26];
                  }
                  if (v31) {
                    v34 = v32;
                  }
                  else {
                    v34 = (unsigned __int64)v64[25];
                  }
                  v35 = strlen_alt1(*(const char**)v66);
                  v36 = v35 + v34;
                  if (v35 + v34 >= 0xFFFFFFFFFFFFFFF7LL) {
                    String_60a1d0();
                  }
                  v37 = v35;
                  if (v36 > 0x16) {
                    if ((v36 | 7) == 0x17) {
                      v40 = 26;
                    }
                    else {
                      v40 = (v36 | 7) + 1;
                    }
                    v39 = fw_memory_HeapManager_Allocate(
                        fw_memory_g_heap_manager, v40, 16, 0);
                    v67_.v68 = v36;
                    v67_.v69 = (char*)v39;
                    v67_.v67 = v40 | 1;
                    v38 = v40 | 1;
                  }
                  else {
                    v38 = 2 * v36;
                    v39 = 0;
                    v67_.v68 = 0;
                    v67_.v69 = nullptr;
                    v67_.v67 = (unsigned __int8)(2 * v36);
                  }
                  if ((v38 & 1) != 0) {
                    v41 = (char*)v39;
                  }
                  else {
                    v41 = (char*)&v67_.v67 + 1;
                  }
                  if (v34 != 0) {
                    memmove_alt1((__int64)v41, v33, v34);
                  }
                  if (v37 != 0) {
                    memmove_alt1((__int64)&v41[v34], (__int64)v29, v37);
                  }
                  v41[v34 + v37] = 0;
                  if ((v67_.v67 & 1) != 0) {
                    v42 = v67_.v69;
                  }
                  else {
                    v42 = (char*)&v67_.v67 + 1;
                  }
                  if ((v67_.v67 & 1) != 0) {
                    v43 = v67_.v68;
                  }
                  else {
                    v43 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
                  }
                  v44 = wld_map_c24890_alt2(v27, (__int64)v42, v43);
                  if ((v67_.v67 & 1) != 0 && v67_.v69 != nullptr) {
                    v45 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v45 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                        (__int64)v67_.v69);
                  }
                  v4 = v64;
                  if (v28 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
                    std___1___shared_weak_count___release_weak_alt1(v28);
                  }
                  v46 = v62[v63];
                  v47 = *v11;
                  v48 = *(_QWORD*)(v46 + 32);
                  v49 = *(_QWORD*)(v46 + 40);
                  LODWORD(v67_.v67) = *v11;
                  v50 = v49 - v48;
                  if (v50 != 0) {
                    v51 = 0;
                    v52 = v50 >> 2;
                    v53 = 1;
                    while (*(_DWORD*)(v48 + 4 * v51) != v47) {
                      v51 = v53++;
                      if (v52 <= v51) {
                        goto LABEL_86;
                      }
                    }
                    v54 = ElfFile_631220_alt2(
                        (__int64*)(*(_QWORD*)(v46 + 56) + 800LL),
                        "world::data::grass::s_Data");
                    GameRoutine_c00fc0(v44, *(_QWORD*)(v54 + 24) + 96 * v51,
                                       (__int64**)(v46 + 8), (int*)&v67_.v67);
                  }
                LABEL_86:
                  v55 = *(_DWORD*)(v24 + 280) + 1;
                  if (*(_DWORD*)(v44 + 280) != v55) {
                    v56 = *(_QWORD*)(v44 + 8);
                    nn_os_LockMutex_alt1((__int64)&GameData_2167560);
                    GameHr_a878a0(v56, v44);
                    Components_a87260_alt1(v56, v44, v55);
                    *(_BYTE*)(v56 + 80) = 1;
                    nn_os_UnlockMutex_alt1((__int64)&GameData_2167560);
                    *(_DWORD*)(v44 + 280) = v55;
                  }
                  GameRoutine_a8c380_alt1(v44, (_QWORD*)v24);
                  if (*(_QWORD*)(v44 + 768) != v24 ||
                      *(_DWORD*)(v44 + 784) != 7) {
                    *(_QWORD*)(v44 + 768) = 0;
                    *(_QWORD*)(v44 + 776) = 0;
                    *(_QWORD*)(v44 + 768) = v24;
                    *(_DWORD*)(v44 + 784) = 7;
                    *(_DWORD*)(v44 + 296) |= 4u;
                  }
                  *(_DWORD*)(v44 + 284) = *v11;
                }
              }
              else if (v24 != 0) {
                goto LABEL_42;
              }
            LABEL_14:
              if (++v11 == v65) {
                v9 = v60;
                v8 = *v58;
                goto LABEL_9;
              }
            }
          }
        }
      }
    LABEL_91:
      if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
        std___1___shared_weak_count___release_weak_alt1(v57);
      }
    }
  }
}

float32x4_t* wld_c2c0c0(float32x4_t* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float32x4_t* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  const char* v19;
  float32x4_t* v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  float32x4_t* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  float32x4_t v39;
  const char* v40;
  unsigned __int64 v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  __int64 v46;
  __int64 v47;
  float32x4_t* v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v56;
    unsigned __int64 v57;
    __int64 v58;
  } v56_;

  v1 = *(_QWORD*)LANES128(*(result)).n128_u64[0];
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v1 + 16);
    v4 = result;
    v5 = *(_QWORD*)(v1 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock_alt1(v5);
    result = (float32x4_t*)std___1___shared_weak_count___release_weak_alt1(v2);
    if (v6 != 0) {
      if (v3 != 0) {
        v7 = ElfFile_631220_alt2((__int64*)(LANES128(v4[8]).n128_u64[0] + 800),
                                 "world::data::s_crowdData");
        result = (float32x4_t*)ElfFile_631220_alt2(
            (__int64*)(LANES128(v4[8]).n128_u64[0] + 800),
            "world::data::s_crowdDataCount");
        v48 = result;
        if (v7 != 0 && result != nullptr) {
          v8 = LANES128(*(result)).n128_u32[0];
          if ((_DWORD)v8 != 0) {
            v9 = 0;
            v46 = v7;
            v47 = v6;
            v50 = (__int64)LANES128(v4[12]).n128_i64 + 1;
            v10 = (char*)&v56_.v56 + 1;
            do {
              v11 = v7 + 40 * v9;
              v12 = *(_QWORD*)(LANES128(v4[24]).n128_u64[0] +
                               8LL * *(int*)(v11 + 16));
              if (*(_BYTE*)(v12 + 100) == 1 && **(_DWORD**)(v12 + 88) != 0) {
                v49 = v9;
                v13 = 0;
                v14 = 0;
                v53 = v11;
                v51 = LANES128(v4[24]).n128_u64[0];
                v52 = *(int*)(v11 + 16);
                do {
                  v55 = v13;
                  v15 = v10;
                  v16 = *(_QWORD*)(LANES128(*(v4)).n128_u64[0] + 24);
                  v17 = *(_QWORD*)(LANES128(*(v4)).n128_u64[0] + 32);
                  if (v17 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v17 + 8), 1u,
                        memory_order_relaxed);
                  }
                  v18 = LANES128(v4[12]).n128_u8[0];
                  v19 = *(const char**)v11;
                  v20 = v4;
                  v21 = (v18 & 1) == 0;
                  v22 = v18 >> 1;
                  if (v21) {
                    v23 = v50;
                  }
                  else {
                    v23 = LANES128(v4[13]).n128_i64[0];
                  }
                  if (v21) {
                    v24 = v22;
                  }
                  else {
                    v24 = LANES128(v4[12]).n128_u64[1];
                  }
                  v25 = strlen_alt1(*(const char**)v11);
                  v26 = v25 + v24;
                  if (v25 + v24 >= 0xFFFFFFFFFFFFFFF7LL) {
                    String_60a1d0();
                  }
                  v27 = v25;
                  v54 = v16;
                  if (v26 > 0x16) {
                    if ((v26 | 7) == 0x17) {
                      v30 = 26;
                    }
                    else {
                      v30 = (v26 | 7) + 1;
                    }
                    v29 = fw_memory_HeapManager_Allocate(
                        fw_memory_g_heap_manager, v30, 16, 0);
                    v56_.v57 = v26;
                    v56_.v58 = v29;
                    v56_.v56 = v30 | 1;
                    v28 = v30 | 1;
                  }
                  else {
                    v28 = 2 * v26;
                    v29 = 0;
                    v56_.v57 = 0;
                    v56_.v58 = 0;
                    v56_.v56 = (unsigned __int8)(2 * v26);
                  }
                  v10 = v15;
                  if ((v28 & 1) != 0) {
                    v31 = v29;
                  }
                  else {
                    v31 = (__int64)v15;
                  }
                  if (v24 != 0) {
                    memmove_alt1(v31, v23, v24);
                  }
                  v32 = v31 + v24;
                  if (v27 != 0) {
                    memmove_alt1(v32, (__int64)v19, v27);
                  }
                  *(_BYTE*)(v32 + v27) = 0;
                  if ((v56_.v56 & 1) != 0) {
                    v33 = v56_.v58;
                  }
                  else {
                    v33 = (__int64)v15;
                  }
                  if ((v56_.v56 & 1) != 0) {
                    v34 = v56_.v57;
                  }
                  else {
                    v34 = (unsigned __int64)(unsigned __int8)v56_.v56 >> 1;
                  }
                  v35 = (float32x4_t*)wld_map_c24890(v54, v33, v34);
                  if ((v56_.v56 & 1) != 0 && v56_.v58 != 0) {
                    v36 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v36 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v56_.v58);
                  }
                  v4 = v20;
                  if (v17 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
                    std___1___shared_weak_count___release_weak_alt1(v17);
                  }
                  v37 = *(_QWORD**)(v51 + 8 * v52);
                  v38 = *(_QWORD*)(v37[11] + 16LL) + v55;
                  result = (float32x4_t*)GameRoutine_c0ea80_alt1(
                      v37, *(const char***)(v38 + 8));
                  if (result != nullptr) {
                    v56_.v56 = GameRoutine_5fc1f0(
                        *(_QWORD*)(LANES128(result[2]).n128_u64[1] + 592));
                    GameRoutine_c0cd20((__int64)v35, v38, &v56_.v56);
                    v40 = *(const char**)v38;
                    v41 = strlen_alt1(*(const char**)v38);
                    result =
                        (float32x4_t*)GameRoutine_a81a70((__int64)v40, v41);
                    LANES128(v35[17]).n128_u32[3] = (unsigned int)result;
                  }
                  v11 = v53;
                  LANES128(v39).n128_u64[0] = *(_QWORD*)(v53 + 20);
                  LANES128(v39).n128_u32[2] = *(_DWORD*)(v53 + 28);
                  v42 = vaddq_f32(v20[4], v39);
                  v43 = vsubq_f32(v35[19], v42);
                  v44 = vmulq_f32(v43, v43);
                  LANES128(v44).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v44, v44, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v44).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v44).n128_u64[0])))
                          .n64_f32[0] != 0x0.0p+0f) {
                    LANES128(v35[19]).n128_u64[0] = LANES128(v42).n128_u64[0];
                    v45 = v35[19];
                    LANES128(v35[18]).n128_u32[2] |= 1u;
                    LANES128(v45).n128_u64[1] = LANES128(v42).n128_u32[2];
                    v35[19] = v45;
                  }
                  ++v14;
                  v13 = v55 + 32;
                } while (v14 <
                         **(unsigned int**)(*(_QWORD*)(v51 + 8 * v52) + 88LL));
                v6 = v47;
                v7 = v46;
                v9 = v49;
                v8 = LANES128(*(v48)).n128_u32[0];
              }
              ++v9;
            } while (v9 < v8);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return (float32x4_t*)std___1___shared_weak_count___release_weak_alt1(
            v6);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void wld_c2c890(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2, unsigned __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  const char* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v25[2];
    __int64 v26;
  } v25_;
  struct {
    __int64 v27;
    unsigned __int64 v28;
    char* v29;
  } v27_;

  v8 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
  v7 = *(_QWORD*)(*(_QWORD*)a1 + 32LL);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    v10 = a2;
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16, 0);
    a2 = v10;
    v9 = (char*)v12;
    v25_.v25[1] = a3;
    v25_.v26 = v12;
    v25_.v25[0] = v11 | 1;
    goto LABEL_11;
  }
  LOBYTE(v25_.v25[0]) = 2 * a3;
  v9 = (char*)v25_.v25 + 1;
  if (a3 != 0) {
  LABEL_11:
    memmove_alt1((__int64)v9, a2, a3);
  }
  v9[a3] = 0;
  v13 = *(unsigned __int8*)(a1 + 192);
  v14 = (v13 & 1) == 0;
  v15 = v13 >> 1;
  if (v14) {
    v16 = (const char*)(a1 + 193);
  }
  else {
    v16 = *(const char**)(a1 + 208);
  }
  if (v14) {
    v17 = v15;
  }
  else {
    v17 = *(_QWORD*)(a1 + 200);
  }
  v18 = (__int64*)GameRoutine_1a0a680_alt1((__int64)v25_.v25, 0, v16, v17);
  v20 = v18[1];
  v19 = v18[2];
  v27_.v27 = *v18;
  v27_.v28 = v20;
  v27_.v29 = (char*)v19;
  v18[1] = 0;
  v18[2] = 0;
  *v18 = 0;
  if ((v27_.v27 & 1) != 0) {
    v21 = v27_.v29;
  }
  else {
    v21 = (char*)&v27_.v27 + 1;
  }
  if ((v27_.v27 & 1) != 0) {
    v22 = v27_.v28;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v27_.v27 >> 1;
  }
  wld_map_c23be0((void*)(a4), v8, (__int64)v21, v22);
  if ((v27_.v27 & 1) != 0 && v27_.v29 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v27_.v29);
  }
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v25_.v26);
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
}

__int64 wld_c2caa0(__int64 a1, char a2, char a3)
{
  __int64 v3;
  unsigned __int64 v4;
  float32x4_t** v5;
  __int64 result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float32x4_t* v11;
  float32x4_t* v12;
  bool v13;
  _BYTE* v14;
  float32x4_t* v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  float32x4_t* v21;
  __int64 v22;
  __int64* v23;
  long double v24;
  _DWORD* v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8* v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  _DWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  char* v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  signed __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  _QWORD* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  char* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  char* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64 v113;
  _DWORD* v114;
  unsigned int v115;
  char* v116;
  __int64* v117;
  unsigned int v118;
  unsigned int v119;
  bool v120;
  signed __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 i;
  __int64 v131;
  float32x2_t v132;
  __int64 v133;
  __int64 v134;
  signed __int64 v135;
  __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  char* v144;
  __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  char* v158;
  __int64 v159;
  __int64 v160;
  int v161;
  __int64 v162;
  __int64 v163;
  char* v164;
  unsigned __int64 v165;
  char* v166;
  float32x4_t* v167;
  char* v168;
  unsigned __int64 v169;
  long double v170;
  _QWORD* v171;
  int v172;
  __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  long double v177;
  float32x4_t* v178;
  __int64 v179;
  float32x4_t* v180;
  unsigned __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  __int64 v184;
  unsigned __int64 v185;
  __int64 v186;
  __int64* v187;
  __int64 v188;
  unsigned __int64 v189;
  __int64 v190;
  unsigned __int64 v191;
  char v192;
  unsigned __int64 v193;
  float32x4_t* v194;
  float32x4_t* v195;
  __int64 v196;
  unsigned __int64 v197;
  __int64 v198;
  __int64 v199;
  float32x4_t* v200;
  float32x4_t* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned int v206;
  unsigned __int8 v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  float32x4_t* v210;
  unsigned __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  float32x4_t* v215;
  float32x4_t* v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  float32x4_t* v220;
  bool v221;
  unsigned __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  __int8* v225;
  __int64* v226;
  unsigned __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  int v233;
  __int64 v234;
  __int64 v235;
  __int64* v236;
  __int64 v237;
  __int64 v238;
  int v239;
  __int64* v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  int v247;
  char v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  __int64 v252;
  int v253;
  int v254;
  __int64 v255;
  __int64 v256;
  int v257;
  __int64 v258;
  long double v259;
  __int64 v260;
  char v261;
  _BYTE* v262;
  _BYTE* v263;
  bool v264;
  __int64* v265;
  unsigned __int64 v266;
  __int64 v267;
  __int64 v268;
  char* v269;
  __int64 v270;
  unsigned __int64 v271;
  __int64 v272;
  unsigned __int64 v273;
  __int64 v274;
  __int64 v275;
  int v276;
  int v277;
  __int64 v278;
  __int64 v279;
  int v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  int v284;
  __int64 v285;
  __int64 v286;
  int v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  unsigned __int64 v291;
  char* v292;
  __int64 v293;
  long double v294;
  __int64 v295;
  __int64* v296;
  unsigned __int64 v297;
  __int64 v298;
  __int64 v299;
  char* v300;
  __int64 v301;
  unsigned __int64 v302;
  __int64 v303;
  unsigned __int64 v304;
  __int64 v305;
  unsigned __int64 v306;
  char* v307;
  __int64 v308;
  long double v309;
  __int64 v310;
  __int64* v311;
  _QWORD* v312;
  _QWORD* v313;
  _QWORD* v314;
  unsigned __int64 v315;
  __int64 v316;
  __int64 v317;
  float32x2_t* v318;
  float32x2_t v319;
  unsigned __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  unsigned __int64 v325;
  __int64 v326;
  __int64 v327;
  long double v328;
  float32x4_t* v329;
  __int64 v330;
  float32x4_t* v331;
  unsigned __int64 v332;
  unsigned __int64 v333;
  unsigned __int64 v334;
  __int8* v335;
  unsigned __int64 v336;
  __int8* v337;
  __int8* v338;
  __int8* v339;
  unsigned __int64 v340;
  long double v341;
  _QWORD* v342;
  __int8* v343;
  float32x4_t* v344;
  unsigned __int64 v345;
  float32x4_t* v346;
  float32x4_t* v347;
  __int64* v348;
  unsigned __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  char* v353;
  unsigned __int64 v354;
  char* v355;
  float32x4_t* v356;
  char* v357;
  unsigned __int64 v358;
  unsigned __int64 v359;
  float32x4_t v360;
  float32x4_t* v361;
  __int64 v362;
  char v363;
  __int64 v364;
  unsigned int v365;
  __int64 v367;
  __int64 v368;
  float32x4_t* v369;
  float32x4_t* v370;
  float32x4_t v371;
  long double v372;
  float v373;
  float v374;
  float v375;
  float32x4_t v376;
  float32x4_t v377;
  long double v378;
  long double v379;
  float32x4_t v380;
  double v381;
  double v382;
  double v383;
  __int64 v384;
  double v385;
  double v386;
  __int64 v387;
  double v388;
  double v389;
  float v390;
  bool v391;
  bool v392;
  unsigned __int32 v394;
  float32x4_t v395;
  float32x4_t v396;
  long double v397;
  signed int v398;
  float32x4_t* v399;
  __int64 v400;
  __int64* v401;
  __int64* v402;
  __int64 v403;
  _QWORD* v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  __int64 v408;
  unsigned __int64 v409;
  __int64 v410;
  bool v411;
  float32x4_t* v412;
  float32x4_t* v413;
  float32x4_t* v414;
  unsigned __int64 v415;
  unsigned __int64 v416;
  unsigned __int64 v417;
  int v418;
  __int64 v419;
  long double v420;
  __int64 v421;
  char v422;
  _BYTE* v423;
  _BYTE* v424;
  bool v425;
  __int64* v426;
  unsigned __int64 v427;
  __int64 v428;
  unsigned __int64 v429;
  char* v430;
  __int64 v431;
  unsigned __int64 v432;
  __int64 v433;
  unsigned __int64 v434;
  __int64 v435;
  unsigned __int64 v436;
  char* v437;
  __int64 v438;
  long double v439;
  __int64 v440;
  __int64* v441;
  unsigned __int64 v442;
  __int64 v443;
  unsigned __int64 v444;
  char* v445;
  __int64 v446;
  unsigned __int64 v447;
  __int64 v448;
  unsigned __int64 v449;
  __int64 v450;
  unsigned __int64 v451;
  char* v452;
  __int64 v453;
  long double v454;
  __int64 v455;
  _QWORD* v456;
  _QWORD* v457;
  _QWORD* v458;
  char v459;
  __int64 v460;
  __int64 v461;
  _QWORD* v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  unsigned int v467;
  unsigned int v468;
  __int64 v470;
  __int64 v471;
  __int64 v472;
  float32x4_t v473;
  __int64 v474;
  float32x4_t v475;
  long double v476;
  float v477;
  float v478;
  float v479;
  float32x4_t v480;
  float32x4_t v481;
  long double v482;
  long double v483;
  __int128 v484;
  double v485;
  double v486;
  double v487;
  __int64 v488;
  double v489;
  double v490;
  __int64 v491;
  double v492;
  double v493;
  float v494;
  bool v495;
  bool v496;
  int v498;
  float32x4_t v499;
  float32x4_t v500;
  long double v501;
  __int64 v502;
  __int64 v503;
  int v504;
  __int64 v505;
  int v506;
  int v507;
  int v508;
  __int64 v509;
  __int64 v510;
  __int64 v511;
  __int64 v512;
  __int64 v513;
  __int64 v514;
  __int64 v515;
  int v516;
  __int64 v517;
  __int64 v518;
  __int64 v519;
  int v520;
  int v521;
  __int64 v522;
  __int64 v523;
  __int64 v524;
  int v525;
  __int64 v526;
  __int64 v527;
  int v528;
  __int64 v529;
  __int64 v530;
  __int64 v531;
  int v532;
  float v533;
  __int64 v534;
  _DWORD* v535;
  _DWORD* j;
  unsigned __int64 v537;
  bool v538;
  float32x4_t* v539;
  float32x4_t* v540;
  float32x4_t* v541;
  __int64 v542;
  _QWORD* v543;
  float32x4_t* v544;
  _QWORD* v545;
  __int64 v546;
  __int64 v547;
  int v548;
  int v549;
  int v550;
  int v551;
  unsigned __int64 v552;
  __int64 v553;
  _DWORD* v554;
  int v555;
  __int64 v556;
  __int64 v557;
  unsigned __int64 v558;
  __int64 v559;
  int v560;
  float32x4_t* v561;
  char* v562;
  __int64 v563;
  char* v564;
  float32x4_t* v565;
  unsigned __int64 v566;
  __int64 v567;
  __int8* v568;
  __int64 v569;
  char v570;
  __int64 v571;
  char v572;
  _DWORD* v573;
  unsigned __int64 v574;
  unsigned int v575;
  __int64 v576;
  float32x4_t* v577;
  __int64 v578;
  unsigned int v579;
  __int64 v580;
  _DWORD* v581;
  float32x4_t* v582;
  int v583;
  char* v584;
  __int64 v585;
  __int64* v586;
  float32x4_t** v587;
  _QWORD* v588;
  unsigned int v589;
  __int64 v590;
  __int64 v591;
  char* v592;
  float v593;
  float v594;
  __int64* v595;
  float32x4_t v596;
  float v597;
  float v598;
  unsigned __int64 v599;
  __int64 v600;
  float32x4_t v601;
  float32x4_t v602;
  unsigned __int64 v603;
  __int64 v604;
  __int64 v605;
  __int64 v606;
  _QWORD* v607;
  _QWORD* v608;
  char* v609;
  __int64 v610;
  int v611;
  __int64 v612;

  v3 = *(_QWORD*)(a1 + 16);
  *(_BYTE*)(a1 + 121) = a2;
  v4 = *(unsigned int*)(a1 + 168);
  v5 = (float32x4_t**)a1;
  result = 1;
  v7 = *(_QWORD*)(v3 + 24);
  if (v7 > v4) {
    v572 = a2 | a3;
    v571 = *(_QWORD*)(v3 + 16);
    v561 = (float32x4_t*)(v5 + 28);
    v565 = (float32x4_t*)((char*)v5 + 225);
    v568 = (__int8*)(v5 + 25);
    v577 = (float32x4_t*)((char*)v5 + 201);
    v587 = v5;
    v566 = *(_QWORD*)(v3 + 24);
    while (1) {
      *((_DWORD*)v5 + 39) = v4;
      *((_DWORD*)v5 + 41) = v4;
      if ((v572 & 1) == 0 && LANES128(v5[1][15]).n128_i32[3] < 1) {
        result = 0;
        goto LABEL_721;
      }
      v11 = v5[6];
      v12 = v5[7];
      v13 = v11 != v12 &&
            (char*)v12 - (char*)v11 > (unsigned __int64)(unsigned int)v4 &&
            LANES128(*(v11)).n128_u8[(unsigned int)v4] == 4;
      v14 = *(_BYTE**)(v571 + 48 * v4 + 16);
      v588 = (_QWORD*)(v571 + 48 * v4);
      if (v14 == nullptr || *v14 == 0) {
        if (!v13) {
          if (*((_BYTE*)v5 + 121) == 1) {
            GameRoutine_c30400(v5, 1);
          }
          else {
            v8 = *v588;
            v9 = strlen(*v588);
            v10 = GameRoutine_c30530(v5, v8, v9, 1);
            GameRoutine_c30780(v5, v10, v588);
          }
        }
        goto LABEL_4;
      }
      v15 = v5[5];
      v16 = LANES128(v15[3]).n128_i64[1];
      if (v16 == LANES128(v15[4]).n128_u64[0]) {
        break;
      }
      v17 = *(_DWORD*)(v16 + 4LL * (unsigned int)v4);
      if ((v17 & 0x80000000) != 0) {
        v569 = 0;
        if (v13) {
          goto LABEL_4;
        }
        goto LABEL_28;
      }
      v18 = LANES128(v15[2]).n128_i64[0];
      v19 = v18 + 168LL * v17;
      v569 = v19;
      if (v18 == 0) {
        goto LABEL_25;
      }
      if ((*(_BYTE*)(v19 + 136) & 1) != 0) {
        goto LABEL_4;
      }
      if (*(_DWORD*)(v19 + 48) == (_DWORD)v4) {
        if (v13) {
          if ((*(_DWORD*)(v19 + 8) & 0xFu) - 4 >= 0xFFFFFFFD) {
            *(_BYTE*)(v19 + 136) = 1;
          }
          goto LABEL_4;
        }
        v570 = 0;
        v20 = 0;
      }
      else {
        if ((*(_DWORD*)(v19 + 8) & 0xF) != 3 &&
            ((*(_DWORD*)(v19 + 8) & 0xF) != 0 || v13)) {
          goto LABEL_4;
        }
        v570 = 0;
        v20 = 1;
      }
    LABEL_29:
      v21 = v5[1];
      v22 = strlen(v14);
      v23 = (__int64*)GameRoutine_c14e30(v21, v14, v22);
      v7 = v566;
      v586 = v23;
      if (v23 == nullptr) {
        goto LABEL_4;
      }
      v25 = (_DWORD*)*v23;
      v26 = *(_DWORD*)(*v23 + 32);
      if (v26 == 0 && *(_QWORD*)(*(_QWORD*)(v23[1] + 8) + 592LL) == 0) {
        goto LABEL_4;
      }
      if ((LANES128((*v5)[5]).n128_u32[3] & v25[9]) != 0) {
        goto LABEL_4;
      }
      v560 = v4;
      if ((v570 & 1) != 0) {
        goto LABEL_469;
      }
      v27 = *(_DWORD*)(v569 + 8);
      v28 = v27 & 0xF;
      if ((v27 & 0xF) == 0) {
        goto LABEL_469;
      }
      if (v26 != 0) {
        goto LABEL_54;
      }
      v29 = v23[1];
      GameRoutine_ad7390_alt1(v29);
      v30 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v29 + 8) + 592LL));
      if (*(_WORD*)(v30 + 220) != 0) {
        v31 = 0;
        while (1) {
          v32 = *(_QWORD*)(v30 + 40) + 120 * v31;
          v33 = *(unsigned __int16*)(v32 + 106);
          if (*(_WORD*)(v32 + 106) != 0) {
            break;
          }
        LABEL_43:
          if (++v31 == *(unsigned __int16*)(v30 + 220)) {
            goto LABEL_49;
          }
        }
        v34 = (unsigned __int8*)(*(_QWORD*)(v32 + 40) + 90LL);
        while (1) {
          v35 = *v34;
          v34 += 96;
          if (v35 != 0) {
            goto LABEL_53;
          }
          if (--v33 == 0) {
            goto LABEL_43;
          }
        }
      }
    LABEL_49:
      v36 = v586[1];
      if (v36 != 0) {
        v37 = *v586;
        if (*v586 != 0) {
          v38 = *(_QWORD*)(v37 + 48);
          if (v38 != 0) {
            v39 = strlen(*(_QWORD*)(v37 + 48));
            if ((GameRoutine_1988ea0(v36, v38, v39) & 1) != 0) {
              goto LABEL_53;
            }
          }
        }
      }
      if (v28 == 3) {
        v7 = v566;
        v102 = v586[3];
        v103 = v586[4];
        if (v102 != v103) {
          while (*(_QWORD*)(v102 + 24) < 2u) {
            v7 = v566;
            v102 += 32;
            v40 = 1;
            if (v102 == v103) {
              goto LABEL_55;
            }
          }
        LABEL_53:
          v27 = *(_DWORD*)(v569 + 8);
          v7 = v566;
        LABEL_54:
          v40 = 0;
          *(_DWORD*)(v569 + 8) = v27 & 0xFFFFFFF0;
          goto LABEL_55;
        }
        v40 = 1;
      }
      else {
        v7 = v566;
        v40 = 0;
      }
    LABEL_55:
      v25 = (_DWORD*)*v586;
      if ((v20 & v40 & 1) != 0 ||
          (*(_DWORD*)(v569 + 8) & 0xFu) - 4 < 0xFFFFFFFD) {
        goto LABEL_469;
      }
      v41 = v25[6];
      v551 = v40;
      if (v41 == 2) {
        v42 = 10;
      }
      else {
        v42 = 8;
      }
      if (v41 == 1) {
        v43 = 9;
      }
      else {
        v43 = v42;
      }
      v549 = v43;
      v44 = LANES128(v5[5][2]).n128_u64[0] +
            168LL * *(unsigned int*)(LANES128(v5[5][3]).n128_u64[1] +
                                     4LL * (unsigned int)v4);
      v45 = *(_QWORD*)(v44 + 56);
      v46 = *(_QWORD*)(v44 + 64);
      v47 = *(_DWORD*)(v44 + 8);
      if (v45 == v46) {
        v48 = nullptr;
      }
      else {
        v48 = *(_DWORD**)(v44 + 56);
      }
      v554 = v48;
      v567 = *(_QWORD*)(v44 + 80);
      v574 = LANES128(v5[2][1]).n128_u64[0];
      v49 = v586[1];
      GameRoutine_ad7390_alt1(v49);
      v559 = v49;
      v50 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v49 + 8) + 592LL));
      v54 = *(unsigned __int16*)(v50 + 220);
      v55 = *(_QWORD*)(v44 + 144);
      *(_QWORD*)(v44 + 152) = v55;
      if (v54 != 0) {
        v56 = *(_QWORD*)(v44 + 160) - v55;
        if (v54 <= v56 >> 4) {
          v50 = memset_alt1(v55, 0, 16 * v54, v51, v52, v53);
          *(_QWORD*)(v44 + 152) = v55 + 16 * v54;
        }
        else {
          v57 = v56 >> 3;
          if (v56 >> 3 <= v54) {
            v57 = v54;
          }
          if ((unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFF0LL) {
            v58 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v58 = v57;
          }
          if (v58 >> 60 != 0) {
          LABEL_723:
            GameRoutine_60a210_alt1(v50);
          }
          v59 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v58, 16, 0);
          v50 = memset_alt1(v59, 0, 16 * v54, v60, v61, v62);
          *(_QWORD*)(v44 + 160) = v59 + 16 * v58;
          *(_QWORD*)(v44 + 144) = v59;
          *(_QWORD*)(v44 + 152) = v59 + 16 * v54;
          if (v55 != 0) {
            v63 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v63 = 128;
            }
            v50 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v24);
          }
        }
      }
      v64 = *(char**)(v44 + 112);
      v65 = *(char**)(v44 + 120);
      v66 = v64;
      if (v64 != v65) {
        do {
          v67 = *((_QWORD*)v65 - 3);
          if (v67 != 0) {
            *((_QWORD*)v65 - 2) = v67;
            v68 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v68 = 128;
            }
            v50 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v24);
          }
          v69 = *((_QWORD*)v65 - 6);
          if (v69 != 0) {
            *((_QWORD*)v65 - 5) = v69;
            v70 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v70 = 128;
            }
            v50 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v24);
          }
          v71 = v65 - 72;
          v72 = *((_QWORD*)v65 - 9);
          if (v72 != 0) {
            *((_QWORD*)v65 - 8) = v72;
            v73 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v73 = 128;
            }
            v50 = nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v24);
          }
          v65 -= 72;
        } while (v71 != v64);
        v66 = *(char**)(v44 + 112);
      }
      v74 = v64 - v66;
      *(_QWORD*)(v44 + 120) = v64;
      v558 = v54;
      v578 = v44;
      v75 = 0x8E38E38E38E38E39LL * ((v64 - v66) >> 3);
      v4 = v54 - v75;
      if (v54 <= v75) {
        LODWORD(v4) = v560;
        if (v54 < v75) {
          v94 = &v66[72 * (unsigned int)v54];
          if (v94 != v64) {
            do {
              v95 = *((_QWORD*)v64 - 3);
              if (v95 != 0) {
                *((_QWORD*)v64 - 2) = v95;
                v96 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v96 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v24);
              }
              v97 = *((_QWORD*)v64 - 6);
              if (v97 != 0) {
                *((_QWORD*)v64 - 5) = v97;
                v98 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v98 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, v24);
              }
              v99 = v64 - 72;
              v100 = *((_QWORD*)v64 - 9);
              if (v100 != 0) {
                *((_QWORD*)v64 - 8) = v100;
                v101 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v101 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v101, v24);
              }
              v64 -= 72;
            } while (v99 != v94);
          }
          *(_QWORD*)(v44 + 120) = v94;
        }
      }
      else {
        v76 = *(_QWORD*)(v44 + 128);
        if (0x8E38E38E38E38E39LL * ((v76 - (__int64)v64) >> 3) >= v4) {
          v104 =
              72LL * (unsigned int)v4 -
              (72 * (_DWORD)v4 - 72 -
               72 * ((unsigned int)((unsigned __int64)(954437177LL *
                                                       (72 * (int)v4 - 72)) >>
                                    32) >>
                     4));
          memset_alt1(v64, 0, v104, v51, v52, v53);
          LODWORD(v4) = v560;
          *(_QWORD*)(v44 + 120) = &v64[v104];
        }
        else {
          v77 = 0x8E38E38E38E38E39LL * ((v76 - (__int64)v66) >> 3);
          v78 = 2 * v77;
          if (2 * v77 <= v54) {
            v78 = v54;
          }
          if (v77 >= 0x1C71C71C71C71C7LL) {
            v79 = 0x38E38E38E38E38ELL;
          }
          else {
            v79 = v78;
          }
          if (v79 > 0x38E38E38E38E38ELL) {
            goto LABEL_723;
          }
          v80 = 9 * v79;
          v81 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 72 * v79, 16, 0);
          v82 = v81 + v74;
          v83 = (_QWORD*)v81;
          v4 = 72LL * (unsigned int)v4 -
               (72 * (_DWORD)v4 - 72 -
                72 * ((unsigned int)((unsigned __int64)(954437177LL *
                                                        (72 * (int)v4 - 72)) >>
                                     32) >>
                      4));
          memset_alt1(v81 + v74, 0, v4, v84, v85, v86);
          if (v66 != v64) {
            v87 = v66;
            v88 = v83;
            do {
              *v88 = *(_QWORD*)v87;
              v88[1] = *((_QWORD*)v87 + 1);
              v88[2] = *((_QWORD*)v87 + 2);
              *((_QWORD*)v87 + 1) = 0;
              *((_QWORD*)v87 + 2) = 0;
              *(_QWORD*)v87 = 0;
              v88[3] = *((_QWORD*)v87 + 3);
              v88[4] = *((_QWORD*)v87 + 4);
              v88[5] = *((_QWORD*)v87 + 5);
              *((_QWORD*)v87 + 4) = 0;
              *((_QWORD*)v87 + 5) = 0;
              *((_QWORD*)v87 + 3) = 0;
              v88[6] = *((_QWORD*)v87 + 6);
              v88[7] = *((_QWORD*)v87 + 7);
              v88[8] = *((_QWORD*)v87 + 8);
              *((_QWORD*)v87 + 7) = 0;
              *((_QWORD*)v87 + 8) = 0;
              *((_QWORD*)v87 + 6) = 0;
              v87 += 72;
              v88 += 9;
            } while (v87 != v64);
            do {
              v89 = *((_QWORD*)v66 + 6);
              if (v89 != 0) {
                *((_QWORD*)v66 + 7) = v89;
                v90 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v90 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v90, v24);
              }
              v91 = *((_QWORD*)v66 + 3);
              if (v91 != 0) {
                *((_QWORD*)v66 + 4) = v91;
                v92 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v92 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v24);
              }
              if (*(_QWORD*)v66 != 0) {
                *((_QWORD*)v66 + 1) = *(_QWORD*)v66;
                v93 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v93 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v93, v24);
              }
              v66 += 72;
            } while (v66 != v64);
          }
          v105 = &v83[v80];
          v44 = v578;
          v106 = v82 + v4;
          LODWORD(v4) = v560;
          v107 = *(_QWORD*)(v578 + 112);
          *(_QWORD*)(v578 + 112) = v83;
          *(_QWORD*)(v578 + 120) = v106;
          *(_QWORD*)(v578 + 128) = v105;
          if (v107 != 0) {
            v108 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v108 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v108, v24);
          }
        }
      }
      if ((_DWORD)v558 != 0) {
        v550 = v47 & 0xF;
        v109 = v47 & 0xE;
        v110 = 0;
        v548 = v109;
        v552 = v574 + 48LL * (unsigned int)v4;
        if (v46 == v45) {
          v111 = 0;
        }
        else {
          v111 = v46 - v45;
        }
        v556 = v111;
        v573 = (_DWORD*)((char*)v554 + v111);
        while (2) {
          v50 = GameRoutine_c156c0(v559, (unsigned int)v110);
          if ((unsigned int)v50 >= 0xA) {
            goto LABEL_722;
          }
          v112 = v50;
          v113 = 1LL << v50;
          if ((LANES128((*v587)[11]).n128_u64[1] & (1LL << v50)) == 0) {
            goto LABEL_151;
          }
          if (*(_BYTE*)(v44 + 104) == 1) {
            v564 = (char*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
            *(_DWORD*)v564 = 0;
            v50 = (__int64)(v564 + 4);
            v584 = v564 + 4;
            if (v556 != 0) {
            LABEL_156:
              v114 = v554;
              v555 = v112;
              v115 = 0;
              v116 = nullptr;
              v557 = v110;
              v117 = nullptr;
              v575 = 0;
              v595 = nullptr;
              v603 = 0;
              v592 = nullptr;
              v599 = 0;
              v562 = v584;
              do {
                v581 = v114;
                v589 = *v114;
                if (*(_BYTE*)(v44 + 104) == 1) {
                  v118 = *(_DWORD*)(v567 + 4LL * v115);
                  v119 = v575 + 1;
                  v120 = v575 + 1 >= v118;
                  v575 = v575 + 1 - v118;
                  if (v575 != 0 && v120) {
                    ++v115;
                    if (*((_DWORD*)v584 - 1) != 0) {
                      if (v584 >= v562) {
                        v121 = v584 - v564;
                        v122 = (v584 - v564) >> 2;
                        v123 = v122 + 1;
                        if ((unsigned __int64)(v122 + 1) >> 62 != 0) {
                        LABEL_724:
                          GameRoutine_66df80(v50);
                        }
                        if ((v562 - v564) >> 1 > v123) {
                          v123 = (v562 - v564) >> 1;
                        }
                        if ((unsigned __int64)(v562 - v564) >=
                            0x7FFFFFFFFFFFFFFCLL) {
                          v124 = 0x3FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v124 = v123;
                        }
                        if (v124 != 0) {
                          if (v124 >> 62 != 0) {
                            goto LABEL_723;
                          }
                          v125 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v124,
                              16, 0);
                        }
                        else {
                          v125 = 0;
                        }
                        v126 = v125 + v121 - 4 * v122;
                        *(_DWORD*)(v125 + v121) = 0;
                        v562 = (char*)(v125 + 4 * v124);
                        v584 = (char*)(v125 + v121 + 4);
                        v50 = memcpy(v126, v564, v121);
                        if (v564 != nullptr) {
                          v127 = 56;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) != 0) {
                            v127 = 128;
                          }
                          v50 = nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v127,
                              v24);
                        }
                        v564 = (char*)v126;
                      }
                      else {
                        *(_DWORD*)v584 = 0;
                        v584 += 4;
                      }
                    }
                  }
                  else {
                    v575 = v119;
                  }
                }
                v579 = v115;
                v128 = v574 + 48LL * v589;
                if (*(_DWORD*)(v128 + 36) != 0) {
                  v129 = 0;
                  for (i = 0; i < *(unsigned int*)(v128 + 36); ++i) {
                    v131 = *(_QWORD*)(v128 + 40);
                    LANES64(v132).n64_u64[0] =
                        LANES64_OF(
                            vadd_f32(
                                vmul_f32(
                                    COERCE_AS(
                                        float32x2_t,
                                        *(unsigned int*)(v131 + v129 + 48)),
                                    COERCE_AS(
                                        float32x2_t,
                                        *(unsigned int*)(v131 + v129 + 48))),
                                vmul_f32(*(float32x2_t*)(v131 + v129 + 40),
                                         *(float32x2_t*)(v131 + v129 + 40))))
                            .n64_u64[0];
                    *(float32x2_t*)&v24 = vpadd_f32(v132, v132);
                    if (!(*(float*)&v24 < 0x1.0000000000000p-23f)) {
                      v133 = *(_QWORD*)(v131 + v129 + 8);
                      v134 = strlen(v133);
                      v50 = wld_c2faa0_alt1(v133, v134);
                      if ((v50 & v113) == 0) {
                        if ((unsigned __int64)v117 >= v603) {
                          v135 = (char*)v117 - (char*)v595;
                          v136 = v117 - v595;
                          v137 = v136 + 1;
                          if ((unsigned __int64)(v136 + 1) >> 61 != 0) {
                            GameRoutine_c31680();
                          }
                          v138 = v603 - (_QWORD)v595;
                          if ((__int64)(v603 - (_QWORD)v595) >> 2 > v137) {
                            v137 = v138 >> 2;
                          }
                          if ((unsigned __int64)v138 >= 0x7FFFFFFFFFFFFFF8LL) {
                            v139 = 0x1FFFFFFFFFFFFFFFLL;
                          }
                          else {
                            v139 = v137;
                          }
                          if (v139 != 0) {
                            if (v139 >> 61 != 0) {
                              goto LABEL_723;
                            }
                            v140 = fw_memory_HeapManager_Allocate_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                8 * v139, 16, 0);
                          }
                          else {
                            v140 = 0;
                          }
                          v603 = v140 + 8 * v139;
                          v141 = v129 + v131;
                          v142 = v140 + v135 - 8 * v136;
                          *(_QWORD*)(v140 + v135) = v141;
                          v117 = (__int64*)(v140 + v135 + 8);
                          v50 = memcpy(v142, v595, v135);
                          if (v595 != nullptr) {
                            v143 = 56;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) != 0) {
                              v143 = 128;
                            }
                            v50 = nn_mem_StandardAllocator_Free_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v143,
                                v24);
                          }
                          v44 = v578;
                          v595 = (__int64*)v142;
                        }
                        else {
                          *v117++ = v129 + v131;
                        }
                        if ((unsigned __int64)v116 >= v599) {
                          v144 = (char*)(v116 - v592);
                          v145 = (v116 - v592) >> 2;
                          v146 = v145 + 1;
                          if ((unsigned __int64)(v145 + 1) >> 62 != 0) {
                            goto LABEL_724;
                          }
                          v147 = v599 - (_QWORD)v592;
                          if ((__int64)(v599 - (_QWORD)v592) >> 1 > v146) {
                            v146 = v147 >> 1;
                          }
                          if ((unsigned __int64)v147 >= 0x7FFFFFFFFFFFFFFCLL) {
                            v148 = 0x3FFFFFFFFFFFFFFFLL;
                          }
                          else {
                            v148 = v146;
                          }
                          if (v148 != 0) {
                            if (v148 >> 62 != 0) {
                              goto LABEL_723;
                            }
                            v149 = fw_memory_HeapManager_Allocate_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                4 * v148, 16, 0);
                          }
                          else {
                            v149 = 0;
                          }
                          v599 = v149 + 4 * v148;
                          v150 = (__int64)&v144[v149 + -4 * v145];
                          *(_DWORD*)&v144[v149] = v589;
                          v116 = &v144[v149 + 4];
                          v50 = memcpy(v150, v592, v144);
                          if (v592 != nullptr) {
                            v151 = 56;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) != 0) {
                              v151 = 128;
                            }
                            v50 = nn_mem_StandardAllocator_Free_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v151,
                                v24);
                          }
                          v592 = (char*)v150;
                        }
                        else {
                          *(_DWORD*)v116 = v589;
                          v116 += 4;
                        }
                        if (*(_BYTE*)(v44 + 104) == 1) {
                          ++*((_DWORD*)v584 - 1);
                        }
                      }
                    }
                    v129 += 56;
                  }
                }
                v114 = v581 + 1;
                v115 = v579;
              } while (v581 + 1 != v573);
              v152 = (__int64)v564;
              if (v595 == v117) {
              LABEL_223:
                LODWORD(v4) = v560;
                v110 = v557;
                goto LABEL_424;
              }
              if (*((_BYTE*)v587 + 121) == 1) {
                GameRoutine_c30400(v587, 0);
                goto LABEL_223;
              }
              v153 = (char*)v117 - (char*)v595;
              v110 = v557;
              v553 = v153 >> 3;
              GameRoutine_198ad80(v44, (unsigned int)v557);
              v154 = *(_QWORD*)v44;
              v155 = strlen(*(_QWORD*)v44);
              v156 = GameRoutine_c30530(v587, v154, v155, 0);
              LODWORD(v607) = v557;
              *(_DWORD*)(v156 + 284) = v555;
              v157 = GameRoutine_c16a20();
              *(_QWORD*)(*(_QWORD*)(v157 + 24) + 104LL) |= 4uLL;
              GameRoutine_c309e0(v587, v156, v586, v552, &GameData_1a9f09e, 0,
                                 0);
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21ec980,
                       memory_order_acquire) &
                   1) == 0 &&
                  (unsigned int)__cxa_guard_acquire(&GameData_21ec980) != 0) {
                GameData_21ec978 = (unsigned int)wld_Crc32(
                    0, (unsigned __int8*)"MapObjectModule", 15);
                __cxa_guard_release(&GameData_21ec980);
              }
              v158 = v584;
              v563 = v156;
              v159 = *(_QWORD*)(v156 + 512);
              v160 = v159;
              while (v160 != *(_QWORD*)(v156 + 504)) {
                v161 = *(_DWORD*)(v160 - 16);
                v160 -= 16;
                v159 -= 16;
                if (v161 == GameData_21ec978) {
                  if (*(_QWORD*)(v156 + 512) != v159 && v550 != 3) {
                    v580 = *(_QWORD*)(v159 + 8);
                    if (v580 != 0 && v116 != v592) {
                      v162 = 0;
                      v163 = 0;
                      v576 = (v116 - v592) >> 2;
                      do {
                        v171 = (_QWORD*)(*(_QWORD*)(v578 + 112) +
                                         72LL * (int)v110);
                        if (*v171 == v171[1]) {
                          v172 = v163;
                        }
                        else {
                          v172 = *(_DWORD*)(*v171 + (v162 >> 30));
                        }
                        v173 =
                            *(_QWORD*)(v574 +
                                       48LL * *(unsigned int*)&v592[4 * v172]);
                        v174 = *(_QWORD*)v595[v172];
                        v175 = strlen(v173);
                        v590 = v174;
                        v176 = strlen(v174);
                        v178 = *v587;
                        v179 = v176;
                        v180 = *v587 + 12;
                        if (v561 != v180) {
                          v181 = LANES128(*(v180)).n128_u8[0];
                          if ((LANES128(*(v561)).n128_u8[0] & 1) != 0) {
                            v184 = (__int64)LANES128(v178[12]).n128_i64 + 1;
                            v187 = &LANES128(v178[12]).n128_i64[1];
                            v185 = LANES128(v178[12]).n128_u64[1];
                            v186 = v187[1];
                            if ((v181 & 1) != 0) {
                              v188 = v186;
                            }
                            else {
                              v188 = v184;
                            }
                            if ((v181 & 1) != 0) {
                              v189 = v185;
                            }
                            else {
                              v189 = v181 >> 1;
                            }
                            v176 =
                                SpineModel_64dde0_alt1(v561, v188, v189, v177);
                          }
                          else if ((v181 & 1) != 0) {
                            v176 = GameRoutine_64df20_alt1(
                                v561, LANES128(v178[13]).n128_u64[0],
                                LANES128(v178[12]).n128_u64[1], v177);
                          }
                          else {
                            v182 = LANES128(*(v180)).n128_u64[0];
                            v183 = LANES128((*v587)[13]).n128_i64[0];
                            LANES128(*(v561)).n128_u64[1] =
                                LANES128((*v587)[12]).n128_u64[1];
                            LANES128(v561[1]).n128_u64[0] = v183;
                            LANES128(*(v561)).n128_u64[0] = v182;
                          }
                        }
                        v604 = v179;
                        v190 = (__int64)v587[28];
                        v191 = (unsigned __int64)v587[29];
                        v192 = *((_BYTE*)v587 + 224);
                        v600 = v162;
                        v193 = (v190 & 0xFFFFFFFFFFFFFFFELL) - 1;
                        if ((v192 & 1) == 0) {
                          v193 = 22;
                        }
                        if ((v190 & 1) != 0) {
                          v194 = v587[29];
                        }
                        else {
                          v194 = (float32x4_t*)((unsigned __int8)v190 >> 1);
                        }
                        if (v193 - (unsigned __int64)v194 >= v175) {
                          if (v175 != 0) {
                            if ((v190 & 1) != 0) {
                              v200 = v587[30];
                            }
                            else {
                              v200 = v565;
                            }
                            v176 =
                                memmove((char*)v194 + (_QWORD)v200, v173, v175);
                            v201 = (float32x4_t*)((char*)v194 + v175);
                            if (((_BYTE)v587[28] & 1) != 0) {
                              v587[29] = v201;
                            }
                            else {
                              LANES128(*(v561)).n128_u8[0] = 2 * (_BYTE)v201;
                            }
                            LANES128(*(v201)).n128_u8[(_QWORD)v200] = 0;
                            v205 = v604;
                            v190 = (__int64)v587[28];
                            v191 = (unsigned __int64)v587[29];
                            v207 = *((_BYTE*)v587 + 224);
                            v206 = (unsigned __int8)v190;
                          }
                          else {
                            v205 = v604;
                            v206 = (unsigned __int8)v587[28];
                            v207 = (unsigned __int8)v587[28];
                          }
                        }
                        else {
                          v191 = (unsigned __int64)LANES128(*(v194)).n128_u64 +
                                 v175;
                          if ((unsigned __int64)LANES128(*(v194)).n128_u64 +
                                  v175 - v193 >
                              -10LL - v193) {
                            goto LABEL_728;
                          }
                          v195 = v565;
                          v196 = v173;
                          if (((unsigned __int64)v587[28] & 1) != 0) {
                            v195 = v587[30];
                          }
                          v582 = v195;
                          if (v193 >= 0x7FFFFFFFFFFFFFF3LL) {
                            v199 = -9;
                          }
                          else {
                            v197 = 2 * v193;
                            if (v191 > 2 * v193) {
                              v197 =
                                  (unsigned __int64)LANES128(*(v194)).n128_u64 +
                                  v175;
                            }
                            if ((v197 | 7) == 0x17) {
                              v198 = 26;
                            }
                            else {
                              v198 = (v197 | 7) + 1;
                            }
                            if (v197 >= 0x17) {
                              v199 = v198;
                            }
                            else {
                              v199 = 23;
                            }
                          }
                          v202 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, v199, 16,
                              0);
                          v203 = v202;
                          if (v194 != nullptr) {
                            memmove(v202, v582, v194);
                          }
                          v176 = memcpy((char*)v194 + v203, v196, v175);
                          if ((v192 & 1) != 0 && v582 != nullptr) {
                            v204 = 56;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) != 0) {
                              v204 = 128;
                            }
                            v176 = nn_mem_StandardAllocator_Free_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v204,
                                v177);
                          }
                          v190 = v199 | 1;
                          v162 = v600;
                          v205 = v604;
                          v110 = v557;
                          v206 = (unsigned __int8)v190;
                          v587[29] = (float32x4_t*)v191;
                          v587[30] = (float32x4_t*)v203;
                          v587[28] = (float32x4_t*)v190;
                          *(_BYTE*)(v203 + v191) = 0;
                          v207 = v190;
                        }
                        v208 = (v190 & 0xFFFFFFFFFFFFFFFELL) - 1;
                        if ((v207 & 1) == 0) {
                          v208 = 22;
                        }
                        if ((v190 & 1) != 0) {
                          v209 = v191;
                        }
                        else {
                          v209 = (unsigned __int8)v190 >> 1;
                        }
                        if (v208 - v209 >= v205) {
                          v214 = (__int64)v587[30];
                          if (v205 != 0) {
                            if ((v190 & 1) != 0) {
                              v215 = v587[30];
                            }
                            else {
                              v215 = v565;
                            }
                            memmove((char*)v215 + v209, v590, v205);
                            v216 = (float32x4_t*)(v209 + v205);
                            if ((LANES128(*(v561)).n128_u8[0] & 1) != 0) {
                              v587[29] = v216;
                            }
                            else {
                              LANES128(*(v561)).n128_u8[0] = 2 * (_BYTE)v216;
                            }
                            LANES128(*(v216)).n128_u8[(_QWORD)v215] = 0;
                            v206 = *((unsigned __int8*)v587 + 224);
                            v191 = (unsigned __int64)v587[29];
                            v214 = (__int64)v587[30];
                          }
                        }
                        else {
                          v191 = v209 + v205;
                          if (v209 + v205 - v208 > -10LL - v208) {
                          LABEL_728:
                            String_60a1d0_alt1(v176);
                          }
                          if ((v190 & 1) != 0) {
                            v210 = v587[30];
                          }
                          else {
                            v210 = v565;
                          }
                          if (v208 >= 0x7FFFFFFFFFFFFFF3LL) {
                            v213 = -9;
                          }
                          else {
                            v211 = 2 * v208;
                            if (v191 > 2 * v208) {
                              v211 = v191;
                            }
                            if ((v211 | 7) == 0x17) {
                              v212 = 26;
                            }
                            else {
                              v212 = (v211 | 7) + 1;
                            }
                            if (v211 >= 0x17) {
                              v213 = v212;
                            }
                            else {
                              v213 = 23;
                            }
                          }
                          v217 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, v213, 16,
                              0);
                          v214 = v217;
                          if (v209 != 0) {
                            memmove(v217, v210, v209);
                          }
                          memcpy(v214 + v209, v590, v604);
                          if ((v207 & 1) != 0 && v210 != nullptr) {
                            v218 = 56;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) != 0) {
                              v218 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v218,
                                v177);
                          }
                          v219 = v213 | 1;
                          v162 = v600;
                          v587[29] = (float32x4_t*)v191;
                          v587[30] = (float32x4_t*)v214;
                          *(_BYTE*)(v214 + v191) = 0;
                          v206 = (unsigned __int8)v219;
                          v587[28] = (float32x4_t*)v219;
                        }
                        v220 = v587[4];
                        v221 = (v206 & 1) == 0;
                        v222 = v206 >> 1;
                        if (v221) {
                          v223 = (__int64)v565;
                        }
                        else {
                          v223 = v214;
                        }
                        if (v221) {
                          v224 = v222;
                        }
                        else {
                          v224 = v191;
                        }
                        v225 = v568;
                        v226 = &LANES128(v220[3]).n128_i64[1];
                        if (v568 != &LANES128(v220[3]).n128_i8[8]) {
                          v227 = *(unsigned __int8*)v226;
                          if ((*v568 & 1) != 0) {
                            v164 = &LANES128(v220[3]).n128_i8[9];
                            v167 = v220 + 4;
                            v165 = LANES128(v220[4]).n128_u64[0];
                            v166 = (char*)LANES128(*(v167)).n128_u64[1];
                            if ((v227 & 1) != 0) {
                              v168 = v166;
                            }
                            else {
                              v168 = v164;
                            }
                            if ((v227 & 1) != 0) {
                              v169 = v165;
                            }
                            else {
                              v169 = v227 >> 1;
                            }
                            SpineModel_64dde0_alt1(v568, v168, v169, v177);
                          }
                          else if ((v227 & 1) != 0) {
                            v225 = v568;
                            GameRoutine_64df20_alt1(
                                v568, LANES128(v220[4]).n128_u64[1],
                                LANES128(v220[4]).n128_u64[0], v177);
                          }
                          else {
                            v228 = *v226;
                            v229 = v226[1];
                            v230 = v226[2];
                            v225 = v568;
                            *((_QWORD*)v568 + 1) = v229;
                            *((_QWORD*)v568 + 2) = v230;
                            *(_QWORD*)v568 = v228;
                          }
                        }
                        GameRoutine_1a09ce0(v225, v223, v224);
                        MapObjectModule_a7d8a0(v580, v225, v170);
                        v152 = (__int64)v564;
                        v158 = v584;
                        ++v163;
                        v162 += 0x100000000LL;
                      } while (v576 != v163);
                    }
                  }
                  break;
                }
              }
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21f4d48,
                       memory_order_acquire) &
                   1) == 0 &&
                  (unsigned int)__cxa_guard_acquire(&GameData_21f4d48) != 0) {
                GameData_21f4d44 = (unsigned int)wld_Crc32(
                    0, (unsigned __int8*)"ModelModule", 11);
                __cxa_guard_release(&GameData_21f4d48);
              }
              LODWORD(v4) = v560;
              v44 = v578;
              v231 = *(_QWORD*)(v563 + 512);
              v232 = v231;
              do {
                if (v232 == *(_QWORD*)(v563 + 504)) {
                  goto LABEL_364;
                }
                v233 = *(_DWORD*)(v232 - 16);
                v232 -= 16;
                v231 -= 16;
              } while (v233 != GameData_21f4d44);
              if (*(_QWORD*)(v563 + 512) == v231) {
              LABEL_364:
                v234 = 0;
              }
              else {
                v234 = *(_QWORD*)(v231 + 8);
                if (v234 != 0) {
                  v235 = *(_QWORD*)(v578 + 112) + 72LL * (int)v110;
                  v236 = *(__int64**)(v235 + 48);
                  v237 = *(_QWORD*)(v235 + 56) - (_QWORD)v236;
                  v221 = v237 == 0;
                  v238 = v237 >> 3;
                  if (v221) {
                    v236 = nullptr;
                    v238 = 0;
                  }
                  if (v238 != 0) {
                    v239 = v238;
                  }
                  else {
                    v239 = v553;
                  }
                  if (v238 != 0) {
                    v240 = v236;
                  }
                  else {
                    v240 = v595;
                  }
                  ModelModule_a7f2a0(v234, v240, v239, *v587 + 4, v550 == 3);
                  v241 = 0;
                  if (v550 == 3) {
                    nn_os_LockMutex(&GameData_2167580);
                    v50 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
                    *(_BYTE*)(v50 + 16) = 0;
                    v241 = v50;
                    *(_DWORD*)(v50 + 17) = 33686018;
                    *(_QWORD*)v50 = wld_InstancedObjectCtrlModule_vtable;
                    *(_QWORD*)(v50 + 8) = v563;
                    v242 = *(
                        _QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                            8LL) +
                                 40LL);
                    *(_QWORD*)(v50 + 24) = *(_QWORD*)(v242 + 16);
                    v243 = *(_QWORD*)(v242 + 24);
                    *(_QWORD*)(v50 + 32) = v243;
                    if (v243 != 0) {
                      atomic_fetch_add_explicit(
                          (atomic_ullong* volatile)(v243 + 16), 1u,
                          memory_order_relaxed);
                    }
                    *(_BYTE*)(v50 + 64) = 0;
                    *(_QWORD*)(v50 + 48) = 0;
                    *(_QWORD*)(v50 + 56) = 0;
                    *(_QWORD*)(v50 + 40) = 0;
                    if ((atomic_load_explicit(
                             (atomic_uchar* volatile)GameData_212ea18,
                             memory_order_acquire) &
                         1) == 0) {
                      v50 = __cxa_guard_acquire(&GameData_22031a0);
                      if ((_DWORD)v50 != 0) {
                        GameData_2203198 = (unsigned int)wld_Crc32(
                            0, (unsigned __int8*)"InstancedObjectCtrlModule",
                            25);
                        v50 = __cxa_guard_release(&GameData_22031a0);
                      }
                    }
                    v608 = (_QWORD*)v241;
                    v245 = *(_QWORD*)(v563 + 504);
                    v244 = *(_QWORD*)(v563 + 512);
                    LODWORD(v607) = GameData_2203198;
                    v246 = v244;
                    while (v246 != v245) {
                      v247 = *(_DWORD*)(v246 - 16);
                      v246 -= 16;
                      if (v247 == GameData_2203198) {
                        goto LABEL_386;
                      }
                    }
                    if (v245 == v244 &&
                        (unsigned __int64)(*(_QWORD*)(v563 + 520) - v245) <=
                            0x6F) {
                      v258 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
                      *(_QWORD*)(v563 + 504) = v258;
                      *(_QWORD*)(v563 + 512) = v258;
                      *(_QWORD*)(v563 + 520) = v258 + 112;
                      if (v244 != 0) {
                        v260 = 56;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) != 0) {
                          v260 = 128;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v260,
                            v259);
                      }
                    }
                    v50 = GameRoutine_98f140(v563 + 504, &v607);
                  LABEL_386:
                    if ((*(_BYTE*)(v241 + 16) & 1) == 0) {
                      v261 = *(_BYTE*)(v241 + 17);
                      *(_BYTE*)(v241 + 16) = 1;
                      *(_BYTE*)(v241 + 17) = v261 & 0xFD;
                      *(_BYTE*)(v241 + 18) &= ~2u;
                      *(_BYTE*)(v241 + 19) &= ~2u;
                      *(_BYTE*)(v241 + 20) &= ~2u;
                      v262 = *(_BYTE**)(v241 + 8);
                      v262[632] = 0;
                      v262[664] = 0;
                      v262[696] = 0;
                      v262[728] = 0;
                      v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v241 + 64LL))(
                          v241);
                      v263 = *(_BYTE**)(v241 + 8);
                      v264 = v263[300] == 3 && v263[301] == 3;
                      if (v264 || v263[302] == 1) {
                        v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v241 + 72LL))(
                            v241);
                      }
                    }
                    v605 = v234;
                    v265 = *(__int64**)(v563 + 536);
                    v266 = *(_QWORD*)(v563 + 544);
                    if ((unsigned __int64)v265 >= v266) {
                      v268 = *(_QWORD*)(v563 + 528);
                      v269 = (char*)v265 - v268;
                      v270 = ((__int64)v265 - v268) >> 3;
                      v271 = v270 + 1;
                      if ((unsigned __int64)(v270 + 1) >> 61 != 0) {
                        goto LABEL_726;
                      }
                      v272 = v266 - v268;
                      if (v272 >> 2 > v271) {
                        v271 = v272 >> 2;
                      }
                      if ((unsigned __int64)v272 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v273 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v273 = v271;
                      }
                      if (v273 != 0) {
                        if (v273 >> 61 != 0) {
                          goto LABEL_723;
                        }
                        v274 = fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v273,
                            16, 0);
                      }
                      else {
                        v274 = 0;
                      }
                      v291 = v274 + 8 * v273;
                      v292 = (char*)v265 - v268;
                      v293 = (__int64)&v269[v274 + -8 * v270];
                      *(_QWORD*)&v269[v274] = v241;
                      v267 = (__int64)&v269[v274 + 8];
                      v50 = memcpy(v293, v268, v292);
                      *(_QWORD*)(v563 + 528) = v293;
                      *(_QWORD*)(v563 + 536) = v267;
                      *(_QWORD*)(v563 + 544) = v291;
                      if (v268 != 0) {
                        v295 = 56;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) != 0) {
                          v295 = 128;
                        }
                        v50 = nn_mem_StandardAllocator_Free_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v295,
                            v294);
                      }
                      LODWORD(v4) = v560;
                      v234 = v605;
                    }
                    else {
                      *v265 = v241;
                      v267 = (__int64)(v265 + 1);
                    }
                    *(_QWORD*)(v563 + 536) = v267;
                    v296 = *(__int64**)(v563 + 560);
                    v297 = *(_QWORD*)(v563 + 568);
                    if ((unsigned __int64)v296 >= v297) {
                      v299 = *(_QWORD*)(v563 + 552);
                      v300 = (char*)v296 - v299;
                      v301 = ((__int64)v296 - v299) >> 3;
                      v302 = v301 + 1;
                      if ((unsigned __int64)(v301 + 1) >> 61 != 0) {
                      LABEL_726:
                        GameRoutine_98f290(v50);
                      }
                      v303 = v297 - v299;
                      if (v303 >> 2 > v302) {
                        v302 = v303 >> 2;
                      }
                      if ((unsigned __int64)v303 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v304 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v304 = v302;
                      }
                      if (v304 != 0) {
                        if (v304 >> 61 != 0) {
                          goto LABEL_723;
                        }
                        v305 = fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v304,
                            16, 0);
                      }
                      else {
                        v305 = 0;
                      }
                      v306 = v305 + 8 * v304;
                      v307 = (char*)v296 - v299;
                      v308 = (__int64)&v300[v305 + -8 * v301];
                      *(_QWORD*)&v300[v305] = v241;
                      v298 = (__int64)&v300[v305 + 8];
                      memcpy(v308, v299, v307);
                      *(_QWORD*)(v563 + 552) = v308;
                      *(_QWORD*)(v563 + 560) = v298;
                      *(_QWORD*)(v563 + 568) = v306;
                      if (v299 != 0) {
                        v310 = 56;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) != 0) {
                          v310 = 128;
                        }
                        nn_mem_StandardAllocator_Free_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v310,
                            v309);
                      }
                      LODWORD(v4) = v560;
                      v234 = v605;
                    }
                    else {
                      *v296 = v241;
                      v298 = (__int64)(v296 + 1);
                    }
                    *(_QWORD*)(v563 + 560) = v298;
                    GameRoutine_a8c0c0(v563);
                    *(_BYTE*)(v563 + 576) = 1;
                    nn_os_UnlockMutex(&GameData_2167580);
                  }
                  v152 = (__int64)v564;
                  v248 = 0;
                  v311 = (__int64*)(*(_QWORD*)(v578 + 144) + 16 * v110);
                  *v311 = v234;
                  v311[1] = v241;
                  v158 = v584;
                LABEL_366:
                  GameRoutine_c17680(v563, v595, v553, *v587 + 4, v559, *v586,
                                     LANES128((*v587)[25]).n128_i64[1]);
                  if ((v248 & 1) == 0 &&
                      (*(int (**)(_QWORD))(**(_QWORD**)(v234 + 24) + 56LL))(
                          *(_QWORD*)(v234 + 24)) >= 2 &&
                      (*(_DWORD*)(v578 + 8) & 0xF) != 3) {
                    v249 = GameRoutine_c15960(v563);
                    *(_DWORD*)(v249 + 212) = v549;
                    v250 = *(_QWORD*)(v249 + 56) - *(_QWORD*)(v249 + 48);
                    if (v250 != 0) {
                      if (v250 == 8) {
                        v251 = 0;
                      }
                      else {
                        v251 = 0;
                        do {
                          v275 = *(_QWORD*)(*(_QWORD*)(v249 + 40) + 56LL) +
                                 224LL * *(_QWORD*)(*(_QWORD*)(v249 + 48) +
                                                    8 * v251);
                          v276 = *(_DWORD*)(v249 + 212);
                          *(_QWORD*)(v249 + 96) = v275;
                          v277 = *(unsigned __int8*)(v275 + 186);
                          *(_DWORD*)(v275 + 176) = v276;
                          if (v277 == 1) {
                            v278 = *(_QWORD*)(v275 + 192);
                            v279 = *(_QWORD*)(v275 + 200);
                            if (v278 != v279) {
                              v280 = *(_DWORD*)(*(_QWORD*)GameData_2132398[0] +
                                                112LL * v276 + 64) -
                                     1;
                              do {
                                if ((*(_BYTE*)(v278 + 22) & 1) == 0) {
                                  *(_DWORD*)v278 = v280;
                                  *(_DWORD*)(v278 + 4) = v280;
                                  *(_DWORD*)(v278 + 8) = 1;
                                }
                                *(_DWORD*)(v278 + 16) = v280;
                                *(_BYTE*)(v278 + 21) = 1;
                                v278 += 24;
                              } while (v278 != v279);
                            }
                          }
                          v282 = *(_QWORD*)(v249 + 40);
                          v281 = *(_QWORD*)(v249 + 48);
                          *(_QWORD*)(v249 + 96) = 0;
                          v283 = *(_QWORD*)(v282 + 56) +
                                 224LL * *(_QWORD*)(v281 + 8 * v251 + 8);
                          v284 = *(_DWORD*)(v249 + 212);
                          *(_QWORD*)(v249 + 96) = v283;
                          LODWORD(v281) = *(unsigned __int8*)(v283 + 186);
                          *(_DWORD*)(v283 + 176) = v284;
                          if ((_DWORD)v281 == 1) {
                            v285 = *(_QWORD*)(v283 + 192);
                            v286 = *(_QWORD*)(v283 + 200);
                            if (v285 != v286) {
                              v287 = *(_DWORD*)(*(_QWORD*)GameData_2132398[0] +
                                                112LL * v284 + 64) -
                                     1;
                              do {
                                if ((*(_BYTE*)(v285 + 22) & 1) == 0) {
                                  *(_DWORD*)v285 = v287;
                                  *(_DWORD*)(v285 + 4) = v287;
                                  *(_DWORD*)(v285 + 8) = 1;
                                }
                                *(_DWORD*)(v285 + 16) = v287;
                                *(_BYTE*)(v285 + 21) = 1;
                                v285 += 24;
                              } while (v285 != v286);
                            }
                          }
                          v251 += 2;
                          *(_QWORD*)(v249 + 96) = 0;
                        } while (v251 != ((v250 >> 3) & 0xFFFFFFFFFFFFFFFELL));
                      }
                      if ((v250 & 8) != 0) {
                        v252 = *(_QWORD*)(*(_QWORD*)(v249 + 40) + 56LL) +
                               224LL *
                                   *(_QWORD*)(*(_QWORD*)(v249 + 48) + 8 * v251);
                        v253 = *(_DWORD*)(v249 + 212);
                        *(_QWORD*)(v249 + 96) = v252;
                        v254 = *(unsigned __int8*)(v252 + 186);
                        *(_DWORD*)(v252 + 176) = v253;
                        if (v254 == 1) {
                          v255 = *(_QWORD*)(v252 + 192);
                          v256 = *(_QWORD*)(v252 + 200);
                          if (v255 != v256) {
                            v257 = *(_DWORD*)(*(_QWORD*)GameData_2132398[0] +
                                              112LL * v253 + 64) -
                                   1;
                            do {
                              if ((*(_BYTE*)(v255 + 22) & 1) == 0) {
                                *(_DWORD*)v255 = v257;
                                *(_DWORD*)(v255 + 4) = v257;
                                *(_DWORD*)(v255 + 8) = 1;
                              }
                              *(_DWORD*)(v255 + 16) = v257;
                              *(_BYTE*)(v255 + 21) = 1;
                              v255 += 24;
                            } while (v255 != v256);
                          }
                        }
                        *(_QWORD*)(v249 + 96) = 0;
                      }
                    }
                    if (*(_BYTE*)(v578 + 104) == 1) {
                      LODModule_a98be0(v249, v234, v152,
                                       (__int64)&v158[-v152] >> 2);
                    }
                    else if (v548 == 2) {
                      LODModule_a98a50(v249, v234);
                    }
                    else {
                      LodModule_a97380(v249, v234);
                    }
                  }
                LABEL_424:
                  if (v152 != 0) {
                    v288 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v288 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v288, v24);
                  }
                  if (v592 != nullptr) {
                    v289 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v289 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v289, v24);
                  }
                  if (v595 != nullptr) {
                    v290 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v290 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v290, v24);
                  }
                LABEL_151:
                  if (++v110 == v558) {
                    goto LABEL_467;
                  }
                  continue;
                }
              }
              v248 = 1;
              goto LABEL_366;
            }
          }
          else {
            v584 = nullptr;
            v564 = nullptr;
            if (v556 != 0) {
              goto LABEL_156;
            }
          }
          break;
        }
        v152 = (__int64)v564;
        v595 = nullptr;
        v592 = nullptr;
        goto LABEL_424;
      }
    LABEL_467:
      v5 = v587;
      v7 = v566;
      if (v551 != 0) {
        v25 = (_DWORD*)*v586;
      LABEL_469:
        v315 = *((unsigned int*)v588 + 9);
        if ((_DWORD)v315 != 0) {
          v316 = 0;
          v583 = v25[8];
          do {
            v318 = (float32x2_t*)(v588[5] + 56 * v316);
            LANES64(v319).n64_u64[0] =
                LANES64_OF(
                    vadd_f32(vmul_f32(COERCE_AS(float32x2_t,
                                                LANES64(v318[6]).n64_u32[0]),
                                      COERCE_AS(float32x2_t,
                                                LANES64(v318[6]).n64_u32[0])),
                             vmul_f32(v318[5], v318[5])))
                    .n64_u64[0];
            if (!(LANES64_OF(vpadd_f32(v319, v319)).n64_f32[0] <
                  0x1.0000000000000p-23f)) {
              LODWORD(v24) = LANES64(v318[2]).n64_u32[0];
              v320 = LANES64(v318[1]).n64_u64[0];
              v585 = v316;
              DWORD1(v24) = LANES64(v318[2]).n64_u32[1];
              DWORD2(v24) = LANES64(v318[3]).n64_u32[0];
              v601 = *(float32x4_t*)&v24;
              v596 = (*v5)[4];
              v321 = strlen(v320);
              v322 = wld_c2faa0_alt1(v320, v321);
              v323 = *v588;
              v606 = v322;
              v324 = strlen(*v588);
              v325 = LANES64(*(v318)).n64_u64[0];
              v326 = v324;
              v327 = strlen(LANES64(*(v318)).n64_u64[0]);
              v329 = *v5;
              v330 = v327;
              v331 = *v5 + 12;
              if (v561 != v331) {
                v332 = LANES128(*(v331)).n128_u8[0];
                if ((LANES128(*(v561)).n128_u8[0] & 1) != 0) {
                  v335 = &LANES128(v329[12]).n128_i8[1];
                  v338 = &LANES128(v329[12]).n128_i8[8];
                  v336 = LANES128(v329[12]).n128_u64[1];
                  v337 = *((__int8**)v338 + 1);
                  if ((v332 & 1) != 0) {
                    v339 = v337;
                  }
                  else {
                    v339 = v335;
                  }
                  if ((v332 & 1) != 0) {
                    v340 = v336;
                  }
                  else {
                    v340 = v332 >> 1;
                  }
                  SpineModel_64dde0_alt1(v561, v339, v340, v328);
                }
                else if ((v332 & 1) != 0) {
                  GameRoutine_64df20_alt1(v561, LANES128(v329[13]).n128_u64[0],
                                          LANES128(v329[12]).n128_u64[1], v328);
                }
                else {
                  v333 = LANES128(*(v331)).n128_u64[0];
                  v334 = LANES128((*v5)[13]).n128_u64[0];
                  LANES128(*(v561)).n128_u64[1] =
                      LANES128((*v5)[12]).n128_u64[1];
                  LANES128(v561[1]).n128_u64[0] = v334;
                  LANES128(*(v561)).n128_u64[0] = v333;
                }
              }
              GameRoutine_1a09ce0(v561, v323, v326);
              GameRoutine_1a09ce0(v561, v325, v330);
              v5 = v587;
              v342 = v588;
              v343 = v568;
              v344 = v587[4];
              v345 = *((unsigned __int8*)v587 + 224);
              v347 = v587[29];
              v346 = v587[30];
              v348 = &LANES128(v344[3]).n128_i64[1];
              if (v568 != &LANES128(v344[3]).n128_i8[8]) {
                v349 = *(unsigned __int8*)v348;
                if ((*v568 & 1) != 0) {
                  v353 = &LANES128(v344[3]).n128_i8[9];
                  v356 = v344 + 4;
                  v354 = LANES128(v344[4]).n128_u64[0];
                  v355 = (char*)LANES128(*(v356)).n128_u64[1];
                  if ((v349 & 1) != 0) {
                    v357 = v355;
                  }
                  else {
                    v357 = v353;
                  }
                  if ((v349 & 1) != 0) {
                    v358 = v354;
                  }
                  else {
                    v358 = v349 >> 1;
                  }
                  SpineModel_64dde0_alt1(v568, v357, v358, v341);
                }
                else if ((v349 & 1) != 0) {
                  v343 = v568;
                  GameRoutine_64df20_alt1(v568, LANES128(v344[4]).n128_u64[1],
                                          LANES128(v344[4]).n128_u64[0], v341);
                }
                else {
                  v350 = *v348;
                  v351 = v348[1];
                  v352 = v348[2];
                  v343 = v568;
                  *((_QWORD*)v568 + 1) = v351;
                  *((_QWORD*)v568 + 2) = v352;
                  *(_QWORD*)v568 = v350;
                }
              }
              if ((v345 & 1) != 0) {
                v359 = (unsigned __int64)v347;
              }
              else {
                v359 = v345 >> 1;
              }
              v360 = vaddq_f32(v601, v596);
              if ((v345 & 1) != 0) {
                v361 = v346;
              }
              else {
                v361 = v565;
              }
              v602 = v360;
              GameRoutine_1a09ce0(v343, v361, v359);
              DWORD3(v24) = LANES128(v602).n128_u32[3];
              if (v583 != 0) {
                v362 = v606;
                v363 = 1;
                v364 = 0;
                v610 = 0x100000002LL;
                while (1) {
                  v365 = *(_DWORD*)((char*)&v610 + v364);
                  if (v365 >= 0xA) {
                    goto LABEL_722;
                  }
                  if ((LANES128((*v5)[11]).n128_u64[1] & (1LL << v365)) != 0 &&
                      ((1LL << v365) & v362) == 0) {
                    if (*((_BYTE*)v5 + 121) == 1) {
                      GameRoutine_c30400(v5, 0);
                    }
                    else {
                      v367 = *v342;
                      v368 = strlen(*v342);
                      v369 =
                          (float32x4_t*)GameRoutine_c30530(v5, v367, v368, 0);
                      v370 = v369;
                      v371 = vsubq_f32(v369[19], v602);
                      v372 = COERCE_LONG_DOUBLE(vmulq_f32(v371, v371));
                      *(float32x2_t*)&v372 = vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(*(int8x16_t*)&v372,
                                                   *(int8x16_t*)&v372, 8u))
                                  .n128_u64[0]),
                          *(float32x2_t*)&v372);
                      *(float32x2_t*)&v372 =
                          vpadd_f32(*(float32x2_t*)&v372, *(float32x2_t*)&v372);
                      if (*(float*)&v372 != 0.0) {
                        LANES128(v369[19]).n128_u64[0] =
                            LANES128(v602).n128_u64[0];
                        v372 = *(long double*)&v369[19];
                        LANES128(v369[18]).n128_u32[2] |= 1u;
                        *((_QWORD*)&v372 + 1) = LANES128(v602).n128_u32[2];
                        *(long double*)&v369[19] = v372;
                      }
                      v373 = LANES64(v318[3]).n64_f32[1] * 0x1.1df46a0000000p-6;
                      v374 = LANES64(v318[4]).n64_f32[0] * 0x1.1df46a0000000p-6;
                      v375 = LANES64(v318[4]).n64_f32[1] * 0x1.1df46a0000000p-6;
                      LANES128(v376).n128_u32[3] = 0;
                      LANES128(v376).n128_f32[0] = v373;
                      LANES128(v376).n128_f32[1] = v374;
                      LANES128(v376).n128_f32[2] = v375;
                      v377 = vsubq_f32(v369[20], v376);
                      v379 = COERCE_LONG_DOUBLE(vmulq_f32(v377, v377));
                      v378 = COERCE_LONG_DOUBLE(
                          vextq_s8(*(int8x16_t*)&v379, *(int8x16_t*)&v379, 8u));
                      *(float32x2_t*)&v379 =
                          vadd_f32(*(float32x2_t*)&v378, *(float32x2_t*)&v379);
                      *(float32x2_t*)&v379 =
                          vpadd_f32(*(float32x2_t*)&v379, *(float32x2_t*)&v379);
                      if (*(float*)&v379 != 0.0) {
                        LANES128(v369[20]).n128_f32[0] = v373;
                        LANES128(v369[20]).n128_f32[1] = v374;
                        v593 = v373;
                        v597 = v374;
                        v380 = v369[20];
                        LANES128(v380).n128_u64[1] = LODWORD(v375);
                        v381 = v375 * 0.5;
                        v369[20] = v380;
                        v382 = cos_alt1(v369, v381);
                        v383 = sin(v381);
                        v385 = cos_alt1(v384, v593 * 0.5);
                        v386 = sin(v593 * 0.5);
                        v388 = cos_alt1(v387, v597 * 0.5);
                        *(double*)&v372 = sin(v597 * 0.5);
                        *(double*)&v378 = v382 * v386 * v388 -
                                          *(double*)&v372 * (v383 * v385);
                        *(double*)&v379 =
                            v383 * v386 * *(double*)&v372 + v382 * v385 * v388;
                        v389 =
                            v383 * v386 * v388 + v382 * v385 * *(double*)&v372;
                        *(double*)&v372 = v383 * v385 * v388 -
                                          *(double*)&v372 * (v382 * v386);
                        *(float*)&v378 = *(double*)&v378;
                        v390 = v389;
                        *(float*)&v379 = *(double*)&v379;
                        *(float*)&v372 = *(double*)&v372;
                        v391 = COERCE_FLOAT(*(_OWORD*)&v370[21]) ==
                                   *(float*)&v378 &&
                               COERCE_FLOAT(HIDWORD(
                                   LANES128(v370[21]).n128_u64[0])) == v390;
                        v392 = v391 &&
                               COERCE_FLOAT(LANES128(v370[21]).n128_u64[1]) ==
                                   *(float*)&v372;
                        if (!v392 ||
                            COERCE_FLOAT(DWORD3(*(_OWORD*)&v370[21])) !=
                                *(float*)&v379) {
                          v394 = LANES128(v370[18]).n128_u32[2];
                          LANES128(v370[21]).n128_u32[0] = LODWORD(v378);
                          LANES128(v370[21]).n128_f32[1] = v390;
                          LANES128(v370[21]).n128_u32[2] = LODWORD(v372);
                          LANES128(v370[21]).n128_u32[3] = LODWORD(v379);
                          LANES128(v370[18]).n128_u32[2] = v394 | 1;
                        }
                      }
                      LODWORD(v378) = LANES64(v318[5]).n64_u32[0];
                      LODWORD(v379) = LANES64(v318[5]).n64_u32[1];
                      LODWORD(v372) = LANES64(v318[6]).n64_u32[0];
                      LANES128(v395).n128_u64[0] = LANES64(v318[5]).n64_u64[0];
                      LANES128(v395).n128_u64[1] = LODWORD(v372);
                      v396 = vsubq_f32(v370[22], v395);
                      v397 = COERCE_LONG_DOUBLE(vmulq_f32(v396, v396));
                      *(float32x2_t*)&v397 = vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(*(int8x16_t*)&v397,
                                                   *(int8x16_t*)&v397, 8u))
                                  .n128_u64[0]),
                          *(float32x2_t*)&v397);
                      *(float32x2_t*)&v397 =
                          vpadd_f32(*(float32x2_t*)&v397, *(float32x2_t*)&v397);
                      if (*(float*)&v397 != 0.0) {
                        LANES128(v370[22]).n128_u32[0] = LODWORD(v378);
                        LANES128(v370[22]).n128_u32[1] = LODWORD(v379);
                        v379 = *(long double*)&v370[22];
                        LANES128(v370[18]).n128_u32[2] |= 1u;
                        *((_QWORD*)&v379 + 1) = LODWORD(v372);
                        *(long double*)&v370[22] = v379;
                      }
                      LANES128(v370[17]).n128_u32[3] = v365;
                      v398 = *((_DWORD*)v342 + 8);
                      v399 = v5[3];
                      if (v398 < 0 ||
                          v398 >= (int)(-1431655765 *
                                        ((LANES128(*(v399)).n128_u64[1] -
                                          LANES128(*(v399)).n128_u64[0]) >>
                                         3))) {
                        v400 = (__int64)&LANES128(v399[1]).n128_i64[1];
                      }
                      else {
                        v400 = LANES128(*(v399)).n128_u64[0] +
                               24LL * (unsigned int)v398;
                      }
                      v608 = nullptr;
                      v609 = nullptr;
                      v607 = nullptr;
                      v401 = *(__int64**)v400;
                      v402 = *(__int64**)(v400 + 8);
                      v403 = (__int64)v402 - *(_QWORD*)v400;
                      if (v402 != *(__int64**)v400) {
                        if (0xAAAAAAAAAAAAAAABLL * (v403 >> 3) >=
                            0xAAAAAAAAAAAAAABLL) {
                          GameRoutine_64aa00(v372, v379, v378, v397);
                        }
                        v404 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, v403, 16,
                            0);
                        v607 = v404;
                        v608 = v404;
                        v609 = (char*)v404 + v403;
                        do {
                          if ((*(_BYTE*)v401 & 1) != 0) {
                            fw_text_String_CopyTerminated_alt1(v404, v401[2],
                                                               v401[1]);
                          }
                          else {
                            v405 = *v401;
                            v406 = v401[2];
                            v404[1] = v401[1];
                            v404[2] = v406;
                            *v404 = v405;
                          }
                          v401 += 3;
                          v404 += 3;
                        } while (v401 != v402);
                        v608 = v404;
                      }
                      v407 = *v586;
                      nn_os_LockMutex(GameData_212df28);
                      v408 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 280, 16, 0);
                      v342 = v588;
                      v409 = *((unsigned __int8*)v5 + 200);
                      v410 = v408;
                      v411 = (v409 & 1) == 0;
                      v412 = (float32x4_t*)(v409 >> 1);
                      if (v411) {
                        v413 = v577;
                      }
                      else {
                        v413 = v5[27];
                      }
                      if (v411) {
                        v414 = v412;
                      }
                      else {
                        v414 = v5[26];
                      }
                      v50 = MapObjectModule_a7c8e0(v408, v370, v407, v413, v414,
                                                   *((unsigned int*)v588 + 6),
                                                   &v607);
                      if ((atomic_load_explicit(
                               (atomic_uchar* volatile)&GameData_21ec980,
                               memory_order_acquire) &
                           1) == 0) {
                        v50 = __cxa_guard_acquire(&GameData_21ec980);
                        if ((_DWORD)v50 != 0) {
                          GameData_21ec978 = (unsigned int)wld_Crc32(
                              0, (unsigned __int8*)"MapObjectModule", 15);
                          v50 = __cxa_guard_release(&GameData_21ec980);
                        }
                      }
                      v416 = LANES128(v370[31]).n128_u64[1];
                      v415 = LANES128(v370[32]).n128_u64[0];
                      v612 = v410;
                      v417 = v415;
                      v611 = GameData_21ec978;
                      while (v417 != v416) {
                        v418 = *(_DWORD*)(v417 - 16);
                        v417 -= 16LL;
                        if (v418 == GameData_21ec978) {
                          if ((*(_BYTE*)(v410 + 16) & 1) != 0) {
                            goto LABEL_570;
                          }
                          goto LABEL_564;
                        }
                      }
                      if (v416 == v415 &&
                          LANES128(v370[32]).n128_u64[1] - v416 <= 0x6F) {
                        v419 = fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
                        LANES128(v370[31]).n128_u64[1] = v419;
                        LANES128(v370[32]).n128_u64[0] = v419;
                        LANES128(v370[32]).n128_u64[1] = v419 + 112;
                        if (v415 != 0) {
                          v421 = 56;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) != 0) {
                            v421 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v421,
                              v420);
                        }
                      }
                      v50 = GameRoutine_98f140(&LANES128(v370[31]).n128_i8[8],
                                               &v611);
                      if ((*(_BYTE*)(v410 + 16) & 1) == 0) {
                      LABEL_564:
                        v422 = *(_BYTE*)(v410 + 17);
                        *(_BYTE*)(v410 + 16) = 1;
                        *(_BYTE*)(v410 + 17) = v422 & 0xFD;
                        *(_BYTE*)(v410 + 18) &= ~2u;
                        *(_BYTE*)(v410 + 19) &= ~2u;
                        *(_BYTE*)(v410 + 20) &= ~2u;
                        v423 = *(_BYTE**)(v410 + 8);
                        v423[632] = 0;
                        v423[664] = 0;
                        v423[696] = 0;
                        v423[728] = 0;
                        v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v410 + 64LL))(
                            v410);
                        v424 = *(_BYTE**)(v410 + 8);
                        v425 = v424[300] == 3 && v424[301] == 3;
                        if (v425 || v424[302] == 1) {
                          v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v410 +
                                                          72LL))(v410);
                        }
                      }
                    LABEL_570:
                      v426 = (__int64*)LANES128(v370[33]).n128_u64[1];
                      v427 = LANES128(v370[34]).n128_u64[0];
                      if ((unsigned __int64)v426 >= v427) {
                        v429 = LANES128(v370[33]).n128_u64[0];
                        v430 = (char*)v426 - v429;
                        v431 = (__int64)((__int64)v426 - v429) >> 3;
                        v432 = v431 + 1;
                        if ((unsigned __int64)(v431 + 1) >> 61 != 0) {
                          goto LABEL_726;
                        }
                        v433 = v427 - v429;
                        if (v433 >> 2 > v432) {
                          v432 = v433 >> 2;
                        }
                        if ((unsigned __int64)v433 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v434 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v434 = v432;
                        }
                        if (v434 != 0) {
                          if (v434 >> 61 != 0) {
                            goto LABEL_723;
                          }
                          v435 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v434,
                              16, 0);
                        }
                        else {
                          v435 = 0;
                        }
                        v436 = v435 + 8 * v434;
                        v437 = (char*)v426 - v429;
                        v438 = (__int64)&v430[v435 + -8 * v431];
                        *(_QWORD*)&v430[v435] = v410;
                        v428 = (__int64)&v430[v435 + 8];
                        v50 = memcpy(v438, v429, v437);
                        LANES128(v370[33]).n128_u64[0] = v438;
                        LANES128(v370[33]).n128_u64[1] = v428;
                        LANES128(v370[34]).n128_u64[0] = v436;
                        if (v429 != 0) {
                          v440 = 56;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) != 0) {
                            v440 = 128;
                          }
                          v50 = nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v440,
                              v439);
                        }
                        v5 = v587;
                        v342 = v588;
                      }
                      else {
                        *v426 = v410;
                        v428 = (__int64)(v426 + 1);
                      }
                      LANES128(v370[33]).n128_u64[1] = v428;
                      v441 = (__int64*)LANES128(v370[35]).n128_u64[0];
                      v442 = LANES128(v370[35]).n128_u64[1];
                      if ((unsigned __int64)v441 >= v442) {
                        v444 = LANES128(v370[34]).n128_u64[1];
                        v445 = (char*)v441 - v444;
                        v446 = (__int64)((__int64)v441 - v444) >> 3;
                        v447 = v446 + 1;
                        if ((unsigned __int64)(v446 + 1) >> 61 != 0) {
                          goto LABEL_726;
                        }
                        v448 = v442 - v444;
                        if (v448 >> 2 > v447) {
                          v447 = v448 >> 2;
                        }
                        if ((unsigned __int64)v448 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v449 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v449 = v447;
                        }
                        if (v449 != 0) {
                          if (v449 >> 61 != 0) {
                            goto LABEL_723;
                          }
                          v450 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v449,
                              16, 0);
                        }
                        else {
                          v450 = 0;
                        }
                        v451 = v450 + 8 * v449;
                        v452 = (char*)v441 - v444;
                        v453 = (__int64)&v445[v450 + -8 * v446];
                        *(_QWORD*)&v445[v450] = v410;
                        v443 = (__int64)&v445[v450 + 8];
                        memcpy(v453, v444, v452);
                        LANES128(v370[34]).n128_u64[1] = v453;
                        LANES128(v370[35]).n128_u64[0] = v443;
                        LANES128(v370[35]).n128_u64[1] = v451;
                        if (v444 != 0) {
                          v455 = 56;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) != 0) {
                            v455 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v455,
                              v454);
                        }
                        v5 = v587;
                        v342 = v588;
                      }
                      else {
                        *v441 = v410;
                        v443 = (__int64)(v441 + 1);
                      }
                      LANES128(v370[35]).n128_u64[0] = v443;
                      GameRoutine_a8c0c0(v370);
                      LANES128(v370[36]).n128_u8[0] = 1;
                      nn_os_UnlockMutex(&GameData_2167580);
                      if (v608 != v607) {
                        GameRoutine_c24eb0(v5[4], v370);
                      }
                      GameRoutine_c30780(v5, v370, v342);
                      v362 = v606;
                      v456 = v607;
                      if (v607 != nullptr) {
                        v457 = v608;
                        if (v607 == v608) {
                          goto LABEL_616;
                        }
                        v458 = v608;
                        do {
                          v459 = *((_BYTE*)v458 - 24);
                          v458 -= 3;
                          if ((v459 & 1) != 0 && *(v457 - 1) != 0) {
                            v460 = 56;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) != 0) {
                              v460 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v460,
                                v24);
                          }
                          v457 = v458;
                        } while (v458 != v456);
                        v608 = v456;
                        if (v607 != nullptr) {
                        LABEL_616:
                          v461 = 56;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) != 0) {
                            v461 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v461,
                              v24);
                        }
                      }
                      v363 = 0;
                    }
                  }
                  v364 += 4;
                  if (v364 == 8) {
                    goto LABEL_710;
                  }
                }
              }
              v463 = v586[1];
              GameRoutine_ad7390_alt1(v463);
              v464 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v463 + 8) + 592LL));
              v465 = *(unsigned __int16*)(v464 + 220);
              if (*(_WORD*)(v464 + 220) != 0) {
                v363 = 1;
                v466 = 0;
                v591 = *(unsigned __int16*)(v464 + 220);
                while (1) {
                  v467 = GameRoutine_c156c0(v463, (unsigned int)v466);
                  if (v467 >= 0xA) {
                    break;
                  }
                  v468 = v467;
                  if ((LANES128((*v5)[11]).n128_u64[1] & (1LL << v467)) != 0 &&
                      ((1LL << v467) & v606) == 0) {
                    if (*((_BYTE*)v5 + 121) == 1) {
                      GameRoutine_c30400(v5, 0);
                    }
                    else {
                      v470 = *v588;
                      v471 = strlen(*v588);
                      v472 = GameRoutine_c30530(v5, v470, v471, 0);
                      v473 = *(float32x4_t*)(v472 + 304);
                      v474 = v472;
                      *(_DWORD*)(v472 + 284) = v468;
                      v475 = vsubq_f32(v473, v602);
                      v476 = COERCE_LONG_DOUBLE(vmulq_f32(v475, v475));
                      *(float32x2_t*)&v476 = vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(*(int8x16_t*)&v476,
                                                   *(int8x16_t*)&v476, 8u))
                                  .n128_u64[0]),
                          *(float32x2_t*)&v476);
                      *(float32x2_t*)&v476 =
                          vpadd_f32(*(float32x2_t*)&v476, *(float32x2_t*)&v476);
                      if (*(float*)&v476 != 0.0) {
                        *(_QWORD*)(v472 + 304) = LANES128(v602).n128_u64[0];
                        v476 = *(long double*)(v472 + 304);
                        *(_DWORD*)(v472 + 296) |= 1u;
                        *((_QWORD*)&v476 + 1) = LANES128(v602).n128_u32[2];
                        *(long double*)(v472 + 304) = v476;
                      }
                      v477 = LANES64(v318[3]).n64_f32[1] * 0x1.1df46a0000000p-6;
                      v478 = LANES64(v318[4]).n64_f32[0] * 0x1.1df46a0000000p-6;
                      v479 = LANES64(v318[4]).n64_f32[1] * 0x1.1df46a0000000p-6;
                      LANES128(v480).n128_u32[3] = 0;
                      LANES128(v480).n128_f32[0] = v477;
                      LANES128(v480).n128_f32[1] = v478;
                      LANES128(v480).n128_f32[2] = v479;
                      v481 = vsubq_f32(*(float32x4_t*)(v472 + 320), v480);
                      v483 = COERCE_LONG_DOUBLE(vmulq_f32(v481, v481));
                      v482 = COERCE_LONG_DOUBLE(
                          vextq_s8(*(int8x16_t*)&v483, *(int8x16_t*)&v483, 8u));
                      *(float32x2_t*)&v483 =
                          vadd_f32(*(float32x2_t*)&v482, *(float32x2_t*)&v483);
                      *(float32x2_t*)&v483 =
                          vpadd_f32(*(float32x2_t*)&v483, *(float32x2_t*)&v483);
                      if (*(float*)&v483 != 0.0) {
                        *(float*)(v472 + 320) = v477;
                        *(float*)(v472 + 324) = v478;
                        v594 = v477;
                        v598 = v478;
                        v484 = *(_OWORD*)(v472 + 320);
                        *((_QWORD*)&v484 + 1) = LODWORD(v479);
                        v485 = v479 * 0.5;
                        *(_OWORD*)(v472 + 320) = v484;
                        v486 = cos_alt1(v472, v485);
                        v487 = sin(v485);
                        v489 = cos_alt1(v488, v594 * 0.5);
                        v490 = sin(v594 * 0.5);
                        v492 = cos_alt1(v491, v598 * 0.5);
                        *(double*)&v476 = sin(v598 * 0.5);
                        *(double*)&v482 = v486 * v490 * v492 -
                                          *(double*)&v476 * (v487 * v489);
                        *(double*)&v483 =
                            v487 * v490 * *(double*)&v476 + v486 * v489 * v492;
                        v493 =
                            v487 * v490 * v492 + v486 * v489 * *(double*)&v476;
                        *(double*)&v476 = v487 * v489 * v492 -
                                          *(double*)&v476 * (v486 * v490);
                        *(float*)&v482 = *(double*)&v482;
                        v494 = v493;
                        *(float*)&v483 = *(double*)&v483;
                        *(float*)&v476 = *(double*)&v476;
                        v495 = COERCE_FLOAT(*(_OWORD*)(v474 + 336)) ==
                                   *(float*)&v482 &&
                               COERCE_FLOAT(HIDWORD(*(_QWORD*)(v474 + 336))) ==
                                   v494;
                        v496 = v495 && COERCE_FLOAT(*(_QWORD*)(v474 + 344)) ==
                                           *(float*)&v476;
                        if (!v496 ||
                            COERCE_FLOAT(DWORD3(*(_OWORD*)(v474 + 336))) !=
                                *(float*)&v483) {
                          v498 = *(_DWORD*)(v474 + 296);
                          *(_DWORD*)(v474 + 336) = LODWORD(v482);
                          *(float*)(v474 + 340) = v494;
                          *(_DWORD*)(v474 + 344) = LODWORD(v476);
                          *(_DWORD*)(v474 + 348) = LODWORD(v483);
                          *(_DWORD*)(v474 + 296) = v498 | 1;
                        }
                      }
                      LODWORD(v482) = LANES64(v318[5]).n64_u32[0];
                      LODWORD(v483) = LANES64(v318[5]).n64_u32[1];
                      LODWORD(v476) = LANES64(v318[6]).n64_u32[0];
                      LANES128(v499).n128_u64[0] = LANES64(v318[5]).n64_u64[0];
                      LANES128(v499).n128_u64[1] = LODWORD(v476);
                      v500 = vsubq_f32(*(float32x4_t*)(v474 + 352), v499);
                      v501 = COERCE_LONG_DOUBLE(vmulq_f32(v500, v500));
                      *(float32x2_t*)&v501 = vadd_f32(
                          COERCE_AS(
                              float32x2_t,
                              LANES128_OF(vextq_s8(*(int8x16_t*)&v501,
                                                   *(int8x16_t*)&v501, 8u))
                                  .n128_u64[0]),
                          *(float32x2_t*)&v501);
                      *(float32x2_t*)&v501 =
                          vpadd_f32(*(float32x2_t*)&v501, *(float32x2_t*)&v501);
                      if (*(float*)&v501 != 0.0) {
                        *(_DWORD*)(v474 + 352) = LODWORD(v482);
                        *(_DWORD*)(v474 + 356) = LODWORD(v483);
                        v483 = *(long double*)(v474 + 352);
                        *(_DWORD*)(v474 + 296) |= 1u;
                        *((_QWORD*)&v483 + 1) = LODWORD(v476);
                        *(long double*)(v474 + 352) = v483;
                      }
                      GameRoutine_c15840(v474, v586 + 1, (unsigned int)v466, 0,
                                         v476, v483, v482, v501);
                      if ((atomic_load_explicit(
                               (atomic_uchar* volatile)&GameData_21f4d48,
                               memory_order_acquire) &
                           1) == 0 &&
                          (unsigned int)__cxa_guard_acquire(
                              &GameData_21f4d48) != 0) {
                        GameData_21f4d44 = (unsigned int)wld_Crc32(
                            0, (unsigned __int8*)"ModelModule", 11);
                        __cxa_guard_release(&GameData_21f4d48);
                      }
                      v502 = *(_QWORD*)(v474 + 512);
                      v503 = v502;
                      while (v503 != *(_QWORD*)(v474 + 504)) {
                        v504 = *(_DWORD*)(v503 - 16);
                        v503 -= 16;
                        v502 -= 16;
                        if (v504 == GameData_21f4d44) {
                          if (*(_QWORD*)(v474 + 512) != v502) {
                            v505 = *(_QWORD*)(v502 + 8);
                            goto LABEL_656;
                          }
                          break;
                        }
                      }
                      v505 = 0;
                    LABEL_656:
                      if ((*(int (**)(_QWORD))(**(_QWORD**)(v505 + 24) + 56LL))(
                              *(_QWORD*)(v505 + 24)) >= 2) {
                        v506 = *(_DWORD*)(*v586 + 24);
                        v507 = v506 == 2 ? 10 : 8;
                        v508 = v506 == 1 ? 9 : v507;
                        v509 = v586[3] + 32 * v466;
                        v510 = GameRoutine_c15960(v474);
                        v511 = v510;
                        if (*(_QWORD*)(v509 + 24) < 2u) {
                          LodModule_a97380(v510, v505);
                        }
                        else {
                          LodModule_a988a0(v510, v505, v509);
                        }
                        v513 = *(_QWORD*)(v511 + 48);
                        v512 = *(_QWORD*)(v511 + 56);
                        *(_DWORD*)(v511 + 212) = v508;
                        v514 = v512 - v513;
                        if (v514 != 0) {
                          if (v514 == 8) {
                            v515 = 0;
                          }
                          else {
                            v515 = 0;
                            do {
                              v521 = *(_DWORD*)(v511 + 212);
                              v522 = *(_QWORD*)(*(_QWORD*)(v511 + 40) + 56LL) +
                                     224LL * *(_QWORD*)(*(_QWORD*)(v511 + 48) +
                                                        8 * v515);
                              *(_QWORD*)(v511 + 96) = v522;
                              *(_DWORD*)(v522 + 176) = v521;
                              if (*(_BYTE*)(v522 + 186) == 1) {
                                v523 = *(_QWORD*)(v522 + 192);
                                v524 = *(_QWORD*)(v522 + 200);
                                if (v523 != v524) {
                                  v525 =
                                      *(_DWORD*)(*(_QWORD*)GameData_2132398[0] +
                                                 112LL * v521 + 64) -
                                      1;
                                  do {
                                    if ((*(_BYTE*)(v523 + 22) & 1) == 0) {
                                      *(_DWORD*)v523 = v525;
                                      *(_DWORD*)(v523 + 4) = v525;
                                      *(_DWORD*)(v523 + 8) = 1;
                                    }
                                    *(_DWORD*)(v523 + 16) = v525;
                                    *(_BYTE*)(v523 + 21) = 1;
                                    v523 += 24;
                                  } while (v523 != v524);
                                }
                              }
                              v527 = *(_QWORD*)(v511 + 40);
                              v526 = *(_QWORD*)(v511 + 48);
                              *(_QWORD*)(v511 + 96) = 0;
                              v528 = *(_DWORD*)(v511 + 212);
                              v529 = *(_QWORD*)(v527 + 56) +
                                     224LL * *(_QWORD*)(v526 + 8 * v515 + 8);
                              *(_QWORD*)(v511 + 96) = v529;
                              *(_DWORD*)(v529 + 176) = v528;
                              if (*(_BYTE*)(v529 + 186) == 1) {
                                v530 = *(_QWORD*)(v529 + 192);
                                v531 = *(_QWORD*)(v529 + 200);
                                if (v530 != v531) {
                                  v532 =
                                      *(_DWORD*)(*(_QWORD*)GameData_2132398[0] +
                                                 112LL * v528 + 64) -
                                      1;
                                  do {
                                    if ((*(_BYTE*)(v530 + 22) & 1) == 0) {
                                      *(_DWORD*)v530 = v532;
                                      *(_DWORD*)(v530 + 4) = v532;
                                      *(_DWORD*)(v530 + 8) = 1;
                                    }
                                    *(_DWORD*)(v530 + 16) = v532;
                                    *(_BYTE*)(v530 + 21) = 1;
                                    v530 += 24;
                                  } while (v530 != v531);
                                }
                              }
                              v515 += 2;
                              *(_QWORD*)(v511 + 96) = 0;
                            } while (v515 !=
                                     ((v514 >> 3) & 0xFFFFFFFFFFFFFFFELL));
                          }
                          if ((v514 & 8) != 0) {
                            v516 = *(_DWORD*)(v511 + 212);
                            v517 = *(_QWORD*)(*(_QWORD*)(v511 + 40) + 56LL) +
                                   224LL * *(_QWORD*)(*(_QWORD*)(v511 + 48) +
                                                      8 * v515);
                            *(_QWORD*)(v511 + 96) = v517;
                            *(_DWORD*)(v517 + 176) = v516;
                            if (*(_BYTE*)(v517 + 186) == 1) {
                              v518 = *(_QWORD*)(v517 + 192);
                              v519 = *(_QWORD*)(v517 + 200);
                              if (v518 != v519) {
                                v520 =
                                    *(_DWORD*)(*(_QWORD*)GameData_2132398[0] +
                                               112LL * v516 + 64) -
                                    1;
                                do {
                                  if ((*(_BYTE*)(v518 + 22) & 1) == 0) {
                                    *(_DWORD*)v518 = v520;
                                    *(_DWORD*)(v518 + 4) = v520;
                                    *(_DWORD*)(v518 + 8) = 1;
                                  }
                                  *(_DWORD*)(v518 + 16) = v520;
                                  *(_BYTE*)(v518 + 21) = 1;
                                  v518 += 24;
                                } while (v518 != v519);
                              }
                            }
                            *(_QWORD*)(v511 + 96) = 0;
                          }
                        }
                      }
                      v533 = LANES64(v318[5]).n64_f32[1];
                      if (!(vabds_f32(LANES64(v318[5]).n64_f32[0], v533) <
                            0x1.0000000000000p-23f) ||
                          !(vabds_f32(v533, LANES64(v318[6]).n64_f32[0]) <
                            0x1.0000000000000p-23f)) {
                        v534 = *(_QWORD*)(v505 + 24);
                        v535 = *(_DWORD**)(v534 + 360);
                        for (j = *(_DWORD**)(v534 + 368); v535 != j; ++v535) {
                          *v535 |= 0x40u;
                        }
                      }
                      v5 = v587;
                      GameRoutine_c15dc0(v474, v463, *v586,
                                         LANES128((*v587)[25]).n128_i64[1]);
                      v537 = *((unsigned __int8*)v587 + 200);
                      v538 = (v537 & 1) == 0;
                      v539 = (float32x4_t*)(v537 >> 1);
                      if (v538) {
                        v540 = v577;
                      }
                      else {
                        v540 = v587[27];
                      }
                      if (v538) {
                        v541 = v539;
                      }
                      else {
                        v541 = v587[26];
                      }
                      GameRoutine_c309e0(v587, v474, v586, v588, v540, v541, 1);
                      if ((v570 & 1) != 0) {
                        v465 = v591;
                        v363 = 0;
                      }
                      else {
                        v465 = v591;
                        if ((*(_DWORD*)(v569 + 8) & 0xF) == 3) {
                          v542 = *(_QWORD*)(*(_QWORD*)(v569 + 144) + 16 * v466 +
                                            8);
                          if (v542 != 0) {
                            InstancedObjectCtrlModule_193b8a0(v542, v474);
                          }
                        }
                        v363 = 0;
                      }
                    }
                  }
                  if (++v466 == v465) {
                    goto LABEL_710;
                  }
                }
              LABEL_722:
                String_60a250_alt1("bitset test argument out of range");
              }
              v363 = 1;
            LABEL_710:
              LODWORD(v4) = v560;
              if ((*((_BYTE*)v5 + 121) & 1) == 0 && (v363 & 1) != 0) {
                v544 = *v5;
                v545 = (_QWORD*)LANES128((*v5)[14]).n128_u64[0];
                if ((unsigned __int64)v545 >= LANES128((*v5)[14]).n128_u64[1]) {
                  v317 = Manager_66cc20(&LANES128(v544[13]).n128_i8[8], v568);
                }
                else if ((*v568 & 1) != 0) {
                  fw_text_String_CopyTerminated_alt1(
                      LANES128((*v5)[14]).n128_u64[0], v5[27], v5[26]);
                  v317 = (__int64)(v545 + 3);
                }
                else {
                  v546 = *(_QWORD*)v568;
                  v547 = *((_QWORD*)v568 + 2);
                  v317 = (__int64)(v545 + 3);
                  v545[1] = *((_QWORD*)v568 + 1);
                  v545[2] = v547;
                  *v545 = v546;
                }
                LANES128(v544[14]).n128_u64[0] = v317;
              }
              v7 = v566;
              v316 = v585;
              v315 = *((unsigned int*)v588 + 9);
            }
          } while (++v316 < v315);
        }
      }
    LABEL_4:
      v4 = (unsigned int)(v4 + 1);
      if (v7 <= v4) {
        result = 1;
        LODWORD(v4) = 0;
        goto LABEL_721;
      }
    }
    v569 = 0;
  LABEL_25:
    if (v13) {
      goto LABEL_4;
    }
  LABEL_28:
    v20 = 0;
    v570 = 1;
    goto LABEL_29;
  }
  LODWORD(v4) = 0;
LABEL_721:
  *((_DWORD*)v5 + 42) = v4;
  return result;
}

__int64 wld_c2faa0(__int64 a1, unsigned __int64 a2)
{
  __int64 v3;
  _QWORD* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  _QWORD* v17;
  _BYTE* v18;
  int i;
  char* v20;
  char* v21;
  char v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  unsigned __int64 v29;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  long double v40;
  __int64 v41;
  unsigned __int8* v42;
  unsigned __int8* v43;
  __int64 v44;
  long double v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  _QWORD v63[2];
  __int64 v64;
  __int64 v65;
  _QWORD v66[7];
  __int64 v67;
  unsigned __int64 v68;
  char* v69;
  __int64 v70;
  int v71;
  _QWORD v72[19];
  char v73;
  _BYTE v74[7];
  __int64 v75;
  unsigned __int64 v76;
  char* v77;

  if (a2 == 0) {
    return 0;
  }
  if (a2 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_124:
    String_60a1d0_alt1(a1);
  }
  v3 = a1;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (a2 >= 0x17) {
    if ((a2 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (a2 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0);
    v76 = a2;
    v77 = v5;
    v75 = v7 | 1;
  }
  else {
    LOBYTE(v75) = 2 * a2;
    v5 = (char*)&v75 + 1;
  }
  memmove(v5, v3, a2);
  v5[a2] = 0;
  v8 = GameData_212ead8;
  v72[6] = 0;
  v9 = GameData_212ead8 + 104;
  v10 = GameData_212ead8 + 64;
  v72[0] = GameData_212ead8 + 104;
  v11 = GameData_212eae0;
  v64 = GameData_212ead8 + 64;
  v12 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212eae0 + 8);
  v63[0] = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212eae0);
  *(_QWORD*)((char*)v63 + *(_QWORD*)(v63[0] - 24LL)) = v12;
  v63[1] = 0;
  v13 = (char*)v63 + *(_QWORD*)(v63[0] - 24LL);
  std___1_ios_base_init(v13, &v65);
  *((_QWORD*)v13 + 17) = 0;
  *((_DWORD*)v13 + 36) = -1;
  v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11 + 8);
  v64 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11);
  *(__int64*)((char*)&v64 + *(_QWORD*)(v64 - 24)) = v14;
  v15 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11);
  v63[0] = *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11);
  *(_QWORD*)((char*)v63 + *(_QWORD*)(v63[0] - 24LL)) = v15;
  v64 = v10;
  v63[0] = v8 + 24;
  v72[0] = v9;
  v65 = GameData_212eaf0 + 16;
  std___1_locale_locale_1a0a220(v66);
  memset(&v66[1], 0, 48);
  v70 = 0;
  v65 = GameData_212eae8 + 16;
  v67 = v75;
  v68 = v76;
  v69 = v77;
  v71 = 24;
  GameRoutine_c30250(&v65);
  v6 = 0;
  v61 = 0;
  v62 = nullptr;
  v60 = 0;
  while (2) {
    GameRoutine_1a0ab90(&v74[3], v63, 1);
    if (v74[3] != 1) {
      goto LABEL_103;
    }
    v58 = v6;
    if ((v60 & 1) != 0) {
      *v62 = 0;
      v61 = 0;
    }
    else {
      LOWORD(v60) = 0;
    }
    v17 = *(_QWORD**)((char*)&v66[1] + *(_QWORD*)(v63[0] - 24LL));
    v18 = (_BYTE*)v17[3];
    if (v18 != (_BYTE*)v17[4]) {
      LOBYTE(i) = *v18;
      goto LABEL_19;
    }
  LABEL_17:
    for (i = (*(__int64 (**)(_QWORD*))(*v17 + 72LL))(v17);; i = *v42) {
      if (i == -1) {
        goto LABEL_102;
      }
    LABEL_19:
      v21 = (char*)v17[3];
      v20 = (char*)v17[4];
      if (v21 == v20) {
        v20 = v74;
        v21 = &v73;
        v73 = i;
      }
      a1 = memchr(v21, 59, v20 - v21);
      v22 = v60;
      v23 = v61;
      if (a1 != 0) {
        v20 = (char*)a1;
      }
      v24 = v20 - v21;
      if ((v60 & 1) != 0) {
        v25 = v61;
      }
      else {
        v25 = (unsigned __int64)(unsigned __int8)v60 >> 1;
      }
      if (-10LL - v25 <= v24) {
        GameRoutine_1a09ce0(&v60, v21, -10LL - v25);
        if (v21 == &v73) {
          if (v25 == -10) {
            goto LABEL_102;
          }
          v49 = v17[3];
          if (v49 == v17[4]) {
            goto LABEL_101;
          }
          v48 = v49 + 1;
        }
        else {
          v48 = v17[3] + -10LL - v25;
        }
        v17[3] = v48;
        goto LABEL_102;
      }
      v26 = a1;
      v27 = (v60 & 0xFFFFFFFFFFFFFFFELL) - 1;
      if ((v60 & 1) == 0) {
        v27 = 22;
      }
      if (v20 == v21) {
        goto LABEL_69;
      }
      if ((v60 & 1) != 0) {
        v28 = v62;
      }
      else {
        v23 = (unsigned __int8)v60 >> 1;
        v28 = (char*)&v60 + 1;
      }
      v29 = (unsigned __int64)&v28[v23 + 1];
      if (v21 >= v28 && (unsigned __int64)v21 < v29) {
        if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_124;
        }
        if (v24 > 0x16) {
          if ((v24 | 7) == 0x17) {
            v37 = 26;
          }
          else {
            v37 = (v24 | 7) + 1;
          }
          v35 = (char*)fw_memory_HeapManager_Allocate_alt1(*v4, v37, 16, 0);
          v76 = v20 - v21;
          v77 = v35;
          v75 = v37 | 1;
        }
        else {
          LOBYTE(v75) = 2 * v24;
          v35 = (char*)&v75 + 1;
        }
        memcpy(v35, v21, v20 - v21);
        v35[v24] = 0;
        if ((v75 & 1) != 0) {
          v38 = v77;
        }
        else {
          v38 = (char*)&v75 + 1;
        }
        if ((v75 & 1) != 0) {
          v39 = v76;
        }
        else {
          v39 = (unsigned __int64)(unsigned __int8)v75 >> 1;
        }
        GameRoutine_1a09ce0(&v60, v38, v39);
        if ((v75 & 1) != 0 && v77 != nullptr) {
          v41 = 128;
          if (*(_QWORD*)(*v4 + 200LL) == 0) {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v41, v40);
        }
      LABEL_69:
        if (v21 != &v73) {
          goto LABEL_70;
        }
        goto LABEL_85;
      }
      v31 = v25 + v24;
      if (v27 - v25 >= v24) {
        v36 = v28;
      }
      else {
        if (v31 - v27 > -10LL - v27) {
          goto LABEL_124;
        }
        if (v27 > 0x7FFFFFFFFFFFFFF2LL) {
          v34 = -9;
        }
        else {
          if (v31 <= 2 * v27) {
            v32 = 2 * v27;
          }
          else {
            v32 = v25 + v24;
          }
          if ((v32 | 7) == 0x17) {
            v33 = 26;
          }
          else {
            v33 = (v32 | 7) + 1;
          }
          if (v32 >= 0x17) {
            v34 = v33;
          }
          else {
            v34 = 23;
          }
        }
        v59 = v34;
        v44 = fw_memory_HeapManager_Allocate_alt1(*v4, v34, 16, 0);
        v36 = (char*)v44;
        if (v25 != 0) {
          memmove(v44, v28, v25);
        }
        if ((v22 & 1) != 0 && v28 != nullptr) {
          v46 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v45);
        }
        v61 = v25;
        v62 = v36;
        v60 = v59 | 1;
      }
      v47 = &v36[v25];
      memmove(v47, v21, v20 - v21);
      v47[v24] = 0;
      if ((v60 & 1) != 0) {
        v61 = v31;
      }
      else {
        LOBYTE(v60) = 2 * v31;
      }
      v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v21 != &v73) {
      LABEL_70:
        v42 = (unsigned __int8*)(v17[3] + v24);
        v17[3] = v42;
        if (v26 != 0) {
          goto LABEL_93;
        }
        v43 = (unsigned __int8*)v17[4];
        goto LABEL_89;
      }
    LABEL_85:
      v42 = (unsigned __int8*)v17[3];
      v43 = (unsigned __int8*)v17[4];
      if (v20 != &v73) {
        if (v42 == v43) {
          break;
        }
        v17[3] = ++v42;
      }
      if (v26 != 0) {
        goto LABEL_92;
      }
    LABEL_89:
      if (v42 == v43) {
        goto LABEL_17;
      }
    }
    (*(void (**)(_QWORD*))(*v17 + 80LL))(v17);
    v42 = (unsigned __int8*)v17[3];
    v43 = (unsigned __int8*)v17[4];
    if (v26 == 0) {
      goto LABEL_89;
    }
  LABEL_92:
    if (v42 != v43) {
    LABEL_93:
      v17[3] = v42 + 1;
      goto LABEL_102;
    }
  LABEL_101:
    (*(void (**)(_QWORD*))(*v17 + 80LL))(v17);
  LABEL_102:
    v6 = v58;
    std___1_ios_base_clear();
  LABEL_103:
    if ((*((_BYTE*)v66 + *(_QWORD*)(v63[0] - 24LL)) & 5) == 0) {
      if ((v60 & 1) != 0) {
        v50 = v62;
      }
      else {
        v50 = (char*)&v60 + 1;
      }
      if ((v60 & 1) != 0) {
        v51 = v61;
      }
      else {
        v51 = (unsigned __int64)(unsigned __int8)v60 >> 1;
      }
      v52 = GameRoutine_a81a70_alt1(v50, v51);
      if (v52 >= 0xA) {
        String_60a250_alt1("bitset set argument out of range");
      }
      v6 |= 1LL << v52;
      continue;
    }
    break;
  }
  if ((v60 & 1) != 0 && v62 != nullptr) {
    v53 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v53, v16);
  }
  v54 = *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)GameData_212eae0);
  v55 = *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)GameData_212eae0 + 8);
  v63[0] = *(_QWORD*)GameData_212eae0;
  *(_QWORD*)((char*)v63 + *(_QWORD*)(v63[0] - 24LL)) = v54;
  v64 = v55;
  v65 = GameData_212eae8 + 16;
  if ((v67 & 1) != 0 && v69 != nullptr) {
    v56 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v56, v16);
  }
  v65 = GameData_212eaf0 + 16;
  std___1_locale_Destroy_locale(v66);
  GameRoutine_1a0abc0(v63, (char*)GameData_212eae0 + 8);
  GameRoutine_1a0abb0(v72);
  return v6;
}

void wld_c32fa0(__int64 a1, float32x4_t** a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  float32x4_t* v12;
  int v13;
  float32x4_t v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  float32x4_t v18;
  float32x2_t* v19;
  unsigned int v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  char* v30;
  const char* v31;
  unsigned __int64 v32;
  float32x4_t** v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  bool v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  float32x4_t* v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  __int128 v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  __int128 v49;
  float v50;
  double v51;
  double v52;
  double v53;
  double v54;
  double v55;
  double v56;
  double v57;
  double v58;
  float v59;
  float v60;
  float v61;
  float v62;
  bool v63;
  bool v64;
  int v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  __int128 v70;
  float32x4_t* v71;
  unsigned __int64 v72;
  __int64* v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  float32x4_t** v77;
  int v78;
  __int64 v79;
  unsigned int v80;
  unsigned int v81;
  unsigned __int64 v82;
  bool v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  int v104;
  int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  int v109;
  __int64 v110;
  __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  int v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int v121;
  __int64 v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  bool v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  __int64* v130;
  __int64 v134;
  __int64* v135;
  unsigned __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  bool v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  float32x4_t* v144;
  float32x4_t v145;
  float32x4_t v146;
  int8x16_t v147;
  __int128 v148;
  float32x4_t v149;
  float32x4_t v150;
  int8x16_t v151;
  float v152;
  __int128 v153;
  double v154;
  double v155;
  double v156;
  double v157;
  double v158;
  double v159;
  double v160;
  double v161;
  float v162;
  float v163;
  float v164;
  float v165;
  bool v166;
  bool v167;
  int v169;
  float32x4_t v170;
  float32x4_t v171;
  int8x16_t v172;
  __int128 v173;
  float32x4_t* v174;
  unsigned __int64 v175;
  __int64* v176;
  __int64 v177;
  __int64 v178;
  char* v179;
  __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  unsigned __int64 v183;
  __int64 v184;
  unsigned __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  int v191;
  __int64 v192;
  float32x4_t* v193;
  _QWORD* v194;
  __int64* v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  int v201;
  __int64 v202;
  char* v203;
  __int64 v204;
  unsigned __int64 v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  bool v215;
  unsigned __int64 v216;
  __int64 v217;
  unsigned __int64 v218;
  __int64 v219;
  float32x4_t* v220;
  float32x4_t v221;
  float32x4_t v222;
  int8x16_t v223;
  __int128 v224;
  float32x4_t v225;
  float32x4_t v226;
  int8x16_t v227;
  __int128 v228;
  float v229;
  double v230;
  double v231;
  double v232;
  double v233;
  double v234;
  double v235;
  double v236;
  double v237;
  float v238;
  float v239;
  float v240;
  float v241;
  bool v242;
  bool v243;
  int v245;
  float32x4_t v246;
  float32x4_t v247;
  int8x16_t v248;
  __int128 v249;
  float32x4_t* v250;
  unsigned __int64 v251;
  __int64* v252;
  __int64 v253;
  __int64 v254;
  char* v255;
  __int64 v256;
  unsigned __int64 v257;
  __int64 v258;
  unsigned __int64 v259;
  __int64 v260;
  unsigned __int64 v261;
  unsigned __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  _QWORD* v267;
  float v268;
  __int64 v269;
  float32x4_t* v270;
  __int64* v272;
  _QWORD* v273;
  __int64 v275;
  float32x4_t v276;
  int v277;
  __int64 v278;
  float v279;
  float v280;
  float32x4_t v281[4];
  struct {
    float32x4_t v282;
    float32x4_t v283;
    float32x4_t v284;
    float32x4_t v285;
  } v282_;
  struct {
    _QWORD v286[2];
    char* v287;
  } v286_;
  unsigned int v288[3];
  __int64 v289;

  v2 = *(_QWORD*)(*(_QWORD*)a1 + 32LL);
  v275 = *(_QWORD*)(*(_QWORD*)a1 + 24LL);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v288[0] = 0;
  v3 = (__int64)&LANES128((*a2)[1]).n128_i64[1] + 1;
  v269 = v3;
  v270 = *a2;
  v272 = (__int64*)LANES128((*a2)[17]).n128_u64[1];
  v4 = *v272;
  v5 = LANES128((*a2)[1]).n128_u8[8];
  v7 = LANES128((*a2)[2]).n128_u64[0];
  v6 = LANES128((*a2)[2]).n128_i64[1];
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  v289 = *v272;
  if (v8) {
    v10 = v3;
  }
  else {
    v10 = v6;
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = v7;
  }
  wld_map_c23be0((void*)(v286_.v286), v275, v10, v11);
  v12 = *a2;
  v278 = v4;
  v13 = *(_DWORD*)(v4 + 32);
  if ((LANES128((*a2)[3]).n128_u8[0] & 1) != 0 && *(_QWORD*)(v278 + 8) != 0) {
    v14 = v12[13];
    v16 = LANES128(v12[14]).n128_u64[0];
    v15 = LANES128(v12[14]).n128_u64[1];
    LANES128(v281[0]).n128_u64[0] = v16;
    LANES128(v281[0]).n128_u64[1] = v15;
    v276 = v14;
    math_Mtx43_MakeRotation((void*)(&v282_.v282), v281);
    LODWORD(v17) = 0;
    LANES128(v18).n128_u64[0] = 0;
    v19 = *(float32x2_t**)(v275 + 80);
    HIDWORD(v17) = HIDWORD(LANES128((*a2)[15]).n128_u64[0]);
    v20 = LANES128((*a2)[15]).n128_u64[0];
    LANES128(v18).n128_u64[1] = (unsigned int)LANES128((*a2)[15]).n128_u64[1];
    v21 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, v20),
                        COERCE_FLOAT(*(_OWORD*)LANES64(v19[54]).n64_u64)),
            COERCE_AS(float32x4_t, v17), v19[54], 1),
        v18, *(float32x4_t*)LANES64(v19[54]).n64_u64, 2);
    v22 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, v20),
                        COERCE_FLOAT(*(_OWORD*)LANES64(v19[56]).n64_u64)),
            COERCE_AS(float32x4_t, v17), v19[56], 1),
        v18, *(float32x4_t*)LANES64(v19[56]).n64_u64, 2);
    v23 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(COERCE_AS(float32x4_t, v20),
                        COERCE_FLOAT(*(_OWORD*)LANES64(v19[58]).n64_u64)),
            COERCE_AS(float32x4_t, v17), v19[58], 1),
        v18, *(float32x4_t*)LANES64(v19[58]).n64_u64, 2);
    v24 = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(COERCE_AS(float32x4_t, v20),
                            COERCE_FLOAT(*(_OWORD*)LANES64(v19[60]).n64_u64)),
                COERCE_AS(float32x4_t, v17), v19[60], 1),
            v18, *(float32x4_t*)LANES64(v19[60]).n64_u64, 2),
        COERCE_AS(float32x4_t, 0));
    v25 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v282_.v282, LANES128(v21).n128_f32[0]),
                       v282_.v283,
                       COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 1),
        v282_.v284, v21, 2);
    v26 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v282_.v282, LANES128(v22).n128_f32[0]),
                       v282_.v283,
                       COERCE_AS(float32x2_t, LANES128(v22).n128_u64[0]), 1),
        v282_.v284, v22, 2);
    v27 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v282_.v282, LANES128(v23).n128_f32[0]),
                       v282_.v283,
                       COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]), 1),
        v282_.v284, v23, 2);
    v28 = vaddq_f32(
        v282_.v285,
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v282_.v282, LANES128(v24).n128_f32[0]), v282_.v283,
                COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]), 1),
            v282_.v284, v24, 2));
    v281[0] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v25).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v25, 2);
    v281[1] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v26).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v26, 2);
    v281[2] = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v27).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v27, 2);
    v281[3] = vaddq_f32(
        v276, vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v28).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v28, 2));
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21fde98) != 0) {
      GameHr_a5aca0((__int64)GameData_21fdd90);
      GameRoutine_2b0();
      __cxa_guard_release_alt1((__int64)&GameData_21fde98);
    }
    if ((v286_.v286[0] & 1) != 0) {
      v29 = v286_.v286[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(v286_.v286[0]) >> 1;
    }
    if ((v286_.v286[0] & 1) != 0) {
      v30 = v286_.v287;
    }
    else {
      v30 = (char*)v286_.v286 + 1;
    }
    v31 = *(const char**)(v278 + 8);
    v32 = strlen_alt1(v31);
    GameRoutine_a5b760_alt1(GameData_21fdd90, (__int64)v30, v29, (__int64)v31,
                            v32, (char*)v281, 0);
  }
  v266 = v2;
  if (v13 != 0) {
    v33 = a2;
    v34 = LANES128((*a2)[17]).n128_u64[0];
    if ((v34 & 4) != 0) {
      v35 = LANES128(v270[1]).n128_u8[8];
      v36 = (v35 & 1) == 0;
      v37 = v35 >> 1;
      if (v36) {
        v38 = v269;
      }
      else {
        v38 = LANES128(v270[2]).n128_i64[1];
      }
      if (v36) {
        v39 = v37;
      }
      else {
        v39 = LANES128(v270[2]).n128_u64[0];
      }
      v40 = wld_map_c23d20(v275, v38, v39);
      *(_DWORD*)(v40 + 284) = 2;
      GameRoutine_c34200(v40, &v289, (unsigned __int8*)v286_.v286, v288,
                         a1 + 56);
      v41 = *a2;
      v42 = (*a2)[13];
      v43 = vsubq_f32(*(float32x4_t*)(v40 + 304), v42);
      v44 = vmulq_f32(v43, v43);
      LANES128(v44).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v40 + 304) = LANES128(v42).n128_u64[0];
        v45 = *(_OWORD*)(v40 + 304);
        *(_DWORD*)(v40 + 296) |= 1u;
        *((_QWORD*)&v45 + 1) = LANES128(v42).n128_u32[2];
        *(_OWORD*)(v40 + 304) = v45;
        v41 = *a2;
      }
      v46 = v41[14];
      v47 = vsubq_f32(*(float32x4_t*)(v40 + 320), v46);
      v48 = vmulq_f32(v47, v47);
      LANES128(v48).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v40 + 320) = LANES128(v46).n128_u64[0];
        v279 = LANES128(v46).n128_f32[0];
        v49 = *(_OWORD*)(v40 + 320);
        v50 = LANES128(v46).n128_f32[1];
        *((_QWORD*)&v49 + 1) = LANES128(v46).n128_u32[2];
        v51 = LANES128(v46).n128_f32[2] * 0x1.0000000000000p-1;
        *(_OWORD*)(v40 + 320) = v49;
        v52 = cos(v51);
        v53 = sin(v51);
        v54 = cos(v279 * 0x1.0000000000000p-1);
        v55 = sin(v279 * 0x1.0000000000000p-1);
        v56 = v50 * 0x1.0000000000000p-1;
        v57 = cos(v56);
        v58 = sin(v56);
        v59 = v52 * v55 * v57 - PSEUDO_UNFUSED(v58 * (v53 * v54));
        v60 = PSEUDO_UNFUSED(v53 * v55 * v57) + PSEUDO_UNFUSED(v52 * v54) * v58;
        v61 = PSEUDO_UNFUSED(v53 * v55 * v58) + PSEUDO_UNFUSED(v52 * v54) * v57;
        v62 = v53 * v54 * v57 - PSEUDO_UNFUSED(v58 * (v52 * v55));
        v63 = COERCE_FLOAT(*(_OWORD*)(v40 + 336)) == v59 &&
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v40 + 336))) == v60;
        v64 = v63 && COERCE_FLOAT(*(_QWORD*)(v40 + 344)) == v62;
        if (!v64 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v40 + 336))) != v61) {
          v66 = *(_DWORD*)(v40 + 296);
          *(float*)(v40 + 336) = v59;
          *(float*)(v40 + 340) = v60;
          *(float*)(v40 + 344) = v62;
          *(float*)(v40 + 348) = v61;
          *(_DWORD*)(v40 + 296) = v66 | 1;
        }
      }
      v67 = (*a2)[15];
      v68 = vsubq_f32(*(float32x4_t*)(v40 + 352), v67);
      v69 = vmulq_f32(v68, v68);
      LANES128(v69).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v40 + 352) = LANES128(v67).n128_u64[0];
        v70 = *(_OWORD*)(v40 + 352);
        *(_DWORD*)(v40 + 296) |= 1u;
        *((_QWORD*)&v70 + 1) = LANES128(v67).n128_u32[2];
        *(_OWORD*)(v40 + 352) = v70;
      }
      *(_BYTE*)(v40 + 289) = 0;
      v71 = *a2;
      v73 = (__int64*)LANES128((*a2)[18]).n128_u64[1];
      v72 = LANES128((*a2)[19]).n128_u64[0];
      if ((unsigned __int64)v73 >= v72) {
        v202 = LANES128(v71[18]).n128_i64[0];
        v203 = (char*)v73 - v202;
        v204 = ((__int64)v73 - v202) >> 3;
        v205 = v204 + 1;
        if ((unsigned __int64)(v204 + 1) >> 61 != 0) {
          goto LABEL_254;
        }
        v206 = v72 - v202;
        v207 = fw_memory_g_heap_manager_ptr;
        if (v206 >> 2 > v205) {
          v205 = v206 >> 2;
        }
        if ((unsigned __int64)v206 >= 0x7FFFFFFFFFFFFFF8LL) {
          v208 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v208 = v205;
        }
        if (v208 != 0) {
          if (v208 >> 61 != 0) {
            goto LABEL_255;
          }
          v209 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v208, 16, 0);
        }
        else {
          v209 = 0;
        }
        v210 = v209 + 8 * v208;
        v211 = (unsigned __int64)v73 - v202;
        v212 = (__int64)&v203[v209 + -8 * v204];
        *(_QWORD*)&v203[v209] = v40;
        v74 = (__int64)&v203[v209 + 8];
        memcpy_alt1(v212, v202, v211);
        LANES128(v71[18]).n128_u64[0] = v212;
        LANES128(v71[18]).n128_u64[1] = v74;
        LANES128(v71[19]).n128_u64[0] = v210;
        if (v202 != 0) {
          v213 = 128;
          if (*(_QWORD*)(*(_QWORD*)v207 + 200LL) == 0) {
            v213 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v207 + v213, v202);
        }
        v33 = a2;
      }
      else {
        *v73 = v40;
        v74 = (__int64)(v73 + 1);
      }
      LANES128(v71[18]).n128_u64[1] = v74;
      v34 = LANES128((*v33)[17]).n128_u64[0];
    }
    if ((v34 & 2) != 0) {
      v214 = LANES128(v270[1]).n128_u8[8];
      v215 = (v214 & 1) == 0;
      v216 = v214 >> 1;
      if (v215) {
        v217 = v269;
      }
      else {
        v217 = LANES128(v270[2]).n128_i64[1];
      }
      if (v215) {
        v218 = v216;
      }
      else {
        v218 = LANES128(v270[2]).n128_u64[0];
      }
      v219 = wld_map_c23d20(v275, v217, v218);
      *(_DWORD*)(v219 + 284) = 1;
      GameRoutine_c34200(v219, &v289, (unsigned __int8*)v286_.v286, v288,
                         a1 + 56);
      v220 = *v33;
      v221 = (*v33)[13];
      v222 = vsubq_f32(*(float32x4_t*)(v219 + 304), v221);
      v223 = vmulq_f32(v222, v222);
      LANES128(v223).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v223, v223, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v223).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v223).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v223).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v219 + 304) = LANES128(v221).n128_u64[0];
        v224 = *(_OWORD*)(v219 + 304);
        *(_DWORD*)(v219 + 296) |= 1u;
        *((_QWORD*)&v224 + 1) = LANES128(v221).n128_u32[2];
        *(_OWORD*)(v219 + 304) = v224;
        v220 = *v33;
      }
      v225 = v220[14];
      v226 = vsubq_f32(*(float32x4_t*)(v219 + 320), v225);
      v227 = vmulq_f32(v226, v226);
      LANES128(v227).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v227, v227, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v227).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v219 + 320) = LANES128(v225).n128_u64[0];
        v280 = LANES128(v225).n128_f32[0];
        v228 = *(_OWORD*)(v219 + 320);
        v229 = LANES128(v225).n128_f32[1];
        *((_QWORD*)&v228 + 1) = LANES128(v225).n128_u32[2];
        v230 = LANES128(v225).n128_f32[2] * 0x1.0000000000000p-1;
        *(_OWORD*)(v219 + 320) = v228;
        v231 = cos(v230);
        v232 = sin(v230);
        v233 = cos(v280 * 0x1.0000000000000p-1);
        v234 = sin(v280 * 0x1.0000000000000p-1);
        v235 = v229 * 0x1.0000000000000p-1;
        v236 = cos(v235);
        v237 = sin(v235);
        v238 = v231 * v234 * v236 - PSEUDO_UNFUSED(v237 * (v232 * v233));
        v239 = PSEUDO_UNFUSED(v232 * v234 * v236) +
               PSEUDO_UNFUSED(v231 * v233) * v237;
        v240 = PSEUDO_UNFUSED(v232 * v234 * v237) +
               PSEUDO_UNFUSED(v231 * v233) * v236;
        v241 = v232 * v233 * v236 - PSEUDO_UNFUSED(v237 * (v231 * v234));
        v242 = COERCE_FLOAT(*(_OWORD*)(v219 + 336)) == v238 &&
               COERCE_FLOAT(HIDWORD(*(_QWORD*)(v219 + 336))) == v239;
        v243 = v242 && COERCE_FLOAT(*(_QWORD*)(v219 + 344)) == v241;
        if (!v243 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v219 + 336))) != v240) {
          v245 = *(_DWORD*)(v219 + 296);
          *(float*)(v219 + 336) = v238;
          *(float*)(v219 + 340) = v239;
          *(float*)(v219 + 344) = v241;
          *(float*)(v219 + 348) = v240;
          *(_DWORD*)(v219 + 296) = v245 | 1;
        }
      }
      v246 = (*v33)[15];
      v247 = vsubq_f32(*(float32x4_t*)(v219 + 352), v246);
      v248 = vmulq_f32(v247, v247);
      LANES128(v248).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v248, v248, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v248).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v248).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v248).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        *(_QWORD*)(v219 + 352) = LANES128(v246).n128_u64[0];
        v249 = *(_OWORD*)(v219 + 352);
        *(_DWORD*)(v219 + 296) |= 1u;
        *((_QWORD*)&v249 + 1) = LANES128(v246).n128_u32[2];
        *(_OWORD*)(v219 + 352) = v249;
      }
      *(_BYTE*)(v219 + 289) = 0;
      v250 = *v33;
      v252 = (__int64*)LANES128((*v33)[18]).n128_u64[1];
      v251 = LANES128((*v33)[19]).n128_u64[0];
      if ((unsigned __int64)v252 < v251) {
        *v252 = v219;
        v253 = (__int64)(v252 + 1);
      LABEL_243:
        LANES128(v250[18]).n128_u64[1] = v253;
        goto LABEL_244;
      }
      v254 = LANES128(v250[18]).n128_i64[0];
      v255 = (char*)v252 - v254;
      v256 = ((__int64)v252 - v254) >> 3;
      v257 = v256 + 1;
      if ((unsigned __int64)(v256 + 1) >> 61 == 0) {
        v258 = v251 - v254;
        if (v258 >> 2 > v257) {
          v257 = v258 >> 2;
        }
        if ((unsigned __int64)v258 >= 0x7FFFFFFFFFFFFFF8LL) {
          v259 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v259 = v257;
        }
        if (v259 == 0) {
          v260 = 0;
        LABEL_239:
          v261 = v260 + 8 * v259;
          v262 = (unsigned __int64)v252 - v254;
          v263 = (__int64)&v255[v260 + -8 * v256];
          *(_QWORD*)&v255[v260] = v219;
          v253 = (__int64)&v255[v260 + 8];
          memcpy_alt1(v263, v254, v262);
          LANES128(v250[18]).n128_u64[0] = v263;
          LANES128(v250[18]).n128_u64[1] = v253;
          LANES128(v250[19]).n128_u64[0] = v261;
          if (v254 != 0) {
            v264 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v264 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v264, v254);
          }
          goto LABEL_243;
        }
        if (v259 >> 61 == 0) {
          v260 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v259, 16, 0);
          goto LABEL_239;
        }
      LABEL_255:
        GameRoutine_60a210();
      }
    LABEL_254:
      GameRoutine_81e570();
    }
  }
  else {
    v75 = (_QWORD*)v272[1];
    v273 = v272 + 1;
    GameRoutine_ad7390(v75);
    v76 = ResFile_5e5f00_alt1(*(_QWORD*)(v75[1] + 592LL));
    v77 = a2;
    v277 = *(unsigned __int16*)(v76 + 220);
    if (*(_WORD*)(v76 + 220) != 0) {
      v78 = 0;
      v267 = v75;
      do {
        v80 = GameRoutine_c156c0_alt1(v75, v78);
        if (v80 >= 0xA) {
          String_60a250("bitset test argument out of range");
        }
        v81 = v80;
        if (((LANES128((*v77)[17]).n128_u64[0] >> v80) & 1) != 0) {
          v82 = LANES128(v270[1]).n128_u8[8];
          v83 = (v82 & 1) == 0;
          v84 = v82 >> 1;
          if (v83) {
            v85 = v269;
          }
          else {
            v85 = LANES128(v270[2]).n128_i64[1];
          }
          if (v83) {
            v86 = v84;
          }
          else {
            v86 = LANES128(v270[2]).n128_u64[0];
          }
          v87 = wld_map_c23d20(v275, v85, v86);
          *(_DWORD*)(v87 + 284) = v81;
          GameRoutine_c15840_alt2(v87, v273, v78, 0);
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)GameData_212df10) != 0) {
            *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
            __cxa_guard_release_alt1((__int64)GameData_212df10);
          }
          v88 = *(_QWORD*)(v87 + 512);
          v89 = v88;
          do {
            v90 = *(_DWORD*)(v89 - 16);
            v89 -= 16;
            v88 -= 16;
          } while (v90 != *GameData_212df08);
          v91 = *(_QWORD*)(v88 + 8);
          if ((*(int (**)(_QWORD))(**(_QWORD**)(v91 + 24) + 56LL))(
                  *(_QWORD*)(v91 + 24)) >= 2) {
            v92 = *(_DWORD*)(v278 + 24);
            if (v92 == 2) {
              v93 = 10;
            }
            else {
              v93 = 8;
            }
            if (v92 == 1) {
              v94 = 9;
            }
            else {
              v94 = v93;
            }
            GameRoutine_a97000((void*)((__int64*)&v282_.v282), v75, v78);
            v95 = GameRoutine_c15960_alt1(v87);
            v96 = v95;
            if (LANES128(v282_.v283).n128_u64[1] > 1) {
              GameHr_a988a0(v95, v91, (__int64*)&v282_.v282);
            }
            else {
              LodModule_a97380(v95, v91);
            }
            *(_DWORD*)(v96 + 212) = v94;
            v97 = *(_QWORD*)(v96 + 56) - *(_QWORD*)(v96 + 48);
            v98 = (_QWORD*)GameData_2132398[0];
            if (v97 != 0) {
              if (v97 == 8) {
                v99 = 0;
              }
              else {
                v99 = 0;
                do {
                  v105 = *(_DWORD*)(v96 + 212);
                  v106 = *(_QWORD*)(*(_QWORD*)(v96 + 40) + 56LL) +
                         224LL * *(_QWORD*)(*(_QWORD*)(v96 + 48) + 8 * v99);
                  *(_QWORD*)(v96 + 96) = v106;
                  *(_DWORD*)(v106 + 176) = v105;
                  if (*(_BYTE*)(v106 + 186) == 1) {
                    v107 = *(_QWORD*)(v106 + 192);
                    v108 = *(_QWORD*)(v106 + 200);
                    if (v107 != v108) {
                      v109 = *(_DWORD*)(*v98 + 112LL * v105 + 64) - 1;
                      do {
                        if ((*(_BYTE*)(v107 + 22) & 1) == 0) {
                          *(_DWORD*)v107 = v109;
                          *(_DWORD*)(v107 + 4) = v109;
                          *(_DWORD*)(v107 + 8) = 1;
                        }
                        *(_DWORD*)(v107 + 16) = v109;
                        *(_BYTE*)(v107 + 21) = 1;
                        v107 += 24;
                      } while (v107 != v108);
                    }
                  }
                  v111 = *(_QWORD*)(v96 + 40);
                  v110 = *(_QWORD*)(v96 + 48);
                  *(_QWORD*)(v96 + 96) = 0;
                  v112 = *(_DWORD*)(v96 + 212);
                  v113 = *(_QWORD*)(v111 + 56) +
                         224LL * *(_QWORD*)(v110 + 8 * v99 + 8);
                  *(_QWORD*)(v96 + 96) = v113;
                  *(_DWORD*)(v113 + 176) = v112;
                  if (*(_BYTE*)(v113 + 186) == 1) {
                    v114 = *(_QWORD*)(v113 + 192);
                    v115 = *(_QWORD*)(v113 + 200);
                    if (v114 != v115) {
                      v116 = *(_DWORD*)(*v98 + 112LL * v112 + 64) - 1;
                      do {
                        if ((*(_BYTE*)(v114 + 22) & 1) == 0) {
                          *(_DWORD*)v114 = v116;
                          *(_DWORD*)(v114 + 4) = v116;
                          *(_DWORD*)(v114 + 8) = 1;
                        }
                        *(_DWORD*)(v114 + 16) = v116;
                        *(_BYTE*)(v114 + 21) = 1;
                        v114 += 24;
                      } while (v114 != v115);
                    }
                  }
                  v99 += 2;
                  *(_QWORD*)(v96 + 96) = 0;
                } while (v99 != ((v97 >> 3) & 0xFFFFFFFFFFFFFFFELL));
              }
              if ((v97 & 8) != 0) {
                v100 = *(_DWORD*)(v96 + 212);
                v101 = *(_QWORD*)(*(_QWORD*)(v96 + 40) + 56LL) +
                       224LL * *(_QWORD*)(*(_QWORD*)(v96 + 48) + 8 * v99);
                *(_QWORD*)(v96 + 96) = v101;
                *(_DWORD*)(v101 + 176) = v100;
                if (*(_BYTE*)(v101 + 186) == 1) {
                  v102 = *(_QWORD*)(v101 + 192);
                  v103 = *(_QWORD*)(v101 + 200);
                  if (v102 != v103) {
                    v104 = *(_DWORD*)(*v98 + 112LL * v100 + 64) - 1;
                    do {
                      if ((*(_BYTE*)(v102 + 22) & 1) == 0) {
                        *(_DWORD*)v102 = v104;
                        *(_DWORD*)(v102 + 4) = v104;
                        *(_DWORD*)(v102 + 8) = 1;
                      }
                      *(_DWORD*)(v102 + 16) = v104;
                      *(_BYTE*)(v102 + 21) = 1;
                      v102 += 24;
                    } while (v102 != v103);
                  }
                }
                *(_QWORD*)(v96 + 96) = 0;
              }
            }
            if (LANES128(v282_.v282).n128_u64[0] != 0) {
              LANES128(v282_.v282).n128_u64[1] =
                  LANES128(v282_.v282).n128_u64[0];
              v117 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v117 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v117,
                  LANES128(v282_.v282).n128_i64[0]);
            }
          }
          GameRoutine_c15dc0_alt2(v87, (__int64)v75, v278, nullptr);
          v118 = GameRoutine_c34200(v87, &v289, (unsigned __int8*)v286_.v286,
                                    v288, a1 + 56);
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212d308,
                                    memory_order_acquire) &
               1) == 0) {
            v200 = v118;
            v201 = __cxa_guard_acquire_alt1((__int64)GameData_212d308);
            v118 = v200;
            if (v201 != 0) {
              *GameData_212d300 = wld_Crc32(0, "MapAnimModule", 0xDu);
              __cxa_guard_release_alt1((__int64)GameData_212d308);
              v118 = v200;
            }
          }
          v119 = *(_QWORD*)(v87 + 512);
          v120 = v119;
          while (v120 != *(_QWORD*)(v87 + 504)) {
            v121 = *(_DWORD*)(v120 - 16);
            v120 -= 16;
            v119 -= 16;
            if (v121 == *GameData_212d300) {
              if (*(_QWORD*)(v87 + 512) == v119) {
                break;
              }
              v122 = *(_QWORD*)(v119 + 8);
              if (v122 == 0) {
                break;
              }
              v123 = *(unsigned __int8*)(v118 + 96);
              v124 = v118 + 97;
              v125 = v118;
              v126 = (v123 & 1) == 0;
              v127 = v123 >> 1;
              if (v126) {
                v128 = v118 + 97;
              }
              else {
                v128 = *(_QWORD*)(v118 + 112);
              }
              if (v126) {
                v129 = v127;
              }
              else {
                v129 = *(_QWORD*)(v118 + 104);
              }
              LANES128(v282_.v282).n128_u64[0] = v128;
              LANES128(v282_.v282).n128_u64[1] = v129;
              v130 = GameRoutine_c0b080_alt1((_QWORD*)(v122 + 64),
                                             (__int64*)&v282_.v282);
              if (v130 != nullptr) {
                if (v130[8] != 0 || v130[9] != 0 || v130[10] != 0 ||
                    v130[11] != 0) {
                  v134 = v125;
                LABEL_129:
                  v136 = *(unsigned __int8*)(v134 + 96);
                  v139 = v134 + 104;
                  v137 = *(_QWORD*)(v134 + 104);
                  v138 = *(_QWORD*)(v139 + 8);
                  v140 = (v136 & 1) == 0;
                  v141 = v136 >> 1;
                  if (v140) {
                    v142 = v124;
                  }
                  else {
                    v142 = v138;
                  }
                  if (v140) {
                    v143 = v141;
                  }
                  else {
                    v143 = v137;
                  }
                  GameHr_c08540(v122, v142, v143, 0, 0x0.0p+0f);
                  break;
                }
                v134 = v125;
                if (v130[12] != 0) {
                  goto LABEL_129;
                }
              }
              LANES128(v282_.v282).n128_u64[0] = v128;
              LANES128(v282_.v282).n128_u64[1] = v129;
              v135 = GameRoutine_c0b220_alt1((_QWORD*)(v122 + 104),
                                             (__int64*)&v282_.v282);
              v134 = v125;
              if (v135 == nullptr) {
                break;
              }
              goto LABEL_129;
            }
          }
          v144 = *v77;
          v145 = (*v77)[13];
          v146 = vsubq_f32(*(float32x4_t*)(v87 + 304), v145);
          v147 = vmulq_f32(v146, v146);
          LANES128(v147).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v147, v147, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0])))
                  .n64_f32[0] != 0x0.0p+0f) {
            *(_QWORD*)(v87 + 304) = LANES128(v145).n128_u64[0];
            v148 = *(_OWORD*)(v87 + 304);
            *(_DWORD*)(v87 + 296) |= 1u;
            *((_QWORD*)&v148 + 1) = LANES128(v145).n128_u32[2];
            *(_OWORD*)(v87 + 304) = v148;
            v144 = *v77;
          }
          v149 = v144[14];
          v150 = vsubq_f32(*(float32x4_t*)(v87 + 320), v149);
          v151 = vmulq_f32(v150, v150);
          LANES128(v151).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v151, v151, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0])))
                  .n64_f32[0] != 0x0.0p+0f) {
            *(_QWORD*)(v87 + 320) = LANES128(v149).n128_u64[0];
            v152 = LANES128(v149).n128_f32[1];
            v268 = LANES128(v149).n128_f32[0];
            v153 = *(_OWORD*)(v87 + 320);
            *((_QWORD*)&v153 + 1) = LANES128(v149).n128_u32[2];
            v154 = LANES128(v149).n128_f32[2] * 0x1.0000000000000p-1;
            *(_OWORD*)(v87 + 320) = v153;
            v155 = cos(v154);
            v156 = sin(v154);
            v157 = cos(v268 * 0x1.0000000000000p-1);
            v158 = sin(v268 * 0x1.0000000000000p-1);
            v159 = v152 * 0x1.0000000000000p-1;
            v160 = cos(v159);
            v161 = sin(v159);
            v162 = v155 * v158 * v160 - PSEUDO_UNFUSED(v161 * (v156 * v157));
            v163 = PSEUDO_UNFUSED(v156 * v158 * v160) +
                   PSEUDO_UNFUSED(v155 * v157) * v161;
            v164 = PSEUDO_UNFUSED(v156 * v158 * v161) +
                   PSEUDO_UNFUSED(v155 * v157) * v160;
            v165 = v156 * v157 * v160 - PSEUDO_UNFUSED(v161 * (v155 * v158));
            v166 = COERCE_FLOAT(*(_OWORD*)(v87 + 336)) == v162 &&
                   COERCE_FLOAT(HIDWORD(*(_QWORD*)(v87 + 336))) == v163;
            v167 = v166 && COERCE_FLOAT(*(_QWORD*)(v87 + 344)) == v165;
            if (!v167 || COERCE_FLOAT(DWORD3(*(_OWORD*)(v87 + 336))) != v164) {
              v169 = *(_DWORD*)(v87 + 296);
              *(float*)(v87 + 336) = v162;
              *(float*)(v87 + 340) = v163;
              *(float*)(v87 + 344) = v165;
              *(float*)(v87 + 348) = v164;
              *(_DWORD*)(v87 + 296) = v169 | 1;
            }
          }
          v170 = (*v77)[15];
          v171 = vsubq_f32(*(float32x4_t*)(v87 + 352), v170);
          v172 = vmulq_f32(v171, v171);
          LANES128(v172).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v172, v172, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0])))
                  .n64_f32[0] != 0x0.0p+0f) {
            *(_QWORD*)(v87 + 352) = LANES128(v170).n128_u64[0];
            v173 = *(_OWORD*)(v87 + 352);
            *(_DWORD*)(v87 + 296) |= 1u;
            *((_QWORD*)&v173 + 1) = LANES128(v170).n128_u32[2];
            *(_OWORD*)(v87 + 352) = v173;
          }
          *(_BYTE*)(v87 + 289) = 0;
          v174 = *v77;
          v176 = (__int64*)LANES128((*v77)[18]).n128_u64[1];
          v175 = LANES128((*v77)[19]).n128_u64[0];
          if ((unsigned __int64)v176 >= v175) {
            v178 = LANES128(v174[18]).n128_i64[0];
            v179 = (char*)v176 - v178;
            v180 = ((__int64)v176 - v178) >> 3;
            v181 = v180 + 1;
            if ((unsigned __int64)(v180 + 1) >> 61 != 0) {
              goto LABEL_254;
            }
            v182 = v175 - v178;
            if (v182 >> 2 > v181) {
              v181 = v182 >> 2;
            }
            if ((unsigned __int64)v182 >= 0x7FFFFFFFFFFFFFF8LL) {
              v183 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v183 = v181;
            }
            if (v183 != 0) {
              if (v183 >> 61 != 0) {
                goto LABEL_255;
              }
              v184 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v183, 16, 0);
            }
            else {
              v184 = 0;
            }
            v185 = v184 + 8 * v183;
            v186 = (unsigned __int64)v176 - v178;
            v187 = (__int64)&v179[v184 + -8 * v180];
            *(_QWORD*)&v179[v184] = v87;
            v177 = (__int64)&v179[v184 + 8];
            memcpy_alt1(v187, v178, v186);
            LANES128(v174[18]).n128_u64[0] = v187;
            LANES128(v174[18]).n128_u64[1] = v177;
            LANES128(v174[19]).n128_u64[0] = v185;
            if (v178 != 0) {
              v188 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v188 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v188, v178);
            }
            v77 = a2;
          }
          else {
            *v176 = v87;
            v177 = (__int64)(v176 + 1);
          }
          LANES128(v174[18]).n128_u64[1] = v177;
          if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212eac0,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)GameData_212eac0) != 0) {
            *GameData_212eab8 = wld_Crc32(0, "DecalModule", 0xBu);
            __cxa_guard_release_alt1((__int64)GameData_212eac0);
          }
          v75 = v267;
          v189 = *(_QWORD*)(v87 + 512);
          v190 = v189;
          while (v190 != *(_QWORD*)(v87 + 504)) {
            v191 = *(_DWORD*)(v190 - 16);
            v190 -= 16;
            v189 -= 16;
            if (v191 == *GameData_212eab8) {
              if (*(_QWORD*)(v87 + 512) != v189) {
                v192 = *(_QWORD*)(v189 + 8);
                if (v192 != 0) {
                  v193 = *v77;
                  if (LANES128(v193[19]).n128_u64[1] == 0) {
                    v194 = (_QWORD*)fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
                    *v194 = 0;
                    v194[1] = 0;
                    v194[2] = 0;
                    v195 = (__int64*)LANES128(v193[19]).n128_u64[1];
                    LANES128(v193[19]).n128_u64[1] = (unsigned __int64)v194;
                    if (v195 != nullptr) {
                      v196 = *v195;
                      v197 = fw_memory_g_heap_manager_ptr;
                      if (*v195 != 0) {
                        v198 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
                        v195[1] = v196;
                        if (*(_QWORD*)(v198 + 200) != 0) {
                          v199 = 128;
                        }
                        else {
                          v199 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(v198 + v199, v196);
                      }
                      if (*(_QWORD*)(*(_QWORD*)v197 + 200LL) != 0) {
                        v79 = 128;
                      }
                      else {
                        v79 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v197 + v79,
                                                         (__int64)v195);
                    }
                  }
                  v77 = a2;
                  DecalModule_a93060((__int64*)LANES128((*a2)[19]).n128_u64[1],
                                     v192);
                }
              }
              break;
            }
          }
        }
        ++v78;
      } while (v78 != v277);
    }
  }
LABEL_244:
  if ((v286_.v286[0] & 1) != 0 && v286_.v287 != nullptr) {
    v265 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v265 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v265, (__int64)v286_.v287);
  }
  if (v266 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v266 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v266 + 16LL))(v266);
    std___1___shared_weak_count___release_weak_alt1(v266);
  }
}

__int64* wld_c3abd0(_QWORD* a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                    unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                    __int64 a8, __int64 a9, unsigned __int64 a10)
{
  __int64* v15;
  char* v16;
  char* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64* result;
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
  struct {
    __int64 v51;
    unsigned __int64 v52;
    char* v53;
  } v51_;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    char* v56;
  } v54_;
  struct {
    _QWORD v57[2];
    char* v58;
  } v57_;
  struct {
    _QWORD v59[2];
    __int64 v60;
  } v59_;
  struct {
    _QWORD v61[2];
    __int64 v62;
  } v61_;
  struct {
    _QWORD v63[2];
    __int64 v64;
  } v63_;
  struct {
    _QWORD v65[2];
    __int64 v66;
  } v65_;
  struct {
    __int16 v67;
    char gap170_[6];
    unsigned __int64 v68;
    char* v69;
  } v67_;

  Layout_c1d100((void*)(&v67_.v67), a6, a7, a9, a10);
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v57_.v57[0] = 33;
  v57_.v57[1] = 25;
  v57_.v58 = v16;
  strcpy(v16, "Contents:/Graphics/Light/");
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_78;
  }
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (a3 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(*v15, v18, 16, 0);
    v54_.v55 = a3;
    v54_.v56 = v17;
    v54_.v54 = v18 | 1;
    goto LABEL_9;
  }
  LOBYTE(v54_.v54) = 2 * a3;
  v17 = (char*)&v54_.v54 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove(v17, a2, a3);
  }
  v17[a3] = 0;
  if ((v54_.v54 & 1) != 0) {
    v19 = v54_.v56;
  }
  else {
    v19 = (char*)&v54_.v54 + 1;
  }
  if ((v54_.v54 & 1) != 0) {
    v20 = v54_.v55;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
  }
  v21 = (_QWORD*)GameRoutine_1a09ce0(v57_.v57, v19, v20);
  v23 = v21[1];
  v22 = v21[2];
  v59_.v59[0] = *v21;
  v59_.v59[1] = v23;
  v59_.v60 = v22;
  v21[1] = 0;
  v21[2] = 0;
  *v21 = 0;
  v24 = (_QWORD*)GameRoutine_1a09ce0(v59_.v59, "/", 1);
  v26 = v24[1];
  v25 = v24[2];
  v61_.v61[0] = *v24;
  v61_.v61[1] = v26;
  v61_.v62 = v25;
  v24[1] = 0;
  v24[2] = 0;
  *v24 = 0;
  if (a5 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_78:
    String_60a1d0();
  }
  if (a5 >= 0x17) {
    if ((a5 | 7) == 0x17) {
      v28 = 26;
    }
    else {
      v28 = (a5 | 7) + 1;
    }
    v27 = (char*)fw_memory_HeapManager_Allocate(*v15, v28, 16, 0);
    v51_.v52 = a5;
    v51_.v53 = v27;
    v51_.v51 = v28 | 1;
    goto LABEL_24;
  }
  LOBYTE(v51_.v51) = 2 * a5;
  v27 = (char*)&v51_.v51 + 1;
  if (a5 != 0) {
  LABEL_24:
    memmove(v27, a4, a5);
  }
  v27[a5] = 0;
  if ((v51_.v51 & 1) != 0) {
    v29 = v51_.v53;
  }
  else {
    v29 = (char*)&v51_.v51 + 1;
  }
  if ((v51_.v51 & 1) != 0) {
    v30 = v51_.v52;
  }
  else {
    v30 = (unsigned __int64)(unsigned __int8)v51_.v51 >> 1;
  }
  v31 = (_QWORD*)GameRoutine_1a09ce0(v61_.v61, v29, v30);
  v33 = v31[1];
  v32 = v31[2];
  v63_.v63[0] = *v31;
  v63_.v63[1] = v33;
  v63_.v64 = v32;
  v31[1] = 0;
  v31[2] = 0;
  *v31 = 0;
  if ((v67_.v67 & 1) != 0) {
    v34 = v67_.v69;
  }
  else {
    v34 = (char*)&v67_.v67 + 1;
  }
  if ((v67_.v67 & 1) != 0) {
    v35 = v67_.v68;
  }
  else {
    v35 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
  }
  v36 = (_QWORD*)GameRoutine_1a09ce0(v63_.v63, v34, v35);
  v38 = v36[1];
  v37 = v36[2];
  v65_.v65[0] = *v36;
  v65_.v65[1] = v38;
  v65_.v66 = v37;
  v36[1] = 0;
  v36[2] = 0;
  *v36 = 0;
  result = (__int64*)GameRoutine_1a09ce0(v65_.v65, ".light", 6);
  v40 = *result;
  v41 = result[1];
  *result = 0;
  result[1] = 0;
  *a1 = v40;
  a1[1] = v41;
  v42 = result[2];
  result[2] = 0;
  a1[2] = v42;
  if ((v65_.v65[0] & 1) != 0 && v65_.v66 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v43 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v15 + v43);
  }
  if ((v63_.v63[0] & 1) != 0 && v63_.v64 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v44 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v15 + v44);
  }
  if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v45 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v15 + v45);
  }
  if ((v61_.v61[0] & 1) != 0 && v61_.v62 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v46 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v15 + v46);
  }
  if ((v59_.v59[0] & 1) != 0 && v59_.v60 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v47 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v15 + v47);
  }
  if ((v54_.v54 & 1) != 0 && v54_.v56 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v48 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v15 + v48);
  }
  if ((v57_.v57[0] & 1) != 0 && v57_.v58 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v49 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free(*v15 + v49);
  }
  if ((v67_.v67 & 1) != 0 && v67_.v69 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*v15 + 200) == 0) {
      v50 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(*v15 + v50);
  }
  return result;
}

void wld_c40980(__int64* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
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
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
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
  __int64 v70;
  _BYTE* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  struct {
    __int64 v81;
    int v82;
  } v81_;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_b34420_alt1((void*)((__int64)&v81_.v81),
                          *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13424),
                          (__int64)"Graphics/Textures/common_default", 0x20u,
                          (__int64)"Cmn_Default_LSPV_BC", 19, 0);
  v3 = *(_QWORD*)(*a1 + 24);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*a1 + 16);
    v5 = v81_.v81;
    v6 = v81_.v82;
    v7 = *(_QWORD*)(*a1 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock_alt1(v7);
    std___1___shared_weak_count___release_weak_alt1(v3);
    if (v8 != 0) {
      if (v4 != 0) {
        v9 = *(_QWORD*)(v4 + 288);
        *(_QWORD*)(v9 + 1008) = v5;
        *(_DWORD*)(v9 + 1016) = v6;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
  }
  v10 = *(_QWORD*)(*a1 + 24);
  if (v10 != 0) {
    v11 = *(_QWORD*)(*a1 + 16);
    v12 = *(_QWORD*)(*a1 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
    v13 = std___1___shared_weak_count_lock_alt1(v12);
    std___1___shared_weak_count___release_weak_alt1(v10);
    if (v13 != 0) {
      if (v11 != 0) {
        v14 = *(_QWORD*)(v11 + 288);
        *(_QWORD*)(v14 + 528) = 0;
        *(_DWORD*)(v14 + 536) = -1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt1(v13);
      }
    }
  }
  v15 = *((_DWORD*)a1 + 248);
  v16 = *a1;
  *(_QWORD*)(v16 + 400) = a1[123];
  *(_DWORD*)(v16 + 408) = v15;
  v17 = a1[121];
  a1[121] = 0;
  v18 = fw_memory_g_heap_manager_ptr;
  if (v17 != 0) {
    Manager_c477c0_alt1(v17);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v19, v17);
  }
  v20 = a1[122];
  a1[122] = 0;
  if (v20 != 0) {
    Manager_c477c0_alt1(v20);
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v21, v20);
  }
  if (a1[67] != 0) {
    v22 = a1[69];
    a1[68] = 0;
    a1[69] = 0;
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt1(v22);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[67] + 8), a1[67]);
    a1[67] = 0;
  }
  if (a1[70] != 0) {
    v23 = a1[72];
    a1[71] = 0;
    a1[72] = 0;
    if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak_alt1(v23);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[70] + 8), a1[70]);
    a1[70] = 0;
  }
  if (a1[73] != 0) {
    v24 = a1[75];
    a1[74] = 0;
    a1[75] = 0;
    if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak_alt1(v24);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[73] + 8), a1[73]);
    a1[73] = 0;
  }
  if (a1[76] != 0) {
    v25 = a1[78];
    a1[77] = 0;
    a1[78] = 0;
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak_alt1(v25);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[76] + 8), a1[76]);
    a1[76] = 0;
  }
  if (a1[79] != 0) {
    v26 = a1[81];
    a1[80] = 0;
    a1[81] = 0;
    if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak_alt1(v26);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[79] + 8), a1[79]);
    a1[79] = 0;
  }
  if (a1[82] != 0) {
    v27 = a1[84];
    a1[83] = 0;
    a1[84] = 0;
    if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak_alt1(v27);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[82] + 8), a1[82]);
    a1[82] = 0;
  }
  if (a1[85] != 0) {
    v28 = a1[87];
    a1[86] = 0;
    a1[87] = 0;
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak_alt1(v28);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[85] + 8), a1[85]);
    a1[85] = 0;
  }
  if (a1[88] != 0) {
    v29 = a1[90];
    a1[89] = 0;
    a1[90] = 0;
    if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak_alt1(v29);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[88] + 8), a1[88]);
    a1[88] = 0;
  }
  if (a1[91] != 0) {
    v30 = a1[93];
    a1[92] = 0;
    a1[93] = 0;
    if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak_alt1(v30);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[91] + 8), a1[91]);
    a1[91] = 0;
  }
  if (a1[94] != 0) {
    v31 = a1[96];
    a1[95] = 0;
    a1[96] = 0;
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[94] + 8), a1[94]);
    a1[94] = 0;
  }
  if (a1[100] != 0) {
    v32 = a1[102];
    a1[101] = 0;
    a1[102] = 0;
    if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      std___1___shared_weak_count___release_weak_alt1(v32);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[100] + 8), a1[100]);
    a1[100] = 0;
  }
  if (a1[103] != 0) {
    v33 = a1[105];
    a1[104] = 0;
    a1[105] = 0;
    if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak_alt1(v33);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[103] + 8), a1[103]);
    a1[103] = 0;
  }
  if (a1[97] != 0) {
    v34 = a1[99];
    a1[98] = 0;
    a1[99] = 0;
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak_alt1(v34);
    }
    GameRoutine_634d80(*(_QWORD*)(a1[97] + 8), a1[97]);
    a1[97] = 0;
  }
  GameRoutine_b36540_alt1(*(_QWORD**)(*v2 + 13424), (__int64)(a1 + 123));
  v35 = a1[122];
  a1[122] = 0;
  if (v35 != 0) {
    Manager_c477c0_alt1(v35);
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v36, v35);
  }
  v37 = a1[121];
  a1[121] = 0;
  if (v37 != 0) {
    Manager_c477c0_alt1(v37);
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v38, v37);
  }
  v39 = a1[120];
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak_alt1(v39);
  }
  v40 = a1[117];
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak_alt1(v40);
  }
  v41 = a1[114];
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak_alt1(v41);
  }
  v42 = a1[111];
  if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak_alt1(v42);
  }
  v43 = a1[108];
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak_alt1(v43);
  }
  v44 = a1[105];
  if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    std___1___shared_weak_count___release_weak_alt1(v44);
  }
  v45 = a1[102];
  if (v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
    std___1___shared_weak_count___release_weak_alt1(v45);
  }
  v46 = a1[99];
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    std___1___shared_weak_count___release_weak_alt1(v46);
  }
  v47 = a1[96];
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak_alt1(v47);
  }
  v48 = a1[93];
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak_alt1(v48);
  }
  v49 = a1[90];
  if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    std___1___shared_weak_count___release_weak_alt1(v49);
  }
  v50 = a1[87];
  if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
    std___1___shared_weak_count___release_weak_alt1(v50);
  }
  v51 = a1[84];
  if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    std___1___shared_weak_count___release_weak_alt1(v51);
  }
  v52 = a1[81];
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak_alt1(v52);
  }
  v53 = a1[78];
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak_alt1(v53);
  }
  v54 = a1[75];
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    std___1___shared_weak_count___release_weak_alt1(v54);
  }
  v55 = a1[72];
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    std___1___shared_weak_count___release_weak_alt1(v55);
  }
  v56 = a1[69];
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak_alt1(v56);
  }
  v57 = a1[63];
  a1[63] = 0;
  if (v57 != 0) {
    Manager_c46910_alt1(v57);
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v58, v57);
  }
  v59 = a1[62];
  a1[62] = 0;
  if (v59 != 0) {
    Manager_c46910_alt1(v59);
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v60, v59);
  }
  v61 = a1[61];
  a1[61] = 0;
  if (v61 != 0) {
    Manager_c46910_alt1(v61);
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v62, v61);
  }
  v63 = a1[60];
  a1[60] = 0;
  if (v63 != 0) {
    Manager_c46910_alt1(v63);
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v64, v63);
  }
  v65 = a1[59];
  a1[59] = 0;
  if (v65 != 0) {
    Manager_c46910_alt1(v65);
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v66, v65);
  }
  v67 = a1[58];
  a1[58] = 0;
  if (v67 != 0) {
    Manager_c46910_alt1(v67);
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v68, v67);
  }
  v69 = a1[57];
  a1[57] = 0;
  if (v69 != 0) {
    Manager_c46910_alt1(v69);
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v70, v69);
  }
  Manager_c46910_alt1((__int64)(a1 + 17));
  v71 = (_BYTE*)a1[16];
  a1[16] = 0;
  if (v71 != nullptr) {
    if (v71[1624] == 1) {
      Manager_c46910_alt1((__int64)(v71 + 1304));
    }
    if (v71[1296] == 1) {
      Manager_c46910_alt1((__int64)(v71 + 976));
    }
    if (v71[968] == 1) {
      Manager_c46910_alt1((__int64)(v71 + 648));
    }
    if (v71[640] == 1) {
      Manager_c46910_alt1((__int64)(v71 + 320));
    }
    Manager_c46910_alt1((__int64)v71);
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v72, (__int64)v71);
  }
  if (*((_BYTE*)a1 + 120) == 1 && (a1[12] & 1) != 0) {
    v73 = a1[14];
    if (v73 != 0) {
      v74 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v74 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v74, v73);
    }
  }
  if ((a1[9] & 1) != 0) {
    v75 = a1[11];
    if (v75 != 0) {
      v76 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v76, v75);
    }
  }
  if ((a1[6] & 1) != 0) {
    v77 = a1[8];
    if (v77 != 0) {
      v78 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v78 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v78, v77);
    }
  }
  if ((a1[3] & 1) != 0) {
    v79 = a1[5];
    if (v79 != 0) {
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v18 + v80, v79);
    }
  }
}

void wld_c43d90(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                unsigned __int64 a5, __int64 a6, unsigned __int64 a7, int a8,
                int a9)
{
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  _BYTE* v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    unsigned __int64 v31;
    char* v32;
  } v30_;
  struct {
    __int64 v33;
    unsigned __int64 v34;
    char* v35;
  } v33_;

  *(_DWORD*)(a1 + 16) = a8;
  *(_DWORD*)(a1 + 20) = a9;
  GameRoutine_60a060((char*)(a1 + 24), a2, a3);
  GameRoutine_60a060((char*)(a1 + 48), a4, a5);
  GameRoutine_60a060((char*)(a1 + 72), a4, a5);
  if (a7 != 0) {
    if (*(_BYTE*)(a1 + 120) != 0) {
      GameRoutine_60a060((char*)(a1 + 96), a6, a7);
    }
    else {
      if (a7 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      if (a7 >= 0x17) {
        if ((a7 | 7) == 0x17) {
          v19 = 26;
        }
        else {
          v19 = (a7 | 7) + 1;
        }
        v18 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v19, 16,
                                             0);
        *(_QWORD*)(a1 + 104) = a7;
        *(_QWORD*)(a1 + 112) = v18;
        *(_QWORD*)(a1 + 96) = v19 | 1;
      }
      else {
        v18 = a1 + 97;
        *(_BYTE*)(a1 + 96) = 2 * a7;
      }
      memmove_alt1(v18, a6, a7);
      *(_BYTE*)(v18 + a7) = 0;
      *(_BYTE*)(a1 + 120) = 1;
    }
  }
  else if (*(_BYTE*)(a1 + 120) != 0) {
    if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
      v16 = *(_QWORD*)(a1 + 112);
      if (v16 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
      }
    }
    *(_BYTE*)(a1 + 120) = 0;
  }
  *(_DWORD*)(a1 + 8) = 1;
  if (*(_QWORD*)(a1 + 776) != 0) {
    v20 = *(_QWORD*)(a1 + 792);
    *(_QWORD*)(a1 + 784) = 0;
    *(_QWORD*)(a1 + 792) = 0;
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
    GameRoutine_634d80(*(_QWORD*)(*(_QWORD*)(a1 + 776) + 8LL),
                       *(_QWORD*)(a1 + 776));
    *(_QWORD*)(a1 + 776) = 0;
  }
  Manager_c445f0_alt1((__int64)&v33_.v33, a2, a3, a4, a5);
  if (a5 != 0) {
    v21 = (v33_.v33 & 1) != 0
              ? v33_.v34
              : (unsigned __int64)(unsigned __int8)v33_.v33 >> 1;
    v22 = (v33_.v33 & 1) != 0 ? v33_.v35 : (char*)&v33_.v33 + 1;
    if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
             **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
             *(_QWORD*)(game_g_frame_clock + 13432), v22, v21, 255) &
         1) == 0) {
      if ((*(_BYTE*)(a1 + 72) & 1) != 0) {
        v23 = *(_BYTE**)(a1 + 88);
        *(_QWORD*)(a1 + 80) = 0;
      }
      else {
        v23 = (_BYTE*)(a1 + 73);
        *(_BYTE*)(a1 + 72) = 0;
      }
      *v23 = 0;
      Manager_c445f0_alt1((__int64)&v30_.v30, a2, a3,
                          (__int64)&GameData_1a9f09e, 0);
      if ((v33_.v33 & 1) != 0 && v33_.v35 != nullptr) {
        v24 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v33_.v35);
      }
      v33_.v33 = v30_.v30;
      v33_.v34 = v30_.v31;
      v33_.v35 = v30_.v32;
    }
  }
  if ((v33_.v33 & 1) != 0) {
    v25 = v33_.v34;
  }
  else {
    v25 = (unsigned __int64)(unsigned __int8)v33_.v33 >> 1;
  }
  if ((v33_.v33 & 1) != 0) {
    v26 = v33_.v35;
  }
  else {
    v26 = (char*)&v33_.v33 + 1;
  }
  if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
           **(_QWORD**)(game_g_frame_clock + 13432) + 96LL))(
           *(_QWORD*)(game_g_frame_clock + 13432), v26, v25, 255) &
       1) == 0) {
    GameRoutine_c41bf0_alt1((_QWORD*)a1, a2, a3, a4, a5, 0);
    if ((v33_.v33 & 1) == 0) {
      return;
    }
    goto LABEL_59;
  }
  v30_.v30 = 0;
  v30_.v31 = 0;
  if ((v33_.v33 & 1) != 0) {
    v27 = v33_.v35;
  }
  else {
    v27 = (char*)&v33_.v33 + 1;
  }
  if ((v33_.v33 & 1) != 0) {
    v28 = v33_.v34;
  }
  else {
    v28 = (unsigned __int64)(unsigned __int8)v33_.v33 >> 1;
  }
  *(_QWORD*)(a1 + 776) =
      (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*, __int64))(
          **(_QWORD**)(game_g_frame_clock + 13432) + 16LL))(
          *(_QWORD*)(game_g_frame_clock + 13432), v27, v28, &v30_.v30, 255);
  if (v30_.v31 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v30_.v31);
  }
  if ((v33_.v33 & 1) != 0) {
  LABEL_59:
    if (v33_.v35 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v33_.v35);
    }
  }
}

_DWORD* wld_c44120(__int64* a1)
{

#pragma clang fp contract(off)
  int v1;
  char* v3;
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
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _DWORD* result;
  __int64 v32;
  _QWORD v33[2];

  v1 = *((unsigned __int8*)a1 + 224);
  *((_DWORD*)a1 + 2) = 0;
  if (v1 == 1) {
    if ((a1[25] & 1) != 0) {
      a1[26] = 10;
      v3 = (char*)a1[27];
    }
    else {
      *((_BYTE*)a1 + 200) = 20;
      v3 = (char*)a1 + 201;
    }
    strcpy(v3, "Outdoors_1");
    if (a1[97] == 0) {
      goto LABEL_12;
    }
  }
  else {
    *((_BYTE*)a1 + 200) = 20;
    strcpy((char*)a1 + 201, "Outdoors_1");
    *((_BYTE*)a1 + 224) = 1;
    if (a1[97] == 0) {
      goto LABEL_12;
    }
  }
  v4 = a1[99];
  a1[98] = 0;
  a1[99] = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  GameRoutine_634d80(*(_QWORD*)(a1[97] + 8), a1[97]);
  a1[97] = 0;
LABEL_12:
  v5 = *a1;
  LightingAnimModule_c687a0_alt1(*(_QWORD*)(*a1 + 392), 1);
  v6 = *(_QWORD*)(v5 + 360);
  v7 = *(_QWORD*)(v6 + 8);
  *(_DWORD*)(v6 + 48) = -1;
  *(_QWORD*)(v6 + 52) = 0;
  *(_DWORD*)(v6 + 80) = -1;
  *(_QWORD*)(v6 + 84) = 0;
  *(_DWORD*)(v6 + 92) = -1;
  *(_QWORD*)(v6 + 96) = 0;
  *(_BYTE*)(v6 + 192) = 0;
  *(_BYTE*)(v6 + 112) = 1;
  *(_OWORD*)(v6 + 32) = GameData_1a82c50;
  if (v7 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v7);
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
  }
  v10 = *a1;
  v11 = *(_QWORD*)(*a1 + 120);
  v12 = *(_QWORD*)(*a1 + 128);
  if (v11 != v12) {
    v13 = fw_memory_g_heap_manager_ptr;
    do {
      v14 = *(_QWORD*)(v12 - 40);
      v15 = v12;
      if (v14 != 0) {
        *(_QWORD*)(v12 - 32) = v14;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v16, v14);
      }
      v17 = *(_QWORD*)(v12 - 64);
      if (v17 != 0) {
        *(_QWORD*)(v12 - 56) = v17;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v18, v17);
      }
      v12 -= 96;
      if ((*(_BYTE*)(v15 - 96) & 1) != 0) {
        v19 = *(_QWORD*)(v15 - 80);
        if (v19 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
            v20 = 128;
          }
          else {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v20, v19);
        }
      }
    } while (v12 != v11);
  }
  *(_QWORD*)(v10 + 128) = v11;
  v21 = *(_QWORD*)(*a1 + 360);
  v22 = *(_QWORD*)(v21 + 8);
  if (v22 != 0) {
    v23 = std___1___shared_weak_count_lock_alt1(v22);
    if (v23 != 0) {
      if (*(_QWORD*)v21 != 0) {
        v24 = *(float*)(v21 + 76);
        *(_DWORD*)(v21 + 72) = 0;
        if (fabsf(v24) > 0x1.0000000000000p-23f) {
          *(_QWORD*)(v21 + 84) = 0;
          *(_QWORD*)(v21 + 96) = 0;
          *(_QWORD*)(v21 + 76) = 0xFFFFFFFF00000000LL;
          *(_DWORD*)(v21 + 92) = -1;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v25 = v23;
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt1(v25);
      }
    }
  }
  v26 = *(_QWORD*)(*a1 + 24);
  if (v26 != 0) {
    v27 = *(_QWORD*)(*a1 + 16);
    v28 = *(_QWORD*)(*a1 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 16), 1u,
                              memory_order_relaxed);
    v29 = std___1___shared_weak_count_lock_alt1(v28);
    std___1___shared_weak_count___release_weak_alt1(v26);
    if (v29 != 0) {
      if (v27 != 0) {
        GameRoutine_a85710(*(_QWORD*)(v27 + 288));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak_alt1(v29);
      }
    }
  }
  v30 = *a1;
  if (*(_BYTE*)(*a1 + 344) == 1) {
    *(_BYTE*)(v30 + 344) = 0;
    v30 = *a1;
  }
  v33[0] = 0;
  v33[1] = 0;
  result = GameRoutine_b86ea0((_DWORD*)v30, v33);
  if ((a1[3] & 1) == 0) {
    *((_WORD*)a1 + 12) = 0;
    if ((a1[6] & 1) != 0) {
      goto LABEL_52;
    }
  LABEL_55:
    *((_WORD*)a1 + 24) = 0;
    if ((a1[9] & 1) != 0) {
      goto LABEL_53;
    }
  LABEL_56:
    *((_WORD*)a1 + 36) = 0;
    goto LABEL_57;
  }
  *(_BYTE*)a1[5] = 0;
  a1[4] = 0;
  if ((a1[6] & 1) == 0) {
    goto LABEL_55;
  }
LABEL_52:
  *(_BYTE*)a1[8] = 0;
  a1[7] = 0;
  if ((a1[9] & 1) == 0) {
    goto LABEL_56;
  }
LABEL_53:
  *(_BYTE*)a1[11] = 0;
  a1[10] = 0;
LABEL_57:
  v32 = *a1;
  a1[2] = 0;
  *(_BYTE*)(v32 + 224) = 0;
  return result;
}

__int64 wld_d28c30(__int64 result, char a2)
{
  char v2;
  _BYTE* v3;
  __int64 v4;
  __int64* v5;
  _BYTE* v6;
  bool v7;

  if (*(_BYTE*)(result + 16) == (a2 & 1)) {
    return result;
  }
  *(_BYTE*)(result + 16) = a2 & 1;
  if ((a2 & 1) != 0) {
    v2 = 0;
  }
  else {
    v2 = 2;
  }
  *(_BYTE*)(result + 17) = *(_BYTE*)(result + 17) & 0xFD | v2;
  *(_BYTE*)(result + 18) = *(_BYTE*)(result + 18) & 0xFD | v2;
  *(_BYTE*)(result + 19) = *(_BYTE*)(result + 19) & 0xFD | v2;
  *(_BYTE*)(result + 20) = *(_BYTE*)(result + 20) & 0xFD | v2;
  v3 = *(_BYTE**)(result + 8);
  v3[632] = 0;
  v3[664] = 0;
  v3[696] = 0;
  v3[728] = 0;
  v4 = *(_QWORD*)result;
  if ((a2 & 1) == 0) {
    return (*(__int64 (**)(__int64))(v4 + 72))((__int64)result);
  }
  v5 = (__int64*)result;
  (*(void (**)(__int64))(v4 + 64))((__int64)result);
  v6 = (_BYTE*)v5[1];
  result = (__int64)v5;
  v7 = v6[300] == 3 && v6[301] == 3;
  if (v7 || v6[302] == 1) {
    v4 = *v5;
    return (*(__int64 (**)(__int64))(v4 + 72))((__int64)v5);
  }
  return result;
}

#pragma GCC visibility pop
