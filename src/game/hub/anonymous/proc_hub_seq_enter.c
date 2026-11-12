#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
extern __int64 (*GameData_1fadc00[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 GameData_21f3c90;
__int64 ProcHubSeqEnter_Destructor(__int64 a1);
__int64 CharacterControllerPlayer_10c8e20(void);
__int64 CharacterControllerPlayer_10c9b80(float);
__int64 GameRoutine_104e1d0(_QWORD, _QWORD);
__int64 GameRoutine_104e620(_QWORD);
__int64 GameRoutine_104f0e0(_QWORD, _QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 GameRoutine_918b10(_QWORD);
__int64 GameRoutine_cbb4c0(_QWORD, _QWORD);
__int64 GameRoutine_d1ff20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d20140(_QWORD, _QWORD);
__int64 GameRoutine_d8ce40(_QWORD);
__int64 GameRoutine_d8cf60(_QWORD);
__int64 GameRoutine_d9ac20(_QWORD);
__int64 GameRoutine_d9f4e0(_QWORD);
__int64 GameRoutine_f482e0(void);
__int64 Manager_d55030(_QWORD);
__int64 Manager_d551a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_hub_Character_RebuildAppearance(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern _UNKNOWN GameData_1a919f8;
extern __int128 GameData_1a83150;
extern __int64 (*GameData_1fad698[])();
extern __int64 (*GameData_1fad7b8[])();
extern __int64 (*GameData_1fad918[])();
extern __int64 (*GameData_1fad998[])();
extern __int64 (*GameData_1fada18[])();
extern __int64 (*GameData_1fadca0[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dc30[8];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc68;
extern __int64 GameData_21c9608;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3ca8;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3cd0;
extern __int64 GameData_21f3ce0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_22127a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212d458[7];
__int64 game_hub_anonymous_ProcHubSeqEnter_RunNextTimeline(__int64 result);
__int64 game_hub_anonymous_ProcHubSeqEnter_RunReloadAll(__int64 result);
__int64 ProcHubSeqEnter_915c00(__int64 a1);
__int64 game_hub_anonymous_ProcHubSeqEnter_RunProgressDate(__int64 result);
__int64 game_hub_anonymous_ProcHubSeqEnter_RunProgressMinute(__int64 result);
__int64 ProcHubSeqEnter_915ee0();
__int64 ProcHubSeqEnter_915f80();
__int64 ProcHubSeqEnter_916060(__int64 result);
_QWORD* ProcHubSeqEnter_9161e0(__int64 a1);
__int64 ProcHubSeqEnter_916720(__int64 result);
__int64 ProcHubSeqEnter_916810(__int64 result);
void ProcHubSeqEnter_916860();
__int64 ProcHubSeqEnter_916950(__int64 result);
void ProcHubSeqEnter_916bb0();
void ProcHubSeqEnter_916df0();
__int64 game_hub_anonymous_ProcHubSeqEnter_RunConvergeResult(__int64 result);
__int64 ProcHubSeqEnter_917320(__int64 result);
__int64 ProcHubSeqEnter_9173c0(__int64 result);
__int64 ProcHubSeqEnter_917470(__int64 result);
__int64 ProcHubSeqEnter_917cd0();
__int64 game_hub_anonymous_ProcHubSeqEnter_RunReloadAll_closure_Invoke();
__int64 ProcHubSeqEnter_918f60(__int64 a1, _QWORD* a2);
_QWORD** ProcHubSeqEnter_918fa0(_QWORD** result, _QWORD* a2);
float ProcHubSeqEnter_918fc0(_DWORD** a1, float* a2);
_QWORD** ProcHubSeqEnter_918fd0(_QWORD** result, __int64* a2);
_QWORD** ProcHubSeqEnter_918ff0(_QWORD** result, __int64* a2);
_BYTE** ProcHubSeqEnter_919010(_BYTE** result, _BYTE* a2);
__int64 game_hub_anonymous_ProcHubSeqEnter_RunConvergeResult_closure_Invoke();
__attribute__((swiftcall)) void GameRoutine_104fe60(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_d9b810(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_e1bfe0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 Dir_70d7a0(_QWORD);
__int64 GameRoutine_17b8dd0(void);
__int64 GameRoutine_17b95c0(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 GameRoutine_8319e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_86b4e0(_QWORD);
__int64 GameRoutine_88d160(void);
__int64 GameRoutine_913ca0(__int64, __int64*);
__int64 GameRoutine_db2560(_QWORD, _QWORD);
__int64 GameRoutine_e2a8a0(_QWORD);
__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD);
__int64 Manager_d54c90(_QWORD);
__int64 ProcHubSeqEnter_918ce0(_QWORD, _QWORD);
__int64 ProcHubSeqEnter_919600(_QWORD, _QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 ScheduleNatives_869280(_QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 sprintf(_QWORD, const char*, ...);
__int64 strlen(_QWORD);
extern _UNKNOWN* as_g_context_slots_ptr;
extern __int64 (*GameData_1fad738[])();
extern __int64 (*GameData_1fad828[14])();
extern __int64 (*GameData_1fad860[7])();
extern __int64 (*GameData_1fada98[])();
extern __int64 GameData_1ad2a61;
extern __int64 GameData_212dbd0[6];
extern __int64 GameData_212dbd8[5];
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_21f9030;
extern __int64 GameData_21f9038;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 game_script_hub_talk_g_select_menu;
extern char* GameData_1fad6f8;
extern char* GameData_1fad898;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
unsigned __int64 ProcHubSeqEnter_915440_alt1(unsigned __int64 result) __asm__(
    "ProcHubSeqEnter_915440");
unsigned __int64
ProcHubSeqEnter_916440_alt1(__int64 a1) __asm__("ProcHubSeqEnter_916440");
void ProcHubSeqEnter_916c70();
unsigned __int64 game_hub_anonymous_ProcHubSeqEnter_RunRecallData_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_hub_anonymous_ProcHubSeqEnter_RunRecallData");
void ProcHubSeqEnter_917d80();
_QWORD*
game_hub_anonymous_ProcHubSeqEnter_RunNextTimeline_closure_Invoke(__int64 a1);
_QWORD*
game_hub_anonymous_ProcHubSeqEnter_RunLocalWarp_closure_Clone(__int64 a1);
_QWORD* game_hub_anonymous_ProcHubSeqEnter_RunLocalWarp_closure_CloneInto(
    _QWORD* result, __int64 a2);
__int64
game_hub_anonymous_ProcHubSeqEnter_RunProgressDate_closure_Invoke(__int64 a1);
__int64
game_hub_anonymous_ProcHubSeqEnter_RunProgressMinute_closure_Invoke(__int64 a1);
__int64
game_hub_anonymous_ProcHubSeqEnter_RunRecallData_closure_Invoke(__int64 a1,
                                                                __int64* a2);
__attribute__((swiftcall)) void game_fa4b80(PSEUDO_X8);
__int64* game_Tutorial_CreateBind(__int64, __int64*);
__int64 GameRoutine_10c0c60(__int64);
__int64 GameRoutine_120ef00();
__int64 GameRoutine_d86670();
__int64 GameRoutine_f482e0_alt1(__int64) __asm__("GameRoutine_f482e0");
__int64 GameRoutine_fb58f0();
__int64 HubCharacterNatives_cb9240(_QWORD*);
__int64 Manager_d54c90_alt1(__int64) __asm__("Manager_d54c90");
__int64 game_1023ae0(__int64 result);
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_dbdff0(__int64, int32x2_t*);
extern __int64 GameData_212dbf8;
extern __int64 GameData_21f3cd8;
extern __int64 GameData_21f3d08;
void GameRoutine_cebf00(__int64, int);
void GameRoutine_efa7e0();
__int64 ProcHubSeqEnter_9163f0();
__int64 ProcHubSeqEnter_916e10();
__int64* ProcHubSeqEnter_9174e0(__int64 a1);
__int64
game_hub_anonymous_ProcHubSeqEnter_RunLocalWarp_closure_Invoke(int32x2_t* a1);
void ProcHubSeqEnter_918b10();
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void ProcHubSeqEnter_916ea0(__int64 a1);
__attribute__((swiftcall)) void game_hub_e1b4d0(PSEUDO_X8);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);
__int64 GameHr_717fc0(unsigned __int64*, int);
__int64 GameRoutine_8319e0_alt1(__int64 result, char*, __int64, __int64,
                                char) __asm__("GameRoutine_8319e0");
__int64 GameRoutine_86b4e0_alt1(__int64*) __asm__("GameRoutine_86b4e0");
__int64 LocatorDispos_db2560(__int64, unsigned __int8*);
__int64 ProcList_9bd480_alt1(__int64) __asm__("ProcList_9bd480");
__int64 fw_text_String_CopyTerminated_alt2(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64
game_ProcList_Call_9bcfa0_alt1(__int64,
                               __int64) __asm__("game_ProcList_Call_9bcfa0");
__int64 game_hub_Character_RebuildAppearance_alt1(__int64) __asm__(
    "game_hub_Character_RebuildAppearance");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
unsigned __int16*
Dir_70d7a0_alt1(unsigned __int16* result) __asm__("Dir_70d7a0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8*
ProcHubSeqEnter_919600_alt1(unsigned __int8*,
                            unsigned __int8*) __asm__("ProcHubSeqEnter_919600");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_hub_anonymous_ProcHubSeqEnter_RunRecallData(__int64 a1);
extern __int64 game_ProcFadeView_instance_;
__int64 ProcHubSeqEnter_916320(__int64 a1);
__int64 GameHr_918ce0(__int64*, __int64);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void GameHr_913ca0(__int64, __int64);
void ProcHubSeqEnter_915440(__int64 a1);
void ProcHubSeqEnter_916440(__int64 a1);
__int64 Message_16f9b50(__int64);
extern _UNKNOWN GameData_1ae979a;
const char* ProcHubSeqEnter_917b00(__int64 a1);

__int64 game_hub_anonymous_ProcHubSeqEnter_RunNextTimeline(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;
  _QWORD v6[4];
  _QWORD* v7;

  v1 = GameData_21f3cd0;
  if (*(_BYTE*)(GameData_21f3cd0 + 8) == 0) {
    return result;
  }
  *(_BYTE*)(result + 233) = 1;
  *(_BYTE*)(v1 + 8) = 0;
  v7 = v6;
  v4[0] = GameData_1fad698;
  v4[1] = result;
  v5 = v4;
  v6[0] = GameData_1fad698;
  v6[1] = result;
  GameRoutine_104e1d0(result, v6);
  if (v7 == v6) {
    v2 = 32;
    goto LABEL_6;
  }
  if (v7 != nullptr) {
    v2 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v7 + v2))((__int64)v7);
  }
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

__int64 game_hub_anonymous_ProcHubSeqEnter_RunReloadAll(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;
  _QWORD v5[4];
  _QWORD* v6;

  if (*(_BYTE*)(GameData_21f3cd0 + 9) == 0) {
    return result;
  }
  *(_BYTE*)(GameData_21f3cd0 + 9) = 0;
  v3[0] = GameData_1fad7b8;
  v3[1] = result;
  v4 = v3;
  v6 = v5;
  v5[0] = GameData_1fad7b8;
  v5[1] = result;
  GameRoutine_104e1d0(result, v5);
  if (v6 == v5) {
    v1 = 32;
    goto LABEL_6;
  }
  if (v6 != nullptr) {
    v1 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v6 + v1))((__int64)v6);
  }
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

void ProcHubSeqEnter_915440(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64* v11;
  const char* v12;
  __int64 v13;
  const char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _BYTE* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  const char* v30;
  unsigned __int64 v31;
  const char* v32;
  __int64 v33;
  bool v34;
  unsigned __int64 v35;
  const char* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _BYTE* v77;
  __int64 v78;
  _BYTE* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  struct {
    _QWORD v85[2];
    char* v86;
  } v85_;
  struct {
    __int64 v87;
    unsigned __int64 v88;
    const char* v89;
    int v90;
  } v87_;
  struct {
    _BYTE* v91;
    _BYTE* v92;
    unsigned __int64 v93;
  } v91_;
  struct {
    __int64 v94;
    unsigned __int64 v95;
    char* v96;
  } v94_;
  struct {
    _WORD v97[8];
    char* v98;
  } v97_;

  v1 = *(_QWORD*)GameData_212dbd0[0];
  v2 = *(__int64**)(*(_QWORD*)GameData_212dbd0[0] + 32LL);
  if (*(__int64**)(*(_QWORD*)GameData_212dbd0[0] + 40LL) == v2) {
    return;
  }
  v97_.v97[0] = 0;
  v3 = (__int64*)*v2;
  if ((*(_BYTE*)*v2 & 1) != 0) {
    v7 = a1;
    fw_text_String_CopyTerminated_alt2(&v94_.v94, v3[2], v3[1]);
    a1 = v7;
  }
  else {
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v94_.v95 = v5;
    v94_.v96 = (char*)v6;
    v94_.v94 = v4;
  }
  if ((v94_.v94 & 1) != 0) {
    v8 = v94_.v95;
  }
  else {
    v8 = (unsigned __int64)(unsigned __int8)v94_.v94 >> 1;
  }
  if ((v94_.v94 & 1) != 0) {
    v9 = v94_.v96;
  }
  else {
    v9 = (char*)&v94_.v94 + 1;
  }
  v10 = v8 + 1;
  if (v8 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_159:
    String_60a1d0_alt1();
  }
  v83 = a1;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (const char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v13, 16, 0);
    v87_.v88 = v8 + 1;
    v87_.v89 = v12;
    v87_.v87 = v13 | 1;
    goto LABEL_19;
  }
  v87_.v88 = 0;
  v87_.v89 = nullptr;
  v87_.v87 = (unsigned __int8)(2 * v10);
  v12 = (char*)&v87_.v87 + 1;
  if (v8 != 0) {
  LABEL_19:
    memmove_alt1((__int64)v12, (__int64)v9, v8);
  }
  v84 = v1;
  *(_WORD*)&v12[v8] = 40;
  if ((v87_.v87 & 1) != 0) {
    v14 = v87_.v89;
  }
  else {
    v14 = (char*)&v87_.v87 + 1;
  }
  if ((v87_.v87 & 1) != 0) {
    v15 = v87_.v88;
  }
  else {
    v15 = (unsigned __int64)(unsigned __int8)v87_.v87 >> 1;
  }
  GameRoutine_1a09ce0_alt1((__int64)v97_.v97, v14, v15);
  if ((v87_.v87 & 1) != 0 && v87_.v89 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v11 + v16, (__int64)v87_.v89);
  }
  v91_.v92 = nullptr;
  v91_.v93 = 0;
  v91_.v91 = nullptr;
  v17 = (__int64*)*v2;
  if (0xAAAAAAAAAAAAAAABLL * ((v2[1] - *v2) >> 3) >= 2) {
    v18 = 1;
    v19 = 0;
    do {
      v20 = &v17[v19];
      v21 = v20 + 3;
      if ((v20[3] & 1) != 0) {
        fw_text_String_CopyTerminated_alt2(&v87_.v87, v20[5], v20[4]);
      }
      else {
        v22 = *v21;
        v23 = v21[1];
        v24 = v21[2];
        v87_.v88 = v23;
        v87_.v89 = (const char*)v24;
        v87_.v87 = v22;
      }
      v25 = v91_.v92;
      v87_.v90 = 4;
      if ((unsigned __int64)v91_.v92 >= v91_.v93) {
        v27 = GameHr_918ce0((__int64*)&v91_.v91, (__int64)&v87_.v87);
      }
      else {
        *v91_.v92 = 0;
        *((_DWORD*)v25 + 6) = -1;
        v26 = v87_.v90;
        if (v87_.v90 != -1) {
          v85_.v85[0] = v25;
          ((void (*)(_QWORD*, __int64*))GameData_1fad860[v87_.v90])(v85_.v85,
                                                                    &v87_.v87);
          *((_DWORD*)v25 + 6) = v26;
        }
        v27 = (__int64)(v25 + 32);
      }
      v91_.v92 = (_BYTE*)v27;
      if (v87_.v90 != -1) {
        ((void (*)(_QWORD*, __int64*))GameData_1fad828[v87_.v90])(v85_.v85,
                                                                  &v87_.v87);
      }
      v28 = *v2 + v19 * 8;
      v29 = *(unsigned __int8*)(v28 + 24);
      v30 = (const char*)(v28 + 25);
      v33 = v28 + 32;
      v31 = *(_QWORD*)(v28 + 32);
      v32 = *(const char**)(v33 + 8);
      v34 = (v29 & 1) == 0;
      v35 = v29 >> 1;
      if (v34) {
        v36 = v30;
      }
      else {
        v36 = v32;
      }
      if (v34) {
        v37 = v35;
      }
      else {
        v37 = v31;
      }
      GameRoutine_1a09ce0_alt1((__int64)v97_.v97, v36, v37);
      v17 = (__int64*)*v2;
      v38 = 0xAAAAAAAAAAAAAAABLL * ((v2[1] - *v2) >> 3);
      if (v18 != v38 - 1) {
        GameRoutine_1a09ce0_alt1((__int64)v97_.v97, ",", 1u);
        v17 = (__int64*)*v2;
        v38 = 0xAAAAAAAAAAAAAAABLL * ((v2[1] - *v2) >> 3);
      }
      ++v18;
      v19 += 3;
    } while (v38 > v18);
  }
  GameRoutine_1a09ce0_alt1((__int64)v97_.v97, ")", 1u);
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v39 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v39 = 0;
  }
  if (GameData_22127a8 != 0) {
    v40 = GameData_22127a8;
  }
  else {
    v40 = v39;
  }
  if ((v94_.v94 & 1) != 0) {
    v41 = v94_.v96;
  }
  else {
    v41 = (char*)&v94_.v94 + 1;
  }
  if ((v94_.v94 & 1) != 0) {
    v42 = v94_.v95;
  }
  else {
    v42 = (unsigned __int64)(unsigned __int8)v94_.v94 >> 1;
  }
  Manager_d9b810((void*)((__int64)&v87_.v87), v40, (__int64)v41, v42,
                 (__int64)&v91_.v91, 0);
  v43 = v87_.v87;
  v44 = (unsigned int)v87_.v88;
  *(_QWORD*)(v83 + 208) = v87_.v87;
  *(_DWORD*)(v83 + 216) = v44;
  if ((_DWORD)v44 == 0x2000 ||
      (v45 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v44))[1] == 0) {
    v46 = 0;
  }
  else if (*v45 == v43) {
    v46 = v45[1];
  }
  else {
    v46 = 0;
  }
  v47 = *(_QWORD**)(v83 + 192);
  *(_QWORD*)(v83 + 224) = v46;
  *(_QWORD*)(v83 + 152) = 0;
  *(_QWORD*)(v83 + 192) = 0;
  if (v47 == (_QWORD*)(v83 + 160)) {
    v48 = 32;
  }
  else {
    if (v47 == nullptr) {
      goto LABEL_75;
    }
    v48 = 40;
  }
  (*(void (**)(__int64))(*v47 + v48))((__int64)v47);
LABEL_75:
  v49 = *(_QWORD*)(v83 + 8);
  if (v49 != 0) {
    while (1) {
      if (*(_BYTE*)v49 == 2) {
        if (*(_DWORD*)(v49 + 32) == 1) {
          *(_QWORD*)(v83 + 16) = v49;
          *(_WORD*)(v83 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v49 == 0) {
        break;
      }
      v49 += 64;
    }
  }
  if ((v97_.v97[0] & 1) != 0) {
    v50 = v97_.v98;
  }
  else {
    v50 = (char*)v97_.v97 + 1;
  }
  sprintf_alt1((__int64)&v87_.v87, "RunScriptArgs [%s]", v50);
  v51 = strlen_alt1((const char*)&v87_.v87);
  if (v51 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_159;
  }
  v52 = v51;
  if (v51 >= 0x17) {
    if ((v51 | 7) == 0x17) {
      v54 = 26;
    }
    else {
      v54 = (v51 | 7) + 1;
    }
    v53 = (char*)fw_memory_HeapManager_Allocate_alt1(*v11, v54, 16, 0);
    v85_.v86 = v53;
    v85_.v85[0] = v54 | 1;
    goto LABEL_94;
  }
  LOBYTE(v85_.v85[0]) = 2 * v51;
  v53 = (char*)v85_.v85 + 1;
  if (v51 != 0) {
  LABEL_94:
    memcpy_alt1((__int64)v53, (__int64)&v87_.v87, v52);
  }
  v53[v52] = 0;
  if ((v85_.v85[0] & 1) != 0 && v85_.v86 != nullptr) {
    v55 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v11 + v55, (__int64)v85_.v86);
  }
  v56 = *(__int64**)(v84 + 40);
  v57 = v2 + 3;
  if (v2 + 3 != v56) {
    do {
      v59 = *v2;
      if (*v2 != 0) {
        v61 = v2[1];
        if (v59 == v61) {
          goto LABEL_103;
        }
        v62 = v2[1];
        do {
          v63 = *(_BYTE*)(v62 - 24);
          v62 -= 24;
          if ((v63 & 1) != 0) {
            v64 = *(_QWORD*)(v61 - 8);
            if (v64 != 0) {
              if (*(_QWORD*)(*v11 + 200) != 0) {
                v65 = 128;
              }
              else {
                v65 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v11 + v65, v64);
            }
          }
          v61 = v62;
        } while (v62 != v59);
        v58 = *v2;
        v2[1] = v59;
        v59 = v58;
        if (v58 != 0) {
        LABEL_103:
          if (*(_QWORD*)(*v11 + 200) != 0) {
            v60 = 128;
          }
          else {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v11 + v60, v59);
        }
        v2[1] = 0;
        v2[2] = 0;
      }
      *v2 = *v57;
      v2[1] = v57[1];
      v2[2] = v57[2];
      *v57 = 0;
      v57[1] = 0;
      v57[2] = 0;
      v57 += 3;
      v2 += 3;
    } while (v57 != v56);
    v56 = *(__int64**)(v84 + 40);
  }
  if (v2 != v56) {
    v66 = v56;
    do {
      v70 = *(v66 - 3);
      v66 -= 3;
      v68 = v70;
      if (v70 != 0) {
        v71 = *(v56 - 2);
        if (v68 == v71) {
          goto LABEL_123;
        }
        v72 = *(v56 - 2);
        do {
          v73 = *(_BYTE*)(v72 - 24);
          v72 -= 24;
          if ((v73 & 1) != 0) {
            v74 = *(_QWORD*)(v71 - 8);
            if (v74 != 0) {
              if (*(_QWORD*)(*v11 + 200) != 0) {
                v75 = 128;
              }
              else {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v11 + v75, v74);
            }
          }
          v71 = v72;
        } while (v72 != v68);
        v67 = *(v56 - 3);
        *(v56 - 2) = v68;
        v68 = v67;
        if (v67 != 0) {
        LABEL_123:
          if (*(_QWORD*)(*v11 + 200) != 0) {
            v69 = 128;
          }
          else {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v11 + v69, v68);
        }
      }
      v56 = v66;
    } while (v2 != v66);
  }
  *(_QWORD*)(v84 + 40) = v2;
  ProcHubSeqEnter_918b10();
  v76 = (__int64)v91_.v91;
  if (v91_.v91 != nullptr) {
    v77 = v91_.v92;
    if (v91_.v91 == v91_.v92) {
      goto LABEL_145;
    }
    do {
      v78 = *((unsigned int*)v77 - 2);
      v79 = v77 - 32;
      if ((_DWORD)v78 != -1) {
        ((void (*)(__int64*, _BYTE*))GameData_1fad828[v78])(&v87_.v87,
                                                            v77 - 32);
      }
      *((_DWORD*)v77 - 2) = -1;
      v77 -= 32;
    } while (v79 != (_BYTE*)v76);
    v91_.v92 = (_BYTE*)v76;
    v76 = (__int64)v91_.v91;
    if (v91_.v91 != nullptr) {
    LABEL_145:
      v80 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v11 + v80, v76);
    }
  }
  if ((v94_.v94 & 1) != 0 && v94_.v96 != nullptr) {
    v81 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v11 + v81, (__int64)v94_.v96);
  }
  if ((v97_.v97[0] & 1) != 0 && v97_.v98 != nullptr) {
    v82 = 128;
    if (*(_QWORD*)(*v11 + 200) == 0) {
      v82 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v11 + v82, (__int64)v97_.v98);
  }
}

__int64 ProcHubSeqEnter_915c00(__int64 a1)
{
  __int64 result;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  result = GameRoutine_d9f4e0(*(_QWORD*)GameData_212dc30[0]);
  if (game_hub_ProcHubSeqView_instance_ != 0 &&
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) != 0) {
    return result;
  }
  if (*(int*)(GameData_21f3cb8 + 32) <= 0 &&
      *(_DWORD*)(GameData_21f3cb8 + 16) <= 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         (v5 & v4) != 0)) {
      if (game_hub_ProcHubSeqView_instance_ == 0 ||
          (v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) == 0 ||
          *(_QWORD*)(v6 + 40) == 0) {
        v7 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
        if (v7 == 0 || *(_QWORD*)(v7 + 40) == 0) {
          return result;
        }
      }
    }
  }
  v8 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (v8 == (_QWORD*)(a1 + 160)) {
    v9 = 32;
    goto LABEL_24;
  }
  if (v8 != nullptr) {
    v9 = 40;
  LABEL_24:
    v8 = (_QWORD*)(*(__int64 (**)(__int64))(*v8 + v9))((__int64)v8);
  }
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == 1) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return GameRoutine_918b10(v8);
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        return GameRoutine_918b10(v8);
      }
      v10 += 64;
    }
  }
  return GameRoutine_918b10(v8);
}

