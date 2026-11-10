#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_ceca80(_QWORD* result, __int64, char);
__int64 DungeonController_f5e870(void);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_716420(_QWORD, _QWORD);
__int64 GameRoutine_efbb60(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_212dbd0[6];
extern __int64 GameData_212dbe0[4];
extern __int64 GameData_212dc68;
extern __int64 GameData_21c9600;
extern __int64 GameData_21c9608;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3c90;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
void GameRoutine_d54600(__int64);
void GameRoutine_d54760(__int64);
void ProcHubSeq_Unknown6();
void ProcHubSeq_Unknown7();
void ProcHubSeq_Unknown10();
__int64 ProcHubSeq_Unknown11();
__int64 ProcHubSeq_Unknown12(__int64 a1);
__int64 ProcHubSeq_Unknown13(__int64 result);
__int64 ProcHubSeq_Unknown14(__int64 result, __int64 a2);
_BYTE* GameRoutine_d52ec0(_QWORD*);
_DWORD* GameRoutine_d55fd0(_DWORD*, __int64);
_DWORD* GameRoutine_d6e4d0(_DWORD* result, int, __int64);
__int64 FastTravelManager_ee0380(_QWORD);
__int64 GameRoutine_1030eb0(void);
__int64 GameRoutine_10c11b0(void);
__int64 GameRoutine_120e3c0(_QWORD);
__int64 GameRoutine_13289e0(void);
__int64 GameRoutine_133f780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1418aa0(_QWORD);
__int64 GameRoutine_1624230(_QWORD, _QWORD);
__int64 GameRoutine_1633a30(_QWORD);
__int64 GameRoutine_1781e30(_QWORD);
__int64 GameRoutine_17b8bd0(void);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_66b000(_QWORD, _QWORD);
__int64 GameRoutine_66b160(_QWORD);
__int64 GameRoutine_715780(void);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_877400(_QWORD);
__int64 GameRoutine_cb6ca0(void);
__int64 GameRoutine_cbaa70(void);
__int64 GameRoutine_cdea20(__int64);
__int64 GameRoutine_d52cc0(__int64);
__int64 GameRoutine_d56220(__int64);
__int64 GameRoutine_d5ca00(void);
__int64 GameRoutine_d6de80(void);
__int64 GameRoutine_d791f0(_QWORD*);
__int64 GameRoutine_d799f0(__int64);
__int64 GameRoutine_d7a670(void);
__int64 GameRoutine_d88a40(__int64 result);
__int64 GameRoutine_d8b300(_QWORD);
__int64 GameRoutine_d8d690(void);
__int64 GameRoutine_d97ff0(_QWORD);
__int64 GameRoutine_d98820(_QWORD, _QWORD);
__int64 GameRoutine_d99d20(_QWORD);
__int64 GameRoutine_db2560(_QWORD, _QWORD);
__int64 GameRoutine_db5b40(void);
__int64 GameRoutine_dbd780(_QWORD);
__int64 GameRoutine_dbee80(void);
__int64 GameRoutine_dda5a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dfeed0(void);
__int64 GameRoutine_e1aa50(void);
__int64 GameRoutine_e1b220(_QWORD);
__int64 GameRoutine_e1ccd0(void);
__int64 GameRoutine_e23c10(void);
__int64 GameRoutine_e24c50(void);
__int64 GameRoutine_e29f60(_QWORD);
__int64 GameRoutine_e2a6f0(void);
__int64 GameRoutine_e2a980(void);
__int64 GameRoutine_e2aae0(_QWORD, _QWORD);
__int64 GameRoutine_e2acc0(void);
__int64 GameRoutine_e2b060(void);
__int64 GameRoutine_ee3430(void);
__int64 GameRoutine_ef84a0(void);
__int64 GameRoutine_efd3d0(void);
__int64 GameRoutine_f2aa60(_QWORD);
__int64 GameRoutine_f2e8c0(void);
__int64 GameRoutine_f5ee40(_QWORD);
__int64 GameRoutine_f70dc0(void);
__int64 GameRoutine_f710c0(_QWORD);
__int64 GameRoutine_f71d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f7cb50(void);
__int64 GameRoutine_f994c0(void);
__int64 GameRoutine_fa2770(void);
__int64 GameRoutine_fb5a20(void);
__int64 GameRoutine_fbb3d0(_QWORD);
__int64 GameRoutine_fcf820(void);
__int64 GameRoutine_ff9780(void);
__int64 Manager_d540c0();
__int64 Manager_d55250(__int64 result, __int64, int);
__int64 ScheduleManager_d9ead0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD* GameData_212eeb8;
extern _DWORD* GameData_212eef8;
extern _DWORD* GameData_212ef08;
extern _DWORD* GameData_212ef48;
extern _DWORD* GameData_212ef70;
extern _DWORD* GameData_212f020;
extern _DWORD* GameData_212f050;
extern _DWORD* GameData_212f0a8;
extern _DWORD* GameData_212f108;
extern _DWORD* GameData_212f118;
extern _DWORD* GameData_212f7f0;
extern _DWORD* GameData_212f828;
extern _DWORD* GameData_212f838;
extern _DWORD* GameData_212fa90;
extern _DWORD* GameData_212fad8;
extern _DWORD* GameData_212fb10;
extern _DWORD* GameData_212fd60;
extern _UNKNOWN GameData_1ac799f;
extern __int64 (*GameData_1fddf50[])();
extern __int64 (*GameData_1fddfd0[])();
extern __int64 (*GameData_1fde050[])();
extern __int64 (*GameData_1fde0d0[])();
extern __int64 (*GameData_1fde1f0[])();
extern __int64 (*GameData_1fde278[])();
extern __int64 (*game_hub_HubSeqAreaChange_vtable[])();
extern __int64 (*game_hub_HubSeqEncounter_vtable[])();
extern __int64 (*game_hub_HubSeqEnter_vtable[])();
extern __int64 (*game_hub_HubSeqExit_vtable[])();
extern __int64 (*game_hub_HubSeqObelisk_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dbd8[5];
extern __int64 GameData_212dbe8[3];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dbf8;
extern __int64 GameData_212dc30[8];
extern __int64 GameData_212dc48[5];
extern __int64 GameData_212dc50[4];
extern __int64 GameData_212dc58[3];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ebf0[3];
extern __int64 GameData_212ebf8[2];
extern __int64 GameData_212ec00;
extern __int64 GameData_212ef78[10];
extern __int64 GameData_212ef80[9];
extern __int64 GameData_212ef88[8];
extern __int64 GameData_212ef90[7];
extern __int64 GameData_212ef98[6];
extern __int64 GameData_212efa0[5];
extern __int64 GameData_212efa8[4];
extern __int64 GameData_212efb0[3];
extern __int64 GameData_212efb8[2];
extern __int64 GameData_212efc0;
extern __int64 GameData_2131678;
extern __int64 GameData_21c9680;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f3ce8;
extern __int64 GameData_21f3d00;
extern __int64 GameData_220b6c8;
extern __int64 GameData_220b6e0;
extern __int64 GameData_220d618;
extern __int64 GameData_22124d0;
extern __int64 GameData_22127a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d2f0;
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d6d0;
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebc0[5];
extern __int64* GameData_212ebc8[4];
extern __int64* GameData_212ebd8[2];
extern __int64* GameData_212ebe0;
extern __int64* GameData_212ec10[3];
extern __int64* GameData_212ec18[2];
extern __int64* GameData_212ec20;
extern __int64* GameData_212ec40[5];
extern __int64* GameData_212ed10[12];
extern __int64* GameData_212ee40[2];
extern __int64* GameData_212eeb0;
extern __int64* GameData_212eec0[4];
extern __int64* GameData_212eee8[2];
extern __int64* GameData_212eef0;
extern __int64* GameData_212ef00;
extern __int64* GameData_212ef10[3];
extern __int64* GameData_212ef18[2];
extern __int64* GameData_212ef20;
extern __int64* GameData_212ef40;
extern __int64* GameData_212f018;
extern __int64* GameData_212f048;
extern __int64* GameData_212f058[3];
extern __int64* GameData_212f0a0;
extern __int64* GameData_212f100;
extern __int64* GameData_212f110;
extern __int64* GameData_212f148[5];
extern __int64* GameData_212f260;
extern __int64* GameData_212f270;
extern __int64* GameData_212f280;
extern __int64* GameData_212f2a8;
extern __int64* GameData_212f2b8;
extern __int64* GameData_212f2c8;
extern __int64* GameData_212f7e8;
extern __int64* GameData_212f818[2];
extern __int64* GameData_212f830;
extern __int64* GameData_212f918;
extern __int64* GameData_212f9f0;
extern __int64* GameData_212fa68;
extern __int64* GameData_212fa88;
extern __int64* GameData_212fad0;
extern __int64* GameData_212fb00[2];
extern __int64* GameData_212fb08;
extern __int64* GameData_212fb18[3];
extern __int64* GameData_212fb58;
extern __int64* GameData_212fbe0;
extern __int64* GameData_212fd58;
extern __int64* GameData_2130028;
extern int* GameData_212f268[14];
extern int* GameData_212f278[12];
extern int* GameData_212f288[10];
extern int* GameData_212f2b0[5];
extern int* GameData_212f2c0[3];
extern int* GameData_212f2d0;
extern int* GameData_212f920[10];
extern int* GameData_212f9f8[7];
extern int* GameData_212fa70;
extern int* GameData_212fb60[4];
extern int* GameData_212fbe8[2];
extern int* GameData_2130030[5];
__int64 game_hub_anonymous_ProcHubSeq_CreateInstances(__int64 a1);
__int64 ProcHubSeq_d87a50(__int64 a1);
_BYTE* ProcHubSeq_d87ac0(_BYTE* result);
__int64 ProcHubSeq_d87be0(__int64 a1);
__int64 ProcHubSeq_d87ee0(__int64 result);
__int64 ProcHubSeq_d881c0();
__int64 game_hub_anonymous_ProcHubSeq_CreateBindZView(__int64 a1);
__int64 ProcHubSeq_Destructor(__int64 a1);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void game_hub_LocatorDispos_CreateExternalDataImpl(
    PSEUDO_X8, __int64, __int64, __int64, __int64**, __int64, __int64);
__int16* ScheduleManager_d9edf0();
__int64** game_hub_e1ba40(__int64** result);
__int64* HubNatives_ccba40(__int64* result, __int64);
__int64 AreaBarrier_fbae90(__int64);
__int64 EventManager_cbaf20(__int64);
__int64 GameRoutine_10c0bc0(__int64 result);
__int64 GameRoutine_1366260(__int64, char);
__int64 GameRoutine_1366820(__int64 result);
__int64 GameRoutine_14a0820(_QWORD*);
__int64 GameRoutine_2b0();
__int64 GameRoutine_cb7320(_QWORD*, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_cded70(__int64);
__int64 GameRoutine_d6ef90(__int64 result);
__int64 GameRoutine_d85ce0(__int64);
__int64 GameRoutine_d8b3a0();
__int64 GameRoutine_d96be0(__int64 result);
__int64 GameRoutine_dfa040(_QWORD*);
__int64 GameRoutine_dff3e0(__int64 result);
__int64 GameRoutine_e19b00(__int64 result);
__int64 GameRoutine_e1b8e0(__int64);
__int64 GameRoutine_e21f40(__int64 result);
__int64 GameRoutine_f2c810(__int64);
__int64 GameRoutine_f482e0(__int64);
__int64 GameRoutine_fe7900(__int64 result, float);
__int64 HubNatives_ccbf80(__int64 result);
__int64 LocatorDispos_db3460(__int64 result);
__int64 Manager_d2ec20();
__int64 Manager_d52bf0(__int64 result);
__int64 MapSetup_f888c0(__int64 result);
__int64 PlayStartPos_fa25b0(__int64);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 RenderTask_1369e30(__int64, unsigned int);
__int64 ScheduleManager_d9efa0(__int64 result);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Register(__int64);
__int64 game_facility_ReleaseGroups();
__int64 game_hub_cb7460(__int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
bool game_869980();
bool game_f8f140(float32x4_t*, float*);
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN GameData_2212338;
extern __int64 (*game_hub_anonymous_ProcPushWorldPrepareSeq_vtable[])();
extern __int64* GameData_212c838;
extern __int64* GameData_212eba8[8];
extern __int64* GameData_212ee30[4];
extern __int64 GameData_212c7e0[5];
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_21d96b8;
extern __int64 GameData_21f1c48[];
extern __int64 GameData_21f1dc8;
extern __int64 GameData_21f3c98;
extern __int64 GameData_21f3ca0;
extern __int64 GameData_21f3ca8;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f3cc8;
extern __int64 GameData_21f3cd0;
extern __int64 GameData_21f3cd8;
extern __int64 GameData_21f3ce0;
extern __int64 GameData_21f3cf0;
extern __int64 GameData_21f3cf8;
extern __int64 GameData_220b6c0;
extern __int64 GameData_220b6d0;
extern __int64 GameData_220b6d8;
extern __int64 GameData_220b6f8;
extern __int64 GameData_220d620;
extern __int64 GameData_220d628;
extern __int64 GameData_220d630;
extern __int64 GameData_220d638;
extern __int64 GameData_220f950;
extern __int64 GameData_220fd08;
extern __int64 GameData_2210d68;
extern __int64 GameData_2210d70;
extern __int64 GameData_2212260;
extern __int64 GameData_2212268;
extern __int64 GameData_2212280;
extern __int64 GameData_2212288;
extern __int64 GameData_2212290;
extern __int64 GameData_22122a0;
extern __int64 GameData_22122b0;
extern __int64 GameData_22122c0;
extern __int64 GameData_22122c8;
extern __int64 GameData_22122d0;
extern __int64 GameData_22122e0;
extern __int64 GameData_22122f0;
extern __int64 GameData_2212300;
extern __int64 GameData_2212308;
extern __int64 GameData_2212310;
extern __int64 GameData_2212320;
extern __int64 GameData_2212330;
extern __int64 GameData_22124c8;
extern __int64 GameData_22124d8;
extern __int64 GameData_22124e0;
extern __int64 GameData_22124e8;
extern __int64 GameData_22124f0;
extern __int64 GameData_22124f8;
extern __int64 GameData_2212500;
extern __int64 GameData_2263c30;
extern __int64 as_g_base_frame_counter;
extern __int64 ui_Manager_instance_;
extern char* GameData_1fa9470[9];
extern char GameData_21f1dd8[];
extern char GameData_2212278;
extern char GameData_22122b8;
extern char GameData_22122f8;
extern int GameData_2212298;
extern int GameData_22122a8;
extern int GameData_22122d8;
extern int GameData_22122e8;
extern int GameData_2212318;
extern int GameData_2212328;
extern int GameData_2212508;
void CharacterManager_cf02a0(__int64);
void GameRoutine_efa580(__int64);
void ProcHubSeq_d85530();
__int64 ProcHubSeq_d85570(__int64 a1);
__int64 ProcHubSeq_d862c0(unsigned __int8* a1, unsigned __int8* a2);
__int64 ProcHubSeq_d87d00(__int64 result);
__int64 ProcHubSeq_d88a40(__int64 result);
void ProcHubSeq_Unknown3(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6);
_QWORD* GameRoutine_e1e2d0(_QWORD*);
__int64 LocatorDispos_db2560(__int64, unsigned __int8*);
bool CharacterSituation_f94550();
__int64 game_hub_anonymous_ProcHubSeq_CreateBindZView_closure0_Invoke();

void ProcHubSeq_d85530()
{
  if (game_hub_ProcHubSeqView_instance_ != 0 && GameData_21f3d10 != 0 &&
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0) {
    *(_BYTE*)(GameData_21f3d10 + 768) = 1;
  }
}

__int64 ProcHubSeq_d85570(__int64 a1)
{
  __int64 v4;
  __int64 v5;

  if (game_hub_ProcHubSeqView_instance_ == 0) {
    return 0;
  }
  if (*(_QWORD*)GameData_212dbb8[0] == 0 ||
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) > 0) {
    return 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2212338,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2212338) != 0) {
    GameData_2212278 = 13;
    GameData_2212290 = 0;
    GameData_2212298 = 0;
    GameData_22122a0 = 0;
    GameData_22122a8 = 0;
    GameData_22122b0 = 0;
    GameData_22122e0 = 0;
    GameData_22122e8 = 0;
    GameData_22122f0 = 0;
    GameData_22122f8 = 0;
    GameData_2212320 = 0;
    GameData_2212328 = 0;
    GameData_2212330 = 0;
    GameData_22122c0 = 0;
    GameData_22122c8 = 0;
    GameData_22122d0 = 0;
    GameData_22122d8 = 0;
    GameData_2212318 = 0;
    GameData_2212280 = 0;
    GameData_2212288 = (__int64)GameRoutine_d8b3a0;
    GameData_2212308 = 0;
    GameData_2212310 = 0;
    GameData_2212300 = 0;
    GameData_22122b8 = 3;
    __cxa_guard_release(&GameData_2212338);
  }
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
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
  game_ProcInst_Register(v4);
  *(_QWORD*)v4 = game_hub_anonymous_ProcPushWorldPrepareSeq_vtable;
  return ProcInst_657850(v4, (__int64)&GameData_2212278,
                         (__int64)"ProcPushWorldPrepareSeq", 1, a1);
}

__int64 ProcHubSeq_d862c0(unsigned __int8* a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  bool v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v23[3];
  struct {
    __int64* v24[74];
    char v25;
    char gap625_[15];
    char v26;
    char gap641_[31];
    char v27;
  } v24_;
  struct {
    _QWORD v28[3];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    char gap736_[48];
    char v32;
  } v28_;
  struct {
    unsigned __int8* v33;
    unsigned __int8* v34;
  } v33_;

  v2 = *a1;
  v3 = *((_QWORD*)a1 + 2);
  v5 = (v2 & 1) == 0;
  v6 = v2 >> 1;
  if (v5) {
    v7 = v6;
  }
  else {
    v7 = *((_QWORD*)a1 + 1);
  }
  v8 = *a2;
  if (v5) {
    v3 = (__int64)(a1 + 1);
  }
  v9 = (v8 & 1) == 0;
  v10 = v8 >> 1;
  if (v9) {
    v11 = (__int64)(a2 + 1);
  }
  else {
    v11 = *((_QWORD*)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  memset(v24_.v24, 0, 24);
  game_hub_LocatorDispos_CreateExternalDataImpl((void*)(&v33_.v33),
                                                *(_QWORD*)GameData_212ec00, v3,
                                                v7, v24_.v24, v11, v12);
  v13 = v33_.v33;
  if (v33_.v34 == v33_.v33) {
    v15 = 0;
    if (v33_.v33 == nullptr) {
      return v15 & 1;
    }
    goto LABEL_34;
  }
  LOBYTE(v24_.v24[0]) = 0;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v27 = 0;
  v28_.v32 = 0;
  memset(v28_.v28, 0, sizeof(v28_.v28));
  v28_.v29 = 0;
  LOBYTE(v28_.v30) = 0;
  HubNatives_ccba40((__int64*)v24_.v24, (__int64)(v33_.v33 + 24));
  LODWORD(v28_.v29) = 0;
  v24_.v25 = 1;
  LocatorDispos_db2180((void*)(v23), a1, v33_.v33);
  if ((v28_.v28[0] & 1) != 0 && v28_.v28[2] != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v14);
  }
  qmemcpy(v28_.v28, v23, sizeof(v28_.v28));
  v15 = GameRoutine_d85ce0((__int64)v24_.v24);
  if (v28_.v32 == 1 && v28_.v30 != 0) {
    v28_.v31 = v28_.v30;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v16);
  }
  if ((v28_.v28[0] & 1) != 0 && v28_.v28[2] != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v17);
  }
  if (v24_.v25 == 1) {
    HubNatives_ccbf80((__int64)v24_.v24);
  }
  v13 = v33_.v33;
  if (v33_.v33 != nullptr) {
  LABEL_34:
    if (v13 == v33_.v34) {
      goto LABEL_44;
    }
    v18 = v33_.v34 - 616;
    v19 = fw_memory_g_heap_manager_ptr;
    do {
      HubNatives_ccbf80((__int64)(v18 + 24));
      if ((*v18 & 1) != 0 && *((_QWORD*)v18 + 2) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v19 + v20);
      }
      v5 = v18 == v13;
      v18 -= 616;
    } while (!v5);
    v33_.v34 = v13;
    if (v33_.v33 != nullptr) {
    LABEL_44:
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
    }
  }
  return v15 & 1;
}

