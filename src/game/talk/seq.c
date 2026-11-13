#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11311f0(__int64, __int64, int);
__int64 GameRoutine_1139a00(_QWORD);
__int64 GameRoutine_113b8c0(_QWORD, _QWORD);
__int64 GameRoutine_113be80(_QWORD, _QWORD);
__int64 GameRoutine_114ed00(_QWORD);
__int64 GameRoutine_11511f0(void);
__int64 GameRoutine_1151340(_QWORD);
__int64 GameRoutine_11516e0(void);
__int64 GameRoutine_1196e60(_QWORD);
__int64 GameRoutine_1197100(_QWORD);
__int64 GameRoutine_119a200(_QWORD, _QWORD);
__int64 GameRoutine_11de9c0(_QWORD);
__int64 GameRoutine_135a2e0(_QWORD, _QWORD);
__int64 GameRoutine_140bb40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_62c840(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_658d60(_QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_824ca0(void);
__int64 GameRoutine_82dd50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_9d57b0(_QWORD, _QWORD);
__int64 GameRoutine_9e6800(_QWORD, _QWORD);
__int64 GameRoutine_a4f6c0(_QWORD, _QWORD);
__int64 GameRoutine_a4f800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4fa80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51280(_QWORD, _QWORD);
__int64 GameRoutine_a51640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f86840(_QWORD);
__int64 GameRoutine_f87240(_QWORD);
__int64 GameRoutine_f87cd0(_QWORD);
__int64 GameSubquestData_125d800(_QWORD, _QWORD);
__int64 MapInfo_824f10(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD, long double);
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d750;
extern __int64 GameData_212dce8;
extern __int64 GameData_21c9fe0;
extern __int64 GameData_21cd128;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21fa5e0;
extern __int64 GameData_22190b8;
extern __int64 GameData_22197d8;
extern __int64 GameData_221b2e8;
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212fc38[2];
extern __int64* as_g_script_manager_ptr;
extern __int64* game_talk_g_window_layout_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_1138d60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64* Seq_1132580(__int64* result, _QWORD* a2);
__int64 Seq_1133320(__int64 result);
__int64 Seq_11333e0_alt1(__int64 a1) __asm__("Seq_11333e0");
__int64 Seq_1133880(__int64 a1);
void Seq_1133a20(__int64 a1);
__int64 Seq_1133ad0(__int64 result);
__int64 Seq_1133d20(__int64 result);
_QWORD* Seq_1134340(_QWORD* result);
void Seq_11351f0();
__int64 Seq_1135d20(__int64 result);
__int64 Seq_1136ff0(__int64 a1);
__int64 Seq_1137060(__int64 a1);
__int64 Seq_11370d0(__int64 a1);
__int64 Seq_1137230(__int64 result);
__int64 Seq_11372b0(__int64 result);
__int64 Seq_1137330(__int64 a1);
__int64 Seq_11373a0(__int64 a1);
__int64 Seq_1137500(__int64 result);
__int64 Seq_11375e0(__int64 result);
__int64 Seq_1137710(__int64 a1);
__int64 Seq_1137760();
__int64 Seq_1137780(__int64 result);
__int64 Seq_11378c0(__int64 result);
__int64 Seq_1137a00(__int64 result);
unsigned __int64 Seq_1137a80(_QWORD* a1, __int64 a2);
__int64 Seq_1137d60(__int64 result);
__int64 Seq_Unknown4_1137da0();
__int64 Seq_Unknown5_1137e30();
__int64 Seq_Unknown12_1137fa0(__int64 a1);
void Seq_Unknown10();
__int64 GameRoutine_112f420(_QWORD, _QWORD);
__int64 GameRoutine_1139820(_QWORD);
__int64 GameRoutine_113d020(_QWORD);
__int64 GameRoutine_1196c00(_QWORD);
__int64 GameRoutine_14899f0(_QWORD, long double);
__int64 GameRoutine_1916be0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 spine_TrackEntry_setAnimationEnd(_QWORD, float);
__int64 spine_TrackEntry_setDelay(_QWORD, float);
__int64 spine_TrackEntry_setMixDuration(double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20114e8[])();
extern __int64 (*GameData_2011508[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_talk_Seq_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
__int64
Seq_Destructor_1130ae0_alt1(__int64 a1) __asm__("Seq_Destructor_1130ae0");
__int64 game_talk_Seq_BindFaceEyeBlinkSync_lambda0_Invoke(__int64 a1);
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
_QWORD* GameRoutine_c9e1c0(float*, unsigned __int8*, __int64, __int64**);
_QWORD* SceneManager_138e2c0(__int64, unsigned __int8*);
__attribute__((swiftcall)) void GameRoutine_113bfb0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void Hub_119acc0(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64* GameRoutine_1152360(_QWORD*, unsigned __int8*);
__int64* GameRoutine_68c980(_QWORD*, unsigned __int8*);
__int64* GameRoutine_a542c0(_QWORD*, _QWORD*);
__int64* Registration_a4f800(__int64, __int64, int);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_112ea40(_BYTE*, _BYTE*);
__int64 GameRoutine_60a020_alt1(_QWORD) __asm__("GameRoutine_60a020");
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_714ee0(void);
__int64 GameRoutine_a19f00(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51280_alt1(__int64, _BYTE*) __asm__("GameRoutine_a51280");
__int64 HubCharacterNatives_cf7940(__int64);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 Manager_a50ce0(_QWORD, _QWORD);
__int64 Seq_1134ae0_alt1(_QWORD, _QWORD) __asm__("Seq_1134ae0");
__int64 Seq_1149de0(__int64, __int64);
__int64 Unit_6c82e0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_HashString32(_QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Register(void);
__int64 game_UnitPool_Find_6eac40(_QWORD);
__int64 game_telop_TelopRelianceLvUp_CreateBind(__int64, __int64, __int64, char,
                                                unsigned __int8);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_a32b10(__int64);
__n128 Seq_11331c0_alt1(__int64) __asm__("Seq_11331c0");
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212fa30;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1a9210e;
extern _UNKNOWN GameData_1a98e31;
extern _UNKNOWN GameData_1adba82;
extern _UNKNOWN GameData_1af1f6d;
extern _UNKNOWN GameData_216f168;
extern _UNKNOWN GameData_216f3a8;
extern __int64 (*GameData_1fecb18[])();
extern __int64 (*game_talk_ProcHideUI_vtable[])();
extern __int64 (*game_talk_ProcKeyWait_vtable[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c890[3];
extern __int64* GameData_212cbb8[80];
extern __int64* GameData_212eb78[3];
extern __int64 GameData_1ac302b;
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c99c8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_g_frame_clock;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1aad589[6];
extern int* GameData_212fa28;
void GameRoutine_11330a0(__int64*, _QWORD*);
void GameRoutine_113d8b0(__int64);
void GameRoutine_68cb20(__int64*, unsigned __int64);
void Seq_1132580_alt1(__int64*, _QWORD*) __asm__("Seq_1132580");
void __attribute__((noreturn))
GameRoutine_1138d60_alt1() __asm__("GameRoutine_1138d60");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_a89030();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void game_113f060(__int64, double, double, long double);
__int64 Seq_11311f0_alt1(__int64 a1, __int64 a2, int a3) __asm__("Seq_11311f0");
__attribute__((swiftcall)) void Seq_1131360(PSEUDO_X8 x8_, __int64 a1,
                                            _BYTE* a2);
__int64 Seq_1131620_alt1(__int64 a1, _BYTE* a2,
                         _BYTE* a3) __asm__("Seq_1131620");
__int64 Seq_1131cc0_alt1(__int64 a1, __int64 a2) __asm__("Seq_1131cc0");
__attribute__((swiftcall)) void Seq_11326e0(PSEUDO_X8 x8_, __int64 a1);
void Seq_11331c0(__int64 a1);
void Seq_Unknown3_1133970(__int64 a1, double a2, double a3, long double a4);
void Seq_11347c0(__int64 a1);
void Seq_1134ae0(__int64 a1, __int64 a2);
__int64 Seq_1135380(__int64 a1);
__int64 Seq_11354e0(__int64 result);
__int64 Seq_1137ba0(__int64 result);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 Seq_1133c40(__int64 result);
_BYTE* ProcInst_657a50(__int64, char);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD*
game_UnitPool_Find_6eac40_alt1(__int64*) __asm__("game_UnitPool_Find_6eac40");
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_8224a0(unsigned __int8);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_82dd50(__int64 result, unsigned __int64*, char);
__int64 GameRoutine_1553130_alt1(__int64 result) __asm__("GameRoutine_1553130");
__int64 GameRoutine_1553220_alt1(__int64 result) __asm__("GameRoutine_1553220");
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_9e6800_alt1(unsigned int*) __asm__("GameRoutine_9e6800");
__int64 LayoutAccessor_1567000(__int64, char);
__int64 Manager_a51640(__int64, __int64, _DWORD*);
__int64 Registration_a4fa80(__int64, __int64, __int64);
__int64 game_1196e60(_QWORD*);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* Unit_6c82e0_alt1(__int64) __asm__("Unit_6c82e0");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int strncmp_alt1(const char*, const char*, unsigned __int64) __asm__("strncmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void* GameRoutine_714ee0_alt1() __asm__("GameRoutine_714ee0");
void* Registration_a4f6c0(__int64, __int64);
void* Registration_a4f800_alt1(__int64, __int64,
                               int) __asm__("Registration_a4f800");
void GameHr_11de9c0();
void GameHr_f86840(_QWORD*);
void GameRoutine_1139a00_alt1(_QWORD*) __asm__("GameRoutine_1139a00");
void GameRoutine_1197100_alt1(_QWORD*) __asm__("GameRoutine_1197100");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Seq_11333e0(__int64 a1);
__int64 CombatCamera_1098420(_QWORD*, __int64*, __int64, int);
__int64 GameRoutine_112f060(__int64*);
__int64 ProcTalkLogMenu_17cfc80(__int64 result, char);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
bool GameRoutine_113dc10(__int64, int);
extern _UNKNOWN* GameData_212deb8;
extern __int64 (*GameData_2011b20[])();
extern int* GameData_212deb0;
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_talk_Seq_BindFaceEyeBlinkSync(__int64 a1);
_QWORD* game_c9e1c0(float*, unsigned __int8*, __int64, __int64**);
__int64* GameRoutine_a542c0_alt1(_QWORD*,
                                 const char**) __asm__("GameRoutine_a542c0");
__int64* Registration_a4f800_alt2(__int64, const char*,
                                  int) __asm__("Registration_a4f800");
__int64 GameHr_113bfb0(__int64);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_112ea40_alt1(__int64,
                                 _BYTE*) __asm__("GameRoutine_112ea40");
__int64 GameRoutine_112f420_alt1(__int64*,
                                 __int64*) __asm__("GameRoutine_112f420");
__int64 GameRoutine_a19f00_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_a19f00");
__int64 GameRoutine_a32b10_alt1(__int64 result) __asm__("GameRoutine_a32b10");
__int64 GameRoutine_a51280_alt2(__int64,
                                const char*) __asm__("GameRoutine_a51280");
__int64 Manager_a50ce0_alt1(__int64, const char*) __asm__("Manager_a50ce0");
__int64 Seq_1149de0_alt1(__int64, const char*) __asm__("Seq_1149de0");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
void GameHr_1139820(__int64);
void GameRoutine_113d020_alt1(__int64) __asm__("GameRoutine_113d020");
void GameRoutine_14899f0_alt1(__int64) __asm__("GameRoutine_14899f0");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void game_1196c00(__int64);
void Seq_Destructor_1130ae0(__int64 a1);
__int64 Seq_11311f0(__int64 a1, const char* a2, int a3);
__int64 Seq_1131620(__int64 a1, const char* a2, _BYTE* a3);
__int64 Seq_1131cc0(__int64 a1, const char* a2);
_QWORD* GameRoutine_112f900(_QWORD* result, __int64, char);
_QWORD* game_talk_112ff80(__int64, const char*, const char*, const char*, int,
                          int);
__attribute__((swiftcall)) void GameRoutine_a50740(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_a51060(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, __int64,
                                               __int64, char);
__attribute__((swiftcall)) void Manager_a50570(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void
TextSelector_19063a0(PSEUDO_X8, __int64*, __int64, __int64, __int64, int);
__attribute__((swiftcall)) void fs_a501f0(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void fs_a503b0(PSEUDO_X8, __int64, __int64);
__int64 GameHr_112e3e0(__int64, _BYTE*, __int64**, _BYTE*);
__int64 GameRoutine_a51280_alt3(__int64, __int64) __asm__("GameRoutine_a51280");
__int64 Seq_1131620_alt2(__int64, const char*, __int64) __asm__("Seq_1131620");
__int64 Seq_1149f10(__int64, const char*);
__int64 TextSelector_1907f20(_BYTE*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
bool GameRoutine_16046b0();
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
extern _UNKNOWN GameData_216dc68;
extern __int64 (*game_talk_ProcFaceChange_vtable[])();
extern __int64* GameData_212e348;
extern __int64* GameData_2132270;
extern __int64 GameData_212d8b8[2];
void GameHr_f87180(__int64, const char*);
void GameRoutine_156c5d0(__int64, __int64, char);
void Hub_1199e20(__int64, const char*);
void game_112d580(char*, __int64, __int64);
void game_113af40(__int64, const char*);
void game_113dca0(__int64, __int64, unsigned __int8*);
void game_1489b40(unsigned __int8*, const char*);
void Seq_1132180(__int64 a1, const char* a2);
void Seq_1133d80(__int64 a1);
void Seq_1134430(__int64 a1);

void Seq_Destructor_1130ae0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
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
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
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

  *(_QWORD*)a1 = game_talk_Seq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_20114e8;
  *(_QWORD*)(a1 + 160) = GameData_2011508;
  GameRoutine_112f420_alt1((__int64*)(a1 + 312),
                           game_talk_g_window_layout_ptr[0]);
  if (*(_BYTE*)(a1 + 1092) == 1) {
    GameRoutine_1553220_alt1(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  v2 = *(_QWORD*)(a1 + 1344);
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 1352) = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v4 + v5, v2);
  }
  v6 = *(_QWORD*)(a1 + 1336);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  v7 = *(_QWORD*)(a1 + 1304);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 1312);
    if (v7 == v8) {
      goto LABEL_22;
    }
    v9 = *(_QWORD*)(a1 + 1312);
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v8 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v12, v11);
        }
      }
      v8 = v9;
    } while (v9 != v7);
    v13 = *(_QWORD*)(a1 + 1304);
    *(_QWORD*)(a1 + 1312) = v7;
    v7 = v13;
    if (v13 != 0) {
    LABEL_22:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v14, v7);
    }
  }
  v15 = *(_QWORD**)(a1 + 1264);
  while (v15 != nullptr) {
    v17 = (__int64)v15;
    v15 = (_QWORD*)*v15;
    if ((*(_BYTE*)(v17 + 16) & 1) != 0 && *(_QWORD*)(v17 + 32) != 0) {
      v18 = v17;
      v19 = *(_QWORD*)(v17 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v20 = 128;
      }
      else {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v20, v19);
      v17 = v18;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v16 = 128;
    }
    else {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v16, v17);
  }
  v21 = *(_QWORD*)(a1 + 1248);
  *(_QWORD*)(a1 + 1248) = 0;
  if (v21 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v22, v21);
  }
  if ((*(_BYTE*)(a1 + 1224) & 1) != 0) {
    v23 = *(_QWORD*)(a1 + 1240);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v24, v23);
    }
  }
  if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
    v25 = *(_QWORD*)(a1 + 1216);
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v26, v25);
    }
  }
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 1192);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v28, v27);
    }
  }
  if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
    v29 = *(_QWORD*)(a1 + 1160);
    if (v29 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v30, v29);
    }
  }
  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v31 = *(_QWORD*)(a1 + 1136);
    if (v31 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v32, v31);
    }
  }
  if ((*(_BYTE*)(a1 + 1096) & 1) != 0) {
    v33 = *(_QWORD*)(a1 + 1112);
    if (v33 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v34, v33);
    }
  }
  GameRoutine_14899f0_alt1(a1 + 944);
  v35 = *(_QWORD**)(a1 + 920);
  while (v35 != nullptr) {
    v37 = (__int64)v35;
    v35 = (_QWORD*)*v35;
    v38 = *(_QWORD**)(v37 + 80);
    if (v38 == (_QWORD*)(v37 + 48)) {
      v39 = 32;
    }
    else {
      if (v38 == nullptr) {
        goto LABEL_82;
      }
      v39 = 40;
    }
    (*(void (**)(__int64))(*v38 + v39))((__int64)v38);
  LABEL_82:
    if ((*(_BYTE*)(v37 + 16) & 1) != 0) {
      v40 = *(_QWORD*)(v37 + 32);
      if (v40 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v41 = 128;
        }
        else {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v41, v40);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v36 = 128;
    }
    else {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v36, v37);
  }
  v42 = *(_QWORD*)(a1 + 904);
  *(_QWORD*)(a1 + 904) = 0;
  if (v42 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v43, v42);
  }
  if ((*(_BYTE*)(a1 + 872) & 1) != 0) {
    v44 = *(_QWORD*)(a1 + 888);
    if (v44 != 0) {
      v45 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v45, v44);
    }
  }
  if ((*(_BYTE*)(a1 + 832) & 1) != 0) {
    v46 = *(_QWORD*)(a1 + 848);
    if (v46 != 0) {
      v47 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v47, v46);
    }
  }
  if ((*(_BYTE*)(a1 + 808) & 1) != 0) {
    v48 = *(_QWORD*)(a1 + 824);
    if (v48 != 0) {
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v49, v48);
    }
  }
  if ((*(_BYTE*)(a1 + 784) & 1) != 0) {
    v50 = *(_QWORD*)(a1 + 800);
    if (v50 != 0) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v51, v50);
    }
  }
  if ((*(_BYTE*)(a1 + 752) & 1) != 0) {
    v52 = *(_QWORD*)(a1 + 768);
    if (v52 != 0) {
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v53, v52);
    }
  }
  if ((*(_BYTE*)(a1 + 728) & 1) != 0) {
    v54 = *(_QWORD*)(a1 + 744);
    if (v54 != 0) {
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v3 + v55, v54);
    }
  }
  game_1196c00(a1 + 536);
  GameHr_1139820(a1 + 400);
  GameRoutine_113d020_alt1(a1 + 216);
  v56 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 160) = kaneko_WPHolder_vtable;
  if (v56 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v56);
  }
  v57 = *(_QWORD*)(a1 + 176);
  if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak_alt2(v57);
  }
  GameData_21ec7b8 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

