#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* GameRoutine_e08ca0(__int64, __int64);
_QWORD* GameRoutine_e5d5a0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_53b30(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_d33900(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__int64* AnimCtrlModule_a78450(__int64* result, _DWORD*);
__int64* GameRoutine_e08050(__int64*, __int64);
__int64* Manager_bc6460(float*, float32x4_t*, char);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_hub_e023c0(__int64, __int64, unsigned __int64);
__int64 CharacterModel_cf5c00(__int64);
__int64 GameRoutine_1365140();
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_1551d30();
__int64 GameRoutine_188d6d0();
__int64 GameRoutine_18fa160(__int64, __int64, int);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_5de60(_QWORD*, __int64);
__int64 GameRoutine_5fc550(__int64 result, __int64, __int64);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 GameRoutine_9c7480(__int64*, __int64);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b036a0(__int64 result, __int64, unsigned __int64, __int64*);
__int64 GameRoutine_c8b2d0();
__int64 GameRoutine_c8b2f0();
__int64 GameRoutine_d740c0(__int64, int*);
__int64 GameRoutine_d747c0(__int64 result, float*, int, int*, float);
__int64 GameRoutine_d75460(void);
__int64 GameRoutine_da89c0(__int64 result, unsigned __int64*, __int64, char);
__int64 GameRoutine_db0fa0(_QWORD, _QWORD);
__int64 GameRoutine_de7640(_QWORD, _QWORD);
__int64 GameRoutine_e08ae0(_QWORD, _QWORD);
__int64 GameRoutine_e0a200(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ede500(__int64);
__int64 GameRoutine_f56210(__int64 result, __int64, int);
__int64 GameRoutine_fb1b40(_QWORD);
__int64 GameRoutine_ffd760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 ProcHubSeqEnter_918ce0(__int64*, __int64);
__int64 Registration_a4f6c0(_QWORD, _QWORD);
__int64 Registration_a4f800(_QWORD, _QWORD, _QWORD);
__int64 Registration_a4fa80(_QWORD, _QWORD, _QWORD);
__int64 TimelineFile_890160(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_Unit_IsImmobile(__int64);
__int64 game_character_1084940(__int64 result, char, float);
__int64 game_zview_cf22c0(__int64, __int64, char);
__int64 gxc_RegisterHeap(__int64, unsigned __int64);
__int64 gxc_SetAllocator_5f5b0(__int64 result, void*, void*, void*, void*);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 strtol(_QWORD, _QWORD, _QWORD);
__n128 CmdbtlPartyNatives_eb8c40(__int64);
__n128 GameRoutine_f56340(__int64, int);
__n128 nn_mem_StandardAllocator_Free_alt3(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_mem_StandardAllocator_Free_alt4(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool game_e2aae0(__int64, __int64);
bool game_f8f140(float32x4_t*, float*);
char** GameRoutine_6f4cd0(char** result, __int64, __int64, unsigned __int64);
char* game_b038e0(char* result, char*, char*, __int64, __int64, __int64,
                  __int64);
double GameRoutine_1551dc0();
extern _BYTE GameData_1b8b610[9];
extern _DWORD* GameData_212d168;
extern _DWORD GameData_1b01468[8];
extern _UNKNOWN* GameData_1f9caf8;
extern _UNKNOWN* GameData_1fdf520;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN GameData_1a86629;
extern _UNKNOWN GameData_1a8d5bb;
extern _UNKNOWN GameData_1a8d5d7;
extern _UNKNOWN GameData_1a90f08;
extern _UNKNOWN GameData_1a90f7c;
extern _UNKNOWN GameData_1a98ef9;
extern _UNKNOWN GameData_1a98f0c;
extern _UNKNOWN GameData_1a9cbdd;
extern _UNKNOWN GameData_1aa0b8d;
extern _UNKNOWN GameData_1aa0ba9;
extern _UNKNOWN GameData_1aa0bc5;
extern _UNKNOWN GameData_1aa4962;
extern _UNKNOWN GameData_1aa8505;
extern _UNKNOWN GameData_1aa8657;
extern _UNKNOWN GameData_1aa8670;
extern _UNKNOWN GameData_1aa8683;
extern _UNKNOWN GameData_1aabf6c;
extern _UNKNOWN GameData_1ab010c;
extern _UNKNOWN GameData_1ab3d52;
extern _UNKNOWN GameData_1ab3d6e;
extern _UNKNOWN GameData_1ab7f34;
extern _UNKNOWN GameData_1abbd90;
extern _UNKNOWN GameData_1abf89f;
extern _UNKNOWN GameData_1ac32ae;
extern _UNKNOWN GameData_1ac32c7;
extern _UNKNOWN GameData_1ac6c6f;
extern _UNKNOWN GameData_1acadc0;
extern _UNKNOWN GameData_1acaddc;
extern _UNKNOWN GameData_1ad2bad;
extern _UNKNOWN GameData_1ad2bc9;
extern _UNKNOWN GameData_1ad653b;
extern _UNKNOWN GameData_1ada442;
extern _UNKNOWN GameData_1ada6c8;
extern _UNKNOWN GameData_1ada6e7;
extern _UNKNOWN GameData_1ada706;
extern _UNKNOWN GameData_1ae5b45;
extern _UNKNOWN GameData_1ae5b58;
extern _UNKNOWN GameData_1af15ae;
extern _UNKNOWN GameData_1af15c7;
extern _UNKNOWN GameData_1af15e0;
extern _UNKNOWN GameData_1af4ee0;
extern _UNKNOWN GameData_1af9188;
extern _UNKNOWN GameData_1afcfd4;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_21f53c8;
extern _UNKNOWN GameData_21f53e8;
extern _UNKNOWN GameData_21f92c8;
extern _UNKNOWN GameData_22110b8;
extern _UNKNOWN GameData_2216780;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82bc0;
extern __int128 GameData_1a82fc0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a832c0;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a836b0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_1fe3458[])();
extern __int64 (*GameData_1fe3a00[14])();
extern __int64 (*GameData_1fe3a38[7])();
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*ui_Event_vtable[])();
extern __int64* GameData_212d448[9];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d890[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212e740[2];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ee30[4];
extern __int64* GameData_212eec0[4];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c408;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7e0[5];
extern __int64 GameData_212d028[4];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc08;
extern __int64 GameData_212dc20;
extern __int64 GameData_212e438;
extern __int64 GameData_21c9608;
extern __int64 GameData_21ca300;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f53a8;
extern __int64 GameData_21f53b0;
extern __int64 GameData_21f53b8;
extern __int64 GameData_21f53c0;
extern __int64 GameData_21f53d0;
extern __int64 GameData_21f53d8;
extern __int64 GameData_21f53e0;
extern __int64 GameData_21f8578;
extern __int64 GameData_21f8580;
extern __int64 GameData_21f8588;
extern __int64 GameData_21f8590;
extern __int64 GameData_21f8598;
extern __int64 GameData_21f85a0;
extern __int64 GameData_21f85a8;
extern __int64 GameData_21f85b0;
extern __int64 GameData_21f85b8;
extern __int64 GameData_21f85c0;
extern __int64 GameData_21f85c8;
extern __int64 GameData_21f85d0;
extern __int64 GameData_21f85d8;
extern __int64 GameData_21f85e0;
extern __int64 GameData_21f85e8;
extern __int64 GameData_21f8980;
extern __int64 GameData_21f8980_alt1[] __asm__("GameData_21f8980");
extern __int64 GameData_21f8988;
extern __int64 GameData_21f8990;
extern __int64 GameData_21f8998;
extern __int64 GameData_21f89a8;
extern __int64 GameData_21f89b0;
extern __int64 GameData_21f89b8;
extern __int64 GameData_21f89c0;
extern __int64 GameData_21f89d0;
extern __int64 GameData_21f89d8;
extern __int64 GameData_21f89e0;
extern __int64 GameData_21f89e8;
extern __int64 GameData_21f89f8;
extern __int64 GameData_21f8a00;
extern __int64 GameData_21f8a08;
extern __int64 GameData_21f8a10;
extern __int64 GameData_21f8a20;
extern __int64 GameData_21f8a28;
extern __int64 GameData_21f8a30;
extern __int64 GameData_21f8a38;
extern __int64 GameData_21f8a48;
extern __int64 GameData_21f8a50;
extern __int64 GameData_21f8a58;
extern __int64 GameData_21f8a60;
extern __int64 GameData_21f8a70;
extern __int64 GameData_21f8a78;
extern __int64 GameData_21f8a80;
extern __int64 GameData_21f8a88;
extern __int64 GameData_21f8a98;
extern __int64 GameData_21f8aa0;
extern __int64 GameData_21f8aa8;
extern __int64 GameData_21f8ab0;
extern __int64 GameData_21f8ac0;
extern __int64 GameData_21f8ac8;
extern __int64 GameData_21f8ad0;
extern __int64 GameData_21f8ad8;
extern __int64 GameData_21f8ae8;
extern __int64 GameData_21f8af0;
extern __int64 GameData_21f8af8;
extern __int64 GameData_21f8b00;
extern __int64 GameData_21f8b10;
extern __int64 GameData_21f8b18;
extern __int64 GameData_21f8b20;
extern __int64 GameData_21f8b28;
extern __int64 GameData_21f8b38;
extern __int64 GameData_21f8b40;
extern __int64 GameData_21f8b48;
extern __int64 GameData_21f8b50;
extern __int64 GameData_21f8b60;
extern __int64 GameData_21f8b68;
extern __int64 GameData_21f8b70;
extern __int64 GameData_21f8b78;
extern __int64 GameData_21f8b88;
extern __int64 GameData_21f8b90;
extern __int64 GameData_21f8b98;
extern __int64 GameData_21f8ba0;
extern __int64 GameData_21f8bb0;
extern __int64 GameData_21f8bb8;
extern __int64 GameData_21f8bc0;
extern __int64 GameData_21f8bc8;
extern __int64 GameData_21f8bd8;
extern __int64 GameData_21f8be0;
extern __int64 GameData_21f8be8;
extern __int64 GameData_21f8bf0;
extern __int64 GameData_21f8c00;
extern __int64 GameData_21f8c08;
extern __int64 GameData_21f8c10;
extern __int64 GameData_21f8c18;
extern __int64 GameData_21f8c28;
extern __int64 GameData_21f8c30;
extern __int64 GameData_21f8c38;
extern __int64 GameData_21f8c40;
extern __int64 GameData_21f8c50;
extern __int64 GameData_21f8c58;
extern __int64 GameData_21f8c60;
extern __int64 GameData_21f8c68;
extern __int64 GameData_21f8c78;
extern __int64 GameData_21f8c80;
extern __int64 GameData_21f8c88;
extern __int64 GameData_21f8c90;
extern __int64 GameData_21f8ca0;
extern __int64 GameData_21f8ca8;
extern __int64 GameData_21f8cb0;
extern __int64 GameData_21f8cb8;
extern __int64 GameData_21f8cc8;
extern __int64 GameData_21f8cd0;
extern __int64 GameData_21f8cd8;
extern __int64 GameData_21f8ce0;
extern __int64 GameData_21f8cf0;
extern __int64 GameData_21f8cf8;
extern __int64 GameData_21f8d00;
extern __int64 GameData_21f8d08;
extern __int64 GameData_21f8d18;
extern __int64 GameData_21f8d20;
extern __int64 GameData_21f8d28;
extern __int64 GameData_21f8d30;
extern __int64 GameData_21f8d40;
extern __int64 GameData_21f8d48;
extern __int64 GameData_21f8d50;
extern __int64 GameData_21f8d58;
extern __int64 GameData_21f8d68;
extern __int64 GameData_21f8d70;
extern __int64 GameData_21f8d78;
extern __int64 GameData_21f8d80;
extern __int64 GameData_21f8d90;
extern __int64 GameData_21f8d98;
extern __int64 GameData_21f8da0;
extern __int64 GameData_21f8da8;
extern __int64 GameData_21f8db8;
extern __int64 GameData_21f8dc0;
extern __int64 GameData_21f8dc8;
extern __int64 GameData_21f8dd0;
extern __int64 GameData_21f8de0;
extern __int64 GameData_21f8de8;
extern __int64 GameData_21f8df0;
extern __int64 GameData_21f8df8;
extern __int64 GameData_21f8e08;
extern __int64 GameData_21f8e10;
extern __int64 GameData_21f8e18;
extern __int64 GameData_21f8e20;
extern __int64 GameData_21f8e30;
extern __int64 GameData_21f8e38;
extern __int64 GameData_21f8e40;
extern __int64 GameData_21f8e48;
extern __int64 GameData_21f8e58;
extern __int64 GameData_21f8e60;
extern __int64 GameData_21f8e68;
extern __int64 GameData_21f8e70;
extern __int64 GameData_21f8e80;
extern __int64 GameData_21f8e88;
extern __int64 GameData_21f8e90;
extern __int64 GameData_21f8e98;
extern __int64 GameData_21f8ea8;
extern __int64 GameData_21f8eb0;
extern __int64 GameData_21f8eb8;
extern __int64 GameData_21f8ec0;
extern __int64 GameData_21f8ed0;
extern __int64 GameData_21f8ed8;
extern __int64 GameData_21f8ee0;
extern __int64 GameData_21f8ee8;
extern __int64 GameData_21f8ef8;
extern __int64 GameData_21f8f00;
extern __int64 GameData_21f8f08;
extern __int64 GameData_21f8f10;
extern __int64 GameData_21f8f20;
extern __int64 GameData_21f8f28;
extern __int64 GameData_21f8f30;
extern __int64 GameData_21f8f38;
extern __int64 GameData_21f8f48;
extern __int64 GameData_21f8f50;
extern __int64 GameData_21f8f58;
extern __int64 GameData_21f8f60;
extern __int64 GameData_21f8f68;
extern __int64 GameData_21f8f70;
extern __int64 GameData_21f8f78;
extern __int64 GameData_21f8f88;
extern __int64 GameData_21f8f90;
extern __int64 GameData_21f8f98;
extern __int64 GameData_21f8fa0;
extern __int64 GameData_21f8fa8;
extern __int64 GameData_21f8fb0;
extern __int64 GameData_21f8fb8;
extern __int64 GameData_21f8fc8;
extern __int64 GameData_21f8fd0;
extern __int64 GameData_21f8fd8;
extern __int64 GameData_21f8fe0;
extern __int64 GameData_21f8fe8;
extern __int64 GameData_21f8ff0;
extern __int64 GameData_21f8ff8;
extern __int64 GameData_21f9008;
extern __int64 GameData_21f9010;
extern __int64 GameData_21f9018;
extern __int64 GameData_21f9020;
extern __int64 GameData_21f9060;
extern __int64 GameData_21f9068;
extern __int64 GameData_21f9070;
extern __int64 GameData_21f9078;
extern __int64 GameData_21f9088[];
extern __int64 GameData_21f9090;
extern __int64 GameData_21f9098;
extern __int64 GameData_21f90a0;
extern __int64 GameData_21f90a8;
extern __int64 GameData_21f90b0;
extern __int64 GameData_21f90b8;
extern __int64 GameData_21f90c0;
extern __int64 GameData_21f90c8;
extern __int64 GameData_21f90d0;
extern __int64 GameData_21f90d8;
extern __int64 GameData_21f90e0;
extern __int64 GameData_21f90e8;
extern __int64 GameData_21f90f0;
extern __int64 GameData_21f90f8;
extern __int64 GameData_21f9100;
extern __int64 GameData_21f9108;
extern __int64 GameData_21f9110;
extern __int64 GameData_21f9118;
extern __int64 GameData_21f9120;
extern __int64 GameData_21f9128;
extern __int64 GameData_21f9130;
extern __int64 GameData_21f9138;
extern __int64 GameData_21f9140;
extern __int64 GameData_21f9148;
extern __int64 GameData_21f9150;
extern __int64 GameData_21f9158;
extern __int64 GameData_21f9160;
extern __int64 GameData_21f9168;
extern __int64 GameData_21f9170;
extern __int64 GameData_21f9178;
extern __int64 GameData_21f9180;
extern __int64 GameData_21f9188;
extern __int64 GameData_21f9190;
extern __int64 GameData_21f9198;
extern __int64 GameData_21f91a0;
extern __int64 GameData_21f91a8;
extern __int64 GameData_21f91b0;
extern __int64 GameData_21f91b8;
extern __int64 GameData_21f91c0;
extern __int64 GameData_21f91c8;
extern __int64 GameData_21f91d0;
extern __int64 GameData_21f91d8;
extern __int64 GameData_21f91e0;
extern __int64 GameData_21f91e8;
extern __int64 GameData_21f91f0;
extern __int64 GameData_21f91f8;
extern __int64 GameData_21f9200;
extern __int64 GameData_21f9208;
extern __int64 GameData_21f9210;
extern __int64 GameData_21f9218;
extern __int64 GameData_21f9220;
extern __int64 GameData_21f9228;
extern __int64 GameData_21f9230;
extern __int64 GameData_21f9238;
extern __int64 GameData_21f9240;
extern __int64 GameData_21f9248;
extern __int64 GameData_21f9250;
extern __int64 GameData_21f9258;
extern __int64 GameData_21f9260;
extern __int64 GameData_21f9268;
extern __int64 GameData_21f9270;
extern __int64 GameData_21f9278;
extern __int64 GameData_21f9280;
extern __int64 GameData_21f9288;
extern __int64 GameData_21f9290;
extern __int64 GameData_21f9298;
extern __int64 GameData_21f92a0;
extern __int64 GameData_21f92a8;
extern __int64 GameData_21f92b0;
extern __int64 GameData_21f92b8;
extern __int64 GameData_21f92c0;
extern __int64 GameData_220f870;
extern __int64 GameData_220f950;
extern __int64 GameData_22110ac;
extern __int64 GameData_22127a8;
extern __int64 GameData_22167c8;
extern __int64 GameData_22167d0;
extern __int64 GameData_2216820;
extern __int64 GameData_221a540;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_212dc00;
extern char* GameData_212dc10[2];
extern char* GameData_212dc18;
extern char* GameData_216f630[2];
extern char* GameData_216f638;
extern char** GameData_212fbf8;
extern char GameData_1a9f09e;
extern char GameData_1b52964[18];
extern char GameData_2216858;
extern int GameData_21f8570;
extern int GameData_21f89a0;
extern int GameData_21f89c8;
extern int GameData_21f89f0;
extern int GameData_21f8a18;
extern int GameData_21f8a40;
extern int GameData_21f8a68;
extern int GameData_21f8a90;
extern int GameData_21f8ab8;
extern int GameData_21f8ae0;
extern int GameData_21f8b08;
extern int GameData_21f8b30;
extern int GameData_21f8b58;
extern int GameData_21f8b80;
extern int GameData_21f8ba8;
extern int GameData_21f8bd0;
extern int GameData_21f8bf8;
extern int GameData_21f8c20;
extern int GameData_21f8c48;
extern int GameData_21f8c70;
extern int GameData_21f8c98;
extern int GameData_21f8cc0;
extern int GameData_21f8ce8;
extern int GameData_21f8d10;
extern int GameData_21f8d38;
extern int GameData_21f8d60;
extern int GameData_21f8d88;
extern int GameData_21f8db0;
extern int GameData_21f8dd8;
extern int GameData_21f8e00;
extern int GameData_21f8e28;
extern int GameData_21f8e50;
extern int GameData_21f8e78;
extern int GameData_21f8ea0;
extern int GameData_21f8ec8;
extern int GameData_21f8ef0;
extern int GameData_21f8f18;
extern int GameData_21f8f40;
extern int GameData_21f8f80;
extern int GameData_21f8fc0;
extern int GameData_21f9000;
extern int GameData_21f9028;
extern int GameData_21f9080;
extern int GameData_22167bc;
extern int GameData_22167c0;
float** GameRoutine_d72160(float** result, float**, float**, float**, float**);
float GameRoutine_1551e60();
float atan2f(long double, float);
float fmodf(float, float);
float game_ede020(_QWORD*);
float powf(float, float);
void CharacterRotate_d50de0(__int64);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_a7fed0(float32x4_t*, __int64, __int64, float, float);
void GameRoutine_d39b90(int8x8_t*, _QWORD*, float);
void GameRoutine_dfa900(__int64);
void GameRoutine_e08260(__int64, __int64*, unsigned __int16*);
void GameRoutine_e7fc40(__int64, char);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(_QWORD);
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn)) GameRoutine_6e5c60(void);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void __attribute__((noreturn)) GameRoutine_d75440(void);
void __attribute__((noreturn)) GameRoutine_da89a0();
void __attribute__((noreturn)) GameRoutine_da96a0();
void __attribute__((noreturn)) GameRoutine_e01f60();
void __attribute__((noreturn)) GameRoutine_e0a1e0(void);
void __attribute__((noreturn)) GameRoutine_e876f0(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230(void);
void game_ede740(float32x4_t*);
void game_hub_e08150(__int64, __int64, _QWORD*);
void game_zview_d12d30(__int64 result, int32x2_t*, char);
void wld_a7fda0(__int64, _DWORD*);
__attribute__((swiftcall)) void game_9a64e0(PSEUDO_X8 x8_, __int64* result);
__int64* game_9a6e00();
__attribute__((swiftcall)) void game_9c5fd0(PSEUDO_X8 x8_, char** result,
                                            int a2);
__int64 game_9e58c0();
__int64 game_9e63a0(unsigned __int8 a1, unsigned __int64* a2);
__int64 game_9e65a0(unsigned __int8 a1, unsigned __int64* a2);
__int64* game_9e68c0(unsigned __int8 a1);
__attribute__((swiftcall)) void game_ae0a80(PSEUDO_X8 x8_, __int64 result,
                                            _DWORD* a2);
__int64 game_ae25e0_alt1(__int64 a1, _DWORD* a2,
                         __int64 a3) __asm__("game_ae25e0");
char* game_b03480(char* result, char* a2, unsigned __int64 a3, __int64* a4,
                  __int64 a5);
__int64 game_c8a5a0(int* a1);
__int64 game_c8a9c0(__int64 a1);
__int64* game_c8ad60(__int64* result, __int64 a2);
__attribute__((swiftcall)) void game_c8ae20(PSEUDO_X8 x8_, __int64* a1,
                                            __int64 a2);
__int64 game_c8b000(__int64 a1, __int64* a2, char a3);
void game_d39920(float32x4_t* a1);
void game_d523c0(__int64 a1);
void game_d60410(__int64 a1);
void game_d60670(__int64 a1, int a2, char a3, float a4);
__int64 game_d71720(__int64 result, float** a2, __int64 a3, char a4);
bool game_d722e0(float** a1, float** a2);
bool game_d74600(float* a1, float* a2, int* a3, float a4);
__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8 x8_, float* a1);
__attribute__((swiftcall)) void game_d75140(PSEUDO_X8 x8_, __int64 a1, int a2);
__attribute__((swiftcall)) void game_d8f820(PSEUDO_X8 x8_, __int64 result);
__attribute__((swiftcall)) void game_d8fea0(PSEUDO_X8 x8_, __int64 result,
                                            __int64* a2);
__attribute__((swiftcall)) void
game_d90540(PSEUDO_X8 x8_, unsigned __int8* result, unsigned __int8** a2);
float game_d96860(_QWORD* a1, float* a2, float a3);
__int64 game_da7a40(__int64 a1, float32x4_t* a2);
void game_da7be0(_QWORD* a1);
__attribute__((swiftcall)) void game_db1110(PSEUDO_X8 x8_, unsigned int a1);
__attribute__((swiftcall)) void
game_db11d0_alt1(PSEUDO_X8 x8_, unsigned __int64 result,
                 __int64 a2) __asm__("game_db11d0");
__attribute__((swiftcall)) void game_db1400(PSEUDO_X8 x8_, char* a1,
                                            __int64 a2);
__attribute__((swiftcall)) void
game_db1620(PSEUDO_X8 x8_, unsigned __int64 result, __int64 a2);
__int64 game_dbca90(__int64 a1);
__int64 game_dbe360();
__attribute__((swiftcall)) void game_dc0960(PSEUDO_X8 x8_, __int64 a1);
__int64 game_de7380(__int64 a1, unsigned __int8 a2, int a3, unsigned int a4);
__attribute__((swiftcall)) void game_de7500(PSEUDO_X8 x8_, __int64 result);
__int64 game_e085c0(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_e087a0(PSEUDO_X8 x8_, __int64 result);
__int64 game_e095a0(__int64 a1);
__attribute__((swiftcall)) void
game_e15460(PSEUDO_X8 x8_, unsigned __int8* result, __int64* a2);
__attribute__((swiftcall)) void game_e15680(PSEUDO_X8 x8_, char* result,
                                            __int64* a2);
__attribute__((swiftcall)) void game_e15880(PSEUDO_X8 x8_, __int64 result,
                                            __int64* a2);
void game_e1e5e0_alt1(__int64** a1, _DWORD* a2) __asm__("game_e1e5e0");
__int64 game_e2acc0(__int64 a1, __int64 a2);
__n128 game_e5d040(_QWORD* a1, char* a2);
__n128 game_e5d200_alt1(_QWORD* a1, __int64 a2) __asm__("game_e5d200");
__attribute__((swiftcall)) void game_e5d7a0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            int a1);
__attribute__((swiftcall)) void game_e5d930(PSEUDO_X8 x8_, float a2);
__n128 game_e5fc30(__int64 a1);
__n128 game_e61f00_alt1(__int64 a1) __asm__("game_e61f00");
__n128 game_e62290();
bool game_e81260(__int64 a1);
void game_e81600(__int64 a1, _QWORD* a2, char a3);
__int64 game_e81a10(__int64 result);
__n128 game_e84360_alt1(__int64 a1, _DWORD* a2) __asm__("game_e84360");
__attribute__((swiftcall)) void game_e84680(PSEUDO_X8 x8_, __int64 a1);
__int64* game_ea3620(__int64* result, char a2, int a3);
float game_eac260(__int64* a1, _DWORD* a2, float* a3);
__int64* game_eac2e0(__int64** a1, __int64* a2, __int64* a3);
void __attribute__((noreturn)) GameRoutine_9ddeb0();
char** game_9ddae0_alt1(char** result,
                        unsigned __int64 a2) __asm__("game_9ddae0");
_QWORD* GameHr_e5d5a0(_QWORD*, _QWORD*);
__int64* Manager_bc6460_alt1(_QWORD*, float32x4_t*,
                             char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
_QWORD* game_e5d200(_QWORD* a1, __int64 a2);
__int64* Registration_a4f800_alt1(_QWORD*, const char*,
                                  int) __asm__("Registration_a4f800");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 Registration_a4fa80_alt1(__int64, const char*,
                                 const char*) __asm__("Registration_a4fa80");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void* Registration_a4f6c0_alt1(__int64,
                               const char*) __asm__("Registration_a4f6c0");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt5(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_ae25e0(__int64 a1, _DWORD* a2, __int64 a3);
__attribute__((swiftcall)) void game_db11d0(PSEUDO_X8 x8_, const char* a1,
                                            __int64 a2);
_QWORD* GameRoutine_e08050_alt1(_QWORD*, __int64) __asm__("GameRoutine_e08050");
_QWORD* game_hub_e023c0_alt1(__int64, __int64,
                             unsigned __int64) __asm__("game_hub_e023c0");
__int64 GameHr_18fa160(__int64, __int64, int);
__int64 GameHr_918ce0(__int64*, __int64);
__int64 game_zview_d12d30_alt1(__int64 result, int32x2_t*,
                               char) __asm__("game_zview_d12d30");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float atan2f_alt1(float, float) __asm__("atan2f");
void AnimCtrlModule_a78450_alt1(__int64*,
                                _DWORD*) __asm__("AnimCtrlModule_a78450");
void GameHr_e08260(__int64, __int64*, unsigned __int16*);
void game_hub_e08150_alt1(__int64, __int64,
                          const char**) __asm__("game_hub_e08150");
void game_9ddae0(__int64* a1, unsigned __int64 a2);
void game_e1e5e0(__int64* a1, _DWORD* a2);
void game_e61f00(__int64 a1);
void game_e84360(__int64 a1, _DWORD* a2);

__attribute__((swiftcall)) void game_9a64e0(PSEUDO_X8 x8_, __int64* result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *result;
  v20 = result[1];
  if (*result != v20) {
    v4 = nullptr;
    v5 = 0;
    do {
      v7 = *(__int64**)(v3 + 32);
      v6 = *(__int64**)(v3 + 40);
      while (v7 != v6) {
        v8 = *v7;
        v9 = a2[2];
        if ((unsigned __int64)v4 < v9) {
          *(_QWORD*)v4 = v8;
          v4 += 8;
        }
        else {
          v10 = &v4[-v5];
          v11 = (__int64)&v4[-v5] >> 3;
          v12 = v11 + 1;
          if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
            *a2 = v5;
            GameRoutine_6e5c60();
          }
          v13 = v9 - v5;
          if (v13 >> 2 > v12) {
            v12 = v13 >> 2;
          }
          if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v12;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              *a2 = v5;
              GameRoutine_60a210(result);
            }
            v15 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          }
          else {
            v15 = 0;
          }
          v16 = v15 + 8 * v14;
          v17 = &v4[-v5];
          v18 = (__int64)&v10[v15 + -8 * v11];
          *(_QWORD*)&v10[v15] = v8;
          v4 = &v10[v15 + 8];
          result = (__int64*)memcpy(v18, v5, v17);
          a2[1] = (__int64)v4;
          a2[2] = v16;
          if (v5 != 0) {
            v19 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v19 = 56;
            }
            result = (__int64*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v5);
          }
          v5 = v18;
        }
        a2[1] = (__int64)v4;
        ++v7;
      }
      v3 += 72;
      *a2 = v5;
    } while (v3 != v20);
  }
  {
    result;
    return;
  }
}

__int64* game_9a6e00()
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f53c8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f53c8) != 0) {
    GameData_21f53a8 = (__int64)&GameData_1af4ee0;
    GameData_21f53b0 = (__int64)&GameData_1ab7f34;
    GameData_21f53b8 = (__int64)&GameData_1aa8505;
    GameData_21f53c0 = (__int64)&GameData_1a90f08;
    __cxa_guard_release(&GameData_21f53c8);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f53e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f53e8) != 0) {
    v1 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    GameData_21f53d0 = (__int64)v1;
    v2 = GameData_21f53b0;
    GameData_21f53d8 = (__int64)(v1 + 4);
    GameData_21f53e0 = (__int64)(v1 + 4);
    *v1 = GameData_21f53a8;
    v1[1] = v2;
    v3 = GameData_21f53c0;
    v1[2] = GameData_21f53b8;
    v1[3] = v3;
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21f53e8);
  }
  return &GameData_21f53d0;
}

__attribute__((swiftcall)) void game_9c5fd0(PSEUDO_X8 x8_, char** result,
                                            int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64 v5;
  __int64 v6;
  char** v8;
  char* v9;
  int v10;
  int v11;

  v3 = (__int64*)result[3];
  *(_QWORD*)a3 = 0;
  *(_QWORD*)(a3 + 8) = 0;
  *(_QWORD*)(a3 + 16) = 0;
  *(_QWORD*)(a3 + 24) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  v5 = *v3;
  v6 = v3[1];
  if (*v3 != v6) {
    v8 = nullptr;
    do {
      v10 = *(_DWORD*)v5;
      if (*(_DWORD*)v5 <= a2) {
        v11 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          result = (char**)game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)(v5 + 8));
          v11 = result != nullptr && *((_DWORD*)result + 8) != 0;
        }
        if (*(unsigned __int8*)(v5 + 24) == v11) {
          if ((unsigned __int64)v8 < *(_QWORD*)(a3 + 16)) {
            *(_DWORD*)v8 = v10;
            v8[1] = *(char**)(v5 + 8);
            v8[2] = *(char**)(v5 + 16);
            *((_BYTE*)v8 + 24) = *(_BYTE*)(v5 + 24);
            v8[4] = *(char**)(v5 + 32);
            v8[5] = *(char**)(v5 + 40);
            v9 = *(char**)(v5 + 56);
            v8[6] = *(char**)(v5 + 48);
            v8[7] = v9;
            v8 += 8;
          }
          else {
            result = (char**)GameRoutine_9c7480((__int64*)a3, v5);
            v8 = result;
          }
          *(_QWORD*)(a3 + 8) = v8;
        }
      }
      v5 += 64;
    } while (v5 != v6);
  }
  if ((__int64*)a3 != v3) {
    GameRoutine_6f4cd0((char**)(a3 + 24), v3[3], v3[4], (v3[4] - v3[3]) >> 3);
    return;
  }
  {
    result;
    return;
  }
}

