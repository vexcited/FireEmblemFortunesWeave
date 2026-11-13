#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Cursor_730e40(_QWORD, _QWORD);
__int64 GameRoutine_182cf20(_QWORD, _QWORD);
__int64 GameRoutine_752480(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7595d0(_QWORD);
__int64 MapUnitInfo_1828ef0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_212d0d0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfc0[10];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 MapUnitInfoDetail_Unknown140(__int64 a1, __int64* a2);
__int64 MapUnitInfoDetail_Unknown103(__int64 a1);
__int64 MapUnitInfoDetail_Unknown105(__int64 a1);
_QWORD* GameRoutine_182ff80(_QWORD* result, int*, _QWORD*, __int64, __int64,
                            int*, __int64);
_QWORD* GameRoutine_1830fa0(_QWORD* result, int*, _QWORD*, __int64, __int64,
                            int*, __int64);
__int64 GameRoutine_1000();
__int64 GameRoutine_182f4a0(_QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
extern __int64* GameData_212c880[5];
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda0_Invoke(__int64 result,
                                                            int* a2);
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda1_Invoke(__int64 result,
                                                            int* a2);
_QWORD* MapUnitInfoDetail_18302e0(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6);
__int64* MapUnitInfoDetail_18305e0(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10);
_QWORD* MapUnitInfoDetail_1831300(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6);
__int64* MapUnitInfoDetail_1831600_alt1(
    __int64* result, __int64 a2, __int64* a3, __int64 a4, char* a5, __int64* a6,
    __int64 a7, __int64 a8, __int64 a9,
    __int64 a10) __asm__("MapUnitInfoDetail_1831600");
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke(__int64 result,
                                                            unsigned int* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void Layout_1363e00(PSEUDO_X8, _QWORD, _QWORD);
__int64 BasicMenu_16dd8b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_15745c0(_QWORD, _QWORD);
__int64 GameRoutine_157ef40(_QWORD, _QWORD);
__int64 GameRoutine_158d1a0(_QWORD, _QWORD);
__int64 GameRoutine_182e580(_QWORD, _QWORD);
__int64 GameRoutine_182ff80_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_182ff80");
__int64 GameRoutine_1830fa0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_1830fa0");
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18b47c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, double);
__int64 LayoutAccessor_1572ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15730d0(_QWORD);
__int64 Util_1575c70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitSkillList_EachIndirectSkill(_QWORD, _QWORD, _QWORD);
__int64 game_gameui_Util_IsVisibleSpecialPage(_QWORD);
__int64 game_gameui_Util_SetBasicStatusForUnitInfo(_QWORD, _QWORD);
__int64 game_map_752480(_QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Add(_QWORD, _QWORD);
__int64 game_menu_PageTab_SetupLabel(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wmemchr(void);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_20e2d40[])();
extern __int64 (*GameData_20e2dc0[])();
extern __int64 (*GameData_20e2e40[])();
extern __int64 (*GameData_20e2ec0[])();
extern __int64 (*GameData_20e2fc0[])();
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212dfc0[2];
extern __int64 GameData_212c060;
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_2131958[10];
extern __int64 GameData_21f4018[];
extern int game_map_MapUnitInfoDetail_last_page_;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 MapUnitInfoDetail_182cf20_alt1(__int64 result, unsigned int a2) __asm__(
    "MapUnitInfoDetail_182cf20");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void
Layout_1363e00_alt1(PSEUDO_X8, unsigned __int64 result,
                    __int64) __asm__("Layout_1363e00");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 BasicMenu_16dd8b0_alt1(__int64, int, int) __asm__("BasicMenu_16dd8b0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_1572370_alt1(__int64, char) __asm__("GameRoutine_1572370");
__int64 GameRoutine_15745c0_alt1(unsigned __int16*,
                                 char) __asm__("GameRoutine_15745c0");
__int64 GameRoutine_157ef40_alt1(__int64 result,
                                 __int64) __asm__("GameRoutine_157ef40");
__int64 GameRoutine_182e580_alt1(unsigned __int64*,
                                 int) __asm__("GameRoutine_182e580");
__int64 GameRoutine_1841930_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1841930");
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 GameRoutine_6fc510_alt1(__int64) __asm__("GameRoutine_6fc510");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 Util_1575c70_alt1(__int64, __int64, int, const char*, char,
                          __int64) __asm__("Util_1575c70");
__int64 game_UnitSkillList_EachIndirectSkill_alt1(
    __int64, _WORD*, __int64) __asm__("game_UnitSkillList_EachIndirectSkill");
__int64 game_gameui_Util_IsVisibleSpecialPage_alt1(__int64) __asm__(
    "game_gameui_Util_IsVisibleSpecialPage");
__int64 game_gameui_Util_SetBasicStatusForUnitInfo_alt1(
    __int64 result,
    __int64) __asm__("game_gameui_Util_SetBasicStatusForUnitInfo");
__int64 game_map_752480_alt1(int, int, char) __asm__("game_map_752480");
__int64 game_menu_PageTab_SetupLabel_alt1(
    __int64, __int64*, __int64, unsigned int, unsigned int,
    unsigned int) __asm__("game_menu_PageTab_SetupLabel");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 wmemchr_alt1(__int64, unsigned int,
                     unsigned __int64) __asm__("wmemchr");
bool GameRoutine_6fc7a0_alt1(__int64, _QWORD*) __asm__("GameRoutine_6fc7a0");
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_15730d0(__int64*, _QWORD*);
void GameHr_158d1a0(__int64, __int64);
void GameRoutine_182f4a0_alt1(__int64*) __asm__("GameRoutine_182f4a0");
void GameRoutine_18ae960_alt1(_QWORD*, char) __asm__("GameRoutine_18ae960");
void GameRoutine_18b47c0_alt1(__int64*, int, char,
                              __int64) __asm__("GameRoutine_18b47c0");
void LayoutAccessor_1572ac0_alt1(
    __int64*, __int64, unsigned int,
    unsigned int) __asm__("LayoutAccessor_1572ac0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_menu_PageTab_Add_alt1(_QWORD*, int) __asm__("game_menu_PageTab_Add");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapUnitInfoDetail_182cf20(_QWORD* a1, unsigned int a2);
char* MapUnitInfoDetail_1831600(char* result, int* a2, char* a3, int* a4,
                                char* a5, __int64* a6, __int64 a7, __int64 a8,
                                __int64 a9, __int64 a10);
_QWORD*
MapUnitInfoDetail_18302e0_alt1(_QWORD* result, __int64*, _QWORD*, __int64,
                               unsigned __int64,
                               __int64*) __asm__("MapUnitInfoDetail_18302e0");
_QWORD*
MapUnitInfoDetail_1831300_alt1(_QWORD* result, __int64*, _QWORD*, __int64,
                               unsigned __int64,
                               __int64*) __asm__("MapUnitInfoDetail_1831300");
__attribute__((swiftcall)) void GameRoutine_15b71b0(PSEUDO_X8, unsigned __int64,
                                                    __int64);
__int64 FloatingHelp_18ade60(_QWORD*);
__int64 FloatingHelp_18af980(__int64, __int64*);
__int64 GameRoutine_16c67b0(_QWORD*, __int64*, __int64, __int64);
__int64 GameRoutine_16ca910(_QWORD*, __int64*, __int64, __int64);
__int64 GameRoutine_16d2c90(__int64, char, __int64*, __int64, __int64);
__int64 GameRoutine_1829dc0(__int64 result);
__int64 MapUnitInfo_182aaa0(__int64, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, __int64);
bool MapUnitInfo_1829460(__int64, __int64);
extern __int64 (*GameData_20e2f30[])();
extern __int64* GameData_212cff8[3];
extern __int64* GameData_212d890[2];
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 GameData_21f1e08;
void FloatingHelp_18aee60(_QWORD*, __int64*);
void GameHr_18af120(_QWORD*, __int64*);
void MapInfo_825790(__int64);
void __attribute__((noreturn)) GameRoutine_182f470();
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void MapUnitInfoDetail_Unknown85(_QWORD* a1);
__int64 MapUnitInfoDetail_Unknown92(__int64 a1);
__int64 MapUnitInfoDetail_182ebe0(__int64 a1);
__int64* MapUnitInfoDetail_182ff80(__int64* result, __int64* a2, char* a3,
                                   __int64* a4, unsigned __int64 a5,
                                   __int64* a6, __int64 a7);
__int64* MapUnitInfoDetail_1830fa0(__int64* result, __int64* a2, char* a3,
                                   __int64* a4, unsigned __int64 a5,
                                   __int64* a6, __int64 a7);
_QWORD* game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke_1832180(__int64 a1,
                                                                    _DWORD* a2,
                                                                    __int64 a3);

__int64 MapUnitInfoDetail_Unknown140(__int64 a1, __int64* a2)
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

void MapUnitInfoDetail_Unknown85(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  unsigned __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  char* v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  char* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  char* v91;
  char* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  struct {
    __int64 v122;
    __int64 v123;
  } v122_;
  struct {
    __int64 v124;
    __int64 v125;
  } v124_;
  struct {
    __int64 v126;
    __int64 v127;
  } v126_;
  struct {
    char* v128;
    unsigned __int64 v129;
  } v128_;
  struct {
    char* v130;
    unsigned __int64 v131;
  } v130_;
  struct {
    __int64 v132;
    __int64 v133;
    char* v134;
  } v132_;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  v3 = a1[107];
  v4 = a1 + 106;
  v126_.v126 = 0;
  v126_.v127 = 0;
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v3);
    v126_.v127 = v5;
    if (v5 != 0) {
      v126_.v126 = *v4;
    }
  }
  else {
    v5 = 0;
  }
  v6 = ui_LayoutAccessor_FindPartsLayout(a1 + 106, (__int64)"L_EquipItem");
  GameRoutine_16ca910(v2, &v126_.v126, v6, 0);
  v7 = (_QWORD*)a1[135];
  v8 = a1[136];
  if ((unsigned __int64)v7 >= v8) {
    v10 = a1[134];
    v11 = (char*)v7 - v10;
    v12 = ((__int64)v7 - v10) >> 3;
    v13 = v12 + 1;
    if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
      goto LABEL_198;
    }
    v14 = v8 - v10;
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
        goto LABEL_199;
      }
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = (unsigned __int64)v7 - v10;
    v19 = (__int64)&v11[v16 + -8 * v12];
    *(_QWORD*)&v11[v16] = v2;
    v9 = (__int64)&v11[v16 + 8];
    memcpy_alt1(v19, v10, v18);
    a1[134] = v19;
    a1[135] = v9;
    a1[136] = v17;
    if (v10 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v10);
    }
  }
  else {
    *v7 = v2;
    v9 = (__int64)(v7 + 1);
  }
  a1[135] = v9;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v21 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1088, 16, 0);
  v22 = a1[107];
  v124_.v124 = 0;
  v124_.v125 = 0;
  if (v22 != 0) {
    v23 = std___1___shared_weak_count_lock_alt1(v22);
    v124_.v125 = v23;
    if (v23 != 0) {
      v124_.v124 = *v4;
    }
  }
  else {
    v23 = 0;
  }
  v24 = ui_LayoutAccessor_FindPartsLayout(a1 + 106, (__int64)"L_EquipArts");
  GameRoutine_16d2c90(v21, 2, &v124_.v124, v24, 0);
  v25 = (__int64*)a1[135];
  v26 = a1[136];
  if ((unsigned __int64)v25 >= v26) {
    v28 = a1[134];
    v29 = (char*)v25 - v28;
    v30 = ((__int64)v25 - v28) >> 3;
    v31 = v30 + 1;
    if ((unsigned __int64)(v30 + 1) >> 61 != 0) {
      goto LABEL_198;
    }
    v32 = v26 - v28;
    if (v32 >> 2 > v31) {
      v31 = v32 >> 2;
    }
    if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF8LL) {
      v33 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v33 = v31;
    }
    if (v33 != 0) {
      if (v33 >> 61 != 0) {
        goto LABEL_199;
      }
      v34 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
    }
    else {
      v34 = 0;
    }
    v35 = v34 + 8 * v33;
    v36 = (unsigned __int64)v25 - v28;
    v37 = (__int64)&v29[v34 + -8 * v30];
    *(_QWORD*)&v29[v34] = v21;
    v27 = (__int64)&v29[v34 + 8];
    memcpy_alt1(v37, v28, v36);
    a1[134] = v37;
    a1[135] = v27;
    a1[136] = v35;
    if (v28 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v28);
    }
  }
  else {
    *v25 = v21;
    v27 = (__int64)(v25 + 1);
  }
  a1[135] = v27;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v23);
  }
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1072, 16, 0);
  v40 = a1[107];
  v122_.v122 = 0;
  v122_.v123 = 0;
  if (v40 != 0) {
    v41 = std___1___shared_weak_count_lock_alt1(v40);
    v122_.v123 = v41;
    if (v41 != 0) {
      v122_.v122 = *v4;
    }
  }
  else {
    v41 = 0;
  }
  v42 = ui_LayoutAccessor_FindPartsLayout(a1 + 106, (__int64)"L_EquipDeploy");
  GameRoutine_16c67b0(v39, &v122_.v122, v42, 0);
  v43 = (_QWORD*)a1[135];
  v44 = a1[136];
  if ((unsigned __int64)v43 >= v44) {
    v46 = a1[134];
    v47 = (char*)v43 - v46;
    v48 = ((__int64)v43 - v46) >> 3;
    v49 = v48 + 1;
    if ((unsigned __int64)(v48 + 1) >> 61 == 0) {
      v50 = v44 - v46;
      if (v50 >> 2 > v49) {
        v49 = v50 >> 2;
      }
      if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
        v51 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v51 = v49;
      }
      if (v51 == 0) {
        v52 = 0;
      LABEL_63:
        v53 = v52 + 8 * v51;
        v54 = (unsigned __int64)v43 - v46;
        v55 = (__int64)&v47[v52 + -8 * v48];
        *(_QWORD*)&v47[v52] = v39;
        v45 = (__int64)&v47[v52 + 8];
        memcpy_alt1(v55, v46, v54);
        a1[134] = v55;
        a1[135] = v45;
        a1[136] = v53;
        if (v46 != 0) {
          v56 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v46);
        }
        goto LABEL_67;
      }
      if (v51 >> 61 == 0) {
        v52 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v51, 16, 0);
        goto LABEL_63;
      }
    LABEL_199:
      GameRoutine_60a210_alt1();
    }
  LABEL_198:
    GameRoutine_182f470();
  }
  *v43 = v39;
  v45 = (__int64)(v43 + 1);