__int64 Seq_11311f0(__int64 a1, const char* a2, int a3)
{
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  bool v12;
  __int64* v14;
  const char* v15;
  __int64 v16;
  const char* v17;
  int v18;
  unsigned int v20;
  __int64 v21;
  __int64 result;
  struct {
    const char* v23[2];
    const char* v24;
  } v23_;

  v6 = msg_MessageManager_instance__ptr[0];
  v23_.v23[0] = a2;
  v7 = GameRoutine_a542c0_alt1(
      (_QWORD*)(*msg_MessageManager_instance__ptr[0] + 14608), v23_.v23);
  if (v7 != nullptr) {
    v8 = v7[5];
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 800);
      v10 = *(_DWORD*)(v9 + 36);
      if (v10 != -1) {
        v11 = **(_DWORD**)(*(_QWORD*)(v9 + 24) + 24LL * v10);
        v12 = v11 == -1 || v11 < 1;
        if (!v12 && a3 >= v11) {
          return 1;
        }
      }
    }
  }
  if ((unsigned int)(*(_DWORD*)(a1 + 200) - 1) <= 1) {
    return a3 != *(_DWORD*)(a1 + 1168);
  }
  v14 = Registration_a4f800_alt2(*v6, a2, a3);
  if ((*(_BYTE*)v14 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1((__int64*)v23_.v23, v14[2], v14[1]);
  }
  else {
    v15 = (const char*)*v14;
    v16 = v14[2];
    v23_.v23[1] = (const char*)v14[1];
    v23_.v24 = (const char*)v16;
    v23_.v23[0] = v15;
  }
  if (((__int64)v23_.v23[0] & 1) != 0) {
    v17 = v23_.v24;
  }
  else {
    v17 = (char*)v23_.v23 + 1;
  }
  v18 = GameRoutine_a51280_alt2(*v6, v17);
  result = v18 == 19 || (unsigned int)(v18 - 1) < 4;
  if (((__int64)v23_.v23[0] & 1) != 0 && v23_.v24 != nullptr) {
    v20 = result;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v23_.v24);
    return v20;
  }
  return result;
}

__attribute__((swiftcall)) void Seq_1131360(PSEUDO_X8 x8_, __int64 a1,
                                            _BYTE* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 result;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  struct {
    __int64 v25[4];
    int v26;
    int v27;
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
  } v25_;

  v6 = (__int64)*msg_MessageManager_empty_text__ptr;
  v7 = strlen_alt1(*msg_MessageManager_empty_text__ptr);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v10, 16,
                                             0);
    a3[1] = v8;
    a3[2] = v9;
    *a3 = v10 | 1;
  }
  else {
    *(_BYTE*)a3 = 2 * v7;
    v9 = (__int64)a3 + 1;
    if (v7 == 0) {
      goto LABEL_10;
    }
  }
  memmove_alt1(v9, v6, v8);
LABEL_10:
  *(_BYTE*)(v9 + v8) = 0;
  if (*a2 != 0) {
    v25_.v28 = -1;
    v25_.v29 = -1;
    v25_.v30 = -1;
    v25_.v31 = -1;
    v11 = *msg_MessageManager_instance__ptr[0];
    v25_.v32 = -1;
    v25_.v33 = -1;
    v25_.v34 = -1;
    v25_.v35 = -1;
    v25_.v36 = -1;
    v25_.v37 = -1;
    v25_.v38 = -1;
    v25_.v39 = -1;
    v25_.v25[0] = (__int64)msg_TagSelector_vtable;
    v25_.v25[1] = 0xFFFF0001FFFF0000LL;
    v25_.v25[2] = 0xFFFF0004FFFF0002LL;
    v25_.v25[3] = 0xFFFF0006FFFF0005LL;
    v25_.v40 = 8;
    v25_.v26 = -65529;
    v25_.v27 = -65528;
    v12 = GameRoutine_a4dbe0_alt1(v11, a2, 0);
    {
      GameRoutine_60a020_alt2((__int64)a3, v12);
      return;
    }
  }
  result = game_HashString_alt1(a1);
  if (result == 0) {
    result;
    return;
  }
  v14 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v14 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    result;
    return;
  }
  v16 = v14 - 1;
  if ((v14 & (v14 - 1)) != 0) {
    v17 = result;
    if (result >= v14) {
      v17 = result % v14;
    }
  }
  else {
    v17 = v16 & result;
  }
  v18 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v17);
  if (v18 == nullptr) {
    result;
    return;
  }
  v19 = (_QWORD*)*v18;
  if (v19 == nullptr) {
    result;
    return;
  }
  if ((v14 & v16) == 0) {
    while (1) {
      v21 = v19[1];
      if (v21 == result) {
        if (v19[2] == result) {
          goto LABEL_38;
        }
      }
      else if ((v21 & v16) != v17) {
        {
          result;
          return;
        }
      }
      v19 = (_QWORD*)*v19;
      if (v19 == nullptr) {
        result;
        return;
      }
    }
  }
  while (1) {
    v20 = v19[1];
    if (v20 == result) {
      break;
    }
    if (v20 >= v14) {
      v20 %= v14;
    }
    if (v20 != v17) {
      result;
      return;
    }
  LABEL_27:
    v19 = (_QWORD*)*v19;
    if (v19 == nullptr) {
      result;
      return;
    }
  }
  if (v19[2] != result) {
    goto LABEL_27;
  }
LABEL_38:
  v22 = v19[3];
  if (v22 != 0) {
    v23 = GameHr_67ed20((_QWORD*)v19[3]);
    GameRoutine_60a020_alt2((__int64)a3, v23);
    v25_.v25[0] = v22;
    result = (unsigned __int64)game_UnitPool_Find_6eac40_alt1(v25_.v25);
    if (result != 0) {
      v12 = Unit_6c82e0_alt1(result);
      {
        GameRoutine_60a020_alt2((__int64)a3, v12);
        return;
      }
    }
    do {
      v24 = v22;
      v22 = *(_QWORD*)(v22 + 624);
    } while (v22 != 0);
    if (*(_BYTE*)(v24 + 441) == 3) {
      v12 = (const char*)GameRoutine_714ee0_alt1();
      {
        GameRoutine_60a020_alt2((__int64)a3, v12);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 Seq_1131620(__int64 a1, const char* a2, _BYTE* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v6;
  int v7;
  const char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned int v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64** v29;
  __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  char v40;
  _DWORD* v41;
  __int64 v42;
  __int64 v43;
  float v44;
  float v45;
  _BOOL8 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 primeEm;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  int v68;
  struct {
    __int64 v69;
    unsigned __int64 v70;
    char* v71;
  } v69_;
  __int64* v72;

  v6 = GameRoutine_112ea40_alt1((__int64)a2, a3);
  if (v6 != 0) {
    goto LABEL_2;
  }
  v14 = GameData_212cbb8[0];
  if (*GameData_212fc38[0] != 0) {
    v15 = Seq_1149de0_alt1(*GameData_212fc38[0], a2);
    goto LABEL_18;
  }
  v25 = (__int64*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v26 = strlen_alt1(a2);
    if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_138;
    }
    v27 = v26;
    if (v26 >= 0x17) {
      if ((v26 | 7) == 0x17) {
        v53 = 26;
      }
      else {
        v53 = (v26 | 7) + 1;
      }
      v28 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v53, 16, 0);
      v69_.v70 = v27;
      v69_.v71 = v28;
      v69_.v69 = v53 | 1;
    }
    else {
      LOBYTE(v69_.v69) = 2 * v26;
      v28 = (char*)&v69_.v69 + 1;
      if (v26 == 0) {
        goto LABEL_97;
      }
    }
    memcpy_alt1((__int64)v28, (__int64)a2, v27);
  LABEL_97:
    v54 = *v25;
    v28[v27] = 0;
    if (v54 == 0) {
      goto LABEL_106;
    }
    v55 = *(_QWORD*)(a1 + 1064);
    if (v55 != 0) {
      v15 = *(unsigned __int16*)(v55 + 16);
      if ((v69_.v69 & 1) == 0) {
        goto LABEL_18;
      }
      goto LABEL_108;
    }
    v56 = SceneManager_138e2c0(v54, (unsigned __int8*)&v69_.v69);
    if (v56 != nullptr) {
      v57 = v56[14];
      v58 = v56[15];
      if (v58 == 0) {
        v15 = *(_DWORD*)(v57 + 104);
        if ((v69_.v69 & 1) != 0) {
        LABEL_108:
          if (v69_.v71 != nullptr) {
            v60 = v15;
            v61 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free_alt3(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v61,
                (__int64)v69_.v71);
            v15 = v60;
          }
        }
      LABEL_18:
        if ((v15 & 0x80000000) == 0) {
          v6 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * v15);
          if (v6 != 0) {
            goto LABEL_2;
          }
        }
        goto LABEL_36;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                memory_order_relaxed);
      v15 = *(_DWORD*)(v57 + 104);
      if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v59 = v15;
        (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
        std___1___shared_weak_count___release_weak_alt2(v58);
        v15 = v59;
        if ((v69_.v69 & 1) == 0) {
          goto LABEL_18;
        }
        goto LABEL_108;
      }
    }
    else {
    LABEL_106:
      v15 = -1;
    }
    if ((v69_.v69 & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_108;
  }
LABEL_36:
  v6 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * (int)Seq_1131cc0(a1, a2));
  if (v6 == 0) {
    return v6;
  }
LABEL_2:
  v7 = *(unsigned __int16*)(v6 + 16);
  if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
    v8 = *(const char**)(a1 + 1216);
  }
  else {
    v8 = (const char*)(a1 + 1201);
  }
  v9 = strlen_alt1(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_138:
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v12, 16, 0);
    v69_.v70 = v10;
    v69_.v71 = v11;
    v69_.v69 = v12 | 1;
  }
  else {
    LOBYTE(v69_.v69) = 2 * v9;
    v11 = (char*)&v69_.v69 + 1;
    if (v9 == 0) {
      goto LABEL_14;
    }
  }
  memcpy_alt1((__int64)v11, (__int64)v8, v10);
LABEL_14:
  v11[v10] = 0;
  v13 = (__int64*)(a1 + 1248);
  if (GameRoutine_68c980((_QWORD*)(a1 + 1248), (unsigned __int8*)&v69_.v69) !=
      nullptr) {
    v72 = &v69_.v69;
    *((_DWORD*)game_c9e1c0((float*)(a1 + 1248), (unsigned __int8*)&v69_.v69,
                           (__int64)std___1_piecewise_construct_ptr, &v72) +
      10) = v7;
  }
  else {
    v16 = *(unsigned __int8*)(a1 + 1200);
    v17 = (v16 & 1) == 0;
    v18 = v16 >> 1;
    if (v17) {
      v19 = a1 + 1201;
    }
    else {
      v19 = *(_QWORD*)(a1 + 1216);
    }
    if (v17) {
      v20 = v18;
    }
    else {
      v20 = *(_QWORD*)(a1 + 1208);
    }
    v21 = std___1___hash_memory_alt1(v19, v20);
    v22 = *(_QWORD*)(a1 + 1256);
    v23 = v21;
    if (v22 != 0) {
      v24 = v22 - 1;
      if ((v22 & (v22 - 1)) != 0) {
        v3 = v21;
        if (v21 >= v22) {
          v3 = v21 % v22;
        }
      }
      else {
        v3 = v24 & v21;
      }
      v29 = *(__int64***)(*v13 + 8 * v3);
      if (v29 != nullptr) {
        v68 = v7;
        v30 = *v29;
        if (*v29 != nullptr) {
          if ((v22 & v24) == 0) {
            while (1) {
              v35 = v30[1];
              if (v35 == v23) {
                v36 = *((unsigned __int8*)v30 + 16);
                v37 = v30[3];
                if ((v36 & 1) == 0) {
                  v37 = v36 >> 1;
                }
                if (v37 == v20) {
                  v38 = (v36 & 1) != 0 ? v30[4] : (__int64)v30 + 17;
                  if (memcmp_alt1(v38, v19, v20) == 0) {
                    goto LABEL_130;
                  }
                }
              }
              else if ((v35 & v24) != v3) {
                goto LABEL_68;
              }
              v30 = (__int64*)*v30;
              if (v30 == nullptr) {
                goto LABEL_68;
              }
            }
          }
          do {
            v31 = v30[1];
            if (v31 == v23) {
              v32 = *((unsigned __int8*)v30 + 16);
              v33 = v30[3];
              if ((v32 & 1) == 0) {
                v33 = v32 >> 1;
              }
              if (v33 == v20) {
                v34 = (v32 & 1) != 0 ? v30[4] : (__int64)v30 + 17;
                if (memcmp_alt1(v34, v19, v20) == 0) {
                  goto LABEL_130;
                }
              }
            }
            else {
              if (v31 >= v22) {
                v31 %= v22;
              }
              if (v31 != v3) {
                break;
              }
            }
            v30 = (__int64*)*v30;
          } while (v30 != nullptr);
        }
      LABEL_68:
        v7 = v68;
      }
    }
    v39 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v40 = *(_BYTE*)(a1 + 1200);
    v41 = v39;
    *v39 = 0;
    v39[1] = v23;
    if ((v40 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v39 + 2, *(_QWORD*)(a1 + 1216),
                                         *(_QWORD*)(a1 + 1208));
    }
    else {
      v42 = *(_QWORD*)(a1 + 1208);
      v39[2] = *(_QWORD*)(a1 + 1200);
      v39[3] = v42;
      v39[4] = *(_QWORD*)(a1 + 1216);
    }
    v43 = *(_QWORD*)(a1 + 1272);
    v44 = *(float*)(a1 + 1280);
    v41[10] = v7;
    v45 = (float)(unsigned __int64)(v43 + 1);
    if (v22 == 0 || (float)(v44 * (float)v22) < v45) {
      v46 = v22 < 3 || (v22 & (v22 - 1)) != 0;
      v47 = v46 | (2 * v22);
      v48 = vcvtps_u64_f32(v45 / v44);
      if (v47 <= v48) {
        primeEm = v48;
      }
      else {
        primeEm = v47;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime_alt1(primeEm);
      }
      v50 = *(_QWORD*)(a1 + 1256);
      if (primeEm > v50) {
        goto LABEL_85;
      }
      if (primeEm < v50) {
        v51 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 1272) /
                             *(float*)(a1 + 1280));
        if (v50 < 3 || (v50 & (v50 - 1)) != 0) {
          v51 = std___1___next_prime_alt1(v51);
        }
        else {
          v52 = 1LL << (-(char)__clz(v51 - 1) & 63);
          if (v51 >= 2) {
            v51 = v52;
          }
        }
        if (primeEm <= v51) {
          primeEm = v51;
        }
        if (primeEm < v50) {
        LABEL_85:
          GameRoutine_68cb20((__int64*)(a1 + 1248), primeEm);
        }
      }
      v22 = *(_QWORD*)(a1 + 1256);
      if ((v22 & (v22 - 1)) != 0) {
        if (v23 >= v22) {
          v3 = v23 % v22;
        }
        else {
          v3 = v23;
        }
      }
      else {
        v3 = (v22 - 1) & v23;
      }
    }
    v62 = *v13;
    v63 = *(_QWORD**)(*v13 + 8 * v3);
    if (v63 != nullptr) {
      *(_QWORD*)v41 = *v63;
      *v63 = v41;
    }
    else {
      v64 = *(_QWORD*)(a1 + 1264);
      *(_QWORD*)(a1 + 1264) = v41;
      *(_QWORD*)v41 = v64;
      *(_QWORD*)(v62 + 8 * v3) = a1 + 1264;
      if (*(_QWORD*)v41 != 0) {
        v65 = *(_QWORD*)(*(_QWORD*)v41 + 8LL);
        if ((v22 & (v22 - 1)) != 0) {
          if (v65 >= v22) {
            v65 %= v22;
          }
        }
        else {
          v65 &= v22 - 1;
        }
        *(_QWORD*)(*v13 + 8 * v65) = v41;
      }
    }
    ++*(_QWORD*)(a1 + 1272);
  }