__int64 game_hub_anonymous_ProcHubSeq_CreateInstances(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  _QWORD* v38;
  _QWORD* v39;
  __int64* v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64* v43;
  _QWORD* v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64* v53;
  __int64** v54;
  __int64* v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64* v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  _QWORD* v73;
  _QWORD* v74;
  __int64* v75;
  _QWORD* v76;
  _QWORD* v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64* v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  __int64* v94;
  __int64 v95;
  __int64* v96;
  __int64* v97;
  __int64 v98;
  __int64* v99;
  __int64* v100;
  _QWORD* v101;
  __int64* v102;
  __int64* v103;
  _QWORD* v104;
  _QWORD* v105;
  __int64* v106;
  _QWORD* v107;
  _QWORD* v108;
  __int64* v109;
  _QWORD* v110;
  _QWORD* v111;
  __int64* v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  _QWORD* v116;
  _QWORD* v117;
  __int64* v118;
  __int64** v119;
  __int64** v120;
  __int64*** v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64* v125;
  __int64* v126;
  __int64 v127;
  __int64 v128;
  __int64* v129;
  __int64 v130;
  __int64* v131;
  _QWORD* v132;
  __int64* v133;
  __int64 v134;
  _QWORD* v135;
  _QWORD* v136;
  __int64* v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 result;
  __int64 v144;
  __int64 v145;
  _QWORD v146[4];
  _QWORD* v147;

  v2 = (__int64*)GameData_212ef78[0];
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)GameData_212ef78[0] != 0) {
    ++*GameData_212ef70;
  }
  else {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        264, 16, 0);
    v5 = *v2;
    v6 = (__int64*)v4;
    if (*v2 == 0) {
      *v2 = v4;
      *GameData_212ef70 = 1;
      v5 = v4;
    }
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 24) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 16) = 0;
    *(_DWORD*)(v4 + 120) = 1065353216;
    *(_QWORD*)(v4 + 128) = 0;
    *(_QWORD*)(v4 + 136) = 0;
    *(_QWORD*)(v4 + 144) = 0;
    *(_QWORD*)(v4 + 152) = 0;
    *(_DWORD*)(v4 + 160) = 1065353216;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 176) = 0;
    *(_QWORD*)(v4 + 184) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    *(_DWORD*)(v4 + 200) = 1065353216;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 232) = 0;
    *(_QWORD*)(v4 + 240) = 0;
    *(_QWORD*)(v4 + 248) = 0;
    *(_BYTE*)(v4 + 256) = 0;
    v7 = GameData_212f148[0] + 8;
    *(_QWORD*)v4 = GameData_212f148[0] + 2;
    *(_QWORD*)(v4 + 8) = v7;
    GameRoutine_dda5a0(v5 + 8, "GameData/Hub.bin", &GameData_1ac799f, 1);
    v8 = *v6;
    *v2 = (__int64)v6;
    (*(void (**)(__int64*))(v8 + 16))(v6);
  }
  v9 = fw_memory_HeapManager_Allocate(*v3, 776, 16, 0);
  v10 = (__int64*)v9;
  v11 = (__int64**)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] == 0) {
    *(_QWORD*)GameData_212dbb8[0] = v9;
    *GameData_212eeb8 = 1;
  }
  *(_DWORD*)(v9 + 8) = 0;
  v12 = GameData_212eeb0;
  *(_WORD*)(v9 + 12) = 0;
  *(_DWORD*)(v9 + 24) = 0;
  v13 = GameData_212d2f0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 + 136) = 2;
  *(_DWORD*)(v9 + 32) = 0;
  *(_WORD*)(v9 + 40) = 0;
  *(_WORD*)(v9 + 64) = 0;
  *(_WORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_DWORD*)(v9 + 152) = 0;
  *(_DWORD*)(v9 + 168) = 0;
  *(_DWORD*)(v9 + 184) = 0;
  *(_QWORD*)v9 = v12 + 2;
  *(_BYTE*)(v9 + 240) = 0;
  *(_QWORD*)(v9 + 229) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 200) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 192) = 0;
  *(_QWORD*)(v9 + 16) = v13 + 2;
  *(_QWORD*)(v9 + 144) = v13 + 2;
  *(_QWORD*)(v9 + 160) = v13 + 2;
  *(_QWORD*)(v9 + 176) = v13 + 2;
  GameRoutine_d97ff0(v9 + 248);
  v10[94] = 0;
  v10[93] = 0;
  v10[92] = 0;
  v10[91] = 0;
  *v11 = v10;
  *(__int64*)((char*)v10 + 766) = 0;
  v14 = *v10;
  v10[95] = 0;
  (*(void (**)(__int64*))(v14 + 16))(v10);
  v15 = fw_memory_HeapManager_Allocate(*v3, 48, 16, 0);
  v16 = v15;
  v17 = (__int64*)GameData_212ebf8[0];
  if (*(_QWORD*)GameData_212ebf8[0] == 0) {
    *(_QWORD*)GameData_212ebf8[0] = v15;
    *GameData_212f288[0] = 1;
  }
  v18 = GameData_212f280;
  v19 = *v3;
  *(_WORD*)(v16 + 8) = 0;
  *(_QWORD*)v16 = v18 + 2;
  v20 = fw_memory_HeapManager_Allocate(v19, 48, 16, 0);
  *(_QWORD*)(v20 + 16) = 0;
  v21 = GameData_212ed10[0];
  *(_QWORD*)(v20 + 32) = 0;
  *(_DWORD*)(v20 + 40) = 0;
  *(_QWORD*)(v16 + 24) = v20;
  v22 = v21 + 2;
  *(_QWORD*)v20 = v21 + 2;
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 24) = 0x3F8000003F800000LL;
  *(_QWORD*)(v16 + 16) = v20 + 24;
  v23 = fw_memory_HeapManager_Allocate(*v3, 48, 16, 0);
  v24 = *(_QWORD*)v16;
  *(_QWORD*)(v23 + 8) = 0;
  *(_QWORD*)(v23 + 16) = 0;
  *(_QWORD*)v23 = v22;
  *(_QWORD*)(v23 + 32) = 0;
  *(_DWORD*)(v23 + 40) = 0;
  *(_QWORD*)(v16 + 40) = v23;
  *(_QWORD*)(v23 + 24) = 0x3F8000003F800000LL;
  *v17 = v16;
  *(_QWORD*)(v16 + 32) = v23 + 24;
  (*(void (**)(__int64))(v24 + 16))(v16);
  v25 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 8, 16, 0);
  v26 = (_QWORD*)GameData_212dbf8;
  if (*(_QWORD*)GameData_212dbf8 == 0) {
    *GameData_212f118 = 1;
  }
  v27 = GameData_212f110;
  *v26 = v25;
  *v25 = v27 + 2;
  GameRoutine_dbee80();
  v28 = fw_memory_HeapManager_Allocate(*v3, 56, 16, 0);
  v29 = (__int64*)GameData_212dbc8[0];
  if (*(_QWORD*)GameData_212dbc8[0] == 0) {
    *GameData_212f020 = 1;
  }
  v30 = GameData_212f018;
  *(_DWORD*)(v28 + 16) = 0;
  *(_QWORD*)(v28 + 24) = v13 + 2;
  *(_DWORD*)(v28 + 32) = 0;
  *(_QWORD*)(v28 + 40) = v13 + 2;
  *(_DWORD*)(v28 + 48) = 0;
  *v29 = v28;
  *(_QWORD*)v28 = v30 + 2;
  *(_QWORD*)(v28 + 8) = v13 + 2;
  GameRoutine_d8d690();
  v31 = fw_memory_HeapManager_Allocate(*v3, 248, 16, 0);
  GameRoutine_e24c50();
  *GameData_212ef18[0] = v31;
  (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
  v32 = fw_memory_HeapManager_Allocate(*v3, 64, 16, 0);
  v33 = GameData_212ec18[0];
  if (*GameData_212ec18[0] == 0) {
    *GameData_212f7f0 = 1;
  }
  v34 = GameData_212f7e8;
  *(_QWORD*)(v32 + 16) = 0;
  *(_QWORD*)(v32 + 24) = 0;
  *(_QWORD*)(v32 + 32) = 0;
  *(_QWORD*)(v32 + 40) = 0;
  *(_QWORD*)(v32 + 48) = 0;
  *(_DWORD*)(v32 + 56) = 0;
  *v33 = v32;
  *(_QWORD*)v32 = v34 + 2;
  *(_QWORD*)(v32 + 8) = 0;
  GameRoutine_ee3430();
  v35 = fw_memory_HeapManager_Allocate(*v3, 16, 16, 0);
  v36 = (__int64*)GameData_212dbd8[0];
  if (*(_QWORD*)GameData_212dbd8[0] == 0) {
    *GameData_212f2d0 = 1;
  }
  v37 = GameData_212f2c8;
  *(_BYTE*)(v35 + 8) = 0;
  *v36 = v35;
  *(_QWORD*)v35 = v37 + 2;
  GameRoutine_e2b060();
  v38 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 56, 16, 0);
  v39 = (_QWORD*)GameData_212ef80[0];
  if (*(_QWORD*)GameData_212ef80[0] == 0) {
    *GameData_212f2c0[0] = 1;
  }
  v40 = GameData_212f2b8;
  v38[2] = 0;
  v38[3] = 0;
  v38[4] = 0;
  v38[5] = 0;
  v38[6] = 0;
  *v39 = v38;
  *v38 = v40 + 2;
  v38[1] = 0;
  GameRoutine_e2a6f0();
  v41 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 80, 16, 0);
  v42 = (_QWORD*)GameData_212ef88[0];
  if (*(_QWORD*)GameData_212ef88[0] == 0) {
    *GameData_212fb60[0] = 1;
  }
  v43 = GameData_212fb58;
  v41[2] = 0;
  v41[3] = 0;
  v41[4] = 0;
  v41[5] = 0;
  v41[6] = 0;
  v41[7] = 0;
  v41[8] = 0;
  v41[9] = 0;
  *v42 = v41;
  *v41 = v43 + 2;
  v41[1] = 0;
  GameRoutine_fcf820();
  v44 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 8, 16, 0);
  v45 = GameData_212ebd8[0];
  if (*GameData_212ebd8[0] == 0) {
    *GameData_212eef8 = 1;
  }
  v46 = GameData_212eef0;
  *v45 = (__int64)v44;
  *v44 = v46 + 2;
  GameRoutine_d5ca00();
  v47 = fw_memory_HeapManager_Allocate(*v3, 336, 16, 0);
  GameRoutine_d6de80();
  *(_QWORD*)GameData_212dbc0[0] = v47;
  (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
  v48 = fw_memory_HeapManager_Allocate(*v3, 40, 16, 0);
  GameRoutine_f70dc0();
  *GameData_212ebb0[0] = v48;
  (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
  v49 = fw_memory_HeapManager_Allocate(*v3, 200, 16, 0);
  v50 = GameData_212ebc0[0];
  if (*GameData_212ebc0[0] == 0) {
    *GameData_212ef48 = 1;
  }
  v51 = GameData_212ef40;
  *(_QWORD*)(v49 + 16) = 0;
  *(_QWORD*)(v49 + 24) = 0;
  *(_QWORD*)(v49 + 32) = 0;
  *(_QWORD*)(v49 + 40) = 0;
  *(_QWORD*)(v49 + 48) = 0;
  *(_QWORD*)(v49 + 56) = 0;
  *(_QWORD*)(v49 + 64) = 0;
  *(_QWORD*)(v49 + 72) = 0;
  *(_QWORD*)(v49 + 80) = 0;
  *(_QWORD*)(v49 + 88) = 0;
  *(_QWORD*)(v49 + 96) = 0;
  *(_QWORD*)(v49 + 104) = 0;
  *(_QWORD*)(v49 + 112) = 0;
  *(_QWORD*)(v49 + 120) = 0;
  *(_QWORD*)(v49 + 128) = 0;
  *(_QWORD*)(v49 + 136) = 0;
  *(_QWORD*)(v49 + 144) = 0;
  *(_QWORD*)(v49 + 152) = 0;
  *(_BYTE*)(v49 + 160) = 0;
  *(_DWORD*)(v49 + 176) = 0;
  *(_DWORD*)(v49 + 192) = 0;
  *(_WORD*)(v49 + 161) = 0;
  *v50 = v49;
  *(_QWORD*)v49 = v51 + 2;
  *(_QWORD*)(v49 + 8) = 0;
  *(_QWORD*)(v49 + 168) = v13 + 2;
  *(_QWORD*)(v49 + 184) = v13 + 2;
  GameRoutine_d7a670();
  v52 = fw_memory_HeapManager_Allocate(*v3, 48, 16, 0);
  v53 = (__int64*)v52;
  v54 = (__int64**)GameData_212ef90[0];
  if (*(_QWORD*)GameData_212ef90[0] == 0) {
    *(_QWORD*)GameData_212ef90[0] = v52;
    *GameData_212f050 = 1;
  }
  v55 = GameData_212f048;
  v56 = *v3;
  v53[2] = 0;
  v53[3] = 0;
  v53[4] = 0;
  v53[5] = 0;
  *v53 = (__int64)(v55 + 2);
  v53[1] = 0;
  v57 = (_QWORD*)fw_memory_HeapManager_Allocate(v56, 32, 16, 0);
  v57[2] = 0;
  v58 = v53[5];
  *v57 = GameData_212f058[0] + 2;
  v57[1] = 0;
  v53[4] = (__int64)(v57 + 3);
  v53[5] = (__int64)v57;
  if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    std___1___shared_weak_count___release_weak(v58);
  }
  v59 = *v53;
  *v54 = v53;
  (*(void (**)(__int64*))(v59 + 16))(v53);
  v60 = fw_memory_HeapManager_Allocate(*v3, 224, 16, 0);
  GameRoutine_cb6ca0();
  *GameData_212d458[0] = v60;
  (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
  v61 = fw_memory_HeapManager_Allocate(*v3, 120, 16, 0);
  v62 = (__int64*)GameData_212dc30[0];
  if (*(_QWORD*)GameData_212dc30[0] == 0) {
    *(_QWORD*)GameData_212dc30[0] = v61;
    *GameData_212f0a8 = 1;
  }
  *(_DWORD*)(v61 + 16) = 0;
  v63 = GameData_212f0a0;
  *(_BYTE*)(v61 + 116) = 0;
  *(_QWORD*)(v61 + 24) = 0;
  *(_QWORD*)(v61 + 32) = 0;
  *(_QWORD*)(v61 + 40) = 0;
  *(_QWORD*)(v61 + 48) = 0;
  v64 = v63 + 2;
  *(_QWORD*)(v61 + 56) = 0;
  *(_BYTE*)(v61 + 64) = 0;
  *(_QWORD*)(v61 + 72) = 0;
  *(_QWORD*)(v61 + 80) = 0;
  *(_QWORD*)(v61 + 88) = 0;
  *(_QWORD*)(v61 + 96) = 0;
  *(_BYTE*)(v61 + 104) = 0;
  *(_QWORD*)v61 = v64;
  *(_QWORD*)(v61 + 8) = v13 + 2;
  if (game_gmap_GmapClock_instance_ != 0) {
    *(_DWORD*)(game_gmap_GmapClock_instance_ + 48) = 0;
    v64 = *(__int64**)v61;
  }
  *v62 = v61;
  ((void (*)(void))v64[2])();
  v65 = fw_memory_HeapManager_Allocate(*v3, 176, 16, 0);
  GameRoutine_cbaa70();
  *(_QWORD*)GameData_212dc68 = v65;
  (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
  v66 = fw_memory_HeapManager_Allocate(*v3, 120, 16, 0);
  GameRoutine_dfeed0();
  *GameData_212eec0[0] = v66;
  (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
  v67 = fw_memory_HeapManager_Allocate(*v3, 72, 16, 0);
  v68 = (__int64*)GameData_212dbe8[0];
  if (*(_QWORD*)GameData_212dbe8[0] == 0) {
    *GameData_2130030[0] = 1;
  }
  v69 = GameData_2130028;
  *(_DWORD*)(v67 + 8) = 0;
  *(_QWORD*)(v67 + 16) = 0;
  *(_QWORD*)(v67 + 24) = 0;
  *(_QWORD*)(v67 + 32) = 0;
  *(_QWORD*)(v67 + 40) = 0;
  *(_QWORD*)(v67 + 48) = 0;
  *(_QWORD*)(v67 + 56) = 0;
  *(_WORD*)(v67 + 64) = 0;
  *v68 = v67;
  *(_QWORD*)v67 = v69 + 2;
  *(_WORD*)(v67 + 12) = 256;
  GameRoutine_10c11b0();
  v70 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
  v71 = GameData_212ebc8[0];
  if (*GameData_212ebc8[0] == 0) {
    *GameData_212f268[0] = 1;
  }
  v72 = GameData_212f260;
  *(_QWORD*)(v70 + 16) = 0;
  *(_QWORD*)(v70 + 24) = 0;
  *(_QWORD*)(v70 + 32) = 0;
  *(_QWORD*)(v70 + 40) = 0;
  *(_QWORD*)(v70 + 48) = 0;
  *(_BYTE*)(v70 + 60) = 0;
  *(_BYTE*)(v70 + 64) = 0;
  *(_QWORD*)(v70 + 72) = 0;
  *(_QWORD*)(v70 + 80) = 0;
  *v71 = v70;
  *(_QWORD*)v70 = v72 + 2;
  *(_QWORD*)(v70 + 8) = 0;
  *(_WORD*)(v70 + 56) = 257;
  GameRoutine_e1aa50();
  v73 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 32, 16, 0);
  v74 = (_QWORD*)GameData_212ef98[0];
  if (*(_QWORD*)GameData_212ef98[0] == 0) {
    *GameData_212fbe8[0] = 1;
  }
  v75 = GameData_212fbe0;
  v73[2] = 0;
  v73[3] = 0;
  *v74 = v73;
  *v73 = v75 + 2;
  v73[1] = 0;
  GameRoutine_ff9780();
  v76 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 80, 16, 0);
  v77 = (_QWORD*)GameData_212dc48[0];
  if (*(_QWORD*)GameData_212dc48[0] == 0) {
    *GameData_212f278[0] = 1;
  }
  v78 = GameData_212f270;
  v76[2] = 0;
  v76[3] = 0;
  v76[4] = 0;
  v76[5] = 0;
  v76[6] = 0;
  v76[7] = 0;
  v76[8] = 0;
  v76[9] = 0;
  *v77 = v76;
  *v76 = v78 + 2;
  v76[1] = 0;
  GameRoutine_e1ccd0();
  v79 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
  GameRoutine_cdea20(v79);
  *(_QWORD*)GameData_212dc60[0] = v79;
  (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
  v80 = fw_memory_HeapManager_Allocate(*v3, 96, 16, 0);
  v81 = (__int64*)GameData_212dc58[0];
  if (*(_QWORD*)GameData_212dc58[0] == 0) {
    *GameData_212fa70 = 1;
  }
  *(_QWORD*)(v80 + 88) = 0;
  v82 = GameData_212fa68;
  *(_QWORD*)(v80 + 16) = 0;
  *(_QWORD*)(v80 + 24) = 0;
  *(_QWORD*)(v80 + 32) = 0;
  *(_QWORD*)(v80 + 40) = 0;
  *(_QWORD*)(v80 + 48) = 0;
  *(_QWORD*)(v80 + 56) = 0;
  *(_QWORD*)(v80 + 64) = 0;
  *(_QWORD*)(v80 + 72) = 0;
  *(_WORD*)(v80 + 80) = 0;
  *v81 = v80;
  *(_QWORD*)v80 = v82 + 2;
  *(_QWORD*)(v80 + 8) = 0;
  GameRoutine_f994c0();
  v83 = fw_memory_HeapManager_Allocate(*v3, 56, 16, 0);
  v84 = v83;
  v85 = GameData_212ebe0;
  if (*GameData_212ebe0 == 0) {
    *GameData_212ebe0 = v83;
    *GameData_212ef08 = 1;
  }
  v86 = GameData_212ef00;
  v87 = *v3;
  *(_QWORD*)(v84 + 16) = 0;
  *(_QWORD*)(v84 + 21) = 0;
  *(_QWORD*)(v84 + 32) = 0;
  *(_QWORD*)(v84 + 40) = 0;
  *(_QWORD*)(v84 + 48) = 0;
  *(_QWORD*)v84 = v86 + 2;
  *(_QWORD*)(v84 + 8) = 0;
  *(_BYTE*)(v84 + 29) = 1;
  v88 = fw_memory_HeapManager_Allocate(v87, 192, 16, 0);
  *(_QWORD*)(v88 + 16) = 0;
  v89 = GameData_212ef10[0];
  *(_QWORD*)(v88 + 56) = 0;
  v90 = *(_QWORD*)(v84 + 16);
  *(_QWORD*)(v88 + 88) = 0;
  *(_DWORD*)(v88 + 96) = 0;
  *(_QWORD*)(v88 + 40) = 0;
  *(_QWORD*)(v88 + 48) = v88 + 56;
  *(_QWORD*)(v88 + 80) = 0;
  *(_QWORD*)(v88 + 64) = 0;
  *(_QWORD*)(v88 + 72) = v88 + 80;
  *(_WORD*)(v88 + 100) = 256;
  *(_QWORD*)(v88 + 104) = 0;
  *(_QWORD*)(v88 + 112) = 0;
  *(_QWORD*)(v88 + 120) = 0;
  *(_QWORD*)(v88 + 128) = 0;
  *(_QWORD*)(v88 + 136) = 0;
  *(_QWORD*)(v88 + 144) = 0;
  *(_QWORD*)(v88 + 152) = 0;
  *(_QWORD*)(v88 + 160) = 0;
  *(_QWORD*)(v88 + 168) = 0;
  *(_QWORD*)(v88 + 176) = 0;
  *(_QWORD*)(v88 + 184) = 0;
  *(_QWORD*)(v84 + 16) = v88;
  *(_QWORD*)v88 = v89 + 2;
  *(_QWORD*)(v88 + 8) = 0;
  *(_QWORD*)(v88 + 32) = 0;
  *(_QWORD*)(v88 + 24) = v88 + 32;
  *(_QWORD*)(v84 + 8) = v88 + 24;
  if (v90 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
    std___1___shared_weak_count___release_weak(v90);
  }
  v91 = *(_QWORD*)v84;
  *v85 = v84;
  (*(void (**)(__int64))(v91 + 16))(v84);
  v92 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 104, 16, 0);
  v93 = (_QWORD*)GameData_212ec00;
  if (*(_QWORD*)GameData_212ec00 == 0) {
    *GameData_212f108 = 1;
  }
  v94 = GameData_212f100;
  v92[2] = 0;
  v92[3] = 0;
  v92[4] = 0;
  v92[5] = 0;
  v92[6] = 0;
  v92[7] = 0;
  v92[8] = 0;
  v92[9] = 0;
  v92[10] = 0;
  v92[11] = 0;
  v92[12] = 0;
  *v93 = v92;
  *v92 = v94 + 2;
  v92[1] = 0;
  GameRoutine_db5b40();
  v95 = fw_memory_HeapManager_Allocate(*v3, 192, 16, 0);
  v96 = GameData_212ef20;
  if (*GameData_212ef20 == 0) {
    *GameData_212f9f8[0] = 1;
  }
  *(_QWORD*)(v95 + 64) = 0;
  v97 = GameData_212f9f0;
  *(_QWORD*)(v95 + 48) = 0;
  *(_QWORD*)(v95 + 56) = v95 + 64;
  *(_QWORD*)(v95 + 88) = 0;
  *(_QWORD*)(v95 + 16) = 0;
  *(_QWORD*)(v95 + 24) = 0;
  *(_QWORD*)(v95 + 32) = 0;
  *(_QWORD*)(v95 + 40) = 0;
  *(_QWORD*)(v95 + 72) = 0;
  *(_QWORD*)(v95 + 80) = v95 + 88;
  *(_BYTE*)(v95 + 176) = 0;
  *(_BYTE*)(v95 + 184) = 0;
  *(_QWORD*)(v95 + 96) = 0;
  *(_QWORD*)(v95 + 104) = 0;
  *(_QWORD*)(v95 + 112) = 0;
  *(_QWORD*)(v95 + 120) = 0;
  *(_QWORD*)(v95 + 128) = 0;
  *(_QWORD*)(v95 + 136) = 0;
  *(_QWORD*)(v95 + 144) = 0;
  *(_BYTE*)(v95 + 152) = 0;
  *v96 = v95;
  *(_QWORD*)v95 = v97 + 2;
  *(_QWORD*)(v95 + 8) = 0;
  GameRoutine_f7cb50();
  v98 = fw_memory_HeapManager_Allocate(*v3, 152, 16, 0);
  v99 = (__int64*)GameData_212dbf0[0];
  if (*(_QWORD*)GameData_212dbf0[0] == 0) {
    *GameData_212f838 = 1;
  }
  *(_DWORD*)(v98 + 16) = 0;
  v100 = GameData_212f830;
  *(_DWORD*)(v98 + 68) = 0;
  *(_BYTE*)(v98 + 72) = 0;
  *(_BYTE*)(v98 + 96) = 0;
  *(_DWORD*)(v98 + 132) = 0;
  *(_BYTE*)(v98 + 136) = 0;
  *(_DWORD*)(v98 + 140) = 0;
  *(_QWORD*)(v98 + 24) = 0;
  *(_QWORD*)(v98 + 32) = 0;
  *(_QWORD*)(v98 + 40) = 0;
  *(_QWORD*)(v98 + 48) = 0;
  *(_QWORD*)(v98 + 56) = 0;
  *(_WORD*)(v98 + 64) = 0;
  *(_QWORD*)(v98 + 104) = 0;
  *(_QWORD*)(v98 + 112) = 0;
  *(_QWORD*)(v98 + 120) = 0;
  *(_BYTE*)(v98 + 128) = 0;
  *(_WORD*)(v98 + 144) = 1;
  *(_BYTE*)(v98 + 146) = 0;
  *v99 = v98;
  *(_QWORD*)v98 = v100 + 2;
  *(_QWORD*)(v98 + 8) = v13 + 2;
  GameRoutine_efd3d0();
  v101 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 8, 16, 0);
  v102 = GameData_212ec20;
  if (*GameData_212ec20 == 0) {
    *GameData_212f828 = 1;
  }
  v103 = GameData_212f818[0];
  *v102 = (__int64)v101;
  *v101 = v103 + 2;
  GameRoutine_ef84a0();
  v104 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 8, 16, 0);
  v105 = (_QWORD*)GameData_212efa0[0];
  if (*(_QWORD*)GameData_212efa0[0] == 0) {
    *GameData_212f920[0] = 1;
  }
  v106 = GameData_212f918;
  *v105 = v104;
  *v104 = v106 + 2;
  GameRoutine_f2e8c0();
  v107 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
  v108 = (_QWORD*)GameData_212dc50[0];
  if (*(_QWORD*)GameData_212dc50[0] == 0) {
    *GameData_212fad8 = 1;
  }
  v109 = GameData_212fad0;
  v107[2] = 0;
  v107[3] = 0;
  v107[4] = 0;
  v107[5] = 0;
  v107[6] = 0;
  v107[7] = 0;
  v107[8] = 0;
  v107[9] = 0;
  v107[10] = 0;
  *v108 = v107;
  *v107 = v109 + 2;
  v107[1] = 0;
  GameRoutine_fb5a20();
  v110 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 8, 16, 0);
  v111 = (_QWORD*)GameData_212efa8[0];
  if (*(_QWORD*)GameData_212efa8[0] == 0) {
    *GameData_212fd60 = 1;
  }
  v112 = GameData_212fd58;
  *v111 = v110;
  *v110 = v112 + 2;
  GameRoutine_1030eb0();
  v113 = fw_memory_HeapManager_Allocate(*v3, 64, 16, 0);
  v114 = GameData_212eee8[0];
  if (*GameData_212eee8[0] == 0) {
    *GameData_212f2b0[0] = 1;
  }
  *(_QWORD*)(v113 + 16) = 0;
  v115 = GameData_212f2a8;
  *(_QWORD*)(v113 + 24) = 0;
  *(_QWORD*)(v113 + 32) = 0;
  *(_QWORD*)(v113 + 40) = 0;
  *(_QWORD*)(v113 + 48) = 0;
  *(_DWORD*)(v113 + 56) = 0;
  *v114 = v113;
  *(_QWORD*)v113 = v115 + 2;
  *(_QWORD*)(v113 + 8) = v113 + 16;
  GameRoutine_e23c10();
  v116 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 24, 16, 0);
  v117 = (_QWORD*)GameData_212ebf0[0];
  if (*(_QWORD*)GameData_212ebf0[0] == 0) {
    *GameData_212fa90 = 1;
  }
  v118 = GameData_212fa88;
  v116[2] = 0;
  *v117 = v116;
  *v116 = v118 + 2;
  v116[1] = 0;
  GameRoutine_fa2770();
  v119 = (__int64**)fw_memory_HeapManager_Allocate(*v3, 56, 16, 0);
  v120 = v119;
  *v119 = GameData_212fb08 + 2;
  v121 = (__int64***)GameData_212efb0[0];
  if (*(_QWORD*)GameData_212efb0[0] == 0) {
    *(_QWORD*)GameData_212efb0[0] = v119;
    *GameData_212fb10 = 1;
  }
  v122 = *v3;
  v120[1] = GameData_212fb18[0] + 2;
  v123 = fw_memory_HeapManager_Allocate(v122, 296, 16, 0);
  *(_DWORD*)(v123 + 48) = 0x2000;
  v124 = GameData_2131678;
  *(_WORD*)(v123 + 108) = 256;
  *(_QWORD*)(v123 + 8) = 0;
  *(_QWORD*)(v123 + 16) = 0;
  *(_DWORD*)(v123 + 32) = 0;
  *(_QWORD*)(v123 + 40) = 0;
  *(_DWORD*)(v123 + 104) = 0;
  *(_QWORD*)(v123 + 56) = 0;
  *(_QWORD*)(v123 + 64) = 0;
  *(_QWORD*)(v123 + 72) = 0;
  *(_WORD*)(v123 + 80) = 0;
  *(_DWORD*)(v123 + 112) = -1082130432;
  *(_WORD*)(v123 + 116) = 0;
  *(_WORD*)(v123 + 136) = 0;
  *(_BYTE*)(v123 + 160) = 0;
  *(_BYTE*)(v123 + 288) = 0;
  *(_QWORD*)(v123 + 272) = 0;
  *(_QWORD*)(v123 + 280) = 0;
  *(_QWORD*)(v123 + 256) = 0;
  *(_QWORD*)(v123 + 264) = 0;
  *(_QWORD*)(v123 + 240) = 0;
  *(_QWORD*)(v123 + 248) = 0;
  *(_QWORD*)(v123 + 224) = 0;
  *(_QWORD*)(v123 + 232) = 0;
  *(_QWORD*)(v123 + 208) = 0;
  *(_QWORD*)(v123 + 216) = 0;
  *(_QWORD*)(v123 + 192) = 0;
  *(_QWORD*)(v123 + 200) = 0;
  *(_QWORD*)(v123 + 176) = 0;
  *(_QWORD*)(v123 + 184) = 0;
  *(_QWORD*)(v123 + 168) = 0;
  *(_QWORD*)(v123 + 120) = 0;
  *(_DWORD*)(v123 + 127) = 0;
  v120[3] = (__int64*)v123;
  *((_BYTE*)v120 + 32) = 0;
  *((_BYTE*)v120 + 36) = 0;
  *((_DWORD*)v120 + 10) = 0;
  *((_BYTE*)v120 + 44) = 0;
  *((_BYTE*)v120 + 48) = 0;
  *(_QWORD*)v123 = v124 + 16;
  *(_DWORD*)(v123 + 292) = 2;
  *(_QWORD*)(v123 + 24) = 0;
  v120[2] = (__int64*)(v123 + 24);
  v125 = GameData_212fb00[0] + 2;
  v126 = GameData_212fb00[0] + 8;
  *v121 = v120;
  *v120 = v125;
  v120[1] = v126;
  GameRoutine_fbb3d0(v120);
  v127 = GameRoutine_1781e30(a1);
  GameRoutine_1418aa0(v127);
  v128 = fw_memory_HeapManager_Allocate(*v3, 80, 16, 0);
  *(_QWORD*)(v128 + 16) = 0;
  *(_QWORD*)(v128 + 24) = 0;
  *(_BYTE*)(v128 + 16) = 0;
  *(_QWORD*)(v128 + 32) = 0;
  *(_QWORD*)(v128 + 40) = 0;
  *(_QWORD*)(v128 + 48) = 0;
  *(_QWORD*)(v128 + 56) = 0;
  *(_QWORD*)v128 = game_hub_HubSeqEnter_vtable;
  *(_QWORD*)(v128 + 8) = 0;
  *(_BYTE*)(v128 + 9) = 0;
  v129 = (__int64*)GameData_212dbd0[0];
  *(_QWORD*)(v128 + 64) = 0;
  *(_QWORD*)(v128 + 72) = 0;
  *v129 = v128;
  v130 = fw_memory_HeapManager_Allocate(*v3, 112, 16, 0);
  *(_QWORD*)(v130 + 64) = 0;
  *(_QWORD*)(v130 + 72) = 0;
  *(_QWORD*)(v130 + 16) = 0;
  *(_QWORD*)(v130 + 24) = 0;
  *(_QWORD*)(v130 + 32) = 0;
  *(_QWORD*)(v130 + 40) = 0;
  *(_QWORD*)(v130 + 48) = 0;
  *(_QWORD*)(v130 + 56) = 0;
  *(_QWORD*)(v130 + 80) = 0;
  *(_QWORD*)(v130 + 88) = 0;
  *(_BYTE*)(v130 + 25) = 0;
  *(_BYTE*)(v130 + 72) = 0;
  *(_QWORD*)v130 = game_hub_HubSeqExit_vtable;
  *(_QWORD*)(v130 + 8) = 0;
  *(_QWORD*)(v130 + 96) = 0;
  *(_QWORD*)(v130 + 104) = 0;
  v131 = (__int64*)GameData_212dbe0[0];
  *(_BYTE*)(v130 + 64) = 0;
  *v131 = v130;
  v132 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 112, 16, 0);
  v132[2] = 0;
  v132[3] = 0;
  v132[4] = 0;
  v132[5] = 0;
  v132[6] = 0;
  v132[7] = 0;
  v132[8] = 0;
  v132[9] = 0;
  v132[10] = 0;
  v132[11] = 0;
  v132[12] = 0;
  v132[13] = 0;
  *v132 = game_hub_HubSeqEncounter_vtable;
  v132[1] = 0;
  v133 = GameData_212ec10[0];
  *((_BYTE*)v132 + 64) = 0;
  *v133 = (__int64)v132;
  v134 = fw_memory_HeapManager_Allocate(*v3, 16, 16, 0);
  *(_QWORD*)v134 = game_hub_HubSeqAreaChange_vtable;
  *(_QWORD*)(v134 + 8) = 0;
  *(_BYTE*)(v134 + 12) = 0;
  *(_QWORD*)GameData_212efb8[0] = v134;
  v135 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 32, 16, 0);
  v135[2] = 0;
  v135[3] = 0;
  *((_BYTE*)v135 + 24) = 0;
  *v135 = game_hub_HubSeqObelisk_vtable;
  v135[1] = 0;
  *(_QWORD*)GameData_212efc0 = v135;
  v136 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 80, 16, 0);
  v136[2] = 0;
  v137 = GameData_212ee40[0];
  v138 = *(_QWORD*)(a1 + 392);
  v136[8] = 0;
  *v136 = v137 + 2;
  v136[1] = 0;
  *(_QWORD*)(a1 + 384) = v136 + 4;
  *(_QWORD*)(a1 + 392) = v136;
  if (v138 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v138 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v138 + 16LL))(v138);
    std___1___shared_weak_count___release_weak(v138);
  }
  v139 = *(_QWORD*)(a1 + 384);
  v146[0] = GameData_1fddf50;
  v146[1] = a1;
  v147 = v146;
  GameRoutine_654050(v146, v139);
  if (v147 == v146) {
    v140 = 32;
  }
  else {
    if (v147 == nullptr) {
      goto LABEL_78;
    }
    v140 = 40;
  }
  (*(void (**)(void*))(*v147 + v140))(v147);
