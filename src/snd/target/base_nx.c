#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ConstructString_1901f0(_QWORD);
__int64 FsSoundArchive_2760a0(_QWORD);
__int64 FsSoundArchive_276120(_QWORD, _QWORD);
__int64 FsSoundArchive_2763f0(_QWORD, _QWORD, _QWORD);
__int64 FsSoundArchive_2764c0(_QWORD, _QWORD, _QWORD);
__int64 FsSoundArchive_Destructor(_QWORD);
__int64 GameRoutine_104660(_QWORD);
__int64 GameRoutine_105310(_QWORD);
__int64 GameRoutine_110280(__int64 result);
__int64 GameRoutine_111070(_QWORD);
__int64 GameRoutine_117bb0(_QWORD);
__int64 GameRoutine_118fd0(_QWORD);
__int64 GameRoutine_119020(_QWORD);
__int64 GameRoutine_13e770(_QWORD);
__int64 GameRoutine_149b20(__int64, _QWORD*);
__int64 GameRoutine_157010(void);
__int64 GameRoutine_1574a0(_QWORD, _QWORD);
__int64 GameRoutine_15a740(__int64*, __int64, __int64);
__int64 GameRoutine_164fe0(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_2766e0(_QWORD);
__int64 GameRoutine_276720(_QWORD, _QWORD);
__int64 GameRoutine_2767b0(_QWORD);
__int64 GameRoutine_277ea0(_QWORD);
__int64 GameRoutine_278640(_QWORD);
__int64 GameRoutine_278690(_QWORD, _QWORD);
__int64 GameRoutine_278770(_QWORD, _QWORD);
__int64 GameRoutine_278890(_QWORD, _QWORD);
__int64 GameRoutine_278f90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2798a0(_QWORD);
__int64 GameRoutine_27b0d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27b680(_QWORD);
__int64 GameRoutine_27cb30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27cb90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27cc40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27dfd0(_QWORD);
__int64 GameRoutine_284370(_QWORD);
__int64 GameRoutine_2843a0(_QWORD);
__int64 GameRoutine_286270(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2878e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_2b9060(void);
__int64 GameRoutine_2b9950(void);
__int64 GameRoutine_6511d0(unsigned __int64);
__int64 GameRoutine_a2af20(_QWORD, _QWORD, const char*, ...);
__int64 GameRoutine_a392e0(_QWORD, const char*, ...);
__int64 SoundArchivePlayer_Destructor(_QWORD);
__int64 SoundDataManager_27b820(_QWORD);
__int64 SoundHeap_27bfd0(_QWORD, _QWORD, _QWORD);
__int64 SoundVoiceNX_14e360(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_AcquireMemoryPool(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_IsMemoryPoolAttached(_QWORD);
__int64 nn_audio_RequestAttachMemoryPool(_QWORD);
__int64 nn_fs_CloseDirectory(_QWORD);
__int64 nn_fs_OpenDirectory(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_ReadDirectory(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Initialize_1a0bd50(_QWORD, _QWORD, _QWORD,
                                                    long double);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_WaitThread(void);
__int64 strcpy(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 GameRoutine_13e440(__int64);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_21347c8[2];
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy;
extern __int64 snd_g_proxy_ptr[2];
extern __int64 snd_target_s_platform;
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651310(void*);
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 BaseNX_159820(__int64 a1);
__int64 BaseNX_1599e0(__int64 a1);
__int64 BaseNX_159a40();
__int64 BaseNX_initialize(__int64 result);
__int64 BaseNX_159d40(__int64 result, unsigned int* a2);
__int64 BaseNX_stop(__int64 result);
__n128 BaseNX_15ad00_alt1(__int64 a1, __int64 a2) __asm__("BaseNX_15ad00");
__int64 BaseNX_loadArchive_alt1(__int64 result, const char* a2, const char* a3,
                                char a4) __asm__("BaseNX_loadArchive");
__int64 BaseNX_loadMemoryArchive_alt1(
    __int64 result, __int64 a2,
    const char* a3) __asm__("BaseNX_loadMemoryArchive");
__int64 BaseNX_unloadArchive(__int64 result, const char* a2);
__n128 BaseNX_15b4c0_alt1(__int64 a1, __int64 a2) __asm__("BaseNX_15b4c0");
__int64
BaseNX_getSoundUserParam_alt1(__int64 a1, unsigned int a2, int a3,
                              __int64 a4) __asm__("BaseNX_getSoundUserParam");
__int64 BaseNX_startSound(__int64 a1, __int64 a2);
__int64 BaseNX_15d7e0(__int64 result);
__int64 BaseNX_prepareSound(__int64 a1, __int64 a2);
__int64 BaseNX_existsFile(__int64 a1, const char* a2);
__int64 BaseNX_Unknown35(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 BaseNX_Unknown36(__int64 a1, const char* a2, __int64 a3, int a4);
__int64 BaseNX_loadDataByLabel(__int64 a1, const char* a2, __int64 a3, int a4);
__int64 BaseNX_loadData(__int64 a1, __int64 a2, int a3);
__int64 BaseNX_attachSound3DListener(__int64 a1, __int64 a2, int a3, int a4);
__int64 BaseNX_updateVoice(__int64 a1, __int64 a2);
__int64 BaseNX_stopVoice(__int64 a1, __int64 a2);
__int64 BaseNX_startVoice(__int64 a1, __int64 a2, __int64 a3);
__int64 BaseNX_updateVoiceParam(__int64 a1, __int64 a2);
__int64 BaseNX_findArchive(__int64 a1, const char* a2);
__int64 BaseNx_278770(_QWORD, _QWORD);
__int64 BaseNx_27d9e0(_QWORD);
__int64 BaseNx_28aca0(_QWORD, _QWORD, _QWORD);
__int64 BaseNx_28b230(_QWORD);
__int64 GameRoutine_27e000(_QWORD);
__int64 SoundHeap_27bef0(_QWORD);
__int64 SoundVoiceNX_14e360_alt2(_QWORD, _QWORD,
                                 _QWORD) __asm__("SoundVoiceNX_14e360");
__int64 nn_audio_ReleaseMemoryPool(_QWORD, _QWORD);
__int64 nn_audio_RequestDetachMemoryPool(_QWORD);
__int64 nn_audio_SetDeviceOutputVolumeAutoTuneModeEnabled(_QWORD);
__int64 nn_mem_StandardAllocator_Finalize(_QWORD, long double);
__int64 nn_os_CreateThread_1a0a7e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, _QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__int64 nn_os_SetThreadName(_QWORD, _QWORD);
__int64 nn_os_StartThread(_QWORD);
extern __int64 (*GameData_2134928[2])();
extern __int64 (*GameData_2134930)();
void* SoundVoiceNX_14e360_alt1() __asm__("SoundVoiceNX_14e360");
__int64 BaseNX_start(__int64 result);
__int64 BaseNX_finalize(__int64 result);
__int64 BaseNX_setAuxBus(__int64 a1, __int64 a2, __int64 a3);
__int64 snd_target_BaseNX_closeAdditionalArchive_lambda0_Invoke(__int64 a1,
                                                                __int64* a2);
__int64 snd_target_BaseNX_closeAdditionalArchiveForCache_lambda0_Invoke(
    __int64 result, unsigned int** a2);
_QWORD* Crc32List_1168a0(__int64**);
_QWORD* Crc32List_1170c0(__int64);
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__int64 (***snd_Manager_updateVoice(__int64**, long double))();
__int64* GameRoutine_165260(__int64*, __int64);
__int64 BaseNx_278690(__int64);
__int64 GameRoutine_112ab0(__int64 result);
__int64 GameRoutine_112ad0(__int64 result);
__int64 GameRoutine_118fe0(_QWORD);
__int64 GameRoutine_119050();
__int64 GameRoutine_119060();
__int64 GameRoutine_1905a40(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_190ac0(__int64);
__int64 GameRoutine_278650(_QWORD);
__int64 GameRoutine_279c50(_QWORD, _QWORD);
__int64 GameRoutine_279c60(_QWORD);
__int64 GameRoutine_279c70(_QWORD, _QWORD);
__int64 SoundArchivePlayer_279b80(__int64*);
__int64 SoundArchivePlayer_279c00(__int64);
__int64 SoundArchivePlayer_27a160(__int64);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_FinalizeTimerEvent(_QWORD);
__int64 nn_os_InitializeTimerEvent(_QWORD, _QWORD);
__int64 nn_os_StartOneShotTimerEvent(_QWORD, _QWORD);
__int64 nn_os_WaitTimerEvent(_QWORD);
__int64 snd_fnd_WeakHandle_get(__int64);
__n128 Crc32List_117a00(_QWORD*);
__n128 Slot_137b40(__int64, __int64);
extern __int64 (*GameData_1f66740[])();
extern __int64 (*GameData_1f66840[])();
extern __int64* snd_s_target_ptr;
float powf(_QWORD, float, float);
float snd_fnd_calcDistance_fec30(float, float, float, float, float, float);
unsigned __int64 GameRoutine_190020(__int64*, char*);
void* BaseNx_2a1b90();
__int64 BaseNX_1572a0(__int64 a1);
__int64 BaseNX_findDataList(__int64 a1, char* a2);
__attribute__((swiftcall)) void BaseNX_15abf0(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2);
void BaseNX_setSound3DMaxPriorityReduction(__int64 a1, int a2, float a3);
float BaseNX_calcSound3DDistance(__int64 a1, int a2, float a3, float a4,
                                 float a5, float a6);
__attribute__((swiftcall)) void BaseNX_getInfo(PSEUDO_X8 x8_, __int64 a1);
__int64
snd_target_BaseNX_closeAdditionalArchive_lambda0_Invoke_166f40(__int64 a1,
                                                               __int64* a2);
__int64 snd_target_BaseNX_closeAdditionalArchiveForCache_lambda0_Invoke_167190(
    __int64 a1, __int64* a2);
_QWORD* Crc32List_118f90(__int64, float);
_UNKNOWN** GameRoutine_2b8f70(_UNKNOWN** result, __int64, unsigned int);
__int64 BaseNx_277d90(__int64, __int64);
__int64 BaseNx_277df0(__int64, __int64, __int64, __int64);
__int64 GameRoutine_278070(_QWORD, _QWORD);
__int64 GameRoutine_2b90e0(int);
__int64 GameRoutine_2b99d0(int);
__int64 SoundArchivePlayer_279750(__int64, _QWORD*);
__int64 SoundDataManager_27b710(__int64, __int64);
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
__int64 nn_audio_ListAudioOutputDeviceName(_QWORD, _QWORD);
__int64 nn_audio_SetAudioDeviceOutputVolume(_QWORD, float);
__int64 strcmp(_QWORD, _QWORD);
bool SoundDataManager_27b740(__int64, __int64, __int64, __int64);
char* GameRoutine_2b9870(char* result, __int64, unsigned int);
float GameRoutine_118fc0(_QWORD);
__n128 BaseNX_15a740(__int64 a1, __int64 a2, __int64 a3);
__int64 BaseNX_159d40_alt1() __asm__("BaseNX_159d40");
__int64 BaseNx_157010(__int64);
__int64 BaseNx_27d9e0_alt1(__int64 result) __asm__("BaseNx_27d9e0");
__int64 GameRoutine_27e000_alt1() __asm__("GameRoutine_27e000");
__int64 SoundHeap_27bef0_alt1(__int64) __asm__("SoundHeap_27bef0");
__int64 SoundHeap_27bfd0_alt1(__int64, __int64,
                              unsigned __int64) __asm__("SoundHeap_27bfd0");
__int64 nn_mem_StandardAllocator_Finalize_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Finalize");
__int64 nn_mem_StandardAllocator_Initialize_1a0bd50_alt1(
    _QWORD, _QWORD,
    _QWORD) __asm__("nn_mem_StandardAllocator_Initialize_1a0bd50");
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
float BaseNx_28b230_alt1(__int64) __asm__("BaseNx_28b230");
void* BaseNx_27dfd0(void* result);
_QWORD* BaseNx_278890(__int64);
_QWORD*
ConstructString_1901f0_alt1(_QWORD* result) __asm__("ConstructString_1901f0");
__int64* GameHr_164fe0(__int64* result, unsigned __int64);
__int64 BaseNX_15a740_alt1(__int64, __int64, __int64) __asm__("BaseNX_15a740");
__int64 BaseNx_277ea0(__int64);
__int64 BaseNx_278f90(__int64, __int64, __int64);
__int64 BaseNx_284370(__int64);
__int64 BaseNx_2843a0(__int64);
__int64 FsSoundArchive_2760a0_alt1(_BYTE*) __asm__("FsSoundArchive_2760a0");
__int64
FsSoundArchive_2763f0_alt1(__int64, __int64,
                           unsigned __int64) __asm__("FsSoundArchive_2763f0");
__int64
FsSoundArchive_2764c0_alt1(__int64, __int64,
                           unsigned __int64) __asm__("FsSoundArchive_2764c0");
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 GameRoutine_190240_alt1(__int64) __asm__("GameRoutine_190240");
__int64 GameRoutine_276720_alt1(__int64, __int64) __asm__("GameRoutine_276720");
__int64 GameRoutine_2767b0_alt1(__int64) __asm__("GameRoutine_2767b0");
__int64 GameRoutine_2b9060_alt1() __asm__("GameRoutine_2b9060");
__int64 GameRoutine_2b9950_alt1() __asm__("GameRoutine_2b9950");
__int64 GameRoutine_a2af20_alt1(__int64, __int64, __int64,
                                ...) __asm__("GameRoutine_a2af20");
__int64 GameRoutine_a392e0_alt1(__int64, __int64,
                                ...) __asm__("GameRoutine_a392e0");
__int64 SoundArchivePlayer_2798a0(__int64 result);
__int64 SoundArchivePlayer_27b0d0(__int64, __int64, unsigned int*, int,
                                  unsigned int);
__int64
SoundDataManager_27b820_alt1(__int64) __asm__("SoundDataManager_27b820");
__int64 Voice_149b20(__int64, _QWORD*);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
bool FsSoundArchive_276120_alt1(__int64,
                                const char*) __asm__("FsSoundArchive_276120");
float powf_alt1(float, float) __asm__("powf");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) snd_a36650();
__int64 BaseNX_15ad00(__int64 a1, __int64 a2);
__int64 BaseNX_loadArchive(__int64 result, const char* a2, char* a3, char a4);
__int64 BaseNX_loadMemoryArchive(__int64 result, __int64 a2, char* a3);
__int64 BaseNX_15b4c0(__int64 a1, __int64 a2);
__int64 BaseNX_getSoundUserParam(__int64 a1, unsigned int a2, int a3,
                                 const char* a4);
__int64 Manager_11f260(__int64, __int64);
__int64 SoundArchivePlayer_27a360(__int64 result, __int64);
extern __int64 (*GameData_1f666d0[])();
extern __int64 (*GameData_1f667d0[])();
__int64 BaseNX_unloadAddonArchive(__int64 result, const char* a2,
                                  const char* a3);
__int64 BaseNX_unloadMemoryAddonArchive(__int64 result, const char* a2,
                                        const char* a3);
__int64 Crc32List_117a00_alt1(_QWORD*) __asm__("Crc32List_117a00");
__int64 GameHr_27d9e0(__int64 result);
__int64 GameHr_28aca0(__int64 result, int, unsigned int);
__int64 GameRoutine_6511d0_alt1(__int64) __asm__("GameRoutine_6511d0");
__int64 GameRoutine_a392e0_alt2(__int64, const char*,
                                ...) __asm__("GameRoutine_a392e0");
__int64 memset_alt2(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_fs_OpenDirectory_alt1(__int64, const char*,
                                 int) __asm__("nn_fs_OpenDirectory");
__int64 nn_mem_StandardAllocator_Finalize_alt2(__int64) __asm__(
    "nn_mem_StandardAllocator_Finalize");
__int64
nn_os_CreateThread_1a0a7e0_alt1(__int64, __int64, __int64, __int64,
                                unsigned __int64, int,
                                int) __asm__("nn_os_CreateThread_1a0a7e0");
__int64 nn_os_GetSystemTick_alt1() __asm__("nn_os_GetSystemTick");
__int64 nn_os_SetThreadName_alt1(__int64,
                                 const char*) __asm__("nn_os_SetThreadName");
__int64 nn_os_StartThread_alt1(__int64) __asm__("nn_os_StartThread");
__int64 nn_os_WaitTimerEvent_alt1(__int64) __asm__("nn_os_WaitTimerEvent");
__int64 strcpy_alt1(__int64, const char*) __asm__("strcpy");
extern __int64 (*BaseNX_1572a0_ptr)();
void GameRoutine_651310_alt1(__int64) __asm__("GameRoutine_651310");
__int64 BaseNx_14b510(__int64 result);
__int64 GameRoutine_2766a0(_QWORD*);
__int64 GameRoutine_27b620(_QWORD*);
__int64 SoundArchivePlayer_27a2c0(__int64, __int64, __int64);
extern __int64* GameData_21349b0;
extern char GameData_1a9f09e;
unsigned __int64 GameRoutine_279360(__int64, const char*);
void __attribute__((noreturn)) GameRoutine_164e10();
__int64 BaseNX_loadMemoryAddonArchive(__int64 result, char* a2, __int64 a3,
                                      __int64 a4, char* a5);
_QWORD* GameRoutine_164e30(__int64, __int64);
__int64* GameRoutine_1674e0(__int64**, unsigned __int8*, __int64*);
__int64 Archive_106680(__int64, unsigned __int8*);
__int64 BaseNx_278800(__int64, __int64, unsigned int, unsigned int);
__int64 BaseNx_278920(__int64, __int64, unsigned int);
__int64 BaseNx_278ce0(__int64, __int64, unsigned int);
__int64 GameRoutine_1673c0(__int64, unsigned __int8*);
__int64 GameRoutine_f5740(int*, _QWORD*);
__int64 GameRoutine_f6360(int*, _QWORD*);
__int64 TargetFile_a392e0(__int64, __int64, ...);
__int64 strchr(const char*, int);
__int64 strstr_alt1(const char*, const char*) __asm__("strstr");
extern __int64 snd_g_manager;
__int64 BaseNX_startSound_15c8a0(__int64 a1, unsigned int a2, unsigned int a3,
                                 char* a4, unsigned __int8* a5);
__int64 BaseNX_prepareSound_15d980(__int64 a1, unsigned int a2, int a3,
                                   char* a4, unsigned __int8* a5);
bool BaseNX_isSequenceSound(__int64 a1, __int64 a2, __int64 a3, char* a4);
float BaseNX_calcSound3DVolume(__int64 a1, int* a2);
float BaseNX_calcSound3DPan(__int64 a1, int* a2, float a3, float a4, float a5);

__int64 BaseNX_1572a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  void* v17;
  void* v18;
  __int64 SystemTickEv;
  _BYTE v20[64];

  v1 = *(_QWORD*)(a1 + 8);
  nn_os_InitializeTimerEvent(v20, 1);
  SystemTickEv = nn_os_GetSystemTick_alt1();
  if ((*(_BYTE*)(a1 + 4464) & 1) == 0) {
    v4 = 0;
    v5 = snd_s_target_ptr;
    do {
      v6 = nn_os_GetSystemTick_alt1();
      v7 = nn_os_ConvertToTimeSpan(v6 - SystemTickEv);
      v8 = v4;
      v9 = v7 / 1000;
      v10 = v7 / 1000;
      if (v7 >= 0x1F3FFFFFFFFC18LL) {
        v8 = v4 - v9;
        SystemTickEv = nn_os_GetSystemTick_alt1();
        v10 = 0;
      }
      v11 = v9 - v4;
      v12 = v10 + 16667;
      if (v11 <= 166669) {
        v4 = v8;
      }
      else {
        v4 = v12;
      }
      v13 = GameRoutine_118fe0(v1);
      GameRoutine_190ac0(v13);
      if ((*(_BYTE*)(v1 + 8) & 1) == 0 && (GameRoutine_119050() & 1) != 0) {
        if (v11 <= 166669) {
          v15 = v11;
        }
        else {
          v15 = 16667;
        }
        if (v15 >= 16667) {
          v16 = v15 + 16667;
          do {
            LODWORD(v14) = 1099257348;
            snd_Manager_updateVoice((__int64**)v1, v14);
            Crc32List_1170c0(v1);
            Crc32List_1168a0((__int64**)v1);
            Crc32List_117a00_alt1((_QWORD*)v1);
            if (((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 1296LL))(*v5,
                                                                            0) &
                 1) != 0) {
              v17 = BaseNx_2a1b90();
              nn_os_LockMutex_alt1((__int64)v17 + 840);
              SoundArchivePlayer_27a160(a1 + 2392);
              v18 = BaseNx_2a1b90();
              nn_os_UnlockMutex_alt2((__int64)v18 + 840);
            }
            v4 += 16667;
            v16 -= 16667;
          } while (v16 > 33333);
        }
        GameRoutine_119060();
      }
      nn_os_StartOneShotTimerEvent(v20, 8333000);
      nn_os_WaitTimerEvent_alt1((__int64)v20);
    } while (*(_BYTE*)(a1 + 4464) != 1);
  }
  return nn_os_FinalizeTimerEvent(v20);
}

__int64 BaseNX_159820(__int64 a1)
{
  __int64 v2;
  __int64* v3;
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
  __int64 result;

  v2 = *(_QWORD*)(a1 + 4056);
  *(_QWORD*)(a1 + 4016) = GameData_21347c8[0] + 16;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    *(_QWORD*)(a1 + 4064) = v2;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  v5 = *(_QWORD*)(a1 + 3992);
  if (v5 != 0) {
    v6 = *v3;
    *(_QWORD*)(a1 + 4000) = v5;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 3984);
  *(_QWORD*)(a1 + 3984) = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v8 = *(_QWORD*)(a1 + 3976);
  *(_QWORD*)(a1 + 3976) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v9 = *(_QWORD*)(a1 + 3960);
  *(_QWORD*)(a1 + 3960) = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v10 = *(_QWORD*)(a1 + 3944);
  *(_QWORD*)(a1 + 3944) = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v11 = *(_QWORD*)(a1 + 3936);
  *(_QWORD*)(a1 + 3936) = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v12 = *(_QWORD*)(a1 + 3928);
  *(_QWORD*)(a1 + 3928) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v13 = *(_QWORD*)(a1 + 3920);
  *(_QWORD*)(a1 + 3920) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  GameRoutine_27b680(a1 + 3152);
  SoundArchivePlayer_Destructor(a1 + 2336);
  GameRoutine_2766e0(a1 + 1584);
  result = FsSoundArchive_Destructor(a1 + 32);
  if ((*(_BYTE*)a1 & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
        *v3, *(_QWORD*)(a1 + 16));
  }
  return result;
}

__int64 BaseNX_1599e0(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 261952,
                                               32);
  GameRoutine_1574a0(v2, a1);
  snd_target_s_platform = v2;
  return v2;
}

__int64 BaseNX_159a40()
{
  __int64 result;

  (**(void (***)(__int64))snd_target_s_platform)(snd_target_s_platform);
  result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                             24LL))(*snd_g_memory_ptr[0],
                                                    snd_target_s_platform);
  snd_target_s_platform = 0;
  return result;
}

__int64 BaseNX_initialize(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  char* v14;
  char v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  char* v23;
  char v24;
  char* v25;

  if ((*(_BYTE*)(result + 16) & 1) == 0) {
    v1 = result;
    result = BaseNx_157010(result);
    if ((*(_BYTE*)(v1 + 17) & 1) == 0) {
      v2 =
          (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 16LL))(snd_g_proxy);
      v3 = snd_g_memory_ptr[0];
      v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v2,
                                                   4096);
      v5 = *(_QWORD*)(v1 + 4256);
      *(_QWORD*)(v1 + 4256) = v4;
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
        v6 = *(_QWORD*)(v1 + 4256);
      }
      else {
        v6 = v4;
      }
      v7 =
          (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 16LL))(snd_g_proxy);
      SoundHeap_27bfd0_alt1(v1 + 4152, v6, v7);
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 24LL))(
               snd_g_proxy) +
           4095;
      v9 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
          *(_QWORD*)*v3 + 16LL))(*v3, v8 & 0xFFFFFFFFFFFFF000LL, 4096);
      v10 = *(_QWORD*)(v1 + 4280);
      *(_QWORD*)(v1 + 4280) = v9;
      if (v10 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
      v11 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_LockMutex(v11 + 1720);
      v12 = (char*)SoundVoiceNX_14e360_alt1();
      nn_audio_AcquireMemoryPool(v12 + 24, v1 + 4232, *(_QWORD*)(v1 + 4280),
                                 v8 & 0xFFFFFFFFFFFFF000LL);
      nn_audio_RequestAttachMemoryPool(v1 + 4232);
      v13 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_UnlockMutex_alt1(v13 + 1720);
      while (1) {
        v14 = (char*)SoundVoiceNX_14e360_alt1();
        nn_os_LockMutex(v14 + 1720);
        v15 = nn_audio_IsMemoryPoolAttached(v1 + 4232);
        v16 = (char*)SoundVoiceNX_14e360_alt1();
        nn_os_UnlockMutex_alt1(v16 + 1720);
        if ((v15 & 1) != 0) {
          break;
        }
        (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 56LL))(v1, 5);
      }
      nn_mem_StandardAllocator_Initialize_1a0bd50_alt1(
          v1 + 4296, *(_QWORD*)(v1 + 4280), v8 & 0xFFFFFFFFFFFFF000LL);
      v17 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 32LL))(
                snd_g_proxy) +
            4095;
      v18 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
          *(_QWORD*)*v3 + 16LL))(*v3, v17 & 0xFFFFFFFFFFFFF000LL, 4096);
      v19 = *(_QWORD*)(v1 + 4288);
      *(_QWORD*)(v1 + 4288) = v18;
      if (v19 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
      v20 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_LockMutex(v20 + 1720);
      v21 = (char*)SoundVoiceNX_14e360_alt1();
      nn_audio_AcquireMemoryPool(v21 + 24, v1 + 4240, *(_QWORD*)(v1 + 4288),
                                 v17 & 0xFFFFFFFFFFFFF000LL);
      nn_audio_RequestAttachMemoryPool(v1 + 4240);
      v22 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_UnlockMutex_alt1(v22 + 1720);
      while (1) {
        v23 = (char*)SoundVoiceNX_14e360_alt1();
        nn_os_LockMutex(v23 + 1720);
        v24 = nn_audio_IsMemoryPoolAttached(v1 + 4240);
        v25 = (char*)SoundVoiceNX_14e360_alt1();
        nn_os_UnlockMutex_alt1(v25 + 1720);
        if ((v24 & 1) != 0) {
          break;
        }
        (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 56LL))(v1, 5);
      }
      nn_mem_StandardAllocator_Initialize_1a0bd50_alt1(
          v1 + 4368, *(_QWORD*)(v1 + 4288), v17 & 0xFFFFFFFFFFFFF000LL);
      result = (__int64)BaseNx_27dfd0(BaseNX_159d40_alt1);
      *(_BYTE*)(v1 + 16) = 1;
    }
  }
  return result;
}

