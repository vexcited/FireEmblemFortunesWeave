#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_d80c00(PSEUDO_X8, _QWORD);
__int64 CScriptArray_At_1971f0(_QWORD, _QWORD);
__int64 CScriptArray_GetSize(_QWORD);
__int64 EventManager_cbbb40(_QWORD);
__int64 GameRoutine_10778e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_20();
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_62bec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_67ee90(void);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_7d1480(_QWORD);
__int64 GameRoutine_caa7c0(_QWORD);
__int64 GameRoutine_caaee0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cab670(_QWORD);
__int64 GameRoutine_cab8c0(_QWORD);
__int64 GameRoutine_cac090(_QWORD*);
__int64 GameRoutine_caeae0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_caed40(_QWORD*, __int64);
__int64 GameRoutine_cb0480(_QWORD, _QWORD);
__int64 GameRoutine_cb27c0(_QWORD);
__int64 GameRoutine_cb8a30(_QWORD, _QWORD);
__int64 GameRoutine_ced660(_QWORD);
__int64 GameRoutine_ced840(_QWORD);
__int64 GameRoutine_ceecc0(_QWORD, _QWORD);
__int64 GameRoutine_cf1500(_QWORD, _QWORD);
__int64 GameRoutine_cfd990(_QWORD, _QWORD);
__int64 GameRoutine_d0e440(_QWORD, _QWORD);
__int64 GameRoutine_d196c0(_QWORD, _QWORD, double);
__int64 GameRoutine_d198c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d1d160(_QWORD);
__int64 GameRoutine_d2cec0(_QWORD);
__int64 GameRoutine_d2d4e0(_QWORD);
__int64 GameRoutine_d2d5e0(_QWORD);
__int64 GameRoutine_d80dc0(_QWORD, _QWORD);
__int64 GameRoutine_db2dc0(_QWORD);
__int64 GameRoutine_db3060(_QWORD);
__int64 GameRoutine_df5940(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_e94ce0(_QWORD);
__int64 GameRoutine_f71d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_fb7480(_QWORD, _QWORD);
__int64 GameRoutine_ffe9d0(_QWORD);
__int64 GameRoutine_ffed80(_QWORD);
__int64 GameRoutine_fff7f0(_QWORD);
__int64 GameRoutine_fffa20(void);
__int64 HandlePtr_cb2900(_QWORD, _QWORD);
__int64 HubCharacterNatives_cac2c0(_QWORD, _QWORD);
__int64 HubCharacterNatives_cb12a0(_QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_cba3a0(_QWORD, _QWORD);
__int64 HubCharacterNatives_cef5e0(_QWORD, _QWORD);
__int64 HubCharacterNatives_d5ab80(_QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_df5660(_QWORD, _QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 WaitRelease_cfa2a0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcmp(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN* GameData_212ec70;
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*GameData_1fe18f0[])();
extern __int64 (*game_hub_CharacterBehaviorStack_StackEvasion_vtable[])();
extern __int64 (*game_zview_CharacterActionParam_vtable[])();
extern __int64 (*game_zview_CharacterAction_vtable[])();
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dc68;
extern __int64 GameData_21a60e0;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca310;
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
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220b6d0;
extern __int64 GameData_220b6e0;
extern __int64 GameData_2232008;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebc0[5];
extern __int64* as_g_script_manager_ptr;
extern __int64* util_g_handle_slots_ptr[2];
extern char GameData_1a9f09e;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
extern int* GameData_212ec68;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_cdcc10(void);
void __attribute__((noreturn)) String_60a230(_QWORD);
_QWORD* HubCharacterNatives_ca8f80_alt1(_QWORD* a1, long double a2) __asm__(
    "HubCharacterNatives_ca8f80");
__int64 HubCharacterNatives_ca9ec0(__int64 a1, __int64 a2, unsigned int a3,
                                   __int64 a4);
__int64 HubCharacterNatives_caac60_alt1(__int64 a1) __asm__(
    "HubCharacterNatives_caac60");
__int64 HubCharacterNatives_cab4e0(__int64 result);
__int64 HubCharacterNatives_cabfc0(__int64 result, char a2);
__int64 HubCharacterNatives_cac250(__int64 a1);
__int64 HubCharacterNatives_cada30(__int64 result);
__int64 HubCharacterNatives_cadba0(__int64 a1);
__int64 HubCharacterNatives_cadf50(__int64 a1);
__int64 HubCharacterNatives_caea10(__int64 result, int a2, char a3);
__int64 HubCharacterNatives_cb02e0(__int64 a1, _QWORD* a2);
_QWORD* HubCharacterNatives_cb4210(_QWORD* a1, __int64* a2);
_QWORD* HubCharacterNatives_cb4360(_QWORD* result, long double a2);
__int64 HubCharacterNatives_cb5b60(__int64 a1);
__int64 HubCharacterNatives_cba040(__int64 a1, __int64* a2);
__int64 HubCharacterNatives_cba1a0(__int64 a1, __int64* a2);
__int64 HubCharacterNatives_ccee40(__int64 a1);
_QWORD*
HubCharacterNatives_cd1120_alt1(__int64 a1, __int64 a2, int a3,
                                float a4) __asm__("HubCharacterNatives_cd1120");
_QWORD* HubCharacterNatives_cd3a50(__int64 a1, float a2);
_QWORD* HubCharacterNatives_cd4660(__int64 a1, __int64 a2);
_QWORD* HubCharacterNatives_cd50e0_alt1(
    __int64 a1, unsigned __int8* a2) __asm__("HubCharacterNatives_cd50e0");
_QWORD* HubCharacterNatives_cd5340_alt1(
    __int64 a1, unsigned __int8* a2) __asm__("HubCharacterNatives_cd5340");
__int64 HubCharacterNatives_cea6b0(__int64 result);
_QWORD* HubCharacterNatives_cec780(_QWORD* result);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64 a2, char a3);
_QWORD* HubCharacterNatives_ceccf0(_QWORD* result);
__int64 HubCharacterNatives_ced0c0(__int64 a1, __int64 a2, int a3);
__int64
HubCharacterNatives_cee710_alt1(__int64 a1, int a2, __int64 a3, __int64 a4,
                                __int64 a5,
                                float a6) __asm__("HubCharacterNatives_cee710");
__int64 HubCharacterNatives_cee860_alt1(__int64 a1, int a2, __int64 a3) __asm__(
    "HubCharacterNatives_cee860");
__int64
HubCharacterNatives_cee990_alt1(__int64 a1, int a2, int a3, __int64 a4,
                                __int64 a5, __int64 a6,
                                float a7) __asm__("HubCharacterNatives_cee990");
__int64 HubCharacterNatives_ceebc0(__int64 a1);
__int64 HubCharacterNatives_cf66e0(__int64 a1);
__int64 HubCharacterNatives_cf7940(__int64 a1);
__int64 HubCharacterNatives_cf7b40(__int64 result, char a2);
__int64 HubCharacterNatives_cf7c90(__int64 result, __int64 a2, char a3);
bool HubCharacterNatives_cf7e00(__int64 a1);
bool HubCharacterNatives_cf7f30(__int64 a1, int a2);
__int64 HubCharacterNatives_df4cc0(_QWORD* a1);
__int64 HubCharacterNatives_df4e10(__int64 result);
__int64 HubCharacterNatives_df4ed0(__int64 a1);
__int64 HubCharacterNatives_df4fc0(_QWORD* a1, int a2);
__int64 HubCharacterNatives_df5530(__int64 a1, int a2, __int64* a3);
__int64 HubCharacterNatives_df5c00(__int64 a1);
__int64 HubCharacterNatives_108c2a0(_BYTE* a1);
__int64 GameRoutine_10c0160(_QWORD, _QWORD);
__int64 GameRoutine_10c0240(_QWORD);
__int64 GameRoutine_cad680(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cafb80(_QWORD);
__int64 GameRoutine_d859a0(_QWORD);
__int64 GameRoutine_da21c0(_QWORD, _QWORD);
__int64 GameRoutine_fb6f80(_QWORD, _QWORD);
__int64 HubCharacterNatives_cb02e0_alt1(_QWORD, _QWORD) __asm__(
    "HubCharacterNatives_cb02e0");
__int64 HubCharacterNatives_cd7620(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 GameData_220d630;
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) String_60a1d0(void);
_QWORD* hub_character_AddAccessEvent_alt1(
    __int64 a1, __int64 a2, __int64 a3) __asm__("hub_character_AddAccessEvent");
_QWORD* hub_character_RegisterPopupTalkLabel(__int64 a1, __int64 a2);
__int64 hub_character_AddTalkSelectItem(__int64 a1, __int64 a2, __int64 a3);
__int64 hub_character_PreTalkEvent(__int64 result);
_QWORD* hub_character_BeginEncounter_alt1(__int64 a1) __asm__(
    "hub_character_BeginEncounter");
__int64* hub_character_RegisterWarpLocalCallback_alt1(
    __int64 a1, __int64 a2) __asm__("hub_character_RegisterWarpLocalCallback");
_QWORD*
hub_character_PlayFacial_alt1(__int64 a1, __int64 a2,
                              float a3) __asm__("hub_character_PlayFacial");
_QWORD* hub_character_SetOverrideNameLabel(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void Character_cb17a0(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void Character_cb1ec0(PSEUDO_X8, __int64,
                                                 unsigned int);
__attribute__((swiftcall)) void game_112eec0(PSEUDO_X8, __int64 result,
                                             unsigned int, unsigned int);
__attribute__((swiftcall)) void game_db1620(PSEUDO_X8, unsigned __int64 result,
                                            __int64);
__attribute__((swiftcall)) void game_hub_efcf80(PSEUDO_X8, _QWORD*);
__int64** GameRoutine_cb2640(__int64** result);
__int64* GameRoutine_d8bae0(__int64**, unsigned __int8*, __int64, __int64**);
__int64
CScriptArray_At_1971f0_alt1(__int64,
                            unsigned int) __asm__("CScriptArray_At_1971f0");
__int64 CScriptArray_GetSize_alt1(__int64) __asm__("CScriptArray_GetSize");
__int64 GameRoutine_1028670(__int64, __int64*);
__int64 GameRoutine_cb2080(__int64 result, _QWORD*);
__int64 GameRoutine_d196c0_alt1(__int64 result, char,
                                float) __asm__("GameRoutine_d196c0");
__int64 GameRoutine_d859a0_alt1(__int64) __asm__("GameRoutine_d859a0");
__int64 GameRoutine_d8b9c0(__int64, unsigned __int8*);
__int64 GameRoutine_f6b480(__int64, __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
bool GameRoutine_db2940(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 GameData_212c6c8;
extern __int64 GameData_21f3d08;
extern __int64 as_g_script_manager;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char** GameData_212ebe8;
float CharacterRotate_d52080(__int64);
float fmodf(float, float);
unsigned __int64 GameRoutine_25eca0(__int64*, __int64);
unsigned __int64 game_hub_cad680(__int64, __int64, __int64);
unsigned __int8* Character_cb01a0(unsigned __int8* result, unsigned __int8*,
                                  __int64, __int64, __int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
__attribute__((swiftcall)) void
hub_character_GetFollowInitPosition(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__int64 hub_character_WaitIdleSkippable(__int64 result);
bool hub_character_IsIdleForAnimation(__int64 a1);
__attribute__((swiftcall)) void hub_character_GetMonthLabel(PSEUDO_X8 x8_,
                                                            __int64 a1);
_QWORD* hub_character_AddAccessEvent_cd6100_alt1(__int64 a1, char* a2) __asm__(
    "hub_character_AddAccessEvent_cd6100");
_QWORD* hub_character_AddAccessEvent_cd63a0_alt1(
    __int64 a1, __int64 a2,
    char* a3) __asm__("hub_character_AddAccessEvent_cd63a0");
__int64 hub_character_PostTalkEvent(__int64 result);
_QWORD* hub_character_IsDirectTalkCameraFacility(__int64 a1, __int64 a2);
__int64 hub_character_DngTalkSetupEnd(__int64 result);
__int64 EventManager_cbbb40_alt1(__int64,
                                 __int64) __asm__("EventManager_cbbb40");
__int64 GameRoutine_62bec0_alt1(__int64 result, __int64,
                                unsigned __int8) __asm__("GameRoutine_62bec0");
__int64 GameRoutine_d80dc0_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_d80dc0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HubCharacterNatives_ca8f80(_QWORD* a1);
__int64 CharacterModel_d198c0(_QWORD*, float32x2_t*, char, char);
__int64 Character_cb0480(__int64, __int64);
__int64
GameRoutine_10c0160_alt1(__int64 result,
                         unsigned __int8*) __asm__("GameRoutine_10c0160");
__int64 GameRoutine_10c0240_alt1(__int64 result) __asm__("GameRoutine_10c0240");
__int64 GameRoutine_d2cec0_alt1(int) __asm__("GameRoutine_d2cec0");
__int64 GameRoutine_da21c0_alt1(__int64, int*) __asm__("GameRoutine_da21c0");
__int64 as_string_c_str_alt1(__int64) __asm__("as_string_c_str");
__int64 game_character_10778e0(__int64 result, __int64, unsigned __int64);
__int64 game_hub_cad680_alt1(__int64, _QWORD*,
                             __int64) __asm__("game_hub_cad680");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 strstr_alt1(const char*, const char*) __asm__("strstr");
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_df5940_alt1(_QWORD*, __int64, char,
                             double) __asm__("GameRoutine_df5940");
void TrickEntity_7d1480(__int64);
void __attribute__((noreturn))
GameRoutine_cdcc10_alt1() __asm__("GameRoutine_cdcc10");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_hub_Character_SetPopupAmes(_QWORD*, __int64);
void HubCharacterNatives_caac60(__int64 a1);
void HubCharacterNatives_cd1120(__int64 a1, __int64 a2, int a3, float a4);
void HubCharacterNatives_cd50e0(__int64 a1, unsigned __int8* a2);
void HubCharacterNatives_cd5340(__int64 a1, unsigned __int8* a2);
void hub_character_AddAccessEvent(__int64 a1, __int64 a2, __int64 a3);
void hub_character_BeginEncounter(__int64 a1);
void hub_character_PlayFacial(__int64 a1, __int64 a2, float a3);
__int64 HubCharacterNatives_cee710(__int64 a1, unsigned __int32 a2, __int64 a3,
                                   __int64 a4, __int64 a5, float a6);
__int64 HubCharacterNatives_cee860(__int64 a1, unsigned __int32 a2, __int64 a3);
__int64 HubCharacterNatives_cee990(__int64 a1, unsigned __int32 a2, int a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   float a7);
__attribute__((swiftcall)) void
game_db1620_alt1(PSEUDO_X8, __int64, __int64) __asm__("game_db1620");
__int64 Character_cb01a0_alt1(__int64 result, unsigned __int8*, signed __int64,
                              const char*,
                              unsigned __int64) __asm__("Character_cb01a0");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64
GameRoutine_25eca0_alt1(__int64*, const char*) __asm__("GameRoutine_25eca0");
void GameRoutine_cb2640_alt1(__int64**) __asm__("GameRoutine_cb2640");
void __attribute__((noreturn)) fs_60a230();
void game_hub_cad680_alt2(__int64, __int64, __int64) __asm__("game_hub_cad680");
void hub_character_AddAccessEvent_cd6100(__int64 a1, char* a2);
void hub_character_AddAccessEvent_cd63a0(__int64 a1, __int64 a2, char* a3);
_QWORD* Manager_66cc20_alt1(__int64*, _QWORD*) __asm__("Manager_66cc20");
void hub_character_RegisterWarpLocalCallback(__int64 a1, __int64 a2);

void HubCharacterNatives_ca8f80(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  char* v4;
  __int64* v5;
  __int64 v6;
  char* v7;
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
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v34;
    __int64 v35;
  } v34_;

  v1 = a1[136];
  v2 = a1[137];
  if (v1 != v2) {
    v4 = (char*)as_g_context_slots_ptr;
    v5 = as_g_script_manager_ptr;
    do {
      v6 = *(unsigned int*)(v1 + 8);
      if ((_DWORD)v6 != 0x2000) {
        v7 = &v4[16 * v6];
        v8 = *((_QWORD*)v7 + 1);
        if (v8 != 0 && *(_QWORD*)v7 == *(_QWORD*)v1 &&
            *(_DWORD*)(v8 + 52) == 1) {
          GameRoutine_62bec0_alt1(*v5, v1, 1u);
        }
      }
      v1 += 24;
    } while (v1 != v2);
    v1 = a1[136];
  }
  v9 = a1[14];
  a1[137] = v1;
  if (v9 == 0) {
    a1[13] = 0;
    a1[14] = 0;
    v14 = a1[16];
    if (v14 != 0) {
      goto LABEL_19;
    }
  LABEL_29:
    a1[15] = 0;
    a1[16] = 0;
    v19 = a1[25];
    if (v19 == 0) {
      goto LABEL_35;
    }
    goto LABEL_30;
  }
  v10 = std___1___shared_weak_count_lock_alt1(v9);
  if (v10 != 0) {
    v11 = a1[13];
    v12 = v10;
    if (v11 != 0) {
      EventManager_cbbb40_alt1(*(_QWORD*)GameData_212dc68, v11);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
  v13 = a1[14];
  a1[13] = 0;
  a1[14] = 0;
  if (v13 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
  v14 = a1[16];
  if (v14 == 0) {
    goto LABEL_29;
  }
LABEL_19:
  v15 = std___1___shared_weak_count_lock_alt1(v14);
  if (v15 != 0) {
    v16 = a1[15];
    v17 = v15;
    if (v16 != 0) {
      EventManager_cbbb40_alt1(*(_QWORD*)GameData_212dc68, v16);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak_alt1(v17);
    }
  }
  v18 = a1[16];
  a1[15] = 0;
  a1[16] = 0;
  if (v18 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  v19 = a1[25];
  if (v19 != 0) {
  LABEL_30:
    if (*(_QWORD*)(v19 + 8) != -1) {
      v20 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
      v34_.v34 = a1[24];
      v34_.v35 = v19;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_d80dc0_alt1(v20, &v34_.v34);
      if (v34_.v35 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v34_.v35);
      }
      v21 = a1[25];
      a1[24] = 0;
      a1[25] = 0;
      if (v21 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v21);
      }
    }
  }
LABEL_35:
  v22 = a1[147];
  v23 = a1[146];
  if (v23 != v22) {
    v24 = fw_memory_g_heap_manager_ptr;
    do {
      v25 = *(_QWORD**)(v22 - 16);
      v26 = v22;
      if ((_QWORD*)(v22 - 48) == v25) {
        v27 = 32;
      }
      else {
        if (v25 == nullptr) {
          goto LABEL_43;
        }
        v27 = 40;
      }
      (*(void (**)(__int64))(*v25 + v27))((__int64)v25);
    LABEL_43:
      v28 = *(_QWORD**)(v22 - 64);
      if ((_QWORD*)(v22 - 96) == v28) {
        v29 = 32;
      }
      else {
        if (v28 == nullptr) {
          goto LABEL_48;
        }
        v29 = 40;
      }
      (*(void (**)(__int64))(*v28 + v29))((__int64)v28);
    LABEL_48:
      v30 = *(_QWORD**)(v22 - 112);
      if ((_QWORD*)(v22 - 144) == v30) {
        v31 = 32;
      }
      else {
        if (v30 == nullptr) {
          goto LABEL_53;
        }
        v31 = 40;
      }
      (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
    LABEL_53:
      v22 -= 176;
      if ((*(_BYTE*)(v26 - 176) & 1) != 0) {
        v32 = *(_QWORD*)(v26 - 160);
        if (v32 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
            v33 = 128;
          }
          else {
            v33 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v24 + v33, v32);
        }
      }
    } while (v22 != v23);
  }
  a1[147] = v23;
}

__int64 HubCharacterNatives_ca9ec0(__int64 a1, __int64 a2, unsigned int a3,
                                   __int64 a4)
{
  __int64 v4;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  char v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  bool v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  bool v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  bool v60;
  unsigned __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  bool v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  bool v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  bool v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  _QWORD* v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  bool v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v105;
  unsigned __int64 v106;
  _QWORD* v107;
  _QWORD* v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v113;
  _BYTE* v114;
  float v115;
  const char* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  _DWORD* v120;
  __int128 v121;
  int v122;
  __int64 v123;
  bool v124;
  __int64 v125;
  __int64 v126;

  v4 = a1 + 208;
  GameRoutine_cb27c0(a1 + 208);
  if (v4 == a2) {
    v12 = *(_QWORD*)(a2 + 192);
    *(_QWORD*)(a1 + 392) = *(_QWORD*)(a2 + 184);
    *(_QWORD*)(a1 + 400) = v12;
  }
  else {
    v9 = *(unsigned __int8*)(a2 + 88);
    if ((*(_BYTE*)(a1 + 296) & 1) != 0) {
      v13 = (v9 & 1) == 0;
      v14 = v9 >> 1;
      if (v13) {
        v15 = a2 + 89;
      }
      else {
        v15 = *(_QWORD*)(a2 + 104);
      }
      if (v13) {
        v16 = v14;
      }
      else {
        v16 = *(_QWORD*)(a2 + 96);
      }
      SpineModel_64dde0(a1 + 296, v15, v16);
    }
    else if ((v9 & 1) != 0) {
      GameRoutine_64df20(a1 + 296, *(_QWORD*)(a2 + 104), *(_QWORD*)(a2 + 96));
    }
    else {
      v10 = *(_QWORD*)(a2 + 88);
      v11 = *(_QWORD*)(a2 + 104);
      *(_QWORD*)(a1 + 304) = *(_QWORD*)(a2 + 96);
      *(_QWORD*)(a1 + 312) = v11;
      *(_QWORD*)(a1 + 296) = v10;
    }
    v17 = *(unsigned __int8*)(a2 + 112);
    if ((*(_BYTE*)(a1 + 320) & 1) != 0) {
      v20 = (v17 & 1) == 0;
      v21 = v17 >> 1;
      if (v20) {
        v22 = a2 + 113;
      }
      else {
        v22 = *(_QWORD*)(a2 + 128);
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = *(_QWORD*)(a2 + 120);
      }
      SpineModel_64dde0(a1 + 320, v22, v23);
    }
    else if ((v17 & 1) != 0) {
      GameRoutine_64df20(a1 + 320, *(_QWORD*)(a2 + 128), *(_QWORD*)(a2 + 120));
    }
    else {
      v18 = *(_QWORD*)(a2 + 112);
      v19 = *(_QWORD*)(a2 + 128);
      *(_QWORD*)(a1 + 328) = *(_QWORD*)(a2 + 120);
      *(_QWORD*)(a1 + 336) = v19;
      *(_QWORD*)(a1 + 320) = v18;
    }
    GameRoutine_6b7aa0(a1 + 344);
    GameRoutine_6b7aa0(a1 + 368);
    v24 = *(_QWORD*)(a2 + 192);
    v25 = *(_BYTE*)(a1 + 408);
    *(_QWORD*)(a1 + 392) = *(_QWORD*)(a2 + 184);
    *(_QWORD*)(a1 + 400) = v24;
    v26 = *(unsigned __int8*)(a2 + 200);
    if ((v25 & 1) != 0) {
      v29 = (v26 & 1) == 0;
      v30 = v26 >> 1;
      if (v29) {
        v31 = a2 + 201;
      }
      else {
        v31 = *(_QWORD*)(a2 + 216);
      }
      if (v29) {
        v32 = v30;
      }
      else {
        v32 = *(_QWORD*)(a2 + 208);
      }
      SpineModel_64dde0(a1 + 408, v31, v32);
    }
    else if ((v26 & 1) != 0) {
      GameRoutine_64df20(a1 + 408, *(_QWORD*)(a2 + 216), *(_QWORD*)(a2 + 208));
    }
    else {
      v27 = *(_QWORD*)(a2 + 200);
      v28 = *(_QWORD*)(a2 + 216);
      *(_QWORD*)(a1 + 416) = *(_QWORD*)(a2 + 208);
      *(_QWORD*)(a1 + 424) = v28;
      *(_QWORD*)(a1 + 408) = v27;
    }
    GameRoutine_6b7aa0(a1 + 432);
    v33 = *(unsigned __int8*)(a2 + 248);
    if ((*(_BYTE*)(a1 + 456) & 1) != 0) {
      v36 = (v33 & 1) == 0;
      v37 = v33 >> 1;
      if (v36) {
        v38 = a2 + 249;
      }
      else {
        v38 = *(_QWORD*)(a2 + 264);
      }
      if (v36) {
        v39 = v37;
      }
      else {
        v39 = *(_QWORD*)(a2 + 256);
      }
      SpineModel_64dde0(a1 + 456, v38, v39);
    }
    else if ((v33 & 1) != 0) {
      GameRoutine_64df20(a1 + 456, *(_QWORD*)(a2 + 264), *(_QWORD*)(a2 + 256));
    }
    else {
      v34 = *(_QWORD*)(a2 + 248);
      v35 = *(_QWORD*)(a2 + 264);
      *(_QWORD*)(a1 + 464) = *(_QWORD*)(a2 + 256);
      *(_QWORD*)(a1 + 472) = v35;
      *(_QWORD*)(a1 + 456) = v34;
    }
    GameRoutine_6b7aa0(a1 + 480);
    v40 = *(unsigned __int8*)(a2 + 296);
    v41 = (_QWORD*)(a1 + 504);
    if ((*(_BYTE*)(a1 + 504) & 1) != 0) {
      v44 = (v40 & 1) == 0;
      v45 = v40 >> 1;
      if (v44) {
        v46 = a2 + 297;
      }
      else {
        v46 = *(_QWORD*)(a2 + 312);
      }
      if (v44) {
        v47 = v45;
      }
      else {
        v47 = *(_QWORD*)(a2 + 304);
      }
      SpineModel_64dde0(v41, v46, v47);
    }
    else if ((v40 & 1) != 0) {
      GameRoutine_64df20(v41, *(_QWORD*)(a2 + 312), *(_QWORD*)(a2 + 304));
    }
    else {
      v42 = *(_QWORD*)(a2 + 296);
      v43 = *(_QWORD*)(a2 + 312);
      *(_QWORD*)(a1 + 512) = *(_QWORD*)(a2 + 304);
      *(_QWORD*)(a1 + 520) = v43;
      *v41 = v42;
    }
    GameRoutine_6b7aa0(a1 + 528);
    v48 = *(unsigned __int8*)(a2 + 344);
    v49 = (_QWORD*)(a1 + 552);
    if ((*(_BYTE*)(a1 + 552) & 1) != 0) {
      v52 = (v48 & 1) == 0;
      v53 = v48 >> 1;
      if (v52) {
        v54 = a2 + 345;
      }
      else {
        v54 = *(_QWORD*)(a2 + 360);
      }
      if (v52) {
        v55 = v53;
      }
      else {
        v55 = *(_QWORD*)(a2 + 352);
      }
      SpineModel_64dde0(v49, v54, v55);
    }
    else if ((v48 & 1) != 0) {
      GameRoutine_64df20(v49, *(_QWORD*)(a2 + 360), *(_QWORD*)(a2 + 352));
    }
    else {
      v50 = *(_QWORD*)(a2 + 344);
      v51 = *(_QWORD*)(a2 + 360);
      *(_QWORD*)(a1 + 560) = *(_QWORD*)(a2 + 352);
      *(_QWORD*)(a1 + 568) = v51;
      *v49 = v50;
    }
    GameRoutine_6b7aa0(a1 + 576);
    v56 = *(unsigned __int8*)(a2 + 392);
    v57 = (_QWORD*)(a1 + 600);
    if ((*(_BYTE*)(a1 + 600) & 1) != 0) {
      v60 = (v56 & 1) == 0;
      v61 = v56 >> 1;
      if (v60) {
        v62 = a2 + 393;
      }
      else {
        v62 = *(_QWORD*)(a2 + 408);
      }
      if (v60) {
        v63 = v61;
      }
      else {
        v63 = *(_QWORD*)(a2 + 400);
      }
      SpineModel_64dde0(v57, v62, v63);
    }
    else if ((v56 & 1) != 0) {
      GameRoutine_64df20(v57, *(_QWORD*)(a2 + 408), *(_QWORD*)(a2 + 400));
    }
    else {
      v58 = *(_QWORD*)(a2 + 392);
      v59 = *(_QWORD*)(a2 + 408);
      *(_QWORD*)(a1 + 608) = *(_QWORD*)(a2 + 400);
      *(_QWORD*)(a1 + 616) = v59;
      *v57 = v58;
    }
    GameRoutine_6b7aa0(a1 + 624);
    v64 = *(unsigned __int8*)(a2 + 440);
    v65 = (_QWORD*)(a1 + 648);
    if ((*(_BYTE*)(a1 + 648) & 1) != 0) {
      v68 = (v64 & 1) == 0;
      v69 = v64 >> 1;
      if (v68) {
        v70 = a2 + 441;
      }
      else {
        v70 = *(_QWORD*)(a2 + 456);
      }
      if (v68) {
        v71 = v69;
      }
      else {
        v71 = *(_QWORD*)(a2 + 448);
      }
      SpineModel_64dde0(v65, v70, v71);
    }
    else if ((v64 & 1) != 0) {
      GameRoutine_64df20(v65, *(_QWORD*)(a2 + 456), *(_QWORD*)(a2 + 448));
    }
    else {
      v66 = *(_QWORD*)(a2 + 440);
      v67 = *(_QWORD*)(a2 + 456);
      *(_QWORD*)(a1 + 656) = *(_QWORD*)(a2 + 448);
      *(_QWORD*)(a1 + 664) = v67;
      *v65 = v66;
    }
    GameRoutine_6b7aa0(a1 + 672);
    v72 = *(unsigned __int8*)(a2 + 488);
    v73 = (_QWORD*)(a1 + 696);
    if ((*(_BYTE*)(a1 + 696) & 1) != 0) {
      v76 = (v72 & 1) == 0;
      v77 = v72 >> 1;
      if (v76) {
        v78 = a2 + 489;
      }
      else {
        v78 = *(_QWORD*)(a2 + 504);
      }
      if (v76) {
        v79 = v77;
      }
      else {
        v79 = *(_QWORD*)(a2 + 496);
      }
      SpineModel_64dde0(v73, v78, v79);
    }
    else if ((v72 & 1) != 0) {
      GameRoutine_64df20(v73, *(_QWORD*)(a2 + 504), *(_QWORD*)(a2 + 496));
    }
    else {
      v74 = *(_QWORD*)(a2 + 488);
      v75 = *(_QWORD*)(a2 + 504);
      *(_QWORD*)(a1 + 704) = *(_QWORD*)(a2 + 496);
      *(_QWORD*)(a1 + 712) = v75;
      *v73 = v74;
    }
    GameRoutine_6b7aa0(a1 + 720);
  }
  v80 = *(_QWORD*)(a2 + 536);
  *(_DWORD*)(a1 + 752) = *(_DWORD*)(a2 + 544);
  *(_QWORD*)(a1 + 744) = v80;
  v81 = *(_QWORD*)(a2 + 552);
  v82 = *(_QWORD*)(a2 + 560);
  if (v82 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 8), 1u,
                              memory_order_relaxed);
  }
  v83 = *(_QWORD*)(a1 + 768);
  *(_QWORD*)(a1 + 760) = v81;
  *(_QWORD*)(a1 + 768) = v82;
  if (v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v83 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v83 + 16LL))(v83);
    std___1___shared_weak_count___release_weak(v83);
  }
  if (v4 != a2) {
    v84 = (_QWORD*)(a1 + 776);
    v85 = *(unsigned __int8*)(a2 + 568);
    if ((*(_BYTE*)(a1 + 776) & 1) != 0) {
      v88 = (v85 & 1) == 0;
      v89 = v85 >> 1;
      if (v88) {
        v90 = a2 + 569;
      }
      else {
        v90 = *(_QWORD*)(a2 + 584);
      }
      if (v88) {
        v91 = v89;
      }
      else {
        v91 = *(_QWORD*)(a2 + 576);
      }
      SpineModel_64dde0(v84, v90, v91);
    }
    else if ((v85 & 1) != 0) {
      GameRoutine_64df20(v84, *(_QWORD*)(a2 + 584), *(_QWORD*)(a2 + 576));
    }
    else {
      v86 = *(_QWORD*)(a2 + 568);
      v87 = *(_QWORD*)(a2 + 584);
      *(_QWORD*)(a1 + 784) = *(_QWORD*)(a2 + 576);
      *(_QWORD*)(a1 + 792) = v87;
      *v84 = v86;
    }
  }
  *(_QWORD*)(a1 + 800) = *(_QWORD*)(a2 + 592);
  HandlePtr_cb2900(a1 + 808, a2 + 600);
  HandlePtr_cb2900(a1 + 880, a2 + 672);
  HandlePtr_cb2900(a1 + 952, a2 + 744);
  *(_DWORD*)(a1 + 1024) = *(_DWORD*)(a2 + 816);
  if (v4 != a2) {
    v92 = (_QWORD*)(a1 + 1032);
    v93 = *(unsigned __int8*)(a2 + 824);
    if ((*(_BYTE*)(a1 + 1032) & 1) != 0) {
      v96 = (v93 & 1) == 0;
      v97 = v93 >> 1;
      if (v96) {
        v98 = a2 + 825;
      }
      else {
        v98 = *(_QWORD*)(a2 + 840);
      }
      if (v96) {
        v99 = v97;
      }
      else {
        v99 = *(_QWORD*)(a2 + 832);
      }
      SpineModel_64dde0(v92, v98, v99);
    }
    else if ((v93 & 1) != 0) {
      GameRoutine_64df20(v92, *(_QWORD*)(a2 + 840), *(_QWORD*)(a2 + 832));
    }
    else {
      v94 = *(_QWORD*)(a2 + 824);
      v95 = *(_QWORD*)(a2 + 840);
      *(_QWORD*)(a1 + 1040) = *(_QWORD*)(a2 + 832);
      *(_QWORD*)(a1 + 1048) = v95;
      *v92 = v94;
    }
  }
  v100 = *(_QWORD*)(a1 + 312);
  *(_DWORD*)(a1 + 1124) = a4;
  *(_BYTE*)(a1 + 1128) = BYTE4(a4);
  if ((*(_BYTE*)(a1 + 296) & 1) != 0) {
    v101 = v100;
  }
  else {
    v101 = a1 + 297;
  }
  v102 = game_HashString(v101);
  if (v102 == 0) {
    goto LABEL_159;
  }
  v103 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v103 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_159;
  }
  v105 = v103 - 1;
  if ((v103 & (v103 - 1)) != 0) {
    v106 = v102;
    if (v102 >= v103) {
      v106 = v102 % v103;
    }
  }
  else {
    v106 = v105 & v102;
  }
  v107 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v106);
  if (v107 == nullptr || (v108 = (_QWORD*)*v107) == nullptr) {
  LABEL_159:
    LODWORD(v110) = 0;
    return (unsigned int)v110;
  }
  if ((v103 & v105) == 0) {
    while (1) {
      v111 = v108[1];
      if (v111 == v102) {
        if (v108[2] == v102) {
          goto LABEL_161;
        }
      }
      else if ((v111 & v105) != v106) {
        goto LABEL_159;
      }
      v108 = (_QWORD*)*v108;
      LODWORD(v110) = 0;
      if (v108 == nullptr) {
        return (unsigned int)v110;
      }
    }
  }
  while (1) {
    v109 = v108[1];
    if (v109 == v102) {
      break;
    }
    if (v109 >= v103) {
      v109 %= v103;
    }
    if (v109 != v106) {
      goto LABEL_159;
    }
  LABEL_149:
    v108 = (_QWORD*)*v108;
    if (v108 == nullptr) {
      goto LABEL_159;
    }
  }
  if (v108[2] != v102) {
    goto LABEL_149;
  }

LABEL_161:
  v110 = v108[3];
  if (v110 != 0) {
    *(_QWORD*)(a1 + 16) = v110;
    if ((a3 & 0xFFFFFFFE) == 2) {
      *(_BYTE*)(a1 + 1116) = 1;
    }
    GameRoutine_caa7c0(a1);
    HubCharacterNatives_caac60_alt1(a1);
    *(_QWORD*)(a1 + 1312) = 0;
    *(_QWORD*)(a1 + 1304) = 0;
    *(_DWORD*)(a1 + 1320) = 1065353216;
    v113 = *(_QWORD*)(a1 + 16);
    if (v113 == 0 || (v114 = *(_BYTE**)(v113 + 40)) == nullptr ||
        (v115 = 1.0, *v114 == 0)) {
      v115 = 0.5;
    }
    *(float*)(a1 + 1320) = v115;
    v116 = *(const char**)(v113 + 32);
    if (v116 != nullptr && *(_QWORD*)(v113 + 648) != 0) {
      v117 = game_util_Format("%s_%s", v116, *(const char**)(v113 + 640));
      v118 = game_HashString(v117);
      goto LABEL_173;
    }
    v119 = *(_QWORD*)(a1 + 24);
    if ((*(_DWORD*)(v119 + 336) & 1) != 0) {
      v118 = *(_QWORD*)(v119 + 328);
    LABEL_173:
      *(_QWORD*)(a1 + 1304) = v118;
      *(_BYTE*)(a1 + 1312) = 1;
    }
    GameRoutine_caaee0(a1, a3, 1);
    HubCharacterNatives_cab4e0(a1);
    v120 = *(_DWORD**)(*(_QWORD*)(a1 + 24) + 16LL);
    *(_DWORD*)(a1 + 1280) = v120[140];
    *(_DWORD*)(a1 + 1284) = v120[141];
    v121 = *(_OWORD*)(a1 + 1280);
    *((_QWORD*)&v121 + 1) = (unsigned int)v120[142];
    *(_OWORD*)(a1 + 1280) = v121;
    v122 = GameRoutine_f71d40(*GameData_212ebb0[0], v120 + 140,
                              GameData_21f3d10 + 64);
    *(_DWORD*)(a1 + 1296) = v122;
    HubCharacterNatives_ceca80(
        *(_QWORD*)(a1 + 24), 0x10000000000000LL,
        v122 != *(_DWORD*)(*(_QWORD*)GameData_212dbc0[0] + 88LL));
    HubCharacterNatives_cb12a0(a1, a1 + 552, a1 + 576);
    HubCharacterNatives_cb12a0(a1, a1 + 600, a1 + 624);
    HubCharacterNatives_cb12a0(a1, a1 + 648, a1 + 672);
    GameRoutine_cab670(a1);
    GameRoutine_cab8c0(a1);
    HubCharacterNatives_cac2c0(a1, 0);
    v123 = *(_QWORD*)(GameData_21ec7c0 + 120);
    if ((*(_BYTE*)(v123 + 12) & 1) == 0) {
      *(_BYTE*)(v123 + 12) = 1;
    }
    if (*(_QWORD*)(a1 + 760) != 0) {
      v124 = false;
    }
    else {
      v125 = *(_QWORD*)(a1 + 112);
      v124 = v125 == 0 || *(_QWORD*)(v125 + 8) == -1;
      if (*(_DWORD*)(a1 + 1112) != 0) {
        v124 = false;
      }
    }
    HubCharacterNatives_ceca80(
        *(_QWORD*)(a1 + 24), 32,
        v124 | (unsigned int)((*(_DWORD*)(a1 + 184) & 0x400000) != 0));
    HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL),
                               (*(_DWORD*)(a1 + 184) & 0x400020) == 0);
    v126 = *(_QWORD*)(GameData_21ec7c0 + 120);
    LODWORD(v110) = 1;
    if ((*(_BYTE*)(v126 + 12) & 1) == 0) {
      *(_BYTE*)(v126 + 12) = 1;
    }
  }
  return (unsigned int)v110;
}

void HubCharacterNatives_caac60(__int64 a1)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  const char* v13;
  const char* v15;
  unsigned __int64 v16;
  struct {
    _BYTE v17[4];
    int v18;
  } v17_;
  struct {
    _QWORD v19[13];
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
    char gap224_[8];
    __int64 v31;
    char gap240_[8];
    __int64 v32;
    char gap256_[96];
    __int64 v33;
    __int64 v34;
    char gap368_[8];
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    int v40;
    char gap420_[4];
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } v19_;

  v19_.v31 = 0;
  v19_.v32 = 0;
  memset(v19_.v19, 0, sizeof(v19_.v19));
  v19_.v40 = 1065353216;
  v2 = (int*)GameData_21d9d18;
  v3 = GameData_21d9d20;
  v19_.v20 = 0;
  v19_.v21 = 0;
  v19_.v22 = 0;
  v19_.v23 = 0;
  v19_.v24 = 0;
  v19_.v25 = 0;
  v19_.v26 = 0;
  v19_.v27 = 0;
  v19_.v28 = 0;
  v19_.v29 = 0;
  v19_.v30 = 0;
  v19_.v33 = 0;
  v19_.v34 = 0;
  v19_.v35 = 0;
  v19_.v36 = 0;
  v19_.v37 = 0;
  v19_.v38 = 0;
  v19_.v39 = 0;
  v19_.v41 = 0;
  v19_.v42 = 0;
  v19_.v43 = 0;
  v19_.v44 = 0;
  v19_.v45 = 0;
  v19_.v46 = 0;
  v19_.v47 = 0;
  v19_.v48 = 0;
  v19_.v49 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v4 = *v2++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v4) = 0;
    } while (v2 != (int*)v3);
    v2 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v2;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d50 = GameData_21d9d48;
  GameData_21d9d78 = 8;
  Character_cb0480(a1, (__int64)v19_.v19);
  v6 = v19_.v20;
  v5 = v19_.v21;
  *(_DWORD*)(a1 + 1220) = 0;
  v7 = v5 - v6;
  if ((int)(v7 >> 3) >= 1) {
    v8 = ((v7 >> 3) & 0x7FFFFFFF) - 1;
    while (1) {
      v11 = v19_.v20;
      v12 = *(_DWORD*)(a1 + 1220);
      if (v12 != 0) {
        if (*(_DWORD*)(a1 + 1224) != 0) {
          goto LABEL_8;
        }
        goto LABEL_18;
      }
      v13 = *(const char**)(v19_.v20 + 8 * v8);
      if (strstr_alt1(v13, "AE_998") != 0) {
        v12 = 1;
        goto LABEL_17;
      }
      if (strstr_alt1(v13, "AB_265TK") != 0 ||
          strstr_alt1(v13, "AE_265K") != 0) {
        break;
      }
      if (strstr_alt1(v13, "AE_997M") != 0 ||
          strstr_alt1(v13, "AE_997F") != 0) {
        v12 = 3;
      LABEL_17:
        *(_DWORD*)(a1 + 1220) = v12;
        if (*(_DWORD*)(a1 + 1224) != 0) {
          goto LABEL_8;
        }
        goto LABEL_18;
      }
      v12 = 0;
      if (*(_DWORD*)(a1 + 1224) == 0) {
      LABEL_18:
        if (v12 == 3 || v12 == 0) {
          v15 = *(const char**)(v11 + 8 * v8);
          v16 = strlen_alt1(v15);
          game_character_10778e0((__int64)v17_.v17, (__int64)v15, v16);
          if (v17_.v18 != 0) {
            if (v17_.v18 != 1) {
              goto LABEL_8;
            }
            v9 = 2;
          }
          else {
            v9 = 1;
          }
          *(_DWORD*)(a1 + 1224) = v9;
        }
      }
    LABEL_8:
      v10 = v8-- + 1;
      if (v10 <= 1) {
        goto LABEL_31;
      }
    }
    v12 = 2;
    goto LABEL_17;
  }
LABEL_31:
  TrickEntity_7d1480((__int64)v19_.v19);
}

