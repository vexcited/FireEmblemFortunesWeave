#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameHr_144e680(__int64);
_QWORD* GameRoutine_1498aa0(_QWORD*, __int64);
unsigned __int128
GameRoutine_1498aa0_pair(_QWORD*, __int64) __asm__("GameRoutine_1498aa0");
_QWORD* SceneCharacter_14020c0(__int64);
_QWORD* SceneManager_138e2c0(__int64, unsigned __int8*);
_QWORD* SceneManager_13909c0(__int64, unsigned __int64*, __int64, _QWORD**,
                             _QWORD**);
unsigned __int128
SceneManager_13909c0_pair(__int64, unsigned __int64*, __int64, _QWORD**,
                          _QWORD**) __asm__("SceneManager_13909c0");
__attribute__((swiftcall)) void CostumeFile_9fea70(PSEUDO_X8, __int64 result,
                                                   __int64);
__attribute__((swiftcall)) void FacilityUtil_947460(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void MagicInst_10a43c0(PSEUDO_X8, int, float32x4_t*,
                                                  float32x4_t*, int, float,
                                                  float);
__attribute__((swiftcall)) void SceneCharacterMovement_1417860(PSEUDO_X8,
                                                               __int64);
__attribute__((swiftcall)) void SceneCharacterMovement_14179e0(PSEUDO_X8,
                                                               __int64 result);
__attribute__((swiftcall)) void ThermaeFile_950ec0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_140a6e0(PSEUDO_X8,
                                                      unsigned __int8**);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_1498970(PSEUDO_X8, __int64,
                                                      const char*, __int64);
__attribute__((swiftcall)) void game_facility_14995e0(PSEUDO_X8, __int64,
                                                      const char**, __int64);
__attribute__((swiftcall)) void math_Quat_FromEulerianAngle(PSEUDO_X8, float*);
__int128* Vector_650e00();
__int128* Vector_650e70();
__int64* game_9a28e0(int);
__int64* game_facility_1467bc0(__int64* result);
__int64 FacilityDialogueFile_196eb20(__int64, __int64*, __int64);
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 GameHr_14127e0(__int64, unsigned __int8*);
__int64 GameHr_146c080();
__int64 GameHr_146c740();
__int64 GameHr_146d2a0();
__int64 GameHr_146d3b0();
__int64 GameRoutine_13892a0(__int64);
__int64 GameRoutine_140bd20(__int64, unsigned __int8*, __int64);
__int64 GameRoutine_140c420(__int64, unsigned __int8*, __int64);
__int64 GameRoutine_140cae0(__int64 result, _QWORD*, __int64*, float);
__int64 GameRoutine_143d0a0(__int64, __int16*);
__int64 GameRoutine_143eb00();
__int64 GameRoutine_146b3c0();
__int64 GameRoutine_146bf00();
__int64 GameRoutine_146bf40();
__int64 GameRoutine_146bf50();
__int64 GameRoutine_146bf60();
__int64 GameRoutine_146c5c0();
__int64 GameRoutine_146c860();
__int64 GameRoutine_146d250();
__int64 GameRoutine_146d290();
__int64 GameRoutine_146d410();
__int64 GameRoutine_146d7c0();
__int64 GameRoutine_146df20();
__int64 GameRoutine_1872af0(__int64, char);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_8a1dc0(__int64**);
__int64 LayoutAccessor_15740c0(__int64*, __int64, char, const char*, char);
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 ProcClassExaminerScene_146bfa0();
__int64 ProcClassExaminerScene_146c500();
__int64 ProcClassExaminerScene_146c7a0();
__int64 ProcClassExaminerScene_146c9b0();
__int64 ProcClassExaminerScene_146d740();
__int64 ProcClassExaminerScene_146dc80();
__int64 ProcClassExaminerScene_146dd50();
__int64 ProcClassExaminerScene_146ddf0();
__int64 ProcClassExaminerScene_146dea0();
__int64 ProcClassExaminerScene_146df30();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 Registration_a4da40(__int64, __int64);
__int64 SceneManager_138e5e0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_facility_144e960(__int64);
__int64 game_facility_146cca0();
__int64 game_facility_148b460(__int64);
__int64 game_facility_148d310(__int64 result, _QWORD*, __int64);
__int64 game_facility_19537e0(__int64, __int64*);
__int64 game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult();
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool ShopMenuItem_Buy_1868b60(__int64);
bool TransporterConst_89ca00(unsigned __int16*);
bool game_159e890(__int64, char, __int64);
char* game_util_Format(const char*, ...);
double cos(double);
double sin(double);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212d4d8;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a94d7c;
extern _UNKNOWN GameData_1aa9e54;
extern _UNKNOWN GameData_1adc19f;
extern _UNKNOWN GameData_1adebe5;
extern _UNKNOWN GameData_1ae1fdd;
extern _UNKNOWN GameData_22426d8;
extern _UNKNOWN GameData_22426f0;
extern _UNKNOWN GameData_2242720;
extern _UNKNOWN GameData_22491e8;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1faf458[])();
extern __int64 (*GameData_2039340)();
extern __int64 (*GameData_2039378)();
extern __int64 (*GameData_2039480[])();
extern __int64 (*GameData_20394b0[])();
extern __int64 (*GameData_203ef60[])();
extern __int64 (*GameData_203ef90[])();
extern __int64 (*GameData_203efc0[])();
extern __int64 (*GameData_20411a8[])();
extern __int64 (*GameData_2041368[])();
extern __int64 (*GameData_2041408[])();
extern __int64 (*GameData_20416b0[])();
extern __int64 (*GameData_2119060[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*GameData_212dd50)();
extern __int64 (*GameData_2131228[2])();
extern __int64 (*GameData_2131230)();
extern __int64 (*GameData_2131550[2])();
extern __int64 (*ProcClassTrialSeq_8b80b0_ptr[2])();
extern __int64 (*ProcClassTrialSeq_8b80e0_ptr)();
extern __int64 (*ProcHubSeq_d85570_ptr[2])();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_80a790_ptr[10])();
extern __int64 (*game_facility_ClassExaminerCameraController_vtable[])();
extern __int64 (*game_facility_SceneCameraCharaViewerController_vtable)();
extern __int64 (
    *game_facility_SceneCameraWorkUpdater_StateBranchEnd_vtable[])();
extern __int64 (*game_facility_SceneCameraWorkUpdater_vtable[])();
extern __int64 (
    *game_facility_SceneCharacterBuilder_LoadStateInitialize_vtable[])();
extern __int64 (*game_facility_SceneCharacterBuilder_vtable[])();
extern __int64 (*game_facility_SceneInterpolatorFloat_vtable[])();
extern __int64 (*game_facility_anonymous_ProcClassExaminerScene_vtable[])();
extern __int64 (*game_hub_d856f0_ptr[4])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e460[2];
extern __int64* GameData_2130240[8];
extern __int64* GameData_21310f8;
extern __int64* GameData_2131128;
extern __int64* GameData_2131320[2];
extern __int64* GameData_2132488;
extern __int64 GameData_20f20a0;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dce8;
extern __int64 GameData_212e438;
extern __int64 GameData_2130fc0[3];
extern __int64 GameData_21f3ff8;
extern __int64 GameData_21f4000;
extern __int64 GameData_220f848;
extern __int64 GameData_2241738;
extern __int64 GameData_22417d0;
extern __int64 GameData_22420d0;
extern __int64 GameData_22426b0;
extern __int64 GameData_22426b8;
extern __int64 GameData_22426c0;
extern __int64 GameData_22426c8;
extern __int64 GameData_22478b0;
extern __int64 GameData_22478b8;
extern __int64 GameData_22478c0;
extern __int64 GameData_22478d0;
extern __int64 GameData_22478e0;
extern __int64 GameData_22478f0;
extern __int64 GameData_22478f8;
extern __int64 GameData_2247910;
extern __int64 GameData_2247920;
extern __int64 GameData_2247930;
extern __int64 GameData_2247938;
extern __int64 GameData_2247940;
extern __int64 GameData_2247950;
extern __int64 GameData_2247960;
extern __int64 GameData_2247970;
extern __int64 GameData_2247978;
extern __int64 GameData_2247980;
extern __int64 GameData_2247990;
extern __int64 GameData_22479a0;
extern __int64 GameData_22479b0;
extern __int64 GameData_22479b8;
extern __int64 GameData_22479c0;
extern __int64 GameData_22479d0;
extern __int64 GameData_22479e0;
extern __int64 GameData_22479f0;
extern __int64 GameData_22479f8;
extern __int64 GameData_2247a00;
extern __int64 GameData_2247a10;
extern __int64 GameData_2247a20;
extern __int64 GameData_2247a30;
extern __int64 GameData_2247a38;
extern __int64 GameData_2247a40;
extern __int64 GameData_2247a50;
extern __int64 GameData_2247a60;
extern __int64 GameData_2247a70;
extern __int64 GameData_2247a78;
extern __int64 GameData_2247a80;
extern __int64 GameData_2247a90;
extern __int64 GameData_2247aa0;
extern __int64 GameData_2247ab0;
extern __int64 GameData_2247ab8;
extern __int64 GameData_2247ac0;
extern __int64 GameData_2247ad0;
extern __int64 GameData_2247ae0;
extern __int64 GameData_2247af0;
extern __int64 GameData_2247af8;
extern __int64 GameData_2247b00;
extern __int64 GameData_2247b10;
extern __int64 GameData_2247b20;
extern __int64 GameData_2247b30;
extern __int64 GameData_2247b38;
extern __int64 GameData_2247b40;
extern __int64 GameData_2247b50;
extern __int64 GameData_2247b60;
extern __int64 GameData_2247b70;
extern __int64 GameData_2247b78;
extern __int64 GameData_2247b90;
extern __int64 GameData_2247ba0;
extern __int64 GameData_2247bb0;
extern __int64 GameData_2247bb8;
extern __int64 GameData_2247bd0;
extern __int64 GameData_2247be0;
extern __int64 GameData_2247bf0;
extern __int64 GameData_2247bf8;
extern __int64 GameData_2247c00;
extern __int64 GameData_2247c10;
extern __int64 GameData_2247c20;
extern __int64 GameData_2247c30;
extern __int64 GameData_2247c38;
extern __int64 GameData_2247c40;
extern __int64 GameData_2247c50;
extern __int64 GameData_2247c60;
extern __int64 GameData_2247c70;
extern __int64 GameData_2247c78;
extern __int64 GameData_2247c80;
extern __int64 GameData_2247c90;
extern __int64 GameData_2247ca0;
extern __int64 GameData_2247cb0;
extern __int64 GameData_2247cb8;
extern __int64 GameData_2247cc0;
extern __int64 GameData_2247cd0;
extern __int64 GameData_2247ce0;
extern __int64 GameData_2247cf0;
extern __int64 GameData_2247cf8;
extern __int64 GameData_2247d00;
extern __int64 GameData_2247d10;
extern __int64 GameData_2247d20;
extern __int64 GameData_2247d30;
extern __int64 GameData_2247d38;
extern __int64 GameData_2247d40;
extern __int64 GameData_2247d50;
extern __int64 GameData_2247d60;
extern __int64 GameData_2247d70;
extern __int64 GameData_2247d78;
extern __int64 GameData_2247d80;
extern __int64 GameData_2247d90;
extern __int64 GameData_2247da0;
extern __int64 GameData_2247db0;
extern __int64 GameData_2247db8;
extern __int64 GameData_2247dd0;
extern __int64 GameData_2247de0;
extern __int64 GameData_2247df0;
extern __int64 GameData_2247df8;
extern __int64 GameData_2247e00;
extern __int64 GameData_2247e10;
extern __int64 GameData_2247e20;
extern __int64 GameData_2247e30;
extern __int64 GameData_2247e38;
extern __int64 GameData_2247e40;
extern __int64 GameData_2247e50;
extern __int64 GameData_2247e60;
extern __int64 GameData_2247e70;
extern __int64 GameData_2247e78;
extern __int64 GameData_2247e80;
extern __int64 GameData_2247e90;
extern __int64 GameData_2247ea0;
extern __int64 GameData_2247eb0;
extern __int64 GameData_2247eb8;
extern __int64 GameData_2247ec0;
extern __int64 GameData_2247ed0;
extern __int64 GameData_2247ee0;
extern __int64 GameData_2247ef0;
extern __int64 GameData_2247ef8;
extern __int64 GameData_2247f10;
extern __int64 GameData_2247f20;
extern __int64 GameData_2247f30;
extern __int64 GameData_2247f38;
extern __int64 GameData_2247f50;
extern __int64 GameData_2247f60;
extern __int64 GameData_2247f70;
extern __int64 GameData_2247f78;
extern __int64 GameData_2247f80;
extern __int64 GameData_2247f90;
extern __int64 GameData_2247fa0;
extern __int64 GameData_2247fb0;
extern __int64 GameData_2247fb8;
extern __int64 GameData_2247fc0;
extern __int64 GameData_2247fd0;
extern __int64 GameData_2247fe0;
extern __int64 GameData_2247ff0;
extern __int64 GameData_2247ff8;
extern __int64 GameData_2248000;
extern __int64 GameData_2248010;
extern __int64 GameData_2248020;
extern __int64 GameData_2248030;
extern __int64 GameData_2248038;
extern __int64 GameData_2248040;
extern __int64 GameData_2248050;
extern __int64 GameData_2248060;
extern __int64 GameData_2248070;
extern __int64 GameData_2248078;
extern __int64 GameData_2248080;
extern __int64 GameData_2248090;
extern __int64 GameData_22480a0;
extern __int64 GameData_22480b0;
extern __int64 GameData_22480b8;
extern __int64 GameData_22480d0;
extern __int64 GameData_22480e0;
extern __int64 GameData_22480f0;
extern __int64 GameData_22480f8;
extern __int64 GameData_2248110;
extern __int64 GameData_2248120;
extern __int64 GameData_2248130;
extern __int64 GameData_2248138;
extern __int64 GameData_2248140;
extern __int64 GameData_2248150;
extern __int64 GameData_2248160;
extern __int64 GameData_2248170;
extern __int64 GameData_2248178;
extern __int64 GameData_2248180;
extern __int64 GameData_2248190;
extern __int64 GameData_22481a0;
extern __int64 GameData_22481b0;
extern __int64 GameData_22481b8;
extern __int64 GameData_22481c0;
extern __int64 GameData_22481d0;
extern __int64 GameData_22481e0;
extern __int64 GameData_22481f0;
extern __int64 GameData_22481f8;
extern __int64 GameData_2248210;
extern __int64 GameData_2248220;
extern __int64 GameData_2248230;
extern __int64 GameData_2248238;
extern __int64 GameData_2248240;
extern __int64 GameData_2248250;
extern __int64 GameData_2248260;
extern __int64 GameData_2248270;
extern __int64 GameData_2248278;
extern __int64 GameData_2248280;
extern __int64 GameData_2248290;
extern __int64 GameData_22482a0;
extern __int64 GameData_22482b0;
extern __int64 GameData_22482b8;
extern __int64 GameData_22482c0;
extern __int64 GameData_22482d0;
extern __int64 GameData_22482e0;
extern __int64 GameData_22482f0;
extern __int64 GameData_22482f8;
extern __int64 GameData_2248300;
extern __int64 GameData_2248310;
extern __int64 GameData_2248320;
extern __int64 GameData_2248330;
extern __int64 GameData_2248338;
extern __int64 GameData_2248340;
extern __int64 GameData_2248350;
extern __int64 GameData_2248360;
extern __int64 GameData_2248370;
extern __int64 GameData_2248378;
extern __int64 GameData_2248380;
extern __int64 GameData_2248390;
extern __int64 GameData_22483a0;
extern __int64 GameData_22483b0;
extern __int64 GameData_22483b8;
extern __int64 GameData_22483d0;
extern __int64 GameData_22483e0;
extern __int64 GameData_22483f0;
extern __int64 GameData_22483f8;
extern __int64 GameData_2248410;
extern __int64 GameData_2248420;
extern __int64 GameData_2248430;
extern __int64 GameData_2248438;
extern __int64 GameData_2248440;
extern __int64 GameData_2248450;
extern __int64 GameData_2248460;
extern __int64 GameData_2248470;
extern __int64 GameData_2248478;
extern __int64 GameData_2248490;
extern __int64 GameData_22484a0;
extern __int64 GameData_22484b0;
extern __int64 GameData_22484b8;
extern __int64 GameData_22484d0;
extern __int64 GameData_22484e0;
extern __int64 GameData_22484f0;
extern __int64 GameData_22484f8;
extern __int64 GameData_2248500;
extern __int64 GameData_2248510;
extern __int64 GameData_2248520;
extern __int64 GameData_2248530;
extern __int64 GameData_2248538;
extern __int64 GameData_2248550;
extern __int64 GameData_2248560;
extern __int64 GameData_2248570;
extern __int64 GameData_2248578;
extern __int64 GameData_2248580;
extern __int64 GameData_2248590;
extern __int64 GameData_22485a0;
extern __int64 GameData_22485b0;
extern __int64 GameData_22485b8;
extern __int64 GameData_22485c0;
extern __int64 GameData_22485d0;
extern __int64 GameData_22485e0;
extern __int64 GameData_22485f0;
extern __int64 GameData_22485f8;
extern __int64 GameData_2248610;
extern __int64 GameData_2248620;
extern __int64 GameData_2248630;
extern __int64 GameData_2248638;
extern __int64 GameData_2248640;
extern __int64 GameData_2248650;
extern __int64 GameData_2248660;
extern __int64 GameData_2248670;
extern __int64 GameData_2248678;
extern __int64 GameData_2248680;
extern __int64 GameData_2248690;
extern __int64 GameData_22486a0;
extern __int64 GameData_22486b0;
extern __int64 GameData_22486b8;
extern __int64 GameData_22486c0;
extern __int64 GameData_22486d0;
extern __int64 GameData_22486e0;
extern __int64 GameData_22486f0;
extern __int64 GameData_22486f8;
extern __int64 GameData_2248710;
extern __int64 GameData_2248720;
extern __int64 GameData_2248730;
extern __int64 GameData_2248738;
extern __int64 GameData_2248740;
extern __int64 GameData_2248750;
extern __int64 GameData_2248760;
extern __int64 GameData_2248770;
extern __int64 GameData_2248778;
extern __int64 GameData_2248780;
extern __int64 GameData_2248790;
extern __int64 GameData_22487a0;
extern __int64 GameData_22487b0;
extern __int64 GameData_22487b8;
extern __int64 GameData_22487d0;
extern __int64 GameData_22487e0;
extern __int64 GameData_22487f0;
extern __int64 GameData_22487f8;
extern __int64 GameData_2248800;
extern __int64 GameData_2248810;
extern __int64 GameData_2248820;
extern __int64 GameData_2248830;
extern __int64 GameData_2248838;
extern __int64 GameData_2248840;
extern __int64 GameData_2248850;
extern __int64 GameData_2248860;
extern __int64 GameData_2248870;
extern __int64 GameData_2248878;
extern __int64 GameData_2248880;
extern __int64 GameData_2248890;
extern __int64 GameData_22488a0;
extern __int64 GameData_22488b0;
extern __int64 GameData_22488b8;
extern __int64 GameData_22488c0;
extern __int64 GameData_22488d0;
extern __int64 GameData_22488e0;
extern __int64 GameData_22488f0;
extern __int64 GameData_22488f8;
extern __int64 GameData_2248910;
extern __int64 GameData_2248920;
extern __int64 GameData_2248930;
extern __int64 GameData_2248938;
extern __int64 GameData_2248950;
extern __int64 GameData_2248960;
extern __int64 GameData_2248970;
extern __int64 GameData_2248978;
extern __int64 GameData_2248980;
extern __int64 GameData_2248990;
extern __int64 GameData_22489a0;
extern __int64 GameData_22489b0;
extern __int64 GameData_22489b8;
extern __int64 GameData_22489c0;
extern __int64 GameData_22489d0;
extern __int64 GameData_22489e0;
extern __int64 GameData_22489f0;
extern __int64 GameData_22489f8;
extern __int64 GameData_2248a10;
extern __int64 GameData_2248a20;
extern __int64 GameData_2248a30;
extern __int64 GameData_2248a38;
extern __int64 GameData_2248a40;
extern __int64 GameData_2248a50;
extern __int64 GameData_2248a60;
extern __int64 GameData_2248a70;
extern __int64 GameData_2248a78;
extern __int64 GameData_2248a90;
extern __int64 GameData_2248aa0;
extern __int64 GameData_2248ab0;
extern __int64 GameData_2248ab8;
extern __int64 GameData_2248ad0;
extern __int64 GameData_2248ae0;
extern __int64 GameData_2248af0;
extern __int64 GameData_2248af8;
extern __int64 GameData_2248b00;
extern __int64 GameData_2248b10;
extern __int64 GameData_2248b20;
extern __int64 GameData_2248b30;
extern __int64 GameData_2248b38;
extern __int64 GameData_2248b40;
extern __int64 GameData_2248b50;
extern __int64 GameData_2248b60;
extern __int64 GameData_2248b70;
extern __int64 GameData_2248b78;
extern __int64 GameData_2248b80;
extern __int64 GameData_2248b90;
extern __int64 GameData_2248ba0;
extern __int64 GameData_2248bb0;
extern __int64 GameData_2248bb8;
extern __int64 GameData_2248bc0;
extern __int64 GameData_2248bd0;
extern __int64 GameData_2248be0;
extern __int64 GameData_2248bf0;
extern __int64 GameData_2248bf8;
extern __int64 GameData_2248c00;
extern __int64 GameData_2248c10;
extern __int64 GameData_2248c20;
extern __int64 GameData_2248c30;
extern __int64 GameData_2248c38;
extern __int64 GameData_2248c40;
extern __int64 GameData_2248c50;
extern __int64 GameData_2248c60;
extern __int64 GameData_2248c70;
extern __int64 GameData_2248c78;
extern __int64 GameData_2248c80;
extern __int64 GameData_2248c90;
extern __int64 GameData_2248ca0;
extern __int64 GameData_2248cb0;
extern __int64 GameData_2248cb8;
extern __int64 GameData_2248cd0;
extern __int64 GameData_2248ce0;
extern __int64 GameData_2248cf0;
extern __int64 GameData_2248cf8;
extern __int64 GameData_2248d10;
extern __int64 GameData_2248d20;
extern __int64 GameData_2248d30;
extern __int64 GameData_2248d38;
extern __int64 GameData_2248d40;
extern __int64 GameData_2248d50;
extern __int64 GameData_2248d60;
extern __int64 GameData_2248d70;
extern __int64 GameData_2248d78;
extern __int64 GameData_2248d80;
extern __int64 GameData_2248d90;
extern __int64 GameData_2248da0;
extern __int64 GameData_2248db0;
extern __int64 GameData_2248db8;
extern __int64 GameData_2248dc0;
extern __int64 GameData_2248dd0;
extern __int64 GameData_2248de0;
extern __int64 GameData_2248df0;
extern __int64 GameData_2248df8;
extern __int64 GameData_2248e00;
extern __int64 GameData_2248e10;
extern __int64 GameData_2248e20;
extern __int64 GameData_2248e30;
extern __int64 GameData_2248e38;
extern __int64 GameData_2248e40;
extern __int64 GameData_2248e50;
extern __int64 GameData_2248e60;
extern __int64 GameData_2248e70;
extern __int64 GameData_2248e78;
extern __int64 GameData_2248e80;
extern __int64 GameData_2248e90;
extern __int64 GameData_2248ea0;
extern __int64 GameData_2248eb0;
extern __int64 GameData_2248eb8;
extern __int64 GameData_2248ed0;
extern __int64 GameData_2248ee0;
extern __int64 GameData_2248ef0;
extern __int64 GameData_2248ef8;
extern __int64 GameData_2248f00;
extern __int64 GameData_2248f10;
extern __int64 GameData_2248f20;
extern __int64 GameData_2248f30;
extern __int64 GameData_2248f38;
extern __int64 GameData_2248f40;
extern __int64 GameData_2248f50;
extern __int64 GameData_2248f60;
extern __int64 GameData_2248f70;
extern __int64 GameData_2248f78;
extern __int64 GameData_2248f80;
extern __int64 GameData_2248f90;
extern __int64 GameData_2248fa0;
extern __int64 GameData_2248fb0;
extern __int64 GameData_2248fb8;
extern __int64 GameData_2248fd0;
extern __int64 GameData_2248fe0;
extern __int64 GameData_2248ff0;
extern __int64 GameData_2248ff8;
extern __int64 GameData_2249010;
extern __int64 GameData_2249020;
extern __int64 GameData_2249030;
extern __int64 GameData_2249038;
extern __int64 GameData_2249040;
extern __int64 GameData_2249050;
extern __int64 GameData_2249060;
extern __int64 GameData_2249070;
extern __int64 GameData_2249078;
extern __int64 GameData_2249090;
extern __int64 GameData_22490a0;
extern __int64 GameData_22490b0;
extern __int64 GameData_22490b8;
extern __int64 GameData_22490c0;
extern __int64 GameData_22490d0;
extern __int64 GameData_22490e0;
extern __int64 GameData_22490f0;
extern __int64 GameData_22490f8;
extern __int64 GameData_2249110;
extern __int64 GameData_2249120;
extern __int64 GameData_2249130;
extern __int64 GameData_2249138;
extern __int64 GameData_2249140;
extern __int64 GameData_2249150;
extern __int64 GameData_2249160;
extern __int64 GameData_2249170;
extern __int64 GameData_2249178;
extern __int64 GameData_2249180;
extern __int64 GameData_2249190;
extern __int64 GameData_22491a0;
extern __int64 GameData_22491b0;
extern __int64 GameData_22491b8;
extern __int64 GameData_22491c0;
extern __int64 GameData_22491d0;
extern __int64 GameData_22491e0;
extern __int64 GameData_22492c8;
extern __int64 GameData_22492d8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_UnitListSet_instance_;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 msg_MessageManager_instance_;
extern char GameData_1a9f09e;
extern char GameData_22478a8;
extern char GameData_22478e8;
extern char GameData_2247928;
extern char GameData_2247968;
extern char GameData_22479a8;
extern char GameData_22479e8;
extern char GameData_2247a28;
extern char GameData_2247a68;
extern char GameData_2247aa8;
extern char GameData_2247ae8;
extern char GameData_2247b28;
extern char GameData_2247b68;
extern char GameData_2247ba8;
extern char GameData_2247be8;
extern char GameData_2247c28;
extern char GameData_2247c68;
extern char GameData_2247ca8;
extern char GameData_2247ce8;
extern char GameData_2247d28;
extern char GameData_2247d68;
extern char GameData_2247da8;
extern char GameData_2247de8;
extern char GameData_2247e28;
extern char GameData_2247e68;
extern char GameData_2247ea8;
extern char GameData_2247ee8;
extern char GameData_2247f28;
extern char GameData_2247f68;
extern char GameData_2247fa8;
extern char GameData_2247fe8;
extern char GameData_2248028;
extern char GameData_2248068;
extern char GameData_22480a8;
extern char GameData_22480e8;
extern char GameData_2248128;
extern char GameData_2248168;
extern char GameData_22481a8;
extern char GameData_22481e8;
extern char GameData_2248228;
extern char GameData_2248268;
extern char GameData_22482a8;
extern char GameData_22482e8;
extern char GameData_2248328;
extern char GameData_2248368;
extern char GameData_22483a8;
extern char GameData_22483e8;
extern char GameData_2248428;
extern char GameData_2248468;
extern char GameData_22484a8;
extern char GameData_22484e8;
extern char GameData_2248528;
extern char GameData_2248568;
extern char GameData_22485a8;
extern char GameData_22485e8;
extern char GameData_2248628;
extern char GameData_2248668;
extern char GameData_22486a8;
extern char GameData_22486e8;
extern char GameData_2248728;
extern char GameData_2248768;
extern char GameData_22487a8;
extern char GameData_22487e8;
extern char GameData_2248828;
extern char GameData_2248868;
extern char GameData_22488a8;
extern char GameData_22488e8;
extern char GameData_2248928;
extern char GameData_2248968;
extern char GameData_22489a8;
extern char GameData_22489e8;
extern char GameData_2248a28;
extern char GameData_2248a68;
extern char GameData_2248aa8;
extern char GameData_2248ae8;
extern char GameData_2248b28;
extern char GameData_2248b68;
extern char GameData_2248ba8;
extern char GameData_2248be8;
extern char GameData_2248c28;
extern char GameData_2248c68;
extern char GameData_2248ca8;
extern char GameData_2248ce8;
extern char GameData_2248d28;
extern char GameData_2248d68;
extern char GameData_2248da8;
extern char GameData_2248de8;
extern char GameData_2248e28;
extern char GameData_2248e68;
extern char GameData_2248ea8;
extern char GameData_2248ee8;
extern char GameData_2248f28;
extern char GameData_2248f68;
extern char GameData_2248fa8;
extern char GameData_2248fe8;
extern char GameData_2249028;
extern char GameData_2249068;
extern char GameData_22490a8;
extern char GameData_22490e8;
extern char GameData_2249128;
extern char GameData_2249168;
extern char GameData_22491a8;
extern int* GameData_212d4d0;
extern int GameData_22426d0;
extern int GameData_22426e0;
extern int GameData_22426e4;
extern int GameData_22478c8;
extern int GameData_22478d8;
extern int GameData_2247908;
extern int GameData_2247918;
extern int GameData_2247948;
extern int GameData_2247958;
extern int GameData_2247988;
extern int GameData_2247998;
extern int GameData_22479c8;
extern int GameData_22479d8;
extern int GameData_2247a08;
extern int GameData_2247a18;
extern int GameData_2247a48;
extern int GameData_2247a58;
extern int GameData_2247a88;
extern int GameData_2247a98;
extern int GameData_2247ac8;
extern int GameData_2247ad8;
extern int GameData_2247b08;
extern int GameData_2247b18;
extern int GameData_2247b48;
extern int GameData_2247b58;
extern int GameData_2247b88;
extern int GameData_2247b98;
extern int GameData_2247bc8;
extern int GameData_2247bd8;
extern int GameData_2247c08;
extern int GameData_2247c18;
extern int GameData_2247c48;
extern int GameData_2247c58;
extern int GameData_2247c88;
extern int GameData_2247c98;
extern int GameData_2247cc8;
extern int GameData_2247cd8;
extern int GameData_2247d08;
extern int GameData_2247d18;
extern int GameData_2247d48;
extern int GameData_2247d58;
extern int GameData_2247d88;
extern int GameData_2247d98;
extern int GameData_2247dc8;
extern int GameData_2247dd8;
extern int GameData_2247e08;
extern int GameData_2247e18;
extern int GameData_2247e48;
extern int GameData_2247e58;
extern int GameData_2247e88;
extern int GameData_2247e98;
extern int GameData_2247ec8;
extern int GameData_2247ed8;
extern int GameData_2247f08;
extern int GameData_2247f18;
extern int GameData_2247f48;
extern int GameData_2247f58;
extern int GameData_2247f88;
extern int GameData_2247f98;
extern int GameData_2247fc8;
extern int GameData_2247fd8;
extern int GameData_2248008;
extern int GameData_2248018;
extern int GameData_2248048;
extern int GameData_2248058;
extern int GameData_2248088;
extern int GameData_2248098;
extern int GameData_22480c8;
extern int GameData_22480d8;
extern int GameData_2248108;
extern int GameData_2248118;
extern int GameData_2248148;
extern int GameData_2248158;
extern int GameData_2248188;
extern int GameData_2248198;
extern int GameData_22481c8;
extern int GameData_22481d8;
extern int GameData_2248208;
extern int GameData_2248218;
extern int GameData_2248248;
extern int GameData_2248258;
extern int GameData_2248288;
extern int GameData_2248298;
extern int GameData_22482c8;
extern int GameData_22482d8;
extern int GameData_2248308;
extern int GameData_2248318;
extern int GameData_2248348;
extern int GameData_2248358;
extern int GameData_2248388;
extern int GameData_2248398;
extern int GameData_22483c8;
extern int GameData_22483d8;
extern int GameData_2248408;
extern int GameData_2248418;
extern int GameData_2248448;
extern int GameData_2248458;
extern int GameData_2248488;
extern int GameData_2248498;
extern int GameData_22484c8;
extern int GameData_22484d8;
extern int GameData_2248508;
extern int GameData_2248518;
extern int GameData_2248548;
extern int GameData_2248558;
extern int GameData_2248588;
extern int GameData_2248598;
extern int GameData_22485c8;
extern int GameData_22485d8;
extern int GameData_2248608;
extern int GameData_2248618;
extern int GameData_2248648;
extern int GameData_2248658;
extern int GameData_2248688;
extern int GameData_2248698;
extern int GameData_22486c8;
extern int GameData_22486d8;
extern int GameData_2248708;
extern int GameData_2248718;
extern int GameData_2248748;
extern int GameData_2248758;
extern int GameData_2248788;
extern int GameData_2248798;
extern int GameData_22487c8;
extern int GameData_22487d8;
extern int GameData_2248808;
extern int GameData_2248818;
extern int GameData_2248848;
extern int GameData_2248858;
extern int GameData_2248888;
extern int GameData_2248898;
extern int GameData_22488c8;
extern int GameData_22488d8;
extern int GameData_2248908;
extern int GameData_2248918;
extern int GameData_2248948;
extern int GameData_2248958;
extern int GameData_2248988;
extern int GameData_2248998;
extern int GameData_22489c8;
extern int GameData_22489d8;
extern int GameData_2248a08;
extern int GameData_2248a18;
extern int GameData_2248a48;
extern int GameData_2248a58;
extern int GameData_2248a88;
extern int GameData_2248a98;
extern int GameData_2248ac8;
extern int GameData_2248ad8;
extern int GameData_2248b08;
extern int GameData_2248b18;
extern int GameData_2248b48;
extern int GameData_2248b58;
extern int GameData_2248b88;
extern int GameData_2248b98;
extern int GameData_2248bc8;
extern int GameData_2248bd8;
extern int GameData_2248c08;
extern int GameData_2248c18;
extern int GameData_2248c48;
extern int GameData_2248c58;
extern int GameData_2248c88;
extern int GameData_2248c98;
extern int GameData_2248cc8;
extern int GameData_2248cd8;
extern int GameData_2248d08;
extern int GameData_2248d18;
extern int GameData_2248d48;
extern int GameData_2248d58;
extern int GameData_2248d88;
extern int GameData_2248d98;
extern int GameData_2248dc8;
extern int GameData_2248dd8;
extern int GameData_2248e08;
extern int GameData_2248e18;
extern int GameData_2248e48;
extern int GameData_2248e58;
extern int GameData_2248e88;
extern int GameData_2248e98;
extern int GameData_2248ec8;
extern int GameData_2248ed8;
extern int GameData_2248f08;
extern int GameData_2248f18;
extern int GameData_2248f48;
extern int GameData_2248f58;
extern int GameData_2248f88;
extern int GameData_2248f98;
extern int GameData_2248fc8;
extern int GameData_2248fd8;
extern int GameData_2249008;
extern int GameData_2249018;
extern int GameData_2249048;
extern int GameData_2249058;
extern int GameData_2249088;
extern int GameData_2249098;
extern int GameData_22490c8;
extern int GameData_22490d8;
extern int GameData_2249108;
extern int GameData_2249118;
extern int GameData_2249148;
extern int GameData_2249158;
extern int GameData_2249188;
extern int GameData_2249198;
extern int GameData_22491c8;
extern int GameData_22491d8;
float Cursor_734120(int, int, float, float, float, float);
float GameHr_144ef80(__int64, float result);
float SceneCharacterMovement_1417ce0(__int64);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
long double wld_a7fab0(__int64);
unsigned __int64 GameRoutine_140afe0(__int64, const char*, _BYTE*);
unsigned __int64 GameRoutine_140b0b0(__int64, const char*, _BYTE*);
unsigned __int64 Manager_6326c0(__int64*, const char*);
unsigned __int64 strlen(const char*);
void GameHr_1405080(__int64);
void GameHr_bd6740(__int64, __int64, _QWORD*, char);
void GameRoutine_1418aa0();
void GameRoutine_14552a0(__int64*);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void SceneTalk_1497180(unsigned __int8*, __int64, unsigned __int64, __int64,
                       __int64, unsigned __int64, int);