LABEL_78:
  v141 = *(_QWORD*)(a1 + 384);
  v142 = *(_QWORD*)(a1 + 392);
  v144 = v141;
  v145 = v142;
  if (v142 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v142 + 16), 1u,
                              memory_order_relaxed);
    v146[0] = v141;
    v146[1] = v142;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v142 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_66b160(v146);
    std___1___shared_weak_count___release_weak(v142);
  }
  else {
    v146[0] = v141;
    v146[1] = 0;
    GameRoutine_66b160(v146);
  }
  GameRoutine_66b000(&GameData_21c9680, &v144);
  result = v145;
  if (v145 != 0) {
    return std___1___shared_weak_count___release_weak(v145);
  }
  return result;
}

__int64 ProcHubSeq_d87a50(__int64 a1)
{
  __int64 result;

  result = GameRoutine_dbd780(*(_QWORD*)GameData_212dbf8);
  if (GameData_21eea58 != 0 && *(_BYTE*)(GameData_21eea58 + 32) == 1) {
    result = GameRoutine_877400(a1 + 448);
    if (GameData_21eea58 != 0) {
      *(_BYTE*)(GameData_21eea58 + 32) = 0;
    }
  }
  return result;
}

_BYTE* ProcHubSeq_d87ac0(_BYTE* result)
{
  _BYTE* v1;
  __int64 v2;
  int v3;
  int v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((result[216] & 1) == 0) {
    v1 = result;
    v2 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0 &&
        (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                          152) -
                1 <=
            2) {
      v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v3 & 8) != 0) {
        v4 = 18;
      }
      else {
        v4 = 19;
      }
      if ((v3 & v4) == 0) {
        v5 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v3 & 0xFFFFFFE2 | 1;
        if (v5 > 0.0) {
          *(_DWORD*)(v2 + 224) = 0;
        }
      }
    }
    GameRoutine_d52cc0(GameData_21f3d10);
    v6 = GameRoutine_d98820(GameData_21f3d10 + 248, GameData_21f3d10 + 40);
    v7 = *(_QWORD*)(GameData_21c9608 + 936);
    if (v7 == 0) {
      goto LABEL_17;
    }
    v8 = *(_QWORD*)GameData_212dbd8[0];
    if ((GameRoutine_e2aae0(v6, *(_QWORD*)(GameData_21c9608 + 936)) & 1) == 0) {
      goto LABEL_17;
    }
    GameRoutine_e2acc0();
    if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
      goto LABEL_17;
    }
    if (game_GameModeData_instance_ != 0) {
      if (*(_QWORD*)(game_GameModeData_instance_ + 24) == v7) {
      LABEL_17:
        result = GameRoutine_d52ec0((_QWORD*)GameData_21f3d10);
        v1[216] = 1;
        return result;
      }
      GameRoutine_715780();
    }
    GameRoutine_e2a980();
    goto LABEL_17;
  }
  return result;
}

