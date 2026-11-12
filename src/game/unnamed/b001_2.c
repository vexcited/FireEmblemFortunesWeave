#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

#include "decomp/pseudo_types.h"

extern _DWORD GameData_1b0c5d0[6];
extern _UNKNOWN GameData_1b0f037;
extern _DWORD GameData_1b0f228[3];
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_1f7f3b0[])();
extern __int64 (*GameData_1f7f618[])();
extern __int64 (*GameData_1f7f658[])();
extern __int64 (*GameData_1f7f6c8[])();
extern __int64 (*GameData_1f7f7d0[])();
extern int* GameData_21349b8;
extern __int64 GameData_2135080[3];
extern char* GameData_21350a0[41];
extern char* GameData_21350a8[40];
extern __int64* GameData_21350b0[4];
extern __int64* GameData_21350b8[3];
extern __int64* GameData_21350c0[2];
extern __int64* GameData_21350c8;
extern int* GameData_21350d0[2];
extern int* GameData_21350d8;
extern char* GameData_21350e0[33];
extern char* GameData_21350e8[32];
extern int* GameData_21350f0[2];
extern int* GameData_21350f8;
extern char* GameData_2135100[29];
extern char* GameData_2135108[28];
extern char* GameData_2135110[27];
extern char* GameData_2135118[26];
extern char* GameData_2135120[25];
extern char* GameData_2135128[24];
extern char* GameData_2135130[23];
extern char* GameData_2135138[22];
extern char* GameData_2135140[21];
extern char* GameData_2135148[20];
extern char* GameData_2135150[19];
extern char* GameData_2135158[18];
extern char* GameData_2135160[17];
extern char* GameData_2135168[16];
extern char* GameData_2135170[15];
extern char* GameData_2135178[14];
extern char* GameData_2135180[13];
extern char* GameData_2135188[12];
extern int* GameData_2135190[8];
extern int* GameData_2135198[7];
extern int* GameData_21351a0[6];
extern __int64* GameData_21351a8[4];
extern __int64* GameData_21351b0[3];
extern __int64* GameData_21351b8[2];
extern __int64* GameData_21351c0;
extern int* GameData_21351c8;
extern char* GameData_21351d0[3];
extern int* GameData_21351d8[2];
extern int* GameData_21351e0;
extern _UNKNOWN* GameData_21351e8;
extern char* GameData_21351f0[2];
extern __int64* GameData_2135250;
extern __int64* GameData_2135318[4];
extern __int64* GameData_2135320[3];
extern __int64* GameData_2135330;
extern __int64 GameData_2135390[3];
extern __int64 GameData_21353a0;
extern __int64* GameData_21353b0[4];
extern char GameData_2140b6d;
extern char GameData_2140b6e;
extern char GameData_2140b81;
extern char GameData_2140b83;
extern int GameData_2140b88;
extern char GameData_219d028;
extern char GameData_219d02a;
extern __int64 GameData_219d068;
extern __int64 GameData_219d070;
extern char GameData_219d092;
extern char GameData_219d093;
extern _UNKNOWN GameData_219d0d0;
extern _UNKNOWN GameData_219d120;
extern _UNKNOWN GameData_219d128;
__int64 GameRoutine_14e360(_QWORD, _QWORD);
__int64 GameRoutine_17e6db0(_QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09bc0(_QWORD);
__int64 GameRoutine_1a09c20(_QWORD);
__int64 GameRoutine_1a09c30(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a080(_QWORD);
__int64 GameRoutine_1a0a0a0(_QWORD);
__int64 GameRoutine_1a0a0b0(_QWORD);
__int64 GameRoutine_1a0a150(_QWORD);
__int64 GameRoutine_1a0a170(_QWORD);
__int64 GameRoutine_1a0a1a0(_QWORD);
__int64 GameRoutine_1a0a1b0(_QWORD);
__int64 GameRoutine_1a0a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a590(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bd20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bd30(_QWORD);
__int64 GameRoutine_1a0c2c0(_QWORD);
__int64 GameRoutine_1a0c2e0(_QWORD);
__int64 GameRoutine_1a0c2f0(_QWORD);
__int64 GameRoutine_1a0c300(_QWORD);
__int64 GameRoutine_1a0c340(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0c350(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_1a0c360(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0c370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2660e0(__int64, _QWORD*, __int64, __int64, _DWORD*);
float GameRoutine_2663e0(_QWORD*, __int64, __int64, float*, char);
float GameRoutine_267760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2785c0(_QWORD);
__int64 GameRoutine_278770(_QWORD, _QWORD);
__int64 GameRoutine_278780(_QWORD);
_QWORD* GameRoutine_278890(__int64);
__int64 GameRoutine_278920(__int64, __int64, unsigned int);
__int64 GameRoutine_2789b0(__int64, __int64, unsigned int);
__int64 GameRoutine_278b50(__int64, unsigned int, __int64);
__int64 GameRoutine_278bd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_278c70(__int64, __int64);
__int64 GameRoutine_278d70(__int64, __int64, unsigned int);
__int64 GameRoutine_278e00(__int64, unsigned int, __int64);
__int64 GameRoutine_278e80(__int64, unsigned int, __int64);
__int64 GameRoutine_278f00(__int64, __int64, unsigned int);
__int64 GameRoutine_278f90(__int64, __int64, __int64);
__int64 GameRoutine_279010(_QWORD, _QWORD);
__int64 GameRoutine_279020(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_27cf80(__int64);
__int64 GameRoutine_27d700(_QWORD, _QWORD);
__int64 GameRoutine_280190(__int64 result);
__int64 GameRoutine_2804d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2806e0(__int64, int);
__int64 GameRoutine_2828d0(__int64);
__int64 GameRoutine_2829c0(__int64, __int64);
_QWORD* GameRoutine_283000(_QWORD* result, __int64);
__int64 GameRoutine_2830f0(__int64, __int64, unsigned int);
__int64 GameRoutine_283140(__int64);
__int64 GameRoutine_283160(__int64, _QWORD*, unsigned int);
char* GameRoutine_2845c0(__int64, unsigned int);
__int64 GameRoutine_284600(_QWORD);
char* GameRoutine_284610(__int64, unsigned int);
char* GameRoutine_284650(__int64, unsigned int);
__int64 GameRoutine_284690(_QWORD);
char* GameRoutine_2846a0(__int64, unsigned int);
__int64 GameRoutine_2846e0(_QWORD);
__int64 GameRoutine_284730(_QWORD);
char* GameRoutine_284740(__int64, unsigned int);
__int64 GameRoutine_284780(_QWORD);
__int64 GameRoutine_2847c0(_QWORD);
__int64 GameRoutine_284950(__int64);
__int64 GameRoutine_284980(_QWORD);
__int64 GameRoutine_284b10(_QWORD);
__int64 GameRoutine_284b50(__int64);
__int64 GameRoutine_284bb0(__int64);
__int64 GameRoutine_284bd0(__int64);
__int64 GameRoutine_284bf0(__int64);
__int64 GameRoutine_284c20(__int64);
__int64 GameRoutine_284c50(__int64);
__int64 GameRoutine_284c80(__int64);
__int64 GameRoutine_284ef0(__int64);
__int64 GameRoutine_284fc0(__int64);
__int64 GameRoutine_285150(__int64);
__int64 GameRoutine_285170(__int64);
__int64 GameRoutine_286210(_QWORD);
__int64 GameRoutine_286270(__int64, unsigned int, __int64, unsigned int,
                           __int64);
__int64 GameRoutine_2864b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286600(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286700(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2868e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286b20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286c40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286d50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_286ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287040(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287180(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287460(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287690(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287a60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287ba0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287cc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287dc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_287f00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288830(_QWORD);
__int64 GameRoutine_288860(__int64);
__int64 GameRoutine_288890(_QWORD);
__int64 GameRoutine_2888c0(_QWORD);
__int64 GameRoutine_2888d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288a60(_QWORD);
__int64 GameRoutine_288ab0(__int64 result);
__int64 GameRoutine_288ae0(_QWORD);
__int64 GameRoutine_288b30(_QWORD);
__int64 GameRoutine_288b50(_QWORD, _QWORD);
__int64 GameRoutine_288bc0(_QWORD, _QWORD);
__int64 GameRoutine_288bf0(_QWORD, _QWORD);
__int64 GameRoutine_288c50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288fc0(_QWORD);
__int64 GameRoutine_289000(_QWORD);
__int64 GameRoutine_289060(_QWORD, _QWORD);
__int64 GameRoutine_289080(_QWORD, _QWORD);
__int64 GameRoutine_289090(void);
bool GameRoutine_2890a0(unsigned int);
__int64 GameRoutine_2890f0(int);
__int64 GameRoutine_289110(_QWORD);
__int64 GameRoutine_289120(_QWORD, _QWORD);
__int64 GameRoutine_2891a0(__int64, __int64);
__int64 GameRoutine_2891c0(__int64, __int64);
__int64 GameRoutine_2891e0(_QWORD);
__int64 GameRoutine_289600(_QWORD, _QWORD);
__int64 GameRoutine_289830(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_289840(_QWORD, _QWORD);
__int64 GameRoutine_289910(_QWORD, _QWORD);
__int64 GameRoutine_289c60(_QWORD);
__int64 GameRoutine_289d60(_QWORD);
__int64 GameRoutine_289e00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_289ff0(_QWORD, _QWORD);
__int64 GameRoutine_28a040(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _DWORD, _DWORD, _DWORD);
__int64 GameRoutine_28ad80(_QWORD);
__int64 GameRoutine_28b750(_QWORD, _QWORD);
__int64 GameRoutine_28bb30(_QWORD);
__int64 GameRoutine_28bb40(_QWORD, _QWORD);
__int64 GameRoutine_28bc60(__int64 result);
__int64 GameRoutine_28be40(_QWORD);
__int64 GameRoutine_28be60(_QWORD);
__int64 GameRoutine_28bec0(_QWORD);
__int64 GameRoutine_28bed0(_QWORD);
__int64 GameRoutine_28bee0(_QWORD, _QWORD);
__int64 GameRoutine_28bf20(_QWORD, _QWORD);
__int64 GameRoutine_28c000(_QWORD, _QWORD);
__int64 GameRoutine_28c0d0(_QWORD);
__int64 GameRoutine_28c0f0(_QWORD);
__int64 GameRoutine_28c110(_QWORD);
float GameRoutine_28c140(_QWORD);
__int64 GameRoutine_28c170(_QWORD);
__int64 GameRoutine_28c1c0(_QWORD);
__int64 GameRoutine_28c200(_QWORD);
__int64 GameRoutine_28c240(_QWORD);
__int64 GameRoutine_28c2c0(_QWORD);
__int64 GameRoutine_28c800(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_28db20(_QWORD);
__int64 GameRoutine_28db40(_QWORD);
__int64 GameRoutine_28deb0(void);
__int64 GameRoutine_28dff0(void);
__int64 GameRoutine_290ad0(__int64);
__int64 GameRoutine_2910d0(_QWORD);
__int64 GameRoutine_291140(_QWORD);
__int64 GameRoutine_291170(_QWORD, _QWORD);
__int64 GameRoutine_291300(_QWORD);
__int64 GameRoutine_291340(_QWORD);
__int64 GameRoutine_2914a0(_QWORD);
__int64 GameRoutine_293de0(void);
__int64 GameRoutine_294440(void);
__int64 GameRoutine_297280(_QWORD);
__int64 GameRoutine_2a06f0(_QWORD);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0de0(_QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a0eb0(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 GameRoutine_2a18e0(_QWORD);
__int64 GameRoutine_2a1970(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_2a1c90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1d30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1de0(_QWORD);
__int64 GameRoutine_2a1e60(_QWORD);
__int64 GameRoutine_2a1fa0(_QWORD, _QWORD);
__int64 GameRoutine_2a2020(_QWORD, _QWORD);
__int64 GameRoutine_2a2ab0(_QWORD);
__int64 GameRoutine_2a2ae0(_QWORD);
__int64 GameRoutine_2a2c10(_QWORD, _QWORD);
__int64 GameRoutine_2a2c20(_QWORD);
__int64 GameRoutine_2a2c60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a2f90(_QWORD);
__int64 GameRoutine_2a3180(_QWORD);
__int64 GameRoutine_2a3210(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_2a3370(_QWORD);
__int64 GameRoutine_2a3520(_QWORD, _QWORD);
__int64 GameRoutine_2a36e0(_QWORD);
__int64 GameRoutine_2a3810(_QWORD);
__int64 GameRoutine_2a64a0(_QWORD, _QWORD);
__int64 GameRoutine_2a64c0(_QWORD);
__int64 GameRoutine_2a6880(_QWORD);
__int64 GameRoutine_2a6c20(_QWORD);
__int64 GameRoutine_2a6df0(_QWORD);
__int64 GameRoutine_2a6e90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a6ee0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a7020(_QWORD);
__int64 GameRoutine_2a7880(_QWORD);
__int64 GameRoutine_2aa100(_QWORD);
__int64 GameRoutine_2aa190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2aa1e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2aa300(_QWORD);
__int64 GameRoutine_2aa920(_QWORD, _QWORD);
__int64 GameRoutine_2ab7a0(_QWORD);
__int64 GameRoutine_2ac830(_QWORD, _QWORD);
__int64 GameRoutine_2ac9a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b4be0(_QWORD);
__int64 GameRoutine_2b4ec0(_QWORD);
__int64 GameRoutine_2b55d0(_QWORD, _QWORD);
__int64 GameRoutine_2b5960(_QWORD);
__int64 GameRoutine_2b5a60(_QWORD);
__int64 GameRoutine_2b6e40(_QWORD, _QWORD);
__int64 GameRoutine_2b71e0(_QWORD, _QWORD);
__int64 GameRoutine_2b7850(_QWORD, _QWORD, long double, long double,
                           long double);
__int64 GameRoutine_2b78f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b8480(_QWORD, _QWORD, _QWORD);
_BYTE* BaseNx_2aa1e0(_BYTE* result, _QWORD*, unsigned __int64, unsigned int*);
_BYTE* BaseNx_2aa300(_BYTE* result);
_QWORD* BaseNx_278890(__int64);
_QWORD* BaseNx_283000(_QWORD* result, __int64);
_QWORD* BaseNx_2ac830(_QWORD* result, __int64);
__int64 BaseNx_278770(_QWORD, _QWORD);
__int64 BaseNx_278920(__int64, __int64, unsigned int);
__int64 BaseNx_2789b0(__int64, __int64, unsigned int);
__int64 BaseNx_278b50(__int64, unsigned int, __int64);
__int64 BaseNx_278d70(__int64, __int64, unsigned int);
__int64 BaseNx_278e00(__int64, unsigned int, __int64);
__int64 BaseNx_278e80(__int64, unsigned int, __int64);
__int64 BaseNx_2830f0(__int64, __int64, unsigned int);
__int64 BaseNx_283140(__int64);
__int64 BaseNx_283160(__int64, _QWORD*, unsigned int);
__int64 BaseNx_286270(_QWORD*, unsigned int, __int64, unsigned int, __int64);
__int64 BaseNx_286940(_QWORD*, __int64, __int64, char, __int64);
__int64 BaseNx_286c40(_QWORD*, unsigned int, __int64, __int64, char);
__int64 BaseNx_287780(_QWORD*, unsigned int, __int64);
__int64 BaseNx_287cc0(_QWORD*, __int64, char);
__int64 BaseNx_287dc0(_QWORD*, __int64, unsigned int);
__int64 BaseNx_2888d0(__int64 result, __int64, char);
__int64 BaseNx_288ae0(__int64 result);
__int64 BaseNx_2890f0(int);
__int64 BaseNx_2891a0();
__int64 BaseNx_2891c0();
__int64 BaseNx_2891e0(__int64 result, char, char, char, char, char, char, int,
                      int, int, int);
__int64 BaseNx_2a06f0(__int64 result);
__int64 BaseNx_2a0820(__int64, __int64, __int64);
__int64 BaseNx_2a0de0(__int64, int);
__int64 BaseNx_2a0e80(__int64, _QWORD*);
__int64 BaseNx_2a1970(__int64, __int64, int);
__int64 BaseNx_2a1980(__int64, __int64, __int64, __int64, __int64);
__int64 BaseNx_2a6e90(__int64, int, unsigned int*);
__int64 BaseNx_2a6e90_alt1(__int64, int, __int64) __asm__("BaseNx_2a6e90");
__int64 BaseNx_2a6ee0(__int64 result, __int64, __int64, int, unsigned int*);
__int64 BaseNx_2a7020(__int64 result);
__int64 BaseNx_2aa190(__int64, int, unsigned int*);
__int64 BasicSoundPlayer_Unknown3(__int64);
__int64 BasicSound_2804d0(__int64 result, char, int);
__int64 BasicSound_2806e0(__int64, int);
__int64 FinalMix_2b5960(_QWORD*);
__int64 FinalMix_2b5a60(_QWORD*);
__int64 GameHr_289e00(__int64, __int64, char);
__int64 GameHr_28ad80(__int64 result);
__int64 GameRoutine_288830_alt1(__int64) __asm__("GameRoutine_288830");
__int64 GameRoutine_288890_alt1(__int64) __asm__("GameRoutine_288890");
__int64 GameRoutine_289830_alt1(__int64, unsigned int,
                                unsigned int) __asm__("GameRoutine_289830");
__int64 GameRoutine_2a1e60_alt1(__int64) __asm__("GameRoutine_2a1e60");
__int64 GameRoutine_2a2020_alt1(__int64, int) __asm__("GameRoutine_2a2020");
__int64 GameRoutine_2a2c20_alt1(__int64) __asm__("GameRoutine_2a2c20");
__int64 GameRoutine_2a2c60_alt1(__int64, __int64,
                                unsigned int) __asm__("GameRoutine_2a2c60");
__int64 GameRoutine_2b8480_alt1(__int64 result) __asm__("GameRoutine_2b8480");
__int64 SequenceNoteOnCallback_28bb40(__int64 result, __int64);
__int64 SequenceNoteOnCallback_28bc60(__int64 result);
__int64 SequenceNoteOnCallback_28be40(__int64);
__int64 SequenceSoundPlayer_28dff0(__int64);
__int64 SequenceSoundPlayer_291170(__int64 result, __int64);
__int64 SoundArchivePlayer_289d60(__int64);
__int64 SoundThread_2a1c90(__int64, int, __int64, __int64, unsigned int,
                           unsigned int);
__int64 SoundThread_2a1de0(__int64 result);
__int64 TaskThread_2a3180(__int64 result);
__int64 TaskThread_2a3210(__int64, unsigned int, __int64, __int64, unsigned int,
                          unsigned int, unsigned int);
__int64 nn_atk_detail_289600(__int64, __int64);
__int64 nn_atk_detail_289840(__int64, __int64);
__int64 nn_atk_detail_28a040(__int64, __int64, __int64, __int64, __int64,
                             unsigned __int64, __int64, __int64);
__int64 nn_atk_detail_2a36e0();
__int64 nn_audio_AcquireMemoryPool(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_GetMemoryPoolState(_QWORD);
__int64 nn_audio_ReadCircularBufferSink(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_RequestAttachMemoryPool(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a080(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_os_TryWaitEvent(_QWORD);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_util_ReferSymbol(__int64);
bool BaseNx_2890a0(unsigned int);
bool BaseNx_2ac9a0(__int64, __int64, unsigned int, unsigned int);
extern int* snd_target_g_activeVoiceCount_ptr;
unsigned __int64 BaseNx_287040(__int64, __int64, __int64, unsigned __int64, int,
                               unsigned __int64);
unsigned __int64 GameHr_27cf80(__int64);
unsigned __int64 nn_atk_detail_289910(__int64, __int64);
unsigned __int64 nn_atk_detail_289ff0(__int64, __int64);
void* BaseNx_2a1860();
void* BaseNx_2a18e0();
void* BaseNx_2a1b90();
void* BaseNx_2a6df0();
void* BaseNx_2aa100();
void* SequenceSoundPlayer_2910d0();
void* SoundVoiceNX_14e360();
void* TaskThread_2a2ae0();
void* TaskThread_2a3370();
void SoundThread_2a1d30(__int64, __int64, unsigned __int64, char, char, char);
void nn_atk_detail_28db20();
void nn_detail_UnexpectedDefaultImpl();
__int64 GameHr_27d070(_DWORD* a1, __int64 a2, __int64* a3);
__int64 GameHr_27d700(__int64 result, __int64 a2);
_QWORD* GameHr_27d7f0(_QWORD* result, __int64 a2, __int64* a3);
void GameHr_27d9e0();
__int64 GameHr_2864b0(_QWORD* a1, unsigned int a2, __int64 a3, char a4,
                      __int64 a5);
__int64 GameHr_286ec0(_QWORD* a1, __int64 a2, __int64 a3, unsigned __int64 a4);
__int64 GameHr_287180(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 GameHr_287460(_QWORD* a1, unsigned int a2, __int64 a3);
__int64 GameHr_287690(__int64 result, unsigned int a2, __int64 a3);
__int64 GameHr_287a60(_QWORD* a1, unsigned int a2, char a3);
__int64 GameHr_287ba0(_QWORD* a1, __int64 a2, char a3);
__int64 GameHr_288010(_QWORD* a1, unsigned int a2);
__int64 GameHr_2899c0(__int64 result);
__int64 GameHr_289a90(__int64 a1, unsigned int a2);
__int64 GameHr_289c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5);
__int64 GameHr_28aca0(__int64 result, int a2, unsigned int a3);
__int64 GameHr_28b1a0(__int64 result);
__int64 GameHr_28b290(__int64 a1, _QWORD* a2);
__int64 GameHr_28b300(__int64 a1, __int64* a2);
__int64 GameHr_28b3a0(__int64 a1, int a2);
__int64 GameHr_28b440(__int64 a1, int a2);
__int64 GameHr_28deb0(__int64 a1);
__int64* GameHr_293880(_QWORD* a1, int a2, int a3, __int64 a4, __int64 a5);
__int64 FinalMix_Unknown8(__int64, int, int);
__int64 SoundVoiceNx_2ab7a0(__int64 result);
__int64 SoundVoiceNx_2b4be0(__int64);
__int64 nn_audio_AddCircularBufferSink(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD, _QWORD);
__int64 nn_audio_InitializeAudioRendererParameter(_QWORD);
__int64 nn_audio_IsValidAudioRendererParameter(__int64);
__int64 nn_audio_RequestUpdateAudioRenderer(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex(__int64, bool, int);
void nn_diag_detail_AbortImpl_1a0a590();
__int64 GameHr_2892d0(__int64 a1);
__int64 GameHr_289a60(__int64 a1, unsigned int a2);
__int64 GameHr_289b50(__int64 result, unsigned int a2, char a3);
__int64 GameHr_289d60(__int64 a1);
__int64 GameHr_28b4e0(__int64 a1, int a2);

float GameHr_266820(__int64 a1, unsigned int a2, _DWORD* a3, __int64 a4,
                    _BYTE* a5)
{
  int v5;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  float result;
  __int64 v13;
  float* v14;
  float* v15;
  float v16;
  float v17;

  v5 = *(_DWORD*)(a1 + 96);
  v9 = (_QWORD*)(*(_QWORD*)(a1 + 80) +
                 104LL * ((a2 >> v5) & ~(-1 << *(_DWORD*)(a1 + 92))));
  v10 = v9[2];
  *(_DWORD*)a4 = *a3;
  v11 = v10 + 32LL * (a2 & ~(-1 << v5));
  *(_DWORD*)(a4 + 4) = a3[1];
  *(_DWORD*)(a4 + 8) = a3[2];
  if ((GameRoutine_2660e0(a1, v9, v11, (__int64)a3, (_DWORD*)(a4 + 4)) & 1) !=
      0) {
    if (a5 != nullptr) {
      *a5 = 1;
    }
  }
  else {
    if (a5 != nullptr) {
      *a5 = 0;
    }
    if ((*(_BYTE*)(v11 + 31) & 0xC0) == 0x40) {
      v13 = v9[3];
      v14 = (float*)(v13 + 12LL * *(unsigned __int16*)(v11 + 4));
      v15 = (float*)(v13 + 12LL * *(unsigned __int16*)(v11 + 6));
      GameRoutine_267760(a3, v14, v15, &v17);
      v16 = v17;
      *(float*)a4 = *v14 + (float)((float)(*v15 - *v14) * v17);
      *(float*)(a4 + 4) = v14[1] + (float)((float)(v15[1] - v14[1]) * v16);
      result = v14[2] + (float)((float)(v15[2] - v14[2]) * v16);
      *(float*)(a4 + 8) = result;
    }
    else {
      return GameRoutine_2663e0(v9, v11, (__int64)a3, (float*)a4, 1);
    }
  }
  return result;
}

__int64 GameHr_27d070(_DWORD* a1, __int64 a2, __int64* a3)
{
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  char* v14;
  void* v15;
  __int64 v16;
  void* v17;
  __int64 v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  char v22;
  __int64 v23;
  char v24;
  char v25;
  char v26;
  int v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int v32;
  int v33;
  unsigned int* v34;
  void* v35;
  __int64 v36;
  int v37;
  void* v38;
  __int64 v39;
  void* v40;
  unsigned __int64 v41;
  void* v42;
  void* v43;
  int v44;
  void* v45;
  void* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  void* v49;
  unsigned __int64 v50;
  char v51;
  __int64 v52;
  __int64* v53;
  unsigned __int64* v54;
  int v55;
  int* v56;
  unsigned __int64 v57;
  int v58;
  int v59;
  int* v60;
  int* v61;
  char* v62;
  char v63;
  int v64;
  int v65;
  char* v66;
  char v67;
  int v68;
  int v69;
  char* v70;
  int* v71;
  __int64 v72;
  __int64 v73;
  void* v74;
  __int64 v75;
  void* v76;
  __int64* v77;
  __int64 v78;
  __int64* v79;
  unsigned int* v80;
  void* v81;
  _BYTE* v82;
  void* v83;
  unsigned __int64 v84;
  void* v85;
  __int64 v86;
  void* v87;
  void* v88;
  char v89;
  void* v90;
  void* v91;
  __int64 v92;
  int v93;
  int v94;
  __int64 v95;
  _BYTE v96[11];
  char v97;
  char v98;
  char v99;
  char v100;
  char v101;
  char v102;
  char v103;
  __int16 v104;
  int v105;
  int v106;
  struct {
    __int64 v107;
    int v108;
  } v107_;

  nn_util_ReferSymbol(
      (__int64)"SDK MW+Nintendo+NintendoWare_Atk-22_2_0-Release");
  v6 = *(_DWORD*)(a2 + 124);
  v7 = (unsigned int)(*(_DWORD*)(a2 + 136) + *(_DWORD*)(a2 + 132));
  v8 = *(unsigned __int8*)(a2 + 129);
  v9 = *(unsigned __int8*)(a2 + 130);
  if (v6 <= 1) {
    v6 = 1;
  }
  if (v6 >= 24) {
    v6 = 24;
  }
  v107_.v108 = v6;
  v107_.v107 = v7 | (v8 << 32) | (v9 << 40);
  if (*GameData_21350a0[0] == 1) {
    if (a1 != nullptr) {
      *a1 = 0;
    }
    return 1;
  }
  else {
    v11 = *a3;
    v12 = a3[2];
    v13 = a3[4];
    v14 = GameData_21350a8[0];
    if ((*GameData_21350a8[0] & 1) == 0) {
      v15 = BaseNx_2a1860();
      v16 =
          BaseNx_2a1970((__int64)v15, *(_QWORD*)(a2 + 16), *(_DWORD*)(a2 + 24));
      v17 = BaseNx_2a18e0();
      v18 = BaseNx_2a1970((__int64)v17, *(_QWORD*)(a2 + 40),
                          *(_DWORD*)(a2 + 48)) +
            v16;
      GameHr_27d700(a2, v11);
      v11 += v18;
    }
    v19 = *(_DWORD*)(a2 + 72);
    v20 = *(_DWORD*)(a2 + 104);
    v106 = 0;
    v21 = (v11 + 4095) & 0xFFFFFFFFFFFFF000LL;
    v22 = *(_BYTE*)(a2 + 78);
    v23 = *(_QWORD*)(a2 + 64);
    v24 = *(_BYTE*)(a2 + 76);
    v25 = *(_BYTE*)(a2 + 98);
    v26 = *(_BYTE*)(a2 + 100);
    v27 = *(_DWORD*)(a2 + 112);
    v28 = *(_BYTE*)(a2 + 108);
    v29 = *(_BYTE*)(a2 + 93);
    v30 = *(_BYTE*)(a2 + 92);
    v31 = *(_BYTE*)(a2 + 99);
    *(_DWORD*)&v96[7] = 0;
    *(_QWORD*)v96 = 0;
    v100 = 1;
    v95 = 0x1E00000001LL;
    v105 = v20;
    LOBYTE(v20) = *(_BYTE*)(a2 + 128);
    v92 = v23;
    v96[8] = v24;
    v97 = v25;
    v101 = v26;
    v98 = v22;
    v32 = *(_DWORD*)(a2 + 80);
    BYTE1(v106) = v20;
    LOBYTE(v20) = *(_BYTE*)(a2 + 131);
    v93 = v19;
    v94 = v32;
    LOBYTE(v32) = *(_BYTE*)(a2 + 79);
    BYTE2(v106) = v20;
    v99 = v32;
    v102 = *(_BYTE*)(a2 + 95);
    v103 = *(_BYTE*)(a2 + 101);
    v104 = *(_WORD*)(a2 + 102);
    v33 = *(_DWORD*)(a2 + 120);
    if (v33 == -1) {
      v33 = *(_DWORD*)(a2 + 116);
    }
    BaseNx_2891e0((__int64)&v92, v26, v25, v31, v30, v29, v28, v27, v33,
                  *(_DWORD*)(a2 + 132), *(_DWORD*)(a2 + 136));
    v34 = (unsigned int*)snd_target_g_activeVoiceCount_ptr;
    *snd_target_g_activeVoiceCount_ptr = *(_DWORD*)(a2 + 72);
    v35 = SoundVoiceNX_14e360();
    v36 = nn_atk_detail_289600((__int64)v35, (__int64)&v92);
    v37 = *(_DWORD*)(a2 + 136) + *(_DWORD*)(a2 + 132);
    v38 = SoundVoiceNX_14e360();
    v39 = GameRoutine_289830_alt1((__int64)v38, v37 + 1, *v34);
    if (*(_BYTE*)(a2 + 78) == 1) {
      v40 = SoundVoiceNX_14e360();
      v36 += nn_atk_detail_289840((__int64)v40, (__int64)&v92);
    }
    if ((*(_BYTE*)(a2 + 79) & 1) != 0 || *(_DWORD*)(a2 + 132) != 0 ||
        *(_DWORD*)(a2 + 136) != 0) {
      v42 = SoundVoiceNX_14e360();
      v41 = nn_atk_detail_289910((__int64)v42, (__int64)&v92);
    }
    else {
      v41 = 0;
      v13 = 0;
    }
    v43 = SoundVoiceNX_14e360();
    v44 = nn_atk_detail_28a040((__int64)v43, v21, v36, v12, v39, v13, v41,
                               (__int64)&v92);
    if (a1 != nullptr) {
      *a1 = v44;
    }
    if (v44 != 0) {
      if (*v14 == 1) {
        v45 = BaseNx_2a1860();
        BaseNx_2a06f0((__int64)v45);
        v46 = BaseNx_2a18e0();
        BaseNx_2a06f0((__int64)v46);
        *GameData_21350b0[0] = 0;
        *GameData_21350b8[0] = 0;
      }
      return 0;
    }
    else {
      v47 = v36 + v21;
      if (*(_BYTE*)(a2 + 76) == 1) {
        v48 = (v47 + 63) & 0xFFFFFFFFFFFFFFC0LL;
        v49 = SoundVoiceNX_14e360();
        v50 = nn_atk_detail_289ff0((__int64)v49, (__int64)&v92);
        v51 = *(_BYTE*)(a2 + 76);
        v52 = 3 * v50;
        v47 = 3 * v50 + v48;
      }
      else {
        v51 = 0;
        v48 = 0;
        v52 = 0;
      }
      v53 = GameData_21350c0[0];
      v54 = (unsigned __int64*)GameData_21350c8;
      v55 = *(_DWORD*)(a2 + 68);
      v56 = GameData_21350d8;
      v57 = (v47 + 4095) & 0xFFFFFFFFFFFFF000LL;
      *GameData_21350d0[0] = *(_DWORD*)(a2 + 64);
      *v56 = v55;
      v59 = *(_DWORD*)(a2 + 112);
      v58 = *(_DWORD*)(a2 + 116);
      v60 = GameData_21350f0[0];
      v61 = GameData_21350f8;
      *v53 = v48;
      v62 = GameData_21350e0[0];
      *v54 = v52;
      v63 = *(_BYTE*)(a2 + 77);
      *v60 = v59;
      v64 = *(_DWORD*)(a2 + 120);
      v65 = *(_DWORD*)(a2 + 124);
      *v62 = v51;
      if (v64 != -1) {
        v58 = v64;
      }
      *v61 = v58;
      v66 = GameData_21350e8[0];
      *GameData_21350e8[0] = v63;
      *GameData_2135108[0] = *(_BYTE*)(a2 + 92);
      *GameData_2135118[0] = *(_BYTE*)(a2 + 93);
      *GameData_2135120[0] = *(_BYTE*)(a2 + 98);
      *GameData_2135128[0] = *(_BYTE*)(a2 + 78);
      *GameData_2135130[0] = *(_BYTE*)(a2 + 79);
      *GameData_2135138[0] = *(_BYTE*)(a2 + 99);
      *GameData_2135140[0] = v100;
      *GameData_2135148[0] = *(_BYTE*)(a2 + 100);
      *GameData_2135150[0] = *(_BYTE*)(a2 + 95);
      *GameData_2135158[0] = *(_BYTE*)(a2 + 101);
      *GameData_2135160[0] = *(_BYTE*)(a2 + 103);
      v67 = *(_BYTE*)(a2 + 107);
      *GameData_2135110[0] = *(_BYTE*)(a2 + 104);
      *GameData_2135168[0] = *(_BYTE*)(a2 + 108);
      *GameData_2135170[0] = *(_BYTE*)(a2 + 128);
      *GameData_2135178[0] = *(_BYTE*)(a2 + 129);
      *GameData_2135180[0] = *(_BYTE*)(a2 + 130);
      *GameData_2135188[0] = *(_BYTE*)(a2 + 131);
      if (v65 <= 1) {
        v68 = 1;
      }
      else {
        v68 = v65;
      }
      if (v68 >= 24) {
        v68 = 24;
      }
      *GameData_2135190[0] = v68;
      v69 = *(_DWORD*)(a2 + 136);
      *GameData_2135198[0] = *(_DWORD*)(a2 + 132);
      v70 = GameData_2135100[0];
      v71 = GameData_21351a0[0];
      *GameData_2135100[0] = v67;
      *v71 = v69;
      v72 = *(_QWORD*)(a2 + 8);
      v73 = v72 + v57;
      *GameData_21351a8[0] = v57;
      *GameData_21351b0[0] = v72;
      v74 = BaseNx_2a1b90();
      SoundThread_2a1d30((__int64)v74, *v53, *v54, *v62, *v66, *v70);
      v75 = *(_QWORD*)(a2 + 32);
      v76 = TaskThread_2a2ae0();
      GameRoutine_2a2c10(v76, *(unsigned __int8*)(a2 + 76));
      v77 = GameData_21351b8[0];
      v78 = *(_QWORD*)(a2 + 32);
      *GameData_21351b8[0] = v73;
      v79 = GameData_21351c0;
      *GameData_21351c0 = v78;
      v80 = (unsigned int*)GameData_21351c8;
      *GameData_21351c8 = *(_DWORD*)(a2 + 52);
      v81 = BaseNx_2aa100();
      BaseNx_2aa190((__int64)v81, *v34, (unsigned int*)&v107_.v107);
      v82 = BaseNx_2aa100();
      v83 = BaseNx_2aa100();
      v84 = BaseNx_2aa190((__int64)v83, *v34, (unsigned int*)&v107_.v107);
      BaseNx_2aa1e0(v82, (_QWORD*)(v75 + v73), v84, (unsigned int*)&v107_.v107);
      v85 = BaseNx_2a6df0();
      v86 = BaseNx_2a6e90((__int64)v85, 2 * *v34, (unsigned int*)&v107_.v107);
      v87 = BaseNx_2a6df0();
      BaseNx_2a6ee0((__int64)v87, v39 + v12, v86, 2 * *v34,
                    (unsigned int*)&v107_.v107);
      nn_atk_detail_28db20();
      if (*(_BYTE*)(a2 + 94) == 1) {
        v88 = TaskThread_2a3370();
        TaskThread_2a3210((__int64)v88, *(_DWORD*)(a2 + 28), *v77, *v79,
                          *(_DWORD*)(a2 + 88), 0, *v80);
        v89 = 1;
      }
      else {
        v89 = 0;
      }
      *GameData_21351d0[0] = v89;
      v90 = BaseNx_2a1860();
      GameRoutine_2a0eb0(v90, 0);
      if (*GameData_2135150[0] == 1) {
        v91 = BaseNx_2a1b90();
        SoundThread_2a1c90((__int64)v91, *(_DWORD*)a2, *GameData_21351a8[0],
                           *GameData_21351b0[0], *(_DWORD*)(a2 + 84), 0);
      }
      nn_atk_detail_2a36e0();
      *GameData_21350a0[0] = 1;
      return 1;
    }
  }
}

__int64 GameHr_27d700(__int64 result, __int64 a2)
{
  char* v2;
  __int64 v4;
  void* v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  void* v9;
  void* v10;
  int* v11;

  v2 = GameData_21350a8[0];
  if ((*GameData_21350a8[0] & 1) == 0) {
    v4 = result;
    v5 = BaseNx_2a1860();
    v6 = BaseNx_2a1970((__int64)v5, *(_QWORD*)(v4 + 16), *(_DWORD*)(v4 + 24));
    v7 = BaseNx_2a18e0();
    v8 = BaseNx_2a1970((__int64)v7, *(_QWORD*)(v4 + 40), *(_DWORD*)(v4 + 48));
    v9 = BaseNx_2a1860();
    BaseNx_2a1980((__int64)v9, a2, v6, *(_QWORD*)(v4 + 16),
                  *(unsigned int*)(v4 + 24));
    v10 = BaseNx_2a18e0();
    result = BaseNx_2a1980((__int64)v10, v6 + a2, v8, *(_QWORD*)(v4 + 40),
                           *(unsigned int*)(v4 + 48));
    v11 = GameData_21351d8[0];
    *GameData_21350b0[0] = *(_QWORD*)(v4 + 16);
    *v11 = *(_DWORD*)(v4 + 24);
    *GameData_21350b8[0] = *(_QWORD*)(v4 + 40);
    *GameData_21351e0 = *(_DWORD*)(v4 + 48);
    *v2 = 1;
  }
  return result;
}

_QWORD* GameHr_27d7f0(_QWORD* result, __int64 a2, __int64* a3)
{
  int v3;
  _QWORD* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void* v13;
  __int64 v14;
  void* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  struct {
    __int64 v20;
    int v21;
  } v20_;

  v3 = *(unsigned __int8*)(a2 + 96);
  v6 = result;
  *GameData_21351f0[0] = v3;
  v7 = *a3;
  if (v3 == 1) {
    v8 = *(_DWORD*)(a2 + 124);
    v9 = a3[1] + v7;
    if (v8 <= 1) {
      v8 = 1;
    }
    if (v8 >= 24) {
      v8 = 24;
    }
    v10 = (unsigned int)(*(_DWORD*)(a2 + 136) + *(_DWORD*)(a2 + 132));
    v11 = *(unsigned __int8*)(a2 + 129);
    v12 = *(unsigned __int8*)(a2 + 130);
    v20_.v21 = v8;
    v20_.v20 = v10 | (v11 << 32) | (v12 << 40);
    v13 = BaseNx_2a6df0();
    v14 = BaseNx_2a6e90_alt1((__int64)v13, 2 * *(_DWORD*)(a2 + 72),
                             (__int64)&v20_.v20);
    v15 = SoundVoiceNX_14e360();
    result = (_QWORD*)GameRoutine_289830_alt1((__int64)v15, (int)v10 + 1,
                                              *(_DWORD*)(a2 + 72));
    v16 = ((unsigned __int64)result + v14 + 4095) & 0xFFFFFFFFFFFFF000LL;
    v17 = (*a3 + 4095) & 0xFFFFFFFFFFFFF000LL;
    v6[2] = v17;
    v6[3] = v16;
    *v6 = v17 + v16;
    v6[1] = v9 - (v17 + v16);
    if (*(_BYTE*)(a2 + 97) != 1) {
      goto LABEL_7;
    }
  }
  else {
    *result = v7;
    result[1] = a3[1];
    result[2] = a3[2];
    result[3] = a3[3];
    if (*(_BYTE*)(a2 + 97) != 1) {
    LABEL_7:
      v6[4] = a3[4];
      v6[5] = a3[5];
      return result;
    }
  }
  if ((*(_BYTE*)(a2 + 79) & 1) != 0 || *(_DWORD*)(a2 + 132) != 0 ||
      *(_DWORD*)(a2 + 136) != 0) {
    result = (_QWORD*)GameHr_27cf80(a2);
    v18 = (char*)result + *v6;
    v19 = v6[1] - (_QWORD)result;
    v6[4] = *v6;
    v6[5] = result;
    *v6 = v18;
    v6[1] = v19;
  }
  else {
    v6[4] = 0;
    v6[5] = 0;
  }
  return result;
}

void GameHr_27d9e0()
{
  void* v0;
  int v1;
  void* v2;
  void* v3;
  void* v4;
  void* v5;
  void* v6;
  void* v7;
  void* v8;
  void* v9;
  _BYTE* v10;
  void* v11;
  void* v12;
  void* v13;
  void* v14;

  if (GameData_219d028 != 1) {
    return;
  }
  if (GameData_2140b81 == 1) {
    v0 = BaseNx_2a1860();
    v1 = GameRoutine_2a0eb0(v0, 1);
    if (*GameData_2135100[0] == 1) {
      v2 = BaseNx_2a1b90();
      GameRoutine_2a2020_alt1((__int64)v2, 0);
    }
    v3 = BaseNx_2a1860();
    BaseNx_2a0de0((__int64)v3, v1);
  }
  if (GameData_2140b6d != 1) {
    GameData_2140b6d = 1;
    if (GameData_2140b83 != 1) {
      goto LABEL_8;
    }
  LABEL_10:
    v7 = BaseNx_2a1b90();
    SoundThread_2a1de0((__int64)v7);
    goto LABEL_11;
  }
  v4 = TaskThread_2a2ae0();
  GameRoutine_2a2f90(v4);
  v5 = TaskThread_2a3370();
  TaskThread_2a3180((__int64)v5);
  v6 = TaskThread_2a2ae0();
  GameRoutine_2a2c20_alt1((__int64)v6);
  if (GameData_2140b83 == 1) {
    goto LABEL_10;
  }
LABEL_8:
  GameData_2140b83 = 1;
LABEL_11:
  v8 = BaseNx_2a6df0();
  BaseNx_2a7020((__int64)v8);
  if (GameData_2140b6e == 1) {
    v9 = SoundVoiceNX_14e360();
    GameHr_289e00((__int64)v9, (__int64)GameData_21351e8, 0);
  }
  else {
    GameData_2140b6e = 1;
  }
  v10 = BaseNx_2aa100();
  BaseNx_2aa300(v10);
  v11 = SoundVoiceNX_14e360();
  GameHr_28ad80((__int64)v11);
  v12 = BaseNx_2a1b90();
  GameRoutine_2a1e60_alt1((__int64)v12);
  if (GameData_219d02a == 1) {
    v13 = BaseNx_2a1860();
    BaseNx_2a06f0((__int64)v13);
    v14 = BaseNx_2a18e0();
    BaseNx_2a06f0((__int64)v14);
    GameData_219d068 = 0;
    GameData_219d02a = 0;
    GameData_219d070 = 0;
  }
  GameData_219d092 = 0;
  GameData_219d028 = 0;
  GameData_219d093 = 0;
}

__int64 GameHr_284c50(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  if ((v3 & 4) != 0) {
    return *(unsigned int*)(v1 +
                            4 * ((v2 & 1) + (unsigned int)((v2 & 2) != 0)) + 4);
  }
  else {
    return 64;
  }
}

__int64 GameHr_284c80(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  if ((v3 & 4) != 0) {
    return *(_DWORD*)(v1 + 4 * ((v2 & 1) + (unsigned int)((v2 & 2) != 0)) +
                      4) >>
           8;
  }
  else {
    return 0;
  }
}

__int64 GameHr_284ef0(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  if ((v3 & 0x20000) != 0) {
    return *(_DWORD*)(v1 + 4LL * ((v2 & 1) + ((v2 & 2) != 0) + ((v2 & 4) != 0) +
                                  ((v2 & 8) != 0) + ((v2 & 0x10) != 0) +
                                  ((v2 & 0x20) != 0) + ((v2 & 0x40) != 0) +
                                  ((v2 & 0x80) != 0) + ((v2 & 0x100) != 0) +
                                  ((v2 & 0x200) != 0) + ((v2 & 0x400) != 0) +
                                  ((v2 & 0x800) != 0) + ((v2 & 0x1000) != 0) +
                                  ((v2 & 0x2000) != 0) + ((v2 & 0x4000) != 0) +
                                  ((v2 & 0x8000) != 0) +
                                  (unsigned int)((v2 & 0x10000) != 0) + 1)) &
           1;
  }
  else {
    return 0;
  }
}

__int64 GameHr_284fa0(__int64 a1)
{
  if (*(_WORD*)(a1 + 4) == 257) {
    return a1 + *(int*)(a1 + 8);
  }
  else {
    return 0;
  }
}

__int64 GameHr_284fc0(__int64 a1)
{
  __int64 v1;
  bool v2;
  __int64 v3;

  v1 = *(int*)(a1 + 28);
  v2 = *(_WORD*)(a1 + 24) != 8720 || v1 == -1;
  v3 = a1 + v1;
  if (v2) {
    return 0;
  }
  else {
    return v3;
  }
}

__int64 GameHr_285000(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return *(unsigned int*)(a1 + 12);
  }
  else {
    return 64;
  }
}

__int64 GameHr_285020(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return *(_DWORD*)(a1 + 12) >> 8;
  }
  else {
    return 0;
  }
}

__int64 GameHr_285040(__int64 result, _DWORD* a2)
{
  _DWORD* v2;

  v2 = (_DWORD*)(result + *(int*)(result + 4));
  if (*v2 != 0) {
    *a2 = v2[1];
    if (*v2 >= 2u) {
      goto LABEL_3;
    }
  }
  else {
    *a2 = -1;
    if (*v2 >= 2u) {
    LABEL_3:
      a2[1] = v2[2];
      if (*v2 < 3u) {
        goto LABEL_4;
      }
    LABEL_8:
      a2[2] = v2[3];
      if (*v2 < 4u) {
        goto LABEL_5;
      }
      goto LABEL_9;
    }
  }
  a2[1] = -1;
  if (*v2 >= 3u) {
    goto LABEL_8;
  }
LABEL_4:
  a2[2] = -1;
  if (*v2 < 4u) {
  LABEL_5:
    a2[3] = -1;
    return result;
  }
LABEL_9:
  a2[3] = v2[4];
  return result;
}

__int64 GameHr_2850e0(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 12) & 1) != 0) {
    return *(unsigned int*)(a1 + 16);
  }
  else {
    return 0;
  }
}

__int64 GameHr_285100(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 12);
  v1 = a1 + 12;
  v2 = v3;
  if ((v3 & 2) != 0) {
    return *(unsigned int*)(v1 + 4LL * (v2 & 1) + 4);
  }
  else {
    return 64;
  }
}

bool GameHr_285120(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 12);
  v1 = a1 + 12;
  v2 = v3;
  return (v3 & 2) == 0 || *(_BYTE*)(v1 + 4LL * (v2 & 1) + 5) != 0;
}

__int64 GameHr_285150(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 4);
  v1 = a1 + 4;
  v2 = v3;
  if ((v3 & 2) != 0) {
    return *(unsigned int*)(v1 + 4LL * (v2 & 1) + 4);
  }
  else {
    return 0;
  }
}

__int64 GameHr_285170(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 8);
  v1 = a1 + 8;
  v2 = v3;
  if ((v3 & 2) != 0) {
    return *(unsigned int*)(v1 + 4LL * (v2 & 1) + 4);
  }
  else {
    return 0;
  }
}

__int64 GameHr_285190(unsigned __int16* a1)
{
  int v1;
  unsigned int v2;

  v1 = *a1;
  if (v1 == 8717) {
    v2 = 1;
  }
  else {
    v2 = 2;
  }
  if (v1 == 8716) {
    return 0;
  }
  else {
    return v2;
  }
}

__int64 GameHr_2851c0(__int64 a1)
{
  if (*(_WORD*)a1 == 8716) {
    return a1 + *(int*)(a1 + 4);
  }
  else {
    return 0;
  }
}

__int64 GameHr_2851e0(__int64 a1)
{
  if (*(_WORD*)a1 == 8717) {
    return a1 + *(int*)(a1 + 4);
  }
  else {
    return 0;
  }
}

_QWORD* GameHr_285210(_QWORD* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_DWORD*)a2 == 1380012870 && *((__int16*)a2 + 2) == -257 &&
      (unsigned int)(*((_DWORD*)a2 + 2) - 0x10000) <= 0x10600) {
    v2 = *a2;
    v3 = a2[2];
    result[1] = a2[1];
    result[2] = v3;
    *result = v2;
    v4 = a2[3];
    v5 = a2[4];
    v6 = a2[6];
    result[5] = a2[5];
    result[6] = v6;
    result[3] = v4;
    result[4] = v5;
  }
  return result;
}

__int64 GameHr_285340(__int64 a1)
{
  return *(unsigned int*)GameRoutine_284600(*(_QWORD*)(a1 + 64));
}

__int64 GameHr_285360(__int64 a1)
{
  return *(unsigned int*)GameRoutine_284690(*(_QWORD*)(a1 + 64));
}

__int64 GameHr_285380(__int64 a1)
{
  return *(unsigned int*)GameRoutine_284730(*(_QWORD*)(a1 + 64));
}

__int64 GameHr_2853a0(__int64 a1)
{
  return *(unsigned int*)GameRoutine_284780(*(_QWORD*)(a1 + 64));
}

__int64 GameHr_2853c0(__int64 a1)
{
  return *(unsigned int*)GameRoutine_2847c0(*(_QWORD*)(a1 + 64));
}

bool GameHr_2853e0(__int64 a1, unsigned int a2, __int64 a3)
{
  char* v4;
  __int64 v5;

  v4 = GameRoutine_2845c0(*(_QWORD*)(a1 + 64), a2);
  v5 = (__int64)v4;
  if (v4 != nullptr) {
    *(_DWORD*)a3 = *(_DWORD*)v4;
    *(_DWORD*)(a3 + 4) = *((_DWORD*)v4 + 1);
    *(_BYTE*)(a3 + 10) = v4[8];
    *(_DWORD*)(a3 + 12) = GameRoutine_284bb0((__int64)v4);
    *(_DWORD*)(a3 + 16) = GameRoutine_284bd0(v5);
    *(_DWORD*)(a3 + 20) = GameRoutine_284bf0(v5);
    *(_WORD*)(a3 + 24) = GameRoutine_284c20(v5);
    *(_BYTE*)(a3 + 9) = GameRoutine_284c50(v5);
    *(_BYTE*)(a3 + 8) = GameRoutine_284c80(v5);
    *(_BYTE*)(a3 + 11) = *(_BYTE*)(v5 + 9);
    *(_BYTE*)(a3 + 26) = GameRoutine_284ef0(v5) & 1;
  }
  return v5 != 0;
}

bool GameHr_285490(__int64 a1, unsigned int a2, _DWORD* a3)
{
  char* v4;

  v4 = GameRoutine_284610(*(_QWORD*)(a1 + 64), a2);
  if (v4 != nullptr) {
    *a3 = *(_DWORD*)v4;
  }
  return v4 != nullptr;
}

bool GameHr_2854d0(__int64 a1, unsigned int a2, _DWORD* a3)
{
  char* v4;
  char* v5;

  v4 = GameRoutine_284650(*(_QWORD*)(a1 + 64), a2);
  v5 = v4;
  if (v4 != nullptr) {
    *a3 = *(_DWORD*)v4;
    a3[1] = GameRoutine_285150((__int64)v4);
  }
  return v5 != nullptr;
}

bool GameHr_285520(__int64 a1, unsigned int a2, __int64 a3)
{
  char* v4;

  v4 = GameRoutine_2846a0(*(_QWORD*)(a1 + 64), a2);
  if (v4 != nullptr) {
    *(_DWORD*)a3 = *(_DWORD*)v4;
    *(_DWORD*)(a3 + 4) = *((_DWORD*)v4 + 1);
    *(_QWORD*)(a3 + 8) = &v4[*((int*)v4 + 3)];
  }
  return v4 != nullptr;
}

bool GameHr_285690(__int64 a1, unsigned int a2, __int64 a3)
{
  char* v4;
  char* v5;

  v4 = GameRoutine_284740(*(_QWORD*)(a1 + 64), a2);
  v5 = v4;
  if (v4 != nullptr) {
    *(_DWORD*)a3 = *(_DWORD*)v4;
    *(_DWORD*)(a3 + 4) = GameRoutine_285170((__int64)v4);
    *(_BYTE*)(a3 + 8) = v5[4];
  }
  return v5 != nullptr;
}

bool GameHr_2856f0(__int64 a1, __int64 a2)
{
  unsigned __int16* v4;
  int v5;
  int v6;

  v4 = (unsigned __int16*)GameRoutine_284b10(*(_QWORD*)(a1 + 64));
  if (v4 != nullptr) {
    *(_DWORD*)a2 = *v4;
    *(_DWORD*)(a2 + 4) = v4[1];
    *(_DWORD*)(a2 + 8) = v4[2];
    *(_DWORD*)(a2 + 12) = v4[3];
    *(_DWORD*)(a2 + 16) = v4[4];
    *(_DWORD*)(a2 + 20) = v4[5];
    *(_DWORD*)(a2 + 24) = v4[6];
    if (*(_DWORD*)(a1 + 8) >> 9 < 0x101u) {
      v5 = 1;
    }
    else {
      v5 = *((unsigned __int8*)v4 + 14);
    }
    *(_DWORD*)(a2 + 28) = v5;
    *(_BYTE*)(a2 + 32) = *((_BYTE*)v4 + 15) & 1;
    if (*(_DWORD*)(a1 + 8) <= 0x205FFu) {
      v6 = 1;
    }
    else {
      v6 = *((unsigned __int8*)v4 + 16);
    }
    *(_DWORD*)(a2 + 36) = v6;
  }
  return v4 != nullptr;
}

__int64 GameHr_2857c0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  char v5;

  result = (__int64)GameRoutine_2845c0(*(_QWORD*)(a1 + 64), a2);
  if (result != 0) {
    result = GameRoutine_284b50(result);
    if (result != 0) {
      *(_DWORD*)a3 = *(_DWORD*)result;
      *(_DWORD*)(a3 + 4) = *(_DWORD*)(result + 4);
      *(_BYTE*)(a3 + 8) = *(_BYTE*)(result + 8);
      v5 = *(_BYTE*)(result + 9);
      *(_BYTE*)(a3 + 9) = v5;
      return 1;
    }
  }
  return result;
}

__int64 GameHr_285b90(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;

  result = (__int64)GameRoutine_2845c0(*(_QWORD*)(a1 + 64), a2);
  if (result != 0) {
    v5 = result;
    if ((unsigned int)GameRoutine_284950(result) == 2) {
      v6 = GameRoutine_284980(v5);
      result = GameRoutine_284fc0(v6);
      if (result != 0) {
        *(_BYTE*)a3 = *(unsigned __int8*)(result + 1) << 8 == 256;
        *(_DWORD*)(a3 + 4) = *(_DWORD*)(result + 4);
        v7 = *(_DWORD*)(result + 8);
        result = 1;
        *(_DWORD*)(a3 + 8) = v7;
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

char* GameHr_285d20(__int64 a1, unsigned int a2)
{
  unsigned int v2;
  char* v5;
  int v6;
  char* v7;
  char* v9;
  char* v10;

  v2 = HIBYTE(a2);
  if (HIBYTE(a2) == 3) {
    v10 = GameRoutine_284610(*(_QWORD*)(a1 + 64), a2);
    return &v10[*((int*)v10 + 2)];
  }
  else {
    if (v2 == 2) {
      v7 = GameRoutine_2846a0(*(_QWORD*)(a1 + 64), a2);
    }
    else {
      if (v2 != 1) {
        return nullptr;
      }
      v5 = GameRoutine_2845c0(*(_QWORD*)(a1 + 64), a2);
      if ((unsigned int)GameRoutine_284950((__int64)v5) != 3 ||
          *(_DWORD*)GameRoutine_2846e0(*(_QWORD*)(a1 + 64)) == 0) {
        return nullptr;
      }
      v6 = 0;
      while (1) {
        v7 = GameRoutine_2846a0(*(_QWORD*)(a1 + 64), v6 | 0x2000000u);
        if (a2 >= *(_DWORD*)v7 && *((_DWORD*)v7 + 1) >= a2) {
          break;
        }
        if ((unsigned int)++v6 >=
            *(_DWORD*)GameRoutine_2846e0(*(_QWORD*)(a1 + 64))) {
          return nullptr;
        }
      }
    }
    if (*((_WORD*)v7 + 8) == 8709) {
      v9 = &v7[*((int*)v7 + 5)];
    }
    else {
      v9 = nullptr;
    }
    return &v9[*(int*)&v7[*((int*)v7 + 5) + 4]];
  }
}

char* GameHr_285e40(__int64 a1, unsigned int a2)
{
  char* result;

  result = GameRoutine_2845c0(*(_QWORD*)(a1 + 64), a2);
  if (result != nullptr) {
    return (char*)GameRoutine_284950((__int64)result);
  }
  return result;
}

_QWORD* GameHr_285ef0(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[2] = result + 2;
  result[3] = result + 2;
  return result;
}

__int64* GameHr_285f20(__int64* result, __int64 a2, __int64 a3)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v3 = (__int64*)result[3];
  *result = a2;
  result[1] = a3;
  if (v3 != result + 2) {
    do {
      v4 = (__int64*)v3[1];
      v5 = *v4;
      *(_QWORD*)(*v3 + 8) = v4;
      *v4 = *v3;
      *(_QWORD*)(v5 + 8) = v3;
      *v3 = v5;
      v3 = (__int64*)result[3];
    } while (v3 != result + 2);
    a2 = *result;
    a3 = result[1];
  }
  result[4] = a2;
  result[5] = a3;
  return result;
}

_QWORD* GameHr_286020(_QWORD* result)
{
  __int64* i;
  __int64* v2;
  __int64 v3;

  result[4] = 0;
  result[5] = 0;
  for (i = (__int64*)result[3]; i != result + 2; i = (__int64*)result[3]) {
    v2 = (__int64*)i[1];
    v3 = *v2;
    *(_QWORD*)(*i + 8) = v2;
    *v2 = *i;
    *(_QWORD*)(v3 + 8) = i;
    *i = v3;
  }
  result[6] = 0;
  *result = 0;
  result[1] = 0;
  return result;
}

__int64 GameHr_286080(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;

  v2 = *a2;
  v4 = *(_QWORD*)(a1 + 16);
  result = a1 + 16;
  *a2 = v4;
  *(_QWORD*)(v2 + 8) = result;
  *(_QWORD*)(*(_QWORD*)result + 8LL) = a2;
  *(_QWORD*)result = v2;
  return result;
}

__int64 GameHr_286270(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4,
                      __int64 a5)
{
  __int64 v6;
  char v11;
  char v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  char v17;
  unsigned int v19;
  unsigned int v20;
  _QWORD v21[4];
  __int64 v22;

  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v11 = GameRoutine_2785c0(v6);
    v12 = 0;
    if (a3 != 0 && a2 != -1 && (v11 & 1) != 0) {
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(*(_QWORD*)(a1 + 8));
      v13 = *(_QWORD*)(a1 + 8);
      v22 = 0;
      memset(v21, 0, sizeof(v21));
      v12 = 0;
      if ((GameRoutine_278c70(v13, (__int64)v21) & 1) != 0) {
        v14 = HIBYTE(a2);
        if (HIBYTE(a2) <= 2u) {
          if (v14 == 1) {
            v20 = (unsigned int)GameRoutine_278890(*(_QWORD*)(a1 + 8));
            switch (v20) {
            case 3u:
              if ((v22 & 1) != 0) {
                v17 = GameRoutine_286600(a1, a2, a3, a4, a5);
              }
              else {
                v17 = GameRoutine_286700(a1, a2, a3, a4, a5, 0xFFFFFFFFLL);
              }
              goto LABEL_17;
            case 2u:
              v17 = GameRoutine_2868e0(a1, a2, a3, a5);
              goto LABEL_17;
            case 1u:
              v17 = GameRoutine_2864b0(a1, a2, a3, a4, a5);
              goto LABEL_17;
            default:
              break;
            }
            goto LABEL_27;
          }
          if (v14 == 2) {
            v17 = GameRoutine_286b20(a1, a2, a3, a4, a5);
            goto LABEL_17;
          }
        }
        else {
          switch (v14) {
          case 3u:
            v17 = GameRoutine_286940(a1, a2, a3, a4, a5);
            goto LABEL_17;
          case 5u:
            if ((a4 & 8) == 0 ||
                (v19 = GameRoutine_278770(*(_QWORD*)(a1 + 8), a2),
                 GameRoutine_286c40(a1, v19, a3, a5, 1) != 0)) {
              v12 = 1;
              break;
            }
            goto LABEL_27;
          case 6u:
            v15 = GameRoutine_278770(*(_QWORD*)(a1 + 8), a2);
            v16 = GameRoutine_286c40(a1, v15, a3, a5, 1);
            if (v16 != 0) {
              v17 = GameRoutine_287180(a1, v16, a3, a5);
            LABEL_17:
              v12 = v17;
              break;
            }
          LABEL_27:
            v12 = 0;
            break;
          default:
            break;
          }
        }
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 40LL))(*(_QWORD*)(a1 + 8));
      }
    }
  }
  else {
    v12 = 0;
  }
  return v12 & 1;
}

__int64 GameHr_2864b0(_QWORD* a1, unsigned int a2, __int64 a3, char a4,
                      __int64 a5)
{
  unsigned int v10;
  __int64 result;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;

  if ((a4 & 1) == 0 || (v10 = BaseNx_278770(a1[1], a2),
                        (result = BaseNx_286c40(a1, v10, a3, a5, 0)) != 0)) {
    result = true;
    if ((a4 & 0xC) != 0) {
      v12 = a1[1];
      v13 = 0;
      v16 = 0;
      v17 = 0;
      v14 = -1;
      v15 = -1;
      if ((BaseNx_2789b0(v12, (__int64)&v13, a2) & 1) == 0 ||
          (_DWORD)v14 != -1 &&
              (BaseNx_286940(a1, (unsigned int)v14, a3, a4, a5) & 1) == 0) {
        return false;
      }
      if (HIDWORD(v14) != -1 &&
              (BaseNx_286940(a1, HIDWORD(v14), a3, a4, a5) & 1) == 0 ||
          (_DWORD)v15 != -1 &&
              (BaseNx_286940(a1, (unsigned int)v15, a3, a4, a5) & 1) == 0 ||
          HIDWORD(v15) != -1 &&
              (BaseNx_286940(a1, HIDWORD(v15), a3, a4, a5) & 1) == 0) {
        return false;
      }
    }
  }
  return result;
}

__int64 GameHr_286600(_QWORD* a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v9;
  unsigned int v10;
  __int64 result;
  __int64 v12;
  char v13;
  unsigned int v14;
  unsigned int v15;

  v9 = a2;
  v10 = GameRoutine_278770(a1[1], a2);
  if ((a4 & 2) == 0 || (result = GameRoutine_286c40(a1, v10, a3, a5, 0)) != 0) {
    if ((a4 & 8) != 0) {
      result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v10);
      if (result != 0) {
        v12 = a1[1];
        v15 = 0;
        v13 = GameRoutine_278bd0(v12, v9, &v15);
        result = 0;
        if ((v13 & 1) != 0) {
          v14 = GameRoutine_278770(a1[1], v15);
          return GameRoutine_286c40(a1, v14, a3, a5, 1) != 0;
        }
      }
    }
    else {
      return 1;
    }
  }
  return result;
}

bool GameHr_2868e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7;

  v7 = GameRoutine_278780(*(_QWORD*)(a1 + 8));
  return GameRoutine_286c40(a1, v7, a3, a4, 1) != 0;
}

__int64 GameHr_286940(_QWORD* a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  unsigned int v9;
  unsigned int v10;
  __int64 result;
  __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  unsigned int v19;
  unsigned int* v20;
  unsigned int* v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  _QWORD v25[3];
  int v26;
  __int64 v27;

  v9 = a2;
  v10 = GameRoutine_278770(a1[1], a2);
  if ((a4 & 4) == 0 || (result = GameRoutine_286c40(a1, v10, a3, a5, 0)) != 0) {
    if ((a4 & 8) == 0) {
      return 1;
    }
    v12 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v10);
    if (v12 != 0) {
      memset(v25, 0, sizeof(v25));
      GameRoutine_28bb40(v25, v12);
      result = GameRoutine_28be40(v25);
      if (result != 0) {
        v13 = (unsigned int*)result;
        if (*(_DWORD*)result == 0) {
          return 1;
        }
        v14 = (unsigned int*)(result + 8);
        v15 = 0;
        while (1) {
          v16 = *(v14 - 1);
          v17 = *v14;
          v18 = a1[1];
          v27 = 0;
          v26 = -1;
          if ((GameRoutine_278e00(v18, v16, (__int64)&v26) & 1) == 0) {
            break;
          }
          if (BYTE4(v27) == 1) {
            if ((GameRoutine_286d50(a1, v16, v17, a3, a5) & 1) == 0) {
              return 0;
            }
          }
          else {
            v19 = GameRoutine_278770(a1[1], v16);
            if (GameRoutine_286c40(a1, v19, a3, a5, 1) == 0) {
              return 0;
            }
          }
          v14 += 2;
          if (++v15 >= (unsigned __int64)*v13) {
            return 1;
          }
        }
        return 0;
      }
    }
    else {
      v20 = (unsigned int*)GameRoutine_279010(a1[1], v9);
      if (*v20 == 0) {
        return 1;
      }
      v21 = v20;
      v22 = 1;
      do {
        v23 = GameRoutine_278770(a1[1], v21[v22]);
        v24 = GameRoutine_286c40(a1, v23, a3, a5, 1);
        result = v24 != 0;
        if (v24 == 0) {
          break;
        }
        ++v22;
      } while (v22 - 1 < (unsigned __int64)*v21);
    }
  }
  return result;
}

__int64 GameHr_286c40(_QWORD* a1, unsigned int a2, __int64 a3, __int64 a4,
                      char a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  result = (*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1);
  if (result == 0) {
    v11 = a1[1];
    v16[0] = -1;
    v16[1] = 0;
    if ((GameRoutine_278f90(v11, a2, (__int64)v16) & 1) != 0 &&
        (v12 = LODWORD(v16[0]), (unsigned int)(LODWORD(v16[0]) + 1) >= 2) &&
        (v13 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a3 + 32LL))(
             a3, LODWORD(v16[0]), a5 & 1),
         (v14 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 16LL))(
              a3, v13)) != 0) &&
        (v15 = v14,
         GameRoutine_287040(a1, a2, v14, (int)v12, 0, a4) == (int)v12)) {
      GameRoutine_28b750(v15, v12);
      (*(void (**)(_QWORD*, _QWORD, __int64))(*a1 + 16LL))(a1, a2, v15);
      return v15;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 GameHr_286d50(_QWORD* a1, __int64 a2, unsigned int a3, __int64 a4,
                      __int64 a5)
{
  unsigned int v9;
  unsigned int v10;
  __int64 result;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  _QWORD v16[3];
  __int64 v17;

  v9 = a2;
  v10 = GameRoutine_278770(a1[1], a2);
  result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v10);
  if (result != 0 || (result = GameRoutine_286ec0(a1, v9, a4, a5)) != 0) {
    v17 = 0;
    memset(v16, 0, sizeof(v16));
    GameRoutine_2888d0(v16, result, 1);
    if ((_BYTE)v17 != 0 && GameRoutine_288b50(v16, a3) != 0) {
      return 1;
    }
    v12 = (unsigned int)GameRoutine_288bc0(v16, a3);
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a4 + 16LL))(
        a4, (v12 + 4223) & 0x1FFFFF000LL);
    if (result == 0) {
      return result;
    }
    v13 = (result + 63) & 0xFFFFFFFFFFFFFFC0LL;
    *(_DWORD*)(v13 + 4) = v10;
    *(_DWORD*)(v13 + 8) = a3;
    *(_QWORD*)(v13 + 12) = 0;
    *(_QWORD*)(v13 + 20) = 0;
    *(_QWORD*)(v13 + 28) = 0;
    *(_QWORD*)(v13 + 36) = 0;
    *(_QWORD*)(v13 + 44) = 0;
    *(_QWORD*)(v13 + 52) = 0;
    *(_DWORD*)(v13 + 60) = 0;
    *(_DWORD*)v13 = 1448560966;
    v14 = v13 + 64;
    v15 = GameRoutine_288bf0(v16, a3);
    if (GameRoutine_287040(a1, v10, v14, v12, v15, a5) == v12) {
      GameRoutine_288c50(v16, a3, v14);
      GameRoutine_28b750(v14, v12);
      return 1;
    }
    return 0;
  }
  return result;
}

__int64 GameHr_286ec0(_QWORD* a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v7;
  unsigned int v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  struct {
    __int128 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    int v18;
  } v14_;

  v7 = a2;
  v8 = BaseNx_278770(a1[1], a2);
  result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v8);
  if (result == 0) {
    v10 = a1[1];
    *(_QWORD*)((char*)&v14_.v14 + 4) = 0;
    LODWORD(v14_.v14) = -1;
    if ((BaseNx_278e00(v10, v7, (__int64)&v14_.v14) & 1) == 0) {
      return 0;
    }
    v11 = DWORD1(v14_.v14);
    if (DWORD1(v14_.v14) == 0) {
      return 0;
    }
    v14_.v18 = 0;
    v14_.v16 = 0;
    v14_.v17 = 0;
    v14_.v15 = 0;
    v14_.v14 = (__typeof__(v14_.v14)){0};
    if (BaseNx_287040((__int64)a1, v8, (__int64)&v14_.v14, 0x2Cu, 0, a4) !=
        44) {
      return 0;
    }
    v12 = GameRoutine_288890_alt1((__int64)&v14_.v14);
    if ((unsigned int)GameRoutine_288830_alt1((__int64)&v14_.v14) > v12) {
      return 0;
    }
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 16LL))(
        a3, v12 + 8 * v11 + 4);
    if (result == 0) {
      return result;
    }
    v13 = result;
    if (BaseNx_287040((__int64)a1, v8, result, v12, 0, a4) == v12) {
      *(_DWORD*)(v13 + v12) = 1413568326;
      v14_.v15 = 0;
      v14_.v16 = 0;
      v14_.v14 = (__typeof__(v14_.v14)){0};
      BaseNx_2888d0((__int64)&v14_.v14, v13, 1);
      BaseNx_288ae0((__int64)&v14_.v14);
      (*(void (**)(_QWORD*, _QWORD, __int64))(*a1 + 16LL))(a1, v8, v13);
      return v13;
    }
    else {
      return 0;
    }
  }
  return result;
}

unsigned __int64 GameHr_287040(__int64 a1, __int64 a2, __int64 a3,
                               unsigned __int64 a4, int a5, unsigned __int64 a6)
{
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  int v20;
  int v21;

  v10 = GameRoutine_279020(*(_QWORD*)(a1 + 8), a2, a1 + 16, 512, 0, 0);
  if (v10 == 0) {
    return 0;
  }
  v11 = v10;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 88LL))(v10) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 72LL))(v11) & 1) == 0) {
    return 0;
  }
  (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v11 + 48LL))(v11, a5, 0);
  if (a6 == 0) {
    v18 = *(_QWORD*)v11;
    v21 = 0;
    (*(void (**)(__int64, __int64, unsigned __int64, int*))(v18 + 32))(
        v11, a3, a4, &v21);
    if ((v21 & 0x80000000) == 0) {
      return a4;
    }
    return 0;
  }
  if (a4 != 0) {
    v12 = a4;
    while (1) {
      v13 = *(_QWORD*)v11;
      v20 = 0;
      v14 = v12 >= a6 ? a6 : v12;
      v15 = (*(__int64 (**)(__int64, __int64, unsigned __int64, int*))(
          v13 + 32))(v11, a3, v14, &v20);
      if (v20 < 0) {
        break;
      }
      v16 = v12 > v15;
      if (v12 >= v15) {
        v12 -= v15;
      }
      else {
        v12 = 0;
      }
      if (v16) {
        v17 = v15;
      }
      else {
        v17 = 0;
      }
      a3 += v17;
      if (!v16) {
        return a4;
      }
    }
    return 0;
  }
  return a4;
}