__int64 game_hub_anonymous_ProcHubSeqEnter_RunProgressDate(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;
  _QWORD v6[4];
  _QWORD* v7;

  if (*(_BYTE*)(GameData_21f3cd0 + 28) != 1) {
    return result;
  }
  v1 = GameData_21f3cd0 + 8;
  *(_BYTE*)(result + 233) = 1;
  v4[0] = GameData_1fad918;
  v4[1] = result;
  v4[2] = v1;
  v5 = v4;
  v6[0] = GameData_1fad918;
  v6[1] = result;
  v7 = v6;
  v6[2] = v1;
  GameRoutine_104e1d0(result, v6);
  if (v7 == v6) {
    v2 = 32;
    goto LABEL_6;
  }
  if (v7 != nullptr) {
    v2 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v7 + v2))((__int64)v7);
  }
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

__int64 game_hub_anonymous_ProcHubSeqEnter_RunProgressMinute(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD v4[4];
  _QWORD* v5;
  _QWORD v6[4];
  _QWORD* v7;

  v1 = *(unsigned int*)(GameData_21f3cd0 + 12);
  if ((_DWORD)v1 == 0) {
    return result;
  }
  *(_DWORD*)(GameData_21f3cd0 + 12) = 0;
  v4[2] = v1;
  v6[2] = v1;
  v4[0] = GameData_1fad998;
  v4[1] = result;
  v5 = v4;
  v6[0] = GameData_1fad998;
  v6[1] = result;
  v7 = v6;
  GameRoutine_104e1d0(result, v6);
  if (v7 == v6) {
    v2 = 32;
    goto LABEL_6;
  }
  if (v7 != nullptr) {
    v2 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v7 + v2))((__int64)v7);
  }
  result = (__int64)v5;
  if (v5 == v4) {
    v3 = 32;
  }
  else {
    if (v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v5 + v3))((__int64)v5);
}

