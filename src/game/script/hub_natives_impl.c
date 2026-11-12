#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameManager_a2e490(__int64, __int64, char);
__attribute__((swiftcall)) void GameRoutine_db2180(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_db4b40(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void GameRoutine_e1be60(PSEUDO_X8, _QWORD, _QWORD);
_QWORD* HandlePtr_cb34a0(__int64, __int64*);
__int64 GameHubData_dbd8e0(_QWORD, _QWORD);
__int64 GameRoutine_145dba0(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_715c30(_QWORD);
__int64 GameRoutine_80fb70(_QWORD);
__int64 GameRoutine_89aac0(_QWORD, _QWORD);
__int64 GameRoutine_d6f4f0(_QWORD);
__int64 GameRoutine_d6f8d0(_QWORD);
__int64 GameRoutine_d85af0(void);
__int64 GameRoutine_d85ce0(_QWORD);
__int64 GameRoutine_d9d0e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dbca90(_QWORD);
__int64 GameRoutine_ee2600(_QWORD, _QWORD);
__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f979a0(_QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitItem_6e8800(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_a2c9c0(__int64, __int64, __n128 result);
__n128 snd_Fade_Destroy_Fade(_QWORD);
bool GameRoutine_c13be0(__int64, __int64, __int64, __int64, char);
extern __int64 (*GameData_1fd4b98[7])();
extern __int64 GameData_212c638;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dbd0[6];
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_212dbe8[3];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_212dc68;
extern __int64 GameData_212ec00;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca028;
extern __int64 GameData_21f3c90;
extern __int64 GameData_21f3ce0;
extern __int64 GameData_21f3cf0;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220d618;
extern __int64 GameData_22127a8;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_talk_g_select_menu;
extern __int64* as_g_script_manager_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
extern char* GameData_212ec08;
extern char** GameData_212fbf8;
void GameManager_a2f5a0(__int64, long double);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(_QWORD);
_QWORD* HubNatives_cbf330(char a1);
_QWORD* HubNatives_cbf460();
__int64 HubNatives_cbfa70_alt1() __asm__("HubNatives_cbfa70");
_QWORD* HubNatives_cbfb20(unsigned __int8* a1, __int64 a2);
void HubNatives_cc0630_alt1() __asm__("HubNatives_cc0630");
__n128 HubNatives_cc0760_alt1() __asm__("HubNatives_cc0760");
void HubNatives_cc0970(char a1);
_QWORD* HubNatives_cc2480();
bool HubNatives_cc3660(__int64 a1);
unsigned __int64 HubNatives_cc4ce0(__int64 a1);
__int64 HubNatives_cc53f0();
__int64 HubNatives_cc5df0(unsigned __int8* a1);
_QWORD* HubNatives_cc8df0(__int64 a1);
__int64 HubNatives_ccaad0(char* a1);
_QWORD* HubNatives_ccaff0();
_QWORD* HubNatives_ccb180();
__int64 HubNatives_ccb310(__int64 a1);
unsigned __int64 HubNatives_ccb460(__int64 a1);
_QWORD* HubNatives_ccba40(_QWORD* result, __int64* a2);
__int64 HubNatives_ccbf80(__int64 result);
_QWORD* GameRoutine_ccc9b0(_QWORD* result, _QWORD*);
_QWORD* game_hub_e1cee0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result,
                                           __int16*);
__attribute__((swiftcall)) void LocatorDispos_db2ac0(PSEUDO_X8,
                                                     unsigned __int8* result);
__attribute__((swiftcall)) void LocatorDispos_db2c40(PSEUDO_X8,
                                                     unsigned __int8* result);
__attribute__((swiftcall)) void TransporterConst_89cb30(PSEUDO_X8,
                                                        __int64 result, int);
__attribute__((swiftcall)) void game_db1620(PSEUDO_X8, unsigned __int64 result,
                                            __int64);
__attribute__((swiftcall)) void game_hub_d6fba0(PSEUDO_X8, __int64, __int64,
                                                unsigned __int64, __int64);
__attribute__((swiftcall)) void game_hub_e1a260(PSEUDO_X8, _QWORD, _QWORD,
                                                float);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);
__int16* Dir_70dd80(__int16* result, __int16*);
__int64* GameRoutine_12b3240(__int64* result, __int64*);
__int64* GameRoutine_d8bae0(__int64**, unsigned __int8*, __int64, __int64**);
__int64 GameRoutine_143d560(__int64, __int64, __int64, __int16*);
__int64 GameRoutine_89aac0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_89aac0");
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 GameRoutine_d856f0(__int64);
__int64 GameRoutine_d859a0(__int64);
__int64 GameRoutine_d8b9c0(__int64, unsigned __int8*);
__int64 GameRoutine_e1c3a0(__int64, __int64*, __int64*);
__int64 GameRoutine_ffc660(unsigned int, char*);
__int64 GameRoutine_ffd760(int, __int64, __int64, char);
__int64 GameSideStoryData_12b56c0(_QWORD*, unsigned __int64**);
__int64 GameSituation_906440(__int64, __int64*);
__int64 GameSubquestData_1256ec0(_QWORD*, char);
__int64 GameSubquestData_125b8e0(_QWORD*, const char*, unsigned __int8);
__int64 GameSubquestData_125c2c0(__int64 result, __int64, __int64, int);
__int64 ScheduleNatives_869280(__int64 result, __int16*);
__int64 ScheduleNatives_869ec0();
__int64 UnitItem_6e8800_alt1(__int64 result,
                             unsigned __int64*) __asm__("UnitItem_6e8800");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 as_string_c_str_alt1(__int64) __asm__("as_string_c_str");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_a2c9c0(__int64 result, __int64);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, __int64, unsigned int,
                         unsigned int, int, float, float);
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1acc54c;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21ed530;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd4be0[])();
extern __int64 (*snd_Vec3_vtable[])();
extern __int64* GameData_212ebc8[4];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_2131678;
extern __int64 GameData_21c9718;
extern __int64 GameData_21c9728;
extern __int64 GameData_21f61c0[];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_1a9f09e;
extern int GameData_21ed528;
unsigned __int64 Registration_a51fe0(_QWORD*, __int64);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230_alt1() __asm__("String_60a230");
void snd_Fade_Fade_10c830(__int64, float);
__attribute__((swiftcall)) void
hub_GetObjLocatorPos(PSEUDO_X8 x8_, unsigned __int8* a1, __int64 a2);
__int64 hub_StopBgm(float a1);
__int64 hub_IsJoinPid(__int64 a1);
__int64 hub_IsAlreadyRead(unsigned __int8* a1);
__int64 hub_IsNeedFacilityTalk(__int64 a1, __int64 a2);
__int64 hub_IsFacilityArrival(__int64 a1, __int64 a2);
__int64 hub_IsAccessibleFacility_cc3de0(__int64 a1);
bool hub_IsOutHourFacilityArg(__int64 a1, __int64 a2);
__int64 hub_IsSubquestCompletedBySharedComp(__int64 a1);
__int64 hub_IsSubquestTerm(__int64 a1);
__int64 hub_IsSubquestOrder(__int64 a1);
__int64 hub_IsSubquestProgressing(__int64 a1);
__int64 hub_IsSubquestReportable(__int64 a1);
__int64 hub_IsSubquestCleared(__int64 a1);
_QWORD* hub_RunSubquestClear(__int64 a1);
__int64 hub_IsSideStoryCanTalk(__int64 a1);
__int64 hub_IsAcceptEndDay(__int64 a1);
__int64 hub_SideStoryClear(__int64 a1);
unsigned __int64 hub_PlaySE_cc8740(__int64 a1, __int128* a2);
_QWORD* hub_PlaySE_cc8950(__int64 a1, float a2);
__int64 hub_PlayEffect(__int64 a1, __int64* a2, int32x2_t a3);
__int64 hub_PlayEffectBindPlayer(__int64 a1, int32x2_t a2);
__int64 hub_PlayEffectLoop(__int64 a1, __int64 a2, __int64* a3, int32x2_t a4);
_QWORD* hub_TryPopWorldPost();
__int64 hub_UseTransporterCount(char* a1, int a2);
__int64 GameHr_dbd8e0();
__int64 GameManager_a2f5a0_alt1(__int64) __asm__("GameManager_a2f5a0");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_715c30_alt1(__int64 result) __asm__("GameRoutine_715c30");
__int64 GameRoutine_efbb60_alt1(__int64, __int64*,
                                char) __asm__("GameRoutine_efbb60");
__int64
snd_Fade_Fade_10cb00_alt1(__int64,
                          unsigned __int8*) __asm__("snd_Fade_Fade_10cb00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void HubNatives_cbfa70();
_QWORD* HubNatives_cc0630();
__int64 HubNatives_cc0760();
__attribute__((swiftcall)) void

hub_GetObjLocatorPos(PSEUDO_X8 x8_, unsigned __int8* a1, __int64 a2)
{
  _OWORD* a3 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  struct {
    _QWORD v19[8];
    char v20;
  } v19_;

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
  v11 = *a1;
  v12 = (v11 & 1) == 0;
  v13 = v11 >> 1;
  if (v12) {
    v14 = v13;
  }
  else {
    v14 = *((_QWORD*)a1 + 1);
  }
  if (v12) {
    v15 = (__int64)(a1 + 1);
  }
  else {
    v15 = *((_QWORD*)a1 + 2);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v16 = *(_QWORD*)(a2 + 16);
  }
  else {
    v16 = a2 + 1;
  }
  result = X8CALL_X0(__int64, game_hub_d6fba0((void*)((__int64)v19_.v19),
                                              *(_QWORD*)GameData_212dbc0[0],
                                              v15, v14, v16));
  if (v19_.v20 == 1) {
    *a3 = *(_OWORD*)&v19_.v19[6];
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(&GameData_21a6130);
      if ((_DWORD)result != 0) {
        v18 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v18;
        result = __cxa_guard_release(&GameData_21a6130);
      }
    }
    *a3 = GameData_21a6120;
  }
  {
    result;
    return;
  }
}

_QWORD* HubNatives_cbf330(char a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  _QWORD v8[2];

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
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
    goto LABEL_8;
  }
  if (result != nullptr) {
    v6 = 40;
  LABEL_8:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
  }
  v7 = *(_QWORD*)GameData_212dbe0[0];
  *(_DWORD*)(v7 + 8) = 1;
  *(_BYTE*)(v7 + 25) = a1 & 1;
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v8[0] = 0;
    v8[1] = 0;
    result = (_QWORD*)GameRoutine_efbb60(*(_QWORD*)GameData_212dbf0[0], v8, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
  return result;
}

_QWORD* HubNatives_cbf460()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* result;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 24) + 456LL))(
      *(_QWORD*)(v3 + 24));
  v5 = (__int64*)GameData_212dbc0[0];
  if ((v4 & 1) != 0) {
    GameRoutine_d6f4f0(*(_QWORD*)GameData_212dbc0[0]);
    v6 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
    v7 = *(_DWORD*)(v6 + 232);
    if (v7 <= 2) {
      v7 = 2;
    }
    *(_DWORD*)(v6 + 232) = v7;
  }
  if ((GameRoutine_d85af0() & 1) != 0) {
    goto LABEL_6;
  }
  v12 = *v5;
  v13 = *(unsigned __int8*)(v12 + 112);
  if ((v13 & 1) != 0) {
    v14 = *(_QWORD*)(v12 + 120);
  }
  else {
    v14 = v13 >> 1;
  }
  if (v14 != 0) {
    v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     64LL);
    v16 = *(_QWORD*)(v15 + 96);
    if (v16 != 0) {
      v17 = (v13 & 1) != 0 ? *(_QWORD*)(v12 + 128) : v12 + 113;
      if (!GameRoutine_c13be0(v16, v17, v14, *(_QWORD*)(v15 + 152), 0)) {
      LABEL_6:
        v8 = *v0;
        v9 = *(_QWORD*)(v8 +
                        8LL * (*(unsigned int (**)(__int64))(
                                  *(_QWORD*)as_g_thread_info + 72LL))(
                                  as_g_thread_info) +
                        4384);
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 472LL))(v9);
        return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
            **(_QWORD**)(v10 + 24) + 448LL))(*(_QWORD*)(v10 + 24), 0);
      }
    }
    GameRoutine_d6f8d0(v12);
  }
  v18 = *v0;
  v19 = *(
      _QWORD*)(v18 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v19 != 0) {
    v20 = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 472LL))(v19);
  }
  else {
    v20 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v20 + 24) + 448LL))(
      *(_QWORD*)(v20 + 24), 1);
  result = *(_QWORD**)(v20 + 2240);
  *(_QWORD*)(v20 + 2240) = 0;
  if (result == (_QWORD*)(v20 + 2208)) {
    v21 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v21 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v21))((__int64)result);
}