void __attribute__((noreturn)) GameRoutine_1953ad0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) GameRoutine_9c2e00();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void gfx_render_b3aee0(float32x4_t*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_facility_94af40();
__int64 game_facility_94c100(__int64 a1);
__int64 game_facility_13fe840(__int64 a1);
void game_facility_1407480(__int64 a1);
__attribute__((swiftcall)) void
game_facility_14078d0(PSEUDO_X8 x8_, const char** a1, float* a2);
__attribute__((swiftcall)) void game_facility_140a320(PSEUDO_X8 x8_,
                                                      __int64 a1);
__int64 game_facility_140ab80(unsigned __int8* a1, char a2);
void game_facility_140b280(unsigned __int8* a1, char* a2);
void game_facility_140b880(_QWORD* a1);
void game_facility_140bb40(__int64 a1, const char* a2, __int64 a3, __int64 a4);
void game_facility_140bf80(_QWORD* a1);
void game_facility_140c240(__int64 a1, const char* a2, __int64 a3, __int64 a4);
void* game_facility_140c9a0();
__attribute__((swiftcall)) void game_facility_140cba0(PSEUDO_X8 x8_, __int64 a1,
                                                      float32x4_t* a2);
float game_facility_1410900(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_facility_1410b80(PSEUDO_X8 x8_,
                                                      __int64 a1);
__int64 game_facility_144e320(__int64 a1, float a2);
__attribute__((swiftcall)) void game_facility_144fca0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
__attribute__((swiftcall)) void game_facility_1450260(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
__attribute__((swiftcall)) void game_facility_1450840(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2, __int64 a3);
void game_facility_14516c0(__int64 a1, __int64 a2, __int64 a3);
void game_facility_1467a30(__int64 a1);
void game_facility_1468e10(__int64 a1, __int64 a2);
__int64 game_facility_1469d90(__int64 a1, char a2);
void game_facility_148b700(__int64 a1);
void game_facility_148cc30(__int64 a1, _QWORD* a2, const char* a3);
__attribute__((swiftcall)) void game_facility_148da00(PSEUDO_X8 x8_,
                                                      char* result, char* a2,
                                                      char* a3, char* a4);
__attribute__((swiftcall)) void game_facility_148df80(PSEUDO_X8 x8_,
                                                      __int64 result,
                                                      __int64 a2, _QWORD* a3,
                                                      __int64 a4);
void game_facility_1498790(unsigned __int8** a1, __int64 a2);
_QWORD* game_facility_1498870(_QWORD* a1, const char* a2, __int64 a3);
void game_facility_14992c0(unsigned __int8** a1, _QWORD* a2);
_QWORD* game_facility_14994e0(_QWORD* a1, const char** a2, __int64 a3);
__int64 game_facility_16d7050(__int64 a1);
__int64 game_facility_186ad20(_QWORD* a1, _WORD* a2);
__attribute__((swiftcall)) void game_facility_19532e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                      _QWORD* a2, float a4);

__int64 game_facility_94af40()
{
  __int64 v0;
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  __int64 (**v9)();
  __int16 v10;
  unsigned int v11;
  __int64 v12;
  __int16* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int16* v17;
  unsigned int v19;
  struct {
    __int64 (**v20)();
    int* v21;
    char gap32_[16];
    __int64* v22;
  } v20_;
  int v23;

  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) == 1 &&
      (game_gmap_GmapClock_instance_ != 0 &&
           *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                   *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                   *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
               0 ||
       (v20_.v21 = (int*)&GameData_1adebe5,
        v20_.v20 =
            (__int64 (**)(void))game_HashString((__int64)&GameData_1adebe5),
        game_GameModeData_instance_ != 0) &&
           (v0 = game_GameVariableTable_Find(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v20_.v20)) != 0 &&
           *(_DWORD*)(v0 + 32) != 0)) {
    v1 = 0;
  }
  else {
    v1 = 8;
  }
  v23 = 0;
  v2 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v20_.v22 = (__int64*)&v20_.v20;
  v20_.v20 = GameData_1faf458;
  v20_.v21 = &v23;
  FacilityUnitList_145e440(v2, (__int64)&v20_.v20, 2);
  if (v20_.v22 == (__int64*)&v20_.v20) {
    v3 = 32;
  }
  else {
    if (v20_.v22 == nullptr) {
      goto LABEL_14;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v20_.v22 + v3))((__int64)v20_.v22);
LABEL_14:
  v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (v23 < 2) {
    v1 |= 0x40u;
  }
  v5 = v1 | 0x20000;
  if (game_gmap_GmapClock_instance_ != 0) {
    v6 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v6 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  ThermaeFile_950ec0((void*)((__int64*)&v20_.v20), v6);
  v7 = (__int64)v20_.v20;
  v8 = v20_.v21;
  if (v20_.v20 != (__int64 (**)(void))v20_.v21) {
    v19 = v1;
    v9 = v20_.v20;
    while (*v9 != nullptr) {
      v10 = *((_WORD*)*v9 + 8);
      v11 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v12 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&GameData_22492c8);
        if (v12 != 0) {
          v11 = *(_DWORD*)(v12 + 32);
        }
        else {
          v11 = 0;
        }
      }
      v13 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                           ? game_gmap_GmapClock_instance_ + 8
                           : v4);
      if (v11 <= 10000 * *v13 + 100 * v13[1] + v13[2]) {
        break;
      }
      v14 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v15 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&GameData_22492d8);
        if (v15 == 0) {
          break;
        }
        v14 = *(_DWORD*)(v15 + 32);
      }
      if (((v14 >> v10) & 1) == 0) {
        break;
      }
      if (++v9 == (__int64 (**)(void))v8) {
        goto LABEL_37;
      }
    }
    v5 = v19;
  }
LABEL_37:
  if (v7 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v7);
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v17 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v17 = (__int16*)v4;
  }
  if ((GameRoutine_143d0a0((__int64)&GameData_1a94d7c, v17) & 1) != 0) {
    return v5;
  }
  else {
    return v5 | 2;
  }
}

__int64 game_facility_94c100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v14[2];
    char* v15;
  } v14_;

  v2 = GameRoutine_143eb00();
  v3 = 0;
  if (a1 == 0 || v2 == 0) {
    return v3;
  }
  if (*(_QWORD*)(a1 + 128) == 0) {
    return 0;
  }
  v4 = v2;
  FacilityUtil_947460((void*)(v14_.v14), *(_QWORD*)(a1 + 128));
  if ((v14_.v14[0] & 1) != 0) {
    v5 = v14_.v15;
  }
  else {
    v5 = (char*)v14_.v14 + 1;
  }
  game_HashString((__int64)v5);
  v6 = *(__int64***)(v4 + 40);
  v7 = *v6;
  v8 = v6[1];
  if (*v6 == v8) {
    v3 = 0;
    if ((v14_.v14[0] & 1) == 0) {
      return v3;
    }
    goto LABEL_15;
  }
  while (1) {
    v9 = *v7++;
    v3 = v9;
    v10 = *(_QWORD*)(v9 + 32);
    v11 = game_HashString((__int64)v5);
    if (v11 == game_HashString(v10)) {
      break;
    }
    if (v7 == v8) {
      v3 = 0;
      break;
    }
  }
  if ((v14_.v14[0] & 1) != 0) {
  LABEL_15:
    if (v14_.v15 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v14_.v15);
    }
  }
  return v3;
}

__int64 game_facility_13fe840(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int8 explicit;
  int* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  bool v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD v45[2];

  nn_os_LockMutex((__int64)GameData_212df28);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      288, 16, 0);
  GameHr_bd6740(v3, a1, nullptr, 1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4d8,
                                  memory_order_acquire);
  v5 = GameData_212d4d0;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire((__int64)GameData_212d4d8) != 0) {
    *v5 = wld_Crc32(0, "CharacterMaterial", 0x11u);
    __cxa_guard_release((__int64)GameData_212d4d8);
  }
  v6 = *v5;
  v7 = *(_QWORD*)(a1 + 504);
  v8 = *(_QWORD*)(a1 + 512);
  v9 = v8;
  LODWORD(v45[0]) = v6;
  v45[1] = v3;
  while (v9 != v7) {
    v10 = *(_DWORD*)(v9 - 16);
    v9 -= 16;
    if (v10 == v6) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v7 == v8 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v7) <= 0x6F) {
    v11 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v11;
    *(_QWORD*)(a1 + 512) = v11;
    *(_QWORD*)(a1 + 520) = v11 + 112;
    if (v8 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v12, v7);
    }
  }
  GameRoutine_98f140((__int64*)(a1 + 504), v45);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v13 = *(_BYTE**)(v3 + 8);
    v13[632] = 0;
    v13[664] = 0;
    v13[696] = 0;
    v13[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v14 = *(_BYTE**)(v3 + 8);
    v15 = v14[300] == 3 && v14[301] == 3;
    if (v15 || v14[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }
LABEL_20:
  v16 = *(__int64**)(a1 + 536);
  v17 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v16 >= v17) {
    v19 = *(_QWORD*)(a1 + 528);
    v20 = (char*)v16 - v19;
    v21 = ((__int64)v16 - v19) >> 3;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v23 = v17 - v19;
    if (v23 >> 2 > v22) {
      v22 = v23 >> 2;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF8LL) {
      v24 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v22;
    }
    if (v24 != 0) {
      if (v24 >> 61 != 0) {
        goto LABEL_56;
      }
      v25 = fw_memory_HeapManager_Allocate(*v2, 8 * v24, 16, 0);
    }
    else {
      v25 = 0;
    }
    v26 = v25 + 8 * v24;
    v27 = (unsigned __int64)v16 - v19;
    v28 = (__int64)&v20[v25 + -8 * v21];
    *(_QWORD*)&v20[v25] = v3;
    v18 = (__int64)&v20[v25 + 8];
    memcpy(v28, v19, v27);
    *(_QWORD*)(a1 + 528) = v28;
    *(_QWORD*)(a1 + 536) = v18;
    *(_QWORD*)(a1 + 544) = v26;
    if (v19 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v29, v19);
    }
  }
  else {
    *v16 = v3;
    v18 = (__int64)(v16 + 1);
  }
  *(_QWORD*)(a1 + 536) = v18;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290();
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210();
  }
  v39 = 0;
LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (unsigned __int64)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v43, v33);
  }
LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v3;
}

void game_facility_1407480(__int64 a1)
{
  char v1;
  char* v2;
  char v3;
  const char* v5;
  unsigned __int64 v6;
  char v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int16 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    unsigned __int64 v23;
    char* v24;
  } v22_;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    __int64 v27;
    int v28;
    char v29;
    char gap61_[3];
    _BYTE v30[14];
  } v25_;

  v2 = (char*)(a1 + 32);
  v1 = *(_BYTE*)(a1 + 32);
  v3 = *(_BYTE*)(a1 + 60);
  *(_BYTE*)(a1 + 24) = 0;
  if ((v1 & 1) != 0) {
    v5 = *(const char**)(a1 + 48);
  }
  else {
    v5 = (const char*)(a1 + 33);
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v3 & 0xFB;
  v8 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v6 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v22_.v23 = v8;
    v22_.v24 = v9;
    v22_.v22 = v10 | 1;
    goto LABEL_12;
  }
  LOBYTE(v22_.v22) = 2 * v6;
  v9 = (char*)&v22_.v22 + 1;
  if (v6 != 0) {
  LABEL_12:
    memmove((__int64)v9, (__int64)v5, v8);
  }
  v9[v8] = 0;
  v11 = *(_DWORD*)(a1 + 64);
  v12 = *(_DWORD*)(a1 + 68);
  v13 = *(_DWORD*)(a1 + 72);
  v14 = *(_DWORD*)(a1 + 56);
  v15 = *(_WORD*)(a1 + 76);
  if ((v22_.v22 & 1) != 0) {
    fw_text_String_CopyTerminated(&v25_.v25, (__int64)v22_.v24, v22_.v23);
  }
  else {
    v25_.v25 = v22_.v22;
    v25_.v26 = v22_.v23;
    v25_.v27 = (__int64)v22_.v24;
  }
  v16 = *v2;
  v25_.v28 = v14;
  v25_.v29 = v7;
  *(_DWORD*)v25_.v30 = v11;
  *(_DWORD*)&v25_.v30[4] = v12;
  *(_DWORD*)&v25_.v30[8] = v13;
  *(_WORD*)&v25_.v30[12] = v15;
  if ((v16 & 1) != 0) {
    v17 = *(_QWORD*)(a1 + 48);
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
      v14 = v25_.v28;
      v7 = v25_.v29;
    }
  }
  v19 = v25_.v25;
  v20 = v25_.v26;
  LOWORD(v25_.v25) = 0;
  *(_DWORD*)(a1 + 56) = v14;
  *(_BYTE*)(a1 + 60) = v7;
  *(_QWORD*)v2 = v19;
  *((_QWORD*)v2 + 1) = v20;
  *((_QWORD*)v2 + 2) = v25_.v27;
  *(_QWORD*)(a1 + 64) = *(_QWORD*)v25_.v30;
  *(_QWORD*)(a1 + 70) = *(_QWORD*)&v25_.v30[6];
  if ((v22_.v22 & 1) != 0 && v22_.v24 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  (__int64)v22_.v24);
  }
}

__attribute__((swiftcall)) void

game_facility_14078d0(PSEUDO_X8 x8_, const char** a1, float* a2)
{

#pragma clang fp contract(off)
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  float v14;
  unsigned __int64 v15;
  float v16;
  __int64 v17;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    char* v20;
  } v18_;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  v8 = *a1;
  v9 = v7;
  v10 = strlen(*a1);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(*v6, v13, 16, 0);
    v18_.v19 = v11;
    v18_.v20 = v12;
    v18_.v18 = v13 | 1;
    goto LABEL_9;
  }
  LOBYTE(v18_.v18) = 2 * v10;
  v12 = (char*)&v18_.v18 + 1;
  if (v10 != 0) {
  LABEL_9:
    memmove((__int64)v12, (__int64)v8, v11);
  }
  v12[v11] = 0;
  v14 = *a2;
  if ((v18_.v18 & 1) != 0) {
    fw_text_String_CopyTerminated((__int64*)v9, (__int64)v18_.v20, v18_.v19);
  }
  else {
    v15 = v18_.v19;
    *(_QWORD*)v9 = v18_.v18;
    *(_QWORD*)(v9 + 8) = v15;
    *(_QWORD*)(v9 + 16) = v18_.v20;
  }
  v16 = 0x0.0p+0f;
  *(_QWORD*)(v9 + 36) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  if (v14 >= 0x0.0p+0f) {
    v16 = v14;
  }
  *(_DWORD*)(v9 + 56) = 2;
  *(_QWORD*)(v9 + 24) = game_facility_SceneInterpolatorFloat_vtable;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_BYTE*)(v9 + 136) = 0;
  *a3 = v9;
  *(float*)(v9 + 32) = v16;
  *(float*)(v9 + 44) = v16;
  if ((v18_.v18 & 1) != 0 && v18_.v20 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v17, (__int64)v18_.v20);
  }
}

__attribute__((swiftcall)) void game_facility_140a320(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  int v5;
  const char* v6;
  __int16 v7;
  char v8;
  _QWORD* v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    char* v20;
    char gap24_[8];
    char v21;
    char gap33_[15];
    __int64 v22;
    char gap56_[8];
    char v23;
    char gap65_[15];
    __int64 v24;
    char v25;
    char gap89_[15];
    __int64 v26;
    char gap112_[8];
    char v27;
  } v18_;
  __int16 v28;
  char v29;
  char v30;
  __int64 v31;

  FacilityDialogueFile_196eb20(a1, (__int64*)(a1 + 8), *(_QWORD*)(a1 + 104));
  v4 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v4 == 0) {
    *(_WORD*)a2 = 0;
    return;
  }
  v5 = *(_DWORD*)(a1 + 88);
  v30 = 0;
  if (v5 == 1) {
    v6 = (const char*)&GameData_1ae1fdd;
  }
  else {
    v6 = "m03";
  }
  v18_.v27 = 6;
  v7 = *(_WORD*)v6;
  v8 = v6[2];
  v28 = v7;
  v29 = v8;
  v9 = SceneCharacter_14020c0(v4);
  SceneTalk_1497180((unsigned __int8*)&v18_.v18, (__int64)"Thermae", 7u,
                    (__int64)v9, (__int64)&v28, 3u, 1);
  if ((v18_.v18 & 1) != 0) {
    v10 = v18_.v20;
  }
  else {
    v10 = (char*)&v18_.v18 + 1;
  }
  if ((Registration_a4da40(msg_MessageManager_instance_, (__int64)v10) & 1) ==
          0 ||
      ((v18_.v18 & 1) != 0 ? (v11 = v18_.v20) : (v11 = (char*)&v18_.v18 + 1),
       (Manager_a51640(msg_MessageManager_instance_, (__int64)v11, v11) & 1) ==
           0)) {
    *(_WORD*)a2 = 0;
    if ((v18_.v25 & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_17;
  }
  if ((v18_.v18 & 1) == 0) {
    v12 = v18_.v19;
    *a2 = v18_.v18;
    a2[1] = v12;
    a2[2] = (__int64)v18_.v20;
    if ((v18_.v25 & 1) == 0) {
      goto LABEL_21;
    }
  LABEL_17:
    if (v18_.v26 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v18_.v26);
    }
    goto LABEL_21;
  }
  fw_text_String_CopyTerminated(a2, (__int64)v18_.v20, v18_.v19);
  if ((v18_.v25 & 1) != 0) {
    goto LABEL_17;
  }
LABEL_21:
  if ((v18_.v23 & 1) != 0 && v18_.v24 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  v18_.v24);
  }
  if ((v18_.v21 & 1) != 0 && v18_.v22 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  v18_.v22);
  }
  if ((v18_.v18 & 1) != 0 && v18_.v20 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  (__int64)v18_.v20);
  }
  if ((v18_.v27 & 1) != 0 && v31 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v31);
  }
}