__int64 ProcHubSeqEnter_915ee0()
{
  __int64 v0;
  unsigned __int16* v1;
  int v2;
  __int64* v3;
  __int64 v4;
  __int64 result;

  v0 = *(_QWORD*)GameData_212c6a0[0];
  if (game_gmap_GmapClock_instance_ != 0) {
    v1 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v1 = (unsigned __int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v2 = ((__int16)v1[1] << 14) + (*v1 << 20) + ((__int16)v1[2] << 8);
  if (*(_DWORD*)(v0 + 320) != v2) {
    v3 = (__int64*)GameData_212dc30[0];
    *(_DWORD*)(v0 + 320) = v2;
    v4 = *v3;
    result = Manager_d55030(*(_QWORD*)GameData_212dbb8[0]);
    ++*(_QWORD*)(v4 + 72);
  }
  return result;
}

__int64 ProcHubSeqEnter_915f80()
{
  __int64 v0;
  __int16* v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 result;

  v0 = *(_QWORD*)GameData_212c6a0[0];
  v1 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v1 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  v2 = v1[1];
  v3 = *v1;
  v4 = v1[2];
  if (v2 * v3 * v4 != 0) {
    v5 = game_script_hub_schedule_kHourCycles[v1[3] % 24];
  }
  else {
    v5 = -1;
  }
  v6 = (v2 << 14) + (v3 << 20) + (v4 << 8) + v5;
  if (*(_DWORD*)(v0 + 324) != v6) {
    v7 = (__int64*)GameData_212dc30[0];
    *(_DWORD*)(v0 + 324) = v6;
    v8 = *v7;
    result = Manager_d551a0(*(_QWORD*)GameData_212dbb8[0]);
    ++*(_QWORD*)(v8 + 80);
  }
  return result;
}

__int64 ProcHubSeqEnter_916060(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(result + 232) & 1) != 0) {
    return result;
  }
  v1 = result;
  *(_BYTE*)(result + 232) = 1;
  v2 = *(_QWORD*)GameData_212dbb8[0] != 0
           ? *(_QWORD*)GameData_212dbb8[0] + 248LL
           : 0LL;
  v3 = GameData_22127a8 != 0 ? GameData_22127a8 : v2;
  result = GameRoutine_d9ac20(v3);
  if (game_hub_ProcHubSeqView_instance_ != 0 &&
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) != 0) {
    return result;
  }
  if (*(int*)(*(_QWORD*)GameData_212dbc8[0] + 32LL) <= 0 &&
      *(_DWORD*)(*(_QWORD*)GameData_212dbc8[0] + 16LL) <= 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v6 = 2)
             : (v6 = 3),
         (v6 & v5) != 0)) {
      if (game_hub_ProcHubSeqView_instance_ == 0 ||
          (v7 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) == 0 ||
          *(_QWORD*)(v7 + 40) == 0) {
        v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
        if (v8 == 0 || *(_QWORD*)(v8 + 40) == 0) {
          return result;
        }
      }
    }
  }
  v9 = *(_QWORD**)(v1 + 192);
  *(_QWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 192) = 0;
  if (v9 == (_QWORD*)(v1 + 160)) {
    v10 = 32;
    goto LABEL_31;
  }
  if (v9 != nullptr) {
    v10 = 40;
  LABEL_31:
    v9 = (_QWORD*)(*(__int64 (**)(__int64))(*v9 + v10))((__int64)v9);
  }
  v11 = *(_QWORD*)(v1 + 8);
  if (v11 != 0) {
    while (1) {
      if (*(_BYTE*)v11 == 2) {
        if (*(_DWORD*)(v11 + 32) == 1) {
          *(_QWORD*)(v1 + 16) = v11;
          *(_WORD*)(v1 + 136) &= ~0x80u;
          return GameRoutine_918b10(v9);
        }
      }
      else if (*(_BYTE*)v11 == 0) {
        return GameRoutine_918b10(v9);
      }
      v11 += 64;
    }
  }
  return GameRoutine_918b10(v9);
}

