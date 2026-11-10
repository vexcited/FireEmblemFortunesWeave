#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* snd_fnd_calcCrc32Reverse(_BYTE* result, int);
_DWORD* snd_data_findFieldData(int*);
_QWORD* ConstructString_1901f0(_QWORD* result);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
_QWORD* HandlePtr_111ee0(_QWORD* result);
_QWORD* snd_clearStreams();
__attribute__((swiftcall)) void FileManager_10df70(PSEUDO_X8, __int64, __int64,
                                                   unsigned int);
__attribute__((swiftcall)) void FileManager_10e040(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void GameRoutine_119bb0(PSEUDO_X8, __int64 result,
                                                   __int64, __int64, int*,
                                                   __int64, __int64, __int64,
                                                   __int64);
__attribute__((swiftcall)) void
GameRoutine_119bb0_alt1(PSEUDO_X8, __int64 result, __int64, __int64, _DWORD*,
                        __int64, __int64, __int64, __int64,
                        long double) __asm__("GameRoutine_119bb0");
__attribute__((swiftcall)) void GroupCtrl_ecb80(PSEUDO_X8);
__attribute__((swiftcall)) void snd_131480_alt1(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD,
                                                _QWORD) __asm__("snd_131480");
__attribute__((swiftcall)) void snd_BGM_getFirstHandle(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_BGM_getFirstNameString(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_a2fe30(PSEUDO_X8, __int64, __int64*,
                                           const char*, char, char, char,
                                           __int64, __int64);
__attribute__((swiftcall)) void snd_findSlot_100a50(PSEUDO_X8, int*);
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    double, float) __asm__("snd_play_ff2d0");
__int64* GameRoutine_14b0a0(__int64*, __int64, unsigned __int64);
__int64* GameRoutine_14b380(__int64**, unsigned __int8*, __int64, __int64**);
__int64* GameRoutine_1900f0(__int64* result, __int64);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_9a28e0(int);
__int64 Crc32List_1130d0(void);
__int64 Crc32List_1130e0(void);
__int64 Crc32List_116350(void);
__int64 Crc32List_119830(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64);
__int64 Crc32List_119920(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64);
__int64 Crc32List_119a10(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64);
__int64 Crc32List_119b10(__int64);
__int64 Crc32List_119b10_alt1(_QWORD) __asm__("Crc32List_119b10");
__int64 Crc32List_11a290(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64, __int64);
__int64 Crc32List_11a290_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD,
                              _QWORD) __asm__("Crc32List_11a290");
__int64 Crc32List_11a390(__int64, __int64, __int64, __int64, __int64, __int64,
                         __int64, __int64);
__int64 Crc32List_11a480(__int64);
__int64 Crc32List_11acf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11adf0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11aef0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD, _QWORD);
__int64 Crc32List_11aff0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11b0f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD);
__int64 Crc32List_11b2e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11b3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD, _QWORD);
__int64 Crc32List_11c100(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11c230(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11c330(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11c460(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11dc80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11ddb0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Crc32List_11dee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, _QWORD);
__int64 Data_f6c20(int*, _QWORD*);
__int64 Data_f6c20_alt1(_QWORD, _QWORD, long double) __asm__("Data_f6c20");
__int64 Data_f6cc0(int*);
__int64 Data_f6cc0_alt1(_QWORD) __asm__("Data_f6cc0");
__int64 FileManager_10e120(__int64, __int64);
__int64 GameManager_a20000(__int64);
__int64 GameManager_a22bd0();
__int64 GameManager_a2adb0(__int64, __int64);
__int64 GameManager_a2bd50(__int64, unsigned __int8*, char);
__int64 GameManager_a2c3b0(__int64, const char*, const char*, char, char, char,
                           __int64);
__int64 GameManager_a2c4f0(_QWORD*, char*, const char*, char, char, char,
                           __int64);
__int64 GameManager_a2c6e0(__int64, unsigned __int8*, _BYTE*, float);
__int64 GameManager_a2c910(_DWORD*, __int64);
__int64 GameManager_a308c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           double, float);
__int64 GameManager_a308c0_alt1(__int64, __int64, char, int, int, int,
                                long double,
                                float) __asm__("GameManager_a308c0");
__int64 GameManager_a32960(__int64, unsigned __int8*, char, char, char,
                           __int64);
__int64 GameRoutine_1056a0(__int64, __int64, __int64, ...);
__int64 GameRoutine_10d050(__int64, __int64);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_112180_alt1(_QWORD, _QWORD) __asm__("GameRoutine_112180");
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_119040();
__int64 GameRoutine_119060();
__int64 GameRoutine_13ed60(__int64, _DWORD*);
__int64 GameRoutine_13ed60_alt1(_QWORD, _QWORD) __asm__("GameRoutine_13ed60");
__int64 GameRoutine_14ab40(__int64*, char*);
__int64 GameRoutine_14b260(__int64, unsigned __int8*);
__int64 GameRoutine_17ca40();
__int64 GameRoutine_17ca70();
__int64 GameRoutine_17caa0();
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_190240_alt1(_QWORD) __asm__("GameRoutine_190240");
__int64 GameRoutine_1905a40(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_610540(const char*, const char*);
__int64 GameRoutine_a1ba40();
__int64 GameRoutine_a1f1a0(void);
__int64 GameRoutine_a290c0(__int64 result, __int64, __int64, int, char, float);
__int64 GameRoutine_a290c0_alt1(__int64 result, __int64, __int64, unsigned int,
                                char, float) __asm__("GameRoutine_a290c0");
__int64 GameRoutine_a392e0(__int64, __int64, ...);
__int64 GameRoutine_e7cc0(__int64 result);
__int64 GameRoutine_e8270(__int64 result, __int64);
__int64 GameRoutine_e86f0(_QWORD*, unsigned __int8*, unsigned __int8*);
__int64 GameRoutine_ecb50(__int64, __int64);
__int64 GameRoutine_ecb70(__int64);
__int64 GameRoutine_ed5a0(_QWORD, _QWORD);
__int64 GameRoutine_ef600(_QWORD, _QWORD);
__int64 GameRoutine_f38b0(_QWORD);
__int64 GameRoutine_f3930(_QWORD);
__int64 GameRoutine_f39b0(_QWORD);
__int64 GameRoutine_f3a40(_QWORD);
__int64 GameRoutine_f57c0(int*);
__int64 GameRoutine_f57c0_alt1(_QWORD) __asm__("GameRoutine_f57c0");
__int64 GameRoutine_f5850(int, _QWORD*, char);
__int64 GameRoutine_f5850_alt1(void) __asm__("GameRoutine_f5850");
__int64 GameRoutine_f63e0(int*);
__int64 GameRoutine_f63e0_alt1(_QWORD,
                               long double) __asm__("GameRoutine_f63e0");
__int64 GameRoutine_f7060(__int64 result);
__int64 GameRoutine_f7060_alt1(_QWORD) __asm__("GameRoutine_f7060");
__int64 HandlePtr_1116c0(__int64*, __int64);
__int64 HandlePtr_111a00(__int64*);
__int64 Manager_1163c0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_CreateThread_1a0a7e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, _QWORD);
__int64 nn_os_GetCurrentCoreNumber(void);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_SetThreadName(_QWORD, _QWORD);
__int64 nn_os_StartThread(_QWORD);
__int64 nn_os_TryLockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_1190b0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                        _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD,
                        _DWORD) __asm__("snd_1190b0");
__int64 snd_1190b0_alt2(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                        _QWORD) __asm__("snd_1190b0");
__int64 snd_BGM_getFirstName(__int64);
__int64 snd_BGM_isFirstActive(__int64);
__int64 snd_BGM_releaseFirst(__int64 result);
__int64 snd_BGM_resetVolume(__int64 result);
__int64 snd_BGM_resumeMuteAll(__int64 result, __int64);
__int64 snd_BGM_stopTracks(__int64 result, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Fade_10cb00(__int64, unsigned __int8*);
__int64 snd_Fade_Fade_10cd70(__int64, __int64);
__int64 snd_Voice_registry(_QWORD);
__int64 snd_data_ef080(_QWORD, _QWORD);
__int64 snd_data_f0230(__int64, __int64, char*);
__int64 snd_data_f0230_alt1(__int64, __int64,
                            __int64) __asm__("snd_data_f0230");
__int64 snd_data_f3c60(_QWORD);
__int64 snd_data_findEffectData(_DWORD*);
__int64 snd_data_getMuseumData(_QWORD);
__int64 snd_data_getMuseumDataCount(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_get_alt1(_QWORD,
                                    float) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_get_alt2(_QWORD) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_reset(__int64);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
__int64 snd_fnd_WeakHandle_set_alt1(_QWORD,
                                    _QWORD) __asm__("snd_fnd_WeakHandle_set");
__int64 snd_fnd_calcCrc32_alt1(_QWORD, _QWORD) __asm__("snd_fnd_calcCrc32");
__int64 snd_getDefineInt(unsigned __int8*);
__int64 snd_getUnknown10();
__int64 snd_getUnknown38();
__int64 snd_playDirect_ff6f0(__int64, __int64, __int64, unsigned int,
                             unsigned int, int, float, float);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 snd_resetMasterVolume(__int64);
__int64 snd_setListenerIndex(int);
__int64 snd_setListenerPosition_100770();
__int64 snd_startBusVolume(__int64, unsigned int, unsigned int, float);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 snd_startVolume_1006d0(__int64*, unsigned int, __int64, float);
__int64 snd_unloadUnused();
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 sprintf(_QWORD, const char*, ...);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 long double) __asm__("snd_Fade_Fade_10c830");
__n128
    snd_fnd_calcCrc32Reverse_alt1(_QWORD,
                                  _QWORD) __asm__("snd_fnd_calcCrc32Reverse");
bool snd_BGM_checkFinished(__int64);
bool snd_Voice_hasFeature(__int64, unsigned int);
bool snd_Voice_hasSends(__int64);
bool snd_hasDefine(unsigned __int8*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
double snd_Fade_getTime(__int64);
double snd_getDefineValue(unsigned __int8*);
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212e220;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1aa49c1;
extern _UNKNOWN GameData_1ab3e06;
extern _UNKNOWN GameData_1ac6ccb;
extern _UNKNOWN GameData_1ada738;
extern _UNKNOWN GameData_1ade2f6;
extern _UNKNOWN GameData_21fa620;
extern __int16* GameData_21344c0[16];
extern __int16* GameData_21344f0[10];
extern __int16* GameData_2134528[3];
extern __int16* GameData_2134648[7];
extern __int16* GameData_2134658[5];
extern __int16* GameData_2134698[2];
extern __int16* snd_g_groupMutex_ptr[12];
extern __int16* snd_g_handleMutex_ptr;
extern __int16 GameData_2198f28;
extern __int64 (*GameData_1fbe0e0[])();
extern __int64 (*GameData_1fbe2f0[])();
extern __int64 (*GameData_1fbe3f0[])();
extern __int64 (*snd_ProxyMemSnd_vtable[])();
extern __int64 (*snd_ProxySnd_vtable[])();
extern __int64 (*snd_fnd_Vec3_vtable[])();
extern __int64* GameData_212e218;
extern __int64* GameData_212e248[2];
extern __int64* GameData_21309c8[5];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c96d8;
extern __int64 GameData_21fa618;
extern __int64 GameData_21fa7e0;
extern __int64 GameData_21fa7e8;
extern __int64 GameData_21fa7f0;
extern __int64 GameData_21fa810;
extern __int64 GameData_21fa818;
extern __int64 GameData_21fa860;
extern __int64 GameData_21fa868;
extern __int64 GameData_21fa8b0;
extern __int64 GameData_21fa8b8;
extern __int64 GameData_21fa968;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy;
extern __int64 snd_g_proxy_ptr[2];
extern __int64 snd_s_target;
extern char* GameData_2167420[13];
extern char* GameData_2167448[8];
extern char* GameData_2167448_alt1[] __asm__("GameData_2167448");
extern char GameData_1a9f09e;
extern char GameData_21fa848;
extern char GameData_21fa898;
extern char GameData_21fa8e8;
extern char GameData_21fa970[];
extern int GameData_21fa820;
extern int GameData_21fa870;
extern int GameData_21fa8c0;
extern int GameData_21fa938;
extern int GameData_21fa93c;
extern int GameData_21fa940;
extern int GameData_21fa944;
extern int GameData_21fa948;
extern int GameData_21fa960;
float Data_f6d50(void);
float snd_BGM_getFirstPlayPosition(__int64);
float snd_Fade_Fade_10cd70_alt1(_QWORD, _QWORD) __asm__("snd_Fade_Fade_10cd70");
float snd_fnd_calcAngle_fee00(__int64, __int64);
float snd_fnd_calcDistanceTo(float*, float*);
unsigned __int64* GameRoutine_1905100(unsigned __int64* result);
unsigned __int64 GameRoutine_190020(__int64*, char*);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_10b360();
void GameRoutine_10ba60();
void GameRoutine_ee660();
void __attribute__((noreturn)) GameRoutine_1119d0();
void __attribute__((noreturn)) GameRoutine_131460();
void __attribute__((noreturn)) GameRoutine_60a1f0(const char*);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_a36670(void);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
void __attribute__((noreturn)) String_60a250(const char*);
void snd_Fade_Fade_10c830(__int64, float);
void snd_Fade_Fade_10c910(__int64, int);
__int64 snd_ed320();
__int64 snd_10a1f0();
__int64 snd_10c320(__int64 a1, unsigned int a2, unsigned __int8* a3);
__int64 snd_10c7d0();
__int64 snd_10e820(__int64 a1);
__int64 snd_10fd70();
__int64 snd_110280(__int64 result);
__int64 snd_1124f0();
__attribute__((swiftcall)) void snd_1190b0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3,
                                           unsigned __int8* a4, __int64 a5,
                                           __int64 a6, __int64 a7);
__attribute__((swiftcall)) void snd_11a5d0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, _DWORD* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           long double a9);
__attribute__((swiftcall)) void snd_11b6e0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, _DWORD* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           __int64 a8, long double a10);
__attribute__((swiftcall)) void snd_11d8c0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, _DWORD* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           __int64 a8, long double a10);
__int64 snd_120f10(__int64 a1, __int64 a2);
__int64* snd_131280(__int64* result, unsigned __int64 a2);
__attribute__((swiftcall)) void snd_131480(PSEUDO_X8 x8_, __int64 unused_int0,
                                           __int64 a1, __int64* a2, __int64 a3);
__attribute__((swiftcall)) void snd_131640(PSEUDO_X8 x8_, unsigned int* result,
                                           __int64 a2, __int64 a3);
__attribute__((swiftcall)) void snd_1319c0(PSEUDO_X8 x8_, __int64 unused_int0,
                                           unsigned __int64* a1,
                                           unsigned int a2, __int64 a3,
                                           __int64 a4, __int64 a5);
__attribute__((swiftcall)) void snd_131b60(PSEUDO_X8 x8_,
                                           unsigned __int64* result,
                                           unsigned int a2, __int64 a3,
                                           unsigned int a4, __int64 a5);
__int64 snd_13f550();
__int64 snd_14ad40(__int64 a1, char* a2);
__attribute__((swiftcall)) void snd_190340(PSEUDO_X8 x8_, unsigned __int8* a1,
                                           unsigned int a2, int a3);
__int64 snd_a1bbe0();
bool snd_a28e10(__int64 a1, char a2);
__int64* snd_a292c0(__int64 a1, unsigned int a2, char a3);
__int64 snd_a2a770(__int64 a1, char a2);
__int64 snd_a2b3e0(__int64 a1, __int64 a2, unsigned __int64 a3, char* a4,
                   unsigned __int64 a5);
__int64 snd_a2bea0(__int64 a1);
__int64 snd_a2c9c0(__int64 result, __int64 a2);
unsigned __int64 snd_a2d2b0(__int64 a1, unsigned __int8* a2, char* a3, char* a4,
                            char a5, char a6, float a7);
__int64* snd_a2dc20(__int64* result, unsigned __int8* a2, _BYTE* a3, float a4);
__int64* snd_a2e0c0(__int64 a1, __int64 a2);
__int64 snd_a2e7c0(__int64 result);
__int64 snd_a2ede0(__int64 result, __int64 a2, unsigned __int64 a3, __int64 a4,
                   __int64 a5);
__int64 snd_a2f180(__int64 result, __int64 a2);
__int64 snd_a2f2a0(__int64 result, _BYTE* a2);
__int64 snd_a2fab0(__int64 result, __int64 a2);
__int64 snd_a2fc30(__int64 result, __int64 a2);
__attribute__((swiftcall)) void snd_a306d0(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2, __int64 a3);
__attribute__((swiftcall)) void snd_a307a0(PSEUDO_X8 x8_, __int64 unused_int0,
                                           _BYTE* a1, __int64 a2);
__attribute__((swiftcall)) void snd_a30960(PSEUDO_X8 x8_, __int64 unused_int0,
                                           _BYTE* a1, long double a3);
__int64 snd_a30c60(__int64 a1);
__int64 snd_a30db0(__int64 a1);
__int64 snd_a312c0(__int64 result, _BYTE* a2, __int64 a3);
__int64 snd_a31410(__int64 result, _BYTE* a2, __int64 a3);
__int64 snd_a33060(__int64 a1, int a2, int a3, unsigned __int8 a4, char* a5,
                   char* a6);
__int64 snd_a339e0(__int64 a1, unsigned __int8 a2, char* a3);
__attribute__((swiftcall)) void snd_a35e20(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2);
void __attribute__((noreturn)) snd_a36650();
void __attribute__((noreturn)) snd_a3a470();
void __attribute__((noreturn)) GameRoutine_131250();
__int64* snd_130f60(__int64* result, unsigned __int64 a2);

__int64 snd_ed320()
{
  __int16* v0;

  v0 = snd_g_groupMutex_ptr[0];
  *snd_g_groupMutex_ptr[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  nn_os_InitializeMutex(v0, 1, 0);
  return GameRoutine_2b0();
}

__int64 snd_10a1f0()
{
  __int16* v0;

  v0 = GameData_21344c0[0];
  *GameData_21344c0[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  nn_os_InitializeMutex(v0, 1, 0);
  return GameRoutine_2b0();
}

__int64 snd_10c320(__int64 a1, unsigned int a2, unsigned __int8* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v10;

  v10 = (unsigned int)snd_fnd_calcCrc32(a3, 0);
  v5 = snd_data_findEffectData(&v10);
  v6 = a1 + 360LL * (int)a2;
  v7 = *(_QWORD*)(v6 + 16);
  *(_QWORD*)(v6 + 48) = v7;
  if (v5 == 0) {
    return ((__int64 (*)(__int64, _QWORD))GameRoutine_10b360)(a1, a2);
  }
  v8 = v5;
  if (v5 != v7) {
    ((void (*)(__int64, _QWORD))GameRoutine_10b360)(a1, a2);
  }
  return ((__int64 (*)(__int64, _QWORD, __int64))GameRoutine_10ba60)(a1, a2,
                                                                     v8);
}

__int64 snd_10c7d0()
{
  __int16* v0;

  v0 = GameData_21344f0[0];
  *GameData_21344f0[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  nn_os_InitializeMutex(v0, 1, 0);
  return GameRoutine_2b0();
}

__int64 snd_10e820(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int16* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  unsigned __int64 v23;
  __int16* v24;
  __int64 v25;
  __int64 v26;
  _BYTE v28[16];
  struct {
    __int64 v29;
    int v30;
    char gap36_[4];
    __int64 v31;
  } v29_;

  nn_os_LockMutex(GameData_2134528[0]);
  v2 = *(_QWORD*)(a1 + 32);
  v3 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 64) = 0;
  *(_BYTE*)(a1 + 73) = 0;
  if (v3 != v2) {
    v4 = 0;
    v5 = GameData_2134528[0];
    do {
      v6 = *(__int64**)(v2 + 8 * v4);
      if (*((_DWORD*)v6 + 2) != 0) {
        ++*(_DWORD*)(a1 + 64);
        v7 = *v6;
        nn_os_LockMutex(v5);
        if (v7 != 0 &&
            (snd_fnd_WeakHandle_isValid((__int64*)(v7 + 24)) & 1) != 0) {
          v8 = snd_fnd_WeakHandle_get(v7 + 24);
          v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8);
          nn_os_UnlockMutex(v5);
          if ((v9 & 1) == 0 || *((_BYTE*)v6 + 16) != 1) {
            goto LABEL_4;
          }
          nn_os_LockMutex(v5);
          --*(_DWORD*)(*v6 + 40);
          *((_BYTE*)v6 + 16) = 0;
          *v6 = 0;
          v6[1] = 0;
        }
        nn_os_UnlockMutex(v5);
      }
    LABEL_4:
      v2 = *(_QWORD*)(a1 + 32);
      ++v4;
    } while (v4 < (*(_QWORD*)(a1 + 40) - v2) >> 3);
  }
  v10 = *(_QWORD*)(a1 + 8);
  v11 = *(_QWORD*)(a1 + 16);
  *(_BYTE*)(a1 + 72) = 0;
  if (v11 != v10) {
    v12 = 0;
    v13 = (_QWORD*)snd_g_proxy_ptr[0];
    v14 = snd_g_memory_ptr[0];
    do {
      v15 = *(_QWORD*)(v10 + 8 * v12);
      if (*(_DWORD*)(v15 + 40) != 0) {
        ++*(_DWORD*)(a1 + 68);
        if ((snd_fnd_WeakHandle_isValid((__int64*)(v15 + 24)) & 1) != 0) {
          v16 = snd_fnd_WeakHandle_get(v15 + 24);
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v16 + 56LL))(v16) & 1) ==
              0) {
            *(_BYTE*)(a1 + 72) = 1;
          }
        }
        else {
          ConstructString_1901f0(&v29_.v29);
          v17 = (const char*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*v13 + 136LL))(
              *v13);
          v18 = (const char*)GameRoutine_190240(v15);
          GameRoutine_a392e0((__int64)&v29_.v29, (__int64)"%s%s", v17, v18);
          if (*(_BYTE*)(v15 + 44) == 1) {
            v19 = GameRoutine_118ff0(*(_QWORD*)(a1 + 56));
            v20 = GameRoutine_190240((__int64)&v29_.v29);
            FileManager_10df70((void*)((__int64)v28), v19, v20, 0x40u);
            GameRoutine_112180(v15 + 24, (__int64)v28);
            v21 = snd_fnd_WeakHandle_get(v15 + 24);
            (*(void (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21);
          }
          v22 = v29_.v29;
          *(_BYTE*)(v15 + 44) = 0;
          *(_BYTE*)(a1 + 72) = 1;
          if ((v22 & 1) != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)*v14 + 24LL))(*v14,
                                                                    v29_.v31);
          }
        }
      }
      v10 = *(_QWORD*)(a1 + 8);
      v11 = *(_QWORD*)(a1 + 16);
      ++v12;
    } while (v12 < (v11 - v10) >> 3);
  }
  if (v11 != v10) {
    v23 = 0;
    v24 = GameData_2134528[0];
    do {
      v25 = *(_QWORD*)(v10 + 8 * v23);
      if (*(int*)(v25 + 40) <= 0 &&
          (snd_fnd_WeakHandle_isValid((__int64*)(v25 + 24)) & 1) != 0) {
        nn_os_LockMutex(v24);
        v26 = GameRoutine_118ff0(*(_QWORD*)(a1 + 56));
        FileManager_10e120(v26, v25 + 24);
        GameRoutine_190200(v25, &GameData_1a9f09e);
        v29_.v29 = 0;
        v29_.v30 = 0x2000;
        GameRoutine_112180(v25 + 24, (__int64)&v29_.v29);
        *(_DWORD*)(v25 + 40) = 0;
        *(_BYTE*)(v25 + 44) = 0;
        nn_os_UnlockMutex(v24);
      }
      v10 = *(_QWORD*)(a1 + 8);
      ++v23;
    } while (v23 < (*(_QWORD*)(a1 + 16) - v10) >> 3);
  }
  return nn_os_UnlockMutex(GameData_2134528[0]);
}

__int64 snd_10fd70()
{
  __int16* v0;

  v0 = GameData_2134528[0];
  *GameData_2134528[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  nn_os_InitializeMutex(v0, 1, 0);
  return GameRoutine_2b0();
}

__int64 snd_110280(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  __int64* v7;
  const char* v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int8* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  bool v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  bool v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64* v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64* v64;
  _QWORD* v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  _DWORD* v77;
  char v78;
  __int64* v79;
  int v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  bool v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  char v103;
  unsigned __int8* v104;
  __int64* v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned int v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  int* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64* v136;
  __int64 v137;
  unsigned __int64 v138;
  int v139;
  __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  __int64 v143;
  _QWORD* v144;
  _QWORD* v145;
  __int64 v146;
  __int64* v147;
  __int64 v148;
  int v149;
  __int64 v150;
  char v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  _BYTE v155[16];
  __int64 v156;
  struct {
    unsigned __int64 v157;
    unsigned __int64 v158;
    __int64 v159;
  } v157_;
  struct {
    __int64 v160;
    __int64 v161;
    _DWORD* v162;
    unsigned __int64 v163;
  } v160_;
  _QWORD v164[4];

  if ((*(_BYTE*)(result + 128) & 1) != 0) {
    return result;
  }
  v1 = result;
  *(_BYTE*)(result + 128) = 1;
  result = nn_os_TryLockMutex(result + 96);
  if ((result & 1) == 0) {
    goto LABEL_192;
  }
  v2 = *(_QWORD*)(v1 + 88);
  *(_BYTE*)(v1 + 129) = *(_BYTE*)(*snd_s_target_ptr + 17) | (v2 == 0);
  if (v2 == 0) {
    goto LABEL_191;
  }
  v3 = snd_g_memory_ptr[0];
  v150 = v1;
  do {
    while (1) {
      v4 = *(_QWORD*)(*(_QWORD*)(v1 + 80) + 16LL);
      v5 = *(_DWORD*)(v4 + 12);
      if (v5 == 0) {
        break;
      }
      *(_DWORD*)(v4 + 12) = v5 - 1;
      if (*(_QWORD*)(v1 + 88) == 0) {
        goto LABEL_191;
      }
    }
    v6 = *(_DWORD*)v4;
    v154 = *(_QWORD*)(*(_QWORD*)(v1 + 80) + 16LL);
    if (*(int*)v4 <= 1) {
      if (v6 == 0) {
        GameRoutine_119040();
        (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)snd_s_target + 320LL))(
            snd_s_target, *(unsigned int*)(v4 + 4), *(unsigned int*)(v4 + 8));
        GameRoutine_119060();
        goto LABEL_182;
      }
      if (v6 != 1) {
        goto LABEL_182;
      }
      v148 = *(_QWORD*)(v1 + 8);
      v149 = *(_DWORD*)(v1 + 64);
      ConstructString_1901f0(v164);
      v7 = (__int64*)(v4 + 16);
      v8 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy +
                                                  144LL))(snd_g_proxy);
      v9 = (const char*)GameRoutine_190240(v4 + 16);
      GameRoutine_1056a0((__int64)v164, 128, (__int64)"%s%s.bfgrp.bin", v8, v9);
      GameRoutine_190020(&v156, &GameData_1a9f09e);
      v11 = *(_QWORD*)(v1 + 32);
      v10 = *(_QWORD*)(v1 + 40);
      LODWORD(v157_.v159) = 0;
      v160_.v160 = 0;
      LODWORD(v160_.v161) = 0x2000;
      v160_.v162 = nullptr;
      v160_.v163 = 0;
      if (v10 == v11) {
        goto LABEL_110;
      }
      v147 = (__int64*)(v4 + 16);
      v12 = 0;
      v151 = 0;
      v13 = 0;
      v152 = v4 + 17;
      do {
        v64 = (__int64*)(v11 + v12);
        v65 = (_QWORD*)(v11 + v12 + 48);
        if (*v65 != 0) {
          v66 = *(unsigned __int8*)v64;
          v67 = v64[1];
          v68 = *(_QWORD*)(v4 + 24);
          if ((v66 & 1) != 0) {
            v69 = v64[1];
          }
          else {
            v69 = v66 >> 1;
          }
          v70 = *(unsigned __int8*)(v4 + 16);
          if ((v70 & 1) == 0) {
            v68 = v70 >> 1;
          }
          if (v69 == v68) {
            v71 = v4;
            v153 = v10;
            v72 = *(_QWORD*)(v11 + v12 + 16);
            if ((v66 & 1) != 0) {
              v73 = *(_QWORD*)(v11 + v12 + 16);
            }
            else {
              v73 = v11 + v12 + 1;
            }
            if ((v70 & 1) != 0) {
              v74 = *(_QWORD*)(v71 + 32);
            }
            else {
              v74 = v152;
            }
            if ((unsigned int)memcmp(v73, v74, v69) != 0) {
              v3 = &snd_g_memory;
              v10 = v153;
              v4 = v154;
            }
            else {
              if (v64 != &v156) {
                if ((v156 & 1) != 0) {
                  GameRoutine_a3a260(&v156, v73, v69);
                }
                else if ((v66 & 1) != 0) {
                  GameRoutine_a3a3a0(&v156, v72, v67);
                }
                else {
                  v75 = *v64;
                  v76 = v64[2];
                  v157_.v157 = v64[1];
                  v157_.v158 = v76;
                  v156 = v75;
                }
              }
              v62 = v11 + v12;
              LODWORD(v157_.v159) = *(_DWORD*)(v62 + 24);
              GameRoutine_112180((__int64)&v160_.v160, v62 + 32);
              v63 = v65[1];
              v160_.v162 = (_DWORD*)*v65;
              v160_.v163 = v63;
              GameRoutine_190200((__int64)v64, &GameData_1a9f09e);
              *(_DWORD*)(v62 + 24) = 0;
              snd_fnd_WeakHandle_reset(v62 + 32);
              *v65 = 0;
              v65[1] = 0;
              v11 = *(_QWORD*)(v150 + 32);
              v10 = *(_QWORD*)(v150 + 40);
              v151 = 1;
              v3 = snd_g_memory_ptr[0];
              v4 = v154;
            }
          }
        }
        ++v13;
        v12 += 64;
      } while (v13 < (v10 - v11) >> 6);
      v1 = v150;
      v7 = v147;
      if ((v151 & 1) == 0) {
      LABEL_110:
        v79 = &snd_s_target;
        if (&v156 != v7) {
          v81 = *(unsigned __int8*)v7;
          if ((v156 & 1) != 0) {
            v85 = (v81 & 1) == 0;
            v86 = v81 >> 1;
            if (v85) {
              v87 = v4 + 17;
            }
            else {
              v87 = *(_QWORD*)(v4 + 32);
            }
            if (v85) {
              v88 = v86;
            }
            else {
              v88 = *(_QWORD*)(v4 + 24);
            }
            GameRoutine_a3a260(&v156, v87, v88);
          }
          else if ((v81 & 1) != 0) {
            GameRoutine_a3a3a0(&v156, *(_QWORD*)(v4 + 32), *(_QWORD*)(v4 + 24));
          }
          else {
            v82 = v7[1];
            v156 = *v7;
            v157_.v157 = v82;
            v157_.v158 = v7[2];
          }
        }
        v111 = GameRoutine_118ff0(*(_QWORD*)(v1 + 56));
        v112 = GameRoutine_190240((__int64)v164);
        FileManager_10df70((void*)((__int64)v155), v111, v112, 0x20u);
        GameRoutine_112180((__int64)&v160_.v160, (__int64)v155);
        v113 = snd_fnd_WeakHandle_get((__int64)&v160_.v160);
        (*(void (**)(__int64))(*(_QWORD*)v113 + 40LL))(v113);
        nn_os_UnlockMutex(v1 + 96);
        v114 = snd_fnd_WeakHandle_get((__int64)&v160_.v160);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v114 + 56LL))(v114) & 1) ==
            0) {
          do {
            (*(void (**)(__int64, __int64))(*(_QWORD*)snd_s_target + 56LL))(
                snd_s_target, 1);
            v115 = snd_fnd_WeakHandle_get((__int64)&v160_.v160);
          } while (((*(__int64 (**)(__int64))(*(_QWORD*)v115 + 56LL))(v115) &
                    1) == 0);
        }
        nn_os_LockMutex(v1 + 96);
        v116 = snd_fnd_WeakHandle_get((__int64)&v160_.v160);
        v117 = (*(__int64 (**)(__int64))(*(_QWORD*)v116 + 80LL))(v116);
        v160_.v163 = v117;
        if (v117 <= 0x400) {
          v160_.v162 = nullptr;
          v160_.v163 = 0;
        LABEL_171:
          v134 = GameRoutine_118ff0(*(_QWORD*)(v1 + 56));
          FileManager_10e120(v134, (__int64)&v160_.v160);
          snd_fnd_WeakHandle_reset((__int64)&v160_.v160);
        LABEL_172:
          v135 = v148 + 56LL * v149;
          v136 = *(__int64**)(v135 - 16);
          if ((unsigned __int64)v136 >= *(_QWORD*)(v135 - 8)) {
            *(_QWORD*)(v135 - 16) =
                HandlePtr_1116c0((__int64*)(v135 - 24), (__int64)&v156);
            if ((v156 & 1) != 0) {
            LABEL_179:
              (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)*v3 + 24LL))(
                  *v3, v157_.v158);
            }
          }
          else {
            if ((v156 & 1) != 0) {
              GameRoutine_1905a40(*(__int64**)(v135 - 16), v157_.v158,
                                  v157_.v157);
            }
            else {
              v137 = v156;
              v138 = v157_.v158;
              v136[1] = v157_.v157;
              v136[2] = v138;
              *v136 = v137;
            }
            v139 = v157_.v159;
            v136[4] = 0;
            v140 = (__int64)(v136 + 4);
            *(_DWORD*)(v140 - 8) = v139;
            *(_DWORD*)(v140 + 8) = 0x2000;
            GameRoutine_112180(v140, (__int64)&v160_.v160);
            v141 = v160_.v163;
            *(_QWORD*)(v140 + 16) = v160_.v162;
            *(_QWORD*)(v140 + 24) = v141;
            *(_QWORD*)(v135 - 16) = v140 + 32;
            if ((v156 & 1) != 0) {
              goto LABEL_179;
            }
          }
          if ((v164[0] & 1) != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(*v3, v164[2]);
          }
          goto LABEL_182;
        }
        v118 = snd_s_target;
        v119 = snd_fnd_WeakHandle_get((__int64)&v160_.v160);
        v120 = (*(__int64 (**)(__int64))(*(_QWORD*)v119 + 72LL))(v119);
        v77 = (_DWORD*)(*(__int64 (**)(__int64, __int64, unsigned __int64,
                                       _QWORD))(*(_QWORD*)v118 + 392LL))(
            v118, v120, v160_.v163, 0);
        v160_.v162 = v77;
        if (v77 == nullptr) {
          v122 = *(_QWORD*)(v1 + 32);
          v121 = *(_QWORD*)(v1 + 40);
          if (v121 != v122) {
            v123 = 0;
            v124 = 0;
            do {
              v125 = v122 + v123;
              v126 = (_QWORD*)(v122 + v123 + 48);
              if (*v126 != 0) {
                v127 = snd_s_target;
                *(_QWORD*)(v125 + 48) = 0;
                (*(void (**)(__int64))(*(_QWORD*)v127 + 400LL))(v127);
                GameRoutine_190200(v125, &GameData_1a9f09e);
                *(_DWORD*)(v125 + 24) = 0;
                snd_fnd_WeakHandle_reset(v125 + 32);
                *v126 = 0;
                v126[1] = 0;
                v122 = *(_QWORD*)(v1 + 32);
                v121 = *(_QWORD*)(v1 + 40);
              }
              ++v124;
              v123 += 64;
            } while (v124 < (v121 - v122) >> 6);
          }
          v128 = snd_s_target;
          v129 = snd_fnd_WeakHandle_get((__int64)&v160_.v160);
          v130 = (*(__int64 (**)(__int64))(*(_QWORD*)v129 + 72LL))(v129);
          v77 = (_DWORD*)(*(__int64 (**)(__int64, __int64, unsigned __int64,
                                         _QWORD))(*(_QWORD*)v128 + 384LL))(
              v128, v130, v160_.v163, 0);
          v160_.v162 = v77;
        }
        v78 = 0;
        LODWORD(v157_.v159) = 0;
        v80 = *v77;
        if ((int)*v77 < 1) {
        LABEL_170:
          if ((v78 & 1) != 0) {
            goto LABEL_172;
          }
          goto LABEL_171;
        }
      }
      else {
        if (v160_.v163 <= 0x400) {
          v160_.v162 = nullptr;
          v160_.v163 = 0;
          goto LABEL_172;
        }
        v77 = v160_.v162;
        v78 = 1;
        v79 = snd_s_target_ptr;
        v80 = *v160_.v162;
        if ((int)*v160_.v162 < 1) {
          goto LABEL_170;
        }
      }
      v131 = v77 + 1;
      do {
        v133 = *v131;
        v132 = v131[1];
        v131 += 2;
        GameRoutine_119040();
        (*(void (**)(__int64, char*, __int64, _QWORD))(*(_QWORD*)*v79 + 328LL))(
            *v79, (char*)v77 + v133, v132, (unsigned int)v157_.v159);
        GameRoutine_119060();
        --v80;
      } while (v80 != 0);
      goto LABEL_170;
    }
    if (v6 == 2) {
      v53 = snd_s_target_ptr;
      if (0x6DB6DB6DB6DB6DB7LL *
              ((__int64)(*(_QWORD*)(v1 + 16) - *(_QWORD*)(v1 + 8)) >> 3) >
          (unsigned __int64)*(int*)(v1 + 64)) {
      LABEL_142:
        GameRoutine_119040();
        *(_DWORD*)(*(_QWORD*)(v1 + 8) + 56LL * *(int*)(v1 + 64)) =
            (*(__int64 (**)(__int64))(*(_QWORD*)*v53 + 304LL))(*v53);
        GameRoutine_119060();
        v104 = (unsigned __int8*)(v4 + 16);
        v3 = snd_g_memory_ptr[0];
        v105 = (__int64*)(*(_QWORD*)(v1 + 8) + 56LL * *(int*)(v1 + 64) + 8);
        if (v105 != (__int64*)(v4 + 16)) {
          v106 = *v104;
          if ((*(_BYTE*)v105 & 1) != 0) {
            if ((v106 & 1) != 0) {
              v109 = *(_QWORD*)(v4 + 32);
            }
            else {
              v109 = v4 + 17;
            }
            if ((v106 & 1) != 0) {
              v110 = *(_QWORD*)(v4 + 24);
            }
            else {
              v110 = v106 >> 1;
            }
            GameRoutine_a3a260(v105, v109, v110);
          }
          else if ((v106 & 1) != 0) {
            GameRoutine_a3a3a0(v105, *(_QWORD*)(v4 + 32), *(_QWORD*)(v4 + 24));
          }
          else {
            v107 = *(_QWORD*)v104;
            v108 = *(_QWORD*)(v4 + 32);
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 56LL * *(int*)(v1 + 64) + 16) =
                *(_QWORD*)(v4 + 24);
            v105[2] = v108;
            *v105 = v107;
          }
        }
        ++*(_DWORD*)(v1 + 64);
        goto LABEL_182;
      }
      v160_.v161 = 0;
      v160_.v162 = nullptr;
      v157_.v159 = 0;
      v160_.v160 = 0;
      v157_.v157 = 0;
      v157_.v158 = 0;
      v156 = 0;
      GameRoutine_190020((__int64*)&v157_.v157, &GameData_1a9f09e);
      v55 = *(_QWORD*)(v1 + 16);
      v54 = *(_QWORD*)(v1 + 24);
      v160_.v161 = 0;
      v160_.v162 = nullptr;
      v160_.v160 = 0;
      if (v55 >= v54) {
        v83 = HandlePtr_111a00((__int64*)(v1 + 8));
        v84 = v160_.v160;
        *(_QWORD*)(v1 + 16) = v83;
        if (v84 != 0) {
        LABEL_133:
          v100 = v160_.v161;
          v101 = v84;
          if (v84 != v160_.v161) {
            v102 = v160_.v161;
            do {
              v103 = *(_BYTE*)(v102 - 64);
              v102 -= 64;
              if ((v103 & 1) != 0) {
                (*(void (**)(__int64, _QWORD))(*(_QWORD*)snd_g_memory + 24LL))(
                    snd_g_memory, *(_QWORD*)(v100 - 48));
              }
              v100 = v102;
            } while (v102 != v84);
            v101 = v160_.v160;
          }
          v160_.v161 = v84;
          (*(void (**)(__int64, __int64))(*(_QWORD*)snd_g_memory + 24LL))(
              snd_g_memory, v101);
        }
      LABEL_140:
        if ((v157_.v157 & 1) != 0) {
          (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                         24LL))(*snd_g_memory_ptr[0],
                                                v157_.v159);
        }
        goto LABEL_142;
      }
      *(_DWORD*)v55 = v156;
      v56 = (__int64*)(v55 + 8);
      if ((v157_.v157 & 1) != 0) {
        GameRoutine_1905a40(v56, v157_.v159, v157_.v158);
        *(_QWORD*)(v55 + 40) = 0;
        *(_QWORD*)(v55 + 48) = 0;
        *(_QWORD*)(v55 + 32) = 0;
        v59 = v160_.v160;
        v60 = v160_.v161;
        v61 = v160_.v161 - v160_.v160;
        if (v160_.v161 == v160_.v160) {
          goto LABEL_132;
        }
      }
      else {
        v57 = v157_.v157;
        v58 = v157_.v159;
        *(_QWORD*)(v55 + 16) = v157_.v158;
        *(_QWORD*)(v55 + 24) = v58;
        *v56 = v57;
        *(_QWORD*)(v55 + 40) = 0;
        *(_QWORD*)(v55 + 48) = 0;
        *(_QWORD*)(v55 + 32) = 0;
        v59 = v160_.v160;
        v60 = v160_.v161;
        v61 = v160_.v161 - v160_.v160;
        if (v160_.v161 == v160_.v160) {
          goto LABEL_132;
        }
      }
      if (v61 < 0) {
        GameRoutine_1119d0();
      }
      v89 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v61,
                                                   32);
      v90 = 0;
      *(_QWORD*)(v55 + 32) = v89;
      *(_QWORD*)(v55 + 40) = v89;
      *(_QWORD*)(v55 + 48) = v89 + v61;
      do {
        v95 = (__int64*)(v59 + v90);
        v96 = (__int64*)(v89 + v90);
        if ((*(_BYTE*)(v59 + v90) & 1) != 0) {
          GameRoutine_1905a40(v96, v95[2], v95[1]);
        }
        else {
          v97 = *v95;
          v98 = v95[1];
          v99 = v95[2];
          v96[1] = v98;
          v96[2] = v99;
          *v96 = v97;
        }
        v91 = v59 + v90;
        v92 = *(_DWORD*)(v59 + v90 + 24);
        *(_QWORD*)(v89 + v90 + 32) = 0;
        v93 = v89 + v90 + 32;
        *(_DWORD*)(v93 - 8) = v92;
        *(_DWORD*)(v93 + 8) = 0x2000;
        GameRoutine_112180(v93, v59 + v90 + 32);
        v94 = *(_QWORD*)(v59 + v90 + 56);
        v90 += 64;
        *(_QWORD*)(v93 + 16) = *(_QWORD*)(v91 + 48);
        *(_QWORD*)(v93 + 24) = v94;
      } while (v59 + v90 != v60);
      *(_QWORD*)(v55 + 40) = v89 + v90;
    LABEL_132:
      v84 = v160_.v160;
      *(_QWORD*)(v1 + 16) = v55 + 56;
      if (v84 != 0) {
        goto LABEL_133;
      }
      goto LABEL_140;
    }
    if (v6 != 3) {
      goto LABEL_182;
    }
    v14 = v4 + 17;
    LOBYTE(v4) = 1;
    do {
      v15 = *(_QWORD*)(v1 + 8) + 56LL * *(int*)(v1 + 64);
      v16 = (__int64*)(v15 - 48);
      if ((*(_BYTE*)(v15 - 48) & 1) != 0) {
        GameRoutine_1905a40(&v156, *(_QWORD*)(v15 - 32), *(_QWORD*)(v15 - 40));
        v19 = *(unsigned __int8**)(v15 - 24);
        v20 = (_QWORD*)(v15 - 24);
        v21 = *(_QWORD*)(v15 - 16) - (_QWORD)v19;
        if (v21 != 0) {
        LABEL_20:
          v22 = v21 >> 6;
          while (*((_QWORD*)v19 + 6) == 0) {
            --v22;
            v19 += 64;
            if (v22 == 0) {
              goto LABEL_23;
            }
          }
          GameRoutine_119040();
          v35 = v19 + 48;
          (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*snd_s_target_ptr + 336LL))(
              *snd_s_target_ptr, *((_QWORD*)v19 + 6), *((_QWORD*)v19 + 7), 0);
          v36 = *(_QWORD*)(v1 + 32);
          v37 = *(_QWORD**)(v1 + 40);
          if (v37 == (_QWORD*)v36) {
          LABEL_51:
            if ((unsigned __int64)v37 >= *(_QWORD*)(v1 + 48)) {
              v41 = HandlePtr_1116c0((__int64*)(v1 + 32), (__int64)v19);
            }
            else {
              if ((*v19 & 1) != 0) {
                GameRoutine_1905a40(*(__int64**)(v1 + 40), *((_QWORD*)v19 + 2),
                                    *((_QWORD*)v19 + 1));
              }
              else {
                v39 = *(_QWORD*)v19;
                v40 = *((_QWORD*)v19 + 2);
                v37[1] = *((_QWORD*)v19 + 1);
                v37[2] = v40;
                *v37 = v39;
              }
              v45 = *((_DWORD*)v19 + 6);
              v37[4] = 0;
              v46 = (__int64)(v37 + 4);
              *(_DWORD*)(v46 - 8) = v45;
              *(_DWORD*)(v46 + 8) = 0x2000;
              GameRoutine_112180(v46, (__int64)(v19 + 32));
              v47 = *((_QWORD*)v19 + 7);
              v41 = v46 + 32;
              *(_QWORD*)(v46 + 16) = *v35;
              *(_QWORD*)(v46 + 24) = v47;
            }
            *(_QWORD*)(v1 + 40) = v41;
          }
          else {
            v38 = ((__int64)v37 - v36) >> 6;
            while (*(_QWORD*)(v36 + 48) != 0) {
              --v38;
              v36 += 64;
              if (v38 == 0) {
                goto LABEL_51;
              }
            }
            if ((unsigned __int8*)v36 != v19) {
              v42 = *v19;
              if ((*(_BYTE*)v36 & 1) != 0) {
                v48 = (v42 & 1) == 0;
                v49 = v42 >> 1;
                if (v48) {
                  v50 = (__int64)(v19 + 1);
                }
                else {
                  v50 = *((_QWORD*)v19 + 2);
                }
                if (v48) {
                  v51 = v49;
                }
                else {
                  v51 = *((_QWORD*)v19 + 1);
                }
                GameRoutine_a3a260((__int64*)v36, v50, v51);
              }
              else if ((v42 & 1) != 0) {
                GameRoutine_a3a3a0((_QWORD*)v36, *((_QWORD*)v19 + 2),
                                   *((_QWORD*)v19 + 1));
              }
              else {
                v43 = *(_QWORD*)v19;
                v44 = *((_QWORD*)v19 + 2);
                *(_QWORD*)(v36 + 8) = *((_QWORD*)v19 + 1);
                *(_QWORD*)(v36 + 16) = v44;
                *(_QWORD*)v36 = v43;
              }
            }
            *(_DWORD*)(v36 + 24) = *((_DWORD*)v19 + 6);
            GameRoutine_112180(v36 + 32, (__int64)(v19 + 32));
            v52 = *((_QWORD*)v19 + 7);
            *(_QWORD*)(v36 + 48) = *v35;
            *(_QWORD*)(v36 + 56) = v52;
          }
          GameRoutine_119060();
          *v35 = 0;
          LODWORD(v4) = 0;
          v28 = false;
          v3 = snd_g_memory_ptr[0];
          if ((v156 & 1) != 0) {
            goto LABEL_74;
          }
          continue;
        }
      }
      else {
        v17 = *v16;
        v18 = *(_QWORD*)(v15 - 32);
        v157_.v157 = *(_QWORD*)(v15 - 40);
        v157_.v158 = v18;
        v156 = v17;
        v19 = *(unsigned __int8**)(v15 - 24);
        v20 = (_QWORD*)(v15 - 24);
        v21 = *(_QWORD*)(v15 - 16) - (_QWORD)v19;
        if (v21 != 0) {
          goto LABEL_20;
        }
      }
    LABEL_23:
      if ((v4 & 1) == 0) {
        LODWORD(v4) = 0;
        v28 = false;
        if ((v156 & 1) == 0) {
          continue;
        }
      LABEL_74:
        (*(void (**)(__int64, unsigned __int64))(*(_QWORD*)*v3 + 24LL))(
            *v3, v157_.v158);
        continue;
      }
      v23 = snd_s_target_ptr;
      if ((*(_DWORD*)(v15 - 56) & 0x80000000) == 0) {
        GameRoutine_119040();
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v23 + 312LL))(
            *v23, *(unsigned int*)(v15 - 56));
        GameRoutine_119060();
      }
      *(_DWORD*)(v15 - 56) = 0;
      GameRoutine_190200((__int64)v16, &GameData_1a9f09e);
      v25 = *(_QWORD*)(v15 - 24);
      v24 = *(_QWORD*)(v15 - 16);
      if (v25 != v24) {
        v26 = *(_QWORD*)(v15 - 16);
        do {
          v27 = *(_BYTE*)(v26 - 64);
          v26 -= 64;
          if ((v27 & 1) != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
                *v3, *(_QWORD*)(v24 - 48));
          }
          v24 = v26;
        } while (v26 != v25);
      }
      *(_QWORD*)(v15 - 16) = v25;
      HandlePtr_111ee0(v20);
      v29 = v157_.v157;
      --*(_DWORD*)(v1 + 64);
      if ((v156 & 1) != 0) {
        v30 = v29;
      }
      else {
        v30 = (unsigned __int64)(unsigned __int8)v156 >> 1;
      }
      v31 = *(unsigned __int8*)(v154 + 16);
      v32 = *(_QWORD*)(v154 + 24);
      if ((v31 & 1) == 0) {
        v32 = v31 >> 1;
      }
      if (v30 != v32) {
        LODWORD(v4) = 1;
        v28 = true;
        if ((v156 & 1) == 0) {
          continue;
        }
        goto LABEL_74;
      }
      if ((v156 & 1) != 0) {
        v33 = (char*)v157_.v158;
      }
      else {
        v33 = (char*)&v156 + 1;
      }
      if ((v31 & 1) != 0) {
        v34 = *(_QWORD*)(v154 + 32);
      }
      else {
        v34 = v14;
      }
      LODWORD(v4) = 1;
      v28 = (unsigned int)memcmp(v33, v34, v30) != 0;
      if ((v156 & 1) != 0) {
        goto LABEL_74;
      }
    } while (v28);
    if ((_DWORD)v4 == 0) {
      break;
    }
  LABEL_182:
    v142 = *(_QWORD*)(v1 + 80);
    v143 = *(_QWORD*)(v142 + 16);
    *(_QWORD*)(v142 + 16) = 0;
    if (v143 != 0) {
      if ((*(_BYTE*)(v143 + 16) & 1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
            *v3, *(_QWORD*)(v143 + 32));
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)*v3 + 24LL))(*v3, v143);
    }
    v144 = *(_QWORD**)(v1 + 80);
    v145 = (_QWORD*)v144[1];
    *(_QWORD*)(*v144 + 8LL) = v145;
    *v145 = *v144;
    --*(_QWORD*)(v1 + 88);
    v146 = v144[2];
    v144[2] = 0;
    if (v146 != 0) {
      if ((*(_BYTE*)(v146 + 16) & 1) != 0) {
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
            *v3, *(_QWORD*)(v146 + 32));
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)*v3 + 24LL))(*v3, v146);
    }
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)*v3 + 24LL))(*v3, v144);
  } while (*(_QWORD*)(v1 + 88) != 0);
LABEL_191:
  result = nn_os_UnlockMutex(v1 + 96);
LABEL_192:
  *(_BYTE*)(v1 + 128) = 0;
  return result;
}

__int64 snd_1124f0()
{
  __int16* v0;

  v0 = snd_g_handleMutex_ptr;
  *snd_g_handleMutex_ptr = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  nn_os_InitializeMutex(v0, 1, 0);
  return GameRoutine_2b0();
}

__attribute__((swiftcall)) void snd_1190b0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3,
                                           unsigned __int8* a4, __int64 a5,
                                           __int64 a6, __int64 a7)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int* v28;
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
  int v47;
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
  unsigned int v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int16 v62;
  unsigned __int8* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
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
  struct {
    _BYTE v91[200];
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
  } v91_;
  struct {
    _BYTE v97[200];
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
  } v97_;
  _QWORD v103[30];
  struct {
    unsigned int v104;
    unsigned int v105;
    char gap744_[192];
    __int64 v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
  } v104_;
  struct {
    _BYTE v111[200];
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
    __int64 v116;
  } v111_;
  __int64 v117;
  __int64 v118;
  struct {
    _BYTE v119[200];
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
  } v119_;
  struct {
    _BYTE v125[200];
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
  } v125_;
  struct {
    _BYTE v131[200];
    __int64 v132;
    __int64 v133;
    __int64 v134;
    __int64 v135;
    __int64 v136;
  } v131_;
  int v137[4];

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a8 = 0;
    *(_DWORD*)(a8 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  v15 = result;
  v137[0] = (unsigned int)snd_fnd_calcCrc32(a4, 0);
  v137[1] = (unsigned int)snd_fnd_calcCrc32Reverse(a4, 0);
  v16 = GameRoutine_f63e0(v137);
  if (v16 == -1) {
    v18 = GameRoutine_f57c0(v137);
    if (v18 == -1) {
      v47 = GameRoutine_13ed60(*(_QWORD*)(v15 + 2184), v137);
      if (v47 == -1) {
        v47 = Data_f6cc0(v137);
      }
      v17 = v47 | 0x8000000;
      if (v17 == -1) {
        goto LABEL_43;
      }
    }
    else {
      v17 = v18 | 0x1000000;
      if (v17 == -1) {
      LABEL_43:
        v48 = snd_fnd_WeakHandle_get(a2);
        if (v48 != 0) {
          v49 = v48 - 5592;
        }
        else {
          v49 = 0;
        }
        v50 = snd_fnd_WeakHandle_get(a5);
        if (v50 != 0) {
          v51 = v50 - 5592;
        }
        else {
          v51 = 0;
        }
        snd_Fade_Fade_10cd70((__int64)v131_.v131, a6);
        v52 = *(_QWORD*)(a6 + 224);
        v131_.v134 = *(_QWORD*)(a6 + 216);
        v131_.v135 = v52;
        v131_.v136 = *(_QWORD*)(a6 + 232);
        v53 = *(_QWORD*)(a6 + 208);
        v131_.v132 = *(_QWORD*)(a6 + 200);
        v131_.v133 = v53;
        v54 = snd_fnd_WeakHandle_get(a7);
        if (v54 != 0) {
          v55 = v54 - 5592;
        }
        else {
          v55 = 0;
        }
        v27 = Crc32List_119830(v15 + 2440, v15, v49, a3, (__int64)a4, v51,
                               (__int64)v131_.v131, v55);
        v28 = (unsigned int*)v131_.v131;
        goto LABEL_53;
      }
    }
  }
  else {
    v17 = v16 | 0x2000000;
    if (v17 == -1) {
      goto LABEL_43;
    }
  }
  if ((v17 & 0x2000000) != 0) {
    v29 = snd_fnd_WeakHandle_get(a2);
    if (v29 != 0) {
      v30 = v29 - 5592;
    }
    else {
      v30 = 0;
    }
    v31 = snd_fnd_WeakHandle_get(a5);
    if (v31 != 0) {
      v32 = v31 - 5592;
    }
    else {
      v32 = 0;
    }
    snd_Fade_Fade_10cd70((__int64)v125_.v125, a6);
    v33 = *(_QWORD*)(a6 + 224);
    v125_.v128 = *(_QWORD*)(a6 + 216);
    v34 = *(_QWORD*)(a6 + 232);
    v125_.v129 = v33;
    v125_.v130 = v34;
    v35 = *(_QWORD*)(a6 + 200);
    v125_.v127 = *(_QWORD*)(a6 + 208);
    v125_.v126 = v35;
    v36 = snd_fnd_WeakHandle_get(a7);
    if (v36 != 0) {
      v37 = v36 - 5592;
    }
    else {
      v37 = 0;
    }
    v27 = Crc32List_119920(v15 + 2520, v15, v30, a3, (__int64)a4, v32,
                           (__int64)v125_.v125, v37);
    v28 = (unsigned int*)v125_.v125;
  }
  else if ((v17 & 0x8000000) != 0) {
    v38 = snd_fnd_WeakHandle_get(a2);
    if (v38 != 0) {
      v39 = v38 - 5592;
    }
    else {
      v39 = 0;
    }
    v40 = snd_fnd_WeakHandle_get(a5);
    if (v40 != 0) {
      v41 = v40 - 5592;
    }
    else {
      v41 = 0;
    }
    snd_Fade_Fade_10cd70((__int64)v119_.v119, a6);
    v42 = *(_QWORD*)(a6 + 224);
    v119_.v122 = *(_QWORD*)(a6 + 216);
    v43 = *(_QWORD*)(a6 + 232);
    v119_.v123 = v42;
    v119_.v124 = v43;
    v44 = *(_QWORD*)(a6 + 200);
    v119_.v121 = *(_QWORD*)(a6 + 208);
    v119_.v120 = v44;
    v45 = snd_fnd_WeakHandle_get(a7);
    v46 = v45 - 5592;
    if (v45 == 0) {
      v46 = 0;
    }
    v27 = Crc32List_119a10(v15 + 2760, v15, v39, a3, (__int64)a4, 0, v41,
                           (__int64)v119_.v119, v46);
    v28 = (unsigned int*)v119_.v119;
  }
  else if ((v17 & 0x1000000) != 0) {
    v56 = GameRoutine_f5850(v17, &v118, 0);
    v57 = v56;
    if (*(_DWORD*)(v56 + 132) != 0) {
      v58 = Crc32List_119b10(v15 + 2840);
      snd_data_f0230(v58, v57, (char*)a4);
      v59 = *(_DWORD*)(v57 + 36);
      v104_.v104 = *(_DWORD*)(v57 + 32);
      v104_.v105 = v59;
      GameRoutine_119bb0((void*)(a8), v15, a2, a3, (int*)&v104_.v104, v58, a5,
                         a6, a7);
      GameRoutine_f7060(v58);
      nn_os_LockMutex(v15 + 2880);
      v60 = *(_QWORD*)(v15 + 2864);
      v61 = (v58 - *(_QWORD*)(v15 + 2856)) / 0x298uLL;
      v62 = *(_WORD*)(v15 + 2872) - 1;
      *(_WORD*)(v15 + 2872) = v62;
      *(_WORD*)(v60 + 2LL * v62) = v61;
      {
        nn_os_UnlockMutex(v15 + 2880);
        return;
      }
    }
    v63 = *(unsigned __int8**)(v56 + 24);
    v104_.v104 = (unsigned int)snd_fnd_calcCrc32(v63, 0);
    v104_.v105 = (unsigned int)snd_fnd_calcCrc32Reverse(v63, 0);
    if (Data_f6c20((int*)&v104_.v104, &v117) != 0) {
      v64 = snd_fnd_WeakHandle_get(a2);
      v65 = *(_QWORD*)(v57 + 24);
      if (v64 != 0) {
        v66 = v64 - 5592;
      }
      else {
        v66 = 0;
      }
      v67 = snd_fnd_WeakHandle_get(a5);
      if (v67 != 0) {
        v68 = v67 - 5592;
      }
      else {
        v68 = 0;
      }
      snd_Fade_Fade_10cd70((__int64)v111_.v111, a6);
      v69 = *(_QWORD*)(a6 + 224);
      v111_.v114 = *(_QWORD*)(a6 + 216);
      v70 = *(_QWORD*)(a6 + 232);
      v111_.v115 = v69;
      v111_.v116 = v70;
      v71 = *(_QWORD*)(a6 + 200);
      v111_.v113 = *(_QWORD*)(a6 + 208);
      v111_.v112 = v71;
      v72 = snd_fnd_WeakHandle_get(a7);
      v73 = v72 - 5592;
      if (v72 == 0) {
        v73 = 0;
      }
      v27 = Crc32List_11a290(v15 + 2760, v15, v66, a3, v65, v57, v68,
                             (__int64)v111_.v111, v73);
      v28 = (unsigned int*)v111_.v111;
    }
    else if (*(int*)(v57 + 480) < 1) {
      v83 = snd_fnd_WeakHandle_get(a2);
      if (v83 != 0) {
        v84 = v83 - 5592;
      }
      else {
        v84 = 0;
      }
      v85 = snd_fnd_WeakHandle_get(a5);
      if (v85 != 0) {
        v86 = v85 - 5592;
      }
      else {
        v86 = 0;
      }
      snd_Fade_Fade_10cd70((__int64)v97_.v97, a6);
      v87 = *(_QWORD*)(a6 + 224);
      v97_.v100 = *(_QWORD*)(a6 + 216);
      v97_.v101 = v87;
      v97_.v102 = *(_QWORD*)(a6 + 232);
      v88 = *(_QWORD*)(a6 + 208);
      v97_.v98 = *(_QWORD*)(a6 + 200);
      v97_.v99 = v88;
      v89 = snd_fnd_WeakHandle_get(a7);
      if (v89 != 0) {
        v90 = v89 - 5592;
      }
      else {
        v90 = 0;
      }
      v27 = Crc32List_119830(v15 + 2440, v15, v84, a3, (__int64)a4, v86,
                             (__int64)v97_.v97, v90);
      v28 = (unsigned int*)v97_.v97;
    }
    else {
      snd_Fade_Fade_10cd70((__int64)&v104_.v104, a6);
      v74 = *(_QWORD*)(a6 + 216);
      v104_.v109 = *(_QWORD*)(a6 + 224);
      v75 = *(_QWORD*)(a6 + 232);
      v104_.v108 = v74;
      v104_.v110 = v75;
      v76 = *(_QWORD*)(a6 + 200);
      v104_.v107 = *(_QWORD*)(a6 + 208);
      v104_.v106 = v76;
      BYTE2(v104_.v109) = 1;
      v77 = snd_fnd_WeakHandle_get(a2);
      if (v77 != 0) {
        v78 = v77 - 5592;
      }
      else {
        v78 = 0;
      }
      v79 = snd_fnd_WeakHandle_get(a5);
      if (v79 != 0) {
        v80 = v79 - 5592;
      }
      else {
        v80 = 0;
      }
      snd_Fade_Fade_10cd70((__int64)v103, (__int64)&v104_.v104);
      v103[27] = v104_.v108;
      v103[28] = v104_.v109;
      v103[29] = v104_.v110;
      v103[25] = v104_.v106;
      v103[26] = v104_.v107;
      v81 = snd_fnd_WeakHandle_get(a7);
      if (v81 != 0) {
        v82 = v81 - 5592;
      }
      else {
        v82 = 0;
      }
      v27 = Crc32List_11a390(v15 + 2600, v15, v78, a3, (__int64)a4, v80,
                             (__int64)v103, v82);
      snd_Fade_Destroy_Fade(v103);
      v28 = &v104_.v104;
    }
  }
  else {
    v19 = snd_fnd_WeakHandle_get(a2);
    if (v19 != 0) {
      v20 = v19 - 5592;
    }
    else {
      v20 = 0;
    }
    v21 = snd_fnd_WeakHandle_get(a5);
    if (v21 != 0) {
      v22 = v21 - 5592;
    }
    else {
      v22 = 0;
    }
    snd_Fade_Fade_10cd70((__int64)v91_.v91, a6);
    v23 = *(_QWORD*)(a6 + 224);
    v91_.v94 = *(_QWORD*)(a6 + 216);
    v91_.v95 = v23;
    v91_.v96 = *(_QWORD*)(a6 + 232);
    v24 = *(_QWORD*)(a6 + 208);
    v91_.v92 = *(_QWORD*)(a6 + 200);
    v91_.v93 = v24;
    v25 = snd_fnd_WeakHandle_get(a7);
    if (v25 != 0) {
      v26 = v25 - 5592;
    }
    else {
      v26 = 0;
    }
    v27 = Crc32List_119830(v15 + 2440, v15, v20, a3, (__int64)a4, v22,
                           (__int64)v91_.v91, v26);
    v28 = (unsigned int*)v91_.v91;
  }
LABEL_53:
  snd_Fade_Destroy_Fade(v28);
  if (*(_BYTE*)(a6 + 223) == 1) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 200LL))(v27);
  }
  nn_os_LockMutex(&GameData_2198f28);
  (*(void (**)(__int64))(*(_QWORD*)v27 + 760LL))(v27);
  nn_os_UnlockMutex(&GameData_2198f28);
  Crc32List_11a480(v15);
  *(_QWORD*)a8 = 0;
  *(_DWORD*)(a8 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a8, v27 + 5592);
    return;
  }
}

__attribute__((swiftcall)) void snd_11a5d0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, _DWORD* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           long double a9)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v16;
  int v17;
  float v18;
  int v19;
  int v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  float v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  float v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  float v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  __int64 v58;
  float v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  float v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  long double v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  long double v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int16 v77;
  __int64 v78;
  long double v79;
  int v80;
  float v81;
  __int64 v82;
  float v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  float v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  float v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  float v99;
  __int64 v100;
  int v101;
  __int64 v102;
  __int64 v103;
  float v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  float v108;
  __int64 v109;
  int v110;
  __int64 v111;
  __int64 v112;
  float v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  _BYTE v118[200];
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  _BYTE v124[200];
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  _DWORD v130[2];
  _BYTE v131[200];
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  _DWORD v137[2];
  int v138;
  int v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  _BYTE v145[200];
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  _BYTE v151[8];
  _BYTE v152[200];
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  _DWORD v158[2];
  _BYTE v159[200];
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  _DWORD v165[2];
  _BYTE v166[200];
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  _DWORD v172[4];

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a8 = 0;
    *(_DWORD*)(a8 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  v16 = result;
  v17 = GameRoutine_f63e0_alt1(a4, a9);
  if (v17 == -1) {
    v20 = GameRoutine_f57c0_alt1(a4);
    if (v20 == -1) {
      v57 = GameRoutine_13ed60_alt1(*(_QWORD*)(v16 + 2184), a4);
      if (v57 == -1) {
        v57 = Data_f6cc0_alt1(a4);
      }
      v19 = v57 | 0x8000000;
      if (v19 == -1) {
        goto LABEL_42;
      }
    }
    else {
      v19 = v20 | 0x1000000;
      if (v19 == -1) {
      LABEL_42:
        v58 = snd_fnd_WeakHandle_get_alt1(a2, v18);
        if (v58 != 0) {
          v60 = v58 - 5592;
        }
        else {
          v60 = 0;
        }
        v61 = a4[1];
        v172[0] = *a4;
        v172[1] = v61;
        v62 = snd_fnd_WeakHandle_get_alt1(a5, v59);
        if (v62 != 0) {
          v63 = v62 - 5592;
        }
        else {
          v63 = 0;
        }
        v64 = snd_Fade_Fade_10cd70_alt1(v166, a6);
        v65 = *(_QWORD*)(a6 + 224);
        v169 = *(_QWORD*)(a6 + 216);
        v170 = v65;
        v171 = *(_QWORD*)(a6 + 232);
        v66 = *(_QWORD*)(a6 + 208);
        v167 = *(_QWORD*)(a6 + 200);
        v168 = v66;
        v67 = snd_fnd_WeakHandle_get_alt1(a7, v64);
        v68 = v67 - 5592;
        if (v67 == 0) {
          v68 = 0;
        }
        v31 =
            Crc32List_11acf0(v16 + 2440, v16, v60, a3, v172, 0, v63, v166, v68);
        v32 = (int*)v166;
        goto LABEL_51;
      }
    }
  }
  else {
    v19 = v17 | 0x2000000;
    if (v19 == -1) {
      goto LABEL_42;
    }
  }
  if ((v19 & 0x2000000) != 0) {
    v33 = snd_fnd_WeakHandle_get_alt1(a2, v18);
    if (v33 != 0) {
      v35 = v33 - 5592;
    }
    else {
      v35 = 0;
    }
    v36 = a4[1];
    v165[0] = *a4;
    v165[1] = v36;
    v37 = snd_fnd_WeakHandle_get_alt1(a5, v34);
    if (v37 != 0) {
      v38 = v37 - 5592;
    }
    else {
      v38 = 0;
    }
    v39 = snd_Fade_Fade_10cd70_alt1(v159, a6);
    v40 = *(_QWORD*)(a6 + 224);
    v162 = *(_QWORD*)(a6 + 216);
    v41 = *(_QWORD*)(a6 + 232);
    v163 = v40;
    v164 = v41;
    v42 = *(_QWORD*)(a6 + 200);
    v161 = *(_QWORD*)(a6 + 208);
    v160 = v42;
    v43 = snd_fnd_WeakHandle_get_alt1(a7, v39);
    v44 = v43 - 5592;
    if (v43 == 0) {
      v44 = 0;
    }
    v31 = Crc32List_11adf0(v16 + 2520, v16, v35, a3, v165, 0, v38, v159, v44);
    v32 = (int*)v159;
  }
  else if ((v19 & 0x8000000) != 0) {
    v45 = snd_fnd_WeakHandle_get_alt1(a2, v18);
    if (v45 != 0) {
      v47 = v45 - 5592;
    }
    else {
      v47 = 0;
    }
    v48 = a4[1];
    v158[0] = *a4;
    v158[1] = v48;
    v49 = snd_fnd_WeakHandle_get_alt1(a5, v46);
    if (v49 != 0) {
      v50 = v49 - 5592;
    }
    else {
      v50 = 0;
    }
    v51 = snd_Fade_Fade_10cd70_alt1(v152, a6);
    v52 = *(_QWORD*)(a6 + 224);
    v155 = *(_QWORD*)(a6 + 216);
    v53 = *(_QWORD*)(a6 + 232);
    v156 = v52;
    v157 = v53;
    v54 = *(_QWORD*)(a6 + 200);
    v154 = *(_QWORD*)(a6 + 208);
    v153 = v54;
    v55 = snd_fnd_WeakHandle_get_alt1(a7, v51);
    v56 = v55 - 5592;
    if (v55 == 0) {
      v56 = 0;
    }
    v31 =
        Crc32List_11aef0(v16 + 2760, v16, v47, a3, v158, 0, 0, v50, v152, v56);
    v32 = (int*)v152;
  }
  else if ((v19 & 0x1000000) != 0) {
    v70 = GameRoutine_f5850_alt1();
    v71 = v70;
    if (*(_DWORD*)(v70 + 132) != 0) {
      v72 = Crc32List_119b10_alt1(v16 + 2840);
      snd_data_f0230_alt1(v72, v71, 0);
      v73 = *(_DWORD*)(v71 + 36);
      v138 = *(_DWORD*)(v71 + 32);
      v139 = v73;
      GameRoutine_119bb0_alt1((void*)(a8), v16, a2, a3, &v138, v72, a5, a6, a7,
                              v74);
      GameRoutine_f7060_alt1(v72);
      nn_os_LockMutex(v16 + 2880);
      v75 = *(_QWORD*)(v16 + 2864);
      v76 = (v72 - *(_QWORD*)(v16 + 2856)) / 0x298uLL;
      v77 = *(_WORD*)(v16 + 2872) - 1;
      *(_WORD*)(v16 + 2872) = v77;
      *(_WORD*)(v75 + 2LL * v77) = v76;
      {
        nn_os_UnlockMutex(v16 + 2880);
        return;
      }
    }
    v78 = *(_QWORD*)(v70 + 24);
    v138 = snd_fnd_calcCrc32_alt1(v78, 0);
    *(__n128*)&v79 = snd_fnd_calcCrc32Reverse_alt1(v78, 0);
    v139 = v80;
    if (Data_f6c20_alt1(&v138, v151, v79) != 0) {
      v82 = snd_fnd_WeakHandle_get_alt1(a2, v81);
      v84 = *(_QWORD*)(v71 + 24);
      if (v82 != 0) {
        v85 = v82 - 5592;
      }
      else {
        v85 = 0;
      }
      v86 = snd_fnd_WeakHandle_get_alt1(a5, v83);
      if (v86 != 0) {
        v87 = v86 - 5592;
      }
      else {
        v87 = 0;
      }
      v88 = snd_Fade_Fade_10cd70_alt1(v145, a6);
      v89 = *(_QWORD*)(a6 + 224);
      v148 = *(_QWORD*)(a6 + 216);
      v90 = *(_QWORD*)(a6 + 232);
      v149 = v89;
      v150 = v90;
      v91 = *(_QWORD*)(a6 + 200);
      v147 = *(_QWORD*)(a6 + 208);
      v146 = v91;
      v92 = snd_fnd_WeakHandle_get_alt1(a7, v88);
      v93 = v92 - 5592;
      if (v92 == 0) {
        v93 = 0;
      }
      v31 = Crc32List_11a290_alt1(v16 + 2760, v16, v85, a3, v84, v71, v87, v145,
                                  v93);
      v32 = (int*)v145;
    }
    else if (*(int*)(v71 + 480) < 1) {
      v107 = snd_fnd_WeakHandle_get_alt1(a2, v81);
      if (v107 != 0) {
        v109 = v107 - 5592;
      }
      else {
        v109 = 0;
      }
      v110 = a4[1];
      v130[0] = *a4;
      v130[1] = v110;
      v111 = snd_fnd_WeakHandle_get_alt1(a5, v108);
      if (v111 != 0) {
        v112 = v111 - 5592;
      }
      else {
        v112 = 0;
      }
      v113 = snd_Fade_Fade_10cd70_alt1(v124, a6);
      v114 = *(_QWORD*)(a6 + 224);
      v127 = *(_QWORD*)(a6 + 216);
      v128 = v114;
      v129 = *(_QWORD*)(a6 + 232);
      v115 = *(_QWORD*)(a6 + 208);
      v125 = *(_QWORD*)(a6 + 200);
      v126 = v115;
      v116 = snd_fnd_WeakHandle_get_alt1(a7, v113);
      v117 = v116 - 5592;
      if (v116 == 0) {
        v117 = 0;
      }
      v31 = Crc32List_11acf0(v16 + 2440, v16, v109, a3, v130, 0, v112, v124,
                             v117);
      v32 = (int*)v124;
    }
    else {
      v94 = snd_Fade_Fade_10cd70_alt1(&v138, a6);
      v95 = *(_QWORD*)(a6 + 216);
      v143 = *(_QWORD*)(a6 + 224);
      v96 = *(_QWORD*)(a6 + 232);
      v142 = v95;
      v144 = v96;
      v97 = *(_QWORD*)(a6 + 200);
      v141 = *(_QWORD*)(a6 + 208);
      v140 = v97;
      BYTE2(v143) = 1;
      v98 = snd_fnd_WeakHandle_get_alt1(a2, v94);
      if (v98 != 0) {
        v100 = v98 - 5592;
      }
      else {
        v100 = 0;
      }
      v101 = a4[1];
      v137[0] = *a4;
      v137[1] = v101;
      v102 = snd_fnd_WeakHandle_get_alt1(a5, v99);
      if (v102 != 0) {
        v103 = v102 - 5592;
      }
      else {
        v103 = 0;
      }
      v104 = snd_Fade_Fade_10cd70_alt1(v131, &v138);
      v134 = v142;
      v135 = v143;
      v136 = v144;
      v132 = v140;
      v133 = v141;
      v105 = snd_fnd_WeakHandle_get_alt1(a7, v104);
      v106 = v105 - 5592;
      if (v105 == 0) {
        v106 = 0;
      }
      v31 = Crc32List_11aff0(v16 + 2600, v16, v100, a3, v137, 0, v103, v131,
                             v106);
      snd_Fade_Destroy_Fade_alt1(v131);
      v32 = &v138;
    }
  }
  else {
    v21 = snd_fnd_WeakHandle_get_alt1(a2, v18);
    if (v21 != 0) {
      v23 = v21 - 5592;
    }
    else {
      v23 = 0;
    }
    v24 = snd_fnd_WeakHandle_get_alt1(a5, v22);
    if (v24 != 0) {
      v25 = v24 - 5592;
    }
    else {
      v25 = 0;
    }
    v26 = snd_Fade_Fade_10cd70_alt1(v118, a6);
    v27 = *(_QWORD*)(a6 + 224);
    v121 = *(_QWORD*)(a6 + 216);
    v122 = v27;
    v123 = *(_QWORD*)(a6 + 232);
    v28 = *(_QWORD*)(a6 + 208);
    v119 = *(_QWORD*)(a6 + 200);
    v120 = v28;
    v29 = snd_fnd_WeakHandle_get_alt1(a7, v26);
    if (v29 != 0) {
      v30 = v29 - 5592;
    }
    else {
      v30 = 0;
    }
    v31 = Crc32List_11b0f0(v16 + 2440, v16, v23, a3, 0, v25, v118, v30);
    v32 = (int*)v118;
  }
LABEL_51:
  *(__n128*)&v69 = snd_Fade_Destroy_Fade_alt1(v32);
  if (*(_BYTE*)(a6 + 223) == 1) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v31 + 200LL))(v31, v69);
  }
  nn_os_LockMutex(&GameData_2198f28);
  (*(void (**)(__int64))(*(_QWORD*)v31 + 760LL))(v31);
  nn_os_UnlockMutex(&GameData_2198f28);
  Crc32List_11a480(v16);
  *(_QWORD*)a8 = 0;
  *(_DWORD*)(a8 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set_alt1(a8, v31 + 5592);
    return;
  }
}

__attribute__((swiftcall)) void snd_11b6e0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, _DWORD* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           __int64 a8, long double a10)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v11;
  _DWORD* v12;
  __int64 v13;
  int v20;
  long double v21;
  int v22;
  int v23;
  __int64 v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  __n128 v35;
  int v36;
  __int64 v37;
  float v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  float v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  float v49;
  __int64 v50;
  float v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  float v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  __int64 v63;
  float v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  float v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  float v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  float v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  float v84;
  __int64 v85;
  __int64 v86;
  _BYTE* v87;
  __int64 v88;
  __int64 v89;
  float v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  float v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  float v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  long double v108;
  int v109;
  float v110;
  __int64 v111;
  float v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  float v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int16* v123;
  __int64* v124;
  unsigned __int8 explicit;
  __int64* v126;
  __int64 v128;
  _BYTE* v129;
  float v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  float v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  float v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  float v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  float v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64* v152;
  int v153;
  _BYTE v155[200];
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  _BYTE v161[200];
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  _BYTE v167[200];
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  _BYTE v173[200];
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  _DWORD v179[2];
  char v180[8];
  _BYTE v181[200];
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  _DWORD v187[2];
  _BYTE v188[200];
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  _BYTE v194[200];
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  _DWORD v200[2];
  _BYTE v201[200];
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  _BYTE v207[200];
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  _DWORD v213[50];
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  _BYTE v219[200];
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  _DWORD v225[2];
  _DWORD v226[4];

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a9 = 0;
    *(_DWORD*)(a9 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  v11 = a4[27];
  v12 = a4 + 26;
  v13 = result;
  v226[0] = a4[26];
  v226[1] = v11;
  v20 = GameRoutine_f63e0_alt1(v226, a10);
  if (v20 != -1) {
    v22 = v20 | 0x2000000;
    if (v22 == -1) {
      goto LABEL_45;
    }
  LABEL_8:
    if ((v22 & 0x2000000) != 0) {
      v36 = a4[55];
      v37 = snd_fnd_WeakHandle_get_alt1(a2, *(float*)&v21);
      if (v37 != 0) {
        v39 = v37 - 5592;
      }
      else {
        v39 = 0;
      }
      if (v36 != 0) {
        v40 = a4[27];
        v200[0] = a4[26];
        v200[1] = v40;
        v41 = snd_fnd_WeakHandle_get_alt1(a6, v38);
        if (v41 != 0) {
          v42 = v41 - 5592;
        }
        else {
          v42 = 0;
        }
        v43 = snd_Fade_Fade_10cd70_alt1(v194, a7);
        v44 = *(_QWORD*)(a7 + 224);
        v197 = *(_QWORD*)(a7 + 216);
        v45 = *(_QWORD*)(a7 + 232);
        v198 = v44;
        v199 = v45;
        v46 = *(_QWORD*)(a7 + 200);
        v196 = *(_QWORD*)(a7 + 208);
        v195 = v46;
        v47 = snd_fnd_WeakHandle_get_alt1(a8, v43);
        v48 = v47 - 5592;
        if (v47 == 0) {
          v48 = 0;
        }
        v34 = (_BYTE*)Crc32List_11b2e0(v13 + 2520, v13, v39, a3, v200, a4, v42,
                                       v194, v48);
        v35 = snd_Fade_Destroy_Fade_alt1(v194);
        if (v34 == nullptr) {
          goto LABEL_133;
        }
      }
      else {
        v88 = snd_fnd_WeakHandle_get_alt1(a6, v38);
        if (v88 != 0) {
          v89 = v88 - 5592;
        }
        else {
          v89 = 0;
        }
        v90 = snd_Fade_Fade_10cd70_alt1(v188, a7);
        v91 = *(_QWORD*)(a7 + 224);
        v191 = *(_QWORD*)(a7 + 216);
        v92 = *(_QWORD*)(a7 + 232);
        v192 = v91;
        v193 = v92;
        v93 = *(_QWORD*)(a7 + 200);
        v190 = *(_QWORD*)(a7 + 208);
        v189 = v93;
        v94 = snd_fnd_WeakHandle_get_alt1(a8, v90);
        v95 = v94 - 5592;
        if (v94 == 0) {
          v95 = 0;
        }
        v34 = (_BYTE*)Crc32List_11c330(v13 + 2440, v13, v39, a3, a4, a5, v89,
                                       v188, v95);
        v35 = snd_Fade_Destroy_Fade_alt1(v188);
        if (v34 == nullptr) {
          goto LABEL_133;
        }
      }
      goto LABEL_97;
    }
    if ((v22 & 0x8000000) != 0) {
      v49 = Data_f6d50();
      v50 = snd_fnd_WeakHandle_get_alt1(a2, v49);
      if (v50 != 0) {
        v52 = v50 - 5592;
      }
      else {
        v52 = 0;
      }
      v53 = a4[27];
      v187[0] = a4[26];
      v187[1] = v53;
      v54 = snd_fnd_WeakHandle_get_alt1(a6, v51);
      if (v54 != 0) {
        v55 = v54 - 5592;
      }
      else {
        v55 = 0;
      }
      v56 = snd_Fade_Fade_10cd70_alt1(v181, a7);
      v57 = *(_QWORD*)(a7 + 224);
      v184 = *(_QWORD*)(a7 + 216);
      v58 = *(_QWORD*)(a7 + 232);
      v185 = v57;
      v186 = v58;
      v59 = *(_QWORD*)(a7 + 200);
      v183 = *(_QWORD*)(a7 + 208);
      v182 = v59;
      v60 = snd_fnd_WeakHandle_get_alt1(a8, v56);
      v61 = v60 - 5592;
      if (v60 == 0) {
        v61 = 0;
      }
      v34 = (_BYTE*)Crc32List_11b3e0(v13 + 2760, v13, v52, a3, v187, 0, a4, v55,
                                     v181, v61);
      v35 = snd_Fade_Destroy_Fade_alt1(v181);
      if (v34 == nullptr) {
        goto LABEL_133;
      }
      goto LABEL_97;
    }
    if ((v22 & 0x1000000) == 0) {
      v24 = snd_fnd_WeakHandle_get_alt1(a2, *(float*)&v21);
      if (v24 != 0) {
        v26 = v24 - 5592;
      }
      else {
        v26 = 0;
      }
      v27 = snd_fnd_WeakHandle_get_alt1(a6, v25);
      if (v27 != 0) {
        v28 = v27 - 5592;
      }
      else {
        v28 = 0;
      }
      v29 = snd_Fade_Fade_10cd70_alt1(v155, a7);
      v30 = *(_QWORD*)(a7 + 224);
      v158 = *(_QWORD*)(a7 + 216);
      v159 = v30;
      v160 = *(_QWORD*)(a7 + 232);
      v31 = *(_QWORD*)(a7 + 208);
      v156 = *(_QWORD*)(a7 + 200);
      v157 = v31;
      v32 = snd_fnd_WeakHandle_get_alt1(a8, v29);
      v33 = v32 - 5592;
      if (v32 == 0) {
        v33 = 0;
      }
      v34 = (_BYTE*)Crc32List_11c460(v13 + 2440, v13, v26, a3, a4, a5, v28,
                                     v155, v33);
      v35 = snd_Fade_Destroy_Fade_alt1(v155);
      if (v34 == nullptr) {
        goto LABEL_133;
      }
      goto LABEL_97;
    }
    if (a4[55] != 0) {
      X8CALL_X0(__int64, GameRoutine_119bb0_alt1((void*)(a9), v13, a2, a3, v12,
                                                 (__int64)a4, a6, a7, a8, v21));
      return;
    }
    v107 = GameRoutine_190240_alt1(a4 + 20);
    v213[0] = snd_fnd_calcCrc32_alt1(v107, 0);
    *(__n128*)&v108 = snd_fnd_calcCrc32Reverse_alt1(v107, 0);
    v213[1] = v109;
    if (Data_f6c20_alt1(v213, v180, v108) != 0) {
      v111 = snd_fnd_WeakHandle_get_alt1(a2, v110);
      if (v111 != 0) {
        v113 = v111 - 5592;
      }
      else {
        v113 = 0;
      }
      v114 = a4[27];
      v179[0] = a4[26];
      v179[1] = v114;
      v115 = snd_fnd_WeakHandle_get_alt1(a6, v112);
      if (v115 != 0) {
        v116 = v115 - 5592;
      }
      else {
        v116 = 0;
      }
      v117 = snd_Fade_Fade_10cd70_alt1(v173, a7);
      v118 = *(_QWORD*)(a7 + 224);
      v176 = *(_QWORD*)(a7 + 216);
      v119 = *(_QWORD*)(a7 + 232);
      v177 = v118;
      v178 = v119;
      v120 = *(_QWORD*)(a7 + 200);
      v175 = *(_QWORD*)(a7 + 208);
      v174 = v120;
      v121 = snd_fnd_WeakHandle_get_alt1(a8, v117);
      v122 = v121 - 5592;
      if (v121 == 0) {
        v122 = 0;
      }
      v34 = (_BYTE*)Crc32List_11b3e0(v13 + 2760, v13, v113, a3, v179, 0, a4,
                                     v116, v173, v122);
      v35 = snd_Fade_Destroy_Fade_alt1(v173);
      if (v34 == nullptr) {
        goto LABEL_133;
      }
      goto LABEL_97;
    }
    if ((int)a4[154] < 1) {
      v142 = snd_fnd_WeakHandle_get_alt1(a2, v110);
      if (v142 != 0) {
        v144 = v142 - 5592;
      }
      else {
        v144 = 0;
      }
      v145 = snd_fnd_WeakHandle_get_alt1(a6, v143);
      if (v145 != 0) {
        v146 = v145 - 5592;
      }
      else {
        v146 = 0;
      }
      v147 = snd_Fade_Fade_10cd70_alt1(v161, a7);
      v148 = *(_QWORD*)(a7 + 224);
      v164 = *(_QWORD*)(a7 + 216);
      v165 = v148;
      v166 = *(_QWORD*)(a7 + 232);
      v149 = *(_QWORD*)(a7 + 208);
      v162 = *(_QWORD*)(a7 + 200);
      v163 = v149;
      v150 = snd_fnd_WeakHandle_get_alt1(a8, v147);
      v151 = v150 - 5592;
      if (v150 == 0) {
        v151 = 0;
      }
      v34 = (_BYTE*)Crc32List_11c460(v13 + 2440, v13, v144, a3, a4, a5, v146,
                                     v161, v151);
      v35 = snd_Fade_Destroy_Fade_alt1(v161);
      if (v34 == nullptr) {
        goto LABEL_133;
      }
      goto LABEL_97;
    }
    v130 = snd_Fade_Fade_10cd70_alt1(v213, a7);
    v131 = *(_QWORD*)(a7 + 216);
    v217 = *(_QWORD*)(a7 + 224);
    v132 = *(_QWORD*)(a7 + 232);
    v216 = v131;
    v218 = v132;
    v133 = *(_QWORD*)(a7 + 200);
    v215 = *(_QWORD*)(a7 + 208);
    v214 = v133;
    BYTE2(v217) = 1;
    v134 = snd_fnd_WeakHandle_get_alt1(a2, v130);
    if (v134 != 0) {
      v136 = v134 - 5592;
    }
    else {
      v136 = 0;
    }
    v137 = snd_fnd_WeakHandle_get_alt1(a6, v135);
    if (v137 != 0) {
      v138 = v137 - 5592;
    }
    else {
      v138 = 0;
    }
    v139 = snd_Fade_Fade_10cd70_alt1(v167, v213);
    v170 = v216;
    v171 = v217;
    v172 = v218;
    v168 = v214;
    v169 = v215;
    v140 = snd_fnd_WeakHandle_get_alt1(a8, v139);
    v141 = v140 - 5592;
    if (v140 == 0) {
      v141 = 0;
    }
    v34 = (_BYTE*)Crc32List_11c230(v13 + 2600, v13, v136, a3, a4, a5, v138,
                                   v167, v141);
    v87 = v167;
    goto LABEL_66;
  }
  v23 = GameRoutine_f57c0_alt1(v226);
  if (v23 == -1) {
    v62 = GameRoutine_13ed60_alt1(*(_QWORD*)(v13 + 2184), v226);
    if (v62 == -1) {
      v62 = Data_f6cc0_alt1(v226);
    }
    v22 = v62 | 0x8000000;
    if (v22 == -1) {
      goto LABEL_45;
    }
    goto LABEL_8;
  }
  v22 = v23 | 0x1000000;
  if (v22 != -1) {
    goto LABEL_8;
  }
LABEL_45:
  if (a4[55] != 0) {
    v63 = snd_fnd_WeakHandle_get_alt1(a2, *(float*)&v21);
    if (v63 != 0) {
      v65 = v63 - 5592;
    }
    else {
      v65 = 0;
    }
    v66 = a4[27];
    v225[0] = a4[26];
    v225[1] = v66;
    v67 = snd_fnd_WeakHandle_get_alt1(a6, v64);
    if (v67 != 0) {
      v68 = v67 - 5592;
    }
    else {
      v68 = 0;
    }
    v69 = snd_Fade_Fade_10cd70_alt1(v219, a7);
    v70 = *(_QWORD*)(a7 + 224);
    v222 = *(_QWORD*)(a7 + 216);
    v71 = *(_QWORD*)(a7 + 232);
    v223 = v70;
    v224 = v71;
    v72 = *(_QWORD*)(a7 + 200);
    v221 = *(_QWORD*)(a7 + 208);
    v220 = v72;
    v73 = snd_fnd_WeakHandle_get_alt1(a8, v69);
    v74 = v73 - 5592;
    if (v73 == 0) {
      v74 = 0;
    }
    v34 = (_BYTE*)Crc32List_11c100(v13 + 2440, v13, v65, a3, v225, a4, v68,
                                   v219, v74);
    v35 = snd_Fade_Destroy_Fade_alt1(v219);
    if (v34 == nullptr) {
      goto LABEL_133;
    }
  LABEL_97:
    if (*(_BYTE*)(a7 + 223) == 1) {
      (*(void (**)(_BYTE*, long double))(*(_QWORD*)v34 + 200LL))(
          v34, *(long double*)&v35);
    }
    v123 = GameData_2134648[0];
    nn_os_LockMutex(GameData_2134648[0]);
    (*(void (**)(_BYTE*))(*(_QWORD*)v34 + 760LL))(v34);
    nn_os_UnlockMutex(v123);
    v124 = (__int64*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v34 + 64LL))(v34);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212e220,
                                    memory_order_acquire);
    v126 = GameData_212e218;
    if ((explicit & 1) == 0) {
      v152 = v124;
      v153 = __cxa_guard_acquire(GameData_212e220);
      v124 = v152;
      if (v153 != 0) {
        *v126 = snd_Voice_registry(v152);
        __cxa_guard_release(GameData_212e220);
        v124 = v152;
      }
    }
    if (v124 == v126) {
      goto LABEL_107;
    }
    do {
      v124 = (__int64*)*v124;
    } while (v124 != v126 && v124 != nullptr);
    if (v124 != nullptr) {
    LABEL_107:
      nn_os_LockMutex(GameData_2134648[0]);
      if (((*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v34 + 768LL))(v34, 1) &
           1) == 0) {
        *(float*)(v13 + 3108) =
            (*(float (**)(_BYTE*))(*(_QWORD*)v34 + 112LL))(v34);
        if ((v34[5895] & 1) == 0) {
          (*(void (**)(_BYTE*))(*(_QWORD*)v34 + 40LL))(v34);
          v34 = nullptr;
        }
      }
      nn_os_UnlockMutex(GameData_2134648[0]);
    }
    *(_QWORD*)a9 = 0;
    v128 = a9;
    *(_DWORD*)(a9 + 8) = 0x2000;
    if (v34 != nullptr) {
      v129 = v34 + 5592;
    }
    else {
      v129 = nullptr;
    }
    {
      snd_fnd_WeakHandle_set_alt1(v128, v129);
      return;
    }
  }
  if ((int)a4[154] < 1) {
    v96 = snd_fnd_WeakHandle_get_alt1(a2, *(float*)&v21);
    if (v96 != 0) {
      v98 = v96 - 5592;
    }
    else {
      v98 = 0;
    }
    v99 = snd_fnd_WeakHandle_get_alt1(a6, v97);
    if (v99 != 0) {
      v100 = v99 - 5592;
    }
    else {
      v100 = 0;
    }
    v101 = snd_Fade_Fade_10cd70_alt1(v201, a7);
    v102 = *(_QWORD*)(a7 + 224);
    v204 = *(_QWORD*)(a7 + 216);
    v103 = *(_QWORD*)(a7 + 232);
    v205 = v102;
    v206 = v103;
    v104 = *(_QWORD*)(a7 + 200);
    v203 = *(_QWORD*)(a7 + 208);
    v202 = v104;
    v105 = snd_fnd_WeakHandle_get_alt1(a8, v101);
    v106 = v105 - 5592;
    if (v105 == 0) {
      v106 = 0;
    }
    v34 = (_BYTE*)Crc32List_11c330(v13 + 2440, v13, v98, a3, a4, a5, v100, v201,
                                   v106);
    v35 = snd_Fade_Destroy_Fade_alt1(v201);
    if (v34 == nullptr) {
      goto LABEL_133;
    }
    goto LABEL_97;
  }
  v75 = snd_Fade_Fade_10cd70_alt1(v213, a7);
  v76 = *(_QWORD*)(a7 + 216);
  v217 = *(_QWORD*)(a7 + 224);
  v77 = *(_QWORD*)(a7 + 232);
  v216 = v76;
  v218 = v77;
  v78 = *(_QWORD*)(a7 + 200);
  v215 = *(_QWORD*)(a7 + 208);
  v214 = v78;
  BYTE2(v217) = 1;
  v79 = snd_fnd_WeakHandle_get_alt1(a2, v75);
  if (v79 != 0) {
    v81 = v79 - 5592;
  }
  else {
    v81 = 0;
  }
  v82 = snd_fnd_WeakHandle_get_alt1(a6, v80);
  if (v82 != 0) {
    v83 = v82 - 5592;
  }
  else {
    v83 = 0;
  }
  v84 = snd_Fade_Fade_10cd70_alt1(v207, v213);
  v210 = v216;
  v211 = v217;
  v212 = v218;
  v208 = v214;
  v209 = v215;
  v85 = snd_fnd_WeakHandle_get_alt1(a8, v84);
  v86 = v85 - 5592;
  if (v85 == 0) {
    v86 = 0;
  }
  v34 = (_BYTE*)Crc32List_11c230(v13 + 2600, v13, v81, a3, a4, a5, v83, v207,
                                 v86);
  v87 = v207;
LABEL_66:
  snd_Fade_Destroy_Fade_alt1(v87);
  v35 = snd_Fade_Destroy_Fade_alt1(v213);
  if (v34 != nullptr) {
    goto LABEL_97;
  }
LABEL_133:
  *(_QWORD*)a9 = 0;
  v128 = a9;
  v129 = nullptr;
  *(_DWORD*)(a9 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set_alt1(v128, v129);
    return;
  }
}

__attribute__((swiftcall)) void snd_11d8c0(PSEUDO_X8 x8_, __int64 result,
                                           __int64 a2, __int64 a3, _DWORD* a4,
                                           __int64 a5, __int64 a6, __int64 a7,
                                           __int64 a8, long double a10)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v11;
  __int64 v12;
  int v20;
  float v21;
  int v22;
  __int64 v23;
  float v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  __n128 v35;
  int v36;
  int v37;
  __int64 v38;
  float v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  float v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BYTE* v50;
  __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _BYTE v59[200];
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _DWORD v65[2];
  _BYTE v66[200];
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _BYTE v72[200];
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _DWORD v78[2];
  _DWORD v79[4];

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a9 = 0;
    *(_DWORD*)(a9 + 8) = 0x2000;
    {
      result;
      return;
    }
  }
  v11 = a4[27];
  v12 = result;
  v79[0] = a4[26];
  v79[1] = v11;
  v20 = GameRoutine_f63e0_alt1(v79, a10);
  if (v20 != -1) {
    if ((v20 | 0x2000000) == 0xFFFFFFFF) {
      goto LABEL_21;
    }
  LABEL_8:
    v23 = snd_fnd_WeakHandle_get_alt1(a2, v21);
    if (v23 != 0) {
      v25 = v23 - 5592;
    }
    else {
      v25 = 0;
    }
    v26 = a4[27];
    v65[0] = a4[26];
    v65[1] = v26;
    v27 = snd_fnd_WeakHandle_get_alt1(a6, v24);
    if (v27 != 0) {
      v28 = v27 - 5592;
    }
    else {
      v28 = 0;
    }
    v29 = snd_Fade_Fade_10cd70_alt1(v59, a7);
    v30 = *(_QWORD*)(a7 + 224);
    v62 = *(_QWORD*)(a7 + 216);
    v63 = v30;
    v64 = *(_QWORD*)(a7 + 232);
    v31 = *(_QWORD*)(a7 + 208);
    v60 = *(_QWORD*)(a7 + 200);
    v61 = v31;
    v32 = snd_fnd_WeakHandle_get_alt1(a8, v29);
    v33 = v32 - 5592;
    if (v32 == 0) {
      v33 = 0;
    }
    v34 = (_BYTE*)Crc32List_11dee0(v12 + 2680, v12, v25, a3, v65, a4, v28, v59,
                                   v33);
    v35 = snd_Fade_Destroy_Fade_alt1(v59);
    if (v34 != nullptr) {
      goto LABEL_30;
    }
    goto LABEL_44;
  }
  v22 = GameRoutine_f57c0_alt1(v79);
  if (v22 != -1) {
    if ((v22 | 0x1000000) == 0xFFFFFFFF) {
      goto LABEL_21;
    }
    goto LABEL_8;
  }
  v36 = GameRoutine_13ed60_alt1(*(_QWORD*)(v12 + 2184), v79);
  if (v36 == -1) {
    v36 = Data_f6cc0_alt1(v79);
  }
  if ((v36 | 0x8000000) != 0xFFFFFFFF) {
    goto LABEL_8;
  }
LABEL_21:
  v37 = a4[55];
  v38 = snd_fnd_WeakHandle_get_alt1(a2, v21);
  v40 = v38 - 5592;
  if (v38 == 0) {
    v40 = 0;
  }
  v58 = v40;
  if (v37 != 0) {
    v41 = a4[27];
    v78[0] = a4[26];
    v78[1] = v41;
    v42 = snd_fnd_WeakHandle_get_alt1(a6, v39);
    if (v42 != 0) {
      v43 = v42 - 5592;
    }
    else {
      v43 = 0;
    }
    v44 = snd_Fade_Fade_10cd70_alt1(v72, a7);
    v45 = *(_QWORD*)(a7 + 224);
    v75 = *(_QWORD*)(a7 + 216);
    v46 = *(_QWORD*)(a7 + 232);
    v76 = v45;
    v77 = v46;
    v47 = *(_QWORD*)(a7 + 200);
    v74 = *(_QWORD*)(a7 + 208);
    v73 = v47;
    v48 = snd_fnd_WeakHandle_get_alt1(a8, v44);
    v49 = v48 - 5592;
    if (v48 == 0) {
      v49 = 0;
    }
    v34 = (_BYTE*)Crc32List_11dc80(v12 + 2680, v12, v58, a3, v78, a4, v43, v72,
                                   v49);
    v35 = snd_Fade_Destroy_Fade_alt1(v72);
    if (v34 != nullptr) {
    LABEL_30:
      if (*(_BYTE*)(a7 + 223) == 1) {
        (*(void (**)(_BYTE*, long double))(*(_QWORD*)v34 + 200LL))(
            v34, *(long double*)&v35);
      }
      nn_os_LockMutex(&GameData_2198f28);
      (*(void (**)(_BYTE*))(*(_QWORD*)v34 + 760LL))(v34);
      nn_os_UnlockMutex_alt1(&GameData_2198f28);
      nn_os_LockMutex(&GameData_2198f28);
      if (((*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v34 + 768LL))(v34, 1) &
           1) == 0) {
        *(float*)(v12 + 3108) =
            (*(float (**)(_BYTE*))(*(_QWORD*)v34 + 112LL))(v34);
        if ((v34[5895] & 1) == 0) {
          (*(void (**)(_BYTE*))(*(_QWORD*)v34 + 40LL))(v34);
          v34 = nullptr;
        }
      }
      nn_os_UnlockMutex_alt1(&GameData_2198f28);
      *(_QWORD*)a9 = 0;
      *(_DWORD*)(a9 + 8) = 0x2000;
      if (v34 != nullptr) {
        v50 = v34 + 5592;
      }
      else {
        v50 = nullptr;
      }
      {
        snd_fnd_WeakHandle_set_alt1(a9, v50);
        return;
      }
    }
  }
  else {
    v51 = snd_fnd_WeakHandle_get_alt1(a6, v39);
    if (v51 != 0) {
      v52 = v51 - 5592;
    }
    else {
      v52 = 0;
    }
    v53 = snd_Fade_Fade_10cd70_alt1(v66, a7);
    v54 = *(_QWORD*)(a7 + 224);
    v69 = *(_QWORD*)(a7 + 216);
    v70 = v54;
    v71 = *(_QWORD*)(a7 + 232);
    v55 = *(_QWORD*)(a7 + 208);
    v67 = *(_QWORD*)(a7 + 200);
    v68 = v55;
    v56 = snd_fnd_WeakHandle_get_alt1(a8, v53);
    v57 = v56 - 5592;
    if (v56 == 0) {
      v57 = 0;
    }
    v34 = (_BYTE*)Crc32List_11ddb0(v12 + 2680, v12, v58, a3, a4, a5, v52, v66,
                                   v57);
    v35 = snd_Fade_Destroy_Fade_alt1(v66);
    if (v34 != nullptr) {
      goto LABEL_30;
    }
  }
LABEL_44:
  v50 = nullptr;
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set_alt1(a9, v50);
    return;
  }
}

__int64 snd_120f10(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int16* v5;
  float* v6;
  float v7;
  float v8;
  float v9;
  long double v10;
  __int64 v11;
  __int64 v12;
  int v13;
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
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  _QWORD v39[25];
  struct {
    __int64 v40;
    float v41;
    float v42;
    float v43;
  } v40_;
  struct {
    _QWORD v44[2];
    int v45;
  } v44_;

  v2 = *(_QWORD*)(a2 + 5648);
  v5 = GameData_2134658[0];
  nn_os_LockMutex(GameData_2134658[0]);
  v6 = (float*)(a1 + 16LL * *(int*)(a1 + 3128));
  v7 = v6[802];
  v8 = v6[803];
  v9 = v6[804];
  *(__n128*)&v10 = nn_os_UnlockMutex_alt1(v5);
  v44_.v44[0] = snd_fnd_Vec3_vtable;
  v12 = *(_QWORD*)(a2 + 40);
  v11 = a2 + 40;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, long double))(
      v12 + 1080))((void*)(&v40_.v40), v11, v10);
  v13 = *(_DWORD*)(v2 + 404);
  v44_.v44[1] = 0;
  v14 = v40_.v41 - v7;
  v15 = v40_.v42 - v8;
  v16 = *(float*)(a1 + 3172);
  v17 = 0x1.0000000000000p+0f;
  v44_.v45 = 0;
  v40_.v41 = v14;
  v40_.v42 = v15;
  v18 = v40_.v43 - v9;
  v19 = *(float*)(a1 + 3188);
  v40_.v43 = v18;
  if (v13 != 0) {
    v20 = *(float*)(a1 + 3176);
    v21 = *(float*)(a1 + 3180);
    v22 = snd_fnd_calcDistanceTo((float*)v44_.v44, (float*)&v40_.v40);
    if (v22 >= v20) {
      v17 = 0x1.0000000000000p+0f -
            (float)((float)(0x1.0000000000000p+0f - *(float*)(v2 + 428)) *
                    (float)((float)(v22 - v20) / v21));
      if (v17 < 0x1.47ae140000000p-7f) {
        v17 = 0x0.0p+0f;
      }
    }
  }
  if (*(_DWORD*)(v2 + 408) == 0) {
    v31 = 0x0.0p+0f;
    goto LABEL_30;
  }
  v23 = 0x1.6800000000000p+6f / v19;
  v24 = *((float*)GameData_212c190 + 1);
  v25 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v26 = -*(float*)GameData_212c190;
  v27 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 8);
  v28 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v29 = snd_fnd_calcAngle_fee00((__int64)v44_.v44, (__int64)&v40_.v40);
  if (v29 >= 0x1.6800000000000p+7f) {
    v29 = v29 + -0x1.6800000000000p+8f;
  }
  if (v29 >= 0x0.0p+0f) {
    v32 =
        (float)((float)(v29 * 0x1.921fb60000000p+1f) / 0x1.6800000000000p+7f) +
        (float)(roundf((float)((float)(v29 * 0x1.921fb60000000p+1f) /
                               0x1.6800000000000p+7f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
    if (v32 <= 0x1.921fb60000000p+0f) {
      if (v32 >= -0x1.921fb60000000p+0f) {
        goto LABEL_20;
      }
      v33 = -0x1.921fb60000000p+1f;
    }
    else {
      v33 = 0x1.921fb60000000p+1f;
    }
    v32 = v33 - v32;
  LABEL_20:
    v36 =
        v23 *
        (float)(v32 *
                (float)((float)((float)(v27 +
                                        (float)((float)(v25 +
                                                        (float)((float)(v28 +
                                                                        (float)((float)(v24 +
                                                                                        (float)(v26 *
                                                                                                (float)(v32 *
                                                                                                        v32))) *
                                                                                (float)(v32 *
                                                                                        v32))) *
                                                                (float)(v32 *
                                                                        v32))) *
                                                (float)(v32 * v32))) *
                                (float)(v32 * v32)) +
                        0x1.0000000000000p+0f));
    if (v36 > 0x1.0000000000000p+0f) {
      v36 = 0x1.0000000000000p+0f;
    }
    goto LABEL_27;
  }
  if (v29 <= -0x1.6800000000000p+6f) {
    v30 = (float)(v29 + 0x1.6800000000000p+7f) * 0x1.921fb60000000p+1f;
  }
  else {
    v30 = v29 * -0x1.921fb60000000p+1f;
  }
  v34 = (float)(v30 / 0x1.6800000000000p+7f) +
        (float)(roundf((float)(v30 / 0x1.6800000000000p+7f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v34 <= 0x1.921fb60000000p+0f) {
    if (v34 >= -0x1.921fb60000000p+0f) {
      goto LABEL_25;
    }
    v35 = -0x1.921fb60000000p+1f;
  }
  else {
    v35 = 0x1.921fb60000000p+1f;
  }
  v34 = v35 - v34;
LABEL_25:
  v36 =
      v23 *
      (float)-(
          float)((float)((float)((float)(v27 +
                                         (float)((float)(v25 +
                                                         (float)((float)(v28 +
                                                                         (float)((float)(v24 +
                                                                                         (float)(v26 *
                                                                                                 (float)(v34 *
                                                                                                         v34))) *
                                                                                 (float)(v34 *
                                                                                         v34))) *
                                                                 (float)(v34 *
                                                                         v34))) *
                                                 (float)(v34 * v34))) *
                                 (float)(v34 * v34)) +
                         0x1.0000000000000p+0f) *
                 v34);
  if (v36 < -0x1.0000000000000p+0f) {
    v36 = -0x1.0000000000000p+0f;
  }
LABEL_27:
  v37 = snd_fnd_calcDistanceTo((float*)v44_.v44, (float*)&v40_.v40);
  if (v37 > v16) {
    v37 = v16;
  }
  v31 = v36 * (float)(v37 / v16);
LABEL_30:
  snd_Fade_Fade_10c830((__int64)v39, 0x0.0p+0f);
  (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)v11 + 224LL))(v11, v39, v31);
  snd_Fade_Destroy_Fade(v39);
  return (*(__int64 (**)(__int64, float))(*(_QWORD*)v11 + 56LL))(v11, v17);
}

__int64* snd_130f60(__int64* result, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  bool v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;

  v2 = result[1];
  v3 = result[2];
  v4 = result;
  if (a2 > (v3 - v2) >> 4) {
    v5 = v2 - *result;
    v6 = a2 + (v5 >> 4);
    if (v6 >> 60 != 0) {
      GameRoutine_131250();
    }
    v7 = v3 - *result;
    v8 = snd_g_memory_ptr[0];
    if (v7 >> 3 > v6) {
      v6 = v7 >> 3;
    }
    if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF0LL) {
      v9 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v9 = v6;
    }
    if ((unsigned __int64)(v9 - 0x1000000000000000LL) >= 0xF000000000000001LL) {
      v19 = a2;
      result = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0],
                                                   16 * v9, 32);
      a2 = v19;
      v10 = (char*)result + v5;
      v11 = 16 * v19 - 16;
      if ((~(_BYTE)v11 & 0x70) != 0) {
        goto LABEL_10;
      }
    }
    else {
      result = nullptr;
      v10 = (char*)v5;
      v11 = 16 * a2 - 16;
      if ((~(_BYTE)v11 & 0x70) != 0) {
      LABEL_10:
        v12 = -(__int64)(((unsigned __int8)((unsigned int)v11 >> 4) + 1) & 7);
        v13 = v10;
        do {
          *(_QWORD*)v13 = 0;
          *((_DWORD*)v13 + 2) = 0x2000;
          v13 += 16;
          v14 = __CFADD__(v12++, 1);
        } while (!v14);
        v15 = &v10[16 * a2];
        if (v11 < 0x70) {
          goto LABEL_27;
        }
        goto LABEL_26;
      }
    }
    v13 = v10;
    v15 = &v10[16 * a2];
    if (v11 < 0x70) {
    LABEL_27:
      v20 = &result[2 * v9];
      v21 = *v4;
      v22 = v4[1];
      v23 = &v10[*v4 - v22];
      if (v22 != *v4) {
        v24 = (__int64)&v10[*v4 - v22];
        do {
          *(_QWORD*)v24 = 0;
          *(_DWORD*)(v24 + 8) = 0x2000;
          result = (__int64*)GameRoutine_112180(v24, v21);
          v21 += 16;
          v24 += 16;
        } while (v21 != v22);
        v21 = *v4;
      }
      *v4 = (__int64)v23;
      v4[1] = (__int64)v15;
      v4[2] = (__int64)v20;
      if (v21 != 0) {
        return (*(__int64* (**)(__int64, __int64))(*(_QWORD*)*v8 + 24LL))(*v8,
                                                                          v21);
      }
      return result;
    }
    do {
    LABEL_26:
      *(_QWORD*)v13 = 0;
      *((_DWORD*)v13 + 2) = 0x2000;
      *((_QWORD*)v13 + 2) = 0;
      *((_DWORD*)v13 + 6) = 0x2000;
      *((_QWORD*)v13 + 4) = 0;
      *((_DWORD*)v13 + 10) = 0x2000;
      *((_QWORD*)v13 + 6) = 0;
      *((_DWORD*)v13 + 14) = 0x2000;
      *((_QWORD*)v13 + 8) = 0;
      *((_DWORD*)v13 + 18) = 0x2000;
      *((_QWORD*)v13 + 10) = 0;
      *((_DWORD*)v13 + 22) = 0x2000;
      *((_QWORD*)v13 + 12) = 0;
      *((_DWORD*)v13 + 26) = 0x2000;
      *((_QWORD*)v13 + 14) = 0;
      *((_DWORD*)v13 + 30) = 0x2000;
      v13 += 128;
    } while (v13 != v15);
    goto LABEL_27;
  }
  if (a2 != 0) {
    v16 = v2 + 16 * a2;
    v17 = 16 * a2 - 16;
    if ((~(_BYTE)v17 & 0x70) != 0) {
      v18 = -(__int64)(((unsigned __int8)((unsigned int)v17 >> 4) + 1) & 7);
      do {
        *(_QWORD*)v2 = 0;
        *(_DWORD*)(v2 + 8) = 0x2000;
        v2 += 16;
        v14 = __CFADD__(v18++, 1);
      } while (!v14);
    }
    if (v17 >= 0x70) {
      do {
        *(_QWORD*)v2 = 0;
        *(_DWORD*)(v2 + 8) = 0x2000;
        *(_QWORD*)(v2 + 16) = 0;
        *(_DWORD*)(v2 + 24) = 0x2000;
        *(_QWORD*)(v2 + 32) = 0;
        *(_DWORD*)(v2 + 40) = 0x2000;
        *(_QWORD*)(v2 + 48) = 0;
        *(_DWORD*)(v2 + 56) = 0x2000;
        *(_QWORD*)(v2 + 64) = 0;
        *(_DWORD*)(v2 + 72) = 0x2000;
        *(_QWORD*)(v2 + 80) = 0;
        *(_DWORD*)(v2 + 88) = 0x2000;
        *(_QWORD*)(v2 + 96) = 0;
        *(_DWORD*)(v2 + 104) = 0x2000;
        *(_QWORD*)(v2 + 112) = 0;
        *(_DWORD*)(v2 + 120) = 0x2000;
        v2 += 128;
      } while (v2 != v16);
    }
    v2 = v16;
  }
  result[1] = v2;
  return result;
}

__int64* snd_131280(__int64* result, unsigned __int64 a2)
{
  __int64* v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  unsigned int v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  bool v22;
  int v23;
  __int64 v24;
  bool v25;
  _QWORD* v26;
  __int64 v27;
  int v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33;
    int v34;
  } v33_;
  struct {
    unsigned __int64 v35;
    int v36;
  } v35_;
  struct {
    __int64 v37;
    int v38;
  } v37_;
  __int64 v39[4];
  char v40;

  if (a2 > result[2] << 6) {
    if ((a2 & 0x8000000000000000LL) != 0) {
      GameRoutine_131460();
    }
    v2 = result;
    v3 = snd_g_memory_ptr[0];
    v4 = ((a2 - 1) >> 6) + 1;
    v5 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 8 * v4,
                                                 32);
    v6 = *v2;
    v7 = v2[1];
    v8 = v5;
    v33_.v33 = v5;
    v37_.v37 = v6;
    v9 = v7 & 0x3F;
    v37_.v38 = 0;
    v33_.v34 = 0;
    v35_.v36 = v9;
    v35_.v35 = v6 + 8 * (v7 >> 6);
    result = X8CALL_X0(void*, snd_131480_alt1((void*)(v39), &v40, &v37_.v37,
                                              &v35_.v35, &v33_.v33));
    if ((v7 & 0x3F) != 0) {
      v10 = (_QWORD*)(v8 + 8 * (v7 >> 6));
      v11 = v9 ^ 0x3F;
      v12 = 64 - v9;
      v13 = (64 - v9) & 3;
      if (v13 != 0) {
        v14 = v9 | 0xFFFFFFC0;
        do {
          v15 = 1LL << v9;
          v16 = v9 == 63;
          ++v14;
          if (v9 == 63) {
            v9 = 0;
          }
          else {
            ++v9;
          }
          *v10 &= ~v15;
          if (v16) {
            v17 = 8;
          }
          else {
            v17 = 0;
          }
          --v13;
          v10 = (_QWORD*)((char*)v10 + v17);
        } while (v13 != 0);
        v12 = -v14;
      }
      if (v11 >= 3) {
        do {
          *v10 &= ~(1LL << v9);
          v18 = v9 == 63;
          v19 = &v10[v18];
          if (v9 == 63) {
            v20 = 0;
          }
          else {
            v20 = v9 + 1;
          }
          v21 = 1LL << v20;
          v22 = v20 == 63;
          if (v20 == 63) {
            v23 = 0;
          }
          else {
            v23 = v20 + 1;
          }
          *v19 &= ~v21;
          v24 = v22;
          v25 = v23 == 63;
          v26 = &v19[v24];
          v27 = 1LL << v23;
          if (v23 == 63) {
            v28 = 0;
          }
          else {
            v28 = v23 + 1;
          }
          *v26 &= ~v27;
          v29 = v25;
          v30 = &v26[v29];
          if (v28 == 63) {
            v9 = 0;
          }
          else {
            v9 = v28 + 1;
          }
          *v30 &= ~(1LL << v28);
          v31 = v28 == 63;
          v12 -= 4;
          v10 = &v30[v31];
        } while (v12 != 0);
      }
    }
    v32 = *v2;
    *v2 = v8;
    v2[1] = v7;
    v2[2] = v4;
    if (v32 != 0) {
      return (*(__int64* (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    }
  }
  return result;
}

__attribute__((swiftcall)) void snd_131480(PSEUDO_X8 x8_, __int64 unused_int0,
                                           __int64 a1, __int64* a2, __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64* v7;
  unsigned __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int* result;
  __int64 v17;
  __int64* v18;
  struct {
    unsigned __int64* v19;
    int v20;
  } v19_;
  struct {
    __int64 v21;
    int v22;
  } v21_;
  struct {
    __int64* v23;
    int v24;
  } v23_;
  struct {
    __int64 v25;
    int v26;
  } v25_;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v5 = *(unsigned int*)(a1 + 8);
  if ((_DWORD)v5 == *(_DWORD*)(a3 + 8)) {
    v7 = *(__int64**)a1;
    v8 = *(unsigned __int64**)a3;
    v9 = *((unsigned int*)a2 + 2) - v5 + 8 * (*a2 - *(_QWORD*)a1);
    if (v9 >= 1) {
      if ((_DWORD)v5 != 0) {
        if (v9 >= (unsigned __int64)(unsigned int)(64 - v5)) {
          v10 = (unsigned int)(64 - v5);
        }
        else {
          v10 = *((unsigned int*)a2 + 2) - v5 + 8 * (*a2 - *(_QWORD*)a1);
        }
        v9 -= v10;
        v11 = *v7++;
        *v8 = *v8 & ~((0xFFFFFFFFFFFFFFFFLL >>
                       (64 - (unsigned __int8)v5 - (unsigned __int8)v10)) &
                      (-1LL << v5)) |
              v11 &
                  (0xFFFFFFFFFFFFFFFFLL >>
                   (64 - (unsigned __int8)v5 - (unsigned __int8)v10)) &
                  (-1LL << v5);
        v12 = v10 + v5;
        v13 = (unsigned __int64)(v10 + v5) >> 3;
        LODWORD(v5) = v12 & 0x3F;
        v8 = (unsigned __int64*)((char*)v8 + (v13 & 0x3FFFFFF8));
      }
      if (v9 >= 0) {
        v14 = v9;
      }
      else {
        v14 = v9 + 63;
      }
      v15 = v14 >> 6;
      if ((unsigned __int64)(v9 + 63) >= 0x7F) {
        result = (unsigned int*)memmove(v8, v7, 8 * v15);
      }
      v8 += v15;
      if (v9 - (v15 << 6) >= 1) {
        LODWORD(v5) = v9 - ((_DWORD)v15 << 6);
        *v8 = *v8 & ~(0xFFFFFFFFFFFFFFFFLL >>
                      (((_BYTE)v15 << 6) - (unsigned __int8)v9)) |
              v7[v15] & (0xFFFFFFFFFFFFFFFFLL >>
                         (((_BYTE)v15 << 6) - (unsigned __int8)v9));
      }
    }
    v17 = *a2;
    *(_QWORD*)(a4 + 16) = v8;
    *(_DWORD*)(a4 + 24) = v5;
    *(_QWORD*)a4 = v17;
    *(_DWORD*)(a4 + 8) = *((_DWORD*)a2 + 2);
  }
  else {
    v18 = *(__int64**)a1;
    v19_.v20 = *(_DWORD*)(a3 + 8);
    v23_.v24 = v5;
    v23_.v23 = v18;
    v21_.v21 = *a2;
    v21_.v22 = *((_DWORD*)a2 + 2);
    v19_.v19 = *(unsigned __int64**)a3;
    result = X8CALL_X0(unsigned int*,
                       snd_131640((void*)((__int64)&v25_.v25),
                                  (unsigned int*)&v23_.v23, (__int64)&v21_.v21,
                                  (__int64)&v19_.v19));
    *(_QWORD*)a4 = *a2;
    *(_DWORD*)(a4 + 8) = *((_DWORD*)a2 + 2);
    *(_QWORD*)(a4 + 16) = v25_.v25;
    *(_DWORD*)(a4 + 24) = v25_.v26;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void snd_131640(PSEUDO_X8 x8_, unsigned int* result,
                                           __int64 a2, __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  int v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  unsigned __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;

  v4 = *(unsigned __int64**)result;
  v5 = result[2];
  v6 = *(unsigned int*)(a2 + 8) + 8LL * (*(_QWORD*)a2 - *(_QWORD*)result) - v5;
  if (v6 >= 1) {
    if ((_DWORD)v5 != 0) {
      v7 = *v4;
      v8 = (unsigned int)(64 - v5);
      if (v6 >= v8) {
        v9 = (unsigned int)(64 - v5);
      }
      else {
        v9 = *(unsigned int*)(a2 + 8) +
             8LL * (*(_QWORD*)a2 - *(_QWORD*)result) - v5;
      }
      v6 -= v9;
      v10 = (-1LL << v5) & v7;
      v11 = *(_DWORD*)(a3 + 8);
      v12 = (0xFFFFFFFFFFFFFFFFLL >>
             ((unsigned __int8)v8 - (unsigned __int8)v9)) &
            v10;
      v13 = (unsigned int)(64 - v11);
      v14 = -1LL << v11;
      if (v9 >= v13) {
        v15 = v13;
      }
      else {
        v15 = v9;
      }
      v16 = v9 - v15;
      **(_QWORD**)a3 &= ~((0xFFFFFFFFFFFFFFFFLL >>
                           ((unsigned __int8)v13 - (unsigned __int8)v15)) &
                          v14);
      v17 = *(_DWORD*)(a3 + 8);
      v18 = result[2];
      v19 = v17 > v18;
      v20 = v12 >> ((unsigned __int8)v18 - (unsigned __int8)v17);
      v21 = v12 << ((unsigned __int8)v17 - (unsigned __int8)v18);
      if (!v19) {
        v21 = v20;
      }
      **(_QWORD**)a3 |= v21;
      v22 = *(unsigned int*)(a3 + 8);
      v23 = *(_QWORD**)a3;
      *(_DWORD*)(a3 + 8) = ((_BYTE)v22 + (_BYTE)v15) & 0x3F;
      v24 = (_QWORD*)((char*)v23 + (((v15 + v22) >> 3) & 0x3FFFFFF8));
      *(_QWORD*)a3 = v24;
      if (v16 >= 1) {
        *v24 &= ~(0xFFFFFFFFFFFFFFFFLL >> -(char)v16);
        **(_QWORD**)a3 |=
            v12 >> ((unsigned __int8)v15 + (unsigned __int8)result[2]);
        *(_DWORD*)(a3 + 8) = v16;
      }
      v4 = (unsigned __int64*)(*(_QWORD*)result + 8LL);
      *(_QWORD*)result = v4;
    }
    v25 = *(_DWORD*)(a3 + 8);
    v26 = v6 - 64;
    v27 = (unsigned int)(64 - v25);
    if (v6 < 64) {
      v26 = v6;
    }
    else {
      v28 = -1LL << v25;
      v29 = ~v28;
      if ((v26 & 0x40) == 0) {
        v30 = *v4;
        **(_QWORD**)a3 &= v29;
        **(_QWORD**)a3 |= v30 << *(_DWORD*)(a3 + 8);
        v31 = *(_QWORD**)a3;
        *(_QWORD*)a3 += 8LL;
        v31[1] &= v28;
        **(_QWORD**)a3 |= v30 >> v27;
        v4 = (unsigned __int64*)(*(_QWORD*)result + 8LL);
        v6 = v26;
        *(_QWORD*)result = v4;
      }
      if ((unsigned __int64)v26 >= 0x40) {
        do {
          v32 = *v4;
          **(_QWORD**)a3 &= v29;
          **(_QWORD**)a3 |= v32 << *(_DWORD*)(a3 + 8);
          v33 = *(_QWORD**)a3;
          *(_QWORD*)a3 += 8LL;
          v33[1] &= v28;
          **(_QWORD**)a3 |= v32 >> v27;
          v34 = *(_QWORD*)result;
          *(_QWORD*)result += 8LL;
          v35 = *(_QWORD*)(v34 + 8);
          **(_QWORD**)a3 &= v29;
          **(_QWORD**)a3 |= v35 << *(_DWORD*)(a3 + 8);
          v36 = *(_QWORD**)a3;
          *(_QWORD*)a3 += 8LL;
          v36[1] &= v28;
          **(_QWORD**)a3 |= v35 >> v27;
          v26 = v6 - 128;
          v37 = v6 - 192;
          v6 -= 128;
          v4 = (unsigned __int64*)(*(_QWORD*)result + 8LL);
          *(_QWORD*)result = v4;
        } while (v37 < 0xFFFFFFFFFFFFFF80LL);
      }
    }
    if (v26 >= 1) {
      v38 = *v4 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v26);
      if (v26 >= v27) {
        v39 = v27;
      }
      else {
        v39 = v26;
      }
      **(_QWORD**)a3 &= ~((-1LL << *(_DWORD*)(a3 + 8)) &
                          (0xFFFFFFFFFFFFFFFFLL >>
                           ((unsigned __int8)v27 - (unsigned __int8)v39)));
      **(_QWORD**)a3 |= v38 << *(_DWORD*)(a3 + 8);
      v40 = *(unsigned int*)(a3 + 8);
      v41 = *(_QWORD**)a3;
      *(_DWORD*)(a3 + 8) = ((_BYTE)v40 + (_BYTE)v39) & 0x3F;
      v42 = (_QWORD*)((char*)v41 +
                      (((unsigned __int64)(v39 + v40) >> 3) & 0x3FFFFFF8));
      *(_QWORD*)a3 = v42;
      if (v26 - v39 >= 1) {
        *v42 &= ~(0xFFFFFFFFFFFFFFFFLL >>
                  ((unsigned __int8)v39 - (unsigned __int8)v26));
        **(_QWORD**)a3 |= v38 >> v39;
        *(_DWORD*)(a3 + 8) = v26 - v39;
      }
    }
  }
  *(_QWORD*)a4 = *(_QWORD*)a3;
  *(_DWORD*)(a4 + 8) = *(_DWORD*)(a3 + 8);
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void snd_1319c0(PSEUDO_X8 x8_, __int64 unused_int0,
                                           unsigned __int64* a1,
                                           unsigned int a2, __int64 a3,
                                           __int64 a4, __int64 a5)
{
  __int64 a6 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64* v9;
  signed __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64* v17;
  unsigned int v18;
  unsigned __int64* result;
  unsigned __int64* v20;
  __int64 v21;
  struct {
    unsigned __int64* v22;
    int v23;
  } v22_;
  struct {
    __int64 v24;
    int v25;
  } v24_;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*(_DWORD*)(a5 + 8) == a2) {
    v9 = *(unsigned __int64**)a5;
    v10 = (unsigned int)a4 - (unsigned __int64)a2 + 8 * (a3 - (_QWORD)a1);
    if (v10 >= 1) {
      if (a2 != 0) {
        if (v10 >= (unsigned __int64)(64 - a2)) {
          v11 = 64 - a2;
        }
        else {
          v11 = (unsigned int)a4 - (unsigned __int64)a2 + 8 * (a3 - (_QWORD)a1);
        }
        v10 -= v11;
        v12 = *a1++;
        *v9 = *v9 & ~((0xFFFFFFFFFFFFFFFFLL >>
                       (64 - (unsigned __int8)a2 - (unsigned __int8)v11)) &
                      (-1LL << a2)) |
              v12 &
                  (0xFFFFFFFFFFFFFFFFLL >>
                   (64 - (unsigned __int8)a2 - (unsigned __int8)v11)) &
                  (-1LL << a2);
        v13 = v11 + a2;
        a2 = ((_BYTE)v11 + (_BYTE)a2) & 0x3F;
        v9 = (unsigned __int64*)((char*)v9 + ((v13 >> 3) & 0x3FFFFFF8));
      }
      if (v10 >= 0) {
        v14 = v10;
      }
      else {
        v14 = v10 + 63;
      }
      v15 = v14 >> 6;
      v16 = v14 >> 6;
      if ((unsigned __int64)(v10 + 63) >= 0x7F) {
        v17 = a1;
        v18 = a2;
        result = (unsigned __int64*)memmove(v9, a1, 8 * (v14 >> 6));
        a2 = v18;
        a1 = v17;
      }
      v9 += v15;
      if (v10 - (v15 << 6) >= 1) {
        a2 = v10 - ((_DWORD)v15 << 6);
        *v9 = *v9 & ~(0xFFFFFFFFFFFFFFFFLL >>
                      (((_BYTE)v15 << 6) - (unsigned __int8)v10)) |
              a1[v16] & (0xFFFFFFFFFFFFFFFFLL >>
                         (((_BYTE)v15 << 6) - (unsigned __int8)v10));
      }
    }
    *(_QWORD*)a6 = a3;
    *(_QWORD*)(a6 + 8) = a4;
    *(_QWORD*)(a6 + 16) = v9;
    *(_DWORD*)(a6 + 24) = a2;
  }
  else {
    v20 = *(unsigned __int64**)a5;
    v22_.v23 = *(_DWORD*)(a5 + 8);
    v22_.v22 = v20;
    result = X8CALL_X0(unsigned __int64*,
                       snd_131b60((void*)((__int64)&v24_.v24), a1, a2, a3, a4,
                                  (__int64)&v22_.v22));
    v21 = v24_.v24;
    *(_QWORD*)a6 = a3;
    *(_QWORD*)(a6 + 8) = a4;
    *(_QWORD*)(a6 + 16) = v21;
    *(_DWORD*)(a6 + 24) = v24_.v25;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void snd_131b60(PSEUDO_X8 x8_,
                                           unsigned __int64* result,
                                           unsigned int a2, __int64 a3,
                                           unsigned int a4, __int64 a5)
{
  __int64 a6 = (__int64)PSEUDO_X8_VALUE(x8_);
  signed __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  _QWORD* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;

  v6 = a4 - (unsigned __int64)a2 + 8 * (a3 - (_QWORD)result);
  if (v6 < 1) {
    goto LABEL_27;
  }
  if (a2 != 0) {
    if (v6 >= (unsigned __int64)(64 - a2)) {
      v7 = 64 - a2;
    }
    else {
      v7 = a4 - (unsigned __int64)a2 + 8 * (a3 - (_QWORD)result);
    }
    v6 -= v7;
    v8 = (0xFFFFFFFFFFFFFFFFLL >>
          (64 - (unsigned __int8)a2 - (unsigned __int8)v7)) &
         (-1LL << a2) & *result;
    v9 = *(_DWORD*)(a5 + 8);
    v10 = (unsigned int)(64 - v9);
    v11 = -1LL << v9;
    if (v7 >= v10) {
      v12 = v10;
    }
    else {
      v12 = v7;
    }
    v13 = v7 - v12;
    **(_QWORD**)a5 &= ~((0xFFFFFFFFFFFFFFFFLL >>
                         ((unsigned __int8)v10 - (unsigned __int8)v12)) &
                        v11);
    v14 = *(_DWORD*)(a5 + 8);
    v15 = v14 > a2;
    v16 = v8 >> ((unsigned __int8)a2 - (unsigned __int8)v14);
    v17 = v8 << ((unsigned __int8)v14 - (unsigned __int8)a2);
    if (!v15) {
      v17 = v16;
    }
    **(_QWORD**)a5 |= v17;
    v18 = *(unsigned int*)(a5 + 8);
    v19 = *(_QWORD**)a5;
    v20 = v12 + v18;
    v21 = ((_BYTE)v18 + (_BYTE)v12) & 0x3F;
    *(_DWORD*)(a5 + 8) = v21;
    v22 = (_QWORD*)((char*)v19 + ((v20 >> 3) & 0x3FFFFFF8));
    *(_QWORD*)a5 = v22;
    if (v13 >= 1) {
      v21 = v13;
      *v22 &= ~(0xFFFFFFFFFFFFFFFFLL >> -(char)v13);
      **(_QWORD**)a5 |= v8 >> ((unsigned __int8)v12 + (unsigned __int8)a2);
      *(_DWORD*)(a5 + 8) = v13;
    }
    ++result;
    v23 = v6 - 64;
    v24 = (unsigned int)(64 - v21);
    if (v6 >= 64) {
      goto LABEL_14;
    }
  }
  else {
    v21 = *(_DWORD*)(a5 + 8);
    v23 = v6 - 64;
    v24 = (unsigned int)(64 - v21);
    if (v6 >= 64) {
    LABEL_14:
      v25 = -1LL << v21;
      v26 = ~(-1LL << v21);
      if ((v23 & 0x40) == 0) {
        v27 = *result++;
        **(_QWORD**)a5 &= v26;
        **(_QWORD**)a5 |= v27 << *(_DWORD*)(a5 + 8);
        v28 = *(_QWORD**)a5;
        *(_QWORD*)a5 += 8LL;
        v28[1] &= v25;
        **(_QWORD**)a5 |= v27 >> v24;
        v6 = v23;
      }
      if ((unsigned __int64)v23 >= 0x40) {
        do {
          v29 = *result;
          **(_QWORD**)a5 &= v26;
          **(_QWORD**)a5 |= v29 << *(_DWORD*)(a5 + 8);
          v30 = *(_QWORD**)a5;
          *(_QWORD*)a5 += 8LL;
          v30[1] &= v25;
          **(_QWORD**)a5 |= v29 >> v24;
          v31 = result[1];
          result += 2;
          **(_QWORD**)a5 &= v26;
          **(_QWORD**)a5 |= v31 << *(_DWORD*)(a5 + 8);
          v32 = *(_QWORD**)a5;
          *(_QWORD*)a5 += 8LL;
          v32[1] &= v25;
          **(_QWORD**)a5 |= v31 >> v24;
          v23 = v6 - 128;
          v33 = v6 - 192;
          v6 -= 128LL;
        } while (v33 < 0xFFFFFFFFFFFFFF80LL);
      }
      goto LABEL_21;
    }
  }
  v23 = v6;
LABEL_21:
  if (v23 >= 1) {
    v34 = *result & (0xFFFFFFFFFFFFFFFFLL >> -(char)v23);
    if (v23 >= v24) {
      v35 = v24;
    }
    else {
      v35 = v23;
    }
    **(_QWORD**)a5 &= ~((-1LL << *(_DWORD*)(a5 + 8)) &
                        (0xFFFFFFFFFFFFFFFFLL >>
                         ((unsigned __int8)v24 - (unsigned __int8)v35)));
    **(_QWORD**)a5 |= v34 << *(_DWORD*)(a5 + 8);
    v36 = *(unsigned int*)(a5 + 8);
    v37 = *(_QWORD**)a5;
    *(_DWORD*)(a5 + 8) = ((_BYTE)v36 + (_BYTE)v35) & 0x3F;
    v38 = (_QWORD*)((char*)v37 +
                    (((unsigned __int64)(v35 + v36) >> 3) & 0x3FFFFFF8));
    *(_QWORD*)a5 = v38;
    if (v23 - v35 >= 1) {
      *v38 &= ~(0xFFFFFFFFFFFFFFFFLL >>
                ((unsigned __int8)v35 - (unsigned __int8)v23));
      **(_QWORD**)a5 |= v34 >> v35;
      *(_DWORD*)(a5 + 8) = v23 - v35;
    }
  }
LABEL_27:
  *(_QWORD*)a6 = *(_QWORD*)a5;
  *(_DWORD*)(a6 + 8) = *(_DWORD*)(a5 + 8);
  {
    result;
    return;
  }
}

__int64 snd_13f550()
{
  __int16* v0;

  v0 = GameData_2134698[0];
  *GameData_2134698[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  nn_os_InitializeMutex(v0, 1, 0);
  return GameRoutine_2b0();
}

__int64 snd_14ad40(__int64 a1, char* a2)
{
  __int64 v2;
  __int64 v5;
  int v6;
  int v7;
  unsigned int* v8;
  __int64 v9;
  _BYTE* v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  int v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  bool v25;
  char v26;
  __int64* v27;
  char v28;
  __int64* v29;
  char v30;
  __int64 v32;
  __int64* v33[3];
  struct {
    __int64 v34[2];
    char* v35;
  } v34_;
  __int64** v36;

  GameRoutine_190020(v34_.v34, a2);
  v5 = GameRoutine_14b260(a1 + 96, (unsigned __int8*)v34_.v34);
  if ((v34_.v34[0] & 1) != 0) {
    (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v34_.v35);
  }
  if (a1 + 104 != v5) {
    return *(_QWORD*)(v5 + 56);
  }
  if (strstr(a2, "::") == 0) {
    return GameRoutine_14ab40((__int64*)a1, a2);
  }
  v6 = *(_DWORD*)(a1 + 88);
  if (v6 != 0) {
    v7 = *(_DWORD*)(a1 + 84);
    if (v7 < v6) {
      v32 = *(_QWORD*)(*(_QWORD*)(a1 + 56) + 24LL) + *(_QWORD*)a1;
      v8 = (unsigned int*)(*(_QWORD*)(a1 + 72) + 24LL * v7);
      do {
        if (*v8 != 0 && (v8[1] & 0xF0) == 0x10 && *((_QWORD*)v8 + 2) != 0) {
          ConstructString_1901f0(v34_.v34);
          v9 = *v8;
          v10 = (_BYTE*)(v32 + v9);
          if (*(_BYTE*)(v32 + v9) == 95 && v10[1] == 90 && v10[2] == 78) {
            v11 = (unsigned __int8)v10[3];
            if (v11 != 69) {
              v12 = 3;
              v13 = v32 + v9;
              do {
                v14 = v13 + v12;
                v15 = v12 - 48;
                v16 = 0;
                do {
                  v17 = v11 + 10 * v16;
                  v18 = *(unsigned __int8*)++v14;
                  v11 = v18;
                  ++v15;
                  v16 = v17 - 48;
                } while ((unsigned int)(v18 - 48) < 0xA);
                GameRoutine_14b0a0(v34_.v34, v14, v16);
                v12 = v17 + v15;
                if (v10[v12] == 69) {
                  break;
                }
                GameRoutine_14b0a0(v34_.v34, (__int64)"::", 2u);
                v11 = (unsigned __int8)v10[v12];
              } while (v11 != 69);
            }
          }
          v19 = strlen(a2);
          if (v19 == -1) {
            snd_a36650();
          }
          v20 = v19;
          v21 = v34_.v34[0] & 1;
          if (v21 != 0) {
            v22 = v34_.v34[1];
          }
          else {
            v22 = (unsigned __int64)LOBYTE(v34_.v34[0]) >> 1;
          }
          if ((v34_.v34[0] & 1) != 0) {
            v23 = v34_.v35;
          }
          else {
            v23 = (char*)v34_.v34 + 1;
          }
          if (v20 >= v22) {
            v24 = v22;
          }
          else {
            v24 = v20;
          }
          v25 = (unsigned int)memcmp(v23, a2, v24) == 0 && v22 == v20;
          v26 = v25;
          if (v25) {
            v2 = *((_QWORD*)v8 + 1) + *(_QWORD*)a1 +
                 *(_QWORD*)(*(_QWORD*)(a1 + 8) +
                            ((unsigned __int64)*((unsigned __int16*)v8 + 3)
                             << 6) +
                            24);
            GameRoutine_190020((__int64*)v33, a2);
            v36 = v33;
            v27 = GameRoutine_14b380(
                (__int64**)(a1 + 96), (unsigned __int8*)v33,
                (__int64)std___1_piecewise_construct_ptr, (__int64**)&v36);
            v28 = (char)v33[0];
            v27[7] = v2;
            if ((v28 & 1) != 0) {
              (*(void (**)(_QWORD, __int64*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                              24LL))(*snd_g_memory_ptr[0],
                                                     v33[2]);
            }
            v21 = v34_.v34[0] & 1;
          }
          if (v21 != 0) {
            (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                         24LL))(*snd_g_memory_ptr[0], v34_.v35);
          }
          if ((v26 & 1) != 0) {
            return v2;
          }
          v6 = *(_DWORD*)(a1 + 88);
        }
        ++v7;
        v8 += 6;
      } while (v7 < v6);
    }
    GameRoutine_190020(v34_.v34, a2);
    v33[0] = v34_.v34;
    v29 = GameRoutine_14b380((__int64**)(a1 + 96), (unsigned __int8*)v34_.v34,
                             (__int64)std___1_piecewise_construct_ptr, v33);
    v30 = v34_.v34[0];
    v29[7] = 0;
    if ((v30 & 1) != 0) {
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v34_.v35);
    }
  }
  return 0;
}

__attribute__((swiftcall)) void snd_190340(PSEUDO_X8 x8_, unsigned __int8* a1,
                                           unsigned int a2, int a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  char* v12;
  __int64* result;
  __int64 v14;
  struct {
    _QWORD v15[2];
    char* v16;
  } v15_;

  v5 = *a1;
  v6 = *((_QWORD*)a1 + 1);
  v7 = a2;
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  v8 = v6 >= a2;
  v9 = v6 - a2;
  if (!v8) {
    snd_a36650();
  }
  if ((v5 & 1) != 0) {
    v10 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v10 = a1 + 1;
  }
  if (v9 >= a3) {
    v11 = a3;
  }
  else {
    v11 = v9;
  }
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    snd_a3a470();
  }
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v12 = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 16LL))(
        (__int64)snd_g_memory);
    v15_.v15[1] = v11;
    v15_.v16 = v12;
    v15_.v15[0] = v14 | 1;
  }
  else {
    LOBYTE(v15_.v15[0]) = 2 * v11;
    v12 = (char*)v15_.v15 + 1;
    if (v11 == 0) {
      BYTE1(v15_.v15[0]) = 0;
      result = GameRoutine_1900f0(a4, (__int64)v15_.v15);
      if ((v15_.v15[0] & 1) == 0) {
        result;
        return;
      }
      {
        (__int64*)(*(__int64 (**)(__int64, char*))(
            *(_QWORD*)snd_g_memory + 24LL))(snd_g_memory, v15_.v16);
        return;
      }
    }
  }
  memmove(v12, &v10[v7], v11);
  v12[v11] = 0;
  result = GameRoutine_1900f0(a4, (__int64)v15_.v15);
  if ((v15_.v15[0] & 1) != 0) {
    (__int64*)(*(__int64 (**)(__int64, char*))(*(_QWORD*)snd_g_memory + 24LL))(
        snd_g_memory, v15_.v16);
    return;
  }
  {
    result;
    return;
  }
}

__int64 snd_a1bbe0()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int16 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int16 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int CurrentCoreNumberEv;
  _QWORD v35[2];

  v0 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v1 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v1 = snd_ProxyMemSnd_vtable;
  GameData_21fa7e0 = (__int64)v1;
  Crc32List_1130d0();
  v2 = snd_g_memory_ptr[0];
  if (GameData_21fa818 != 0) {
    v3 = *snd_g_memory_ptr[0];
    v4 = GameData_21fa810;
    GameData_21fa810 = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v4);
    v5 = *v2;
    v6 = GameData_21fa818;
    GameData_21fa818 = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v6);
    GameData_21fa820 = 0;
  }
  GameData_21fa810 = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v2 + 16LL))(*v2, 14336, 32);
  v7 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v2 + 16LL))(
      *v2, 256, 32);
  v8 = 0;
  GameData_21fa818 = v7;
  GameData_21fa820 = 0x800000;
  do {
    *(_WORD*)(GameData_21fa818 + 2 * v8) = v8;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 2) = v8 + 1;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 4) = v8 + 2;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 6) = v8 + 3;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 8) = v8 + 4;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 10) = v8 + 5;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 12) = v8 + 6;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 14) = v8 + 7;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 16) = v8 + 8;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 18) = v8 + 9;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 20) = v8 + 10;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 22) = v8 + 11;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 24) = v8 + 12;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 26) = v8 + 13;
    *(_WORD*)(GameData_21fa818 + 2 * v8 + 28) = v8 + 14;
    v9 = v8 + 15;
    v10 = GameData_21fa818 + 2 * v8;
    v8 += 16;
    *(_WORD*)(v10 + 30) = v9;
  } while (v8 != 128);
  GameData_21fa848 = 1;
  if (GameData_21fa868 != 0) {
    v11 = *v2;
    v12 = GameData_21fa860;
    GameData_21fa860 = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11, v12);
    v13 = *v2;
    v14 = GameData_21fa868;
    GameData_21fa868 = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v14);
    GameData_21fa870 = 0;
  }
  GameData_21fa860 = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v2 + 16LL))(*v2, 14336, 32);
  v15 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v2 + 16LL))(
      *v2, 256, 32);
  v16 = 0;
  GameData_21fa868 = v15;
  GameData_21fa870 = 0x800000;
  do {
    *(_WORD*)(GameData_21fa868 + 2 * v16) = v16;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 2) = v16 + 1;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 4) = v16 + 2;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 6) = v16 + 3;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 8) = v16 + 4;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 10) = v16 + 5;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 12) = v16 + 6;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 14) = v16 + 7;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 16) = v16 + 8;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 18) = v16 + 9;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 20) = v16 + 10;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 22) = v16 + 11;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 24) = v16 + 12;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 26) = v16 + 13;
    *(_WORD*)(GameData_21fa868 + 2 * v16 + 28) = v16 + 14;
    v17 = v16 + 15;
    v18 = GameData_21fa868 + 2 * v16;
    v16 += 16;
    *(_WORD*)(v18 + 30) = v17;
  } while (v16 != 128);
  GameData_21fa898 = 1;
  if (GameData_21fa8b8 != 0) {
    v19 = *v2;
    v20 = GameData_21fa8b0;
    GameData_21fa8b0 = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v20);
    v21 = *v2;
    v22 = GameData_21fa8b8;
    GameData_21fa8b8 = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v22);
    GameData_21fa8c0 = 0;
  }
  GameData_21fa8b0 = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)*v2 + 16LL))(*v2, 9216, 32);
  v23 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v2 + 16LL))(
      *v2, 256, 32);
  v24 = 0;
  GameData_21fa8b8 = v23;
  GameData_21fa8c0 = 0x800000;
  do {
    *(_WORD*)(GameData_21fa8b8 + 2 * v24) = v24;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 2) = v24 + 1;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 4) = v24 + 2;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 6) = v24 + 3;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 8) = v24 + 4;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 10) = v24 + 5;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 12) = v24 + 6;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 14) = v24 + 7;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 16) = v24 + 8;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 18) = v24 + 9;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 20) = v24 + 10;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 22) = v24 + 11;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 24) = v24 + 12;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 26) = v24 + 13;
    *(_WORD*)(GameData_21fa8b8 + 2 * v24 + 28) = v24 + 14;
    v25 = v24 + 15;
    v26 = GameData_21fa8b8 + 2 * v24;
    v24 += 16;
    *(_WORD*)(v26 + 30) = v25;
  } while (v24 != 128);
  GameData_21fa8e8 = 1;
  v27 = Crc32List_116350();
  v28 = GameData_212e248[0];
  *GameData_212e248[0] = v27;
  v29 = (_QWORD*)fw_memory_HeapManager_Allocate(*v0, 16, 16, 0);
  *v29 = snd_ProxySnd_vtable;
  v29[1] = v27;
  GameData_21fa7e8 = (__int64)v29;
  Crc32List_1130e0();
  Manager_1163c0(*v28);
  v30 = fw_memory_HeapManager_Allocate(*v0, 3192, 16, 0);
  GameRoutine_a1f1a0();
  GameData_21fa968 = v30;
  *game_sound_g_game_sound_ptr[0] = v30;
  GameRoutine_f38b0("Data");
  GameRoutine_f3930("Data");
  v31 = GameRoutine_118ff0(*v28);
  FileManager_10e040((void*)(v35), v31, "Data/data_sndSystem.elf", 64);
  GameRoutine_112180_alt1(&GameData_21fa7f0, v35);
  v32 = snd_fnd_WeakHandle_get_alt2(&GameData_21fa7f0);
  (*(void (**)(__int64))(*(_QWORD*)v32 + 48LL))(v32);
  GameRoutine_f39b0("Data");
  snd_data_f3c60("Data/Voice/");
  GameRoutine_f3a40("Data/Voice");
  GameRoutine_ef600("Data/Dispos/", 1);
  GameRoutine_ed5a0("Data/Dispos/", 1);
  ((void (*)(const char*, __int64))GameRoutine_ee660)("Data/Dispos/", 1);
  snd_data_ef080("Data/Dispos/", 1);
  GameData_21fa618 = fw_memory_HeapManager_Allocate(*v0, 0x10000, 4096, 0);
  CurrentCoreNumberEv = nn_os_GetCurrentCoreNumber();
  nn_os_CreateThread_1a0a7e0(&GameData_21fa620, GameRoutine_a1ba40, 0,
                             GameData_21fa618, 0x10000, 16,
                             CurrentCoreNumberEv);
  nn_os_SetThreadName(&GameData_21fa620, "sndSetup");
  return nn_os_StartThread(&GameData_21fa620);
}

bool snd_a28e10(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v2;
  float v5;
  __int64 v6;
  _BYTE* v7;
  int v8;
  int* v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  _QWORD v17[25];
  __int64 v18[2];

  v2 = *(_DWORD*)(a1 + 2172);
  if (v2 < 0) {
    return v2 >= 0;
  }
  if ((snd_BGM_isFirstActive(*(_QWORD*)(a1 + 8)) & 1) != 0) {
    v5 = 0x1.f400000000000p+6f;
    if ((a2 & 1) != 0) {
      v5 = 0x0.0p+0f;
    }
    snd_Fade_Fade_10c830((__int64)v17, v5);
    snd_BGM_getFirstHandle((void*)((__int64)v18), *(_QWORD*)(a1 + 8));
    v6 = snd_fnd_WeakHandle_get((__int64)v18);
    if (v6 != 0 && !snd_Voice_hasSends(v6 - 5592)) {
      (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
          *(_QWORD*)(a1 + 8), v17, 0);
    }
    if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
      v7 = *(_BYTE**)(a1 + 2840);
      *(_QWORD*)(a1 + 2832) = 0;
    }
    else {
      v7 = (_BYTE*)(a1 + 2825);
      *(_BYTE*)(a1 + 2824) = 0;
    }
    *v7 = 0;
    snd_Fade_Destroy_Fade(v17);
  }
  v8 = *(_DWORD*)(a1 + 2172);
  if (v8 != 0) {
    v9 = (int*)(a1 + 1992 + 36LL * (v8 - 1));
    if (*v9 < 0) {
      goto LABEL_21;
    }
    *(_DWORD*)(a1 + 2188) = *v9;
    v10 = a1 + 24LL * *v9;
    v11 = *(_BYTE*)(v10 + 712);
    v12 = *(_QWORD*)(v10 + 728);
    v13 = v10 + 713;
    if ((v11 & 1) != 0) {
      v14 = v12;
    }
    else {
      v14 = v13;
    }
  }
  else if ((*(_BYTE*)(a1 + 2456) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 2472);
  }
  else {
    v14 = a1 + 2457;
  }
  snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
  GameRoutine_a290c0(a1, v14, (__int64)v17, 0, 0, 0x0.0p+0f);
  snd_Fade_Destroy_Fade(v17);
LABEL_21:
  snd_BGM_getFirstHandle((void*)((__int64)v18), *(_QWORD*)(a1 + 8));
  if (*(_DWORD*)(a1 + 2752) == 3 || *(int*)(a1 + 644) >= 1) {
    snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
    snd_startVolume_1006d0(v18, 0, (__int64)v17, 0x0.0p+0f);
    snd_Fade_Destroy_Fade(v17);
    snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
    snd_startVolume_1006d0(v18, 1u, (__int64)v17, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v17);
    snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
    v15 = 0x1.0000000000000p+0f;
  }
  else {
    snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
    snd_startVolume_1006d0(v18, 0, (__int64)v17, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v17);
    snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
    snd_startVolume_1006d0(v18, 1u, (__int64)v17, 0x0.0p+0f);
    snd_Fade_Destroy_Fade(v17);
    snd_Fade_Fade_10c830((__int64)v17, 0x0.0p+0f);
    v15 = 0x0.0p+0f;
  }
  snd_startVolume_1006d0(v18, 2u, (__int64)v17, v15);
  snd_Fade_Destroy_Fade(v17);
  *(_DWORD*)(a1 + 2180) = *(_DWORD*)(a1 + 2172);
  *(_DWORD*)(a1 + 2184) = *(_DWORD*)(a1 + 2176);
  *(_QWORD*)(a1 + 2172) = -1;
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
      (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
    *(_DWORD*)(GameData_22400f8 + 12) |= 0x10000u;
  }
  return v2 >= 0;
}

__int64* snd_a292c0(__int64 a1, unsigned int a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  float v11;
  __int64* result;
  __int64* v13;
  float v14;
  unsigned int v15;
  unsigned __int64 v16;
  _BYTE* v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _BYTE* v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  __int64* v35;
  int v36;
  __int64 v37;
  _BOOL4 v39;
  __int64 v40;
  float v41;
  double v42;
  __int64 v43;
  __int64 v44;
  char v45;
  long double v46;
  __int64 v47;
  __int64 v48;
  unsigned __int8 v49;
  char* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int8* v59;
  __int64* v60;
  unsigned __int64 v61;
  unsigned __int8* v62;
  int v63;
  int v64;
  int v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  double v76;
  unsigned __int8* v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int8* v80;
  unsigned __int64 v81;
  bool v82;
  char v88;
  char v89;
  unsigned __int64 v90;
  const char* v91;
  const char* v92;
  unsigned __int8* v93;
  char* v94;
  const char* v95;
  char* v96;
  const char* v97;
  __int64 v98;
  const char* v99;
  __int64 v100;
  const char* v101;
  __int64 v102;
  const char* v103;
  __int64 v104;
  const char* v105;
  __int64 v106;
  _BYTE* v107;
  unsigned __int8* v108;
  const char** v109;
  const char** v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int8* v113;
  float* v114;
  float v115;
  float* v116;
  float v117;
  float v118;
  int v119;
  float v120;
  double v121;
  __int64 v122;
  const char** v123;
  const char** v124;
  int v125;
  _BOOL4 v126;
  char v127;
  int v128;
  int v129;
  int v130;
  struct {
    _QWORD v131[4];
    _QWORD* v132;
  } v131_;
  struct {
    _QWORD v133[4];
    _QWORD* v134;
  } v133_;
  _QWORD v135[25];
  struct {
    __int64 v136;
    unsigned __int64 v137;
    unsigned __int8* v138;
  } v136_;
  _QWORD v139[25];
  _QWORD v140[25];
  struct {
    __int64 v141;
    int v142;
  } v141_;
  int v143[64];
  struct {
    __int64 v144;
    int v145;
  } v144_;

  snd_findSlot_100a50((void*)(v143), &GameData_21fa938);
  v6 = snd_fnd_WeakHandle_get((__int64)v143);
  if (v6 != 0) {
    v7 = v6;
    v8 = 0x1.0000000000000p+0f - *(float*)(a1 + 592);
    snd_Fade_Fade_10c830((__int64)v143, 0x0.0p+0f);
    (*(void (**)(__int64, int*, float))(*(_QWORD*)(v7 - 5552) + 112LL))(
        v7 - 5552, v143, v8);
    snd_Fade_Destroy_Fade(v143);
  }
  if ((*(_BYTE*)(a1 + 612) & 1) == 0) {
    snd_findSlot_100a50((void*)(v143), &GameData_21fa93c);
    v9 = snd_fnd_WeakHandle_get((__int64)v143);
    if (v9 != 0) {
      v10 = v9;
      v11 = 0x1.0000000000000p+0f - *(float*)(a1 + 592);
      snd_Fade_Fade_10c830((__int64)v143, 0x0.0p+0f);
      (*(void (**)(__int64, int*, float))(*(_QWORD*)(v10 - 5552) + 112LL))(
          v10 - 5552, v143, v11);
      snd_Fade_Destroy_Fade(v143);
    }
  }
  snd_findSlot_100a50((void*)(v143), &GameData_21fa940);
  result = (__int64*)snd_fnd_WeakHandle_get((__int64)v143);
  if (result != nullptr && (*(_BYTE*)(a1 + 601) & 1) == 0) {
    v13 = result;
    v14 = 0x1.0000000000000p+0f - *(float*)(a1 + 592);
    snd_Fade_Fade_10c830((__int64)v143, 0x0.0p+0f);
    (*(void (**)(__int64*, int*, float))(*(v13 - 694) + 112))(v13 - 694, v143,
                                                              v14);
    result = (__int64*)snd_Fade_Destroy_Fade(v143);
  }
  v15 = *(_DWORD*)(a1 + 2752);
  if (a2 != 5 && v15 == 5) {
    v16 = *(unsigned __int8*)(a1 + 2760);
    v17 = (_BYTE*)(a1 + 2760);
    result = (__int64*)(a1 + 2784);
    if ((*(_BYTE*)(a1 + 2784) & 1) != 0) {
      v19 = (v16 & 1) == 0;
      v20 = v16 >> 1;
      if (v19) {
        v21 = a1 + 2761;
      }
      else {
        v21 = *(_QWORD*)(a1 + 2776);
      }
      if (v19) {
        v22 = v20;
      }
      else {
        v22 = *(_QWORD*)(a1 + 2768);
      }
      result = SpineModel_64dde0(result, v21, v22);
      if ((*v17 & 1) != 0) {
        goto LABEL_24;
      }
    }
    else if ((v16 & 1) != 0) {
      result = GameRoutine_64df20(result, *(_QWORD*)(a1 + 2776),
                                  *(_QWORD*)(a1 + 2768));
      if ((*v17 & 1) != 0) {
      LABEL_24:
        v23 = *(_BYTE**)(a1 + 2776);
        *(_QWORD*)(a1 + 2768) = 0;
        goto LABEL_25;
      }
    }
    else {
      v18 = *(_QWORD*)(a1 + 2768);
      *result = *(_QWORD*)v17;
      *(_QWORD*)(a1 + 2792) = v18;
      *(_QWORD*)(a1 + 2800) = *(_QWORD*)(a1 + 2776);
      if ((*v17 & 1) != 0) {
        goto LABEL_24;
      }
    }
    v23 = (_BYTE*)(a1 + 2761);
    *(_BYTE*)(a1 + 2760) = 0;
  LABEL_25:
    *v23 = 0;
    v15 = *(_DWORD*)(a1 + 2752);
  }
  if ((v15 | a2) == 0) {
    return result;
  }
  if (a2 - 2 >= 3) {
    v24 = 1;
  }
  else {
    v24 = 2;
  }
  *(_DWORD*)(a1 + 2820) = v24;
  snd_Fade_Fade_10cb00((__int64)v140, "FadeTime_ENV_ZoomView_Cross");
  snd_Fade_Fade_10cb00((__int64)v139, "FadeTime_Gaya_Combat_In");
  v25 = *(_DWORD*)(a1 + 2752);
  v26 = *(_DWORD*)(a1 + 2812);
  v27 = *(_DWORD*)(a1 + 2808);
  v127 = *(_BYTE*)(a1 + 2816);
  v28 = *(unsigned __int8*)(a1 + 2760);
  if ((v28 & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 2768);
  }
  else {
    v29 = v28 >> 1;
  }
  v30 = *(unsigned __int8*)(a1 + 2784);
  v31 = *(_QWORD*)(a1 + 2792);
  if ((v30 & 1) == 0) {
    v31 = v30 >> 1;
  }
  if (v29 == v31) {
    if ((v28 & 1) != 0) {
      v32 = *(_QWORD*)(a1 + 2776);
    }
    else {
      v32 = a1 + 2761;
    }
    if ((v30 & 1) != 0) {
      v33 = *(_QWORD*)(a1 + 2800);
    }
    else {
      v33 = a1 + 2785;
    }
    v34 = memcmp(v32, v33, v29) == 0;
  }
  else {
    v34 = false;
  }
  v125 = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 344));
  snd_Fade_Fade_10cd70((__int64)v143, (__int64)v140);
  snd_Fade_Fade_10cd70((__int64)&v136_.v136, (__int64)v139);
  if (*(_BYTE*)(a1 + 601) == 1) {
    snd_Fade_Fade_10c830((__int64)v135, 0x1.9000000000000p+7f);
    GameRoutine_10d050((__int64)v143, (__int64)v135);
    snd_Fade_Destroy_Fade(v135);
    snd_Fade_Fade_10c830((__int64)v135, 0x1.9000000000000p+7f);
    GameRoutine_10d050((__int64)&v136_.v136, (__int64)v135);
    snd_Fade_Destroy_Fade(v135);
  }
  v129 = (a2 < 2) ^ (v15 < 2);
  if (v129 == 0) {
    v36 = !v34;
    if (*(_DWORD*)(a1 + 2752) == 0) {
      v36 = 1;
    }
    if ((a3 & 1) == 0 && v36 == 0) {
    LABEL_61:
      snd_Fade_Destroy_Fade(&v136_.v136);
      snd_Fade_Destroy_Fade(v143);
      snd_findSlot_100a50((void*)(v143), &GameData_21fa944);
      v37 = snd_fnd_WeakHandle_get((__int64)v143);
      v39 = a2 == 3 || v25 == 3;
      if (v37 != 0 && v39) {
        v40 = v37;
        if (v25 == 3) {
          snd_Fade_Fade_10cb00((__int64)v143, "FadeTime_ENV_Combat_Cross");
          (*(void (**)(__int64, int*, float))(*(_QWORD*)(v40 - 5552) + 72LL))(
              v40 - 5552, v143, 0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade(v143);
        }
        if (a2 == 3) {
          v41 = 0x1.0000000000000p-1f;
          if (snd_hasDefine("SetVolume_ENV_Combat")) {
            v42 = snd_getDefineValue("SetVolume_ENV_Combat");
            v41 = *(float*)&v42 / 0x1.9000000000000p+6f;
          }
          snd_Fade_Fade_10cb00((__int64)v143, "FadeTime_ENV_Combat_Cross");
          (*(void (**)(__int64, int*, float))(*(_QWORD*)(v40 - 5552) + 72LL))(
              v40 - 5552, v143, v41);
          snd_Fade_Destroy_Fade(v143);
        }
      }
      snd_findSlot_100a50((void*)(v143), &GameData_21fa948);
      v43 = snd_fnd_WeakHandle_get((__int64)v143);
      v128 = v26;
      v130 = v27;
      v126 = v34;
      if (v43 == 0) {
        v45 = a3;
        LOWORD(v136_.v136) = 0;
        if (a2 != 3) {
          if (a2 > 1) {
            goto LABEL_98;
          }
        LABEL_81:
          v49 = 8;
          BYTE5(v136_.v136) = 0;
          LOBYTE(v136_.v136) = 8;
          *(_DWORD*)((char*)&v136_.v136 + 1) = 1346456898;
          goto LABEL_108;
        }
        goto LABEL_87;
      }
      v44 = v43;
      v45 = a3;
      if (a2 == 6) {
        snd_Fade_Fade_10c830((__int64)v143, 0x0.0p+0f);
      LABEL_78:
        v47 = *(_QWORD*)(v44 - 5552);
        LODWORD(v46) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        v48 = v44 - 5552;
        goto LABEL_96;
      }
      if (a2 > 1) {
        if (a2 != 3) {
          if (a2 != 2) {
            goto LABEL_97;
          }
          snd_Fade_Fade_10cb00((__int64)v143, "FadeTime_ENV_ZoomView_Cross");
          goto LABEL_78;
        }
        snd_Fade_Fade_10cb00((__int64)v143, "FadeTime_ENV_Combat_Cross");
        (*(void (**)(__int64, int*, float))(*(_QWORD*)(v44 - 5552) + 72LL))(
            v44 - 5552, v143, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(v143);
      LABEL_87:
        v49 = 12;
        v136_.v136 = 0x5441424D4F430CLL;
        goto LABEL_108;
      }
      if (v15 > 1) {
        if (v25 == 3) {
          v50 = "FadeTime_ENV_Combat_Cross";
        }
        else {
          if (v25 != 2) {
            goto LABEL_97;
          }
          v50 = "FadeTime_ENV_ZoomView_Cross";
        }
        snd_Fade_Fade_10cb00((__int64)v143, (unsigned __int8*)v50);
      }
      else {
        snd_Fade_Fade_10c830((__int64)v143, 0x0.0p+0f);
      }
      v47 = *(_QWORD*)(v44 - 5552);
      v48 = v44 - 5552;
      *(_QWORD*)&v46 = 0;
    LABEL_96:
      (*(void (**)(__int64, int*, long double))(v47 + 72))(v48, v143, v46);
      snd_Fade_Destroy_Fade(v143);
    LABEL_97:
      LOWORD(v136_.v136) = 0;
      if (a2 <= 1) {
        goto LABEL_81;
      }
    LABEL_98:
      if (a2 != 5 && a2 != 2) {
        goto LABEL_107;
      }
      v51 = *(unsigned __int8*)(a1 + 2760);
      v52 = *(_QWORD*)(a1 + 2768);
      if ((v51 & 1) == 0) {
        v52 = v51 >> 1;
      }
      if (v52 != 0) {
        if ((v51 & 1) != 0) {
          v53 = *(_QWORD*)(a1 + 2776);
        }
        else {
          v53 = a1 + 2761;
        }
        GameRoutine_60a020((__int64)&v136_.v136, v53);
        v49 = v136_.v136;
      }
      else {
      LABEL_107:
        v49 = 0;
      }
    LABEL_108:
      v54 = v136_.v137;
      if ((v49 & 1) != 0) {
        v55 = v136_.v137;
      }
      else {
        v55 = v49 >> 1;
      }
      if (v55 == 0) {
        goto LABEL_173;
      }
      v56 = *(unsigned __int8*)(a1 + 2488);
      v57 = *(_QWORD*)(a1 + 2496);
      if ((v56 & 1) == 0) {
        v57 = v56 >> 1;
      }
      if (v57 != v55 ||
          ((v56 & 1) != 0 ? (v58 = *(_QWORD*)(a1 + 2504)) : (v58 = a1 + 2489),
           (v49 & 1) != 0 ? (v59 = v136_.v138)
                          : (v59 = (unsigned __int8*)&v136_.v136 + 1),
           (unsigned int)memcmp(v58, v59, v55) != 0)) {
        v60 = (__int64*)(a1 + 2488);
        if ((__int64*)(a1 + 2488) != &v136_.v136) {
          if ((v56 & 1) != 0) {
            if ((v49 & 1) != 0) {
              v62 = v136_.v138;
            }
            else {
              v62 = (unsigned __int8*)&v136_.v136 + 1;
            }
            SpineModel_64dde0(v60, (__int64)v62, v55);
          }
          else if ((v49 & 1) != 0) {
            GameRoutine_64df20(v60, (__int64)v136_.v138, v54);
          }
          else {
            v61 = v136_.v137;
            *v60 = v136_.v136;
            *(_QWORD*)(a1 + 2496) = v61;
            *(_QWORD*)(a1 + 2504) = v136_.v138;
          }
        }
        v63 = *(_DWORD*)(a1 + 2512);
        v82 = v63 < -1;
        v64 = ((_BYTE)v63 + 1) & 1;
        if (v82) {
          v65 = -v64;
        }
        else {
          v65 = v64;
        }
        *(_DWORD*)(a1 + 2512) = v65;
        snd_setListenerIndex(v65);
        if ((a2 & 0xFFFFFFFE) == 2 && v15 <= 1) {
          snd_setListenerPosition_100770();
        }
        v66 = snd_getUnknown38();
        v67 = v133_.v133;
        v133_.v134 = v133_.v133;
        v133_.v133[0] = GameData_1fbe0e0;
        v133_.v133[1] = a1;
        v68 = **(_QWORD**)(v66 + 24);
        if (v68 == 0) {
          goto LABEL_145;
        }
        v69 = *(_QWORD*)(v68 + 5616);
        v67 = v133_.v133;
        *(_QWORD*)v143 = v68;
        while (1) {
          (*(void (**)(_QWORD*, int*))(*v67 + 48LL))(v67, v143);
          v67 = v133_.v134;
          if (v69 == 0) {
            break;
          }
          *(_QWORD*)v143 = v69;
          v69 = *(_QWORD*)(v69 + 5616);
          if (v133_.v134 == nullptr) {
          LABEL_151:
            GameRoutine_60a310();
          }
        }
        if (v133_.v134 == v133_.v133) {
        LABEL_145:
          v70 = 32;
        }
        else {
          if (v133_.v134 == nullptr) {
          LABEL_147:
            v71 = snd_getUnknown10();
            v72 = v131_.v131;
            v131_.v132 = v131_.v131;
            v131_.v131[0] = GameData_1fbe2f0;
            v131_.v131[1] = a1;
            v73 = **(_QWORD**)(v71 + 24);
            if (v73 == 0) {
              goto LABEL_155;
            }
            v74 = *(_QWORD*)(v73 + 5616);
            v72 = v131_.v131;
            *(_QWORD*)v143 = v73;
            while (1) {
              (*(void (**)(_QWORD*, int*))(*v72 + 48LL))(v72, v143);
              v72 = v131_.v132;
              if (v74 == 0) {
                break;
              }
              *(_QWORD*)v143 = v74;
              v74 = *(_QWORD*)(v74 + 5616);
              if (v131_.v132 == nullptr) {
                goto LABEL_151;
              }
            }
            if (v131_.v132 == v131_.v131) {
            LABEL_155:
              v75 = 32;
            }
            else {
              if (v131_.v132 == nullptr) {
              LABEL_157:
                snd_Fade_Fade_10cb00((__int64)v143,
                                     "FadeTime_SE_ViewChange_Out");
                v76 = snd_Fade_getTime((__int64)v143);
                *(_DWORD*)(a1 + 520) = LODWORD(v76);
                snd_Fade_Destroy_Fade(v143);
                goto LABEL_158;
              }
              v75 = 40;
            }
            (*(void (**)(__int64))(*v72 + v75))((__int64)v72);
            goto LABEL_157;
          }
          v70 = 40;
        }
        (*(void (**)(__int64))(*v67 + v70))((__int64)v67);
        goto LABEL_147;
      }
    LABEL_158:
      if (a2 <= 5) {
        if (((1 << a2) & 0xB) != 0) {
          if ((v136_.v136 & 1) != 0) {
            v77 = v136_.v138;
          }
          else {
            v77 = (unsigned __int8*)&v136_.v136 + 1;
          }
          GameRoutine_e86f0((_QWORD*)a1, v77, "VIBRATION_FIELD");
        }
        else if (((1 << a2) & 0x24) != 0) {
          v78 = *(unsigned __int8*)(a1 + 2760);
          v79 = (v78 & 1) != 0 ? *(_QWORD*)(a1 + 2768) : v78 >> 1;
          if (v79 != 0) {
            if ((v136_.v136 & 1) != 0) {
              v80 = v136_.v138;
            }
            else {
              v80 = (unsigned __int8*)&v136_.v136 + 1;
            }
            GameManager_a2bd50(a1, v80, a2 == 5);
          }
        }
      }
    LABEL_173:
      v81 = *(_QWORD*)(a1 + 2768);
      v82 = *(int*)(a1 + 616) <= 0 && *(_DWORD*)(a1 + 620) <= 0;
      v88 = !v82 || *(_DWORD*)(a1 + 624) > 0 || *(_DWORD*)(a1 + 628) > 0 ||
            *(_DWORD*)(a1 + 632) > 0 || *(_DWORD*)(a1 + 636) > 0 ||
            *(_DWORD*)(a1 + 640) > 0;
      v89 = v45 | v88;
      v90 = *(unsigned __int8*)(a1 + 2760);
      if ((v90 & 1) == 0) {
        v81 = v90 >> 1;
      }
      if ((v89 & 1) != 0 && v81 != 0 &&
          ((v129 & 1) != 0 || (v45 & 1) != 0 || *(_DWORD*)(a1 + 2752) == 0 ||
           (v126 & v125) == 0)) {
        if ((v90 & 1) != 0) {
          v91 = *(const char**)(a1 + 2776);
        }
        else {
          v91 = (const char*)(a1 + 2761);
        }
        if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
          v92 = *(const char**)(a1 + 2744);
        }
        else {
          v92 = (const char*)(a1 + 2729);
        }
        if (a2 >= 2) {
          snd_Fade_Fade_10c830((__int64)v143, 0x0.0p+0f);
          GameManager_a2c3b0(a1, v91, v92, v128 == 1, v130 == 1, v127,
                             (__int64)v143);
          snd_Fade_Destroy_Fade(v143);
          if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
            v94 = *(char**)(a1 + 2776);
          }
          else {
            v94 = (char*)(a1 + 2761);
          }
          if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
            v95 = *(const char**)(a1 + 2744);
          }
          else {
            v95 = (const char*)(a1 + 2729);
          }
          snd_Fade_Fade_10c830((__int64)v143, 0x0.0p+0f);
          GameManager_a2c4f0((_QWORD*)a1, v94, v95, v128 == 1, v130 == 1, v127,
                             (__int64)v143);
          snd_Fade_Destroy_Fade(v143);
          if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
            v96 = *(char**)(a1 + 2776);
          }
          else {
            v96 = (char*)(a1 + 2761);
          }
          if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
            v97 = *(const char**)(a1 + 2744);
          }
          else {
            v97 = (const char*)(a1 + 2729);
          }
          if (a2 == 3) {
            snprintf(v143, 256, "%s_%s", v96, v97);
            LODWORD(v135[0]) =
                (unsigned int)snd_fnd_calcCrc32((unsigned __int8*)v143, 0);
            if (snd_data_findFieldData((int*)v135) != nullptr) {
              v96 = (char*)v143;
            }
            if ((*(_BYTE*)(a1 + 424) & 1) != 0) {
              v98 = *(_QWORD*)(a1 + 432);
            }
            else {
              v98 = *(_BYTE*)(a1 + 424) >> 1;
            }
            if (v98 != 0) {
              v144_.v144 = 0;
              v144_.v145 = 0x2000;
              GameRoutine_112180((__int64)&v144_.v144, a1 + 360);
              if ((*(_BYTE*)(a1 + 424) & 1) != 0) {
                v99 = *(const char**)(a1 + 440);
              }
              else {
                v99 = (const char*)(a1 + 425);
              }
              snd_a2fe30((void*)((__int64)v135), a1, &v144_.v144, v99,
                         v128 == 1, v130 == 1, v127, (__int64)v139,
                         (__int64)v139);
              GameRoutine_112180(a1 + 360, (__int64)v135);
            }
            if ((*(_BYTE*)(a1 + 448) & 1) != 0) {
              v100 = *(_QWORD*)(a1 + 456);
            }
            else {
              v100 = *(_BYTE*)(a1 + 448) >> 1;
            }
            if (v100 != 0) {
              v144_.v144 = 0;
              v144_.v145 = 0x2000;
              GameRoutine_112180((__int64)&v144_.v144, a1 + 376);
              if ((*(_BYTE*)(a1 + 448) & 1) != 0) {
                v101 = *(const char**)(a1 + 464);
              }
              else {
                v101 = (const char*)(a1 + 449);
              }
              snd_a2fe30((void*)((__int64)v135), a1, &v144_.v144, v101,
                         v128 == 1, v130 == 1, v127, (__int64)v139,
                         (__int64)v139);
              GameRoutine_112180(a1 + 376, (__int64)v135);
            }
            if ((*(_BYTE*)(a1 + 472) & 1) != 0) {
              v102 = *(_QWORD*)(a1 + 480);
            }
            else {
              v102 = *(_BYTE*)(a1 + 472) >> 1;
            }
            if (v102 != 0) {
              v144_.v144 = 0;
              v144_.v145 = 0x2000;
              GameRoutine_112180((__int64)&v144_.v144, a1 + 392);
              if ((*(_BYTE*)(a1 + 472) & 1) != 0) {
                v103 = *(const char**)(a1 + 488);
              }
              else {
                v103 = (const char*)(a1 + 473);
              }
              snd_a2fe30((void*)((__int64)v135), a1, &v144_.v144, v103,
                         v128 == 1, v130 == 1, v127, (__int64)v139,
                         (__int64)v139);
              GameRoutine_112180(a1 + 392, (__int64)v135);
            }
            if ((*(_BYTE*)(a1 + 496) & 1) != 0) {
              v104 = *(_QWORD*)(a1 + 504);
            }
            else {
              v104 = *(_BYTE*)(a1 + 496) >> 1;
            }
            if (v104 != 0) {
              v144_.v144 = 0;
              v144_.v145 = 0x2000;
              GameRoutine_112180((__int64)&v144_.v144, a1 + 408);
              if ((*(_BYTE*)(a1 + 496) & 1) != 0) {
                v105 = *(const char**)(a1 + 512);
              }
              else {
                v105 = (const char*)(a1 + 497);
              }
              snd_a2fe30((void*)((__int64)v135), a1, &v144_.v144, v105,
                         v128 == 1, v130 == 1, v127, (__int64)v139,
                         (__int64)v139);
              GameRoutine_112180(a1 + 408, (__int64)v135);
            }
            if ((snd_fnd_WeakHandle_isValid((__int64*)(a1 + 344)) & 1) != 0) {
              v106 = snd_fnd_WeakHandle_get(a1 + 344);
              (*(void (**)(__int64, _QWORD*, _QWORD, double))(
                  *(_QWORD*)(v106 - 5592) + 248LL))(v106 - 5592, v139, 0,
                                                    0x0.0p+0);
              snd_fnd_WeakHandle_reset(a1 + 344);
            }
            if ((*(_BYTE*)(a1 + 3048) & 1) != 0) {
              v107 = *(_BYTE**)(a1 + 3064);
              *(_QWORD*)(a1 + 3056) = 0;
            }
            else {
              v107 = (_BYTE*)(a1 + 3049);
              *(_BYTE*)(a1 + 3048) = 0;
            }
            *v107 = 0;
            LODWORD(v135[0]) =
                (unsigned int)snd_fnd_calcCrc32((unsigned __int8*)v96, 0);
            v123 = (const char**)snd_data_findFieldData((int*)v135);
            if (v123 != nullptr) {
              v124 = v123;
              if (v123[5] != nullptr) {
                v141_.v141 = 0;
                v141_.v142 = 0x2000;
                GameRoutine_112180((__int64)&v141_.v141, a1 + 344);
                snd_a2fe30((void*)((__int64)v135), a1, &v141_.v141, v124[5],
                           v128 == 1, v130 == 1, v127, (__int64)v139,
                           (__int64)v139);
                GameRoutine_112180(a1 + 344, (__int64)v135);
              }
            }
          }
          else {
            snprintf(v143, 256, "%s_%s", v96, v97);
            LODWORD(v135[0]) =
                (unsigned int)snd_fnd_calcCrc32((unsigned __int8*)v143, 0);
            if (snd_data_findFieldData((int*)v135) != nullptr) {
              v108 = (unsigned __int8*)v143;
            }
            else {
              v108 = (unsigned __int8*)v96;
            }
            GameManager_a32960(a1, v108, v128 == 1, v130 == 1, v127,
                               (__int64)v140);
          }
          goto LABEL_281;
        }
        snprintf(v143, 256, "%s_%s", v91, v92);
        LODWORD(v135[0]) =
            (unsigned int)snd_fnd_calcCrc32((unsigned __int8*)v143, 0);
        if (snd_data_findFieldData((int*)v135) != nullptr) {
          v93 = (unsigned __int8*)v143;
        }
        else {
          v93 = (unsigned __int8*)v91;
        }
        LODWORD(v135[0]) = (unsigned int)snd_fnd_calcCrc32(v93, 0);
        v109 = (const char**)snd_data_findFieldData((int*)v135);
        if (v109 != nullptr) {
          v110 = v109;
          if (v109[3] != nullptr) {
            v144_.v144 = 0;
            v144_.v145 = 0x2000;
            GameRoutine_112180((__int64)&v144_.v144, a1 + 344);
            snd_a2fe30((void*)((__int64)v135), a1, &v144_.v144, v110[3],
                       v128 == 1, v130 == 1, v127, (__int64)v140,
                       (__int64)v140);
            GameRoutine_112180(a1 + 344, (__int64)v135);
          }
        }
      }
      if (a2 <= 1 && (v25 & 0xFFFFFFFE) == 2) {
        v111 = *(unsigned __int8*)(a1 + 2760);
        v112 = *(_QWORD*)(a1 + 2768);
        if ((v111 & 1) == 0) {
          v112 = v111 >> 1;
        }
        if (v112 != 0) {
          v113 = (v111 & 1) != 0 ? *(unsigned __int8**)(a1 + 2776)
                                 : (unsigned __int8*)(a1 + 2761);
          v143[0] = (unsigned int)snd_fnd_calcCrc32(v113, 0);
          v114 = (float*)snd_data_findFieldData(v143);
          if (v114 != nullptr) {
            v115 = v114[2];
            v116 = v114;
            snd_Fade_Fade_10c830((__int64)v143, 0x1.f400000000000p+7f);
            snd_startBusVolume((__int64)v143, 0, 0, v115);
            snd_Fade_Destroy_Fade(v143);
            v117 = v116[3];
            snd_Fade_Fade_10c830((__int64)v143, 0x1.f400000000000p+7f);
            snd_startBusVolume((__int64)v143, 0, 1u, v117);
            snd_Fade_Destroy_Fade(v143);
            v118 = v116[4];
            snd_Fade_Fade_10c830((__int64)v143, 0x1.f400000000000p+7f);
            snd_startBusVolume((__int64)v143, 0, 2u, v118);
            snd_Fade_Destroy_Fade(v143);
          }
        }
      }
    LABEL_281:
      v119 = *(_DWORD*)(a1 + 2752);
      *(_DWORD*)(a1 + 2752) = a2;
      *(_DWORD*)(a1 + 2756) = v119;
      snd_Fade_Fade_10c910((__int64)v143, 125);
      v120 = 0x1.0000000000000p+0f;
      if (*(_DWORD*)(a1 + 2752) == 1 && *(int*)(a1 + 2480) >= 1) {
        v121 = snd_getDefineValue("SetVolume_SE_Bmap_FootStep");
        v120 = *(float*)&v121 / 0x1.9000000000000p+6f;
      }
      snd_startSlotVolume_100b50(&GameData_21fa960, (__int64)v143, v120);
      snd_Fade_Destroy_Fade(v143);
      if ((v136_.v136 & 1) != 0 && v136_.v138 != nullptr) {
        v122 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v122 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v122);
      }
      snd_Fade_Destroy_Fade(v139);
      return (__int64*)snd_Fade_Destroy_Fade(v140);
    }
  }
  if (a2 == 3) {
    v35 = v140;
  LABEL_60:
    GameManager_a2adb0(a1, (__int64)v35);
    goto LABEL_61;
  }
  if (a2 > 1) {
    goto LABEL_61;
  }
  if (v25 == 5) {
    snd_Fade_Fade_10c830((__int64)v135, 0x0.0p+0f);
    GameRoutine_e8270(a1, (__int64)v135);
    snd_Fade_Destroy_Fade(v135);
  }
  else {
    GameRoutine_e8270(a1, (__int64)v143);
    if (v25 == 3) {
      v35 = &v136_.v136;
      goto LABEL_60;
    }
  }
  v35 = (__int64*)v143;
  goto LABEL_60;
}

__int64 snd_a2a770(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  _BYTE* v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  double v23;
  char v24;
  _BYTE* v25;
  _BYTE* v26;
  char v27;
  _BYTE* v28;
  __int64 result;
  _QWORD v30[25];

  snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
  GameManager_a2adb0(a1, (__int64)v30);
  snd_Fade_Destroy_Fade(v30);
  if ((a2 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 8);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    snd_BGM_stopTracks(v4, (__int64)v30);
    snd_Fade_Destroy_Fade(v30);
    GameRoutine_e7cc0(a1);
  }
  snd_BGM_resetVolume(*(_QWORD*)(a1 + 8));
  snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 72LL))(a1, v30);
  snd_Fade_Destroy_Fade(v30);
  snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
  snd_resetMasterVolume((__int64)v30);
  snd_Fade_Destroy_Fade(v30);
  *(_QWORD*)(a1 + 2580) = 0xBF800000BF800000LL;
  *(_QWORD*)(a1 + 2588) = 0xBF800000BF800000LL;
  *(_DWORD*)(a1 + 2596) = -1082130432;
  (*(void (**)(__int64))(*(_QWORD*)a1 + 184LL))(a1);
  GameRoutine_ecb70((__int64)"onHub");
  GameRoutine_ecb70((__int64)"onGmap");
  GameRoutine_ecb70((__int64)"onBmap");
  GameRoutine_ecb70((__int64)"field");
  if ((*(_BYTE*)(a1 + 2632) & 1) != 0) {
    v5 = *(_BYTE**)(a1 + 2648);
    *(_QWORD*)(a1 + 2640) = 0;
  }
  else {
    v5 = (_BYTE*)(a1 + 2633);
    *(_BYTE*)(a1 + 2632) = 0;
  }
  *v5 = 0;
  if ((*(_BYTE*)(a1 + 2608) & 1) != 0) {
    v6 = *(_BYTE**)(a1 + 2624);
    *(_QWORD*)(a1 + 2616) = 0;
  }
  else {
    v6 = (_BYTE*)(a1 + 2609);
    *(_BYTE*)(a1 + 2608) = 0;
  }
  *v6 = 0;
  *(_QWORD*)(a1 + 2752) = 0;
  snd_unloadUnused();
  snd_clearStreams();
  snd_findSlot_100a50((void*)(v30), &GameData_21fa938);
  v7 = snd_fnd_WeakHandle_get((__int64)v30);
  if (v7 != 0) {
    v8 = v7;
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v8 - 5552) + 96LL))(
        v8 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v8 - 5552) + 112LL))(
        v8 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v8 - 5552) + 272LL))(
        v8 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v8 - 5552) + 288LL))(
        v8 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
  }
  snd_findSlot_100a50((void*)(v30), &GameData_21fa93c);
  v9 = snd_fnd_WeakHandle_get((__int64)v30);
  if (v9 != 0) {
    v10 = v9;
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v10 - 5552) + 96LL))(
        v10 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v10 - 5552) + 112LL))(
        v10 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v10 - 5552) + 272LL))(
        v10 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v10 - 5552) + 288LL))(
        v10 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
  }
  snd_findSlot_100a50((void*)(v30), &GameData_21fa940);
  v11 = snd_fnd_WeakHandle_get((__int64)v30);
  if (v11 != 0) {
    v12 = v11;
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v12 - 5552) + 96LL))(
        v12 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v12 - 5552) + 112LL))(
        v12 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v12 - 5552) + 272LL))(
        v12 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v12 - 5552) + 288LL))(
        v12 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
  }
  snd_findSlot_100a50((void*)(v30), &GameData_21fa944);
  v13 = snd_fnd_WeakHandle_get((__int64)v30);
  if (v13 != 0) {
    v14 = v13;
    snd_Fade_Fade_10c830((__int64)v30, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v14 - 5552) + 96LL))(
        v14 - 5552, v30, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v30);
  }
  *(_QWORD*)(a1 + 592) = 0;
  *(_BYTE*)(a1 + 600) = 1;
  *(_DWORD*)(a1 + 603) = 0;
  *(_DWORD*)(a1 + 606) = 0;
  if ((*(_BYTE*)(a1 + 2656) & 1) != 0) {
    v15 = *(_BYTE**)(a1 + 2672);
    *(_QWORD*)(a1 + 2664) = 0;
  }
  else {
    v15 = (_BYTE*)(a1 + 2657);
    *(_BYTE*)(a1 + 2656) = 0;
  }
  *v15 = 0;
  if ((*(_BYTE*)(a1 + 2680) & 1) != 0) {
    v16 = *(_BYTE**)(a1 + 2696);
    *(_QWORD*)(a1 + 2688) = 0;
  }
  else {
    v16 = (_BYTE*)(a1 + 2681);
    *(_BYTE*)(a1 + 2680) = 0;
  }
  *v16 = 0;
  if ((*(_BYTE*)(a1 + 2704) & 1) != 0) {
    v17 = *(_BYTE**)(a1 + 2720);
    *(_QWORD*)(a1 + 2712) = 0;
  }
  else {
    v17 = (_BYTE*)(a1 + 2705);
    *(_BYTE*)(a1 + 2704) = 0;
  }
  *v17 = 0;
  if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
    v18 = *(_BYTE**)(a1 + 2744);
    *(_QWORD*)(a1 + 2736) = 0;
  }
  else {
    v18 = (_BYTE*)(a1 + 2729);
    *(_BYTE*)(a1 + 2728) = 0;
  }
  *v18 = 0;
  *(_BYTE*)(a1 + 2516) = 0;
  *(_BYTE*)(a1 + 611) = 0;
  *(_BYTE*)(a1 + 3076) = 0;
  *(_BYTE*)(a1 + 3128) = 0;
  *(_DWORD*)(a1 + 2192) = -1;
  snd_fnd_WeakHandle_reset(a1 + 360);
  if ((*(_BYTE*)(a1 + 424) & 1) != 0) {
    v19 = *(_BYTE**)(a1 + 440);
    *(_QWORD*)(a1 + 432) = 0;
  }
  else {
    v19 = (_BYTE*)(a1 + 425);
    *(_BYTE*)(a1 + 424) = 0;
  }
  *v19 = 0;
  snd_fnd_WeakHandle_reset(a1 + 376);
  if ((*(_BYTE*)(a1 + 448) & 1) != 0) {
    v20 = *(_BYTE**)(a1 + 464);
    *(_QWORD*)(a1 + 456) = 0;
  }
  else {
    v20 = (_BYTE*)(a1 + 449);
    *(_BYTE*)(a1 + 448) = 0;
  }
  *v20 = 0;
  snd_fnd_WeakHandle_reset(a1 + 392);
  if ((*(_BYTE*)(a1 + 472) & 1) != 0) {
    v21 = *(_BYTE**)(a1 + 488);
    *(_QWORD*)(a1 + 480) = 0;
  }
  else {
    v21 = (_BYTE*)(a1 + 473);
    *(_BYTE*)(a1 + 472) = 0;
  }
  *v21 = 0;
  snd_fnd_WeakHandle_reset(a1 + 408);
  if ((*(_BYTE*)(a1 + 496) & 1) != 0) {
    v22 = *(_BYTE**)(a1 + 512);
    *(_QWORD*)(a1 + 504) = 0;
  }
  else {
    v22 = (_BYTE*)(a1 + 497);
    *(_BYTE*)(a1 + 496) = 0;
  }
  *v22 = 0;
  snd_Fade_Fade_10cb00((__int64)v30, "FadeTime_SE_ViewChange_Out");
  v23 = snd_Fade_getTime((__int64)v30);
  *(_DWORD*)(a1 + 520) = LODWORD(v23);
  snd_Fade_Destroy_Fade(v30);
  v24 = *(_BYTE*)(a1 + 656);
  *(_WORD*)(a1 + 2600) = 0;
  if ((v24 & 1) != 0) {
    v25 = *(_BYTE**)(a1 + 672);
    *(_QWORD*)(a1 + 664) = 0;
  }
  else {
    v25 = (_BYTE*)(a1 + 657);
    *(_BYTE*)(a1 + 656) = 0;
  }
  *v25 = 0;
  if ((*(_BYTE*)(a1 + 680) & 1) != 0) {
    v26 = *(_BYTE**)(a1 + 696);
    *(_QWORD*)(a1 + 688) = 0;
  }
  else {
    v26 = (_BYTE*)(a1 + 681);
    *(_BYTE*)(a1 + 680) = 0;
  }
  *v26 = 0;
  *(_WORD*)(a1 + 704) = 0;
  v27 = *(_BYTE*)(a1 + 3136);
  *(_BYTE*)(a1 + 706) = 0;
  if ((v27 & 1) != 0) {
    v28 = *(_BYTE**)(a1 + 3152);
    *(_QWORD*)(a1 + 3144) = 0;
  }
  else {
    v28 = (_BYTE*)(a1 + 3137);
    *(_BYTE*)(a1 + 3136) = 0;
  }
  *v28 = 0;
  *(_BYTE*)(a1 + 3160) = 0;
  result = GameManager_a20000(a1);
  *(_QWORD*)(a1 + 2564) = 0;
  *(_QWORD*)(a1 + 2572) = 0;
  *(_QWORD*)(a1 + 2548) = 0;
  *(_QWORD*)(a1 + 2556) = 0;
  return result;
}

__int64 snd_a2b3e0(__int64 a1, __int64 a2, unsigned __int64 a3, char* a4,
                   unsigned __int64 a5)
{
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  char v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int8* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 result;
  int v46;
  __int64 v47;
  __int64 v48;
  char v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  int v54;
  const char* v55;
  __int64 v56;
  __int64 v57;
  char v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  int v63;
  unsigned __int8* v64;
  int v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  bool v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  bool v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64* v82;
  __int64 v83;
  bool v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int8* v88;
  __int64 v89;
  int v90;
  __int64* v91;
  __int64 v92;
  const char* v93;
  const char* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  char v100;
  __int64 v101;
  struct {
    __int64 v102;
    unsigned __int64 v103;
    __int64 v104;
  } v102_;
  struct {
    __int64 v105;
    unsigned __int64 v106;
    unsigned __int8* v107;
  } v105_;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_223;
  }
  if (a3 >= 0x17) {
    v10 = a2;
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v11, 16,
                                              0);
    a2 = v10;
    v9 = (char*)v12;
    v105_.v106 = a3;
    v105_.v107 = (unsigned __int8*)v12;
    v105_.v105 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v105_.v105) = 2 * a3;
  v9 = (char*)&v105_.v105 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove(v9, a2, a3);
  }
  v9[a3] = 0;
  v13 = (unsigned __int64)(unsigned __int8)v105_.v105 >> 1;
  if ((v105_.v105 & 1) != 0) {
    v14 = v105_.v107;
  }
  else {
    v14 = (unsigned __int8*)&v105_.v105 + 1;
  }
  if ((v105_.v105 & 1) != 0) {
    v13 = v105_.v106;
  }
  if (v13 != 0) {
    v15 = v13;
    while (v15 != 0) {
      v16 = v14[--v15];
      if (v16 == 47) {
        goto LABEL_21;
      }
    }
  }
  v15 = -1;
LABEL_21:
  v17 = v15 + 1;
  v18 = v13 - (v15 + 1);
  if (v13 < v15 + 1) {
    String_60a230();
  }
  v19 = v13 + ~v15;
  if (v18 >= v19) {
    v20 = v19;
  }
  else {
    v20 = v18;
  }
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_223:
    String_60a1d0();
  }
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v20 | 7) + 1;
    }
    v21 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v22, 16, 0);
    v102_.v103 = v20;
    v102_.v104 = (__int64)v21;
    v102_.v102 = v22 | 1;
  }
  else {
    LOBYTE(v102_.v102) = 2 * v20;
    v21 = (char*)&v102_.v102 + 1;
    if (v20 == 0) {
      goto LABEL_34;
    }
  }
  memmove(v21, &v14[v17], v20);
LABEL_34:
  v23 = v105_.v105;
  v21[v20] = 0;
  if ((v23 & 1) != 0 && v105_.v107 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  v105_.v105 = v102_.v102;
  v105_.v106 = v102_.v103;
  v105_.v107 = (unsigned __int8*)v102_.v104;
  if (strstr(a4, "_Default") != 0) {
    a4 = &GameData_1a9f09e;
    v25 = 0;
  }
  else {
    v25 = a5;
  }
  if ((v105_.v105 & 1) != 0) {
    v26 = v105_.v107;
  }
  else {
    v26 = (unsigned __int8*)&v105_.v105 + 1;
  }
  LODWORD(v102_.v102) = (unsigned int)snd_fnd_calcCrc32(v26, 0);
  snd_data_findFieldData((int*)&v102_.v102);
  v27 = *(unsigned __int8*)(a1 + 2608);
  v28 = (__int64*)(a1 + 2608);
  v29 = (__int64*)(a1 + 2632);
  if ((*(_BYTE*)(a1 + 2632) & 1) != 0) {
    v31 = (v27 & 1) == 0;
    v32 = v27 >> 1;
    if (v31) {
      v33 = a1 + 2609;
    }
    else {
      v33 = *(_QWORD*)(a1 + 2624);
    }
    if (v31) {
      v34 = v32;
    }
    else {
      v34 = *(_QWORD*)(a1 + 2616);
    }
    SpineModel_64dde0(v29, v33, v34);
  }
  else if ((v27 & 1) != 0) {
    GameRoutine_64df20(v29, *(_QWORD*)(a1 + 2624), *(_QWORD*)(a1 + 2616));
  }
  else {
    v30 = *(_QWORD*)(a1 + 2616);
    *v29 = *v28;
    *(_QWORD*)(a1 + 2640) = v30;
    *(_QWORD*)(a1 + 2648) = *(_QWORD*)(a1 + 2624);
  }
  if (v28 != &v105_.v105) {
    if ((*(_BYTE*)v28 & 1) != 0) {
      if ((v105_.v105 & 1) != 0) {
        v36 = v105_.v107;
      }
      else {
        v36 = (unsigned __int8*)&v105_.v105 + 1;
      }
      if ((v105_.v105 & 1) != 0) {
        v37 = v105_.v106;
      }
      else {
        v37 = (unsigned __int64)(unsigned __int8)v105_.v105 >> 1;
      }
      SpineModel_64dde0((__int64*)(a1 + 2608), (__int64)v36, v37);
    }
    else if ((v105_.v105 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 2608), (__int64)v105_.v107, v105_.v106);
    }
    else {
      v35 = v105_.v106;
      *v28 = v105_.v105;
      *(_QWORD*)(a1 + 2616) = v35;
      *(_QWORD*)(a1 + 2624) = v105_.v107;
    }
  }
  GameRoutine_60a060((char*)(a1 + 2728), (__int64)a4, v25);
  if (*(int*)(a1 + 628) < 1) {
    if (*(int*)(a1 + 620) >= 1) {
      GroupCtrl_ecb80((void*)(&v102_.v102));
      if ((*(_BYTE*)(a1 + 2608) & 1) != 0) {
        v47 = *(_QWORD*)(a1 + 2624);
      }
      else {
        v47 = a1 + 2609;
      }
      v48 = strlen(v47);
      v49 = v102_.v102;
      v50 = v102_.v103;
      if ((v102_.v102 & 1) == 0) {
        v50 = (unsigned __int8)v102_.v102 >> 1;
      }
      if (v48 == v50) {
        v51 = v48;
        if (v48 == -1) {
          goto LABEL_225;
        }
        v52 = v102_.v104;
        if ((v102_.v102 & 1) != 0) {
          v53 = (char*)v102_.v104;
        }
        else {
          v53 = (char*)&v102_.v102 + 1;
        }
        result = memcmp(v53, v47, v51);
        v54 = result;
        if ((v49 & 1) != 0) {
          result = (*(__int64 (**)(_QWORD, __int64))(
              **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                       v52);
          if (v54 == 0) {
            goto LABEL_127;
          }
        }
        else if ((_DWORD)result == 0) {
          goto LABEL_127;
        }
      }
      else if ((v102_.v102 & 1) != 0) {
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
            *snd_g_memory_ptr[0], v102_.v104);
      }
      v55 = "onGmap";
      goto LABEL_123;
    }
    if (*(int*)(a1 + 616) < 1) {
      GameRoutine_ecb70((__int64)"onHub");
      GameRoutine_ecb70((__int64)"onGmap");
      GameRoutine_ecb70((__int64)"onBmap");
      GameRoutine_ecb70((__int64)"field");
      v55 = "field";
      goto LABEL_123;
    }
    GroupCtrl_ecb80((void*)(&v102_.v102));
    if ((*(_BYTE*)(a1 + 2608) & 1) != 0) {
      v56 = *(_QWORD*)(a1 + 2624);
    }
    else {
      v56 = a1 + 2609;
    }
    v57 = strlen(v56);
    v58 = v102_.v102;
    v59 = v102_.v103;
    if ((v102_.v102 & 1) == 0) {
      v59 = (unsigned __int8)v102_.v102 >> 1;
    }
    if (v57 == v59) {
      v60 = v57;
      if (v57 == -1) {
        goto LABEL_225;
      }
      v61 = v102_.v104;
      if ((v102_.v102 & 1) != 0) {
        v62 = (char*)v102_.v104;
      }
      else {
        v62 = (char*)&v102_.v102 + 1;
      }
      result = memcmp(v62, v56, v60);
      v63 = result;
      if ((v58 & 1) != 0) {
        result = (*(__int64 (**)(_QWORD, __int64))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v61);
        if (v63 == 0) {
          goto LABEL_127;
        }
      }
      else if ((_DWORD)result == 0) {
        goto LABEL_127;
      }
    }
    else if ((v102_.v102 & 1) != 0) {
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v102_.v104);
    }
    v55 = "onBmap";
    goto LABEL_123;
  }
  GroupCtrl_ecb80((void*)(&v102_.v102));
  if ((*(_BYTE*)(a1 + 2608) & 1) != 0) {
    v38 = *(_QWORD*)(a1 + 2624);
  }
  else {
    v38 = a1 + 2609;
  }
  v39 = strlen(v38);
  v40 = v102_.v102;
  v41 = v102_.v103;
  if ((v102_.v102 & 1) == 0) {
    v41 = (unsigned __int8)v102_.v102 >> 1;
  }
  if (v39 == v41) {
    v42 = v39;
    if (v39 != -1) {
      v43 = v102_.v104;
      if ((v102_.v102 & 1) != 0) {
        v44 = (char*)v102_.v104;
      }
      else {
        v44 = (char*)&v102_.v102 + 1;
      }
      result = memcmp(v44, v38, v42);
      v46 = result;
      if ((v40 & 1) != 0) {
        result = (*(__int64 (**)(_QWORD, __int64))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v43);
        if (v46 == 0) {
          goto LABEL_127;
        }
      }
      else if ((_DWORD)result == 0) {
        goto LABEL_127;
      }
      goto LABEL_99;
    }
  LABEL_225:
    snd_a36650();
  }
  if ((v102_.v102 & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v102_.v104);
  }
LABEL_99:
  v55 = "onHub";
LABEL_123:
  if ((v105_.v105 & 1) != 0) {
    v64 = v105_.v107;
  }
  else {
    v64 = (unsigned __int8*)&v105_.v105 + 1;
  }
  result = GameRoutine_ecb50((__int64)v55, (__int64)v64);
LABEL_127:
  v65 = *(_DWORD*)(a1 + 2752);
  if (v65 != 5 && (v65 != 0 || *(_DWORD*)(a1 + 2756) != 5)) {
    v66 = (*(_BYTE*)(a1 + 656) & 1) != 0 ? *(_QWORD*)(a1 + 664)
                                         : *(_BYTE*)(a1 + 656) >> 1;
    if (v66 == 0) {
      goto LABEL_207;
    }
  }
  v67 = *(unsigned __int8*)(a1 + 2760);
  v68 = (__int64*)(a1 + 2760);
  v69 = (__int64*)(a1 + 2784);
  if ((*(_BYTE*)(a1 + 2784) & 1) != 0) {
    v71 = (v67 & 1) == 0;
    v72 = v67 >> 1;
    if (v71) {
      v73 = a1 + 2761;
    }
    else {
      v73 = *(_QWORD*)(a1 + 2776);
    }
    if (v71) {
      v74 = v72;
    }
    else {
      v74 = *(_QWORD*)(a1 + 2768);
    }
    SpineModel_64dde0(v69, v73, v74);
  }
  else if ((v67 & 1) != 0) {
    GameRoutine_64df20(v69, *(_QWORD*)(a1 + 2776), *(_QWORD*)(a1 + 2768));
  }
  else {
    v70 = *(_QWORD*)(a1 + 2768);
    *v69 = *v68;
    *(_QWORD*)(a1 + 2792) = v70;
    *(_QWORD*)(a1 + 2800) = *(_QWORD*)(a1 + 2776);
  }
  v75 = *(unsigned __int8*)v28;
  if ((*(_BYTE*)v68 & 1) != 0) {
    v77 = (v75 & 1) == 0;
    v78 = v75 >> 1;
    if (v77) {
      v79 = a1 + 2609;
    }
    else {
      v79 = *(_QWORD*)(a1 + 2624);
    }
    if (v77) {
      v80 = v78;
    }
    else {
      v80 = *(_QWORD*)(a1 + 2616);
    }
    SpineModel_64dde0((__int64*)(a1 + 2760), v79, v80);
  }
  else if ((v75 & 1) != 0) {
    GameRoutine_64df20((_QWORD*)(a1 + 2760), *(_QWORD*)(a1 + 2624),
                       *(_QWORD*)(a1 + 2616));
  }
  else {
    v76 = *(_QWORD*)(a1 + 2616);
    *v68 = *v28;
    *(_QWORD*)(a1 + 2768) = v76;
    *(_QWORD*)(a1 + 2776) = *(_QWORD*)(a1 + 2624);
  }
  v81 = *(unsigned __int8*)(a1 + 2608);
  v82 = (__int64*)(a1 + 2656);
  if ((*(_BYTE*)(a1 + 2656) & 1) != 0) {
    v84 = (v81 & 1) == 0;
    v85 = v81 >> 1;
    if (v84) {
      v86 = a1 + 2609;
    }
    else {
      v86 = *(_QWORD*)(a1 + 2624);
    }
    if (v84) {
      v87 = v85;
    }
    else {
      v87 = *(_QWORD*)(a1 + 2616);
    }
    SpineModel_64dde0(v82, v86, v87);
  }
  else if ((v81 & 1) != 0) {
    GameRoutine_64df20(v82, *(_QWORD*)(a1 + 2624), *(_QWORD*)(a1 + 2616));
  }
  else {
    v83 = *(_QWORD*)(a1 + 2616);
    *v82 = *v28;
    *(_QWORD*)(a1 + 2664) = v83;
    *(_QWORD*)(a1 + 2672) = *(_QWORD*)(a1 + 2624);
  }
  if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
    v88 = *(unsigned __int8**)(a1 + 2776);
  }
  else {
    v88 = (unsigned __int8*)(a1 + 2761);
  }
  GameManager_a2bd50(a1, v88, 1);
  if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
    v89 = *(_QWORD*)(a1 + 2776);
  }
  else {
    v89 = a1 + 2761;
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 128LL))(a1, v89);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v90 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    if (v90 >= 4) {
      if (GameData_21c96d8 != 0 &&
          (v91 = game_9a28e0(71), game_GameModeData_instance_ != 0) &&
          (v92 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v91)) != 0 &&
          *(_DWORD*)(v92 + 32) != 0) {
        v90 = 4;
      }
      else {
        v90 = 3;
      }
    }
    if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
      v95 = *(_QWORD*)(a1 + 2776);
    }
    else {
      v95 = a1 + 2761;
    }
    if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
      v96 = *(_QWORD*)(a1 + 2744);
    }
    else {
      v96 = a1 + 2729;
    }
    sprintf(GameData_21fa970, "%s_P3S%d*%s", v95, (unsigned int)v90, v96);
    result = GameRoutine_610540(GameData_21fa970, &GameData_1a9f09e);
    if (result != 0) {
      goto LABEL_201;
    }
    v97 = (*(_BYTE*)(a1 + 2760) & 1) != 0 ? *(_QWORD*)(a1 + 2776) : a1 + 2761;
    sprintf(GameData_21fa970, "%s_P3S%d", v97, (unsigned int)v90);
    result = GameRoutine_610540(GameData_21fa970, &GameData_1a9f09e);
    if (result != 0) {
      goto LABEL_201;
    }
    if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
      v93 = *(const char**)(a1 + 2776);
    }
    else {
      v93 = (const char*)(a1 + 2761);
    }
    if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
      v94 = *(const char**)(a1 + 2744);
    }
    else {
      v94 = (const char*)(a1 + 2729);
    }
  }
  else {
    if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
      v93 = *(const char**)(a1 + 2776);
    }
    else {
      v93 = (const char*)(a1 + 2761);
    }
    if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
      v94 = *(const char**)(a1 + 2744);
    }
    else {
      v94 = (const char*)(a1 + 2729);
    }
  }
  sprintf(GameData_21fa970, "%s*%s", v93, v94);
  result = GameRoutine_610540(GameData_21fa970, &GameData_1a9f09e);
  if (result != 0) {
  LABEL_201:
    result = GameRoutine_60a020(a1 + 2760, *(_QWORD*)(result + 32));
  }
  if ((*(_BYTE*)(a1 + 656) & 1) != 0) {
    v98 = *(_QWORD*)(a1 + 664);
  }
  else {
    v98 = *(_BYTE*)(a1 + 656) >> 1;
  }
  if (v98 != 0) {
    *(_BYTE*)(a1 + 706) = 1;
  }
LABEL_207:
  if (GameData_21c6978 != 0) {
    v99 = *(_QWORD*)(GameData_21c6978 + 32);
    if (v99 != *(_QWORD*)(GameData_21c6978 + 24) && *(_QWORD*)(v99 - 8) != 0) {
      *(_QWORD*)(a1 + 576) = *(_QWORD*)(a1 + 568);
      result = (__int64)GameRoutine_1905100((unsigned __int64*)(a1 + 568));
      *(_DWORD*)(a1 + 560) = 1;
    }
  }
  v100 = v105_.v105;
  *(_BYTE*)(a1 + 610) = 0;
  if ((v100 & 1) != 0 && v105_.v107 != nullptr) {
    v101 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v101 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v101);
  }
  return result;
}

__int64 snd_a2bea0(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  unsigned __int64* v3;
  __int64 v5;
  __int64 result;
  char v7;
  __int64 v8;
  const char* v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  _BYTE* v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  char v23;
  struct {
    _QWORD v24[2];
    char* v25;
  } v24_;
  _QWORD v26[3];

  v1 = *(_QWORD*)(a1 + 568);
  v2 = *(_QWORD*)(a1 + 576);
  v3 = (unsigned __int64*)(a1 + 568);
  if (v1 != v2) {
    do {
      if ((snd_fnd_WeakHandle_isValid((__int64*)(v1 + 40)) & 1) != 0) {
        v5 = snd_fnd_WeakHandle_get(v1 + 40);
        (*(void (**)(__int64))(*(_QWORD*)(v5 - 5592) + 264LL))(v5 - 5592);
      }
      v1 += 56LL;
    } while (v1 != v2);
    v1 = *v3;
  }
  *(_QWORD*)(a1 + 576) = v1;
  GameRoutine_1905100(v3);
  *(_DWORD*)(a1 + 560) = 0;
  result = X8CALL_X0(__int64, GroupCtrl_ecb80((void*)(v26)));
  v7 = v26[0] & 1;
  v8 = LOBYTE(v26[0]) >> 1;
  if ((v26[0] & 1) != 0) {
    v8 = v26[1];
  }
  if (v8 != 0) {
    if (*(int*)(a1 + 628) <= 0) {
      if (*(int*)(a1 + 620) <= 0) {
        if (*(int*)(a1 + 616) <= 0) {
          GameRoutine_ecb70((__int64)"onHub");
          GameRoutine_ecb70((__int64)"onGmap");
          GameRoutine_ecb70((__int64)"onBmap");
          v9 = "field";
        }
        else {
          v9 = "onBmap";
        }
      }
      else {
        v9 = "onGmap";
      }
    }
    else {
      v9 = "onHub";
    }
    GameRoutine_ecb70((__int64)v9);
    v10 = *(unsigned __int8*)(a1 + 2608);
    v11 = (__int64*)(a1 + 2632);
    if ((*(_BYTE*)(a1 + 2632) & 1) != 0) {
      v13 = (v10 & 1) == 0;
      v14 = v10 >> 1;
      if (v13) {
        v15 = a1 + 2609;
      }
      else {
        v15 = *(_QWORD*)(a1 + 2624);
      }
      if (v13) {
        v16 = v14;
      }
      else {
        v16 = *(_QWORD*)(a1 + 2616);
      }
      SpineModel_64dde0(v11, v15, v16);
    }
    else if ((v10 & 1) != 0) {
      GameRoutine_64df20(v11, *(_QWORD*)(a1 + 2624), *(_QWORD*)(a1 + 2616));
    }
    else {
      v12 = *(_QWORD*)(a1 + 2616);
      *v11 = *(_QWORD*)(a1 + 2608);
      *(_QWORD*)(a1 + 2640) = v12;
      *(_QWORD*)(a1 + 2648) = *(_QWORD*)(a1 + 2624);
    }
    GroupCtrl_ecb80((void*)(v24_.v24));
    if ((v24_.v24[0] & 1) != 0) {
      v17 = v24_.v24[1];
    }
    else {
      v17 = (unsigned __int64)LOBYTE(v24_.v24[0]) >> 1;
    }
    if ((v24_.v24[0] & 1) != 0) {
      v18 = v24_.v25;
    }
    else {
      v18 = (char*)v24_.v24 + 1;
    }
    result = (__int64)GameRoutine_60a060((char*)(a1 + 2608), (__int64)v18, v17);
    if ((v24_.v24[0] & 1) != 0) {
      result = (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                               24LL))(*snd_g_memory_ptr[0],
                                                      v24_.v25);
    }
    if (*(_DWORD*)(a1 + 628) == 0) {
      if ((*(_BYTE*)(a1 + 2656) & 1) != 0) {
        v19 = *(_BYTE**)(a1 + 2672);
        *(_QWORD*)(a1 + 2664) = 0;
      }
      else {
        v19 = (_BYTE*)(a1 + 2657);
        *(_BYTE*)(a1 + 2656) = 0;
      }
      *v19 = 0;
      if ((*(_BYTE*)(a1 + 2680) & 1) != 0) {
        v20 = *(_BYTE**)(a1 + 2696);
        *(_QWORD*)(a1 + 2688) = 0;
      }
      else {
        v20 = (_BYTE*)(a1 + 2681);
        *(_BYTE*)(a1 + 2680) = 0;
      }
      *v20 = 0;
      if ((*(_BYTE*)(a1 + 2704) & 1) != 0) {
        v21 = *(_BYTE**)(a1 + 2720);
        *(_QWORD*)(a1 + 2712) = 0;
      }
      else {
        v21 = (_BYTE*)(a1 + 2705);
        *(_BYTE*)(a1 + 2704) = 0;
      }
      *v21 = 0;
      if ((*(_BYTE*)(a1 + 2728) & 1) != 0) {
        v22 = *(_BYTE**)(a1 + 2744);
        *(_QWORD*)(a1 + 2736) = 0;
      }
      else {
        v22 = (_BYTE*)(a1 + 2729);
        *(_BYTE*)(a1 + 2728) = 0;
      }
      *v22 = 0;
    }
    v23 = v26[0];
    *(_BYTE*)(a1 + 706) = 0;
    v7 = v23 & 1;
  }
  if (v7 != 0) {
    return (*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v26[2]);
  }
  return result;
}

__int64 snd_a2c9c0(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  double v3;
  __int64 v4;
  _BYTE* v5;
  _QWORD v6[25];
  _QWORD v7[25];

  if ((*(_BYTE*)(result + 3128) & 1) == 0) {
    v2 = result;
    snd_Fade_Fade_10cd70((__int64)v7, a2);
    v3 = snd_Fade_getTime((__int64)v7);
    if (*(float*)&v3 < 0x0.0p+0f) {
      snd_Fade_Fade_10c830((__int64)v6, 0x1.f400000000000p+9f);
      GameRoutine_10d050((__int64)v7, (__int64)v6);
      snd_Fade_Destroy_Fade(v6);
    }
    snd_BGM_getFirstHandle((void*)((__int64)v6), *(_QWORD*)(v2 + 8));
    v4 = snd_fnd_WeakHandle_get((__int64)v6);
    if (v4 != 0 && !snd_Voice_hasSends(v4 - 5592)) {
      (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(v2 + 8) + 48LL))(
          *(_QWORD*)(v2 + 8), v7, 0);
    }
    if ((*(_BYTE*)(v2 + 2824) & 1) != 0) {
      v5 = *(_BYTE**)(v2 + 2840);
      *(_QWORD*)(v2 + 2832) = 0;
    }
    else {
      v5 = (_BYTE*)(v2 + 2825);
      *(_BYTE*)(v2 + 2824) = 0;
    }
    *v5 = 0;
    if ((*(_BYTE*)(v2 + 652) & 1) == 0) {
      *(_DWORD*)(v2 + 2192) = -1;
    }
    return snd_Fade_Destroy_Fade(v7);
  }
  return result;
}

unsigned __int64 snd_a2d2b0(__int64 a1, unsigned __int8* a2, char* a3, char* a4,
                            char a5, char a6, float a7)
{

#pragma clang fp contract(off)
  char* v14;
  unsigned __int64 result;
  unsigned __int64 v16;
  char* v17;
  char v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  __int64 v28;
  int v29;
  _BYTE* v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  int v34;
  bool v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  _BYTE* v39;
  int v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64* v52;
  char* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64* v58;
  unsigned __int64 v59;
  char* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  int v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  _QWORD v74[25];
  struct {
    __int64 v75;
    unsigned __int64 v76;
    char* v77;
  } v75_;

  if (*(int*)(a1 + 628) < 1) {
    goto LABEL_52;
  }
  if (a2 != nullptr) {
    v14 = (char*)a2;
  }
  else {
    v14 = &GameData_1a9f09e;
  }
  result = strlen(v14);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v16 = result;
  if (result >= 0x17) {
    v18 = a5;
    v19 = a6;
    if ((result | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (result | 7) + 1;
    }
    v21 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v20, 16,
                                              0);
    v22 = v20 | 1;
    v17 = (char*)v21;
    v75_.v76 = v16;
    v75_.v77 = (char*)v21;
    a6 = v19;
    a5 = v18;
    v75_.v75 = v22;
  }
  else {
    LOBYTE(v75_.v75) = 2 * result;
    v17 = (char*)&v75_.v75 + 1;
    if (result == 0) {
      goto LABEL_14;
    }
  }
  result = memcpy(v17, v14, v16);
LABEL_14:
  v17[v16] = 0;
  v23 = v75_.v75;
  if ((v75_.v75 & 1) != 0) {
    v24 = v75_.v76;
  }
  else {
    v24 = (unsigned __int8)v75_.v75 >> 1;
  }
  if (v24 != 0) {
    v25 = *(unsigned __int8*)(a1 + 2760);
    v26 = *(_QWORD*)(a1 + 2768);
    if ((v25 & 1) == 0) {
      v26 = v25 >> 1;
    }
    if (v24 != v26 ||
        ((v75_.v75 & 1) == 0 ? (v27 = (char*)&v75_.v75 + 1) : (v27 = v75_.v77),
         (v25 & 1) != 0 ? (v28 = *(_QWORD*)(a1 + 2776)) : (v28 = a1 + 2761),
         (_DWORD)(result = memcmp(v27, v28, v24)) != 0)) {
      snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
      v29 = *(_DWORD*)(a1 + 628);
      if (v29 == 0) {
        goto LABEL_46;
      }
      v30 = (_BYTE*)(a1 + 2760);
      *(_DWORD*)(a1 + 628) = v29 - 1;
      GameManager_a2c910((_DWORD*)a1, (__int64)v74);
      v31 = *(unsigned __int8*)(a1 + 2760);
      v32 = (__int64*)(a1 + 2784);
      if ((*(_BYTE*)(a1 + 2784) & 1) != 0) {
        v35 = (v31 & 1) == 0;
        v36 = v31 >> 1;
        if (v35) {
          v37 = a1 + 2761;
        }
        else {
          v37 = *(_QWORD*)(a1 + 2776);
        }
        if (v35) {
          v38 = v36;
        }
        else {
          v38 = *(_QWORD*)(a1 + 2768);
        }
        SpineModel_64dde0(v32, v37, v38);
        if ((*v30 & 1) != 0) {
          goto LABEL_44;
        }
      }
      else if ((v31 & 1) != 0) {
        GameRoutine_64df20(v32, *(_QWORD*)(a1 + 2776), *(_QWORD*)(a1 + 2768));
        if ((*v30 & 1) != 0) {
        LABEL_44:
          v39 = *(_BYTE**)(a1 + 2776);
          *(_QWORD*)(a1 + 2768) = 0;
          goto LABEL_45;
        }
      }
      else {
        v33 = *(_QWORD*)(a1 + 2768);
        *v32 = *(_QWORD*)v30;
        *(_QWORD*)(a1 + 2792) = v33;
        *(_QWORD*)(a1 + 2800) = *(_QWORD*)(a1 + 2776);
        if ((*v30 & 1) != 0) {
          goto LABEL_44;
        }
      }
      v39 = (_BYTE*)(a1 + 2761);
      *(_BYTE*)(a1 + 2760) = 0;
    LABEL_45:
      *v39 = 0;
      *(_DWORD*)(a1 + 2480) = 0;
      v40 = *(_DWORD*)(a1 + 2752);
      *(_DWORD*)(a1 + 2752) = 0;
      *(_QWORD*)(a1 + 2808) = 0;
      *(_BYTE*)(a1 + 2816) = 0;
      *(_DWORD*)(a1 + 2756) = v40;
    LABEL_46:
      result = snd_Fade_Destroy_Fade(v74);
      v34 = 1;
      if ((v23 & 1) == 0) {
        goto LABEL_51;
      }
      goto LABEL_47;
    }
  }
  v34 = 0;
  if ((v75_.v75 & 1) != 0) {
  LABEL_47:
    if (v75_.v77 != nullptr) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
    }
  }
LABEL_51:
  if (v34 == 0) {
    return result;
  }
LABEL_52:
  v42 = *(unsigned __int8*)(a1 + 2760);
  v43 = (__int64*)(a1 + 2784);
  if ((*(_BYTE*)(a1 + 2784) & 1) != 0) {
    v45 = (v42 & 1) == 0;
    v46 = v42 >> 1;
    if (v45) {
      v47 = a1 + 2761;
    }
    else {
      v47 = *(_QWORD*)(a1 + 2776);
    }
    if (v45) {
      v48 = v46;
    }
    else {
      v48 = *(_QWORD*)(a1 + 2768);
    }
    SpineModel_64dde0(v43, v47, v48);
  }
  else if ((v42 & 1) != 0) {
    GameRoutine_64df20(v43, *(_QWORD*)(a1 + 2776), *(_QWORD*)(a1 + 2768));
  }
  else {
    v44 = *(_QWORD*)(a1 + 2768);
    *v43 = *(_QWORD*)(a1 + 2760);
    *(_QWORD*)(a1 + 2792) = v44;
    *(_QWORD*)(a1 + 2800) = *(_QWORD*)(a1 + 2776);
  }
  if (a2 != nullptr) {
    v49 = (char*)a2;
  }
  else {
    v49 = &GameData_1a9f09e;
  }
  GameRoutine_60a020(a1 + 2760, (__int64)v49);
  v50 = *(_QWORD*)a1;
  *(_BYTE*)(a1 + 3076) = 0;
  (*(void (**)(__int64))(v50 + 64))(a1);
  (*(void (**)(__int64, unsigned __int8*))(*(_QWORD*)a1 + 128LL))(a1, a2);
  GameManager_a2bd50(a1, a2, 0);
  if (a3 != nullptr) {
    v51 = a3;
  }
  else {
    v51 = &GameData_1a9f09e;
  }
  GameRoutine_60a020(a1 + 3080, (__int64)v51);
  v52 = (__int64*)(a1 + 3104);
  if (a4 != nullptr) {
    v53 = a4;
  }
  else {
    v53 = &GameData_1a9f09e;
  }
  GameRoutine_60a020(a1 + 3104, (__int64)v53);
  if ((*(_BYTE*)(a1 + 3080) & 1) != 0) {
    fw_text_String_CopyTerminated(&v75_.v75, *(_QWORD*)(a1 + 3096),
                                  *(_QWORD*)(a1 + 3088));
    if ((a5 & 1) == 0) {
      goto LABEL_88;
    }
  }
  else {
    v54 = *(_QWORD*)(a1 + 3088);
    v75_.v75 = *(_QWORD*)(a1 + 3080);
    v75_.v76 = v54;
    v75_.v77 = *(char**)(a1 + 3096);
    if ((a5 & 1) == 0) {
      goto LABEL_88;
    }
  }
  v55 = *(_BYTE*)(a1 + 3104) >> 1;
  if ((*(_BYTE*)(a1 + 3104) & 1) != 0) {
    v55 = *(_QWORD*)(a1 + 3112);
  }
  if (v55 != 0 && &v75_.v75 != v52) {
    if ((v75_.v75 & 1) != 0) {
      if ((*(_BYTE*)(a1 + 3104) & 1) != 0) {
        v57 = *(_QWORD*)(a1 + 3120);
      }
      else {
        v57 = a1 + 3105;
      }
      SpineModel_64dde0(&v75_.v75, v57, v55);
    }
    else if ((*(_BYTE*)(a1 + 3104) & 1) != 0) {
      GameRoutine_64df20(&v75_.v75, *(_QWORD*)(a1 + 3120),
                         *(_QWORD*)(a1 + 3112));
    }
    else {
      v56 = *(_QWORD*)(a1 + 3112);
      v75_.v75 = *v52;
      v75_.v76 = v56;
      v75_.v77 = *(char**)(a1 + 3120);
    }
  }
LABEL_88:
  v58 = (__int64*)(a1 + 2824);
  if ((__int64*)(a1 + 2824) != &v75_.v75) {
    if ((*(_BYTE*)v58 & 1) != 0) {
      if ((v75_.v75 & 1) != 0) {
        v60 = v75_.v77;
      }
      else {
        v60 = (char*)&v75_.v75 + 1;
      }
      if ((v75_.v75 & 1) != 0) {
        v61 = v75_.v76;
      }
      else {
        v61 = (unsigned __int64)(unsigned __int8)v75_.v75 >> 1;
      }
      SpineModel_64dde0(v58, (__int64)v60, v61);
    }
    else if ((v75_.v75 & 1) != 0) {
      GameRoutine_64df20(v58, (__int64)v75_.v77, v75_.v76);
    }
    else {
      v59 = v75_.v76;
      *v58 = v75_.v75;
      *(_QWORD*)(a1 + 2832) = v59;
      *(_QWORD*)(a1 + 2840) = v75_.v77;
    }
  }
  v62 = *(unsigned __int8*)(a1 + 2824);
  if ((v62 & 1) != 0) {
    v63 = *(_QWORD*)(a1 + 2832);
  }
  else {
    v63 = v62 >> 1;
  }
  if (v63 == 0) {
    goto LABEL_124;
  }
  snd_a292c0(a1, *(_DWORD*)(a1 + 2752), 0);
  v64 = *(unsigned __int8*)(a1 + 2824);
  if (*(float*)(a1 + 3020) <= 0x0.0p+0f) {
    v67 = v64 & 1;
  }
  else {
    v65 = *(unsigned __int8*)(a1 + 3024);
    if ((v65 & 1) != 0) {
      v66 = *(_QWORD*)(a1 + 3032);
    }
    else {
      v66 = v65 >> 1;
    }
    v67 = v64 & 1;
    v68 = v64 >> 1;
    if (v67 != 0) {
      v68 = *(_QWORD*)(a1 + 2832);
    }
    if (v66 == v68) {
      v69 = (v65 & 1) != 0 ? *(_QWORD*)(a1 + 3040) : a1 + 3025;
      v70 = v67 != 0 ? *(_QWORD*)(a1 + 2840) : a1 + 2825;
      if ((unsigned int)memcmp(v69, v70, v66) == 0) {
        snd_Fade_Fade_10cb00((__int64)v74, "FadeTime_BGM_Hub_In");
        GameRoutine_a290c0_alt1(a1, v70, (__int64)v74,
                                (int)*(float*)(a1 + 3020), 0, 0x0.0p+0f);
        snd_Fade_Destroy_Fade(v74);
        *(_DWORD*)(a1 + 3020) = 0;
        goto LABEL_124;
      }
    }
  }
  if (v67 != 0) {
    v71 = *(_QWORD*)(a1 + 2840);
  }
  else {
    v71 = a1 + 2825;
  }
  snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
  GameRoutine_a290c0_alt1(a1, v71, (__int64)v74, 0, a6 & 1, a7);
  snd_Fade_Destroy_Fade(v74);
LABEL_124:
  snd_Fade_Fade_10c830((__int64)v74, 0x0.0p+0f);
  GameRoutine_e8270(a1, (__int64)v74);
  snd_Fade_Destroy_Fade(v74);
  result = (unsigned __int64)snd_a292c0(a1, 4u, 1);
  v72 = *(_DWORD*)(a1 + 628);
  *(_BYTE*)(a1 + 3076) = 0;
  *(_DWORD*)(a1 + 628) = v72 + 1;
  if ((v75_.v75 & 1) != 0 && v75_.v77 != nullptr) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
  }
  return result;
}

__int64* snd_a2dc20(__int64* result, unsigned __int8* a2, _BYTE* a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  float v10;
  __int64* v11;
  __int64* v12;
  unsigned __int8* v13;
  _BYTE* v14;
  unsigned __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  float v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  bool v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  _BYTE* v38;
  int v39;
  int v40;
  unsigned __int64 v41;
  float v42;
  __int64* v43;
  __int64* v44;
  _BYTE* v45;
  __int64 v46;
  bool v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64* v52;
  __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64* v59;
  __int64 v60;
  bool v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  double v65;
  float v66;
  _QWORD v67[29];

  if (*((int*)result + 158) <= 0) {
    v67[25] = v7;
    v67[26] = v6;
    v67[27] = v4;
    v67[28] = v5;
    v8 = (__int64)result;
    if (*((int*)result + 157) >= 1 && (result[377] & 1) == 0) {
      v9 = *((_BYTE*)result + 2856);
      v10 = a4;
      v11 = result + 345;
      v12 = result + 357;
      v13 = a2;
      v14 = a3;
      *(_DWORD*)(v8 + 2852) = *(_DWORD*)(v8 + 2752);
      v15 = *(unsigned __int8*)(v8 + 2760);
      if ((v9 & 1) != 0) {
        v17 = (v15 & 1) == 0;
        v18 = v15 >> 1;
        if (v17) {
          v19 = v8 + 2761;
        }
        else {
          v19 = *(_QWORD*)(v8 + 2776);
        }
        if (v17) {
          v20 = v18;
        }
        else {
          v20 = *(_QWORD*)(v8 + 2768);
        }
        SpineModel_64dde0(v12, v19, v20);
      }
      else if ((v15 & 1) != 0) {
        GameRoutine_64df20(v12, *(_QWORD*)(v8 + 2776), *(_QWORD*)(v8 + 2768));
      }
      else {
        v16 = *(_QWORD*)(v8 + 2768);
        *v12 = *v11;
        *(_QWORD*)(v8 + 2864) = v16;
        *(_QWORD*)(v8 + 2872) = *(_QWORD*)(v8 + 2776);
      }
      v21 = *(_QWORD*)(v8 + 8);
      *(_DWORD*)(v8 + 2880) = *(_DWORD*)(v8 + 2808);
      *(_DWORD*)(v8 + 2884) = *(_DWORD*)(v8 + 2812);
      *(_BYTE*)(v8 + 2888) = *(_BYTE*)(v8 + 2816);
      v22 = snd_BGM_getFirstPlayPosition(v21);
      if (v22 > 0x0.0p+0f) {
        *(float*)(v8 + 2892) = v22;
      }
      v23 = *(unsigned __int8*)(v8 + 2824);
      v24 = (__int64*)(v8 + 2896);
      if ((*(_BYTE*)(v8 + 2896) & 1) != 0) {
        v27 = (v23 & 1) == 0;
        v28 = v23 >> 1;
        if (v27) {
          v29 = v8 + 2825;
        }
        else {
          v29 = *(_QWORD*)(v8 + 2840);
        }
        if (v27) {
          v30 = v28;
        }
        else {
          v30 = *(_QWORD*)(v8 + 2832);
        }
        SpineModel_64dde0(v24, v29, v30);
      }
      else if ((v23 & 1) != 0) {
        GameRoutine_64df20(v24, *(_QWORD*)(v8 + 2840), *(_QWORD*)(v8 + 2832));
      }
      else {
        v25 = *(_QWORD*)(v8 + 2832);
        v26 = *(_QWORD*)(v8 + 2840);
        *v24 = *(_QWORD*)(v8 + 2824);
        *(_QWORD*)(v8 + 2904) = v25;
        *(_QWORD*)(v8 + 2912) = v26;
      }
      snd_Fade_Fade_10c910((__int64)v67, 500);
      GameManager_a2c910((_DWORD*)v8, (__int64)v67);
      v31 = *(unsigned __int8*)(v8 + 2760);
      v32 = (__int64*)(v8 + 2784);
      if ((*(_BYTE*)(v8 + 2784) & 1) != 0) {
        v34 = (v31 & 1) == 0;
        v35 = v31 >> 1;
        if (v34) {
          v36 = v8 + 2761;
        }
        else {
          v36 = *(_QWORD*)(v8 + 2776);
        }
        if (v34) {
          v37 = v35;
        }
        else {
          v37 = *(_QWORD*)(v8 + 2768);
        }
        SpineModel_64dde0(v32, v36, v37);
      }
      else if ((v31 & 1) != 0) {
        GameRoutine_64df20(v32, *(_QWORD*)(v8 + 2776), *(_QWORD*)(v8 + 2768));
      }
      else {
        v33 = *(_QWORD*)(v8 + 2768);
        *v32 = *v11;
        *(_QWORD*)(v8 + 2792) = v33;
        *(_QWORD*)(v8 + 2800) = *(_QWORD*)(v8 + 2776);
      }
      if ((*(_BYTE*)v11 & 1) != 0) {
        v38 = *(_BYTE**)(v8 + 2776);
        *(_QWORD*)(v8 + 2768) = 0;
      }
      else {
        v38 = (_BYTE*)(v8 + 2761);
        *(_BYTE*)(v8 + 2760) = 0;
      }
      *v38 = 0;
      *(_DWORD*)(v8 + 2480) = 0;
      v39 = *(_DWORD*)(v8 + 2752);
      *(_DWORD*)(v8 + 2752) = 0;
      *(_QWORD*)(v8 + 2808) = 0;
      *(_BYTE*)(v8 + 2816) = 0;
      *(_DWORD*)(v8 + 2756) = v39;
      snd_Fade_Destroy_Fade(v67);
      a4 = v10;
      a3 = v14;
      a2 = v13;
    }
    v40 = *(_DWORD*)(v8 + 2892);
    if (a2 == nullptr || *a2 == 0) {
      v41 = *(unsigned __int8*)(v8 + 2760);
      v42 = a4;
      v43 = (__int64*)(v8 + 2760);
      v44 = (__int64*)(v8 + 2784);
      v45 = a3;
      if ((*(_BYTE*)(v8 + 2784) & 1) != 0) {
        v47 = (v41 & 1) == 0;
        v48 = v41 >> 1;
        if (v47) {
          v49 = v8 + 2761;
        }
        else {
          v49 = *(_QWORD*)(v8 + 2776);
        }
        if (v47) {
          v50 = v48;
        }
        else {
          v50 = *(_QWORD*)(v8 + 2768);
        }
        SpineModel_64dde0(v44, v49, v50);
      }
      else if ((v41 & 1) != 0) {
        GameRoutine_64df20(v44, *(_QWORD*)(v8 + 2776), *(_QWORD*)(v8 + 2768));
      }
      else {
        v46 = *(_QWORD*)(v8 + 2768);
        *v44 = *v43;
        *(_QWORD*)(v8 + 2792) = v46;
        *(_QWORD*)(v8 + 2800) = *(_QWORD*)(v8 + 2776);
      }
      v51 = *(unsigned __int8*)(v8 + 2608);
      v52 = (__int64*)(v8 + 2608);
      if ((*(_BYTE*)(v8 + 2760) & 1) != 0) {
        v54 = (v51 & 1) == 0;
        v55 = v51 >> 1;
        if (v54) {
          v56 = v8 + 2609;
        }
        else {
          v56 = *(_QWORD*)(v8 + 2624);
        }
        if (v54) {
          v57 = v55;
        }
        else {
          v57 = *(_QWORD*)(v8 + 2616);
        }
        SpineModel_64dde0((__int64*)(v8 + 2760), v56, v57);
      }
      else if ((v51 & 1) != 0) {
        GameRoutine_64df20((_QWORD*)(v8 + 2760), *(_QWORD*)(v8 + 2624),
                           *(_QWORD*)(v8 + 2616));
      }
      else {
        v53 = *(_QWORD*)(v8 + 2616);
        *v43 = *v52;
        *(_QWORD*)(v8 + 2768) = v53;
        *(_QWORD*)(v8 + 2776) = *(_QWORD*)(v8 + 2624);
      }
      v58 = *(unsigned __int8*)(v8 + 2608);
      v59 = (__int64*)(v8 + 2656);
      if ((*(_BYTE*)(v8 + 2656) & 1) != 0) {
        v61 = (v58 & 1) == 0;
        v62 = v58 >> 1;
        if (v61) {
          v63 = v8 + 2609;
        }
        else {
          v63 = *(_QWORD*)(v8 + 2624);
        }
        if (v61) {
          v64 = v62;
        }
        else {
          v64 = *(_QWORD*)(v8 + 2616);
        }
        SpineModel_64dde0(v59, v63, v64);
      }
      else if ((v58 & 1) != 0) {
        GameRoutine_64df20(v59, *(_QWORD*)(v8 + 2624), *(_QWORD*)(v8 + 2616));
      }
      else {
        v60 = *(_QWORD*)(v8 + 2616);
        *v59 = *v52;
        *(_QWORD*)(v8 + 2664) = v60;
        *(_QWORD*)(v8 + 2672) = *(_QWORD*)(v8 + 2624);
      }
      a4 = v42;
      a3 = v45;
      if ((*(_BYTE*)(v8 + 2760) & 1) != 0) {
        a2 = *(unsigned __int8**)(v8 + 2776);
      }
      else {
        a2 = (unsigned __int8*)(v8 + 2761);
      }
    }
    GameManager_a2c6e0(v8, a2, a3, a4);
    v65 = snd_getDefineValue("SetVolume_ENV_CmdBtl");
    v66 = *(float*)&v65 / 0x1.9000000000000p+6f;
    snd_Fade_Fade_10c830((__int64)v67, 0x1.f400000000000p+9f);
    snd_startSlotVolume_100b50(&GameData_21fa944, (__int64)v67, v66);
    snd_Fade_Destroy_Fade(v67);
    *(_DWORD*)(v8 + 2892) = v40;
    result = snd_a292c0(v8, 2u, 1);
    ++*(_DWORD*)(v8 + 632);
  }
  return result;
}

__int64* snd_a2e0c0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  char v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  _BYTE* v37;
  int v38;
  int v39;
  unsigned __int8 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD v53[25];

  v3 = *(_BYTE*)(a1 + 2760);
  v4 = *(unsigned __int8*)(a1 + 2856);
  v5 = (__int64*)(a1 + 2856);
  v6 = (__int64*)(a1 + 2760);
  if ((v3 & 1) != 0) {
    v9 = (v4 & 1) == 0;
    v10 = v4 >> 1;
    if (v9) {
      v11 = a1 + 2857;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2872);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *(_QWORD*)(a1 + 2864);
    }
    SpineModel_64dde0(v6, v11, v12);
  }
  else if ((v4 & 1) != 0) {
    GameRoutine_64df20(v6, *(_QWORD*)(a1 + 2872), *(_QWORD*)(a1 + 2864));
  }
  else {
    v8 = v5[1];
    *v6 = *v5;
    v6[1] = v8;
    v6[2] = v5[2];
  }
  *(_DWORD*)(a1 + 2808) = *(_DWORD*)(a1 + 2880);
  *(_DWORD*)(a1 + 2812) = *(_DWORD*)(a1 + 2884);
  *(_BYTE*)(a1 + 2816) = *(_BYTE*)(a1 + 2888);
  if ((*(_BYTE*)(a1 + 3128) & 1) != 0) {
  LABEL_24:
    if ((*(_BYTE*)v5 & 1) == 0) {
      goto LABEL_25;
    }
    goto LABEL_27;
  }
  v13 = *(unsigned __int8*)(a1 + 2896);
  v14 = (__int64*)(a1 + 2824);
  if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
    v17 = (v13 & 1) == 0;
    v18 = v13 >> 1;
    if (v17) {
      v19 = a1 + 2897;
    }
    else {
      v19 = *(_QWORD*)(a1 + 2912);
    }
    if (v17) {
      v20 = v18;
    }
    else {
      v20 = *(_QWORD*)(a1 + 2904);
    }
    SpineModel_64dde0(v14, v19, v20);
    goto LABEL_24;
  }
  if ((v13 & 1) == 0) {
    v15 = *(_QWORD*)(a1 + 2904);
    v16 = *(_QWORD*)(a1 + 2912);
    *v14 = *(_QWORD*)(a1 + 2896);
    *(_QWORD*)(a1 + 2832) = v15;
    *(_QWORD*)(a1 + 2840) = v16;
    if ((*(_BYTE*)v5 & 1) != 0) {
      goto LABEL_27;
    }
  LABEL_25:
    v21 = (_BYTE*)(a1 + 2857);
    *(_BYTE*)(a1 + 2856) = 0;
    goto LABEL_28;
  }
  GameRoutine_64df20(v14, *(_QWORD*)(a1 + 2912), *(_QWORD*)(a1 + 2904));
  if ((*(_BYTE*)v5 & 1) == 0) {
    goto LABEL_25;
  }
LABEL_27:
  v21 = *(_BYTE**)(a1 + 2872);
  *(_QWORD*)(a1 + 2864) = 0;
LABEL_28:
  *v21 = 0;
  if ((*(_BYTE*)(a1 + 2896) & 1) != 0) {
    v22 = *(_BYTE**)(a1 + 2912);
    *(_QWORD*)(a1 + 2904) = 0;
  }
  else {
    v22 = (_BYTE*)(a1 + 2897);
    *(_BYTE*)(a1 + 2896) = 0;
  }
  *v22 = 0;
  if (*(int*)(a1 + 628) > 0 || *(int*)(a1 + 620) >= 1) {
    snd_Fade_Fade_10c830((__int64)v53, 0x1.f400000000000p+9f);
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 72LL))(a1, v53);
    snd_Fade_Destroy_Fade(v53);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  }
  GameManager_a22bd0();
  if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 2776);
  }
  else {
    v23 = a1 + 2761;
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 128LL))(a1, v23);
  if ((*(_BYTE*)(a1 + 2760) & 1) != 0) {
    v24 = *(unsigned __int8**)(a1 + 2776);
  }
  else {
    v24 = (unsigned __int8*)(a1 + 2761);
  }
  GameManager_a2bd50(a1, v24, 0);
  v25 = *(unsigned __int8*)(a1 + 2824);
  v26 = *(_QWORD*)(a1 + 2832);
  *(_BYTE*)(a1 + 601) = 0;
  if ((v25 & 1) != 0) {
    v27 = v26;
  }
  else {
    v27 = v25 >> 1;
  }
  v28 = *(unsigned __int8*)(a1 + 3080);
  v29 = *(_QWORD*)(a1 + 3088);
  if ((v28 & 1) == 0) {
    v29 = v28 >> 1;
  }
  if (v27 == v29) {
    v30 = (v25 & 1) != 0 ? *(_QWORD*)(a1 + 2840) : a1 + 2825;
    v31 = (v28 & 1) != 0 ? *(_QWORD*)(a1 + 3096) : a1 + 3081;
    if ((unsigned int)memcmp(v30, v31, v27) == 0) {
      goto LABEL_63;
    }
  }
  v32 = *(unsigned __int8*)(a1 + 3104);
  v33 = *(_QWORD*)(a1 + 3112);
  if ((v32 & 1) == 0) {
    v33 = v32 >> 1;
  }
  if (v27 == v33) {
    v34 = (v25 & 1) != 0 ? *(_QWORD*)(a1 + 2840) : a1 + 2825;
    v35 = (v32 & 1) != 0 ? *(_QWORD*)(a1 + 3120) : a1 + 3105;
    if ((unsigned int)memcmp(v34, v35, v27) == 0) {
    LABEL_63:
      if (game_gmap_GmapClock_instance_ != 0) {
        v36 = *(__int16*)(game_gmap_GmapClock_instance_ + 14);
      }
      else {
        v36 = 0;
      }
      v37 = (_BYTE*)(a1 + 2824);
      v38 = snd_getDefineInt("SetTime_BGM_Night");
      if ((v36 > 23 || v36 < v38) &&
          ((v39 = snd_getDefineInt("SetTime_BGM_Day"), v36 < 0) ||
           v36 >= v39)) {
        v40 = *(_BYTE*)(a1 + 3080);
        v41 = *(_QWORD*)(a1 + 3088);
        v42 = v40 >> 1;
        if ((v40 & 1) != 0) {
          v42 = *(_QWORD*)(a1 + 3088);
        }
        if (v42 != 0) {
          if ((*v37 & 1) == 0) {
            if ((*(_BYTE*)(a1 + 3080) & 1) == 0) {
              v43 = (__int64*)(a1 + 3080);
              goto LABEL_82;
            }
            v49 = *(_QWORD*)(a1 + 3096);
            goto LABEL_91;
          }
          v47 = *(_QWORD*)(a1 + 3096);
          v48 = a1 + 3081;
          goto LABEL_86;
        }
      }
      else {
        v40 = *(_BYTE*)(a1 + 3104);
        v41 = *(_QWORD*)(a1 + 3112);
        v42 = v40 >> 1;
        if ((v40 & 1) != 0) {
          v42 = *(_QWORD*)(a1 + 3112);
        }
        if (v42 != 0) {
          if ((*v37 & 1) == 0) {
            if ((*(_BYTE*)(a1 + 3104) & 1) == 0) {
              v43 = (__int64*)(a1 + 3104);
            LABEL_82:
              v44 = *v43;
              v45 = v43[1];
              v46 = v43[2];
              *(_QWORD*)v37 = v44;
              *(_QWORD*)(a1 + 2832) = v45;
              *(_QWORD*)(a1 + 2840) = v46;
              goto LABEL_92;
            }
            v49 = *(_QWORD*)(a1 + 3120);
          LABEL_91:
            GameRoutine_64df20((_QWORD*)(a1 + 2824), v49, v41);
            goto LABEL_92;
          }
          v47 = *(_QWORD*)(a1 + 3120);
          v48 = a1 + 3105;
        LABEL_86:
          if ((v40 & 1) != 0) {
            v50 = v47;
          }
          else {
            v50 = v48;
          }
          SpineModel_64dde0((__int64*)(a1 + 2824), v50, v42);
        }
      }
    }
  }
LABEL_92:
  if ((*(_BYTE*)(a1 + 2824) & 1) != 0) {
    v51 = *(_QWORD*)(a1 + 2840);
  }
  else {
    v51 = a1 + 2825;
  }
  GameRoutine_a290c0_alt1(a1, v51, a2, (int)*(float*)(a1 + 2892), 1, 0x0.0p+0f);
  return snd_a292c0(a1, *(_DWORD*)(a1 + 2852), 1);
}

__int64 snd_a2e7c0(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _BYTE* v21;
  unsigned __int8 v22;
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
  _BYTE* v39;
  unsigned __int64 v40;
  __int64 v41;
  bool v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  _BYTE* v46;
  _BYTE* v47;
  _BYTE* v48;
  int v49;
  __int64 v50;
  _QWORD v51[25];
  struct {
    _QWORD v52[4];
    _QWORD* v53;
  } v52_;

  v1 = *(_DWORD*)(result + 636);
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  *(_DWORD*)(result + 636) = v1 - 1;
  v3 = snd_getUnknown10();
  v4 = v52_.v52;
  v52_.v53 = v52_.v52;
  v52_.v52[0] = GameData_1fbe3f0;
  v52_.v52[1] = v2;
  v5 = **(_QWORD**)(v3 + 24);
  if (v5 == 0) {
    goto LABEL_10;
  }
  v6 = *(_QWORD*)(v5 + 5616);
  v51[0] = v5;
  while (1) {
    (*(void (**)(_QWORD*, _QWORD*))(*v4 + 48LL))(v4, v51);
    v4 = v52_.v53;
    if (v6 == 0) {
      break;
    }
    v51[0] = v6;
    v6 = *(_QWORD*)(v6 + 5616);
    if (v52_.v53 == nullptr) {
      GameRoutine_60a310();
    }
  }
  if (v52_.v53 == v52_.v52) {
  LABEL_10:
    v7 = 32;
  }
  else {
    if (v52_.v53 == nullptr) {
      goto LABEL_12;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v4 + v7))((__int64)v4);
LABEL_12:
  snd_findSlot_100a50((void*)(v51), &GameData_21fa944);
  result = snd_fnd_WeakHandle_get((__int64)v51);
  if (result != 0) {
    v8 = result;
    snd_Fade_Fade_10c830((__int64)v51, 0x1.f400000000000p+8f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v8 - 5552) + 96LL))(
        v8 - 5552, v51, 0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(v51);
  }
  if (*(int*)(v2 + 628) > 0) {
    return result;
  }
  if (*(int*)(v2 + 616) < 1) {
    snd_Fade_Fade_10c830((__int64)v51, 0x0.0p+0f);
    GameManager_a2adb0(v2, (__int64)v51);
    snd_Fade_Destroy_Fade(v51);
    snd_Fade_Fade_10c830((__int64)v51, 0x0.0p+0f);
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 72LL))(v2, v51);
    snd_Fade_Destroy_Fade(v51);
    if ((*(_BYTE*)(v2 + 2704) & 1) != 0) {
      v21 = *(_BYTE**)(v2 + 2720);
      *(_QWORD*)(v2 + 2712) = 0;
    }
    else {
      v21 = (_BYTE*)(v2 + 2705);
      *(_BYTE*)(v2 + 2704) = 0;
    }
    *v21 = 0;
    v39 = (_BYTE*)(v2 + 2760);
    result = v2 + 2784;
    v40 = *(unsigned __int8*)(v2 + 2760);
    if ((*(_BYTE*)(v2 + 2784) & 1) != 0) {
      v42 = (v40 & 1) == 0;
      v43 = v40 >> 1;
      if (v42) {
        v44 = v2 + 2761;
      }
      else {
        v44 = *(_QWORD*)(v2 + 2776);
      }
      if (v42) {
        v45 = v43;
      }
      else {
        v45 = *(_QWORD*)(v2 + 2768);
      }
      result = (__int64)SpineModel_64dde0((__int64*)result, v44, v45);
      if ((*v39 & 1) != 0) {
        goto LABEL_97;
      }
    }
    else if ((v40 & 1) != 0) {
      result = (__int64)GameRoutine_64df20(
          (_QWORD*)result, *(_QWORD*)(v2 + 2776), *(_QWORD*)(v2 + 2768));
      if ((*v39 & 1) != 0) {
      LABEL_97:
        v46 = *(_BYTE**)(v2 + 2776);
        *(_QWORD*)(v2 + 2768) = 0;
        goto LABEL_98;
      }
    }
    else {
      v41 = *(_QWORD*)(v2 + 2768);
      *(_QWORD*)result = *(_QWORD*)v39;
      *(_QWORD*)(v2 + 2792) = v41;
      *(_QWORD*)(v2 + 2800) = *(_QWORD*)(v2 + 2776);
      if ((*v39 & 1) != 0) {
        goto LABEL_97;
      }
    }
    v46 = (_BYTE*)(v2 + 2761);
    *(_BYTE*)(v2 + 2760) = 0;
  LABEL_98:
    *v46 = 0;
    if ((*(_BYTE*)(v2 + 656) & 1) != 0) {
      v47 = *(_BYTE**)(v2 + 672);
      *(_QWORD*)(v2 + 664) = 0;
    }
    else {
      v47 = (_BYTE*)(v2 + 657);
      *(_BYTE*)(v2 + 656) = 0;
    }
    *v47 = 0;
    if ((*(_BYTE*)(v2 + 680) & 1) != 0) {
      v48 = *(_BYTE**)(v2 + 696);
      *(_QWORD*)(v2 + 688) = 0;
    }
    else {
      v48 = (_BYTE*)(v2 + 681);
      *(_BYTE*)(v2 + 680) = 0;
    }
    *v48 = 0;
    *(_WORD*)(v2 + 704) = 0;
    v49 = *(_DWORD*)(v2 + 2752);
    *(_QWORD*)(v2 + 2808) = 0;
    *(_BYTE*)(v2 + 2816) = 0;
    *(_DWORD*)(v2 + 2752) = 0;
    *(_DWORD*)(v2 + 2756) = v49;
    return result;
  }
  if ((snd_BGM_isFirstActive(*(_QWORD*)(v2 + 8)) & 1) != 0) {
    v9 = snd_BGM_getFirstName(*(_QWORD*)(v2 + 8));
    GameRoutine_60a020(v2 + 2896, v9);
    v10 = *(unsigned __int8*)(v2 + 2896);
    v11 = *(_QWORD*)(v2 + 2904);
    v12 = *(_QWORD*)(v2 + 2912);
    v13 = (__int64*)(v2 + 712);
    v14 = (_QWORD*)(v2 + 728);
    v15 = 0;
    if ((v10 & 1) != 0) {
      v16 = *(_QWORD*)(v2 + 2904);
    }
    else {
      v16 = v10 >> 1;
    }
    if ((v10 & 1) != 0) {
      v17 = *(_QWORD*)(v2 + 2912);
    }
    else {
      v17 = v2 + 2897;
    }
    while (1) {
      v18 = *((unsigned __int8*)v14 - 16);
      v19 = *(v14 - 1);
      if ((v18 & 1) == 0) {
        v19 = v18 >> 1;
      }
      if (v19 == v16) {
        v20 = (v18 & 1) != 0 ? (_QWORD*)*v14 : (_QWORD*)((char*)v14 - 15);
        if ((unsigned int)memcmp(v20, v17, v16) == 0) {
          break;
        }
      }
      ++v15;
      v14 += 3;
      if (v15 == 32) {
        v22 = *(_BYTE*)(v2 + 712);
        v23 = *(_QWORD*)(v2 + 720);
        if ((v22 & 1) == 0) {
          v23 = v22 >> 1;
        }
        if (v23 != 0) {
          v22 = *(_BYTE*)(v2 + 736);
          v24 = *(_QWORD*)(v2 + 744);
          if ((v22 & 1) == 0) {
            v24 = v22 >> 1;
          }
          if (v24 != 0) {
            v22 = *(_BYTE*)(v2 + 760);
            v25 = *(_QWORD*)(v2 + 768);
            if ((v22 & 1) == 0) {
              v25 = v22 >> 1;
            }
            if (v25 != 0) {
              v22 = *(_BYTE*)(v2 + 784);
              v26 = *(_QWORD*)(v2 + 792);
              if ((v22 & 1) == 0) {
                v26 = v22 >> 1;
              }
              if (v26 != 0) {
                v22 = *(_BYTE*)(v2 + 808);
                v27 = *(_QWORD*)(v2 + 816);
                if ((v22 & 1) == 0) {
                  v27 = v22 >> 1;
                }
                if (v27 != 0) {
                  v22 = *(_BYTE*)(v2 + 832);
                  v28 = *(_QWORD*)(v2 + 840);
                  if ((v22 & 1) == 0) {
                    v28 = v22 >> 1;
                  }
                  if (v28 != 0) {
                    v22 = *(_BYTE*)(v2 + 856);
                    v29 = *(_QWORD*)(v2 + 864);
                    if ((v22 & 1) == 0) {
                      v29 = v22 >> 1;
                    }
                    if (v29 != 0) {
                      v22 = *(_BYTE*)(v2 + 880);
                      v30 = *(_QWORD*)(v2 + 888);
                      if ((v22 & 1) == 0) {
                        v30 = v22 >> 1;
                      }
                      if (v30 != 0) {
                        v22 = *(_BYTE*)(v2 + 904);
                        v31 = *(_QWORD*)(v2 + 912);
                        if ((v22 & 1) == 0) {
                          v31 = v22 >> 1;
                        }
                        if (v31 != 0) {
                          v22 = *(_BYTE*)(v2 + 928);
                          v32 = *(_QWORD*)(v2 + 936);
                          if ((v22 & 1) == 0) {
                            v32 = v22 >> 1;
                          }
                          if (v32 != 0) {
                            v22 = *(_BYTE*)(v2 + 952);
                            v33 = *(_QWORD*)(v2 + 960);
                            if ((v22 & 1) == 0) {
                              v33 = v22 >> 1;
                            }
                            if (v33 != 0) {
                              v22 = *(_BYTE*)(v2 + 976);
                              v34 = *(_QWORD*)(v2 + 984);
                              if ((v22 & 1) == 0) {
                                v34 = v22 >> 1;
                              }
                              if (v34 != 0) {
                                v22 = *(_BYTE*)(v2 + 1000);
                                v35 = *(_QWORD*)(v2 + 1008);
                                if ((v22 & 1) == 0) {
                                  v35 = v22 >> 1;
                                }
                                if (v35 != 0) {
                                  v22 = *(_BYTE*)(v2 + 1024);
                                  v36 = *(_QWORD*)(v2 + 1032);
                                  if ((v22 & 1) == 0) {
                                    v36 = v22 >> 1;
                                  }
                                  if (v36 != 0) {
                                    v22 = *(_BYTE*)(v2 + 1048);
                                    v37 = *(_QWORD*)(v2 + 1056);
                                    if ((v22 & 1) == 0) {
                                      v37 = v22 >> 1;
                                    }
                                    if (v37 != 0) {
                                      v22 = *(_BYTE*)(v2 + 1072);
                                      v38 = *(_QWORD*)(v2 + 1080);
                                      if ((v22 & 1) == 0) {
                                        v38 = v22 >> 1;
                                      }
                                      if (v38 != 0) {
                                        LODWORD(v15) = -1;
                                        break;
                                      }
                                      v13 = (__int64*)(v2 + 1072);
                                      LODWORD(v15) = 15;
                                    }
                                    else {
                                      v13 = (__int64*)(v2 + 1048);
                                      LODWORD(v15) = 14;
                                    }
                                  }
                                  else {
                                    v13 = (__int64*)(v2 + 1024);
                                    LODWORD(v15) = 13;
                                  }
                                }
                                else {
                                  v13 = (__int64*)(v2 + 1000);
                                  LODWORD(v15) = 12;
                                }
                              }
                              else {
                                v13 = (__int64*)(v2 + 976);
                                LODWORD(v15) = 11;
                              }
                            }
                            else {
                              v13 = (__int64*)(v2 + 952);
                              LODWORD(v15) = 10;
                            }
                          }
                          else {
                            v13 = (__int64*)(v2 + 928);
                            LODWORD(v15) = 9;
                          }
                        }
                        else {
                          v13 = (__int64*)(v2 + 904);
                          LODWORD(v15) = 8;
                        }
                      }
                      else {
                        v13 = (__int64*)(v2 + 880);
                        LODWORD(v15) = 7;
                      }
                    }
                    else {
                      v13 = (__int64*)(v2 + 856);
                      LODWORD(v15) = 6;
                    }
                  }
                  else {
                    v13 = (__int64*)(v2 + 832);
                    LODWORD(v15) = 5;
                  }
                }
                else {
                  v13 = (__int64*)(v2 + 808);
                  LODWORD(v15) = 4;
                }
              }
              else {
                v13 = (__int64*)(v2 + 784);
                LODWORD(v15) = 3;
              }
            }
            else {
              v13 = (__int64*)(v2 + 760);
              LODWORD(v15) = 2;
            }
          }
          else {
            v13 = (__int64*)(v2 + 736);
            LODWORD(v15) = 1;
          }
        }
        else {
          LODWORD(v15) = 0;
        }
        if ((v22 & 1) != 0) {
          SpineModel_64dde0(v13, v17, v16);
        }
        else if ((v10 & 1) != 0) {
          GameRoutine_64df20(v13, v12, v11);
        }
        else {
          v50 = *(_QWORD*)(v2 + 2904);
          *v13 = *(_QWORD*)(v2 + 2896);
          v13[1] = v50;
          v13[2] = *(_QWORD*)(v2 + 2912);
        }
        break;
      }
    }
    *(_DWORD*)(v2 + 2188) = v15;
    if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      *(_DWORD*)(GameData_22400f8 + 12) |= 0x10000u;
    }
  }
  snd_Fade_Fade_10c830((__int64)v51, 0x1.f400000000000p+9f);
  snd_a2e0c0(v2, (__int64)v51);
  return snd_Fade_Destroy_Fade(v51);
}

__int64 snd_a2ede0(__int64 result, __int64 a2, unsigned __int64 a3, __int64 a4,
                   __int64 a5)
{
  __int64 v7;
  char v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  int v22;
  int v23;
  unsigned int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int8* v31;
  const char* v32;
  const char* v33;
  __int64 v34;
  unsigned __int64 v35;
  const char* v36;
  const char* v37;
  unsigned __int8* v38;
  const char** v39;
  int v40;
  _QWORD v41[25];
  _QWORD v42[32];
  __int64 v43[2];
  int v44[6];

  if (*(int*)(result + 640) > 0) {
    return result;
  }
  v7 = result;
  v8 = *(_BYTE*)(result + 2784);
  v9 = *(unsigned __int8*)(result + 2760);
  *(_BYTE*)(result + 3076) = 0;
  v10 = (__int64*)(result + 2760);
  v11 = (__int64*)(result + 2784);
  if ((v8 & 1) != 0) {
    v15 = *(_QWORD*)(v7 + 2776);
    v20 = (v9 & 1) == 0;
    v16 = v9 >> 1;
    v17 = a2;
    v18 = a3;
    if (v20) {
      v15 = v7 + 2761;
    }
    else {
      v16 = *(_QWORD*)(v7 + 2768);
    }
    SpineModel_64dde0(v11, v15, v16);
  }
  else {
    if ((v9 & 1) == 0) {
      v14 = v10[1];
      *v11 = *v10;
      v11[1] = v14;
      v11[2] = v10[2];
      if (a3 == 0) {
        goto LABEL_12;
      }
      goto LABEL_18;
    }
    v17 = a2;
    v18 = a3;
    GameRoutine_64df20(v11, *(_QWORD*)(v7 + 2776), *(_QWORD*)(v7 + 2768));
  }
  a3 = v18;
  a2 = v17;
  if (v18 == 0) {
  LABEL_12:
    v19 = *(unsigned __int8*)(v7 + 2608);
    v20 = (v19 & 1) == 0;
    v21 = v19 >> 1;
    if (v20) {
      a2 = v7 + 2609;
    }
    else {
      a2 = *(_QWORD*)(v7 + 2624);
    }
    if (v20) {
      a3 = v21;
    }
    else {
      a3 = *(_QWORD*)(v7 + 2616);
    }
  }
LABEL_18:
  GameRoutine_60a060((char*)v10, a2, a3);
  snd_Fade_Fade_10c830((__int64)v42, 0x0.0p+0f);
  GameRoutine_a290c0_alt1(v7, a4, (__int64)v42, 0, 0, 0x0.0p+0f);
  snd_Fade_Destroy_Fade(v42);
  v22 = *(_DWORD*)(v7 + 2812);
  v23 = *(_DWORD*)(v7 + 2808);
  v24 = *(unsigned __int8*)(v7 + 2816);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 64LL))(v7);
  v25 = *(unsigned __int8*)(v7 + 2760);
  v26 = *(_QWORD*)(v7 + 2768);
  v27 = v25 & 1;
  v28 = v25 >> 1;
  if (v27 != 0) {
    v29 = *(_QWORD*)(v7 + 2768);
  }
  else {
    v29 = v28;
  }
  if (v29 != 0) {
    if (v27 != 0) {
      v30 = *(_QWORD*)(v7 + 2776);
    }
    else {
      v30 = v7 + 2761;
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 128LL))(v7, v30);
    if ((*(_BYTE*)(v7 + 2760) & 1) != 0) {
      v31 = *(unsigned __int8**)(v7 + 2776);
    }
    else {
      v31 = (unsigned __int8*)(v7 + 2761);
    }
    GameManager_a2bd50(v7, v31, 0);
    if ((*(_BYTE*)(v7 + 2760) & 1) != 0) {
      v32 = *(const char**)(v7 + 2776);
    }
    else {
      v32 = (const char*)(v7 + 2761);
    }
    if ((*(_BYTE*)(v7 + 2728) & 1) != 0) {
      v33 = *(const char**)(v7 + 2744);
    }
    else {
      v33 = (const char*)(v7 + 2729);
    }
    snd_Fade_Fade_10c830((__int64)v42, 0x0.0p+0f);
    GameManager_a2c3b0(v7, v32, v33, v22 == 1, v23 == 1, v24, (__int64)v42);
    snd_Fade_Destroy_Fade(v42);
    if ((*(_BYTE*)(v7 + 2760) & 1) != 0) {
      v34 = *(_QWORD*)(v7 + 2776);
    }
    else {
      v34 = v7 + 2761;
    }
    snd_Fade_Fade_10c830((__int64)v42, 0x0.0p+0f);
    (*(void (**)(__int64, __int64, bool, bool, _QWORD, _QWORD*))(
        *(_QWORD*)v7 + 120LL))(v7, v34, v22 == 1, v23 == 1, v24, v42);
    result = snd_Fade_Destroy_Fade(v42);
    v35 = *(unsigned __int8*)(v7 + 2760);
    v26 = *(_QWORD*)(v7 + 2768);
    v27 = v35 & 1;
    v28 = v35 >> 1;
  }
  if (v27 == 0) {
    v26 = v28;
  }
  if (v26 != 0) {
    if (v27 != 0) {
      v36 = *(const char**)(v7 + 2776);
    }
    else {
      v36 = (const char*)(v7 + 2761);
    }
    if ((*(_BYTE*)(v7 + 2728) & 1) != 0) {
      v37 = *(const char**)(v7 + 2744);
    }
    else {
      v37 = (const char*)(v7 + 2729);
    }
    snd_Fade_Fade_10c830((__int64)v41, 0x0.0p+0f);
    snprintf(v42, 256, "%s_%s", v36, v37);
    v44[0] = (unsigned int)snd_fnd_calcCrc32((unsigned __int8*)v42, 0);
    if (snd_data_findFieldData(v44) != nullptr) {
      v38 = (unsigned __int8*)v42;
    }
    else {
      v38 = (unsigned __int8*)v36;
    }
    v44[0] = (unsigned int)snd_fnd_calcCrc32(v38, 0);
    v39 = (const char**)snd_data_findFieldData(v44);
    GameManager_a2adb0(v7, (__int64)v41);
    if (v39 != nullptr && v39[4] != nullptr) {
      v43[0] = 0;
      LODWORD(v43[1]) = 0x2000;
      GameRoutine_112180((__int64)v43, v7 + 344);
      snd_a2fe30((void*)((__int64)v44), v7, v43, v39[4], v22 == 1, v23 == 1,
                 v24, (__int64)v41, (__int64)v41);
      GameRoutine_112180(v7 + 344, (__int64)v44);
    }
    result = snd_Fade_Destroy_Fade(v41);
  }
  if ((a5 & 0x100000000LL) != 0) {
    *(_BYTE*)(v7 + 600) = 0;
  }
  v40 = *(_DWORD*)(v7 + 640);
  *(_BYTE*)(v7 + 3076) = 0;
  *(_DWORD*)(v7 + 640) = v40 + 1;
  return result;
}

__int64 snd_a2f180(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  char v4;
  __int64* v5;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _BYTE* v14;
  double v15;
  _QWORD v16[25];

  v2 = *(_DWORD*)(result + 640);
  if (v2 != 0) {
    v3 = result;
    v4 = *(_BYTE*)(result + 2784);
    v5 = (__int64*)(result + 2760);
    *(_DWORD*)(result + 640) = v2 - 1;
    v7 = *(unsigned __int8*)(result + 2760);
    v8 = (__int64*)(result + 2784);
    if ((v4 & 1) != 0) {
      v10 = (v7 & 1) == 0;
      v11 = v7 >> 1;
      if (v10) {
        v12 = v3 + 2761;
      }
      else {
        v12 = *(_QWORD*)(v3 + 2776);
      }
      if (v10) {
        v13 = v11;
      }
      else {
        v13 = *(_QWORD*)(v3 + 2768);
      }
      SpineModel_64dde0(v8, v12, v13);
      if ((*(_BYTE*)v5 & 1) != 0) {
        goto LABEL_15;
      }
    }
    else if ((v7 & 1) != 0) {
      GameRoutine_64df20(v8, *(_QWORD*)(v3 + 2776), *(_QWORD*)(v3 + 2768));
      if ((*(_BYTE*)v5 & 1) != 0) {
      LABEL_15:
        v14 = *(_BYTE**)(v3 + 2776);
        *(_QWORD*)(v3 + 2768) = 0;
        goto LABEL_16;
      }
    }
    else {
      v9 = v5[1];
      *v8 = *v5;
      v8[1] = v9;
      v8[2] = v5[2];
      if ((*(_BYTE*)v5 & 1) != 0) {
        goto LABEL_15;
      }
    }
    v14 = (_BYTE*)(v3 + 2761);
    *(_BYTE*)(v3 + 2760) = 0;
  LABEL_16:
    *v14 = 0;
    *(_BYTE*)(v3 + 600) = 1;
    snd_a2c9c0(v3, a2);
    GameRoutine_e8270(v3, a2);
    v15 = snd_Fade_getTime(a2);
    snd_Fade_Fade_10c830((__int64)v16, *(float*)&v15);
    GameManager_a2c910((_DWORD*)v3, (__int64)v16);
    return snd_Fade_Destroy_Fade(v16);
  }
  return result;
}

__int64 snd_a2f2a0(__int64 result, _BYTE* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  int v9;
  _QWORD v10[25];
  __int64 v11[4];

  if (*(int*)(result + 644) <= 0) {
    v11[2] = v2;
    v11[3] = v3;
    v4 = result;
    *(_BYTE*)(result + 3076) = 0;
    if (a2 != nullptr && *a2 != 0) {
      snd_Fade_Fade_10c830((__int64)v10, 0x0.0p+0f);
      snd_play_ff2d0((__int64)a2, (__int64)a2, (__int64)v10, 0, 0x10001u, 0,
                     0x0.0p+0f, 0x1.0000000000000p+0f);
      result = snd_Fade_Destroy_Fade(v10);
    }
    if (*(_DWORD*)(v4 + 632) == 0) {
      result = *(_QWORD*)(game_sound_g_game_sound + 8);
      if (result != 0) {
        snd_BGM_getFirstHandle((void*)((__int64)v11), result);
        result = snd_fnd_WeakHandle_isValid(v11);
        if ((result & 1) != 0) {
          v6 = snd_fnd_WeakHandle_get((__int64)v11);
          result = snd_Voice_hasFeature(v6 - 5592, 0x19u);
          if ((result & 1) == 0) {
            snd_Fade_Fade_10cb00((__int64)v10, "FadeTime_BGM_Bmap_Out");
            snd_startVolume_1006d0(v11, 0, (__int64)v10, 0x0.0p+0f);
            snd_Fade_Destroy_Fade(v10);
            snd_Fade_Fade_10cb00((__int64)v10, "FadeTime_BGM_Combat_In");
            snd_startVolume_1006d0(v11, 1u, (__int64)v10,
                                   0x1.0000000000000p+0f);
            snd_Fade_Destroy_Fade(v10);
            snd_Fade_Fade_10cb00((__int64)v10, "FadeTime_BGM_Combat_In");
            snd_startVolume_1006d0(v11, 2u, (__int64)v10,
                                   0x1.0000000000000p+0f);
            result = snd_Fade_Destroy_Fade(v10);
          }
        }
      }
      if ((*(_DWORD*)(v4 + 2172) & 0x80000000) == 0) {
        snd_Fade_Fade_10c830((__int64)v10, 0x1.f400000000000p+9f);
        snd_BGM_getFirstHandle((void*)((__int64)v11), *(_QWORD*)(v4 + 8));
        v7 = snd_fnd_WeakHandle_get((__int64)v11);
        if (v7 != 0 && !snd_Voice_hasSends(v7 - 5592)) {
          (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(v4 + 8) + 48LL))(
              *(_QWORD*)(v4 + 8), v10, 0);
        }
        if ((*(_BYTE*)(v4 + 2824) & 1) != 0) {
          v8 = *(_BYTE**)(v4 + 2840);
          *(_QWORD*)(v4 + 2832) = 0;
        }
        else {
          v8 = (_BYTE*)(v4 + 2825);
          *(_BYTE*)(v4 + 2824) = 0;
        }
        *v8 = 0;
        result = snd_Fade_Destroy_Fade(v10);
      }
    }
    v9 = *(_DWORD*)(v4 + 644);
    *(_BYTE*)(v4 + 3076) = 0;
    *(_DWORD*)(v4 + 644) = v9 + 1;
  }
  return result;
}

__int64 snd_a2fab0(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  double v6;
  float v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  _BYTE* v17;
  _QWORD v18[25];
  _QWORD v19[27];

  if ((*(_BYTE*)(result + 2896) & 1) != 0) {
    v4 = *(_QWORD*)(result + 2904);
  }
  else {
    v4 = *(_BYTE*)(result + 2896) >> 1;
  }
  if (v4 == 0) {
    v19[25] = v2;
    v19[26] = v3;
    v5 = result;
    if ((*(_BYTE*)(result + 3128) & 1) == 0) {
      snd_Fade_Fade_10cd70((__int64)v19, a2);
      v6 = snd_Fade_getTime((__int64)v19);
      if (*(float*)&v6 < 0x0.0p+0f) {
        snd_Fade_Fade_10c830((__int64)v18, 0x1.f400000000000p+9f);
        GameRoutine_10d050((__int64)v19, (__int64)v18);
        snd_Fade_Destroy_Fade(v18);
      }
      v7 = snd_BGM_getFirstPlayPosition(*(_QWORD*)(v5 + 8));
      if (v7 > 0x0.0p+0f) {
        *(float*)(v5 + 2892) = v7;
      }
      v8 = *(unsigned __int8*)(v5 + 2824);
      v9 = (__int64*)(v5 + 2896);
      v10 = (__int64*)(v5 + 2824);
      if ((*(_BYTE*)(v5 + 2896) & 1) != 0) {
        v12 = (v8 & 1) == 0;
        v13 = v8 >> 1;
        if (v12) {
          v14 = v5 + 2825;
        }
        else {
          v14 = *(_QWORD*)(v5 + 2840);
        }
        if (v12) {
          v15 = v13;
        }
        else {
          v15 = *(_QWORD*)(v5 + 2832);
        }
        SpineModel_64dde0(v9, v14, v15);
        if ((*(_BYTE*)(v5 + 3128) & 1) != 0) {
          return snd_Fade_Destroy_Fade(v19);
        }
      }
      else if ((v8 & 1) != 0) {
        GameRoutine_64df20(v9, *(_QWORD*)(v5 + 2840), *(_QWORD*)(v5 + 2832));
        if ((*(_BYTE*)(v5 + 3128) & 1) != 0) {
          return snd_Fade_Destroy_Fade(v19);
        }
      }
      else {
        v11 = *(_QWORD*)(v5 + 2832);
        *v9 = *v10;
        *(_QWORD*)(v5 + 2904) = v11;
        *(_QWORD*)(v5 + 2912) = *(_QWORD*)(v5 + 2840);
        if ((*(_BYTE*)(v5 + 3128) & 1) != 0) {
          return snd_Fade_Destroy_Fade(v19);
        }
      }
      snd_BGM_getFirstHandle((void*)((__int64)v18), *(_QWORD*)(v5 + 8));
      v16 = snd_fnd_WeakHandle_get((__int64)v18);
      if (v16 != 0 && !snd_Voice_hasSends(v16 - 5592)) {
        (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(v5 + 8) + 48LL))(
            *(_QWORD*)(v5 + 8), v19, 0);
      }
      if ((*(_BYTE*)v10 & 1) != 0) {
        v17 = *(_BYTE**)(v5 + 2840);
        *(_QWORD*)(v5 + 2832) = 0;
      }
      else {
        v17 = (_BYTE*)(v5 + 2825);
        *(_BYTE*)(v5 + 2824) = 0;
      }
      *v17 = 0;
      return snd_Fade_Destroy_Fade(v19);
    }
  }
  return result;
}

__int64 snd_a2fc30(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  _BYTE* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19[2];
  _QWORD v20[25];

  if ((*(_BYTE*)(result + 2896) & 1) != 0) {
    v2 = *(_QWORD*)(result + 2904);
  }
  else {
    v2 = *(_BYTE*)(result + 2896) >> 1;
  }
  if (v2 != 0) {
    v3 = result;
    if ((*(_BYTE*)(result + 3128) & 1) == 0) {
      *(_BYTE*)(result + 601) = 0;
      v5 = (_BYTE*)(result + 2896);
      v6 = game_sound_g_game_sound_ptr[0];
      if ((snd_BGM_isFirstActive(
               *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)) &
           1) != 0) {
        v7 = *(_QWORD*)(*v6 + 8);
        snd_Fade_Fade_10cb00((__int64)v20, "FadeTime_BGM_Dead_Bmap_In");
        snd_BGM_resumeMuteAll(v7, (__int64)v20);
        snd_Fade_Destroy_Fade(v20);
        snd_BGM_getFirstHandle((void*)((__int64)v19), *(_QWORD*)(*v6 + 8));
        snd_Fade_Fade_10c830((__int64)v20, 0x0.0p+0f);
        snd_startVolume_1006d0(v19, 0, (__int64)v20, 0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(v20);
        snd_Fade_Fade_10c830((__int64)v20, 0x0.0p+0f);
        snd_startVolume_1006d0(v19, 1u, (__int64)v20, 0x0.0p+0f);
        snd_Fade_Destroy_Fade(v20);
        snd_Fade_Fade_10c830((__int64)v20, 0x0.0p+0f);
        snd_startVolume_1006d0(v19, 2u, (__int64)v20, 0x0.0p+0f);
        snd_Fade_Destroy_Fade(v20);
        v8 = snd_fnd_WeakHandle_get((__int64)v19);
        v9 = GameRoutine_190240(v8 + 88);
        result = GameRoutine_60a020(v3 + 2824, v9);
        if ((*v5 & 1) != 0) {
        LABEL_8:
          v10 = *(_BYTE**)(v3 + 2912);
          *(_QWORD*)(v3 + 2904) = 0;
        LABEL_25:
          *v10 = 0;
          return result;
        }
      }
      else {
        v11 = *(unsigned __int8*)(v3 + 2896);
        v12 = (__int64*)(v3 + 2824);
        if ((*(_BYTE*)(v3 + 2824) & 1) != 0) {
          v14 = (v11 & 1) == 0;
          v15 = v11 >> 1;
          if (v14) {
            v16 = v3 + 2897;
          }
          else {
            v16 = *(_QWORD*)(v3 + 2912);
          }
          if (v14) {
            v17 = v15;
          }
          else {
            v17 = *(_QWORD*)(v3 + 2904);
          }
          SpineModel_64dde0(v12, v16, v17);
        }
        else if ((v11 & 1) != 0) {
          GameRoutine_64df20(v12, *(_QWORD*)(v3 + 2912), *(_QWORD*)(v3 + 2904));
        }
        else {
          v13 = *(_QWORD*)(v3 + 2904);
          *v12 = *(_QWORD*)v5;
          *(_QWORD*)(v3 + 2832) = v13;
          *(_QWORD*)(v3 + 2840) = *(_QWORD*)(v3 + 2912);
        }
        if ((*(_BYTE*)(v3 + 2824) & 1) != 0) {
          v18 = *(_QWORD*)(v3 + 2840);
        }
        else {
          v18 = v3 + 2825;
        }
        result = GameRoutine_a290c0_alt1(v3, v18, a2, (int)*(float*)(v3 + 2892),
                                         0, 0x0.0p+0f);
        if ((*v5 & 1) != 0) {
          goto LABEL_8;
        }
      }
      v10 = (_BYTE*)(v3 + 2897);
      *(_BYTE*)(v3 + 2896) = 0;
      goto LABEL_25;
    }
  }
  return result;
}

__attribute__((swiftcall)) void snd_a306d0(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD v7[25];

  (*(void (**)(_QWORD, __int64, __int64, _QWORD, double, float))(
      **(_QWORD**)(a1 + 8) + 32LL))(*(_QWORD*)(a1 + 8), a2, a3, 0, 0x0.0p+0,
                                    0x1.0000000000000p+0f);
  snd_BGM_getFirstHandle((void*)((__int64)a4), *(_QWORD*)(a1 + 8));
  snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
  snd_startVolume_1006d0(a4, 0, (__int64)v7, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v7);
  snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
  snd_startVolume_1006d0(a4, 1u, (__int64)v7, 0x0.0p+0f);
  snd_Fade_Destroy_Fade(v7);
  snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
  snd_startVolume_1006d0(a4, 2u, (__int64)v7, 0x0.0p+0f);
  {
    snd_Fade_Destroy_Fade(v7);
    return;
  }
}

__attribute__((swiftcall)) void snd_a307a0(PSEUDO_X8 x8_, __int64 unused_int0,
                                           _BYTE* a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  _BYTE v13[232];
  _BYTE* v14;
  __int64 v15;
  __int64 v16;

  if (*a1 == 86 && a1[1] == 95 && a1[2] == 77 && a1[3] == 73 && a1[4] == 68 &&
      a1[5] == 95) {
    v15 = v3;
    v16 = v4;
    GameManager_a308c0(v13, a2, 0, 0, 65537, 0, 0.0f, 1.0f);
    v14 = a1;
    v11 = 0;
    v12 = 0x2000;
    v9 = 0;
    v10 = 0x2000;
    v6 = *GameData_212e248[0];
    v7 = 0;
    v8 = 0x2000;
    ((void (*)(__int64, __int64*, _BYTE*, const char*, __int64*, _BYTE*,
               __int64*))snd_1190b0_alt1)(v6, &v11, a1, "V_MID_Replacement",
                                          &v9, v13, &v7);
    snd_Fade_Destroy_Fade_alt1(v13);
  }
  else {
    snd_play_ff2d0_alt1((void*)(a3), a1, a1, a2, 0, 65537, 0, 0.0f, 1.0f);
  }
}

__attribute__((swiftcall)) void snd_a30960(PSEUDO_X8 x8_, __int64 unused_int0,
                                           _BYTE* a1, long double a3)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  _BYTE v15[232];
  _BYTE* v16;

  if (*a1 == 86 && a1[1] == 95 && a1[2] == 77 && a1[3] == 67 && a1[4] == 73 &&
      a1[5] == 68 && a1[6] == 95) {
    *(_QWORD*)&a3 = 0;
    *((_QWORD*)&v5 + 1) =
        LANES128_OF(snd_Fade_Fade_10c830_alt1(&v13, a3)).n128_u64[1];
    *(_QWORD*)&v5 = 0;
    GameManager_a308c0_alt1((__int64)v15, (__int64)&v13, 0, 0, 65537, 0, v5,
                            1.0);
    snd_Fade_Destroy_Fade_alt1(&v13);
    v16 = a1;
    v13 = 0;
    v14 = 0x2000;
    v11 = 0;
    v12 = 0x2000;
    v6 = *GameData_212e248[0];
    v9 = 0;
    v10 = 0x2000;
    snd_1190b0_alt2(v6, &v13, a1, "V_MID_Replacement", &v11, v15, &v9, v7);
  }
  else {
    *(_QWORD*)&a3 = 0;
    snd_Fade_Fade_10c830_alt1(v15, a3);
    snd_play_ff2d0_alt1((void*)(a2), a1, a1, v15, 0, 65537, 0, 0.0, 1.0);
  }
  {
    snd_Fade_Destroy_Fade_alt1(v15);
    return;
  }
}

__int64 snd_a30c60(__int64 a1)
{

#pragma clang fp contract(off)
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[25];

  v2 = GameRoutine_17caa0();
  *(_BYTE*)(a1 + 2544) = v2 & 1;
  if ((v2 & 1) == 0) {
    GameRoutine_17ca40();
  }
  *(_BYTE*)(a1 + 3017) = 0;
  snd_findSlot_100a50((void*)(v9), &GameData_21fa938);
  v3 = snd_fnd_WeakHandle_get((__int64)v9);
  if (v3 != 0) {
    v4 = v3;
    snd_Fade_Fade_10c830((__int64)v9, 0x1.f400000000000p+8f);
    (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v4 - 5552) + 96LL))(
        v4 - 5552, v9, 0x0.0p+0);
    snd_Fade_Destroy_Fade(v9);
  }
  snd_findSlot_100a50((void*)(v9), &GameData_21fa93c);
  v5 = snd_fnd_WeakHandle_get((__int64)v9);
  if (v5 != 0) {
    v6 = v5;
    snd_Fade_Fade_10c830((__int64)v9, 0x1.f400000000000p+8f);
    (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v6 - 5552) + 96LL))(
        v6 - 5552, v9, 0x0.0p+0);
    snd_Fade_Destroy_Fade(v9);
  }
  snd_findSlot_100a50((void*)(v9), &GameData_21fa940);
  result = snd_fnd_WeakHandle_get((__int64)v9);
  if (result != 0) {
    v8 = result;
    snd_Fade_Fade_10c830((__int64)v9, 0x1.f400000000000p+8f);
    (*(void (**)(__int64, _QWORD*, double))(*(_QWORD*)(v8 - 5552) + 96LL))(
        v8 - 5552, v9, 0x0.0p+0);
    result = snd_Fade_Destroy_Fade(v9);
  }
  *(_BYTE*)(a1 + 3076) = 0;
  *(_DWORD*)(a1 + 648) = 1;
  return result;
}

__int64 snd_a30db0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[25];

  if ((*(_BYTE*)(a1 + 2544) & 1) == 0) {
    GameRoutine_17ca70();
  }
  *(_BYTE*)(a1 + 2544) = 0;
  *(_BYTE*)(a1 + 3017) = 0;
  snd_findSlot_100a50((void*)(v8), &GameData_21fa938);
  v2 = snd_fnd_WeakHandle_get((__int64)v8);
  if (v2 != 0) {
    v3 = v2;
    snd_Fade_Fade_10c830((__int64)v8, 0x1.f400000000000p+8f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v3 - 5552) + 96LL))(
        v3 - 5552, v8, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v8);
  }
  snd_findSlot_100a50((void*)(v8), &GameData_21fa93c);
  v4 = snd_fnd_WeakHandle_get((__int64)v8);
  if (v4 != 0) {
    v5 = v4;
    snd_Fade_Fade_10c830((__int64)v8, 0x1.f400000000000p+8f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v5 - 5552) + 96LL))(
        v5 - 5552, v8, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v8);
  }
  snd_findSlot_100a50((void*)(v8), &GameData_21fa940);
  result = snd_fnd_WeakHandle_get((__int64)v8);
  if (result != 0) {
    v7 = result;
    snd_Fade_Fade_10c830((__int64)v8, 0x1.f400000000000p+8f);
    (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v7 - 5552) + 96LL))(
        v7 - 5552, v8, 0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade(v8);
  }
  *(_DWORD*)(a1 + 648) = 0;
  return result;
}

__int64 snd_a312c0(__int64 result, _BYTE* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v6[2];
  _QWORD v7[25];

  if (a2 != nullptr && *a2 != 0) {
    v4 = result;
    if (strstr(a2, "FF_") != 0) {
      snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
      snd_playDirect_ff6f0((__int64)"MovieBGM", (__int64)a2, (__int64)v7, 0,
                           0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    }
    else {
      (*(void (**)(_QWORD, _BYTE*, __int64, _QWORD, double, float))(
          **(_QWORD**)(v4 + 8) + 24LL))(*(_QWORD*)(v4 + 8), a2, a3, 0, 0x0.0p+0,
                                        0x1.0000000000000p+0f);
      snd_BGM_getFirstHandle((void*)((__int64)v6), *(_QWORD*)(v4 + 8));
      snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
      snd_startVolume_1006d0(v6, 0, (__int64)v7, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v7);
      snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
      snd_startVolume_1006d0(v6, 1u, (__int64)v7, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v7);
      snd_Fade_Fade_10c830((__int64)v7, 0x0.0p+0f);
      snd_startVolume_1006d0(v6, 2u, (__int64)v7, 0x0.0p+0f);
    }
    return snd_Fade_Destroy_Fade(v7);
  }
  return result;
}

__int64 snd_a31410(__int64 result, _BYTE* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  bool v11;
  __int64 v12[2];
  struct {
    _QWORD v13[2];
    _QWORD* v14;
  } v13_;

  if (a2 != nullptr && *a2 != 0) {
    v4 = result;
    if (strstr(a2, "FF_") != 0) {
      snd_Fade_Fade_10c830((__int64)v13_.v13, 0x0.0p+0f);
      snd_play_ff2d0((__int64)"MovieBGM", (__int64)a2, (__int64)v13_.v13, 0,
                     0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      return snd_Fade_Destroy_Fade(v13_.v13);
    }
    snd_BGM_getFirstNameString((void*)((__int64)v13_.v13), *(_QWORD*)(v4 + 8));
    v6 = strlen(a2);
    v7 = v13_.v13[0];
    v8 = LOBYTE(v13_.v13[0]) >> 1;
    if ((v13_.v13[0] & 1) != 0) {
      v8 = v13_.v13[1];
    }
    if (v6 != v8) {
      goto LABEL_13;
    }
    v9 = v6;
    if (v6 == -1) {
      snd_a36650();
    }
    v10 = (v13_.v13[0] & 1) != 0 ? v13_.v14 : (_QWORD*)((char*)v13_.v13 + 1);
    if ((unsigned int)memcmp(v10, a2, v9) == 0) {
      v11 = snd_BGM_checkFinished(*(_QWORD*)(v4 + 8));
      if ((v13_.v13[0] & 1) != 0) {
        (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
            *snd_g_memory_ptr[0], v13_.v14);
      }
      if (v11) {
        snd_BGM_releaseFirst(*(_QWORD*)(v4 + 8));
        goto LABEL_16;
      }
    }
    else {
    LABEL_13:
      if ((v7 & 1) != 0) {
        (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
            *snd_g_memory_ptr[0], v13_.v14);
      }
    }
    (*(void (**)(_QWORD, _BYTE*, __int64, _QWORD, double, float))(
        **(_QWORD**)(v4 + 8) + 32LL))(*(_QWORD*)(v4 + 8), a2, a3, 0, 0x0.0p+0,
                                      0x1.0000000000000p+0f);
  LABEL_16:
    snd_BGM_getFirstHandle((void*)((__int64)v12), *(_QWORD*)(v4 + 8));
    snd_Fade_Fade_10c830((__int64)v13_.v13, 0x0.0p+0f);
    snd_startVolume_1006d0(v12, 0, (__int64)v13_.v13, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(v13_.v13);
    snd_Fade_Fade_10c830((__int64)v13_.v13, 0x0.0p+0f);
    snd_startVolume_1006d0(v12, 1u, (__int64)v13_.v13, 0x0.0p+0f);
    snd_Fade_Destroy_Fade(v13_.v13);
    snd_Fade_Fade_10c830((__int64)v13_.v13, 0x0.0p+0f);
    snd_startVolume_1006d0(v12, 2u, (__int64)v13_.v13, 0x0.0p+0f);
    return snd_Fade_Destroy_Fade(v13_.v13);
  }
  return result;
}

__int64 snd_a33060(__int64 a1, int a2, int a3, unsigned __int8 a4, char* a5,
                   char* a6)
{
  int v6;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _DWORD* v14;
  char* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _BOOL4 v32;
  __int64 v33;
  int v34;
  int v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  char v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  char* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  _DWORD* v50;
  _BYTE* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 i;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  _BYTE* v79;
  _DWORD* v80;
  int v81;
  int v82;
  struct {
    __int64 v83;
    unsigned __int64 v84;
    char* v85;
  } v83_;
  struct {
    __int64 v86;
    unsigned __int64 v87;
    char* v88;
  } v86_;

  v6 = a4;
  if (a5 != nullptr) {
    v11 = a5;
    if (a4 == 1) {
      if ((unsigned int)strcmp(a5, &GameData_1ac6ccb) != 0) {
        if ((unsigned int)strcmp(v11, &GameData_1ada738) == 0) {
          v11 = (char*)&GameData_1ab3e06;
        }
      }
      else {
        v11 = (char*)&GameData_1ade2f6;
      }
    }
  }
  else {
    v11 = &GameData_1a9f09e;
  }
  *(_QWORD*)(a1 + 2172) = -1;
  if (a2 == 0) {
    return 0;
  }
  if (a6 == nullptr) {
    if (a2 == 5) {
      if (a3 < 1) {
        a6 = GameData_2167448[0];
      }
      else {
        a6 = GameData_2167448[a3 - 1];
      }
    }
    else {
      a6 = GameData_2167420[a2 - 1];
    }
  }
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_260;
  }
  v81 = a2;
  v13 = v12;
  v82 = a3;
  v14 = (_DWORD*)(a1 + 36LL * a2);
  v79 = (_BYTE*)(a1 + 1480);
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v12 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v16, 16, 0);
    v86_.v87 = v13;
    v86_.v88 = v15;
    v86_.v86 = v16 | 1;
  }
  else {
    LOBYTE(v86_.v86) = 2 * v12;
    v15 = (char*)&v86_.v86 + 1;
    if (v12 == 0) {
      goto LABEL_25;
    }
  }
  memcpy(v15, v11, v13);
LABEL_25:
  v15[v13] = 0;
  v17 = (_QWORD*)(a1 + 1504);
  v18 = 16;
  v19 = v86_.v88;
  v80 = v14 + 489;
  if ((v86_.v86 & 1) != 0) {
    v20 = v86_.v87;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v86_.v86 >> 1;
  }
  if ((v86_.v86 & 1) != 0) {
    v21 = v86_.v88;
  }
  else {
    v21 = (char*)&v86_.v86 + 1;
  }
  while (1) {
    if (*((unsigned __int8*)v17 - 24) == v6) {
      v22 = *((unsigned __int8*)v17 - 16);
      v23 = *(v17 - 1);
      if ((v22 & 1) == 0) {
        v23 = v22 >> 1;
      }
      if (v23 == v20) {
        v24 = (v22 & 1) != 0 ? (_QWORD*)*v17 : (_QWORD*)((char*)v17 - 15);
        if ((unsigned int)memcmp(v24, v21, v20) == 0) {
          break;
        }
      }
    }
    --v18;
    v17 += 4;
    if (v18 == 0) {
      v32 = false;
      if ((v86_.v86 & 1) == 0) {
        goto LABEL_71;
      }
      goto LABEL_67;
    }
  }
  v32 = v14[490] + (_DWORD)v18 == 16 || v14[491] + (_DWORD)v18 == 16 ||
        v14[492] + (_DWORD)v18 == 16 || v14[493] + (_DWORD)v18 == 16 ||
        v14[494] + (_DWORD)v18 == 16 || v14[495] + (_DWORD)v18 == 16 ||
        v14[496] + (_DWORD)v18 == 16 || v14[497] + (_DWORD)v18 == 16;
  if ((v86_.v86 & 1) != 0) {
  LABEL_67:
    if (v19 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v33);
    }
  }
LABEL_71:
  if (!v32) {
    v36 = strlen(v11);
    if (v36 < 0xFFFFFFFFFFFFFFF7LL) {
      v37 = v36;
      if (v36 >= 0x17) {
        if ((v36 | 7) == 0x17) {
          v39 = 26;
        }
        else {
          v39 = (v36 | 7) + 1;
        }
        v38 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v39, 16, 0);
        v83_.v84 = v37;
        v83_.v85 = v38;
        v83_.v83 = v39 | 1;
      }
      else {
        LOBYTE(v83_.v83) = 2 * v36;
        v38 = (char*)&v83_.v83 + 1;
        if (v36 == 0) {
          goto LABEL_82;
        }
      }
      memcpy(v38, v11, v37);
    LABEL_82:
      v38[v37] = 0;
      v40 = (_QWORD*)(a1 + 1504);
      v41 = 0;
      v42 = v83_.v83;
      v43 = (__int64)v83_.v85;
      v44 = v83_.v84;
      if ((v83_.v83 & 1) != 0) {
        v45 = v83_.v84;
      }
      else {
        v45 = (unsigned __int64)(unsigned __int8)v83_.v83 >> 1;
      }
      if ((v83_.v83 & 1) != 0) {
        v46 = v83_.v85;
      }
      else {
        v46 = (char*)&v83_.v83 + 1;
      }
      do {
        if (*((unsigned __int8*)v40 - 24) == v6) {
          v47 = *((unsigned __int8*)v40 - 16);
          v48 = *(v40 - 1);
          if ((v47 & 1) == 0) {
            v48 = v47 >> 1;
          }
          if (v48 == v45) {
            v49 = (v47 & 1) != 0 ? (_QWORD*)*v40 : (_QWORD*)((char*)v40 - 15);
            if ((unsigned int)memcmp(v49, v46, v45) == 0) {
              v50 = v80;
              goto LABEL_129;
            }
          }
        }
        ++v41;
        v40 += 4;
      } while (v41 != 16);
      if (*v79 == 10) {
        v41 = 0;
      LABEL_100:
        v50 = v80;
        goto LABEL_123;
      }
      v50 = v80;
      if (*(_BYTE*)(a1 + 1512) == 10) {
        v41 = 1;
      }
      else if (*(_BYTE*)(a1 + 1544) == 10) {
        v41 = 2;
      }
      else if (*(_BYTE*)(a1 + 1576) == 10) {
        v41 = 3;
      }
      else if (*(_BYTE*)(a1 + 1608) == 10) {
        v41 = 4;
      }
      else if (*(_BYTE*)(a1 + 1640) == 10) {
        v41 = 5;
      }
      else if (*(_BYTE*)(a1 + 1672) == 10) {
        v41 = 6;
      }
      else if (*(_BYTE*)(a1 + 1704) == 10) {
        v41 = 7;
      }
      else if (*(_BYTE*)(a1 + 1736) == 10) {
        v41 = 8;
      }
      else if (*(_BYTE*)(a1 + 1768) == 10) {
        v41 = 9;
      }
      else if (*(_BYTE*)(a1 + 1800) == 10) {
        v41 = 10;
      }
      else {
        if (*(_BYTE*)(a1 + 1832) != 10) {
          if (*(_BYTE*)(a1 + 1864) == 10) {
            v41 = 12;
          }
          else if (*(_BYTE*)(a1 + 1896) == 10) {
            v41 = 13;
          }
          else {
            if (*(_BYTE*)(a1 + 1928) != 10) {
              v50 = v80;
              if (*(_BYTE*)(a1 + 1960) != 10) {
                goto LABEL_146;
              }
              v41 = 15;
              goto LABEL_123;
            }
            v41 = 14;
          }
          goto LABEL_100;
        }
        v41 = 11;
      }
    LABEL_123:
      v51 = &v79[32 * v41];
      *v51 = v6;
      v52 = (__int64*)(v51 + 8);
      if (v52 != &v83_.v83) {
        if ((*(_BYTE*)v52 & 1) != 0) {
          SpineModel_64dde0(v52, (__int64)v46, v45);
        }
        else if ((v42 & 1) != 0) {
          GameRoutine_64df20(v52, v43, v44);
        }
        else {
          v53 = v83_.v84;
          *v52 = v83_.v83;
          v52[1] = v53;
          v52[2] = (__int64)v83_.v85;
        }
      }
    LABEL_129:
      if ((v50[1] & 0x80000000) != 0) {
        v54 = 0;
      }
      else if ((v50[2] & 0x80000000) != 0) {
        v54 = 1;
      }
      else if ((v50[3] & 0x80000000) != 0) {
        v54 = 2;
      }
      else if ((v50[4] & 0x80000000) != 0) {
        v54 = 3;
      }
      else if ((v50[5] & 0x80000000) != 0) {
        v54 = 4;
      }
      else if ((v50[6] & 0x80000000) != 0) {
        v54 = 5;
      }
      else if ((v50[7] & 0x80000000) != 0) {
        v54 = 6;
      }
      else {
        if ((v50[8] & 0x80000000) == 0) {
          goto LABEL_146;
        }
        v54 = 7;
      }
      v50[v54 + 1] = v41;
    LABEL_146:
      if ((v83_.v83 & 1) != 0 && v83_.v85 != nullptr) {
        v55 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v55);
      }
      if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
          (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
        *(_DWORD*)(GameData_22400f8 + 12) |= 0x10000u;
      }
      v56 = a1 + 712;
      v57 = (_QWORD*)(a1 + 728);
      v58 = strlen(a6);
      for (i = 0; i != 32; ++i) {
        v60 = *((_BYTE*)v57 - 16) >> 1;
        if ((*(_BYTE*)(v57 - 2) & 1) != 0) {
          v60 = *(v57 - 1);
        }
        if (v58 == v60) {
          if (v58 == -1) {
            String_60a230();
          }
          v61 = (*(_BYTE*)(v57 - 2) & 1) != 0 ? (_QWORD*)*v57
                                              : (_QWORD*)((char*)v57 - 15);
          if ((unsigned int)memcmp(v61, a6, v58) == 0) {
            goto LABEL_247;
          }
        }
        v57 += 3;
      }
      if ((*(_BYTE*)(a1 + 712) & 1) != 0) {
        v62 = *(_QWORD*)(a1 + 720);
      }
      else {
        v62 = *(_BYTE*)(a1 + 712) >> 1;
      }
      if (v62 != 0) {
        if ((*(_BYTE*)(a1 + 736) & 1) != 0) {
          v63 = *(_QWORD*)(a1 + 744);
        }
        else {
          v63 = *(_BYTE*)(a1 + 736) >> 1;
        }
        if (v63 != 0) {
          if ((*(_BYTE*)(a1 + 760) & 1) != 0) {
            v64 = *(_QWORD*)(a1 + 768);
          }
          else {
            v64 = *(_BYTE*)(a1 + 760) >> 1;
          }
          if (v64 != 0) {
            if ((*(_BYTE*)(a1 + 784) & 1) != 0) {
              v65 = *(_QWORD*)(a1 + 792);
            }
            else {
              v65 = *(_BYTE*)(a1 + 784) >> 1;
            }
            if (v65 != 0) {
              if ((*(_BYTE*)(a1 + 808) & 1) != 0) {
                v66 = *(_QWORD*)(a1 + 816);
              }
              else {
                v66 = *(_BYTE*)(a1 + 808) >> 1;
              }
              if (v66 != 0) {
                if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
                  v67 = *(_QWORD*)(a1 + 840);
                }
                else {
                  v67 = *(_BYTE*)(a1 + 832) >> 1;
                }
                if (v67 != 0) {
                  if ((*(_BYTE*)(a1 + 856) & 1) != 0) {
                    v68 = *(_QWORD*)(a1 + 864);
                  }
                  else {
                    v68 = *(_BYTE*)(a1 + 856) >> 1;
                  }
                  if (v68 != 0) {
                    if ((*(_BYTE*)(a1 + 880) & 1) != 0) {
                      v69 = *(_QWORD*)(a1 + 888);
                    }
                    else {
                      v69 = *(_BYTE*)(a1 + 880) >> 1;
                    }
                    if (v69 != 0) {
                      if ((*(_BYTE*)(a1 + 904) & 1) != 0) {
                        v70 = *(_QWORD*)(a1 + 912);
                      }
                      else {
                        v70 = *(_BYTE*)(a1 + 904) >> 1;
                      }
                      if (v70 != 0) {
                        if ((*(_BYTE*)(a1 + 928) & 1) != 0) {
                          v71 = *(_QWORD*)(a1 + 936);
                        }
                        else {
                          v71 = *(_BYTE*)(a1 + 928) >> 1;
                        }
                        if (v71 != 0) {
                          if ((*(_BYTE*)(a1 + 952) & 1) != 0) {
                            v72 = *(_QWORD*)(a1 + 960);
                          }
                          else {
                            v72 = *(_BYTE*)(a1 + 952) >> 1;
                          }
                          if (v72 != 0) {
                            if ((*(_BYTE*)(a1 + 976) & 1) != 0) {
                              v73 = *(_QWORD*)(a1 + 984);
                            }
                            else {
                              v73 = *(_BYTE*)(a1 + 976) >> 1;
                            }
                            if (v73 != 0) {
                              if ((*(_BYTE*)(a1 + 1000) & 1) != 0) {
                                v74 = *(_QWORD*)(a1 + 1008);
                              }
                              else {
                                v74 = *(_BYTE*)(a1 + 1000) >> 1;
                              }
                              if (v74 != 0) {
                                if ((*(_BYTE*)(a1 + 1024) & 1) != 0) {
                                  v75 = *(_QWORD*)(a1 + 1032);
                                }
                                else {
                                  v75 = *(_BYTE*)(a1 + 1024) >> 1;
                                }
                                if (v75 != 0) {
                                  if ((*(_BYTE*)(a1 + 1048) & 1) != 0) {
                                    v76 = *(_QWORD*)(a1 + 1056);
                                  }
                                  else {
                                    v76 = *(_BYTE*)(a1 + 1048) >> 1;
                                  }
                                  if (v76 != 0) {
                                    if ((*(_BYTE*)(a1 + 1072) & 1) != 0) {
                                      v77 = *(_QWORD*)(a1 + 1080);
                                    }
                                    else {
                                      v77 = *(_BYTE*)(a1 + 1072) >> 1;
                                    }
                                    if (v77 != 0) {
                                      return 0;
                                    }
                                    v56 = a1 + 1072;
                                    LODWORD(i) = 15;
                                  }
                                  else {
                                    v56 = a1 + 1048;
                                    LODWORD(i) = 14;
                                  }
                                }
                                else {
                                  v56 = a1 + 1024;
                                  LODWORD(i) = 13;
                                }
                              }
                              else {
                                v56 = a1 + 1000;
                                LODWORD(i) = 12;
                              }
                            }
                            else {
                              v56 = a1 + 976;
                              LODWORD(i) = 11;
                            }
                          }
                          else {
                            v56 = a1 + 952;
                            LODWORD(i) = 10;
                          }
                        }
                        else {
                          v56 = a1 + 928;
                          LODWORD(i) = 9;
                        }
                      }
                      else {
                        v56 = a1 + 904;
                        LODWORD(i) = 8;
                      }
                    }
                    else {
                      v56 = a1 + 880;
                      LODWORD(i) = 7;
                    }
                  }
                  else {
                    v56 = a1 + 856;
                    LODWORD(i) = 6;
                  }
                }
                else {
                  v56 = a1 + 832;
                  LODWORD(i) = 5;
                }
              }
              else {
                v56 = a1 + 808;
                LODWORD(i) = 4;
              }
            }
            else {
              v56 = a1 + 784;
              LODWORD(i) = 3;
            }
          }
          else {
            v56 = a1 + 760;
            LODWORD(i) = 2;
          }
        }
        else {
          v56 = a1 + 736;
          LODWORD(i) = 1;
        }
      }
      else {
        LODWORD(i) = 0;
      }
      GameRoutine_60a020(v56, (__int64)a6);
    LABEL_247:
      *v50 = i;
      v35 = v81;
      v34 = *(_DWORD*)(a1 + 2180);
      goto LABEL_248;
    }
  LABEL_260:
    String_60a1d0();
  }
  v34 = *(_DWORD*)(a1 + 2180);
  v35 = v81;
LABEL_248:
  if (v35 > v34) {
    *(_DWORD*)(a1 + 2172) = v35;
    *(_DWORD*)(a1 + 2176) = v82;
    return 1;
  }
  return 0;
}

__int64 snd_a339e0(__int64 a1, unsigned __int8 a2, char* a3)
{
  int v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  _QWORD* v12;
  char* v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _BOOL4 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  char v35;
  char* v36;
  unsigned __int64 v37;
  char* v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v47;
  unsigned __int64 v49;
  _DWORD* v50;
  __int64 v51;
  __int64 v52;
  _BYTE* v53;
  unsigned __int64 v54;
  char** v55;
  __int64 v56;
  __int64 v57;
  _BYTE* v58;
  __int64 v59;
  _DWORD* v60;
  _DWORD* v61;
  _DWORD* v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  _QWORD v66[25];
  struct {
    __int64 v67;
    unsigned __int64 v68;
    char* v69;
  } v67_;
  struct {
    __int64 v70;
    unsigned __int64 v71;
    __int64* v72;
  } v70_;
  __int64 v73[3];

  v3 = a2;
  *(_QWORD*)(a1 + 2172) = -1;
  if (a3 != nullptr) {
    v4 = a3;
    if (a2 == 1) {
      v5 = a1;
      if ((unsigned int)strcmp(a3, &GameData_1ac6ccb) != 0) {
        if ((unsigned int)strcmp(v4, &GameData_1ada738) == 0) {
          v4 = (char*)&GameData_1ab3e06;
        }
      }
      else {
        v4 = (char*)&GameData_1ade2f6;
      }
      a1 = v5;
    }
  }
  else {
    v4 = &GameData_1a9f09e;
  }
  v6 = 1;
  v7 = 0;
  v63 = a1;
  v64 = (_QWORD*)(a1 + 1504);
  v65 = a1 + 1992;
  while (1) {
    v8 = strlen(v4);
    if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_196;
    }
    v9 = v8;
    if (v8 >= 0x17) {
      v11 = (v8 | 7) == 0x17 ? 26LL : (v8 | 7) + 1;
      v10 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
      v70_.v71 = v9;
      v70_.v72 = (__int64*)v10;
      v70_.v70 = v11 | 1;
    }
    else {
      v10 = (char*)&v70_.v70 + 1;
      LOBYTE(v70_.v70) = 2 * v8;
      if (v8 == 0) {
        goto LABEL_20;
      }
    }
    memcpy(v10, v4, v9);
  LABEL_20:
    v12 = v64;
    v10[v9] = 0;
    v13 = v4;
    v14 = 16;
    v15 = v70_.v72;
    v16 = (v70_.v70 & 1) != 0
              ? v70_.v71
              : (unsigned __int64)(unsigned __int8)v70_.v70 >> 1;
    v17 = (v70_.v70 & 1) != 0 ? v70_.v72 : (__int64*)((char*)&v70_.v70 + 1);
    while (1) {
      if (*((unsigned __int8*)v12 - 24) == v3) {
        v18 = *((unsigned __int8*)v12 - 16);
        v19 = *(v12 - 1);
        if ((v18 & 1) == 0) {
          v19 = v18 >> 1;
        }
        if (v19 == v16) {
          v20 = (v18 & 1) != 0 ? (_QWORD*)*v12 : (_QWORD*)((char*)v12 - 15);
          if ((unsigned int)memcmp(v20, v17, v16) == 0) {
            break;
          }
        }
      }
      --v14;
      v12 += 4;
      if (v14 == 0) {
        v28 = false;
        v4 = v13;
        if ((v70_.v70 & 1) == 0) {
          goto LABEL_66;
        }
        goto LABEL_62;
      }
    }
    v28 = *(_DWORD*)(v65 + 36 * v6 - 32) + (_DWORD)v14 == 16 ||
          *(_DWORD*)(v65 + 36 * v6 - 28) + (_DWORD)v14 == 16 ||
          *(_DWORD*)(v65 + 36 * v6 - 24) + (_DWORD)v14 == 16 ||
          *(_DWORD*)(v65 + 36 * v6 - 20) + (_DWORD)v14 == 16 ||
          *(_DWORD*)(v65 + 36 * v6 - 16) + (_DWORD)v14 == 16 ||
          *(_DWORD*)(v65 + 36 * v6 - 12) + (_DWORD)v14 == 16 ||
          *(_DWORD*)(v65 + 36 * v6 - 8) + (_DWORD)v14 == 16 ||
          *(_DWORD*)(v65 + 36 * v6 - 4) + (_DWORD)v14 == 16;
    v4 = v13;
    if ((v70_.v70 & 1) != 0) {
    LABEL_62:
      if (v15 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v29);
      }
    }
  LABEL_66:
    if (v28) {
      break;
    }
    ++v6;
    ++v7;
    if (v6 == 6) {
      goto LABEL_120;
    }
  }
  v30 = strlen(v4);
  if (v30 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_196:
    String_60a1d0();
  }
  v31 = v30;
  if (v30 >= 0x17) {
    if ((v30 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v30 | 7) + 1;
    }
    v32 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v33, 16, 0);
    v67_.v68 = v31;
    v67_.v69 = v32;
    v67_.v67 = v33 | 1;
  }
  else {
    v32 = (char*)&v67_.v67 + 1;
    LOBYTE(v67_.v67) = 2 * v30;
    if (v30 == 0) {
      goto LABEL_78;
    }
  }
  memcpy(v32, v4, v31);
LABEL_78:
  v32[v31] = 0;
  v34 = 16;
  v35 = v67_.v67;
  v36 = v67_.v69;
  if ((v67_.v67 & 1) != 0) {
    v37 = v67_.v68;
  }
  else {
    v37 = (unsigned __int64)(unsigned __int8)v67_.v67 >> 1;
  }
  if ((v67_.v67 & 1) != 0) {
    v38 = v67_.v69;
  }
  else {
    v38 = (char*)&v67_.v67 + 1;
  }
  v39 = (_QWORD*)(v63 + 1504);
  while (1) {
    if (*((unsigned __int8*)v39 - 24) == v3) {
      v40 = *((unsigned __int8*)v39 - 16);
      v41 = *(v39 - 1);
      if ((v40 & 1) == 0) {
        v41 = v40 >> 1;
      }
      if (v41 == v37) {
        v42 = (v40 & 1) != 0 ? (_QWORD*)*v39 : (_QWORD*)((char*)v39 - 15);
        if ((unsigned int)memcmp(v42, v38, v37) == 0) {
          break;
        }
      }
    }
    --v34;
    v39 += 4;
    if (v34 == 0) {
      goto LABEL_111;
    }
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 32) + (_DWORD)v34 == 16) {
    v43 = 0;
    goto LABEL_110;
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 28) + (_DWORD)v34 == 16) {
    v43 = 1;
    goto LABEL_110;
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 24) + (_DWORD)v34 == 16) {
    v43 = 2;
    goto LABEL_110;
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 20) + (_DWORD)v34 == 16) {
    v43 = 3;
    goto LABEL_110;
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 16) + (_DWORD)v34 == 16) {
    v43 = 4;
    goto LABEL_110;
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 12) + (_DWORD)v34 == 16) {
    v43 = 5;
    goto LABEL_110;
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 8) + (_DWORD)v34 == 16) {
    v43 = 6;
    goto LABEL_110;
  }
  if (*(_DWORD*)(v65 + 36 * v6 - 4) + (_DWORD)v34 == 16) {
    v43 = 7;
  LABEL_110:
    *(_DWORD*)(v65 + 36 * v6 - 32 + 4 * v43) = -1;
  }
LABEL_111:
  if ((v35 & 1) != 0 && v36 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
  }
  v45 = *(unsigned int*)(v63 + 2180);
  if (v6 > (int)v45 || v6 != v45) {
  LABEL_120:
    v47 = 0;
    return v28 & (unsigned int)v47;
  }
  v47 = 0;
  if ((*(_DWORD*)(v65 + 36 * v6 - 32) & 0x80000000) != 0 &&
      (*(_DWORD*)(v65 + 36 * v6 - 28) & 0x80000000) != 0 &&
      (*(_DWORD*)(v65 + 36 * v6 - 24) & 0x80000000) != 0 &&
      (*(_DWORD*)(v65 + 36 * v6 - 20) & 0x80000000) != 0 &&
      (*(_DWORD*)(v65 + 36 * v6 - 16) & 0x80000000) != 0 &&
      (*(_DWORD*)(v65 + 36 * v6 - 12) & 0x80000000) != 0 &&
      (*(_DWORD*)(v65 + 36 * v6 - 8) & 0x80000000) != 0 &&
      (*(_DWORD*)(v65 + 36 * v6 - 4) & 0x80000000) != 0) {
    if (v7 == 0) {
      goto LABEL_140;
    }
    v49 = v7 - 1;
    v50 = (_DWORD*)(v65 + 36 * (v7 - 1));
    if ((v50[1] & 0x80000000) == 0 || (v50[2] & 0x80000000) == 0 ||
        (v50[3] & 0x80000000) == 0 || (v50[4] & 0x80000000) == 0 ||
        (v50[5] & 0x80000000) == 0 || (v50[6] & 0x80000000) == 0 ||
        (v50[7] & 0x80000000) == 0 || (v50[8] & 0x80000000) == 0) {
      v54 = v7 - 1;
      v49 = v7;
      goto LABEL_149;
    }
    if (v7 == 1) {
      goto LABEL_140;
    }
    v60 = (_DWORD*)(v65 + 36 * (v7 - 2));
    if ((v60[1] & 0x80000000) == 0 || (v60[2] & 0x80000000) == 0 ||
        (v60[3] & 0x80000000) == 0 || (v60[4] & 0x80000000) == 0 ||
        (v60[5] & 0x80000000) == 0 || (v60[6] & 0x80000000) == 0 ||
        (v60[7] & 0x80000000) == 0 || (v60[8] & 0x80000000) == 0) {
      v54 = v7 - 2;
      goto LABEL_149;
    }
    if (v7 < 3) {
      goto LABEL_140;
    }
    v61 = (_DWORD*)(v65 + 36 * (v7 - 3));
    if ((v61[1] & 0x80000000) == 0 || (v61[2] & 0x80000000) == 0 ||
        (v61[3] & 0x80000000) == 0 || (v61[4] & 0x80000000) == 0 ||
        (v61[5] & 0x80000000) == 0 || (v61[6] & 0x80000000) == 0 ||
        (v61[7] & 0x80000000) == 0 || (v61[8] & 0x80000000) == 0) {
      v54 = v7 - 3;
      v49 = v7 - 2;
      goto LABEL_149;
    }
    if (v7 == 3) {
      goto LABEL_140;
    }
    v49 = v7 - 4;
    v62 = (_DWORD*)(v65 + 36 * (v7 - 4));
    if ((v62[1] & 0x80000000) == 0 || (v62[2] & 0x80000000) == 0 ||
        (v62[3] & 0x80000000) == 0 || (v62[4] & 0x80000000) == 0 ||
        (v62[5] & 0x80000000) == 0 || (v62[6] & 0x80000000) == 0 ||
        (v62[7] & 0x80000000) == 0 || (v62[8] & 0x80000000) == 0) {
      v54 = v7 - 4;
      v49 = v7 - 3;
      goto LABEL_149;
    }
    v54 = v7 - 5;
    if (v7 < 5) {
    LABEL_140:
      if ((*(_BYTE*)(v63 + 2456) & 1) != 0) {
        v51 = *(_QWORD*)(v63 + 2472);
      }
      else {
        v51 = v63 + 2457;
      }
      snd_Fade_Fade_10cb00((__int64)v66, "FadeTime_BGM_Boss_Combat_Out");
      snd_BGM_getFirstHandle((void*)((__int64)v73), *(_QWORD*)(v63 + 8));
      v52 = snd_fnd_WeakHandle_get((__int64)v73);
      if (v52 != 0 && !snd_Voice_hasSends(v52 - 5592)) {
        (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(v63 + 8) + 48LL))(
            *(_QWORD*)(v63 + 8), v66, 0);
      }
      if ((*(_BYTE*)(v63 + 2824) & 1) != 0) {
        v53 = *(_BYTE**)(v63 + 2840);
        *(_QWORD*)(v63 + 2832) = 0;
      }
      else {
        v53 = (_BYTE*)(v63 + 2825);
        *(_BYTE*)(v63 + 2824) = 0;
      }
      *v53 = 0;
      snd_Fade_Destroy_Fade(v66);
      snd_Fade_Fade_10cb00((__int64)v66, "FadeTime_BGM_Boss_Bmap_In");
      GameRoutine_a290c0_alt1(v63, v51, (__int64)v66, 0, 0, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v66);
      snd_BGM_getFirstHandle((void*)((__int64)v73),
                             *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8));
      snd_Fade_Fade_10c830((__int64)v66, 0x0.0p+0f);
      snd_startVolume_1006d0(v73, 0, (__int64)v66, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v66);
      snd_Fade_Fade_10c830((__int64)v66, 0x0.0p+0f);
      snd_startVolume_1006d0(v73, 1u, (__int64)v66, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v66);
      snd_Fade_Fade_10c830((__int64)v66, 0x0.0p+0f);
      snd_startVolume_1006d0(v73, 2u, (__int64)v66, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v66);
      *(_DWORD*)(v63 + 2188) = *(_DWORD*)(v63 + 2192);
      *(_QWORD*)(v63 + 2180) = 0;
    }
    else {
    LABEL_149:
      v55 = &GameData_2167420[v54];
      if (v49 == 5) {
        v55 = GameData_2167448_alt1;
      }
      v56 = (__int64)*v55;
      snd_Fade_Fade_10cb00((__int64)v66, "FadeTime_BGM_Boss_Combat_Out");
      snd_BGM_getFirstHandle((void*)((__int64)v73), *(_QWORD*)(v63 + 8));
      v57 = snd_fnd_WeakHandle_get((__int64)v73);
      if (v57 != 0 && !snd_Voice_hasSends(v57 - 5592)) {
        (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(v63 + 8) + 48LL))(
            *(_QWORD*)(v63 + 8), v66, 0);
      }
      if ((*(_BYTE*)(v63 + 2824) & 1) != 0) {
        v58 = *(_BYTE**)(v63 + 2840);
        *(_QWORD*)(v63 + 2832) = 0;
      }
      else {
        v58 = (_BYTE*)(v63 + 2825);
        *(_BYTE*)(v63 + 2824) = 0;
      }
      *v58 = 0;
      snd_Fade_Destroy_Fade(v66);
      snd_Fade_Fade_10cb00((__int64)v66, "FadeTime_BGM_Boss_Bmap_In");
      GameRoutine_a290c0_alt1(v63, v56, (__int64)v66, 0, 0, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v66);
      snd_BGM_getFirstHandle((void*)((__int64)v73),
                             *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8));
      snd_Fade_Fade_10c830((__int64)v66, 0x0.0p+0f);
      snd_startVolume_1006d0(v73, 0, (__int64)v66, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v66);
      snd_Fade_Fade_10c830((__int64)v66, 0x0.0p+0f);
      snd_startVolume_1006d0(v73, 1u, (__int64)v66, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v66);
      snd_Fade_Fade_10c830((__int64)v66, 0x0.0p+0f);
      snd_startVolume_1006d0(v73, 2u, (__int64)v66, 0x0.0p+0f);
      snd_Fade_Destroy_Fade(v66);
      *(_DWORD*)(v63 + 2188) = v54;
      *(_DWORD*)(v63 + 2180) = v49;
      *(_DWORD*)(v63 + 2184) = 0;
    }
    v59 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0 && *(_BYTE*)(v59 + 8) == 1 &&
        (*(_BYTE*)(v59 + 9) & 1) == 0) {
      *(_DWORD*)(v59 + 12) |= 0x10000u;
    }
    v47 = 1;
  }
  return v28 & (unsigned int)v47;
}

__attribute__((swiftcall)) void snd_a35e20(PSEUDO_X8 x8_, __int64 a1,
                                           __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  __int16 v12;
  int v13;
  int v14;
  unsigned __int64 v15;
  int v16;
  __int16 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  void* v25;
  long double v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  unsigned int v36;
  int v37;

  v4 = a3;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  result = snd_data_getMuseumDataCount(a1, a2);
  v37 = result;
  if ((int)result < 1) {
    v9 = 0;
  }
  else {
    v6 = a1 + 2548;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v33 = v6;
    v34 = v4;
    do {
      result = snd_data_getMuseumData(v8);
      v10 = *(unsigned int*)(result + 4);
      if (*(_QWORD*)(result + 32) != 0) {
        v11 = *(void**)(result + 32);
      }
      else {
        v11 = &GameData_1aa49c1;
      }
      if (((*(_DWORD*)(v6 + 4LL * ((int)v10 / 32)) >> v10) & 1) != 0) {
        v12 = 256;
      }
      else {
        v12 = *(unsigned __int8*)(result + 41) << 8;
      }
      v13 = *(_DWORD*)(result + 16);
      v14 = *(_DWORD*)(result + 20);
      v15 = v10 | ((unsigned __int64)*(unsigned int*)(result + 8) << 32);
      v16 = *(_DWORD*)(result + 44);
      v17 = v12 | *(unsigned __int8*)(result + 40);
      v18 = v4[2];
      if (v7 < v18) {
        *(_QWORD*)v7 = v15;
        *(_DWORD*)(v7 + 8) = v13;
        *(_DWORD*)(v7 + 12) = v14;
        *(_QWORD*)(v7 + 16) = v11;
        *(_DWORD*)(v7 + 24) = v16;
        *(_WORD*)(v7 + 28) = v17;
        v7 += 32LL;
      }
      else {
        v19 = v7 - v9;
        v36 = v8;
        v20 = (__int64)(v7 - v9) >> 5;
        v21 = v20 + 1;
        if ((unsigned __int64)(v20 + 1) >> 59 != 0) {
          *v34 = v9;
          GameRoutine_a36670();
        }
        v22 = v18 - v9;
        if (v22 >> 4 > v21) {
          v21 = v22 >> 4;
        }
        v23 = (unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFE0LL;
        v24 = 0x7FFFFFFFFFFFFFFLL;
        if (!v23) {
          v24 = v21;
        }
        if (v24 >> 59 != 0) {
          *v34 = v9;
          GameRoutine_60a210();
        }
        v25 = v11;
        v35 = 32 * v24;
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v24, 16, 0);
        v27 = result + v19;
        v28 = result + v19 - 32 * v20;
        *(_QWORD*)v27 = v15;
        *(_DWORD*)(v27 + 8) = v13;
        *(_DWORD*)(v27 + 12) = v14;
        *(_QWORD*)(v27 + 16) = v25;
        *(_DWORD*)(v27 + 24) = v16;
        *(_WORD*)(v27 + 28) = v17;
        if (v9 != v7) {
          v29 = v9;
          v30 = v28;
          do {
            *(_QWORD*)v30 = *(_QWORD*)v29;
            *(_DWORD*)(v30 + 8) = *(_DWORD*)(v29 + 8);
            *(_DWORD*)(v30 + 12) = *(_DWORD*)(v29 + 12);
            *(_QWORD*)(v30 + 16) = *(_QWORD*)(v29 + 16);
            *(_DWORD*)(v30 + 24) = *(_DWORD*)(v29 + 24);
            v31 = *(_WORD*)(v29 + 28);
            v29 += 32;
            *(_WORD*)(v30 + 28) = v31;
            v30 += 32;
          } while (v29 != v7);
        }
        v4 = v34;
        v8 = v36;
        v7 = v27 + 32;
        v34[1] = v27 + 32;
        v34[2] = result + v35;
        if (v9 != 0) {
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v26);
        }
        v9 = v28;
        v6 = v33;
      }
      ++v8;
      v4[1] = v7;
    } while (v8 != v37);
  }
  *v4 = v9;
  {
    result;
    return;
  }
}

void __attribute__((noreturn)) snd_a36650() { String_60a250("basic_string"); }

void __attribute__((noreturn)) snd_a3a470()
{
  GameRoutine_60a1f0("basic_string");
}

#pragma GCC visibility pop
