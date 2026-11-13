#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void HonorFile_9c7620(PSEUDO_X8, unsigned __int16*);
__attribute__((swiftcall)) void game_1604c70(PSEUDO_X8, int, unsigned int,
                                             unsigned int);
__int64* GameRoutine_6f4cd0(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_174dbb0(__int64, int);
__int64 GameHr_717fc0(unsigned __int64*, int);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_932360(unsigned __int8*, __int64*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 StatusClass_189dc40(__int64 result, float, __int64, int, unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_17356e0(__int64*, const char*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_gameui_anonymous_15d2000(__int64, __int64, __int64);
__int64 game_telop_175ca40(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
bool game_97e570(unsigned __int8*, __int64*, const char*, const char*);
char* GameHr_67ed20(_QWORD*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
const char* game_HashString32(const char* result);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN* GameData_2130f70;
extern _UNKNOWN GameData_2263bd8;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*AreaNameTelop_Destructor_17824b0_ptr[])();
extern __int64 (*EventDate_Destructor_175f700_ptr[])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d400[9])();
extern __int64 (*GameData_212d408[8])();
extern __int64 (*GameData_2130f58[2])();
extern __int64 (*GameData_2130f60)();
extern __int64 (*JobInfo_Destructor_175e660_ptr[])();
extern __int64 (*JobTitle_Destructor_175e430_ptr[])();
extern __int64 (*game_1374320_ptr[3])();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_telop_AreaNameTelop_vtable[])();
extern __int64 (*game_telop_EventDate_vtable[])();
extern __int64 (*game_telop_JobInfo_vtable[])();
extern __int64 (*game_telop_JobTitle_vtable[])();
extern __int64 (*game_telop_TelopCaptureFailAfterGetItemResult_vtable[])();
extern __int64 (*game_telop_TelopCaptureFailResult_vtable[])();
extern __int64 (*game_telop_TelopCaptureSuccessResult_vtable[])();
extern __int64 (*game_telop_TelopChangeItem_vtable[])();
extern __int64 (*game_telop_TelopCommonResult_vtable[])();
extern __int64 (*game_telop_TelopDestroyGateResult_vtable[])();
extern __int64 (*game_telop_TelopDestroyMiasmaResult_vtable[])();
extern __int64 (*game_telop_TelopDivinationResult_vtable[])();
extern __int64 (*game_telop_TelopDivinationVisitorResult_vtable[])();
extern __int64 (*game_telop_TelopGrowCapability_vtable[])();
extern __int64 (*game_telop_TelopNoticeNewAction_vtable[])();
extern __int64 (*game_telop_TelopNoticeNewJob_vtable[])();
extern __int64 (*game_telop_TelopPerchPerfect_vtable[])();
extern __int64 (*game_telop_TelopPerchResult_vtable[])();
extern __int64 (*game_telop_TelopReconstructionResult_vtable[])();
extern __int64 (*game_telop_TelopRecruitResult_vtable[])();
extern __int64 (*game_telop_TelopReinforceSkill_vtable[])();
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64 (*game_telop_TelopRideSkillLearn_vtable[])();
extern __int64 (*game_telop_TelopScoutFailResult_vtable[])();
extern __int64 (*game_telop_TelopShowResult_vtable[])();
extern __int64 (*game_telop_TelopSimpleLevelup_vtable[])();
extern __int64 (*game_telop_TelopSkillAcquisition_vtable[])();
extern __int64 (*game_telop_TelopSpeechResult_vtable[])();
extern __int64 (*game_telop_TelopTitle_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2130f48;
extern __int64 GameData_2130f78[2];
extern __int64 GameData_2131678;
extern __int64 GameData_2131d00[26];
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2263660;
extern __int64 GameData_2263668;
extern __int64 GameData_2263670;
extern __int64 GameData_2263680;
extern __int64 GameData_2263690;
extern __int64 GameData_22636a0;
extern __int64 GameData_22636a8;
extern __int64 GameData_22636b0;
extern __int64 GameData_22636c0;
extern __int64 GameData_22636d0;
extern __int64 GameData_22636e0;
extern __int64 GameData_22636e8;
extern __int64 GameData_22636f0;
extern __int64 GameData_2263700;
extern __int64 GameData_2263710;
extern __int64 GameData_2263720;
extern __int64 GameData_2263728;
extern __int64 GameData_2263730;
extern __int64 GameData_2263740;
extern __int64 GameData_2263750;
extern __int64 GameData_2263760;
extern __int64 GameData_2263768;
extern __int64 GameData_2263780;
extern __int64 GameData_2263790;
extern __int64 GameData_22637a0;
extern __int64 GameData_22637a8;
extern __int64 GameData_22637c0;
extern __int64 GameData_22637d0;
extern __int64 GameData_22637e0;
extern __int64 GameData_22637e8;
extern __int64 GameData_22637f0;
extern __int64 GameData_2263800;
extern __int64 GameData_2263810;
extern __int64 GameData_2263820;
extern __int64 GameData_2263828;
extern __int64 GameData_2263830;
extern __int64 GameData_2263840;
extern __int64 GameData_2263850;
extern __int64 GameData_2263860;
extern __int64 GameData_2263868;
extern __int64 GameData_2263870;
extern __int64 GameData_2263880;
extern __int64 GameData_2263890;
extern __int64 GameData_22638a0;
extern __int64 GameData_22638a8;
extern __int64 GameData_22638b0;
extern __int64 GameData_22638c0;
extern __int64 GameData_22638d0;
extern __int64 GameData_22638e0;
extern __int64 GameData_22638e8;
extern __int64 GameData_22638f0;
extern __int64 GameData_2263900;
extern __int64 GameData_2263910;
extern __int64 GameData_2263920;
extern __int64 GameData_2263928;
extern __int64 GameData_2263930;
extern __int64 GameData_2263940;
extern __int64 GameData_2263950;
extern __int64 GameData_2263960;
extern __int64 GameData_2263968;
extern __int64 GameData_2263980;
extern __int64 GameData_2263990;
extern __int64 GameData_22639a0;
extern __int64 GameData_22639a8;
extern __int64 GameData_22639c0;
extern __int64 GameData_22639d0;
extern __int64 GameData_22639e0;
extern __int64 GameData_22639e8;
extern __int64 GameData_22639f0;
extern __int64 GameData_2263a00;
extern __int64 GameData_2263a10;
extern __int64 GameData_2263a20;
extern __int64 GameData_2263a28;
extern __int64 GameData_2263a30;
extern __int64 GameData_2263a40;
extern __int64 GameData_2263a50;
extern __int64 GameData_2263a60;
extern __int64 GameData_2263a68;
extern __int64 GameData_2263a70;
extern __int64 GameData_2263a80;
extern __int64 GameData_2263a90;
extern __int64 GameData_2263aa0;
extern __int64 GameData_2263aa8;
extern __int64 GameData_2263ab0;
extern __int64 GameData_2263ac0;
extern __int64 GameData_2263ad0;
extern __int64 GameData_2263ae0;
extern __int64 GameData_2263ae8;
extern __int64 GameData_2263af0;
extern __int64 GameData_2263b00;
extern __int64 GameData_2263b10;
extern __int64 GameData_2263b20;
extern __int64 GameData_2263b28;
extern __int64 GameData_2263b40;
extern __int64 GameData_2263b50;
extern __int64 GameData_2263b60;
extern __int64 GameData_2263b68;
extern __int64 GameData_2263b80;
extern __int64 GameData_2263b90;
extern __int64 GameData_2263ba0;
extern __int64 GameData_2263ba8;
extern __int64 GameData_2263bb0;
extern __int64 GameData_2263bc0;
extern __int64 GameData_2263bd0;
extern __int64 GameData_2263be0;
extern __int64 GameData_2263be8;
extern __int64 GameData_2263c28;
extern __int64 GameData_2263c30;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_2263658;
extern char GameData_2263698;
extern char GameData_22636d8;
extern char GameData_2263718;
extern char GameData_2263758;
extern char GameData_2263798;
extern char GameData_22637d8;
extern char GameData_2263818;
extern char GameData_2263858;
extern char GameData_2263898;
extern char GameData_22638d8;
extern char GameData_2263918;
extern char GameData_2263958;
extern char GameData_2263998;
extern char GameData_22639d8;
extern char GameData_2263a18;
extern char GameData_2263a58;
extern char GameData_2263a98;
extern char GameData_2263ad8;
extern char GameData_2263b18;
extern char GameData_2263b58;
extern char GameData_2263b98;
extern int GameData_21f61c8;
extern int GameData_2263678;
extern int GameData_2263688;
extern int GameData_22636b8;
extern int GameData_22636c8;
extern int GameData_22636f8;
extern int GameData_2263708;
extern int GameData_2263738;
extern int GameData_2263748;
extern int GameData_2263778;
extern int GameData_2263788;
extern int GameData_22637b8;
extern int GameData_22637c8;
extern int GameData_22637f8;
extern int GameData_2263808;
extern int GameData_2263838;
extern int GameData_2263848;
extern int GameData_2263878;
extern int GameData_2263888;
extern int GameData_22638b8;
extern int GameData_22638c8;
extern int GameData_22638f8;
extern int GameData_2263908;
extern int GameData_2263938;
extern int GameData_2263948;
extern int GameData_2263978;
extern int GameData_2263988;
extern int GameData_22639b8;
extern int GameData_22639c8;
extern int GameData_22639f8;
extern int GameData_2263a08;
extern int GameData_2263a38;
extern int GameData_2263a48;
extern int GameData_2263a78;
extern int GameData_2263a88;
extern int GameData_2263ab8;
extern int GameData_2263ac8;
extern int GameData_2263af8;
extern int GameData_2263b08;
extern int GameData_2263b38;
extern int GameData_2263b48;
extern int GameData_2263b78;
extern int GameData_2263b88;
extern int GameData_2263bb8;
extern int GameData_2263bc8;
int __cxa_guard_acquire(__int64);
unsigned __int64 strlen(const char*);
unsigned __int8* Unit_931120(unsigned __int8*);
void* game_97b2f0(__int64);
void GameHr_1374b10(__int64, int);
void GameHr_1378190(__int64, const char*);
void Se_80e330(__int64, const char*);
void TelopSkillLearn_1765aa0(__int64*, __int64);
void TextBoxEx_188ab20(__int64, const char*);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_gameui_15d2c40(__int64, unsigned int*, unsigned int, __int64, int,
                         char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 game_telop_174bfc0(__int64 a1, int a2);
__int64 game_telop_1758970(__int64 a1, int a2);
void game_telop_175c870(__int64 a1, __int64 a2, int a3);
__int64 game_telop_175ceb0(__int64 a1, __int64 a2, __int64 a3);
bool game_telop_175d500(__int64 a1, __int64 a2, __int64 a3, int a4,
                        const char* a5);
__int64 game_telop_175ef80(__int64 a1, __int16* a2);
__int64 game_telop_17644e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 game_telop_1764d60(__int64 a1, const char* a2);
__int64 game_telop_1767f90(__int64 a1, __int64 a2, __int64 a3);
__int64 game_telop_17685e0(__int64 a1, __int64 a2, unsigned __int8* a3);
__int64 game_telop_176a400(__int64 a1, __int64* a2, int a3);
__int64 game_telop_176aa90(__int64 a1, __int64* a2, int a3);
__int64 game_telop_176b120(__int64 a1, __int64 a2);
__int64 game_telop_176b750(__int64 a1, __int64 a2);
__int64 game_telop_176bdb0(__int64 a1, __int64* a2);
__int64 game_telop_176c370(__int64 a1, __int64* a2);
__int64 game_telop_176caa0(__int64 a1, __int64 a2, int a3, __int64 a4);
__int64 game_telop_176d060(__int64 a1, _BYTE* a2, const char* a3,
                           const char* a4);
__int64 game_telop_176d610(__int64 a1, __int64 a2);
__int64 game_telop_176df00(__int64 result, _BYTE** a2, __int64 a3);
__int64 game_telop_17746d0(__int64 a1, __int64 a2);
__int64 game_telop_1774dd0(__int64 a1, __int64 a2);
__int64 game_telop_1775750(__int64 a1, __int64 a2);
__int64 game_telop_1775df0(__int64 a1, __int64 a2);
__int64 game_telop_1778700(__int64 a1, __int64 a2);
__int64 game_telop_1779bf0(__int64 a1, __int64 a2, int a3);
__int64 game_telop_177a2e0(__int64 a1, __int64 a2, char a3, int a4, int a5,
                           int a6);
__int64 game_telop_177b500(__int64 a1, __int64 a2);
__int64* game_telop_177c100(__int64 a1, __int64 a2, int* a3);
__int64 game_telop_177c650(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 game_telop_177d0e0(__int64 a1, __int64 a2, int a3);
__int64 game_telop_1781e30(__int64 a1);

__int64 game_telop_174bfc0(__int64 a1, int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _BYTE* v17;
  char v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  char* v35;
  char* v36;
  char* v37;

  if (a1 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263bd8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2263bd8) != 0) {
      GameData_2263680 = 0;
      GameData_2263688 = 0;
      GameData_2263690 = 0;
      GameData_2263660 = 0;
      GameData_2263668 = 0;
      GameData_22636a0 = 0;
      GameData_22636a8 = 240;
      GameData_2263670 = 0;
      GameData_2263678 = 0;
      GameData_2263658 = 2;
      GameData_2263698 = 13;
      GameData_22636b0 = 1;
      GameData_22636b8 = 0;
      GameData_22636c0 = 0;
      GameData_22636c8 = 0;
      GameData_22636e0 = 0;
      GameData_22636e8 = 248;
      GameData_22636d0 = 0;
      GameData_22636d8 = 14;
      GameData_22636f0 = 1;
      GameData_22636f8 = 0;
      GameData_2263700 = 0;
      GameData_2263708 = 0;
      GameData_2263710 = 0;
      GameData_2263718 = 2;
      GameData_2263728 = 0;
      GameData_2263730 = 0;
      GameData_2263720 = 0;
      GameData_2263738 = 1;
      GameData_2263740 = 0;
      GameData_2263748 = 0;
      GameData_2263750 = 0;
      GameData_2263758 = 19;
      GameData_2263780 = 0;
      GameData_2263788 = 0;
      GameData_2263790 = 0;
      GameData_2263760 = 0;
      GameData_2263768 = (__int64)GameData_212d400[0];
      GameData_2263778 = 500;
      GameData_2263798 = 10;
      GameData_22637b8 = 0;
      GameData_22637c0 = 0;
      GameData_22637c8 = 0;
      GameData_22637d0 = 0;
      GameData_22637d8 = 13;
      GameData_22637a0 = 0;
      GameData_22637a8 = (__int64)GameData_212c720;
      GameData_22637f0 = 0;
      GameData_22637f8 = 0;
      GameData_2263800 = 0;
      GameData_2263808 = 0;
      GameData_2263810 = 0;
      GameData_2263818 = 2;
      GameData_2263828 = 0;
      GameData_2263830 = 0;
      GameData_2263820 = 0;
      GameData_2263838 = 2;
      GameData_2263840 = 0;
      GameData_2263848 = 0;
      GameData_2263850 = 0;
      GameData_2263858 = 14;
      GameData_22637e0 = 0;
      GameData_22637e8 = (__int64)game_1374320_ptr[0];
      GameData_22638d8 = 14;
      GameData_22638f0 = 1;
      GameData_2263860 = 0;
      GameData_2263870 = 0;
      GameData_2263878 = 0;
      GameData_2263880 = 0;
      GameData_2263888 = 0;
      GameData_2263890 = 0;
      GameData_2263898 = 2;
      GameData_22638a0 = 0;
      GameData_22638a8 = 0;
      GameData_22638b0 = 0;
      GameData_22638c0 = 0;
      GameData_22638c8 = 0;
      GameData_22638d0 = 0;
      GameData_22638e0 = 0;
      GameData_22638f8 = 0;
      GameData_2263900 = 0;
      GameData_2263908 = 0;
      GameData_2263910 = 0;
      GameData_2263918 = 2;
      GameData_2263920 = 0;
      GameData_2263928 = 0;
      GameData_2263930 = 0;
      GameData_2263940 = 0;
      GameData_2263948 = 0;
      GameData_2263950 = 0;
      GameData_2263958 = 19;
      GameData_2263960 = 0;
      GameData_22638e8 = 16;
      GameData_2263938 = 6;
      GameData_2263868 = (__int64)GameData_2130f58[0];
      GameData_22638b8 = 3;
      GameData_2263980 = 0;
      GameData_2263988 = 0;
      GameData_2263990 = 0;
      GameData_2263998 = 10;
      GameData_22639a0 = 0;
      GameData_22639a8 = (__int64)GameData_212c720;
      GameData_22639b8 = 0;
      GameData_22639c0 = 0;
      GameData_22639c8 = 0;
      GameData_22639d0 = 0;
      GameData_22639d8 = 12;
      GameData_22639f0 = 0;
      GameData_22639e8 = 0;
      GameData_22639e0 = 0;
      GameData_22639f8 = 8;
      GameData_2263a00 = 0;
      GameData_2263a08 = 0;
      GameData_2263a10 = 0;
      GameData_2263a18 = 2;
      GameData_2263a20 = 0;
      GameData_2263a28 = 0;
      GameData_2263a30 = 0;
      GameData_2263a38 = 8;
      GameData_2263a40 = 0;
      GameData_2263a48 = 0;
      GameData_2263a50 = 0;
      GameData_2263a58 = 13;
      GameData_2263968 = (__int64)game_80a680_ptr[0];
      GameData_2263978 = 250;
      GameData_2263a60 = 0;
      GameData_2263a70 = 0;
      GameData_2263a78 = 0;
      GameData_2263a80 = 0;
      GameData_2263a88 = 0;
      GameData_2263a90 = 0;
      GameData_2263a98 = 12;
      GameData_2263ab0 = 0;
      GameData_2263aa8 = 0;
      GameData_2263aa0 = 0;
      GameData_2263ac0 = 0;
      GameData_2263ac8 = 0;
      GameData_2263ad0 = 0;
      GameData_2263ad8 = 2;
      GameData_2263ae0 = 0;
      GameData_2263ae8 = 0;
      GameData_2263af0 = 0;
      GameData_2263b00 = 0;
      GameData_2263b08 = 0;
      GameData_2263b10 = 0;
      GameData_2263b18 = 19;
      GameData_2263b20 = 0;
      GameData_2263a68 = (__int64)GameData_2130f60;
      GameData_2263ab8 = 9;
      GameData_2263af8 = 9;
      GameData_2263b38 = 250;
      GameData_2263b40 = 0;
      GameData_2263b48 = 0;
      GameData_2263b50 = 0;
      GameData_2263b58 = 10;
      GameData_2263b60 = 0;
      GameData_2263b68 = (__int64)GameData_212c720;
      GameData_2263b78 = 0;
      GameData_2263b80 = 0;
      GameData_2263b88 = 0;
      GameData_2263b90 = 0;
      GameData_2263b98 = 0;
      GameData_2263bc0 = 0;
      GameData_2263bc8 = 0;
      GameData_2263bd0 = 0;
      GameData_2263bb8 = 0;
      GameData_2263bb0 = 0;
      GameData_2263ba8 = 0;
      GameData_2263ba0 = 0;
      GameData_2263b28 = (__int64)GameData_212d408[0];
      __cxa_guard_release((__int64)&GameData_2263bd8);
    }
    v4 = fw_memory_g_heap_manager_ptr;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        928, 16, 0);
    v6 = GameData_212c608[0];
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)(v5 + 96) = 0;
    *(_QWORD*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 112) = 0;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 128) = 0;
    *(_WORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = "NULL";
    *(_QWORD*)(v5 + 32) = 0;
    v7 = (_QWORD*)(v5 + 32);
    *(_QWORD*)(v5 + 138) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)v5 = v6 + 16;
    *(_QWORD*)(v5 + 8) = 0;
    game_ProcInst_Register(v5);
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 152) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 224) = 0;
    *(_QWORD*)(v5 + 232) = 0;
    *(_DWORD*)(v5 + 320) = 3;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 192) = v5 + 200;
    *(_QWORD*)(v5 + 240) = 0;
    *(_QWORD*)(v5 + 256) = 0;
    *(_QWORD*)(v5 + 264) = 0;
    *(_QWORD*)(v5 + 272) = 0;
    *(_QWORD*)(v5 + 280) = 0;
    *(_QWORD*)(v5 + 288) = 0;
    *(_QWORD*)(v5 + 296) = 0;
    *(_QWORD*)(v5 + 304) = 0;
    *(_QWORD*)(v5 + 312) = 0;
    *(_DWORD*)(v5 + 332) = 0;
    *(_BYTE*)(v5 + 338) = 0;
    *(_QWORD*)(v5 + 344) = 0;
    *(_QWORD*)(v5 + 352) = 0;
    *(_QWORD*)(v5 + 324) = 0;
    *(_DWORD*)(v5 + 248) = 1065353216;
    *(_QWORD*)(v5 + 360) = 0;
    *(_QWORD*)(v5 + 368) = 0;
    *(_QWORD*)(v5 + 376) = 0;
    *(_QWORD*)(v5 + 384) = 0;
    *(_QWORD*)(v5 + 392) = 0;
    *(_QWORD*)(v5 + 400) = 0;
    *(_QWORD*)(v5 + 408) = 0;
    *(_QWORD*)(v5 + 416) = 0;
    *(_QWORD*)(v5 + 424) = 0;
    *(_DWORD*)(v5 + 432) = 0x2000;
    *(_QWORD*)(v5 + 472) = 0;
    *(_QWORD*)(v5 + 480) = 0;
    *(_QWORD*)(v5 + 440) = 0;
    *(_QWORD*)(v5 + 448) = 0;
    *(_QWORD*)(v5 + 504) = 0;
    *(_QWORD*)(v5 + 512) = 0;
    *(_WORD*)(v5 + 336) = 1;
    *(_QWORD*)(v5 + 488) = 0;
    *(_QWORD*)(v5 + 496) = 0;
    *(_DWORD*)(v5 + 520) = 1065353216;
    *(_QWORD*)(v5 + 528) = 0;
    *(_QWORD*)(v5 + 536) = 0;
    *(_QWORD*)(v5 + 544) = 0;
    *(_DWORD*)(v5 + 552) = 1065353216;
    *(_WORD*)(v5 + 560) = 0;
    *(_WORD*)(v5 + 584) = 0;
    *(_BYTE*)(v5 + 608) = 0;
    *(_QWORD*)(v5 + 656) = 0;
    *(_QWORD*)(v5 + 456) = 0;
    *(_QWORD*)(v5 + 464) = v5 + 472;
    *(_QWORD*)(v5 + 648) = 0;
    *(_QWORD*)(v5 + 632) = 0;
    *(_QWORD*)(v5 + 624) = 0;
    *(_QWORD*)(v5 + 616) = 0;
    *(_QWORD*)(v5 + 688) = 0;
    *(_QWORD*)(v5 + 680) = 0;
    *(_QWORD*)(v5 + 672) = 0;
    *(_QWORD*)(v5 + 664) = 0;
    *(_DWORD*)(v5 + 696) = 1065353216;
    *(_QWORD*)(v5 + 720) = 0;
    *(_QWORD*)(v5 + 640) = v5 + 648;
    *(_QWORD*)(v5 + 712) = 0;
    *(_QWORD*)(v5 + 704) = 0;
    *(_DWORD*)(v5 + 728) = 1065353216;
    *(_WORD*)(v5 + 736) = 0;
    *(_WORD*)(v5 + 760) = 0;
    *(_BYTE*)(v5 + 784) = 0;
    *(_QWORD*)(v5 + 792) = 0;
    *(_BYTE*)(v5 + 800) = 0;
    v8 = *(_QWORD*)v4;
    v9 = GameData_2130240[0] + 2;
    *(_BYTE*)(v5 + 816) = 0;
    *(_BYTE*)(v5 + 820) = 0;
    *(_BYTE*)(v5 + 824) = 0;
    *(_QWORD*)(v5 + 832) = 0;
    *(_WORD*)(v5 + 840) = 0;
    *(_DWORD*)(v5 + 864) = 0;
    *(_QWORD*)(v5 + 808) = v9;
    *(_QWORD*)v5 = game_telop_TelopTitle_vtable;
    v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
    *(_WORD*)(v10 + 108) = 256;
    v11 = GameData_2131678;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 48) = 0x2000;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    *(_QWORD*)(v5 + 880) = v10;
    *(_QWORD*)(v5 + 888) = 0;
    *(_DWORD*)(v5 + 896) = 0x2000;
    *(_BYTE*)(v5 + 904) = 0;
    *(_QWORD*)(v5 + 912) = 0;
    *(_DWORD*)(v5 + 920) = 0x2000;
    *(_QWORD*)v10 = v11 + 16;
    *(_DWORD*)(v10 + 292) = 2;
    v12 = GameData_21f61c8;
    v13 = GameData_21f61c8 + 1;
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v5 + 872) = v10 + 24;
    GameData_21f61c8 = v13;
    if (v12 == 0) {
      (*(void (**)(void))GameData_21f61c0)();
    }
    v14 = *(_QWORD*)GameData_2130f48;
    if (*(_QWORD*)GameData_2130f48 != 0) {
      v15 = *(_DWORD*)(v14 + 1736);
      *(_DWORD*)(v14 + 1736) = v15 + 1;
      if (v15 == 0) {
        (**(void (***)(__int64))(v14 + 1728))(v14 + 1728);
      }
    }
    v16 = *(_QWORD*)(a1 + 40);
    if (v16 != 0) {
      *(_QWORD*)(v16 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "TelopTitle";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("TelopTitle");
    *(_QWORD*)(v5 + 8) = &GameData_2263658;
    *(_QWORD*)(v5 + 16) = &GameData_2263658;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v17 = (_BYTE*)*v7;
    v18 = *(_BYTE*)(*v7 + 138LL);
    if (v18 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v7);
      v18 = v17[138];
    }
    v17[138] = v18 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
    if (*(_DWORD*)(v5 + 320) == 2) {
      v19 = (_QWORD*)game_ProcGameSkipView_instance_;
      if (game_ProcGameSkipView_instance_ != 0) {
        v21 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
        v20 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
        v23 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
        v22 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
        v24 = v22 == v23;
        v25 = v20 - 1 + v21;
        v26 = v25 >> 7;
        v27 = v25 & 0x7F;
        v28 = 16 * (v22 - v23) - 1;
        v29 = *(_QWORD*)(v23 + 8 * v26);
        if (v24) {
          v28 = 0;
        }
        v30 = v29 + 32 * v27;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            *(_DWORD*)v30 & 0xFFFFFFFD |
            (2 *
             ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
        v19[21] = *(_QWORD*)(v30 + 24);
        v31 = *(_QWORD*)(v30 + 16);
        v19[27] = v20 - 1;
        v19[20] = v31;
        if ((unsigned __int64)(v28 - (v20 + v21) - 255) <=
            0xFFFFFFFFFFFFFEFFLL) {
          v32 = *(_QWORD*)(v22 - 8);
          if (v32 != 0) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v33, v32);
            v22 = v19[24];
          }
          v19[24] = v22 - 8;
        }
      }
    }
    *(_DWORD*)(v5 + 320) = 3;
    if ((unsigned int)(a2 - 1) < 2) {
      if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
        *(_QWORD*)(v5 + 280) = 17;
        v34 = *(char**)(v5 + 288);
      }
      else {
        *(_BYTE*)(v5 + 272) = 34;
        v34 = (char*)(v5 + 273);
      }
      strcpy(v34, "Layout/Battle.arc");
      if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
        *(_QWORD*)(v5 + 304) = 21;
        v36 = *(char**)(v5 + 312);
      }
      else {
        *(_BYTE*)(v5 + 296) = 42;
        v36 = (char*)(v5 + 297);
      }
      strcpy(v36, "Battle_TlpBattleTitle");
      return v5;
    }
    if (a2 == 0) {
      if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
        *(_QWORD*)(v5 + 280) = 17;
        v35 = *(char**)(v5 + 288);
      }
      else {
        *(_BYTE*)(v5 + 272) = 34;
        v35 = (char*)(v5 + 273);
      }
      strcpy(v35, "Layout/Common.arc");
      if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
        *(_QWORD*)(v5 + 304) = 17;
        v37 = *(char**)(v5 + 312);
      }
      else {
        *(_BYTE*)(v5 + 296) = 34;
        v37 = (char*)(v5 + 297);
      }
      strcpy(v37, "Common_TlpChapter");
      return v5;
    }
  }
  return 0;
}

__int64 game_telop_1758970(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD v12[2];
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  GameHr_174dbb0(a1 + 224, a2);
  snd_Fade_Fade_10c830((__int64)&v13_.v13, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_EXP", (__int64)"SE_SYS_EXP",
                 (__int64)&v13_.v13, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade(&v13_.v13);
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v11 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  v7 = v11;
  if (v11 == nullptr) {
  LABEL_5:
    v7 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v12[0] = "L_Class";
  v12[1] = 7;
  GameRoutine_fa73c0((void*)(&v13_.v13), v7, v12);
  result = v13_.v14;
  if (v13_.v14 == 0) {
    return result;
  }
  v9 = std___1___shared_weak_count_lock(v13_.v14);
  v10 = v13_.v13;
  result = v13_.v14;
  if (v13_.v14 != 0) {
    result = std___1___shared_weak_count___release_weak(v13_.v14);
  }
  if (v9 != 0 && v10 != 0) {
    result =
        StatusClass_189dc40(v10, *(float*)(a1 + 256), **(_QWORD**)(a1 + 408),
                            *(_DWORD*)(a1 + 236), *(_DWORD*)(a1 + 352));
  }
  else if (v9 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

void game_telop_175c870(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  int v16;
  int v17;
  int v18;
  char* v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    char* v22;
  } v21_;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
  v3 = *(_QWORD*)(a1 + 16);
  v6 = game_util_Format("IconSpot%02d", **(_DWORD**)a1),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
  v7 = strlen(v6),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v10, 16, 0),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
    v21_.v21[1] = v8;
    v21_.v22 = v9;
    v21_.v21[0] = v10 | 1;
    goto LABEL_9;
  }
  LOBYTE(v21_.v21[0]) = 2 * v7;
  v9 = (char*)v21_.v21 + 1;
  if (v7 != 0) {
  LABEL_9:
    memmove((__int64)v9, (__int64)v6, v8),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v9[v8] = 0;
  if ((v21_.v21[0] & 1) != 0) {
    v11 = v21_.v22;
  }
  else {
    v11 = (char*)v21_.v21 + 1;
  }
  v12 = ui_LayoutAccessor_FindPane(**(__int64***)(a1 + 8), (__int64)v11),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v12 != 0) {
    v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
    v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v13 != 0) {
      v14 = v13;
      game_telop_175ca40(v3),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
      v15 = *(_BYTE*)(v14 + 88);
      *(_DWORD*)(v14 + 48) = v16;
      *(_DWORD*)(v14 + 52) = v17;
      *(_DWORD*)(v14 + 56) = v18;
      if (a3 != 0) {
        v19 = "IconGmapMap_Sub";
      }
      else {
        v19 = "IconGmapMap_Main";
      }
      *(_BYTE*)(v14 + 88) = v15 | 0x10;
      Manager_136a920(ui_Manager_instance_ + 1264, v14, 0, 7u, v19),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
    }
  }
  ++**(_DWORD**)a1;
  if ((v21_.v21[0] & 1) != 0 && v21_.v22 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  (__int64)v21_.v22),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s0", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(float, "s2", "=w"));
  }
}