__int64 game_facility_140ab80(unsigned __int8* a1, char a2)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64** v14;
  __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int8* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _BYTE v33[4];
  _BYTE v34[4];
  _BYTE v35[4];
  char v36[4];
  struct {
    unsigned __int8 v37[16];
    __int64 v38;
  } v37_;
  struct {
    unsigned __int8 v39[16];
    __int64 v40;
  } v39_;
  struct {
    unsigned __int8 v41[16];
    __int64 v42;
  } v41_;
  struct {
    unsigned __int8 v43[16];
    __int64 v44;
  } v43_;
  struct {
    unsigned __int8 v45[16];
    __int64 v46;
  } v45_;
  struct {
    unsigned __int8 v47[16];
    __int64 v48;
  } v47_;
  char v49[4];
  char v50[4];

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22426d8,
                            memory_order_acquire) &
       1) == 0) {
    v25 = a1;
    v26 = __cxa_guard_acquire((__int64)&GameData_22426d8);
    a1 = v25;
    if (v26 != 0) {
      v50[0] = 1;
      GameRoutine_140afe0((__int64)v37_.v37, "true", v50);
      v49[0] = 1;
      GameRoutine_140afe0((__int64)v39_.v39, "TRUE", v49);
      v36[0] = 1;
      GameRoutine_140afe0((__int64)v41_.v41, "True", v36);
      v35[0] = 0;
      GameRoutine_140b0b0((__int64)v43_.v43, "false", v35);
      v34[0] = 0;
      GameRoutine_140b0b0((__int64)v45_.v45, "FALSE", v34);
      v33[0] = 0;
      GameRoutine_140b0b0((__int64)v47_.v47, "False", v33);
      GameData_22426c0 = 0;
      GameData_22426c8 = 0;
      GameData_22426b0 = 0;
      GameData_22426b8 = 0;
      GameData_22426d0 = 1065353216;
      game_facility_140b280(v37_.v37, (char*)v37_.v37);
      game_facility_140b280(v39_.v39, (char*)v39_.v39);
      game_facility_140b280(v41_.v41, (char*)v41_.v41);
      game_facility_140b280(v43_.v43, (char*)v43_.v43);
      game_facility_140b280(v45_.v45, (char*)v45_.v45);
      game_facility_140b280(v47_.v47, (char*)v47_.v47);
      if ((v47_.v47[0] & 1) != 0 && v47_.v48 != 0) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v47_.v48);
      }
      if ((v45_.v45[0] & 1) != 0 && v45_.v46 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v45_.v46);
      }
      if ((v43_.v43[0] & 1) != 0 && v43_.v44 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v43_.v44);
      }
      if ((v41_.v41[0] & 1) != 0 && v41_.v42 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v41_.v42);
      }
      if ((v39_.v39[0] & 1) != 0 && v39_.v40 != 0) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v39_.v40);
      }
      if ((v37_.v37[0] & 1) != 0 && v37_.v38 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v37_.v38);
      }
      GameRoutine_2b0();
      __cxa_guard_release((__int64)&GameData_22426d8);
      a1 = v25;
    }
  }
  v3 = GameData_22426b8;
  if (GameData_22426b8 != 0 && GameData_22426c8 != 0) {
    v5 = *a1;
    v6 = (v5 & 1) == 0;
    v7 = v5 >> 1;
    v8 = v6 ? (__int64)(a1 + 1) : *((_QWORD*)a1 + 2);
    v9 = v6 ? v7 : *((_QWORD*)a1 + 1);
    v10 = std___1___hash_memory(v8, v9);
    v11 = v3 - 1;
    v12 = v10;
    if ((v3 & (v3 - 1)) != 0) {
      v13 = v10;
      if (v10 >= v3) {
        v13 = v10 % v3;
      }
    }
    else {
      v13 = v10 & v11;
    }
    v14 = *(__int64***)(GameData_22426b0 + 8 * v13);
    if (v14 != nullptr) {
      v15 = *v14;
      if (*v14 != nullptr) {
        if ((v3 & v11) == 0) {
          while (1) {
            v20 = v15[1];
            if (v20 == v12) {
              v21 = *((unsigned __int8*)v15 + 16);
              v22 = v15[3];
              if ((v21 & 1) == 0) {
                v22 = v21 >> 1;
              }
              if (v22 == v9) {
                v23 = (v21 & 1) != 0 ? v15[4] : (__int64)v15 + 17;
                if (memcmp(v23, v8, v9) == 0) {
                  goto LABEL_43;
                }
              }
            }
            else if ((v20 & v11) != v13) {
              return a2 & 1;
            }
            v15 = (__int64*)*v15;
            if (v15 == nullptr) {
              return a2 & 1;
            }
          }
        }
        do {
          v16 = v15[1];
          if (v16 == v12) {
            v17 = *((unsigned __int8*)v15 + 16);
            v18 = v15[3];
            if ((v17 & 1) == 0) {
              v18 = v17 >> 1;
            }
            if (v18 == v9) {
              v19 = (v17 & 1) != 0 ? v15[4] : (__int64)v15 + 17;
              if (memcmp(v19, v8, v9) == 0) {
              LABEL_43:
                a2 = *((_BYTE*)v15 + 40);
                return a2 & 1;
              }
            }
          }
          else {
            if (v16 >= v3) {
              v16 %= v3;
            }
            if (v16 != v13) {
              return a2 & 1;
            }
          }
          v15 = (__int64*)*v15;
        } while (v15 != nullptr);
      }
    }
  }
  return a2 & 1;
}

void game_facility_140b280(unsigned __int8* a1, char* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64** v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  _QWORD* v24;
  char v25;
  _BYTE* v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  _BOOL8 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 primeEm;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD** v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  unsigned __int64 v58;

  v3 = *a1;
  v5 = (v3 & 1) == 0;
  v6 = v3 >> 1;
  if (v5) {
    v7 = a1 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a1 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a1 + 1);
  }
  v9 = std___1___hash_memory((__int64)v7, v8);
  v10 = v9;
  v11 = GameData_22426b8;
  if (GameData_22426b8 != 0) {
    v12 = GameData_22426b8 - 1;
    if ((GameData_22426b8 & (GameData_22426b8 - 1)) != 0) {
      v2 = v9;
      if (v9 >= GameData_22426b8) {
        v2 = v9 % GameData_22426b8;
      }
    }
    else {
      v2 = v12 & v9;
    }
    v13 = *(__int64***)(GameData_22426b0 + 8 * v2);
    if (v13 != nullptr) {
      v14 = *v13;
      if (*v13 != nullptr) {
        if ((GameData_22426b8 & v12) == 0) {
          while (1) {
            v19 = v14[1];
            if (v19 == v10) {
              v20 = *((unsigned __int8*)v14 + 16);
              v21 = v14[3];
              if ((v20 & 1) == 0) {
                v21 = v20 >> 1;
              }
              if (v21 == v8) {
                v22 = (v20 & 1) != 0 ? v14[4] : (__int64)v14 + 17;
                if (memcmp(v22, (__int64)v7, v8) == 0) {
                  return;
                }
              }
            }
            else if ((v19 & v12) != v2) {
              goto LABEL_41;
            }
            v14 = (__int64*)*v14;
            if (v14 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v15 = v14[1];
          if (v15 == v10) {
            v16 = *((unsigned __int8*)v14 + 16);
            v17 = v14[3];
            if ((v16 & 1) == 0) {
              v17 = v16 >> 1;
            }
            if (v17 == v8) {
              v18 = (v16 & 1) != 0 ? v14[4] : (__int64)v14 + 17;
              if (memcmp(v18, (__int64)v7, v8) == 0) {
                return;
              }
            }
          }
          else {
            if (v15 >= v11) {
              v15 %= v11;
            }
            if (v15 != v2) {
              break;
            }
          }
          v14 = (__int64*)*v14;
        } while (v14 != nullptr);
      }
    }
  }
LABEL_41:
  v23 = (__int64*)fw_memory_g_heap_manager_ptr;
  v24 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v25 = *a2;
  v26 = v24;
  *v24 = 0;
  v24[1] = v10;
  if ((v25 & 1) != 0) {
    fw_text_String_CopyTerminated(v24 + 2, *((_QWORD*)a2 + 2),
                                  *((_QWORD*)a2 + 1));
  }
  else {
    v27 = *((_QWORD*)a2 + 1);
    v24[2] = *(_QWORD*)a2;
    v24[3] = v27;
    v24[4] = *((_QWORD*)a2 + 2);
  }
  v28 = *(float*)&GameData_22426d0;
  v26[40] = a2[24];
  v29 = (float)(unsigned __int64)(GameData_22426c8 + 1);
  if (v11 == 0 || (float)(v28 * (float)v11) < v29) {
    v30 = v29 / v28;
    v31 = true;
    if (v11 >= 3) {
      v31 = (v11 & (v11 - 1)) != 0;
    }
    v32 = v31 | (2 * v11);
    v33 = vcvtps_u64_f32(v30);
    if (v32 <= v33) {
      primeEm = v33;
    }
    else {
      primeEm = v32;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v35 = GameData_22426b8;
    if (primeEm <= GameData_22426b8) {
      if (primeEm >= GameData_22426b8) {
        goto LABEL_105;
      }
      v41 = vcvtps_u64_f32((float)(unsigned __int64)GameData_22426c8 /
                           *(float*)&GameData_22426d0);
      if ((unsigned __int64)GameData_22426b8 < 3 ||
          (GameData_22426b8 & (GameData_22426b8 - 1)) != 0) {
        v41 = std___1___next_prime(v41);
      }
      else {
        v42 = 1LL << (-(char)__clz(v41 - 1) & 63);
        if (v41 >= 2) {
          v41 = v42;
        }
      }
      if (primeEm <= v41) {
        primeEm = v41;
      }
      if (primeEm >= v35) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v53 = GameData_22426b0;
        GameData_22426b0 = 0;
        if (v53 != 0) {
          v54 = 128;
          if (*(_QWORD*)(*v23 + 200) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free(*v23 + v54, v53);
        }
        GameData_22426b8 = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v36 = fw_memory_HeapManager_Allocate(*v23, 8 * primeEm, 16, 0);
    v37 = GameData_22426b0;
    GameData_22426b0 = v36;
    if (v37 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*v23 + 200) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*v23 + v38, v37);
    }
    v39 = primeEm & 7;
    GameData_22426b8 = primeEm;
    if (primeEm >= 8) {
      v40 = 0;
      do {
        *(_QWORD*)(GameData_22426b0 + 8 * v40) = 0;
        *(_QWORD*)(GameData_22426b0 + 8 * v40 + 8) = 0;
        *(_QWORD*)(GameData_22426b0 + 8 * v40 + 16) = 0;
        *(_QWORD*)(GameData_22426b0 + 8 * v40 + 24) = 0;
        *(_QWORD*)(GameData_22426b0 + 8 * v40 + 32) = 0;
        *(_QWORD*)(GameData_22426b0 + 8 * v40 + 40) = 0;
        *(_QWORD*)(GameData_22426b0 + 8 * v40 + 48) = 0;
        v43 = GameData_22426b0 + 8 * v40;
        v40 += 8;
        *(_QWORD*)(v43 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v40);
    }
    else {
      v40 = 0;
    }
    if ((primeEm & 7) != 0) {
      v44 = 8 * v40;
      do {
        --v39;
        *(_QWORD*)(GameData_22426b0 + v44) = 0;
        v44 += 8;
      } while (v39 != 0);
    }
    v45 = (_QWORD**)GameData_22426c0;
    if (GameData_22426c0 != 0) {
      v46 = *(_QWORD*)(GameData_22426c0 + 8);
      v47 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v46 >= primeEm) {
          v46 %= primeEm;
        }
        *(_QWORD*)(GameData_22426b0 + 8 * v46) = &GameData_22426c0;
        v48 = *v45;
        if (*v45 == nullptr) {
          goto LABEL_105;
        }
        while (1) {
          v49 = v48[1];
          if (v49 >= primeEm) {
            v49 %= primeEm;
          }
          if (v49 != v46) {
            if (*(_QWORD*)(GameData_22426b0 + 8 * v49) == 0) {
              *(_QWORD*)(GameData_22426b0 + 8 * v49) = v45;
              goto LABEL_82;
            }
            *v45 = (_QWORD*)*v48;
            *v48 = **(_QWORD**)(GameData_22426b0 + 8 * v49);
            **(_QWORD**)(GameData_22426b0 + 8 * v49) = v48;
            v48 = v45;
          }
          v49 = v46;
        LABEL_82:
          v45 = (_QWORD**)v48;
          v48 = (_QWORD*)*v48;
          v46 = v49;
          if (v48 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v50 = v46 & v47;
      *(_QWORD*)(GameData_22426b0 + 8 * v50) = &GameData_22426c0;
      while (1) {
        v51 = *v45;
        if (*v45 == nullptr) {
          break;
        }
        v52 = v51[1] & v47;
        if (v52 == v50) {
          v45 = (_QWORD**)*v45;
        }
        else if (*(_QWORD*)(GameData_22426b0 + 8 * v52) != 0) {
          *v45 = (_QWORD*)*v51;
          *v51 = **(_QWORD**)(GameData_22426b0 + 8 * v52);
          **(_QWORD**)(GameData_22426b0 + 8 * v52) = v51;
        }
        else {
          *(_QWORD*)(GameData_22426b0 + 8 * v52) = v45;
          v45 = (_QWORD**)v51;
          v50 = v52;
        }
      }
    }
  LABEL_105:
    v11 = GameData_22426b8;
    if ((v11 & (v11 - 1)) != 0) {
      if (v10 >= GameData_22426b8) {
        v2 = v10 % GameData_22426b8;
      }
      else {
        v2 = v10;
      }
    }
    else {
      v2 = (GameData_22426b8 - 1) & v10;
    }
  }
  v55 = GameData_22426b0;
  v56 = *(_QWORD**)(GameData_22426b0 + 8 * v2);
  if (v56 != nullptr) {
    *(_QWORD*)v26 = *v56;
    *v56 = v26;
  }
  else {
    v57 = GameData_22426c0;
    GameData_22426c0 = (__int64)v26;
    *(_QWORD*)v26 = v57;
    *(_QWORD*)(v55 + 8 * v2) = &GameData_22426c0;
    if (*(_QWORD*)v26 != 0) {
      v58 = *(_QWORD*)(*(_QWORD*)v26 + 8LL);
      if ((v11 & (v11 - 1)) != 0) {
        if (v58 >= v11) {
          v58 %= v11;
        }
      }
      else {
        v58 &= v11 - 1;
      }
      *(_QWORD*)(GameData_22426b0 + 8 * v58) = v26;
    }
  }
  ++GameData_22426c8;
}

void game_facility_140b880(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *a1 = &GameData_2039340;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[4] != 0) {
    v3 = (_QWORD*)a1[3];
    while (v3 != nullptr) {
      v5 = (__int64)v3;
      v3 = (_QWORD*)*v3;
      v6 = *(_QWORD**)(v5 + 80);
      if (v6 == (_QWORD*)(v5 + 48)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_13;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_13:
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        v8 = *(_QWORD*)(v5 + 32);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, v8);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, v5);
    }
    v10 = a1[2];
    a1[3] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[1] + 8 * v12) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 48) = 0;
          v14 = a1[1] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[1] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[4] = 0;
  }
  v16 = (_QWORD*)a1[3];
  while (v16 != nullptr) {
    v18 = (__int64)v16;
    v16 = (_QWORD*)*v16;
    v19 = *(_QWORD**)(v18 + 80);
    if (v19 == (_QWORD*)(v18 + 48)) {
      v20 = 32;
    }
    else {
      if (v19 == nullptr) {
        goto LABEL_39;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
  LABEL_39:
    if ((*(_BYTE*)(v18 + 16) & 1) != 0) {
      v21 = *(_QWORD*)(v18 + 32);
      if (v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v22, v21);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v17 = 128;
    }
    else {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v17, v18);
  }
  v23 = a1[1];
  a1[1] = 0;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v24, v23);
  }
  *a1 = GameData_2039480;
  if ((_QWORD*)GameData_2241738 == a1) {
    GameData_2241738 = 0;
    GameData_22426e0 = 0;
  }
}

void game_facility_140bb40(__int64 a1, const char* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20[2];
    __int64 v21;
  } v20_;
  struct {
    _QWORD v22[2];
    char* v23;
  } v22_;

  v4 = GameData_2241738;
  if (GameData_2241738 == 0) {
    return;
  }
  v8 = *(_QWORD*)GameData_212dce8;
  v9 = strlen(a2);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                16, 0);
    v22_.v22[1] = v10;
    v22_.v23 = v11;
    v22_.v22[0] = v12 | 1;
    goto LABEL_10;
  }
  LOBYTE(v22_.v22[0]) = 2 * v9;
  v11 = (char*)v22_.v22 + 1;
  if (v9 != 0) {
  LABEL_10:
    memmove((__int64)v11, (__int64)a2, v10);
  }
  v11[v10] = 0;
  v13 = SceneManager_138e2c0(v8, (unsigned __int8*)v22_.v22);
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)v22_.v23);
  }
  if (v13 != nullptr) {
    if ((*(_BYTE*)a1 & 1) != 0) {
      fw_text_String_CopyTerminated(v20_.v20, *(_QWORD*)(a1 + 16),
                                    *(_QWORD*)(a1 + 8));
    }
    else {
      v15 = *(_QWORD*)(a1 + 8);
      v20_.v20[0] = *(_QWORD*)a1;
      v20_.v20[1] = v15;
      v20_.v21 = *(_QWORD*)(a1 + 16);
    }
    v16 = GameRoutine_140bd20(v4, (unsigned __int8*)v20_.v20, (__int64)v13);
    if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
      v17 = v16;
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v20_.v21);
      v16 = v17;
    }
    if ((v16 & 1) == 0) {
      v19 = *(_QWORD*)(a4 + 32);
      if (v19 != 0) {
        v22_.v22[0] = v13;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v19 + 48LL))(v19, v22_.v22);
      }
    }
  }
}

void game_facility_140bf80(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *a1 = &GameData_2039378;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[4] != 0) {
    v3 = (_QWORD*)a1[3];
    while (v3 != nullptr) {
      v5 = (__int64)v3;
      v3 = (_QWORD*)*v3;
      v6 = *(_QWORD**)(v5 + 80);
      if (v6 == (_QWORD*)(v5 + 48)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_13;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_13:
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        v8 = *(_QWORD*)(v5 + 32);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9, v8);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, v5);
    }
    v10 = a1[2];
    a1[3] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[1] + 8 * v12) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 48) = 0;
          v14 = a1[1] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[1] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[4] = 0;
  }
  v16 = (_QWORD*)a1[3];
  while (v16 != nullptr) {
    v18 = (__int64)v16;
    v16 = (_QWORD*)*v16;
    v19 = *(_QWORD**)(v18 + 80);
    if (v19 == (_QWORD*)(v18 + 48)) {
      v20 = 32;
    }
    else {
      if (v19 == nullptr) {
        goto LABEL_39;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
  LABEL_39:
    if ((*(_BYTE*)(v18 + 16) & 1) != 0) {
      v21 = *(_QWORD*)(v18 + 32);
      if (v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v22, v21);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v17 = 128;
    }
    else {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v17, v18);
  }
  v23 = a1[1];
  a1[1] = 0;
  if (v23 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v24, v23);
  }
  *a1 = GameData_20394b0;
  if ((_QWORD*)GameData_22420d0 == a1) {
    GameData_22420d0 = 0;
    GameData_22426e4 = 0;
  }
}

void game_facility_140c240(__int64 a1, const char* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20[2];
    __int64 v21;
  } v20_;
  struct {
    _QWORD v22[2];
    char* v23;
  } v22_;

  v4 = GameData_22420d0;
  if (GameData_22420d0 == 0) {
    return;
  }
  v8 = *(_QWORD*)GameData_212dce8;
  v9 = strlen(a2);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                16, 0);
    v22_.v22[1] = v10;
    v22_.v23 = v11;
    v22_.v22[0] = v12 | 1;
    goto LABEL_10;
  }
  LOBYTE(v22_.v22[0]) = 2 * v9;
  v11 = (char*)v22_.v22 + 1;
  if (v9 != 0) {
  LABEL_10:
    memmove((__int64)v11, (__int64)a2, v10);
  }
  v11[v10] = 0;
  v13 = SceneManager_138e2c0(v8, (unsigned __int8*)v22_.v22);
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14,
                                  (__int64)v22_.v23);
  }
  if (v13 != nullptr) {
    if ((*(_BYTE*)a1 & 1) != 0) {
      fw_text_String_CopyTerminated(v20_.v20, *(_QWORD*)(a1 + 16),
                                    *(_QWORD*)(a1 + 8));
    }
    else {
      v15 = *(_QWORD*)(a1 + 8);
      v20_.v20[0] = *(_QWORD*)a1;
      v20_.v20[1] = v15;
      v20_.v21 = *(_QWORD*)(a1 + 16);
    }
    v16 = GameRoutine_140c420(v4, (unsigned __int8*)v20_.v20, (__int64)v13);
    if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
      v17 = v16;
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v20_.v21);
      v16 = v17;
    }
    if ((v16 & 1) == 0) {
      v19 = *(_QWORD*)(a4 + 32);
      if (v19 != 0) {
        v22_.v22[0] = v13;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v19 + 48LL))(v19, v22_.v22);
      }
    }
  }
}

void* game_facility_140c9a0()
{
  __int128* v3;
  __int64 v4;
  struct {
    __int64 v5[2];
    __int64 v6;
  } v5_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2242720,
                            memory_order_acquire) &
       1) == 0) {
    if (__cxa_guard_acquire((__int64)&GameData_2242720) != 0) {
      v3 = Vector_650e00();
      Manager_6326c0(v5_.v5, "NullLocator");
      GameRoutine_140cae0((__int64)&GameData_22426f0, v3, v5_.v5, 0x0.0p+0f);
      if ((v5_.v5[0] & 1) != 0 && v5_.v6 != 0) {
        v4 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v5_.v6);
      }
      GameRoutine_2b0();
      __cxa_guard_release((__int64)&GameData_2242720);
    }
  }
  return &GameData_22426f0;
}

__attribute__((swiftcall)) void game_facility_140cba0(PSEUDO_X8 x8_, __int64 a1,
                                                      float32x4_t* a2)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float i;
  double v7;
  double v8;
  double v9;
  float j;
  const char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  float32x4_t v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned int v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  unsigned __int64 v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
  } v41_;

  for (i = LANES128(a2[1]).n128_f32[0]; i < -0x1.6800000000000p+7f;
       i = i + 0x1.6800000000000p+8f)
    ;
  for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
    ;
  v38 = *(int8x16_t*)a1;
  v39 = *a2;
  v7 = (float)(i * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
  v8 = cos(v7);
  v9 = sin(v7);
  for (j = *(float*)(a1 + 16) + LANES128(a2[1]).n128_f32[0];
       j < -0x1.6800000000000p+7f; j = j + 0x1.6800000000000p+8f)
    ;
  for (; j >= 0x1.6800000000000p+7f; j = j + -0x1.6800000000000p+8f)
    ;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v11 = *(const char**)(a1 + 40);
  }
  else {
    v11 = (const char*)(a1 + 25);
  }
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v13 = v12;
  LANES128(v14).n128_u64[0] = LANES128(v38).n128_u64[0];
  *(float*)&v15 = v9 + PSEUDO_UNFUSED(v8 * 0x0.0p+0);
  *(float*)&v16 = PSEUDO_UNFUSED(v9 * -0x0.0p+0) + v8 * 0x0.0p+0;
  *(float*)&v17 = v8 + PSEUDO_UNFUSED(v9 * 0x0.0p+0);
  LANES128(v18).n128_u64[0] = __PAIR64__(v15, v16);
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v18).n128_u64[1] = __PAIR64__(v17, v16);
  v20 = vmulq_f32(v18, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v14).n128_u64[1] = LANES128(v22).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v23).n128_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v38).n128_u64[0];
  *(int32x2_t*)&LANES128(v24).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v20).n128_u64[0]), 1);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  HIDWORD(v16) = v17;
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v27).n128_u64[0] = __PAIR64__(v15, v16);
  v25 = LANES128(v27).n128_u64[0];
  LANES128(v27).n128_u64[1] = v16;
  v28 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v19, v20),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v14, v21)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v23, v24)),
                  v26, v22);
  LANES128(v22).n128_u64[0] = LANES128(v27).n128_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v30).n128_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v31).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 1);
  LANES128(v30).n128_u64[1] = LANES128(v27).n128_u64[0];
  LANES128(v27).n128_u64[1] = v25;
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v32 = vmlsq_f32(vmlaq_f32(vmlaq_f32(vmulq_f32(v29, v28),
                                      COERCE_AS(float32x4_t, GameData_1a83800),
                                      vmulq_f32(v22, v20)),
                            COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v27, v31)),
                  v18, v30);
  LANES128(v32).n128_u32[3] = 0;
  v40 = vaddq_f32(v39, v32);
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v12 | 7) + 1;
    }
    v33 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v34,
                                                16, 0);
    v41_.v42 = v13;
    v41_.v43 = v33;
    v41_.v41 = v34 | 1;
    goto LABEL_20;
  }
  LOBYTE(v41_.v41) = 2 * v12;
  v33 = (char*)&v41_.v41 + 1;
  if (v12 != 0) {
  LABEL_20:
    memmove((__int64)v33, (__int64)v11, v13);
  }
  v33[v13] = 0;
  for (*a3 = v40; j < -0x1.6800000000000p+7f; j = j + 0x1.6800000000000p+8f)
    ;
  for (; j >= 0x1.6800000000000p+7f; j = j + -0x1.6800000000000p+8f)
    ;
  LANES128(a3[1]).n128_f32[0] = j;
  if ((v41_.v41 & 1) != 0) {
    v36 = (__int64)v41_.v43;
    fw_text_String_CopyTerminated(&LANES128(a3[1]).n128_i64[1],
                                  (__int64)v41_.v43, v41_.v42);
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v36);
    }
  }
  else {
    v35 = v41_.v42;
    LANES128(a3[1]).n128_u64[1] = v41_.v41;
    LANES128(a3[2]).n128_u64[0] = v35;
    LANES128(a3[2]).n128_u64[1] = (unsigned __int64)v41_.v43;
  }
}

float game_facility_1410900(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  int v19;
  unsigned __int8* v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  float result;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    char* v28;
  } v26_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  *(_WORD*)a1 = 0;
  *(_DWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 28) = 0;
  *(_WORD*)(a1 + 44) = 0;
  *(_QWORD*)(a1 + 32) = 0xBF8000003F800000LL;
  *(_DWORD*)(a1 + 40) = -1082130432;
  if (a2 != 0) {
    if (*(_QWORD*)(a2 + 32) != 0) {
      v4 = *(const char**)(a2 + 32);
    }
    else {
      v4 = &GameData_1a9f09e;
    }
    v5 = strlen(v4),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_46;
    }
    v6 = v5;
    if (v5 >= 0x17) {
      if ((v5 | 7) == 0x17) {
        v8 = 26;
      }
      else {
        v8 = (v5 | 7) + 1;
      }
      v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8,
                                                 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      v26_.v27 = v6;
      v26_.v28 = v7;
      v26_.v26 = v8 | 1;
    }
    else {
      LOBYTE(v26_.v26) = 2 * v5;
      v7 = (char*)&v26_.v26 + 1;
      if (v5 == 0) {
        goto LABEL_14;
      }
    }
    memmove((__int64)v7, (__int64)v4, v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  LABEL_14:
    v7[v6] = 0;
    if ((*(_BYTE*)a1 & 1) != 0) {
      v9 = *(_QWORD*)(a1 + 16);
      if (v9 != 0) {
        v10 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(float, "s0", "=w"));
      }
    }
    v11 = v26_.v27;
    *(_QWORD*)a1 = v26_.v26;
    *(_QWORD*)(a1 + 8) = v11;
    *(_QWORD*)(a1 + 16) = v26_.v28;
    if (*(_QWORD*)(a2 + 40) != 0) {
      v12 = *(const char**)(a2 + 40);
    }
    else {
      v12 = &GameData_1a9f09e;
    }
    v13 = strlen(v12),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v13 < 0xFFFFFFFFFFFFFFF7LL) {
      v14 = v13;
      if (v13 >= 0x17) {
        if ((v13 | 7) == 0x17) {
          v16 = 26;
        }
        else {
          v16 = (v13 | 7) + 1;
        }
        v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v16, 16, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        v26_.v27 = v14;
        v26_.v28 = v15;
        v26_.v26 = v16 | 1;
      }
      else {
        LOBYTE(v26_.v26) = 2 * v13;
        v15 = (char*)&v26_.v26 + 1;
        if (v13 == 0) {
        LABEL_31:
          v15[v14] = 0;
          v17 = (__int64)v26_.v28;
          if ((v26_.v26 & 1) != 0) {
            v18 = (unsigned __int8*)v26_.v28;
          }
          else {
            v18 = (unsigned __int8*)&v26_.v26 + 1;
          }
          v21 = *v18;
          v20 = v18 + 1;
          v19 = v21;
          if (v21 != 0) {
            v22 = 0;
            do {
              v22 = v19 - v22 + 32 * v22;
              v23 = *v20++;
              v19 = v23;
            } while (v23 != 0);
            *(_DWORD*)(a1 + 24) = v22;
            if ((v26_.v26 & 1) == 0) {
              goto LABEL_44;
            }
          }
          else {
            *(_DWORD*)(a1 + 24) = 0;
            if ((v26_.v26 & 1) == 0) {
            LABEL_44:
              *(_BYTE*)(a1 + 28) = *(_BYTE*)(a2 + 48);
              *(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 + 52);
              *(_DWORD*)(a1 + 36) = *(_DWORD*)(a2 + 56);
              result = *(float*)(a2 + 60);
              *(float*)(a1 + 40) = result;
              *(_WORD*)(a1 + 44) = *(_WORD*)(a2 + 64);
              return result;
            }
          }
          if (v17 != 0) {
            v24 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v24 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v17),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
          }
          goto LABEL_44;
        }
      }
      memmove((__int64)v15, (__int64)v12, v14),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      goto LABEL_31;
    }
  LABEL_46:
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return result;
}