void HubNatives_cbfa70()
{
  __int64 v0;
  struct {
    _QWORD v1[2];
    __int64 v2;
  } v1_;

  *(_BYTE*)(*(_QWORD*)GameData_212dbd0[0] + 9LL) = 1;
  if (GameData_21f3c90 != 0) {
    v1_.v1[1] = 0;
    v1_.v2 = 0;
    v1_.v1[0] = 0;
    GameRoutine_1a09ce0_alt1((__int64)v1_.v1, "Insert - ReloadAll", 0x12u);
    if ((v1_.v1[0] & 1) != 0 && v1_.v2 != 0) {
      v0 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v0 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v0, v1_.v2);
    }
  }
  else if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 2;
  }
}

_QWORD* HubNatives_cbfb20(unsigned __int8* a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  bool v14;
  unsigned __int64 v15;
  unsigned __int8* v16;
  unsigned __int64 v17;
  _QWORD* result;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
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
  unsigned __int64 v36;
  char* v37;
  _QWORD v38[74];
  char v39;
  char v40;
  char v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  char* v53;

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
  (*(void (**)(void*))(*v7 + v8))(v7);

LABEL_9:
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(&v51, *(_QWORD*)(GameData_21f3d10 + 56),
                                  *(_QWORD*)(GameData_21f3d10 + 48));
  }
  else {
    v9 = *(_QWORD*)(GameData_21f3d10 + 48);
    v10 = *(char**)(GameData_21f3d10 + 56);
    v51 = *(_QWORD*)(GameData_21f3d10 + 40);
    v52 = v9;
    v53 = v10;
  }
  if ((v51 & 1) != 0) {
    v11 = v52;
  }
  else {
    v11 = (unsigned __int64)(unsigned __int8)v51 >> 1;
  }
  v12 = *a1;
  if ((v51 & 1) != 0) {
    v13 = v53;
  }
  else {
    v13 = (char*)&v51 + 1;
  }
  v14 = (v12 & 1) == 0;
  v15 = v12 >> 1;
  if (v14) {
    v16 = a1 + 1;
  }
  else {
    v16 = *((unsigned __int8**)a1 + 2);
  }
  if (v14) {
    v17 = v15;
  }
  else {
    v17 = *((_QWORD*)a1 + 1);
  }
  memset(v38, 0, 24);
  result = X8CALL_X0(_QWORD*,
                     GameRoutine_db4b40((void*)&v49, *(_QWORD*)GameData_212ec00,
                                        v13, v11, v38, v16, v17));
  v19 = v49;
  if (v50 == v49) {
    goto LABEL_60;
  }
  LOBYTE(v38[0]) = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v48 = 0;
  v42 = 0;
  v43 = 0;
  v44 = nullptr;
  v45 = 0;
  LOBYTE(v46) = 0;
  HubNatives_ccba40(v38, v49 + 24);
  v20 = *(_QWORD*)(a2 + 16);
  v39 = 1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    v21 = v20;
  }
  else {
    v21 = a2 + 1;
  }
  v22 = strlen(v21);
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v22);
  }
  v23 = v22;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v25 = 26;
    }
    else {
      v25 = (v22 | 7) + 1;
    }
    v24 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v25,
                                                16, 0);
    v36 = v23;
    v37 = v24;
    v35 = v25 | 1;
    goto LABEL_36;
  }
  LOBYTE(v35) = 2 * v22;
  v24 = (char*)&v35 + 1;
  if (v22 != 0) {
  LABEL_36:
    memmove(v24, v21, v23);
  }
  v24[v23] = 0;
  LODWORD(v45) = GameRoutine_dbca90(&v35);
  if ((v35 & 1) != 0 && v37 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  GameRoutine_db2180((void*)&v35, &v51, v49);
  if ((v42 & 1) != 0 && v44 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
  }
  v42 = v35;
  v43 = v36;
  v44 = v37;
  result = (_QWORD*)GameRoutine_d85ce0(v38);
  if (v48 == 1 && v46 != 0) {
    v47 = v46;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
  }
  if ((v42 & 1) != 0 && v44 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  if (v39 == 1) {
    result = (_QWORD*)HubNatives_ccbf80(v38);
  }
  v19 = v49;

LABEL_60:
  if (v19 != 0) {
    if (v19 == v50) {
      goto LABEL_71;
    }
    v30 = v50 - 616;
    v31 = fw_memory_g_heap_manager_ptr;
    do {
      result = (_QWORD*)HubNatives_ccbf80(v30 + 24);
      if ((*(_BYTE*)v30 & 1) != 0 && *(_QWORD*)(v30 + 16) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
          v32 = 128;
        }
        else {
          v32 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v32);
      }
      v14 = v30 == v19;
      v30 -= 616;
    } while (!v14);
    v50 = v19;
    if (v49 != 0) {
    LABEL_71:
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
    }
  }
  if ((v51 & 1) != 0 && v53 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
  }
  return result;
}

_QWORD* HubNatives_cc0630()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[25];

  v0 = *as_g_script_manager_ptr;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
LABEL_9:
  v5 = *(_QWORD*)GameData_212dbe8[0];
  if (*(_DWORD*)(*(_QWORD*)GameData_212dbe8[0] + 8LL) == 3) {
    v6 = *game_sound_g_game_sound_ptr[0];
    if (*(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 140LL) == 1) {
      result =
          (_QWORD*)GameManager_a2f5a0_alt1(*game_sound_g_game_sound_ptr[0]);
    }
    else {
      snd_Fade_Fade_10cb00_alt1((__int64)v7, "FadeTime_BGM_Hub_Out");
      GameManager_a2e490(v6, (__int64)v7, 0);
      result = (_QWORD*)snd_Fade_Destroy_Fade_alt1(v7);
      *(_BYTE*)(v6 + 3016) = 0;
    }
    *(_DWORD*)(v5 + 8) = 4;
  }
  return result;
}

__int64 HubNatives_cc0760()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[25];

  v0 = *as_g_script_manager_ptr;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_9:
  v5 = *(_QWORD*)GameData_212dbe8[0];
  snd_Fade_Fade_10cb00_alt1((__int64)v7, (unsigned __int8*)GameData_212ec08);
  if ((unsigned int)(*(_DWORD*)(v5 + 8) - 3) <= 1) {
    snd_a2c9c0(*game_sound_g_game_sound_ptr[0], (__int64)v7);
    *(_BYTE*)(v5 + 64) = 0;
    *(_DWORD*)(v5 + 8) = 1;
  }
  return snd_Fade_Destroy_Fade_alt1(v7);
}

__int64 hub_StopBgm(float a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[25];

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
  v7 = *(_QWORD*)GameData_212dbe8[0];
  snd_Fade_Fade_10c830((__int64)v9, a1);
  if ((unsigned int)(*(_DWORD*)(v7 + 8) - 3) <= 1) {
    snd_a2c9c0(*game_sound_g_game_sound_ptr[0], (__int64)v9);
    *(_BYTE*)(v7 + 64) = 0;
    *(_DWORD*)(v7 + 8) = 1;
  }
  return snd_Fade_Destroy_Fade_alt1(v9);
}

void HubNatives_cc0970(char a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _BYTE v8[200];

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
  v5 = (_QWORD*)(*(__int64 (**)(__int64))(*v5 + v6))((__int64)v5);

LABEL_9:
  if (*(_BYTE*)(*(_QWORD*)GameData_212dbe8[0] + 65LL) != (a1 & 1)) {
    *(_BYTE*)(*(_QWORD*)GameData_212dbe8[0] + 65LL) = a1 & 1;
    if ((a1 & 1) != 0) {
      v7 = *game_sound_g_game_sound_ptr[0];
      snd_Fade_Fade_10cb00(v8, "FadeTime_BGM_Hub_Out");
      GameManager_a2e490(v7, (__int64)v8, 1);
      snd_Fade_Destroy_Fade(v8);
      *(_BYTE*)(v7 + 3016) = 0;
    }
    else {
      GameRoutine_80fb70(v5);
    }
  }
}

__int64 hub_IsJoinPid(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
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
  __int64 v19[2];

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
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  v8 = game_HashString_alt1(v7);
  if (v8 == 0) {
    goto LABEL_36;
  }
  v9 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v9 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_36;
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
  v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v12);
  if (v13 == nullptr || (v14 = (_QWORD*)*v13) == nullptr) {
  LABEL_36:
    LODWORD(v16) = 0;
    return (unsigned int)v16;
  }
  if ((v9 & v11) == 0) {
    while (1) {
      v17 = v14[1];
      if (v17 == v8) {
        if (v14[2] == v8) {
          goto LABEL_38;
        }
      }
      else if ((v17 & v11) != v12) {
        goto LABEL_36;
      }
      v14 = (_QWORD*)*v14;
      LODWORD(v16) = 0;
      if (v14 == nullptr) {
        return (unsigned int)v16;
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
      goto LABEL_36;
    }
  LABEL_26:
    v14 = (_QWORD*)*v14;
    if (v14 == nullptr) {
      goto LABEL_36;
    }
  }
  if (v14[2] != v8) {
    goto LABEL_26;
  }
LABEL_38:
  v16 = v14[3];
  if (v16 != 0) {
    v19[0] = 0;
    v19[1] = v16;
    LODWORD(v16) = (unsigned __int8)GameSituation_906440(
                       game_GameModeData_instance_ + 136, v19) == 3;
  }
  return (unsigned int)v16;
}

__int64 hub_IsAlreadyRead(unsigned __int8* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v17[2];
  char v18;
  struct {
    char gap24_[1];
    _BYTE v19[7];
    char gap32_[8];
    _DWORD* v20;
  } v19_;

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
  v7 = *a1;
  v8 = (v7 & 1) == 0;
  v9 = v7 >> 1;
  if (v8) {
    v10 = (unsigned __int64)(a1 + 1);
  }
  else {
    v10 = *((_QWORD*)a1 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a1 + 1);
  }
  game_db1620((void*)((__int64)&v18), v10, v11);
  if ((v18 & 1) != 0) {
    v12 = v19_.v20;
  }
  else {
    v12 = v19_.v19;
  }
  v17[1] = (unsigned __int64)v12;
  v17[0] = game_HashString_alt1((__int64)v12);
  v13 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21ed530) != 0) {
      GameData_21ed528 = 1598310733;
      __cxa_guard_release(&GameData_21ed530);
    }
    if (v12 != nullptr) {
      if (*v12 == GameData_21ed528) {
        v14 = game_GameVariableTable_Find(*(_QWORD**)(v13 + 48), v17);
        if (v14 != 0) {
          LOBYTE(v12) = *(_DWORD*)(v14 + 32) != 0;
          if ((v18 & 1) == 0) {
            return (v13 != 0) & (unsigned __int8)v12;
          }
        }
        else {
          LOBYTE(v12) = 0;
          if ((v18 & 1) == 0) {
            return (v13 != 0) & (unsigned __int8)v12;
          }
        }
        goto LABEL_29;
      }
      LOBYTE(v12) = 0;
    }
    if ((v18 & 1) == 0) {
      return (v13 != 0) & (unsigned __int8)v12;
    }
    goto LABEL_29;
  }
  if ((v18 & 1) == 0) {
    return (v13 != 0) & (unsigned __int8)v12;
  }
LABEL_29:
  if (v19_.v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  return (v13 != 0) & (unsigned __int8)v12;
}

_QWORD* HubNatives_cc2480()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;

  v0 = *as_g_script_manager_ptr;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  result = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (result == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);

LABEL_9:
  v5 = *(_QWORD*)GameData_212dbd0[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) = 1;
  }
  *(_BYTE*)(v5 + 8) = 1;
  if (GameData_21f3c90 == 0 && game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 2;
  }
  return result;
}

bool HubNatives_cc3660(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  char** v8;
  char* v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  _BOOL8 result;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 16);
  }
  else {
    v1 = a1 + 1;
  }
  v2 = strlen(v1);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v19 = v3;
    v20 = v4;
    v18 = v5 | 1;
  }
  else {
    LOBYTE(v18) = 2 * v2;
    v4 = (char*)&v18 + 1;
    if (v2 == 0) {
      goto LABEL_13;
    }
  }
  memmove(v4, v1, v3);