__int64 GameHr_287180(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7;
  int v8;
  int v9;
  unsigned int i;
  int v11;
  int v12;
  unsigned int v13;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  unsigned int j;
  __int64 v20;
  __int64 v21;
  _DWORD* v22;
  __int64 v23;
  _QWORD v24[3];
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v25_;
  unsigned int v28;

  memset(v24, 0, sizeof(v24));
  BaseNx_283000(v24, a2);
  v7 = *(_DWORD*)v24[0];
  if (*(_DWORD*)v24[0] == 0) {
  LABEL_5:
    v8 = BaseNx_283140((__int64)v24);
    if (v8 != 0) {
      v9 = v8;
      for (i = 0; i != v9; ++i) {
        v23 = 0;
        if ((BaseNx_283160((__int64)v24, &v23, i) & 1) != 0 &&
            (v23 & 0x800000000LL) != 0) {
          v16 = BYTE3(v23);
          if (BYTE3(v23) == 3) {
            if ((_DWORD)v23 != -1) {
              v20 = a1[1];
              v28 = -1;
              if ((BaseNx_278d70(v20, (__int64)&v28, v23) & 1) != 0) {
                v21 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v28);
                if (v21 != 0) {
                  v25_.v26 = 0;
                  v25_.v27 = 0;
                  v25_.v25 = 0;
                  SequenceNoteOnCallback_28bb40((__int64)&v25_.v25, v21);
                  v22 = (_DWORD*)SequenceNoteOnCallback_28be40(
                      (__int64)&v25_.v25);
                  if (v22 != nullptr && *v22 != 0) {
                    BaseNx_287780(a1, v22[1], a3);
                  }
                }
              }
            }
          }
          else if (v16 == 2) {
            v17 = a1[1];
            v25_.v25 = -1;
            v25_.v26 = 0;
            if ((BaseNx_278e80(v17, v23, (__int64)&v25_.v25) & 1) != 0 &&
                (_DWORD)v25_.v25 != -1) {
              v18 = (unsigned int)BaseNx_278890(a1[1]);
              if (v18 == 3) {
                GameHr_287690((__int64)a1, v25_.v25, a3);
              }
              else if (v18 == 1) {
                for (j = v25_.v25; j <= HIDWORD(v25_.v25); ++j) {
                  GameHr_287460(a1, j, a3);
                }
              }
            }
          }
          else if (v16 == 1 && (unsigned int)BaseNx_278890(a1[1]) == 1) {
            GameHr_287460(a1, v23, a3);
          }
        }
      }
    }
    return 1;
  }
  v25_.v25 = 0;
  v25_.v26 = 0;
  if ((BaseNx_2830f0((__int64)v24, (__int64)&v25_.v25, 0) & 1) == 0) {
    return 0;
  }
  if (v25_.v26 != 0) {
    (*(void (**)(_QWORD*, _QWORD))(*a1 + 16LL))(a1, (unsigned int)v25_.v25);
    if (v7 == 1) {
      goto LABEL_5;
    }
    v15 = 1;
    while (1) {
      v25_.v25 = 0;
      v25_.v26 = 0;
      if ((BaseNx_2830f0((__int64)v24, (__int64)&v25_.v25, v15) & 1) == 0) {
        return 0;
      }
      if (v25_.v26 != 0) {
        (*(void (**)(_QWORD*, _QWORD))(*a1 + 16LL))(a1, (unsigned int)v25_.v25);
      }
      if (v7 == ++v15) {
        goto LABEL_5;
      }
    }
  }
  v11 = BaseNx_283140((__int64)v24);
  if (v11 != 0) {
    v12 = v11;
    v13 = 0;
    while (1) {
      v25_.v25 = 0;
      if ((BaseNx_283160((__int64)v24, &v25_.v25, v13) & 1) != 0 &&
          (BaseNx_286270(a1, v25_.v25, a3, HIDWORD(v25_.v25), a4) & 1) == 0) {
        break;
      }
      if (v12 == ++v13) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

__int64 GameHr_287460(_QWORD* a1, unsigned int a2, __int64 a3)
{
  __int64 v4;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  struct {
    __int64 v16;
    __int64 v17;
    __int64 v18;
  } v16_;
  unsigned int v19;

  v4 = a1[1];
  v11 = 0;
  v14 = 0;
  v15 = 0;
  v12 = -1;
  v13 = -1;
  result = BaseNx_2789b0(v4, (__int64)&v11, a2);
  if ((result & 1) != 0) {
    if ((_DWORD)v12 != -1) {
      v7 = a1[1];
      v19 = -1;
      result = BaseNx_278d70(v7, (__int64)&v19, v12);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v19);
        if (result != 0) {
          v16_.v17 = 0;
          v16_.v18 = 0;
          v16_.v16 = 0;
          SequenceNoteOnCallback_28bb40((__int64)&v16_.v16, result);
          result = SequenceNoteOnCallback_28be40((__int64)&v16_.v16);
          if (result != 0 && *(_DWORD*)result != 0) {
            result = BaseNx_287780(a1, *(_DWORD*)(result + 4), a3);
          }
        }
      }
    }
    if (HIDWORD(v12) != -1) {
      v8 = a1[1];
      v19 = -1;
      result = BaseNx_278d70(v8, (__int64)&v19, HIDWORD(v12));
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v19);
        if (result != 0) {
          v16_.v17 = 0;
          v16_.v18 = 0;
          v16_.v16 = 0;
          SequenceNoteOnCallback_28bb40((__int64)&v16_.v16, result);
          result = SequenceNoteOnCallback_28be40((__int64)&v16_.v16);
          if (result != 0 && *(_DWORD*)result != 0) {
            result = BaseNx_287780(a1, *(_DWORD*)(result + 4), a3);
          }
        }
      }
    }
    if ((_DWORD)v13 != -1) {
      v9 = a1[1];
      v19 = -1;
      result = BaseNx_278d70(v9, (__int64)&v19, v13);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v19);
        if (result != 0) {
          v16_.v17 = 0;
          v16_.v18 = 0;
          v16_.v16 = 0;
          SequenceNoteOnCallback_28bb40((__int64)&v16_.v16, result);
          result = SequenceNoteOnCallback_28be40((__int64)&v16_.v16);
          if (result != 0 && *(_DWORD*)result != 0) {
            result = BaseNx_287780(a1, *(_DWORD*)(result + 4), a3);
          }
        }
      }
    }
    if (HIDWORD(v13) != -1) {
      v10 = a1[1];
      v19 = -1;
      result = BaseNx_278d70(v10, (__int64)&v19, HIDWORD(v13));
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v19);
        if (result != 0) {
          v16_.v17 = 0;
          v16_.v18 = 0;
          v16_.v16 = 0;
          SequenceNoteOnCallback_28bb40((__int64)&v16_.v16, result);
          result = SequenceNoteOnCallback_28be40((__int64)&v16_.v16);
          if (result != 0 && *(_DWORD*)result != 0) {
            return BaseNx_287780(a1, *(_DWORD*)(result + 4), a3);
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_287690(__int64 result, unsigned int a2, __int64 a3)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v9;
  _QWORD v10[3];
  _QWORD v11[2];
  struct {
    __int64 v12;
    int v13;
  } v12_;
  _DWORD v14[8];

  if (a2 != -1) {
    v5 = (_QWORD*)result;
    v6 = *(_QWORD*)(result + 8);
    memset(v14, 0, 28);
    result = BaseNx_278920(v6, (__int64)v14, a2);
    if ((result & 1) != 0) {
      v9 = v5[1];
      v12_.v13 = 0;
      v12_.v12 = 0;
      result = BaseNx_278b50(v9, a2, (__int64)&v12_.v12);
      if ((result & 1) != 0) {
        result = (*(__int64 (**)(_QWORD*, _QWORD))(*v5 + 32LL))(v5, v14[0]);
        if (result != 0) {
          v11[0] = 0;
          v11[1] = 0;
          BaseNx_2ac830(v11, result);
          memset(v10, 0, sizeof(v10));
          result = BaseNx_2ac9a0((__int64)v11, (__int64)v10, v12_.v12, 0);
          if ((result & 1) != 0) {
            return BaseNx_287780(v5, v10[0], a3);
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_287780(_QWORD* a1, unsigned int a2, __int64 a3)
{
  __int64 v4;
  __int64 result;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD v13[4];
  unsigned int v14;
  __int64 v15;

  v4 = a1[1];
  v15 = 0;
  v14 = -1;
  result = GameRoutine_278e00(v4, a2, (__int64)&v14);
  if ((result & 1) != 0 && (v15 & 0x100000000LL) != 0) {
    v7 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v14);
    memset(v13, 0, sizeof(v13));
    GameRoutine_2888d0(v13, v7, 0);
    result = GameRoutine_288a60(v13);
    if ((result & 1) == 0) {
      v8 = GameRoutine_288890(v7);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a3 + 16LL))(
          a3, v8 + 4 * (_DWORD)v15 + 4);
      if (result != 0) {
        v9 = result;
        GameRoutine_1a0b950(result, v7, v8);
        *(_DWORD*)(v9 + v8) = 1413568326;
        memset(v12, 0, sizeof(v12));
        GameRoutine_2888d0(v12, v9, 1);
        GameRoutine_288ae0(v12);
        if ((_DWORD)v15 != 0) {
          v10 = 0;
          do {
            v11 = GameRoutine_288b50(v13, v10);
            GameRoutine_288c50(v12, v10++, v11);
          } while (v10 < (unsigned int)v15);
        }
        return (*(__int64 (**)(_QWORD*, _QWORD, __int64))(*a1 + 16LL))(a1, v14,
                                                                       v9);
      }
    }
  }
  return result;
}

__int64 GameHr_2878e0(__int64* a1, unsigned int a2, unsigned int a3)
{
  __int64 result;
  char v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;

  result = a1[1];
  if (result != 0) {
    v7 = GameRoutine_2785c0(result);
    result = 0;
    if (a2 != -1 && (v7 & 1) != 0) {
      v8 = HIBYTE(a2);
      result = 0;
      if (HIBYTE(a2) <= 2u) {
        if (v8 == 1) {
          v10 = (unsigned int)GameRoutine_278890(a1[1]);
          if (v10 == 3) {
            return GameRoutine_287ba0(a1, a2, a3);
          }
          else if (v10 == 1) {
            return GameRoutine_287a60(a1, a2, a3);
          }
          else {
            return 0;
          }
        }
        else if (v8 == 2) {
          return GameRoutine_287f00(a1, a2, a3);
        }
      }
      else {
        switch (v8) {
        case 3u:
          return GameRoutine_287cc0(a1, a2, a3);
        case 5u:
          return GameRoutine_287dc0(a1, a2, 0xFFFFFFFFLL);
        case 6u:
          v9 = GameRoutine_278770(a1[1], a2);
          return (*(__int64 (**)(__int64*, _QWORD))(*a1 + 32))(a1, v9) != 0;
        default:
          break;
        }
      }
    }
  }
  return result;
}

__int64 GameHr_287a60(_QWORD* a1, unsigned int a2, char a3)
{
  unsigned int v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;

  if ((a3 & 1) == 0 ||
      (v6 = BaseNx_278770(a1[1], a2),
       (result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v6)) !=
           0)) {
    if ((a3 & 0xC) != 0) {
      v8 = a1[1];
      v9 = 0;
      v12 = 0;
      v13 = 0;
      v10 = -1;
      v11 = -1;
      if ((BaseNx_2789b0(v8, (__int64)&v9, a2) & 1) == 0 ||
          (_DWORD)v10 != -1 &&
              (BaseNx_287cc0(a1, (unsigned int)v10, a3) & 1) == 0 ||
          HIDWORD(v10) != -1 &&
              (BaseNx_287cc0(a1, HIDWORD(v10), a3) & 1) == 0 ||
          (_DWORD)v11 != -1 &&
              (BaseNx_287cc0(a1, (unsigned int)v11, a3) & 1) == 0) {
        return 0;
      }
      if (HIDWORD(v11) != -1) {
        return (BaseNx_287cc0(a1, HIDWORD(v11), a3) & 1) != 0;
      }
    }
    return 1;
  }
  return result;
}

__int64 GameHr_287ba0(_QWORD* a1, __int64 a2, char a3)
{
  unsigned int v5;
  unsigned int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  struct {
    __int64 v11;
    __int64 v12;
    __int64 v13;
  } v11_;
  _QWORD v14[2];

  v5 = a2;
  v6 = BaseNx_278770(a1[1], a2);
  result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v6);
  if ((a3 & 2) != 0) {
    if (result == 0) {
      return result;
    }
    if ((a3 & 8) == 0) {
      return 1;
    }
  }
  else {
    if ((a3 & 8) != 0 && result == 0) {
      return result;
    }
    if ((a3 & 8) == 0) {
      return 1;
    }
  }
  v8 = result;
  v9 = a1[1];
  LODWORD(v11_.v12) = 0;
  v11_.v11 = 0;
  if ((BaseNx_278b50(v9, v5, (__int64)&v11_.v11) & 1) != 0) {
    v10 = v11_.v11;
    v14[0] = 0;
    v14[1] = 0;
    BaseNx_2ac830(v14, v8);
    v11_.v12 = 0;
    v11_.v13 = 0;
    v11_.v11 = 0;
    if (BaseNx_2ac9a0((__int64)v14, (__int64)&v11_.v11, v10, 0) &&
        (BaseNx_287dc0(a1, (unsigned int)v11_.v11, HIDWORD(v11_.v11)) & 1) !=
            0) {
      return 1;
    }
  }
  return 0;
}

__int64 GameHr_287cc0(_QWORD* a1, __int64 a2, char a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned int* v8;
  unsigned __int64 v9;
  unsigned int* v10;
  _QWORD v12[3];

  v5 = GameRoutine_278770(a1[1], a2);
  v6 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v5);
  if ((a3 & 4) == 0) {
    if ((a3 & 8) == 0 || v6 != 0) {
      if ((a3 & 8) == 0) {
        goto LABEL_15;
      }
      goto LABEL_8;
    }
  LABEL_14:
    LOBYTE(v7) = 0;
    return v7 & 1;
  }
  if (v6 == 0) {
    goto LABEL_14;
  }
  if ((a3 & 8) == 0) {
    goto LABEL_15;
  }
LABEL_8:
  memset(v12, 0, sizeof(v12));
  GameRoutine_28bb40(v12, v6);
  v7 = GameRoutine_28be40(v12);
  if (v7 == 0) {
    return v7 & 1;
  }
  v8 = (unsigned int*)v7;
  if (*(_DWORD*)v7 == 0) {
  LABEL_15:
    LOBYTE(v7) = 1;
    return v7 & 1;
  }
  v9 = 0;
  v10 = (unsigned int*)(v7 + 8);
  do {
    LOBYTE(v7) = GameRoutine_287dc0(a1, *(v10 - 1), *v10);
    if ((v7 & 1) == 0) {
      break;
    }
    v10 += 2;
    ++v9;
  } while (v9 < *v8);
  return v7 & 1;
}

__int64 GameHr_287dc0(_QWORD* a1, __int64 a2, unsigned int a3)
{
  unsigned int v5;
  unsigned int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned int v12;
  _QWORD v13[3];
  __int64 v14;
  int v15;
  __int64 v16;

  v5 = a2;
  v6 = GameRoutine_278770(a1[1], a2);
  result = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v6);
  if (result != 0) {
    v8 = result;
    v9 = a1[1];
    v16 = 0;
    v15 = -1;
    if ((GameRoutine_278e00(v9, v5, (__int64)&v15) & 1) != 0) {
      if (BYTE4(v16) != 1) {
        return 1;
      }
      v14 = 0;
      memset(v13, 0, sizeof(v13));
      GameRoutine_2888d0(v13, v8, 1);
      if (a3 == -1) {
        v10 = GameRoutine_288b30(v13);
        if (v10 == 0) {
          return 1;
        }
        v11 = v10;
        v12 = 0;
        while ((_BYTE)v14 != 0) {
          result = GameRoutine_288b50(v13, v12);
          if (result == 0) {
            return result;
          }
          if (v11 == ++v12) {
            return 1;
          }
        }
      }
      else if ((_BYTE)v14 != 0) {
        result = GameRoutine_288b50(v13, a3);
        if (result == 0) {
          return result;
        }
        return 1;
      }
    }
    return 0;
  }
  return result;
}