LABEL_130:
  if ((v69_.v69 & 1) != 0 && v69_.v71 != nullptr) {
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, (__int64)v69_.v71);
  }
  return v6;
}

__int64 Seq_1131cc0(__int64 a1, const char* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64** v20;
  __int64* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  char v31;
  _DWORD* v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  _BOOL8 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 primeEm;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned int v48;
  __int64 v49;
  struct {
    _QWORD v50[2];
    char* v51;
  } v50_;
  __int64* v52;

  v5 = strlen_alt1(a2);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v50_.v50[1] = v6;
    v50_.v51 = v7;
    v50_.v50[0] = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v50_.v50[0]) = 2 * v5;
  v7 = (char*)v50_.v50 + 1;
  if (v5 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v7, (__int64)a2, v6);
  }
  v7[v6] = 0;
  v9 = (__int64*)(a1 + 1248);
  if (GameRoutine_68c980((_QWORD*)(a1 + 1248), (unsigned __int8*)v50_.v50) !=
      nullptr) {
    v52 = v50_.v50;
    result = *((unsigned int*)game_c9e1c0(
                   (float*)(a1 + 1248), (unsigned __int8*)v50_.v50,
                   (__int64)std___1_piecewise_construct_ptr, &v52) +
               10);
  }
  else {
    v11 = *(unsigned __int8*)(a1 + 1200);
    v12 = (v11 & 1) == 0;
    v13 = v11 >> 1;
    if (v12) {
      v14 = a1 + 1201;
    }
    else {
      v14 = *(_QWORD*)(a1 + 1216);
    }
    if (v12) {
      v15 = v13;
    }
    else {
      v15 = *(_QWORD*)(a1 + 1208);
    }
    v16 = std___1___hash_memory_alt1(v14, v15);
    v17 = *(_QWORD*)(a1 + 1256);
    v18 = v16;
    if (v17 != 0) {
      v19 = v17 - 1;
      if ((v17 & (v17 - 1)) != 0) {
        v2 = v16;
        if (v16 >= v17) {
          v2 = v16 % v17;
        }
      }
      else {
        v2 = v19 & v16;
      }
      v20 = *(__int64***)(*v9 + 8 * v2);
      if (v20 != nullptr) {
        v21 = *v20;
        if (*v20 != nullptr) {
          if ((v17 & v19) == 0) {
            while (1) {
              v26 = v21[1];
              if (v26 == v18) {
                v27 = *((unsigned __int8*)v21 + 16);
                v28 = v21[3];
                if ((v27 & 1) == 0) {
                  v28 = v27 >> 1;
                }
                if (v28 == v15) {
                  v29 = (v27 & 1) != 0 ? v21[4] : (__int64)v21 + 17;
                  result = memcmp_alt1(v29, v14, v15);
                  if ((_DWORD)result == 0) {
                    goto LABEL_93;
                  }
                }
              }
              else if ((v26 & v19) != v2) {
                goto LABEL_52;
              }
              v21 = (__int64*)*v21;
              if (v21 == nullptr) {
                goto LABEL_52;
              }
            }
          }
          do {
            v22 = v21[1];
            if (v22 == v18) {
              v23 = *((unsigned __int8*)v21 + 16);
              v24 = v21[3];
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v15) {
                v25 = (v23 & 1) != 0 ? v21[4] : (__int64)v21 + 17;
                result = memcmp_alt1(v25, v14, v15);
                if ((_DWORD)result == 0) {
                  goto LABEL_93;
                }
              }
            }
            else {
              if (v22 >= v17) {
                v22 %= v17;
              }
              if (v22 != v2) {
                break;
              }
            }
            v21 = (__int64*)*v21;
          } while (v21 != nullptr);
        }
      }
    }
  LABEL_52:
    v30 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v31 = *(_BYTE*)(a1 + 1200);
    v32 = v30;
    *v30 = 0;
    v30[1] = v18;
    if ((v31 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v30 + 2, *(_QWORD*)(a1 + 1216),
                                         *(_QWORD*)(a1 + 1208));
    }
    else {
      v33 = *(_QWORD*)(a1 + 1208);
      v30[2] = *(_QWORD*)(a1 + 1200);
      v30[3] = v33;
      v30[4] = *(_QWORD*)(a1 + 1216);
    }
    v34 = *(_QWORD*)(a1 + 1272);
    v35 = *(float*)(a1 + 1280);
    v32[10] = 0;
    v36 = (float)(unsigned __int64)(v34 + 1);
    if (v17 == 0 || (float)(v35 * (float)v17) < v36) {
      v37 = v17 < 3 || (v17 & (v17 - 1)) != 0;
      v38 = v37 | (2 * v17);
      v39 = vcvtps_u64_f32(v36 / v35);
      if (v38 <= v39) {
        primeEm = v39;
      }
      else {
        primeEm = v38;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime_alt1(primeEm);
      }
      v41 = *(_QWORD*)(a1 + 1256);
      if (primeEm > v41) {
        goto LABEL_68;
      }
      if (primeEm < v41) {
        v42 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 1272) /
                             *(float*)(a1 + 1280));
        if (v41 < 3 || (v41 & (v41 - 1)) != 0) {
          v42 = std___1___next_prime_alt1(v42);
        }
        else {
          v43 = 1LL << (-(char)__clz(v42 - 1) & 63);
          if (v42 >= 2) {
            v42 = v43;
          }
        }
        if (primeEm <= v42) {
          primeEm = v42;
        }
        if (primeEm < v41) {
        LABEL_68:
          GameRoutine_68cb20((__int64*)(a1 + 1248), primeEm);
        }
      }
      v17 = *(_QWORD*)(a1 + 1256);
      if ((v17 & (v17 - 1)) != 0) {
        if (v18 >= v17) {
          v2 = v18 % v17;
        }
        else {
          v2 = v18;
        }
      }
      else {
        v2 = (v17 - 1) & v18;
      }
    }
    v44 = *v9;
    v45 = *(_QWORD**)(*v9 + 8 * v2);
    if (v45 != nullptr) {
      *(_QWORD*)v32 = *v45;
      *v45 = v32;
    }
    else {
      v46 = *(_QWORD*)(a1 + 1264);
      *(_QWORD*)(a1 + 1264) = v32;
      *(_QWORD*)v32 = v46;
      *(_QWORD*)(v44 + 8 * v2) = a1 + 1264;
      if (*(_QWORD*)v32 != 0) {
        v47 = *(_QWORD*)(*(_QWORD*)v32 + 8LL);
        if ((v17 & (v17 - 1)) != 0) {
          if (v47 >= v17) {
            v47 %= v17;
          }
        }
        else {
          v47 &= v17 - 1;
        }
        *(_QWORD*)(*v9 + 8 * v47) = v32;
      }
    }
    result = 0;
    ++*(_QWORD*)(a1 + 1272);
  }
LABEL_93:
  if ((v50_.v50[0] & 1) != 0 && v50_.v51 != nullptr) {
    v48 = result;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, (__int64)v50_.v51);
    return v48;
  }
  return result;
}

void Seq_1132180(__int64 a1, const char* a2)
{
  __int64* v4;
  _DWORD* v5;
  int v6;
  bool v7;
  bool v8;
  _BYTE* v9;
  _BOOL4 v10;
  char* v11;
  _BYTE* v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64** v17;
  bool v18;
  int v19;
  bool v20;
  __int64 v21;
  int v22;
  const char* v23;
  char* v24;
  __int64 v25;
  int v26;
  const char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  struct {
    __int64 v34[2];
    const char* v35;
  } v34_;
  struct {
    _QWORD v36[2];
    char* v37;
  } v36_;
  struct {
    __int64 v38[2];
    _BYTE* v39;
  } v38_;
  struct {
    __int64 v40[2];
    _BYTE* v41;
  } v40_;
  struct {
    __int64 v42[2];
    char* v43;
    __int64* v44;
    unsigned __int64 v45;
    unsigned __int64 v46;
    unsigned __int64 v47;
    int v48;
    int v49;
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
  } v42_;

  v4 = msg_MessageManager_instance__ptr[0];
  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v5 = *(_DWORD**)(a1 + 1136);
  }
  else {
    v5 = (_DWORD*)(a1 + 1121);
  }
  if ((Manager_a51640(*msg_MessageManager_instance__ptr[0], (__int64)a2, v5) &
       1) != 0) {
    v6 = GameRoutine_a51280_alt3(*v4, (__int64)a2);
    v7 = v6 == 0 || v6 == 21;
    if (v7 ||
        ((unsigned int)(v6 - 13) < 4 ? (v18 = v6 - 13 == *(_DWORD*)(a1 + 1300))
                                     : (v18 = false),
         !v18 ? (v19 = 0) : (v19 = 1),
         (unsigned int)(v6 - 5) >= 8 ? (v20 = v19 == 0) : (v20 = false),
         !v20)) {
      v42_.v42[1] = 0;
      v42_.v43 = nullptr;
      v40_.v41 = nullptr;
      v42_.v42[0] = 0;
      v8 = v6 == 0 || v6 == 21;
      v40_.v40[0] = 0;
      v40_.v40[1] = 0;
      v38_.v38[1] = 0;
      v38_.v39 = nullptr;
      v36_.v37 = nullptr;
      v38_.v38[0] = 0;
      v36_.v36[0] = 0;
      v36_.v36[1] = 0;
      if (v8 || ((unsigned int)(v6 - 13) <= 3
                     ? (v33 = v6 - 13 == *(_DWORD*)(a1 + 1300))
                     : (v33 = false),
                 v33)) {
        fs_a501f0((void*)(v42_.v42), *v4, (__int64)a2);
        fs_a503b0((void*)(v40_.v40), *v4, (__int64)a2);
        Manager_a50570((void*)(v38_.v38), *v4, (__int64)a2);
        GameRoutine_a50740((void*)(v36_.v36), *v4, (__int64)a2);
        v9 = v38_.v39;
        v10 = (v38_.v38[0] & 1) == 0;
        if ((v42_.v42[0] & 1) != 0) {
          v11 = v42_.v43;
        }
        else {
          v11 = (char*)v42_.v42 + 1;
        }
        if ((v40_.v40[0] & 1) != 0) {
          v12 = v40_.v41;
        }
        else {
          v12 = (char*)v40_.v40 + 1;
        }
      }
      else {
        if ((unsigned int)(v6 - 5) <= 7) {
          LOWORD(v42_.v42[0]) = 0;
          LOWORD(v40_.v40[0]) = 0;
          LOWORD(v38_.v38[0]) = 0;
        }
        v9 = nullptr;
        v10 = true;
        v11 = (char*)v42_.v42 + 1;
        v12 = (char*)v40_.v40 + 1;
      }
      Seq_1131360((void*)(v34_.v34), (__int64)v11, v12);
      v13 = *v4;
      v42_.v50 = -1;
      v42_.v51 = -1;
      v42_.v52 = -1;
      v42_.v53 = -1;
      v42_.v54 = -1;
      v42_.v55 = -1;
      v42_.v56 = -1;
      v42_.v57 = -1;
      v42_.v58 = -1;
      v42_.v59 = -1;
      v42_.v60 = -1;
      v42_.v61 = -1;
      v42_.v44 = GameData_212e348 + 2;
      v42_.v45 = 0xFFFF0001FFFF0000LL;
      v42_.v46 = 0xFFFF0004FFFF0002LL;
      v42_.v47 = 0xFFFF0006FFFF0005LL;
      v42_.v62 = 8;
      v42_.v48 = -65529;
      v42_.v49 = -65528;
      v14 = GameRoutine_a4dbe0_alt2(v13, a2, 0);
      if ((v42_.v42[0] & 1) != 0) {
        v15 = v42_.v43;
      }
      else {
        v15 = (char*)v42_.v42 + 1;
      }
      if (v10) {
        v9 = (char*)v38_.v38 + 1;
      }
      v16 = GameData_22336e0;
      if (GameData_22336e0 != 0) {
        v16 = Seq_1149f10(GameData_22336e0, v15);
        v17 = (__int64**)v16;
      }
      else {
        v17 = nullptr;
      }
      v21 = GameHr_112e3e0(v16, v15, v17, v9);
      if (v21 != 0) {
        v22 = *(unsigned __int16*)(v21 + 16);
      }
      else {
        v22 = -1;
      }
      if ((v42_.v42[0] & 1) != 0) {
        v23 = v42_.v43;
      }
      else {
        v23 = (char*)v42_.v42 + 1;
      }
      if ((v36_.v36[0] & 1) != 0) {
        v24 = v36_.v37;
      }
      else {
        v24 = (char*)v36_.v36 + 1;
      }
      v25 = Seq_1131620_alt2(a1, v23, (__int64)v24);
      if (v25 != 0) {
        v26 = *(unsigned __int16*)(v25 + 16);
      }
      else {
        v26 = -1;
      }
      if ((v34_.v34[0] & 1) != 0) {
        v27 = v34_.v35;
      }
      else {
        v27 = (char*)v34_.v34 + 1;
      }
      game_talk_112ff80(*(_QWORD*)GameData_212d8b8[0], a2, v27, v14, v22, v26);
      if ((v34_.v34[0] & 1) != 0 && v34_.v35 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v34_.v35);
      }
      if ((v36_.v36[0] & 1) != 0 && v36_.v37 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v36_.v37);
      }
      if ((v38_.v38[0] & 1) != 0 && v38_.v39 != nullptr) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v38_.v39);
      }
      if ((v40_.v40[0] & 1) != 0 && v40_.v41 != nullptr) {
        v31 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v40_.v41);
      }
      if ((v42_.v42[0] & 1) != 0 && v42_.v43 != nullptr) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v42_.v43);
      }
    }
  }
}

