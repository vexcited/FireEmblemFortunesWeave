#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void GameRecord_99f220(PSEUDO_X8);
__int64 Config_bc7660(_QWORD);
__int64 Config_bc7840(_QWORD);
__int64 GameManager_a35ca0(_QWORD, _QWORD);
__int64 GameRoutine_111c720(_QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_133f0c0(_QWORD);
__int64 GameRoutine_133f1d0(_QWORD, long double);
__int64 GameRoutine_1361760(_QWORD);
__int64 GameRoutine_1361b40(__int64 result, __int64, __int64, unsigned int*);
__int64 GameRoutine_13656f0();
__int64 GameRoutine_1365740();
__int64 GameRoutine_1365c00();
__int64 GameRoutine_1366120();
__int64 GameRoutine_1366d00(_QWORD, _QWORD);
__int64 GameRoutine_1366fa0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a0820(_QWORD);
__int64 GameRoutine_156bee0(__int64 result, __int64, __int64, __int64, char,
                            float, float);
__int64 GameRoutine_156d320();
__int64 GameRoutine_15dff80(__int64, char, _QWORD*, char);
__int64 GameRoutine_1651170(_QWORD);
__int64 GameRoutine_185a020(void);
__int64 GameRoutine_190b6a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190b870(__int64, unsigned int, int);
__int64 GameRoutine_1916be0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1916dd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1917400(__int64 result, __int64, unsigned __int64,
                            int8x16_t*, char, char);
__int64 GameRoutine_19b1170();
__int64 GameRoutine_19b1230();
__int64 GameRoutine_19b1330();
__int64 GameRoutine_19b2e40();
__int64 GameRoutine_19b4720();
__int64 GameRoutine_2b0(_QWORD);
__int64 GameRoutine_5784d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_a49f70(_QWORD, _QWORD);
__int64 GameRoutine_a94240(_QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_1328300(_QWORD);
__int64 Impl_1328460(_QWORD);
__int64 Impl_13287c0(_QWORD);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Material_576fc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                        double);
__int64 Pane_58dfa0(void);
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 Registration_6492e0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString(__int64 result);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 game_gameui_UnitUtil_GetNext(__int64, char, _QWORD*, char);
__int64 game_util_Format(const char*, ...);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_oe_SetUserInactivityDetectionTimeExtended(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
__int64 nn_ui2d_579080(_QWORD, _QWORD, _QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_getDefineInt(unsigned __int8*);
__int64 snd_setPosition_100570(__int64*, float, float, float);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__int64 spine_AnimationState_setEmptyAnimation(_QWORD, _QWORD, double);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_text_190a640(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
bool GameManager_a35ca0_alt1(__int64, __int64) __asm__("GameManager_a35ca0");
bool GameRoutine_1604790();
bool Unit_6c9ab0(_QWORD*, _DWORD*, unsigned __int16*);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* game_util_Format_alt1(__int64, __int64, __int64, __int64, __int64,
                            __int64, __int64, __int64,
                            char) __asm__("game_util_Format");
char* game_util_Format_alt2(const char*, ...) __asm__("game_util_Format");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN** GameData_2130ef0[2];
extern _UNKNOWN** GameData_2130ef8;
extern _UNKNOWN GameData_1a94a43;
extern _UNKNOWN GameData_1a9a4d6;
extern _UNKNOWN GameData_1bd2570;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_2272760;
extern _UNKNOWN game_g_random_mutex;
extern __int16* GameData_212cf08[9];
extern __int64 (*EmbeddedImage_18895c0_ptr)();
extern __int64 (*GameData_201fad8[])();
extern __int64 (*GameData_201fb58[])();
extern __int64 (*GameData_201fbd8[])();
extern __int64 (*GameData_201fc58[])();
extern __int64 (*GameData_201fcd8[])();
extern __int64 (*GameData_201fd58[])();
extern __int64 (*GameData_202f2d8[])();
extern __int64 (*GameData_202f370[])();
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212c848[2])();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*GameData_212d248)();
extern __int64 (*GameData_212d420[5])();
extern __int64 (*GameData_212d610[2])();
extern __int64 (*GameData_212d618)();
extern __int64 (*GameData_2130ed0[4])();
extern __int64 (*GameData_2130ed8[3])();
extern __int64 (*TextBoxEx_188a640_ptr[2])();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_anonymous_ProcWarRecordSeq_vtable[])();
extern __int64 (*ui_anonymous_RenderTask_vtable[])();
extern __int64* GameData_212c838;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c970[153];
extern __int64* GameData_212ccd8[44];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212df70[4];
extern __int64* GameData_212e2f8;
extern __int64* GameData_212eb78[3];
extern __int64* GameData_2130f00[5];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21759e0;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_22416b0;
extern __int64 GameData_224ae30;
extern __int64 GameData_224ae38;
extern __int64 GameData_2259500;
extern __int64 GameData_2272250;
extern __int64 GameData_2272258;
extern __int64 GameData_2272268;
extern __int64 GameData_2272270;
extern __int64 GameData_2272288;
extern __int64 GameData_2272298;
extern __int64 GameData_22722a8;
extern __int64 GameData_22722b0;
extern __int64 GameData_22722b8;
extern __int64 GameData_22722c8;
extern __int64 GameData_22722d8;
extern __int64 GameData_22722e8;
extern __int64 GameData_22722f0;
extern __int64 GameData_22722f8;
extern __int64 GameData_2272308;
extern __int64 GameData_2272318;
extern __int64 GameData_2272328;
extern __int64 GameData_2272330;
extern __int64 GameData_2272338;
extern __int64 GameData_2272348;
extern __int64 GameData_2272358;
extern __int64 GameData_2272368;
extern __int64 GameData_2272370;
extern __int64 GameData_2272378;
extern __int64 GameData_2272388;
extern __int64 GameData_2272398;
extern __int64 GameData_22723a8;
extern __int64 GameData_22723b0;
extern __int64 GameData_22723b8;
extern __int64 GameData_22723c8;
extern __int64 GameData_22723d8;
extern __int64 GameData_22723e8;
extern __int64 GameData_22723f0;
extern __int64 GameData_22723f8;
extern __int64 GameData_2272408;
extern __int64 GameData_2272418;
extern __int64 GameData_2272428;
extern __int64 GameData_2272430;
extern __int64 GameData_2272448;
extern __int64 GameData_2272458;
extern __int64 GameData_2272468;
extern __int64 GameData_2272470;
extern __int64 GameData_2272488;
extern __int64 GameData_2272498;
extern __int64 GameData_22724a8;
extern __int64 GameData_22724b0;
extern __int64 GameData_22724c8;
extern __int64 GameData_22724d8;
extern __int64 GameData_22724e8;
extern __int64 GameData_22724f0;
extern __int64 GameData_22724f8;
extern __int64 GameData_2272508;
extern __int64 GameData_2272518;
extern __int64 GameData_2272528;
extern __int64 GameData_2272530;
extern __int64 GameData_2272538;
extern __int64 GameData_2272548;
extern __int64 GameData_2272558;
extern __int64 GameData_2272568;
extern __int64 GameData_2272570;
extern __int64 GameData_2272588;
extern __int64 GameData_2272598;
extern __int64 GameData_22725a8;
extern __int64 GameData_22725b0;
extern __int64 GameData_22725c8;
extern __int64 GameData_22725d8;
extern __int64 GameData_22725e8;
extern __int64 GameData_22725f0;
extern __int64 GameData_22725f8;
extern __int64 GameData_2272608;
extern __int64 GameData_2272618;
extern __int64 GameData_2272628;
extern __int64 GameData_2272630;
extern __int64 GameData_2272648;
extern __int64 GameData_2272658;
extern __int64 GameData_2272668;
extern __int64 GameData_2272670;
extern __int64 GameData_2272688;
extern __int64 GameData_2272698;
extern __int64 GameData_22726a8;
extern __int64 GameData_22726b0;
extern __int64 GameData_22726c8;
extern __int64 GameData_22726d8;
extern __int64 GameData_22726e8;
extern __int64 GameData_22726f0;
extern __int64 GameData_22726f8;
extern __int64 GameData_2272708;
extern __int64 GameData_2272718;
extern __int64 GameData_2272728;
extern __int64 GameData_2272730;
extern __int64 GameData_2272738;
extern __int64 GameData_2272748;
extern __int64 GameData_2272758;
extern __int64 GameData_2272780;
extern __int64 as_g_base_frame_counter;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
extern __int64 ui_Manager_instance_;
extern char* GameData_2043200[8];
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_1a9f09e;
extern char GameData_2272260;
extern char GameData_22722a0;
extern char GameData_22722e0;
extern char GameData_2272320;
extern char GameData_2272360;
extern char GameData_22723a0;
extern char GameData_22723e0;
extern char GameData_2272420;
extern char GameData_2272460;
extern char GameData_22724a0;
extern char GameData_22724e0;
extern char GameData_2272520;
extern char GameData_2272560;
extern char GameData_22725a0;
extern char GameData_22725e0;
extern char GameData_2272620;
extern char GameData_2272660;
extern char GameData_22726a0;
extern char GameData_22726e0;
extern char GameData_2272720;
extern int GameData_2272280;
extern int GameData_2272290;
extern int GameData_22722c0;
extern int GameData_22722d0;
extern int GameData_2272300;
extern int GameData_2272310;
extern int GameData_2272340;
extern int GameData_2272350;
extern int GameData_2272380;
extern int GameData_2272390;
extern int GameData_22723c0;
extern int GameData_22723d0;
extern int GameData_2272400;
extern int GameData_2272410;
extern int GameData_2272440;
extern int GameData_2272450;
extern int GameData_2272480;
extern int GameData_2272490;
extern int GameData_22724c0;
extern int GameData_22724d0;
extern int GameData_2272500;
extern int GameData_2272510;
extern int GameData_2272540;
extern int GameData_2272550;
extern int GameData_2272580;
extern int GameData_2272590;
extern int GameData_22725c0;
extern int GameData_22725d0;
extern int GameData_2272600;
extern int GameData_2272610;
extern int GameData_2272640;
extern int GameData_2272650;
extern int GameData_2272680;
extern int GameData_2272690;
extern int GameData_22726c0;
extern int GameData_22726d0;
extern int GameData_2272700;
extern int GameData_2272710;
extern int GameData_2272740;
extern int GameData_2272750;
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_1ed60();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6e5c60();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__attribute__((swiftcall)) void game_127cec0(PSEUDO_X8 x8_, __int64 result,
                                             int a2);
__int64 game_1365320(__int64 a1);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, unsigned int* a3);
void game_1489320();
char* game_1489520(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                   __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__attribute__((swiftcall)) void game_148a410(PSEUDO_X8 x8_, float* a1,
                                             float32x2_t* a2, float32x2_t* a3,
                                             float32x4_t* a4);
__int64 game_149f630(__int64 result, int a2);
__attribute__((swiftcall)) void game_14a0630(PSEUDO_X8 x8_, __int64 result,
                                             _DWORD* a2, char a3, _DWORD* a4,
                                             __int16* a5);
_QWORD* game_14a06a0(_QWORD* result, float a2);
_QWORD* game_14a0ec0(__int64 a1);
_DWORD* game_14a1460(_DWORD* result);
_DWORD* game_14a15e0(_DWORD* result);
__int64** game_14a19c0(__int64** result, int32x2_t a2);
__n128 game_14a1a60(__int64 a1);
__int64 game_14a1b00(__int64* a1, float a2);
__int64 game_14a1cc0(__int64* a1, float a2);
__int64* game_14a26e0(__int64* result, char a2);
__int64 game_14a2780(__int64 result);
__int64 game_14a3920(__int64 result);
__attribute__((swiftcall)) void game_156bc10(PSEUDO_X8 x8_, __int64 a1);
float game_156c160(__int64 a1, char a2);
bool game_159d390(__int64 a1, _DWORD* a2, char a3);
bool game_159e890(__int64 a1, char a2, __int64 a3);
bool game_159ea20(__int64 a1, __int64 a2, char a3);
char* game_1604250(int a1);
__attribute__((swiftcall)) void game_1604880(PSEUDO_X8 x8_, unsigned int a1,
                                             unsigned int a2);
__attribute__((swiftcall)) void game_1605270(PSEUDO_X8 x8_);
void game_167ab80(__int64 a1, long double a2);
const char* game_1694cf0();
__attribute__((swiftcall)) void game_185a130(PSEUDO_X8 x8_);
__int64 game_18dc580(float* a1, unsigned __int8* a2, __int64* a3, _DWORD* a4);
__attribute__((swiftcall)) void game_1905b70(PSEUDO_X8 x8_);
__int64 game_191ab90(__int64 a1, unsigned __int8* a2, _DWORD* a3);
__int64 game_191bd10(__int64 result, __int64 a2);
__int64 game_19b0cd0(__int64 a1);

__attribute__((swiftcall)) void game_127cec0(PSEUDO_X8 x8_, __int64 result,
                                             int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  bool v13;
  const char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  const char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v56;
  unsigned __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  int v67;
  unsigned int v68;
  __int64 v69;
  __int64 v70;
  const char* v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v75;
  unsigned __int64 v76;
  _QWORD* v77;
  _QWORD* v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD* v84;
  __int64 v85;
  int v86;
  unsigned int v87;
  __int64 v88;
  __int64 v89;
  const char* v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v94;
  unsigned __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  _QWORD* v103;
  __int64 v104;
  int v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  const char* v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v113;
  unsigned __int64 v114;
  _QWORD* v115;
  _QWORD* v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  char* v121;
  signed __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64* v126;
  struct {
    _QWORD v127[4];
    _QWORD* v128;
  } v127_;
  __int64 v129;
  __int64 v130;

  v3 = *(_QWORD*)result;
  v5 = (__int64*)result;
  v6 = v127_.v127;
  v127_.v127[0] = GameData_201fad8;
  v127_.v128 = v127_.v127;
  v126 = (__int64*)result;
  if (v3 == 0 || (v7 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 32LL)) == 0 ||
      ((unsigned int)a2 >= 0x50 ? (v8 = 80) : (v8 = a2),
       (v9 = v8 - 1, a2 <= 0) ? (v10 = 0) : (v10 = v9),
       (v10 & 0x80000000) != 0)) {
    v23 = 0;
    v25 = 32;
    goto LABEL_44;
  }
  v11 = v7 + 40;
  v12 = GameData_212c878[0];
  while (1) {
    v14 = *(const char**)(v11 + 8 * v10);
    if (v14 != nullptr) {
      if ((unsigned int)strcmp(*(_QWORD*)(v11 + 8 * v10), &GameData_1a94a43) ==
          0) {
        goto LABEL_38;
      }
      nn_util_SNPrintf(&v129, 80, "%s%s", "IID_", v14);
      v15 = game_HashString((__int64)&v129);
      if (v15 == 0) {
        goto LABEL_38;
      }
      v16 = *(_QWORD*)(*v12 + 96);
      if (v16 == 0 || *(_QWORD*)(*v12 + 112) == 0) {
        goto LABEL_38;
      }
      v18 = v16 - 1;
      if ((v16 & (v16 - 1)) != 0) {
        v19 = v15;
        if (v15 >= v16) {
          v19 = v15 % v16;
        }
      }
      else {
        v19 = v18 & v15;
      }
      v20 = *(_QWORD**)(*(_QWORD*)(*v12 + 88) + 8 * v19);
      if (v20 == nullptr || (v21 = (_QWORD*)*v20) == nullptr) {
      LABEL_38:
        v23 = 0;
        goto LABEL_39;
      }
      if ((v16 & v18) == 0) {
        while (1) {
          v24 = v21[1];
          if (v24 == v15) {
            if (v21[2] == v15) {
              goto LABEL_42;
            }
          }
          else if ((v24 & v18) != v19) {
            goto LABEL_38;
          }
          v21 = (_QWORD*)*v21;
          v23 = 0;
          if (v21 == nullptr) {
            goto LABEL_39;
          }
        }
      }
      while (1) {
        v22 = v21[1];
        if (v22 == v15) {
          break;
        }
        if (v22 >= v16) {
          v22 %= v16;
        }
        if (v22 != v19) {
          goto LABEL_38;
        }
      LABEL_28:
        v21 = (_QWORD*)*v21;
        if (v21 == nullptr) {
          goto LABEL_38;
        }
      }
      if (v21[2] != v15) {
        goto LABEL_28;
      }
    LABEL_42:
      v23 = v21[3];
    LABEL_39:
      v129 = v23;
      if (v127_.v128 == nullptr) {
      LABEL_312:
        GameRoutine_60a310();
      }
      result = (*(__int64 (**)(_QWORD*, __int64*))(*v127_.v128 + 48LL))(
          v127_.v128, &v129);
      if ((result & 1) != 0) {
        break;
      }
    }
    v13 = v10-- <= 0;
    if (v13) {
      v23 = 0;
      break;
    }
  }
  if (v127_.v128 == v127_.v127) {
    v5 = v126;
    v25 = 32;
    v6 = v127_.v128;
  LABEL_44:
    result = (*(__int64 (**)(_QWORD*))(*v6 + v25))(v6);
  }
  else {
    v5 = v126;
    if (v127_.v128 != nullptr) {
      v25 = 40;
      v6 = v127_.v128;
      goto LABEL_44;
    }
  }
  v26 = *v5;
  v27 = v127_.v127;
  v127_.v127[0] = GameData_201fb58;
  v127_.v128 = v127_.v127;
  if (v26 == 0 || (v28 = *(_QWORD*)(*(_QWORD*)(v26 + 24) + 40LL)) == 0 ||
      ((unsigned int)a2 >= 0x50 ? (v29 = 80) : (v29 = a2),
       (v30 = v29 - 1, a2 <= 0) ? (v31 = 0) : (v31 = v30),
       (v31 & 0x80000000) != 0)) {
    v42 = 0;
    v44 = 32;
    goto LABEL_88;
  }
  v32 = v28 + 40;
  while (2) {
    v33 = *(const char**)(v32 + 8 * v31);
    if (v33 != nullptr) {
      if ((unsigned int)strcmp(*(_QWORD*)(v32 + 8 * v31), &GameData_1a94a43) ==
          0) {
        goto LABEL_82;
      }
      nn_util_SNPrintf(&v129, 80, "%s%s", "IID_", v33);
      v34 = game_HashString((__int64)&v129);
      if (v34 == 0) {
        goto LABEL_82;
      }
      v35 = *(_QWORD*)(*GameData_212c878[0] + 96);
      if (v35 == 0 || *(_QWORD*)(*GameData_212c878[0] + 112) == 0) {
        goto LABEL_82;
      }
      v37 = v35 - 1;
      if ((v35 & (v35 - 1)) != 0) {
        v38 = v34;
        if (v34 >= v35) {
          v38 = v34 % v35;
        }
      }
      else {
        v38 = v37 & v34;
      }
      v39 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 88) + 8 * v38);
      if (v39 == nullptr || (v40 = (_QWORD*)*v39) == nullptr) {
      LABEL_82:
        v42 = 0;
        goto LABEL_83;
      }
      if ((v35 & v37) == 0) {
        while (1) {
          v43 = v40[1];
          if (v43 == v34) {
            if (v40[2] == v34) {
              goto LABEL_86;
            }
          }
          else if ((v43 & v37) != v38) {
            goto LABEL_82;
          }
          v40 = (_QWORD*)*v40;
          v42 = 0;
          if (v40 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      while (2) {
        v41 = v40[1];
        if (v41 != v34) {
          if (v41 >= v35) {
            v41 %= v35;
          }
          if (v41 != v38) {
            goto LABEL_82;
          }
        }
        else if (v40[2] == v34) {
          break;
        }
        v40 = (_QWORD*)*v40;
        if (v40 == nullptr) {
          goto LABEL_82;
        }
        continue;
      }
    LABEL_86:
      v42 = v40[3];
    LABEL_83:
      v129 = v42;
      if (v127_.v128 == nullptr) {
        goto LABEL_312;
      }
      result = (*(__int64 (**)(_QWORD*, __int64*))(*v127_.v128 + 48LL))(
          v127_.v128, &v129);
      if ((result & 1) != 0) {
      LABEL_286:
        if (v127_.v128 == v127_.v127) {
          v5 = v126;
          v44 = 32;
          v27 = v127_.v128;
        LABEL_88:
          result = (*(__int64 (**)(_QWORD*))(*v27 + v44))(v27);
        }
        else {
          v5 = v126;
          if (v127_.v128 != nullptr) {
            v44 = 40;
            v27 = v127_.v128;
            goto LABEL_88;
          }
        }
        v45 = *v5;
        v46 = v127_.v127;
        v127_.v127[0] = GameData_201fbd8;
        v127_.v128 = v127_.v127;
        if (v45 == 0 || (v47 = *(_QWORD*)(*(_QWORD*)(v45 + 24) + 48LL)) == 0 ||
            ((unsigned int)a2 >= 0x50 ? (v48 = 80) : (v48 = a2),
             (v49 = v48 - 1, a2 <= 0) ? (v50 = 0) : (v50 = v49),
             (v50 & 0x80000000) != 0)) {
          v61 = 0;
          v63 = 32;
          goto LABEL_132;
        }
        v51 = v47 + 40;
        while (2) {
          v52 = *(const char**)(v51 + 8 * v50);
          if (v52 != nullptr) {
            if ((unsigned int)strcmp(*(_QWORD*)(v51 + 8 * v50),
                                     &GameData_1a94a43) == 0) {
              goto LABEL_126;
            }
            nn_util_SNPrintf(&v129, 80, "%s%s", "IID_", v52);
            v53 = game_HashString((__int64)&v129);
            if (v53 == 0) {
              goto LABEL_126;
            }
            v54 = *(_QWORD*)(*GameData_212c878[0] + 96);
            if (v54 == 0 || *(_QWORD*)(*GameData_212c878[0] + 112) == 0) {
              goto LABEL_126;
            }
            v56 = v54 - 1;
            if ((v54 & (v54 - 1)) != 0) {
              v57 = v53;
              if (v53 >= v54) {
                v57 = v53 % v54;
              }
            }
            else {
              v57 = v56 & v53;
            }
            v58 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 88) + 8 * v57);
            if (v58 == nullptr || (v59 = (_QWORD*)*v58) == nullptr) {
            LABEL_126:
              v61 = 0;
              goto LABEL_127;
            }
            if ((v54 & v56) == 0) {
              while (1) {
                v62 = v59[1];
                if (v62 == v53) {
                  if (v59[2] == v53) {
                    goto LABEL_130;
                  }
                }
                else if ((v62 & v56) != v57) {
                  goto LABEL_126;
                }
                v59 = (_QWORD*)*v59;
                v61 = 0;
                if (v59 == nullptr) {
                  goto LABEL_127;
                }
              }
            }
            while (2) {
              v60 = v59[1];
              if (v60 != v53) {
                if (v60 >= v54) {
                  v60 %= v54;
                }
                if (v60 != v57) {
                  goto LABEL_126;
                }
              }
              else if (v59[2] == v53) {
                break;
              }
              v59 = (_QWORD*)*v59;
              if (v59 == nullptr) {
                goto LABEL_126;
              }
              continue;
            }
          LABEL_130:
            v61 = v59[3];
          LABEL_127:
            v129 = v61;
            if (v127_.v128 == nullptr) {
              goto LABEL_312;
            }
            result = (*(__int64 (**)(_QWORD*, __int64*))(*v127_.v128 + 48LL))(
                v127_.v128, &v129);
            if ((result & 1) != 0) {
            LABEL_290:
              if (v127_.v128 == v127_.v127) {
                v5 = v126;
                v63 = 32;
                v46 = v127_.v128;
              LABEL_132:
                result = (*(__int64 (**)(_QWORD*))(*v46 + v63))(v46);
              }
              else {
                v5 = v126;
                if (v127_.v128 != nullptr) {
                  v63 = 40;
                  v46 = v127_.v128;
                  goto LABEL_132;
                }
              }
              v64 = *v5;
              v65 = v127_.v127;
              v127_.v127[0] = GameData_201fc58;
              v127_.v128 = v127_.v127;
              if (v64 == 0 ||
                  (v66 = *(_QWORD*)(*(_QWORD*)(v64 + 24) + 56LL)) == 0 ||
                  ((unsigned int)a2 >= 0x50 ? (v67 = 80) : (v67 = a2),
                   (v68 = v67 - 1, a2 <= 0) ? (v69 = 0) : (v69 = v68),
                   (v69 & 0x80000000) != 0)) {
                v80 = 0;
                v82 = 32;
                goto LABEL_176;
              }
              v70 = v66 + 40;
              while (2) {
                v71 = *(const char**)(v70 + 8 * v69);
                if (v71 != nullptr) {
                  if ((unsigned int)strcmp(*(_QWORD*)(v70 + 8 * v69),
                                           &GameData_1a94a43) == 0) {
                    goto LABEL_170;
                  }
                  nn_util_SNPrintf(&v129, 80, "%s%s", "IID_", v71);
                  v72 = game_HashString((__int64)&v129);
                  if (v72 == 0) {
                    goto LABEL_170;
                  }
                  v73 = *(_QWORD*)(*GameData_212c878[0] + 96);
                  if (v73 == 0 || *(_QWORD*)(*GameData_212c878[0] + 112) == 0) {
                    goto LABEL_170;
                  }
                  v75 = v73 - 1;
                  if ((v73 & (v73 - 1)) != 0) {
                    v76 = v72;
                    if (v72 >= v73) {
                      v76 = v72 % v73;
                    }
                  }
                  else {
                    v76 = v75 & v72;
                  }
                  v77 = *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 88) +
                                    8 * v76);
                  if (v77 == nullptr || (v78 = (_QWORD*)*v77) == nullptr) {
                  LABEL_170:
                    v80 = 0;
                    goto LABEL_171;
                  }
                  if ((v73 & v75) == 0) {
                    while (1) {
                      v81 = v78[1];
                      if (v81 == v72) {
                        if (v78[2] == v72) {
                          goto LABEL_174;
                        }
                      }
                      else if ((v81 & v75) != v76) {
                        goto LABEL_170;
                      }
                      v78 = (_QWORD*)*v78;
                      v80 = 0;
                      if (v78 == nullptr) {
                        goto LABEL_171;
                      }
                    }
                  }
                  while (2) {
                    v79 = v78[1];
                    if (v79 != v72) {
                      if (v79 >= v73) {
                        v79 %= v73;
                      }
                      if (v79 != v76) {
                        goto LABEL_170;
                      }
                    }
                    else if (v78[2] == v72) {
                      break;
                    }
                    v78 = (_QWORD*)*v78;
                    if (v78 == nullptr) {
                      goto LABEL_170;
                    }
                    continue;
                  }
                LABEL_174:
                  v80 = v78[3];
                LABEL_171:
                  v129 = v80;
                  if (v127_.v128 == nullptr) {
                    goto LABEL_312;
                  }
                  result = (*(__int64 (**)(_QWORD*, __int64*))(
                      *v127_.v128 + 48LL))(v127_.v128, &v129);
                  if ((result & 1) != 0) {
                  LABEL_294:
                    if (v127_.v128 == v127_.v127) {
                      v5 = v126;
                      v82 = 32;
                      v65 = v127_.v128;
                    LABEL_176:
                      result = (*(__int64 (**)(_QWORD*))(*v65 + v82))(v65);
                    }
                    else {
                      v5 = v126;
                      if (v127_.v128 != nullptr) {
                        v82 = 40;
                        v65 = v127_.v128;
                        goto LABEL_176;
                      }
                    }
                    v83 = *v5;
                    v84 = v127_.v127;
                    v127_.v127[0] = GameData_201fcd8;
                    v127_.v128 = v127_.v127;
                    if (v83 == 0 ||
                        (v85 = *(_QWORD*)(*(_QWORD*)(v83 + 24) + 64LL)) == 0 ||
                        ((unsigned int)a2 >= 0x50 ? (v86 = 80) : (v86 = a2),
                         (v87 = v86 - 1, a2 <= 0) ? (v88 = 0) : (v88 = v87),
                         (v88 & 0x80000000) != 0)) {
                      v99 = 0;
                      v101 = 32;
                      goto LABEL_220;
                    }
                    v89 = v85 + 40;
                    while (2) {
                      v90 = *(const char**)(v89 + 8 * v88);
                      if (v90 != nullptr) {
                        if ((unsigned int)strcmp(*(_QWORD*)(v89 + 8 * v88),
                                                 &GameData_1a94a43) == 0) {
                          goto LABEL_214;
                        }
                        nn_util_SNPrintf(&v129, 80, "%s%s", "IID_", v90);
                        v91 = game_HashString((__int64)&v129);
                        if (v91 == 0) {
                          goto LABEL_214;
                        }
                        v92 = *(_QWORD*)(*GameData_212c878[0] + 96);
                        if (v92 == 0 ||
                            *(_QWORD*)(*GameData_212c878[0] + 112) == 0) {
                          goto LABEL_214;
                        }
                        v94 = v92 - 1;
                        if ((v92 & (v92 - 1)) != 0) {
                          v95 = v91;
                          if (v91 >= v92) {
                            v95 = v91 % v92;
                          }
                        }
                        else {
                          v95 = v94 & v91;
                        }
                        v96 =
                            *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] + 88) +
                                        8 * v95);
                        if (v96 == nullptr ||
                            (v97 = (_QWORD*)*v96) == nullptr) {
                        LABEL_214:
                          v99 = 0;
                          goto LABEL_215;
                        }
                        if ((v92 & v94) == 0) {
                          while (1) {
                            v100 = v97[1];
                            if (v100 == v91) {
                              if (v97[2] == v91) {
                                goto LABEL_218;
                              }
                            }
                            else if ((v100 & v94) != v95) {
                              goto LABEL_214;
                            }
                            v97 = (_QWORD*)*v97;
                            v99 = 0;
                            if (v97 == nullptr) {
                              goto LABEL_215;
                            }
                          }
                        }
                        while (2) {
                          v98 = v97[1];
                          if (v98 != v91) {
                            if (v98 >= v92) {
                              v98 %= v92;
                            }
                            if (v98 != v95) {
                              goto LABEL_214;
                            }
                          }
                          else if (v97[2] == v91) {
                            break;
                          }
                          v97 = (_QWORD*)*v97;
                          if (v97 == nullptr) {
                            goto LABEL_214;
                          }
                          continue;
                        }
                      LABEL_218:
                        v99 = v97[3];
                      LABEL_215:
                        v129 = v99;
                        if (v127_.v128 == nullptr) {
                          goto LABEL_312;
                        }
                        result = (*(__int64 (**)(_QWORD*, __int64*))(
                            *v127_.v128 + 48LL))(v127_.v128, &v129);
                        if ((result & 1) != 0) {
                        LABEL_298:
                          if (v127_.v128 == v127_.v127) {
                            v5 = v126;
                            v101 = 32;
                            v84 = v127_.v128;
                          LABEL_220:
                            result =
                                (*(__int64 (**)(_QWORD*))(*v84 + v101))(v84);
                          }
                          else {
                            v5 = v126;
                            if (v127_.v128 != nullptr) {
                              v101 = 40;
                              v84 = v127_.v128;
                              goto LABEL_220;
                            }
                          }
                          v102 = *v5;
                          v103 = v127_.v127;
                          v127_.v127[0] = GameData_201fd58;
                          v127_.v128 = v127_.v127;
                          if (v102 == 0 ||
                              (v104 = *(_QWORD*)(*(_QWORD*)(v102 + 24) +
                                                 72LL)) == 0 ||
                              ((unsigned int)a2 >= 0x50 ? (v105 = 80)
                                                        : (v105 = a2),
                               (v106 = v105 - 1, a2 <= 0) ? (v107 = 0)
                                                          : (v107 = v106),
                               (v107 & 0x80000000) != 0)) {
                            v118 = 0;
                            v120 = 32;
                          LABEL_264:
                            result =
                                (*(__int64 (**)(_QWORD*))(*v103 + v120))(v103);
                            goto LABEL_265;
                          }
                          v108 = v104 + 40;
                          while (1) {
                            v109 = *(const char**)(v108 + 8 * v107);
                            if (v109 != nullptr) {
                              if ((unsigned int)strcmp(
                                      *(_QWORD*)(v108 + 8 * v107),
                                      &GameData_1a94a43) == 0) {
                                goto LABEL_258;
                              }
                              nn_util_SNPrintf(&v129, 80, "%s%s", "IID_", v109);
                              v110 = game_HashString((__int64)&v129);
                              if (v110 == 0) {
                                goto LABEL_258;
                              }
                              v111 = *(_QWORD*)(*GameData_212c878[0] + 96);
                              if (v111 == 0 ||
                                  *(_QWORD*)(*GameData_212c878[0] + 112) == 0) {
                                goto LABEL_258;
                              }
                              v113 = v111 - 1;
                              if ((v111 & (v111 - 1)) != 0) {
                                v114 = v110;
                                if (v110 >= v111) {
                                  v114 = v110 % v111;
                                }
                              }
                              else {
                                v114 = v113 & v110;
                              }
                              v115 =
                                  *(_QWORD**)(*(_QWORD*)(*GameData_212c878[0] +
                                                         88) +
                                              8 * v114);
                              if (v115 == nullptr ||
                                  (v116 = (_QWORD*)*v115) == nullptr) {
                              LABEL_258:
                                v118 = 0;
                                goto LABEL_259;
                              }
                              if ((v111 & v113) == 0) {
                                while (1) {
                                  v119 = v116[1];
                                  if (v119 == v110) {
                                    if (v116[2] == v110) {
                                      goto LABEL_262;
                                    }
                                  }
                                  else if ((v119 & v113) != v114) {
                                    goto LABEL_258;
                                  }
                                  v116 = (_QWORD*)*v116;
                                  v118 = 0;
                                  if (v116 == nullptr) {
                                    goto LABEL_259;
                                  }
                                }
                              }
                              while (1) {
                                v117 = v116[1];
                                if (v117 == v110) {
                                  break;
                                }
                                if (v117 >= v111) {
                                  v117 %= v111;
                                }
                                if (v117 != v114) {
                                  goto LABEL_258;
                                }
                              LABEL_248:
                                v116 = (_QWORD*)*v116;
                                if (v116 == nullptr) {
                                  goto LABEL_258;
                                }
                              }
                              if (v116[2] != v110) {
                                goto LABEL_248;
                              }
                            LABEL_262:
                              v118 = v116[3];
                            LABEL_259:
                              v129 = v118;
                              if (v127_.v128 == nullptr) {
                                goto LABEL_312;
                              }
                              result = (*(__int64 (**)(_QWORD*, __int64*))(
                                  *v127_.v128 + 48LL))(v127_.v128, &v129);
                              if ((result & 1) != 0) {
                                break;
                              }
                            }
                            v13 = v107-- <= 0;
                            if (v13) {
                              v118 = 0;
                              break;
                            }
                          }
                          if (v127_.v128 == v127_.v127) {
                            v120 = 32;
                          LABEL_311:
                            v103 = v127_.v128;
                            goto LABEL_264;
                          }
                          if (v127_.v128 != nullptr) {
                            v120 = 40;
                            goto LABEL_311;
                          }
                        LABEL_265:
                          v121 = (char*)&v129;
                          if (v23 != 0) {
                            v121 = (char*)&v130;
                            v129 = v23;
                          }
                          if (v42 != 0) {
                            *(_QWORD*)v121 = v42;
                            v121 += 8;
                          }
                          if (v61 != 0) {
                            *(_QWORD*)v121 = v61;
                            v121 += 8;
                          }
                          if (v80 != 0) {
                            *(_QWORD*)v121 = v80;
                            v121 += 8;
                          }
                          if (v99 != 0) {
                            *(_QWORD*)v121 = v99;
                            v121 += 8;
                          }
                          if (v118 != 0) {
                            *(_QWORD*)v121 = v118;
                            v121 += 8;
                          }
                          a3[1] = 0;
                          a3[2] = 0;
                          *a3 = 0;
                          v122 = v121 - (char*)&v129;
                          if (v121 != (char*)&v129) {
                            if (v122 < 0) {
                              GameRoutine_6e5c60();
                            }
                            v123 = fw_memory_HeapManager_Allocate(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                v121 - (char*)&v129, 16, 0);
                            v124 = v123 + v122;
                            *a3 = v123;
                            a3[2] = v123 + v122;
                            result = memcpy(v123, &v129, v122);
                            a3[1] = v124;
                          }
                          {
                            result;
                            return;
                          }
                        }
                      }
                      v13 = v88-- <= 0;
                      if (v13) {
                        v99 = 0;
                        goto LABEL_298;
                      }
                      continue;
                    }
                  }
                }
                v13 = v69-- <= 0;
                if (v13) {
                  v80 = 0;
                  goto LABEL_294;
                }
                continue;
              }
            }
          }
          v13 = v50-- <= 0;
          if (v13) {
            v61 = 0;
            goto LABEL_290;
          }
          continue;
        }
      }
    }
    v13 = v31-- <= 0;
    if (v13) {
      v42 = 0;
      goto LABEL_286;
    }
    continue;
  }
}

