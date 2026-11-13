#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcUnitInfoFull_Unknown141(__int64 a1, __int64* a2);
_QWORD* GameRoutine_1606250(_QWORD* result);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157b780(_QWORD);
__int64 GameRoutine_1605f00(__int64);
__int64 GameRoutine_1617a20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1617d40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_906c90(_QWORD, _QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 UnitInfoMenuItem_16061b0(__int64, __int64);
__int64 game_gameui_Util_GetMorphRage(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_16176e0(void);
void __attribute__((noreturn)) String_60a1d0(void);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure_Invoke(__int64 a1,
                                                                 int* a2);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure0_Invoke(__int64 a1,
                                                                  int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure1_Invoke(
    _QWORD* result, int* a2);
_QWORD*
game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure_Invoke(_QWORD* result,
                                                                 int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure0_Invoke(
    _QWORD* result, unsigned int* a2);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure2_Invoke(
    _QWORD* result, int* a2);
unsigned __int64
game_menu_anonymous_ProcUnitInfoFull_UpdatePage04_closure_Invoke(
    unsigned __int64 result, int* a2, __int64* a3);
__int64 ProcUnitInfoFull_1617860(__int64** a1, __int64 a2, __int64 a3,
                                 __int64 a4);
__int64
ProcUnitInfoFull_1617b80_alt1(__int64** a1, __int64 a2,
                              __int64 a3) __asm__("ProcUnitInfoFull_1617b80");
__int64 game_menu_anonymous_ProcUnitInfoFull_LCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
__int64 game_menu_anonymous_ProcUnitInfoFull_RCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2);
_QWORD* GameMenu_16e9cd0(__int64, __int64);
__attribute__((swiftcall)) void GameRoutine_160bc20(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* FloatingHelp_18af120(_QWORD*, __int64*);
__int64 FloatingHelp_18aee60(_QWORD*, __int64*);
__int64 GameRoutine_1593d90(__int64, __int64);
__int64 GameRoutine_1605d40();
__int64 GameRoutine_1605dc0(_QWORD, _QWORD);
__int64 GameRoutine_160bd60(_QWORD);
__int64 GameRoutine_160be20(_QWORD);
__int64 GameRoutine_160be20_alt1(__int64*) __asm__("GameRoutine_160be20");
__int64 GameRoutine_1616a00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1616a00_alt1(__int64 result, __int64, _QWORD*,
                                 int) __asm__("GameRoutine_1616a00");
__int64 GameRoutine_18ae960(_QWORD*, char);
__int64 GameRoutine_18af480(_QWORD*, __int64*, __int64);
__int64 GameRoutine_18af980(__int64, __int64*);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 MenuItem_188bf10(_QWORD, _QWORD);
__int64 game_gameui_UnitUtil_GetNext(__int64, char, _QWORD*, char);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
bool GameRoutine_159e890(__int64, char, __int64);
extern __int64 (*GameData_2067a58[])();
extern __int64 (*GameData_2068240[])();
extern __int64 (*GameData_2068340[])();
extern __int64* GameData_212d890[2];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_21759e0;
extern __int64 GameData_2259500;
extern __int64 game_menu_UnitGridSelectMenu_listeners_;
extern char GameData_1a9f09e;
__int64 ProcUnitInfoFull_Unknown75(__int64 a1, int a2);
__int64 ProcUnitInfoFull_Unknown84(__int64* a1);
_QWORD* game_menu_anonymous_ProcUnitInfoFull_OnOpened(__int64 a1);
__int64 ProcUnitInfoFull_Unknown94(__int64 a1);
__int64 game_menu_anonymous_ProcUnitInfoFull_RCall(__int64* a1);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcUnitInfoFull_UpdateCursorRoute_closure_Invoke(
    PSEUDO_X8 x8_, __int64 a1, __int64 a2, unsigned int* a3);
__attribute__((swiftcall)) void
game_menu_anonymous_ProcUnitInfoFull_OnOpened_closure_Invoke(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             _QWORD* a2,
                                                             int* a3);
__int64 ProcUnitInfoFull_1617d40(__int64, const char*, int*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
void __attribute__((noreturn))
GameRoutine_16176e0_alt1() __asm__("GameRoutine_16176e0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 ProcUnitInfoFull_1617b80(__int64* a1, const char* a2, int* a3);
_QWORD* ui_control_1886790(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__int64 FloatingHelp_18ade60(_QWORD*);
__int64 GameRoutine_15dff80(__int64, char, _QWORD*, char);
__int64 GameRoutine_160be20_alt2(__int64) __asm__("GameRoutine_160be20");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_20682c0[])();
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) GameRoutine_16176c0();
__int64 game_menu_anonymous_ProcUnitInfoFull_LCall(__int64 a1);
__int64 ProcUnitInfoFull_16171e0(__int64 a1, _QWORD* a2, const char* a3);
__int64 ProcUnitInfoFull_16172f0(__int64 a1, __int64 a2, __int64 a3);
_QWORD* ProcUnitInfoFull_1617540(_QWORD* result, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
    GameRoutine_15b71b0_alt1(PSEUDO_X8) __asm__("GameRoutine_15b71b0");
__attribute__((swiftcall)) void
GameRoutine_160bc20_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_160bc20");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void game_16073d0(PSEUDO_X8, __int64*);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameRoutine_1605dc0_alt1(__int64,
                                 _QWORD*) __asm__("GameRoutine_1605dc0");
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 MenuItem_188bf10_alt1(__int64, const char*) __asm__("MenuItem_188bf10");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_gameui_1593d90(__int64*, __int64);
__int64 ui_160bd60(__int64);
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
bool game_159e890(__int64, char, __int64);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_20680f0;
extern char* msg_MessageManager_empty_text_;
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a1d0_alt2() __asm__("String_60a1d0");
__attribute__((swiftcall)) void
game_menu_anonymous_ProcUnitInfoFull_UpdateTab_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1,
                                                              int* a2);
void ProcUnitInfoFull_1616a00(const char** a1, __int64 a2, _QWORD* a3, int a4);
__int64 ProcUnitInfoFull_1617700(__int64 a1, const char* a2, int* a3, int* a4);
__int64 ProcUnitInfoFull_1617a20(__int64 a1, const char* a2, int* a3, int* a4);
__int64 GameRoutine_17a4cc0(int*, __int64, float*);
__int64 LayoutAccessor_155ea30(__int64*);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN GameData_1ac6c8b;
__int64 ProcUnitInfoFull_Unknown89(__int64 a1);
void ProcUnitInfoFull_16165a0(__int64 a1, __int64 a2);

__int64 ProcUnitInfoFull_Unknown75(__int64 a1, int a2)
{
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD v5[27];

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (a2 == 14) {
    v5[25] = v2;
    v5[26] = v3;
    snd_Fade_Fade_10c830_alt1((__int64)v5, 0x0.0p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    snd_play_ff2d0_alt1((void*)(handle), (__int64)"SE_SYS_NG",
                        (__int64)"SE_SYS_NG", (__int64)v5, 0, 0x10001u, 0,
                        0x0.0p+0f, 0x1.0000000000000p+0f),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    return snd_Fade_Destroy_Fade_alt1(v5);
  }
  return result;
}

__int64 ProcUnitInfoFull_Unknown84(__int64* a1)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v2;
  __int64* v3;
  __int64* v5;
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
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  int v87;
  __int64 v88;
  const char* v89;
  __int64 v90;
  const char* v91;
  __int64 v92;
  __int64* v93;
  __int64* v94;
  __int64 v95;
  __int64* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64* v102;
  bool v103;
  char* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  const char* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  const char* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  float v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64* v132;
  __int64* v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  bool v167;
  __int64 v168;
  __int64 v169;
  const char* v170;
  __int64 v171;
  const char* v172;
  const char* v173;
  __int64 v175;
  __int64* v176;
  struct {
    _QWORD v177[4];
    _QWORD* v178;
  } v177_;
  struct {
    const char* v179;
    const char* v180;
  } v179_;
  struct {
    const char* v181;
    const char* v182;
  } v181_;
  struct {
    char* v183;
    const char* v184;
    char v185;
    char gap121_[3];
    int v186;
    int v187;
    char v188;
    char gap133_[3];
    __int64 v189;
  } v183_;
  struct {
    const char* v190;
    __int64 v191;
  } v190_;

  v1 = a1;
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), a1 + 106, "L_Page00");
  if (v183_.v184 == nullptr) {
    goto LABEL_171;
  }
  v2 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
  v3 = (__int64*)v183_.v183;
  if (v183_.v184 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
  }
  if (v2 == 0 || v3 == nullptr) {
    if (v2 == 0) {
      goto LABEL_171;
    }
    goto LABEL_169;
  }
  v183_.v183 = "L_Equip";
  v183_.v184 = (_BYTE*)((_UNKNOWN*)0x7LL);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
  v7 = v190_.v191;
  v8 = v6;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v6, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  else {
    GameRoutine_1605dc0_alt1(v6, &v183_.v183);
  }
  v9 = v1[155];
  v1[155] = v8;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 0);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v10 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v11 = v190_.v191;
  v12 = v10;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v10, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  else {
    GameRoutine_1605dc0_alt1(v10, &v183_.v183);
  }
  v13 = v1[156];
  v1[156] = v12;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v14 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v15 = v190_.v191;
  v16 = v14;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v14, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  else {
    GameRoutine_1605dc0_alt1(v14, &v183_.v183);
  }
  v17 = v1[157];
  v1[157] = v16;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v18 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v19 = v190_.v191;
  v20 = v18;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v18, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  else {
    GameRoutine_1605dc0_alt1(v18, &v183_.v183);
  }
  v21 = v1[158];
  v1[158] = v20;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 3);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v22 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v23 = v190_.v191;
  v24 = v22;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v22, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v23);
  }
  else {
    GameRoutine_1605dc0_alt1(v22, &v183_.v183);
  }
  v25 = v1[159];
  v1[159] = v24;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 4);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v26 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v27 = v190_.v191;
  v28 = v26;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v26, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v27);
  }
  else {
    GameRoutine_1605dc0_alt1(v26, &v183_.v183);
  }
  v29 = v1[160];
  v1[160] = v28;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Item%02d", 5);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v30 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v31 = v190_.v191;
  v32 = v30;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v30, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v31);
  }
  else {
    GameRoutine_1605dc0_alt1(v30, &v183_.v183);
  }
  v33 = v1[161];
  v1[161] = v32;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = "L_Person00";
  v183_.v184 = (_BYTE*)(((_UNKNOWN**)0x8LL) + 2);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v34 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v35 = v190_.v191;
  v36 = v34;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v34, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v35);
  }
  else {
    GameRoutine_1605dc0_alt1(v34, &v183_.v183);
  }
  v37 = v1[162];
  v1[162] = v36;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Job%02d", 0);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v38 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v39 = v190_.v191;
  v40 = v38;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v38, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v39);
  }
  else {
    GameRoutine_1605dc0_alt1(v38, &v183_.v183);
  }
  v41 = v1[164];
  v1[164] = v40;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Job%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v42 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v43 = v190_.v191;
  v44 = v42;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v42, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v43);
  }
  else {
    GameRoutine_1605dc0_alt1(v42, &v183_.v183);
  }
  v45 = v1[165];
  v1[165] = v44;
  if (v45 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v45 + 8LL))(v45);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Job%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v46 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v47 = v190_.v191;
  v48 = v46;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v46, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v47);
  }
  else {
    GameRoutine_1605dc0_alt1(v46, &v183_.v183);
  }
  v49 = v1[166];
  v1[166] = v48;
  if (v49 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 8LL))(v49);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = "L_Ride00";
  v183_.v184 = (const char*)((_UNKNOWN**)0x8LL);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v50 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v51 = v190_.v191;
  v52 = v50;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v50, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v51);
  }
  else {
    GameRoutine_1605dc0_alt1(v50, &v183_.v183);
  }
  v53 = v1[163];
  v1[163] = v52;
  if (v53 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v54 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v55 = v190_.v191;
  v56 = v54;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v54, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v55);
  }
  else {
    GameRoutine_1605dc0_alt1(v54, &v183_.v183);
  }
  v57 = v1[167];
  v1[167] = v56;
  if (v57 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 8LL))(v57);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v58 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v59 = v190_.v191;
  v60 = v58;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v58, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v59);
  }
  else {
    GameRoutine_1605dc0_alt1(v58, &v183_.v183);
  }
  v61 = v1[168];
  v1[168] = v60;
  if (v61 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 8LL))(v61);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 3);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v62 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v63 = v190_.v191;
  v64 = v62;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v62, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v63);
  }
  else {
    GameRoutine_1605dc0_alt1(v62, &v183_.v183);
  }
  v65 = v1[169];
  v1[169] = v64;
  if (v65 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v65 + 8LL))(v65);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 4);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v66 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v67 = v190_.v191;
  v68 = v66;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v66, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v67);
  }
  else {
    GameRoutine_1605dc0_alt1(v66, &v183_.v183);
  }
  v69 = v1[170];
  v1[170] = v68;
  if (v69 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v69 + 8LL))(v69);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Equip%02d", 5);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v70 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v71 = v190_.v191;
  v72 = v70;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v70, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v71);
  }
  else {
    GameRoutine_1605dc0_alt1(v70, &v183_.v183);
  }
  v73 = v1[171];
  v1[171] = v72;
  if (v73 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v73 + 8LL))(v73);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Blood%02d", 0);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v74 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v75 = v190_.v191;
  v76 = v74;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v74, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v75);
  }
  else {
    GameRoutine_1605dc0_alt1(v74, &v183_.v183);
  }
  v77 = v1[245];
  v1[245] = v76;
  if (v77 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 8LL))(v77);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Blood%02d", 1);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v78 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v79 = v190_.v191;
  v80 = v78;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v78, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v79);
  }
  else {
    GameRoutine_1605dc0_alt1(v78, &v183_.v183);
  }
  v81 = v1[246];
  v1[246] = v80;
  if (v81 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v81 + 8LL))(v81);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v183_.v183 = game_util_Format_alt1("L_Blood%02d", 2);
  v183_.v184 = (const char*)strlen_alt1(v183_.v183);
  GameRoutine_160bc20_alt1((void*)(&v190_.v190), v3, &v183_.v183);
  v82 = fw_memory_HeapManager_Allocate_alt1(*v5, 72, 16, 0);
  v83 = v190_.v191;
  v84 = v82;
  v183_.v183 = (char*)v190_.v190;
  v183_.v184 = (const char*)v190_.v191;
  if (v190_.v191 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1605dc0_alt1(v82, &v183_.v183);
    std___1___shared_weak_count___release_weak_alt1(v83);
  }
  else {
    GameRoutine_1605dc0_alt1(v82, &v183_.v183);
  }
  v85 = v1[247];
  v1[247] = v84;
  if (v85 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v85 + 8LL))(v85);
  }
  if (v190_.v191 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v190_.v191);
  }
  v86 = LayoutAccessor_155fbe0_alt1(v3, "L_KeyHelp");
  v87 = (*(__int64 (**)(__int64*))(*v1 + 192))(v1);
  v183_.v188 = 0;
  v183_.v189 = 0;
  v183_.v183 = &GameData_1a9f09e;
  v183_.v184 = "MID_KeyHelp_StatusChange";
  v183_.v185 = 1;
  v183_.v186 = 6;
  v183_.v187 = v87;
  game_gameui_1593d90(v86, (__int64)&v183_.v183);
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v3, "L_BattleStatusGraph");
  if (v183_.v184 != nullptr) {
    v88 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v89 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v88 != 0 && v89 != nullptr) {
      LayoutAccessor_1562cf0_alt1((__int64)v89, "BattleStatus");
    }
    else if (v88 == 0) {
      goto LABEL_160;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
      std___1___shared_weak_count___release_weak_alt1(v88);
    }
  }