__attribute__((swiftcall)) void game_facility_1410b80(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  int v5;
  __int16 v6;
  char v7;
  const char* v8;
  unsigned __int64 v9;
  char v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v3 = *(_DWORD*)(a1 + 32);
  v5 = *(_DWORD*)(a1 + 40);
  v6 = *(_WORD*)(a1 + 44);
  v7 = *(_BYTE*)(a1 + 28);
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(const char**)(a1 + 16);
  }
  else {
    v8 = (const char*)(a1 + 1);
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v7 | 1;
  v11 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v19_.v20 = v11;
    v19_.v21 = v12;
    v19_.v19 = v13 | 1;
    goto LABEL_12;
  }
  LOBYTE(v19_.v19) = 2 * v9;
  v12 = (char*)&v19_.v19 + 1;
  if (v9 != 0) {
  LABEL_12:
    memmove((__int64)v12, (__int64)v8, v11);
  }
  v12[v11] = 0;
  v14 = *(_DWORD*)(a1 + 24);
  if ((v19_.v19 & 1) != 0) {
    v17 = (__int64)v19_.v21;
    fw_text_String_CopyTerminated((__int64*)a2, (__int64)v19_.v21, v19_.v20);
    *(_DWORD*)(a2 + 24) = v14;
    *(_BYTE*)(a2 + 28) = v10;
    *(_DWORD*)(a2 + 32) = v3;
    *(_DWORD*)(a2 + 40) = v5;
    *(_WORD*)(a2 + 44) = v6;
    *(_DWORD*)(a2 + 36) = -1082130432;
    if (v17 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v17);
    }
  }
  else {
    v15 = v19_.v19;
    v16 = v19_.v20;
    *(_DWORD*)(a2 + 24) = v14;
    *(_BYTE*)(a2 + 28) = v10;
    *(_DWORD*)(a2 + 32) = v3;
    *(_DWORD*)(a2 + 40) = v5;
    *(_WORD*)(a2 + 44) = v6;
    *(_QWORD*)a2 = v15;
    *(_QWORD*)(a2 + 8) = v16;
    *(_QWORD*)(a2 + 16) = v19_.v21;
    *(_DWORD*)(a2 + 36) = -1082130432;
  }
}

__int64 game_facility_144e320(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  float v8;
  float v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  float v13;
  unsigned __int64 v14;
  float v15;
  float32x4_t v16;
  __int128 v17;
  float v18;
  float v19;
  int v20;
  int v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  int v38;
  int v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  int v47;
  int v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  __int64 v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;

  v3 = *(_QWORD*)(a1 + 392);
  if (v3 != 0) {
    a2 = *(float*)(a1 + 44);
    if (a2 >= *(float*)(a1 + 40)) {
      a2 = *(float*)(a1 + 124);
      if (a2 >= *(float*)(a1 + 120)) {
        a2 = *(float*)(a1 + 164);
        if (a2 >= *(float*)(a1 + 160)) {
          a2 = *(float*)(a1 + 204);
          if (a2 >= *(float*)(a1 + 200)) {
            v4 = *(_QWORD*)(a1 + 424);
            if (v4 == 0 || *(_QWORD*)(v4 + 80) == 0) {
              (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 16LL))(v3, a1);
            }
          }
        }
      }
    }
  }
  v5 = *(_QWORD*)(a1 + 424);
  if (v5 != 0) {
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
        (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v7 = 2)
             : (v7 = 3),
         (v7 & v6) == 0)) {
      GameHr_144ef80(a1, a2);
    }
    else {
      while (1) {
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 128) + 16LL))(
            *(_QWORD*)(v5 + 128), v5);
        if (((*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 128) + 24LL))(
                 *(_QWORD*)(v5 + 128), v5) &
             1) == 0) {
          break;
        }
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 128) + 32LL))(
            *(_QWORD*)(v5 + 128), v5);
      }
      if (*(_QWORD*)(*(_QWORD*)(a1 + 424) + 80LL) == 0) {
        v55 = *(_QWORD*)(a1 + 432);
        *(_QWORD*)(a1 + 424) = 0;
        *(_QWORD*)(a1 + 432) = 0;
        if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
          std___1___shared_weak_count___release_weak(v55);
        }
      }
    }
  }
  GameHr_144e680(a1);
  v9 = *(float*)(a1 + 40);
  v8 = *(float*)(a1 + 44);
  if (v8 >= v9) {
    v16 = *(float32x4_t*)(a1 + 64);
  }
  else {
    v10 = *(_DWORD*)(a1 + 96);
    v11 = *(_DWORD*)(a1 + 100);
    v12 = *(_QWORD*)(a1 + 56);
    v13 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                  0x1.0aef000000000p+4f) /
          0x1.f400000000000p+9f;
    LANES128(v57).n128_u64[0] = *(_QWORD*)(a1 + 48);
    LANES128(v57).n128_u64[1] = v12;
    v14 = *(_QWORD*)(a1 + 72);
    LANES128(v56).n128_u64[0] = *(_QWORD*)(a1 + 64);
    LANES128(v56).n128_u64[1] = v14;
    v15 = v13 + v8;
    if (v9 < v15) {
      v15 = v9;
    }
    *(float*)(a1 + 44) = v15;
    MagicInst_10a43c0((void*)(&v58), v10, &v57, &v56, v11, v15, v9);
    v16 = v58;
  }
  *(_QWORD*)(a1 + 80) = LANES128(v16).n128_u64[0];
  v17 = *(_OWORD*)(a1 + 80);
  *((_QWORD*)&v17 + 1) = LANES128(v16).n128_u32[2];
  *(_OWORD*)(a1 + 80) = v17;
  v19 = *(float*)(a1 + 120);
  v18 = *(float*)(a1 + 124);
  if (v18 >= v19) {
    v26 = *(float*)(a1 + 132);
  }
  else {
    v20 = *(_DWORD*)(a1 + 140);
    v21 = *(_DWORD*)(a1 + 144);
    v22 =
        v18 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    if (v19 >= v22) {
      v23 = v22;
    }
    else {
      v23 = *(float*)(a1 + 120);
    }
    v24 = *(float*)(a1 + 128);
    v25 = *(float*)(a1 + 132);
    *(float*)(a1 + 124) = v23;
    v26 = Cursor_734120(v20, v21, v24, v25, v23, v19);
  }
  *(float*)(a1 + 136) = v26;
  v28 = *(float*)(a1 + 160);
  v27 = *(float*)(a1 + 164);
  if (v27 >= v28) {
    v35 = *(float*)(a1 + 172);
  }
  else {
    v29 = *(_DWORD*)(a1 + 180);
    v30 = *(_DWORD*)(a1 + 184);
    v31 =
        v27 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    if (v28 >= v31) {
      v32 = v31;
    }
    else {
      v32 = *(float*)(a1 + 160);
    }
    v33 = *(float*)(a1 + 168);
    v34 = *(float*)(a1 + 172);
    *(float*)(a1 + 164) = v32;
    v35 = Cursor_734120(v29, v30, v33, v34, v32, v28);
  }
  *(float*)(a1 + 176) = v35;
  v37 = *(float*)(a1 + 200);
  v36 = *(float*)(a1 + 204);
  if (v36 >= v37) {
    v44 = *(float*)(a1 + 212);
  }
  else {
    v38 = *(_DWORD*)(a1 + 220);
    v39 = *(_DWORD*)(a1 + 224);
    v40 =
        v36 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    if (v37 >= v40) {
      v41 = v40;
    }
    else {
      v41 = *(float*)(a1 + 200);
    }
    v42 = *(float*)(a1 + 208);
    v43 = *(float*)(a1 + 212);
    *(float*)(a1 + 204) = v41;
    v44 = Cursor_734120(v38, v39, v42, v43, v41, v37);
  }
  *(float*)(a1 + 216) = v44;
  v46 = *(float*)(a1 + 240);
  v45 = *(float*)(a1 + 244);
  if (v45 >= v46) {
    v53 = *(float*)(a1 + 252);
  }
  else {
    v47 = *(_DWORD*)(a1 + 260);
    v48 = *(_DWORD*)(a1 + 264);
    v49 =
        v45 + (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                              0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f);
    if (v46 >= v49) {
      v50 = v49;
    }
    else {
      v50 = *(float*)(a1 + 240);
    }
    v51 = *(float*)(a1 + 248);
    v52 = *(float*)(a1 + 252);
    *(float*)(a1 + 244) = v50;
    v53 = Cursor_734120(v47, v48, v51, v52, v50, v46);
  }
  *(float*)(a1 + 256) = v53;
  return game_facility_144e960(a1);
}

__attribute__((swiftcall)) void game_facility_144fca0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2)
{
  float32x4_t** a3 = (float32x4_t**)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;
  __int64 v24;
  __int64 v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  __int64 v29;
  __int64 v30;
  float v31;
  int8x16_t v32;
  float v33;
  unsigned __int64 v34;
  unsigned __int32 v35;
  unsigned __int32 v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  unsigned __int32 v51;
  float v52;
  float32x4_t* v53;
  float32x4_t* v54;
  float32x4_t* v55;
  __int128 v56;
  float v57;
  float32x2_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  int8x16_t v64;
  float32x4_t v65;
  float32x4_t v66;
  __int128 v67;
  int8x16_t v68;

  if (a2 == 0) {
    goto LABEL_32;
  }
  v5 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
  v6 = game_HashString(v5);
  if (v6 == 0) {
    goto LABEL_32;
  }
  v7 = *(_QWORD*)(GameData_22417d0 + 96);
  if (v7 == 0 || *(_QWORD*)(GameData_22417d0 + 112) == 0) {
    goto LABEL_32;
  }
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
  v11 = *(_QWORD**)(*(_QWORD*)(GameData_22417d0 + 88) + 8 * v10);
  if (v11 == nullptr || (v12 = (_QWORD*)*v11) == nullptr) {
  LABEL_32:
    *a3 = nullptr;
    a3[1] = nullptr;
    return;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == v6) {
        if (v12[2] == v6) {
          goto LABEL_30;
        }
      }
      else if ((v14 & v9) != v10) {
        goto LABEL_32;
      }
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == v6) {
      break;
    }
    if (v13 >= v7) {
      v13 %= v7;
    }
    if (v13 != v10) {
      goto LABEL_32;
    }
  LABEL_19:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v12[2] != v6) {
    goto LABEL_19;
  }
LABEL_30:
  v15 = v12[3];
  if (v15 == 0 || *(_BYTE*)(v15 + 32) != 0) {
    goto LABEL_32;
  }
  v16 = 0x0.0p+0f;
  v17 = a2;
  if ((*(_BYTE*)(v15 + 64) & 1) == 0) {
    v18 = *(_QWORD*)(a2 + 192);
    v19 = *(_QWORD*)(a2 + 200);
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
      v16 = *(float*)(v18 + 32);
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
        v17 = a2;
      }
    }
    else {
      v16 = *(float*)(v18 + 32);
    }
  }
  v20 = *(unsigned __int8*)(v15 + 33);
  if (v20 == 1) {
    v21 = *(_QWORD*)(v17 + 192);
    v22 = *(_QWORD*)(v17 + 200);
    if (v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                memory_order_relaxed);
      v61 = *(float32x4_t*)(v21 + 16);
      SceneCharacterMovement_1417860((void*)(&v68), v21);
      v23 = vaddq_f32(v61, v68);
      LANES128(v23).n128_u32[3] = 0;
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v59 = v23;
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak(v22);
        v23 = v59;
      }
    }
    else {
      v62 = *(float32x4_t*)(v21 + 16);
      SceneCharacterMovement_1417860((void*)(&v68), v21);
      v23 = vaddq_f32(v62, v68);
      LANES128(v23).n128_u32[3] = 0;
    }
    v20 = *(unsigned __int8*)(v15 + 33);
    v17 = a2;
  }
  else {
    v23 = (__typeof__(v23)){0};
  }
  if (v20 != 2) {
    v60 = v23;
    LANES128(v27).n128_u64[0] = *(_QWORD*)(v15 + 36);
    LANES128(v23).n128_u32[0] = *(_DWORD*)(v15 + 44);
    LANES128(v27).n128_u64[1] = LANES128(v23).n128_u64[0];
    goto LABEL_50;
  }
  v24 = *(_QWORD*)(v17 + 192);
  v25 = *(_QWORD*)(v17 + 200);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    v63 = *(float32x4_t*)(v24 + 16);
    SceneCharacterMovement_14179e0((void*)(&v68), v24);
    v26 = vaddq_f32(v63, v68);
    LANES128(v26).n128_u32[3] = 0;
    v60 = v26;
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  else {
    v65 = *(float32x4_t*)(v24 + 16);
    SceneCharacterMovement_14179e0((void*)(&v68), v24);
    v26 = vaddq_f32(v65, v68);
    LANES128(v26).n128_u32[3] = 0;
    v60 = v26;
  }
  LANES128(v26).n128_u32[0] = *(_DWORD*)(v15 + 44);
  LANES128(v28).n128_u64[0] = *(_QWORD*)(v15 + 36);
  LANES128(v28).n128_u64[1] = LANES128(v26).n128_u64[0];
  v64 = v28;
  if (*(_BYTE*)(v15 + 33) == 2) {
    v29 = *(_QWORD*)(a2 + 192);
    v30 = *(_QWORD*)(a2 + 200);
    LANES64(v58).n64_u64[0] = *(unsigned __int64*)(v15 + 36);
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                memory_order_relaxed);
      v31 = SceneCharacterMovement_1417ce0(v29);
      v32 = v64;
      LANES128(v32).n128_f32[1] = vmuls_lane_f32(v31, v58, 1);
      v64 = v32;
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak(v30);
      }
      goto LABEL_56;
    }
    v57 = SceneCharacterMovement_1417ce0(v29);
    v27 = v64;
    LANES128(v27).n128_f32[1] = vmuls_lane_f32(v57, v58, 1);
  LABEL_50:
    v64 = v27;
  }
LABEL_56:
  v33 = v16;
  if (v16 < -0x1.6800000000000p+7f) {
    v33 = v16;
    do {
      v33 = v33 + 0x1.6800000000000p+8f;
    } while (v33 < -0x1.6800000000000p+7f);
  }
  for (; v33 >= 0x1.6800000000000p+7f; v33 = v33 + -0x1.6800000000000p+8f)
    ;
  LODWORD(v34) = 0;
  *((float*)&v34 + 1) = v33 * 0x1.1df46a0000000p-6f;
  v67 = v34;
  math_Quat_FromEulerianAngle((void*)((float*)&v68), (float*)&v67);
  v35 = *(_DWORD*)(v15 + 56);
  v36 = *(_DWORD*)(v15 + 60);
  LANES128(v37).n128_u64[0] = LANES128(v64).n128_u64[0];
  v38 = vmulq_f32(v68, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v40).n128_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v42).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1);
  v43 = vmlaq_f32(vmulq_f32(v38, v39), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v37, v41));
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[1] = LANES128(v37).n128_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v64).n128_u64[0];
  v44 = vmlaq_f32(v43, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v37, v42));
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v38).n128_u64[0];
  v45 = vmlsq_f32(v44, v37, v40);
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] = LANES128(v68).n128_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v40).n128_u64[0];
  LANES128(v47).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v46).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v47).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v45).n128_u64[0]), 1);
  v48 = vmlaq_f32(vmulq_f32(v38, v45), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v37, v46));
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v68, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[1] = LANES128(v46).n128_u64[0];
  LANES128(v46).n128_u64[1] = LANES128(v68).n128_u64[0];
  LANES128(v49).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v49).n128_i8[8] =
      vqtbl1_s8(v45, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v50 = vmlsq_f32(vmlaq_f32(v48, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v46, v47)),
                  v49, v40);
  LANES128(v50).n128_u32[3] = 0;
  v66 = vaddq_f32(v60, v50);
  v51 = *(_DWORD*)(v15 + 48);
  v52 = v16 + *(float*)(v15 + 52);
  v53 = (float32x4_t*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 432, 16, 0);
  LANES128(v53[1]).n128_u64[0] = 0;
  v54 = v53 + 2;
  v55 = v53;
  LANES128(*(v53)).n128_u64[0] = (unsigned __int64)(GameData_212e460[0] + 2);
  LANES128(*(v53)).n128_u64[1] = 0;
  wld_a7fab0((__int64)&v53[2]);
  *a3 = v54;
  a3[1] = v55;
  LANES128(v55[2]).n128_u32[2] = 2;
  v56 = *Vector_650e70();
  LANES128(v55[7]).n128_u32[0] = v51;
  LANES128(v55[7]).n128_f32[1] = v52;
  LANES128(v55[7]).n128_u32[2] = v35;
  LANES128(v55[8]).n128_u32[0] = v36;
  LANES128(v55[7]).n128_u32[3] = 0;
  v55[4] = v66;
  v55[5] = COERCE_AS(float32x4_t, v56);
  gfx_render_b3aee0(v54);
}

__attribute__((swiftcall)) void game_facility_1450260(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2)
{
  float32x4_t** a3 = (float32x4_t**)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  float v17;
  float v18;
  unsigned __int64 v19;
  unsigned __int32 v20;
  unsigned __int32 v21;
  int8x16_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  unsigned __int32 v37;
  __int64 v38;
  float v39;
  float32x4_t* v40;
  float32x4_t* v41;
  float32x4_t* v42;
  __int128 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  float32x4_t i;
  float32x4_t v48;
  struct {
    float32x4_t v49;
    float v50;
    char gap68_[4];
    char v51;
    char gap73_[15];
    __int64 v52;
  } v49_;
  __int128 v53;
  int8x16_t v54;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 16);
  }
  else {
    v5 = a1 + 1;
  }
  v6 = game_HashString(v5);
  if (v6 == 0) {
    goto LABEL_44;
  }
  v7 = *(_QWORD*)(*GameData_21310f8 + 96);
  if (v7 == 0 || *(_QWORD*)(*GameData_21310f8 + 112) == 0) {
    goto LABEL_44;
  }
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
  v11 = *(_QWORD**)(*(_QWORD*)(*GameData_21310f8 + 88) + 8 * v10);
  if (v11 == nullptr) {
    goto LABEL_44;
  }
  v12 = (_QWORD*)*v11;
  if (v12 == nullptr) {
    goto LABEL_44;
  }
  if ((v7 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == v6) {
        if (v12[2] == v6) {
          goto LABEL_29;
        }
      }
      else if ((v14 & v9) != v10) {
        goto LABEL_44;
      }
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == v6) {
      break;
    }
    if (v13 >= v7) {
      v13 %= v7;
    }
    if (v13 != v10) {
      goto LABEL_44;
    }
  LABEL_18:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v12[2] != v6) {
    goto LABEL_18;
  }
LABEL_29:
  v15 = v12[3];
  if (v15 == 0 || *(_BYTE*)(v15 + 32) != 1) {
  LABEL_44:
    *a3 = nullptr;
    a3[1] = nullptr;
    return;
  }
  game_facility_140d160((void*)((__int128*)&v49_.v49), a2);
  if ((*(_BYTE*)(v15 + 64) & 1) != 0) {
    v17 = 0x0.0p+0f;
  }
  else {
    v17 = v49_.v50;
  }
  LODWORD(v16) = *(_DWORD*)(v15 + 44);
  v45 = v16;
  v18 = v17;
  if (v17 < -0x1.6800000000000p+7f) {
    v18 = v17;
    do {
      v18 = v18 + 0x1.6800000000000p+8f;
    } while (v18 < -0x1.6800000000000p+7f);
  }
  v46 = *(_QWORD*)(v15 + 36);
  for (i = v49_.v49; v18 >= 0x1.6800000000000p+7f;
       v18 = v18 + -0x1.6800000000000p+8f)
    ;
  LODWORD(v19) = 0;
  *((float*)&v19 + 1) = v18 * 0x1.1df46a0000000p-6f;
  v53 = v19;
  math_Quat_FromEulerianAngle((void*)((float*)&v54), (float*)&v53);
  v20 = *(_DWORD*)(v15 + 56);
  v21 = *(_DWORD*)(v15 + 60);
  v22 = vmulq_f32(v54, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] = v46;
  LANES128(v25).n128_u64[0] = v46;
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v24).n128_u64[1] = v45;
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v25).n128_u64[1] = LANES128(v27).n128_u64[0];
  v28 = vmulq_f32(v25, v23);
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v25).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 1);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v24).n128_u64[0];
  LANES128(v24).n128_u64[1] = v46;
  v29 =
      vmlaq_f32(vmlaq_f32(vmulq_f32(v22, v26),
                          COERCE_AS(float32x4_t, GameData_1a83800), v28),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v24, v25));
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v22).n128_u64[0];
  v30 = vmlsq_f32(v29, v24, v27);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[0] = LANES128(v54).n128_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v24).n128_u64[0];
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v33).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 1);
  v34 = vmlaq_f32(vmulq_f32(v22, v30), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v32, v31));
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v54, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[1] = LANES128(v31).n128_u64[0];
  LANES128(v31).n128_u64[1] = LANES128(v54).n128_u64[0];
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v35).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v36 = vmlsq_f32(vmlaq_f32(v34, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v31, v33)),
                  v35, v24);
  LANES128(v36).n128_u32[3] = 0;
  v48 = vaddq_f32(i, v36);
  v37 = *(_DWORD*)(v15 + 48);
  v38 = fw_memory_g_heap_manager_ptr;
  v39 = v17 + *(float*)(v15 + 52);
  v40 = (float32x4_t*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 432, 16, 0);
  LANES128(v40[1]).n128_u64[0] = 0;
  v41 = v40 + 2;
  v42 = v40;
  LANES128(*(v40)).n128_u64[0] = (unsigned __int64)(GameData_212e460[0] + 2);
  LANES128(*(v40)).n128_u64[1] = 0;
  wld_a7fab0((__int64)&v40[2]);
  *a3 = v41;
  a3[1] = v42;
  LANES128(v42[2]).n128_u32[2] = 2;
  v43 = *Vector_650e70();
  LANES128(v42[7]).n128_u32[0] = v37;
  LANES128(v42[7]).n128_f32[1] = v39;
  LANES128(v42[7]).n128_u32[2] = v20;
  LANES128(v42[8]).n128_u32[0] = v21;
  LANES128(v42[7]).n128_u32[3] = 0;
  v42[4] = v48;
  v42[5] = COERCE_AS(float32x4_t, v43);
  gfx_render_b3aee0(v41);
  if ((v49_.v51 & 1) != 0 && v49_.v52 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)v38 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v38 + v44, v49_.v52);
  }
}