__int64 HubCharacterNatives_cab4e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;

  v1 = *(_QWORD*)(result + 16);
  if ((*(_BYTE*)(v1 + 49) & 1) != 0) {
    v2 = result;
    if ((*(_BYTE*)(result + 1027) & 1) != 0) {
    LABEL_3:
      v3 = nullptr;
    }
    else {
      v3 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v3 != nullptr) {
        v4 = 250;
        while (1) {
          v5 = v3[55];
          if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 && v3[49] == v1) {
            goto LABEL_27;
          }
          v6 = v3[333];
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v3[327] == v1) {
            v3 += 278;
            goto LABEL_27;
          }
          v7 = v3[611];
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v3[605] == v1) {
            break;
          }
          v8 = v3[889];
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v3[883] == v1) {
            v10 = 6672;
            goto LABEL_26;
          }
          v9 = v3[1167];
          if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v3[1161] == v1) {
            v10 = 8896;
          LABEL_26:
            v3 = (_QWORD*)((char*)v3 + v10);
            goto LABEL_27;
          }
          v3 += 1390;
          v4 -= 5;
          if (v4 == 0) {
            goto LABEL_3;
          }
        }
        v10 = 4448;
        goto LABEL_26;
      }
    }
  LABEL_27:
    v11 = (GameRoutine_db2dc0(v3) & 1) == 0;
    v12 = *(_QWORD*)(v2 + 16);
    if (v11) {
      v13 = 0;
    }
    else {
      v13 = 2;
    }
    *(_DWORD*)(v2 + 1248) = *(_DWORD*)(v2 + 1248) & 0xFFFFFFFD | v13;
    v11 = (GameRoutine_e94ce0(v12) & 1) == 0;
    v14 = *(_QWORD*)(v2 + 16);
    if (v11) {
      v15 = 0;
    }
    else {
      v15 = 4;
    }
    *(_DWORD*)(v2 + 1248) = *(_DWORD*)(v2 + 1248) & 0xFFFFFFFB | v15;
    result = GameRoutine_db3060(v14);
    if ((result & 1) != 0) {
      v16 = 8;
    }
    else {
      v16 = 0;
    }
    *(_DWORD*)(v2 + 1248) = *(_DWORD*)(v2 + 1248) & 0xFFFFFFF7 | v16;
  }
  return result;
}