__int64 game_1365320(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
  __int64 v22;
  bool v23;
  bool v29;
  float v30;
  _QWORD v31[4];
  _QWORD* v32;
  _QWORD v33[4];
  _QWORD* v34;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v3 = *(_QWORD*)(a1 + 1080);
  v2[1] = 0;
  v2[2] = 0;
  v2[4] = a1;
  *(_QWORD*)(a1 + 1080) = v2;
  *v2 = GameData_202f2d8;
  v2[3] = ui_anonymous_RenderTask_vtable;
  *(_QWORD*)(a1 + 1072) = v2 + 3;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = game_g_frame_clock_ptr[0];
  v5 = *(_QWORD*)(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 496) - 8LL);
  v6 = *(unsigned __int8*)(v5 + 8);
  v7 = v5 + 9;
  v23 = (v6 & 1) == 0;
  v10 = v5 + 16;
  v8 = *(_QWORD*)(v5 + 16);
  v9 = *(_QWORD*)(v10 + 8);
  v11 = v6 >> 1;
  if (v23) {
    v8 = v11;
  }
  else {
    v7 = v9;
  }
  v33[0] = v7;
  v33[1] = v8;
  Registration_6492e0();
  v12 = *v4;
  v13 = *(_QWORD*)(a1 + 1072);
  v14 = *(_QWORD*)(a1 + 1080);
  v15 = *(_QWORD*)(*v4 + 13176);
  v16 = *(_QWORD*)(*v4 + 13184);
  if (v14 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v15 != v16) {
    while (*(_QWORD*)(v15 + 8) != v13) {
      v15 += 72;
      if (v15 == v16) {
        v15 = v16;
        break;
      }
    }
  }
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  if (v15 != *(_QWORD*)(v12 + 13184)) {
    if ((*(_BYTE*)(v15 + 48) & 1) != 0) {
      *(_QWORD*)(v15 + 56) = 14;
      v17 = *(char**)(v15 + 64);
    }
    else {
      *(_BYTE*)(v15 + 48) = 28;
      v17 = (char*)(v15 + 49);
    }
    strcpy(v17, "ui::RenderTask");
  }
  nn_ui2d_579080(GameData_2130ed0[0], GameData_2130ed8[0], 0);
  Material_576fc0(a1, *v4 + 568, 2048, 0, 0, 0, 0, 0.0f);
  GameRoutine_5784d0(a1, GameRoutine_13656f0, 0);
  v18 = GameData_2130ef8;
  *GameData_2130ef0[0] = GameRoutine_1365740;
  *v18 = GameRoutine_1365c00;
  *GameData_2130f00[0] = a1 + 1136;
  v33[0] = "TextBoxEx";
  v33[1] = 9;
  GameRoutine_1366fa0(a1, v33, TextBoxEx_188a640_ptr[0]);
  v33[0] = "EmbeddedImage";
  v33[1] = 13;
  GameRoutine_1366fa0(a1, v33, EmbeddedImage_18895c0_ptr);
  ui_text_190a640(a1 + 6528);
  v32 = v31;
  v34 = v33;
  v19 = *GameData_212eb78[0];
  v31[0] = GameData_212e2f8 + 2;
  v31[1] = GameRoutine_1366120;
  v33[0] = GameData_212e2f8 + 2;
  v33[1] = GameRoutine_1366120;
  *(_QWORD*)(v19 + 328) = 0;
  GameRoutine_a49f70(v33, v19 + 336);
  if (v34 == v33) {
    v20 = 32;
  }
  else {
    if (v34 == nullptr) {
      goto LABEL_26;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v34 + v20))((__int64)v34);