LABEL_67:
  a1[135] = v45;
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak_alt1(v41);
  }
  MapUnitInfoDetail_182cf20(a1, 1u);
  v57 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60((_QWORD*)v57, a1 + 106);
    GameRoutine_18ae960_alt1((_QWORD*)v57, 1);
    v58 = *(_QWORD*)(v57 + 240);
    *(_QWORD*)(v57 + 232) = 0;
    *(_QWORD*)(v57 + 240) = 0;
    if (v58 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v58);
    }
    *(_QWORD*)(v57 + 160) = a1;
    *(_BYTE*)(v57 + 257) = 0;
    *(_DWORD*)(v57 + 248) = -1;
    if (GameData_21f1e08 != 0) {
      v59 = (_QWORD*)(GameData_21f1e08 + 276);
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *v59 = 0xC4048000446D8000LL;
    }
  }
  v60 = a1 + 106;
  v61 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *(_BYTE*)v61 = 16;
  v62 = v61;
  v63 = 0;
  strcpy((char*)(v61 + 1), "L_Person");
  *(_QWORD*)(v61 + 24) = 0x3030626F4A5F4C0ELL;
  *(_QWORD*)(v61 + 32) = 0;
  *(_QWORD*)(v61 + 72) = 0x3230626F4A5F4C0ELL;
  *(_QWORD*)(v61 + 80) = 0;
  *(_QWORD*)(v61 + 48) = 0x3130626F4A5F4C0ELL;
  *(_QWORD*)(v61 + 56) = 0;
  do {
    v64 = (__int64*)(v62 + v63);
    if ((*(_BYTE*)(v62 + v63) & 1) != 0) {
      fw_text_String_CopyTerminated(&v132_.v132, v64[2], v64[1]);
    }
    else {
      v65 = *v64;
      v66 = v64[1];
      v67 = v64[2];
      v132_.v132 = v65;
      v132_.v133 = v66;
      v132_.v134 = (char*)v67;
    }
    if ((v132_.v132 & 1) != 0) {
      v68 = v132_.v134;
    }
    else {
      v68 = (char*)&v132_.v132 + 1;
    }
    v128_.v128 = game_util_Format_alt1("%s/%s", "L_UnitInfo/L_SkillInfo", v68);
    v128_.v129 = strlen_alt1(v128_.v128);
    v69 = a1[107];
    if (v69 != 0) {
      v70 = std___1___shared_weak_count_lock_alt1(v69);
      if (v70 != 0) {
        v71 = *v60;
        v72 = v70;
        if (*v60 != 0) {
          GameRoutine_15b71b0((void*)((__int64*)&v130_.v130), *v60,
                              (__int64)&v128_.v128);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v71 == 0) {
            goto LABEL_99;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
          std___1___shared_weak_count___release_weak_alt1(v72);
          if (v71 == 0) {
            goto LABEL_99;
          }
        }
        if (v130_.v131 != 0) {
          if (*(_QWORD*)(v130_.v131 + 8) != -1) {
            v73 = std___1___shared_weak_count_lock_alt1(v130_.v131);
            v74 = v130_.v130;
            if ((v130_.v130[1000] & 1) != 0) {
              *((_QWORD*)v130_.v130 + 126) = 13;
              v75 = *((char**)v74 + 127);
            }
            else {
              v130_.v130[1000] = 26;
              v75 = v74 + 1001;
            }
            strcpy(v75, "L_MasteryInfo");
            if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v78 = v73;
              (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
              std___1___shared_weak_count___release_weak_alt1(v78);
              v76 = v130_.v131;
              if (v130_.v131 == 0) {
                goto LABEL_99;
              }
            LABEL_98:
              std___1___shared_weak_count___release_weak_alt1(v76);
              goto LABEL_99;
            }
          }
          v76 = v130_.v131;
          if (v130_.v131 != 0) {
            goto LABEL_98;
          }
        }
      }
    }
  LABEL_99:
    if ((v132_.v132 & 1) != 0 && v132_.v134 != nullptr) {
      v77 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v77 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, (__int64)v132_.v134);
    }
    v63 += 24;
  } while (v63 != 96);
  v79 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v80 = 0;
  *v79 = 0x426E6F63495F4C1ALL;
  v79[1] = 0x3030646F6F6CLL;
  v79[3] = 0x426E6F63495F4C1ALL;
  v79[4] = 0x3130646F6F6CLL;
  v79[6] = 0x426E6F63495F4C1ALL;
  v79[7] = 0x3230646F6F6CLL;
  v79[9] = 0x7373616C435F4C18LL;
  v79[10] = 0x70756F7247LL;
  do {
    v81 = &v79[v80];
    if ((v79[v80] & 1) != 0) {
      fw_text_String_CopyTerminated(&v132_.v132, v81[2], v81[1]);
    }
    else {
      v82 = *v81;
      v83 = v81[1];
      v84 = v81[2];
      v132_.v132 = v82;
      v132_.v133 = v83;
      v132_.v134 = (char*)v84;
    }
    if ((v132_.v132 & 1) != 0) {
      v85 = v132_.v134;
    }
    else {
      v85 = (char*)&v132_.v132 + 1;
    }
    v128_.v128 =
        game_util_Format_alt1("%s/%s", "L_UnitInfo/L_UnitInfoDetail", v85);
    v128_.v129 = strlen_alt1(v128_.v128);
    v86 = a1[107];
    if (v86 != 0) {
      v87 = std___1___shared_weak_count_lock_alt1(v86);
      if (v87 != 0) {
        v88 = *v60;
        v89 = v87;
        if (*v60 != 0) {
          GameRoutine_15b71b0((void*)((__int64*)&v130_.v130), *v60,
                              (__int64)&v128_.v128);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v89 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v88 == 0) {
            goto LABEL_130;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
          std___1___shared_weak_count___release_weak_alt1(v89);
          if (v88 == 0) {
            goto LABEL_130;
          }
        }
        if (v130_.v131 != 0) {
          if (*(_QWORD*)(v130_.v131 + 8) != -1) {
            v90 = std___1___shared_weak_count_lock_alt1(v130_.v131);
            v91 = v130_.v130;
            if ((v130_.v130[928] & 1) != 0) {
              *((_QWORD*)v130_.v130 + 117) = 12;
              v92 = *((char**)v91 + 118);
            }
            else {
              v130_.v130[928] = 24;
              v92 = v91 + 929;
            }
            strcpy(v92, "L_IconStatus");
            if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v95 = v90;
              (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
              std___1___shared_weak_count___release_weak_alt1(v95);
              v93 = v130_.v131;
              if (v130_.v131 == 0) {
                goto LABEL_130;
              }
            LABEL_129:
              std___1___shared_weak_count___release_weak_alt1(v93);
              goto LABEL_130;
            }
          }
          v93 = v130_.v131;
          if (v130_.v131 != 0) {
            goto LABEL_129;
          }
        }
      }
    }
  LABEL_130:
    if ((v132_.v132 & 1) != 0 && v132_.v134 != nullptr) {
      v94 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v94 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v94, (__int64)v132_.v134);
    }
    v80 += 3;
  } while (v80 != 12);
  v130_.v130 = game_util_Format_alt1("%s/%s", "L_UnitInfo/L_UnitInfoDetail",
                                     "L_OverBlaze");
  v130_.v131 = strlen_alt1(v130_.v130);
  v96 = a1[107];
  if (v96 != 0) {
    v97 = std___1___shared_weak_count_lock_alt1(v96);
    if (v97 != 0) {
      v98 = *v60;
      v99 = v97;
      if (v98 != 0) {
        GameRoutine_15b71b0((void*)(&v132_.v132), v98, (__int64)&v130_.v130);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
        std___1___shared_weak_count___release_weak_alt1(v99);
      }
      if (v98 != 0 && v132_.v133 != 0) {
        if (*(_QWORD*)(v132_.v133 + 8) != -1) {
          v100 = std___1___shared_weak_count_lock_alt1(v132_.v133);
          v101 = v132_.v132;
          if ((*(_BYTE*)(v132_.v132 + 1000) & 1) != 0) {
            *(_QWORD*)(v132_.v132 + 1008) = 12;
            v102 = *(char**)(v101 + 1016);
          }
          else {
            *(_BYTE*)(v132_.v132 + 1000) = 24;
            v102 = (char*)(v101 + 1001);
          }
          strcpy(v102, "L_IconStatus");
          if (atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v103 = v100;
            (*(void (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100);
            std___1___shared_weak_count___release_weak_alt1(v103);
          }
        }
        if (v132_.v133 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v132_.v133);
        }
      }
    }
  }
  if ((v79[9] & 1) != 0) {
    v104 = v79[11];
    if (v104 != 0) {
      v105 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v105 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, v104);
    }
  }
  if ((v79[6] & 1) != 0) {
    v106 = v79[8];
    if (v106 != 0) {
      v107 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v107 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v107, v106);
    }
  }
  if ((v79[3] & 1) != 0) {
    v108 = v79[5];
    if (v108 != 0) {
      v109 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v109 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, v108);
    }
  }
  if ((*(_BYTE*)v79 & 1) != 0) {
    v110 = v79[2];
    if (v110 != 0) {
      v111 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v111 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v111, v110);
    }
  }
  v112 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v112 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, (__int64)v79);
  if ((*(_BYTE*)(v62 + 72) & 1) != 0) {
    v113 = *(_QWORD*)(v62 + 88);
    if (v113 != 0) {
      v114 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v114 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v114, v113);
    }
  }
  if ((*(_BYTE*)(v62 + 48) & 1) != 0) {
    v115 = *(_QWORD*)(v62 + 64);
    if (v115 != 0) {
      v116 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v116 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, v115);
    }
  }
  if ((*(_BYTE*)(v62 + 24) & 1) != 0) {
    v117 = *(_QWORD*)(v62 + 40);
    if (v117 != 0) {
      v118 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v118 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v118, v117);
    }
  }
  if ((*(_BYTE*)v62 & 1) != 0) {
    v119 = *(_QWORD*)(v62 + 16);
    if (v119 != 0) {
      v120 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v120 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v120, v119);
    }
  }
  v121 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v121 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, v62);
}

void MapUnitInfoDetail_182cf20(_QWORD* a1, unsigned int a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64* v5;
  char v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v11;
  __int64 v13;
  unsigned __int64* v14;
  __int64 v15;
  __int64 (***v16)();
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (***v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int* v33;
  int* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  char* v46;
  unsigned __int64 v47;
  __int64* v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64* v52;
  char* v53;
  __int16 v54;
  __int64* v55;
  char* v56;
  __int64 v57;
  char* v58;
  signed __int64 v59;
  __int64 v60;
  char* v61;
  int* v62;
  char* v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  __int64 v67;
  int* v68;
  __int64 v69;
  bool v70;
  char* v71;
  int* v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  int* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 (***v88)();
  __int64 v89;
  __int64 v90;
  int v91;
  unsigned int v92;
  int v93;
  __int64 v94;
  __int64* v95;
  __int64* v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64* v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64* v113;
  __int64* v114;
  __int64* v115;
  __int64* v116;
  int v117;
  unsigned int v118;
  __int64 v119;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  int v124;
  _BOOL4 v125;
  _BOOL4 v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int16 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  bool v140;
  int v141;
  int v142;
  __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  unsigned int v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  int v151;
  __int64 v152;
  __int64 v153;
  char v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  char v161;
  __int64 v162;
  __int64 v163;
  int v164;
  __int64 v165;
  struct {
    __int64 v166;
    __int64 v167;
  } v166_;
  const char* v168[2];
  struct {
    __int64 (**v169)();
    _QWORD* v170;
    __int64 (***v171)();
    char gap104_[8];
    __int64 (***v172)();
  } v169_;
  struct {
    __int64 v173;
    __int64* v174;
    __int64* v175;
    __int64 v176;
    unsigned __int64 v177;
    __int64 v178;
  } v173_;
  struct {
    __int64 (**v179)();
    __int64* v180;
    __int64* v181;
    __int64 v182;
    unsigned __int64 v183;
    __int64 v184;
  } v179_;
  struct {
    __int64 v185;
    __int64 v186;
  } v185_;
  struct {
    __int64 v187;
    __int64 v188;
  } v187_;

  v2 = a2;
  v3 = (_QWORD*)a1[133];
  if (v3 == nullptr) {
    return;
  }
  GameHr_15730d0(a1 + 106, v3);
  v5 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_UnitInfo/L_UnitInfoDetail");
  LayoutAccessor_1572ac0_alt1(v5, a1[133], 0, 0);
  v6 = 0;
  if (*(_QWORD*)(*(_QWORD*)GameData_212d0d0[0] + 160LL) != 0 &&
      (*(_BYTE*)(*(_QWORD*)GameData_212d0d0[0] + 363LL) & 1) == 0) {
    v7 = a1[133];
    v8 = GameData_212cfc0[0];
    v9 = game_map_752480_alt1(
        *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
        *(_DWORD*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 0);
    if (v9 == 0 || v7 == v9) {
      v11 = game_map_752480_alt1(*(_DWORD*)(*(_QWORD*)(*v8 + 48) + 8LL),
                                 *(_DWORD*)(*(_QWORD*)(*v8 + 48) + 12LL), 1);
      v6 = v11 != 0 && v7 != v11;
    }
    else {
      v6 = 1;
    }
  }
  GameRoutine_1572370_alt1((__int64)v5, v6);
  LayoutAccessor_1560070_alt1((void*)(&v179_.v179), a1 + 106, "L_IconStatus");
  if (v179_.v180 == nullptr) {
    goto LABEL_219;
  }
  v13 = std___1___shared_weak_count_lock_alt1((__int64)v179_.v180);
  v14 = (unsigned __int64*)v179_.v179;
  if (v179_.v180 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v179_.v180);
  }
  if (v13 == 0 || v14 == nullptr) {
    goto LABEL_216;
  }
  v162 = v13;
  v15 = a1[133];
  v16 = &v169_.v169;
  v179_.v183 = 0;
  v179_.v184 = 0;
  v179_.v181 = nullptr;
  v179_.v182 = 0;
  v179_.v179 = nullptr;
  v179_.v180 = nullptr;
  v173_.v177 = 0;
  v173_.v178 = 0;
  v173_.v175 = nullptr;
  v173_.v176 = 0;
  v169_.v169 = GameData_20e2d40;
  v169_.v170 = a1;
  v173_.v173 = 0;
  v173_.v174 = nullptr;
  v169_.v172 = &v169_.v169;
  v169_.v171 = &v179_.v179;
  v17 = GameData_212c880[0];
  if ((*(_WORD*)(v15 + 1440) & 0x2080) == 0) {
    goto LABEL_31;
  }
  v18 = *(_QWORD*)(v15 + 1400);
  v19 = *(_QWORD*)(v15 + 1392);
  if ((int)((unsigned __int64)(v18 - v19) >> 2) < 1) {
    v16 = &v169_.v169;
  LABEL_31:
    v23 = 4;
    goto LABEL_32;
  }
  v20 = *GameData_212c880[0];
  v21 = 0;
  v22 = 0;
  do {
    if (((1 << *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v20 + 64) +
                                    8LL * (*(_DWORD*)(v19 + v21) & 0xFFF)) +
                         104LL)) &
         0x2080) != 0) {
      if (v169_.v172 == nullptr) {
      LABEL_40:
        GameRoutine_60a310_alt1();
      }
      ((void (*)(__int64 (***)(void), __int64))(*v169_.v172)[6])(v169_.v172,
                                                                 v19 + v21);
      v20 = *v17;
      v18 = *(_QWORD*)(v15 + 1400);
      v19 = *(_QWORD*)(v15 + 1392);
    }
    ++v22;
    v21 += 4;
  } while (v22 < (int)((unsigned __int64)(v18 - v19) >> 2));
  v16 = v169_.v172;
  if (v169_.v172 == &v169_.v169) {
    goto LABEL_31;
  }
  if (v169_.v172 != nullptr) {
    v23 = 5;
  LABEL_32:
    ((__int64 (*)(__int64))(*v16)[v23])((__int64)v16);
  }
  v24 = a1[133];
  v25 = &v169_.v169;
  v169_.v169 = GameData_20e2dc0;
  v169_.v170 = a1;
  v169_.v172 = &v169_.v169;
  v169_.v171 = (__int64 (***)(void))&v173_.v173;
  if ((*(_BYTE*)(v24 + 1440) & 1) == 0) {
  LABEL_45:
    v31 = 4;
    goto LABEL_46;
  }
  v26 = *(_QWORD*)(v24 + 1400);
  v27 = *(_QWORD*)(v24 + 1392);
  if ((int)((unsigned __int64)(v26 - v27) >> 2) < 1) {
    v25 = &v169_.v169;
    goto LABEL_45;
  }
  v28 = *v17;
  v29 = 0;
  v30 = 0;
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v28 + 64) +
                             8LL * (*(_DWORD*)(v27 + v29) & 0xFFF)) +
                  104LL) == 0) {
      if (v169_.v172 == nullptr) {
        goto LABEL_40;
      }
      ((void (*)(__int64 (***)(void), __int64))(*v169_.v172)[6])(v169_.v172,
                                                                 v27 + v29);
      v28 = *v17;
      v26 = *(_QWORD*)(v24 + 1400);
      v27 = *(_QWORD*)(v24 + 1392);
    }
    ++v30;
    v29 += 4;
  } while (v30 < (int)((unsigned __int64)(v26 - v27) >> 2));
  v25 = v169_.v172;
  if (v169_.v172 == &v169_.v169) {
    goto LABEL_45;
  }
  if (v169_.v172 != nullptr) {
    v31 = 5;
  LABEL_46:
    ((__int64 (*)(__int64))(*v25)[v31])((__int64)v25);
  }
  v32 = a1[133];
  v33 = *(int**)(v32 + 1776);
  v34 = *(int**)(v32 + 1784);
  while (v33 != v34) {
    v36 = a1[133];
    if (v36 != 0 && (*v33 & 0xFFF) != 0) {
      v37 = *(_QWORD*)(*(_QWORD*)(*v17 + 64) + 8LL * (*v33 & 0xFFF));
      if ((GameRoutine_6fc510_alt1(v37) & 1) == 0) {
        if (*(_BYTE*)(v37 + 273) == 0 ||
            ((v38 = *(_QWORD*)(*(_QWORD*)(*v17 + 64) + 8 * (*v33 & 0xFFFLL)),
              v39 = *(unsigned __int8*)(v38 + 104),
              v40 = *(unsigned __int8*)(v38 + 273),
              (unsigned int)(v39 - 5) >= 2)
                 ? (v41 = 0)
                 : (v41 = ((unsigned int)*v33 >> 19) & 0x1F),
             (int)(v41 - (((unsigned int)*v33 >> 12) & 0x7F) + v40) >= 1)) {
          if (GameRoutine_6fc7a0_alt1(v37, (_QWORD*)(v36 + 1744))) {
            v42 = *v33;
            v43 = *(_QWORD*)(*(_QWORD*)(*v17 + 64) + 8 * (*v33 & 0xFFFLL));
            if ((*(_WORD*)(v43 + 754) & 0x40) != 0) {
              v44 = (__int64)v179_.v180;
              if (v179_.v181 == v179_.v180) {
                v49 = nullptr;
                v47 = v179_.v184 + v179_.v183;
                v48 = &v179_.v180[(v179_.v184 + v179_.v183) >> 9];
              }
              else {
                v45 = &v179_.v180[v179_.v183 >> 9];
                v46 = (char*)*v45;
                v47 = v179_.v184 + v179_.v183;
                v48 = &v179_.v180[(v179_.v184 + v179_.v183) >> 9];
                v49 = (char*)(*v45 + 8 * (v179_.v183 & 0x1FF));
                v50 = *v48 + 8 * ((v179_.v184 + v179_.v183) & 0x1FF);
                if (v49 != (char*)v50) {
                  while (((v42 ^ *(_DWORD*)v49) & 0xFFF) != 0) {
                    v49 += 8;
                    if (v49 - v46 == 4096) {
                      v51 = (char*)v45[1];
                      ++v45;
                      v46 = v51;
                      v49 = v51;
                    }
                    if (v49 == (char*)v50) {
                      v49 = (char*)(*v48 + 8 * (v47 & 0x1FF));
                      break;
                    }
                  }
                }
              }
              if (v173_.v175 == v173_.v174) {
                v56 = nullptr;
                v54 = v173_.v178 + v173_.v177;
                v55 = &v173_.v174[(v173_.v178 + v173_.v177) >> 9];
              }
              else {
                v52 = &v173_.v174[v173_.v177 >> 9];
                v53 = (char*)*v52;
                v54 = v173_.v178 + v173_.v177;
                v55 = &v173_.v174[(v173_.v178 + v173_.v177) >> 9];
                v56 = (char*)(*v52 + 8 * (v173_.v177 & 0x1FF));
                v57 = *v55 + 8 * ((v173_.v178 + v173_.v177) & 0x1FF);
                if (v56 != (char*)v57) {
                  while (((v42 ^ *(_DWORD*)v56) & 0xFFF) != 0) {
                    v56 += 8;
                    if (v56 - v53 == 4096) {
                      v58 = (char*)v52[1];
                      ++v52;
                      v53 = v58;
                      v56 = v58;
                    }
                    if (v56 == (char*)v57) {
                      v56 = (char*)(*v55 + 8LL * (v54 & 0x1FF));
                      v59 = (char*)v179_.v181 - (char*)v179_.v180;
                      if (v179_.v181 != v179_.v180) {
                        goto LABEL_79;
                      }
                      goto LABEL_82;
                    }
                  }
                }
              }
              v59 = (char*)v179_.v181 - (char*)v179_.v180;
              if (v179_.v181 == v179_.v180) {
              LABEL_82:
                if (v49 != nullptr) {
                  goto LABEL_49;
                }
              }
              else {
              LABEL_79:
                if (v49 != (char*)(*v48 + 8 * (v47 & 0x1FF))) {
                  goto LABEL_49;
                }
              }
              if (v173_.v175 == v173_.v174) {
                if (v56 != nullptr) {
                  goto LABEL_49;
                }
              }
              else if (v56 != (char*)(*v55 + 8LL * (v54 & 0x1FF))) {
                goto LABEL_49;
              }
              if (v179_.v181 == v179_.v180) {
                v60 = 0;
              }
              else {
                v60 = (v59 << 6) - 1;
              }
              if (v60 == v47) {
                GameRoutine_182f4a0_alt1((__int64*)&v179_.v179);
                v44 = (__int64)v179_.v180;
                v47 = v179_.v184 + v179_.v183;
                v42 = *v33;
              }
              v35 = *(_QWORD*)(v44 + 8 * (v47 >> 9)) + 8 * (v47 & 0x1FF);
              *(_DWORD*)v35 = v42;
              *(_BYTE*)(v35 + 4) = *(_BYTE*)(v43 + 112);
              ++v179_.v184;
            }
          }
        }
      }
    }
  LABEL_49:
    ++v33;
  }
  v61 = (char*)&v179_.v180[v179_.v183 >> 9];
  if (v179_.v181 == v179_.v180) {
    v62 = nullptr;
    v65 = nullptr;
    v64 = 0;
    v63 = (char*)&v179_.v180[(v179_.v184 + v179_.v183) >> 9];
  }
  else {
    v62 = (int*)(*(_QWORD*)v61 + 8 * (v179_.v183 & 0x1FF));
    v63 = (char*)&v179_.v180[(v179_.v184 + v179_.v183) >> 9];
    v64 = *(_QWORD*)v63 + 8 * ((v179_.v184 + v179_.v183) & 0x1FF);
    v65 = v62;
  }
  v161 = v2;
  if (v62 == (int*)v64) {
    v66 = 0;
  }
  else {
    v66 = ((v64 - *(_QWORD*)v63) >> 3) + ((v63 - v61) << 6) -
          (((__int64)v65 - *(_QWORD*)v61) >> 3);
    if (v66 >= 1) {
      v67 = GameData_212c060;
      if ((unsigned __int64)v66 >= 0xFFFFFFFFFFFFFFFLL) {
        v2 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v2 = ((v64 - *(_QWORD*)v63) >> 3) + ((v63 - v61) << 6) -
             (((__int64)v65 - *(_QWORD*)v61) >> 3);
      }
      while (1) {
        v68 = (int*)GameRoutine_1a09d20_alt1(8 * v2, v67);
        if (v68 != nullptr) {
          break;
        }
        v69 = v2 >> 1;
        v70 = v2 > 1;
        v2 >>= 1;
        if (!v70) {
          goto LABEL_105;
        }
      }
      v129 = (__int64)v68;
      GameRoutine_182ff80(v61, v62, v63, v64, v66, v68, v2);
      v130 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v130 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v130, v129);
      goto LABEL_106;
    }
  }
  v69 = 0;