__int64 game_telop_175ceb0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3;
  unsigned int v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  char* v15;
  char* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v3 = a1 != 0 && GameData_2263be0 == 0;
  v4 = v3;
  if (v3) {
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        856, 16, 0);
    memset(v9 + 144, 0, 0x2C8u);
    v10 = GameData_212c608[0];
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_QWORD*)(v9 + 128) = 0;
    *(_WORD*)(v9 + 136) = 0;
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 + 24) = "NULL";
    *(_QWORD*)(v9 + 138) = 0;
    *(_QWORD*)(v9 + 144) = 0;
    *(_QWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)v9 = v10 + 16;
    *(_QWORD*)(v9 + 8) = 0;
    game_ProcInst_Register(v9);
    v11 = GameData_2130f78[0];
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 152) = 0;
    *(_QWORD*)(v9 + 160) = 0;
    *(_QWORD*)(v9 + 168) = 0;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_QWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 192) = v9 + 200;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    *(_DWORD*)(v9 + 248) = 1065353216;
    *(_QWORD*)(v9 + 256) = 0;
    *(_QWORD*)(v9 + 264) = 0;
    *(_QWORD*)(v9 + 272) = 0;
    *(_QWORD*)(v9 + 280) = 0;
    *(_QWORD*)(v9 + 288) = 0;
    *(_QWORD*)(v9 + 296) = 0;
    *(_QWORD*)(v9 + 304) = 0;
    *(_QWORD*)(v9 + 312) = 0;
    *(_DWORD*)(v9 + 332) = 0;
    *(_BYTE*)(v9 + 338) = 0;
    *(_QWORD*)(v9 + 344) = 0;
    *(_QWORD*)(v9 + 352) = 0;
    *(_QWORD*)(v9 + 360) = 0;
    *(_QWORD*)(v9 + 368) = 0;
    *(_QWORD*)(v9 + 376) = 0;
    *(_QWORD*)(v9 + 384) = 0;
    *(_QWORD*)(v9 + 392) = 0;
    *(_QWORD*)(v9 + 400) = 0;
    *(_QWORD*)(v9 + 408) = 0;
    *(_QWORD*)(v9 + 416) = 0;
    *(_QWORD*)(v9 + 424) = 0;
    *(_QWORD*)(v9 + 472) = 0;
    *(_QWORD*)(v9 + 480) = 0;
    *(_QWORD*)(v9 + 440) = 0;
    *(_QWORD*)(v9 + 448) = 0;
    *(_QWORD*)(v9 + 504) = 0;
    *(_QWORD*)(v9 + 512) = 0;
    *(_QWORD*)(v9 + 488) = 0;
    *(_QWORD*)(v9 + 496) = 0;
    *(_DWORD*)(v9 + 520) = 1065353216;
    *(_QWORD*)(v9 + 528) = 0;
    *(_QWORD*)(v9 + 536) = 0;
    *(_QWORD*)(v9 + 544) = 0;
    *(_DWORD*)(v9 + 552) = 1065353216;
    *(_WORD*)(v9 + 560) = 0;
    *(_WORD*)(v9 + 584) = 0;
    *(_BYTE*)(v9 + 608) = 0;
    *(_QWORD*)(v9 + 656) = 0;
    *(_QWORD*)(v9 + 648) = 0;
    *(_QWORD*)(v9 + 632) = 0;
    *(_QWORD*)(v9 + 624) = 0;
    *(_QWORD*)(v9 + 616) = 0;
    *(_QWORD*)(v9 + 688) = 0;
    *(_QWORD*)(v9 + 680) = 0;
    *(_QWORD*)(v9 + 672) = 0;
    *(_QWORD*)(v9 + 664) = 0;
    *(_DWORD*)(v9 + 696) = 1065353216;
    *(_QWORD*)(v9 + 720) = 0;
    *(_QWORD*)(v9 + 712) = 0;
    *(_QWORD*)(v9 + 704) = 0;
    *(_DWORD*)(v9 + 728) = 1065353216;
    *(_WORD*)(v9 + 736) = 0;
    *(_WORD*)(v9 + 760) = 0;
    *(_BYTE*)(v9 + 784) = 0;
    *(_QWORD*)(v9 + 792) = 0;
    *(_BYTE*)(v9 + 800) = 0;
    *(_QWORD*)v9 = v11 + 16;
    *(_DWORD*)(v9 + 320) = 3;
    *(_QWORD*)(v9 + 324) = 0;
    *(_WORD*)(v9 + 336) = 1;
    *(_DWORD*)(v9 + 432) = 0x2000;
    *(_QWORD*)(v9 + 456) = 0;
    *(_QWORD*)(v9 + 464) = v9 + 472;
    *(_QWORD*)(v9 + 640) = v9 + 648;
    v12 = GameData_2130240[0] + 2;
    *(_BYTE*)(v9 + 816) = 0;
    *(_BYTE*)(v9 + 820) = 0;
    *(_QWORD*)(v9 + 808) = v12;
    if (GameData_2263be0 == 0) {
      GameData_2263be0 = v9;
    }
    *(_QWORD*)(v9 + 832) = 0;
    *(_QWORD*)(v9 + 840) = 0;
    *(_BYTE*)(v9 + 848) = 0;
    *(_QWORD*)v9 = game_telop_JobTitle_vtable;
    *(_QWORD*)(v9 + 824) = JobTitle_Destructor_175e430_ptr;
    v13 = *(_QWORD*)(a1 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v9;
      *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v9;
    *(_QWORD*)(v9 + 24) = "JobTitle";
    *(_QWORD*)(v9 + 32) = a1;
    *(_DWORD*)(v9 + 140) = (unsigned int)game_HashString32("JobTitle");
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 24;
    *(_QWORD*)(v9 + 80) = 1;
    v14 = GameData_2130f68;
    *(_QWORD*)(v9 + 8) = GameData_2130f68;
    *(_QWORD*)(v9 + 16) = v14;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
        (*(_WORD*)(v9 + 136) & 0x100) == 0) {
      *(_WORD*)(v9 + 136) |= 0x100u;
    }
    if ((*(_BYTE*)(v9 + 272) & 1) != 0) {
      *(_QWORD*)(v9 + 280) = 17;
      v15 = *(char**)(v9 + 288);
    }
    else {
      *(_BYTE*)(v9 + 272) = 34;
      v15 = (char*)(v9 + 273);
    }
    strcpy(v15, "Layout/Common.arc");
    if ((*(_BYTE*)(v9 + 296) & 1) != 0) {
      *(_QWORD*)(v9 + 304) = 15;
      v16 = *(char**)(v9 + 312);
    }
    else {
      *(_BYTE*)(v9 + 296) = 30;
      v16 = (char*)(v9 + 297);
    }
    strcpy(v16, "Common_JobTitle");
    if (*(_DWORD*)(v9 + 320) == 2) {
      v17 = (_QWORD*)game_ProcGameSkipView_instance_;
      if (game_ProcGameSkipView_instance_ != 0) {
        v19 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
        v18 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
        v21 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
        v20 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
        v3 = v20 == v21;
        v22 = v18 - 1 + v19;
        v23 = v22 >> 7;
        v24 = v22 & 0x7F;
        v25 = 16 * (v20 - v21) - 1;
        v26 = *(_QWORD*)(v21 + 8 * v23);
        if (v3) {
          v25 = 0;
        }
        v27 = v26 + 32 * v24;
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            *(_DWORD*)v27 & 0xFFFFFFFD |
            (2 *
             ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
        v17[21] = *(_QWORD*)(v27 + 24);
        v28 = *(_QWORD*)(v27 + 16);
        v17[27] = v18 - 1;
        v17[20] = v28;
        if ((unsigned __int64)(v25 - (v18 + v19) - 255) <=
            0xFFFFFFFFFFFFFEFFLL) {
          v29 = *(_QWORD*)(v20 - 8);
          if (v29 != 0) {
            v30 = 128;
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v30, v29);
            v20 = v17[24];
          }
          v17[24] = v20 - 8;
        }
      }
    }
    *(_QWORD*)(v9 + 832) = a2;
    *(_QWORD*)(v9 + 840) = a3;
    *(_DWORD*)(v9 + 320) = 3;
  }
  return v4;
}

bool game_telop_175d500(__int64 a1, __int64 a2, __int64 a3, int a4,
                        const char* a5)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  void* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  void* v35;
  _BYTE* v36;
  char v37;
  char* v38;
  __int64 v39;
  char* v40;
  char* v41;

  if (a1 != 0) {
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         888, 16, 0);
    memset(v11 + 144, 0, 0x2E8u);
    v12 = GameData_212c608[0];
    *(_QWORD*)(v11 + 88) = 0;
    *(_QWORD*)(v11 + 96) = 0;
    *(_QWORD*)(v11 + 104) = 0;
    *(_QWORD*)(v11 + 112) = 0;
    *(_QWORD*)(v11 + 120) = 0;
    *(_QWORD*)(v11 + 128) = 0;
    *(_WORD*)(v11 + 136) = 0;
    *(_QWORD*)(v11 + 16) = 0;
    *(_QWORD*)(v11 + 24) = "NULL";
    *(_QWORD*)(v11 + 32) = 0;
    v13 = (_QWORD*)(v11 + 32);
    *(_QWORD*)(v11 + 138) = 0;
    *(_QWORD*)(v11 + 144) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_QWORD*)(v11 + 48) = 0;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_QWORD*)(v11 + 80) = 0;
    *(_QWORD*)v11 = v12 + 16;
    *(_QWORD*)(v11 + 8) = 0;
    game_ProcInst_Register(v11);
    v14 = GameData_2130f78[0];
    *(_QWORD*)(v11 + 200) = 0;
    *(_QWORD*)(v11 + 152) = 0;
    *(_QWORD*)(v11 + 160) = 0;
    *(_QWORD*)(v11 + 168) = 0;
    *(_QWORD*)(v11 + 176) = 0;
    *(_QWORD*)(v11 + 208) = 0;
    *(_QWORD*)(v11 + 216) = 0;
    *(_QWORD*)(v11 + 184) = 0;
    *(_QWORD*)(v11 + 192) = v11 + 200;
    *(_QWORD*)(v11 + 224) = 0;
    *(_QWORD*)(v11 + 232) = 0;
    *(_QWORD*)(v11 + 240) = 0;
    *(_DWORD*)(v11 + 248) = 1065353216;
    *(_QWORD*)(v11 + 256) = 0;
    *(_QWORD*)(v11 + 264) = 0;
    *(_QWORD*)(v11 + 272) = 0;
    *(_QWORD*)(v11 + 280) = 0;
    *(_QWORD*)(v11 + 288) = 0;
    *(_QWORD*)(v11 + 296) = 0;
    *(_QWORD*)(v11 + 304) = 0;
    *(_QWORD*)(v11 + 312) = 0;
    *(_DWORD*)(v11 + 332) = 0;
    *(_BYTE*)(v11 + 338) = 0;
    *(_QWORD*)(v11 + 344) = 0;
    *(_QWORD*)(v11 + 352) = 0;
    *(_QWORD*)(v11 + 360) = 0;
    *(_QWORD*)(v11 + 368) = 0;
    *(_QWORD*)(v11 + 376) = 0;
    *(_QWORD*)(v11 + 384) = 0;
    *(_QWORD*)(v11 + 392) = 0;
    *(_QWORD*)(v11 + 400) = 0;
    *(_QWORD*)(v11 + 408) = 0;
    *(_QWORD*)(v11 + 416) = 0;
    *(_QWORD*)(v11 + 424) = 0;
    *(_QWORD*)(v11 + 472) = 0;
    *(_QWORD*)(v11 + 480) = 0;
    *(_QWORD*)(v11 + 440) = 0;
    *(_QWORD*)(v11 + 448) = 0;
    *(_QWORD*)(v11 + 504) = 0;
    *(_QWORD*)(v11 + 512) = 0;
    *(_QWORD*)(v11 + 488) = 0;
    *(_QWORD*)(v11 + 496) = 0;
    *(_DWORD*)(v11 + 520) = 1065353216;
    *(_QWORD*)(v11 + 528) = 0;
    *(_QWORD*)(v11 + 536) = 0;
    *(_QWORD*)(v11 + 544) = 0;
    *(_DWORD*)(v11 + 552) = 1065353216;
    *(_WORD*)(v11 + 560) = 0;
    *(_WORD*)(v11 + 584) = 0;
    *(_BYTE*)(v11 + 608) = 0;
    *(_QWORD*)(v11 + 656) = 0;
    *(_QWORD*)(v11 + 648) = 0;
    *(_QWORD*)(v11 + 632) = 0;
    *(_QWORD*)(v11 + 624) = 0;
    *(_QWORD*)(v11 + 616) = 0;
    *(_QWORD*)(v11 + 688) = 0;
    *(_QWORD*)(v11 + 680) = 0;
    *(_QWORD*)(v11 + 672) = 0;
    *(_QWORD*)(v11 + 664) = 0;
    *(_DWORD*)(v11 + 696) = 1065353216;
    *(_QWORD*)(v11 + 720) = 0;
    *(_QWORD*)(v11 + 712) = 0;
    *(_QWORD*)(v11 + 704) = 0;
    *(_DWORD*)(v11 + 728) = 1065353216;
    *(_WORD*)(v11 + 736) = 0;
    *(_WORD*)(v11 + 760) = 0;
    *(_BYTE*)(v11 + 784) = 0;
    *(_QWORD*)(v11 + 792) = 0;
    *(_BYTE*)(v11 + 800) = 0;
    *(_QWORD*)v11 = v14 + 16;
    *(_DWORD*)(v11 + 320) = 3;
    *(_QWORD*)(v11 + 324) = 0;
    *(_WORD*)(v11 + 336) = 1;
    *(_DWORD*)(v11 + 432) = 0x2000;
    *(_QWORD*)(v11 + 456) = 0;
    *(_QWORD*)(v11 + 464) = v11 + 472;
    *(_QWORD*)(v11 + 640) = v11 + 648;
    v15 = GameData_2130240[0] + 2;
    *(_BYTE*)(v11 + 816) = 0;
    *(_BYTE*)(v11 + 820) = 0;
    *(_QWORD*)(v11 + 808) = v15;
    if (a4 != 0) {
      if (GameData_2263be8 == 0) {
        GameData_2263be8 = v11;
      }
      *(_QWORD*)(v11 + 832) = 0;
      *(_QWORD*)(v11 + 840) = 0;
      *(_WORD*)(v11 + 856) = 0;
      *(_BYTE*)(v11 + 880) = 0;
      *(_QWORD*)v11 = game_telop_JobInfo_vtable;
      *(_QWORD*)(v11 + 824) = JobInfo_Destructor_175e660_ptr;
      *(_DWORD*)(v11 + 848) = 1;
      v16 = *(_QWORD*)(a1 + 40);
      if (v16 != 0) {
        *(_QWORD*)(v16 + 48) = v11;
        *(_QWORD*)(v11 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v11;
      *(_QWORD*)(v11 + 24) = "JobInfo";
      *(_QWORD*)(v11 + 32) = a1;
      *(_DWORD*)(v11 + 140) = (unsigned int)game_HashString32("JobInfo");
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 24;
      *(_QWORD*)(v11 + 80) = 1;
      v17 = GameData_2130f68;
      *(_QWORD*)(v11 + 8) = GameData_2130f68;
      *(_QWORD*)(v11 + 16) = v17;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 136LL))(v11) & 1) != 0 &&
          (*(_WORD*)(v11 + 136) & 0x100) == 0) {
        *(_WORD*)(v11 + 136) |= 0x100u;
      }
      if (*(_DWORD*)(v11 + 320) == 2) {
        v18 = (_QWORD*)game_ProcGameSkipView_instance_;
        if (game_ProcGameSkipView_instance_ != 0) {
          v20 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
          v19 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
          v22 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
          v21 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
          v23 = v21 == v22;
          v24 = v19 - 1 + v20;
          v25 = v24 >> 7;
          v26 = v24 & 0x7F;
          v27 = 16 * (v21 - v22) - 1;
          v28 = *(_QWORD*)(v22 + 8 * v25);
          if (v23) {
            v27 = 0;
          }
          v29 = v28 + 32 * v26;
          *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
              *(_DWORD*)v29 & 0xFFFFFFFD |
              (2 *
               ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
          v18[21] = *(_QWORD*)(v29 + 24);
          v30 = *(_QWORD*)(v29 + 16);
          v18[27] = v19 - 1;
          v18[20] = v30;
          if ((unsigned __int64)(v27 - (v19 + v20) - 255) <=
              0xFFFFFFFFFFFFFEFFLL) {
            v31 = *(_QWORD*)(v21 - 8);
            if (v31 != 0) {
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
                v32 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v32, v31);
              v21 = v18[24];
            }
            v18[24] = v21 - 8;
          }
        }
      }
      *(_DWORD*)(v11 + 320) = 3;
      if ((*(_BYTE*)(v11 + 272) & 1) != 0) {
        *(_QWORD*)(v11 + 280) = 17;
        v33 = *(char**)(v11 + 288);
      }
      else {
        *(_BYTE*)(v11 + 272) = 34;
        v33 = (char*)(v11 + 273);
      }
      v39 = v11 + 856;
      strcpy(v33, "Layout/Common.arc");
      if ((*(_BYTE*)(v11 + 296) & 1) != 0) {
        *(_QWORD*)(v11 + 304) = 14;
        v40 = *(char**)(v11 + 312);
      }
      else {
        *(_BYTE*)(v11 + 296) = 28;
        v40 = (char*)(v11 + 297);
      }
      strcpy(v40, "Common_JobInfo");
      *(_QWORD*)(v11 + 832) = a2;
      *(_QWORD*)(v11 + 840) = a3;
      *(_DWORD*)(v11 + 848) = a4;
    }
    else {
      if (GameData_2263be8 == 0) {
        GameData_2263be8 = v11;
      }
      *(_QWORD*)(v11 + 832) = 0;
      *(_QWORD*)(v11 + 840) = 0;
      *(_WORD*)(v11 + 856) = 0;
      *(_BYTE*)(v11 + 880) = 0;
      *(_QWORD*)v11 = game_telop_JobInfo_vtable;
      *(_QWORD*)(v11 + 824) = JobInfo_Destructor_175e660_ptr;
      *(_DWORD*)(v11 + 848) = 1;
      v34 = *(_QWORD*)(a1 + 40);
      if (v34 != 0) {
        *(_QWORD*)(v34 + 48) = v11;
        *(_QWORD*)(v11 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v11;
      *(_QWORD*)(v11 + 24) = "JobInfo";
      *(_QWORD*)(v11 + 32) = a1;
      *(_DWORD*)(v11 + 140) = (unsigned int)game_HashString32("JobInfo");
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 24;
      *(_QWORD*)(v11 + 80) = 1;
      v35 = GameData_2130f68;
      *(_QWORD*)(v11 + 8) = GameData_2130f68;
      *(_QWORD*)(v11 + 16) = v35;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 32LL))(v11);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v11 + 136LL))(v11) & 1) != 0 &&
          (*(_WORD*)(v11 + 136) & 0x100) == 0) {
        *(_WORD*)(v11 + 136) |= 0x100u;
      }
      v36 = (_BYTE*)*v13;
      v37 = *(_BYTE*)(*v13 + 138LL);
      if (v37 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v36 + 64LL))(*v13);
        v37 = v36[138];
      }
      v36[138] = v37 + 1;
      *(_WORD*)(v11 + 136) |= 2u;
      GameHr_1374b10(v11, 2);
      *(_BYTE*)(v11 + 332) = 1;
      if ((*(_BYTE*)(v11 + 272) & 1) != 0) {
        *(_QWORD*)(v11 + 280) = 17;
        v38 = *(char**)(v11 + 288);
      }
      else {
        *(_BYTE*)(v11 + 272) = 34;
        v38 = (char*)(v11 + 273);
      }
      v39 = v11 + 856;
      strcpy(v38, "Layout/Common.arc");
      if ((*(_BYTE*)(v11 + 296) & 1) != 0) {
        *(_QWORD*)(v11 + 304) = 14;
        v41 = *(char**)(v11 + 312);
      }
      else {
        *(_BYTE*)(v11 + 296) = 28;
        v41 = (char*)(v11 + 297);
      }
      strcpy(v41, "Common_JobInfo");
      *(_QWORD*)(v11 + 832) = a2;
      *(_QWORD*)(v11 + 840) = a3;
      *(_DWORD*)(v11 + 848) = 0;
    }
    GameRoutine_60a020(v39, a5);
  }
  return a1 != 0;
}

__int64 game_telop_175ef80(__int64 a1, __int16* a2)
{
  bool v2;
  unsigned int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  void* v12;
  char* v13;
  _QWORD* v14;
  char* v15;
  unsigned __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  struct {
    __int64 v21;
    unsigned __int64 v22;
    char* v23;
  } v21_;

  v2 = a1 != 0 && GameData_2263c28 == 0;
  v3 = v2;
  if (!v2) {
    return v3;
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      864, 16, 0);
  memset(v7 + 144, 0, 0x2D0u);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  v9 = GameData_2130f78[0];
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = v7 + 200;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_DWORD*)(v7 + 248) = 1065353216;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 332) = 0;
  *(_BYTE*)(v7 + 338) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 424) = 0;
  *(_QWORD*)(v7 + 472) = 0;
  *(_QWORD*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 440) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 504) = 0;
  *(_QWORD*)(v7 + 512) = 0;
  *(_QWORD*)(v7 + 488) = 0;
  *(_QWORD*)(v7 + 496) = 0;
  *(_DWORD*)(v7 + 520) = 1065353216;
  *(_QWORD*)(v7 + 528) = 0;
  *(_QWORD*)(v7 + 536) = 0;
  *(_QWORD*)(v7 + 544) = 0;
  *(_DWORD*)(v7 + 552) = 1065353216;
  *(_WORD*)(v7 + 560) = 0;
  *(_WORD*)(v7 + 584) = 0;
  *(_BYTE*)(v7 + 608) = 0;
  *(_QWORD*)(v7 + 656) = 0;
  *(_QWORD*)(v7 + 648) = 0;
  *(_QWORD*)(v7 + 632) = 0;
  *(_QWORD*)(v7 + 624) = 0;
  *(_QWORD*)(v7 + 616) = 0;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  *(_QWORD*)(v7 + 672) = 0;
  *(_QWORD*)(v7 + 664) = 0;
  *(_DWORD*)(v7 + 696) = 1065353216;
  *(_QWORD*)(v7 + 720) = 0;
  *(_QWORD*)(v7 + 712) = 0;
  *(_QWORD*)(v7 + 704) = 0;
  *(_DWORD*)(v7 + 728) = 1065353216;
  *(_WORD*)(v7 + 736) = 0;
  *(_WORD*)(v7 + 760) = 0;
  *(_BYTE*)(v7 + 784) = 0;
  *(_QWORD*)(v7 + 792) = 0;
  *(_BYTE*)(v7 + 800) = 0;
  *(_QWORD*)v7 = v9 + 16;
  *(_DWORD*)(v7 + 320) = 3;
  *(_QWORD*)(v7 + 324) = 0;
  *(_WORD*)(v7 + 336) = 1;
  *(_DWORD*)(v7 + 432) = 0x2000;
  *(_QWORD*)(v7 + 456) = 0;
  *(_QWORD*)(v7 + 464) = v7 + 472;
  *(_QWORD*)(v7 + 640) = v7 + 648;
  v10 = GameData_2130240[0] + 2;
  *(_BYTE*)(v7 + 816) = 0;
  *(_BYTE*)(v7 + 820) = 0;
  *(_QWORD*)(v7 + 808) = v10;
  if (GameData_2263c28 == 0) {
    GameData_2263c28 = v7;
  }
  *(_QWORD*)(v7 + 832) = 0;
  *(_QWORD*)(v7 + 840) = 0;
  *(_QWORD*)(v7 + 848) = 0;
  *(_BYTE*)(v7 + 856) = 0;
  *(_QWORD*)v7 = game_telop_EventDate_vtable;
  *(_QWORD*)(v7 + 824) = EventDate_Destructor_175f700_ptr;
  v11 = *(_QWORD*)(a1 + 40);
  if (v11 != 0) {
    *(_QWORD*)(v11 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "EventDate";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = (unsigned int)game_HashString32("EventDate");
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  v12 = GameData_2130f68;
  *(_QWORD*)(v7 + 8) = GameData_2130f68;
  *(_QWORD*)(v7 + 16) = v12;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  if ((*(_BYTE*)(v7 + 272) & 1) != 0) {
    *(_QWORD*)(v7 + 280) = 17;
    v13 = *(char**)(v7 + 288);
  }
  else {
    *(_BYTE*)(v7 + 272) = 34;
    v13 = (char*)(v7 + 273);
  }
  v14 = (_QWORD*)(v7 + 832);
  strcpy(v13, "Layout/Common.arc");
  if ((*(_BYTE*)(v7 + 296) & 1) != 0) {
    *(_QWORD*)(v7 + 304) = 19;
    v15 = *(char**)(v7 + 312);
  }
  else {
    *(_BYTE*)(v7 + 296) = 38;
    v15 = (char*)(v7 + 297);
  }
  strcpy(v15, "Common_TlpEventDate");
  game_1604c70((void*)(&v21_.v21), *a2, a2[1], a2[2]);
  if ((*(_BYTE*)v14 & 1) != 0) {
    if ((v21_.v21 & 1) != 0) {
      v17 = v21_.v23;
    }
    else {
      v17 = (char*)&v21_.v21 + 1;
    }
    if ((v21_.v21 & 1) != 0) {
      v18 = v21_.v22;
    }
    else {
      v18 = (unsigned __int64)(unsigned __int8)v21_.v21 >> 1;
    }
    SpineModel_64dde0((__int64*)(v7 + 832), (__int64)v17, v18);
    if ((v21_.v21 & 1) == 0) {
      return v3;
    }
  }
  else if ((v21_.v21 & 1) != 0) {
    GameRoutine_64df20((_QWORD*)(v7 + 832), (__int64)v21_.v23, v21_.v22);
    if ((v21_.v21 & 1) == 0) {
      return v3;
    }
  }
  else {
    v16 = v21_.v22;
    *v14 = v21_.v21;
    *(_QWORD*)(v7 + 840) = v16;
    *(_QWORD*)(v7 + 848) = v21_.v23;
    if ((v21_.v21 & 1) == 0) {
      return v3;
    }
  }
  if (v21_.v23 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v19, (__int64)v21_.v23);
  }
  return v3;
}

__int64 game_telop_17644e0(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v8;
  __int64 v9;
  __int64* v11;
  __int64 v12;
  const char** v13;
  const char* v14;
  const char* v15;
  __int64 v16;
  int v17;
  const char* v18;
  int v19;
  const char* v20;
  __int64 v21;
  char* v22;
  const char* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  __int64 v33;
  __int64* v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  const char* v39;
  char v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  const char* v44;
  char v45;
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
  const char* v59[2];
  struct {
    __int64* v60;
    __int64 v61;
    unsigned __int64 v62;
    unsigned __int64 v63;
    int v64;
    int v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    int v78;
    int v79;
  } v60_;
  float v80;

  v59[0] = "L_Txt";
  v59[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  GameRoutine_9b8fe0((void*)(&v60_.v60), a1, v59);
  if (v60_.v61 != 0) {
    v8 = std___1___shared_weak_count_lock(v60_.v61);
    v9 = (__int64)v60_.v60;
    if (v60_.v61 != 0) {
      std___1___shared_weak_count___release_weak(v60_.v61);
    }
    if (v8 == 0 || v9 == 0) {
      if (v8 == 0) {
        goto LABEL_38;
      }
    }
    else {
      v11 = msg_MessageManager_instance__ptr[0];
      v12 = *msg_MessageManager_instance__ptr[0];
      v13 = (const char**)msg_MessageManager_empty_text__ptr;
      if (a2 != 0) {
        if (*(_BYTE*)(a2 + 2136) != 0) {
          v14 = (const char*)game_97b2f0(a2 + 2104);
        }
        else {
          v14 = GameHr_67ed20(*(_QWORD**)(a2 + 392));
        }
        v15 = v14;
        v16 = v12 + 14704;
        if (v15 == nullptr) {
          v15 = *v13;
        }
      }
      else {
        v15 = &GameData_1a9f09e;
        v16 = v12 + 14704;
      }
      GameRoutine_60a020(v16, v15);
      v17 = *(unsigned __int8*)(a3 + 250);
      if (v17 == 46) {
        v18 = "MID_Sys_Singular_BlazeSkill";
      }
      else if (v17 == 20 && *(_QWORD*)(a3 + 576) != 0) {
        v18 = "MID_Sys_Singular_Magic";
      }
      else {
        v18 = "MID_Sys_Singular_Special";
        if (*(_QWORD*)(a3 + 552) == 0) {
          v19 = *(unsigned __int8*)(a3 + 104);
          v20 = "MID_Sys_Singular_Skill";
          if (v19 == 2) {
            v20 = "MID_Sys_Singular_Arts";
          }
          if (v19 != 3) {
            v18 = v20;
          }
        }
      }
      v21 = *v11;
      if (*v18 != 0) {
        v60_.v66 = -1;
        v60_.v67 = -1;
        v60_.v68 = -1;
        v60_.v69 = -1;
        v60_.v70 = -1;
        v60_.v71 = -1;
        v60_.v72 = -1;
        v60_.v73 = -1;
        v60_.v74 = -1;
        v60_.v75 = -1;
        v60_.v76 = -1;
        v60_.v77 = -1;
        v60_.v60 = GameData_212e348 + 2;
        v60_.v61 = 0xFFFF0001FFFF0000LL;
        v60_.v62 = 0xFFFF0004FFFF0002LL;
        v60_.v63 = 0xFFFF0006FFFF0005LL;
        v60_.v78 = 8;
        v60_.v79 = 0;
        v60_.v64 = -65529;
        v60_.v65 = -65528;
        v22 = GameRoutine_a4dbe0(v21, v18, 0);
      }
      else {
        v22 = (char*)*v13;
      }
      if (v22 != nullptr) {
        v23 = v22;
      }
      else {
        v23 = *v13;
      }
      GameRoutine_60a020(v21 + 14728, v23);
      TextBoxEx_188ab20(v9, "MID_Sys_Result_Msg_Acquired_Title");
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
LABEL_38:
  if (*(_BYTE*)(a3 + 250) != 20 || *(_QWORD*)(a3 + 576) == 0) {
    v34 = LayoutAccessor_155fbe0(a1, "L_InfoDetail");
    v35 = *(unsigned __int8*)(a3 + 104);
    LODWORD(v60_.v60) = *(_WORD*)(a3 + 16) & 0xFFF;
    game_gameui_15d2c40((__int64)v34, (unsigned int*)&v60_.v60, v35, a2, 0, 1);
    v33 = *(_QWORD*)(a4 + 32);
    if (v33 == 0) {
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  v24 = LayoutAccessor_155fbe0(a1, "L_InfoDetail");
  v25 = *(_QWORD*)(a3 + 576);
  v60_.v60 = nullptr;
  if (v25 != 0) {
    v26 = *(unsigned __int16*)(v25 + 16);
    HIDWORD(v60_.v60) = 1;
    LOWORD(v60_.v60) = v26;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v26) +
                  73LL) == 17) {
      v27 = v24;
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v28 = game_map_MapRandom_instance__ptr[0];
      v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v30 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v31 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v28 + 1) = v29;
      v32 = (v31 >> 8) ^ (v30 >> 19) ^ v31 ^ v30;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v28) = v30;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v28 + 4) = v32;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v24 = v27;
      HIDWORD(v60_.v60) =
          HIDWORD(v60_.v60) & 0xFFFFC00F |
          (16 *
           (((16 * (v32 - 1000 * ((v32 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
            0x3FF));
    }
  }
  game_gameui_anonymous_15d2000((__int64)v24, (__int64)&v60_.v60, a2);
  v33 = *(_QWORD*)(a4 + 32);
  if (v33 != 0) {
  LABEL_46:
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v33 + 48LL))(v33, a1);
  }
LABEL_47:
  v36 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"L_Txt/T_Txt");
  if (v36 != 0) {
    v37 = v36;
    v38 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, (__int64)"L_Txt/T_Txt");
    if (v38 != nullptr) {
      ui_text_190a0c0((float*)&v60_.v60, (__int64)v59, &v80, v38, v38[27]);
      v39 = v59[0];
    }
    else {
      v39 = nullptr;
    }
    v40 = *(_BYTE*)(v37 + 88);
    *(_QWORD*)(v37 + 80) = v39;
    *(_BYTE*)(v37 + 88) = v40 | 0x10;
  }
  v41 = ui_LayoutAccessor_FindTextBox(
      a1, (__int64)"L_InfoDetail/L_InfoTitle/L_InfoTxt/T_Txt");
  if (v41 != 0) {
    v42 = v41;
    v43 = (_QWORD*)ui_LayoutAccessor_FindTextBox(
        a1, (__int64)"L_InfoDetail/L_InfoTitle/L_InfoTxt/T_Txt");
    if (v43 != nullptr) {
      ui_text_190a0c0((float*)&v60_.v60, (__int64)v59, &v80, v43, v43[27]);
      v44 = v59[0];
    }
    else {
      v44 = nullptr;
    }
    v45 = *(_BYTE*)(v42 + 88);
    *(_QWORD*)(v42 + 80) = v44;
    *(_BYTE*)(v42 + 88) = v45 | 0x10;
  }
  v46 = ui_LayoutAccessor_FindAlignment(a1, "A_Item");
  if (v46 != 0) {
    Alignment_56b600(v46);
    v47 = a1[1];
    if (v47 != 0) {
      v48 = std___1___shared_weak_count_lock(v47);
      if (v48 != 0) {
        v49 = v48;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
          std___1___shared_weak_count___release_weak(v49);
        }
      }
    }
  }
  v50 = ui_LayoutAccessor_FindAlignment(a1, "A_Info");
  if (v50 != 0) {
    Alignment_56b600(v50);
    v51 = a1[1];
    if (v51 != 0) {
      v52 = std___1___shared_weak_count_lock(v51);
      if (v52 != 0) {
        v53 = v52;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
          std___1___shared_weak_count___release_weak(v53);
        }
      }
    }
  }
  v54 = ui_LayoutAccessor_FindAlignment(a1, "A_Contents");
  if (v54 != 0) {
    Alignment_56b600(v54);
    v55 = a1[1];
    if (v55 != 0) {
      v56 = std___1___shared_weak_count_lock(v55);
      if (v56 != 0) {
        v57 = v56;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
          std___1___shared_weak_count___release_weak(v57);
        }
      }
    }
  }
  return game_17356e0(a1, "A_Contents");
}