__int64* Seq_1132580(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)result[1];
  v3 = result[2];
  v4 = result;
  if ((unsigned __int64)v2 >= v3) {
    v8 = *result;
    v9 = (__int64)v2 - *result;
    v10 = 1 - 0x5555555555555555LL * (v9 >> 3);
    if (v10 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1138d60();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x555555555555555LL) {
      v13 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(result);
      }
      v14 = a2;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v13, 16, 0);
      a2 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = (_QWORD*)(v15 + v9);
    v17 = v15 + 24 * v13;
    v18 = a2[1];
    v7 = v15 + v9 + 24;
    *v16 = *a2;
    v16[1] = v18;
    v16[2] = a2[2];
    result = (__int64*)memcpy(v15, v8, v9);
    *v4 = v15;
    v4[1] = v7;
    v4[2] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v19 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19, v8);
    }
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v7 = (__int64)(v2 + 3);
    v2[1] = a2[1];
    v2[2] = v6;
    *v2 = v5;
  }
  v4[1] = v7;
  return result;
}

__attribute__((swiftcall)) void Seq_11326e0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8 v2;
  __int64 v4;
  __int64* v6;
  bool v8;
  bool v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  __int64 v32;
  signed __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  bool v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  const char* v50;
  const char* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  const char* v73;
  const char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  _QWORD* v83;
  _QWORD* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  __int64* v89;
  __int64 v90;
  bool v91;
  bool v92;
  unsigned __int64 v93;
  bool v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v105;
  __int64 v106;
  struct {
    __int64 v107;
    __int64 v108;
  } v107_;
  struct {
    __int64 v109[2];
    __int64 v110;
  } v109_;
  struct {
    _QWORD v111[2];
    char* v112;
  } v111_;
  struct {
    __int64 (**v113)();
    __int64* v114;
    __int64 v115;
    char gap104_[8];
    __int64 (***v116)();
  } v113_;

  v2 = *(_BYTE*)(a1 + 1144);
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = *(_QWORD*)(a1 + 1152);
  if ((v2 & 1) == 0) {
    v4 = v2 >> 1;
  }
  if (v4 != 20) {
    goto LABEL_28;
  }
  if ((v2 & 1) != 0) {
    v6 = *(__int64**)(a1 + 1160);
  }
  else {
    v6 = (__int64*)(a1 + 1145);
  }
  v8 = *v6 == 0x313156455F44494DLL && v6[1] == 0x31306D5F3432305FLL &&
       *((_DWORD*)v6 + 4) == 959590495;
  if (v8 ||
      (*v6 == 0x333156455F44494DLL ? (v9 = v6[1] == 0x31306D5F3530305FLL)
                                   : (v9 = false),
       v9 ? (v10 = *((_DWORD*)v6 + 4) == 892547167) : (v10 = false), v10)) {
    v17 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    *(_QWORD*)v17 = &GameData_1adba82;
    *(_QWORD*)(v17 + 8) = &GameData_1a98e31;
    v16 = (_QWORD*)(v17 + 16);
  }
  else {
    v11 = *v6;
    v12 = v6[1];
    v13 = *((_DWORD*)v6 + 4);
    if (v11 != 0x313156455F44494DLL || v12 != 0x31306D5F3631305FLL ||
        v13 != 875769951) {
    LABEL_28:
      v16 = nullptr;
      v17 = 0;
      goto LABEL_30;
    }
    v82 = (__int64*)fw_memory_g_heap_manager_ptr;
    v83 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    *v83 = &GameData_1ac302b;
    v83[1] = &GameData_1af1f6d;
    v84 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v82, 32, 16, 0);
    v85 = v83[1];
    v17 = (__int64)v84;
    v16 = v84 + 3;
    *v84 = *v83;
    v86 = *v82;
    v84[1] = v85;
    v84[2] = &GameData_1a9210e;
    v87 = 128;
    if (*(_QWORD*)(v86 + 200) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(v86 + v87, (__int64)v83);
  }
LABEL_30:
  v106 = v17;
  v18 = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    if (v16 != (_QWORD*)v17) {
      while (1) {
        v20 = *(_QWORD*)v17;
        v21 = strlen_alt1(*(const char**)v17);
        if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0_alt1();
        }
        v22 = v21;
        if (v21 >= 0x17) {
          if ((v21 | 7) == 0x17) {
            v24 = 26;
          }
          else {
            v24 = (v21 | 7) + 1;
          }
          v23 = (char*)fw_memory_HeapManager_Allocate_alt1(
              fw_memory_g_heap_manager, v24, 16, 0);
          v111_.v111[1] = v22;
          v111_.v112 = v23;
          v111_.v111[0] = v24 | 1;
        }
        else {
          v23 = (char*)v111_.v111 + 1;
          LOBYTE(v111_.v111[0]) = 2 * v21;
          if (v21 == 0) {
            goto LABEL_45;
          }
        }
        memmove_alt1((__int64)v23, v20, v22);
      LABEL_45:
        v25 = GameData_22336e0;
        v23[v22] = 0;
        if (v25 != 0 &&
            (v26 = GameRoutine_1152360((_QWORD*)(v25 + 560),
                                       (unsigned __int8*)v111_.v111)) !=
                nullptr &&
            (v27 = v26[5]) != 0) {
          v28 = *(_QWORD*)(v27 + 152);
          if ((v111_.v111[0] & 1) != 0) {
            goto LABEL_51;
          }
        }
        else {
          v28 = 0;
          if ((v111_.v111[0] & 1) != 0) {
          LABEL_51:
            if (v111_.v112 != nullptr) {
              v29 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v29 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                  (__int64)v111_.v112);
            }
          }
        }
        if (v28 != 0) {
          v31 = (_QWORD*)a2[1];
          v30 = a2[2];
          if ((unsigned __int64)v31 < v30) {
            *v31 = v28;
            v19 = (__int64)(v31 + 1);
          }
          else {
            v32 = *a2;
            v33 = (signed __int64)v31 - *a2;
            v34 = (v33 >> 3) + 1;
            if (v34 >> 61 != 0) {
              GameRoutine_a89030();
            }
            v35 = v30 - v32;
            if (v35 >> 2 > v34) {
              v34 = v35 >> 2;
            }
            if ((unsigned __int64)v35 >= 0x7FFFFFFFFFFFFFF8LL) {
              v36 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v36 = v34;
            }
            if (v36 != 0) {
              if (v36 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v37 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v36, 16, 0);
            }
            else {
              v37 = 0;
            }
            v38 = v37 + 8 * v36;
            v39 = v37 + v33 - 8 * (v33 >> 3);
            *(_QWORD*)(v37 + v33) = v28;
            v19 = v37 + v33 + 8;
            memcpy_alt1(v39, v32, v33);
            *a2 = v39;
            a2[2] = v38;
            if (v32 != 0) {
              v40 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v40 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v32);
            }
          }
          a2[1] = v19;
        }
        v17 += 8;
        if ((_QWORD*)v17 == v16) {
          goto LABEL_183;
        }
      }
    }
    if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v109_.v109, *(_QWORD*)(a1 + 1216),
                                         *(_QWORD*)(a1 + 1208));
      v18 = GameData_22336e0;
      if (GameData_22336e0 == 0) {
        goto LABEL_165;
      }
    }
    else {
      v75 = *(_QWORD*)(a1 + 1208);
      v76 = *(_QWORD*)(a1 + 1216);
      v109_.v109[0] = *(_QWORD*)(a1 + 1200);
      v109_.v109[1] = v75;
      v109_.v110 = v76;
    }
    v78 =
        GameRoutine_1152360((_QWORD*)(v18 + 560), (unsigned __int8*)v109_.v109);
    if (v78 != nullptr) {
      v79 = v78[5];
      if (v79 != 0) {
        v80 = *(_QWORD*)(v79 + 152);
        if ((v109_.v109[0] & 1) == 0) {
          goto LABEL_170;
        }
        goto LABEL_166;
      }
    }
  LABEL_165:
    v80 = 0;
    if ((v109_.v109[0] & 1) != 0) {
    LABEL_166:
      if (v109_.v110 != 0) {
        v81 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v81 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, v109_.v110);
      }
    }
  LABEL_170:
    if (v80 == 0) {
      goto LABEL_183;
    }
    goto LABEL_182;
  }
  if (GameData_21ec7b0 != 0) {
    v41 = 0;
    while (1) {
      v42 = GameData_21ec7b0 + 24 * v41;
      v43 = *(_QWORD*)(v42 + 32);
      if (v43 == 0) {
        goto LABEL_74;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                                memory_order_relaxed);
      v44 = *(_QWORD*)(v42 + 40);
      v45 = *(_QWORD*)(v43 + 8) == -1 || v44 == 0;
      if (v45 || (v46 = *(_QWORD*)(v44 + 80)) == 0 ||
          (*(_QWORD*)(v46 + 8) != -1 ? (v47 = *(_QWORD*)(v44 + 88) == 0)
                                     : (v47 = true),
           v47 || *(_QWORD*)(v43 + 8) == -1)) {
        std___1___shared_weak_count___release_weak_alt2(v43);
        goto LABEL_74;
      }
      std___1___shared_weak_count___release_weak_alt2(v43);
      v48 = *(_QWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) +
                       96LL * *(int*)(v44 + 96) + 256);
      if (v48 == 0) {
        goto LABEL_74;
      }
      v49 = *(_QWORD*)(v48 + 392);
      if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
        v50 = *(const char**)(a1 + 1216);
      }
      else {
        v50 = (const char*)(a1 + 1201);
      }
      if (v49 != 0) {
        v51 = *(const char**)(v49 + 8);
      }
      else {
        v51 = nullptr;
      }
      if (strcmp_alt1(v50, v51) == 0) {
        v101 = *(_QWORD*)(v44 + 80);
        if (v101 != 0) {
          v102 = *(_QWORD*)(v101 + 8);
          v103 = *(_QWORD*)(v44 + 88);
          if (v102 != -1 && v103 != 0) {
            goto LABEL_215;
          }
        }
        goto LABEL_183;
      }
      v52 = game_HashString_alt1((__int64)v50);
      if (v52 == 0) {
        v57 = (__int64)v51;
        v58 = 0;
        goto LABEL_117;
      }
      v53 = *(_QWORD*)(*GameData_212c890[0] + 96);
      if (v53 != 0 && *(_QWORD*)(*GameData_212c890[0] + 112) != 0) {
        v55 = v53 - 1;
        if ((v53 & (v53 - 1)) != 0) {
          v56 = v52;
          if (v52 >= v53) {
            v56 = v52 % v53;
          }
        }
        else {
          v56 = v55 & v52;
        }
        v59 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v56);
        if (v59 != nullptr) {
          v60 = (_QWORD*)*v59;
          if (v60 != nullptr) {
            if ((v53 & v55) == 0) {
              v57 = (__int64)v51;
              while (1) {
                v67 = v60[1];
                if (v67 == v52) {
                  if (v60[2] == v52) {
                    goto LABEL_153;
                  }
                }
                else if ((v67 & v55) != v56) {
                  goto LABEL_116;
                }
                v60 = (_QWORD*)*v60;
                v58 = 0;
                if (v60 == nullptr) {
                  goto LABEL_117;
                }
              }
            }
            do {
              v61 = v60[1];
              if (v61 == v52) {
                if (v60[2] == v52) {
                  v57 = (__int64)v51;
                LABEL_153:
                  v58 = v60[3];
                  goto LABEL_117;
                }
              }
              else {
                if (v61 >= v53) {
                  v61 %= v53;
                }
                if (v61 != v56) {
                  break;
                }
              }
              v60 = (_QWORD*)*v60;
            } while (v60 != nullptr);
          }
        }
      }
      v57 = (__int64)v51;
    LABEL_116:
      v58 = 0;
    LABEL_117:
      v62 = game_HashString_alt1(v57);
      if (v62 == 0) {
        goto LABEL_74;
      }
      v63 = *(_QWORD*)(GameData_21c99c8 + 96);
      if (v63 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
        goto LABEL_74;
      }
      v65 = v63 - 1;
      if ((v63 & (v63 - 1)) != 0) {
        v66 = v62;
        if (v62 >= v63) {
          v66 = v62 % v63;
        }
      }
      else {
        v66 = v65 & v62;
      }
      v68 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v66);
      if (v68 == nullptr) {
        goto LABEL_74;
      }
      v69 = (_QWORD*)*v68;
      if (v69 == nullptr) {
        goto LABEL_74;
      }
      if ((v63 & v65) == 0) {
        while (1) {
          v71 = v69[1];
          if (v71 == v62) {
            if (v69[2] == v62) {
              goto LABEL_147;
            }
          }
          else if ((v71 & v65) != v66) {
            goto LABEL_74;
          }
          v69 = (_QWORD*)*v69;
          if (v69 == nullptr) {
            goto LABEL_74;
          }
        }
      }
      while (1) {
        v70 = v69[1];
        if (v70 == v62) {
          break;
        }
        if (v70 >= v63) {
          v70 %= v63;
        }
        if (v70 != v66) {
          goto LABEL_74;
        }
      LABEL_136:
        v69 = (_QWORD*)*v69;
        if (v69 == nullptr) {
          goto LABEL_74;
        }
      }
      if (v69[2] != v62) {
        goto LABEL_136;
      }
    LABEL_147:
      if (v58 != 0) {
        v72 = v69[3];
        if (v72 != 0) {
          v73 = *(const char**)(v58 + 32);
          if (v73 != nullptr) {
            v74 = *(const char**)(v72 + 32);
            if (v74 != nullptr && strcmp_alt1(v73, v74) == 0) {
              v105 = *(_QWORD*)(v44 + 80);
              if (v105 == 0) {
                goto LABEL_183;
              }
              if (*(_QWORD*)(v105 + 8) == -1) {
                goto LABEL_183;
              }
              v103 = *(_QWORD*)(v44 + 88);
              if (v103 == 0) {
                goto LABEL_183;
              }
            LABEL_215:
              v80 = *(_QWORD*)(v103 + 8);
            LABEL_182:
              v89 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              *a2 = (__int64)v89;
              *v89++ = v80;
              a2[1] = (__int64)v89;
              a2[2] = (__int64)v89;
              goto LABEL_183;
            }
          }
        }
      }
    LABEL_74:
      if (++v41 == 4) {
        goto LABEL_183;
      }
    }
  }
  if (GameData_2203490 != 0) {
    v107_.v107 = 0;
    v113_.v113 = GameData_1fecb18;
    v113_.v114 = &v107_.v107;
    v113_.v115 = a1 + 1200;
    v113_.v116 = &v113_.v113;
    CmdbtlPartyNatives_e9a800((_QWORD*)GameData_2203490, (__int64)&v113_.v113);
    if (v113_.v116 == &v113_.v113) {
      v77 = 4;
    }
    else {
      if (v113_.v116 == nullptr) {
        goto LABEL_181;
      }
      v77 = 5;
    }
    ((__int64 (*)(__int64))(*v113_.v116)[v77])((__int64)v113_.v116);
  LABEL_181:
    v80 = v107_.v107;
    if (v107_.v107 == 0) {
      goto LABEL_183;
    }
    goto LABEL_182;
  }
  if (GameData_21f4000 != 0) {
    v88 = SceneManager_138e2c0(GameData_21f4000, (unsigned __int8*)(a1 + 1200));
    if (v88 != nullptr) {
      v80 = v88[1];
      if (v80 != 0) {
        goto LABEL_182;
      }
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    v91 = GameData_21f3d10 == 0 ||
          *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0;
    v92 = !v91 && (signed __int32)*(_DWORD*)(game_hub_ProcHubSeqView_instance_ +
                                             232) <= 0;
    if (v92 && (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      v93 = *(unsigned __int8*)(a1 + 1200);
      v94 = (v93 & 1) == 0;
      v95 = v93 >> 1;
      if (v94) {
        v96 = a1 + 1201;
      }
      else {
        v96 = *(_QWORD*)(a1 + 1216);
      }
      if (v94) {
        v97 = v95;
      }
      else {
        v97 = *(_QWORD*)(a1 + 1208);
      }
      Hub_119acc0((void*)(&v107_.v107), a1 + 536, v96, v97);
      v98 = v107_.v108;
      v113_.v113 = nullptr;
      v113_.v114 = nullptr;
      if (v107_.v108 != 0) {
        v113_.v114 =
            (__int64*)std___1___shared_weak_count_lock_alt1(v107_.v108);
        if (v113_.v114 != nullptr) {
          v99 = v107_.v107;
          v113_.v113 = (__int64 (**)(void))v107_.v107;
          std___1___shared_weak_count___release_weak_alt2(v98);
          if (v99 != 0) {
            v100 = *(_QWORD*)(*(_QWORD*)(v99 + 24) + 8LL);
            if (*(_BYTE*)(v100 + 145) == 1) {
              v107_.v107 = HubCharacterNatives_cf7940(v100);
              if (v107_.v107 != 0) {
                GameRoutine_11330a0(a2, &v107_.v107);
              }
            }
          }
        }
        else {
          std___1___shared_weak_count___release_weak_alt2(v98);
        }
      }
      GameRoutine_a32b10_alt1((__int64)&v113_.v113);
    }
  }
LABEL_183:
  if (v106 != 0) {
    v90 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v90 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v90, v106);
  }
}