__int64 GameHr_288010(_QWORD* a1, unsigned int a2)
{
  __int64 v3;
  unsigned int v4;
  struct {
    __int128 v6;
    __int64 v7;
    int v8;
  } v6_;

  v3 = a1[1];
  if (v3 == 0) {
    return 0;
  }
  v4 = HIBYTE(a2);
  if (HIBYTE(a2) > 4u) {
    if (v4 != 5) {
      if (v4 == 6) {
        *(_QWORD*)&v6_.v6 = 0xFFFFFFFFLL;
        GameRoutine_278f00(v3, (__int64)&v6_.v6, a2);
        if ((_DWORD)v6_.v6 == -1) {
          return 0;
        }
        return (*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1);
      }
      return 0;
    }
    *(_QWORD*)((char*)&v6_.v6 + 4) = 0;
    LODWORD(v6_.v6) = -1;
    BaseNx_278e00(v3, a2, (__int64)&v6_.v6);
    if ((_DWORD)v6_.v6 != -1) {
      return (*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1);
    }
  }
  else {
    if (v4 != 1) {
      if (v4 == 3) {
        LODWORD(v6_.v6) = -1;
        BaseNx_278d70(v3, (__int64)&v6_.v6, a2);
        if ((_DWORD)v6_.v6 == -1) {
          return 0;
        }
        return (*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1);
      }
      return 0;
    }
    v6_.v8 = 0;
    v6_.v7 = 0;
    v6_.v6 = (__typeof__(v6_.v6)){0};
    BaseNx_278920(v3, (__int64)&v6_.v6, a2);
    if ((_DWORD)v6_.v6 != -1) {
      return (*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1);
    }
  }
  return 0;
}