__attribute__((swiftcall)) void game_facility_1450840(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2, __int64 a3)
{
  float32x4_t** a4 = (float32x4_t**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  float32x4_t v19;
  __int64 v20;
  __int64 v21;
  float32x4_t v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float32x4_t v26;
  float v27;
  __int64 v28;
  __int64 v29;
  int8x16_t v30;
  __int64 v31;
  __int64 v32;
  float v33;
  int8x16_t v34;
  float v35;
  int8x16_t v36;
  float v37;
  unsigned __int64 v38;
  unsigned __int32 v39;
  unsigned __int32 v40;
  float32x4_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  unsigned __int32 v55;
  __int64 v56;
  float v57;
  float32x4_t* v58;
  float32x4_t* v59;
  float32x4_t* v60;
  __int128 v61;
  __int64 v62;
  float32x4_t v63;
  float32x2_t v64;
  float32x4_t v65;
  float32x4_t v66;
  int8x16_t v67;
  unsigned __int32 v68;
  float32x4_t v69;
  float32x4_t v70;
  struct {
    float32x4_t v71;
    char gap64_[8];
    char v72;
    char gap73_[15];
    __int64 v73;
  } v71_;
  __int128 v74;
  int8x16_t v75;

  if (a2 == 0) {
    goto LABEL_50;
  }
  v7 = (*(_BYTE*)a1 & 1) != 0 ? *(_QWORD*)(a1 + 16) : a1 + 1;
  v8 = game_HashString(v7);
  if (v8 == 0) {
    goto LABEL_50;
  }
  v9 = *(_QWORD*)(*GameData_21310f8 + 96);
  if (v9 == 0 || *(_QWORD*)(*GameData_21310f8 + 112) == 0) {
    goto LABEL_50;
  }
  v11 = v9 - 1;
  if ((v9 & (v9 - 1)) != 0) {
    v12 = v8;
    if (v8 >= v9) {
      v12 = v8 % v9;
    }
  }
  else {
    v12 = v11 & v8;
  }
  v13 = *(_QWORD**)(*(_QWORD*)(*GameData_21310f8 + 88) + 8 * v12);
  if (v13 == nullptr) {
    goto LABEL_50;
  }
  v14 = (_QWORD*)*v13;
  if (v14 == nullptr) {
    goto LABEL_50;
  }
  if ((v9 & v11) == 0) {
    while (1) {
      v16 = v14[1];
      if (v16 == v8) {
        if (v14[2] == v8) {
          goto LABEL_30;
        }
      }
      else if ((v16 & v11) != v12) {
        goto LABEL_50;
      }
      v14 = (_QWORD*)*v14;
      if (v14 == nullptr) {
        goto LABEL_50;
      }
    }
  }
  while (1) {
    v15 = v14[1];
    if (v15 == v8) {
      break;
    }
    if (v15 >= v9) {
      v15 %= v9;
    }
    if (v15 != v12) {
      goto LABEL_50;
    }
  LABEL_19:
    v14 = (_QWORD*)*v14;
    if (v14 == nullptr) {
      goto LABEL_50;
    }
  }
  if (v14[2] != v8) {
    goto LABEL_19;
  }
LABEL_30:
  v17 = v14[3];
  if (v17 == 0 || *(_BYTE*)(v17 + 32) != 3) {
  LABEL_50:
    *a4 = nullptr;
    a4[1] = nullptr;
    return;
  }
  game_facility_140d160((void*)((__int128*)&v71_.v71), a3);
  v18 = *(unsigned __int8*)(v17 + 33);
  v19 = v71_.v71;
  LANES128(v19).n128_u32[3] = 0;
  v69 = v19;
  if (v18 == 1) {
    v20 = *(_QWORD*)(a2 + 192);
    v21 = *(_QWORD*)(a2 + 200);
    v65 = v71_.v71;
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
    }
    v63 = *(float32x4_t*)(v20 + 16);
    SceneCharacterMovement_1417860((void*)(&v75), v20);
    v22 = vaddq_f32(v65, vaddq_f32(v63, v75));
    if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v68 = LANES128(v22).n128_u32[1];
      (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
      std___1___shared_weak_count___release_weak(v21);
      LANES128(v22).n128_u32[1] = v68;
    }
    v19 = v69;
    v18 = *(unsigned __int8*)(v17 + 33);
    LANES128(v19).n128_u32[1] = LANES128(v22).n128_u32[1];
    v69 = v19;
  }
  v23 = a2;
  if (v18 == 2) {
    v24 = *(_QWORD*)(a2 + 192);
    v25 = *(_QWORD*)(a2 + 200);
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
    }
    v66 = *(float32x4_t*)(v24 + 16);
    SceneCharacterMovement_14179e0((void*)(&v75), v24);
    v26 = v69;
    v19 = vaddq_f32(v69, vaddq_f32(v66, v75));
    LANES128(v26).n128_u32[1] = LANES128(v19).n128_u32[1];
    v69 = v26;
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
    v23 = a2;
  }
  v27 = 0x0.0p+0f;
  if ((*(_BYTE*)(v17 + 64) & 1) == 0) {
    v28 = *(_QWORD*)(v23 + 192);
    v29 = *(_QWORD*)(v23 + 200);
    if (v29 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                memory_order_relaxed);
      v27 = *(float*)(v28 + 32);
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak(v29);
        v23 = a2;
      }
    }
    else {
      v27 = *(float*)(v28 + 32);
    }
  }
  LANES128(v19).n128_u32[0] = *(_DWORD*)(v17 + 44);
  LANES128(v30).n128_u64[0] = *(_QWORD*)(v17 + 36);
  LANES128(v30).n128_u64[1] = LANES128(v19).n128_u64[0];
  v67 = v30;
  if (*(_BYTE*)(v17 + 33) == 2) {
    v31 = *(_QWORD*)(v23 + 192);
    v32 = *(_QWORD*)(v23 + 200);
    LANES64(v64).n64_u64[0] = *(unsigned __int64*)(v17 + 36);
    if (v32 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                memory_order_relaxed);
      v33 = SceneCharacterMovement_1417ce0(v31);
      v34 = v67;
      LANES128(v34).n128_f32[1] = vmuls_lane_f32(v33, v64, 1);
      v67 = v34;
      if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
        std___1___shared_weak_count___release_weak(v32);
      }
    }
    else {
      v35 = SceneCharacterMovement_1417ce0(v31);
      v36 = v67;
      LANES128(v36).n128_f32[1] = vmuls_lane_f32(v35, v64, 1);
      v67 = v36;
    }
  }
  v37 = v27;
  if (v27 < -0x1.6800000000000p+7f) {
    v37 = v27;
    do {
      v37 = v37 + 0x1.6800000000000p+8f;
    } while (v37 < -0x1.6800000000000p+7f);
  }
  for (; v37 >= 0x1.6800000000000p+7f; v37 = v37 + -0x1.6800000000000p+8f)
    ;
  LODWORD(v38) = 0;
  *((float*)&v38 + 1) = v37 * 0x1.1df46a0000000p-6f;
  v74 = v38;
  math_Quat_FromEulerianAngle((void*)((float*)&v75), (float*)&v74);
  v39 = *(_DWORD*)(v17 + 56);
  v40 = *(_DWORD*)(v17 + 60);
  LANES128(v41).n128_u64[0] = LANES128(v67).n128_u64[0];
  v42 = vmulq_f32(v75, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v44).n128_u64[0];
  *(int8x8_t*)&LANES128(v45).n128_i8[8] =
      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v46).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v42).n128_u64[0]), 1);
  v47 = vmlaq_f32(vmulq_f32(v42, v43), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v41, v45));
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v44).n128_u64[1] = LANES128(v41).n128_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v67).n128_u64[0];
  v48 = vmlaq_f32(v47, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v41, v46));
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v41).n128_i8[8] =
      vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v42).n128_u64[1] = LANES128(v42).n128_u64[0];
  v49 = vmlsq_f32(v48, v41, v44);
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] = LANES128(v75).n128_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v44).n128_u64[0];
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v50).n128_i8[8] =
      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v51).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 1);
  v52 = vmlaq_f32(vmulq_f32(v42, v49), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v41, v50));
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v75, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v44).n128_u64[1] = LANES128(v50).n128_u64[0];
  LANES128(v50).n128_u64[1] = LANES128(v75).n128_u64[0];
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v53).n128_i8[8] =
      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v54 = vmlsq_f32(vmlaq_f32(v52, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v50, v51)),
                  v53, v44);
  LANES128(v54).n128_u32[3] = 0;
  v70 = vaddq_f32(v69, v54);
  v55 = *(_DWORD*)(v17 + 48);
  v56 = fw_memory_g_heap_manager_ptr;
  v57 = v27 + *(float*)(v17 + 52);
  v58 = (float32x4_t*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 432, 16, 0);
  LANES128(v58[1]).n128_u64[0] = 0;
  v59 = v58 + 2;
  v60 = v58;
  LANES128(*(v58)).n128_u64[0] = (unsigned __int64)(GameData_212e460[0] + 2);
  LANES128(*(v58)).n128_u64[1] = 0;
  wld_a7fab0((__int64)&v58[2]);
  *a4 = v59;
  a4[1] = v60;
  LANES128(v60[2]).n128_u32[2] = 2;
  v61 = *Vector_650e70();
  LANES128(v60[7]).n128_u32[0] = v55;
  LANES128(v60[7]).n128_f32[1] = v57;
  LANES128(v60[7]).n128_u32[2] = v39;
  LANES128(v60[8]).n128_u32[0] = v40;
  LANES128(v60[7]).n128_u32[3] = 0;
  v60[4] = v70;
  v60[5] = COERCE_AS(float32x4_t, v61);
  gfx_render_b3aee0(v59);
  if ((v71_.v72 & 1) != 0 && v71_.v73 != 0) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)v56 + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v56 + v62, v71_.v73);
  }
}

void game_facility_14516c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64** v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64* v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD** v30;
  _QWORD* v31;
  __int64 v32;
  char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  char* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  struct {
    __int64 v66;
    unsigned __int64 v67;
    char* v68;
  } v66_;
  struct {
    __int64 v69;
    __int64 v70;
  } v69_;

  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = game_facility_SceneCameraWorkUpdater_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_WORD*)(a1 + 16) = 0;
  v4 = a1 + 16;
  *(_QWORD*)(a1 + 40) = 0;
  v5 = (__int64*)(a1 + 40);
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 176) = 1065353216;
  *(_QWORD*)(a1 + 184) = GameData_203ef60;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 232) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = 2;
  v6 = GameData_2131320[0] + 2;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = GameData_203ef60;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 320) = 1065353216;
  *(_QWORD*)(a1 + 328) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 344) = 2;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = GameData_203ef90;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 416) = 1065353216;
  *(_QWORD*)(a1 + 424) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 432) = 0;
  *(_DWORD*)(a1 + 440) = 2;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 216) = v6;
  *(_QWORD*)(a1 + 224) = 1065353216;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = v6;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = v6;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v7 = *(_QWORD*)(a3 + 16);
  }
  else {
    v7 = a3 + 1;
  }
  v8 = game_HashString(v7);
  if (v8 != 0) {
    v9 = *GameData_2131128;
    v10 = *(_QWORD*)(*GameData_2131128 + 96);
    if (v10 != 0 && *(_QWORD*)(v9 + 112) != 0) {
      v11 = v10 - 1;
      if ((v10 & (v10 - 1)) != 0) {
        v12 = v8;
        if (v8 >= v10) {
          v12 = v8 % v10;
        }
      }
      else {
        v12 = v11 & v8;
      }
      v13 = *(_QWORD**)(*(_QWORD*)(v9 + 88) + 8 * v12);
      if (v13 != nullptr) {
        v14 = (_QWORD*)*v13;
        if (v14 != nullptr) {
          if ((v10 & v11) == 0) {
            while (1) {
              v16 = v14[1];
              if (v16 == v8) {
                if (v14[2] == v8) {
                  goto LABEL_27;
                }
              }
              else if ((v16 & v11) != v12) {
                return;
              }
              v14 = (_QWORD*)*v14;
              if (v14 == nullptr) {
                return;
              }
            }
          }
          while (1) {
            v15 = v14[1];
            if (v15 == v8) {
              break;
            }
            if (v15 >= v10) {
              v15 %= v10;
            }
            if (v15 != v12) {
              return;
            }
          LABEL_16:
            v14 = (_QWORD*)*v14;
            if (v14 == nullptr) {
              return;
            }
          }
          if (v14[2] != v8) {
            goto LABEL_16;
          }
        LABEL_27:
          v17 = v14[3];
          if (v17 != 0) {
            v18 = *(__int64***)(v17 + 40);
            v19 = *v18;
            v20 = v18[1];
            if (*v18 != v20) {
              v21 = 0;
              do {
                v22 = *(_QWORD*)(a1 + 48);
                v23 = *(_QWORD*)(a1 + 56);
                v24 = *v19;
                if (v23 == v22) {
                  v25 = 0;
                }
                else {
                  v25 = ((v23 - v22) << 6) - 1;
                }
                v26 = *(_QWORD*)(a1 + 72) + v21;
                if (v25 == v26) {
                  GameRoutine_14552a0(v5);
                  v22 = *(_QWORD*)(a1 + 48);
                  v26 = *(_QWORD*)(a1 + 80) + *(_QWORD*)(a1 + 72);
                }
                ++v19;
                *(_QWORD*)(*(_QWORD*)(v22 + 8 * (v26 >> 9)) +
                           8 * (v26 & 0x1FF)) = v24;
                v21 = *(_QWORD*)(a1 + 80) + 1LL;
                *(_QWORD*)(a1 + 80) = v21;
              } while (v19 != v20);
            }
            GameRoutine_60a020(v4, *(const char**)(v17 + 8));
            v27 = (__int64*)fw_memory_g_heap_manager_ptr;
            v28 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
            v29 = *(_QWORD*)(a1 + 136);
            v28[1] = 0;
            v28[2] = 0;
            *(_QWORD*)(a1 + 136) = v28;
            *v28 = GameData_203efc0;
            v28[3] = game_facility_SceneCameraWorkUpdater_StateBranchEnd_vtable;
            *(_QWORD*)(a1 + 128) = v28 + 3;
            if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
              std___1___shared_weak_count___release_weak(v29);
            }
            v30 = (_QWORD**)GameData_2130fc0[0];
            v31 = *(_QWORD**)GameData_2130fc0[0];
            if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
              v32 = *(_QWORD*)(a1 + 32);
            }
            else {
              v32 = a1 + 17;
            }
            v33 = game_util_Format("%s_Tick", v32);
            v34 = strlen(v33);
            if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_107;
            }
            v35 = v34;
            if (v34 >= 0x17) {
              v37 = (v34 | 7) == 0x17 ? 26LL : (v34 | 7) + 1;
              v36 = (char*)fw_memory_HeapManager_Allocate(*v27, v37, 16, 0);
              v66_.v67 = v35;
              v66_.v68 = v36;
              v66_.v66 = v37 | 1;
            }
            else {
              LOBYTE(v66_.v66) = 2 * v34;
              v36 = (char*)&v66_.v66 + 1;
              if (v34 == 0) {
                goto LABEL_51;
              }
            }
            memmove((__int64)v36, (__int64)v33, v35);
          LABEL_51:
            v36[v35] = 0;
            game_facility_19532e0((void*)(&v69_.v69), v31, &v66_.v66,
                                  0x0.0p+0f);
            v38 = v69_.v69;
            v39 = v69_.v70;
            v40 = *(_QWORD*)(a1 + 96);
            v69_.v69 = 0;
            v69_.v70 = 0;
            *(_QWORD*)(a1 + 88) = v38;
            *(_QWORD*)(a1 + 96) = v39;
            if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
              std___1___shared_weak_count___release_weak(v40);
            }
            v41 = v69_.v70;
            if (v69_.v70 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v69_.v70 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
              std___1___shared_weak_count___release_weak(v41);
            }
            if ((v66_.v66 & 1) != 0 && v66_.v68 != nullptr) {
              v42 = 128;
              if (*(_QWORD*)(*v27 + 200) == 0) {
                v42 = 56;
              }
              nn_mem_StandardAllocator_Free(*v27 + v42, (__int64)v66_.v68);
            }
            v43 = *v30;
            v44 = (*(_BYTE*)(a1 + 16) & 1) != 0 ? *(_QWORD*)(a1 + 32) : a1 + 17;
            v45 = game_util_Format("%s_Blackout", v44);
            v46 = strlen(v45);
            if (v46 >= 0xFFFFFFFFFFFFFFF7LL) {
            LABEL_107:
              String_60a1d0();
            }
            v47 = v46;
            if (v46 >= 0x17) {
              v49 = (v46 | 7) == 0x17 ? 26LL : (v46 | 7) + 1;
              v48 = (char*)fw_memory_HeapManager_Allocate(*v27, v49, 16, 0);
              v66_.v67 = v47;
              v66_.v68 = v48;
              v66_.v66 = v49 | 1;
            }
            else {
              LOBYTE(v66_.v66) = 2 * v46;
              v48 = (char*)&v66_.v66 + 1;
              if (v46 == 0) {
                goto LABEL_74;
              }
            }
            memmove((__int64)v48, (__int64)v45, v47);
          LABEL_74:
            v48[v47] = 0;
            game_facility_19532e0((void*)(&v69_.v69), v43, &v66_.v66,
                                  0x1.0000000000000p-2f);
            v50 = v69_.v69;
            v51 = v69_.v70;
            v52 = *(_QWORD*)(a1 + 112);
            v69_.v69 = 0;
            v69_.v70 = 0;
            *(_QWORD*)(a1 + 104) = v50;
            *(_QWORD*)(a1 + 112) = v51;
            if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
              std___1___shared_weak_count___release_weak(v52);
            }
            v53 = v69_.v70;
            if (v69_.v70 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v69_.v70 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
              std___1___shared_weak_count___release_weak(v53);
            }
            if ((v66_.v66 & 1) != 0 && v66_.v68 != nullptr) {
              v54 = 128;
              if (*(_QWORD*)(*v27 + 200) == 0) {
                v54 = 56;
              }
              nn_mem_StandardAllocator_Free(*v27 + v54, (__int64)v66_.v68);
            }
            if (*(_QWORD*)(a1 + 168) != 0) {
              v55 = *(_QWORD**)(a1 + 160);
              if (v55 != nullptr) {
                do {
                  v58 = (_QWORD*)*v55;
                  v59 = (_QWORD*)v55[8];
                  if (v59 == v55 + 4) {
                    v56 = 32;
                  }
                  else {
                    if (v59 == nullptr) {
                      goto LABEL_90;
                    }
                    v56 = 40;
                  }
                  (*(void (**)(__int64))(*v59 + v56))((__int64)v59);
                LABEL_90:
                  if (*(_QWORD*)(*v27 + 200) != 0) {
                    v57 = 128;
                  }
                  else {
                    v57 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v27 + v57, (__int64)v55);
                  v55 = v58;
                } while (v58 != nullptr);
              }
              v60 = *(_QWORD*)(a1 + 152);
              *(_QWORD*)(a1 + 160) = 0;
              if (v60 != 0) {
                v61 = v60 & 7;
                if (v60 >= 8) {
                  v63 = v60 & 0xFFFFFFFFFFFFFFF8LL;
                  v62 = 0;
                  do {
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v62) = 0;
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v62 + 8) = 0;
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v62 + 16) = 0;
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v62 + 24) = 0;
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v62 + 32) = 0;
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v62 + 40) = 0;
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * v62 + 48) = 0;
                    v64 = *(_QWORD*)(a1 + 144) + 8 * v62;
                    v62 += 8;
                    *(_QWORD*)(v64 + 56) = 0;
                  } while (v63 != v62);
                }
                else {
                  v62 = 0;
                }
                if (v61 != 0) {
                  v65 = 8 * v62;
                  do {
                    --v61;
                    *(_QWORD*)(*(_QWORD*)(a1 + 144) + v65) = 0;
                    v65 += 8;
                  } while (v61 != 0);
                }
              }
              *(_QWORD*)(a1 + 168) = 0;
            }
          }
        }
      }
    }
  }
}

void game_facility_1467a30(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  if (a1 != 0) {
    v1 = (_QWORD*)GameData_21f3ff8;
    if (GameData_21f3ff8 != 0) {
      v2 = *(_QWORD**)(GameData_21f3ff8 + 48);
      v3 = *(_QWORD*)(GameData_21f3ff8 + 64);
      *(_QWORD*)(GameData_21f3ff8 + 56) = v2;
      if ((unsigned __int64)v2 >= v3) {
        v5 = v3 - (_QWORD)v2;
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
          GameRoutine_60a210();
        }
        v9 = fw_memory_g_heap_manager_ptr;
        v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v7, 16, 0);
        *v10 = a1;
        v4 = v10 + 1;
        v1[6] = v10;
        v1[7] = v10 + 1;
        v1[8] = &v10[v7];
        if (v2 != nullptr) {
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, (__int64)v2);
        }
      }
      else {
        *v2 = a1;
        v4 = v2 + 1;
      }
      v1[7] = v4;
      if (game_facility_FacilityView_instance_ != 0) {
        v12 = *(_QWORD*)(game_facility_FacilityView_instance_ + 248);
        if (v12 == 0) {
        LABEL_23:
          if (GameData_21f3ff8 != 0) {
            v14 = *(__int64**)(GameData_21f3ff8 + 48);
            if (*(__int64**)(GameData_21f3ff8 + 56) != v14) {
              v15 = *v14;
              if (v15 != 0) {
                CostumeFile_9fea70((void*)((char*)v16_.v16),
                                   *(_QWORD*)(v15 + 392),
                                   *(_QWORD*)(v15 + 400));
                if (GameData_21f3ff8 != 0) {
                  *(_DWORD*)(GameData_21f3ff8 + 24) = LOBYTE(v16_.v16[0]);
                }
              }
            }
          }
          return;
        }
        v16_.v16[0] = GameData_20416b0;
        v16_.v16[1] = game_facility_FacilityView_instance_;
        v16_.v17 = v16_.v16;
        GameRoutine_1952d00(v12, 0, (__int64)v16_.v16);
        if (v16_.v17 == v16_.v16) {
          v13 = 32;
        }
        else {
          if (v16_.v17 == nullptr) {
            goto LABEL_22;
          }
          v13 = 40;
        }
        (*(void (**)(__int64))(*v16_.v17 + v13))((__int64)v16_.v17);
      LABEL_22:
        if (game_facility_FacilityView_instance_ == 0) {
          return;
        }
        goto LABEL_23;
      }
    }
  }
}

void game_facility_1468e10(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v18[2];
    char* v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  *(_QWORD*)a1 = game_facility_SceneCharacterBuilder_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16, 16, 0);
  *(_BYTE*)(v5 + 8) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 16) = v5;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)v5 = game_facility_SceneCharacterBuilder_LoadStateInitialize_vtable;
  v6 = *(_QWORD**)GameData_2130fc0[0];
  if ((*(_BYTE*)(a2 + 72) & 1) != 0) {
    v7 = *(_QWORD*)(a2 + 88);
  }
  else {
    v7 = a2 + 73;
  }
  v8 = game_util_Format("%s_Builder_LoadHide", v7);
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(*v4, v12, 16, 0);
    v18_.v18[1] = v10;
    v18_.v19 = v11;
    v18_.v18[0] = v12 | 1;
  }
  else {
    LOBYTE(v18_.v18[0]) = 2 * v9;
    v11 = (char*)v18_.v18 + 1;
    if (v9 == 0) {
      goto LABEL_13;
    }
  }
  memmove((__int64)v11, (__int64)v8, v10);
LABEL_13:
  v11[v10] = 0;
  game_facility_19532e0((void*)(&v20_.v20), v6, v18_.v18,
                        0x1.0000000000000p-2f);
  v13 = v20_.v20;
  v14 = v20_.v21;
  v15 = *(_QWORD*)(a1 + 32);
  v20_.v20 = 0;
  v20_.v21 = 0;
  *(_QWORD*)(a1 + 24) = v13;
  *(_QWORD*)(a1 + 32) = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = v20_.v21;
  if (v20_.v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
    if ((v18_.v18[0] & 1) == 0) {
      return;
    }
  }
  else if ((v18_.v18[0] & 1) == 0) {
    return;
  }
  if (v18_.v19 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v17, (__int64)v18_.v19);
  }
}