LABEL_160:
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v3, "L_GrowthRateGraph");
  if (v183_.v184 != nullptr) {
    v90 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v91 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v90 != 0 && v91 != nullptr) {
      LayoutAccessor_1562cf0_alt1((__int64)v91, "GrowthRateGraph");
      goto LABEL_167;
    }
    if (v90 != 0) {
    LABEL_167:
      if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
        std___1___shared_weak_count___release_weak_alt1(v90);
      }
    }
  }
LABEL_169:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
LABEL_171:
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_Page01");
  if (v183_.v184 != nullptr) {
    v92 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v93 = (__int64*)v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v92 != 0 && v93 != nullptr) {
      v175 = v92;
      v176 = v1;
      v94 = v1 + 172;
      v95 = 0;
      v96 = (__int64*)fw_memory_g_heap_manager_ptr;
      do {
        v183_.v183 = game_util_Format_alt1("L_SkillCommand%02d", v95);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v183_.v183);
        v97 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v98 = v190_.v191;
        v99 = v97;
        v183_.v183 = (char*)v190_.v190;
        v183_.v184 = (const char*)v190_.v191;
        if (v190_.v191 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v97, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1(v98);
        }
        else {
          GameRoutine_1605dc0_alt1(v97, &v183_.v183);
        }
        v100 = v94[v95];
        v94[v95] = v99;
        if (v100 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v100 + 8LL))(v100);
        }
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
        ++v95;
      } while (v95 != 7);
      v101 = -24;
      v102 = v176 + 179;
      do {
        v104 = game_util_Format_alt1("L_Magic%02d", (int)v101 + 24);
        v183_.v183 = v104;
        v183_.v184 = (const char*)strlen_alt1(v104);
        GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v183_.v183);
        v105 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v106 = v190_.v191;
        v107 = v105;
        v183_.v183 = (char*)v190_.v190;
        v183_.v184 = (const char*)v190_.v191;
        if (v190_.v191 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v105, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1(v106);
        }
        else {
          GameRoutine_1605dc0_alt1(v105, &v183_.v183);
        }
        v108 = *v102;
        *v102 = v107;
        if (v108 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v108 + 8LL))(v108);
        }
        v102[24] = ui_LayoutAccessor_FindPane_alt1(v93, (__int64)v104);
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
        v103 = __CFADD__(v101++, 1);
        ++v102;
      } while (!v103);
      v109 = -3;
      v110 = v176 + 234;
      do {
        v111 = v109 + 3;
        v183_.v183 = game_util_Format_alt1("L_Dragon%02d_Name", (int)v109 + 3);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v183_.v183);
        v112 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v113 = v190_.v191;
        v114 = v112;
        v183_.v183 = (char*)v190_.v190;
        v183_.v184 = (const char*)v190_.v191;
        if (v190_.v191 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v112, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1(v113);
        }
        else {
          GameRoutine_1605dc0_alt1(v112, &v183_.v183);
        }
        v115 = *(v110 - 6);
        *(v110 - 6) = v114;
        if (v115 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v115 + 8LL))(v115);
        }
        v183_.v183 = game_util_Format_alt1("L_Dragon%02d_Attack", v111);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v181_.v181), v93, &v183_.v183);
        v116 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v117 = v181_.v182;
        v118 = v116;
        v183_.v183 = (char*)v181_.v181;
        v183_.v184 = v181_.v182;
        if (v181_.v182 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v181_.v182 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v116, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1((__int64)v117);
        }
        else {
          GameRoutine_1605dc0_alt1(v116, &v183_.v183);
        }
        v119 = *(v110 - 3);
        *(v110 - 3) = v118;
        if (v119 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v119 + 8LL))(v119);
        }
        v183_.v183 = game_util_Format_alt1("L_Dragon%02d_Morph", v111);
        v183_.v184 = (const char*)strlen_alt1(v183_.v183);
        GameRoutine_160bc20_alt1((void*)(&v179_.v179), v93, &v183_.v183);
        v120 = fw_memory_HeapManager_Allocate_alt1(*v96, 72, 16, 0);
        v121 = v179_.v180;
        v122 = v120;
        v183_.v183 = (char*)v179_.v179;
        v183_.v184 = v179_.v180;
        if (v179_.v180 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v179_.v180 + 16),
                                    1u, memory_order_relaxed);
          GameRoutine_1605dc0_alt1(v120, &v183_.v183);
          std___1___shared_weak_count___release_weak_alt1((__int64)v121);
        }
        else {
          GameRoutine_1605dc0_alt1(v120, &v183_.v183);
        }
        v123 = *v110;
        *v110 = v122;
        if (v123 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v123 + 8LL))(v123);
        }
        if (v179_.v180 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1((__int64)v179_.v180);
        }
        if (v181_.v182 != nullptr) {
          std___1___shared_weak_count___release_weak_alt1((__int64)v181_.v182);
        }
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
        v103 = __CFADD__(v109++, 1);
        ++v110;
      } while (!v103);
      v1 = v176;
      v176[227] = 0;
      v124 = ui_LayoutAccessor_FindPane_alt1(v93, (__int64)"L_Magic00");
      v125 = ui_LayoutAccessor_FindPane_alt1(v93, (__int64)"L_Info_Magic00");
      if (v124 != 0 && v125 != 0) {
        v126 = *(float*)(v125 + 52);
        *((float*)v176 + 454) = v126;
        *((float*)v176 + 455) = v126 - *(float*)(v124 + 52);
      }
      v190_.v190 = "L_Info_Magic00";
      v190_.v191 = 14;
      GameRoutine_160bc20_alt1((void*)(&v183_.v183), v93, &v190_.v190);
      v92 = v175;
      if (v183_.v184 != nullptr) {
        v127 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
        if (v127 != 0) {
          v128 = v127;
          if (v183_.v183 != nullptr) {
            MenuItem_188bf10_alt1((__int64)v183_.v183, "MID_Menu_AttackMagic");
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v128 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v128 + 16LL))(v128);
            std___1___shared_weak_count___release_weak_alt1(v128);
          }
        }
      }
      v181_.v181 = "L_Info_Magic01";
      v181_.v182 = (_BYTE*)(((_UNKNOWN**)0x8LL) + 6);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v93, &v181_.v181);
      if (v190_.v191 != 0) {
        v129 = std___1___shared_weak_count_lock_alt1(v190_.v191);
        if (v129 != 0) {
          v130 = v129;
          if (v190_.v190 != nullptr) {
            MenuItem_188bf10_alt1((__int64)v190_.v190, "MID_Menu_SupportMagic");
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v130 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v130 + 16LL))(v130);
            std___1___shared_weak_count___release_weak_alt1(v130);
          }
        }
        if (v190_.v191 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v190_.v191);
        }
      }
      if (v183_.v184 != nullptr) {
        std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
      }
    }
    if (v92 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v92 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v92 + 16LL))(v92);
      std___1___shared_weak_count___release_weak_alt1(v92);
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_Page03");
  if (v183_.v184 != nullptr) {
    v131 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v132 = (__int64*)v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v131 != 0 && v132 != nullptr) {
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 0);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v133 = (__int64*)fw_memory_g_heap_manager_ptr;
      v134 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 72, 16, 0);
      v135 = v190_.v191;
      v136 = v134;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v134, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v135);
      }
      else {
        GameRoutine_1605dc0_alt1(v134, &v183_.v183);
      }
      v137 = v1[237];
      v1[237] = v136;
      if (v137 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v137 + 8LL))(v137);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 1);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v138 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v139 = v190_.v191;
      v140 = v138;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v138, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v139);
      }
      else {
        GameRoutine_1605dc0_alt1(v138, &v183_.v183);
      }
      v141 = v1[238];
      v1[238] = v140;
      if (v141 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v141 + 8LL))(v141);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 2);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v142 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v143 = v190_.v191;
      v144 = v142;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v142, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v143);
      }
      else {
        GameRoutine_1605dc0_alt1(v142, &v183_.v183);
      }
      v145 = v1[239];
      v1[239] = v144;
      if (v145 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v145 + 8LL))(v145);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 3);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v146 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v147 = v190_.v191;
      v148 = v146;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v146, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v147);
      }
      else {
        GameRoutine_1605dc0_alt1(v146, &v183_.v183);
      }
      v149 = v1[240];
      v1[240] = v148;
      if (v149 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v149 + 8LL))(v149);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 4);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v150 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v151 = v190_.v191;
      v152 = v150;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v150, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v151);
      }
      else {
        GameRoutine_1605dc0_alt1(v150, &v183_.v183);
      }
      v153 = v1[241];
      v1[241] = v152;
      if (v153 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v153 + 8LL))(v153);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = game_util_Format_alt1("L_Special%02d", 5);
      v183_.v184 = (const char*)strlen_alt1(v183_.v183);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v154 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v155 = v190_.v191;
      v156 = v154;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v154, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v155);
      }
      else {
        GameRoutine_1605dc0_alt1(v154, &v183_.v183);
      }
      v157 = v1[242];
      v1[242] = v156;
      if (v157 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v157 + 8LL))(v157);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = "L_SpecialCommand";
      v183_.v184 = (const char*)((__int128*)0x10LL);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v158 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v159 = v190_.v191;
      v160 = v158;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v158, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v159);
      }
      else {
        GameRoutine_1605dc0_alt1(v158, &v183_.v183);
      }
      v161 = v1[243];
      v1[243] = v160;
      if (v161 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v161 + 8LL))(v161);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
      v183_.v183 = "L_BlazeSkill";
      v183_.v184 = (_BYTE*)(((_UNKNOWN**)0x8LL) + 4);
      GameRoutine_160bc20_alt1((void*)(&v190_.v190), v132, &v183_.v183);
      v162 = fw_memory_HeapManager_Allocate_alt1(*v133, 72, 16, 0);
      v163 = v190_.v191;
      v164 = v162;
      v183_.v183 = (char*)v190_.v190;
      v183_.v184 = (const char*)v190_.v191;
      if (v190_.v191 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v190_.v191 + 16),
                                  1u, memory_order_relaxed);
        GameRoutine_1605dc0_alt1(v162, &v183_.v183);
        std___1___shared_weak_count___release_weak_alt1(v163);
      }
      else {
        GameRoutine_1605dc0_alt1(v162, &v183_.v183);
      }
      v165 = v1[244];
      v1[244] = v164;
      if (v165 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v165 + 8LL))(v165);
      }
      if (v190_.v191 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v190_.v191);
      }
    }
    else if (v131 == 0) {
      goto LABEL_304;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v131 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131);
      std___1___shared_weak_count___release_weak_alt1(v131);
    }
  }
