#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void FacilityUnitList_145eea0(PSEUDO_X8, __int64,
                                                         __int64);
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8, __int64, unsigned __int8);
__attribute__((swiftcall)) void
GameRoutine_1450840(PSEUDO_X8, unsigned __int64 result, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_148a410(PSEUDO_X8, float*,
                                                    float32x2_t*, float32x2_t*,
                                                    float32x4_t*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__attribute__((swiftcall)) void
    game_13f9200_alt1(PSEUDO_X8, _QWORD) __asm__("game_13f9200");
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void game_940ce0(PSEUDO_X8, __int64, __int64,
                                            __int64, unsigned __int8);
__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8, __int64 result, __int64);
__attribute__((swiftcall)) void game_95eaa0(PSEUDO_X8, __int64 result, __int64);
__attribute__((swiftcall)) void
game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, __int64 result,
                                      unsigned __int16*, int);
__attribute__((swiftcall)) void game_facility_14078d0(PSEUDO_X8, _QWORD*,
                                                      float*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int16* GameRoutine_1958ed0(__int16* result, __int64);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* game_821090(int);
__int64 FacilityDialogueFile_196e860(_QWORD, _QWORD, _QWORD);
__int64 FacilityDialogueFile_196e860_alt1(
    unsigned int, __int64, __int64) __asm__("FacilityDialogueFile_196e860");
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 FacilityUtil_948800(__int64, __int64**);
__int64 GameReliance_8e17a0(_QWORD);
__int64 GameRoutine_1016910(_QWORD, float);
__int64 GameRoutine_1016b40(_QWORD, float);
__int64 GameRoutine_1391680(_QWORD);
__int64 GameRoutine_140cae0(_QWORD, _QWORD, _QWORD, double);
__int64 GameRoutine_142b870();
__int64 GameRoutine_143d0a0(__int64, __int16*);
__int64 GameRoutine_143d0a0_alt1(_QWORD, _QWORD) __asm__("GameRoutine_143d0a0");
__int64 GameRoutine_144fca0(_QWORD, _QWORD);
__int64 GameRoutine_1450260(_QWORD, _QWORD);
__int64 GameRoutine_14516c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_148b140(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_148e480(_QWORD);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_15940f0(__int64, unsigned int, unsigned int);
__int64 GameRoutine_1705460(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1872af0(_QWORD, _QWORD);
__int64 GameRoutine_1873150(_QWORD*);
__int64 GameRoutine_187c5b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8c7640(_QWORD);
__int64 GameRoutine_924620(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_940be0(__int64, __int64, __int64);
__int64 GameRoutine_94a700(__int16*);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 GameRoutine_b3aee0(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 RelianceCheck_19a7f00(_QWORD, _QWORD, _QWORD);
__int64 RidePool_93cc20(_QWORD, _QWORD);
__int64 SceneCharacter_14019b0(_QWORD, long double);
__int64 SceneManager_138e200(_QWORD, _QWORD);
__int64 UnitUtil_15e0640(__int64, __int64, int, int, char);
__int64 Vector_650e70(_QWORD);
__int64 VolunteerArgs_9475c0(__int64*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_1016400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                     float);
__int64 game_809dc0(__int64, _QWORD*, long double);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(_QWORD, _QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_HashString_alt2(_QWORD) __asm__("game_HashString");
__int64 game_Unit_EachEducateTargetSkill(__int64, __int64);
__int64 game_facility_1450640_alt1(_QWORD) __asm__("game_facility_1450640");
__int64 game_facility_148cc30(_QWORD, _QWORD, _QWORD);
__int64 game_facility_SellController_Clear(void);
__int64 game_facility_SellController_Clear_alt1(_QWORD) __asm__(
    "game_facility_SellController_Clear");
__int64 game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 strtof_alt1(_QWORD, _QWORD) __asm__("strtof");
__int64 strtol(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 wld_a7fab0(_QWORD);
__n128 CharacterModel_1071880(_QWORD, _QWORD);
__n128 game_facility_144fa20_alt1(_QWORD, float,
                                  float) __asm__("game_facility_144fa20");
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_822320(unsigned int);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
double cos(double);
double sin(double);
extern _DWORD* GameData_212edf8;
extern _QWORD game_hub_kPermitFlags[10];
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_2131330;
extern _UNKNOWN GameData_1a85728;
extern _UNKNOWN GameData_1aa8535;
extern _UNKNOWN GameData_1aa9dac;
extern _UNKNOWN GameData_1ab3bd2;
extern _UNKNOWN GameData_1ada574;
extern _UNKNOWN GameData_1adebe5;
extern _UNKNOWN GameData_1ae5940;
extern _UNKNOWN GameData_1aed6ab;
extern _UNKNOWN GameData_1afed0f;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_22445d8;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*GameData_1faf458[])();
extern __int64 (*GameData_1faf878[])();
extern __int64 (*GameData_1faf8f8[])();
extern __int64 (*GameData_1faf978[])();
extern __int64 (*GameData_203ecd8[])();
extern __int64 (*GameData_203fbb0[])();
extern __int64 (*GameData_20416b0[])();
extern __int64 (*GameData_2043e48[])();
extern __int64 (*GameData_20f2048[])();
extern __int64 (*game_facility_ItemShopMenuItem_vtable)();
extern __int64 (*game_facility_SceneCameraCharaViewerController_vtable)();
extern __int64 (*game_facility_SceneCamera_vtable[])();
extern __int64 (*game_facility_SceneCharacterBehaviorBlank_vtable[])();
extern __int64 (*game_facility_SceneInterpolatorFloat_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cd68[26];
extern __int64* GameData_212d2f0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d7f8[4];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dda8;
extern __int64* GameData_212de10[3];
extern __int64* GameData_212e000[10];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* GameData_212e460[2];
extern __int64* GameData_212ed08[13];
extern __int64* GameData_212edf0;
extern __int64* GameData_21310c8[2];
extern __int64* GameData_2131320[2];
extern __int64* GameData_2131328;
extern __int64* GameData_2131388[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_map_history_g_transporter_ptr[8];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_20a7710;
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_212d310;
extern __int64 GameData_212d690;
extern __int64 GameData_212dce8;
extern __int64 GameData_212e438;
extern __int64 GameData_2131c80[42];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 GameData_21f3ff8;
extern __int64 GameData_22356f0;
extern __int64 GameData_22356f8;
extern __int64 GameData_2235708;
extern __int64 GameData_22417d0;
extern __int64 GameData_22417e0;
extern __int64 GameData_2241800;
extern __int64 GameData_22445c0;
extern __int64 GameData_22445c8;
extern __int64 GameData_22445d0;
extern __int64 GameData_2246cb0;
extern __int64 GameData_2249208;
extern __int64 GameData_2249218;
extern __int64 GameData_22492b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_RelianceCheck_unknown_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_UnitListSet_instance_;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_LayoutAccessor_empty_;
extern int GameData_21d92e0;
extern unsigned int GameData_1a83300[4];
float game_facility_1410900(__int64, __int64);
float strtof(_QWORD, _QWORD);
void FacilityUnitList_145e2c0(__int64**, __int64, char);
void GameRoutine_1425fe0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, __int64, int, ...);
void GameRoutine_658d60(__int64*);
void GameRoutine_b3aee0_alt1(float32x4_t*) __asm__("GameRoutine_b3aee0");
void ProcClassExaminerScene_146b330();
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) GameRoutine_cdcc10(_QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void wld_a7fda0(__int64, _DWORD*);
__int64 game_facility_9292a0(__int64 result);
_BYTE* game_facility_92a250(__int64 a1);
__int64 game_facility_949fe0(__int64 a1);
__int64 game_facility_94a1d0();
__int64 game_facility_94abe0(__int64 a1);
__int64 game_facility_94b560(__int64 a1, __int64 a2);
__int64 game_facility_94cff0(__int64 a1);
__int64 game_facility_9c0c20(_DWORD* a1);
void game_facility_1407780(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           float a9);
__attribute__((swiftcall)) void game_facility_140a6e0(PSEUDO_X8 x8_,
                                                      unsigned __int8** a1);
__attribute__((swiftcall)) void game_facility_140d000(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void game_facility_140d5c0(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void game_facility_140d860(PSEUDO_X8 x8_,
                                                      __int64 a1);
float game_facility_14107c0(__int64 a1, __int64 a2);
void game_facility_1415980(_QWORD* a1);
__int64 game_facility_1418520(__int64 a1, float* a2, float a3);
__int64 game_facility_14187c0(__int64 result);
__n128 game_facility_141ff70();
__int64 game_facility_1425d40(__int64 a1);
__int64 game_facility_1428100();
_QWORD* game_facility_142ab20(__int64 a1);
void game_facility_142b1a0(unsigned __int8 a1, __int64 a2);
__int64 game_facility_144de10(__int64 a1);
void game_facility_144e960(__int64 a1);
__int64* game_facility_144ee80(_QWORD* a1, __int64 a2, __int64* a3);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2);
float game_facility_144f500(__int64 a1, __int64 a2, __int64 a3);
float game_facility_144f680(float32x4_t* a1, __int64 a2);
float game_facility_144fa20(__int64 a1, float result, float a3);
__attribute__((swiftcall)) void game_facility_1450640(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void game_facility_1450df0(PSEUDO_X8 x8_,
                                                      __int128* a1, float a3,
                                                      float a4, float a5,
                                                      float a6);
__attribute__((swiftcall)) void game_facility_1451020(PSEUDO_X8 x8_,
                                                      unsigned __int64 a1,
                                                      __int64 a2, __int64 a3);
__attribute__((swiftcall)) void game_facility_1451220(PSEUDO_X8 x8_);
__int64 game_facility_1467bc0(char a1);
__int64 game_facility_14682e0();
_QWORD* game_facility_1473920(__int64 a1);
__int64 game_facility_148b460(__int64 a1);
__int64* game_facility_148c760(__int64* result, __int64 a2, __int64 a3);
__int64 game_facility_148d310(__int64 result, _QWORD* a2, __int64 a3);
__attribute__((swiftcall)) void game_facility_1498970(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2, __int64 a3);
__int64 game_facility_1499450(__int64* a1, __int64 a2, long double a3);
__attribute__((swiftcall)) void game_facility_14995e0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2, __int64 a3);
__int64 game_facility_15e8430(__int64 a1);
__attribute__((swiftcall)) void game_facility_1663900(PSEUDO_X8 x8_,
                                                      __int64 a1);
__int64 game_facility_17043b0(__int64 a1);
__int64 game_facility_17045b0(_QWORD* a1);
__int64 game_facility_1704ae0(__int64 result, __int64 a2);
__int64 game_facility_1704d80(_QWORD* a1);
__int64 game_facility_1866680(__int64 result, __int64 a2, __int64 a3,
                              _QWORD* a4, char a5);
__int64 game_facility_1873410(_QWORD* a1);

__int64 game_facility_9292a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  unsigned __int8 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  bool v19;
  __int64 v20;
  __int64 v21;
  __int64 (***v22)();
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned int v46;
  char* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  int v51;
  unsigned int v52;
  unsigned int v53;
  int v54;
  int v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  char* v61;
  __int64 v62;
  unsigned int v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  void* v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;

  v1 = result;
  v71 = 0;
  v72 = 0;
  v70 = 0;
  v2 = game_RelianceCheck_unknown_;
  v3 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v2 + 8) = v3;
  v4 = *(_QWORD*)(result + 8);
  v5 = *(_QWORD*)(result + 16);
  if (v5 != v4) {
    LODWORD(v6) = 3;
    v7 = 2;
    v8 = 0;
    v9 = 0;
    v65 = result + 49;
    do {
      v10 = v8;
      v8 = (unsigned int)(v9 + 1);
      v11 = (v5 - v4) >> 3;
      if (v11 > v8) {
        v12 = *(_QWORD*)(v4 + 8 * v10);
        v63 = v7;
        v64 = (unsigned int)(v9 + 1);
        v66 = v10;
        while (1) {
          v17 = *(_QWORD*)(v4 + 8 * v8);
          if (v12 == v17) {
            goto LABEL_14;
          }
          v67 = v12;
          v68 = nullptr;
          v69 = nullptr;
          if (v12 != 0) {
            v18 = *(_QWORD**)(v12 + 392);
            v68 = v18;
            if (v18 != nullptr) {
              v18 = *(_QWORD**)(*(_QWORD*)(v18[3] + 1784LL) + 272LL);
            }
            v69 = v18;
            v19 = v18 == nullptr;
            if (v17 == 0) {
              goto LABEL_28;
            }
          }
          else {
            v19 = true;
            if (v17 == 0) {
              goto LABEL_28;
            }
          }
          v20 = *(_QWORD*)(v17 + 392);
          if (v20 != 0) {
            if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v20 + 24) + 1784LL) + 272LL) ==
                0) {
              v19 = true;
            }
            if (!v19) {
              v21 = *(_QWORD*)(game_GameModeData_instance_ + 128);
              result = GameReliance_8e17a0(v21);
              if ((result & 0x80000000) == 0) {
                v22 = (__int64 (***)())(*(_QWORD*)(v21 + 8) +
                                        56LL * (unsigned int)result);
                goto LABEL_29;
              }
            }
          }
        LABEL_28:
          v22 = &game_GameReliance_Impl_Data_vtable_ptr;
        LABEL_29:
          v6 = (int)v6 - 1LL;
          if (*((_BYTE*)v22 + 10) != 0) {
            v23 = *(_QWORD*)(v12 + 392);
            v24 = *(_QWORD*)(v17 + 392);
            v25 = *(unsigned __int8*)(v65 + v10);
            v26 = *(unsigned __int8*)(v65 + v8);
            if ((v25 & 0xFFFFFFFB) != 0) {
              v27 = FacilityDialogueFile_196e860(0, *(_QWORD*)(v12 + 392), v24);
              if ((v26 & 0xFFFFFFFB) != 0 && v27 == 0) {
                v28 = 1;
                goto LABEL_35;
              }
            }
            else {
              v28 = 0;
            LABEL_35:
              v27 = FacilityDialogueFile_196e860(v28, v23, v24);
            }
            *(&v70 + v6) = v27;
            v29 = GameRoutine_924620(*(_QWORD*)(v1 + 32), v25, v26);
            v30 = ((__int64 (*)(__int64 (***)(), _QWORD, __int64))(*v22)[2])(
                v22, v29, 1);
            v32 = *(unsigned __int8*)(v1 + 48);
            v33 = v30;
            if (v30 < 1) {
              v14 = 0;
            }
            else {
              v68 = &GameData_1afed0f;
              v67 = game_HashString(&GameData_1afed0f, v31);
              v13 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v34 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), &v67);
                if (v34 != 0) {
                  v13 = *(_DWORD*)(v34 + 32);
                }
                else {
                  v13 = 0;
                }
              }
              if (v33 < v13) {
                v14 = 1;
              }
              else {
                v14 = 2;
              }
            }
            if (v14 <= v32) {
              v14 = v32;
            }
            *(_BYTE*)(v1 + 48) = v14;
            v15 = GameRoutine_8c7640(v22[3]);
            v16 = GameRoutine_8c7640(v22[4]);
            result = RelianceCheck_19a7f00(v15, v16, (unsigned int)v33);
            v10 = v66;
          }
        LABEL_14:
          v4 = *(_QWORD*)(v1 + 8);
          v5 = *(_QWORD*)(v1 + 16);
          v8 = v7++;
          v11 = (v5 - v4) >> 3;
          if (v11 <= v8) {
            v8 = v64;
            v7 = v63;
            break;
          }
        }
      }
      ++v7;
      v9 = v8;
    } while (v11 > v8);
    v35 = v70;
    if (v70 != 0) {
      if (*(_BYTE*)(v70 + 32) == 0) {
        *(_DWORD*)(v1 + 64) = 0;
        goto LABEL_78;
      }
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
      *(_DWORD*)result = 0;
      v36 = (char*)(result + 4);
      v37 = result;
      v38 = v71;
      if (v71 == 0) {
        goto LABEL_45;
      }
    LABEL_47:
      if (*(_BYTE*)(v38 + 32) == 0) {
        v46 = 1;
        if (v37 != 0) {
          goto LABEL_73;
        }
        goto LABEL_76;
      }
      v41 = (unsigned __int64)&v36[-v37];
      v42 = (__int64)&v36[-v37] >> 2;
      v43 = v42 + 1;
      if ((unsigned __int64)(v42 + 1) >> 62 == 0) {
        if (v41 >> 1 > v43) {
          v43 = v41 >> 1;
        }
        if (v41 >= 0x7FFFFFFFFFFFFFFCLL) {
          v44 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v44 = v43;
        }
        if (v44 == 0) {
          v45 = 0;
          goto LABEL_61;
        }
        if (v44 >> 62 != 0) {
          goto LABEL_96;
        }
        v45 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v44, 16, 0);
      LABEL_61:
        v39 = (char*)(v45 + 4 * v44);
        v47 = &v36[-v37];
        v40 = v45 + v41 - 4 * v42;
        *(_DWORD*)(v45 + v41) = 1;
        v36 = (char*)(v45 + v41 + 4);
        result = memcpy(v40, v37, v47);
        if (v37 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v48 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v37);
        }
      LABEL_65:
        if (v72 == 0) {
        LABEL_69:
          v37 = v40;
          goto LABEL_70;
        }
        if (*(_BYTE*)(v72 + 32) == 0) {
          v46 = 2;
          v37 = v40;
          if (v40 != 0) {
            goto LABEL_73;
          }
          goto LABEL_76;
        }
        if (v36 < v39) {
          *(_DWORD*)v36 = 2;
          v36 += 4;
          goto LABEL_69;
        }
        v57 = &v36[-v40];
        v58 = (__int64)&v36[-v40] >> 2;
        v59 = v58 + 1;
        if ((unsigned __int64)(v58 + 1) >> 62 == 0) {
          if ((__int64)&v39[-v40] >> 1 > v59) {
            v59 = (__int64)&v39[-v40] >> 1;
          }
          if ((unsigned __int64)&v39[-v40] >= 0x7FFFFFFFFFFFFFFCLL) {
            v59 = 0x3FFFFFFFFFFFFFFFLL;
          }
          if (v59 == 0) {
            v60 = 0;
            goto LABEL_91;
          }
          if (v59 >> 62 != 0) {
          LABEL_96:
            GameRoutine_60a210(result);
          }
          v60 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v59, 16, 0);
        LABEL_91:
          v61 = &v36[-v40];
          v37 = (__int64)&v57[v60 + -4 * v58];
          *(_DWORD*)&v57[v60] = 2;
          v36 = &v57[v60 + 4];
          result = memcpy(v37, v40, v61);
          if (v40 != 0) {
            v62 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v62 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v40);
          }
        LABEL_70:
          if ((char*)v37 != v36) {
            v49 = (unsigned __int64)&v36[-v37] >> 2;
            nn_os_LockMutex(&game_g_random_mutex);
            v50 = game_map_MapRandom_instance__ptr[0];
            v51 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v52 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v53 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v50 + 1) = v51;
            v54 = (v53 >> 8) ^ (v52 >> 19) ^ v53 ^ v52;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50) = v52;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v50 + 4) = v54;
            v55 = v54 & 0x7FFFFFFF;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v46 = *(_DWORD*)(v37 + 4LL * (unsigned int)(v55 % (int)v49));
            goto LABEL_73;
          }
          v46 = -1;
          if (v37 != 0) {
          LABEL_73:
            v56 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v56 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v37);
          }
        LABEL_76:
          *(_DWORD*)(v1 + 64) = v46;
          if ((v46 & 0x80000000) == 0) {
            v35 = *(&v70 + v46);
          LABEL_78:
            *(_QWORD*)(v1 + 56) = v35;
          }
          return result;
        }
      }
      GameRoutine_6e5a20();
    }
  }
  v36 = nullptr;
  v37 = 0;
  v38 = v71;
  if (v71 != 0) {
    goto LABEL_47;
  }
LABEL_45:
  v39 = v36;
  v40 = v37;
  goto LABEL_65;
}

_BYTE* game_facility_92a250(__int64 a1)
{

#pragma clang fp contract(off)
  _BYTE* result;
  long double v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  long double* v7;
  long double v8;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = GameRoutine_1958ed0((__int16*)(a1 + 152), a1),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(a1 + 164) == 1 && (*(_DWORD*)(a1 + 160) & 0x80000000) != 0) {
    v4 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) == *(float*)(v5 + 168) &&
          (v6 = v5 + 160,
           *((_QWORD*)&v3 + 1) =
               LANES128_OF(((__n128 (*)(unsigned __int64)) *
                            (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160))
                   .n128_u64[1],
           *((float*)&v3 + 3) == 0x1.0000000000000p+0f)) {
        if (*(float*)(v6 + 12) == *(float*)(v6 + 8)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v6 + 16LL))(v6),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v3 = *(long double*)(v6 + 48);
        }
        v8 = v3;
        *(_QWORD*)&v3 = 0;
        v7 = &v8;
      }
      else {
        *(_QWORD*)&v3 = 0;
        v7 = (long double*)GameData_212c960;
      }
      result = (_BYTE*)game_809dc0(v4, v7, v3),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    return ProcInst_657a50(a1, 1);
  }
  return result;
}

__int64 game_facility_949fe0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int16* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int16* v13;
  struct {
    __int64 (**v15)();
    int* v16;
    char gap16_[16];
    unsigned __int64* v17;
  } v15_;
  int v18;

  v18 = 0;
  v2 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v15_.v17 = (unsigned __int64*)&v15_.v15;
  v15_.v15 = GameData_1faf458;
  v15_.v16 = &v18;
  FacilityUnitList_145e440(v2, (__int64)&v15_.v15, 2);
  if (v15_.v17 == (unsigned __int64*)&v15_.v15) {
    v3 = 32;
  }
  else {
    if (v15_.v17 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v15_.v17 + v3))((__int64)v15_.v17);