__int64 ProcHubSeq_d87be0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  char v12;
  int v13;
  char v15;
  char v16[23];

  v2 = (__int64*)GameData_212dbb8[0];
  v3 = *(_QWORD*)GameData_212dbb8[0];
  v4 = (_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL);
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL);
  if ((*v4 & 1) == 0) {
    v5 = *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) >> 1;
  }
  if (v5 == 10 && ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0
                       ? (v6 = *(__int64**)(v3 + 80))
                       : (v6 = (__int64*)(v3 + 65)),
                   (v7 = *v6, v8 = *((unsigned __int16*)v6 + 4),
                    v7 == *(_QWORD*)"Hub_101_A1")
                       ? (v9 = v8 == *(unsigned __int16*)"A1")
                       : (v9 = false),
                   v9)) {
    v13 = 3;
  }
  else if (*(_DWORD*)(v3 + 136) == 1 && (v10 = *(_QWORD*)(v3 + 200)) != 0 &&
               (v11 = *(_QWORD*)GameData_212dbb8[0] + 64LL,
                v12 = GameRoutine_f5ee40(v10), v4 = (_BYTE*)v11,
                (v12 & 1) == 0) ||
           (v15 = 20, strcpy(v16, "HugeMemory"),
            (GameRoutine_db2560(v4, &v15) & 1) != 0)) {
    v13 = 1;
  }
  else {
    v13 = 2;
  }
  return Manager_d55250(*v2, a1, v13);
}