LABEL_105:
  GameRoutine_182ff80(v61, v62, v63, v64, v66, nullptr, v69);
LABEL_106:
  v71 = (char*)&v173_.v174[v173_.v177 >> 9];
  if (v173_.v175 == v173_.v174) {
    v72 = nullptr;
    v74 = 0;
    v73 = (char*)&v173_.v174[(v173_.v178 + v173_.v177) >> 9];
    goto LABEL_116;
  }
  v72 = (int*)(*(_QWORD*)v71 + 8 * (v173_.v177 & 0x1FF));
  v73 = (char*)&v173_.v174[(v173_.v178 + v173_.v177) >> 9];
  v74 = *(_QWORD*)v73 + 8LL * (((_WORD)v173_.v178 + (_WORD)v173_.v177) & 0x1FF);
  if (v72 == (int*)v74) {
  LABEL_116:
    v75 = 0;
    goto LABEL_117;
  }
  v75 = ((8LL * (((_WORD)v173_.v178 + (_WORD)v173_.v177) & 0x1FF)) >> 3) +
        ((v73 - v71) << 6) - ((__int64)(8 * (v173_.v177 & 0x1FF)) >> 3);
  if (v75 >= 1) {
    v76 = GameData_212c060;
    if ((unsigned __int64)v75 >= 0xFFFFFFFFFFFFFFFLL) {
      v2 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v2 = ((8LL * (((_WORD)v173_.v178 + (_WORD)v173_.v177) & 0x1FF)) >> 3) +
           ((v73 - v71) << 6) - ((__int64)(8 * (v173_.v177 & 0x1FF)) >> 3);
    }
    while (1) {
      v77 = (int*)GameRoutine_1a09d20_alt1(8 * v2, v76);
      if (v77 != nullptr) {
        break;
      }
      v78 = v2 >> 1;
      v70 = v2 > 1;
      v2 >>= 1;
      if (!v70) {
        goto LABEL_118;
      }
    }
    v131 = (__int64)v77;
    GameRoutine_1830fa0(v71, v72, v73, v74, v75, v77, v2);
    v132 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v132 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v132, v131);
    goto LABEL_119;
  }
LABEL_117:
  v78 = 0;
LABEL_118:
  GameRoutine_1830fa0(v71, v72, v73, v74, v75, nullptr, v78);
LABEL_119:
  v79 = 0;
  v165 = (int)v179_.v184;
  v80 = -(__int64)(int)v179_.v184;
  v163 = (int)v173_.v178 + (int)v179_.v184;
  v164 = -1;
  while (2) {
    v168[0] = game_util_Format_alt1("L_Icon%02d", v79);
    v168[1] = (const char*)strlen_alt1(v168[0]);
    v81 = v14[1];
    if (v81 != 0) {
      v82 = std___1___shared_weak_count_lock_alt1(v81);
      if (v82 != 0) {
        v83 = *v14;
        v84 = v82;
        if (*v14 != 0) {
          Layout_1363e00_alt1((void*)(&v185_.v185), *v14, (__int64)v168);
          v187_.v187 = 0;
          v187_.v188 = 0;
          if (v185_.v186 != 0 &&
              (v85 = std___1___shared_weak_count_lock_alt1(v185_.v186),
               v187_.v188 = v85, v85 != 0) &&
              (v187_.v187 = v185_.v185, v185_.v185 != 0) &&
              (v86 = v85,
               (v87 = __dynamic_cast(v185_.v185, GameData_212dfc0[0],
                                     GameData_2131958[0], 0)) != 0)) {
            v88 = (__int64 (***)(void))&v187_.v187;
            v169_.v169 = (__int64 (**)(void))v87;
            v169_.v170 = (_QWORD*)v86;
          }
          else {
            v88 = &v169_.v169;
          }
          *v88 = nullptr;
          v88[1] = nullptr;
          v2 = (unsigned __int64)v169_.v169;
          v74 = (__int64)v169_.v170;
          if (v169_.v170 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v169_.v170 + 2),
                                      1u, memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
              std___1___shared_weak_count___release_weak_alt1(v74);
            }
          }
          v89 = v187_.v188;
          if (v187_.v188 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v187_.v188 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
            std___1___shared_weak_count___release_weak_alt1(v89);
          }
          if (v185_.v186 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v185_.v186);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v83 == 0) {
            goto LABEL_120;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
          std___1___shared_weak_count___release_weak_alt1(v84);
          if (v83 == 0) {
            goto LABEL_120;
          }
        }
        if (v74 == 0) {
          goto LABEL_120;
        }
        v90 = std___1___shared_weak_count_lock_alt1(v74);
        std___1___shared_weak_count___release_weak_alt1(v74);
        if (v90 != 0 && v2 != 0) {
          if (v79 >= v165) {
            if (v79 >= v163) {
              goto LABEL_156;
            }
            v93 = *(_DWORD*)(v173_.v174[(v80 + v173_.v177) >> 9] +
                             8 * ((v80 + v173_.v177) & 0x1FF));
            if ((v93 & 0xFFF) == 0) {
              goto LABEL_156;
            }
            *(_QWORD*)(v2 + 1088) = 0;
            *(_DWORD*)(v2 + 1096) = v93;
            GameHr_1562680(v2 + 88, "GoodStatus", 0x1.0000000000000p+0f);
            v94 = *(_QWORD*)(v2 + 1080);
            if (v94 != 0) {
              GameRoutine_1841930_alt1(
                  v94, *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                  8LL * (*(_DWORD*)(v2 + 1096) & 0xFFF)));
            }
            v92 = 1;
            (*(void (**)(unsigned __int64, __int64))(*(_QWORD*)v2 + 40LL))(v2,
                                                                           1);
          LABEL_155:
            v164 = v79;
          }
          else {
            v91 = *(_DWORD*)(v179_.v180[(v79 + v179_.v183) >> 9] +
                             8 * ((v79 + v179_.v183) & 0x1FF));
            if ((v91 & 0xFFF) != 0) {
              v92 = 1;
              GameRoutine_18b47c0_alt1((__int64*)v2, v91, 1, 0);
              goto LABEL_155;
            }
          LABEL_156:
            v92 = 0;
          }
          (*(void (**)(unsigned __int64, _QWORD))(*(_QWORD*)v2 + 40LL))(v2,
                                                                        v92);
        LABEL_158:
          if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90);
            std___1___shared_weak_count___release_weak_alt1(v90);
          }
        }
        else if (v90 != 0) {
          goto LABEL_158;
        }
      }
    }
  LABEL_120:
    ++v79;
    ++v80;
    if (v79 != 14) {
      continue;
    }
    break;
  }
  LayoutAccessor_155e830_alt1((__int64)v14, v164 >= 0);
  v95 = v173_.v174;
  v96 = v173_.v175;
  v173_.v178 = 0;
  v97 = v173_.v175 - v173_.v174;
  if (v97 < 3) {
    LOBYTE(v2) = v161;
  }
  else {
    v98 = fw_memory_g_heap_manager_ptr;
    LOBYTE(v2) = v161;
    do {
      if (*v95 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v98 + 200LL) != 0) {
          v99 = 128;
        }
        else {
          v99 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v98 + v99, *v95);
        v95 = v173_.v174;
        v96 = v173_.v175;
      }
      v173_.v174 = ++v95;
      v97 = v96 - v95;
    } while (v97 > 2);
  }
  if (v97 == 1) {
    v100 = 256;
  LABEL_173:
    v173_.v177 = v100;
  }
  else if (v97 == 2) {
    v100 = 512;
    goto LABEL_173;
  }
  if (v95 != v96) {
    v101 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v95 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v101 + 200LL) != 0) {
          v102 = 128;
        }
        else {
          v102 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v101 + v102, *v95);
      }
      ++v95;
    } while (v95 != v96);
    if (v173_.v174 != v173_.v175) {
      v173_.v175 = (__int64*)((char*)v173_.v175 +
                              (((char*)v173_.v174 - (char*)v173_.v175 + 7) &
                               0xFFFFFFFFFFFFFFF8LL));
    }
  }
  if (v173_.v173 != 0) {
    v103 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v103 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v103, v173_.v173);
  }
  v104 = v179_.v180;
  v105 = v179_.v181;
  v179_.v184 = 0;
  v106 = v179_.v181 - v179_.v180;
  if (v106 >= 3) {
    v107 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v104 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v107 + 200LL) != 0) {
          v108 = 128;
        }
        else {
          v108 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v107 + v108, *v104);
        v104 = v179_.v180;
        v105 = v179_.v181;
      }
      v179_.v180 = ++v104;
      v106 = v105 - v104;
    } while (v106 > 2);
  }
  if (v106 == 1) {
    v109 = 256;
  LABEL_200:
    v179_.v183 = v109;
  }
  else if (v106 == 2) {
    v109 = 512;
    goto LABEL_200;
  }
  if (v104 != v105) {
    v110 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v104 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v110 + 200LL) != 0) {
          v111 = 128;
        }
        else {
          v111 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v110 + v111, *v104);
      }
      ++v104;
    } while (v104 != v105);
    if (v179_.v180 != v179_.v181) {
      v179_.v181 = (__int64*)((char*)v179_.v181 +
                              (((char*)v179_.v180 - (char*)v179_.v181 + 7) &
                               0xFFFFFFFFFFFFFFF8LL));
    }
  }
  if (v179_.v179 != nullptr) {
    v112 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v112 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, (__int64)v179_.v179);
  }
  v13 = v162;
LABEL_216:
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
  }