LABEL_6:
  if (*(_BYTE*)(a1 + 72) == 3) {
    v4 = 5;
  }
  else {
    v4 = 3;
  }
  if (v18 >= v4) {
    v5 = 0;
  }
  else {
    v5 = 64;
  }
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_22492b8);
    if (v7 != 0) {
      v6 = *(_DWORD*)(v7 + 32);
    }
    else {
      v6 = 0;
    }
  }
  v8 = game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v9 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v9 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v6 > 10000 * *v9 + 100 * v9[1] + v9[2]) {
    v5 |= 0x20000u;
  }
  v10 = game_821090(12);
  if (game_GameModeData_instance_ != 0 &&
      (v11 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v10)) != 0) {
    if (*(int*)(v11 + 32) <= 0) {
      v5 |= 0x400000u;
    }
  }
  else {
    v5 |= 0x400000u;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v15_.v16 = (int*)&GameData_1adebe5,
            v15_.v15 = (__int64 (**)(void))game_HashString_alt1(
                (__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v12 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v15_.v15)) == 0 ||
           *(_DWORD*)(v12 + 32) == 0)) {
    v5 |= 8u;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v13 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v13 = (__int16*)v8;
  }
  if ((GameRoutine_143d0a0((__int64)&GameData_1ab3bd2, v13) & 1) != 0) {
    return v5;
  }
  else {
    return v5 | 2;
  }
}

__int64 game_facility_94a1d0()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;
  __int16* v12;
  struct {
    __int64 (**v14)();
    int* v15;
    char gap16_[16];
    unsigned __int64* v16;
  } v14_;
  int v17;

  v17 = 0;
  v0 = *(_QWORD*)(game_UnitListSet_instance_ + 32);
  v14_.v16 = (unsigned __int64*)&v14_.v14;
  v14_.v14 = GameData_1faf458;
  v14_.v15 = &v17;
  FacilityUnitList_145e440(v0, (__int64)&v14_.v14, 2);
  if (v14_.v16 == (unsigned __int64*)&v14_.v14) {
    v1 = 32;
  }
  else {
    if (v14_.v16 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v14_.v16 + v1))((__int64)v14_.v16);
LABEL_6:
  v14_.v15 = (int*)&GameData_1ada574;
  if (v17 >= 2) {
    v2 = 0;
  }
  else {
    v2 = 64;
  }
  v14_.v14 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ada574);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v14_.v14)) != 0) {
    v4 = *(_DWORD*)(v3 + 32);
  }
  else {
    v4 = 0;
  }
  v5 = GameRoutine_9db9e0(0x14u, v4);
  if (v5 >= 1) {
    v6 = game_GameModeData_instance_ != 0
             ? *(_DWORD*)(game_GameModeData_instance_ + 72)
             : 0;
    if (v6 < v5) {
      v2 |= 0x10u;
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      (v7 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&GameData_22492b8)) != 0) {
    v8 = *(_DWORD*)(v7 + 32);
  }
  else {
    v8 = 0;
  }
  v9 = game_gmap_GmapClock_kDefaultTime_ptr;
  v10 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  if (game_gmap_GmapClock_instance_ == 0) {
    v10 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v8 > 10000 * *v10 + 100 * v10[1] + v10[2]) {
    v2 |= 0x20000u;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v14_.v15 = (int*)&GameData_1adebe5,
            v14_.v14 = (__int64 (**)(void))game_HashString_alt1(
                (__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v11 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v14_.v14)) == 0 ||
           *(_DWORD*)(v11 + 32) == 0)) {
    v2 |= 8u;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v12 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v12 = (__int16*)v9;
  }
  if ((GameRoutine_143d0a0((__int64)&GameData_1aa8535, v12) & 1) != 0) {
    return v2;
  }
  else {
    return v2 | 2;
  }
}

__int64 game_facility_94abe0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  __int16* v4;
  unsigned int v5;
  unsigned int v6;
  __int16 v7;
  double v8;
  double v9;
  double v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int16* v14;
  unsigned int v15;
  __int64 v16;

  v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  v3 = *(unsigned __int16*)(a1 + 52);
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = GameRoutine_94a700(v4);
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_WORD*)(a1 + 16);
    v8 = 0x1.0000000000000p+0;
    v9 = (double)v5 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
    if (v9 <= 0x1.0000000000000p+0) {
      v8 = (double)v5 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
    }
    if (v9 >= 0x1.47ae147ae147bp-7) {
      v10 = v8;
    }
    else {
      v10 = 0x1.47ae147ae147bp-7;
    }
    v11 = (int)(v10 * (double)v3);
    if (v11 <= 1) {
      v11 = 1;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 72) >= v11) {
      v12 = 0;
    }
    else {
      v12 = 16;
    }
    v13 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_2249208);
    if (v13 != 0) {
      v6 = *(_DWORD*)(v13 + 32);
    }
    else {
      v6 = 0;
    }
  }
  else {
    v7 = *(_WORD*)(a1 + 16);
    v12 = 16;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v14 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v14 = (__int16*)v2;
  }
  if (v6 > 10000 * *v14 + 100 * v14[1] + v14[2]) {
    v15 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v16 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&GameData_2249218);
      if (v16 != 0) {
        v15 = *(_DWORD*)(v16 + 32);
      }
      else {
        v15 = 0;
      }
    }
    if (((v15 >> v7) & 1) != 0) {
      v12 |= 0x20000u;
    }
  }
  return v12;
}

__int64 game_facility_94b560(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64** v5;
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
  void* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  __int64* v26;
  void* v27;
  _QWORD* v28;
  __int64** v29;
  unsigned int v30;

  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) == 1 &&
      (game_gmap_GmapClock_instance_ != 0 &&
           *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                   *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                   *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
               0 ||
       (v27 = &GameData_1adebe5,
        v26 = (__int64*)game_HashString(&GameData_1adebe5, a2),
        game_GameModeData_instance_ != 0) &&
           (v2 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), &v26)) != 0 &&
           *(_DWORD*)(v2 + 32) != 0)) {
    v3 = 0;
  }
  else {
    v3 = 8;
  }
  v4 = (__int64*)GameData_212cf88[0];
  v5 = &v26;
  v6 = *(_QWORD*)game_TransporterConst_List_instance__ptr[0];
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL);
  v22[0] = GameData_1faf878;
  v22[1] = &v30;
  v23 = v22;
  v24[0] = GameData_1faf978;
  v24[1] = v22;
  v25 = v24;
  v8 = *(_QWORD*)(v6 + 8);
  if (*(int*)(v7 + 144) < 1) {
    v3 |= 0x80u;
  }
  v30 = v3 | 0x100;
  v28 = v24;
  v29 = &v26;
  v26 = GameData_212d7f8[0] + 2;
  v27 = ((__int128*)0x10LL) + 4;
  v9 = *(unsigned int*)(v8 + 80);
  if ((int)v9 < 1) {
    goto LABEL_20;
  }
  v10 = 0;
  v11 = 12 * v9;
  do {
    a2 = *(_QWORD*)(v8 + 8) + v10;
    if (*(_WORD*)(a2 + 2) != 0) {
      if (v29 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      ((void (*)(__int64**))(*v29)[6])(v29);
    }
    v10 += 12;
  } while (v11 != v10);
  v5 = v29;
  if (v29 == &v26) {
  LABEL_20:
    v12 = 4;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_22;
    }
    v12 = 5;
  }
  ((void (*)(__int64**, __int64))(*v5)[v12])(v5, a2);
LABEL_22:
  if (v25 == v24) {
    v13 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_27;
    }
    v13 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v25 + v13))(v25, a2);
LABEL_27:
  if (v23 == v22) {
    v14 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_32;
    }
    v14 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v23 + v14))(v23, a2);
LABEL_32:
  if ((v30 & 0x80) != 0) {
    goto LABEL_43;
  }
  v30 |= 0x10000u;
  v24[0] = GameData_1faf8f8;
  v24[1] = &v30;
  v15 = *v4;
  v25 = v24;
  v16 = *(void**)(v15 + 8);
  v28 = v24;
  v29 = &v26;
  v26 = GameData_212dda8 + 2;
  v27 = v16;
  RidePool_93cc20(v16, &v26);
  if (v29 == &v26) {
    v18 = 4;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_38;
    }
    v18 = 5;
  }
  ((void (*)(__int64**, __int64))(*v29)[v18])(v29, v17);
LABEL_38:
  if (v25 == v24) {
    v19 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_43;
    }
    v19 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v25 + v19))(v25, v17);
LABEL_43:
  if (game_gmap_GmapClock_instance_ != 0) {
    v20 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v20 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d0a0_alt1(&GameData_1a85728, v20) & 1) != 0) {
    return v30;
  }
  else {
    return v30 | 2;
  }
}

__int64 game_facility_94cff0(__int64 a1)
{
  bool v2;
  __int64 v3;
  __int64 v4;
  int v5;
  char* v6;
  __int64 v8;
  char* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  int v15;
  int v16;
  unsigned int v17;
  __int16* v18;
  struct {
    __int64 v20;
    char* v21;
    char gap16_[16];
    unsigned __int64* v22;
  } v20_;

  v2 = GameRoutine_822320(2u);
  v3 = game_UnitListSet_instance_;
  if (v2) {
    v4 = *(_QWORD*)(game_UnitListSet_instance_ + 40);
    if (v4 != 0) {
      FacilityUnitList_145eea0((void*)(&v20_.v20), v4,
                               (__int64)&GameData_1aed6ab);
      v5 = 4096;
      if (v20_.v20 != 0) {
        if ((*(_WORD*)(v20_.v20 + 48) & 0x21) != 0) {
          v5 = 4096;
        }
        else {
          v5 = 0;
        }
      }
      v6 = v20_.v21;
      if (v20_.v21 != nullptr &&
          atomic_fetch_add((atomic_ullong* volatile)(v20_.v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(char*))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
      v3 = game_UnitListSet_instance_;
    }
    else {
      v5 = 4096;
    }
  }
  else {
    v5 = 4198400;
  }
  FacilityUnitList_145eea0((void*)(&v20_.v20), *(_QWORD*)(v3 + 40),
                           (__int64)&GameData_1aed6ab);
  if (v20_.v20 != 0 && (*(_WORD*)(v20_.v20 + 48) & 0x21) == 0) {
    v8 = *(_QWORD*)v20_.v20;
    v9 = v20_.v21;
    if (v20_.v21 == nullptr) {
      goto LABEL_20;
    }
  }
  else {
    v8 = 0;
    v9 = v20_.v21;
    if (v20_.v21 == nullptr) {
      goto LABEL_20;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(char*))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
LABEL_20:
  if (v8 != 0) {
    v20_.v22 = nullptr;
    v10 = game_Unit_EachEducateTargetSkill(v8, (__int64)&v20_.v20);
    if (v20_.v22 == (unsigned __int64*)&v20_.v20) {
      v11 = 32;
    }
    else {
      if (v20_.v22 == nullptr) {
        goto LABEL_26;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v20_.v22 + v11))((__int64)v20_.v22);
  LABEL_26:
    if (v10 < 1) {
      v5 |= 0x4000u;
    }
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) & 1) == 0 ||
      (game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
          ((v20_.v21 = (char*)&GameData_1adebe5,
            v20_.v20 = game_HashString_alt1((__int64)&GameData_1adebe5),
            game_GameModeData_instance_ == 0) ||
           (v12 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)&v20_.v20)) == 0 ||
           *(_DWORD*)(v12 + 32) == 0)) {
    v5 |= 8u;
  }
  v13 = game_821090(31);
  if (game_GameModeData_instance_ != 0 &&
      (v14 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v13)) != 0) {
    v15 = v5 | 0x400000;
    if (*(int*)(v14 + 32) <= 0) {
      v16 = v5 | 0x400000;
    }
    else {
      v16 = v5;
    }
  }
  else {
    v15 = v5 | 0x400000;
    v16 = v5 | 0x400000;
  }
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v17 = v16;
  }
  else {
    v17 = v15;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v18 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v18 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d0a0((__int64)&GameData_1ae5940, v18) & 1) != 0) {
    return v17;
  }
  else {
    return v17 | 2;
  }
}

__int64 game_facility_9c0c20(_DWORD* a1)
{
  __int64 v2;
  int v3;
  __int64 result;
  unsigned __int16* v5;
  int v6;
  __int64 v7;
  __int64* v8;
  int v9;
  struct {
    _BYTE v10[4];
    int v11;
  } v10_;

  v2 = *(
      _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
               8LL *
                   *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                 [0] +
                                                             64) +
                                                  8LL * *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                _DWORD*))(
                                                            *(_QWORD*)a1 +
                                                            560LL))(a1)) +
                                       84LL));
  if (v2 != 0) {
    v3 = *(unsigned __int16*)(v2 + 32);
  }
  else {
    v3 = 0;
  }
  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 560LL))(a1);
  if ((int)a1[21] >= 1) {
    v5 = (unsigned __int16*)result;
    v6 = 0;
    v7 = game_GameModeData_instance_;
    v8 = game_map_history_g_transporter_ptr[0];
    do {
      if (v7 != 0) {
        if (*(_DWORD*)(v7 + 80) >= v3) {
          goto LABEL_11;
        }
      }
      else if (v3 <= 0) {
      LABEL_11:
        result = X8CALL_X0(__int64, game_UnitUtil_UniqueMap_Commit_89abc0(
                                        (void*)((__int64)v10_.v10),
                                        *(_QWORD*)(*v8 + 16), v5, 1));
        v7 = game_GameModeData_instance_;
        if ((v10_.v11 & 0x80000000) == 0 && game_GameModeData_instance_ != 0) {
          v9 = (*(_DWORD*)(game_GameModeData_instance_ + 80) - v3) &
               ~((*(_DWORD*)(game_GameModeData_instance_ + 80) - v3) >> 31);
          if (v9 >= 99999) {
            v9 = 99999;
          }
          *(_DWORD*)(game_GameModeData_instance_ + 80) = v9;
        }
      }
      ++v6;
    } while (v6 < a1[21]);
  }
  return result;
}

void game_facility_1407780(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                           float a9)
{

#pragma clang fp contract(off)
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  char* v20;
  float v21;

  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 16) = a3;
  *(_BYTE*)(a1 + 24) = 0;
  v21 = a9;
  *(_QWORD*)a1 = game_facility_SceneCharacterBehaviorBlank_vtable;
  if ((*(_BYTE*)(a3 + 24) & 1) != 0) {
    v10 = *(_QWORD*)(a3 + 40);
  }
  else {
    v10 = a3 + 25;
  }
  v20 = game_util_Format((__int64)&GameData_1aa9dac, v10, a3, a4, a5, a6, a7,
                         a8, (char)v20);
  game_facility_14078d0((void*)((__int64*)(a1 + 32)), &v20, &v21);
  v11 = *(_QWORD*)(a1 + 32);
  if ((*(_BYTE*)(v11 + 136) & 1) == 0) {
    v12 = *(_QWORD**)(v11 + 96);
    *(_QWORD*)(v11 + 96) = 0;
    *(_BYTE*)(v11 + 136) = 1;
    if (v12 == (_QWORD*)(v11 + 64)) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_10;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
  LABEL_10:
    v14 = *(_QWORD*)(v11 + 112);
    v15 = *(_QWORD*)(v11 + 120);
    if (v14 == v15) {
    LABEL_11:
      *(_QWORD*)(v11 + 120) = v14;
      return;
    }
    while (1) {
      v17 = *(_QWORD**)(v15 - 16);
      *(_QWORD*)(v15 - 16) = 0;
      if ((_QWORD*)(v15 - 48) == v17) {
        v18 = 32;
      }
      else {
        if (v17 == nullptr) {
          goto LABEL_15;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
      v19 = *(_QWORD**)(v15 - 16);
      if ((_QWORD*)(v15 - 48) == v19) {
        v16 = 32;
      }
      else {
        if (v19 == nullptr) {
          goto LABEL_15;
        }
        v16 = 40;
      }
      (*(void (**)(__int64))(*v19 + v16))((__int64)v19);
    LABEL_15:
      v15 -= 64;
      if (v15 == v14) {
        goto LABEL_11;
      }
    }
  }
}

__attribute__((swiftcall)) void game_facility_140a6e0(PSEUDO_X8 x8_,
                                                      unsigned __int8** a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  unsigned __int64 v4;
  bool v5;
  __int64 v6;
  char* v7;
  char* v9;
  char* v10;
  char* v11;
  bool v12;
  bool v13;
  __int64 v15;
  __int64 v16;
  unsigned __int8 explicit;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  int v24;
  unsigned __int8* v25;
  int v26;
  int v27;
  int v28;
  char v29;
  __int64 v30;
  char v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  float v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  float v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int16 v55;
  __int16 v56;
  __int64 v57;
  char v58;
  __int64 v59;
  __int64 v60;
  _QWORD v61[2];
  unsigned __int8* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _BYTE* v66;

  v2 = *a1;
  v4 = **a1;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = (char*)v2 + 1;
  }
  else {
    v7 = *((char**)*a1 + 2);
  }
  if (!v5) {
    v6 = *((_QWORD*)*a1 + 1);
  }
  if (v6 >= 30) {
    v9 = v7;
    v10 = &v7[v6];
    while (1) {
      v11 = (char*)memchr(v9, 227, v6 - 29);
      if (v11 == nullptr) {
        goto LABEL_25;
      }
      v12 = *(_QWORD*)v11 == 0x83E3A383E3AD82E3LL &&
            *((_QWORD*)v11 + 1) == 0xE3BC83E3A283E3A9LL;
      v13 = v12 && *((_QWORD*)v11 + 2) == 0xB383E3A783E3B782LL;
      if (v13 && *(_QWORD*)(v11 + 22) == 0x9F94E78D86E5B383LL) {
        break;
      }
      v9 = v11 + 1;
      v6 = v10 - v9;
      if (v10 - v9 < 30) {
        goto LABEL_25;
      }
    }
    if (v11 == v10 || v11 - v7 == -1) {
      goto LABEL_25;
    }
    if ((v2[3] & 1) != 0) {
      fw_text_String_CopyTerminated(&v63, v2[5], v2[4]);
      v2 = *a1;
    }
    else {
      v15 = v2[4];
      v16 = v2[5];
      v63 = v2[3];
      v64 = v15;
      v65 = v16;
    }
    if ((v2[6] & 1) != 0) {
      fw_text_String_CopyTerminated(v61, v2[8], v2[7]);
    }
    else {
      v21 = v2[7];
      v22 = (unsigned __int8*)v2[8];
      v61[0] = v2[6];
      v61[1] = v21;
      v62 = v22;
    }
    v23 = v62;
    if ((v61[0] & 1) == 0) {
      v23 = (unsigned __int8*)v61 + 1;
    }
    v26 = *v23;
    v25 = v23 + 1;
    v24 = v26;
    if (v26 != 0) {
      v27 = 0;
      do {
        v27 = v24 - v27 + 32 * v27;
        v28 = *v25++;
        v24 = v28;
      } while (v28 != 0);
    }
    else {
      v27 = 0;
    }
    v29 = GameRoutine_1391680(*a1 + 72);
    v30 = (__int64)*a1;
    v31 = v29;
    v32 = (*a1)[96];
    v33 = *((_QWORD*)*a1 + 13);
    if ((v32 & 1) == 0) {
      v33 = v32 >> 1;
    }
    if (v33 != 0) {
      v34 = *(_QWORD*)(v30 + 112);
      v35 = v30 + 97;
      v66 = nullptr;
      if ((v32 & 1) != 0) {
        v36 = v34;
      }
      else {
        v36 = v35;
      }
      v37 = strtof(v36, &v66);
      if (*v66 != 0) {
        if (*v66 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v66) != 0) {
            v37 = 0x1.0000000000000p+0f;
          }
        }
        else {
          v37 = 0x1.0000000000000p+0f;
        }
      }
      v30 = (__int64)*a1;
    }
    else {
      v37 = 0x1.0000000000000p+0f;
    }
    v38 = *(unsigned __int8*)(v30 + 120);
    v39 = *(_QWORD*)(v30 + 128);
    v40 = -0x1.0000000000000p+0f;
    if ((v38 & 1) == 0) {
      v39 = v38 >> 1;
    }
    if (v39 != 0) {
      v41 = *(_QWORD*)(v30 + 136);
      v42 = v30 + 121;
      v66 = nullptr;
      if ((v38 & 1) != 0) {
        v43 = v41;
      }
      else {
        v43 = v42;
      }
      v44 = strtof(v43, &v66);
      if (*v66 != 0) {
        if (*v66 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v66) != 0) {
            v44 = -0x1.0000000000000p+0f;
          }
        }
        else {
          v44 = -0x1.0000000000000p+0f;
        }
      }
      v30 = (__int64)*a1;
    }
    else {
      v44 = -0x1.0000000000000p+0f;
    }
    v45 = *(unsigned __int8*)(v30 + 144);
    v46 = *(_QWORD*)(v30 + 152);
    if ((v45 & 1) == 0) {
      v46 = v45 >> 1;
    }
    if (v46 != 0) {
      v47 = *(_QWORD*)(v30 + 160);
      v48 = v30 + 145;
      v66 = nullptr;
      if ((v45 & 1) != 0) {
        v49 = v47;
      }
      else {
        v49 = v48;
      }
      v40 = strtof(v49, &v66);
      if (*v66 != 0) {
        if (*v66 == 102) {
          if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v66) != 0) {
            v40 = -0x1.0000000000000p+0f;
          }
        }
        else {
          v40 = -0x1.0000000000000p+0f;
        }
      }
      v30 = (__int64)*a1;
    }
    v50 = *(unsigned __int8*)(v30 + 168);
    v51 = *(_QWORD*)(v30 + 176);
    if ((v50 & 1) == 0) {
      v51 = v50 >> 1;
    }
    if (v51 != 0) {
      v52 = *(_QWORD*)(v30 + 184);
      v53 = v30 + 169;
      v66 = nullptr;
      if ((v50 & 1) != 0) {
        v54 = v52;
      }
      else {
        v54 = v53;
      }
      v55 = strtol(v54, &v66, 0);
      if (*v66 != 0) {
        v56 = 0;
      }
      else {
        v56 = v55;
      }
      if ((v63 & 1) == 0) {
        goto LABEL_90;
      }
    }
    else {
      v56 = 0;
      if ((v63 & 1) == 0) {
      LABEL_90:
        v57 = v64;
        *(_QWORD*)a2 = v63;
        *(_QWORD*)(a2 + 8) = v57;
        *(_QWORD*)(a2 + 16) = v65;
        goto LABEL_93;
      }
    }
    fw_text_String_CopyTerminated(a2, v65, v64);
  LABEL_93:
    v58 = v61[0];
    *(_DWORD*)(a2 + 24) = v27;
    *(_BYTE*)(a2 + 28) = v31;
    *(float*)(a2 + 32) = v37;
    *(float*)(a2 + 36) = v44;
    *(float*)(a2 + 40) = v40;
    *(_WORD*)(a2 + 44) = v56;
    if ((v58 & 1) != 0 && v62 != nullptr) {
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
    }
    if ((v63 & 1) != 0 && v65 != 0) {
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
    }
    return;
  }