__int64 ProcHubSeq_d87d00(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64* v10;
  int* v11;
  int* i;
  __int64 v13;
  int* v14;
  int* j;
  __int64 v16;

  v1 = *(_DWORD*)(GameData_21f3d10 + 136);
  if (v1 != 0) {
    if (v1 != 1) {
      v2 = *(_DWORD*)(result + 480);
      if (v2 > 7) {
        return result;
      }
      goto LABEL_24;
    }
    v2 = 5;
    goto LABEL_4;
  }
  v3 = *(_QWORD*)(GameData_21f3d10 + 72);
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
    v3 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
  }
  if (v3 != 10) {
    v8 = (_DWORD*)(result + 480);
    goto LABEL_23;
  }
  v4 = GameData_21f3d10 + 65;
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    v4 = *(_QWORD*)(GameData_21f3d10 + 80);
  }
  v5 = *(_QWORD*)v4 == *(_QWORD*)"Hub_101_A1" &&
       *(unsigned __int16*)(v4 + 8) ==
           (unsigned __int64)*(unsigned __int16*)"A1";
  if (!v5) {
    v6 = *(_QWORD*)v4;
    v7 = *(unsigned __int16*)(v4 + 8);
    v5 = v6 == *(_QWORD*)"Hub_100_A1";
    v8 = (_DWORD*)(result + 480);
    if (v5 && v7 == *(unsigned __int16*)"A1") {
      v2 = 4;
      *v8 = 4;
      goto LABEL_24;
    }
  LABEL_23:
    v2 = 3;
    *v8 = 3;
    goto LABEL_24;
  }
  v2 = 6;