LABEL_26:
  result = (__int64)v32;
  if (v32 == v31) {
    v22 = 32;
  }
  else {
    if (v32 == nullptr) {
      goto LABEL_31;
    }
    v22 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v32 + v22))((__int64)v32);
LABEL_31:
  v23 = HIBYTE(GameData_21759e0) == 0 && BYTE6(GameData_21759e0) == 116;
  v29 = v23 && BYTE5(GameData_21759e0) == 110 &&
        BYTE4(GameData_21759e0) == 97 && BYTE3(GameData_21759e0) == 72 &&
        BYTE2(GameData_21759e0) == 45 && BYTE1(GameData_21759e0) == 104 &&
        (unsigned __int8)GameData_21759e0 == 122;
  v30 = 0x1.3333340000000p-1f;
  if (!v29) {
    v30 = 0.5f;
  }
  *(float*)(a1 + 6912) = v30;
  return result;
}

__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8 x8_, __int64 a1,
                                             __int64 a2, unsigned int* a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  atomic_ullong* v11;
  __int64 v12;

  v8 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 2464, 16, 0);
  v9 = v8 + 4;
  v10 = v8;
  v8[1] = 0;
  v11 = (atomic_ullong*)(v8 + 1);
  v8[2] = 0;
  *v8 = GameData_202f370;
  GameRoutine_1361760(v8 + 4);
  v12 = v10[6];
  *a4 = (__int64)v9;
  a4[1] = (__int64)v10;
  if (v12 != 0) {
    if (*(_QWORD*)(v12 + 8) != -1) {
      goto LABEL_7;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 1), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 2), 1u,
                              memory_order_relaxed);
    v10[5] = v9;
    v10[6] = v10;
    std___1___shared_weak_count___release_weak(v12);
  }
  else {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 1), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 2), 1u,
                              memory_order_relaxed);
    v10[5] = v9;
    v10[6] = v10;
  }
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
LABEL_7:
  GameRoutine_1366d00(ui_Manager_instance_ + 1112, a4);
  {
    GameRoutine_1361b40(*a4, a1, a2, a3);
    return;
  }
}