__int64 HubCharacterNatives_cabfc0(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v5[2];
  _QWORD v6[2];

  v2 = result;
  if ((a2 & 1) != 0 || *(_BYTE*)(result + 1329) != 0) {
    if ((*(_BYTE*)(result + 186) & 0x10) == 0) {
      v3 = *(_QWORD*)(result + 112);
      v6[0] = *(_QWORD*)(result + 104);
      v6[1] = v3;
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
        GameRoutine_caeae0(result, v6, 0);
        std___1___shared_weak_count___release_weak(v3);
      }
      else {
        GameRoutine_caeae0(result, v6, 0);
      }
    }
    v4 = *(_QWORD*)(v2 + 128);
    v5[0] = *(_QWORD*)(v2 + 120);
    v5[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_caeae0(v2, v5, 1);
      result = std___1___shared_weak_count___release_weak(v4);
    }
    else {
      result = GameRoutine_caeae0(v2, v5, 1);
    }
    *(_BYTE*)(v2 + 1329) = 0;
  }
  return result;
}

__int64 HubCharacterNatives_cac250(__int64 a1)
{
  int v1;
  int v3;
  _BOOL8 v5;

  v1 = *(_DWORD*)(a1 + 1208);
  v3 = v1 + 1;
  *(_DWORD*)(a1 + 1208) = v1 + 1;
  if (v1 == 0) {
    (**(void (***)(__int64))(a1 + 1200))(a1 + 1200);
    v3 = *(_DWORD*)(a1 + 1208);
  }
  v5 = v3 > 0 || *(_DWORD*)(a1 + 1216) == 1;
  return HubCharacterNatives_ceca80(*(_QWORD*)(a1 + 24), 256, v5);
}

__int64 HubCharacterNatives_cada30(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
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

  v1 = *(_QWORD*)(result + 200);
  if (v1 != 0 && *(_QWORD*)(v1 + 8) != -1 && *(_QWORD*)(result + 112) != 0) {
    v2 = (_QWORD*)result;
    result = std___1___shared_weak_count_lock(*(_QWORD*)(result + 112));
    if (result != 0) {
      v3 = v2[13];
      v4 = result;
      if (v3 != 0) {
        v5 = std___1___shared_weak_count_lock(v2[25]);
        v6 = v2[24];
        v7 = v5;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        v8 = *(_QWORD*)(v6 + 24);
        *(_QWORD*)(v6 + 16) = v3;
        *(_QWORD*)(v6 + 24) = v4;
        if (v8 != 0) {
          std___1___shared_weak_count___release_weak(v8);
        }
        result = std___1___shared_weak_count___release_weak(v4);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak(v7);
        }
        if ((*(_BYTE*)(v3 + 1764) & 1) == 0) {
          *(_BYTE*)(v3 + 1764) = 1;
          v9 = *(_QWORD*)(v3 + 1560);
          if (v9 != 0 && *(_QWORD*)(v9 + 8) != -1) {
            v10 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
            v11 = *(_QWORD*)(v3 + 1552);
            v12 = v9;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                      memory_order_relaxed);
            GameRoutine_d80dc0(v10, &v11);
            if (v12 != 0) {
              std___1___shared_weak_count___release_weak(v12);
            }
            result = *(_QWORD*)(v3 + 1560);
            *(_QWORD*)(v3 + 1552) = 0;
            *(_QWORD*)(v3 + 1560) = 0;
            if (result != 0) {
              result = std___1___shared_weak_count___release_weak(result);
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 HubCharacterNatives_cadba0(__int64 a1)
{
  __int64 v1;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int128 v10;

  v1 = *(_QWORD*)(a1 + 200);
  if (v1 == 0 || *(_QWORD*)(v1 + 8) == -1) {
    GameRoutine_d80c00((void*)&v10, *(_QWORD*)(GameData_220b6e0 + 8));
    v4 = *((_QWORD*)&v10 + 1);
    v5 = *(_QWORD*)(a1 + 200);
    *(_OWORD*)(a1 + 192) = v10;
    if (v5 != 0) {
      std___1___shared_weak_count___release_weak(v5);
      v4 = *(_QWORD*)(a1 + 200);
    }
    if (v4 != 0 && (v6 = std___1___shared_weak_count_lock(v4)) != 0) {
      *(_QWORD*)(*(_QWORD*)(a1 + 192) + 32LL) = a1;
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v6;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
    else {
      *(_QWORD*)GameRoutine_20 = a1;
    }
    HubCharacterNatives_cada30(a1);
    GameRoutine_cac090((_QWORD*)a1);
    v8 = *(_QWORD*)(a1 + 24);
    v3 = 1;
    *(_BYTE*)(v8 + 372) = 1;
    *(_DWORD*)(v8 + 368) = 5;
    HubCharacterNatives_cea6b0(v8);
  }
  else {
    return 0;
  }
  return v3;
}

__int64 HubCharacterNatives_cadf50(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;

  v2 = *(_DWORD*)(a1 + 1160);
  *(_DWORD*)(a1 + 1160) = 1;
  v3 = *(_QWORD*)(a1 + 112);
  if (v3 == 0) {
    goto LABEL_6;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_6;
  }
  v5 = v4;
  v6 = *(_QWORD*)(a1 + 104);
  if (v6 != 0) {
    HubCharacterNatives_d5ab80(v6, v2, *(unsigned int*)(a1 + 1160));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    result = *(_QWORD*)(a1 + 200);
    if (result == 0) {
      return result;
    }
  }
  else {
  LABEL_6:
    result = *(_QWORD*)(a1 + 200);
    if (result == 0) {
      return result;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v8 = *(_QWORD*)(a1 + 192);
    if (v8 != 0) {
      *(_BYTE*)(v8 + 217) = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v9 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      return std___1___shared_weak_count___release_weak(v9);
    }
  }
  return result;
}

__int64 HubCharacterNatives_caea10(__int64 result, int a2, char a3)
{
  int v3;
  int v4;
  __int64 v5;
  bool v6;
  __int64 v7;

  v3 = *(_DWORD*)(result + 184);
  v4 = v3 & ~a2;
  if ((a3 & 1) != 0) {
    v4 = v3 | a2;
  }
  *(_DWORD*)(result + 184) = v4;
  if (v4 != v3) {
    v5 = result;
    HubCharacterNatives_ceca80(*(_QWORD*)(result + 24), 512, (v4 & 0x40) != 0);
    if (*(_QWORD*)(v5 + 760) != 0) {
      v6 = false;
    }
    else {
      v7 = *(_QWORD*)(v5 + 112);
      v6 = v7 == 0 || *(_QWORD*)(v7 + 8) == -1;
      if (*(_DWORD*)(v5 + 1112) != 0) {
        v6 = false;
      }
    }
    HubCharacterNatives_ceca80(
        *(_QWORD*)(v5 + 24), 32,
        v6 | (unsigned int)((*(_DWORD*)(v5 + 184) & 0x400000) != 0));
    return HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(v5 + 24) + 8LL),
                                      (*(_DWORD*)(v5 + 184) & 0x400020) == 0);
  }
  return result;
}

__int64 HubCharacterNatives_cb02e0(__int64 a1, _QWORD* a2)
{
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  _DWORD* v17;
  __int64 v18;
  _BYTE* v19;
  char* v20;
  __int64 v21;

  v3 = (_QWORD*)(a1 + 32);
  if (v3 != a2) {
    v4 = *(unsigned __int8*)a2;
    if ((*(_BYTE*)v3 & 1) == 0) {
      if ((v4 & 1) != 0) {
        GameRoutine_64df20(v3, a2[2], a2[1]);
        result = *(_QWORD*)(a1 + 200);
        if (result == 0) {
          return result;
        }
      }
      else {
        v5 = *a2;
        v6 = a2[2];
        v3[1] = a2[1];
        v3[2] = v6;
        *v3 = v5;
        result = *(_QWORD*)(a1 + 200);
        if (result == 0) {
          return result;
        }
      }
      goto LABEL_14;
    }
    v8 = a2[1];
    v9 = (v4 & 1) == 0;
    v10 = v4 >> 1;
    if (v9) {
      v11 = (char*)a2 + 1;
    }
    else {
      v11 = (char*)a2[2];
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = v8;
    }
    SpineModel_64dde0(v3, v11, v12);
  }
  result = *(_QWORD*)(a1 + 200);
  if (result == 0) {
    return result;
  }

LABEL_14:
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    return result;
  }
  v13 = *(_QWORD*)(a1 + 192);
  v14 = result;
  if (v13 != 0) {
    v15 = *(_QWORD*)(a1 + 40);
    if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
      v15 = *(_BYTE*)(a1 + 32) >> 1;
    }
    if (v15 != 0) {
      if (v15 == 4) {
        v16 = *(char**)(a1 + 48);
        v17 = (_DWORD*)(a1 + 33);
        if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
          v17 = *(_DWORD**)(a1 + 48);
        }
        if (*v17 == 1819047278) {
          goto LABEL_30;
        }
      }
      else {
        v16 = *(char**)(a1 + 48);
      }
      if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
        v20 = v16;
      }
      else {
        v20 = (char*)(a1 + 33);
      }
      goto LABEL_35;
    }
    v18 = *(_QWORD*)(a1 + 16);
    if (v18 != 0) {
      v19 = *(_BYTE**)(v18 + 32);
      if (v19 != nullptr && *v19 != 0) {
        v20 = (char*)GameRoutine_67ee90();
      LABEL_35:
        v21 = strlen(v20);
        result = GameRoutine_60a060(v13 + 232, v20, v21);
        goto LABEL_36;
      }
    }
  LABEL_30:
    v20 = &GameData_1a9f09e;
    goto LABEL_35;
  }

LABEL_36:
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak(v14);
  }
  return result;
}

_QWORD* HubCharacterNatives_cb4210(_QWORD* a1, __int64* a2)
{
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;

  if ((*(_BYTE*)a2 & 1) == 0) {
    a1[1] = a2[1];
    v4 = *a2;
    a1[2] = a2[2];
    *a1 = v4;
    v5 = (__int64*)a2[8];
    if (v5 != nullptr) {
      goto LABEL_3;
    }
  LABEL_7:
    a1[8] = 0;
    v6 = (__int64*)a2[14];
    if (v6 == nullptr) {
      goto LABEL_12;
    }
    goto LABEL_8;
  }
  fw_text_String_CopyTerminated(a1, a2[2], a2[1]);
  v5 = (__int64*)a2[8];
  if (v5 == nullptr) {
    goto LABEL_7;
  }

LABEL_3:
  if (v5 == a2 + 4) {
    a1[8] = a1 + 4;
    (*(void (**)(__int64))(*(_QWORD*)a2[8] + 24LL))(a2[8]);
    v6 = (__int64*)a2[14];
    if (v6 == nullptr) {
      goto LABEL_12;
    }
  }
  else {
    a1[8] = (*(__int64 (**)(__int64*))(*v5 + 16))(v5);
    v6 = (__int64*)a2[14];
    if (v6 == nullptr) {
    LABEL_12:
      a1[14] = 0;
      v7 = (__int64*)a2[20];
      if (v7 != nullptr) {
        goto LABEL_13;
      }
    LABEL_16:
      a1[20] = 0;
      return a1;
    }
  }

LABEL_8:
  if (v6 != a2 + 10) {
    a1[14] = (*(__int64 (**)(__int64*))(*v6 + 16))(v6);
    v7 = (__int64*)a2[20];
    if (v7 != nullptr) {
      goto LABEL_13;
    }
    goto LABEL_16;
  }
  a1[14] = a1 + 10;
  (*(void (**)(__int64))(*(_QWORD*)a2[14] + 24LL))(a2[14]);
  v7 = (__int64*)a2[20];
  if (v7 == nullptr) {
    goto LABEL_16;
  }

LABEL_13:
  if (v7 == a2 + 16) {
    a1[20] = a1 + 16;
    (*(void (**)(__int64))(*(_QWORD*)a2[20] + 24LL))(a2[20]);
  }
  else {
    a1[20] = (*(__int64 (**)(__int64*))(*v7 + 16))(v7);
  }
  return a1;
}

_QWORD* HubCharacterNatives_cb4360(_QWORD* result, long double a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = result[1];
  v3 = result[2];
  v4 = result;
  v5 = fw_memory_g_heap_manager_ptr;
  while (v2 != v3) {
    v4[2] = v3 - 176;
    v6 = *(_QWORD**)(v3 - 16);
    if (v6 == (_QWORD*)(v3 - 48)) {
      v7 = 32;
    }
    else {
      if (v6 == nullptr) {
        goto LABEL_9;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
  LABEL_9:
    v8 = *(_QWORD**)(v3 - 64);
    if (v8 == (_QWORD*)(v3 - 96)) {
      v9 = 32;
    }
    else {
      if (v8 == nullptr) {
        goto LABEL_14;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
  LABEL_14:
    result = *(_QWORD**)(v3 - 112);
    if (result == (_QWORD*)(v3 - 144)) {
      v10 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_19;
      }
      v10 = 40;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
  LABEL_19:
    if ((*(_BYTE*)(v3 - 176) & 1) != 0 && *(_QWORD*)(v3 - 160) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v11, a2);
    }
    v3 = v4[2];
  }
  if (*v4 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v12 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v12, a2);
  }
  return result;
}

__int64 HubCharacterNatives_cb5b60(__int64 a1)
{
  __int64 v1;
  int v2;
  bool v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_DWORD*)(v1 + 184);
  *(_DWORD*)(v1 + 184) = v2 & 0xFFDFFFFF;
  if ((v2 & 0xFFDFFFFF) != v2) {
    HubCharacterNatives_ceca80(*(_QWORD*)(v1 + 24), 512, (v2 & 0x40) != 0);
    if (*(_QWORD*)(v1 + 760) != 0) {
      v3 = false;
    }
    else {
      v4 = *(_QWORD*)(v1 + 112);
      v3 = v4 == 0 || *(_QWORD*)(v4 + 8) == -1;
      if (*(_DWORD*)(v1 + 1112) != 0) {
        v3 = false;
      }
    }
    HubCharacterNatives_ceca80(
        *(_QWORD*)(v1 + 24), 32,
        v3 | (unsigned int)((*(_DWORD*)(v1 + 184) & 0x400000) != 0));
    HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(v1 + 24) + 8LL),
                               (*(_DWORD*)(v1 + 184) & 0x400020) == 0);
  }
  return GameRoutine_fb7480(*(_QWORD*)(*GameData_212d458[0] + 104), v1);
}

__int64 HubCharacterNatives_cba040(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *a2;
      v6 = result;
      if (*a2 != 0) {
        v7 = *(__int64**)(a1 + 136);
        v8 = *(__int64**)(a1 + 144);
        result = a1 + 136;
        if (v7 != v8) {
          do {
            v9 = v7[1];
            if (v9 != 0) {
              v10 = *v7;
              v11 = v7[1];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                        memory_order_relaxed);
              v12 = std___1___shared_weak_count_lock(v11);
              if (v12 != 0) {
                if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v13 = v12;
                  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                  std___1___shared_weak_count___release_weak(v13);
                }
                std___1___shared_weak_count___release_weak(v9);
                if (v5 == v10) {
                  goto LABEL_14;
                }
              }
              else {
                std___1___shared_weak_count___release_weak(v9);
              }
            }
            v7 += 2;
          } while (v7 != v8);
          v7 = v8;
        LABEL_14:
          v8 = *(__int64**)(a1 + 144);
          result = a1 + 136;
        }
        if (v7 == v8) {
          v14 = v5;
          v15 = v6;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_cb8a30(result, &v14);
          result = v15;
          if (v15 != 0) {
            result = std___1___shared_weak_count___release_weak(v15);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return result;
}

__int64 HubCharacterNatives_cba1a0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *a2;
      v6 = result;
      if (*a2 == 0) {
        goto LABEL_27;
      }
      v7 = *(__int64**)(a1 + 136);
      v8 = *(__int64**)(a1 + 144);
      if (v7 != v8) {
        do {
          v9 = v7[1];
          if (v9 != 0) {
            v10 = *v7;
            v11 = v7[1];
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                      memory_order_relaxed);
            v12 = std___1___shared_weak_count_lock(v11);
            if (v12 != 0) {
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v13 = v12;
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                std___1___shared_weak_count___release_weak(v13);
              }
              result = std___1___shared_weak_count___release_weak(v9);
              if (v5 == v10) {
                goto LABEL_14;
              }
            }
            else {
              result = std___1___shared_weak_count___release_weak(v9);
            }
          }
          v7 += 2;
        } while (v7 != v8);
        v7 = v8;
      LABEL_14:
        v8 = *(__int64**)(a1 + 144);
      }
      if (v7 == v8) {
        goto LABEL_27;
      }
      v14 = v7[1];
      v19[0] = *v7;
      v19[1] = v14;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
        HubCharacterNatives_cba3a0(result, v19);
        result = std___1___shared_weak_count___release_weak(v14);
      }
      else {
        result = HubCharacterNatives_cba3a0(result, v19);
      }
      v15 = *(__int64**)(a1 + 144);
      v16 = v7 + 2;
      if (v7 + 2 == v15) {
        if (v7 == v15) {
        LABEL_26:
          *(_QWORD*)(a1 + 144) = v7;
        LABEL_27:
          if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
            return std___1___shared_weak_count___release_weak(v6);
          }
          return result;
        }
      }
      else {
        do {
          v18 = *v16;
          v17 = v16[1];
          result = *(v16 - 1);
          *v16 = 0;
          v16[1] = 0;
          *(v16 - 2) = v18;
          *(v16 - 1) = v17;
          if (result != 0) {
            result = std___1___shared_weak_count___release_weak(result);
          }
          v16 += 2;
        } while (v16 != v15);
        v15 = *(__int64**)(a1 + 144);
        v7 = v16 - 2;
        if (v16 - 2 == v15) {
          goto LABEL_26;
        }
      }
      do {
        result = *(v15 - 1);
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        v15 -= 2;
      } while (v15 != v7);
      goto LABEL_26;
    }
  }
  return result;
}

__int64 HubCharacterNatives_ccee40(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  const char* v10;
  __int64* v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  bool v21;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v7 = GameData_2232008;
  if (GameData_2232008 == 0) {
    if (GameData_220b6d0 == 0) {
      return 0;
    }
    v7 = *(_QWORD*)(GameData_220b6d0 + 8);
    if (v7 == 0) {
      return 0;
    }
  }
  v8 = *(_QWORD**)(v7 + 24);
  v9 = (_QWORD*)(v7 + 32);
  if (v8 == (_QWORD*)(v7 + 32)) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v10 = *(const char**)(a1 + 16);
  }
  else {
    v10 = (const char*)(a1 + 1);
  }
  while (1) {
    v11 = (__int64*)v8[7];
    v12 = (__int64*)v8[8];
    if (v11 != v12) {
      break;
    }
  LABEL_27:
    v19 = (_QWORD*)v8[1];
    if (v19 != nullptr) {
      do {
        v20 = v19;
        v19 = (_QWORD*)*v19;
      } while (v19 != nullptr);
    }
    else {
      do {
        v20 = (_QWORD*)v8[2];
        v21 = v8 == (_QWORD*)*v20;
        v8 = v20;
      } while (!v21);
    }
    v8 = v20;
    if (v20 == v9) {
      return 0;
    }
  }
  v13 = strlen_alt1(v10);
  while (1) {
    v14 = *v11;
    v15 = *(_BYTE*)(*v11 + 112) >> 1;
    if ((*(_BYTE*)(*v11 + 112) & 1) != 0) {
      v15 = *(_QWORD*)(*v11 + 120);
    }
    if (v13 == v15) {
      if (v13 == -1) {
        fs_60a230();
      }
      v16 = *(_QWORD*)(v14 + 128);
      v17 = v14 + 113;
      v18 = (*(_BYTE*)(*v11 + 112) & 1) != 0 ? v16 : v17;
      if (memcmp_alt1(v18, (__int64)v10, v13) == 0) {
        return 1;
      }
    }
    v11 += 6;
    if (v11 == v12) {
      goto LABEL_27;
    }
  }
}

__attribute__((swiftcall)) void