_QWORD* ProcHubSeqEnter_9161e0(__int64 a1)
{
  _QWORD* result;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = (_QWORD*)GameRoutine_cbb4c0(*(_QWORD*)GameData_212dc68, 1);
  if (game_hub_ProcHubSeqView_instance_ != 0 &&
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) != 0) {
    return result;
  }
  if (*(int*)(GameData_21f3cb8 + 32) <= 0 &&
      *(_DWORD*)(GameData_21f3cb8 + 16) <= 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 >
            2 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         (v5 & v4) != 0)) {
      if (game_hub_ProcHubSeqView_instance_ == 0 ||
          (v6 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) == 0 ||
          *(_QWORD*)(v6 + 40) == 0) {
        v7 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
        if (v7 == 0 || *(_QWORD*)(v7 + 40) == 0) {
          return result;
        }
      }
    }
  }
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_24;
    }
    v8 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
LABEL_24:
  v9 = *(_QWORD*)(a1 + 8);
  if (v9 != 0) {
    while (1) {
      if (*(_BYTE*)v9 == 2) {
        if (*(_DWORD*)(v9 + 32) == 1) {
          *(_QWORD*)(a1 + 16) = v9;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v9 == 0) {
        return result;
      }
      v9 += 64;
    }
  }
  return result;
}

__int64 ProcHubSeqEnter_916320(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int8 v2;
  unsigned __int64 v3;
  __int128 v4;
  int v5;
  __int64 v6;

  v2 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ != 0) {
    v3 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160);
    }
    else {
      v4 = *(_OWORD*)(v3 + 208);
    }
    v2 = *((float*)&v4 + 3) == 0x1.0000000000000p+0f &&
         LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                      (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(
                         v3 + 160, *((float*)&v4 + 3)))
                 .n128_f32[3] == 0x1.0000000000000p+0f;
  }
  if ((v2 & ((signed __int32)*(_DWORD*)(a1 + 236) > 1)) != 0) {
    v5 = 2;
  }
  else {
    v5 = 1;
  }
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  if ((signed __int32)*(_DWORD*)(v6 + 232) > v5) {
    v5 = *(_DWORD*)(v6 + 232);
  }
  *(_DWORD*)(v6 + 232) = v5;
  return GameRoutine_f482e0_alt1(v6);
}

__int64 ProcHubSeqEnter_9163f0()
{
  if (*(int*)(GameData_21f3d08 + 16) <= 0) {
    ((void (*)(__int64, _QWORD))GameRoutine_efa7e0)(GameData_21f3d08, 0);
  }
  return GameRoutine_10c0c60(GameData_21f3cd8);
}

void ProcHubSeqEnter_916440(__int64 a1)
{
  __int64 v1;
  int v2;
  unsigned int v3;
  int v4;
  __int64 v5;
  const char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12;
    char gap16_[8];
    char* v13;
  } v12_;
  char v14[256];

  v1 = GameData_21c9608;
  v2 = *(_DWORD*)(GameData_21c9608 + 928);
  v3 = v2 - 1;
  v4 = v2 + 3;
  if (v3 >= 5) {
    v4 = 3;
  }
  *(_DWORD*)(a1 + 152) = v4;
  v5 = *(unsigned int*)(v1 + 928);
  if ((unsigned int)v5 > 6) {
    v6 = nullptr;
  }
  else {
    v6 = (&GameData_1fad898)[2 * v5];
  }
  sprintf_alt1((__int64)v14, "SwitchCommonJumpLabel [%s]", v6);
  v7 = strlen_alt1(v14);
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
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v10, 16, 0);
    v12_.v13 = v9;
    v12_.v12 = v10 | 1;
  }
  else {
    LOBYTE(v12_.v12) = 2 * v7;
    v9 = (char*)&v12_.v12 + 1;
    if (v7 == 0) {
      goto LABEL_15;
    }
  }
  memcpy_alt1((__int64)v9, (__int64)v14, v8);
LABEL_15:
  v9[v8] = 0;
  if ((v12_.v12 & 1) != 0 && v12_.v13 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v12_.v13);
  }
  if (*(_DWORD*)(GameData_21c9608 + 928) != 0) {
    *(_DWORD*)(GameData_21c9608 + 928) = 0;
  }
}

__int64 ProcHubSeqEnter_916720(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v3 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v4 = std___1___shared_weak_count_lock(v3);
    result = std___1___shared_weak_count___release_weak(v1);
    if (v4 == 0 || v2 == 0) {
      if (v4 == 0) {
        return result;
      }
    }
    else {
      result = *(_QWORD*)(v2 + 56);
      if (*(_DWORD*)(v2 + 1112) == 3 && result != 0) {
        result = CharacterControllerPlayer_10c9b80(0.6);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  return result;
}

__int64 ProcHubSeqEnter_916810(__int64 result)
{
  __int64 v1;

  if ((*(_BYTE*)(result + 235) & 1) == 0) {
    v1 = result;
    result = GameRoutine_d8ce40(*(_QWORD*)GameData_212dbc8[0]);
    *(_BYTE*)(v1 + 235) = 1;
  }
  return result;
}

void ProcHubSeqEnter_916860()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else if (*(_DWORD*)(v1 + 1112) == 3 && *(_QWORD*)(v1 + 56) != 0) {
      CharacterControllerPlayer_10c9b80(0.4);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

__int64 ProcHubSeqEnter_916950(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  float32x4_t* v8;
  int v9;
  float v10;
  __int64 v11;
  atomic_ullong* v12;
  __int64 v13;
  float32x4_t v14;
  __int128 v15;
  __int128 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  char v26;
  char v27;
  char v28;
  char v29;
  char v30;
  char v31;
  int v32;

  v1 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v3 = result;
    v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = std___1___shared_weak_count___release_weak(v1);
    if (v5 == 0 || v2 == 0) {
      if (v5 == 0) {
        return result;
      }
    }
    else {
      v7 = GameData_212dc38[0];
      v8 = *(float32x4_t**)GameData_212dc38[0];
      v9 = *(_DWORD*)(*(_QWORD*)GameData_212dc38[0] + 100LL);
      v10 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 104LL);
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      *(_QWORD*)(v11 + 8) = 0;
      v12 = (atomic_ullong*)(v11 + 8);
      *(_QWORD*)(v11 + 16) = 0;
      *(_QWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      v13 = v11;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0x3F8000003F800000LL;
      *(_QWORD*)v11 = GameData_1fadca0;
      *(_QWORD*)(v11 + 80) = 0;
      *(_QWORD*)(v11 + 88) = 0;
      *(_QWORD*)(v11 + 32) = 0;
      *(_BYTE*)(v11 + 84) = 1;
      *(_DWORD*)(v11 + 80) = 1109393408;
      v14 = vaddq_f32(v8[2], (float32x4_t)GameData_1a83150);
      v23 = v11 + 32;
      v24 = v11;
      *(_QWORD*)(v11 + 32) = ((uint64_t*)&v14)[0];
      v15 = *(_OWORD*)(v11 + 32);
      *((_QWORD*)&v15 + 1) = ((uint32_t*)&v14)[2];
      *(_DWORD*)(v11 + 48) = v9;
      *(float*)(v11 + 52) = v10 + 8.0f;
      v16 = *(_OWORD*)(v11 + 48);
      *(_OWORD*)(v11 + 32) = v15;
      *(_OWORD*)(v11 + 48) = (unsigned __int64)v16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
      GameRoutine_d1ff20(v8, &v23, 0);
      v17 = v24;
      if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
      v18 = (float)v3;
      v19 = *(_QWORD*)v7;
      v20 = *(_QWORD*)(*(_QWORD*)v7 + 968LL);
      v21 = v18 / 1000.0f;
      *(_QWORD*)(v19 + 960) = 0;
      *(_QWORD*)(v19 + 968) = 0;
      if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v22 = v19;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak(v20);
        v19 = v22;
      }
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v25 = v21;
      v32 = 1065353216;
      v26 = 1;
      result = GameRoutine_d20140(v19, &v25);
      if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = std___1___shared_weak_count___release_weak(v13);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
  }
  return result;
}

void ProcHubSeqEnter_916bb0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else if (*(_DWORD*)(v1 + 1112) == 3 && *(_QWORD*)(v1 + 56) != 0) {
      CharacterControllerPlayer_10c8e20();
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

void ProcHubSeqEnter_916c70()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64* v9;
    __int64 v10;
  } v9_;
  struct {
    _QWORD v11[2];
    __int64 v12;
  } v11_;

  v0 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v2 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    std___1___shared_weak_count___release_weak_alt1(v0);
    if (v3 == 0 || v1 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      LOBYTE(v11_.v11[0]) = 4;
      strcpy((char*)v11_.v11 + 1, "Ex");
      LocatorDispos_db2560(*(_QWORD*)GameData_212dbb8[0] + 64LL,
                           (unsigned __int8*)v11_.v11);
      v5 = *(_QWORD*)GameData_212dc48[0];
      v6 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL);
      game_hub_e1b4d0((void*)(v11_.v11));
      game_hub_e1bfe0((void*)(&v9_.v9), v5, (__int64)v11_.v11,
                      (__int64*)(v6 + 560));
      if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v11_.v12);
      }
      v8 = v9_.v10;
      if (v9_.v10 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
      *(_QWORD*)(v1 + 1068) = 0x3F0000003F800000LL;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
  }
}