void game_1489320()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  int v3;
  unsigned __int64 v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  const char** v8;
  __int64 v9;
  __int64 v10;
  _BYTE v11[200];
  __int64 v12;
  __int64 v13;

  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 56) == 4) {
    v12 = v0;
    v13 = v1;
    v2 = game_HashString32();
    nn_os_LockMutex(&game_g_random_mutex);
    nn_os_UnlockMutex(&game_g_random_mutex);
    if (GameData_224ae38 == GameData_224ae30) {
      v8 = (const char**)&GameData_1bd2570;
    }
    else {
      v3 = v2 ^ (v2 >> 30);
      v4 = (unsigned __int64)(GameData_224ae38 - GameData_224ae30) >> 3;
      v5 = 1812433253 * v3;
      v6 = 1812433253 * ((1812433253 * (v5 ^ (v5 >> 30)) + 1) ^
                         ((1812433253 * (v5 ^ (v5 >> 30)) + 1) >> 30)) +
           2;
      v7 = 1812433253 * (v6 ^ (v6 >> 30)) + 3;
      nn_os_LockMutex(&game_g_random_mutex);
      nn_os_UnlockMutex(&game_g_random_mutex);
      v8 = (const char**)(GameData_224ae30 +
                          8LL *
                              (unsigned int)((int)(((((1011558400 * v3) ^ v5) >>
                                                     8) ^
                                                    (v7 >> 19) ^
                                                    (1011558400 * v3) ^ v5 ^
                                                    v7) &
                                                   0x7FFFFFFF) %
                                             (int)v4));
    }
    v9 = game_util_Format("V_SV_%s_Shop_%s", *v8, "Common");
    if (*game_sound_g_game_sound_ptr[0] != 0 &&
        (GameManager_a35ca0(*game_sound_g_game_sound_ptr[0], v9) & 1) != 0) {
      snd_Fade_Fade_10c830(v11, 0.0f);
      *(struct PseudoSret*)(&v10) =
          snd_play_ff2d0(v9, v9, v11, 0, 65537, 0, 0.0f, 1.0f);
      snd_Fade_Destroy_Fade(v11);
    }
  }
}

char* game_1489520(__int64 a1, unsigned int a2, __int64 a3, __int64 a4,
                   __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v11;
  __int64* v12;
  int v13;
  const char* v14;
  bool v15;
  const char* v16;
  const char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int8 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  bool v42;
  char* v43;
  bool v44;
  __int64 v46;
  int v47;

  v11 = a2;
  v12 = game_sound_g_game_sound_ptr[0];
  do {
    while (1) {
      v13 = a4;
      if (a2 > 0x1E) {
      LABEL_71:
        v15 = (v13 & 1) == 0;
        v16 = "Common02";
        v17 = "Common03";
      LABEL_72:
        v14 = v15 ? v16 : v17;
      }
      else {
        v14 = "Bandar";
        switch (v11) {
        case 0LL:
          v18 = game_HashString(a3);
          if (v18 == 0) {
            goto LABEL_71;
          }
          v19 = *(_QWORD*)(*GameData_212c970[0] + 96);
          if (v19 == 0 || *(_QWORD*)(*GameData_212c970[0] + 112) == 0) {
            goto LABEL_71;
          }
          v21 = v19 - 1;
          if ((v19 & (v19 - 1)) != 0) {
            v22 = v18;
            if (v18 >= v19) {
              v22 = v18 % v19;
            }
          }
          else {
            v22 = v21 & v18;
          }
          v28 = *(_QWORD**)(*(_QWORD*)(*GameData_212c970[0] + 88) + 8 * v22);
          if (v28 == nullptr) {
            goto LABEL_71;
          }
          v29 = (_QWORD*)*v28;
          if (v29 == nullptr) {
            goto LABEL_71;
          }
          if ((v19 & v21) != 0) {
            while (1) {
              v30 = v29[1];
              if (v30 == v18) {
                if (v29[2] == v18) {
                  goto LABEL_68;
                }
              }
              else {
                if (v30 >= v19) {
                  v30 %= v19;
                }
                if (v30 != v22) {
                  goto LABEL_71;
                }
              }
              v29 = (_QWORD*)*v29;
              if (v29 == nullptr) {
                goto LABEL_71;
              }
            }
          }
          while (2) {
            v31 = v29[1];
            if (v31 != v18) {
              if ((v31 & v21) != v22) {
                goto LABEL_71;
              }
            LABEL_47:
              v29 = (_QWORD*)*v29;
              if (v29 == nullptr) {
                goto LABEL_71;
              }
              continue;
            }
            break;
          }
          if (v29[2] != v18) {
            goto LABEL_47;
          }
        LABEL_68:
          v36 = v29[3];
          if (v36 == 0) {
            goto LABEL_71;
          }
          v14 = "Common";
          v37 = *(_BYTE*)(*(_QWORD*)(v36 + 24) + 64LL) - 1;
          if (v37 < 8u) {
            v14 = GameData_2043200[v37];
          }
          break;
        case 1LL:
          v15 = (a4 & 1) == 0;
          v16 = "TrainingSite";
          v17 = "TrainingSite02";
          goto LABEL_72;
        case 2LL:
        case 11LL:
        case 13LL:
        case 14LL:
        case 15LL:
        case 16LL:
        case 18LL:
        case 19LL:
        case 20LL:
        case 21LL:
        case 23LL:
        case 24LL:
        case 25LL:
        case 26LL:
        case 27LL:
          goto LABEL_71;
        case 3LL:
          v14 = "Guild02";
          break;
        case 4LL:
          v14 = "Blacksmith";
          break;
        case 5LL:
          v14 = "Stage";
          break;
        case 6LL:
          v23 = game_HashString(a3);
          if (v23 == 0) {
            goto LABEL_87;
          }
          v24 = *(_QWORD*)(*GameData_212ccd8[0] + 96);
          if (v24 == 0 || *(_QWORD*)(*GameData_212ccd8[0] + 112) == 0) {
            goto LABEL_87;
          }
          v26 = v24 - 1;
          if ((v24 & (v24 - 1)) != 0) {
            v27 = v23;
            if (v23 >= v24) {
              v27 = v23 % v24;
            }
          }
          else {
            v27 = v26 & v23;
          }
          v32 = *(_QWORD**)(*(_QWORD*)(*GameData_212ccd8[0] + 88) + 8 * v27);
          if (v32 == nullptr) {
            goto LABEL_87;
          }
          v33 = (_QWORD*)*v32;
          if (v33 == nullptr) {
            goto LABEL_87;
          }
          if ((v24 & v26) == 0) {
            while (1) {
              v35 = v33[1];
              if (v35 == v23) {
                if (v33[2] == v23) {
                  goto LABEL_75;
                }
              }
              else if ((v35 & v26) != v27) {
                goto LABEL_87;
              }
              v33 = (_QWORD*)*v33;
              v14 = (const char*)&GameData_1a9a4d6;
              if (v33 == nullptr) {
                goto LABEL_88;
              }
            }
          }
        LABEL_58:
          v34 = v33[1];
          if (v34 != v23) {
            if (v34 >= v24) {
              v34 %= v24;
            }
            if (v34 == v27) {
            LABEL_57:
              v33 = (_QWORD*)*v33;
              v14 = (const char*)&GameData_1a9a4d6;
              if (v33 == nullptr) {
                break;
              }
              goto LABEL_58;
            }
          LABEL_87:
            v14 = (const char*)&GameData_1a9a4d6;
            break;
          }
          if (v33[2] != v23) {
            goto LABEL_57;
          }
        LABEL_75:
          v38 = v33[3];
          if (v38 == 0 || (*(_BYTE*)(v38 + 32) & 2) != 0) {
            goto LABEL_87;
          }
          if (game_gmap_GmapClock_instance_ != 0) {
            v39 = game_gmap_GmapClock_instance_ + 8;
          }
          else {
            v39 = game_gmap_GmapClock_kDefaultTime_ptr;
          }
          v47 = *(__int16*)(v39 + 6);
          v40 = snd_getDefineInt("SetTime_BGM_Night");
          v46 = v39;
          v41 = *(__int16*)(v39 + 6);
          v42 = v40 <= v47 && v41 < 24;
          if (!v42 && ((int)snd_getDefineInt("SetTime_BGM_Day") <= v41 ||
                       *(__int16*)(v46 + 6) < 0)) {
            v14 = "Inn2";
          }
          else {
            v14 = "Inn3";
          }
          break;
        case 7LL:
          v14 = "Thermae";
          break;
        case 8LL:
          v14 = "Temple";
          break;
        case 9LL:
          v14 = "Examiner";
          break;
        case 10LL:
          v14 = "Stable";
          break;
        case 12LL:
          break;
        case 17LL:
          v14 = "Arena";
          break;
        case 22LL:
        case 28LL:
          v14 = "Showman";
          break;
        case 29LL:
          v14 = "DrinkSeller";
          break;
        case 30LL:
          v14 = "Common03";
          break;
        default:
          abort();
        }
      }
    LABEL_88:
      v43 = game_util_Format_alt1((__int64)"V_SV_%s_Shop_%s", a1, (__int64)v14,
                                  a4, a5, a6, a7, a8, v46);
      if (*v12 != 0) {
        break;
      }
      a4 = 0;
      if ((v13 & 1) == 0) {
        return nullptr;
      }
    }
    v44 = GameManager_a35ca0_alt1(*v12, (__int64)v43);
    if (v44) {
      break;
    }
    a4 = 0;
  } while (((v13 ^ 1) & 1) == 0);
  if (v44) {
    return v43;
  }
  else {
    return nullptr;
  }
}

__attribute__((swiftcall)) void game_148a410(PSEUDO_X8 x8_, float* a1,
                                             float32x2_t* a2, float32x2_t* a3,
                                             float32x4_t* a4)
{
  int8x16_t* a5 = (int8x16_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v6;
  int32x4_t v7;
  int8x16_t v8;
  int32x4_t v9;
  int32x4_t v10;
  unsigned __int64 v11;
  int32x4_t v12;
  int32x4_t v13;
  __int64 v14;
  int32x4_t v15;
  float32x4_t v16;
  int32x4_t v17;
  int8x16_t v18;
  int8x16_t v19;
  float32x4_t v20;
  int8x16_t v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  unsigned __int64 v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  int8x16_t v52;
  double result;

  v5 = a4[1];
  v6 = a4[2];
  v7 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(*a4, COERCE_FLOAT(*(_OWORD*)LANES64(*(a3)).n64_u64)), v5,
          COERCE_AS(float32x2_t, LANES64(*(a3)).n64_u64[0]), 1),
      v6, *(float32x4_t*)LANES64(*(a3)).n64_u64, 2);
  v8 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(*a4, COERCE_FLOAT(*(_OWORD*)LANES64(a3[2]).n64_u64)), v5,
          a3[2], 1),
      v6, *(float32x4_t*)LANES64(a3[2]).n64_u64, 2);
  v9 = vmlaq_laneq_f32(
      vmlaq_lane_f32(
          vmulq_n_f32(*a4, COERCE_FLOAT(*(_OWORD*)LANES64(a3[4]).n64_u64)), v5,
          a3[4], 1),
      v6, *(float32x4_t*)LANES64(a3[4]).n64_u64, 2);
  v10 = vzip2q_s32(v7, v9);
  v11 = LANES64_OF(vdup_laneq_s32(v8, 2)).n64_u64[0];
  v12 = vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(*a4, COERCE_FLOAT(*(_OWORD*)LANES64(a3[6]).n64_u64)),
              v5, a3[6], 1),
          v6, *(float32x4_t*)LANES64(a3[6]).n64_u64, 2),
      a4[3]);
  v13 = vzip1q_s32(v7, v9);
  v14 = LANES64(a2[1]).n64_u32[0] | 0x3F80000000000000LL;
  v15 = vzip2q_s32(v8, v12);
  v16 = vmlaq_n_f32(
      vmlaq_lane_f32(vmulq_n_f32(v7, COERCE_FLOAT(LANES64(*(a2)).n64_u64[0])),
                     v8, COERCE_AS(float32x2_t, LANES64(*(a2)).n64_u64[0]), 1),
      v9, LANES64(a2[1]).n64_f32[0]);
  v17 = vzip1q_s32(v8, v12);
  LANES128(a5[1]).n128_u8[0] = 1;
  v18 = vzip1q_s32(v10, v15);
  v19 = vzip2q_s32(v10, v15);
  v20 = vmlaq_lane_f32(v16, v12, COERCE_AS(float32x2_t, v14), 1);
  v21 = vzip1q_s32(v13, v17);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v22 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v7).n128_u64[0]), 0);
  LANES128(v22).n128_u32[0] = LANES128(v8).n128_u32[0];
  *(int32x2_t*)&LANES128(v5).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 0);
  LANES128(v6).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v6).n128_i8[8] =
      vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v23 = vzip2q_s32(v13, v17);
  v24 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v7).n128_u64[0]), 1);
  LANES128(v24).n128_u32[0] = LANES128(v8).n128_u32[1];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v17).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v8).n128_u64[0]), 1);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v27 = vdupq_laneq_s32(v7, 2);
  v28 = LANES64_OF(vdup_laneq_s32(v8, 3)).n64_u64[0];
  LANES128(v27).n128_u32[0] = LANES128(v8).n128_u32[2];
  v29 = vextq_s8(v8, vdupq_laneq_s32(v7, 3), 0xCu);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = v28;
  LANES128(v26).n128_u64[1] = v11;
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v18).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v18).n128_u64[1] = 0x3F8000003F800000LL;
  v31 = vnegq_f64(v18);
  v32 = vsubq_f32(vmulq_f32(v26, v8), vmulq_f32(v15, v30));
  v33 = vsubq_f32(vmulq_f32(v27, v8), vmulq_f32(v29, v30));
  v34 = vsubq_f32(vmulq_f32(v27, v15), vmulq_f32(v29, v26));
  v35 = vmlsq_f32(vmulq_f32(v24, v32), v33, v17);
  v36 = vmlsq_f32(vmulq_f32(v22, v32), v33, v5);
  LANES128(v33).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v33).n128_u64[1] = 0xBF800000BF800000LL;
  v37 = vmlaq_f32(v35, v34, v25);
  v38 = vmlaq_f32(v36, v34, v6);
  v39 = vnegq_f64(v33);
  v40 = vsubq_f32(vmulq_f32(v5, v25), vmulq_f32(v17, v6));
  v41 = vsubq_f32(vmulq_f32(v22, v25), vmulq_f32(v24, v6));
  v42 = vsubq_f32(vmulq_f32(v22, v17), vmulq_f32(v24, v5));
  v43 = vmulq_f32(v37, v31);
  v44 = vmulq_f32(v21, v43);
  v45 = vmlaq_f32(vmlsq_f32(vmulq_f32(v29, v40), v41, v15), v42, v8);
  LANES128(v44).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
          .n64_u64[0];
  v46 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v27, v40), v41, v26), v42, v30),
                  v39);
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
          .n64_u64[0];
  LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
  v47 = vrecpeq_f32(v44);
  v48 = vmulq_f32(v47, vrecpsq_f32(v47, v44));
  v49 = vrecpsq_f32(v48, v44);
  v50 = vceqzq_f32(v44);
  v51 = vmulq_f32(v48, v49);
  v52 = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_n_f32(vmulq_n_f32(vbicq_s8(vmulq_f32(v51, v43), v50),
                                  vmuls_lane_f32(*a1, v20, 3)),
                      vbicq_s8(vmulq_f32(v51, vmulq_f32(v38, v39)), v50),
                      vmuls_lane_f32(a1[1], v20, 3)),
          vbicq_s8(vmulq_f32(vmulq_f32(v45, v31), v51), v50), v20, 2),
      vbicq_s8(vmulq_f32(v46, v51), v50), v20, 3);
  *(_QWORD*)&result = LANES128_OF(vextq_s8(v52, v52, 8u)).n128_u32[0];
  LANES128(v52).n128_u64[1] = LODWORD(result);
  *a5 = v52;
  {
    result;
    return;
  }
}