LABEL_25:
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2131330,
                                  memory_order_acquire);
  v18 = GameData_2131328;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_2131330) != 0) {
    *(_WORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18 + 4) = 0;
    *v18 = 0xBF800000BF800000LL;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18) = -1082130432;
    __cxa_guard_release(GameData_2131330);
  }
  v20 = *v18;
  v19 = v18[1];
  *(_QWORD*)a2 = 0;
  *(_DWORD*)(a2 + 24) = 0;
  *(_BYTE*)(a2 + 28) = 0;
  *(_DWORD*)(a2 + 40) = v19;
  *(_QWORD*)(a2 + 32) = v20;
  *(_WORD*)(a2 + 44) = WORD2(v19);
}

__attribute__((swiftcall)) void game_facility_140d000(PSEUDO_X8 x8_, __int64 a1)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  float v9;
  float v10;
  float i;
  unsigned __int64 v12;
  unsigned __int32 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  int8x16_t v16;
  float32x4_t v17;

  v3 = GameData_212dce8;
  v4 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 == 0) {
    goto LABEL_10;
  }
  v5 = *(unsigned __int8*)(v4 + 8);
  v6 = *(_QWORD*)(v4 + 16);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(a1 + 8);
    LANES128(v16).n128_u64[0] = *(_QWORD*)a1;
    LANES128(v16).n128_u64[1] = v7;
    game_13f9200((void*)(&v17), &v16);
    v9 = *(float*)(a1 + 16);
    v10 = *(float*)(*(_QWORD*)v3 + 128LL);
    *a2 = v17;
    for (i = v9 + v10; i < -0x1.6800000000000p+7f;
         i = i + 0x1.6800000000000p+8f)
      ;
    for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
      ;
    LANES128(a2[1]).n128_f32[0] = i;
    LANES128(a2[1]).n128_u16[4] = 0;
  }
  else {
  LABEL_10:
    v12 = *(_QWORD*)(a1 + 8);
    v13 = *(_DWORD*)(a1 + 16);
    LANES128(*(a2)).n128_u64[0] = *(_QWORD*)a1;
    LANES128(*(a2)).n128_u64[1] = v12;
    LOBYTE(v12) = *(_BYTE*)(a1 + 24);
    LANES128(a2[1]).n128_u32[0] = v13;
    if ((v12 & 1) != 0) {
      fw_text_String_CopyTerminated(&LANES128(a2[1]).n128_i8[8],
                                    *(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 32));
    }
    else {
      v14 = *(_QWORD*)(a1 + 32);
      v15 = *(_QWORD*)(a1 + 40);
      LANES128(a2[1]).n128_u64[1] = *(_QWORD*)(a1 + 24);
      LANES128(a2[2]).n128_u64[0] = v14;
      LANES128(a2[2]).n128_u64[1] = v15;
    }
  }
}

__attribute__((swiftcall)) void game_facility_140d5c0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  double v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int128 v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  _QWORD v28[2];
  char* v29;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
  }
  else {
    v4 = a1 + 1;
  }
  result = game_HashString_alt2(v4);
  if (result == 0) {
    goto LABEL_37;
  }
  v6 = *(_QWORD*)(*GameData_21310c8[0] + 96);
  if (v6 == 0 || *(_QWORD*)(*GameData_21310c8[0] + 112) == 0) {
    goto LABEL_37;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(*GameData_21310c8[0] + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_37;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_37;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_37;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_37;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_37;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_37;
    }
  }
  if (v11[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v11[3];
  if (v14 == 0) {
  LABEL_37:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(&GameData_21a6130);
      if ((_DWORD)result != 0) {
        v26 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v26;
        result = __cxa_guard_release(&GameData_21a6130);
      }
    }
    v22 = GameData_21a6120;
    *(_DWORD*)(a2 + 16) = 0;
    *(_WORD*)(a2 + 24) = 0;
    *(_OWORD*)a2 = v22;
    {
      result;
      return;
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 16);
  }
  else {
    v15 = a1 + 1;
  }
  v16 = game_util_Format_alt1("%s_LclS", v15);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v17);
  }
  v20 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v17 | 7) + 1;
    }
    v21 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0);
    v28[1] = v20;
    v29 = v21;
    v28[0] = v23 | 1;
    goto LABEL_44;
  }
  LOBYTE(v28[0]) = 2 * v17;
  v21 = (char*)v28 + 1;
  if (v17 != 0) {
  LABEL_44:
    memmove(v21, v16, v20);
  }
  v21[v20] = 0;
  *(_QWORD*)&v24 = *(_QWORD*)(v14 + 32);
  LODWORD(v19) = *(_DWORD*)(v14 + 40);
  LODWORD(v18) = *(_DWORD*)(v14 + 44);
  *((_QWORD*)&v24 + 1) = v19;
  v27 = v24;
  result = GameRoutine_140cae0(a2, &v27, v28, v18);
  if ((v28[0] & 1) != 0 && v29 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_facility_140d860(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  double v18;
  __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int128 v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  _QWORD v28[2];
  char* v29;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
  }
  else {
    v4 = a1 + 1;
  }
  result = game_HashString_alt2(v4);
  if (result == 0) {
    goto LABEL_37;
  }
  v6 = *(_QWORD*)(*GameData_212de10[0] + 96);
  if (v6 == 0 || *(_QWORD*)(*GameData_212de10[0] + 112) == 0) {
    goto LABEL_37;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(*GameData_212de10[0] + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_37;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_37;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_37;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_37;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_37;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_37;
    }
  }
  if (v11[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v11[3];
  if (v14 == 0) {
  LABEL_37:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      result = __cxa_guard_acquire(&GameData_21a6130);
      if ((_DWORD)result != 0) {
        v26 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v26;
        result = __cxa_guard_release(&GameData_21a6130);
      }
    }
    v22 = GameData_21a6120;
    *(_DWORD*)(a2 + 16) = 0;
    *(_WORD*)(a2 + 24) = 0;
    *(_OWORD*)a2 = v22;
    {
      result;
      return;
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 16);
  }
  else {
    v15 = a1 + 1;
  }
  v16 = game_util_Format_alt1("%s_Map", v15);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v17);
  }
  v20 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v17 | 7) + 1;
    }
    v21 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0);
    v28[1] = v20;
    v29 = v21;
    v28[0] = v23 | 1;
    goto LABEL_44;
  }
  LOBYTE(v28[0]) = 2 * v17;
  v21 = (char*)v28 + 1;
  if (v17 != 0) {
  LABEL_44:
    memmove(v21, v16, v20);
  }
  v21[v20] = 0;
  *(_QWORD*)&v24 = *(_QWORD*)(v14 + 80);
  LODWORD(v19) = *(_DWORD*)(v14 + 88);
  LODWORD(v18) = *(_DWORD*)(v14 + 92);
  *((_QWORD*)&v24 + 1) = v19;
  v27 = v24;
  result = GameRoutine_140cae0(a2, &v27, v28, v18);
  if ((v28[0] & 1) != 0 && v29 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
      return;
    }
  }
  {
    result;
    return;
  }
}

float game_facility_14107c0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v4 = game_HashString_alt1(v3);
  if (v4 != 0) {
    v5 = *(_QWORD*)(GameData_2241800 + 96);
    if (v5 != 0 && *(_QWORD*)(GameData_2241800 + 112) != 0) {
      v7 = v5 - 1;
      if ((v5 & (v5 - 1)) != 0) {
        v8 = v4;
        if (v4 >= v5) {
          v8 = v4 % v5;
        }
      }
      else {
        v8 = v7 & v4;
      }
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_2241800 + 88) + 8 * v8);
      if (v9 != nullptr) {
        v10 = (_QWORD*)*v9;
        if (v10 != nullptr) {
          if ((v5 & v7) == 0) {
            while (1) {
              v13 = v10[1];
              if (v13 == v4) {
                if (v10[2] == v4) {
                  goto LABEL_30;
                }
              }
              else if ((v13 & v7) != v8) {
                goto LABEL_28;
              }
              v10 = (_QWORD*)*v10;
              v12 = 0;
              if (v10 == nullptr) {
                return game_facility_1410900(a1, v12);
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == v4) {
              if (v10[2] == v4) {
              LABEL_30:
                v12 = v10[3];
                return game_facility_1410900(a1, v12);
              }
            }
            else {
              if (v11 >= v5) {
                v11 %= v5;
              }
              if (v11 != v8) {
                break;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }
LABEL_28:
  v12 = 0;
  return game_facility_1410900(a1, v12);
}

void game_facility_1415980(_QWORD* a1)
{
  unsigned __int64 v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;

  if (a1[5] != 0) {
    v1 = a1[4];
    v3 = fw_memory_g_heap_manager_ptr;
    while (1) {
      v4 = *(_QWORD*)(a1[1] + 8 * (v1 / 0x33)) + 80 * (v1 % 0x33);
      if ((*(_BYTE*)(v4 + 56) & 1) != 0 && *(_QWORD*)(v4 + 72) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5);
      }
      v6 = *(_QWORD**)(v4 + 32);
      if (v6 == (_QWORD*)v4) {
        break;
      }
      if (v6 != nullptr) {
        v7 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
      }
      v8 = a1[5] - 1LL;
      v1 = a1[4] + 1LL;
      a1[4] = v1;
      a1[5] = v8;
      if (v1 >= 0x66) {
        v9 = (_QWORD*)a1[1];
        if (*v9 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v10);
          v9 = (_QWORD*)a1[1];
          v1 = a1[4];
          v8 = a1[5];
        }
        v1 -= 51LL;
        a1[1] = v9 + 1;
        a1[4] = v1;
      }
      if (v8 == 0) {
        return;
      }
    }
    v7 = 32;
    goto LABEL_15;
  }
}

__int64 game_facility_1418520(__int64 a1, float* a2, float a3)
{
  __int128 v3;
  char v4;
  __int128 v6;
  float i;
  __int64 result;
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
  unsigned int v19;
  __int64 v20;
  __int64* v21;

  v3 = *(_OWORD*)a2;
  v4 = *(_BYTE*)(a1 + 40);
  *(_QWORD*)(a1 + 16) = *(_QWORD*)a2;
  *(_BYTE*)(a1 + 40) = v4 | 1;
  v6 = *(_OWORD*)(a1 + 16);
  *((_QWORD*)&v6 + 1) = DWORD2(v3);
  *(_OWORD*)(a1 + 16) = v6;
  for (i = a3 + a2[4]; i < -0x1.6800000000000p+7f;
       i = i + 0x1.6800000000000p+8f)
    ;
  for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
    ;
  for (; i < -0x1.6800000000000p+7f; i = i + 0x1.6800000000000p+8f)
    ;
  for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
    ;
  *(float*)(a1 + 32) = i;
  *(_BYTE*)(a1 + 40) = v4 | 3;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(_QWORD*)(v9 + 144);
  v11 = *(_QWORD*)(v9 + 152);
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    v12 = *(_QWORD*)(v10 + 8);
    if (v12 != 0) {
      v13 = *(_QWORD*)(v12 + 8);
      v20 = 0;
      v21 = &v20;
      result = GameRoutine_1469c40(&v21, &v21, v13);
      v14 = v20;
    }
    else {
      v14 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      result = std___1___shared_weak_count___release_weak(v11);
    }
  }
  else {
    v15 = *(_QWORD*)(v10 + 8);
    if (v15 == 0) {
      return result;
    }
    v16 = *(_QWORD*)(v15 + 8);
    v20 = 0;
    v21 = &v20;
    result = GameRoutine_1469c40(&v21, &v21, v16);
    v14 = v20;
  }
  if (v14 != 0 && *(_DWORD*)((char*)((_UNKNOWN*)0x180LL) + v14) == 0) {
    if (GameData_21d92e0 != 2) {
      goto LABEL_29;
    }
    v17 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v14);
    v18 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v14 + 8);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      v19 = *(_DWORD*)(v17 + 11784);
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        result = std___1___shared_weak_count___release_weak(v18);
      }
    }
    else {
      v19 = *(_DWORD*)(v17 + 11784);
    }
    if (v19 > 0x1A) {
      goto LABEL_29;
    }
    if (((1 << v19) & 0x410C) != 0) {
      *(_DWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + v14) + 212LL) = 0;
      return result;
    }
    if (((1 << v19) & 0x5000080) != 0) {
      *(_DWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + v14) + 212LL) = 0;
    }
    else {
    LABEL_29:
      *(_DWORD*)((char*)((_UNKNOWN*)0x180LL) + v14) = 1;
    }
  }
  return result;
}

__int64 game_facility_14187c0(__int64 result)
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
  unsigned int v11;
  __int64 v12;
  __int64* v13;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 144);
  v3 = *(_QWORD*)(v1 + 152);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v4 = *(_QWORD*)(v2 + 8);
    if (v4 != 0) {
      v5 = *(_QWORD*)(v4 + 8);
      v12 = 0;
      v13 = &v12;
      result = GameRoutine_1469c40(&v13, &v13, v5);
      v6 = v12;
    }
    else {
      v6 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      result = std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v7 = *(_QWORD*)(v2 + 8);
    if (v7 == 0) {
      return result;
    }
    v8 = *(_QWORD*)(v7 + 8);
    v12 = 0;
    v13 = &v12;
    result = GameRoutine_1469c40(&v13, &v13, v8);
    v6 = v12;
  }
  if (v6 != 0 && *(_DWORD*)((char*)((_UNKNOWN*)0x180LL) + v6) == 0) {
    if (GameData_21d92e0 != 2) {
      goto LABEL_21;
    }
    v9 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v6);
    v10 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v6 + 8);
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      v11 = *(_DWORD*)(v9 + 11784);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak(v10);
      }
    }
    else {
      v11 = *(_DWORD*)(v9 + 11784);
    }
    if (v11 > 0x1A) {
      goto LABEL_21;
    }
    if (((1 << v11) & 0x410C) != 0) {
      *(_DWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + v6) + 212LL) = 0;
      return result;
    }
    if (((1 << v11) & 0x5000080) != 0) {
      *(_DWORD*)(*(_QWORD*)((char*)((_UNKNOWN*)0x68LL) + v6) + 212LL) = 0;
    }
    else {
    LABEL_21:
      *(_DWORD*)((char*)((_UNKNOWN*)0x180LL) + v6) = 1;
    }
  }
  return result;
}

__n128 game_facility_141ff70()
{
  __n128 result;
  __int64 v1;
  _BYTE v2[16];
  char v3;
  unsigned __int64 v4;
  _BYTE v5[15];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5[11] = 0;
  v3 = 38;
  *(_DWORD*)&v5[7] = -1967921473;
  *(_QWORD*)v5 = 0xBFAEE55FAB83E3B0LL;
  v4 = 0x82E3B383E3B882E3LL;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v2), (__int64)&v3, 1u),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v3 & 1) != 0 && *(_QWORD*)&v5[7] != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

__int64 game_facility_1425d40(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  char v9;
  unsigned __int8 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int8 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  struct {
    __int128 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    _QWORD v42[2];
  } v33_;

  *(_QWORD*)(a1 + 80) = 0;
  v1 = a1 + 80;
  *(_QWORD*)(a1 + 272) = -1;
  *(_QWORD*)(a1 + 176) = 0;
  v3 = a1 + 176;
  *(_BYTE*)(a1 + 56) = 0;
  v4 = GameData_2246cb0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_DWORD*)(a1 + 167) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 263) = 0;
  if (v4 != 0) {
    *(_QWORD*)(v4 + 160) = *(_QWORD*)(v4 + 152);
  }
  v5 = *(__int64**)(a1 + 16);
  v6 = *v5;
  v7 = v5[1];
  result = GameRoutine_940be0(*(_QWORD*)(a1 + 40), *v5, v7);
  *(_BYTE*)(a1 + 56) = result;
  if ((_BYTE)result != 0) {
    v9 = VolunteerArgs_9475c0((__int64*)(a1 + 16));
    v10 = *(_BYTE*)(a1 + 56);
    if ((v9 & 1) != 0 && (unsigned __int8)(v10 - 1) <= 2u) {
      *(_BYTE*)(a1 + 56) = ++v10;
    }
    game_940ce0((void*)((__int64)&v33_.v33), *(_QWORD*)(a1 + 40), v6, v7, v10);
    v11 = v33_.v41;
    v12 = v33_.v42[0];
    v13 = *(_QWORD*)(a1 + 40);
    v14 = *(_BYTE*)(a1 + 56);
    *(_QWORD*)(v1 + 64) = v33_.v40;
    *(_QWORD*)(v1 + 72) = v11;
    v15 = *(_DWORD*)((char*)v33_.v42 + 7);
    *(_QWORD*)(v1 + 80) = v12;
    *(_DWORD*)(v1 + 87) = v15;
    v16 = v33_.v37;
    *(_QWORD*)(v1 + 32) = v33_.v36;
    *(_QWORD*)(v1 + 40) = v16;
    v17 = v33_.v39;
    *(_QWORD*)(v1 + 48) = v33_.v38;
    *(_QWORD*)(v1 + 56) = v17;
    *(_OWORD*)v1 = v33_.v33;
    v18 = v33_.v35;
    *(_QWORD*)(v1 + 16) = v33_.v34;
    *(_QWORD*)(v1 + 24) = v18;
    game_940ce0((void*)((__int64)&v33_.v33), v13, v7, v6, v14);
    v19 = v33_.v41;
    v20 = v33_.v42[0];
    *(_QWORD*)(v3 + 64) = v33_.v40;
    *(_QWORD*)(v3 + 72) = v19;
    v21 = *(_DWORD*)((char*)v33_.v42 + 7);
    *(_QWORD*)(v3 + 80) = v20;
    *(_DWORD*)(v3 + 87) = v21;
    v22 = v33_.v37;
    *(_QWORD*)(v3 + 32) = v33_.v36;
    *(_QWORD*)(v3 + 40) = v22;
    v23 = v33_.v39;
    *(_QWORD*)(v3 + 48) = v33_.v38;
    *(_QWORD*)(v3 + 56) = v23;
    *(_OWORD*)v3 = v33_.v33;
    v24 = v33_.v35;
    *(_QWORD*)(v3 + 16) = v33_.v34;
    *(_QWORD*)(v3 + 24) = v24;
    GameRoutine_1425fe0(a1);
    v25 = *(_QWORD*)(v6 + 392);
    v26 = *(_QWORD*)(v7 + 392);
    v27 = FacilityDialogueFile_196e860_alt1(0, v25, v26);
    if (v27 == 0) {
      v27 = FacilityDialogueFile_196e860_alt1(4u, v25, v26);
    }
    *(_QWORD*)(a1 + 64) = v27;
    v28 = *(_QWORD*)(a1 + 40);
    v29 = *(_DWORD*)(a1 + 72);
    v30 = 0;
    v31 = v28 + 90;
    v32 = *(_QWORD**)(a1 + 16);
    while (1) {
      if (*(_BYTE*)(v31 + v30) != 0) {
        v29 = v29 - *(unsigned __int8*)(v32[1] + v30 + 540) +
              *(unsigned __int8*)(*v32 + v30 + 540);
        *(_DWORD*)(a1 + 72) = v29;
      }
      if (v30 == 12) {
        break;
      }
      if (*(_BYTE*)(v31 + v30 + 1) != 0) {
        v29 = v29 - *(unsigned __int8*)(v32[1] + v30 + 541) +
              *(unsigned __int8*)(*v32 + v30 + 541);
        *(_DWORD*)(a1 + 72) = v29;
      }
      if (*(_BYTE*)(v31 + v30 + 2) != 0) {
        v29 = v29 - *(unsigned __int8*)(v32[1] + v30 + 542) +
              *(unsigned __int8*)(*v32 + v30 + 542);
        *(_DWORD*)(a1 + 72) = v29;
      }
      if (*(_BYTE*)(v31 + v30 + 3) != 0) {
        v29 = v29 - *(unsigned __int8*)(v32[1] + v30 + 543) +
              *(unsigned __int8*)(*v32 + v30 + 543);
        *(_DWORD*)(a1 + 72) = v29;
      }
      v30 += 4;
    }
    return FacilityUtil_948800(v28, (__int64**)(a1 + 16));
  }
  return result;
}

__int64 game_facility_1428100()
{
  __int64** v0;
  __int64 result;
  __int64 v2;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;

  v0 = *(__int64***)(game_UnitListSet_instance_ + 24);
  v3_.v4 = v3_.v3;
  v3_.v3[0] = GameData_203fbb0;
  v3_.v3[1] = v0;
  FacilityUnitList_145e2c0(v0, (__int64)v3_.v3, 0);
  result = (__int64)v3_.v4;
  if (v3_.v4 == v3_.v3) {
    v2 = 32;
  }
  else {
    if (v3_.v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v3_.v4 + v2))((__int64)v3_.v4);
}

_QWORD* game_facility_142ab20(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)(a1 + 152) = 0;
  v2 = (_QWORD*)(a1 + 160);
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 192) = 0;
  if (result == v2) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 3) {
          *(_QWORD*)(a1 + 16) = v5;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  return result;
}