void game_9ddae0(__int64* a1, unsigned __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v2 = (_QWORD*)a1[1];
  v3 = a1[2];
  if (0xCCCCCCCCCCCCCCCDLL * ((v3 - (__int64)v2) >> 3) >= a2) {
    v12 = (__int64)&v2[5 * a2];
    v13 = 40 * a2 - 40;
    if ((~(v13 / 0x28) & 7) != 0) {
      v14 = -(__int64)(((unsigned __int8)(v13 / 0x28) + 1) & 7);
      do {
        *v2 = 0;
        v2[1] = &GameData_1a9f09e;
        v2[2] = 0;
        v2[3] = 0;
        v15 = __CFADD__(v14++, 1);
        v2[4] = 0;
        v2 += 5;
      } while (!v15);
    }
    if (v13 >= 0x118) {
      do {
        *v2 = 0;
        v2[1] = &GameData_1a9f09e;
        v2[2] = 0;
        v2[3] = 0;
        v2[4] = 0;
        v2[5] = 0;
        v2[6] = &GameData_1a9f09e;
        v2[7] = 0;
        v2[8] = 0;
        v2[9] = 0;
        v2[10] = 0;
        v2[11] = &GameData_1a9f09e;
        v2[12] = 0;
        v2[13] = 0;
        v2[14] = 0;
        v2[15] = 0;
        v2[18] = 0;
        v2[19] = 0;
        v2[16] = &GameData_1a9f09e;
        v2[17] = 0;
        v2[20] = 0;
        v2[21] = &GameData_1a9f09e;
        v2[22] = 0;
        v2[23] = 0;
        v2[24] = 0;
        v2[25] = 0;
        v2[26] = &GameData_1a9f09e;
        v2[27] = 0;
        v2[28] = 0;
        v2[29] = 0;
        v2[30] = 0;
        v2[31] = &GameData_1a9f09e;
        v2[32] = 0;
        v2[33] = 0;
        v2[34] = 0;
        v2[35] = 0;
        v2[38] = 0;
        v2[39] = 0;
        v2[36] = &GameData_1a9f09e;
        v2[37] = 0;
        v2 += 40;
      } while (v2 != (_QWORD*)v12);
    }
    a1[1] = v12;
  }
  else {
    v5 = (__int64)v2 - *a1;
    v6 = a2 - 0x3333333333333333LL * (v5 >> 3);
    if (v6 > 0x666666666666666LL) {
      GameRoutine_9ddeb0();
    }
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = 0xCCCCCCCCCCCCCCCDLL * ((v3 - *a1) >> 3);
    if (2 * v8 > v6) {
      v6 = 2 * v8;
    }
    if (v8 >= 0x333333333333333LL) {
      v9 = 0x666666666666666LL;
    }
    else {
      v9 = v6;
    }
    if (v9 != 0) {
      if (v9 > 0x666666666666666LL) {
        GameRoutine_60a210_alt1();
      }
      v10 = a2;
      v11 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v9, 16, 0);
      a2 = v10;
    }
    else {
      v11 = 0;
    }
    v16 = v11 + v5;
    v17 = 40 * a2 - 40;
    if ((~(v17 / 0x28) & 7) != 0) {
      v19 = -(__int64)(((unsigned __int8)(v17 / 0x28) + 1) & 7);
      v18 = (_QWORD*)(v11 + v5);
      do {
        *v18 = 0;
        v18[1] = &GameData_1a9f09e;
        v18[2] = 0;
        v18[3] = 0;
        v15 = __CFADD__(v19++, 1);
        v18[4] = 0;
        v18 += 5;
      } while (!v15);
    }
    else {
      v18 = (_QWORD*)(v11 + v5);
    }
    v20 = v16 + 40 * a2;
    if (v17 >= 0x118) {
      do {
        *v18 = 0;
        v18[1] = &GameData_1a9f09e;
        v18[2] = 0;
        v18[3] = 0;
        v18[4] = 0;
        v18[5] = 0;
        v18[6] = &GameData_1a9f09e;
        v18[7] = 0;
        v18[8] = 0;
        v18[9] = 0;
        v18[10] = 0;
        v18[11] = &GameData_1a9f09e;
        v18[12] = 0;
        v18[13] = 0;
        v18[14] = 0;
        v18[15] = 0;
        v18[18] = 0;
        v18[19] = 0;
        v18[16] = &GameData_1a9f09e;
        v18[17] = 0;
        v18[20] = 0;
        v18[21] = &GameData_1a9f09e;
        v18[22] = 0;
        v18[23] = 0;
        v18[24] = 0;
        v18[25] = 0;
        v18[26] = &GameData_1a9f09e;
        v18[27] = 0;
        v18[28] = 0;
        v18[29] = 0;
        v18[30] = 0;
        v18[31] = &GameData_1a9f09e;
        v18[32] = 0;
        v18[33] = 0;
        v18[34] = 0;
        v18[35] = 0;
        v18[38] = 0;
        v18[39] = 0;
        v18[36] = &GameData_1a9f09e;
        v18[37] = 0;
        v18 += 40;
      } while (v18 != (_QWORD*)v20);
    }
    v21 = v11 + 40 * v9;
    v22 = *a1;
    v23 = a1[1];
    v24 = v16 + *a1 - v23;
    if (v23 != *a1) {
      v25 = 0;
      do {
        v34 = (_QWORD*)(v24 + v25);
        *v34 = *(_QWORD*)(v22 + v25);
        v34[1] = *(_QWORD*)(v22 + v25 + 8);
        if ((*(_BYTE*)(v22 + v25 + 16) & 1) != 0) {
          fw_text_String_CopyTerminated(v34 + 2, *(_QWORD*)(v22 + v25 + 32),
                                        *(_QWORD*)(v22 + v25 + 24));
        }
        else {
          v35 = *(_QWORD*)(v22 + v25 + 16);
          v36 = *(_QWORD*)(v22 + v25 + 32);
          v34[3] = *(_QWORD*)(v22 + v25 + 24);
          v34[4] = v36;
          v34[2] = v35;
        }
        v26 = *((unsigned __int8*)v34 + 16);
        v27 = v24 + v25;
        v25 += 40;
        v28 = v26 >> 1;
        v29 = (v26 & 1) == 0;
        v30 = *(_QWORD*)(v27 + 24);
        v31 = *(_QWORD*)(v27 + 32);
        v32 = v27 + 17;
        if (v29) {
          v30 = v28;
        }
        else {
          v32 = v31;
        }
        if (v30 != 0) {
          v33 = v32;
        }
        else {
          v33 = 0;
        }
        v34[1] = v33;
      } while (v22 + v25 != v23);
      do {
        if ((*(_BYTE*)(v22 + 16) & 1) != 0) {
          v37 = *(_QWORD*)(v22 + 32);
          if (v37 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
              v38 = 128;
            }
            else {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt5(*(_QWORD*)v7 + v38, v37);
          }
        }
        v22 += 40;
      } while (v22 != v23);
      v22 = *a1;
    }
    *a1 = v24;
    a1[1] = v20;
    a1[2] = v21;
    if (v22 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free_alt5(*(_QWORD*)v7 + v39, v22);
    }
  }
}

__int64 game_9e58c0()
{
  GameData_21f8570 = 0;
  GameData_21f8578 = 0;
  GameData_21f8580 = 0;
  GameData_21f8588 = (__int64)&GameData_1a9f09e;
  GameData_21f8590 = 0;
  GameData_21f8598 = 0;
  GameData_21f85a0 = 0;
  GameData_21f85a8 = 0;
  GameData_21f85b0 = (__int64)&GameData_1a9f09e;
  GameData_21f85b8 = 0;
  GameData_21f85c0 = 0;
  GameData_21f85c8 = 0;
  GameData_21f85d0 = 0;
  GameData_21f85d8 = 0;
  GameData_21f85e0 = 0;
  GameData_21f85e8 = 0;
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameData_21f8980 = 0;
  GameData_21f8988 = 0;
  GameData_21f8990 = 0;
  GameData_21f8998 = 0;
  GameData_21f89a0 = 1065353216;
  GameData_21f89a8 = 0;
  GameData_21f89b0 = 0;
  GameData_21f89b8 = 0;
  GameData_21f89c0 = 0;
  GameData_21f89c8 = 1065353216;
  GameData_21f89d0 = 0;
  GameData_21f89d8 = 0;
  GameData_21f89e0 = 0;
  GameData_21f89e8 = 0;
  GameData_21f89f0 = 1065353216;
  GameData_21f89f8 = 0;
  GameData_21f8a00 = 0;
  GameData_21f8a08 = 0;
  GameData_21f8a10 = 0;
  GameData_21f8a18 = 1065353216;
  GameData_21f8a20 = 0;
  GameData_21f8a28 = 0;
  GameData_21f8a30 = 0;
  GameData_21f8a38 = 0;
  GameData_21f8a40 = 1065353216;
  GameData_21f8a48 = 0;
  GameData_21f8a50 = 0;
  GameData_21f8a58 = 0;
  GameData_21f8a60 = 0;
  GameData_21f8a68 = 1065353216;
  GameData_21f8a70 = 0;
  GameData_21f8a78 = 0;
  GameData_21f8a80 = 0;
  GameData_21f8a88 = 0;
  GameData_21f8a90 = 1065353216;
  GameData_21f8a98 = 0;
  GameData_21f8aa0 = 0;
  GameData_21f8aa8 = 0;
  GameData_21f8ab0 = 0;
  GameData_21f8ab8 = 1065353216;
  GameData_21f8ad0 = 0;
  GameData_21f8ad8 = 0;
  GameData_21f8ac0 = 0;
  GameData_21f8ac8 = 0;
  GameData_21f8ae0 = 1065353216;
  GameData_21f8af8 = 0;
  GameData_21f8b00 = 0;
  GameData_21f8ae8 = 0;
  GameData_21f8af0 = 0;
  GameData_21f8b08 = 1065353216;
  GameData_21f8b20 = 0;
  GameData_21f8b28 = 0;
  GameData_21f8b10 = 0;
  GameData_21f8b18 = 0;
  GameData_21f8b30 = 1065353216;
  GameData_21f8b48 = 0;
  GameData_21f8b50 = 0;
  GameData_21f8b38 = 0;
  GameData_21f8b40 = 0;
  GameData_21f8b58 = 1065353216;
  GameData_21f8b70 = 0;
  GameData_21f8b78 = 0;
  GameData_21f8b60 = 0;
  GameData_21f8b68 = 0;
  GameData_21f8b80 = 1065353216;
  GameData_21f8ba0 = 0;
  GameData_21f8b98 = 0;
  GameData_21f8b90 = 0;
  GameData_21f8b88 = 0;
  GameData_21f8ba8 = 1065353216;
  GameData_21f8bc8 = 0;
  GameData_21f8bc0 = 0;
  GameData_21f8bb8 = 0;
  GameData_21f8bb0 = 0;
  GameData_21f8bd0 = 1065353216;
  GameData_21f8bf0 = 0;
  GameData_21f8be8 = 0;
  GameData_21f8be0 = 0;
  GameData_21f8bd8 = 0;
  GameData_21f8bf8 = 1065353216;
  GameData_21f8c18 = 0;
  GameData_21f8c10 = 0;
  GameData_21f8c08 = 0;
  GameData_21f8c00 = 0;
  GameData_21f8c20 = 1065353216;
  GameData_21f8c40 = 0;
  GameData_21f8c38 = 0;
  GameData_21f8c30 = 0;
  GameData_21f8c28 = 0;
  GameData_21f8c48 = 1065353216;
  GameData_21f8c68 = 0;
  GameData_21f8c60 = 0;
  GameData_21f8c58 = 0;
  GameData_21f8c50 = 0;
  GameData_21f8c70 = 1065353216;
  GameData_21f8c90 = 0;
  GameData_21f8c88 = 0;
  GameData_21f8c80 = 0;
  GameData_21f8c78 = 0;
  GameData_21f8c98 = 1065353216;
  GameData_21f8cb8 = 0;
  GameData_21f8cb0 = 0;
  GameData_21f8ca8 = 0;
  GameData_21f8ca0 = 0;
  GameData_21f8cc0 = 1065353216;
  GameData_21f8ce0 = 0;
  GameData_21f8cd8 = 0;
  GameData_21f8cd0 = 0;
  GameData_21f8cc8 = 0;
  GameData_21f8ce8 = 1065353216;
  GameData_21f8d08 = 0;
  GameData_21f8d00 = 0;
  GameData_21f8cf8 = 0;
  GameData_21f8cf0 = 0;
  GameData_21f8d10 = 1065353216;
  GameData_21f8d30 = 0;
  GameData_21f8d28 = 0;
  GameData_21f8d20 = 0;
  GameData_21f8d18 = 0;
  GameData_21f8d38 = 1065353216;
  GameData_21f8d58 = 0;
  GameData_21f8d50 = 0;
  GameData_21f8d48 = 0;
  GameData_21f8d40 = 0;
  GameData_21f8d60 = 1065353216;
  GameData_21f8d80 = 0;
  GameData_21f8d78 = 0;
  GameData_21f8d70 = 0;
  GameData_21f8d68 = 0;
  GameData_21f8d88 = 1065353216;
  GameData_21f8da8 = 0;
  GameData_21f8da0 = 0;
  GameData_21f8d98 = 0;
  GameData_21f8d90 = 0;
  GameData_21f8db0 = 1065353216;
  GameData_21f8dd0 = 0;
  GameData_21f8dc8 = 0;
  GameData_21f8dc0 = 0;
  GameData_21f8db8 = 0;
  GameData_21f8dd8 = 1065353216;
  GameData_21f8df8 = 0;
  GameData_21f8df0 = 0;
  GameData_21f8de8 = 0;
  GameData_21f8de0 = 0;
  GameData_21f8e00 = 1065353216;
  GameData_21f8e20 = 0;
  GameData_21f8e18 = 0;
  GameData_21f8e10 = 0;
  GameData_21f8e08 = 0;
  GameData_21f8e28 = 1065353216;
  GameData_21f8e48 = 0;
  GameData_21f8e40 = 0;
  GameData_21f8e38 = 0;
  GameData_21f8e30 = 0;
  GameData_21f8e50 = 1065353216;
  GameData_21f8e70 = 0;
  GameData_21f8e68 = 0;
  GameData_21f8e60 = 0;
  GameData_21f8e58 = 0;
  GameData_21f8e78 = 1065353216;
  GameData_21f8e98 = 0;
  GameData_21f8e90 = 0;
  GameData_21f8e88 = 0;
  GameData_21f8e80 = 0;
  GameData_21f8ea0 = 1065353216;
  GameData_21f8ec0 = 0;
  GameData_21f8eb8 = 0;
  GameData_21f8eb0 = 0;
  GameData_21f8ea8 = 0;
  GameData_21f8ec8 = 1065353216;
  GameData_21f8ee8 = 0;
  GameData_21f8ee0 = 0;
  GameData_21f8ed8 = 0;
  GameData_21f8ed0 = 0;
  GameData_21f8ef0 = 1065353216;
  GameData_21f8f10 = 0;
  GameData_21f8f08 = 0;
  GameData_21f8f00 = 0;
  GameData_21f8ef8 = 0;
  GameData_21f8f18 = 1065353216;
  GameRoutine_2b0();
  GameData_21f8f20 = 0;
  GameData_21f8f28 = 0;
  GameData_21f8f30 = 0;
  GameData_21f8f38 = 0;
  GameData_21f8f40 = 1065353216;
  GameData_21f8f48 = 0;
  GameData_21f8f50 = 0;
  GameData_21f8f58 = 0;
  GameRoutine_2b0();
  GameData_21f8f60 = 0;
  GameData_21f8f68 = 0;
  GameData_21f8f70 = 0;
  GameData_21f8f78 = 0;
  GameData_21f8f80 = 1065353216;
  GameData_21f8f88 = 0;
  GameData_21f8f90 = 0;
  GameData_21f8f98 = 0;
  GameRoutine_2b0();
  GameData_21f8fa0 = 0;
  GameData_21f8fa8 = 0;
  GameData_21f8fb0 = 0;
  GameData_21f8fb8 = 0;
  GameData_21f8fc0 = 1065353216;
  GameData_21f8fc8 = 0;
  GameData_21f8fd0 = 0;
  GameData_21f8fd8 = 0;
  GameRoutine_2b0();
  GameData_21f8fe0 = 0;
  GameData_21f8fe8 = 0;
  GameData_21f8ff0 = 0;
  GameData_21f8ff8 = 0;
  GameData_21f9000 = 1065353216;
  GameRoutine_2b0();
  GameData_21f9008 = 0;
  GameData_21f9010 = 0;
  GameData_21f9018 = 0;
  GameData_21f9020 = 0;
  GameData_21f9028 = 1065353216;
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameRoutine_2b0();
  GameData_21f9080 = 1065353216;
  GameData_21f9060 = 0;
  GameData_21f9068 = 0;
  GameData_21f9070 = 0;
  GameData_21f9078 = 0;
  return GameRoutine_2b0();
}

__int64 game_9e63a0(unsigned __int8 a1, unsigned __int64* a2)
{
  __int64* v2;
  unsigned __int64 v3;
  __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
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
  __int64 (*v23)(_QWORD);
  __int64 v24;
  _QWORD* v25;

  v2 = &GameData_21f8980_alt1[5 * a1];
  v3 = v2[1];
  if (v3 == 0 || v2[3] == 0) {
    return 0;
  }
  v6 = *a2;
  v7 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v8 = *a2;
    if (v6 >= v3) {
      v8 = v6 % v3;
    }
  }
  else {
    v8 = v7 & v6;
  }
  v9 = *(_QWORD**)(*v2 + 8 * v8);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    return 0;
  }
  if ((v3 & v7) == 0) {
    while (1) {
      v12 = v10[1];
      if (v6 == v12) {
        if (v10[2] == v6) {
          goto LABEL_27;
        }
      }
      else if ((v12 & v7) != v8) {
        return 0;
      }
      v10 = (_QWORD*)*v10;
      if (v10 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v6 == v11) {
      break;
    }
    if (v11 >= v3) {
      v11 %= v3;
    }
    if (v11 != v8) {
      return 0;
    }
  LABEL_16:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (v10[2] != v6) {
    goto LABEL_16;
  }
LABEL_27:
  v13 = v10[3];
  if (v13 == 0) {
    return 0;
  }
  v14 = *(_QWORD*)(v13 + 96);
  v15 = *(_QWORD*)(v13 + 104);
  if (v15 == v14) {
    return 0;
  }
  while (1) {
    v16 = *(_QWORD*)(v15 - 8);
    v15 -= 8;
    result = v16;
    v17 = *(_QWORD*)(v16 + 8);
    if (v17 != 0) {
      break;
    }
  LABEL_32:
    result = 0;
    if (v15 == v14) {
      return result;
    }
  }
  v18 = *(_QWORD*)(v17 + 24);
  v19 = *(_QWORD*)(v18 + 40);
  v20 = *(_QWORD*)(v18 + 48);
  if (v20 != v19) {
    do {
      if (*(_QWORD*)v19 != 0) {
        v21 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v22 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v19);
          if (v22 != 0) {
            v23 = *(__int64 (**)(_QWORD))(v22 + 72);
            v24 = *(_QWORD*)(v22 + 80);
            v25 = (_QWORD*)(v22 + (v24 >> 1));
            if ((v24 & 1) != 0) {
              v23 = *(__int64 (**)(_QWORD))((char*)v23 + *v25);
            }
            LOBYTE(result) = v23(v25);
          }
          else {
            LOBYTE(result) = 1;
          }
        }
        if (*(_BYTE*)(v19 + 16) != ((v21 == 0) | result & 1)) {
          v14 = *(_QWORD*)(v13 + 96);
          goto LABEL_32;
        }
      }
      v19 += 24;
    } while (v19 != v20);
    return *(_QWORD*)v15;
  }
  return result;
}

__int64 game_9e65a0(unsigned __int8 a1, unsigned __int64* a2)
{
  __int64* v2;
  unsigned __int64 v3;
  __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  unsigned __int64 v23;
  void* v24;

  v2 = &GameData_21f8980_alt1[5 * a1];
  v3 = v2[1];
  if (v3 == 0 || v2[3] == 0) {
    return 0;
  }
  v6 = *a2;
  v7 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v8 = *a2;
    if (v6 >= v3) {
      v8 = v6 % v3;
    }
  }
  else {
    v8 = v7 & v6;
  }
  v9 = *(_QWORD**)(*v2 + 8 * v8);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    return 0;
  }
  if ((v3 & v7) == 0) {
    while (1) {
      v12 = v10[1];
      if (v6 == v12) {
        if (v10[2] == v6) {
          goto LABEL_27;
        }
      }
      else if ((v12 & v7) != v8) {
        return 0;
      }
      v10 = (_QWORD*)*v10;
      if (v10 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v6 == v11) {
      break;
    }
    if (v11 >= v3) {
      v11 %= v3;
    }
    if (v11 != v8) {
      return 0;
    }
  LABEL_16:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (v10[2] != v6) {
    goto LABEL_16;
  }
LABEL_27:
  v13 = v10[3];
  if (v13 == 0) {
    return 0;
  }
  v14 = *(_QWORD*)(v13 + 96);
  v15 = *(_QWORD*)(v13 + 104);
  if (v14 == v15) {
    return 0;
  }
  while (1) {
    v17 = *(_QWORD*)(*(_QWORD*)v14 + 96LL);
    v16 = *(_QWORD*)(*(_QWORD*)v14 + 104LL);
    if (v17 != v16) {
      v18 = game_GameModeData_instance_;
      v19 = 0;
      do {
        if (v18 != 0 && (v21 = game_GameVariableTable_Find(
                             *(_QWORD**)(v18 + 48),
                             (unsigned __int64*)(*(_QWORD*)v17 + 16LL))) != 0) {
          v22 = *(_DWORD*)(v21 + 32);
          v20 = v22 / 0x21B7900 -
                11 * ((390451573 * (unsigned __int64)(v22 / 0x21B7900)) >> 32);
          if (v20 != 0) {
            v23 = (v22 / 0x86DE40uLL) & 3;
            if ((int)v23 > 1) {
              if ((_DWORD)v23 == 3) {
                v24 = &GameData_1aabf6c;
              }
              else {
                v24 = &GameData_1ad653b;
              }
            }
            else {
              v24 = &GameData_1abf89f;
              if ((_DWORD)v23 != 0) {
                v24 = *(&GameData_1f9caf8 + v20);
              }
            }
            TimelineFile_890160((__int64)v24);
            v18 = game_GameModeData_instance_;
            LOBYTE(v20) = 1;
          }
        }
        else {
          LOBYTE(v20) = 0;
        }
        v17 += 8;
        v19 |= v20;
      } while (v17 != v16);
      if ((v19 & 1) != 0) {
        break;
      }
    }
    v14 += 8;
    result = 0;
    if (v14 == v15) {
      return result;
    }
  }
  return 1;
}

__int64* game_9e68c0(unsigned __int8 a1)
{
  int v2;
  unsigned __int8 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f92c8,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_21f9088[2 * a1];
  }
  v2 = __cxa_guard_acquire(&GameData_21f92c8);
  v3 = a1;
  if (v2 != 0) {
    GameData_21f9090 = (__int64)&GameData_1af4ee0;
    GameData_21f9088[0] = game_HashString((__int64)&GameData_1af4ee0);
    GameData_21f90a0 = (__int64)&GameData_1ada442;
    GameData_21f9098 = game_HashString((__int64)&GameData_1ada442);
    GameData_21f90b0 = (__int64)&GameData_1af9188;
    GameData_21f90a8 = game_HashString((__int64)&GameData_1af9188);
    GameData_21f90c0 = (__int64)&GameData_1ada6c8;
    GameData_21f90b8 = game_HashString((__int64)&GameData_1ada6c8);
    GameData_21f90d0 = (__int64)&GameData_1aa8657;
    GameData_21f90c8 = game_HashString((__int64)&GameData_1aa8657);
    GameData_21f90e0 = (__int64)&GameData_1aa8670;
    GameData_21f90d8 = game_HashString((__int64)&GameData_1aa8670);
    GameData_21f90f0 = (__int64)&GameData_1aa8683;
    GameData_21f90e8 = game_HashString((__int64)&GameData_1aa8683);
    GameData_21f9100 = (__int64)&GameData_1ad2bad;
    GameData_21f90f8 = game_HashString((__int64)&GameData_1ad2bad);
    GameData_21f9110 = (__int64)&GameData_1af15ae;
    GameData_21f9108 = game_HashString((__int64)&GameData_1af15ae);
    GameData_21f9120 = (__int64)&GameData_1ac6c6f;
    GameData_21f9118 = game_HashString((__int64)&GameData_1ac6c6f);
    GameData_21f9130 = (__int64)&GameData_1a9cbdd;
    GameData_21f9128 = game_HashString((__int64)&GameData_1a9cbdd);
    GameData_21f9140 = (__int64)&GameData_1ada6e7;
    GameData_21f9138 = game_HashString((__int64)&GameData_1ada6e7);
    GameData_21f9150 = (__int64)&GameData_1af15c7;
    GameData_21f9148 = game_HashString((__int64)&GameData_1af15c7);
    GameData_21f9160 = (__int64)&GameData_1aa4962;
    GameData_21f9158 = game_HashString((__int64)&GameData_1aa4962);
    GameData_21f9170 = (__int64)&GameData_1acadc0;
    GameData_21f9168 = game_HashString((__int64)&GameData_1acadc0);
    GameData_21f9180 = (__int64)&GameData_1ab3d52;
    GameData_21f9178 = game_HashString((__int64)&GameData_1ab3d52);
    GameData_21f9190 = (__int64)&GameData_1a8d5bb;
    GameData_21f9188 = game_HashString((__int64)&GameData_1a8d5bb);
    GameData_21f91a0 = (__int64)&GameData_1ada706;
    GameData_21f9198 = game_HashString((__int64)&GameData_1ada706);
    GameData_21f91b0 = (__int64)&GameData_1ad2bc9;
    GameData_21f91a8 = game_HashString((__int64)&GameData_1ad2bc9);
    GameData_21f91c0 = (__int64)&GameData_1ae5b45;
    GameData_21f91b8 = game_HashString((__int64)&GameData_1ae5b45);
    GameData_21f91d0 = (__int64)&GameData_1afcfd4;
    GameData_21f91c8 = game_HashString((__int64)&GameData_1afcfd4);
    GameData_21f91e0 = (__int64)&GameData_1abbd90;
    GameData_21f91d8 = game_HashString((__int64)&GameData_1abbd90);
    GameData_21f91f0 = (__int64)&GameData_1a98ef9;
    GameData_21f91e8 = game_HashString((__int64)&GameData_1a98ef9);
    GameData_21f9200 = (__int64)&GameData_1aa0b8d;
    GameData_21f91f8 = game_HashString((__int64)&GameData_1aa0b8d);
    GameData_21f9210 = (__int64)&GameData_1ab010c;
    GameData_21f9208 = game_HashString((__int64)&GameData_1ab010c);
    GameData_21f9220 = (__int64)&GameData_1ab3d6e;
    GameData_21f9218 = game_HashString((__int64)&GameData_1ab3d6e);
    GameData_21f9230 = (__int64)&GameData_1a98f0c;
    GameData_21f9228 = game_HashString((__int64)&GameData_1a98f0c);
    GameData_21f9240 = (__int64)&GameData_1ae5b58;
    GameData_21f9238 = game_HashString((__int64)&GameData_1ae5b58);
    GameData_21f9250 = (__int64)&GameData_1a8d5d7;
    GameData_21f9248 = game_HashString((__int64)&GameData_1a8d5d7);
    GameData_21f9260 = (__int64)&GameData_1ac32ae;
    GameData_21f9258 = game_HashString((__int64)&GameData_1ac32ae);
    GameData_21f9270 = (__int64)&GameData_1af15e0;
    GameData_21f9268 = game_HashString((__int64)&GameData_1af15e0);
    GameData_21f9280 = (__int64)&GameData_1aa0ba9;
    GameData_21f9278 = game_HashString((__int64)&GameData_1aa0ba9);
    GameData_21f9290 = (__int64)&GameData_1a90f7c;
    GameData_21f9288 = game_HashString((__int64)&GameData_1a90f7c);
    GameData_21f92a0 = (__int64)&GameData_1acaddc;
    GameData_21f9298 = game_HashString((__int64)&GameData_1acaddc);
    GameData_21f92b0 = (__int64)&GameData_1aa0bc5;
    GameData_21f92a8 = game_HashString((__int64)&GameData_1aa0bc5);
    GameData_21f92c0 = (__int64)&GameData_1ac32c7;
    GameData_21f92b8 = game_HashString((__int64)&GameData_1ac32c7);
    __cxa_guard_release(&GameData_21f92c8);
    v3 = a1;
  }
  return &GameData_21f9088[2 * v3];
}

__attribute__((swiftcall)) void game_ae0a80(PSEUDO_X8 x8_, __int64 a1,
                                            _DWORD* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  int v9;
  _DWORD* v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int* v15;
  int v16;
  int v17;
  unsigned int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64* v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  __int64 v52;
  __int64* v54;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  if (*(_WORD*)(a1 + 32) == 0) {
    return;
  }
  v4 = *(unsigned __int16*)(a1 + 48);
  if (*(_WORD*)(a1 + 48) == 0) {
    return;
  }
  v5 = *(_QWORD*)(a1 + 56);
  v6 = v4 & 7;
  if ((unsigned int)v4 < 8) {
    v8 = 0;
    v9 = 0;
    if ((v4 & 7) == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v10 = (_DWORD*)(v5 + 16);
  v11 = 0;
  v9 = 0;
  do {
    v11 -= 8;
    v12 = v9 + 100 * *(v10 - 4) + 100 * *(v10 - 3) + 100 * *(v10 - 2) +
          100 * *(v10 - 1) + 100 * *v10 + 100 * v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v10 += 8;
    v9 = v12 + 100 * v13 + 100 * v14;
  } while (-(__int64)((unsigned __int16)v4 & 0xFFF8) != v11);
  v8 = -v11;
  if ((v4 & 7) != 0) {
  LABEL_9:
    v15 = (int*)(v5 + 4 * v8);
    do {
      v16 = *v15++;
      --v6;
      v9 += 100 * v16;
    } while (v6 != 0);
  }
LABEL_11:
  if (v9 > 0) {
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v17 = a2[2];
    v18 = a2[3];
    v19 = *a2 ^ (*a2 << 11);
    *a2 = a2[1];
    a2[1] = v17;
    v54 = a3;
    v20 = (v19 >> 8) ^ (v18 >> 19) ^ v19 ^ v18;
    a2[2] = v18;
    a2[3] = v20;
    v21 = v20 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v22 = 0;
    v23 = v21 % v9;
    v24 = a1;
    v25 = v54;
    while (1) {
      v26 = *(_DWORD*)(*(_QWORD*)(a1 + 56) + 4 * v22);
      if (v26 != 0) {
        v23 -= 100 * v26;
        if (v23 < 0) {
          break;
        }
      }
      if (v4 == ++v22) {
        return;
      }
    }
    if (v22 != 0) {
      v27 = *(unsigned __int16*)(a1 + 32);
      if (*(_WORD*)(a1 + 32) != 0) {
        v28 = 8;
        v29 = nullptr;
        v30 = 0;
        do {
          v31 = *(_QWORD*)(*(_QWORD*)(v24 + 40) + v28);
          v32 = v25[2];
          if ((unsigned __int64)v29 < v32) {
            *(_QWORD*)v29 = v31;
            v29 += 8;
          }
          else {
            v33 = &v29[-v30];
            v34 = (__int64)&v29[-v30] >> 3;
            v35 = v34 + 1;
            if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
              *v54 = v30;
              GameRoutine_688200_alt1();
            }
            v36 = v32 - v30;
            if (v36 >> 2 > v35) {
              v35 = v36 >> 2;
            }
            if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
              v37 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v37 = v35;
            }
            if (v37 != 0) {
              if (v37 >> 61 != 0) {
                *v54 = v30;
                GameRoutine_60a210_alt1();
              }
              v38 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v37, 16, 0);
            }
            else {
              v38 = 0;
            }
            v39 = v38 + 8 * v37;
            v40 = (unsigned __int64)&v29[-v30];
            v41 = (__int64)&v33[v38 + -8 * v34];
            *(_QWORD*)&v33[v38] = v31;
            v29 = &v33[v38 + 8];
            memcpy_alt1(v41, v30, v40);
            v54[1] = (__int64)v29;
            v54[2] = v39;
            v25 = v54;
            if (v30 != 0) {
              v42 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v42 = 56;
              }
              nn_mem_StandardAllocator_Free_alt5(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v30);
            }
            v24 = a1;
            v30 = v41;
          }
          --v27;
          v28 += 16;
          v25[1] = (__int64)v29;
        } while (v27 != 0);
      }
      else {
        v29 = nullptr;
        v30 = 0;
      }
      v43 = (__int64)&v29[-v30];
      *v25 = v30;
      v44 = (unsigned __int64)&v29[-v30] >> 3;
      if ((int)v44 >= 1) {
        v45 = ((unsigned __int64)v43 >> 3) & 0x7FFFFFFF;
        v46 = (__int64*)v30;
        do {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v47 = a2[2];
          v48 = a2[3];
          v49 = *a2 ^ (*a2 << 11);
          *a2 = a2[1];
          a2[1] = v47;
          v50 = (v49 >> 8) ^ (v48 >> 19) ^ v49 ^ v48;
          a2[2] = v48;
          a2[3] = v50;
          v51 = v50 & 0x7FFFFFFF;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v52 = *v46;
          --v45;
          *v46++ = *(_QWORD*)(v30 + 8LL * (v51 % (unsigned int)v44));
          *(_QWORD*)(v30 + 8LL * (v51 % (unsigned int)v44)) = v52;
        } while (v45 != 0);
        v25 = v54;
        v30 = *v54;
        v43 = v54[1] - *v54;
      }
      if ((unsigned int)v22 < (unsigned __int64)(v43 >> 3)) {
        v25[1] = v30 + 8LL * (unsigned int)v22;
      }
    }
  }
}

void game_ae25e0(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23[3];
  __int64 v24;

  v4 = *(_QWORD*)(a1 + 176);
  v5 = *(_QWORD*)(a1 + 192);
  if (v4 == 0) {
    if (v5 == 0) {
      return;
    }
    goto LABEL_13;
  }
  if (v5 != 0) {
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v8 = a2[2];
    v9 = a2[3];
    v10 = *a2 ^ (*a2 << 11);
    *a2 = a2[1];
    a2[1] = v8;
    v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
    a2[2] = v9;
    a2[3] = v11;
    v12 = v11 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    if (v12 % 0xF4240 <= 0x7A11F) {
      v4 = *(_QWORD*)(a1 + 176);
      if (v4 == 0) {
        return;
      }
      goto LABEL_5;
    }
    v5 = *(_QWORD*)(a1 + 192);
    if (v5 == 0) {
      return;
    }
  LABEL_13:
    game_ae0a80((void*)(v23), v5, a2);
    v13 = v23[0];
    v18 = v23[1];
    if (v23[0] != v23[1]) {
      v19 = (__int64*)v23[0];
      while (1) {
        v20 = *v19++;
        v21 = *(_QWORD*)(a3 + 32);
        v24 = v20;
        if (v21 == 0) {
          break;
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v21 + 48LL))(v21, &v24);
        if (v19 == (__int64*)v18) {
          goto LABEL_17;
        }
      }
    LABEL_22:
      GameRoutine_60a310_alt1();
    }
    goto LABEL_17;
  }
LABEL_5:
  game_ae0a80((void*)(v23), v4, a2);
  v13 = v23[0];
  v14 = v23[1];
  if (v23[0] != v23[1]) {
    v15 = (__int64*)v23[0];
    do {
      v16 = *v15++;
      v17 = *(_QWORD*)(a3 + 32);
      v24 = v16;
      if (v17 == 0) {
        goto LABEL_22;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v17 + 48LL))(v17, &v24);
    } while (v15 != (__int64*)v14);
  }
LABEL_17:
  if (v13 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt5(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v13);
  }
}