LABEL_13:
  v4[v3] = 0;
  v6 = 0;
  v7 = v20;
  v8 = GameData_212fbf8;
  if ((v18 & 1) != 0) {
    v9 = v20;
  }
  else {
    v9 = (char*)&v18 + 1;
  }
  if ((v18 & 1) != 0) {
    v10 = v19;
  }
  else {
    v10 = (unsigned __int8)v18 >> 1;
  }
  do {
    v12 = *v8;
    v8 += 2;
    v11 = v12;
    v13 = strlen(v12);
    if (v13 == v10) {
      if (v13 == -1) {
        String_60a230(-1);
      }
      if ((unsigned int)memcmp(v9, v11, v13) == 0) {
        v14 = 0x100000000LL - v6;
        if ((v18 & 1) == 0) {
          goto LABEL_30;
        }
        goto LABEL_26;
      }
    }
    --v6;
  } while (v6 != -32);
  v14 = 0;
  if ((v18 & 1) != 0) {
  LABEL_26:
    if (v7 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v15);
    }
  }

LABEL_30:
  result = false;
  if (HIDWORD(v14) != 0) {
    v16 = (_DWORD)v14 == 17 ? 2 : (_DWORD)v14 == 26;
    if (v16 != 0 && (int)GameRoutine_145dba0((unsigned int)v14) < v16) {
      return true;
    }
  }
  return result;
}

__int64 hub_IsNeedFacilityTalk(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char** v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  unsigned int v31;
  __int64 v32;
  struct {
    __int64 v33;
    unsigned __int64 v34;
    char* v35;
  } v33_;

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
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = strlen(v9);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_65;
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v33_.v34 = v11;
    v33_.v35 = v12;
    v33_.v33 = v13 | 1;
  }
  else {
    LOBYTE(v33_.v33) = 2 * v10;
    v12 = (char*)&v33_.v33 + 1;
    if (v10 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v12, v9, v11);
LABEL_21:
  v12[v11] = 0;
  v14 = 0;
  v15 = v33_.v35;
  v16 = GameData_212fbf8;
  if ((v33_.v33 & 1) != 0) {
    v17 = v33_.v35;
  }
  else {
    v17 = (char*)&v33_.v33 + 1;
  }
  if ((v33_.v33 & 1) != 0) {
    v18 = v33_.v34;
  }
  else {
    v18 = (unsigned __int8)v33_.v33 >> 1;
  }
  do {
    v20 = *v16;
    v16 += 2;
    v19 = v20;
    v21 = strlen(v20);
    if (v21 == v18) {
      if (v21 == -1) {
        String_60a230_alt1();
      }
      if ((unsigned int)memcmp(v17, v19, v21) == 0) {
        v22 = 0x100000000LL - v14;
        if ((v33_.v33 & 1) == 0) {
          goto LABEL_38;
        }
        goto LABEL_34;
      }
    }
    --v14;
  } while (v14 != -32);
  v22 = 0;
  if ((v33_.v33 & 1) != 0) {
  LABEL_34:
    if (v15 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v23);
    }
  }
LABEL_38:
  if (HIDWORD(v22) == 0) {
    return 0;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v25 = *(_QWORD*)(a2 + 16);
  }
  else {
    v25 = a2 + 1;
  }
  v26 = strlen(v25);
  if (v26 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_65:
    String_60a1d0_alt1();
  }
  v27 = v26;
  if (v26 >= 0x17) {
    if ((v26 | 7) == 0x17) {
      v29 = 26;
    }
    else {
      v29 = (v26 | 7) + 1;
    }
    v28 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v29, 16, 0);
    v33_.v35 = v28;
    v33_.v33 = v29 | 1;
    goto LABEL_51;
  }
  LOBYTE(v33_.v33) = 2 * v26;
  v28 = (char*)&v33_.v33 + 1;
  if (v26 != 0) {
  LABEL_51:
    memmove(v28, v25, v27);
  }
  v28[v27] = 0;
  result = (_DWORD)v22 != 22 && (_DWORD)v22 != 28;
  if ((v33_.v33 & 1) != 0 && v33_.v35 != nullptr) {
    v31 = result;
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
    return v31;
  }
  return result;
}

__int64 hub_IsFacilityArrival(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char** v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  char* v25;
  struct {
    __int64 v26;
    unsigned __int64 v27;
    char* v28;
  } v26_;

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
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = strlen(v9);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v26_.v27 = v11;
    v26_.v28 = v12;
    v26_.v26 = v13 | 1;
  }
  else {
    LOBYTE(v26_.v26) = 2 * v10;
    v12 = (char*)&v26_.v26 + 1;
    if (v10 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v12, v9, v11);
LABEL_21:
  v12[v11] = 0;
  v14 = 0;
  v15 = v26_.v28;
  v16 = GameData_212fbf8;
  if ((v26_.v26 & 1) != 0) {
    v17 = v26_.v28;
  }
  else {
    v17 = (char*)&v26_.v26 + 1;
  }
  if ((v26_.v26 & 1) != 0) {
    v18 = v26_.v27;
  }
  else {
    v18 = (unsigned __int8)v26_.v26 >> 1;
  }
  do {
    v20 = *v16;
    v16 += 2;
    v19 = v20;
    v21 = strlen(v20);
    if (v21 == v18) {
      if (v21 == -1) {
        String_60a230_alt1();
      }
      if ((unsigned int)memcmp(v17, v19, v21) == 0) {
        v22 = 0x100000000LL - v14;
        if ((v26_.v26 & 1) == 0) {
          goto LABEL_38;
        }
        goto LABEL_34;
      }
    }
    --v14;
  } while (v14 != -32);
  v22 = 0;
  if ((v26_.v26 & 1) != 0) {
  LABEL_34:
    if (v15 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v23);
    }
  }
LABEL_38:
  if (HIDWORD(v22) == 0) {
    return 0;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v25 = *(char**)(a2 + 16);
  }
  else {
    v25 = (char*)(a2 + 1);
  }
  return GameRoutine_ffc660(v22, v25);
}

__int64 hub_IsAccessibleFacility_cc3de0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char** v14;
  char* v15;
  unsigned __int64 v16;
  char* v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;

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
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  v8 = strlen(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v11, 16, 0);
    v23_.v24 = v9;
    v23_.v25 = v10;
    v23_.v23 = v11 | 1;
  }
  else {
    LOBYTE(v23_.v23) = 2 * v8;
    v10 = (char*)&v23_.v23 + 1;
    if (v8 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v10, v7, v9);
LABEL_21:
  v10[v9] = 0;
  v12 = 0;
  v13 = v23_.v25;
  v14 = GameData_212fbf8;
  if ((v23_.v23 & 1) != 0) {
    v15 = v23_.v25;
  }
  else {
    v15 = (char*)&v23_.v23 + 1;
  }
  if ((v23_.v23 & 1) != 0) {
    v16 = v23_.v24;
  }
  else {
    v16 = (unsigned __int8)v23_.v23 >> 1;
  }
  do {
    v18 = *v14;
    v14 += 2;
    v17 = v18;
    v19 = strlen(v18);
    if (v19 == v16) {
      if (v19 == -1) {
        String_60a230_alt1();
      }
      if ((unsigned int)memcmp(v15, v17, v19) == 0) {
        v20 = 0x100000000LL - v12;
        if ((v23_.v23 & 1) == 0) {
          goto LABEL_38;
        }
        goto LABEL_34;
      }
    }
    --v12;
  } while (v12 != -32);
  v20 = 0;
  if ((v23_.v23 & 1) != 0) {
  LABEL_34:
    if (v13 != nullptr) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v21);
    }
  }
LABEL_38:
  if (HIDWORD(v20) != 0) {
    return GameRoutine_ffd760(v20, (__int64)&GameData_1a9f09e, 0, 1);
  }
  else {
    return 0;
  }
}

bool hub_IsOutHourFacilityArg(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  char** v16;
  char* v17;
  unsigned __int64 v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int16* v27;
  _BOOL8 result;
  struct {
    __int64 v29;
    unsigned __int64 v30;
    char* v31;
  } v29_;

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
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = strlen(v9);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v29_.v30 = v11;
    v29_.v31 = v12;
    v29_.v29 = v13 | 1;
  }
  else {
    LOBYTE(v29_.v29) = 2 * v10;
    v12 = (char*)&v29_.v29 + 1;
    if (v10 == 0) {
      goto LABEL_21;
    }
  }
  memmove(v12, v9, v11);
LABEL_21:
  v12[v11] = 0;
  v14 = 0;
  v15 = v29_.v31;
  v16 = GameData_212fbf8;
  if ((v29_.v29 & 1) != 0) {
    v17 = v29_.v31;
  }
  else {
    v17 = (char*)&v29_.v29 + 1;
  }
  if ((v29_.v29 & 1) != 0) {
    v18 = v29_.v30;
  }
  else {
    v18 = (unsigned __int8)v29_.v29 >> 1;
  }
  do {
    v20 = *v16;
    v16 += 2;
    v19 = v20;
    v21 = strlen(v20);
    if (v21 == v18) {
      if (v21 == -1) {
        String_60a230_alt1();
      }
      if ((unsigned int)memcmp(v17, v19, v21) == 0) {
        v22 = 0x100000000LL - v14;
        if ((v29_.v29 & 1) == 0) {
          goto LABEL_38;
        }
        goto LABEL_34;
      }
    }
    --v14;
  } while (v14 != -32);
  v22 = 0;
  if ((v29_.v29 & 1) != 0) {
  LABEL_34:
    if (v15 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v23);
    }
  }
LABEL_38:
  result = false;
  if (HIDWORD(v22) != 0) {
    v24 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : a2 + 1;
    v25 = strlen(v24);
    if ((GameRoutine_ffd760(v22, v24, v25, 1) & 1) != 0) {
      v26 = strlen(v24);
      v27 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                           ? game_gmap_GmapClock_instance_ + 8
                           : game_gmap_GmapClock_kDefaultTime_ptr);
      if ((GameRoutine_143d560((unsigned int)v22, v24, v26, v27) & 1) == 0) {
        return true;
      }
    }
  }
  return result;
}

unsigned __int64 HubNatives_cc4ce0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  struct {
    __int64 vars0;
    __int64 vars8;
    __int64 vars10;
    __int64 vars18;
  } vars0_;

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
  v7 = as_string_c_str_alt1(a1);
  result = game_HashString_alt1(v7);
  if (result != 0) {
    v9 = *(_QWORD*)(GameData_21ca028 + 96);
    if (v9 != 0 && *(_QWORD*)(GameData_21ca028 + 112) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = result;
        if (result >= v9) {
          v12 = result % v9;
        }
      }
      else {
        v12 = v11 & result;
      }
      v13 = *(_QWORD**)(*(_QWORD*)(GameData_21ca028 + 88) + 8 * v12);
      if (v13 != nullptr) {
        v14 = (_QWORD*)*v13;
        if (v14 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v16 = v14[1];
              if (v16 == result) {
                if (v14[2] == result) {
                  goto LABEL_34;
                }
              }
              else if ((v16 & v11) != v12) {
                return result;
              }
              v14 = (_QWORD*)*v14;
              if (v14 == nullptr) {
                return result;
              }
            }
          }
          do {
            v15 = v14[1];
            if (v15 == result) {
              if (v14[2] == result) {
              LABEL_34:
                if (v14[3] != 0) {
                  v22 = v14[3];
                  GameRoutine_715c30_alt1((__int64)&v22);
                  v17 = vars0_.vars0;
                  v18 = vars0_.vars8;
                  v19 = *(_QWORD*)(GameData_21c9608 + 328);
                  if ((v19 & 0x20) == 0) {
                    *(_QWORD*)(GameData_21c9608 + 328) = v19 | 0x20;
                    if (game_GameModeData_instance_ != 0) {
                      *(_BYTE*)(game_GameModeData_instance_ + 57) =
                          *(_BYTE*)(game_GameModeData_instance_ + 56);
                    }
                  }
                  v20 = *(_QWORD*)GameData_212dbe0[0];
                  *(_DWORD*)(v20 + 8) = 14;
                  v21 = *(unsigned __int8*)(v20 + 84);
                  *(_DWORD*)(v20 + 68) = 2;
                  if (v21 != 0) {
                    *(_BYTE*)(v20 + 84) = 0;
                  }
                  vars0_.vars10 = v17;
                  vars0_.vars18 = v18;
                  result = GameHr_dbd8e0();
                  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
                    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
                    vars0_.vars0 = 0;
                    vars0_.vars8 = 0;
                    result = GameRoutine_efbb60_alt1(GameData_21f3d08,
                                                     &vars0_.vars0, 0);
                    if (game_script_hub_talk_g_select_menu != 0) {
                      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
                    }
                  }
                  if (game_hub_ProcHubSeqView_instance_ != 0) {
                    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
                  }
                }
                return result;
              }
            }
            else {
              if (v15 >= v9) {
                v15 %= v9;
              }
              if (v15 != v12) {
                return result;
              }
            }
            v14 = (_QWORD*)*v14;
          } while (v14 != nullptr);
        }
      }
    }
  }
  return result;
}