void game_facility_142b1a0(unsigned __int8 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64** v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64** v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  __int64** v39;
  __int64* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  __int64* v48;

  if (a2 == 0) {
    return;
  }
  v2 = *(_QWORD*)(a2 + 144);
  v3 = *(_QWORD*)(a2 + 152);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v6 = *(_QWORD*)(v2 + 8);
    if (v6 != 0 && (v7 = *(_QWORD*)(v6 + 8), v47 = 0, v48 = &v47,
                    GameRoutine_1469c40(&v48, &v48, v7), v47 != 0)) {
      v9 = *(_QWORD*)(v47 + 392);
      v8 = *(_QWORD*)(v47 + 400);
      if (v8 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v9 = 0;
      v8 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v10 = *(_QWORD*)(v2 + 8);
    if (v10 == 0) {
      return;
    }
    v11 = *(_QWORD*)(v10 + 8);
    v47 = 0;
    v48 = &v47;
    GameRoutine_1469c40(&v48, &v48, v11);
    if (v47 == 0) {
      return;
    }
    v9 = *(_QWORD*)(v47 + 392);
    v8 = *(_QWORD*)(v47 + 400);
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  if (v9 == 0) {
    goto LABEL_111;
  }
  v12 = *(_QWORD*)(a2 + 144);
  v13 = *(_QWORD*)(a2 + 152);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v14 = *(_QWORD*)(v12 + 120);
  if (v14 != 0 && *(unsigned __int8*)(v14 + 72) <= 7u) {
    v15 = *(_BYTE*)(v14 + 73) != 1;
    if (v13 == 0) {
    LABEL_24:
      if (v15) {
        goto LABEL_25;
      }
      goto LABEL_29;
    }
  }
  else {
    v15 = false;
    if (v13 == 0) {
      goto LABEL_24;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_24;
  }
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak(v13);
  if (v15) {
  LABEL_25:
    if (v8 != 0) {
      goto LABEL_112;
    }
    return;
  }
LABEL_29:
  v16 = *(_QWORD*)(v9 + 11608);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22445d8,
                            memory_order_acquire) &
       1) == 0) {
    v44 = v16;
    v45 = __cxa_guard_acquire(&GameData_22445d8);
    v16 = v44;
    if (v45 != 0) {
      v46 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      GameData_22445c0 = (__int64)v46;
      *v46 = 0x3AF772CA3AF772C9LL;
      GameData_22445c8 = (__int64)(v46 + 1);
      GameData_22445d0 = (__int64)(v46 + 1);
      GameRoutine_2b0(GameRoutine_142b870, &GameData_22445c0,
                      &GameData_1f50948);
      __cxa_guard_release(&GameData_22445d8);
      v16 = v44;
    }
  }
  if (a1 >= 4u) {
    if (GameData_22445c8 == GameData_22445c0) {
      v17 = 989295305;
    }
    else {
      v18 = (unsigned __int64)(GameData_22445c8 - GameData_22445c0) >> 2;
      v19 = v16;
      nn_os_LockMutex(&game_g_random_mutex);
      v20 = game_map_MapRandom_instance__ptr[0];
      v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v23 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v20 + 1) = v21;
      v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20) = v22;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20 + 4) = v24;
      v25 = v24 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v16 = v19;
      v17 = *(unsigned int*)(GameData_22445c0 +
                             4LL * (unsigned int)(v25 % (int)v18));
    }
  }
  else {
    v17 = GameData_1a83300[a1];
  }
  if (GameData_22356f8 == 0 || GameData_2235708 == 0) {
    if (*(_QWORD*)(v16 + 5112) != 0) {
      goto LABEL_59;
    }
  LABEL_105:
    v41 = 639;
    goto LABEL_106;
  }
  v26 = GameData_22356f8 - 1;
  if ((GameData_22356f8 & (GameData_22356f8 - 1)) != 0) {
    v27 = 989295305;
    if ((unsigned __int64)GameData_22356f8 <= 0x3AF772C9) {
      v27 = 0x3AF772C9 % (unsigned int)GameData_22356f8;
    }
  }
  else {
    v27 = ((_DWORD)GameData_22356f8 - 1) & 0x3AF772C9;
  }
  v28 = *(__int64***)(GameData_22356f0 + 8 * v27);
  if (v28 == nullptr || (v29 = *v28, *v28 == nullptr)) {
  LABEL_58:
    if (*(_QWORD*)(v16 + 5112) != 0) {
      goto LABEL_59;
    }
    goto LABEL_62;
  }
  if ((GameData_22356f8 & v26) == 0) {
    while (1) {
      v31 = v29[1];
      if (v31 == 989295305) {
        if (*((_DWORD*)v29 + 4) == 989295305) {
          goto LABEL_61;
        }
      }
      else if ((v31 & v26) != v27) {
        goto LABEL_58;
      }
      v29 = (__int64*)*v29;
      if (v29 == nullptr) {
        goto LABEL_58;
      }
    }
  }
  while (1) {
    v30 = v29[1];
    if (v30 == 989295305) {
      break;
    }
    if (v30 >= GameData_22356f8) {
      v30 %= (unsigned __int64)GameData_22356f8;
    }
    if (v30 != v27) {
      goto LABEL_58;
    }
  LABEL_48:
    v29 = (__int64*)*v29;
    if (v29 == nullptr) {
      goto LABEL_58;
    }
  }
  if (*((_DWORD*)v29 + 4) != 989295305) {
    goto LABEL_48;
  }
LABEL_61:
  if (*(_QWORD*)(v16 + 8LL * *((int*)v29 + 5)) != 0) {
    goto LABEL_59;
  }
LABEL_62:
  if ((GameData_22356f8 & v26) != 0) {
    v32 = 603384300;
    if ((unsigned __int64)GameData_22356f8 <= 0x23F6E9EC) {
      v32 = 0x23F6E9EC % (unsigned int)GameData_22356f8;
    }
  }
  else {
    v32 = ((_DWORD)GameData_22356f8 - 1) & 0x23F6E9EC;
  }
  v33 = *(__int64***)(GameData_22356f0 + 8 * v32);
  if (v33 == nullptr || (v34 = *v33, *v33 == nullptr)) {
  LABEL_81:
    if (*(_QWORD*)(v16 + 5112) == 0) {
      goto LABEL_90;
    }
    goto LABEL_82;
  }
  if ((GameData_22356f8 & v26) == 0) {
    while (1) {
      v36 = v34[1];
      if (v36 == 603384300) {
        if (*((_DWORD*)v34 + 4) == 603384300) {
          goto LABEL_89;
        }
      }
      else if ((v36 & v26) != v32) {
        goto LABEL_81;
      }
      v34 = (__int64*)*v34;
      if (v34 == nullptr) {
        goto LABEL_81;
      }
    }
  }
  while (1) {
    v35 = v34[1];
    if (v35 == 603384300) {
      break;
    }
    if (v35 >= GameData_22356f8) {
      v35 %= (unsigned __int64)GameData_22356f8;
    }
    if (v35 != v32) {
      goto LABEL_81;
    }
  LABEL_71:
    v34 = (__int64*)*v34;
    if (v34 == nullptr) {
      goto LABEL_81;
    }
  }
  if (*((_DWORD*)v34 + 4) != 603384300) {
    goto LABEL_71;
  }
LABEL_89:
  if (*(_QWORD*)(v16 + 8LL * *((int*)v34 + 5)) != 0) {
  LABEL_82:
    if ((_DWORD)v17 == 989295306) {
      v17 = 603384301;
    }
    else if ((_DWORD)v17 == 989295323) {
      v17 = 603384318;
    }
    else {
      v37 = (_DWORD)v17 == 989295307;
      v17 = 603384300;
      if (v37) {
        v17 = 603384302;
      }
    }
  LABEL_59:
    CharacterModel_1071880(v16, v17);
    if (v8 != 0) {
      goto LABEL_112;
    }
    return;
  }
LABEL_90:
  if ((GameData_22356f8 & v26) != 0) {
    v38 = 603384486;
    if ((unsigned __int64)GameData_22356f8 <= 0x23F6EAA6) {
      v38 = 0x23F6EAA6 % (unsigned int)GameData_22356f8;
    }
  }
  else {
    v38 = ((_DWORD)GameData_22356f8 + 0x3FFFFFFF) & 0x23F6EAA6;
  }
  v39 = *(__int64***)(GameData_22356f0 + 8 * v38);
  if (v39 == nullptr) {
    goto LABEL_105;
  }
  v40 = *v39;
  if (*v39 == nullptr) {
    goto LABEL_105;
  }
  v41 = 639;
  if ((GameData_22356f8 & v26) == 0) {
    while (1) {
      v43 = v40[1];
      if (v43 == 603384486) {
        if (*((_DWORD*)v40 + 4) == 603384486) {
          goto LABEL_123;
        }
      }
      else if ((v43 & v26) != v38) {
        goto LABEL_106;
      }
      v40 = (__int64*)*v40;
      if (v40 == nullptr) {
        goto LABEL_106;
      }
    }
  }
  while (1) {
    v42 = v40[1];
    if (v42 == 603384486) {
      break;
    }
    if (v42 >= GameData_22356f8) {
      v42 %= (unsigned __int64)GameData_22356f8;
    }
    if (v42 != v38) {
      goto LABEL_106;
    }
  LABEL_99:
    v40 = (__int64*)*v40;
    if (v40 == nullptr) {
      goto LABEL_106;
    }
  }
  if (*((_DWORD*)v40 + 4) != 603384486) {
    goto LABEL_99;
  }
LABEL_123:
  v41 = *((int*)v40 + 5);
LABEL_106:
  if (*(_QWORD*)(v16 + 8 * v41) != 0) {
    switch ((_DWORD)v17) {
    case 0x3AF772CA:
      v17 = 603384487;
      break;
    case 0x3AF772DB:
      v17 = 603384504;
      break;
    case 0x3AF772CB:
      v17 = 603384488;
      break;
    default:
      v17 = 603384486;
      break;
    }
    goto LABEL_59;
  }
LABEL_111:
  if (v8 != 0) {
  LABEL_112:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
}

__int64 game_facility_144de10(__int64 a1)
{
  __int128 v2;
  __int128 v3;
  __int128 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
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
  __int128 v34;
  __int64 result;
  __int64 v36;
  __int64 v37;
  __int128 v38;

  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  v2 = *(_OWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 64) = v2;
  *((_QWORD*)&v2 + 1) = 3212836864LL;
  v3 = *(_OWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 48) = v3;
  *((_QWORD*)&v3 + 1) = 3212836864LL;
  v4 = *(_OWORD*)(a1 + 48);
  v5 = GameData_2131388[0];
  *(_QWORD*)(a1 + 132) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 260) = 0;
  v6 = GameData_2131320[0];
  *(_QWORD*)a1 = game_facility_SceneCamera_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_WORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 140) = 0;
  *(_QWORD*)(a1 + 180) = 0;
  *(_QWORD*)(a1 + 220) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_DWORD*)(a1 + 128) = 1065353216;
  *(_DWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  v38 = v2;
  *(_DWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 252) = 1106247680;
  *(_DWORD*)(a1 + 256) = 1106247680;
  *(_DWORD*)(a1 + 248) = 1106247680;
  *(_OWORD*)(a1 + 64) = v3;
  *(_OWORD*)(a1 + 80) = v2;
  *((_QWORD*)&v4 + 1) = 3212836864LL;
  *(_QWORD*)(a1 + 32) = v5 + 2;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 112) = v6 + 2;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 232) = v6 + 2;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 152) = v6 + 2;
  *(_QWORD*)(a1 + 192) = v6 + 2;
  *(_OWORD*)(a1 + 48) = v4;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      432, 16, 0);
  v8 = GameData_212e460[0];
  v9 = (__int64*)GameData_212c2a0;
  *(_QWORD*)(v7 + 112) = 1065353216;
  *(_QWORD*)(v7 + 120) = 0x100000000LL;
  *(_QWORD*)(v7 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v7 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v7 + 144) = 0x4110000041800000LL;
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v9);
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v9);
  *(_QWORD*)(v7 + 168) = 1092616192;
  v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9);
  v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9 + 8);
  *(_QWORD*)v7 = v8 + 2;
  *(_QWORD*)(v7 + 8) = 0;
  v14 = *v9;
  v15 = v9[1];
  *(_QWORD*)(v7 + 240) = v10;
  *(_QWORD*)(v7 + 248) = v11;
  *(_QWORD*)(v7 + 224) = v12;
  *(_QWORD*)(v7 + 232) = v13;
  v17 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9);
  v16 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
  *(_QWORD*)(v7 + 192) = v14;
  *(_QWORD*)(v7 + 200) = v15;
  *(_QWORD*)(v7 + 208) = v17;
  *(_QWORD*)(v7 + 216) = v16;
  v18 = (__int64*)GameData_212c2b0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 152) = 0;
  v19 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18);
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v18);
  v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v18 + 8);
  v23 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v18);
  v22 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v18);
  v25 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v18);
  v24 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v18 + 8);
  v26 = *v18;
  *(_QWORD*)(v7 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v18 + 8);
  *(_QWORD*)(v7 + 280) = v20;
  *(_QWORD*)(v7 + 320) = v26;
  *(_QWORD*)(v7 + 328) = v19;
  v27 = v18[1];
  *(_QWORD*)(v7 + 256) = *v18;
  *(_QWORD*)(v7 + 264) = v27;
  v28 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v18);
  *(_QWORD*)(v7 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v18);
  *(_QWORD*)(v7 + 312) = v22;
  v30 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v18 + 8);
  v29 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v18 + 16);
  v31 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v18);
  *(_QWORD*)(v7 + 352) = v25;
  *(_QWORD*)(v7 + 360) = v28;
  *(_QWORD*)(v7 + 288) = v29;
  *(_QWORD*)(v7 + 296) = v24;
  *(_QWORD*)(v7 + 336) = v21;
  *(_QWORD*)(v7 + 344) = v30;
  *(_QWORD*)(v7 + 368) = v23;
  *(_QWORD*)(v7 + 376) = v31;
  *(_OWORD*)(v7 + 48) = GameData_1a83090;
  *(_OWORD*)(v7 + 64) = (__typeof__(*(_OWORD*)(v7 + 64))){0};
  *(_OWORD*)(v7 + 80) = GameData_1a83610;
  *(_OWORD*)(v7 + 96) = (__typeof__(*(_OWORD*)(v7 + 96))){0};
  v32 = GameData_212e438;
  *(_BYTE*)(v7 + 164) = 1;
  *(_DWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 156) = 0x469C40003DCCCCCDLL;
  *(_BYTE*)(v7 + 165) = 1;
  *(_QWORD*)(v7 + 424) = 1023;
  *(_QWORD*)(v7 + 392) = 1023;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 40) = 2;
  *(_QWORD*)(v7 + 32) = v32 + 16;
  v33 = v7 + 32;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6190) != 0) {
    v37 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v37;
    __cxa_guard_release(&GameData_21a6190);
  }
  *(_DWORD*)(v7 + 128) = 1106247680;
  v34 = GameData_21a6180;
  *(_QWORD*)(v7 + 112) = 1065353216;
  *(_QWORD*)(v7 + 120) = 0;
  *(_OWORD*)(v7 + 64) = v38;
  *(_OWORD*)(v7 + 80) = v34;
  result = GameRoutine_b3aee0(v33);
  v36 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v33;
  *(_QWORD*)(a1 + 16) = v7;
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
    return std___1___shared_weak_count___release_weak(v36);
  }
  return result;
}

void game_facility_144e960(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  float v3;
  float v4;
  float32x4_t* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float i;
  __int64 v14;
  __int64 v15;
  int v16;
  float32x4_t* v17;
  __int64 v18;
  long double v19;
  float j;
  int v22;
  float* v23;
  __int64 v24;
  __int64 v25;
  long double (*v26)(__int64);
  int8x16_t v27;
  int8x16_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _DWORD* v39;
  __int64 v40;
  struct {
    int8x16_t v41;
    char v42;
  } v41_;
  float32x4_t v43;
  float32x4_t v44[4];
  int8x16_t v45[4];
  __int128 v46;

  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v1 = *(_QWORD*)(a1 + 88);
  LANES128(v45[0]).n128_u64[0] = *(_QWORD*)(a1 + 80);
  LANES128(v45[0]).n128_u64[1] = v1;
  game_13f9200((void*)(&v43), v45),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v3 = *(float*)(a1 + 176);
  v4 = *(float*)(*(_QWORD*)GameData_212dce8 + 128LL);
  v5 = *(float32x4_t**)(a1 + 8);
  v6 = *(_QWORD*)(a1 + 16);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v5[2] = v43;
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      std___1___shared_weak_count___release_weak_alt1(),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v7 = *(_QWORD*)(a1 + 8);
    v8 = *(_QWORD*)(a1 + 16);
    if (v8 != 0) {
      goto LABEL_5;
    }
  LABEL_8:
    *(_DWORD*)(v7 + 80) = *(_DWORD*)(a1 + 136);
    goto LABEL_9;
  }
  v5[2] = v43;
  v7 = *(_QWORD*)(a1 + 8);
  v8 = *(_QWORD*)(a1 + 16);
  if (v8 == 0) {
    goto LABEL_8;
  }
LABEL_5:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                            memory_order_relaxed);
  *(_DWORD*)(v7 + 80) = *(_DWORD*)(a1 + 136);
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
LABEL_9:
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(_QWORD*)(a1 + 16);
  v11 = v3 + v4;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (v11 >= 0x0.0p+0f) {
      if (v11 != 0x0.0p+0f && v11 >= 0x1.6800000000000p+8f) {
        do {
          v11 = v11 + -0x1.6800000000000p+8f;
        } while (v11 >= 0x1.6800000000000p+8f);
      }
    }
    else {
      do {
        v11 = v11 + 0x1.6800000000000p+8f;
      } while (v11 < 0x0.0p+0f);
    }
    for (i = *(float*)(a1 + 216); i < -0x1.6800000000000p+7f;
         i = i + 0x1.6800000000000p+8f)
      ;
    for (; i >= 0x1.6800000000000p+7f; i = i + -0x1.6800000000000p+8f)
      ;
    *(float*)(v9 + 84) = v11;
    *(float*)(v9 + 88) = i;
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      std___1___shared_weak_count___release_weak_alt1(),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    v14 = *(_QWORD*)(a1 + 8);
    v15 = *(_QWORD*)(a1 + 16);
    if (v15 != 0) {
      goto LABEL_28;
    }
  }
  else {
    if (v11 >= 0x0.0p+0f) {
      if (v11 != 0x0.0p+0f && v11 >= 0x1.6800000000000p+8f) {
        do {
          v11 = v11 + -0x1.6800000000000p+8f;
        } while (v11 >= 0x1.6800000000000p+8f);
      }
    }
    else {
      do {
        v11 = v11 + 0x1.6800000000000p+8f;
      } while (v11 < 0x0.0p+0f);
    }
    for (j = *(float*)(a1 + 216); j < -0x1.6800000000000p+7f;
         j = j + 0x1.6800000000000p+8f)
      ;
    for (; j >= 0x1.6800000000000p+7f; j = j + -0x1.6800000000000p+8f)
      ;
    *(float*)(v9 + 84) = v11;
    *(float*)(v9 + 88) = j;
    v14 = *(_QWORD*)(a1 + 8);
    v15 = *(_QWORD*)(a1 + 16);
    if (v15 != 0) {
    LABEL_28:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
      v16 = *(_DWORD*)(a1 + 256);
      *(_DWORD*)(v14 + 92) = 0;
      *(_DWORD*)(v14 + 96) = v16;
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
        std___1___shared_weak_count___release_weak_alt1(),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v17 = *(float32x4_t**)(a1 + 8);
      v18 = *(_QWORD*)(a1 + 16);
      if (v18 != 0) {
        goto LABEL_31;
      }
    LABEL_44:
      GameRoutine_b3aee0_alt1(v17),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      goto LABEL_45;
    }
  }
  v22 = *(_DWORD*)(a1 + 256);
  *(_DWORD*)(v14 + 92) = 0;
  *(_DWORD*)(v14 + 96) = v22;
  v17 = *(float32x4_t**)(a1 + 8);
  v18 = *(_QWORD*)(a1 + 16);
  if (v18 == 0) {
    goto LABEL_44;
  }
LABEL_31:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                            memory_order_relaxed);
  GameRoutine_b3aee0_alt1(v17),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    *(__n128*)&v19 = std___1___shared_weak_count___release_weak_alt1(),
    v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
LABEL_45:
  v23 = *(float**)(a1 + 408);
  if (v23 == nullptr) {
    goto LABEL_59;
  }
  v25 = *(_QWORD*)(a1 + 8);
  v24 = *(_QWORD*)(a1 + 16);
  if (v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v25 == 0) {
    LANES128(v41_.v41).n128_u8[0] = 0;
    v41_.v42 = 0;
    if (v24 == 0) {
      goto LABEL_54;
    }
  LABEL_52:
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v24 + 16LL))(v24, v19),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      std___1___shared_weak_count___release_weak_alt1(),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    goto LABEL_54;
  }
  GameRoutine_b3aee0_alt1((float32x4_t*)v25),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v26 = *(long double (**)(__int64))(*(_QWORD*)v25 + 16LL),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v46 = *(_OWORD*)(v25 + 32);
  v45[0] = COERCE_INT8X16_T(v26(v25)),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v45[1] = v27;
  v45[2] = v28;
  v45[3] = v29;
  v44[0] = COERCE_FLOAT32X4_T(
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v25 + 24LL))(v25)),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v44[1] = v30;
  v44[2] = v31;
  v44[3] = v32;
  *(double*)&v19 = X8CALL_D0(
      double, GameRoutine_148a410((void*)(&v41_.v41), v23, (float32x2_t*)&v46,
                                  (float32x2_t*)v45, v44)),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (v24 != 0) {
    goto LABEL_52;
  }
LABEL_54:
  if (v41_.v42 == 1) {
    v33 = *(int8x16_t**)(a1 + 8);
    v34 = *(_QWORD*)(a1 + 16);
    if (v34 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                memory_order_relaxed);
      v33[2] = v41_.v41;
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
        std___1___shared_weak_count___release_weak_alt1(),
            v19 =
                COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v28 =
                COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v29 =
                COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    }
    else {
      v33[2] = v41_.v41;
    }
  }