char* game_b03480(char* result, char* a2, unsigned __int64 a3, __int64* a4,
                  __int64 a5)
{
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  char* v17;
  char* v20;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *((_QWORD*)a2 - 1);
      v6 = *(_QWORD*)result;
      if (*(unsigned __int16*)(v5 + 22) <
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)result + 22LL)) {
        *(_QWORD*)result = v5;
        *((_QWORD*)a2 - 1) = v6;
      }
    }
    else if ((__int64)a3 > 128) {
      v14 = a3 >> 1;
      v16 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v20 = result;
        v22 = a4;
        GameRoutine_b036a0((__int64)result, (__int64)&result[8 * v14], a3 >> 1,
                           a4);
        v23 = &v22[v14];
        result = (char*)GameRoutine_b036a0((__int64)&v20[8 * v14], (__int64)a2,
                                           v16, v23);
        v24 = &v22[a3];
        v25 = v23;
        while (v25 != v24) {
          v26 = *v25;
          v27 = *(unsigned __int16*)(*v25 + 22);
          v28 = *(unsigned __int16*)(*v22 + 22);
          if (v27 < v28) {
            v29 = 0;
          }
          else {
            v26 = *v22;
            v29 = 8;
          }
          v22 = (__int64*)((char*)v22 + v29);
          if (v27 >= v28) {
            v30 = 0;
          }
          else {
            v30 = 8;
          }
          *(_QWORD*)v20 = v26;
          v20 += 8;
          v25 = (__int64*)((char*)v25 + v30);
          if (v22 == v23) {
            while (v25 != v24) {
              v32 = *v25++;
              *(_QWORD*)v20 = v32;
              v20 += 8;
            }
            return result;
          }
        }
        while (v22 != v23) {
          v31 = *v22++;
          *(_QWORD*)v20 = v31;
          v20 += 8;
        }
      }
      else {
        v17 = result;
        game_b03480(result, &result[8 * v14], a3 >> 1, a4, a5);
        game_b03480(&v17[8 * v14], a2, v16, a4, a5);
        return game_b038e0(v17, &v17[8 * v14], a2, v14, v16, (__int64)a4, a5);
      }
    }
    else if (result != a2) {
      v7 = result + 8;
      if (result + 8 != a2) {
        v8 = 0;
        v9 = result;
        do {
          v12 = *(_QWORD*)v9;
          v11 = *((_QWORD*)v9 + 1);
          v9 = v7;
          if (*(unsigned __int16*)(v11 + 22) <
              (unsigned int)*(unsigned __int16*)(v12 + 22)) {
            v13 = v8;
            do {
              *(_QWORD*)&result[v13 + 8] = v12;
              if (v13 == 0) {
                v10 = result;
                goto LABEL_11;
              }
              v12 = *(_QWORD*)&result[v13 - 8];
              v13 -= 8;
            } while (*(unsigned __int16*)(v11 + 22) <
                     (unsigned int)*(unsigned __int16*)(v12 + 22));
            v10 = &result[v13 + 8];
          LABEL_11:
            *(_QWORD*)v10 = v11;
          }
          v7 = v9 + 8;
          v8 += 8;
        } while (v9 + 8 != a2);
      }
    }
  }
  return result;
}

char* game_b038e0(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  char* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  char* v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  char* v26;
  char* v27;
  __int64 v28;
  char* v29;
  char* v30;
  char* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  _QWORD* v51;
  _QWORD* v52;
  char* v53;
  __int64 v54;
  bool v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  unsigned int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  char* v83;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v8 = 0;
      v9 = 0;
      while (1) {
        v10 = *(_QWORD*)&result[8 * v9];
        if (*(unsigned __int16*)(*(_QWORD*)a2 + 22LL) <
            (unsigned int)*(unsigned __int16*)(v10 + 22)) {
          break;
        }
        ++v9;
        v8 -= 8;
        if (a4 == v9) {
          return result;
        }
      }
      v11 = a4 - v9;
      v12 = &result[-v8];
      if (a4 - v9 >= a5) {
        if (a4 - 1 == v9) {
          *(_QWORD*)&result[8 * v9] = *(_QWORD*)a2;
          *(_QWORD*)a2 = v10;
          return result;
        }
        v14 = a3;
        v22 = v11 / 2;
        v23 = &result[8 * (v11 / 2)];
        if (a3 != a2) {
          v24 = (a3 - a2) >> 3;
          v14 = a2;
          do {
            v25 = v24 >> 1;
            v26 = &v14[8 * (v24 >> 1)];
            v28 = *(_QWORD*)v26;
            v27 = v26 + 8;
            v24 += ~(v24 >> 1);
            if (*(unsigned __int16*)(v28 + 22) <
                (unsigned int)*(unsigned __int16*)(*(_QWORD*)&v23[8 * v9] +
                                                   22LL)) {
              v14 = v27;
            }
            else {
              v24 = v25;
            }
          } while (v24 != 0);
        }
        v15 = &v23[-v8];
        v13 = (v14 - a2) >> 3;
      }
      else {
        v13 = a5 / 2;
        v14 = &a2[8 * (a5 / 2)];
        if (v12 == a2) {
          v15 = a2;
          v21 = a2;
        }
        else {
          v15 = &result[-v8];
          v16 = (a2 - result + v8) >> 3;
          do {
            v17 = v16 >> 1;
            v18 = &v15[8 * (v16 >> 1)];
            v20 = *(_QWORD*)v18;
            v19 = v18 + 8;
            v16 += ~(v16 >> 1);
            if (*(unsigned __int16*)(*(_QWORD*)v14 + 22LL) <
                (unsigned int)*(unsigned __int16*)(v20 + 22)) {
              v16 = v17;
            }
            else {
              v15 = v19;
            }
          } while (v16 != 0);
          v21 = &result[-v8];
        }
        v22 = (v15 - v21) >> 3;
      }
      v29 = v14;
      if (v15 != a2) {
        v29 = v15;
        if (a2 != v14) {
          v30 = v15 + 8;
          if (v15 + 8 == a2) {
            v37 = v14 - a2;
            v38 = a4;
            v39 = a5;
            v40 = v12;
            v78 = *(_QWORD*)v15;
            v82 = a3;
            v80 = a6;
            memmove(v15, v15 + 8, v14 - a2);
            a6 = v80;
            a3 = v82;
            v29 = &v15[v37];
            v12 = v40;
            a5 = v39;
            a4 = v38;
            *(_QWORD*)v29 = v78;
          }
          else {
            v31 = a2 + 8;
            if (a2 + 8 == v14) {
              v41 = *((_QWORD*)v14 - 1);
              v29 = v15 + 8;
              if (v14 - 8 != v15) {
                v83 = a3;
                v42 = a4;
                v43 = a5;
                v79 = *((_QWORD*)v14 - 1);
                v81 = a6;
                v44 = v12;
                memmove(v15 + 8, v15, v14 - 8 - v15);
                v41 = v79;
                a6 = v81;
                a3 = v83;
                v12 = v44;
                a5 = v43;
                a4 = v42;
              }
              *(_QWORD*)v15 = v41;
            }
            else {
              v32 = (char*)(a2 - v15);
              v33 = (a2 - v15) >> 3;
              v34 = (v14 - a2) >> 3;
              if (v33 == v34) {
                do {
                  v35 = *((_QWORD*)v30 - 1);
                  *((_QWORD*)v30 - 1) = *((_QWORD*)v31 - 1);
                  *((_QWORD*)v31 - 1) = v35;
                  if (v30 == a2) {
                    break;
                  }
                  v30 += 8;
                  v36 = v31 == v14;
                  v31 += 8;
                } while (!v36);
                v29 = a2;
              }
              else {
                v45 = (a2 - v15) >> 3;
                do {
                  v46 = v45;
                  v45 = v34;
                  v34 = v46 % v34;
                } while (v34 != 0);
                if (8 * v45 != 0) {
                  v47 = &v15[8 * v45];
                  do {
                    v49 = *((_QWORD*)v47 - 1);
                    v47 -= 8;
                    v48 = v49;
                    v50 = &v47[(_QWORD)v32];
                    v51 = v47;
                    do {
                      v52 = v50;
                      *v51 = *(_QWORD*)v50;
                      v53 = &v32[(_QWORD)v50];
                      v54 = (v14 - v50) >> 3;
                      v55 = __OFSUB__(v33, v54);
                      v57 = v33 - v54;
                      v56 = (v57 < 0) ^ v55;
                      v50 = &v15[8 * v57];
                      if (v56) {
                        v50 = v53;
                      }
                      v51 = v52;
                    } while (v50 != v47);
                    *v52 = v48;
                  } while (v47 != v15);
                }
                v29 = &v15[v14 - a2];
              }
            }
          }
        }
      }
      v58 = a5 - v13;
      v59 = a4 - v22 - v9;
      if (v22 + v13 >= a5 + a4 - (v22 + v13) - v9) {
        v62 = a4 - v22 - v9;
        v61 = a6;
        v63 = v12;
        game_b038e0(v29, v14, a3, v62, a5 - v13, a6, a7);
        result = v63;
        v14 = v15;
        v58 = v13;
        v59 = v22;
        a3 = v29;
      }
      else {
        v60 = a3;
        v61 = a6;
        game_b038e0(v12, v15, v29, v22, v13, a6, a7);
        a3 = v60;
        result = v29;
      }
      a4 = v59;
      a5 = v58;
      a2 = v14;
      a6 = v61;
      if (v58 == 0) {
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
          v72 = *(unsigned __int16*)(*(_QWORD*)a2 + 22LL);
          v73 = *(unsigned __int16*)(*(_QWORD*)a6 + 22LL);
          if (v72 < v73) {
            v74 = 8;
          }
          else {
            v71 = *(_QWORD*)a6;
            v74 = 0;
          }
          a2 += v74;
          if (v72 >= v73) {
            v75 = 8;
          }
          else {
            v75 = 0;
          }
          *(_QWORD*)result = v71;
          result += 8;
          a6 += v75;
          if (v68 == (_QWORD*)a6) {
            return result;
          }
        }
        return (char*)memmove(result, a6, -(a6 + v67));
      }
    }
    else if (a2 != a3) {
      v64 = 0;
      do {
        *(_QWORD*)(a6 + v64) = *(_QWORD*)&a2[v64];
        v64 += 8;
      } while (&a2[v64] != a3);
      v65 = a6 + v64;
      while (a2 != result) {
        v66 = *(_QWORD*)(v65 - 8);
        if (*(unsigned __int16*)(v66 + 22) >=
            (unsigned int)*(unsigned __int16*)(*((_QWORD*)a2 - 1) + 22LL)) {
          v65 -= 8;
        }
        else {
          v66 = *((_QWORD*)a2 - 1);
          a2 -= 8;
        }
        *((_QWORD*)a3 - 1) = v66;
        a3 -= 8;
        if (v65 == a6) {
          return result;
        }
      }
      if (a6 != v65) {
        v76 = -8;
        do {
          v77 = *(_QWORD*)(v65 - 8);
          v65 -= 8;
          *(_QWORD*)&a3[v76] = v77;
          v76 -= 8;
        } while (v65 != a6);
      }
    }
  }
  return result;
}

__int64 game_c8a5a0(int* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float32x4_t* v27;
  float32x4_t* v28;
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
  struct {
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v41_;
  __int64 v44;
  float32x4x4_t v45;
  float32x4x4_t v46;

  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = gxc_RegisterHeap((__int64)"HeapUiSys", 9u),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v2 & 0x100000000LL) == 0) {
    GameRoutine_8123d0(),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  *a1 = v2;
  gxc_SetAllocator_5f5b0((unsigned int)v2, GameRoutine_c8b2d0, nullptr,
                         GameRoutine_c8b2f0, nullptr),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41_.v41 = 0x4000000;
  v3 = *a1;
  LODWORD(v41_.v42) = 34;
  HIDWORD(v41_.v42) = v3;
  GameRoutine_53b30((void*)(&v44), (__int64)&v41_.v41),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = v44;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = GameData_212c408;
  if (v44 != 0) {
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7[2] = 0;
    v7[3] = v4;
    *v7 = v6 + 16;
    v7[1] = 0;
  }
  else {
    v7 = nullptr;
  }
  v8 = *((_QWORD*)a1 + 2);
  v44 = 0;
  *((_QWORD*)a1 + 1) = v4;
  *((_QWORD*)a1 + 2) = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v8),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = v44;
  v44 = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_5fc550((__int64)(a1 + 14), *((_QWORD*)a1 + 1) + 8LL,
                     *(_QWORD*)(*((_QWORD*)a1 + 1) + 328LL)),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v41_.v41 = 0x2000000;
  v10 = *a1;
  LODWORD(v41_.v42) = 161;
  HIDWORD(v41_.v42) = v10;
  GameRoutine_53b30((void*)(&v44), (__int64)&v41_.v41),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = v44;
  if (v44 != 0) {
    v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 32, 16, 0),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v12[2] = 0;
    v12[3] = v11;
    *v12 = v6 + 16;
    v12[1] = 0;
  }
  else {
    v12 = nullptr;
  }
  v13 = *((_QWORD*)a1 + 4);
  v44 = 0;
  *((_QWORD*)a1 + 3) = v11;
  *((_QWORD*)a1 + 4) = v12;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v13),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v14 = v44;
  v44 = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v41_.v41 = 0x4000000;
  v15 = *a1;
  LODWORD(v41_.v42) = 161;
  HIDWORD(v41_.v42) = v15;
  GameRoutine_53b30((void*)(&v44), (__int64)&v41_.v41),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v44;
  if (v44 != 0) {
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 32, 16, 0),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17[2] = 0;
    v17[3] = v16;
    *v17 = v6 + 16;
    v17[1] = 0;
  }
  else {
    v17 = nullptr;
  }
  v18 = *((_QWORD*)a1 + 6);
  v44 = 0;
  *((_QWORD*)a1 + 5) = v16;
  *((_QWORD*)a1 + 6) = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v18),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v19 = v44;
  v44 = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  LODWORD(v41_.v41) = 3;
  v20 = game_g_frame_clock_ptr[0];
  v21 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 312);
  v41_.v42 = 76;
  v41_.v43 = v21;
  GameRoutine_53bd0((void*)(&v44), (__int64)&v41_.v41),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = v44;
  v23 = *((_QWORD*)a1 + 44);
  v44 = 0;
  *((_QWORD*)a1 + 44) = v22;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v24 = v44;
    v44 = 0;
    if (v24 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v25 = *((_QWORD*)a1 + 44);
  v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v25 + 56LL))(v25),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (float32x4_t*)GameData_212c2b0;
  v45.val[0] = *(float32x4_t*)GameData_212c2b0;
  v45.val[1] = *((float32x4_t*)GameData_212c2b0 + 1);
  v45.val[2] =
      *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0);
  v45.val[3] =
      *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0 + 16);
  vst4q_f32((float*)v26, v45);
  v28 = (float32x4_t*)GameData_212c540;
  v45.val[0] = *(float32x4_t*)GameData_212c540;
  *(_QWORD*)(v26 + 64) = *(_QWORD*)GameData_212c540;
  *(_DWORD*)(v26 + 72) = LANES128(v45.val[0]).n128_u32[2];
  (*(void (**)(__int64))(*(_QWORD*)v25 + 64LL))(v25),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = *(_QWORD*)(*(_QWORD*)(*v20 + 552) + 16LL);
  *((_QWORD*)a1 +
    46) = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 80LL))(v29),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_QWORD*)a1 + 47) = v30;
  GameRoutine_5de60((_QWORD*)a1 + 46, *((_QWORD*)a1 + 44)),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *v20;
  LODWORD(v41_.v41) = 3;
  v32 = *(_QWORD*)(v31 + 312);
  v41_.v42 = 76;
  v41_.v43 = v32;
  GameRoutine_53bd0((void*)(&v44), (__int64)&v41_.v41),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = v44;
  v34 = *((_QWORD*)a1 + 45);
  v44 = 0;
  *((_QWORD*)a1 + 45) = v33;
  if (v34 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34),
        v30 = COERCE_AS(__typeof__(v30),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v39 = COERCE_AS(__typeof__(v39),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v35 = v44;
    v44 = 0;
    if (v35 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35),
          v30 = COERCE_AS(__typeof__(v30),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v39 = COERCE_AS(__typeof__(v39),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v36 = *((_QWORD*)a1 + 45);
  v37 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 56LL))(v36),
  v30 = COERCE_AS(__typeof__(v30),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v39 = COERCE_AS(__typeof__(v39),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46.val[0] = *v27;
  v46.val[1] = v27[1];
  v46.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v27);
  v46.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v27 + 16);
  vst4q_f32((float*)v37, v46);
  v46.val[0] = *v28;
  *(_QWORD*)(v37 + 64) = LANES128(*(v28)).n128_u64[0];
  *(_DWORD*)(v37 + 72) = LANES128(v46.val[0]).n128_u32[2];
  (*(void (**)(__int64))(*(_QWORD*)v36 + 64LL))(v36),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v38 = *(_QWORD*)(*(_QWORD*)(*v20 + 552) + 16LL);
  *((_QWORD*)a1 +
    48) = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 80LL))(v38),
    v30 = COERCE_AS(__typeof__(v30),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v39 = COERCE_AS(__typeof__(v39),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_QWORD*)a1 + 49) = v39;
  GameRoutine_5de60((_QWORD*)a1 + 48, *((_QWORD*)a1 + 45)),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_1365140(),
      v30 = COERCE_AS(__typeof__(v30),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v39 = COERCE_AS(__typeof__(v39),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return GameRoutine_188d6d0();
}

__int64 game_c8a9c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  double v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  bool v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int128 v18;
  int v20;
  int v21;
  int v22;
  __int64 v23[2];
  struct {
    __int128 v24;
    int* v25;
  } v24_;
  struct {
    int v26;
    bool v27;
    char gap121_[3];
    int v28;
  } v26_;
  __int64 v29[2];
  int v30;
  float32x4x4_t v31;

  if ((*(_BYTE*)(a1 + 400) & 1) != 0) {
    goto LABEL_30;
  }
  v2 = *(_QWORD*)(a1 + 464);
  if (v2 == 0) {
    goto LABEL_30;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  v29[1] = v3;
  if (v3 == 0) {
    goto LABEL_30;
  }
  v4 = *(_QWORD*)(a1 + 456);
  v5 = v3;
  v29[0] = v4;
  if (v4 == 0) {
    goto LABEL_28;
  }
  v26_.v26 = 0;
  v26_.v27 = false;
  v6 = *(_QWORD*)game_g_game_setting_ptr;
  if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 8) != 0) {
    v7 = 3;
  }
  else {
    v7 = 1;
  }
  v26_.v28 = v7;
  v8 = *(_DWORD*)(v6 + 952);
  if ((v8 & 1) != 0) {
    v26_.v26 = 1;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    DWORD2(v24_.v24) = 3;
    *(_QWORD*)&v24_.v24 = ui_Event_vtable;
  LABEL_24:
    v24_.v25 = &v26_.v26;
    v11 = std___1___shared_weak_count_lock(v3);
    if (v11 != 0) {
      v12 = v11;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int128*))(
          *(_QWORD*)(v4 + 72) + 16LL))((void*)(v23), v4 + 72, &v24_.v24);
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
    goto LABEL_27;
  }
  if ((v8 & 2) != 0) {
    v10 = 2;
  LABEL_23:
    v26_.v26 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)&v24_.v24 = ui_Event_vtable;
    DWORD2(v24_.v24) = 3;
    goto LABEL_24;
  }
  if ((v8 & 4) != 0) {
    v10 = 4;
    goto LABEL_23;
  }
  if ((v8 & 8) != 0) {
    v26_.v26 = 8;
  }
  else if ((v8 & 0x1000) != 0) {
    v26_.v26 = 4096;
  }
  else if ((v8 & 0x2000) != 0) {
    v26_.v26 = 0x2000;
  }
  else if ((v8 & 0x400) != 0) {
    v26_.v26 = 1024;
  }
  else if ((v8 & 0x800) != 0) {
    v26_.v26 = 2048;
  }
  else if ((v8 & 0x80) != 0) {
    v26_.v26 = 128;
  }
  else if ((v8 & 0x40) != 0) {
    v26_.v26 = 64;
  }
  else {
    if ((GameRoutine_1551d30() & 1) != 0) {
      v9 = GameRoutine_1551dc0();
      v23[0] = v4 + 72;
      v23[1] = v5;
      v24_.v24 =
          __PAIR64__(COERCE_UNSIGNED_INT(GameRoutine_1551e60()), LODWORD(v9));
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      game_c8ae20((void*)(&v30), v23, (__int64)&v24_.v24);
    LABEL_27:
      std___1___shared_weak_count___release_weak(v5);
      goto LABEL_28;
    }
    v20 = *(_DWORD*)(v6 + 948);
    v21 = 1114112;
    if ((v20 & 0x110000) != 0) {
      v22 = 0x10000;
    }
    else {
      v21 = 557056;
      if ((v20 & 0x88000) != 0) {
        v22 = 0x8000;
      }
      else {
        v21 = 4456448;
        if ((v20 & 0x440000) != 0) {
          v22 = 0x40000;
        }
        else {
          v21 = 2228224;
          if ((v20 & 0x220000) == 0) {
            goto LABEL_28;
          }
          v22 = 0x20000;
        }
      }
    }
    v26_.v26 = v22;
    v26_.v27 = (*(_DWORD*)(v6 + 952) & v21) != 0;
  }
  game_c8ad60(v29, (__int64)&v26_.v26);
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
LABEL_30:
  v13 = *(_DWORD*)(a1 + 344);
  v14 = v13 < -1;
  v15 = ((_BYTE)v13 + 1) & 1;
  if (v14) {
    v15 = -v15;
  }
  *(_DWORD*)(a1 + 344) = v15;
  v16 = *(_QWORD*)(a1 + 8LL * v15 + 352);
  v31.val[0] = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                                     COERCE_FLOAT(*(_OWORD*)GameData_212c2b0)),
                         COERCE_AS(float32x4_t, GameData_1a836b0),
                         *(float32x2_t*)GameData_212c2b0, 1),
          COERCE_AS(float32x4_t, GameData_1a832c0),
          *(float32x4_t*)GameData_212c2b0, 2),
      COERCE_AS(float32x4_t, GameData_1a82fc0), *(float32x4_t*)GameData_212c2b0,
      3);
  v31.val[1] = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                          COERCE_FLOAT(*((_OWORD*)GameData_212c2b0 + 1))),
              COERCE_AS(float32x4_t, GameData_1a836b0),
              *(float32x2_t*)((char*)GameData_212c2b0 + 16), 1),
          COERCE_AS(float32x4_t, GameData_1a832c0),
          *((float32x4_t*)GameData_212c2b0 + 1), 2),
      COERCE_AS(float32x4_t, GameData_1a82fc0),
      *((float32x4_t*)GameData_212c2b0 + 1), 3);
  v31.val[2] = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82bc0),
                          COERCE_FLOAT(*(_OWORD*)((char*)((char*)0x20LL) +
                                                  (_QWORD)GameData_212c2b0))),
              COERCE_AS(float32x4_t, GameData_1a836b0),
              *(float32x2_t*)((char*)((char*)0x20LL) +
                              (_QWORD)GameData_212c2b0),
              1),
          COERCE_AS(float32x4_t, GameData_1a832c0),
          *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0),
          2),
      COERCE_AS(float32x4_t, GameData_1a82fc0),
      *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0), 3);
  v31.val[3] = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(
                  COERCE_AS(float32x4_t, GameData_1a82bc0),
                  COERCE_FLOAT(*(_OWORD*)((char*)((char*)0x20LL) +
                                          (_QWORD)GameData_212c2b0 + 16))),
              COERCE_AS(float32x4_t, GameData_1a836b0),
              *(float32x2_t*)((char*)((char*)0x20LL) +
                              (_QWORD)GameData_212c2b0 + 16),
              1),
          COERCE_AS(float32x4_t, GameData_1a832c0),
          *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0 +
                          16),
          2),
      COERCE_AS(float32x4_t, GameData_1a82fc0),
      *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0 + 16),
      3);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 56LL))(v16);
  vst4q_f32((float*)v17, v31);
  v18 = *(_OWORD*)GameData_212c540;
  *(_QWORD*)(v17 + 64) = *(_QWORD*)GameData_212c540;
  *(_DWORD*)(v17 + 72) = DWORD2(v18);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 64LL))(v16);
  return 1;
}

__int64* game_c8ad60(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 (**v7)();
    int v8;
    char gap20_[4];
    __int64 v9;
  } v7_;
  __int64 var4;

  v2 = *result;
  if (*result != 0) {
    v3 = result[1];
    if (v3 != 0) {
      v4 = result[1];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v7_.v9 = a2;
      v7_.v7 = ui_Event_vtable;
      v7_.v8 = 3;
      v5 = std___1___shared_weak_count_lock(v4);
      if (v5 != 0) {
        v6 = v5;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                                __int64 (***)(void)))(
            *(_QWORD*)(v2 + 72) + 16LL))((void*)(&var4), v2 + 72, &v7_.v7);
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
      return (__int64*)std___1___shared_weak_count___release_weak(v3);
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_c8ae20(PSEUDO_X8 x8_, __int64* a1,
                                            __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v6;
  __int64 v7;
  struct {
    __int64* v8;
    int v9;
    char gap20_[4];
    __int64 v10;
  } v8_;

  result = a1[1];
  v8_.v10 = a2;
  v8_.v8 = GameData_212d890[0] + 2;
  v8_.v9 = 9;
  if (result == 0) {
    goto LABEL_7;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_7;
  }
  v6 = *a1;
  v7 = result;
  if (v6 != 0) {
    result =
        (*(__int64 (**)(__int64, __int64**))(*(_QWORD*)v6 + 16LL))(v6, &v8_.v8);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != 0) {
      result;
      return;
    }
    goto LABEL_7;
  }
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  result = std___1___shared_weak_count___release_weak(v7);
  if (v6 == 0) {
  LABEL_7:
    *a3 = 0;
  }
  {
    result;
    return;
  }
}

__int64 game_c8b000(__int64 a1, __int64* a2, char a3)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  _BYTE v17[4];
  struct {
    __int64 (**v18)();
    int v19;
    char gap20_[4];
    __int64 v20;
  } v18_;

  v4 = *(_QWORD*)(a1 + 464);
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    if (v7 != 0) {
      v8 = *(_QWORD*)(a1 + 456);
    }
    else {
      v8 = 0;
    }
    result = a2[1];
    if (result != 0) {
    LABEL_6:
      result = std___1___shared_weak_count_lock(result);
      v10 = result;
      if (result != 0) {
        v11 = *a2;
      }
      else {
        v11 = 0;
      }
      if ((a3 & 1) != 0) {
        goto LABEL_14;
      }
      goto LABEL_13;
    }
  }
  else {
    v7 = 0;
    v8 = 0;
    result = a2[1];
    if (result != 0) {
      goto LABEL_6;
    }
  }
  v10 = 0;
  v11 = 0;
  if ((a3 & 1) == 0) {
  LABEL_13:
    if (v8 == v11) {
      goto LABEL_43;
    }
  }
LABEL_14:
  if (v8 != 0) {
    if (v7 == 0) {
      if (v11 == 0) {
        goto LABEL_33;
      }
      goto LABEL_26;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v18_.v20 = 0;
    v18_.v18 = ui_Event_vtable;
    v18_.v19 = 17;
    v12 = std___1___shared_weak_count_lock(v7);
    if (v12 != 0) {
      v13 = v12;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                              __int64 (***)(void)))(
          *(_QWORD*)(v8 + 72) + 16LL))((void*)(v17), v8 + 72, &v18_.v18);
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
    std___1___shared_weak_count___release_weak(v7);
  }
  if (v11 == 0) {
    if (v7 == 0) {
      v11 = 0;
      goto LABEL_34;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    v11 = 0;
  LABEL_33:
    v7 = 0;
  LABEL_34:
    v14 = 1;
    goto LABEL_35;
  }
LABEL_26:
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
    if (v10 == 0) {
      goto LABEL_33;
    }
  }
  else if (v10 == 0) {
    goto LABEL_33;
  }
  v14 = 0;
  v7 = v10;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                            memory_order_relaxed);
LABEL_35:
  result = *(_QWORD*)(a1 + 464);
  *(_QWORD*)(a1 + 456) = v11;
  *(_QWORD*)(a1 + 464) = v7;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if (v11 != 0 && (v14 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v18_.v20 = 0;
    v18_.v18 = ui_Event_vtable;
    v18_.v19 = 16;
    v15 = std___1___shared_weak_count_lock(v7);
    if (v15 != 0) {
      v16 = v15;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64,
                                              __int64 (***)(void)))(
          *(_QWORD*)(v11 + 72) + 16LL))((void*)(v17), v11 + 72, &v18_.v18);
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
    result = std___1___shared_weak_count___release_weak(v7);
  }
LABEL_43:
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

void game_d39920(float32x4_t* a1)
{
  float32x4_t v2;
  unsigned __int32 v3;
  float32x2_t v4;
  float32x2_t v5;
  float v6;
  float v7;
  float v8;
  int v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int128 v14;
  float v15;
  float v16;
  float32x4_t v17;
  __int64 v18;
  float32x4_t v19;
  float32x2_t v20;
  struct {
    int8x8_t v21;
    char v22;
  } v21_;
  struct {
    int8x8_t v23;
    char v24;
  } v23_;
  unsigned __int64 v25;

  v2 = vsubq_f32(a1[2], a1[1]);
  v3 = LANES128_OF(vextq_s8(v2, v2, 8u)).n128_u32[0];
  LANES64(v4).n64_u64[0] =
      LANES64_OF(
          vadd_f32(
              vmul_f32(COERCE_AS(float32x2_t, v3), COERCE_AS(float32x2_t, v3)),
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v2).n128_u32[0]),
                       COERCE_AS(float32x2_t, LANES128(v2).n128_u32[0]))))
          .n64_u64[0];
  LANES64(v5).n64_u64[0] = LANES64_OF(vsqrt_f32(vpadd_f32(v4, v4))).n64_u64[0];
  if (LANES64(v5).n64_f32[0] >= 0x1.47ae140000000p-7f) {
    v6 = LANES128(*(a1)).n128_f32[0];
    v19 = v2;
    LANES64(v20).n64_u64[0] = LANES64(v5).n64_u64[0];
    v25 = __PAIR64__(LANES128(v2).n128_u32[1], LANES64(v5).n64_u32[0]);
    v7 = (float)(LANES128(v2).n128_f32[1] +
                 powf(vmuls_lane_f32(
                          LANES128(v2).n128_f32[1],
                          COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]), 1) +
                          (float)(LANES64(v5).n64_f32[0] *
                                  LANES64(v5).n64_f32[0]),
                      0x1.0000000000000p-1f)) *
         0x1.d6e1480000000p+4f;
    if (v7 <= 0x0.0p+0f) {
      v9 = 0;
      v8 = 0x0.0p+0f;
    }
    else {
      v8 = powf(v7, 0x1.0000000000000p-1f);
      if (v8 <= 0x0.0p+0f) {
        v9 = 0;
      }
      else {
        v9 = 1;
        v10 = LANES64(v20).n64_f32[0] / 0x1.e000000000000p+4f;
        if ((float)(LANES64(v20).n64_f32[0] / 0x1.e000000000000p+4f) >
            0x1.0000000000000p+0f) {
          v10 = 0x1.0000000000000p+0f;
        }
        v11 = (float)(v10 * 0x1.eb851e0000000p-5f) + 0x1.47ae140000000p-6f;
        v12 = (float)(v6 - v8) / (float)(v8 * 0x1.99999a0000000p-3f);
        if (v12 < 0x0.0p+0f) {
          v12 = 0x0.0p+0f;
        }
        if (v12 > 0x1.0000000000000p+0f) {
          v12 = 0x1.0000000000000p+0f;
        }
        v13 =
            v8 *
            (float)((float)(PSEUDO_UNFUSED(
                        (float)(0x1.0000000000000p+0f - v12) *
                        (float)(v11 * (float)(0x1.0000000000000p+0f - v12)))) +
                    0x1.0000000000000p+0f);
        if (v6 < v13) {
          v6 = v13;
        }
      }
    }
    GameRoutine_d39b90(&v23_.v23, &v25, v6);
    if (v23_.v24 == 1) {
      *(int8x8_t*)&v14 = v23_.v23;
    }
    else {
      v15 = v8 * 0x1.19999a0000000p+0f;
      if (v9 == 0) {
        v15 = 0x1.e848000000000p+19f;
      }
      GameRoutine_d39b90(&v21_.v21, &v25, v15);
      if (v21_.v22 == 0) {
        goto LABEL_22;
      }
      *(int8x8_t*)&v14 = v21_.v21;
    }
    if (fabsf(*(float*)&v14) >= 0x1.0000000000000p-23f) {
      LANES128(a1[3]).n128_u32[0] =
          LANES64_OF(vdiv_f32(v20, *(float32x2_t*)&v14)).n64_u32[0];
      v16 = LANES64_OF(vdiv_f32(*(float32x2_t*)&v14, v20)).n64_f32[0];
      *(float*)&v14 = LANES128(v19).n128_f32[0] * v16;
      *((float*)&v14 + 2) = LANES128(v19).n128_f32[2] * v16;
      goto LABEL_25;
    }
  }
LABEL_22:
  LANES128(a1[3]).n128_u32[0] = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
    v18 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v18;
    __cxa_guard_release(&GameData_21a61b0);
  }
  v14 = GameData_21a61a0;
LABEL_25:
  LANES128(a1[4]).n128_u64[0] = v14;
  v17 = a1[4];
  LANES128(v17).n128_u64[1] = DWORD2(v14);
  a1[4] = v17;
}

void game_d523c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  float v5;
  int v6;
  __int128 v7;
  __int128 v8;
  __int64 v9;
  __int64 v10;
  __int128 v11;
  __int128 v12;
  int v13;
  __int128 v14;
  __int128 v15;
  __int64 v16;
  struct {
    __int64 v17;
    char gap8_[8];
    __int128 v18;
    __int128 v19;
    int v20;
    char gap52_[12];
    _QWORD v21[2];
    unsigned __int8 v22;
  } v17_;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_BYTE*)(a1 + 104) == 1) {
    v3 = *(float*)(a1 + 96);
  }
  else {
    v4 = *(_QWORD*)(v2 + 600);
    v3 = 0x0.0p+0f;
    if (v4 != 0) {
      v5 = 0x1.99999a0000000p-3f;
    }
    else {
      v5 = 0x0.0p+0f;
    }
    if (v4 != 0) {
      v3 = fmodf(**(float**)(v2 + 144), 0x1.99999a0000000p-3f);
    }
    *(float*)(a1 + 100) = v5;
    *(_BYTE*)(a1 + 109) = 1;
    *(_BYTE*)(a1 + 104) = 1;
  }
  v6 = *(unsigned __int8*)(a1 + 320);
  *(_DWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 108) = 0;
  *(float*)(a1 + 96) = v3 + 0x0.0p+0f;
  if (v6 == 1) {
    GameRoutine_d33900((void*)((__int64)&v17_.v17), *(_QWORD*)(v2 + 24));
    if (*(unsigned __int8*)(a1 + 320) == v17_.v22) {
      if (*(_BYTE*)(a1 + 320) != 0) {
        v7 = v17_.v18;
        v8 = v17_.v19;
        v9 = v17_.v17;
        *(_QWORD*)(a1 + 304) = v17_.v21[0];
        v10 = *(_QWORD*)((char*)v17_.v21 + 5);
        *(_QWORD*)(a1 + 240) = v9;
        *(_QWORD*)(a1 + 256) = v7;
        *(_QWORD*)(a1 + 272) = v8;
        v11 = *(_OWORD*)(a1 + 256);
        v12 = *(_OWORD*)(a1 + 272);
        *(_QWORD*)(a1 + 309) = v10;
        *((_QWORD*)&v11 + 1) = DWORD2(v7);
        *((_QWORD*)&v12 + 1) = DWORD2(v8);
        *(_DWORD*)(a1 + 288) = v17_.v20;
        *(_OWORD*)(a1 + 256) = v11;
        *(_OWORD*)(a1 + 272) = v12;
      }
    }
    else if (*(_BYTE*)(a1 + 320) != 0) {
      *(_BYTE*)(a1 + 320) = 0;
    }
    else {
      v13 = v17_.v20;
      *(_QWORD*)(a1 + 240) = v17_.v17;
      v14 = v17_.v18;
      *(_DWORD*)(a1 + 288) = v13;
      *(_OWORD*)(a1 + 256) = v14;
      v15 = v17_.v19;
      *(_QWORD*)(a1 + 304) = v17_.v21[0];
      v16 = *(_QWORD*)((char*)v17_.v21 + 5);
      *(_OWORD*)(a1 + 272) = v15;
      *(_QWORD*)(a1 + 309) = v16;
      *(_BYTE*)(a1 + 320) = 1;
    }
  }
  CharacterRotate_d50de0(a1);
}