__int64 GameHr_288380(__int64 result, __int64 a2)
{
  int v2;

  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 20) = *(unsigned __int8*)(a2 + 9);
  *(_DWORD*)(result + 24) = *(_DWORD*)(a2 + 4);
  v2 = *(unsigned __int8*)(a2 + 8);
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_DWORD*)(result + 80) = 0;
  *(_DWORD*)(result + 28) = v2;
  *(_DWORD*)(result + 96) = 1;
  *(_BYTE*)(result + 104) = 1;
  return result;
}

__int64 GameHr_2883d0(__int64 result, int* a2)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (a2 == nullptr) {
    return result;
  }
  v2 = *a2;
  if ((*a2 & 1) != 0) {
    *(_DWORD*)result = a2[1];
    *(_DWORD*)(result + 4) = a2[2];
    v2 = *a2;
    if ((*a2 & 4) == 0) {
    LABEL_4:
      if ((v2 & 2) == 0) {
        goto LABEL_5;
      }
      goto LABEL_22;
    }
  }
  else if ((v2 & 4) == 0) {
    goto LABEL_4;
  }
  *(_DWORD*)(result + 20) = a2[4];
  v2 = *a2;
  if ((*a2 & 2) == 0) {
  LABEL_5:
    if ((v2 & 8) == 0) {
      goto LABEL_6;
    }
    goto LABEL_23;
  }