hub_character_GetFollowInitPosition(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float32x4_t result;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v10 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v10 == (_QWORD*)(v8 + 2208)) {
    v11 = 32;
    goto LABEL_8;
  }
  if (v10 != nullptr) {
    v11 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v10 + v11))((__int64)v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v12 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v12 == 0x4000 ||
      (v13 = util_g_handle_slots_ptr[0],
       v14 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                       16 * v12),
       (v15 = v14[1]) == 0) ||
      *v14 != *(_QWORD*)(a1 + 8)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v37 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v37;
      __cxa_guard_release(&GameData_21a6130),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *a3 = COERCE_AS(float32x4_t, GameData_21a6120);
    {
      result;
      return;
    }
  }
  v16 = *(unsigned int*)(a2 + 16);
  if ((_DWORD)v16 == 0x4000 ||
      (v17 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a2 + 20)] +
                       16 * v16))[1] == 0 ||
      *v17 != *(_QWORD*)(a2 + 8)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v38 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v38;
      __cxa_guard_release(&GameData_21a6130),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *a3 = COERCE_AS(float32x4_t, GameData_21a6120);
    {
      result;
      return;
    }
  }
  v18 = *(__int64**)(*GameData_212d458[0] + 24);
  v19 = *(__int64**)(*GameData_212d458[0] + 32);
  if (v18 == v19) {
    v21 = 0;
    v20 = 0;
  LABEL_29:
    v22 = *(_QWORD*)(v13[*(unsigned int*)(a2 + 20)] + 16LL * (unsigned int)v16 +
                     8);
    goto LABEL_30;
  }
  while (1) {
    v20 = *v18;
    if (*v18 == v15) {
      break;
    }
    v18 += 2;
    if (v18 == v19) {
      v20 = 0;
      v21 = 0;
      goto LABEL_27;
    }
  }
  v21 = v18[1];
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
    LODWORD(v16) = *(_DWORD*)(a2 + 16);
  }
LABEL_27:
  if ((_DWORD)v16 != 0x4000) {
    goto LABEL_29;
  }
  v22 = 0;
LABEL_30:
  v39_.v39 = v20;
  v39_.v40 = v21;
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_cb2080(v22, &v39_.v39),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v39_.v40 != 0) {
    std___1___shared_weak_count___release_weak(v39_.v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v21 != 0) {
    std___1___shared_weak_count___release_weak(v21),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v23 = *(unsigned int*)(a2 + 16);
  if ((_DWORD)v23 == 0x4000 ||
      (v24 = (_QWORD*)(v13[*(unsigned int*)(a2 + 20)] + 16 * v23))[1] == 0) {
    v25 = 0;
  }
  else if (*v24 == *(_QWORD*)(a2 + 8)) {
    v25 = v24[1];
  }
  else {
    v25 = 0;
  }
  v26 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v26 == 0x4000 ||
      (v27 = (_QWORD*)(v13[*(unsigned int*)(a1 + 20)] + 16 * v26),
       (v28 = v27[1]) == 0) ||
      *v27 != *(_QWORD*)(a1 + 8) ||
      (v29 = *(_QWORD*)(v25 + 1136), *(_QWORD*)(v25 + 1144) == v29)) {
  LABEL_53:
    LODWORD(v31) = 0;
  }
  else {
    v30 = 0;
    v31 = 0;
    while (1) {
      v32 = (__int64*)(v29 + v30);
      v33 = *(_QWORD*)(v29 + v30 + 8);
      if (v33 != 0) {
        v34 = std___1___shared_weak_count_lock(v33),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v34 != 0) {
          v35 = *v32;
          if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v36 = v34;
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v36),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          if (v35 == v28) {
            break;
          }
        }
      }
      v29 = *(_QWORD*)(v25 + 1136);
      ++v31;
      v30 += 16;
      if (v31 >= (*(_QWORD*)(v25 + 1144) - v29) >> 4) {
        goto LABEL_53;
      }
    }
  }
  {
    X8CALL_V0(float32x4_t,
              Character_cb1ec0((void*)(a3),
                               *(_QWORD*)(v13[*(unsigned int*)(a2 + 20)] +
                                          16LL * *(unsigned int*)(a2 + 16) + 8),
                               v31)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    return;
  }
}

void HubCharacterNatives_cd1120(__int64 a1, __int64 a2, int a3, float a4)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  double v15;
  unsigned int v16;
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64* v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v36;
    __int64 v37;
    unsigned __int64 v38;
    char gap32_[12];
    int v39;
  } v36_;

  v8 = *as_g_script_manager_ptr;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v9 != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  }
  else {
    v10 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v10 + 24) + 448LL))(
      *(_QWORD*)(v10 + 24), 1);
  v11 = *(_QWORD**)(v10 + 2240);
  *(_QWORD*)(v10 + 2240) = 0;
  if (v11 == (_QWORD*)(v10 + 2208)) {
    v12 = 32;
    goto LABEL_8;
  }
  if (v11 != nullptr) {
    v12 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
  }
  v13 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v13 != 0x4000) {
    v14 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v13);
    if (v14[1] != 0 && *v14 == *(_QWORD*)(a1 + 8)) {
      v36_.v39 = a3;
      if ((unsigned int)CScriptArray_GetSize_alt1(a2) != 0) {
        v16 = 0;
        v17 = 0;
        v18 = nullptr;
        v19 = 0;
        do {
          v20 = (__int64*)CScriptArray_At_1971f0_alt1(a2, v16);
          v21 = v20;
          if ((unsigned __int64)v18 < v19) {
            v18[1] = v20[1];
            *v18 = *v20;
            v18 += 2;
          }
          else {
            v22 = (char*)v18 - v17;
            v23 = ((__int64)v18 - v17) >> 4;
            v24 = v23 + 1;
            if ((unsigned __int64)(v23 + 1) >> 60 != 0) {
              GameRoutine_cdcc10_alt1();
            }
            if ((__int64)(v19 - v17) >> 3 > v24) {
              v24 = (__int64)(v19 - v17) >> 3;
            }
            if (v19 - v17 >= 0x7FFFFFFFFFFFFFF0LL) {
              v25 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v25 = v24;
            }
            if (v25 >> 60 != 0) {
              GameRoutine_60a210_alt1();
            }
            v26 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                      16 * v25, 16, 0);
            v28 = *v21;
            v27 = v21[1];
            v29 = &v22[v26];
            v30 = (__int64)&v22[v26 + -16 * v23];
            *(_QWORD*)v29 = v28;
            *((_QWORD*)v29 + 1) = v27;
            if ((__int64*)v17 != v18) {
              v31 = (__int64*)v17;
              v32 = &v22[v26 + -16 * v23];
              do {
                *((_QWORD*)v32 + 1) = v31[1];
                v33 = *v31;
                v31 += 2;
                *(_QWORD*)v32 = v33;
                v32 += 16;
              } while (v31 != v18);
            }
            v19 = v26 + 16 * v25;
            v18 = (__int64*)(v29 + 16);
            if (v17 != 0) {
              v34 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v34 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(fw_memory_g_heap_manager + v34,
                                                 v17);
            }
            v17 = v30;
          }
          ++v16;
        } while (v16 < (unsigned int)CScriptArray_GetSize_alt1(a2));
      }
      else {
        v19 = 0;
        v18 = nullptr;
        v17 = 0;
      }
      v36_.v37 = (__int64)v18;
      v36_.v38 = v19;
      v36_.v36 = v17;
      *(float*)&v15 = a4;
      GameRoutine_df5940_alt1(
          *(_QWORD**)(*(_QWORD*)(util_g_handle_slots_ptr[0][*(
                                     unsigned int*)(a1 + 20)] +
                                 16LL * *(unsigned int*)(a1 + 16) + 8) +
                      88LL),
          (__int64)&v36_.v36, v36_.v39 & 1, v15);
      if (v36_.v36 != 0) {
        v36_.v37 = v36_.v36;
        v35 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(fw_memory_g_heap_manager + v35,
                                           v36_.v36);
      }
    }
  }
}

__int64 hub_character_WaitIdleSkippable(__int64 result)
{
  __int64 v1;
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  int v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = *(unsigned int*)(result + 16);
  if ((_DWORD)v1 == 0x4000) {
    return result;
  }
  v2 = util_g_handle_slots_ptr[0];
  v3 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(result + 20)] +
                 16 * v1);
  v4 = v3[1];
  if (v4 == 0 || *v3 != *(_QWORD*)(result + 8)) {
    return result;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v5 & 8) != 0) {
      v6 = 2;
    }
    else {
      v6 = 3;
    }
    v7 = (v6 & v5) == 0;
  }
  else {
    v7 = false;
  }
  v8 = *(_QWORD*)(v4 + 24);
  if ((*(_BYTE*)(v8 + 432) & 1) == 0) {
    v16 = result;
    v17 = *(_QWORD*)(*(_QWORD*)(v8 + 16) + 488LL);
    v18 = CharacterRotate_d52080(v17);
    v19 = fmodf(*(float*)(v17 + 36) - v18, 0x1.921fb60000000p+2f);
    if (v19 >= 0x0.0p+0f) {
      v20 = v19 + 0x0.0p+0f;
    }
    else {
      v20 = (float)(v19 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v20 > 0x1.921fb60000000p+1f) {
      v20 = v20 + -0x1.921fb60000000p+2f;
    }
    if (fabsf(v20) <= 0x1.0000000000000p-23f) {
      v25 = *(_QWORD*)(v8 + 16);
      result = v16;
      if ((float)((float)(PSEUDO_UNFUSED(*(float*)(v25 + 672) *
                                         *(float*)(v25 + 672))) +
                  (float)(*(float*)(v25 + 668) * *(float*)(v25 + 668))) >
              0x0.0p+0f ||
          (*(_BYTE*)(v25 + 195) & 1) == 0 && (*(_BYTE*)(v25 + 194) & 1) == 0) {
        goto LABEL_12;
      }
      v21 = HubCharacterNatives_cf7e00(*(_QWORD*)(v8 + 8));
    }
    else {
      v21 = false;
    }
    result = v16;
    if (v7 || v21) {
      goto LABEL_13;
    }
  LABEL_30:
    v22 = as_g_script_manager;
    v23 = *(_QWORD*)(v22 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
    return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(v24 + 24) + 448LL))(
        *(_QWORD*)(v24 + 24), 0);
  }
LABEL_12:
  if (!v7) {
    goto LABEL_30;
  }
LABEL_13:
  if (v7) {
    v9 = *(_QWORD*)(*(_QWORD*)(v2[*(unsigned int*)(result + 20)] +
                               16LL * *(unsigned int*)(result + 16) + 8) +
                    24LL);
    v10 = *(unsigned __int8*)(v9 + 272);
    *(_DWORD*)(v9 + 280) = 0;
    if (v10 == 1) {
      *(_BYTE*)(v9 + 272) = 0;
    }
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 344LL);
    if (*(_BYTE*)(v11 + 345) != 0) {
      v12 = *(unsigned __int8*)(v11 + 88);
      *(_BYTE*)(v11 + 345) = 0;
      if (v12 == 1) {
        *(_BYTE*)(v11 + 88) = 0;
      }
    }
    GameRoutine_d196c0_alt1(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 344LL), 0,
                            0x0.0p+0f);
  }
  v13 = as_g_script_manager;
  v14 = *(
      _QWORD*)(v13 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v14 != 0) {
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 472LL))(v14);
  }
  else {
    v15 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v15 + 24) + 448LL))(
      *(_QWORD*)(v15 + 24), 1);
  result = *(_QWORD*)(v15 + 2240);
  *(_QWORD*)(v15 + 2240) = 0;
  if (result == v15 + 2208) {
    v26 = 32;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v26))((__int64)result);
  }
  if (result != 0) {
    v26 = 40;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + v26))((__int64)result);
  }
  return result;
}

bool hub_character_IsIdleForAnimation(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64** v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
    goto LABEL_8;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  v7 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v7 == 0x4000) {
    return false;
  }
  v8 = util_g_handle_slots_ptr[0];
  v9 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                 16 * v7);
  v10 = v9[1];
  if (v10 == 0) {
    return false;
  }
  if (*v9 != *(_QWORD*)(a1 + 8)) {
    return false;
  }
  v11 = *(_QWORD*)(v10 + 24);
  if ((*(_BYTE*)(v11 + 432) & 1) != 0) {
    return false;
  }
  v12 = *(_QWORD*)(*(_QWORD*)(v11 + 16) + 488LL);
  v13 = CharacterRotate_d52080(v12);
  v14 = fmodf(*(float*)(v12 + 36) - v13, 0x1.921fb60000000p+2f);
  if (v14 >= 0x0.0p+0f) {
    v15 = v14 + 0x0.0p+0f;
  }
  else {
    v15 = (float)(v14 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v15 > 0x1.921fb60000000p+1f) {
    v15 = v15 + -0x1.921fb60000000p+2f;
  }
  if (fabsf(v15) > 0x1.0000000000000p-23f) {
    return false;
  }
  v16 = *(_QWORD*)(v11 + 16);
  if ((float)((float)(PSEUDO_UNFUSED(*(float*)(v16 + 672) *
                                     *(float*)(v16 + 672))) +
              (float)(*(float*)(v16 + 668) * *(float*)(v16 + 668))) >
          0x0.0p+0f ||
      (*(_BYTE*)(v16 + 195) & 1) == 0 && (*(_BYTE*)(v16 + 194) & 1) == 0) {
    return false;
  }
  if (!HubCharacterNatives_cf7e00(*(_QWORD*)(v11 + 8))) {
    return false;
  }
  v17 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v17 == 0x4000) {
    return true;
  }
  v18 = v8[*(unsigned int*)(a1 + 20)];
  v19 = *(_QWORD*)(v18 + 16 * v17 + 8);
  if ((*(_BYTE*)(v19 + 184) & 0x80) != 0 ||
      *(_QWORD*)(v18 + 16 * v17) != *(_QWORD*)(a1 + 8)) {
    return true;
  }
  v20 = GameData_21f3d08;
  v21 = *(__int64***)(GameData_21f3d08 + 40);
  v22 = *(__int64***)(GameData_21f3d08 + 48);
  if (v21 != v22) {
    while (1) {
      v23 = *v21;
      v24 = (*v21)[1];
      if (v24 != 0) {
        v25 = std___1___shared_weak_count_lock(v24);
        if (v25 != 0) {
          v26 = *v23;
          if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v27 = v25;
            (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
            std___1___shared_weak_count___release_weak(v27);
          }
          if (v26 == v19) {
            break;
          }
        }
      }
      v21 += 2;
      if (v21 == v22) {
        v21 = v22;
        break;
      }
    }
    v22 = *(__int64***)(v20 + 48);
  }
  return v21 == v22;
}

_QWORD* HubCharacterNatives_cd3a50(__int64 a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  double v7;
  _QWORD* result;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v9 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v9 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(void*))(*result + v9))(result);
  }
  v10 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v10 != 0x4000) {
    v11 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v10);
    v12 = v11[1];
    if (v12 != 0 && *v11 == *(_QWORD*)(a1 + 8)) {
      v13 = *(_QWORD*)(v12 + 24);
      v14 = *(unsigned __int8*)(v13 + 272);
      *(_DWORD*)(v13 + 280) = 0;
      if (v14 == 1) {
        *(_BYTE*)(v13 + 272) = 0;
      }
      v15 = *(_QWORD*)(*(_QWORD*)(v13 + 8) + 344LL);
      if (*(_BYTE*)(v15 + 345) != 0) {
        v16 = *(unsigned __int8*)(v15 + 88);
        *(_BYTE*)(v15 + 345) = 0;
        if (v16 == 1) {
          *(_BYTE*)(v15 + 88) = 0;
        }
      }
      *(float*)&v7 = a2;
      return (_QWORD*)GameRoutine_d196c0(
          *(_QWORD*)(*(_QWORD*)(v13 + 8) + 344LL), 1, v7);
    }
  }
  return result;
}

_QWORD* HubCharacterNatives_cd4660(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  int v14;
  int v15;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v22;
  _QWORD* v23;
  int* v24;
  int v25;
  int v26;
  __int64* v28;
  __int64 v29;
  int v30;
  __int64 v32;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(void*))(*result + v8))(result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return result;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0 || *v10 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v12 = *(_QWORD*)(a2 + 8);
  if ((*(_BYTE*)a2 & 1) == 0) {
    v12 = *(_BYTE*)a2 >> 1;
  }
  if (v12 > 7) {
    switch (v12) {
    case 8LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v23 = *(_QWORD**)(a2 + 16);
      }
      else {
        v23 = (_QWORD*)(a2 + 1);
      }
      if (*v23 == 0x776F4C65736F6F4CLL) {
        v17 = 0x100000001LL;
        goto LABEL_67;
      }
      break;
    case 9LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v28 = *(__int64**)(a2 + 16);
      }
      else {
        v28 = (__int64*)(a2 + 1);
      }
      v29 = *v28;
      v30 = *((unsigned __int8*)v28 + 8);
      if (v29 == 0x67694865736F6F4CLL && v30 == 104) {
        v17 = 0x100000003LL;
        goto LABEL_67;
      }
      break;
    case 11LL:
      v18 = (*(_BYTE*)a2 & 1) != 0 ? *(__int64**)(a2 + 16) : (__int64*)(a2 + 1);
      v19 = *v18;
      v20 = *(__int64*)((char*)v18 + 3);
      if (v19 == 0x6D6E5565736F6F4CLL && v20 == 0x65766F6D6E556573LL) {
        v17 = 0x100000004LL;
        goto LABEL_67;
      }
      break;
    default:
      break;
    }
  }
  else {
    switch (v12) {
    case 4LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v22 = *(_DWORD**)(a2 + 16);
      }
      else {
        v22 = (_DWORD*)(a2 + 1);
      }
      if (*v22 == 1819042135) {
        v17 = 0x100000005LL;
        goto LABEL_67;
      }
      break;
    case 6LL:
      if ((*(_BYTE*)a2 & 1) != 0) {
        v24 = *(int**)(a2 + 16);
      }
      else {
        v24 = (int*)(a2 + 1);
      }
      v25 = *v24;
      v26 = *((unsigned __int16*)v24 + 2);
      if (v25 == 2036427856 && v26 == 29285) {
        v17 = 0x100000002LL;
        goto LABEL_67;
      }
      break;
    case 7LL:
      v13 = (*(_BYTE*)a2 & 1) != 0 ? *(int**)(a2 + 16) : (int*)(a2 + 1);
      v14 = *v13;
      v15 = *(int*)((char*)v13 + 3);
      if (v14 != 1634953540 || v15 != 1701601889) {
        return result;
      }
      v17 = 0x100000000LL;
    LABEL_67:
      v32 = *(_QWORD*)(v11 + 24);
      *(_DWORD*)(v32 + 368) = v17;
      *(_BYTE*)(v32 + 372) = BYTE4(v17);
      return (_QWORD*)HubCharacterNatives_cea6b0(v32);
    default:
      return result;
    }
  }
  return result;
}

__attribute__((swiftcall)) void hub_character_GetMonthLabel(PSEUDO_X8 x8_,
                                                            __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  unsigned __int8* v17;
  unsigned __int64 v18;
  const char* v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    const char* v22;
  } v21_;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000 &&
      (v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                       16 * v9),
       (v11 = v10[1]) != 0) &&
      *v10 == *(_QWORD*)(a1 + 8)) {
    if (game_GameModeData_instance_ != 0) {
      v12 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    }
    else {
      v12 = 0;
    }
    v13 = *(_QWORD*)(v11 + 16);
    if (*(_QWORD*)GameData_212c6c8 != 0) {
      if (game_gmap_GmapClock_instance_ != 0) {
        v14 = game_gmap_GmapClock_instance_ + 8;
      }
      else {
        v14 = game_gmap_GmapClock_kDefaultTime_ptr;
      }
      v15 = *(__int16*)(v14 + 2);
    }
    else {
      v15 = 1;
    }
    if (v12 == 3) {
      v16 = 0;
    }
    else {
      v16 = v15;
    }
    if (game_GameModeData_instance_ != 0 && v12 == 3) {
      v16 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    game_112eec0((void*)(v21_.v21), v13, v12, v16);
    v17 = (unsigned __int8*)*GameData_212ebe8;
    v18 = strlen_alt1(*GameData_212ebe8);
    Character_cb01a0_alt1((__int64)v21_.v21, v17, v18, &GameData_1a9f09e, 0);
    if ((v21_.v21[0] & 1) != 0) {
      v19 = v21_.v22;
    }
    else {
      v19 = (char*)v21_.v21 + 1;
    }
    GameRoutine_25eca0_alt1(a2, v19);
    if ((v21_.v21[0] & 1) != 0 && v21_.v22 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v21_.v22);
    }
  }
  else {
    GameRoutine_25eca0_alt1(a2, &GameData_1a9f09e);
  }
}

void HubCharacterNatives_cd50e0(__int64 a1, unsigned __int8* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    _QWORD v31[2];
    __int64 v32;
    int v33;
    char gap28_[4];
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v31_;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = util_g_handle_slots_ptr[0];
    v11 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v9);
    if (v11[1] != 0 && *v11 == *(_QWORD*)(a1 + 8)) {
      v12 = *a2;
      v31_.v33 = 0;
      v31_.v31[1] = 0;
      v31_.v32 = 0;
      v13 = v12 >> 1;
      v14 = (v12 & 1) == 0;
      v15 = *((_QWORD*)a2 + 1);
      v16 = *((_QWORD*)a2 + 2);
      v31_.v31[0] = 0;
      v31_.v34 = 0;
      v31_.v35 = 0;
      v31_.v36 = 0;
      v31_.v37 = 0;
      v31_.v38 = 0;
      v31_.v39 = 0;
      if (v14) {
        v17 = v13;
      }
      else {
        v17 = v15;
      }
      if (v14) {
        v18 = (__int64)(a2 + 1);
      }
      else {
        v18 = v16;
      }
      GameRoutine_60a060_alt1((char*)v31_.v31, v18, v17);
      v19 = *(unsigned int*)(a1 + 16);
      v20 = *(unsigned int*)(a1 + 20);
      v31_.v33 = 0;
      game_hub_Character_SetPopupAmes(*(_QWORD**)(v10[v20] + 16 * v19 + 8),
                                      (__int64)v31_.v31);
      v21 = v31_.v37;
      if (v31_.v37 != 0) {
        v22 = v31_.v38;
        v23 = fw_memory_g_heap_manager_ptr;
        if (v31_.v37 == v31_.v38) {
          goto LABEL_29;
        }
        v24 = v31_.v38;
        do {
          v25 = *(_BYTE*)(v24 - 24);
          v24 -= 24;
          if ((v25 & 1) != 0) {
            v26 = *(_QWORD*)(v22 - 8);
            if (v26 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
                v27 = 128;
              }
              else {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v23 + v27, v26);
            }
          }
          v22 = v24;
        } while (v24 != v21);
        v31_.v38 = v21;
        v21 = v31_.v37;
        if (v31_.v37 != 0) {
        LABEL_29:
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v23 + v28, v21);
        }
      }
      if ((v31_.v34 & 1) != 0 && v31_.v36 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v31_.v36);
      }
      if ((v31_.v31[0] & 1) != 0 && v31_.v32 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v31_.v32);
      }
    }
  }
}