__int64 BaseNX_159d40(__int64 result, unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  const char* v4;

  if ((unsigned int)(result - 1001) <= 1) {
    v2 = *a2;
    v3 = 32;
    if (*(_BYTE*)(snd_target_s_platform + 4136) != 0) {
      v3 = 1584;
    }
    v4 = (const char*)GameRoutine_278690(snd_target_s_platform + v3 + 56, v2);
    return (*(__int64 (**)(_QWORD, const char*, ...))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary error : Failed to PlayerHeap ... WaveFileLoadFailed : "
        "%s\n",
        v4);
  }
  return result;
}

__int64 BaseNX_start(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  void* v18;
  char v19;

  if (*(_BYTE*)(result + 16) == 1) {
    v1 = result + 4096;
    v2 = (__int64*)result;
    *(_BYTE*)(result + 4440) = 0;
    v3 = snd_g_memory_ptr[0];
    *(_QWORD*)(result + 4448) = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 448,
                                                 4096);
    v4 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
        *v3, 0x10000, 4096);
    v5 = v2[557];
    v2[557] = v4;
    if (v5 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      v6 = v2[557];
    }
    else {
      v6 = v4;
    }
    v7 = v2[556];
    v8 = (_QWORD*)snd_g_proxy_ptr[0];
    v9 = (*(__int64 (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 104LL))(
        *(_QWORD*)snd_g_proxy_ptr[0]);
    v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 96LL))(*v8);
    nn_os_CreateThread_1a0a7e0_alt1(v7, (__int64)GameData_2134928[0],
                                    (__int64)v2, v6, 0x10000u, v9, v10);
    nn_os_SetThreadName_alt1(v2[556], "SND_Load");
    nn_os_StartThread_alt1(v2[556]);
    *(_BYTE*)(v1 + 368) = 0;
    v2[559] = (*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v3 + 16LL))(*v3, 448, 4096);
    v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v3 + 16LL))(
        *v3, 0x40000, 4096);
    v12 = v2[560];
    v2[560] = v11;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      v13 = v2[560];
    }
    else {
      v13 = v11;
    }
    v14 = v2[559];
    v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 120LL))(*v8);
    v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 112LL))(*v8);
    nn_os_CreateThread_1a0a7e0_alt1(v14, (__int64)BaseNX_1572a0_ptr,
                                    (__int64)v2, v13, 0x40000u, v15, v16);
    nn_os_SetThreadName_alt1(v2[559], "SND_Update");
    nn_os_StartThread_alt1(v2[559]);
    v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 328LL))(*v8);
    v18 = SoundVoiceNX_14e360_alt1();
    GameHr_28aca0((__int64)v18, v17, 0);
    v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 408LL))(*v8);
    nn_audio_SetDeviceOutputVolumeAutoTuneModeEnabled(v19 & 1);
    result = nn_os_GetSystemTick_alt1();
    v2[561] = result;
  }
  return result;
}

__int64 BaseNX_stop(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
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

  if (*(_BYTE*)(result + 16) == 1) {
    v1 = (_QWORD*)result;
    v2 = result + 4096;
    v3 = snd_g_memory_ptr[0];
    if (*(_QWORD*)(result + 4448) != 0) {
      *(_BYTE*)(result + 4440) = 1;
      nn_os_WaitThread();
      nn_os_DestroyThread(v1[556]);
      v4 = *v3;
      v5 = v1[556];
      v1[556] = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 24LL))(v4, v5);
      v6 = v1[557];
      v1[557] = 0;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
      while (1) {
        v8 = GameRoutine_117bb0(v1[1]);
        if ((GameRoutine_111070(v8) & 1) != 0) {
          break;
        }
        v7 = GameRoutine_117bb0(v1[1]);
        GameRoutine_110280(v7);
      }
      while (1) {
        v10 = GameRoutine_118fd0(v1[1]);
        if ((GameRoutine_105310(v10) & 1) != 0) {
          break;
        }
        v9 = GameRoutine_118fd0(v1[1]);
        GameRoutine_104660(v9);
      }
      while (1) {
        v12 = GameRoutine_119020(v1[1]);
        if ((GameRoutine_13e770(v12) & 1) != 0) {
          break;
        }
        v11 = GameRoutine_119020(v1[1]);
        GameRoutine_13e440(v11);
      }
    }
    result = v1[559];
    if (result != 0) {
      *(_BYTE*)(v2 + 368) = 1;
      nn_os_WaitThread();
      nn_os_DestroyThread(v1[559]);
      v13 = *v3;
      v14 = v1[559];
      v1[559] = 0;
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v14);
      v15 = v1[560];
      v1[560] = 0;
      if (v15 != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
    }
  }
  return result;
}

__int64 BaseNX_finalize(__int64 result)
{
  __int64 v1;
  void* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  void* v11;
  void* v12;
  void* v13;
  char v14;
  void* v15;
  void* v16;
  char* v17;
  void* v18;
  __int64 v19;
  void* v20;
  void* v21;
  void* v22;
  char v23;
  void* v24;
  void* v25;
  char* v26;
  void* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (*(_BYTE*)(result + 16) == 1) {
    v1 = result;
    v2 = SoundVoiceNX_14e360_alt1();
    BaseNx_28b230_alt1((__int64)v2);
    GameRoutine_27e000_alt1();
    v3 = snd_g_memory_ptr[0];
    if (*(_BYTE*)(v1 + 4137) == 1) {
      v4 = *(_QWORD*)(v1 + 4048);
      if (*(_QWORD*)(v1 + 4056) != v4) {
        v5 = 0;
        v6 = GameData_21347c8[0] + 16;
        do {
          v7 = *(_QWORD*)(v4 + 8 * v5);
          v8 = *(_QWORD*)(v7 + 1416);
          *(_QWORD*)(v7 + 1376) = v6;
          if (v8 != 0) {
            v9 = *v3;
            *(_QWORD*)(v7 + 1424) = v8;
            (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
          }
          v10 = *(_QWORD*)(v7 + 1368);
          *(_QWORD*)(v7 + 1368) = 0;
          if (v10 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
          }
          GameRoutine_27b680(v7 + 784);
          GameRoutine_2766e0(v7 + 32);
          if ((*(_BYTE*)v7 & 1) != 0) {
            (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
                *v3, *(_QWORD*)(v7 + 16));
          }
          (*(void (**)(__int64, __int64))(*(_QWORD*)*v3 + 24LL))(*v3, v7);
          v4 = *(_QWORD*)(v1 + 4048);
          ++v5;
        } while (v5 < (*(_QWORD*)(v1 + 4056) - v4) >> 3);
      }
    }
    v11 = SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex_alt1((__int64)v11 + 1720);
    nn_audio_RequestDetachMemoryPool(v1 + 4240);
    v12 = SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt2((__int64)v12 + 1720);
    while (1) {
      v13 = SoundVoiceNX_14e360_alt1();
      nn_os_LockMutex_alt1((__int64)v13 + 1720);
      v14 = nn_audio_IsMemoryPoolAttached(v1 + 4240);
      v15 = SoundVoiceNX_14e360_alt1();
      nn_os_UnlockMutex_alt2((__int64)v15 + 1720);
      if ((v14 & 1) == 0) {
        break;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 56LL))(v1, 5);
    }
    v16 = SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex_alt1((__int64)v16 + 1720);
    v17 = (char*)SoundVoiceNX_14e360_alt1();
    nn_audio_ReleaseMemoryPool(v17 + 24, v1 + 4240);
    v18 = SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt2((__int64)v18 + 1720);
    v19 = *(_QWORD*)(v1 + 4288);
    *(_QWORD*)(v1 + 4288) = 0;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    }
    nn_mem_StandardAllocator_Finalize_alt2(v1 + 4368);
    v20 = SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex_alt1((__int64)v20 + 1720);
    nn_audio_RequestDetachMemoryPool(v1 + 4232);
    v21 = SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt2((__int64)v21 + 1720);
    while (1) {
      v22 = SoundVoiceNX_14e360_alt1();
      nn_os_LockMutex_alt1((__int64)v22 + 1720);
      v23 = nn_audio_IsMemoryPoolAttached(v1 + 4232);
      v24 = SoundVoiceNX_14e360_alt1();
      nn_os_UnlockMutex_alt2((__int64)v24 + 1720);
      if ((v23 & 1) == 0) {
        break;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 56LL))(v1, 5);
    }
    v25 = SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex_alt1((__int64)v25 + 1720);
    v26 = (char*)SoundVoiceNX_14e360_alt1();
    nn_audio_ReleaseMemoryPool(v26 + 24, v1 + 4232);
    v27 = SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt2((__int64)v27 + 1720);
    v28 = *(_QWORD*)(v1 + 4280);
    *(_QWORD*)(v1 + 4280) = 0;
    if (v28 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    }
    nn_mem_StandardAllocator_Finalize_alt2(v1 + 4296);
    v29 = SoundHeap_27bef0_alt1(v1 + 4152);
    result = GameHr_27d9e0(v29);
    if (*(_QWORD*)(v1 + 4256) != 0) {
      v30 = *v3;
      *(_QWORD*)(v1 + 4256) = 0;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 24LL))(v30);
    }
    if (*(_QWORD*)(v1 + 4248) != 0) {
      v31 = *v3;
      *(_QWORD*)(v1 + 4248) = 0;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 24LL))(v31);
    }
    *(_BYTE*)(v1 + 16) = 0;
  }
  return result;
}