LABEL_304:
  v166 = v1[133];
  v177_.v177[0] = GameData_2067a58;
  v177_.v177[1] = GameRoutine_1605d40;
  v177_.v178 = v177_.v177;
  v167 = game_159e890(v166, 1, (__int64)v177_.v177);
  if (v177_.v178 == v177_.v177) {
    v168 = 32;
  }
  else {
    if (v177_.v178 == nullptr) {
      goto LABEL_309;
    }
    v168 = 40;
  }
  (*(void (**)(__int64))(*v177_.v178 + v168))((__int64)v177_.v178);
LABEL_309:
  if (!v167) {
    goto LABEL_328;
  }
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_ArrowL");
  if (v183_.v184 != nullptr) {
    v169 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v170 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v169 != 0 && v170 != nullptr) {
      LayoutAccessor_155e830_alt1((__int64)v170, 0);
    }
    else if (v169 == 0) {
      goto LABEL_319;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v169 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169);
      std___1___shared_weak_count___release_weak_alt1(v169);
    }
  }
LABEL_319:
  LayoutAccessor_1560070_alt1((void*)(&v183_.v183), v1 + 106, "L_ArrowR");
  if (v183_.v184 != nullptr) {
    v171 = std___1___shared_weak_count_lock_alt1((__int64)v183_.v184);
    v172 = v183_.v183;
    if (v183_.v184 != nullptr) {
      std___1___shared_weak_count___release_weak_alt1((__int64)v183_.v184);
    }
    if (v171 != 0 && v172 != nullptr) {
      LayoutAccessor_155e830_alt1((__int64)v172, 0);
    }
    else if (v171 == 0) {
      goto LABEL_328;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v171 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v171 + 16LL))(v171);
      std___1___shared_weak_count___release_weak_alt1(v171);
    }
  }
LABEL_328:
  ui_160bd60((__int64)v1);
  GameRoutine_160be20_alt2((__int64)v1);
  if ((unsigned __int8)GameData_21759e0 != 122) {
    v173 = "EUen";
    if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE1(GameData_21759e0) != 111) {
        return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
      }
    }
    else if ((unsigned __int8)GameData_21759e0 != 106 ||
             BYTE1(GameData_21759e0) != 97) {
      return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
    }
    if (BYTE2(GameData_21759e0) != 0) {
      return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
    }
  LABEL_335:
    v173 = "JPja";
    return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
  }
  v173 = "EUen";
  if ((GameData_21759e0 & 0xFFFFFF000000LL) == 0x6E6148000000LL &&
      BYTE1(GameData_21759e0) == 104 && BYTE2(GameData_21759e0) == 45 &&
      (BYTE6(GameData_21759e0) == 116 || BYTE6(GameData_21759e0) == 115) &&
      HIBYTE(GameData_21759e0) == 0) {
    goto LABEL_335;
  }
  return LayoutAccessor_1562cf0_alt1((__int64)(v1 + 106), v173);
}