void Seq_11331c0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  atomic_uchar* v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14[3];
    char gap48_[24];
    _QWORD* v15;
  } v14_;

  Seq_11326e0((void*)(v14_.v14), a1);
  v2 = (_QWORD*)v14_.v14[0];
  v3 = v14_.v14[1];
  if (v14_.v14[0] != v14_.v14[1]) {
    v4 = (atomic_uchar*)GameData_212fa30;
    v5 = GameData_212fa28;
    do {
      v6 = *v2;
      if (*v2 != 0) {
        if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
          v14_.v15 = v2;
          v12 = v6;
          v13 = v3;
          v10 = __cxa_guard_acquire_alt1((__int64)GameData_212fa30);
          v6 = v12;
          v3 = v13;
          v5 = GameData_212fa28;
          v2 = v14_.v15;
          v4 = (atomic_uchar*)GameData_212fa30;
          if (v10 != 0) {
            *GameData_212fa28 =
                wld_Crc32_alt1(0, "CharacterFacialController", 0x19u);
            __cxa_guard_release_alt1((__int64)GameData_212fa30);
            v6 = v12;
            v3 = v13;
            v5 = GameData_212fa28;
            v4 = (atomic_uchar*)GameData_212fa30;
            v2 = v14_.v15;
          }
        }
        v7 = *(_QWORD*)(v6 + 512);
        v8 = v7;
        do {
          v9 = *(_DWORD*)(v8 - 16);
          v8 -= 16;
          v7 -= 16;
        } while (v9 != *v5);
        *(_DWORD*)(*(_QWORD*)(v7 + 8) + 340LL) = 0;
      }
      ++v2;
    } while (v2 != (_QWORD*)v3);
    v2 = (_QWORD*)v14_.v14[0];
  }
  *(_QWORD*)(a1 + 1288) = 3212836864LL;
  if (v2 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v2);
  }
}

__int64 Seq_1133320(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  float v6;

  v1 = game_ProcGameSkipView_instance_;
  if (*(_BYTE*)(result + 205) == 1) {
    if (game_ProcGameSkipView_instance_ != 0) {
      v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v2 & 0x10) == 0) {
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v2 & 0xFFFFFFEE;
        result = GameRoutine_8224a0(25);
        if (game_GameModeData_instance_ != 0 &&
            (result = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0) {
          v3 = *(_DWORD*)(v1 + 156);
          if (*(_DWORD*)(result + 32) == 1) {
            if ((v3 & 4) != 0) {
              return result;
            }
            v4 = v3 | 4;
            goto LABEL_15;
          }
        }
        else {
          v3 = *(_DWORD*)(v1 + 156);
        }
        if ((v3 & 4) == 0) {
          return result;
        }
        v4 = v3 & 0xFFFFFFFB;
        goto LABEL_15;
      }
    }
  }
  else if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v5 & 0x10) == 0) {
      v4 = v5 & 0xFFFFFFE2 | 1;
    LABEL_15:
      v6 = *(float*)(v1 + 224);
      *(_DWORD*)(v1 + 156) = v4;
      if (v6 > 0.0) {
        *(_DWORD*)(v1 + 224) = 0;
      }
    }
  }
  return result;
}

void Seq_11333e0(__int64 a1)
{

#pragma clang fp contract(off)
  char* v2;
  __int64* v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  _DWORD* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  _BYTE* v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  __int64* v43;
  __int64 v44;
  int v45;
  unsigned int v46;
  __int64 v47;
  int v48;
  float v49;
  float v50;
  struct {
    __int64 v51;
    __int64 v52;
    _BYTE* v53;
  } v51_;

  if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
    v2 = *(char**)(a1 + 1136);
  }
  else {
    v2 = (char*)(a1 + 1121);
  }
  if (strncmp_alt1(v2, "MID_", 4u) != 0) {
    goto LABEL_5;
  }
  v3 = msg_MessageManager_instance__ptr[0];
  v4 = (__int64*)Registration_a4f6c0(*msg_MessageManager_instance__ptr[0],
                                     (__int64)v2);
  v5 = *(unsigned __int8*)v4;
  v6 = (v5 & 1) != 0 ? v4[1] : v5 >> 1;
  if (v6 == 0) {
    goto LABEL_5;
  }
  v7 = (_QWORD*)(a1 + 1096);
  if ((__int64*)(a1 + 1096) != v4) {
    if ((*(_BYTE*)v7 & 1) != 0) {
      if ((v5 & 1) != 0) {
        v10 = v4[2];
      }
      else {
        v10 = (__int64)v4 + 1;
      }
      SpineModel_64dde0((__int64*)(a1 + 1096), v10, v6);
    }
    else if ((v5 & 1) != 0) {
      GameRoutine_64df20_alt1((_QWORD*)(a1 + 1096), v4[2], v4[1]);
    }
    else {
      v8 = *v4;
      v9 = v4[2];
      *(_QWORD*)(a1 + 1104) = v4[1];
      *(_QWORD*)(a1 + 1112) = v9;
      *v7 = v8;
    }
  }
  v11 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112) : a1 + 1097;
  v12 = Registration_a4fa80(*v3, v11, (__int64)v2);
  *(_DWORD*)(a1 + 1168) = v12;
  if (v12 < 0) {
    goto LABEL_5;
  }
  v13 = GameRoutine_a51280_alt1(*v3, v2);
  if ((unsigned int)(v13 - 1) <= 2) {
    v14 = *(_DWORD*)(a1 + 200);
    goto LABEL_26;
  }
  if (v13 != 0) {
  LABEL_5:
    if ((*(_WORD*)(a1 + 136) & 1) == 0) {
      ProcInst_657a50(a1, 1);
    }
    return;
  }
  v15 = (_DWORD*)(a1 + 200);
  v14 = *(_DWORD*)(a1 + 200);
  if (v14 == 0) {
    *v15 = 1;
    goto LABEL_27;
  }
LABEL_26:
  v15 = (_DWORD*)(a1 + 200);
  if ((unsigned int)(v14 - 1) <= 1) {
  LABEL_27:
    Manager_a51640(*v3, (__int64)v2, v2);
  }
  GameHr_11de9c0();
  if ((unsigned int)(*v15 - 1) < 2) {
    goto LABEL_77;
  }
  v16 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112) : a1 + 1097;
  v17 = Registration_a4fa80(*v3, v16, (__int64)v2);
  v18 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112) : a1 + 1097;
  v19 = (__int64*)Registration_a4f800_alt1(*v3, v18, v17 + 1);
  if ((*(_BYTE*)v19 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v51_.v51, v19[2], v19[1]);
  }
  else {
    v20 = *v19;
    v21 = v19[2];
    v51_.v52 = v19[1];
    v51_.v53 = (_BYTE*)v21;
    v51_.v51 = v20;
  }
  v22 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112) : a1 + 1097;
  if ((Seq_11311f0_alt1(a1, v22, v17 + 1) & 1) != 0) {
    v23 = 1;
  }
  else {
    v24 = v17 + 2;
    do {
      if ((v51_.v51 & 1) != 0) {
        v31 = v51_.v53;
      }
      else {
        v31 = (char*)&v51_.v51 + 1;
      }
      v32 = GameRoutine_a51280_alt1(*v3, v31);
      v33 = ((unsigned int)(v32 - 9) < 0xC) & (0x80Fu >> (v32 - 9));
      if (v33 != 0) {
        break;
      }
      if ((*(_BYTE*)(a1 + 1096) & 1) != 0) {
        v34 = *(_QWORD*)(a1 + 1112);
      }
      else {
        v34 = a1 + 1097;
      }
      v35 = (__int64*)Registration_a4f800_alt1(*v3, v34, v24);
      if (&v51_.v51 != v35) {
        v36 = *(unsigned __int8*)v35;
        if ((v51_.v51 & 1) != 0) {
          v25 = (v36 & 1) == 0;
          v26 = v36 >> 1;
          if (v25) {
            v27 = (__int64)v35 + 1;
          }
          else {
            v27 = v35[2];
          }
          if (v25) {
            v28 = v26;
          }
          else {
            v28 = v35[1];
          }
          SpineModel_64dde0(&v51_.v51, v27, v28);
        }
        else if ((v36 & 1) != 0) {
          GameRoutine_64df20_alt1(&v51_.v51, v35[2], v35[1]);
        }
        else {
          v37 = *v35;
          v38 = v35[2];
          v51_.v52 = v35[1];
          v51_.v53 = (_BYTE*)v38;
          v51_.v51 = v37;
        }
      }
      v29 = v24;
      v30 = (*(_BYTE*)(a1 + 1096) & 1) != 0 ? *(_QWORD*)(a1 + 1112) : a1 + 1097;
      ++v24;
    } while ((Seq_11311f0_alt1(a1, v30, v29) & 1) == 0);
    v23 = v33 ^ 1;
  }
  if ((v51_.v51 & 1) != 0 && v51_.v53 != nullptr) {
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, (__int64)v51_.v53);
  }
  if (v23 != 0) {
  LABEL_77:
    *(_BYTE*)(a1 + 206) = 0;
  }
  v40 = *(_DWORD*)(a1 + 200);
  *(_BYTE*)(a1 + 205) = v40 != 2;
  if (GameData_21fa5e0 != 0) {
    *(_BYTE*)(a1 + 205) = 1;
  }
  else if (v40 == 2) {
    v47 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v48 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v48 & 0x10) == 0) {
        v49 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            v48 & 0xFFFFFFE2 | 1;
        if (v49 > 0x0.0p+0f) {
          *(_DWORD*)(v47 + 224) = 0;
        }
      }
    }
    goto LABEL_97;
  }
  v41 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    goto LABEL_97;
  }
  v42 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
  if ((v42 & 0x10) != 0) {
    goto LABEL_97;
  }
  *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v42 & 0xFFFFFFEE;
  v43 = game_8224a0(0x19u);
  if (game_GameModeData_instance_ != 0 &&
      (v44 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v43)) != 0) {
    v45 = *(_DWORD*)(v41 + 156);
    if (*(_DWORD*)(v44 + 32) == 1) {
      if ((v45 & 4) == 0) {
        v46 = v45 | 4;
        goto LABEL_95;
      }
      goto LABEL_97;
    }
  }
  else {
    v45 = *(_DWORD*)(v41 + 156);
  }
  if ((v45 & 4) != 0) {
    v46 = v45 & 0xFFFFFFFB;
  LABEL_95:
    v50 = *(float*)(v41 + 224);
    *(_DWORD*)(v41 + 156) = v46;
    if (v50 > 0x0.0p+0f) {
      *(_DWORD*)(v41 + 224) = 0;
    }
  }
LABEL_97:
  GameRoutine_60a020_alt2(a1 + 1144, v2);
  GameRoutine_1139a00_alt1((_QWORD*)(a1 + 400));
  GameRoutine_1197100_alt1((_QWORD*)(a1 + 536));
  *(_BYTE*)(a1 + 776) = 0;
  GameHr_f86840((_QWORD*)(a1 + 784));
  if ((*(_BYTE*)(a1 + 1092) & 1) == 0) {
    GameRoutine_1553130_alt1(19);
    *(_DWORD*)(a1 + 1088) = 19;
    *(_BYTE*)(a1 + 1092) = 1;
  }
}