LABEL_22:
  *(_DWORD*)(result + 24) = a2[3];
  v2 = *a2;
  if ((*a2 & 8) == 0) {
  LABEL_6:
    if ((v2 & 0x10) == 0) {
      goto LABEL_7;
    }
    goto LABEL_24;
  }
LABEL_23:
  *(_DWORD*)(result + 28) = a2[5];
  v2 = *a2;
  if ((*a2 & 0x10) == 0) {
  LABEL_7:
    if ((v2 & 0x20) == 0) {
      goto LABEL_8;
    }
    goto LABEL_25;
  }
LABEL_24:
  *(_QWORD*)(result + 32) = a2 + 6;
  v2 = *a2;
  if ((*a2 & 0x20) == 0) {
  LABEL_8:
    if ((v2 & 0x400) == 0) {
      goto LABEL_9;
    }
    goto LABEL_26;
  }
LABEL_25:
  *(_QWORD*)(result + 40) = a2 + 14;
  v2 = *a2;
  if ((*a2 & 0x400) == 0) {
  LABEL_9:
    if ((v2 & 0x800) == 0) {
      goto LABEL_10;
    }
    goto LABEL_27;
  }
LABEL_26:
  *(_QWORD*)(result + 48) = a2 + 32;
  v2 = *a2;
  if ((*a2 & 0x800) == 0) {
  LABEL_10:
    if ((v2 & 0x40) == 0) {
      goto LABEL_11;
    }
    goto LABEL_28;
  }
LABEL_27:
  *(_QWORD*)(result + 56) = a2 + 68;
  v2 = *a2;
  if ((*a2 & 0x40) == 0) {
  LABEL_11:
    if ((v2 & 0x1000) == 0) {
      goto LABEL_12;
    }
    goto LABEL_29;
  }
LABEL_28:
  *(_QWORD*)(result + 64) = a2 + 72;
  v2 = *a2;
  if ((*a2 & 0x1000) == 0) {
  LABEL_12:
    if ((v2 & 0x3000) != 0x2000) {
      goto LABEL_13;
    }
    goto LABEL_30;
  }
LABEL_29:
  *(_DWORD*)(result + 8) = a2[84];
  v2 = *a2;
  if ((*a2 & 0x3000) != 0x2000) {
  LABEL_13:
    if ((v2 & 0x4000) == 0) {
      goto LABEL_14;
    }
    goto LABEL_31;
  }
LABEL_30:
  *(_DWORD*)(result + 12) = a2[85];
  v2 = *a2;
  if ((*a2 & 0x4000) == 0) {
  LABEL_14:
    if ((v2 & 0x8000) == 0) {
      goto LABEL_15;
    }
    goto LABEL_32;
  }
LABEL_31:
  *(_DWORD*)(result + 16) = a2[86];
  v2 = *a2;
  if ((*a2 & 0x8000) == 0) {
  LABEL_15:
    if ((v2 & 0x10000) == 0) {
      goto LABEL_16;
    }
  LABEL_33:
    v3 = *(_DWORD*)(result + 96);
    *(_DWORD*)(result + 80) = -1;
    if (v3 == 1) {
      *(_QWORD*)(result + 88) = *((_QWORD*)a2 + 44);
      v2 = *a2;
      if ((*a2 & 0x20000) != 0) {
        goto LABEL_37;
      }
    }
    else {
      *(_DWORD*)(result + 96) = -1;
      v4 = *((_QWORD*)a2 + 44);
      *(_DWORD*)(result + 96) = 1;
      *(_QWORD*)(result + 88) = v4;
      v2 = *a2;
      if ((*a2 & 0x20000) != 0) {
        goto LABEL_37;
      }
    }
  LABEL_17:
    if ((v2 & 0x40000) == 0) {
      goto LABEL_18;
    }
  LABEL_38:
    *(_BYTE*)(result + 104) = *((_BYTE*)a2 + 360);
    if ((*a2 & 0x80000) == 0) {
      return result;
    }
    goto LABEL_39;
  }
LABEL_32:
  *(_DWORD*)(result + 80) = a2[87];
  v2 = *a2;
  if ((*a2 & 0x10000) != 0) {
    goto LABEL_33;
  }
LABEL_16:
  if ((v2 & 0x20000) == 0) {
    goto LABEL_17;
  }
LABEL_37:
  *(_QWORD*)(result + 72) = a2 + 78;
  v2 = *a2;
  if ((*a2 & 0x40000) != 0) {
    goto LABEL_38;
  }
LABEL_18:
  if ((v2 & 0x80000) == 0) {
    return result;
  }
LABEL_39:
  v5 = result;
  *(_DWORD*)(result + 80) = -1;
  v6 = (unsigned int)a2[91];
  v7 = GameRoutine_14e360(result, a2);
  result = GameRoutine_289c60(v7);
  LODWORD(v8) =
      ((v6 - (((unsigned int)v6 >> 1) & 0x55555555)) & 0x33333333) +
      ((((unsigned int)v6 - (((unsigned int)v6 >> 1) & 0x55555555)) >> 2) &
       0x33333333);
  LODWORD(v8) =
      (16843009 * (((unsigned int)v8 + ((unsigned int)v8 >> 4)) & 0xF0F0F0F)) >>
      24;
  if ((int)v8 >= (int)result) {
    v8 = (unsigned int)result;
  }
  else {
    v8 = (unsigned int)v8;
  }
  v9 = v6 | (v8 << 32);
  if (*(_DWORD*)(v5 + 96) != 0) {
    *(_DWORD*)(v5 + 96) = 0;
  }
  *(_QWORD*)(v5 + 88) = v9;
  return result;
}

__int64 GameHr_288800(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = a1 + 32;
  v2 = a1 + 20;
  if (*(_WORD*)(a1 + 32) != 26624) {
    v1 = 0;
  }
  if (*(_WORD*)(a1 + 20) != 26624) {
    v2 = v1;
  }
  return a1 + *(unsigned int*)(v2 + 4);
}

__int64 GameHr_288830(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v3 = *(unsigned __int16*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = v1 + 12;
  if (*(_WORD*)(v1 + 12) != 26624) {
    v4 = 0;
  }
  if (v2 == 26624) {
    v5 = v1;
  }
  else {
    v5 = v4;
  }
  return *(unsigned int*)(v5 + 4);
}

__int64 GameHr_288860(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = a1 + 32;
  v2 = a1 + 20;
  if (*(_WORD*)(a1 + 32) != 26625) {
    v1 = 0;
  }
  if (*(_WORD*)(a1 + 20) != 26625) {
    v2 = v1;
  }
  return a1 + *(unsigned int*)(v2 + 4);
}

__int64 GameHr_288890(__int64 a1)
{
  __int64 v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v3 = *(unsigned __int16*)(a1 + 20);
  v1 = a1 + 20;
  v2 = v3;
  v4 = v1 + 12;
  if (*(_WORD*)(v1 + 12) != 26625) {
    v4 = 0;
  }
  if (v2 == 26625) {
    v5 = v1;
  }
  else {
    v5 = v4;
  }
  return *(unsigned int*)(v5 + 4);
}

__int64 GameHr_288ab0(__int64 result)
{
  if (*(_BYTE*)(result + 24) == 1) {
    *(_BYTE*)(result + 24) = 0;
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)result = 0;
  }
  return result;
}

__int64 GameHr_288ae0(__int64 result)
{
  unsigned __int64 i;

  for (i = 0; *(_BYTE*)(result + 24) != 0;
       *(_QWORD*)(*(_QWORD*)(result + 16) + 8 * i++) = 0) {
    if (i >= **(unsigned int**)(result + 8)) {
      break;
    }
  }
  return result;
}

__int64 GameHr_288b30(__int64 a1)
{
  if (*(_BYTE*)(a1 + 24) != 0) {
    return **(unsigned int**)(a1 + 8);
  }
  else {
    return 0;
  }
}

__int64 GameHr_288b50(__int64 a1, unsigned int a2)
{
  unsigned int* v2;
  __int64 v3;
  __int64 v5;

  if (*(_BYTE*)(a1 + 24) == 0) {
    return 0;
  }
  v2 = *(unsigned int**)(a1 + 8);
  if (a2 >= *v2) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    return *(_QWORD*)(v3 + 8LL * a2);
  }
  v5 = v2[3 * a2 + 2];
  return GameRoutine_288860(*(_QWORD*)a1) + v5 + 8;
}

__int64 GameHr_288bc0(__int64 a1, unsigned int a2)
{
  if (*(_BYTE*)(a1 + 24) != 0) {
    return *(unsigned int*)(*(_QWORD*)(a1 + 8) + 12LL * a2 + 12);
  }
  else {
    return 0;
  }
}

__int64 GameHr_288c50(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 result;

  if (*(_BYTE*)(a1 + 24) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 16);
  if (v3 == 0 || a2 >= **(_DWORD**)(a1 + 8)) {
    return 0;
  }
  result = *(_QWORD*)(v3 + 8LL * a2);
  *(_QWORD*)(v3 + 8LL * a2) = a3;
  return result;
}

__int64 GameHr_288c90(char a1)
{
  unsigned int v1;

  if (a1 == 1) {
    v1 = 1;
  }
  else {
    v1 = 2;
  }
  if (a1 != 0) {
    return v1;
  }
  else {
    return 0;
  }
}

_DWORD* GameHr_288cb0(__int64 a1, __int64 a2, char a3)
{
  _DWORD* result;
  _DWORD* v7;

  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  result = (_DWORD*)GameRoutine_289110(a1 + 24);
  *(_BYTE*)(a1 + 32) = a3;
  if (a3 == 1) {
    *(_QWORD*)(a1 + 24) = a2;
  }
  else if (a3 == 0 && *(_DWORD*)a2 == 1447122758 &&
           *(__int16*)(a2 + 4) == -257 &&
           (unsigned int)(*(_DWORD*)(a2 + 8) - 0x10000) <= 0x200) {
    *(_QWORD*)a1 = a2;
    v7 = (_DWORD*)GameRoutine_288fc0(a2);
    result = (_DWORD*)GameRoutine_289000(*(_QWORD*)a1);
    if (v7 != nullptr && result != nullptr && *v7 == 1330007625 &&
        *result == 1096040772) {
      *(_QWORD*)(a1 + 8) = v7 + 2;
      *(_QWORD*)(a1 + 16) = result + 2;
    }
  }
  return result;
}

__int64 GameHr_288da0(_QWORD* a1, __int64 a2)
{
  unsigned __int8* v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
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

  if (*((_BYTE*)a1 + 32) == 1) {
    GameRoutine_289120(a1 + 3, a2);
  }
  else if (*((_BYTE*)a1 + 32) == 0) {
    v4 = (unsigned __int8*)a1[1];
    v5 = *v4;
    v6 = *((_DWORD*)v4 + 5);
    *(_DWORD*)(a2 + 8) = v6;
    if (v5 == 1) {
      v7 = 1;
    }
    else {
      v7 = 2;
    }
    if (v5 != 0) {
      v8 = v7;
    }
    else {
      v8 = 0;
    }
    *(_DWORD*)a2 = v8;
    *(_DWORD*)(a2 + 12) = *(_DWORD*)(a1[1] + 4LL);
    *(_BYTE*)(a2 + 4) = *(_BYTE*)(a1[1] + 1LL) == 1;
    *(_QWORD*)(a2 + 16) = *(unsigned int*)(a1[1] + 8LL);
    *(_QWORD*)(a2 + 24) = *(unsigned int*)(a1[1] + 12LL);
    *(_QWORD*)(a2 + 40) = *(unsigned int*)(*a1 + 12LL) - 32LL;
    v9 = 8;
    if (*(_DWORD*)(*a1 + 8LL) >> 9 > 0x80u) {
      v9 = 16;
    }
    v10 = v6 - 1;
    *(_QWORD*)(a2 + 32) = *(unsigned int*)(a1[1] + v9);
    if (v6 >= 1) {
      v11 = GameRoutine_289060(a1[1], 0);
      if (*(_DWORD*)(v11 + 12) != 0) {
        v12 = v11;
        v13 = GameRoutine_289090();
        v11 = v12;
        *(_QWORD*)(a2 + 60) = *(_QWORD*)v13;
        v15 = *(_QWORD*)(v13 + 16);
        v14 = *(_QWORD*)(v13 + 24);
        v16 = *(_QWORD*)(v13 + 30);
        *(_QWORD*)(a2 + 68) = *(_QWORD*)(v13 + 8);
        *(_QWORD*)(a2 + 90) = v16;
        *(_QWORD*)(a2 + 84) = v14;
        *(_QWORD*)(a2 + 76) = v15;
        LOWORD(v14) = *(_WORD*)(v13 + 42);
        *(_DWORD*)(a2 + 98) = *(_DWORD*)(v13 + 38);
        *(_WORD*)(a2 + 102) = v14;
      }
      *(_QWORD*)(a2 + 48) = GameRoutine_289080(v11, a1[2]);
      v17 = GameRoutine_289060(a1[1], v10);
      *(_DWORD*)(a2 + 56) =
          *(_DWORD*)(GameRoutine_289000(*a1) + 4) - *(_DWORD*)(v17 + 4) - 8;
      if (v6 != 1) {
        v18 = GameRoutine_289060(a1[1], 1);
        if (*(_DWORD*)(v18 + 12) != 0) {
          v19 = v18;
          v20 = GameRoutine_289090();
          v18 = v19;
          *(_QWORD*)(a2 + 116) = *(_QWORD*)v20;
          v22 = *(_QWORD*)(v20 + 16);
          v21 = *(_QWORD*)(v20 + 24);
          v23 = *(_QWORD*)(v20 + 30);
          *(_QWORD*)(a2 + 124) = *(_QWORD*)(v20 + 8);
          *(_QWORD*)(a2 + 146) = v23;
          *(_QWORD*)(a2 + 140) = v21;
          *(_QWORD*)(a2 + 132) = v22;
          LOWORD(v21) = *(_WORD*)(v20 + 42);
          *(_DWORD*)(a2 + 154) = *(_DWORD*)(v20 + 38);
          *(_WORD*)(a2 + 158) = v21;
        }
        *(_QWORD*)(a2 + 104) = GameRoutine_289080(v18, a1[2]);
        v24 = GameRoutine_289060(a1[1], v10);
        *(_DWORD*)(a2 + 112) =
            *(_DWORD*)(GameRoutine_289000(*a1) + 4) - *(_DWORD*)(v24 + 4) - 8;
      }
    }
  }
  return 1;
}

__int64 GameHr_288fc0(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 28672; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

__int64 GameHr_289000(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 28673; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

bool GameHr_2890a0(unsigned int a1)
{
  return a1 > 5 || (GameData_2140b88 | GameData_1b0c5d0[a1]) == -1;
}

__int64 GameHr_2890f0(int a1)
{
  unsigned int v1;

  if (a1 == 1) {
    v1 = 2;
  }
  else {
    v1 = 1;
  }
  if (a1 == 2) {
    return 3;
  }
  else {
    return v1;
  }
}

__int64 GameHr_289120(unsigned int** a1, __int64 a2)
{
  unsigned int* v2;
  unsigned int v3;
  unsigned int* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *a1;
  *(_BYTE*)(a2 + 4) = 0;
  *(_DWORD*)a2 = 2;
  *(_DWORD*)(a2 + 8) = 1;
  v3 = v2[2];
  *(_QWORD*)(a2 + 16) = 0;
  *(_DWORD*)(a2 + 12) = v3;
  *(_QWORD*)(a2 + 24) = *v2;
  v4 = *a1;
  *(_QWORD*)(a2 + 48) = v4 + 24;
  v6 = *(_QWORD*)(v2 + 7);
  v7 = *(_QWORD*)(v2 + 9);
  v8 = *(_QWORD*)(v2 + 11);
  *(_QWORD*)(a2 + 84) = *(_QWORD*)(v2 + 13);
  *(_QWORD*)(a2 + 76) = v8;
  *(_QWORD*)(a2 + 68) = v7;
  *(_QWORD*)(a2 + 60) = v6;
  LODWORD(v6) = *(unsigned int*)((char*)v2 + 62);
  *(_WORD*)(a2 + 96) = *((_WORD*)v2 + 33);
  *(_DWORD*)(a2 + 92) = v6;
  return 1;
}

__int64 GameHr_2891a0(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = GameRoutine_14e360(a1, a2);
  return GameRoutine_1a09b70(v2 + 1520);
}

__int64 GameHr_2891c0(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = GameRoutine_14e360(a1, a2);
  return GameRoutine_1a09b80(v2 + 1520);
}

__int64 GameHr_2891e0(__int64 result, char a2, char a3, char a4, char a5,
                      char a6, char a7, int a8, int a9, int a10, int a11)
{
  bool v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;

  *(_BYTE*)(result + 48) = a7 & a4 & ((a5 | a6) ^ 1);
  *(_DWORD*)(result + 24) = a10;
  *(_DWORD*)(result + 28) = a11;
  *(_BYTE*)(result + 38) = a7 & a4 & ((a5 | a6) ^ 1) ^ a4;
  v11 = a10 + a11 == 0;
  *(_BYTE*)(result + 33) = a5 & v11;
  *(_BYTE*)(result + 34) = a6 & v11;
  if ((a2 & 1) != 0) {
    v12 = 2;
  }
  else {
    v12 = 6;
  }
  if (((unsigned __int8)(a7 & a4) & ((unsigned __int8)(a5 | a6) ^ 1) & 1) !=
      0) {
    *(_DWORD*)(result + 16) = a8;
    *(_DWORD*)(result + 20) = a9 + v12 + 6 * a10 + 2 * a11;
  }
  else {
    v13 = 2 * v12;
    v14 = -a11;
    if ((a3 & 1) != 0) {
      v13 = 30;
      v15 = 6;
    }
    else {
      v15 = 2;
    }
    if ((a5 & 1) != 0) {
      v16 = 2;
    }
    else {
      v15 = 0;
      v16 = 1;
    }
    v17 = v15 + v13;
    if ((a3 & 1) != 0) {
      v18 = v12;
    }
    else {
      v18 = 0;
    }
    v19 = v13 + 30 * a10;
    v20 = v17 + v18;
    if ((a6 & 1) != 0) {
      ++v16;
      v17 = v20;
    }
    if (a11 != 0) {
      v21 = v19 + 10 * a11;
    }
    else {
      v21 = v19;
    }
    if (a11 != 0) {
      v22 = a10 + 1 + a11;
    }
    else {
      v22 = a10 + 1;
    }
    if (a10 == v14) {
      v23 = v17;
    }
    else {
      v23 = v21;
    }
    if (a10 == v14) {
      v24 = v16;
    }
    else {
      v24 = v22;
    }
    if ((a4 & 1) != 0) {
      v25 = v24;
    }
    else {
      v23 = v12;
      v25 = 0;
    }
    *(_DWORD*)(result + 16) = v25;
    *(_DWORD*)(result + 20) = v23;
  }
  return result;
}

__int64 GameHr_2892d0(__int64 a1)
{
  __int64 result;

  *(_BYTE*)a1 = 0;
  *(_BYTE*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 244) = 0;
  *(_QWORD*)(a1 + 252) = 0;
  *(_QWORD*)(a1 + 236) = 0;
  *(_QWORD*)(a1 + 260) = 0;
  SoundVoiceNx_2ab7a0(a1 + 1328);
  SoundVoiceNx_2b4be0(a1 + 1384);
  *(_QWORD*)(a1 + 1488) = 0;
  *(_DWORD*)(a1 + 1496) = 0;
  *(_WORD*)(a1 + 1520) = 0;
  *(_QWORD*)(a1 + 1536) = 0;
  *(_DWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1504) = a1 + 1504;
  *(_QWORD*)(a1 + 1512) = a1 + 1504;
  *(_QWORD*)(a1 + 1524) = 0;
  nn_os_InitializeMutex(a1 + 1520, true, 0);
  *(_QWORD*)(a1 + 1688) = 0;
  *(_QWORD*)(a1 + 1680) = 0;
  *(_QWORD*)(a1 + 1672) = 0;
  *(_QWORD*)(a1 + 1664) = 0;
  *(_QWORD*)(a1 + 1656) = 0;
  *(_QWORD*)(a1 + 1648) = 0;
  *(_QWORD*)(a1 + 1640) = 0;
  *(_QWORD*)(a1 + 1632) = 0;
  *(_QWORD*)(a1 + 1696) = 0x10000000100LL;
  *(_QWORD*)(a1 + 1624) = 0;
  *(_QWORD*)(a1 + 1616) = 0;
  *(_WORD*)(a1 + 1720) = 0;
  *(_QWORD*)(a1 + 1736) = 0;
  *(_DWORD*)(a1 + 1744) = 0;
  *(_QWORD*)(a1 + 1724) = 0;
  nn_os_InitializeMutex(a1 + 1720, true, 0);
  *(_WORD*)(a1 + 1752) = 0;
  *(_QWORD*)(a1 + 1768) = 0;
  *(_DWORD*)(a1 + 1776) = 0;
  *(_QWORD*)(a1 + 1756) = 0;
  nn_os_InitializeMutex(a1 + 1752, true, 0);
  *(_WORD*)(a1 + 1784) = 0;
  *(_QWORD*)(a1 + 1800) = 0;
  *(_DWORD*)(a1 + 1808) = 0;
  *(_QWORD*)(a1 + 1788) = 0;
  nn_os_InitializeMutex(a1 + 1784, true, 0);
  *(_WORD*)(a1 + 1816) = 0;
  *(_QWORD*)(a1 + 1832) = 0;
  *(_DWORD*)(a1 + 1840) = 0;
  *(_QWORD*)(a1 + 1820) = 0;
  nn_os_InitializeMutex(a1 + 1816, true, 0);
  *(_WORD*)(a1 + 1848) = 0;
  *(_QWORD*)(a1 + 1864) = 0;
  *(_DWORD*)(a1 + 1872) = 0;
  *(_QWORD*)(a1 + 1852) = 0;
  nn_os_InitializeMutex(a1 + 1848, true, 0);
  *(_DWORD*)(a1 + 1888) = 0;
  *(_BYTE*)(a1 + 1912) = 0;
  *(_BYTE*)(a1 + 1962) = 0;
  *(_QWORD*)(a1 + 1936) = 0;
  *(_QWORD*)(a1 + 1944) = 0;
  *(_DWORD*)(a1 + 1952) = 0;
  *(_DWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 240) = 1065353216;
  *(_QWORD*)(a1 + 248) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 256) = 1065353216;
  *(_QWORD*)(a1 + 224) = 0x400000004LL;
  *(_QWORD*)(a1 + 232) = 0x3F80000000000002LL;
  nn_audio_InitializeAudioRendererParameter(a1 + 1552);
  *(_DWORD*)(a1 + 1580) = 0;
  *(_BYTE*)(a1 + 1584) = 0;
  *(_QWORD*)(a1 + 1552) = 0xF00000BB80LL;
  *(_QWORD*)(a1 + 1560) = 0x10000001ELL;
  *(_DWORD*)(a1 + 1568) = 96;
  *(_QWORD*)(a1 + 1588) = 0;
  *(_QWORD*)(a1 + 1572) = 0xE00000001LL;
  result = nn_audio_IsValidAudioRendererParameter(a1 + 1552);
  if ((result & 1) == 0) {
    nn_diag_detail_AbortImpl_1a0a590();
  }
  return result;
}

__int64 GameHr_2899a0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1700) != 0) {
    return 2;
  }
  else {
    return 6;
  }
}