LABEL_219:
  v113 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_UnitInfo/L_BasicStatus");
  game_gameui_Util_SetBasicStatusForUnitInfo_alt1((__int64)v113, a1[133]);
  v114 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_UnitInfo/L_BattleStatus");
  GameHr_158d1a0((__int64)v114, a1[133]);
  v115 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_UnitInfo/L_SkillInfo");
  GameRoutine_157ef40_alt1((__int64)v115, a1[133]);
  v116 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_MasteryInfo");
  Util_1575c70_alt1((__int64)v116, a1[133], 2, nullptr, 0, 0);
  a1[85] = a1[84];
  game_menu_PageTab_Add_alt1(a1 + 82, 0);
  v117 = GameRoutine_15745c0_alt1((unsigned __int16*)a1[133], 1);
  if (v117 >= 1) {
    v118 = v117;
    game_menu_PageTab_Add_alt1(a1 + 82, 1);
    if (v118 >= 0xF) {
      game_menu_PageTab_Add_alt1(a1 + 82, 2);
    }
  }
  v119 = a1[133];
  if ((*(_BYTE*)(v119 + 1834) & 4) != 0) {
    game_menu_PageTab_Add_alt1(a1 + 82, 3);
    v119 = a1[133];
  }
  LOBYTE(v187_.v187) = 0;
  LOWORD(v173_.v173) = 4;
  v179_.v183 = (unsigned __int64)&v179_.v179;
  v179_.v179 = GameData_20e2e40;
  v179_.v180 = &v187_.v187;
  game_UnitSkillList_EachIndirectSkill_alt1(v119 + 1456, &v173_.v173,
                                            (__int64)&v179_.v179);
  if ((__int64 (***)(void))v179_.v183 == &v179_.v179) {
    v121 = 32;
  LABEL_228:
    (*(void (**)(__int64))(*(_QWORD*)v179_.v183 + v121))((__int64)v179_.v183);
  }
  else if (v179_.v183 != 0) {
    v121 = 40;
    goto LABEL_228;
  }
  if ((unsigned __int8)v187_.v187 == 1) {
    game_menu_PageTab_Add_alt1(a1 + 82, 4);
  }
  if ((game_gameui_Util_IsVisibleSpecialPage_alt1(a1[133]) & 1) != 0) {
    game_menu_PageTab_Add_alt1(a1 + 82, 5);
  }
  v122 = a1[133];
  v123 = *(_QWORD*)(v122 + 400);
  v124 = *(unsigned __int8*)(v123 + 96);
  if (v124 == 2) {
    if (*(_BYTE*)(v122 + 1880) != 0) {
      v127 = (__int64*)(v122 + 1880);
    }
    else {
      v128 = *(_QWORD*)(v123 + 112);
      if (v128 != 0) {
        v127 = &GameData_21f4018[8 * (unsigned __int64)*(
                                         unsigned __int8*)(v128 + 32)];
      }
      else {
        v127 = GameData_212c8b0[0];
      }
    }
    v126 = false;
    v125 = *(unsigned __int8*)v127 != 0;
  }
  else if (v124 == 1) {
    v125 = false;
    v126 = *(_BYTE*)(v122 + 1944) != 0;
  }
  else {
    v126 = false;
    v125 = false;
  }
  v133 = *(_QWORD*)(v122 + 408);
  v134 = *(_WORD*)(v122 + 1536);
  LODWORD(v173_.v173) = v133 != 0;
  if (v133 == 0) {
    LOWORD(v169_.v169) = 512;
    v179_.v183 = (unsigned __int64)&v179_.v179;
    v179_.v179 = GameData_20e2ec0;
    v179_.v180 = a1;
    v179_.v181 = &v173_.v173;
    game_UnitSkillList_EachIndirectSkill_alt1(v122 + 1456, &v169_.v169,
                                              (__int64)&v179_.v179);
    if ((__int64 (***)(void))v179_.v183 == &v179_.v179) {
      v135 = 32;
    LABEL_254:
      (*(void (**)(__int64))(*(_QWORD*)v179_.v183 + v135))((__int64)v179_.v183);
    }
    else if (v179_.v183 != 0) {
      v135 = 40;
      goto LABEL_254;
    }
    v136 = a1[133];
    v137 = *(_QWORD*)(v136 + 1744);
    v138 = *(unsigned int*)((char*)((_UNKNOWN*)0x114LL) +
                            game_g_shared_system_skills_ptr);
    v139 = *(_QWORD*)(v136 + 1752) - v137;
    LODWORD(v179_.v179) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x114LL) +
                                     game_g_shared_system_skills_ptr) &
                          0xFFF;
    if (((v138 >> 5) & 0x7F) + 1 <= v139 >> 2 &&
        ((*(_DWORD*)(v137 + 4 * ((v138 >> 5) & 0x7F)) >> v138) & 1) != 0) {
      v140 = game_HasActiveSkill_843420_alt1(&v179_.v179, v136 + 1744);
      v141 = v173_.v173;
      if (v140) {
        v141 = v173_.v173 + 1;
        LODWORD(v173_.v173) = v173_.v173 + 1;
      }
    }
    else {
      v141 = v173_.v173;
    }
    v142 = (v134 & 0x40) == 0 || v125;
    if (((v126 | v142) & 1) == 0 && v141 <= 0) {
      game_menu_PageTab_Add_alt1(a1 + 82, 6);
    }
  }
  if (v126) {
    game_menu_PageTab_Add_alt1(a1 + 82, 7);
  }
  if (v125) {
    game_menu_PageTab_Add_alt1(a1 + 82, 8);
  }
  if ((int)v173_.v173 >= 1) {
    game_menu_PageTab_Add_alt1(a1 + 82, 9);
    if ((int)v173_.v173 >= 2) {
      game_menu_PageTab_Add_alt1(a1 + 82, 10);
      if ((int)v173_.v173 >= 3) {
        game_menu_PageTab_Add_alt1(a1 + 82, 11);
      }
    }
  }
  v143 = a1[85];
  v144 = a1[84];
  if (v143 == v144) {
    v147 = game_map_MapUnitInfoDetail_last_page_;
    LODWORD(v146) = 0;
    if ((v2 & 1) != 0 && game_map_MapUnitInfoDetail_last_page_ != 12) {
      goto LABEL_300;
    }
  LABEL_289:
    if (v147 == 12) {
      goto LABEL_301;
    }
    if (v143 != v144) {
      v149 = wmemchr_alt1(v144, v147, (v143 - v144) >> 2);
      v147 = game_map_MapUnitInfoDetail_last_page_;
      v150 = v149 != 0 ? v149 : v143;
      v143 = a1[85];
      if (v150 != v143) {
        v144 = a1[84];
        if (v143 != v144) {
          v146 = 0;
          while (*(_DWORD*)(v144 + 4 * v146) !=
                 game_map_MapUnitInfoDetail_last_page_) {
            if ((v143 - v144) >> 2 == ++v146) {
              goto LABEL_299;
            }
          }
          goto LABEL_304;
        }
        goto LABEL_358;
      }
    }
    v144 = a1[84];
    switch (v147) {
    case 8u:
      if (v143 == v144) {
        goto LABEL_360;
      }
      v160 = wmemchr_alt1(v144, 7u, (v143 - v144) >> 2);
      if (v160 != 0) {
        v158 = v160;
      }
      else {
        v158 = v143;
      }
      v143 = a1[85];
      v144 = a1[84];
      if (v158 == v143) {
        goto LABEL_361;
      }
      if (v143 != v144) {
        v146 = 0;
        while (*(_DWORD*)(v144 + 4 * v146) != 7) {
          if ((v143 - v144) >> 2 == ++v146) {
          LABEL_299:
            LODWORD(v146) = 0;
            goto LABEL_304;
          }
        }
        goto LABEL_304;
      }
      break;
    case 7u:
      if (v143 == v144) {
        goto LABEL_360;
      }
      v159 = wmemchr_alt1(v144, 8u, (v143 - v144) >> 2);
      if (v159 != 0) {
        v158 = v159;
      }
      else {
        v158 = v143;
      }
      v143 = a1[85];
      v144 = a1[84];
      if (v158 == v143) {
        goto LABEL_361;
      }
      if (v143 != v144) {
        v146 = 0;
        while (*(_DWORD*)(v144 + 4 * v146) != 8) {
          if ((v143 - v144) >> 2 == ++v146) {
            goto LABEL_299;
          }
        }
        goto LABEL_304;
      }
      break;
    case 2u:
      if (v143 != v144) {
        v157 = wmemchr_alt1(v144, 1u, (v143 - v144) >> 2);
        if (v157 != 0) {
          v158 = v157;
        }
        else {
          v158 = v143;
        }
        v143 = a1[85];
        v144 = a1[84];
        if (v158 != v143) {
          if (v143 != v144) {
            v146 = 0;
            while (*(_DWORD*)(v144 + 4 * v146) != 1) {
              if ((v143 - v144) >> 2 == ++v146) {
                goto LABEL_299;
              }
            }
            goto LABEL_304;
          }
          break;
        }
      LABEL_361:
        v143 = v158;
        goto LABEL_304;
      }
    LABEL_360:
      v144 = v143;
      goto LABEL_304;
    default:
      goto LABEL_304;
    }
  LABEL_358:
    LODWORD(v146) = 0;
    v144 = v143;
    goto LABEL_304;
  }
  v145 = (v143 - v144) >> 2;
  v146 = 0;
  while (*(_DWORD*)(v144 + 4 * v146) != 0) {
    if (v145 == ++v146) {
      LODWORD(v146) = 0;
      v147 = game_map_MapUnitInfoDetail_last_page_;
      if ((v2 & 1) == 0) {
        goto LABEL_289;
      }
      goto LABEL_284;
    }
  }
  v147 = game_map_MapUnitInfoDetail_last_page_;
  if ((v2 & 1) == 0) {
    goto LABEL_289;
  }
LABEL_284:
  if (v147 == 12) {
    goto LABEL_289;
  }
  v148 = wmemchr_alt1(v144, v147, v145);
  if (v148 != 0) {
    v143 = v148;
  }
  v144 = a1[84];
  if (v143 != a1[85]) {
    v147 = game_map_MapUnitInfoDetail_last_page_;
    v143 = a1[85];
    goto LABEL_289;
  }
LABEL_300:
  game_map_MapUnitInfoDetail_last_page_ = 12;
LABEL_301:
  v151 = v146;
  if ((int)v146 < (unsigned __int64)((v143 - v144) >> 2)) {
    v151 = *(_DWORD*)(v144 + 4LL * (int)v146);
  }
  game_map_MapUnitInfoDetail_last_page_ = v151;
LABEL_304:
  BasicMenu_16dd8b0_alt1((__int64)a1, (unsigned __int64)(v143 - v144) >> 2,
                         v146);
  LayoutAccessor_1560070_alt1((void*)(&v173_.v173), a1 + 106, "L_PageTab");
  if (v173_.v174 != nullptr && (v152 = std___1___shared_weak_count_lock_alt1(
                                    (__int64)v173_.v174)) != 0) {
    v153 = v152;
    v154 = 0;
    v166_.v166 = v173_.v173;
    v166_.v167 = v152;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v152 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v153 = 0;
    v166_.v166 = 0;
    v166_.v167 = 0;
    v154 = 1;
  }
  v179_.v179 = GameData_20e2fc0;
  v179_.v183 = (unsigned __int64)&v179_.v179;
  game_menu_PageTab_SetupLabel_alt1((__int64)(a1 + 82), &v166_.v166,
                                    (__int64)&v179_.v179, 3u, 0xEu, 0xFu);
  if ((__int64 (***)(void))v179_.v183 == &v179_.v179) {
    v155 = 32;
  LABEL_312:
    (*(void (**)(__int64))(*(_QWORD*)v179_.v183 + v155))((__int64)v179_.v183);
  }
  else if (v179_.v183 != 0) {
    v155 = 40;
    goto LABEL_312;
  }
  if (v166_.v167 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v166_.v167);
  }
  if ((v154 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v153 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v153 + 16LL))(v153);
    std___1___shared_weak_count___release_weak_alt1(v153);
  }
  if (v173_.v174 != nullptr) {
    std___1___shared_weak_count___release_weak_alt1((__int64)v173_.v174);
  }
  v156 = a1[84];
  if ((int)v146 < (unsigned __int64)((a1[85] - v156) >> 2)) {
    LODWORD(v146) = *(_DWORD*)(v156 + 4LL * (int)v146);
  }
  GameRoutine_182e580_alt1(a1, v146);
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    GameRoutine_18ae960_alt1(*(_QWORD**)GameData_212d8b0[0], 0);
  }
}

__int64 MapUnitInfoDetail_Unknown92(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  struct {
    __int64* v10;
    int v11;
    char gap20_[4];
    __int64 v12;
  } v10_;
  __int64 var4;

  v2 = *(_QWORD**)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    if (v2[19] != 0) {
      v10_.v12 = 0;
      v10_.v10 = GameData_212d890[0] + 2;
      v10_.v11 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64**))(
          v2[1] + 16LL))((void*)(&var4), v2 + 1, &v10_.v10);
    }
    v2[20] = 0;
    GameHr_18af120(v2, (__int64*)(a1 + 848));
    FloatingHelp_18af980((__int64)v2, (__int64*)(a1 + 848));
  }
  v3 = *(_QWORD*)GameData_212d0d0[0];
  v4 = *(_QWORD*)(*(_QWORD*)GameData_212d0d0[0] + 160LL);
  *(_BYTE*)(v3 + 152) = 0;
  MapUnitInfo_1829460(v3, v4);
  GameRoutine_1829dc0(v3);
  MapUnitInfo_182aaa0(v3, 0);
  if (*GameData_212cff8[0] != 0) {
    MapInfo_825790(*GameData_212cff8[0]);
  }
  v5 = a1;
  v6 = a1;
  v7 = GameData_212c610;
  v8 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v6, v7, v8, 0);
    v6 = *(_QWORD*)(v6 + 32);
    if (result != 0) {
      v5 = result;
    }
  } while (v6 != 0);
  if (v5 == a1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  return result;
}

__int64 MapUnitInfoDetail_182ebe0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 result;
  struct {
    const char* v29;
    __int64 v30;
  } v29_;
  struct {
    const char* v31;
    __int64 v32;
  } v31_;
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;

  v2 = *(_QWORD*)(a1 + 856);
  v31_.v31 = "L_UnitInfo/L_UnitInfoDetail";
  v31_.v32 = 27;
  if (v2 == 0) {
    goto LABEL_15;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_15;
  }
  v4 = *(_QWORD*)(a1 + 848);
  v5 = v3;
  if (v4 != 0) {
    GameRoutine_15b71b0((void*)(&v33_.v33), *(_QWORD*)(a1 + 848),
                        (__int64)&v31_.v31);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
    if (v4 != 0) {
      goto LABEL_7;
    }
  LABEL_15:
    v33_.v33 = 0;
    v33_.v34 = 0;
    goto LABEL_16;
  }
  if (v4 == 0) {
    goto LABEL_15;
  }
LABEL_7:
  if (v33_.v34 == 0 || *(_QWORD*)(v33_.v34 + 8) == -1) {
    goto LABEL_16;
  }
  v31_.v31 = nullptr;
  v6 = std___1___shared_weak_count_lock_alt1(v33_.v34);
  v31_.v32 = v6;
  if (v6 == 0) {
    if ((FloatingHelp_18ade60(&v31_.v31) & 1) == 0) {
      goto LABEL_16;
    }
  LABEL_31:
    v16 = std___1___shared_weak_count_lock_alt1(v33_.v34);
    v17 = v33_.v33;
    v18 = *(unsigned __int8*)(v33_.v33 + 904);
    v19 = *(_QWORD*)(v33_.v33 + 912);
    if ((v18 & 1) == 0) {
      v19 = v18 >> 1;
    }
    if (v19 != 0) {
      if ((v18 & 1) == 0) {
        *(_BYTE*)(v33_.v33 + 905) = 0;
        goto LABEL_44;
      }
      **(_BYTE**)(v33_.v33 + 920) = 0;
      *(_QWORD*)(v17 + 912) = 0;
      LOBYTE(v18) = *(_BYTE*)(v17 + 904);
    }
    if ((v18 & 1) != 0) {
      *(_QWORD*)(v17 + 912) = 13;
      v24 = *(char**)(v17 + 920);
    LABEL_46:
      strcpy(v24, "L_MasteryInfo");
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v25 = v16;
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak_alt1(v25);
      }
      goto LABEL_16;
    }
  LABEL_44:
    *(_BYTE*)(v17 + 904) = 26;
    v24 = (char*)(v17 + 905);
    goto LABEL_46;
  }
  v7 = v6;
  v31_.v31 = (const char*)v33_.v33;
  v8 = FloatingHelp_18ade60(&v31_.v31);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  if ((v8 & 1) != 0) {
    goto LABEL_31;
  }