void HubCharacterNatives_cd5340(__int64 a1, unsigned __int8* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    _QWORD v31[2];
    __int64 v32;
    int v33;
    char gap28_[4];
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v31_;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = util_g_handle_slots_ptr[0];
    v11 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v9);
    if (v11[1] != 0 && *v11 == *(_QWORD*)(a1 + 8)) {
      v12 = *a2;
      v31_.v33 = 0;
      v31_.v31[1] = 0;
      v31_.v32 = 0;
      v13 = v12 >> 1;
      v14 = (v12 & 1) == 0;
      v15 = *((_QWORD*)a2 + 1);
      v16 = *((_QWORD*)a2 + 2);
      v31_.v31[0] = 0;
      v31_.v34 = 0;
      v31_.v35 = 0;
      v31_.v36 = 0;
      v31_.v37 = 0;
      v31_.v38 = 0;
      v31_.v39 = 0;
      if (v14) {
        v17 = v13;
      }
      else {
        v17 = v15;
      }
      if (v14) {
        v18 = (__int64)(a2 + 1);
      }
      else {
        v18 = v16;
      }
      GameRoutine_60a060_alt1((char*)v31_.v31, v18, v17);
      v19 = *(unsigned int*)(a1 + 16);
      v20 = *(unsigned int*)(a1 + 20);
      v31_.v33 = 1;
      game_hub_Character_SetPopupAmes(*(_QWORD**)(v10[v20] + 16 * v19 + 8),
                                      (__int64)v31_.v31);
      v21 = v31_.v37;
      if (v31_.v37 != 0) {
        v22 = v31_.v38;
        v23 = fw_memory_g_heap_manager_ptr;
        if (v31_.v37 == v31_.v38) {
          goto LABEL_29;
        }
        v24 = v31_.v38;
        do {
          v25 = *(_BYTE*)(v24 - 24);
          v24 -= 24;
          if ((v25 & 1) != 0) {
            v26 = *(_QWORD*)(v22 - 8);
            if (v26 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
                v27 = 128;
              }
              else {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v23 + v27, v26);
            }
          }
          v22 = v24;
        } while (v24 != v21);
        v31_.v38 = v21;
        v21 = v31_.v37;
        if (v31_.v37 != 0) {
        LABEL_29:
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v23 + v28, v21);
        }
      }
      if ((v31_.v34 & 1) != 0 && v31_.v36 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v31_.v36);
      }
      if ((v31_.v31[0] & 1) != 0 && v31_.v32 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, v31_.v32);
      }
    }
  }
}

void hub_character_AddAccessEvent_cd6100(__int64 a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char v12;
  const char* v13;
  const char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    _QWORD v28[2];
    char* v29;
  } v28_;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v30_;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0 || *v10 != *(_QWORD*)(a1 + 8)) {
    return;
  }
  v12 = *a2;
  v13 = *((const char**)a2 + 2);
  v30_.v31 = 0;
  v30_.v32 = 0;
  v30_.v30 = 0;
  if ((v12 & 1) != 0) {
    v14 = v13;
  }
  else {
    v14 = a2 + 1;
  }
  v15 = strlen_alt1(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v18, 16, 0);
    v28_.v28[1] = v16;
    v28_.v29 = v17;
    v28_.v28[0] = v18 | 1;
    goto LABEL_23;
  }
  LOBYTE(v28_.v28[0]) = 2 * v15;
  v17 = (char*)v28_.v28 + 1;
  if (v15 != 0) {
  LABEL_23:
    memmove_alt1((__int64)v17, (__int64)v14, v16);
  }
  v17[v16] = 0;
  game_hub_cad680_alt2(v11, (__int64)v28_.v28, (__int64)&v30_.v30);
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (__int64)v28_.v29);
  }
  v20 = v30_.v30;
  if (v30_.v30 != 0) {
    v21 = v30_.v31;
    if (v30_.v30 == v30_.v31) {
      goto LABEL_40;
    }
    v22 = v30_.v31;
    v23 = fw_memory_g_heap_manager_ptr;
    do {
      v24 = *(_BYTE*)(v22 - 24);
      v22 -= 24;
      if ((v24 & 1) != 0) {
        v25 = *(_QWORD*)(v21 - 8);
        if (v25 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v23 + v26, v25);
        }
      }
      v21 = v22;
    } while (v22 != v20);
    v30_.v31 = v20;
    v20 = v30_.v30;
    if (v30_.v30 != 0) {
    LABEL_40:
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v20);
    }
  }
}

void hub_character_AddAccessEvent_cd63a0(__int64 a1, __int64 a2, char* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  char v14;
  const char* v15;
  const char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  const char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  struct {
    __int64 v50;
    unsigned __int64 v51;
    char* v52;
  } v50_;
  struct {
    __int64 v53;
    __int64* v54;
    unsigned __int64 v55;
  } v53_;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (v9 != nullptr) {
    v10 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 == 0x4000) {
    return;
  }
  v12 = util_g_handle_slots_ptr[0];
  v13 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v11);
  if (v13[1] == 0 || *v13 != *(_QWORD*)(a1 + 8)) {
    return;
  }
  v14 = *a3;
  v15 = *((const char**)a3 + 2);
  v53_.v54 = nullptr;
  v53_.v55 = 0;
  v53_.v53 = 0;
  if ((v14 & 1) != 0) {
    v16 = v15;
  }
  else {
    v16 = a3 + 1;
  }
  v17 = strlen_alt1(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0_alt1();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v20, 16, 0);
    v50_.v51 = v18;
    v50_.v52 = v19;
    v50_.v50 = v20 | 1;
    goto LABEL_23;
  }
  LOBYTE(v50_.v50) = 2 * v17;
  v19 = (char*)&v50_.v50 + 1;
  if (v17 != 0) {
  LABEL_23:
    memmove_alt1((__int64)v19, (__int64)v16, v18);
  }
  v21 = v53_.v54;
  v22 = v53_.v55;
  v19[v18] = 0;
  if ((unsigned __int64)v21 >= v22) {
    v24 = v53_.v53;
    v25 = (unsigned __int64)v21 - v53_.v53;
    v26 = 1 - 0x5555555555555555LL * (((__int64)v21 - v53_.v53) >> 3);
    if (v26 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_64aa00_alt1();
    }
    v27 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v22 - v53_.v53) >> 3);
    if (2 * v27 > v26) {
      v26 = 2 * v27;
    }
    if (v27 >= 0x555555555555555LL) {
      v28 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210_alt1();
      }
      v29 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                24 * v28, 16, 0);
    }
    else {
      v29 = 0;
    }
    v30 = (__int64*)(v29 + v25);
    v31 = v29 + 24 * v28;
    v32 = v50_.v51;
    v23 = v29 + v25 + 24;
    *v30 = v50_.v50;
    v30[1] = v32;
    v30[2] = (__int64)v50_.v52;
    memcpy_alt1(v29, v24, v25);
    v53_.v53 = v29;
    v53_.v55 = v31;
    if (v24 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v24);
    }
  }
  else {
    v23 = (__int64)(v21 + 3);
    *v21 = v50_.v50;
    v21[1] = v50_.v51;
    v21[2] = (__int64)v50_.v52;
  }
  v34 = *(unsigned int*)(a1 + 16);
  v53_.v54 = (__int64*)v23;
  if ((_DWORD)v34 == 0x4000) {
    v35 = 0;
  }
  else {
    v35 = *(_QWORD*)(v12[*(unsigned int*)(a1 + 20)] + 16 * v34 + 8);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v36 = *(const char**)(a2 + 16);
  }
  else {
    v36 = (const char*)(a2 + 1);
  }
  v37 = strlen_alt1(v36);
  if (v37 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v38 = v37;
  if (v37 >= 0x17) {
    if ((v37 | 7) == 0x17) {
      v40 = 26;
    }
    else {
      v40 = (v37 | 7) + 1;
    }
    v39 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v40, 16, 0);
    v50_.v51 = v38;
    v50_.v52 = v39;
    v50_.v50 = v40 | 1;
    goto LABEL_54;
  }
  LOBYTE(v50_.v50) = 2 * v37;
  v39 = (char*)&v50_.v50 + 1;
  if (v37 != 0) {
  LABEL_54:
    memmove_alt1((__int64)v39, (__int64)v36, v38);
  }
  v39[v38] = 0;
  game_hub_cad680_alt2(v35, (__int64)&v50_.v50, (__int64)&v53_.v53);
  if ((v50_.v50 & 1) != 0 && v50_.v52 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, (__int64)v50_.v52);
  }
  v42 = v53_.v53;
  if (v53_.v53 != 0) {
    v43 = v53_.v54;
    if ((__int64*)v53_.v53 == v53_.v54) {
      goto LABEL_71;
    }
    v44 = v53_.v54;
    v45 = fw_memory_g_heap_manager_ptr;
    do {
      v46 = *((_BYTE*)v44 - 24);
      v44 -= 3;
      if ((v46 & 1) != 0) {
        v47 = *(v43 - 1);
        if (v47 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) != 0) {
            v48 = 128;
          }
          else {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v45 + v48, v47);
        }
      }
      v43 = v44;
    } while (v44 != (__int64*)v42);
    v53_.v54 = (__int64*)v42;
    v42 = v53_.v53;
    if (v53_.v53 != 0) {
    LABEL_71:
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v42);
    }
  }
}

void hub_character_AddAccessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  unsigned int v13;
  __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  char v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    _QWORD v46[2];
    char* v47;
  } v46_;
  struct {
    __int64 v48;
    __int64 v49;
    unsigned __int64 v50;
  } v48_;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (v9 != nullptr) {
    v10 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 == 0x4000) {
    return;
  }
  v12 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v11);
  if (v12[1] == 0 || *v12 != *(_QWORD*)(a1 + 8)) {
    return;
  }
  v45 = a2;
  v48_.v49 = 0;
  v48_.v50 = 0;
  v48_.v48 = 0;
  if ((unsigned int)CScriptArray_GetSize_alt1(a3) != 0) {
    v13 = 0;
    v14 = 0;
    v15 = nullptr;
    v16 = 0;
    do {
      v19 = (_QWORD*)CScriptArray_At_1971f0_alt1(a3, v13);
      if ((unsigned __int64)v15 >= v16) {
        v20 = (unsigned __int64)v15 - v14;
        v21 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v15 - v14) >> 3) + 1;
        if (v21 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00_alt1();
        }
        if (0x5555555555555556LL * ((__int64)(v16 - v14) >> 3) > v21) {
          v21 = 0x5555555555555556LL * ((__int64)(v16 - v14) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v16 - v14) >> 3) >=
            0x555555555555555LL) {
          v22 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v22 = v21;
        }
        if (v22 != 0) {
          if (v22 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210_alt1();
          }
          v23 = v19;
          v24 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    24 * v22, 16, 0);
          v19 = v23;
        }
        else {
          v24 = 0;
        }
        v25 = (_QWORD*)(v24 + v20);
        if ((*(_BYTE*)v19 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1((__int64*)(v24 + v20), v19[2],
                                             v19[1]);
        }
        else {
          v26 = *v19;
          v27 = v19[2];
          v25[1] = v19[1];
          v25[2] = v27;
          *v25 = v26;
        }
        v16 = v24 + 24 * v22;
        v15 = v25 + 3;
        v28 = (__int64)v25 - v20;
        memcpy_alt1(v28, v14, v20);
        v48_.v48 = v28;
        v48_.v50 = v16;
        if (v14 != 0) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v14);
        }
        v14 = v28;
      }
      else {
        if ((*(_BYTE*)v19 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(v15, v19[2], v19[1]);
        }
        else {
          v17 = *v19;
          v18 = v19[2];
          v15[1] = v19[1];
          v15[2] = v18;
          *v15 = v17;
        }
        v15 += 3;
      }
      v48_.v49 = (__int64)v15;
      ++v13;
    } while (v13 < (unsigned int)CScriptArray_GetSize_alt1(a3));
  }
  v30 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v30 == 0x4000) {
    v31 = 0;
  }
  else {
    v31 = *(_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                     16 * v30 + 8);
  }
  if ((*(_BYTE*)v45 & 1) != 0) {
    v32 = *(const char**)(v45 + 16);
  }
  else {
    v32 = (const char*)(v45 + 1);
  }
  v33 = strlen_alt1(v32);
  if (v33 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v34 = v33;
  if (v33 >= 0x17) {
    if ((v33 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v33 | 7) + 1;
    }
    v35 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v36, 16, 0);
    v46_.v46[1] = v34;
    v46_.v47 = v35;
    v46_.v46[0] = v36 | 1;
    goto LABEL_52;
  }
  LOBYTE(v46_.v46[0]) = 2 * v33;
  v35 = (char*)v46_.v46 + 1;
  if (v33 != 0) {
  LABEL_52:
    memmove_alt1((__int64)v35, (__int64)v32, v34);
  }
  v35[v34] = 0;
  game_hub_cad680_alt1(v31, v46_.v46, (__int64)&v48_.v48);
  if ((v46_.v46[0] & 1) != 0 && v46_.v47 != nullptr) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, (__int64)v46_.v47);
  }
  v38 = v48_.v48;
  if (v48_.v48 != 0) {
    v39 = v48_.v49;
    if (v48_.v48 == v48_.v49) {
      goto LABEL_69;
    }
    v40 = v48_.v49;
    do {
      v41 = *(_BYTE*)(v40 - 24);
      v40 -= 24;
      if ((v41 & 1) != 0) {
        v42 = *(_QWORD*)(v39 - 8);
        if (v42 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v43 = 128;
          }
          else {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt3(fw_memory_g_heap_manager + v43,
                                             v42);
        }
      }
      v39 = v40;
    } while (v40 != v38);
    v48_.v49 = v38;
    v38 = v48_.v48;
    if (v48_.v48 != 0) {
    LABEL_69:
      v44 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v44 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v38);
    }
  }
}

_QWORD* hub_character_RegisterPopupTalkLabel(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  char* v20;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return result;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0 || *v10 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  v12 = *(_QWORD*)(v11 + 1232);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v13 = *(_QWORD*)(a2 + 16);
  }
  else {
    v13 = a2 + 1;
  }
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                16, 0);
    v19[1] = v15;
    v20 = v16;
    v19[0] = v17 | 1;
  }
  else {
    LOBYTE(v19[0]) = 2 * v14;
    v16 = (char*)v19 + 1;
    if (v14 == 0) {
      goto LABEL_24;
    }
  }
  memmove(v16, v13, v15);
LABEL_24:
  v16[v15] = 0;
  result = (_QWORD*)GameRoutine_fb6f80(v12, v19);
  if ((v19[0] & 1) != 0 && v20 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v20);
  }
  return result;
}

__int64 hub_character_AddTalkSelectItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  __int64 v23;
  _QWORD v24[3];
  _QWORD v25[2];
  char* v26;
  _QWORD v27[2];
  char* v28;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_9;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_9:
  if ((*(_BYTE*)a2 & 1) != 0) {
    v11 = *(_QWORD*)(a2 + 16);
  }
  else {
    v11 = a2 + 1;
  }
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_44:
    String_60a1d0();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v15,
                                                16, 0);
    v27[1] = v13;
    v28 = v14;
    v27[0] = v15 | 1;
    goto LABEL_20;
  }
  LOBYTE(v27[0]) = 2 * v12;
  v14 = (char*)v27 + 1;
  if (v12 != 0) {
  LABEL_20:
    memmove(v14, v11, v13);
  }
  v14[v13] = 0;
  if ((*(_BYTE*)a3 & 1) != 0) {
    v16 = *(_QWORD*)(a3 + 16);
  }
  else {
    v16 = a3 + 1;
  }
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_44;
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20,
                                                16, 0);
    v25[1] = v18;
    v26 = v19;
    v25[0] = v20 | 1;
  }
  else {
    LOBYTE(v25[0]) = 2 * v17;
    v19 = (char*)v25 + 1;
    if (v17 == 0) {
      goto LABEL_33;
    }
  }
  memmove(v19, v16, v18);
LABEL_33:
  v19[v18] = 0;
  memset(v24, 0, sizeof(v24));
  result = HubCharacterNatives_cd7620(a1, v27, v25, v24);
  if ((v25[0] & 1) != 0 && v26 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v26);
  }
  if ((v27[0] & 1) != 0 && v28 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v28);
  }
  return result;
}

__int64 hub_character_PreTalkEvent(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  void (*v15)(void);
  __int64 v16;
  __int64 v17;
  char v18[16];
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = *(unsigned int*)(result + 16);
  if ((_DWORD)v3 == 0x4000) {
    return result;
  }
  v20 = v1;
  v21 = v2;
  v4 = util_g_handle_slots_ptr[0];
  v5 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(result + 20)] +
                 16 * v3);
  if (v5[1] == 0 || *v5 != *(_QWORD*)(result + 8)) {
    return result;
  }
  v6 = result;
  v7 = as_g_script_manager_ptr;
  v8 = *as_g_script_manager_ptr;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v10 + 24) + 456LL))(
           *(_QWORD*)(v10 + 24)) &
       1) != 0) {
    GameRoutine_cafb80(*(_QWORD*)(v4[*(unsigned int*)(v6 + 20)] +
                                  16LL * *(unsigned int*)(v6 + 16) + 8));
  }
  v18[0] = 24;
  strcpy(&v18[1], "PreTalkEvent");
  v11 = GameRoutine_d859a0(v18);
  v12 = *v7;
  v13 = *(
      _QWORD*)(v12 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v13 != 0) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 472LL))(v13);
  }
  else {
    v14 = 0;
  }
  v15 = *(void (**)(void))(**(_QWORD**)(v14 + 24) + 448LL);
  if ((v11 & 1) == 0) {
    v15();
    result = *(_QWORD*)(v14 + 2240);
    *(_QWORD*)(v14 + 2240) = 0;
    if (result == v14 + 2208) {
      v16 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_16;
      }
      v16 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)result + v16))((__int64)result);
    goto LABEL_16;
  }
  result = ((__int64 (*)(void))v15)();
LABEL_16:
  if ((v18[0] & 1) != 0 && v19 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v19);
  }
  return result;
}

__int64 hub_character_PostTalkEvent(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (*v24)(__int64, __int64);
  __int64 v25;
  __int64 v26;
  struct {
    __int64 v27[2];
    __int64 v28;
  } v27_;
  __int64* v29[3];

  v3 = *(unsigned int*)(result + 16);
  if ((_DWORD)v3 == 0x4000) {
    return result;
  }
  v29[1] = v1;
  v29[2] = v2;
  v4 = util_g_handle_slots_ptr[0];
  v5 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(result + 20)] +
                 16 * v3);
  if (v5[1] == 0 || *v5 != *(_QWORD*)(result + 8)) {
    return result;
  }
  v6 = result;
  v7 = as_g_script_manager_ptr;
  v8 = *as_g_script_manager_ptr;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v10 + 24) + 456LL))(
           *(_QWORD*)(v10 + 24)) &
       1) != 0) {
    v11 = *(unsigned int*)(v6 + 16);
    if ((_DWORD)v11 == 0x4000 ||
        (v12 = (_QWORD*)(v4[*(unsigned int*)(v6 + 20)] + 16 * v11))[1] == 0) {
      v13 = 0;
    }
    else {
      v13 = *v12 == *(_QWORD*)(v6 + 8) ? v12[1] : 0LL;
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v14 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v15 = v14;
        v14 = *(_QWORD*)(v14 + 40);
      } while (v14 != 0);
    }
    else {
      v15 = 0;
    }
    if (GameRoutine_db2940(*(_QWORD*)(v13 + 16))) {
      v27_.v27[0] = *(_QWORD*)(v13 + 16);
      GameRoutine_f6b480(v15, v27_.v27);
      v16 = game_hub_ProcHubSeqView_instance_;
      LOBYTE(v27_.v27[0]) = 26;
      strcpy((char*)v27_.v27 + 1, "PostTalkEvent");
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424,
                           (unsigned __int8*)v27_.v27);
        v17 = *(_QWORD*)(*(_QWORD*)(v16 + 416) + 40LL);
        if (v17 != 0) {
          v18 = 0;
          do {
            v17 = *(_QWORD*)(v17 + 40);
            ++v18;
          } while (v17 != 0);
          v29[0] = v27_.v27;
          *((_DWORD*)GameRoutine_d8bae0(
                (__int64**)(v16 + 424), (unsigned __int8*)v27_.v27,
                (__int64)std___1_piecewise_construct_ptr, v29) +
            14) = v18;
        }
      }
      if ((v27_.v27[0] & 1) != 0 && v27_.v28 != 0) {
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v27_.v28);
      }
    }
  }
  LOBYTE(v27_.v27[0]) = 26;
  strcpy((char*)v27_.v27 + 1, "PostTalkEvent");
  v20 = GameRoutine_d859a0_alt1((__int64)v27_.v27);
  v21 = *v7;
  v22 = *(
      _QWORD*)(v21 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v22 != 0) {
    v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 472LL))(v22);
  }
  else {
    v23 = 0;
  }
  v24 = *(__int64 (**)(__int64, __int64))(**(_QWORD**)(v23 + 24) + 448LL);
  if ((v20 & 1) == 0) {
    v24(*(_QWORD*)(v23 + 24), 1);
    result = *(_QWORD*)(v23 + 2240);
    *(_QWORD*)(v23 + 2240) = 0;
    if (result == v23 + 2208) {
      v25 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_37;
      }
      v25 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)result + v25))((__int64)result);
    goto LABEL_37;
  }
  result = v24(*(_QWORD*)(v23 + 24), 0);
LABEL_37:
  if ((v27_.v27[0] & 1) != 0 && v27_.v28 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v27_.v28);
  }
  return result;
}