void game_d60410(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int128 v3;
  float v4;
  float v5;
  float v6;
  int v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;

  if (game_ProcFadeView_instance_ != 0) {
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v3 = *(_OWORD*)(v2 + 208);
    }
    if (*((float*)&v3 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                        v2 + 160, *((float*)&v3 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      goto LABEL_14;
    }
  }
  if (*(_BYTE*)(*(_QWORD*)a1 + 368LL) == 1 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 360LL) + 16LL) +
                           8LL) +
                145LL) != 1) {
    goto LABEL_13;
  }
  v4 = (float)(*(float*)(game_script_hub_g_frame_counter + 160) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  v5 = *(float*)(a1 + 24);
  if (v5 > 0x0.0p+0f) {
    v6 = v5 - fabsf(v4);
    if (v6 < 0x0.0p+0f) {
      v6 = 0x0.0p+0f;
    }
    *(float*)(a1 + 24) = v6;
  LABEL_13:
    if ((*(_BYTE*)(a1 + 28) & 1) != 0) {
      return;
    }
    goto LABEL_14;
  }
  v9 = *(float*)(a1 + 8);
  v8 = *(float*)(a1 + 12);
  if (v8 >= v9) {
    v10 = *(float*)(a1 + 20);
    if (v10 <= 0x0.0p+0f) {
    LABEL_21:
      v8 = *(float*)(a1 + 8);
      goto LABEL_22;
    }
  }
  else {
    v10 = *(float*)(a1 + 16);
    if (v10 <= 0x0.0p+0f) {
      goto LABEL_21;
    }
  }
  v11 = v4 * (float)(0x1.0000000000000p+0f / v10);
  if (v11 < 0x0.0p+0f) {
    goto LABEL_21;
  }
  v12 = fabsf(v11);
  if (v8 <= v9) {
    if (v8 < v9) {
      v8 = v8 + v12;
      if (v8 > v9) {
        goto LABEL_21;
      }
    }
  }
  else {
    v8 = v8 - v12;
    if (v8 < v9) {
      goto LABEL_21;
    }
  }
LABEL_22:
  *(float*)(a1 + 12) = v8;
  if ((*(_BYTE*)(a1 + 28) & 1) == 0) {
  LABEL_14:
    v7 = *(_DWORD*)(a1 + 8);
    *(_DWORD*)(a1 + 24) = 0;
    *(_BYTE*)(a1 + 28) = 1;
    *(_DWORD*)(a1 + 12) = v7;
  }
}

void game_d60670(__int64 a1, int a2, char a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int128 v7;
  int v8;

  v4 = a1 + 32LL * a2;
  v5 = v4 + 8;
  *(float*)(v4 + 16) = a4;
  if ((a3 & 1) != 0) {
    *(_DWORD*)(v4 + 32) = 0;
    *(float*)(v4 + 20) = a4;
    *(_BYTE*)(v4 + 36) = 1;
    *(_BYTE*)(a1 + 369) = 1;
    CharacterModel_cf5c00(*(_QWORD*)(a1 + 360));
  }
  else {
    if (game_ProcFadeView_instance_ != 0) {
      v6 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160);
      }
      else {
        v7 = *(_OWORD*)(v6 + 208);
      }
      if (*((float*)&v7 + 3) == 0x1.0000000000000p+0f &&
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                          v6 + 160, *((float*)&v7 + 3)))
                  .n128_f32[3] == 0x1.0000000000000p+0f) {
        v8 = *(_DWORD*)(v5 + 8);
        *(_DWORD*)(v5 + 24) = 0;
        *(_DWORD*)(v5 + 12) = v8;
      }
    }
    *(_BYTE*)(v5 + 28) = 1;
  }
}