__int64 HubNatives_cc53f0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int128 v7;
  __int64 v8;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(void*))(*v3 + v4))(v3);

LABEL_9:
  LOWORD(v7) = 0;
  result = GameData_21c9608 + 280;
  if ((__int128*)(GameData_21c9608 + 280) != &v7) {
    if ((*(_BYTE*)result & 1) != 0) {
      result = SpineModel_64dde0(result, (char*)&v7 + 1, 0);
      if ((v7 & 1) != 0 && v8 != 0) {
        v6 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v6 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
      }
    }
    else {
      *(_OWORD*)result = v7;
      *(_QWORD*)(result + 16) = v8;
    }
  }
  return result;
}

__int64 HubNatives_cc5df0(unsigned __int8* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  _QWORD v15[3];

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
  memset(v15, 0, sizeof(v15));
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v7 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v7 = 0;
  }
  if (GameData_22127a8 != 0) {
    v8 = GameData_22127a8;
  }
  else {
    v8 = v7;
  }
  v9 = *a1;
  v10 = (v9 & 1) == 0;
  v11 = v9 >> 1;
  if (v10) {
    v12 = a1 + 1;
  }
  else {
    v12 = *((unsigned __int8**)a1 + 2);
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = *((_QWORD*)a1 + 1);
  }
  return GameRoutine_d9d0e0(v8, v12, v13, v15, 0);
}

__int64 hub_IsSubquestCompletedBySharedComp(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;
  char v21;
  struct {
    char gap24_[1];
    _BYTE v22[7];
    char gap32_[8];
    const char* v23;
  } v22_;

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
  v7 = (_QWORD*)GameData_21c9718;
  if (GameData_21c9718 == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v19_.v19[1] = v10;
    v19_.v20 = v11;
    v19_.v19[0] = v13 | 1;
    goto LABEL_22;
  }
  LOBYTE(v19_.v19[0]) = 2 * v9;
  v11 = (char*)v19_.v19 + 1;
  if (v9 != 0) {
  LABEL_22:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2ac0((void*)((__int64)&v21), (unsigned __int8*)v19_.v19);
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v21 & 1) != 0) {
    v15 = v22_.v23;
  }
  else {
    v15 = v22_.v22;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v16 = 0;
  }
  result = GameSubquestData_125b8e0(v7, v15, v16);
  if (result != 0) {
    result = (*(_BYTE*)(result + 11) & 2) != 0;
  }
  if ((v21 & 1) != 0 && v22_.v23 != nullptr) {
    v17 = result;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
    return v17;
  }
  return result;
}

__int64 hub_IsSubquestTerm(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int8 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned int v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    char* v22;
  } v21_;
  char v23;
  struct {
    char gap24_[1];
    _BYTE v24[7];
    char gap32_[8];
    const char* v25;
  } v24_;

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
  v7 = (_QWORD*)GameData_21c9718;
  if (GameData_21c9718 == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v21_.v21[1] = v10;
    v21_.v22 = v11;
    v21_.v21[0] = v13 | 1;
    goto LABEL_22;
  }
  LOBYTE(v21_.v21[0]) = 2 * v9;
  v11 = (char*)v21_.v21 + 1;
  if (v9 != 0) {
  LABEL_22:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2ac0((void*)((__int64)&v23), (unsigned __int8*)v21_.v21);
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v23 & 1) != 0) {
    v15 = v24_.v25;
  }
  else {
    v15 = v24_.v24;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v16 = 0;
  }
  v17 = (_QWORD*)GameSubquestData_125b8e0(v7, v15, v16);
  v18 = v17;
  if (v17 != nullptr) {
    LOBYTE(v17) = GameSubquestData_1256ec0(v17, 1);
  }
  result = (v18 != nullptr) & (unsigned __int8)v17;
  if ((v23 & 1) != 0 && v24_.v25 != nullptr) {
    v19 = result;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    return v19;
  }
  return result;
}

__int64 hub_IsSubquestOrder(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;
  char v21;
  struct {
    char gap24_[1];
    _BYTE v22[7];
    char gap32_[8];
    const char* v23;
  } v22_;

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
  v7 = (_QWORD*)GameData_21c9718;
  if (GameData_21c9718 == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v19_.v19[1] = v10;
    v19_.v20 = v11;
    v19_.v19[0] = v13 | 1;
    goto LABEL_22;
  }
  LOBYTE(v19_.v19[0]) = 2 * v9;
  v11 = (char*)v19_.v19 + 1;
  if (v9 != 0) {
  LABEL_22:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2ac0((void*)((__int64)&v21), (unsigned __int8*)v19_.v19);
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v21 & 1) != 0) {
    v15 = v22_.v23;
  }
  else {
    v15 = v22_.v22;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v16 = 0;
  }
  result = GameSubquestData_125b8e0(v7, v15, v16);
  if (result != 0) {
    result = (*(_BYTE*)(result + 9) & 0xFE) == 2;
  }
  if ((v21 & 1) != 0 && v22_.v23 != nullptr) {
    v17 = result;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
    return v17;
  }
  return result;
}

__int64 hub_IsSubquestProgressing(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;
  char v21;
  struct {
    char gap24_[1];
    _BYTE v22[7];
    char gap32_[8];
    const char* v23;
  } v22_;

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
  v7 = (_QWORD*)GameData_21c9718;
  if (GameData_21c9718 == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v19_.v19[1] = v10;
    v19_.v20 = v11;
    v19_.v19[0] = v13 | 1;
    goto LABEL_22;
  }
  LOBYTE(v19_.v19[0]) = 2 * v9;
  v11 = (char*)v19_.v19 + 1;
  if (v9 != 0) {
  LABEL_22:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2ac0((void*)((__int64)&v21), (unsigned __int8*)v19_.v19);
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v21 & 1) != 0) {
    v15 = v22_.v23;
  }
  else {
    v15 = v22_.v22;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v16 = 0;
  }
  result = GameSubquestData_125b8e0(v7, v15, v16);
  if (result != 0) {
    result = *(unsigned __int8*)(result + 9) == 2;
  }
  if ((v21 & 1) != 0 && v22_.v23 != nullptr) {
    v17 = result;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
    return v17;
  }
  return result;
}

__int64 hub_IsSubquestReportable(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;
  char v21;
  struct {
    char gap24_[1];
    _BYTE v22[7];
    char gap32_[8];
    const char* v23;
  } v22_;

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
  v7 = (_QWORD*)GameData_21c9718;
  if (GameData_21c9718 == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v19_.v19[1] = v10;
    v19_.v20 = v11;
    v19_.v19[0] = v13 | 1;
    goto LABEL_22;
  }
  LOBYTE(v19_.v19[0]) = 2 * v9;
  v11 = (char*)v19_.v19 + 1;
  if (v9 != 0) {
  LABEL_22:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2ac0((void*)((__int64)&v21), (unsigned __int8*)v19_.v19);
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v21 & 1) != 0) {
    v15 = v22_.v23;
  }
  else {
    v15 = v22_.v22;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v16 = 0;
  }
  result = GameSubquestData_125b8e0(v7, v15, v16);
  if (result != 0) {
    result = *(unsigned __int8*)(result + 9) == 3;
  }
  if ((v21 & 1) != 0 && v22_.v23 != nullptr) {
    v17 = result;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
    return v17;
  }
  return result;
}

__int64 hub_IsSubquestCleared(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v18;
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;
  char v21;
  struct {
    char gap24_[1];
    _BYTE v22[7];
    char gap32_[8];
    const char* v23;
  } v22_;

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
  v7 = (_QWORD*)GameData_21c9718;
  if (GameData_21c9718 == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v19_.v19[1] = v10;
    v19_.v20 = v11;
    v19_.v19[0] = v13 | 1;
    goto LABEL_22;
  }
  LOBYTE(v19_.v19[0]) = 2 * v9;
  v11 = (char*)v19_.v19 + 1;
  if (v9 != 0) {
  LABEL_22:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2ac0((void*)((__int64)&v21), (unsigned __int8*)v19_.v19);
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v21 & 1) != 0) {
    v15 = v22_.v23;
  }
  else {
    v15 = v22_.v22;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v16 = 0;
  }
  result = GameSubquestData_125b8e0(v7, v15, v16);
  if (result != 0) {
    result = *(unsigned __int8*)(result + 9) == 4;
  }
  if ((v21 & 1) != 0 && v22_.v23 != nullptr) {
    v17 = result;
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
    return v17;
  }
  return result;
}

_QWORD* hub_RunSubquestClear(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int8 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    char* v22;
  } v21_;
  char v23;
  struct {
    char gap32_[1];
    _BYTE v24[7];
    char gap40_[8];
    const char* v25;
  } v24_;
  _QWORD v26[3];

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
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
LABEL_9:
  v7 = (_QWORD*)GameData_21c9718;
  if (GameData_21c9718 == 0) {
    return result;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v21_.v21[1] = v10;
    v21_.v22 = v12;
    v21_.v21[0] = v13 | 1;
    goto LABEL_21;
  }
  LOBYTE(v21_.v21[0]) = 2 * v9;
  v12 = (char*)v21_.v21 + 1;
  if (v9 != 0) {
  LABEL_21:
    memmove(v12, v8, v10);
  }
  v12[v10] = 0;
  LocatorDispos_db2ac0((void*)((__int64)&v23), (unsigned __int8*)v21_.v21);
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*v11 + v14);
  }
  if ((v23 & 1) != 0) {
    v15 = v24_.v25;
  }
  else {
    v15 = v24_.v24;
  }
  if (game_GameModeData_instance_ != 0) {
    v16 = *(_BYTE*)(game_GameModeData_instance_ + 15);
  }
  else {
    v16 = 0;
  }
  result = (_QWORD*)GameSubquestData_125b8e0(v7, v15, v16);
  if (result != nullptr) {
    v17 = result;
    v18 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v11, 8, 16, 0);
    *v18 = v17;
    v26[0] = v18;
    v26[1] = v18 + 1;
    v26[2] = v18 + 1;
    GameSubquestData_125c2c0((__int64)v18, 0, (__int64)v26, 0);
    v19 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*v11 + v19);
  }
  if ((v23 & 1) != 0 && v24_.v25 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v20 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*v11 + v20);
  }
  return result;
}

__int64 hub_IsSideStoryCanTalk(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  int v16;
  unsigned __int8* v17;
  unsigned int v18;
  __int64 v19;
  struct {
    _QWORD v20[2];
    char* v21;
  } v20_;
  char v22;
  struct {
    char gap24_[1];
    _BYTE v23[7];
    char gap32_[8];
    _BYTE* v24;
  } v23_;
  unsigned __int64* v25;

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
  v7 = (_QWORD*)GameData_21c9728;
  if (GameData_21c9728 == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v20_.v20[1] = v10;
    v20_.v21 = v11;
    v20_.v20[0] = v13 | 1;
  }
  else {
    LOBYTE(v20_.v20[0]) = 2 * v9;
    v11 = (char*)v20_.v20 + 1;
    if (v9 == 0) {
      goto LABEL_23;
    }
  }
  memmove(v11, v8, v10);
LABEL_23:
  v11[v10] = 0;
  LocatorDispos_db2c40((void*)((__int64)&v22), (unsigned __int8*)v20_.v20);
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v22 & 1) != 0) {
    v15 = v23_.v24;
  }
  else {
    v15 = v23_.v23;
  }
  Registration_a51fe0(&v25, (__int64)v15);
  result = GameSideStoryData_12b56c0(v7, &v25);
  if (result == 0) {
  LABEL_40:
    if ((v22 & 1) == 0) {
      return result;
    }
    goto LABEL_41;
  }
  v16 = *(unsigned __int8*)(result + 8);
  if ((unsigned int)(v16 - 1) < 2) {
    goto LABEL_33;
  }
  if (v16 != 3) {
    result = 0;
    goto LABEL_40;
  }
  v17 = *(unsigned __int8**)(*(_QWORD*)result + 24LL);
  if (*v17 == v17[2]) {
    result = v17[1] != v17[3];
    if ((v22 & 1) == 0) {
      return result;
    }
    goto LABEL_41;
  }
LABEL_33:
  result = 1;
  if ((v22 & 1) == 0) {
    return result;
  }
LABEL_41:
  if (v23_.v24 != nullptr) {
    v18 = result;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    return v18;
  }
  return result;
}