LABEL_59:
  v35 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) != v35) {
    v36 = *(_QWORD*)(v35 - 8);
    if (v36 != 0) {
      v37 = *(_QWORD*)(v36 + 24);
      v38 = *(_QWORD*)(v36 + 32);
      if (v38 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                  memory_order_relaxed);
      }
      v39 = *(_DWORD**)(a1 + 8);
      v40 = *(_QWORD*)(a1 + 16);
      if (v40 != 0) {
        goto LABEL_64;
      }
    LABEL_67:
      wld_a7fda0(v37, v39),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
      goto LABEL_68;
    }
  }
  v37 = 0;
  v38 = 0;
  v39 = *(_DWORD**)(a1 + 8);
  v40 = *(_QWORD*)(a1 + 16);
  if (v40 == 0) {
    goto LABEL_67;
  }
LABEL_64:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 8), 1u,
                            memory_order_relaxed);
  wld_a7fda0(v37, v39),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
LABEL_68:
  if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v28 = COERCE_AS(__typeof__(v28), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v29 = COERCE_AS(__typeof__(v29), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
}

__int64* game_facility_144ee80(_QWORD* a1, __int64 a2, __int64* a3)
{
  __int64* result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  result = *(__int64**)(a2 + 32);
  if (result == nullptr) {
    return result;
  }
  if (result == (__int64*)a2) {
    v14_.v15 = v14_.v14;
    (*(void (**)(__int64*, _QWORD*))(*result + 24))(result, v14_.v14);
  }
  else {
    v14_.v15 = (_QWORD*)(*(__int64 (**)(__int64*))(*result + 16))(result);
  }
  GameRoutine_14514d0(v14_.v14, a1 + 40);
  if (v14_.v15 == v14_.v14) {
    v6 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_10;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v6))((__int64)v14_.v15);
LABEL_10:
  result = a1 + 46;
  if (a1 + 46 != a3) {
    v7 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)result & 1) != 0) {
      v10 = (v7 & 1) == 0;
      v11 = v7 >> 1;
      if (v10) {
        v12 = (__int64)a3 + 1;
      }
      else {
        v12 = a3[2];
      }
      if (v10) {
        v13 = v11;
      }
      else {
        v13 = a3[1];
      }
      return SpineModel_64dde0(result, v12, v13);
    }
    else if ((v7 & 1) != 0) {
      return GameRoutine_64df20(result, a3[2], a3[1]);
    }
    else {
      v8 = *a3;
      v9 = a3[2];
      a1[47] = a3[1];
      a1[48] = v9;
      *result = v8;
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int128 v7;
  __int128 v8;
  __int128 v9;
  __int128 v10;
  float v11;
  float v13;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 result;
  __int64 v19;

  if (*(_QWORD*)(a1 + 424) != 0) {
    v6 = *(_QWORD*)(a1 + 432);
    *(_QWORD*)(a1 + 424) = 0;
    *(_QWORD*)(a1 + 432) = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  v7 = *(_OWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 80) = v7;
  v8 = *(_OWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 64) = v8;
  *((_QWORD*)&v8 + 1) = DWORD2(v7);
  *(_OWORD*)(a1 + 80) = v8;
  v9 = *(_OWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 48) = v9;
  *((_QWORD*)&v9 + 1) = DWORD2(v7);
  v10 = *(_OWORD*)(a1 + 48);
  *((_QWORD*)&v10 + 1) = DWORD2(v7);
  LODWORD(v7) = *(_DWORD*)(a1 + 136);
  *(_DWORD*)(a1 + 128) = v7;
  *(_DWORD*)(a1 + 132) = v7;
  v11 = *(float*)(a1 + 176);
  *(_OWORD*)(a1 + 48) = v10;
  *(_OWORD*)(a1 + 64) = v9;
  if (v11 >= 0.0f) {
    if (v11 != 0.0f && v11 >= 0x1.6800000000000p+8f) {
      do {
        v11 = v11 + -0x1.6800000000000p+8f;
      } while (v11 >= 0x1.6800000000000p+8f);
    }
  }
  else {
    do {
      v11 = v11 + 0x1.6800000000000p+8f;
    } while (v11 < 0.0f);
  }
  *(float*)(a1 + 172) = v11;
  *(float*)(a1 + 176) = v11;
  *(float*)(a1 + 168) = v11;
  v13 = *(float*)(a1 + 216);
  for (*(_QWORD*)(a1 + 160) = 0; v13 < -0x1.6800000000000p+7f;
       v13 = v13 + 0x1.6800000000000p+8f)
    ;
  for (; v13 >= 0x1.6800000000000p+7f; v13 = v13 + -0x1.6800000000000p+8f)
    ;
  *(float*)(a1 + 212) = v13;
  *(float*)(a1 + 216) = v13;
  *(float*)(a1 + 208) = v13;
  v14 = *(_DWORD*)(a1 + 256);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = v14;
  *(_DWORD*)(a1 + 252) = v14;
  v15 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 496, 16, 0);
  v16 = v15 + 3;
  v17 = v15;
  v15[1] = 0;
  v15[2] = 0;
  *v15 = GameData_203ecd8;
  result = GameRoutine_14516c0(v15 + 3, a1, a2);
  v19 = *(_QWORD*)(a1 + 432);
  *(_QWORD*)(a1 + 424) = v16;
  *(_QWORD*)(a1 + 432) = v17;
  if (v19 == 0) {
    *a3 = v16;
    a3[1] = v17;
  LABEL_23:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 1), 1u,
                              memory_order_relaxed);
    {
      result;
      return;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    result = std___1___shared_weak_count___release_weak(v19);
  }
  v17 = *(_QWORD**)(a1 + 432);
  *a3 = *(_QWORD*)(a1 + 424);
  a3[1] = v17;
  if (v17 != nullptr) {
    goto LABEL_23;
  }
  {
    result;
    return;
  }
}

float game_facility_144f500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int128 v11;
  int v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  int v16;
  float result;
  int v18;
  int v19;

  if ((*(_BYTE*)a3 & 1) != 0) {
    v5 = *(_QWORD*)(a3 + 16);
  }
  else {
    v5 = a3 + 1;
  }
  v6 = game_HashString_alt2(v5);
  v7 = *(_QWORD*)(GameData_22417e0 + 96);
  if ((v7 & (v7 - 1)) != 0) {
    v8 = v6;
    if (v6 >= v7) {
      v8 = v6 % v7;
    }
    v9 = *(_QWORD**)(*(_QWORD*)(GameData_22417e0 + 88) + 8 * v8);
    do {
      do {
        v9 = (_QWORD*)*v9;
      } while (v9[1] != v6);
    } while (v9[2] != v6);
  }
  else {
    v9 = *(_QWORD**)(*(_QWORD*)(GameData_22417e0 + 88) + 8 * ((v7 - 1) & v6));
    do {
      do {
        v9 = (_QWORD*)*v9;
      } while (v9[1] != v6);
    } while (v9[2] != v6);
  }
  v10 = v9[3];
  v11 = *(_OWORD*)(a2 + 32);
  v12 = *(_DWORD*)(v10 + 60);
  *(_DWORD*)(a1 + 44) = 0;
  *(_QWORD*)(a1 + 64) = v11;
  *(_DWORD*)(a1 + 40) = v12;
  v13 = *(_OWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 48) = v13;
  v14 = *(_OWORD*)(a1 + 48);
  v15 = *(_OWORD*)(a1 + 64);
  *((_QWORD*)&v14 + 1) = DWORD2(v13);
  *((_QWORD*)&v15 + 1) = DWORD2(v11);
  *(_OWORD*)(a1 + 48) = v14;
  *(_OWORD*)(a1 + 64) = v15;
  LODWORD(v13) = *(_DWORD*)(v10 + 60);
  LODWORD(v11) = *(_DWORD*)(a2 + 80);
  *(_DWORD*)(a1 + 124) = 0;
  *(_DWORD*)(a1 + 120) = v13;
  *(_DWORD*)(a1 + 128) = *(_DWORD*)(a1 + 136);
  *(_DWORD*)(a1 + 132) = v11;
  game_facility_144fa20_alt1(a1 + 152, *(float*)(a2 + 84), *(float*)(v10 + 60));
  game_facility_144fa20_alt1(a1 + 192, *(float*)(a2 + 88), *(float*)(v10 + 60));
  v16 = *(_DWORD*)(v10 + 60);
  result = *(float*)(a2 + 96);
  *(_DWORD*)(a1 + 244) = 0;
  *(_DWORD*)(a1 + 240) = v16;
  *(_DWORD*)(a1 + 248) = *(_DWORD*)(a1 + 256);
  *(float*)(a1 + 252) = result;
  v18 = *(char*)(v10 + 64);
  v19 = *(char*)(v10 + 65);
  *(_DWORD*)(a1 + 96) = v18;
  *(_DWORD*)(a1 + 100) = v19;
  *(_DWORD*)(a1 + 140) = v18;
  *(_DWORD*)(a1 + 144) = v19;
  *(_DWORD*)(a1 + 180) = v18;
  *(_DWORD*)(a1 + 184) = v19;
  *(_DWORD*)(a1 + 220) = v18;
  *(_DWORD*)(a1 + 224) = v19;
  *(_DWORD*)(a1 + 260) = v18;
  *(_DWORD*)(a1 + 264) = v19;
  return result;
}

float game_facility_144f680(float32x4_t* a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  float v8;
  __int64 i;
  double v10;
  double v11;
  double v12;
  unsigned int v13;
  unsigned __int64 v14;
  unsigned int v15;
  float32x4_t v16;
  int8x16_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float result;
  float v37;
  unsigned __int32 v38;
  unsigned __int32 v39;
  unsigned __int32 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  float32x4_t j;

  if ((*(_BYTE*)a2 & 1) != 0) {
    v3 = *(_QWORD*)(a2 + 16);
  }
  else {
    v3 = a2 + 1;
  }
  v4 = game_HashString_alt2(v3);
  v5 = *(_QWORD*)(GameData_22417e0 + 96);
  if ((v5 & (v5 - 1)) != 0) {
    v6 = v4;
    if (v4 >= v5) {
      v6 = v4 % v5;
    }
    v7 = *(_QWORD**)(*(_QWORD*)(GameData_22417e0 + 88) + 8 * v6);
    do {
      do {
        v7 = (_QWORD*)*v7;
      } while (v7[1] != v4);
    } while (v7[2] != v4);
  }
  else {
    v7 = *(_QWORD**)(*(_QWORD*)(GameData_22417e0 + 88) + 8 * ((v5 - 1) & v4));
    do {
      do {
        v7 = (_QWORD*)*v7;
      } while (v7[1] != v4);
    } while (v7[2] != v4);
  }
  v8 = LANES128(a1[11]).n128_f32[0];
  for (i = v7[3]; v8 < -0x1.6800000000000p+7; v8 = v8 + 0x1.6800000000000p+8)
    ;
  v42 = *(_QWORD*)(i + 32);
  for (j = a1[5]; v8 >= 0x1.6800000000000p+7; v8 = v8 + -0x1.6800000000000p+8)
    ;
  v41 = *(unsigned int*)(i + 40);
  v10 = (float)(v8 * 0x1.1df46a0000000p-6) * 0.5;
  v11 = cos(v10);
  v12 = sin(v10);
  *(float*)&v13 = v11 + v12 * 0.0;
  *(float*)&v14 = v12 * -0.0 + v11 * 0.0;
  *(float*)&v15 = v12 + v11 * 0.0;
  LANES128(v16).n128_u64[0] = __PAIR64__(v15, v14);
  LANES128(v16).n128_u64[1] = __PAIR64__(v13, v14);
  v17 = vmulq_f32(v16, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] = v42;
  LANES128(v20).n128_u64[0] = v42;
  LANES128(v19).n128_u64[1] = v41;
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v21).n128_u64[0];
  LANES128(v16).n128_u64[1] = LANES128(v16).n128_u64[0];
  v22 = vmulq_f32(v20, v18);
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v20).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v17).n128_u64[0]), 1);
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v19).n128_u64[0];
  LANES128(v19).n128_u64[1] = v42;
  v23 =
      vmlaq_f32(vmlaq_f32(vmulq_f32(v16, v17),
                          COERCE_AS(float32x4_t, GameData_1a83800), v22),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v19, v20));
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v19).n128_i8[8] =
      vqtbl1_s8(v17, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v17).n128_u64[0] = __PAIR64__(v15, v14);
  HIDWORD(v14) = v13;
  v24 = vmlsq_f32(v23, v19, v21);
  LANES128(v25).n128_u64[0] = __PAIR64__(v15, v14);
  LANES128(v21).n128_u64[0] = __PAIR64__(v15, v14);
  LANES128(v25).n128_u64[1] = v14;
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v27).n128_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v27).n128_u64[1] = LANES128(v25).n128_u64[0];
  LANES128(v25).n128_u64[1] = LANES128(v17).n128_u64[0];
  *(int32x2_t*)&LANES128(v29).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 1);
  v30 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v26, v24), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v21, v28)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v25, v29));
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v31 = vmlsq_f32(v30, v25, v27);
  LANES128(v25).n128_u32[0] = *(_DWORD*)(i + 60);
  LANES128(a1[2]).n128_u32[3] = 0;
  v32 = vaddq_f32(j, v31);
  LANES128(a1[2]).n128_u32[2] = LANES128(v25).n128_u32[0];
  v33 = a1[5];
  LANES128(a1[4]).n128_u64[0] = LANES128(v32).n128_u64[0];
  LANES128(a1[3]).n128_u64[0] = LANES128(v33).n128_u64[0];
  v34 = a1[3];
  v35 = a1[4];
  LANES128(v34).n128_u64[1] = LANES128(v33).n128_u32[2];
  LANES128(v35).n128_u64[1] = LANES128(v32).n128_u32[2];
  LANES128(v32).n128_u32[0] = LANES128(a1[8]).n128_u32[2];
  a1[3] = v34;
  a1[4] = v35;
  LANES128(v33).n128_u32[0] = *(_DWORD*)(i + 44);
  LANES128(v34).n128_u32[0] = *(_DWORD*)(i + 60);
  LANES128(a1[7]).n128_u32[3] = 0;
  LANES128(a1[7]).n128_u32[2] = LANES128(v34).n128_u32[0];
  LANES128(a1[8]).n128_u32[0] = LANES128(v32).n128_u32[0];
  LANES128(a1[8]).n128_f32[1] =
      LANES128(v32).n128_f32[0] + LANES128(v33).n128_f32[0];
  game_facility_144fa20_alt1(&LANES128(a1[9]).n128_i8[8],
                             LANES128(a1[11]).n128_f32[0] + *(float*)(i + 48),
                             *(float*)(i + 60));
  game_facility_144fa20_alt1(&a1[12],
                             LANES128(a1[13]).n128_f32[2] + *(float*)(i + 52),
                             *(float*)(i + 60));
  result = LANES128(a1[16]).n128_f32[0];
  v37 = *(float*)(i + 56);
  v38 = *(_DWORD*)(i + 60);
  LANES128(a1[15]).n128_u32[1] = 0;
  LANES128(a1[15]).n128_u32[0] = v38;
  LANES128(a1[15]).n128_f32[2] = result;
  LANES128(a1[15]).n128_f32[3] = result + v37;
  v39 = *(char*)(i + 64);
  v40 = *(char*)(i + 65);
  LANES128(a1[6]).n128_u32[0] = v39;
  LANES128(a1[6]).n128_u32[1] = v40;
  LANES128(a1[8]).n128_u32[3] = v39;
  LANES128(a1[9]).n128_u32[0] = v40;
  LANES128(a1[11]).n128_u32[1] = v39;
  LANES128(a1[11]).n128_u32[2] = v40;
  LANES128(a1[13]).n128_u32[3] = v39;
  LANES128(a1[14]).n128_u32[0] = v40;
  LANES128(a1[16]).n128_u32[1] = v39;
  LANES128(a1[16]).n128_u32[2] = v40;
  return result;
}

float game_facility_144fa20(__int64 a1, float result, float a3)
{

#pragma clang fp contract(off)
  float v3;
  float v4;
  float v5;
  float v6;

  if (a3 <= 0x0.0p+0f) {
    for (; result < -0x1.6800000000000p+7f;
         result = result + 0x1.6800000000000p+8f)
      ;
    for (; result >= 0x1.6800000000000p+7f;
         result = result + -0x1.6800000000000p+8f)
      ;
    *(_QWORD*)(a1 + 8) = 0;
    *(float*)(a1 + 20) = result;
    *(float*)(a1 + 24) = result;
    *(float*)(a1 + 16) = result;
  }
  else {
    v3 = *(float*)(a1 + 24);
    v4 = 0x0.0p+0f;
    if (v3 != result) {
      v5 = *(float*)(a1 + 24);
      if (v3 < -0x1.6800000000000p+7f) {
        v5 = *(float*)(a1 + 24);
        do {
          v5 = v5 + 0x1.6800000000000p+8f;
        } while (v5 < -0x1.6800000000000p+7f);
      }
      for (; v5 >= 0x1.6800000000000p+7f; v5 = v5 + -0x1.6800000000000p+8f)
        ;
      for (; result < -0x1.6800000000000p+7f;
           result = result + 0x1.6800000000000p+8f)
        ;
      for (; result >= 0x1.6800000000000p+7f;
           result = result + -0x1.6800000000000p+8f)
        ;
      if (vabds_f32(result, v5) <= 0x1.6800000000000p+7f) {
        v4 = result - v5;
      }
      else {
        if (v5 >= 0x0.0p+0f) {
          if (v5 != 0x0.0p+0f && v5 >= 0x1.6800000000000p+8f) {
            do {
              v5 = v5 + -0x1.6800000000000p+8f;
            } while (v5 >= 0x1.6800000000000p+8f);
          }
        }
        else {
          do {
            v5 = v5 + 0x1.6800000000000p+8f;
          } while (v5 < 0x0.0p+0f);
        }
        if (result >= 0x0.0p+0f) {
          if (result != 0x0.0p+0f && result >= 0x1.6800000000000p+8f) {
            do {
              result = result + -0x1.6800000000000p+8f;
            } while (result >= 0x1.6800000000000p+8f);
          }
        }
        else {
          do {
            result = result + 0x1.6800000000000p+8f;
          } while (result < 0x0.0p+0f);
        }
        v6 = result - v5;
        if (v6 > 0x1.6800000000000p+7f) {
          v6 = v6 + -0x1.6800000000000p+8f;
        }
        v4 = v6 + 0x1.6800000000000p+8f;
        if (v6 >= -0x1.6800000000000p+7f) {
          v4 = v6;
        }
      }
    }
    *(_DWORD*)(a1 + 12) = 0;
    *(float*)(a1 + 8) = a3;
    *(float*)(a1 + 16) = v3;
    *(float*)(a1 + 20) = v3 + v4;
    return v3 + v4;
  }
  return result;
}

__attribute__((swiftcall)) void game_facility_1450640(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  unsigned __int64 result;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  __int64 v16;
  int v17;
  int v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int128 v23;
  __int128 v24;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
  }
  else {
    v3 = a1 + 1;
  }
  result = game_HashString_alt2(v3);
  if (result == 0) {
    goto LABEL_32;
  }
  v6 = *(_QWORD*)(GameData_22417d0 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_22417d0 + 112) == 0) {
    goto LABEL_32;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_22417d0 + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_32;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_32;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_32;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_32;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v11[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v11[3];
  if (v14 != 0 && *(_BYTE*)(v14 + 32) == 2) {
    *(_QWORD*)&v15 = *(_QWORD*)(v14 + 36);
    LODWORD(v5) = *(_DWORD*)(v14 + 44);
    v16 = *(_QWORD*)(v14 + 48);
    *((_QWORD*)&v15 + 1) = v5;
    v17 = *(_DWORD*)(v14 + 56);
    v18 = *(_DWORD*)(v14 + 60);
    v24 = v15;
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 432, 16, 0);
    v19[2] = 0;
    v20 = v19 + 4;
    v21 = v19;
    *v19 = GameData_212e460[0] + 2;
    v19[1] = 0;
    v22 = wld_a7fab0(v19 + 4);
    *a2 = v20;
    a2[1] = v21;
    *((_DWORD*)v21 + 10) = 2;
    v23 = *(_OWORD*)Vector_650e70(v22);
    *((_DWORD*)v21 + 30) = v17;
    *((_DWORD*)v21 + 32) = v18;
    v21[14] = v16;
    *((_DWORD*)v21 + 31) = 0;
    *((_OWORD*)v21 + 4) = v24;
    *((_OWORD*)v21 + 5) = v23;
    {
      GameRoutine_b3aee0(v20);
      return;
    }
  }
LABEL_32:
  *a2 = 0;
  a2[1] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_facility_1450df0(PSEUDO_X8 x8_,
                                                      __int128* a1, float a3,
                                                      float a4, float a5,
                                                      float a6)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64* v15;
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
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int128 v38;
  __int128 v39;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;

  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       432, 16, 0);
  v13 = GameData_212c2a0;
  v14 = (__int64*)GameData_212c2b0;
  v15 = GameData_212e460[0];
  *(_QWORD*)(v12 + 112) = 1065353216;
  *(_QWORD*)(v12 + 120) = 0x100000000LL;
  *(_QWORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 152) = 0;
  *(_DWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 144) = 0x4110000041800000LL;
  *(_QWORD*)(v12 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v12 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v12 + 168) = 1092616192;
  v16 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v13);
  v17 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v13 + 8);
  v19 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v14);
  v18 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v14);
  v21 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14);
  v20 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14 + 8);
  *(_QWORD*)v12 = v15 + 2;
  *(_QWORD*)(v12 + 8) = 0;
  v22 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v13);
  v23 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v13);
  *(_QWORD*)(v12 + 224) = v16;
  *(_QWORD*)(v12 + 232) = v17;
  *(_QWORD*)(v12 + 240) = v22;
  *(_QWORD*)(v12 + 248) = v23;
  v24 = *v14;
  v25 = v13[1];
  *(_QWORD*)(v12 + 192) = *v13;
  *(_QWORD*)(v12 + 200) = v25;
  v27 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13);
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v13 + 8);
  v29 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14);
  v28 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 8);
  *(_QWORD*)(v12 + 208) = v27;
  *(_QWORD*)(v12 + 216) = v26;
  v30 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14);
  *(_QWORD*)(v12 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v14 + 8);
  *(_QWORD*)(v12 + 280) = v28;
  *(_QWORD*)(v12 + 320) = v24;
  *(_QWORD*)(v12 + 328) = v30;
  v31 = v14[1];
  *(_QWORD*)(v12 + 256) = *v14;
  *(_QWORD*)(v12 + 264) = v31;
  v32 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v14);
  *(_QWORD*)(v12 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v14);
  *(_QWORD*)(v12 + 312) = v18;
  v34 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 8);
  v33 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 16);
  v35 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v14);
  *(_QWORD*)(v12 + 288) = v33;
  *(_QWORD*)(v12 + 296) = v20;
  *(_QWORD*)(v12 + 336) = v29;
  *(_QWORD*)(v12 + 344) = v34;
  *(_QWORD*)(v12 + 368) = v19;
  *(_QWORD*)(v12 + 376) = v35;
  *(_BYTE*)(v12 + 164) = 1;
  *(_OWORD*)(v12 + 48) = GameData_1a83090;
  *(_OWORD*)(v12 + 64) = (__typeof__(*(_OWORD*)(v12 + 64))){0};
  *(_OWORD*)(v12 + 80) = GameData_1a83610;
  *(_OWORD*)(v12 + 96) = (__typeof__(*(_OWORD*)(v12 + 96))){0};
  v36 = GameData_212e438;
  *(_QWORD*)(v12 + 352) = v21;
  *(_QWORD*)(v12 + 360) = v32;
  *(_QWORD*)(v12 + 408) = 0;
  *(_QWORD*)(v12 + 416) = 0;
  *(_QWORD*)(v12 + 384) = 0;
  *(_QWORD*)(v12 + 392) = 0;
  *(_BYTE*)(v12 + 165) = 1;
  *(_QWORD*)(v12 + 424) = 1023;
  *(_QWORD*)(v12 + 392) = 1023;
  *(_QWORD*)(v12 + 400) = 0;
  *(_QWORD*)(v12 + 40) = 2;
  *(_QWORD*)(v12 + 156) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(v12 + 32) = v36 + 16;
  v37 = v12 + 32;
  *a2 = v12 + 32;
  a2[1] = v12;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v44 = v12;
    v41 = v12 + 32;
    v42 = __cxa_guard_acquire(&GameData_21a6190);
    v12 = v44;
    v37 = v41;
    if (v42 != 0) {
      v43 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v43;
      __cxa_guard_release(&GameData_21a6190);
      v12 = v44;
      v37 = v41;
    }
  }
  v38 = *a1;
  *(float*)(v12 + 112) = a3;
  *(float*)(v12 + 116) = a4;
  *(float*)(v12 + 120) = a5;
  *(float*)(v12 + 128) = a6;
  *(_DWORD*)(v12 + 124) = 0;
  v39 = GameData_21a6180;
  *(_OWORD*)(v12 + 64) = v38;
  *(_OWORD*)(v12 + 80) = v39;
  {
    GameRoutine_b3aee0(v37);
    return;
  }
}