__int64 game_d71720(__int64 result, float** a2, __int64 a3, char a4)
{

#pragma clang fp contract(off)
  __int64 v7;
  float** v8;
  __int64 v9;
  float* v10;
  float** v11;
  float v12;
  float* v13;
  float* v14;
  float v15;
  float* v16;
  float* v17;
  float v18;
  float* v19;
  float* v20;
  float* v21;
  float* v22;
  float* v23;
  float* v24;
  float v25;
  float v26;
  float* v27;
  float* v28;
  float* v29;
  float* v30;
  float* v31;
  float* v32;
  float* v33;
  float v34;
  float v35;
  float* v36;
  float* v37;
  float* v38;
  float* v39;
  float* v40;
  float* v41;
  float v42;
  float v43;
  float* v44;
  float* v45;
  float v46;
  __int64 v47;
  float** v48;
  float* v49;
  float** v50;
  float** v51;
  float* v52;
  float* v53;
  float* v54;
  float** v55;
  float** v56;
  float v57;
  float* v58;
  float* v59;
  float** v60;
  bool v61;
  bool v62;
  float* v63;
  unsigned __int64 v64;
  float** v65;
  float* v66;
  float* v67;
  float* v68;
  float v69;
  float* v70;
  float* v71;
  float** v72;
  float* v73;
  float* v74;
  float* v75;
  float* v76;
  float* v77;
  float v78;
  float v79;
  float* v80;
  float* v81;
  float* v82;
  float v83;
  float v84;
  float** v85;
  bool v87;
  __int64 v88;
  float** v89;
  float** v90;
  float* v91;
  float* v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  bool v98;
  __int64 v99;
  float** v100;
  float** v101;
  float* v102;
  float* v103;
  float** v104;
  __int64 v105;
  float* v106;
  __int64 v107;
  float** v108;
  float** v109;
  float** v110;
  __int64 v111;
  float** v112;
  float* v113;
  __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  float* v117;
  float** v118;
  float* v119;
  float** v120;
  float* v121;
  float* v122;
  float* v123;
  float* v124;
  float* v125;
  float* v126;
  float* v127;

  v7 = result;
  while (2) {
    v8 = (float**)v7;
    while (1) {
      while (1) {
        v7 = (__int64)v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(a2 - 1);
            v78 = *v76;
            v79 = *v77;
            if (*v76 < **v8) {
              if (v79 >= v78) {
                *v8 = v76;
                v8[1] = v75;
                v124 = *(a2 - 1);
                if (*v124 < *v75) {
                  v8[1] = v124;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v77;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 >= v78) {
              return result;
            }
            v8[1] = v77;
            *(a2 - 1) = v76;
            v121 = v8[1];
          LABEL_178:
            v127 = *v8;
            if (*v121 < **v8) {
              *v8 = v121;
              v8[1] = v127;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return (__int64)GameRoutine_d72160(v8, v8 + 1, v8 + 2, v8 + 3,
                                                 a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = v8[2];
          v83 = *v80;
          v84 = *v82;
          if (*v80 >= **v8) {
            if (v84 < v83) {
              v8[1] = v82;
              v8[2] = v80;
              if (*v82 < *v81) {
                *v8 = v82;
                v8[1] = v81;
              }
              goto LABEL_175;
            }
          }
          else {
            if (v84 < v83) {
              *v8 = v82;
            LABEL_173:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_175;
            }
            *v8 = v80;
            v8[1] = v81;
            if (*v82 < *v81) {
              v8[1] = v82;
              goto LABEL_173;
            }
          }
          v80 = v82;
        LABEL_175:
          v125 = *(a2 - 1);
          if (*v125 >= *v80) {
            return result;
          }
          v8[2] = v125;
          *(a2 - 1) = v80;
          v126 = v8[1];
          v121 = v8[2];
          if (*v121 >= *v126) {
            return result;
          }
          v8[1] = v121;
          v8[2] = v126;
          goto LABEL_178;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if (*v73 < **v8) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if (*v91 < *v92) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(float**)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_123;
                    }
                    v95 = (char*)v8 + v93;
                    v93 -= 8;
                    v92 = *((float**)v95 - 2);
                  } while (*v91 < *v92);
                  v90 = (float**)((char*)v8 + v94);
                LABEL_123:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v123 = *(float**)v7;
              v122 = *(float**)(v7 + 8);
              v7 = (__int64)v85;
              if (*v122 < *v123) {
                do {
                  *v85 = v123;
                  v123 = *(v85 - 2);
                  --v85;
                } while (*v122 < *v123);
                *v85 = v122;
              }
              v85 = (float**)(v7 + 8);
            } while ((float**)(v7 + 8) != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v96 = (unsigned __int64)(v9 - 2) >> 1;
            v97 = v96;
            do {
              if (v96 >= v97) {
                v99 = (2 * (v97 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v100 = &v8[v99];
                if ((__int64)(2 * v97 + 2) < v9 && **v100 < *v100[1]) {
                  ++v100;
                  v99 = 2 * v97 + 2;
                }
                v101 = &v8[v97];
                v102 = *v100;
                v103 = *v101;
                if (**v100 >= **v101) {
                  do {
                    v104 = v100;
                    *v101 = v102;
                    if ((__int64)v96 < v99) {
                      break;
                    }
                    v105 = 2 * v99 + 2;
                    v99 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v100 = &v8[v99];
                    if (v105 < v9 && **v100 < *v100[1]) {
                      ++v100;
                      v99 = v105;
                    }
                    v102 = *v100;
                    v101 = v104;
                  } while (**v100 >= *v103);
                  *v104 = v103;
                }
              }
              v98 = (__int64)v97-- <= 0;
            } while (!v98);
            do {
              v106 = *v8;
              v107 = 0;
              v108 = v8;
              do {
                v109 = &v108[v107];
                v110 = v108;
                v108 = v109 + 1;
                v111 = 2 * v107 + 2;
                v107 = (2 * v107) | 1;
                if (v111 < v9) {
                  v113 = v109[2];
                  v112 = v109 + 2;
                  if (**(v112 - 1) < *v113) {
                    v108 = v112;
                    v107 = v111;
                  }
                }
                *v110 = *v108;
              } while (v107 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v108 == --a2) {
                *v108 = v106;
              }
              else {
                *v108 = *a2;
                *a2 = v106;
                v114 = ((char*)v108 - (char*)v8 + 8) >> 3;
                v98 = v114 < 2;
                v115 = v114 - 2;
                if (!v98) {
                  v116 = v115 >> 1;
                  v117 = *v108;
                  v118 = &v8[v116];
                  v119 = *v118;
                  if (**v118 < **v108) {
                    do {
                      v120 = v118;
                      *v108 = v119;
                      if (v116 == 0) {
                        break;
                      }
                      v116 = (v116 - 1) >> 1;
                      v108 = v118;
                      v118 = &v8[v116];
                      v119 = *v118;
                    } while (**v118 < *v117);
                    *v120 = v117;
                  }
                }
              }
              v98 = v9-- <= 2;
            } while (!v98);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *v10;
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = **v11;
          if (v15 >= **v8) {
            if (v12 < v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if (**v11 < **v8) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 >= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if (*v21 >= *v14) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(a2 - 2);
          v25 = *v22;
          v26 = *v24;
          if (*v22 >= *v23) {
            if (v26 < v25) {
              *(v11 - 1) = v24;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if (*v27 < *v28) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 >= v25) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if (*v30 >= *v23) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v24;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(a2 - 3);
          v34 = *v31;
          v35 = *v33;
          if (*v31 >= *v32) {
            if (v35 < v34) {
              v11[1] = v33;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if (*v36 < *v37) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 >= v34) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if (*v38 >= *v32) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v33;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = v11[1];
          v42 = **v11;
          v43 = *v41;
          if (v42 >= *v39) {
            if (v43 >= v42) {
              goto LABEL_55;
            }
            *v11 = v41;
            v11[1] = v40;
            if (*v41 < *v39) {
              *(v11 - 1) = v41;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 < v42) {
              *(v11 - 1) = v41;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if (*v41 >= *v39) {
              goto LABEL_59;
            }
            *v11 = v41;
            v11[1] = v39;
          }
          v39 = v41;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = **v8;
        if (v18 >= **v11) {
          if (v12 < v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if (**v8 < **v11) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 < v18) {
            *v11 = v10;
          LABEL_36:
            *(a2 - 1) = v17;
            goto LABEL_60;
          }
          *v11 = v16;
          *v8 = v17;
          v29 = *(a2 - 1);
          if (*v29 < *v17) {
            *v8 = v29;
            goto LABEL_36;
          }
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        v46 = **v8;
        if ((a4 & 1) != 0 || **(v8 - 1) < v46) {
          break;
        }
        if (v46 >= **(a2 - 1)) {
          v64 = (unsigned __int64)(v8 + 1);
          do {
            v8 = (float**)v64;
            if (v64 >= (unsigned __int64)a2) {
              break;
            }
            v64 += 8LL;
          } while (v46 >= **v8);
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 >= *v63);
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 < *v66);
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *v45;
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 >= *v70);
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 < *v71);
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if ((float**)v7 != v8 - 1) {
          *(_QWORD*)v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while (*v49 < v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while (*v53 >= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while (*v52 >= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_80;
        }
      LABEL_79:
        *v8 = *v60;
        goto LABEL_80;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *v45;
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while (*v58 < v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while (*v59 >= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_79;
      }
    LABEL_80:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_83;
      }
      v61 = game_d722e0(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = game_d722e0(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if (!v62) {
      LABEL_83:
        result = game_d71720(v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if (!v62) {
      continue;
    }
    return result;
  }
}

bool game_d722e0(float** a1, float** a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float* v3;
  float* v4;
  float* v5;
  float* v6;
  float* v7;
  float v8;
  float v9;
  float* v10;
  float* v11;
  float* v12;
  float** v13;
  float v14;
  float v15;
  float* v16;
  float* v17;
  float* v18;
  float v19;
  float v20;
  float* v21;
  float* v22;
  float** v23;
  __int64 v24;
  int v25;
  float** v26;
  float* v27;
  float* v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  float* v32;
  float* v33;
  float* v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *v6;
      v9 = *v7;
      if (*v6 < **a1) {
        if (v9 >= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if (*v22 < *v5) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if (*v21 < **a1) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      GameRoutine_d72160(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *v16;
    v20 = *v18;
    if (*v16 >= **a1) {
      if (v20 < v19) {
        a1[1] = v18;
        a1[2] = v16;
        if (*v18 < *v17) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if (*v18 < *v17) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if (*v32 >= *v16) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if (*v21 >= *v33) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if (*v3 < **a1) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v10 = *a1;
  v11 = a1[1];
  v13 = a1 + 2;
  v12 = a1[2];
  v14 = *v11;
  v15 = *v12;
  if (*v11 >= **a1) {
    if (v15 < v14) {
      a1[1] = v12;
      a1[2] = v11;
      if (*v12 < *v10) {
        *a1 = v12;
        a1[1] = v10;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v11;
      a1[1] = v10;
      if (*v12 >= *v10) {
        goto LABEL_32;
      }
      a1[1] = v12;
    }
    else {
      *a1 = v12;
    }
    a1[2] = v10;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v13;
    if (**v23 < *v28) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(float**)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((float**)v31 - 2);
      } while (*v27 < *v28);
      v26 = (float**)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v13 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

bool game_d74600(float* a1, float* a2, int* a3, float a4)
{
  float v4;
  long double v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  int v19;
  float v20;
  int v21;

  if (*a2 < (float)(a1[2] - a4)) {
    return false;
  }
  if (*a2 > (float)(a4 + a1[4])) {
    return false;
  }
  v4 = a2[1];
  if (v4 < (float)(a1[3] - a4) || v4 > (float)(a4 + a1[5])) {
    return false;
  }
  if ((GameRoutine_d740c0((__int64)a1, a3) & 1) != 0) {
    return false;
  }
  v12 = *a2;
  v11 = a2[1];
  v13 = v11 - a1[1];
  *(float*)&v10 = *a2 - *a1;
  v14 = (float)(PSEUDO_UNFUSED(v13 * v13)) +
        (float)(*(float*)&v10 * *(float*)&v10);
  v15 = 0x0.0p+0f;
  if (v14 > 0x0.0p+0f) {
    if (*(float*)&v10 != 0x0.0p+0f || v13 != 0x0.0p+0f) {
      v16 = sqrtf(v14);
      *(float*)&v10 = *(float*)&v10 / v16;
      v13 = v13 / v16;
    }
    v15 = atan2f(v10, v13);
  }
  v17 = fmodf(v15, 0x1.921fb60000000p+2f);
  v18 = v17 + 0x0.0p+0f;
  if (v17 < 0x0.0p+0f) {
    v18 = (float)(v17 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v18 >= 0x1.921fb60000000p-1f) {
    v20 = a4;
    if (v18 >= 0x1.2d97c80000000p+1f) {
      if (v18 >= 0x1.5fdbc00000000p+2f) {
        v21 = 1;
      }
      else {
        v21 = 2;
      }
      if (v18 >= 0x1.f6a7a40000000p+1f) {
        v19 = v21;
      }
      else {
        v19 = 0;
      }
    }
    else {
      v19 = 3;
    }
  }
  else {
    v19 = 1;
    v20 = a4;
  }
  GameRoutine_d747c0((__int64)a1, a2, v19, a3, v20);
  return v11 != a2[1] || v12 != *a2;
}

__attribute__((swiftcall)) void game_d74a00(PSEUDO_X8 x8_, float* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  float result;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9;
  float v10;
  float v11;
  int v12;
  int v13;
  int v14;
  bool v15;
  float v16;
  float v17;
  float v18;

  v2 = *a1;
  v3 = a1[1];
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)a2 = 0x4020000040200000LL;
  *(_QWORD*)(a2 + 8) = 0;
  result = (float)(v3 + 0x1.4000000000000p+10f) * 0x1.99999a0000000p-3f;
  *(_QWORD*)(a2 + 16) = 0x40A0000040A00000LL;
  v5 = (int)(float)((float)(v2 + 0x1.4000000000000p+10f) *
                    0x1.99999a0000000p-3f);
  v6 = (int)result;
  v7 = v5 - 256;
  v8 = (int)result - 256;
  *(_DWORD*)(a2 + 24) = v5 - 256;
  *(_DWORD*)(a2 + 28) = v8;
  if (((v5 - 256) | v8) != 0) {
    *(_DWORD*)(a2 + 32) = v7;
    *(_DWORD*)(a2 + 36) = v8;
    v9 = (float)((float)((float)v5 * 0x1.4000000000000p+2f) +
                 0x1.4000000000000p+1f) +
         -0x1.4000000000000p+10f;
    v10 = (float)((float)((float)v6 * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
    *(float*)a2 = v9;
    *(float*)(a2 + 4) = v10;
    v11 = v9 + -0x1.4000000000000p+1f;
    result = v9 + 0x1.4000000000000p+1f;
    *(float*)(a2 + 8) = v11;
    *(float*)(a2 + 12) = v10 + -0x1.4000000000000p+1f;
    *(float*)(a2 + 16) = result;
    *(float*)(a2 + 20) = v10 + 0x1.4000000000000p+1f;
  }
  if (GameData_21ca300 != 0) {
    v12 = *(unsigned __int8*)(GameData_21ca300 + 30);
    v13 = *(unsigned __int8*)(GameData_21ca300 + 28);
    if (v7 < v12) {
      v12 = v5 - 256;
    }
    if (v7 >= v13) {
      v13 = v12;
    }
    v14 = *(unsigned __int8*)(GameData_21ca300 + 31);
    if (v8 < v14) {
      v14 = v8;
    }
    if (v8 < *(unsigned __int8*)(GameData_21ca300 + 29)) {
      v14 = *(unsigned __int8*)(GameData_21ca300 + 29);
    }
    v15 = v7 == v13 && v8 == v14;
    *(_DWORD*)(a2 + 24) = v13;
    *(_DWORD*)(a2 + 28) = v14;
    if (!v15) {
      *(_DWORD*)(a2 + 32) = v13;
      *(_DWORD*)(a2 + 36) = v14;
      v16 = (float)((float)((float)(v13 + 256) * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      v17 = (float)((float)((float)(v14 + 256) * 0x1.4000000000000p+2f) +
                    0x1.4000000000000p+1f) +
            -0x1.4000000000000p+10f;
      *(float*)a2 = v16;
      *(float*)(a2 + 4) = v17;
      v18 = v16 + -0x1.4000000000000p+1f;
      result = v16 + 0x1.4000000000000p+1f;
      *(float*)(a2 + 8) = v18;
      *(float*)(a2 + 12) = v17 + -0x1.4000000000000p+1f;
      *(float*)(a2 + 16) = result;
      *(float*)(a2 + 20) = v17 + 0x1.4000000000000p+1f;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_d75140(PSEUDO_X8 x8_, __int64 a1, int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  int v4;
  unsigned __int64 v7;
  int v8;
  float v9;
  float v10;
  int v11;
  int v12;
  float v13;
  float v14;
  float v15;
  float v16;
  bool v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 result;
  int v35;
  int v36;

  v3 = a1;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  if (a2 < 0) {
    v7 = 0;
    result = 0;
  }
  else {
    v4 = -a2;
    v7 = 0;
    v35 = -a2;
    do {
      v8 = v35;
      v36 = v4;
      do {
        v9 = 0.0f;
        v10 = 0.0f;
        v11 = *(_DWORD*)(v3 + 24) + v4;
        v12 = *(_DWORD*)(v3 + 28) + v8;
        v13 = 0.0f;
        v14 = 0.0f;
        v15 = 0.0f;
        v16 = 0.0f;
        v17 = v11 == -10000 && v12 == -10000;
        if (!v17) {
          v16 = (float)((float)((float)(v11 + 256) * 5.0f) + 2.5f) +
                -0x1.4000000000000p+10f;
          v9 = v16 + -2.5f;
          v13 = v16 + 2.5f;
          v15 = (float)((float)((float)(v12 + 256) * 5.0f) + 2.5f) +
                -0x1.4000000000000p+10f;
          v10 = v15 + -2.5f;
          v14 = v15 + 2.5f;
        }
        v18 = a3[2];
        if (v7 < v18) {
          *(float*)v7 = v16;
          *(float*)(v7 + 4) = v15;
          *(float*)(v7 + 8) = v9;
          *(float*)(v7 + 12) = v10;
          *(float*)(v7 + 16) = v13;
          *(float*)(v7 + 20) = v14;
          *(_DWORD*)(v7 + 24) = v11;
          *(_DWORD*)(v7 + 28) = v12;
          *(_DWORD*)(v7 + 32) = v11;
          *(_DWORD*)(v7 + 36) = v12;
          v7 += 40LL;
        }
        else {
          v19 = (_QWORD*)*a3;
          v20 = v7 - *a3;
          v21 = 0xCCCCCCCCCCCCCCCDLL * (v20 >> 3) + 1;
          if (v21 > 0x666666666666666LL) {
            GameRoutine_d75440();
          }
          v22 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v18 - (_QWORD)v19) >> 3);
          if (2 * v22 > v21) {
            v21 = 2 * v22;
          }
          if (v22 >= 0x333333333333333LL) {
            v23 = 0x666666666666666LL;
          }
          else {
            v23 = v21;
          }
          if (v23 > 0x666666666666666LL) {
            GameRoutine_60a210(a1);
          }
          v24 = 5 * v23;
          v25 = v3;
          a1 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v23, 16, 0);
          v26 = a1 + v20;
          *(float*)v26 = v16;
          *(float*)(v26 + 4) = v15;
          *(float*)(v26 + 8) = v9;
          *(float*)(v26 + 12) = v10;
          *(float*)(v26 + 16) = v13;
          *(float*)(v26 + 20) = v14;
          *(_DWORD*)(v26 + 24) = v11;
          *(_DWORD*)(v26 + 28) = v12;
          *(_DWORD*)(v26 + 32) = v11;
          *(_DWORD*)(v26 + 36) = v12;
          if (v19 != (_QWORD*)v7) {
            v27 = v19;
            v28 = (_QWORD*)a1;
            do {
              *v28 = *v27;
              v29 = v27[1];
              v30 = v27[2];
              v31 = v27[3];
              v32 = v27[4];
              v27 += 5;
              v28[3] = v31;
              v28[4] = v32;
              v28[1] = v29;
              v28[2] = v30;
              v28 += 5;
            } while (v27 != (_QWORD*)v7);
          }
          v7 = v26 + 40;
          *a3 = a1;
          a3[1] = v26 + 40;
          a3[2] = a1 + 8 * v24;
          if (v19 != nullptr) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v33 = 56;
            }
            a1 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v19);
          }
          v3 = v25;
          v4 = v36;
        }
        a3[1] = v7;
        v17 = v8++ == a2;
      } while (!v17);
      v17 = v4++ == a2;
    } while (!v17);
    result = *a3;
  }
  if (result != v7) {
    GameRoutine_d75460();
    return;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_d8f820(PSEUDO_X8 x8_, __int64 result)
{
  _BYTE* a2 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v25;
  char v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v37;
  int v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v2 = *(unsigned __int8*)(result + 344);
  v4 = *(_QWORD*)(result + 352);
  v5 = result;
  if ((v2 & 1) == 0) {
    v4 = v2 >> 1;
  }
  if (v4 != 0) {
    v6 = (v2 & 1) != 0 ? *(_QWORD*)(result + 360) : result + 345;
    if (v4 >= 33) {
      v7 = *(_QWORD*)(result + 368);
      v8 = *(_QWORD*)(result + 376);
      result = v6;
      v9 = v6 + v4;
      do {
        result = memchr(result, 227, v4 - 32);
        if (result == 0) {
          break;
        }
        if (*(_QWORD*)result == 0x83E3A383E3AD82E3LL &&
            *(_QWORD*)(result + 8) == 0xE3A282E3A894E7A9LL &&
            *(_QWORD*)(result + 16) == 0xB383E3B382E3A482LL &&
            *(_QWORD*)(result + 24) == 0x81E3B89BE68AB8E4LL &&
            *(unsigned __int8*)(result + 32) == 141) {
          v14 = 0;
          if (result == v9) {
            v15 = 0;
          }
          else {
            v40 = result - v6;
            v15 = 0;
            if (v40 != -1) {
              if (v7 == v8) {
                v14 = 0;
              }
              else {
                v14 = 0;
                do {
                  result = GameRoutine_fb1b40(v7);
                  v7 += 24;
                  v14 |= result;
                } while (v7 != v8);
              }
              v15 = 1;
            }
          }
          goto LABEL_25;
        }
        ++result;
        v4 = v9 - result;
      } while (v9 - result >= 33);
    }
  }
  v14 = 0;
  v15 = 0;
LABEL_25:
  v16 = *(unsigned __int8*)(v5 + 392);
  v17 = *(_QWORD*)(v5 + 400);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v17 != 0) {
    v18 = (v16 & 1) != 0 ? *(_QWORD*)(v5 + 408) : v5 + 393;
    if (v17 >= 33) {
      v19 = *(_QWORD*)(v5 + 416);
      v20 = v18 + v17;
      result = v18;
      v43 = *(_QWORD*)(v5 + 424);
      do {
        result = memchr(result, 227, v17 - 32);
        if (result == 0) {
          break;
        }
        if (*(_QWORD*)result == 0x83E3A383E3AD82E3LL &&
            *(_QWORD*)(result + 8) == 0xE3A282E3A894E7A9LL &&
            *(_QWORD*)(result + 16) == 0xB383E3B382E3A482LL &&
            *(_QWORD*)(result + 24) == 0x81E3B89BE68AB8E4LL &&
            *(unsigned __int8*)(result + 32) == 141) {
          v25 = 0;
          if (result == v20) {
            v26 = 0;
          }
          else {
            v41 = result - v18;
            v26 = 0;
            if (v41 != -1) {
              if (v19 == v43) {
                v25 = 0;
              }
              else {
                v25 = 0;
                do {
                  result = GameRoutine_fb1b40(v19);
                  v19 += 24;
                  v25 |= result;
                } while (v19 != v43);
              }
              v26 = 1;
            }
          }
          goto LABEL_49;
        }
        ++result;
        v17 = v20 - result;
      } while (v20 - result >= 33);
    }
  }
  v25 = 0;
  v26 = 0;
LABEL_49:
  v27 = *(unsigned __int8*)(v5 + 440);
  v28 = *(_QWORD*)(v5 + 448);
  if ((v27 & 1) == 0) {
    v28 = v27 >> 1;
  }
  if (v28 != 0) {
    if ((v27 & 1) != 0) {
      v29 = *(_QWORD*)(v5 + 456);
    }
    else {
      v29 = v5 + 441;
    }
    if (v28 >= 33) {
      v31 = v5 + 464;
      v30 = *(_QWORD*)(v5 + 464);
      v32 = v29 + v28;
      result = v29;
      v42 = *(_QWORD*)(v31 + 8);
      do {
        result = memchr(result, 227, v28 - 32);
        if (result == 0) {
          break;
        }
        if (*(_QWORD*)result == 0x83E3A383E3AD82E3LL &&
            *(_QWORD*)(result + 8) == 0xE3A282E3A894E7A9LL &&
            *(_QWORD*)(result + 16) == 0xB383E3B382E3A482LL &&
            *(_QWORD*)(result + 24) == 0x81E3B89BE68AB8E4LL &&
            *(unsigned __int8*)(result + 32) == 141) {
          v37 = 0;
          if (result == v32) {
            LODWORD(v28) = 0;
          }
          else {
            LODWORD(v28) = 0;
            if (result - v29 != -1) {
              if (v30 == v42) {
                v37 = 0;
              }
              else {
                v37 = 0;
                do {
                  result = GameRoutine_fb1b40(v30);
                  v30 += 24;
                  v37 |= result;
                } while (v30 != v42);
              }
              LODWORD(v28) = 1;
            }
          }
          goto LABEL_74;
        }
        ++result;
        v28 = v32 - result;
      } while (v32 - result >= 33);
    }
    v37 = 0;
    LODWORD(v28) = 0;
  }
  else {
    v37 = 0;
  }
LABEL_74:
  if (v15 != 0) {
    v38 = v14;
  }
  else {
    v38 = 0;
  }
  if ((v26 & 1) != 0) {
    v38 |= v25;
    v14 = v38;
    if ((_DWORD)v28 == 0) {
      goto LABEL_82;
    }
  }
  else if ((v28 & 1) == 0) {
    if (v15 == 0) {
      v39 = 0;
      *a2 = 0;
      goto LABEL_83;
    }
  LABEL_82:
    v39 = 1;
    *(_DWORD*)a2 = v14;
  LABEL_83:
    a2[4] = v39;
    {
      result;
      return;
    }
  }
  v14 = v38 | v37;
  goto LABEL_82;
}

__attribute__((swiftcall)) void game_d8fea0(PSEUDO_X8 x8_, __int64 result,
                                            __int64* a2)
{
  _BYTE* a3 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  unsigned __int8 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char** v20;
  char* v21;
  char* v22;
  _BYTE* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  unsigned __int8* v28;
  unsigned __int8* v29;
  __int64 v30;
  char** v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  unsigned __int8* v41;
  unsigned __int8* v42;
  __int64 v44;
  __int64 v45;
  unsigned __int8* v46;
  __int64 v47;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  _BYTE* v66;
  __int64 v67;
  int v68;
  __int64 v69;
  __int64 v70;
  char* v71;

  v3 = *(unsigned __int8*)result;
  v4 = v3 & 1;
  v5 = v3 >> 1;
  if ((v3 & 1) != 0) {
    v6 = *(_QWORD*)(result + 8);
  }
  else {
    v6 = v3 >> 1;
  }
  if (v6 != 0) {
    v65 = *(_QWORD*)(result + 8);
    v66 = a3;
    v7 = a2[1];
    v8 = (unsigned __int8*)result;
    v9 = v7 - *a2;
    v67 = *a2;
    v64 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
    if (v64 >= 2) {
      v10 = (v3 & 1) != 0 ? *(_QWORD*)(result + 16) : result + 1;
      if (v6 >= 12) {
        v11 = v10 + v6;
        v12 = v6;
        result = v10;
        do {
          result = memchr(result, 230, v12 - 11);
          if (result == 0) {
            break;
          }
          if (*(_QWORD*)result == 0x96E9ADA8E8BD96E6LL &&
              *(_DWORD*)(result + 8) == -1951930997) {
            if (result == v11 || result - v10 == -1) {
              break;
            }
            v14 = 0;
            v15 = *(_BYTE*)(v67 + 24);
            v16 = (v15 & 1) == 0;
            v17 = v15 >> 1;
            if ((v15 & 1) != 0) {
              v18 = *(_QWORD*)(v67 + 40);
            }
            else {
              v18 = v67 + 25;
            }
            if (v16) {
              v19 = v17;
            }
            else {
              v19 = *(_QWORD*)(v67 + 32);
            }
            v63 = v18;
            v20 = GameData_212fbf8;
            while (1) {
              v22 = *v20;
              v20 += 2;
              v21 = v22;
              result = strlen(v22);
              if (result == v19) {
                if (result == -1) {
                LABEL_145:
                  String_60a230();
                }
                result = memcmp(v63, v21, result);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              if (++v14 == 32) {
                goto LABEL_35;
              }
            }
            v70 = 0;
            v71 = nullptr;
            v69 = 0;
            v68 = v14;
            if (v9 == 48) {
            LABEL_141:
              v23 = v66;
            }
            else {
              v23 = v66;
              v24 = (__int64*)(v67 + 48);
              if (&v69 != (__int64*)(v67 + 48)) {
                if ((*(_BYTE*)v24 & 1) != 0) {
                  v26 = *(_QWORD*)(v67 + 56);
                  v25 = *(_QWORD*)(v67 + 64);
                LABEL_143:
                  result = GameRoutine_64df20(&v69, v25, v26);
                  LODWORD(v14) = v68;
                }
                else {
                LABEL_66:
                  v38 = *v24;
                  v39 = v24[1];
                  v40 = (char*)v24[2];
                  v69 = v38;
                  v70 = v39;
                  v71 = v40;
                }
              }
            }
          LABEL_144:
            v61 = v69;
            v62 = v70;
            *(_DWORD*)v23 = v14;
            *((_QWORD*)v23 + 1) = v61;
            *((_QWORD*)v23 + 2) = v62;
            *((_QWORD*)v23 + 3) = v71;
            v23[32] = 1;
            {
              result;
              return;
            }
          }
          ++result;
          v12 = v11 - result;
        } while (v11 - result >= 12);
      }
    }
  LABEL_35:
    v27 = *((unsigned __int8**)v8 + 2);
    if (v7 != v67) {
      v28 = v4 != 0 ? *((unsigned __int8**)v8 + 2) : v8 + 1;
      if (v6 >= 24) {
        v29 = &v28[v6];
        v30 = v6;
        result = (__int64)v28;
        do {
          result = memchr(result, 230, v30 - 23);
          if (result == 0) {
            break;
          }
          if (*(_QWORD*)result == 0x82E3ADA8E8BD96E6LL &&
              *(_QWORD*)(result + 8) == 0xE3B382E3A482E3A2LL &&
              *(_QWORD*)(result + 16) == 0x8EB8E498BBE4B383LL) {
            if ((unsigned __int8*)result == v29 || result - (_QWORD)v28 == -1) {
              break;
            }
            v14 = 0;
            v33 = GameData_212fbf8;
            if ((*(_BYTE*)v67 & 1) != 0) {
              v34 = *(_QWORD*)(v67 + 16);
            }
            else {
              v34 = v67 + 1;
            }
            if ((*(_BYTE*)v67 & 1) != 0) {
              v35 = *(_QWORD*)(v67 + 8);
            }
            else {
              v35 = *(_BYTE*)v67 >> 1;
            }
            while (1) {
              v37 = *v33;
              v33 += 2;
              v36 = v37;
              result = strlen(v37);
              if (result == v35) {
                if (result == -1) {
                  goto LABEL_145;
                }
                result = memcmp(v34, v36, result);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              if (++v14 == 32) {
                goto LABEL_67;
              }
            }
            v70 = 0;
            v71 = nullptr;
            v69 = 0;
            v68 = v14;
            if (v64 > 1) {
              v23 = v66;
              v24 = (__int64*)(v67 + 24);
              if (&v69 == (__int64*)(v67 + 24)) {
                goto LABEL_144;
              }
              if ((*(_BYTE*)v24 & 1) != 0) {
                v26 = *(_QWORD*)(v67 + 32);
                v25 = *(_QWORD*)(v67 + 40);
                goto LABEL_143;
              }
              goto LABEL_66;
            }
            goto LABEL_141;
          }
          v30 = (__int64)&v29[-++result];
        } while ((__int64)&v29[-result] >= 24);
      }
    }
  LABEL_67:
    if (v4 != 0) {
      v41 = v27;
    }
    else {
      v41 = v8 + 1;
    }
    if (v6 >= 14) {
      v42 = &v41[v6];
      result = (__int64)v41;
      do {
        result = memchr(result, 73, v6 - 13);
        if (result == 0) {
          break;
        }
        if (*(_QWORD*)result == 0x536E6E4174696E49LL &&
            *(_QWORD*)(result + 6) == 0x303341706F68536ELL) {
          v44 = v65;
          if ((unsigned __int8*)result != v42 && result - (_QWORD)v41 != -1) {
            v70 = 0;
            v71 = nullptr;
            v69 = 0;
            GameRoutine_60a020(&v69, &GameData_1a86629);
            if ((v69 & 1) != 0) {
              v49 = v71;
            }
            else {
              v49 = (char*)&v69 + 1;
            }
            v50 = strlen(v49);
            result = GameRoutine_ffd760(0, v49, v50, 1);
            if ((result & 1) != 0) {
              *(_DWORD*)v66 = 0;
              v51 = v69;
              v52 = v70;
              v66[32] = 1;
              *((_QWORD*)v66 + 1) = v51;
              *((_QWORD*)v66 + 2) = v52;
              *((_QWORD*)v66 + 3) = v71;
              {
                result;
                return;
              }
            }
            if ((v69 & 1) != 0 && v71 != nullptr) {
              v59 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v59 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v71);
            }
            v60 = *v8;
            v44 = *((_QWORD*)v8 + 1);
            v27 = *((unsigned __int8**)v8 + 2);
            v4 = v60 & 1;
            v5 = v60 >> 1;
          }
          goto LABEL_79;
        }
        v6 = (__int64)&v42[-++result];
      } while ((__int64)&v42[-result] >= 14);
    }
    v44 = v65;
  LABEL_79:
    if (v4 != 0) {
      v45 = v44;
    }
    else {
      v27 = v8 + 1;
      v45 = v5;
    }
    if (v45 >= 14) {
      v46 = &v27[v45];
      v47 = v45;
      result = (__int64)v27;
      do {
        result = memchr(result, 73, v47 - 13);
        if (result == 0) {
          break;
        }
        if (*(_QWORD*)result == 0x46686E4174696E49LL &&
            *(_QWORD*)(result + 6) == 0x656E7574726F4668LL) {
          if ((unsigned __int8*)result != v46 && result - (_QWORD)v27 != -1) {
            v53 = 20;
          LABEL_137:
            *(_DWORD*)v66 = v53;
            *((_QWORD*)v66 + 1) = 0;
            *((_QWORD*)v66 + 2) = 0;
            *((_QWORD*)v66 + 3) = 0;
            v66[32] = 1;
            {
              result;
              return;
            }
          }
          break;
        }
        v47 = (__int64)&v46[-++result];
      } while ((__int64)&v46[-result] >= 14);
      if (v45 >= 18) {
        v54 = v45;
        result = (__int64)v27;
        do {
          result = memchr(result, 73, v54 - 17);
          if (result == 0) {
            break;
          }
          if (*(_QWORD*)result == 0x7472615074696E49LL &&
              *(_QWORD*)(result + 8) == 0x6575516E69614D32LL &&
              *(_WORD*)(result + 16) == 29811) {
            if ((unsigned __int8*)result != v46 && result - (_QWORD)v27 != -1) {
              v53 = 30;
              goto LABEL_137;
            }
            break;
          }
          v54 = (__int64)&v46[-++result];
        } while ((__int64)&v46[-result] >= 18);
        if (v45 >= 20) {
          result = (__int64)v27;
          do {
            result = memchr(result, 82, v45 - 19);
            if (result == 0) {
              break;
            }
            if (*(_QWORD*)result == 0x7265747369676552LL &&
                *(_QWORD*)(result + 8) == 0x6C6C616843746944LL &&
                *(_DWORD*)(result + 16) == 1701277285) {
              if ((unsigned __int8*)result != v46 &&
                  result - (_QWORD)v27 != -1) {
                v53 = 31;
                goto LABEL_137;
              }
              break;
            }
            v45 = (__int64)&v46[-++result];
          } while ((__int64)&v46[-result] >= 20);
        }
      }
    }
    a3 = v66;
  }
  *a3 = 0;
  a3[32] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_d90540(PSEUDO_X8 x8_, unsigned __int8* result, unsigned __int8** a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int8* v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char v19;
  __int64 v20;
  unsigned __int8* v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int8* v26;

  v3 = *result;
  v5 = *((_QWORD*)result + 1);
  if ((v3 & 1) == 0) {
    v5 = v3 >> 1;
  }
  if (v5 != 0) {
    v6 = *a2;
    if (a2[1] != *a2) {
      v7 = (v3 & 1) != 0 ? *((unsigned __int8**)result + 2) : result + 1;
      if (v5 >= 33) {
        result = v7;
        v8 = &v7[v5];
        do {
          result = (unsigned __int8*)memchr(result, 227, v5 - 32);
          if (result == nullptr) {
            break;
          }
          if (*(_QWORD*)result == 0x82E39683E3B582E3LL &&
              *((_QWORD*)result + 1) == 0xE3A282E3A882E3AFLL &&
              *((_QWORD*)result + 2) == 0xB383E3B382E3A482LL &&
              *((_QWORD*)result + 3) == 0xBAE4BCA0E99DBEE4LL &&
              result[32] == 186) {
            if (result == v8 || result - v7 == -1) {
              break;
            }
            v13 = *v6;
            v14 = (v13 & 1) == 0;
            v15 = v13 >> 1;
            if (v14) {
              v16 = v6 + 1;
            }
            else {
              v16 = *((unsigned __int8**)v6 + 2);
            }
            if (v14) {
              v17 = v15;
            }
            else {
              v17 = *((_QWORD*)v6 + 1);
            }
            v18 = v17 + 5;
            if (v17 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
              String_60a1d0(result);
            }
            if (v18 > 0x16) {
              if ((v18 | 7) == 0x17) {
                v20 = 26;
              }
              else {
                v20 = (v18 | 7) + 1;
              }
              result = (unsigned __int8*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v20, 16, 0);
              v25 = v17 + 5;
              v26 = result;
              v24 = v20 | 1;
              v19 = v20 | 1;
            }
            else {
              v19 = 2 * v18;
              result = nullptr;
              v25 = 0;
              v26 = nullptr;
              v24 = (unsigned __int8)(2 * v18);
            }
            if ((v19 & 1) != 0) {
              v21 = result;
            }
            else {
              v21 = (unsigned __int8*)&v24 + 1;
            }
            v21[4] = 95;
            *(_DWORD*)v21 = 1145655635;
            if ((v19 & 1) != 0) {
              v22 = (char*)(result + 5);
            }
            else {
              v22 = (char*)&v24 + 6;
            }
            if (v17 != 0) {
              result = (unsigned __int8*)memmove(v22, v16, v17);
            }
            v22[v17] = 0;
            v23 = v25;
            *(_QWORD*)a3 = v24;
            *(_QWORD*)(a3 + 8) = v23;
            *(_QWORD*)(a3 + 16) = v26;
            *(_QWORD*)(a3 + 24) = 0;
            LOBYTE(v5) = 1;
            goto LABEL_39;
          }
          ++result;
          v5 = v8 - result;
        } while (v8 - result >= 33);
      }
    }
    LOBYTE(v5) = 0;
  }
  *(_BYTE*)a3 = 0;
LABEL_39:
  *(_BYTE*)(a3 + 32) = v5;
  {
    result;
    return;
  }
}

float game_d96860(_QWORD* a1, float* a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  int v17;
  int v18;
  int v19;
  float v20;
  _QWORD* v21;
  float* v22;
  float* v23;
  float v24;
  float v25;

  v4 = *a1;
  v3 = a1[1];
  if (v3 == *a1) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                              memory_order_acquire) &
         1) == 0) {
      v21 = a1;
      v24 = a3;
      v22 = a2;
      v17 = __cxa_guard_acquire(&GameData_22110b8);
      a3 = v24;
      v18 = v17;
      a1 = v21;
      a2 = v22;
      if (v18 != 0) {
        GameData_22110ac = 0;
        __cxa_guard_release(&GameData_22110b8);
        a3 = v24;
        a1 = v21;
        a2 = v22;
      }
    }
    v5 = *(float*)&GameData_22110ac;
    v4 = *a1;
    v3 = a1[1];
    if (v3 != *a1) {
      goto LABEL_9;
    }
  }
  else {
    v5 = 0x1.fffffe0000000p+127f;
    v6 = *a1;
    v7 = 0x1.fffffe0000000p+127f;
    do {
      v8 = *(float*)(v6 + 8);
      v9 = *(float*)(v6 + 12);
      v6 += 40;
      if (v5 >= v8) {
        v5 = v8;
      }
      if (v7 >= v9) {
        v7 = v9;
      }
    } while (v6 != v3);
    if (v3 != v4) {
    LABEL_9:
      v10 = 0x1.0000000000000p-126f;
      v11 = 0x1.0000000000000p-126f;
      do {
        v12 = *(float*)(v4 + 16);
        v13 = *(float*)(v4 + 20);
        v4 += 40;
        if (v12 >= v10) {
          v10 = v12;
        }
        if (v13 >= v11) {
          v11 = v13;
        }
      } while (v4 != v3);
      goto LABEL_20;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v25 = a3;
    v23 = a2;
    v20 = v5;
    v19 = __cxa_guard_acquire(&GameData_22110b8);
    v5 = v20;
    a3 = v25;
    a2 = v23;
    if (v19 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      v5 = v20;
      a3 = v25;
      a2 = v23;
    }
  }
  v10 = *(float*)&GameData_22110ac;
LABEL_20:
  v14 = a3 + v5;
  v15 = v10 - a3;
  if (*a2 >= v14) {
    v14 = *a2;
  }
  if (v15 < v14) {
    return v15;
  }
  return v14;
}

__int64 game_da7a40(__int64 a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  int32x2_t* v2;
  int32x2_t* v3;
  float32x4_t v5;
  int8x16_t v6;
  __int64 v7;
  float32x4_t v8;
  float v9;
  _QWORD* v10;
  float v11;
  __int64 v12;
  int8x16_t* v13;
  int v14;

  v3 = *(int32x2_t**)(a1 + 8);
  v2 = *(int32x2_t**)(a1 + 16);
  if (v3 != v2) {
    while (LANES64(*(v3)).n64_u64[0] != LANES128(a2[16]).n128_u64[1]) {
      v3 += 6;
      if (v3 == v2) {
        return 0;
      }
    }
  }
  if (v3 == v2) {
    return 0;
  }
  game_zview_d12d30(*(_QWORD*)(LANES128(a2[1]).n128_u64[1] + 16), v3 + 2, 1);
  v5 = vsubq_f32(
      a2[79],
      *(float32x4_t*)(*(_QWORD*)(LANES128(a2[1]).n128_u64[1] + 16) + 560LL));
  v6 = vmulq_f32(v5, v5);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
          .n64_f32[0] > 0x1.0000000000000p-23f) {
    v7 = *(_QWORD*)(GameData_21ec7c0 + 120);
    if ((*(_BYTE*)(v7 + 12) & 1) == 0) {
      *(_BYTE*)(v7 + 12) = 1;
    }
  }
  LANES128(a2[79]).n128_u32[0] = LANES64(v3[2]).n64_u32[0];
  LANES128(a2[79]).n128_u32[1] = LANES64(v3[2]).n64_u32[1];
  v8 = a2[79];
  LANES128(v8).n128_u64[1] = LANES64(v3[3]).n64_u32[0];
  a2[79] = v8;
  HubCharacterNatives_cabfc0((__int64)a2, 1);
  v9 = LANES64(v3[4]).n64_f32[0];
  if ((LANES128(a2[83]).n128_u8[1] & 1) == 0) {
    LANES128(a2[83]).n128_u8[1] = 1;
  }
  v10 = *(_QWORD**)(LANES128(a2[1]).n128_u64[1] + 16);
  v11 = v9 * 0x1.1df46a0000000p-6f;
  if (v10[107] != 0) {
    v12 = v10[108];
    v10[107] = 0;
    v10[108] = 0;
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  v13 = (int8x16_t*)v10[61];
  v14 = LANES128(v13[11]).n128_u8[4];
  LANES128(v13[2]).n128_f32[0] = v11;
  LANES128(v13[2]).n128_f32[1] = v11;
  if (v14 == 1) {
    LANES128(v13[11]).n128_u8[4] = 0;
  }
  CharacterRotate_d519c0(v13);
  return 1;
}

void game_da7be0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  unsigned __int64* v3;
  unsigned __int64* v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int128 v37;
  float v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 i;
  _QWORD* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _DWORD* v61;
  __int128 v62;
  __int128 v63;

  v2 = GameData_212d458[0];
  v3 = *(unsigned __int64**)(*GameData_212d458[0] + 24);
  v4 = *(unsigned __int64**)(*GameData_212d458[0] + 32);
  if (v3 == v4) {
    v5 = nullptr;
    v7 = 0;
  }
  else {
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    do {
      v8 = *v3;
      if (*(_DWORD*)(*v3 + 1112) == 1 && (*(_BYTE*)(v8 + 186) & 0x40) == 0) {
        if ((unsigned __int64)v5 < v6) {
          *v5++ = v8;
        }
        else {
          v9 = (char*)v5 - v7;
          v10 = ((__int64)v5 - v7) >> 3;
          v11 = v10 + 1;
          if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
            GameRoutine_da89a0();
          }
          if ((__int64)(v6 - v7) >> 2 > v11) {
            v11 = (__int64)(v6 - v7) >> 2;
          }
          if (v6 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v12 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v12 = v11;
          }
          if (v12 != 0) {
            if (v12 >> 61 != 0) {
            LABEL_87:
              GameRoutine_60a210_alt1();
            }
            v13 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
          }
          else {
            v13 = 0;
          }
          v6 = v13 + 8 * v12;
          v14 = (unsigned __int64)v5 - v7;
          v15 = (__int64)&v9[v13 + -8 * v10];
          *(_QWORD*)&v9[v13] = v8;
          v5 = (unsigned __int64*)&v9[v13 + 8];
          memcpy_alt1(v15, v7, v14);
          if (v7 != 0) {
            v16 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free_alt5(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v7);
          }
          v7 = v15;
        }
      }
      v3 += 2;
    } while (v3 != v4);
    if ((unsigned __int64*)v7 == v5) {
      v2 = GameData_212d458[0];
    }
    else {
      GameRoutine_da89c0(v7, v5, (2 * __clz(((__int64)v5 - v7) >> 3)) ^ 0x7E,
                         1);
      v17 = (unsigned __int64*)(v7 + 8);
      v2 = GameData_212d458[0];
      while (v17 != v5) {
        v18 = *(v17 - 1);
        v19 = *v17++;
        if (v18 == v19) {
          v20 = v17 - 2;
          while (v17 != v5) {
            v21 = v18;
            v18 = *v17;
            if (v21 != *v17) {
              v20[1] = v18;
              ++v20;
            }
            ++v17;
          }
          if (v20 + 1 != v5) {
            v5 = v20 + 1;
          }
          break;
        }
      }
    }
  }
  if (v5 == (unsigned __int64*)v7) {
    if (v7 == 0) {
      goto LABEL_73;
    }
    goto LABEL_70;
  }
  v22 = 0;
  v23 = ((__int64)v5 - v7) >> 3;
  do {
    v24 = (_QWORD*)a1[1];
    v25 = (_QWORD*)a1[2];
    v26 = *(_QWORD*)(*(_QWORD*)(v7 + 8 * v22) + 264LL);
    if (v24 != v25) {
      while (*v24 != v26) {
        v24 += 6;
        if (v24 == v25) {
          goto LABEL_44;
        }
      }
    }
    if (v24 == v25) {
    LABEL_44:
      v27 = *(_QWORD**)(GameData_21ec7c0 + 24);
      v28 = *(_QWORD**)(GameData_21ec7c0 + 32);
      if (v27 == v28) {
      LABEL_47:
        v29 = 0;
        v30 = 0;
      }
      else {
        while (1) {
          v29 = *v27;
          if (*(_QWORD*)(*v27 + 264LL) == v26) {
            break;
          }
          v27 += 2;
          if (v27 == v28) {
            goto LABEL_47;
          }
        }
        v30 = v27[1];
        if (v30 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                    memory_order_relaxed);
        }
      }
      v31 = std___1___shared_weak_count_lock_alt1(v30);
      std___1___shared_weak_count___release_weak_alt2(v30);
      v32 = *(_QWORD*)(v29 + 264);
      v33 = *(_QWORD*)(*(_QWORD*)(v29 + 24) + 16LL);
      v37 = *(_OWORD*)(v33 + 560);
      v34 = *(float*)(*(_QWORD*)(v33 + 488) + 36LL);
      v36 = a1[2];
      v35 = a1[3];
      HIDWORD(v37) = 0;
      v38 = v34 * 0x1.ca5dc20000000p+5f;
      if (v36 >= v35) {
        v40 = a1[1];
        v41 = 1 - 0x5555555555555555LL * ((__int64)(v36 - v40) >> 4);
        if (v41 > 0x555555555555555LL) {
          GameRoutine_da96a0();
        }
        v63 = v37;
        v42 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v35 - v40) >> 4);
        if (2 * v42 > v41) {
          v41 = 2 * v42;
        }
        if (v42 >= 0x2AAAAAAAAAAAAAALL) {
          v43 = 0x555555555555555LL;
        }
        else {
          v43 = v41;
        }
        if (v43 > 0x555555555555555LL) {
          goto LABEL_87;
        }
        v44 = 3 * v43;
        v45 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v43, 16, 0);
        v46 = v45 + v36 - v40;
        *(_QWORD*)v46 = v32;
        *(float*)(v46 + 32) = v38;
        *(_OWORD*)(v46 + 16) = v63;
        if (v40 != v36) {
          v47 = v40;
          v48 = v45;
          do {
            *(_QWORD*)v48 = *(_QWORD*)v47;
            *(_QWORD*)(v48 + 24) = *(_QWORD*)(v47 + 24);
            *(_QWORD*)(v48 + 16) = *(_QWORD*)(v47 + 16);
            v49 = *(_DWORD*)(v47 + 32);
            v47 += 48;
            *(_DWORD*)(v48 + 32) = v49;
            v48 += 48;
          } while (v47 != v36);
        }
        v50 = v45 + 16 * v44;
        v39 = v46 + 48;
        a1[1] = v45;
        a1[2] = v46 + 48;
        a1[3] = v50;
        if (v40 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          nn_mem_StandardAllocator_Free_alt5(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v40);
        }
      }
      else {
        *(_QWORD*)v36 = v32;
        *(_OWORD*)(v36 + 16) = v37;
        v39 = v36 + 48;
        *(float*)(v36 + 32) = v38;
      }
      a1[2] = v39;
      if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
        std___1___shared_weak_count___release_weak_alt2(v31);
      }
    }
    ++v22;
  } while (v22 != v23);
  v2 = &GameData_21ec7c0;
  if (v7 != 0) {
  LABEL_70:
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free_alt5(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v7);
  }
LABEL_73:
  v53 = a1[1];
  for (i = a1[2]; v53 != i; v53 += 48) {
    v55 = *(_QWORD**)(*v2 + 24);
    v56 = *(_QWORD**)(*v2 + 32);
    if (v55 != v56) {
      while (1) {
        v57 = *v55;
        if (*(_QWORD*)(*v55 + 264LL) == *(_QWORD*)v53) {
          break;
        }
        v55 += 2;
        if (v55 == v56) {
          goto LABEL_75;
        }
      }
      v58 = v55[1];
      if (v58 != 0) {
        v59 = v55[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 16), 1u,
                                  memory_order_relaxed);
        v60 = std___1___shared_weak_count_lock_alt1(v59);
        std___1___shared_weak_count___release_weak_alt2(v58);
        if (v60 != 0) {
          *(_QWORD*)v53 = *(_QWORD*)(v57 + 264);
          v61 = *(_DWORD**)(*(_QWORD*)(v57 + 24) + 16LL);
          *(_DWORD*)(v53 + 16) = v61[140];
          *(_DWORD*)(v53 + 20) = v61[141];
          v62 = *(_OWORD*)(v53 + 16);
          *((_QWORD*)&v62 + 1) = (unsigned int)v61[142];
          *(_OWORD*)(v53 + 16) = v62;
          *(float*)(v53 + 32) =
              *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v57 + 24) + 16LL) +
                                   488LL) +
                        36LL) *
              0x1.ca5dc20000000p+5f;
          if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
            std___1___shared_weak_count___release_weak_alt2(v60);
          }
        }
      }
    }
  LABEL_75:;
  }
}

__attribute__((swiftcall)) void game_db1110(PSEUDO_X8 x8_, unsigned int a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;

  v3 = (__int64)*(&GameData_1fdf520 + 2 * a1);
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v5 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (result | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a2[1] = v5;
    a2[2] = v8;
    *a2 = v7 | 1;
    v6 = (char*)v8;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v6 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_10;
    }
  }
  result = memmove(v6, v3, v5);
LABEL_10:
  v6[v5] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_db11d0(PSEUDO_X8 x8_, const char* a1,
                                            __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  unsigned __int8* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
  const char* v10;
  int v11;
  const char* v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  const char* v16;
  bool v17;
  __int64 v18;
  const char* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64* v33;
    unsigned __int64 v34;
    unsigned __int64 v35;
    unsigned __int64 v36;
    int v37;
    int v38;
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
  } v30_;

  if (a2 == 0) {
    *(_WORD*)a3 = 0;
    return;
  }
  LOWORD(v30_.v30) = 0;
  v5 = msg_MessageManager_instance__ptr[0];
  v6 = (unsigned __int8*)Registration_a4f6c0_alt1(
      *msg_MessageManager_instance__ptr[0], a1);
  v7 = *v6;
  v8 = *((_QWORD*)v6 + 1);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v9 = v6;
    v10 = (v7 & 1) != 0 ? *((const char**)v6 + 2) : (const char*)(v6 + 1);
    v11 = Registration_a4fa80_alt1(*v5, v10, a1);
    if ((v11 & 0x80000000) == 0) {
      if ((*v9 & 1) != 0) {
        v12 = *((const char**)v9 + 2);
      }
      else {
        v12 = (const char*)(v9 + 1);
      }
      v13 = Registration_a4f800_alt1((_QWORD*)*v5, v12, v11);
      v14 = *(unsigned __int8*)v13;
      v15 = v13[1];
      if ((v14 & 1) == 0) {
        v15 = v14 >> 1;
      }
      if (v15 != 0) {
        v16 = (const char*)v13[2];
        v17 = (v14 & 1) == 0;
        v18 = *v5;
        v30_.v39 = -1;
        v30_.v40 = -1;
        v30_.v41 = -1;
        v30_.v42 = -1;
        if (v17) {
          v19 = (char*)v13 + 1;
        }
        else {
          v19 = v16;
        }
        v30_.v43 = -1;
        v30_.v44 = -1;
        v30_.v45 = -1;
        v30_.v46 = -1;
        v30_.v47 = -1;
        v30_.v48 = -1;
        v30_.v49 = -1;
        v30_.v50 = -1;
        v30_.v33 = GameData_212e348 + 2;
        v30_.v34 = 0xFFFF0001FFFF0000LL;
        v30_.v35 = 0xFFFF0004FFFF0002LL;
        v30_.v36 = 0xFFFF0006FFFF0005LL;
        v30_.v51 = 8;
        v30_.v37 = -65529;
        v30_.v38 = -65528;
        v20 = GameRoutine_a4dbe0_alt1(v18, v19, 0);
        GameRoutine_60a020_alt1((__int64)&v30_.v30, v20);
        v21 = v30_.v30;
        v22 = v30_.v31;
        v30_.v30 = 0;
        v30_.v31 = 0;
        *(_QWORD*)a3 = v21;
        *(_QWORD*)(a3 + 8) = v22;
        v23 = v30_.v32;
        v30_.v32 = 0;
        *(_QWORD*)(a3 + 16) = v23;
        if ((v30_.v30 & 1) == 0) {
          return;
        }
        goto LABEL_31;
      }
    }
  }
  v24 = strlen_alt1(a1);
  if (v24 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v25 = v24;
  if (v24 >= 0x17) {
    if ((v24 | 7) == 0x17) {
      v27 = 26;
    }
    else {
      v27 = (v24 | 7) + 1;
    }
    v28 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v27, 16,
                                              0);
    *(_QWORD*)(a3 + 8) = v25;
    *(_QWORD*)(a3 + 16) = v28;
    *(_QWORD*)a3 = v27 | 1;
    v26 = v28;
    goto LABEL_29;
  }
  *(_BYTE*)a3 = 2 * v24;
  v26 = a3 + 1;
  if (v24 != 0) {
  LABEL_29:
    memmove_alt1(v26, (__int64)a1, v25);
  }
  *(_BYTE*)(v26 + v25) = 0;
  if ((v30_.v30 & 1) == 0) {
    return;
  }
LABEL_31:
  if (v30_.v32 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt5(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v30_.v32);
  }
}

__attribute__((swiftcall)) void game_db1400(PSEUDO_X8 x8_, char* a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v3;
  char* v5;
  char* v6;
  unsigned __int64 result;
  unsigned __int64 v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[2];
  char* v22;

  v3 = a1;
  if (a2 >= 4) {
    v5 = &a1[a2];
    while (1) {
      v6 = (char*)memchr(a1, 77, a2 - 3);
      if (v6 == nullptr) {
        goto LABEL_13;
      }
      if (*(_DWORD*)v6 == 1598310733) {
        break;
      }
      a1 = v6 + 1;
      a2 = v5 - a1;
      if (v5 - a1 < 4) {
        goto LABEL_13;
      }
    }
    if (v6 != v5 && v3 == v6) {
      result = strlen(v3);
      if (result < 0xFFFFFFFFFFFFFFF7LL) {
        v8 = result;
        if (result >= 0x17) {
          if ((result | 7) == 0x17) {
            v19 = 26;
          }
          else {
            v19 = (result | 7) + 1;
          }
          v20 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v19,
                                               16, 0);
          a3[1] = v8;
          a3[2] = v20;
          *a3 = v19 | 1;
          v9 = (char*)v20;
        }
        else {
          *(_BYTE*)a3 = 2 * result;
          v9 = (char*)a3 + 1;
          if (result == 0) {
            goto LABEL_32;
          }
        }
        result = memmove(v9, v3, v8);
      LABEL_32:
        v9[v8] = 0;
        {
          result;
          return;
        }
      }
    LABEL_34:
      String_60a1d0(result);
    }
  }
LABEL_13:
  v10 = GameData_216f638;
  result = strlen(GameData_216f638);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_34;
  }
  v11 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (result | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v21[1] = v11;
    v22 = v12;
    v21[0] = v13 | 1;
  }
  else {
    LOBYTE(v21[0]) = 2 * result;
    v12 = (char*)v21 + 1;
    if (result == 0) {
      goto LABEL_22;
    }
  }
  memmove(v12, v10, v11);
LABEL_22:
  v12[v11] = 0;
  v14 = strlen(v3);
  result = GameRoutine_1a09ce0(v21, v3, v14);
  v15 = *(_QWORD*)result;
  v16 = *(_QWORD*)(result + 8);
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *a3 = v15;
  a3[1] = v16;
  v17 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  a3[2] = v17;
  if ((v21[0] & 1) != 0 && v22 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v22);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_db1620(PSEUDO_X8 x8_,
                                            unsigned __int64 result, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _DWORD* v4;
  _DWORD* v5;
  _DWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  char* v21;

  if (a2 == 0) {
    *(_WORD*)a3 = 0;
    {
      result;
      return;
    }
  }
  v4 = (_DWORD*)result;
  if (a2 >= 4) {
    v5 = (_DWORD*)(result + a2);
    while (1) {
      v6 = (_DWORD*)memchr(result, 77, a2 - 3);
      if (v6 == nullptr) {
        goto LABEL_15;
      }
      if (*v6 == 1598310733) {
        break;
      }
      result = (unsigned __int64)v6 + 1;
      a2 = (__int64)v5 - result;
      if ((__int64)((__int64)v5 - result) < 4) {
        goto LABEL_15;
      }
    }
    if (v6 != v5 && v4 == v6) {
      result = strlen(v4);
      if (result < 0xFFFFFFFFFFFFFFF7LL) {
        v7 = result;
        if (result >= 0x17) {
          if ((result | 7) == 0x17) {
            v18 = 26;
          }
          else {
            v18 = (result | 7) + 1;
          }
          v19 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                               16, 0);
          *(_QWORD*)(a3 + 8) = v7;
          *(_QWORD*)(a3 + 16) = v19;
          *(_QWORD*)a3 = v18 | 1;
          v8 = v19;
        }
        else {
          *(_BYTE*)a3 = 2 * result;
          v8 = a3 + 1;
          if (result == 0) {
            goto LABEL_34;
          }
        }
        result = memmove(v8, v4, v7);
      LABEL_34:
        *(_BYTE*)(v8 + v7) = 0;
        {
          result;
          return;
        }
      }
    LABEL_36:
      String_60a1d0(result);
    }
  }
LABEL_15:
  v9 = GameData_216f630[0];
  result = strlen(GameData_216f630[0]);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_36;
  }
  v10 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (result | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12,
                                                16, 0);
    v20[1] = v10;
    v21 = v11;
    v20[0] = v12 | 1;
  }
  else {
    LOBYTE(v20[0]) = 2 * result;
    v11 = (char*)v20 + 1;
    if (result == 0) {
      goto LABEL_24;
    }
  }
  memmove(v11, v9, v10);
LABEL_24:
  v11[v10] = 0;
  v13 = strlen(v4);
  result = GameRoutine_1a09ce0(v20, v4, v13);
  v14 = *(_QWORD*)result;
  v15 = *(_QWORD*)(result + 8);
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)a3 = v14;
  *(_QWORD*)(a3 + 8) = v15;
  v16 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(a3 + 16) = v16;
  if ((v20[0] & 1) != 0 && v21 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v21);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_dbca90(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  int v9;
  int v10;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;

  v1 = *(_BYTE*)a1 >> 1;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v2 = *(__int64**)(a1 + 16);
  }
  else {
    v2 = (__int64*)(a1 + 1);
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 8);
  }
  if (v1 > 9) {
    switch (v1) {
    case 10LL:
      v12 = *v2;
      v13 = *((unsigned __int16*)v2 + 4);
      if (v12 == *(_QWORD*)GameData_212dc08 &&
          v13 == *(unsigned __int16*)((char*)((_UNKNOWN**)0x8LL) +
                                      GameData_212dc08)) {
        return 1;
      }
      break;
    case 14LL:
      v15 = *v2;
      v16 = *(__int64*)((char*)v2 + 6);
      if (v15 == *(_QWORD*)GameData_212dc20 &&
          v16 == *(_QWORD*)(GameData_212dc20 + 6)) {
        return 4;
      }
      break;
    case 17LL:
      v3 = *v2;
      v4 = v2[1];
      v5 = *((unsigned __int8*)v2 + 16);
      v6 = v3 == *(_QWORD*)"IsmObeliskCleared" && v4 == *(_QWORD*)"skCleared";
      if (v6 && v5 == (unsigned __int8)GameData_1b52964[16]) {
        return 5;
      }
      break;
    default:
      break;
    }
    return 0;
  }
  if (v1 != 4) {
    if (v1 == 7) {
      v9 = *(_DWORD*)v2;
      v10 = *(_DWORD*)((char*)v2 + 3);
      if (v9 == *(_DWORD*)GameData_212dc10[0] &&
          v10 == *(_DWORD*)(GameData_212dc10[0] + 3)) {
        return 2;
      }
    }
    return 0;
  }
  if (*(_DWORD*)v2 == *(_DWORD*)GameData_212dc00 ||
      *(_DWORD*)v2 != *(_DWORD*)GameData_212dc18) {
    return 0;
  }
  return 3;
}

__int64 game_dbe360()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64 v1;
  float32x4_t* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v7;
  unsigned __int64 v8;
  float32x4_t* v9;
  __int64 v10;
  float32x4_t* v11;
  unsigned __int64* v12;
  unsigned __int64* v13;
  float32x4_t* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  float32x4_t* v21;
  float32x4_t* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  float32x4_t* v26;
  __int128 v27;
  __int128 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  float32x4_t* v35;
  __int64* v36;
  float v37;
  float32x4_t v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  __int128 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  unsigned __int64 v47;
  float32x4_t v48;
  unsigned int v49;
  __int64 v50;
  float32x4_t* v51;
  __int64 v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  int8x16_t v56;
  float v57;
  float32x4_t v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  int8x16_t v63;
  float v64;
  int8x16_t v65;
  float v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  int8x16_t v72;
  float v73;
  float32x4_t v74;
  float32x4_t v75;
  int8x16_t v76;
  float v77;
  float32x4_t v78;
  int8x16_t v79;
  __int64 v80;
  float32x4_t* v81;
  float32x4_t v82;
  float32x4_t v83;
  int8x16_t v84;
  float32x4_t v85;
  float32x4_t v86;
  __int64 v87;
  unsigned __int64 v88;
  float32x4_t v89;
  char v90;
  float v91;
  float32x4_t* v92;
  float v93;
  char v94;
  float32x4_t v95;
  int8x16_t v96;
  float32x4_t v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  float32x4_t v100;
  int8x16_t v101;
  __int64 v102;
  unsigned int v103;
  float32x4_t v104;
  int8x16_t v105;
  int8x16_t v106;
  float32x4_t v107;
  float32x4_t v108;
  int8x16_t v109;
  float v110;
  _QWORD* v111;
  __int64 v112;
  int8x16_t* v113;
  int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned int v118;
  __int64 v119;
  unsigned int v120;
  float32x4_t* v121;
  __int64 v122;
  float32x4_t v123;
  float32x4_t* v124;
  struct {
    float32x4_t* v125;
    __int64 v126;
    __int64 v127;
  } v125_;
  struct {
    __int128 v128;
    __int128 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
    __int64 v134;
    int v135;
    __int16 v136;
  } v128_;
  struct {
    float32x4_t v137;
    char v138;
    char gap161_[39];
    unsigned int v139;
    int v140;
  } v137_;

  v0 = &GameData_21c9608;
  if (*(_BYTE*)(GameData_21c9608 + 1056) != 1) {
    return 0;
  }
  v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(float32x4_t**)(GameData_21ec7c0 + 72);
  v3 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                            memory_order_relaxed);
  v4 = std___1___shared_weak_count_lock_alt1(v3);
  std___1___shared_weak_count___release_weak_alt2(v1);
  if (v4 != 0 && v2 != nullptr) {
    v7 = GameData_21c9608;
    if ((*(_BYTE*)(GameData_21c9608 + 1056) & 1) == 0) {
      GameRoutine_8123d0();
    }
    result = *(unsigned __int8*)(GameData_21c9608 + 1040);
    if ((_DWORD)result != 1) {
      goto LABEL_93;
    }
    v8 = LANES128(v2[1]).n128_u64[1];
    v122 = v4;
    v137_.v139 = 1;
    v121 = v2;
    v123 = *(float32x4_t*)(*(_QWORD*)(v8 + 16) + 560LL);
    v9 = (float32x4_t*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    v10 = (__int64)v9;
    v124 = (float32x4_t*)v7;
    *v9 = v123;
    v11 = v9 + 1;
    v12 = *(unsigned __int64**)(v7 + 992);
    v13 = *(unsigned __int64**)(v7 + 1000);
    if (v12 == v13) {
      v15 = (__int64)v9;
    }
    else {
      v14 = v9 + 1;
      do {
        if (v11 < v14) {
          v15 = v10;
          LANES128(*(v11)).n128_u64[1] = v12[1];
          LANES128(*(v11)).n128_u64[0] = *v12;
        }
        else {
          v16 = ((__int64)v11 - v10) >> 4;
          v17 = v16 + 1;
          if ((unsigned __int64)(v16 + 1) >> 60 != 0) {
            GameRoutine_cdcc10();
          }
          if (((__int64)v14 - v10) >> 3 > v17) {
            v17 = ((__int64)v14 - v10) >> 3;
          }
          if ((unsigned __int64)LANES128(*(v14)).n128_u64 - v10 >=
              0x7FFFFFFFFFFFFFF0LL) {
            v18 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v18 = v17;
          }
          if (v18 >> 60 != 0) {
            GameRoutine_60a210_alt1();
          }
          v19 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v18, 16, 0);
          v20 = v12[1];
          v21 = (float32x4_t*)((char*)v11 + v19 - v10);
          v15 = (__int64)&v21[-v16];
          LANES128(*(v21)).n128_u64[0] = *v12;
          LANES128(*(v21)).n128_u64[1] = v20;
          if ((float32x4_t*)v10 != v11) {
            v22 = (float32x4_t*)v10;
            v23 = (_QWORD*)v15;
            do {
              v23[1] = LANES128(*(v22)).n128_u64[1];
              v24 = LANES128(*(v22)).n128_u64[0];
              ++v22;
              *v23 = v24;
              v23 += 2;
            } while (v22 != v11);
          }
          v14 = (float32x4_t*)(v19 + 16 * v18);
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v25 = 128;
          }
          else {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt5(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v10);
          v11 = v21;
          v10 = v15;
        }
        ++v11;
        v12 += 2;
      } while (v12 != v13);
    }
    v26 = (float32x4_t*)v7;
    *((_QWORD*)&v128_.v129 + 1) = 0;
    BYTE4(v128_.v131) = 0;
    LOBYTE(v128_.v132) = 0;
    LOBYTE(v128_.v134) = 0;
    v27 = *(_OWORD*)(v7 + 1024);
    LOBYTE(v128_.v130) = 0;
    v128_.v136 = 256;
    LANES128(v137_.v137).n128_u8[0] = 0;
    v137_.v138 = 0;
    v128_.v128 = (__typeof__(v128_.v128)){0};
    *(_QWORD*)&v28 = v27;
    *((_QWORD*)&v28 + 1) = DWORD2(v27);
    v128_.v129 = v28;
    v29 = (_QWORD*)LANES128(v121[1]).n128_u64[1];
    v30 = v29[40];
    v128_.v133 = v29[39];
    v128_.v134 = v30;
    v31 = v29[38];
    v33 = v29[36];
    v32 = v29[37];
    v128_.v130 = v33;
    v128_.v131 = v32;
    v128_.v132 = v31;
    v128_.v135 = *(_DWORD*)(LANES128(v121[1]).n128_u64[1] + 528);
    if ((float32x4_t*)v15 == v11) {
      v4 = v122;
    }
    else {
      v137_.v140 = 0;
      v34 = 0;
      v35 = (float32x4_t*)v15;
      v36 = GameData_212ee30[0];
      v37 = 0x1.fffffe0000000p+127f;
      do {
        v38 = *v35;
        v39 = (_QWORD*)*v36;
        v125_.v126 = 0;
        v125_.v127 = 0;
        v125_.v125 = nullptr;
        *(_QWORD*)&v128_.v128 = LANES128(v38).n128_u64[0];
        v40 = (_QWORD*)v39[7];
        v41 = (_QWORD*)v39[8];
        *(_QWORD*)&v42 = LANES128(v38).n128_u64[0];
        *((_QWORD*)&v42 + 1) = LANES128(v38).n128_u32[2];
        v128_.v128 = v42;
        if (v40 != v41) {
          while (1) {
            v43 = *v40;
            if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v40 + 32LL))(*v40) & 1) !=
                    0 &&
                ((v128_.v136 & 0x100) != 0 || v39[1] != v43) &&
                ((*(__int64 (**)(__int64, __int128*, float32x4_t**))(
                     *(_QWORD*)v43 + 24LL))(v43, &v128_.v128, &v125_.v125) &
                 1) != 0) {
              break;
            }
            if (++v40 == v41) {
              v44 = (__int64)v125_.v125;
              goto LABEL_45;
            }
          }
          v44 = (__int64)v125_.v125;
          v46 = 0x0.0p+0f;
          v47 = (unsigned __int64)(v125_.v126 - (_QWORD)v125_.v125) >> 4;
          if ((int)v47 >= 2) {
            v48 = *v125_.v125;
            v49 = v47 - 1;
            if ((unsigned __int64)v49 - 1 >= 7) {
              v51 = v125_.v125 + 4;
              v52 = 0;
              do {
                v53 = v51[-3];
                v54 = v51[-2];
                v52 -= 8;
                v55 = vsubq_f32(v48, v53);
                v56 = vmulq_f32(v55, v55);
                LANES128(v56).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v56, v56, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0])))
                        .n64_u64[0];
                v57 =
                    v46 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]))))
                        .n64_f32[0];
                v58 = vsubq_f32(v53, v54);
                v59 = vmulq_f32(v58, v58);
                LANES128(v59).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v59, v59, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0])))
                        .n64_u64[0];
                v60 = v51[-1];
                v61 = vsubq_f32(v54, v60);
                v62 = vsubq_f32(v60, *v51);
                v63 = vmulq_f32(v62, v62);
                v64 =
                    v57 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v59).n128_u64[0]))))
                        .n64_f32[0];
                v65 = vmulq_f32(v61, v61);
                LANES128(v65).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v65, v65, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0])))
                        .n64_u64[0];
                LANES128(v63).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v63, v63, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
                        .n64_u64[0];
                v66 =
                    (float)(v64 +
                            LANES64_OF(
                                vsqrt_f32(vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v65).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v65).n128_u64[0]))))
                                .n64_f32[0]) +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]))))
                        .n64_f32[0];
                v67 = v51[1];
                v68 = v51[2];
                v69 = vsubq_f32(*v51, v67);
                v70 = vsubq_f32(v67, v68);
                v71 = vmulq_f32(v69, v69);
                v72 = vmulq_f32(v70, v70);
                LANES128(v71).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v71, v71, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
                        .n64_u64[0];
                v73 =
                    v66 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]))))
                        .n64_f32[0];
                LANES128(v71).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v72, v72, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
                        .n64_u64[0];
                v74 = v51[3];
                v48 = v51[4];
                v51 += 8;
                v75 = vsubq_f32(v68, v74);
                v76 = vmulq_f32(v75, v75);
                LANES128(v76).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v76, v76, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0])))
                        .n64_u64[0];
                v77 =
                    (float)(v73 +
                            LANES64_OF(
                                vsqrt_f32(vpadd_f32(
                                    COERCE_AS(float32x2_t,
                                              LANES128(v71).n128_u64[0]),
                                    COERCE_AS(float32x2_t,
                                              LANES128(v71).n128_u64[0]))))
                                .n64_f32[0]) +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0]))))
                        .n64_f32[0];
                v78 = vsubq_f32(v74, v48);
                v79 = vmulq_f32(v78, v78);
                LANES128(v79).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v79, v79, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0])))
                        .n64_u64[0];
                v46 =
                    v77 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]))))
                        .n64_f32[0];
              } while (-(__int64)(v49 & 0xFFFFFFF8) != v52);
              v50 = -v52;
            }
            else {
              v50 = 0;
            }
            v80 = v49 & 7;
            if (v80 != 0) {
              v81 = &v125_.v125[v50 + 1];
              do {
                v82 = *v81++;
                --v80;
                v83 = vsubq_f32(v48, v82);
                v84 = vmulq_f32(v83, v83);
                LANES128(v84).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v84, v84, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0])))
                        .n64_u64[0];
                v46 =
                    v46 +
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]))))
                        .n64_f32[0];
                v48 = v82;
              } while (v80 != 0);
            }
          }
          if (v46 < v37) {
            if ((v137_.v140 & 1) != 0) {
              v85 = *v35;
              LANES128(v137_.v137).n128_u64[0] = LANES128(*(v35)).n128_u64[0];
              LANES128(v86).n128_u64[0] = LANES128(v137_.v137).n128_u64[0];
              LANES128(v86).n128_u64[1] = LANES128(v85).n128_u32[2];
              v137_.v137 = v86;
            }
            else {
              v88 = LANES128(*(v35)).n128_u64[0];
              v87 = LANES128(*(v35)).n128_i64[1];
              v34 = 1;
              v137_.v138 = 1;
              LANES128(v137_.v137).n128_u64[0] = v88;
              LANES128(v137_.v137).n128_u64[1] = v87;
            }
            v37 = v46;
            v137_.v140 = 1;
          }
        LABEL_45:
          if (v44 != 0) {
            v125_.v126 = v44;
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt5(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v44);
          }
        }
        ++v35;
      } while (v35 != v11);
      v4 = v122;
      v26 = v124;
      if ((v34 & 1) != 0) {
      LABEL_76:
        game_zview_d12d30_alt1(*(_QWORD*)(LANES128(v121[1]).n128_u64[1] + 16),
                               (int32x2_t*)&v137_.v137, 1);
        v100 = vsubq_f32(
            v121[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v121[1]).n128_u64[1] + 16) +
                            560LL));
        v101 = vmulq_f32(v100, v100);
        LANES128(v101).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v101, v101, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v102 = *(_QWORD*)(GameData_21ec7c0 + 120);
          if ((*(_BYTE*)(v102 + 12) & 1) == 0) {
            *(_BYTE*)(v102 + 12) = 1;
          }
        }
        v103 = LANES128(v137_.v137).n128_u32[2];
        LANES128(v121[79]).n128_u64[0] = LANES128(v137_.v137).n128_u64[0];
        v104 = v121[79];
        LANES128(v104).n128_u64[1] = v103;
        v121[79] = v104;
        HubCharacterNatives_cabfc0((__int64)v121, 1);
        v105 = vsubq_f32(
            *(float32x4_t*)(*(_QWORD*)(LANES128(v121[1]).n128_u64[1] + 16) +
                            560LL),
            v26[64]);
        LANES128(v105).n128_u64[1] =
            LANES128_OF(vextq_s8(v105, v105, 8u)).n128_u32[0];
        LANES128(v105).n128_u32[1] = 0;
        v106 = vmulq_f32(v105, v105);
        LANES128(v106).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v106, v106, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0])))
                .n64_u64[0];
        LANES128(v106).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0])))
                .n64_u64[0];
        if (LANES128(v106).n128_f32[0] <= 0x0.0p+0f) {
          v110 = 0x1.921fb60000000p+1f;
          if ((LANES128(v121[83]).n128_u8[1] & 1) != 0) {
            goto LABEL_84;
          }
        }
        else {
          LANES128(v106).n128_u64[1] = LANES128(v106).n128_u64[0];
          v107 = vrsqrteq_f32(v106);
          v108 = vmulq_f32(v107, vrsqrtsq_f32(v107, vmulq_f32(v106, v107)));
          v109 = vbicq_s8(
              vmulq_f32(
                  v105,
                  vmulq_f32(v108, vrsqrtsq_f32(v108, vmulq_f32(v106, v108)))),
              vceqzq_f32(v106));
          v110 = (float)((float)(atan2f_alt1(LANES128(v109).n128_f32[0],
                                             LANES128(v109).n128_f32[2]) *
                                 0x1.ca5dc20000000p+5f) +
                         0x1.6800000000000p+7f) *
                 0x1.1df46a0000000p-6f;
          if ((LANES128(v121[83]).n128_u8[1] & 1) != 0) {
            goto LABEL_84;
          }
        }
        LANES128(v121[83]).n128_u8[1] = 1;
      LABEL_84:
        v111 = *(_QWORD**)(LANES128(v121[1]).n128_u64[1] + 16);
        if (v111[107] != 0) {
          v112 = v111[108];
          v111[107] = 0;
          v111[108] = 0;
          if (v112 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v112 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v112 + 16LL))(v112);
            std___1___shared_weak_count___release_weak_alt2(v112);
          }
        }
        v113 = (int8x16_t*)v111[61];
        v114 = LANES128(v113[11]).n128_u8[4];
        LANES128(v113[2]).n128_f32[0] = v110;
        LANES128(v113[2]).n128_f32[1] = v110;
        if (v114 == 1) {
          LANES128(v113[11]).n128_u8[4] = 0;
        }
        CharacterRotate_d519c0(v113);
        v115 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v115 = 56;
        }
        nn_mem_StandardAllocator_Free_alt5(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v115, v15);
        result = v137_.v139;
        v0 = (__int64*)GameData_212c6a0[0];
      LABEL_93:
        v116 = *v0;
        if (*(_BYTE*)(v116 + 1056) == 1) {
          v117 = *(_QWORD*)(v116 + 992);
          if (v117 != 0) {
            *(_QWORD*)(v116 + 1000) = v117;
            v118 = result;
            v119 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v119 = 56;
            }
            nn_mem_StandardAllocator_Free_alt5(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v119, v117);
            result = v118;
          }
          *(_BYTE*)(v116 + 1056) = 0;
        }
        goto LABEL_99;
      }
      v89 = v124[64];
      v90 = 0;
      v91 = 0x1.fffffe0000000p+127f;
      v92 = (float32x4_t*)v15;
    LABEL_65:
      v93 = v91;
      v94 = v90;
      do {
        v95 = vsubq_f32(v89, *v92);
        LANES128(v95).n128_u32[1] = vmuls_lane_f32(
            0x1.0000000000000p+2f,
            COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0]), 1);
        v96 = vmulq_f32(v95, v95);
        LANES128(v96).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v96, v96, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])))
                .n64_u64[0];
        v91 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])))
                  .n64_f32[0];
        if (v91 >= v93) {
          v91 = v93;
        }
        else {
          if ((v94 & 1) == 0) {
            v99 = LANES128(*(v92)).n128_u64[0];
            v98 = LANES128(*(v92)).n128_u64[1];
            ++v92;
            LANES128(v137_.v137).n128_u64[0] = v99;
            LANES128(v137_.v137).n128_u64[1] = v98;
            v90 = 1;
            v137_.v138 = 1;
            if (v92 != v11) {
              goto LABEL_65;
            }
            goto LABEL_76;
          }
          v94 = 1;
          LANES128(v97).n128_u64[0] = LANES128(*(v92)).n128_u64[0];
          LANES128(v97).n128_u64[1] =
              (unsigned int)LANES128(*(v92)).n128_u64[1];
          v137_.v137 = v97;
        }
        v93 = v91;
        ++v92;
      } while (v92 != v11);
      if ((v90 & 1) != 0) {
        goto LABEL_76;
      }
    }
    v137_.v138 = 1;
    v137_.v137 = v123;
    goto LABEL_76;
  }
  result = 0;