__int64 hub_IsAcceptEndDay(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int16* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned int v23;
  __int64 v24;
  struct {
    _QWORD v25[2];
    char* v26;
  } v25_;
  char v27;
  struct {
    char gap24_[1];
    _BYTE v28[7];
    char gap32_[8];
    _BYTE* v29;
  } v28_;
  unsigned __int64* v30;

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
  v7 = *(_QWORD**)GameData_212c7b8[0];
  if (*(_QWORD*)GameData_212c7b8[0] == 0) {
    return 0;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v25_.v25[1] = v10;
    v25_.v26 = v11;
    v25_.v25[0] = v13 | 1;
    goto LABEL_22;
  }
  LOBYTE(v25_.v25[0]) = 2 * v9;
  v11 = (char*)v25_.v25 + 1;
  if (v9 != 0) {
  LABEL_22:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2c40((void*)((__int64)&v27), (unsigned __int8*)v25_.v25);
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
  }
  if ((v27 & 1) != 0) {
    v15 = v28_.v29;
  }
  else {
    v15 = v28_.v28;
  }
  Registration_a51fe0(&v30, (__int64)v15);
  result = GameSideStoryData_12b56c0(v7, &v30);
  if (result != 0) {
    v16 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    v17 = game_GameModeData_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
      v16 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    v18 = *v16;
    v19 = v16[1];
    v20 = v16[2];
    v21 = *(_QWORD*)(*(_QWORD*)result + 24LL);
    if (game_GameModeData_instance_ != 0) {
      v17 = 4LL * *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      v22 = (unsigned __int8*)(v21 + v17 + 6);
    }
    else {
      v22 = (unsigned __int8*)(v21 + 6);
    }
    result = (v18 << 32) + (v19 << 24) + (v20 << 18) ==
             ((v18 << 32) | ((unsigned __int64)*v22 << 24)) +
                 ((unsigned __int64)*(unsigned __int8*)(v21 + v17 + 7) << 18);
  }
  if ((v27 & 1) != 0 && v28_.v29 != nullptr) {
    v23 = result;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
    return v23;
  }
  return result;
}

__int64 hub_SideStoryClear(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int16* v22;
  __int16* v23;
  int v24;
  int v25;
  int v26;
  __int16 v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;
  __int16 v32;
  __int16 v33;
  __int64 v34;
  struct {
    _QWORD v35[2];
    char* v36;
  } v35_;
  char v37;
  struct {
    char gap24_[1];
    _BYTE v38[7];
    char gap32_[8];
    _BYTE* v39;
  } v38_;
  __int128 v40;

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
  result = *(_QWORD*)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == v4 + 2208) {
    v6 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v6))((__int64)result);
LABEL_9:
  v7 = *(_QWORD**)GameData_212c7b8[0];
  if (*(_QWORD*)GameData_212c7b8[0] == 0) {
    return result;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
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
    v35_.v35[1] = v10;
    v35_.v36 = v11;
    v35_.v35[0] = v12 | 1;
    goto LABEL_21;
  }
  LOBYTE(v35_.v35[0]) = 2 * v9;
  v11 = (char*)v35_.v35 + 1;
  if (v9 != 0) {
  LABEL_21:
    memmove(v11, v8, v10);
  }
  v11[v10] = 0;
  LocatorDispos_db2c40((void*)((__int64)&v37), (unsigned __int8*)v35_.v35);
  if ((v35_.v35[0] & 1) != 0 && v35_.v36 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  if ((v37 & 1) != 0) {
    v14 = v38_.v39;
  }
  else {
    v14 = v38_.v38;
  }
  Registration_a51fe0(&v40, (__int64)v14);
  result = GameSideStoryData_12b56c0(v7, (unsigned __int64**)&v40);
  if (result != 0) {
    if ((*(_BYTE*)(result + 8) & 0xFE) == 2) {
      v15 = *(__int64**)result;
      *(_BYTE*)(result + 8) = 4;
      GameRoutine_12b3240(v7 + 13, v15);
      *((_QWORD*)&v40 + 1) = &GameData_1acc54c;
      v16 = game_HashString_alt1((__int64)&GameData_1acc54c);
      v18 = v7[13];
      v17 = v7[14];
      *(_QWORD*)&v40 = v16;
      GameRoutine_9b11a0(GameData_21f61c0, (unsigned __int64*)&v40,
                         (unsigned __int64)(v17 - v18) >> 3);
    }
    v19 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v20 = *(_DWORD*)(game_GameModeData_instance_ + 92);
      *(_QWORD*)(game_GameModeData_instance_ + 32) = 0;
      *(_DWORD*)(v19 + 92) = v20 & 0xFFFFFBA3;
    }
    v21 = game_gmap_GmapClock_instance_;
    v22 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    if (game_gmap_GmapClock_instance_ != 0) {
      v23 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v23 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if (game_gmap_GmapClock_instance_ != 0 &&
        (v24 = *(__int16*)(game_gmap_GmapClock_instance_ + 8),
         v25 = *(__int16*)(game_gmap_GmapClock_instance_ + 10),
         v26 = *(__int16*)(game_gmap_GmapClock_instance_ + 12),
         v25 * v24 * v26 != 0)) {
      v27 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
      DWORD2(v40) = 0;
      WORD1(v40) = v25;
      WORD2(v40) = v26;
      LOWORD(v40) = v24;
      *(_DWORD*)((char*)&v40 + 6) =
          6 * game_script_hub_schedule_kHourCycles[v27 % 24] % 0x18u;
      Dir_70dd80((__int16*)&v40,
                 (__int16*)(game_gmap_GmapClock_instance_ + 20));
      v28 = v40;
      v29 = WORD1(v40);
      v30 = WORD2(v40);
      v31 = WORD3(v40);
      v32 = WORD4(v40);
      v33 = WORD5(v40);
    }
    else {
      v28 = *(_WORD*)game_gmap_GmapClock_kDefaultTime_ptr;
      v29 = *(_WORD*)(game_gmap_GmapClock_kDefaultTime_ptr + 2);
      v30 = *(_WORD*)(game_gmap_GmapClock_kDefaultTime_ptr + 4);
      v31 = *(_WORD*)(game_gmap_GmapClock_kDefaultTime_ptr + 6);
      v32 = *(_WORD*)((char*)((_UNKNOWN**)0x8LL) +
                      game_gmap_GmapClock_kDefaultTime_ptr);
      v33 = *(_WORD*)((char*)((_UNKNOWN**)0x8LL) +
                      game_gmap_GmapClock_kDefaultTime_ptr + 2);
    }
    if (((__int64)v23[1] << 24) + ((__int64)*v23 << 32) +
                ((__int64)v23[2] << 18) + ((__int64)v23[3] << 12) +
                ((__int64)v23[4] << 6) + v23[5] !=
            ((__int64)v32 << 6) + v33 + ((__int64)v31 << 12) +
                ((__int64)v30 << 18) + ((__int64)v29 << 24) +
                ((__int64)v28 << 32) &&
        v21 != 0) {
      Dir_70ea50((void*)((__int64)&v40), v22, (__int16*)(v21 + 20));
      ScheduleNatives_869280(v21, (__int16*)&v40);
    }
    result = ScheduleNatives_869ec0();
  }
  if ((v37 & 1) != 0 && v38_.v39 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34);
  }
  return result;
}

unsigned __int64 hub_PlaySE_cc8740(__int64 a1, __int128* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 result;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int128 v14;
  int v15;
  char* v16;
  __int64 v17;
  struct {
    _QWORD v18[2];
    char* v19;
  } v18_;
  struct {
    _QWORD v20[2];
    int v21;
  } v20_;
  _QWORD v22[25];

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
  v9 = as_string_c_str_alt1(a1);
  result = strlen(v9);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v11 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (result | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v18_.v18[1] = v11;
    v18_.v19 = v12;
    v18_.v18[0] = v13 | 1;
    goto LABEL_17;
  }
  LOBYTE(v18_.v18[0]) = 2 * result;
  v12 = (char*)v18_.v18 + 1;
  if (result != 0) {
  LABEL_17:
    result = memmove(v12, v9, v11);
  }
  v12[v11] = 0;
  v14 = *a2;
  v15 = v18_.v18[0] & 1;
  if ((v18_.v18[0] & 1) != 0) {
    v16 = v18_.v19;
  }
  else {
    v16 = (char*)v18_.v18 + 1;
  }
  v20_.v20[1] = *(_QWORD*)a2;
  v20_.v21 = DWORD2(v14);
  v20_.v20[0] = snd_Vec3_vtable;
  if (v16 != nullptr) {
    snd_Fade_Fade_10c830((__int64)v22, 0x0.0p+0f);
    snd_playAt_ff5f0((__int64)v16, (__int64)v16, (__int64)v20_.v20,
                     (__int64)v22, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
    result = snd_Fade_Destroy_Fade_alt1(v22);
    v15 = v18_.v18[0] & 1;
  }
  if (v15 != 0 && v18_.v19 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
  }
  return result;
}

_QWORD* hub_PlaySE_cc8950(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  _QWORD* result;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v18[2];
    char* v19;
  } v18_;

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
  v9 = *GameData_212ebc8[0];
  v10 = as_string_c_str_alt1(a1);
  v11 = strlen(v10);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v14, 16, 0);
    v18_.v18[1] = v12;
    v18_.v19 = v13;
    v18_.v18[0] = v14 | 1;
  }
  else {
    LOBYTE(v18_.v18[0]) = 2 * v11;
    v13 = (char*)v18_.v18 + 1;
    if (v11 == 0) {
      goto LABEL_18;
    }
  }
  memmove(v13, v10, v12);
LABEL_18:
  v13[v12] = 0;
  result = X8CALL_X0(void*, game_hub_e1a260((void*)(&v17), v9, v18_.v18, a2));
  if ((v18_.v18[0] & 1) != 0 && v18_.v19 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  return result;
}

_QWORD* HubNatives_cc8df0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  _QWORD* result;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;
  __int64 v18;
  __int64 v19;

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
  (*(void (**)(void*))(*v5 + v6))(v5);

LABEL_9:
  v7 = *(_QWORD*)GameData_212dc48[0];
  v8 = as_string_c_str(a1);
  v9 = strlen(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v9);
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
    v16[1] = v10;
    v17 = v11;
    v16[0] = v12 | 1;
  }
  else {
    LOBYTE(v16[0]) = 2 * v9;
    v11 = (char*)v16 + 1;
    if (v9 == 0) {
      goto LABEL_18;
    }
  }
  memmove(v11, v8, v10);

LABEL_18:
  v11[v10] = 0;
  result = X8CALL_X0(_QWORD*, GameRoutine_e1be60((void*)&v18, v7, v16));
  v14 = v19;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v14);
    if ((v16[0] & 1) == 0) {
      return result;
    }
  }
  else if ((v16[0] & 1) == 0) {
    return result;
  }
  if (v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
  }
  return result;
}

__int64 hub_PlayEffect(__int64 a1, __int64* a2, int32x2_t a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;
  int32x4_t v21;
  int32x4_t* v22;
  __int64 v23;
  struct {
    _QWORD v25[2];
    char* v26;
  } v25_;
  struct {
    __int64* v27;
    __int64 v28;
  } v27_;

  v5 = *as_g_script_manager_ptr;
  v6 = *(
      _QWORD*)(v5 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v6 != 0) {
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
  }
  else {
    v7 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v7 + 24) + 448LL))(
      *(_QWORD*)(v7 + 24), 1);
  v8 = *(_QWORD**)(v7 + 2240);
  *(_QWORD*)(v7 + 2240) = 0;
  if (v8 == (_QWORD*)(v7 + 2208)) {
    v9 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_9;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v8 + v9))((__int64)v8);
LABEL_9:
  v10 = *(_QWORD*)GameData_212dc48[0];
  v11 = as_string_c_str_alt1(a1);
  v12 = strlen(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v15, 16, 0);
    v25_.v25[1] = v13;
    v25_.v26 = v14;
    v25_.v25[0] = v15 | 1;
  }
  else {
    LOBYTE(v25_.v25[0]) = 2 * v12;
    v14 = (char*)v25_.v25 + 1;
    if (v12 == 0) {
      goto LABEL_18;
    }
  }
  memmove(v14, v11, v13);