__int64 game_facility_1469d90(__int64 a1, char a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64** v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
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
  __int64* v44;
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
  _QWORD* v68;
  _QWORD* v69;
  _QWORD* v70;
  __int64* v71;
  _QWORD* v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  _QWORD* v84;
  char v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  char v93;
  _QWORD* v94;
  __int64 v95;
  __int64* v96;
  struct {
    __int64 v99;
    __int64 v100;
    __int64 v101;
  } v99_;
  struct {
    _QWORD* v102;
    __int64 v103;
  } v102_;
  __int64 v104;
  _QWORD* v105;
  __int64* v106;

  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22491e8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22491e8) != 0) {
    GameData_2247930 = 0;
    GameData_2247938 = (__int64)GameRoutine_146bf40;
    GameData_22478f0 = 0;
    GameData_22478f8 = (__int64)GameRoutine_146bf00;
    GameData_22478d0 = 0;
    GameData_22478d8 = 0;
    GameData_22478e0 = 0;
    GameData_2247a30 = 0;
    GameData_2247a38 = (__int64)ProcClassExaminerScene_146bfa0;
    GameData_22478a8 = 3;
    GameData_22478b0 = 0;
    GameData_22478b8 = 0;
    GameData_2247970 = 0;
    GameData_2247978 = (__int64)GameRoutine_146bf50;
    GameData_22478c0 = 0;
    GameData_22478c8 = 0;
    GameData_22478e8 = 8;
    GameData_22479f0 = 0;
    GameData_22479f8 = 144;
    GameData_2247908 = 0;
    GameData_2247910 = 0;
    GameData_2247918 = 0;
    GameData_2247920 = 0;
    GameData_2247928 = 13;
    GameData_2247940 = 0;
    GameData_2247948 = 0;
    GameData_2247950 = 0;
    GameData_2247958 = 0;
    GameData_2247960 = 0;
    GameData_2247968 = 13;
    GameData_2247980 = 0;
    GameData_2247988 = 0;
    GameData_2247990 = 0;
    GameData_2247998 = 0;
    GameData_22479a0 = 0;
    GameData_22479a8 = 13;
    GameData_22479b0 = 0;
    GameData_22479b8 = (__int64)GameRoutine_146bf60;
    GameData_22479c0 = 0;
    GameData_22479c8 = 0;
    GameData_22479d0 = 0;
    GameData_22479d8 = 0;
    GameData_22479e0 = 0;
    GameData_22479e8 = 13;
    GameData_2247a00 = 1;
    GameData_2247a08 = 0;
    GameData_2247a10 = 0;
    GameData_2247a18 = 0;
    GameData_2247a20 = 0;
    GameData_2247a28 = 13;
    GameData_2247a40 = 0;
    GameData_2247a48 = 0;
    GameData_2247a50 = 0;
    GameData_2247a58 = 0;
    GameData_2247a60 = 0;
    GameData_2247a68 = 12;
    GameData_2247a78 = 0;
    GameData_2247a80 = 0;
    GameData_2247a70 = 0;
    GameData_2247a88 = 11;
    GameData_2247a90 = 0;
    GameData_2247a98 = 0;
    GameData_2247aa0 = 0;
    GameData_2247aa8 = 2;
    GameData_2247ab0 = 0;
    GameData_2247ab8 = 0;
    GameData_2247ac0 = 0;
    GameData_2247ac8 = 1;
    GameData_2247ad0 = 0;
    GameData_2247ad8 = 0;
    GameData_2247ae0 = 0;
    GameData_2247ae8 = 13;
    GameData_2247af0 = 0;
    GameData_2247af8 = (__int64)GameHr_146c080;
    GameData_2247b00 = 0;
    GameData_2247b08 = 0;
    GameData_2247b10 = 0;
    GameData_2247b18 = 0;
    GameData_2247b20 = 0;
    GameData_2247b28 = 8;
    GameData_2247b30 = (__int64)game_hub_d856f0_ptr[0];
    GameData_2247b50 = 0;
    GameData_2247b58 = 0;
    GameData_2247b60 = 0;
    GameData_2247b48 = 0;
    GameData_2247b40 = 0;
    GameData_2247b38 = 0;
    GameData_2247b68 = 19;
    GameData_2247b70 = 0;
    GameData_2247b88 = 500;
    GameData_2247b90 = 0;
    GameData_2247b98 = 0;
    GameData_2247ba0 = 0;
    GameData_2247ba8 = 10;
    GameData_2247b78 = (__int64)GameData_212d060[0];
    GameData_2247c78 = (__int64)ProcClassExaminerScene_146c500;
    GameData_2247bb0 = 0;
    GameData_2247bc8 = 0;
    GameData_2247bd0 = 0;
    GameData_2247bd8 = 0;
    GameData_2247be0 = 0;
    GameData_2247be8 = 2;
    GameData_2247c00 = 0;
    GameData_2247bf8 = 0;
    GameData_2247bf0 = 0;
    GameData_2247c08 = 2;
    GameData_2247c10 = 0;
    GameData_2247c18 = 0;
    GameData_2247c20 = 0;
    GameData_2247c28 = 13;
    GameData_2247c30 = 0;
    GameData_2247c38 = (__int64)GameRoutine_146b3c0;
    GameData_2247c40 = 0;
    GameData_2247c48 = 0;
    GameData_2247c50 = 0;
    GameData_2247c58 = 0;
    GameData_2247c60 = 0;
    GameData_2247c68 = 13;
    GameData_2247c70 = 0;
    GameData_2247c80 = 0;
    GameData_2247c88 = 0;
    GameData_2247c90 = 0;
    GameData_2247c98 = 0;
    GameData_2247ca0 = 0;
    GameData_2247ca8 = 13;
    GameData_2247cb0 = 0;
    GameData_2247cb8 = (__int64)GameRoutine_146c5c0;
    GameData_2247cc0 = 0;
    GameData_2247cc8 = 0;
    GameData_2247cd0 = 0;
    GameData_2247cd8 = 0;
    GameData_2247ce0 = 0;
    GameData_2247ce8 = 12;
    GameData_2247d00 = 0;
    GameData_2247cf8 = 0;
    GameData_2247cf0 = 0;
    GameData_2247d08 = 11;
    GameData_2247d10 = 0;
    GameData_2247d18 = 0;
    GameData_2247d20 = 0;
    GameData_2247d28 = 2;
    GameData_2247d30 = 0;
    GameData_2247d38 = 0;
    GameData_2247d40 = 0;
    GameData_2247d48 = 3;
    GameData_2247d50 = 0;
    GameData_2247d58 = 0;
    GameData_2247d60 = 0;
    GameData_2247d68 = 13;
    GameData_2247d70 = 0;
    GameData_2247d80 = 0;
    GameData_2247d78 = (__int64)GameHr_146c740;
    GameData_2247d88 = 0;
    GameData_2247d90 = 0;
    GameData_2247d98 = 0;
    GameData_2247da0 = 0;
    GameData_2247da8 = 8;
    GameData_2247db0 = 0;
    GameData_2247bb8 = (__int64)GameData_212c720;
    GameData_2247dc8 = 0;
    GameData_2247dd0 = 0;
    GameData_2247dd8 = 0;
    GameData_2247de0 = 0;
    GameData_2247de8 = 12;
    GameData_2247e00 = 0;
    GameData_2247df8 = 0;
    GameData_2247df0 = 0;
    GameData_2247e08 = 2;
    GameData_2247e10 = 0;
    GameData_2247e18 = 0;
    GameData_2247e20 = 0;
    GameData_2247e28 = 2;
    GameData_2247e30 = 0;
    GameData_2247e38 = 0;
    GameData_2247e40 = 0;
    GameData_2247e48 = 4;
    GameData_2247e50 = 0;
    GameData_2247e58 = 0;
    GameData_2247e60 = 0;
    GameData_2247e68 = 13;
    GameData_2247e70 = 0;
    GameData_2247e78 = (__int64)GameHr_146c080;
    GameData_2247e80 = 0;
    GameData_2247e88 = 0;
    GameData_2247e90 = 0;
    GameData_2247e98 = 0;
    GameData_2247ea0 = 0;
    GameData_2247ea8 = 8;
    GameData_2247eb0 = (__int64)game_hub_d856f0_ptr[0];
    GameData_2247ed0 = 0;
    GameData_2247ed8 = 0;
    GameData_2247ee0 = 0;
    GameData_2247ec8 = 0;
    GameData_2247ec0 = 0;
    GameData_2247eb8 = 0;
    GameData_2247ee8 = 19;
    GameData_2247ef0 = 0;
    GameData_2247ef8 = (__int64)GameData_212d060[0];
    GameData_2247f08 = 500;
    GameData_2247f10 = 0;
    GameData_2247f18 = 0;
    GameData_2247f20 = 0;
    GameData_2247f28 = 10;
    GameData_2247f30 = 0;
    GameData_2247f38 = (__int64)GameData_212c720;
    GameData_2247f48 = 0;
    GameData_2247f50 = 0;
    GameData_2247f58 = 0;
    GameData_2247f60 = 0;
    GameData_2247f68 = 13;
    GameData_2247f70 = 0;
    GameData_2247f78 = (__int64)GameRoutine_146b3c0;
    GameData_2247f80 = 0;
    GameData_2247f88 = 0;
    GameData_2247f90 = 0;
    GameData_2247f98 = 0;
    GameData_2247fa0 = 0;
    GameData_2247fa8 = 13;
    GameData_2247fb0 = 0;
    GameData_2247fb8 = (__int64)ProcClassExaminerScene_146c7a0;
    GameData_2247fc0 = 0;
    GameData_2247fc8 = 0;
    GameData_2247fd0 = 0;
    GameData_2247fd8 = 0;
    GameData_2247fe0 = 0;
    GameData_2247fe8 = 13;
    GameData_2247ff0 = 0;
    GameData_2247ff8 = (__int64)GameRoutine_146c5c0;
    GameData_2248000 = 0;
    GameData_2248008 = 0;
    GameData_2248010 = 0;
    GameData_2248018 = 0;
    GameData_2248020 = 0;
    GameData_2248028 = 12;
    GameData_2248040 = 0;
    GameData_2248038 = 0;
    GameData_2248030 = 0;
    GameData_2248048 = 11;
    GameData_2248050 = 0;
    GameData_2248058 = 0;
    GameData_2248060 = 0;
    GameData_2248068 = 2;
    GameData_2247db8 = (__int64)GameData_2131550[0];
    GameData_2248968 = 14;
    GameData_22488c0 = 0;
    GameData_2248938 = (__int64)GameData_212c720;
    GameData_2248948 = 0;
    GameData_2248950 = 0;
    GameData_2248958 = 0;
    GameData_2248960 = 0;
    GameData_2248970 = 0;
    GameData_2248978 = (__int64)GameRoutine_146d290;
    GameData_2248980 = 0;
    GameData_2248988 = 0;
    GameData_22488c8 = 0;
    GameData_22488f0 = 0;
    GameData_22488f8 = (__int64)GameData_212d060[0];
    GameData_2248908 = 500;
    GameData_2248910 = 0;
    GameData_2248918 = 0;
    GameData_2248920 = 0;
    GameData_2248930 = 0;
    GameData_2248578 = 0;
    GameData_2248888 = 0;
    GameData_2248890 = 0;
    GameData_22488e8 = 19;
    GameData_2248898 = 0;
    GameData_22488a0 = 0;
    GameData_22488b0 = (__int64)game_hub_d856f0_ptr[0];
    GameData_22488d0 = 0;
    GameData_22488d8 = 0;
    GameData_22488e0 = 0;
    GameData_22488b8 = 0;
    GameData_2248858 = 0;
    GameData_2248860 = 0;
    GameData_2248848 = 0;
    GameData_2248928 = 10;
    GameData_2248840 = 0;
    GameData_2248838 = 0;
    GameData_2248830 = 0;
    GameData_2248868 = 13;
    GameData_2248870 = 0;
    GameData_2248880 = 0;
    GameData_22487e8 = 13;
    GameData_22487f0 = 0;
    GameData_2248800 = 0;
    GameData_2248808 = 0;
    GameData_22488a8 = 8;
    GameData_2248810 = 0;
    GameData_2248818 = 0;
    GameData_2248820 = 0;
    GameData_2248828 = 3;
    GameData_2248850 = 0;
    GameData_2248878 = (__int64)GameRoutine_146d7c0;
    GameData_22487f8 = (__int64)ProcClassExaminerScene_146d740;
    GameData_2248790 = 0;
    GameData_2248798 = 0;
    GameData_22487a0 = 0;
    GameData_22487a8 = 10;
    GameData_22487b0 = 0;
    GameData_22487b8 = (__int64)GameData_2131228[0];
    GameData_22487c8 = 0;
    GameData_22487d0 = 0;
    GameData_22487d8 = 0;
    GameData_22487e0 = 0;
    GameData_2248698 = 0;
    GameData_2248748 = 0;
    GameData_2248750 = 0;
    GameData_2248758 = 0;
    GameData_2248760 = 0;
    GameData_2248768 = 13;
    GameData_2248770 = 0;
    GameData_2248778 = (__int64)
        game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult;
    GameData_2248780 = 0;
    GameData_2248788 = 0;
    GameData_22486f0 = 0;
    GameData_2248708 = 0;
    GameData_2248710 = 0;
    GameData_2248718 = 0;
    GameData_2248720 = 0;
    GameData_2248728 = 13;
    GameData_2248730 = 0;
    GameData_2248740 = 0;
    GameData_22486a0 = 0;
    GameData_22486a8 = 13;
    GameData_22486b0 = 0;
    GameData_22486c0 = 0;
    GameData_22486c8 = 0;
    GameData_22486d0 = 0;
    GameData_22486d8 = 0;
    GameData_22486e0 = 0;
    GameData_22486e8 = 10;
    GameData_2248580 = 0;
    GameData_2248650 = 0;
    GameData_2248658 = 0;
    GameData_2248660 = 0;
    GameData_2248668 = 2;
    GameData_2248680 = 0;
    GameData_2248678 = 0;
    GameData_2248670 = 0;
    GameData_2248690 = 0;
    GameData_22485f0 = 0;
    GameData_22486f8 = (__int64)ProcClassTrialSeq_8b80e0_ptr;
    GameData_2248738 = (__int64)GameRoutine_146d410;
    GameData_22486b8 = (__int64)GameHr_146d3b0;
    GameData_2248648 = 7;
    GameData_2248688 = 7;
    GameData_2248608 = 0;
    GameData_2248610 = 0;
    GameData_2248618 = 0;
    GameData_2248620 = 0;
    GameData_2248628 = 12;
    GameData_2248630 = 0;
    GameData_2248638 = 0;
    GameData_2248640 = 0;
    GameData_2248588 = 0;
    GameData_22485a8 = 13;
    GameData_22485b0 = 0;
    GameData_22485c0 = 0;
    GameData_22485c8 = 0;
    GameData_22485d0 = 0;
    GameData_22485d8 = 0;
    GameData_22485e0 = 0;
    GameData_22485e8 = 8;
    GameData_2248070 = 0;
    GameData_22484e0 = 0;
    GameData_22484e8 = 8;
    GameData_2248548 = 0;
    GameData_2248550 = 0;
    GameData_2248558 = 0;
    GameData_2248560 = 0;
    GameData_2248568 = 3;
    GameData_2248590 = 0;
    GameData_2248598 = 0;
    GameData_22485a0 = 0;
    GameData_2248570 = 0;
    GameData_22484f0 = (__int64)ProcHubSeq_d85570_ptr[0];
    GameData_2248510 = 0;
    GameData_2248518 = 0;
    GameData_2248520 = 0;
    GameData_2248508 = 0;
    GameData_2248500 = 0;
    GameData_22484f8 = 0;
    GameData_2248528 = 8;
    GameData_2248530 = 0;
    GameData_22485f8 = (__int64)GameData_2131230;
    GameData_22485b8 = (__int64)GameHr_146d2a0;
    GameData_2248420 = 0;
    GameData_2248428 = 14;
    GameData_2248488 = 500;
    GameData_2248490 = 0;
    GameData_2248498 = 0;
    GameData_22484a0 = 0;
    GameData_22484a8 = 10;
    GameData_22484b0 = 0;
    GameData_22484b8 = (__int64)GameData_212c720;
    GameData_22484c8 = 0;
    GameData_22484d0 = 0;
    GameData_22484d8 = 0;
    GameData_2248430 = 0;
    GameData_2248438 = (__int64)GameRoutine_146d290;
    GameData_2248440 = 0;
    GameData_2248448 = 0;
    GameData_2248450 = 0;
    GameData_2248458 = 0;
    GameData_2248460 = 0;
    GameData_2248468 = 19;
    GameData_2248470 = 0;
    GameData_2248538 = (__int64)GameData_212c710[0];
    GameData_22483b0 = 0;
    GameData_22483b8 = (__int64)GameData_212d060[0];
    GameData_22483c8 = 500;
    GameData_22483d0 = 0;
    GameData_22483d8 = 0;
    GameData_22483e0 = 0;
    GameData_22483e8 = 10;
    GameData_22483f0 = 0;
    GameData_22483f8 = (__int64)GameData_212c720;
    GameData_2248408 = 0;
    GameData_2248410 = 0;
    GameData_2248418 = 0;
    GameData_22482b8 = 0;
    GameData_2248360 = 0;
    GameData_2248368 = 8;
    GameData_2248370 = (__int64)game_hub_d856f0_ptr[0];
    GameData_2248390 = 0;
    GameData_2248398 = 0;
    GameData_22483a0 = 0;
    GameData_2248388 = 0;
    GameData_2248380 = 0;
    GameData_2248378 = 0;
    GameData_22483a8 = 19;
    GameData_22482c0 = 0;
    GameData_2248318 = 0;
    GameData_2248320 = 0;
    GameData_2248328 = 13;
    GameData_2248330 = 0;
    GameData_2248340 = 0;
    GameData_2248348 = 0;
    GameData_2248350 = 0;
    GameData_2248358 = 0;
    GameData_22482c8 = 6;
    GameData_22482d0 = 0;
    GameData_22482d8 = 0;
    GameData_22482e0 = 0;
    GameData_22482e8 = 13;
    GameData_22482f0 = 0;
    GameData_2248300 = 0;
    GameData_2248308 = 0;
    GameData_2248310 = 0;
    GameData_2248258 = 0;
    GameData_2248260 = 0;
    GameData_2248268 = 12;
    GameData_2248280 = 0;
    GameData_2248278 = 0;
    GameData_2248270 = 0;
    GameData_2248288 = 6;
    GameData_2248290 = 0;
    GameData_2248298 = 0;
    GameData_22482a0 = 0;
    GameData_22482a8 = 2;
    GameData_22482b0 = 0;
    GameData_2248148 = 0;
    GameData_2248140 = 0;
    GameData_2248208 = 0;
    GameData_2248210 = 0;
    GameData_2248218 = 0;
    GameData_2248220 = 0;
    GameData_2248228 = 13;
    GameData_2248230 = 0;
    GameData_2248238 = (__int64)GameRoutine_146bf60;
    GameData_2248240 = 0;
    GameData_2248248 = 0;
    GameData_2248250 = 0;
    GameData_22481b0 = 0;
    GameData_22481c0 = 0;
    GameData_22481c8 = 0;
    GameData_22481d0 = 0;
    GameData_22481d8 = 0;
    GameData_22481e0 = 0;
    GameData_22481e8 = 10;
    GameData_22481f0 = 0;
    GameData_22481f8 = (__int64)GameData_2131228[0];
    GameData_2248138 = 0;
    GameData_2248168 = 13;
    GameData_2248170 = 0;
    GameData_2248180 = 0;
    GameData_2248188 = 0;
    GameData_2248190 = 0;
    GameData_2248198 = 0;
    GameData_22481a0 = 0;
    GameData_22481a8 = 13;
    GameData_2248078 = 0;
    GameData_2248080 = 0;
    GameData_22480f8 = (__int64)GameData_212c720;
    GameData_2248108 = 0;
    GameData_2248110 = 0;
    GameData_2248118 = 0;
    GameData_2248120 = 0;
    GameData_2248128 = 8;
    GameData_2248130 = (__int64)ProcHubSeq_d85570_ptr[0];
    GameData_2248150 = 0;
    GameData_2248158 = 0;
    GameData_2248160 = 0;
    GameData_22480a0 = 0;
    GameData_22480a8 = 19;
    GameData_22480b0 = 0;
    GameData_2248478 = (__int64)game_80a790_ptr[0];
    GameData_2248338 = (__int64)GameRoutine_146d250;
    GameData_22482f8 = (__int64)game_facility_146cca0;
    GameData_22481b8 = (__int64)ProcClassExaminerScene_146c9b0;
    GameData_2248178 = (__int64)GameRoutine_146c860;
    GameData_2248088 = 5;
    GameData_22480c8 = 500;
    GameData_22480d0 = 0;
    GameData_22480d8 = 0;
    GameData_22480e0 = 0;
    GameData_22480e8 = 10;
    GameData_22480f0 = 0;
    GameData_2248090 = 0;
    GameData_2248098 = 0;
    GameData_2248990 = 0;
    GameData_2248998 = 0;
    GameData_22489a0 = 0;
    GameData_22489c0 = 0;
    GameData_22489b8 = 0;
    GameData_22489b0 = 0;
    GameData_22489c8 = 8;
    GameData_22489d0 = 0;
    GameData_22489d8 = 0;
    GameData_22489e0 = 0;
    GameData_22489f0 = 0;
    GameData_22489a8 = 2;
    GameData_22489e8 = 10;
    GameData_22480b8 = (__int64)game_80a680_ptr[0];
    GameData_2248b78 = (__int64)GameRoutine_146bf60;
    GameData_2248f80 = 1;
    GameData_2248e08 = 11;
    GameData_2248f08 = 11;
    GameData_2248f48 = 11;
    GameData_2248a08 = 0;
    GameData_2248a10 = 0;
    GameData_2248a18 = 0;
    GameData_2248a20 = 0;
    GameData_2248a30 = 0;
    GameData_2248a40 = 0;
    GameData_2248a48 = 0;
    GameData_2248a50 = 0;
    GameData_2248a58 = 0;
    GameData_2248a60 = 0;
    GameData_2248a70 = 0;
    GameData_2248a78 = (__int64)game_80a680_ptr[0];
    GameData_2248a88 = 500;
    GameData_2248a90 = 0;
    GameData_2248a98 = 0;
    GameData_2248aa0 = 0;
    GameData_2248ab0 = 0;
    GameData_2248ab8 = (__int64)GameData_212c720;
    GameData_2248ac8 = 0;
    GameData_2248ad0 = 0;
    GameData_2248ad8 = 0;
    GameData_2248ae0 = 0;
    GameData_2248af0 = (__int64)ProcHubSeq_d85570_ptr[0];
    GameData_2248b10 = 0;
    GameData_2248b18 = 0;
    GameData_2248b20 = 0;
    GameData_2248b08 = 0;
    GameData_2248b00 = 0;
    GameData_2248af8 = 0;
    GameData_2248b30 = 0;
    GameData_2248b40 = 0;
    GameData_2248b48 = 0;
    GameData_2248b50 = 0;
    GameData_2248b58 = 0;
    GameData_2248b60 = 0;
    GameData_2248b70 = 0;
    GameData_2248b80 = 0;
    GameData_2248b88 = 0;
    GameData_2248b90 = 0;
    GameData_2248b98 = 0;
    GameData_2248ba0 = 0;
    GameData_2248bc0 = 0;
    GameData_2248bb8 = 0;
    GameData_2248bb0 = 0;
    GameData_2248bc8 = 4;
    GameData_2248bd0 = 0;
    GameData_2248bd8 = 0;
    GameData_2248be0 = 0;
    GameData_2248bf0 = 0;
    GameData_2248bf8 = 0;
    GameData_2248c00 = 0;
    GameData_2248c10 = 0;
    GameData_2248c18 = 0;
    GameData_2248c20 = 0;
    GameData_2248c30 = 0;
    GameData_2248c38 = (__int64)GameHr_146c080;
    GameData_2248c40 = 0;
    GameData_2248c48 = 0;
    GameData_2248c50 = 0;
    GameData_2248c58 = 0;
    GameData_2248c60 = 0;
    GameData_2248c70 = (__int64)game_hub_d856f0_ptr[0];
    GameData_2248c90 = 0;
    GameData_2248c98 = 0;
    GameData_2248ca0 = 0;
    GameData_2248c88 = 0;
    GameData_2248c80 = 0;
    GameData_2248c78 = 0;
    GameData_2248cb0 = 0;
    GameData_2248cb8 = (__int64)GameData_212d060[0];
    GameData_2248cc8 = 500;
    GameData_2248cd0 = 0;
    GameData_2248cd8 = 0;
    GameData_2248ce0 = 0;
    GameData_2248cf0 = 0;
    GameData_2248cf8 = (__int64)GameData_212c720;
    GameData_2248d08 = 0;
    GameData_2248d10 = 0;
    GameData_2248d18 = 0;
    GameData_2248d20 = 0;
    GameData_2248d30 = 0;
    GameData_2248d38 = (__int64)GameRoutine_146b3c0;
    GameData_2248d40 = 0;
    GameData_2248d48 = 0;
    GameData_2248d50 = 0;
    GameData_2248d58 = 0;
    GameData_2248d60 = 0;
    GameData_2248d70 = 0;
    GameData_2248d80 = 0;
    GameData_2248d88 = 0;
    GameData_2248d90 = 0;
    GameData_2248d98 = 0;
    GameData_2248da0 = 0;
    GameData_2248db0 = 0;
    GameData_2248db8 = (__int64)GameRoutine_146c5c0;
    GameData_2248dc0 = 0;
    GameData_2248dc8 = 0;
    GameData_2248dd0 = 0;
    GameData_2248dd8 = 0;
    GameData_2248de0 = 0;
    GameData_2248e00 = 0;
    GameData_2248df8 = 0;
    GameData_2248df0 = 0;
    GameData_2248e10 = 0;
    GameData_2248e18 = 0;
    GameData_2248e20 = 0;
    GameData_2248e30 = 0;
    GameData_2248e38 = 0;
    GameData_2248e40 = 0;
    GameData_2248e48 = 10;
    GameData_2248e50 = 0;
    GameData_2248e58 = 0;
    GameData_2248e60 = 0;
    GameData_2248e70 = 0;
    GameData_2248e80 = 0;
    GameData_2248e88 = 0;
    GameData_2248e90 = 0;
    GameData_2248e98 = 0;
    GameData_2248ea0 = 0;
    GameData_2248eb0 = 0;
    GameData_2248eb8 = (__int64)GameData_2131550[0];
    GameData_2248ec8 = 0;
    GameData_2248ed0 = 0;
    GameData_2248ed8 = 0;
    GameData_2248ee0 = 0;
    GameData_2248f00 = 0;
    GameData_2248ef8 = 0;
    GameData_2248ef0 = 0;
    GameData_2248f10 = 0;
    GameData_2248f18 = 0;
    GameData_2248f20 = 0;
    GameData_2248f30 = 0;
    GameData_2248f38 = 0;
    GameData_2248f40 = 0;
    GameData_2248f50 = 0;
    GameData_2248f58 = 0;
    GameData_2248f60 = 0;
    GameData_2248f70 = 0;
    GameData_2248f88 = 0;
    GameData_2248f90 = 0;
    GameData_2248f98 = 0;
    GameData_2248fa0 = 0;
    GameData_2248fb0 = 0;
    GameData_2248fb8 = (__int64)game_80a680_ptr[0];
    GameData_2248fc8 = 500;
    GameData_2248fd0 = 0;
    GameData_2248fd8 = 0;
    GameData_2248fe0 = 0;
    GameData_2248ff0 = 0;
    GameData_2248ff8 = (__int64)GameData_212c720;
    GameData_2249008 = 0;
    GameData_2248ba8 = 12;
    GameData_2248fa8 = 19;
    GameData_2248f68 = 13;
    GameData_2249010 = 0;
    GameData_2249018 = 0;
    GameData_2249020 = 0;
    GameData_2249030 = (__int64)ProcHubSeq_d85570_ptr[0];
    GameData_2249050 = 0;
    GameData_2249058 = 0;
    GameData_2248be8 = 2;
    GameData_2248fe8 = 10;
    GameData_2248f78 = 152;
    GameData_2249060 = 0;
    GameData_2249048 = 0;
    GameData_2249040 = 0;
    GameData_2249038 = 0;
    GameData_2249070 = 0;
    GameData_2248c08 = 9;
    GameData_2249028 = 8;
    GameData_2248c28 = 13;
    GameData_22489f8 = (__int64)ProcClassTrialSeq_8b80b0_ptr[0];
    GameData_2249068 = 8;
    GameData_2248c68 = 8;
    GameData_2248a28 = 13;
    GameData_2248ca8 = 19;
    GameData_2248a38 = (__int64)ProcClassExaminerScene_146dc80;
    GameData_2248ce8 = 10;
    GameData_2248a68 = 19;
    GameData_2248d28 = 13;
    GameData_2248aa8 = 10;
    GameData_2248d68 = 13;
    GameData_2248ae8 = 8;
    GameData_2248d78 = (__int64)ProcClassExaminerScene_146ddf0;
    GameData_2248b28 = 13;
    GameData_2248da8 = 13;
    GameData_2248b38 = (__int64)ProcClassExaminerScene_146dd50;
    GameData_2248de8 = 12;
    GameData_2248b68 = 13;
    GameData_2248e28 = 2;
    GameData_2248e68 = 13;
    GameData_2248e78 = (__int64)ProcClassExaminerScene_146dea0;
    GameData_2248ea8 = 8;
    GameData_2248ee8 = 12;
    GameData_2248f28 = 2;
    GameData_2249088 = 0;
    GameData_2249090 = 0;
    GameData_2249098 = 0;
    GameData_22490a0 = 0;
    GameData_22490b0 = 0;
    GameData_22490c0 = 0;
    GameData_22490c8 = 0;
    GameData_22490d0 = 0;
    GameData_22490d8 = 0;
    GameData_22490e0 = 0;
    GameData_22490f0 = 0;
    GameData_2249108 = 0;
    GameData_2249110 = 0;
    GameData_2249118 = 0;
    GameData_2249120 = 0;
    GameData_2249150 = 0;
    GameData_2249158 = 0;
    GameData_2249160 = 0;
    GameData_2249148 = 0;
    GameData_2249140 = 0;
    GameData_2249138 = 0;
    GameData_2249130 = 0;
    GameData_2249190 = 0;
    GameData_2249198 = 0;
    GameData_22491a0 = 0;
    GameData_22491d0 = 0;
    GameData_22491d8 = 0;
    GameData_22491e0 = 0;
    GameData_2249170 = 0;
    GameData_2249178 = 0;
    GameData_2249180 = 0;
    GameData_2249188 = 0;
    GameData_22491b0 = 0;
    GameData_22491b8 = 0;
    GameData_22491c0 = 0;
    GameData_22491c8 = 0;
    GameData_2249078 = (__int64)GameData_212dd50;
    GameData_22490a8 = 13;
    GameData_22490b8 = (__int64)GameRoutine_146df20;
    GameData_22490e8 = 8;
    GameData_22490f8 = (__int64)ProcClassExaminerScene_146df30;
    GameData_2249128 = 3;
    GameData_2249168 = 6;
    GameData_22491a8 = 0;
    __cxa_guard_release((__int64)&GameData_22491e8),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      320, 16, 0),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 192) = 0;
  *(_QWORD*)(v4 + 200) = 0;
  *(_QWORD*)(v4 + 176) = 0;
  *(_QWORD*)(v4 + 184) = 0;
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 192) = 0;
  game_facility_FacilityView_instance_ = v4;
  *(_QWORD*)v4 = GameData_2041368;
  v6 = GameData_2132488;
  *(_BYTE*)(v4 + 216) = 0;
  *(_BYTE*)(v4 + 220) = 0;
  *(_QWORD*)(v4 + 208) = v6 + 2;
  v7 = GameData_2130240[0];
  *(_BYTE*)(v4 + 232) = 0;
  *(_BYTE*)(v4 + 236) = 0;
  *(_QWORD*)(v4 + 224) = v7 + 2;
  GameRoutine_1418aa0(),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (__int64**)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    ++*GameData_2130fb8;
  }
  else {
    v9 = (__int64*)fw_memory_HeapManager_Allocate(*v3, 336, 16, 0),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_13892a0((__int64)v9),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v10 = *v9;
    *v8 = v9;
    (*(void (**)(__int64*))(v10 + 16))(v9),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v11 = *v3;
  *(_BYTE*)(v4 + 240) = a2;
  *(_WORD*)(v4 + 241) = 0;
  *(_QWORD*)(v4 + 248) = 0;
  *(_QWORD*)(v4 + 256) = 0;
  *(_QWORD*)v4 = game_facility_anonymous_ProcClassExaminerScene_vtable;
  *(_QWORD*)(v4 + 208) = GameData_20411a8;
  v12 = fw_memory_HeapManager_Allocate(v11, 432, 16, 0),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = GameData_212e460[0];
  v14 = (__int64*)GameData_212c2a0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_DWORD*)(v12 + 152) = 0;
  *(_QWORD*)(v12 + 112) = 1065353216;
  *(_QWORD*)(v12 + 120) = 0x100000000LL;
  *(_QWORD*)(v12 + 144) = 0x4110000041800000LL;
  *(_QWORD*)(v12 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v12 + 136) = 0x41C0000042100000LL;
  v15 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v14);
  v16 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v14);
  v17 = v13 + 2;
  v18 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14);
  v19 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14 + 8);
  v20 = *v14;
  v21 = v14[1];
  *(_QWORD*)v12 = v17;
  *(_QWORD*)(v12 + 8) = 0;
  *(_OWORD*)(v12 + 48) = GameData_1a83090;
  *(_OWORD*)(v12 + 64) = (__typeof__(*(_OWORD*)(v12 + 64))){0};
  *(_QWORD*)(v12 + 224) = v18;
  *(_QWORD*)(v12 + 232) = v19;
  v22 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14);
  v23 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 8);
  *(_OWORD*)(v12 + 80) = GameData_1a83610;
  *(_OWORD*)(v12 + 96) = (__typeof__(*(_OWORD*)(v12 + 96))){0};
  *(_QWORD*)(v12 + 240) = v15;
  *(_QWORD*)(v12 + 248) = v16;
  *(_QWORD*)(v12 + 192) = v20;
  *(_QWORD*)(v12 + 200) = v21;
  *(_QWORD*)(v12 + 208) = v22;
  *(_QWORD*)(v12 + 216) = v23;
  v24 = (__int64*)GameData_212c2b0;
  *(_BYTE*)(v12 + 164) = 1;
  *(_QWORD*)(v12 + 168) = 1092616192;
  *(_DWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 408) = 0;
  *(_QWORD*)(v12 + 416) = 0;
  *(_QWORD*)(v12 + 384) = 0;
  *(_QWORD*)(v12 + 392) = 0;
  v25 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v24);
  v27 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24);
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8);
  v29 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24);
  v28 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v24);
  v31 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v24);
  v30 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v24 + 8);
  v32 = *v24;
  *(_QWORD*)(v12 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v24 + 8);
  *(_QWORD*)(v12 + 280) = v26;
  v33 = *v24;
  v34 = v24[1];
  *(_QWORD*)(v12 + 320) = v32;
  *(_QWORD*)(v12 + 328) = v25;
  *(_QWORD*)(v12 + 256) = v33;
  *(_QWORD*)(v12 + 264) = v34;
  v35 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24);
  *(_QWORD*)(v12 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24);
  *(_QWORD*)(v12 + 312) = v28;
  v37 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8);
  v36 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 16);
  *(_QWORD*)(v12 + 352) = v31;
  *(_QWORD*)(v12 + 360) = v35;
  *(_QWORD*)(v12 + 288) = v36;
  *(_QWORD*)(v12 + 296) = v30;
  v38 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v24);
  *(_QWORD*)(v12 + 336) = v27;
  *(_QWORD*)(v12 + 344) = v37;
  *(_QWORD*)(v12 + 368) = v29;
  *(_QWORD*)(v12 + 376) = v38;
  v39 = GameData_212e438;
  *(_QWORD*)(v12 + 156) = 0x469C40003DCCCCCDLL;
  *(_BYTE*)(v12 + 165) = 1;
  *(_QWORD*)(v12 + 424) = 1023;
  *(_QWORD*)(v12 + 392) = 1023;
  *(_QWORD*)(v12 + 400) = 0;
  *(_QWORD*)(v4 + 272) = v12;
  v40 = v39 + 16;
  *(_QWORD*)(v12 + 32) = v39 + 16;
  *(_QWORD*)(v4 + 264) = v12 + 32;
  v41 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       432, 16, 0),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14);
  v43 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14 + 8);
  *(_QWORD*)(v41 + 8) = 0;
  *(_QWORD*)(v41 + 16) = 0;
  *(_QWORD*)v41 = v17;
  *(_QWORD*)(v41 + 40) = 0;
  *(_QWORD*)(v41 + 112) = 1065353216;
  *(_QWORD*)(v41 + 120) = 0x100000000LL;
  *(_OWORD*)(v41 + 48) = GameData_1a83090;
  *(_OWORD*)(v41 + 64) = (__typeof__(*(_OWORD*)(v41 + 64))){0};
  *(_OWORD*)(v41 + 80) = GameData_1a83610;
  *(_OWORD*)(v41 + 96) = (__typeof__(*(_OWORD*)(v41 + 96))){0};
  v44 = (__int64*)fw_memory_g_heap_manager_ptr;
  v45 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v14);
  v46 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v14);
  v48 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v24);
  v47 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v24 + 8);
  *(_QWORD*)(v41 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v41 + 224) = v42;
  *(_QWORD*)(v41 + 232) = v43;
  *(_DWORD*)(v41 + 152) = 0;
  v49 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14);
  v50 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 8);
  *(_BYTE*)(v41 + 164) = 1;
  *(_QWORD*)(v41 + 168) = 1092616192;
  *(_DWORD*)(v41 + 176) = 0;
  *(_QWORD*)(v41 + 408) = 0;
  *(_QWORD*)(v41 + 416) = 0;
  *(_QWORD*)(v41 + 384) = 0;
  *(_QWORD*)(v41 + 392) = 0;
  *(_QWORD*)(v41 + 156) = 0x469C40003DCCCCCDLL;
  *(_BYTE*)(v41 + 165) = 1;
  *(_QWORD*)(v41 + 424) = 1023;
  *(_QWORD*)(v41 + 392) = 1023;
  *(_QWORD*)(v41 + 400) = 0;
  *(_QWORD*)(v4 + 288) = v41;
  *(_QWORD*)(v41 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v41 + 144) = 0x4110000041800000LL;
  v51 = *v14;
  v52 = v14[1];
  *(_QWORD*)(v41 + 240) = v45;
  *(_QWORD*)(v41 + 248) = v46;
  *(_QWORD*)(v41 + 208) = v49;
  *(_QWORD*)(v41 + 216) = v50;
  v53 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24);
  v54 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8);
  v56 = *v24;
  v55 = v24[1];
  *(_QWORD*)(v41 + 192) = v51;
  *(_QWORD*)(v41 + 200) = v52;
  *(_QWORD*)(v41 + 272) = v53;
  *(_QWORD*)(v41 + 280) = v54;
  v57 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v24);
  v58 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v24 + 8);
  v59 = *v24;
  *(_QWORD*)(v41 + 256) = v56;
  *(_QWORD*)(v41 + 264) = v57;
  v61 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v24);
  v60 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24);
  *(_QWORD*)(v41 + 320) = v59;
  *(_QWORD*)(v41 + 328) = v55;
  *(_QWORD*)(v41 + 352) = v48;
  *(_QWORD*)(v41 + 360) = v61;
  v63 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v24);
  v62 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v24);
  *(_QWORD*)(v41 + 304) = v60;
  *(_QWORD*)(v41 + 312) = v62;
  v64 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8);
  *(_QWORD*)(v41 + 288) =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 16);
  *(_QWORD*)(v41 + 296) = v47;
  v65 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v24);
  *(_QWORD*)(v41 + 336) = v58;
  *(_QWORD*)(v41 + 344) = v64;
  *(_QWORD*)(v41 + 368) = v63;
  *(_QWORD*)(v41 + 376) = v65;
  v66 = v41;
  v67 = *v44;
  *(_QWORD*)(v66 + 32) = v40;
  *(_QWORD*)(v4 + 280) = v66 + 32;
  v68 = (_QWORD*)fw_memory_HeapManager_Allocate(v67, 144, 16, 0),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v68[4] = 0;
  v69 = v68 + 4;
  v70 = v68;
  v68[1] = 0;
  v68[2] = 0;
  v68[5] = 0;
  v68[6] = 0;
  v68[7] = 0;
  v68[8] = 0;
  v68[9] = 0;
  v68[10] = 0;
  v68[11] = 0;
  v68[12] = 0;
  v68[13] = 0;
  v68[14] = 0;
  *v68 = GameData_2041408;
  v68[15] = 0;
  v68[16] = 0;
  v68[17] = 0;
  game_facility_148b460((__int64)(v68 + 4)),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v71 = (__int64*)*(unsigned __int8*)(v4 + 240);
  *(_QWORD*)(v4 + 296) = v69;
  *(_QWORD*)(v4 + 304) = v70;
  *v69 = game_facility_ClassExaminerCameraController_vtable;
  game_facility_1467bc0(v71),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v72 = *(_QWORD**)GameData_2130fc0[0];
  v73 = fw_memory_HeapManager_Allocate(*v44, 48, 16, 0),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(v73 + 46) = 0;
  v99_.v99 = 49;
  v99_.v100 = 46;
  v99_.v101 = v73;
  *(_QWORD*)(v73 + 16) = 0x83E39E8AE6B881E9LL;
  *(_QWORD*)(v73 + 24) = 0xE3A583E38B83E3A1LL;
  *(_QWORD*)(v73 + 32) = 0xA181E3BD90E8BC83LL;
  *(_QWORD*)(v73 + 38) = 0x8D81E3809DE7A181LL;
  *(_QWORD*)v73 = 0xA9E8BCA0E687B3E8LL;
  *(_QWORD*)(v73 + 8) = 0x5FBBB3E793A8E9A6LL;
  game_facility_19532e0((void*)(&v102_.v102), v72, &v99_.v99,
                        0x1.0000000000000p-1f),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v74 = v102_.v102;
  v75 = v102_.v103;
  v76 = *(_QWORD*)(v4 + 256);
  v102_.v102 = nullptr;
  v102_.v103 = 0;
  *(_QWORD*)(v4 + 248) = v74;
  *(_QWORD*)(v4 + 256) = v75;
  if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v76),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v77 = v102_.v103;
  if (v102_.v103 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v102_.v103 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v77),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v78 = (__int64*)GameData_212dce8;
  if ((v99_.v99 & 1) != 0 && v99_.v101 != 0) {
    v79 = 128;
    if (*(_QWORD*)(*v44 + 200) == 0) {
      v79 = 56;
    }
    nn_mem_StandardAllocator_Free(*v44 + v79, v99_.v101),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v80 = *v78;
  v81 = *(_QWORD*)(v4 + 264);
  v82 = *(_QWORD*)(v4 + 272);
  v99_.v99 = v81;
  v99_.v100 = v82;
  if (v82 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v81 != 0) {
    v83 = (_QWORD*)game_HashString((__int64)&GameData_1adc19f),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v102_.v102 = &v105;
    v105 = v83;
    v106 = &v99_.v99;
    v84 = ({
      unsigned __int128 r_ = SceneManager_13909c0_pair(
          v80 + 272, (unsigned __int64*)&v105,
          (__int64)std___1_piecewise_construct_ptr, &v102_.v102, &v106);
      v85 = COERCE_AS(__typeof__(v85), (unsigned long long)(r_ >> 64));
      v93 = COERCE_AS(__typeof__(v93), (unsigned long long)(r_ >> 64));
      (_QWORD*)(unsigned long long)r_;
    });
    v82 = v99_.v100;
    if ((v85 & 1) == 0) {
      v86 = v99_.v99;
      if (v99_.v100 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v99_.v100 + 16), 1u,
                                  memory_order_relaxed);
      }
      v87 = v84[4];
      v84[3] = v86;
      v84[4] = v82;
      if (v87 != 0) {
        std___1___shared_weak_count___release_weak(v87),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v93 = COERCE_AS(__typeof__(v93),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v82 = v99_.v100;
      }
    }
  }
  if (v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v82),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v88 = *v78;
  v89 = *(_QWORD**)(v4 + 280);
  v90 = *(_QWORD*)(v4 + 288);
  v102_.v102 = v89;
  v102_.v103 = v90;
  if (v90 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v89 != nullptr) {
    v91 = game_HashString((__int64)&GameData_1aa9e54),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v106 = &v104;
    v104 = v91;
    v105 = &v102_.v102;
    v92 = ({
      unsigned __int128 r_ = SceneManager_13909c0_pair(
          v88 + 272, (unsigned __int64*)&v104,
          (__int64)std___1_piecewise_construct_ptr, &v106, &v105);
      v85 = COERCE_AS(__typeof__(v85), (unsigned long long)(r_ >> 64));
      v93 = COERCE_AS(__typeof__(v93), (unsigned long long)(r_ >> 64));
      (_QWORD*)(unsigned long long)r_;
    });
    v90 = v102_.v103;
    if ((v93 & 1) == 0) {
      v94 = v102_.v102;
      if (v102_.v103 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v102_.v103 + 16),
                                  1u, memory_order_relaxed);
      }
      v95 = v92[4];
      v92[3] = v94;
      v92[4] = v90;
      if (v95 != 0) {
        std___1___shared_weak_count___release_weak(v95),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v93 = COERCE_AS(__typeof__(v93),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v90 = v102_.v103;
      }
    }
  }
  if (v90 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v90),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (*(_BYTE*)(v4 + 240) == 1) {
    v96 = game_9a28e0(1),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    game_VariableManager_SetFlag((__int64)v96, 1),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return ProcInst_657850(v4, (__int64)&GameData_22478a8,
                         (__int64)"ProcClassExaminerScene", 1, a1);
}