void ProcHubSeqEnter_916df0()
{
  __int64 v0;

  v0 = *(_QWORD*)(GameData_21c9608 + 328);
  if ((v0 & 0x10) != 0) {
    *(_QWORD*)(GameData_21c9608 + 328) = v0 & 0xFFFFFFFFFFFFFFEFLL;
  }
}

__int64 ProcHubSeqEnter_916e10()
{
  __int64 v0;
  _QWORD v2[2];

  if (*(_DWORD*)(GameData_21f3d10 + 136) == 0) {
    v0 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v0 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v0 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00();
    }
    v2[1] = &GameData_1a919f8;
    v2[0] = game_HashString_alt2((__int64)&GameData_1a919f8);
    game_VariableManager_SetFlag_alt1((__int64)v2, 0);
  }
  return GameRoutine_fb58f0();
}

void ProcHubSeqEnter_916ea0(__int64 a1)
{
  __int64 v1;
  unsigned __int8* v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v29;
    char gap16_[8];
    char* v30;
  } v29_;
  _BYTE v31[256];
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v32_;

  v1 = *(_QWORD*)GameData_212dbd0[0];
  if (*(_QWORD*)(*(_QWORD*)GameData_212dbd0[0] + 64LL) !=
      *(_QWORD*)(*(_QWORD*)GameData_212dbd0[0] + 56LL)) {
    ProcHubSeqEnter_916bb0();
    v2 = *(unsigned __int8**)(v1 + 56);
    if (v2 != *(unsigned __int8**)(v1 + 64)) {
      v3 = (__int64*)fw_memory_g_heap_manager_ptr;
      while (1) {
        v4 = *v2;
        if ((v4 & 1) != 0) {
          v5 = *((_QWORD*)v2 + 1);
        }
        else {
          v5 = v4 >> 1;
        }
        if (v5 == 0) {
          goto LABEL_45;
        }
        v32_.v33 = 0;
        v32_.v34 = 0;
        v32_.v32 = 0;
        if (*(_QWORD*)GameData_212dbb8[0] != 0) {
          v6 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
        }
        else {
          v6 = 0;
        }
        if (GameData_22127a8 != 0) {
          v7 = GameData_22127a8;
        }
        else {
          v7 = v6;
        }
        if ((v4 & 1) != 0) {
          v8 = *((_QWORD*)v2 + 2);
        }
        else {
          v8 = (__int64)(v2 + 1);
        }
        Manager_d9b810((void*)((__int64)v31), v7, v8, v5, (__int64)&v32_.v32,
                       0);
        if ((*v2 & 1) != 0) {
          v9 = *((unsigned __int8**)v2 + 2);
        }
        else {
          v9 = v2 + 1;
        }
        sprintf(v31, "PrePlaySeq [%s]", v9);
        v10 = strlen(v31);
        if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0_alt1();
        }
        v11 = v10;
        if (v10 >= 0x17) {
          break;
        }
        v12 = (char*)&v29_.v29 + 1;
        LOBYTE(v29_.v29) = 2 * v10;
        if (v10 != 0) {
          goto LABEL_29;
        }
      LABEL_30:
        v12[v11] = 0;
        if ((v29_.v29 & 1) != 0 && v29_.v30 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*v3 + 200) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v3 + v14, v29_.v30);
        }
        v15 = v32_.v32;
        if (v32_.v32 != 0) {
          v16 = v32_.v33;
          if (v32_.v32 == v32_.v33) {
            goto LABEL_42;
          }
          do {
            v17 = *(unsigned int*)(v16 - 8);
            v18 = v16 - 32;
            if ((_DWORD)v17 != -1) {
              ((void (*)(_BYTE*, __int64))GameData_1fad828[v17])(v31, v16 - 32);
            }
            *(_DWORD*)(v16 - 8) = -1;
            v16 -= 32;
          } while (v18 != v15);
          v15 = v32_.v32;
          if (v32_.v32 != 0) {
          LABEL_42:
            v19 = 128;
            if (*(_QWORD*)(*v3 + 200) == 0) {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v3 + v19, v15);
          }
        }
      LABEL_45:
        if (game_hub_ProcHubSeqView_instance_ == 0 ||
            *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) == 0) {
          v20 = *(int*)(*(_QWORD*)GameData_212dbc8[0] + 32LL) <= 0 &&
                *(_DWORD*)(*(_QWORD*)GameData_212dbc8[0] + 16LL) <= 0;
          if (!v20 ||
              game_ProcGameSkipView_instance_ != 0 &&
                  (unsigned int)*(
                      unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
                          1 <=
                      2 &&
                  (((v21 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                    8) != 0
                       ? (v22 = 2)
                       : (v22 = 3),
                   (v22 & v21) == 0) ||
              game_hub_ProcHubSeqView_instance_ != 0 &&
                  (v23 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) !=
                      0 &&
                  *(_QWORD*)(v23 + 40) != 0 ||
              (v24 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) !=
                      0 &&
                  *(_QWORD*)(v24 + 40) != 0) {
            v25 = *(_QWORD**)(a1 + 192);
            *(_QWORD*)(a1 + 152) = 0;
            *(_QWORD*)(a1 + 192) = 0;
            if (v25 == (_QWORD*)(a1 + 160)) {
              v26 = 32;
            LABEL_67:
              (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
            }
            else if (v25 != nullptr) {
              v26 = 40;
              goto LABEL_67;
            }
            v27 = *(_QWORD*)(a1 + 8);
            if (v27 == 0) {
              return;
            }
            while (1) {
              if (*(_BYTE*)v27 == 2) {
                if (*(_DWORD*)(v27 + 32) == 1) {
                  *(_QWORD*)(a1 + 16) = v27;
                  *(_WORD*)(a1 + 136) &= ~0x80u;
                  return;
                }
              }
              else if (*(_BYTE*)v27 == 0) {
                return;
              }
              v27 += 64;
            }
          }
        }
        v2 += 80;
        if (v2 == *(unsigned __int8**)(v1 + 64)) {
          return;
        }
      }
      if ((v10 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (v10 | 7) + 1;
      }
      v12 = (char*)fw_memory_HeapManager_Allocate_alt1(*v3, v13, 16, 0);
      v29_.v30 = v12;
      v29_.v29 = v13 | 1;
    LABEL_29:
      memcpy(v12, v31, v11);
      goto LABEL_30;
    }
  }
}

__int64 game_hub_anonymous_ProcHubSeqEnter_RunConvergeResult(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;

  v1 = *(_QWORD*)(GameData_21f3d10 + 72);
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
    v1 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
  }
  if (v1 == 10) {
    v2 = GameData_21f3d10 + 65;
    if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
      v2 = *(_QWORD*)(GameData_21f3d10 + 80);
    }
    v3 = *(_QWORD*)v2;
    v4 = *(unsigned __int16*)(v2 + 8);
    if (v3 == *(_QWORD*)"Hub_000_A1" && v4 == *(unsigned __int16*)"A1") {
      v7[0] = GameData_1fada18;
      v8 = v7;
      GameRoutine_104f0e0(result, v7);
      result = (__int64)v8;
      if (v8 == v7) {
        v6 = 32;
      }
      else {
        if (v8 == nullptr) {
          return result;
        }
        v6 = 40;
      }
      return (*(__int64 (**)(void*))(*v8 + v6))(v8);
    }
  }
  return result;
}

__int64 ProcHubSeqEnter_917320(__int64 result)
{
  __int64 v1;
  _QWORD v2[2];

  if (*(_DWORD*)(GameData_21f3d10 + 136) == 1 &&
      (*(_BYTE*)(GameData_21c9608 + 328) & 4) == 0) {
    v1 = result;
    v2[1] = &GameData_1a919f8;
    v2[0] = game_HashString(&GameData_1a919f8);
    if (game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) == 0 ||
        *(int*)(result + 32) <= 0) {
      result = GameRoutine_104e620(v1);
      *(_BYTE*)(v1 + 234) = 1;
    }
  }
  return result;
}

__int64 ProcHubSeqEnter_9173c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD v9[4];

  if (*(_BYTE*)(result + 234) == 1) {
    v9[2] = v1;
    v9[3] = v2;
    v3 = result;
    v4 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
    v5 = *(_DWORD*)(v4 + 232);
    if (v5 <= 1) {
      v5 = 1;
    }
    *(_DWORD*)(v4 + 232) = v5;
    GameRoutine_f482e0_alt1(v4);
    v6 = *(__int64**)(GameData_21ec7c0 + 24);
    v7 = *(__int64**)(GameData_21ec7c0 + 32);
    while (v6 != v7) {
      v8 = *v6;
      v6 += 2;
      game_hub_Character_RebuildAppearance_alt1(v8);
    }
    v9[1] = &GameData_1a919f8;
    v9[0] = game_HashString_alt2((__int64)&GameData_1a919f8);
    result = game_VariableManager_SetFlag_alt1((__int64)v9, 1);
    *(_BYTE*)(v3 + 234) = 0;
  }
  return result;
}

__int64 ProcHubSeqEnter_917470(__int64 result)
{
  __int64 v1;

  if (*(_BYTE*)(result + 235) == 1) {
    v1 = result;
    result = GameRoutine_d8cf60(*(_QWORD*)GameData_212dbc8[0]);
    *(_BYTE*)(v1 + 235) = 0;
  }
  return result;
}

__int64* ProcHubSeqEnter_9174e0(__int64 a1)
{
  __int64* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  game_fa4b80((void*)(&v11_.v11));
  result = game_Tutorial_CreateBind(a1, &v11_.v11);
  v3 = v11_.v11;
  if (v11_.v11 != 0) {
    v4 = v11_.v12;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v11_.v11 == v11_.v12) {
      goto LABEL_12;
    }
    v6 = v11_.v12;
    do {
      v7 = *(_BYTE*)(v6 - 24);
      v6 -= 24;
      if ((v7 & 1) != 0) {
        v8 = *(_QWORD*)(v4 - 8);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          result = (__int64*)nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)v5 + v9, v8);
        }
      }
      v4 = v6;
    } while (v6 != v3);
    v11_.v12 = v3;
    v3 = v11_.v11;
    if (v11_.v11 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v10 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v10,
                                                          v3);
    }
  }
  return result;
}