__int64 game_telop_1764d60(__int64 a1, const char* a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  v2 = 0;
  if (a1 != 0 && a2 != nullptr) {
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1192, 16, 0);
    memset(v2 + 144, 0, 0x418u);
    v6 = GameData_212c608[0];
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
    v7 = (_QWORD*)(v2 + 32);
    *(_QWORD*)(v2 + 138) = 0;
    *(_QWORD*)(v2 + 144) = 0;
    *(_QWORD*)(v2 + 40) = 0;
    *(_QWORD*)(v2 + 48) = 0;
    *(_QWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 0;
    *(_QWORD*)(v2 + 80) = 0;
    *(_QWORD*)v2 = v6 + 16;
    *(_QWORD*)(v2 + 8) = 0;
    game_ProcInst_Register(v2);
    *(_QWORD*)(v2 + 200) = 0;
    *(_QWORD*)(v2 + 152) = 0;
    *(_QWORD*)(v2 + 160) = 0;
    *(_QWORD*)(v2 + 168) = 0;
    *(_QWORD*)(v2 + 176) = 0;
    *(_QWORD*)(v2 + 208) = 0;
    *(_QWORD*)(v2 + 216) = 0;
    *(_QWORD*)(v2 + 224) = 0;
    *(_QWORD*)(v2 + 232) = 0;
    *(_QWORD*)(v2 + 184) = 0;
    *(_QWORD*)(v2 + 192) = v2 + 200;
    *(_QWORD*)(v2 + 240) = 0;
    *(_DWORD*)(v2 + 248) = 1065353216;
    *(_QWORD*)(v2 + 256) = 0;
    *(_QWORD*)(v2 + 264) = 0;
    *(_QWORD*)(v2 + 272) = 0;
    *(_QWORD*)(v2 + 280) = 0;
    *(_QWORD*)(v2 + 288) = 0;
    *(_QWORD*)(v2 + 296) = 0;
    *(_QWORD*)(v2 + 304) = 0;
    *(_QWORD*)(v2 + 312) = 0;
    *(_DWORD*)(v2 + 332) = 0;
    *(_BYTE*)(v2 + 338) = 0;
    *(_QWORD*)(v2 + 344) = 0;
    *(_QWORD*)(v2 + 352) = 0;
    *(_QWORD*)(v2 + 360) = 0;
    *(_QWORD*)(v2 + 368) = 0;
    *(_DWORD*)(v2 + 320) = 3;
    *(_QWORD*)(v2 + 376) = 0;
    *(_QWORD*)(v2 + 384) = 0;
    *(_QWORD*)(v2 + 392) = 0;
    *(_QWORD*)(v2 + 400) = 0;
    *(_QWORD*)(v2 + 408) = 0;
    *(_QWORD*)(v2 + 416) = 0;
    *(_QWORD*)(v2 + 424) = 0;
    *(_DWORD*)(v2 + 432) = 0x2000;
    *(_QWORD*)(v2 + 472) = 0;
    *(_QWORD*)(v2 + 480) = 0;
    *(_QWORD*)(v2 + 440) = 0;
    *(_QWORD*)(v2 + 448) = 0;
    *(_QWORD*)(v2 + 504) = 0;
    *(_QWORD*)(v2 + 512) = 0;
    *(_QWORD*)(v2 + 488) = 0;
    *(_QWORD*)(v2 + 496) = 0;
    *(_DWORD*)(v2 + 520) = 1065353216;
    *(_QWORD*)(v2 + 324) = 0;
    *(_QWORD*)(v2 + 528) = 0;
    *(_QWORD*)(v2 + 536) = 0;
    *(_QWORD*)(v2 + 544) = 0;
    *(_DWORD*)(v2 + 552) = 1065353216;
    *(_WORD*)(v2 + 560) = 0;
    *(_WORD*)(v2 + 584) = 0;
    *(_BYTE*)(v2 + 608) = 0;
    *(_QWORD*)(v2 + 656) = 0;
    *(_QWORD*)(v2 + 648) = 0;
    *(_QWORD*)(v2 + 632) = 0;
    *(_WORD*)(v2 + 336) = 1;
    *(_QWORD*)(v2 + 624) = 0;
    *(_QWORD*)(v2 + 616) = 0;
    *(_QWORD*)(v2 + 688) = 0;
    *(_QWORD*)(v2 + 680) = 0;
    *(_QWORD*)(v2 + 672) = 0;
    *(_QWORD*)(v2 + 664) = 0;
    *(_DWORD*)(v2 + 696) = 1065353216;
    *(_QWORD*)(v2 + 720) = 0;
    *(_QWORD*)(v2 + 712) = 0;
    *(_QWORD*)(v2 + 704) = 0;
    *(_QWORD*)(v2 + 456) = 0;
    *(_QWORD*)(v2 + 464) = v2 + 472;
    *(_DWORD*)(v2 + 728) = 1065353216;
    *(_WORD*)(v2 + 736) = 0;
    *(_WORD*)(v2 + 760) = 0;
    *(_BYTE*)(v2 + 784) = 0;
    *(_QWORD*)(v2 + 792) = 0;
    *(_BYTE*)(v2 + 800) = 0;
    *(_QWORD*)(v2 + 640) = v2 + 648;
    v8 = *v5;
    v9 = GameData_2130240[0] + 2;
    *(_BYTE*)(v2 + 816) = 0;
    *(_BYTE*)(v2 + 820) = 0;
    *(_WORD*)(v2 + 824) = 0;
    *(_QWORD*)(v2 + 808) = v9;
    *(_QWORD*)v2 = game_telop_TelopResult_vtable;
    v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
    *(_DWORD*)(v10 + 48) = 0x2000;
    v11 = GameData_2131678;
    *(_WORD*)(v10 + 108) = 256;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    *(_QWORD*)(v2 + 856) = v10;
    *(_WORD*)(v2 + 960) = 0;
    *(_QWORD*)(v2 + 1016) = 0;
    *(_QWORD*)(v2 + 992) = 0;
    *(_QWORD*)(v2 + 1000) = 0;
    *(_BYTE*)(v2 + 952) = 0;
    *(_QWORD*)(v2 + 944) = 0;
    *(_QWORD*)(v2 + 936) = 0;
    *(_QWORD*)(v2 + 928) = 0;
    *(_QWORD*)(v2 + 920) = 0;
    *(_QWORD*)(v2 + 912) = 0;
    *(_QWORD*)(v2 + 904) = 0;
    *(_QWORD*)(v2 + 896) = 0;
    *(_QWORD*)(v2 + 888) = 0;
    *(_QWORD*)(v2 + 880) = 0;
    *(_QWORD*)(v2 + 872) = 0;
    *(_QWORD*)(v2 + 864) = 0;
    *(_QWORD*)(v2 + 1024) = 1065353216;
    *(_WORD*)(v2 + 1032) = 0;
    *(_WORD*)(v2 + 1040) = 0;
    *(_WORD*)(v2 + 1064) = 0;
    *(_WORD*)(v2 + 1088) = 0;
    *(_QWORD*)v10 = v11 + 16;
    *(_DWORD*)(v10 + 292) = 2;
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v2 + 848) = v10 + 24;
    *(_QWORD*)(v2 + 1007) = 0;
    v12 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v2 + 1160) = 0;
    *(_BYTE*)(v2 + 1152) = 0;
    *(_QWORD*)(v2 + 1144) = 0;
    *(_QWORD*)(v2 + 1136) = 0;
    *(_QWORD*)(v2 + 1128) = 0;
    *(_QWORD*)(v2 + 1120) = 0;
    *(_QWORD*)(v2 + 1112) = 0;
    *(_WORD*)(v2 + 1168) = 0;
    *(_QWORD*)(v2 + 984) = v12;
    *(_QWORD*)v2 = game_telop_TelopCommonResult_vtable;
    v13 = *(_QWORD*)(a1 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "TelopCommonResult";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) = (unsigned int)game_HashString32("TelopCommonResult");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    v14 = GameData_2130f68;
    *(_QWORD*)(v2 + 8) = GameData_2130f68;
    *(_QWORD*)(v2 + 16) = v14;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
    v15 = (_BYTE*)*v7;
    v16 = *(_BYTE*)(*v7 + 138LL);
    if (v16 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
      v16 = v15[138];
    }
    v15[138] = v16 + 1;
    *(_WORD*)(v2 + 136) |= 2u;
    if ((*(_BYTE*)(v2 + 272) & 1) != 0) {
      *(_QWORD*)(v2 + 280) = 17;
      v17 = *(char**)(v2 + 288);
    }
    else {
      *(_BYTE*)(v2 + 272) = 34;
      v17 = (char*)(v2 + 273);
    }
    strcpy(v17, "Layout/Common.arc");
    if ((*(_BYTE*)(v2 + 296) & 1) != 0) {
      *(_QWORD*)(v2 + 304) = 16;
      v18 = *(char**)(v2 + 312);
    }
    else {
      *(_BYTE*)(v2 + 296) = 32;
      v18 = (char*)(v2 + 297);
    }
    strcpy(v18, "Common_TlpResult");
    GameHr_1374b10(v2, 2);
    Se_80e330(v2, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v2, "SE_SYS_Telop_Mini_Out");
    Se_80e330(v2, "SE_SYS_Telop_Result");
    GameRoutine_60a020(v2 + 1168, a2);
  }
  return v2;
}

__int64 game_telop_1767f90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  void* v16;
  _BYTE* v17;
  char v18;
  char* v19;
  char* v20;
  __int64 v21;
  const char* v22;
  int v24;
  int v25;
  int v26;

  v3 = 0;
  if (a2 != 0 && a1 != 0 && a3 != 0) {
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1184, 16, 0);
    memset(v3 + 144, 0, 0x410u);
    v8 = GameData_212c608[0];
    *(_QWORD*)(v3 + 88) = 0;
    *(_QWORD*)(v3 + 96) = 0;
    *(_QWORD*)(v3 + 104) = 0;
    *(_QWORD*)(v3 + 112) = 0;
    *(_QWORD*)(v3 + 120) = 0;
    *(_QWORD*)(v3 + 128) = 0;
    *(_WORD*)(v3 + 136) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 24) = "NULL";
    *(_QWORD*)(v3 + 32) = 0;
    v9 = (_QWORD*)(v3 + 32);
    *(_QWORD*)(v3 + 138) = 0;
    *(_QWORD*)(v3 + 144) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_QWORD*)v3 = v8 + 16;
    *(_QWORD*)(v3 + 8) = 0;
    game_ProcInst_Register(v3);
    *(_QWORD*)(v3 + 200) = 0;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_QWORD*)(v3 + 240) = 0;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 272) = 0;
    *(_QWORD*)(v3 + 280) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_DWORD*)(v3 + 332) = 0;
    *(_BYTE*)(v3 + 338) = 0;
    *(_QWORD*)(v3 + 344) = 0;
    *(_QWORD*)(v3 + 352) = 0;
    *(_QWORD*)(v3 + 360) = 0;
    *(_QWORD*)(v3 + 368) = 0;
    *(_DWORD*)(v3 + 320) = 3;
    *(_QWORD*)(v3 + 376) = 0;
    *(_QWORD*)(v3 + 384) = 0;
    *(_QWORD*)(v3 + 392) = 0;
    *(_QWORD*)(v3 + 400) = 0;
    *(_QWORD*)(v3 + 408) = 0;
    *(_QWORD*)(v3 + 416) = 0;
    *(_QWORD*)(v3 + 424) = 0;
    *(_DWORD*)(v3 + 432) = 0x2000;
    *(_QWORD*)(v3 + 472) = 0;
    *(_QWORD*)(v3 + 480) = 0;
    *(_QWORD*)(v3 + 440) = 0;
    *(_QWORD*)(v3 + 448) = 0;
    *(_QWORD*)(v3 + 504) = 0;
    *(_QWORD*)(v3 + 512) = 0;
    *(_QWORD*)(v3 + 488) = 0;
    *(_QWORD*)(v3 + 496) = 0;
    *(_DWORD*)(v3 + 520) = 1065353216;
    *(_QWORD*)(v3 + 324) = 0;
    *(_QWORD*)(v3 + 528) = 0;
    *(_QWORD*)(v3 + 536) = 0;
    *(_QWORD*)(v3 + 544) = 0;
    *(_DWORD*)(v3 + 552) = 1065353216;
    *(_WORD*)(v3 + 560) = 0;
    *(_WORD*)(v3 + 584) = 0;
    *(_BYTE*)(v3 + 608) = 0;
    *(_QWORD*)(v3 + 656) = 0;
    *(_QWORD*)(v3 + 648) = 0;
    *(_QWORD*)(v3 + 632) = 0;
    *(_WORD*)(v3 + 336) = 1;
    *(_QWORD*)(v3 + 624) = 0;
    *(_QWORD*)(v3 + 616) = 0;
    *(_QWORD*)(v3 + 688) = 0;
    *(_QWORD*)(v3 + 680) = 0;
    *(_QWORD*)(v3 + 672) = 0;
    *(_QWORD*)(v3 + 664) = 0;
    *(_DWORD*)(v3 + 696) = 1065353216;
    *(_QWORD*)(v3 + 720) = 0;
    *(_QWORD*)(v3 + 712) = 0;
    *(_QWORD*)(v3 + 704) = 0;
    *(_QWORD*)(v3 + 456) = 0;
    *(_QWORD*)(v3 + 464) = v3 + 472;
    *(_DWORD*)(v3 + 728) = 1065353216;
    *(_WORD*)(v3 + 736) = 0;
    *(_WORD*)(v3 + 760) = 0;
    *(_BYTE*)(v3 + 784) = 0;
    *(_QWORD*)(v3 + 792) = 0;
    *(_BYTE*)(v3 + 800) = 0;
    *(_QWORD*)(v3 + 640) = v3 + 648;
    v10 = *v7;
    v11 = GameData_2130240[0] + 2;
    *(_BYTE*)(v3 + 816) = 0;
    *(_BYTE*)(v3 + 820) = 0;
    *(_WORD*)(v3 + 824) = 0;
    *(_QWORD*)(v3 + 808) = v11;
    *(_QWORD*)v3 = game_telop_TelopResult_vtable;
    v12 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
    v13 = GameData_2131678;
    *(_WORD*)(v12 + 108) = 256;
    *(_DWORD*)(v12 + 48) = 0x2000;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_DWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_DWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_WORD*)(v12 + 80) = 0;
    *(_DWORD*)(v12 + 112) = -1082130432;
    *(_WORD*)(v12 + 116) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_BYTE*)(v12 + 160) = 0;
    *(_BYTE*)(v12 + 288) = 0;
    *(_QWORD*)(v12 + 272) = 0;
    *(_QWORD*)(v12 + 280) = 0;
    *(_QWORD*)(v12 + 256) = 0;
    *(_QWORD*)(v12 + 264) = 0;
    *(_QWORD*)(v12 + 240) = 0;
    *(_QWORD*)(v12 + 248) = 0;
    *(_QWORD*)(v12 + 224) = 0;
    *(_QWORD*)(v12 + 232) = 0;
    *(_QWORD*)(v12 + 208) = 0;
    *(_QWORD*)(v12 + 216) = 0;
    *(_QWORD*)(v12 + 192) = 0;
    *(_QWORD*)(v12 + 200) = 0;
    *(_QWORD*)(v12 + 176) = 0;
    *(_QWORD*)(v12 + 184) = 0;
    *(_QWORD*)(v12 + 168) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_DWORD*)(v12 + 127) = 0;
    *(_QWORD*)(v3 + 856) = v12;
    *(_WORD*)(v3 + 960) = 0;
    *(_QWORD*)(v3 + 1016) = 0;
    *(_QWORD*)(v3 + 992) = 0;
    *(_QWORD*)(v3 + 1000) = 0;
    *(_BYTE*)(v3 + 952) = 0;
    *(_QWORD*)(v3 + 944) = 0;
    *(_QWORD*)(v3 + 936) = 0;
    *(_QWORD*)(v3 + 928) = 0;
    *(_QWORD*)(v3 + 920) = 0;
    *(_QWORD*)(v3 + 912) = 0;
    *(_QWORD*)(v3 + 904) = 0;
    *(_QWORD*)(v3 + 896) = 0;
    *(_QWORD*)(v3 + 888) = 0;
    *(_QWORD*)(v3 + 880) = 0;
    *(_QWORD*)(v3 + 872) = 0;
    *(_QWORD*)(v3 + 864) = 0;
    *(_QWORD*)(v3 + 1024) = 1065353216;
    *(_WORD*)(v3 + 1032) = 0;
    *(_WORD*)(v3 + 1040) = 0;
    *(_WORD*)(v3 + 1064) = 0;
    *(_WORD*)(v3 + 1088) = 0;
    *(_QWORD*)v12 = v13 + 16;
    *(_DWORD*)(v12 + 292) = 2;
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(v3 + 848) = v12 + 24;
    *(_QWORD*)(v3 + 1007) = 0;
    v14 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v3 + 1160) = 0;
    *(_BYTE*)(v3 + 1152) = 0;
    *(_QWORD*)(v3 + 1144) = 0;
    *(_QWORD*)(v3 + 1136) = 0;
    *(_QWORD*)(v3 + 1128) = 0;
    *(_QWORD*)(v3 + 1120) = 0;
    *(_QWORD*)(v3 + 1112) = 0;
    *(_QWORD*)(v3 + 1176) = 0;
    *(_QWORD*)(v3 + 1168) = 0;
    *(_QWORD*)(v3 + 984) = v14;
    *(_QWORD*)v3 = game_telop_TelopSkillAcquisition_vtable;
    v15 = *(_QWORD*)(a1 + 40);
    if (v15 != 0) {
      *(_QWORD*)(v15 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "TelopSkillAcquisition";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) =
        (unsigned int)game_HashString32("TelopSkillAcquisition");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    v16 = GameData_2130f68;
    *(_QWORD*)(v3 + 8) = GameData_2130f68;
    *(_QWORD*)(v3 + 16) = v16;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
        (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v17 = (_BYTE*)*v9;
    v18 = *(_BYTE*)(*v9 + 138LL);
    if (v18 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v9);
      v18 = v17[138];
    }
    v17[138] = v18 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
    if ((*(_BYTE*)(v3 + 272) & 1) != 0) {
      *(_QWORD*)(v3 + 280) = 17;
      v19 = *(char**)(v3 + 288);
    }
    else {
      *(_BYTE*)(v3 + 272) = 34;
      v19 = (char*)(v3 + 273);
    }
    strcpy(v19, "Layout/Common.arc");
    if ((*(_BYTE*)(v3 + 296) & 1) != 0) {
      *(_QWORD*)(v3 + 304) = 16;
      v20 = *(char**)(v3 + 312);
    }
    else {
      *(_BYTE*)(v3 + 296) = 32;
      v20 = (char*)(v3 + 297);
    }
    strcpy(v20, "Common_TlpResult");
    GameHr_1374b10(v3, 2);
    Se_80e330(v3, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v3, "SE_SYS_Telop_Mini_Out");
    *(_QWORD*)(v3 + 1168) = a2;
    *(_QWORD*)(v3 + 1176) = a3;
    *(_BYTE*)(v3 + 338) = 1;
    if (*(_BYTE*)(a3 + 104) == 3 || *(_BYTE*)(a3 + 250) == 46) {
      v21 = game_g_shared_system_skills_ptr;
      v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v26) & 1) != 0) {
        v22 = "SE_SYS_BlazeArts_Automaton_Release";
      }
      else {
        v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v21) & 0xFFF;
        if ((game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v25) & 1) !=
            0) {
          v22 = "SE_SYS_BlazeArts_Tenmon_Release";
        }
        else {
          v24 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v21) & 0xFFF;
          game_HasSkill((_QWORD*)(a2 + 1744), (unsigned int*)&v24);
          v22 = "SE_SYS_BlazeArts_Hell_Release";
        }
      }
    }
    else {
      v22 = "SE_SYS_Telop_Acquire";
    }
    Se_80e330(v3, v22);
  }
  return v3;
}

__int64 game_telop_17685e0(__int64 a1, __int64 a2, unsigned __int8* a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  void* v16;
  _BYTE* v17;
  char v18;
  char* v19;
  char* v20;
  unsigned __int8* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  unsigned __int8* v25;
  unsigned __int8* v26;
  unsigned int v27;
  unsigned __int8* v28;
  unsigned int v29;
  bool v30;
  __int64 v31;
  int v32;
  unsigned __int64 v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  __int64 v40[2];

  if (a1 == 0) {
    return 0;
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1224, 16, 0);
  memset(v7 + 144, 0, 0x438u);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 32) = 0;
  v9 = (_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = v7 + 200;
  *(_QWORD*)(v7 + 240) = 0;
  *(_DWORD*)(v7 + 248) = 1065353216;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 332) = 0;
  *(_BYTE*)(v7 + 338) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_DWORD*)(v7 + 320) = 3;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 424) = 0;
  *(_DWORD*)(v7 + 432) = 0x2000;
  *(_QWORD*)(v7 + 472) = 0;
  *(_QWORD*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 440) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 504) = 0;
  *(_QWORD*)(v7 + 512) = 0;
  *(_QWORD*)(v7 + 488) = 0;
  *(_QWORD*)(v7 + 496) = 0;
  *(_DWORD*)(v7 + 520) = 1065353216;
  *(_QWORD*)(v7 + 324) = 0;
  *(_QWORD*)(v7 + 528) = 0;
  *(_QWORD*)(v7 + 536) = 0;
  *(_QWORD*)(v7 + 544) = 0;
  *(_DWORD*)(v7 + 552) = 1065353216;
  *(_WORD*)(v7 + 560) = 0;
  *(_WORD*)(v7 + 584) = 0;
  *(_BYTE*)(v7 + 608) = 0;
  *(_QWORD*)(v7 + 656) = 0;
  *(_QWORD*)(v7 + 648) = 0;
  *(_QWORD*)(v7 + 632) = 0;
  *(_WORD*)(v7 + 336) = 1;
  *(_QWORD*)(v7 + 624) = 0;
  *(_QWORD*)(v7 + 616) = 0;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  *(_QWORD*)(v7 + 672) = 0;
  *(_QWORD*)(v7 + 664) = 0;
  *(_DWORD*)(v7 + 696) = 1065353216;
  *(_QWORD*)(v7 + 720) = 0;
  *(_QWORD*)(v7 + 712) = 0;
  *(_QWORD*)(v7 + 704) = 0;
  *(_QWORD*)(v7 + 456) = 0;
  *(_QWORD*)(v7 + 464) = v7 + 472;
  *(_DWORD*)(v7 + 728) = 1065353216;
  *(_WORD*)(v7 + 736) = 0;
  *(_WORD*)(v7 + 760) = 0;
  *(_BYTE*)(v7 + 784) = 0;
  *(_QWORD*)(v7 + 792) = 0;
  *(_BYTE*)(v7 + 800) = 0;
  *(_QWORD*)(v7 + 640) = v7 + 648;
  v10 = *v6;
  v11 = GameData_2130240[0] + 2;
  *(_BYTE*)(v7 + 816) = 0;
  *(_BYTE*)(v7 + 820) = 0;
  *(_WORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 808) = v11;
  *(_QWORD*)v7 = game_telop_TelopResult_vtable;
  v12 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
  *(_DWORD*)(v12 + 48) = 0x2000;
  v13 = GameData_2131678;
  *(_WORD*)(v12 + 108) = 256;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_DWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_WORD*)(v12 + 80) = 0;
  *(_DWORD*)(v12 + 112) = -1082130432;
  *(_WORD*)(v12 + 116) = 0;
  *(_WORD*)(v12 + 136) = 0;
  *(_BYTE*)(v12 + 160) = 0;
  *(_BYTE*)(v12 + 288) = 0;
  *(_QWORD*)(v12 + 272) = 0;
  *(_QWORD*)(v12 + 280) = 0;
  *(_QWORD*)(v12 + 256) = 0;
  *(_QWORD*)(v12 + 264) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *(_QWORD*)(v12 + 248) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_DWORD*)(v12 + 127) = 0;
  *(_QWORD*)(v7 + 856) = v12;
  *(_WORD*)(v7 + 960) = 0;
  *(_QWORD*)(v7 + 1016) = 0;
  *(_QWORD*)(v7 + 992) = 0;
  *(_QWORD*)(v7 + 1000) = 0;
  *(_BYTE*)(v7 + 952) = 0;
  *(_QWORD*)(v7 + 944) = 0;
  *(_QWORD*)(v7 + 936) = 0;
  *(_QWORD*)(v7 + 928) = 0;
  *(_QWORD*)(v7 + 920) = 0;
  *(_QWORD*)(v7 + 912) = 0;
  *(_QWORD*)(v7 + 904) = 0;
  *(_QWORD*)(v7 + 896) = 0;
  *(_QWORD*)(v7 + 888) = 0;
  *(_QWORD*)(v7 + 880) = 0;
  *(_QWORD*)(v7 + 872) = 0;
  *(_QWORD*)(v7 + 864) = 0;
  *(_QWORD*)(v7 + 1024) = 1065353216;
  *(_WORD*)(v7 + 1032) = 0;
  *(_WORD*)(v7 + 1040) = 0;
  *(_WORD*)(v7 + 1064) = 0;
  *(_WORD*)(v7 + 1088) = 0;
  *(_QWORD*)v12 = v13 + 16;
  *(_DWORD*)(v12 + 292) = 2;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v7 + 848) = v12 + 24;
  *(_QWORD*)(v7 + 1007) = 0;
  v14 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v7 + 1160) = 0;
  *(_BYTE*)(v7 + 1152) = 0;
  *(_QWORD*)(v7 + 1144) = 0;
  *(_QWORD*)(v7 + 1136) = 0;
  *(_QWORD*)(v7 + 1128) = 0;
  *(_QWORD*)(v7 + 1120) = 0;
  *(_QWORD*)(v7 + 1112) = 0;
  *(_QWORD*)(v7 + 1192) = 0;
  *(_QWORD*)(v7 + 1184) = 0;
  *(_QWORD*)(v7 + 1176) = 0;
  *(_QWORD*)(v7 + 984) = v14;
  *(_QWORD*)v7 = game_telop_TelopRideSkillLearn_vtable;
  v15 = *(_QWORD*)(a1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "TelopRideSkillLearn";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = (unsigned int)game_HashString32("TelopRideSkillLearn");
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  v16 = GameData_2130f68;
  *(_QWORD*)(v7 + 8) = GameData_2130f68;
  *(_QWORD*)(v7 + 16) = v16;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  v17 = (_BYTE*)*v9;
  v18 = *(_BYTE*)(*v9 + 138LL);
  if (v18 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v9);
    v18 = v17[138];
  }
  v17[138] = v18 + 1;
  *(_WORD*)(v7 + 136) |= 2u;
  if ((*(_BYTE*)(v7 + 272) & 1) != 0) {
    *(_QWORD*)(v7 + 280) = 17;
    v19 = *(char**)(v7 + 288);
  }
  else {
    *(_BYTE*)(v7 + 272) = 34;
    v19 = (char*)(v7 + 273);
  }
  strcpy(v19, "Layout/Common.arc");
  if ((*(_BYTE*)(v7 + 296) & 1) != 0) {
    *(_QWORD*)(v7 + 304) = 16;
    v20 = *(char**)(v7 + 312);
  }
  else {
    *(_BYTE*)(v7 + 296) = 32;
    v20 = (char*)(v7 + 297);
  }
  strcpy(v20, "Common_TlpResult");
  GameHr_1374b10(v7, 2);
  Se_80e330(v7, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v7, "SE_SYS_Telop_Mini_Out");
  Se_80e330(v7, "SE_SYS_Telop_SkillAcquire");
  *(_QWORD*)(v7 + 1168) = a2;
  v21 = Unit_931120(a3);
  GameRoutine_60a020(v7 + 1176, (const char*)v21);
  v22 = *a3;
  v40[0] = 0;
  v40[1] = a2;
  *(_QWORD*)(v7 + 1200) =
      *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8 * v22);
  if (a2 != 0) {
    v40[0] = *(_QWORD*)(a2 + 392);
  }
  *(_QWORD*)(v7 + 1208) =
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (*(_DWORD*)GameRoutine_932360(a3, v40) & 0xFFF));
  if (a2 == 0) {
    goto LABEL_31;
  }
  v23 = *(_QWORD*)(a2 + 392);
  if (v23 == 0) {
    goto LABEL_31;
  }
  v26 = *((unsigned __int8**)a3 + 3);
  v25 = a3 + 24;
  v24 = v26;
  if (v26 == nullptr) {
    goto LABEL_31;
  }
  v27 = *(unsigned __int8*)(v23 + 48);
  v28 = v25;
  do {
    v29 = v24[26];
    v30 = v29 >= v27;
    if (v29 >= v27) {
      v31 = 0;
    }
    else {
      v31 = 8;
    }
    if (v30) {
      v28 = v24;
    }
    v24 = *(unsigned __int8**)&v24[v31];
  } while (v24 != nullptr);
  if (v28 != v25 && v27 >= v28[26]) {
    v32 = *((_WORD*)v28 + 14) & 0xFFF;
  }
  else {
  LABEL_31:
    v32 = 0;
  }
  v33 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v33 < 1) {
    v34 = 0;
  }
  else {
    v34 = 0;
    v35 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v33 - 1));
    if (v35 >= v32) {
      v35 = v32;
    }
    if (v32 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
      v36 = v35;
    }
    else {
      v36 = *(_DWORD*)GameData_21d9988;
    }
    while (1) {
      v37 = (unsigned int)(v34 + v33) >> 1;
      v38 = *(_DWORD*)(GameData_21d9988 + 4LL * v37);
      if (v36 == v38) {
        break;
      }
      if (v36 < v38) {
        LODWORD(v33) = (unsigned int)(v34 + v33) >> 1;
      }
      else {
        v34 = v37 + 1;
      }
      if (v34 >= (int)v33) {
        goto LABEL_46;
      }
    }
    v34 = v37 + 1;
  }
LABEL_46:
  *(_DWORD*)(v7 + 1216) = v34;
  return v7;
}

