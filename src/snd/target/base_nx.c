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

__int64 BaseNX_1572a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 SystemTickEv;
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
  long double v16;
  __int64 v17;
  __int64 v18;
  long double v19;
  char* v20;
  char* v21;
  __int64 v22;
  _BYTE v23[64];

  v1 = *(_QWORD*)(a1 + 8);
  v3 = nn_os_InitializeTimerEvent(v23, 1);
  SystemTickEv = nn_os_GetSystemTick(v3);
  v22 = SystemTickEv;
  if ((*(_BYTE*)(a1 + 4464) & 1) == 0) {
    v6 = 0;
    v7 = snd_s_target_ptr;
    do {
      v8 = nn_os_GetSystemTick(SystemTickEv);
      v9 = nn_os_ConvertToTimeSpan(v8 - v22);
      v10 = v6;
      v11 = v9 / 1000;
      v12 = v9 / 1000;
      if (v9 >= 0x1F3FFFFFFFFC18LL) {
        v10 = v6 - v11;
        v22 = nn_os_GetSystemTick(v9);
        v12 = 0;
      }
      v13 = v11 - v6;
      v14 = v12 + 16667;
      if (v13 <= 166669) {
        v6 = v10;
      }
      else {
        v6 = v14;
      }
      v15 = GameRoutine_118fe0(v1);
      GameRoutine_190ac0(v15);
      if ((*(_BYTE*)(v1 + 8) & 1) == 0 && (GameRoutine_119050() & 1) != 0) {
        if (v13 <= 166669) {
          v17 = v13;
        }
        else {
          v17 = 16667;
        }
        if (v17 >= 16667) {
          v18 = v17 + 16667;
          do {
            LODWORD(v16) = 1099257348;
            snd_Manager_updateVoice((__int64**)v1, v16);
            Crc32List_1170c0(v1);
            Crc32List_1168a0((__int64**)v1);
            *(__n128*)&v19 = Crc32List_117a00((_QWORD*)v1);
            if (((*(__int64 (**)(__int64, _QWORD, long double))(
                     *(_QWORD*)*v7 + 1296LL))(*v7, 0, v19) &
                 1) != 0) {
              v20 = (char*)BaseNx_2a1b90();
              nn_os_LockMutex(v20 + 840);
              SoundArchivePlayer_27a160(a1 + 2392);
              v21 = (char*)BaseNx_2a1b90();
              *(__n128*)&v16 = nn_os_UnlockMutex(v21 + 840);
            }
            v6 += 16667;
            v18 -= 16667;
          } while (v18 > 33333);
        }
        GameRoutine_119060();
      }
      nn_os_StartOneShotTimerEvent(v23, 8333000);
      SystemTickEv = nn_os_WaitTimerEvent(v23);
    } while (*(_BYTE*)(a1 + 4464) != 1);
  }
  return nn_os_FinalizeTimerEvent(v23);
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
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  void* v18;
  char v19;
  __int64 v20;

  if (*(_BYTE*)(result + 16) == 1) {
    v1 = result + 4096;
    v2 = (_QWORD*)result;
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
    nn_os_CreateThread_1a0a7e0(v7, GameData_2134928[0], v2, v6, 0x10000, v9,
                               v10);
    nn_os_SetThreadName(v2[556], "SND_Load");
    nn_os_StartThread(v2[556]);
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
    nn_os_CreateThread_1a0a7e0(v14, GameData_2134930, v2, v13, 0x40000, v15,
                               v16);
    nn_os_SetThreadName(v2[559], "SND_Update");
    nn_os_StartThread(v2[559]);
    v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 328LL))(*v8);
    v18 = SoundVoiceNX_14e360_alt1();
    BaseNx_28aca0(v18, v17, 0);
    v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 408LL))(*v8);
    v20 = nn_audio_SetDeviceOutputVolumeAutoTuneModeEnabled(v19 & 1);
    result = nn_os_GetSystemTick(v20);
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
  char* v11;
  char* v12;
  char* v13;
  char v14;
  char* v15;
  char* v16;
  char* v17;
  char* v18;
  __int64 v19;
  char* v20;
  char* v21;
  char* v22;
  char v23;
  char* v24;
  char* v25;
  char* v26;
  char* v27;
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
    v11 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex(v11 + 1720);
    nn_audio_RequestDetachMemoryPool(v1 + 4240);
    v12 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt1(v12 + 1720);
    while (1) {
      v13 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_LockMutex(v13 + 1720);
      v14 = nn_audio_IsMemoryPoolAttached(v1 + 4240);
      v15 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_UnlockMutex_alt1(v15 + 1720);
      if ((v14 & 1) == 0) {
        break;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 56LL))(v1, 5);
    }
    v16 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex(v16 + 1720);
    v17 = (char*)SoundVoiceNX_14e360_alt1();
    nn_audio_ReleaseMemoryPool(v17 + 24, v1 + 4240);
    v18 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt1(v18 + 1720);
    v19 = *(_QWORD*)(v1 + 4288);
    *(_QWORD*)(v1 + 4288) = 0;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    }
    nn_mem_StandardAllocator_Finalize_alt1(v1 + 4368);
    v20 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex(v20 + 1720);
    nn_audio_RequestDetachMemoryPool(v1 + 4232);
    v21 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt1(v21 + 1720);
    while (1) {
      v22 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_LockMutex(v22 + 1720);
      v23 = nn_audio_IsMemoryPoolAttached(v1 + 4232);
      v24 = (char*)SoundVoiceNX_14e360_alt1();
      nn_os_UnlockMutex_alt1(v24 + 1720);
      if ((v23 & 1) == 0) {
        break;
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)v1 + 56LL))(v1, 5);
    }
    v25 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_LockMutex(v25 + 1720);
    v26 = (char*)SoundVoiceNX_14e360_alt1();
    nn_audio_ReleaseMemoryPool(v26 + 24, v1 + 4232);
    v27 = (char*)SoundVoiceNX_14e360_alt1();
    nn_os_UnlockMutex_alt1(v27 + 1720);
    v28 = *(_QWORD*)(v1 + 4280);
    *(_QWORD*)(v1 + 4280) = 0;
    if (v28 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
    }
    nn_mem_StandardAllocator_Finalize_alt1(v1 + 4296);
    v29 = SoundHeap_27bef0_alt1(v1 + 4152);
    result = BaseNx_27d9e0_alt1(v29);
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
  __int64 v8;
  __int64 v9;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  _BYTE v19[16];
  __int64 v20;
  __int64 v21;

  ConstructString_1901f0(v19);
  v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0(v19, "%s%s", v7, a2);
  v8 = GameRoutine_190240(v19);
  if ((unsigned int)nn_fs_OpenDirectory(&v21, v8, 1) != 0) {
    LODWORD(v9) = 0;
    if ((v19[0] & 1) != 0) {
    LABEL_3:
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v20);
    }
  }
  else {
    v11 = (char*)GameRoutine_6511d0(0xC400u);
    memset(v11, 0, 50176, v12, v13, v14);
    v15 = nn_fs_ReadDirectory(&v18, v11, v21, 64);
    nn_fs_CloseDirectory(v21);
    LODWORD(v9) = 0;
    if (v15 == 0) {
      v9 = v18;
      if (v18 > a4) {
        v18 = a4;
        v9 = a4;
      }
      if (v9 >= 1) {
        v16 = v9;
        v17 = v11;
        do {
          strcpy(a3, v17);
          v17 += 784;
          a3 += 256;
          --v16;
        } while (v16 != 0);
      }
    }
    GameRoutine_651310(v11);
    if ((v19[0] & 1) != 0) {
      goto LABEL_3;
    }
  }
  return (unsigned int)v9;
}