void game_hub_anonymous_ProcHubSeqEnter_RunRecallData(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v26;
  unsigned __int8* v27;
  unsigned __int8* v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int8* v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  struct {
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v49_;
  struct {
    __int64 v52;
    __int64* v53;
    char* v54;
    char gap72_[8];
    _QWORD* v55;
  } v52_;

  v52_.v53 = &GameData_1ad2a61;
  v52_.v52 = game_HashString_alt2((__int64)&GameData_1ad2a61);
  if (game_GameModeData_instance_ == 0) {
    return;
  }
  v2 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&v52_.v52);
  if (v2 == 0) {
    return;
  }
  if (*(_DWORD*)(v2 + 32) == 0) {
    return;
  }
  v3 = GameData_21f9030;
  v4 = GameData_21f9038;
  if (GameData_21f9030 == GameData_21f9038) {
    return;
  }
  v48 = a1;
  v5 = nullptr;
  v6 = 0;
  v7 = 0;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  do {
    v11 = *(_QWORD*)v3;
    if (*(_QWORD*)(*(_QWORD*)v3 + 56LL) == 0 ||
        (GameHr_717fc0((unsigned __int64*)(*(_QWORD*)v3 + 56LL), 0) & 1) == 0) {
      goto LABEL_8;
    }
    v12 = *(const char**)(*(_QWORD*)(v11 + 8) + 96LL);
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
      v15 = (char*)fw_memory_HeapManager_Allocate_alt1(*v8, v16, 16, 0);
      v52_.v53 = (__int64*)v14;
      v52_.v54 = v15;
      v52_.v52 = v16 | 1;
    }
    else {
      v15 = (char*)&v52_.v52 + 1;
      LOBYTE(v52_.v52) = 2 * v13;
      if (v13 == 0) {
        goto LABEL_20;
      }
    }
    memmove_alt1((__int64)v15, (__int64)v12, v14);
  LABEL_20:
    v15[v14] = 0;
    if (v6 < v7) {
      v9 = v52_.v52;
      v10 = (__int64)v52_.v54;
      *(_QWORD*)(v6 + 8) = v52_.v53;
      *(_QWORD*)(v6 + 16) = v10;
      *(_QWORD*)v6 = v9;
    }
    else {
      v17 = v6 - (_QWORD)v5;
      v18 = 1 - 0x5555555555555555LL * ((__int64)(v6 - (_QWORD)v5) >> 3);
      if (v18 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_64aa00_alt1();
      }
      if (0x5555555555555556LL * ((__int64)(v7 - (_QWORD)v5) >> 3) > v18) {
        v18 = 0x5555555555555556LL * ((__int64)(v7 - (_QWORD)v5) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v7 - (_QWORD)v5) >> 3) >=
          0x555555555555555LL) {
        v19 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v19 = v18;
      }
      if (v19 != 0) {
        if (v19 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_60a210_alt1();
        }
        v20 = fw_memory_HeapManager_Allocate_alt1(*v8, 24 * v19, 16, 0);
      }
      else {
        v20 = 0;
      }
      v21 = v52_.v52;
      v22 = v52_.v53;
      v6 = v20 + v17;
      v52_.v52 = 0;
      v52_.v53 = nullptr;
      *(_QWORD*)v6 = v21;
      *(_QWORD*)(v6 + 8) = v22;
      v23 = (__int64)v52_.v54;
      v52_.v54 = nullptr;
      *(_QWORD*)(v6 + 16) = v23;
      v7 = v20 + 24 * v19;
      memcpy_alt1(v20, (__int64)v5, v17);
      if (v5 != nullptr) {
        v24 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v8 + v24, (__int64)v5);
        if ((v52_.v52 & 1) != 0 && v52_.v54 != nullptr) {
          v25 = 128;
          if (*(_QWORD*)(*v8 + 200) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v8 + v25, (__int64)v52_.v54);
        }
      }
      v5 = (unsigned __int8*)v20;
    }
    v6 += 24LL;
  LABEL_8:
    v3 += 8;
  } while (v3 != v4);
  if ((unsigned __int8*)v6 != v5) {
    GameRoutine_8319e0_alt1(
        (__int64)v5, (char*)v6, (__int64)&v52_.v52,
        (2 * __clz(0xAAAAAAAAAAAAAAABLL * ((__int64)(v6 - (_QWORD)v5) >> 3))) ^
            0x7E,
        1);
    v26 = ProcHubSeqEnter_919600_alt1(v5, (unsigned __int8*)v6);
    if ((unsigned __int8*)v6 != v26) {
      v27 = v26;
      v28 = (unsigned __int8*)v6;
      do {
        v29 = *(v28 - 24);
        v28 -= 24;
        if ((v29 & 1) != 0) {
          v30 = *(_QWORD*)(v6 - 8);
          if (v30 != 0) {
            if (*(_QWORD*)(*v8 + 200) != 0) {
              v31 = 128;
            }
            else {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v8 + v31, v30);
          }
        }
        v6 = (unsigned __int64)v28;
      } while (v28 != v27);
      v6 = (unsigned __int64)v27;
    }
    v32 = ProcList_9bd480_alt1(v48);
    if (v5 != (unsigned __int8*)v6) {
      v33 = v32;
      v34 = (__int64*)v5;
      do {
        if ((*(_BYTE*)v34 & 1) != 0) {
          fw_text_String_CopyTerminated_alt2(&v49_.v49, v34[2], v34[1]);
        }
        else {
          v35 = *v34;
          v36 = v34[2];
          v49_.v50 = v34[1];
          v49_.v51 = v36;
          v49_.v49 = v35;
        }
        v37 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v8, 32, 16, 0);
        v38 = v49_.v49;
        v39 = v49_.v50;
        v40 = v37;
        v49_.v49 = 0;
        v49_.v50 = 0;
        v52_.v55 = v37;
        *v37 = GameData_1fada98;
        v37[1] = v38;
        v41 = v49_.v51;
        v49_.v51 = 0;
        v37[2] = v39;
        v37[3] = v41;
        game_ProcList_Call_9bcfa0_alt1(v33, (__int64)&v52_.v52);
        (*(void (**)(_QWORD*))(*v40 + 40LL))(v40);
        if ((v49_.v49 & 1) != 0 && v49_.v51 != 0) {
          if (*(_QWORD*)(*v8 + 200) != 0) {
            v42 = 128;
          }
          else {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v8 + v42, v49_.v51);
        }
        v34 += 3;
      } while (v34 != (__int64*)v6);
    }
  }
  if (v5 != nullptr) {
    if (v5 != (unsigned __int8*)v6) {
      v43 = (unsigned __int8*)v6;
      do {
        v44 = *(v43 - 24);
        v43 -= 24;
        if ((v44 & 1) != 0) {
          v45 = *(_QWORD*)(v6 - 8);
          if (v45 != 0) {
            if (*(_QWORD*)(*v8 + 200) != 0) {
              v46 = 128;
            }
            else {
              v46 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v8 + v46, v45);
          }
        }
        v6 = (unsigned __int64)v43;
      } while (v43 != v5);
    }
    v47 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v8 + v47, (__int64)v5);
  }
}

const char* ProcHubSeqEnter_917b00(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  int v9;
  const char* result;
  int v11;
  struct {
    const char* v12;
    void* v13;
  } v12_;

  v2 = *(__int64**)(*GameData_212d458[0] + 24);
  v3 = *(__int64**)(*GameData_212d458[0] + 32);
  if (v2 != v3) {
    v4 = 0;
    while (1) {
      v5 = *v2;
      if (*(_QWORD*)(*v2 + 800) == 0) {
        break;
      }
    LABEL_3:
      v4 |= *(_BYTE*)(v5 + 1060) ^ 1;
    LABEL_4:
      v2 += 2;
      if (v2 == v3) {
        goto LABEL_20;
      }
    }
    v6 = *(_QWORD*)(v5 + 760);
    v7 = *(_QWORD*)(v5 + 768);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v6 != 0 && *(_BYTE*)(v6 + 224) == 1 && *(_DWORD*)(v6 + 144) == 31) {
      v8 = 0;
      if (v7 == 0) {
        goto LABEL_15;
      }
    }
    else {
      v8 = 1;
      if (v7 == 0) {
        goto LABEL_15;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
      if ((v8 & 1) != 0) {
        goto LABEL_4;
      }
    LABEL_16:
      v5 = *v2;
      goto LABEL_3;
    }
  LABEL_15:
    if ((v8 & 1) != 0) {
      goto LABEL_4;
    }
    goto LABEL_16;
  }
  v4 = 0;
LABEL_20:
  v9 = v4 & 1;
  v12_.v13 = &GameData_1ae979a;
  result = (const char*)game_HashString_alt2((__int64)&GameData_1ae979a);
  v12_.v12 = result;
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
  LABEL_23:
    if (v11 == v9) {
      return result;
    }
    goto LABEL_24;
  }
  result = (const char*)game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&v12_.v12);
  if (result != nullptr) {
    v11 = *((_DWORD*)result + 8);
    goto LABEL_23;
  }
  if ((v4 & 1) == 0) {
    return result;
  }
LABEL_24:
  if ((v4 & 1) == 0 && *(_DWORD*)(GameData_21f3d10 + 136) == 1) {
    v12_.v12 = "MID_Dungeon_Enemy_Destroy";
    v12_.v13 = ((__int128*)0x10LL) + 9;
    Message_16f9b50(a1);
  }
  v12_.v13 = &GameData_1ae979a;
  v12_.v12 = (const char*)game_HashString_alt2((__int64)&GameData_1ae979a);
  return (const char*)game_VariableManager_SetFlag_alt1((__int64)&v12_.v12, v9);
}

__int64 ProcHubSeqEnter_917cd0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float* v4;
  _BOOL4 v5;
  __int64 v6;

  v0 = GameData_21f3ca8;
  v1 = *(_QWORD*)(GameData_21f3ca8 + 16);
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = *(float**)(v1 + 16);
    v5 = v4 != nullptr && ((*(_BYTE*)(*(_QWORD*)v4 + 12LL) & 1) != 0 ||
                           v4[8] < *(float*)(*(_QWORD*)v4 + 8LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v5 = false;
  }
  return *(float*)(v0 + 8) > 0.0 || v5;
}