__int64 ProcUnitInfoFull_Unknown89(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  struct {
    __int64* v16;
    __int64 v17;
  } v16_;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64* v22;
    __int64 v23;
  } v22_;
  struct {
    __int64* v24;
    __int64 v25;
  } v24_;

  LayoutAccessor_1560070_alt1((void*)(&v24_.v24), (__int64*)(a1 + 848),
                              "L_Page00");
  if (v24_.v25 != 0) {
    v2 = std___1___shared_weak_count_lock_alt1(v24_.v25);
    if (v2 != 0) {
      v3 = v24_.v24;
    }
    else {
      v3 = nullptr;
    }
    if (v24_.v25 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v24_.v25);
    }
  }
  else {
    v2 = 0;
    v3 = nullptr;
  }
  result = LayoutAccessor_155ea30(v3);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 1984) == 1) {
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3, "L_GrowthRateGraph");
      if (v24_.v25 != 0) {
        v5 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        if (v5 != 0) {
          v6 = v24_.v24;
        }
        else {
          v6 = nullptr;
        }
        if (v24_.v25 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v6 != nullptr) {
          v7 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                               (__int64)&GameData_1ac6c8b);
          v22_.v22 = v6;
          v22_.v23 = v5;
          if (v5 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_17a4cc0((int*)(a1 + 2124), (__int64)&v22_.v22,
                              (float*)(v7 + 80));
          if (v22_.v23 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v22_.v23);
          }
        }
        if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak_alt1(v5);
        }
      }
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3, "L_BasicStatusGraph");
      result = v24_.v25;
      if (v24_.v25 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        result = v24_.v25;
        if (v8 != 0) {
          v9 = v24_.v24;
        }
        else {
          v9 = nullptr;
        }
        if (v24_.v25 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v9 == nullptr) {
          goto LABEL_60;
        }
        v10 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                              (__int64)&GameData_1ac6c8b);
        v20_.v20 = v9;
        v20_.v21 = v8;
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_17a4cc0((int*)(a1 + 2056), (__int64)&v20_.v20,
                            (float*)(v10 + 80));
        result = v20_.v21;
        if (v20_.v21 == 0) {
          goto LABEL_60;
        }
        goto LABEL_59;
      }
    }
    else {
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3,
                                  "L_BattleStatusGraph");
      if (v24_.v25 != 0) {
        v11 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        if (v11 != 0) {
          v12 = v24_.v24;
        }
        else {
          v12 = nullptr;
        }
        if (v24_.v25 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v12 != nullptr) {
          v13 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                                (__int64)&GameData_1ac6c8b);
          v18_.v18 = v12;
          v18_.v19 = v11;
          if (v11 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_17a4cc0((int*)(a1 + 1988), (__int64)&v18_.v18,
                              (float*)(v13 + 80));
          if (v18_.v19 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v18_.v19);
          }
        }
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak_alt1(v11);
        }
      }
      LayoutAccessor_1560070_alt1((void*)(&v24_.v24), v3, "L_BasicStatusGraph");
      result = v24_.v25;
      if (v24_.v25 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v24_.v25);
        result = v24_.v25;
        if (v8 != 0) {
          v14 = v24_.v24;
        }
        else {
          v14 = nullptr;
        }
        if (v24_.v25 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v24_.v25);
        }
        if (v14 != nullptr) {
          v15 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                                (__int64)&GameData_1ac6c8b);
          v16_.v16 = v14;
          v16_.v17 = v8;
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                      memory_order_relaxed);
          }
          GameRoutine_17a4cc0((int*)(a1 + 2056), (__int64)&v16_.v16,
                              (float*)(v15 + 80));
          result = v16_.v17;
          if (v16_.v17 == 0) {
            goto LABEL_60;
          }
        LABEL_59:
          result = std___1___shared_weak_count___release_weak_alt1(result);
        }
      LABEL_60:
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          result = std___1___shared_weak_count___release_weak_alt1(v8);
        }
      }
    }
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak_alt1(v2);
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_OnOpened(__int64 a1)
{
  _QWORD** v2;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* result;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  v2 = (_QWORD**)GameData_212d8b0[0];
  v3 = *(_QWORD*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    v4 = (__int64*)(a1 + 848);
    v5 = *(_QWORD**)GameData_212d8b0[0];
    *(_BYTE*)(v3 + 256) = 1;
    FloatingHelp_18aee60(v5, v4);
    GameRoutine_18ae960((_QWORD*)v3, 1);
    v6 = *(_QWORD*)(v3 + 240);
    *(_QWORD*)(v3 + 232) = 0;
    *(_QWORD*)(v3 + 240) = 0;
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak(v6);
    }
    v7 = *v2;
    *(_QWORD*)(v3 + 160) = a1;
    *(_BYTE*)(v3 + 257) = 0;
    *(_DWORD*)(v3 + 248) = -1;
    if (v7 != nullptr) {
      v13_.v14 = v13_.v13;
      *(_QWORD*)((char*)v7 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)((char*)v7 + 276) = 0xC4048000446D8000LL;
      v11_.v11[0] = GameData_2068240;
      v11_.v11[1] = a1;
      v11_.v12 = v11_.v11;
      v13_.v13[0] = GameData_2068240;
      v13_.v13[1] = a1;
      GameRoutine_18af480(v7, (__int64*)(a1 + 848), (__int64)v13_.v13);
      if (v13_.v14 == v13_.v13) {
        v8 = 32;
      }
      else {
        if (v13_.v14 == nullptr) {
          goto LABEL_14;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v13_.v14 + v8))((__int64)v13_.v14);
    LABEL_14:
      result = v11_.v12;
      if (v11_.v12 == v11_.v11) {
        goto LABEL_9;
      }
      if (v11_.v12 != nullptr) {
        v10 = 40;
        return (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
            (__int64)result);
      }
      return result;
    }
  }
  result = v11_.v11;
  v11_.v11[0] = GameData_2068240;
  v11_.v11[1] = a1;
  v11_.v12 = v11_.v11;
LABEL_9:
  v10 = 32;
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
}

__int64 ProcUnitInfoFull_Unknown94(__int64 a1)
{
  _QWORD* v2;
  char v4[4];
  struct {
    __int64* v5;
    int v6;
    char gap20_[4];
    __int64 v7;
  } v5_;

  v2 = *(_QWORD**)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    if (v2[19] != 0) {
      v5_.v7 = 0;
      v5_.v5 = GameData_212d890[0] + 2;
      v5_.v6 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
          v2[1] + 16LL))((void*)(v4), v2 + 1, &v5_.v5);
    }
    v2[20] = 0;
    FloatingHelp_18af120(v2, (__int64*)(a1 + 848));
    GameRoutine_18af980((__int64)v2, (__int64*)(a1 + 848));
  }
  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  return LayoutAccessor_155e830_alt1(a1 + 848, 0);
}

__int64 game_menu_anonymous_ProcUnitInfoFull_LCall(__int64 a1)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  if (GameData_2259500 == game_menu_UnitGridSelectMenu_listeners_) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 1064);
  v8_.v8[0] = GameData_20682c0;
  v8_.v9 = v8_.v8;
  v5 = GameRoutine_15dff80(v3, 1, v8_.v8, 0);
  *(_QWORD*)(a1 + 1064) = v5;
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
  v5 = *(_QWORD*)(a1 + 1064);
LABEL_8:
  if (v5 == v3) {
    return 0;
  }
  GameMenu_16e9cd0(a1, v5);
  GameRoutine_160be20_alt2(a1);
  return 13;
}

__int64 game_menu_anonymous_ProcUnitInfoFull_RCall(__int64* a1)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  if (GameData_2259500 == game_menu_UnitGridSelectMenu_listeners_) {
    return 0;
  }
  v3 = a1[133];
  v8_.v8[0] = GameData_2068340;
  v8_.v9 = v8_.v8;
  v5 = game_gameui_UnitUtil_GetNext(v3, 1, v8_.v8, 0);
  a1[133] = v5;
  if (v8_.v9 == v8_.v8) {
    v6 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_8;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v6))((__int64)v8_.v9);
  v5 = a1[133];
LABEL_8:
  if (v5 == v3) {
    return 0;
  }
  GameMenu_16e9cd0((__int64)a1, v5);
  GameRoutine_160be20_alt1(a1);
  return 13;
}