__int64 BaseNX_findDataList(__int64 a1, char* a2)
{
  bool v2;
  bool v3;
  __int64 v5;
  __int64 v9;
  struct {
    __int64 v11;
    __int64 v12;
    _QWORD* v13;
  } v11_;

  GameRoutine_190020(&v11_.v11, a2);
  if ((v11_.v11 & 1) == 0) {
    goto LABEL_26;
  }
  if (v11_.v12 != 31) {
    if (v11_.v12 != 27) {
      goto LABEL_26;
    }
    v2 = *v11_.v13 == 0x7461643A3A646E73LL &&
         v11_.v13[1] == 0x73756D5F733A3A61LL;
    v3 = v2 && v11_.v13[2] == 0x4C617461446D7565LL;
    if (!v3 || *(_QWORD*)((char*)v11_.v13 + 19) != 0x7473694C61746144LL) {
      goto LABEL_26;
    }
    v5 = 488;
  LABEL_30:
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + v5))(
        (__int64)snd_g_proxy);
    if ((v11_.v11 & 1) == 0) {
      return v9;
    }
    goto LABEL_27;
  }
  if (*v11_.v13 == 0x7461643A3A646E73LL &&
      v11_.v13[1] == 0x696E615F733A3A61LL &&
      v11_.v13[2] == 0x44646E756F53656DLL &&
      *(_QWORD*)((char*)v11_.v13 + 23) == 0x7473694C61746144LL) {
    v5 = 496;
    goto LABEL_30;
  }
LABEL_26:
  v9 = 0;
  if ((v11_.v11 & 1) != 0) {
  LABEL_27:
    (*(void (**)(_QWORD, _QWORD*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v11_.v13);
  }
  return v9;
}

__n128 BaseNX_15a740(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v6;
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
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _UNKNOWN** v39;
  unsigned int v40;
  int v41;
  _QWORD* v48;
  __int64 i;
  __int64 v50;
  __int64 v63;
  float v64;
  int v65;
  struct {
    _QWORD v67[3];
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    char gap64_[8];
    __int64 v73;
    __int64 v74;
  } v67_;

  v6 = SoundDataManager_27b710(a2 + 3152, a3);
  v7 = snd_g_memory_ptr[0];
  v8 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v6, 8);
  v9 = *(_QWORD*)(a2 + 3936);
  *(_QWORD*)(a2 + 3936) = v8;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
    v10 = *(_QWORD*)(a2 + 3936);
  }
  else {
    v10 = v8;
  }
  SoundDataManager_27b740(a2 + 3152, a3, v10, v6);
  v11 = BaseNx_277d90(a2 + 3728, a3);
  v12 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, v11, 4);
  v13 = *(_QWORD*)(a2 + 3976);
  *(_QWORD*)(a2 + 3976) = v12;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
    v14 = *(_QWORD*)(a2 + 3976);
  }
  else {
    v14 = v12;
  }
  BaseNx_277df0(a2 + 3728, a3, v14, v11);
  *(_DWORD*)(a2 + 3792) = 32;
  *(_QWORD*)(a2 + 3796) = 0x40B555553F800000LL;
  GameRoutine_278070(a2 + 3728, 0);
  v15 = BaseNx_277d90(a2 + 3824, a3);
  v16 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, v15, 4);
  v17 = *(_QWORD*)(a2 + 3984);
  *(_QWORD*)(a2 + 3984) = v16;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
    v18 = *(_QWORD*)(a2 + 3984);
  }
  else {
    v18 = v16;
  }
  BaseNx_277df0(a2 + 3824, a3, v18, v15);
  *(_DWORD*)(a2 + 3888) = 32;
  *(_QWORD*)(a2 + 3892) = 0x40B555553F800000LL;
  GameRoutine_278070(a2 + 3824, 0);
  BaseNX_15abf0((void*)((__int64)v67_.v67), a2, a3);
  v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, v67_.v72, 64);
  v20 = *(_QWORD*)(a2 + 3960);
  *(_QWORD*)(a2 + 3960) = v19;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
    v19 = *(_QWORD*)(a2 + 3960);
  }
  v21 = *(_QWORD*)a1;
  v67_.v71 = v19;
  v22 = (*(__int64 (**)(__int64, __int64, _QWORD))(v21 + 344))(a1, v67_.v70, 0);
  *(_QWORD*)(a2 + 3952) = v22;
  v67_.v69 = v22;
  v23 = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 344LL))(
      a1, v67_.v74, 0);
  *(_QWORD*)(a2 + 3968) = v23;
  v67_.v73 = v23;
  v24 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
      *v7, v67_.v68, 4096);
  v28 = *(_QWORD*)(a2 + 3944);
  *(_QWORD*)(a2 + 3944) = v24;
  if (v28 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
    v24 = *(_QWORD*)(a2 + 3944);
  }
  v67_.v67[2] = v24;
  memset_alt1(v24, 0, v67_.v68);
  SoundArchivePlayer_279750(a2 + 2336, v67_.v67);
  if (*(_DWORD*)(a1 + 4144) == 1) {
    if ((*(int (**)(__int64))(*(_QWORD*)snd_g_proxy + 304LL))(snd_g_proxy) >=
        1) {
      v29 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 304LL))(
          snd_g_proxy);
      v30 = GameRoutine_2b99d0(v29);
      v31 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
          *v7, v30, 32);
      v32 = *(_QWORD*)(a1 + 4264);
      *(_QWORD*)(a1 + 4264) = v31;
      if (v32 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
        v33 = *(char**)(a1 + 4264);
      }
      else {
        v33 = (char*)v31;
      }
      v34 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 304LL))(
          snd_g_proxy);
      GameRoutine_2b9870(v33, v30, v34);
    }
    if ((*(int (**)(__int64))(*(_QWORD*)snd_g_proxy + 312LL))(snd_g_proxy) >=
        1) {
      v35 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 312LL))(
          snd_g_proxy);
      v36 = GameRoutine_2b90e0(v35);
      v37 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v7 + 16LL))(
          *v7, v36, 32);
      v38 = *(_QWORD*)(a1 + 4272);
      *(_QWORD*)(a1 + 4272) = v37;
      if (v38 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v7 + 24LL))(*v7);
        v39 = *(_UNKNOWN***)(a1 + 4272);
      }
      else {
        v39 = (_UNKNOWN**)v37;
      }
      v40 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 312LL))(
          snd_g_proxy);
      GameRoutine_2b8f70(v39, v36, v40);
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 408LL))(
             snd_g_proxy) &
         1) == 0) {
      v41 = nn_audio_ListAudioOutputDeviceName(v67_.v67, 8);
      if (v41 >= 1) {
        v48 = v67_.v67;
        for (i = (unsigned int)v41; i != 0; --i) {
          if ((unsigned int)strcmp(v48, "AudioTvOutput") != 0) {
            if ((unsigned int)strcmp(v48, "AudioBuiltInSpeakerOutput") != 0) {
              if ((unsigned int)strcmp(v48, "AudioExternalOutput") != 0) {
                goto LABEL_30;
              }
              v50 = 3092;
            }
            else {
              v50 = 3088;
            }
          }
          else {
            v50 = 3084;
          }
          nn_audio_SetAudioDeviceOutputVolume(
              v48, *(float*)(*(_QWORD*)(a1 + 8) + v50));
        LABEL_30:
          v48 += 32;
        }
      }
    }
    v63 = *(_QWORD*)(a1 + 8);
    v64 = GameRoutine_118fc0(v63);
    Crc32List_118f90(v63, v64);
  }
  v65 = *(_DWORD*)(a2 + 24);
  *(_QWORD*)(a2 + 4032) = 0;
  *(_DWORD*)(a2 + 4028) = v65;
  return BaseNX_15ad00_alt1(a1, a2 + 4016);
}

__attribute__((swiftcall)) void BaseNX_15abf0(PSEUDO_X8 x8_, __int64 a1,
                                              __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 result;

  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_QWORD*)(a3 + 24) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 16) = 0;
  *(_QWORD*)(a3 + 72) = 0;
  *(_QWORD*)(a3 + 80) = 0;
  *(_QWORD*)(a3 + 88) = 0;
  v6 = GameRoutine_279c60(a1 + 2336);
  v7 = (_QWORD*)snd_g_proxy_ptr[0];
  if (v6 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 288LL))(
               *(_QWORD*)snd_g_proxy_ptr[0])) {
    v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 288LL))(*v7);
  }
  *(_QWORD*)a3 = a2;
  *(_QWORD*)(a3 + 8) = a1 + 3152;
  v8 = GameRoutine_279c50(a1 + 2336, a2) * v6;
  v9 = *v7;
  *(_QWORD*)(a3 + 40) = v8;
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 296LL))(v9);
  *(_QWORD*)(a3 + 56) = GameRoutine_279c70(a2, v10 << 10);
  *(_DWORD*)(a3 + 96) = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 192LL))(*v7);
  *(_BYTE*)(a3 + 64) = 0;
  *(_QWORD*)(a3 + 80) = SoundArchivePlayer_279c00(a2);
  result = SoundArchivePlayer_279b80((__int64*)a3);
  *(_QWORD*)(a3 + 24) = result;
  {
    result;
    return;
  }
}

__int64 BaseNX_15ad00(__int64 a1, __int64 a2)
{
  void* v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  void* v28;

  v4 = BaseNx_2a1b90();
  nn_os_LockMutex_alt1((__int64)v4 + 840);
  v5 = *(int*)(a2 + 12);
  v6 = *(const char**)(a2 + 16);
  v7 = a1 + 4088 * v5;
  if (v6 != nullptr) {
    v8 = *(char**)(v7 + 4056);
    v9 = *(char**)(v7 + 4048);
    v10 = v8 - v9;
    if (v8 != v9) {
      v11 = v10 >> 3;
      v12 = v9;
      v13 = v10 >> 3;
      while (1) {
        v15 = *(_QWORD*)v12;
        v12 += 8;
        v14 = v15;
        if (*(_BYTE*)(v15 + 1440) == 1) {
          v16 = strlen_alt1(v6);
          v17 = *(_BYTE*)v14 >> 1;
          if ((*(_BYTE*)v14 & 1) != 0) {
            v17 = *(_QWORD*)(v14 + 8);
          }
          if (v16 == v17) {
            v18 = v16;
            if (v16 == -1) {
            LABEL_32:
              snd_a36650();
            }
            v19 = (*(_BYTE*)v14 & 1) != 0 ? *(_QWORD*)(v14 + 16) : v14 + 1;
            if (memcmp_alt1(v19, (__int64)v6, v18) == 0) {
              break;
            }
          }
        }
        if (--v13 == 0) {
          goto LABEL_31;
        }
      }
      while (1) {
        v21 = *(_QWORD*)v9;
        v9 += 8;
        v20 = v21;
        if (*(_BYTE*)(v21 + 1440) == 1) {
          v22 = strlen_alt1(v6);
          v23 = *(_BYTE*)v20 >> 1;
          if ((*(_BYTE*)v20 & 1) != 0) {
            v23 = *(_QWORD*)(v20 + 8);
          }
          if (v22 == v23) {
            v24 = v22;
            if (v22 == -1) {
              goto LABEL_32;
            }
            v25 = (*(_BYTE*)v20 & 1) != 0 ? *(_QWORD*)(v20 + 16) : v20 + 1;
            if (memcmp_alt1(v25, (__int64)v6, v24) == 0) {
              break;
            }
          }
        }
        if (--v11 == 0) {
          goto LABEL_27;
        }
      }
      v26 = v20 + 32;
      goto LABEL_30;
    }
  }
  else if ((*(_BYTE*)(v7 + 4137) & 1) != 0) {
  LABEL_27:
    v27 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)v5 + 4136) != 0) {
      v27 = 1584;
    }
    v26 = a1 + 4088LL * (int)v5 + 56 + v27;
  LABEL_30:
    *(_QWORD*)(v26 + 16) = a2;
  }
LABEL_31:
  v28 = BaseNx_2a1b90();
  return nn_os_UnlockMutex_alt2((__int64)v28 + 840);
}

__int64 BaseNX_loadArchive(__int64 result, const char* a2, char* a3, char a4)
{
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21[1024];

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v6 = result;
    if (a3 != nullptr) {
      v7 = a3;
    }
    else {
      v7 = "noname";
    }
    if (*(_BYTE*)(result + 4137) == 1) {
      v8 = strlen_alt1(v7);
      if ((*(_BYTE*)(v6 + 56) & 1) != 0) {
        v9 = *(_QWORD*)(v6 + 64);
      }
      else {
        v9 = *(_BYTE*)(v6 + 56) >> 1;
      }
      if ((v9 & v8) == 0xFFFFFFFFFFFFFFFFLL) {
        snd_a36650();
      }
      v10 = 0;
    }
    else {
      v10 = result + 56;
      ++*(_DWORD*)(result + 4144);
      *(_BYTE*)(result + 4137) = 1;
      GameRoutine_190200_alt1(result + 56, v7);
    }
    *(_BYTE*)(v10 + 4080) = 0;
    v11 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy +
                                                 128LL))(snd_g_proxy);
    GameRoutine_a2af20_alt1((__int64)v21, 1024, (__int64)"%s%s", v11, a2);
    *(_BYTE*)(v10 + 905) = (a4 & 1) == 0;
    FsSoundArchive_276120_alt1(v10 + 32, v21);
    v12 = (unsigned int)BaseNx_2843a0(v10 + 704);
    v13 = snd_g_memory_ptr[0];
    v14 = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v12, 64);
    v15 = *(_QWORD*)(v10 + 3920);
    *(_QWORD*)(v10 + 3920) = v14;
    if (v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v13 + 24LL))(*v13);
      v16 = *(_QWORD*)(v10 + 3920);
    }
    else {
      v16 = v14;
    }
    FsSoundArchive_2763f0_alt1(v10 + 32, v16, v12);
    v17 = (unsigned int)BaseNx_284370(v10 + 704);
    v18 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
        *(_QWORD*)*v13 + 16LL))(*v13, v17, 64);
    v19 = *(_QWORD*)(v10 + 3928);
    *(_QWORD*)(v10 + 3928) = v18;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v13 + 24LL))(*v13);
      v20 = *(_QWORD*)(v10 + 3928);
    }
    else {
      v20 = v18;
    }
    FsSoundArchive_2764c0_alt1(v10 + 32, v20, v17);
    return BaseNX_15a740_alt1(v6, v10, v10 + 32);
  }
  return result;
}

__int64 BaseNX_loadMemoryArchive(__int64 result, __int64 a2, char* a3)
{
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v4 = result;
    if (a3 != nullptr) {
      v5 = a3;
    }
    else {
      v5 = "noname";
    }
    if (*(_BYTE*)(result + 4137) == 1) {
      v6 = strlen_alt1(v5);
      if ((*(_BYTE*)(v4 + 56) & 1) != 0) {
        v7 = *(_QWORD*)(v4 + 64);
      }
      else {
        v7 = *(_BYTE*)(v4 + 56) >> 1;
      }
      if ((v7 & v6) == 0xFFFFFFFFFFFFFFFFLL) {
        snd_a36650();
      }
      v8 = 0;
    }
    else {
      v8 = result + 56;
      ++*(_DWORD*)(result + 4144);
      *(_BYTE*)(result + 4137) = 1;
      GameRoutine_190200_alt1(result + 56, v5);
    }
    *(_BYTE*)(v8 + 4080) = 1;
    GameRoutine_276720_alt1(v8 + 1584, a2);
    v9 = *(_QWORD*)(v8 + 3920);
    *(_QWORD*)(v8 + 3920) = 0;
    if (v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    }
    v10 = *(_QWORD*)(v8 + 3928);
    *(_QWORD*)(v8 + 3928) = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    }
    return BaseNX_15a740_alt1(v4, v8, v8 + 1584);
  }
  return result;
}

__int64 BaseNX_unloadArchive(__int64 result, const char* a2)
{
  __int64 v2;
  const char* v3;
  _QWORD* v5;
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
  unsigned __int64 v20;
  __int64 v21;
  int v22;

  if ((*(_BYTE*)(result + 17) & 1) != 0) {
    return result;
  }
  v2 = result;
  if (a2 != nullptr) {
    v3 = a2;
  }
  else {
    v3 = "noname";
  }
  if (strlen_alt1(v3) == -1) {
    goto LABEL_50;
  }
  BaseNX_15b4c0(v2, v2 + 4072);
  v5 = (_QWORD*)snd_g_proxy_ptr[0];
  if (*(_DWORD*)(v2 + 4144) == 1) {
    if ((*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 304LL))(
            *(_QWORD*)snd_g_proxy_ptr[0]) >= 1) {
      GameRoutine_2b9950_alt1();
    }
    if ((*(int (**)(_QWORD))(*(_QWORD*)*v5 + 312LL))(*v5) >= 1) {
      GameRoutine_2b9060_alt1();
    }
  }
  SoundArchivePlayer_2798a0(v2 + 2392);
  BaseNx_277ea0(v2 + 3784);
  BaseNx_277ea0(v2 + 3880);
  SoundDataManager_27b820_alt1(v2 + 3208);
  if (*(_BYTE*)(v2 + 4136) == 1) {
    result = GameRoutine_2767b0_alt1(v2 + 1640);
    v7 = snd_g_memory_ptr[0];
    if (*(_DWORD*)(v2 + 4144) != 1) {
      goto LABEL_21;
    }
  }
  else {
    result = FsSoundArchive_2760a0_alt1((_BYTE*)(v2 + 88));
    v7 = snd_g_memory_ptr[0];
    if (*(_DWORD*)(v2 + 4144) != 1) {
      goto LABEL_21;
    }
  }
  if ((*(int (**)(_QWORD))(*(_QWORD*)*v5 + 304LL))(*v5) >= 1 &&
      *(_QWORD*)(v2 + 4264) != 0) {
    v8 = *v7;
    *(_QWORD*)(v2 + 4264) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 312LL))(*v5);
  if ((int)result >= 1 && *(_QWORD*)(v2 + 4272) != 0) {
    v9 = *v7;
    *(_QWORD*)(v2 + 4272) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
  }