__int64 Seq_1133880(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  struct {
    __int64 v5;
    __int64 v6;
  } v5_;

  if (*(_BYTE*)(a1 + 1092) == 1) {
    GameRoutine_1553220_alt1(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  if (GameData_21ec7b8 != 0 && game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  result = game_1196e60((_QWORD*)(a1 + 536));
  if (GameData_21fa5e0 == 0) {
    if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
      v3 = *(_QWORD*)(a1 + 1136);
    }
    else {
      v3 = a1 + 1121;
    }
    v5_.v6 = v3;
    v5_.v5 = game_HashString_alt1(v3);
    if (game_GameModeData_instance_ != 0) {
      GameHr_82dd50(game_GameModeData_instance_ + 40,
                    (unsigned __int64*)&v5_.v5, 1);
    }
    if ((*(_BYTE*)(a1 + 1120) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 1136);
    }
    else {
      v4 = a1 + 1121;
    }
    v5_.v6 = v4;
    v5_.v5 = game_HashString_alt1(v4);
    return GameRoutine_9e6800_alt1((unsigned int*)&v5_.v5);
  }
  return result;
}

void Seq_Unknown3_1133970(__int64 a1, double a2, double a3, long double a4)
{

#pragma clang fp contract(off)
  float v5;
  float v6;
  bool v7;
  bool v8;
  float v9;

  LODWORD(a2) = *(_DWORD*)(a1 + 1288);
  if (*(float*)&a2 >= 0x0.0p+0f) {
    v5 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    v6 = v5 * 0x1.119ce00000000p-6f;
    v7 = v5 == 0x0.0p+0f;
    v8 = v5 < 0x0.0p+0f;
    v9 = 0x1.0b33320000000p+4f;
    *(float*)&a4 = v6 * 0x1.f400000000000p+9f;
    if (!v8 && !v7) {
      v9 = *(float*)&a4;
    }
    *(float*)&a2 = *(float*)&a2 + v9;
    LODWORD(a3) = *(_DWORD*)(a1 + 1292);
    *(_DWORD*)(a1 + 1288) = LODWORD(a2);
    if (*(float*)&a2 >= *(float*)&a3) {
      *(_QWORD*)&a2 = LANES128_OF(Seq_11331c0_alt1(a1)).n128_u64[0];
    }
  }
  game_113f060(a1 + 216, a2, a3, a4);
  GameRoutine_113d8b0(a1 + 216);
}

void Seq_1133a20(__int64 a1)
{
  __int64 v2;
  float v3;
  __int64 v4;
  float (**v5)(__int64);
  float v6;
  float v7;
  float v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_6;
  }
  v2 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  v3 = *(float*)(v2 + 252);
  if (v3 == *(float*)(v2 + 248)) {
    goto LABEL_6;
  }
  v5 = *(float (***)(__int64))(v2 + 240);
  v4 = v2 + 240;
  v6 = (*v5)(v4);
  v7 = *(float*)(v4 + 8);
  v8 = v3 + v6;
  if (v7 < v8) {
    v8 = *(float*)(v4 + 8);
  }
  if (v8 == v7) {
  LABEL_6:
    v9 = *(unsigned __int8**)(a1 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      v11 = v10 > 0x10;
      v12 = (1 << v10) & 0x1CE00;
      if (!v11 && v12 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

__int64 Seq_1133ad0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  v1 = *(unsigned __int8**)(result + 16);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = v2 > 0x10;
    v4 = (1 << v2) & 0x1CE00;
    if (!v3 && v4 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

__int64 Seq_1133c40(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v3 = 2)
               : (v3 = 3),
           (v3 & v2) == 0) ||
      ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                        (__int64)"In", 1)) &
       1) == 0 &&
          ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                            (__int64)"FaceIn", 1)) &
           1) == 0) {
    v4 = *(unsigned __int8**)(v1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1133d20(__int64 result)
{
  int v1;
  __int64 v2;

  if (GameData_22336e0 != 0) {
    v1 = 2;
  }
  else {
    v1 = 0;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

void Seq_1133d80(__int64 a1)
{
  char v1;
  const char* v2;
  __int64* v4;
  const char* v5;
  __int64 v6;
  char* v7;
  int v8;
  char* v9;
  const char* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BOOL4 v17;
  __int64* v18;
  const char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  struct {
    __int64* v26;
    unsigned __int64 v27;
    __int64 v28;
    unsigned __int64 v29;
    unsigned __int64 v30;
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
  } v26_;

  v1 = *(_BYTE*)(a1 + 1144);
  v2 = *(const char**)(a1 + 1160);
  v26_.v31 = -1;
  v26_.v32 = -1;
  v26_.v33 = -1;
  v26_.v34 = -1;
  v4 = msg_MessageManager_instance__ptr[0];
  v26_.v35 = -1;
  v26_.v36 = -1;
  v26_.v37 = -1;
  v26_.v38 = -1;
  if ((v1 & 1) != 0) {
    v5 = v2;
  }
  else {
    v5 = (const char*)(a1 + 1145);
  }
  v6 = *msg_MessageManager_instance__ptr[0];
  v26_.v39 = -1;
  v26_.v40 = -1;
  v26_.v41 = -1;
  v26_.v42 = -1;
  v26_.v26 = GameData_212e348 + 2;
  v26_.v27 = 0xFFFF0001FFFF0000LL;
  v26_.v28 = 0xFFFF0004FFFF0002LL;
  v26_.v29 = 0xFFFF0006FFFF0005LL;
  v26_.v43 = 8;
  v26_.v30 = 0xFFFF0008FFFF0007LL;
  v7 = GameRoutine_a4dbe0_alt2(v6, v5, 0);
  *(_BYTE*)(a1 + 204) = 0;
  v8 = (unsigned __int8)*v7;
  *(_BYTE*)(a1 + 204) = *v7 == 0;
  if (v8 != 0) {
    v25 = nullptr;
    v9 = v7;
    v26_.v28 = -1;
    v26_.v29 = -1;
    v26_.v30 = -1;
    v26_.v31 = -1;
    v26_.v32 = -1;
    v26_.v33 = -1;
    v26_.v34 = -1;
    v26_.v35 = -1;
    v26_.v36 = -1;
    v26_.v37 = -1;
    v26_.v38 = -1;
    v26_.v39 = -1;
    v26_.v40 = -1;
    v26_.v41 = -1;
    v26_.v26 = GameData_2132270 + 2;
    v26_.v27 = -256;
    v26_.v42 = -1;
    v26_.v43 = 1;
    TextSelector_19063a0((void*)(&v24), (__int64*)&v25, (__int64)v7, 0,
                         (__int64)&v26_.v26, 0);
    v10 = v25;
    GameRoutine_60a020_alt2(a1 + 1176, v25);
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v10);
    v12 = (__int64*)msg_MessageManager_empty_text__ptr;
    v13 = (__int64)*msg_MessageManager_empty_text__ptr;
    if (*msg_MessageManager_empty_text__ptr != nullptr) {
      v14 = ui_LayoutAccessor_FindTextBox(game_talk_g_window_layout_ptr[0],
                                          (__int64)"T_Message");
      if (v14 != 0) {
        GameRoutine_156c5d0(v14, v13, 0);
      }
      v15 = *v12;
      if (*v12 != 0) {
        v16 = ui_LayoutAccessor_FindTextBox(game_talk_g_window_layout_ptr[0],
                                            (__int64)"T_Message_3");
        if (v16 != 0) {
          GameRoutine_156c5d0(v16, v15, 0);
        }
      }
    }
    v17 = GameRoutine_16046b0() || (int)TextSelector_1907f20(v9) > 2;
    v18 = game_talk_g_window_layout_ptr[0];
    ui_LayoutAccessor_SetPaneVisible_alt1(
        (__int64)game_talk_g_window_layout_ptr[0], (__int64)"T_Message", !v17);
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v18, (__int64)"T_Message_3",
                                          v17);
    if (v17) {
      v19 = "T_Message_3";
    }
    else {
      v19 = "T_Message";
    }
    GameRoutine_60a020_alt2(a1 + 240, v19);
    if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
      v20 = *(_QWORD*)(a1 + 256);
    }
    else {
      v20 = a1 + 241;
    }
    v21 = ui_LayoutAccessor_FindTextBox(v18, v20);
    if (v21 != 0) {
      GameRoutine_156c5d0(v21, (__int64)v9, 1);
    }
  }
  if (*GameData_212fc38[0] == 0) {
    Manager_a4fd20((void*)((__int64*)&v26_.v26), *v4 + 15176, (__int64)v5,
                   (__int64)"Still", 0);
    game_113dca0(a1 + 216, a1, (unsigned __int8*)&v26_.v26);
    if (((unsigned __int8)v26_.v26 & 1) != 0 && v26_.v28 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v26_.v28);
    }
  }
  game_113af40(a1 + 400, v5);
  Hub_1199e20(a1 + 536, v5);
  GameRoutine_a51060((void*)(&v26_.v26), *v4, (__int64)v5);
  game_112d580((char*)&v26_.v26, a1 + 728, a1 + 752);
  if (((unsigned __int8)v26_.v26 & 1) != 0 && v26_.v28 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v26_.v28);
  }
  GameHr_f87180(a1 + 784, v5);
  game_1489b40((unsigned __int8*)(a1 + 944), v5);
  if ((*(_BYTE*)(a1 + 204) & 1) == 0) {
    Seq_1132180(a1, v5);
  }
}

_QWORD* Seq_1134340(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;

  if ((*((_BYTE*)result + 204) & 1) == 0 &&
      (GameData_21ec7b8 == 0 || (*(_BYTE*)(GameData_21ec7b8 + 288) & 1) == 0)) {
    v1 = result[12];
    v2 = result[13];
    v3 = ((v2 - v1) << 6) - 1;
    if (v2 == v1) {
      v3 = 0;
    }
    v4 = result[16] + result[15];
    if (v3 == v4) {
      v5 = result;
      GameRoutine_658d60(result + 11);
      v1 = v5[12];
      result = v5;
      v4 = v5[16] + v5[15];
    }
    *(_QWORD*)(*(_QWORD*)(v1 + 8 * (v4 >> 9)) + 8 * (v4 & 0x1FF)) = result[2];
    ++result[16];
    v6 = result[1];
    if (v6 != 0) {
      while (1) {
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == 4) {
            result[2] = v6;
            *((_WORD*)result + 68) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          return result;
        }
        v6 += 64;
      }
    }
  }
  return result;
}

void Seq_1134430(__int64 a1)
{
  char* v2;
  _BYTE* v3;
  char v4;
  __int64 v5;
  _BYTE* v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  _BYTE* v12;
  __int64 v13;
  __int64** v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  unsigned int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _BYTE* v25;
  char v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v29[2];
    _BYTE* v30;
  } v29_;
  struct {
    __int64 v31[2];
    const char* v32;
  } v31_;

  if ((*(_BYTE*)(a1 + 204) & 1) == 0) {
    v2 = (char*)(a1 + 1201);
    v3 = (_BYTE*)(a1 + 1225);
    v4 = *(_BYTE*)(a1 + 1224);
    if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
      v5 = *(_QWORD*)(a1 + 1216);
    }
    else {
      v5 = a1 + 1201;
    }
    if ((v4 & 1) != 0) {
      v6 = *(_BYTE**)(a1 + 1240);
    }
    else {
      v6 = v3;
    }
    Seq_1131360((void*)(v31_.v31), v5, v6);
    if ((v31_.v31[0] & 1) != 0) {
      v7 = v31_.v32;
    }
    else {
      v7 = (char*)v31_.v31 + 1;
    }
    GameRoutine_60a020_alt2(a1 + 216, v7);
    if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 232);
    }
    else {
      v8 = a1 + 217;
    }
    if (v8 != 0) {
      v9 = ui_LayoutAccessor_FindTextBox(game_talk_g_window_layout_ptr[0],
                                         (__int64)"T_Txt");
      if (v9 != 0) {
        GameRoutine_156c5d0(v9, v8, 0);
      }
    }
    if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
      v10 = *(_QWORD*)(a1 + 1160);
    }
    else {
      v10 = a1 + 1145;
    }
    if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
      v11 = *(char**)(a1 + 1216);
    }
    else {
      v11 = v2;
    }
    Manager_a50570((void*)(v29_.v29), *msg_MessageManager_instance__ptr[0],
                   v10);
    if ((v29_.v29[0] & 1) != 0) {
      v12 = v29_.v30;
    }
    else {
      v12 = (char*)v29_.v29 + 1;
    }
    v13 = *GameData_212fc38[0];
    if (*GameData_212fc38[0] != 0) {
      v13 = Seq_1149f10(v13, v11);
      v14 = (__int64**)v13;
    }
    else {
      v14 = nullptr;
    }
    v15 = GameHr_112e3e0(v13, v11, v14, v12);
    if ((v29_.v29[0] & 1) != 0 && v29_.v30 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v29_.v30);
    }
    if ((*(_BYTE*)(a1 + 1200) & 1) != 0) {
      v17 = *(const char**)(a1 + 1216);
    }
    else {
      v17 = v2;
    }
    v18 = Seq_1131cc0(a1, v17);
    if (*GameData_212d460[0] != 0 &&
            (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) != 0 ||
        game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v19 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v20 = 2)
             : (v20 = 3),
         (v20 & v19) != 0)) {
      if (*(_QWORD*)(a1 + 392) == v15) {
        if ((v18 & 0x80000000) == 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(*GameData_212cbb8[0] + 64) + 8LL * v18);
          if (v28 != 0) {
            GameRoutine_112f900((_QWORD*)(a1 + 312), v28, 0);
          }
        }
      }
      else {
        v21 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
        v22 = GameData_212c608[0];
        *(_QWORD*)(v21 + 88) = 0;
        *(_QWORD*)(v21 + 96) = 0;
        *(_QWORD*)(v21 + 104) = 0;
        *(_QWORD*)(v21 + 112) = 0;
        *(_QWORD*)(v21 + 120) = 0;
        *(_QWORD*)(v21 + 128) = 0;
        *(_WORD*)(v21 + 136) = 0;
        *(_QWORD*)(v21 + 16) = 0;
        *(_QWORD*)(v21 + 24) = "NULL";
        *(_QWORD*)(v21 + 32) = 0;
        v23 = (_QWORD*)(v21 + 32);
        *(_QWORD*)(v21 + 138) = 0;
        *(_QWORD*)(v21 + 144) = 0;
        *(_QWORD*)(v21 + 40) = 0;
        *(_QWORD*)(v21 + 48) = 0;
        *(_QWORD*)(v21 + 56) = 0;
        *(_QWORD*)(v21 + 64) = 0;
        *(_QWORD*)(v21 + 72) = 0;
        *(_QWORD*)(v21 + 80) = 0;
        *(_QWORD*)v21 = v22 + 16;
        *(_QWORD*)(v21 + 8) = 0;
        game_ProcInst_Register_alt1(v21);
        *(_QWORD*)(v21 + 152) = a1 + 216;
        *(_QWORD*)(v21 + 160) = v15;
        *(_DWORD*)(v21 + 168) = v18;
        *(_QWORD*)v21 = game_talk_ProcFaceChange_vtable;
        v24 = *(_QWORD*)(a1 + 40);
        if (v24 != 0) {
          *(_QWORD*)(v24 + 48) = v21;
          *(_QWORD*)(v21 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v21;
        *(_QWORD*)(v21 + 24) = "talk::ProcFaceChange";
        *(_QWORD*)(v21 + 32) = a1;
        *(_DWORD*)(v21 + 140) =
            (unsigned int)game_HashString32_alt1("talk::ProcFaceChange");
        *(_QWORD*)(v21 + 64) = 0;
        *(_QWORD*)(v21 + 72) = 24;
        *(_QWORD*)(v21 + 80) = 1;
        *(_QWORD*)(v21 + 8) = &GameData_216dc68;
        *(_QWORD*)(v21 + 16) = &GameData_216dc68;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v21 + 136LL))(v21) & 1) != 0 &&
            (*(_WORD*)(v21 + 136) & 0x100) == 0) {
          *(_WORD*)(v21 + 136) |= 0x100u;
        }
        v25 = (_BYTE*)*v23;
        v26 = *(_BYTE*)(*v23 + 138LL);
        if (v26 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v25 + 64LL))(*v23);
          v26 = v25[138];
        }
        v25[138] = v26 + 1;
        *(_WORD*)(v21 + 136) |= 2u;
      }
    }
    if ((v31_.v31[0] & 1) != 0 && v31_.v32 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v31_.v32);
    }
  }
}

void Seq_11347c0(__int64 a1)
{
  const char* v2;
  int v3;
  unsigned __int64 v4;
  int v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v13;
  __int64 v14;
  atomic_uchar* v15;
  int* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int* v22;
  int v23;
  char v24;
  char v25;
  _BYTE* v26;
  _BYTE* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  unsigned __int8* v31;
  float v32;
  int v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  struct {
    __int64 v39;
    int v40;
  } v39_;
  __int64 v41[2];
  __int64 v42[3];

  if ((*(_BYTE*)(a1 + 204) & 1) == 0) {
    GameHr_113bfb0(a1 + 400);
    if ((*(_BYTE*)(a1 + 1144) & 1) != 0) {
      v2 = *(const char**)(a1 + 1160);
    }
    else {
      v2 = (const char*)(a1 + 1145);
    }
    v3 = Manager_a50ce0_alt1(*msg_MessageManager_instance__ptr[0], v2);
    v4 = *(unsigned __int8*)(a1 + 424);
    v5 = v3;
    v6 = (v4 & 1) == 0;
    v7 = v4 >> 1;
    if (v6) {
      v8 = a1 + 425;
    }
    else {
      v8 = *(_QWORD*)(a1 + 440);
    }
    if (!v6) {
      v7 = *(_QWORD*)(a1 + 432);
    }
    if (v7 >= 5) {
      v9 = v8 + v7;
      v10 = v8;
      while (1) {
        v11 = memchr_alt1(v10, 95, v7 - 4);
        if (v11 == 0) {
          goto LABEL_31;
        }
        if (*(_DWORD*)v11 == *(_DWORD*)"_PTV_" &&
            *(unsigned __int8*)(v11 + 4) ==
                (unsigned __int8)GameData_1aad589[4]) {
          break;
        }
        v10 = v11 + 1;
        v7 = v9 - v10;
        if (v9 - v10 < 5) {
          goto LABEL_31;
        }
      }
      if (v11 == v9 || v11 - v8 == -1) {
        goto LABEL_31;
      }
      Seq_11326e0((void*)(v42), a1);
      v13 = (_QWORD*)v42[0];
      v14 = v42[1];
      if (v42[0] != v42[1]) {
        v15 = (atomic_uchar*)GameData_212fa30;
        v16 = GameData_212fa28;
        do {
          v17 = *v13;
          if (*v13 != 0) {
            if ((atomic_load_explicit(v15, memory_order_acquire) & 1) == 0) {
              v21 = (__int64)v15;
              v37 = v14;
              v38 = v13;
              v22 = v16;
              v23 = __cxa_guard_acquire_alt1((__int64)v15);
              v14 = v37;
              v13 = v38;
              v16 = v22;
              v15 = (atomic_uchar*)v21;
              if (v23 != 0) {
                *v22 = wld_Crc32_alt1(0, "CharacterFacialController", 0x19u);
                __cxa_guard_release_alt1(v21);
                v14 = v37;
                v13 = v38;
                v16 = v22;
                v15 = (atomic_uchar*)v21;
              }
            }
            v18 = *(_QWORD*)(v17 + 512);
            v19 = v18;
            do {
              v20 = *(_DWORD*)(v19 - 16);
              v19 -= 16;
              v18 -= 16;
            } while (v20 != *v16);
            *(_DWORD*)(*(_QWORD*)(v18 + 8) + 340LL) = 1065353216;
          }
          ++v13;
        } while (v13 != (_QWORD*)v14);
      }
      v25 = *(_BYTE*)(a1 + 1176);
      v26 = *(_BYTE**)(a1 + 1192);
      *(_DWORD*)(a1 + 1288) = 0;
      if ((v25 & 1) != 0) {
        v27 = v26;
      }
      else {
        v27 = (_BYTE*)(a1 + 1177);
      }
      v28 = **(_QWORD**)GameData_212eb78[0];
      if (v28 != 0) {
        v29 = *(_QWORD*)(v28 + 16);
        if (*v27 != 0) {
          goto LABEL_42;
        }
      }
      else {
        v29 = 0;
        if (*v27 != 0) {
        LABEL_42:
          v30 = 0x0.0p+0f;
          v31 = v27 + 1;
          do {
            v32 = (float)(*(int (**)(__int64))(*(_QWORD*)v29 + 128LL))(v29);
            v33 = *v31++;
            v30 = v30 + v32;
          } while (v33 != 0);
          goto LABEL_47;
        }
      }
      v30 = 0x0.0p+0f;
    LABEL_47:
      v34 = (float)(v30 * 0x1.0000000000000p-1f) + 0x1.7700000000000p+9f;
      if (v5 != 0) {
        v34 = v34 * 0x1.8000000000000p-1f;
        if (v5 != 1) {
          v34 = 0x0.0p+0f;
        }
      }
      v35 = v42[0];
      *(float*)(a1 + 1292) = v34;
      if (v35 != 0) {
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v35);
      }
      return;
    }
  LABEL_31:
    v24 = snd_fnd_WeakHandle_isValid_alt1(v41);
    if (v5 != 2 && (v24 & 1) != 0 &&
        (*GameData_212d460[0] == 0 ||
         (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 8) == 0)) {
      v39_.v39 = 0;
      v39_.v40 = 0x2000;
      GameRoutine_112180_alt1((__int64)&v39_.v39, (__int64)v41);
      Seq_1134ae0(a1, (__int64)&v39_.v39);
    }
  }
}