LABEL_16:
  v9 = *(_QWORD*)(a1 + 856);
  v29_.v29 = "L_SkillInfo";
  v29_.v30 = 11;
  if (v9 != 0) {
    v10 = std___1___shared_weak_count_lock_alt1(v9);
    if (v10 != 0) {
      v11 = *(_QWORD*)(a1 + 848);
      v12 = v10;
      if (v11 != 0) {
        GameRoutine_15b71b0((void*)((__int64*)&v31_.v31), v11,
                            (__int64)&v29_.v29);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
      if (v11 != 0 && v31_.v32 != 0) {
        if (*(_QWORD*)(v31_.v32 + 8) != -1) {
          v29_.v29 = nullptr;
          v13 = std___1___shared_weak_count_lock_alt1(v31_.v32);
          v29_.v30 = v13;
          if (v13 != 0) {
            v14 = v13;
            v29_.v29 = v31_.v31;
            v15 = FloatingHelp_18ade60(&v29_.v29);
            if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
              std___1___shared_weak_count___release_weak_alt1(v14);
            }
            if ((v15 & 1) == 0) {
              goto LABEL_54;
            }
          LABEL_37:
            v20 = std___1___shared_weak_count_lock_alt1(v31_.v32);
            v21 = (__int64)v31_.v31;
            v22 = *((unsigned __int8*)v31_.v31 + 904);
            v23 = *((_QWORD*)v31_.v31 + 114);
            if ((v22 & 1) == 0) {
              v23 = v22 >> 1;
            }
            if (v23 != 0) {
              if ((v22 & 1) == 0) {
                *((_BYTE*)v31_.v31 + 905) = 0;
                goto LABEL_50;
              }
              **((_BYTE**)v31_.v31 + 115) = 0;
              *(_QWORD*)(v21 + 912) = 0;
              LOBYTE(v22) = *(_BYTE*)(v21 + 904);
            }
            if ((v22 & 1) != 0) {
              *(_QWORD*)(v21 + 912) = 13;
              v26 = *(char**)(v21 + 920);
            LABEL_52:
              strcpy(v26, "L_MasteryInfo");
              if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v27 = v20;
                (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
                std___1___shared_weak_count___release_weak_alt1(v27);
              }
              goto LABEL_54;
            }
          LABEL_50:
            *(_BYTE*)(v21 + 904) = 26;
            v26 = (char*)(v21 + 905);
            goto LABEL_52;
          }
          if ((FloatingHelp_18ade60(&v29_.v29) & 1) != 0) {
            goto LABEL_37;
          }
        }
      LABEL_54:
        if (v31_.v32 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v31_.v32);
        }
      }
    }
  }
  result = v33_.v34;
  if (v33_.v34 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v33_.v34);
  }
  return result;
}

__int64 MapUnitInfoDetail_Unknown103(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfc0[0];
  v3 = GameRoutine_752480(
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 1);
  if (*(_QWORD*)(a1 + 1064) == v3) {
    return 0;
  }
  v4 = Cursor_730e40(*(_QWORD*)(*v2 + 48), v3);
  v5 = GameRoutine_7595d0(v4);
  *(_QWORD*)(a1 + 1064) = v5;
  MapUnitInfo_1828ef0(*(_QWORD*)GameData_212d0d0[0], v5);
  GameRoutine_182cf20(a1, 0);
  return 13;
}

__int64 MapUnitInfoDetail_Unknown105(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfc0[0];
  v3 = GameRoutine_752480(
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 0);
  if (*(_QWORD*)(a1 + 1064) == v3) {
    return 0;
  }
  v4 = Cursor_730e40(*(_QWORD*)(*v2 + 48), v3);
  v5 = GameRoutine_7595d0(v4);
  *(_QWORD*)(a1 + 1064) = v5;
  MapUnitInfo_1828ef0(*(_QWORD*)GameData_212d0d0[0], v5);
  GameRoutine_182cf20(a1, 0);
  return 13;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda0_Invoke(__int64 result,
                                                            int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
  if (v2 != 0 && (*a2 & 0xFFF) != 0) {
    v4 = result;
    v5 = GameData_212c880[0];
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v6);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v6 + 273) == 0 ||
          ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL)),
            v8 = *(unsigned __int8*)(v7 + 104),
            v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
               ? (v10 = 0)
               : (v10 = ((unsigned int)*a2 >> 19) & 0x1F),
           (int)(v10 - (((unsigned int)*a2 >> 12) & 0x7F) + v9) >= 1)) {
        result = GameRoutine_6fc7a0(v6, v2 + 1744);
        if ((result & 1) != 0) {
          v11 = *(_QWORD**)(v4 + 16);
          v12 = v11[1];
          v13 = v11[2];
          v14 = v13 - v12;
          v15 = v13 == v12;
          v16 = *a2;
          v17 = (v14 << 6) - 1;
          v18 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL));
          if (v15) {
            v19 = 0;
          }
          else {
            v19 = v17;
          }
          v20 = v11[5] + v11[4];
          if (v19 == v20) {
            result = GameRoutine_182f4a0(v11);
            v12 = v11[1];
            v20 = v11[5] + v11[4];
            v16 = *a2;
          }
          v21 = *(_QWORD*)(v12 + 8 * (v20 >> 9)) + 8 * (v20 & 0x1FF);
          *(_DWORD*)v21 = v16;
          *(_BYTE*)(v21 + 4) = *(_BYTE*)(v18 + 112);
          ++v11[5];
        }
      }
    }
  }
  return result;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda1_Invoke(__int64 result,
                                                            int* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;

  v2 = GameData_212c880[0];
  v3 = *a2 & 0xFFF;
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3);
  if ((*(_WORD*)(v4 + 754) & 0x20) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
    v6 = v5 == 0 || (*a2 & 0xFFF) == 0;
    if (!v6) {
      v7 = result;
      result = GameRoutine_6fc510(
          *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3));
      if ((result & 1) == 0) {
        if (*(_BYTE*)(v4 + 273) == 0 ||
            ((v9 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)),
              v10 = *(unsigned __int8*)(v9 + 104),
              v11 = *(unsigned __int8*)(v9 + 273), (unsigned int)(v10 - 5) >= 2)
                 ? (v12 = 0)
                 : (v12 = ((unsigned int)*a2 >> 19) & 0x1F),
             (int)(v12 - (((unsigned int)*a2 >> 12) & 0x7F) + v11) >= 1)) {
          result = GameRoutine_6fc7a0(v4, v5 + 1744);
          if ((result & 1) != 0) {
            v13 = *(_QWORD**)(v7 + 16);
            v14 = v13[1];
            v15 = v13[2];
            v16 = v15 - v14;
            v6 = v15 == v14;
            v17 = *a2;
            v18 = (v16 << 6) - 1;
            v19 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL));
            if (v6) {
              v20 = 0;
            }
            else {
              v20 = v18;
            }
            v21 = v13[5] + v13[4];
            if (v20 == v21) {
              result = GameRoutine_182f4a0(*(_QWORD*)(v7 + 16));
              v14 = v13[1];
              v21 = v13[5] + v13[4];
              v17 = *a2;
            }
            v22 = *(_QWORD*)(v14 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF);
            *(_DWORD*)v22 = v17;
            *(_BYTE*)(v22 + 4) = *(_BYTE*)(v19 + 112);
            ++v13[5];
          }
        }
      }
    }
  }
  return result;
}

__int64* MapUnitInfoDetail_182ff80(__int64* result, __int64* a2, char* a3,
                                   __int64* a4, unsigned __int64 a5,
                                   __int64* a6, __int64 a7)
{
  __int64 v7;
  int v8;
  __int64* v9;
  unsigned __int64 v10;
  signed __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64* v28;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  unsigned int v36;
  unsigned int v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  if (a5 >= 2) {
    v7 = (__int64)a2;
    if (a5 == 2) {
      if (a4 == *(__int64**)a3) {
        a4 = (__int64*)(*((_QWORD*)a3 - 1) + 4096LL);
      }
      if (*((unsigned __int8*)a4 - 4) >
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        v8 = *(_DWORD*)a2;
        *(_DWORD*)a2 = *((_DWORD*)a4 - 2);
        *((_DWORD*)a4 - 2) = v8;
        LOBYTE(v8) = *((_BYTE*)a2 + 4);
        *((_BYTE*)a2 + 4) = *((_BYTE*)a4 - 4);
        *((_BYTE*)a4 - 4) = v8;
      }
    }
    else {
      v9 = result;
      if ((__int64)a5 <= 0) {
        if (a2 != a4) {
          v14 = *result;
          for (i = (__int64)(a2 + 1);; i += 8) {
            if (i - v14 == 4096) {
              v16 = v9[1];
              ++v9;
              v14 = v16;
              i = v16;
            }
            if ((__int64*)i == a4) {
              break;
            }
            v17 = v9;
            v18 = i;
            if (i == v14) {
              v17 = v9 - 1;
              v18 = *(v9 - 1) + 4096;
            }
            if (*(unsigned __int8*)(i + 4) >
                (unsigned int)*(unsigned __int8*)(v18 - 4)) {
              v19 = *(_QWORD*)i;
              v20 = i;
              v21 = HIDWORD(*(_QWORD*)i);
              do {
                v23 = v18;
                v24 = v20;
                v20 = v23 - 8;
                *(_DWORD*)v24 = *(_DWORD*)(v23 - 8);
                *(_BYTE*)(v24 + 4) = *(_BYTE*)(v23 - 4);
                if ((__int64*)(v23 - 8) == a2) {
                  break;
                }
                if (v20 == *v17) {
                  v22 = *--v17;
                  v18 = v22 + 4096;
                }
                else {
                  v18 = v23 - 8;
                }
              } while (*(unsigned __int8*)(v18 - 4) <
                       (unsigned int)(unsigned __int8)v21);
              *(_DWORD*)(v23 - 8) = v19;
              *(_BYTE*)(v23 - 4) = v21;
              v14 = *v9;
            }
          }
        }
      }
      else {
        v10 = a5 >> 1;
        v11 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
        if (v11 < 1) {
          v25 = 511 - v11;
          v12 = &result[-(v25 >> 9)];
          v13 = (__int64*)(*v12 + 8LL * (~(_WORD)v25 & 0x1FF));
        }
        else {
          v12 = &result[(unsigned __int64)v11 >> 9];
          v13 = (__int64*)(*v12 + 8 * (v11 & 0x1FF));
        }
        v26 = a5 - v10;
        v28 = a4;
        if ((__int64)a5 <= a7) {
          v32 = a6;
          MapUnitInfoDetail_18302e0_alt1(result, a2, v12, (__int64)v13, a5 >> 1,
                                         a6);
          v33 = &v32[v10];
          result = MapUnitInfoDetail_18302e0_alt1(v12, v13, a3, (__int64)v28,
                                                  v26, v33);
          v34 = &v32[a5];
          v35 = v33;
          while (v35 != v34) {
            v36 = *((unsigned __int8*)v35 + 4);
            v37 = *((unsigned __int8*)v32 + 4);
            if (v36 > v37) {
              v38 = v35;
            }
            else {
              v38 = v32;
            }
            if (v36 > v37) {
              ++v35;
            }
            else {
              ++v32;
            }
            *(_DWORD*)v7 = *(_DWORD*)v38;
            *(_BYTE*)(v7 + 4) = *((_BYTE*)v38 + 4);
            v7 += 8;
            if (v7 - *v9 == 4096) {
              v39 = v9[1];
              ++v9;
              v7 = v39;
            }
            if (v32 == v33) {
              while (v35 != v34) {
                *(_DWORD*)v7 = *(_DWORD*)v35;
                *(_BYTE*)(v7 + 4) = *((_BYTE*)v35 + 4);
                v7 += 8;
                if (v7 - *v9 == 4096) {
                  v41 = v9[1];
                  ++v9;
                  v7 = v41;
                }
                ++v35;
              }
              return result;
            }
          }
          while (v32 != v33) {
            *(_DWORD*)v7 = *(_DWORD*)v32;
            *(_BYTE*)(v7 + 4) = *((_BYTE*)v32 + 4);
            v7 += 8;
            if (v7 - *v9 == 4096) {
              v40 = v9[1];
              ++v9;
              v7 = v40;
            }
            ++v32;
          }
        }
        else {
          MapUnitInfoDetail_182ff80(result, (__int64)a2, (char*)v12,
                                    (__int64)v13, a5 >> 1, a6, a7);
          MapUnitInfoDetail_182ff80(v12, (__int64)v13, a3, (__int64)v28, v26,
                                    a6, a7);
          return MapUnitInfoDetail_18305e0(v9, v7, v12, (__int64)v13, a3, v28,
                                           v10, v26, (__int64)a6, a7);
        }
      }
    }
  }
  return result;
}

_QWORD* MapUnitInfoDetail_18302e0(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64* v24;
  int* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int* v36;

  if (a5 != 0) {
    if (a5 == 2) {
      if (a4 == *a3) {
        a4 = *(a3 - 1) + 4096LL;
      }
      if (*(unsigned __int8*)(a4 - 4) <=
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        *(_QWORD*)a6 = *(_QWORD*)a2;
        v6 = *(_QWORD*)(a4 - 8);
      }
      else {
        *(_QWORD*)a6 = *(_QWORD*)(a4 - 8);
        v6 = *(_QWORD*)a2;
      }
      *(_QWORD*)(a6 + 8) = v6;
    }
    else if (a5 == 1) {
      *(_QWORD*)a6 = *(_QWORD*)a2;
    }
    else if ((__int64)a5 > 8) {
      v15 = a5 >> 1;
      v18 = a4;
      v19 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
      if (v19 < 1) {
        v22 = 511 - v19;
        v20 = &result[-(v22 >> 9)];
        v21 = (int*)(*v20 + 8LL * (~(_WORD)v22 & 0x1FF));
      }
      else {
        v20 = &result[(unsigned __int64)v19 >> 9];
        v21 = (int*)(*v20 + 8 * (v19 & 0x1FF));
      }
      v23 = result;
      v24 = (__int64*)a2;
      GameRoutine_182ff80(result, a2, v20, (__int64)v21, a5 >> 1, (int*)a6,
                          v15);
      result = GameRoutine_182ff80(v20, v21, a3, v18, a5 - v15,
                                   (int*)(a6 + 8 * v15), a5 - v15);
      if (v24 == (__int64*)v21) {
        v26 = v21;
        v27 = (_QWORD*)a6;
      LABEL_45:
        while (v26 != (int*)v18) {
          v35 = *(_QWORD*)v26;
          v26 += 2;
          *v27 = v35;
          if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
            v36 = (int*)v20[1];
            ++v20;
            v26 = v36;
          }
          ++v27;
        }
      }
      else {
        v26 = v21;
        v27 = (_QWORD*)a6;
        v28 = v23;
        while (v26 != (int*)v18) {
          if (*((unsigned __int8*)v26 + 4) <=
              (unsigned int)*((unsigned __int8*)v24 + 4)) {
            v31 = *v24++;
            *v27 = v31;
            if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
              v32 = (__int64*)v28[1];
              ++v28;
              v24 = v32;
            }
          }
          else {
            v29 = *(_QWORD*)v26;
            v26 += 2;
            *v27 = v29;
            if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
              v30 = (int*)v20[1];
              ++v20;
              v26 = v30;
            }
          }
          ++v27;
          if (v24 == (__int64*)v21) {
            goto LABEL_45;
          }
        }
        while (v24 != (__int64*)v21) {
          v33 = *v24++;
          *v27 = v33;
          if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
            v34 = (__int64*)v28[1];
            ++v28;
            v24 = v34;
          }
          ++v27;
        }
      }
    }
    else if (a2 != (int*)a4) {
      v7 = 0;
      v8 = (_QWORD*)a6;
      *(_QWORD*)a6 = *(_QWORD*)a2;
      while (1) {
        a2 += 2;
        if ((char*)((char*)a2 - *result) == (char*)((char*)0x1000LL)) {
          v9 = (__int64*)result[1];
          ++result;
          a2 = (int*)v9;
        }
        if (a2 == (int*)a4) {
          break;
        }
        v10 = v8 + 1;
        if (*((unsigned __int8*)a2 + 4) <=
            (unsigned int)*((unsigned __int8*)v8 + 4)) {
          *v10 = *(_QWORD*)a2;
        }
        else {
          v8[1] = *v8;
          v11 = a6;
          if (v8 != (_QWORD*)a6) {
            v12 = v7;
            while (1) {
              v11 = a6 + v12;
              v13 = *(unsigned __int8*)(a6 + v12 - 4);
              if (*((unsigned __int8*)a2 + 4) <= v13) {
                break;
              }
              v14 = *(_DWORD*)(v11 - 8);
              v12 -= 8;
              *(_BYTE*)(v11 + 4) = v13;
              *(_DWORD*)v11 = v14;
              if (v12 == 0) {
                v11 = a6;
                break;
              }
            }
          }
          *(_DWORD*)v11 = *a2;
          *(_BYTE*)(v11 + 4) = *((_BYTE*)a2 + 4);
        }
        v7 += 8;
        v8 = v10;
      }
    }
  }
  return result;
}