LABEL_4:
  *(_DWORD*)(result + 480) = v2;
LABEL_24:
  v10 = &GameData_21f1c48[6 * v2];
  v11 = (int*)v10[3];
  for (i = (int*)v10[4]; v11 != i; ++v11) {
    v13 = *v11;
    if ((*((_BYTE*)&GameData_21f1dc8 + v13) & 1) == 0) {
      result = RenderTask_1369e30(ui_Manager_instance_ + 1264, v13);
      *((_BYTE*)&GameData_21f1dc8 + v13) = 1;
    }
  }
  v14 = (int*)*v10;
  for (j = (int*)v10[1]; v14 != j; ++v14) {
    v16 = *v14;
    if ((GameData_21f1dd8[v16] & 1) == 0) {
      result = GameRoutine_1366260((__int64)GameData_1fa9470[v16], 0);
      GameData_21f1dd8[v16] = 1;
    }
  }
  return result;
}

__int64 ProcHubSeq_d87ee0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  char v25;

  if ((*(_BYTE*)(result + 217) & 1) != 0) {
    return result;
  }
  v1 = result;
  v2 = GameData_212dbb8[0];
  v3 = *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 136LL);
  if (v3 != 0) {
    if (v3 == 1) {
      if (game_GameModeData_instance_ != 0) {
        GameRoutine_716420(game_GameModeData_instance_, 6);
      }
      GameRoutine_1624230(v1, 1);
    }
  }
  else if (game_GameModeData_instance_ != 0) {
    GameRoutine_716420(game_GameModeData_instance_, 5);
  }
  v4 = Manager_d540c0();
  if (v4 != 0) {
    v5 = *(_QWORD*)(GameData_21c96e8 + 8);
    v6 = *(_DWORD*)(v5 + 56);
    v7 = *(__int64**)(v5 + 8);
    v8 = *(__int64**)(v5 + 16);
    if (v6 < 0) {
      for (; v7 != v8; ++v7) {
        v9 = *v7;
        if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v9 + 552) == 0) {
          goto LABEL_20;
        }
      }
    }
    else if (v7 != v8) {
      while (1) {
        v10 = *v7++;
        v9 = v10;
        if (*(_DWORD*)(v10 + 84) == v6) {
          break;
        }
        if (v7 == v8) {
          goto LABEL_24;
        }
      }
    LABEL_20:
      v11 = v4;
      v12 = game_gmap_SpotMgr_FindSpot(v4);
      if (v12 != 0) {
        GameRoutine_133f780(v9, v12, 1);
      }
      v13 = game_gmap_SpotMgr_FindSpot(v11);
      if (v13 != 0) {
        v14 = v13;
        GameRoutine_13289e0();
        *(_BYTE*)(v14 + 178) |= 1u;
      }
    }
  }
LABEL_24:
  v15 = 4.0;
  v16 = *(_QWORD*)(*GameData_212d458[0] + 88);
  if (*(_DWORD*)(*(_QWORD*)v2 + 136LL) == 1) {
    v15 = 1.0;
    v17 = 5000;
  }
  else {
    v17 = 200;
  }
  *(float*)(v16 + 80) = v15;
  *(_DWORD*)(v16 + 84) = v17;
  GameRoutine_f710c0(GameData_220b6c8);
  FastTravelManager_ee0380(GameData_220d618);
  GameRoutine_e1b220(GameData_21f3d00);
  GameRoutine_e29f60(GameData_22124d0);
  GameRoutine_d791f0((_QWORD*)GameData_220b6e0);
  ScheduleManager_d9ead0(GameData_21f3ce8);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8bd0();
  }
  GameRoutine_1633a30(v1);
  if (*(_QWORD*)v2 != 0) {
    v18 = *(_QWORD*)v2 + 248LL;
  }
  else {
    v18 = 0;
  }
  if (GameData_22127a8 != 0) {
    v19 = GameData_22127a8;
  }
  else {
    v19 = v18;
  }
  v20 = GameRoutine_d99d20(v19);
  v21 = GameData_220b6e0;
  if ((*(_BYTE*)(GameData_220b6e0 + 161) & 1) == 0) {
    *(_BYTE*)(GameData_220b6e0 + 161) = 1;
    v22 = *(_DWORD*)(v21 + 176);
    *(_DWORD*)(v21 + 176) = v22 + 1;
    if (v22 == 0) {
      (**(void (***)(__int64))(v21 + 168))(v21 + 168);
    }
    v20 = GameRoutine_d799f0(v21);
  }
  if ((*(_BYTE*)(v21 + 162) & 1) == 0) {
    *(_BYTE*)(v21 + 162) = 1;
    v23 = *(_DWORD*)(v21 + 192);
    *(_DWORD*)(v21 + 192) = v23 + 1;
    if (v23 == 0) {
      (**(void (***)(__int64))(v21 + 184))(v21 + 184);
    }
    v20 = GameRoutine_d799f0(v21);
  }
  v24 = GameData_21c9608;
  v25 = *(_BYTE*)(GameData_21c9608 + 328);
  *(_BYTE*)(GameData_21c9608 + 944) = 0;
  *(_QWORD*)(v24 + 936) = 0;
  if ((v25 & 0x20) != 0) {
    v20 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0 &&
        *(_BYTE*)(game_GameModeData_instance_ + 57) != 0) {
      v20 = GameRoutine_716420(
          game_GameModeData_instance_,
          *(unsigned __int8*)(game_GameModeData_instance_ + 57));
      if (game_GameModeData_instance_ != 0) {
        *(_BYTE*)(game_GameModeData_instance_ + 57) = 0;
      }
    }
    *(_QWORD*)(v24 + 328) &= ~0x20uLL;
  }
  result = GameRoutine_120e3c0(v20);
  *(_BYTE*)(v1 + 217) = 1;
  return result;
}

__int64 ProcHubSeq_d881c0()
{
  int v0;
  __int64 result;
  __int64 v2;
  _BYTE v3[32];
  _BYTE* v4;

  if (*(_BYTE*)(GameData_21c9608 + 40) == 1) {
    v0 = GameRoutine_f71d40(*GameData_212ebb0[0], GameData_21c9608 + 128,
                            GameData_21f3d10 + 64);
  }
  else {
    v0 = 0;
  }
  v4 = nullptr;
  GameRoutine_d6e4d0(*(_DWORD**)GameData_212dbc0[0], v0, (__int64)v3);
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
  return (*(__int64 (**)(void*))(*(_QWORD*)v4 + v2))((void*)v4);
}

__int64 game_hub_anonymous_ProcHubSeq_CreateBindZView(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  int v12[4];
  _BYTE v13[32];
  _BYTE* v14;
  _BYTE v15[32];
  _BYTE* v16;
  _BYTE v17[32];
  _BYTE* v18;
  __int64 v19;
  __int64* v20;
  _QWORD v21[4];
  _QWORD* v22;

  v12[0] = 0;
  v14 = nullptr;
  v16 = nullptr;
  v18 = nullptr;
  v20 = nullptr;
  v2 = *(_DWORD*)(*(_QWORD*)GameData_212dbb8[0] + 136LL);
  if (v2 != 0) {
    if (v2 != 1) {
      goto LABEL_6;
    }
    v3 = 3;
  }
  else {
    v3 = 2;
  }
  v12[0] = v3;
LABEL_6:
  v22 = v21;
  v21[0] = GameData_1fddfd0;
  GameRoutine_654050(v21, v13);
  if (v22 == v21) {
    v4 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(_QWORD*))(*v22 + v4))(v22);
LABEL_11:
  v22 = v21;
  v21[0] = GameData_1fde050;
  v21[1] = a1;
  GameRoutine_654050(v21, v15);
  if (v22 == v21) {
    v5 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_16;
    }
    v5 = 40;
  }
  (*(void (**)(_QWORD*))(*v22 + v5))(v22);
LABEL_16:
  v22 = v21;
  v21[0] = GameData_1fde0d0;
  v21[1] = a1;
  GameRoutine_654050(v21, v17);
  if (v22 == v21) {
    v6 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_21;
    }
    v6 = 40;
  }
  (*(void (**)(_QWORD*))(*v22 + v6))(v22);
LABEL_21:
  GameRoutine_d55fd0((_DWORD*)GameData_212ec40[0], (__int64)v12);
  GameRoutine_d56220(a1);
  if (v20 == &v19) {
    v7 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_26;
    }
    v7 = 40;
  }
  (*(void (**)(__int64*))(*v20 + v7))(v20);
LABEL_26:
  if (v18 == v17) {
    v8 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_31;
    }
    v8 = 40;
  }
  (*(void (**)(_BYTE*))(*(_QWORD*)v18 + v8))(v18);
LABEL_31:
  if (v16 == v15) {
    v9 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_36;
    }
    v9 = 40;
  }
  (*(void (**)(_BYTE*))(*(_QWORD*)v16 + v9))(v16);
LABEL_36:
  result = (__int64)v14;
  if (v14 == v13) {
    v11 = 32;
  }
  else {
    if (v14 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(_BYTE*))(*(_QWORD*)v14 + v11))(v14);
}