void Seq_1134ae0(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  atomic_uchar* v5;
  int* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  struct {
    __int64 v14[3];
    char gap32_[24];
    __int64 v15;
  } v14_;

  Seq_11326e0((void*)(v14_.v14), a1);
  v3 = (__int64*)v14_.v14[0];
  v4 = v14_.v14[1];
  if (v14_.v14[0] != v14_.v14[1]) {
    v5 = (atomic_uchar*)GameData_212fa30;
    v6 = GameData_212fa28;
    do {
      v7 = *v3;
      if (*v3 != 0) {
        if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0) {
          v14_.v15 = v7;
          v12 = __cxa_guard_acquire_alt1((__int64)v5);
          v7 = v14_.v15;
          if (v12 != 0) {
            *v6 = wld_Crc32_alt1(0, "CharacterFacialController", 0x19u);
            __cxa_guard_release_alt1((__int64)v5);
            v7 = v14_.v15;
          }
        }
        v8 = *(_QWORD*)(v7 + 512);
        v9 = v8;
        do {
          v10 = *(_DWORD*)(v9 - 16);
          v9 -= 16;
          v8 -= 16;
        } while (v10 != *v6);
        v11 = *(_QWORD*)(v8 + 8);
        if (*(_DWORD*)(v11 + 96) <= 1u) {
          GameRoutine_112180_alt1(v11 + 320, a2);
          GameRoutine_a19f00_alt1(v11 + 272, v11 + 320);
        }
      }
      ++v3;
    } while (v3 != (__int64*)v4);
    v3 = (__int64*)v14_.v14[0];
  }
  if (v3 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v3);
  }
}

void game_talk_Seq_BindFaceEyeBlinkSync(__int64 a1)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 explicit;
  int* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned __int8* v36;
  unsigned int v37;
  int v38;
  int v39;
  unsigned __int8* v40;
  unsigned int v41;
  int v42;
  int v44;
  int v45;
  int v46;
  struct {
    _QWORD v47[4];
    _QWORD* v48;
  } v47_;
  __int64 v49[3];
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;

  if (*(_BYTE*)(a1 + 204) == 1) {
    v1 = *(unsigned __int8**)(a1 + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
    return;
  }
  if ((LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0], (__int64)"In",
                              1) &
       1) != 0 ||
      (LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                              (__int64)"FaceIn", 1) &
       1) != 0 ||
      (LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0], (__int64)"Out",
                              1) &
       1) != 0 ||
      (LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                              (__int64)"FaceOut", 1) &
       1) != 0 ||
      (GameRoutine_112f060((__int64*)(a1 + 312)) & 1) != 0 ||
      (LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0], (__int64)"In",
                              1) &
       1) != 0 ||
      (LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                              (__int64)"FaceIn", 1) &
       1) != 0 ||
      (LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0], (__int64)"Out",
                              1) &
       1) != 0 ||
      (LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                              (__int64)"FaceOut", 1) &
       1) != 0) {
    return;
  }
  v7 = a1;
  if ((*(_BYTE*)(a1 + 207) & 1) == 0) {
    Seq_11326e0((void*)(v49), a1);
    v8 = v49[0];
    if (v49[0] == v49[1]) {
      v7 = a1;
    }
    else {
      v9 = *(_QWORD*)v49[0];
      v7 = a1;
      *(_QWORD*)(a1 + 208) = *(_QWORD*)v49[0];
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                      memory_order_acquire);
      v11 = GameData_212deb0;
      if ((explicit & 1) == 0) {
        v46 = __cxa_guard_acquire_alt1((__int64)GameData_212deb8);
        v7 = a1;
        if (v46 != 0) {
          *v11 = wld_Crc32_alt1(0, "CharacterBuilder", 0x10u);
          __cxa_guard_release_alt1((__int64)GameData_212deb8);
          v7 = a1;
        }
      }
      v12 = *(_QWORD*)(v9 + 512);
      v13 = v12;
      while (v13 != *(_QWORD*)(v9 + 504)) {
        v14 = *(_DWORD*)(v13 - 16);
        v13 -= 16;
        v12 -= 16;
        if (v14 == *v11) {
          if (*(_QWORD*)(v9 + 512) == v12) {
            break;
          }
          v15 = *(_QWORD*)(v12 + 8);
          if (v15 == 0) {
            break;
          }
          v16 = *(_QWORD*)(v15 + 120);
          v17 = *(_QWORD*)(v7 + 184);
          v18 = *(_QWORD*)(v7 + 192);
          if (v18 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                      memory_order_relaxed);
            v47_.v47[0] = GameData_2011b20;
            v47_.v47[1] = a1;
            v50_.v50 = v17;
            v50_.v51 = v18;
            v47_.v48 = v47_.v47;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                      memory_order_relaxed);
          }
          else {
            v47_.v47[0] = GameData_2011b20;
            v47_.v47[1] = a1;
            v50_.v50 = v17;
            v50_.v51 = 0;
            v47_.v48 = v47_.v47;
          }
          v19 = CombatCamera_1098420((_QWORD*)(v16 + 312), &v50_.v50,
                                     (__int64)v47_.v47, 1);
          if (v50_.v51 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v50_.v51);
          }
          v20 = v47_.v48;
          *(_DWORD*)(a1 + 1372) = v19;
          if (v20 == v47_.v47) {
            v21 = 32;
          LABEL_37:
            (*(void (**)(__int64))(*v20 + v21))((__int64)v20);
          }
          else if (v20 != nullptr) {
            v21 = 40;
            goto LABEL_37;
          }
          v7 = a1;
          if (v18 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v18);
            v7 = a1;
          }
          break;
        }
      }
      v8 = v49[0];
    }
    *(_BYTE*)(v7 + 207) = 1;
    if (v8 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v8);
      v7 = a1;
    }
  }
  v23 = GameData_212d460[0];
  v24 = *GameData_212d460[0];
  if (*GameData_212d460[0] == 0) {
    goto LABEL_56;
  }
  v25 = game_g_game_setting_ptr;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 8) != 0) {
    goto LABEL_63;
  }
  v26 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
  if ((v26 & 1) != 0) {
    goto LABEL_63;
  }
  if ((v26 & 2) != 0) {
    v27 = game_g_game_setting_ptr;
    v28 = game_8224a0(0x13u);
    v7 = a1;
    if (game_GameModeData_instance_ != 0) {
      v29 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v28);
      v7 = a1;
      if (v29 != 0 && *(_DWORD*)(v29 + 32) == 1) {
        v24 = *v23;
        v25 = v27;
        if (*v23 == 0) {
          goto LABEL_56;
        }
        goto LABEL_49;
      }
    }
  LABEL_63:
    v30 = game_ProcGameSkipView_instance_;
    v33 = 1024;
    if (game_ProcGameSkipView_instance_ == 0) {
      goto LABEL_78;
    }
    goto LABEL_64;
  }
LABEL_49:
  if (*(_DWORD*)(v24 + 200) != 2 &&
      (*(_BYTE*)(*(_QWORD*)v25 + 953LL) & 0x10) != 0) {
    goto LABEL_63;
  }
LABEL_56:
  v30 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    v33 = 3;
    goto LABEL_78;
  }
  if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v31 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v32 = (v31 & 8) != 0 ? 2 : 3;
    if ((v32 & v31) == 0) {
      goto LABEL_63;
    }
  }
  v33 = 3;
LABEL_64:
  if (*(_BYTE*)(v30 + 152) == 3) {
    v34 = *(_DWORD*)(v30 + 156);
    v35 = (v34 & 8) != 0 ? 2 : 3;
    if ((v35 & v34) == 0) {
      if (*v23 != 0 && *(_BYTE*)(*v23 + 206) == 1) {
        GameRoutine_113dc10(a1 + 216, v33);
        v7 = a1;
      }
      v36 = *(unsigned __int8**)(v7 + 16);
      if (v36 != nullptr) {
        v37 = *v36;
        if (v37 <= 0x10 && ((1 << v37) & 0x1CE00) != 0) {
          *(_WORD*)(v7 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v7 + 136) |= 8u;
      return;
    }
  }
LABEL_78:
  if (GameRoutine_113dc10(v7 + 216, v33)) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v38 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v39 = 2)
             : (v39 = 3),
         (v39 & v38) != 0)) {
      v40 = *(unsigned __int8**)(a1 + 16);
      if (v40 != nullptr) {
        v41 = *v40;
        v3 = v41 > 0x10;
        v42 = (1 << v41) & 0x1CE00;
        if (!v3 && v42 != 0) {
          *(_WORD*)(a1 + 136) |= 0x80u;
        }
      }
      return;
    }
    goto LABEL_92;
  }
  if (game_ProcGameSkipView_instance_ != 0) {
  LABEL_92:
    if ((unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
            1 <=
        2) {
      v44 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v45 = (v44 & 8) != 0 ? 2 : 3;
      if ((v45 & v44) == 0) {
        return;
      }
    }
  }
  Seq_11351f0();
  if (*v23 != 0 && *(_DWORD*)(*v23 + 200) != 2) {
    if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 953LL) & 0x10) != 0) {
      ProcTalkLogMenu_17cfc80(a1, 0);
    }
    else if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 0x40) !=
             0) {
      Seq_1135380(a1);
    }
  }
}

void Seq_11351f0()
{
  __int64* v0;
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char v10;
  __int64* v11;
  const char* v12;

  v0 = GameData_212d460[0];
  if (*GameData_212d460[0] == 0 ||
      *(_DWORD*)(*GameData_212d460[0] + 200) != 2) {
    v1 = game_8224a0(0x13u);
    if (game_GameModeData_instance_ != 0 &&
        (v2 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v1)) != 0 &&
        *(_DWORD*)(v2 + 32) == 1) {
      v3 = game_8224a0(0x13u);
      if (game_GameModeData_instance_ == 0) {
        return;
      }
      v4 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v3);
      if (v4 == 0 || *(_DWORD*)(v4 + 32) != 1 ||
          (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 6) == 0) {
        return;
      }
      v5 = game_8224a0(0x13u);
      v6 = 0;
    }
    else {
      if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 952LL) & 4) == 0) {
        return;
      }
      v5 = game_8224a0(0x13u);
      v6 = 1;
    }
    game_VariableManager_SetFlag_alt1((__int64)v5, v6);
    v7 = *v0;
    if (v7 != 0) {
      v8 = game_8224a0(0x13u);
      v10 = game_GameModeData_instance_ != 0 &&
            (v9 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)v8)) != 0 &&
            *(_DWORD*)(v9 + 32) == 1;
      *(_BYTE*)(v7 + 289) = v10;
      v11 = game_talk_g_window_layout_ptr[0];
      ui_LayoutAccessor_SetPaneVisible_alt1(
          (__int64)game_talk_g_window_layout_ptr[0], (__int64)"N_Auto", v10);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v11, (__int64)"N_Next",
                                            (*(_BYTE*)(v7 + 289) & 1) == 0);
      if (*(_BYTE*)(v7 + 289) != 0) {
        v12 = "Auto";
      }
      else {
        v12 = "Wait";
      }
      GameHr_1562680((__int64)v11, v12, 0x1.0000000000000p+0f);
    }
  }
}

__int64 Seq_1135380(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  _BYTE* v7;
  char v8;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      152, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 32) = 0;
  v4 = (_QWORD*)(v2 + 32);
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register();
  *(_QWORD*)v2 = game_talk_ProcHideUI_vtable;
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 != 0) {
    *(_QWORD*)(v5 + 48) = v2;
    *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v2;
  *(_QWORD*)(v2 + 24) = "talk::ProcHideUI";
  *(_QWORD*)(v2 + 32) = a1;
  *(_DWORD*)(v2 + 140) = game_HashString32("talk::ProcHideUI");
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 24;
  *(_QWORD*)(v2 + 80) = 1;
  *(_QWORD*)(v2 + 8) = &GameData_216f3a8;
  *(_QWORD*)(v2 + 16) = &GameData_216f3a8;
  (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2);
  if ((result & 1) != 0 && (*(_WORD*)(v2 + 136) & 0x100) == 0) {
    *(_WORD*)(v2 + 136) |= 0x100u;
  }
  v7 = (_BYTE*)*v4;
  v8 = *(_BYTE*)(*v4 + 138LL);
  if (v8 == 0) {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*v4);
    v8 = v7[138];
  }
  v7[138] = v8 + 1;
  *(_WORD*)(v2 + 136) |= 2u;
  return result;
}

__int64 Seq_11354e0(__int64 result)
{
  __int64 v1;
  char v2;
  int v3;
  int v4;
  _BYTE* v5;
  __int64 v6;
  __int64 v7;
  float v8;
  unsigned __int8* v9;
  float v10;
  int v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _BYTE* v16;
  char v17;
  __int64* v18;

  v1 = result;
  v2 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if ((unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
            1 >
        2) {
      goto LABEL_8;
    }
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 8) != 0) {
      v4 = 2;
    }
    else {
      v4 = 3;
    }
    v2 = (v4 & v3) == 0;
  }
  if ((v2 & 1) != 0) {
    return result;
  }
LABEL_8:
  if ((*(_BYTE*)(result + 204) & 1) != 0) {
    return result;
  }
  if ((*(_BYTE*)(result + 1176) & 1) != 0) {
    v5 = *(_BYTE**)(result + 1192);
  }
  else {
    v5 = (_BYTE*)(result + 1177);
  }
  v6 = **(_QWORD**)GameData_212eb78[0];
  if (v6 != 0) {
    v7 = *(_QWORD*)(v6 + 16);
    if (*v5 != 0) {
      goto LABEL_14;
    }
  }
  else {
    v7 = 0;
    if (*v5 != 0) {
    LABEL_14:
      v8 = 0x0.0p+0f;
      v9 = v5 + 1;
      do {
        v10 = (float)(*(int (**)(__int64))(*(_QWORD*)v7 + 128LL))(v7);
        v11 = *v9++;
        v8 = v8 + v10;
      } while (v11 != 0);
      goto LABEL_20;
    }
  }
  v8 = 0x0.0p+0f;
LABEL_20:
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
  v13 = GameData_212c608[0];
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 112) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_WORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = "NULL";
  *(_QWORD*)(v12 + 32) = 0;
  v14 = (_QWORD*)(v12 + 32);
  *(_QWORD*)(v12 + 138) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)v12 = v13 + 16;
  *(_QWORD*)(v12 + 8) = 0;
  game_ProcInst_Register_alt1(v12);
  *(float*)(v12 + 152) =
      (float)(v8 * 0x1.0000000000000p-1f) + 0x1.7700000000000p+9f;
  *(_DWORD*)(v12 + 156) = 0;
  *(_QWORD*)v12 = game_talk_ProcKeyWait_vtable;
  v15 = *(_QWORD*)(v1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v12;
    *(_QWORD*)(v12 + 56) = *(_QWORD*)(v1 + 40);
  }
  *(_QWORD*)(v1 + 40) = v12;
  *(_QWORD*)(v12 + 24) = "talk::ProcKeyWait";
  *(_QWORD*)(v12 + 32) = v1;
  *(_DWORD*)(v12 + 140) =
      (unsigned int)game_HashString32_alt1("talk::ProcKeyWait");
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 24;
  *(_QWORD*)(v12 + 80) = 1;
  *(_QWORD*)(v12 + 8) = &GameData_216f168;
  *(_QWORD*)(v12 + 16) = &GameData_216f168;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12) & 1) != 0 &&
      (*(_WORD*)(v12 + 136) & 0x100) == 0) {
    *(_WORD*)(v12 + 136) |= 0x100u;
  }
  v16 = (_BYTE*)*v14;
  v17 = *(_BYTE*)(*v14 + 138LL);
  if (v17 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v16 + 64LL))(*v14);
    v17 = v16[138];
  }
  v16[138] = v17 + 1;
  *(_WORD*)(v12 + 136) |= 2u;
  v18 = game_talk_g_window_layout_ptr[0];
  ui_LayoutAccessor_SetPaneVisible_alt1(
      (__int64)game_talk_g_window_layout_ptr[0], (__int64)"Next", 1);
  return GameHr_1562680((__int64)v18, "Wait", 0x1.0000000000000p+0f);
}