__int64* MapUnitInfoDetail_18305e0(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10)
{
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  _BOOL4 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  _QWORD* v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  __int64* v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  __int64* v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  int v96;
  __int64* v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  if (a8 == 0) {
    return result;
  }
  while (a7 > a10 && a8 > a10) {
    if (a7 == 0) {
      return result;
    }
    while (*(unsigned __int8*)(a4 + 4) <=
           (unsigned int)*(unsigned __int8*)(a2 + 4)) {
      a2 += 8;
      if (a2 - *result == 4096) {
        v12 = result[1];
        ++result;
        a2 = v12;
      }
      if (--a7 == 0) {
        return result;
      }
    }
    if (a7 >= a8) {
      if (a7 == 1) {
        v96 = *(_DWORD*)a2;
        *(_DWORD*)a2 = *(_DWORD*)a4;
        *(_DWORD*)a4 = v96;
        LOBYTE(v96) = *(_BYTE*)(a2 + 4);
        *(_BYTE*)(a2 + 4) = *(_BYTE*)(a4 + 4);
        *(_BYTE*)(a4 + 4) = v96;
        return result;
      }
      v21 = result;
      v22 = a2;
      v29 = a7 / 2;
      if ((unsigned __int64)(a7 + 1) < 3) {
      LABEL_31:
        if (a6 == (__int64*)a4) {
          goto LABEL_51;
        }
      }
      else {
        v30 = v29 + ((a2 - *result) >> 3);
        if (v30 >= 1) {
          v21 = &result[(unsigned __int64)v30 >> 9];
          v22 = *v21 + 8 * (v30 & 0x1FF);
          goto LABEL_31;
        }
        v42 = 511 - v30;
        v21 = &result[-(v42 >> 9)];
        v22 = *v21 + 8LL * (~(_WORD)v42 & 0x1FF);
        if (a6 == (__int64*)a4) {
        LABEL_51:
          v15 = 0;
          v13 = a3;
          v14 = a4;
          goto LABEL_52;
        }
      }
      v31 = (((__int64)a6 - *(_QWORD*)a5) >> 3) + ((a5 - (char*)a3) << 6);
      v32 = *a3;
      v33 = (a4 - *a3) >> 3;
      v34 = v31 - v33;
      if (v31 != v33) {
        v14 = a4;
        v13 = a3;
        do {
          v35 = v34 >> 1;
          v36 = v14;
          v37 = v13;
          if (v34 != 1) {
            v38 = v35 + ((v14 - v32) >> 3);
            if (v38 < 1) {
              v39 = 511 - v38;
              LOWORD(v38) = ~(511 - v38);
              v37 = &v13[-(v39 >> 9)];
            }
            else {
              v37 = &v13[(unsigned __int64)v38 >> 9];
            }
            v36 = *v37 + 8 * (v38 & 0x1FF);
          }
          if (*(unsigned __int8*)(v36 + 4) >
              (unsigned int)*(unsigned __int8*)(v22 + 4)) {
            v32 = *v37;
            v14 = v36 + 8;
            if (v36 + 8 - *v37 == 4096) {
              v40 = v37[1];
              ++v37;
              v32 = v40;
              v14 = v40;
            }
            v13 = v37;
            v35 = v34 + ~v35;
          }
          v34 = v35;
        } while (v35 != 0);
        if (v14 == a4) {
          v15 = 0;
        }
        else {
          v15 = (((char*)v13 - (char*)a3) << 6) - v33 + ((v14 - v32) >> 3);
        }
        goto LABEL_52;
      }
      goto LABEL_51;
    }
    v13 = a3;
    v14 = a4;
    v15 = a8 / 2;
    if ((unsigned __int64)(a8 + 1) < 3) {
      goto LABEL_14;
    }
    v16 = v15 + ((a4 - *a3) >> 3);
    if (v16 >= 1) {
      v13 = &a3[(unsigned __int64)v16 >> 9];
      v14 = *v13 + 8 * (v16 & 0x1FF);
    LABEL_14:
      if (a4 != a2) {
        goto LABEL_15;
      }
      goto LABEL_49;
    }
    v41 = 511 - v16;
    v13 = &a3[-(v41 >> 9)];
    v14 = *v13 + 8LL * (~(_WORD)v41 & 0x1FF);
    if (a4 != a2) {
    LABEL_15:
      v17 = ((a4 - *a3) >> 3) + (((char*)a3 - (char*)result) << 6);
      v18 = *result;
      v19 = (a2 - *result) >> 3;
      v20 = v17 - v19;
      if (v17 != v19) {
        v21 = result;
        v22 = a2;
        do {
          v23 = v20 >> 1;
          v24 = v22;
          v25 = v21;
          if (v20 != 1) {
            v26 = v23 + ((v22 - v18) >> 3);
            if (v26 < 1) {
              v27 = 511 - v26;
              LOWORD(v26) = ~(511 - v26);
              v25 = &v21[-(v27 >> 9)];
            }
            else {
              v25 = &v21[(unsigned __int64)v26 >> 9];
            }
            v24 = *v25 + 8 * (v26 & 0x1FF);
          }
          if (*(unsigned __int8*)(v14 + 4) <=
              (unsigned int)*(unsigned __int8*)(v24 + 4)) {
            v18 = *v25;
            v22 = v24 + 8;
            if (v24 + 8 - *v25 == 4096) {
              v28 = v25[1];
              ++v25;
              v18 = v28;
              v22 = v28;
            }
            v21 = v25;
            v23 = v20 + ~v23;
          }
          v20 = v23;
        } while (v23 != 0);
        if (v22 == a2) {
          v29 = 0;
        }
        else {
          v29 = ((v22 - v18) >> 3) - v19 + (((char*)v21 - (char*)result) << 6);
        }
        goto LABEL_52;
      }
    }
  LABEL_49:
    v29 = 0;
    v21 = result;
    v22 = a2;
  LABEL_52:
    v43 = v14;
    v44 = v13;
    if (v22 != a4) {
      v43 = v22;
      v44 = v21;
      if (a4 != v14) {
        v44 = v21;
        v43 = v22;
        v45 = a4;
        v46 = a3;
        while (1) {
          v47 = *(_DWORD*)v43;
          *(_DWORD*)v43 = *(_DWORD*)v45;
          *(_DWORD*)v45 = v47;
          LOBYTE(v47) = *(_BYTE*)(v43 + 4);
          *(_BYTE*)(v43 + 4) = *(_BYTE*)(v45 + 4);
          *(_BYTE*)(v45 + 4) = v47;
          v43 += 8;
          if (v43 - *v44 == 4096) {
            v48 = v44[1];
            ++v44;
            v43 = v48;
          }
          v45 += 8;
          if (v45 - *v46 == 4096) {
            v49 = v46[1];
            ++v46;
            v45 = v49;
          }
          if (v45 == v14) {
            break;
          }
          if (v43 == a4) {
            a4 = v45;
            a3 = v46;
          }
        }
        if (v43 != a4) {
          v50 = v44;
          v51 = v43;
          v52 = a4;
          v53 = a3;
          while (1) {
            v54 = *(_DWORD*)v51;
            *(_DWORD*)v51 = *(_DWORD*)v52;
            *(_DWORD*)v52 = v54;
            LOBYTE(v54) = *(_BYTE*)(v51 + 4);
            *(_BYTE*)(v51 + 4) = *(_BYTE*)(v52 + 4);
            *(_BYTE*)(v52 + 4) = v54;
            v51 += 8;
            if (v51 - *v50 == 4096) {
              v55 = v50[1];
              ++v50;
              v51 = v55;
            }
            v52 += 8;
            if (v52 - *v53 == 4096) {
              v56 = v53[1];
              ++v53;
              v52 = v56;
            }
            v57 = v51 == a4;
            if (v52 == v14) {
              if (v51 == a4) {
                break;
              }
              while (1) {
                v58 = *(_DWORD*)v51;
                *(_DWORD*)v51 = *(_DWORD*)a4;
                *(_DWORD*)a4 = v58;
                LOBYTE(v58) = *(_BYTE*)(v51 + 4);
                *(_BYTE*)(v51 + 4) = *(_BYTE*)(a4 + 4);
                *(_BYTE*)(a4 + 4) = v58;
                v51 += 8;
                if (v51 - *v50 == 4096) {
                  v59 = v50[1];
                  ++v50;
                  v51 = v59;
                }
                v53 = a3;
                v52 = a4 + 8;
                if (a4 + 8 - *a3 == 4096) {
                  v52 = a3[1];
                  v53 = a3 + 1;
                }
                v57 = v51 == a4;
                if (v52 != v14) {
                  break;
                }
                if (v51 == a4) {
                  goto LABEL_79;
                }
              }
            }
            if (v57) {
              a4 = v52;
              a3 = v53;
            }
          }
        }
      }
    }
  LABEL_79:
    v60 = a7 - v29;
    v61 = a8 - v15;
    if (v29 + v15 >= a8 - (v29 + v15) + a7) {
      v110 = a9;
      v111 = a10;
      v67 = a10;
      v68 = a9;
      v69 = result;
      v112 = v29;
      v70 = a2;
      v71 = v14;
      v72 = v21;
      v61 = v15;
      MapUnitInfoDetail_18305e0(v44, v43, v13, v71, a5, a6, v60, a8 - v15, v110,
                                v111);
      v60 = v112;
      result = v69;
      a9 = v68;
      a10 = v67;
      a2 = v70;
      a3 = v72;
      v14 = v22;
      a5 = (char*)v44;
      a6 = (__int64*)v43;
    }
    else {
      v62 = v22;
      v63 = a5;
      v64 = a6;
      v65 = v29;
      v66 = v13;
      MapUnitInfoDetail_18305e0(result, a2, v21, v62, v44, v43, v65, v15, a9,
                                a10);
      a3 = v66;
      a5 = v63;
      a6 = v64;
      result = v44;
      a2 = v43;
    }
    a7 = v60;
    a8 = v61;
    a4 = v14;
    if (v61 == 0) {
      return result;
    }
  }
  if (a7 > a8) {
    if ((__int64*)a4 == a6) {
      return result;
    }
    v73 = (_QWORD*)a9;
    v74 = (__int64*)a4;
    v75 = a3;
    do {
      v76 = *v74++;
      *v73 = v76;
      if ((char*)((char*)v74 - *v75) == (char*)GameRoutine_1000) {
        v77 = (__int64*)v75[1];
        ++v75;
        v74 = v77;
      }
      ++v73;
    } while (v74 != a6);
    while (2) {
      if (a4 == a2) {
        if ((_QWORD*)a9 != v73) {
          v97 = *(__int64**)a5;
          do {
            v98 = (__int64)a6;
            if (a6 == v97) {
              v98 = *((_QWORD*)a5 - 1) + 4096LL;
            }
            *(_DWORD*)(v98 - 8) = *((_DWORD*)v73 - 2);
            *(_BYTE*)(v98 - 4) = *((_BYTE*)v73 - 4);
            v97 = *(__int64**)a5;
            if (a6 == *(__int64**)a5) {
              v99 = *((__int64**)a5 - 1);
              a5 -= 8;
              v97 = v99;
              a6 = v99 + 512;
            }
            --v73;
            --a6;
          } while (v73 != (_QWORD*)a9);
        }
        return result;
      }
      if (*a3 == a4) {
        v80 = *(a3 - 1);
        v78 = (char*)v73 - 4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(v80 + 4092)) {
          goto LABEL_104;
        }
        v79 = v80 + 4096;
      }
      else {
        v78 = (char*)v73 - 4;
        v79 = a4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(a4 - 4)) {
        LABEL_104:
          v83 = (__int64)a6;
          if (a6 == *(__int64**)a5) {
            v83 = *((_QWORD*)a5 - 1) + 4096LL;
          }
          v84 = *((_DWORD*)v73-- - 2);
          *(_DWORD*)(v83 - 8) = v84;
          *(_BYTE*)(v83 - 4) = *v78;
          goto LABEL_107;
        }
      }
      v81 = (__int64)a6;
      if (a6 == *(__int64**)a5) {
        v81 = *((_QWORD*)a5 - 1) + 4096LL;
      }
      *(_DWORD*)(v81 - 8) = *(_DWORD*)(v79 - 8);
      *(_BYTE*)(v81 - 4) = *(_BYTE*)(v79 - 4);
      if (a4 == *a3) {
        v82 = *--a3;
        a4 = v82 + 4096;
      }
      a4 -= 8;
    LABEL_107:
      if (a6 == *(__int64**)a5) {
        v85 = *((_QWORD*)a5 - 1);
        a5 -= 8;
        a6 = (__int64*)(v85 + 4096);
      }
      --a6;
      if (v73 == (_QWORD*)a9) {
        return result;
      }
      continue;
    }
  }
  if (a2 == a4) {
    return result;
  }
  v86 = -a9;
  v87 = (_QWORD*)a9;
  v88 = (__int64*)a2;
  v89 = result;
  do {
    v90 = *v88++;
    *v87 = v90;
    if ((char*)((char*)v88 - *v89) == (char*)GameRoutine_1000) {
      v91 = (__int64*)v89[1];
      ++v89;
      v88 = v91;
    }
    ++v87;
    v86 -= 8;
  } while (v88 != (__int64*)a4);
  while ((__int64*)a4 != a6) {
    if (*(unsigned __int8*)(a4 + 4) <=
        (unsigned int)*(unsigned __int8*)(a9 + 4)) {
      *(_DWORD*)a2 = *(_DWORD*)a9;
      v94 = *(_BYTE*)(a9 + 4);
      a9 += 8;
      *(_BYTE*)(a2 + 4) = v94;
    }
    else {
      *(_DWORD*)a2 = *(_DWORD*)a4;
      v92 = *(_BYTE*)(a4 + 4);
      a4 += 8;
      *(_BYTE*)(a2 + 4) = v92;
      if (a4 - *a3 == 4096) {
        v93 = a3[1];
        ++a3;
        a4 = v93;
      }
    }
    a2 += 8;
    if (a2 - *result == 4096) {
      v95 = result[1];
      ++result;
      a2 = v95;
    }
    if (v87 == (_QWORD*)a9) {
      return result;
    }
  }
  v100 = *result;
  v101 = -v86;
  while (1) {
    v103 = (v101 - a9) >> 3;
    v104 = (v100 - a2 + 4096) >> 3;
    if (v103 >= v104) {
      v103 = v104;
    }
    if (v103 != 0) {
      v105 = 8 * v103 - 8;
      if ((~(_BYTE)v105 & 0x38) != 0) {
        v107 = ((unsigned __int8)((unsigned int)v105 >> 3) + 1) & 7;
        v106 = a9;
        do {
          --v107;
          *(_DWORD*)a2 = *(_DWORD*)v106;
          v108 = *(_BYTE*)(v106 + 4);
          v106 += 8;
          *(_BYTE*)(a2 + 4) = v108;
          a2 += 8;
        } while (v107 != 0);
      }
      else {
        v106 = a9;
      }
      a9 += 8 * v103;
      if (v105 >= 0x38) {
        do {
          *(_DWORD*)a2 = *(_DWORD*)v106;
          *(_BYTE*)(a2 + 4) = *(_BYTE*)(v106 + 4);
          *(_DWORD*)(a2 + 8) = *(_DWORD*)(v106 + 8);
          *(_BYTE*)(a2 + 12) = *(_BYTE*)(v106 + 12);
          *(_DWORD*)(a2 + 16) = *(_DWORD*)(v106 + 16);
          *(_BYTE*)(a2 + 20) = *(_BYTE*)(v106 + 20);
          *(_DWORD*)(a2 + 24) = *(_DWORD*)(v106 + 24);
          *(_BYTE*)(a2 + 28) = *(_BYTE*)(v106 + 28);
          *(_DWORD*)(a2 + 32) = *(_DWORD*)(v106 + 32);
          *(_BYTE*)(a2 + 36) = *(_BYTE*)(v106 + 36);
          *(_DWORD*)(a2 + 40) = *(_DWORD*)(v106 + 40);
          *(_BYTE*)(a2 + 44) = *(_BYTE*)(v106 + 44);
          *(_DWORD*)(a2 + 48) = *(_DWORD*)(v106 + 48);
          *(_BYTE*)(a2 + 52) = *(_BYTE*)(v106 + 52);
          *(_DWORD*)(a2 + 56) = *(_DWORD*)(v106 + 56);
          v109 = *(_BYTE*)(v106 + 60);
          v106 += 64;
          *(_BYTE*)(a2 + 60) = v109;
          a2 += 64;
        } while (v106 != a9);
      }
      if (v87 == (_QWORD*)a9) {
        break;
      }
    }
    v102 = result[1];
    ++result;
    v100 = v102;
    a2 = v102;
  }
  return result;
}