__int64 game_149f630(__int64 result, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;

  v2 = *(_QWORD*)(result + 8LL * a2 + 160);
  if (v2 != 0 && GameData_21ec7b8 == 0) {
    v4 = result;
    v5 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    GameRoutine_1130770(v5, v2, 0);
    v6 = *(_QWORD*)(v4 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(v4 + 40);
    }
    *(_QWORD*)(v4 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = v4;
    *(_DWORD*)(v5 + 140) = game_HashString32();
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
    if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
  }
  return result;
}

__attribute__((swiftcall)) void game_14a0630(PSEUDO_X8 x8_, __int64 result,
                                             _DWORD* a2, char a3, _DWORD* a4,
                                             __int16* a5)
{
  _WORD* a6 = (_WORD*)PSEUDO_X8_VALUE(x8_);
  __int16 v7;

  if ((*a4 & *a2) != 0 || (a4[1] & a2[1]) != 0) {
    *a6 = 0;
    if ((a3 & 0xF) == 1 && (result & 0xF) == 1) {
      v7 = 3585;
    }
    else {
      v7 = 3589;
    }
    *a5 = v7;
  }
  else {
    *a6 = 1;
  }
  {
    result;
    return;
  }
}

_QWORD* game_14a06a0(_QWORD* result, float a2)
{
  unsigned __int8* v2;
  __int64 v3;
  unsigned __int8 explicit;
  __int64* v6;
  unsigned int v7;
  float v8;
  int v9;

  if ((atomic_exchange((atomic_uchar* volatile)(result + 2), 1u) & 1) == 0) {
    v2 = (unsigned __int8*)result;
    if (a2 > 0.0f) {
      v3 = *result;
      (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*result + 952LL))(*result,
                                                                        0, 0);
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                      memory_order_acquire);
      v6 = GameData_212c838;
      if ((explicit & 1) == 0) {
        v9 = __cxa_guard_acquire(GameData_212c840);
        v6 = GameData_212c838;
        if (v9 != 0) {
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c838) = 0;
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = 0;
          *v6 = 0;
          v6[1] = 0;
          *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v6) = 0;
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6) = 0;
          *((_BYTE*)((char*)0x40LL) + (_QWORD)v6) = 0;
          *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v6) = 0;
          *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v6) =
              (_UNKNOWN*)1065353216;
          GameRoutine_14a0820(GameData_212c838);
          GameRoutine_2b0(GameData_212c848[0]);
          __cxa_guard_release(GameData_212c840);
          v6 = GameData_212c838;
        }
      }
      if (*(float*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v6) <=
          0x1.0000000000000p+0f) {
        v7 = 2;
      }
      else {
        v7 = 4;
      }
      v8 = a2 / (float)v7;
      do {
        (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, float))(
            **(_QWORD**)v2 + 600LL))(*(_QWORD*)v2, 0, 0, 0, 1, v8);
        (*(void (**)(_QWORD, __int64, _QWORD))(**(_QWORD**)v2 + 640LL))(
            *(_QWORD*)v2, 1, 0);
        --v7;
      } while (v7 != 0);
      result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 960LL))(v3);
    }
    atomic_store(0, v2 + 16);
  }
  return result;
}

_QWORD* game_14a0ec0(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  int v2;

  v1 = *(_DWORD*)(a1 + 60);
  if (*(_DWORD*)(a1 + 64) == v1) {
    v2 = *(unsigned __int8*)(a1 + 68);
  }
  else {
    v2 = 0;
  }
  if (*(_BYTE*)(a1 + 68) == 1) {
    *(_BYTE*)(a1 + 68) = 0;
  }
  *(_DWORD*)(a1 + 60) = v1 + 1;
  if (v2 != 0) {
    return (_QWORD*)nn_os_WaitLightEvent(*(_QWORD*)(a1 + 48) + 496LL);
  }
  else {
    return game_14a06a0(*(_QWORD**)(*(_QWORD*)a1 + 32LL),
                        (float)(*(float*)(a1 + 56) * 0x1.1111120000000p-5f) *
                            *(float*)(as_g_base_frame_counter + 156));
  }
}

_DWORD* game_14a1460(_DWORD* result)
{
  _DWORD* v1;
  long double v2;
  __int64 i;
  __int64 v4;
  long double v5;
  _BYTE v6[200];

  v1 = result;
  if (*(_QWORD*)result != 0 &&
      *(_DWORD*)(*(_QWORD*)result + 16LL) == result[2]) {
    result = (_DWORD*)Config_bc7840(eft_g_effectSystem);
  }
  if (*((_BYTE*)v1 + 85) == 1) {
    *(__n128*)&v2 = snd_Fade_Fade_10c830(v6, 0.0);
    snd_stop_ffc40(v1 + 4, v6, v2);
    result = (_DWORD*)snd_Fade_Destroy_Fade(v6);
    v4 = *((_QWORD*)v1 + 4);
    for (i = *((_QWORD*)v1 + 5); v4 != i; v4 += 16) {
      *(__n128*)&v5 = snd_Fade_Fade_10c830(v6, 0.0);
      snd_stop_ffc40(v4, v6, v5);
      result = (_DWORD*)snd_Fade_Destroy_Fade(v6);
    }
  }
  return result;
}

_DWORD* game_14a15e0(_DWORD* result)
{
  _DWORD* v1;
  long double v2;
  __int64 i;
  __int64 v4;
  long double v5;
  _BYTE v6[200];

  v1 = result;
  if (*(_QWORD*)result != 0 &&
      *(_DWORD*)(*(_QWORD*)result + 16LL) == result[2]) {
    result = (_DWORD*)Config_bc7660(eft_g_effectSystem);
  }
  if (*((_BYTE*)v1 + 85) == 1) {
    *(__n128*)&v2 = snd_Fade_Fade_10c830(v6, 0.0);
    snd_stop_ffc40(v1 + 4, v6, v2);
    result = (_DWORD*)snd_Fade_Destroy_Fade(v6);
    v4 = *((_QWORD*)v1 + 4);
    for (i = *((_QWORD*)v1 + 5); v4 != i; v4 += 16) {
      *(__n128*)&v5 = snd_Fade_Fade_10c830(v6, 0.0);
      snd_stop_ffc40(v4, v6, v5);
      result = (_DWORD*)snd_Fade_Destroy_Fade(v6);
    }
  }
  return result;
}

__int64** game_14a19c0(__int64** result, int32x2_t a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned int v4;
  int32x4_t v5;
  int32x4_t* v6;

  v2 = **result;
  if (v2 != 0 && *(_DWORD*)(v2 + 16) == *((_DWORD*)*result + 2)) {
    v3 = *(_DWORD*)(v2 + 36);
    if (v3 != 0) {
      v5 = vdupq_lane_s32(a2, 0);
      v4 = 0;
      LANES128(v5).n128_u32[3] = 0;
      do {
        if ((int)v3 > (int)v4) {
          v6 = *(int32x4_t**)(v2 + 40 + 8LL * (int)v4);
          if (v6 != nullptr) {
            v6[2] = v5;
            LANES128(v6[8]).n128_u8[0] = 1;
            v3 = *(_DWORD*)(v2 + 36);
          }
        }
        ++v4;
      } while (v4 < v3);
    }
  }
  return result;
}

__n128 game_14a1a60(__int64 a1)
{
  __n128* v1;
  int8x16_t v2;
  int8x16_t v3;
  int8x16_t v4;
  __n128 result;

  v1 = *(__n128**)(**(_QWORD**)a1 + 40LL);
  if (LANES128(v1[8]).n128_u8[1] == 1) {
    v2 = vmulq_f32(v1[4], v1[4]);
    v3 = vmulq_f32(v1[5], v1[5]);
    v4 = vmulq_f32(v1[6], v1[6]);
    LANES128(v2).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v2, v2, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0])))
            .n64_u64[0];
    LANES128(v3).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v3, v3, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0])))
            .n64_u64[0];
    LANES128(v4).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
            .n64_u64[0];
    LANES128(result).n128_u64[0] =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v2).n128_u64[0]))))
            .n64_u32[0] |
        ((unsigned __int64)LANES64_OF(
             vsqrt_f32(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0]))))
             .n64_u32[0]
         << 32);
    LANES128(result).n128_u64[1] =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]))))
            .n64_u32[0];
  }
  else {
    return v1[2];
  }
  return result;
}

__int64 game_14a1b00(__int64* a1, float a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE v20[200];

  v2 = *a1;
  if (*a1 == 0) {
    goto LABEL_27;
  }
  if (*(_DWORD*)(v2 + 16) != *((_DWORD*)a1 + 2)) {
    goto LABEL_27;
  }
  v5 = *(_DWORD*)(v2 + 36);
  if (v5 < 1) {
    goto LABEL_27;
  }
  v6 = v5 & 3;
  if ((unsigned int)v5 < 4) {
    i = 0;
    if (v6 == 0) {
      goto LABEL_27;
    }
    goto LABEL_24;
  }
  v8 = v5 & 0x7FFFFFFC;
  v9 = v2 + 64;
  v10 = 0;
  do {
    v11 = v10;
    if (v10 < *(int*)(v2 + 36)) {
      v12 = *(_QWORD*)(v9 - 24);
      if (v12 != 0) {
        *(float*)(v12 + 220) = a2;
      }
    }
    if (v11 + 1 < *(int*)(v2 + 36)) {
      v13 = *(_QWORD*)(v9 - 16);
      if (v13 != 0) {
        *(float*)(v13 + 220) = a2;
      }
    }
    if (v11 + 2 < *(int*)(v2 + 36)) {
      v14 = *(_QWORD*)(v9 - 8);
      if (v14 != 0) {
        *(float*)(v14 + 220) = a2;
      }
    }
    if (v11 + 3 < *(int*)(v2 + 36) && *(_QWORD*)v9 != 0) {
      *(float*)(*(_QWORD*)v9 + 220LL) = a2;
    }
    v9 += 32;
    v10 = v11 + 4;
  } while (v11 + 4 != v8);
  for (i = v11 + 4; v6 != 0; --v6) {
  LABEL_24:
    if (i < *(int*)(v2 + 36)) {
      v15 = *(_QWORD*)(v2 + 40 + 8 * i);
      if (v15 != 0) {
        *(float*)(v15 + 220) = a2;
      }
    }
    ++i;
  }
LABEL_27:
  result = snd_fnd_WeakHandle_isValid(a1 + 2);
  if ((result & 1) != 0) {
    v17 = *a1;
    if (*a1 == 0 || *(_DWORD*)(v17 + 16) != *((_DWORD*)a1 + 2) ||
        (*(_BYTE*)(*(_QWORD*)(v17 + 24) + 89LL) & 1) == 0) {
      v18 = snd_fnd_WeakHandle_get(a1 + 2);
      if (v18 != 0) {
        v19 = v18 - 5592;
      }
      else {
        v19 = 0;
      }
      snd_Fade_Fade_10c830(v20, 0.0f);
      (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)(v19 + 40) + 72LL))(
          v19 + 40, v20, a2);
      return snd_Fade_Destroy_Fade(v20);
    }
  }
  return result;
}

__int64 game_14a1cc0(__int64* a1, float a2)
{
  __int64 v2;
  int v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _BYTE v20[200];

  v2 = *a1;
  if (*a1 == 0) {
    goto LABEL_27;
  }
  if (*(_DWORD*)(v2 + 16) != *((_DWORD*)a1 + 2)) {
    goto LABEL_27;
  }
  v5 = *(_DWORD*)(v2 + 36);
  if (v5 < 1) {
    goto LABEL_27;
  }
  v6 = v5 & 3;
  if ((unsigned int)v5 < 4) {
    i = 0;
    if (v6 == 0) {
      goto LABEL_27;
    }
    goto LABEL_24;
  }
  v8 = v5 & 0x7FFFFFFC;
  v9 = v2 + 64;
  v10 = 0;
  do {
    v11 = v10;
    if (v10 < *(int*)(v2 + 36)) {
      v12 = *(_QWORD*)(v9 - 24);
      if (v12 != 0) {
        *(float*)(v12 + 416) = a2;
      }
    }
    if (v11 + 1 < *(int*)(v2 + 36)) {
      v13 = *(_QWORD*)(v9 - 16);
      if (v13 != 0) {
        *(float*)(v13 + 416) = a2;
      }
    }
    if (v11 + 2 < *(int*)(v2 + 36)) {
      v14 = *(_QWORD*)(v9 - 8);
      if (v14 != 0) {
        *(float*)(v14 + 416) = a2;
      }
    }
    if (v11 + 3 < *(int*)(v2 + 36) && *(_QWORD*)v9 != 0) {
      *(float*)(*(_QWORD*)v9 + 416LL) = a2;
    }
    v9 += 32;
    v10 = v11 + 4;
  } while (v11 + 4 != v8);
  for (i = v11 + 4; v6 != 0; --v6) {
  LABEL_24:
    if (i < *(int*)(v2 + 36)) {
      v15 = *(_QWORD*)(v2 + 40 + 8 * i);
      if (v15 != 0) {
        *(float*)(v15 + 416) = a2;
      }
    }
    ++i;
  }
LABEL_27:
  result = snd_fnd_WeakHandle_isValid(a1 + 2);
  if ((result & 1) != 0) {
    v17 = *a1;
    if (*a1 == 0 || *(_DWORD*)(v17 + 16) != *((_DWORD*)a1 + 2) ||
        (*(_BYTE*)(*(_QWORD*)(v17 + 24) + 89LL) & 1) == 0) {
      v18 = snd_fnd_WeakHandle_get(a1 + 2);
      if (v18 != 0) {
        v19 = v18 - 5592;
      }
      else {
        v19 = 0;
      }
      snd_Fade_Fade_10c830(v20, 0.0f);
      (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)(v19 + 40) + 160LL))(
          v19 + 40, v20, a2);
      return snd_Fade_Destroy_Fade(v20);
    }
  }
  return result;
}