__int64 Seq_1135d20(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;
  __int16 v9;
  unsigned __int8* v10;
  unsigned int v11;
  int v12;
  __int16 v14;
  unsigned __int8* v15;
  unsigned int v16;
  int v17;

  if ((*(_BYTE*)(result + 1072) & 1) == 0) {
    v10 = *(unsigned __int8**)(result + 16);
    if (v10 != nullptr) {
      v11 = *v10;
      v6 = v11 > 0x10;
      v12 = (1 << v11) & 0x1CE00;
      if (!v6 && v12 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    v14 = *(_WORD*)(result + 136);
    goto LABEL_24;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    if ((v2 & v1) == 0) {
      v15 = *(unsigned __int8**)(result + 16);
      if (v15 != nullptr) {
        v16 = *v15;
        v6 = v16 > 0x10;
        v17 = (1 << v16) & 0x1CE00;
        if (!v6 && v17 != 0) {
          *(_WORD*)(result + 136) |= 0x80u;
        }
      }
      v14 = *(_WORD*)(result + 136);
      *(_BYTE*)(result + 1072) = 0;
    LABEL_24:
      *(_WORD*)(result + 136) = v14 | 8;
      return result;
    }
  }
  v3 = result;
  result = GameRoutine_1563280(game_talk_g_window_layout_ptr[0], "Out", 1);
  if ((result & 1) == 0) {
    result =
        GameRoutine_1563280(game_talk_g_window_layout_ptr[0], "FaceOut", 1);
    if ((result & 1) == 0) {
      v4 = *(unsigned __int8**)(v3 + 16);
      if (v4 != nullptr) {
        v5 = *v4;
        v6 = v5 > 0x10;
        v7 = (1 << v5) & 0x1CE00;
        if (!v6 && v7 != 0) {
          *(_WORD*)(v3 + 136) |= 0x80u;
        }
      }
      v9 = *(_WORD*)(v3 + 136);
      *(_BYTE*)(v3 + 1072) = 0;
      *(_WORD*)(v3 + 136) = v9 | 8;
    }
  }
  return result;
}

__int64 Seq_1136ff0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_113b8c0(a1 + 400, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137060(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_113be80(a1 + 400, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11370d0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_119a200(a1 + 536, a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137230(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d750 == 0 ||
      ((result = GameRoutine_135a2e0(result + 728, result + 728)) & 1) != 0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11372b0(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d750 == 0 ||
      ((result = GameRoutine_135a2e0(result + 728, result + 752)) & 1) != 0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137330(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_f87240(a1 + 784);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_11373a0(__int64 a1)
{
  __int64 result;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  result = GameRoutine_f87cd0(a1 + 784);
  if ((result & 1) != 0) {
    v3 = *(unsigned __int8**)(a1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137500(__int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned int v11;
  bool v12;
  int v13;
  _BYTE v15[32];
  _BYTE* v16;

  v1 = result;
  if (*(_QWORD*)GameData_212dce8 != 0) {
    v2 = *(unsigned __int8*)(result + 968);
    v3 = *(_QWORD*)(result + 984);
    v4 = result + 1016;
    v16 = nullptr;
    v5 = (v2 & 1) == 0;
    v6 = v2 >> 1;
    if (v5) {
      v7 = v1 + 969;
    }
    else {
      v7 = v3;
    }
    if (v5) {
      v8 = v6;
    }
    else {
      v8 = *(_QWORD*)(v1 + 976);
    }
    GameRoutine_140bb40(v4, v7, v8, v15);
    result = (__int64)v16;
    if (v16 == v15) {
      v9 = 32;
    }
    else {
      if (v16 == nullptr) {
        goto LABEL_13;
      }
      v9 = 40;
    }
    result = (*(__int64 (**)(void*))(*(_QWORD*)v16 + v9))((void*)v16);
  }

LABEL_13:
  v10 = *(unsigned __int8**)(v1 + 16);
  if (v10 != nullptr) {
    v11 = *v10;
    v12 = v11 > 0x10;
    v13 = (1 << v11) & 0x1CE00;
    if (!v12 && v13 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v1 + 136) |= 8u;
  return result;
}

__int64 Seq_11375e0(__int64 result)
{
  unsigned int v1;
  int v2;
  int v3;
  bool v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  if (game_ProcGameSkipView_instance_ == 0 ||
      (v1 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) - 1) >
          2 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) == 0 ? (v4 = v1 >= 2) : (v4 = true), v4)) {
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 Seq_1137710(__int64 a1)
{
  __int64* v2;
  __int64 result;

  v2 = GameData_212fc38[0];
  result = *GameData_212fc38[0];
  if (*GameData_212fc38[0] != 0) {
    *(_DWORD*)(result + 208) = *(_DWORD*)(a1 + 1168);
    GameRoutine_11511f0();
    return GameRoutine_1151340(*v2);
  }
  return result;
}

__int64 Seq_1137760()
{
  __int64 result;

  result = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    return GameRoutine_11516e0();
  }
  return result;
}

__int64 Seq_1137780(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v1 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    return result;
  }
  v2 = result;
  result = GameRoutine_114ed00(GameData_22336e0);
  if ((result & 1) != 0) {
    return result;
  }
  while (1) {
    do {
      v3 = *(unsigned int*)(v1 + 264);
      v5 = *(_QWORD*)(v1 + 216);
      v4 = *(_QWORD*)(v1 + 224);
      if ((v3 & 0x80000000) != 0 ||
          0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v3 ||
          (v6 = v5 + 160LL * (unsigned int)v3,
           (result = *(_QWORD*)(v6 + 80)) == 0)) {
        v7 = false;
        goto LABEL_10;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 48LL))(
          result, v5 + 160LL * (unsigned int)v3);
      ++*(_DWORD*)(v6 + 144);
    } while ((_DWORD)result == 2);
    if ((_DWORD)result == 3) {
      return result;
    }
    LODWORD(v3) = *(_DWORD*)(v1 + 264);
    v5 = *(_QWORD*)(v1 + 216);
    v4 = *(_QWORD*)(v1 + 224);
    v7 = (_DWORD)result == 1;
  LABEL_10:
    v8 = v3 + 1;
    *(_DWORD*)(v1 + 264) = v8;
    if (0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v8) {
      break;
    }
    if (v7) {
      return result;
    }
  }
  *(_DWORD*)(v1 + 264) = 0;
  v9 = *(unsigned __int8**)(v2 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 Seq_11378c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  int v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v1 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    return result;
  }
  v2 = result;
  result = GameRoutine_114ed00(GameData_22336e0);
  if ((result & 1) != 0) {
    return result;
  }
  while (1) {
    do {
      v3 = *(unsigned int*)(v1 + 264);
      v5 = *(_QWORD*)(v1 + 240);
      v4 = *(_QWORD*)(v1 + 248);
      if ((v3 & 0x80000000) != 0 ||
          0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v3 ||
          (v6 = v5 + 160LL * (unsigned int)v3,
           (result = *(_QWORD*)(v6 + 80)) == 0)) {
        v7 = false;
        goto LABEL_10;
      }
      result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + 48LL))(
          result, v5 + 160LL * (unsigned int)v3);
      ++*(_DWORD*)(v6 + 144);
    } while ((_DWORD)result == 2);
    if ((_DWORD)result == 3) {
      return result;
    }
    LODWORD(v3) = *(_DWORD*)(v1 + 264);
    v5 = *(_QWORD*)(v1 + 240);
    v4 = *(_QWORD*)(v1 + 248);
    v7 = (_DWORD)result == 1;
  LABEL_10:
    v8 = v3 + 1;
    *(_DWORD*)(v1 + 264) = v8;
    if (0xCCCCCCCCCCCCCCCDLL * ((v4 - v5) >> 5) <= v8) {
      break;
    }
    if (v7) {
      return result;
    }
  }
  *(_DWORD*)(v1 + 264) = 0;
  v9 = *(unsigned __int8**)(v2 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

__int64 Seq_1137a00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;

  if ((GameData_21fa5e0 | *GameData_212fc38[0]) == 0) {
    v1 = result;
    if ((*(_BYTE*)(result + 1120) & 1) != 0) {
      v2 = *(_QWORD*)(result + 1136);
    }
    else {
      v2 = result + 1121;
    }
    Seq_1137a80(&v3, v2);
    return GameRoutine_9d57b0(v1, &v3);
  }
  return result;
}

unsigned __int64 Seq_1137a80(_QWORD* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  result = game_HashString(a2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c9fe0 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c9fe0 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c9fe0 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == result) {
                if (v9[2] == result) {
                  goto LABEL_27;
                }
              }
              else if ((v12 & v6) != v7) {
                goto LABEL_25;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_27:
                v11 = v9[3];
                goto LABEL_26;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v11 = 0;

LABEL_26:
  *a1 = v11;
  return result;
}

__int64 Seq_1137ba0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  if (GameData_21fa5e0 != 0) {
    goto LABEL_2;
  }
  v6 = GameData_22336e0;
  if (GameData_22336e0 != 0) {
    v7 = *(_QWORD*)(result + 1344);
    v8 = *(_QWORD*)(result + 1352);
    v9 = v8 - v7;
    if (v8 == v7) {
      *(_QWORD*)(GameData_22336e0 + 712) = *(_QWORD*)(GameData_22336e0 + 704);
    }
    else {
      if (0xAAAAAAAAAAAAAAABLL * (v9 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_1138d60_alt1();
      }
      v10 = result;
      v11 = fw_memory_g_heap_manager_ptr;
      v12 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
      memcpy_alt1(v12, v7, v9);
      v13 = (_QWORD*)v12;
      *(_QWORD*)(v6 + 712) = *(_QWORD*)(v6 + 704);
      do {
        Seq_1132580_alt1((__int64*)(v6 + 704), v13);
        v13 += 3;
        v9 -= 24;
      } while (v9 != 0);
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v11 + v14, v12);
      result = v10;
    }
    goto LABEL_2;
  }
  v15 = *(_QWORD*)(result + 1344);
  v16 = *(int*)(result + 1368);
  if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(result + 1352) - v15) >> 3) <= v16) {
  LABEL_2:
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    return result;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    LODWORD(v16) = *(_DWORD*)(result + 1368);
    v15 = *(_QWORD*)(result + 1344);
  }
  v17 = result;
  result = game_telop_TelopRelianceLvUp_CreateBind(
      result, *(_QWORD*)(v15 + 24LL * (int)v16),
      *(_QWORD*)(v15 + 24LL * (int)v16 + 8),
      *(_BYTE*)(v15 + 24LL * (int)v16 + 16),
      *(_BYTE*)(v15 + 24LL * (int)v16 + 17));
  ++*(_DWORD*)(v17 + 1368);
  return result;
}

__int64 Seq_1137d60(__int64 result)
{
  __int64 v1;

  if ((GameData_21fa5e0 | *GameData_212fc38[0]) == 0) {
    v1 = result;
    result = *(_QWORD*)GameData_212c7b0[0];
    if (*(_QWORD*)GameData_212c7b0[0] != 0) {
      return GameSubquestData_125d800(result, v1);
    }
  }
  return result;
}

__int64 Seq_Unknown4_1137da0()
{
  if (GameData_21cd128 != 0) {
    MapInfo_824f10();
  }
  if (GameData_22190b8 != 0) {
    *(_BYTE*)(GameData_22190b8 + 32) = 0;
    (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 32LL))(
        GameData_221b2e8);
    (*(void (**)(__int64))(*(_QWORD*)GameData_22197d8 + 32LL))(
        GameData_22197d8);
  }
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  return GameRoutine_8679c0();
}

__int64 Seq_Unknown5_1137e30()
{
  __int64 result;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (GameData_21cd128 != 0) {
    result = GameRoutine_824ca0();
  }
  if (GameData_22190b8 != 0 &&
      (GameData_21ec7b0 == 0 || (v1 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
       (*(_BYTE*)(v1 + 115) & 0x10) == 0) &&
      (*(_BYTE*)(GameData_22190b8 + 124) & 1) == 0) {
    *(_BYTE*)(GameData_22190b8 + 32) = 1;
    (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 24LL))(
        GameData_221b2e8);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 24LL))(
        GameData_22197d8);
  }
  v2 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v7 = v5 == v6;
    v8 = v3 - 1 + v4;
    v9 = v8 >> 7;
    v10 = v8 & 0x7F;
    v11 = 16 * (v5 - v6) - 1;
    v12 = *(_QWORD*)(v6 + 8 * v9);
    if (v7) {
      v11 = 0;
    }
    v13 = v12 + 32 * v10;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v13 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v2[21] = *(_QWORD*)(v13 + 24);
    v14 = *(_QWORD*)(v13 + 16);
    v2[27] = v3 - 1;
    v2[20] = v14;
    if ((unsigned __int64)(v11 - (v3 + v4) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v15 = *(_QWORD*)(v5 - 8);
      if (v15 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
        v5 = v2[24];
      }
      v2[24] = v5 - 8;
    }
  }
  return result;
}

__int64 Seq_Unknown12_1137fa0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _BOOL4 v6;

  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != 0 && (*(_WORD*)(v2 + 136) & 1) == 0) {
    GameRoutine_657a50(v2, 1);
  }
  result = GameRoutine_62c840(*as_g_script_manager_ptr, 0);
  if (*(_BYTE*)(a1 + 1092) == 1) {
    result = GameRoutine_1553220(*(unsigned int*)(a1 + 1088));
    if (*(_BYTE*)(a1 + 1092) == 1) {
      *(_BYTE*)(a1 + 1092) = 0;
    }
  }
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16);
  if (v4 > v5) {
  LABEL_10:
    v6 = true;
    if (v4 == 0) {
      return result;
    }
  }
  else {
    while (*(_BYTE*)v5 != 2) {
      v5 -= 64LL;
      if (v4 > v5) {
        goto LABEL_10;
      }
    }
    v6 = *(_DWORD*)(v5 + 32) != 5;
    if (v4 == 0) {
      return result;
    }
  }
  if (v6) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 5) {
          *(_QWORD*)(a1 + 16) = v4;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64LL;
    }
  }
  return result;
}

void Seq_Unknown10()
{
  __int64 v0;

  v0 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 0) {
    *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) = 1;
    *(_DWORD*)(v0 + 156) &= ~2u;
  }
}

__int64 game_talk_Seq_BindFaceEyeBlinkSync_lambda0_Invoke(__int64 a1)
{
  __int64 result;
  unsigned __int64 v2;
  bool v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  result = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL);
  if (result != 0) {
    v2 = *(unsigned __int8*)(result + 1432);
    v3 = (v2 & 1) == 0;
    v4 = v2 >> 1;
    if (v3) {
      v5 = result + 1433;
    }
    else {
      v5 = *(_QWORD*)(result + 1448);
    }
    if (v3) {
      v6 = v4;
    }
    else {
      v6 = *(_QWORD*)(result + 1440);
    }
    result = GameRoutine_1916be0(result, 1, v5, v6, 0);
    if (result != 0) {
      v7 = result;
      spine_TrackEntry_setMixDuration(0.0);
      spine_TrackEntry_setDelay(v7, 0.07);
      return spine_TrackEntry_setAnimationEnd(v7, 0.3);
    }
  }
  return result;
}

#pragma GCC visibility pop