void hub_character_BeginEncounter(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  struct {
    int v14;
    char gap4_[4];
    _QWORD* v15;
    _QWORD* v16;
    _QWORD* v17;
    __int64 v18;
    __int64 v19;
  } v14_;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
    goto LABEL_8;
  }
  if (v5 != nullptr) {
    v6 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  }
  v7 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v7 != 0x4000) {
    v8 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                   16 * v7);
    v9 = v8[1];
    if (v9 != 0 && *v8 == *(_QWORD*)(a1 + 8)) {
      v14_.v18 = 0;
      v14_.v19 = 0;
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v11 = v9;
      v14_.v15 = v11;
      v12 = (__int64)v11;
      v14_.v16 = v11 + 1;
      v14_.v17 = v11 + 1;
      v14_.v14 = 2;
      GameRoutine_da21c0_alt1(GameData_220d630, &v14_.v14);
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v10 + v13, v12);
    }
  }
}

void hub_character_RegisterWarpLocalCallback(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
    char* v25;
  } v23_;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (v7 != nullptr) {
    v8 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0 || *v10 != *(_QWORD*)(a1 + 8)) {
    return;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v12 = *(const char**)(a2 + 16);
  }
  else {
    v12 = (const char*)(a2 + 1);
  }
  v13 = strlen_alt1(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v16, 16, 0);
    v23_.v24 = v14;
    v23_.v25 = v15;
    v23_.v23 = v16 | 1;
  }
  else {
    LOBYTE(v23_.v23) = 2 * v13;
    v15 = (char*)&v23_.v23 + 1;
    if (v13 == 0) {
      goto LABEL_24;
    }
  }
  memmove_alt1((__int64)v15, (__int64)v12, v14);
LABEL_24:
  v15[v14] = 0;
  v17 = *(__int64**)(v11 + 144);
  if ((unsigned __int64)v17 >= *(_QWORD*)(v11 + 152)) {
    v20 = Manager_66cc20_alt1((__int64*)(v11 + 136), &v23_.v23);
    v21 = v23_.v23 & 1;
    *(_QWORD*)(v11 + 144) = v20;
    if (v21 == 0) {
      return;
    }
  }
  else {
    if ((v23_.v23 & 1) == 0) {
      v18 = v23_.v23;
      v19 = (__int64)v23_.v25;
      v17[1] = v23_.v24;
      v17[2] = v19;
      *v17 = v18;
      *(_QWORD*)(v11 + 144) = v17 + 3;
      return;
    }
    fw_text_String_CopyTerminated_alt1(*(__int64**)(v11 + 144),
                                       (__int64)v23_.v25, v23_.v24);
    *(_QWORD*)(v11 + 144) = v17 + 3;
  }
  if (v23_.v25 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v23_.v25);
  }
}

_QWORD* hub_character_IsDirectTalkCameraFacility(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  _QWORD* v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  _BOOL4 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;
  struct {
    __int64* v42[2];
    __int64 v43;
  } v42_;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    char* v46;
  } v44_;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 != 0x4000) {
    v10 = util_g_handle_slots_ptr[0];
    v11 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v9);
    result = (_QWORD*)v11[1];
    if (result == nullptr) {
      return result;
    }
    if (*v11 == *(_QWORD*)(a1 + 8)) {
      Character_cb17a0((void*)(&v44_.v44), result);
      v14 = v44_.v44;
      v13 = v44_.v45;
      v42_.v42[0] = &v44_.v44;
      GameRoutine_cb2640_alt1(v42_.v42);
      if (v13 == v14) {
        v15 = *(unsigned int*)(a1 + 16);
        if ((_DWORD)v15 != 0x4000) {
          v16 = *(_QWORD*)(v10[*(unsigned int*)(a1 + 20)] + 16 * v15 + 8);
          v17 = *(_QWORD*)(v16 + 760);
          if (v17 != 0) {
            v18 = *(_QWORD*)(v16 + 768);
            if (v18 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                        memory_order_relaxed);
            }
            v39 = v18;
            if (*(_BYTE*)(v17 + 224) == 1) {
              v19 = 0;
              v20 = fw_memory_g_heap_manager_ptr;
              while (1) {
                v21 = CScriptArray_GetSize_alt1(a2);
                v22 = v19 < v21;
                if (v19 >= v21) {
                  goto LABEL_60;
                }
                v23 = (__int64*)CScriptArray_At_1971f0_alt1(a2, v19);
                if ((*(_BYTE*)v23 & 1) != 0) {
                  fw_text_String_CopyTerminated_alt1(&v44_.v44, v23[2], v23[1]);
                }
                else {
                  v24 = *v23;
                  v25 = v23[2];
                  v44_.v45 = v23[1];
                  v44_.v46 = (char*)v25;
                  v44_.v44 = v24;
                }
                if ((v44_.v44 & 1) != 0) {
                  v26 = v44_.v46;
                }
                else {
                  v26 = (char*)&v44_.v44 + 1;
                }
                if ((v44_.v44 & 1) != 0) {
                  v27 = v44_.v45;
                }
                else {
                  v27 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
                }
                game_db1620_alt1((void*)((__int64)v42_.v42), (__int64)v26, v27);
                game_hub_efcf80((void*)((__int64)&v40_.v40), v42_.v42);
                v29 = v40_.v40;
                v28 = v40_.v41;
                if (v40_.v40 != 0) {
                  if (v40_.v41 == v40_.v40) {
                    v35 = v40_.v40;
                  }
                  else {
                    v30 = v40_.v41;
                    v31 = v40_.v41;
                    do {
                      v32 = *(_BYTE*)(v31 - 24);
                      v31 -= 24;
                      if ((v32 & 1) != 0) {
                        v33 = *(_QWORD*)(v30 - 8);
                        if (v33 != 0) {
                          if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
                            v34 = 128;
                          }
                          else {
                            v34 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt3(
                              *(_QWORD*)v20 + v34, v33);
                        }
                      }
                      v30 = v31;
                    } while (v31 != v29);
                    v35 = v40_.v40;
                    v40_.v41 = v29;
                    if (v40_.v40 == 0) {
                      goto LABEL_47;
                    }
                  }
                  if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
                    v36 = 128;
                  }
                  else {
                    v36 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v20 + v36, v35);
                }
              LABEL_47:
                if (((__int64)v42_.v42[0] & 1) != 0 && v42_.v43 != 0) {
                  if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
                    v37 = 128;
                  }
                  else {
                    v37 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v20 + v37,
                                                     v42_.v43);
                }
                if ((v44_.v44 & 1) != 0 && v44_.v46 != nullptr) {
                  if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
                    v38 = 128;
                  }
                  else {
                    v38 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v20 + v38,
                                                     (__int64)v44_.v46);
                }
                ++v19;
                if (v28 != v29) {
                  goto LABEL_60;
                }
              }
            }
            v22 = true;
          LABEL_60:
            if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
              std___1___shared_weak_count___release_weak_alt1(v39);
            }
            if (!v22) {
              return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
            }
          }
        }
      }
    }
  }
  return nullptr;
}

void hub_character_PlayFacial(__int64 a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v20;
  struct {
    _QWORD v21[2];
    __int64 v22;
    float v23;
    char v24;
  } v21_;

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
    goto LABEL_8;
  }
  if (v9 != nullptr) {
    v10 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  }
  v11 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v11 != 0x4000) {
    v12 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                    16 * v11);
    v13 = v12[1];
    if (v13 != 0 && *v12 == *(_QWORD*)(a1 + 8)) {
      v14 = *(_QWORD*)(v13 + 24);
      v15 = (const char*)as_string_c_str_alt1(a2);
      v16 = strlen_alt1(v15);
      v21_.v24 = 0;
      v21_.v21[0] = 0;
      v21_.v21[1] = 0;
      v21_.v22 = 0;
      LOBYTE(v21_.v23) = 0;
      GameRoutine_60a060_alt1((char*)v21_.v21, (__int64)v15, v16);
      v21_.v23 = a3;
      v21_.v24 = 1;
      v17 = *(_QWORD*)(*(_QWORD*)(v14 + 8) + 352LL);
      GameRoutine_10c0160_alt1(v17 + 16, (unsigned __int8*)v21_.v21);
      GameRoutine_10c0240_alt1(v17);
      if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v21_.v22);
      }
    }
  }
}

_QWORD* hub_character_SetOverrideNameLabel(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  char* v19;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  result = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (result == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v8 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
  }
  v9 = *(unsigned int*)(a1 + 16);
  if ((_DWORD)v9 == 0x4000) {
    return result;
  }
  v10 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(a1 + 20)] +
                  16 * v9);
  v11 = v10[1];
  if (v11 == 0 || *v10 != *(_QWORD*)(a1 + 8)) {
    return result;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v12 = *(_QWORD*)(a2 + 16);
  }
  else {
    v12 = a2 + 1;
  }
  v13 = strlen(v12);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v16,
                                                16, 0);
    v18[1] = v14;
    v19 = v15;
    v18[0] = v16 | 1;
  }
  else {
    LOBYTE(v18[0]) = 2 * v13;
    v15 = (char*)v18 + 1;
    if (v13 == 0) {
      goto LABEL_24;
    }
  }
  memmove(v15, v12, v14);
LABEL_24:
  v15[v14] = 0;
  result = (_QWORD*)HubCharacterNatives_cb02e0_alt1(v11, v18);
  if ((v18[0] & 1) != 0 && v19 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v19);
  }
  return result;
}

__int64 hub_character_DngTalkSetupEnd(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
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
  int v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  void (*v25)(void);
  __int64 v26;
  __int64 v27;
  unsigned __int8 v28;
  _BYTE v29[23];
  struct {
    __int64 v30;
    __int64 v31;
  } v30_;
  __int64* v32[3];

  v3 = *(unsigned int*)(result + 16);
  if ((_DWORD)v3 == 0x4000) {
    return result;
  }
  v32[1] = v1;
  v32[2] = v2;
  v4 = util_g_handle_slots_ptr[0];
  v5 = (_QWORD*)(util_g_handle_slots_ptr[0][*(unsigned int*)(result + 20)] +
                 16 * v3);
  if (v5[1] == 0 || *v5 != *(_QWORD*)(result + 8)) {
    return result;
  }
  v6 = result;
  v7 = as_g_script_manager_ptr;
  v8 = *as_g_script_manager_ptr;
  v9 = *(
      _QWORD*)(v8 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v10 + 24) + 456LL))(
           *(_QWORD*)(v10 + 24)) &
       1) != 0) {
    v11 = *(__int64**)(*GameData_212d458[0] + 24);
    v12 = *(__int64**)(*GameData_212d458[0] + 32);
    if (v11 == v12) {
    LABEL_8:
      v13 = 0;
      v14 = 0;
    }
    else {
      while (1) {
        v13 = *v11;
        if (*(_QWORD*)(*v11 + 264) ==
            *(_QWORD*)(*(_QWORD*)(v4[*(unsigned int*)(v6 + 20)] +
                                  16LL * *(unsigned int*)(v6 + 16) + 8) +
                       264LL)) {
          break;
        }
        v11 += 2;
        if (v11 == v12) {
          goto LABEL_8;
        }
      }
      v14 = v11[1];
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
      }
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v15 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v16 = v15;
        v15 = *(_QWORD*)(v15 + 40);
      } while (v15 != 0);
      v30_.v30 = v13;
      v30_.v31 = v14;
      if (v14 == 0) {
        goto LABEL_16;
      }
    }
    else {
      v16 = 0;
      v30_.v30 = v13;
      v30_.v31 = v14;
      if (v14 == 0) {
        goto LABEL_16;
      }
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
  LABEL_16:
    GameRoutine_1028670(v16, &v30_.v30);
    if (v30_.v31 != 0) {
      std___1___shared_weak_count___release_weak(v30_.v31);
    }
    v17 = game_hub_ProcHubSeqView_instance_;
    v28 = 30;
    strcpy(v29, "EndDngTalkSetup");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, &v28);
      v18 = *(_QWORD*)(*(_QWORD*)(v17 + 416) + 40LL);
      if (v18 != 0) {
        v19 = 0;
        do {
          v18 = *(_QWORD*)(v18 + 40);
          ++v19;
        } while (v18 != 0);
        v32[0] = (__int64*)&v28;
        *((_DWORD*)GameRoutine_d8bae0((__int64**)(v17 + 424), &v28,
                                      (__int64)std___1_piecewise_construct_ptr,
                                      v32) +
          14) = v19;
      }
    }
    if ((v28 & 1) != 0 && *(_QWORD*)&v29[15] != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
  }
  v28 = 30;
  strcpy(v29, "EndDngTalkSetup");
  v21 = GameRoutine_d859a0_alt1((__int64)&v28);
  v22 = *v7;
  v23 = *(
      _QWORD*)(v22 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v23 != 0) {
    v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 472LL))(v23);
  }
  else {
    v24 = 0;
  }
  v25 = *(void (**)(void))(**(_QWORD**)(v24 + 24) + 448LL);
  if ((v21 & 1) == 0) {
    v25();
    result = *(_QWORD*)(v24 + 2240);
    *(_QWORD*)(v24 + 2240) = 0;
    if (result == v24 + 2208) {
      v26 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_42;
      }
      v26 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)result + v26))((__int64)result);
    goto LABEL_42;
  }
  result = ((__int64 (*)(void))v25)();
LABEL_42:
  if ((v28 & 1) != 0 && *(_QWORD*)&v29[15] != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
  }
  return result;
}

__int64 HubCharacterNatives_cea6b0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];

  v1 = result;
  if (*(_BYTE*)(result + 372) == 1) {
    v2 = *(_DWORD*)(result + 368);
  }
  else {
    v3 = *(_QWORD*)(result + 352);
    if (v3 == *(_QWORD*)(result + 344)) {
      v2 = 0;
    }
    else {
      v2 = *(_DWORD*)(v3 - 4);
    }
  }
  if (v2 != *(_DWORD*)(result + 376) || (*(_BYTE*)(result + 380) & 1) == 0) {
    *(_DWORD*)(result + 376) = v2;
    *(_BYTE*)(result + 380) = 1;
    *(_BYTE*)(*(_QWORD*)(*GameData_212eba8[0] + 72) + 48LL) = 1;
    if ((*(_DWORD*)(result + 376) & 0xFFFFFFFE) == 4) {
      v4 = *(_QWORD*)(result + 16);
      v5 = *(_QWORD*)(v4 + 568);
      v11[0] = *(_QWORD*)(v4 + 560);
      v11[1] = v5;
      v6 = GameRoutine_cfd990(v4 + 136, v11);
    }
    else {
      v6 = 0;
    }
    HubCharacterNatives_cf7c90(*(_QWORD*)(v1 + 8), 0x80000000LL, v6 & 1);
    result = *(_QWORD*)(v1 + 56);
    if ((*(_DWORD*)(v1 + 376) & 0xFFFFFFFE) == 4) {
      GameRoutine_fff7f0(result);
      return GameRoutine_ffe9d0(*(_QWORD*)(v1 + 64));
    }
    else {
      if (*(_QWORD*)(result + 16) != 0) {
        v7 = *(_QWORD*)(v1 + 56);
        result = GameRoutine_fffa20();
        v8 = *(_QWORD*)(v7 + 24);
        *(_QWORD*)(v7 + 16) = 0;
        *(_QWORD*)(v7 + 24) = 0;
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak(v8);
        }
      }
      v9 = *(_QWORD*)(v1 + 64);
      if (*(_QWORD*)(v9 + 16) != 0) {
        result = GameRoutine_ffed80(*(_QWORD*)(v1 + 64));
        v10 = *(_QWORD*)(v9 + 24);
        *(_QWORD*)(v9 + 16) = 0;
        *(_QWORD*)(v9 + 24) = 0;
        if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          return std___1___shared_weak_count___release_weak(v10);
        }
      }
    }
  }
  return result;
}

_QWORD* HubCharacterNatives_cec780(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  int v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;

  v1 = result[48];
  if ((v1 & 0x40000000) == 0) {
    v2 = (__int64)result;
    result[48] = v1 | 0x40000000;
    v3 = (_QWORD*)result[1];
    if (v3 != nullptr && v3[39] != 0) {
      v4 = v3[29];
      if (v4 != 0) {
        v5 = *(_DWORD*)(v4 + 340) & 0xFFFFFFFD |
             (2 * ((*(_DWORD*)(v3[2] + 384LL) & 2) != 0));
        *(_DWORD*)(v4 + 340) = v5;
        *(_DWORD*)(v4 + 340) = v5 & 0xFFFFFFFE |
                               ((*(_DWORD*)(v3[2] + 384LL) & 0x20) != 0) |
                               0x2000;
      }
    }
    GameRoutine_d0e440(result[2], 1);
    v6 = *(_QWORD*)(v2 + 384);
    if ((v6 & 0x40000000) != 0) {
      v7 = 33;
    }
    else {
      v7 = 1;
    }
    LODWORD(v8) = (v7 | (v6 >> 29) & 0x10 | ((unsigned int)v6 >> 1) & 6) << 16;
    if (*(_QWORD*)(v2 + 168) != 0) {
      v8 = (unsigned int)v8 | 0x80000;
    }
    else {
      v8 = (unsigned int)v8;
    }
    *(_QWORD*)(v2 + 440) = v8 + *(unsigned int*)(v2 + 184);
    *(_QWORD*)(v2 + 384) = v6 | 0x4000000000LL;
    if ((v6 | 0x4000000000LL) != v6) {
      v9 = *(_QWORD**)(v2 + 8);
      if (v9 != nullptr && v9[39] != 0) {
        v10 = v9[29];
        if (v10 != 0) {
          v11 = *(_DWORD*)(v10 + 340) & 0xFFFFFFFD |
                (2 * ((*(_DWORD*)(v9[2] + 384LL) & 2) != 0));
          *(_DWORD*)(v10 + 340) = v11;
          *(_DWORD*)(v10 + 340) = v11 & 0xFFFFFFFE |
                                  ((*(_DWORD*)(v9[2] + 384LL) & 0x20) != 0) |
                                  0x2000;
        }
      }
      GameRoutine_d0e440(*(_QWORD*)(v2 + 16), 1);
      v12 = *(_QWORD*)(v2 + 384);
      v13 = v12 >> 29;
      v14 = (unsigned int)v12 >> 1;
      if ((*(_QWORD*)(v2 + 384) & 0x40000000LL) != 0) {
        v15 = 33;
      }
      else {
        v15 = 1;
      }
      LODWORD(v16) = (v15 | v13 & 0x10 | v14 & 6) << 16;
      if (*(_QWORD*)(v2 + 168) != 0) {
        v16 = (unsigned int)v16 | 0x80000;
      }
      else {
        v16 = (unsigned int)v16;
      }
      *(_QWORD*)(v2 + 440) = v16 + *(unsigned int*)(v2 + 184);
    }
    v17 = *(_DWORD*)(v2 + 256);
    v18 = v17 + 1;
    *(_DWORD*)(v2 + 256) = v17 + 1;
    if (v17 == 0) {
      (**(void (***)(__int64))(v2 + 248))(v2 + 248);
      v18 = *(_DWORD*)(v2 + 256);
    }
    v19 = *(_QWORD*)(v2 + 32);
    if (v18 < 1) {
      if (v19 != 0) {
        *(_QWORD*)(v2 + 32) = 0;
        goto LABEL_32;
      }
    }
    else if (v19 == 0) {
      v20 = *(_QWORD*)(v2 + 16);
      v21 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 432, 16, 0);
      *(_DWORD*)(v21 + 168) = 1067030938;
      *(_BYTE*)(v21 + 112) = 0;
      *(_QWORD*)(v21 + 160) = game_zview_CharacterActionParam_vtable;
      *(_BYTE*)(v21 + 128) = 0;
      *(_BYTE*)(v21 + 144) = 0;
      *(_QWORD*)(v21 + 32) = 0;
      *(_QWORD*)(v21 + 40) = 0;
      *(_BYTE*)(v21 + 48) = 0;
      *(_DWORD*)(v21 + 24) = 0;
      *(_QWORD*)(v21 + 208) = 0;
      *(_QWORD*)(v21 + 368) = 0;
      *(_QWORD*)(v21 + 376) = 0;
      *(_QWORD*)(v21 + 400) = 0;
      *(_QWORD*)(v21 + 408) = 0;
      *(_QWORD*)(v21 + 416) = 0;
      *(_QWORD*)(v21 + 336) = 0;
      *(_QWORD*)(v21 + 344) = 0;
      *(_QWORD*)(v21 + 320) = 0;
      *(_QWORD*)(v21 + 328) = 0;
      *(_QWORD*)(v21 + 304) = 0;
      *(_QWORD*)(v21 + 312) = 0;
      *(_QWORD*)(v21 + 288) = 0;
      *(_QWORD*)(v21 + 296) = 0;
      *(_QWORD*)(v21 + 272) = 0;
      *(_QWORD*)(v21 + 280) = 0;
      *(_QWORD*)(v21 + 256) = 0;
      *(_QWORD*)(v21 + 264) = 0;
      *(_QWORD*)(v21 + 240) = 0;
      *(_QWORD*)(v21 + 248) = 0;
      *(_QWORD*)(v21 + 224) = 0;
      *(_QWORD*)(v21 + 232) = 0;
      *(_QWORD*)(v21 + 16) = v20;
      *(_QWORD*)(v21 + 384) = 0;
      *(_BYTE*)(v21 + 392) = 0;
      *(_QWORD*)(v21 + 352) = 0;
      *(_QWORD*)(v21 + 360) = 0;
      *(_WORD*)(v21 + 360) = 0;
      *(_QWORD*)v21 = game_zview_CharacterAction_vtable;
      *(_QWORD*)(v21 + 8) = v2;
      v22 = *(_QWORD*)(v2 + 32);
      *(_QWORD*)(v2 + 32) = v21;
      v19 = v22;
      if (v22 == 0) {
      LABEL_33:
        v23 = *(_QWORD*)(v2 + 16);
        if ((*(_BYTE*)(v23 + 848) & 1) == 0) {
          if (*(_QWORD*)(*(_QWORD*)(v23 + 8) + 32LL) != 0) {
            v24 = 5;
          }
          else {
            v24 = 0;
          }
          *(_DWORD*)(v23 + 32) = v24;
          *(_BYTE*)(v23 + 36) = 1;
          if ((*(_BYTE*)(v23 + 112) & 1) == 0 &&
              (*(_BYTE*)(v23 + 113) & 1) != 0) {
            WaitRelease_cfa2a0(v23 + 16);
          }
        }
        goto LABEL_40;
      }
    LABEL_32:
      (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
      goto LABEL_33;
    }
  LABEL_40:
    v25 = 2;
    GameRoutine_ceecc0(v2 + 344, &v25);
    return (_QWORD*)HubCharacterNatives_cea6b0(v2);
  }
  return result;
}