__int64 ProcUnitInfoFull_Unknown141(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure_Invoke(__int64 a1,
                                                                 int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1336);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure0_Invoke(__int64 a1,
                                                                  int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = *(int**)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = *v2;
  *v2 = v5 + 1;
  v6 = *(_QWORD*)(v3 + 8 * v5 + 1312);
  v7 = *(_QWORD*)(v3 + 1064);
  GameRoutine_1605f00(v6);
  v8 = *(_QWORD*)(v6 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v6 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v6 + 32) = v7;
  *(_DWORD*)(v6 + 24) = 3;
  v12 = *a2;
  *(_BYTE*)(v6 + 64) = 0;
  *(_DWORD*)(v6 + 60) = v12;
  return GameRoutine_1606250((_QWORD*)v6);
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage00_closure1_Invoke(
    _QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 <= 2) {
    v4 = result[2];
    *v2 = v3 + 1;
    v6 = *(_QWORD*)(v4 + 8 * v3 + 1960);
    v7 = *(_QWORD*)(v4 + 1064);
    GameRoutine_1605f00(v6);
    v8 = *(_QWORD*)(v6 + 16);
    if (v8 != 0) {
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 != 0) {
        v10 = v9;
        v11 = *(_QWORD*)(v6 + 8);
        if (v11 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
    }
    *(_QWORD*)(v6 + 32) = v7;
    *(_DWORD*)(v6 + 24) = 3;
    v12 = *a2;
    *(_BYTE*)(v6 + 64) = 0;
    *(_DWORD*)(v6 + 60) = v12;
    return GameRoutine_1606250((_QWORD*)v6);
  }
  return result;
}

_QWORD*

game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure_Invoke(_QWORD* result,
                                                                 int* a2)
{
  __int64 v2;
  _QWORD* v4;
  char v5;
  int* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;

  if (*(int*)result[1] <= 6) {
    v2 = result[2];
    v4 = result;
    v5 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v6 = (int*)v4[1];
    v7 = v5 ^ 1;
    v8 = *v6;
    *v6 = v8 + 1;
    v9 = *(_QWORD*)(v2 + 8 * v8 + 1376);
    v10 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v9);
    v11 = *(_QWORD*)(v9 + 16);
    if (v11 != 0) {
      v12 = std___1___shared_weak_count_lock(v11);
      if (v12 != 0) {
        v13 = v12;
        v14 = *(_QWORD*)(v9 + 8);
        if (v14 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 40LL))(v14, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
    }
    *(_QWORD*)(v9 + 32) = v10;
    *(_DWORD*)(v9 + 24) = 4;
    v15 = *a2;
    *(_BYTE*)(v9 + 64) = v7 & 1;
    *(_DWORD*)(v9 + 60) = v15;
    return GameRoutine_1606250((_QWORD*)v9);
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure0_Invoke(
    _QWORD* result, unsigned int* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  char v8;
  int* v9;
  _QWORD* v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v2 = result[3];
  v3 = *a2;
  v4 = *(_QWORD*)(v2 + 1064);
  v5 = *(_QWORD*)(v4 + 1456);
  if (((v3 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(v4 + 1464) - v5) >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) != 0 &&
      *(int*)result[1] <= 6) {
    v6 = result;
    v8 = GameRoutine_157b780(*(_QWORD*)(v2 + 1064));
    v9 = (int*)v6[1];
    v10 = v6;
    v11 = v8 ^ 1;
    v12 = *v9;
    *v9 = v12 + 1;
    v13 = *(_QWORD*)(v2 + 8 * v12 + 1376);
    v14 = *(_QWORD*)(v2 + 1064);
    GameRoutine_1605f00(v13);
    v15 = *(_QWORD*)(v13 + 16);
    if (v15 != 0) {
      v16 = std___1___shared_weak_count_lock(v15);
      if (v16 != 0) {
        v17 = v16;
        v18 = *(_QWORD*)(v13 + 8);
        if (v18 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 40LL))(v18, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
    }
    *(_QWORD*)(v13 + 32) = v14;
    *(_DWORD*)(v13 + 24) = 4;
    v19 = *a2;
    *(_BYTE*)(v13 + 64) = v11 & 1;
    *(_DWORD*)(v13 + 60) = v19;
    result = GameRoutine_1606250((_QWORD*)v13);
    ++*(_DWORD*)v10[2];
  }
  return result;
}

_QWORD* game_menu_anonymous_ProcUnitInfoFull_UpdatePage01_closure2_Invoke(
    _QWORD* result, int* a2)
{
  int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;

  v2 = (int*)result[1];
  v3 = *v2;
  if ((int)v3 > 2) {
    return result;
  }
  v4 = result[2];
  *v2 = v3 + 1;
  v6 = *(_QWORD*)(v4 + 1064);
  v7 = *(_QWORD*)(v4 + 8 * v3 + 1824);
  GameRoutine_1605f00(v7);
  v8 = *(_QWORD*)(v7 + 16);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      v11 = *(_QWORD*)(v7 + 8);
      if (v11 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(v11, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  *(_QWORD*)(v7 + 32) = v6;
  *(_DWORD*)(v7 + 24) = 7;
  v12 = *a2;
  *(_DWORD*)(v7 + 60) = *a2;
  v13 = GameData_212c880[0];
  v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                              8LL * (v12 & 0xFFF)) +
                   592LL);
  if (v14 != 0) {
    game_gameui_Util_GetMorphRage(v6, v14);
    GameRoutine_1606250((_QWORD*)v7);
  }
  else {
    UnitInfoMenuItem_16061b0(v7, (__int64)"MID_Sys_Empty");
  }
  v15 = *(_QWORD*)(v4 + 1064);
  v16 = *(_QWORD*)(v4 + 8 * v3 + 1848);
  GameRoutine_1605f00(v16);
  v17 = *(_QWORD*)(v16 + 16);
  if (v17 != 0) {
    v18 = std___1___shared_weak_count_lock(v17);
    if (v18 != 0) {
      v19 = v18;
      v20 = *(_QWORD*)(v16 + 8);
      if (v20 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 40LL))(v20, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
  }
  *(_QWORD*)(v16 + 32) = v15;
  v21 = *v13;
  *(_DWORD*)(v16 + 24) = 8;
  v22 = *a2;
  *(_DWORD*)(v16 + 60) = *a2;
  v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (v22 & 0xFFF)) +
                   592LL);
  if (v23 != 0) {
    if (*(_WORD*)(v23 + 128) != 0) {
      v24 = *(_QWORD*)(*(_QWORD*)(v23 + 136) + 8LL);
      game_gameui_Util_GetMorphRage(v15, v23);
      if (v24 != 0) {
        GameRoutine_1606250((_QWORD*)v16);
        goto LABEL_23;
      }
    }
    else {
      game_gameui_Util_GetMorphRage(v15, v23);
    }
  }
  UnitInfoMenuItem_16061b0(v16, (__int64)"MID_Sys_Empty");
LABEL_23:
  v25 = *(_QWORD*)(v4 + 1064);
  v26 = *(_QWORD*)(v4 + 8 * v3 + 1872);
  GameRoutine_1605f00(v26);
  v27 = *(_QWORD*)(v26 + 16);
  if (v27 != 0) {
    v28 = std___1___shared_weak_count_lock(v27);
    if (v28 != 0) {
      v29 = v28;
      v30 = *(_QWORD*)(v26 + 8);
      if (v30 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v30 + 40LL))(v30, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
        std___1___shared_weak_count___release_weak(v29);
      }
    }
  }
  *(_QWORD*)(v26 + 32) = v25;
  v31 = *v13;
  *(_DWORD*)(v26 + 24) = 9;
  v32 = *a2;
  *(_DWORD*)(v26 + 60) = *a2;
  v33 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v32 & 0xFFF)) +
                   592LL);
  if (v33 != 0 &&
      (*(_WORD*)game_gameui_Util_GetMorphRage(v25, v33) & 0xFFF) != 0) {
    return GameRoutine_1606250((_QWORD*)v26);
  }
  else {
    return (_QWORD*)UnitInfoMenuItem_16061b0(v26, (__int64)"MID_Sys_Empty");
  }
}

unsigned __int64

game_menu_anonymous_ProcUnitInfoFull_UpdatePage04_closure_Invoke(
    unsigned __int64 result, int* a2, __int64* a3)
{
  _DWORD* v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  char* v15;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  char* v20;

  v3 = *(_DWORD**)(result + 8);
  v4 = (unsigned int)*v3;
  if ((unsigned int)v4 > 9) {
    goto LABEL_32;
  }
  v5 = *a2;
  v6 = result;
  v7 = *a3;
  v8 = **(_QWORD**)(result + 16);
  v9 = *(_QWORD*)(*(_QWORD*)(result + 24) + 16 * v4);
  if (v5 >= 1) {
    v10 = game_util_Format("%d", v5);
    result = strlen(v10);
    if (result >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
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
      v19[1] = v11;
      v20 = v12;
      v19[0] = v13 | 1;
    }
    else {
      LOBYTE(v19[0]) = 2 * result;
      v12 = (char*)v19 + 1;
      if (result == 0) {
        goto LABEL_13;
      }
    }
    result = memmove(v12, v10, v11);
  LABEL_13:
    v12[v11] = 0;
    v14 = v19[0] & 1;
    if ((v19[0] & 1) != 0) {
      v15 = v20;
    }
    else {
      v15 = (char*)v19 + 1;
    }
    if (v9 != 0 && v15 != nullptr) {
      result = ui_LayoutAccessor_FindTextBox(v8, v9);
      if (result != 0) {
        result = GameRoutine_156c5d0(result, v15, 0);
        v14 = v19[0] & 1;
      }
    }
    if (v14 != 0 && v20 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v20);
    }
    goto LABEL_27;
  }
  result = LayoutAccessor_1562060(**(_QWORD**)(result + 16), v9,
                                  "MID_Sys_ValueEmptyLong");
LABEL_27:
  if (v7 != 0) {
    v18 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL * **(int**)(v6 + 8) + 8);
    if (v18 != 0) {
      result = ui_LayoutAccessor_FindTextBox(**(_QWORD**)(v6 + 16), v18);
      if (result != 0) {
        result = GameRoutine_156c5d0(result, v7, 0);
      }
    }
  }
  v3 = *(_DWORD**)(v6 + 8);
  LODWORD(v4) = *v3;
LABEL_32:
  *v3 = v4 + 1;
  return result;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcUnitInfoFull_UpdateTab_closure_Invoke(PSEUDO_X8 x8_,
                                                              __int64 a1,
                                                              int* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  __int64 v5;
  char* v6;
  unsigned __int64 result;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  int v13;
  int v14;
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

  v4 = (&GameData_20680f0)[4 * *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1200LL) +
                                       4LL * *a2)];
  if (v4 != nullptr && *v4 != 0) {
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v18 = -1;
    v5 = *msg_MessageManager_instance__ptr[0];
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v12[0] = msg_TagSelector_vtable;
    v12[1] = 0xFFFF0001FFFF0000LL;
    v12[2] = 0xFFFF0004FFFF0002LL;
    v12[3] = 0xFFFF0006FFFF0005LL;
    v27 = 8;
    v13 = -65529;
    v14 = -65528;
    v6 = (char*)GameRoutine_a4dbe0(v5, v4, 0, v12);
  }
  else {
    v6 = msg_MessageManager_empty_text_;
  }
  result = strlen(v6);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(result);
  }
  v8 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (result | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10, 16, 0);
    a3[1] = v8;
    a3[2] = v11;
    *a3 = v10 | 1;
    v9 = (char*)v11;
  }
  else {
    *(_BYTE*)a3 = 2 * result;
    v9 = (char*)a3 + 1;
    if (result == 0) {
      goto LABEL_14;
    }
  }
  result = memmove(v9, v6, v8);
LABEL_14:
  v9[v8] = 0;
  {
    result;
    return;
  }
}