__int64* game_14a26e0(__int64* result, char a2)
{
  __int64 v2;
  long double v3;
  __int64 v4;
  __int64 i;
  long double v6;
  _BYTE v7[200];

  v2 = *result;
  if ((a2 & 1) != 0 || (*(_BYTE*)(v2 + 85) & 1) != 0) {
    *(__n128*)&v3 = snd_Fade_Fade_10c830(v7, 0.0);
    snd_stop_ffc40(v2 + 16, v7, v3);
    result = (__int64*)snd_Fade_Destroy_Fade(v7);
    v4 = *(_QWORD*)(v2 + 32);
    for (i = *(_QWORD*)(v2 + 40); v4 != i; v4 += 16) {
      *(__n128*)&v6 = snd_Fade_Fade_10c830(v7, 0.0);
      snd_stop_ffc40(v4, v7, v6);
      result = (__int64*)snd_Fade_Destroy_Fade(v7);
    }
  }
  return result;
}

__int64 game_14a2780(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 i;
  long double v7;
  _BYTE v8[200];
  __int64 v9;
  __int64 v10;

  if (*(_BYTE*)(result + 85) == 1) {
    v9 = v1;
    v10 = v2;
    v3 = result;
    *(__n128*)&v4 = snd_Fade_Fade_10c830(v8, 0.0);
    snd_stop_ffc40(v3 + 16, v8, v4);
    result = snd_Fade_Destroy_Fade(v8);
    v5 = *(_QWORD*)(v3 + 32);
    for (i = *(_QWORD*)(v3 + 40); v5 != i; v5 += 16) {
      *(__n128*)&v7 = snd_Fade_Fade_10c830(v8, 0.0);
      snd_stop_ffc40(v5, v8, v7);
      result = snd_Fade_Destroy_Fade(v8);
    }
  }
  return result;
}

__int64 game_14a3920(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  struct {
    float v7[4];
    char v8;
  } v7_;

  v1 = *(_QWORD*)result;
  if (*(_QWORD*)result != 0 && *(_DWORD*)(v1 + 16) == *(_DWORD*)(result + 8) &&
      *(int*)(v1 + 36) >= 1 && *(_QWORD*)(v1 + 40) != 0 &&
      *(_DWORD*)(v1 + 20) != 9) {
    v2 = result;
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(result + 16));
    if ((result & 1) != 0) {
      result = snd_fnd_WeakHandle_get_alt1(v2 + 16);
      if ((*(_BYTE*)(result + 472) & 1) == 0) {
        v3 = *(_QWORD*)v2;
        if (*(_QWORD*)v2 != 0 && *(_DWORD*)(v3 + 16) == *(_DWORD*)(v2 + 8)) {
          v4 = *(_QWORD**)(v3 + 24);
        }
        else {
          v4 = nullptr;
        }
        if (v4[1] == 0 && v4[3] != 0 && v4[12] != 0 && v4[10] != 0) {
          result = (__int64)X8CALL_X0(
              _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                           PSEUDO_X8, void*))(**(_QWORD**)(v3 + 40) + 136LL))(
                           (void*)v7_.v7, (void*)*(_QWORD**)(v3 + 40)));
          if (v7_.v8 == 1) {
            return snd_setPosition_100570((__int64*)(v2 + 16), v7_.v7[0],
                                          v7_.v7[1], v7_.v7[2]);
          }
        }
        else {
          v5 = *(_QWORD*)(v3 + 40);
          v6 = 16;
          if (*(_BYTE*)(v5 + 129) != 0) {
            v6 = 112;
          }
          return snd_setPosition_100570(
              (__int64*)(v2 + 16), COERCE_FLOAT(*(_OWORD*)(v5 + v6)),
              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v5 + v6))),
              COERCE_FLOAT(*(_QWORD*)(v5 + v6 + 8)));
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_156bc10(PSEUDO_X8 x8_, __int64 a1)
{
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  float v5;
  float v6;
  float v7;

  v2 = *(float*)(a1 + 124);
  v3 = *(float*)(a1 + 140);
  Pane_58dfa0();
  v5 = a2[3];
  v6 = v3 + a2[1];
  v7 = v2 + a2[2];
  *a2 = v2 + *a2;
  a2[1] = v6;
  a2[2] = v7;
  a2[3] = v3 + v5;
  {
    v3 + v5;
    return;
  }
}

float game_156c160(__int64 a1, char a2)
{
  float v2;
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  _BYTE v7[4];

  v2 = 0x0.0p+0f;
  v7[0] = 0;
  v6 = 0xFF7FFFFF7F7FFFFFLL;
  v5 = 0x7F7FFFFFFF7FFFFFLL;
  if (a1 != 0) {
    v3 = LANES128_OF(
             vmulq_f32(*(float32x4_t*)(a1 + 128), *(float32x4_t*)(a1 + 128)))
             .n128_u64[0];
    GameRoutine_156bee0(
        a1, (__int64)&v6, (__int64)&v5, (__int64)v7, a2 & 1,
        sqrtf((float)(*(float*)&v3 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(a1 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(a1 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(a1 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(a1 + 144)))) /
            *(float*)(a1 + 72),
        sqrtf((float)(*((float*)&v3 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 144))))) /
            *(float*)(a1 + 76));
    if (v7[0] == 1) {
      return vabds_f32(*(float*)&v5, *(float*)&v6);
    }
  }
  return v2;
}

bool game_159d390(__int64 a1, _DWORD* a2, char a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  char v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  bool v19;
  _QWORD* v25;
  signed int v26;
  __int64 v27;
  signed int v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  int v33;

  if (a3 == 9) {
    v15 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * (*a2 & 0xFFFLL));
    v16 = *(unsigned __int8*)(v15 + 104);
    v17 = *(unsigned __int8*)(v15 + 273);
    if ((unsigned int)(v16 - 5) >= 2) {
      v18 = 0;
    }
    else {
      v18 = (*a2 >> 19) & 0x1F;
    }
    return v18 - ((*a2 >> 12) & 0x7F) + v17 < 1;
  }
  if (a3 == 3) {
    if (a1 == 0) {
      return false;
    }
    v8 = GameData_212c880[0];
    v9 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_BYTE*)(v9 + 275) == 0) {
      return false;
    }
    v10 = game_g_shared_system_skills_ptr;
    v11 = *(_QWORD*)(a1 + 1744);
    v12 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) +
                           game_g_shared_system_skills_ptr);
    if (((v12 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(a1 + 1752) - v11) >> 2 &&
        ((*(_DWORD*)(v11 + 4 * ((v12 >> 5) & 0x7F)) >> v12) & 1) != 0) {
      return false;
    }
    v13 = *(_QWORD*)(a1 + 440);
    v14 = v13 != 0 ? *(_BYTE*)(v13 + 16) : 9;
    if (((1 << v14) & 6) != 0 || (int)game_Unit_GetParam(a1) < 1 ||
        *(_BYTE*)(v9 + 275) == 0) {
      return false;
    }
    v25 = (_QWORD*)a1;
    v26 = *(__int16*)(a1 + 492);
    v27 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*a2 & 0xFFF));
    v28 = *(unsigned __int8*)(v27 + 275);
    if (*(_BYTE*)(v27 + 275) != 0) {
      v29 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) + v10);
      v30 = v25[218];
      if (((v29 >> 5) & 0x7F) + 1 > (v25[219] - v30) >> 2 ||
          ((*(_DWORD*)(v30 + 4 * ((v29 >> 5) & 0x7F)) >> v29) & 1) == 0) {
        v31 = v25[55];
        v32 = v31 != 0 ? *(_BYTE*)(v31 + 16) : 9;
        if (((1 << v32) & 6) == 0) {
          v33 = game_Unit_GetParam((__int64)v25);
          if (v33 >= 1) {
            return (int)((v33 * (unsigned int)*(unsigned __int8*)(v27 + 275) +
                          99) /
                         0x64) >= v26;
          }
        }
      }
      v28 = 0;
    }
    return v28 >= v26;
  }
  if (a3 != 2) {
    return false;
  }
  if (a1 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (*(_BYTE*)(v3 + 274) == 0) {
    return false;
  }
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)
                                               game_g_empty_item_ptr) +
                          72LL) <= 7u) {
    v4 = *(_QWORD*)(a1 + 1744);
    v5 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                          game_g_shared_system_skills_ptr);
    if (((v5 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(a1 + 1752) - v4) >> 2 &&
        ((*(_DWORD*)(v4 + 4 * ((v5 >> 5) & 0x7F)) >> v5) & 1) != 0) {
      return false;
    }
  }
  v6 = *(_QWORD*)(a1 + 440);
  v7 = v6 != 0 ? *(_BYTE*)(v6 + 16) : 9;
  if (((1 << v7) & 6) != 0) {
    return false;
  }
  v19 = true;
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v3 + 104)) & 1) !=
          0 &&
      *(_QWORD*)(v3 + 576) == 0) {
    if (*(_WORD*)(v3 + 136) != 0) {
      if (!Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 828)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 836)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 844)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 852)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 860)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 868)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 876)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 884)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 892)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 900)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 908)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 916)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 924)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 932)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 940)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 948)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 956)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 964)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 972)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 980)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 988)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 996)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1004)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1012)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1020)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1028)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1036)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1044)) &&
          !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1052))) {
        return !Unit_6c9ab0((_QWORD*)a1, a2, (unsigned __int16*)(a1 + 1060));
      }
      return false;
    }
    return true;
  }
  return v19;
}

bool game_159e890(__int64 a1, char a2, __int64 a3)
{
  __int64 v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;

  if (GameData_2259500 == game_menu_UnitGridSelectMenu_listeners_) {
    return true;
  }
  if (a1 == 0) {
    return false;
  }
  v6 = *(_QWORD*)(a3 + 32);
  if (v6 != 0) {
    if (v6 == a3) {
      v18_.v19 = v18_.v18;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 24LL))(v6, v18_.v18);
    }
    else {
      v18_.v19 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    }
  }
  else {
    v18_.v19 = nullptr;
  }
  v10 = game_gameui_UnitUtil_GetNext(a1, a2 & 1, v18_.v18, 0);
  if (v18_.v19 == v18_.v18) {
    v11 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_15;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v11))((__int64)v18_.v19);
LABEL_15:
  v12 = *(_QWORD*)(a3 + 32);
  if (v12 != 0) {
    if (v12 == a3) {
      v16_.v17 = v16_.v16;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 24LL))(v12, v16_.v16);
    }
    else {
      v16_.v17 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    }
  }
  else {
    v16_.v17 = nullptr;
  }
  v13 = GameRoutine_15dff80(a1, a2 & 1, v16_.v16, 0);
  if (v16_.v17 == v16_.v16) {
    v14 = 32;
    goto LABEL_24;
  }
  if (v16_.v17 != nullptr) {
    v14 = 40;
  LABEL_24:
    (*(void (**)(__int64))(*v16_.v17 + v14))((__int64)v16_.v17);
  }
  return v10 == a1 && v13 == a1;
}

bool game_159ea20(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;

  if (GameData_2259500 == game_menu_UnitGridSelectMenu_listeners_) {
    return true;
  }
  v6 = *(_QWORD*)(a2 + 32);
  if (v6 != 0) {
    if (v6 == a2) {
      v18_.v19 = v18_.v18;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v6 + 24LL))(v6, v18_.v18);
    }
    else {
      v18_.v19 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    }
  }
  else {
    v18_.v19 = nullptr;
  }
  v10 = game_gameui_UnitUtil_GetNext(a1, 0, v18_.v18, a3 & 1);
  if (v18_.v19 == v18_.v18) {
    v11 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_13;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v11))((__int64)v18_.v19);
LABEL_13:
  v12 = *(_QWORD*)(a2 + 32);
  if (v12 != 0) {
    if (v12 == a2) {
      v16_.v17 = v16_.v16;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 24LL))(v12, v16_.v16);
    }
    else {
      v16_.v17 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    }
  }
  else {
    v16_.v17 = nullptr;
  }
  v13 = GameRoutine_15dff80(a1, 0, v16_.v16, a3 & 1);
  if (v16_.v17 == v16_.v16) {
    v14 = 32;
    goto LABEL_22;
  }
  if (v16_.v17 != nullptr) {
    v14 = 40;
  LABEL_22:
    (*(void (**)(__int64))(*v16_.v17 + v14))((__int64)v16_.v17);
  }
  return v10 == a1 && v13 == a1;
}

char* game_1604250(int a1)
{
  char* result;
  const char* v3;
  const char* v4;
  __int64 v5;

  result = nullptr;
  if (a1 > 3) {
    if (a1 > 5) {
      if (a1 == 6) {
        return "MID_Sys_Motivation";
      }
      else if (a1 == 7) {
        v5 = GameRoutine_156d320();
        if (v5 != 0) {
          return *(char**)(v5 + 32);
        }
        else {
          return &GameData_1a9f09e;
        }
      }
    }
    else {
      v3 = "MID_Sys_Turn";
      if (a1 != 5) {
        v3 = nullptr;
      }
      if (a1 == 4) {
        return "MID_Sys_Award";
      }
      else {
        return (char*)v3;
      }
    }
  }
  else if (a1 > 1) {
    v4 = "MID_Sys_Fragment";
    if (a1 != 3) {
      v4 = nullptr;
    }
    if (a1 == 2) {
      return "MID_Sys_Rewind";
    }
    else {
      return (char*)v4;
    }
  }
  else if (a1 != 0) {
    if (a1 == 1) {
      result = "MID_Sys_HonorExp";
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        return "MID_Sys_HonorExp_Part3";
      }
    }
  }
  else {
    return "MID_Sys_Gold";
  }
  return result;
}