_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v13;

  v3 = result[48];
  v4 = v3 & ~a2;
  if ((a3 & 1) != 0) {
    v4 = v3 | a2;
  }
  result[48] = v4;
  if (v4 != v3) {
    v5 = (_QWORD*)result[1];
    if (v5 != nullptr && v5[39] != 0) {
      v6 = v5[29];
      if (v6 != 0) {
        v7 = *(_DWORD*)(v6 + 340) & 0xFFFFFFFD |
             (2 * ((*(_DWORD*)(v5[2] + 384LL) & 2) != 0));
        *(_DWORD*)(v6 + 340) = v7;
        *(_DWORD*)(v6 + 340) = v7 & 0xFFFFFFFE |
                               ((*(_DWORD*)(v5[2] + 384LL) & 0x20) != 0) |
                               0x2000;
      }
    }
    v8 = result;
    result = (_QWORD*)GameRoutine_d0e440(result[2], 1);
    v9 = v8[48];
    v10 = v9 >> 29;
    v11 = (unsigned int)v9 >> 1;
    if ((v8[48] & 0x40000000LL) != 0) {
      v12 = 33;
    }
    else {
      v12 = 1;
    }
    LODWORD(v13) = (v12 | v10 & 0x10 | v11 & 6) << 16;
    if (v8[21] != 0) {
      v13 = (unsigned int)v13 | 0x80000;
    }
    else {
      v13 = (unsigned int)v13;
    }
    v8[55] = v13 + *((unsigned int*)v8 + 46);
  }
  return result;
}

_QWORD* HubCharacterNatives_ceccf0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;

  v1 = result[48];
  if ((v1 & 0x40000000) == 0) {
    return result;
  }
  v2 = (__int64)result;
  result[48] = v1 & 0xFFFFFFFFBFFFFFFFLL;
  v3 = (_QWORD*)result[1];
  if (v3 != nullptr && v3[39] != 0) {
    v4 = v3[29];
    if (v4 != 0) {
      v5 = *(_DWORD*)(v4 + 340) & 0xFFFFFFFD |
           (2 * ((*(_DWORD*)(v3[2] + 384LL) & 2) != 0));
      *(_DWORD*)(v4 + 340) = v5;
      *(_DWORD*)(v4 + 340) =
          v5 & 0xFFFFFFFE | ((*(_DWORD*)(v3[2] + 384LL) & 0x20) != 0) | 0x2000;
    }
  }
  GameRoutine_d0e440(result[2], 1);
  v6 = *(_QWORD*)(v2 + 384);
  v7 = v6 >> 29;
  v8 = (unsigned int)v6 >> 1;
  if ((*(_QWORD*)(v2 + 384) & 0x40000000LL) != 0) {
    v9 = 33;
  }
  else {
    v9 = 1;
  }
  LODWORD(v10) = (v9 | v7 & 0x10 | v8 & 6) << 16;
  if (*(_QWORD*)(v2 + 168) != 0) {
    v10 = (unsigned int)v10 | 0x80000;
  }
  else {
    v10 = (unsigned int)v10;
  }
  *(_QWORD*)(v2 + 440) = v10 + *(unsigned int*)(v2 + 184);
  v11 = *(_DWORD*)(v2 + 256) - 1;
  *(_DWORD*)(v2 + 256) = v11;
  if (v11 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v2 + 248) + 8LL))(v2 + 248);
    v11 = *(_DWORD*)(v2 + 256);
  }
  v12 = *(_QWORD*)(v2 + 32);
  if (v11 < 1) {
    if (v12 != 0) {
      *(_QWORD*)(v2 + 32) = 0;
    LABEL_20:
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    LABEL_21:
      v16 = *(_QWORD*)(v2 + 16);
      if ((*(_BYTE*)(v16 + 848) & 1) == 0) {
        v17 = *(_QWORD*)(*(_QWORD*)(v16 + 8) + 32LL) != 0 ? 5 : 0;
        *(_DWORD*)(v16 + 32) = v17;
        *(_BYTE*)(v16 + 36) = 1;
        if ((*(_BYTE*)(v16 + 112) & 1) == 0 &&
            (*(_BYTE*)(v16 + 113) & 1) != 0) {
          WaitRelease_cfa2a0(v16 + 16);
        }
      }
    }
  }
  else if (v12 == 0) {
    v13 = *(_QWORD*)(v2 + 16);
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         432, 16, 0);
    *(_DWORD*)(v14 + 168) = 1067030938;
    *(_BYTE*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 160) = game_zview_CharacterActionParam_vtable;
    *(_BYTE*)(v14 + 128) = 0;
    *(_BYTE*)(v14 + 144) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_BYTE*)(v14 + 48) = 0;
    *(_DWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 368) = 0;
    *(_QWORD*)(v14 + 376) = 0;
    *(_QWORD*)(v14 + 400) = 0;
    *(_QWORD*)(v14 + 408) = 0;
    *(_QWORD*)(v14 + 416) = 0;
    *(_QWORD*)(v14 + 336) = 0;
    *(_QWORD*)(v14 + 344) = 0;
    *(_QWORD*)(v14 + 320) = 0;
    *(_QWORD*)(v14 + 328) = 0;
    *(_QWORD*)(v14 + 304) = 0;
    *(_QWORD*)(v14 + 312) = 0;
    *(_QWORD*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 296) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 16) = v13;
    *(_QWORD*)(v14 + 384) = 0;
    *(_BYTE*)(v14 + 392) = 0;
    *(_QWORD*)(v14 + 352) = 0;
    *(_QWORD*)(v14 + 360) = 0;
    *(_WORD*)(v14 + 360) = 0;
    *(_QWORD*)v14 = game_zview_CharacterAction_vtable;
    *(_QWORD*)(v14 + 8) = v2;
    v15 = *(_QWORD*)(v2 + 32);
    *(_QWORD*)(v2 + 32) = v14;
    v12 = v15;
    if (v15 == 0) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v18 = *(_QWORD*)(v2 + 352);
  if (v18 != *(_QWORD*)(v2 + 344)) {
    *(_QWORD*)(v2 + 352) = v18 - 4;
  }
  return (_QWORD*)HubCharacterNatives_cea6b0(v2);
}

__int64 HubCharacterNatives_ced0c0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned int v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  _BYTE* v13;
  _QWORD* v14;
  __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  int v27;
  int v28;
  __int64* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned int v40;
  int v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  unsigned int v45;
  int v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned int v50;

  v3 = *(_QWORD*)(a1 + 384);
  *(_QWORD*)(a1 + 168) = a2;
  *(_DWORD*)(a1 + 188) = a3;
  v6 = a2;
  *(_QWORD*)(a1 + 384) = v3 | 0x2000000000LL;
  if ((v3 | 0x2000000000LL) != v3) {
    v7 = *(_QWORD**)(a1 + 8);
    if (v7 != nullptr && v7[39] != 0) {
      v8 = v7[29];
      if (v8 != 0) {
        v9 = *(_DWORD*)(v8 + 340) & 0xFFFFFFFD |
             (2 * ((*(_DWORD*)(v7[2] + 384LL) & 2) != 0));
        *(_DWORD*)(v8 + 340) = v9;
        *(_DWORD*)(v8 + 340) = v9 & 0xFFFFFFFE |
                               ((*(_DWORD*)(v7[2] + 384LL) & 0x20) != 0) |
                               0x2000;
      }
    }
    GameRoutine_d0e440(*(_QWORD*)(a1 + 16), 1);
    v3 = *(_QWORD*)(a1 + 384);
    v10 = v3 >> 29;
    if ((v3 & 0x40000000) != 0) {
      v11 = 33;
    }
    else {
      v11 = 1;
    }
    v12 = v11 | v10 & 0x10 | ((unsigned int)v3 >> 1) & 6;
    v6 = *(_QWORD*)(a1 + 168);
    LODWORD(v10) = v12 << 16;
    if (v6 != 0) {
      v10 = (unsigned int)v10 | 0x80000;
    }
    else {
      v10 = (unsigned int)v10;
    }
    *(_QWORD*)(a1 + 440) = v10 + *(unsigned int*)(a1 + 184);
  }
  v13 = *(_BYTE**)(*(_QWORD*)(v6 + 392) + 40LL);
  if (v13 != nullptr && *v13 != 0) {
    *(_QWORD*)(a1 + 384) = v3 | 0x80000;
    if ((v3 | 0x80000) != v3) {
      v14 = *(_QWORD**)(a1 + 8);
      if (v14 != nullptr && v14[39] != 0) {
        v15 = v14[29];
        if (v15 != 0) {
          v16 = *(_DWORD*)(v15 + 340) & 0xFFFFFFFD |
                (2 * ((*(_DWORD*)(v14[2] + 384LL) & 2) != 0));
          *(_DWORD*)(v15 + 340) = v16;
          *(_DWORD*)(v15 + 340) = v16 & 0xFFFFFFFE |
                                  ((*(_DWORD*)(v14[2] + 384LL) & 0x20) != 0) |
                                  0x2000;
        }
      }
      GameRoutine_d0e440(*(_QWORD*)(a1 + 16), 1);
      v17 = *(_QWORD*)(a1 + 384);
      v18 = v17 >> 29;
      v19 = (unsigned int)v17 >> 1;
      if ((*(_QWORD*)(a1 + 384) & 0x40000000LL) != 0) {
        v20 = 33;
      }
      else {
        v20 = 1;
      }
      LODWORD(v21) = (v20 | v18 & 0x10 | v19 & 6) << 16;
      if (*(_QWORD*)(a1 + 168) != 0) {
        v21 = (unsigned int)v21 | 0x80000;
      }
      else {
        v21 = (unsigned int)v21;
      }
      *(_QWORD*)(a1 + 440) = v21 + *(unsigned int*)(a1 + 184);
    }
  }
  GameRoutine_ced660(a1);
  v22 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v22 + 1944) == 0) {
    v23 = GameData_212ceb0;
    goto LABEL_37;
  }
  if (*(_BYTE*)(*(_QWORD*)(v22 + 400) + 96LL) != 1) {
    if (*(_BYTE*)GameData_212ceb0 == 0) {
      return GameRoutine_ced840(a1);
    }
  LABEL_40:
    if (*(_BYTE*)(a2 + 1944) != 0) {
      v24 = *GameData_212c998[0];
      if (*(_BYTE*)(*(_QWORD*)(a2 + 400) + 96LL) == 1) {
        v25 = GameData_212ceb0;
        if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v24 + 64) +
                                           8LL *
                                               *(unsigned __int8*)(a2 + 1944)) +
                                50LL) <=
                (unsigned int)*(unsigned __int8*)(a2 + 552) &&
            (game_GameModeData_instance_ == 0 ||
             (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) != 6) &&
            *(_QWORD*)(a2 + 408) == 0) {
          v25 = (__int64*)(a2 + 1944);
        }
        goto LABEL_50;
      }
    }
    else {
      v24 = *GameData_212c998[0];
    }
    v25 = GameData_212ceb0;
  LABEL_50:
    v26 = *(_QWORD*)(*(_QWORD*)(v24 + 64) + 8LL * *(unsigned __int8*)v25);
    v27 = *(unsigned __int8*)(v26 + 49);
    if (*(_BYTE*)(v26 + 49) != 0) {
      v28 = 0;
      v29 = GameData_212eba8[0];
      do {
        v35 = GameRoutine_cf1500(*v29, 0);
        HubCharacterNatives_ceca80((_QWORD*)v35, 0x1000000000LL, 1);
        HubCharacterNatives_cef5e0(a1, v35);
        v36 = *(_QWORD*)(v35 + 600);
        *(_DWORD*)(v35 + 176) = v28;
        *(_BYTE*)(v35 + 180) = 1;
        *(_DWORD*)(v35 + 188) = *(_DWORD*)(v36 + 188);
        v37 = *(_QWORD*)(v35 + 384);
        *(_QWORD*)(v35 + 384) = v37 | 2;
        if ((v37 | 2) != v37) {
          v38 = *(_QWORD**)(v35 + 8);
          if (v38 != nullptr && v38[39] != 0) {
            v39 = v38[29];
            if (v39 != 0) {
              v40 = *(_DWORD*)(v39 + 340) & 0xFFFFFFFD |
                    (2 * ((*(_DWORD*)(v38[2] + 384LL) & 2) != 0));
              *(_DWORD*)(v39 + 340) = v40;
              *(_DWORD*)(v39 + 340) =
                  v40 & 0xFFFFFFFE |
                  ((*(_DWORD*)(v38[2] + 384LL) & 0x20) != 0) | 0x2000;
            }
          }
          GameRoutine_d0e440(*(_QWORD*)(v35 + 16), 1);
          v37 = *(_QWORD*)(v35 + 384);
          if ((v37 & 0x40000000) != 0) {
            v41 = 33;
          }
          else {
            v41 = 1;
          }
          LODWORD(v42) =
              (v41 | (v37 >> 29) & 0x10 | ((unsigned int)v37 >> 1) & 6) << 16;
          if (*(_QWORD*)(v35 + 168) != 0) {
            v42 = (unsigned int)v42 | 0x80000;
          }
          else {
            v42 = (unsigned int)v42;
          }
          *(_QWORD*)(v35 + 440) = v42 + *(unsigned int*)(v35 + 184);
        }
        *(_QWORD*)(v35 + 384) = v37 | 0x40;
        if ((v37 | 0x40) != v37) {
          v43 = *(_QWORD**)(v35 + 8);
          if (v43 != nullptr && v43[39] != 0) {
            v44 = v43[29];
            if (v44 != 0) {
              v45 = *(_DWORD*)(v44 + 340) & 0xFFFFFFFD |
                    (2 * ((*(_DWORD*)(v43[2] + 384LL) & 2) != 0));
              *(_DWORD*)(v44 + 340) = v45;
              *(_DWORD*)(v44 + 340) =
                  v45 & 0xFFFFFFFE |
                  ((*(_DWORD*)(v43[2] + 384LL) & 0x20) != 0) | 0x2000;
            }
          }
          GameRoutine_d0e440(*(_QWORD*)(v35 + 16), 1);
          v37 = *(_QWORD*)(v35 + 384);
          if ((v37 & 0x40000000) != 0) {
            v46 = 33;
          }
          else {
            v46 = 1;
          }
          LODWORD(v47) =
              (v46 | (v37 >> 29) & 0x10 | ((unsigned int)v37 >> 1) & 6) << 16;
          if (*(_QWORD*)(v35 + 168) != 0) {
            v47 = (unsigned int)v47 | 0x80000;
          }
          else {
            v47 = (unsigned int)v47;
          }
          *(_QWORD*)(v35 + 440) = v47 + *(unsigned int*)(v35 + 184);
        }
        *(_QWORD*)(v35 + 384) = v37 | 0x2000000000LL;
        if ((v37 | 0x2000000000LL) != v37) {
          v48 = *(_QWORD**)(v35 + 8);
          if (v48 != nullptr && v48[39] != 0) {
            v49 = v48[29];
            if (v49 != 0) {
              v50 = *(_DWORD*)(v49 + 340) & 0xFFFFFFFD |
                    (2 * ((*(_DWORD*)(v48[2] + 384LL) & 2) != 0));
              *(_DWORD*)(v49 + 340) = v50;
              *(_DWORD*)(v49 + 340) =
                  v50 & 0xFFFFFFFE |
                  ((*(_DWORD*)(v48[2] + 384LL) & 0x20) != 0) | 0x2000;
            }
          }
          GameRoutine_d0e440(*(_QWORD*)(v35 + 16), 1);
          v30 = *(_QWORD*)(v35 + 384);
          v31 = v30 >> 29;
          v32 = (unsigned int)v30 >> 1;
          if ((*(_QWORD*)(v35 + 384) & 0x40000000LL) != 0) {
            v33 = 33;
          }
          else {
            v33 = 1;
          }
          LODWORD(v34) = (v33 | v31 & 0x10 | v32 & 6) << 16;
          if (*(_QWORD*)(v35 + 168) != 0) {
            v34 = (unsigned int)v34 | 0x80000;
          }
          else {
            v34 = (unsigned int)v34;
          }
          *(_QWORD*)(v35 + 440) = v34 + *(unsigned int*)(v35 + 184);
        }
        GameRoutine_ced660(v35);
        ++v28;
      } while (v27 != v28);
    }
    return GameRoutine_ced840(a1);
  }
  v23 = GameData_212ceb0;
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                     8LL * *(unsigned __int8*)(v22 + 1944)) +
                          50LL) >
          (unsigned int)*(unsigned __int8*)(v22 + 552) ||
      game_GameModeData_instance_ != 0 &&
          (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) == 6) {
  LABEL_37:
    if (*(_BYTE*)v23 == 0) {
      return GameRoutine_ced840(a1);
    }
    goto LABEL_40;
  }
  if (*(_QWORD*)(v22 + 408) == 0) {
    v23 = (__int64*)(v22 + 1944);
  }
  if (*(_BYTE*)v23 != 0) {
    goto LABEL_40;
  }
  return GameRoutine_ced840(a1);
}

__int64 HubCharacterNatives_cee710(__int64 a1, unsigned __int32 a2, __int64 a3,
                                   __int64 a4, __int64 a5, float a6)
{

#pragma clang fp contract(off)
  int v6;
  __int64 v8;
  int v9;
  float v10;
  __int64 result;
  int v12;
  __int64 v13;
  unsigned __int32 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  struct {
    float32x2_t v18[2];
    int v19;
    char v20;
    char gap53_[3];
    int v21;
    char v22;
    char gap61_[3];
    char v23;
    char gap65_[3];
    char v24;
    char gap69_[3];
    float v25;
    float v26;
    _BYTE v27[7];
    char gap87_[1];
    __int64 v28;
  } v18_;

  v6 = *(unsigned __int8*)(a1 + 272);
  *(_DWORD*)(a1 + 280) = 0;
  if (v6 == 1) {
    *(_BYTE*)(a1 + 272) = 0;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 344LL);
  if (*(_BYTE*)(v8 + 345) != 0) {
    v9 = *(unsigned __int8*)(v8 + 88);
    *(_BYTE*)(v8 + 345) = 0;
    if (v9 == 1) {
      *(_BYTE*)(v8 + 88) = 0;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v15 = a6;
    v13 = a3;
    v16 = a4;
    v17 = a5;
    v14 = a2;
    v12 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8);
    a6 = v15;
    a4 = v16;
    a5 = v17;
    a2 = v14;
    a3 = v13;
    if (v12 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
      a6 = v15;
      a4 = v16;
      a5 = v17;
      a2 = v14;
      a3 = v13;
    }
  }
  *(_DWORD*)v18_.v27 = 0;
  v10 = *(float*)&a5;
  LANES64(v18_.v18[0]).n64_u32[0] = a2;
  v18_.v19 = a3;
  v18_.v23 = 0;
  if ((a5 & 0x100000000LL) == 0) {
    v10 = 0x1.0000000000000p+0f;
  }
  v18_.v24 = 0;
  v18_.v28 = 0;
  *(_DWORD*)&v18_.v27[3] = 65537;
  v18_.v21 = a4;
  LANES64(v18_.v18[1]).n64_u64[0] = GameData_21a60e0;
  v18_.v25 = v10;
  v18_.v26 = a6;
  *(_WORD*)&v18_.v27[1] = 257;
  v18_.v22 = BYTE4(a4);
  v18_.v20 = BYTE4(a3);
  result = CharacterModel_d198c0(*(_QWORD**)(*(_QWORD*)(a1 + 8) + 344LL),
                                 v18_.v18, 1, 0);
  *(_QWORD*)(a1 + 264) = result;
  *(_BYTE*)(a1 + 272) = 1;
  return result;
}

__int64 HubCharacterNatives_cee860(__int64 a1, unsigned __int32 a2, __int64 a3)
{

#pragma clang fp contract(off)
  int v3;
  __int64 v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 result;
  int v10;
  unsigned __int32 v11;
  __int64 v12;
  struct {
    float32x2_t v13[2];
    int v14;
    char v15;
    char gap37_[3];
    char v16;
    char gap41_[3];
    char v17;
    char gap45_[3];
    char v18;
    char gap49_[3];
    char v19;
    char gap53_[3];
    __int64 v20;
  } v13_;
  struct {
    _DWORD v21[2];
    __int64 v22;
  } v21_;

  v3 = *(unsigned __int8*)(a1 + 272);
  *(_DWORD*)(a1 + 280) = 0;
  if (v3 == 1) {
    *(_BYTE*)(a1 + 272) = 0;
  }
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 344LL);
  if (*(_BYTE*)(v5 + 345) != 0) {
    v6 = *(unsigned __int8*)(v5 + 88);
    *(_BYTE*)(v5 + 345) = 0;
    if (v6 == 1) {
      *(_BYTE*)(v5 + 88) = 0;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a3;
    v11 = a2;
    v10 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8);
    a2 = v11;
    a3 = v12;
    if (v10 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
      a2 = v11;
      a3 = v12;
    }
  }
  v7 = *(_QWORD*)(a1 + 8);
  memset(v21_.v21, 0, 7);
  LANES64(v13_.v13[0]).n64_u32[0] = a2;
  v13_.v14 = a3;
  v8 = *(_QWORD**)(v7 + 344);
  v13_.v16 = 0;
  v13_.v17 = 0;
  v13_.v18 = 0;
  v13_.v19 = 0;
  v21_.v22 = 0;
  BYTE1(v21_.v21[1]) = 1;
  LANES64(v13_.v13[1]).n64_u64[0] = GameData_21a60e0;
  v13_.v20 = 0x3F8000003F800000LL;
  v21_.v21[0] = 16843009;
  v13_.v15 = BYTE4(a3);
  result = CharacterModel_d198c0(v8, v13_.v13, 1, 0);
  *(_QWORD*)(a1 + 264) = result;
  *(_BYTE*)(a1 + 272) = 1;
  return result;
}