LABEL_21:
  if (*(_QWORD*)(v2 + 4032) != 0) {
    v10 = *v7;
    *(_QWORD*)(v2 + 4032) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
  }
  if (*(_QWORD*)(v2 + 4040) != 0) {
    v11 = *v7;
    *(_QWORD*)(v2 + 4040) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  if (*(_QWORD*)(v2 + 4000) != 0) {
    v12 = *v7;
    *(_QWORD*)(v2 + 4000) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 24LL))(v12);
  }
  if (*(_QWORD*)(v2 + 4024) != 0) {
    v13 = *(_QWORD*)v2;
    *(_QWORD*)(v2 + 4024) = 0;
    result = (*(__int64 (**)(__int64))(v13 + 360))(v2);
  }
  if (*(_QWORD*)(v2 + 4016) != 0) {
    v14 = *v7;
    *(_QWORD*)(v2 + 4016) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14);
  }
  if (*(_QWORD*)(v2 + 4008) != 0) {
    v15 = *(_QWORD*)v2;
    *(_QWORD*)(v2 + 4008) = 0;
    result = (*(__int64 (**)(__int64))(v15 + 360))(v2);
  }
  if (*(_QWORD*)(v2 + 3992) != 0) {
    v16 = *v7;
    *(_QWORD*)(v2 + 3992) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  }
  if (*(_QWORD*)(v2 + 3984) != 0) {
    v17 = *v7;
    *(_QWORD*)(v2 + 3984) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 24LL))(v17);
  }
  if (*(_QWORD*)(v2 + 3976) != 0) {
    v18 = *v7;
    *(_QWORD*)(v2 + 3976) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18);
  }
  if (*(_BYTE*)(v2 + 4137) == 1) {
    result = strlen_alt1(v3);
    v19 = *(_BYTE*)(v2 + 56) >> 1;
    if ((*(_BYTE*)(v2 + 56) & 1) != 0) {
      v19 = *(_QWORD*)(v2 + 64);
    }
    if (result == v19) {
      v20 = result;
      if (result != -1) {
        if ((*(_BYTE*)(v2 + 56) & 1) != 0) {
          v21 = *(_QWORD*)(v2 + 72);
        }
        else {
          v21 = v2 + 57;
        }
        result = memcmp_alt1(v21, (__int64)v3, v20);
        if ((_DWORD)result == 0) {
          v22 = *(_DWORD*)(v2 + 4144);
          *(_BYTE*)(v2 + 4137) = 0;
          *(_DWORD*)(v2 + 4144) = v22 - 1;
        }
        return result;
      }
    LABEL_50:
      snd_a36650();
    }
  }
  return result;
}

__int64 BaseNX_15b4c0(__int64 a1, __int64 a2)
{
  void* v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  void* v28;

  v4 = BaseNx_2a1b90();
  nn_os_LockMutex_alt1((__int64)v4 + 840);
  v5 = *(int*)(a2 + 12);
  v6 = *(const char**)(a2 + 16);
  v7 = a1 + 4088 * v5;
  if (v6 != nullptr) {
    v8 = *(char**)(v7 + 4056);
    v9 = *(char**)(v7 + 4048);
    v10 = v8 - v9;
    if (v8 != v9) {
      v11 = v10 >> 3;
      v12 = v9;
      v13 = v10 >> 3;
      while (1) {
        v15 = *(_QWORD*)v12;
        v12 += 8;
        v14 = v15;
        if (*(_BYTE*)(v15 + 1440) == 1) {
          v16 = strlen_alt1(v6);
          v17 = *(_BYTE*)v14 >> 1;
          if ((*(_BYTE*)v14 & 1) != 0) {
            v17 = *(_QWORD*)(v14 + 8);
          }
          if (v16 == v17) {
            v18 = v16;
            if (v16 == -1) {
            LABEL_32:
              snd_a36650();
            }
            v19 = (*(_BYTE*)v14 & 1) != 0 ? *(_QWORD*)(v14 + 16) : v14 + 1;
            if (memcmp_alt1(v19, (__int64)v6, v18) == 0) {
              break;
            }
          }
        }
        if (--v13 == 0) {
          goto LABEL_31;
        }
      }
      while (1) {
        v21 = *(_QWORD*)v9;
        v9 += 8;
        v20 = v21;
        if (*(_BYTE*)(v21 + 1440) == 1) {
          v22 = strlen_alt1(v6);
          v23 = *(_BYTE*)v20 >> 1;
          if ((*(_BYTE*)v20 & 1) != 0) {
            v23 = *(_QWORD*)(v20 + 8);
          }
          if (v22 == v23) {
            v24 = v22;
            if (v22 == -1) {
              goto LABEL_32;
            }
            v25 = (*(_BYTE*)v20 & 1) != 0 ? *(_QWORD*)(v20 + 16) : v20 + 1;
            if (memcmp_alt1(v25, (__int64)v6, v24) == 0) {
              break;
            }
          }
        }
        if (--v11 == 0) {
          goto LABEL_27;
        }
      }
      v26 = v20 + 32;
      goto LABEL_30;
    }
  }
  else if ((*(_BYTE*)(v7 + 4137) & 1) != 0) {
  LABEL_27:
    v27 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)v5 + 4136) != 0) {
      v27 = 1584;
    }
    v26 = a1 + 4088LL * (int)v5 + 56 + v27;
  LABEL_30:
    *(_QWORD*)(v26 + 16) = 0;
  }
LABEL_31:
  v28 = BaseNx_2a1b90();
  return nn_os_UnlockMutex_alt2((__int64)v28 + 840);
}

__int64 BaseNX_unloadAddonArchive(__int64 result, const char* a2,
                                  const char* a3)
{
  const char* v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;

  if (a2 != nullptr) {
    v3 = a2;
  }
  else {
    v3 = "noname";
  }
  if (*(_BYTE*)(result + 4137) == 1) {
    v5 = result;
    result = strlen_alt1(v3);
    v6 = *(_BYTE*)(v5 + 56) >> 1;
    if ((*(_BYTE*)(v5 + 56) & 1) != 0) {
      v6 = *(_QWORD*)(v5 + 64);
    }
    if (result == v6) {
      v7 = result;
      if (result == -1) {
      LABEL_34:
        snd_a36650();
      }
      v8 = (*(_BYTE*)(v5 + 56) & 1) != 0 ? *(_QWORD*)(v5 + 72) : v5 + 57;
      result = memcmp_alt1(v8, (__int64)v3, v7);
      if ((_DWORD)result == 0) {
        v9 = *(__int64**)(v5 + 4048);
        v10 = *(_QWORD*)(v5 + 4056) - (_QWORD)v9;
        if (v10 != 0) {
          v11 = v10 >> 3;
          while (1) {
            v13 = *v9++;
            v12 = v13;
            if (*(_BYTE*)(v13 + 1440) == 1) {
              result = strlen_alt1(a3);
              v14 = *(_BYTE*)v12 >> 1;
              if ((*(_BYTE*)v12 & 1) != 0) {
                v14 = *(_QWORD*)(v12 + 8);
              }
              if (result == v14) {
                v15 = result;
                if (result == -1) {
                  goto LABEL_34;
                }
                v16 = (*(_BYTE*)v12 & 1) != 0 ? *(_QWORD*)(v12 + 16) : v12 + 1;
                result = memcmp_alt1(v16, (__int64)a3, v15);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
            }
            if (--v11 == 0) {
              return result;
            }
          }
          BaseNX_15b4c0(v5, v12 + 1376);
          *(_BYTE*)(v12 + 1440) = 0;
          v17 = *(_QWORD*)(v5 + 8);
          v21_.v21[0] = GameData_1f666d0;
          v21_.v21[1] = v12;
          v21_.v22 = v21_.v21;
          Manager_11f260(v17, (__int64)v21_.v21);
          if (v21_.v22 == v21_.v21) {
            v18 = 32;
          }
          else {
            if (v21_.v22 == nullptr) {
            LABEL_31:
              SoundArchivePlayer_27a360(v5 + 2392, v12 + 32);
              SoundDataManager_27b820_alt1(v12 + 784);
              GameRoutine_2767b0_alt1(v12 + 32);
              v19 = *(_QWORD*)(v12 + 1368);
              *(_QWORD*)(v12 + 1368) = 0;
              if (v19 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
                    snd_g_memory);
              }
              v20 = *(_QWORD*)(v12 + 1360);
              *(_QWORD*)(v12 + 1360) = 0;
              return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 400LL))(
                  v5, v20);
            }
            v18 = 40;
          }
          (*(void (**)(__int64))(*v21_.v22 + v18))((__int64)v21_.v22);
          goto LABEL_31;
        }
      }
    }
  }
  return result;
}

__int64 BaseNX_loadMemoryAddonArchive(__int64 result, char* a2, __int64 a3,
                                      __int64 a4, char* a5)
{
  char* v5;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  char* v30;
  char* v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  if (a2 != nullptr) {
    v5 = a2;
  }
  else {
    v5 = "noname";
  }
  if (*(_BYTE*)(result + 4137) == 1) {
    v9 = result;
    result = strlen_alt1(v5);
    v10 = *(_BYTE*)(v9 + 56) >> 1;
    if ((*(_BYTE*)(v9 + 56) & 1) != 0) {
      v10 = *(_QWORD*)(v9 + 64);
    }
    if (result == v10) {
      v11 = result;
      if (result == -1) {
        snd_a36650();
      }
      v12 = (*(_BYTE*)(v9 + 56) & 1) != 0 ? *(_QWORD*)(v9 + 72) : v9 + 57;
      result = memcmp_alt1(v12, (__int64)v5, v11);
      if (a3 != 0 && (_DWORD)result == 0) {
        v13 = *(__int64**)(v9 + 4048);
        v14 = *(_QWORD*)(v9 + 4056) - (_QWORD)v13;
        if (v14 != 0) {
          v15 = v14 >> 3;
          while (1) {
            v17 = *v13++;
            v16 = v17;
            if ((*(_BYTE*)(v17 + 1440) & 1) == 0) {
              break;
            }
            if (--v15 == 0) {
              goto LABEL_18;
            }
          }
        }
        else {
        LABEL_18:
          v18 = (*(__int64 (**)(__int64, __int64, __int64))(
              *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 1448, 32);
          memset_alt2(v18, 0, 0x5A8u);
          GameRoutine_190020_alt1((__int64*)v18, &GameData_1a9f09e);
          memset_alt2(v18 + 24, 0, 0x2F8u);
          GameRoutine_2766a0((_QWORD*)(v18 + 32));
          *(_QWORD*)(v18 + 32) = GameData_21349b0 + 2;
          GameRoutine_27b620((_QWORD*)(v18 + 784));
          *(_QWORD*)(v18 + 1368) = 0;
          *(_QWORD*)(v18 + 1360) = 0;
          BaseNx_14b510(v18 + 1376);
          *(_BYTE*)(v18 + 1440) = 0;
          v19 = *(__int64**)(v9 + 4056);
          v20 = *(_QWORD*)(v9 + 4064);
          if ((unsigned __int64)v19 >= v20) {
            v22 = *(_QWORD*)(v9 + 4048);
            v23 = (__int64)v19 - v22;
            v24 = (v23 >> 3) + 1;
            if (v24 >> 61 != 0) {
              GameRoutine_164e10();
            }
            v25 = v20 - v22;
            v26 = v25 >> 2;
            if (v25 >> 2 <= v24) {
              v26 = (v23 >> 3) + 1;
            }
            if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
              v27 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v27 = v26;
            }
            v28 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 16LL))(
                (__int64)snd_g_memory);
            v29 = (__int64*)(v28 + v23);
            *v29 = v18;
            v21 = v28 + v23 + 8;
            v30 = *(char**)(v9 + 4056);
            v31 = *(char**)(v9 + 4048);
            v32 = (__int64*)((char*)v29 + ((char*)v31 - (char*)v30));
            if (v30 != v31) {
              v33 = v32;
              do {
                v34 = *(_QWORD*)v31;
                v31 += 8;
                *v33++ = v34;
              } while (v31 != v30);
              v31 = *(char**)(v9 + 4048);
            }
            *(_QWORD*)(v9 + 4048) = v32;
            *(_QWORD*)(v9 + 4056) = v21;
            *(_QWORD*)(v9 + 4064) = v28 + 8 * v27;
            if (v31 != nullptr) {
              (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(
                  snd_g_memory);
            }
          }
          else {
            *v19 = v18;
            v21 = (__int64)(v19 + 1);
          }
          *(_QWORD*)(v9 + 4056) = v21;
          v16 = *(_QWORD*)(v21 - 8);
        }
        *(_BYTE*)(v16 + 1440) = 1;
        GameRoutine_190200_alt1(v16, a5);
        *(_QWORD*)(v16 + 24) = a4;
        *(_QWORD*)(v16 + 1360) = a3;
        GameRoutine_276720_alt1(v16 + 32, a3);
        GameRoutine_279360(v16 + 32, "content:/");
        v35 = SoundDataManager_27b710(v16 + 784, v16 + 32);
        v36 = (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, v35, 8);
        v37 = *(_QWORD*)(v16 + 1368);
        *(_QWORD*)(v16 + 1368) = v36;
        if (v37 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
          v38 = *(_QWORD*)(v16 + 1368);
        }
        else {
          v38 = v36;
        }
        SoundDataManager_27b740(v16 + 784, v16 + 32, v38, v35);
        SoundArchivePlayer_27a2c0(v9 + 2392, (__int64)a5, v16 + 32);
        *(_DWORD*)(v16 + 1388) = *(_DWORD*)(v9 + 80);
        *(_QWORD*)(v16 + 1392) = GameRoutine_190240_alt1(v16);
        return BaseNX_15ad00(v9, v16 + 1376);
      }
    }
  }
  return result;
}

__int64 BaseNX_unloadMemoryAddonArchive(__int64 result, const char* a2,
                                        const char* a3)
{
  const char* v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;

  if (a2 != nullptr) {
    v3 = a2;
  }
  else {
    v3 = "noname";
  }
  if (*(_BYTE*)(result + 4137) == 1) {
    v5 = result;
    result = strlen_alt1(v3);
    v6 = *(_BYTE*)(v5 + 56) >> 1;
    if ((*(_BYTE*)(v5 + 56) & 1) != 0) {
      v6 = *(_QWORD*)(v5 + 64);
    }
    if (result == v6) {
      v7 = result;
      if (result == -1) {
      LABEL_34:
        snd_a36650();
      }
      v8 = (*(_BYTE*)(v5 + 56) & 1) != 0 ? *(_QWORD*)(v5 + 72) : v5 + 57;
      result = memcmp_alt1(v8, (__int64)v3, v7);
      if ((_DWORD)result == 0) {
        v9 = *(__int64**)(v5 + 4048);
        v10 = *(_QWORD*)(v5 + 4056) - (_QWORD)v9;
        if (v10 != 0) {
          v11 = v10 >> 3;
          while (1) {
            v13 = *v9++;
            v12 = v13;
            if (*(_BYTE*)(v13 + 1440) == 1) {
              result = strlen_alt1(a3);
              v14 = *(_BYTE*)v12 >> 1;
              if ((*(_BYTE*)v12 & 1) != 0) {
                v14 = *(_QWORD*)(v12 + 8);
              }
              if (result == v14) {
                v15 = result;
                if (result == -1) {
                  goto LABEL_34;
                }
                v16 = (*(_BYTE*)v12 & 1) != 0 ? *(_QWORD*)(v12 + 16) : v12 + 1;
                result = memcmp_alt1(v16, (__int64)a3, v15);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
            }
            if (--v11 == 0) {
              return result;
            }
          }
          BaseNX_15b4c0(v5, v12 + 1376);
          *(_BYTE*)(v12 + 1440) = 0;
          v17 = *(_QWORD*)(v5 + 8);
          v20_.v20[0] = GameData_1f667d0;
          v20_.v20[1] = v12;
          v20_.v21 = v20_.v20;
          Manager_11f260(v17, (__int64)v20_.v20);
          if (v20_.v21 == v20_.v20) {
            v18 = 32;
          }
          else {
            if (v20_.v21 == nullptr) {
            LABEL_31:
              SoundArchivePlayer_27a360(v5 + 2392, v12 + 32);
              SoundDataManager_27b820_alt1(v12 + 784);
              result = GameRoutine_2767b0_alt1(v12 + 32);
              v19 = *(_QWORD*)(v12 + 1368);
              *(_QWORD*)(v12 + 1368) = 0;
              if (v19 != 0) {
                result = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory +
                                                   24LL))(snd_g_memory);
              }
              *(_QWORD*)(v12 + 1360) = 0;
              return result;
            }
            v18 = 40;
          }
          (*(void (**)(__int64))(*v20_.v21 + v18))((__int64)v20_.v21);
          goto LABEL_31;
        }
      }
    }
  }
  return result;
}

__int64 BaseNX_getSoundUserParam(__int64 a1, unsigned int a2, int a3,
                                 const char* a4)
{
  void* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  void* v47;
  struct {
    __int64 v49;
    __int64 v50;
  } v49_;

  v8 = BaseNx_2a1b90();
  nn_os_LockMutex_alt1((__int64)v8 + 840);
  if (a4 == nullptr) {
    v32 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v32 = 1584;
    }
    BaseNx_278890(a1 + 4088LL * a3 + 56 + v32);
    goto LABEL_34;
  }
  v9 = a1 + 4088LL * a3;
  v10 = *(__int64**)(v9 + 4048);
  v11 = *(_QWORD*)(v9 + 4056) - (_QWORD)v10;
  if (v11 == 0) {
  LABEL_16:
    v22 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v22 = 1584;
    }
    BaseNx_278890(a1 + 4088LL * a3 + 56 + v22);
    v23 = v9 + 4048;
    v19 = *(__int64**)(v9 + 4048);
    v21 = *(_QWORD*)(v23 + 8) - (_QWORD)v19;
    if (v21 == 0) {
      goto LABEL_34;
    }
  LABEL_19:
    v24 = v21 >> 3;
    while (1) {
      v26 = *v19++;
      v25 = v26;
      if (*(_BYTE*)(v26 + 1440) == 1) {
        v27 = strlen_alt1(a4);
        v28 = *(_BYTE*)v25 >> 1;
        if ((*(_BYTE*)v25 & 1) != 0) {
          v28 = *(_QWORD*)(v25 + 8);
        }
        if (v27 == v28) {
          v29 = v27;
          if (v27 == -1) {
            goto LABEL_54;
          }
          v30 = (*(_BYTE*)v25 & 1) != 0 ? *(_QWORD*)(v25 + 16) : v25 + 1;
          if (memcmp_alt1(v30, (__int64)a4, v29) == 0) {
            break;
          }
        }
      }
      if (--v24 == 0) {
        goto LABEL_34;
      }
    }
    v31 = BaseNx_278770(v25 + 32, a2);
    v49_.v49 = -1;
    v49_.v50 = 0;
    goto LABEL_37;
  }
  v12 = v11 >> 3;
  while (1) {
    v14 = *v10++;
    v13 = v14;
    if (*(_BYTE*)(v14 + 1440) == 1) {
      v15 = strlen_alt1(a4);
      v16 = *(_BYTE*)v13 >> 1;
      if ((*(_BYTE*)v13 & 1) != 0) {
        v16 = *(_QWORD*)(v13 + 8);
      }
      if (v15 == v16) {
        v17 = v15;
        if (v15 == -1) {
        LABEL_54:
          snd_a36650();
        }
        v18 = (*(_BYTE*)v13 & 1) != 0 ? *(_QWORD*)(v13 + 16) : v13 + 1;
        if (memcmp_alt1(v18, (__int64)a4, v17) == 0) {
          break;
        }
      }
    }
    if (--v12 == 0) {
      goto LABEL_16;
    }
  }
  BaseNx_278890(v13 + 32);
  v20 = v9 + 4048;
  v19 = *(__int64**)(v9 + 4048);
  v21 = *(_QWORD*)(v20 + 8) - (_QWORD)v19;
  if (v21 != 0) {
    goto LABEL_19;
  }