__int64 GameHr_2899c0(__int64 result)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  void* v5;
  __int64 v6;
  void* v7;

  if (*(_QWORD*)(result + 1936) != 0 && *(_DWORD*)(result + 1888) == 1) {
    v2 = result;
    if ((*(_BYTE*)(result + 1912) & 1) == 0) {
      v3 = *(_QWORD*)(result + 1920);
      v4 = *(_QWORD*)(result + 1928);
      v5 = SoundVoiceNX_14e360();
      nn_os_LockMutex((__int64)v5 + 1720);
      v6 = nn_audio_ReadCircularBufferSink(v2 + 1880, v3, v4);
      v7 = SoundVoiceNX_14e360();
      result = nn_os_UnlockMutex((__int64)v7 + 1720);
      if (v6 != 0) {
        return GameRoutine_2b8480_alt1(*(_QWORD*)(v2 + 1936));
      }
    }
  }
  return result;
}

__int64 GameHr_289a60(__int64 a1, unsigned int a2)
{
  if (a2 >= 4) {
    nn_detail_UnexpectedDefaultImpl();
  }
  return *(_QWORD*)(a1 + 1944) + 40LL * a2;
}

__int64 GameHr_289a90(__int64 a1, unsigned int a2)
{
  if (*(_BYTE*)a1 != 1) {
    return 0;
  }
  if (a2 >= 4) {
    nn_detail_UnexpectedDefaultImpl();
  }
  return *(unsigned int*)(*(_QWORD*)(a1 + 1944) + 40LL * a2 + 32);
}

__int64 GameHr_289b50(__int64 result, unsigned int a2, char a3)
{
  __int64 v3;
  __int64 v4;
  void* v6;
  signed int v7;
  unsigned int v8;
  __int64 v9;
  void* v10;
  int v11;
  _BYTE v12[8];

  if (a2 >= 4) {
    nn_detail_UnexpectedDefaultImpl();
  }
  v3 = *(_QWORD*)(result + 1944) + 40LL * a2;
  if ((a3 & 1) != 0 || *(_DWORD*)(v3 + 32) == 2) {
    v4 = result;
    v12[0] = FinalMix_Unknown8(result + 1384, a2, 0);
    v12[1] = v12[0] + 1;
    v12[2] = v12[0] + 2;
    v12[3] = v12[0] + 3;
    v12[4] = v12[0] + 4;
    v12[5] = v12[0] + 5;
    v6 = SoundVoiceNX_14e360();
    nn_os_LockMutex((__int64)v6 + 1720);
    v7 = *(_DWORD*)(v4 + 1712);
    if ((signed int)(a2 - v7) >= (signed __int32)*(_DWORD*)(v4 + 1716)) {
      v8 = 0;
    }
    else {
      v8 = 2;
    }
    if ((int)a2 >= v7) {
      v9 = v8;
    }
    else {
      v9 = 6;
    }
    v11 = nn_audio_AddCircularBufferSink(v4 + 24, v3, v4 + 1456, v12, v9,
                                         *(_QWORD*)(v3 + 16),
                                         *(_QWORD*)(v3 + 24), 2);
    if (v11 != 0) {
      nn_diag_detail_AbortImpl_1a0a080((__int64)&v11);
    }
    v10 = SoundVoiceNX_14e360();
    result = nn_os_UnlockMutex((__int64)v10 + 1720);
    *(_DWORD*)(v3 + 32) = 1;
  }
  return result;
}

__int64 GameHr_289c80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  void* v10;
  void* v11;
  __int64 result;
  void* v13;
  int MemoryPoolStateEPKNS0_14MemoryPoolTypeE;
  void* v15;
  int v16;

  v10 = SoundVoiceNX_14e360();
  nn_os_LockMutex((__int64)v10 + 1720);
  nn_audio_AcquireMemoryPool(a1 + 24, a2, a3, a4);
  nn_audio_RequestAttachMemoryPool(a2);
  v11 = SoundVoiceNX_14e360();
  nn_os_UnlockMutex((__int64)v11 + 1720);
  if ((a5 & 1) != 0 && (*(_BYTE*)(a1 + 1701) & 1) != 0 &&
      (*(_BYTE*)(a1 + 1962) & 1) == 0) {
    while (1) {
      v13 = SoundVoiceNX_14e360();
      nn_os_LockMutex((__int64)v13 + 1720);
      MemoryPoolStateEPKNS0_14MemoryPoolTypeE = nn_audio_GetMemoryPoolState(a2);
      v15 = SoundVoiceNX_14e360();
      result = nn_os_UnlockMutex((__int64)v15 + 1720);
      if (MemoryPoolStateEPKNS0_14MemoryPoolTypeE == 1) {
        break;
      }
      nn_os_SleepThread(5000000);
    }
  }
  else {
    result = SoundArchivePlayer_289d60(a1);
    v16 = result;
    if ((_DWORD)result != 0) {
      nn_diag_detail_AbortImpl_1a0a080((__int64)&v16);
    }
  }
  return result;
}

__int64 GameHr_289d60(__int64 a1)
{
  void* v2;
  unsigned int updated;
  void* v4;

  v2 = SoundVoiceNX_14e360();
  nn_os_LockMutex((__int64)v2 + 1720);
  updated = nn_audio_RequestUpdateAudioRenderer(*(_QWORD*)(a1 + 8),
                                                *(_QWORD*)(a1 + 16), a1 + 24);
  atomic_fetch_add((atomic_ullong* volatile)(a1 + 200), 1u);
  if (updated != 0) {
    if ((updated & 0x3FFFFF) == 0x5499) {
      if (*(_BYTE*)(a1 + 1703) == 1) {
        nn_diag_detail_AbortImpl_1a0a590();
      }
      updated = 0;
    }
    else if ((updated & 0x3FFFFF) == 0x5299) {
      nn_diag_detail_AbortImpl_1a0a590();
    }
  }
  v4 = SoundVoiceNX_14e360();
  nn_os_UnlockMutex((__int64)v4 + 1720);
  return updated;
}

__int64 GameHr_28aca0(__int64 result, int a2, unsigned int a3)
{
  __int64 v3;
  void* v4;
  __int64 v5;
  __int64 i;

  if (*(_DWORD*)(result + 224 + 4LL * a3) != a2) {
    v3 = result;
    *(_DWORD*)(result + 224 + 4LL * a3) = a2;
    v4 = BaseNx_2a1860();
    v5 = BaseNx_2a0820((__int64)v4, 32, 8);
    *(_DWORD*)(v5 + 24) = 8;
    *(_DWORD*)(v5 + 8) = 80;
    result = BaseNx_2a0e80((__int64)v4, (_QWORD*)v5);
    if (*(_BYTE*)(v3 + 1696) == 1) {
      BaseNx_2891a0();
      for (i = *(_QWORD*)(v3 + 1512); i != v3 + 1504; i = *(_QWORD*)(i + 8)) {
        FinalMix_2b5a60((_QWORD*)(i - 72));
      }
      BaseNx_2891c0();
      return FinalMix_2b5a60((_QWORD*)(v3 + 1384));
    }
  }
  return result;
}

__int64 GameHr_28b020(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  char v9;
  char v10;
  __int64 v11;
  __int64 i;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  _BYTE v23[4];

  GameRoutine_1a09b70(a1 + 1752);
  if (*(_BYTE*)(a1 + 1696) == 1 && *(_BYTE*)(a1 + 1697) == 1 &&
      (*(_BYTE*)(a1 + 1960) & 1) != 0) {
    v5 = *(int*)(a1 + 1496);
    if ((_DWORD)v5 != 0) {
      v6 = *(_QWORD*)(a1 + 1488);
      v7 = v5 << 8;
      do {
        v8 = GameRoutine_2b55d0(v6, 1);
        GameRoutine_2b78f0(v6, 1, (v8 & 1) == 0);
        v9 = GameRoutine_2b55d0(v6, 2);
        GameRoutine_2b78f0(v6, 2, (v9 & 1) == 0);
        v10 = GameRoutine_2b55d0(v6, 3);
        GameRoutine_2b78f0(v6, 3, (v10 & 1) == 0);
        v6 += 256;
        v7 -= 256;
      } while (v7 != 0);
    }
  }
  v23[0] = 0;
  GameRoutine_2891a0((__int64)v23, v4);
  for (i = *(_QWORD*)(a1 + 1512); i != a1 + 1504; i = *(_QWORD*)(i + 8)) {
    GameRoutine_2b6e40(i - 72, a2);
  }
  v13 = GameRoutine_2891c0((__int64)v23, v11);
  v14 = *(_DWORD*)(a1 + 244);
  v15 = *(_DWORD*)(a1 + 248);
  if (v15 < v14) {
    v16 = v15 + a2;
    if (v16 < v14) {
      v14 = v16;
    }
    *(_DWORD*)(a1 + 248) = v14;
    v17 = GameRoutine_2aa100(v13);
    v13 = GameRoutine_2aa920(v17, 64);
  }
  v18 = *(_DWORD*)(a1 + 264);
  v19 = *(_DWORD*)(a1 + 260);
  if (v18 < v19) {
    v20 = v18 + a2;
    if (v20 < v19) {
      v19 = v20;
    }
    *(_DWORD*)(a1 + 264) = v19;
    v21 = GameRoutine_2aa100(v13);
    GameRoutine_2aa920(v21, 64);
  }
  return GameRoutine_1a09b80(a1 + 1752);
}

__int64 GameHr_28b1a0(__int64 result)
{
  __int64 v1;
  __int64 i;

  if (*(_BYTE*)(result + 1696) == 1) {
    v1 = result;
    BaseNx_2891a0();
    for (i = *(_QWORD*)(v1 + 1512); i != v1 + 1504; i = *(_QWORD*)(i + 8)) {
      FinalMix_2b5960((_QWORD*)(i - 72));
    }
    BaseNx_2891c0();
    return FinalMix_2b5960((_QWORD*)(v1 + 1384));
  }
  return result;
}

float GameHr_28b230(__int64 a1)
{
  int v1;
  int v2;
  float result;

  v1 = *(_DWORD*)(a1 + 264);
  v2 = *(_DWORD*)(a1 + 260);
  if (v1 >= v2) {
    result = *(float*)(a1 + 256);
  }
  else {
    result =
        *(float*)(a1 + 252) +
        (float)((float)((float)(*(float*)(a1 + 256) - *(float*)(a1 + 252)) *
                        (float)v1) /
                (float)v2);
  }
  *(float*)(a1 + 252) = result;
  *(_DWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 256) = 0x300000000LL;
  return result;
}

__int64 GameHr_28b290(__int64 a1, _QWORD* a2)
{
  __int64 v4;

  BaseNx_2891a0();
  v4 = a2[9];
  a2 += 9;
  *a2 = *(_QWORD*)(a1 + 1504);
  *(_QWORD*)(v4 + 8) = a1 + 1504;
  *(_QWORD*)(*(_QWORD*)(a1 + 1504) + 8LL) = a2;
  *(_QWORD*)(a1 + 1504) = v4;
  return BaseNx_2891c0();
}

__int64 GameHr_28b300(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64* v5;
  __int64 v6;

  BaseNx_2891a0();
  v4 = *(__int64**)(a1 + 1512);
  if (v4 != (__int64*)(a1 + 1504)) {
    while (1) {
      v5 = (__int64*)v4[1];
      if (a2 == v4 - 9) {
        break;
      }
      v4 = (__int64*)v4[1];
      if (v5 == (__int64*)(a1 + 1504)) {
        return BaseNx_2891c0();
      }
    }
    v6 = *v5;
    *(_QWORD*)(*v4 + 8) = v5;
    *v5 = *v4;
    *(_QWORD*)(v6 + 8) = v4;
    *v4 = v6;
  }
  return BaseNx_2891c0();
}

__int64 GameHr_28b3a0(__int64 a1, int a2)
{
  __int64 v4;
  int v5;
  __int64 v7;

  if ((*(_BYTE*)(a1 + 1697) & 1) != 0) {
    return *(_QWORD*)(a1 + 1488) + ((__int64)a2 << 8);
  }
  BaseNx_2891a0();
  v4 = *(_QWORD*)(a1 + 1512);
  if (v4 == a1 + 1504) {
  LABEL_6:
    BaseNx_2891c0();
    return *(_QWORD*)(a1 + 1488) + ((__int64)a2 << 8);
  }
  v5 = a2 + 1;
  while (--v5 != 0) {
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == a1 + 1504) {
      goto LABEL_6;
    }
  }
  v7 = v4 - 72;
  BaseNx_2891c0();
  return v7;
}

__int64 GameHr_28b440(__int64 a1, int a2)
{
  __int64 v4;
  int v5;
  __int64 v7;

  if ((*(_BYTE*)(a1 + 1697) & 1) != 0) {
    return *(_QWORD*)(a1 + 1488) + ((__int64)a2 << 8);
  }
  BaseNx_2891a0();
  v4 = *(_QWORD*)(a1 + 1512);
  if (v4 == a1 + 1504) {
  LABEL_6:
    BaseNx_2891c0();
    return *(_QWORD*)(a1 + 1488) + ((__int64)a2 << 8);
  }
  v5 = a2 + 1;
  while (--v5 != 0) {
    v4 = *(_QWORD*)(v4 + 8);
    if (v4 == a1 + 1504) {
      goto LABEL_6;
    }
  }
  v7 = v4 - 72;
  BaseNx_2891c0();
  return v7;
}

__int64 GameHr_28b4e0(__int64 a1, int a2)
{
  if (a2 > 1) {
    if (a2 == 2) {
      return *(_QWORD*)(a1 + 1488) + 512LL;
    }
    else {
      if (a2 != 3) {
        goto LABEL_10;
      }
      return *(_QWORD*)(a1 + 1488) + 768LL;
    }
  }
  else {
    if (a2 != 0) {
      if (a2 == 1) {
        return *(_QWORD*)(a1 + 1488) + 256LL;
      }
    LABEL_10:
      nn_detail_UnexpectedDefaultImpl();
    }
    return *(_QWORD*)(a1 + 1488);
  }
}

float GameHr_28b580(__int64 a1)
{
  int v1;
  int v2;
  float v3;
  int v4;
  int v5;

  v1 = *(_DWORD*)(a1 + 244);
  v2 = *(_DWORD*)(a1 + 248);
  if (v2 >= v1) {
    v3 = *(float*)(a1 + 240);
    v4 = *(_DWORD*)(a1 + 264);
    v5 = *(_DWORD*)(a1 + 260);
    if (v4 >= v5) {
      return v3 * *(float*)(a1 + 256);
    }
  }
  else {
    v3 = *(float*)(a1 + 236) +
         (float)((float)((float)(*(float*)(a1 + 240) - *(float*)(a1 + 236)) *
                         (float)v2) /
                 (float)v1);
    v4 = *(_DWORD*)(a1 + 264);
    v5 = *(_DWORD*)(a1 + 260);
    if (v4 >= v5) {
      return v3 * *(float*)(a1 + 256);
    }
  }
  return v3 * (float)(*(float*)(a1 + 252) +
                      (float)((float)((float)(*(float*)(a1 + 256) -
                                              *(float*)(a1 + 252)) *
                                      (float)v4) /
                              (float)v5));
}

__int64 GameHr_28b600(__int64 result, __int64 a2, float a3)
{
  int v3;
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;

  v3 = *(_DWORD*)(result + 244);
  v4 = *(_DWORD*)(result + 248);
  if (a3 < 0.0) {
    a3 = 0.0;
  }
  v5 = ((int)a2 + 4) / 5u;
  if (v4 < v3) {
    *(float*)(result + 236) = *(float*)(result + 236) +
                              (float)((float)((float)(*(float*)(result + 240) -
                                                      *(float*)(result + 236)) *
                                              (float)v4) /
                                      (float)v3);
    *(float*)(result + 240) = a3;
    *(_DWORD*)(result + 244) = v5;
    *(_DWORD*)(result + 248) = 0;
    if ((_DWORD)a2 != 0) {
      return result;
    }
  LABEL_7:
    v6 = GameRoutine_2a1860(result, a2);
    v7 = GameRoutine_2a0820(v6, 32, 8, 1);
    *(_DWORD*)(v7 + 8) = 80;
    *(_DWORD*)(v7 + 24) = 64;
    return GameRoutine_2a0e80(v6, v7);
  }
  *(_DWORD*)(result + 236) = *(_DWORD*)(result + 240);
  *(float*)(result + 240) = a3;
  *(_DWORD*)(result + 244) = v5;
  *(_DWORD*)(result + 248) = 0;
  if ((_DWORD)a2 == 0) {
    goto LABEL_7;
  }
  return result;
}

__int64 GameHr_28b6d0(__int64 a1, int a2, int a3, int a4, long double a5,
                      long double a6, long double a7)
{
  __int64 v7;
  __int64 v9;
  __int64 v11;
  __int64 result;

  *(_QWORD*)&a6 = 0xC3000000C3000000LL;
  *(_QWORD*)&a7 = 0x4300000043000000LL;
  v7 = *(_QWORD*)(a1 + 1488);
  v9 = (unsigned int)(a2 + 1);
  v11 = v7 + ((__int64)a4 << 8);
  if (*(float*)&a5 >= -128.0) {
    *(float*)&a6 = *(float*)&a5;
  }
  if (*(float*)&a5 <= 128.0) {
    *(float*)&a5 = *(float*)&a6;
  }
  else {
    *(float*)&a5 = 128.0;
  }
  result = GameRoutine_2b7850(v7 + ((__int64)a4 << 8), v9, a5, a6, a7);
  if (a3 == 0) {
    return GameRoutine_2b71e0(v11, (unsigned int)(a2 + 1));
  }
  return result;
}