__int64* MapUnitInfoDetail_1830fa0(__int64* result, __int64* a2, char* a3,
                                   __int64* a4, unsigned __int64 a5,
                                   __int64* a6, __int64 a7)
{
  __int64 v7;
  int v8;
  __int64* v9;
  unsigned __int64 v10;
  signed __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64* v28;
  __int64* v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  unsigned int v36;
  unsigned int v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  if (a5 >= 2) {
    v7 = (__int64)a2;
    if (a5 == 2) {
      if (a4 == *(__int64**)a3) {
        a4 = (__int64*)(*((_QWORD*)a3 - 1) + 4096LL);
      }
      if (*((unsigned __int8*)a4 - 4) >
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        v8 = *(_DWORD*)a2;
        *(_DWORD*)a2 = *((_DWORD*)a4 - 2);
        *((_DWORD*)a4 - 2) = v8;
        LOBYTE(v8) = *((_BYTE*)a2 + 4);
        *((_BYTE*)a2 + 4) = *((_BYTE*)a4 - 4);
        *((_BYTE*)a4 - 4) = v8;
      }
    }
    else {
      v9 = result;
      if ((__int64)a5 <= 0) {
        if (a2 != a4) {
          v14 = *result;
          for (i = (__int64)(a2 + 1);; i += 8) {
            if (i - v14 == 4096) {
              v16 = v9[1];
              ++v9;
              v14 = v16;
              i = v16;
            }
            if ((__int64*)i == a4) {
              break;
            }
            v17 = v9;
            v18 = i;
            if (i == v14) {
              v17 = v9 - 1;
              v18 = *(v9 - 1) + 4096;
            }
            if (*(unsigned __int8*)(i + 4) >
                (unsigned int)*(unsigned __int8*)(v18 - 4)) {
              v19 = *(_QWORD*)i;
              v20 = i;
              v21 = HIDWORD(*(_QWORD*)i);
              do {
                v23 = v18;
                v24 = v20;
                v20 = v23 - 8;
                *(_DWORD*)v24 = *(_DWORD*)(v23 - 8);
                *(_BYTE*)(v24 + 4) = *(_BYTE*)(v23 - 4);
                if ((__int64*)(v23 - 8) == a2) {
                  break;
                }
                if (v20 == *v17) {
                  v22 = *--v17;
                  v18 = v22 + 4096;
                }
                else {
                  v18 = v23 - 8;
                }
              } while (*(unsigned __int8*)(v18 - 4) <
                       (unsigned int)(unsigned __int8)v21);
              *(_DWORD*)(v23 - 8) = v19;
              *(_BYTE*)(v23 - 4) = v21;
              v14 = *v9;
            }
          }
        }
      }
      else {
        v10 = a5 >> 1;
        v11 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
        if (v11 < 1) {
          v25 = 511 - v11;
          v12 = &result[-(v25 >> 9)];
          v13 = (__int64*)(*v12 + 8LL * (~(_WORD)v25 & 0x1FF));
        }
        else {
          v12 = &result[(unsigned __int64)v11 >> 9];
          v13 = (__int64*)(*v12 + 8 * (v11 & 0x1FF));
        }
        v26 = a5 - v10;
        v28 = a4;
        if ((__int64)a5 <= a7) {
          v32 = a6;
          MapUnitInfoDetail_1831300_alt1(result, a2, v12, (__int64)v13, a5 >> 1,
                                         a6);
          v33 = &v32[v10];
          result = MapUnitInfoDetail_1831300_alt1(v12, v13, a3, (__int64)v28,
                                                  v26, v33);
          v34 = &v32[a5];
          v35 = v33;
          while (v35 != v34) {
            v36 = *((unsigned __int8*)v35 + 4);
            v37 = *((unsigned __int8*)v32 + 4);
            if (v36 > v37) {
              v38 = v35;
            }
            else {
              v38 = v32;
            }
            if (v36 > v37) {
              ++v35;
            }
            else {
              ++v32;
            }
            *(_DWORD*)v7 = *(_DWORD*)v38;
            *(_BYTE*)(v7 + 4) = *((_BYTE*)v38 + 4);
            v7 += 8;
            if (v7 - *v9 == 4096) {
              v39 = v9[1];
              ++v9;
              v7 = v39;
            }
            if (v32 == v33) {
              while (v35 != v34) {
                *(_DWORD*)v7 = *(_DWORD*)v35;
                *(_BYTE*)(v7 + 4) = *((_BYTE*)v35 + 4);
                v7 += 8;
                if (v7 - *v9 == 4096) {
                  v41 = v9[1];
                  ++v9;
                  v7 = v41;
                }
                ++v35;
              }
              return result;
            }
          }
          while (v32 != v33) {
            *(_DWORD*)v7 = *(_DWORD*)v32;
            *(_BYTE*)(v7 + 4) = *((_BYTE*)v32 + 4);
            v7 += 8;
            if (v7 - *v9 == 4096) {
              v40 = v9[1];
              ++v9;
              v7 = v40;
            }
            ++v32;
          }
        }
        else {
          MapUnitInfoDetail_1830fa0(result, (__int64)a2, (char*)v12,
                                    (__int64)v13, a5 >> 1, a6, a7);
          MapUnitInfoDetail_1830fa0(v12, (__int64)v13, a3, (__int64)v28, v26,
                                    a6, a7);
          return MapUnitInfoDetail_1831600_alt1(v9, v7, v12, (__int64)v13, a3,
                                                v28, v10, v26, (__int64)a6, a7);
        }
      }
    }
  }
  return result;
}

_QWORD* MapUnitInfoDetail_1831300(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64* v24;
  int* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int* v36;

  if (a5 != 0) {
    if (a5 == 2) {
      if (a4 == *a3) {
        a4 = *(a3 - 1) + 4096LL;
      }
      if (*(unsigned __int8*)(a4 - 4) <=
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        *(_QWORD*)a6 = *(_QWORD*)a2;
        v6 = *(_QWORD*)(a4 - 8);
      }
      else {
        *(_QWORD*)a6 = *(_QWORD*)(a4 - 8);
        v6 = *(_QWORD*)a2;
      }
      *(_QWORD*)(a6 + 8) = v6;
    }
    else if (a5 == 1) {
      *(_QWORD*)a6 = *(_QWORD*)a2;
    }
    else if ((__int64)a5 > 8) {
      v15 = a5 >> 1;
      v18 = a4;
      v19 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
      if (v19 < 1) {
        v22 = 511 - v19;
        v20 = &result[-(v22 >> 9)];
        v21 = (int*)(*v20 + 8LL * (~(_WORD)v22 & 0x1FF));
      }
      else {
        v20 = &result[(unsigned __int64)v19 >> 9];
        v21 = (int*)(*v20 + 8 * (v19 & 0x1FF));
      }
      v23 = result;
      v24 = (__int64*)a2;
      GameRoutine_1830fa0(result, a2, v20, (__int64)v21, a5 >> 1, (int*)a6,
                          v15);
      result = GameRoutine_1830fa0(v20, v21, a3, v18, a5 - v15,
                                   (int*)(a6 + 8 * v15), a5 - v15);
      if (v24 == (__int64*)v21) {
        v26 = v21;
        v27 = (_QWORD*)a6;
      LABEL_45:
        while (v26 != (int*)v18) {
          v35 = *(_QWORD*)v26;
          v26 += 2;
          *v27 = v35;
          if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
            v36 = (int*)v20[1];
            ++v20;
            v26 = v36;
          }
          ++v27;
        }
      }
      else {
        v26 = v21;
        v27 = (_QWORD*)a6;
        v28 = v23;
        while (v26 != (int*)v18) {
          if (*((unsigned __int8*)v26 + 4) <=
              (unsigned int)*((unsigned __int8*)v24 + 4)) {
            v31 = *v24++;
            *v27 = v31;
            if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
              v32 = (__int64*)v28[1];
              ++v28;
              v24 = v32;
            }
          }
          else {
            v29 = *(_QWORD*)v26;
            v26 += 2;
            *v27 = v29;
            if ((char*)((char*)v26 - *v20) == (char*)((char*)0x1000LL)) {
              v30 = (int*)v20[1];
              ++v20;
              v26 = v30;
            }
          }
          ++v27;
          if (v24 == (__int64*)v21) {
            goto LABEL_45;
          }
        }
        while (v24 != (__int64*)v21) {
          v33 = *v24++;
          *v27 = v33;
          if ((char*)((char*)v24 - *v28) == (char*)((char*)0x1000LL)) {
            v34 = (__int64*)v28[1];
            ++v28;
            v24 = v34;
          }
          ++v27;
        }
      }
    }
    else if (a2 != (int*)a4) {
      v7 = 0;
      v8 = (_QWORD*)a6;
      *(_QWORD*)a6 = *(_QWORD*)a2;
      while (1) {
        a2 += 2;
        if ((char*)((char*)a2 - *result) == (char*)((char*)0x1000LL)) {
          v9 = (__int64*)result[1];
          ++result;
          a2 = (int*)v9;
        }
        if (a2 == (int*)a4) {
          break;
        }
        v10 = v8 + 1;
        if (*((unsigned __int8*)a2 + 4) <=
            (unsigned int)*((unsigned __int8*)v8 + 4)) {
          *v10 = *(_QWORD*)a2;
        }
        else {
          v8[1] = *v8;
          v11 = a6;
          if (v8 != (_QWORD*)a6) {
            v12 = v7;
            while (1) {
              v11 = a6 + v12;
              v13 = *(unsigned __int8*)(a6 + v12 - 4);
              if (*((unsigned __int8*)a2 + 4) <= v13) {
                break;
              }
              v14 = *(_DWORD*)(v11 - 8);
              v12 -= 8;
              *(_BYTE*)(v11 + 4) = v13;
              *(_DWORD*)v11 = v14;
              if (v12 == 0) {
                v11 = a6;
                break;
              }
            }
          }
          *(_DWORD*)v11 = *a2;
          *(_BYTE*)(v11 + 4) = *((_BYTE*)a2 + 4);
        }
        v7 += 8;
        v8 = v10;
      }
    }
  }
  return result;
}