LABEL_34:
  v33 = 32;
  if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
    v33 = 1584;
  }
  v31 = BaseNx_278770(a1 + 4088LL * a3 + 56 + v33, a2);
  v49_.v49 = -1;
  v49_.v50 = 0;
  if (a4 == nullptr) {
    goto LABEL_50;
  }
LABEL_37:
  v34 = a1 + 4088LL * a3;
  v35 = *(__int64**)(v34 + 4056);
  v36 = *(__int64**)(v34 + 4048);
  if (v35 == v36) {
  LABEL_50:
    v45 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v45 = 1584;
    }
    v44 = a1 + 4088LL * a3 + 56 + v45;
    goto LABEL_53;
  }
  v37 = v35 - v36;
  while (1) {
    v39 = *v36++;
    v38 = v39;
    if (*(_BYTE*)(v39 + 1440) == 1) {
      v40 = strlen_alt1(a4);
      v41 = *(_BYTE*)v38 >> 1;
      if ((*(_BYTE*)v38 & 1) != 0) {
        v41 = *(_QWORD*)(v38 + 8);
      }
      if (v40 == v41) {
        v42 = v40;
        if (v40 == -1) {
          goto LABEL_54;
        }
        v43 = (*(_BYTE*)v38 & 1) != 0 ? *(_QWORD*)(v38 + 16) : v38 + 1;
        if (memcmp_alt1(v43, (__int64)a4, v42) == 0) {
          break;
        }
      }
    }
    if (--v37 == 0) {
      goto LABEL_50;
    }
  }
  v44 = v38 + 32;
LABEL_53:
  BaseNx_278f90(v44, v31, (__int64)&v49_.v49);
  v46 = v49_.v50;
  v47 = BaseNx_2a1b90();
  nn_os_UnlockMutex_alt2((__int64)v47 + 840);
  return v46;
}

__int64 BaseNX_startSound(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;

  v2 = *(_DWORD*)(a2 + 5768);
  v3 = *(_DWORD*)(a2 + 5772);
  v4 = *(_QWORD*)(a2 + 5776);
  v6 = GameRoutine_190240(a2 + 5712);
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)a1 + 208LL))(a1, v2, v3, v4, v6);
}

__int64 BaseNX_startSound_15c8a0(__int64 a1, unsigned int a2, unsigned int a3,
                                 char* a4, unsigned __int8* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  _QWORD* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  char* v53;
  unsigned int v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  int v61;
  _BYTE* v62;
  char* v63;
  unsigned __int8* v64;
  int v65;
  unsigned __int8 v66;
  unsigned __int8* v67;
  int v68;
  __int64 v69;
  char v70;
  int v71;
  __int64 v72;
  char* v73;
  __int64* v74;
  char* v75;
  int v76;
  unsigned __int8* v77;
  int v78;
  bool v79;
  char v80;
  char v81;
  int v82;
  char* v83;
  int v84;
  int v85;
  char* v86;
  unsigned __int8* v87;
  int v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char* v96;
  char* v97;
  char* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  char* v106;
  char* v107;
  char* v108;
  char* v109;
  char* v110;
  __int64 v111;
  char* v112;
  char* v113;
  char* v114;
  unsigned __int8* v115;
  int v116;
  int v117;
  char* v118;
  unsigned __int8* v119;
  int v120;
  int v121;
  char* v122;
  unsigned __int8* v123;
  int v124;
  int v125;
  char* v126;
  int v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131[3];
  struct {
    __int64 v132;
    char v133;
    char gap57_[15];
    __int64 v134;
    char v135;
    char gap81_[15];
    __int64 v136;
    char v137;
    char gap105_[15];
    __int64 v138;
    char v139;
    char gap129_[15];
    __int64 v140;
    char v141;
    char gap153_[15];
    __int64 v142;
    char v143;
    char gap177_[15];
    __int64 v144;
    char v145;
    char gap201_[15];
    __int64 v146;
  } v132_;
  unsigned int v147;
  _QWORD v148[3];
  _QWORD v149[3];
  _QWORD v150[3];
  _QWORD v151[3];
  _QWORD v152[3];
  _QWORD v153[3];
  _QWORD v154[3];
  __int64 v155[32];
  char v156[256];
  char v157[256];
  char v158[256];
  char v159[256];
  char v160[256];
  struct {
    unsigned __int8 v161;
    _BYTE v162[255];
  } v161_;
  _BYTE v163[256];
  struct {
    __int64 v164;
    char* v165;
    char gap2464_[4];
    _DWORD v166[3];
  } v164_;

  nn_os_LockMutex_alt1(a1 + 24);
  if (((*(__int64 (**)(__int64, _QWORD, _QWORD, const char*))(
           *(_QWORD*)a1 + 232LL))(a1, a2, a3, a4) &
       1) == 0) {
    goto LABEL_146;
  }
  v10 = GameRoutine_118fd0(snd_g_manager);
  v11 = Archive_106680(v10, a5);
  if (v11 != 0) {
    v12 = v11;
    nn_os_UnlockMutex_alt2(a1 + 24);
    return *(_QWORD*)(v12 + 8);
  }
  v164_.v166[0] = 0;
  if (a4 == nullptr) {
    v37 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)a3 + 4136) != 0) {
      v37 = 1584;
    }
    BaseNx_278800(a1 + 4088LL * (int)a3 + 56 + v37, (__int64)v164_.v166, a2, 0);
  LABEL_37:
    v38 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)a3 + 4136) != 0) {
      v38 = 1584;
    }
    v36 = a1 + 4088LL * (int)a3 + 56 + v38;
    goto LABEL_40;
  }
  v14 = a1 + 4088LL * (int)a3;
  v15 = *(__int64**)(v14 + 4048);
  v16 = *(_QWORD*)(v14 + 4056) - (_QWORD)v15;
  if (v16 != 0) {
    v17 = v16 >> 3;
    while (1) {
      v19 = *v15++;
      v18 = v19;
      if (*(_BYTE*)(v19 + 1440) == 1) {
        v20 = strlen_alt1(a4);
        v21 = *(_BYTE*)v18 >> 1;
        if ((*(_BYTE*)v18 & 1) != 0) {
          v21 = *(_QWORD*)(v18 + 8);
        }
        if (v20 == v21) {
          v22 = v20;
          if (v20 == -1) {
          LABEL_235:
            snd_a36650();
          }
          v23 = (*(_BYTE*)v18 & 1) != 0 ? *(_QWORD*)(v18 + 16) : v18 + 1;
          if (memcmp_alt1(v23, (__int64)a4, v22) == 0) {
            break;
          }
        }
      }
      if (--v17 == 0) {
        goto LABEL_18;
      }
    }
    v24 = v18 + 32;
  }
  else {
  LABEL_18:
    v25 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)a3 + 4136) != 0) {
      v25 = 1584;
    }
    v24 = a1 + 4088LL * (int)a3 + 56 + v25;
  }
  BaseNx_278800(v24, (__int64)v164_.v166, a2, 0);
  v27 = v14 + 4048;
  v26 = *(__int64**)(v14 + 4048);
  v28 = *(_QWORD*)(v27 + 8) - (_QWORD)v26;
  if (v28 == 0) {
    goto LABEL_37;
  }
  v29 = v28 >> 3;
  while (1) {
    v31 = *v26++;
    v30 = v31;
    if (*(_BYTE*)(v31 + 1440) == 1) {
      v32 = strlen_alt1(a4);
      v33 = *(_BYTE*)v30 >> 1;
      if ((*(_BYTE*)v30 & 1) != 0) {
        v33 = *(_QWORD*)(v30 + 8);
      }
      if (v32 == v33) {
        v34 = v32;
        if (v32 == -1) {
          goto LABEL_235;
        }
        v35 = (*(_BYTE*)v30 & 1) != 0 ? *(_QWORD*)(v30 + 16) : v30 + 1;
        if (memcmp_alt1(v35, (__int64)a4, v34) == 0) {
          break;
        }
      }
    }
    if (--v29 == 0) {
      goto LABEL_37;
    }
  }
  v36 = v30 + 32;
LABEL_40:
  v39 = BaseNx_278770(v36, a2);
  v164_.v164 = -1;
  v164_.v165 = nullptr;
  if (a4 == nullptr ||
      (v40 = a1 + 4088LL * (int)a3, v41 = *(_QWORD**)(v40 + 4056),
       v42 = *(__int64**)(v40 + 4048), v41 == v42)) {
  LABEL_54:
    v51 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)a3 + 4136) != 0) {
      v51 = 1584;
    }
    v50 = a1 + 4088LL * (int)a3 + 56 + v51;
  }
  else {
    v43 = v41 - (__typeof__(v41))v42;
    while (1) {
      v45 = *v42++;
      v44 = v45;
      if (*(_BYTE*)(v45 + 1440) == 1) {
        v46 = strlen_alt1(a4);
        v47 = *(_BYTE*)v44 >> 1;
        if ((*(_BYTE*)v44 & 1) != 0) {
          v47 = *(_QWORD*)(v44 + 8);
        }
        if (v46 == v47) {
          v48 = v46;
          if (v46 == -1) {
            goto LABEL_235;
          }
          v49 = (*(_BYTE*)v44 & 1) != 0 ? *(_QWORD*)(v44 + 16) : v44 + 1;
          if (memcmp_alt1(v49, (__int64)a4, v48) == 0) {
            break;
          }
        }
      }
      if (--v43 == 0) {
        goto LABEL_54;
      }
    }
    v50 = v44 + 32;
  }
  BaseNx_278f90(v50, v39, (__int64)&v164_.v164);
  v52 = v164_.v166[0];
  v53 = v164_.v165;
  v54 = *(_DWORD*)(a1 + 261944);
  v55 = a1 + 24LL * v54;
  if (v54 + 1 <= 0xF) {
    v56 = v54 + 1;
  }
  else {
    v56 = 0;
  }
  v57 = v164_.v166[0] & 7;
  *(_DWORD*)(a1 + 261944) = v56;
  if ((v52 & 7) == 0) {
    TargetFile_a392e0(v55 + 261560, (__int64)"%s", v53);
    goto LABEL_169;
  }
  v58 = strstr_alt1(v53, "stream/");
  if (v58 == 0) {
  LABEL_146:
    nn_os_UnlockMutex_alt2(a1 + 24);
    return 0;
  }
  v59 = (const char*)(v58 + 7);
  if ((v52 & 0x1C0) != 0) {
    v60 = v58;
    if (strchr((const char*)(v58 + 7), 47) != 0) {
      v61 = *(unsigned __int8*)v59;
      if (v61 == 47) {
        v62 = v163;
      }
      else {
        v64 = (unsigned __int8*)(v60 + 8);
        v62 = v163;
        do {
          *v62++ = v61;
          v65 = *v64++;
          LOBYTE(v61) = v65;
        } while (v65 != 47);
      }
      *v62 = 47;
      v63 = v62 + 1;
    }
    else {
      v63 = v163;
    }
    v66 = *a5;
    if (*a5 != 0) {
      v67 = a5 + 1;
      do {
        *v63++ = v66;
        v68 = *v67++;
        v66 = v68;
      } while (v68 != 0);
    }
    v59 = v163;
    v63[6] = 0;
    __builtin_strcpy(v63, ".opus");
  }
  GameRoutine_190020_alt1(v155, v59);
  v69 = GameRoutine_1673c0(a1 + 261536, (unsigned __int8*)v155);
  if ((v155[0] & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v155[2]);
  }
  if (a1 + 261544 != v69) {
    goto LABEL_138;
  }
  v70 = *v59;
  v71 = (v52 >> 3) & 7;
  v72 = 0;
  do {
    v73 = &v59[v72];
    v161_.v162[v72++ - 1] = v70;
    v70 = v73[1];
  } while (v70 != 0);
  v161_.v162[v72 - 1] = 0;
  v74 = v155;
  v75 = v59;
  LOBYTE(v76) = *v59;
  while (2) {
    v77 = (unsigned __int8*)(v75 + 1);
    do {
      *(_BYTE*)v74 = v76;
      v74 = (__int64*)((char*)v74 + 1);
      v78 = *v77++;
      v76 = v78;
      if (v78 == 46) {
        --v77;
        *(_BYTE*)v74 = 0;
        if (v57 != 1) {
          goto LABEL_95;
        }
        goto LABEL_92;
      }
      if (v76 == 47) {
        if (v71 <= 1) {
          v71 = 1;
        }
        --v71;
        *(_BYTE*)v74 = 0;
        if (v57 != 1) {
          goto LABEL_95;
        }
        goto LABEL_92;
      }
    } while (v76 != 95);
    v79 = __OFSUB__(v71--, 1);
    if (v71 < 0 == v79) {
      v75 = (const char*)(v77 - 1);
      continue;
    }
    break;
  }
  v71 = 0;
  *(_BYTE*)v74 = 0;
  if (v57 == 1) {
  LABEL_92:
    v80 = 0;
    v81 = 0;
    v130 = 0;
    v82 = 1;
    v83 = v161_.v162;
    v84 = v161_.v161;
    if (v161_.v161 != 0) {
      goto LABEL_113;
    }
  LABEL_115:
    v83 = (char*)&v161_.v161;
    goto LABEL_116;
  }
LABEL_95:
  v85 = *v77;
  if (v85 == 46) {
    v80 = 0;
    v81 = 0;
    v130 = 0;
    v82 = 1;
    v57 = 1;
    v83 = v161_.v162;
    v84 = v161_.v161;
    if (v161_.v161 != 0) {
      goto LABEL_113;
    }
    goto LABEL_115;
  }
  v86 = v156;
  while (2) {
    v87 = v77 + 1;
    while (1) {
      *v86++ = v85;
      v88 = *v87++;
      v85 = v88;
      if (v88 == 46) {
        --v87;
        *v86 = 0;
        if (v57 >= 3) {
          goto LABEL_111;
        }
        goto LABEL_112;
      }
      if (v85 == 95) {
        break;
      }
      if (v85 == 47) {
        if (v71 <= 1) {
          v71 = 1;
        }
        --v71;
        *v86 = 0;
        if (v57 >= 3) {
          goto LABEL_111;
        }
        goto LABEL_112;
      }
    }
    if (v71 > 0) {
      v77 = v87 - 1;
      --v71;
      continue;
    }
    break;
  }
  v71 = 0;
  *v86 = 0;
  if (v57 < 3) {
    goto LABEL_112;
  }
LABEL_111:
  v89 = *v87;
  if (v89 == 46) {
  LABEL_112:
    v82 = 0;
    v81 = 0;
    v130 = 0;
    v57 = 2;
    v80 = 1;
    v83 = v161_.v162;
    v84 = v161_.v161;
    if (v161_.v161 != 0) {
      goto LABEL_113;
    }
    goto LABEL_115;
  }
  v114 = v157;
LABEL_171:
  v115 = v87 + 1;
  do {
    *v114++ = v89;
    v116 = *v115++;
    v89 = v116;
    if (v116 == 46) {
      --v115;
      *v114 = 0;
      if (v57 == 3) {
        goto LABEL_183;
      }
      goto LABEL_188;
    }
    if (v89 == 95) {
      if (v71 > 0) {
        v87 = v115 - 1;
        --v71;
        goto LABEL_171;
      }
      v71 = 0;
      *v114 = 0;
      if (v57 == 3) {
        goto LABEL_183;
      }
      goto LABEL_188;
    }
  } while (v89 != 47);
  if (v71 <= 1) {
    v71 = 1;
  }
  --v71;
  *v114 = 0;
  if (v57 == 3) {
  LABEL_183:
    v82 = 0;
    v80 = 0;
    v130 = 0;
    v81 = 1;
    v83 = v161_.v162;
    v84 = v161_.v161;
    if (v161_.v161 != 0) {
      goto LABEL_113;
    }
    goto LABEL_115;
  }
LABEL_188:
  v117 = *v115;
  if (v117 == 46) {
    v82 = 0;
    v80 = 0;
    v130 = 0;
    v57 = 3;
    v81 = 1;
    v83 = v161_.v162;
    v84 = v161_.v161;
    if (v161_.v161 != 0) {
      goto LABEL_113;
    }
    goto LABEL_115;
  }
  v118 = v158;
  while (2) {
    v119 = v115 + 1;
    while (1) {
      *v118++ = v117;
      v120 = *v119++;
      v117 = v120;
      if (v120 == 46) {
        --v119;
        *v118 = 0;
        if (v57 >= 5) {
          goto LABEL_204;
        }
        goto LABEL_205;
      }
      if (v117 == 95) {
        break;
      }
      if (v117 == 47) {
        if (v71 <= 1) {
          v71 = 1;
        }
        --v71;
        *v118 = 0;
        if (v57 >= 5) {
          goto LABEL_204;
        }
        goto LABEL_205;
      }
    }
    if (v71 > 0) {
      v115 = v119 - 1;
      --v71;
      continue;
    }
    break;
  }
  v71 = 0;
  *v118 = 0;
  if (v57 < 5) {
    goto LABEL_205;
  }
LABEL_204:
  v121 = *v119;
  if (v121 == 46) {
  LABEL_205:
    v82 = 0;
    v80 = 0;
    v81 = 0;
    v57 = 4;
    v130 = 0x100000000LL;
    v83 = v161_.v162;
    v84 = v161_.v161;
    if (v161_.v161 != 0) {
      goto LABEL_113;
    }
    goto LABEL_115;
  }
  v122 = v159;
LABEL_208:
  v123 = v119 + 1;
  do {
    *v122++ = v121;
    v124 = *v123++;
    v121 = v124;
    if (v124 == 46) {
      --v123;
      *v122 = 0;
      if (v57 == 5) {
        goto LABEL_220;
      }
      goto LABEL_224;
    }
    if (v121 == 95) {
      if (v71 > 0) {
        v119 = v123 - 1;
        --v71;
        goto LABEL_208;
      }
      v71 = 0;
      *v122 = 0;
      if (v57 != 5) {
        goto LABEL_224;
      }
    LABEL_220:
      v82 = 0;
      v80 = 0;
      v81 = 0;
      BYTE4(v130) = 0;
    LABEL_226:
      LOBYTE(v130) = 1;
      v83 = v161_.v162;
      v84 = v161_.v161;
      if (v161_.v161 != 0) {
        goto LABEL_113;
      }
      goto LABEL_115;
    }
  } while (v121 != 47);
  if (v71 <= 1) {
    v71 = 1;
  }
  --v71;
  *v122 = 0;
  if (v57 == 5) {
    goto LABEL_220;
  }