__attribute__((swiftcall)) void game_facility_1451020(PSEUDO_X8 x8_,
                                                      unsigned __int64 a1,
                                                      __int64 a2, __int64 a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v8;
  unsigned __int64 result;
  unsigned __int64 v10;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
  }
  else {
    v8 = a1 + 1;
  }
  result = game_HashString_alt2(v8);
  if (result == 0) {
    goto LABEL_36;
  }
  v10 = *(_QWORD*)(GameData_22417d0 + 96);
  if (v10 == 0 || *(_QWORD*)(GameData_22417d0 + 112) == 0) {
    goto LABEL_36;
  }
  v12 = v10 - 1;
  if ((v10 & (v10 - 1)) != 0) {
    v13 = result;
    if (result >= v10) {
      v13 = result % v10;
    }
  }
  else {
    v13 = v12 & result;
  }
  v14 = *(_QWORD**)(*(_QWORD*)(GameData_22417d0 + 88) + 8 * v13);
  if (v14 == nullptr) {
    goto LABEL_36;
  }
  v15 = (_QWORD*)*v14;
  if (v15 == nullptr) {
    goto LABEL_36;
  }
  if ((v10 & v12) == 0) {
    while (1) {
      v17 = v15[1];
      if (v17 == result) {
        if (v15[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v17 & v12) != v13) {
        goto LABEL_36;
      }
      v15 = (_QWORD*)*v15;
      if (v15 == nullptr) {
        goto LABEL_36;
      }
    }
  }
  while (1) {
    v16 = v15[1];
    if (v16 == result) {
      break;
    }
    if (v16 >= v10) {
      v16 %= v10;
    }
    if (v16 != v13) {
      goto LABEL_36;
    }
  LABEL_18:
    v15 = (_QWORD*)*v15;
    if (v15 == nullptr) {
      goto LABEL_36;
    }
  }
  if (v15[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  v18 = v15[3];
  if (v18 == 0) {
  LABEL_36:
    *(_QWORD*)a4 = 0;
    *(_QWORD*)(a4 + 8) = 0;
    {
      result;
      return;
    }
  }
  v19 = *(unsigned __int8*)(v18 + 32);
  if (v19 > 1) {
    if (v19 == 2) {
      game_facility_1450640_alt1(a1);
      return;
    }
    if (v19 == 3) {
      v20 = SceneManager_138e200(*(_QWORD*)GameData_212dce8, a2);
      {
        X8CALL_X0(unsigned __int64,
                  GameRoutine_1450840((void*)((float32x4_t**)a4), a1, v20, a3));
        return;
      }
    }
    goto LABEL_36;
  }
  if (v19 != 0) {
    GameRoutine_1450260(a1, a3);
    return;
  }
  v21 = SceneManager_138e200(*(_QWORD*)GameData_212dce8, a2);
  {
    GameRoutine_144fca0(a1, v21);
    return;
  }
}

__attribute__((swiftcall)) void game_facility_1451220(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  float v8;
  __int64 v9;
  _QWORD* v10;
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
  __int128 v35;
  __int128 v36;
  __int64 result;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  __int128 v43;
  __int128 v44;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v4 = *(_QWORD*)(v2 + 24);
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v43 = *(_OWORD*)(v4 + 32);
  game_13f9460((void*)(&v44), &v43);
  v5 = *(_DWORD*)(v4 + 80);
  v6 = *(_DWORD*)(v4 + 88);
  v7 = *(_DWORD*)(v4 + 96);
  v8 = *(float*)(v4 + 84) - *(float*)(*(_QWORD*)GameData_212dce8 + 128LL);
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      432, 16, 0);
  v10 = GameData_212c2a0;
  v11 = (__int64*)GameData_212c2b0;
  v12 = GameData_212e460[0];
  *(_QWORD*)(v9 + 112) = 1065353216;
  *(_QWORD*)(v9 + 120) = 0x100000000LL;
  *(_QWORD*)(v9 + 16) = 0;
  *(_DWORD*)(v9 + 152) = 0;
  *(_DWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 144) = 0x4110000041800000LL;
  *(_QWORD*)(v9 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v9 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v9 + 168) = 1092616192;
  v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10);
  v14 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v10 + 8);
  v16 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11);
  v15 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v11);
  v18 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11);
  v17 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v11 + 8);
  *(_QWORD*)v9 = v12 + 2;
  *(_QWORD*)(v9 + 8) = 0;
  v19 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v10);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v10);
  *(_QWORD*)(v9 + 224) = v13;
  *(_QWORD*)(v9 + 232) = v14;
  *(_QWORD*)(v9 + 240) = v19;
  *(_QWORD*)(v9 + 248) = v20;
  v21 = *v11;
  v22 = v10[1];
  *(_QWORD*)(v9 + 192) = *v10;
  *(_QWORD*)(v9 + 200) = v22;
  v24 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10);
  v23 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 8);
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11);
  v25 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8);
  *(_QWORD*)(v9 + 208) = v24;
  *(_QWORD*)(v9 + 216) = v23;
  v27 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11);
  *(_QWORD*)(v9 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 8);
  *(_QWORD*)(v9 + 280) = v25;
  *(_QWORD*)(v9 + 320) = v21;
  *(_QWORD*)(v9 + 328) = v27;
  v28 = v11[1];
  *(_QWORD*)(v9 + 256) = *v11;
  *(_QWORD*)(v9 + 264) = v28;
  v29 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11);
  *(_QWORD*)(v9 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11);
  *(_QWORD*)(v9 + 312) = v15;
  v31 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8);
  v30 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 16);
  v32 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11);
  *(_QWORD*)(v9 + 288) = v30;
  *(_QWORD*)(v9 + 296) = v17;
  *(_QWORD*)(v9 + 336) = v26;
  *(_QWORD*)(v9 + 344) = v31;
  *(_QWORD*)(v9 + 368) = v16;
  *(_QWORD*)(v9 + 376) = v32;
  *(_BYTE*)(v9 + 164) = 1;
  *(_OWORD*)(v9 + 48) = GameData_1a83090;
  *(_OWORD*)(v9 + 64) = (__typeof__(*(_OWORD*)(v9 + 64))){0};
  *(_OWORD*)(v9 + 80) = GameData_1a83610;
  *(_OWORD*)(v9 + 96) = (__typeof__(*(_OWORD*)(v9 + 96))){0};
  v33 = GameData_212e438;
  *(_QWORD*)(v9 + 352) = v18;
  *(_QWORD*)(v9 + 360) = v29;
  *(_QWORD*)(v9 + 408) = 0;
  *(_QWORD*)(v9 + 416) = 0;
  *(_QWORD*)(v9 + 384) = 0;
  *(_QWORD*)(v9 + 392) = 0;
  *(_BYTE*)(v9 + 165) = 1;
  *(_QWORD*)(v9 + 424) = 1023;
  *(_QWORD*)(v9 + 392) = 1023;
  *(_QWORD*)(v9 + 400) = 0;
  *(_QWORD*)(v9 + 40) = 2;
  *(_QWORD*)(v9 + 156) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(v9 + 32) = v33 + 16;
  v34 = v9 + 32;
  *a1 = v9 + 32;
  a1[1] = v9;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v38 = v9;
    v39 = v9 + 32;
    v40 = __cxa_guard_acquire(&GameData_21a6190);
    v34 = v39;
    v41 = v40;
    v9 = v38;
    if (v41 != 0) {
      v42 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v42;
      __cxa_guard_release(&GameData_21a6190);
      v34 = v39;
      v9 = v38;
    }
  }
  v35 = v44;
  *(_DWORD*)(v9 + 112) = v5;
  *(float*)(v9 + 116) = v8;
  *(_DWORD*)(v9 + 120) = v6;
  v36 = GameData_21a6180;
  *(_DWORD*)(v9 + 128) = v7;
  *(_DWORD*)(v9 + 124) = 0;
  *(_OWORD*)(v9 + 64) = v35;
  *(_OWORD*)(v9 + 80) = v36;
  result = GameRoutine_b3aee0(v34);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    {
      std___1___shared_weak_count___release_weak(v3);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 game_facility_1467bc0(char a1)
{
  __int64 (***v1)();
  __int64* v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  int v8;
  char v9;
  __int64 result;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64* v28;
  __int64* v29;
  __int64* v31;
  __int64* v32;
  __int64* v34;
  __int64* v35;
  __int64* v37;
  __int64* v38;
  char v40;
  __int64* v41;
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
  char v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  struct {
    __int64 (**v58)();
    __int64 v59;
    __int64 v60;
    __int64* v61;
    __int64 (***v62)();
    __int64 v63;
    __int64* v64;
    __int64* v65;
    __int64 v66;
    __int64* v67;
    __int64* v68;
    __int64 v69;
    __int64* v70;
    __int64* v71;
    __int64 v72;
    __int64* v73;
    __int64* v74;
    __int64 v75;
  } v58_;
  __int16 v76[2];

  v3 = GameData_212dcd0;
  v4 = *GameData_212dcd0;
  if (*GameData_212dcd0 == 0) {
    goto LABEL_13;
  }
  *(_DWORD*)(v4 + 20) = -1;
  if (game_facility_FacilityView_instance_ != 0) {
    v5 = *(_QWORD*)(game_facility_FacilityView_instance_ + 248);
    if (v5 != 0) {
      v6 = a1;
      v1 = &v58_.v58;
      v58_.v58 = GameData_20416b0;
      v58_.v59 = game_facility_FacilityView_instance_;
      v58_.v62 = &v58_.v58;
      GameRoutine_1952d00(v5, 0, (__int64)&v58_.v58);
      if (v58_.v62 == &v58_.v58) {
        v7 = 4;
      }
      else {
        if (v58_.v62 == nullptr) {
          goto LABEL_9;
        }
        v7 = 5;
      }
      ((__int64 (*)(__int64))(*v58_.v62)[v7])((__int64)v58_.v62);
    LABEL_9:
      v4 = *v3;
      a1 = v6;
      if (*v3 != 0) {
        goto LABEL_10;
      }
    LABEL_13:
      v8 = 0;
      v9 = 1;
      goto LABEL_15;
    }
  }
LABEL_10:
  v8 = *(_DWORD*)(v4 + 16);
  if (v8 < 0) {
    v8 = 0;
    v9 = 0;
  }
  else {
    v9 = 0;
    result = 0;
    if ((unsigned __int8)*(_DWORD*)(v4 + 16) == 6) {
      return result;
    }
  }
LABEL_15:
  if (a1 == 2) {
    if ((v9 & 1) != 0) {
      return 0;
    }
    v21 = *(__int64**)(v4 + 48);
    if (*(__int64**)(v4 + 56) == v21) {
      return 0;
    }
    v22 = *v21;
    if (*v21 == 0) {
      return 0;
    }
    v18 = *(_QWORD*)(v22 + 400);
    if (v18 == 0 || *(unsigned __int8*)(v18 + 49) != (unsigned __int8)v8) {
      v23 = (__int64*)GameData_21c9868;
      v24 = GameData_21c9870;
      if (GameData_21c9868 == GameData_21c9870) {
        return 0;
      }
      while (1) {
        v18 = *v23;
        if (*(unsigned __int8*)(*v23 + 49) == (unsigned __int8)v8) {
          game_95eaa0((void*)((__int64)&v58_.v58), v22, *v23);
          if (((unsigned __int8)v58_.v58 & 2) != 0 ||
              ((unsigned __int16)v58_.v58 & 0x201) == 0x200) {
            break;
          }
        }
        ++v23;
        result = 0;
        if (v23 == (__int64*)v24) {
          return result;
        }
      }
    LABEL_55:
      v4 = *v3;
      if (*v3 == 0) {
        return 1;
      }
    }
  LABEL_56:
    *(_DWORD*)(v4 + 20) = *(unsigned __int16*)(v18 + 16);
    *(_DWORD*)(v4 + 16) = *(unsigned __int8*)(v18 + 49);
    ProcClassExaminerScene_146b330();
    return 1;
  }
  if (a1 == 1) {
    if ((v9 & 1) != 0) {
      return 0;
    }
    v16 = *(__int64**)(v4 + 48);
    if (*(__int64**)(v4 + 56) == v16) {
      return 0;
    }
    v17 = *v16;
    if (*v16 == 0) {
      return 0;
    }
    v18 = *(_QWORD*)(v17 + 400);
    if (v18 == 0 || *(unsigned __int8*)(v18 + 49) != (unsigned __int8)v8) {
      v19 = (__int64*)GameData_21c9868;
      v20 = GameData_21c9870;
      if (GameData_21c9868 == GameData_21c9870) {
        return 0;
      }
      while (1) {
        v18 = *v19;
        if (*(unsigned __int8*)(*v19 + 49) == (unsigned __int8)v8) {
          game_95eaa0((void*)((__int64)&v58_.v58), v17, *v19);
          if (((unsigned __int8)v58_.v58 & 2) != 0 ||
              ((unsigned __int16)v58_.v58 & 0x201) == 0x200) {
            break;
          }
        }
        ++v19;
        result = 0;
        if (v19 == (__int64*)v20) {
          return result;
        }
      }
      goto LABEL_55;
    }
    goto LABEL_56;
  }
  if (a1 == 0 && (v9 & 1) == 0) {
    v11 = *(__int64**)(v4 + 48);
    if (*(__int64**)(v4 + 56) != v11) {
      v12 = *v11;
      if (*v11 != 0) {
        v58_.v74 = nullptr;
        v58_.v75 = 0;
        v58_.v72 = 0;
        v58_.v73 = nullptr;
        v58_.v70 = nullptr;
        v58_.v71 = nullptr;
        v58_.v68 = nullptr;
        v58_.v69 = 0;
        v58_.v66 = 0;
        v58_.v67 = nullptr;
        v58_.v64 = nullptr;
        v58_.v65 = nullptr;
        v58_.v62 = nullptr;
        v58_.v63 = 0;
        v58_.v60 = 0;
        v58_.v61 = nullptr;
        v58_.v58 = nullptr;
        v58_.v59 = 0;
        UnitUtil_15e0640((__int64)&v58_.v58, v12, v8, 1, 0);
        v13 = (__int64*)v58_.v58;
        v14 = (__int64*)v58_.v59;
        if (v58_.v58 == (__int64 (**)(void))v58_.v59) {
        LABEL_58:
          v25 = v58_.v61;
          v26 = (__int64*)v58_.v62;
          if (v58_.v61 == (__int64*)v58_.v62) {
          LABEL_69:
            v28 = v58_.v64;
            v29 = v58_.v65;
            if (v58_.v64 == v58_.v65) {
            LABEL_80:
              v31 = v58_.v67;
              v32 = v58_.v68;
              if (v58_.v67 == v58_.v68) {
              LABEL_91:
                v34 = v58_.v70;
                v35 = v58_.v71;
                if (v58_.v70 == v58_.v71) {
                LABEL_102:
                  v37 = v58_.v73;
                  v38 = v58_.v74;
                  if (v58_.v73 == v58_.v74) {
                    v40 = 1;
                  LABEL_115:
                    v41 = (__int64*)fw_memory_g_heap_manager_ptr;
                    if (v58_.v73 != nullptr) {
                      v42 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
                      v58_.v74 = v58_.v73;
                      v43 = 128;
                      if (*(_QWORD*)(v42 + 200) == 0) {
                        v43 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v42 + v43);
                    }
                    if (v58_.v70 != nullptr) {
                      v44 = *v41;
                      v58_.v71 = v58_.v70;
                      v45 = 128;
                      if (*(_QWORD*)(v44 + 200) == 0) {
                        v45 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v44 + v45);
                    }
                    if (v58_.v67 != nullptr) {
                      v46 = *v41;
                      v58_.v68 = v58_.v67;
                      v47 = 128;
                      if (*(_QWORD*)(v46 + 200) == 0) {
                        v47 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v46 + v47);
                    }
                    if (v58_.v64 != nullptr) {
                      v48 = *v41;
                      v58_.v65 = v58_.v64;
                      v49 = 128;
                      if (*(_QWORD*)(v48 + 200) == 0) {
                        v49 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v48 + v49);
                    }
                    if (v58_.v61 != nullptr) {
                      v50 = *v41;
                      v58_.v62 = (__int64 (***)(void))v58_.v61;
                      v51 = 128;
                      if (*(_QWORD*)(v50 + 200) == 0) {
                        v51 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v50 + v51);
                    }
                    if (v58_.v58 != nullptr) {
                      v52 = *v41;
                      v58_.v59 = (__int64)v58_.v58;
                      v53 = 128;
                      if (*(_QWORD*)(v52 + 200) == 0) {
                        v53 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v52 + v53);
                    }
                    if (v1 != nullptr) {
                      v54 = v40;
                    }
                    else {
                      v54 = 1;
                    }
                    if ((v54 & 1) != 0) {
                      return 0;
                    }
                    v55 = *v3;
                    if (*v3 != 0) {
                      *(_DWORD*)(v55 + 20) = *((unsigned __int16*)v1 + 8);
                      *(_DWORD*)(v55 + 16) = *((unsigned __int8*)v1 + 49);
                      if (game_facility_FacilityView_instance_ != 0) {
                        v56 = *(_QWORD*)(game_facility_FacilityView_instance_ +
                                         248);
                        if (v56 != 0) {
                          v58_.v58 = GameData_20416b0;
                          v58_.v59 = game_facility_FacilityView_instance_;
                          v58_.v62 = &v58_.v58;
                          GameRoutine_1952d00(v56, 0, (__int64)&v58_.v58);
                          if (v58_.v62 == &v58_.v58) {
                            v57 = 4;
                            goto LABEL_152;
                          }
                          if (v58_.v62 != nullptr) {
                            v57 = 5;
                          LABEL_152:
                            ((__int64 (*)(__int64))(*v58_.v62)[v57])(
                                (__int64)v58_.v62);
                          }
                        }
                      }
                    }
                    return 1;
                  }
                  while (1) {
                    v1 = (__int64 (***)(void))*v37;
                    if (*(unsigned __int8*)(*v37 + 49) == (unsigned __int8)v8) {
                      game_95e2c0((void*)(v76), v12, *v37);
                      if ((v76[0] & 1) == 0 &&
                          ((v76[0] & 0xA00) != 0 || (v76[0] & 0xC0) == 0)) {
                        break;
                      }
                    }
                    if (++v37 == v38) {
                      v40 = 1;
                      goto LABEL_115;
                    }
                  }
                }
                else {
                  while (1) {
                    v1 = (__int64 (***)(void))*v34;
                    if (*(unsigned __int8*)(*v34 + 49) == (unsigned __int8)v8) {
                      game_95e2c0((void*)(v76), v12, *v34);
                      if ((v76[0] & 1) == 0 &&
                          ((v76[0] & 0xA00) != 0 || (v76[0] & 0xC0) == 0)) {
                        break;
                      }
                    }
                    if (++v34 == v35) {
                      goto LABEL_102;
                    }
                  }
                }
              }
              else {
                while (1) {
                  v1 = (__int64 (***)(void))*v31;
                  if (*(unsigned __int8*)(*v31 + 49) == (unsigned __int8)v8) {
                    game_95e2c0((void*)(v76), v12, *v31);
                    if ((v76[0] & 1) == 0 &&
                        ((v76[0] & 0xA00) != 0 || (v76[0] & 0xC0) == 0)) {
                      break;
                    }
                  }
                  if (++v31 == v32) {
                    goto LABEL_91;
                  }
                }
              }
            }
            else {
              while (1) {
                v1 = (__int64 (***)(void))*v28;
                if (*(unsigned __int8*)(*v28 + 49) == (unsigned __int8)v8) {
                  game_95e2c0((void*)(v76), v12, *v28);
                  if ((v76[0] & 1) == 0 &&
                      ((v76[0] & 0xA00) != 0 || (v76[0] & 0xC0) == 0)) {
                    break;
                  }
                }
                if (++v28 == v29) {
                  goto LABEL_80;
                }
              }
            }
          }
          else {
            while (1) {
              v1 = (__int64 (***)(void))*v25;
              if (*(unsigned __int8*)(*v25 + 49) == (unsigned __int8)v8) {
                game_95e2c0((void*)(v76), v12, *v25);
                if ((v76[0] & 1) == 0 &&
                    ((v76[0] & 0xA00) != 0 || (v76[0] & 0xC0) == 0)) {
                  break;
                }
              }
              if (++v25 == v26) {
                goto LABEL_69;
              }
            }
          }
        }
        else {
          while (1) {
            v1 = (__int64 (***)(void))*v13;
            if (*(unsigned __int8*)(*v13 + 49) == (unsigned __int8)v8) {
              game_95e2c0((void*)(v76), v12, *v13);
              if ((v76[0] & 1) == 0 &&
                  ((v76[0] & 0xA00) != 0 || (v76[0] & 0xC0) == 0)) {
                break;
              }
            }
            if (++v13 == v14) {
              goto LABEL_58;
            }
          }
        }
        v40 = 0;
        goto LABEL_115;
      }
    }
  }
  return 0;
}

__int64 game_facility_14682e0()
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  if (GameData_21f3ff8 == 0) {
    return 0;
  }
  v2 = *(__int64**)(GameData_21f3ff8 + 48);
  if (*(__int64**)(GameData_21f3ff8 + 56) == v2) {
    return 0;
  }
  v3 = *v2;
  if (v3 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v3 + 392);
  if (v4 == 0 || *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1392LL) == 0) {
    return 0;
  }
  if (((unsigned __int8)*(_DWORD*)(GameData_21f3ff8 + 24) &
       (unsigned __int8)~(unsigned __int8)(*(int*)(GameData_21f3ff8 + 24) >>
                                           31) &
       3) == 0 ||
      ((unsigned __int8)*(_DWORD*)(GameData_21f3ff8 + 24) &
       (unsigned __int8)~(unsigned __int8)(*(int*)(GameData_21f3ff8 + 24) >>
                                           31) &
       0xC) != 0) {
    return 0;
  }
  result = 1;
  v7 = game_facility_FacilityView_instance_;
  if (game_facility_FacilityView_instance_ != 0) {
    v8 = *(_QWORD*)(game_facility_FacilityView_instance_ + 248);
    *(_BYTE*)(game_facility_FacilityView_instance_ + 242) = 1;
    if (v8 != 0) {
      v10_.v10[0] = GameData_20416b0;
      v10_.v10[1] = v7;
      v10_.v11 = v10_.v10;
      GameRoutine_1952d00(v8, 0, (__int64)v10_.v10);
      if (v10_.v11 == v10_.v10) {
        v9 = 32;
      }
      else {
        if (v10_.v11 == nullptr) {
          return 1;
        }
        v9 = 40;
      }
      (*(void (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
      return 1;
    }
  }
  return result;
}

_QWORD* game_facility_1473920(__int64 a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int16 v11;
  _QWORD* result;
  __int64 v13;

  v1 = *(unsigned __int8*)(a1 + 152);
  if (*(_BYTE*)(a1 + 152) != 0) {
    v3 = *(_QWORD*)(a1 + 192);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
      v1 = *(unsigned __int8*)(a1 + 152);
    }
    v4 = *(_QWORD*)(a1 + 8);
    if (v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == v1) {
            v11 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v4;
            *(_WORD*)(a1 + 136) = v11 & 0xFF7F;
            v5 = *(unsigned __int8*)(a1 + 153);
            if (*(_BYTE*)(a1 + 153) == 0) {
              goto LABEL_25;
            }
            goto LABEL_11;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          break;
        }
        v4 += 64;
      }
    }
  }
  v5 = *(unsigned __int8*)(a1 + 153);
  if (*(_BYTE*)(a1 + 153) == 0) {
    goto LABEL_25;
  }