char* MapUnitInfoDetail_1831600(char* result, int* a2, char* a3, int* a4,
                                char* a5, __int64* a6, __int64 a7, __int64 a8,
                                __int64 a9, __int64 a10)
{
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  _BOOL4 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64* v73;
  __int64* v74;
  char* v75;
  __int64 v76;
  __int64* v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64* v83;
  int v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  char* v89;
  __int64 v90;
  __int64* v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  int v96;
  __int64* v97;
  __int64* v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  if (a8 == 0) {
    return result;
  }
  while (a7 > a10 && a8 > a10) {
    if (a7 == 0) {
      return result;
    }
    while (*((unsigned __int8*)a4 + 4) <=
           (unsigned int)*((unsigned __int8*)a2 + 4)) {
      a2 += 2;
      if ((char*)((char*)a2 - *(_QWORD*)result) == (char*)((char*)0x1000LL)) {
        v12 = *((_QWORD*)result + 1);
        result += 8;
        a2 = (int*)v12;
      }
      if (--a7 == 0) {
        return result;
      }
    }
    if (a7 >= a8) {
      if (a7 == 1) {
        v96 = *a2;
        *a2 = *a4;
        *a4 = v96;
        LOBYTE(v96) = *((_BYTE*)a2 + 4);
        *((_BYTE*)a2 + 4) = *((_BYTE*)a4 + 4);
        *((_BYTE*)a4 + 4) = v96;
        return result;
      }
      v21 = (__int64*)result;
      v22 = (__int64)a2;
      v29 = a7 / 2;
      if ((unsigned __int64)(a7 + 1) < 3) {
      LABEL_31:
        if (a6 == (__int64*)a4) {
          goto LABEL_51;
        }
      }
      else {
        v30 = v29 + (((__int64)a2 - *(_QWORD*)result) >> 3);
        if (v30 >= 1) {
          v21 = (__int64*)&result[8 * ((unsigned __int64)v30 >> 9)];
          v22 = *v21 + 8 * (v30 & 0x1FF);
          goto LABEL_31;
        }
        v42 = 511 - v30;
        v21 = (__int64*)&result[-8 * (v42 >> 9)];
        v22 = *v21 + 8LL * (~(_WORD)v42 & 0x1FF);
        if (a6 == (__int64*)a4) {
        LABEL_51:
          v15 = 0;
          v13 = (__int64*)a3;
          v14 = (__int64)a4;
          goto LABEL_52;
        }
      }
      v31 = (((__int64)a6 - *(_QWORD*)a5) >> 3) + ((a5 - a3) << 6);
      v32 = *(_QWORD*)a3;
      v33 = ((__int64)a4 - *(_QWORD*)a3) >> 3;
      v34 = v31 - v33;
      if (v31 != v33) {
        v14 = (__int64)a4;
        v13 = (__int64*)a3;
        do {
          v35 = v34 >> 1;
          v36 = v14;
          v37 = v13;
          if (v34 != 1) {
            v38 = v35 + ((v14 - v32) >> 3);
            if (v38 < 1) {
              v39 = 511 - v38;
              LOWORD(v38) = ~(511 - v38);
              v37 = &v13[-(v39 >> 9)];
            }
            else {
              v37 = &v13[(unsigned __int64)v38 >> 9];
            }
            v36 = *v37 + 8 * (v38 & 0x1FF);
          }
          if (*(unsigned __int8*)(v36 + 4) >
              (unsigned int)*(unsigned __int8*)(v22 + 4)) {
            v32 = *v37;
            v14 = v36 + 8;
            if (v36 + 8 - *v37 == 4096) {
              v40 = v37[1];
              ++v37;
              v32 = v40;
              v14 = v40;
            }
            v13 = v37;
            v35 = v34 + ~v35;
          }
          v34 = v35;
        } while (v35 != 0);
        if ((int*)v14 == a4) {
          v15 = 0;
        }
        else {
          v15 = (((char*)v13 - a3) << 6) - v33 + ((v14 - v32) >> 3);
        }
        goto LABEL_52;
      }
      goto LABEL_51;
    }
    v13 = (__int64*)a3;
    v14 = (__int64)a4;
    v15 = a8 / 2;
    if ((unsigned __int64)(a8 + 1) < 3) {
      goto LABEL_14;
    }
    v16 = v15 + (((__int64)a4 - *(_QWORD*)a3) >> 3);
    if (v16 >= 1) {
      v13 = (__int64*)&a3[8 * ((unsigned __int64)v16 >> 9)];
      v14 = *v13 + 8 * (v16 & 0x1FF);
    LABEL_14:
      if (a4 != a2) {
        goto LABEL_15;
      }
      goto LABEL_49;
    }
    v41 = 511 - v16;
    v13 = (__int64*)&a3[-8 * (v41 >> 9)];
    v14 = *v13 + 8LL * (~(_WORD)v41 & 0x1FF);
    if (a4 != a2) {
    LABEL_15:
      v17 = (((__int64)a4 - *(_QWORD*)a3) >> 3) + ((a3 - result) << 6);
      v18 = *(_QWORD*)result;
      v19 = ((__int64)a2 - *(_QWORD*)result) >> 3;
      v20 = v17 - v19;
      if (v17 != v19) {
        v21 = (__int64*)result;
        v22 = (__int64)a2;
        do {
          v23 = v20 >> 1;
          v24 = v22;
          v25 = v21;
          if (v20 != 1) {
            v26 = v23 + ((v22 - v18) >> 3);
            if (v26 < 1) {
              v27 = 511 - v26;
              LOWORD(v26) = ~(511 - v26);
              v25 = &v21[-(v27 >> 9)];
            }
            else {
              v25 = &v21[(unsigned __int64)v26 >> 9];
            }
            v24 = *v25 + 8 * (v26 & 0x1FF);
          }
          if (*(unsigned __int8*)(v14 + 4) <=
              (unsigned int)*(unsigned __int8*)(v24 + 4)) {
            v18 = *v25;
            v22 = v24 + 8;
            if (v24 + 8 - *v25 == 4096) {
              v28 = v25[1];
              ++v25;
              v18 = v28;
              v22 = v28;
            }
            v21 = v25;
            v23 = v20 + ~v23;
          }
          v20 = v23;
        } while (v23 != 0);
        if ((int*)v22 == a2) {
          v29 = 0;
        }
        else {
          v29 = ((v22 - v18) >> 3) - v19 + (((char*)v21 - result) << 6);
        }
        goto LABEL_52;
      }
    }
  LABEL_49:
    v29 = 0;
    v21 = (__int64*)result;
    v22 = (__int64)a2;
  LABEL_52:
    v43 = v14;
    v44 = v13;
    if ((int*)v22 != a4) {
      v43 = v22;
      v44 = v21;
      if (a4 != (int*)v14) {
        v44 = v21;
        v43 = v22;
        v45 = (__int64)a4;
        v46 = (__int64*)a3;
        while (1) {
          v47 = *(_DWORD*)v43;
          *(_DWORD*)v43 = *(_DWORD*)v45;
          *(_DWORD*)v45 = v47;
          LOBYTE(v47) = *(_BYTE*)(v43 + 4);
          *(_BYTE*)(v43 + 4) = *(_BYTE*)(v45 + 4);
          *(_BYTE*)(v45 + 4) = v47;
          v43 += 8;
          if (v43 - *v44 == 4096) {
            v48 = v44[1];
            ++v44;
            v43 = v48;
          }
          v45 += 8;
          if (v45 - *v46 == 4096) {
            v49 = v46[1];
            ++v46;
            v45 = v49;
          }
          if (v45 == v14) {
            break;
          }
          if ((int*)v43 == a4) {
            a4 = (int*)v45;
            a3 = (char*)v46;
          }
        }
        if ((int*)v43 != a4) {
          v50 = v44;
          v51 = v43;
          v52 = (__int64)a4;
          v53 = (__int64*)a3;
          while (1) {
            v54 = *(_DWORD*)v51;
            *(_DWORD*)v51 = *(_DWORD*)v52;
            *(_DWORD*)v52 = v54;
            LOBYTE(v54) = *(_BYTE*)(v51 + 4);
            *(_BYTE*)(v51 + 4) = *(_BYTE*)(v52 + 4);
            *(_BYTE*)(v52 + 4) = v54;
            v51 += 8;
            if (v51 - *v50 == 4096) {
              v55 = v50[1];
              ++v50;
              v51 = v55;
            }
            v52 += 8;
            if (v52 - *v53 == 4096) {
              v56 = v53[1];
              ++v53;
              v52 = v56;
            }
            v57 = v51 == (_QWORD)a4;
            if (v52 == v14) {
              if ((int*)v51 == a4) {
                break;
              }
              while (1) {
                v58 = *(_DWORD*)v51;
                *(_DWORD*)v51 = *a4;
                *a4 = v58;
                LOBYTE(v58) = *(_BYTE*)(v51 + 4);
                *(_BYTE*)(v51 + 4) = *((_BYTE*)a4 + 4);
                *((_BYTE*)a4 + 4) = v58;
                v51 += 8;
                if (v51 - *v50 == 4096) {
                  v59 = v50[1];
                  ++v50;
                  v51 = v59;
                }
                v53 = (__int64*)a3;
                v52 = (__int64)(a4 + 2);
                if ((char*)((char*)a4 - *(_QWORD*)a3 + 8) ==
                    (char*)((char*)0x1000LL)) {
                  v52 = *((_QWORD*)a3 + 1);
                  v53 = (__int64*)(a3 + 8);
                }
                v57 = v51 == (_QWORD)a4;
                if (v52 != v14) {
                  break;
                }
                if ((int*)v51 == a4) {
                  goto LABEL_79;
                }
              }
            }
            if (v57) {
              a4 = (int*)v52;
              a3 = (char*)v53;
            }
          }
        }
      }
    }
  LABEL_79:
    v60 = a7 - v29;
    v61 = a8 - v15;
    if (v29 + v15 >= a8 - (v29 + v15) + a7) {
      v110 = a9;
      v111 = a10;
      v67 = a10;
      v68 = a9;
      v69 = (__int64*)result;
      v112 = v29;
      v70 = (__int64)a2;
      v71 = v14;
      v72 = v21;
      v61 = v15;
      MapUnitInfoDetail_1831600(v44, v43, v13, v71, a5, a6, v60, a8 - v15, v110,
                                v111);
      v60 = v112;
      result = (char*)v69;
      a9 = v68;
      a10 = v67;
      a2 = (int*)v70;
      a3 = (char*)v72;
      v14 = v22;
      a5 = (char*)v44;
      a6 = (__int64*)v43;
    }
    else {
      v62 = v22;
      v63 = a5;
      v64 = a6;
      v65 = v29;
      v66 = v13;
      MapUnitInfoDetail_1831600((__int64*)result, (__int64)a2, v21, v62,
                                (char*)v44, (__int64*)v43, v65, v15, a9, a10);
      a3 = (char*)v66;
      a5 = v63;
      a6 = v64;
      result = (char*)v44;
      a2 = (int*)v43;
    }
    a7 = v60;
    a8 = v61;
    a4 = (int*)v14;
    if (v61 == 0) {
      return result;
    }
  }
  if (a7 > a8) {
    if (a4 == (int*)a6) {
      return result;
    }
    v73 = (__int64*)a9;
    v74 = (__int64*)a4;
    v75 = a3;
    do {
      v76 = *v74++;
      *v73 = v76;
      if ((char*)((char*)v74 - *(_QWORD*)v75) == (char*)((char*)0x1000LL)) {
        v77 = *((__int64**)v75 + 1);
        v75 += 8;
        v74 = v77;
      }
      ++v73;
    } while (v74 != a6);
    while (2) {
      if (a4 == a2) {
        if ((__int64*)a9 != v73) {
          v97 = *(__int64**)a5;
          do {
            v98 = a6;
            if (a6 == v97) {
              v98 = (__int64*)(*((_QWORD*)a5 - 1) + 4096LL);
            }
            *((_DWORD*)v98 - 2) = *((_DWORD*)v73 - 2);
            *((_BYTE*)v98 - 4) = *((_BYTE*)v73 - 4);
            v97 = *(__int64**)a5;
            if (a6 == *(__int64**)a5) {
              v99 = *((__int64**)a5 - 1);
              a5 -= 8;
              v97 = v99;
              a6 = v99 + 512;
            }
            --v73;
            --a6;
          } while (v73 != (__int64*)a9);
        }
        return result;
      }
      if (*(int**)a3 == a4) {
        v80 = *((_QWORD*)a3 - 1);
        v78 = (char*)v73 - 4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(v80 + 4092)) {
          goto LABEL_104;
        }
        v79 = v80 + 4096;
      }
      else {
        v78 = (char*)v73 - 4;
        v79 = (__int64)a4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*((unsigned __int8*)a4 - 4)) {
        LABEL_104:
          v83 = a6;
          if (a6 == *(__int64**)a5) {
            v83 = (__int64*)(*((_QWORD*)a5 - 1) + 4096LL);
          }
          v84 = *((_DWORD*)v73-- - 2);
          *((_DWORD*)v83 - 2) = v84;
          *((_BYTE*)v83 - 4) = *v78;
          goto LABEL_107;
        }
      }
      v81 = a6;
      if (a6 == *(__int64**)a5) {
        v81 = (__int64*)(*((_QWORD*)a5 - 1) + 4096LL);
      }
      *((_DWORD*)v81 - 2) = *(_DWORD*)(v79 - 8);
      *((_BYTE*)v81 - 4) = *(_BYTE*)(v79 - 4);
      if (a4 == *(int**)a3) {
        v82 = *((_QWORD*)a3 - 1);
        a3 -= 8;
        a4 = (int*)(v82 + 4096);
      }
      a4 -= 2;
    LABEL_107:
      if (a6 == *(__int64**)a5) {
        v85 = *((_QWORD*)a5 - 1);
        a5 -= 8;
        a6 = (__int64*)(v85 + 4096);
      }
      --a6;
      if (v73 == (__int64*)a9) {
        return result;
      }
      continue;
    }
  }
  if (a2 == a4) {
    return result;
  }
  v86 = -a9;
  v87 = (_QWORD*)a9;
  v88 = (__int64*)a2;
  v89 = result;
  do {
    v90 = *v88++;
    *v87 = v90;
    if ((char*)((char*)v88 - *(_QWORD*)v89) == (char*)((char*)0x1000LL)) {
      v91 = *((__int64**)v89 + 1);
      v89 += 8;
      v88 = v91;
    }
    ++v87;
    v86 -= 8;
  } while (v88 != (__int64*)a4);
  while (a4 != (int*)a6) {
    if (*((unsigned __int8*)a4 + 4) <=
        (unsigned int)*(unsigned __int8*)(a9 + 4)) {
      *a2 = *(_DWORD*)a9;
      v94 = *(_BYTE*)(a9 + 4);
      a9 += 8;
      *((_BYTE*)a2 + 4) = v94;
    }
    else {
      *a2 = *a4;
      v92 = *((_BYTE*)a4 + 4);
      a4 += 2;
      *((_BYTE*)a2 + 4) = v92;
      if ((char*)((char*)a4 - *(_QWORD*)a3) == (char*)((char*)0x1000LL)) {
        v93 = *((_QWORD*)a3 + 1);
        a3 += 8;
        a4 = (int*)v93;
      }
    }
    a2 += 2;
    if ((char*)((char*)a2 - *(_QWORD*)result) == (char*)((char*)0x1000LL)) {
      v95 = *((_QWORD*)result + 1);
      result += 8;
      a2 = (int*)v95;
    }
    if (v87 == (_QWORD*)a9) {
      return result;
    }
  }
  v100 = *(_QWORD*)result;
  v101 = -v86;
  while (1) {
    v103 = (v101 - a9) >> 3;
    v104 = (v100 - (__int64)a2 + 4096) >> 3;
    if (v103 >= v104) {
      v103 = v104;
    }
    if (v103 != 0) {
      v105 = 8 * v103 - 8;
      if ((~(_BYTE)v105 & 0x38) != 0) {
        v107 = ((unsigned __int8)((unsigned int)v105 >> 3) + 1) & 7;
        v106 = a9;
        do {
          --v107;
          *a2 = *(_DWORD*)v106;
          v108 = *(_BYTE*)(v106 + 4);
          v106 += 8;
          *((_BYTE*)a2 + 4) = v108;
          a2 += 2;
        } while (v107 != 0);
      }
      else {
        v106 = a9;
      }
      a9 += 8 * v103;
      if (v105 >= 0x38) {
        do {
          *a2 = *(_DWORD*)v106;
          *((_BYTE*)a2 + 4) = *(_BYTE*)(v106 + 4);
          a2[2] = *(_DWORD*)(v106 + 8);
          *((_BYTE*)a2 + 12) = *(_BYTE*)(v106 + 12);
          a2[4] = *(_DWORD*)(v106 + 16);
          *((_BYTE*)a2 + 20) = *(_BYTE*)(v106 + 20);
          a2[6] = *(_DWORD*)(v106 + 24);
          *((_BYTE*)a2 + 28) = *(_BYTE*)(v106 + 28);
          a2[8] = *(_DWORD*)(v106 + 32);
          *((_BYTE*)a2 + 36) = *(_BYTE*)(v106 + 36);
          a2[10] = *(_DWORD*)(v106 + 40);
          *((_BYTE*)a2 + 44) = *(_BYTE*)(v106 + 44);
          a2[12] = *(_DWORD*)(v106 + 48);
          *((_BYTE*)a2 + 52) = *(_BYTE*)(v106 + 52);
          a2[14] = *(_DWORD*)(v106 + 56);
          v109 = *(_BYTE*)(v106 + 60);
          v106 += 64;
          *((_BYTE*)a2 + 60) = v109;
          a2 += 16;
        } while (v106 != a9);
      }
      if (v87 == (_QWORD*)a9) {
        break;
      }
    }
    v102 = *((_QWORD*)result + 1);
    result += 8;
    v100 = v102;
    a2 = (int*)v102;
  }
  return result;
}

_QWORD* game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke_1832180(__int64 a1,
                                                                    _DWORD* a2,
                                                                    __int64 a3)
{
  __int64 v3;
  _QWORD* result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  char v20;

  v20 = 0;
  v3 = *(_QWORD*)(a1 + 8);
  result = v18_.v18;
  v7 = GameData_212c880[0];
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v18_.v18[0] = GameData_20e2f30;
  v18_.v18[1] = v3;
  v18_.v18[2] = &v20;
  v9 = *(_QWORD*)(v8 + 24);
  v18_.v19 = v18_.v18;
  v10 = *(_QWORD*)(v9 + 448);
  if ((int)((unsigned __int64)(*(_QWORD*)(v9 + 456) - v10) >> 2) < 1) {
    goto LABEL_8;
  }
  v11 = 0;
  v12 = 0;
  do {
    if (v18_.v19 == nullptr) {
      GameRoutine_60a310_alt1();
    }
    (*(void (**)(_QWORD*, __int64))(*v18_.v19 + 48LL))(v18_.v19, v10 + v11);
    v10 = *(_QWORD*)(v9 + 448);
    ++v12;
    v11 += 4;
  } while (v12 < (int)((unsigned __int64)(*(_QWORD*)(v9 + 456) - v10) >> 2));
  result = v18_.v19;
  if (v18_.v19 == v18_.v18) {
  LABEL_8:
    v13 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_10;
    }
    v13 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(_QWORD*, _DWORD*, __int64))(*result + v13))(
      result, a2, a3);
LABEL_10:
  v14 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * (*a2 & 0xFFFLL));
  v15 = *(unsigned __int8*)(v14 + 104);
  v16 = *(unsigned __int8*)(v14 + 273);
  if ((unsigned int)(v15 - 5) >= 2) {
    v17 = 0;
  }
  else {
    v17 = (*a2 >> 19) & 0x1F;
  }
  if ((int)(v17 - (int)((*a2 >> 12) & 0x7F) + v16) > 0 || (v20 & 1) != 0) {
    ++**(_DWORD**)(a1 + 16);
  }
  return result;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke(__int64 result,
                                                            unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
  v5 = *a2;
  v3 = *(_QWORD*)(v2 + 1744);
  if ((((unsigned __int64)v5 >> 5) & 0x7F) + 1 <=
          (*(_QWORD*)(v2 + 1752) - v3) >> 2 &&
      ((*(_DWORD*)(v3 + 4 * (((unsigned __int64)v5 >> 5) & 0x7F)) >> v5) & 1) !=
          0) {
    v4 = result;
    result = game_HasActiveSkill_843420(&v5, v2 + 1744);
    if ((result & 1) != 0) {
      **(_BYTE**)(v4 + 16) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