LABEL_18:
  v14[v13] = 0;
  result = X8CALL_X0(
      __int64, game_hub_e1bfe0((void*)(&v27_.v27), v10, (__int64)v25_.v25, a2));
  if ((v25_.v25[0] & 1) != 0 && v25_.v26 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
  }
  v18 = *v27_.v27;
  if (*v27_.v27 != 0 && *(_DWORD*)(v18 + 16) == *((_DWORD*)v27_.v27 + 2)) {
    v19 = *(_DWORD*)(v18 + 36);
    if (v19 != 0) {
      v20 = 0;
      v21 = vdupq_lane_s32(a3, 0);
      LANES128(v21).n128_u32[3] = 0;
      do {
        if ((int)v19 > (int)v20) {
          v22 = *(int32x4_t**)(v18 + 40 + 8LL * (int)v20);
          if (v22 != nullptr) {
            v22[2] = v21;
            LANES128(v22[8]).n128_u8[0] = 1;
            v19 = *(_DWORD*)(v18 + 36);
          }
        }
        ++v20;
      } while (v20 < v19);
    }
  }
  v23 = v27_.v28;
  if (v27_.v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27_.v28 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    return std___1___shared_weak_count___release_weak(v23);
  }
  return result;
}

__int64 hub_PlayEffectBindPlayer(__int64 a1, int32x2_t a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
  int32x4_t v20;
  int32x4_t* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 result;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;
  struct {
    _BYTE v42[32];
    _BYTE* v43;
  } v42_;
  struct {
    __int64 v44;
    __int64 v45;
  } v44_;
  struct {
    _QWORD v46[4];
    _QWORD* v47;
  } v46_;
  struct {
    __int64* v48;
    __int64 v49;
  } v48_;
  struct {
    _QWORD v50[4];
    _QWORD* v51;
  } v50_;

  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v4 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  }
  else {
    v5 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 24) + 448LL))(
      *(_QWORD*)(v5 + 24), 1);
  v6 = *(_QWORD**)(v5 + 2240);
  *(_QWORD*)(v5 + 2240) = 0;
  if (v6 == (_QWORD*)(v5 + 2208)) {
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
  v8 = (_QWORD*)GameData_212dc48[0];
  v9 = *(_QWORD*)GameData_212dc48[0];
  v10 = as_string_c_str_alt1(a1);
  v11 = strlen(v10);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v12 = v11;
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v11 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v15, 16, 0);
    v44_.v45 = v12;
    v46_.v46[0] = v14;
    v44_.v44 = v15 | 1;
  }
  else {
    LOBYTE(v44_.v44) = 2 * v11;
    v14 = (char*)&v44_.v44 + 1;
    if (v11 == 0) {
      goto LABEL_18;
    }
  }
  memmove(v14, v10, v12);
LABEL_18:
  v14[v12] = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v38 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v38;
    __cxa_guard_release(&GameData_21a6130);
  }
  game_hub_e1bfe0((void*)(&v48_.v48), v9, (__int64)&v44_.v44,
                  (__int64*)&GameData_21a6120);
  if ((v44_.v44 & 1) != 0 && v46_.v46[0] != 0) {
    v16 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v16);
  }
  v17 = *v48_.v48;
  if (*v48_.v48 != 0 && *(_DWORD*)(v17 + 16) == *((_DWORD*)v48_.v48 + 2)) {
    v18 = *(_DWORD*)(v17 + 36);
    if (v18 != 0) {
      v19 = 0;
      v20 = vdupq_lane_s32(a2, 0);
      LANES128(v20).n128_u32[3] = 0;
      do {
        if ((int)v18 > (int)v19) {
          v21 = *(int32x4_t**)(v17 + 40 + 8LL * (int)v19);
          if (v21 != nullptr) {
            v21[2] = v20;
            LANES128(v21[8]).n128_u8[0] = 1;
            v18 = *(_DWORD*)(v17 + 36);
          }
        }
        ++v19;
      } while (v19 < v18);
    }
  }
  v22 = fw_memory_HeapManager_Allocate_alt1(*v13, 296, 16, 0);
  *(_DWORD*)(v22 + 48) = 0x2000;
  v23 = GameData_2131678;
  *(_WORD*)(v22 + 108) = 256;
  *(_QWORD*)(v22 + 16) = 0;
  *(_QWORD*)(v22 + 24) = 0;
  *(_DWORD*)(v22 + 32) = 0;
  *(_QWORD*)(v22 + 40) = 0;
  *(_DWORD*)(v22 + 104) = 0;
  *(_QWORD*)(v22 + 56) = 0;
  *(_QWORD*)(v22 + 64) = 0;
  *(_QWORD*)(v22 + 72) = 0;
  *(_WORD*)(v22 + 80) = 0;
  *(_DWORD*)(v22 + 112) = -1082130432;
  *(_WORD*)(v22 + 116) = 0;
  *(_WORD*)(v22 + 136) = 0;
  *(_BYTE*)(v22 + 160) = 0;
  *(_BYTE*)(v22 + 288) = 0;
  *(_QWORD*)(v22 + 272) = 0;
  *(_QWORD*)(v22 + 280) = 0;
  *(_QWORD*)(v22 + 256) = 0;
  *(_QWORD*)(v22 + 264) = 0;
  *(_QWORD*)(v22 + 240) = 0;
  *(_QWORD*)(v22 + 248) = 0;
  *(_QWORD*)(v22 + 224) = 0;
  *(_QWORD*)(v22 + 232) = 0;
  *(_QWORD*)(v22 + 208) = 0;
  *(_QWORD*)(v22 + 216) = 0;
  *(_QWORD*)(v22 + 192) = 0;
  *(_QWORD*)(v22 + 200) = 0;
  *(_QWORD*)(v22 + 176) = 0;
  *(_QWORD*)(v22 + 184) = 0;
  *(_QWORD*)(v22 + 168) = 0;
  *(_QWORD*)(v22 + 120) = 0;
  *(_DWORD*)(v22 + 127) = 0;
  v44_.v45 = v22;
  v46_.v47 = nullptr;
  *(_QWORD*)v22 = v23 + 16;
  *(_QWORD*)(v22 + 8) = 0;
  *(_DWORD*)(v22 + 292) = 2;
  v24 = v48_.v48;
  v25 = v48_.v49;
  if (v48_.v49 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48_.v49 + 8), 1u,
                              memory_order_relaxed);
    v22 = v44_.v45;
    v44_.v44 = (__int64)v24;
    v44_.v45 = v25;
    if (v22 == 0) {
    LABEL_39:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
      goto LABEL_41;
    }
  }
  else {
    v44_.v44 = (__int64)v48_.v48;
    v44_.v45 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = v22;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v26);
  }
  v25 = v44_.v45;
  if (v44_.v45 != 0) {
    goto LABEL_39;
  }
LABEL_41:
  v50_.v51 = v50_.v50;
  v50_.v50[0] = GameData_1fd4be0;
  GameRoutine_ccc9b0(v50_.v50, v46_.v46);
  if (v50_.v51 == v50_.v50) {
    v27 = 32;
  }
  else {
    if (v50_.v51 == nullptr) {
      goto LABEL_46;
    }
    v27 = 40;
  }
  (*(void (**)(__int64))(*v50_.v51 + v27))((__int64)v50_.v51);
LABEL_46:
  v28 = (_QWORD*)*v8;
  v40_.v40 = v44_.v44;
  v40_.v41 = v44_.v45;
  if (v44_.v45 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44_.v45 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v46_.v47 != nullptr) {
    if (v46_.v47 == v46_.v46) {
      v42_.v43 = v42_.v42;
      (*(void (**)(__int64))(*v46_.v47 + 24LL))((__int64)v46_.v47);
    }
    else {
      v42_.v43 = (_BYTE*)(*(__int64 (**)(__int64))(*v46_.v47 + 16LL))(
          (__int64)v46_.v47);
    }
  }
  else {
    v42_.v43 = nullptr;
  }
  v29 = (__int64*)v28[5];
  if ((unsigned __int64)v29 >= v28[6]) {
    v31 = game_hub_e1cee0(v28 + 4, &v40_.v40);
  }
  else {
    *v29 = v40_.v40;
    v30 = v40_.v41;
    v29[1] = v40_.v41;
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v42_.v43 != nullptr) {
      if (v42_.v43 == v42_.v42) {
        v29[6] = (__int64)(v29 + 2);
        (*(void (**)(_BYTE*))(*(_QWORD*)v42_.v43 + 24LL))(v42_.v43);
      }
      else {
        v29[6] = (*(__int64 (**)(__int64))(*(_QWORD*)v42_.v43 + 16LL))(
            (__int64)v42_.v43);
      }
    }
    else {
      v29[6] = 0;
    }
    v31 = v29 + 8;
  }
  v28[5] = v31;
  if (v42_.v43 == v42_.v42) {
    v32 = 32;
    goto LABEL_67;
  }
  if (v42_.v43 != nullptr) {
    v32 = 40;
  LABEL_67:
    (*(void (**)(__int64))(*(_QWORD*)v42_.v43 + v32))((__int64)v42_.v43);
  }
  v33 = v40_.v41;
  if (v40_.v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40_.v41 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
  }
  result = (__int64)v46_.v47;
  if (v46_.v47 == v46_.v46) {
    v35 = 32;
    goto LABEL_75;
  }
  if (v46_.v47 != nullptr) {
    v35 = 40;
  LABEL_75:
    result = (*(__int64 (**)(__int64))(*v46_.v47 + v35))((__int64)v46_.v47);
  }
  v36 = v44_.v45;
  if (v44_.v45 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44_.v45 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    result = std___1___shared_weak_count___release_weak(v36);
  }
  v37 = v48_.v49;
  if (v48_.v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    return std___1___shared_weak_count___release_weak(v37);
  }
  return result;
}

__int64 hub_PlayEffectLoop(__int64 a1, __int64 a2, __int64* a3, int32x2_t a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  int32x4_t v23;
  int32x4_t* v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64 result;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    char* v37;
  } v35_;
  struct {
    __int64* v38;
    __int64 v39;
  } v38_;

  v7 = *as_g_script_manager_ptr;
  v8 = *(
      _QWORD*)(v7 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v8 != 0) {
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
  }
  else {
    v9 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v9 + 24) + 448LL))(
      *(_QWORD*)(v9 + 24), 1);
  v10 = *(_QWORD**)(v9 + 2240);
  *(_QWORD*)(v9 + 2240) = 0;
  if (v10 == (_QWORD*)(v9 + 2208)) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_9;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_9:
  v12 = (__int64*)GameData_212dc48[0];
  v13 = *(_QWORD*)GameData_212dc48[0];
  v14 = as_string_c_str_alt1(a2);
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_52;
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
    v35_.v36 = v16;
    v35_.v37 = v17;
    v35_.v35 = v18 | 1;
  }
  else {
    LOBYTE(v35_.v35) = 2 * v15;
    v17 = (char*)&v35_.v35 + 1;
    if (v15 == 0) {
      goto LABEL_18;
    }
  }
  memmove(v17, v14, v16);
LABEL_18:
  v17[v16] = 0;
  game_hub_e1bfe0((void*)(&v38_.v38), v13, (__int64)&v35_.v35, a3);
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
  v20 = *v38_.v38;
  if (*v38_.v38 != 0 && *(_DWORD*)(v20 + 16) == *((_DWORD*)v38_.v38 + 2)) {
    v21 = *(_DWORD*)(v20 + 36);
    if (v21 != 0) {
      v22 = 0;
      v23 = vdupq_lane_s32(a4, 0);
      LANES128(v23).n128_u32[3] = 0;
      do {
        if ((int)v21 > (int)v22) {
          v24 = *(int32x4_t**)(v20 + 40 + 8LL * (int)v22);
          if (v24 != nullptr) {
            v24[2] = v23;
            LANES128(v24[8]).n128_u8[0] = 1;
            v21 = *(_DWORD*)(v20 + 36);
          }
        }
        ++v22;
      } while (v22 < v21);
    }
  }
  v25 = *v12;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v26 = *(_QWORD*)(a1 + 16);
  }
  else {
    v26 = a1 + 1;
  }
  v27 = strlen(v26);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_52:
    String_60a1d0_alt1();
  }
  v28 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v30 = 26;
    }
    else {
      v30 = (v27 | 7) + 1;
    }
    v29 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v30, 16, 0);
    v35_.v36 = v28;
    v35_.v37 = v29;
    v35_.v35 = v30 | 1;
  }
  else {
    LOBYTE(v35_.v35) = 2 * v27;
    v29 = (char*)&v35_.v35 + 1;
    if (v27 == 0) {
      goto LABEL_43;
    }
  }
  memmove(v29, v26, v28);
LABEL_43:
  v29[v28] = 0;
  result = GameRoutine_e1c3a0(v25, &v35_.v35, (__int64*)&v38_.v38);
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
  }
  v33 = v38_.v39;
  if (v38_.v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    return std___1___shared_weak_count___release_weak(v33);
  }
  return result;
}