void ProcUnitInfoFull_16165a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD v39[2];
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
  v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = *(_QWORD*)(a1 + 856);
  v39[0] = "L_OverBlaze";
  v39[1] = 11;
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v3),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
    v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 848);
      v7 = v5;
      if (v6 != 0) {
        GameRoutine_15b71b0((void*)(&v40_.v40), v6, (__int64)v39),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v7),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
            v23 =
                COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      if (v6 != 0 && v40_.v41 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v40_.v41),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w")),
        v23 = COERCE_AS(__typeof__(v23), PSEUDO_REGISTER(float, "s1", "=w"));
        v9 = v40_.v40;
        if (v40_.v41 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v40_.v41),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (v8 != 0 && v9 != 0) {
          ui_control_1886790((_QWORD*)v9),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v11 = *(_QWORD*)(a2 + 16);
          v12 = *(_QWORD*)(a2 + 24);
          if (v11 != v12) {
            v13 = v10;
            v14 = 0;
            v15 = 0x1.fffffe0000000p+127f;
            while (1) {
              v17 = *(_QWORD*)(v11 + 24);
              if (v17 != 0 &&
                  (v18 = std___1___shared_weak_count_lock_alt1(v17)) != 0) {
                v19 = v18;
                ui_control_1886790(*(_QWORD**)(v11 + 16)),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v21 = v20;
                if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v19),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                v22 = *(_QWORD*)(v11 + 24);
                if (v22 == 0) {
                LABEL_31:
                  if (((*(unsigned __int8*)0x370LL) & 1) != 0) {
                    v28 = (*(_QWORD*)0x378LL);
                  }
                  else {
                    v28 = (unsigned __int64)(*(unsigned __int8*)0x370LL) >> 1;
                  }
                  goto LABEL_34;
                }
              }
              else {
                ui_control_1886790(nullptr),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                v21 = v23;
                v22 = *(_QWORD*)(v11 + 24);
                if (v22 == 0) {
                  goto LABEL_31;
                }
              }
              v24 = std___1___shared_weak_count_lock_alt1(v22),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              if (v24 == 0) {
                goto LABEL_31;
              }
              v25 = *(_QWORD*)(v11 + 16);
              v26 = *(unsigned __int8*)(v25 + 880);
              v27 = *(_QWORD*)(v25 + 888);
              if ((v26 & 1) != 0) {
                v28 = v27;
              }
              else {
                v28 = v26 >> 1;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v29 = v24;
                (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v29),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v23 = COERCE_AS(__typeof__(v23),
                                    PSEUDO_REGISTER(float, "s1", "=w"));
              }
            LABEL_34:
              if (v28 == 0 || (float)(v21 + 0x1.e000000000000p+5f) > v13) {
                v31 =
                    std___1___shared_weak_count_lock_alt1(*(_QWORD*)(v11 + 24)),
                v10 = COERCE_AS(__typeof__(v10),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s1", "=w")),
                v23 = COERCE_AS(__typeof__(v23),
                                PSEUDO_REGISTER(float, "s1", "=w"));
                v32 = *(_QWORD*)(v11 + 16);
                v33 = *(unsigned __int8*)(v32 + 880);
                v34 = *(_QWORD*)(v32 + 888);
                if ((v33 & 1) == 0) {
                  v34 = v33 >> 1;
                }
                if (v34 != 0) {
                  if ((v33 & 1) == 0) {
                    *(_BYTE*)(v32 + 881) = 0;
                    goto LABEL_45;
                  }
                  **(_BYTE**)(v32 + 896) = 0;
                  *(_QWORD*)(v32 + 888) = 0;
                  LOBYTE(v33) = *(_BYTE*)(v32 + 880);
                }
                if ((v33 & 1) != 0) {
                  *(_QWORD*)(v32 + 888) = 11;
                  v35 = *(char**)(v32 + 896);
                }
                else {
                LABEL_45:
                  *(_BYTE*)(v32 + 880) = 22;
                  v35 = (char*)(v32 + 881);
                }
                strcpy(v35, "L_OverBlaze");
                if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v36 = v31;
                  (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v36),
                      v10 = COERCE_AS(__typeof__(v10),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v23 = COERCE_AS(__typeof__(v23),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                }
                v16 = vabds_f32(v21, v13);
                if (v16 < v15) {
                  v15 = v16;
                  v14 = v11;
                }
              }
              v11 += 48;
              if (v11 == v12) {
                if (v14 != 0) {
                  v37 = *(unsigned __int8*)(v9 + 904);
                  if (*(_QWORD*)(v14 + 8) != 0) {
                    v38 = *(_QWORD*)(v9 + 912);
                    if ((v37 & 1) == 0) {
                      v38 = v37 >> 1;
                    }
                    if (v38 != 0) {
                      if ((v37 & 1) != 0) {
                        **(_BYTE**)(v9 + 920) = 0;
                        *(_QWORD*)(v9 + 912) = 0;
                      }
                      else {
                        *(_WORD*)(v9 + 904) = 0;
                      }
                    }
                    GameRoutine_60a060((char*)(v9 + 904), *(_QWORD*)v14,
                                       *(_QWORD*)(v14 + 8)),
                        v10 = COERCE_AS(__typeof__(v10),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v23 = COERCE_AS(__typeof__(v23),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                  }
                  else if ((v37 & 1) != 0) {
                    **(_BYTE**)(v9 + 920) = 0;
                    *(_QWORD*)(v9 + 912) = 0;
                  }
                  else {
                    *(_WORD*)(v9 + 904) = 0;
                  }
                }
                goto LABEL_61;
              }
            }
          }
        }
        else {
        LABEL_61:
          if (v8 == 0) {
            return;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v8),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v23 = COERCE_AS(__typeof__(v23),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  }
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcUnitInfoFull_UpdateCursorRoute_closure_Invoke(
    PSEUDO_X8 x8_, __int64 a1, __int64 a2, unsigned int* a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    GameRoutine_1616a00(a4, *(_QWORD*)(a1 + 8), a2, *a3);
    return;
  }
}

void ProcUnitInfoFull_1616a00(const char** a1, __int64 a2, _QWORD* a3, int a4)
{
  __int64 v4;
  unsigned __int64 v5;
  int v9;
  int v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD v42[2];
  _QWORD v43[2];
  struct {
    __int64* v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v44_;
  struct {
    const char* v48;
    __int64 v49;
  } v48_;

  v4 = *(_QWORD*)(a2 + 1088);
  v5 = *(int*)(a2 + 1076);
  if (v5 < (*(_QWORD*)(a2 + 1096) - v4) >> 2) {
    v5 = *(int*)(v4 + 4 * v5);
  }
  v9 = *(_DWORD*)(*(_QWORD*)(a2 + 1200) + 4 * v5);
  if (v9 != 0) {
    if (a4 != 2 || v9 != 2) {
      goto LABEL_80;
    }
    v10 = *(_DWORD*)(a2 + 2192);
    if (v10 != 1) {
      if (v10 == 2 && ((ProcUnitInfoFull_16171e0(
                            a2, a3, "L_Page02/L_LegionInfo/L_MenuItem_Name") &
                        1) != 0 ||
                       (ProcUnitInfoFull_16171e0(
                            a2, a3, "L_Page02/L_LegionInfo/L_MenuItem_Gambit") &
                        1) != 0)) {
      LABEL_41:
        v11 = *(_QWORD*)(a2 + 856);
        v48_.v48 = "L_OverBlaze";
        v48_.v49 = 11;
        if (v11 != 0) {
          goto LABEL_42;
        }
      }
    LABEL_80:
      *a1 = nullptr;
      a1[1] = nullptr;
      return;
    }
    if (*(_BYTE*)(a2 + 2196) == 1) {
      if ((ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page02/L_Animal/L_MenuItem_Attack00") &
           1) != 0 ||
          (ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page02/L_Animal/L_MenuItem_Attack01") &
           1) != 0) {
        goto LABEL_41;
      }
      v12 = "L_Page02/L_Animal/L_MenuItem_Morph";
    }
    else {
      if ((ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page02/L_Animal/L_MenuItem_Name") &
           1) != 0) {
        goto LABEL_41;
      }
      v12 = "L_Page02/L_Animal/L_MenuItem_Skill";
    }
    if ((ProcUnitInfoFull_16171e0(a2, a3, v12) & 1) == 0) {
      goto LABEL_80;
    }
    goto LABEL_41;
  }
  if (a4 != 3) {
    if (a4 != 0) {
      goto LABEL_80;
    }
    if ((ProcUnitInfoFull_16171e0(a2, a3,
                                  "L_Page00/L_BattleStatus/L_Status00") &
         1) == 0 &&
        (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status00") &
         1) == 0) {
      if ((ProcUnitInfoFull_16171e0(a2, a3,
                                    "L_Page00/L_BasicStatus/L_Status00") &
           1) != 0) {
        if (*(_BYTE*)(a2 + 1984) == 1) {
          v23 = "L_Page00/L_GrowthRate/L_Status04";
          v24 = 32;
        }
        else {
          v23 = "L_Page00/L_BattleStatus/L_Status04";
          v24 = 34;
        }
        v48_.v48 = v23;
        v48_.v49 = v24;
        game_16073d0((void*)((__int64*)&v44_.v44), (__int64*)(a2 + 848));
      LABEL_48:
        v21 = v44_.v45;
        *a1 = nullptr;
        a1[1] = nullptr;
        if (v21 != 0) {
          v22 = std___1___shared_weak_count_lock_alt1(v21);
          a1[1] = (const char*)v22;
          if (v22 != 0) {
            *a1 = (const char*)v44_.v44;
          }
          if (v44_.v45 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v44_.v45);
          }
        }
        return;
      }
      goto LABEL_80;
    }
    v11 = *(_QWORD*)(a2 + 856);
    v48_.v48 = "L_Move";
    v48_.v49 = 6;
    if (v11 == 0) {
      goto LABEL_80;
    }
  LABEL_42:
    v18 = std___1___shared_weak_count_lock_alt1(v11);
    if (v18 == 0) {
      goto LABEL_80;
    }
    v19 = *(_QWORD*)(a2 + 848);
    v20 = v18;
    if (v19 != 0) {
      GameRoutine_15b71b0_alt1((void*)((__int64*)&v44_.v44));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
    }
    if (v19 == 0) {
      goto LABEL_80;
    }
    goto LABEL_48;
  }
  if ((ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_TotalNum") &
       1) != 0) {
    v11 = *(_QWORD*)(a2 + 856);
    v48_.v48 = "L_Page00/L_MasteryInfo/L_MasteryInfoItem06";
    v48_.v49 = 42;
    if (v11 == 0) {
      goto LABEL_80;
    }
    goto LABEL_42;
  }
  if ((ProcUnitInfoFull_16171e0(a2, a3, "L_OverBlaze") & 1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status05") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status06") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status07") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BattleStatus/L_Status08") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status05") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status06") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status07") &
       1) != 0 ||
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_GrowthRate/L_Status08") &
       1) != 0) {
    v44_.v46 = 0;
    v44_.v47 = 0;
    v44_.v44 = (__int64*)(a2 + 848);
    v44_.v45 = 0;
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Equip",
                             16);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item00",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item01",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item02",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item03",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item04",
                             17);
    ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Item05",
                             17);
    ProcUnitInfoFull_16172f0(
        (__int64)&v44_.v44,
        (__int64)"L_Page00/L_MasteryInfo/L_MasteryInfoItem00", 42);
    v13 = a3[1];
    v43[0] = *a3;
    v43[1] = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                memory_order_relaxed);
    }
    ProcUnitInfoFull_1617540(&v48_.v48, (__int64)&v44_.v44, (__int64)v43);
    v14 = v48_.v49;
    *a1 = nullptr;
    a1[1] = nullptr;
    if (v14 != 0) {
      v15 = std___1___shared_weak_count_lock_alt1(v14);
      a1[1] = (const char*)v15;
      if (v15 != 0) {
        v16 = v48_.v48;
        *a1 = v48_.v48;
        v17 = v16 == nullptr;
      }
      else {
        v17 = true;
      }
      std___1___shared_weak_count___release_weak_alt1(v14);
    }
    else {
      v15 = 0;
      v17 = true;
    }
    if (v13 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
    if (!v17) {
      v34 = v44_.v45;
      if (v44_.v45 == 0) {
        return;
      }
      v35 = v44_.v46;
      if (v44_.v45 != v44_.v46) {
        do {
          v36 = *(_QWORD*)(v35 - 8);
          if (v36 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v36);
          }
          v35 -= 16;
        } while (v35 != v34);
      }
      goto LABEL_98;
    }
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
    v25 = v44_.v45;
    if (v44_.v45 != 0) {
      v26 = v44_.v46;
      if (v44_.v45 != v44_.v46) {
        do {
          v33 = *(_QWORD*)(v26 - 8);
          if (v33 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v33);
          }
          v26 -= 16;
        } while (v26 != v25);
      }
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v25);
    }
  }
  if ((ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_Status05") &
       1) == 0 &&
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_Status06") &
       1) == 0 &&
      (ProcUnitInfoFull_16171e0(a2, a3, "L_Page00/L_BasicStatus/L_Status07") &
       1) == 0) {
    goto LABEL_80;
  }
  v28 = (__int64*)(a2 + 848);
  v44_.v46 = 0;
  v44_.v47 = 0;
  v44_.v44 = v28;
  v44_.v45 = 0;
  ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Blood00",
                           18);
  ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Blood01",
                           18);
  ProcUnitInfoFull_16172f0((__int64)&v44_.v44, (__int64)"L_Page00/L_Blood02",
                           18);
  v29 = a3[1];
  v42[0] = *a3;
  v42[1] = v29;
  if (v29 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                              memory_order_relaxed);
  }
  ProcUnitInfoFull_1617540(&v48_.v48, (__int64)&v44_.v44, (__int64)v42);
  v30 = v48_.v49;
  if (v48_.v49 != 0) {
    v31 = std___1___shared_weak_count_lock_alt1(v48_.v49);
    if (v31 != 0) {
      v32 = v48_.v48;
    }
    else {
      v32 = nullptr;
    }
    std___1___shared_weak_count___release_weak_alt1(v30);
  }
  else {
    v32 = nullptr;
    v31 = 0;
  }
  if (v29 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v29);
  }
  if (v32 != nullptr) {
    *a1 = v32;
    a1[1] = (const char*)v31;
  }
  else {
    game_16073d0((void*)((__int64*)&v48_.v48), v28);
    v40 = v48_.v49;
    *a1 = nullptr;
    a1[1] = nullptr;
    if (v40 != 0) {
      v41 = std___1___shared_weak_count_lock_alt1(v40);
      a1[1] = (const char*)v41;
      if (v41 != 0) {
        *a1 = v48_.v48;
      }
      if (v48_.v49 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v48_.v49);
      }
    }
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
    }
  }
  v34 = v44_.v45;
  if (v44_.v45 != 0) {
    v37 = v44_.v46;
    if (v44_.v45 != v44_.v46) {
      do {
        v39 = *(_QWORD*)(v37 - 8);
        if (v39 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v39);
        }
        v37 -= 16;
      } while (v37 != v34);
    }
  LABEL_98:
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v34);
  }
}