LABEL_99:
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v120 = result;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
    return v120;
  }
  return result;
}

__attribute__((swiftcall)) void game_dc0960(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64* v5;
  const char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[2];
    char* v14;
  } v13_;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (*(_WORD*)(a1 + 40) != 0) {
    v4 = 0;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      if (*(_QWORD*)(*(_QWORD*)(a1 + 48) + 8 * v4) != 0) {
        v6 = *(const char**)(*(_QWORD*)(a1 + 48) + 8 * v4);
      }
      else {
        v6 = &GameData_1a9f09e;
      }
      v7 = strlen_alt1(v6);
      if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v8 = v7;
      if (v7 >= 0x17) {
        break;
      }
      v9 = (char*)v13_.v13 + 1;
      LOBYTE(v13_.v13[0]) = 2 * v7;
      if (v7 != 0) {
        goto LABEL_15;
      }
    LABEL_16:
      v9[v8] = 0;
      GameRoutine_7a8220_alt1(a2, v13_.v13);
      if ((v13_.v13[0] & 1) != 0 && v13_.v14 != nullptr) {
        v11 = 128;
        if (*(_QWORD*)(*v5 + 200) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt5(*v5 + v11, (__int64)v13_.v14);
      }
      if (++v4 >= (unsigned __int64)*(unsigned __int16*)(a1 + 40)) {
        return;
      }
    }
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(*v5, v10, 16, 0);
    v13_.v13[1] = v8;
    v13_.v14 = v9;
    v13_.v13[0] = v10 | 1;
  LABEL_15:
    memmove_alt1((__int64)v9, (__int64)v6, v8);
    goto LABEL_16;
  }
  LOWORD(v13_.v13[0]) = 0;
  GameRoutine_7a8220_alt1(a2, v13_.v13);
  if ((v13_.v13[0] & 1) != 0 && v13_.v14 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt5(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v13_.v14);
  }
}

__int64 game_de7380(__int64 a1, unsigned __int8 a2, int a3, unsigned int a4)
{
  __int64 v8;
  _DWORD* v9;
  int v10;
  char v11;
  __int64 v12;
  int v13;
  int v14;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;

  game_de7500((void*)(&v16_.v16), a1);
  if (v16_.v17 == v16_.v16) {
    if (v16_.v17 == 0) {
    LABEL_15:
      a4 = 0;
      if (a3 > 1) {
        if (a3 == 2) {
          a4 = *(char*)(a1 + 82);
        }
        else if (a3 == 3) {
          v13 = *(char*)(a1 + 83);
          if (v13 >= -99) {
            v14 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v14 = *(_DWORD*)(game_GameModeData_instance_ + 68);
            }
            a4 = v14 + v13;
          }
          else {
            a4 = 0;
          }
        }
      }
      else if (a3 != 0) {
        if (a3 == 1) {
          a4 = *(char*)(a1 + 81);
        }
      }
      else {
        a4 = *(char*)(a1 + 80);
      }
      return a4 | 0x100000000LL;
    }
  LABEL_11:
    v11 = 0;
  }
  else {
    v8 = 0;
    v9 = (_DWORD*)(v16_.v16 + 8);
    while (*((unsigned __int8*)v9 - 8) != a2 || *(v9 - 1) != a3 || *v9 != a4) {
      ++v8;
      v9 += 3;
      if (0xAAAAAAAAAAAAAAABLL * ((v16_.v17 - v16_.v16) >> 2) == v8) {
        goto LABEL_11;
      }
    }
    v10 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v10 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    }
    v11 = 1;
    a4 = v10 + *(char*)(*(_QWORD*)(a1 + 72) + (unsigned int)v8);
  }
  v16_.v17 = v16_.v16;
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v12 = 56;
  }
  nn_mem_StandardAllocator_Free_alt5(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v16_.v16);
  if ((v11 & 1) == 0) {
    goto LABEL_15;
  }
  return a4 | 0x100000000LL;
}

__attribute__((swiftcall)) void game_de7500(PSEUDO_X8 x8_, __int64 result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  char v6;
  int v7;
  int v8;
  int v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  _BYTE v17[4];
  __int64 v18;
  _BYTE* v19;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (*(unsigned __int16*)(result + 48) >= 3u) {
    v3 = result;
    v4 = 0;
    v5 = 0;
    do {
      v11 = (_QWORD*)(*(_QWORD*)(v3 + 56) + v4);
      v13 = *v11;
      v12 = v11[1];
      v14 = v11[2];
      v15 = strlen(*v11);
      v16 = GameRoutine_db0fa0(v13, v15) - 1;
      if (v16 <= 8) {
        v6 = GameData_1b8b610[v16];
      }
      else {
        v6 = 0;
      }
      v18 = 0;
      v17[0] = v6;
      v7 = strtol(v12, &v19, 10);
      if (*v19 != 0) {
        v8 = 0;
      }
      else {
        v8 = v7;
      }
      LODWORD(v18) = v8;
      v9 = strtol(v14, &v19, 10);
      if (*v19 != 0) {
        v10 = 0;
      }
      else {
        v10 = v9;
      }
      HIDWORD(v18) = v10;
      result = GameRoutine_de7640(a2, v17);
      ++v5;
      v4 += 24;
    } while (v5 < *(unsigned __int16*)(v3 + 48) / 3u);
  }
  {
    result;
    return;
  }
}

__int64 game_e085c0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  float32x4_t* v2;
  float32x4_t* v3;
  float32x4_t* v5;
  float32x4_t v6;
  int16x4_t v7;
  __int128 v8;
  float32x4_t* v10;
  float32x4_t v11;
  int16x4_t v12;
  __int128 v13;
  float32x4_t* v14;
  float32x4_t v15;
  int16x4_t v16;
  __int128 v17;

  v3 = *(float32x4_t**)(a1 + 8);
  v2 = *(float32x4_t**)(a1 + 16);
  if (v3 != v2) {
    while (LANES128(*(v3)).n128_u64[0] != *(_QWORD*)(a2 + 72)) {
      v3 += 9;
      if (v3 == v2) {
        return 0;
      }
    }
  }
  if (v3 == v2) {
    return 0;
  }
  v5 = (float32x4_t*)(a2 + 960);
  if (*(_BYTE*)(a2 + 976) != 1) {
    *(_QWORD*)(a2 + 968) = LANES128(v3[1]).n128_u64[1];
    LANES128(*(v5)).n128_u64[0] = LANES128(v3[1]).n128_u64[0];
    *(_BYTE*)(a2 + 976) = 1;
    goto LABEL_13;
  }
  v6 = v3[1];
  LANES64(v7).n64_u64[0] = LANES64_OF(vmovn_s32(vceqq_f32(*v5, v6))).n64_u64[0];
  if ((LANES64(v7).n64_u8[0] & 1) == 0 || (LANES64(v7).n64_u8[2] & 1) == 0 ||
      (LANES64(v7).n64_u8[4] & 1) == 0) {
    *(_DWORD*)(a2 + 960) = LANES128(v6).n128_u32[0];
    *(_DWORD*)(a2 + 964) = LANES128(v3[1]).n128_u32[1];
    v8 = *(_OWORD*)(a2 + 960);
    *((_QWORD*)&v8 + 1) = LANES128(v3[1]).n128_u32[2];
    *(_OWORD*)(a2 + 960) = v8;
  LABEL_13:
    GameRoutine_dfa900(a2);
  }
  v10 = (float32x4_t*)(a2 + 992);
  if (*(_BYTE*)(a2 + 1008) != 1) {
    *(_QWORD*)(a2 + 1000) = LANES128(v3[2]).n128_u64[1];
    LANES128(*(v10)).n128_u64[0] = LANES128(v3[2]).n128_u64[0];
    *(_BYTE*)(a2 + 1008) = 1;
    goto LABEL_20;
  }
  v11 = v3[2];
  LANES64(v12).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(*v10, v11))).n64_u64[0];
  if ((LANES64(v12).n64_u8[0] & 1) == 0 || (LANES64(v12).n64_u8[2] & 1) == 0 ||
      (LANES64(v12).n64_u8[4] & 1) == 0) {
    *(_DWORD*)(a2 + 992) = LANES128(v11).n128_u32[0];
    *(_DWORD*)(a2 + 996) = LANES128(v3[2]).n128_u32[1];
    v13 = *(_OWORD*)(a2 + 992);
    *((_QWORD*)&v13 + 1) = LANES128(v3[2]).n128_u32[2];
    *(_OWORD*)(a2 + 992) = v13;
  LABEL_20:
    GameRoutine_dfa900(a2);
  }
  v14 = (float32x4_t*)(a2 + 1024);
  if (*(_BYTE*)(a2 + 1040) == 1) {
    v15 = v3[3];
    LANES64(v16).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_f32(*v14, v15))).n64_u64[0];
    if ((LANES64(v16).n64_u8[0] & 1) != 0 &&
        (LANES64(v16).n64_u8[2] & 1) != 0 &&
        (LANES64(v16).n64_u8[4] & 1) != 0) {
      return 1;
    }
    *(_DWORD*)(a2 + 1024) = LANES128(v15).n128_u32[0];
    *(_DWORD*)(a2 + 1028) = LANES128(v3[3]).n128_u32[1];
    v17 = *(_OWORD*)(a2 + 1024);
    *((_QWORD*)&v17 + 1) = LANES128(v3[3]).n128_u32[2];
    *(_OWORD*)(a2 + 1024) = v17;
  }
  else {
    *(_QWORD*)(a2 + 1032) = LANES128(v3[3]).n128_u64[1];
    LANES128(*(v14)).n128_u64[0] = LANES128(v3[3]).n128_u64[0];
    *(_BYTE*)(a2 + 1040) = 1;
  }
  GameRoutine_dfa900(a2);
  return 1;
}

__attribute__((swiftcall)) void game_e087a0(PSEUDO_X8 x8_, __int64 result)
{
  char** a2 = (char**)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  char* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;

  a2[1] = nullptr;
  a2[2] = nullptr;
  *a2 = nullptr;
  v3 = *GameData_212eec0[0];
  v4 = *(__int64**)(*GameData_212eec0[0] + 40);
  v5 = *(__int64**)(*GameData_212eec0[0] + 48);
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v4 == v5) {
    v7 = nullptr;
    v8 = nullptr;
  }
  else {
    v7 = nullptr;
    v8 = nullptr;
    do {
      v9 = *v4;
      if (*(_BYTE*)(*v4 + 948) == 1) {
        v10 = (unsigned __int64)a2[2];
        if ((unsigned __int64)v7 < v10) {
          *(_QWORD*)v7 = v9;
          v7 += 8;
        }
        else {
          v11 = (char*)(v7 - v8);
          v12 = (v7 - v8) >> 3;
          v13 = v12 + 1;
          if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
          LABEL_59:
            *a2 = v8;
            GameRoutine_e0a1e0();
          }
          v14 = v10 - (_QWORD)v8;
          if (v14 >> 2 > v13) {
            v13 = v14 >> 2;
          }
          if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v13;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
            LABEL_60:
              *a2 = v8;
              GameRoutine_60a210(result);
            }
            v16 = fw_memory_HeapManager_Allocate(*v6, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v17 = v16 + 8 * v15;
          v18 = (char*)(v7 - v8);
          v19 = (__int64)&v11[v16 + -8 * v12];
          *(_QWORD*)&v11[v16] = v9;
          v7 = &v11[v16 + 8];
          result = memcpy(v19, v8, v18);
          a2[1] = v7;
          a2[2] = (char*)v17;
          if (v8 != nullptr) {
            v20 = 128;
            if (*(_QWORD*)(*v6 + 200LL) == 0) {
              v20 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v6 + v20, v8);
          }
          v8 = (char*)v19;
        }
        a2[1] = v7;
      }
      v4 += 2;
    } while (v4 != v5);
    v3 = *GameData_212eec0[0];
  }
  v21 = *(__int64**)(v3 + 64);
  v22 = *(__int64**)(v3 + 72);
  *a2 = v8;
  while (v21 != v22) {
    v24 = *v21;
    if (*(_BYTE*)(*v21 + 948) == 1) {
      v25 = (unsigned __int64)a2[2];
      if ((unsigned __int64)v7 < v25) {
        *(_QWORD*)v7 = v24;
        v7 += 8;
        v23 = (__int64)v8;
      }
      else {
        v26 = (char*)(v7 - v8);
        v27 = (v7 - v8) >> 3;
        v28 = v27 + 1;
        if ((unsigned __int64)(v27 + 1) >> 61 != 0) {
          goto LABEL_59;
        }
        v29 = v25 - (_QWORD)v8;
        if (v29 >> 2 > v28) {
          v28 = v29 >> 2;
        }
        if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
          v30 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v30 = v28;
        }
        if (v30 != 0) {
          if (v30 >> 61 != 0) {
            goto LABEL_60;
          }
          v31 = fw_memory_HeapManager_Allocate(*v6, 8 * v30, 16, 0);
        }
        else {
          v31 = 0;
        }
        v32 = v31 + 8 * v30;
        v33 = (char*)(v7 - v8);
        v23 = (__int64)&v26[v31 + -8 * v27];
        *(_QWORD*)&v26[v31] = v24;
        v7 = &v26[v31 + 8];
        result = memcpy(v23, v8, v33);
        a2[1] = v7;
        a2[2] = (char*)v32;
        if (v8 != nullptr) {
          v34 = 128;
          if (*(_QWORD*)(*v6 + 200LL) == 0) {
            v34 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v6 + v34, v8);
        }
      }
      a2[1] = v7;
      v8 = (char*)v23;
    }
    v21 += 2;
  }
  *a2 = v8;
  if (v8 != v7) {
    result = GameRoutine_e0a200(v8, v7, (2 * __clz((v7 - v8) >> 3)) ^ 0x7E, 1);
    v35 = v8 + 8;
    while (v35 != v7) {
      v36 = *((_QWORD*)v35 - 1);
      v37 = *(_QWORD*)v35;
      v35 += 8;
      if (v36 == v37) {
        v38 = v35 - 16;
        while (v35 != v7) {
          v39 = v36;
          v36 = *(_QWORD*)v35;
          if (v39 != *(_QWORD*)v35) {
            *((_QWORD*)v38 + 1) = v36;
            v38 += 8;
          }
          v35 += 8;
        }
        v7 = v38 + 8;
        break;
      }
    }
  }
  if (v7 != a2[1]) {
    a2[1] = v7;
  }
  {
    result;
    return;
  }
}

__int64 game_e095a0(__int64 a1)
{
  __int64 result;
  char* v3;
  signed __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  char* v19[3];

  result = X8CALL_X0(__int64, game_e087a0((void*)(v19), a1));
  v3 = v19[0];
  if (v19[1] == v19[0]) {
    if (v19[1] == nullptr) {
      goto LABEL_9;
    }
  }
  else {
    v4 = (v19[1] - v19[0]) >> 3;
    v5 = v19[0];
    do {
      v6 = *(_QWORD*)v5;
      v5 += 8;
      GameRoutine_e08ae0(a1, *(_QWORD*)(v6 + 72));
      --v4;
    } while (v4 != 0);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  result = nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v3);
LABEL_9:
  v8 = *(__int64**)(a1 + 8);
  v9 = *(__int64**)(a1 + 16);
  if (v8 != v9) {
    v10 = (_QWORD*)GameData_220f950;
    do {
      v11 = *v8;
      v12 = (__int64*)v10[5];
      v13 = (__int64*)v10[6];
      if (v12 == v13) {
      LABEL_16:
        v16 = (__int64*)v10[8];
        v17 = (__int64*)v10[9];
        if (v16 == v17) {
          goto LABEL_12;
        }
        while (1) {
          v18 = *v16;
          v16 += 2;
          v14 = v18;
          if (*(_QWORD*)(v18 + 72) == v11) {
            break;
          }
          if (v16 == v17) {
            goto LABEL_12;
          }
        }
      }
      else {
        while (1) {
          v15 = *v12;
          v12 += 2;
          v14 = v15;
          if (*(_QWORD*)(v15 + 72) == v11) {
            break;
          }
          if (v12 == v13) {
            goto LABEL_16;
          }
        }
      }
      result = (__int64)GameRoutine_e08ca0((__int64)v8, v14);
      v10 = (_QWORD*)GameData_220f950;
    LABEL_12:
      v8 += 18;
    } while (v8 != v9);
  }
  return result;
}

__attribute__((swiftcall)) void