__int64 game_telop_176a400(__int64 a1, __int64* a2, int a3)
{
  __int64 v3;
  bool v5;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  void* v18;
  _BYTE* v19;
  char v20;
  char* v21;
  char* v22;

  v3 = 0;
  v5 = a3 < 1 && (int)((unsigned __int64)(a2[1] - *a2) >> 3) < 1;
  if (a1 != 0 && !v5) {
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1224, 16, 0);
    memset(v3 + 144, 0, 0x438u);
    v10 = GameData_212c608[0];
    *(_QWORD*)(v3 + 88) = 0;
    *(_QWORD*)(v3 + 96) = 0;
    *(_QWORD*)(v3 + 104) = 0;
    *(_QWORD*)(v3 + 112) = 0;
    *(_QWORD*)(v3 + 120) = 0;
    *(_QWORD*)(v3 + 128) = 0;
    *(_WORD*)(v3 + 136) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 24) = "NULL";
    *(_QWORD*)(v3 + 32) = 0;
    v11 = (_QWORD*)(v3 + 32);
    *(_QWORD*)(v3 + 138) = 0;
    *(_QWORD*)(v3 + 144) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_QWORD*)v3 = v10 + 16;
    *(_QWORD*)(v3 + 8) = 0;
    game_ProcInst_Register(v3);
    *(_QWORD*)(v3 + 200) = 0;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_QWORD*)(v3 + 240) = 0;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 272) = 0;
    *(_QWORD*)(v3 + 280) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_DWORD*)(v3 + 332) = 0;
    *(_BYTE*)(v3 + 338) = 0;
    *(_QWORD*)(v3 + 344) = 0;
    *(_QWORD*)(v3 + 352) = 0;
    *(_QWORD*)(v3 + 360) = 0;
    *(_QWORD*)(v3 + 368) = 0;
    *(_DWORD*)(v3 + 320) = 3;
    *(_QWORD*)(v3 + 376) = 0;
    *(_QWORD*)(v3 + 384) = 0;
    *(_QWORD*)(v3 + 392) = 0;
    *(_QWORD*)(v3 + 400) = 0;
    *(_QWORD*)(v3 + 408) = 0;
    *(_QWORD*)(v3 + 416) = 0;
    *(_QWORD*)(v3 + 424) = 0;
    *(_DWORD*)(v3 + 432) = 0x2000;
    *(_QWORD*)(v3 + 472) = 0;
    *(_QWORD*)(v3 + 480) = 0;
    *(_QWORD*)(v3 + 440) = 0;
    *(_QWORD*)(v3 + 448) = 0;
    *(_QWORD*)(v3 + 504) = 0;
    *(_QWORD*)(v3 + 512) = 0;
    *(_QWORD*)(v3 + 488) = 0;
    *(_QWORD*)(v3 + 496) = 0;
    *(_DWORD*)(v3 + 520) = 1065353216;
    *(_QWORD*)(v3 + 324) = 0;
    *(_QWORD*)(v3 + 528) = 0;
    *(_QWORD*)(v3 + 536) = 0;
    *(_QWORD*)(v3 + 544) = 0;
    *(_DWORD*)(v3 + 552) = 1065353216;
    *(_WORD*)(v3 + 560) = 0;
    *(_WORD*)(v3 + 584) = 0;
    *(_BYTE*)(v3 + 608) = 0;
    *(_QWORD*)(v3 + 656) = 0;
    *(_QWORD*)(v3 + 648) = 0;
    *(_QWORD*)(v3 + 632) = 0;
    *(_WORD*)(v3 + 336) = 1;
    *(_QWORD*)(v3 + 624) = 0;
    *(_QWORD*)(v3 + 616) = 0;
    *(_QWORD*)(v3 + 688) = 0;
    *(_QWORD*)(v3 + 680) = 0;
    *(_QWORD*)(v3 + 672) = 0;
    *(_QWORD*)(v3 + 664) = 0;
    *(_DWORD*)(v3 + 696) = 1065353216;
    *(_QWORD*)(v3 + 720) = 0;
    *(_QWORD*)(v3 + 712) = 0;
    *(_QWORD*)(v3 + 704) = 0;
    *(_QWORD*)(v3 + 456) = 0;
    *(_QWORD*)(v3 + 464) = v3 + 472;
    *(_DWORD*)(v3 + 728) = 1065353216;
    *(_WORD*)(v3 + 736) = 0;
    *(_WORD*)(v3 + 760) = 0;
    *(_BYTE*)(v3 + 784) = 0;
    *(_QWORD*)(v3 + 792) = 0;
    *(_BYTE*)(v3 + 800) = 0;
    *(_QWORD*)(v3 + 640) = v3 + 648;
    v12 = *v9;
    v13 = GameData_2130240[0] + 2;
    *(_BYTE*)(v3 + 816) = 0;
    *(_BYTE*)(v3 + 820) = 0;
    *(_WORD*)(v3 + 824) = 0;
    *(_QWORD*)(v3 + 808) = v13;
    *(_QWORD*)v3 = game_telop_TelopResult_vtable;
    v14 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
    *(_DWORD*)(v14 + 48) = 0x2000;
    v15 = GameData_2131678;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_QWORD*)(v3 + 856) = v14;
    *(_WORD*)(v3 + 960) = 0;
    *(_QWORD*)(v3 + 1016) = 0;
    *(_QWORD*)(v3 + 992) = 0;
    *(_QWORD*)(v3 + 1000) = 0;
    *(_BYTE*)(v3 + 952) = 0;
    *(_QWORD*)(v3 + 944) = 0;
    *(_QWORD*)(v3 + 936) = 0;
    *(_QWORD*)(v3 + 928) = 0;
    *(_QWORD*)(v3 + 920) = 0;
    *(_QWORD*)(v3 + 912) = 0;
    *(_QWORD*)(v3 + 904) = 0;
    *(_QWORD*)(v3 + 896) = 0;
    *(_QWORD*)(v3 + 888) = 0;
    *(_QWORD*)(v3 + 880) = 0;
    *(_QWORD*)(v3 + 872) = 0;
    *(_QWORD*)(v3 + 864) = 0;
    *(_QWORD*)(v3 + 1024) = 1065353216;
    *(_WORD*)(v3 + 1032) = 0;
    *(_WORD*)(v3 + 1040) = 0;
    *(_WORD*)(v3 + 1064) = 0;
    *(_WORD*)(v3 + 1088) = 0;
    *(_QWORD*)v14 = v15 + 16;
    *(_DWORD*)(v14 + 292) = 2;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v3 + 848) = v14 + 24;
    *(_QWORD*)(v3 + 1007) = 0;
    v16 = GameData_2130f98[0] + 2;
    *(_BYTE*)(v3 + 1152) = 0;
    *(_QWORD*)(v3 + 1144) = 0;
    *(_QWORD*)(v3 + 1136) = 0;
    *(_QWORD*)(v3 + 1128) = 0;
    *(_QWORD*)(v3 + 1120) = 0;
    *(_QWORD*)(v3 + 1112) = 0;
    *(_QWORD*)(v3 + 1208) = 0;
    *(_QWORD*)(v3 + 1200) = 0;
    *(_QWORD*)(v3 + 1192) = 0;
    *(_QWORD*)(v3 + 1184) = 0;
    *(_QWORD*)(v3 + 1176) = 0;
    *(_QWORD*)(v3 + 1168) = 0;
    *(_QWORD*)(v3 + 1160) = 0;
    *(_DWORD*)(v3 + 1216) = 0;
    *(_QWORD*)(v3 + 984) = v16;
    *(_QWORD*)v3 = game_telop_TelopDestroyMiasmaResult_vtable;
    v17 = *(_QWORD*)(a1 + 40);
    if (v17 != 0) {
      *(_QWORD*)(v17 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "TelopDestroyMiasmaResult";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) =
        (unsigned int)game_HashString32("TelopDestroyMiasmaResult");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    v18 = GameData_2130f68;
    *(_QWORD*)(v3 + 8) = GameData_2130f68;
    *(_QWORD*)(v3 + 16) = v18;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
        (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v19 = (_BYTE*)*v11;
    v20 = *(_BYTE*)(*v11 + 138LL);
    if (v20 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v19 + 64LL))(*v11);
      v20 = v19[138];
    }
    v19[138] = v20 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
    if ((*(_BYTE*)(v3 + 272) & 1) != 0) {
      *(_QWORD*)(v3 + 280) = 17;
      v21 = *(char**)(v3 + 288);
    }
    else {
      *(_BYTE*)(v3 + 272) = 34;
      v21 = (char*)(v3 + 273);
    }
    strcpy(v21, "Layout/Common.arc");
    if ((*(_BYTE*)(v3 + 296) & 1) != 0) {
      *(_QWORD*)(v3 + 304) = 16;
      v22 = *(char**)(v3 + 312);
    }
    else {
      *(_BYTE*)(v3 + 296) = 32;
      v22 = (char*)(v3 + 297);
    }
    strcpy(v22, "Common_TlpResult");
    GameHr_1374b10(v3, 2);
    Se_80e330(v3, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v3, "SE_SYS_Telop_Mini_Out");
    Se_80e330(v3, "SE_SYS_Telop_MiasmaRemoval");
    if ((__int64*)(v3 + 1168) != a2) {
      GameRoutine_6f4cd0((__int64*)(v3 + 1168), *a2, a2[1], (a2[1] - *a2) >> 3);
    }
    *(_DWORD*)(v3 + 1216) = a3;
  }
  return v3;
}

__int64 game_telop_176aa90(__int64 a1, __int64* a2, int a3)
{
  __int64 v3;
  bool v5;
  __int64* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  void* v18;
  _BYTE* v19;
  char v20;
  char* v21;
  char* v22;

  v3 = 0;
  v5 = a3 < 1 && (int)((unsigned __int64)(a2[1] - *a2) >> 3) < 1;
  if (a1 != 0 && !v5) {
    v9 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1224, 16, 0);
    memset(v3 + 144, 0, 0x438u);
    v10 = GameData_212c608[0];
    *(_QWORD*)(v3 + 88) = 0;
    *(_QWORD*)(v3 + 96) = 0;
    *(_QWORD*)(v3 + 104) = 0;
    *(_QWORD*)(v3 + 112) = 0;
    *(_QWORD*)(v3 + 120) = 0;
    *(_QWORD*)(v3 + 128) = 0;
    *(_WORD*)(v3 + 136) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 24) = "NULL";
    *(_QWORD*)(v3 + 32) = 0;
    v11 = (_QWORD*)(v3 + 32);
    *(_QWORD*)(v3 + 138) = 0;
    *(_QWORD*)(v3 + 144) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_QWORD*)v3 = v10 + 16;
    *(_QWORD*)(v3 + 8) = 0;
    game_ProcInst_Register(v3);
    *(_QWORD*)(v3 + 200) = 0;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_QWORD*)(v3 + 240) = 0;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 272) = 0;
    *(_QWORD*)(v3 + 280) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_DWORD*)(v3 + 332) = 0;
    *(_BYTE*)(v3 + 338) = 0;
    *(_QWORD*)(v3 + 344) = 0;
    *(_QWORD*)(v3 + 352) = 0;
    *(_QWORD*)(v3 + 360) = 0;
    *(_QWORD*)(v3 + 368) = 0;
    *(_DWORD*)(v3 + 320) = 3;
    *(_QWORD*)(v3 + 376) = 0;
    *(_QWORD*)(v3 + 384) = 0;
    *(_QWORD*)(v3 + 392) = 0;
    *(_QWORD*)(v3 + 400) = 0;
    *(_QWORD*)(v3 + 408) = 0;
    *(_QWORD*)(v3 + 416) = 0;
    *(_QWORD*)(v3 + 424) = 0;
    *(_DWORD*)(v3 + 432) = 0x2000;
    *(_QWORD*)(v3 + 472) = 0;
    *(_QWORD*)(v3 + 480) = 0;
    *(_QWORD*)(v3 + 440) = 0;
    *(_QWORD*)(v3 + 448) = 0;
    *(_QWORD*)(v3 + 504) = 0;
    *(_QWORD*)(v3 + 512) = 0;
    *(_QWORD*)(v3 + 488) = 0;
    *(_QWORD*)(v3 + 496) = 0;
    *(_DWORD*)(v3 + 520) = 1065353216;
    *(_QWORD*)(v3 + 324) = 0;
    *(_QWORD*)(v3 + 528) = 0;
    *(_QWORD*)(v3 + 536) = 0;
    *(_QWORD*)(v3 + 544) = 0;
    *(_DWORD*)(v3 + 552) = 1065353216;
    *(_WORD*)(v3 + 560) = 0;
    *(_WORD*)(v3 + 584) = 0;
    *(_BYTE*)(v3 + 608) = 0;
    *(_QWORD*)(v3 + 656) = 0;
    *(_QWORD*)(v3 + 648) = 0;
    *(_QWORD*)(v3 + 632) = 0;
    *(_WORD*)(v3 + 336) = 1;
    *(_QWORD*)(v3 + 624) = 0;
    *(_QWORD*)(v3 + 616) = 0;
    *(_QWORD*)(v3 + 688) = 0;
    *(_QWORD*)(v3 + 680) = 0;
    *(_QWORD*)(v3 + 672) = 0;
    *(_QWORD*)(v3 + 664) = 0;
    *(_DWORD*)(v3 + 696) = 1065353216;
    *(_QWORD*)(v3 + 720) = 0;
    *(_QWORD*)(v3 + 712) = 0;
    *(_QWORD*)(v3 + 704) = 0;
    *(_QWORD*)(v3 + 456) = 0;
    *(_QWORD*)(v3 + 464) = v3 + 472;
    *(_DWORD*)(v3 + 728) = 1065353216;
    *(_WORD*)(v3 + 736) = 0;
    *(_WORD*)(v3 + 760) = 0;
    *(_BYTE*)(v3 + 784) = 0;
    *(_QWORD*)(v3 + 792) = 0;
    *(_BYTE*)(v3 + 800) = 0;
    *(_QWORD*)(v3 + 640) = v3 + 648;
    v12 = *v9;
    v13 = GameData_2130240[0] + 2;
    *(_BYTE*)(v3 + 816) = 0;
    *(_BYTE*)(v3 + 820) = 0;
    *(_WORD*)(v3 + 824) = 0;
    *(_QWORD*)(v3 + 808) = v13;
    *(_QWORD*)v3 = game_telop_TelopResult_vtable;
    v14 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
    *(_DWORD*)(v14 + 48) = 0x2000;
    v15 = GameData_2131678;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_QWORD*)(v3 + 856) = v14;
    *(_WORD*)(v3 + 960) = 0;
    *(_QWORD*)(v3 + 1016) = 0;
    *(_QWORD*)(v3 + 992) = 0;
    *(_QWORD*)(v3 + 1000) = 0;
    *(_BYTE*)(v3 + 952) = 0;
    *(_QWORD*)(v3 + 944) = 0;
    *(_QWORD*)(v3 + 936) = 0;
    *(_QWORD*)(v3 + 928) = 0;
    *(_QWORD*)(v3 + 920) = 0;
    *(_QWORD*)(v3 + 912) = 0;
    *(_QWORD*)(v3 + 904) = 0;
    *(_QWORD*)(v3 + 896) = 0;
    *(_QWORD*)(v3 + 888) = 0;
    *(_QWORD*)(v3 + 880) = 0;
    *(_QWORD*)(v3 + 872) = 0;
    *(_QWORD*)(v3 + 864) = 0;
    *(_QWORD*)(v3 + 1024) = 1065353216;
    *(_WORD*)(v3 + 1032) = 0;
    *(_WORD*)(v3 + 1040) = 0;
    *(_WORD*)(v3 + 1064) = 0;
    *(_WORD*)(v3 + 1088) = 0;
    *(_QWORD*)v14 = v15 + 16;
    *(_DWORD*)(v14 + 292) = 2;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v3 + 848) = v14 + 24;
    *(_QWORD*)(v3 + 1007) = 0;
    v16 = GameData_2130f98[0] + 2;
    *(_BYTE*)(v3 + 1152) = 0;
    *(_QWORD*)(v3 + 1144) = 0;
    *(_QWORD*)(v3 + 1136) = 0;
    *(_QWORD*)(v3 + 1128) = 0;
    *(_QWORD*)(v3 + 1120) = 0;
    *(_QWORD*)(v3 + 1112) = 0;
    *(_QWORD*)(v3 + 1208) = 0;
    *(_QWORD*)(v3 + 1200) = 0;
    *(_QWORD*)(v3 + 1192) = 0;
    *(_QWORD*)(v3 + 1184) = 0;
    *(_QWORD*)(v3 + 1176) = 0;
    *(_QWORD*)(v3 + 1168) = 0;
    *(_QWORD*)(v3 + 1160) = 0;
    *(_DWORD*)(v3 + 1216) = 0;
    *(_QWORD*)(v3 + 984) = v16;
    *(_QWORD*)v3 = game_telop_TelopDestroyGateResult_vtable;
    v17 = *(_QWORD*)(a1 + 40);
    if (v17 != 0) {
      *(_QWORD*)(v17 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "TelopDestroyGateResult";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) =
        (unsigned int)game_HashString32("TelopDestroyGateResult");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    v18 = GameData_2130f68;
    *(_QWORD*)(v3 + 8) = GameData_2130f68;
    *(_QWORD*)(v3 + 16) = v18;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
        (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v19 = (_BYTE*)*v11;
    v20 = *(_BYTE*)(*v11 + 138LL);
    if (v20 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v19 + 64LL))(*v11);
      v20 = v19[138];
    }
    v19[138] = v20 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
    if ((*(_BYTE*)(v3 + 272) & 1) != 0) {
      *(_QWORD*)(v3 + 280) = 17;
      v21 = *(char**)(v3 + 288);
    }
    else {
      *(_BYTE*)(v3 + 272) = 34;
      v21 = (char*)(v3 + 273);
    }
    strcpy(v21, "Layout/Common.arc");
    if ((*(_BYTE*)(v3 + 296) & 1) != 0) {
      *(_QWORD*)(v3 + 304) = 16;
      v22 = *(char**)(v3 + 312);
    }
    else {
      *(_BYTE*)(v3 + 296) = 32;
      v22 = (char*)(v3 + 297);
    }
    strcpy(v22, "Common_TlpResult");
    GameHr_1374b10(v3, 2);
    Se_80e330(v3, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v3, "SE_SYS_Telop_Mini_Out");
    Se_80e330(v3, "SE_SYS_Telop_GateDestroy");
    if ((__int64*)(v3 + 1168) != a2) {
      GameRoutine_6f4cd0((__int64*)(v3 + 1168), *a2, a2[1], (a2[1] - *a2) >> 3);
    }
    *(_DWORD*)(v3 + 1216) = a3;
  }
  return v3;
}

__int64 game_telop_176b120(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  if (a1 != 0 && a2 != 0) {
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1224, 16, 0);
    memset(v5 + 144, 0, 0x438u);
    v6 = GameData_212c608[0];
    *(_QWORD*)(v5 + 88) = 0;
    *(_QWORD*)(v5 + 96) = 0;
    *(_QWORD*)(v5 + 104) = 0;
    *(_QWORD*)(v5 + 112) = 0;
    *(_QWORD*)(v5 + 120) = 0;
    *(_QWORD*)(v5 + 128) = 0;
    *(_WORD*)(v5 + 136) = 0;
    *(_QWORD*)(v5 + 16) = 0;
    *(_QWORD*)(v5 + 24) = "NULL";
    *(_QWORD*)(v5 + 32) = 0;
    v7 = (_QWORD*)(v5 + 32);
    *(_QWORD*)(v5 + 138) = 0;
    *(_QWORD*)(v5 + 144) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_QWORD*)(v5 + 80) = 0;
    *(_QWORD*)v5 = v6 + 16;
    *(_QWORD*)(v5 + 8) = 0;
    game_ProcInst_Register(v5);
    *(_QWORD*)(v5 + 200) = 0;
    *(_QWORD*)(v5 + 152) = 0;
    *(_QWORD*)(v5 + 160) = 0;
    *(_QWORD*)(v5 + 168) = 0;
    *(_QWORD*)(v5 + 176) = 0;
    *(_QWORD*)(v5 + 208) = 0;
    *(_QWORD*)(v5 + 216) = 0;
    *(_QWORD*)(v5 + 224) = 0;
    *(_QWORD*)(v5 + 232) = 0;
    *(_QWORD*)(v5 + 184) = 0;
    *(_QWORD*)(v5 + 192) = v5 + 200;
    *(_QWORD*)(v5 + 240) = 0;
    *(_DWORD*)(v5 + 248) = 1065353216;
    *(_QWORD*)(v5 + 256) = 0;
    *(_QWORD*)(v5 + 264) = 0;
    *(_QWORD*)(v5 + 272) = 0;
    *(_QWORD*)(v5 + 280) = 0;
    *(_QWORD*)(v5 + 288) = 0;
    *(_QWORD*)(v5 + 296) = 0;
    *(_QWORD*)(v5 + 304) = 0;
    *(_QWORD*)(v5 + 312) = 0;
    *(_DWORD*)(v5 + 332) = 0;
    *(_BYTE*)(v5 + 338) = 0;
    *(_QWORD*)(v5 + 344) = 0;
    *(_QWORD*)(v5 + 352) = 0;
    *(_QWORD*)(v5 + 360) = 0;
    *(_QWORD*)(v5 + 368) = 0;
    *(_DWORD*)(v5 + 320) = 3;
    *(_QWORD*)(v5 + 376) = 0;
    *(_QWORD*)(v5 + 384) = 0;
    *(_QWORD*)(v5 + 392) = 0;
    *(_QWORD*)(v5 + 400) = 0;
    *(_QWORD*)(v5 + 408) = 0;
    *(_QWORD*)(v5 + 416) = 0;
    *(_QWORD*)(v5 + 424) = 0;
    *(_DWORD*)(v5 + 432) = 0x2000;
    *(_QWORD*)(v5 + 472) = 0;
    *(_QWORD*)(v5 + 480) = 0;
    *(_QWORD*)(v5 + 440) = 0;
    *(_QWORD*)(v5 + 448) = 0;
    *(_QWORD*)(v5 + 504) = 0;
    *(_QWORD*)(v5 + 512) = 0;
    *(_QWORD*)(v5 + 488) = 0;
    *(_QWORD*)(v5 + 496) = 0;
    *(_DWORD*)(v5 + 520) = 1065353216;
    *(_QWORD*)(v5 + 324) = 0;
    *(_QWORD*)(v5 + 528) = 0;
    *(_QWORD*)(v5 + 536) = 0;
    *(_QWORD*)(v5 + 544) = 0;
    *(_DWORD*)(v5 + 552) = 1065353216;
    *(_WORD*)(v5 + 560) = 0;
    *(_WORD*)(v5 + 584) = 0;
    *(_BYTE*)(v5 + 608) = 0;
    *(_QWORD*)(v5 + 656) = 0;
    *(_QWORD*)(v5 + 648) = 0;
    *(_QWORD*)(v5 + 632) = 0;
    *(_WORD*)(v5 + 336) = 1;
    *(_QWORD*)(v5 + 624) = 0;
    *(_QWORD*)(v5 + 616) = 0;
    *(_QWORD*)(v5 + 688) = 0;
    *(_QWORD*)(v5 + 680) = 0;
    *(_QWORD*)(v5 + 672) = 0;
    *(_QWORD*)(v5 + 664) = 0;
    *(_DWORD*)(v5 + 696) = 1065353216;
    *(_QWORD*)(v5 + 720) = 0;
    *(_QWORD*)(v5 + 712) = 0;
    *(_QWORD*)(v5 + 704) = 0;
    *(_QWORD*)(v5 + 456) = 0;
    *(_QWORD*)(v5 + 464) = v5 + 472;
    *(_DWORD*)(v5 + 728) = 1065353216;
    *(_WORD*)(v5 + 736) = 0;
    *(_WORD*)(v5 + 760) = 0;
    *(_BYTE*)(v5 + 784) = 0;
    *(_QWORD*)(v5 + 792) = 0;
    *(_BYTE*)(v5 + 800) = 0;
    *(_QWORD*)(v5 + 640) = v5 + 648;
    v8 = *v4;
    v9 = GameData_2130240[0] + 2;
    *(_BYTE*)(v5 + 816) = 0;
    *(_BYTE*)(v5 + 820) = 0;
    *(_WORD*)(v5 + 824) = 0;
    *(_QWORD*)(v5 + 808) = v9;
    *(_QWORD*)v5 = game_telop_TelopResult_vtable;
    v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
    *(_DWORD*)(v10 + 48) = 0x2000;
    v11 = GameData_2131678;
    *(_WORD*)(v10 + 108) = 256;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    *(_QWORD*)(v5 + 856) = v10;
    *(_WORD*)(v5 + 960) = 0;
    *(_QWORD*)(v5 + 1016) = 0;
    *(_QWORD*)(v5 + 992) = 0;
    *(_QWORD*)(v5 + 1000) = 0;
    *(_BYTE*)(v5 + 952) = 0;
    *(_QWORD*)(v5 + 944) = 0;
    *(_QWORD*)(v5 + 936) = 0;
    *(_QWORD*)(v5 + 928) = 0;
    *(_QWORD*)(v5 + 920) = 0;
    *(_QWORD*)(v5 + 912) = 0;
    *(_QWORD*)(v5 + 904) = 0;
    *(_QWORD*)(v5 + 896) = 0;
    *(_QWORD*)(v5 + 888) = 0;
    *(_QWORD*)(v5 + 880) = 0;
    *(_QWORD*)(v5 + 872) = 0;
    *(_QWORD*)(v5 + 864) = 0;
    *(_QWORD*)(v5 + 1024) = 1065353216;
    *(_WORD*)(v5 + 1032) = 0;
    *(_WORD*)(v5 + 1040) = 0;
    *(_WORD*)(v5 + 1064) = 0;
    *(_WORD*)(v5 + 1088) = 0;
    *(_QWORD*)v10 = v11 + 16;
    *(_DWORD*)(v10 + 292) = 2;
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v5 + 848) = v10 + 24;
    *(_QWORD*)(v5 + 1007) = 0;
    v12 = GameData_2130f98[0] + 2;
    *(_BYTE*)(v5 + 1152) = 0;
    *(_QWORD*)(v5 + 1144) = 0;
    *(_QWORD*)(v5 + 1136) = 0;
    *(_QWORD*)(v5 + 1128) = 0;
    *(_QWORD*)(v5 + 1120) = 0;
    *(_QWORD*)(v5 + 1112) = 0;
    *(_QWORD*)(v5 + 1208) = 0;
    *(_QWORD*)(v5 + 1200) = 0;
    *(_QWORD*)(v5 + 1192) = 0;
    *(_QWORD*)(v5 + 1184) = 0;
    *(_QWORD*)(v5 + 1176) = 0;
    *(_QWORD*)(v5 + 1168) = 0;
    *(_QWORD*)(v5 + 1160) = 0;
    *(_QWORD*)(v5 + 1216) = 0;
    *(_QWORD*)(v5 + 984) = v12;
    *(_QWORD*)v5 = game_telop_TelopShowResult_vtable;
    v13 = *(_QWORD*)(a1 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "TelopShowResult";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("TelopShowResult");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    v14 = GameData_2130f68;
    *(_QWORD*)(v5 + 8) = GameData_2130f68;
    *(_QWORD*)(v5 + 16) = v14;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v15 = (_BYTE*)*v7;
    v16 = *(_BYTE*)(*v7 + 138LL);
    if (v16 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
      v16 = v15[138];
    }
    v15[138] = v16 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
    if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
      *(_QWORD*)(v5 + 280) = 17;
      v17 = *(char**)(v5 + 288);
    }
    else {
      *(_BYTE*)(v5 + 272) = 34;
      v17 = (char*)(v5 + 273);
    }
    strcpy(v17, "Layout/Common.arc");
    if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
      *(_QWORD*)(v5 + 304) = 16;
      v18 = *(char**)(v5 + 312);
    }
    else {
      *(_BYTE*)(v5 + 296) = 32;
      v18 = (char*)(v5 + 297);
    }
    strcpy(v18, "Common_TlpResult");
    GameHr_1374b10(v5, 2);
    Se_80e330(v5, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
    Se_80e330(v5, "SE_SYS_Telop_Result");
    Se_80e330(v5, "FF_Positive1");
    *(_QWORD*)(v5 + 1216) = a2;
    if (game_GameModeData_instance_ != 0) {
      v19 = 80;
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
        v19 = 96;
      }
    }
    else {
      v19 = 96;
    }
    HonorFile_9c7620((void*)(&v23_.v23), (unsigned __int16*)(a2 + v19));
    GameRoutine_6f4cd0((__int64*)(v5 + 1168), v23_.v23, v23_.v24,
                       (v23_.v24 - v23_.v23) >> 3);
    if (v23_.v23 != 0) {
      v20 = *v4;
      v23_.v24 = v23_.v23;
      v21 = 128;
      if (*(_QWORD*)(v20 + 200) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(v20 + v21, v23_.v23);
    }
  }
  return 0;
}

__int64 game_telop_176b750(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  memset(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopReconstructionResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopReconstructionResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopReconstructionResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameHr_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
  Se_80e330(v5, "SE_SYS_Telop_Clear");
  Se_80e330(v5, "FF_Quest_Clear");
  *(_QWORD*)(v5 + 1168) = a2;
  return v5;
}

__int64 game_telop_176bdb0(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a1 == 0 || *a2 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0);
  memset(v5 + 144, 0, 0x410u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_DWORD*)(v10 + 48) = 0x2000;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1176) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopCaptureSuccessResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopCaptureSuccessResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopCaptureSuccessResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameHr_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
  Se_80e330(v5, "FF_Capture_Success");
  v19 = *a2;
  v20 = a2[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
  }
  v21 = *(_QWORD*)(v5 + 1176);
  *(_QWORD*)(v5 + 1168) = v19;
  *(_QWORD*)(v5 + 1176) = v20;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  return v5;
}

__int64 game_telop_176c370(__int64 a1, __int64* a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  if (a1 == 0 || *a2 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0);
  memset(v5 + 144, 0, 0x410u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_DWORD*)(v10 + 48) = 0x2000;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1176) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopCaptureFailResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopCaptureFailResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopCaptureFailResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameHr_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
  Se_80e330(v5, "FF_Capture_Failure");
  v19 = *a2;
  v20 = a2[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
  }
  v21 = *(_QWORD*)(v5 + 1176);
  *(_QWORD*)(v5 + 1168) = v19;
  *(_QWORD*)(v5 + 1176) = v20;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  return v5;
}