LABEL_11:
  v6 = *(_QWORD*)(a1 + 96);
  v7 = *(_QWORD*)(a1 + 104);
  v8 = ((v7 - v6) << 6) - 1;
  if (v7 == v6) {
    v8 = 0;
  }
  v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  if (v8 == v9) {
    GameRoutine_658d60((__int64*)(a1 + 88));
    v6 = *(_QWORD*)(a1 + 96);
    v9 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
  }
  *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v9 >> 9)) + 8 * (v9 & 0x1FF)) =
      *(_QWORD*)(a1 + 16);
  ++*(_QWORD*)(a1 + 128);
  v10 = *(_QWORD*)(a1 + 8);
  if (v10 != 0) {
    while (1) {
      if (*(_BYTE*)v10 == 2) {
        if (*(_DWORD*)(v10 + 32) == v5) {
          *(_QWORD*)(a1 + 16) = v10;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          break;
        }
      }
      else if (*(_BYTE*)v10 == 0) {
        break;
      }
      v10 += 64;
    }
  }
LABEL_25:
  result = *(_QWORD**)(a1 + 192);
  *(_WORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v13))((__int64)result);
}

__int64 game_facility_148b460(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
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
  __int64 v28;
  __int64 result;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = &game_facility_SceneCameraCharaViewerController_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      432, 16, 0);
  v4 = (__int64*)GameData_212c2a0;
  v5 = (__int64*)GameData_212c2b0;
  v6 = GameData_212e460[0];
  *(_QWORD*)(v3 + 112) = 1065353216;
  *(_QWORD*)(v3 + 120) = 0x100000000LL;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v5);
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v3 + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(v3 + 168) = 1092616192;
  v9 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4);
  v10 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4 + 8);
  *(_QWORD*)(v3 + 144) = 0x4110000041800000LL;
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v4);
  v12 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v4);
  *(_QWORD*)v3 = v6 + 2;
  *(_QWORD*)(v3 + 8) = 0;
  *(_QWORD*)(v3 + 224) = v9;
  *(_QWORD*)(v3 + 232) = v10;
  v13 = *v4;
  v14 = v4[1];
  *(_QWORD*)(v3 + 240) = v11;
  *(_QWORD*)(v3 + 248) = v12;
  v15 = *v5;
  v17 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v5);
  v16 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v5);
  *(_QWORD*)(v3 + 192) = v13;
  *(_QWORD*)(v3 + 200) = v14;
  v19 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4);
  v18 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8);
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5);
  v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 208) = v19;
  *(_QWORD*)(v3 + 216) = v18;
  v22 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  *(_QWORD*)(v3 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 280) = v20;
  *(_QWORD*)(v3 + 320) = v15;
  *(_QWORD*)(v3 + 328) = v22;
  v23 = v5[1];
  *(_QWORD*)(v3 + 256) = *v5;
  *(_QWORD*)(v3 + 264) = v23;
  v24 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v5);
  *(_QWORD*)(v3 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v5);
  *(_QWORD*)(v3 + 312) = v16;
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8);
  v25 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 16);
  v27 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v5);
  *(_QWORD*)(v3 + 288) = v25;
  *(_QWORD*)(v3 + 296) = v7;
  *(_QWORD*)(v3 + 336) = v21;
  *(_QWORD*)(v3 + 344) = v26;
  *(_QWORD*)(v3 + 368) = v17;
  *(_QWORD*)(v3 + 376) = v27;
  *(_OWORD*)(v3 + 48) = GameData_1a83090;
  *(_OWORD*)(v3 + 64) = (__typeof__(*(_OWORD*)(v3 + 64))){0};
  *(_OWORD*)(v3 + 80) = GameData_1a83610;
  *(_OWORD*)(v3 + 96) = (__typeof__(*(_OWORD*)(v3 + 96))){0};
  v28 = GameData_212e438;
  *(_DWORD*)(v3 + 152) = 0;
  *(_BYTE*)(v3 + 164) = 1;
  *(_DWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 352) = v8;
  *(_QWORD*)(v3 + 360) = v24;
  *(_QWORD*)(v3 + 408) = 0;
  *(_QWORD*)(v3 + 416) = 0;
  *(_QWORD*)(v3 + 384) = 0;
  *(_QWORD*)(v3 + 392) = 0;
  *(_QWORD*)(v3 + 156) = 0x469C40003DCCCCCDLL;
  *(_BYTE*)(v3 + 165) = 1;
  *(_QWORD*)(v3 + 424) = 1023;
  *(_QWORD*)(v3 + 392) = 1023;
  *(_QWORD*)(v3 + 400) = 0;
  *(_QWORD*)(a1 + 64) = v3;
  *(_QWORD*)(a1 + 93) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(v3 + 32) = v28 + 16;
  result = v3 + 32;
  *(_QWORD*)(a1 + 56) = result;
  v30 = GameData_212ed08[0];
  if (*GameData_212ed08[0] == 0) {
    v31 = fw_memory_HeapManager_Allocate(*v2, 280, 16, 0);
    v32 = v31;
    if (*v30 == 0) {
      *v30 = v31;
      *GameData_212edf8 = 1;
    }
    v33 = GameData_212edf0;
    *(_QWORD*)(v31 + 16) = 0;
    *(_QWORD*)(v31 + 24) = 0;
    *(_QWORD*)(v31 + 32) = 0;
    *(_QWORD*)(v31 + 40) = 0;
    *(_QWORD*)(v31 + 48) = 0;
    *(_QWORD*)(v31 + 56) = 0;
    *(_QWORD*)(v31 + 64) = 0;
    *(_QWORD*)(v31 + 72) = 0;
    *(_QWORD*)(v31 + 80) = 0;
    *(_QWORD*)(v31 + 88) = 0;
    *(_QWORD*)(v31 + 96) = 0;
    *(_QWORD*)(v31 + 104) = 0;
    *(_QWORD*)(v31 + 112) = 0;
    *(_QWORD*)(v31 + 120) = 0;
    *(_QWORD*)(v31 + 128) = 0;
    *(_QWORD*)(v31 + 136) = 0;
    *(_QWORD*)(v31 + 144) = 0;
    *(_QWORD*)(v31 + 152) = 0;
    *(_QWORD*)(v31 + 160) = 0;
    *(_QWORD*)(v31 + 168) = 0;
    *(_QWORD*)(v31 + 176) = 0;
    *(_QWORD*)(v31 + 184) = 0;
    *(_QWORD*)(v31 + 192) = 0;
    *(_QWORD*)(v31 + 200) = 0;
    *(_QWORD*)v31 = v33 + 2;
    *(_QWORD*)(v31 + 8) = 0;
    v34 = GameData_212d2f0;
    *(_DWORD*)(v31 + 216) = 0;
    *(_DWORD*)(v31 + 232) = 0;
    *(_BYTE*)(v31 + 240) = 0;
    v34 += 2;
    *(_QWORD*)(v31 + 244) = 0;
    *(_QWORD*)(v31 + 252) = 0;
    *(_BYTE*)(v31 + 260) = 0;
    *(_QWORD*)(v31 + 208) = v34;
    *(_QWORD*)(v31 + 224) = v34;
    v35 = (__int64*)GameData_212d310;
    *(_QWORD*)(v31 + 264) = 0;
    *(_WORD*)(v31 + 272) = 0;
    v36 = *v35;
    if (v36 == 0 || ((v37 = *(_DWORD*)(v36 + 8)) != 3 ? (v38 = 12) : (v38 = 14),
                     v37 == 2)) {
      v38 = 13;
    }
    GameRoutine_1553130(v38);
    v39 = *(_QWORD*)v32;
    *v30 = v32;
    *(_BYTE*)(v32 + 272) = 1;
    result = (*(__int64 (**)(__int64))(v39 + 16))(v32);
    *(_BYTE*)(a1 + 100) = 1;
  }
  return result;
}

__int64* game_facility_148c760(__int64* result, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
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
  int v43;
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
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD v64[9];
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int8 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  _QWORD v96[8];
  int v97;
  char v98;
  int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  __int64 v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  __int64 v115;
  int v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  char v122;
  char v123;
  char v124;
  int v125;
  __int64 v126;

  v3 = (_QWORD*)result[2];
  v4 = (_QWORD*)result[3];
  v5 = a3;
  v7 = result;
  if (v4 == v3) {
    v8 = result + 6;
    v4 = (_QWORD*)result[2];
  }
  else {
    v8 = result + 6;
    v9 = result[5];
    v10 = &v3[v9 >> 4];
    v11 = (_QWORD*)(*v10 + 368 * (v9 & 0xF));
    v12 = v3[(result[6] + v9) >> 4] +
          368LL * ((*((_DWORD*)result + 12) + (_DWORD)v9) & 0xF);
    if (v11 != (_QWORD*)v12) {
      v13 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v14 = v11[30];
        if (v14 != 0) {
          v15 = *v13;
          v11[31] = v14;
          if (*(_QWORD*)(v15 + 200) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v15 + v16);
        }
        v17 = v11[29];
        if (v17 != 0) {
          std___1___shared_weak_count___release_weak(v17);
        }
        result = (__int64*)v11[15];
        if (result != nullptr) {
          result = (__int64*)std___1___shared_weak_count___release_weak(result);
        }
        v11 += 46;
        if ((_UNKNOWN*)((char*)v11 - *v10) == ((_UNKNOWN*)0x1700LL)) {
          v18 = (_QWORD*)v10[1];
          ++v10;
          v11 = v18;
        }
      } while (v11 != (_QWORD*)v12);
      v3 = (_QWORD*)v7[2];
      v4 = (_QWORD*)v7[3];
      v5 = a3;
    }
  }
  *v8 = 0;
  v19 = v4 - v3;
  if (v19 >= 3) {
    v20 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v3 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v20 + v21);
        v3 = (_QWORD*)v7[2];
        v4 = (_QWORD*)v7[3];
      }
      v7[2] = (__int64)++v3;
      v19 = v4 - v3;
    } while (v19 > 2);
  }
  if (v19 == 1) {
    v22 = 8;
  }
  else {
    if (v19 != 2) {
      goto LABEL_31;
    }
    v22 = 16;
  }
  v7[5] = v22;
LABEL_31:
  if (a2 != 0) {
    v97 = 0;
    memset(v96, 0, sizeof(v96));
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v98 = 1;
    v104 = 0;
    v105 = nullptr;
    v106 = 0;
    v108 = 0;
    v115 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v113 = 0;
    v114 = 0;
    v107 = 1065353216;
    v116 = 1065353216;
    v122 = 0;
    v123 = 0;
    v124 = 0;
    v125 = 0;
    v117 = 0;
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v126 = 0x3F8000003F800000LL;
    game_facility_148cc30(v96, a2, v5);
    v23 = *v7;
    v98 = 0;
    v24 = (*(__int64 (**)(__int64*))(v23 + 40))(v7);
    v25 = GameRoutine_148b140(v64, v96, v24, 0x1.0000000000000p+0f);
    v26 = v7[2];
    v27 = v7[3];
    v28 = 2 * (v27 - v26) - 1;
    if (v27 == v26) {
      v28 = 0;
    }
    v29 = v7[6] + v7[5];
    if (v28 == v29) {
      v25 = GameRoutine_148e480(v7 + 1);
      v26 = v7[2];
      v29 = v7[6] + v7[5];
    }
    v30 = v64[1];
    v31 = *(_QWORD*)(v26 + 8 * (v29 >> 4)) + 368 * (v29 & 0xF);
    v32 = v64[2];
    v33 = v64[3];
    *(_QWORD*)v31 = v64[0];
    *(_QWORD*)(v31 + 8) = v30;
    v34 = v64[4];
    v35 = v64[5];
    *(_QWORD*)(v31 + 16) = v32;
    *(_QWORD*)(v31 + 24) = v33;
    v37 = v64[6];
    v36 = v64[7];
    *(_QWORD*)(v31 + 32) = v34;
    *(_QWORD*)(v31 + 40) = v35;
    v38 = v64[8];
    *(_QWORD*)(v31 + 48) = v37;
    *(_QWORD*)(v31 + 56) = v36;
    LODWORD(v36) = v65;
    *(_QWORD*)(v31 + 64) = v38;
    *(_DWORD*)(v31 + 72) = v36;
    v39 = v67;
    *(_QWORD*)(v31 + 80) = v66;
    *(_QWORD*)(v31 + 88) = v39;
    v40 = v69;
    *(_QWORD*)(v31 + 96) = v68;
    *(_QWORD*)(v31 + 104) = v40;
    v41 = v71;
    *(_QWORD*)(v31 + 112) = v70;
    *(_QWORD*)(v31 + 120) = v41;
    if (v41 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                                memory_order_relaxed);
    }
    v42 = v73;
    v43 = v74;
    *(_QWORD*)(v31 + 128) = v72;
    *(_QWORD*)(v31 + 136) = v42;
    v44 = v75;
    v45 = v76;
    *(_DWORD*)(v31 + 144) = v43;
    *(_QWORD*)(v31 + 160) = v44;
    *(_QWORD*)(v31 + 168) = v45;
    v46 = v80;
    *(_QWORD*)(v31 + 192) = v79;
    *(_QWORD*)(v31 + 200) = v46;
    *(_QWORD*)(v31 + 208) = v81;
    *(_DWORD*)(v31 + 216) = v82;
    v47 = v78;
    *(_QWORD*)(v31 + 176) = v77;
    *(_QWORD*)(v31 + 184) = v47;
    v48 = v84;
    *(_QWORD*)(v31 + 224) = v83;
    *(_QWORD*)(v31 + 232) = v48;
    if (v48 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 16), 1u,
                                memory_order_relaxed);
    }
    v50 = v85;
    v49 = v86;
    *(_QWORD*)(v31 + 248) = 0;
    *(_QWORD*)(v31 + 256) = 0;
    v51 = v49 - v50;
    *(_QWORD*)(v31 + 240) = 0;
    if (v49 != v50) {
      if (v51 < 0) {
        GameRoutine_cdcc10(v25);
      }
      v52 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v49 - v50, 16, 0);
      v53 = v52 + v51;
      v54 = v51 & 0x7FFFFFFFFFFFFFF0LL;
      v55 = v52;
      *(_QWORD*)(v31 + 240) = v52;
      *(_QWORD*)(v31 + 248) = v52;
      *(_QWORD*)(v31 + 256) = v53;
      memcpy(v52, v50, v54);
      *(_QWORD*)(v31 + 248) = v55 + v54;
    }
    v56 = v89;
    *(_BYTE*)(v31 + 272) = 0;
    *(_BYTE*)(v31 + 288) = 0;
    if (v56 == 1) {
      v57 = v88;
      *(_QWORD*)(v31 + 272) = v87;
      *(_QWORD*)(v31 + 280) = v57;
      *(_BYTE*)(v31 + 288) = 1;
    }
    v58 = v91;
    v59 = v94;
    *(_QWORD*)(v31 + 304) = v90;
    *(_QWORD*)(v31 + 312) = v58;
    v60 = v92;
    *(_QWORD*)(v31 + 336) = v93;
    *(_QWORD*)(v31 + 344) = v59;
    *(_DWORD*)(v31 + 352) = v95;
    *(_QWORD*)(v31 + 320) = game_facility_SceneInterpolatorFloat_vtable;
    *(_QWORD*)(v31 + 328) = v60;
    ++v7[6];
    if (v50 != 0) {
      v61 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v61 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
    }
    if (v48 != 0) {
      std___1___shared_weak_count___release_weak(v48);
    }
    if (v41 != 0) {
      std___1___shared_weak_count___release_weak(v41);
    }
    if (v119 != 0) {
      v120 = v119;
      v62 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v62 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v62);
    }
    if (v118 != 0) {
      std___1___shared_weak_count___release_weak(v118);
    }
    result = v105;
    if (v105 != nullptr) {
      return (__int64*)std___1___shared_weak_count___release_weak(v105);
    }
  }
  return result;
}

__int64 game_facility_148d310(__int64 result, _QWORD* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  bool v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  float v29;
  _QWORD v30[2];
  __int64* v31;
  __int64 v32;
  __int64 v33;

  if (a2 == nullptr) {
    return result;
  }
  v3 = a2[24];
  v4 = a2[25];
  v7 = result;
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v9 = *(__int64**)(v3 + 16);
  v8 = *(_QWORD*)(v3 + 24);
  v10 = *(float*)&a3;
  v31 = v9;
  v32 = v8;
  game_13f9200_alt1((void*)(v30), &v31);
  v11 = a2[1];
  v12 = a2[24];
  v13 = a2[25];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v14 = *(float*)(v12 + 32);
  v15 = (a3 & 0x100000000LL) == 0;
  v16 = a2[18];
  v17 = a2[19];
  v18 = v14 + *(float*)(*(_QWORD*)GameData_212dce8 + 128LL);
  if (v15) {
    v10 = v18;
  }
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
  }
  v19 = *(__int64**)(v16 + 8);
  if (v19 == nullptr) {
  LABEL_16:
    v21 = 0;
    v31 = v19;
    v32 = 0;
    v22 = 1;
    v23 = a2[18];
    v24 = a2[19];
    if (v24 == 0) {
      goto LABEL_14;
    }
  LABEL_17:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                              memory_order_relaxed);
    game_1016400(v7, 1, v30, v11 + 336, &v31, *(_QWORD*)(v23 + 112), 1, v10);
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      std___1___shared_weak_count___release_weak(v24);
    }
    goto LABEL_19;
  }
  v20 = v19[1];
  v33 = 0;
  v31 = &v33;
  GameRoutine_1469c40(&v31, &v31, v20);
  if (v33 == 0) {
    v19 = nullptr;
    goto LABEL_16;
  }
  v19 = *(__int64**)((char*)((_UNKNOWN*)0x188LL) + v33);
  v21 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v33 + 8);
  if (v21 == 0) {
    goto LABEL_16;
  }
  v22 = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                            memory_order_relaxed);
  v31 = v19;
  v32 = v21;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                            memory_order_relaxed);
  v23 = a2[18];
  v24 = a2[19];
  if (v24 != 0) {
    goto LABEL_17;
  }