__int64 BaseNX_loadDataByLabel(__int64 a1, const char* a2, __int64 a3, int a4)
{
  const char* v7;
  __int64 v8;
  __int64 v9;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  _BYTE v19[16];
  __int64 v20;
  __int64 v21;

  ConstructString_1901f0(v19);
  v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0(v19, "%s%s", v7, a2);
  v8 = GameRoutine_190240(v19);
  if ((unsigned int)nn_fs_OpenDirectory(&v21, v8, 2) != 0) {
    LODWORD(v9) = 0;
    if ((v19[0] & 1) != 0) {
    LABEL_3:
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v20);
    }
  }
  else {
    v11 = (char*)GameRoutine_6511d0(0xC400u);
    memset(v11, 0, 50176, v12, v13, v14);
    v15 = nn_fs_ReadDirectory(&v18, v11, v21, 64);
    nn_fs_CloseDirectory(v21);
    LODWORD(v9) = 0;
    if (v15 == 0) {
      v9 = v18;
      if (v18 > a4) {
        v18 = a4;
        v9 = a4;
      }
      if (v9 >= 1) {
        v16 = v9;
        v17 = v11;
        do {
          strcpy(a3, v17);
          v17 += 784;
          a3 += 256;
          --v16;
        } while (v16 != 0);
      }
    }
    GameRoutine_651310(v11);
    if ((v19[0] & 1) != 0) {
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