LABEL_224:
  v125 = *v123;
  if (v125 == 46) {
    v82 = 0;
    v80 = 0;
    v81 = 0;
    BYTE4(v130) = 0;
    v57 = 5;
    goto LABEL_226;
  }
  v126 = v160;
  while (1) {
    *v126++ = v125;
    v127 = *++v123;
    v125 = v127;
    if ((unsigned int)(v127 - 46) < 2) {
      break;
    }
    if (v125 == 95) {
      if (v71 <= 0) {
        break;
      }
      --v71;
    }
  }
  v57 = 6;
  v82 = 0;
  v80 = 0;
  v81 = 0;
  v130 = 0;
  *v126 = 0;
  v83 = v161_.v162;
  v84 = v161_.v161;
  if (v161_.v161 == 0) {
    goto LABEL_115;
  }
LABEL_113:
  while (v84 != 47) {
    v84 = (unsigned __int8)*v83++;
    if (*(v83 - 1) == 0) {
      goto LABEL_115;
    }
  }
LABEL_116:
  ConstructString_1901f0_alt1(v148);
  ConstructString_1901f0_alt1(v149);
  ConstructString_1901f0_alt1(v150);
  ConstructString_1901f0_alt1(v151);
  ConstructString_1901f0_alt1(v152);
  ConstructString_1901f0_alt1(v153);
  ConstructString_1901f0_alt1(v154);
  v147 = v57;
  GameRoutine_190200_alt1((__int64)v154, v83);
  GameRoutine_190200_alt1((__int64)v148, (char*)v155);
  if (v82 == 0) {
    GameRoutine_190200_alt1((__int64)v149, v156);
    if ((v80 & 1) == 0) {
      GameRoutine_190200_alt1((__int64)v150, v157);
      if ((v81 & 1) == 0) {
        GameRoutine_190200_alt1((__int64)v151, v158);
        if ((v130 & 0x100000000LL) == 0) {
          GameRoutine_190200_alt1((__int64)v152, v159);
          if ((v130 & 1) == 0) {
            GameRoutine_190200_alt1((__int64)v153, v160);
          }
        }
      }
    }
  }
  GameRoutine_190020_alt1(v131, v59);
  GameRoutine_164e30((__int64)&v132_.v132, (__int64)&v147);
  v69 = (__int64)GameRoutine_1674e0((__int64**)(a1 + 261536),
                                    (unsigned __int8*)v131, v131);
  if ((v132_.v145 & 1) == 0) {
    if ((v132_.v143 & 1) == 0) {
      goto LABEL_124;
    }
  LABEL_151:
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v132_.v144);
    if ((v132_.v141 & 1) != 0) {
      goto LABEL_152;
    }
  LABEL_125:
    if ((v132_.v139 & 1) == 0) {
      goto LABEL_126;
    }
  LABEL_153:
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v132_.v140);
    if ((v132_.v137 & 1) != 0) {
      goto LABEL_154;
    }
  LABEL_127:
    if ((v132_.v135 & 1) == 0) {
      goto LABEL_128;
    }
  LABEL_155:
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v132_.v136);
    if ((v132_.v133 & 1) != 0) {
      goto LABEL_156;
    }
  LABEL_129:
    if ((v131[0] & 1) == 0) {
      goto LABEL_130;
    }
  LABEL_157:
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v131[2]);
    if ((v154[0] & 1) != 0) {
      goto LABEL_158;
    }
  LABEL_131:
    if ((v153[0] & 1) == 0) {
      goto LABEL_132;
    }
  LABEL_159:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v153[2]);
    if ((v152[0] & 1) != 0) {
      goto LABEL_160;
    }
  LABEL_133:
    if ((v151[0] & 1) == 0) {
      goto LABEL_134;
    }
  LABEL_161:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v151[2]);
    if ((v150[0] & 1) != 0) {
      goto LABEL_162;
    }
  LABEL_135:
    if ((v149[0] & 1) == 0) {
      goto LABEL_136;
    }
  LABEL_163:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v149[2]);
    if ((v148[0] & 1) == 0) {
      goto LABEL_138;
    }
  LABEL_137:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v148[2]);
    goto LABEL_138;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v132_.v146);
  if ((v132_.v143 & 1) != 0) {
    goto LABEL_151;
  }
LABEL_124:
  if ((v132_.v141 & 1) == 0) {
    goto LABEL_125;
  }
LABEL_152:
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v132_.v142);
  if ((v132_.v139 & 1) != 0) {
    goto LABEL_153;
  }
LABEL_126:
  if ((v132_.v137 & 1) == 0) {
    goto LABEL_127;
  }
LABEL_154:
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v132_.v138);
  if ((v132_.v135 & 1) != 0) {
    goto LABEL_155;
  }
LABEL_128:
  if ((v132_.v133 & 1) == 0) {
    goto LABEL_129;
  }
LABEL_156:
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v132_.v134);
  if ((v131[0] & 1) != 0) {
    goto LABEL_157;
  }
LABEL_130:
  if ((v154[0] & 1) == 0) {
    goto LABEL_131;
  }
LABEL_158:
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v154[2]);
  if ((v153[0] & 1) != 0) {
    goto LABEL_159;
  }
LABEL_132:
  if ((v152[0] & 1) == 0) {
    goto LABEL_133;
  }
LABEL_160:
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v152[2]);
  if ((v151[0] & 1) != 0) {
    goto LABEL_161;
  }
LABEL_134:
  if ((v150[0] & 1) == 0) {
    goto LABEL_135;
  }
LABEL_162:
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], v150[2]);
  if ((v149[0] & 1) != 0) {
    goto LABEL_163;
  }
LABEL_136:
  if ((v148[0] & 1) != 0) {
    goto LABEL_137;
  }
LABEL_138:
  v90 = *(_DWORD*)(v69 + 56);
  if (v90 <= 2) {
    if (v90 != 0) {
      if (v90 == 1) {
        v112 = (const char*)GameRoutine_190240_alt1(v69 + 64);
        v113 = (const char*)GameRoutine_190240_alt1(v69 + 208);
        TargetFile_a392e0(v55 + 261560, (__int64)"%s/%s/%s", "stream/", v112,
                          v113);
      }
      else if (v90 == 2) {
        v96 = (const char*)GameRoutine_190240_alt1(v69 + 64);
        v97 = (const char*)GameRoutine_190240_alt1(v69 + 88);
        v98 = (const char*)GameRoutine_190240_alt1(v69 + 208);
        TargetFile_a392e0(v55 + 261560, (__int64)"%s/%s/%s/%s", "stream/", v96,
                          v97, v98);
      }
      goto LABEL_169;
    }
    goto LABEL_146;
  }
  if (v90 > 4) {
    if (v90 == 5) {
      v99 = GameRoutine_190240_alt1(v69 + 64);
      v100 = GameRoutine_190240_alt1(v69 + 88);
      v101 = GameRoutine_190240_alt1(v69 + 112);
      v102 = GameRoutine_190240_alt1(v69 + 136);
      v103 = GameRoutine_190240_alt1(v69 + 160);
      v111 = GameRoutine_190240_alt1(v69 + 208);
      v106 = "%s/%s/%s/%s/%s/%s/%s";
      v128 = v111;
    }
    else {
      if (v90 != 6) {
        goto LABEL_169;
      }
      v99 = GameRoutine_190240_alt1(v69 + 64);
      v100 = GameRoutine_190240_alt1(v69 + 88);
      v101 = GameRoutine_190240_alt1(v69 + 112);
      v102 = GameRoutine_190240_alt1(v69 + 136);
      v103 = GameRoutine_190240_alt1(v69 + 160);
      v104 = GameRoutine_190240_alt1(v69 + 184);
      v105 = GameRoutine_190240_alt1(v69 + 208);
      v106 = "%s/%s/%s/%s/%s/%s/%s/%s";
      v128 = v104;
      v129 = v105;
    }
    TargetFile_a392e0(v55 + 261560, (__int64)v106, "stream/", v99, v100, v101,
                      v102, v103, v128, v129);
  }
  else if (v90 == 3) {
    v107 = (const char*)GameRoutine_190240_alt1(v69 + 64);
    v108 = (const char*)GameRoutine_190240_alt1(v69 + 88);
    v109 = (const char*)GameRoutine_190240_alt1(v69 + 112);
    v110 = (const char*)GameRoutine_190240_alt1(v69 + 208);
    TargetFile_a392e0(v55 + 261560, (__int64)"%s/%s/%s/%s/%s", "stream/", v107,
                      v108, v109, v110);
  }
  else {
    v91 = GameRoutine_190240_alt1(v69 + 64);
    v92 = GameRoutine_190240_alt1(v69 + 88);
    v93 = GameRoutine_190240_alt1(v69 + 112);
    v94 = GameRoutine_190240_alt1(v69 + 136);
    v95 = GameRoutine_190240_alt1(v69 + 208);
    TargetFile_a392e0(v55 + 261560, (__int64)"%s/%s/%s/%s/%s/%s", "stream/",
                      v91, v92, v93, v94, v95);
  }
LABEL_169:
  nn_os_UnlockMutex_alt2(a1 + 24);
  return GameRoutine_190240_alt1(v55 + 261560);
}

__int64 BaseNX_15d7e0(__int64 result)
{
  __int64 v1;
  __int64* v2;

  v1 = result;
  v2 = snd_g_memory_ptr[0];
  if ((*(_BYTE*)(result + 152) & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                              24LL))(*snd_g_memory_ptr[0],
                                                     *(_QWORD*)(result + 168));
    if ((*(_BYTE*)(v1 + 128) & 1) == 0) {
    LABEL_3:
      if ((*(_BYTE*)(v1 + 104) & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_11;
    }
  }
  else if ((*(_BYTE*)(result + 128) & 1) == 0) {
    goto LABEL_3;
  }
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 144));
  if ((*(_BYTE*)(v1 + 104) & 1) == 0) {
  LABEL_4:
    if ((*(_BYTE*)(v1 + 80) & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_12;
  }

LABEL_11:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 120));
  if ((*(_BYTE*)(v1 + 80) & 1) == 0) {
  LABEL_5:
    if ((*(_BYTE*)(v1 + 56) & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_13;
  }

LABEL_12:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 96));
  if ((*(_BYTE*)(v1 + 56) & 1) == 0) {
  LABEL_6:
    if ((*(_BYTE*)(v1 + 32) & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_14;
  }

LABEL_13:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 72));
  if ((*(_BYTE*)(v1 + 32) & 1) == 0) {
  LABEL_7:
    if ((*(_BYTE*)(v1 + 8) & 1) == 0) {
      return result;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(v1 + 24));
  }

LABEL_14:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 48));
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(v1 + 24));
  }
  return result;
}

__int64 BaseNX_prepareSound(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;

  v2 = *(_DWORD*)(a2 + 5768);
  v3 = *(_DWORD*)(a2 + 5772);
  v4 = *(_QWORD*)(a2 + 5776);
  v6 = GameRoutine_190240(a2 + 5712);
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)a1 + 224LL))(a1, v2, v3, v4, v6);
}

__int64 BaseNX_prepareSound_15d980(__int64 a1, unsigned int a2, int a3,
                                   char* a4, unsigned __int8* a5)
{
  __int64 v10;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  _QWORD* v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  struct {
    _QWORD v50[2];
    char gap24_[4];
    int v51;
  } v50_;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 232LL))(a1) & 1) == 0) {
    return 0;
  }
  v10 = GameRoutine_118fd0(snd_g_manager);
  if (Archive_106680(v10, a5) != 0) {
    return 0;
  }
  v50_.v51 = 0;
  if (a4 != nullptr) {
    v12 = a1 + 4088LL * a3;
    v13 = *(__int64**)(v12 + 4048);
    v14 = *(_QWORD*)(v12 + 4056) - (_QWORD)v13;
    if (v14 != 0) {
      v15 = v14 >> 3;
      while (1) {
        v17 = *v13++;
        v16 = v17;
        if (*(_BYTE*)(v17 + 1440) == 1) {
          v18 = strlen_alt1(a4);
          v19 = *(_BYTE*)v16 >> 1;
          if ((*(_BYTE*)v16 & 1) != 0) {
            v19 = *(_QWORD*)(v16 + 8);
          }
          if (v18 == v19) {
            v20 = v18;
            if (v18 == -1) {
            LABEL_59:
              snd_a36650();
            }
            v21 = (*(_BYTE*)v16 & 1) != 0 ? *(_QWORD*)(v16 + 16) : v16 + 1;
            if (memcmp_alt1(v21, (__int64)a4, v20) == 0) {
              break;
            }
          }
        }
        if (--v15 == 0) {
          goto LABEL_19;
        }
      }
      v22 = v16 + 32;
    }
    else {
    LABEL_19:
      v23 = 32;
      if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
        v23 = 1584;
      }
      v22 = a1 + 4088LL * a3 + 56 + v23;
    }
    BaseNx_278800(v22, (__int64)&v50_.v51, a2, 0);
    v25 = v12 + 4048;
    v24 = *(__int64**)(v12 + 4048);
    v26 = *(_QWORD*)(v25 + 8) - (_QWORD)v24;
    if (v26 != 0) {
      v27 = v26 >> 3;
      while (1) {
        v29 = *v24++;
        v28 = v29;
        if (*(_BYTE*)(v29 + 1440) == 1) {
          v30 = strlen_alt1(a4);
          v31 = *(_BYTE*)v28 >> 1;
          if ((*(_BYTE*)v28 & 1) != 0) {
            v31 = *(_QWORD*)(v28 + 8);
          }
          if (v30 == v31) {
            v32 = v30;
            if (v30 == -1) {
              goto LABEL_59;
            }
            v33 = (*(_BYTE*)v28 & 1) != 0 ? *(_QWORD*)(v28 + 16) : v28 + 1;
            if (memcmp_alt1(v33, (__int64)a4, v32) == 0) {
              break;
            }
          }
        }
        if (--v27 == 0) {
          goto LABEL_38;
        }
      }
      v34 = v28 + 32;
      goto LABEL_41;
    }
  }
  else {
    v35 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v35 = 1584;
    }
    BaseNx_278800(a1 + 4088LL * a3 + 56 + v35, (__int64)&v50_.v51, a2, 0);
  }
LABEL_38:
  v36 = 32;
  if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
    v36 = 1584;
  }
  v34 = a1 + 4088LL * a3 + 56 + v36;
LABEL_41:
  v37 = BaseNx_278770(v34, a2);
  v50_.v50[0] = -1;
  v50_.v50[1] = 0;
  if (a4 == nullptr || (v38 = a1 + 4088LL * a3, v39 = *(_QWORD**)(v38 + 4056),
                        v40 = *(__int64**)(v38 + 4048), v39 == v40)) {
  LABEL_55:
    v49 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v49 = 1584;
    }
    v48 = a1 + 4088LL * a3 + 56 + v49;
  }
  else {
    v41 = v39 - (__typeof__(v39))v40;
    while (1) {
      v43 = *v40++;
      v42 = v43;
      if (*(_BYTE*)(v43 + 1440) == 1) {
        v44 = strlen_alt1(a4);
        v45 = *(_BYTE*)v42 >> 1;
        if ((*(_BYTE*)v42 & 1) != 0) {
          v45 = *(_QWORD*)(v42 + 8);
        }
        if (v44 == v45) {
          v46 = v44;
          if (v44 == -1) {
            goto LABEL_59;
          }
          v47 = (*(_BYTE*)v42 & 1) != 0 ? *(_QWORD*)(v42 + 16) : v42 + 1;
          if (memcmp_alt1(v47, (__int64)a4, v46) == 0) {
            break;
          }
        }
      }
      if (--v41 == 0) {
        goto LABEL_55;
      }
    }
    v48 = v42 + 32;
  }
  BaseNx_278f90(v48, v37, (__int64)v50_.v50);
  return (v50_.v51 & 7) - (unsigned int)((v50_.v51 & 0x38) != 0);
}

bool BaseNX_isSequenceSound(__int64 a1, __int64 a2, __int64 a3, char* a4)
{
  int v5;
  unsigned int v6;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;

  v5 = a3;
  v6 = a2;
  if (((*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
           *(_QWORD*)a1 + 232LL))(a1, a2, a3, 0) &
       1) == 0) {
    return false;
  }
  if (a4 == nullptr || (v8 = a1 + 4088LL * v5, v9 = *(_QWORD**)(v8 + 4056),
                        v10 = *(__int64**)(v8 + 4048), v9 == v10)) {
  LABEL_17:
    v20 = 32;
    if (*(_BYTE*)(a1 + 4088LL * v5 + 4136) != 0) {
      v20 = 1584;
    }
    v18 = BaseNx_278770(a1 + 4088LL * v5 + 56 + v20, v6);
    v33_.v33 = -1;
    v33_.v34 = 0;
    if (a4 == nullptr) {
      goto LABEL_33;
    }
  }
  else {
    v11 = v9 - (__typeof__(v9))v10;
    while (1) {
      v13 = *v10++;
      v12 = v13;
      if (*(_BYTE*)(v13 + 1440) == 1) {
        v14 = strlen_alt1(a4);
        v15 = *(_BYTE*)v12 >> 1;
        if ((*(_BYTE*)v12 & 1) != 0) {
          v15 = *(_QWORD*)(v12 + 8);
        }
        if (v14 == v15) {
          v16 = v14;
          if (v14 == -1) {
          LABEL_37:
            snd_a36650();
          }
          v17 = (*(_BYTE*)v12 & 1) != 0 ? *(_QWORD*)(v12 + 16) : v12 + 1;
          if (memcmp_alt1(v17, (__int64)a4, v16) == 0) {
            break;
          }
        }
      }
      if (--v11 == 0) {
        goto LABEL_17;
      }
    }
    v18 = BaseNx_278770(v12 + 32, v6);
    v33_.v33 = -1;
    v33_.v34 = 0;
  }
  v21 = a1 + 4088LL * v5;
  v22 = *(_QWORD**)(v21 + 4056);
  v23 = *(__int64**)(v21 + 4048);
  if (v22 != v23) {
    v24 = v22 - (__typeof__(v22))v23;
    while (1) {
      v26 = *v23++;
      v25 = v26;
      if (*(_BYTE*)(v26 + 1440) == 1) {
        v27 = strlen_alt1(a4);
        v28 = *(_BYTE*)v25 >> 1;
        if ((*(_BYTE*)v25 & 1) != 0) {
          v28 = *(_QWORD*)(v25 + 8);
        }
        if (v27 == v28) {
          v29 = v27;
          if (v27 == -1) {
            goto LABEL_37;
          }
          v30 = (*(_BYTE*)v25 & 1) != 0 ? *(_QWORD*)(v25 + 16) : v25 + 1;
          if (memcmp_alt1(v30, (__int64)a4, v29) == 0) {
            break;
          }
        }
      }
      if (--v24 == 0) {
        goto LABEL_33;
      }
    }
    v31 = v25 + 32;
    goto LABEL_36;
  }