void ProcHubSeqEnter_917d80()
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64* v31;
    __int64 v32;
    __int64* v33;
  } v31_;
  struct {
    __int64* v34;
    __int64* v35;
  } v34_;

  v2 = *(_QWORD*)(GameData_21f3d10 + 72);
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
    v2 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
  }
  if (v2 == 10) {
    v3 = GameData_21f3d10 + 65;
    if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
      v3 = *(_QWORD*)(GameData_21f3d10 + 80);
    }
    v4 = *(_QWORD*)v3;
    v5 = *(unsigned __int16*)(v3 + 8);
    if (v4 == *(_QWORD*)"Hub_000_A1" && v5 == *(unsigned __int16*)"A1") {
      GameRoutine_104fe60((void*)((__int64*)&v34_.v34));
      v7 = v34_.v34;
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v34_.v35 != v34_.v34) {
        v9 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
        v9[2] = 0;
        *v9 = 0x75506E696765421ELL;
        v9[1] = 0x6F6D654474657070LL;
        v10 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v8, 48, 16, 0);
        v11 = v10 + 6;
        v12 = v10;
        if ((*(_BYTE*)v7 & 1) != 0) {
          fw_text_String_CopyTerminated_alt2(v10 + 3, v7[2], v7[1]);
        }
        else {
          v13 = *v7;
          v14 = v7[2];
          v10[4] = v7[1];
          v10[5] = v14;
          v10[3] = v13;
        }
        v15 = *v9;
        v16 = v9[1];
        v31_.v31 = v12;
        v31_.v33 = v11;
        *v12 = v15;
        v12[1] = v16;
        v12[2] = v9[2];
        v17 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v8 + v17, (__int64)v9);
        v31_.v32 = (__int64)v11;
        GameHr_913ca0(*(_QWORD*)GameData_212dbd0[0], (__int64)&v31_.v31);
        v18 = (__int64)v31_.v31;
        if (v31_.v31 != nullptr) {
          v19 = v31_.v32;
          if (v31_.v31 == (__int64*)v31_.v32) {
            goto LABEL_28;
          }
          v20 = v31_.v32;
          do {
            v21 = *(_BYTE*)(v20 - 24);
            v20 -= 24;
            if ((v21 & 1) != 0) {
              v22 = *(_QWORD*)(v19 - 8);
              if (v22 != 0) {
                if (*(_QWORD*)(*v8 + 200) != 0) {
                  v23 = 128;
                }
                else {
                  v23 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v8 + v23, v22);
              }
            }
            v19 = v20;
          } while (v20 != v18);
          v31_.v32 = v18;
          v18 = (__int64)v31_.v31;
          if (v31_.v31 != nullptr) {
          LABEL_28:
            v24 = 128;
            if (*(_QWORD*)(*v8 + 200) == 0) {
              v24 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v8 + v24, v18);
          }
        }
        v7 = v34_.v34;
      }
      if (v7 != nullptr) {
        v25 = v34_.v35;
        if (v7 == v34_.v35) {
          goto LABEL_43;
        }
        v26 = v34_.v35;
        do {
          v27 = *((_BYTE*)v26 - 24);
          v26 -= 3;
          if ((v27 & 1) != 0) {
            v28 = *(v25 - 1);
            if (v28 != 0) {
              if (*(_QWORD*)(*v8 + 200) != 0) {
                v29 = 128;
              }
              else {
                v29 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v8 + v29, v28);
            }
          }
          v25 = v26;
        } while (v26 != v7);
        v34_.v35 = v7;
        v7 = v34_.v34;
        if (v34_.v34 != nullptr) {
        LABEL_43:
          v30 = 128;
          if (*(_QWORD*)(*v8 + 200) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v8 + v30, (__int64)v7);
        }
      }
    }
  }
}

_QWORD*

game_hub_anonymous_ProcHubSeqEnter_RunNextTimeline_closure_Invoke(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _QWORD* result;
  _QWORD* v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  char* v19;
  _BYTE v20[256];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameRoutine_e2a8a0(*(_QWORD*)GameData_212dbd8[0]);
  if (game_GameModeData_instance_ != 0 &&
      *(_QWORD*)(game_GameModeData_instance_ + 24) != 0 &&
      (GameRoutine_88d160() & 1) != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v3 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v3 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    GameRoutine_17b95c0(v1, v3);
  }
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8dd0();
  }
  sprintf(v20, "NextTimeline - %s", (&GameData_1fad6f8)[2 * v2]);
  v4 = strlen(v20);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7, 16, 0);
    v19 = v6;
    v18[0] = v7 | 1;
  }
  else {
    LOBYTE(v18[0]) = 2 * v4;
    v6 = (char*)v18 + 1;
    if (v4 == 0) {
      goto LABEL_19;
    }
  }
  memcpy(v6, v20, v5);
LABEL_19:
  v6[v5] = 0;
  if ((v18[0] & 1) != 0 && v19 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v19);
  }
  if ((v2 & 1) != 0) {
    v9 = GameData_212dbb8[0];
    Manager_d54c90(*(_QWORD*)GameData_212dbb8[0]);
    v10 = *(_QWORD*)(*(_QWORD*)v9 + 216LL);
    v11 = *(_DWORD*)(v10 + 232);
    if (v11 <= 3) {
      v11 = 3;
    }
    *(_DWORD*)(v10 + 232) = v11;
    GameRoutine_f482e0_alt1(v10);
    result = *(_QWORD**)(v1 + 192);
    v13 = (_QWORD*)(v1 + 160);
    v14 = 1;
  }
  else {
    v15 = *(_QWORD*)GameData_212dbe0[0];
    *(_DWORD*)(v15 + 8) = 13;
    *(_DWORD*)(v15 + 68) = 20;
    if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 11LL) & 1) == 0) {
      *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 11LL) = 1;
      v18[0] = 0;
      v18[1] = 0;
      GameRoutine_efbb60(*(_QWORD*)GameData_212dbf0[0], v18, 0);
      if (game_script_hub_talk_g_select_menu != 0) {
        *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
      }
    }
    if (game_hub_ProcHubSeqView_instance_ != 0) {
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
    }
    result = *(_QWORD**)(v1 + 192);
    v13 = (_QWORD*)(v1 + 160);
    v14 = 11;
  }
  *(_QWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 192) = 0;
  if (result == v13) {
    v16 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_39;
    }
    v16 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v16))((__int64)result);
LABEL_39:
  v17 = *(_QWORD*)(v1 + 8);
  if (v17 != 0) {
    while (1) {
      if (*(_BYTE*)v17 == 2) {
        if (*(_DWORD*)(v17 + 32) == v14) {
          *(_QWORD*)(v1 + 16) = v17;
          *(_WORD*)(v1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v17 == 0) {
        return result;
      }
      v17 += 64;
    }
  }
  return result;
}

_QWORD*

game_hub_anonymous_ProcHubSeqEnter_RunLocalWarp_closure_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v3 = v2;
  *v2 = GameData_1fad738;
  v4 = *(_BYTE*)(a1 + 32);
  v2[2] = *(_QWORD*)(a1 + 16);
  if ((v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 4, *(_QWORD*)(a1 + 48),
                                  *(_QWORD*)(a1 + 40));
  }
  else {
    v5 = *(_QWORD*)(a1 + 40);
    v6 = *(_QWORD*)(a1 + 48);
    v2[4] = *(_QWORD*)(a1 + 32);
    v2[5] = v5;
    v2[6] = v6;
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    fw_text_String_CopyTerminated(v3 + 7, *(_QWORD*)(a1 + 72),
                                  *(_QWORD*)(a1 + 64));
  }
  else {
    v7 = *(_QWORD*)(a1 + 64);
    v8 = *(_QWORD*)(a1 + 72);
    v3[7] = *(_QWORD*)(a1 + 56);
    v3[8] = v7;
    v3[9] = v8;
  }
  v9 = *(_BYTE*)(a1 + 88);
  *((_DWORD*)v3 + 20) = *(_DWORD*)(a1 + 80);
  if ((v9 & 1) != 0) {
    fw_text_String_CopyTerminated(v3 + 11, *(_QWORD*)(a1 + 104),
                                  *(_QWORD*)(a1 + 96));
  }
  else {
    v10 = *(_QWORD*)(a1 + 96);
    v11 = *(_QWORD*)(a1 + 104);
    v3[11] = *(_QWORD*)(a1 + 88);
    v3[12] = v10;
    v3[13] = v11;
  }
  v12 = *(_QWORD*)(a1 + 120);
  v3[14] = *(_QWORD*)(a1 + 112);
  v3[15] = v12;
  v14 = *(_QWORD*)(a1 + 136);
  v3[16] = *(_QWORD*)(a1 + 128);
  v3[17] = v14;
  return v3;
}