__int64 GameHr_28bb40(__int64 result, __int64 a2)
{
  __int64 v2;

  *(_BYTE*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  if (a2 != 0 && *(_DWORD*)a2 == 1263419974 && *(__int16*)(a2 + 4) == -257 &&
      *(_DWORD*)(a2 + 8) == 0x10000) {
    *(_QWORD*)result = a2;
    v2 = result;
    result = GameRoutine_28be60(a2);
    if (*(_DWORD*)result == 1330007625) {
      *(_QWORD*)(v2 + 8) = result + 8;
      *(_BYTE*)(v2 + 16) = 1;
    }
  }
  return result;
}

_QWORD* GameHr_28bbd0(_QWORD* result, __int64 a2)
{
  _QWORD* v2;

  if (a2 != 0 && *(_DWORD*)a2 == 1263419974 && *(__int16*)(a2 + 4) == -257 &&
      *(_DWORD*)(a2 + 8) == 0x10000) {
    *result = a2;
    v2 = result;
    result = (_QWORD*)GameRoutine_28be60(a2);
    if (*(_DWORD*)result == 1330007625) {
      v2[1] = result + 1;
      *((_BYTE*)v2 + 16) = 1;
    }
  }
  return result;
}

__int64 GameHr_28bc60(__int64 result)
{
  if (*(_BYTE*)(result + 16) == 1) {
    *(_BYTE*)(result + 16) = 0;
    *(_QWORD*)result = 0;
    *(_QWORD*)(result + 8) = 0;
  }
  return result;
}

__int64 GameHr_28bc80(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                      unsigned int a5)
{
  __int64 result;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  _DWORD* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  int v19;
  char v20;

  result = 0;
  if ((a3 & 0x80000000) == 0 && *(_BYTE*)(a1 + 16) != 0) {
    if ((signed int)a3 >= *(_DWORD*)GameRoutine_28bed0(*(_QWORD*)(a1 + 8))) {
      return 0;
    }
    else {
      result = GameRoutine_28bee0(*(_QWORD*)(a1 + 8), a3);
      if (result != 0) {
        result = GameRoutine_28bf20(result, a4);
        if (result != 0) {
          result = GameRoutine_28c000(result, a5);
          if (result != 0) {
            v11 = (unsigned int*)result;
            v12 = *(_QWORD*)(a1 + 8);
            v13 = *v11;
            v14 = (_DWORD*)GameRoutine_28bec0(v12);
            if ((unsigned int)v13 >= *v14) {
              return 0;
            }
            v15 = &v14[2 * v13];
            if (v15[2] == -1) {
              return 0;
            }
            else {
              *(_DWORD*)a2 = v15[1];
              *(_DWORD*)(a2 + 4) = v15[2];
              v16 = GameRoutine_28c2c0(v11);
              if (v16 != 0) {
                *(_BYTE*)(a2 + 17) = *(_BYTE*)v16;
                *(_BYTE*)(a2 + 18) = *(_BYTE*)(v16 + 4);
                *(_BYTE*)(a2 + 19) = *(_BYTE*)(v16 + 8);
                *(_DWORD*)(a2 + 8) = *(_DWORD*)(v16 + 12);
                *(_BYTE*)(a2 + 20) = *(_BYTE*)(v16 + 16);
                *(_BYTE*)(a2 + 21) = *(_BYTE*)(v16 + 17);
                v17 = *(_BYTE*)(v16 + 18);
                v18 = v16 + 32;
                *(_BYTE*)(a2 + 22) = v17;
              }
              else {
                *(_BYTE*)(a2 + 17) = GameRoutine_28c0d0(v11);
                *(_BYTE*)(a2 + 18) = GameRoutine_28c0f0(v11);
                *(_BYTE*)(a2 + 19) = GameRoutine_28c110(v11);
                *(float*)(a2 + 8) = GameRoutine_28c140(v11);
                *(_BYTE*)(a2 + 20) = GameRoutine_28c170(v11) & 1;
                *(_BYTE*)(a2 + 21) = GameRoutine_28c1c0(v11);
                *(_BYTE*)(a2 + 22) = GameRoutine_28c200(v11);
                v18 = GameRoutine_28c240(v11);
              }
              v19 = *(_DWORD*)v18;
              v20 = *(_BYTE*)(v18 + 4);
              *(_BYTE*)(a2 + 16) = v20;
              *(_DWORD*)(a2 + 12) = v19;
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 GameHr_28be40(__int64 a1)
{
  if (*(_BYTE*)(a1 + 16) != 0) {
    return GameRoutine_28bec0(*(_QWORD*)(a1 + 8));
  }
  else {
    return 0;
  }
}

__int64 GameHr_28be60(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 22528; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

char* GameHr_28bee0(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  v2 = (unsigned int*)(a1 + *(int*)(a1 + 12));
  if (LOWORD(v2[2 * a2 + 1]) == 22784 && a2 < *v2) {
    return (char*)v2 + (int)v2[2 * a2 + 2];
  }
  else {
    return nullptr;
  }
}

unsigned __int8* GameHr_28bf20(unsigned __int16* a1, unsigned int a2)
{
  int v2;
  unsigned __int8* v3;
  unsigned __int8* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;

  v2 = *a1;
  v3 = (unsigned __int8*)a1 + *((unsigned int*)a1 + 1);
  if (v2 == 24578) {
    v9 = *v3;
    v10 = a2 >= v9;
    v11 = a2 - v9;
    if (v10 && a2 <= v3[1]) {
      return &v3[*(int*)&v3[8 * v11 + 8]];
    }
    return nullptr;
  }
  if (v2 != 24577) {
    if (v2 == 24576) {
      return &v3[*((int*)v3 + 1)];
    }
    return nullptr;
  }
  if (*(_DWORD*)v3 == 0) {
    return nullptr;
  }
  v5 = v3 + 4;
  v6 = 0;
  v7 = *(unsigned int*)v3;
  while (1) {
    v8 = *v5++;
    if (a2 <= v8) {
      break;
    }
    v6 += 0x100000000LL;
    if (--v7 == 0) {
      return nullptr;
    }
  }
  return &v3[*(int*)&v3[((*(_DWORD*)v3 + 3) & 0xFFFFFFFC) + 8 + (v6 >> 29)]];
}

unsigned __int8* GameHr_28c000(unsigned __int16* a1, unsigned int a2)
{
  int v2;
  unsigned __int8* v3;
  unsigned __int8* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  bool v10;
  unsigned int v11;

  v2 = *a1;
  v3 = (unsigned __int8*)a1 + *((unsigned int*)a1 + 1);
  if (v2 == 24578) {
    v9 = *v3;
    v10 = a2 >= v9;
    v11 = a2 - v9;
    if (v10 && a2 <= v3[1]) {
      return &v3[*(int*)&v3[8 * v11 + 8]];
    }
    return nullptr;
  }
  if (v2 != 24577) {
    if (v2 == 24576) {
      return &v3[*((int*)v3 + 1)];
    }
    return nullptr;
  }
  if (*(_DWORD*)v3 == 0) {
    return nullptr;
  }
  v5 = v3 + 4;
  v6 = 0;
  v7 = *(unsigned int*)v3;
  while (1) {
    v8 = *v5++;
    if (a2 <= v8) {
      break;
    }
    v6 += 0x100000000LL;
    if (--v7 == 0) {
      return nullptr;
    }
  }
  return &v3[*(int*)&v3[((*(_DWORD*)v3 + 3) & 0xFFFFFFFC) + 8 + (v6 >> 29)]];
}

__int64 GameHr_28c0d0(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 4) & 1) != 0) {
    return *(unsigned int*)(a1 + 8);
  }
  else {
    return 60;
  }
}

__int64 GameHr_28c0f0(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 4);
  v1 = a1 + 4;
  v2 = v3;
  if ((v3 & 2) != 0) {
    return *(unsigned int*)(v1 + 4LL * (v2 & 1) + 4);
  }
  else {
    return 127;
  }
}

__int64 GameHr_28c110(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 4);
  v1 = a1 + 4;
  v2 = v3;
  if ((v3 & 4) != 0) {
    return *(unsigned int*)(v1 +
                            4 * ((v2 & 1) + (unsigned int)((v2 & 2) != 0)) + 4);
  }
  else {
    return 64;
  }
}

float GameHr_28c140(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;
  float result;

  v3 = *(_DWORD*)(a1 + 4);
  v1 = a1 + 4;
  v2 = v3;
  result = 1.0;
  if ((v3 & 8) != 0) {
    return *(float*)(v1 + (v2 & 4) +
                     4 * ((v2 & 1) + (unsigned int)((v2 & 2) != 0)) + 4);
  }
  return result;
}

bool GameHr_28c170(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 4);
  v1 = a1 + 4;
  v2 = v3;
  return (v3 & 0x10) != 0 &&
         *(_BYTE*)(v1 +
                   4 * ((v2 & 1) + ((v2 & 2) != 0) + ((v2 & 4) != 0) +
                        (unsigned int)((v2 & 8) != 0)) +
                   4) != 0;
}

__int64 GameHr_28c1c0(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 4);
  v1 = a1 + 4;
  v2 = v3;
  if ((v3 & 0x10) != 0) {
    return *(_DWORD*)(v1 +
                      4 * ((v2 & 1) + ((v2 & 2) != 0) + ((v2 & 4) != 0) +
                           (unsigned int)((v2 & 8) != 0)) +
                      4) >>
           8;
  }
  else {
    return 0;
  }
}

__int64 GameHr_28c200(__int64 a1)
{
  __int64 v1;
  char v2;
  int v3;

  v3 = *(_DWORD*)(a1 + 4);
  v1 = a1 + 4;
  v2 = v3;
  if ((v3 & 0x10) != 0) {
    return *(unsigned __int16*)(v1 +
                                4 * ((v2 & 1) + ((v2 & 2) != 0) +
                                     ((v2 & 4) != 0) +
                                     (unsigned int)((v2 & 8) != 0)) +
                                6);
  }
  else {
    return 0;
  }
}

void* GameHr_28c240(__int64 a1)
{
  int v1;
  __int64 v3;

  v1 = *(_DWORD*)(a1 + 4);
  if ((v1 & 0x200) == 0) {
    return &GameData_1b0f037;
  }
  v3 = a1 + *(unsigned int*)(a1 + 4 +
                             4LL * ((v1 & 1) + ((v1 & 2) != 0) +
                                    ((v1 & 4) != 0) + ((v1 & 8) != 0) +
                                    ((v1 & 0x10) != 0) + ((v1 & 0x20) != 0) +
                                    ((v1 & 0x40) != 0) + ((v1 & 0x80) != 0) +
                                    (unsigned int)((v1 & 0x100) != 0) + 1));
  return (void*)(v3 + *(int*)(v3 + 4));
}

__int64 GameHr_28c2e0(__int64* a1, __int64 a2, char a3)
{
  _QWORD* v4;
  unsigned __int8* v5;
  unsigned __int8* v6;
  __int64* v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  char v12;
  unsigned __int8 v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 result;
  int v20;
  unsigned int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int16 v39;
  int v40;
  int v41;
  __int64 v42;
  unsigned int v43;
  unsigned __int8* v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  int v56;
  unsigned int v57;
  __int64 v58;
  __int16 v59;
  __int64 v60;
  unsigned __int16 v61;

  v6 = *(unsigned __int8**)(a2 + 192);
  v4 = (_QWORD*)(a2 + 192);
  v5 = v6;
  v8 = a1;
  v9 = v4[51];
  v10 = v6 + 1;
  *v4 = v6 + 1;
  v11 = *v6;
  if (v11 == 162) {
    v10 = v5 + 2;
    v12 = *(_BYTE*)(a2 + 200);
    *(_QWORD*)(a2 + 192) = v5 + 2;
    v11 = v5[1];
    v13 = v11 + 93;
    if ((unsigned __int8)(v11 + 93) <= 2u) {
      goto LABEL_3;
    }
  }
  else {
    v12 = 1;
    v13 = v11 + 93;
    if ((unsigned __int8)(v11 + 93) <= 2u) {
    LABEL_3:
      v14 = GameData_1b0f228[v13];
      *v4 = v10 + 1;
      v11 = *v10++;
      if (v11 != 160) {
        goto LABEL_4;
      }
    LABEL_24:
      v15 = 4;
      v16 = 1;
      *v4 = v10 + 1;
      v11 = *v10++;
      if ((v11 & 0x80) == 0) {
        goto LABEL_6;
      }
      goto LABEL_25;
    }
  }
  v14 = 0;
  if (v11 == 160) {
    goto LABEL_24;
  }
LABEL_4:
  if (v11 == 161) {
    v15 = 5;
    v16 = 1;
    *v4 = v10 + 1;
    v11 = *v10++;
    if ((v11 & 0x80) == 0) {
    LABEL_6:
      *(_QWORD*)(a2 + 192) = v10 + 1;
      v17 = *v10;
      if (v16 != 0) {
        v18 = v15;
      }
      else {
        v18 = 3;
      }
      result = GameRoutine_28c800(a1, v4, v9, a2, v18);
      if ((v12 & 1) != 0) {
        if ((a3 & 1) != 0 && (*(_BYTE*)(a2 + 370) & 1) == 0) {
          v20 = *(char*)(a2 + 492) + v11;
          v21 = result;
          v22 = v20 & ~(v20 >> 31);
          if (v22 >= 127) {
            v23 = 127;
          }
          else {
            v23 = (unsigned int)v22;
          }
          if ((int)result <= 0) {
            v24 = 0xFFFFFFFFLL;
          }
          else {
            v24 = (unsigned int)result;
          }
          (*(void (**)(__int64*, __int64, __int64, _QWORD, __int64, _QWORD))(
              *v8 + 24))(v8, a2, v23, v17, v24, *(unsigned __int8*)(a2 + 202));
          result = v21;
        }
        if (*(_BYTE*)(a2 + 201) == 1) {
          *(_DWORD*)(a2 + 372) = result;
          if ((_DWORD)result == 0) {
            *(_BYTE*)(a2 + 376) = 1;
            return result;
          }
        }
      }
      return 0;
    }
  }
  else {
    v16 = 0;
    v15 = 0;
    if ((v11 & 0x80) == 0) {
      goto LABEL_6;
    }
  }
LABEL_25:
  v25 = (v11 - 128) >> 4;
  if (v25 <= 2) {
    if (v25 == 0) {
      if ((int)v11 <= 135) {
        if (v11 == 128) {
          if (v16 != 0) {
            v55 = v15;
          }
          else {
            v55 = 3;
          }
          v56 = GameRoutine_28c800(a1, v4, v9, a2, v55);
          if ((v12 & 1) != 0) {
            *(_DWORD*)(a2 + 372) = v56;
          }
          return 0;
        }
        if (v11 != 129) {
          return 0;
        }
        v42 = v16 != 0 ? v15 : 3LL;
        v43 = GameRoutine_28c800(a1, v4, v9, a2, v42);
        if ((v12 & 1) == 0) {
          return 0;
        }
        v33 = *v8;
        v36 = v43;
        a1 = v8;
        v34 = a2;
        v35 = 129;
      }
      else {
        switch (v11) {
        case 0x88u:
          *v4 = v10 + 1;
          v50 = *v10;
          *v4 = v10 + 2;
          v51 = v10[1];
          *v4 = v10 + 3;
          v52 = v10[2];
          *v4 = v10 + 4;
          if ((v12 & 1) != 0) {
            (*(void (**)(__int64*, __int64, __int64, __int64, _QWORD))(
                *a1 + 16))(a1, a2, 136, v50, v51 | (v52 << 8) | (v10[3] << 16));
          }
          return 0;
        case 0x89u:
          *v4 = v10 + 1;
          v53 = *v10;
          *v4 = v10 + 2;
          v54 = v10[1];
          *v4 = v10 + 3;
          if ((v12 & 1) == 0) {
            return 0;
          }
          v34 = a2;
          v35 = 137;
          v36 = v53 | (v54 << 8) | (v10[2] << 16);
          v33 = *a1;
          break;
        case 0x8Au:
          *v4 = v10 + 1;
          v40 = *v10;
          *v4 = v10 + 2;
          v41 = v10[1];
          *v4 = v10 + 3;
          if ((v12 & 1) == 0) {
            return 0;
          }
          v34 = a2;
          v35 = 138;
          v36 = v40 | (v41 << 8) | (v10[2] << 16);
          v33 = *a1;
          break;
        default:
          return 0;
        }
      }
    LABEL_55:
      (*(void (**)(__int64*, __int64, __int64, __int64, _QWORD))(v33 + 16))(
          a1, v34, v35, v36, 0);
      return 0;
    }
    if (v25 != 1) {
      return 0;
    }
  LABEL_43:
    if ((v12 & 1) == 0) {
      return 0;
    }
    v33 = *a1;
    v34 = a2;
    v35 = v11;
    v36 = 0;
    goto LABEL_55;
  }
  if (v25 - 3 < 3) {
    v26 = v13;
    v27 = v4;
    v28 = v9;
    if (v16 != 0) {
      v29 = v15;
    }
    else {
      v29 = 1;
    }
    v30 = GameRoutine_28c800(a1, v4, v9, a2, v29);
    v31 = v30;
    if (v26 > 2) {
      v32 = 0;
      if ((v12 & 1) == 0) {
        return 0;
      }
    LABEL_46:
      if ((((_BYTE)v11 + 61) & 0xFE) != 0) {
        v37 = v31;
      }
      else {
        v37 = (unsigned int)(char)v31;
      }
      (*(void (**)(__int64*, __int64, _QWORD, __int64, __int64))(*v8 + 16))(
          v8, a2, v11, v37, v32);
      return 0;
    }
    v32 = (unsigned int)GameRoutine_28c800(v30, v27, v28, a2, v14);
    if ((v12 & 1) != 0) {
      goto LABEL_46;
    }
    return 0;
  }
  if (v25 == 6) {
    if (v16 != 0) {
      v38 = v15;
    }
    else {
      v38 = 2;
    }
    v39 = GameRoutine_28c800(a1, v4, v9, a2, v38);
    if ((v12 & 1) == 0) {
      return 0;
    }
    v33 = *v8;
    v36 = (unsigned int)v39;
    a1 = v8;
    v34 = a2;
    v35 = v11;
    goto LABEL_55;
  }
  if (v25 != 7) {
    return 0;
  }
  if (v11 == 240) {
    v44 = v10 + 1;
    *v4 = v10 + 1;
    v45 = *v10;
    v46 = (unsigned int)(v45 - 128) >> 4;
    if (v46 < 2) {
      *(_QWORD*)(a2 + 192) = v10 + 2;
      v57 = v10[1];
      if (v16 != 0) {
        v58 = v15;
      }
      else {
        v58 = 2;
      }
      v59 = GameRoutine_28c800(a1, v4, v9, a2, v58);
      if ((v12 & 1) != 0) {
        (*(void (**)(__int64*, __int64, _QWORD, _QWORD, _QWORD))(*v8 + 16))(
            v8, a2, v45 | 0xF000u, v57, (unsigned int)v59);
      }
      return 0;
    }
    if (v46 - 2 >= 2) {
      if (v46 != 6) {
        return 0;
      }
      v60 = v16 != 0 ? v15 : 2LL;
      v61 = GameRoutine_28c800(a1, v4, v9, a2, v60);
      if ((v12 & 1) == 0) {
        return 0;
      }
      v47 = *v8;
      v49 = v45 | 0xF000u;
      v48 = v61;
    }
    else {
      *v4 = v10 + 2;
      if ((v12 & 1) == 0) {
        return 0;
      }
      v47 = *a1;
      v48 = *v44;
      v49 = v45 | 0xF000u;
    }
    (*(void (**)(__int64*, __int64, __int64, __int64, _QWORD))(v47 + 16))(
        v8, a2, v49, v48, 0);
    return 0;
  }
  if (v11 != 255) {
    if (v11 == 254) {
      *v4 = v10 + 2;
      return 0;
    }
    goto LABEL_43;
  }
  return (v12 & 1) != 0;
}

__int64 GameHr_28d460(__int64 a1, __int64 a2)
{
  __int64* v4;

  GameRoutine_280190(a1);
  v4 = GameData_2135320[0];
  *(_QWORD*)(a1 + 568) = a2;
  *(_BYTE*)(a1 + 576) = 0;
  *(_BYTE*)(a1 + 578) = 0;
  *(_QWORD*)a1 = v4 + 2;
  *(_QWORD*)(a1 + 544) = a1 + 544;
  *(_QWORD*)(a1 + 552) = a1 + 544;
  return GameRoutine_28db40(a1 + 584);
}

__int64 GameHr_28db40(__int64 a1)
{
  __int64* v2;
  __int64 result;

  GameRoutine_2828d0(a1);
  v2 = GameData_2135330;
  *(_QWORD*)(a1 + 232) = a1 + 232;
  *(_QWORD*)(a1 + 240) = a1 + 232;
  *(_BYTE*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 252) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 260) = 0;
  *(_QWORD*)a1 = v2 + 2;
  *(_QWORD*)(a1 + 216) = a1 + 208;
  *(_QWORD*)(a1 + 224) = v2 + 22;
  *(_QWORD*)(a1 + 200) = v2 + 17;
  *(_QWORD*)(a1 + 208) = a1 + 208;
  *(_QWORD*)(a1 + 284) = 0;
  *(_DWORD*)(a1 + 296) = 7876672;
  *(_WORD*)(a1 + 300) = 32639;
  *(_DWORD*)(a1 + 302) = 0;
  GameRoutine_1a0a0a0(a1 + 472);
  *(_DWORD*)(a1 + 552) = 0;
  GameRoutine_2888c0(a1 + 560);
  GameRoutine_2888c0(a1 + 592);
  GameRoutine_2888c0(a1 + 624);
  GameRoutine_2888c0(a1 + 656);
  GameRoutine_28bb30(a1 + 688);
  GameRoutine_28bb30(a1 + 712);
  GameRoutine_28bb30(a1 + 736);
  result = GameRoutine_28bb30(a1 + 760);
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_WORD*)(a1 + 785) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_DWORD*)(a1 + 856) = -1;
  *(_DWORD*)(a1 + 872) = -1;
  *(_DWORD*)(a1 + 888) = -1;
  *(_DWORD*)(a1 + 904) = -1;
  *(_DWORD*)(a1 + 920) = -1;
  *(_QWORD*)(a1 + 520) = -1;
  *(_QWORD*)(a1 + 528) = -1;
  *(_QWORD*)(a1 + 536) = -1;
  *(_QWORD*)(a1 + 544) = -1;
  return result;
}

__int64 GameHr_28dca0(_QWORD* a1)
{
  __int64* v2;

  v2 = GameData_2135330;
  *a1 = GameData_2135330 + 2;
  a1[25] = v2 + 17;
  a1[28] = v2 + 22;
  GameRoutine_28deb0();
  GameRoutine_1a0a0b0(a1 + 59);
  *a1 = GameData_2135250 + 2;
  return GameRoutine_1a0a170(a1 + 1);
}

__int64 GameHr_28deb0(__int64 a1)
{
  void* v2;
  __int64 result;
  __int64 v4;
  void* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_BYTE*)(a1 + 67) = 1;
  SequenceSoundPlayer_28dff0(a1);
  if (*(_BYTE*)(a1 + 64) == 1) {
    v2 = SequenceSoundPlayer_2910d0();
    SequenceSoundPlayer_291170((__int64)v2, a1 + 200);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 56LL))(a1, 0);
  }
  SequenceNoteOnCallback_28bc60(a1 + 688);
  GameRoutine_288ab0(a1 + 560);
  SequenceNoteOnCallback_28bc60(a1 + 712);
  GameRoutine_288ab0(a1 + 592);
  SequenceNoteOnCallback_28bc60(a1 + 736);
  GameRoutine_288ab0(a1 + 624);
  SequenceNoteOnCallback_28bc60(a1 + 760);
  result = GameRoutine_288ab0(a1 + 656);
  if (*(_BYTE*)(a1 + 785) == 1) {
    result = BasicSoundPlayer_Unknown3(a1);
    *(_BYTE*)(a1 + 785) = 0;
  }
  v4 = *(_QWORD*)(a1 + 824);
  if (v4 != 0) {
    *(_QWORD*)(v4 + 456) = *(_QWORD*)(v4 + 256);
    v5 = TaskThread_2a2ae0();
    result = GameRoutine_2a2c60_alt1((__int64)v5, v4 + 280, 1u);
    v6 = *(_QWORD*)(a1 + 824);
    if (v6 != 0) {
      v7 = *(_QWORD*)(a1 + 816);
      result = nn_os_TryWaitEvent(v6 + 24);
      if ((result & 1) != 0) {
        result = nn_os_TryWaitEvent(v6 + 304);
        v8 = 56;
        if ((result & 1) != 0) {
          v8 = 40;
        }
      }
      else {
        v8 = 56;
      }
      v9 = *(_QWORD*)(v6 + 1184);
      *(_QWORD*)(v6 + 1184) = *(_QWORD*)(v7 + v8);
      *(_QWORD*)(v9 + 8) = v7 + v8;
      *(_QWORD*)(*(_QWORD*)(v7 + v8) + 8LL) = v6 + 1184;
      *(_QWORD*)(v7 + v8) = v9;
      *(_QWORD*)(a1 + 824) = 0;
    }
  }
  return result;
}