LABEL_33:
  v32 = 32;
  if (*(_BYTE*)(a1 + 4088LL * v5 + 4136) != 0) {
    v32 = 1584;
  }
  v31 = a1 + 4088LL * v5 + 56 + v32;
LABEL_36:
  BaseNx_278f90(v31, v18, (__int64)&v33_.v33);
  return v33_.v34 != 0;
}

__int64 BaseNX_existsFile(__int64 a1, const char* a2)
{
  const char* v3;
  __int64 v4;
  __int64 v5;
  char v6;
  _QWORD v8[3];

  ConstructString_1901f0_alt1(v8);
  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0_alt1((__int64)v8, (__int64)"%s%s", v3, a2);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240_alt1((__int64)v8);
  v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5);
  if ((v8[0] & 1) != 0) {
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v8[2]);
  }
  return v6 & 1;
}

__int64 BaseNX_Unknown35(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;

  result = 0;
  if (a4 != 0 && (*(_BYTE*)(a1 + 4137) & 1) != 0) {
    v9 = 32;
    if (*(_BYTE*)(a1 + 4136) != 0) {
      v9 = 1584;
    }
    v10 = a1 + v9;
    v11 = GameRoutine_278640(a1 + v9 + 56);
    if (v11 < 1) {
      v13 = 0;
    LABEL_12:
      v16 = *(_QWORD*)(a1 + 4048);
      if (*(_QWORD*)(a1 + 4056) == v16) {
        return v13;
      }
      else {
        v17 = 0;
        while (1) {
          v18 = *(_QWORD*)(v16 + 8 * v17);
          if (*(_BYTE*)(v18 + 1440) == 1) {
            v19 = GameRoutine_278640(v18 + 32);
            if (v19 >= 1) {
              break;
            }
          }
        LABEL_14:
          v16 = *(_QWORD*)(a1 + 4048);
          ++v17;
          result = v13;
          if (v17 >= (*(_QWORD*)(a1 + 4056) - v16) >> 3) {
            return result;
          }
        }
        v20 = v19;
        v21 = 0;
        while (1) {
          v22 = GameRoutine_278690(v18 + 32, v21 | 0x1000000u);
          if (strstr(v22, a2) != 0) {
            result = v13 + 1;
            *(_QWORD*)(a3 + 8LL * (int)v13) = v22;
            v13 = result;
            if ((int)result >= a4) {
              break;
            }
          }
          if (v20 == ++v21) {
            goto LABEL_14;
          }
        }
      }
    }
    else {
      v12 = v11;
      v13 = 0;
      v14 = 0;
      while (1) {
        v15 = GameRoutine_278690(v10 + 56, v14 | 0x1000000u);
        if (strstr(v15, a2) != 0) {
          result = v13 + 1;
          *(_QWORD*)(a3 + 8LL * (int)v13) = v15;
          v13 = result;
          if ((int)result >= a4) {
            break;
          }
        }
        if (v12 == ++v14) {
          goto LABEL_12;
        }
      }
    }
  }
  return result;
}

__int64 BaseNX_Unknown36(__int64 a1, const char* a2, __int64 a3, int a4)
{
  const char* v7;
  const char* v8;
  __int64 v9;
  __int64 v11;
  int v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  _QWORD v16[3];
  __int64 v17;

  ConstructString_1901f0_alt1(v16);
  v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0_alt2((__int64)v16, "%s%s", v7, a2);
  v8 = (const char*)GameRoutine_190240_alt1((__int64)v16);
  if ((unsigned int)nn_fs_OpenDirectory_alt1((__int64)&v17, v8, 1) != 0) {
    LODWORD(v9) = 0;
    if ((v16[0] & 1) != 0) {
    LABEL_3:
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v16[2]);
    }
  }
  else {
    v11 = GameRoutine_6511d0_alt1(50176);
    memset_alt2(v11, 0, 0xC400u);
    v12 = nn_fs_ReadDirectory(&v15, v11, v17, 64);
    nn_fs_CloseDirectory(v17);
    LODWORD(v9) = 0;
    if (v12 == 0) {
      v9 = v15;
      if (v15 > a4) {
        v15 = a4;
        v9 = a4;
      }
      if (v9 >= 1) {
        v13 = v9;
        v14 = (const char*)v11;
        do {
          strcpy_alt1(a3, v14);
          v14 += 784;
          a3 += 256;
          --v13;
        } while (v13 != 0);
      }
    }
    GameRoutine_651310_alt1(v11);
    if ((v16[0] & 1) != 0) {
      goto LABEL_3;
    }
  }
  return (unsigned int)v9;
}

__int64 BaseNX_loadDataByLabel(__int64 a1, const char* a2, __int64 a3, int a4)
{
  const char* v7;
  const char* v8;
  __int64 v9;
  __int64 v11;
  int v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  _QWORD v16[3];
  __int64 v17;

  ConstructString_1901f0_alt1(v16);
  v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0_alt2((__int64)v16, "%s%s", v7, a2);
  v8 = (const char*)GameRoutine_190240_alt1((__int64)v16);
  if ((unsigned int)nn_fs_OpenDirectory_alt1((__int64)&v17, v8, 2) != 0) {
    LODWORD(v9) = 0;
    if ((v16[0] & 1) != 0) {
    LABEL_3:
      (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v16[2]);
    }
  }
  else {
    v11 = GameRoutine_6511d0_alt1(50176);
    memset_alt2(v11, 0, 0xC400u);
    v12 = nn_fs_ReadDirectory(&v15, v11, v17, 64);
    nn_fs_CloseDirectory(v17);
    LODWORD(v9) = 0;
    if (v12 == 0) {
      v9 = v15;
      if (v15 > a4) {
        v15 = a4;
        v9 = a4;
      }
      if (v9 >= 1) {
        v13 = v9;
        v14 = (const char*)v11;
        do {
          strcpy_alt1(a3, v14);
          v14 += 784;
          a3 += 256;
          --v13;
        } while (v13 != 0);
      }
    }
    GameRoutine_651310_alt1(v11);
    if ((v16[0] & 1) != 0) {
      goto LABEL_3;
    }
  }
  return (unsigned int)v9;
}

__int64 BaseNX_loadData(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4;
  __int64 v5;
  __int64 result;

  v4 = a2;
  v5 = a1 + 4088LL * a3;
  result = GameRoutine_2878e0(v5 + 3232, a2, 0xFFFFFFFFLL);
  if ((result & 1) == 0) {
    return GameRoutine_286270(v5 + 3232, v4, a1 + 4152, 0xFFFFFFFFLL, 0);
  }
  return result;
}

__int64 BaseNX_attachSound3DListener(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;

  v4 = a1 + 4088LL * a3 + 96LL * a4;
  *(_QWORD*)(v4 + 3840) = *(_QWORD*)(a2 + 24);
  return v4 + 3784;
}

float BaseNX_calcSound3DVolume(__int64 a1, int* a2)
{

#pragma clang fp contract(off)
  void* v4;
  __int64 v5;
  int v6;
  int v7;
  _DWORD* v8;
  _DWORD* v9;
  float v10;
  float v11;
  __int64 v12;
  bool v13;
  int v14;
  unsigned int v15;
  int v16;
  char* v17;
  unsigned int v18;
  __int64 v19;
  _QWORD* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _DWORD* v36;
  int v37;
  float v38;
  __int64 v39;
  int v40;
  char* v41;
  __int64 v42;
  _QWORD* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  float v54;
  float v55;
  float v56;
  float v59;
  void* v60;
  struct {
    _BYTE v62[4];
    float v63;
    char gap16_[4];
    _DWORD v64[7];
  } v62_;
  struct {
    char* v65;
    char gap56_[4];
    int v66;
  } v65_;
  _DWORD v67[2];
  __int64 v68;
  __int64 v69;

  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = BaseNx_2a1b90(),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  nn_os_LockMutex_alt1((__int64)v4 + 840),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  v5 = GameRoutine_f5740(a2, &v69),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v5 != 0) {
    if (*(_DWORD*)(v5 + 132) != 0) {
      v6 = *(_DWORD*)(v5 + 32);
      v7 = *(_DWORD*)(v5 + 36);
    LABEL_7:
      v62_.v64[0] = v6;
      v62_.v64[1] = v7;
      v10 =
          (*(float (**)(__int64, _DWORD*))(*(_QWORD*)a1 + 528LL))(a1, v62_.v64),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
      goto LABEL_72;
    }
    v11 = *(float*)(v5 + 340);
    v12 = *(unsigned int*)(v5 + 336);
    v13 = (signed __int32)*(_DWORD*)(v5 + 456) > 0;
    if (v11 == 0x1.0000000000000p+0f) {
    LABEL_9:
      v10 = 0x1.e847e00000000p+19f;
      goto LABEL_72;
    }
    goto LABEL_57;
  }
  v8 = (_DWORD*)GameRoutine_f6360(a2, &v68),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v8 == nullptr) {
    v14 = a2[1];
    v67[0] = *a2;
    v67[1] = v14;
    v15 = (*(__int64 (**)(__int64, _DWORD*, int*, const char**))(
        *(_QWORD*)a1 + 176LL))(a1, v67, &v65_.v66, &v65_.v65),
    v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v15 != -1) {
      v16 = v65_.v66;
      v17 = v65_.v65;
      v18 = v15;
      if (v65_.v65 == nullptr ||
          (v19 = a1 + 4088LL * v65_.v66, v20 = *(_QWORD**)(v19 + 4056),
           v21 = *(__int64**)(v19 + 4048), v20 == v21)) {
      LABEL_36:
        v39 = 32;
        if (*(_BYTE*)(a1 + 4088LL * v16 + 4136) != 0) {
          v39 = 1584;
        }
        v29 = a1 + 4088LL * v16 + 56 + v39;
      }
      else {
        v22 = v20 - (__typeof__(v20))v21;
        while (1) {
          v24 = *v21++;
          v23 = v24;
          if (*(_BYTE*)(v24 + 1440) == 1) {
            v25 = strlen_alt1(v17),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
            v26 = *(_BYTE*)v23 >> 1;
            if ((*(_BYTE*)v23 & 1) != 0) {
              v26 = *(_QWORD*)(v23 + 8);
            }
            if (v25 == v26) {
              v27 = v25;
              if (v25 == -1) {
              LABEL_73:
                snd_a36650(),
                    v38 = COERCE_AS(__typeof__(v38),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
              }
              v28 = (*(_BYTE*)v23 & 1) != 0 ? *(_QWORD*)(v23 + 16) : v23 + 1;
              if (memcmp_alt1(v28, (__int64)v17, v27) == 0) {
                break;
              }
            }
          }
          if (--v22 == 0) {
            goto LABEL_36;
          }
        }
        v29 = v23 + 32;
      }
      BaseNx_278920(v29, (__int64)v62_.v64, v18),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
      v40 = v65_.v66;
      v41 = v65_.v65;
      if (v65_.v65 == nullptr ||
          (v42 = a1 + 4088LL * v65_.v66, v43 = *(_QWORD**)(v42 + 4056),
           v44 = *(__int64**)(v42 + 4048), v43 == v44)) {
      LABEL_53:
        v53 = 32;
        if (*(_BYTE*)(a1 + 4088LL * v40 + 4136) != 0) {
          v53 = 1584;
        }
        v52 = a1 + 4088LL * v40 + 56 + v53;
      }
      else {
        v45 = v43 - (__typeof__(v43))v44;
        while (1) {
          v47 = *v44++;
          v46 = v47;
          if (*(_BYTE*)(v47 + 1440) == 1) {
            v48 = strlen_alt1(v41),
            v38 =
                COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
            v49 = *(_BYTE*)v46 >> 1;
            if ((*(_BYTE*)v46 & 1) != 0) {
              v49 = *(_QWORD*)(v46 + 8);
            }
            if (v48 == v49) {
              v50 = v48;
              if (v48 == -1) {
                goto LABEL_73;
              }
              v51 = (*(_BYTE*)v46 & 1) != 0 ? *(_QWORD*)(v46 + 16) : v46 + 1;
              if (memcmp_alt1(v51, (__int64)v41, v50) == 0) {
                break;
              }
            }
          }
          if (--v45 == 0) {
            goto LABEL_53;
          }
        }
        v52 = v46 + 32;
      }
      BaseNx_278ce0(v52, (__int64)v62_.v62, v18),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
      v11 = v62_.v63;
      v12 = 1;
      v13 = false;
      if (v62_.v63 == 0x1.0000000000000p+0f) {
        goto LABEL_9;
      }
    LABEL_57:
      v10 = (*(float (**)(__int64, __int64, float))(*(_QWORD*)a1 + 536LL))(
          a1, v12, v11),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v10 >= 0x1.9000000000000p+6f && v13) {
        v54 = 0x1.0000000000000p+0f;
        v55 = 0x0.0p+0f;
        do {
          v54 = v54 - (float)(0x1.0000000000000p+0f - v11);
          v55 = v55 + 0x1.4000000000000p+2f;
        } while (v54 >= 0x1.47ae140000000p-7f);
        v10 = v55 + 0x1.0000000000000p+1f;
      }
      goto LABEL_72;
    }
  LABEL_35:
    v10 = 0x0.0p+0f;
    goto LABEL_72;
  }
  v9 = v8;
  if (v8[37] != 0) {
    v6 = v8[12];
    v7 = v8[13];
    goto LABEL_7;
  }
  if ((int)v8[138] < 1) {
    goto LABEL_35;
  }
  v30 = v8[118];
  v10 = 0x0.0p+0f;
  v31 = 0x1.0000000000000p+0f;
  v32 = 340;
  v33 = 0;
  do {
    v34 = *((_QWORD*)v9 + 68);
    v35 = v34 + v32;
    if (*(_DWORD*)(v34 + v32 - 208) != 0) {
      v36 = (_DWORD*)(v35 - 308);
      v37 = *(_DWORD*)(v35 - 304);
      v62_.v64[0] = *(_DWORD*)v36;
      v62_.v64[1] = v37;
      (*(void (**)(__int64, _DWORD*))(*(_QWORD*)a1 + 528LL))(a1, v62_.v64),
          v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      v31 = *((float*)v9 + 89);
      if (v31 <= -0x1.3880000000000p+13f) {
        v31 = *(float*)(v34 + v32);
      }
      v38 = (*(float (**)(__int64, float))(*(_QWORD*)a1 + 536LL))(a1, v31);
    }
    ++v33;
    v32 += 528;
    if (v38 > v10) {
      v10 = v38;
    }
  } while (v33 < (int)v9[138]);
  v56 = 0x1.0000000000000p+0f;
  if (v10 >= 0x1.9000000000000p+6f && v30 >= 1 && v31 < 0x1.0000000000000p+0f) {
    v59 = 0x0.0p+0f;
    do {
      v56 = v56 - (float)(0x1.0000000000000p+0f - v31);
      v59 = v59 + 0x1.4000000000000p+2f;
    } while (v56 >= 0x1.47ae140000000p-7f);
    v10 = v59 + 0x1.0000000000000p+1f;
  }
LABEL_72:
  v60 = BaseNx_2a1b90(),
  v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  nn_os_UnlockMutex_alt2((__int64)v60 + 840),
      v38 = COERCE_AS(__typeof__(v38), PSEUDO_REGISTER(float, "s0", "=w"));
  return v10;
}

void BaseNX_setSound3DMaxPriorityReduction(__int64 a1, int a2, float a3)
{
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  _BYTE v12[16];

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  if (a3 != 0x1.0000000000000p+0f) {
    Manager_1181f0((void*)((__int64)v12), *(_QWORD*)(a1 + 8), -1),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v6 = snd_fnd_WeakHandle_get((__int64)v12),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    GameRoutine_112ab0(v6 - 5592),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    Manager_1181f0((void*)((__int64)v12), *(_QWORD*)(a1 + 8), -1),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v7 = snd_fnd_WeakHandle_get((__int64)v12),
    v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    GameRoutine_112ad0(v7 - 5592),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
    v9 = v8;
    if (a2 == 1) {
      v10 = 0x0.0p+0f;
      do {
        v10 = v9 + v10;
      } while (powf_alt1(a3, v10 / v9) >= 0x1.47ae140000000p-7f);
    }
    else {
      v11 = 0x0.0p+0f;
      do {
        v11 = v8 + v11;
      } while ((float)((float)((float)((float)-v11 / v8) *
                               (float)(0x1.0000000000000p+0f - a3)) +
                       0x1.0000000000000p+0f) >= 0x1.47ae140000000p-7f);
    }
  }
}