__int64 game_telop_176caa0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  void* v18;
  _BYTE* v19;
  char v20;
  char* v21;
  char* v22;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;

  if (a1 == 0) {
    return 0;
  }
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1232, 16, 0);
  memset(v9 + 144, 0, 0x440u);
  v10 = GameData_212c608[0];
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = "NULL";
  *(_QWORD*)(v9 + 32) = 0;
  v11 = (_QWORD*)(v9 + 32);
  *(_QWORD*)(v9 + 138) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)v9 = v10 + 16;
  *(_QWORD*)(v9 + 8) = 0;
  game_ProcInst_Register(v9);
  *(_QWORD*)(v9 + 200) = 0;
  *(_QWORD*)(v9 + 152) = 0;
  *(_QWORD*)(v9 + 160) = 0;
  *(_QWORD*)(v9 + 168) = 0;
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_QWORD*)(v9 + 192) = v9 + 200;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_DWORD*)(v9 + 248) = 1065353216;
  *(_QWORD*)(v9 + 256) = 0;
  *(_QWORD*)(v9 + 264) = 0;
  *(_QWORD*)(v9 + 272) = 0;
  *(_QWORD*)(v9 + 280) = 0;
  *(_QWORD*)(v9 + 288) = 0;
  *(_QWORD*)(v9 + 296) = 0;
  *(_QWORD*)(v9 + 304) = 0;
  *(_QWORD*)(v9 + 312) = 0;
  *(_DWORD*)(v9 + 332) = 0;
  *(_WORD*)(v9 + 336) = 1;
  *(_BYTE*)(v9 + 338) = 0;
  *(_DWORD*)(v9 + 320) = 3;
  *(_QWORD*)(v9 + 344) = 0;
  *(_QWORD*)(v9 + 352) = 0;
  *(_QWORD*)(v9 + 360) = 0;
  *(_QWORD*)(v9 + 368) = 0;
  *(_QWORD*)(v9 + 376) = 0;
  *(_QWORD*)(v9 + 384) = 0;
  *(_QWORD*)(v9 + 392) = 0;
  *(_QWORD*)(v9 + 400) = 0;
  *(_QWORD*)(v9 + 408) = 0;
  *(_QWORD*)(v9 + 416) = 0;
  *(_QWORD*)(v9 + 424) = 0;
  *(_DWORD*)(v9 + 432) = 0x2000;
  *(_QWORD*)(v9 + 472) = 0;
  *(_QWORD*)(v9 + 480) = 0;
  *(_QWORD*)(v9 + 440) = 0;
  *(_QWORD*)(v9 + 448) = 0;
  *(_QWORD*)(v9 + 504) = 0;
  *(_QWORD*)(v9 + 512) = 0;
  *(_QWORD*)(v9 + 324) = 0;
  *(_QWORD*)(v9 + 488) = 0;
  *(_QWORD*)(v9 + 496) = 0;
  *(_DWORD*)(v9 + 520) = 1065353216;
  *(_QWORD*)(v9 + 528) = 0;
  *(_QWORD*)(v9 + 536) = 0;
  *(_QWORD*)(v9 + 544) = 0;
  *(_DWORD*)(v9 + 552) = 1065353216;
  *(_WORD*)(v9 + 560) = 0;
  *(_WORD*)(v9 + 584) = 0;
  *(_BYTE*)(v9 + 608) = 0;
  *(_QWORD*)(v9 + 656) = 0;
  *(_QWORD*)(v9 + 456) = 0;
  *(_QWORD*)(v9 + 464) = v9 + 472;
  *(_QWORD*)(v9 + 648) = 0;
  *(_QWORD*)(v9 + 632) = 0;
  *(_QWORD*)(v9 + 624) = 0;
  *(_QWORD*)(v9 + 616) = 0;
  *(_QWORD*)(v9 + 688) = 0;
  *(_QWORD*)(v9 + 680) = 0;
  *(_QWORD*)(v9 + 672) = 0;
  *(_QWORD*)(v9 + 664) = 0;
  *(_DWORD*)(v9 + 696) = 1065353216;
  *(_QWORD*)(v9 + 720) = 0;
  *(_QWORD*)(v9 + 640) = v9 + 648;
  *(_QWORD*)(v9 + 712) = 0;
  *(_QWORD*)(v9 + 704) = 0;
  *(_DWORD*)(v9 + 728) = 1065353216;
  *(_WORD*)(v9 + 736) = 0;
  *(_WORD*)(v9 + 760) = 0;
  *(_BYTE*)(v9 + 784) = 0;
  *(_QWORD*)(v9 + 792) = 0;
  *(_BYTE*)(v9 + 800) = 0;
  v12 = *v8;
  v13 = GameData_2130240[0] + 2;
  *(_BYTE*)(v9 + 816) = 0;
  *(_BYTE*)(v9 + 820) = 0;
  *(_WORD*)(v9 + 824) = 0;
  *(_QWORD*)(v9 + 808) = v13;
  *(_QWORD*)v9 = game_telop_TelopResult_vtable;
  v14 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
  *(_DWORD*)(v14 + 48) = 0x2000;
  v15 = GameData_2131678;
  *(_WORD*)(v14 + 108) = 256;
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_DWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 0;
  *(_DWORD*)(v14 + 112) = -1082130432;
  *(_WORD*)(v14 + 116) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_BYTE*)(v14 + 160) = 0;
  *(_BYTE*)(v14 + 288) = 0;
  *(_QWORD*)(v14 + 272) = 0;
  *(_QWORD*)(v14 + 280) = 0;
  *(_QWORD*)(v14 + 256) = 0;
  *(_QWORD*)(v14 + 264) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_DWORD*)(v14 + 127) = 0;
  *(_QWORD*)(v9 + 856) = v14;
  *(_WORD*)(v9 + 960) = 0;
  *(_QWORD*)(v9 + 1016) = 0;
  *(_QWORD*)(v9 + 992) = 0;
  *(_QWORD*)(v9 + 1000) = 0;
  *(_BYTE*)(v9 + 952) = 0;
  *(_QWORD*)(v9 + 944) = 0;
  *(_QWORD*)(v9 + 936) = 0;
  *(_QWORD*)(v9 + 928) = 0;
  *(_QWORD*)(v9 + 920) = 0;
  *(_QWORD*)(v9 + 912) = 0;
  *(_QWORD*)(v9 + 904) = 0;
  *(_QWORD*)(v9 + 896) = 0;
  *(_QWORD*)(v9 + 888) = 0;
  *(_QWORD*)(v9 + 880) = 0;
  *(_QWORD*)(v9 + 872) = 0;
  *(_QWORD*)(v9 + 864) = 0;
  *(_QWORD*)(v9 + 1024) = 1065353216;
  *(_WORD*)(v9 + 1032) = 0;
  *(_WORD*)(v9 + 1040) = 0;
  *(_WORD*)(v9 + 1064) = 0;
  *(_WORD*)(v9 + 1088) = 0;
  *(_QWORD*)v14 = v15 + 16;
  *(_DWORD*)(v14 + 292) = 2;
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v9 + 848) = v14 + 24;
  *(_QWORD*)(v9 + 1007) = 0;
  v16 = GameData_2130f98[0] + 2;
  *(_BYTE*)(v9 + 1152) = 0;
  *(_QWORD*)(v9 + 1144) = 0;
  *(_QWORD*)(v9 + 1136) = 0;
  *(_QWORD*)(v9 + 1128) = 0;
  *(_QWORD*)(v9 + 1120) = 0;
  *(_QWORD*)(v9 + 1112) = 0;
  *(_QWORD*)(v9 + 1208) = 0;
  *(_QWORD*)(v9 + 1200) = 0;
  *(_QWORD*)(v9 + 1192) = 0;
  *(_QWORD*)(v9 + 1184) = 0;
  *(_QWORD*)(v9 + 1176) = 0;
  *(_QWORD*)(v9 + 1168) = 0;
  *(_QWORD*)(v9 + 1160) = 0;
  *(_QWORD*)(v9 + 1216) = 0;
  *(_DWORD*)(v9 + 1224) = 1;
  *(_QWORD*)(v9 + 984) = v16;
  *(_QWORD*)v9 = game_telop_TelopCaptureFailAfterGetItemResult_vtable;
  v17 = *(_QWORD*)(a1 + 40);
  if (v17 != 0) {
    *(_QWORD*)(v17 + 48) = v9;
    *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v9;
  *(_QWORD*)(v9 + 24) = "TelopCaptureFailAfterGetItemResult";
  *(_QWORD*)(v9 + 32) = a1;
  *(_DWORD*)(v9 + 140) =
      (unsigned int)game_HashString32("TelopCaptureFailAfterGetItemResult");
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 24;
  *(_QWORD*)(v9 + 80) = 1;
  v18 = GameData_2130f68;
  *(_QWORD*)(v9 + 8) = GameData_2130f68;
  *(_QWORD*)(v9 + 16) = v18;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
      (*(_WORD*)(v9 + 136) & 0x100) == 0) {
    *(_WORD*)(v9 + 136) |= 0x100u;
  }
  v19 = (_BYTE*)*v11;
  v20 = *(_BYTE*)(*v11 + 138LL);
  if (v20 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v19 + 64LL))(*v11);
    v20 = v19[138];
  }
  v19[138] = v20 + 1;
  *(_WORD*)(v9 + 136) |= 2u;
  if ((*(_BYTE*)(v9 + 272) & 1) != 0) {
    *(_QWORD*)(v9 + 280) = 17;
    v21 = *(char**)(v9 + 288);
  }
  else {
    *(_BYTE*)(v9 + 272) = 34;
    v21 = (char*)(v9 + 273);
  }
  strcpy(v21, "Layout/Common.arc");
  if ((*(_BYTE*)(v9 + 296) & 1) != 0) {
    *(_QWORD*)(v9 + 304) = 16;
    v22 = *(char**)(v9 + 312);
  }
  else {
    *(_BYTE*)(v9 + 296) = 32;
    v22 = (char*)(v9 + 297);
  }
  strcpy(v22, "Common_TlpResult");
  GameHr_1374b10(v9, 2);
  Se_80e330(v9, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v9, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v9 + 1216) = a2;
  *(_DWORD*)(v9 + 1224) = a3;
  v24_.v24 = a4;
  v24_.v25 = 0;
  if (a4 != 0) {
    v24_.v25 = *(_QWORD*)(a4 + 392);
  }
  game_97e570((unsigned __int8*)(v9 + 824), &v24_.v24,
              "MID_Gmap_CaptureAnimalFailed", "001");
  return v9;
}

__int64 game_telop_176d060(__int64 a1, _BYTE* a2, const char* a3,
                           const char* a4)
{
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  void* v19;
  _BYTE* v20;
  char v21;
  char* v22;
  char* v23;
  __int64* v24;
  const char* v25;
  __int64 v26;
  char* v27;
  struct {
    __int64* v29;
    unsigned __int64 v30;
    unsigned __int64 v31;
    unsigned __int64 v32;
    int v33;
    int v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v29_;

  if (a1 == 0) {
    return 0;
  }
  if (*a2 == 0) {
    return 0;
  }
  v29_.v30 = (unsigned __int64)a2;
  v29_.v29 = (__int64*)game_HashString((__int64)a2);
  if (game_GameModeData_instance_ != 0) {
    v8 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v29_.v29);
    if (v8 != 0 && *(int*)(v8 + 32) > 0) {
      return 0;
    }
  }
  v29_.v30 = (unsigned __int64)a2;
  v29_.v29 = (__int64*)game_HashString((__int64)a2);
  game_VariableManager_SetFlag((__int64)&v29_.v29, 1);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1200, 16, 0);
  memset(v9 + 144, 0, 0x420u);
  v11 = GameData_212c608[0];
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = "NULL";
  *(_QWORD*)(v9 + 32) = 0;
  v12 = (_QWORD*)(v9 + 32);
  *(_QWORD*)(v9 + 138) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)v9 = v11 + 16;
  *(_QWORD*)(v9 + 8) = 0;
  game_ProcInst_Register(v9);
  *(_QWORD*)(v9 + 200) = 0;
  *(_WORD*)(v9 + 336) = 1;
  *(_QWORD*)(v9 + 152) = 0;
  *(_QWORD*)(v9 + 160) = 0;
  *(_QWORD*)(v9 + 168) = 0;
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 208) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_QWORD*)(v9 + 192) = v9 + 200;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_DWORD*)(v9 + 248) = 1065353216;
  *(_QWORD*)(v9 + 256) = 0;
  *(_QWORD*)(v9 + 264) = 0;
  *(_QWORD*)(v9 + 272) = 0;
  *(_QWORD*)(v9 + 280) = 0;
  *(_QWORD*)(v9 + 288) = 0;
  *(_QWORD*)(v9 + 296) = 0;
  *(_QWORD*)(v9 + 304) = 0;
  *(_QWORD*)(v9 + 312) = 0;
  *(_DWORD*)(v9 + 332) = 0;
  *(_BYTE*)(v9 + 338) = 0;
  *(_QWORD*)(v9 + 344) = 0;
  *(_QWORD*)(v9 + 352) = 0;
  *(_DWORD*)(v9 + 320) = 3;
  *(_QWORD*)(v9 + 360) = 0;
  *(_QWORD*)(v9 + 368) = 0;
  *(_QWORD*)(v9 + 376) = 0;
  *(_QWORD*)(v9 + 384) = 0;
  *(_QWORD*)(v9 + 392) = 0;
  *(_QWORD*)(v9 + 400) = 0;
  *(_QWORD*)(v9 + 408) = 0;
  *(_QWORD*)(v9 + 416) = 0;
  *(_QWORD*)(v9 + 424) = 0;
  *(_DWORD*)(v9 + 432) = 0x2000;
  *(_QWORD*)(v9 + 472) = 0;
  *(_QWORD*)(v9 + 480) = 0;
  *(_QWORD*)(v9 + 440) = 0;
  *(_QWORD*)(v9 + 448) = 0;
  *(_QWORD*)(v9 + 504) = 0;
  *(_QWORD*)(v9 + 512) = 0;
  *(_QWORD*)(v9 + 488) = 0;
  *(_QWORD*)(v9 + 496) = 0;
  *(_QWORD*)(v9 + 324) = 0;
  *(_DWORD*)(v9 + 520) = 1065353216;
  *(_QWORD*)(v9 + 528) = 0;
  *(_QWORD*)(v9 + 536) = 0;
  *(_QWORD*)(v9 + 544) = 0;
  *(_DWORD*)(v9 + 552) = 1065353216;
  *(_WORD*)(v9 + 560) = 0;
  *(_WORD*)(v9 + 584) = 0;
  *(_BYTE*)(v9 + 608) = 0;
  *(_QWORD*)(v9 + 656) = 0;
  *(_QWORD*)(v9 + 648) = 0;
  *(_QWORD*)(v9 + 456) = 0;
  *(_QWORD*)(v9 + 464) = v9 + 472;
  *(_QWORD*)(v9 + 632) = 0;
  *(_QWORD*)(v9 + 624) = 0;
  *(_QWORD*)(v9 + 616) = 0;
  *(_QWORD*)(v9 + 688) = 0;
  *(_QWORD*)(v9 + 680) = 0;
  *(_QWORD*)(v9 + 672) = 0;
  *(_QWORD*)(v9 + 664) = 0;
  *(_DWORD*)(v9 + 696) = 1065353216;
  *(_QWORD*)(v9 + 720) = 0;
  *(_QWORD*)(v9 + 712) = 0;
  *(_QWORD*)(v9 + 640) = v9 + 648;
  *(_QWORD*)(v9 + 704) = 0;
  *(_DWORD*)(v9 + 728) = 1065353216;
  *(_WORD*)(v9 + 736) = 0;
  *(_WORD*)(v9 + 760) = 0;
  *(_BYTE*)(v9 + 784) = 0;
  *(_QWORD*)(v9 + 792) = 0;
  *(_BYTE*)(v9 + 800) = 0;
  v13 = *v10;
  v14 = GameData_2130240[0] + 2;
  *(_BYTE*)(v9 + 816) = 0;
  *(_BYTE*)(v9 + 820) = 0;
  *(_WORD*)(v9 + 824) = 0;
  *(_QWORD*)(v9 + 808) = v14;
  *(_QWORD*)v9 = game_telop_TelopResult_vtable;
  v15 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
  *(_DWORD*)(v15 + 48) = 0x2000;
  v16 = GameData_2131678;
  *(_WORD*)(v15 + 108) = 256;
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_DWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_DWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_WORD*)(v15 + 80) = 0;
  *(_DWORD*)(v15 + 112) = -1082130432;
  *(_WORD*)(v15 + 116) = 0;
  *(_WORD*)(v15 + 136) = 0;
  *(_BYTE*)(v15 + 160) = 0;
  *(_BYTE*)(v15 + 288) = 0;
  *(_QWORD*)(v15 + 272) = 0;
  *(_QWORD*)(v15 + 280) = 0;
  *(_QWORD*)(v15 + 256) = 0;
  *(_QWORD*)(v15 + 264) = 0;
  *(_QWORD*)(v15 + 240) = 0;
  *(_QWORD*)(v15 + 248) = 0;
  *(_QWORD*)(v15 + 224) = 0;
  *(_QWORD*)(v15 + 232) = 0;
  *(_QWORD*)(v15 + 208) = 0;
  *(_QWORD*)(v15 + 216) = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_QWORD*)(v15 + 176) = 0;
  *(_QWORD*)(v15 + 184) = 0;
  *(_QWORD*)(v15 + 168) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_DWORD*)(v15 + 127) = 0;
  *(_QWORD*)(v9 + 856) = v15;
  *(_WORD*)(v9 + 960) = 0;
  *(_QWORD*)(v9 + 1016) = 0;
  *(_QWORD*)(v9 + 992) = 0;
  *(_QWORD*)(v9 + 1000) = 0;
  *(_BYTE*)(v9 + 952) = 0;
  *(_QWORD*)(v9 + 944) = 0;
  *(_QWORD*)(v9 + 936) = 0;
  *(_QWORD*)(v9 + 928) = 0;
  *(_QWORD*)(v9 + 920) = 0;
  *(_QWORD*)(v9 + 912) = 0;
  *(_QWORD*)(v9 + 904) = 0;
  *(_QWORD*)(v9 + 896) = 0;
  *(_QWORD*)(v9 + 888) = 0;
  *(_QWORD*)(v9 + 880) = 0;
  *(_QWORD*)(v9 + 872) = 0;
  *(_QWORD*)(v9 + 864) = 0;
  *(_QWORD*)(v9 + 1024) = 1065353216;
  *(_WORD*)(v9 + 1032) = 0;
  *(_WORD*)(v9 + 1040) = 0;
  *(_WORD*)(v9 + 1064) = 0;
  *(_WORD*)(v9 + 1088) = 0;
  *(_QWORD*)v15 = v16 + 16;
  *(_DWORD*)(v15 + 292) = 2;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(v9 + 848) = v15 + 24;
  *(_QWORD*)(v9 + 1007) = 0;
  v17 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v9 + 1160) = 0;
  *(_BYTE*)(v9 + 1152) = 0;
  *(_QWORD*)(v9 + 1144) = 0;
  *(_QWORD*)(v9 + 1136) = 0;
  *(_QWORD*)(v9 + 1128) = 0;
  *(_QWORD*)(v9 + 1120) = 0;
  *(_QWORD*)(v9 + 1112) = 0;
  *(_WORD*)(v9 + 1176) = 0;
  *(_QWORD*)(v9 + 984) = v17;
  *(_QWORD*)v9 = game_telop_TelopNoticeNewAction_vtable;
  v18 = *(_QWORD*)(a1 + 40);
  if (v18 != 0) {
    *(_QWORD*)(v18 + 48) = v9;
    *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v9;
  *(_QWORD*)(v9 + 24) = "TelopNoticeNewAction";
  *(_QWORD*)(v9 + 32) = a1;
  *(_DWORD*)(v9 + 140) =
      (unsigned int)game_HashString32("TelopNoticeNewAction");
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 24;
  *(_QWORD*)(v9 + 80) = 1;
  v19 = GameData_2130f68;
  *(_QWORD*)(v9 + 8) = GameData_2130f68;
  *(_QWORD*)(v9 + 16) = v19;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
      (*(_WORD*)(v9 + 136) & 0x100) == 0) {
    *(_WORD*)(v9 + 136) |= 0x100u;
  }
  v20 = (_BYTE*)*v12;
  v21 = *(_BYTE*)(*v12 + 138LL);
  if (v21 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v20 + 64LL))(*v12);
    v21 = v20[138];
  }
  v20[138] = v21 + 1;
  *(_WORD*)(v9 + 136) |= 2u;
  if ((*(_BYTE*)(v9 + 272) & 1) != 0) {
    *(_QWORD*)(v9 + 280) = 17;
    v22 = *(char**)(v9 + 288);
  }
  else {
    *(_BYTE*)(v9 + 272) = 34;
    v22 = (char*)(v9 + 273);
  }
  strcpy(v22, "Layout/Common.arc");
  if ((*(_BYTE*)(v9 + 296) & 1) != 0) {
    *(_QWORD*)(v9 + 304) = 16;
    v23 = *(char**)(v9 + 312);
  }
  else {
    *(_BYTE*)(v9 + 296) = 32;
    v23 = (char*)(v9 + 297);
  }
  strcpy(v23, "Common_TlpResult");
  GameHr_1374b10(v9, 2);
  Se_80e330(v9, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v9, "SE_SYS_Telop_Mini_Out");
  v24 = msg_MessageManager_instance__ptr[0];
  if (a4 != nullptr) {
    v25 = a4;
  }
  else {
    v25 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v25);
  v26 = *v24;
  v29_.v35 = -1;
  v29_.v36 = -1;
  v29_.v37 = -1;
  v29_.v38 = -1;
  v29_.v39 = -1;
  v29_.v40 = -1;
  v29_.v41 = -1;
  v29_.v42 = -1;
  v29_.v43 = -1;
  v29_.v44 = -1;
  v29_.v45 = -1;
  v29_.v46 = -1;
  v29_.v29 = GameData_212e348 + 2;
  v29_.v30 = 0xFFFF0001FFFF0000LL;
  v29_.v31 = 0xFFFF0004FFFF0002LL;
  v29_.v32 = 0xFFFF0006FFFF0005LL;
  v29_.v47 = 8;
  v29_.v33 = -65529;
  v29_.v34 = -65528;
  v27 = GameRoutine_a4dbe0(v26, a3, 0);
  GameRoutine_60a020(v9 + 1176, v27);
  Se_80e330(v9, "SE_SYS_Telop_NoticeNewAction");
  return v9;
}

__int64 game_telop_176d610(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;
  const char* v19;

  v2 = 0;
  if (a1 != 0 && a2 != 0) {
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1200, 16, 0);
    memset(v2 + 144, 0, 0x420u);
    v6 = GameData_212c608[0];
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
    v7 = (_QWORD*)(v2 + 32);
    *(_QWORD*)(v2 + 138) = 0;
    *(_QWORD*)(v2 + 144) = 0;
    *(_QWORD*)(v2 + 40) = 0;
    *(_QWORD*)(v2 + 48) = 0;
    *(_QWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 0;
    *(_QWORD*)(v2 + 80) = 0;
    *(_QWORD*)v2 = v6 + 16;
    *(_QWORD*)(v2 + 8) = 0;
    game_ProcInst_Register(v2);
    *(_QWORD*)(v2 + 200) = 0;
    *(_QWORD*)(v2 + 152) = 0;
    *(_QWORD*)(v2 + 160) = 0;
    *(_QWORD*)(v2 + 168) = 0;
    *(_QWORD*)(v2 + 176) = 0;
    *(_QWORD*)(v2 + 208) = 0;
    *(_QWORD*)(v2 + 216) = 0;
    *(_QWORD*)(v2 + 224) = 0;
    *(_QWORD*)(v2 + 232) = 0;
    *(_QWORD*)(v2 + 184) = 0;
    *(_QWORD*)(v2 + 192) = v2 + 200;
    *(_QWORD*)(v2 + 240) = 0;
    *(_DWORD*)(v2 + 248) = 1065353216;
    *(_QWORD*)(v2 + 256) = 0;
    *(_QWORD*)(v2 + 264) = 0;
    *(_QWORD*)(v2 + 272) = 0;
    *(_QWORD*)(v2 + 280) = 0;
    *(_QWORD*)(v2 + 288) = 0;
    *(_QWORD*)(v2 + 296) = 0;
    *(_QWORD*)(v2 + 304) = 0;
    *(_QWORD*)(v2 + 312) = 0;
    *(_DWORD*)(v2 + 332) = 0;
    *(_BYTE*)(v2 + 338) = 0;
    *(_QWORD*)(v2 + 344) = 0;
    *(_QWORD*)(v2 + 352) = 0;
    *(_QWORD*)(v2 + 360) = 0;
    *(_QWORD*)(v2 + 368) = 0;
    *(_DWORD*)(v2 + 320) = 3;
    *(_QWORD*)(v2 + 376) = 0;
    *(_QWORD*)(v2 + 384) = 0;
    *(_QWORD*)(v2 + 392) = 0;
    *(_QWORD*)(v2 + 400) = 0;
    *(_QWORD*)(v2 + 408) = 0;
    *(_QWORD*)(v2 + 416) = 0;
    *(_QWORD*)(v2 + 424) = 0;
    *(_DWORD*)(v2 + 432) = 0x2000;
    *(_QWORD*)(v2 + 472) = 0;
    *(_QWORD*)(v2 + 480) = 0;
    *(_QWORD*)(v2 + 440) = 0;
    *(_QWORD*)(v2 + 448) = 0;
    *(_QWORD*)(v2 + 504) = 0;
    *(_QWORD*)(v2 + 512) = 0;
    *(_QWORD*)(v2 + 488) = 0;
    *(_QWORD*)(v2 + 496) = 0;
    *(_DWORD*)(v2 + 520) = 1065353216;
    *(_QWORD*)(v2 + 324) = 0;
    *(_QWORD*)(v2 + 528) = 0;
    *(_QWORD*)(v2 + 536) = 0;
    *(_QWORD*)(v2 + 544) = 0;
    *(_DWORD*)(v2 + 552) = 1065353216;
    *(_WORD*)(v2 + 560) = 0;
    *(_WORD*)(v2 + 584) = 0;
    *(_BYTE*)(v2 + 608) = 0;
    *(_QWORD*)(v2 + 656) = 0;
    *(_QWORD*)(v2 + 648) = 0;
    *(_QWORD*)(v2 + 632) = 0;
    *(_WORD*)(v2 + 336) = 1;
    *(_QWORD*)(v2 + 624) = 0;
    *(_QWORD*)(v2 + 616) = 0;
    *(_QWORD*)(v2 + 688) = 0;
    *(_QWORD*)(v2 + 680) = 0;
    *(_QWORD*)(v2 + 672) = 0;
    *(_QWORD*)(v2 + 664) = 0;
    *(_DWORD*)(v2 + 696) = 1065353216;
    *(_QWORD*)(v2 + 720) = 0;
    *(_QWORD*)(v2 + 712) = 0;
    *(_QWORD*)(v2 + 704) = 0;
    *(_QWORD*)(v2 + 456) = 0;
    *(_QWORD*)(v2 + 464) = v2 + 472;
    *(_DWORD*)(v2 + 728) = 1065353216;
    *(_WORD*)(v2 + 736) = 0;
    *(_WORD*)(v2 + 760) = 0;
    *(_BYTE*)(v2 + 784) = 0;
    *(_QWORD*)(v2 + 792) = 0;
    *(_BYTE*)(v2 + 800) = 0;
    *(_QWORD*)(v2 + 640) = v2 + 648;
    v8 = *v5;
    v9 = GameData_2130240[0] + 2;
    *(_BYTE*)(v2 + 816) = 0;
    *(_BYTE*)(v2 + 820) = 0;
    *(_WORD*)(v2 + 824) = 0;
    *(_QWORD*)(v2 + 808) = v9;
    *(_QWORD*)v2 = game_telop_TelopResult_vtable;
    v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
    *(_DWORD*)(v10 + 48) = 0x2000;
    v11 = GameData_2131678;
    *(_WORD*)(v10 + 108) = 256;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    *(_QWORD*)(v2 + 856) = v10;
    *(_WORD*)(v2 + 960) = 0;
    *(_QWORD*)(v2 + 1016) = 0;
    *(_QWORD*)(v2 + 992) = 0;
    *(_QWORD*)(v2 + 1000) = 0;
    *(_BYTE*)(v2 + 952) = 0;
    *(_QWORD*)(v2 + 944) = 0;
    *(_QWORD*)(v2 + 936) = 0;
    *(_QWORD*)(v2 + 928) = 0;
    *(_QWORD*)(v2 + 920) = 0;
    *(_QWORD*)(v2 + 912) = 0;
    *(_QWORD*)(v2 + 904) = 0;
    *(_QWORD*)(v2 + 896) = 0;
    *(_QWORD*)(v2 + 888) = 0;
    *(_QWORD*)(v2 + 880) = 0;
    *(_QWORD*)(v2 + 872) = 0;
    *(_QWORD*)(v2 + 864) = 0;
    *(_QWORD*)(v2 + 1024) = 1065353216;
    *(_WORD*)(v2 + 1032) = 0;
    *(_WORD*)(v2 + 1040) = 0;
    *(_WORD*)(v2 + 1064) = 0;
    *(_WORD*)(v2 + 1088) = 0;
    *(_QWORD*)v10 = v11 + 16;
    *(_DWORD*)(v10 + 292) = 2;
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v2 + 848) = v10 + 24;
    *(_QWORD*)(v2 + 1007) = 0;
    v12 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v2 + 1160) = 0;
    *(_BYTE*)(v2 + 1152) = 0;
    *(_QWORD*)(v2 + 1144) = 0;
    *(_QWORD*)(v2 + 1136) = 0;
    *(_QWORD*)(v2 + 1128) = 0;
    *(_QWORD*)(v2 + 1120) = 0;
    *(_QWORD*)(v2 + 1112) = 0;
    *(_WORD*)(v2 + 1176) = 0;
    *(_QWORD*)(v2 + 984) = v12;
    *(_QWORD*)v2 = game_telop_TelopNoticeNewAction_vtable;
    v13 = *(_QWORD*)(a1 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "TelopNoticeNewAction";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) =
        (unsigned int)game_HashString32("TelopNoticeNewAction");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    v14 = GameData_2130f68;
    *(_QWORD*)(v2 + 8) = GameData_2130f68;
    *(_QWORD*)(v2 + 16) = v14;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
    v15 = (_BYTE*)*v7;
    v16 = *(_BYTE*)(*v7 + 138LL);
    if (v16 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
      v16 = v15[138];
    }
    v15[138] = v16 + 1;
    *(_WORD*)(v2 + 136) |= 2u;
    if ((*(_BYTE*)(v2 + 272) & 1) != 0) {
      *(_QWORD*)(v2 + 280) = 17;
      v17 = *(char**)(v2 + 288);
    }
    else {
      *(_BYTE*)(v2 + 272) = 34;
      v17 = (char*)(v2 + 273);
    }
    strcpy(v17, "Layout/Common.arc");
    if ((*(_BYTE*)(v2 + 296) & 1) != 0) {
      *(_QWORD*)(v2 + 304) = 16;
      v18 = *(char**)(v2 + 312);
    }
    else {
      *(_BYTE*)(v2 + 296) = 32;
      v18 = (char*)(v2 + 297);
    }
    strcpy(v18, "Common_TlpResult");
    GameHr_1374b10(v2, 2);
    Se_80e330(v2, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v2, "SE_SYS_Telop_Mini_Out");
    v19 = *(const char**)(a2 + 112);
    *(_QWORD*)(v2 + 1168) = a2;
    if (v19 != nullptr && *v19 != 0) {
      Se_80e330(v2, v19);
    }
  }
  return v2;
}