__int64 ProcHubSeq_d88a40(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  int v5;
  __int64* v6;
  int* v7;
  int* i;
  __int64 v9;
  __int64 v10;
  int v11;
  int* v12;
  int* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (*(_BYTE*)(result + 217) != 0) {
    v1 = *(_QWORD*)(result + 392);
    v2 = result;
    *(_BYTE*)(result + 218) = 0;
    *(_QWORD*)(result + 384) = 0;
    *(_QWORD*)(result + 392) = 0;
    if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
    }
    if (GameData_21f3cd0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cd0 + 24LL))(
          GameData_21f3cd0);
      if (GameData_21f3cd0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cd0 + 8LL))(
            GameData_21f3cd0);
      }
      GameData_21f3cd0 = 0;
    }
    if (GameData_21f3cc8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cc8 + 24LL))(
          GameData_21f3cc8);
      if (GameData_21f3cc8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cc8 + 8LL))(
            GameData_21f3cc8);
      }
      GameData_21f3cc8 = 0;
    }
    if (GameData_220d630 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220d630 + 24LL))(
          GameData_220d630);
      if (GameData_220d630 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220d630 + 8LL))(
            GameData_220d630);
      }
      GameData_220d630 = 0;
    }
    if (GameData_2212260 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2212260 + 24LL))(
          GameData_2212260);
      if (GameData_2212260 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_2212260 + 8LL))(
            GameData_2212260);
      }
      GameData_2212260 = 0;
    }
    if (GameData_2212268 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2212268 + 24LL))(
          GameData_2212268);
      if (GameData_2212268 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_2212268 + 8LL))(
            GameData_2212268);
      }
      GameData_2212268 = 0;
    }
    game_facility_ReleaseGroups();
    if (GameData_22124c8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22124c8 + 24LL))(
          GameData_22124c8);
      if (GameData_22124c8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22124c8 + 8LL))(
            GameData_22124c8);
      }
      GameData_22124c8 = 0;
    }
    if (GameData_220b6f8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6f8 + 24LL))(
          GameData_220b6f8);
      if (GameData_220b6f8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220b6f8 + 8LL))(
            GameData_220b6f8);
      }
      GameData_220b6f8 = 0;
    }
    if (GameData_21f3c98 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3c98 + 24LL))(
          GameData_21f3c98);
      if (GameData_21f3c98 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3c98 + 8LL))(
            GameData_21f3c98);
      }
      GameData_21f3c98 = 0;
    }
    if (GameData_21f3cf0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cf0 + 24LL))(
          GameData_21f3cf0);
      if (GameData_21f3cf0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cf0 + 8LL))(
            GameData_21f3cf0);
      }
      GameData_21f3cf0 = 0;
    }
    if (GameData_21f3ca8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ca8 + 24LL))(
          GameData_21f3ca8);
      if (GameData_21f3ca8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ca8 + 8LL))(
            GameData_21f3ca8);
      }
      GameData_21f3ca8 = 0;
    }
    if (GameData_22124e8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22124e8 + 24LL))(
          GameData_22124e8);
      if (GameData_22124e8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22124e8 + 8LL))(
            GameData_22124e8);
      }
      GameData_22124e8 = 0;
    }
    if (GameData_21f3ca0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ca0 + 24LL))(
          GameData_21f3ca0);
      if (GameData_21f3ca0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ca0 + 8LL))(
            GameData_21f3ca0);
      }
      GameData_21f3ca0 = 0;
    }
    if (GameData_22124d8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22124d8 + 24LL))(
          GameData_22124d8);
      if (GameData_22124d8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22124d8 + 8LL))(
            GameData_22124d8);
      }
      GameData_22124d8 = 0;
    }
    if (GameData_220d628 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220d628 + 24LL))(
          GameData_220d628);
      if (GameData_220d628 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220d628 + 8LL))(
            GameData_220d628);
      }
      GameData_220d628 = 0;
    }
    if (GameData_21f3d08 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3d08 + 24LL))(
          GameData_21f3d08);
      if (GameData_21f3d08 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3d08 + 8LL))(
            GameData_21f3d08);
      }
      GameData_21f3d08 = 0;
    }
    if (GameData_220fd08 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220fd08 + 24LL))(
          GameData_220fd08);
      if (GameData_220fd08 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220fd08 + 8LL))(
            GameData_220fd08);
      }
      GameData_220fd08 = 0;
    }
    if (GameData_21ec7c0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21ec7c0 + 24LL))(
          GameData_21ec7c0);
      if (GameData_21ec7c0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21ec7c0 + 8LL))(
            GameData_21ec7c0);
      }
      GameData_21ec7c0 = 0;
    }
    if (GameData_22124e0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22124e0 + 24LL))(
          GameData_22124e0);
      if (GameData_22124e0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22124e0 + 8LL))(
            GameData_22124e0);
      }
      GameData_22124e0 = 0;
    }
    if (GameData_220f950 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220f950 + 24LL))(
          GameData_220f950);
      if (GameData_220f950 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220f950 + 8LL))(
            GameData_220f950);
      }
      GameData_220f950 = 0;
    }
    if (GameData_22124f8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22124f8 + 24LL))(
          GameData_22124f8);
      if (GameData_22124f8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22124f8 + 8LL))(
            GameData_22124f8);
      }
      GameData_22124f8 = 0;
    }
    if (GameData_21f3cd8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cd8 + 24LL))(
          GameData_21f3cd8);
      if (GameData_21f3cd8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cd8 + 8LL))(
            GameData_21f3cd8);
      }
      GameData_21f3cd8 = 0;
    }
    if (GameData_220b6d8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6d8 + 24LL))(
          GameData_220b6d8);
      if (GameData_220b6d8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220b6d8 + 8LL))(
            GameData_220b6d8);
      }
      GameData_220b6d8 = 0;
    }
    if (GameData_21f3d00 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3d00 + 24LL))(
          GameData_21f3d00);
      if (GameData_21f3d00 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3d00 + 8LL))(
            GameData_21f3d00);
      }
      GameData_21f3d00 = 0;
    }
    if (GameData_220b6e0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6e0 + 24LL))(
          GameData_220b6e0);
      if (GameData_220b6e0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220b6e0 + 8LL))(
            GameData_220b6e0);
      }
      GameData_220b6e0 = 0;
    }
    if (GameData_2210d70 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2210d70 + 24LL))(
          GameData_2210d70);
      if (GameData_2210d70 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_2210d70 + 8LL))(
            GameData_2210d70);
      }
      GameData_2210d70 = 0;
    }
    if (GameData_220d620 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220d620 + 24LL))(
          GameData_220d620);
      if (GameData_220d620 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220d620 + 8LL))(
            GameData_220d620);
      }
      GameData_220d620 = 0;
    }
    if (GameData_220b6d0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6d0 + 24LL))(
          GameData_220b6d0);
      if (GameData_220b6d0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220b6d0 + 8LL))(
            GameData_220b6d0);
      }
      GameData_220b6d0 = 0;
    }
    if (GameData_21f3ce0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ce0 + 24LL))(
          GameData_21f3ce0);
      if (GameData_21f3ce0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ce0 + 8LL))(
            GameData_21f3ce0);
      }
      GameData_21f3ce0 = 0;
    }
    if (GameData_220b6c0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6c0 + 24LL))(
          GameData_220b6c0);
      if (GameData_220b6c0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220b6c0 + 8LL))(
            GameData_220b6c0);
      }
      GameData_220b6c0 = 0;
    }
    if (GameData_21f3ce8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ce8 + 24LL))(
          GameData_21f3ce8);
      if (GameData_21f3ce8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3ce8 + 8LL))(
            GameData_21f3ce8);
      }
      GameData_21f3ce8 = 0;
    }
    if (GameData_220b6c8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220b6c8 + 24LL))(
          GameData_220b6c8);
      if (GameData_220b6c8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220b6c8 + 8LL))(
            GameData_220b6c8);
      }
      GameData_220b6c8 = 0;
    }
    if (GameData_21f3cc0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cc0 + 24LL))(
          GameData_21f3cc0);
      if (GameData_21f3cc0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cc0 + 8LL))(
            GameData_21f3cc0);
      }
      GameData_21f3cc0 = 0;
    }
    if (GameData_22124f0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22124f0 + 24LL))(
          GameData_22124f0);
      if (GameData_22124f0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22124f0 + 8LL))(
            GameData_22124f0);
      }
      GameData_22124f0 = 0;
    }
    if (GameData_22124d0 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22124d0 + 24LL))(
          GameData_22124d0);
      if (GameData_22124d0 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_22124d0 + 8LL))(
            GameData_22124d0);
      }
      GameData_22124d0 = 0;
    }
    if (GameData_21f3cf8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cf8 + 24LL))(
          GameData_21f3cf8);
      if (GameData_21f3cf8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cf8 + 8LL))(
            GameData_21f3cf8);
      }
      GameData_21f3cf8 = 0;
    }
    if (GameData_220d618 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220d618 + 24LL))(
          GameData_220d618);
      if (GameData_220d618 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220d618 + 8LL))(
            GameData_220d618);
      }
      GameData_220d618 = 0;
    }
    if (GameData_2210d68 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2210d68 + 24LL))(
          GameData_2210d68);
      if (GameData_2210d68 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_2210d68 + 8LL))(
            GameData_2210d68);
      }
      GameData_2210d68 = 0;
    }
    if (GameData_21f3cb8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cb8 + 24LL))(
          GameData_21f3cb8);
      if (GameData_21f3cb8 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3cb8 + 8LL))(
            GameData_21f3cb8);
      }
      GameData_21f3cb8 = 0;
    }
    if (GameData_220d638 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_220d638 + 24LL))(
          GameData_220d638);
      if (GameData_220d638 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_220d638 + 8LL))(
            GameData_220d638);
      }
      GameData_220d638 = 0;
    }
    if (GameData_21f3d10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f3d10 + 24LL))(
          GameData_21f3d10);
      if (GameData_21f3d10 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_21f3d10 + 8LL))(
            GameData_21f3d10);
      }
      GameData_21f3d10 = 0;
    }
    if (GameData_2212500 != 0 && GameData_2212508-- <= 1) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2212500 + 24LL))(
          (__int64)GameData_2212500);
      if (GameData_2212500 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)GameData_2212500 + 8LL))(
            GameData_2212500);
      }
      GameData_2212500 = 0;
    }
    result = GameData_21d96b8;
    if (GameData_21d96b8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21d96b8 + 24LL))(
          GameData_21d96b8);
      result = GameData_21d96b8;
      if (GameData_21d96b8 != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_21d96b8 + 8LL))(
            GameData_21d96b8);
      }
      GameData_21d96b8 = 0;
    }
    v4 = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      *(_DWORD*)(game_hub_ProgressEventView_instance_ + 388) = 0;
      *(_BYTE*)(v4 + 384) = 0;
    }
    v5 = *(_DWORD*)(v2 + 480);
    if (v5 <= 7) {
      v6 = &GameData_21f1c48[6 * v5];
      v7 = (int*)v6[3];
      for (i = (int*)v6[4]; v7 != i; ++v7) {
        v9 = *v7;
        if (*((_BYTE*)&GameData_21f1dc8 + v9) == 1) {
          v10 = ui_Manager_instance_ + 376LL * (unsigned int)v9;
          v11 = *(_DWORD*)(v10 + 1636);
          *(_DWORD*)(v10 + 1632) = 1;
          *(_DWORD*)(v10 + 1636) = v11 - 1;
          *((_BYTE*)&GameData_21f1dc8 + v9) = 0;
        }
      }
      v12 = (int*)*v6;
      v13 = (int*)v6[1];
      if ((int*)*v6 != v13) {
        do {
          v14 = *v12;
          if (GameData_21f1dd8[v14] == 1) {
            result = GameRoutine_1366820((__int64)GameData_1fa9470[v14]);
            GameData_21f1dd8[v14] = 0;
          }
          ++v12;
        } while (v12 != v13);
      }
    }
    v15 = GameData_2263c30;
    if (GameData_2263c30 != 0) {
      v16 = *(_QWORD*)(GameData_2263c30 + 8);
      if (v16 != 0) {
        while (1) {
          if (*(_BYTE*)v16 == 2) {
            if (*(_DWORD*)(v16 + 32) == 9) {
              *(_QWORD*)(GameData_2263c30 + 16) = v16;
              *(_WORD*)(v15 + 136) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v16 == 0) {
            break;
          }
          v16 += 64;
        }
      }
    }
    *(_WORD*)(v2 + 216) = 0;
  }
  return result;
}

__int64 game_hub_anonymous_ProcHubSeq_CreateBindZView_closure0_Invoke()
{
  __int64 v0;
  __int64 v1;
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  int v12;
  char v14[24];

  v0 = GameData_212dbb8[0];
  v1 = *(_QWORD*)GameData_212dbb8[0];
  v2 = (_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL);
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL);
  v4 = GameData_212d310;
  if ((*v2 & 1) == 0) {
    v3 = *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) >> 1;
  }
  if (v3 == 10) {
    v5 = *(__int64**)(v1 + 80);
    v6 = (__int64*)(v1 + 65);
    if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
      v6 = v5;
    }
    v7 = *v6;
    v8 = *((unsigned __int16*)v6 + 4);
    if (v7 == *(_QWORD*)"Hub_000_A1" && v8 == *(unsigned __int16*)"A1") {
      *(_DWORD*)(*(_QWORD*)GameData_212d310 + 48LL) |= 2u;
    }
  }
  v14[0] = 26;
  strcpy(&v14[1], "HighAutoPitch");
  if ((LocatorDispos_db2560((__int64)v2, (unsigned __int8*)v14) & 1) != 0) {
    *(_DWORD*)(*(_QWORD*)v4 + 48LL) |= 4u;
  }
  v10 = *(_QWORD*)v0;
  v14[0] = 30;
  strcpy(&v14[1], "CamRayShielding");
  if ((LocatorDispos_db2560(v10 + 64, (unsigned __int8*)v14) & 1) != 0) {
    *(_DWORD*)(*(_QWORD*)v4 + 48LL) |= 0x10u;
  }
  strcpy(v14, "&CamFrequentlyStairs");
  if ((LocatorDispos_db2560(*(_QWORD*)v0 + 64LL, (unsigned __int8*)v14) & 1) !=
      0) {
    *(_DWORD*)(*(_QWORD*)v4 + 48LL) |= 0x20u;
  }
  if (CharacterSituation_f94550()) {
    *(_DWORD*)(*(_QWORD*)v4 + 48LL) |= 8u;
  }
  GameRoutine_e1e2d0(*(_QWORD**)GameData_212ebf8[0]);
  v11 = *(_QWORD*)(*(_QWORD*)v0 + 216LL);
  v12 = *(_DWORD*)(v11 + 232);
  if (v12 <= 3) {
    v12 = 3;
  }
  *(_DWORD*)(v11 + 232) = v12;
  return GameRoutine_f482e0(v11);
}