_QWORD* game_hub_anonymous_ProcHubSeqEnter_RunLocalWarp_closure_CloneInto(
    _QWORD* result, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v3 = result;
  *(_QWORD*)a2 = GameData_1fad738;
  *(_QWORD*)(a2 + 16) = result[2];
  if ((result[4] & 1) != 0) {
    result =
        (_QWORD*)fw_text_String_CopyTerminated(a2 + 32, result[6], result[5]);
  }
  else {
    *(_QWORD*)(a2 + 40) = result[5];
    v4 = result[4];
    *(_QWORD*)(a2 + 48) = result[6];
    *(_QWORD*)(a2 + 32) = v4;
  }
  if ((v3[7] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(a2 + 56, v3[9], v3[8]);
  }
  else {
    v5 = v3[7];
    v6 = v3[9];
    *(_QWORD*)(a2 + 64) = v3[8];
    *(_QWORD*)(a2 + 72) = v6;
    *(_QWORD*)(a2 + 56) = v5;
  }
  *(_DWORD*)(a2 + 80) = *((_DWORD*)v3 + 20);
  if ((v3[11] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(a2 + 88, v3[13], v3[12]);
  }
  else {
    v7 = v3[11];
    v8 = v3[13];
    *(_QWORD*)(a2 + 96) = v3[12];
    *(_QWORD*)(a2 + 104) = v8;
    *(_QWORD*)(a2 + 88) = v7;
  }
  *(_QWORD*)(a2 + 120) = v3[15];
  *(_QWORD*)(a2 + 112) = v3[14];
  *(_QWORD*)(a2 + 136) = v3[17];
  *(_QWORD*)(a2 + 128) = v3[16];
  return result;
}

__int64

game_hub_anonymous_ProcHubSeqEnter_RunLocalWarp_closure_Invoke(int32x2_t* a1)
{
  __int64 v2;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;

  v2 = GameData_212dbb8[0];
  Manager_d54c90_alt1(*(_QWORD*)GameData_212dbb8[0]);
  if (*(int*)(GameData_21f3d08 + 16) <= 0) {
    ((void (*)(void))GameRoutine_efa7e0)();
  }
  game_dbdff0(*(_QWORD*)GameData_212dbf8, a1 + 4);
  HubCharacterNatives_cb9240((_QWORD*)GameData_21ec7c0);
  GameRoutine_d86670();
  v8 = *(_QWORD*)(GameData_21ec7c0 + 120);
  if (*(_BYTE*)(v8 + 15) != 0) {
    v9 = *(_BYTE*)(v8 + 12);
    *(_BYTE*)(v8 + 15) = 0;
    if ((v9 & 1) == 0) {
      *(_BYTE*)(v8 + 12) = 1;
    }
    game_1023ae0(v8);
    v10 = *(_QWORD*)(GameData_21ec7c0 + 24);
    v11 = *(_QWORD*)(GameData_21ec7c0 + 32);
    while (v10 != v11) {
      v12 = *(_QWORD*)(*(_QWORD*)v10 + 24LL);
      if (*(_BYTE*)(v12 + 504) == 1) {
        GameRoutine_cebf00(v12, *(_DWORD*)(v12 + 500));
      }
      v10 += 16;
    }
  }
  v13 = *(_QWORD*)(*(_QWORD*)v2 + 216LL);
  v14 = *(_DWORD*)(v13 + 232);
  if (v14 <= 3) {
    v14 = 3;
  }
  *(_DWORD*)(v13 + 232) = v14;
  return GameRoutine_f482e0_alt1(v13);
}

__int64 game_hub_anonymous_ProcHubSeqEnter_RunReloadAll_closure_Invoke()
{
  __int64 v0;
  int v1;

  v0 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  v1 = *(_DWORD*)(v0 + 232);
  if (v1 <= 3) {
    v1 = 3;
  }
  *(_DWORD*)(v0 + 232) = v1;
  return GameRoutine_f482e0_alt1(v0);
}

void ProcHubSeqEnter_918b10()
{
  __int64 v0;
  const char* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  char* v13;
  _BYTE v14[256];

  v0 = *(unsigned int*)(GameData_21c9608 + 928);
  if ((_DWORD)v0 == 0) {
    return;
  }
  if ((unsigned int)v0 > 6) {
    v1 = nullptr;
  }
  else {
    v1 = (&GameData_1fad898)[2 * v0];
  }
  sprintf(v14, "Change [%s] -> EnterType::None ", v1);
  v2 = strlen(v14);
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
    v13 = v4;
    v12 = v5 | 1;
  }
  else {
    LOBYTE(v12) = 2 * v2;
    v4 = (char*)&v12 + 1;
    if (v2 == 0) {
      goto LABEL_14;
    }
  }
  memcpy(v4, v14, v3);
LABEL_14:
  v4[v3] = 0;
  if ((v12 & 1) != 0 && v13 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v13);
  }
  if (*(_DWORD*)(GameData_21c9608 + 928) != 0) {
    *(_DWORD*)(GameData_21c9608 + 928) = 0;
    v7 = *(_QWORD*)(GameData_21ec7c0 + 80);
    if (v7 != 0) {
      v8 = *(_QWORD*)(GameData_21ec7c0 + 72);
      v9 = *(_QWORD*)(GameData_21ec7c0 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v9);
      std___1___shared_weak_count___release_weak(v7);
      if (v10 == 0 || v8 == 0) {
        if (v10 == 0) {
          return;
        }
      }
      else {
        *(_DWORD*)(v8 + 1072) = 0;
        *(_QWORD*)(v8 + 1064) = 0x3F8000003F800000LL;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
}

__int64 ProcHubSeqEnter_918f60(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if ((*(_BYTE*)a2 & 1) != 0) {
    return GameRoutine_25ec90(a2[2], *a2 & 0xFFFFFFFFFFFFFFFELL);
  }
  return result;
}

_QWORD** ProcHubSeqEnter_918fa0(_QWORD** result, _QWORD* a2)
{
  **result = *a2;
  return result;
}

float ProcHubSeqEnter_918fc0(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

_QWORD** ProcHubSeqEnter_918fd0(_QWORD** result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  v2 = *result;
  v3 = *a2;
  v4 = a2[2];
  v2[1] = a2[1];
  v2[2] = v4;
  *v2 = v3;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  return result;
}

_QWORD** ProcHubSeqEnter_918ff0(_QWORD** result, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  v2 = *result;
  v3 = *a2;
  v4 = a2[2];
  v2[1] = a2[1];
  v2[2] = v4;
  *v2 = v3;
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  return result;
}

_BYTE** ProcHubSeqEnter_919010(_BYTE** result, _BYTE* a2)
{
  **result = *a2;
  return result;
}

__int64

game_hub_anonymous_ProcHubSeqEnter_RunProgressDate_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int16* v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 8);
  result = Manager_d54c90(*(_QWORD*)GameData_212dbb8[0]);
  v4 = *(_QWORD*)(a1 + 16);
  if (*(_BYTE*)(v4 + 20) == 1) {
    result = game_gmap_GmapClock_instance_;
    v5 = game_gmap_GmapClock_kDefaultTime_ptr;
    v6 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    if (game_gmap_GmapClock_instance_ == 0) {
      v6 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    if (v6[5] + ((__int64)v6[4] << 6) + ((__int64)v6[3] << 12) +
            ((__int64)v6[2] << 18) + ((__int64)v6[1] << 24) +
            ((__int64)*v6 << 32) <=
        (unsigned __int64)(((__int64)*(__int16*)(v4 + 10) << 24) +
                           ((__int64)*(__int16*)(v4 + 8) << 32) +
                           ((__int64)*(__int16*)(v4 + 12) << 18) +
                           ((__int64)*(__int16*)(v4 + 14) << 12) +
                           ((__int64)*(__int16*)(v4 + 16) << 6) +
                           *(__int16*)(v4 + 18))) {
      if (game_gmap_GmapClock_instance_ == 0 ||
          (result =
               ScheduleNatives_869280(game_gmap_GmapClock_instance_, v4 + 8),
           *(_BYTE*)((v4 = *(_QWORD*)(a1 + 16)) + 20) == 1)) {
        *(_BYTE*)(v4 + 20) = 0;
      }
      if (game_GameModeData_instance_ != 0) {
        result = *(_QWORD*)(game_GameModeData_instance_ + 24);
        if (result != 0) {
          result = GameRoutine_88d160();
          if ((result & 1) != 0) {
            if (game_gmap_GmapClock_instance_ != 0) {
              v7 = game_gmap_GmapClock_instance_ + 8;
            }
            else {
              v7 = v5;
            }
            return GameRoutine_17b95c0(v1, v7);
          }
        }
      }
    }
  }
  return result;
}

__int64

game_hub_anonymous_ProcHubSeqEnter_RunProgressMinute_closure_Invoke(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  bool v5;
  unsigned __int16* v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  struct {
    __int64 v11;
    __int16 v12;
    __int16 v13;
    __int16 v14;
    __int16 v15;
    __int16 v16;
    __int16 v17;
  } v11_;

  result = Manager_d54c90_alt1(*(_QWORD*)GameData_212dbb8[0]);
  v3 = *(_DWORD*)(a1 + 16);
  v4 = game_gmap_GmapClock_instance_;
  v5 = v3 == 0 || game_gmap_GmapClock_instance_ == 0;
  if (!v5 && *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                     *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                     *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                 0) {
    v6 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
    v7 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
    v8 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
    v9 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
    v11_.v11 = game_gmap_GmapClock_instance_;
    v11_.v12 = v7;
    v11_.v13 = *(_WORD*)(game_gmap_GmapClock_instance_ + 10);
    v11_.v14 = *(_WORD*)(game_gmap_GmapClock_instance_ + 12);
    v10 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
    v11_.v17 = v8;
    v11_.v16 = v9;
    *(_WORD*)(game_gmap_GmapClock_instance_ + 18) = 0;
    v11_.v15 = v10;
    *(_WORD*)(v4 + 14) = v10 + v3 / 60;
    *(_WORD*)(v4 + 16) = v9 + v3 % 60;
    Dir_70d7a0_alt1(v6);
    *(_DWORD*)(v4 + 44) = 0;
    return GameRoutine_86b4e0_alt1(&v11_.v11);
  }
  return result;
}

__int64 game_hub_anonymous_ProcHubSeqEnter_RunConvergeResult_closure_Invoke()
{
  __int64 v0;
  int v1;

  if ((*(_BYTE*)(GameData_21f3ce0 + 81) & 1) == 0) {
    *(_BYTE*)(GameData_21f3ce0 + 81) = 1;
  }
  v0 = *(_QWORD*)(GameData_21f3d10 + 216);
  v1 = *(_DWORD*)(v0 + 232);
  if (v1 <= 1) {
    v1 = 1;
  }
  *(_DWORD*)(v0 + 232) = v1;
  return GameRoutine_f482e0_alt1(v0);
}

__int64

game_hub_anonymous_ProcHubSeqEnter_RunRecallData_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _BYTE v11[32];
  _BYTE* v12;
  __int64 v13;

  v2 = *(unsigned __int8*)(a1 + 8);
  v3 = *a2;
  v4 = v2 >> 1;
  v5 = (v2 & 1) == 0;
  v6 = *(_QWORD*)(a1 + 16);
  if (v5) {
    v6 = v4;
  }
  v7 = a1 + 9;
  if (!v5) {
    v7 = *(_QWORD*)(a1 + 24);
  }
  if (v6 != 0) {
    v8 = v7;
  }
  else {
    v8 = 0;
  }
  v13 = v8;
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(v3, &v13);
  if (result != 0) {
    v12 = nullptr;
    GameRoutine_6680e0(v11, result + 1248);
    result = (__int64)v12;
    if (v12 == v11) {
      v10 = 32;
    }
    else {
      if (v12 == nullptr) {
        return result;
      }
      v10 = 40;
    }
    return (*(__int64 (**)(void*))(*(_QWORD*)v12 + v10))((void*)v12);
  }
  return result;
}

__int64 ProcHubSeqEnter_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *(_QWORD*)a1 = GameData_1fadc00;
  v2 = (_QWORD*)(a1 + 160);
  v3 = *(_QWORD**)(a1 + 192);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);

LABEL_6:
  GameData_21f3c90 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