LABEL_14:
  game_1016400(v7, 1, v30, v11 + 336, &v31, *(_QWORD*)(v23 + 112), 1, v10);
LABEL_19:
  if (v32 != 0) {
    std___1___shared_weak_count___release_weak(v32);
  }
  if ((v22 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v26 = a2[18];
  v25 = a2[19];
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                              memory_order_relaxed);
  }
  v27 = *(_QWORD*)(v7 + 232);
  *(_QWORD*)(v7 + 224) = v26;
  *(_QWORD*)(v7 + 232) = v25;
  if (v27 != 0) {
    std___1___shared_weak_count___release_weak(v27);
  }
  v28 = *(float*)(v7 + 316);
  v29 = *(float*)(v7 + 312);
  if (v28 <= v29) {
    if (v28 < v29) {
      v28 = v28 + 0.0f;
    }
  }
  else if (v28 < v29) {
    v28 = *(float*)(v7 + 312);
  }
  *(float*)(v7 + 316) = v28;
  GameRoutine_1016910(v7, 0.0f);
  result = GameRoutine_1016b40(v7, 0.0f);
  if (v25 != 0) {
    return std___1___shared_weak_count___release_weak(v25);
  }
  return result;
}

__attribute__((swiftcall)) void game_facility_1498970(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 result;

  v4 = a1 + 16;
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *a4 = v9;
  a4[1] = v4;
  a4[2] = 0;
  *v9 = 0;
  v9[1] = 0;
  v10 = strlen(a2);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v10);
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = fw_memory_HeapManager_Allocate(*v8, v13, 16, 0);
    v9[3] = v11;
    v9[4] = v12;
    v9[2] = v13 | 1;
    goto LABEL_9;
  }
  v12 = (__int64)v9 + 17;
  *((_BYTE*)v9 + 16) = 2 * v10;
  if (v10 != 0) {
  LABEL_9:
    memcpy(v12, a2, v11);
  }
  *(_BYTE*)(v12 + v11) = 0;
  v9[6] = GameData_2043e48;
  v9[7] = a3;
  *((_BYTE*)a4 + 16) = 1;
  v14 = *a4;
  v9[10] = v9 + 6;
  v15 = *(unsigned __int8*)(v14 + 16);
  v16 = (v15 & 1) == 0;
  v17 = v15 >> 1;
  if (v16) {
    v18 = v14 + 17;
  }
  else {
    v18 = *(_QWORD*)(v14 + 32);
  }
  if (v16) {
    v19 = v17;
  }
  else {
    v19 = *(_QWORD*)(v14 + 24);
  }
  result = std___1___hash_memory(v18, v19);
  *(_QWORD*)(v14 + 8) = result;
  {
    result;
    return;
  }
}

__int64 game_facility_1499450(__int64* a1, __int64 a2, long double a3)
{
  __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v11;

  v3 = *a1;
  v5 = *(unsigned __int8*)(*a1 + 24);
  v6 = *(_QWORD*)(*a1 + 32);
  if ((v5 & 1) == 0) {
    v6 = v5 >> 1;
  }
  if (v6 == 0) {
    goto LABEL_12;
  }
  v7 = *(_QWORD*)(v3 + 40);
  v8 = v3 + 25;
  v11 = nullptr;
  if ((v5 & 1) != 0) {
    v9 = v7;
  }
  else {
    v9 = v8;
  }
  strtof_alt1(v9, &v11);
  if (*v11 != 0) {
    if (*v11 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v11) != 0) {
        *(float*)&a3 = 0.0;
      }
      return SceneCharacter_14019b0(a2, a3);
    }
  LABEL_12:
    *(_QWORD*)&a3 = 0;
  }
  return SceneCharacter_14019b0(a2, a3);
}

__attribute__((swiftcall)) void game_facility_14995e0(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64* a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 result;

  v4 = a1 + 16;
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *a4 = v9;
  a4[1] = v4;
  v10 = *a2;
  v11 = v9;
  a4[2] = 0;
  *v9 = 0;
  v9[1] = 0;
  v12 = strlen(v10);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v12);
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (v12 | 7) + 1;
    }
    v14 = fw_memory_HeapManager_Allocate(*v8, v15, 16, 0);
    v11[3] = v13;
    v11[4] = v14;
    v11[2] = v15 | 1;
    goto LABEL_9;
  }
  v14 = (__int64)v11 + 17;
  *((_BYTE*)v11 + 16) = 2 * v12;
  if (v12 != 0) {
  LABEL_9:
    memmove(v14, v10, v13);
  }
  *(_BYTE*)(v14 + v13) = 0;
  v11[6] = GameData_2043e48;
  v11[7] = a3;
  *((_BYTE*)a4 + 16) = 1;
  v16 = *a4;
  v11[10] = v11 + 6;
  v17 = *(unsigned __int8*)(v16 + 16);
  v18 = (v17 & 1) == 0;
  v19 = v17 >> 1;
  if (v18) {
    v20 = v16 + 17;
  }
  else {
    v20 = *(_QWORD*)(v16 + 32);
  }
  if (v18) {
    v21 = v19;
  }
  else {
    v21 = *(_QWORD*)(v16 + 24);
  }
  result = std___1___hash_memory(v20, v21);
  *(_QWORD*)(v16 + 8) = result;
  {
    result;
    return;
  }
}

__int64 game_facility_15e8430(__int64 a1)
{
  __int64 v2;
  signed int v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  struct {
    __int64 v13;
    __int64 v14;
    __int64* v15;
    unsigned __int64 v16;
    unsigned __int64 v17;
    unsigned __int64 v18;
    int v19;
    int v20;
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
  } v13_;

  ui_LayoutAccessor_SetPaneVisible(a1 + 952, (__int64)"L_Num", 0);
  v2 = (*(_QWORD*)(a1 + 1192) - *(_QWORD*)(a1 + 1184)) >> 3;
  v3 = v2 + ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1192LL))(a1) & 1);
  if (v3 >= 2) {
    ui_LayoutAccessor_SetPaneVisible(a1 + 952, (__int64)"L_Num", 1);
    ui_LayoutAccessor_SetPaneVisible(a1 + 952, (__int64)"L_Num/L_KeyHelp", 0);
    v13_.v21 = -1;
    v13_.v22 = -1;
    v13_.v23 = -1;
    v13_.v24 = -1;
    v4 = *msg_MessageManager_instance__ptr[0];
    v13_.v25 = -1;
    v13_.v26 = -1;
    v13_.v27 = -1;
    v13_.v28 = -1;
    v13_.v29 = -1;
    v13_.v30 = -1;
    v13_.v31 = -1;
    v13_.v32 = -1;
    v13_.v15 = GameData_212e348 + 2;
    v13_.v16 = 0xFFFF0001FFFF0000LL;
    v13_.v17 = 0xFFFF0004FFFF0002LL;
    v13_.v18 = 0xFFFF0006FFFF0005LL;
    v13_.v33 = 8;
    v13_.v19 = -65529;
    v13_.v20 = -65528;
    v5 = GameRoutine_a4dbe0(v4, "MID_Menu_ParticipantsNum", 0);
    if (v5 != nullptr) {
      v6 = (__int64)v5;
      v7 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 952),
                                         (__int64)"L_Num/T_Txt");
      if (v7 != 0) {
        GameRoutine_156c5d0(v7, v6, 0);
      }
    }
    LayoutAccessor_1560070((void*)(&v13_.v13), (__int64*)(a1 + 952),
                           (__int64)"L_Num");
    GameRoutine_15940f0((__int64)&v13_.v13, 0, v3);
    if (v13_.v14 != 0) {
      std___1___shared_weak_count___release_weak(v13_.v14);
    }
    v8 = *(_DWORD*)(a1 + 1208);
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1192LL))(a1);
    v10 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 952),
                                     (__int64)"L_Num/T_Num");
    if (v10 != 0) {
      v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d690, 0);
      if (v11 != 0) {
        GameRoutine_156c910(v11, (__int64)"%d", 1, v8 + (v9 & 1u));
      }
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
  if ((result & 1) == 0) {
    return ui_LayoutAccessor_SetPaneVisible(a1 + 848, (__int64)"L_Reliance", 0);
  }
  return result;
}

__attribute__((swiftcall)) void game_facility_1663900(PSEUDO_X8 x8_, __int64 a1)
{
  unsigned __int8 a2 = (unsigned __int8)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;

  v2 = *(unsigned __int8*)(a1 + 83);
  if (*(_BYTE*)(a1 + 83) != 0) {
    v6 = game_hub_kPermitFlags[v2];
    v5 = game_HashString_alt2(v6);
    a2 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v3 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v5);
      a2 = v3 != 0 && *(_DWORD*)(v3 + 32) != 0;
    }
  }
  {
    ((_DWORD)v2 != 0) & a2;
    return;
  }
}

__int64 game_facility_17043b0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _BYTE v7[200];

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 3;
  }
  v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_2131c80[0], -2);
  if (v3 == 0 || (int)((*(_QWORD*)(v3 + 16) - *(_QWORD*)(v3 + 8)) >> 3) < 1) {
    return 3;
  }
  game_facility_SellController_Clear();
  v4 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                      GameData_212e000[0], 0);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1136LL))(v4);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1120LL))(v4);
  snd_Fade_Fade_10c830(v7, 0.0f);
  snd_play_ff2d0((void*)(&v6), "SE_SYS_Multiple_CancelAll",
                 "SE_SYS_Multiple_CancelAll", v7, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v7);
  return 13;
}

__int64 game_facility_17045b0(_QWORD* a1)
{
  __int64 result;
  _QWORD* v3;
  _BYTE* v4;
  unsigned __int16* v5;
  __int64* v6;
  __int64 v7;
  int v8;
  int v9;
  unsigned __int16* v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  char* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  _QWORD* v21;
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  signed __int64 v36;
  const char* v37;
  __int64 v38;
  _BYTE v39[200];

  result = *(_QWORD*)(*a1 + 336LL);
  if (result == 0) {
    return result;
  }
  v3 = a1;
  result = __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
  if (result == 0) {
    return result;
  }
  v4 = (_BYTE*)result;
  v5 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)result + 560LL))(
      result);
  v6 = GameData_212c878[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v5);
  v8 = *(unsigned __int8*)(v7 + 72);
  v9 = *(_DWORD*)(v7 + 336) & 3;
  if (v8 == 15 || v9 != 0) {
    return 0;
  }
  v11 = (unsigned __int16*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v4 + 560LL))(v4);
  if ((*((_BYTE*)v11 + 3) & 0x10) != 0) {
    return 0;
  }
  v12 = *v11;
  result = 0;
  v13 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8 * v12);
  if ((*(_BYTE*)(v13 + 336) & 4) != 0 ||
      ((1LL << *(_BYTE*)(v13 + 72)) & 0xE01F) == 0) {
    return result;
  }
  if (v4[88] != 1) {
    v20 = v3[1];
    v21 = (_QWORD*)v3[2];
    v22 = (char*)v21 - v20;
    v23 = ((__int64)v21 - v20) >> 3;
    if (v23 <= 0x62) {
      v24 = v3[3];
      v25 = v3;
      if ((unsigned __int64)v21 >= v24) {
        v27 = v24 - v20;
        if (v27 >> 2 <= v23 + 1) {
          v28 = v23 + 1;
        }
        else {
          v28 = v27 >> 2;
        }
        if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
          v29 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v29 = v28;
        }
        if (v29 >> 61 != 0) {
          GameRoutine_60a210(0);
        }
        v30 = fw_memory_g_heap_manager_ptr;
        v31 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v29, 16, 0);
        v32 = v31 + 8 * v29;
        v33 = (char*)v21 - v20;
        v34 = (__int64)&v22[v31 + -8 * v23];
        *(_QWORD*)&v22[v31] = v4;
        v26 = (__int64)&v22[v31 + 8];
        memcpy(v34, v20, v33);
        v3[1] = v34;
        v3[2] = v26;
        v3[3] = v32;
        if (v20 != 0) {
          v35 = 128;
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v30 + v35);
        }
        v25 = v3;
      }
      else {
        *v21 = v4;
        v26 = (__int64)(v21 + 1);
      }
      v25[2] = v26;
      goto LABEL_49;
    }
    return 0;
  }
  v15 = (char*)v3[1];
  v14 = (char*)v3[2];
  if (v15 != v14) {
    v16 = v3;
    v17 = v14 - v15 - 8;
    if ((~(_BYTE)v17 & 0x18) != 0) {
      v18 = ((unsigned __int8)((unsigned int)v17 >> 3) + 1) & 3;
      while (v4 != *(_BYTE**)v15) {
        v15 += 8;
        if (--v18 == 0) {
          goto LABEL_17;
        }
      }
      goto LABEL_46;
    }
  LABEL_17:
    if (v17 >= 0x18) {
      v15 += 16;
      while (1) {
        if (v4 == *((_BYTE**)v15 - 2)) {
          v15 -= 16;
          goto LABEL_46;
        }
        if (v4 == *((_BYTE**)v15 - 1)) {
          v15 -= 8;
          goto LABEL_46;
        }
        if (v4 == *(_BYTE**)v15) {
          goto LABEL_46;
        }
        if (v4 == *((_BYTE**)v15 + 1)) {
          break;
        }
        v19 = v15 + 16;
        v15 += 32;
        if (v19 == v14) {
          goto LABEL_49;
        }
      }
      v15 += 8;
    LABEL_46:
      v36 = v14 - (v15 + 8);
      if (v14 != v15 + 8) {
        memmove(v15, v15 + 8, v14 - (v15 + 8));
        v16 = v3;
      }
      v16[2] = &v15[v36];
    }
  }
LABEL_49:
  if (v4[88] != 0) {
    v37 = "SE_SYS_Multiple_Cancel";
  }
  else {
    v37 = "SE_SYS_Multiple_Select";
  }
  snd_Fade_Fade_10c830(v39, 0.0f);
  snd_play_ff2d0((void*)(&v38), v37, v37, v39, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v39);
  GameRoutine_1872af0(v4, (v4[88] & 1) == 0);
  return 1;
}

__int64 game_facility_1704ae0(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64* v11;
  _DWORD* v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64 v24;
    __int64* v25;
    __int64 v26;
  } v24_;
  int v27;

  v3 = *(__int64**)(result + 8);
  v2 = *(__int64**)(result + 16);
  if ((int)((unsigned __int64)((char*)v2 - (char*)v3) >> 3) < 1) {
    result = *(_QWORD*)(*(_QWORD*)result + 336LL);
    if (result != 0) {
      result =
          __dynamic_cast(result, GameData_212e008[0], GameData_212e010[0], 0);
      if (result != 0) {
        v21 = result;
        v22 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 560LL))(result);
        v23 = *(_QWORD*)(a2 + 32);
        LODWORD(v24_.v24) = *(_DWORD*)(v21 + 84);
        if (v23 == 0) {
          goto LABEL_29;
        }
        return (*(__int64 (**)(__int64, __int64, __int64*))(
            *(_QWORD*)v23 + 48LL))(v23, v22, &v24_.v24);
      }
    }
  }
  else {
    v24_.v26 = 0;
    v24_.v24 = (__int64)&v24_.v24;
    v24_.v25 = &v24_.v24;
    if (v3 != v2) {
      v5 = GameData_212e008[0];
      v6 = GameData_212e010[0];
      v7 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        result = *v3;
        if (*v3 != 0) {
          result = __dynamic_cast(result, v5, v6, 0);
          if (result != 0) {
            v11 = v24_.v25;
            v12 = (_DWORD*)result;
            if (v24_.v25 != &v24_.v24) {
              while (1) {
                v13 = (_QWORD*)v11[2];
                result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v12 + 560LL))(v12);
                if (*v13 == *(_QWORD*)result) {
                  break;
                }
                v11 = (__int64*)v11[1];
                if (v11 == &v24_.v24) {
                  goto LABEL_4;
                }
              }
            }
            if (v11 == &v24_.v24) {
            LABEL_4:
              v8 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v12 + 560LL))(v12);
              v9 = v12[21];
              result = fw_memory_HeapManager_Allocate_alt1(*v7, 32, 16, 0);
              v10 = v24_.v24;
              *(_QWORD*)(result + 8) = &v24_.v24;
              *(_QWORD*)(result + 16) = v8;
              *(_DWORD*)(result + 24) = v9;
              v24_.v24 = result;
              *(_QWORD*)result = v10;
              *(_QWORD*)(v10 + 8) = result;
              ++v24_.v26;
            }
            else {
              *((_DWORD*)v11 + 6) += v12[21];
            }
          }
        }
        ++v3;
      } while (v3 != v2);
      v14 = v24_.v25;
      if (v24_.v25 != &v24_.v24) {
        while (1) {
          v15 = v14[2];
          v16 = *(_QWORD*)(a2 + 32);
          v27 = *((_DWORD*)v14 + 6);
          if (v16 == 0) {
            break;
          }
          result = (*(__int64 (**)(__int64, __int64, int*))(
              *(_QWORD*)v16 + 48LL))(v16, v15, &v27);
          v14 = (__int64*)v14[1];
          if (v14 == &v24_.v24) {
            goto LABEL_17;
          }
        }
      LABEL_29:
        GameRoutine_60a310_alt1();
      }
    LABEL_17:
      if (v24_.v26 != 0) {
        v17 = v24_.v25;
        v18 = *(__int64**)(v24_.v24 + 8);
        *(_QWORD*)(*v24_.v25 + 8) = v18;
        *v18 = *v17;
        v24_.v26 = 0;
        if (v17 != &v24_.v24) {
          do {
            v19 = (__int64*)v17[1];
            if (*(_QWORD*)(*v7 + 200) != 0) {
              v20 = 128;
            }
            else {
              v20 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v7 + v20);
            v17 = v19;
          } while (v19 != &v24_.v24);
        }
      }
    }
  }
  return result;
}

__int64 game_facility_1704d80(_QWORD* a1)
{
  char* v1;
  char* v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (char*)a1[1];
  v1 = (char*)a1[2];
  if ((int)((unsigned __int64)(v1 - v2) >> 3) < 1) {
    v6 = *(_QWORD*)(*a1 + 336LL);
    if (v6 != 0) {
      v7 = __dynamic_cast(v6, GameData_212e008[0], &GameData_20a7710, 0);
      if (v7 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 608LL))(v7);
      }
    }
  }
  else {
    if (v2 != v1) {
      GameRoutine_1705460(a1[1], v1, (2 * __clz((v1 - v2) >> 3)) ^ 0x7E, 1);
      v2 = (char*)a1[1];
      v1 = (char*)a1[2];
    }
    if (v2 != v1) {
      v4 = GameData_212e008[0];
      do {
        if (*(_QWORD*)v2 != 0) {
          v5 = __dynamic_cast(*(_QWORD*)v2, v4, &GameData_20a7710, 0);
          if (v5 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 608LL))(v5);
          }
        }
        v2 += 8;
      } while (v2 != v1);
    }
  }
  return game_facility_SellController_Clear_alt1(a1);
}

__int64 game_facility_1866680(__int64 result, __int64 a2, __int64 a3,
                              _QWORD* a4, char a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;

  *(_WORD*)(result + 16) = 0;
  *(_DWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_BYTE*)(result + 88) = 0;
  *(_QWORD*)(result + 112) = a3;
  *(_QWORD*)(result + 120) = a4;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_DWORD*)(result + 84) = 1;
  *(_QWORD*)result = &game_facility_ItemShopMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 96) = GameData_20f2048;
  *(_QWORD*)(result + 104) = a2;
  if (a4[1] == *a4) {
    *(_QWORD*)(result + 128) = 0;
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)*a4 + 48LL);
    *(_QWORD*)(result + 128) = 0;
    if (v5 != 0) {
      v6 = *(unsigned __int16*)(v5 + 16);
      *(_DWORD*)(result + 132) = 1;
      *(_WORD*)(result + 128) = v6;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v6) +
                    73LL) == 17) {
        v7 = result;
        v8 = a5;
        nn_os_LockMutex(&game_g_random_mutex);
        v9 = game_map_MapRandom_instance__ptr[0];
        v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v9 + 1) = v10;
        v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
        nn_os_UnlockMutex_alt1(&game_g_random_mutex);
        result = v7;
        a5 = v8;
        *(_DWORD*)(v7 + 132) =
            *(_DWORD*)(v7 + 132) & 0xFFFFC00F |
            (16 *
             (((16 * (v13 - 1000 * ((v13 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
    }
  }
  *(_WORD*)(result + 136) = a5 & 1;
  return result;
}

__int64 game_facility_1873410(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  _BOOL4 v16;
  char v17;
  __int64* v19;
  __int64 v20;

  GameRoutine_1873150(a1);
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v19;
    if (v19 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v7 = LayoutAccessor_155fbe0(v6, "L_Material");
  v8 = (*(__int64 (**)(_QWORD*))(*a1 + 608LL))(a1);
  v20 = 0;
  if (v8 != 0) {
    v9 = *(unsigned __int16*)(v8 + 16);
    HIDWORD(v20) = 1;
    LOWORD(v20) = v9;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v9) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v10 = game_map_MapRandom_instance__ptr[0];
      v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v13 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v10 + 1) = v11;
      v14 = (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) = v12;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4) = v14;
      nn_os_UnlockMutex_alt1(&game_g_random_mutex);
      HIDWORD(v20) =
          (16 * ((_WORD)v14 -
                 1000 * (unsigned __int16)((v14 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v15 = (*(__int64 (**)(_QWORD*))(*a1 + 616LL))(a1);
  v16 = *(_QWORD*)(a1[1] + 336LL) == (_QWORD)a1;
  v17 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  return GameRoutine_187c5b0(v7, &v20, v15, v16, (v17 & 1) == 0);
}

#pragma GCC visibility pop