game_e15460(PSEUDO_X8 x8_, unsigned __int8* result, __int64* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  __int64 v16;
  char** v17;
  __int64 v18;
  unsigned __int8* v19;
  char* v20;
  char* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v5 = *a2;
  v4 = a2[1];
  v6 = v4 - *a2;
  if (v4 != *a2) {
    v7 = *result;
    v8 = (v7 & 1) == 0;
    v9 = v7 >> 1;
    if (v8) {
      v10 = result + 1;
    }
    else {
      v10 = *((unsigned __int8**)result + 2);
    }
    if (!v8) {
      v9 = *((_QWORD*)result + 1);
    }
    if (v9 >= 33) {
      result = v10;
      v11 = &v10[v9];
      do {
        result = (unsigned __int8*)memchr(result, 231, v9 - 32);
        if (result == nullptr) {
          break;
        }
        if (*(_QWORD*)result == 0x94E7B29BE584AFE7LL &&
            *((_QWORD*)result + 1) == 0xE3ADA8E8BD96E6A8LL &&
            *((_QWORD*)result + 2) == 0xB382E3A482E3A282LL &&
            *((_QWORD*)result + 3) == 0xB8E498BBE4B383E3LL &&
            result[32] == 142) {
          if (result == v11 || result - v10 == -1) {
            break;
          }
          v16 = 0;
          v17 = GameData_212fbf8;
          if ((*(_BYTE*)v5 & 1) != 0) {
            v18 = *(_QWORD*)(v5 + 16);
          }
          else {
            v18 = v5 + 1;
          }
          if ((*(_BYTE*)v5 & 1) != 0) {
            v19 = *(unsigned __int8**)(v5 + 8);
          }
          else {
            v19 = (unsigned __int8*)(*(_BYTE*)v5 >> 1);
          }
          while (1) {
            v21 = *v17;
            v17 += 2;
            v20 = v21;
            result = (unsigned __int8*)strlen(v21);
            if (result == v19) {
              if (result == (unsigned __int8*)-1LL) {
                String_60a230();
              }
              result = (unsigned __int8*)memcmp(v18, v20, result);
              if ((_DWORD)result == 0) {
                break;
              }
            }
            if (++v16 == 32) {
              goto LABEL_41;
            }
          }
          v29 = 0;
          v30 = 0;
          v28 = 0;
          if (0xAAAAAAAAAAAAAAABLL * (v6 >> 3) > 1) {
            v22 = (__int64*)(v5 + 24);
            if (&v28 != (__int64*)(v5 + 24)) {
              if ((*(_BYTE*)v22 & 1) != 0) {
                result = (unsigned __int8*)GameRoutine_64df20(
                    &v28, *(_QWORD*)(v5 + 40), *(_QWORD*)(v5 + 32));
              }
              else {
                v23 = *v22;
                v24 = *(_QWORD*)(v5 + 32);
                v25 = *(_QWORD*)(v5 + 40);
                v28 = v23;
                v29 = v24;
                v30 = v25;
              }
            }
          }
          v26 = v28;
          v27 = v29;
          *(_DWORD*)a3 = v16;
          *(_QWORD*)(a3 + 8) = v26;
          *(_QWORD*)(a3 + 16) = v27;
          *(_QWORD*)(a3 + 24) = v30;
          *(_BYTE*)(a3 + 32) = 1;
          {
            result;
            return;
          }
        }
        ++result;
        v9 = v11 - result;
      } while (v11 - result >= 33);
    }
  }
LABEL_41:
  *(_BYTE*)a3 = 0;
  *(_BYTE*)(a3 + 32) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_e15680(PSEUDO_X8 x8_, char* result,
                                            __int64* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v12;
  char** v13;
  __int64 v14;
  char* v15;
  char* v16;
  char* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v3 = (unsigned __int8)*result;
  v5 = *((_QWORD*)result + 1);
  if ((v3 & 1) == 0) {
    v5 = v3 >> 1;
  }
  if (v5 != 0) {
    v7 = *a2;
    v6 = a2[1];
    v8 = v6 - *a2;
    if (v6 != *a2) {
      v9 = (v3 & 1) != 0 ? *((char**)result + 2) : result + 1;
      if (v5 >= 12) {
        v10 = &v9[v5];
        result = v9;
        do {
          result = (char*)memchr(result, 230, v5 - 11);
          if (result == nullptr) {
            break;
          }
          if (*(_QWORD*)result == 0xAFE7ADA8E8BD96E6LL &&
              *((_DWORD*)result + 2) == -1298406012) {
            if (result == v10 || result - v9 == -1) {
              break;
            }
            v12 = 0;
            v13 = GameData_212fbf8;
            if ((*(_BYTE*)v7 & 1) != 0) {
              v14 = *(_QWORD*)(v7 + 16);
            }
            else {
              v14 = v7 + 1;
            }
            if ((*(_BYTE*)v7 & 1) != 0) {
              v15 = *(char**)(v7 + 8);
            }
            else {
              v15 = (char*)(*(_BYTE*)v7 >> 1);
            }
            while (1) {
              v17 = *v13;
              v13 += 2;
              v16 = v17;
              result = (char*)strlen(v17);
              if (result == v15) {
                if (result == (char*)-1LL) {
                  String_60a230();
                }
                result = (char*)memcmp(v14, v16, result);
                if ((_DWORD)result == 0) {
                  break;
                }
              }
              if (++v12 == 32) {
                goto LABEL_33;
              }
            }
            v25 = 0;
            v26 = 0;
            v24 = 0;
            if (0xAAAAAAAAAAAAAAABLL * (v8 >> 3) > 1) {
              v18 = (__int64*)(v7 + 24);
              if (&v24 != (__int64*)(v7 + 24)) {
                if ((*(_BYTE*)v18 & 1) != 0) {
                  result = (char*)GameRoutine_64df20(&v24, *(_QWORD*)(v7 + 40),
                                                     *(_QWORD*)(v7 + 32));
                }
                else {
                  v19 = *v18;
                  v20 = *(_QWORD*)(v7 + 32);
                  v21 = *(_QWORD*)(v7 + 40);
                  v24 = v19;
                  v25 = v20;
                  v26 = v21;
                }
              }
            }
            v22 = v24;
            v23 = v25;
            *(_DWORD*)a3 = v12;
            *(_QWORD*)(a3 + 8) = v22;
            *(_QWORD*)(a3 + 16) = v23;
            *(_QWORD*)(a3 + 24) = v26;
            *(_BYTE*)(a3 + 32) = 1;
            {
              result;
              return;
            }
          }
          ++result;
          v5 = v10 - result;
        } while (v10 - result >= 12);
      }
    }
  }
LABEL_33:
  *(_BYTE*)a3 = 0;
  *(_BYTE*)(a3 + 32) = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_e15880(PSEUDO_X8 x8_, __int64 result,
                                            __int64* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v16;
  char v17;

  v4 = *(unsigned __int8*)result;
  if ((v4 & 1) != 0) {
    v5 = *(_QWORD*)(result + 8);
  }
  else {
    v5 = v4 >> 1;
  }
  if (v5 != 0) {
    v6 = *a2;
    v7 = a2[1];
    if ((v4 & 1) != 0) {
      v8 = *(_QWORD*)(result + 16);
    }
    else {
      v8 = result + 1;
    }
    v9 = v8 + v5;
    if (v5 >= 30) {
      v10 = v5;
      result = v8;
      do {
        result = memchr(result, 231, v10 - 29);
        if (result == 0) {
          break;
        }
        if (*(_QWORD*)result == 0x94E7B29BE584AFE7LL &&
            *(_QWORD*)(result + 8) == 0xE3A482E3A282E3A8LL &&
            *(_QWORD*)(result + 16) == 0x8AB8E4B383E3B382LL &&
            *(_QWORD*)(result + 22) == 0x8D81E3B89BE68AB8LL) {
          if (result == v9 || result - v8 == -1) {
            break;
          }
        LABEL_39:
          if (v6 == v7) {
            v16 = 0;
          }
          else {
            v16 = 0;
            do {
              result = GameRoutine_fb1b40(v6);
              v6 += 24;
              v16 |= result;
            } while (v6 != v7);
          }
          v17 = 1;
          *(_DWORD*)a3 = v16;
          goto LABEL_44;
        }
        ++result;
        v10 = v9 - result;
      } while (v9 - result >= 30);
    }
    if (v5 >= 18) {
      result = v8;
      do {
        result = memchr(result, 233, v5 - 17);
        if (result == 0) {
          break;
        }
        if (*(_QWORD*)result == 0xA6E7A585E5B280E9LL &&
            *(_QWORD*)(result + 8) == 0xE7A8A1E8A2ADE681LL &&
            *(unsigned __int16*)(result + 16) == 48783) {
          if (result == v9 || result - v8 == -1) {
            break;
          }
          goto LABEL_39;
        }
        ++result;
        v5 = v9 - result;
      } while (v9 - result >= 18);
    }
  }
  v17 = 0;
  *(_BYTE*)a3 = 0;
LABEL_44:
  *(_BYTE*)(a3 + 4) = v17;
  {
    result;
    return;
  }
}

void game_e1e5e0(__int64* a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64** v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  unsigned __int64 v40;
  int v41;
  char* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64* v45;
  _QWORD* v46;
  atomic_ullong* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64* v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64* v68;
  atomic_ullong* v69;
  struct {
    _QWORD v70[2];
    char* v71;
  } v70_;

  if (*a2 != 1) {
    v2 = *a1;
    v3 = a1[1];
    v4 = a1;
    if (*a1 != v3) {
      do {
        v5 = *(_QWORD*)(v3 - 8);
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak_alt2(v5);
        }
        v3 -= 16;
      } while (v3 != v2);
    }
    v4[1] = v2;
    v6 = &GameData_21f3d10;
    v67 = GameData_21f3d10;
    v7 = *(_QWORD*)(GameData_21f3d10 + 216);
    v9 = *(_QWORD*)(v7 + 128);
    v8 = *(_QWORD*)(v7 + 136);
    while (v9 != v8) {
      if (*(_BYTE*)v9 == 0) {
        goto LABEL_10;
      }
      v10 = *(_QWORD*)(*v6 + 216);
      v11 = *(_QWORD*)(v10 + 24);
      if (v11 != 0) {
        v12 = std___1___shared_weak_count_lock_alt1(v11);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v10 + 16);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v13 != 0) {
              goto LABEL_16;
            }
          }
          else {
            v15 = v12;
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak_alt2(v15);
            if (v13 != 0) {
            LABEL_16:
              v14 = (_QWORD*)(v13 + 608);
              goto LABEL_19;
            }
          }
        }
      }
      v14 = nullptr;
    LABEL_19:
      if ((*(_BYTE*)(v9 + 8) & 1) != 0) {
        v16 = *(_QWORD*)(v9 + 24);
      }
      else {
        v16 = v9 + 9;
      }
      v17 = game_HashString(v16);
      if (v17 != 0) {
        v18 = v14[11];
        if (v18 != 0 && v14[13] != 0) {
          v19 = v18 - 1;
          if ((v18 & (v18 - 1)) != 0) {
            v20 = v17;
            if (v17 >= v18) {
              v20 = v17 % v18;
            }
          }
          else {
            v20 = v19 & v17;
          }
          v21 = *(_QWORD**)(v14[10] + 8 * v20);
          if (v21 != nullptr) {
            v22 = (_QWORD*)*v21;
            if (v22 != nullptr) {
              if ((v18 & v19) == 0) {
                while (1) {
                  v24 = v22[1];
                  if (v24 == v17) {
                    if (v22[2] == v17) {
                      goto LABEL_45;
                    }
                  }
                  else if ((v24 & v19) != v20) {
                    goto LABEL_10;
                  }
                  v22 = (_QWORD*)*v22;
                  if (v22 == nullptr) {
                    goto LABEL_10;
                  }
                }
              }
              do {
                v23 = v22[1];
                if (v23 == v17) {
                  if (v22[2] == v17) {
                  LABEL_45:
                    v25 = v22[3];
                    if (v25 != 0) {
                      v26 = *(__int64***)(v25 + 40);
                      v27 = *v26;
                      v66 = v26[1];
                      if (*v26 != v66) {
                        v68 = v4;
                        v65 = v8;
                        do {
                          v28 = *v27;
                          v29 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 712, 16,
                              0);
                          *(_QWORD*)(v29 + 8) = 0;
                          *(_QWORD*)(v29 + 24) = 0;
                          v30 = v29 + 24;
                          v31 = v29;
                          *(_QWORD*)(v29 + 16) = 0;
                          *(_QWORD*)v29 = GameData_1fe3458;
                          *(_QWORD*)(v29 + 32) = 0;
                          *(_QWORD*)(v29 + 40) = 0;
                          v69 = (atomic_ullong*)(v29 + 8);
                          *(_QWORD*)(v29 + 48) = 0;
                          *(_QWORD*)(v29 + 56) = 0;
                          *(_QWORD*)(v29 + 64) = 0;
                          *(_BYTE*)(v29 + 72) = 0;
                          *(_BYTE*)(v29 + 512) = 0;
                          *(_BYTE*)(v29 + 520) = 0;
                          *(_BYTE*)(v29 + 584) = 0;
                          *(_BYTE*)(v29 + 592) = 0;
                          *(_BYTE*)(v29 + 656) = 0;
                          *(_QWORD*)(v29 + 80) = 0;
                          *(_QWORD*)(v29 + 88) = 0;
                          *(_QWORD*)(v29 + 96) = 0;
                          *(_QWORD*)(v29 + 104) = 0;
                          *(_QWORD*)(v29 + 120) = 0;
                          *(_QWORD*)(v29 + 128) = 0;
                          *(_QWORD*)(v29 + 144) = 0;
                          *(_QWORD*)(v29 + 152) = 0;
                          *(_QWORD*)(v29 + 168) = 0;
                          *(_QWORD*)(v29 + 176) = 0;
                          *(_QWORD*)(v29 + 184) = 0;
                          *(_DWORD*)(v29 + 192) = 0;
                          *(_QWORD*)(v29 + 160) = 0;
                          v32 = v29 + 160;
                          *(_QWORD*)(v29 + 136) = 0;
                          v33 = v29 + 136;
                          *(_QWORD*)(v29 + 112) = 0;
                          v34 = v29 + 112;
                          *(_QWORD*)(v29 + 200) = 0;
                          v35 = (__int64*)(v29 + 200);
                          *(_QWORD*)(v29 + 232) = 0;
                          v36 = (__int64*)(v29 + 232);
                          *(_DWORD*)(v29 + 224) = 0;
                          *(_QWORD*)(v29 + 208) = 0;
                          *(_QWORD*)(v29 + 216) = 0;
                          *(_QWORD*)(v29 + 240) = 0;
                          *(_QWORD*)(v29 + 248) = 0;
                          *(_QWORD*)(v29 + 256) = 0;
                          *(_QWORD*)(v29 + 264) = 0;
                          *(_QWORD*)(v29 + 272) = 0;
                          *(_QWORD*)(v29 + 280) = 0;
                          *(_QWORD*)(v29 + 288) = 0;
                          *(_QWORD*)(v29 + 296) = 0;
                          *(_QWORD*)(v29 + 304) = 0;
                          *(_QWORD*)(v29 + 312) = 0;
                          *(_QWORD*)(v29 + 320) = 0;
                          *(_QWORD*)(v29 + 328) = 0;
                          *(_QWORD*)(v29 + 336) = 0;
                          *(_QWORD*)(v29 + 344) = 0;
                          *(_QWORD*)(v29 + 352) = 0;
                          *(_QWORD*)(v29 + 360) = 0;
                          *(_QWORD*)(v29 + 368) = 0;
                          *(_QWORD*)(v29 + 376) = 0;
                          *(_QWORD*)(v29 + 384) = 0;
                          *(_QWORD*)(v29 + 392) = 0;
                          *(_QWORD*)(v29 + 400) = 0;
                          *(_QWORD*)(v29 + 408) = 0;
                          *(_QWORD*)(v29 + 416) = 0;
                          *(_QWORD*)(v29 + 424) = 0;
                          *(_QWORD*)(v29 + 432) = 0;
                          *(_QWORD*)(v29 + 440) = 0;
                          *(_BYTE*)(v29 + 448) = 0;
                          *(_QWORD*)(v29 + 704) = 0;
                          *(_QWORD*)(v29 + 696) = 0;
                          *(_QWORD*)(v29 + 688) = 0;
                          *(_QWORD*)(v29 + 680) = 0;
                          *(_QWORD*)(v29 + 672) = 0;
                          *(_QWORD*)(v29 + 664) = 0;
                          GameRoutine_e08050_alt1((_QWORD*)(v29 + 24), v28);
                          game_hub_e08150_alt1(v30, v34,
                                               (const char**)(v28 + 32));
                          game_hub_e08150_alt1(v30, v33,
                                               (const char**)(v28 + 40));
                          game_hub_e08150_alt1(v30, v32,
                                               (const char**)(v28 + 48));
                          v37 = *v35;
                          *(_DWORD*)(v31 + 184) = *(_DWORD*)(v28 + 56);
                          *(_DWORD*)(v31 + 188) = *(_DWORD*)(v28 + 60);
                          v38 = *(_DWORD*)(v28 + 64);
                          *(_QWORD*)(v31 + 208) = v37;
                          *(_DWORD*)(v31 + 192) = v38;
                          if (*(_WORD*)(v28 + 72) != 0) {
                            v39 = 0;
                            v40 = 0;
                            do {
                              AnimCtrlModule_a78450_alt1(
                                  v35, (_DWORD*)(*(_QWORD*)(v28 + 80) + v39));
                              ++v40;
                              v39 += 4;
                            } while (v40 < *(unsigned __int16*)(v28 + 72));
                          }
                          if (((*(_BYTE*)(v28 + 88) - 1) & 0xF8) != 0) {
                            v41 = 0;
                          }
                          else {
                            v41 =
                                (unsigned __int8)(*(_BYTE*)(v28 + 88) - 1) + 1;
                          }
                          *(_DWORD*)(v31 + 224) = v41;
                          GameHr_e08260(v30, v36,
                                        (unsigned __int16*)(v28 + 96));
                          game_hub_e08150_alt1(v30, v31 + 256,
                                               (const char**)(v28 + 112));
                          GameHr_e08260(v30, (__int64*)(v31 + 280),
                                        (unsigned __int16*)(v28 + 120));
                          game_hub_e08150_alt1(v30, v31 + 304,
                                               (const char**)(v28 + 136));
                          GameHr_e08260(v30, (__int64*)(v31 + 328),
                                        (unsigned __int16*)(v28 + 144));
                          game_hub_e08150_alt1(v30, v31 + 352,
                                               (const char**)(v28 + 160));
                          GameHr_e08260(v30, (__int64*)(v31 + 376),
                                        (unsigned __int16*)(v28 + 168));
                          game_hub_e08150_alt1(v30, v31 + 400,
                                               (const char**)(v28 + 184));
                          GameHr_e08260(v30, (__int64*)(v31 + 424),
                                        (unsigned __int16*)(v28 + 192));
                          LocatorDispos_db2180((void*)(v70_.v70),
                                               (unsigned __int8*)(v67 + 40),
                                               (unsigned __int8*)(v9 + 56));
                          if ((v70_.v70[0] & 1) != 0) {
                            v42 = v70_.v71;
                          }
                          else {
                            v42 = (char*)v70_.v70 + 1;
                          }
                          if ((v70_.v70[0] & 1) != 0) {
                            v43 = v70_.v70[1];
                          }
                          else {
                            v43 = (unsigned __int64)LOBYTE(v70_.v70[0]) >> 1;
                          }
                          game_hub_e023c0_alt1(v30, (__int64)v42, v43);
                          atomic_fetch_add_explicit(
                              (atomic_ullong* volatile)(v31 + 8), 1u,
                              memory_order_relaxed);
                          v4 = v68;
                          v45 = (__int64*)v68[1];
                          v44 = v68[2];
                          if ((unsigned __int64)v45 >= v44) {
                            v48 = *v68;
                            v49 = (__int64)v45 - *v68;
                            v50 = v49 >> 4;
                            v51 = (v49 >> 4) + 1;
                            if (v51 >> 60 != 0) {
                              GameRoutine_e01f60();
                            }
                            v52 = v44 - v48;
                            if (v52 >> 3 > v51) {
                              v51 = v52 >> 3;
                            }
                            if ((unsigned __int64)v52 >= 0x7FFFFFFFFFFFFFF0LL) {
                              v53 = 0xFFFFFFFFFFFFFFFLL;
                            }
                            else {
                              v53 = v51;
                            }
                            if (v53 >> 60 != 0) {
                              GameRoutine_60a210_alt1();
                            }
                            v54 = fw_memory_HeapManager_Allocate_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                16 * v53, 16, 0);
                            v55 = (__int64*)(v54 + v49);
                            v56 = v54;
                            *v55 = v30;
                            v55[1] = v31;
                            v57 = &v55[-2 * v50];
                            atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v31 + 8), 1u,
                                memory_order_relaxed);
                            if ((__int64*)v48 == v45) {
                              v61 = v68;
                            }
                            else {
                              v58 = (__int64*)v48;
                              v59 = v57;
                              do {
                                *v59 = *v58;
                                v59[1] = v58[1];
                                *v58 = 0;
                                v58[1] = 0;
                                v58 += 2;
                                v59 += 2;
                              } while (v58 != v45);
                              do {
                                v60 = *(_QWORD*)(v48 + 8);
                                if (v60 != 0 &&
                                    atomic_fetch_add(
                                        (atomic_ullong* volatile)(v60 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
                                  (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(
                                      v60);
                                  std___1___shared_weak_count___release_weak_alt2(
                                      v60);
                                }
                                v48 += 16;
                              } while ((__int64*)v48 != v45);
                              v61 = v68;
                              v48 = *v68;
                            }
                            v47 = v69;
                            v62 = v56 + 16 * v53;
                            v46 = v55 + 2;
                            v4 = v61;
                            *v61 = (__int64)v57;
                            v61[1] = (__int64)(v55 + 2);
                            v61[2] = v62;
                            if (v48 != 0) {
                              v63 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v63 = 56;
                              }
                              nn_mem_StandardAllocator_Free_alt5(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v63,
                                  v48);
                            }
                          }
                          else {
                            *v45 = v30;
                            v45[1] = v31;
                            v46 = v45 + 2;
                            atomic_fetch_add_explicit(
                                (atomic_ullong* volatile)(v31 + 8), 1u,
                                memory_order_relaxed);
                            v47 = v69;
                          }
                          v4[1] = (__int64)v46;
                          v8 = v65;
                          if (atomic_fetch_add(v47, 0xFFFFFFFFFFFFFFFFLL) ==
                              0) {
                            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
                            std___1___shared_weak_count___release_weak_alt2(
                                v31);
                          }
                          v6 = (__int64*)GameData_212dbb8[0];
                          if ((v70_.v70[0] & 1) != 0 && v70_.v71 != nullptr) {
                            v64 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v64 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt5(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64,
                                (__int64)v70_.v71);
                          }
                          if (atomic_fetch_add(v47, 0xFFFFFFFFFFFFFFFFLL) ==
                              0) {
                            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
                            std___1___shared_weak_count___release_weak_alt2(
                                v31);
                          }
                          ++v27;
                        } while (v27 != v66);
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v23 >= v18) {
                    v23 %= v18;
                  }
                  if (v23 != v20) {
                    break;
                  }
                }
                v22 = (_QWORD*)*v22;
              } while (v22 != nullptr);
            }
          }
        }
      }
    LABEL_10:
      v9 += 144;
    }
  }
}

__int64 game_e2acc0(__int64 a1, __int64 a2)
{
  __int64* v3;
  const char** v4;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  const char** v14;
  const char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  _BYTE* v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _BYTE* v30;
  __int64 v31;
  _BYTE* v32;
  __int64 v33;
  _QWORD v34[3];
  struct {
    _QWORD v35[3];
    int v36;
  } v35_;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    char* v39;
  } v37_;
  struct {
    _BYTE* v40;
    _BYTE* v41;
    unsigned __int64 v42;
  } v40_;
  _BYTE* v43;

  if (*(_WORD*)(a2 + 40) == 0 || !game_e2aae0(a1, a2)) {
    return 0;
  }
  v40_.v41 = nullptr;
  v40_.v42 = 0;
  v40_.v40 = nullptr;
  v3 = game_vstring_kEmpty_ptr[0];
  if (*(_WORD*)(a2 + 40) != 0) {
    v4 = *(const char***)(a2 + 48);
  }
  else {
    v4 = (const char**)game_vstring_kEmpty_ptr[0];
  }
  v5 = *v4;
  v6 = strlen_alt1(*v4);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_66:
    String_60a1d0_alt1();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0);
    v37_.v38 = v7;
    v37_.v39 = v8;
    v37_.v37 = v10 | 1;
  }
  else {
    LOBYTE(v37_.v37) = 2 * v6;
    v8 = (char*)&v37_.v37 + 1;
    if (v6 == 0) {
      goto LABEL_16;
    }
  }
  memmove_alt1((__int64)v8, (__int64)v5, v7);
LABEL_16:
  v8[v7] = 0;
  LODWORD(v11) = *(unsigned __int16*)(a2 + 40);
  if ((unsigned int)v11 >= 2) {
    v12 = 1;
    v13 = 8;
    do {
      if (v12 >= (unsigned int)v11) {
        v14 = (const char**)v3;
      }
      else {
        v14 = (const char**)(*(_QWORD*)(a2 + 48) + v13);
      }
      v15 = *v14;
      v16 = strlen_alt1(*v14);
      if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_66;
      }
      v17 = v16;
      if (v16 >= 0x17) {
        if ((v16 | 7) == 0x17) {
          v19 = 26;
        }
        else {
          v19 = (v16 | 7) + 1;
        }
        v18 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v19, 16, 0);
        v34[1] = v17;
        v34[2] = v18;
        v34[0] = v19 | 1;
      }
      else {
        v18 = (char*)v34 + 1;
        LOBYTE(v34[0]) = 2 * v16;
        if (v16 == 0) {
          goto LABEL_31;
        }
      }
      memmove_alt1((__int64)v18, (__int64)v15, v17);
    LABEL_31:
      v18[v17] = 0;
      v35_.v36 = 4;
      qmemcpy(v35_.v35, v34, sizeof(v35_.v35));
      v20 = v40_.v41;
      if ((unsigned __int64)v40_.v41 >= v40_.v42) {
        v22 = GameHr_918ce0((__int64*)&v40_.v40, (__int64)v35_.v35);
      }
      else {
        *v40_.v41 = 0;
        *((_DWORD*)v20 + 6) = -1;
        v21 = v35_.v36;
        if (v35_.v36 != -1) {
          v43 = v20;
          ((void (*)(_BYTE**, _QWORD*))GameData_1fe3a38[v35_.v36])(&v43,
                                                                   v35_.v35);
          *((_DWORD*)v20 + 6) = v21;
        }
        v22 = (__int64)(v20 + 32);
      }
      v40_.v41 = (_BYTE*)v22;
      if (v35_.v36 != -1) {
        ((void (*)(_BYTE**, _QWORD*))GameData_1fe3a00[v35_.v36])(&v43,
                                                                 v35_.v35);
      }
      v11 = *(unsigned __int16*)(a2 + 40);
      ++v12;
      v13 += 8;
    } while (v12 < v11);
  }
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v23 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v23 = 0;
  }
  if (GameData_22127a8 != 0) {
    v24 = GameData_22127a8;
  }
  else {
    v24 = v23;
  }
  if ((v37_.v37 & 1) != 0) {
    v25 = v37_.v39;
  }
  else {
    v25 = (char*)&v37_.v37 + 1;
  }
  if ((v37_.v37 & 1) != 0) {
    v26 = v37_.v38;
  }
  else {
    v26 = (unsigned __int64)(unsigned __int8)v37_.v37 >> 1;
  }
  Manager_d9b810((void*)((__int64)v35_.v35), v24, (__int64)v25, v26,
                 (__int64)&v40_.v40, 7u);
  v27 = fw_memory_g_heap_manager_ptr;
  if ((v37_.v37 & 1) != 0 && v37_.v39 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt5(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v37_.v39);
  }
  v29 = (__int64)v40_.v40;
  if (v40_.v40 != nullptr) {
    v30 = v40_.v41;
    if (v40_.v40 == v40_.v41) {
      goto LABEL_62;
    }
    do {
      v31 = *((unsigned int*)v30 - 2);
      v32 = v30 - 32;
      if ((_DWORD)v31 != -1) {
        ((void (*)(_QWORD*, _BYTE*))GameData_1fe3a00[v31])(v35_.v35, v30 - 32);
      }
      *((_DWORD*)v30 - 2) = -1;
      v30 -= 32;
    } while (v32 != (_BYTE*)v29);
    v40_.v41 = (_BYTE*)v29;
    v29 = (__int64)v40_.v40;
    if (v40_.v40 != nullptr) {
    LABEL_62:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt5(*(_QWORD*)v27 + v33, v29);
    }
  }
  return 1;
}

__n128 game_e5d040(_QWORD* a1, char* a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v4;
  char v5;
  char* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  unsigned int v13;
  __n128 result;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  struct {
    __int64* v24;
    __int64 v25;
  } v24_;
  struct {
    float32x4_t v26;
    char* v27;
    int v28;
    char gap44_[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v26_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v3 > 7) {
    v4 = 6;
  }
  else {
    v4 = GameData_1b01468[v3];
  }
  v5 = *a2;
  v6 = *((char**)a2 + 2);
  v26_.v26 = (__typeof__(v26_.v26)){0};
  v26_.v28 = v4;
  if ((v5 & 1) != 0) {
    v7 = v6;
  }
  else {
    v7 = a2 + 1;
  }
  v9 = *(_QWORD*)GameData_212c540;
  v8 = *((_QWORD*)GameData_212c540 + 1);
  v11 = *(_QWORD*)GameData_212c548;
  v10 = *((_QWORD*)GameData_212c548 + 1);
  v26_.v27 = v7;
  v26_.v31 = v11;
  v26_.v32 = v10;
  v26_.v29 = v9;
  v26_.v30 = v8;
  v26_.v33 = v9;
  v26_.v34 = v8;
  v12 = Manager_bc6460(*(float**)eft_g_effectSystem_ptr[0], &v26_.v26, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_14a10d0(&v24_.v24, (__int64)v12, v13, (__int64)&GameData_1a9f09e),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = v24_.v24;
  v16 = *v24_.v24;
  if (*v24_.v24 != 0 && *(_DWORD*)(v16 + 16) == *((_DWORD*)v24_.v24 + 2)) {
    v17 = *(unsigned int*)(v16 + 36);
    if ((_DWORD)v17 != 0) {
      v18 = 0;
      v19 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
      do {
        v20 = *(_QWORD*)(v16 + 40 + 8 * v18);
        if (v20 != 0) {
          *(_QWORD*)(*(_QWORD*)(v20 + 224) + 24LL) = v19;
          v17 = *(unsigned int*)(v16 + 36);
        }
        ++v18;
      } while (v18 < v17);
    }
  }
  v21 = (_QWORD*)a1[2];
  if ((unsigned __int64)v21 >= a1[3]) {
    v23 = GameRoutine_e5d5a0(a1 + 1, &v24_.v24),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v22 = v24_.v25;
    a1[2] = v23;
    if (v22 == 0) {
      return result;
    }
    goto LABEL_20;
  }
  *v21 = v15;
  v22 = v24_.v25;
  v21[1] = v24_.v25;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[2] = v21 + 2;
  if (v22 != 0) {
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return std___1___shared_weak_count___release_weak_alt1(v22);
    }
  }
  return result;
}

_QWORD* game_e5d200(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int128 v11;
  __int64 v12;
  __int64* v13;
  unsigned int v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64* v21;
  unsigned __int64 v22;
  _QWORD* result;
  struct {
    float32x4_t v24;
    __int64 v25;
    int v26;
    char gap28_[4];
    __int64 v27;
    __int64 v28;
    __int128 v29;
    __int64 v30;
    __int64 v31;
  } v24_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v3 > 7) {
    v4 = 6;
  }
  else {
    v4 = GameData_1b01468[v3];
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v5 = *(_QWORD*)(a2 + 16);
  }
  else {
    v5 = a2 + 1;
  }
  v6 = *(unsigned int*)(a2 + 64);
  v24_.v26 = v4;
  v24_.v24 = (__typeof__(v24_.v24)){0};
  v24_.v25 = v5;
  v7 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v8 = v6 | (v6 << 32);
  v9 = v6;
  v10 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)&v11 = v8;
  *((_QWORD*)&v11 + 1) = v9;
  v24_.v27 = *(_QWORD*)(a2 + 32);
  v24_.v28 = v10;
  v12 = *(_QWORD*)(a2 + 56);
  v24_.v30 = *(_QWORD*)(a2 + 48);
  v24_.v31 = v12;
  v24_.v29 = v11;
  v13 = Manager_bc6460_alt1(v7, &v24_.v24, 1),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0(&v24_.v24, (__int64)v13, v14, (__int64)&GameData_1a9f09e),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = LANES128(v24_.v24).n128_u64[0];
  v16 = *(_QWORD*)LANES128(v24_.v24).n128_u64[0];
  if (*(_QWORD*)LANES128(v24_.v24).n128_u64[0] != 0 &&
      *(_DWORD*)(v16 + 16) == *(_DWORD*)(LANES128(v24_.v24).n128_u64[0] + 8)) {
    v17 = *(unsigned int*)(v16 + 36);
    if ((_DWORD)v17 != 0) {
      v18 = 0;
      v19 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
      do {
        v20 = *(_QWORD*)(v16 + 40 + 8 * v18);
        if (v20 != 0) {
          *(_QWORD*)(*(_QWORD*)(v20 + 224) + 24LL) = v19;
          v17 = *(unsigned int*)(v16 + 36);
        }
        ++v18;
      } while (v18 < v17);
    }
  }
  v21 = (unsigned __int64*)a1[2];
  if ((unsigned __int64)v21 >= a1[3]) {
    result = GameHr_e5d5a0(a1 + 1, &v24_.v24),
    v14 = COERCE_AS(__typeof__(v14),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v22 = LANES128(v24_.v24).n128_u64[1];
    a1[2] = result;
    if (v22 == 0) {
      return result;
    }
    goto LABEL_20;
  }
  *v21 = v15;
  v22 = LANES128(v24_.v24).n128_u64[1];
  v21[1] = LANES128(v24_.v24).n128_u64[1];
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  result = v21 + 2;
  a1[2] = v21 + 2;
  if (v22 != 0) {
  LABEL_20:
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v22 + 16LL))(v22),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return (_QWORD*)std___1___shared_weak_count___release_weak(v22);
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_e5d7a0(PSEUDO_X8 x8_, __int64 unused_int0,
                                            int a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  int v21;

  *(_QWORD*)a2 = 0;
  v4 = GameData_212d448[0];
  v5 = (_QWORD*)*GameData_212d448[0];
  v6 = *(_QWORD*)(*GameData_212d448[0] + 32);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v7 = v5[5];
    v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
    if (v8 || (v9 = *(_QWORD*)(v7 + 80)) == 0 ||
        (*(_QWORD*)(v9 + 8) != -1 ? (v10 = *(_QWORD*)(v7 + 88) == 0)
                                  : (v10 = true),
         v10)) {
      v11 = 0;
    }
    else if (*(_QWORD*)(v6 + 8) == -1) {
      v11 = 0;
    }
    else {
      v11 = v7;
    }
    std___1___shared_weak_count___release_weak_alt1(v6);
    v5 = (_QWORD*)*v4;
    v12 = *(_QWORD*)(*v4 + 56);
    if (v12 == 0) {
      if (v11 == 0) {
        return;
      }
      goto LABEL_43;
    }
  }
  else {
    v12 = v5[7];
    if (v12 == 0) {
      return;
    }
    v11 = 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v13 = v5[8];
  v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
  if (v14 || (v15 = *(_QWORD*)(v13 + 80)) == 0 ||
      (*(_QWORD*)(v15 + 8) != -1 ? (v16 = *(_QWORD*)(v13 + 88) == 0)
                                 : (v16 = true),
       v16)) {
    v17 = 0;
    std___1___shared_weak_count___release_weak_alt1(v12);
    if (v11 == 0) {
      goto LABEL_42;
    }
  }
  else {
    if (*(_QWORD*)(v12 + 8) == -1) {
      v17 = 0;
    }
    else {
      v17 = v13;
    }
    std___1___shared_weak_count___release_weak_alt1(v12);
    if (v11 == 0) {
      goto LABEL_42;
    }
  }
  if (v17 != 0) {
    v18 = 0x1.0000000000000p-1f;
    if (a1 == 1) {
      v18 = 0x1.0000000000000p+0f;
    }
    if (a1 == 0) {
      v18 = 0x0.0p+0f;
    }
    v19 = (float)((float)(0x1.0000000000000p+0f - v18) * *(float*)(v11 + 40)) +
          (float)(v18 * *(float*)(v17 + 40));
    v20 = (float)((float)(0x1.0000000000000p+0f - v18) * *(float*)(v11 + 44)) +
          (float)(v18 * *(float*)(v17 + 44));
    *(float*)a2 = v19;
    goto LABEL_45;
  }
LABEL_42:
  if (v11 != 0) {
  LABEL_43:
    v21 = *(_DWORD*)(v11 + 40);
    v20 = *(float*)(v11 + 44);
  LABEL_44:
    *(_DWORD*)a2 = v21;
  LABEL_45:
    *(float*)(a2 + 4) = v20;
    return;
  }
  if (v17 != 0) {
    v21 = *(_DWORD*)(v17 + 40);
    v20 = *(float*)(v17 + 44);
    goto LABEL_44;
  }
}