_QWORD* hub_TryPopWorldPost()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* result;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  void (*v20)(void);
  __int64 v21;
  __int64 v22;
  unsigned __int8 v23;
  _BYTE v24[23];
  unsigned __int8* v25;

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  else {
    v3 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v3 + 24) + 448LL))(
      *(_QWORD*)(v3 + 24), 1);
  v4 = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (v4 == (_QWORD*)(v3 + 2208)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_9:
  v6 = *v0;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  if (((*(__int64 (**)(_QWORD))(**(_QWORD**)(v8 + 24) + 456LL))(
           *(_QWORD*)(v8 + 24)) &
       1) != 0) {
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
      do {
        v10 = v9;
        v9 = *(_QWORD*)(v9 + 40);
      } while (v9 != 0);
      result = (_QWORD*)GameRoutine_d856f0(v10);
      if (result == nullptr) {
        return result;
      }
    }
    else {
      result = (_QWORD*)GameRoutine_d856f0(0);
      if (result == nullptr) {
        return result;
      }
    }
    v12 = game_hub_ProcHubSeqView_instance_;
    v23 = 30;
    strcpy(v24, "TryPopWorldPost");
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, &v23);
      v13 = *(_QWORD*)(*(_QWORD*)(v12 + 416) + 40LL);
      if (v13 != 0) {
        v14 = 0;
        do {
          v13 = *(_QWORD*)(v13 + 40);
          ++v14;
        } while (v13 != 0);
        v25 = &v23;
        *((_DWORD*)GameRoutine_d8bae0((__int64**)(v12 + 424), &v23,
                                      (__int64)std___1_piecewise_construct_ptr,
                                      (__int64**)&v25) +
          14) = v14;
      }
    }
    if ((v23 & 1) != 0 && *(_QWORD*)&v24[15] != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v15);
    }
  }
  v23 = 30;
  strcpy(v24, "TryPopWorldPost");
  v16 = GameRoutine_d859a0((__int64)&v23);
  v17 = *v0;
  v18 = *(
      _QWORD*)(v17 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v18 != 0) {
    v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 472LL))(v18);
  }
  else {
    v19 = 0;
  }
  v20 = *(void (**)(void))(**(_QWORD**)(v19 + 24) + 448LL);
  if ((v16 & 1) == 0) {
    v20();
    result = *(_QWORD**)(v19 + 2240);
    *(_QWORD*)(v19 + 2240) = 0;
    if (result == (_QWORD*)(v19 + 2208)) {
      v21 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_36;
      }
      v21 = 40;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v21))((__int64)result);
    goto LABEL_36;
  }
  result = (_QWORD*)((__int64 (*)(void))v20)();
LABEL_36:
  if ((v23 & 1) != 0 && *(_QWORD*)&v24[15] != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
  }
  return result;
}

__int64 HubNatives_ccaad0(char* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  char* v8;
  char* v9;
  __int64 v10;
  int v11;
  __int64 v13;
  _QWORD v14[2];

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
  v7 = *a1;
  v8 = *((char**)a1 + 2);
  v13 = 0;
  if ((v7 & 1) != 0) {
    v9 = v8;
  }
  else {
    v9 = a1 + 1;
  }
  v14[1] = v9;
  v14[0] = game_HashString(v9);
  UnitItem_6e8800(&v13, v14);
  v10 = game_TransporterConst_List_instance__ptr[0];
  v11 = GameRoutine_89aac0(
      *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      &v13);
  if (v11 == -1) {
    return 0;
  }
  else {
    return *(
        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 8LL) + 8LL) +
                           12LL * v11 + 2);
  }
}

__int64 hub_UseTransporterCount(char* a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  unsigned __int64 v13[2];
  __int64 v14;

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
  v9 = *a1;
  v10 = *((_QWORD*)a1 + 2);
  v14 = 0;
  if ((v9 & 1) != 0) {
    v11 = v10;
  }
  else {
    v11 = (__int64)(a1 + 1);
  }
  v13[1] = v11;
  v13[0] = game_HashString_alt1(v11);
  UnitItem_6e8800_alt1((__int64)&v14, v13);
  result = GameRoutine_89aac0_alt1(
      *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL),
      &v14);
  if ((_DWORD)result != -1) {
    return X8CALL_X0(
        __int64, TransporterConst_89cb30((void*)((__int64)v13), result, a2));
  }
  return result;
}

_QWORD* HubNatives_ccaff0()
{
  bool v0;
  bool v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* result;
  __int64 v9;

  if (game_hub_ProcHubSeqView_instance_ == 0 ||
      (GameData_21f3d10 != 0
           ? (v0 = *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0)
           : (v0 = true),
       !v0 ? (v1 = *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0)
           : (v1 = false),
       !v1 || (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) != 0 ||
           *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 139) != 0 ||
           *(int*)(GameData_21f3d10 + 152) > 0 ||
           (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                           16.683f) /
                   1000.0f) <= 0.0f)) {
    v5 = as_g_script_manager;
    v6 = *(_QWORD*)(v5 +
                    8LL * (*(unsigned int (**)(__int64))(
                              *(_QWORD*)as_g_thread_info + 72LL))(
                              as_g_thread_info) +
                    4384);
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 472LL))(v6);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v7 + 24) + 448LL))(*(_QWORD*)(v7 + 24), 0);
  }
  v2 = as_g_script_manager;
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
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v9 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v9))((__int64)result);
}

_QWORD* HubNatives_ccb180()
{
  bool v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* result;
  __int64 v8;

  if (*(int*)(*(_QWORD*)(GameData_21f3d10 + 216) + 252LL) < 1 ||
      game_hub_ProcHubSeqView_instance_ == 0 ||
      (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) != 0
           ? (v0 = *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0)
           : (v0 = false),
       !v0 || (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) != 0 ||
           *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 139) != 0 ||
           *(int*)(GameData_21f3d10 + 152) > 0 ||
           (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                           16.683f) /
                   1000.0f) <= 0.0f)) {
    v4 = as_g_script_manager;
    v5 = *(_QWORD*)(v4 +
                    8LL * (*(unsigned int (**)(__int64))(
                              *(_QWORD*)as_g_thread_info + 72LL))(
                              as_g_thread_info) +
                    4384);
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v6 + 24) + 448LL))(*(_QWORD*)(v6 + 24), 0);
  }
  v1 = as_g_script_manager;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  else {
    v3 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v3 + 24) + 448LL))(
      *(_QWORD*)(v3 + 24), 1);
  result = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (result == (_QWORD*)(v3 + 2208)) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v8 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
}

__int64 HubNatives_ccb310(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  _QWORD v9[2];
  char* v10;

  v1 = GameData_220d618;
  if ((*(_BYTE*)a1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 16);
  }
  else {
    v2 = a1 + 1;
  }
  v3 = strlen(v2);
  if (v3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v3);
  }
  v4 = v3;
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (v3 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v6, 16,
                                               0);
    v9[1] = v4;
    v10 = v5;
    v9[0] = v6 | 1;
  }
  else {
    LOBYTE(v9[0]) = 2 * v3;
    v5 = (char*)v9 + 1;
    if (v3 == 0) {
      goto LABEL_13;
    }
  }
  memmove(v5, v2, v4);

LABEL_13:
  v5[v4] = 0;
  result = GameRoutine_ee2600(v1, v9);
  if ((v9[0] & 1) != 0 && v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  return result;
}

unsigned __int64 HubNatives_ccb460(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;

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
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  result = game_HashString(v7);
  if (result != 0) {
    v9 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v9 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v11 = v9 - 1;
      if ((v9 & (v9 - 1)) != 0) {
        v12 = result;
        if (result >= v9) {
          v12 = result % v9;
        }
      }
      else {
        v12 = v11 & result;
      }
      v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v12);
      if (v13 != nullptr) {
        v14 = (_QWORD*)*v13;
        if (v14 != nullptr) {
          if ((v9 & v11) == 0) {
            while (1) {
              v16 = v14[1];
              if (v16 == result) {
                if (v14[2] == result) {
                  goto LABEL_37;
                }
              }
              else if ((v16 & v11) != v12) {
                return result;
              }
              v14 = (_QWORD*)*v14;
              if (v14 == nullptr) {
                return result;
              }
            }
          }
          do {
            v15 = v14[1];
            if (v15 == result) {
              if (v14[2] == result) {
              LABEL_37:
                if (v14[3] != 0) {
                  return GameRoutine_f979a0(GameData_21f3ce0);
                }
                return result;
              }
            }
            else {
              if (v15 >= v9) {
                v15 %= v9;
              }
              if (v15 != v12) {
                return result;
              }
            }
            v14 = (_QWORD*)*v14;
          } while (v14 != nullptr);
        }
      }
    }
  }
  return result;
}