__attribute__((swiftcall)) void game_1604880(PSEUDO_X8 x8_, unsigned int a1,
                                             unsigned int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64* v10;
  char* v11;
  unsigned __int64 result;
  unsigned __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;

  if (GameRoutine_1604790()) {
    v6 = game_util_Format_alt2("%02d", a1);
  }
  else {
    v6 = game_util_Format_alt2("%d", a1);
  }
  v7 = (__int64)v6;
  if (GameRoutine_1604790()) {
    v8 = game_util_Format_alt2("%02d", a2);
  }
  else {
    v8 = game_util_Format_alt2("%d", a2);
  }
  v9 = (__int64)v8;
  v10 = msg_MessageManager_instance__ptr[0];
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v7);
  GameRoutine_60a020(*v10 + 14728, v9);
  v11 = GameRoutine_a4dbe0(*v10, "MID_Sys_DateTime_MD", 0);
  result = strlen(v11);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v13 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v15 = 26;
    }
    else {
      v15 = (result | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v15, 16, 0);
    a3[1] = v13;
    a3[2] = v16;
    *a3 = v15 | 1;
    v14 = (char*)v16;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v14 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_16;
    }
  }
  result = memmove(v14, v11, v13);
LABEL_16:
  v14[v13] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_1605270(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v2;
  char* v3;
  char* v4;
  char* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  unsigned __int64 result;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;

  v2 = msg_MessageManager_instance__ptr[0];
  v3 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0],
                          "MID_Save_Year_Timeline", 0);
  v4 = GameRoutine_a4dbe0(*v2, "MID_Sys_ValueEmpty", 0);
  v5 = GameRoutine_a4dbe0(*v2, "MID_Sys_ValueEmpty", 0);
  v6 = (__int64*)msg_MessageManager_empty_text__ptr;
  if (v3 != nullptr) {
    v7 = (__int64)v3;
  }
  else {
    v7 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*v2 + 14704, v7);
  if (v4 != nullptr) {
    v8 = (__int64)v4;
  }
  else {
    v8 = *v6;
  }
  GameRoutine_60a020(*v2 + 14728, v8);
  if (v5 != nullptr) {
    v9 = (__int64)v5;
  }
  else {
    v9 = *v6;
  }
  GameRoutine_60a020(*v2 + 14752, v9);
  v10 = GameRoutine_a4dbe0(*v2, "MID_Sys_DateTime_YMD", 0);
  result = strlen(v10);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v12 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (result | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v14, 16, 0);
    a1[1] = v12;
    a1[2] = v15;
    *a1 = v14 | 1;
    v13 = (char*)v15;
  }
  else {
    *(_BYTE*)a1 = 2 * result;
    v13 = (char*)a1 + 1;
    if (result == 0) {
      goto LABEL_19;
    }
  }
  result = memmove(v13, v10, v12);
LABEL_19:
  v13[v12] = 0;
  {
    result;
    return;
  }
}

void game_167ab80(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  const char* v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  const char* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  atomic_ullong* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  atomic_ullong* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;

  v3 = *(_QWORD*)(a1 + 88);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v5 = *(_QWORD**)(v4 + 8);
    v6 = *(_QWORD**)(v4 + 16);
    while (v5 != v6) {
      v7 = *v5;
      if (*(_QWORD*)*v5 == v3) {
        v8 = *(_QWORD*)(v7 + 96);
        if (v8 != 0 && (unsigned int)*(unsigned __int8*)(v8 + 32) - 3 < 2) {
          if ((GameRoutine_133f1d0(*v5, a2) & 1) == 0 &&
              (*(_WORD*)(v7 + 544) & 8) != 0) {
            v9 = GameRoutine_133f0c0(v7);
            v10 = "IconState_Miasma";
            goto LABEL_22;
          }
          goto LABEL_33;
        }
      }
      ++v5;
    }
  }
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    goto LABEL_18;
  }
  v11 = *(__int64***)(GameData_22416b0 + 8);
  v12 = *v11;
  v13 = v11[1];
  if (v12 != v13) {
    v14 = "IconState_Miasma";
    do {
      v15 = *v12++;
      if (*(_QWORD*)(*(_QWORD*)(v15 + 112) + 48LL) == *(_QWORD*)(v3 + 120)) {
        goto LABEL_36;
      }
    } while (v12 != v13);
  }
  if ((*(_BYTE*)(v3 + 178) & 4) != 0) {
    v14 = "IconState_Broken";
  }
  else {
  LABEL_18:
    v16 = (unsigned __int8)Impl_13261c0(v3);
    if (v16 != 2) {
      if (v16 == 4) {
        if ((unsigned int)GameRoutine_1651170(*(_QWORD*)(a1 + 88)) <= 2) {
          v14 = nullptr;
        }
        else {
          v14 = "IconState_Impassable";
        }
        goto LABEL_36;
      }
      if (v16 == 3) {
        v9 = Impl_13287c0(*(_QWORD*)(a1 + 88));
        v10 = "IconState_Disable";
      LABEL_22:
        if ((v9 & 1) != 0) {
          v14 = nullptr;
        }
        else {
          v14 = v10;
        }
        goto LABEL_36;
      }
      goto LABEL_33;
    }
    v17 = *(_QWORD*)(a1 + 88);
    if ((*(_BYTE*)(v17 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 ||
        (Impl_1328300(*(_QWORD*)(a1 + 88)) & 1) == 0 ||
        (Impl_1328460(v17) & 1) != 0) {
    LABEL_33:
      v14 = nullptr;
      goto LABEL_36;
    }
    v14 = "IconState_Disable";
  }
LABEL_36:
  v18 = a1;
  v19 = *(_QWORD*)(a1 + 56);
  v20 = v14;
  if (v19 == 0) {
    goto LABEL_40;
  }
  v21 = std___1___shared_weak_count_lock(v19);
  if (v21 == 0) {
    goto LABEL_40;
  }
  v22 = v21;
  v23 = (atomic_ullong*)(v21 + 8);
  v24 = *(__int64**)(v18 + 48);
  if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v32 = v24;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt1(v22);
    v24 = v32;
    if (v32 != nullptr) {
      goto LABEL_41;
    }
    goto LABEL_40;
  }
  if (v24 == nullptr) {
  LABEL_40:
    v24 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_41:
  ui_LayoutAccessor_SetPaneVisible(v24, "IconState", v20 != nullptr);
  if (v20 == nullptr) {
    return;
  }
  v25 = *(_QWORD*)(v18 + 56);
  if (v25 == 0) {
    goto LABEL_46;
  }
  v26 = std___1___shared_weak_count_lock(v25);
  if (v26 == 0) {
    goto LABEL_46;
  }
  v27 = v26;
  v28 = (atomic_ullong*)(v26 + 8);
  v29 = *(__int64**)(v18 + 48);
  if (atomic_fetch_add(v28, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v33 = v29;
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak_alt1(v27);
    v29 = v33;
    if (v33 != nullptr) {
      goto LABEL_47;
    }
    goto LABEL_46;
  }
  if (v29 == nullptr) {
  LABEL_46:
    v29 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_47:
  v30 = ui_LayoutAccessor_FindPane(v29, "IconState");
  if (v30 != 0) {
    v31 = __dynamic_cast(v30, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v31 = 0;
  }
  Manager_136a920(ui_Manager_instance_ + 1264, v31, 0, 7);
}

const char* game_1694cf0()
{
  const char* result;

  result = "MID_PerchMenu_Perch";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return "MID_PerchMenu_Perch_Part3";
  }
  return result;
}

__attribute__((swiftcall)) void game_185a130(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  result = GameRoutine_185a020();
  if (result == 0) {
    *(_WORD*)a1 = 0;
    {
      result;
      return;
    }
  }
  v3 = GameRoutine_67ed20(result);
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(result);
  }
  v4 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v6, 16,
                                             0);
    *(_QWORD*)(a1 + 8) = v4;
    *(_QWORD*)(a1 + 16) = v7;
    *(_QWORD*)a1 = v6 | 1;
    v5 = v7;
  }
  else {
    *(_BYTE*)a1 = 2 * result;
    v5 = a1 + 1;
    if (result == 0) {
      goto LABEL_12;
    }
  }
  result = memmove(v5, v3, v4);
LABEL_12:
  *(_BYTE*)(v5 + v4) = 0;
  {
    result;
    return;
  }
}

__int64 game_18dc580(float* a1, unsigned __int8* a2, __int64* a3, _DWORD* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  _BOOL8 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 primeEm;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  unsigned __int64 v44;

  v5 = *a2;
  v9 = (v5 & 1) == 0;
  v10 = v5 >> 1;
  if (v9) {
    v11 = a2 + 1;
  }
  else {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  v13 = std___1___hash_memory(v11, v12);
  v14 = *((_QWORD*)a1 + 1);
  v15 = v13;
  if (v14 != 0) {
    v16 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v4 = v13;
      if (v13 >= v14) {
        v4 = v13 % v14;
      }
    }
    else {
      v4 = v16 & v13;
    }
    v17 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v17 != nullptr) {
      v18 = *v17;
      if (*v17 != 0) {
        if ((v14 & v16) == 0) {
          while (1) {
            v23 = *(_QWORD*)(v18 + 8);
            if (v23 == v15) {
              v24 = *(unsigned __int8*)(v18 + 16);
              v25 = *(_QWORD*)(v18 + 24);
              if ((v24 & 1) == 0) {
                v25 = v24 >> 1;
              }
              if (v25 == v12) {
                v26 = (v24 & 1) != 0 ? *(_QWORD*)(v18 + 32) : v18 + 17;
                if ((unsigned int)memcmp(v26, v11, v12) == 0) {
                  return v18;
                }
              }
            }
            else if ((v23 & v16) != v4) {
              goto LABEL_41;
            }
            v18 = *(_QWORD*)v18;
            if (v18 == 0) {
              goto LABEL_41;
            }
          }
        }
        do {
          v19 = *(_QWORD*)(v18 + 8);
          if (v19 == v15) {
            v20 = *(unsigned __int8*)(v18 + 16);
            v21 = *(_QWORD*)(v18 + 24);
            if ((v20 & 1) == 0) {
              v21 = v20 >> 1;
            }
            if (v21 == v12) {
              v22 = (v20 & 1) != 0 ? *(_QWORD*)(v18 + 32) : v18 + 17;
              if ((unsigned int)memcmp(v22, v11, v12) == 0) {
                return v18;
              }
            }
          }
          else {
            if (v19 >= v14) {
              v19 %= v14;
            }
            if (v19 != v4) {
              break;
            }
          }
          v18 = *(_QWORD*)v18;
        } while (v18 != 0);
      }
    }
  }