__int64 ProcHubSeq_Destructor(__int64 a1)
{
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
  _QWORD* v12;
  __int64 v13;
  __int64 v15;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeq_vtable;
  *(_QWORD*)(a1 + 208) = GameData_1fde1f0;
  v2 = GameRoutine_d88a40(a1);
  GameRoutine_f2aa60(v2);
  if ((*(_BYTE*)(a1 + 456) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 472);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v15 = a1 + 448;
  *(_QWORD*)(a1 + 448) = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v15);
  GameRoutine_d8b300(*(_QWORD*)(a1 + 432));
  v5 = *(_QWORD*)(a1 + 392);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  if (*(_BYTE*)(a1 + 368) == 1) {
    if ((*(_BYTE*)(a1 + 312) & 1) != 0) {
      v6 = *(_QWORD*)(a1 + 328);
      if (v6 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
      }
    }
    if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 296);
      if (v8 != 0) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
      }
    }
    if ((*(_BYTE*)(a1 + 256) & 1) != 0) {
      v10 = *(_QWORD*)(a1 + 272);
      if (v10 != 0) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
      }
    }
  }
  v12 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fde278;
  if (v12 == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_30;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_30:
  game_hub_ProcHubSeqView_instance_ = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcHubSeq_Unknown3(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                         __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD** v27;
  _QWORD** v28;
  _QWORD* v29;
  _QWORD** v30;
  _QWORD** v31;
  _QWORD* v32;
  unsigned __int8 explicit;
  __int64* v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int64** v40;
  __int64* v41;
  int v42;

  v6 = (__int64*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0 && *(_DWORD*)(a1 + 232) <= 0) {
    v9 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
    if (v9 != 0) {
      GameRoutine_f482e0(v9);
    }
    v10 = (__int64*)GameData_212d310;
    if (*(_QWORD*)GameData_212d310 != 0) {
      if (*GameData_212eba8[0] != 0) {
        CharacterManager_cf02a0(*GameData_212eba8[0]);
      }
      if (*GameData_212ee30[0] != 0) {
        v11 = *(_QWORD*)(*GameData_212ee30[0] + 8);
        if (v11 != 0) {
          v12 = *(_QWORD*)(v11 + 8);
          if (v12 != 0 && *(_QWORD*)(v12 + 32) == 0) {
            GameRoutine_fe7900(v12, 0x0.0p+0f);
          }
        }
      }
    }
    v13 = GameData_212eec0[0];
    v14 = *GameData_212eec0[0];
    v15 = *(_QWORD*)(*GameData_212eec0[0] + 40);
    v16 = *(_QWORD*)(*GameData_212eec0[0] + 48);
    while (v15 != v16) {
      v17 = *(_QWORD*)(*(_QWORD*)v15 + 800LL);
      if (v17 != 0) {
        GameRoutine_f2c810(v17);
      }
      v15 += 16;
    }
    v19 = *(_QWORD*)(v14 + 64);
    v18 = *(_QWORD*)(v14 + 72);
    while (v19 != v18) {
      v20 = *(_QWORD*)(*(_QWORD*)v19 + 800LL);
      if (v20 != 0) {
        GameRoutine_f2c810(v20);
      }
      v19 += 16;
    }
    v22 = *v6 != 0 && *(_BYTE*)(a1 + 218) != 0 && *(_DWORD*)(a1 + 232) <= 0;
    if (v22 && (*(_BYTE*)(a1 + 240) & 1) == 0 && *(_BYTE*)(a1 + 139) == 0 &&
        *(int*)(*v6 + 152) <= 0) {
      if (*(_QWORD*)GameData_212dbe8[0] != 0) {
        GameRoutine_10c0bc0(*(_QWORD*)GameData_212dbe8[0]);
      }
      if (*GameData_212ebc8[0] != 0) {
        GameRoutine_e19b00(*GameData_212ebc8[0]);
      }
      v23 = *(_QWORD*)GameData_212dbc0[0];
      if (*(_QWORD*)GameData_212dbc0[0] != 0 && *(_DWORD*)(v23 + 8) == 2) {
        MapSetup_f888c0(v23 + 248);
        GameRoutine_d6ef90(v23);
      }
      if (*(_QWORD*)GameData_212ef90[0] != 0) {
        GameRoutine_d96be0(*(_QWORD*)GameData_212ef90[0]);
      }
      v24 = GameData_212d458[0];
      GameRoutine_cb7320(*(_QWORD**)GameData_212d458[0], a2, a3, a4, a5, a6);
      v25 = *v10;
      if (v25 != 0 && *(_BYTE*)(v25 + 52) == 1) {
        Manager_d2ec20();
        *(_BYTE*)(v25 + 54) = 1;
      }
      game_hub_cb7460(*v24);
      Manager_d52bf0(*v6);
      if (*(_QWORD*)GameData_212efb0[0] != 0) {
        AreaBarrier_fbae90(*(_QWORD*)GameData_212efb0[0]);
      }
      if (*(_QWORD*)GameData_212dc68 != 0) {
        EventManager_cbaf20(*(_QWORD*)GameData_212dc68);
      }
      v26 = (_QWORD*)*v13;
      if (*v13 != 0) {
        v27 = (_QWORD**)v26[5];
        v28 = (_QWORD**)v26[6];
        while (v27 != v28) {
          v29 = *v27;
          v27 += 2;
          GameRoutine_dfa040(v29);
        }
        v30 = (_QWORD**)v26[8];
        v31 = (_QWORD**)v26[9];
        while (v30 != v31) {
          v32 = *v30;
          v30 += 2;
          GameRoutine_dfa040(v32);
        }
        GameRoutine_dff3e0((__int64)v26);
      }
      GameRoutine_cded70(*(_QWORD*)GameData_212dc60[0]);
      game_f8f140(*(float32x4_t**)GameData_212c7e0[0],
                  (float*)(*(_QWORD*)GameData_212dc38[0] + 16LL));
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                      memory_order_acquire);
      v34 = GameData_212c838;
      if ((explicit & 1) == 0) {
        v41 = GameData_212c838;
        v42 = __cxa_guard_acquire(GameData_212c840);
        v34 = v41;
        if (v42 != 0) {
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41) = 0;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v41 + 8) = 0;
          *v41 = 0;
          v41[1] = 0;
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v41) = 0;
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v41) = 0;
          *((_BYTE*)((char*)0x40LL) + (_QWORD)v41) = 0;
          *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v41) = 0;
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v41) =
              (_UNKNOWN*)1065353216;
          GameRoutine_14a0820(v41);
          GameRoutine_2b0();
          __cxa_guard_release(GameData_212c840);
          v34 = v41;
        }
      }
      if ((*((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v34) & 1) == 0) {
        v35 = *(float*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v34);
        v36 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v34);
        *(_DWORD*)((char*)((char*)0x40LL) + (_QWORD)v34) =
            *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v34 + 4);
        *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v34) = 1;
        v37 = *(_QWORD*)(*v34 + 32);
        v38 = (float)(v35 * 0x1.1111120000000p-5f) *
              *(float*)(as_g_base_frame_counter + 156);
        nn_os_WaitLightEvent(v36 + 496);
        *(_QWORD*)(v36 + 512) = v37;
        *(float*)(v36 + 520) = v38;
        nn_os_ClearLightEvent(v36 + 496);
        nn_os_SignalLightEvent(v36 + 484);
      }
      v39 = *(_QWORD*)GameData_212dc30[0];
      if (*(_QWORD*)GameData_212dc30[0] != 0) {
        game_869980();
        ScheduleManager_d9edf0();
        ScheduleManager_d9efa0(v39);
      }
      if (*GameData_212eee8[0] != 0) {
        GameRoutine_e21f40(*GameData_212eee8[0]);
      }
      if (*(_QWORD*)GameData_212ec00 != 0) {
        LocatorDispos_db3460(*(_QWORD*)GameData_212ec00);
      }
      if (*(_QWORD*)GameData_212ebf0[0] != 0) {
        PlayStartPos_fa25b0(*(_QWORD*)GameData_212ebf0[0]);
      }
      if (*(_QWORD*)GameData_212dbf0[0] != 0) {
        GameRoutine_efa580(*(_QWORD*)GameData_212dbf0[0]);
      }
      v40 = *(__int64***)GameData_212dc48[0];
      if (*(_QWORD*)GameData_212dc48[0] != 0) {
        GameRoutine_e1b8e0(*(_QWORD*)GameData_212dc48[0]);
        game_hub_e1ba40(v40);
      }
      *(_BYTE*)(a1 + 219) = 1;
    }
  }
}

void ProcHubSeq_Unknown6()
{
  if (GameData_21f3d10 != 0) {
    GameRoutine_d54600(GameData_21f3d10);
  }
}

void ProcHubSeq_Unknown7()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v5;

  if (GameData_21f3d10 != 0) {
    GameRoutine_d54760(GameData_21f3d10);
    if (*(int*)(GameData_21f3d10 + 152) <= 0) {
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
        else {
          v5 = *(_QWORD**)(v1 + 24);
          *(float*)(v1 + 1120) = fmaxf(*(float*)(v1 + 1120), 0.2);
          GameRoutine_ceca80(v5, 0x100000, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak(v3);
        }
      }
    }
  }
}

void ProcHubSeq_Unknown10()
{
  __int64 v0;

  v0 = *(_QWORD*)GameData_212dbd0[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)GameData_212dc68 + 144LL) = 1;
  }
  *(_BYTE*)(v0 + 8) = 1;
  if (GameData_21f3c90 == 0 && game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 2;
  }
}

__int64 ProcHubSeq_Unknown11()
{
  __int64 result;
  _QWORD v1[2];

  *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL) = 10;
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v1[0] = 0;
    v1[1] = 0;
    result = GameRoutine_efbb60(GameData_21f3d08, v1, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
  return result;
}

__int64 ProcHubSeq_Unknown12(__int64 a1)
{
  __int64 result;
  _QWORD v2[2];

  result = *(_QWORD*)(a1 + 40);
  if (result != 0 && (*(_WORD*)(result + 136) & 1) == 0) {
    result = GameRoutine_657a50(result, 1);
  }
  *(_DWORD*)(*(_QWORD*)GameData_212dbe0[0] + 8LL) = 15;
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 1;
  }
  if ((*(_BYTE*)(GameData_21f3d10 + 11) & 1) == 0) {
    *(_BYTE*)(GameData_21f3d10 + 11) = 1;
    v2[0] = 0;
    v2[1] = 0;
    result = GameRoutine_efbb60(GameData_21f3d08, v2, 0);
    if (game_script_hub_talk_g_select_menu != 0) {
      *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 12;
    }
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 152) = 13;
  }
  return result;
}

__int64 ProcHubSeq_Unknown13(__int64 result)
{
  int v1;

  v1 = *(_DWORD*)(result + 232);
  *(_DWORD*)(result + 232) = v1 + 1;
  if (v1 == 0) {
    return (**(__int64 (***)(__int64))(result + 224))(result + 224);
  }
  return result;
}

__int64 ProcHubSeq_Unknown14(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_DWORD*)(result + 232) - 1;
  *(_DWORD*)(result + 232) = v2;
  if (v2 == 0) {
    v3 = result + 224;
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)(result + 224) +
                                                8LL))(result + 224, a2);
    if (*(_DWORD*)(v3 + 8) == 0) {
      result = *(_QWORD*)(GameData_21f3d10 + 200);
      if (result != 0) {
        result = DungeonController_f5e870();
      }
      v4 = GameData_21c9608;
      if ((*(_BYTE*)(GameData_21c9608 + 328) & 0x20) != 0) {
        result = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0 &&
            *(_BYTE*)(game_GameModeData_instance_ + 57) != 0) {
          result = GameRoutine_716420(
              game_GameModeData_instance_,
              *(unsigned __int8*)(game_GameModeData_instance_ + 57));
          if (game_GameModeData_instance_ != 0) {
            *(_BYTE*)(game_GameModeData_instance_ + 57) = 0;
          }
        }
        *(_QWORD*)(v4 + 328) &= ~0x20uLL;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