__int64 ProcUnitInfoFull_16171e0(__int64 a1, _QWORD* a2, const char* a3)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  unsigned int v12;
  _QWORD v13[2];
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v13[0] = a3;
  v13[1] = strlen_alt1(a3);
  v5 = *(_QWORD*)(a1 + 856);
  if (v5 == 0) {
    return 0;
  }
  v6 = std___1___shared_weak_count_lock_alt1(v5);
  if (v6 == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(a1 + 848);
  v8 = v6;
  if (v7 != 0) {
    GameRoutine_15b71b0((void*)(&v14_.v14), v7, (__int64)v13);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 == 0) {
      return 0;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
    if (v7 == 0) {
      return 0;
    }
  }
  if (v14_.v15 == 0) {
    return 0;
  }
  v9 = std___1___shared_weak_count_lock_alt1(v14_.v15);
  if (v9 != 0) {
    v10 = v14_.v14;
  }
  else {
    v10 = 0;
  }
  if (v14_.v15 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v14_.v15);
  }
  result = *a2 == v10;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v12 = result;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
    result = v12;
  }
  if (v10 == 0) {
    return 0;
  }
  return result;
}

__int64 ProcUnitInfoFull_16172f0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64* v3;
  __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  signed __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;
  _QWORD v31[2];

  v3 = *(unsigned __int64**)a1;
  v31[0] = a2;
  v31[1] = a3;
  result = v3[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v6 = *v3;
      v7 = result;
      if (v6 != 0) {
        result = X8CALL_X0(
            __int64, GameRoutine_15b71b0((void*)(&v29_.v29), v6, (__int64)v31));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v6 == 0) {
          return result;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        result = std___1___shared_weak_count___release_weak_alt1(v7);
        if (v6 == 0) {
          return result;
        }
      }
      result = v29_.v30;
      if (v29_.v30 != 0) {
        if (*(_QWORD*)(v29_.v30 + 8) != -1) {
          v28[0] = 0;
          v8 = std___1___shared_weak_count_lock_alt1(v29_.v30);
          v28[1] = v8;
          if (v8 != 0) {
            v9 = v8;
            v28[0] = v29_.v29;
            v10 = FloatingHelp_18ade60(v28);
            if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              std___1___shared_weak_count___release_weak_alt1(v9);
            }
            if ((v10 & 1) == 0) {
              goto LABEL_35;
            }
            goto LABEL_17;
          }
          if ((FloatingHelp_18ade60(v28) & 1) != 0) {
          LABEL_17:
            v11 = *(_QWORD**)(a1 + 16);
            v12 = *(_QWORD*)(a1 + 24);
            if ((unsigned __int64)v11 >= v12) {
              v15 = *(_QWORD*)(a1 + 8);
              v16 = (signed __int64)v11 - v15;
              v17 = ((__int64)v11 - v15) >> 4;
              v18 = v17 + 1;
              if ((unsigned __int64)(v17 + 1) >> 60 != 0) {
                GameRoutine_16176c0();
              }
              v19 = v12 - v15;
              if (v19 >> 3 > v18) {
                v18 = v19 >> 3;
              }
              if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF0LL) {
                v20 = 0xFFFFFFFFFFFFFFFLL;
              }
              else {
                v20 = v18;
              }
              if (v20 >> 60 != 0) {
                GameRoutine_60a210_alt1();
              }
              v21 = fw_memory_g_heap_manager_ptr;
              v22 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v20, 16, 0);
              v23 = v29_.v30;
              v24 = (_QWORD*)(v22 + v16);
              v25 = v22 + 16 * v20;
              *v24 = v29_.v29;
              v24[1] = v23;
              if (v23 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16),
                                          1u, memory_order_relaxed);
                v15 = *(_QWORD*)(a1 + 8);
                v16 = *(_QWORD*)(a1 + 16) - v15;
                v17 = v16 >> 4;
              }
              v26 = (__int64)&v24[-2 * v17];
              v14 = v24 + 2;
              memcpy_alt1(v26, v15, v16);
              *(_QWORD*)(a1 + 8) = v26;
              *(_QWORD*)(a1 + 16) = v14;
              *(_QWORD*)(a1 + 24) = v25;
              if (v15 != 0) {
                v27 = 128;
                if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
                  v27 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v21 + v27, v15);
              }
            }
            else {
              *v11 = v29_.v29;
              v13 = v29_.v30;
              v11[1] = v29_.v30;
              if (v13 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16),
                                          1u, memory_order_relaxed);
              }
              v14 = v11 + 2;
            }
            *(_QWORD*)(a1 + 16) = v14;
          }
        }
      LABEL_35:
        result = v29_.v30;
        if (v29_.v30 != 0) {
          return std___1___shared_weak_count___release_weak_alt1(v29_.v30);
        }
      }
    }
  }
  return result;
}