LABEL_41:
  v27 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v28 = *a3;
  v29 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  v18 = v27;
  *(_QWORD*)v27 = 0;
  *(_QWORD*)(v27 + 8) = v15;
  *(_QWORD*)(v27 + 16) = v28;
  *(_QWORD*)(v27 + 24) = v29;
  v30 = a3[2];
  a3[2] = 0;
  v31 = a1[8];
  *(_QWORD*)(v27 + 32) = v30;
  *(_DWORD*)(v27 + 40) = *a4;
  v32 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v14 == 0 || (float)(v31 * (float)v14) < v32) {
    v33 = v32 / v31;
    v34 = true;
    if (v14 >= 3) {
      v34 = (v14 & (v14 - 1)) != 0;
    }
    v35 = v34 | (2 * v14);
    v36 = vcvtps_u64_f32(v33);
    if (v35 <= v36) {
      primeEm = v36;
    }
    else {
      primeEm = v35;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v38 = *((_QWORD*)a1 + 1);
    if (primeEm > v38) {
      goto LABEL_53;
    }
    if (primeEm < v38) {
      v39 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v38 < 3 || (v38 & (v38 - 1)) != 0) {
        v39 = std___1___next_prime(v39);
      }
      else {
        v40 = 1LL << -(char)__clz(v39 - 1);
        if (v39 >= 2) {
          v39 = v40;
        }
      }
      if (primeEm <= v39) {
        primeEm = v39;
      }
      if (primeEm < v38) {
      LABEL_53:
        GameRoutine_a94240(a1, primeEm);
      }
    }
    v14 = *((_QWORD*)a1 + 1);
    if ((v14 & (v14 - 1)) != 0) {
      if (v15 >= v14) {
        v4 = v15 % v14;
      }
      else {
        v4 = v15;
      }
    }
    else {
      v4 = (v14 - 1) & v15;
    }
  }
  v41 = *(_QWORD*)a1;
  v42 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v42 != nullptr) {
    *(_QWORD*)v18 = *v42;
    *v42 = v18;
  }
  else {
    v43 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v18;
    *(_QWORD*)v18 = v43;
    *(_QWORD*)(v41 + 8 * v4) = a1 + 4;
    if (*(_QWORD*)v18 != 0) {
      v44 = *(_QWORD*)(*(_QWORD*)v18 + 8LL);
      if ((v14 & (v14 - 1)) != 0) {
        if (v44 >= v14) {
          v44 %= v14;
        }
      }
      else {
        v44 &= v14 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v18;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v18;
}

__attribute__((swiftcall)) void game_1905b70(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0;
  a1[1] = 0;
}

__int64 game_191ab90(__int64 a1, unsigned __int8* a2, _DWORD* a3)
{
  __int64 result;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  int8x16_t v17;
  float v18;
  const char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;

  result = GameRoutine_111c720(a2);
  if ((result & 1) != 0) {
    v7 = a3[1];
    v8 = a3[2];
    v9 = (unsigned __int8)*a3;
    v10 = (unsigned __int8)BYTE1(*a3);
    v11 = (unsigned __int8)BYTE2(*a3);
    v12 = HIBYTE(*a3);
    v13 = (unsigned __int8)v8;
    v14 = BYTE1(v8);
    v15 = BYTE2(v8);
    v16 = HIBYTE(v8);
    LANES128(v17).n128_f32[0] = (float)v9 / 0x1.fe00000000000p+7f;
    LANES128(v17).n128_f32[1] = (float)v10 / 0x1.fe00000000000p+7f;
    LANES128(v17).n128_f32[2] = (float)v11 / 0x1.fe00000000000p+7f;
    LANES128(v17).n128_f32[3] = (float)v12 / 0x1.fe00000000000p+7f;
    v41 = v17;
    LANES128(v17).n128_f32[0] =
        (float)(unsigned __int8)v7 / 0x1.fe00000000000p+7f;
    LANES128(v17).n128_f32[1] = (float)BYTE1(v7) / 0x1.fe00000000000p+7f;
    LANES128(v17).n128_f32[2] = (float)BYTE2(v7) / 0x1.fe00000000000p+7f;
    LANES128(v17).n128_f32[3] = (float)HIBYTE(v7) / 0x1.fe00000000000p+7f;
    v40 = v17;
    GameRoutine_1917400(a1, (__int64)"_Skin", 5u, &v41, 1, 1);
    GameRoutine_1917400(a1, (__int64)"_Lip", 4u, &v40, 1, 1);
    v18 = (float)v13;
    v19 = "_Hair";
    v20 = a1;
    v21 = 5;
  LABEL_12:
    LANES128(v39).n128_f32[0] = v18 / 0x1.fe00000000000p+7f;
    LANES128(v39).n128_f32[1] = (float)v14 / 0x1.fe00000000000p+7f;
    LANES128(v39).n128_f32[2] = (float)v15 / 0x1.fe00000000000p+7f;
    LANES128(v39).n128_f32[3] = (float)v16 / 0x1.fe00000000000p+7f;
    v41 = v39;
    return GameRoutine_1917400(v20, (__int64)v19, v21, &v41, 1, 1);
  }
  v22 = *a2;
  v23 = (v22 & 1) == 0;
  if ((v22 & 1) != 0) {
    v24 = *((_QWORD*)a2 + 1);
  }
  else {
    v24 = v22 >> 1;
  }
  if (v24 != 0) {
    v25 = *((unsigned __int8**)a2 + 2);
    if (v23) {
      v25 = a2 + 1;
    }
    if ((unsigned int)*v25 - 51 <= 1) {
      v26 = a3[1];
      v27 = (unsigned __int8)v26;
      v28 = BYTE1(v26);
      v29 = BYTE2(v26);
      v30 = HIBYTE(v26);
      v31 = a3[2];
      v32 = (unsigned __int8)*a3;
      v33 = (unsigned __int8)BYTE1(*a3);
      v34 = (unsigned __int8)BYTE2(*a3);
      v35 = HIBYTE(*a3);
      v36 = (unsigned __int8)v31;
      v14 = BYTE1(v31);
      v15 = BYTE2(v31);
      v16 = HIBYTE(v31);
      LANES128(v37).n128_f32[0] = (float)v32 / 0x1.fe00000000000p+7f;
      LANES128(v37).n128_f32[1] = (float)v33 / 0x1.fe00000000000p+7f;
      LANES128(v37).n128_f32[2] = (float)v34 / 0x1.fe00000000000p+7f;
      LANES128(v37).n128_f32[3] = (float)v35 / 0x1.fe00000000000p+7f;
      v41 = v37;
      GameRoutine_1917400(a1, (__int64)"_ArmyColor01", 0xCu, &v41, 1, 1);
      LANES128(v38).n128_f32[0] = (float)v27 / 0x1.fe00000000000p+7f;
      LANES128(v38).n128_f32[1] = (float)v28 / 0x1.fe00000000000p+7f;
      LANES128(v38).n128_f32[2] = (float)v29 / 0x1.fe00000000000p+7f;
      LANES128(v38).n128_f32[3] = (float)v30 / 0x1.fe00000000000p+7f;
      v41 = v38;
      GameRoutine_1917400(a1, (__int64)"_ArmyColor02", 0xCu, &v41, 1, 1);
      v18 = (float)v36;
      v19 = "_ArmyColor03";
      v21 = 12;
      v20 = a1;
      goto LABEL_12;
    }
  }
  return result;
}

__int64 game_191bd10(__int64 result, __int64 a2)
{
  unsigned int v3;
  int v4;
  char* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  int v11;

  if (result != 0 && a2 != 0) {
    v3 = *(unsigned __int8*)(a2 + 56);
    v4 = *(unsigned __int8*)(a2 + 57);
    v5 = *(char**)(a2 + 40);
    v6 = *(char**)(a2 + 48);
    v7 = result;
    if (*(_BYTE*)(result + 1041) == 1 && *(_QWORD*)(result + 96) != 0) {
      ((void (*)(void))GameRoutine_1ed60)();
    }
    if (v5 == nullptr) {
      v5 = &GameData_1a9f09e;
    }
    v8 = strlen(v5);
    GameRoutine_190b6a0(v7, v5, v8);
    if (v6 != nullptr) {
      v9 = v6;
    }
    else {
      v9 = &GameData_1a9f09e;
    }
    v10 = strlen(v9);
    GameRoutine_1916dd0(v7, 0, v9, v10, 0, 0x1.99999a0000000p-4f);
    spine_AnimationState_setEmptyAnimation(*(_QWORD*)(v7 + 104), 2, 0.0f);
    spine_AnimationState_setEmptyAnimation(*(_QWORD*)(v7 + 104), 3, 0.0f);
    spine_AnimationState_setEmptyAnimation(*(_QWORD*)(v7 + 104), 4, 0.0f);
    v11 = *(_DWORD*)(a2 + 60);
    if ((v11 & 1) != 0) {
      *(_QWORD*)(v7 + 1456) |= 1uLL;
      GameRoutine_1916be0(v7, 2, "EX_Sweat", 8, 1);
      v11 = *(_DWORD*)(a2 + 60);
      if ((v11 & 2) == 0) {
      LABEL_13:
        if ((v11 & 4) == 0) {
          return GameRoutine_190b870(v7, v3, v4);
        }
      LABEL_14:
        *(_QWORD*)(v7 + 1456) |= 4uLL;
        GameRoutine_1916be0(v7, 3, "EX_Anger", 8, 1);
        return GameRoutine_190b870(v7, v3, v4);
      }
    }
    else if ((v11 & 2) == 0) {
      goto LABEL_13;
    }
    *(_QWORD*)(v7 + 1456) |= 2uLL;
    GameRoutine_1916be0(v7, 4, "EX_Cheek", 8, 1);
    if ((*(_DWORD*)(a2 + 60) & 4) == 0) {
      return GameRoutine_190b870(v7, v3, v4);
    }
    goto LABEL_14;
  }
  return result;
}

__int64 game_19b0cd0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64* v8;
    __int64 v9;
  } v8_;
  unsigned int v10;

  GameRecord_99f220((void*)(&v8_.v8));
  v2 = v8_.v9;
  v8_.v9 = 0;
  v3 = GameData_2272258;
  GameData_2272258 = v2;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    v4 = v8_.v9;
    v8_.v8 = GameData_212df70[0] + 2;
    v8_.v9 = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2272760,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2272760) != 0) {
    GameData_2272260 = 8;
    GameData_22722a0 = 13;
    GameData_22722a8 = 0;
    GameData_22722b0 = (__int64)GameRoutine_19b1170;
    GameData_2272320 = 13;
    GameData_2272360 = 13;
    GameData_22723a0 = 13;
    GameData_2272280 = 0;
    GameData_2272288 = 0;
    GameData_2272290 = 0;
    GameData_2272298 = 0;
    GameData_22722b8 = 0;
    GameData_22722c0 = 0;
    GameData_22722c8 = 0;
    GameData_22722d0 = 0;
    GameData_22722d8 = 0;
    GameData_22722e0 = 14;
    GameData_22722f8 = 0;
    GameData_2272300 = 0;
    GameData_2272308 = 0;
    GameData_2272310 = 0;
    GameData_2272318 = 0;
    GameData_2272338 = 0;
    GameData_2272340 = 0;
    GameData_2272348 = 0;
    GameData_2272350 = 0;
    GameData_2272358 = 0;
    GameData_2272378 = 0;
    GameData_2272380 = 0;
    GameData_2272388 = 0;
    GameData_2272390 = 0;
    GameData_2272398 = 0;
    GameData_22723b8 = 0;
    GameData_22723c0 = 0;
    GameData_22723c8 = 0;
    GameData_22723d0 = 0;
    GameData_22723d8 = 0;
    GameData_22723f0 = 0;
    GameData_22723f8 = 0;
    GameData_22723e8 = 0;
    GameData_2272400 = 1;
    GameData_2272408 = 0;
    GameData_2272410 = 250;
    GameData_2272418 = 0;
    GameData_2272420 = 8;
    GameData_2272268 = 0;
    GameData_2272270 = (__int64)GameData_212d618;
    GameData_22722e8 = 0;
    GameData_22722f0 = (__int64)GameRoutine_19b1230;
    GameData_2272328 = 0;
    GameData_2272330 = (__int64)GameRoutine_19b1330;
    GameData_2272368 = 0;
    GameData_2272370 = (__int64)GameRoutine_19b2e40;
    GameData_22723a8 = 0;
    GameData_22723b0 = (__int64)GameRoutine_19b4720;
    GameData_22723e0 = 4;
    GameData_2272440 = 0;
    GameData_2272448 = 0;
    GameData_2272450 = 0;
    GameData_2272458 = 0;
    GameData_2272460 = 19;
    GameData_2272468 = 0;
    GameData_2272428 = 0;
    GameData_2272430 = (__int64)GameData_212d420[0];
    GameData_2272488 = 0;
    GameData_2272490 = 0;
    GameData_2272498 = 0;
    GameData_22724a0 = 8;
    GameData_22724a8 = 0;
    GameData_2272470 = (__int64)GameData_212d060[0];
    GameData_2272480 = 1000;
    GameData_22724e0 = 14;
    GameData_22724c0 = 0;
    GameData_22724c8 = 0;
    GameData_22724d0 = 0;
    GameData_22724d8 = 0;
    GameData_22724e8 = 0;
    GameData_22724f8 = 1;
    GameData_2272500 = 0;
    GameData_2272508 = 0;
    GameData_2272510 = 0;
    GameData_2272518 = 0;
    GameData_2272548 = 0;
    GameData_2272550 = 0;
    GameData_2272558 = 0;
    GameData_2272540 = 0;
    GameData_2272538 = 0;
    GameData_2272530 = 0;
    GameData_2272528 = 0;
    GameData_2272560 = 19;
    GameData_2272568 = 0;
    GameData_22724f0 = 16;
    GameData_2272520 = 2;
    GameData_22724b0 = (__int64)GameData_212d610[0];
    GameData_2272580 = 1000;
    GameData_2272588 = 0;
    GameData_2272590 = 0;
    GameData_2272598 = 0;
    GameData_22725a0 = 10;
    GameData_22725a8 = 0;
    GameData_2272570 = (__int64)game_80a680_ptr[0];
    GameData_22725c0 = 0;
    GameData_22725c8 = 0;
    GameData_22725d0 = 0;
    GameData_22725d8 = 0;
    GameData_22725e0 = 2;
    GameData_22725f8 = 0;
    GameData_22725f0 = 0;
    GameData_22725e8 = 0;
    GameData_2272600 = 1;
    GameData_2272608 = 0;
    GameData_2272610 = 0;
    GameData_2272618 = 0;
    GameData_2272620 = 19;
    GameData_2272628 = 0;
    GameData_2272630 = (__int64)game_80a680_ptr[0];
    GameData_2272640 = 0;
    GameData_2272648 = 0;
    GameData_2272650 = 0;
    GameData_2272658 = 0;
    GameData_2272660 = 8;
    GameData_2272668 = 0;
    GameData_22725b0 = (__int64)GameData_212c720;
    GameData_2272680 = 0;
    GameData_2272688 = 0;
    GameData_2272690 = 0;
    GameData_2272698 = 0;
    GameData_22726a0 = 8;
    GameData_22726a8 = 0;
    GameData_2272670 = (__int64)GameData_212d248;
    GameData_22726c0 = 0;
    GameData_22726c8 = 0;
    GameData_22726d0 = 0;
    GameData_22726d8 = 0;
    GameData_22726e0 = 4;
    GameData_22726f8 = 0;
    GameData_22726f0 = 0;
    GameData_22726e8 = 0;
    GameData_2272700 = 1;
    GameData_2272708 = 0;
    GameData_2272710 = 1000;
    GameData_2272718 = 0;
    GameData_2272720 = 0;
    GameData_2272748 = 0;
    GameData_2272750 = 0;
    GameData_2272758 = 0;
    GameData_2272728 = 0;
    GameData_2272730 = 0;
    GameData_2272738 = 0;
    GameData_2272740 = 0;
    GameData_22726b0 = (__int64)GameData_212c710[0];
    __cxa_guard_release(&GameData_2272760);
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_QWORD*)(v5 + 304) = 0;
  GameData_2272780 = v5;
  *(_QWORD*)(v5 + 320) = 0;
  *(_QWORD*)(v5 + 328) = 0;
  *(_DWORD*)(v5 + 200) = 0;
  *(_QWORD*)v5 = game_anonymous_ProcWarRecordSeq_vtable;
  *(_QWORD*)(v5 + 256) = v5 + 264;
  *(_QWORD*)(v5 + 264) = 0;
  *(_DWORD*)(v5 + 312) = 1065353216;
  *(_QWORD*)(v5 + 208) = &GameData_2272250;
  *(_QWORD*)(v5 + 216) = 0;
  v10 = (unsigned int)snd_fnd_calcCrc32("TITLE", 0);
  snd_Fade_Fade_10c830_alt1((__int64)&v8_.v8, 0x0.0p+0f);
  snd_startSlotVolume_100b50((int*)&v10, (__int64)&v8_.v8, 0x0.0p+0f);
  snd_Fade_Destroy_Fade_alt1(&v8_.v8);
  nn_oe_SetUserInactivityDetectionTimeExtended(1);
  return ProcInst_657850(v5, (__int64)&GameData_2272260,
                         (__int64)"ProcWarRecordSeq", 1, a1);
}

#pragma GCC visibility pop