float BaseNX_calcSound3DPan(__int64 a1, int* a2, float a3, float a4, float a5)
{

#pragma clang fp contract(off)
  void* v10;
  __int64 v11;
  long double v12;
  int v13;
  int v14;
  _DWORD* v15;
  _DWORD* v16;
  float v17;
  int v18;
  float v19;
  __int64 v20;
  float v21;
  int v22;
  unsigned int v23;
  int v24;
  char* v25;
  unsigned int v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _DWORD* v41;
  int v42;
  float v43;
  __int64 v44;
  int v45;
  char* v46;
  __int64 v47;
  _QWORD* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  void* v59;
  struct {
    _BYTE v61[4];
    float v62;
    char v63;
    char gap17_[3];
    _DWORD v64[7];
  } v61_;
  struct {
    char* v65;
    char gap56_[4];
    int v66;
  } v65_;
  _DWORD v67[2];
  __int64 v68;
  __int64 v69;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  v10 = BaseNx_2a1b90(),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  nn_os_LockMutex_alt1((__int64)v10 + 840),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  v11 = GameRoutine_f5740(a2, &v69),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v11 == 0) {
    v15 = (_DWORD*)GameRoutine_f6360(a2, &v68),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v15 != nullptr) {
      v16 = v15;
      if (v15[37] != 0) {
        v13 = v15[12];
        v14 = v15[13];
        goto LABEL_7;
      }
      if ((int)v15[138] >= 1) {
        v21 = 0x0.0p+0f;
        v38 = 340;
        v39 = 0;
        do {
          v40 = *((_QWORD*)v16 + 68) + v38;
          if (*(_DWORD*)(v40 - 208) != 0) {
            v41 = (_DWORD*)(v40 - 308);
            v42 = *(_DWORD*)(v40 - 304);
            v61_.v64[0] = *(_DWORD*)v41;
            v61_.v64[1] = v42;
            (*(void (**)(__int64, _DWORD*, float, float, float))(
                *(_QWORD*)a1 + 544LL))(a1, v61_.v64, a3, a4, a5),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v43 = COERCE_AS(__typeof__(v43),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            v43 = (*(float (**)(__int64))(*(_QWORD*)a1 + 552LL))(a1),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          ++v39;
          v38 += 528;
          if (v43 > v21) {
            v21 = v43;
          }
        } while (v39 < (int)v16[138]);
        goto LABEL_61;
      }
    }
    else {
      v22 = a2[1];
      v67[0] = *a2;
      v67[1] = v22;
      v23 = (*(__int64 (**)(__int64, _DWORD*, int*, const char**))(
          *(_QWORD*)a1 + 176LL))(a1, v67, &v65_.v66, &v65_.v65),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v23 != -1) {
        v24 = v65_.v66;
        v25 = v65_.v65;
        v26 = v23;
        if (v65_.v65 == nullptr ||
            (v27 = a1 + 4088LL * v65_.v66, v28 = *(_QWORD**)(v27 + 4056),
             v29 = *(__int64**)(v27 + 4048), v28 == v29)) {
        LABEL_38:
          v44 = 32;
          if (*(_BYTE*)(a1 + 4088LL * v24 + 4136) != 0) {
            v44 = 1584;
          }
          v37 = a1 + 4088LL * v24 + 56 + v44;
        }
        else {
          v30 = v28 - (__typeof__(v28))v29;
          while (1) {
            v32 = *v29++;
            v31 = v32;
            if (*(_BYTE*)(v32 + 1440) == 1) {
              v33 = strlen_alt1(v25),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v34 = *(_BYTE*)v31 >> 1;
              if ((*(_BYTE*)v31 & 1) != 0) {
                v34 = *(_QWORD*)(v31 + 8);
              }
              if (v33 == v34) {
                v35 = v33;
                if (v33 == -1) {
                LABEL_62:
                  snd_a36650(),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v43 = COERCE_AS(__typeof__(v43),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                }
                v36 = (*(_BYTE*)v31 & 1) != 0 ? *(_QWORD*)(v31 + 16) : v31 + 1;
                if (memcmp_alt1(v36, (__int64)v25, v35) == 0) {
                  break;
                }
              }
            }
            if (--v30 == 0) {
              goto LABEL_38;
            }
          }
          v37 = v31 + 32;
        }
        BaseNx_278920(v37, (__int64)v61_.v64, v26),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
        v45 = v65_.v66;
        v46 = v65_.v65;
        if (v65_.v65 == nullptr ||
            (v47 = a1 + 4088LL * v65_.v66, v48 = *(_QWORD**)(v47 + 4056),
             v49 = *(__int64**)(v47 + 4048), v48 == v49)) {
        LABEL_55:
          v58 = 32;
          if (*(_BYTE*)(a1 + 4088LL * v45 + 4136) != 0) {
            v58 = 1584;
          }
          v57 = a1 + 4088LL * v45 + 56 + v58;
        }
        else {
          v50 = v48 - (__typeof__(v48))v49;
          while (1) {
            v52 = *v49++;
            v51 = v52;
            if (*(_BYTE*)(v52 + 1440) == 1) {
              v53 = strlen_alt1(v46),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v43 = COERCE_AS(__typeof__(v43),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v54 = *(_BYTE*)v51 >> 1;
              if ((*(_BYTE*)v51 & 1) != 0) {
                v54 = *(_QWORD*)(v51 + 8);
              }
              if (v53 == v54) {
                v55 = v53;
                if (v53 == -1) {
                  goto LABEL_62;
                }
                v56 = (*(_BYTE*)v51 & 1) != 0 ? *(_QWORD*)(v51 + 16) : v51 + 1;
                if (memcmp_alt1(v56, (__int64)v46, v55) == 0) {
                  break;
                }
              }
            }
            if (--v50 == 0) {
              goto LABEL_55;
            }
          }
          v57 = v51 + 32;
        }
        BaseNx_278ce0(v57, (__int64)v61_.v61, v26),
            v17 =
                COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
            v43 =
                COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
        v20 = v61_.v63 == 1;
        v21 = 0x1.0000000000000p+0f;
        *(float*)&v12 = v61_.v62;
        if (v61_.v62 != 0x1.0000000000000p+0f) {
          goto LABEL_59;
        }
        goto LABEL_61;
      }
    }
    v21 = 0x0.0p+0f;
    goto LABEL_61;
  }
  if (*(_DWORD*)(v11 + 132) != 0) {
    v13 = *(_DWORD*)(v11 + 32);
    v14 = *(_DWORD*)(v11 + 36);
  LABEL_7:
    v61_.v64[0] = v13;
    v61_.v64[1] = v14;
    (*(void (**)(__int64, _DWORD*, float, float, float))(*(_QWORD*)a1 + 544LL))(
        a1, v61_.v64, a3, a4, a5),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
        v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  LABEL_60:
    v21 = v17;
    goto LABEL_61;
  }
  v18 = *(_DWORD*)(v11 + 336);
  v19 = *(float*)(v11 + 340);
  *(_QWORD*)&v12 = 0;
  if (v18 < -9999) {
    v20 = 1;
  }
  else {
    v20 = (unsigned int)v18;
  }
  if (v19 <= -0x1.3880000000000p+13f ||
      (v21 = 0x1.0000000000000p+0f, LODWORD(v12) = *(_DWORD*)(v11 + 340),
       v19 != 0x1.0000000000000p+0f)) {
  LABEL_59:
    v17 = (*(float (**)(__int64, __int64, long double, float, float, float))(
        *(_QWORD*)a1 + 552LL))(a1, v20, v12, a3, a4, a5),
    v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
    goto LABEL_60;
  }
LABEL_61:
  v59 = BaseNx_2a1b90(),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
  v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  nn_os_UnlockMutex_alt2((__int64)v59 + 840),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w")),
      v43 = COERCE_AS(__typeof__(v43), PSEUDO_REGISTER(float, "s0", "=w"));
  return v21;
}

float BaseNX_calcSound3DDistance(__int64 a1, int a2, float a3, float a4,
                                 float a5, float a6)
{
  float v6;
  void* v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  void* v23;
  _BYTE v25[20];
  float v26;
  float v27;
  float v28;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  v6 = 0x0.0p+0f;
  if ((*(_BYTE*)(a1 + 17) & 1) == 0) {
    v13 = BaseNx_2a1b90(),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    nn_os_LockMutex_alt1((__int64)v13 + 840),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    v6 = 0x1.0000000000000p+0f;
    if (a3 != 0x1.0000000000000p+0f) {
      Manager_1181f0((void*)((__int64)v25), *(_QWORD*)(a1 + 8), -1),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      v14 = snd_fnd_WeakHandle_get((__int64)v25),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      v15 = v14 != 0 ? v14 - 5592 : 0LL;
      (*(void (**)(__int64, float*, float*, float*))(
          *(_QWORD*)(v15 + 40) + 1032LL))(v15 + 40, &v28, &v27, &v26),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      v16 = snd_fnd_calcDistance_fec30(v28, v27, v26, a4, a5, a6),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      Manager_1181f0((void*)((__int64)v25), *(_QWORD*)(a1 + 8), -1),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      v17 = snd_fnd_WeakHandle_get((__int64)v25),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      GameRoutine_112ab0(v17 - 5592),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      v19 = v18;
      Manager_1181f0((void*)((__int64)v25), *(_QWORD*)(a1 + 8), -1),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      v20 = snd_fnd_WeakHandle_get((__int64)v25),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
      v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      GameRoutine_112ad0(v20 - 5592),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v16 >= v19) {
        v22 = v16 - v19;
        if (a2 == 1) {
          v6 = powf_alt1(a3, v22 / v21),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        else {
          v6 = (float)((float)((float)-v22 / v21) *
                       (float)(0x1.0000000000000p+0f - a3)) +
               0x1.0000000000000p+0f;
          if (v6 < 0x0.0p+0f) {
            v6 = 0x0.0p+0f;
          }
        }
      }
    }
    v23 = BaseNx_2a1b90(),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
    nn_os_UnlockMutex_alt2((__int64)v23 + 840),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s0", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return v6;
}

__int64 BaseNX_updateVoice(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
  if (v5 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v6 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)a1 + 232LL))(a1, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v6 = GameRoutine_27cb30(a1 + 4088LL * *(int*)(a2 + 8) + 2392, a2 + 32,
                            *(unsigned int*)(a2 + 24), *(_QWORD*)(a2 + 16), 0);
    v7 = v6;
  }
  else {
    v7 = 128;
  }
  v8 = GameRoutine_2a1b90(v6);
  nn_os_UnlockMutex(v8 + 840);
  return v7;
}

__int64 BaseNX_stopVoice(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
  if (v5 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v6 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)a1 + 232LL))(a1, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v6 = GameRoutine_27cb90(a1 + 4088LL * *(int*)(a2 + 8) + 2392, a2 + 32,
                            *(unsigned int*)(a2 + 24), *(_QWORD*)(a2 + 16), 0);
    v7 = v6;
  }
  else {
    v7 = 128;
  }
  v8 = GameRoutine_2a1b90(v6);
  nn_os_UnlockMutex(v8 + 840);
  return v7;
}

__int64 BaseNX_startVoice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;

  v6 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v6 + 840);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
  if (v7 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)a1 + 232LL))(a1, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v8 = GameRoutine_27cc40(a1 + 4088LL * *(int*)(a2 + 8) + 2392, a2 + 32,
                            *(unsigned int*)(a2 + 24), *(_QWORD*)(a2 + 16),
                            a3 + 8);
    v9 = v8;
  }
  else {
    v9 = 128;
  }
  v10 = GameRoutine_2a1b90(v8);
  nn_os_UnlockMutex(v10 + 840);
  return v9;
}

__int64 BaseNX_updateVoiceParam(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v5;
  int v6;
  unsigned int v7;
  __int64 v8;
  unsigned __int64 v9;
  int v10;
  float v11;
  char* v12;
  __int64 v13;
  unsigned __int64 i;
  float v15;
  __int64 v16;
  __int64 v17;
  void (***v18)(_QWORD, __int64);
  void (***v19)(_QWORD, __int64);
  void (**v20)(_QWORD, __int64);
  bool v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v23_;

  result =
      (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 232LL))(
          a1, *(unsigned int*)(a2 + 5768), *(unsigned int*)(a2 + 5772),
          *(_QWORD*)(a2 + 5776));
  if ((result & 1) != 0) {
    v5 = snd_g_memory_ptr[0];
    result = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 4352,
                                                 32);
    if (result != 0) {
      v6 = *(_DWORD*)(a2 + 5772);
      v7 = *(_DWORD*)(a2 + 5768);
      v8 = result;
      LODWORD(v23_.v23) = 0;
      if ((unsigned int)SoundArchivePlayer_27b0d0(
              a1 + 4088LL * v6 + 2392, result, (unsigned int*)&v23_.v23, 64,
              v7) != 0) {
        v9 = 0xFFFFFFFFLL;
      }
      else {
        v9 = (unsigned int)v23_.v23;
      }
      if ((v9 & 0x80000000) == 0) {
        v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 5664) + 88LL))(
            *(_QWORD*)(a2 + 5664));
        v23_.v24 = 0;
        v23_.v25 = 0;
        v23_.v23 = 0;
        if ((_DWORD)v9 != 0) {
          v11 = (float)v10;
          GameHr_164fe0(&v23_.v23, v9);
          v12 = (char*)(v8 + 4);
          v13 = 32;
          for (i = v9; i != 0; --i) {
            v15 = (float)*((unsigned int*)v12 - 1) / v11;
            GameRoutine_190200_alt1(v23_.v23 + v13 - 24, v12);
            v12 += 68;
            *(float*)(v23_.v23 + v13) = v15 * 0x1.f400000000000p+9f;
            v13 += 40;
          }
        }
        Voice_149b20(a2, &v23_.v23);
        *(_DWORD*)(a2 + 6032) = v9;
        v16 = v23_.v23;
        if (v23_.v23 != 0) {
          v17 = v23_.v23;
          if (v23_.v23 != v23_.v24) {
            v18 = (void (***)(_QWORD, __int64))(v23_.v24 - 40);
            v19 = (void (***)(_QWORD, __int64))(v23_.v24 - 40);
            do {
              v20 = *v19;
              v19 -= 5;
              (*v20)(v18, v17);
              v21 = v18 == (void (***)(_QWORD, __int64))v16;
              v18 = v19;
            } while (!v21);
            v17 = v23_.v23;
          }
          v22 = *v5;
          v23_.v24 = v16;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v22 + 24LL))(v22, v17);
        }
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v8);
    }
  }
  return result;
}

__int64 BaseNX_setAuxBus(__int64 a1, __int64 a2, __int64 a3)
{
  int v4;
  __int64 result;

  v4 = a2;
  result = SoundVoiceNX_14e360_alt2(a1, a2, a3);
  if (v4 >= 1) {
    *(_QWORD*)(result + 8LL * (unsigned int)v4 + 272) = a3 + 5136;
  }
  return result;
}

__int64 BaseNX_findArchive(__int64 a1, const char* a2)
{
  const char* v3;
  unsigned __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(a1 + 4137) == 1) {
    if (a2 != nullptr) {
      v3 = a2;
    }
    else {
      v3 = "noname";
    }
    v4 = strlen_alt1(v3);
    if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
      v5 = *(_QWORD*)(a1 + 64);
    }
    else {
      v5 = *(_BYTE*)(a1 + 56) >> 1;
    }
    if ((v4 & v5) == 0xFFFFFFFFFFFFFFFFLL) {
      snd_a36650();
    }
  }
  return 0;
}

__attribute__((swiftcall)) void BaseNX_getInfo(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  const char* result;
  int v6;
  int v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13;
  struct {
    __int64 v14;
    unsigned __int64 v15;
    __int64 v16;
  } v14_;

  *(_QWORD*)(a2 + 8) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)a2 = 0;
  v3 = 32;
  if (*(_BYTE*)(a1 + 4136) != 0) {
    v3 = 1584;
  }
  v4 = a1 + v3;
  result = (const char*)GameRoutine_278650(a1 + v3 + 56);
  if ((int)result >= 1) {
    v6 = (int)result;
    v7 = 0;
    v8 = snd_g_memory_ptr[0];
    do {
      result = (const char*)BaseNx_278690(v4 + 56);
      if (result != nullptr) {
        GameRoutine_190020_alt1(&v14_.v14, result);
        v9 = *(__int64**)(a2 + 8);
        if ((unsigned __int64)v9 >= *(_QWORD*)(a2 + 16)) {
          result =
              (const char*)GameRoutine_165260((__int64*)a2, (__int64)&v14_.v14);
          v12 = v14_.v14;
          *(_QWORD*)(a2 + 8) = result;
          if ((v12 & 1) != 0) {
            goto LABEL_14;
          }
        }
        else if ((v14_.v14 & 1) != 0) {
          GameRoutine_1905a40(*(__int64**)(a2 + 8), v14_.v16, v14_.v15);
          result = (const char*)(v9 + 3);
          v13 = v14_.v14;
          *(_QWORD*)(a2 + 8) = v9 + 3;
          if ((v13 & 1) != 0) {
          LABEL_14:
            result = (const char*)(*(__int64 (**)(__int64, __int64))(
                *(_QWORD*)*v8 + 24LL))(*v8, v14_.v16);
          }
        }
        else {
          v10 = v14_.v14;
          v11 = v14_.v16;
          result = (const char*)(v9 + 3);
          v9[1] = v14_.v15;
          v9[2] = v11;
          *v9 = v10;
          LOBYTE(v10) = v14_.v14;
          *(_QWORD*)(a2 + 8) = v9 + 3;
          if ((v10 & 1) != 0) {
            goto LABEL_14;
          }
        }
      }
      ++v7;
    } while (v6 != v7);
  }
  {
    result;
    return;
  }
}

__int64

snd_target_BaseNX_closeAdditionalArchive_lambda0_Invoke_166f40(__int64 a1,
                                                               __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v7_.v8 = v7_.v7;
  v7_.v7[0] = GameData_1f66740;
  v7_.v7[1] = v2;
  *(__n128*)&v4 = Slot_137b40(v3, (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(void*))(*v7_.v8 + v6))(v7_.v8);
}

__int64 snd_target_BaseNX_closeAdditionalArchive_lambda0_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result =
      BaseNx_278770(*(_QWORD*)(a1 + 8) + 32LL, *(unsigned int*)(*a2 + 5768));
  if ((_DWORD)result != -1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 264LL))(v2);
  }
  return result;
}

__int64 snd_target_BaseNX_closeAdditionalArchiveForCache_lambda0_Invoke_167190(
    __int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v7_.v8 = v7_.v7;
  v7_.v7[0] = GameData_1f66840;
  v7_.v7[1] = v2;
  *(__n128*)&v4 = Slot_137b40(v3, (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(void*))(*v7_.v8 + v6))(v7_.v8);
}

__int64 snd_target_BaseNX_closeAdditionalArchiveForCache_lambda0_Invoke(
    __int64 result, unsigned int** a2)
{
  unsigned int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = *((_QWORD*)*a2 + 722);
  if (v3 != 0) {
    v4 = *(_QWORD*)(result + 8);
    result = strlen(*((_QWORD*)*a2 + 722));
    v6 = *(_BYTE*)v4 >> 1;
    if ((*(_BYTE*)v4 & 1) != 0) {
      v6 = *(_QWORD*)(v4 + 8);
    }
    if (result == v6) {
      v7 = result;
      if (result == -1) {
        GameRoutine_a36650(-1, v5);
      }
      if ((*(_BYTE*)v4 & 1) != 0) {
        v8 = *(_QWORD*)(v4 + 16);
      }
      else {
        v8 = v4 + 1;
      }
      result = memcmp(v8, v3, v7);
      if ((_DWORD)result == 0) {
        result = BaseNx_278770(v4 + 32, v2[1442]);
        if ((_DWORD)result != -1) {
          return (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 264LL))(v2);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