_QWORD* ProcUnitInfoFull_1617540(_QWORD* result, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
  v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = *(_QWORD*)(a2 + 8);
  v4 = *(_QWORD*)(a2 + 16);
  *result = 0;
  result[1] = 0;
  if (v3 != v4) {
    v5 = result;
    result = *(_QWORD**)(a3 + 8);
    if (result != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
      v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
      if (result != nullptr) {
        v8 = (__int64)result;
        result = *(_QWORD**)a3;
        if (*(_QWORD*)a3 != 0) {
          result = ui_control_1886790(result),
          v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s1", "=w")),
          v9 = COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
          v10 = *(_QWORD*)(a2 + 8);
          v11 = *(_QWORD*)(a2 + 16);
          if (v10 != v11) {
            v12 = v9;
            v13 = 0x1.fffffe0000000p+127f;
            do {
              v15 = *(_QWORD**)v10;
              v14 = *(_QWORD*)(v10 + 8);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                        memory_order_relaxed);
              v16 = std___1___shared_weak_count_lock_alt1(v14),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
              ui_control_1886790(v15),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(float, "s1", "=w")),
                  v9 = COERCE_AS(__typeof__(v9),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
              v18 = v17;
              if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v9 = COERCE_AS(__typeof__(v9),
                                   PSEUDO_REGISTER(float, "s1", "=w"));
                std___1___shared_weak_count___release_weak_alt1(v16),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(float, "s1", "=w")),
                    v9 = COERCE_AS(__typeof__(v9),
                                   PSEUDO_REGISTER(float, "s1", "=w"));
              }
              v19 = vabds_f32(v12, v18);
              if (v19 < v13) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16),
                                          1u, memory_order_relaxed);
                v20 = v5[1];
                *v5 = v15;
                v5[1] = v14;
                if (v20 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v20),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v9 = COERCE_AS(__typeof__(v9),
                                     PSEUDO_REGISTER(float, "s1", "=w"));
                }
                v13 = v19;
              }
              result =
                  (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v14),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
              v10 += 16;
            } while (v10 != v11);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v9 =
                  COERCE_AS(__typeof__(v9), PSEUDO_REGISTER(float, "s1", "=w"));
          return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v8);
        }
      }
    }
  }
  return result;
}

__int64 ProcUnitInfoFull_1617700(__int64 a1, const char* a2, int* a3, int* a4)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v8 = strlen_alt1(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2();
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
    v19_.v20 = v9;
    v19_.v21 = v10;
    v19_.v19 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19_.v19) = 2 * v8;
  v10 = (char*)&v19_.v19 + 1;
  if (v8 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v10, (__int64)a2, v9);
  }
  v10[v9] = 0;
  v12 = *a3;
  v13 = *a4;
  if ((v19_.v19 & 1) != 0) {
    v16 = (__int64)v19_.v21;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v19_.v21, v19_.v20);
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  else {
    v14 = v19_.v19;
    v15 = v19_.v20;
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    *(_QWORD*)a1 = v14;
    *(_QWORD*)(a1 + 8) = v15;
    *(_QWORD*)(a1 + 16) = v19_.v21;
  }
  return a1;
}

__int64 ProcUnitInfoFull_1617860(__int64** a1, __int64 a2, __int64 a3,
                                 __int64 a4)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v4 = (char*)a1[1] - (char*)*a1;
  v5 = (v4 >> 5) + 1;
  if (v5 >> 59 != 0) {
    GameRoutine_16176e0();
  }
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (char*)a1[2] - (char*)*a1;
  if (v8 >> 4 > v5) {
    v5 = v8 >> 4;
  }
  if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFE0LL) {
    v9 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v9 = v5;
  }
  if (v9 != 0) {
    if (v9 >> 59 != 0) {
      GameRoutine_60a210(a1);
    }
    v10 = a2;
    v11 = a3;
    v12 = a4;
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         32 * v9, 16, 0);
    a4 = v12;
    a3 = v11;
    a2 = v10;
  }
  else {
    v13 = 0;
  }
  v14 = v13 + v4;
  v15 = v13 + 32 * v9;
  GameRoutine_1617a20(v13 + v4, a2, a3, a4);
  v16 = *a1;
  v17 = a1[1];
  v18 = v14 + 32;
  v19 = (_QWORD*)(v14 + (char*)*a1 - (char*)v17);
  if (v17 != *a1) {
    v20 = *a1;
    v21 = v19;
    do {
      v22 = *v20;
      v23 = v20[2];
      v21[1] = v20[1];
      v21[2] = v23;
      *v21 = v22;
      v20[1] = 0;
      v20[2] = 0;
      *v20 = 0;
      v24 = v20[3];
      v20 += 4;
      v21[3] = v24;
      v21 += 4;
    } while (v20 != v17);
    do {
      if ((*(_BYTE*)v16 & 1) != 0) {
        v25 = v16[2];
        if (v25 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v26, v25);
        }
      }
      v16 += 4;
    } while (v16 != v17);
    v16 = *a1;
  }
  *a1 = v19;
  a1[1] = (__int64*)v18;
  a1[2] = (__int64*)v15;
  if (v16 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v27, v16);
  }
  return v18;
}

__int64 ProcUnitInfoFull_1617a20(__int64 a1, const char* a2, int* a3, int* a4)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
  } v19_;

  v8 = strlen_alt1(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2();
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
    v19_.v20 = v9;
    v19_.v21 = v10;
    v19_.v19 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19_.v19) = 2 * v8;
  v10 = (char*)&v19_.v19 + 1;
  if (v8 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v10, (__int64)a2, v9);
  }
  v10[v9] = 0;
  v12 = *a3;
  v13 = *a4;
  if ((v19_.v19 & 1) != 0) {
    v16 = (__int64)v19_.v21;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v19_.v21, v19_.v20);
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    if (v16 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
    }
  }
  else {
    v14 = v19_.v19;
    v15 = v19_.v20;
    *(_DWORD*)(a1 + 24) = v12;
    *(_DWORD*)(a1 + 28) = v13;
    *(_QWORD*)a1 = v14;
    *(_QWORD*)(a1 + 8) = v15;
    *(_QWORD*)(a1 + 16) = v19_.v21;
  }
  return a1;
}

__int64 ProcUnitInfoFull_1617b80(__int64* a1, const char* a2, int* a3)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  const char* v9;
  int* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v3 = a1[1] - *a1;
  v4 = (v3 >> 5) + 1;
  if (v4 >> 59 != 0) {
    GameRoutine_16176e0_alt1();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = a1[2] - *a1;
  if (v7 >> 4 > v4) {
    v4 = v7 >> 4;
  }
  if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFE0LL) {
    v8 = 0x7FFFFFFFFFFFFFFLL;
  }
  else {
    v8 = v4;
  }
  if (v8 != 0) {
    if (v8 >> 59 != 0) {
      GameRoutine_60a210_alt1();
    }
    v9 = a2;
    v10 = a3;
    v11 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v8, 16, 0);
    a3 = v10;
    a2 = v9;
  }
  else {
    v11 = 0;
  }
  v12 = v11 + v3;
  v13 = v11 + 32 * v8;
  ProcUnitInfoFull_1617d40(v11 + v3, a2, a3);
  v14 = *a1;
  v15 = (__int64*)a1[1];
  v16 = v12 + 32;
  v17 = (_QWORD*)(v12 + *a1 - (_QWORD)v15);
  if (v15 != (__int64*)*a1) {
    v18 = (__int64*)*a1;
    v19 = v17;
    do {
      v20 = *v18;
      v21 = v18[2];
      v19[1] = v18[1];
      v19[2] = v21;
      *v19 = v20;
      v18[1] = 0;
      v18[2] = 0;
      *v18 = 0;
      v22 = v18[3];
      v18 += 4;
      v19[3] = v22;
      v19 += 4;
    } while (v18 != v15);
    do {
      if ((*(_BYTE*)v14 & 1) != 0) {
        v23 = *(_QWORD*)(v14 + 16);
        if (v23 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v24 = 128;
          }
          else {
            v24 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v24, v23);
        }
      }
      v14 += 32;
    } while ((__int64*)v14 != v15);
    v14 = *a1;
  }
  *a1 = (__int64)v17;
  a1[1] = v16;
  a1[2] = v13;
  if (v14 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v25, v14);
  }
  return v16;
}

__int64 ProcUnitInfoFull_1617d40(__int64 a1, const char* a2, int* a3)
{
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v15;
    unsigned __int64 v16;
    char* v17;
  } v15_;

  v6 = strlen_alt1(a2);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt2();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0);
    v15_.v16 = v7;
    v15_.v17 = v8;
    v15_.v15 = v9 | 1;
    goto LABEL_9;
  }
  LOBYTE(v15_.v15) = 2 * v6;
  v8 = (char*)&v15_.v15 + 1;
  if (v6 != 0) {
  LABEL_9:
    memcpy_alt1((__int64)v8, (__int64)a2, v7);
  }
  v8[v7] = 0;
  v10 = *a3;
  if ((v15_.v15 & 1) != 0) {
    v12 = (__int64)v15_.v17;
    fw_text_String_CopyTerminated((__int64*)a1, (__int64)v15_.v17, v15_.v16);
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
    }
  }
  else {
    v11 = v15_.v16;
    *(_QWORD*)a1 = v15_.v15;
    *(_QWORD*)(a1 + 8) = v11;
    *(_QWORD*)(a1 + 16) = v15_.v17;
    *(_DWORD*)(a1 + 24) = v10;
    *(_DWORD*)(a1 + 28) = -1;
  }
  return a1;
}

__attribute__((swiftcall)) void

game_menu_anonymous_ProcUnitInfoFull_OnOpened_closure_Invoke(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             _QWORD* a2,
                                                             int* a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  {
    GameRoutine_1616a00_alt1(a4, *(_QWORD*)(a1 + 8), a2, *a3);
    return;
  }
}

__int64 game_menu_anonymous_ProcUnitInfoFull_LCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];

  v2 = *a2;
  v6[0] = v2;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
  }
  else {
    v3 = 0;
  }
  v6[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v6) !=
      0) {
    return 0;
  }
  v5 = *(_QWORD*)(v2 + 392);
  if (v5 == 0) {
    return 0;
  }
  result = *(_QWORD*)(v5 + 288);
  if (result != 0) {
    return GameRoutine_975940(result) != 0;
  }
  return result;
}

__int64 game_menu_anonymous_ProcUnitInfoFull_RCall_closure_Invoke(__int64 a1,
                                                                  __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[2];

  v2 = *a2;
  v6[0] = v2;
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 392);
  }
  else {
    v3 = 0;
  }
  v6[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v6) !=
      0) {
    return 0;
  }
  v5 = *(_QWORD*)(v2 + 392);
  if (v5 == 0) {
    return 0;
  }
  result = *(_QWORD*)(v5 + 288);
  if (result != 0) {
    return GameRoutine_975940(result) != 0;
  }
  return result;
}

#pragma GCC visibility pop