__int64 game_telop_176df00(__int64 result, _BYTE** a2, __int64 a3)
{
  _BYTE* v3;
  __int64 v4;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  void* v15;
  char v16;
  __int64 v17;
  _BYTE* v18;
  char v19;
  char* v20;
  char* v21;
  unsigned __int64 v22[2];

  if (result != 0) {
    v3 = *a2;
    if (*a2 != nullptr) {
      v4 = result;
      result = 0;
      if (a3 != 0 && *v3 != 0) {
        v22[1] = (unsigned __int64)*a2;
        v22[0] = game_HashString((__int64)v3);
        if ((GameHr_717fc0(v22, 1) & 1) != 0) {
          v6 = (__int64*)fw_memory_g_heap_manager_ptr;
          v7 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 1176, 16, 0);
          memset(v7 + 144, 0, 0x408u);
          v8 = GameData_212c608[0];
          *(_QWORD*)(v7 + 88) = 0;
          *(_QWORD*)(v7 + 96) = 0;
          *(_QWORD*)(v7 + 104) = 0;
          *(_QWORD*)(v7 + 112) = 0;
          *(_QWORD*)(v7 + 120) = 0;
          *(_QWORD*)(v7 + 128) = 0;
          *(_WORD*)(v7 + 136) = 0;
          *(_QWORD*)(v7 + 16) = 0;
          *(_QWORD*)(v7 + 24) = "NULL";
          *(_QWORD*)(v7 + 32) = 0;
          *(_QWORD*)(v7 + 138) = 0;
          *(_QWORD*)(v7 + 144) = 0;
          *(_QWORD*)(v7 + 40) = 0;
          *(_QWORD*)(v7 + 48) = 0;
          *(_QWORD*)(v7 + 56) = 0;
          *(_QWORD*)(v7 + 64) = 0;
          *(_QWORD*)(v7 + 72) = 0;
          *(_QWORD*)(v7 + 80) = 0;
          *(_QWORD*)v7 = v8 + 16;
          *(_QWORD*)(v7 + 8) = 0;
          game_ProcInst_Register(v7);
          *(_QWORD*)(v7 + 200) = 0;
          *(_WORD*)(v7 + 336) = 1;
          *(_QWORD*)(v7 + 152) = 0;
          *(_QWORD*)(v7 + 160) = 0;
          *(_QWORD*)(v7 + 168) = 0;
          *(_QWORD*)(v7 + 176) = 0;
          *(_QWORD*)(v7 + 208) = 0;
          *(_QWORD*)(v7 + 216) = 0;
          *(_QWORD*)(v7 + 184) = 0;
          *(_QWORD*)(v7 + 192) = v7 + 200;
          *(_QWORD*)(v7 + 224) = 0;
          *(_QWORD*)(v7 + 232) = 0;
          *(_QWORD*)(v7 + 240) = 0;
          *(_DWORD*)(v7 + 248) = 1065353216;
          *(_QWORD*)(v7 + 256) = 0;
          *(_QWORD*)(v7 + 264) = 0;
          *(_QWORD*)(v7 + 272) = 0;
          *(_QWORD*)(v7 + 280) = 0;
          *(_QWORD*)(v7 + 288) = 0;
          *(_QWORD*)(v7 + 296) = 0;
          *(_QWORD*)(v7 + 304) = 0;
          *(_QWORD*)(v7 + 312) = 0;
          *(_DWORD*)(v7 + 332) = 0;
          *(_BYTE*)(v7 + 338) = 0;
          *(_QWORD*)(v7 + 344) = 0;
          *(_QWORD*)(v7 + 352) = 0;
          *(_DWORD*)(v7 + 320) = 3;
          *(_QWORD*)(v7 + 360) = 0;
          *(_QWORD*)(v7 + 368) = 0;
          *(_QWORD*)(v7 + 376) = 0;
          *(_QWORD*)(v7 + 384) = 0;
          *(_QWORD*)(v7 + 392) = 0;
          *(_QWORD*)(v7 + 400) = 0;
          *(_QWORD*)(v7 + 408) = 0;
          *(_QWORD*)(v7 + 416) = 0;
          *(_QWORD*)(v7 + 424) = 0;
          *(_DWORD*)(v7 + 432) = 0x2000;
          *(_QWORD*)(v7 + 472) = 0;
          *(_QWORD*)(v7 + 480) = 0;
          *(_QWORD*)(v7 + 440) = 0;
          *(_QWORD*)(v7 + 448) = 0;
          *(_QWORD*)(v7 + 504) = 0;
          *(_QWORD*)(v7 + 512) = 0;
          *(_QWORD*)(v7 + 488) = 0;
          *(_QWORD*)(v7 + 496) = 0;
          *(_QWORD*)(v7 + 324) = 0;
          *(_DWORD*)(v7 + 520) = 1065353216;
          *(_QWORD*)(v7 + 528) = 0;
          *(_QWORD*)(v7 + 536) = 0;
          *(_QWORD*)(v7 + 544) = 0;
          *(_DWORD*)(v7 + 552) = 1065353216;
          *(_WORD*)(v7 + 560) = 0;
          *(_WORD*)(v7 + 584) = 0;
          *(_BYTE*)(v7 + 608) = 0;
          *(_QWORD*)(v7 + 656) = 0;
          *(_QWORD*)(v7 + 648) = 0;
          *(_QWORD*)(v7 + 456) = 0;
          *(_QWORD*)(v7 + 464) = v7 + 472;
          *(_QWORD*)(v7 + 632) = 0;
          *(_QWORD*)(v7 + 624) = 0;
          *(_QWORD*)(v7 + 616) = 0;
          *(_QWORD*)(v7 + 688) = 0;
          *(_QWORD*)(v7 + 680) = 0;
          *(_QWORD*)(v7 + 672) = 0;
          *(_QWORD*)(v7 + 664) = 0;
          *(_DWORD*)(v7 + 696) = 1065353216;
          *(_QWORD*)(v7 + 720) = 0;
          *(_QWORD*)(v7 + 712) = 0;
          *(_QWORD*)(v7 + 640) = v7 + 648;
          *(_QWORD*)(v7 + 704) = 0;
          *(_DWORD*)(v7 + 728) = 1065353216;
          *(_WORD*)(v7 + 736) = 0;
          *(_WORD*)(v7 + 760) = 0;
          *(_BYTE*)(v7 + 784) = 0;
          *(_QWORD*)(v7 + 792) = 0;
          *(_BYTE*)(v7 + 800) = 0;
          v9 = *v6;
          v10 = GameData_2130240[0] + 2;
          *(_BYTE*)(v7 + 816) = 0;
          *(_BYTE*)(v7 + 820) = 0;
          *(_WORD*)(v7 + 824) = 0;
          *(_QWORD*)(v7 + 808) = v10;
          *(_QWORD*)v7 = game_telop_TelopResult_vtable;
          v11 = fw_memory_HeapManager_Allocate(v9, 296, 16, 0);
          *(_DWORD*)(v11 + 48) = 0x2000;
          v12 = GameData_2131678;
          *(_WORD*)(v11 + 108) = 256;
          *(_QWORD*)(v11 + 8) = 0;
          *(_QWORD*)(v11 + 16) = 0;
          *(_DWORD*)(v11 + 32) = 0;
          *(_QWORD*)(v11 + 40) = 0;
          *(_DWORD*)(v11 + 104) = 0;
          *(_QWORD*)(v11 + 56) = 0;
          *(_QWORD*)(v11 + 64) = 0;
          *(_QWORD*)(v11 + 72) = 0;
          *(_WORD*)(v11 + 80) = 0;
          *(_DWORD*)(v11 + 112) = -1082130432;
          *(_WORD*)(v11 + 116) = 0;
          *(_WORD*)(v11 + 136) = 0;
          *(_BYTE*)(v11 + 160) = 0;
          *(_BYTE*)(v11 + 288) = 0;
          *(_QWORD*)(v11 + 272) = 0;
          *(_QWORD*)(v11 + 280) = 0;
          *(_QWORD*)(v11 + 256) = 0;
          *(_QWORD*)(v11 + 264) = 0;
          *(_QWORD*)(v11 + 240) = 0;
          *(_QWORD*)(v11 + 248) = 0;
          *(_QWORD*)(v11 + 224) = 0;
          *(_QWORD*)(v11 + 232) = 0;
          *(_QWORD*)(v11 + 208) = 0;
          *(_QWORD*)(v11 + 216) = 0;
          *(_QWORD*)(v11 + 192) = 0;
          *(_QWORD*)(v11 + 200) = 0;
          *(_QWORD*)(v11 + 176) = 0;
          *(_QWORD*)(v11 + 184) = 0;
          *(_QWORD*)(v11 + 168) = 0;
          *(_QWORD*)(v11 + 120) = 0;
          *(_DWORD*)(v11 + 127) = 0;
          *(_QWORD*)(v7 + 856) = v11;
          *(_WORD*)(v7 + 960) = 0;
          *(_QWORD*)(v7 + 1016) = 0;
          *(_QWORD*)(v7 + 992) = 0;
          *(_QWORD*)(v7 + 1000) = 0;
          *(_BYTE*)(v7 + 952) = 0;
          *(_QWORD*)(v7 + 944) = 0;
          *(_QWORD*)(v7 + 936) = 0;
          *(_QWORD*)(v7 + 928) = 0;
          *(_QWORD*)(v7 + 920) = 0;
          *(_QWORD*)(v7 + 912) = 0;
          *(_QWORD*)(v7 + 904) = 0;
          *(_QWORD*)(v7 + 896) = 0;
          *(_QWORD*)(v7 + 888) = 0;
          *(_QWORD*)(v7 + 880) = 0;
          *(_QWORD*)(v7 + 872) = 0;
          *(_QWORD*)(v7 + 864) = 0;
          *(_QWORD*)(v7 + 1024) = 1065353216;
          *(_WORD*)(v7 + 1032) = 0;
          *(_WORD*)(v7 + 1040) = 0;
          *(_WORD*)(v7 + 1064) = 0;
          *(_WORD*)(v7 + 1088) = 0;
          *(_QWORD*)v11 = v12 + 16;
          *(_DWORD*)(v11 + 292) = 2;
          *(_QWORD*)(v11 + 24) = 0;
          *(_QWORD*)(v7 + 848) = v11 + 24;
          *(_QWORD*)(v7 + 1007) = 0;
          v13 = GameData_2130f98[0] + 2;
          *(_QWORD*)(v7 + 1160) = 0;
          *(_BYTE*)(v7 + 1152) = 0;
          *(_QWORD*)(v7 + 1144) = 0;
          *(_QWORD*)(v7 + 1136) = 0;
          *(_QWORD*)(v7 + 1128) = 0;
          *(_QWORD*)(v7 + 1120) = 0;
          *(_QWORD*)(v7 + 1112) = 0;
          *(_QWORD*)(v7 + 1168) = 0;
          *(_QWORD*)(v7 + 984) = v13;
          *(_QWORD*)v7 = game_telop_TelopNoticeNewJob_vtable;
          v14 = *(_QWORD*)(v4 + 40);
          if (v14 != 0) {
            *(_QWORD*)(v14 + 48) = v7;
            *(_QWORD*)(v7 + 56) = *(_QWORD*)(v4 + 40);
          }
          *(_QWORD*)(v4 + 40) = v7;
          *(_QWORD*)(v7 + 24) = "TelopNoticeNewJob";
          *(_QWORD*)(v7 + 32) = v4;
          *(_DWORD*)(v7 + 140) =
              (unsigned int)game_HashString32("TelopNoticeNewJob");
          *(_QWORD*)(v7 + 64) = 0;
          *(_QWORD*)(v7 + 72) = 24;
          *(_QWORD*)(v7 + 80) = 1;
          v15 = GameData_2130f68;
          *(_QWORD*)(v7 + 8) = GameData_2130f68;
          *(_QWORD*)(v7 + 16) = v15;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
          v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7);
          v17 = v7;
          if ((v16 & 1) != 0 && (*(_WORD*)(v7 + 136) & 0x100) == 0) {
            *(_WORD*)(v7 + 136) |= 0x100u;
          }
          v18 = *(_BYTE**)(v7 + 32);
          v19 = v18[138];
          if (v19 == 0) {
            (*(void (**)(_QWORD))(*(_QWORD*)v18 + 64LL))(*(_QWORD*)(v7 + 32));
            v19 = v18[138];
            v17 = v7;
          }
          v18[138] = v19 + 1;
          *(_WORD*)(v17 + 136) |= 2u;
          if ((*(_BYTE*)(v17 + 272) & 1) != 0) {
            *(_QWORD*)(v17 + 280) = 17;
            v20 = *(char**)(v17 + 288);
          }
          else {
            *(_BYTE*)(v17 + 272) = 34;
            v20 = (char*)(v17 + 273);
          }
          strcpy(v20, "Layout/Common.arc");
          if ((*(_BYTE*)(v17 + 296) & 1) != 0) {
            *(_QWORD*)(v17 + 304) = 16;
            v21 = *(char**)(v17 + 312);
          }
          else {
            *(_BYTE*)(v17 + 296) = 32;
            v21 = (char*)(v17 + 297);
          }
          strcpy(v21, "Common_TlpResult");
          GameHr_1374b10(v7, 2);
          Se_80e330(v7, "SE_SYS_Telop_Mini_In");
          GameHr_1378190(v7, "SE_SYS_Telop_Mini_Out");
          *(_QWORD*)(v7 + 1168) = a3;
          *(_BYTE*)(v7 + 338) = 1;
          return v7;
        }
        else {
          return 0;
        }
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 game_telop_17746d0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  memset(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopDivinationResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopDivinationResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopDivinationResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameHr_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v5 + 1168) = a2;
  return v5;
}

__int64 game_telop_1774dd0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  memset(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopDivinationVisitorResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopDivinationVisitorResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopDivinationVisitorResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameHr_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v5 + 1168) = a2;
  return v5;
}

__int64 game_telop_1775750(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1176, 16, 0);
  memset(v5 + 144, 0, 0x408u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 324) = 0;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = *v4;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_WORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v9;
  *(_QWORD*)v5 = game_telop_TelopResult_vtable;
  v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
  *(_DWORD*)(v10 + 48) = 0x2000;
  v11 = GameData_2131678;
  *(_WORD*)(v10 + 108) = 256;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_DWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_DWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_WORD*)(v10 + 80) = 0;
  *(_DWORD*)(v10 + 112) = -1082130432;
  *(_WORD*)(v10 + 116) = 0;
  *(_WORD*)(v10 + 136) = 0;
  *(_BYTE*)(v10 + 160) = 0;
  *(_BYTE*)(v10 + 288) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_DWORD*)(v10 + 127) = 0;
  *(_QWORD*)(v5 + 856) = v10;
  *(_WORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 1016) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_BYTE*)(v5 + 952) = 0;
  *(_QWORD*)(v5 + 944) = 0;
  *(_QWORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 928) = 0;
  *(_QWORD*)(v5 + 920) = 0;
  *(_QWORD*)(v5 + 912) = 0;
  *(_QWORD*)(v5 + 904) = 0;
  *(_QWORD*)(v5 + 896) = 0;
  *(_QWORD*)(v5 + 888) = 0;
  *(_QWORD*)(v5 + 880) = 0;
  *(_QWORD*)(v5 + 872) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 1024) = 1065353216;
  *(_WORD*)(v5 + 1032) = 0;
  *(_WORD*)(v5 + 1040) = 0;
  *(_WORD*)(v5 + 1064) = 0;
  *(_WORD*)(v5 + 1088) = 0;
  *(_QWORD*)v10 = v11 + 16;
  *(_DWORD*)(v10 + 292) = 2;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v5 + 848) = v10 + 24;
  *(_QWORD*)(v5 + 1007) = 0;
  v12 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v5 + 1160) = 0;
  *(_BYTE*)(v5 + 1152) = 0;
  *(_QWORD*)(v5 + 1144) = 0;
  *(_QWORD*)(v5 + 1136) = 0;
  *(_QWORD*)(v5 + 1128) = 0;
  *(_QWORD*)(v5 + 1120) = 0;
  *(_QWORD*)(v5 + 1112) = 0;
  *(_QWORD*)(v5 + 1168) = 0;
  *(_QWORD*)(v5 + 984) = v12;
  *(_QWORD*)v5 = game_telop_TelopPerchResult_vtable;
  v13 = *(_QWORD*)(a1 + 40);
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopPerchResult";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("TelopPerchResult");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 17;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 34;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Common.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 16;
    v18 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 32;
    v18 = (char*)(v5 + 297);
  }
  strcpy(v18, "Common_TlpResult");
  GameHr_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v5 + 1168) = a2;
  return v5;
}

__int64 game_telop_1775df0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char v19[15];

  if (a1 == 0) {
    return 0;
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1032, 16, 0);
  memset(v5 + 144, 0, 0x378u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 324) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 424) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  v8 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_QWORD*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 864) = 0;
  *(_QWORD*)(v5 + 840) = 0;
  *(_QWORD*)(v5 + 872) = 1065353216;
  *(_WORD*)(v5 + 880) = 0;
  *(_WORD*)(v5 + 888) = 0;
  *(_WORD*)(v5 + 912) = 0;
  *(_WORD*)(v5 + 936) = 0;
  *(_QWORD*)(v5 + 808) = v8;
  *(_QWORD*)v5 = game_telop_TelopPerchPerfect_vtable;
  *(_QWORD*)(v5 + 855) = 0;
  *(_QWORD*)(v5 + 848) = 0;
  v9 = *v4;
  v10 = GameData_2131d00[0] + 16;
  *(_BYTE*)(v5 + 1008) = 0;
  *(_QWORD*)(v5 + 1000) = 0;
  *(_QWORD*)(v5 + 992) = 0;
  *(_QWORD*)(v5 + 984) = 0;
  *(_QWORD*)(v5 + 976) = 0;
  *(_QWORD*)(v5 + 968) = 0;
  *(_QWORD*)(v5 + 960) = 0;
  *(_QWORD*)(v5 + 832) = v10;
  v11 = fw_memory_HeapManager_Allocate(v9, 296, 16, 0);
  *(_DWORD*)(v11 + 48) = 0x2000;
  v12 = GameData_2131678;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_DWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_DWORD*)(v11 + 104) = 0;
  *(_WORD*)(v11 + 108) = 256;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_WORD*)(v11 + 116) = 0;
  *(_WORD*)(v11 + 136) = 0;
  *(_BYTE*)(v11 + 160) = 0;
  *(_BYTE*)(v11 + 288) = 0;
  *(_QWORD*)(v11 + 272) = 0;
  *(_QWORD*)(v11 + 280) = 0;
  *(_QWORD*)(v11 + 256) = 0;
  *(_QWORD*)(v11 + 264) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_QWORD*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_DWORD*)(v11 + 127) = 0;
  *(_QWORD*)(v5 + 1024) = v11;
  *(_QWORD*)v11 = v12 + 16;
  *(_DWORD*)(v11 + 112) = -1082130432;
  *(_DWORD*)(v11 + 292) = 2;
  v13 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(v11 + 24) = 0;
  *(_QWORD*)(v5 + 1016) = v11 + 24;
  if (v13 != 0) {
    *(_QWORD*)(v13 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopPerchPerfect";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("TelopPerchPerfect");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  v14 = GameData_2130f68;
  *(_QWORD*)(v5 + 8) = GameData_2130f68;
  *(_QWORD*)(v5 + 16) = v14;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 14;
    v17 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 28;
    v17 = (char*)(v5 + 273);
  }
  strcpy(v17, "Layout/Hub.arc");
  GameRoutine_60a020(v5 + 296, "Hub_TlpResultPerchQuestion");
  GameHr_1374b10(v5, 2);
  Se_80e330(v5, "SE_SYS_Telop_Mini_In");
  strcpy(v19, "FF_Positive5");
  Se_80e330(v5, v19);
  GameHr_1378190(v5, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v5 + 824) = a2;
  *(_DWORD*)(v5 + 328) = 1119092736;
  return v5;
}

__int64 game_telop_1778700(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  void* v19;
  _BYTE* v20;
  char v21;
  char* v22;
  char* v23;

  v2 = 0;
  if (a1 != 0 && a2 != 0) {
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
    v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1208, 16, 0);
    memset(v2 + 144, 0, 0x428u);
    v5 = GameData_212c608[0];
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
    v6 = (_QWORD*)(v2 + 32);
    *(_QWORD*)(v2 + 138) = 0;
    *(_QWORD*)(v2 + 144) = 0;
    *(_QWORD*)(v2 + 40) = 0;
    *(_QWORD*)(v2 + 48) = 0;
    *(_QWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 0;
    *(_QWORD*)(v2 + 80) = 0;
    *(_QWORD*)v2 = v5 + 16;
    *(_QWORD*)(v2 + 8) = 0;
    game_ProcInst_Register(v2);
    *(_QWORD*)(v2 + 200) = 0;
    *(_QWORD*)(v2 + 152) = 0;
    *(_QWORD*)(v2 + 160) = 0;
    *(_QWORD*)(v2 + 168) = 0;
    *(_QWORD*)(v2 + 176) = 0;
    *(_QWORD*)(v2 + 208) = 0;
    *(_QWORD*)(v2 + 216) = 0;
    *(_QWORD*)(v2 + 224) = 0;
    *(_QWORD*)(v2 + 232) = 0;
    *(_QWORD*)(v2 + 184) = 0;
    *(_QWORD*)(v2 + 192) = v2 + 200;
    *(_QWORD*)(v2 + 240) = 0;
    *(_DWORD*)(v2 + 248) = 1065353216;
    *(_QWORD*)(v2 + 256) = 0;
    *(_QWORD*)(v2 + 264) = 0;
    *(_QWORD*)(v2 + 272) = 0;
    *(_QWORD*)(v2 + 280) = 0;
    *(_QWORD*)(v2 + 288) = 0;
    *(_QWORD*)(v2 + 296) = 0;
    *(_QWORD*)(v2 + 304) = 0;
    *(_QWORD*)(v2 + 312) = 0;
    *(_DWORD*)(v2 + 332) = 0;
    *(_BYTE*)(v2 + 338) = 0;
    *(_QWORD*)(v2 + 344) = 0;
    *(_QWORD*)(v2 + 352) = 0;
    *(_QWORD*)(v2 + 360) = 0;
    *(_QWORD*)(v2 + 368) = 0;
    *(_DWORD*)(v2 + 320) = 3;
    *(_QWORD*)(v2 + 376) = 0;
    *(_QWORD*)(v2 + 384) = 0;
    *(_QWORD*)(v2 + 392) = 0;
    *(_QWORD*)(v2 + 400) = 0;
    *(_QWORD*)(v2 + 408) = 0;
    *(_QWORD*)(v2 + 416) = 0;
    *(_QWORD*)(v2 + 424) = 0;
    *(_DWORD*)(v2 + 432) = 0x2000;
    *(_QWORD*)(v2 + 472) = 0;
    *(_QWORD*)(v2 + 480) = 0;
    *(_QWORD*)(v2 + 440) = 0;
    *(_QWORD*)(v2 + 448) = 0;
    *(_QWORD*)(v2 + 504) = 0;
    *(_QWORD*)(v2 + 512) = 0;
    *(_QWORD*)(v2 + 488) = 0;
    *(_QWORD*)(v2 + 496) = 0;
    *(_DWORD*)(v2 + 520) = 1065353216;
    *(_QWORD*)(v2 + 324) = 0;
    *(_QWORD*)(v2 + 528) = 0;
    *(_QWORD*)(v2 + 536) = 0;
    *(_QWORD*)(v2 + 544) = 0;
    *(_DWORD*)(v2 + 552) = 1065353216;
    *(_WORD*)(v2 + 560) = 0;
    *(_WORD*)(v2 + 584) = 0;
    *(_BYTE*)(v2 + 608) = 0;
    *(_QWORD*)(v2 + 656) = 0;
    *(_QWORD*)(v2 + 648) = 0;
    *(_QWORD*)(v2 + 632) = 0;
    *(_WORD*)(v2 + 336) = 1;
    *(_QWORD*)(v2 + 624) = 0;
    *(_QWORD*)(v2 + 616) = 0;
    *(_QWORD*)(v2 + 688) = 0;
    *(_QWORD*)(v2 + 680) = 0;
    *(_QWORD*)(v2 + 672) = 0;
    *(_QWORD*)(v2 + 664) = 0;
    *(_DWORD*)(v2 + 696) = 1065353216;
    *(_QWORD*)(v2 + 720) = 0;
    *(_QWORD*)(v2 + 712) = 0;
    *(_QWORD*)(v2 + 704) = 0;
    *(_QWORD*)(v2 + 456) = 0;
    *(_QWORD*)(v2 + 464) = v2 + 472;
    *(_DWORD*)(v2 + 728) = 1065353216;
    *(_WORD*)(v2 + 736) = 0;
    *(_WORD*)(v2 + 760) = 0;
    *(_BYTE*)(v2 + 784) = 0;
    *(_QWORD*)(v2 + 792) = 0;
    *(_BYTE*)(v2 + 800) = 0;
    *(_QWORD*)(v2 + 640) = v2 + 648;
    v7 = *v4;
    v8 = GameData_2130240[0] + 2;
    *(_BYTE*)(v2 + 816) = 0;
    *(_BYTE*)(v2 + 820) = 0;
    *(_WORD*)(v2 + 824) = 0;
    *(_QWORD*)(v2 + 808) = v8;
    *(_QWORD*)v2 = game_telop_TelopResult_vtable;
    v9 = fw_memory_HeapManager_Allocate(v7, 296, 16, 0);
    *(_QWORD*)(v9 + 16) = 0;
    v10 = GameData_2131678;
    *(_DWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_DWORD*)(v9 + 48) = 0x2000;
    v11 = v10 + 16;
    *(_DWORD*)(v9 + 104) = 0;
    *(_WORD*)(v9 + 108) = 256;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_WORD*)(v9 + 80) = 0;
    *(_DWORD*)(v9 + 112) = -1082130432;
    *(_WORD*)(v9 + 116) = 0;
    *(_WORD*)(v9 + 136) = 0;
    *(_BYTE*)(v9 + 160) = 0;
    *(_BYTE*)(v9 + 288) = 0;
    *(_QWORD*)(v9 + 272) = 0;
    *(_QWORD*)(v9 + 280) = 0;
    *(_QWORD*)(v9 + 256) = 0;
    *(_QWORD*)(v9 + 264) = 0;
    *(_QWORD*)(v9 + 240) = 0;
    *(_QWORD*)(v9 + 248) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_QWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 192) = 0;
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 168) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_DWORD*)(v9 + 127) = 0;
    *(_DWORD*)(v9 + 292) = 2;
    *(_QWORD*)(v2 + 856) = v9;
    *(_WORD*)(v2 + 960) = 0;
    *(_QWORD*)(v2 + 1016) = 0;
    *(_QWORD*)(v2 + 992) = 0;
    *(_QWORD*)(v2 + 1000) = 0;
    *(_BYTE*)(v2 + 952) = 0;
    *(_QWORD*)(v2 + 944) = 0;
    *(_QWORD*)(v2 + 936) = 0;
    *(_QWORD*)(v2 + 928) = 0;
    *(_QWORD*)(v2 + 920) = 0;
    *(_QWORD*)(v2 + 912) = 0;
    *(_QWORD*)(v2 + 904) = 0;
    *(_QWORD*)(v2 + 896) = 0;
    *(_QWORD*)(v2 + 888) = 0;
    *(_QWORD*)(v2 + 880) = 0;
    *(_QWORD*)(v2 + 872) = 0;
    *(_QWORD*)(v2 + 864) = 0;
    *(_QWORD*)(v2 + 1024) = 1065353216;
    *(_WORD*)(v2 + 1032) = 0;
    *(_WORD*)(v2 + 1040) = 0;
    *(_WORD*)(v2 + 1064) = 0;
    *(_WORD*)(v2 + 1088) = 0;
    *(_QWORD*)v9 = v10 + 16;
    *(_QWORD*)(v9 + 8) = 0;
    *(_QWORD*)(v9 + 24) = 0;
    *(_QWORD*)(v2 + 1007) = 0;
    *(_QWORD*)(v2 + 848) = v9 + 24;
    v12 = *v4;
    v13 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v2 + 1160) = 0;
    *(_BYTE*)(v2 + 1152) = 0;
    *(_QWORD*)(v2 + 1144) = 0;
    *(_QWORD*)(v2 + 1136) = 0;
    *(_QWORD*)(v2 + 1128) = 0;
    *(_QWORD*)(v2 + 1120) = 0;
    *(_QWORD*)(v2 + 1112) = 0;
    *(_QWORD*)(v2 + 1168) = 0;
    *(_QWORD*)(v2 + 984) = v13;
    *(_QWORD*)v2 = game_telop_TelopRecruitResult_vtable;
    v14 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)v14 = v11;
    v15 = v14;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 48) = 0x2000;
    *(_DWORD*)(v14 + 104) = 0;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_DWORD*)(v14 + 292) = 2;
    *(_QWORD*)(v2 + 1184) = v14;
    v16 = *v4;
    *(_QWORD*)(v15 + 24) = 0;
    *(_QWORD*)(v2 + 1176) = v15 + 24;
    v17 = fw_memory_HeapManager_Allocate(v16, 296, 16, 0);
    v18 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 16) = 0;
    *(_QWORD*)v17 = v11;
    *(_DWORD*)(v17 + 32) = 0;
    *(_QWORD*)(v17 + 40) = 0;
    *(_DWORD*)(v17 + 48) = 0x2000;
    *(_DWORD*)(v17 + 104) = 0;
    *(_WORD*)(v17 + 108) = 256;
    *(_QWORD*)(v17 + 56) = 0;
    *(_QWORD*)(v17 + 64) = 0;
    *(_QWORD*)(v17 + 72) = 0;
    *(_WORD*)(v17 + 80) = 0;
    *(_DWORD*)(v17 + 112) = -1082130432;
    *(_WORD*)(v17 + 116) = 0;
    *(_WORD*)(v17 + 136) = 0;
    *(_BYTE*)(v17 + 160) = 0;
    *(_BYTE*)(v17 + 288) = 0;
    *(_QWORD*)(v17 + 272) = 0;
    *(_QWORD*)(v17 + 280) = 0;
    *(_QWORD*)(v17 + 256) = 0;
    *(_QWORD*)(v17 + 264) = 0;
    *(_QWORD*)(v17 + 240) = 0;
    *(_QWORD*)(v17 + 248) = 0;
    *(_QWORD*)(v17 + 224) = 0;
    *(_QWORD*)(v17 + 232) = 0;
    *(_QWORD*)(v17 + 208) = 0;
    *(_QWORD*)(v17 + 216) = 0;
    *(_QWORD*)(v17 + 192) = 0;
    *(_QWORD*)(v17 + 200) = 0;
    *(_QWORD*)(v17 + 176) = 0;
    *(_QWORD*)(v17 + 184) = 0;
    *(_QWORD*)(v17 + 168) = 0;
    *(_QWORD*)(v17 + 120) = 0;
    *(_DWORD*)(v17 + 127) = 0;
    *(_DWORD*)(v17 + 292) = 2;
    *(_QWORD*)(v2 + 1200) = v17;
    *(_QWORD*)(v17 + 24) = 0;
    *(_QWORD*)(v2 + 1192) = v17 + 24;
    if (v18 != 0) {
      *(_QWORD*)(v18 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "TelopRecruitResult";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) =
        (unsigned int)game_HashString32("TelopRecruitResult");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    v19 = GameData_2130f68;
    *(_QWORD*)(v2 + 8) = GameData_2130f68;
    *(_QWORD*)(v2 + 16) = v19;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
    v20 = (_BYTE*)*v6;
    v21 = *(_BYTE*)(*v6 + 138LL);
    if (v21 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v20 + 64LL))(*v6);
      v21 = v20[138];
    }
    v20[138] = v21 + 1;
    *(_WORD*)(v2 + 136) |= 2u;
    if ((*(_BYTE*)(v2 + 272) & 1) != 0) {
      *(_QWORD*)(v2 + 280) = 17;
      v22 = *(char**)(v2 + 288);
    }
    else {
      *(_BYTE*)(v2 + 272) = 34;
      v22 = (char*)(v2 + 273);
    }
    strcpy(v22, "Layout/Common.arc");
    if ((*(_BYTE*)(v2 + 296) & 1) != 0) {
      *(_QWORD*)(v2 + 304) = 16;
      v23 = *(char**)(v2 + 312);
    }
    else {
      *(_BYTE*)(v2 + 296) = 32;
      v23 = (char*)(v2 + 297);
    }
    strcpy(v23, "Common_TlpResult");
    GameHr_1374b10(v2, 2);
    Se_80e330(v2, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v2, "SE_SYS_Telop_Mini_Out");
    *(_QWORD*)(v2 + 1168) = a2;
  }
  return v2;
}