void game_facility_148b700(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  *(_QWORD*)a1 = &game_facility_SceneCameraCharaViewerController_vtable;
  v2 = *(__int64**)(a1 + 16);
  v3 = *(__int64**)(a1 + 24);
  if (v3 == v2) {
    v4 = (_QWORD*)(a1 + 48);
    v3 = *(__int64**)(a1 + 16);
  }
  else {
    v4 = (_QWORD*)(a1 + 48);
    v5 = *(_QWORD*)(a1 + 40);
    v6 = &v2[v5 >> 4];
    v7 = (_QWORD*)(*v6 + 368 * (v5 & 0xF));
    v8 = v2[(*(_QWORD*)(a1 + 48) + v5) >> 4] +
         368LL * ((*(_DWORD*)(a1 + 48) + (_DWORD)v5) & 0xF);
    if (v7 != (_QWORD*)v8) {
      v9 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v10 = v7[30];
        if (v10 != 0) {
          v11 = *v9;
          v7[31] = v10;
          if (*(_QWORD*)(v11 + 200) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free(v11 + v12, v10);
        }
        v13 = v7[29];
        if (v13 != 0) {
          std___1___shared_weak_count___release_weak(v13);
        }
        v14 = v7[15];
        if (v14 != 0) {
          std___1___shared_weak_count___release_weak(v14);
        }
        v7 += 46;
        if ((_UNKNOWN*)((char*)v7 - *v6) == ((_UNKNOWN*)0x1700LL)) {
          v15 = (_QWORD*)v6[1];
          ++v6;
          v7 = v15;
        }
      } while (v7 != (_QWORD*)v8);
      v2 = *(__int64**)(a1 + 16);
      v3 = *(__int64**)(a1 + 24);
    }
  }
  *v4 = 0;
  v16 = v3 - v2;
  if (v16 >= 3) {
    v17 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v18, *v2);
        v2 = *(__int64**)(a1 + 16);
        v3 = *(__int64**)(a1 + 24);
      }
      *(_QWORD*)(a1 + 16) = ++v2;
      v16 = v3 - v2;
    } while (v16 > 2);
  }
  if (v16 == 1) {
    v19 = 8;
  }
  else {
    if (v16 != 2) {
      goto LABEL_31;
    }
    v19 = 16;
  }
  *(_QWORD*)(a1 + 40) = v19;
LABEL_31:
  if (*(_BYTE*)(a1 + 100) == 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_220f848 + 24LL))(
        GameData_220f848);
    if (GameData_220f848 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f848 + 8LL))(
          GameData_220f848);
    }
    GameData_220f848 = 0;
  }
  v20 = *(_QWORD*)(a1 + 64);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = *(__int64**)(a1 + 16);
  v22 = *(__int64**)(a1 + 24);
  if (v22 == v21) {
    v23 = (_QWORD*)(a1 + 48);
    v22 = *(__int64**)(a1 + 16);
  }
  else {
    v23 = (_QWORD*)(a1 + 48);
    v24 = *(_QWORD*)(a1 + 40);
    v25 = &v21[v24 >> 4];
    v26 = (_QWORD*)(*v25 + 368 * (v24 & 0xF));
    v27 = v21[(*(_QWORD*)(a1 + 48) + v24) >> 4] +
          368LL * ((*(_DWORD*)(a1 + 48) + (_DWORD)v24) & 0xF);
    if (v26 != (_QWORD*)v27) {
      v28 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v29 = v26[30];
        if (v29 != 0) {
          v30 = *v28;
          v26[31] = v29;
          if (*(_QWORD*)(v30 + 200) != 0) {
            v31 = 128;
          }
          else {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(v30 + v31, v29);
        }
        v32 = v26[29];
        if (v32 != 0) {
          std___1___shared_weak_count___release_weak(v32);
        }
        v33 = v26[15];
        if (v33 != 0) {
          std___1___shared_weak_count___release_weak(v33);
        }
        v26 += 46;
        if ((_UNKNOWN*)((char*)v26 - *v25) == ((_UNKNOWN*)0x1700LL)) {
          v34 = (_QWORD*)v25[1];
          ++v25;
          v26 = v34;
        }
      } while (v26 != (_QWORD*)v27);
      v21 = *(__int64**)(a1 + 16);
      v22 = *(__int64**)(a1 + 24);
    }
  }
  *v23 = 0;
  v35 = v22 - v21;
  if (v35 >= 3) {
    v36 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) != 0) {
          v37 = 128;
        }
        else {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v36 + v37, *v21);
        v21 = *(__int64**)(a1 + 16);
        v22 = *(__int64**)(a1 + 24);
      }
      *(_QWORD*)(a1 + 16) = ++v21;
      v35 = v22 - v21;
    } while (v35 > 2);
  }
  if (v35 == 1) {
    v38 = 8;
  }
  else {
    if (v35 != 2) {
      goto LABEL_68;
    }
    v38 = 16;
  }
  *(_QWORD*)(a1 + 40) = v38;
LABEL_68:
  if (v21 != v22) {
    v39 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
          v40 = 128;
        }
        else {
          v40 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v40, *v21);
      }
      ++v21;
    } while (v21 != v22);
    v41 = *(_QWORD*)(a1 + 24);
    v42 = *(_QWORD*)(a1 + 16) - v41;
    if (v42 != 0) {
      *(_QWORD*)(a1 + 24) = v41 + ((v42 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v43 = *(_QWORD*)(a1 + 8);
  if (v43 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                  v43);
  }
}

void game_facility_148cc30(__int64 a1, _QWORD* a2, const char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    char* v13;
  } v12_;
  struct {
    __int128 v14;
    float v15;
    char gap52_[4];
    char v16;
    char gap57_[15];
    __int64 v17;
  } v14_;

  if (a2 == nullptr) {
    return;
  }
  v6 = strlen(a3);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v12_.v12[1] = v7;
    v12_.v13 = v8;
    v12_.v12[0] = v9 | 1;
    goto LABEL_10;
  }
  LOBYTE(v12_.v12[0]) = 2 * v6;
  v8 = (char*)v12_.v12 + 1;
  if (v6 != 0) {
  LABEL_10:
    memcpy((__int64)v8, (__int64)a3, v7);
  }
  v8[v7] = 0;
  game_facility_140d160((void*)(&v14_.v14), (__int64)v12_.v12);
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  (__int64)v12_.v13);
  }
  game_facility_148d310(
      a1, a2,
      COERCE_UNSIGNED_INT(v14_.v15 +
                          *(float*)(*(_QWORD*)GameData_212dce8 + 128LL)) |
          0x100000000LL);
  if ((v14_.v16 & 1) != 0 && v14_.v17 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v14_.v17);
  }
}

__attribute__((swiftcall)) void