__int64 HubCharacterNatives_cee990(__int64 a1, unsigned __int32 a2, int a3,
                                   __int64 a4, __int64 a5, __int64 a6, float a7)
{

#pragma clang fp contract(off)
  int v7;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  float v13;
  _QWORD* v14;
  __int64 result;
  int v16;
  int v17;
  __int64 v18;
  unsigned __int32 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  struct {
    float32x2_t v23[2];
    int v24;
    char v25;
    char gap69_[3];
    int v26;
    char v27;
    char gap77_[3];
    int v28;
    char v29;
    char gap85_[3];
    float v30;
    float v31;
    _BYTE v32[7];
    char gap103_[1];
    __int64 v33;
  } v23_;

  v7 = *(unsigned __int8*)(a1 + 272);
  *(_DWORD*)(a1 + 280) = 0;
  if (v7 == 1) {
    *(_BYTE*)(a1 + 272) = 0;
  }
  v9 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 344LL);
  if (*(_BYTE*)(v9 + 345) != 0) {
    v10 = *(unsigned __int8*)(v9 + 88);
    *(_BYTE*)(v9 + 345) = 0;
    if (v10 == 1) {
      *(_BYTE*)(v9 + 88) = 0;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v20 = a6;
    v17 = a3;
    v21 = a7;
    v18 = a4;
    v22 = a5;
    v19 = a2;
    v16 = __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8);
    a7 = v21;
    a2 = v19;
    a5 = v22;
    a4 = v18;
    a3 = v17;
    a6 = v20;
    if (v16 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
      a7 = v21;
      a2 = v19;
      a5 = v22;
      a4 = v18;
      a3 = v17;
      a6 = v20;
    }
  }
  LOBYTE(v23_.v28) = 0;
  v23_.v29 = 0;
  v23_.v33 = 0;
  *(_DWORD*)v23_.v32 = 0;
  LANES64(v23_.v23[0]).n64_u32[0] = a2;
  v23_.v26 = a5;
  v23_.v24 = a4;
  v23_.v31 = a7;
  LANES64(v23_.v23[1]).n64_u64[0] = GameData_21a60e0;
  v23_.v27 = BYTE4(a5);
  v23_.v25 = BYTE4(a4);
  *(_DWORD*)&v23_.v32[3] = 16777217;
  if (a3 == 2) {
    v23_.v32[5] = 1;
  }
  else if (a3 == 1) {
    v11 = a6;
    v12 = GameRoutine_d2cec0_alt1(-1511520286);
    a6 = v11;
    v23_.v28 = v12 - 1;
    v23_.v29 = 1;
  }
  v13 = *(float*)&a6;
  if ((a6 & 0x100000000LL) == 0) {
    v13 = 0x1.0000000000000p+0f;
  }
  v14 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 344LL);
  v23_.v30 = v13;
  result = CharacterModel_d198c0(v14, v23_.v23, 1, 0);
  *(_QWORD*)(a1 + 264) = result;
  *(_BYTE*)(a1 + 272) = 1;
  return result;
}

__int64 HubCharacterNatives_ceebc0(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_DWORD*)(a1 + 376);
  result = *(_QWORD*)(a1 + 56);
  if ((v1 & 0xFFFFFFFE) == 4) {
    GameRoutine_fff7f0(result);
    return GameRoutine_ffe9d0(*(_QWORD*)(a1 + 64));
  }
  else {
    if (*(_QWORD*)(result + 16) != 0) {
      v4 = result;
      result = GameRoutine_fffa20();
      v5 = *(_QWORD*)(v4 + 24);
      *(_QWORD*)(v4 + 16) = 0;
      *(_QWORD*)(v4 + 24) = 0;
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        result = std___1___shared_weak_count___release_weak(v5);
      }
    }
    v6 = *(_QWORD*)(a1 + 64);
    if (*(_QWORD*)(v6 + 16) != 0) {
      result = GameRoutine_ffed80(*(_QWORD*)(a1 + 64));
      v7 = *(_QWORD*)(v6 + 24);
      *(_QWORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 24) = 0;
      if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

__int64 HubCharacterNatives_cf66e0(__int64 a1)
{
  __int64 result;
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 i;
  int v7;
  int v8;
  __int64 v9;

  if (*(_BYTE*)(a1 + 145) != 1) {
    return 0;
  }
  result = HubCharacterNatives_cf7940(a1);
  if (result != 0) {
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec70,
                                    memory_order_acquire);
    v3 = GameData_212ec68;
    if ((explicit & 1) == 0) {
      v9 = result;
      v8 = __cxa_guard_acquire(GameData_212ec70);
      v3 = GameData_212ec68;
      result = v9;
      if (v8 != 0) {
        *GameData_212ec68 = wld_Crc32(0, "HitboxModule", 12);
        __cxa_guard_release(GameData_212ec70);
        v3 = GameData_212ec68;
        result = v9;
      }
    }
    v4 = *v3;
    v5 = *(_QWORD*)(result + 512);
    for (i = v5; i != *(_QWORD*)(result + 504); i -= 16) {
      v7 = *(_DWORD*)(i - 16);
      v5 -= 16;
      if (v7 == v4) {
        if (*(_QWORD*)(result + 512) != v5) {
          return *(_QWORD*)(v5 + 8);
        }
        return 0;
      }
    }
    return 0;
  }
  return result;
}

__int64 HubCharacterNatives_cf7940(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  char* v6;
  char* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;

  result = *(_QWORD*)(a1 + 312);
  if (result != 0) {
    return result;
  }
  v3 = *(_QWORD**)(a1 + 16);
  v4 = (_QWORD*)v3[21];
  if (v4 == nullptr) {
    v10 = v3[75];
    if (v10 != 0) {
      v11 = *(_QWORD**)(v10 + 168);
      if (v11 != nullptr) {
        if (v11[29] != 0) {
          if (v11[33] == 0) {
            return 0;
          }
          v13 = (char*)v11[34];
          v12 = (char*)v11[35];
          if (v11[31] - v11[30] != v12 - v13) {
            return 0;
          }
          while (v13 != v12) {
            v14 = *(_QWORD*)v13;
            v13 += 8;
            if ((*(_BYTE*)(v14 + 342) & 1) == 0) {
              return 0;
            }
          }
        }
        v15 = v3[22];
        if ((v15 & 0x100000000LL) != 0) {
          v17 = v11 + 30;
          v16 = v11[30];
          v15 = (int)v15;
          if ((int)v15 < (unsigned __int64)((v17[1] - v16) >> 3)) {
            return *(_QWORD*)(v16 + 8 * v15);
          }
        }
      }
    }
    else {
      v18 = v3[24];
      if (v18 != 0) {
        v19 = *(_QWORD*)(v18 + 16);
        if (v19 != 0 && (*(_BYTE*)(v19 + 342) & 1) != 0) {
          return *(_QWORD*)(v19 + 8);
        }
      }
    }
    return 0;
  }
  result = v4[29];
  if (result == 0) {
    return result;
  }
  if (v4[33] == 0) {
    return 0;
  }
  v5 = v4[31] - v4[30];
  v8 = v4 + 34;
  v7 = (char*)v4[34];
  v6 = (char*)v8[1];
  if (v5 != v6 - v7) {
    return 0;
  }
  while (v7 != v6) {
    v9 = *(_QWORD*)v7;
    v7 += 8;
    if ((*(_BYTE*)(v9 + 342) & 1) == 0) {
      return 0;
    }
  }
  return result;
}

__int64 HubCharacterNatives_cf7b40(__int64 result, char a2)
{
  __int64 v2;
  __int64* v3;
  int v4;
  int v5;
  char v6;
  char v7;
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;

  if (*(_BYTE*)(result + 224) != (a2 & 1)) {
    v2 = *(_QWORD*)(result + 232);
    *(_BYTE*)(result + 224) = a2 & 1;
    if (v2 != 0) {
      if ((a2 & 1) != 0 && (*(_QWORD*)(result + 264) & 0x180000000LL) == 0) {
        v3 = *(__int64**)(v2 + 104);
        v4 = (*(_QWORD*)(result + 264) & 1LL) == 0;
        v5 = *((unsigned __int8*)v3 + 16);
        if (v4 == v5) {
          return GameRoutine_d1d160(*(_QWORD*)(result + 344));
        }
      }
      else {
        v3 = *(__int64**)(v2 + 104);
        if ((v3[2] & 1) == 0) {
          return GameRoutine_d1d160(*(_QWORD*)(result + 344));
        }
        v4 = 0;
        v5 = 1;
      }
      if (v5 != v4) {
        v6 = *((_BYTE*)v3 + 17);
        *((_BYTE*)v3 + 16) = v4;
        if (v4 != 0) {
          v7 = 0;
        }
        else {
          v7 = 2;
        }
        *((_BYTE*)v3 + 17) = v6 & 0xFD | v7;
        *((_BYTE*)v3 + 18) = *((_BYTE*)v3 + 18) & 0xFD | v7;
        *((_BYTE*)v3 + 19) = *((_BYTE*)v3 + 19) & 0xFD | v7;
        *((_BYTE*)v3 + 20) = *((_BYTE*)v3 + 20) & 0xFD | v7;
        v8 = (_BYTE*)v3[1];
        v8[632] = 0;
        v8[664] = 0;
        v8[696] = 0;
        v8[728] = 0;
        v9 = *v3;
        if (v4 != 0) {
          v10 = result;
          (*(void (**)(__int64*))(v9 + 64))(v3);
          v11 = (_BYTE*)v3[1];
          if (v11[300] != 3 || v11[301] != 3) {
            result = v10;
            if (v11[302] != 1) {
              return GameRoutine_d1d160(*(_QWORD*)(result + 344));
            }
          }
          v9 = *v3;
        }
        else {
          v10 = result;
        }
        (*(void (**)(__int64*))(v9 + 72))(v3);
        result = v10;
      }
    }
    return GameRoutine_d1d160(*(_QWORD*)(result + 344));
  }
  return result;
}

__int64 HubCharacterNatives_cf7c90(__int64 result, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  int v7;
  int v8;
  char v9;
  char v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v16;

  v3 = *(_QWORD*)(result + 264);
  v4 = v3 & ~a2;
  if ((a3 & 1) != 0) {
    v4 = v3 | a2;
  }
  *(_QWORD*)(result + 264) = v4;
  if (v3 != v4) {
    v5 = *(_QWORD*)(result + 232);
    if (v5 != 0) {
      if ((*(_BYTE*)(result + 224) & 1) != 0 && (v4 & 0x180000000LL) == 0) {
        v6 = *(__int64**)(v5 + 104);
        v7 = (v4 & 1) == 0;
        v8 = *((unsigned __int8*)v6 + 16);
        if (v7 == v8) {
          goto LABEL_24;
        }
      }
      else {
        v6 = *(__int64**)(v5 + 104);
        if ((v6[2] & 1) == 0) {
          goto LABEL_24;
        }
        v7 = 0;
        v8 = 1;
      }
      if (v8 != v7) {
        v9 = *((_BYTE*)v6 + 17);
        *((_BYTE*)v6 + 16) = v7;
        if (v7 != 0) {
          v10 = 0;
        }
        else {
          v10 = 2;
        }
        *((_BYTE*)v6 + 17) = v9 & 0xFD | v10;
        *((_BYTE*)v6 + 18) = *((_BYTE*)v6 + 18) & 0xFD | v10;
        *((_BYTE*)v6 + 19) = *((_BYTE*)v6 + 19) & 0xFD | v10;
        *((_BYTE*)v6 + 20) = *((_BYTE*)v6 + 20) & 0xFD | v10;
        v11 = (_BYTE*)v6[1];
        v11[632] = 0;
        v11[664] = 0;
        v11[696] = 0;
        v11[728] = 0;
        v12 = *v6;
        if (v7 != 0) {
          v13 = result;
          (*(void (**)(__int64*))(v12 + 64))(v6);
          v14 = (_BYTE*)v6[1];
          if (v14[300] != 3 || v14[301] != 3) {
            result = v13;
            if (v14[302] != 1) {
              goto LABEL_24;
            }
          }
          v12 = *v6;
        }
        else {
          v13 = result;
        }
        (*(void (**)(__int64*))(v12 + 72))(v6);
        result = v13;
      }
    }
  LABEL_24:
    v16 = result;
    GameRoutine_d1d160(*(_QWORD*)(result + 344));
    return HubCharacterNatives_ceebc0(*(_QWORD*)(v16 + 16));
  }
  return result;
}

bool HubCharacterNatives_cf7e00(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  char v6;
  int v8;

  if (*(_BYTE*)(a1 + 145) != 1) {
    return true;
  }
  if (HubCharacterNatives_cf7940(a1) == 0) {
    return true;
  }
  v2 = 1257611790;
  v3 = *(_DWORD*)(*(_QWORD*)(a1 + 344) + 360LL);
  v4 = *(_QWORD*)(a1 + 16);
  if ((*(_BYTE*)(v4 + 385) & 0x40) != 0) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 468);
  }
  if ((v5 & 0x100000000LL) != 0) {
    goto LABEL_12;
  }
  v6 = GameRoutine_d2d4e0(v3);
  LODWORD(v5) = 1257611790;
  if ((v6 & 1) != 0) {
    goto LABEL_12;
  }
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 384LL) & 0x10) == 0) {
    if ((*(_BYTE*)(a1 + 216) & 2) != 0) {
      LODWORD(v5) = 1669996436;
    }
    else {
      LODWORD(v5) = -574916402;
    }
  LABEL_12:
    if ((_DWORD)v5 == v3) {
      return true;
    }
    goto LABEL_16;
  }
  if (v3 == -1101902990) {
    return true;
  }

LABEL_16:
  if ((GameRoutine_d2d4e0(*(unsigned int*)(*(_QWORD*)(a1 + 344) + 360LL)) &
       1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 384LL) & 0x10) != 0) {
      v2 = -1101902990;
    }
    else if ((*(_BYTE*)(a1 + 216) & 2) != 0) {
      v2 = 1669996436;
    }
    else {
      v2 = -574916402;
    }
  }
  v8 = GameRoutine_d2d5e0(v2);
  return v3 + 519251657 < 3 || v8 == v3;
}

bool HubCharacterNatives_cf7f30(__int64 a1, int a2)
{
  __int64 v2;
  unsigned int v5;
  __int64 v6;
  char v7;

  v2 = *(_QWORD*)(a1 + 16);
  v5 = 1257611790;
  if ((*(_BYTE*)(v2 + 385) & 0x40) != 0) {
    v6 = 0;
  }
  else {
    v6 = *(_QWORD*)(v2 + 468);
  }
  if ((v6 & 0x100000000LL) == 0) {
    v7 = GameRoutine_d2d4e0(*(unsigned int*)(*(_QWORD*)(a1 + 344) + 360LL));
    LODWORD(v6) = 1257611790;
    if ((v7 & 1) == 0) {
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 384LL) & 0x10) != 0) {
        if (a2 == -1101902990) {
          return true;
        }
        goto LABEL_13;
      }
      if ((*(_BYTE*)(a1 + 216) & 2) != 0) {
        LODWORD(v6) = 1669996436;
      }
      else {
        LODWORD(v6) = -574916402;
      }
    }
  }
  if ((_DWORD)v6 == a2) {
    return true;
  }

LABEL_13:
  if ((GameRoutine_d2d4e0(*(unsigned int*)(*(_QWORD*)(a1 + 344) + 360LL)) &
       1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 16) + 384LL) & 0x10) != 0) {
      v5 = -1101902990;
    }
    else if ((*(_BYTE*)(a1 + 216) & 2) != 0) {
      v5 = 1669996436;
    }
    else {
      v5 = -574916402;
    }
  }
  return (unsigned int)GameRoutine_d2d5e0(v5) == a2;
}

__int64 HubCharacterNatives_df4cc0(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;

  result = a1[7];
  if (result != 0) {
    v3 = std___1___shared_weak_count_lock(result);
    if (v3 != 0) {
      v4 = v3;
      v5 = a1[6];
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    result = a1[7];
    a1[6] = 0;
    a1[7] = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
  }
  else {
    a1[6] = 0;
    a1[7] = 0;
  }
  v6 = a1[3];
  for (i = a1[4]; i != v6; i -= 16) {
    v8 = *(_QWORD*)(i - 8);
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak(v8);
    }
  }
  a1[4] = v6;
  return result;
}

__int64 HubCharacterNatives_df4e10(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if (*(_BYTE*)(result + 9) != 0 &&
      *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 1 &&
      *(_QWORD*)(result + 32) != *(_QWORD*)(result + 24)) {
    if (*(_QWORD*)(result + 56) != 0 &&
        (v1 = result,
         v2 = std___1___shared_weak_count_lock(*(_QWORD*)(result + 56)),
         result = v1, v2 != 0)) {
      if (*(_QWORD*)(v1 + 48) == 0) {
        result = HubCharacterNatives_df4fc0(v1, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        return std___1___shared_weak_count___release_weak(v2);
      }
    }
    else {
      return HubCharacterNatives_df4fc0(result, 0);
    }
  }
  return result;
}

__int64 HubCharacterNatives_df4ed0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      if (v3 != 0 && *(_BYTE*)(a1 + 9) != 0 &&
          *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 1) {
        v4 = result;
        (*(void (**)(_QWORD))(*(_QWORD*)v3 + 8LL))(*(_QWORD*)(a1 + 48));
        v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
        result = v4;
        if ((v5 & 1) != 0) {
          if (*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24) < 0x11u) {
            HubCharacterNatives_df4cc0((_QWORD*)a1);
          }
          else {
            HubCharacterNatives_df4fc0(a1, 1);
          }
          result = v4;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v6 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return result;
}

__int64 HubCharacterNatives_df4fc0(_QWORD* a1, int a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 result;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = a1[7];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v6 = v5;
      v7 = a1[6];
      if (v7 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  if (a2 >= 1) {
    v8 = (__int64*)a1[4];
    v9 = 0;
    while (1) {
      v10 = (__int64*)a1[3];
      v11 = v10 + 2;
      if (v10 + 2 != v8) {
        break;
      }
      v12 = v8;
      v8 = (__int64*)a1[3];
      if (v10 != v12) {
        goto LABEL_20;
      }
    LABEL_9:
      ++v9;
      a1[4] = v8;
      if (v9 == a2) {
        goto LABEL_23;
      }
    }
    do {
      v14 = *v11;
      v13 = v11[1];
      v15 = *(v11 - 1);
      *v11 = 0;
      v11[1] = 0;
      *(v11 - 2) = v14;
      *(v11 - 1) = v13;
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
      }
      v11 += 2;
    } while (v11 != v8);
    v12 = (__int64*)a1[4];
    v8 = v11 - 2;
    if (v11 - 2 == v12) {
      goto LABEL_9;
    }
    do {
    LABEL_20:
      v16 = *(v12 - 1);
      if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
      v12 -= 2;
    } while (v12 != v8);
    goto LABEL_9;
  }

LABEL_23:
  v17 = (__int64*)a1[3];
  v19 = *v17;
  result = v17[1];
  if (result != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                              memory_order_relaxed);
  }
  v20 = a1[7];
  a1[6] = v19;
  a1[7] = result;
  if (v20 != 0) {
    std___1___shared_weak_count___release_weak(v20);
    result = a1[7];
  }
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v21 = result;
      result = a1[6];
      if (result != 0) {
        result = (**(__int64 (***)(__int64))result)(result);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        return std___1___shared_weak_count___release_weak(v21);
      }
    }
  }
  return result;
}

__int64 HubCharacterNatives_df5530(__int64 a1, int a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;

  *(_BYTE*)(a1 + 8) = 1;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      80, 16, 0);
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 48) = a1;
  *(_DWORD*)(v6 + 56) = a2;
  *(_DWORD*)(v6 + 60) = 0;
  *(_QWORD*)v6 = GameData_1fe18f0;
  *(_DWORD*)(v6 + 40) = 2;
  *(_QWORD*)(v6 + 32) = game_hub_CharacterBehaviorStack_StackEvasion_vtable;
  v7 = *a3;
  v8 = a3[1];
  v12 = v6 + 32;
  v13 = v6;
  *(_QWORD*)(v6 + 64) = v7;
  *(_QWORD*)(v6 + 72) = v8;
  v9 = *(_QWORD*)(a1 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  HubCharacterNatives_df5660(a1 + 24, v9, &v12);
  v10 = v13;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  result = HubCharacterNatives_df4fc0((_QWORD*)a1, 0);
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 HubCharacterNatives_df5c00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_BYTE*)(a1 + 9) = 0;
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 48);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
    v6 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 56) = 0;
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    *(_QWORD*)(a1 + 48) = 0;
    *(_QWORD*)(a1 + 56) = 0;
  }
  *(_BYTE*)(a1 + 9) = 1;
  return HubCharacterNatives_df4e10(a1);
}

__int64 HubCharacterNatives_108c2a0(_BYTE* a1)
{
  int v1;
  unsigned __int8* v2;
  int v3;
  int v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;

  v1 = (unsigned __int8)*a1;
  if (*a1 != 0) {
    v2 = a1 + 1;
    v3 = 0;
    do {
      v3 = v1 - v3 + 32 * v3;
      v4 = *v2++;
      v1 = v4;
    } while (v4 != 0);
  }
  else {
    v3 = 0;
  }
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    return 639;
  }
  v6 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v7 = v3;
    if (GameData_22356f8 <= (unsigned __int64)v3) {
      v7 = v3 % (unsigned __int64)GameData_22356f8;
    }
  }
  else {
    v7 = v6 & v3;
  }
  v8 = *(__int64***)(GameData_22356f0 + 8 * v7);
  if (v8 == nullptr) {
    return 639;
  }
  v9 = *v8;
  if (v9 == nullptr) {
    return 639;
  }
  if ((GameData_22356f8 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == v3) {
        if (*((_DWORD*)v9 + 4) == v3) {
          return *((unsigned int*)v9 + 5);
        }
      }
      else if ((v11 & v6) != v7) {
        return 639;
      }
      v9 = (__int64*)*v9;
      if (v9 == nullptr) {
        return 639;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= GameData_22356f8) {
      v10 %= (unsigned __int64)GameData_22356f8;
    }
    if (v10 != v7) {
      return 639;
    }
  LABEL_19:
    v9 = (__int64*)*v9;
    if (v9 == nullptr) {
      return 639;
    }
  }
  if (*((_DWORD*)v9 + 4) != v3) {
    goto LABEL_19;
  }
  return *((unsigned int*)v9 + 5);
}

#pragma GCC visibility pop