__int64 game_telop_1779bf0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  void* v16;
  _BYTE* v17;
  char v18;
  char* v19;
  char* v20;

  v3 = 0;
  if (a1 != 0 && a2 != 0) {
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1184, 16, 0);
    memset(v3 + 144, 0, 0x410u);
    v8 = GameData_212c608[0];
    *(_QWORD*)(v3 + 88) = 0;
    *(_QWORD*)(v3 + 96) = 0;
    *(_QWORD*)(v3 + 104) = 0;
    *(_QWORD*)(v3 + 112) = 0;
    *(_QWORD*)(v3 + 120) = 0;
    *(_QWORD*)(v3 + 128) = 0;
    *(_WORD*)(v3 + 136) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 24) = "NULL";
    *(_QWORD*)(v3 + 32) = 0;
    v9 = (_QWORD*)(v3 + 32);
    *(_QWORD*)(v3 + 138) = 0;
    *(_QWORD*)(v3 + 144) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 0;
    *(_QWORD*)(v3 + 80) = 0;
    *(_QWORD*)v3 = v8 + 16;
    *(_QWORD*)(v3 + 8) = 0;
    game_ProcInst_Register(v3);
    *(_QWORD*)(v3 + 200) = 0;
    *(_QWORD*)(v3 + 152) = 0;
    *(_QWORD*)(v3 + 160) = 0;
    *(_QWORD*)(v3 + 168) = 0;
    *(_QWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 224) = 0;
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 192) = v3 + 200;
    *(_QWORD*)(v3 + 240) = 0;
    *(_DWORD*)(v3 + 248) = 1065353216;
    *(_QWORD*)(v3 + 256) = 0;
    *(_QWORD*)(v3 + 264) = 0;
    *(_QWORD*)(v3 + 272) = 0;
    *(_QWORD*)(v3 + 280) = 0;
    *(_QWORD*)(v3 + 288) = 0;
    *(_QWORD*)(v3 + 296) = 0;
    *(_QWORD*)(v3 + 304) = 0;
    *(_QWORD*)(v3 + 312) = 0;
    *(_DWORD*)(v3 + 332) = 0;
    *(_BYTE*)(v3 + 338) = 0;
    *(_QWORD*)(v3 + 344) = 0;
    *(_QWORD*)(v3 + 352) = 0;
    *(_QWORD*)(v3 + 360) = 0;
    *(_QWORD*)(v3 + 368) = 0;
    *(_DWORD*)(v3 + 320) = 3;
    *(_QWORD*)(v3 + 376) = 0;
    *(_QWORD*)(v3 + 384) = 0;
    *(_QWORD*)(v3 + 392) = 0;
    *(_QWORD*)(v3 + 400) = 0;
    *(_QWORD*)(v3 + 408) = 0;
    *(_QWORD*)(v3 + 416) = 0;
    *(_QWORD*)(v3 + 424) = 0;
    *(_DWORD*)(v3 + 432) = 0x2000;
    *(_QWORD*)(v3 + 472) = 0;
    *(_QWORD*)(v3 + 480) = 0;
    *(_QWORD*)(v3 + 440) = 0;
    *(_QWORD*)(v3 + 448) = 0;
    *(_QWORD*)(v3 + 504) = 0;
    *(_QWORD*)(v3 + 512) = 0;
    *(_QWORD*)(v3 + 488) = 0;
    *(_QWORD*)(v3 + 496) = 0;
    *(_DWORD*)(v3 + 520) = 1065353216;
    *(_QWORD*)(v3 + 324) = 0;
    *(_QWORD*)(v3 + 528) = 0;
    *(_QWORD*)(v3 + 536) = 0;
    *(_QWORD*)(v3 + 544) = 0;
    *(_DWORD*)(v3 + 552) = 1065353216;
    *(_WORD*)(v3 + 560) = 0;
    *(_WORD*)(v3 + 584) = 0;
    *(_BYTE*)(v3 + 608) = 0;
    *(_QWORD*)(v3 + 656) = 0;
    *(_QWORD*)(v3 + 648) = 0;
    *(_QWORD*)(v3 + 632) = 0;
    *(_WORD*)(v3 + 336) = 1;
    *(_QWORD*)(v3 + 624) = 0;
    *(_QWORD*)(v3 + 616) = 0;
    *(_QWORD*)(v3 + 688) = 0;
    *(_QWORD*)(v3 + 680) = 0;
    *(_QWORD*)(v3 + 672) = 0;
    *(_QWORD*)(v3 + 664) = 0;
    *(_DWORD*)(v3 + 696) = 1065353216;
    *(_QWORD*)(v3 + 720) = 0;
    *(_QWORD*)(v3 + 712) = 0;
    *(_QWORD*)(v3 + 704) = 0;
    *(_QWORD*)(v3 + 456) = 0;
    *(_QWORD*)(v3 + 464) = v3 + 472;
    *(_DWORD*)(v3 + 728) = 1065353216;
    *(_WORD*)(v3 + 736) = 0;
    *(_WORD*)(v3 + 760) = 0;
    *(_BYTE*)(v3 + 784) = 0;
    *(_QWORD*)(v3 + 792) = 0;
    *(_BYTE*)(v3 + 800) = 0;
    *(_QWORD*)(v3 + 640) = v3 + 648;
    v10 = *v7;
    v11 = GameData_2130240[0] + 2;
    *(_BYTE*)(v3 + 816) = 0;
    *(_BYTE*)(v3 + 820) = 0;
    *(_WORD*)(v3 + 824) = 0;
    *(_QWORD*)(v3 + 808) = v11;
    *(_QWORD*)v3 = game_telop_TelopResult_vtable;
    v12 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
    v13 = GameData_2131678;
    *(_WORD*)(v12 + 108) = 256;
    *(_DWORD*)(v12 + 48) = 0x2000;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_DWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_DWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_WORD*)(v12 + 80) = 0;
    *(_DWORD*)(v12 + 112) = -1082130432;
    *(_WORD*)(v12 + 116) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_BYTE*)(v12 + 160) = 0;
    *(_BYTE*)(v12 + 288) = 0;
    *(_QWORD*)(v12 + 272) = 0;
    *(_QWORD*)(v12 + 280) = 0;
    *(_QWORD*)(v12 + 256) = 0;
    *(_QWORD*)(v12 + 264) = 0;
    *(_QWORD*)(v12 + 240) = 0;
    *(_QWORD*)(v12 + 248) = 0;
    *(_QWORD*)(v12 + 224) = 0;
    *(_QWORD*)(v12 + 232) = 0;
    *(_QWORD*)(v12 + 208) = 0;
    *(_QWORD*)(v12 + 216) = 0;
    *(_QWORD*)(v12 + 192) = 0;
    *(_QWORD*)(v12 + 200) = 0;
    *(_QWORD*)(v12 + 176) = 0;
    *(_QWORD*)(v12 + 184) = 0;
    *(_QWORD*)(v12 + 168) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_DWORD*)(v12 + 127) = 0;
    *(_QWORD*)(v3 + 856) = v12;
    *(_WORD*)(v3 + 960) = 0;
    *(_QWORD*)(v3 + 1016) = 0;
    *(_QWORD*)(v3 + 992) = 0;
    *(_QWORD*)(v3 + 1000) = 0;
    *(_BYTE*)(v3 + 952) = 0;
    *(_QWORD*)(v3 + 944) = 0;
    *(_QWORD*)(v3 + 936) = 0;
    *(_QWORD*)(v3 + 928) = 0;
    *(_QWORD*)(v3 + 920) = 0;
    *(_QWORD*)(v3 + 912) = 0;
    *(_QWORD*)(v3 + 904) = 0;
    *(_QWORD*)(v3 + 896) = 0;
    *(_QWORD*)(v3 + 888) = 0;
    *(_QWORD*)(v3 + 880) = 0;
    *(_QWORD*)(v3 + 872) = 0;
    *(_QWORD*)(v3 + 864) = 0;
    *(_QWORD*)(v3 + 1024) = 1065353216;
    *(_WORD*)(v3 + 1032) = 0;
    *(_WORD*)(v3 + 1040) = 0;
    *(_WORD*)(v3 + 1064) = 0;
    *(_WORD*)(v3 + 1088) = 0;
    *(_QWORD*)v12 = v13 + 16;
    *(_DWORD*)(v12 + 292) = 2;
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(v3 + 848) = v12 + 24;
    *(_QWORD*)(v3 + 1007) = 0;
    v14 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v3 + 1160) = 0;
    *(_BYTE*)(v3 + 1152) = 0;
    *(_QWORD*)(v3 + 1144) = 0;
    *(_QWORD*)(v3 + 1136) = 0;
    *(_QWORD*)(v3 + 1128) = 0;
    *(_QWORD*)(v3 + 1120) = 0;
    *(_QWORD*)(v3 + 1112) = 0;
    *(_QWORD*)(v3 + 1168) = 0;
    *(_DWORD*)(v3 + 1176) = 0;
    *(_QWORD*)(v3 + 984) = v14;
    *(_QWORD*)v3 = game_telop_TelopSpeechResult_vtable;
    v15 = *(_QWORD*)(a1 + 40);
    if (v15 != 0) {
      *(_QWORD*)(v15 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "TelopSpeechResult";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) = (unsigned int)game_HashString32("TelopSpeechResult");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    v16 = GameData_2130f68;
    *(_QWORD*)(v3 + 8) = GameData_2130f68;
    *(_QWORD*)(v3 + 16) = v16;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
        (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v17 = (_BYTE*)*v9;
    v18 = *(_BYTE*)(*v9 + 138LL);
    if (v18 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v9);
      v18 = v17[138];
    }
    v17[138] = v18 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
    if ((*(_BYTE*)(v3 + 272) & 1) != 0) {
      *(_QWORD*)(v3 + 280) = 17;
      v19 = *(char**)(v3 + 288);
    }
    else {
      *(_BYTE*)(v3 + 272) = 34;
      v19 = (char*)(v3 + 273);
    }
    strcpy(v19, "Layout/Common.arc");
    if ((*(_BYTE*)(v3 + 296) & 1) != 0) {
      *(_QWORD*)(v3 + 304) = 16;
      v20 = *(char**)(v3 + 312);
    }
    else {
      *(_BYTE*)(v3 + 296) = 32;
      v20 = (char*)(v3 + 297);
    }
    strcpy(v20, "Common_TlpResult");
    GameHr_1374b10(v3, 2);
    Se_80e330(v3, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v3, "SE_SYS_Telop_Mini_Out");
    *(_QWORD*)(v3 + 1168) = a2;
    *(_DWORD*)(v3 + 1176) = a3;
  }
  return v3;
}

__int64 game_telop_177a2e0(__int64 a1, __int64 a2, char a3, int a4, int a5,
                           int a6)
{
  __int64 v6;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  void* v21;
  _BYTE* v22;
  char v23;
  char* v24;
  char* v25;

  v6 = 0;
  if (a1 != 0 && a2 != 0) {
    v12 = (__int64*)fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1192, 16, 0);
    memset(v6 + 144, 0, 0x418u);
    v13 = GameData_212c608[0];
    *(_QWORD*)(v6 + 88) = 0;
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 112) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_WORD*)(v6 + 136) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 24) = "NULL";
    *(_QWORD*)(v6 + 32) = 0;
    v14 = (_QWORD*)(v6 + 32);
    *(_QWORD*)(v6 + 138) = 0;
    *(_QWORD*)(v6 + 144) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)v6 = v13 + 16;
    *(_QWORD*)(v6 + 8) = 0;
    game_ProcInst_Register(v6);
    *(_QWORD*)(v6 + 200) = 0;
    *(_QWORD*)(v6 + 152) = 0;
    *(_QWORD*)(v6 + 160) = 0;
    *(_QWORD*)(v6 + 168) = 0;
    *(_QWORD*)(v6 + 176) = 0;
    *(_QWORD*)(v6 + 208) = 0;
    *(_QWORD*)(v6 + 216) = 0;
    *(_QWORD*)(v6 + 224) = 0;
    *(_QWORD*)(v6 + 232) = 0;
    *(_QWORD*)(v6 + 184) = 0;
    *(_QWORD*)(v6 + 192) = v6 + 200;
    *(_QWORD*)(v6 + 240) = 0;
    *(_DWORD*)(v6 + 248) = 1065353216;
    *(_QWORD*)(v6 + 256) = 0;
    *(_QWORD*)(v6 + 264) = 0;
    *(_QWORD*)(v6 + 272) = 0;
    *(_QWORD*)(v6 + 280) = 0;
    *(_QWORD*)(v6 + 288) = 0;
    *(_QWORD*)(v6 + 296) = 0;
    *(_QWORD*)(v6 + 304) = 0;
    *(_QWORD*)(v6 + 312) = 0;
    *(_DWORD*)(v6 + 332) = 0;
    *(_BYTE*)(v6 + 338) = 0;
    *(_QWORD*)(v6 + 344) = 0;
    *(_QWORD*)(v6 + 352) = 0;
    *(_QWORD*)(v6 + 360) = 0;
    *(_QWORD*)(v6 + 368) = 0;
    *(_DWORD*)(v6 + 320) = 3;
    *(_QWORD*)(v6 + 376) = 0;
    *(_QWORD*)(v6 + 384) = 0;
    *(_QWORD*)(v6 + 392) = 0;
    *(_QWORD*)(v6 + 400) = 0;
    *(_QWORD*)(v6 + 408) = 0;
    *(_QWORD*)(v6 + 416) = 0;
    *(_QWORD*)(v6 + 424) = 0;
    *(_DWORD*)(v6 + 432) = 0x2000;
    *(_QWORD*)(v6 + 472) = 0;
    *(_QWORD*)(v6 + 480) = 0;
    *(_QWORD*)(v6 + 440) = 0;
    *(_QWORD*)(v6 + 448) = 0;
    *(_QWORD*)(v6 + 504) = 0;
    *(_QWORD*)(v6 + 512) = 0;
    *(_QWORD*)(v6 + 488) = 0;
    *(_QWORD*)(v6 + 496) = 0;
    *(_DWORD*)(v6 + 520) = 1065353216;
    *(_QWORD*)(v6 + 324) = 0;
    *(_QWORD*)(v6 + 528) = 0;
    *(_QWORD*)(v6 + 536) = 0;
    *(_QWORD*)(v6 + 544) = 0;
    *(_DWORD*)(v6 + 552) = 1065353216;
    *(_WORD*)(v6 + 560) = 0;
    *(_WORD*)(v6 + 584) = 0;
    *(_BYTE*)(v6 + 608) = 0;
    *(_QWORD*)(v6 + 656) = 0;
    *(_QWORD*)(v6 + 648) = 0;
    *(_QWORD*)(v6 + 632) = 0;
    *(_WORD*)(v6 + 336) = 1;
    *(_QWORD*)(v6 + 624) = 0;
    *(_QWORD*)(v6 + 616) = 0;
    *(_QWORD*)(v6 + 688) = 0;
    *(_QWORD*)(v6 + 680) = 0;
    *(_QWORD*)(v6 + 672) = 0;
    *(_QWORD*)(v6 + 664) = 0;
    *(_DWORD*)(v6 + 696) = 1065353216;
    *(_QWORD*)(v6 + 720) = 0;
    *(_QWORD*)(v6 + 712) = 0;
    *(_QWORD*)(v6 + 704) = 0;
    *(_QWORD*)(v6 + 456) = 0;
    *(_QWORD*)(v6 + 464) = v6 + 472;
    *(_DWORD*)(v6 + 728) = 1065353216;
    *(_WORD*)(v6 + 736) = 0;
    *(_WORD*)(v6 + 760) = 0;
    *(_BYTE*)(v6 + 784) = 0;
    *(_QWORD*)(v6 + 792) = 0;
    *(_BYTE*)(v6 + 800) = 0;
    *(_QWORD*)(v6 + 640) = v6 + 648;
    v15 = *v12;
    v16 = GameData_2130240[0] + 2;
    *(_BYTE*)(v6 + 816) = 0;
    *(_BYTE*)(v6 + 820) = 0;
    *(_WORD*)(v6 + 824) = 0;
    *(_QWORD*)(v6 + 808) = v16;
    *(_QWORD*)v6 = game_telop_TelopResult_vtable;
    v17 = fw_memory_HeapManager_Allocate(v15, 296, 16, 0);
    *(_DWORD*)(v17 + 48) = 0x2000;
    v18 = GameData_2131678;
    *(_WORD*)(v17 + 108) = 256;
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 16) = 0;
    *(_DWORD*)(v17 + 32) = 0;
    *(_QWORD*)(v17 + 40) = 0;
    *(_DWORD*)(v17 + 104) = 0;
    *(_QWORD*)(v17 + 56) = 0;
    *(_QWORD*)(v17 + 64) = 0;
    *(_QWORD*)(v17 + 72) = 0;
    *(_WORD*)(v17 + 80) = 0;
    *(_DWORD*)(v17 + 112) = -1082130432;
    *(_WORD*)(v17 + 116) = 0;
    *(_WORD*)(v17 + 136) = 0;
    *(_BYTE*)(v17 + 160) = 0;
    *(_BYTE*)(v17 + 288) = 0;
    *(_QWORD*)(v17 + 272) = 0;
    *(_QWORD*)(v17 + 280) = 0;
    *(_QWORD*)(v17 + 256) = 0;
    *(_QWORD*)(v17 + 264) = 0;
    *(_QWORD*)(v17 + 240) = 0;
    *(_QWORD*)(v17 + 248) = 0;
    *(_QWORD*)(v17 + 224) = 0;
    *(_QWORD*)(v17 + 232) = 0;
    *(_QWORD*)(v17 + 208) = 0;
    *(_QWORD*)(v17 + 216) = 0;
    *(_QWORD*)(v17 + 192) = 0;
    *(_QWORD*)(v17 + 200) = 0;
    *(_QWORD*)(v17 + 176) = 0;
    *(_QWORD*)(v17 + 184) = 0;
    *(_QWORD*)(v17 + 168) = 0;
    *(_QWORD*)(v17 + 120) = 0;
    *(_DWORD*)(v17 + 127) = 0;
    *(_QWORD*)(v6 + 856) = v17;
    *(_WORD*)(v6 + 960) = 0;
    *(_QWORD*)(v6 + 1016) = 0;
    *(_QWORD*)(v6 + 992) = 0;
    *(_QWORD*)(v6 + 1000) = 0;
    *(_BYTE*)(v6 + 952) = 0;
    *(_QWORD*)(v6 + 944) = 0;
    *(_QWORD*)(v6 + 936) = 0;
    *(_QWORD*)(v6 + 928) = 0;
    *(_QWORD*)(v6 + 920) = 0;
    *(_QWORD*)(v6 + 912) = 0;
    *(_QWORD*)(v6 + 904) = 0;
    *(_QWORD*)(v6 + 896) = 0;
    *(_QWORD*)(v6 + 888) = 0;
    *(_QWORD*)(v6 + 880) = 0;
    *(_QWORD*)(v6 + 872) = 0;
    *(_QWORD*)(v6 + 864) = 0;
    *(_QWORD*)(v6 + 1024) = 1065353216;
    *(_WORD*)(v6 + 1032) = 0;
    *(_WORD*)(v6 + 1040) = 0;
    *(_WORD*)(v6 + 1064) = 0;
    *(_WORD*)(v6 + 1088) = 0;
    *(_QWORD*)v17 = v18 + 16;
    *(_DWORD*)(v17 + 292) = 2;
    *(_QWORD*)(v17 + 24) = 0;
    *(_QWORD*)(v6 + 848) = v17 + 24;
    *(_QWORD*)(v6 + 1007) = 0;
    v19 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v6 + 1160) = 0;
    *(_BYTE*)(v6 + 1152) = 0;
    *(_QWORD*)(v6 + 1144) = 0;
    *(_QWORD*)(v6 + 1136) = 0;
    *(_QWORD*)(v6 + 1128) = 0;
    *(_QWORD*)(v6 + 1120) = 0;
    *(_QWORD*)(v6 + 1112) = 0;
    *(_QWORD*)(v6 + 1168) = 0;
    *(_DWORD*)(v6 + 1188) = 0;
    *(_QWORD*)(v6 + 984) = v19;
    *(_QWORD*)v6 = game_telop_TelopGrowCapability_vtable;
    *(_BYTE*)(v6 + 1176) = 11;
    *(_QWORD*)(v6 + 1180) = 0;
    v20 = *(_QWORD*)(a1 + 40);
    if (v20 != 0) {
      *(_QWORD*)(v20 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "TelopGrowCapability";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) =
        (unsigned int)game_HashString32("TelopGrowCapability");
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    v21 = GameData_2130f68;
    *(_QWORD*)(v6 + 8) = GameData_2130f68;
    *(_QWORD*)(v6 + 16) = v21;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v22 = (_BYTE*)*v14;
    v23 = *(_BYTE*)(*v14 + 138LL);
    if (v23 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v22 + 64LL))(*v14);
      v23 = v22[138];
    }
    v22[138] = v23 + 1;
    *(_WORD*)(v6 + 136) |= 2u;
    if ((*(_BYTE*)(v6 + 272) & 1) != 0) {
      *(_QWORD*)(v6 + 280) = 17;
      v24 = *(char**)(v6 + 288);
    }
    else {
      *(_BYTE*)(v6 + 272) = 34;
      v24 = (char*)(v6 + 273);
    }
    strcpy(v24, "Layout/Common.arc");
    if ((*(_BYTE*)(v6 + 296) & 1) != 0) {
      *(_QWORD*)(v6 + 304) = 16;
      v25 = *(char**)(v6 + 312);
    }
    else {
      *(_BYTE*)(v6 + 296) = 32;
      v25 = (char*)(v6 + 297);
    }
    strcpy(v25, "Common_TlpResult");
    GameHr_1374b10(v6, 2);
    Se_80e330(v6, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v6, "SE_SYS_Telop_Mini_Out");
    *(_BYTE*)(v6 + 338) = 1;
    Se_80e330(v6, "SE_SYS_ItemUse_Grow");
    *(_QWORD*)(v6 + 1168) = a2;
    *(_BYTE*)(v6 + 1176) = a3;
    *(_DWORD*)(v6 + 1180) = a4;
    *(_DWORD*)(v6 + 1184) = a5;
    *(_DWORD*)(v6 + 1188) = a6;
  }
  return v6;
}

__int64 game_telop_177b500(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  char* v17;
  char* v18;

  v2 = 0;
  if (a1 != 0 && a2 != 0) {
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1176, 16, 0);
    memset(v2 + 144, 0, 0x408u);
    v6 = GameData_212c608[0];
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
    v7 = (_QWORD*)(v2 + 32);
    *(_QWORD*)(v2 + 138) = 0;
    *(_QWORD*)(v2 + 144) = 0;
    *(_QWORD*)(v2 + 40) = 0;
    *(_QWORD*)(v2 + 48) = 0;
    *(_QWORD*)(v2 + 56) = 0;
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 0;
    *(_QWORD*)(v2 + 80) = 0;
    *(_QWORD*)v2 = v6 + 16;
    *(_QWORD*)(v2 + 8) = 0;
    game_ProcInst_Register(v2);
    *(_QWORD*)(v2 + 200) = 0;
    *(_QWORD*)(v2 + 152) = 0;
    *(_QWORD*)(v2 + 160) = 0;
    *(_QWORD*)(v2 + 168) = 0;
    *(_QWORD*)(v2 + 176) = 0;
    *(_QWORD*)(v2 + 208) = 0;
    *(_QWORD*)(v2 + 216) = 0;
    *(_QWORD*)(v2 + 224) = 0;
    *(_QWORD*)(v2 + 232) = 0;
    *(_QWORD*)(v2 + 184) = 0;
    *(_QWORD*)(v2 + 192) = v2 + 200;
    *(_QWORD*)(v2 + 240) = 0;
    *(_DWORD*)(v2 + 248) = 1065353216;
    *(_QWORD*)(v2 + 256) = 0;
    *(_QWORD*)(v2 + 264) = 0;
    *(_QWORD*)(v2 + 272) = 0;
    *(_QWORD*)(v2 + 280) = 0;
    *(_QWORD*)(v2 + 288) = 0;
    *(_QWORD*)(v2 + 296) = 0;
    *(_QWORD*)(v2 + 304) = 0;
    *(_QWORD*)(v2 + 312) = 0;
    *(_DWORD*)(v2 + 332) = 0;
    *(_BYTE*)(v2 + 338) = 0;
    *(_QWORD*)(v2 + 344) = 0;
    *(_QWORD*)(v2 + 352) = 0;
    *(_QWORD*)(v2 + 360) = 0;
    *(_QWORD*)(v2 + 368) = 0;
    *(_DWORD*)(v2 + 320) = 3;
    *(_QWORD*)(v2 + 376) = 0;
    *(_QWORD*)(v2 + 384) = 0;
    *(_QWORD*)(v2 + 392) = 0;
    *(_QWORD*)(v2 + 400) = 0;
    *(_QWORD*)(v2 + 408) = 0;
    *(_QWORD*)(v2 + 416) = 0;
    *(_QWORD*)(v2 + 424) = 0;
    *(_DWORD*)(v2 + 432) = 0x2000;
    *(_QWORD*)(v2 + 472) = 0;
    *(_QWORD*)(v2 + 480) = 0;
    *(_QWORD*)(v2 + 440) = 0;
    *(_QWORD*)(v2 + 448) = 0;
    *(_QWORD*)(v2 + 504) = 0;
    *(_QWORD*)(v2 + 512) = 0;
    *(_QWORD*)(v2 + 488) = 0;
    *(_QWORD*)(v2 + 496) = 0;
    *(_DWORD*)(v2 + 520) = 1065353216;
    *(_QWORD*)(v2 + 324) = 0;
    *(_QWORD*)(v2 + 528) = 0;
    *(_QWORD*)(v2 + 536) = 0;
    *(_QWORD*)(v2 + 544) = 0;
    *(_DWORD*)(v2 + 552) = 1065353216;
    *(_WORD*)(v2 + 560) = 0;
    *(_WORD*)(v2 + 584) = 0;
    *(_BYTE*)(v2 + 608) = 0;
    *(_QWORD*)(v2 + 656) = 0;
    *(_QWORD*)(v2 + 648) = 0;
    *(_QWORD*)(v2 + 632) = 0;
    *(_WORD*)(v2 + 336) = 1;
    *(_QWORD*)(v2 + 624) = 0;
    *(_QWORD*)(v2 + 616) = 0;
    *(_QWORD*)(v2 + 688) = 0;
    *(_QWORD*)(v2 + 680) = 0;
    *(_QWORD*)(v2 + 672) = 0;
    *(_QWORD*)(v2 + 664) = 0;
    *(_DWORD*)(v2 + 696) = 1065353216;
    *(_QWORD*)(v2 + 720) = 0;
    *(_QWORD*)(v2 + 712) = 0;
    *(_QWORD*)(v2 + 704) = 0;
    *(_QWORD*)(v2 + 456) = 0;
    *(_QWORD*)(v2 + 464) = v2 + 472;
    *(_DWORD*)(v2 + 728) = 1065353216;
    *(_WORD*)(v2 + 736) = 0;
    *(_WORD*)(v2 + 760) = 0;
    *(_BYTE*)(v2 + 784) = 0;
    *(_QWORD*)(v2 + 792) = 0;
    *(_BYTE*)(v2 + 800) = 0;
    *(_QWORD*)(v2 + 640) = v2 + 648;
    v8 = *v5;
    v9 = GameData_2130240[0] + 2;
    *(_BYTE*)(v2 + 816) = 0;
    *(_BYTE*)(v2 + 820) = 0;
    *(_WORD*)(v2 + 824) = 0;
    *(_QWORD*)(v2 + 808) = v9;
    *(_QWORD*)v2 = game_telop_TelopResult_vtable;
    v10 = fw_memory_HeapManager_Allocate(v8, 296, 16, 0);
    *(_DWORD*)(v10 + 48) = 0x2000;
    v11 = GameData_2131678;
    *(_WORD*)(v10 + 108) = 256;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    *(_QWORD*)(v2 + 856) = v10;
    *(_WORD*)(v2 + 960) = 0;
    *(_QWORD*)(v2 + 1016) = 0;
    *(_QWORD*)(v2 + 992) = 0;
    *(_QWORD*)(v2 + 1000) = 0;
    *(_BYTE*)(v2 + 952) = 0;
    *(_QWORD*)(v2 + 944) = 0;
    *(_QWORD*)(v2 + 936) = 0;
    *(_QWORD*)(v2 + 928) = 0;
    *(_QWORD*)(v2 + 920) = 0;
    *(_QWORD*)(v2 + 912) = 0;
    *(_QWORD*)(v2 + 904) = 0;
    *(_QWORD*)(v2 + 896) = 0;
    *(_QWORD*)(v2 + 888) = 0;
    *(_QWORD*)(v2 + 880) = 0;
    *(_QWORD*)(v2 + 872) = 0;
    *(_QWORD*)(v2 + 864) = 0;
    *(_QWORD*)(v2 + 1024) = 1065353216;
    *(_WORD*)(v2 + 1032) = 0;
    *(_WORD*)(v2 + 1040) = 0;
    *(_WORD*)(v2 + 1064) = 0;
    *(_WORD*)(v2 + 1088) = 0;
    *(_QWORD*)v10 = v11 + 16;
    *(_DWORD*)(v10 + 292) = 2;
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v2 + 848) = v10 + 24;
    *(_QWORD*)(v2 + 1007) = 0;
    v12 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v2 + 1160) = 0;
    *(_BYTE*)(v2 + 1152) = 0;
    *(_QWORD*)(v2 + 1144) = 0;
    *(_QWORD*)(v2 + 1136) = 0;
    *(_QWORD*)(v2 + 1128) = 0;
    *(_QWORD*)(v2 + 1120) = 0;
    *(_QWORD*)(v2 + 1112) = 0;
    *(_QWORD*)(v2 + 1168) = 0;
    *(_QWORD*)(v2 + 984) = v12;
    *(_QWORD*)v2 = game_telop_TelopScoutFailResult_vtable;
    v13 = *(_QWORD*)(a1 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v2;
      *(_QWORD*)(v2 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v2;
    *(_QWORD*)(v2 + 24) = "TelopScoutFailResult";
    *(_QWORD*)(v2 + 32) = a1;
    *(_DWORD*)(v2 + 140) =
        (unsigned int)game_HashString32("TelopScoutFailResult");
    *(_QWORD*)(v2 + 64) = 0;
    *(_QWORD*)(v2 + 72) = 24;
    *(_QWORD*)(v2 + 80) = 1;
    v14 = GameData_2130f68;
    *(_QWORD*)(v2 + 8) = GameData_2130f68;
    *(_QWORD*)(v2 + 16) = v14;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 32LL))(v2);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 136LL))(v2) & 1) != 0 &&
        (*(_WORD*)(v2 + 136) & 0x100) == 0) {
      *(_WORD*)(v2 + 136) |= 0x100u;
    }
    v15 = (_BYTE*)*v7;
    v16 = *(_BYTE*)(*v7 + 138LL);
    if (v16 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
      v16 = v15[138];
    }
    v15[138] = v16 + 1;
    *(_WORD*)(v2 + 136) |= 2u;
    if ((*(_BYTE*)(v2 + 272) & 1) != 0) {
      *(_QWORD*)(v2 + 280) = 17;
      v17 = *(char**)(v2 + 288);
    }
    else {
      *(_BYTE*)(v2 + 272) = 34;
      v17 = (char*)(v2 + 273);
    }
    strcpy(v17, "Layout/Common.arc");
    if ((*(_BYTE*)(v2 + 296) & 1) != 0) {
      *(_QWORD*)(v2 + 304) = 16;
      v18 = *(char**)(v2 + 312);
    }
    else {
      *(_BYTE*)(v2 + 296) = 32;
      v18 = (char*)(v2 + 297);
    }
    strcpy(v18, "Common_TlpResult");
    GameHr_1374b10(v2, 2);
    Se_80e330(v2, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v2, "SE_SYS_Telop_Mini_Out");
    Se_80e330(v2, "FF_Scout_Failure");
    *(_QWORD*)(v2 + 1168) = a2;
  }
  return v2;
}