game_facility_148da00(PSEUDO_X8 x8_, char* result, char* a2, char* a3, char* a4)
{
  char** a5 = (char**)PSEUDO_X8_VALUE(x8_);
  char* v5;
  __int64 v6;
  char* v7;
  signed __int64 v8;
  char* v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  char* v17;
  char* v18;
  __int128 v19;
  char* v20;
  __int128 v21;
  char* v22;
  __int128 v23;
  char* v24;
  int v25;
  char* v26;
  __int128 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  char* v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  char* v50;
  unsigned int* v51;
  int v52;
  __int128 v53;
  char* v54;
  char* v55;
  __int64 v56;
  unsigned int* v57;
  int v58;
  __int128 v59;
  __int128 v60;
  char* v61;
  char* v64;
  char* v65;

  v5 = a4;
  if (result == a2) {
    *a5 = result;
    a5[1] = a3;
    a5[2] = a4;
  }
  else {
    v6 = *(_QWORD*)a3;
    v65 = a3;
    v7 = a2;
    v64 = result;
    while (1) {
      v8 = 0xD37A6F4DE9BD37A7LL * ((__int64)&v5[-v6] >> 4);
      if ((__int64)(0xD37A6F4DE9BD37A7LL * ((v7 - result) >> 4)) < v8) {
        v8 = 0xD37A6F4DE9BD37A7LL * ((v7 - result) >> 4);
      }
      v9 = &v7[-368 * v8];
      if (v8 != 0) {
        do {
          v17 = v7 - 368;
          v10 = v5 - 368;
          *((_QWORD*)v10 + 1) = *((_QWORD*)v7 - 45);
          *(_QWORD*)v10 = *((_QWORD*)v7 - 46);
          v18 = v5 - 352;
          *(_DWORD*)v18 = *((_DWORD*)v7 - 88);
          *((_DWORD*)v5 - 87) = *((_DWORD*)v7 - 87);
          v19 = *((_OWORD*)v5 - 22);
          *((_QWORD*)&v19 + 1) = *((unsigned int*)v7 - 86);
          *(_OWORD*)v18 = v19;
          v20 = v5 - 336;
          *(_DWORD*)v20 = *((_DWORD*)v7 - 84);
          *((_DWORD*)v5 - 83) = *((_DWORD*)v7 - 83);
          v21 = *((_OWORD*)v5 - 21);
          *((_QWORD*)&v21 + 1) = *((unsigned int*)v7 - 82);
          *(_OWORD*)v20 = v21;
          v22 = v5 - 320;
          *(_DWORD*)v22 = *((_DWORD*)v7 - 80);
          *((_DWORD*)v5 - 79) = *((_DWORD*)v7 - 79);
          v23 = *((_OWORD*)v5 - 20);
          *((_QWORD*)&v23 + 1) = *((unsigned int*)v7 - 78);
          *(_OWORD*)v22 = v23;
          v24 = v5 - 304;
          v25 = *((_DWORD*)v7 - 74);
          *(_QWORD*)v24 = *((_QWORD*)v7 - 38);
          *((_DWORD*)v24 + 2) = v25;
          v26 = v5 - 288;
          *(_DWORD*)v26 = *((_DWORD*)v7 - 72);
          *((_DWORD*)v5 - 71) = *((_DWORD*)v7 - 71);
          v27 = *((_OWORD*)v5 - 18);
          *((_QWORD*)&v27 + 1) = *((unsigned int*)v7 - 70);
          *(_OWORD*)v26 = v27;
          *((_DWORD*)v5 - 68) = *((_DWORD*)v7 - 68);
          *((_DWORD*)v5 - 67) = *((_DWORD*)v7 - 67);
          *((_DWORD*)v5 - 66) = *((_DWORD*)v7 - 66);
          *((_DWORD*)v5 - 65) = *((_DWORD*)v7 - 65);
          v29 = *((_QWORD*)v7 - 32);
          v28 = *((_QWORD*)v7 - 31);
          if (v28 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                      memory_order_relaxed);
          }
          v30 = *((_QWORD*)v5 - 31);
          *((_QWORD*)v5 - 32) = v29;
          *((_QWORD*)v5 - 31) = v28;
          if (v30 != 0) {
            std___1___shared_weak_count___release_weak(v30);
          }
          v31 = *((_QWORD*)v7 - 30);
          v32 = *((_QWORD*)v7 - 29);
          *((_DWORD*)v5 - 56) = *((_DWORD*)v7 - 56);
          *((_QWORD*)v5 - 30) = v31;
          *((_QWORD*)v5 - 29) = v32;
          *((_DWORD*)v5 - 52) = *((_DWORD*)v7 - 52);
          *((_DWORD*)v5 - 51) = *((_DWORD*)v7 - 51);
          v33 = *((_OWORD*)v5 - 13);
          *((_QWORD*)&v33 + 1) = *((unsigned int*)v7 - 50);
          *((_OWORD*)v5 - 13) = v33;
          LODWORD(v31) = *((_DWORD*)v7 - 38);
          *((_QWORD*)v5 - 21) = *((_QWORD*)v7 - 21);
          *((_QWORD*)v5 - 23) = *((_QWORD*)v7 - 23);
          *((_QWORD*)v5 - 24) = *((_QWORD*)v7 - 24);
          v34 = *((_QWORD*)v7 - 22);
          v35 = *((_QWORD*)v7 - 20);
          *((_DWORD*)v5 - 38) = v31;
          *((_QWORD*)v5 - 20) = v35;
          *((_QWORD*)v5 - 22) = v34;
          v37 = *((_QWORD*)v7 - 18);
          v36 = *((_QWORD*)v7 - 17);
          if (v36 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                      memory_order_relaxed);
          }
          v38 = *((_QWORD*)v5 - 17);
          *((_QWORD*)v5 - 18) = v37;
          *((_QWORD*)v5 - 17) = v36;
          if (v38 != 0) {
            std___1___shared_weak_count___release_weak(v38);
          }
          if (v5 != v7) {
            v39 = *((char**)v5 - 16);
            v40 = *((char**)v7 - 16);
            v41 = *((char**)v7 - 15);
            v42 = v41 - v40;
            v43 = *((_QWORD*)v5 - 14);
            if (v41 - v40 <= (unsigned __int64)(v43 - (_QWORD)v39)) {
              v49 = *((char**)v5 - 15);
              if (v42 <= (unsigned __int64)(v49 - v39)) {
                while (v40 != v41) {
                  v57 = (unsigned int*)(v40 + 8);
                  *(_DWORD*)v39 = *(_DWORD*)v40;
                  v58 = *((_DWORD*)v40 + 1);
                  v40 += 16;
                  *((_DWORD*)v39 + 1) = v58;
                  v59 = *(_OWORD*)v39;
                  *((_QWORD*)&v59 + 1) = *v57;
                  *(_OWORD*)v39 = v59;
                  v39 += 16;
                }
                *((_QWORD*)v5 - 15) = v39;
              }
              else {
                v50 = &v40[v49 - v39];
                if (v49 != v39) {
                  do {
                    v51 = (unsigned int*)(v40 + 8);
                    *(_DWORD*)v39 = *(_DWORD*)v40;
                    v52 = *((_DWORD*)v40 + 1);
                    v40 += 16;
                    *((_DWORD*)v39 + 1) = v52;
                    v53 = *(_OWORD*)v39;
                    *((_QWORD*)&v53 + 1) = *v51;
                    *(_OWORD*)v39 = v53;
                    v39 += 16;
                  } while (v40 != v50);
                  v49 = *((char**)v5 - 15);
                }
                v54 = v49;
                if (v50 != v41) {
                  v54 = v49;
                  v55 = v49;
                  do {
                    v54 += 16;
                    *((_QWORD*)v55 + 1) = *((_QWORD*)v50 + 1);
                    v56 = *(_QWORD*)v50;
                    v50 += 16;
                    *(_QWORD*)v55 = v56;
                    v55 += 16;
                  } while (v50 != v41);
                }
                *((_QWORD*)v5 - 15) = v54;
              }
            }
            else {
              if (v39 != nullptr) {
                *((_QWORD*)v5 - 15) = v39;
                v44 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v44 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v39);
                v43 = 0;
                *((_QWORD*)v5 - 15) = 0;
                *((_QWORD*)v5 - 14) = 0;
                *((_QWORD*)v5 - 16) = 0;
              }
              v45 = v42 >> 4;
              if ((unsigned __int64)(v42 >> 4) >> 60 != 0) {
                goto LABEL_56;
              }
              if (v43 >> 3 > v45) {
                v45 = v43 >> 3;
              }
              v46 = (unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF0LL
                        ? 0xFFFFFFFFFFFFFFFLL
                        : v45;
              if (v46 >> 60 != 0) {
              LABEL_56:
                GameRoutine_cdcc10();
              }
              v47 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v46, 16, 0);
              v48 = v47;
              *((_QWORD*)v5 - 16) = v47;
              *((_QWORD*)v5 - 15) = v47;
              *((_QWORD*)v5 - 14) = v47 + 16 * v46;
              if (v40 != v41) {
                memcpy(v47, (__int64)v40, v42 & 0xFFFFFFFFFFFFFFF0LL);
                v48 += v42 & 0xFFFFFFFFFFFFFFF0LL;
              }
              *((_QWORD*)v5 - 15) = v48;
            }
          }
          if (*(v5 - 80) == *(v7 - 80)) {
            if (*(v5 - 80) != 0) {
              *((_DWORD*)v5 - 24) = *((_DWORD*)v7 - 24);
              *((_DWORD*)v5 - 23) = *((_DWORD*)v7 - 23);
              v60 = *((_OWORD*)v5 - 6);
              *((_QWORD*)&v60 + 1) = *((unsigned int*)v7 - 22);
              *((_OWORD*)v5 - 6) = v60;
            }
          }
          else if (*(v5 - 80) != 0) {
            *(v5 - 80) = 0;
          }
          else {
            v11 = v5 - 96;
            *((_QWORD*)v11 + 1) = *((_QWORD*)v7 - 11);
            v12 = *((_QWORD*)v7 - 12);
            *(v5 - 80) = 1;
            *(_QWORD*)v11 = v12;
          }
          *((_QWORD*)v5 - 7) = *((_QWORD*)v7 - 7);
          *((_QWORD*)v5 - 8) = *((_QWORD*)v7 - 8);
          v13 = *((_QWORD*)v7 - 5);
          v14 = *((_QWORD*)v7 - 4);
          v15 = *((_QWORD*)v7 - 3);
          v16 = *((_DWORD*)v7 - 4);
          v7 -= 368;
          *((_DWORD*)v5 - 4) = v16;
          *((_QWORD*)v5 - 4) = v14;
          *((_QWORD*)v5 - 3) = v15;
          *((_QWORD*)v5 - 5) = v13;
          v5 -= 368;
        } while (v9 != v17);
      }
      else {
        v10 = v5;
      }
      result = v64;
      if (v64 == v9) {
        break;
      }
      v7 = v9;
      v6 = *--v65;
      v5 = (char*)(v6 + 5888);
    }
    v61 = (char*)v65;
    if (v10 == (char*)(*v65 + 5888LL)) {
      v61 = (char*)(v65 + 1);
      v10 = (char*)v65[1];
    }
    *a5 = a2;
    a5[1] = v61;
    a5[2] = v10;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_facility_148df80(PSEUDO_X8 x8_,
                                                      __int64 result,
                                                      __int64 a2, _QWORD* a3,
                                                      __int64 a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  signed __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  int v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  char* v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  unsigned int* v44;
  int v45;
  __int128 v46;
  char* v47;
  char* v48;
  __int64 v49;
  unsigned int* v50;
  int v51;
  __int128 v52;
  __int128 v53;
  _QWORD* v54;
  __int64* v55;
  __int64 v56;
  _QWORD* v57;

  v6 = result;
  if (result == a2) {
    *a5 = result;
    a5[1] = (__int64)a3;
    goto LABEL_56;
  }
  v55 = a5;
  v7 = *a3;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v56 = a2;
  while (1) {
    v10 = 0xD37A6F4DE9BD37A7LL * ((v7 - a4 + 5888) >> 4);
    if ((__int64)(0xD37A6F4DE9BD37A7LL * ((a2 - v6) >> 4)) < v10) {
      v10 = 0xD37A6F4DE9BD37A7LL * ((a2 - v6) >> 4);
    }
    if (v10 != 0) {
      break;
    }
  LABEL_3:
    v9 = a3[1];
    ++a3;
    v7 = v9;
    a4 = v9;
  }
  v57 = a3;
  v11 = v6 + 368 * v10;
  do {
    *(_QWORD*)(a4 + 8) = *(_QWORD*)(v6 + 8);
    *(_QWORD*)a4 = *(_QWORD*)v6;
    *(_DWORD*)(a4 + 16) = *(_DWORD*)(v6 + 16);
    *(_DWORD*)(a4 + 20) = *(_DWORD*)(v6 + 20);
    v17 = *(_OWORD*)(a4 + 16);
    *((_QWORD*)&v17 + 1) = *(unsigned int*)(v6 + 24);
    *(_OWORD*)(a4 + 16) = v17;
    *(_DWORD*)(a4 + 32) = *(_DWORD*)(v6 + 32);
    *(_DWORD*)(a4 + 36) = *(_DWORD*)(v6 + 36);
    v18 = *(_OWORD*)(a4 + 32);
    *((_QWORD*)&v18 + 1) = *(unsigned int*)(v6 + 40);
    *(_OWORD*)(a4 + 32) = v18;
    *(_DWORD*)(a4 + 48) = *(_DWORD*)(v6 + 48);
    *(_DWORD*)(a4 + 52) = *(_DWORD*)(v6 + 52);
    v19 = *(_OWORD*)(a4 + 48);
    *((_QWORD*)&v19 + 1) = *(unsigned int*)(v6 + 56);
    *(_OWORD*)(a4 + 48) = v19;
    v20 = *(_DWORD*)(v6 + 72);
    *(_QWORD*)(a4 + 64) = *(_QWORD*)(v6 + 64);
    *(_DWORD*)(a4 + 72) = v20;
    *(_DWORD*)(a4 + 80) = *(_DWORD*)(v6 + 80);
    *(_DWORD*)(a4 + 84) = *(_DWORD*)(v6 + 84);
    v21 = *(_OWORD*)(a4 + 80);
    *((_QWORD*)&v21 + 1) = *(unsigned int*)(v6 + 88);
    *(_OWORD*)(a4 + 80) = v21;
    *(_DWORD*)(a4 + 96) = *(_DWORD*)(v6 + 96);
    *(_DWORD*)(a4 + 100) = *(_DWORD*)(v6 + 100);
    *(_DWORD*)(a4 + 104) = *(_DWORD*)(v6 + 104);
    *(_DWORD*)(a4 + 108) = *(_DWORD*)(v6 + 108);
    v23 = *(_QWORD*)(v6 + 112);
    v22 = *(_QWORD*)(v6 + 120);
    if (v22 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                memory_order_relaxed);
    }
    v24 = *(_QWORD*)(a4 + 120);
    *(_QWORD*)(a4 + 112) = v23;
    *(_QWORD*)(a4 + 120) = v22;
    if (v24 != 0) {
      std___1___shared_weak_count___release_weak(v24);
    }
    v25 = *(_QWORD*)(v6 + 128);
    v26 = *(_QWORD*)(v6 + 136);
    *(_DWORD*)(a4 + 144) = *(_DWORD*)(v6 + 144);
    *(_QWORD*)(a4 + 128) = v25;
    *(_QWORD*)(a4 + 136) = v26;
    *(_DWORD*)(a4 + 160) = *(_DWORD*)(v6 + 160);
    *(_DWORD*)(a4 + 164) = *(_DWORD*)(v6 + 164);
    v27 = *(_OWORD*)(a4 + 160);
    *((_QWORD*)&v27 + 1) = *(unsigned int*)(v6 + 168);
    *(_OWORD*)(a4 + 160) = v27;
    LODWORD(v25) = *(_DWORD*)(v6 + 216);
    *(_QWORD*)(a4 + 200) = *(_QWORD*)(v6 + 200);
    *(_QWORD*)(a4 + 184) = *(_QWORD*)(v6 + 184);
    *(_QWORD*)(a4 + 176) = *(_QWORD*)(v6 + 176);
    v28 = *(_QWORD*)(v6 + 192);
    v29 = *(_QWORD*)(v6 + 208);
    *(_DWORD*)(a4 + 216) = v25;
    *(_QWORD*)(a4 + 208) = v29;
    *(_QWORD*)(a4 + 192) = v28;
    v31 = *(_QWORD*)(v6 + 224);
    v30 = *(_QWORD*)(v6 + 232);
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                memory_order_relaxed);
    }
    result = *(_QWORD*)(a4 + 232);
    *(_QWORD*)(a4 + 224) = v31;
    *(_QWORD*)(a4 + 232) = v30;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    if (a4 != v6) {
      v32 = *(char**)(a4 + 240);
      v33 = *(char**)(v6 + 240);
      v34 = *(char**)(v6 + 248);
      v35 = v34 - v33;
      v36 = *(_QWORD*)(a4 + 256);
      if (v34 - v33 <= (unsigned __int64)(v36 - (_QWORD)v32)) {
        v42 = *(char**)(a4 + 248);
        if (v35 <= (unsigned __int64)(v42 - v32)) {
          while (v33 != v34) {
            v50 = (unsigned int*)(v33 + 8);
            *(_DWORD*)v32 = *(_DWORD*)v33;
            v51 = *((_DWORD*)v33 + 1);
            v33 += 16;
            *((_DWORD*)v32 + 1) = v51;
            v52 = *(_OWORD*)v32;
            *((_QWORD*)&v52 + 1) = *v50;
            *(_OWORD*)v32 = v52;
            v32 += 16;
          }
          *(_QWORD*)(a4 + 248) = v32;
        }
        else {
          v43 = &v33[v42 - v32];
          if (v42 != v32) {
            do {
              v44 = (unsigned int*)(v33 + 8);
              *(_DWORD*)v32 = *(_DWORD*)v33;
              v45 = *((_DWORD*)v33 + 1);
              v33 += 16;
              *((_DWORD*)v32 + 1) = v45;
              v46 = *(_OWORD*)v32;
              *((_QWORD*)&v46 + 1) = *v44;
              *(_OWORD*)v32 = v46;
              v32 += 16;
            } while (v33 != v43);
            v42 = *(char**)(a4 + 248);
          }
          v47 = v42;
          if (v43 != v34) {
            v47 = v42;
            v48 = v42;
            do {
              v47 += 16;
              *((_QWORD*)v48 + 1) = *((_QWORD*)v43 + 1);
              v49 = *(_QWORD*)v43;
              v43 += 16;
              *(_QWORD*)v48 = v49;
              v48 += 16;
            } while (v43 != v34);
          }
          *(_QWORD*)(a4 + 248) = v47;
        }
      }
      else {
        if (v32 != nullptr) {
          v37 = *v8;
          *(_QWORD*)(a4 + 248) = v32;
          v38 = 128;
          if (*(_QWORD*)(v37 + 200) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(v37 + v38, (__int64)v32);
          v36 = 0;
          *(_QWORD*)(a4 + 248) = 0;
          *(_QWORD*)(a4 + 256) = 0;
          *(_QWORD*)(a4 + 240) = 0;
        }
        v39 = v35 >> 4;
        if ((unsigned __int64)(v35 >> 4) >> 60 != 0) {
          goto LABEL_57;
        }
        if (v36 >> 3 > v39) {
          v39 = v36 >> 3;
        }
        v40 = (unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF0LL
                  ? 0xFFFFFFFFFFFFFFFLL
                  : v39;
        if (v40 >> 60 != 0) {
        LABEL_57:
          GameRoutine_cdcc10();
        }
        result = fw_memory_HeapManager_Allocate(*v8, 16 * v40, 16, 0);
        v41 = result;
        *(_QWORD*)(a4 + 240) = result;
        *(_QWORD*)(a4 + 248) = result;
        *(_QWORD*)(a4 + 256) = result + 16 * v40;
        if (v33 != v34) {
          result = memcpy(result, (__int64)v33, v35 & 0xFFFFFFFFFFFFFFF0LL);
          v41 += v35 & 0xFFFFFFFFFFFFFFF0LL;
        }
        *(_QWORD*)(a4 + 248) = v41;
      }
    }
    if (*(unsigned __int8*)(a4 + 288) == *(unsigned __int8*)(v6 + 288)) {
      if (*(_BYTE*)(a4 + 288) != 0) {
        *(_DWORD*)(a4 + 272) = *(_DWORD*)(v6 + 272);
        *(_DWORD*)(a4 + 276) = *(_DWORD*)(v6 + 276);
        v53 = *(_OWORD*)(a4 + 272);
        *((_QWORD*)&v53 + 1) = *(unsigned int*)(v6 + 280);
        *(_OWORD*)(a4 + 272) = v53;
      }
    }
    else if (*(_BYTE*)(a4 + 288) != 0) {
      *(_BYTE*)(a4 + 288) = 0;
    }
    else {
      *(_QWORD*)(a4 + 280) = *(_QWORD*)(v6 + 280);
      v12 = *(_QWORD*)(v6 + 272);
      *(_BYTE*)(a4 + 288) = 1;
      *(_QWORD*)(a4 + 272) = v12;
    }
    *(_QWORD*)(a4 + 312) = *(_QWORD*)(v6 + 312);
    *(_QWORD*)(a4 + 304) = *(_QWORD*)(v6 + 304);
    v13 = *(_QWORD*)(v6 + 328);
    v14 = *(_QWORD*)(v6 + 336);
    v15 = *(_QWORD*)(v6 + 344);
    v16 = *(_DWORD*)(v6 + 352);
    v6 += 368;
    *(_DWORD*)(a4 + 352) = v16;
    *(_QWORD*)(a4 + 336) = v14;
    *(_QWORD*)(a4 + 344) = v15;
    *(_QWORD*)(a4 + 328) = v13;
    a4 += 368;
  } while (v6 != v11);
  a2 = v56;
  if (v56 != v11) {
    a3 = v57;
    v6 = v11;
    goto LABEL_3;
  }
  v54 = v57;
  if (a4 == *v57 + 5888LL) {
    v54 = v57 + 1;
    a4 = v57[1];
  }
  a5 = v55;
  *v55 = v11;
  v55[1] = (__int64)v54;
LABEL_56:
  a5[2] = a4;
  {
    result;
    return;
  }
}

void game_facility_1498790(unsigned __int8** a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    unsigned __int8 v6[16];
    __int64 v7;
  } v6_;

  if (a2 == 0 || GameData_21f4000 == 0) {
    return;
  }
  game_facility_140a6e0((void*)((__int64)v6_.v6), a1);
  v3 = *(_QWORD*)(a2 + 112);
  v4 = *(_QWORD*)(a2 + 120);
  if (v4 == 0) {
    GameHr_14127e0(v3, v6_.v6);
    if ((v6_.v6[0] & 1) == 0) {
      return;
    }
    goto LABEL_9;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  GameHr_14127e0(v3, v6_.v6);
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  if ((v6_.v6[0] & 1) != 0) {
  LABEL_9:
    if (v6_.v7 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v6_.v7);
    }
  }
}

_QWORD* game_facility_1498870(_QWORD* a1, const char* a2, __int64 a3)
{
  _QWORD* result;
  char v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    char gap16_[8];
    char v15;
  } v14_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_facility_1498970((void*)(&v14_.v14), (__int64)a1, a2, a3),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = ({
    unsigned __int128 r_ = GameRoutine_1498aa0_pair(a1, v14_.v14);
    v5 = COERCE_AS(__typeof__(v5), (unsigned long long)(r_ >> 64));
    (_QWORD*)(unsigned long long)r_;
  });
  if ((v5 & 1) != 0) {
    return result;
  }
  v6 = v14_.v14;
  v14_.v14 = 0;
  if (v6 == 0) {
    return result;
  }
  v7 = result;
  v8 = fw_memory_g_heap_manager_ptr;
  if (v14_.v15 == 1) {
    v9 = *(_QWORD**)(v6 + 80);
    if (v9 == (_QWORD*)(v6 + 48)) {
      v10 = 32;
    }
    else {
      if (v9 == nullptr) {
      LABEL_9:
        if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
          v11 = *(_QWORD*)(v6 + 32);
          if (v11 != 0) {
            v12 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        goto LABEL_14;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_9;
  }
LABEL_14:
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v7;
}

void game_facility_14992c0(unsigned __int8** a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    unsigned __int8 v9[16];
    __int64 v10;
  } v9_;

  v3 = a2[16];
  v4 = a2[17];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    GameHr_1405080(v3);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    GameHr_1405080(v3);
  }
  game_facility_140a6e0((void*)((__int64)v9_.v9), a1);
  v6 = a2[14];
  v7 = a2[15];
  if (v7 == 0) {
    GameHr_14127e0(v6, v9_.v9);
    if ((v9_.v9[0] & 1) == 0) {
      return;
    }
    goto LABEL_11;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                            memory_order_relaxed);
  GameHr_14127e0(v6, v9_.v9);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  if ((v9_.v9[0] & 1) != 0) {
  LABEL_11:
    if (v9_.v10 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                    v9_.v10);
    }
  }
}

_QWORD* game_facility_14994e0(_QWORD* a1, const char** a2, __int64 a3)
{
  _QWORD* result;
  char v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    char gap16_[8];
    char v15;
  } v14_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  game_facility_14995e0((void*)(&v14_.v14), (__int64)a1, a2, a3),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = ({
    unsigned __int128 r_ = GameRoutine_1498aa0_pair(a1, v14_.v14);
    v5 = COERCE_AS(__typeof__(v5), (unsigned long long)(r_ >> 64));
    (_QWORD*)(unsigned long long)r_;
  });
  if ((v5 & 1) != 0) {
    return result;
  }
  v6 = v14_.v14;
  v14_.v14 = 0;
  if (v6 == 0) {
    return result;
  }
  v7 = result;
  v8 = fw_memory_g_heap_manager_ptr;
  if (v14_.v15 == 1) {
    v9 = *(_QWORD**)(v6 + 80);
    if (v9 == (_QWORD*)(v6 + 48)) {
      v10 = 32;
    }
    else {
      if (v9 == nullptr) {
      LABEL_9:
        if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
          v11 = *(_QWORD*)(v6 + 32);
          if (v11 != 0) {
            v12 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        goto LABEL_14;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_9;
  }
LABEL_14:
  v13 = 128;
  if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v13, v6),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v7;
}

__int64 game_facility_16d7050(__int64 a1)
{
  __int64 v2;
  bool v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[6];
  struct {
    __int64* v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070((void*)(&v8_.v8), (__int64*)(a1 + 848), "L_UnitInfo");
  v2 = *(_QWORD*)(a1 + 1064);
  v7[4] = 0;
  v3 = game_159e890(v2, 0, (__int64)v7);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    v5 = std___1___shared_weak_count_lock(v8_.v9);
    if (v5 != 0) {
      v6 = v5;
      if (v8_.v8 != nullptr) {
        LayoutAccessor_15740c0(v8_.v8, v2, 0, nullptr, v3);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    result = v8_.v9;
    if (v8_.v9 != 0) {
      return std___1___shared_weak_count___release_weak(v8_.v9);
    }
  }
  return result;
}

__int64 game_facility_186ad20(_QWORD* a1, _WORD* a2)
{
  _QWORD handle[2];
  __int64 v3;
  __int64 v5;
  __int64 v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int16* v13;
  __int64* v14;
  __int64 v15;
  _WORD* v16;
  int v17;
  bool v18;
  int v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  unsigned __int16* v23;
  unsigned __int16* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  _WORD* v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  unsigned __int16* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  signed __int64 v51;
  const char* v52;
  _QWORD v53[25];

  v3 = *(_QWORD*)(*a1 + 336LL);
  if (v3 == 0) {
    return 1;
  }
  v5 = __dynamic_cast(v3, GameData_212e008[0], &GameData_20f20a0, 0);
  if (v5 == 0) {
    return 1;
  }
  v6 = v5;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 464LL))(v5) & 1) == 0) {
    v13 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 560LL))(v6);
    v14 = GameData_212c878[0];
    v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v13);
    if ((((0x10000000000LL << *(_BYTE*)(v15 + 72)) |
          (1LL << *(_BYTE*)(v15 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0 ||
        (unsigned int)GameRoutine_8a1dc0(*(__int64***)(v6 + 120)) == 0 ||
        ShopMenuItem_Buy_1868b60(v6)) {
      return 3;
    }
    v16 = *(_WORD**)(v6 + 104);
    if (v16 != nullptr) {
      if (v16[414] != 0) {
        v17 = (v16[418] != 0) + 1;
      }
      else {
        v17 = v16[418] != 0;
      }
      if (v16[422] != 0) {
        ++v17;
      }
      v18 = v16[426] == 0;
      v19 = (unsigned __int16)v16[430];
      v20 = (unsigned __int16)v16[434];
      if (!v18) {
        ++v17;
      }
      if (v19 != 0) {
        ++v17;
      }
      v21 = v20 != 0 ? v17 + 1 : v17;
      if (v21 <= 5) {
        v22 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) +
                         8LL * *(unsigned __int16*)(*(__int64 (**)(__int64))(
                                   *(_QWORD*)v6 + 560LL))(v6));
        if ((((0x10000000000LL << *(_BYTE*)(v22 + 72)) |
              (1LL << *(_BYTE*)(v22 + 73))) &
             0xFFBFFFFFFFA39FFFLL) != 0) {
          return 3;
        }
      }
    }
    v23 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 560LL))(v6);
    if (TransporterConst_89ca00(v23)) {
      return 3;
    }
    return 2;
  }
  if (*(_BYTE*)(v6 + 88) != 1) {
    if (a1[2] - a1[1] > 0x1F30u) {
      return 3;
    }
    v24 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 560LL))(v6);
    v25 = GameData_212c878[0];
    v26 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v24);
    if ((((0x10000000000LL << *(_BYTE*)(v26 + 72)) |
          (1LL << *(_BYTE*)(v26 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0) {
      v27 = (a1[2] - a1[1]) >> 3;
      if (a2 != nullptr) {
        if (a2[414] != 0) {
          v28 = (a2[418] != 0) + 1;
        }
        else {
          v28 = a2[418] != 0;
        }
        if (a2[422] != 0) {
          ++v28;
        }
        if (a2[426] != 0) {
          ++v28;
        }
        if (a2[430] != 0) {
          ++v28;
        }
        if (a2[434] != 0) {
          ++v28;
        }
        if ((int)v27 + v28 + 1 <= 6) {
          goto LABEL_72;
        }
      }
      else if (
          (int)v27 +
              *(_DWORD*)(*(_QWORD*)(*(_QWORD*)
                                        game_TransporterConst_List_instance__ptr
                                            [0] +
                                    8LL) +
                         84LL) +
              1 <=
          (signed __int32)*(
              _DWORD*)(*(_QWORD*)(*(_QWORD*)
                                      game_TransporterConst_List_instance__ptr
                                          [0] +
                                  8LL) +
                       72LL)) {
      LABEL_72:
        v37 = (__int64*)a1[2];
        v36 = a1[3];
        if ((unsigned __int64)v37 >= v36) {
          v39 = a1[1];
          v40 = (char*)v37 - v39;
          v41 = ((__int64)v37 - v39) >> 3;
          v42 = v41 + 1;
          if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
            GameRoutine_9c2e00();
          }
          v43 = v36 - v39;
          v44 = fw_memory_g_heap_manager_ptr;
          if (v43 >> 2 > v42) {
            v42 = v43 >> 2;
          }
          if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
            v45 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v45 = v42;
          }
          if (v45 != 0) {
            if (v45 >> 61 != 0) {
              GameRoutine_60a210();
            }
            v46 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v45, 16, 0);
          }
          else {
            v46 = 0;
          }
          v47 = v46 + 8 * v45;
          v48 = (unsigned __int64)v37 - v39;
          v49 = (__int64)&v40[v46 + -8 * v41];
          *(_QWORD*)&v40[v46] = v6;
          v38 = (__int64)&v40[v46 + 8];
          memcpy(v49, v39, v48);
          a1[1] = v49;
          a1[2] = v38;
          a1[3] = v47;
          if (v39 != 0) {
            v50 = 128;
            if (*(_QWORD*)(*(_QWORD*)v44 + 200LL) == 0) {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v44 + v50, v39);
          }
        }
        else {
          *v37 = v6;
          v38 = (__int64)(v37 + 1);
        }
        a1[2] = v38;
        goto LABEL_97;
      }
    }
    else {
      v29 = *(_WORD**)(v6 + 104);
      if (v29 != nullptr) {
        if (v29[414] != 0) {
          v30 = (v29[418] != 0) + 1;
        }
        else {
          v30 = v29[418] != 0;
        }
        if (v29[422] != 0) {
          ++v30;
        }
        v18 = v29[426] == 0;
        v31 = (unsigned __int16)v29[430];
        v32 = (unsigned __int16)v29[434];
        if (!v18) {
          ++v30;
        }
        if (v31 != 0) {
          ++v30;
        }
        v33 = v32 != 0 ? v30 + 1 : v30;
        if (v33 <= 5) {
          v34 = *(_QWORD*)(*(_QWORD*)(*v25 + 64) +
                           8LL * *(unsigned __int16*)(*(__int64 (**)(__int64))(
                                     *(_QWORD*)v6 + 560LL))(v6));
          if ((((0x10000000000LL << *(_BYTE*)(v34 + 72)) |
                (1LL << *(_BYTE*)(v34 + 73))) &
               0xFFBFFFFFFFA39FFFLL) != 0) {
            goto LABEL_72;
          }
        }
      }
      v35 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 560LL))(
          v6);
      if (TransporterConst_89ca00(v35)) {
        goto LABEL_72;
      }
    }
    return 2;
  }
  v8 = (char*)a1[1];
  v7 = (char*)a1[2];
  if (v8 != v7) {
    v9 = v7 - v8 - 8;
    if ((~(_BYTE)v9 & 0x18) != 0) {
      v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
      while (v6 != *(_QWORD*)v8) {
        v8 += 8;
        if (--v10 == 0) {
          goto LABEL_10;
        }
      }
      goto LABEL_94;
    }
  LABEL_10:
    if (v9 >= 0x18) {
      v8 += 16;
      while (1) {
        if (v6 == *((_QWORD*)v8 - 2)) {
          v8 -= 16;
          goto LABEL_94;
        }
        if (v6 == *((_QWORD*)v8 - 1)) {
          v8 -= 8;
          goto LABEL_94;
        }
        if (v6 == *(_QWORD*)v8) {
          goto LABEL_94;
        }
        if (v6 == *((_QWORD*)v8 + 1)) {
          break;
        }
        v11 = v8 + 16;
        v8 += 32;
        if (v11 == v7) {
          goto LABEL_97;
        }
      }
      v8 += 8;
    LABEL_94:
      v51 = v7 - (v8 + 8);
      if (v7 != v8 + 8) {
        memmove((__int64)v8, (__int64)(v8 + 8), v7 - (v8 + 8));
      }
      a1[2] = &v8[v51];
    }
  }
LABEL_97:
  if (*(_BYTE*)(v6 + 88) != 0) {
    v52 = "SE_SYS_Multiple_Cancel";
  }
  else {
    v52 = "SE_SYS_Multiple_Select";
  }
  snd_Fade_Fade_10c830((__int64)v53, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)v52, (__int64)v52, (__int64)v53, 0,
                 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(v53);
  GameRoutine_1872af0(v6, (*(_BYTE*)(v6 + 88) & 1) == 0);
  return 0;
}

__attribute__((swiftcall)) void game_facility_19532e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                      _QWORD* a2, float a4)
{

#pragma clang fp contract(off)
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30[2];

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  v10 = v9 + 4;
  v11 = (__int64)v9;
  v9[1] = 0;
  v9[2] = 0;
  *v9 = GameData_2119060;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v9 + 4, a2[2], a2[1]);
  }
  else {
    v12 = a2[1];
    *v10 = *a2;
    v9[5] = v12;
    v9[6] = a2[2];
  }
  v13 = 0x0.0p+0f;
  *(_QWORD*)(v11 + 68) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_DWORD*)(v11 + 88) = 2;
  if (a4 >= 0x0.0p+0f) {
    v13 = a4;
  }
  *(float*)(v11 + 64) = v13;
  *(float*)(v11 + 76) = v13;
  v14 = GameData_2131320[0];
  *(_QWORD*)(v11 + 144) = 0;
  *(_QWORD*)(v11 + 152) = 0;
  *(_QWORD*)(v11 + 160) = 0;
  *a3 = v10;
  a3[1] = v11;
  *(_QWORD*)(v11 + 128) = 0;
  *(_QWORD*)(v11 + 56) = v14 + 2;
  *(_BYTE*)(v11 + 168) = 1;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                            memory_order_relaxed);
  v30[0] = (__int64)v10;
  v30[1] = v11;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                            memory_order_relaxed);
  game_facility_19537e0((__int64)a1, v30);
  std___1___shared_weak_count___release_weak(v11);
  v15 = (_QWORD*)a1[2];
  v16 = a1[3];
  if ((unsigned __int64)v15 >= v16) {
    v18 = a1[1];
    v19 = (unsigned __int64)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 4;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 60 != 0) {
      GameRoutine_1953ad0();
    }
    v22 = v16 - v18;
    if (v22 >> 3 > v21) {
      v21 = v22 >> 3;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF0LL) {
      v23 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v24 = fw_memory_HeapManager_Allocate(*v8, 16 * v23, 16, 0);
    v25 = (_QWORD*)(v24 + v19);
    v26 = v24 + 16 * v23;
    *v25 = v10;
    v25[1] = v11;
    v27 = v24 + v19 - 16 * v20;
    v17 = v24 + v19 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    memcpy(v27, v18, v19);
    a1[1] = v27;
    a1[2] = v17;
    a1[3] = v26;
    if (v18 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v28, v18);
    }
  }
  else {
    *v15 = v10;
    v15[1] = v11;
    v17 = (__int64)(v15 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  a1[2] = v17;
  {
    std___1___shared_weak_count___release_weak(v11);
    return;
  }
}

#pragma GCC visibility pop