__int64 GameHr_28fbe0(_QWORD* a1)
{
  __int64 result;

  if (a1[43] != 0) {
    GameRoutine_294440();
  }
  if (a1[44] != 0) {
    GameRoutine_294440();
  }
  if (a1[45] != 0) {
    GameRoutine_294440();
  }
  if (a1[46] != 0) {
    GameRoutine_294440();
  }
  if (a1[47] != 0) {
    GameRoutine_294440();
  }
  if (a1[48] != 0) {
    GameRoutine_294440();
  }
  if (a1[49] != 0) {
    GameRoutine_294440();
  }
  if (a1[50] != 0) {
    GameRoutine_294440();
  }
  if (a1[51] != 0) {
    GameRoutine_294440();
  }
  if (a1[52] != 0) {
    GameRoutine_294440();
  }
  if (a1[53] != 0) {
    GameRoutine_294440();
  }
  if (a1[54] != 0) {
    GameRoutine_294440();
  }
  if (a1[55] != 0) {
    GameRoutine_294440();
  }
  if (a1[56] != 0) {
    GameRoutine_294440();
  }
  if (a1[57] != 0) {
    GameRoutine_294440();
  }
  result = a1[58];
  if (result != 0) {
    return GameRoutine_294440();
  }
  return result;
}

__int64 GameHr_290820(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(__int64 (**)(_QWORD, __int64, _QWORD, __int64))(
      **(_QWORD**)(a1 + 312) + 16LL))(*(_QWORD*)(a1 + 312), a1, a2, a3);
}

__int64 GameHr_2909c0(__int64 a1, __int64* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
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
  __int64 result;

  v3 = *a2;
  v4 = a2[2];
  *(_QWORD*)(a1 + 796) = a2[1];
  *(_QWORD*)(a1 + 804) = v4;
  *(_QWORD*)(a1 + 788) = v3;
  v6 = a3[1];
  v7 = a3[2];
  v8 = a3[3];
  *(_QWORD*)(a1 + 864) = a3[4];
  *(_QWORD*)(a1 + 856) = v8;
  *(_QWORD*)(a1 + 848) = v7;
  *(_QWORD*)(a1 + 840) = v6;
  v9 = a3[5];
  v10 = a3[6];
  v11 = a3[7];
  *(_QWORD*)(a1 + 896) = a3[8];
  *(_QWORD*)(a1 + 888) = v11;
  *(_QWORD*)(a1 + 880) = v10;
  *(_QWORD*)(a1 + 872) = v9;
  v12 = a3[9];
  v13 = a3[10];
  v14 = a3[11];
  *(_QWORD*)(a1 + 928) = a3[12];
  *(_QWORD*)(a1 + 920) = v14;
  *(_QWORD*)(a1 + 912) = v13;
  *(_QWORD*)(a1 + 904) = v12;
  v15 = *a3;
  *(_BYTE*)(a1 + 784) = 1;
  *(_DWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 832) = v15;
  v16 = GameRoutine_2a1b90(a1);
  result = GameRoutine_2a1fa0(v16, a1 + 224);
  *(_BYTE*)(a1 + 786) = 1;
  return result;
}

_QWORD* GameHr_290a60(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  result[3] = a5;
  result[4] = a5 + 16;
  result[5] = a5 + 32;
  result[6] = a5 + 48;
  result[7] = a6;
  return result;
}

__int64 GameHr_290a80(__int64 a1)
{
  GameRoutine_1a0a1a0(a1 + 24);
  GameRoutine_1a0a1a0(a1 + 304);
  GameRoutine_2914a0(a1 + 472);
  GameRoutine_2a2ab0(a1 + 280);
  return GameRoutine_2a2ab0(a1);
}

__int64 GameHr_290ad0(__int64 a1)
{
  if ((GameRoutine_1a0a1b0(a1 + 24) & 1) != 0) {
    return ((unsigned int)GameRoutine_1a0a1b0(a1 + 304) ^ 1) & 1;
  }
  else {
    return 1;
  }
}

__int64 GameHr_291080()
{
  GameRoutine_1a0a0a0(&GameData_219d0d0);
  return GameRoutine_2b0(GameRoutine_17e6db0, &GameData_219d0d0,
                         &GameData_1f50948);
}

void* GameHr_2910d0()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_219d120,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_219d128;
  }
  if ((unsigned int)GameRoutine_1a09fd0(&GameData_219d120) != 0) {
    GameRoutine_291140(&GameData_219d128);
    GameRoutine_1a09fe0(&GameData_219d120);
  }
  return &GameData_219d128;
}

__int64 GameHr_291150(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;

  v2 = *(_QWORD*)(a2 + 8);
  v3 = (_QWORD*)(a2 + 8);
  *v3 = *(_QWORD*)result;
  *(_QWORD*)(v2 + 8) = result;
  *(_QWORD*)(*(_QWORD*)result + 8LL) = v3;
  *(_QWORD*)result = v2;
  return result;
}

__int64 GameHr_291170(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64 v3;

  if (a2 + 8 != result) {
    v2 = *(__int64**)(a2 + 16);
    v3 = *v2;
    *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8LL) = v2;
    *v2 = *(_QWORD*)(a2 + 8);
    *(_QWORD*)(v3 + 8) = a2 + 8;
    *(_QWORD*)(a2 + 8) = v3;
  }
  return result;
}

_QWORD* GameHr_291220(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;

  result[1] = 0;
  result[2] = 0;
  *result = 0;
  if (*(_DWORD*)a2 == 1363497798 && *(__int16*)(a2 + 4) == -257 &&
      (unsigned int)(*(_DWORD*)(a2 + 8) - 0x10000) <= 0x10000) {
    *result = a2;
    v2 = result;
    result = (_QWORD*)GameRoutine_291300(a2);
    if (*(_DWORD*)result == 1096040772) {
      v3 = result;
      result = (_QWORD*)GameRoutine_291340(*v2);
      if (*(_DWORD*)result == 1279410508) {
        v2[1] = v3 + 1;
        v2[2] = result + 1;
      }
    }
  }
  return result;
}

__int64 GameHr_291300(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 20480; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

__int64 GameHr_291340(__int64 a1)
{
  __int64 v1;
  int* i;
  __int64 v3;

  v1 = *(unsigned __int16*)(a1 + 16);
  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  for (i = (int*)(a1 + 24); *((_WORD*)i - 2) != 20481; i += 3) {
    if (--v1 == 0) {
      return 0;
    }
  }
  v3 = *i;
  if ((_DWORD)v3 != 0) {
    return a1 + v3;
  }
  else {
    return 0;
  }
}

__int64 GameHr_2913a0(unsigned int* a1, __int64 a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  int* v8;
  __int64 v9;
  __int64 v10;
  char* v11;

  v6 = GameRoutine_1a09c70(a2);
  v7 = *a1;
  if ((int)v7 < 1) {
    return 0;
  }
  v8 = (int*)(a1 + 2);
  v9 = v6;
  while (1) {
    v10 = *v8;
    v8 += 2;
    v11 = (char*)a1 + v10;
    if ((unsigned int)GameRoutine_1a0a540(a2, (char*)a1 + v10 + 12, v9) == 0) {
      break;
    }
    if (--v7 == 0) {
      return 0;
    }
  }
  *a3 = *((_DWORD*)v11 + 1);
  return 1;
}

__int64 GameHr_291440(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = GameData_2135080[0];
  *(_QWORD*)(a1 + 16) = a1 + 8;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 8) = a1 + 8;
  result = GameRoutine_286210(a1 + 24);
  *(_QWORD*)(a1 + 24) = GameData_1f7f658;
  *(_QWORD*)a1 = GameData_1f7f618;
  *(_WORD*)(a1 + 704) = 256;
  return result;
}

_QWORD* GameHr_291d80(_QWORD* result)
{
  __int64 v1;
  __int64* v2;

  v1 = GameData_2135390[0];
  result[4] = result + 4;
  result[5] = result + 4;
  result[6] = result + 6;
  result[7] = result + 6;
  *result = 0;
  result[1] = 0;
  result[10] = result + 9;
  result[11] = 0;
  result[12] = 0;
  result[13] = result + 13;
  result[14] = result + 13;
  result[15] = result + 15;
  result[16] = result + 15;
  result[17] = 0;
  result[8] = v1 + 16;
  result[9] = result + 9;
  v2 = GameData_2135318[0];
  result[20] = 0;
  result[21] = 0;
  result[18] = v2 + 2;
  result[19] = result + 23;
  result[22] = 0;
  result[23] = GameData_1f7f3b0;
  result[26] = 0;
  result[27] = 0;
  result[28] = 0;
  result[29] = 0;
  result[24] = GameData_1f7f6c8;
  result[25] = result;
  return result;
}

__int64 GameHr_2937e0(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;

  v1 = *(__int64**)(result + 64);
  v2 = result + 56;
  if (v1 != (__int64*)(result + 56)) {
    v3 = result + 40;
    do {
      v4 = (__int64*)v1[1];
      result = GameRoutine_290ad0((__int64)(v1 - 148));
      if ((result & 1) == 0) {
        v5 = (__int64*)v1[1];
        v6 = *v5;
        *(_QWORD*)(*v1 + 8) = v5;
        *v5 = *v1;
        *(_QWORD*)(v6 + 8) = v1;
        *v1 = v6;
        *v1 = *(_QWORD*)v3;
        *(_QWORD*)(v6 + 8) = v3;
        *(_QWORD*)(*(_QWORD*)v3 + 8LL) = v1;
        *(_QWORD*)v3 = v6;
      }
      v1 = v4;
    } while (v4 != (__int64*)v2);
  }
  return result;
}

__int64* GameHr_293880(_QWORD* a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64* v5;
  __int64* v6;
  _QWORD* v7;
  char v10;
  unsigned int v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  _QWORD* i;
  int v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v25;

  v5 = (__int64*)a1[7];
  v6 = a1 + 6;
  v7 = a1 + 4;
  v10 = a2;
  v12 = (a3 + a2) & ~((a3 + a2) >> 31);
  if (v5 == a1 + 6) {
    v25 = a5;
    while (1) {
      v19 = (_QWORD*)a1[5];
      if (v19 == v7) {
        return nullptr;
      }
      v20 = (*((_DWORD*)v19 - 105) + *((unsigned __int8*)v19 - 288)) &
            ~((*((_DWORD*)v19 - 105) + *((unsigned __int8*)v19 - 288)) >> 31);
      if (v20 >= 127) {
        v20 = 127;
      }
      if (v12 < v20) {
        return nullptr;
      }
      v21 = (__int64)(v19 - 68);
      v22 = BaseNx_2890f0(0);
      BaseNx_2890a0(v22);
      BasicSound_2806e0(v21, 0);
      v5 = (__int64*)a1[7];
      if (v5 != v6) {
        a5 = v25;
        goto LABEL_2;
      }
    }
  }
  else {
  LABEL_2:
    v13 = (__int64*)v5[1];
    v14 = v5 - 68;
    v15 = *v13;
    *(_QWORD*)(*v5 + 8) = v13;
    *v13 = *v5;
    *(_QWORD*)(v15 + 8) = v5;
    *v5 = v15;
    if (((*(__int64 (**)(__int64*, __int64, __int64))(*(v5 - 68) + 24))(
             v5 - 68, a4, a5) &
         1) != 0) {
      BasicSound_2804d0((__int64)(v5 - 68), v10, a3);
      for (i = (_QWORD*)a1[5]; i != v7; i = (_QWORD*)i[1]) {
        v17 = (*((_DWORD*)i - 105) + *((unsigned __int8*)i - 288)) &
              ~((*((_DWORD*)i - 105) + *((unsigned __int8*)i - 288)) >> 31);
        if (v17 >= 127) {
          v17 = 127;
        }
        if (v12 < v17) {
          break;
        }
      }
      v18 = *v5;
      *v5 = *i;
      *(_QWORD*)(v18 + 8) = i;
      *(_QWORD*)(*i + 8LL) = v5;
      *i = v18;
    }
    else {
      v23 = *v5;
      v14 = nullptr;
      *v5 = *v6;
      *(_QWORD*)(v23 + 8) = v6;
      *(_QWORD*)(*v6 + 8) = v5;
      *v6 = v23;
    }
  }
  return v14;
}

__int64 GameHr_293b30(_QWORD* a1)
{
  __int64 result;

  result = GameRoutine_293de0();
  *a1 = GameData_1f7f7d0;
  return result;
}

__int64 GameHr_293de0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;

  *(_BYTE*)(a1 + 9) = 0;
  v2 = (_QWORD*)(a1 + 388);
  v3 = GameData_21353a0;
  *(_QWORD*)(a1 + 32) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 40) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 64) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 72) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 48) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 56) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 132) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 124) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 116) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 112) = 1065353216;
  *(_QWORD*)(a1 + 144) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 152) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 140) = 1065353216;
  *(_QWORD*)(a1 + 388) = 0;
  *(_QWORD*)(a1 + 396) = 0;
  *(_QWORD*)(a1 + 404) = 0;
  *(_QWORD*)(a1 + 410) = 0;
  *(_QWORD*)a1 = v3 + 16;
  GameRoutine_2a3810(a1 + 420);
  GameRoutine_2a3810(a1 + 436);
  GameRoutine_2a3810(a1 + 452);
  GameRoutine_2a3810(a1 + 468);
  GameRoutine_1a0a0a0(a1 + 520);
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 12) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 20) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 1065353216;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_DWORD*)(a1 + 200) = 257;
  *(_BYTE*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 370) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  GameRoutine_2a3810(a1 + 420);
  *(_BYTE*)(a1 + 484) = 0;
  GameRoutine_2a3810(a1 + 436);
  *(_BYTE*)(a1 + 485) = 0;
  GameRoutine_2a3810(a1 + 452);
  *(_BYTE*)(a1 + 486) = 0;
  result = GameRoutine_2a3810(a1 + 468);
  *(_DWORD*)(a1 + 384) = 0;
  *(_DWORD*)(a1 + 412) = 0;
  *(_WORD*)(a1 + 416) = 0;
  *(_WORD*)(a1 + 504) = 0;
  *(_BYTE*)(a1 + 506) = 0;
  *(_DWORD*)(a1 + 508) = 0;
  *(_BYTE*)(a1 + 10) = 0;
  *(_DWORD*)(a1 + 487) = 163584;
  *(_QWORD*)(a1 + 396) = 0;
  *(_QWORD*)(a1 + 404) = 0;
  *v2 = 0x7F7F000000007F7FLL;
  *(_QWORD*)(a1 + 492) = -4291018752LL;
  *(_DWORD*)(a1 + 500) = 2130706687;
  *(_QWORD*)(a1 + 512) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 592) = -1;
  *(_QWORD*)(a1 + 584) = -1;
  *(_QWORD*)(a1 + 576) = -1;
  *(_QWORD*)(a1 + 568) = -1;
  return result;
}

__int64 GameHr_293f80(__int64 a1)
{
  __int64 v2;
  __int64 i;

  *(_QWORD*)a1 = GameData_21353a0 + 16;
  GameRoutine_294440();
  v2 = *(_QWORD*)(a1 + 608);
  if (v2 != 0) {
    do {
      if (*(_BYTE*)(v2 + 193) != 0) {
        GameRoutine_2a64c0(v2);
      }
      v2 = *(_QWORD*)(v2 + 408);
    } while (v2 != 0);
    for (i = *(_QWORD*)(a1 + 608); i != 0; i = *(_QWORD*)(i + 408)) {
      GameRoutine_2a6c20(i);
    }
  }
  *(_QWORD*)(a1 + 608) = 0;
  *(_BYTE*)(a1 + 9) = 0;
  return GameRoutine_1a0a0b0(a1 + 520);
}

__int64 GameHr_294020(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 i;

  result = GameRoutine_294440();
  v3 = *(_QWORD*)(a1 + 608);
  if (v3 != 0) {
    do {
      if (*(_BYTE*)(v3 + 193) != 0) {
        result = GameRoutine_2a64c0(v3);
      }
      v3 = *(_QWORD*)(v3 + 408);
    } while (v3 != 0);
    for (i = *(_QWORD*)(a1 + 608); i != 0; i = *(_QWORD*)(i + 408)) {
      result = GameRoutine_2a6c20(i);
    }
  }
  *(_QWORD*)(a1 + 608) = 0;
  *(_BYTE*)(a1 + 9) = 0;
  return result;
}

__int64 GameHr_2940b0(__int64 result)
{
  *(_BYTE*)(result + 376) = 0;
  *(_BYTE*)(result + 368) = 0;
  *(_DWORD*)(result + 372) = 0;
  *(_BYTE*)(result + 9) = 1;
  return result;
}

__int64 GameHr_2940e0(__int64 a1, int a2)
{
  __int64 result;
  __int64 v5;

  result = GameRoutine_294440();
  v5 = *(_QWORD*)(a1 + 608);
  if (v5 != 0) {
    if (a2 < 0) {
      do {
        if (*(_BYTE*)(v5 + 193) != 0) {
          result = GameRoutine_2a64c0(v5);
        }
        v5 = *(_QWORD*)(v5 + 408);
      } while (v5 != 0);
    }
    else {
      do {
        if (*(_BYTE*)(v5 + 193) != 0) {
          GameRoutine_2a3520(v5 + 32, (unsigned __int8)a2);
          result = GameRoutine_2a64c0(v5);
        }
        v5 = *(_QWORD*)(v5 + 408);
      } while (v5 != 0);
    }
  }
  return result;
}

__int64 GameHr_294180(__int64 result)
{
  __int64 v1;
  __int64 i;

  v1 = *(_QWORD*)(result + 608);
  for (i = result; v1 != 0; v1 = *(_QWORD*)(v1 + 408)) {
    result = GameRoutine_2a6c20(v1);
  }
  *(_QWORD*)(i + 608) = 0;
  return result;
}

__int64 GameHr_2941c0(__int64 result)
{
  __int64 v1;
  __int64 i;
  int v3;

  if (*(_BYTE*)(result + 9) == 1) {
    v1 = *(_QWORD*)(result + 608);
    for (i = result; v1 != 0; v1 = *(_QWORD*)(v1 + 408)) {
      v3 = *(_DWORD*)(v1 + 356);
      if (v3 >= 1) {
        *(_DWORD*)(v1 + 356) = --v3;
      }
      if (v3 == 0 && *(_DWORD*)(v1 + 32) != 4 &&
          (*(_BYTE*)(i + 378) & 1) == 0) {
        result = GameRoutine_2a6880(v1);
      }
      if (*(_BYTE*)(v1 + 195) == 0) {
        result = GameRoutine_2a64a0(v1, 1);
      }
    }
  }
  return result;
}

__int64 GameHr_294a00(__int64 result, char a2)
{
  __int64 v2;
  char v3;
  __int64 v5;

  v2 = *(_QWORD*)(result + 608);
  if (v2 != 0) {
    v3 = a2 & 1;
    do {
      if (*(_BYTE*)(v2 + 193) != 0 && (a2 & 1) != (*(_BYTE*)(v2 + 192) != 0)) {
        v5 = *(_QWORD*)(v2 + 400);
        *(_BYTE*)(v2 + 192) = v3;
        result = GameRoutine_2a7880(v5);
      }
      v2 = *(_QWORD*)(v2 + 408);
    } while (v2 != 0);
  }
  return result;
}

__int64 GameHr_294c60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;

  result = *(_QWORD*)(a3 + 600);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 72LL))(
        result, a1);
  }
  v6 = *(_QWORD*)(a3 + 608);
  if (v6 == a1) {
    *(_QWORD*)(a3 + 608) = *(_QWORD*)(a1 + 408);
  }
  else {
    while (1) {
      v7 = v6;
      v6 = *(_QWORD*)(v6 + 408);
      if (v6 == 0) {
        break;
      }
      if (v6 == a1) {
        *(_QWORD*)(v7 + 408) = *(_QWORD*)(a1 + 408);
        return result;
      }
    }
  }
  return result;
}

__int64 GameHr_294de0(__int64 result, char a2, int a3)
{
  __int64 v3;
  char v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;

  v3 = *(_QWORD*)(result + 608);
  *(_BYTE*)(result + 371) = a2;
  if (v3 != 0) {
    v4 = (a2 & 1) - 1;
    v5 = (a3 + 4) / 5u;
    do {
      while (1) {
        v6 = *(unsigned __int16*)(v3 + 344);
        v7 = *(unsigned __int16*)(v3 + 342);
        if (v6 >= v7) {
          break;
        }
        *(_BYTE*)(v3 + 340) += (int)((*(unsigned __int8*)(v3 + 341) -
                                      *(unsigned __int8*)(v3 + 340)) *
                                     v6) /
                               (int)v7;
        *(_BYTE*)(v3 + 341) = v4;
        *(_DWORD*)(v3 + 342) = (unsigned __int16)v5;
        v3 = *(_QWORD*)(v3 + 408);
        if (v3 == 0) {
          return result;
        }
      }
      *(_BYTE*)(v3 + 340) = *(_BYTE*)(v3 + 341);
      *(_BYTE*)(v3 + 341) = v4;
      *(_DWORD*)(v3 + 342) = (unsigned __int16)v5;
      v3 = *(_QWORD*)(v3 + 408);
    } while (v3 != 0);
  }
  return result;
}

__int64 GameHr_294ee0(__int64 a1, int a2, __int16 a3)
{
  GameRoutine_1a09c20(a1 + 520);
  *(_WORD*)(a1 + 2LL * a2 + 568) = a3;
  return GameRoutine_1a09c30(a1 + 520);
}

__int64 GameHr_295250(__int64 a1, __int64 a2)
{
  __int64* v4;

  GameRoutine_280190(a1);
  *(_QWORD*)(a1 + 568) = a2;
  v4 = GameData_21353b0[0];
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 544) = a1 + 544;
  *(_QWORD*)(a1 + 552) = a1 + 544;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_BYTE*)(a1 + 706) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)a1 = v4 + 2;
  return GameRoutine_297280(a1 + 768);
}

#pragma GCC visibility pop