__attribute__((swiftcall)) void game_e5d930(PSEUDO_X8 x8_, float a2)
{

#pragma clang fp contract(off)
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  float v18;
  float v19;

  *(_QWORD*)a1 = 0;
  v4 = GameData_212d448[0];
  v5 = (_QWORD*)*GameData_212d448[0];
  v6 = *(_QWORD*)(*GameData_212d448[0] + 32);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v7 = v5[5];
    v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
    if (v8 || (v9 = *(_QWORD*)(v7 + 80)) == 0 ||
        (*(_QWORD*)(v9 + 8) != -1 ? (v10 = *(_QWORD*)(v7 + 88) == 0)
                                  : (v10 = true),
         v10)) {
      v11 = 0;
    }
    else if (*(_QWORD*)(v6 + 8) == -1) {
      v11 = 0;
    }
    else {
      v11 = v7;
    }
    std___1___shared_weak_count___release_weak_alt1(v6);
    v5 = (_QWORD*)*v4;
    v12 = *(_QWORD*)(*v4 + 56);
    if (v12 == 0) {
      if (v11 == 0) {
        return;
      }
      goto LABEL_40;
    }
  }
  else {
    v12 = v5[7];
    if (v12 == 0) {
      return;
    }
    v11 = 0;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v13 = v5[8];
  v14 = *(_QWORD*)(v12 + 8) == -1 || v13 == 0;
  if (v14 || (v15 = *(_QWORD*)(v13 + 80)) == 0 ||
      (*(_QWORD*)(v15 + 8) != -1 ? (v16 = *(_QWORD*)(v13 + 88) == 0)
                                 : (v16 = true),
       v16)) {
    v17 = 0;
    std___1___shared_weak_count___release_weak_alt1(v12);
    if (v11 == 0) {
      goto LABEL_39;
    }
  }
  else {
    if (*(_QWORD*)(v12 + 8) == -1) {
      v17 = 0;
    }
    else {
      v17 = v13;
    }
    std___1___shared_weak_count___release_weak_alt1(v12);
    if (v11 == 0) {
      goto LABEL_39;
    }
  }
  if (v17 != 0) {
    v18 = (float)((float)(0x1.0000000000000p+0f - a2) * *(float*)(v11 + 40)) +
          (float)(a2 * *(float*)(v17 + 40));
    v19 = (float)((float)(0x1.0000000000000p+0f - a2) * *(float*)(v11 + 44)) +
          (float)(a2 * *(float*)(v17 + 44));
  LABEL_31:
    *(float*)a1 = v18;
  LABEL_41:
    *(float*)(a1 + 4) = v19;
    return;
  }
LABEL_39:
  if (v11 != 0) {
  LABEL_40:
    *(_DWORD*)a1 = *(_DWORD*)(v11 + 40);
    v19 = *(float*)(v11 + 44);
    goto LABEL_41;
  }
  if (v17 != 0) {
    v18 = *(float*)(v17 + 40);
    v19 = *(float*)(v17 + 44);
    goto LABEL_31;
  }
}

__n128 game_e5fc30(__int64 a1)
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
  char v10;
  char v11;
  __int64 v12;
  __n128 result;
  _BYTE v14[16];
  __int64 v15;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = GameData_21d96b8;
  *(_BYTE*)(GameData_21d96b8 + 12) = *(_BYTE*)(a1 + 4) ^ 1;
  *(_BYTE*)(v1 + 13) = 1;
  if (*(_DWORD*)a1 == 1) {
    v2 = *GameData_212eba8[0];
    v15 = *(_QWORD*)(*(_QWORD*)(GameData_220f870 + 8) + 280LL);
    game_d74a00((void*)((__int64)v14), (float*)&v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v3 = game_zview_cf22c0(v2, (__int64)v14, 1),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 == 0) {
      return GameRoutine_f56340(
          *(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL), 1);
    }
    v4 = *(_QWORD*)(v3 + 168);
    if (v4 == 0) {
      return GameRoutine_f56340(
          *(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL), 1);
    }
    v5 = *(_QWORD*)(v4 + 440);
    if (v5 == 0 || *(_BYTE*)(v5 + 16) != 0 || *(_DWORD*)(v4 + 592) != 1) {
      return GameRoutine_f56340(
          *(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL), 1);
    }
    v6 = *(_QWORD*)(v4 + 264);
    v7 = *(_QWORD*)(v6 + 392);
    v8 = *(_QWORD*)(v6 + 400);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(_DWORD*)(v7 + 11784) == 7 || (*(_BYTE*)(v4 + 416) & 1) != 0) {
      v11 = 0;
    }
    else {
      v9 = v3;
      v10 = game_Unit_IsImmobile(v4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v3 = v9;
      v11 = v10 ^ 1;
    }
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v12 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v3 = v12;
    }
    if ((v11 & 1) != 0) {
      GameRoutine_f56210(*(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL), v3,
                         1),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      return GameRoutine_f56340(
          *(_QWORD*)(*(_QWORD*)GameData_212d028[0] + 80LL), 1);
    }
  }
  return result;
}

void game_e61f00(__int64 a1)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  int v8;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    int v31;
    char gap20_[4];
    __int64 v32;
    __int64 v33;
    char* v34;
  } v31_;

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 0x8000) == 0 && GameData_21eea58 != 0 &&
      *(_BYTE*)(GameData_21eea58 + 32) == 1) {
    v2 = GameData_22167bc;
    v3 = GameData_22167c8;
    v4 = GameData_22167d0;
    if (GameData_22167c8 == GameData_22167d0) {
      v5 = 0;
      v6 = nullptr;
    }
    else {
      v5 = 0;
      v6 = nullptr;
      v7 = 0;
      do {
        v8 = *(_DWORD*)(v3 + 72);
        if (v8 == 4 || v8 == 2) {
          if ((unsigned __int64)v6 < v7) {
            *v6++ = *(_QWORD*)v3;
          }
          else {
            v10 = (unsigned __int64)v6 - v5;
            v11 = ((__int64)v6 - v5) >> 3;
            v12 = v11 + 1;
            if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
              goto LABEL_62;
            }
            if ((__int64)(v7 - v5) >> 2 > v12) {
              v12 = (__int64)(v7 - v5) >> 2;
            }
            if (v7 - v5 >= 0x7FFFFFFFFFFFFFF8LL) {
              v13 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v13 = v12;
            }
            if (v13 != 0) {
              if (v13 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v14 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
            }
            else {
              v14 = 0;
            }
            v7 = v14 + 8 * v13;
            v15 = v14 + v10 - 8 * v11;
            *(_QWORD*)(v14 + v10) = *(_QWORD*)v3;
            v6 = (__int64*)(v14 + v10 + 8);
            memcpy_alt1(v15, v5, v10);
            if (v5 != 0) {
              v16 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v16 = 56;
              }
              nn_mem_StandardAllocator_Free_alt5(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v5);
            }
            v5 = v15;
          }
        }
        v3 += 88;
      } while (v3 != v4);
      if ((__int64*)v5 != v6) {
        v17 = (__int64*)(v5 + 8);
        while (v17 != v6) {
          v18 = *(v17 - 1);
          v19 = *v17++;
          if (v18 == v19) {
            v20 = v17 - 2;
            while (v17 != v6) {
              v21 = v18;
              v18 = *v17;
              if (v21 != *v17) {
                v20[1] = v18;
                ++v20;
              }
              ++v17;
            }
            if (v20 + 1 != v6) {
              v6 = v20 + 1;
            }
            break;
          }
        }
      }
    }
    if (GameData_21c9608 != 0) {
      *(_DWORD*)(GameData_21c9608 + 308) = v2;
    }
    if (v6 == (__int64*)v5) {
      v24 = 0;
      v31_.v31 = v2;
      v31_.v32 = 0;
      v31_.v33 = 0;
      v31_.v34 = nullptr;
    }
    else {
      v22 = (char*)v6 - v5;
      if ((((unsigned __int64)v6 - v5) & 0x8000000000000000LL) != 0) {
      LABEL_62:
        GameRoutine_688200_alt1();
      }
      v23 = (__int64*)fw_memory_g_heap_manager_ptr;
      v24 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)v6 - v5, 16, 0);
      memcpy_alt1(v24, v5, (unsigned __int64)v6 - v5);
      v25 = *v23;
      v31_.v31 = v2;
      v26 = fw_memory_HeapManager_Allocate_alt1(v25, (__int64)v6 - v5, 16, 0);
      v27 = (__int64)&v22[v26];
      v31_.v32 = v26;
      v31_.v34 = &v22[v26];
      memcpy_alt1(v26, v24, (unsigned __int64)v6 - v5);
      v31_.v33 = v27;
    }
    GameHr_18fa160(a1, (__int64)&v31_.v31, 1);
    if (v31_.v32 != 0) {
      v31_.v33 = v31_.v32;
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt5(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v31_.v32);
    }
    if (v24 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      nn_mem_StandardAllocator_Free_alt5(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v24);
    }
    if (v5 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt5(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v5);
    }
  }
}

__n128 game_e62290()
{
  int v0;
  __n128 result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((GameData_2216820 & 0x8000) == 0 && GameData_21eea58 != 0 &&
      *(_BYTE*)(GameData_21eea58 + 32) == 1 && GameData_21c9608 != 0) {
    v0 = *(_DWORD*)(GameData_21c9608 + 308);
    if (v0 <= 1) {
      v0 = 1;
    }
    if (v0 >= 5) {
      v0 = 5;
    }
    if ((*(_QWORD*)(GameData_21c9608 + 328) & 4LL) != 0) {
      v0 = 1;
    }
    if (GameData_22167bc < v0) {
      v0 = GameData_22167bc;
    }
    GameData_22167c0 = v0;
    return CmdbtlPartyNatives_eb8c40((__int64)&GameData_2216780);
  }
  return result;
}

bool game_e81260(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t* v2;
  __int64 v3;
  float v4;
  unsigned int v5;
  float32x4_t v6;
  float32x4_t* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  float v11;
  int v12;
  unsigned int v13;
  bool v14;
  int v15;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  __int64 v33;

  GameRoutine_e7fc40(a1, 0);
  v2 = *(float32x4_t**)(a1 + 528);
  v3 = game_script_hub_g_frame_counter_ptr[0];
  v4 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  LANES128(v2[6]).n128_u64[0] = *(_QWORD*)(a1 + 488);
  LANES128(v2[9]).n128_f32[0] =
      (float)(v4 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v33 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v33;
    __cxa_guard_release(&GameData_21a6130);
  }
  v5 = DWORD2(GameData_21a6120);
  LANES128(v2[10]).n128_u64[0] = GameData_21a6120;
  v6 = v2[10];
  LANES128(v6).n128_u64[1] = v5;
  v2[10] = v6;
  game_ede020(v2);
  GameRoutine_ede500((__int64)v2);
  game_ede740(v2);
  v7 = (float32x4_t*)LANES128(v2[6]).n128_u64[0];
  if (LANES128(*(v7)).n128_u32[2] == 0) {
    v7[2] = vaddq_f32(v7[2], v2[10]);
    *(float32x4_t*)(LANES128(v2[6]).n128_u64[0] + 16) =
        vaddq_f32(*(float32x4_t*)(LANES128(v2[6]).n128_u64[0] + 16), v2[10]);
  }
  v8 = GameData_221a540;
  if (GameData_221a540 == 0) {
    goto LABEL_13;
  }
  v10 = *(_QWORD*)(GameData_221a540 + 8);
  v9 = *(_QWORD*)(GameData_221a540 + 16);
  v11 = 0x1.0000000000000p+0f;
  if (v10 > v9) {
  LABEL_8:
    v12 = 1;
    goto LABEL_14;
  }
  while (*(_BYTE*)v9 != 2) {
    v9 -= 64LL;
    if (v10 > v9) {
      goto LABEL_8;
    }
  }
  v13 = *(_DWORD*)(v9 + 32);
  v12 = 1;
  v14 = v13 > 0xB;
  v15 = (1 << v13) & 0x803;
  if (!v14 && v15 != 0) {
  LABEL_13:
    v11 = 0x0.0p+0f;
    v12 = 0;
  }
LABEL_14:
  v17 = *(_QWORD*)v3;
  v18 = *(float*)(a1 + 548);
  v19 = fabsf(
      (float)((float)(*(float*)(*(_QWORD*)v3 + 160LL) * 0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) /
      0x1.99999a0000000p-2f);
  if (v18 > v11) {
    v18 = v18 - v19;
    if (v18 >= v11) {
      goto LABEL_20;
    }
  LABEL_19:
    v18 = v11;
    goto LABEL_20;
  }
  if (v18 < v11) {
    v18 = v18 + v19;
    if (v18 > v11) {
      goto LABEL_19;
    }
  }
LABEL_20:
  v20 = 0x1.99999a0000000p-2f;
  if (v12 == 0) {
    v20 = 0x0.0p+0f;
  }
  v21 = 0x1.3333340000000p-1f;
  if (v12 != 0) {
    v21 = 0x1.0000000000000p+0f;
  }
  if (v21 >= v18) {
    v21 = v18;
  }
  if (v18 >= v20) {
    v20 = v21;
  }
  *(float*)(a1 + 548) = v20;
  v22 = *(float*)(a1 + 544);
  v23 = fabsf((float)((float)(*(float*)(v17 + 160) * 0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f) /
              0x1.6666660000000p-1f);
  if (v22 > 0x0.0p+0f) {
    v22 = v22 - v23;
    if (v22 >= 0x0.0p+0f) {
      goto LABEL_34;
    }
  LABEL_33:
    v22 = 0x0.0p+0f;
    goto LABEL_34;
  }
  if (v22 < 0x0.0p+0f) {
    v22 = v22 + v23;
    if (v22 > 0x0.0p+0f) {
      goto LABEL_33;
    }
  }
LABEL_34:
  *(float*)(a1 + 544) = v22;
  v24 = 0x0.0p+0f;
  if (v8 != 0) {
    v27 = v8 + 8;
    v25 = *(_QWORD*)(v8 + 8);
    v26 = *(_QWORD*)(v27 + 8);
    if (v25 > v26) {
    LABEL_38:
      LODWORD(v8) = 0;
    }
    else {
      while (*(_BYTE*)v26 != 2) {
        v26 -= 64LL;
        if (v25 > v26) {
          goto LABEL_38;
        }
      }
      v24 = 0x0.0p+0f;
      if (*(_DWORD*)(v26 + 32) == 9) {
        v24 = 0x1.0000000000000p+0f;
        LODWORD(v8) = 1;
      }
      else {
        LODWORD(v8) = 0;
      }
    }
  }
  v28 = *(float*)(a1 + 552);
  v29 = fabsf((float)((float)(*(float*)(v17 + 160) * 0x1.0aef000000000p+4f) /
                      0x1.f400000000000p+9f) /
              0x1.99999a0000000p-2f);
  if (v28 > v24) {
    v28 = v28 - v29;
    if (v28 >= v24) {
      goto LABEL_48;
    }
  LABEL_47:
    v28 = v24;
    goto LABEL_48;
  }
  if (v28 < v24) {
    v28 = v28 + v29;
    if (v28 > v24) {
      goto LABEL_47;
    }
  }
LABEL_48:
  v30 = 0x1.99999a0000000p-2f;
  if ((_DWORD)v8 == 0) {
    v30 = 0x0.0p+0f;
  }
  v31 = 0x1.3333340000000p-1f;
  if ((_DWORD)v8 != 0) {
    v31 = 0x1.0000000000000p+0f;
  }
  if (v31 >= v28) {
    v31 = v28;
  }
  if (v28 >= v30) {
    v30 = v31;
  }
  *(float*)(a1 + 552) = v30;
  return game_f8f140(*(float32x4_t**)GameData_212c7e0[0], *(float**)(a1 + 488));
}

void game_e81600(__int64 a1, _QWORD* a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  int v10;
  int v11;
  int v12;
  float v13;
  float v14;
  __int64 v15;
  int v16;
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
  __int64 v32;
  float32x4_t* v33;
  _DWORD* v34;
  bool v35;
  unsigned __int64 v36;
  __int128 v37;
  float v38;

  if ((*(_BYTE*)(*a2 + 24LL) & 1) == 0) {
    wld_a7fda0(a1 + 16, *(_DWORD**)(a1 + 488));
    v6 = *(_QWORD*)(a1 + 456);
    *(_DWORD*)(a1 + 440) = 0;
    *(_QWORD*)(a1 + 448) = 0;
    *(_QWORD*)(a1 + 456) = 0;
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
    v7 = *(_QWORD*)(a1 + 472);
    *(_QWORD*)(a1 + 464) = 0;
    *(_QWORD*)(a1 + 472) = 0;
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  v8 = *a2;
  v9 = *(float*)(*a2 + 28LL);
  if (v9 <= 0x0.0p+0f) {
    goto LABEL_47;
  }
  if (game_ProcGameSkipView_instance_ != 0) {
    v10 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
    if ((unsigned int)(v10 - 1) <= 2) {
      v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v12 = (v11 & 8) != 0 ? 2 : 3;
      if ((v12 & v11) == 0) {
        if (v10 == 3) {
          goto LABEL_19;
        }
        if (game_ProcFadeView_instance_ != 0) {
          v36 = game_ProcFadeView_instance_ +
                ((unsigned __int64)*(
                     unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                 << 6);
          if (*(float*)(v36 + 172) == *(float*)(v36 + 168)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)(v36 + 160) + 16LL))(v36 +
                                                                           160);
          }
          else {
            v37 = *(_OWORD*)(v36 + 208);
          }
          if (*((float*)&v37 + 3) == 0x1.0000000000000p+0f) {
            LODWORD(v38) =
                LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v36 + 160) + 16LL))(
                                v36 + 160, *((float*)&v37 + 3)))
                    .n128_u32[3];
            v8 = *a2;
            if (v38 == 0x1.0000000000000p+0f) {
              v9 = *(float*)(v8 + 28);
              goto LABEL_19;
            }
          }
          else {
            v8 = *a2;
          }
        }
      }
    }
  }
  v13 = *(float*)(v8 + 28);
  v9 = *(float*)(a1 + 440);
  v14 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (v9 > v13) {
    v9 = v9 - v14;
    if (v9 >= v13) {
      goto LABEL_19;
    }
  LABEL_18:
    v9 = *(float*)(v8 + 28);
    goto LABEL_19;
  }
  if (v9 < v13) {
    v9 = v9 + v14;
    if (v9 > v13) {
      goto LABEL_18;
    }
  }
LABEL_19:
  *(float*)(a1 + 440) = v9;
  v15 = *a2;
  v16 = *(_DWORD*)(*a2 + 32LL);
  v17 = v9 / *(float*)(*a2 + 28LL);
  if (v16 == 1) {
    v20 = powf(v17, 0x1.0000000000000p-1f);
    v21 = (float)(PSEUDO_UNFUSED(v20 * 0x1.921fb60000000p+1f)) +
          (float)(roundf((float)(v20 * 0x1.921fb60000000p+1f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v21 <= 0x1.921fb60000000p+0f) {
      v23 = 0x1.0000000000000p+0f;
      if (v21 >= -0x1.921fb60000000p+0f) {
      LABEL_32:
        v24 = v21 * v21;
        v25 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 +
                        4);
        v26 =
            -(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                               (_QWORD)GameData_212c188) -
                     (float)((float)(*((float*)GameData_212c188 + 1) -
                                     (float)(*(float*)GameData_212c188 * v24)) *
                             v24));
        v27 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
        v15 = *a2;
        goto LABEL_33;
      }
      v22 = -0x1.921fb60000000p+1f;
    }
    else {
      v22 = 0x1.921fb60000000p+1f;
    }
    v21 = v22 - v21;
    v23 = -0x1.0000000000000p+0f;
    goto LABEL_32;
  }
  if (v16 != 0) {
    goto LABEL_36;
  }
  v18 = (float)(PSEUDO_UNFUSED(v17 * 0x1.921fb60000000p+1f)) +
        (float)(roundf((float)(v17 * 0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v18 > 0x1.921fb60000000p+0f) {
    v19 = 0x1.921fb60000000p+1f;
  LABEL_27:
    v18 = v19 - v18;
    v23 = -0x1.0000000000000p+0f;
    goto LABEL_28;
  }
  v23 = 0x1.0000000000000p+0f;
  if (v18 < -0x1.921fb60000000p+0f) {
    v19 = -0x1.921fb60000000p+1f;
    goto LABEL_27;
  }
LABEL_28:
  v24 = v18 * v18;
  v25 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v26 = -(
      float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) -
             (float)((float)(*((float*)GameData_212c188 + 1) -
                             (float)(*(float*)GameData_212c188 * v24)) *
                     v24));
  v27 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
LABEL_33:
  v28 = v23 *
        (float)((float)((float)-(
                            float)(v27 -
                                   (float)((float)(v25 + (float)(v26 * v24)) *
                                           v24)) *
                        v24) +
                0x1.0000000000000p+0f);
  v29 = fabsf(v28);
  v35 = v28 < 0x0.0p+0f;
  v30 = -0x1.0000000000000p+0f;
  v31 = v29 * 0x1.0000000000000p-1f;
  if (v35) {
    v30 = 0x1.0000000000000p+0f;
  }
  v17 = (float)(v31 * v30) + 0x1.0000000000000p-1f;
LABEL_36:
  v32 = *(_QWORD*)(v15 + 8);
  v33 = *(float32x4_t**)(a1 + 488);
  if (v17 <= 0x0.0p+0f) {
    v34 = (_DWORD*)(a1 + 16);
  }
  else {
    v34 = *(_DWORD**)(v15 + 8);
  }
  wld_a7fda0(*(_QWORD*)(a1 + 488), v34);
  v35 = v17 > 0x0.0p+0f && v17 < 0x1.0000000000000p+0f;
  if (v35) {
    GameRoutine_a7fed0(v33, a1 + 16, v32, v17, v17);
  }
  if (v17 >= 0x1.0000000000000p+0f) {
    v8 = *a2;
  LABEL_47:
    wld_a7fda0(*(_QWORD*)(a1 + 488), *(_DWORD**)(v8 + 8));
  }
  if ((*(_BYTE*)(*a2 + 24LL) & 1) != 0) {
    return;
  }
  if ((*(_BYTE*)(a1 + 480) & 1) != 0) {
    if ((a3 & 1) != 0) {
      return;
    }
    goto LABEL_51;
  }
  *(_BYTE*)(a1 + 480) = 1;
  if ((a3 & 1) == 0) {
  LABEL_51:
    *(_BYTE*)(*a2 + 24LL) = 1;
  }
}

__int64 game_e81a10(__int64 result)
{

#pragma clang fp contract(off)
  int v1;
  int v2;
  int v3;
  float v4;
  int v5;
  int v6;
  int v7;
  float v8;
  unsigned __int64 v9;
  __int64 v10;
  __int128 v11;
  __int64 v12;
  float v13;

  if (game_ProcGameSkipView_instance_ == 0) {
    goto LABEL_7;
  }
  v1 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
  if ((unsigned int)(v1 - 1) > 2) {
    goto LABEL_7;
  }
  v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
  v3 = (v2 & 8) != 0 ? 2 : 3;
  if ((v3 & v2) != 0 ||
      v1 != 3 &&
          (game_ProcFadeView_instance_ == 0 ||
           (*(float*)((v9 = game_ProcFadeView_instance_ +
                            ((unsigned __int64)*(
                                 unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
                             << 6)) +
                      172) != *(float*)(v9 + 168)
                ? (v11 = *(_OWORD*)(v9 + 208))
                : (v10 = result,
                   (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) +
                                                   16LL))(v9 + 160),
                   result = v10),
            *((float*)&v11 + 3) != 0x1.0000000000000p+0f ||
                (v12 = result,
                 LODWORD(v13) =
                     LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                  (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                                     v9 + 160, *((float*)&v11 + 3)))
                         .n128_u32[3],
                 result = v12, v13 != 0x1.0000000000000p+0f)))) {
  LABEL_7:
    v4 = *(float*)(result + 160);
    if (v4 > 0x0.0p+0f) {
      v5 = (int)(float)((float)(v4 * 0x1.0000000000000p-1f) *
                        0x1.e000000000000p+5f);
      if (v5 >= 1) {
        if (game_ProcGameSkipView_instance_ == 0 ||
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
            (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
                 ? (v7 = 2)
                 : (v7 = 3),
             (v7 & v6) != 0)) {
          v8 = (float)(unsigned int)v5;
          if (*(float*)(result + 144) >= (float)(unsigned int)v5) {
            v8 = *(float*)(result + 144);
          }
          *(_WORD*)(result + 136) = *(_WORD*)(result + 136) & 0xFF97 | 0x20;
          *(float*)(result + 144) = v8;
        }
      }
    }
  }
  return result;
}

void game_e84360(__int64 a1, _DWORD* a2)
{
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
  _QWORD v27[10];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  char v35;
  char v36;
  __int64 v37;
  int v38;
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

  v28 = 1065353216;
  v29 = 0x100000000LL;
  v33 = 0;
  v38 = 0;
  v66 = 0;
  v67 = 0;
  v63 = 0;
  v64 = 0;
  v30 = 0x4248000041D80000LL;
  v31 = 0x41C0000042100000LL;
  v32 = 0x4110000041800000LL;
  v37 = 1092616192;
  v3 = *(_QWORD*)GameData_212c2a0;
  v4 = *((_QWORD*)GameData_212c2a0 + 1);
  v5 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
  v6 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
  v9 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0);
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2b0 + 8);
  v41 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
  v42 = v5;
  v43 = v6;
  v44 = v7;
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2b0);
  v12 = *(_QWORD*)GameData_212c2b0;
  v39 = v3;
  v40 = v4;
  v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2a0);
  v15 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0);
  v14 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v45 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
  v46 = v13;
  v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0);
  v49 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0 + 8);
  v50 = v14;
  v17 = *(_QWORD*)GameData_212c2b0;
  v18 = *((_QWORD*)GameData_212c2b0 + 1);
  v55 = v12;
  v56 = v16;
  v47 = v17;
  v48 = v18;
  v19 =
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)GameData_212c2b0);
  v53 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v54 = v10;
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 16);
  v22 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)GameData_212c2b0);
  v59 = v9;
  v60 = v19;
  v51 = v20;
  v52 = v8;
  v57 = v15;
  v58 = v21;
  v61 = v11;
  v62 = v22;
  v35 = 1;
  *(_OWORD*)&v27[2] = GameData_1a83090;
  *(_OWORD*)&v27[4] = (__typeof__(*(_OWORD*)&v27[4])){0};
  *(_OWORD*)&v27[6] = GameData_1a83610;
  *(_OWORD*)&v27[8] = (__typeof__(*(_OWORD*)&v27[8])){0};
  v36 = 1;
  v27[0] = GameData_212e438 + 16;
  v27[1] = 0;
  v34 = 0x469C40003DCCCCCDLL;
  v68 = 1023;
  v64 = 1023;
  v65 = 0;
  wld_a7fda0((__int64)v27, a2);
  wld_a7fda0(*(_QWORD*)(a1 + 8), v27);
  v23 = v65;
  v27[0] = GameData_212e740[0] + 2;
  if (v65 != 0) {
    v24 = v66;
    if (v65 == v66) {
      goto LABEL_8;
    }
    do {
      v25 = *(_QWORD*)(v24 - 8);
      *(_QWORD*)(v24 - 8) = 0;
      if (v25 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
      }
      v24 -= 24;
    } while (v24 != v23);
    v66 = v23;
    v23 = v65;
    if (v65 != 0) {
    LABEL_8:
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt5(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v23);
    }
  }
}

__attribute__((swiftcall)) void game_e84680(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (*(_WORD*)(a1 + 128) != 0) {
    v3 = a1;
    v4 = nullptr;
    v5 = 0;
    v6 = 0;
    do {
      v8 = *(unsigned __int8*)(*(_QWORD*)(v3 + 136) + v5);
      v9 = *(unsigned __int8*)(*(_QWORD*)(v3 + 152) + v5);
      v10 = a2[2];
      if ((unsigned __int64)v4 < v10) {
        *(_QWORD*)v4 = v8 | (v9 << 32);
        v4 += 8;
      }
      else {
        v11 = &v4[-v6];
        v12 = (__int64)&v4[-v6] >> 3;
        v13 = v12 + 1;
        if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
          *a2 = v6;
          GameRoutine_e876f0();
        }
        v14 = v10 - v6;
        if (v14 >> 2 > v13) {
          v13 = v14 >> 2;
        }
        if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
          v15 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v15 = v13;
        }
        if (v15 != 0) {
          if (v15 >> 61 != 0) {
            *a2 = v6;
            GameRoutine_60a210(a1);
          }
          v16 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
        }
        else {
          v16 = 0;
        }
        v17 = v8 | (v9 << 32);
        v18 = v16 + 8 * v15;
        v19 = &v4[-v6];
        v20 = (__int64)&v11[v16 + -8 * v12];
        *(_QWORD*)&v11[v16] = v17;
        v4 = &v11[v16 + 8];
        a1 = memcpy(v20, v6, v19);
        a2[1] = (__int64)v4;
        a2[2] = v18;
        if (v6 != 0) {
          v21 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v6);
        }
        v6 = v20;
      }
      v7 = *(unsigned __int16*)(v3 + 128);
      ++v5;
      a2[1] = (__int64)v4;
    } while (v5 < v7);
  }
  else {
    v6 = 0;
  }
  *a2 = v6;
}

__int64* game_ea3620(__int64* result, char a2, int a3)
{
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  float v9;
  float v10;
  bool v11;
  float v12;
  float v13;

  v3 = *((_DWORD*)result + 5);
  v4 = v3 | a3;
  if ((a2 & 1) != 0) {
    v4 = v3 & ~a3;
  }
  *((_DWORD*)result + 5) = v4;
  if (v3 != v4) {
    v5 = *result;
    v6 = *(_QWORD*)(*result + 8);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v5 + 16);
      v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
      if (!v8 && *(_QWORD*)(v6 + 8) != -1 && (*(_BYTE*)(v5 + 61) & 1) == 0 &&
          *(_DWORD*)(v5 + 64) != 1 && (*(_BYTE*)(v7 + 342) & 1) != 0) {
        v9 = *((float*)result + 9) * *((float*)result + 2);
        v10 = fminf(fmaxf(v9, 0x0.0p+0f), 0x1.0000000000000p+0f);
        v11 = v9 >= 0x1.0000000000000p+0f || v9 <= 0x0.0p+0f;
        v12 = (float)(v10 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
        if (!v11) {
          v9 = v12;
        }
        if (v4 != 0) {
          v13 = 0x0.0p+0f;
        }
        else {
          v13 = v9;
        }
        result = (__int64*)game_character_1084940(v7, 0, v13);
        *(_BYTE*)(*(_QWORD*)(v7 + 8) + 289LL) = v13 > 0x0.0p+0f;
      }
    }
  }
  return result;
}

float game_eac260(__int64* a1, _DWORD* a2, float* a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  int v4;
  float result;
  float* v6;
  char v7;

  v3 = *a1;
  v4 = *(_DWORD*)(*a1 + 24);
  if (v4 != -1) {
    if (v4 == 1) {
      result = *a3;
      *a2 = *(_DWORD*)a3;
      return result;
    }
    v6 = a3;
    ((void (*)(char*, __int64))decltype_c81af0_ptr[v4])(&v7, v3);
    a3 = v6;
  }
  *(_DWORD*)(v3 + 24) = -1;
  result = *a3;
  *(_DWORD*)(v3 + 24) = 1;
  *(float*)v3 = result;
  return result;
}

__int64* game_eac2e0(__int64** a1, __int64* a2, __int64* a3)
{
  __int64* result;
  int v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v17_;
  char v22;

  result = *a1;
  v6 = *((_DWORD*)result + 6);
  if (v6 != 2) {
    v10 = result;
    if ((*(_BYTE*)a3 & 1) != 0) {
      result = (__int64*)fw_text_String_CopyTerminated(&v17_.v17, a3[2], a3[1]);
      v6 = *((_DWORD*)v10 + 6);
      if (v6 == -1) {
      LABEL_11:
        v12 = v17_.v18;
        *v10 = v17_.v17;
        v10[1] = v12;
        v10[2] = v17_.v19;
        *((_DWORD*)v10 + 6) = 2;
        return result;
      }
    }
    else {
      v11 = a3[1];
      v17_.v17 = *a3;
      v17_.v18 = v11;
      v17_.v19 = a3[2];
      if (v6 == -1) {
        goto LABEL_11;
      }
    }
    result = (__int64*)((__int64 (*)(char*, __int64*))decltype_c81af0_ptr[v6])(
        &v22, v10);
    goto LABEL_11;
  }
  if (a2 != a3) {
    v7 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)a2 & 1) != 0) {
      v13 = a3[2];
      v14 = (v7 & 1) == 0;
      v15 = v7 >> 1;
      if (v14) {
        v13 = (__int64)a3 + 1;
      }
      if (v14) {
        v16 = v15;
      }
      else {
        v16 = a3[1];
      }
      return SpineModel_64dde0(a2, v13, v16);
    }
    else if ((v7 & 1) != 0) {
      return GameRoutine_64df20_alt1(a2, a3[2], a3[1]);
    }
    else {
      v8 = *a3;
      v9 = a3[2];
      a2[1] = a3[1];
      a2[2] = v9;
      *a2 = v8;
    }
  }
  return result;
}

#pragma GCC visibility pop