_QWORD* HubNatives_ccba40(_QWORD* result, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  char* v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  char* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  char* v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  char* v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;

  v3 = result;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    result[1] = a2[1];
    result[2] = v5;
    *result = v4;
  }
  if ((a2[3] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 3, a2[5], a2[4]);
  }
  else {
    v6 = a2[3];
    v7 = a2[5];
    v3[4] = a2[4];
    v3[5] = v7;
    v3[3] = v6;
  }
  v8 = a2[7];
  v3[6] = a2[6];
  v3[7] = v8;
  if ((a2[8] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 8, a2[10], a2[9]);
  }
  else {
    v9 = a2[8];
    v10 = a2[10];
    v3[9] = a2[9];
    v3[10] = v10;
    v3[8] = v9;
  }
  if ((a2[11] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 11, a2[13], a2[12]);
  }
  else {
    v11 = a2[11];
    v12 = a2[13];
    v3[12] = a2[12];
    v3[13] = v12;
    v3[11] = v11;
  }
  v3[15] = 0;
  v3[16] = 0;
  v3[14] = 0;
  v13 = (char*)a2[14];
  v14 = (char*)a2[15];
  v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v16 = v14 - v13;
  if (v14 != v13) {
    if (0xAAAAAAAAAAAAAAABLL * (v16 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_75;
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v14 - v13, 16, 0);
    v17 = result;
    v3[14] = result;
    v3[15] = result;
    v3[16] = (char*)result + v16;
    do {
      if ((*v13 & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(
            v17, *((_QWORD*)v13 + 2), *((_QWORD*)v13 + 1));
      }
      else {
        v18 = *(_QWORD*)v13;
        v19 = *((_QWORD*)v13 + 2);
        v17[1] = *((_QWORD*)v13 + 1);
        v17[2] = v19;
        *v17 = v18;
      }
      v13 += 24;
      v17 += 3;
    } while (v13 != v14);
    v3[15] = v17;
  }
  v20 = a2[18];
  v3[17] = a2[17];
  v3[18] = v20;
  *((_WORD*)v3 + 76) = *((_WORD*)a2 + 76);
  if ((a2[20] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 20, a2[22], a2[21]);
  }
  else {
    v21 = a2[20];
    v22 = a2[22];
    v3[21] = a2[21];
    v3[22] = v22;
    v3[20] = v21;
  }
  v3[24] = 0;
  v3[25] = 0;
  v3[23] = 0;
  v23 = (char*)a2[23];
  v24 = (char*)a2[24];
  v25 = v24 - v23;
  if (v24 != v23) {
    if (0xAAAAAAAAAAAAAAABLL * (v25 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_75;
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, v24 - v23, 16, 0);
    v26 = result;
    v3[23] = result;
    v3[24] = result;
    v3[25] = (char*)result + v25;
    do {
      if ((*v23 & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(
            v26, *((_QWORD*)v23 + 2), *((_QWORD*)v23 + 1));
      }
      else {
        v27 = *(_QWORD*)v23;
        v28 = *((_QWORD*)v23 + 2);
        v26[1] = *((_QWORD*)v23 + 1);
        v26[2] = v28;
        *v26 = v27;
      }
      v23 += 24;
      v26 += 3;
    } while (v23 != v24);
    v3[24] = v26;
  }
  if ((a2[26] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 26, a2[28], a2[27]);
  }
  else {
    v29 = a2[26];
    v30 = a2[28];
    v3[27] = a2[27];
    v3[28] = v30;
    v3[26] = v29;
  }
  v3[30] = 0;
  v3[31] = 0;
  v3[29] = 0;
  v31 = (char*)a2[29];
  v32 = (char*)a2[30];
  v33 = v32 - v31;
  if (v32 != v31) {
    if (0xAAAAAAAAAAAAAAABLL * (v33 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_75;
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, v32 - v31, 16, 0);
    v34 = result;
    v3[29] = result;
    v3[30] = result;
    v3[31] = (char*)result + v33;
    do {
      if ((*v31 & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(
            v34, *((_QWORD*)v31 + 2), *((_QWORD*)v31 + 1));
      }
      else {
        v35 = *(_QWORD*)v31;
        v36 = *((_QWORD*)v31 + 2);
        v34[1] = *((_QWORD*)v31 + 1);
        v34[2] = v36;
        *v34 = v35;
      }
      v31 += 24;
      v34 += 3;
    } while (v31 != v32);
    v3[30] = v34;
  }
  if ((a2[32] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 32, a2[34], a2[33]);
  }
  else {
    v37 = a2[32];
    v38 = a2[34];
    v3[33] = a2[33];
    v3[34] = v38;
    v3[32] = v37;
  }
  v3[36] = 0;
  v3[37] = 0;
  v3[35] = 0;
  v39 = (char*)a2[35];
  v40 = (char*)a2[36];
  v41 = v40 - v39;
  if (v40 != v39) {
    if (0xAAAAAAAAAAAAAAABLL * (v41 >> 3) > 0xAAAAAAAAAAAAAAALL) {
      goto LABEL_75;
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, v40 - v39, 16, 0);
    v42 = result;
    v3[35] = result;
    v3[36] = result;
    v3[37] = (char*)result + v41;
    do {
      if ((*v39 & 1) != 0) {
        result = (_QWORD*)fw_text_String_CopyTerminated(
            v42, *((_QWORD*)v39 + 2), *((_QWORD*)v39 + 1));
      }
      else {
        v43 = *(_QWORD*)v39;
        v44 = *((_QWORD*)v39 + 2);
        v42[1] = *((_QWORD*)v39 + 1);
        v42[2] = v44;
        *v42 = v43;
      }
      v39 += 24;
      v42 += 3;
    } while (v39 != v40);
    v3[36] = v42;
  }
  if ((a2[38] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 38, a2[40], a2[39]);
  }
  else {
    v45 = a2[38];
    v46 = a2[40];
    v3[39] = a2[39];
    v3[40] = v46;
    v3[38] = v45;
  }
  v3[42] = 0;
  v3[43] = 0;
  v3[41] = 0;
  v47 = (char*)a2[41];
  v48 = (char*)a2[42];
  v49 = v48 - v47;
  if (v48 == v47) {
    goto LABEL_65;
  }
  if (0xAAAAAAAAAAAAAAABLL * (v49 >> 3) > 0xAAAAAAAAAAAAAAALL) {
  LABEL_75:
    GameRoutine_64aa00(result);
  }
  result = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, v48 - v47, 16, 0);
  v50 = result;
  v3[41] = result;
  v3[42] = result;
  v3[43] = (char*)result + v49;
  do {
    if ((*v47 & 1) != 0) {
      result = (_QWORD*)fw_text_String_CopyTerminated(v50, *((_QWORD*)v47 + 2),
                                                      *((_QWORD*)v47 + 1));
    }
    else {
      v51 = *(_QWORD*)v47;
      v52 = *((_QWORD*)v47 + 2);
      v50[1] = *((_QWORD*)v47 + 1);
      v50[2] = v52;
      *v50 = v51;
    }
    v47 += 24;
    v50 += 3;
  } while (v47 != v48);
  v3[42] = v50;

LABEL_65:
  if ((a2[44] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(v3 + 44, a2[46], a2[45]);
  }
  else {
    v53 = a2[44];
    v54 = a2[46];
    v3[45] = a2[45];
    v3[46] = v54;
    v3[44] = v53;
  }
  *((_BYTE*)v3 + 376) = 0;
  *((_BYTE*)v3 + 440) = 0;
  if (*((_BYTE*)a2 + 440) == 1) {
    result = HandlePtr_cb34a0((__int64)(v3 + 47), a2 + 47);
    *((_BYTE*)v3 + 440) = 1;
  }
  *((_BYTE*)v3 + 448) = 0;
  *((_BYTE*)v3 + 512) = 0;
  if (*((_BYTE*)a2 + 512) == 1) {
    result = HandlePtr_cb34a0((__int64)(v3 + 56), a2 + 56);
    *((_BYTE*)v3 + 512) = 1;
  }
  *((_BYTE*)v3 + 520) = 0;
  *((_BYTE*)v3 + 584) = 0;
  if (*((_BYTE*)a2 + 584) == 1) {
    result = HandlePtr_cb34a0((__int64)(v3 + 65), a2 + 65);
    *((_BYTE*)v3 + 584) = 1;
  }
  return result;
}

__int64 HubNatives_ccbf80(__int64 result)
{
  __int64 v1;
  __int64 v2;
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
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  char v72;
  char v73;
  char v74;

  v1 = result;
  if (*(_BYTE*)(result + 584) == 1) {
    v2 = *(_QWORD*)(result + 560);
    if (v2 != 0) {
      v3 = *(_QWORD*)(result + 568);
      if (v2 == v3) {
        goto LABEL_9;
      }
      do {
        v4 = *(unsigned int*)(v3 - 8);
        v5 = v3 - 32;
        if ((_DWORD)v4 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd4b98[v4])(&v72,
                                                                       v3 - 32);
        }
        *(_DWORD*)(v3 - 8) = -1;
        v3 -= 32;
      } while (v5 != v2);
      v6 = *(_QWORD*)(v1 + 560);
      *(_QWORD*)(v1 + 568) = v2;
      if (v6 != 0) {
      LABEL_9:
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
      }
    }
    if ((*(_BYTE*)(v1 + 536) & 1) != 0 && *(_QWORD*)(v1 + 552) != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    }
  }
  if (*(_BYTE*)(v1 + 512) == 1) {
    v9 = *(_QWORD*)(v1 + 488);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v1 + 496);
      if (v9 == v10) {
        goto LABEL_25;
      }
      do {
        v11 = *(unsigned int*)(v10 - 8);
        v12 = v10 - 32;
        if ((_DWORD)v11 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd4b98[v11])(
              &v73, v10 - 32);
        }
        *(_DWORD*)(v10 - 8) = -1;
        v10 -= 32;
      } while (v12 != v9);
      v13 = *(_QWORD*)(v1 + 488);
      *(_QWORD*)(v1 + 496) = v9;
      if (v13 != 0) {
      LABEL_25:
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
      }
    }
    if ((*(_BYTE*)(v1 + 464) & 1) != 0 && *(_QWORD*)(v1 + 480) != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    }
  }
  if (*(_BYTE*)(v1 + 440) == 1) {
    v16 = *(_QWORD*)(v1 + 416);
    if (v16 != 0) {
      v17 = *(_QWORD*)(v1 + 424);
      if (v16 == v17) {
        goto LABEL_41;
      }
      do {
        v18 = *(unsigned int*)(v17 - 8);
        v19 = v17 - 32;
        if ((_DWORD)v18 != -1) {
          result = ((__int64 (*)(char*, __int64))GameData_1fd4b98[v18])(
              &v74, v17 - 32);
        }
        *(_DWORD*)(v17 - 8) = -1;
        v17 -= 32;
      } while (v19 != v16);
      v20 = *(_QWORD*)(v1 + 416);
      *(_QWORD*)(v1 + 424) = v16;
      if (v20 != 0) {
      LABEL_41:
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
      }
    }
    if ((*(_BYTE*)(v1 + 392) & 1) != 0 && *(_QWORD*)(v1 + 408) != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
    }
  }
  if ((*(_BYTE*)(v1 + 352) & 1) != 0 && *(_QWORD*)(v1 + 368) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
  }
  v24 = *(_QWORD*)(v1 + 328);
  if (v24 != 0) {
    v25 = *(_QWORD*)(v1 + 336);
    if (v24 == v25) {
      goto LABEL_65;
    }
    v26 = *(_QWORD*)(v1 + 336);
    v27 = fw_memory_g_heap_manager_ptr;
    do {
      v28 = *(_BYTE*)(v26 - 24);
      v26 -= 24;
      if ((v28 & 1) != 0 && *(_QWORD*)(v25 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v29);
      }
      v25 = v26;
    } while (v26 != v24);
    v30 = *(_QWORD*)(v1 + 328);
    *(_QWORD*)(v1 + 336) = v24;
    if (v30 != 0) {
    LABEL_65:
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
    }
  }
  if ((*(_BYTE*)(v1 + 304) & 1) != 0 && *(_QWORD*)(v1 + 320) != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
  }
  v33 = *(_QWORD*)(v1 + 280);
  if (v33 != 0) {
    v34 = *(_QWORD*)(v1 + 288);
    if (v33 == v34) {
      goto LABEL_84;
    }
    v35 = *(_QWORD*)(v1 + 288);
    v36 = fw_memory_g_heap_manager_ptr;
    do {
      v37 = *(_BYTE*)(v35 - 24);
      v35 -= 24;
      if ((v37 & 1) != 0 && *(_QWORD*)(v34 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v36 + v38);
      }
      v34 = v35;
    } while (v35 != v33);
    v39 = *(_QWORD*)(v1 + 280);
    *(_QWORD*)(v1 + 288) = v33;
    if (v39 != 0) {
    LABEL_84:
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
    }
  }
  if ((*(_BYTE*)(v1 + 256) & 1) != 0 && *(_QWORD*)(v1 + 272) != 0) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
  }
  v42 = *(_QWORD*)(v1 + 232);
  if (v42 != 0) {
    v43 = *(_QWORD*)(v1 + 240);
    if (v42 == v43) {
      goto LABEL_103;
    }
    v44 = *(_QWORD*)(v1 + 240);
    v45 = fw_memory_g_heap_manager_ptr;
    do {
      v46 = *(_BYTE*)(v44 - 24);
      v44 -= 24;
      if ((v46 & 1) != 0 && *(_QWORD*)(v43 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v45 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v45 + v47);
      }
      v43 = v44;
    } while (v44 != v42);
    v48 = *(_QWORD*)(v1 + 232);
    *(_QWORD*)(v1 + 240) = v42;
    if (v48 != 0) {
    LABEL_103:
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49);
    }
  }
  if ((*(_BYTE*)(v1 + 208) & 1) != 0 && *(_QWORD*)(v1 + 224) != 0) {
    v50 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v50 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v50);
  }
  v51 = *(_QWORD*)(v1 + 184);
  if (v51 != 0) {
    v52 = *(_QWORD*)(v1 + 192);
    if (v51 == v52) {
      goto LABEL_122;
    }
    v53 = *(_QWORD*)(v1 + 192);
    v54 = fw_memory_g_heap_manager_ptr;
    do {
      v55 = *(_BYTE*)(v53 - 24);
      v53 -= 24;
      if ((v55 & 1) != 0 && *(_QWORD*)(v52 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v54 + 200LL) != 0) {
          v56 = 128;
        }
        else {
          v56 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v54 + v56);
      }
      v52 = v53;
    } while (v53 != v51);
    v57 = *(_QWORD*)(v1 + 184);
    *(_QWORD*)(v1 + 192) = v51;
    if (v57 != 0) {
    LABEL_122:
      v58 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v58 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
    }
  }
  if ((*(_BYTE*)(v1 + 160) & 1) != 0 && *(_QWORD*)(v1 + 176) != 0) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
  }
  v60 = *(_QWORD*)(v1 + 112);
  if (v60 != 0) {
    v61 = *(_QWORD*)(v1 + 120);
    if (v60 == v61) {
      goto LABEL_141;
    }
    v62 = *(_QWORD*)(v1 + 120);
    v63 = fw_memory_g_heap_manager_ptr;
    do {
      v64 = *(_BYTE*)(v62 - 24);
      v62 -= 24;
      if ((v64 & 1) != 0 && *(_QWORD*)(v61 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v63 + 200LL) != 0) {
          v65 = 128;
        }
        else {
          v65 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v63 + v65);
      }
      v61 = v62;
    } while (v62 != v60);
    v66 = *(_QWORD*)(v1 + 112);
    *(_QWORD*)(v1 + 120) = v60;
    if (v66 != 0) {
    LABEL_141:
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v67 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
    }
  }
  if ((*(_BYTE*)(v1 + 88) & 1) != 0 && *(_QWORD*)(v1 + 104) != 0) {
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
  }
  if ((*(_BYTE*)(v1 + 64) & 1) != 0 && *(_QWORD*)(v1 + 80) != 0) {
    v69 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v69 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0 && *(_QWORD*)(v1 + 40) != 0) {
    v70 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v70 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
  }
  if ((*(_BYTE*)v1 & 1) != 0 && *(_QWORD*)(v1 + 16) != 0) {
    v71 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v71 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v71);
  }
  return result;
}

#pragma GCC visibility pop