__int64* game_telop_177c100(__int64 a1, __int64 a2, int* a3)
{
  __int64* v3;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  void* v16;
  _BYTE* v17;
  char v18;
  char* v19;
  char* v20;
  int v21;

  v3 = nullptr;
  if (a1 != 0 && a2 != 0 && a3 != nullptr) {
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1240, 16, 0);
    memset((__int64)(v3 + 18), 0, 0x448u);
    v8 = GameData_212c608[0];
    v3[11] = 0;
    v3[12] = 0;
    v3[13] = 0;
    v3[14] = 0;
    v3[15] = 0;
    v3[16] = 0;
    *((_WORD*)v3 + 68) = 0;
    v3[2] = 0;
    v3[3] = (__int64)"NULL";
    v3[4] = 0;
    v9 = v3 + 4;
    *(__int64*)((char*)v3 + 138) = 0;
    v3[18] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[9] = 0;
    v3[10] = 0;
    *v3 = v8 + 16;
    v3[1] = 0;
    game_ProcInst_Register((__int64)v3);
    v3[25] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v3[21] = 0;
    v3[22] = 0;
    v3[26] = 0;
    v3[27] = 0;
    v3[28] = 0;
    v3[29] = 0;
    v3[23] = 0;
    v3[24] = (__int64)(v3 + 25);
    v3[30] = 0;
    *((_DWORD*)v3 + 62) = 1065353216;
    v3[32] = 0;
    v3[33] = 0;
    v3[34] = 0;
    v3[35] = 0;
    v3[36] = 0;
    v3[37] = 0;
    v3[38] = 0;
    v3[39] = 0;
    *((_DWORD*)v3 + 83) = 0;
    *((_BYTE*)v3 + 338) = 0;
    v3[43] = 0;
    v3[44] = 0;
    v3[45] = 0;
    v3[46] = 0;
    *((_DWORD*)v3 + 80) = 3;
    v3[47] = 0;
    v3[48] = 0;
    v3[49] = 0;
    v3[50] = 0;
    v3[51] = 0;
    v3[52] = 0;
    v3[53] = 0;
    *((_DWORD*)v3 + 108) = 0x2000;
    v3[59] = 0;
    v3[60] = 0;
    v3[55] = 0;
    v3[56] = 0;
    v3[63] = 0;
    v3[64] = 0;
    v3[61] = 0;
    v3[62] = 0;
    *((_DWORD*)v3 + 130) = 1065353216;
    *(__int64*)((char*)v3 + 324) = 0;
    v3[66] = 0;
    v3[67] = 0;
    v3[68] = 0;
    *((_DWORD*)v3 + 138) = 1065353216;
    *((_WORD*)v3 + 280) = 0;
    *((_WORD*)v3 + 292) = 0;
    *((_BYTE*)v3 + 608) = 0;
    v3[82] = 0;
    v3[81] = 0;
    v3[79] = 0;
    *((_WORD*)v3 + 168) = 1;
    v3[78] = 0;
    v3[77] = 0;
    v3[86] = 0;
    v3[85] = 0;
    v3[84] = 0;
    v3[83] = 0;
    *((_DWORD*)v3 + 174) = 1065353216;
    v3[90] = 0;
    v3[89] = 0;
    v3[88] = 0;
    v3[57] = 0;
    v3[58] = (__int64)(v3 + 59);
    *((_DWORD*)v3 + 182) = 1065353216;
    *((_WORD*)v3 + 368) = 0;
    *((_WORD*)v3 + 380) = 0;
    *((_BYTE*)v3 + 784) = 0;
    v3[99] = 0;
    *((_BYTE*)v3 + 800) = 0;
    v3[80] = (__int64)(v3 + 81);
    v10 = *v7;
    v11 = GameData_2130240[0] + 2;
    *((_BYTE*)v3 + 816) = 0;
    *((_BYTE*)v3 + 820) = 0;
    *((_WORD*)v3 + 412) = 0;
    v3[101] = (__int64)v11;
    *v3 = (__int64)game_telop_TelopResult_vtable;
    v12 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
    *(_DWORD*)(v12 + 48) = 0x2000;
    v13 = GameData_2131678;
    *(_WORD*)(v12 + 108) = 256;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_DWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_DWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_WORD*)(v12 + 80) = 0;
    *(_DWORD*)(v12 + 112) = -1082130432;
    *(_WORD*)(v12 + 116) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_BYTE*)(v12 + 160) = 0;
    *(_BYTE*)(v12 + 288) = 0;
    *(_QWORD*)(v12 + 272) = 0;
    *(_QWORD*)(v12 + 280) = 0;
    *(_QWORD*)(v12 + 256) = 0;
    *(_QWORD*)(v12 + 264) = 0;
    *(_QWORD*)(v12 + 240) = 0;
    *(_QWORD*)(v12 + 248) = 0;
    *(_QWORD*)(v12 + 224) = 0;
    *(_QWORD*)(v12 + 232) = 0;
    *(_QWORD*)(v12 + 208) = 0;
    *(_QWORD*)(v12 + 216) = 0;
    *(_QWORD*)(v12 + 192) = 0;
    *(_QWORD*)(v12 + 200) = 0;
    *(_QWORD*)(v12 + 176) = 0;
    *(_QWORD*)(v12 + 184) = 0;
    *(_QWORD*)(v12 + 168) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_DWORD*)(v12 + 127) = 0;
    v3[107] = v12;
    *((_WORD*)v3 + 480) = 0;
    v3[127] = 0;
    v3[124] = 0;
    v3[125] = 0;
    *((_BYTE*)v3 + 952) = 0;
    v3[118] = 0;
    v3[117] = 0;
    v3[116] = 0;
    v3[115] = 0;
    v3[114] = 0;
    v3[113] = 0;
    v3[112] = 0;
    v3[111] = 0;
    v3[110] = 0;
    v3[109] = 0;
    v3[108] = 0;
    v3[128] = 1065353216;
    *((_WORD*)v3 + 516) = 0;
    *((_WORD*)v3 + 520) = 0;
    *((_WORD*)v3 + 532) = 0;
    *((_WORD*)v3 + 544) = 0;
    *(_QWORD*)v12 = v13 + 16;
    *(_DWORD*)(v12 + 292) = 2;
    *(_QWORD*)(v12 + 24) = 0;
    v3[106] = v12 + 24;
    *(__int64*)((char*)v3 + 1007) = 0;
    v14 = GameData_2130f98[0] + 2;
    *((_BYTE*)v3 + 1152) = 0;
    v3[143] = 0;
    v3[142] = 0;
    v3[141] = 0;
    v3[140] = 0;
    v3[139] = 0;
    v3[153] = 0;
    v3[152] = 0;
    v3[151] = 0;
    v3[150] = 0;
    v3[149] = 0;
    v3[148] = 0;
    v3[147] = 0;
    v3[146] = 0;
    v3[145] = 0;
    *((_DWORD*)v3 + 308) = 0;
    v3[123] = (__int64)v14;
    *v3 = (__int64)game_telop_TelopReinforceSkill_vtable;
    v15 = *(_QWORD*)(a1 + 40);
    if (v15 != 0) {
      *(_QWORD*)(v15 + 48) = v3;
      v3[7] = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    v3[3] = (__int64)"TelopReinforceSkill";
    v3[4] = a1;
    *((_DWORD*)v3 + 35) =
        (unsigned int)game_HashString32("TelopReinforceSkill");
    v3[8] = 0;
    v3[9] = 24;
    v3[10] = 1;
    v16 = GameData_2130f68;
    v3[1] = (__int64)GameData_2130f68;
    v3[2] = (__int64)v16;
    (*(void (**)(__int64*))(*v3 + 32))(v3);
    if (((*(__int64 (**)(__int64*))(*v3 + 136))(v3) & 1) != 0 &&
        (v3[17] & 0x100) == 0) {
      *((_WORD*)v3 + 68) |= 0x100u;
    }
    v17 = (_BYTE*)*v9;
    v18 = *(_BYTE*)(*v9 + 138LL);
    if (v18 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v9);
      v18 = v17[138];
    }
    v17[138] = v18 + 1;
    *((_WORD*)v3 + 68) |= 2u;
    if ((v3[34] & 1) != 0) {
      v3[35] = 17;
      v19 = (char*)v3[36];
    }
    else {
      *((_BYTE*)v3 + 272) = 34;
      v19 = (char*)v3 + 273;
    }
    strcpy(v19, "Layout/Common.arc");
    if ((v3[37] & 1) != 0) {
      v3[38] = 16;
      v20 = (char*)v3[39];
    }
    else {
      *((_BYTE*)v3 + 296) = 32;
      v20 = (char*)v3 + 297;
    }
    strcpy(v20, "Common_TlpResult");
    GameHr_1374b10((__int64)v3, 2);
    Se_80e330((__int64)v3, "SE_SYS_Telop_Mini_In");
    GameHr_1378190((__int64)v3, "SE_SYS_Telop_Mini_Out");
    *((_BYTE*)v3 + 338) = 1;
    Se_80e330((__int64)v3, "SE_SYS_Telop_SkillAcquire");
    v21 = *a3;
    v3[146] = a2;
    *((_DWORD*)v3 + 308) = v21;
    TelopSkillLearn_1765aa0(v3, a2);
  }
  return v3;
}

__int64 game_telop_177c650(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  void* v18;
  _BYTE* v19;
  char v20;
  char* v21;
  char* v22;
  const char* v23;
  const char* v24;

  if (a1 != 0) {
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1192, 16, 0);
    memset(v9 + 144, 0, 0x418u);
    v10 = GameData_212c608[0];
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_QWORD*)(v9 + 128) = 0;
    *(_WORD*)(v9 + 136) = 0;
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 + 24) = "NULL";
    *(_QWORD*)(v9 + 32) = 0;
    v11 = (_QWORD*)(v9 + 32);
    *(_QWORD*)(v9 + 138) = 0;
    *(_QWORD*)(v9 + 144) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_QWORD*)v9 = v10 + 16;
    *(_QWORD*)(v9 + 8) = 0;
    game_ProcInst_Register(v9);
    *(_QWORD*)(v9 + 200) = 0;
    *(_QWORD*)(v9 + 152) = 0;
    *(_QWORD*)(v9 + 160) = 0;
    *(_QWORD*)(v9 + 168) = 0;
    *(_QWORD*)(v9 + 176) = 0;
    *(_QWORD*)(v9 + 208) = 0;
    *(_QWORD*)(v9 + 216) = 0;
    *(_QWORD*)(v9 + 224) = 0;
    *(_QWORD*)(v9 + 232) = 0;
    *(_QWORD*)(v9 + 184) = 0;
    *(_QWORD*)(v9 + 192) = v9 + 200;
    *(_QWORD*)(v9 + 240) = 0;
    *(_DWORD*)(v9 + 248) = 1065353216;
    *(_QWORD*)(v9 + 256) = 0;
    *(_QWORD*)(v9 + 264) = 0;
    *(_QWORD*)(v9 + 272) = 0;
    *(_QWORD*)(v9 + 280) = 0;
    *(_QWORD*)(v9 + 288) = 0;
    *(_QWORD*)(v9 + 296) = 0;
    *(_QWORD*)(v9 + 304) = 0;
    *(_QWORD*)(v9 + 312) = 0;
    *(_DWORD*)(v9 + 332) = 0;
    *(_BYTE*)(v9 + 338) = 0;
    *(_QWORD*)(v9 + 344) = 0;
    *(_QWORD*)(v9 + 352) = 0;
    *(_QWORD*)(v9 + 360) = 0;
    *(_QWORD*)(v9 + 368) = 0;
    *(_DWORD*)(v9 + 320) = 3;
    *(_QWORD*)(v9 + 376) = 0;
    *(_QWORD*)(v9 + 384) = 0;
    *(_QWORD*)(v9 + 392) = 0;
    *(_QWORD*)(v9 + 400) = 0;
    *(_QWORD*)(v9 + 408) = 0;
    *(_QWORD*)(v9 + 416) = 0;
    *(_QWORD*)(v9 + 424) = 0;
    *(_DWORD*)(v9 + 432) = 0x2000;
    *(_QWORD*)(v9 + 472) = 0;
    *(_QWORD*)(v9 + 480) = 0;
    *(_QWORD*)(v9 + 440) = 0;
    *(_QWORD*)(v9 + 448) = 0;
    *(_QWORD*)(v9 + 504) = 0;
    *(_QWORD*)(v9 + 512) = 0;
    *(_QWORD*)(v9 + 488) = 0;
    *(_QWORD*)(v9 + 496) = 0;
    *(_DWORD*)(v9 + 520) = 1065353216;
    *(_QWORD*)(v9 + 324) = 0;
    *(_QWORD*)(v9 + 528) = 0;
    *(_QWORD*)(v9 + 536) = 0;
    *(_QWORD*)(v9 + 544) = 0;
    *(_DWORD*)(v9 + 552) = 1065353216;
    *(_WORD*)(v9 + 560) = 0;
    *(_WORD*)(v9 + 584) = 0;
    *(_BYTE*)(v9 + 608) = 0;
    *(_QWORD*)(v9 + 656) = 0;
    *(_QWORD*)(v9 + 648) = 0;
    *(_QWORD*)(v9 + 632) = 0;
    *(_WORD*)(v9 + 336) = 1;
    *(_QWORD*)(v9 + 624) = 0;
    *(_QWORD*)(v9 + 616) = 0;
    *(_QWORD*)(v9 + 688) = 0;
    *(_QWORD*)(v9 + 680) = 0;
    *(_QWORD*)(v9 + 672) = 0;
    *(_QWORD*)(v9 + 664) = 0;
    *(_DWORD*)(v9 + 696) = 1065353216;
    *(_QWORD*)(v9 + 720) = 0;
    *(_QWORD*)(v9 + 712) = 0;
    *(_QWORD*)(v9 + 704) = 0;
    *(_QWORD*)(v9 + 456) = 0;
    *(_QWORD*)(v9 + 464) = v9 + 472;
    *(_DWORD*)(v9 + 728) = 1065353216;
    *(_WORD*)(v9 + 736) = 0;
    *(_WORD*)(v9 + 760) = 0;
    *(_BYTE*)(v9 + 784) = 0;
    *(_QWORD*)(v9 + 792) = 0;
    *(_BYTE*)(v9 + 800) = 0;
    *(_QWORD*)(v9 + 640) = v9 + 648;
    v12 = *v8;
    v13 = GameData_2130240[0] + 2;
    *(_BYTE*)(v9 + 816) = 0;
    *(_BYTE*)(v9 + 820) = 0;
    *(_WORD*)(v9 + 824) = 0;
    *(_QWORD*)(v9 + 808) = v13;
    *(_QWORD*)v9 = game_telop_TelopResult_vtable;
    v14 = fw_memory_HeapManager_Allocate(v12, 296, 16, 0);
    *(_DWORD*)(v14 + 48) = 0x2000;
    v15 = GameData_2131678;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_QWORD*)(v9 + 856) = v14;
    *(_WORD*)(v9 + 960) = 0;
    *(_QWORD*)(v9 + 1016) = 0;
    *(_QWORD*)(v9 + 992) = 0;
    *(_QWORD*)(v9 + 1000) = 0;
    *(_BYTE*)(v9 + 952) = 0;
    *(_QWORD*)(v9 + 944) = 0;
    *(_QWORD*)(v9 + 936) = 0;
    *(_QWORD*)(v9 + 928) = 0;
    *(_QWORD*)(v9 + 920) = 0;
    *(_QWORD*)(v9 + 912) = 0;
    *(_QWORD*)(v9 + 904) = 0;
    *(_QWORD*)(v9 + 896) = 0;
    *(_QWORD*)(v9 + 888) = 0;
    *(_QWORD*)(v9 + 880) = 0;
    *(_QWORD*)(v9 + 872) = 0;
    *(_QWORD*)(v9 + 864) = 0;
    *(_QWORD*)(v9 + 1024) = 1065353216;
    *(_WORD*)(v9 + 1032) = 0;
    *(_WORD*)(v9 + 1040) = 0;
    *(_WORD*)(v9 + 1064) = 0;
    *(_WORD*)(v9 + 1088) = 0;
    *(_QWORD*)v14 = v15 + 16;
    *(_DWORD*)(v14 + 292) = 2;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v9 + 848) = v14 + 24;
    *(_QWORD*)(v9 + 1007) = 0;
    v16 = GameData_2130f98[0] + 2;
    *(_QWORD*)(v9 + 1160) = 0;
    *(_BYTE*)(v9 + 1152) = 0;
    *(_QWORD*)(v9 + 1144) = 0;
    *(_QWORD*)(v9 + 1136) = 0;
    *(_QWORD*)(v9 + 1128) = 0;
    *(_QWORD*)(v9 + 1120) = 0;
    *(_QWORD*)(v9 + 1112) = 0;
    *(_BYTE*)(v9 + 1184) = 0;
    *(_QWORD*)(v9 + 1176) = 0;
    *(_QWORD*)(v9 + 1168) = 0;
    *(_QWORD*)(v9 + 984) = v16;
    *(_QWORD*)v9 = game_telop_TelopChangeItem_vtable;
    v17 = *(_QWORD*)(a1 + 40);
    if (v17 != 0) {
      *(_QWORD*)(v17 + 48) = v9;
      *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v9;
    *(_QWORD*)(v9 + 24) = "TelopChangeItem";
    *(_QWORD*)(v9 + 32) = a1;
    *(_DWORD*)(v9 + 140) = (unsigned int)game_HashString32("TelopChangeItem");
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 24;
    *(_QWORD*)(v9 + 80) = 1;
    v18 = GameData_2130f68;
    *(_QWORD*)(v9 + 8) = GameData_2130f68;
    *(_QWORD*)(v9 + 16) = v18;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0 &&
        (*(_WORD*)(v9 + 136) & 0x100) == 0) {
      *(_WORD*)(v9 + 136) |= 0x100u;
    }
    v19 = (_BYTE*)*v11;
    v20 = *(_BYTE*)(*v11 + 138LL);
    if (v20 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v19 + 64LL))(*v11);
      v20 = v19[138];
    }
    v19[138] = v20 + 1;
    *(_WORD*)(v9 + 136) |= 2u;
    if ((*(_BYTE*)(v9 + 272) & 1) != 0) {
      *(_QWORD*)(v9 + 280) = 17;
      v21 = *(char**)(v9 + 288);
    }
    else {
      *(_BYTE*)(v9 + 272) = 34;
      v21 = (char*)(v9 + 273);
    }
    strcpy(v21, "Layout/Common.arc");
    if ((*(_BYTE*)(v9 + 296) & 1) != 0) {
      *(_QWORD*)(v9 + 304) = 16;
      v22 = *(char**)(v9 + 312);
    }
    else {
      *(_BYTE*)(v9 + 296) = 32;
      v22 = (char*)(v9 + 297);
    }
    strcpy(v22, "Common_TlpResult");
    GameHr_1374b10(v9, 2);
    Se_80e330(v9, "SE_SYS_Telop_Mini_In");
    GameHr_1378190(v9, "SE_SYS_Telop_Mini_Out");
    *(_QWORD*)(v9 + 1168) = a2;
    *(_QWORD*)(v9 + 1176) = a3;
    *(_BYTE*)(v9 + 338) = 1;
    *(_BYTE*)(v9 + 1184) = a4 & 1;
    if ((a4 & 1) != 0) {
      v23 = "FF_Blacksmith_Craft";
      v24 = "SE_EVT_Weapon_Forge";
    }
    else {
      if ((*(_BYTE*)(a3 + 337) & 4) == 0) {
        v23 = "FF_Positive1";
      LABEL_22:
        Se_80e330(v9, v23);
        return v9;
      }
      v23 = "FF_Special_ItemGet";
      v24 = "SE_SYS_Telop_ItemGet_Special";
    }
    Se_80e330(v9, v24);
    goto LABEL_22;
  }
  return 0;
}

__int64 game_telop_177d0e0(__int64 a1, __int64 a2, int a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  void* v16;
  _BYTE* v17;
  char v18;
  char* v19;
  char* v20;

  if (a1 == 0) {
    return 0;
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0);
  memset(v7 + 144, 0, 0x410u);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 32) = 0;
  v9 = (_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = v7 + 200;
  *(_QWORD*)(v7 + 240) = 0;
  *(_DWORD*)(v7 + 248) = 1065353216;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 332) = 0;
  *(_BYTE*)(v7 + 338) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_DWORD*)(v7 + 320) = 3;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 424) = 0;
  *(_DWORD*)(v7 + 432) = 0x2000;
  *(_QWORD*)(v7 + 472) = 0;
  *(_QWORD*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 440) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 504) = 0;
  *(_QWORD*)(v7 + 512) = 0;
  *(_QWORD*)(v7 + 488) = 0;
  *(_QWORD*)(v7 + 496) = 0;
  *(_DWORD*)(v7 + 520) = 1065353216;
  *(_QWORD*)(v7 + 324) = 0;
  *(_QWORD*)(v7 + 528) = 0;
  *(_QWORD*)(v7 + 536) = 0;
  *(_QWORD*)(v7 + 544) = 0;
  *(_DWORD*)(v7 + 552) = 1065353216;
  *(_WORD*)(v7 + 560) = 0;
  *(_WORD*)(v7 + 584) = 0;
  *(_BYTE*)(v7 + 608) = 0;
  *(_QWORD*)(v7 + 656) = 0;
  *(_QWORD*)(v7 + 648) = 0;
  *(_QWORD*)(v7 + 632) = 0;
  *(_WORD*)(v7 + 336) = 1;
  *(_QWORD*)(v7 + 624) = 0;
  *(_QWORD*)(v7 + 616) = 0;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  *(_QWORD*)(v7 + 672) = 0;
  *(_QWORD*)(v7 + 664) = 0;
  *(_DWORD*)(v7 + 696) = 1065353216;
  *(_QWORD*)(v7 + 720) = 0;
  *(_QWORD*)(v7 + 712) = 0;
  *(_QWORD*)(v7 + 704) = 0;
  *(_QWORD*)(v7 + 456) = 0;
  *(_QWORD*)(v7 + 464) = v7 + 472;
  *(_DWORD*)(v7 + 728) = 1065353216;
  *(_WORD*)(v7 + 736) = 0;
  *(_WORD*)(v7 + 760) = 0;
  *(_BYTE*)(v7 + 784) = 0;
  *(_QWORD*)(v7 + 792) = 0;
  *(_BYTE*)(v7 + 800) = 0;
  *(_QWORD*)(v7 + 640) = v7 + 648;
  v10 = *v6;
  v11 = GameData_2130240[0] + 2;
  *(_BYTE*)(v7 + 816) = 0;
  *(_BYTE*)(v7 + 820) = 0;
  *(_WORD*)(v7 + 824) = 0;
  *(_QWORD*)(v7 + 808) = v11;
  *(_QWORD*)v7 = game_telop_TelopResult_vtable;
  v12 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
  v13 = GameData_2131678;
  *(_WORD*)(v12 + 108) = 256;
  *(_DWORD*)(v12 + 48) = 0x2000;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_DWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_DWORD*)(v12 + 104) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_WORD*)(v12 + 80) = 0;
  *(_DWORD*)(v12 + 112) = -1082130432;
  *(_WORD*)(v12 + 116) = 0;
  *(_WORD*)(v12 + 136) = 0;
  *(_BYTE*)(v12 + 160) = 0;
  *(_BYTE*)(v12 + 288) = 0;
  *(_QWORD*)(v12 + 272) = 0;
  *(_QWORD*)(v12 + 280) = 0;
  *(_QWORD*)(v12 + 256) = 0;
  *(_QWORD*)(v12 + 264) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *(_QWORD*)(v12 + 248) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_DWORD*)(v12 + 127) = 0;
  *(_QWORD*)(v7 + 856) = v12;
  *(_WORD*)(v7 + 960) = 0;
  *(_QWORD*)(v7 + 1016) = 0;
  *(_QWORD*)(v7 + 992) = 0;
  *(_QWORD*)(v7 + 1000) = 0;
  *(_BYTE*)(v7 + 952) = 0;
  *(_QWORD*)(v7 + 944) = 0;
  *(_QWORD*)(v7 + 936) = 0;
  *(_QWORD*)(v7 + 928) = 0;
  *(_QWORD*)(v7 + 920) = 0;
  *(_QWORD*)(v7 + 912) = 0;
  *(_QWORD*)(v7 + 904) = 0;
  *(_QWORD*)(v7 + 896) = 0;
  *(_QWORD*)(v7 + 888) = 0;
  *(_QWORD*)(v7 + 880) = 0;
  *(_QWORD*)(v7 + 872) = 0;
  *(_QWORD*)(v7 + 864) = 0;
  *(_QWORD*)(v7 + 1024) = 1065353216;
  *(_WORD*)(v7 + 1032) = 0;
  *(_WORD*)(v7 + 1040) = 0;
  *(_WORD*)(v7 + 1064) = 0;
  *(_WORD*)(v7 + 1088) = 0;
  *(_QWORD*)v12 = v13 + 16;
  *(_DWORD*)(v12 + 292) = 2;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v7 + 848) = v12 + 24;
  *(_QWORD*)(v7 + 1007) = 0;
  v14 = GameData_2130f98[0] + 2;
  *(_QWORD*)(v7 + 1160) = 0;
  *(_BYTE*)(v7 + 1152) = 0;
  *(_QWORD*)(v7 + 1144) = 0;
  *(_QWORD*)(v7 + 1136) = 0;
  *(_QWORD*)(v7 + 1128) = 0;
  *(_QWORD*)(v7 + 1120) = 0;
  *(_QWORD*)(v7 + 1112) = 0;
  *(_QWORD*)(v7 + 1168) = 0;
  *(_DWORD*)(v7 + 1176) = 0;
  *(_QWORD*)(v7 + 984) = v14;
  *(_QWORD*)v7 = game_telop_TelopSimpleLevelup_vtable;
  v15 = *(_QWORD*)(a1 + 40);
  if (v15 != 0) {
    *(_QWORD*)(v15 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "TelopSimpleLevelup";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = (unsigned int)game_HashString32("TelopSimpleLevelup");
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  v16 = GameData_2130f68;
  *(_QWORD*)(v7 + 8) = GameData_2130f68;
  *(_QWORD*)(v7 + 16) = v16;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  v17 = (_BYTE*)*v9;
  v18 = *(_BYTE*)(*v9 + 138LL);
  if (v18 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v17 + 64LL))(*v9);
    v18 = v17[138];
  }
  v17[138] = v18 + 1;
  *(_WORD*)(v7 + 136) |= 2u;
  if ((*(_BYTE*)(v7 + 272) & 1) != 0) {
    *(_QWORD*)(v7 + 280) = 17;
    v19 = *(char**)(v7 + 288);
  }
  else {
    *(_BYTE*)(v7 + 272) = 34;
    v19 = (char*)(v7 + 273);
  }
  strcpy(v19, "Layout/Common.arc");
  if ((*(_BYTE*)(v7 + 296) & 1) != 0) {
    *(_QWORD*)(v7 + 304) = 16;
    v20 = *(char**)(v7 + 312);
  }
  else {
    *(_BYTE*)(v7 + 296) = 32;
    v20 = (char*)(v7 + 297);
  }
  strcpy(v20, "Common_TlpResult");
  GameHr_1374b10(v7, 2);
  Se_80e330(v7, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v7, "SE_SYS_Telop_Mini_Out");
  *(_QWORD*)(v7 + 1168) = a2;
  *(_DWORD*)(v7 + 1176) = a3;
  Se_80e330(v7, "SE_SYS_Telop_Levelup_In");
  GameHr_1378190(v7, "SE_SYS_Telop_Levelup_Out");
  return v7;
}

__int64 game_telop_1781e30(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  void* v7;
  char* v8;
  char* v9;

  v1 = 0;
  if (a1 != 0 && GameData_2263c30 == 0) {
    v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        872, 16, 0);
    memset(v1 + 144, 0, 0x2D8u);
    v3 = GameData_212c608[0];
    *(_QWORD*)(v1 + 96) = 0;
    *(_QWORD*)(v1 + 104) = 0;
    *(_QWORD*)(v1 + 112) = 0;
    *(_QWORD*)(v1 + 120) = 0;
    *(_QWORD*)(v1 + 128) = 0;
    *(_WORD*)(v1 + 136) = 0;
    *(_QWORD*)(v1 + 16) = 0;
    *(_QWORD*)(v1 + 24) = "NULL";
    *(_QWORD*)(v1 + 138) = 0;
    *(_QWORD*)(v1 + 144) = 0;
    *(_QWORD*)(v1 + 32) = 0;
    *(_QWORD*)(v1 + 40) = 0;
    *(_QWORD*)(v1 + 48) = 0;
    *(_QWORD*)(v1 + 56) = 0;
    *(_QWORD*)(v1 + 64) = 0;
    *(_QWORD*)(v1 + 72) = 0;
    *(_QWORD*)(v1 + 80) = 0;
    *(_QWORD*)(v1 + 88) = 0;
    *(_QWORD*)v1 = v3 + 16;
    *(_QWORD*)(v1 + 8) = 0;
    game_ProcInst_Register(v1);
    v4 = GameData_2130f78[0];
    *(_QWORD*)(v1 + 200) = 0;
    *(_QWORD*)(v1 + 152) = 0;
    *(_QWORD*)(v1 + 160) = 0;
    *(_QWORD*)(v1 + 168) = 0;
    *(_QWORD*)(v1 + 176) = 0;
    *(_QWORD*)(v1 + 208) = 0;
    *(_QWORD*)(v1 + 216) = 0;
    *(_QWORD*)(v1 + 184) = 0;
    *(_QWORD*)(v1 + 192) = v1 + 200;
    *(_QWORD*)(v1 + 224) = 0;
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    *(_DWORD*)(v1 + 248) = 1065353216;
    *(_QWORD*)(v1 + 256) = 0;
    *(_QWORD*)(v1 + 264) = 0;
    *(_QWORD*)(v1 + 272) = 0;
    *(_QWORD*)(v1 + 280) = 0;
    *(_QWORD*)(v1 + 288) = 0;
    *(_QWORD*)(v1 + 296) = 0;
    *(_QWORD*)(v1 + 304) = 0;
    *(_QWORD*)(v1 + 312) = 0;
    *(_DWORD*)(v1 + 332) = 0;
    *(_BYTE*)(v1 + 338) = 0;
    *(_QWORD*)(v1 + 344) = 0;
    *(_QWORD*)(v1 + 352) = 0;
    *(_QWORD*)(v1 + 360) = 0;
    *(_QWORD*)(v1 + 368) = 0;
    *(_QWORD*)(v1 + 376) = 0;
    *(_QWORD*)(v1 + 384) = 0;
    *(_QWORD*)(v1 + 392) = 0;
    *(_QWORD*)(v1 + 400) = 0;
    *(_QWORD*)(v1 + 408) = 0;
    *(_QWORD*)(v1 + 416) = 0;
    *(_QWORD*)(v1 + 424) = 0;
    *(_QWORD*)(v1 + 472) = 0;
    *(_QWORD*)(v1 + 480) = 0;
    *(_QWORD*)(v1 + 440) = 0;
    *(_QWORD*)(v1 + 448) = 0;
    *(_QWORD*)(v1 + 504) = 0;
    *(_QWORD*)(v1 + 512) = 0;
    *(_QWORD*)(v1 + 488) = 0;
    *(_QWORD*)(v1 + 496) = 0;
    *(_DWORD*)(v1 + 520) = 1065353216;
    *(_QWORD*)(v1 + 528) = 0;
    *(_QWORD*)(v1 + 536) = 0;
    *(_QWORD*)(v1 + 544) = 0;
    *(_DWORD*)(v1 + 552) = 1065353216;
    *(_WORD*)(v1 + 560) = 0;
    *(_WORD*)(v1 + 584) = 0;
    *(_BYTE*)(v1 + 608) = 0;
    *(_QWORD*)(v1 + 656) = 0;
    *(_QWORD*)(v1 + 648) = 0;
    *(_QWORD*)(v1 + 632) = 0;
    *(_QWORD*)(v1 + 624) = 0;
    *(_QWORD*)(v1 + 616) = 0;
    *(_QWORD*)(v1 + 688) = 0;
    *(_QWORD*)(v1 + 680) = 0;
    *(_QWORD*)(v1 + 672) = 0;
    *(_QWORD*)(v1 + 664) = 0;
    *(_DWORD*)(v1 + 696) = 1065353216;
    *(_QWORD*)(v1 + 720) = 0;
    *(_QWORD*)(v1 + 712) = 0;
    *(_QWORD*)(v1 + 704) = 0;
    *(_DWORD*)(v1 + 728) = 1065353216;
    *(_WORD*)(v1 + 736) = 0;
    *(_WORD*)(v1 + 760) = 0;
    *(_BYTE*)(v1 + 784) = 0;
    *(_QWORD*)(v1 + 792) = 0;
    *(_BYTE*)(v1 + 800) = 0;
    *(_QWORD*)v1 = v4 + 16;
    *(_DWORD*)(v1 + 320) = 3;
    *(_QWORD*)(v1 + 324) = 0;
    *(_WORD*)(v1 + 336) = 1;
    *(_DWORD*)(v1 + 432) = 0x2000;
    *(_QWORD*)(v1 + 456) = 0;
    *(_QWORD*)(v1 + 464) = v1 + 472;
    *(_QWORD*)(v1 + 640) = v1 + 648;
    v5 = GameData_2130240[0] + 2;
    *(_BYTE*)(v1 + 816) = 0;
    *(_BYTE*)(v1 + 820) = 0;
    *(_QWORD*)(v1 + 808) = v5;
    if (GameData_2263c30 == 0) {
      GameData_2263c30 = v1;
    }
    *(_DWORD*)(v1 + 832) = 0;
    *(_WORD*)(v1 + 840) = 0;
    *(_DWORD*)(v1 + 864) = 0;
    *(_QWORD*)v1 = game_telop_AreaNameTelop_vtable;
    *(_QWORD*)(v1 + 824) = AreaNameTelop_Destructor_17824b0_ptr;
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v1;
      *(_QWORD*)(v1 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v1;
    *(_QWORD*)(v1 + 24) = "AreaNameTelop";
    *(_QWORD*)(v1 + 32) = a1;
    *(_DWORD*)(v1 + 140) = (unsigned int)game_HashString32("AreaNameTelop");
    *(_QWORD*)(v1 + 64) = 0;
    *(_QWORD*)(v1 + 72) = 24;
    *(_QWORD*)(v1 + 80) = 1;
    v7 = GameData_2130f70;
    *(_QWORD*)(v1 + 8) = GameData_2130f70;
    *(_QWORD*)(v1 + 16) = v7;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 32LL))(v1);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v1 + 136LL))(v1) & 1) != 0 &&
        (*(_WORD*)(v1 + 136) & 0x100) == 0) {
      *(_WORD*)(v1 + 136) |= 0x100u;
    }
    if ((*(_BYTE*)(v1 + 272) & 1) != 0) {
      *(_QWORD*)(v1 + 280) = 17;
      v8 = *(char**)(v1 + 288);
    }
    else {
      *(_BYTE*)(v1 + 272) = 34;
      v8 = (char*)(v1 + 273);
    }
    strcpy(v8, "Layout/Common.arc");
    if ((*(_BYTE*)(v1 + 296) & 1) != 0) {
      *(_QWORD*)(v1 + 304) = 20;
      v9 = *(char**)(v1 + 312);
    }
    else {
      *(_BYTE*)(v1 + 296) = 40;
      v9 = (char*)(v1 + 297);
    }
    strcpy(v9, "Common_FirstSpotInfo");
  }
  return v1;
}

#pragma GCC visibility pop
