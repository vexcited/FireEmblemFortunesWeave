#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1325de0(__int64);
__int64 GameRoutine_13261c0(__int64);
__int64 GameRoutine_1326420(__int64);
__int64 GameRoutine_1326c00(__int64 result, __int64);
__int64 GameRoutine_1328d60(__int64);
__int64 GameRoutine_828f50(_QWORD, _QWORD);
__int64 GameRoutine_ae07e0(_QWORD, _QWORD);
__int64 TroopMgr_1345be0(void);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(void);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 game_gmap_TroopMgr_CountPlayerTroop_1349100(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a86d15;
extern _UNKNOWN GameData_1aa9d24;
extern _UNKNOWN GameData_1aad978;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ad7ce3;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_202bd38[])();
extern __int64 (*GameData_202bdb8[])();
extern __int64 (*GameData_202bee8[])();
extern __int64 (*GameData_202c4e8[])();
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9e28;
extern __int64 GameData_21c9ef0;
extern __int64 GameData_2241428;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212ca10[133];
extern __int64* GameData_212ca70[121];
void GameRoutine_1329500(__int64, char*, char, char);
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a230(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_892740(void);
__int64 SpotMgr_Unknown3(__int64 a1);
__int64 SpotMgr_132fca0_alt1(__int64 result) __asm__("SpotMgr_132fca0");
__int64 SpotMgr_132ffa0(unsigned int* a1);
__int64 SpotMgr_13301a0_alt1(__int64 a1) __asm__("SpotMgr_13301a0");
__int64 SpotMgr_13304c0(unsigned int* a1);
void SpotMgr_1333820(__int64 a1, __int64 a2);
void SpotMgr_13338e0_alt1(__int64 a1, __int64 a2) __asm__("SpotMgr_13338e0");
void SpotMgr_1333b80();
bool SpotMgr_1333c60(__int64 a1, __int64 a2);
bool SpotMgr_1333de0(__int64 a1, __int64 a2);
_QWORD* SpotMgr_1334160(_QWORD* result, __int64 a2);
_QWORD* SpotMgr_1334360(_QWORD* result, __int64 a2);
_QWORD* SpotMgr_1334560_alt2(_QWORD* result) __asm__("SpotMgr_1334560");
_QWORD* SpotMgr_1334d40(_QWORD* result);
void SpotMgr_1335280(char a1);
__int64 SpotMgr_1335920();
_QWORD* SpotMgr_1336ec0_alt1() __asm__("SpotMgr_1336ec0");
void SpotMgr_13370c0();
__int64 SpotMgr_13381e0_alt3(__int64 result) __asm__("SpotMgr_13381e0");
__int64 SpotMgr_1338da0(__int64 result, __int64* a2, __int64 a3, char a4);
bool SpotMgr_133a380(__int64* a1, __int64* a2);
__int64 game_gmap_SpotMgr_EachSpotAttachment_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_gmap_SpotMgr_CheckWrongAttachment_lambda0_Invoke(__int64 a1,
                                                              __int64* a2);
__int64 game_gmap_SpotMgr_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 Dir_70df40(_QWORD, _QWORD);
__int64 GameRoutine_14b4b70(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 GameData_21c96e8;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
__int64 game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke_alt1(
    __int64 result,
    __int64** a2) __asm__("game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke");
__int16* game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke_alt1(
    __int64 a1,
    __int64*
        a2) __asm__("game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke");
_QWORD* GameRoutine_dbc1e0(_QWORD*, __int64);
__attribute__((swiftcall)) void Manager_66c4e0(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
SpotMgr_13306e0_alt1(PSEUDO_X8, char**, char,
                     char**) __asm__("SpotMgr_13306e0");
__int64 GameRoutine_1325100(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1325de0_alt1(_QWORD) __asm__("GameRoutine_1325de0");
__int64 GameRoutine_1326c00_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1326c00");
__int64 GameRoutine_14ce840(_QWORD, _QWORD);
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_888970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ae07e0_alt1(void) __asm__("GameRoutine_ae07e0");
__int64 Impl_13261c0(_QWORD);
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 Impl_1328460(_QWORD);
__int64 Impl_1328670(_QWORD);
__int64 Impl_132a360(_QWORD);
__int64 SpotMgr_13381e0_alt1(_QWORD) __asm__("SpotMgr_13381e0");
__int64 SpotMgr_1338320_alt1(_QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("SpotMgr_1338320");
__int64 SpotMgr_1338da0_alt1(_QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("SpotMgr_1338da0");
__int64 SpotMgr_133acc0_alt1(_QWORD, _QWORD, _QWORD) __asm__("SpotMgr_133acc0");
__int64 TroopMgr_13460a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_VariableManager_SetFlag_alt1(_QWORD, _QWORD) __asm__(
    "game_VariableManager_SetFlag");
__int64 game_gmap_1327670(float32x4_t*, float32x4_t*);
__int64 game_gmap_13278a0(float32x4_t*, int, float32x4_t*);
__int64 game_gmap_SpotMgr_GetCurrentSpot_alt1(void) __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 GameRoutine_14a1390(_QWORD*, char);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1a0d058;
extern _UNKNOWN GameData_1a86d1f;
extern _UNKNOWN GameData_1a8eaf7;
extern _UNKNOWN GameData_1ab570b;
extern _UNKNOWN GameData_1ab9636;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82f20;
extern __int64 (*GameData_202be68[])();
extern __int64 (*GameData_202bf68[])();
extern __int64 (*game_gmap_SpotMgr_Impl_vtable[])();
extern __int64* GameData_212c978[152];
extern __int64* GameData_212ca80[119];
extern __int64* GameData_212cac8[110];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea50;
extern __int64 GameData_21f1658;
float GameRoutine_135bbf0(_QWORD, _QWORD, _QWORD);
void GameRoutine_13289e0(__int64);
void GameRoutine_1328d60_alt1(__int64) __asm__("GameRoutine_1328d60");
void __attribute__((noreturn)) GameRoutine_1338190(void);
void __attribute__((noreturn)) GameRoutine_13381b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_1338850(_QWORD);
void __attribute__((noreturn)) GameRoutine_1338870(_QWORD);
void __attribute__((noreturn)) GameRoutine_1338890(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt2() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_a78a90(void);
void __attribute__((noreturn)) String_60a1d0(void);
void game_gmap_1329500(__int64, char*, char, char);
void SpotMgr_Unknown2(__int64 a1);
__attribute__((swiftcall)) void
SpotMgr_13306e0_alt2(PSEUDO_X8 x8_, unsigned __int64 result, char a2,
                     char** a3) __asm__("SpotMgr_13306e0");
__attribute__((swiftcall)) void SpotMgr_1331320(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, int a3);
__attribute__((swiftcall)) void SpotMgr_1331ca0(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void
SpotMgr_1332660_alt1(PSEUDO_X8 x8_, __int64 result) __asm__("SpotMgr_1332660");
__int64 SpotMgr_1332940(__int64 a1, __int64 a2, __int64 a3, int a4);
bool game_gmap_SpotMgr_CalcExcludedDisposSpot_alt1(__int64 (***a1)()) __asm__(
    "game_gmap_SpotMgr_CalcExcludedDisposSpot");
void SpotMgr_1332f00(__int64 a1);
void SpotMgr_1333340(__int64 a1);
__int64 SpotMgr_13339e0();
void SpotMgr_1333b20_alt1() __asm__("SpotMgr_1333b20");
__int64 game_gmap_SpotMgr_GetAroundSpot_alt1(__int64 a1) __asm__(
    "game_gmap_SpotMgr_GetAroundSpot");
__int64 SpotMgr_1336300_alt1() __asm__("SpotMgr_1336300");
__n128 SpotMgr_1337000_alt1() __asm__("SpotMgr_1337000");
void SpotMgr_1338320_alt3(float* a1, unsigned int* a2, int* a3,
                          _QWORD* a4) __asm__("SpotMgr_1338320");
__int64 SpotMgr_13388c0_alt1(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                             __int64 a5) __asm__("SpotMgr_13388c0");
_QWORD* SpotMgr_133acc0_alt2(float* a1, __int64* a2,
                             _QWORD** a3) __asm__("SpotMgr_133acc0");
__int64 game_gmap_SpotMgr_CalcExcludedDisposSpot_lambda0_Invoke_alt1(
    __int64 a1,
    __int64*
        a2) __asm__("game_gmap_SpotMgr_CalcExcludedDisposSpot_lambda0_Invoke");
__int64 game_gmap_TroopMgr_CountPlayerTroop_1349100_alt1(
    __int64, __int64) __asm__("game_gmap_TroopMgr_CountPlayerTroop_1349100");
__int64 nn_mem_StandardAllocator_Free_alt3(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn))
GameRoutine_8875e0_alt1() __asm__("GameRoutine_8875e0");
__attribute__((swiftcall)) void
Manager_66c4e0_alt1(PSEUDO_X8, unsigned __int8*) __asm__("Manager_66c4e0");
__int64* GameRoutine_1328d60_alt2(__int64) __asm__("GameRoutine_1328d60");
__int64* GameRoutine_ae07e0_alt2(__int64) __asm__("GameRoutine_ae07e0");
__int64 Dir_70df40_alt1(__int16*, __int16*) __asm__("Dir_70df40");
__int64 GameHr_14b4b70(__int64, unsigned int, __int64);
__int64 GameHr_14ce840(__int64*, const char*);
__int64 Impl_1326420(__int64);
__int64 TroopMgr_1345be0_alt1() __asm__("TroopMgr_1345be0");
__int64
game_VariableManager_SetFlag_alt2(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
float game_gmap_135bbf0(float32x4_t*, float32x4_t*, float32x4_t*);
unsigned __int64
GameRoutine_1325100_alt1(__int64, __int64*,
                         _DWORD*) __asm__("GameRoutine_1325100");
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt2() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void GameRoutine_1325de0_alt2(__int64) __asm__("GameRoutine_1325de0");
void SpotMgr_1334560_alt1(__int64) __asm__("SpotMgr_1334560");
void SpotMgr_13381e0_alt2(__int64*) __asm__("SpotMgr_13381e0");
void SpotMgr_1338320_alt2(__int64, unsigned int*, int*,
                          _QWORD*) __asm__("SpotMgr_1338320");
void __attribute__((noreturn))
GameRoutine_1338190_alt1() __asm__("GameRoutine_1338190");
void __attribute__((noreturn))
GameRoutine_13381b0_alt1() __asm__("GameRoutine_13381b0");
void __attribute__((noreturn))
GameRoutine_1338870_alt1() __asm__("GameRoutine_1338870");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_892740_alt1() __asm__("GameRoutine_892740");
void __attribute__((noreturn))
GameRoutine_a78a90_alt1() __asm__("GameRoutine_a78a90");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt4(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpotMgr_1336ec0();
void game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
void SpotMgr_13338e0();
__int64*
GameRoutine_1326c00_alt2(__int64* result,
                         unsigned __int8) __asm__("GameRoutine_1326c00");
__int64*
GameRoutine_888970_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_888970");
__int64 GameHr_1328460(__int64);
__int64 Impl_1328670_alt1(__int64) __asm__("Impl_1328670");
__int64 Impl_132a360_alt1(__int64) __asm__("Impl_132a360");
__int64 TroopMgr_13460a0_alt1(__int64) __asm__("TroopMgr_13460a0");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void GameHr_1325de0(__int64);
void __attribute__((noreturn))
GameRoutine_1338850_alt1() __asm__("GameRoutine_1338850");
void __attribute__((noreturn))
GameRoutine_1338890_alt1() __asm__("GameRoutine_1338890");
void __attribute__((noreturn)) fs_60a230();
void SpotMgr_132fca0(_QWORD* a1);
__int64 SpotMgr_13301a0(const char* a1);
__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8 x8_, char** a1,
                                                char a2, char** a3);
__attribute__((swiftcall)) void SpotMgr_1332660(PSEUDO_X8 x8_, __int64* a1);
bool game_gmap_SpotMgr_CalcExcludedDisposSpot(__int64* a1);
void SpotMgr_1334560(__int64 a1);
__int64 game_gmap_SpotMgr_GetAroundSpot(char a1);
void SpotMgr_1336300();
void SpotMgr_13381e0(__int64* a1);
void SpotMgr_1338320(__int64 a1, unsigned int* a2, int* a3, _QWORD* a4);
__int64 SpotMgr_13388c0(__int64* a1, __int64 a2, __int64* a3, __int64* a4,
                        __int64 a5);
_QWORD* SpotMgr_133acc0(__int64 a1, __int64* a2, _QWORD** a3);
void game_gmap_SpotMgr_CalcExcludedDisposSpot_lambda0_Invoke(__int64 a1,
                                                             __int64* a2);
void game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke(__int64 a1, __int64** a2);
__int64* Manager_bc6460(_QWORD*, __int64, char);
unsigned __int128 Manager_bc6460_pair(_QWORD*, __int64,
                                      char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_14a1390(__int64*, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64* SpotMgr_1333b20();
__int64* SpotMgr_1334ec0(__int64* result);
__int64 SpotMgr_1337000();

void SpotMgr_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  const char* v22;
  const char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64* v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64** v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64* v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned int v90;
  unsigned __int64 v91;
  unsigned __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64** v96;
  __int64* v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  char* v101;
  char* v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  float32x4_t** v115;
  float32x4_t* v116;
  float32x4_t* v117;
  __int64 v118;
  _DWORD* v119;
  float32x4_t v120;
  float32x4_t v121;
  _DWORD* v122;
  __int128 v123;
  __int128 v124;
  __int64 v125;
  float32x4_t v126;
  float32x4_t v127;
  float v128;
  float32x4_t v129;
  float32x4_t v130;
  float v131;
  float v132;
  unsigned int v133;
  unsigned __int64 v134;
  float* v135;
  __int64 v136;
  float v137;
  float v138;
  float32x4_t v139;
  float32x4_t v140;
  float v141;
  float v142;
  float32x4_t v143;
  float32x4_t* v144;
  float32x4_t v145;
  float v146;
  float32x4_t v147;
  float v148;
  float v149;
  float32x4_t v150;
  float32x4_t v151;
  float v152;
  float v153;
  float32x4_t v154;
  float32x4_t* v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x4_t v158;
  int8x16_t v159;
  char* v160;
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  __int64 v167;
  float32x4_t v168;
  __int64 v169;
  float v170;
  float v171;
  float32x4_t v172;
  float32x4_t v173;
  float v174;
  float v175;
  float32x4_t v176;
  float32x4_t* v177;
  int v178;
  int v179;
  float32x4_t* v180;
  _QWORD* v181;
  unsigned __int64 v182;
  float32x4_t*** v183;
  __int64 v184;
  __int64 v185;
  char* v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  __int64 v195;
  _QWORD* v196;
  __int128 v197;
  __int128 v198;
  _QWORD* v199;
  __int128 v200;
  __int128 v201;
  __int64 v202;
  __int128 v203;
  __int128 v204;
  __int128 v205;
  __int128 v206;
  __int128 v207;
  __int128 v208;
  __int128 v209;
  __int128 v210;
  __int128 v211;
  __int128 v212;
  __int128 v213;
  __int128 v214;
  __int128 v215;
  __int128 v216;
  __int128 v217;
  __int128 v218;
  float32x4_t* v219;
  int v220;
  int v221;
  float32x4_t* v222;
  _QWORD* v223;
  unsigned __int64 v224;
  _QWORD* v225;
  __int64 v226;
  char* v227;
  __int64 v228;
  unsigned __int64 v229;
  __int64 v230;
  unsigned __int64 v231;
  __int64 v232;
  unsigned __int64 v233;
  unsigned __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  _QWORD* v238;
  unsigned __int64 v239;
  __int64 v240;
  unsigned __int64 v241;
  char* v242;
  __int64 v243;
  __int64 v244;
  unsigned int v245;
  unsigned __int64 v246;
  unsigned __int64 v248;
  __int64 v249;
  __int64** v250;
  __int64* v251;
  unsigned __int64 v252;
  __int64 v253;
  __int64 v254;
  _QWORD* v255;
  char* v256;
  char* v257;
  unsigned __int64 v258;
  __int64 v259;
  signed __int64 v260;
  unsigned __int64 v261;
  unsigned __int64 v262;
  unsigned __int64 v263;
  __int64 v264;
  char* v265;
  __int64 v266;
  __int64* v267;
  __int64 v268;
  unsigned __int64 v269;
  __int64 v270;
  __int64* v271;
  __int64* v272;
  unsigned __int64 v273;
  unsigned __int64 v274;
  __int64 v275;
  unsigned __int64 v276;
  __int64 v277;
  char* v278;
  char* v279;
  unsigned __int64 v280;
  __int64 v281;
  signed __int64 v282;
  char* v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64* v287;
  __int64* v288;
  __int64 v289;
  __int64 v290;
  unsigned __int64 v291;
  _QWORD* v292;
  __int64 v293;
  char* v294;
  __int64 v295;
  unsigned __int64 v296;
  __int64 v297;
  unsigned __int64 v298;
  __int64 v299;
  unsigned __int64 v300;
  unsigned __int64 v301;
  __int64 v302;
  __int64 v303;
  _QWORD* v304;
  unsigned __int64 v305;
  _QWORD* v306;
  __int64 v307;
  __int64 v308;
  char* v309;
  __int64 v310;
  unsigned __int64 v311;
  __int64 v312;
  unsigned __int64 v313;
  __int64 v314;
  unsigned __int64 v315;
  unsigned __int64 v316;
  __int64 v317;
  __int64 v318;
  char* v319;
  unsigned __int64 v320;
  __int64 v321;
  bool v322;
  _QWORD* v323;
  __int64 v324;
  unsigned __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64* v329;
  __int64* v330;
  __int64 v331;
  __int64 v332;
  unsigned __int64 v333;
  _QWORD* v334;
  __int64 v335;
  char* v336;
  __int64 v337;
  unsigned __int64 v338;
  __int64 v339;
  unsigned __int64 v340;
  __int64 v341;
  unsigned __int64 v342;
  unsigned __int64 v343;
  __int64 v344;
  __int64 v345;
  _QWORD* v346;
  unsigned __int64 v347;
  _QWORD* v348;
  __int64 v349;
  char* v350;
  __int64 v351;
  unsigned __int64 v352;
  __int64 v353;
  unsigned __int64 v354;
  __int64 v355;
  unsigned __int64 v356;
  unsigned __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64* v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  char v364;
  __int64 v365;
  __int64 v366;
  unsigned int** v367;
  unsigned int** v368;
  __int64* v369;
  unsigned int* v370;
  _QWORD* v371;
  unsigned __int64 v372;
  unsigned __int64 v374;
  unsigned __int64 v375;
  __int64 v376;
  __int64** v377;
  __int64* v378;
  unsigned __int64 v379;
  __int64 v380;
  __int64 v381;
  const char* v382;
  __int64 v383;
  __int64 v384;
  unsigned __int64 v385;
  unsigned __int64 v386;
  char* v387;
  __int64 v388;
  __int64 v389;
  unsigned __int64 v390;
  __int64* v391;
  __int64 v392;
  __int64 v393;
  char* v394;
  __int64 v395;
  unsigned __int64 v396;
  __int64 v397;
  unsigned __int64 v398;
  __int64 v399;
  unsigned __int64 v400;
  unsigned __int64 v401;
  __int64 v402;
  __int64 v403;
  unsigned __int64 v404;
  unsigned __int64 v405;
  unsigned __int64 v406;
  unsigned __int64 v407;
  __int64** v408;
  __int64* v409;
  unsigned __int64 v410;
  __int64 v411;
  __int64* v412;
  __int64* v413;
  char v414;
  __int64 v415;
  __int64* v416;
  __int64* v417;
  __int64 v418;
  __int64 v420;
  bool v421;
  __int64 v422;
  __int64 v423;
  char v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  __int64 v430;
  __int64* v431;
  __int64* v432;
  __int64 v433;
  bool v434;
  unsigned __int64 v435;
  unsigned __int64 v436;
  unsigned __int64 v438;
  unsigned __int64 v439;
  _QWORD* v440;
  _QWORD* v441;
  unsigned __int64 v442;
  __int64 v443;
  __int64 v444;
  unsigned __int64 v445;
  unsigned __int64 v446;
  unsigned __int64 v448;
  unsigned __int64 v449;
  _QWORD* v450;
  _QWORD* v451;
  unsigned __int64 v452;
  __int64 v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  char v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  __int64* v463;
  __int64 v464;
  __int64 v465;
  __int64* v466;
  char* v467;
  _QWORD* v468;
  __int64* v469;
  __int64 v470;
  unsigned __int64 v471;
  __int64 v472;
  float32x4_t v473;
  __int64 v474;
  struct {
    __int64 v475;
    __int64 v476;
  } v475_;
  float32x4_t v477;
  float32x4_t v478;
  float32x4_t v479;
  float32x4_t v480;
  struct {
    __int64 v481;
    __int64 v482;
    char* v483;
    __int64* v484;
    __int64* v485;
    __int64 v486;
  } v481_;
  float32x4_t v487;
  float32x4_t v488;
  float32x4_t v489;
  __int64 v496;
  __int64 v497;
  __int64 v498;
  __int64 v499;
  __int64 v500;
  __int64 v501;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 216, 16, 0);
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 0;
  v9[11] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[14] = 0;
  v9[15] = 0;
  v9[16] = 0;
  v9[17] = 0;
  v9[18] = 0;
  v9[19] = 0;
  v9[20] = 0;
  v9[21] = 0;
  v9[22] = 0;
  v9[23] = 0;
  v9[24] = 0;
  v9[25] = 0;
  v10 = *v8;
  v9[26] = 0;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v10, 24, 16, 0);
  v12 = v500;
  v13 = GameData_21eea40;
  v11[1] = &GameData_21eea40;
  v11[2] = v9;
  GameData_21eea40 = (__int64)v11;
  *v11 = v13;
  *(_QWORD*)(v13 + 8) = v11;
  v9[3] = 0;
  v9[4] = 0;
  v9[1] = 0;
  v9[2] = 0;
  *v9 = game_gmap_SpotMgr_Impl_vtable;
  *((_DWORD*)v9 + 10) = 1065353216;
  v9[25] = 0;
  *((_BYTE*)v9 + 208) = 0;
  *((_DWORD*)v9 + 48) = 0;
  v9[22] = 0;
  v9[23] = 0;
  v14 = GameData_21eea50;
  v9[20] = 0;
  v9[21] = 0;
  v9[18] = 0;
  v9[19] = 0;
  v9[16] = 0;
  v9[17] = 0;
  v9[14] = 0;
  v9[15] = 0;
  v9[12] = 0;
  v9[13] = 0;
  v9[10] = 0;
  v9[11] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[6] = 0;
  v9[7] = 0;
  GameData_21eea50 = v14 + 1;
  *(_QWORD*)(a1 + 8) = v9;
  v496 = v498;
  v497 = v499;
  v501 = v12;
  v15 = v9;
  v16 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v481_.v481 = 41;
  v481_.v482 = 32;
  v481_.v483 = v16;
  strcpy(v16, "Contents:/GameData/Gmap/Data.bin");
  Manager_66c4e0_alt1((void*)((__int64)&v475_.v475),
                      (unsigned __int8*)&v481_.v481);
  if ((v481_.v481 & 1) != 0 && v481_.v483 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v481_.v483);
  }
  v18 = v475_.v475;
  v468 = v9;
  v464 = v475_.v476;
  if (v475_.v475 == v475_.v476) {
    goto LABEL_467;
  }
  v463 = v9 + 3;
  while (2) {
    v21 = *(_BYTE*)v18;
    v22 = *(const char**)(v18 + 16);
    v481_.v485 = nullptr;
    v481_.v486 = 0;
    v481_.v483 = nullptr;
    v481_.v484 = nullptr;
    v481_.v481 = 0;
    v481_.v482 = 0;
    if ((v21 & 1) != 0) {
      v23 = v22;
    }
    else {
      v23 = (const char*)(v18 + 1);
    }
    if (v23 == nullptr) {
      goto LABEL_12;
    }
    v465 = v18;
    v24 = *snd_g_fileIndex_ptr[0];
    v25 = strlen_alt1(v23);
    if ((fs_6360e0(v24, (__int64)v23, v25, 1, 0) & 1) == 0) {
      goto LABEL_458;
    }
    GameHr_14ce840(&v481_.v481, v23);
    v26 = v481_.v481;
    v27 = v481_.v482;
    while (v26 != v27) {
      v28 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
      GameRoutine_1325100_alt1(v28, (__int64*)v26, (_DWORD*)(v26 + 32));
      v29 = *(unsigned int*)(v28 + 96);
      v30 = *(_QWORD*)(v28 + 120);
      LANES128(v489).n128_u64[0] = v28;
      LANES128(v488).n128_u32[0] = v29;
      if (v30 != 0 || *(_DWORD*)(v26 + 52) == 13) {
        v32 = (unsigned __int64*)v15[7];
        v31 = v15[8];
        if ((unsigned __int64)v32 >= v31) {
          v34 = v15[6];
          v35 = (char*)v32 - v34;
          v36 = ((__int64)v32 - v34) >> 3;
          v37 = v36 + 1;
          if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
            goto LABEL_676;
          }
          v38 = v31 - v34;
          if (v38 >> 2 > v37) {
            v37 = v38 >> 2;
          }
          if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
            v39 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v39 = v37;
          }
          if (v39 != 0) {
            if (v39 >> 61 != 0) {
              goto LABEL_673;
            }
            v40 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
          }
          else {
            v40 = 0;
          }
          v42 = v40 + 8 * v39;
          v43 = (unsigned __int64)v32 - v34;
          v44 = (__int64)&v35[v40 + -8 * v36];
          *(_QWORD*)&v35[v40] = v28;
          v33 = (__int64)&v35[v40 + 8];
          memcpy_alt1(v44, v34, v43);
          v15 = v468;
          v468[6] = v44;
          v468[7] = v33;
          v468[8] = v42;
          if (v34 != 0) {
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v34);
          }
        }
        else {
          *v32 = v28;
          v33 = (__int64)(v32 + 1);
        }
        v46 = v15[2];
        v15[7] = v33;
        if (v46 != 0 && v15[4] != 0) {
          v47 = v46 - 1;
          if ((v46 & (v46 - 1)) != 0) {
            v48 = v29;
            if (v46 <= v29) {
              v48 = (unsigned int)v29 % (unsigned int)v46;
            }
          }
          else {
            v48 = ((_DWORD)v46 - 1) & (unsigned int)v29;
          }
          v49 = *(__int64***)(v15[1] + 8 * v48);
          if (v49 != nullptr) {
            v50 = *v49;
            if (v50 != nullptr) {
              if ((v46 & v47) == 0) {
                while (1) {
                  v52 = v50[1];
                  if (v52 == v29) {
                    if (*((_DWORD*)v50 + 4) == (_DWORD)v29) {
                      goto LABEL_64;
                    }
                  }
                  else if ((v52 & v47) != v48) {
                    goto LABEL_63;
                  }
                  v50 = (__int64*)*v50;
                  if (v50 == nullptr) {
                    goto LABEL_63;
                  }
                }
              }
              do {
                v51 = v50[1];
                if (v51 == v29) {
                  if (*((_DWORD*)v50 + 4) == (_DWORD)v29) {
                    goto LABEL_64;
                  }
                }
                else {
                  if (v51 >= v46) {
                    v51 %= v46;
                  }
                  if (v51 != v48) {
                    break;
                  }
                }
                v50 = (__int64*)*v50;
              } while (v50 != nullptr);
            }
          }
        }
      LABEL_63:
        SpotMgr_1338320((__int64)(v15 + 1), (unsigned int*)&v488, (int*)&v488,
                        &v489);
      LABEL_64:
        if (*(_QWORD*)(v28 + 120) != 0) {
          v54 = (unsigned __int64*)v15[10];
          v53 = v15[11];
          if ((unsigned __int64)v54 < v53) {
            *v54 = v28;
            v26 += 64;
            v15[10] = v54 + 1;
          }
          else {
            v55 = v15[9];
            v56 = (char*)v54 - v55;
            v57 = ((__int64)v54 - v55) >> 3;
            v58 = v57 + 1;
            if ((unsigned __int64)(v57 + 1) >> 61 != 0) {
              goto LABEL_676;
            }
            v59 = v53 - v55;
            if (v59 >> 2 > v58) {
              v58 = v59 >> 2;
            }
            if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF8LL) {
              v60 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v60 = v58;
            }
            if (v60 != 0) {
              if (v60 >> 61 != 0) {
                goto LABEL_673;
              }
              v61 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v60, 16, 0);
            }
            else {
              v61 = 0;
            }
            v72 = v61 + 8 * v60;
            v73 = (unsigned __int64)v54 - v55;
            v74 = (__int64)&v56[v61 + -8 * v57];
            *(_QWORD*)&v56[v61] = v28;
            v75 = (__int64)&v56[v61 + 8];
            memcpy_alt1(v74, v55, v73);
            v15 = v468;
            v468[9] = v74;
            v468[10] = v75;
            v468[11] = v72;
            if (v55 != 0) {
              v76 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v76 = 56;
              }
              nn_mem_StandardAllocator_Free_alt4(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v55);
            }
            v468[10] = v75;
            v26 += 64;
          }
        }
        else {
          v63 = (unsigned __int64*)v15[13];
          v62 = v15[14];
          if ((unsigned __int64)v63 >= v62) {
            v65 = v15[12];
            v66 = (char*)v63 - v65;
            v67 = ((__int64)v63 - v65) >> 3;
            v68 = v67 + 1;
            if ((unsigned __int64)(v67 + 1) >> 61 != 0) {
              goto LABEL_676;
            }
            v69 = v62 - v65;
            if (v69 >> 2 > v68) {
              v68 = v69 >> 2;
            }
            if ((unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF8LL) {
              v70 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v70 = v68;
            }
            if (v70 != 0) {
              if (v70 >> 61 != 0) {
                goto LABEL_673;
              }
              v71 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v70, 16, 0);
            }
            else {
              v71 = 0;
            }
            v77 = v71 + 8 * v70;
            v78 = (unsigned __int64)v63 - v65;
            v79 = (__int64)&v66[v71 + -8 * v67];
            *(_QWORD*)&v66[v71] = v28;
            v64 = (__int64)&v66[v71 + 8];
            memcpy_alt1(v79, v65, v78);
            v15 = v468;
            v468[12] = v79;
            v468[13] = v64;
            v468[14] = v77;
            if (v65 != 0) {
              v80 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v80 = 56;
              }
              nn_mem_StandardAllocator_Free_alt4(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v80, v65);
            }
          }
          else {
            *v63 = v28;
            v64 = (__int64)(v63 + 1);
          }
          v15[13] = v64;
          v26 += 64;
        }
      }
      else {
        GameHr_1325de0(v28);
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v28);
        v26 += 64;
      }
    }
    v81 = v481_.v484;
    v466 = v481_.v485;
    if (v481_.v484 == v481_.v485) {
      if (v481_.v484 != nullptr) {
        goto LABEL_452;
      }
      goto LABEL_458;
    }
    while (2) {
      v85 = *v81;
      v86 = v81[1];
      v469 = v81;
      if (*v81 == v86) {
        v467 = nullptr;
        v87 = 0;
        goto LABEL_160;
      }
      v87 = 0;
      v467 = nullptr;
      v88 = 0;
      while (1) {
        v89 = (*(_BYTE*)v85 & 1) != 0 ? *(_QWORD*)(v85 + 16) : v85 + 1;
        v90 = game_HashString_alt1(v89);
        v91 = v15[2];
        if (v91 == 0 || v15[4] == 0) {
          break;
        }
        v93 = v91 - 1;
        if ((v91 & (v91 - 1)) != 0) {
          v94 = v468;
          v95 = v90;
          if (v91 <= v90) {
            v95 = v90 % (unsigned int)v91;
          }
        }
        else {
          v94 = v468;
          v95 = ((_DWORD)v91 - 1) & v90;
        }
        v96 = *(__int64***)(v94[1] + 8 * v95);
        if (v96 == nullptr) {
          break;
        }
        v97 = *v96;
        if (v97 == nullptr) {
          break;
        }
        if ((v91 & v93) == 0) {
          while (1) {
            v99 = v97[1];
            if (v99 == v90) {
              if (*((_DWORD*)v97 + 4) == v90) {
                goto LABEL_136;
              }
            }
            else if ((v99 & v93) != v95) {
              goto LABEL_156;
            }
            v97 = (__int64*)*v97;
            if (v97 == nullptr) {
              goto LABEL_156;
            }
          }
        }
        while (1) {
          v98 = v97[1];
          if (v98 == v90) {
            break;
          }
          if (v98 >= v91) {
            v98 %= v91;
          }
          if (v98 != v95) {
            goto LABEL_156;
          }
        LABEL_125:
          v97 = (__int64*)*v97;
          if (v97 == nullptr) {
            goto LABEL_156;
          }
        }
        if (*((_DWORD*)v97 + 4) != v90) {
          goto LABEL_125;
        }
      LABEL_136:
        v100 = v97[3];
        if (v100 == 0) {
          break;
        }
        v101 = v467;
        if ((unsigned __int64)v467 < v88) {
          *(_QWORD*)v467 = v100;
          goto LABEL_154;
        }
        v102 = &v467[-v87];
        v103 = (__int64)&v467[-v87] >> 3;
        v104 = v103 + 1;
        if ((unsigned __int64)(v103 + 1) >> 61 != 0) {
          goto LABEL_676;
        }
        if ((__int64)(v88 - v87) >> 2 > v104) {
          v104 = (__int64)(v88 - v87) >> 2;
        }
        if (v88 - v87 >= 0x7FFFFFFFFFFFFFF8LL) {
          v105 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v105 = v104;
        }
        if (v105 == 0) {
          v106 = 0;
          goto LABEL_149;
        }
        if (v105 >> 61 != 0) {
          goto LABEL_673;
        }
        v106 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v105, 16, 0);
      LABEL_149:
        v88 = v106 + 8 * v105;
        *(_QWORD*)&v102[v106] = v100;
        v107 = (__int64)&v102[v106 + -8 * v103];
        v101 = &v102[v106];
        memcpy_alt1(v107, v87, (unsigned __int64)&v467[-v87]);
        if (v87 != 0) {
          v108 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v108 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v108, v87);
        }
        v81 = v469;
        v87 = v107;
      LABEL_154:
        v15 = v468;
        v85 += 24;
        v467 = v101 + 8;
        if (v85 == v86) {
        LABEL_160:
          v471 = v87;
          v472 = ((__int64)&v467[-v87] >> 3) - 1;
          if ((__int64)&v467[-v87] >> 3 != 1) {
            v111 = 0;
            do {
              v113 = v111;
              v114 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
              *(_QWORD*)v114 = 0;
              *(_QWORD*)(v114 + 8) = 0;
              *(_QWORD*)(v114 + 16) = 0;
              *(_QWORD*)(v114 + 24) = 0;
              v115 = (float32x4_t**)v114;
              *(_QWORD*)(v114 + 32) = 0;
              *(_QWORD*)(v114 + 40) = 0;
              *(_QWORD*)(v114 + 48) = 0;
              *(_QWORD*)(v114 + 56) = 0;
              *(_QWORD*)(v114 + 64) = 0;
              *(_QWORD*)(v114 + 72) = 0;
              *(_QWORD*)(v114 + 80) = 0;
              *(_QWORD*)(v114 + 88) = 0;
              *(_QWORD*)(v114 + 104) = 0;
              *(_QWORD*)(v114 + 112) = 0;
              *(_QWORD*)(v114 + 120) = 0;
              *(_QWORD*)(v114 + 96) = 0;
              v116 = (float32x4_t*)(v114 + 96);
              v117 = *(float32x4_t**)(v87 + 8 * v111);
              v470 = v111 + 1;
              *(_QWORD*)v114 = v117;
              v118 = *(_QWORD*)(v87 + 8 * (v111 + 1));
              *(_BYTE*)(v114 + 16) = 0;
              *(_QWORD*)(v114 + 8) = v118;
              v119 = (_DWORD*)(v469[6] + (v111 << 6));
              *(_DWORD*)(v114 + 32) = *v119;
              *(_DWORD*)(v114 + 36) = v119[1];
              v120 = *(float32x4_t*)(v114 + 32);
              LANES128(v120).n128_u64[1] = (unsigned int)v119[2];
              *(float32x4_t*)(v114 + 32) = v120;
              *(_DWORD*)(v114 + 48) = v119[4];
              *(_DWORD*)(v114 + 52) = v119[5];
              v121 = *(float32x4_t*)(v114 + 48);
              LANES128(v121).n128_u64[1] = (unsigned int)v119[6];
              *(float32x4_t*)(v114 + 48) = v121;
              v122 = (_DWORD*)(v469[6] + (v111 << 6));
              *(_DWORD*)(v114 + 64) = v122[8];
              *(_DWORD*)(v114 + 68) = v122[9];
              v123 = *(_OWORD*)(v114 + 64);
              *((_QWORD*)&v123 + 1) = (unsigned int)v122[10];
              *(_OWORD*)(v114 + 64) = v123;
              *(_DWORD*)(v114 + 80) = v122[12];
              *(_DWORD*)(v114 + 84) = v122[13];
              v124 = *(_OWORD*)(v114 + 80);
              *((_QWORD*)&v124 + 1) = (unsigned int)v122[14];
              *(_OWORD*)(v114 + 80) = v124;
              v125 = v469[3] + 16 * v111;
              *(_DWORD*)(v114 + 96) = *(_OWORD*)v125;
              *(_DWORD*)(v114 + 100) = *(_DWORD*)(v125 + 4);
              v126 = *(float32x4_t*)(v114 + 96);
              LANES128(v126).n128_u64[1] = *(unsigned int*)(v125 + 8);
              *(float32x4_t*)(v114 + 96) = v126;
              v127 = v117[2];
              v488 = vsubq_f32(v120, v127);
              v489 = vsubq_f32(v126, v127);
              v487 = vsubq_f32(v121, v127);
              v128 = game_gmap_135bbf0(&v489, &v488, &v487);
              v129 = vsubq_f32(v115[1][2], *v116);
              v130 = vsubq_f32(*((float32x4_t*)v115 + 5), *v116);
              v488 = vsubq_f32(*((float32x4_t*)v115 + 4), *v116);
              v489 = v129;
              v487 = v130;
              v131 = v128 + game_gmap_135bbf0(&v489, &v488, &v487);
              v132 = 0x0.0p+0f;
              v133 = 1;
              v134 = 0;
              v135 = nullptr;
              v136 = 0;
              *((float*)v115 + 28) = v131;
              do {
                v137 = (float)(v133 - 1) / 0x1.e000000000000p+5f;
                if (v137 >= 0x1.0000000000000p-1f) {
                  v140 = *((float32x4_t*)v115 + 5);
                  v143 = *((float32x4_t*)v115 + 6);
                  v139 = *((float32x4_t*)v115 + 4);
                  v138 = (float)(v137 + -0x1.0000000000000p-1f) +
                         (float)(v137 + -0x1.0000000000000p-1f);
                  v141 = 0x1.0000000000000p+0f - v138;
                  v144 = v115[1] + 2;
                  v142 = v141 * v141;
                }
                else {
                  v138 = v137 + v137;
                  v139 = *((float32x4_t*)v115 + 2);
                  v140 = *((float32x4_t*)v115 + 3);
                  v141 = 0x1.0000000000000p+0f - (float)(v137 + v137);
                  v142 = v141 * v141;
                  v143 = (*v115)[2];
                  v144 = v116;
                }
                v145 = vaddq_f32(
                    vaddq_f32(
                        vmulq_n_f32(v143, v141 * v142),
                        vmulq_n_f32(
                            v139,
                            v138 * (float)(v141 *
                                           (float)(v141 *
                                                   0x1.8000000000000p+1f)))),
                    vmulq_n_f32(
                        v140,
                        v138 * (float)(v138 *
                                       (float)(v141 * 0x1.8000000000000p+1f))));
                v146 = v138 * (float)(v138 * v138);
                v147 = *v144;
                v148 = (float)v133 / 0x1.e000000000000p+5f;
                if (v148 >= 0x1.0000000000000p-1f) {
                  v151 = *((float32x4_t*)v115 + 5);
                  v154 = *((float32x4_t*)v115 + 6);
                  v150 = *((float32x4_t*)v115 + 4);
                  v149 = (float)(v148 + -0x1.0000000000000p-1f) +
                         (float)(v148 + -0x1.0000000000000p-1f);
                  v152 = 0x1.0000000000000p+0f - v149;
                  v155 = v115[1] + 2;
                  v153 = v152 * v152;
                }
                else {
                  v149 = v148 + v148;
                  v150 = *((float32x4_t*)v115 + 2);
                  v151 = *((float32x4_t*)v115 + 3);
                  v152 = 0x1.0000000000000p+0f - (float)(v148 + v148);
                  v153 = v152 * v152;
                  v154 = (*v115)[2];
                  v155 = v116;
                }
                v156 = vaddq_f32(v145, vmulq_n_f32(v147, v146));
                LANES128(v156).n128_u32[3] = 0;
                v157 = vaddq_f32(
                    vaddq_f32(
                        vaddq_f32(
                            vmulq_n_f32(v154, v152 * v153),
                            vmulq_n_f32(
                                v150,
                                v149 *
                                    (float)(v152 *
                                            (float)(v152 *
                                                    0x1.8000000000000p+1f)))),
                        vmulq_n_f32(
                            v151,
                            v149 * (float)(v149 *
                                           (float)(v152 *
                                                   0x1.8000000000000p+1f)))),
                    vmulq_n_f32(*v155, v149 * (float)(v149 * v149)));
                LANES128(v157).n128_u32[3] = 0;
                v158 = vsubq_f32(v156, v157);
                v159 = vmulq_f32(v158, v158);
                LANES128(v159).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v159, v159, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0])))
                        .n64_u64[0];
                v132 =
                    v132 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0]),
                            COERCE_AS(float32x2_t,
                                      LANES128(v159).n128_u64[0]))))
                        .n64_f32[0];
                if ((unsigned __int64)v135 < v134) {
                  *v135++ = v132;
                }
                else {
                  v160 = (char*)v135 - v136;
                  v161 = ((__int64)v135 - v136) >> 2;
                  v162 = v161 + 1;
                  if ((unsigned __int64)(v161 + 1) >> 62 != 0) {
                    GameRoutine_a78a90_alt1();
                  }
                  if ((__int64)(v134 - v136) >> 1 > v162) {
                    v162 = (__int64)(v134 - v136) >> 1;
                  }
                  if (v134 - v136 >= 0x7FFFFFFFFFFFFFFCLL) {
                    v163 = 0x3FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v163 = v162;
                  }
                  if (v163 != 0) {
                    if (v163 >> 62 != 0) {
                      goto LABEL_673;
                    }
                    v164 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v163, 16,
                        0);
                  }
                  else {
                    v164 = 0;
                  }
                  v134 = v164 + 4 * v163;
                  v165 = (unsigned __int64)v135 - v136;
                  v166 = (__int64)&v160[v164 + -4 * v161];
                  *(float*)&v160[v164] = v132;
                  v135 = (float*)&v160[v164 + 4];
                  memcpy_alt1(v166, v136, v165);
                  if (v136 != 0) {
                    v167 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v167 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt4(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v167, v136);
                  }
                  v136 = v166;
                }
                ++v133;
              } while (v133 != 60);
              v168 = (__typeof__(v168)){0};
              if (v135 == (float*)v136) {
                v87 = v471;
              }
              else {
                v87 = v471;
                v169 = 0;
                while (*(float*)(v136 + 4 * v169) <
                       (float)(v132 * 0x1.0000000000000p-1f)) {
                  if (((__int64)v135 - v136) >> 2 == ++v169) {
                    goto LABEL_202;
                  }
                }
                v170 =
                    (float)((float)(unsigned int)v169 + 0x1.0000000000000p-1f) /
                    0x1.e000000000000p+5f;
                if (v170 >= 0x1.0000000000000p-1f) {
                  v173 = *((float32x4_t*)v115 + 5);
                  v176 = *((float32x4_t*)v115 + 6);
                  v172 = *((float32x4_t*)v115 + 4);
                  v171 = (float)(v170 + -0x1.0000000000000p-1f) +
                         (float)(v170 + -0x1.0000000000000p-1f);
                  v174 = 0x1.0000000000000p+0f - v171;
                  v116 = v115[1] + 2;
                  v175 = v174 * v174;
                }
                else {
                  v171 = v170 + v170;
                  v172 = *((float32x4_t*)v115 + 2);
                  v173 = *((float32x4_t*)v115 + 3);
                  v174 = 0x1.0000000000000p+0f - (float)(v170 + v170);
                  v175 = v174 * v174;
                  v176 = (*v115)[2];
                }
                v168 = vaddq_f32(
                    vaddq_f32(
                        vaddq_f32(
                            vmulq_n_f32(v176, v174 * v175),
                            vmulq_n_f32(
                                v172,
                                v171 *
                                    (float)(v174 *
                                            (float)(v174 *
                                                    0x1.8000000000000p+1f)))),
                        vmulq_n_f32(
                            v173,
                            v171 * (float)(v171 *
                                           (float)(v174 *
                                                   0x1.8000000000000p+1f)))),
                    vmulq_n_f32(*v116, v171 * (float)(v171 * v171)));
                LANES128(v168).n128_u32[3] = 0;
              }
            LABEL_202:
              v177 = *(float32x4_t**)(v87 + 8 * v113);
              v473 = v168;
              v480 = v168;
              v178 = game_gmap_1327670(v177, &v480);
              *((_DWORD*)v115 + 29) = v178;
              v179 = v178;
              v180 = *(float32x4_t**)(v87 + 8 * v113);
              v479 = v473;
              *((_DWORD*)v115 + 30) = game_gmap_13278a0(v180, v179, &v479);
              v181 = *(_QWORD**)(v87 + 8 * v113);
              v183 = (float32x4_t***)v181[7];
              v182 = v181[8];
              if ((unsigned __int64)v183 >= v182) {
                v185 = v181[6];
                v186 = (char*)v183 - v185;
                v187 = ((__int64)v183 - v185) >> 3;
                v188 = v187 + 1;
                if ((unsigned __int64)(v187 + 1) >> 61 != 0) {
                  goto LABEL_675;
                }
                v189 = v182 - v185;
                if (v189 >> 2 > v188) {
                  v188 = v189 >> 2;
                }
                if ((unsigned __int64)v189 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v190 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v190 = v188;
                }
                if (v190 != 0) {
                  if (v190 >> 61 != 0) {
                    goto LABEL_673;
                  }
                  v191 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v190, 16, 0);
                }
                else {
                  v191 = 0;
                }
                v192 = v191 + 8 * v190;
                v193 = (unsigned __int64)v183 - v185;
                v194 = (__int64)&v186[v191 + -8 * v187];
                *(_QWORD*)&v186[v191] = v115;
                v184 = (__int64)&v186[v191 + 8];
                memcpy_alt1(v194, v185, v193);
                v181[6] = v194;
                v181[7] = v184;
                v181[8] = v192;
                if (v185 != 0) {
                  v195 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v195 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt4(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v195, v185);
                }
                v87 = v471;
              }
              else {
                *v183 = v115;
                v184 = (__int64)(v183 + 1);
              }
              v181[7] = v184;
              v111 = v470;
              v196 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
              *v196 = 0;
              v196[1] = 0;
              v196[2] = 0;
              v196[3] = 0;
              v197 = *((_OWORD*)v115 + 4);
              v198 = *((_OWORD*)v115 + 5);
              v199 = v196;
              v196[4] = 0;
              v196[5] = 0;
              v196[6] = 0;
              v196[7] = 0;
              v200 = *((_OWORD*)v115 + 2);
              v201 = *((_OWORD*)v115 + 3);
              v196[8] = 0;
              v196[9] = 0;
              v196[10] = 0;
              v196[11] = 0;
              v196[12] = 0;
              v196[13] = 0;
              v196[14] = 0;
              v196[15] = 0;
              *v196 = *(_QWORD*)(v87 + 8 * v470);
              v202 = *(_QWORD*)(v87 + 8 * v113);
              v196[8] = v197;
              v196[10] = v198;
              v196[4] = v200;
              v196[6] = v201;
              *((_BYTE*)v196 + 16) = 0;
              v204 = *((_OWORD*)v196 + 4);
              v203 = *((_OWORD*)v196 + 5);
              v196[1] = v202;
              *(_QWORD*)&v205 = v204;
              *(_QWORD*)&v206 = v203;
              *((_QWORD*)&v205 + 1) = DWORD2(v197);
              *((_QWORD*)&v206 + 1) = DWORD2(v198);
              *((_OWORD*)v196 + 4) = v205;
              *((_OWORD*)v196 + 5) = v206;
              v207 = *((_OWORD*)v196 + 2);
              v208 = *((_OWORD*)v196 + 3);
              v196[8] = v207;
              *((_QWORD*)&v207 + 1) = DWORD2(v200);
              v196[10] = v208;
              *((_QWORD*)&v208 + 1) = DWORD2(v201);
              *((_OWORD*)v196 + 2) = v207;
              *((_OWORD*)v196 + 3) = v208;
              v196[4] = v204;
              v209 = *((_OWORD*)v196 + 4);
              v210 = *((_OWORD*)v196 + 5);
              v196[6] = v203;
              *(_QWORD*)&v206 = v210;
              *((_QWORD*)&v206 + 1) = DWORD2(v201);
              *((_OWORD*)v196 + 5) = v206;
              v211 = *((_OWORD*)v196 + 2);
              v212 = *((_OWORD*)v196 + 3);
              v196[10] = v209;
              *((_QWORD*)&v209 + 1) = DWORD2(v200);
              *(_QWORD*)&v208 = v212;
              *((_QWORD*)&v208 + 1) = DWORD2(v198);
              *((_OWORD*)v196 + 3) = v208;
              *((_OWORD*)v196 + 4) = v209;
              v196[6] = v211;
              *((_QWORD*)&v211 + 1) = DWORD2(v197);
              v196[8] = v210;
              *((_OWORD*)v196 + 2) = v211;
              v196[4] = v212;
              v213 = *((_OWORD*)v196 + 2);
              v214 = *((_OWORD*)v196 + 3);
              *((_QWORD*)&v213 + 1) = DWORD2(v198);
              *((_QWORD*)&v214 + 1) = DWORD2(v197);
              v215 = *((_OWORD*)v196 + 4);
              v216 = *((_OWORD*)v196 + 5);
              *((_QWORD*)&v216 + 1) = DWORD2(v200);
              v217 = *((_OWORD*)v115 + 6);
              *((_QWORD*)&v215 + 1) = DWORD2(v201);
              v196[12] = v217;
              *((_OWORD*)v196 + 2) = v213;
              *((_OWORD*)v196 + 3) = v214;
              v218 = *((_OWORD*)v196 + 6);
              *((_OWORD*)v196 + 4) = v215;
              *((_OWORD*)v196 + 5) = v216;
              *((_QWORD*)&v218 + 1) = DWORD2(v217);
              *((_DWORD*)v196 + 28) = *((_DWORD*)v115 + 28);
              *((_OWORD*)v196 + 6) = v218;
              v219 = *(float32x4_t**)(v87 + 8 * v470);
              v478 = v473;
              v220 = game_gmap_1327670(v219, &v478);
              *((_DWORD*)v199 + 29) = v220;
              v221 = v220;
              v222 = *(float32x4_t**)(v87 + 8 * v470);
              v477 = v473;
              *((_DWORD*)v199 + 30) = game_gmap_13278a0(v222, v221, &v477);
              v223 = *(_QWORD**)(v87 + 8 * v470);
              v225 = (_QWORD*)v223[7];
              v224 = v223[8];
              if ((unsigned __int64)v225 < v224) {
                *v225 = v199;
                v223[7] = v225 + 1;
                if (v136 != 0) {
                  goto LABEL_163;
                }
              }
              else {
                v226 = v223[6];
                v227 = (char*)v225 - v226;
                v228 = ((__int64)v225 - v226) >> 3;
                v229 = v228 + 1;
                if ((unsigned __int64)(v228 + 1) >> 61 != 0) {
                LABEL_675:
                  GameRoutine_1338190_alt1();
                }
                v230 = v224 - v226;
                if (v230 >> 2 > v229) {
                  v229 = v230 >> 2;
                }
                if ((unsigned __int64)v230 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v231 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v231 = v229;
                }
                if (v231 != 0) {
                  if (v231 >> 61 != 0) {
                    goto LABEL_673;
                  }
                  v232 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v231, 16, 0);
                }
                else {
                  v232 = 0;
                }
                v233 = v232 + 8 * v231;
                v234 = (unsigned __int64)v225 - v226;
                v235 = (__int64)&v227[v232 + -8 * v228];
                *(_QWORD*)&v227[v232] = v199;
                v236 = (__int64)&v227[v232 + 8];
                memcpy_alt1(v235, v226, v234);
                v223[6] = v235;
                v223[7] = v236;
                v223[8] = v233;
                if (v226 != 0) {
                  v237 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v237 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt4(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v237, v226);
                }
                v111 = v470;
                v223[7] = v236;
                if (v136 != 0) {
                LABEL_163:
                  v112 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v112 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt4(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, v136);
                }
              }
            } while (v111 != v472);
          }
          v238 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
          *v238 = 0;
          v238[1] = 0;
          v238[2] = 0;
          v238[3] = 0;
          v239 = (unsigned __int64)&v467[-v87 - 8];
          v474 = v87 + 8;
          v238[4] = 0;
          v238[5] = 0;
          if (v467 != (char*)(v87 + 8)) {
            if ((v239 & 0x8000000000000000LL) == 0) {
              v240 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr,
                  (__int64)&v467[-v87 - 8], 16, 0);
              v241 = v240 + v239;
              memcpy_alt1(v240, v474, v239);
              goto LABEL_365;
            }
          LABEL_676:
            GameRoutine_8875e0_alt1();
          }
          v240 = 0;
          v241 = 0;
        LABEL_365:
          *v238 = v240;
          v238[1] = v241;
          v238[2] = v241;
          if (v472 != 0) {
            v284 = 0;
            do {
              v286 = *(_QWORD*)(v87 + 8 * v284++);
              v287 = *(__int64**)(v286 + 48);
              v288 = *(__int64**)(v286 + 56);
              if (v287 == v288) {
              LABEL_372:
                v289 = 0;
              }
              else {
                while (1) {
                  v290 = *v287++;
                  v289 = v290;
                  if (*(_QWORD*)(v290 + 8) == *(_QWORD*)(v87 + 8 * v284)) {
                    break;
                  }
                  if (v287 == v288) {
                    goto LABEL_372;
                  }
                }
              }
              v292 = (_QWORD*)v238[4];
              v291 = v238[5];
              if ((unsigned __int64)v292 < v291) {
                *v292 = v289;
                v285 = (__int64)(v292 + 1);
              }
              else {
                v293 = v238[3];
                v294 = (char*)v292 - v293;
                v295 = ((__int64)v292 - v293) >> 3;
                v296 = v295 + 1;
                if ((unsigned __int64)(v295 + 1) >> 61 != 0) {
                LABEL_674:
                  GameRoutine_1338870_alt1();
                }
                v297 = v291 - v293;
                if (v297 >> 2 > v296) {
                  v296 = v297 >> 2;
                }
                if ((unsigned __int64)v297 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v298 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v298 = v296;
                }
                if (v298 != 0) {
                  if (v298 >> 61 != 0) {
                    goto LABEL_673;
                  }
                  v299 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v298, 16, 0);
                }
                else {
                  v299 = 0;
                }
                v300 = v299 + 8 * v298;
                v301 = (unsigned __int64)v292 - v293;
                v302 = (__int64)&v294[v299 + -8 * v295];
                *(_QWORD*)&v294[v299] = v289;
                v285 = (__int64)&v294[v299 + 8];
                memcpy_alt1(v302, v293, v301);
                v238[3] = v302;
                v238[4] = v285;
                v238[5] = v300;
                if (v293 != 0) {
                  v303 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v303 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt4(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v303, v293);
                }
              }
              v238[4] = v285;
              v87 = v471;
            } while (v284 != v472);
          }
          v304 = *(_QWORD**)v87;
          v306 = *(_QWORD**)(*(_QWORD*)v87 + 80LL);
          v305 = *(_QWORD*)(*(_QWORD*)v87 + 88LL);
          if ((unsigned __int64)v306 < v305) {
            *v306 = v238;
            v307 = (__int64)(v306 + 1);
            goto LABEL_404;
          }
          v308 = v304[9];
          v309 = (char*)v306 - v308;
          v310 = ((__int64)v306 - v308) >> 3;
          v311 = v310 + 1;
          if ((unsigned __int64)(v310 + 1) >> 61 == 0) {
            v312 = v305 - v308;
            if (v312 >> 2 > v311) {
              v311 = v312 >> 2;
            }
            if ((unsigned __int64)v312 >= 0x7FFFFFFFFFFFFFF8LL) {
              v313 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v313 = v311;
            }
            if (v313 != 0) {
              if (v313 >> 61 == 0) {
                v314 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v313, 16, 0);
                goto LABEL_400;
              }
            LABEL_673:
              GameRoutine_60a210_alt2();
            }
            v314 = 0;
          LABEL_400:
            v315 = v314 + 8 * v313;
            v316 = (unsigned __int64)v306 - v308;
            v317 = (__int64)&v309[v314 + -8 * v310];
            *(_QWORD*)&v309[v314] = v238;
            v307 = (__int64)&v309[v314 + 8];
            memcpy_alt1(v317, v308, v316);
            v304[9] = v317;
            v304[10] = v307;
            v304[11] = v315;
            if (v308 != 0) {
              v318 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v318 = 56;
              }
              nn_mem_StandardAllocator_Free_alt4(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v318, v308);
            }
          LABEL_404:
            v304[10] = v307;
            if ((char*)v87 != v467) {
              v319 = v467 - 8;
              if (v87 < (unsigned __int64)(v467 - 8)) {
                v320 = v87 + 8;
                do {
                  v321 = *(_QWORD*)(v320 - 8);
                  *(_QWORD*)(v320 - 8) = *(_QWORD*)v319;
                  *(_QWORD*)v319 = v321;
                  v319 -= 8;
                  v322 = v320 >= (unsigned __int64)v319;
                  v320 += 8LL;
                } while (!v322);
              }
            }
            v323 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
            *v323 = 0;
            v323[1] = 0;
            v323[2] = 0;
            v323[3] = 0;
            v323[4] = 0;
            v323[5] = 0;
            if (v467 == (char*)v474) {
              v324 = 0;
              v325 = 0;
            }
            else {
              if ((v239 & 0x8000000000000000LL) != 0) {
                goto LABEL_676;
              }
              v324 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v239, 16, 0);
              v325 = v324 + v239;
              memcpy_alt1(v324, v474, v239);
            }
            *v323 = v324;
            v323[1] = v325;
            v323[2] = v325;
            if (v472 != 0) {
              v326 = 0;
              do {
                v328 = *(_QWORD*)(v87 + 8 * v326++);
                v329 = *(__int64**)(v328 + 48);
                v330 = *(__int64**)(v328 + 56);
                if (v329 == v330) {
                LABEL_420:
                  v331 = 0;
                }
                else {
                  while (1) {
                    v332 = *v329++;
                    v331 = v332;
                    if (*(_QWORD*)(v332 + 8) == *(_QWORD*)(v87 + 8 * v326)) {
                      break;
                    }
                    if (v329 == v330) {
                      goto LABEL_420;
                    }
                  }
                }
                v334 = (_QWORD*)v323[4];
                v333 = v323[5];
                if ((unsigned __int64)v334 < v333) {
                  *v334 = v331;
                  v327 = (__int64)(v334 + 1);
                }
                else {
                  v335 = v323[3];
                  v336 = (char*)v334 - v335;
                  v337 = ((__int64)v334 - v335) >> 3;
                  v338 = v337 + 1;
                  if ((unsigned __int64)(v337 + 1) >> 61 != 0) {
                    goto LABEL_674;
                  }
                  v339 = v333 - v335;
                  if (v339 >> 2 > v338) {
                    v338 = v339 >> 2;
                  }
                  if ((unsigned __int64)v339 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v340 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v340 = v338;
                  }
                  if (v340 != 0) {
                    if (v340 >> 61 != 0) {
                      goto LABEL_673;
                    }
                    v341 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v340, 16,
                        0);
                  }
                  else {
                    v341 = 0;
                  }
                  v342 = v341 + 8 * v340;
                  v343 = (unsigned __int64)v334 - v335;
                  v344 = (__int64)&v336[v341 + -8 * v337];
                  *(_QWORD*)&v336[v341] = v331;
                  v327 = (__int64)&v336[v341 + 8];
                  memcpy_alt1(v344, v335, v343);
                  v323[3] = v344;
                  v323[4] = v327;
                  v323[5] = v342;
                  if (v335 != 0) {
                    v345 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v345 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt4(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v345, v335);
                  }
                }
                v323[4] = v327;
              } while (v326 != v472);
            }
            v346 = *(_QWORD**)v87;
            v348 = *(_QWORD**)(*(_QWORD*)v87 + 80LL);
            v347 = *(_QWORD*)(*(_QWORD*)v87 + 88LL);
            if ((unsigned __int64)v348 < v347) {
              *v348 = v323;
              v82 = (__int64)(v348 + 1);
              goto LABEL_102;
            }
            v349 = v346[9];
            v350 = (char*)v348 - v349;
            v351 = ((__int64)v348 - v349) >> 3;
            v352 = v351 + 1;
            if ((unsigned __int64)(v351 + 1) >> 61 == 0) {
              v353 = v347 - v349;
              if (v353 >> 2 > v352) {
                v352 = v353 >> 2;
              }
              if ((unsigned __int64)v353 >= 0x7FFFFFFFFFFFFFF8LL) {
                v354 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v354 = v352;
              }
              if (v354 != 0) {
                if (v354 >> 61 != 0) {
                  goto LABEL_673;
                }
                v355 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v354, 16, 0);
              }
              else {
                v355 = 0;
              }
              v356 = v355 + 8 * v354;
              v357 = (unsigned __int64)v348 - v349;
              v358 = (__int64)&v350[v355 + -8 * v351];
              *(_QWORD*)&v350[v355] = v323;
              v82 = (__int64)&v350[v355 + 8];
              memcpy_alt1(v358, v349, v357);
              v346[9] = v358;
              v346[10] = v82;
              v346[11] = v356;
              if (v349 != 0) {
                v359 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v359 = 56;
                }
                nn_mem_StandardAllocator_Free_alt4(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v359, v349);
              }
            LABEL_102:
              v15 = v468;
              v83 = v469;
              v346[10] = v82;
            LABEL_103:
              v84 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v84 = 56;
              }
              nn_mem_StandardAllocator_Free_alt4(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v87);
              goto LABEL_106;
            }
          }
          GameRoutine_13381b0_alt1();
        }
      }
    LABEL_156:
      v109 = *v81;
      v110 = v81[1];
      v15 = v468;
      if (*v81 == v110) {
        goto LABEL_157;
      }
      while (2) {
        if ((*(_BYTE*)v109 & 1) != 0) {
          v244 = *(_QWORD*)(v109 + 16);
        }
        else {
          v244 = v109 + 1;
        }
        v245 = game_HashString_alt1(v244);
        v246 = v15[2];
        if (v246 == 0 || v15[4] == 0) {
          goto LABEL_242;
        }
        v248 = v246 - 1;
        if ((v246 & (v246 - 1)) != 0) {
          v249 = v245;
          if (v246 <= v245) {
            v249 = v245 % (unsigned int)v246;
          }
        }
        else {
          v249 = ((_DWORD)v246 - 1) & v245;
        }
        v250 = *(__int64***)(v15[1] + 8 * v249);
        if (v250 == nullptr) {
          goto LABEL_242;
        }
        v251 = *v250;
        if (v251 == nullptr) {
          goto LABEL_242;
        }
        if ((v246 & v248) == 0) {
          while (1) {
            v253 = v251[1];
            if (v253 == v245) {
              if (*((_DWORD*)v251 + 4) == v245) {
                goto LABEL_270;
              }
            }
            else if ((v253 & v248) != v249) {
              goto LABEL_242;
            }
            v251 = (__int64*)*v251;
            if (v251 == nullptr) {
              goto LABEL_242;
            }
          }
        }
        while (1) {
          v252 = v251[1];
          if (v252 == v245) {
            break;
          }
          if (v252 >= v246) {
            v252 %= v246;
          }
          if (v252 != v249) {
            goto LABEL_242;
          }
        LABEL_259:
          v251 = (__int64*)*v251;
          if (v251 == nullptr) {
            goto LABEL_242;
          }
        }
        if (*((_DWORD*)v251 + 4) != v245) {
          goto LABEL_259;
        }
      LABEL_270:
        v254 = v251[3];
        if (v254 == 0 || (unsigned __int8)Impl_13261c0_alt1(v251[3]) != 13) {
          goto LABEL_242;
        }
        v255 = v15;
        v256 = (char*)v15[6];
        v257 = (char*)v255[7];
        if (v256 != v257) {
          v258 = v257 - v256 - 8;
          if ((~(_BYTE)v258 & 0x18) != 0) {
            v259 = ((unsigned __int8)((unsigned int)v258 >> 3) + 1) & 3;
            while (*(_QWORD*)v256 != v254) {
              v256 += 8;
              if (--v259 == 0) {
                goto LABEL_277;
              }
            }
          }
          else {
          LABEL_277:
            if (v258 >= 0x18) {
              v256 += 16;
              while (1) {
                if (*((_QWORD*)v256 - 2) == v254) {
                  v256 -= 16;
                  goto LABEL_279;
                }
                if (*((_QWORD*)v256 - 1) == v254) {
                  v256 -= 8;
                  goto LABEL_279;
                }
                if (*(_QWORD*)v256 == v254) {
                  goto LABEL_279;
                }
                if (*((_QWORD*)v256 + 1) == v254) {
                  break;
                }
                v265 = v256 + 16;
                v256 += 32;
                if (v265 == v257) {
                  goto LABEL_278;
                }
              }
              v256 += 8;
            }
            else {
            LABEL_278:
              v256 = v257;
            }
          }
        }
      LABEL_279:
        v260 = v257 - (v256 + 8);
        if (v257 != v256 + 8) {
          memmove_alt1((__int64)v256, (__int64)(v256 + 8), v257 - (v256 + 8));
        }
        v261 = v468[2];
        v468[7] = &v256[v260];
        if (v261 == 0 || v468[4] == 0) {
          goto LABEL_341;
        }
        v262 = *(unsigned int*)(v254 + 96);
        v263 = v261 - 1;
        if ((v261 & (v261 - 1)) != 0) {
          v264 = *(unsigned int*)(v254 + 96);
          if (v261 <= v262) {
            v264 = (unsigned int)v262 % (unsigned int)v261;
          }
        }
        else {
          v264 = ((_DWORD)v261 - 1) & (unsigned int)v262;
        }
        v266 = v468[1];
        v267 = *(__int64**)(v266 + 8 * v264);
        if (v267 == nullptr) {
          goto LABEL_341;
        }
        v268 = *v267;
        if (*v267 == 0) {
          goto LABEL_341;
        }
        if ((v261 & v263) == 0) {
          while (1) {
            v270 = *(_QWORD*)(v268 + 8);
            if (v270 == v262) {
              if (*(_DWORD*)(v268 + 16) == (_DWORD)v262) {
                goto LABEL_311;
              }
            }
            else if ((v270 & v263) != v264) {
              goto LABEL_341;
            }
            v268 = *(_QWORD*)v268;
            if (v268 == 0) {
              goto LABEL_341;
            }
          }
        }
        while (2) {
          v269 = *(_QWORD*)(v268 + 8);
          if (v269 != v262) {
            if (v269 >= v261) {
              v269 %= v261;
            }
            if (v269 != v264) {
              goto LABEL_341;
            }
          }
          else if (*(_DWORD*)(v268 + 16) == (_DWORD)v262) {
            break;
          }
          v268 = *(_QWORD*)v268;
          if (v268 == 0) {
            goto LABEL_341;
          }
          continue;
        }
      LABEL_311:
        if ((v261 & v263) != 0) {
          if (v261 <= v262) {
            v262 %= v261;
          }
        }
        else {
          v262 &= v263;
        }
        v271 = *(__int64**)(v266 + 8 * v262);
        do {
          v272 = v271;
          v271 = (__int64*)*v271;
        } while (v271 != (__int64*)v268);
        if (v272 == v463) {
          goto LABEL_326;
        }
        v273 = v272[1];
        if ((v261 & v263) == 0) {
          if ((v273 & v263) == v262) {
            goto LABEL_332;
          }
        LABEL_326:
          if (*(_QWORD*)v268 != 0) {
            v274 = *(_QWORD*)(*(_QWORD*)v268 + 8LL);
            if ((v261 & v263) != 0) {
              if (v274 >= v261) {
                v274 %= v261;
              }
              if (v274 == v262) {
                goto LABEL_332;
              }
            }
            else if ((v274 & v263) == v262) {
              goto LABEL_332;
            }
          }
          *(_QWORD*)(v266 + 8 * v262) = 0;
          goto LABEL_332;
        }
        if (v273 >= v261) {
          v273 %= v261;
        }
        if (v273 != v262) {
          goto LABEL_326;
        }
      LABEL_332:
        v275 = *(_QWORD*)v268;
        if (*(_QWORD*)v268 != 0) {
          v276 = *(_QWORD*)(v275 + 8);
          if ((v261 & v263) != 0) {
            if (v276 >= v261) {
              v276 %= v261;
            }
            if (v276 != v262) {
            LABEL_337:
              *(_QWORD*)(v468[1] + 8 * v276) = v272;
              v275 = *(_QWORD*)v268;
            }
          }
          else {
            v276 &= v263;
            if (v276 != v262) {
              goto LABEL_337;
            }
          }
        }
        *v272 = v275;
        *(_QWORD*)v268 = 0;
        --v468[4];
        v277 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v277 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v277, v268);
      LABEL_341:
        v279 = (char*)v468[12];
        v278 = (char*)v468[13];
        if (v279 != v278) {
          v280 = v278 - v279 - 8;
          if ((~(_BYTE)v280 & 0x18) != 0) {
            v281 = ((unsigned __int8)((unsigned int)v280 >> 3) + 1) & 3;
            while (*(_QWORD*)v279 != v254) {
              v279 += 8;
              if (--v281 == 0) {
                goto LABEL_346;
              }
            }
          }
          else {
          LABEL_346:
            if (v280 >= 0x18) {
              v279 += 16;
              while (1) {
                if (*((_QWORD*)v279 - 2) == v254) {
                  v279 -= 16;
                  goto LABEL_348;
                }
                if (*((_QWORD*)v279 - 1) == v254) {
                  v279 -= 8;
                  goto LABEL_348;
                }
                if (*(_QWORD*)v279 == v254) {
                  goto LABEL_348;
                }
                if (*((_QWORD*)v279 + 1) == v254) {
                  break;
                }
                v283 = v279 + 16;
                v279 += 32;
                if (v283 == v278) {
                  goto LABEL_347;
                }
              }
              v279 += 8;
            }
            else {
            LABEL_347:
              v279 = (char*)v468[13];
            }
          }
        }
      LABEL_348:
        v282 = v278 - (v279 + 8);
        if (v278 != v279 + 8) {
          memmove_alt1((__int64)v279, (__int64)(v279 + 8), v278 - (v279 + 8));
        }
        v242 = &v279[v282];
        v15 = v468;
        v468[13] = v242;
        GameHr_1325de0(v254);
        v243 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v243 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v243, v254);
      LABEL_242:
        v109 += 24;
        if (v109 != v110) {
          continue;
        }
        break;
      }
    LABEL_157:
      v83 = v469;
      if (v87 != 0) {
        goto LABEL_103;
      }
    LABEL_106:
      v81 = v83 + 9;
      if (v81 != v466) {
        continue;
      }
      break;
    }
    v81 = v481_.v484;
    if (v481_.v484 != nullptr) {
    LABEL_452:
      v360 = v481_.v485;
      if (v81 == v481_.v485) {
        goto LABEL_455;
      }
      do {
        v360 -= 9;
        SpotMgr_13381e0(v360);
      } while (v360 != v81);
      v481_.v485 = v81;
      v81 = v481_.v484;
      if (v481_.v484 != nullptr) {
      LABEL_455:
        v361 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v361 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v361, (__int64)v81);
      }
    }
  LABEL_458:
    v19 = v481_.v481;
    v18 = v465;
    if (v481_.v481 != 0) {
      v362 = v481_.v482;
      if (v481_.v481 == v481_.v482) {
        goto LABEL_9;
      }
      v363 = v481_.v482;
      do {
        v364 = *(_BYTE*)(v363 - 64);
        v363 -= 64;
        if ((v364 & 1) != 0) {
          v365 = *(_QWORD*)(v362 - 48);
          if (v365 != 0) {
            v366 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v366 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v366, v365);
          }
        }
        v362 = v363;
      } while (v363 != v19);
      v18 = v465;
      v481_.v482 = v19;
      v19 = v481_.v481;
      if (v481_.v481 != 0) {
      LABEL_9:
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
      }
    }
  LABEL_12:
    v18 += 24;
    if (v18 != v464) {
      continue;
    }
    break;
  }
LABEL_467:
  v489 = COERCE_AS(float32x4_t, GameData_1a82f20);
  v367 = *(unsigned int***)(*GameData_212ca10[0] + 64);
  v368 = *(unsigned int***)(*GameData_212ca10[0] + 72);
  if (v367 == v368) {
    goto LABEL_551;
  }
  v369 = GameData_212c780;
  while (2) {
    v370 = *v367;
    if (*v367 == nullptr) {
      goto LABEL_495;
    }
    v371 = *(_QWORD**)(*v369 + 8);
    v372 = v371[2];
    if (v372 == 0 || v371[4] == 0) {
      goto LABEL_495;
    }
    v374 = *v370;
    v375 = v372 - 1;
    if ((v372 & (v372 - 1)) != 0) {
      v376 = *v370;
      if (v372 <= v374) {
        v376 = (unsigned int)v374 % (unsigned int)v372;
      }
    }
    else {
      v376 = ((_DWORD)v372 - 1) & (unsigned int)v374;
    }
    v377 = *(__int64***)(v371[1] + 8 * v376);
    if (v377 == nullptr || (v378 = *v377) == nullptr) {
    LABEL_495:
      v381 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 304, 16, 0);
      v382 = *((const char**)v370 + 1);
      v383 = v381;
      if (v382 != nullptr) {
        v384 = strchr_alt1(v382, 95);
        if (v384 != 0) {
          v382 = (const char*)(v384 + 1);
        }
      }
      v385 = strlen_alt1(v382);
      if (v385 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v386 = v385;
      if (v385 >= 0x17) {
        if ((v385 | 7) == 0x17) {
          v388 = 26;
        }
        else {
          v388 = (v385 | 7) + 1;
        }
        v387 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v388, 16, 0);
        v481_.v482 = v386;
        v481_.v483 = v387;
        v481_.v481 = v388 | 1;
      }
      else {
        v387 = (char*)&v481_.v481 + 1;
        LOBYTE(v481_.v481) = 2 * v385;
        if (v385 == 0) {
          goto LABEL_507;
        }
      }
      memmove_alt1((__int64)v387, (__int64)v382, v386);
    LABEL_507:
      v387[v386] = 0;
      GameRoutine_1325100_alt1(v383, &v481_.v481, &v489);
      if ((v481_.v481 & 1) != 0 && v481_.v483 != nullptr) {
        v389 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v389 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v389, (__int64)v481_.v483);
      }
      v15 = v468;
      v481_.v481 = v383;
      v391 = (__int64*)v468[16];
      v390 = v468[17];
      if ((unsigned __int64)v391 >= v390) {
        v393 = v468[15];
        v394 = (char*)v391 - v393;
        v395 = ((__int64)v391 - v393) >> 3;
        v396 = v395 + 1;
        if ((unsigned __int64)(v395 + 1) >> 61 != 0) {
          goto LABEL_676;
        }
        v397 = v390 - v393;
        if (v397 >> 2 > v396) {
          v396 = v397 >> 2;
        }
        if ((unsigned __int64)v397 >= 0x7FFFFFFFFFFFFFF8LL) {
          v398 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v398 = v396;
        }
        if (v398 != 0) {
          if (v398 >> 61 != 0) {
            goto LABEL_673;
          }
          v399 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v398, 16, 0);
        }
        else {
          v399 = 0;
        }
        v400 = v399 + 8 * v398;
        v401 = (unsigned __int64)v391 - v393;
        v402 = (__int64)&v394[v399 + -8 * v395];
        *(_QWORD*)&v394[v399] = v383;
        v392 = (__int64)&v394[v399 + 8];
        memcpy_alt1(v402, v393, v401);
        v468[15] = v402;
        v468[16] = v392;
        v15 = v468;
        v468[17] = v400;
        if (v393 != 0) {
          v403 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v403 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v403, v393);
        }
      }
      else {
        *v391 = v383;
        v392 = (__int64)(v391 + 1);
      }
      v404 = *(unsigned int*)(v383 + 96);
      v405 = v15[2];
      v15[16] = v392;
      LANES128(v488).n128_u32[0] = v404;
      if (v405 != 0 && v15[4] != 0) {
        v406 = v405 - 1;
        if ((v405 & (v405 - 1)) != 0) {
          v407 = v404;
          if (v405 <= v404) {
            v407 = (unsigned int)v404 % (unsigned int)v405;
          }
        }
        else {
          v407 = ((_DWORD)v405 - 1) & (unsigned int)v404;
        }
        v408 = *(__int64***)(v15[1] + 8 * v407);
        if (v408 != nullptr) {
          v409 = *v408;
          if (v409 != nullptr) {
            if ((v405 & v406) == 0) {
              while (1) {
                v411 = v409[1];
                if (v411 == v404) {
                  if (*((_DWORD*)v409 + 4) == (_DWORD)v404) {
                    goto LABEL_550;
                  }
                }
                else if ((v411 & v406) != v407) {
                  goto LABEL_549;
                }
                v409 = (__int64*)*v409;
                if (v409 == nullptr) {
                  goto LABEL_549;
                }
              }
            }
            do {
              v410 = v409[1];
              if (v410 == v404) {
                if (*((_DWORD*)v409 + 4) == (_DWORD)v404) {
                  goto LABEL_550;
                }
              }
              else {
                if (v410 >= v405) {
                  v410 %= v405;
                }
                if (v410 != v407) {
                  break;
                }
              }
              v409 = (__int64*)*v409;
            } while (v409 != nullptr);
          }
        }
      }
    LABEL_549:
      SpotMgr_1338320((__int64)(v15 + 1), (unsigned int*)&v488, (int*)&v488,
                      &v481_.v481);
      goto LABEL_550;
    }
    if ((v372 & v375) == 0) {
      while (1) {
        v380 = v378[1];
        if (v380 == v374) {
          if (*((_DWORD*)v378 + 4) == (_DWORD)v374) {
            goto LABEL_494;
          }
        }
        else if ((v380 & v375) != v376) {
          goto LABEL_495;
        }
        v378 = (__int64*)*v378;
        if (v378 == nullptr) {
          goto LABEL_495;
        }
      }
    }
    while (1) {
      v379 = v378[1];
      if (v379 == v374) {
        break;
      }
      if (v379 >= v372) {
        v379 %= v372;
      }
      if (v379 != v376) {
        goto LABEL_495;
      }
    LABEL_483:
      v378 = (__int64*)*v378;
      if (v378 == nullptr) {
        goto LABEL_495;
      }
    }
    if (*((_DWORD*)v378 + 4) != (_DWORD)v374) {
      goto LABEL_483;
    }
  LABEL_494:
    if (v378[3] == 0) {
      goto LABEL_495;
    }
  LABEL_550:
    if (++v367 != v368) {
      continue;
    }
    break;
  }
LABEL_551:
  v412 = (__int64*)v15[6];
  v413 = (__int64*)v15[7];
  if (v412 != v413) {
    while (1) {
      v412 = (__int64*)v468[6];
      v413 = (__int64*)v468[7];
      if (v412 == v413) {
        break;
      }
      v414 = 0;
      do {
        v415 = *v412;
        v416 = *(__int64**)(*v412 + 48);
        v417 = *(__int64**)(*v412 + 56);
        while (v416 != v417) {
          v418 = *v416;
          if ((unsigned __int8)Impl_13261c0_alt1(v415) != 4 &&
              *(_QWORD*)(v415 + 136) != 0) {
            v420 = *(_QWORD*)(v418 + 8);
            v421 = (unsigned __int8)Impl_13261c0_alt1(v420) == 4 ||
                   *(_QWORD*)(v420 + 136) == 0;
            if (v421 &&
                (unsigned __int8)Impl_13261c0_alt1(*(_QWORD*)(v418 + 8)) != 4) {
              v422 = *(_QWORD*)(v418 + 8);
              v414 = 1;
              if ((unsigned __int8)Impl_13261c0_alt1(v415) == 4) {
                v423 = 0;
              }
              else {
                v423 = *(_QWORD*)(v415 + 136);
              }
              *(_QWORD*)(v422 + 136) = v423;
            }
          }
          ++v416;
        }
        ++v412;
      } while (v412 != v413);
      if ((v414 & 1) == 0) {
        v412 = (__int64*)v468[6];
        v413 = (__int64*)v468[7];
        break;
      }
    }
  }
  if (v412 != v413) {
    while (1) {
      v412 = (__int64*)v468[6];
      v413 = (__int64*)v468[7];
      if (v412 == v413) {
        break;
      }
      v424 = 0;
      do {
        v425 = *v412;
        v427 = *(_QWORD*)(*v412 + 48);
        v426 = *(_QWORD*)(*v412 + 56);
        if (v427 != v426) {
          v428 = *(_QWORD*)(v425 + 128);
          if (v428 != 0) {
            v429 = v427 + 8;
          LABEL_584:
            v430 = *(_QWORD*)(*(_QWORD*)(v429 - 8) + 8LL);
            if (*(_QWORD*)(v430 + 128) == 0) {
              v424 = 1;
              *(_QWORD*)(v430 + 128) = v428;
            }
            while (v429 != v426) {
              v428 = *(_QWORD*)(v425 + 128);
              v429 += 8;
              if (v428 != 0) {
                goto LABEL_584;
              }
            }
          }
        }
        ++v412;
      } while (v412 != v413);
      if ((v424 & 1) == 0) {
        v412 = (__int64*)v468[6];
        v413 = (__int64*)v468[7];
        break;
      }
    }
  }
  if (v412 != v413) {
    v431 = GameData_212ca80[0];
    v432 = GameData_212c978[0];
    do {
      v433 = *v412;
      v434 = (unsigned __int8)Impl_13261c0_alt1(*v412) == 4 ||
             *(_QWORD*)(v433 + 136) == 0;
      if (!v434 || (unsigned __int8)Impl_13261c0_alt1(v433) == 4) {
        goto LABEL_625;
      }
      v435 = game_HashString_alt1((__int64)&GameData_1ab9636);
      if (v435 == 0) {
        goto LABEL_623;
      }
      v436 = *(_QWORD*)(*v431 + 96);
      if (v436 == 0 || *(_QWORD*)(*v431 + 112) == 0) {
        goto LABEL_623;
      }
      v438 = v436 - 1;
      if ((v436 & (v436 - 1)) != 0) {
        v439 = v435;
        if (v435 >= v436) {
          v439 = v435 % v436;
        }
      }
      else {
        v439 = v438 & v435;
      }
      v440 = *(_QWORD**)(*(_QWORD*)(*v431 + 88) + 8 * v439);
      if (v440 == nullptr || (v441 = (_QWORD*)*v440) == nullptr) {
      LABEL_623:
        v443 = 0;
        goto LABEL_624;
      }
      if ((v436 & v438) == 0) {
        while (1) {
          v444 = v441[1];
          if (v444 == v435) {
            if (v441[2] == v435) {
              goto LABEL_656;
            }
          }
          else if ((v444 & v438) != v439) {
            goto LABEL_623;
          }
          v441 = (_QWORD*)*v441;
          v443 = 0;
          if (v441 == nullptr) {
            goto LABEL_624;
          }
        }
      }
      while (1) {
        v442 = v441[1];
        if (v442 == v435) {
          break;
        }
        if (v442 >= v436) {
          v442 %= v436;
        }
        if (v442 != v439) {
          goto LABEL_623;
        }
      LABEL_613:
        v441 = (_QWORD*)*v441;
        if (v441 == nullptr) {
          goto LABEL_623;
        }
      }
      if (v441[2] != v435) {
        goto LABEL_613;
      }
    LABEL_656:
      v443 = v441[3];
    LABEL_624:
      *(_QWORD*)(v433 + 136) = v443;
    LABEL_625:
      if (*(_QWORD*)(v433 + 128) != 0) {
        if (*(_QWORD*)(v433 + 120) != 0) {
          goto LABEL_654;
        }
        goto LABEL_592;
      }
      v445 = game_HashString_alt1((__int64)&GameData_1a86d1f);
      if (v445 == 0) {
        goto LABEL_652;
      }
      v446 = *(_QWORD*)(*v432 + 96);
      if (v446 == 0 || *(_QWORD*)(*v432 + 112) == 0) {
        goto LABEL_652;
      }
      v448 = v446 - 1;
      if ((v446 & (v446 - 1)) != 0) {
        v449 = v445;
        if (v445 >= v446) {
          v449 = v445 % v446;
        }
      }
      else {
        v449 = v448 & v445;
      }
      v450 = *(_QWORD**)(*(_QWORD*)(*v432 + 88) + 8 * v449);
      if (v450 == nullptr || (v451 = (_QWORD*)*v450) == nullptr) {
      LABEL_652:
        v453 = 0;
        goto LABEL_653;
      }
      if ((v446 & v448) == 0) {
        while (1) {
          v454 = v451[1];
          if (v454 == v445) {
            if (v451[2] == v445) {
              goto LABEL_655;
            }
          }
          else if ((v454 & v448) != v449) {
            goto LABEL_652;
          }
          v451 = (_QWORD*)*v451;
          v453 = 0;
          if (v451 == nullptr) {
            goto LABEL_653;
          }
        }
      }
      while (2) {
        v452 = v451[1];
        if (v452 != v445) {
          if (v452 >= v446) {
            v452 %= v446;
          }
          if (v452 != v449) {
            goto LABEL_652;
          }
        }
        else if (v451[2] == v445) {
          break;
        }
        v451 = (_QWORD*)*v451;
        if (v451 == nullptr) {
          goto LABEL_652;
        }
        continue;
      }
    LABEL_655:
      v453 = v451[3];
    LABEL_653:
      *(_QWORD*)(v433 + 128) = v453;
      if (*(_QWORD*)(v433 + 120) != 0) {
      LABEL_654:
        game_gmap_1329500((__int64)&v481_.v481, (char*)v433, 1, 1);
      }
    LABEL_592:
      ++v412;
    } while (v412 != v413);
  }
  v455 = v475_.v475;
  v456 = v468[18];
  *((_BYTE*)v468 + 208) = 0;
  v468[25] = 0;
  v468[19] = v456;
  v468[22] = v468[21];
  if (v455 != 0) {
    v457 = v475_.v476;
    if (v455 == v475_.v476) {
      goto LABEL_668;
    }
    v458 = v475_.v476;
    do {
      v459 = *(_BYTE*)(v458 - 24);
      v458 -= 24;
      if ((v459 & 1) != 0) {
        v460 = *(_QWORD*)(v457 - 8);
        if (v460 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v461 = 128;
          }
          else {
            v461 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v461, v460);
        }
      }
      v457 = v458;
    } while (v458 != v455);
    v475_.v476 = v455;
    v455 = v475_.v475;
    if (v475_.v475 != 0) {
    LABEL_668:
      v462 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v462 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v462, v455);
    }
  }
}

__int64 SpotMgr_Unknown3(__int64 a1)
{
  __int64 result;

  SpotMgr_132fca0_alt1(*(_QWORD*)(a1 + 8));
  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

void SpotMgr_132fca0(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64** v10;
  __int64** v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;

  v1 = (__int64*)a1[6];
  v2 = (__int64*)a1[7];
  if (v1 != v2) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v6 = *v1;
      v7 = *(__int64**)(*v1 + 48);
      v8 = *(__int64**)(*v1 + 56);
      while (v7 != v8) {
        if (*v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v4 + v9, *v7);
        }
        ++v7;
      }
      v10 = *(__int64***)(v6 + 72);
      v11 = *(__int64***)(v6 + 80);
      while (v10 != v11) {
        v13 = *v10;
        if (*v10 != nullptr) {
          v14 = v13[3];
          if (v14 != 0) {
            v15 = *(_QWORD*)v4;
            v13[4] = v14;
            if (*(_QWORD*)(v15 + 200) != 0) {
              v16 = 128;
            }
            else {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(v15 + v16, v14);
          }
          v17 = *v13;
          if (*v13 != 0) {
            v18 = *(_QWORD*)v4;
            v13[1] = v17;
            if (*(_QWORD*)(v18 + 200) != 0) {
              v19 = 128;
            }
            else {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(v18 + v19, v17);
          }
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v4 + v12, (__int64)v13);
        }
        ++v10;
      }
      GameHr_1325de0(v6);
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v4 + v5, v6);
      ++v1;
    } while (v1 != v2);
  }
  v20 = (__int64*)a1[15];
  v21 = (__int64*)a1[16];
  if (v20 != v21) {
    v22 = fw_memory_g_heap_manager_ptr;
    do {
      v23 = *v20;
      if (*v20 != 0) {
        GameHr_1325de0(*v20);
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v22 + v24, v23);
      }
      ++v20;
    } while (v20 != v21);
  }
  a1[7] = a1[6];
  if (a1[4] != 0) {
    v25 = (_QWORD*)a1[3];
    if (v25 != nullptr) {
      v26 = fw_memory_g_heap_manager_ptr;
      do {
        v27 = (_QWORD*)*v25;
        if (*(_QWORD*)(*(_QWORD*)v26 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v26 + v28, (__int64)v25);
        v25 = v27;
      } while (v27 != nullptr);
    }
    v29 = a1[2];
    a1[3] = 0;
    if (v29 != 0) {
      v30 = v29 & 7;
      if (v29 >= 8) {
        v32 = v29 & 0xFFFFFFFFFFFFFFF8LL;
        v31 = 0;
        do {
          *(_QWORD*)(a1[1] + 8 * v31) = 0;
          *(_QWORD*)(a1[1] + 8 * v31 + 8) = 0;
          *(_QWORD*)(a1[1] + 8 * v31 + 16) = 0;
          *(_QWORD*)(a1[1] + 8 * v31 + 24) = 0;
          *(_QWORD*)(a1[1] + 8 * v31 + 32) = 0;
          *(_QWORD*)(a1[1] + 8 * v31 + 40) = 0;
          *(_QWORD*)(a1[1] + 8 * v31 + 48) = 0;
          v33 = a1[1] + 8 * v31;
          v31 += 8;
          *(_QWORD*)(v33 + 56) = 0;
        } while (v32 != v31);
      }
      else {
        v31 = 0;
      }
      if (v30 != 0) {
        v34 = 8 * v31;
        do {
          --v30;
          *(_QWORD*)(a1[1] + v34) = 0;
          v34 += 8;
        } while (v30 != 0);
      }
    }
    a1[4] = 0;
  }
  a1[10] = a1[9];
  a1[13] = a1[12];
  a1[19] = a1[18];
  a1[22] = a1[21];
  a1[16] = a1[15];
}

__int64 SpotMgr_132ffa0(unsigned int* a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(GameData_21c9700 + 8);
  v2 = v1[2];
  if (v2 == 0 || v1[4] == 0) {
    return 0;
  }
  v4 = *a1;
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v6 = *a1;
    if (v2 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)v2;
    }
  }
  else {
    v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
  }
  v7 = *(__int64***)(v1[1] + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = *v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v4) {
        if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
          return v8[3];
        }
      }
      else if ((v10 & v5) != v6) {
        return 0;
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v4) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_14:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v8 + 4) != (_DWORD)v4) {
    goto LABEL_14;
  }
  return v8[3];
}

__int64 SpotMgr_13301a0(const char* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  char* v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char* v16;
  unsigned int v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 result;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    unsigned __int64 v31;
    __int64 v32;
  } v30_;
  struct {
    __int64 v33;
    unsigned __int64 v34;
    char* v35;
  } v33_;

  v2 = strlen_alt1(a1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_69;
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v5, 16, 0);
    v33_.v34 = v3;
    v33_.v35 = v4;
    v33_.v33 = v5 | 1;
  }
  else {
    LOBYTE(v33_.v33) = 2 * v2;
    v4 = (char*)&v33_.v33 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memcpy_alt1((__int64)v4, (__int64)a1, v3);
LABEL_10:
  v4[v3] = 0;
  v6 = (unsigned __int64)(unsigned __int8)v33_.v33 >> 1;
  if ((v33_.v33 & 1) != 0) {
    v7 = v33_.v35;
  }
  else {
    v7 = (char*)&v33_.v33 + 1;
  }
  if ((v33_.v33 & 1) != 0) {
    v6 = v33_.v34;
  }
  v8 = v6;
  do {
    if (v8 == 0) {
      v10 = 0;
      goto LABEL_21;
    }
    v9 = (unsigned __int8)v7[--v8];
  } while (v9 != 95);
  v10 = v8 + 1;
  if (v8 + 1 > v6) {
    fs_60a230();
  }
LABEL_21:
  v11 = v6 - v10;
  if (v6 - v10 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_69:
    String_60a1d0_alt1();
  }
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v11 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v30_.v31 = v11;
    v30_.v32 = (__int64)v12;
    v30_.v30 = v13 | 1;
  }
  else {
    LOBYTE(v30_.v30) = 2 * v11;
    v12 = (char*)&v30_.v30 + 1;
    if (v6 == v10) {
      goto LABEL_30;
    }
  }
  memmove_alt1((__int64)v12, (__int64)&v7[v10], v11);
LABEL_30:
  v14 = v33_.v33;
  v12[v11] = 0;
  if ((v14 & 1) != 0 && v33_.v35 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v33_.v35);
  }
  v33_.v33 = v30_.v30;
  v33_.v34 = v30_.v31;
  if ((v30_.v30 & 1) != 0) {
    v16 = (char*)v30_.v32;
  }
  else {
    v16 = (char*)&v33_.v33 + 1;
  }
  v33_.v35 = (char*)v30_.v32;
  v17 = game_HashString_alt1((__int64)v16);
  v18 = *(_QWORD**)(GameData_21c9700 + 8);
  v19 = v18[2];
  if (v19 != 0 && v18[4] != 0) {
    v21 = v19 - 1;
    if ((v19 & (v19 - 1)) != 0) {
      v22 = v17;
      if (v19 <= v17) {
        v22 = v17 % (unsigned int)v19;
      }
    }
    else {
      v22 = ((_DWORD)v19 - 1) & v17;
    }
    v23 = *(__int64***)(v18[1] + 8 * v22);
    if (v23 != nullptr) {
      v24 = *v23;
      if (v24 != nullptr) {
        if ((v19 & v21) == 0) {
          while (1) {
            v26 = v24[1];
            if (v26 == v17) {
              if (*((_DWORD*)v24 + 4) == v17) {
                goto LABEL_67;
              }
            }
            else if ((v26 & v21) != v22) {
              goto LABEL_61;
            }
            v24 = (__int64*)*v24;
            if (v24 == nullptr) {
              goto LABEL_61;
            }
          }
        }
        do {
          v25 = v24[1];
          if (v25 == v17) {
            if (*((_DWORD*)v24 + 4) == v17) {
            LABEL_67:
              result = v24[3];
              if ((v33_.v33 & 1) == 0) {
                return result;
              }
              goto LABEL_62;
            }
          }
          else {
            if (v25 >= v19) {
              v25 %= v19;
            }
            if (v25 != v22) {
              break;
            }
          }
          v24 = (__int64*)*v24;
        } while (v24 != nullptr);
      }
    }
  }
LABEL_61:
  result = 0;
  if ((v33_.v33 & 1) == 0) {
    return result;
  }
LABEL_62:
  if (v33_.v35 != nullptr) {
    v28 = result;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v33_.v35);
    return v28;
  }
  return result;
}

__int64 SpotMgr_13304c0(unsigned int* a1)
{
  _QWORD* v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;

  v1 = *(_QWORD**)(GameData_21c9700 + 8);
  v2 = v1[2];
  if (v2 == 0 || v1[4] == 0) {
    return 0;
  }
  v4 = *a1;
  v5 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v6 = *a1;
    if (v2 <= v4) {
      v6 = (unsigned int)v4 % (unsigned int)v2;
    }
  }
  else {
    v6 = ((_DWORD)v2 - 1) & (unsigned int)v4;
  }
  v7 = *(__int64***)(v1[1] + 8 * v6);
  if (v7 == nullptr) {
    return 0;
  }
  v8 = *v7;
  if (v8 == nullptr) {
    return 0;
  }
  if ((v2 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == v4) {
        if (*((_DWORD*)v8 + 4) == (_DWORD)v4) {
          return v8[3];
        }
      }
      else if ((v10 & v5) != v6) {
        return 0;
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v4) {
      break;
    }
    if (v9 >= v2) {
      v9 %= v2;
    }
    if (v9 != v6) {
      return 0;
    }
  LABEL_14:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v8 + 4) != (_DWORD)v4) {
    goto LABEL_14;
  }
  return v8[3];
}

__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8 x8_, char** a1,
                                                char a2, char** a3)
{
  char** a4 = (char**)PSEUDO_X8_VALUE(x8_);
  char* v4;
  char** v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  char** v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  __int64 v32;
  int v33;
  __int64* v34;
  __int64* v35;
  _QWORD* v36;
  __int64* v37;
  __int64 v38;
  _QWORD* i;
  __int64* v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  __int64* v44;
  __int64 v45;
  _QWORD* j;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  char* v51;
  unsigned __int64 v52;
  __int64 v53;
  char* v54;
  char* v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  char* v60;
  unsigned __int64 v61;
  __int64* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  _QWORD* v67;
  _QWORD* v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  _QWORD* v84;
  _QWORD* v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  char v89;
  char* v90;
  char* v91;
  __int64 v92;
  char* v93;
  unsigned __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  char* v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64* v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  _QWORD* v106;
  unsigned __int64 v107;
  __int64 v108;
  _QWORD* v109;
  _QWORD* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  char* v117;
  char* v118;
  char* v119;
  char* v120;
  __int64* v121;
  _QWORD* v124;
  __int64 v125;
  struct {
    __int64 v126;
    unsigned __int64 v127;
    _QWORD* v128;
    __int64 v129;
    int v130;
  } v126_;
  __int64* v131;
  __int64* v132;

  v117 = nullptr;
  v118 = nullptr;
  v4 = a1[1];
  v6 = a1;
  v7 = nullptr;
  v8 = fw_memory_g_heap_manager_ptr;
  do {
    if (v4 == *v6 + 8) {
      *a4 = v7;
      a4[1] = v118;
      a4[2] = v117;
      return;
    }
    v10 = *(_QWORD*)v8;
    v131 = *((__int64**)v4 - 2);
    v9 = (__int64)v131;
    v11 = *((__int64**)v4 - 1);
    v126_.v128 = nullptr;
    v126_.v129 = 0;
    v126_.v126 = 0;
    v126_.v127 = 0;
    v126_.v130 = 1065353216;
    v119 = v4 - 8;
    v120 = v7;
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v10, 8, 16, 0);
    *v12 = v9;
    v13 = v12 + 1;
    v14 = v12;
    v132 = (__int64*)&v131;
    v15 = 0;
    SpotMgr_133acc0((__int64)&v126_.v126, (__int64*)&v131, &v132)[3] = 0;
    v124 = v13;
    v121 = v11;
    do {
      v16 = v14[v15];
      v125 = (__int64)v14;
      v17 = *(__int64**)(v16 + 48);
      v18 = *(__int64**)(v16 + 56);
      if (v17 != v18) {
        v19 = a3;
        do {
          v20 = *v17;
          if ((a2 & 1) != 0) {
            v21 = *(_QWORD*)(v20 + 8);
            if (*(_BYTE*)(v21 + 176) != 3 || (*(_BYTE*)(v21 + 112) & 1) != 0) {
              goto LABEL_9;
            }
          }
          if ((a2 & 2) != 0) {
            v26 = *(__int64**)(v16 + 48);
            v27 = *(__int64**)(v16 + 56);
            if (v26 == v27) {
              goto LABEL_9;
            }
            v28 = *(_QWORD*)(v20 + 8);
            while (1) {
              v29 = *v26++;
              if (*(_QWORD*)(v29 + 8) == v28) {
                break;
              }
              if (v26 == v27) {
                goto LABEL_9;
              }
            }
            if (*(_BYTE*)(v16 + 113) != 1 || *(_BYTE*)(v28 + 113) != 1 ||
                *(_BYTE*)(v16 + 114) == 1 && (*(_BYTE*)(v28 + 114) & 1) != 0) {
              goto LABEL_9;
            }
          }
          v22 = *(_QWORD*)(v20 + 8);
          if ((a2 & 4) != 0) {
            v23 = *(__int64**)(v16 + 48);
            v24 = *(__int64**)(v16 + 56);
            if (v23 != v24) {
              while (1) {
                v25 = *v23++;
                if (*(_QWORD*)(v25 + 8) == v22) {
                  break;
                }
                if (v23 == v24) {
                  goto LABEL_33;
                }
              }
              if (*(_BYTE*)(v16 + 113) == 1 && *(_BYTE*)(v22 + 113) == 1 &&
                  (*(_BYTE*)(v16 + 114) != 1 || *(_BYTE*)(v22 + 114) != 1)) {
                goto LABEL_9;
              }
            }
          }
        LABEL_33:
          if (v22 != *((_QWORD*)v6[1] - 1) &&
              (unsigned __int8)Impl_13261c0_alt1(v22) == 4) {
            if ((a2 & 8) != 0) {
              goto LABEL_9;
            }
            v30 = *(_QWORD*)(*v17 + 8);
            v31 = (unsigned __int8)Impl_13261c0_alt1(v30) == 4 &&
                  (*(_BYTE*)(v30 + 178) & 2) == 0;
            if (v31 &&
                ((a2 & 0x10) != 0 ||
                 (a2 & 0x20) != 0 &&
                     (Impl_1328670_alt1(*(_QWORD*)(*v17 + 8)) & 1) == 0)) {
              goto LABEL_9;
            }
          }
          if ((a2 & 0x40) == 0) {
            goto LABEL_81;
          }
          v32 = *(_QWORD*)(GameData_21c96e8 + 8);
          v33 = *(_DWORD*)(v32 + 56);
          v35 = *(__int64**)(v32 + 8);
          v34 = *(__int64**)(v32 + 16);
          if (v33 < 0) {
            if (v35 == v34) {
            LABEL_58:
              if (&GameData_1a0d058 == nullptr) {
                goto LABEL_81;
              }
            LABEL_59:
              if ((unsigned int*)v16 !=
                  game_gmap_SpotMgr_GetCurrentSpot_alt2()) {
                goto LABEL_81;
              }
              goto LABEL_60;
            }
            for (i = v35 + 1;; ++i) {
              v36 = (_QWORD*)*(i - 1);
              if (v36[12] == 0 && v36[69] == 0) {
                break;
              }
            }
          }
          else {
            if (v35 == v34) {
              goto LABEL_58;
            }
            v36 = (_QWORD*)*v35;
            if (*(_DWORD*)(*v35 + 84) != v33) {
              v37 = v35 + 1;
              do {
                v38 = *v37++;
                v36 = (_QWORD*)v38;
              } while (*(_DWORD*)(v38 + 84) != v33);
            }
          }
          if (v36[1] == 0) {
            goto LABEL_81;
          }
          v40 = v35;
          if (v33 < 0) {
            if (v35 == v34) {
              goto LABEL_59;
            }
            while (1) {
              v41 = (_QWORD*)*v40;
              if (*(_QWORD*)(*v40 + 96) == 0 && v41[69] == 0) {
                break;
              }
              if (++v40 == v34) {
                goto LABEL_59;
              }
            }
          }
          else {
            if (v35 == v34) {
              goto LABEL_59;
            }
            while (1) {
              v42 = *v40++;
              v41 = (_QWORD*)v42;
              if (*(_DWORD*)(v42 + 84) == v33) {
                break;
              }
              if (v40 == v34) {
                goto LABEL_59;
              }
            }
          }
          if (v16 != *v41) {
            goto LABEL_81;
          }
        LABEL_60:
          if (v33 < 0) {
            for (j = v35 + 1;; ++j) {
              v43 = (_QWORD*)*(j - 1);
              if (v43[12] == 0 && v43[69] == 0) {
                break;
              }
            }
          }
          else {
            v43 = (_QWORD*)*v35;
            if (*(_DWORD*)(*v35 + 84) != v33) {
              v44 = v35 + 1;
              do {
                v45 = *v44++;
                v43 = (_QWORD*)v45;
              } while (*(_DWORD*)(v45 + 84) != v33);
            }
          }
          if (*(_QWORD*)(*v17 + 8) == v43[1]) {
          LABEL_81:
            v47 = *v17;
            if (a2 < 0) {
              v48 = *(_QWORD*)(v47 + 8);
              v49 = *(_QWORD*)(v48 + 120);
              if (v49 != 0 && (*(_WORD*)(v49 + 258) & 4) != 0) {
                v51 = *v6;
                v50 = v6[1];
                if (*v6 != v50) {
                  v52 = v50 - v51 - 8;
                  if ((~(_BYTE)v52 & 0x18) == 0) {
                  LABEL_89:
                    if (v52 < 0x18) {
                      goto LABEL_9;
                    }
                    v51 += 16;
                    while (1) {
                      if (*((_QWORD*)v51 - 2) == v48) {
                        if (v51 - 16 != v50) {
                          goto LABEL_101;
                        }
                        goto LABEL_9;
                      }
                      if (*((_QWORD*)v51 - 1) == v48) {
                        v51 -= 8;
                        goto LABEL_100;
                      }
                      if (*(_QWORD*)v51 == v48) {
                        goto LABEL_100;
                      }
                      if (*((_QWORD*)v51 + 1) == v48) {
                        break;
                      }
                      v54 = v51 + 16;
                      v51 += 32;
                      if (v54 == v50) {
                        goto LABEL_9;
                      }
                    }
                    if (v51 + 8 != v50) {
                      goto LABEL_101;
                    }
                    goto LABEL_9;
                  }
                  v53 = ((unsigned __int8)((unsigned int)v52 >> 3) + 1) & 3;
                  while (*(_QWORD*)v51 != v48) {
                    v51 += 8;
                    if (--v53 == 0) {
                      goto LABEL_89;
                    }
                  }
                }
              LABEL_100:
                if (v51 == v50) {
                  goto LABEL_9;
                }
              }
            }
          LABEL_101:
            v56 = *v19;
            v55 = v19[1];
            if (*v19 == v55) {
            LABEL_117:
              if (v56 != v55) {
                goto LABEL_9;
              }
            }
            else {
              v57 = *(_QWORD*)(v47 + 8);
              v58 = v55 - v56 - 8;
              if ((~(_BYTE)v58 & 0x18) != 0) {
                v59 = ((unsigned __int8)((unsigned int)v58 >> 3) + 1) & 3;
                while (*(_QWORD*)v56 != v57) {
                  v56 += 8;
                  if (--v59 == 0) {
                    goto LABEL_106;
                  }
                }
                goto LABEL_117;
              }
            LABEL_106:
              if (v58 >= 0x18) {
                v56 += 16;
                while (1) {
                  if (*((_QWORD*)v56 - 2) == v57) {
                    if (v56 - 16 != v55) {
                      goto LABEL_9;
                    }
                    goto LABEL_118;
                  }
                  if (*((_QWORD*)v56 - 1) == v57) {
                    v56 -= 8;
                    goto LABEL_117;
                  }
                  if (*(_QWORD*)v56 == v57) {
                    goto LABEL_117;
                  }
                  if (*((_QWORD*)v56 + 1) == v57) {
                    break;
                  }
                  v60 = v56 + 16;
                  v56 += 32;
                  if (v60 == v55) {
                    goto LABEL_118;
                  }
                }
                if (v56 + 8 != v55) {
                  goto LABEL_9;
                }
              }
            }
          LABEL_118:
            v61 = v126_.v127;
            if (v126_.v127 != 0 && v126_.v129 != 0) {
              v63 = *(__int64**)(v47 + 8);
              v132 = v63;
              v64 = std___1___hash_memory_alt1((__int64)&v132, 8u);
              v65 = v61 - 1;
              if ((v61 & (v61 - 1)) != 0) {
                v66 = v64;
                if (v64 >= v61) {
                  v66 = v64 % v61;
                }
              }
              else {
                v66 = v64 & v65;
              }
              v67 = *(_QWORD**)(v126_.v126 + 8 * v66);
              if (v67 != nullptr) {
                v68 = (_QWORD*)*v67;
                if (v68 != nullptr) {
                  if ((v61 & v65) == 0) {
                    while (1) {
                      v70 = v68[1];
                      if (v70 == v64) {
                        if ((__int64*)v68[2] == v63) {
                          goto LABEL_141;
                        }
                      }
                      else if ((v70 & v65) != v66) {
                        goto LABEL_142;
                      }
                      v68 = (_QWORD*)*v68;
                      if (v68 == nullptr) {
                        goto LABEL_142;
                      }
                    }
                  }
                  do {
                    v69 = v68[1];
                    if (v69 == v64) {
                      if ((__int64*)v68[2] == v63) {
                      LABEL_141:
                        v6 = a1;
                        goto LABEL_9;
                      }
                    }
                    else {
                      if (v69 >= v61) {
                        v69 %= v61;
                      }
                      if (v69 != v66) {
                        break;
                      }
                    }
                    v68 = (_QWORD*)*v68;
                  } while (v68 != nullptr);
                }
              }
            }
          LABEL_142:
            if (v13 < v124) {
              *v13++ = *(_QWORD*)(v47 + 8);
            }
            else {
              v71 = (unsigned __int64)v13 - v125;
              v72 = ((__int64)v13 - v125) >> 3;
              v73 = v72 + 1;
              if ((unsigned __int64)(v72 + 1) >> 61 != 0) {
              LABEL_267:
                GameRoutine_8875e0_alt1();
              }
              if (((__int64)v124 - v125) >> 2 > v73) {
                v73 = ((__int64)v124 - v125) >> 2;
              }
              if ((unsigned __int64)v124 - v125 >= 0x7FFFFFFFFFFFFFF8LL) {
                v74 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v74 = v73;
              }
              if (v74 != 0) {
                if (v74 >> 61 != 0) {
                LABEL_268:
                  GameRoutine_60a210_alt2();
                }
                v75 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v74, 16, 0);
              }
              else {
                v75 = 0;
              }
              v124 = (_QWORD*)(v75 + 8 * v74);
              v76 = *(_QWORD*)(v47 + 8);
              v77 = v75 + v71 - 8 * v72;
              *(_QWORD*)(v75 + v71) = v76;
              v13 = (_QWORD*)(v75 + v71 + 8);
              memcpy_alt1(v77, v125, v71);
              if (v125 != 0) {
                v78 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v78 = 56;
                }
                nn_mem_StandardAllocator_Free_alt4(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v125);
              }
              v19 = a3;
              v125 = v77;
            }
            v6 = a1;
            v132 = (__int64*)(*v17 + 8);
            SpotMgr_133acc0((__int64)&v126_.v126, v132, &v132)[3] = v16;
          }
        LABEL_9:
          ++v17;
        } while (v17 != v18);
      }
      v79 = v126_.v127;
      v14 = (_QWORD*)v125;
      if (v126_.v127 != 0 && v126_.v129 != 0) {
        v132 = v121;
        v81 = std___1___hash_memory_alt1((__int64)&v132, 8u);
        v82 = v79 - 1;
        if ((v79 & (v79 - 1)) != 0) {
          v83 = v81;
          if (v81 >= v79) {
            v83 = v81 % v79;
          }
        }
        else {
          v83 = v81 & v82;
        }
        v84 = *(_QWORD**)(v126_.v126 + 8 * v83);
        if (v84 != nullptr) {
          v85 = (_QWORD*)*v84;
          if (*v84 != 0) {
            if ((v79 & v82) == 0) {
              while (1) {
                v87 = v85[1];
                if (v87 == v81) {
                  if ((__int64*)v85[2] == v121) {
                    goto LABEL_189;
                  }
                }
                else if ((v87 & v82) != v83) {
                  goto LABEL_185;
                }
                v85 = (_QWORD*)*v85;
                if (v85 == nullptr) {
                  goto LABEL_185;
                }
              }
            }
            do {
              v86 = v85[1];
              if (v86 == v81) {
                if ((__int64*)v85[2] == v121) {
                LABEL_189:
                  v7 = v120;
                  while (1) {
                    v90 = (char*)(v85 + 2);
                    if (v118 >= v117) {
                      v95 = v118 - v7;
                      v96 = ((v118 - v7) >> 3) + 1;
                      if (v96 >> 61 != 0) {
                        goto LABEL_267;
                      }
                      if ((v117 - v7) >> 2 > v96) {
                        v96 = (v117 - v7) >> 2;
                      }
                      if ((unsigned __int64)(v117 - v7) >=
                          0x7FFFFFFFFFFFFFF8LL) {
                        v96 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      if (v96 != 0) {
                        if (v96 >> 61 != 0) {
                          goto LABEL_268;
                        }
                        v97 = 8 * v96;
                      }
                      else {
                        v97 = 8;
                      }
                      v98 = fw_memory_g_heap_manager_ptr;
                      v99 = (char*)fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, v97, 16, 0);
                      v117 = &v99[v97];
                      *(_QWORD*)v99 = *(_QWORD*)v90;
                      memcpy_alt1((__int64)(v99 + 8), (__int64)v7, v95);
                      v93 = &v99[v95 + 8];
                      if (v7 != nullptr) {
                        if (*(_QWORD*)(*(_QWORD*)v98 + 200LL) != 0) {
                          v100 = 128;
                        }
                        else {
                          v100 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v98 + v100,
                                                           (__int64)v7);
                        v93 = &v99[v95 + 8];
                        v7 = v99;
                      }
                      else {
                        v7 = v99;
                      }
                    }
                    else if (v7 == v118) {
                      *(_QWORD*)v118 = *(_QWORD*)v90;
                      v93 = v118 + 8;
                    }
                    else {
                      v91 = v118;
                      if ((unsigned __int64)v118 >= 8) {
                        *(_QWORD*)v118 = *((_QWORD*)v118 - 1);
                        v91 = v118 + 8;
                      }
                      if (v118 != v7 + 8) {
                        memmove_alt1((__int64)(v7 + 8), (__int64)v7,
                                     v118 - (v7 + 8));
                      }
                      v92 = 8;
                      v93 = v91;
                      if (v90 >= v91 || v90 < v7) {
                        v92 = 0;
                      }
                      *(_QWORD*)v7 = *(_QWORD*)&v90[v92];
                    }
                    v101 = v126_.v127;
                    v89 = 1;
                    v118 = v93;
                    if (v126_.v127 == 0 || v126_.v129 == 0) {
                      v6 = a1;
                      goto LABEL_245;
                    }
                    v102 = (__int64*)v85[3];
                    v132 = v102;
                    v103 = std___1___hash_memory_alt1((__int64)&v132, 8u);
                    v104 = v101 - 1;
                    if ((v101 & (v101 - 1)) != 0) {
                      v105 = v103;
                      if (v103 >= v101) {
                        v105 = v103 % v101;
                      }
                    }
                    else {
                      v105 = v103 & v104;
                    }
                    v106 = *(_QWORD**)(v126_.v126 + 8 * v105);
                    if (v106 == nullptr || (v85 = (_QWORD*)*v106, *v106 == 0)) {
                    LABEL_244:
                      v6 = a1;
                      goto LABEL_245;
                    }
                    if ((v101 & v104) == 0) {
                      v6 = a1;
                      while (1) {
                        v108 = v85[1];
                        if (v108 == v103) {
                          if ((__int64*)v85[2] == v102) {
                            goto LABEL_240;
                          }
                        }
                        else if ((v108 & v104) != v105) {
                          goto LABEL_188;
                        }
                        v85 = (_QWORD*)*v85;
                        if (v85 == nullptr) {
                          goto LABEL_188;
                        }
                      }
                    }
                    while (1) {
                      v107 = v85[1];
                      if (v107 == v103) {
                        break;
                      }
                      if (v107 >= v101) {
                        v107 %= v101;
                      }
                      if (v107 != v105) {
                      LABEL_243:
                        v89 = 1;
                        goto LABEL_244;
                      }
                    LABEL_229:
                      v85 = (_QWORD*)*v85;
                      if (v85 == nullptr) {
                        goto LABEL_243;
                      }
                    }
                    if ((__int64*)v85[2] != v102) {
                      goto LABEL_229;
                    }
                    v6 = a1;
                  LABEL_240:
                    v89 = 1;
                    if (v102 == v131) {
                      goto LABEL_245;
                    }
                  }
                }
              }
              else {
                if (v86 >= v79) {
                  v86 %= v79;
                }
                if (v86 != v83) {
                  break;
                }
              }
              v85 = (_QWORD*)*v85;
            } while (v85 != nullptr);
          }
        }
      }
    LABEL_185:
      v88 = ((__int64)v13 - v125) >> 3;
      if (v88 - 1 == v15) {
        v7 = v120;
        v89 = 0;
        a4[1] = nullptr;
        a4[2] = nullptr;
        *a4 = nullptr;
        goto LABEL_244;
      }
      v6 = a1;
      ++v15;
    } while (v88 > v15);
    v7 = v120;
  LABEL_188:
    v89 = 1;
  LABEL_245:
    v109 = v126_.v128;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v126_.v128 != nullptr) {
      do {
        v110 = (_QWORD*)*v109;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v111 = 128;
        }
        else {
          v111 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v8 + v111, (__int64)v109);
        v109 = v110;
      } while (v110 != nullptr);
    }
    v112 = v126_.v126;
    v126_.v126 = 0;
    if (v112 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
        v113 = 128;
      }
      else {
        v113 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v8 + v113, v112);
    }
    if (v125 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
        v114 = 128;
      }
      else {
        v114 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v8 + v114, v125);
    }
    v4 = v119;
  } while ((v89 & 1) != 0);
  if (v7 != nullptr) {
    v115 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v115 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v8 + v115, (__int64)v7);
  }
}

__attribute__((swiftcall)) void SpotMgr_1331320(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, int a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  char v33;
  __int64 v34;
  _BOOL4 v35;
  char v36;
  _BOOL4 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  char* v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v98;
  __int64 v99;
  int v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  _QWORD* v107;
  __int64 v108;
  __int64 v109;
  int v110;
  __int64* v111;
  __int64 v112;
  __int64* v113;
  __int64 v114;
  struct {
    __int64 v115;
    void* v116;
  } v115_;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v9 = *v7;
  *v8 = a1;
  v10 = v8 + 1;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v9, 8, 16, 0);
  *v11 = a1;
  v12 = fw_memory_HeapManager_Allocate_alt1(*v7, 32, 16, 0);
  v13 = v12 + 32;
  v14 = v12;
  v15 = 0;
  *(_QWORD*)v12 = v11;
  *(_QWORD*)(v12 + 8) = v11 + 1;
  *(_QWORD*)(v12 + 16) = v11 + 1;
  *(_DWORD*)(v12 + 24) = a3;
  v105 = v12 + 32;
  v107 = v8 + 1;
  v109 = a1;
  v111 = a4;
  do {
    v17 = v14 + 32 * v15;
    v108 = v14;
    v98 = v15;
    v19 = *(_QWORD*)v17;
    v18 = *(_QWORD*)(v17 + 8);
    v20 = v18 - *(_QWORD*)v17;
    if ((v20 & 0x8000000000000000LL) != 0LL) {
    LABEL_154:
      GameRoutine_8875e0_alt1();
    }
    v21 = fw_memory_HeapManager_Allocate_alt1(*v7, v18 - *(_QWORD*)v17, 16, 0);
    v22 = v21 + v20;
    v104 = v21;
    memcpy_alt1(v21, v19, v20);
    v23 = *(_QWORD*)(v22 - 8);
    v24 = *(__int64**)(v23 + 48);
    v113 = *(__int64**)(v23 + 56);
    if (v24 != v113) {
      v110 = *(_DWORD*)(v17 + 24);
      v100 = v110 - 1;
      if (v20 >> 2 <= (v20 >> 3) + 1) {
        v25 = (v20 >> 3) + 1;
      }
      else {
        v25 = v20 >> 2;
      }
      v26 = 8 * v25;
      if (v20 >= 0x7FFFFFFFFFFFFFF8LL) {
        v26 = -8;
      }
      v102 = v26;
      v103 = v20;
      v101 = v20 + 8;
      v114 = *(_QWORD*)(v22 - 8);
      v27 = v111;
      do {
        v29 = *v24;
        v30 = *(_QWORD*)(*v24 + 8);
        if (*(_BYTE*)(v30 + 176) != 3 || (*(_BYTE*)(v30 + 112) & 1) != 0) {
          goto LABEL_18;
        }
        v31 = Impl_13261c0_alt1(v23);
        v23 = v114;
        if (v114 == v109) {
          if (v31 == 4) {
            v33 = Impl_13261c0_alt1(v114);
            v23 = v114;
            if (v33 == 4 && (*(_BYTE*)(v114 + 178) & 2) == 0 &&
                (game_GameModeData_instance_ == 0 ||
                 *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
              v115_.v116 = &GameData_1ab570b;
              v115_.v115 = game_HashString_alt1((__int64)&GameData_1ab570b);
              v35 = game_GameModeData_instance_ == 0 ||
                    (v34 = game_GameVariableTable_Find_alt1(
                         *(_QWORD**)(game_GameModeData_instance_ + 48),
                         (unsigned __int64*)&v115_.v115)) == 0 ||
                    *(_DWORD*)(v34 + 32) == 0;
              v23 = v114;
              if (a2 != 0 && v35) {
                if (*(_QWORD*)(v29 + 8) != a2) {
                  goto LABEL_18;
                }
                goto LABEL_41;
              }
            }
          }
        }
        else if (v31 == 4 &&
                 (game_GameModeData_instance_ == 0 ||
                  *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
          v115_.v116 = &GameData_1ab570b;
          v115_.v115 = game_HashString_alt1((__int64)&GameData_1ab570b);
          if (game_GameModeData_instance_ == 0 ||
              (v32 = game_GameVariableTable_Find_alt1(
                   *(_QWORD**)(game_GameModeData_instance_ + 48),
                   (unsigned __int64*)&v115_.v115)) == 0) {
            v23 = v114;
          LABEL_38:
            v36 = Impl_13261c0_alt1(v23);
            v23 = v114;
            v37 = (*(_BYTE*)(v114 + 178) & 2) != 0;
            if (v36 != 4) {
              v37 = true;
            }
            if (!v37) {
              goto LABEL_18;
            }
          LABEL_41:
            if (v110 <= 0) {
              goto LABEL_18;
            }
            goto LABEL_49;
          }
          v23 = v114;
          if (*(_DWORD*)(v32 + 32) == 0) {
            goto LABEL_38;
          }
        }
        if (v110 < 1) {
          goto LABEL_18;
        }
      LABEL_49:
        v39 = *v27;
        v38 = (_QWORD*)v27[1];
        v112 = (__int64)v8;
        v40 = (__int64)v38 - *v27;
        if (v38 == (_QWORD*)*v27) {
          goto LABEL_55;
        }
        v41 = (_QWORD*)*v27;
        while (*v41 != v29) {
          if (++v41 == v38) {
            goto LABEL_55;
          }
        }
        if (v41 == v38) {
        LABEL_55:
          v42 = v27[2];
          if ((unsigned __int64)v38 >= v42) {
            v44 = (v40 >> 3) + 1;
            if (v44 >> 61 != 0) {
              goto LABEL_156;
            }
            if ((__int64)(v42 - v39) >> 2 > v44) {
              v44 = (__int64)(v42 - v39) >> 2;
            }
            if (v42 - v39 >= 0x7FFFFFFFFFFFFFF8LL) {
              v45 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v45 = v44;
            }
            if (v45 != 0) {
              if (v45 >> 61 != 0) {
                goto LABEL_155;
              }
              v46 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v45, 16, 0);
            }
            else {
              v46 = 0;
            }
            v42 = v46 + 8 * v45;
            v47 = (unsigned __int64)v38 - v39;
            v48 = v46 + v40 - 8 * (v40 >> 3);
            *(_QWORD*)(v46 + v40) = v29;
            v43 = (_QWORD*)(v46 + v40 + 8);
            memcpy_alt1(v48, v39, v47);
            *v111 = v48;
            v111[2] = v42;
            if (v39 != 0) {
              v49 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v49 = 56;
              }
              nn_mem_StandardAllocator_Free_alt4(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v39);
            }
            v39 = v48;
            v27 = v111;
            v23 = v114;
          }
          else {
            *v38 = v29;
            v43 = v38 + 1;
          }
          v50 = *(_QWORD*)(v29 + 8);
          v27[1] = (__int64)v43;
          v51 = *(__int64**)(v50 + 48);
          v52 = *(__int64**)(v50 + 56);
          if (v51 == v52) {
            v53 = 0;
            if ((unsigned __int64)v43 < v42) {
              goto LABEL_77;
            }
          }
          else {
            while (1) {
              v54 = *v51++;
              v53 = v54;
              if (*(_QWORD*)(v54 + 8) == v23) {
                break;
              }
              if (v51 == v52) {
                v53 = 0;
                break;
              }
            }
            if ((unsigned __int64)v43 < v42) {
            LABEL_77:
              *v43 = v53;
              v55 = (__int64)(v43 + 1);
              v7 = &fw_memory_g_heap_manager;
            LABEL_94:
              v27[1] = v55;
              goto LABEL_95;
            }
          }
          v56 = v10;
          v57 = (char*)v43 - v39;
          v58 = ((__int64)v43 - v39) >> 3;
          v59 = v58 + 1;
          if ((unsigned __int64)(v58 + 1) >> 61 != 0) {
          LABEL_156:
            GameRoutine_1338870_alt1();
          }
          if ((__int64)(v42 - v39) >> 2 > v59) {
            v59 = (__int64)(v42 - v39) >> 2;
          }
          if (v42 - v39 >= 0x7FFFFFFFFFFFFFF8LL) {
            v60 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v60 = v59;
          }
          if (v60 != 0) {
            if (v60 >> 61 != 0) {
              goto LABEL_155;
            }
            v61 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v60, 16, 0);
          }
          else {
            v61 = 0;
          }
          v62 = v61 + 8 * v60;
          v63 = (unsigned __int64)v43 - v39;
          v64 = (__int64)&v57[v61 + -8 * v58];
          *(_QWORD*)&v57[v61] = v53;
          v55 = (__int64)&v57[v61 + 8];
          memcpy_alt1(v64, v39, v63);
          *v111 = v64;
          v111[2] = v62;
          v27 = v111;
          v7 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v39 != 0) {
            v65 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v65 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v65, v39);
          }
          v23 = v114;
          v10 = v56;
          goto LABEL_94;
        }
      LABEL_95:
        v8 = (_QWORD*)v112;
        v66 = (_QWORD*)v112;
        if ((_QWORD*)v112 != v10) {
          v66 = (_QWORD*)v112;
          while (*v66 != *(_QWORD*)(v29 + 8)) {
            if (++v66 == v10) {
              goto LABEL_101;
            }
          }
        }
        if (v66 == v10) {
        LABEL_101:
          if (v10 >= v107) {
            v67 = (unsigned __int64)v10 - v112;
            v68 = ((__int64)v10 - v112) >> 3;
            v69 = v68 + 1;
            if ((unsigned __int64)(v68 + 1) >> 61 != 0) {
              goto LABEL_154;
            }
            if (((__int64)v107 - v112) >> 2 > v69) {
              v69 = ((__int64)v107 - v112) >> 2;
            }
            if ((unsigned __int64)v107 - v112 >= 0x7FFFFFFFFFFFFFF8LL) {
              v70 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v70 = v69;
            }
            if (v70 != 0) {
              if (v70 >> 61 != 0) {
                goto LABEL_155;
              }
              v71 = fw_memory_HeapManager_Allocate_alt1(*v7, 8 * v70, 16, 0);
            }
            else {
              v71 = 0;
            }
            v107 = (_QWORD*)(v71 + 8 * v70);
            v72 = v71 + v67 - 8 * v68;
            *(_QWORD*)(v71 + v67) = *(_QWORD*)(v29 + 8);
            v10 = (_QWORD*)(v71 + v67 + 8);
            memcpy_alt1(v72, v112, v67);
            if (v112 != 0) {
              v73 = 128;
              if (*(_QWORD*)(*v7 + 200) == 0) {
                v73 = 56;
              }
              nn_mem_StandardAllocator_Free_alt4(*v7 + v73, v112);
            }
            v8 = (_QWORD*)v72;
          }
          else {
            *v10++ = *(_QWORD*)(v29 + 8);
          }
          v74 = fw_memory_HeapManager_Allocate_alt1(*v7, v102, 16, 0);
          *(_QWORD*)(v74 + v103) = *(_QWORD*)(v29 + 8);
          memcpy_alt1(v74, v104, v103);
          if ((v101 & 0x8000000000000000LL) != 0) {
            goto LABEL_154;
          }
          v75 = fw_memory_HeapManager_Allocate_alt1(*v7, v101, 16, 0);
          v76 = v75 + v101;
          memcpy_alt1(v75, v74, v101);
          if (v13 < v105) {
            *(_QWORD*)v13 = v75;
            *(_QWORD*)(v13 + 8) = v76;
            *(_QWORD*)(v13 + 16) = v76;
            *(_DWORD*)(v13 + 24) = v100;
          }
          else {
            v77 = (__int64)(v13 - v108) >> 5;
            v78 = v77 + 1;
            if ((unsigned __int64)(v77 + 1) >> 59 != 0) {
              GameRoutine_1338850_alt1();
            }
            if ((__int64)(v105 - v108) >> 4 > v78) {
              v78 = (__int64)(v105 - v108) >> 4;
            }
            if (v105 - v108 >= 0x7FFFFFFFFFFFFFE0LL) {
              v78 = 0x7FFFFFFFFFFFFFFLL;
            }
            if (v78 >> 59 != 0) {
            LABEL_155:
              GameRoutine_60a210_alt2();
            }
            v106 = 32 * v78;
            v79 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v78, 16, 0);
            v80 = v79 + v13 - v108;
            v99 = v79;
            *(_QWORD*)v80 = v75;
            *(_QWORD*)(v80 + 8) = v76;
            *(_QWORD*)(v80 + 16) = v76;
            v81 = v80 - 32 * v77;
            *(_DWORD*)(v80 + 24) = v100;
            v7 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (v108 != v13) {
              v82 = (__int64*)v108;
              v83 = v81;
              v84 = v108;
              do {
                *(_QWORD*)v83 = *(_QWORD*)v84;
                *(_QWORD*)(v83 + 8) = *(_QWORD*)(v84 + 8);
                *(_QWORD*)(v83 + 16) = *(_QWORD*)(v84 + 16);
                *(_QWORD*)(v84 + 8) = 0;
                *(_QWORD*)(v84 + 16) = 0;
                *(_QWORD*)v84 = 0;
                v85 = *(_DWORD*)(v84 + 24);
                v84 += 32;
                *(_DWORD*)(v83 + 24) = v85;
                v83 += 32;
              } while (v84 != v13);
              do {
                v86 = *v82;
                if (*v82 != 0) {
                  v87 = *v7;
                  v82[1] = v86;
                  v88 = 128;
                  if (*(_QWORD*)(v87 + 200) == 0) {
                    v88 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt4(v87 + v88, v86);
                }
                v82 += 4;
              } while (v82 != (__int64*)v13);
            }
            v105 = v99 + v106;
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v89 = 128;
            }
            else {
              v89 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(*v7 + v89, v108);
            v13 = v80;
            v108 = v81;
          }
          v13 += 32LL;
          if (*(_QWORD*)(*v7 + 200) != 0) {
            v28 = 128;
          }
          else {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(*v7 + v28, v74);
          v27 = v111;
          v23 = v114;
        }
      LABEL_18:
        ++v24;
      } while (v24 != v113);
    }
    v16 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(*v7 + v16, v104);
    v14 = v108;
    v15 = v98 + 1;
  } while (v98 + 1 < (unsigned __int64)((__int64)(v13 - v108) >> 5));
  if (v8 != nullptr) {
    v90 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v90 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(*v7 + v90, (__int64)v8);
    v14 = v108;
  }
  if (v14 != v13) {
    v91 = v13;
    do {
      v93 = *(_QWORD*)(v91 - 32);
      v91 -= 32LL;
      v92 = v93;
      if (v93 != 0) {
        v94 = *v7;
        *(_QWORD*)(v13 - 24) = v92;
        if (*(_QWORD*)(v94 + 200) != 0) {
          v95 = 128;
        }
        else {
          v95 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(v94 + v95, v92);
      }
      v14 = v108;
      v13 = v91;
    } while (v91 != v108);
  }
  v96 = 128;
  if (*(_QWORD*)(*v7 + 200) == 0) {
    v96 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(*v7 + v96, v14);
}

__attribute__((swiftcall)) void SpotMgr_1331ca0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  signed __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64* v85;
  _QWORD* v86;
  __int64* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64* v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  __int64 v111;
  __int64* v112;
  struct {
    __int64 v113;
    void* v114;
  } v113_;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = a2;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v6 = *v4;
  *v5 = a1;
  v7 = v5 + 1;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v6, 8, 16, 0);
  *v8 = a1;
  v106 = a1;
  v9 = (__int64)v5;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v4, 24, 16, 0);
  v11 = v10 + 3;
  v12 = (__int64)v10;
  v13 = 0;
  *v10 = v8;
  v10[1] = v8 + 1;
  v10[2] = v8 + 1;
  v104 = v10 + 3;
  v105 = v5 + 1;
  v110 = v3;
  do {
    v107 = v12;
    v99 = v13;
    v15 = (__int64*)(v12 + 24 * v13);
    v17 = *v15;
    v16 = v15[1];
    v18 = v16 - v17;
    if (v16 - v17 < 0) {
    LABEL_155:
      GameRoutine_8875e0_alt1();
    }
    v19 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v16 - v17, 16, 0);
    v20 = v19 + v18;
    v103 = v19;
    memcpy_alt1(v19, v17, v18);
    v21 = *(_QWORD*)(v20 - 8);
    v22 = *(__int64**)(v21 + 48);
    v112 = *(__int64**)(v21 + 56);
    if (v22 != v112) {
      if (v18 >> 2 <= (v18 >> 3) + 1) {
        v23 = (v18 >> 3) + 1;
      }
      else {
        v23 = v18 >> 2;
      }
      v24 = 8 * v23;
      if (v18 >= 0x7FFFFFFFFFFFFFF8LL) {
        v24 = -8;
      }
      v101 = v24;
      v102 = v18;
      v100 = v18 + 8;
      v111 = *(_QWORD*)(v20 - 8);
      while (1) {
        v27 = *v22;
        v28 = *(_QWORD*)(*v22 + 8);
        if (*(_BYTE*)(v28 + 176) != 3 || (*(_BYTE*)(v28 + 112) & 1) != 0) {
          goto LABEL_19;
        }
        v29 = Impl_13261c0_alt1(v21);
        if (v21 == v106) {
          if (v29 == 4 && (unsigned __int8)Impl_13261c0_alt1(v21) == 4 &&
              (*(_BYTE*)(v21 + 178) & 2) == 0 &&
              (game_GameModeData_instance_ == 0 ||
               *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
            v113_.v114 = &GameData_1ab570b;
            v113_.v113 = game_HashString_alt1((__int64)&GameData_1ab570b);
            if (game_GameModeData_instance_ == 0 ||
                (v31 = game_GameVariableTable_Find_alt1(
                     *(_QWORD**)(game_GameModeData_instance_ + 48),
                     (unsigned __int64*)&v113_.v113)) == 0 ||
                *(_DWORD*)(v31 + 32) == 0) {
              v32 = *(_QWORD*)(*GameData_212c790 + 8);
              v33 = *(_DWORD*)(v32 + 56);
              v34 = *(__int64**)(v32 + 8);
              if (v33 < 0) {
                while (1) {
                  v36 = *v34;
                  if (*(_QWORD*)(*v34 + 96) == 0 &&
                      *(_QWORD*)(v36 + 552) == 0) {
                    break;
                  }
                  ++v34;
                }
              }
              else {
                v37 = *v34;
                v35 = v34 + 1;
                v36 = v37;
                if (*(_DWORD*)(v37 + 84) != v33) {
                  do {
                    v38 = *v35++;
                    v36 = v38;
                  } while (*(_DWORD*)(v38 + 84) != v33);
                }
              }
              if (*(_QWORD*)(v27 + 8) != *(_QWORD*)(v36 + 8)) {
                goto LABEL_19;
              }
            }
          }
        }
        else if (v29 == 4 &&
                 (game_GameModeData_instance_ == 0 ||
                  *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
          v113_.v114 = &GameData_1ab570b;
          v113_.v113 = game_HashString_alt1((__int64)&GameData_1ab570b);
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_19;
          }
          v30 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v113_.v113);
          if (v30 == 0 || *(_DWORD*)(v30 + 32) == 0) {
            goto LABEL_19;
          }
        }
        v39 = *v3;
        v40 = (_QWORD*)v3[1];
        v41 = (signed __int64)v40 - *v3;
        if (v40 == (_QWORD*)*v3) {
          break;
        }
        v42 = (_QWORD*)*v3;
        while (*v42 != v27) {
          if (++v42 == v40) {
            goto LABEL_53;
          }
        }
        if (v42 == v40) {
          break;
        }
      LABEL_93:
        v21 = v111;
        v65 = (_QWORD*)v9;
        if ((_QWORD*)v9 != v7) {
          v65 = (_QWORD*)v9;
          while (*v65 != *(_QWORD*)(v27 + 8)) {
            if (++v65 == v7) {
              goto LABEL_99;
            }
          }
        }
        if (v65 != v7) {
          goto LABEL_19;
        }
      LABEL_99:
        if (v7 >= v105) {
          v66 = (unsigned __int64)v7 - v9;
          v67 = v9;
          v68 = ((__int64)v7 - v9) >> 3;
          v69 = v68 + 1;
          if ((unsigned __int64)(v68 + 1) >> 61 != 0) {
            goto LABEL_155;
          }
          v70 = v67;
          v71 = (unsigned __int64)v105 - v67;
          v72 = ((__int64)v105 - v67) >> 2;
          if (v72 > v69) {
            v69 = v72;
          }
          if (v71 >= 0x7FFFFFFFFFFFFFF8LL) {
            v73 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v73 = v69;
          }
          if (v73 != 0) {
            if (v73 >> 61 != 0) {
              goto LABEL_156;
            }
            v74 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v73, 16, 0);
          }
          else {
            v74 = 0;
          }
          v105 = (_QWORD*)(v74 + 8 * v73);
          v75 = v74 + v66 - 8 * v68;
          *(_QWORD*)(v74 + v66) = *(_QWORD*)(v27 + 8);
          v7 = (_QWORD*)(v74 + v66 + 8);
          memcpy_alt1(v75, v70, v66);
          if (v70 != 0) {
            v76 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v77 = 128;
            }
            else {
              v77 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v70);
            v9 = v75;
            goto LABEL_118;
          }
          v9 = v75;
        }
        else {
          *v7++ = *(_QWORD*)(v27 + 8);
        }
        v76 = (__int64*)fw_memory_g_heap_manager_ptr;
      LABEL_118:
        v78 = fw_memory_HeapManager_Allocate_alt1(*v76, v101, 16, 0);
        *(_QWORD*)(v78 + v102) = *(_QWORD*)(v27 + 8);
        memcpy_alt1(v78, v103, v102);
        if ((v100 & 0x8000000000000000LL) != 0) {
          goto LABEL_155;
        }
        v79 = fw_memory_HeapManager_Allocate_alt1(*v76, v100, 16, 0);
        v80 = v79 + v100;
        memcpy_alt1(v79, v78, v100);
        if (v11 < v104) {
          *v11 = v79;
          v11[1] = v80;
          v11[2] = v80;
          v25 = fw_memory_g_heap_manager_ptr;
        }
        else {
          v81 = 1 - 0x5555555555555555LL * (((__int64)v11 - v107) >> 3);
          if (v81 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_1338890_alt1();
          }
          if (0x5555555555555556LL * (((__int64)v104 - v107) >> 3) > v81) {
            v81 = 0x5555555555555556LL * (((__int64)v104 - v107) >> 3);
          }
          if (0xAAAAAAAAAAAAAAABLL * (((__int64)v104 - v107) >> 3) >=
              0x555555555555555LL) {
            v81 = 0xAAAAAAAAAAAAAAALL;
          }
          if (v81 > 0xAAAAAAAAAAAAAAALL) {
          LABEL_156:
            GameRoutine_60a210_alt2();
          }
          v109 = 3 * v81;
          v82 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v81, 16, 0);
          v83 = (__int64*)((char*)v11 + v82 - v107);
          v84 = v82;
          *v83 = v79;
          v83[1] = v80;
          v83[2] = v80;
          if ((__int64*)v107 != v11) {
            v85 = (__int64*)v107;
            v86 = (_QWORD*)v82;
            v87 = (__int64*)v107;
            do {
              *v86 = *v87;
              v86[1] = v87[1];
              v86[2] = v87[2];
              v87[1] = 0;
              v87[2] = 0;
              *v87 = 0;
              v87 += 3;
              v86 += 3;
            } while (v87 != v11);
            do {
              v88 = *v85;
              if (*v85 != 0) {
                v85[1] = v88;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v89 = 128;
                }
                else {
                  v89 = 56;
                }
                nn_mem_StandardAllocator_Free_alt4(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v89, v88);
              }
              v85 += 3;
            } while (v85 != v11);
          }
          v104 = (__int64*)(v84 + 8 * v109);
          v25 = fw_memory_g_heap_manager_ptr;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v90 = 128;
          }
          else {
            v90 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v90, v107);
          v11 = v83;
          v107 = v84;
        }
        v21 = v111;
        v11 += 3;
        if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v25 + v26, v78);
        v3 = v110;
      LABEL_19:
        if (++v22 == v112) {
          goto LABEL_2;
        }
      }
    LABEL_53:
      v108 = v9;
      v43 = v3[2];
      if ((unsigned __int64)v40 >= v43) {
        v45 = (v41 >> 3) + 1;
        if (v45 >> 61 != 0) {
          goto LABEL_157;
        }
        if ((__int64)(v43 - v39) >> 2 > v45) {
          v45 = (__int64)(v43 - v39) >> 2;
        }
        if (v43 - v39 >= 0x7FFFFFFFFFFFFFF8LL) {
          v46 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v46 = v45;
        }
        if (v46 != 0) {
          if (v46 >> 61 != 0) {
            goto LABEL_156;
          }
          v47 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v46, 16, 0);
        }
        else {
          v47 = 0;
        }
        v43 = v47 + 8 * v46;
        v48 = v47 + v41 - 8 * (v41 >> 3);
        *(_QWORD*)(v47 + v41) = v27;
        v44 = (_QWORD*)(v47 + v41 + 8);
        memcpy_alt1(v48, v39, v41);
        *v110 = v48;
        v110[2] = v43;
        if (v39 != 0) {
          v49 = 56;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v49 = 128;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v39);
        }
        v39 = v48;
        v3 = v110;
      }
      else {
        *v40 = v27;
        v44 = v40 + 1;
      }
      v50 = *(_QWORD*)(v27 + 8);
      v3[1] = (__int64)v44;
      v51 = *(__int64**)(v50 + 48);
      v52 = *(__int64**)(v50 + 56);
      if (v51 == v52) {
        v53 = 0;
        if ((unsigned __int64)v44 < v43) {
        LABEL_75:
          *v44 = v53;
          v55 = (__int64)(v44 + 1);
          goto LABEL_91;
        }
      }
      else {
        while (1) {
          v54 = *v51++;
          v53 = v54;
          if (*(_QWORD*)(v54 + 8) == v111) {
            break;
          }
          if (v51 == v52) {
            v53 = 0;
            break;
          }
        }
        if ((unsigned __int64)v44 < v43) {
          goto LABEL_75;
        }
      }
      v56 = (char*)v44 - v39;
      v57 = ((__int64)v44 - v39) >> 3;
      v58 = v57 + 1;
      if ((unsigned __int64)(v57 + 1) >> 61 != 0) {
      LABEL_157:
        GameRoutine_1338870_alt1();
      }
      if ((__int64)(v43 - v39) >> 2 > v58) {
        v58 = (__int64)(v43 - v39) >> 2;
      }
      if (v43 - v39 >= 0x7FFFFFFFFFFFFFF8LL) {
        v59 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v59 = v58;
      }
      if (v59 != 0) {
        if (v59 >> 61 != 0) {
          goto LABEL_156;
        }
        v60 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v59, 16, 0);
      }
      else {
        v60 = 0;
      }
      v61 = v60 + 8 * v59;
      v62 = (unsigned __int64)v44 - v39;
      v63 = (__int64)&v56[v60 + -8 * v57];
      *(_QWORD*)&v56[v60] = v53;
      v55 = (__int64)&v56[v60 + 8];
      memcpy_alt1(v63, v39, v62);
      *v110 = v63;
      v3 = v110;
      v110[2] = v61;
      if (v39 != 0) {
        v64 = 56;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
          v64 = 128;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v39);
        v9 = v108;
        goto LABEL_92;
      }
    LABEL_91:
      v9 = v108;
    LABEL_92:
      v3[1] = v55;
      goto LABEL_93;
    }
  LABEL_2:
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
      v14 = 128;
    }
    else {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v103);
    v12 = v107;
    v13 = v99 + 1;
  } while (0xAAAAAAAAAAAAAAABLL * (((__int64)v11 - v107) >> 3) > v99 + 1);
  v91 = fw_memory_g_heap_manager_ptr;
  if (v9 != 0) {
    v92 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, v9);
    v12 = v107;
  }
  if ((__int64*)v12 != v11) {
    v93 = v11;
    do {
      v95 = *(v93 - 3);
      v93 -= 3;
      v94 = v95;
      if (v95 != 0) {
        v96 = *(_QWORD*)v91;
        *(v11 - 2) = v94;
        if (*(_QWORD*)(v96 + 200) != 0) {
          v97 = 128;
        }
        else {
          v97 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(v96 + v97, v94);
      }
      v12 = v107;
      v11 = v93;
    } while (v93 != (__int64*)v107);
  }
  v98 = 128;
  if (*(_QWORD*)(*(_QWORD*)v91 + 200LL) == 0) {
    v98 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v91 + v98, v12);
}

__attribute__((swiftcall)) void SpotMgr_1332660(PSEUDO_X8 x8_, __int64* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = a1[3];
  if (a1[4] != v3) {
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    v8 = a1;
    do {
      v10 = *v8;
      v11 = *(__int64**)(*v8 + 48);
      v12 = *(__int64**)(v10 + 56);
      if (v11 == v12) {
      LABEL_9:
        v14 = 0;
      }
      else {
        v13 = *(_QWORD*)(v3 + 8 * v6);
        while (1) {
          v15 = *v11++;
          v14 = v15;
          if (*(_QWORD*)(v15 + 8) == v13) {
            break;
          }
          if (v11 == v12) {
            goto LABEL_9;
          }
        }
      }
      v16 = a2[2];
      if ((unsigned __int64)v5 >= v16) {
        v18 = &v5[-v7];
        v19 = (__int64)&v5[-v7] >> 3;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
          goto LABEL_49;
        }
        v21 = v16 - v7;
        if (v21 >> 2 > v20) {
          v20 = v21 >> 2;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            goto LABEL_50;
          }
          v23 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v24 = v23 + 8 * v22;
        v25 = (unsigned __int64)&v5[-v7];
        v26 = (__int64)&v18[v23 + -8 * v19];
        *(_QWORD*)&v18[v23] = v14;
        v17 = &v18[v23 + 8];
        memcpy_alt1(v26, v7, v25);
        a2[1] = (__int64)v17;
        a2[2] = v24;
        if (v7 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v7);
        }
        v7 = v26;
      }
      else {
        *(_QWORD*)v5 = v14;
        v17 = v5 + 8;
      }
      v28 = a1[3];
      a2[1] = (__int64)v17;
      v29 = *(_QWORD*)(v28 + 8 * v6);
      v30 = *(__int64**)(v29 + 48);
      v31 = *(__int64**)(v29 + 56);
      if (v30 == v31) {
      LABEL_30:
        v32 = 0;
      }
      else {
        while (1) {
          v33 = *v30++;
          v32 = v33;
          if (*(_QWORD*)(v33 + 8) == v10) {
            break;
          }
          if (v30 == v31) {
            goto LABEL_30;
          }
        }
      }
      v34 = a2[2];
      if ((unsigned __int64)v17 < v34) {
        *(_QWORD*)v17 = v32;
        v5 = v17 + 8;
      }
      else {
        v35 = &v17[-v7];
        v36 = (__int64)&v17[-v7] >> 3;
        v37 = v36 + 1;
        if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
        LABEL_49:
          *a2 = v7;
          GameRoutine_1338870_alt1();
        }
        v38 = v34 - v7;
        if (v38 >> 2 > v37) {
          v37 = v38 >> 2;
        }
        if ((unsigned __int64)v38 >= 0x7FFFFFFFFFFFFFF8LL) {
          v39 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v39 = v37;
        }
        if (v39 != 0) {
          if (v39 >> 61 != 0) {
          LABEL_50:
            *a2 = v7;
            GameRoutine_60a210_alt2();
          }
          v40 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
        }
        else {
          v40 = 0;
        }
        v41 = v40 + 8 * v39;
        v42 = (unsigned __int64)&v17[-v7];
        v43 = (__int64)&v35[v40 + -8 * v36];
        *(_QWORD*)&v35[v40] = v32;
        v5 = &v35[v40 + 8];
        memcpy_alt1(v43, v7, v42);
        a2[1] = (__int64)v5;
        a2[2] = v41;
        if (v7 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v7);
        }
        v7 = v43;
      }
      v3 = a1[3];
      v9 = a1[4];
      a2[1] = (__int64)v5;
      v8 = (__int64*)(v3 + 8 * v6++);
    } while (v6 < (v9 - v3) >> 3);
    *a2 = v7;
  }
}

__int64 SpotMgr_1332940(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  char* v9;
  char* v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23[3];
  char* v24[3];
  struct {
    char* v25;
    char* v26;
  } v25_;

  result = 0;
  if (a1 == 0 || a3 == 0) {
    return result;
  }
  if (a1 == a3) {
    return 1;
  }
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    v13 = a1;
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v15 = 1;
    }
    else {
      v25_.v26 = (char*)&GameData_1ab570b;
      v25_.v25 = (char*)game_HashString_alt1((__int64)&GameData_1ab570b);
      if (game_GameModeData_instance_ != 0) {
        v16 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v25_.v25);
        v15 = 17;
        if (v16 != 0) {
          if (*(_DWORD*)(v16 + 32) != 0) {
            v15 = 1;
          }
          else {
            v15 = 17;
          }
        }
      }
      else {
        v15 = 17;
      }
    }
    v17 = fw_memory_g_heap_manager_ptr;
    v18 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    *(_QWORD*)v18 = v13;
    *(_QWORD*)(v18 + 8) = a3;
    v24[0] = (char*)v18;
    memset(v23, 0, sizeof(v23));
    v24[1] = (char*)(v18 + 16);
    v24[2] = (char*)(v18 + 16);
    SpotMgr_13306e0_alt1((void*)(&v25_.v25), v24, v15, v23);
    v19 = v25_.v26 != v25_.v25;
    if (v25_.v25 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v17 + v20,
                                         (__int64)v25_.v25);
    }
    v21 = *(_QWORD*)v17;
    v9 = (char*)v18;
    goto LABEL_33;
  }
  SpotMgr_1331320((void*)((__int64*)&v25_.v25), a1, a2, a4);
  v9 = v25_.v25;
  if (v25_.v25 == v25_.v26) {
    result = 0;
    if (v25_.v25 == nullptr) {
      return result;
    }
    goto LABEL_32;
  }
  v10 = v25_.v25 + 8;
  do {
    v11 = *(_QWORD*)(*((_QWORD*)v10 - 1) + 8LL);
    result = v11 == a3;
    v12 = v11 == a3 || v10 == v25_.v26;
    v10 += 8;
  } while (!v12);
  if (v25_.v25 != nullptr) {
  LABEL_32:
    v19 = result;
    v21 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  LABEL_33:
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(v21 + v22, (__int64)v9);
    return v19;
  }
  return result;
}

bool game_gmap_SpotMgr_CalcExcludedDisposSpot(__int64* a1)
{
  __int64* v2;
  __int64 v3;
  unsigned int*** v4;
  unsigned int*** v5;
  int v6;
  unsigned int*** v7;
  unsigned int** v8;
  __int64 v9;
  unsigned int*** v10;
  unsigned int* v11;
  unsigned int* v12;
  unsigned int* v13;
  unsigned int* v14;
  unsigned int** v15;
  unsigned int** v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  int v26;
  __int64** v27;
  __int64** v28;
  __int64* v29;
  __int64* v30;
  unsigned int* v31;
  __int64 v32;
  int v33;
  __int64** v34;
  __int64** v35;
  __int64* v36;
  __int64* v37;
  unsigned int* v38;
  __int64 v39;
  __int64 v40;
  __int64 (***v41)();
  __int64 v42;
  char** v43;
  char** v44;
  char* v45;
  __int64 v46;
  struct {
    __int64 (**v47)();
    __int64* v48;
    __int64 v49;
    char gap24_[8];
    char** v50;
  } v47_;
  char* v51[3];
  char* v52[3];

  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    return false;
  }
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(unsigned int****)(v3 + 8);
  v5 = *(unsigned int****)(v3 + 16);
  v6 = *(_DWORD*)(v3 + 56);
  if (v6 < 0) {
    if (v4 != v5) {
      v10 = *(unsigned int****)(v3 + 8);
      do {
        v8 = *v10;
        if ((*v10)[12] == nullptr && v8[69] == nullptr) {
          goto LABEL_14;
        }
        ++v10;
      } while (v10 != v5);
    }
  }
  else if (v4 != v5) {
    v7 = *(unsigned int****)(v3 + 8);
    while (1) {
      v9 = (__int64)*v7++;
      v8 = (unsigned int**)v9;
      if (*(_DWORD*)(v9 + 84) == v6) {
        break;
      }
      if (v7 == v5) {
        goto LABEL_15;
      }
    }
  LABEL_14:
    v11 = *v8;
    goto LABEL_16;
  }
LABEL_15:
  v11 = game_gmap_SpotMgr_GetCurrentSpot_alt2(),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_16:
  v12 = game_gmap_SpotMgr_GetCurrentSpot_alt2(),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v11 == v12) {
    return false;
  }
  v13 = v12;
  v14 = v12;
  if ((v6 & 0x80000000) == 0) {
    if (v4 == v5) {
      goto LABEL_28;
    }
    while (1) {
      v16 = *v4++;
      v15 = v16;
      if (*((_DWORD*)v16 + 21) == v6) {
        goto LABEL_27;
      }
      if (v4 == v5) {
        goto LABEL_21;
      }
    }
  }
  if (v4 != v5) {
    while (1) {
      v15 = *v4;
      if ((*v4)[12] == nullptr && v15[69] == nullptr) {
        break;
      }
      if (++v4 == v5) {
      LABEL_21:
        v14 = v12;
        goto LABEL_28;
      }
    }
  LABEL_27:
    v14 = *v15;
  }
LABEL_28:
  v17 = fw_memory_g_heap_manager_ptr;
  v18 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_QWORD*)v18 = v14;
  *(_QWORD*)(v18 + 8) = v13;
  v52[0] = (char*)v18;
  memset(v51, 0, sizeof(v51));
  v52[1] = (char*)(v18 + 16);
  v52[2] = (char*)(v18 + 16);
  SpotMgr_13306e0((void*)((char**)&v47_.v47), v52, 17, v51),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v19 = *a1;
  if (*a1 != 0) {
    v20 = *(_QWORD*)v17;
    a1[1] = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(v20 + v21, v19),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v22 = (__int64)v47_.v48;
  *a1 = (__int64)v47_.v47;
  a1[1] = v22;
  a1[2] = v47_.v49;
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
    v23 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v17 + v23, v18),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (a1[1] != *a1) {
    return true;
  }
  v25 = *(_QWORD*)(*v2 + 8);
  v26 = *(_DWORD*)(v25 + 56);
  v27 = *(__int64***)(v25 + 8);
  v28 = *(__int64***)(v25 + 16);
  if ((v26 & 0x80000000) == 0) {
    while (v27 != v28) {
      v30 = *v27++;
      v29 = v30;
      if (*((_DWORD*)v30 + 21) == v26) {
        goto LABEL_47;
      }
    }
  LABEL_42:
    v31 = game_gmap_SpotMgr_GetCurrentSpot_alt2(),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((GameHr_1328460((__int64)v31) & 1) != 0) {
      return false;
    }
    goto LABEL_48;
  }
  if (v27 == v28) {
    goto LABEL_42;
  }
  while (1) {
    v29 = *v27;
    if ((*v27)[12] == 0 && v29[69] == 0) {
      break;
    }
    if (++v27 == v28) {
      goto LABEL_42;
    }
  }
LABEL_47:
  if ((GameHr_1328460(*v29) & 1) != 0) {
    return false;
  }
LABEL_48:
  v32 = *(_QWORD*)(*v2 + 8);
  v33 = *(_DWORD*)(v32 + 56);
  v34 = *(__int64***)(v32 + 8);
  v35 = *(__int64***)(v32 + 16);
  if (v33 < 0) {
    if (v34 != v35) {
      while (1) {
        v36 = *v34;
        if ((*v34)[12] == 0 && v36[69] == 0) {
          break;
        }
        if (++v34 == v35) {
          goto LABEL_54;
        }
      }
    LABEL_59:
      if ((Impl_132a360_alt1(*v36) & 1) == 0) {
        goto LABEL_60;
      }
      return false;
    }
  }
  else {
    while (v34 != v35) {
      v37 = *v34++;
      v36 = v37;
      if (*((_DWORD*)v37 + 21) == v33) {
        goto LABEL_59;
      }
    }
  }
LABEL_54:
  v38 = game_gmap_SpotMgr_GetCurrentSpot_alt2(),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((Impl_132a360_alt1((__int64)v38) & 1) != 0) {
    return false;
  }
LABEL_60:
  v41 = &v47_.v47;
  v47_.v47 = GameData_202be68;
  v47_.v48 = a1;
  v47_.v50 = (char**)&v47_.v47;
  v47_.v49 = 17;
  v42 = *(_QWORD*)(GameData_21c9700 + 8);
  v43 = *(char***)(v42 + 48);
  v44 = *(char***)(v42 + 56);
  if (v43 != v44) {
    do {
      v45 = *v43++;
      v52[0] = v45;
      if (v47_.v50 == nullptr) {
        GameRoutine_60a310_alt1(),
            v39 = COERCE_AS(__typeof__(v39),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*((void (**)(char**, char**))*v47_.v50 + 6))(v47_.v50, v52),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v43 != v44);
    v41 = (__int64 (***)(void))v47_.v50,
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v47_.v50 != (char**)&v47_.v47) {
      if (v47_.v50 != nullptr) {
        v46 = 5;
      LABEL_67:
        ((void (*)(__int64 (***)(void), __int64, __int64))(*v41)[v46])(v41, v39,
                                                                       v40),
            v39 = COERCE_AS(__typeof__(v39),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      return a1[1] != *a1;
    }
  }
  v46 = 4;
  goto LABEL_67;
}

void SpotMgr_1332f00(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  char* v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  char* v36;
  __int64* v37;
  __int64 v38;
  __int64** v39;
  __int64* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44[3];
  char* v45[3];
  char* v46[3];

  v1 = *(_QWORD**)a1;
  v2 = *(_QWORD**)(a1 + 8);
  v3 = (unsigned __int64)v2 - *(_QWORD*)a1;
  if (v3 == 8) {
    if (*v1 != 0) {
      v4 = *(_QWORD**)(*GameData_212c780 + 8);
      v5 = v4[2];
      if (v5 != 0 && v4[4] != 0) {
        v7 = *(unsigned int*)*v1;
        v8 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v9 = *(unsigned int*)*v1;
          if (v5 <= v7) {
            v9 = (unsigned int)v7 % (unsigned int)v5;
          }
        }
        else {
          v9 = ((_DWORD)v5 - 1) & (unsigned int)v7;
        }
        v39 = *(__int64***)(v4[1] + 8 * v9);
        if (v39 != nullptr) {
          v40 = *v39;
          if (v40 != nullptr) {
            if ((v5 & v8) == 0) {
              while (1) {
                v42 = v40[1];
                if (v42 == v7) {
                  if (*((_DWORD*)v40 + 4) == (_DWORD)v7) {
                    goto LABEL_84;
                  }
                }
                else if ((v42 & v8) != v9) {
                  return;
                }
                v40 = (__int64*)*v40;
                if (v40 == nullptr) {
                  return;
                }
              }
            }
            do {
              v41 = v40[1];
              if (v41 == v7) {
                if (*((_DWORD*)v40 + 4) == (_DWORD)v7) {
                LABEL_84:
                  v43 = v40[3];
                  if (v43 != 0) {
                    GameRoutine_13289e0(v43);
                  }
                  return;
                }
              }
              else {
                if (v41 >= v5) {
                  v41 %= v5;
                }
                if (v41 != v9) {
                  return;
                }
              }
              v40 = (__int64*)*v40;
            } while (v40 != nullptr);
          }
        }
      }
    }
  }
  else {
    if (v3 < 9) {
      return;
    }
    v10 = nullptr;
    v11 = nullptr;
    v12 = nullptr;
    v13 = GameData_212c780;
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        v15 = *(_QWORD**)(*v13 + 8);
        v16 = v15[2];
        if (v16 != 0 && v15[4] != 0) {
          v18 = *(unsigned int*)*v1;
          v19 = v16 - 1;
          if ((v16 & (v16 - 1)) != 0) {
            v20 = *(unsigned int*)*v1;
            if (v16 <= v18) {
              v20 = (unsigned int)v18 % (unsigned int)v16;
            }
          }
          else {
            v20 = ((_DWORD)v16 - 1) & (unsigned int)v18;
          }
          v21 = *(__int64***)(v15[1] + 8 * v20);
          if (v21 != nullptr) {
            v22 = *v21;
            if (v22 != nullptr) {
              if ((v16 & v19) == 0) {
                while (1) {
                  v24 = v22[1];
                  if (v24 == v18) {
                    if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                      goto LABEL_39;
                    }
                  }
                  else if ((v24 & v19) != v20) {
                    goto LABEL_13;
                  }
                  v22 = (__int64*)*v22;
                  if (v22 == nullptr) {
                    goto LABEL_13;
                  }
                }
              }
              do {
                v23 = v22[1];
                if (v23 == v18) {
                  if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                  LABEL_39:
                    v25 = v22[3];
                    if (v25 != 0) {
                      if (v11 < v10) {
                        *(_QWORD*)v11 = v25;
                        v11 += 8;
                      }
                      else {
                        v26 = v11 - v12;
                        v27 = (v11 - v12) >> 3;
                        v28 = v27 + 1;
                        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
                          GameRoutine_8875e0_alt1();
                        }
                        if ((v10 - v12) >> 2 > v28) {
                          v28 = (v10 - v12) >> 2;
                        }
                        if ((unsigned __int64)(v10 - v12) >=
                            0x7FFFFFFFFFFFFFF8LL) {
                          v29 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v29 = v28;
                        }
                        if (v29 != 0) {
                          if (v29 >> 61 != 0) {
                            GameRoutine_60a210_alt2();
                          }
                          v30 = fw_memory_HeapManager_Allocate_alt1(
                              *v14, 8 * v29, 16, 0);
                        }
                        else {
                          v30 = 0;
                        }
                        v10 = (char*)(v30 + 8 * v29);
                        v31 = v11 - v12;
                        v32 = v30 + v26 - 8 * v27;
                        *(_QWORD*)(v30 + v26) = v25;
                        v11 = (char*)(v30 + v26 + 8);
                        memcpy_alt1(v32, (__int64)v12, v31);
                        if (v12 != nullptr) {
                          v33 = 128;
                          if (*(_QWORD*)(*v14 + 200) == 0) {
                            v33 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt4(*v14 + v33,
                                                             (__int64)v12);
                        }
                        v12 = (char*)v32;
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v23 >= v16) {
                    v23 %= v16;
                  }
                  if (v23 != v20) {
                    break;
                  }
                }
                v22 = (__int64*)*v22;
              } while (v22 != nullptr);
            }
          }
        }
      }
    LABEL_13:
      ++v1;
    } while (v1 != v2);
    v46[1] = v11;
    v46[2] = v10;
    v46[0] = v12;
    GameRoutine_13289e0(*(_QWORD*)v12);
    memset(v44, 0, sizeof(v44));
    SpotMgr_13306e0((void*)(v45), v46, 0, v44);
    v34 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(*v14 + v34, (__int64)v12);
    v35 = v45[0];
    v36 = v45[1];
    if (v45[0] != v45[1]) {
      v37 = (__int64*)v45[0];
      do {
        if (*(_QWORD*)(*v37 + 120) != 0) {
          GameRoutine_13289e0(*v37);
        }
        ++v37;
      } while (v37 != (__int64*)v36);
    }
    if (v35 != nullptr) {
      v38 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*v14 + v38, (__int64)v35);
    }
  }
}

void SpotMgr_1333340(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  unsigned __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  char* v11;
  char* v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  signed __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64** v37;
  __int64* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  char* v50[3];
  char* v51[3];
  char* v52[3];

  v1 = *(_QWORD**)a1;
  v2 = *(_QWORD**)(a1 + 8);
  v3 = (unsigned __int64)v2 - *(_QWORD*)a1;
  if (v3 == 8) {
    if (*v1 != 0) {
      v4 = *(_QWORD**)(*GameData_212c780 + 8);
      v5 = v4[2];
      if (v5 != 0 && v4[4] != 0) {
        v7 = *(unsigned int*)*v1;
        v8 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v9 = *(unsigned int*)*v1;
          if (v5 <= v7) {
            v9 = (unsigned int)v7 % (unsigned int)v5;
          }
        }
        else {
          v9 = ((_DWORD)v5 - 1) & (unsigned int)v7;
        }
        v37 = *(__int64***)(v4[1] + 8 * v9);
        if (v37 != nullptr) {
          v38 = *v37;
          if (v38 != nullptr) {
            if ((v5 & v8) == 0) {
              while (1) {
                v40 = v38[1];
                if (v40 == v7) {
                  if (*((_DWORD*)v38 + 4) == (_DWORD)v7) {
                    goto LABEL_98;
                  }
                }
                else if ((v40 & v8) != v9) {
                  return;
                }
                v38 = (__int64*)*v38;
                if (v38 == nullptr) {
                  return;
                }
              }
            }
            do {
              v39 = v38[1];
              if (v39 == v7) {
                if (*((_DWORD*)v38 + 4) == (_DWORD)v7) {
                LABEL_98:
                  v49 = v38[3];
                  if (v49 != 0) {
                    GameRoutine_1326c00_alt2((__int64*)v38[3], 2u);
                    if (*(_QWORD*)(v49 + 120) != 0) {
                      game_gmap_1329500((__int64)v52, (char*)v49, 0, 1);
                    }
                  }
                  return;
                }
              }
              else {
                if (v39 >= v5) {
                  v39 %= v5;
                }
                if (v39 != v9) {
                  return;
                }
              }
              v38 = (__int64*)*v38;
            } while (v38 != nullptr);
          }
        }
      }
    }
  }
  else {
    if (v3 < 9) {
      return;
    }
    v10 = nullptr;
    v11 = nullptr;
    v12 = nullptr;
    v13 = GameData_212c780;
    v14 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      if (*v1 != 0) {
        v15 = *(_QWORD**)(*v13 + 8);
        v16 = v15[2];
        if (v16 != 0 && v15[4] != 0) {
          v18 = *(unsigned int*)*v1;
          v19 = v16 - 1;
          if ((v16 & (v16 - 1)) != 0) {
            v20 = *(unsigned int*)*v1;
            if (v16 <= v18) {
              v20 = (unsigned int)v18 % (unsigned int)v16;
            }
          }
          else {
            v20 = ((_DWORD)v16 - 1) & (unsigned int)v18;
          }
          v21 = *(__int64***)(v15[1] + 8 * v20);
          if (v21 != nullptr) {
            v22 = *v21;
            if (v22 != nullptr) {
              if ((v16 & v19) == 0) {
                while (1) {
                  v24 = v22[1];
                  if (v24 == v18) {
                    if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                      goto LABEL_39;
                    }
                  }
                  else if ((v24 & v19) != v20) {
                    goto LABEL_13;
                  }
                  v22 = (__int64*)*v22;
                  if (v22 == nullptr) {
                    goto LABEL_13;
                  }
                }
              }
              do {
                v23 = v22[1];
                if (v23 == v18) {
                  if (*((_DWORD*)v22 + 4) == (_DWORD)v18) {
                  LABEL_39:
                    v25 = v22[3];
                    if (v25 != 0) {
                      if (v11 < v10) {
                        *(_QWORD*)v11 = v25;
                        v11 += 8;
                      }
                      else {
                        v26 = v11 - v12;
                        v27 = (v11 - v12) >> 3;
                        v28 = v27 + 1;
                        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
                          GameRoutine_8875e0_alt1();
                        }
                        if ((v10 - v12) >> 2 > v28) {
                          v28 = (v10 - v12) >> 2;
                        }
                        if ((unsigned __int64)(v10 - v12) >=
                            0x7FFFFFFFFFFFFFF8LL) {
                          v29 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v29 = v28;
                        }
                        if (v29 != 0) {
                          if (v29 >> 61 != 0) {
                            GameRoutine_60a210_alt2();
                          }
                          v30 = fw_memory_HeapManager_Allocate_alt1(
                              *v14, 8 * v29, 16, 0);
                        }
                        else {
                          v30 = 0;
                        }
                        v10 = (char*)(v30 + 8 * v29);
                        v31 = v11 - v12;
                        v32 = v30 + v26 - 8 * v27;
                        *(_QWORD*)(v30 + v26) = v25;
                        v11 = (char*)(v30 + v26 + 8);
                        memcpy_alt1(v32, (__int64)v12, v31);
                        if (v12 != nullptr) {
                          v33 = 128;
                          if (*(_QWORD*)(*v14 + 200) == 0) {
                            v33 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt4(*v14 + v33,
                                                             (__int64)v12);
                        }
                        v12 = (char*)v32;
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v23 >= v16) {
                    v23 %= v16;
                  }
                  if (v23 != v20) {
                    break;
                  }
                }
                v22 = (__int64*)*v22;
              } while (v22 != nullptr);
            }
          }
        }
      }
    LABEL_13:
      ++v1;
    } while (v1 != v2);
    v52[1] = v11;
    v52[2] = v10;
    v52[0] = v12;
    v34 = *(_QWORD*)v12;
    if (*(_BYTE*)(*(_QWORD*)v12 + 176LL) != 2) {
      v35 = *(_QWORD*)(v34 + 120);
      if (v35 != 0) {
        if ((*(_WORD*)(v35 + 258) & 0x80) == 0) {
          *(_WORD*)(v34 + 176) = 770;
          v36 = GameRoutine_ae07e0_alt2(v35);
          if (*v36 != 0) {
            game_VariableManager_SetFlag_alt2((__int64)v36, 1);
          }
        }
      }
      else {
        *(_WORD*)(v34 + 176) = 770;
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v12 + 120LL) != 0) {
      game_gmap_1329500((__int64)v51, *(char**)v12, 0, 1);
    }
    memset(v50, 0, sizeof(v50));
    SpotMgr_13306e0((void*)(v51), v52, 0, v50);
    v41 = 128;
    if (*(_QWORD*)(*v14 + 200) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(*v14 + v41, (__int64)v12);
    v42 = v51[0];
    v43 = v51[1];
    if (v51[0] != v51[1]) {
      v44 = v51[0];
      do {
        v45 = *(_QWORD*)v44;
        v46 = *(_QWORD*)(*(_QWORD*)v44 + 120LL);
        if (v46 != 0) {
          if (*(_BYTE*)(v45 + 176) != 2 && (*(_WORD*)(v46 + 258) & 0x80) == 0) {
            *(_WORD*)(v45 + 176) = 770;
            v47 = GameRoutine_ae07e0_alt2(v46);
            if (*v47 != 0) {
              game_VariableManager_SetFlag_alt2((__int64)v47, 1);
            }
          }
          if (*(_QWORD*)(v45 + 120) != 0) {
            game_gmap_1329500((__int64)v51, (char*)v45, 0, 1);
          }
        }
        v44 += 8;
      } while (v44 != v43);
    }
    if (v42 != nullptr) {
      v48 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*v14 + v48, (__int64)v42);
    }
  }
}

void SpotMgr_1333820(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  char v7;
  int v8;
  __int64 v9;

  v2 = GameData_21c9700;
  if (GameData_21c9700 != 0) {
    *(_BYTE*)(*(_QWORD*)(GameData_21c9700 + 8) + 208LL) = 1;
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(__int64**)(v3 + 48);
    for (i = *(__int64**)(v3 + 56); v4 != i; ++v4) {
      v6 = *v4;
      v7 = *(_BYTE*)(*v4 + 112);
      v8 = *(unsigned __int8*)(*v4 + 176);
      *(_BYTE*)(*v4 + 177) = 0;
      if (v8 == 3 && ((v7 == 0) | v7 & 1) != 0) {
        v9 = *(_QWORD*)(v6 + 120);
        if (v9 != 0) {
          if ((*(_WORD*)(v9 + 258) & 0x80) == 0) {
            *(_WORD*)(v6 + 176) = 770;
            if (*(_QWORD*)GameRoutine_ae07e0(v9, a2) != 0) {
              game_VariableManager_SetFlag();
            }
          }
        }
        else {
          *(_WORD*)(v6 + 176) = 770;
        }
      }
    }
  }
}

void SpotMgr_13338e0()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64* i;
  __int64 v4;
  int v5;
  __int64 v6;
  bool v7;
  __int64* v9;
  char v10;

  v0 = GameData_21c9700;
  if (GameData_21c9700 != 0) {
    *(_BYTE*)(*(_QWORD*)(GameData_21c9700 + 8) + 208LL) = 0;
    v1 = *(_QWORD*)(v0 + 8);
    v2 = *(__int64**)(v1 + 48);
    for (i = *(__int64**)(v1 + 56); v2 != i; ++v2) {
      v4 = *v2;
      v5 = *(unsigned __int8*)(*v2 + 177);
      if (*(_BYTE*)(*v2 + 177) != 0) {
        if (*(unsigned __int8*)(v4 + 176) != v5) {
          v6 = *(_QWORD*)(v4 + 120);
          v7 = v5 == 1 || v6 == 0;
          if (v7 || (*(_WORD*)(v6 + 258) & 0x80) == 0) {
            *(_BYTE*)(v4 + 176) = v5;
            if (v5 == 2) {
              *(_BYTE*)(v4 + 177) = 3;
            }
            if (v5 != 1 && v6 != 0) {
              v9 = GameRoutine_ae07e0_alt2(v6);
              if (*v9 != 0) {
                game_VariableManager_SetFlag_alt2((__int64)v9, 1);
              }
            }
          }
        }
        if (*(_QWORD*)(v4 + 120) != 0) {
          game_gmap_1329500((__int64)&v10, (char*)v4, 0, 1);
        }
      }
    }
  }
}

__int64 SpotMgr_13339e0()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  unsigned int v3;
  __int64 v4;
  _QWORD** v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  int v13;
  int v14;
  _QWORD* v15;

  v0 = *(_QWORD*)(*GameData_212c780 + 8);
  v1 = *(__int64**)(v0 + 48);
  v2 = *(__int64**)(v0 + 56);
  if (v1 == v2) {
    return 0;
  }
  else {
    v3 = 0;
    v4 = *(_QWORD*)GameData_212c7a0[0];
    v5 = (_QWORD**)GameData_212c6a0[0];
    do {
      v7 = *v1;
      if ((unsigned __int8)Impl_13261c0_alt1(*v1) == 9) {
        v8 = *(_QWORD*)(v4 + 16);
        v9 = *(_QWORD**)(v8 + 80);
        v10 = *(_QWORD**)(v8 + 88);
        if (v9 != v10) {
          while (*v9 != *(_QWORD*)(v7 + 96)) {
            v9 += 9;
            if (v9 == v10) {
              goto LABEL_5;
            }
          }
          v12 = (__int64*)v9[6];
          v11 = (__int64*)v9[7];
          if ((int)((unsigned __int64)((char*)v11 - (char*)v12) >> 3) >= 1) {
            if (v12 == v11) {
              v6 = 1;
            }
            else {
              v13 = 0;
              do {
                v15 = GameRoutine_dbc1e0(*v5, *v12);
                v14 = v15 == nullptr || *((_DWORD*)v15 + 3) == 0;
                v13 += v14;
                ++v12;
              } while (v12 != v11);
              v6 = v13 == 0;
            }
            v3 += v6;
          }
        }
      }
    LABEL_5:
      ++v1;
    } while (v1 != v2);
  }
  return v3;
}

__int64* SpotMgr_1333b20()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64* result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(__int64**)(v0 + 48);
  for (i = *(__int64**)(v0 + 56); v1 != i;
       result = GameRoutine_1328d60_alt2(v3)) {
    v3 = *v1++;
  }
  return result;
}

void SpotMgr_1333b80()
{
  __int64 v0;
  __int64* v1;
  __int64* i;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;

  if (GameData_21c9700 != 0) {
    v0 = *(_QWORD*)(GameData_21c9700 + 8);
    v1 = *(__int64**)(v0 + 48);
    for (i = *(__int64**)(v0 + 56); v1 != i; *(_BYTE*)(v3 + 116) = 0) {
      v3 = *v1;
      if (*(_BYTE*)(*v1 + 176) != 1) {
        *(_BYTE*)(v3 + 176) = 1;
      }
      v4 = *(_QWORD*)(v3 + 120);
      *(_BYTE*)(v3 + 178) = 0;
      if (v4 != 0) {
        GameRoutine_1329500((__int64)&v6, (char*)v3, 0, 1);
      }
      v5 = *(_QWORD*)(v3 + 280);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
        *(_QWORD*)(v3 + 280) = 0;
      }
      ++v1;
    }
  }
  if (GameData_2241428 != 0) {
    *(_QWORD*)(GameData_2241428 + 16) = *(_QWORD*)(GameData_2241428 + 8);
  }
}

bool SpotMgr_1333c60(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL4 v14;
  __int64 v15;
  _QWORD v17[4];
  _QWORD* v18;
  __int64 v19;

  v2 = v17;
  v17[0] = GameData_202bee8;
  v18 = v17;
  v3 = *(_QWORD*)(GameData_21c9700 + 8);
  v4 = *(__int64**)(v3 + 72);
  v5 = *(__int64**)(v3 + 80);
  if (v4 == v5) {
    v14 = false;
  LABEL_23:
    v15 = 32;
    goto LABEL_24;
  }
  v6 = 0;
  do {
    v7 = *v4;
    v8 = *(_QWORD*)(*v4 + 120);
    v9 = v8 != 0 && *(_BYTE*)(*v4 + 176) == 1;
    if (v9 && *(_WORD*)(v8 + 120) != 0) {
      v10 = *(__int64**)(v8 + 24);
      v11 = *v10;
      v12 = v10[1];
      if (v12 == *v10) {
      LABEL_3:
        v19 = v7;
        if (v18 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        LOBYTE(v2) =
            (*(__int64 (**)(_QWORD*, __int64*))(*v18 + 48LL))(v18, &v19);
        ++v6;
      }
      else {
        while (1) {
          if (*(_QWORD*)v11 != 0) {
            v13 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              LOBYTE(v2) =
                  GameRoutine_828f50(game_GameModeData_instance_ + 40, v11);
            }
            if (*(_BYTE*)(v11 + 16) != ((v13 == 0) | (unsigned __int8)v2 & 1)) {
              break;
            }
          }
          v11 += 24;
          if (v11 == v12) {
            goto LABEL_3;
          }
        }
      }
    }
    ++v4;
  } while (v4 != v5);
  v2 = v18;
  v14 = v6 > 0;
  if (v18 == v17) {
    goto LABEL_23;
  }
  if (v18 != nullptr) {
    v15 = 40;
  LABEL_24:
    (*(void (**)(_QWORD*))(*v2 + v15))(v2);
  }
  return v14;
}

bool SpotMgr_1333de0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v16;

  v2 = *(_QWORD*)(GameData_21c9700 + 8);
  v3 = *(__int64**)(v2 + 72);
  v4 = *(__int64**)(v2 + 80);
  if (v3 == v4) {
    return false;
  }
  v5 = a1;
  v6 = 0;
  do {
    v8 = *v3;
    v9 = *(_QWORD*)(*v3 + 120);
    v10 = v9 != 0 && *(_BYTE*)(*v3 + 176) == 1;
    if (v10 && *(_WORD*)(v9 + 120) != 0) {
      v11 = *(__int64**)(v9 + 24);
      v12 = *v11;
      v13 = v11[1];
      if (v13 == *v11) {
      LABEL_3:
        v7 = *(_QWORD*)(v5 + 32);
        v16 = v8;
        if (v7 == 0) {
          GameRoutine_60a310(0, a2);
        }
        LOBYTE(a1) =
            (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v16);
        ++v6;
      }
      else {
        while (1) {
          if (*(_QWORD*)v12 != 0) {
            v14 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              LOBYTE(a1) =
                  GameRoutine_828f50(game_GameModeData_instance_ + 40, v12);
            }
            if (*(_BYTE*)(v12 + 16) != ((v14 == 0) | a1 & 1)) {
              break;
            }
          }
          v12 += 24;
          if (v12 == v13) {
            goto LABEL_3;
          }
        }
      }
    }
    ++v3;
  } while (v3 != v4);
  return v6 > 0;
}

_QWORD* SpotMgr_1334160(_QWORD* result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 == 0) {
    return result;
  }
  v2 = result[18];
  v3 = (_QWORD*)result[19];
  v4 = (_QWORD*)v2;
  if ((_QWORD*)v2 == v3) {
    goto LABEL_18;
  }
  v5 = (unsigned __int64)v3 - v2 - 8;
  v4 = (_QWORD*)result[18];
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (_QWORD*)result[18];
    while (*v4 != a2) {
      ++v4;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v5 >= 0x18) {
    v4 += 2;
    while (1) {
      if (*(v4 - 2) == a2) {
        if (v4 - 2 != v3) {
          return result;
        }
        goto LABEL_19;
      }
      if (*(v4 - 1) == a2) {
        --v4;
        goto LABEL_18;
      }
      if (*v4 == a2) {
        goto LABEL_18;
      }
      if (v4[1] == a2) {
        break;
      }
      v7 = v4 + 2;
      v4 += 4;
      if (v7 == v3) {
        goto LABEL_19;
      }
    }
    if (v4 + 1 != v3) {
      return result;
    }
  }
LABEL_19:
  v8 = result[20];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (unsigned __int64)v3 - v2;
    v11 = ((__int64)v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_8875e0_alt1();
    }
    v13 = v8 - v2;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210_alt2();
      }
      v16 = result;
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = result;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = v18 + v10 - 8 * v11;
    *(_QWORD*)(v18 + v10) = a2;
    v9 = v18 + v10 + 8;
    memcpy_alt1(v20, v2, v10);
    result = v16;
    v16[18] = v20;
    v16[19] = v9;
    v16[20] = v19;
    if (v2 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v14 + v21, v2);
      result = v16;
    }
  }
  else {
    *v3 = a2;
    v9 = (__int64)(v3 + 1);
  }
  result[19] = v9;
  return result;
}

_QWORD* SpotMgr_1334360(_QWORD* result, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a2 == 0) {
    return result;
  }
  v2 = result[21];
  v3 = (_QWORD*)result[22];
  v4 = (_QWORD*)v2;
  if ((_QWORD*)v2 == v3) {
    goto LABEL_18;
  }
  v5 = (unsigned __int64)v3 - v2 - 8;
  v4 = (_QWORD*)result[21];
  if ((~(_BYTE)v5 & 0x18) != 0) {
    v6 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
    v4 = (_QWORD*)result[21];
    while (*v4 != a2) {
      ++v4;
      if (--v6 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v4 != v3) {
      return result;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v5 >= 0x18) {
    v4 += 2;
    while (1) {
      if (*(v4 - 2) == a2) {
        if (v4 - 2 != v3) {
          return result;
        }
        goto LABEL_19;
      }
      if (*(v4 - 1) == a2) {
        --v4;
        goto LABEL_18;
      }
      if (*v4 == a2) {
        goto LABEL_18;
      }
      if (v4[1] == a2) {
        break;
      }
      v7 = v4 + 2;
      v4 += 4;
      if (v7 == v3) {
        goto LABEL_19;
      }
    }
    if (v4 + 1 != v3) {
      return result;
    }
  }
LABEL_19:
  v8 = result[23];
  if ((unsigned __int64)v3 >= v8) {
    v10 = (unsigned __int64)v3 - v2;
    v11 = ((__int64)v3 - v2) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_8875e0_alt1();
    }
    v13 = v8 - v2;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210_alt2();
      }
      v16 = result;
      v17 = a2;
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
      a2 = v17;
    }
    else {
      v16 = result;
      v18 = 0;
    }
    v19 = v18 + 8 * v15;
    v20 = v18 + v10 - 8 * v11;
    *(_QWORD*)(v18 + v10) = a2;
    v9 = v18 + v10 + 8;
    memcpy_alt1(v20, v2, v10);
    result = v16;
    v16[21] = v20;
    v16[22] = v9;
    v16[23] = v19;
    if (v2 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v14 + v21, v2);
      result = v16;
    }
  }
  else {
    *v3 = a2;
    v9 = (__int64)(v3 + 1);
  }
  result[22] = v9;
  return result;
}

void SpotMgr_1334560(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  unsigned int* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64** v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64* v44;
  __int64 v45;
  char* v46;
  char* v47;
  unsigned __int64 v48;
  __int64 v49;
  char* v50;
  signed __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  unsigned __int64 v57;
  __int64 v58;
  _QWORD* v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  __int64 v77;
  unsigned __int64 v78;
  int v79;
  __int64* v80;
  __int64 v81;
  unsigned __int64 v82;
  struct {
    _QWORD v83[4];
    _QWORD* v84;
  } v83_;

  v1 = *(__int64**)(a1 + 48);
  v2 = *(__int64**)(a1 + 56);
  if (v1 == v2) {
    return;
  }
  v4 = 0;
  v5 = nullptr;
  v6 = 0;
  v77 = 0;
  v78 = 0;
  v7 = nullptr;
  v75 = *(__int64**)(a1 + 56);
  do {
    v8 = *v1;
    v9 = *(_QWORD*)(*v1 + 120);
    if (v9 != 0 && *(_WORD*)(v9 + 152) != 0) {
      v83_.v83[0] = GameData_202bd38;
      v83_.v84 = v83_.v83;
      v79 = game_gmap_TroopMgr_CountPlayerTroop_1349100_alt1(v8,
                                                             (__int64)v83_.v83);
      if (v83_.v84 == v83_.v83) {
        v10 = 32;
      }
      else {
        if (v83_.v84 == nullptr) {
          goto LABEL_12;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v83_.v84 + v10))((__int64)v83_.v84);
    LABEL_12:
      v76 = v1;
      v81 = *(unsigned __int16*)(v9 + 152);
      if (*(_WORD*)(v9 + 152) != 0) {
        for (i = 0; i != v81; ++i) {
          v12 = *(unsigned int**)(*(_QWORD*)(v9 + 160) + 16 * i + 8);
          if (v12 == nullptr) {
            goto LABEL_40;
          }
          v13 = *(_QWORD**)(GameData_21c9700 + 8);
          v14 = v13[2];
          if (v14 == 0 || v13[4] == 0) {
            goto LABEL_40;
          }
          v16 = *v12;
          v17 = v14 - 1;
          if ((v14 & (v14 - 1)) != 0) {
            v18 = v16;
            if (v14 <= v16) {
              v18 = (unsigned int)v16 % (unsigned int)v14;
            }
          }
          else {
            v18 = ((_DWORD)v14 - 1) & (unsigned int)v16;
          }
          v19 = *(__int64***)(v13[1] + 8 * v18);
          if (v19 == nullptr || (v20 = *v19) == nullptr) {
          LABEL_40:
            v22 = 0;
            goto LABEL_41;
          }
          if ((v14 & v17) == 0) {
            while (1) {
              v23 = v20[1];
              if (v23 == v16) {
                if (*((_DWORD*)v20 + 4) == (_DWORD)v16) {
                  goto LABEL_75;
                }
              }
              else if ((v23 & v17) != v18) {
                goto LABEL_40;
              }
              v20 = (__int64*)*v20;
              v22 = 0;
              if (v20 == nullptr) {
                goto LABEL_41;
              }
            }
          }
          while (1) {
            v21 = v20[1];
            if (v21 == v16) {
              break;
            }
            if (v21 >= v14) {
              v21 %= v14;
            }
            if (v21 != v18) {
              goto LABEL_40;
            }
          LABEL_30:
            v20 = (__int64*)*v20;
            if (v20 == nullptr) {
              goto LABEL_40;
            }
          }
          if (*((_DWORD*)v20 + 4) != (_DWORD)v16) {
            goto LABEL_30;
          }
        LABEL_75:
          v22 = v20[3];
        LABEL_41:
          v83_.v83[0] = GameData_202bdb8;
          v83_.v84 = v83_.v83;
          v24 = game_gmap_TroopMgr_CountPlayerTroop_1349100_alt1(
              v22, (__int64)v83_.v83);
          if (v83_.v84 == v83_.v83) {
            v25 = 32;
          LABEL_45:
            (*(void (**)(__int64))(*v83_.v84 + v25))((__int64)v83_.v84);
          }
          else if (v83_.v84 != nullptr) {
            v25 = 40;
            goto LABEL_45;
          }
          if (v24 != 0 || v79 >= 1) {
            if ((unsigned __int64)v5 < v6) {
              *v5++ = v22;
              continue;
            }
            v26 = (unsigned __int64)v5 - v4;
            v27 = ((__int64)v5 - v4) >> 3;
            v28 = v27 + 1;
            if ((unsigned __int64)(v27 + 1) >> 61 == 0) {
              v29 = v7;
              if ((__int64)(v6 - v4) >> 2 > v28) {
                v28 = (__int64)(v6 - v4) >> 2;
              }
              if (v6 - v4 >= 0x7FFFFFFFFFFFFFF8LL) {
                v30 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v30 = v28;
              }
              if (v30 != 0) {
                if (v30 >> 61 != 0) {
                  goto LABEL_161;
                }
                v31 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v30, 16, 0);
              }
              else {
                v31 = 0;
              }
              v6 = v31 + 8 * v30;
              v32 = v31 + v26 - 8 * v27;
              *(_QWORD*)(v31 + v26) = v22;
              v33 = v31 + v26 + 8;
              memcpy_alt1(v32, v4, v26);
              if (v4 != 0) {
                v34 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v34 = 56;
                }
                nn_mem_StandardAllocator_Free_alt4(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v4);
              }
              v4 = v32;
              v7 = v29;
              v5 = (__int64*)v33;
              continue;
            }
          LABEL_160:
            GameRoutine_8875e0_alt1();
          }
          if ((unsigned __int64)v7 < v78) {
            *v7++ = v22;
            continue;
          }
          v35 = (unsigned __int64)v7 - v77;
          v36 = ((__int64)v7 - v77) >> 3;
          v37 = v36 + 1;
          if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
            goto LABEL_160;
          }
          if ((__int64)(v78 - v77) >> 2 > v37) {
            v37 = (__int64)(v78 - v77) >> 2;
          }
          if (v78 - v77 >= 0x7FFFFFFFFFFFFFF8LL) {
            v38 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v38 = v37;
          }
          if (v38 != 0) {
            if (v38 >> 61 != 0) {
              goto LABEL_161;
            }
            v39 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v38, 16, 0);
          }
          else {
            v39 = 0;
          }
          v40 = v39 + 8 * v38;
          *(_QWORD*)(v39 + v35) = v22;
          v7 = (__int64*)(v39 + v35 + 8);
          v41 = v39 + v35 - 8 * v36;
          v78 = v40;
          memcpy_alt1(v41, v77, v35);
          if (v77 != 0) {
            v42 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v42 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v77);
          }
          v77 = v41;
        }
      }
      v80 = v5;
      v82 = v6;
      v43 = (_QWORD*)v77;
      if ((__int64*)v77 != v7) {
        while (1) {
          v53 = *v43;
          if (*(_BYTE*)(*v43 + 176LL) == 1) {
            goto LABEL_114;
          }
          v54 = *(_QWORD*)(a1 + 168);
          v55 = *(_QWORD**)(a1 + 176);
          v56 = (_QWORD*)v54;
          if ((_QWORD*)v54 == v55) {
            goto LABEL_132;
          }
          v57 = (unsigned __int64)v55 - v54 - 8;
          v56 = *(_QWORD**)(a1 + 168);
          if ((~(_BYTE)v57 & 0x18) != 0) {
            break;
          }
        LABEL_121:
          if (v57 < 0x18) {
            goto LABEL_133;
          }
          v56 += 2;
          while (1) {
            if (*(v56 - 2) == v53) {
              if (v56 - 2 == v55) {
                goto LABEL_133;
              }
              goto LABEL_114;
            }
            if (*(v56 - 1) == v53) {
              --v56;
              goto LABEL_132;
            }
            if (*v56 == v53) {
              goto LABEL_132;
            }
            if (v56[1] == v53) {
              break;
            }
            v59 = v56 + 2;
            v56 += 4;
            if (v59 == v55) {
              goto LABEL_133;
            }
          }
          if (v56 + 1 != v55) {
            goto LABEL_114;
          }
        LABEL_133:
          v60 = *(_QWORD*)(a1 + 184);
          if ((unsigned __int64)v55 < v60) {
            *v55 = v53;
            v52 = (__int64)(v55 + 1);
            goto LABEL_113;
          }
          v61 = (char*)v55 - v54;
          v62 = ((__int64)v55 - v54) >> 3;
          v63 = v62 + 1;
          if ((unsigned __int64)(v62 + 1) >> 61 != 0) {
            goto LABEL_160;
          }
          v64 = v60 - v54;
          v65 = v4;
          v66 = v7;
          if (v64 >> 2 > v63) {
            v63 = v64 >> 2;
          }
          if ((unsigned __int64)v64 >= 0x7FFFFFFFFFFFFFF8LL) {
            v67 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v67 = v63;
          }
          if (v67 != 0) {
            if (v67 >> 61 == 0) {
              v68 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v67, 16, 0);
              goto LABEL_144;
            }
          LABEL_161:
            GameRoutine_60a210_alt2();
          }
          v68 = 0;
        LABEL_144:
          v69 = v68 + 8 * v67;
          v70 = (unsigned __int64)v55 - v54;
          v71 = (__int64)&v61[v68 + -8 * v62];
          *(_QWORD*)&v61[v68] = v53;
          v52 = (__int64)&v61[v68 + 8];
          memcpy_alt1(v71, v54, v70);
          *(_QWORD*)(a1 + 168) = v71;
          *(_QWORD*)(a1 + 176) = v52;
          *(_QWORD*)(a1 + 184) = v69;
          if (v54 != 0) {
            v72 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v72 = 56;
            }
            nn_mem_StandardAllocator_Free_alt4(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v54);
          }
          v7 = v66;
          v4 = v65;
          v6 = v82;
        LABEL_113:
          *(_QWORD*)(a1 + 176) = v52;
        LABEL_114:
          if (++v43 == v7) {
            goto LABEL_83;
          }
        }
        v58 = ((unsigned __int8)((unsigned int)v57 >> 3) + 1) & 3;
        v56 = *(_QWORD**)(a1 + 168);
        while (*v56 != v53) {
          ++v56;
          if (--v58 == 0) {
            goto LABEL_121;
          }
        }
      LABEL_132:
        if (v56 == v55) {
          goto LABEL_133;
        }
        goto LABEL_114;
      }
    LABEL_83:
      v5 = v80;
      v2 = v75;
      v44 = (__int64*)v4;
      if ((__int64*)v4 == v80) {
      LABEL_3:
        v1 = v76;
        goto LABEL_4;
      }
      while (1) {
        v45 = *v44;
        if (*(_BYTE*)(*v44 + 176) != 3 && (*(_BYTE*)(v45 + 112) & 1) == 0 &&
            (*(_BYTE*)(a1 + 208) & 1) == 0) {
          SpotMgr_1334160((_QWORD*)a1, *v44);
        }
        v47 = *(char**)(a1 + 168);
        v46 = *(char**)(a1 + 176);
        if (v47 != v46) {
          v48 = v46 - v47 - 8;
          if ((~(_BYTE)v48 & 0x18) == 0) {
          LABEL_96:
            if (v48 >= 0x18) {
              v47 += 16;
              while (1) {
                if (*((_QWORD*)v47 - 2) == v45) {
                  v47 -= 16;
                  if (v47 != v46) {
                    goto LABEL_108;
                  }
                  goto LABEL_86;
                }
                if (*((_QWORD*)v47 - 1) == v45) {
                  v47 -= 8;
                  goto LABEL_107;
                }
                if (*(_QWORD*)v47 == v45) {
                  goto LABEL_107;
                }
                if (*((_QWORD*)v47 + 1) == v45) {
                  break;
                }
                v50 = v47 + 16;
                v47 += 32;
                if (v50 == v46) {
                  goto LABEL_86;
                }
              }
              v47 += 8;
              if (v47 != v46) {
                goto LABEL_108;
              }
            }
            goto LABEL_86;
          }
          v49 = ((unsigned __int8)((unsigned int)v48 >> 3) + 1) & 3;
          while (*(_QWORD*)v47 != v45) {
            v47 += 8;
            if (--v49 == 0) {
              goto LABEL_96;
            }
          }
        }
      LABEL_107:
        if (v47 != v46) {
        LABEL_108:
          v51 = v46 - (v47 + 8);
          if (v46 != v47 + 8) {
            memmove_alt1((__int64)v47, (__int64)(v47 + 8), v46 - (v47 + 8));
          }
          *(_QWORD*)(a1 + 176) = &v47[v51];
        }
      LABEL_86:
        if (++v44 == v80) {
          goto LABEL_3;
        }
      }
    }
  LABEL_4:
    ++v1;
  } while (v1 != v2);
  if (v77 != 0) {
    v73 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v77);
  }
  if (v4 != 0) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v4);
  }
}

_QWORD* SpotMgr_1334d40(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned int* v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = result[15];
  if (v1 != 0) {
    v2 = *(unsigned __int16*)(v1 + 168);
    if (*(_WORD*)(v1 + 168) != 0) {
      v3 = 0;
      v4 = GameData_212c780;
      do {
        v5 = *(unsigned int**)(*(_QWORD*)(v1 + 176) + 16 * v3 + 8);
        if (v5 != nullptr) {
          result = *(_QWORD**)(*v4 + 8);
          v6 = result[2];
          if (v6 != 0 && result[4] != 0) {
            v8 = *v5;
            v9 = v6 - 1;
            if ((v6 & (v6 - 1)) != 0) {
              v10 = v8;
              if (v6 <= v8) {
                v10 = (unsigned int)v8 % (unsigned int)v6;
              }
            }
            else {
              v10 = ((_DWORD)v6 - 1) & (unsigned int)v8;
            }
            v11 = *(__int64***)(result[1] + 8 * v10);
            if (v11 != nullptr) {
              v12 = *v11;
              if (v12 != nullptr) {
                if ((v6 & v9) == 0) {
                  while (1) {
                    v14 = v12[1];
                    if (v14 == v8) {
                      if (*((_DWORD*)v12 + 4) == (_DWORD)v8) {
                        goto LABEL_30;
                      }
                    }
                    else if ((v14 & v9) != v10) {
                      goto LABEL_4;
                    }
                    v12 = (__int64*)*v12;
                    if (v12 == nullptr) {
                      goto LABEL_4;
                    }
                  }
                }
                do {
                  v13 = v12[1];
                  if (v13 == v8) {
                    if (*((_DWORD*)v12 + 4) == (_DWORD)v8) {
                    LABEL_30:
                      v15 = v12[3];
                      if (v15 != 0 && *(_BYTE*)(v15 + 176) == 1 &&
                          (*(_BYTE*)(v15 + 112) & 1) == 0) {
                        result = SpotMgr_1334160(result, v15);
                      }
                      break;
                    }
                  }
                  else {
                    if (v13 >= v6) {
                      v13 %= v6;
                    }
                    if (v13 != v10) {
                      break;
                    }
                  }
                  v12 = (__int64*)*v12;
                } while (v12 != nullptr);
              }
            }
          }
        }
      LABEL_4:
        ++v3;
      } while (v3 != v2);
    }
  }
  return result;
}

__int64* SpotMgr_1334ec0(__int64* result)
{
  _QWORD* v1;
  __int64* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  unsigned int* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64** v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  unsigned int v39;
  __int64 v40;
  struct {
    __int64 v41;
    __int64 v42;
  } v41_;
  struct {
    _QWORD v43[3];
    int v44;
    char gap44_[4];
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v43_;

  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = result + 3;
  v2 = result;
  v3 = *((int*)result + 135);
  if (v3 <= (result[4] - result[3]) >> 3) {
    if ((int)v3 >= 1) {
      v4 = (unsigned int)v3 + 1LL;
      v5 = GameData_212c780;
      v6 = (__int64*)GameData_212c540;
      v7 = (__int64*)GameData_212c548;
      v8 = 1;
      do {
        v10 = *(_QWORD*)(*v1 + 8 * v8 - 8);
        if (*(_BYTE*)(v10 + 176) != 3) {
          result = *(__int64**)(v10 + 120);
          if (result != nullptr) {
            if ((*((_WORD*)result + 129) & 0x80) == 0) {
              *(_BYTE*)(v10 + 176) = 3;
              result = GameRoutine_ae07e0_alt2((__int64)result),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (*result != 0) {
                result = (__int64*)game_VariableManager_SetFlag_alt2(
                    (__int64)result, 1),
                v39 =
                    COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
          }
          else {
            *(_BYTE*)(v10 + 176) = 3;
          }
        }
        v11 = (__int64)v2;
        if (v8 >= 2) {
          v11 = *v1 + 8 * v8 - 16;
        }
        v12 = *(_QWORD*)v11;
        if (*(_BYTE*)(*(_QWORD*)v11 + 115LL) == 1) {
          if (v12 == v10) {
            goto LABEL_7;
          }
          v13 = *(_QWORD*)(v10 + 120);
          if (v13 == 0) {
            v9 = *v5;
            goto LABEL_6;
          }
          v14 = *(unsigned __int16*)(v13 + 136);
          v9 = *v5;
          if (*(_WORD*)(v13 + 136) == 0) {
            goto LABEL_6;
          }
          v15 = *(_QWORD*)(v13 + 144);
          v16 = 0;
          v17 = 0;
        LABEL_21:
          v18 = *(unsigned int**)(v15 + 16 * v16 + 8);
          if (v18 == nullptr) {
            goto LABEL_45;
          }
          v19 = *(_QWORD**)(v9 + 8);
          v20 = v19[2];
          v21 = v20 == 0 || v19[4] == 0;
          if (v21) {
            goto LABEL_45;
          }
          v22 = *v18;
          v23 = v20 - 1;
          if ((v20 & (v20 - 1)) != 0) {
            v24 = v22;
            if (v20 <= v22) {
              v24 = (unsigned int)v22 % (unsigned int)v20;
            }
          }
          else {
            v24 = ((_DWORD)v20 - 1) & (unsigned int)v22;
          }
          v25 = *(__int64***)(v19[1] + 8 * v24);
          if (v25 == nullptr || (v26 = *v25) == nullptr) {
          LABEL_45:
            v28 = 0;
            goto LABEL_46;
          }
          if ((v20 & v23) == 0) {
            while (1) {
              v29 = v26[1];
              if (v29 == v22) {
                if (*((_DWORD*)v26 + 4) == (_DWORD)v22) {
                  goto LABEL_48;
                }
              }
              else if ((v29 & v23) != v24) {
                goto LABEL_45;
              }
              v26 = (__int64*)*v26;
              v28 = 0;
              if (v26 == nullptr) {
                goto LABEL_46;
              }
            }
          }
          while (1) {
            v27 = v26[1];
            if (v27 == v22) {
              if (*((_DWORD*)v26 + 4) == (_DWORD)v22) {
              LABEL_48:
                v28 = v26[3];
              LABEL_46:
                ++v16;
                v17 |= v12 == v28;
                if (v16 == v14) {
                  if ((v17 & 1) != 0) {
                    goto LABEL_7;
                  }
                LABEL_6:
                  result = SpotMgr_1334360(*(_QWORD**)(v9 + 8), v12),
                  v39 = COERCE_AS(
                      __typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  goto LABEL_7;
                }
                goto LABEL_21;
              }
            }
            else {
              if (v27 >= v20) {
                v27 %= v20;
              }
              if (v27 != v24) {
                goto LABEL_45;
              }
            }
            v26 = (__int64*)*v26;
            if (v26 == nullptr) {
              goto LABEL_45;
            }
          }
        }
        if (*(_BYTE*)(v10 + 115) == 1) {
          v30 = *(__int64**)(v12 + 48);
          v31 = *(__int64**)(v12 + 56);
          if (v30 != v31) {
            while (1) {
              v32 = *v30++;
              if ((*(_BYTE*)(*(_QWORD*)(v32 + 8) + 115LL) & 1) == 0) {
                break;
              }
              if (v30 == v31) {
                goto LABEL_7;
              }
            }
            v33 = *v7;
            v34 = v7[1];
            v21 = *(_BYTE*)(v10 + 114) == 0;
            v35 = "Gmap_Spot_Screen_Sand";
            v43_.v43[0] = 0;
            v43_.v43[1] = 0;
            v43_.v47 = v33;
            v43_.v48 = v34;
            if (!v21) {
              v35 = "Gmap_Spot_Screen_Splash";
            }
            v36 = *v6;
            v37 = v6[1];
            v43_.v43[2] = v35;
            v43_.v45 = v36;
            v43_.v46 = v37;
            v43_.v49 = v36;
            v43_.v50 = v37;
            v43_.v44 = 5;
            v38 = ({
              unsigned __int128 r_ = Manager_bc6460_pair(
                  *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v43_.v43, 0);
              v39 = COERCE_AS(__typeof__(v39), (unsigned long long)(r_ >> 64));
              (__int64*)(unsigned long long)r_;
            });
            result = (__int64*)GameHr_14a10d0(&v41_.v41, (__int64)v38, v39,
                                              (__int64)&GameData_1a9f09e),
            v39 = COERCE_AS(__typeof__(v39),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v40 = v41_.v42;
            if (v41_.v42 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
                  v39 = COERCE_AS(
                      __typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result =
                  (__int64*)std___1___shared_weak_count___release_weak(v40),
              v39 = COERCE_AS(__typeof__(v39),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
        }
      LABEL_7:
        ++v8;
      } while (v8 != v4);
    }
  }
  else {
    *((_DWORD*)result + 135) = 0;
    return GameRoutine_888970_alt1(result + 3, 0, 0, 0);
  }
  return result;
}

void SpotMgr_1335280(char a1)
{
  __int64 v2;
  char** v3;
  char** v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64* i;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  _QWORD* v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  char** v64;
  char** v65;
  bool v66;
  char* v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  bool v74;
  struct {
    __int64 v75;
    void* v76;
  } v75_;

  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(char***)(v2 + 48);
  v4 = *(char***)(v2 + 56);
  while (v3 != v4) {
    v5 = *v3;
    v6 = *((_QWORD*)*v3 + 15);
    (*v3)[112] = 0;
    if (v6 != 0) {
      game_gmap_1329500((__int64)&v75_.v75, v5, 0, a1 & 1);
    }
    ++v3;
  }
  v75_.v76 = &GameData_1abbb2b;
  v75_.v75 = game_HashString_alt1((__int64)&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v75_.v75);
    if (v7 != 0 && *(_DWORD*)(v7 + 32) != 0) {
      v8 = game_HashString_alt1((__int64)&GameData_1abbb2b);
      if (v8 != 0) {
        v9 = *(_QWORD*)(GameData_21c9e28 + 96);
        v10 = v9 == 0 || *(_QWORD*)(GameData_21c9e28 + 112) == 0;
        if (!v10) {
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
          v59 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e28 + 88) + 8 * v12);
          if (v59 != nullptr) {
            v60 = (_QWORD*)*v59;
            if (v60 != nullptr) {
              if ((v9 & v11) == 0) {
                while (1) {
                  v62 = v60[1];
                  if (v62 == v8) {
                    if (v60[2] == v8) {
                      goto LABEL_136;
                    }
                  }
                  else if ((v62 & v11) != v12) {
                    return;
                  }
                  v60 = (_QWORD*)*v60;
                  if (v60 == nullptr) {
                    return;
                  }
                }
              }
              while (1) {
                v61 = v60[1];
                if (v61 == v8) {
                  if (v60[2] == v8) {
                  LABEL_136:
                    v63 = v60[3];
                    if (v63 != 0) {
                      v64 = *(char***)(v2 + 48);
                      v65 = *(char***)(v2 + 56);
                      while (v64 != v65) {
                        v67 = *v64;
                        v68 = *((_QWORD*)*v64 + 15);
                        if (v68 != 0) {
                          if (*(_WORD*)(v63 + 32) != 0) {
                            v69 = *(unsigned __int16*)(v63 + 32) - 1LL;
                            v70 = (__int64*)(*(_QWORD*)(v63 + 40) + 8LL);
                            do {
                              v72 = *v70;
                              v70 += 2;
                              v71 = v72;
                              v74 = v69-- != 0;
                              v10 = v71 == v68;
                              v66 = v71 != v68;
                            } while (!v10 && v74);
                          }
                          else {
                            v66 = true;
                          }
                          v67[112] = v66;
                          game_gmap_1329500((__int64)&v75_.v75, v67, 0, a1 & 1);
                        }
                        ++v64;
                      }
                    }
                    return;
                  }
                }
                else {
                  if (v61 >= v9) {
                    v61 %= v9;
                  }
                  if (v61 != v12) {
                    return;
                  }
                }
                v60 = (_QWORD*)*v60;
                if (v60 == nullptr) {
                  return;
                }
              }
            }
          }
        }
      }
      return;
    }
  }
  v75_.v76 = &GameData_1ad7ce3;
  v75_.v75 = game_HashString_alt1((__int64)&GameData_1ad7ce3);
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v75_.v75);
    if (v13 != 0 && *(_DWORD*)(v13 + 32) != 0) {
      return;
    }
  }
  v14 = game_HashString_alt1((__int64)&GameData_1a86d15);
  if (v14 == 0) {
    goto LABEL_44;
  }
  v15 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v15 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_44;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v18);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_44:
    v22 = 0;
    goto LABEL_45;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v23 = v20[1];
      if (v23 == v14) {
        if (v20[2] == v14) {
          goto LABEL_133;
        }
      }
      else if ((v23 & v17) != v18) {
        goto LABEL_44;
      }
      v20 = (_QWORD*)*v20;
      v22 = 0;
      if (v20 == nullptr) {
        goto LABEL_45;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      goto LABEL_44;
    }
  LABEL_34:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_34;
  }
LABEL_133:
  v22 = v20[3];
LABEL_45:
  v24 = (__int64*)fw_memory_g_heap_manager_ptr;
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v25 = v22;
  v26 = game_HashString_alt1((__int64)&GameData_1aad978);
  if (v26 == 0) {
    goto LABEL_69;
  }
  v27 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v27 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_69;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v26;
    if (v26 >= v27) {
      v30 = v26 % v27;
    }
  }
  else {
    v30 = v29 & v26;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_69:
    v34 = 0;
    goto LABEL_70;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v35 = v32[1];
      if (v35 == v26) {
        if (v32[2] == v26) {
          goto LABEL_134;
        }
      }
      else if ((v35 & v29) != v30) {
        goto LABEL_69;
      }
      v32 = (_QWORD*)*v32;
      v34 = 0;
      if (v32 == nullptr) {
        goto LABEL_70;
      }
    }
  }
  while (2) {
    v33 = v32[1];
    if (v33 != v26) {
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_69;
      }
    }
    else if (v32[2] == v26) {
      break;
    }
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_69;
    }
    continue;
  }
LABEL_134:
  v34 = v32[3];
LABEL_70:
  v36 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v24, 16, 16, 0);
  *v36 = *v25;
  v36[1] = v34;
  v37 = 128;
  if (*(_QWORD*)(*v24 + 200) == 0) {
    v37 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(*v24 + v37, (__int64)v25);
  v38 = game_HashString_alt1((__int64)&GameData_1aa9d24);
  if (v38 == 0) {
    goto LABEL_96;
  }
  v39 = *(_QWORD*)(GameData_21c9ef0 + 96);
  if (v39 == 0 || *(_QWORD*)(GameData_21c9ef0 + 112) == 0) {
    goto LABEL_96;
  }
  v41 = v39 - 1;
  if ((v39 & (v39 - 1)) != 0) {
    v42 = v38;
    if (v38 >= v39) {
      v42 = v38 % v39;
    }
  }
  else {
    v42 = v41 & v38;
  }
  v43 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ef0 + 88) + 8 * v42);
  if (v43 == nullptr || (v44 = (_QWORD*)*v43) == nullptr) {
  LABEL_96:
    v46 = 0;
    goto LABEL_97;
  }
  if ((v39 & v41) == 0) {
    while (1) {
      v47 = v44[1];
      if (v47 == v38) {
        if (v44[2] == v38) {
          goto LABEL_135;
        }
      }
      else if ((v47 & v41) != v42) {
        goto LABEL_96;
      }
      v44 = (_QWORD*)*v44;
      v46 = 0;
      if (v44 == nullptr) {
        goto LABEL_97;
      }
    }
  }
  while (2) {
    v45 = v44[1];
    if (v45 != v38) {
      if (v45 >= v39) {
        v45 %= v39;
      }
      if (v45 != v42) {
        goto LABEL_96;
      }
    }
    else if (v44[2] == v38) {
      break;
    }
    v44 = (_QWORD*)*v44;
    if (v44 == nullptr) {
      goto LABEL_96;
    }
    continue;
  }
LABEL_135:
  v46 = v44[3];
LABEL_97:
  v48 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v24, 32, 16, 0);
  v49 = v36[1];
  v50 = v48;
  *v48 = *v36;
  v51 = *v24;
  v48[1] = v49;
  v48[2] = v46;
  v52 = 128;
  if (*(_QWORD*)(v51 + 200) == 0) {
    v52 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(v51 + v52, (__int64)v36);
  v54 = *(__int64**)(v2 + 48);
  for (i = *(__int64**)(v2 + 56); v54 != i; ++v54) {
    v55 = *v54;
    if ((*(_BYTE*)(*v54 + 113) & 1) != 0 || (*(_BYTE*)(v55 + 114) & 1) == 0) {
      v56 = (unsigned __int8)Impl_13261c0_alt1(*v54) == 4
                ? 0LL
                : *(_QWORD*)(v55 + 136);
      if (*v50 != v56 && v50[1] != v56 && v50[2] != v56) {
        continue;
      }
    }
    v57 = *(_QWORD*)(v55 + 120);
    *(_BYTE*)(v55 + 112) = 1;
    if (v57 != 0) {
      game_gmap_1329500((__int64)&v75_.v75, (char*)v55, 0, a1 & 1);
    }
  }
  v58 = 128;
  if (*(_QWORD*)(*v24 + 200) == 0) {
    v58 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(*v24 + v58, (__int64)v50);
}

__int64 SpotMgr_1335920()
{
  __int64* v0;
  __int64 v1;
  unsigned int* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int* v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64** v36;
  __int64* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64* v71;
  char v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  __int64* v76;
  unsigned __int64 v77[2];

  v0 = GameData_212c780;
  if ((*(_BYTE*)(*(_QWORD*)(*GameData_212c780 + 8) + 208LL) & 1) == 0) {
    v77[1] = (unsigned __int64)&GameData_1ade186;
    v77[0] = game_HashString_alt1((__int64)&GameData_1ade186);
    if (game_GameModeData_instance_ != 0) {
      v1 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v77);
      if (v1 != 0 && *(int*)(v1 + 32) >= 1) {
        v2 = *(unsigned int**)TroopMgr_1345be0_alt1();
        if (v2 == nullptr) {
          goto LABEL_99;
        }
      LABEL_19:
        if (*((_QWORD*)v2 + 15) != 0 &&
            (game_GameModeData_instance_ == 0 ||
             (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) == 0)) {
          if ((unsigned __int8)Impl_13261c0_alt1((__int64)v2) != 4) {
            v14 = *((_QWORD*)v2 + 15);
            v15 = *(unsigned __int16*)(v14 + 136);
            if (*(_WORD*)(v14 + 136) == 0) {
              goto LABEL_99;
            }
            v16 = 0;
            v13 = 0;
            do {
              v17 = *(unsigned int**)(*(_QWORD*)(v14 + 144) + 16 * v16 + 8);
              if (v17 != nullptr) {
                v18 = *(_QWORD**)(*v0 + 8);
                v19 = v18[2];
                if (v19 != 0 && v18[4] != 0) {
                  v21 = *v17;
                  v22 = v19 - 1;
                  if ((v19 & (v19 - 1)) != 0) {
                    v23 = v21;
                    if (v19 <= v21) {
                      v23 = (unsigned int)v21 % (unsigned int)v19;
                    }
                  }
                  else {
                    v23 = ((_DWORD)v19 - 1) & (unsigned int)v21;
                  }
                  v24 = *(__int64***)(v18[1] + 8 * v23);
                  if (v24 != nullptr) {
                    v25 = *v24;
                    if (v25 != nullptr) {
                      if ((v19 & v22) == 0) {
                        while (1) {
                          v27 = v25[1];
                          if (v27 == v21) {
                            if (*((_DWORD*)v25 + 4) == (_DWORD)v21) {
                              goto LABEL_59;
                            }
                          }
                          else if ((v27 & v22) != v23) {
                            goto LABEL_33;
                          }
                          v25 = (__int64*)*v25;
                          if (v25 == nullptr) {
                            goto LABEL_33;
                          }
                        }
                      }
                      do {
                        v26 = v25[1];
                        if (v26 == v21) {
                          if (*((_DWORD*)v25 + 4) == (_DWORD)v21) {
                          LABEL_59:
                            v28 = v25[3];
                            if (v28 != 0 && *(_BYTE*)(v28 + 176) == 1 &&
                                (*(_BYTE*)(v28 + 112) & 1) == 0) {
                              GameRoutine_1326c00(v25[3], 3);
                              v13 = 1;
                              if (*(_QWORD*)(v28 + 120) != 0) {
                                game_gmap_1329500((__int64)v77, (char*)v28, 1,
                                                  1);
                              }
                            }
                            break;
                          }
                        }
                        else {
                          if (v26 >= v19) {
                            v26 %= v19;
                          }
                          if (v26 != v23) {
                            break;
                          }
                        }
                        v25 = (__int64*)*v25;
                      } while (v25 != nullptr);
                    }
                  }
                }
              }
            LABEL_33:
              ++v16;
            } while (v16 != v15);
          LABEL_97:
            if ((v13 & 1) != 0) {
              return 1;
            }
            goto LABEL_99;
          }
          if ((unsigned __int8)Impl_13261c0_alt1((__int64)v2) != 4 ||
              (*((_BYTE*)v2 + 178) & 2) != 0) {
            v10 = Impl_1326420((__int64)v2);
            if (v10 != 0) {
              v11 = *(unsigned __int16*)(v10 + 32);
              if (*(_WORD*)(v10 + 32) != 0) {
                v12 = 0;
                v13 = 0;
                do {
                  v29 = *(unsigned int**)(*(_QWORD*)(v10 + 40) + 16 * v12 + 8);
                  if (v29 != nullptr) {
                    v30 = *(_QWORD**)(*v0 + 8);
                    v31 = v30[2];
                    if (v31 != 0 && v30[4] != 0) {
                      v33 = *v29;
                      v34 = v31 - 1;
                      if ((v31 & (v31 - 1)) != 0) {
                        v35 = v33;
                        if (v31 <= v33) {
                          v35 = (unsigned int)v33 % (unsigned int)v31;
                        }
                      }
                      else {
                        v35 = ((_DWORD)v31 - 1) & (unsigned int)v33;
                      }
                      v36 = *(__int64***)(v30[1] + 8 * v35);
                      if (v36 != nullptr) {
                        v37 = *v36;
                        if (v37 != nullptr) {
                          if ((v31 & v34) == 0) {
                            while (1) {
                              v39 = v37[1];
                              if (v39 == v33) {
                                if (*((_DWORD*)v37 + 4) == (_DWORD)v33) {
                                  goto LABEL_92;
                                }
                              }
                              else if ((v39 & v34) != v35) {
                                goto LABEL_66;
                              }
                              v37 = (__int64*)*v37;
                              if (v37 == nullptr) {
                                goto LABEL_66;
                              }
                            }
                          }
                          do {
                            v38 = v37[1];
                            if (v38 == v33) {
                              if (*((_DWORD*)v37 + 4) == (_DWORD)v33) {
                              LABEL_92:
                                v40 = v37[3];
                                if (v40 != 0 && *(_BYTE*)(v40 + 176) == 1 &&
                                    (*(_BYTE*)(v40 + 112) & 1) == 0) {
                                  v41 = v10;
                                  GameRoutine_1326c00(v37[3], 3);
                                  v13 = 1;
                                  if (*(_QWORD*)(v40 + 120) != 0) {
                                    game_gmap_1329500((__int64)v77, (char*)v40,
                                                      1, 1);
                                  }
                                  v10 = v41;
                                }
                                break;
                              }
                            }
                            else {
                              if (v38 >= v31) {
                                v38 %= v31;
                              }
                              if (v38 != v35) {
                                break;
                              }
                            }
                            v37 = (__int64*)*v37;
                          } while (v37 != nullptr);
                        }
                      }
                    }
                  }
                LABEL_66:
                  ++v12;
                } while (v12 != v11);
                goto LABEL_97;
              }
            }
          }
        }
      LABEL_99:
        v43 = *(_QWORD*)(*v0 + 8);
        v45 = *(__int64**)(v43 + 72);
        v44 = *(__int64**)(v43 + 80);
        if (v45 != v44) {
          v76 = *(__int64**)(v43 + 80);
          while (1) {
            v46 = *v45;
            if (*(_BYTE*)(*v45 + 176) == 3 && (*(_BYTE*)(v46 + 112) & 1) == 0) {
              v47 = *(_QWORD*)(v46 + 120);
              if (v47 != 0 && *(_WORD*)(v47 + 184) != 0) {
                v48 = 8;
                v49 = 0;
                v50 = nullptr;
                v51 = 0;
                v52 = 0;
                do {
                  v53 = *(_QWORD*)(*(_QWORD*)(v47 + 192) + v48);
                  if ((unsigned __int64)v50 < v49) {
                    *(_QWORD*)v50 = v53;
                    v50 += 8;
                  }
                  else {
                    v54 = &v50[-v52];
                    v55 = (__int64)&v50[-v52] >> 3;
                    v56 = v55 + 1;
                    if ((unsigned __int64)(v55 + 1) >> 61 != 0) {
                      GameRoutine_892740_alt1();
                    }
                    if ((__int64)(v49 - v52) >> 2 > v56) {
                      v56 = (__int64)(v49 - v52) >> 2;
                    }
                    if (v49 - v52 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v57 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v57 = v56;
                    }
                    if (v57 != 0) {
                      if (v57 >> 61 != 0) {
                        GameRoutine_60a210_alt2();
                      }
                      v58 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16,
                          0);
                    }
                    else {
                      v58 = 0;
                    }
                    v49 = v58 + 8 * v57;
                    v59 = (unsigned __int64)&v50[-v52];
                    v60 = (__int64)&v54[v58 + -8 * v55];
                    *(_QWORD*)&v54[v58] = v53;
                    v50 = &v54[v58 + 8];
                    memcpy_alt1(v60, v52, v59);
                    if (v52 != 0) {
                      v61 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v61 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt4(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v52);
                    }
                    v52 = v60;
                  }
                  ++v51;
                  v48 += 16;
                } while (v51 < *(unsigned __int16*)(v47 + 184));
                if (v50 == (char*)v52) {
                LABEL_144:
                  v72 = 0;
                }
                else {
                  v62 = 0;
                  v63 = game_GameModeData_instance_;
                  v64 = GameData_212c780;
                  while (1) {
                    if (v63 != 0) {
                      v66 = game_GameVariableTable_Find_alt1(
                          *(_QWORD**)(v63 + 48),
                          (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)(v47 + 24) +
                                                         72LL) +
                                              16LL * (int)v62));
                      v63 = game_GameModeData_instance_;
                      if (v66 != 0 && *(_DWORD*)(v66 + 32) != 0) {
                        v67 = *(_QWORD*)(*v64 + 8);
                        v68 = **(unsigned int**)(v52 + 8 * v62);
                        v69 = *(_QWORD*)(v67 + 16);
                        if ((v69 & (v69 - 1)) != 0) {
                          v70 = **(unsigned int**)(v52 + 8 * v62);
                          if (v69 <= v68) {
                            v70 = (unsigned int)v68 % (unsigned int)v69;
                          }
                          v71 = *(__int64**)(*(_QWORD*)(v67 + 8) + 8 * v70);
                          do {
                            do {
                              v71 = (__int64*)*v71;
                            } while (v71[1] != v68);
                          } while (*((_DWORD*)v71 + 4) != (_DWORD)v68);
                        }
                        else {
                          v71 = *(__int64**)(*(_QWORD*)(v67 + 8) +
                                             8LL * (((_DWORD)v69 - 1) &
                                                    (unsigned int)v68));
                          do {
                            do {
                              v71 = (__int64*)*v71;
                            } while (v71[1] != v68);
                          } while (*((_DWORD*)v71 + 4) != (_DWORD)v68);
                        }
                        v65 = v71[3];
                        if (*(_BYTE*)(v65 + 176) == 1) {
                          break;
                        }
                      }
                    }
                    if (++v62 == (__int64)&v50[-v52] >> 3) {
                      goto LABEL_144;
                    }
                  }
                  v74 = *(_QWORD*)(v65 + 120);
                  if (v74 != 0) {
                    if ((*(_WORD*)(v74 + 258) & 0x80) == 0) {
                      *(_BYTE*)(v65 + 176) = 3;
                      v75 = GameRoutine_ae07e0_alt2(v74);
                      if (*v75 != 0) {
                        game_VariableManager_SetFlag_alt2((__int64)v75, 1);
                      }
                    }
                    v72 = 1;
                    if (*(_QWORD*)(v65 + 120) != 0) {
                      game_gmap_1329500((__int64)v77, (char*)v65, 1, 0);
                    }
                  }
                  else {
                    v72 = 1;
                    *(_BYTE*)(v65 + 176) = 3;
                  }
                }
                if (v52 != 0) {
                  v73 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v73 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt4(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v52);
                  v44 = v76;
                  if ((v72 & 1) != 0) {
                    return 1;
                  }
                }
                else {
                  v44 = v76;
                  if ((v72 & 1) != 0) {
                    return 1;
                  }
                }
              }
            }
            if (++v45 == v44) {
              return 0;
            }
          }
        }
        return 0;
      }
    }
    v3 = *(_QWORD*)(*GameData_212c790 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64**)(v3 + 8);
    v6 = *(__int64**)(v3 + 16);
    if (v4 < 0) {
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
            break;
          }
          if (++v5 == v6) {
            goto LABEL_13;
          }
        }
      LABEL_18:
        v2 = *(unsigned int**)v7;
        if (*(_QWORD*)v7 == 0) {
          goto LABEL_99;
        }
        goto LABEL_19;
      }
    }
    else {
      while (v5 != v6) {
        v8 = *v5++;
        v7 = v8;
        if (*(_DWORD*)(v8 + 84) == v4) {
          goto LABEL_18;
        }
      }
    }
  LABEL_13:
    v2 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
    if (v2 == nullptr) {
      goto LABEL_99;
    }
    goto LABEL_19;
  }
  return 0;
}

__int64 game_gmap_SpotMgr_GetAroundSpot(char a1)
{

#pragma clang fp contract(off)
  unsigned int* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  float v16;
  float v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  struct {
    __int64* v26;
    __int64* v27;
    __int64* v28;
  } v26_;

  v2 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v26_.v26 = v4;
  *v4 = (__int64)v2;
  v26_.v27 = v4 + 1;
  v26_.v28 = v4 + 1;
  v24_.v24[0] = GameData_202bf68;
  v24_.v24[1] = &v26_.v26;
  v24_.v25 = v24_.v24;
  TroopMgr_13460a0_alt1((__int64)v24_.v24);
  if (v24_.v25 == v24_.v24) {
    v5 = 32;
  }
  else {
    if (v24_.v25 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v24_.v25 + v5))((__int64)v24_.v25);
LABEL_6:
  v6 = v26_.v26;
  v7 = v26_.v27;
  if ((char*)v26_.v27 - (char*)v26_.v26 == 8) {
    v8 = *v26_.v26;
    if (v26_.v26 != nullptr) {
      goto LABEL_43;
    }
    return v8;
  }
  if (v26_.v26 != v26_.v27) {
    SpotMgr_1338da0((__int64)v26_.v26, v26_.v27,
                    (2 * __clz(v26_.v27 - v26_.v26)) ^ 0x7E, 1);
    v6 = v26_.v26;
    v7 = v26_.v27;
  }
  v9 = *(_QWORD*)(GameData_21f1658 + 16);
  v10 = *(_QWORD*)(v9 + 96);
  if (v10 == 0 || v7 == v6) {
  LABEL_16:
    if (v7 == v6) {
    LABEL_23:
      v18 = v7 - 1;
      if ((a1 & 1) != 0) {
        v18 = v6;
      }
      v8 = *v18;
      if (v6 != nullptr) {
        goto LABEL_43;
      }
      return v8;
    }
    v14 = 0;
    v15 = v6;
    v16 = *(float*)(v9 + 88);
    while (1) {
      v8 = *v15;
      v17 = *(float*)(*v15 + 40);
      if ((float)((float)(v16 - v17) * (float)(v16 - v17)) >
          0x1.9000000000000p+6f) {
        v16 = *(float*)(v9 + 88);
        if (v16 < v17) {
          if ((a1 & 1) != 0) {
            goto LABEL_43;
          }
          if (v14 != 0) {
            v7 = v15;
          }
          v8 = *(v7 - 1);
          if (v6 != nullptr) {
            goto LABEL_43;
          }
          return v8;
        }
      }
      else {
        if (COERCE_FLOAT(*(_OWORD*)(v9 + 80)) <= *(float*)(v8 + 32)) {
          if ((a1 & 1) == 0) {
            if (v14 != 0) {
              v7 = v15;
            }
            v8 = *(v7 - 1);
          }
          goto LABEL_43;
        }
        LODWORD(v16) = *(_QWORD*)(v9 + 88);
      }
      ++v14;
      ++v15;
      if (v7 - v6 == v14) {
        goto LABEL_23;
      }
    }
  }
  v11 = v7 - v6;
  v12 = 0;
  v13 = v6;
  while (*v13 != v10) {
    ++v12;
    ++v13;
    if (v11 == v12) {
      goto LABEL_16;
    }
  }
  if (v12 != 0) {
    v7 = v13;
  }
  v19 = v7 - 1;
  if (v11 - 1 == v12) {
    v20 = v6;
  }
  else {
    v20 = v13 + 1;
  }
  if ((a1 & 1) != 0) {
    v19 = v20;
  }
  v8 = *v19;
LABEL_43:
  v21 = *v3;
  v26_.v27 = v6;
  v22 = 128;
  if (*(_QWORD*)(v21 + 200) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(v21 + v22, (__int64)v6);
  return v8;
}

void SpotMgr_1336300()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned int* v36;
  _QWORD* v37;
  unsigned __int64 v38;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64** v43;
  __int64* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58[2];

  v0 = *(_QWORD*)(*GameData_212cac8[0] + 64);
  v1 = *(_QWORD*)(*GameData_212cac8[0] + 72);
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v0 == v1) {
    v4 = nullptr;
    v3 = 0;
    goto LABEL_4;
  }
  v3 = 0;
  v4 = nullptr;
  v5 = 0;
  v6 = GameData_212ca10[0];
  v7 = GameData_212c780;
  while (2) {
    v25 = *(_QWORD*)(*(_QWORD*)v0 + 8LL);
    if (v25 != 0) {
      v26 = strchr_alt1(*(const char**)(*(_QWORD*)v0 + 8LL), 95);
      if (v26 != 0) {
        v25 = v26 + 1;
      }
    }
    v27 = game_HashString_alt1(v25);
    if (v27 == 0) {
      goto LABEL_21;
    }
    v28 = *(_QWORD*)(*v6 + 96);
    if (v28 == 0 || *(_QWORD*)(*v6 + 112) == 0) {
      goto LABEL_21;
    }
    v30 = v28 - 1;
    if ((v28 & (v28 - 1)) != 0) {
      v31 = v27;
      if (v27 >= v28) {
        v31 = v27 % v28;
      }
    }
    else {
      v31 = v30 & v27;
    }
    v32 = *(_QWORD**)(*(_QWORD*)(*v6 + 88) + 8 * v31);
    if (v32 == nullptr) {
      goto LABEL_21;
    }
    v33 = (_QWORD*)*v32;
    if (v33 == nullptr) {
      goto LABEL_21;
    }
    if ((v28 & v30) == 0) {
      while (1) {
        v35 = v33[1];
        if (v35 == v27) {
          if (v33[2] == v27) {
            goto LABEL_50;
          }
        }
        else if ((v35 & v30) != v31) {
          goto LABEL_21;
        }
        v33 = (_QWORD*)*v33;
        if (v33 == nullptr) {
          goto LABEL_21;
        }
      }
    }
    while (1) {
      v34 = v33[1];
      if (v34 == v27) {
        break;
      }
      if (v34 >= v28) {
        v34 %= v28;
      }
      if (v34 != v31) {
        goto LABEL_21;
      }
    LABEL_39:
      v33 = (_QWORD*)*v33;
      if (v33 == nullptr) {
        goto LABEL_21;
      }
    }
    if (v33[2] != v27) {
      goto LABEL_39;
    }
  LABEL_50:
    v36 = (unsigned int*)v33[3];
    if (v36 != nullptr) {
      v37 = *(_QWORD**)(*v7 + 8);
      v38 = v37[2];
      if (v38 != 0 && v37[4] != 0) {
        v40 = *v36;
        v41 = v38 - 1;
        if ((v38 & (v38 - 1)) != 0) {
          v42 = v40;
          if (v38 <= v40) {
            v42 = (unsigned int)v40 % (unsigned int)v38;
          }
        }
        else {
          v42 = ((_DWORD)v38 - 1) & (unsigned int)v40;
        }
        v43 = *(__int64***)(v37[1] + 8 * v42);
        if (v43 != nullptr) {
          v44 = *v43;
          if (v44 != nullptr) {
            if ((v38 & v41) == 0) {
              while (1) {
                v46 = v44[1];
                if (v46 == v40) {
                  if (*((_DWORD*)v44 + 4) == (_DWORD)v40) {
                    goto LABEL_75;
                  }
                }
                else if ((v46 & v41) != v42) {
                  goto LABEL_21;
                }
                v44 = (__int64*)*v44;
                if (v44 == nullptr) {
                  goto LABEL_21;
                }
              }
            }
            do {
              v45 = v44[1];
              if (v45 == v40) {
                if (*((_DWORD*)v44 + 4) == (_DWORD)v40) {
                LABEL_75:
                  v47 = v44[3];
                  if (v47 != 0) {
                    *(_BYTE*)(v47 + 116) = 0;
                    if ((unsigned __int64)v4 < v5) {
                      *v4++ = v47;
                    }
                    else {
                      v48 = (__int64)v4 - v3;
                      v49 = v48 >> 3;
                      v50 = (v48 >> 3) + 1;
                      if (v50 >> 61 != 0) {
                        GameRoutine_8875e0_alt1();
                      }
                      if ((__int64)(v5 - v3) >> 2 > v50) {
                        v50 = (__int64)(v5 - v3) >> 2;
                      }
                      if (v5 - v3 >= 0x7FFFFFFFFFFFFFF8LL) {
                        v51 = 0x1FFFFFFFFFFFFFFFLL;
                      }
                      else {
                        v51 = v50;
                      }
                      if (v51 != 0) {
                        if (v51 >> 61 != 0) {
                          GameRoutine_60a210_alt2();
                        }
                        v52 = fw_memory_HeapManager_Allocate_alt1(*v2, 8 * v51,
                                                                  16, 0);
                        v49 = v48 >> 3;
                      }
                      else {
                        v52 = 0;
                      }
                      v53 = v48;
                      v54 = (_QWORD*)(v52 + v48);
                      v5 = v52 + 8 * v51;
                      v55 = (__int64)&v54[-v49];
                      *v54 = v47;
                      v4 = v54 + 1;
                      v56 = v55;
                      memcpy_alt1(v55, v3, v53);
                      if (v3 != 0) {
                        v57 = 128;
                        if (*(_QWORD*)(*v2 + 200) == 0) {
                          v57 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt4(*v2 + v57, v3);
                      }
                      v3 = v56;
                    }
                  }
                  break;
                }
              }
              else {
                if (v45 >= v38) {
                  v45 %= v38;
                }
                if (v45 != v42) {
                  break;
                }
              }
              v44 = (__int64*)*v44;
            } while (v44 != nullptr);
          }
        }
      }
    }
  LABEL_21:
    v0 += 8;
    if (v0 != v1) {
      continue;
    }
    break;
  }
LABEL_4:
  v8 = (unsigned __int64)v4 - v3;
  v9 = ((__int64)v4 - v3) >> 3;
  if ((int)v9 >= 1) {
    v10 = (v8 >> 3) & 0x7FFFFFFF;
    v11 = (__int64*)v3;
    v12 = game_map_MapRandom_instance__ptr[0];
    do {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v13 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8);
      v14 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12);
      v15 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) ^
            (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) << 11);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12) =
          *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4);
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 4) = v13;
      v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 8) = v14;
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v12 + 12) = v16;
      v17 = v16 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v18 = *v11;
      --v10;
      *v11++ = *(_QWORD*)(v3 + 8LL * (v17 % (unsigned int)v9));
      *(_QWORD*)(v3 + 8LL * (v17 % (unsigned int)v9)) = v18;
    } while (v10 != 0);
  }
  v19 = 0;
  while (2) {
    v58[1] = (unsigned __int64)&GameData_1a8eaf7;
    v20 = game_HashString_alt1((__int64)&GameData_1a8eaf7);
    v21 = game_GameModeData_instance_;
    v58[0] = v20;
    if (game_GameModeData_instance_ == 0) {
    LABEL_11:
      if (v19 >= v21) {
        break;
      }
      goto LABEL_12;
    }
    v22 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v58);
    if (v22 != 0) {
      v21 = *(int*)(v22 + 32);
      goto LABEL_11;
    }
    if (v19 < 0) {
    LABEL_12:
      v23 = *(_QWORD*)(v3 + 8 * v19++);
      *(_BYTE*)(v23 + 116) = 1;
      if (v9 == v19) {
        goto LABEL_16;
      }
      continue;
    }
    break;
  }
  if (v3 == 0) {
    return;
  }
LABEL_16:
  v24 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(*v2 + v24, v3);
}

void SpotMgr_1336ec0()
{
  _QWORD* v0;
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  __int64 v14;

  v0 = v12_.v12;
  v12_.v12[0] = GameData_202c4e8;
  v12_.v13 = v12_.v12;
  v1 = GameData_212c780;
  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(__int64**)(v2 + 48);
  v4 = *(__int64**)(v2 + 56);
  if (v3 == v4) {
    goto LABEL_14;
  }
  do {
    v5 = *v3;
    v6 = *(_QWORD*)(*v3 + 280);
    if (v6 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 112LL))(
              *(_QWORD*)(v5 + 280)) &
          1) == 0) &&
        *(_QWORD*)(v5 + 280) != 0) {
      v14 = v5;
      if (v12_.v13 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v12_.v13 + 48LL))(v12_.v13, &v14);
    }
    ++v3;
  } while (v3 != v4);
  v0 = v12_.v13;
  if (v12_.v13 == v12_.v12) {
  LABEL_14:
    v7 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(_QWORD*))(*v0 + v7))(v0);
LABEL_16:
  v8 = *(_QWORD*)(*v1 + 8);
  v9 = *(__int64**)(v8 + 48);
  v10 = *(__int64**)(v8 + 56);
  if (v9 != v10) {
    do {
      v11 = *v9++;
      GameRoutine_1328d60_alt2(v11);
    } while (v9 != v10);
    v8 = *(_QWORD*)(*v1 + 8);
  }
  SpotMgr_1334560_alt1(v8);
}

__int64 SpotMgr_1337000()
{
  __int64 v0;
  __int64** v1;
  __int64** i;
  __int64* v3;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c9700 + 8);
  v1 = *(__int64***)(v0 + 48);
  for (i = *(__int64***)(v0 + 56); v1 != i;
       result = GameHr_14a1390(v3 + 33, 1)) {
    v3 = *v1++;
    GameHr_14a1390(v3 + 23, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 25, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 27, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 29, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    GameHr_14a1390(v3 + 31, 1),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return result;
}

void SpotMgr_13370c0()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned int* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64** v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;

  v0 = *(_QWORD*)(*GameData_212ca70[0] + 64);
  v1 = *(_QWORD*)(*GameData_212ca70[0] + 72);
  if (v0 == v1) {
    return;
  }
  v2 = GameData_212ca10[0];
  v3 = GameData_212c780;
  while (2) {
    v4 = *(_QWORD*)(*(_QWORD*)v0 + 8LL);
    if (v4 != 0) {
      v5 = strchr(*(_QWORD*)(*(_QWORD*)v0 + 8LL), 95);
      if (v5 != 0) {
        v4 = v5 + 1;
      }
    }
    v6 = game_HashString(v4);
    if (v6 == 0) {
      goto LABEL_3;
    }
    v7 = *(_QWORD*)(*v2 + 96);
    if (v7 == 0 || *(_QWORD*)(*v2 + 112) == 0) {
      goto LABEL_3;
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
    v11 = *(_QWORD**)(*(_QWORD*)(*v2 + 88) + 8 * v10);
    if (v11 == nullptr) {
      goto LABEL_3;
    }
    v12 = (_QWORD*)*v11;
    if (v12 == nullptr) {
      goto LABEL_3;
    }
    if ((v7 & v9) == 0) {
      while (1) {
        v14 = v12[1];
        if (v14 == v6) {
          if (v12[2] == v6) {
            goto LABEL_32;
          }
        }
        else if ((v14 & v9) != v10) {
          goto LABEL_3;
        }
        v12 = (_QWORD*)*v12;
        if (v12 == nullptr) {
          goto LABEL_3;
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
        goto LABEL_3;
      }
    LABEL_21:
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_3;
      }
    }
    if (v12[2] != v6) {
      goto LABEL_21;
    }
  LABEL_32:
    v15 = (unsigned int*)v12[3];
    if (v15 != nullptr) {
      v16 = *(_QWORD**)(*v3 + 8);
      v17 = v16[2];
      if (v17 != 0 && v16[4] != 0) {
        v19 = *v15;
        v20 = v17 - 1;
        if ((v17 & (v17 - 1)) != 0) {
          v21 = v19;
          if (v17 <= v19) {
            v21 = (unsigned int)v19 % (unsigned int)v17;
          }
        }
        else {
          v21 = ((_DWORD)v17 - 1) & (unsigned int)v19;
        }
        v22 = *(__int64***)(v16[1] + 8 * v21);
        if (v22 != nullptr) {
          v23 = *v22;
          if (v23 != nullptr) {
            if ((v17 & v20) == 0) {
              while (1) {
                v25 = v23[1];
                if (v25 == v19) {
                  if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
                    goto LABEL_57;
                  }
                }
                else if ((v25 & v20) != v21) {
                  goto LABEL_3;
                }
                v23 = (__int64*)*v23;
                if (v23 == nullptr) {
                  goto LABEL_3;
                }
              }
            }
            do {
              v24 = v23[1];
              if (v24 == v19) {
                if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
                LABEL_57:
                  v26 = v23[3];
                  if (v26 != 0) {
                    *(_BYTE*)(v26 + 178) |= 4u;
                  }
                  break;
                }
              }
              else {
                if (v24 >= v17) {
                  v24 %= v17;
                }
                if (v24 != v21) {
                  break;
                }
              }
              v23 = (__int64*)*v23;
            } while (v23 != nullptr);
          }
        }
      }
    }
  LABEL_3:
    v0 += 8;
    if (v0 != v1) {
      continue;
    }
    break;
  }
}

void SpotMgr_13381e0(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = a1[6];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(v4 + v5, v1);
  }
  v6 = a1[3];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[4] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(v7 + v8, v6);
  }
  v9 = *a1;
  if (*a1 != 0) {
    v10 = a1[1];
    if (v9 == v10) {
      goto LABEL_20;
    }
    v11 = a1[1];
    do {
      v12 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v12 & 1) != 0) {
        v13 = *(_QWORD*)(v10 - 8);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v3 + v14, v13);
        }
      }
      v10 = v11;
    } while (v11 != v9);
    v15 = *a1;
    a1[1] = v9;
    v9 = v15;
    if (v15 != 0) {
    LABEL_20:
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v3 + v16, v9);
    }
  }
}

void SpotMgr_1338320(__int64 a1, unsigned int* a2, int* a3, _QWORD* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  int v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 primeEm;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = (unsigned int)v5 % (unsigned int)v6;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
    v11 = *(__int64***)(*(_QWORD*)a1 + 8 * v4);
    if (v11 != nullptr) {
      v12 = *v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (*((_DWORD*)v12 + 4) == (_DWORD)v5) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (__int64*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v5) {
            if (*((_DWORD*)v12 + 4) == (_DWORD)v5) {
              return;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (__int64*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v17 = *a3;
  v18 = *(float*)(a1 + 32);
  v19 = v16;
  *(_QWORD*)v16 = 0;
  *(_QWORD*)(v16 + 8) = v5;
  *(_DWORD*)(v16 + 16) = v17;
  *(_QWORD*)(v16 + 24) = *a4;
  v20 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v18 * (float)v6) < v20) {
    v21 = v20 / v18;
    v22 = true;
    if (v6 >= 3) {
      v22 = (v6 & (v6 - 1)) != 0;
    }
    v23 = v22 | (2 * v6);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    if (v25 == 1) {
      v25 = 2;
    }
    else if ((v25 & (v25 - 1)) != 0) {
      primeEm = std___1___next_prime_alt1(v25);
      v6 = *(_QWORD*)(a1 + 8);
      v25 = primeEm;
    }
    if (v25 <= v6) {
      if (v25 >= v6) {
        goto LABEL_83;
      }
      v32 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v32 = std___1___next_prime_alt1(v32);
      }
      else {
        v33 = 1LL << (-(char)__clz(v32 - 1) & 63);
        if (v32 >= 2) {
          v32 = v33;
        }
      }
      if (v25 <= v32) {
        v25 = v32;
      }
      if (v25 >= v6) {
        goto LABEL_83;
      }
      if (v25 == 0) {
        v45 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v45 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(*v15 + v46, v45);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (v25 >> 61 != 0) {
      GameRoutine_60a210_alt2();
    }
    v27 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * v25, 16, 0);
    v28 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v27;
    if (v28 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*v15 + v29, v28);
    }
    v30 = v25 & 7;
    *(_QWORD*)(a1 + 8) = v25;
    if (v25 >= 8) {
      v31 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v31 + 48) = 0;
        v34 = *(_QWORD*)a1 + 8 * v31;
        v31 += 8;
        *(_QWORD*)(v34 + 56) = 0;
      } while ((v25 & 0x1FFFFFFFFFFFFFF8LL) != v31);
    }
    else {
      v31 = 0;
    }
    if ((v25 & 7) != 0) {
      v35 = 8 * v31;
      do {
        --v30;
        *(_QWORD*)(*(_QWORD*)a1 + v35) = 0;
        v35 += 8;
      } while (v30 != 0);
    }
    v37 = a1 + 16;
    v36 = *(_QWORD**)(a1 + 16);
    if (v36 != nullptr) {
      v38 = v36[1];
      v39 = v25 - 1;
      if ((v25 & (v25 - 1)) != 0) {
        if (v38 >= v25) {
          v38 %= v25;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v38) = v37;
        v40 = (_QWORD*)*v36;
        if (*v36 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v41 = v40[1];
          if (v41 >= v25) {
            v41 %= v25;
          }
          if (v41 != v38) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v41) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
              goto LABEL_60;
            }
            *v36 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v41);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v41) = v40;
            v40 = v36;
          }
          v41 = v38;
        LABEL_60:
          v36 = v40;
          v40 = (_QWORD*)*v40;
          v38 = v41;
          if (v40 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v42 = v38 & v39;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v42) = v37;
      while (1) {
        v43 = (_QWORD*)*v36;
        if (*v36 == 0) {
          break;
        }
        v44 = v43[1] & v39;
        if (v44 == v42) {
          v36 = (_QWORD*)*v36;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v44) != 0) {
          *v36 = *v43;
          *v43 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v44);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v44) = v43;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v36;
          v36 = v43;
          v42 = v44;
        }
      }
    }
  LABEL_83:
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = ((_DWORD)v6 - 1) & (unsigned int)v5;
    }
  }
  v47 = *(_QWORD*)a1;
  v48 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v48 != nullptr) {
    *(_QWORD*)v19 = *v48;
    *v48 = v19;
  }
  else {
    v49 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v19;
    *(_QWORD*)v19 = v49;
    *(_QWORD*)(v47 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)v19 != 0) {
      v50 = *(_QWORD*)(*(_QWORD*)v19 + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v50 >= v6) {
          v50 %= v6;
        }
      }
      else {
        v50 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v50) = v19;
    }
  }
  ++*(_QWORD*)(a1 + 24);
}

__int64 SpotMgr_13388c0(__int64* a1, __int64 a2, __int64* a3, __int64* a4,
                        __int64 a5)
{
  __int64 v6;
  unsigned __int64 v7;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  char* v18;
  char* j;
  __int64 v20;
  char* v21;
  __int64* v22;
  char* k;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  _QWORD* i;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;

  if (a5 < 1) {
    return a2;
  }
  v7 = a1[1];
  v6 = a1[2];
  v9 = a3;
  if (a5 <= (__int64)(v6 - v7) >> 3) {
    v15 = v7 - a2;
    v16 = (__int64)(v7 - a2) >> 3;
    if (a5 <= v16) {
      v27 = a2 + 8 * a5;
      v28 = (__int64*)(v7 - 8 * a5);
      for (i = (_QWORD*)a1[1]; (unsigned __int64)v28 < v7; ++i) {
        v30 = *v28++;
        *i = v30;
      }
      a1[1] = (__int64)i;
      if (v7 != v27) {
        memmove_alt1(a2 + 8 * a5, a2, v7 - v27);
      }
      v31 = 8 * a5 - 8;
      if ((~(_BYTE)v31 & 0x38) != 0) {
        v35 = -(__int64)(((unsigned __int8)((unsigned int)v31 >> 3) + 1) & 7);
        v32 = (_QWORD*)a2;
        do {
          v36 = *v9++;
          v37 = __CFADD__(v35++, 1);
          *v32++ = v36;
        } while (!v37);
      }
      else {
        v32 = (_QWORD*)a2;
      }
      if (v31 >= 0x38) {
        do {
          *v32 = *v9;
          v32[1] = v9[1];
          v32[2] = v9[2];
          v32[3] = v9[3];
          v32[4] = v9[4];
          v32[5] = v9[5];
          v32[6] = v9[6];
          v38 = v9[7];
          v9 += 8;
          v32[7] = v38;
          v32 += 8;
        } while (v32 != (_QWORD*)(a2 + 8 * a5));
      }
    }
    else {
      v17 = (__int64*)((char*)a3 + v15);
      v18 = (char*)a1[1];
      for (j = v18; v17 != a4; j += 8) {
        v20 = *v17++;
        v18 += 8;
        *(_QWORD*)j = v20;
      }
      a1[1] = (__int64)v18;
      if (v16 >= 1) {
        v21 = (char*)(a2 + 8 * a5);
        v22 = (__int64*)&v18[-8 * a5];
        for (k = v18; (unsigned __int64)v22 < v7; k += 8) {
          v24 = *v22++;
          *(_QWORD*)k = v24;
        }
        a1[1] = (__int64)k;
        if (j != v21) {
          memmove_alt1(a2 + 8 * a5, a2, v18 - v21);
        }
        v25 = (_QWORD*)a2;
        do {
          v26 = *v9++;
          v15 -= 8LL;
          *v25++ = v26;
        } while (v15 != 0);
      }
    }
    return a2;
  }
  v10 = *a1;
  v11 = a5 + ((__int64)(v7 - *a1) >> 3);
  if (v11 >> 61 != 0) {
    GameRoutine_8875e0_alt1();
  }
  v12 = v6 - v10;
  if (v12 >> 2 > v11) {
    v11 = v12 >> 2;
  }
  if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
    v13 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v13 = v11;
  }
  if (v13 != 0) {
    if (v13 >> 61 != 0) {
      GameRoutine_60a210_alt2();
    }
    v14 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 8 * v13,
                                              16, 0);
  }
  else {
    v14 = 0;
  }
  memcpy_alt1(v14 + a2 - v10, (__int64)v9, 8 * a5);
  memcpy_alt1(v14 + a2 - v10 + 8 * a5, a2, v7 - a2);
  a1[1] = a2;
  memcpy_alt1(v14, v10, a2 - v10);
  *a1 = v14;
  a1[1] = v14 - v10 + 8 * a5 + v7;
  a1[2] = v14 + 8 * v13;
  if (v10 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v10);
  }
  return v14 + a2 - v10;
}

__int64 SpotMgr_1338da0(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  float v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  bool v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  _BOOL4 v26;
  __int64 v27;
  float v28;
  float v29;
  _BOOL4 v30;
  __int64 v31;
  float v32;
  float v33;
  _BOOL4 v34;
  __int64 v35;
  float v36;
  float v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  __int64 v45;
  float v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  _BOOL4 v52;
  __int64 v53;
  float v54;
  float v55;
  _BOOL4 v56;
  __int64 v57;
  float v58;
  float v59;
  _BOOL4 v60;
  __int64 v61;
  __int64 v62;
  float v63;
  float v64;
  float v65;
  bool v66;
  __int64 v67;
  float v68;
  _BOOL4 v69;
  __int64 v70;
  __int64 v71;
  float v72;
  float v73;
  _BOOL4 v74;
  __int64 v75;
  float v76;
  float v77;
  _BOOL4 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float v82;
  float v83;
  bool v84;
  __int64 v85;
  float v86;
  _BOOL4 v87;
  float v88;
  float v89;
  _BOOL4 v90;
  float v91;
  float v92;
  _BOOL4 v93;
  __int64 v94;
  __int64 v95;
  float v96;
  __int128 v97;
  __int64 v98;
  float v99;
  float v100;
  bool v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  float v105;
  bool v106;
  __int64* v107;
  __int64* v108;
  __int64 v109;
  float v110;
  _BOOL4 v111;
  __int64 v112;
  float v113;
  bool v114;
  __int64 v115;
  __int64* v116;
  __int64* v117;
  float v118;
  __int128 v119;
  __int64 v120;
  float v121;
  bool v122;
  __int64 v123;
  float v124;
  _BOOL4 v125;
  __int64* v126;
  char v127;
  char v128;
  __int64 v129;
  float v130;
  bool v131;
  __int64 v132;
  float v133;
  bool v134;
  __int64* v135;
  float v136;
  _BOOL4 v137;
  __int64* v138;
  __int64 v139;
  float v140;
  bool v141;
  __int64 v142;
  __int64 v143;
  float v144;
  __int128 v145;
  __int64 v146;
  float v147;
  _BOOL4 v148;
  __int64 v149;
  float v150;
  bool v151;
  __int64* v152;
  __int64 v153;
  __int64 v154;
  float v155;
  float v156;
  float v157;
  bool v158;
  __int64 v159;
  float v160;
  _BOOL4 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  float v166;
  float v167;
  _BOOL4 v168;
  __int64 v169;
  __int64 v170;
  float v171;
  float v172;
  float v173;
  bool v174;
  __int64 v175;
  float v176;
  _BOOL4 v177;
  __int64 v178;
  __int64 v179;
  float v180;
  float v181;
  float v182;
  bool v183;
  __int64 v184;
  float v185;
  _BOOL4 v186;
  __int64* v187;
  bool v189;
  __int64 v190;
  __int64* v191;
  __int64* v192;
  __int64 v193;
  __int64 v194;
  float v195;
  float v196;
  _BOOL4 v197;
  __int64 v198;
  float v199;
  float v200;
  bool v201;
  signed __int64 v202;
  signed __int64 v203;
  signed __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64* v207;
  __int64 v208;
  __int64 v209;
  float v210;
  float v211;
  _BOOL4 v212;
  __int64* v213;
  float v214;
  __int64 v215;
  float v216;
  bool v217;
  float v218;
  float v219;
  __int64* v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  float v224;
  float v225;
  _BOOL4 v226;
  bool v227;
  __int64 v228;
  __int64 v229;
  __int64* v230;
  __int64* v231;
  __int64 v232;
  __int64 v233;
  float v234;
  float v235;
  __int64 v236;
  __int64* v237;
  __int64* v238;
  __int64 v239;
  __int64 v240;
  unsigned __int64 v241;
  unsigned __int64 v242;
  __int64 v243;
  __int64* v244;
  __int64 v245;
  float v246;
  float v247;
  _BOOL4 v248;
  __int64* v249;
  float v250;
  float v251;
  bool v252;
  float v253;
  float v254;
  _BOOL4 v255;
  __int64 v256;
  __int64 v257;
  float v258;
  float v259;
  float v260;
  _BOOL4 v261;
  bool v262;
  float v263;
  float v264;
  _BOOL4 v265;
  __int64 v266;
  __int64 v267;
  float v268;
  float v269;
  _BOOL4 v270;
  __int64* v271;
  float v272;
  float v273;
  bool v274;
  float v275;
  float v276;
  _BOOL4 v277;
  __int64 v278;
  float v279;
  float v280;
  _BOOL4 v281;
  float v282;
  float v283;
  _BOOL4 v284;
  __int64 v285;
  float v286;
  float v287;
  _BOOL4 v288;
  __int64 v289;
  float v290;
  float v291;
  _BOOL4 v292;
  float v293;
  float v294;
  _BOOL4 v295;
  float v296;
  float v297;
  _BOOL4 v298;
  __int64 v299;
  float v300;
  float v301;
  _BOOL4 v302;
  __int64 v303;
  float v304;
  float v305;
  _BOOL4 v306;
  __int64 v307;
  float v308;
  float v309;
  _BOOL4 v310;
  float v311;
  float v312;
  int v313;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v169 = *v8;
            v170 = v8[1];
            v171 = *(float*)(v170 + 40);
            v172 = *(float*)(*v8 + 40);
            v173 = *(float*)(v170 + 32);
            if ((float)((float)(v171 - v172) * (float)(v171 - v172)) <= 100.0) {
              v174 = v173 < *(float*)(*v8 + 32);
            }
            else {
              v174 = v171 < v172;
            }
            v175 = *(a2 - 1);
            v176 = *(float*)(v175 + 40);
            v177 = *(float*)(v175 + 32) < v173;
            if ((float)((float)(v176 - v171) * (float)(v176 - v171)) > 100.0) {
              v177 = v176 < v171;
            }
            if (v174) {
              if (v177) {
                *v8 = v175;
                *(a2 - 1) = v169;
              }
              else {
                *v8 = v170;
                v8[1] = v169;
                v278 = *(a2 - 1);
                v279 = *(float*)(v169 + 40);
                v280 = *(float*)(v278 + 40);
                v281 = *(float*)(v278 + 32) < *(float*)(v169 + 32);
                if ((float)((float)(v280 - v279) * (float)(v280 - v279)) >
                    100.0) {
                  v281 = v280 < v279;
                }
                if (v281) {
                  v8[1] = v278;
                  *(a2 - 1) = v169;
                }
              }
              return result;
            }
            if (!v177) {
              return result;
            }
            v8[1] = v175;
            *(a2 - 1) = v170;
            v257 = *v8;
            v256 = v8[1];
            v258 = *(float*)(v256 + 40);
            v259 = *(float*)(*v8 + 40);
            v260 = (float)(v258 - v259) * (float)(v258 - v259);
            v261 = *(float*)(v256 + 32) < *(float*)(*v8 + 32);
            v262 = v258 < v259;
          LABEL_338:
            v313 = v262;
            if (v260 > 100.0) {
              v261 = v313;
            }
            if (v261) {
              *v8 = v256;
              v8[1] = v257;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 != 5) {
              goto LABEL_10;
            }
            v154 = *v8;
            v153 = v8[1];
            v155 = *(float*)(v153 + 40);
            v156 = *(float*)(*v8 + 40);
            v157 = *(float*)(v153 + 32);
            if ((float)((float)(v155 - v156) * (float)(v155 - v156)) <= 100.0) {
              v158 = v157 < *(float*)(*v8 + 32);
            }
            else {
              v158 = v155 < v156;
            }
            v159 = v8[2];
            v160 = *(float*)(v159 + 40);
            v161 = *(float*)(v159 + 32) < v157;
            if ((float)((float)(v160 - v155) * (float)(v160 - v155)) > 100.0) {
              v161 = v160 < v155;
            }
            if (v158) {
              if (v161) {
                *v8 = v159;
                v8[2] = v154;
                v162 = v159;
                v163 = v153;
              LABEL_297:
                v153 = v154;
              LABEL_316:
                v289 = v8[3];
                v290 = *(float*)(v153 + 40);
                v291 = *(float*)(v289 + 40);
                v292 = *(float*)(v289 + 32) < *(float*)(v153 + 32);
                if ((float)((float)(v291 - v290) * (float)(v291 - v290)) >
                    100.0) {
                  v292 = v291 < v290;
                }
                if (v292) {
                  v8[2] = v289;
                  v8[3] = v153;
                  v293 = *(float*)(v289 + 40);
                  v294 = *(float*)(v163 + 40);
                  v295 = *(float*)(v289 + 32) < *(float*)(v163 + 32);
                  if ((float)((float)(v293 - v294) * (float)(v293 - v294)) >
                      100.0) {
                    v295 = v293 < v294;
                  }
                  if (v295) {
                    v8[1] = v289;
                    v8[2] = v163;
                    v296 = *(float*)(v289 + 40);
                    v297 = *(float*)(v162 + 40);
                    v298 = *(float*)(v289 + 32) < *(float*)(v162 + 32);
                    if ((float)((float)(v296 - v297) * (float)(v296 - v297)) >
                        100.0) {
                      v298 = v296 < v297;
                    }
                    if (v298) {
                      *v8 = v289;
                      v8[1] = v162;
                    }
                  }
                }
                else {
                  v153 = v8[3];
                }
                v299 = *(a2 - 1);
                v300 = *(float*)(v153 + 40);
                v301 = *(float*)(v299 + 40);
                v302 = *(float*)(v299 + 32) < *(float*)(v153 + 32);
                if ((float)((float)(v301 - v300) * (float)(v301 - v300)) >
                    100.0) {
                  v302 = v301 < v300;
                }
                if (!v302) {
                  return result;
                }
                v8[3] = v299;
                *(a2 - 1) = v153;
                v303 = v8[2];
                v256 = v8[3];
                v304 = *(float*)(v256 + 40);
                v305 = *(float*)(v303 + 40);
                v306 = *(float*)(v256 + 32) < *(float*)(v303 + 32);
                if ((float)((float)(v304 - v305) * (float)(v304 - v305)) >
                    100.0) {
                  v306 = v304 < v305;
                }
                if (!v306) {
                  return result;
                }
                v8[2] = v256;
                v8[3] = v303;
              LABEL_334:
                v307 = v8[1];
                v308 = *(float*)(v256 + 40);
                v309 = *(float*)(v307 + 40);
                v310 = *(float*)(v256 + 32) < *(float*)(v307 + 32);
                if ((float)((float)(v308 - v309) * (float)(v308 - v309)) >
                    100.0) {
                  v310 = v308 < v309;
                }
                if (!v310) {
                  return result;
                }
                v8[1] = v256;
                v8[2] = v307;
                v257 = *v8;
                v311 = *(float*)(v256 + 40);
                v312 = *(float*)(*v8 + 40);
                v261 = *(float*)(v256 + 32) < *(float*)(*v8 + 32);
                v262 = v311 < v312;
                v260 = (float)(v311 - v312) * (float)(v311 - v312);
                goto LABEL_338;
              }
              *v8 = v153;
              v8[1] = v154;
              v275 = *(float*)(v159 + 40);
              v276 = *(float*)(v154 + 40);
              v277 = *(float*)(v159 + 32) < *(float*)(v154 + 32);
              if ((float)((float)(v275 - v276) * (float)(v275 - v276)) >
                  100.0) {
                v277 = v275 < v276;
              }
              if (v277) {
                v8[1] = v159;
                v8[2] = v154;
                v162 = v153;
                v163 = v159;
                goto LABEL_297;
              }
              v162 = v153;
              v163 = v154;
            }
            else {
              if (v161) {
                v8[1] = v159;
                v8[2] = v153;
                v253 = *(float*)(v159 + 40);
                v254 = *(float*)(v154 + 40);
                v255 = *(float*)(v159 + 32) < *(float*)(v154 + 32);
                if ((float)((float)(v253 - v254) * (float)(v253 - v254)) >
                    100.0) {
                  v255 = v253 < v254;
                }
                if (v255) {
                  *v8 = v159;
                  v8[1] = v154;
                  v162 = v159;
                  v163 = v154;
                }
                else {
                  v162 = v154;
                  v163 = v159;
                }
                goto LABEL_316;
              }
              v162 = *v8;
              v163 = v8[1];
            }
            v153 = v159;
            goto LABEL_316;
          }
          v179 = *v8;
          v178 = v8[1];
          v180 = *(float*)(v178 + 40);
          v181 = *(float*)(*v8 + 40);
          v182 = *(float*)(v178 + 32);
          if ((float)((float)(v180 - v181) * (float)(v180 - v181)) <= 100.0) {
            v183 = v182 < *(float*)(*v8 + 32);
          }
          else {
            v183 = v180 < v181;
          }
          v184 = v8[2];
          v185 = *(float*)(v184 + 40);
          v186 = *(float*)(v184 + 32) < v182;
          if ((float)((float)(v185 - v180) * (float)(v185 - v180)) > 100.0) {
            v186 = v185 < v180;
          }
          if (v183) {
            if (v186) {
              *v8 = v184;
            LABEL_307:
              v8[2] = v179;
              v178 = v179;
            LABEL_309:
              v285 = *(a2 - 1);
              v286 = *(float*)(v178 + 40);
              v287 = *(float*)(v285 + 40);
              v288 = *(float*)(v285 + 32) < *(float*)(v178 + 32);
              if ((float)((float)(v287 - v286) * (float)(v287 - v286)) >
                  100.0) {
                v288 = v287 < v286;
              }
              if (!v288) {
                return result;
              }
              v8[2] = v285;
              *(a2 - 1) = v178;
              v256 = v8[2];
              goto LABEL_334;
            }
            *v8 = v178;
            v8[1] = v179;
            v282 = *(float*)(v184 + 40);
            v283 = *(float*)(v179 + 40);
            v284 = *(float*)(v184 + 32) < *(float*)(v179 + 32);
            if ((float)((float)(v282 - v283) * (float)(v282 - v283)) > 100.0) {
              v284 = v282 < v283;
            }
            if (v284) {
              v8[1] = v184;
              goto LABEL_307;
            }
          }
          else if (v186) {
            v8[1] = v184;
            v8[2] = v178;
            v263 = *(float*)(v184 + 40);
            v264 = *(float*)(v179 + 40);
            v265 = *(float*)(v184 + 32) < *(float*)(v179 + 32);
            if ((float)((float)(v263 - v264) * (float)(v263 - v264)) > 100.0) {
              v265 = v263 < v264;
            }
            if (v265) {
              *v8 = v184;
              v8[1] = v179;
            }
            goto LABEL_309;
          }
          v178 = v184;
          goto LABEL_309;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v164 = *(a2 - 1);
          v165 = *v8;
          v166 = *(float*)(v164 + 40);
          v167 = *(float*)(*v8 + 40);
          v168 = *(float*)(v164 + 32) < *(float*)(*v8 + 32);
          if ((float)((float)(v166 - v167) * (float)(v166 - v167)) > 100.0) {
            v168 = v166 < v167;
          }
          if (v168) {
            *v8 = v164;
            *(a2 - 1) = v165;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v187 = v8 + 1;
          v189 = v8 == a2 || v187 == a2;
          if ((a4 & 1) != 0) {
            if (!v189) {
              v190 = 0;
              v191 = v8;
              do {
                v194 = *v191;
                v193 = v191[1];
                v191 = v187;
                v195 = *(float*)(v193 + 40);
                v196 = *(float*)(v194 + 40);
                v197 = *(float*)(v193 + 32) < *(float*)(v194 + 32);
                if ((float)((float)(v195 - v196) * (float)(v195 - v196)) >
                    100.0) {
                  v197 = v195 < v196;
                }
                if (v197) {
                  v198 = v190;
                  do {
                    *(__int64*)((char*)v8 + v198 + 8) = v194;
                    if (v198 == 0) {
                      v192 = v8;
                      goto LABEL_211;
                    }
                    v194 = *(__int64*)((char*)v8 + v198 - 8);
                    v199 = *(float*)(v193 + 40);
                    v198 -= 8;
                    v200 = *(float*)(v194 + 40);
                    v201 = *(float*)(v193 + 32) < *(float*)(v194 + 32);
                    if ((float)((float)(v199 - v200) * (float)(v199 - v200)) >
                        100.0) {
                      v201 = v199 < v200;
                    }
                  } while (v201);
                  v192 = (__int64*)((char*)v8 + v198 + 8);
                LABEL_211:
                  *v192 = v193;
                }
                v187 = v191 + 1;
                v190 += 8;
              } while (v191 + 1 != a2);
            }
          }
          else if (!v189) {
            do {
              v267 = *v7;
              v266 = v7[1];
              v7 = v187;
              v268 = *(float*)(v266 + 40);
              v269 = *(float*)(v267 + 40);
              v270 = *(float*)(v266 + 32) < *(float*)(v267 + 32);
              if ((float)((float)(v268 - v269) * (float)(v268 - v269)) >
                  100.0) {
                v270 = v268 < v269;
              }
              if (v270) {
                v271 = v187;
                do {
                  *v271 = v267;
                  v267 = *(v271 - 2);
                  --v271;
                  v272 = *(float*)(v266 + 40);
                  v273 = *(float*)(v267 + 40);
                  v274 = *(float*)(v266 + 32) < *(float*)(v267 + 32);
                  if ((float)((float)(v272 - v273) * (float)(v272 - v273)) >
                      100.0) {
                    v274 = v272 < v273;
                  }
                } while (v274);
                *v271 = v266;
              }
              v187 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v202 = (unsigned __int64)(v9 - 2) >> 1;
            v203 = v202;
            do {
              v204 = v203;
              if (v202 >= v203) {
                v205 = (2 * (v203 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v206 = 2 * v203 + 2;
                v207 = &v8[v205];
                v208 = *v207;
                if (v206 < v9) {
                  v209 = v207[1];
                  v210 = *(float*)(v208 + 40);
                  v211 = *(float*)(v209 + 40);
                  v212 = *(float*)(v208 + 32) < *(float*)(v209 + 32);
                  result = v210 < v211;
                  if ((float)((float)(v210 - v211) * (float)(v210 - v211)) >
                      100.0) {
                    v212 = v210 < v211;
                  }
                  if (v212) {
                    v208 = v207[1];
                    ++v207;
                    v205 = 2 * v204 + 2;
                  }
                }
                v213 = &v8[v204];
                v214 = *(float*)(v208 + 40);
                v215 = *v213;
                v216 = *(float*)(*v213 + 40);
                v217 = *(float*)(v208 + 32) < *(float*)(*v213 + 32);
                if ((float)((float)(v214 - v216) * (float)(v214 - v216)) >
                    100.0) {
                  v217 = v214 < v216;
                }
                if (!v217) {
                  do {
                    v220 = v207;
                    *v213 = v208;
                    if (v202 < v205) {
                      break;
                    }
                    v221 = (2 * v205) | 1;
                    v222 = 2 * v205 + 2;
                    v207 = &v8[v221];
                    v208 = *v207;
                    if (v222 < v9) {
                      v223 = v207[1];
                      v224 = *(float*)(v208 + 40);
                      v225 = *(float*)(v223 + 40);
                      v226 = *(float*)(v208 + 32) < *(float*)(v223 + 32);
                      if ((float)((float)(v224 - v225) * (float)(v224 - v225)) >
                          100.0) {
                        v226 = v224 < v225;
                      }
                      if (v226) {
                        v208 = v207[1];
                        ++v207;
                        v221 = v222;
                      }
                    }
                    v218 = *(float*)(v208 + 40);
                    v219 = *(float*)(v215 + 40);
                    result = (float)((float)(v218 - v219) *
                                     (float)(v218 - v219)) <= 100.0
                                 ? *(float*)(v208 + 32) < *(float*)(v215 + 32)
                                 : v218 < v219;
                    v213 = v220;
                    v205 = v221;
                  } while ((_DWORD)result != 1);
                  *v220 = v215;
                }
              }
              v203 = v204 - 1;
            } while (v204 != 0);
            do {
              v228 = *v8;
              v229 = 0;
              v230 = v8;
              do {
                v238 = &v230[v229];
                v237 = v238 + 1;
                v236 = v238[1];
                v239 = (2 * v229) | 1;
                v229 = 2 * v229 + 2;
                if (v229 < v9) {
                  v233 = v238[2];
                  v231 = v238 + 2;
                  v232 = v233;
                  v234 = *(float*)(v236 + 40);
                  v235 = *(float*)(v233 + 40);
                  LODWORD(result) = *(float*)(v236 + 32) < *(float*)(v233 + 32);
                  if ((float)((float)(v234 - v235) * (float)(v234 - v235)) <=
                      100.0) {
                    result = (unsigned int)result;
                  }
                  else {
                    result = v234 < v235;
                  }
                  if ((_DWORD)result != 0) {
                    v236 = v232;
                    v237 = v231;
                  }
                  else {
                    v229 = v239;
                  }
                }
                else {
                  v229 = v239;
                }
                *v230 = v236;
                v230 = v237;
              } while (v229 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v237 == --a2) {
                *v237 = v228;
              }
              else {
                *v237 = *a2;
                *a2 = v228;
                v240 = ((char*)v237 - (char*)v8 + 8) >> 3;
                v227 = v240 < 2;
                v241 = v240 - 2;
                if (!v227) {
                  v242 = v241 >> 1;
                  v243 = *v237;
                  v244 = &v8[v242];
                  v245 = *v244;
                  v246 = *(float*)(*v237 + 40);
                  v247 = *(float*)(*v244 + 40);
                  v248 = *(float*)(*v244 + 32) < *(float*)(*v237 + 32);
                  if ((float)((float)(v247 - v246) * (float)(v247 - v246)) >
                      100.0) {
                    v248 = v247 < v246;
                  }
                  if (v248) {
                    do {
                      v249 = v244;
                      *v237 = v245;
                      if (v242 == 0) {
                        break;
                      }
                      v250 = *(float*)(v243 + 40);
                      v242 = (v242 - 1) >> 1;
                      v244 = &v8[v242];
                      v245 = *v244;
                      v251 = *(float*)(*v244 + 40);
                      v252 = v251 < v250;
                      if ((float)((float)(v251 - v250) *
                                  (float)(v251 - v250)) <= 100.0) {
                        v252 = *(float*)(*v244 + 32) < *(float*)(v243 + 32);
                      }
                      v237 = v249;
                    } while (v252);
                    *v249 = v243;
                  }
                }
              }
              v227 = v9-- <= 2;
            } while (!v227);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(float*)(v10 + 40);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(float*)(*v11 + 40);
          v16 = *(float*)(*v8 + 40);
          v17 = *(float*)(*v11 + 32);
          v18 = v15 < v16;
          if ((float)((float)(v15 - v16) * (float)(v15 - v16)) <= 100.0) {
            v18 = v17 < *(float*)(*v8 + 32);
          }
          v19 = *(float*)(v10 + 32) < v17;
          if ((float)((float)(v12 - v15) * (float)(v12 - v15)) > 100.0) {
            v19 = v12 < v15;
          }
          if (v18) {
            if (v19) {
              *v8 = v10;
            LABEL_41:
              *(a2 - 1) = v14;
              goto LABEL_42;
            }
            *v8 = v13;
            *v11 = v14;
            v35 = *(a2 - 1);
            v36 = *(float*)(v14 + 40);
            v37 = *(float*)(v35 + 40);
            v38 = *(float*)(v35 + 32) < *(float*)(v14 + 32);
            if ((float)((float)(v37 - v36) * (float)(v37 - v36)) > 100.0) {
              v38 = v37 < v36;
            }
            if (v38) {
              *v11 = v35;
              goto LABEL_41;
            }
          }
          else if (v19) {
            *v11 = v10;
            *(a2 - 1) = v13;
            v27 = *v8;
            v28 = *(float*)(*v11 + 40);
            v29 = *(float*)(*v8 + 40);
            v30 = *(float*)(*v11 + 32) < *(float*)(*v8 + 32);
            if ((float)((float)(v28 - v29) * (float)(v28 - v29)) > 100.0) {
              v30 = v28 < v29;
            }
            if (v30) {
              *v8 = *v11;
              *v11 = v27;
            }
          }
        LABEL_42:
          v39 = *(v11 - 1);
          v40 = v8[1];
          v41 = *(float*)(v39 + 40);
          v42 = *(float*)(v40 + 40);
          v43 = *(float*)(v39 + 32);
          if ((float)((float)(v41 - v42) * (float)(v41 - v42)) <= 100.0) {
            v44 = v43 < *(float*)(v40 + 32);
          }
          else {
            v44 = v41 < v42;
          }
          v45 = *(a2 - 2);
          v46 = *(float*)(v45 + 40);
          v47 = *(float*)(v45 + 32) < v43;
          if ((float)((float)(v46 - v41) * (float)(v46 - v41)) > 100.0) {
            v47 = v46 < v41;
          }
          if (v44) {
            if (v47) {
              v8[1] = v45;
            LABEL_64:
              *(a2 - 2) = v40;
              goto LABEL_65;
            }
            v8[1] = v39;
            *(v11 - 1) = v40;
            v57 = *(a2 - 2);
            v58 = *(float*)(v40 + 40);
            v59 = *(float*)(v57 + 40);
            v60 = *(float*)(v57 + 32) < *(float*)(v40 + 32);
            if ((float)((float)(v59 - v58) * (float)(v59 - v58)) > 100.0) {
              v60 = v59 < v58;
            }
            if (v60) {
              *(v11 - 1) = v57;
              goto LABEL_64;
            }
          }
          else if (v47) {
            *(v11 - 1) = v45;
            *(a2 - 2) = v39;
            v48 = *(v11 - 1);
            v49 = v8[1];
            v50 = *(float*)(v48 + 40);
            v51 = *(float*)(v49 + 40);
            v52 = *(float*)(v48 + 32) < *(float*)(v49 + 32);
            if ((float)((float)(v50 - v51) * (float)(v50 - v51)) > 100.0) {
              v52 = v50 < v51;
            }
            if (v52) {
              v8[1] = v48;
              *(v11 - 1) = v49;
            }
          }
        LABEL_65:
          v61 = v11[1];
          v62 = v8[2];
          v63 = *(float*)(v61 + 40);
          v64 = *(float*)(v62 + 40);
          v65 = *(float*)(v61 + 32);
          if ((float)((float)(v63 - v64) * (float)(v63 - v64)) <= 100.0) {
            v66 = v65 < *(float*)(v62 + 32);
          }
          else {
            v66 = v63 < v64;
          }
          v67 = *(a2 - 3);
          v68 = *(float*)(v67 + 40);
          v69 = *(float*)(v67 + 32) < v65;
          if ((float)((float)(v68 - v63) * (float)(v68 - v63)) > 100.0) {
            v69 = v68 < v63;
          }
          if (v66) {
            if (v69) {
              v8[2] = v67;
            LABEL_82:
              *(a2 - 3) = v62;
              goto LABEL_83;
            }
            v8[2] = v61;
            v11[1] = v62;
            v75 = *(a2 - 3);
            v76 = *(float*)(v62 + 40);
            v77 = *(float*)(v75 + 40);
            v78 = *(float*)(v75 + 32) < *(float*)(v62 + 32);
            if ((float)((float)(v77 - v76) * (float)(v77 - v76)) > 100.0) {
              v78 = v77 < v76;
            }
            if (v78) {
              v11[1] = v75;
              goto LABEL_82;
            }
          }
          else if (v69) {
            v11[1] = v67;
            *(a2 - 3) = v61;
            v70 = v11[1];
            v71 = v8[2];
            v72 = *(float*)(v70 + 40);
            v73 = *(float*)(v71 + 40);
            v74 = *(float*)(v70 + 32) < *(float*)(v71 + 32);
            if ((float)((float)(v72 - v73) * (float)(v72 - v73)) > 100.0) {
              v74 = v72 < v73;
            }
            if (v74) {
              v8[2] = v70;
              v11[1] = v71;
            }
          }
        LABEL_83:
          v79 = *(v11 - 1);
          v80 = *v11;
          v81 = *(float*)(*v11 + 40);
          v82 = *(float*)(v79 + 40);
          v83 = *(float*)(*v11 + 32);
          if ((float)((float)(v81 - v82) * (float)(v81 - v82)) <= 100.0) {
            v84 = v83 < *(float*)(v79 + 32);
          }
          else {
            v84 = v81 < v82;
          }
          v85 = v11[1];
          v86 = *(float*)(v85 + 40);
          v87 = *(float*)(v85 + 32) < v83;
          if ((float)((float)(v86 - v81) * (float)(v86 - v81)) > 100.0) {
            v87 = v86 < v81;
          }
          if (v84) {
            if (v87) {
              *(v11 - 1) = v85;
              v11[1] = v79;
            LABEL_96:
              v79 = v80;
              goto LABEL_102;
            }
            *(v11 - 1) = v80;
            *v11 = v79;
            v91 = *(float*)(v85 + 40);
            v92 = *(float*)(v79 + 40);
            v93 = *(float*)(v85 + 32) < *(float*)(v79 + 32);
            if ((float)((float)(v91 - v92) * (float)(v91 - v92)) > 100.0) {
              v93 = v91 < v92;
            }
            if (!v93) {
              goto LABEL_102;
            }
            *v11 = v85;
            v11[1] = v79;
          }
          else {
            if (!v87) {
              goto LABEL_96;
            }
            *v11 = v85;
            v11[1] = v80;
            v88 = *(float*)(v85 + 40);
            v89 = *(float*)(v79 + 40);
            v90 = *(float*)(v85 + 32) < *(float*)(v79 + 32);
            if ((float)((float)(v88 - v89) * (float)(v88 - v89)) > 100.0) {
              v90 = v88 < v89;
            }
            if (v90) {
              *(v11 - 1) = v85;
              *v11 = v79;
            LABEL_102:
              v94 = *v8;
              *v8 = v79;
              *v11 = v94;
              goto LABEL_103;
            }
          }
          v79 = v85;
          goto LABEL_102;
        }
        v20 = *v8;
        v21 = *v11;
        v22 = *(float*)(*v8 + 40);
        v23 = *(float*)(*v11 + 40);
        v24 = *(float*)(*v8 + 32);
        v25 = v22 < v23;
        if ((float)((float)(v22 - v23) * (float)(v22 - v23)) <= 100.0) {
          v25 = v24 < *(float*)(*v11 + 32);
        }
        v26 = *(float*)(v10 + 32) < v24;
        if ((float)((float)(v12 - v22) * (float)(v12 - v22)) > 100.0) {
          v26 = v12 < v22;
        }
        if (v25) {
          if (v26) {
            *v11 = v10;
          LABEL_59:
            *(a2 - 1) = v21;
            goto LABEL_103;
          }
          *v11 = v20;
          *v8 = v21;
          v53 = *(a2 - 1);
          v54 = *(float*)(v21 + 40);
          v55 = *(float*)(v53 + 40);
          v56 = *(float*)(v53 + 32) < *(float*)(v21 + 32);
          if ((float)((float)(v55 - v54) * (float)(v55 - v54)) > 100.0) {
            v56 = v55 < v54;
          }
          if (v56) {
            *v8 = v53;
            goto LABEL_59;
          }
        }
        else if (v26) {
          *v8 = v10;
          *(a2 - 1) = v20;
          v31 = *v11;
          v32 = *(float*)(*v8 + 40);
          v33 = *(float*)(*v11 + 40);
          v34 = *(float*)(*v8 + 32) < *(float*)(*v11 + 32);
          if ((float)((float)(v32 - v33) * (float)(v32 - v33)) > 100.0) {
            v34 = v32 < v33;
          }
          if (v34) {
            *v11 = *v8;
            *v8 = v31;
          }
        }
      LABEL_103:
        v95 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v98 = *(v8 - 1);
        v99 = *(float*)(v95 + 40);
        v100 = *(float*)(v98 + 40);
        v97 = *(_OWORD*)(v95 + 32);
        v101 = *(float*)(v98 + 32) < *(float*)&v97;
        if ((float)((float)(v100 - v99) * (float)(v100 - v99)) > 100.0) {
          v101 = v100 < v99;
        }
        if (v101) {
          LODWORD(v96) = *(_QWORD*)(v95 + 40);
          goto LABEL_109;
        }
        v129 = *(a2 - 1);
        v130 = *(float*)(v129 + 40);
        v131 = *(float*)&v97 < *(float*)(v129 + 32);
        if ((float)((float)(v99 - v130) * (float)(v99 - v130)) > 100.0) {
          v131 = v99 < v130;
        }
        if (v131) {
          do {
            v132 = v8[1];
            ++v8;
            v133 = *(float*)(v132 + 40);
            v134 = *(float*)&v97 < *(float*)(v132 + 32);
            if ((float)((float)(v99 - v133) * (float)(v99 - v133)) > 100.0) {
              v134 = v99 < v133;
            }
          } while (!v134);
        }
        else {
          v135 = v8 + 1;
          do {
            v8 = v135;
            if (v135 >= a2) {
              break;
            }
            ++v135;
            v136 = *(float*)(*v8 + 40);
            v137 = *(float*)&v97 < *(float*)(*v8 + 32);
            if ((float)((float)(v99 - v136) * (float)(v99 - v136)) > 100.0) {
              v137 = v99 < v136;
            }
          } while (!v137);
        }
        v138 = a2;
        if (v8 < a2) {
          v138 = a2;
          do {
            v139 = *--v138;
            v140 = *(float*)(v139 + 40);
            v141 = *(float*)&v97 < *(float*)(v139 + 32);
            if ((float)((float)(v99 - v140) * (float)(v99 - v140)) > 100.0) {
              v141 = v99 < v140;
            }
          } while (v141);
        }
        if (v8 < v138) {
          v142 = *v8;
          v143 = *v138;
          do {
            *v8 = v143;
            *v138 = v142;
            v144 = *(float*)(v95 + 40);
            v145 = *(_OWORD*)(v95 + 32);
            do {
              v146 = v8[1];
              ++v8;
              v142 = v146;
              v147 = *(float*)(v146 + 40);
              v148 = *(float*)&v145 < *(float*)(v146 + 32);
              if ((float)((float)(v144 - v147) * (float)(v144 - v147)) >
                  100.0) {
                v148 = v144 < v147;
              }
            } while (!v148);
            do {
              v149 = *--v138;
              v143 = v149;
              v150 = *(float*)(v149 + 40);
              v151 = *(float*)&v145 < *(float*)(v149 + 32);
              if ((float)((float)(v144 - v150) * (float)(v144 - v150)) >
                  100.0) {
                v151 = v144 < v150;
              }
            } while (v151);
          } while (v8 < v138);
        }
        v152 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v152;
        }
        a4 = 0;
        *v152 = v95;
      }
      v96 = *(float*)(v95 + 40);
      LODWORD(v97) = *(_DWORD*)(v95 + 32);
    LABEL_109:
      v102 = 0;
      do {
        v103 = &v8[v102++];
        v104 = v103[1];
        v105 = *(float*)(v104 + 40);
        v106 = *(float*)(v104 + 32) < *(float*)&v97;
        if ((float)((float)(v105 - v96) * (float)(v105 - v96)) > 100.0) {
          v106 = v105 < v96;
        }
      } while (v106);
      v107 = &v8[v102];
      v108 = a2;
      if (v102 == 1) {
        v108 = a2;
        do {
          if (v107 >= v108) {
            break;
          }
          v112 = *--v108;
          v113 = *(float*)(v112 + 40);
          v114 = *(float*)(v112 + 32) < *(float*)&v97;
          if ((float)((float)(v113 - v96) * (float)(v113 - v96)) > 100.0) {
            v114 = v113 < v96;
          }
        } while (!v114);
      }
      else {
        do {
          v109 = *--v108;
          v110 = *(float*)(v109 + 40);
          v111 = *(float*)(v109 + 32) < *(float*)&v97;
          if ((float)((float)(v110 - v96) * (float)(v110 - v96)) > 100.0) {
            v111 = v110 < v96;
          }
        } while (!v111);
      }
      if (v107 >= v108) {
        v126 = v107 - 1;
        if (v8 == v107 - 1) {
          goto LABEL_137;
        }
      LABEL_136:
        *v8 = *v126;
        goto LABEL_137;
      }
      v115 = *v108;
      v116 = v107;
      v117 = v108;
      do {
        *v116 = v115;
        *v117 = v104;
        v118 = *(float*)(v95 + 40);
        v119 = *(_OWORD*)(v95 + 32);
        do {
          v120 = v116[1];
          ++v116;
          v104 = v120;
          v121 = *(float*)(v120 + 40);
          v122 = *(float*)(v120 + 32) < *(float*)&v119;
          if ((float)((float)(v121 - v118) * (float)(v121 - v118)) > 100.0) {
            v122 = v121 < v118;
          }
        } while (v122);
        do {
          v123 = *--v117;
          v115 = v123;
          v124 = *(float*)(v123 + 40);
          v125 = *(float*)(v123 + 32) < *(float*)&v119;
          if ((float)((float)(v124 - v118) * (float)(v124 - v118)) > 100.0) {
            v125 = v124 < v118;
          }
        } while (!v125);
      } while (v116 < v117);
      v126 = v116 - 1;
      if (v8 != v116 - 1) {
        goto LABEL_136;
      }
    LABEL_137:
      *v126 = v95;
      if (v107 < v108) {
        goto LABEL_140;
      }
      v127 = SpotMgr_133a380(v8, v126);
      v8 = v126 + 1;
      v128 = v127;
      result = SpotMgr_133a380(v126 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v128 & 1) == 0) {
      LABEL_140:
        result = SpotMgr_1338da0(v7, v126, a3, a4 & 1);
        a4 = 0;
        v8 = v126 + 1;
      }
    }
    a2 = v126;
    if ((v128 & 1) == 0) {
      continue;
    }
    return result;
  }
}

bool SpotMgr_133a380(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  bool v9;
  __int64 v10;
  float v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  _BOOL4 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  bool v25;
  __int64 v26;
  float v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  bool v36;
  float v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  bool v44;
  __int64 v45;
  float v46;
  _BOOL4 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  _BOOL4 v53;
  bool v54;
  float v55;
  float v56;
  _BOOL4 v57;
  float v58;
  float v59;
  _BOOL4 v60;
  float v61;
  float v62;
  _BOOL4 v63;
  __int64 v64;
  float v65;
  float v66;
  _BOOL4 v67;
  float v68;
  float v69;
  _BOOL4 v70;
  __int64* v71;
  __int64 v72;
  int v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float v78;
  _BOOL4 v79;
  __int64 v80;
  __int64 v81;
  float v82;
  float v83;
  bool v84;
  float v85;
  float v86;
  _BOOL4 v87;
  float v88;
  float v89;
  _BOOL4 v90;
  __int64 v91;
  float v92;
  float v93;
  _BOOL4 v94;
  __int64 v95;
  float v96;
  float v97;
  _BOOL4 v98;
  float v99;
  float v100;
  _BOOL4 v101;
  float v102;
  float v103;
  _BOOL4 v104;
  __int64 v105;
  float v106;
  float v107;
  _BOOL4 v108;
  __int64 v109;
  float v110;
  float v111;
  _BOOL4 v112;
  __int64 v113;
  float v114;
  float v115;
  _BOOL4 v116;
  float v117;
  float v118;
  int v119;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v20 = *a1;
      v21 = a1[1];
      v22 = *(float*)(v21 + 40);
      v23 = *(float*)(*a1 + 40);
      v24 = *(float*)(v21 + 32);
      if ((float)((float)(v22 - v23) * (float)(v22 - v23)) <= 100.0) {
        v25 = v24 < *(float*)(*a1 + 32);
      }
      else {
        v25 = v22 < v23;
      }
      v26 = *(a2 - 1);
      v27 = *(float*)(v26 + 40);
      v28 = *(float*)(v26 + 32) < v24;
      if ((float)((float)(v27 - v22) * (float)(v27 - v22)) > 100.0) {
        v28 = v27 < v22;
      }
      if (v25) {
        if (v28) {
          *a1 = v26;
        }
        else {
          *a1 = v21;
          a1[1] = v20;
          v64 = *(a2 - 1);
          v65 = *(float*)(v20 + 40);
          v66 = *(float*)(v64 + 40);
          v67 = *(float*)(v64 + 32) < *(float*)(v20 + 32);
          if ((float)((float)(v66 - v65) * (float)(v66 - v65)) > 100.0) {
            v67 = v66 < v65;
          }
          if (!v67) {
            return true;
          }
          a1[1] = v64;
        }
        *(a2 - 1) = v20;
        return true;
      }
      if (!v28) {
        return true;
      }
      a1[1] = v26;
      *(a2 - 1) = v21;
      v49 = *a1;
      v48 = a1[1];
      v50 = *(float*)(v48 + 40);
      v51 = *(float*)(*a1 + 40);
      v52 = (float)(v50 - v51) * (float)(v50 - v51);
      v53 = *(float*)(v48 + 32) < *(float*)(*a1 + 32);
      v54 = v50 < v51;
      goto LABEL_126;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_28;
      }
      v5 = *a1;
      v4 = a1[1];
      v6 = *(float*)(v4 + 40);
      v7 = *(float*)(*a1 + 40);
      v8 = *(float*)(v4 + 32);
      if ((float)((float)(v6 - v7) * (float)(v6 - v7)) <= 100.0) {
        v9 = v8 < *(float*)(*a1 + 32);
      }
      else {
        v9 = v6 < v7;
      }
      v10 = a1[2];
      v11 = *(float*)(v10 + 40);
      v12 = *(float*)(v10 + 32) < v8;
      if ((float)((float)(v11 - v6) * (float)(v11 - v6)) > 100.0) {
        v12 = v11 < v6;
      }
      if (v9) {
        if (v12) {
          *a1 = v10;
          a1[2] = v5;
          v13 = v10;
          v14 = v4;
        LABEL_88:
          v4 = v5;
        LABEL_104:
          v95 = a1[3];
          v96 = *(float*)(v4 + 40);
          v97 = *(float*)(v95 + 40);
          v98 = *(float*)(v95 + 32) < *(float*)(v4 + 32);
          if ((float)((float)(v97 - v96) * (float)(v97 - v96)) > 100.0) {
            v98 = v97 < v96;
          }
          if (v98) {
            a1[2] = v95;
            a1[3] = v4;
            v99 = *(float*)(v95 + 40);
            v100 = *(float*)(v14 + 40);
            v101 = *(float*)(v95 + 32) < *(float*)(v14 + 32);
            if ((float)((float)(v99 - v100) * (float)(v99 - v100)) > 100.0) {
              v101 = v99 < v100;
            }
            if (v101) {
              a1[1] = v95;
              a1[2] = v14;
              v102 = *(float*)(v95 + 40);
              v103 = *(float*)(v13 + 40);
              v104 = *(float*)(v95 + 32) < *(float*)(v13 + 32);
              if ((float)((float)(v102 - v103) * (float)(v102 - v103)) >
                  100.0) {
                v104 = v102 < v103;
              }
              if (v104) {
                *a1 = v95;
                a1[1] = v13;
              }
            }
          }
          else {
            v4 = a1[3];
          }
          v105 = *(a2 - 1);
          v106 = *(float*)(v4 + 40);
          v107 = *(float*)(v105 + 40);
          v108 = *(float*)(v105 + 32) < *(float*)(v4 + 32);
          if ((float)((float)(v107 - v106) * (float)(v107 - v106)) > 100.0) {
            v108 = v107 < v106;
          }
          if (!v108) {
            return true;
          }
          a1[3] = v105;
          *(a2 - 1) = v4;
          v109 = a1[2];
          v48 = a1[3];
          v110 = *(float*)(v48 + 40);
          v111 = *(float*)(v109 + 40);
          v112 = *(float*)(v48 + 32) < *(float*)(v109 + 32);
          if ((float)((float)(v110 - v111) * (float)(v110 - v111)) > 100.0) {
            v112 = v110 < v111;
          }
          if (!v112) {
            return true;
          }
          a1[2] = v48;
          a1[3] = v109;
          goto LABEL_122;
        }
        *a1 = v4;
        a1[1] = v5;
        v85 = *(float*)(v10 + 40);
        v86 = *(float*)(v5 + 40);
        v87 = *(float*)(v10 + 32) < *(float*)(v5 + 32);
        if ((float)((float)(v85 - v86) * (float)(v85 - v86)) > 100.0) {
          v87 = v85 < v86;
        }
        if (v87) {
          a1[1] = v10;
          a1[2] = v5;
          v13 = v4;
          v14 = v10;
          goto LABEL_88;
        }
        v13 = v4;
        v14 = v5;
      }
      else {
        if (v12) {
          a1[1] = v10;
          a1[2] = v4;
          v58 = *(float*)(v10 + 40);
          v59 = *(float*)(v5 + 40);
          v60 = *(float*)(v10 + 32) < *(float*)(v5 + 32);
          if ((float)((float)(v58 - v59) * (float)(v58 - v59)) > 100.0) {
            v60 = v58 < v59;
          }
          if (v60) {
            *a1 = v10;
            a1[1] = v5;
            v13 = v10;
            v14 = v5;
          }
          else {
            v13 = v5;
            v14 = v10;
          }
          goto LABEL_104;
        }
        v13 = *a1;
        v14 = a1[1];
      }
      v4 = v10;
      goto LABEL_104;
    }
    v40 = *a1;
    v39 = a1[1];
    v41 = *(float*)(v39 + 40);
    v42 = *(float*)(*a1 + 40);
    v43 = *(float*)(v39 + 32);
    if ((float)((float)(v41 - v42) * (float)(v41 - v42)) <= 100.0) {
      v44 = v43 < *(float*)(*a1 + 32);
    }
    else {
      v44 = v41 < v42;
    }
    v45 = a1[2];
    v46 = *(float*)(v45 + 40);
    v47 = *(float*)(v45 + 32) < v43;
    if ((float)((float)(v46 - v41) * (float)(v46 - v41)) > 100.0) {
      v47 = v46 < v41;
    }
    if (v44) {
      if (v47) {
        *a1 = v45;
      LABEL_94:
        a1[2] = v40;
        v39 = v40;
      LABEL_96:
        v91 = *(a2 - 1);
        v92 = *(float*)(v39 + 40);
        v93 = *(float*)(v91 + 40);
        v94 = *(float*)(v91 + 32) < *(float*)(v39 + 32);
        if ((float)((float)(v93 - v92) * (float)(v93 - v92)) > 100.0) {
          v94 = v93 < v92;
        }
        if (!v94) {
          return true;
        }
        a1[2] = v91;
        *(a2 - 1) = v39;
        v48 = a1[2];
      LABEL_122:
        v113 = a1[1];
        v114 = *(float*)(v48 + 40);
        v115 = *(float*)(v113 + 40);
        v116 = *(float*)(v48 + 32) < *(float*)(v113 + 32);
        if ((float)((float)(v114 - v115) * (float)(v114 - v115)) > 100.0) {
          v116 = v114 < v115;
        }
        if (!v116) {
          return true;
        }
        a1[1] = v48;
        a1[2] = v113;
        v49 = *a1;
        v117 = *(float*)(v48 + 40);
        v118 = *(float*)(*a1 + 40);
        v53 = *(float*)(v48 + 32) < *(float*)(*a1 + 32);
        v54 = v117 < v118;
        v52 = (float)(v117 - v118) * (float)(v117 - v118);
      LABEL_126:
        v119 = v54;
        if (v52 > 100.0) {
          v53 = v119;
        }
        if (!v53) {
          return true;
        }
        *a1 = v48;
        a1[1] = v49;
        return true;
      }
      *a1 = v39;
      a1[1] = v40;
      v88 = *(float*)(v45 + 40);
      v89 = *(float*)(v40 + 40);
      v90 = *(float*)(v45 + 32) < *(float*)(v40 + 32);
      if ((float)((float)(v88 - v89) * (float)(v88 - v89)) > 100.0) {
        v90 = v88 < v89;
      }
      if (v90) {
        a1[1] = v45;
        goto LABEL_94;
      }
    }
    else if (v47) {
      a1[1] = v45;
      a1[2] = v39;
      v61 = *(float*)(v45 + 40);
      v62 = *(float*)(v40 + 40);
      v63 = *(float*)(v45 + 32) < *(float*)(v40 + 32);
      if ((float)((float)(v61 - v62) * (float)(v61 - v62)) > 100.0) {
        v63 = v61 < v62;
      }
      if (v63) {
        *a1 = v45;
        a1[1] = v40;
      }
      goto LABEL_96;
    }
    v39 = v45;
    goto LABEL_96;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v15 = *(a2 - 1);
    v16 = *a1;
    v17 = *(float*)(v15 + 40);
    v18 = *(float*)(*a1 + 40);
    v19 = *(float*)(v15 + 32) < *(float*)(*a1 + 32);
    if ((float)((float)(v17 - v18) * (float)(v17 - v18)) > 100.0) {
      v19 = v17 < v18;
    }
    if (!v19) {
      return true;
    }
    *a1 = v15;
    *(a2 - 1) = v16;
    return true;
  }
LABEL_28:
  v29 = *a1;
  v30 = a1[1];
  v31 = a1 + 2;
  v32 = a1[2];
  v33 = *(float*)(v30 + 40);
  v34 = *(float*)(*a1 + 40);
  v35 = *(float*)(v30 + 32);
  v36 = v33 < v34;
  v37 = *(float*)(v32 + 40);
  if ((float)((float)(v33 - v34) * (float)(v33 - v34)) <= 100.0) {
    v36 = v35 < *(float*)(*a1 + 32);
  }
  v38 = *(float*)(v32 + 32) < v35;
  if ((float)((float)(v37 - v33) * (float)(v37 - v33)) > 100.0) {
    v38 = v37 < v33;
  }
  if (!v36) {
    if (v38) {
      a1[1] = v32;
      a1[2] = v30;
      v55 = *(float*)(v32 + 40);
      v56 = *(float*)(v29 + 40);
      v57 = *(float*)(v32 + 32) < *(float*)(v29 + 32);
      if ((float)((float)(v55 - v56) * (float)(v55 - v56)) > 100.0) {
        v57 = v55 < v56;
      }
      if (v57) {
        *a1 = v32;
        a1[1] = v29;
      }
    }
    goto LABEL_70;
  }
  if (v38) {
    *a1 = v32;
  }
  else {
    *a1 = v30;
    a1[1] = v29;
    v68 = *(float*)(v32 + 40);
    v69 = *(float*)(v29 + 40);
    v70 = *(float*)(v32 + 32) < *(float*)(v29 + 32);
    if ((float)((float)(v68 - v69) * (float)(v68 - v69)) > 100.0) {
      v70 = v68 < v69;
    }
    if (!v70) {
      goto LABEL_70;
    }
    a1[1] = v32;
  }
  a1[2] = v29;
LABEL_70:
  v71 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v72 = 24;
  v73 = 0;
  while (1) {
    v75 = *v71;
    v76 = *v31;
    v77 = *(float*)(*v71 + 40);
    v78 = *(float*)(v76 + 40);
    v79 = *(float*)(*v71 + 32) < *(float*)(v76 + 32);
    if ((float)((float)(v77 - v78) * (float)(v77 - v78)) > 100.0) {
      v79 = v77 < v78;
    }
    if (v79) {
      v80 = v72;
      do {
        v81 = v80 - 8;
        *(__int64*)((char*)a1 + v80) = v76;
        if (v80 == 8) {
          v74 = a1;
          goto LABEL_73;
        }
        v82 = *(float*)(v75 + 40);
        v76 = *(__int64*)((char*)a1 + v80 - 16);
        v83 = *(float*)(v76 + 40);
        v84 = v82 < v83;
        if ((float)((float)(v82 - v83) * (float)(v82 - v83)) <= 100.0) {
          v84 = *(float*)(v75 + 32) < *(float*)(v76 + 32);
        }
        v80 -= 8;
      } while (v84);
      v74 = (__int64*)((char*)a1 + v81);
    LABEL_73:
      ++v73;
      *v74 = v75;
      if (v73 == 8) {
        return v71 + 1 == a2;
      }
    }
    v31 = v71++;
    v72 += 8;
    if (v71 == a2) {
      return true;
    }
  }
}

_QWORD* SpotMgr_133acc0(__int64 a1, __int64* a2, _QWORD** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD** v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  float v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 primeEm;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;

  v4 = *a2;
  v52 = *a2;
  v7 = std___1___hash_memory_alt1((__int64)&v52, 8u);
  v8 = *(_QWORD*)(a1 + 8);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = result[1];
            if (v14 == v9) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = result[1];
          if (v13 == v9) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a3;
  *result = 0;
  result[1] = v9;
  v17 = *(float*)(a1 + 32);
  result[2] = *v16;
  result[3] = 0;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v8 == 0 || (float)(v17 * (float)v8) < v18) {
    v19 = v18 / v17;
    v20 = true;
    if (v8 >= 3) {
      v20 = (v8 & (v8 - 1)) != 0;
    }
    v21 = v20 | (2 * v8);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      primeEm = v22;
    }
    else {
      primeEm = v21;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime_alt1(primeEm);
      result = v24;
      v8 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      v31 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v44 = result;
        v31 = std___1___next_prime_alt1(v31);
        result = v44;
      }
      else {
        v32 = 1LL << (-(char)__clz(v31 - 1) & 63);
        if (v31 >= 2) {
          v31 = v32;
        }
      }
      if (primeEm <= v31) {
        primeEm = v31;
      }
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v45 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v45 != 0) {
          v46 = result;
          v47 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(*v15 + v47, v45);
          result = v46;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt2();
    }
    v25 = result;
    v26 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * primeEm, 16, 0);
    v27 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v26;
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*v15 + v28, v27);
    }
    v29 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v30 = 0;
      result = v25;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 48) = 0;
        v33 = *(_QWORD*)a1 + 8 * v30;
        v30 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v30);
    }
    else {
      v30 = 0;
      result = v25;
    }
    if ((primeEm & 7) != 0) {
      v34 = 8 * v30;
      do {
        --v29;
        *(_QWORD*)(*(_QWORD*)a1 + v34) = 0;
        v34 += 8;
      } while (v29 != 0);
    }
    v36 = a1 + 16;
    v35 = *(_QWORD**)(a1 + 16);
    if (v35 != nullptr) {
      v37 = v35[1];
      v38 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v37 >= primeEm) {
          v37 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v37) = v36;
        v39 = (_QWORD*)*v35;
        if (*v35 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v40 = v39[1];
          if (v40 >= primeEm) {
            v40 %= primeEm;
          }
          if (v40 != v37) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v40) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
              goto LABEL_60;
            }
            *v35 = *v39;
            *v39 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v40);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v40) = v39;
            v39 = v35;
          }
          v40 = v37;
        LABEL_60:
          v35 = v39;
          v39 = (_QWORD*)*v39;
          v37 = v40;
          if (v39 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v41 = v37 & v38;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
      while (1) {
        v42 = (_QWORD*)*v35;
        if (*v35 == 0) {
          break;
        }
        v43 = v42[1] & v38;
        if (v43 == v41) {
          v35 = (_QWORD*)*v35;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) != 0) {
          *v35 = *v42;
          *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v35;
          v35 = v42;
          v41 = v43;
        }
      }
    }
  LABEL_83:
    v8 = *(_QWORD*)(a1 + 8);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v48 = *(_QWORD*)a1;
  v49 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v49 != nullptr) {
    *result = *v49;
    *v49 = result;
  }
  else {
    v50 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v50;
    *(_QWORD*)(v48 + 8 * v3) = a1 + 16;
    if (*result != 0) {
      v51 = *(_QWORD*)(*result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v51 >= v8) {
          v51 %= v8;
        }
      }
      else {
        v51 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

void game_gmap_SpotMgr_CalcExcludedDisposSpot_lambda0_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 v4;
  int v5;
  unsigned int*** v6;
  unsigned int*** v7;
  unsigned int** v8;
  unsigned int** v9;
  unsigned int* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v21;
  char* v22[3];
  char* v23[3];
  _QWORD v24[3];

  v2 = *a2;
  if ((GameHr_1328460(*a2) & 1) == 0 && (Impl_132a360_alt1(v2) & 1) == 0) {
    return;
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(unsigned int****)(v4 + 8);
  v7 = *(unsigned int****)(v4 + 16);
  if (v5 < 0) {
    for (; v6 != v7; ++v6) {
      v8 = *v6;
      if ((*v6)[12] == nullptr && v8[69] == nullptr) {
        goto LABEL_13;
      }
    }
  }
  else if (v6 != v7) {
    while (1) {
      v9 = *v6++;
      v8 = v9;
      if (*((_DWORD*)v9 + 21) == v5) {
        break;
      }
      if (v6 == v7) {
        goto LABEL_9;
      }
    }
  LABEL_13:
    v10 = *v8;
    goto LABEL_14;
  }
LABEL_9:
  v10 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
LABEL_14:
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  v13 = *(_DWORD*)(a1 + 16);
  v14 = v12;
  *(_QWORD*)v12 = v10;
  *(_QWORD*)(v12 + 8) = v2;
  v23[0] = (char*)v12;
  memset(v22, 0, sizeof(v22));
  v23[1] = (char*)(v12 + 16);
  v23[2] = (char*)(v12 + 16);
  SpotMgr_13306e0((void*)((char**)v24), v23, v13, v22);
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v11 + v15, v14);
  v16 = v24[0];
  v17 = v24[1] - v24[0];
  if (v24[1] != v24[0]) {
    v18 = *(__int64**)(a1 + 8);
    v19 = v18[1] - *v18;
    if (v19 == 0 || v17 < v19) {
      GameRoutine_888970_alt1(v18, v24[0], v24[1], v17 >> 3);
    }
  }
  if (v16 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v11 + v21, v16);
  }
}

void game_gmap_SpotMgr_GetAroundSpot_lambda0_Invoke(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  if (((*a2)[68] & 0x10) != 0) {
    return;
  }
  v2 = *(__int64**)(a1 + 8);
  v3 = **a2;
  v4 = *v2;
  v5 = (_QWORD*)v2[1];
  v6 = (_QWORD*)*v2;
  if ((_QWORD*)*v2 == v5) {
    goto LABEL_18;
  }
  v7 = (unsigned __int64)v5 - v4 - 8;
  v6 = (_QWORD*)*v2;
  if ((~(_BYTE)v7 & 0x18) != 0) {
    v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
    v6 = (_QWORD*)*v2;
    while (*v6 != v3) {
      ++v6;
      if (--v8 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v6 != v5) {
      return;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v7 >= 0x18) {
    v6 += 2;
    while (1) {
      if (*(v6 - 2) == v3) {
        v6 -= 2;
        goto LABEL_18;
      }
      if (*(v6 - 1) == v3) {
        --v6;
        goto LABEL_18;
      }
      if (*v6 == v3) {
        goto LABEL_18;
      }
      if (v6[1] == v3) {
        break;
      }
      v9 = v6 + 2;
      v6 += 4;
      if (v9 == v5) {
        goto LABEL_19;
      }
    }
    ++v6;
    goto LABEL_18;
  }
LABEL_19:
  v10 = v2[2];
  if ((unsigned __int64)v5 >= v10) {
    v12 = (char*)v5 - v4;
    v13 = ((__int64)v5 - v4) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_8875e0_alt1();
    }
    v15 = v10 - v4;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210_alt2();
      }
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v17;
    v20 = (unsigned __int64)v5 - v4;
    v21 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v3;
    v11 = (__int64)&v12[v18 + 8];
    memcpy_alt1(v21, v4, v20);
    *v2 = v21;
    v2[1] = v11;
    v2[2] = v19;
    if (v4 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*(_QWORD*)v16 + v22, v4);
    }
  }
  else {
    *v5 = v3;
    v11 = (__int64)(v5 + 1);
  }
  v2[1] = v11;
}

void game_gmap_SpotMgr_TryPlayAppearAnimal_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int16* v5;
  __int16* v6;
  __int64 v7;
  __int64 v8;
  __int16* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  struct {
    char gap0_[4];
    _BYTE v24[12];
    _QWORD* v25;
    _QWORD* v26;
    _QWORD* v27;
    _QWORD* v28;
    __int64 vars0;
    __int64 vars8;
  } v24_;

  v2 = *a2;
  v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  v6 = *(__int16**)(v2 + 280);
  if (((__int64)v5[1] << 24) + ((__int64)*v5 << 32) + ((__int64)v5[2] << 18) +
          ((__int64)v5[3] << 12) + ((__int64)v5[4] << 6) + v5[5] >=
      (unsigned __int64)(((__int64)v6[5] << 24) + ((__int64)v6[4] << 32) +
                         ((__int64)v6[6] << 18) + ((__int64)v6[7] << 12) +
                         ((__int64)v6[8] << 6) + v6[9])) {
    if ((*(unsigned __int8 (**)(__int16*))(*(_QWORD*)v6 + 24LL))(v6) == 1) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
          *(_QWORD*)(v2 + 280));
    }
    v7 = *(_QWORD*)(v2 + 280);
    v8 = *(_QWORD*)(v7 + 8);
    *(_DWORD*)&v24_.v24[8] = *(_DWORD*)(v7 + 16);
    *(_QWORD*)v24_.v24 = v8;
    v9 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                        ? game_gmap_GmapClock_instance_ + 8
                        : v4);
    if ((int)Dir_70df40_alt1((__int16*)v24_.v24, v9) < 360) {
      v10 = v24_.vars8;
      v11 = v24_.v25;
      v12 = v24_.v26;
      ++**(_DWORD**)(a1 + 16);
      v13 = *(_QWORD*)(a1 + 8);
      if (v2 != 0) {
        v24_.v27 = v11;
        v24_.v28 = v12;
        v24_.vars0 = v10;
        v14 = *(_QWORD*)(GameData_21c96e8 + 8);
        v15 = *(_QWORD**)(v14 + 8);
        v16 = *(_QWORD**)(v14 + 16);
        while (v15 != v16) {
          v17 = (_QWORD*)*v15;
          if (*(_QWORD*)*v15 == v2 && v17[12] == 0) {
            v18 = v17[69];
            if (v18 != 0 && v17[13] == 0 &&
                *((__int16*)v17 + 321) * *((__int16*)v17 + 320) *
                        *((__int16*)v17 + 322) ==
                    0 &&
                *(_QWORD*)(v18 + 352) != 0) {
              v19 = v13;
              v20 = (__int64*)fw_memory_g_heap_manager_ptr;
              v21 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              *(_QWORD*)&v24_.v24[4] = v21;
              *v21 = v17;
              v24_.v25 = v21 + 1;
              v24_.v26 = v21 + 1;
              GameHr_14b4b70(v19, 3u, (__int64)&v24_.v24[4]);
              if (*(_QWORD*)&v24_.v24[4] != 0) {
                v22 = *v20;
                v24_.v25 = *(_QWORD**)&v24_.v24[4];
                v23 = 128;
                if (*(_QWORD*)(v22 + 200) == 0) {
                  v23 = 56;
                }
                nn_mem_StandardAllocator_Free_alt4(v22 + v23,
                                                   *(__int64*)&v24_.v24[4]);
              }
              return;
            }
          }
          ++v15;
        }
      }
    }
  }
}

__int64 game_gmap_SpotMgr_EachSpotAttachment_lambda0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 24LL))(
      *(_QWORD*)(v2 + 280));
  if (*(unsigned __int8*)(a1 + 16) == (unsigned __int8)result) {
    v5 = *(_QWORD*)(a1 + 64);
    v6 = v2;
    if (v5 == 0) {
      GameRoutine_60a310_alt1();
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v6);
  }
  return result;
}

__int64 game_gmap_SpotMgr_CheckWrongAttachment_lambda0_Invoke(__int64 a1,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 result;
  int v5;

  v2 = *a2;
  result = *(_QWORD*)(*a2 + 280);
  if (result != 0) {
    v5 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    result = *(_QWORD*)(v2 + 280);
    if (v5 == 1) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 112LL))(result);
      if ((result & 1) != 0) {
        return result;
      }
      result = *(_QWORD*)(v2 + 280);
    }
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 104LL))(result);
      if ((result & 1) != 0) {
        result = *(_QWORD*)(v2 + 280);
        if (result != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
          *(_QWORD*)(v2 + 280) = 0;
        }
        ++**(_DWORD**)(a1 + 8);
      }
    }
  }
  return result;
}

__int64 game_gmap_SpotMgr_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
          *(_QWORD*)(*a2 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
        *(_QWORD*)(v2 + 280));
  }
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 224LL))(
      *(_QWORD*)(v2 + 280));
}

#pragma GCC visibility pop
