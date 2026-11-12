#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1572840(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_95e2c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e0640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1605a10(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16e1a00(void);
__int64 GameRoutine_18a30a0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_906c90(_QWORD, _QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 GameRoutine_975940(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_ClassChangeJobMenuItem_vtable[])();
extern __int64 (*game_facility_EmptyClassChangeJobMenuItem_vtable[])();
extern __int64 GameData_208be80;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ClassChangeJobMenu_16b44a0(__int64 a1, __int64* a2);
__int64 ClassChangeJobMenu_Unknown128_alt1(__int64 a1) __asm__(
    "ClassChangeJobMenu_Unknown128");
__int64 ClassChangeJobMenu_16b53a0(__int64 result);
__int64 ClassChangeJobMenu_16b5db0_alt1(__int64 a1) __asm__(
    "ClassChangeJobMenu_16b5db0");
__int64 ClassChangeJobMenu_16b6670(__int64 a1);
__int64 ClassChangeJobMenu_16b6c30(__int64 a1);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
extern __int64 game_g_game_setting;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_705570(void);
__int64 game_facility_ClassChangeJobMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2);
__int64 game_facility_ClassChangeJobMenu_CopyUnitAndPergeSkill_lambda0_Invoke(
    __int64 result, _DWORD* a2);
_QWORD* GameRoutine_6d7e80(__int64, __int64, __int64);
__attribute__((swiftcall)) void game_95eaa0(PSEUDO_X8, __int64 result, __int64);
__int64* FloatingHelp_18af120(_QWORD*, __int64*);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 GameRoutine_11912b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18af980(__int64, __int64*);
__int64 GameRoutine_6c3980(__int64 result, __int64, long double);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 Unit_6ccca0(__int64, __int64);
__int64 game_97b2f0(_QWORD);
__int64 game_facility_14682e0(void);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_208c4b8[])();
extern __int64 (*GameData_208c5b8[])();
extern __int64* GameData_212d890[2];
extern __int64 GameData_21c99c0;
extern __int64 GameData_21f1e08;
extern __int64 GameData_21f3ff8;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
struct PseudoSret LayoutAccessor_1560070(_QWORD, _QWORD);
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
void LayoutAccessor_1566d90(__int64, char);
void LayoutAccessor_1567000(__int64, char);
__int64 game_facility_ClassChangeJobMenu_CopyUnitAndPergeSkill(__int64 a1,
                                                               __int64 a2,
                                                               long double a3);
__int64 game_facility_ClassChangeJobMenu_SortAndFilter(__int64 a1);
void ClassChangeJobMenu_16b5580(__int64 a1);
__int64 ClassChangeJobMenu_16b5650(__int64 result);
__int64 ClassChangeJobMenu_16b6f70(__int64 a1);
bool game_facility_ClassChangeJobMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2);
__int64 GameRoutine_13fa790(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ae640(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 game_16ad210(__int64 result, __int64, char, __int64);
__int64 game_Unit_GetJob(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_208c128[])();
extern __int64 (*GameData_208c1a8[])();
extern __int64 (*GameData_208c228[])();
extern __int64 (*GameData_208c2a8[])();
extern __int64 (*GameData_208c328[])();
extern __int64 (*GameData_208c3a8[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d2b8;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c9988;
extern char* GameData_208c628[3];
extern char GameData_1abdadf[20];
__int64 ClassChangeJobMenu_Unknown100(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_1572840_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_1572840");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8, __int64 result, __int64);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameRoutine_960100_alt1() __asm__("GameRoutine_960100");
__int64 UnitUtil_15e0640(__int64, __int64, int, int, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameHr_67ed20(_QWORD*);
void* game_97b2f0_alt1(__int64) __asm__("game_97b2f0");
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void StatusLV_18a30a0(__int64*, __int64);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ClassChangeJobMenu_Unknown128(_QWORD* a1);
__int64 ClassChangeJobMenu_16b5db0(_QWORD* a1);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameRoutine_1572370(__int64, char);
__int64 GameRoutine_1593d90(__int64*, __int64);
__int64 GameRoutine_95f500(char, __int64, __int64, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_gameui_Util_SetStatusForClassChange(__int64 result, _QWORD*,
                                                 __int64, char, char);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
bool game_159e890(__int64, char, __int64);
char* game_util_Format(const char*, ...);
extern __int64 GameData_212d8b0[3];
extern __int64 game_kVariableHubFacilityForced;
void FloatingHelp_18aee60(_QWORD*, __int64*);
void GameRoutine_16b5120(__int64);
void GameRoutine_18ae960(_QWORD*, char);
__int64 ClassChangeJobMenu_16b4cc0(__int64* a1);
__int64 ClassChangeJobMenu_16b6cc0(_QWORD* a1);

__int64 game_facility_ClassChangeJobMenu_CopyUnitAndPergeSkill(__int64 a1,
                                                               __int64 a2,
                                                               long double a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD* v12;
    _QWORD* v13;
    __int64 v14;
  } v12_;

  GameRoutine_6c3980(a1 + 1072, a2, a3);
  v12_.v13 = nullptr;
  v12_.v14 = 0;
  v12_.v12 = nullptr;
  v10_.v10[0] = GameData_208c5b8;
  v10_.v10[1] = &v12_.v12;
  v10_.v11 = v10_.v10;
  GameRoutine_6d7e80(a1 + 1072, 1, (__int64)v10_.v10);
  result = (__int64)v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v5 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v10_.v11 + v5))((__int64)v10_.v11);
LABEL_6:
  v6 = v12_.v12;
  v7 = v12_.v13;
  if (v12_.v12 == v12_.v13) {
    if (v12_.v12 == nullptr) {
      return result;
    }
    goto LABEL_8;
  }
  do {
    v9 = *v6;
    if (*v6 != 0) {
      LODWORD(v9) = *(_WORD*)(v9 + 16) & 0xFFF;
    }
    LODWORD(v10_.v10[0]) = v9;
    result = Unit_6ccca0(a1 + 1072, (__int64)v10_.v10);
    ++v6;
  } while (v6 != v7);
  v6 = v12_.v12;
  if (v12_.v12 != nullptr) {
  LABEL_8:
    v12_.v13 = v6;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  return result;
}

__int64 ClassChangeJobMenu_16b44a0(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "XHelp";
    *(_QWORD*)(v16 + 8) = 0;
    v17 = v15 + 40 * v13;
    *(_BYTE*)(v16 + 16) = 0;
    *(_BYTE*)(v16 + 28) = 0;
    v7 = v15 + v9 + 40;
    *(_QWORD*)(v16 + 32) = 0;
    *(_DWORD*)(v16 + 20) = 2;
    *(_DWORD*)(v16 + 24) = result;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 16) = 0;
    *(_BYTE*)(v5 + 28) = 0;
    v7 = v5 + 40;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = "XHelp";
    *(_QWORD*)(v5 + 8) = 0;
    *(_DWORD*)(v5 + 20) = 2;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = &GameData_1a9f09e;
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_Status";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 7;
    *(_DWORD*)(v19 + 24) = result;
    goto LABEL_33;
  }
  v22 = *a2;
  v23 = v19 - *a2;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
  if (v24 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
  if (2 * v25 > v24) {
    v24 = 2 * v25;
  }
  if (v25 >= 0x333333333333333LL) {
    v26 = 0x666666666666666LL;
  }
  else {
    v26 = v24;
  }
  if (v26 != 0) {
    if (v26 <= 0x666666666666666LL) {
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v28 = 0;

LABEL_29:
  v29 = v28 + v23;
  *(_QWORD*)v29 = &GameData_1a9f09e;
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_Status";
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  v21 = v28 + v23 + 40;
  *(_DWORD*)(v29 + 20) = 7;
  *(_DWORD*)(v29 + 24) = result;
  result = memcpy(v28, v22, v23);
  *a2 = v28;
  a2[1] = v21;
  a2[2] = v30;
  if (v22 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
  }

LABEL_33:
  a2[1] = v21;
  return result;
}

void ClassChangeJobMenu_Unknown128(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  int v6;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
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
  int v44;
  struct {
    __int64* v45;
    __int64 v46;
    __int64 v47;
    __int64* v48;
    __int64 v49;
    __int64 v50;
    __int64* v51;
    __int64 v52;
    __int64 v53;
    __int64* v54;
    __int64 v55;
    __int64 v56;
    __int64* v57;
    __int64 v58;
    __int64 v59;
    __int64* v60;
    __int64* v61;
    __int64 v62;
  } v45_;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_DWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_facility_EmptyClassChangeJobMenuItem_vtable;
  v4 = a1[43];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  a1[43] = v3;
  v5 = a1 + 134;
  v6 = 0;
  v44 = (unsigned __int8)GameRoutine_960100_alt1();
  do {
    v45_.v61 = nullptr;
    v45_.v62 = 0;
    v45_.v59 = 0;
    v45_.v60 = nullptr;
    v45_.v57 = nullptr;
    v45_.v58 = 0;
    v45_.v55 = 0;
    v45_.v56 = 0;
    v45_.v53 = 0;
    v45_.v54 = nullptr;
    v45_.v51 = nullptr;
    v45_.v52 = 0;
    v45_.v49 = 0;
    v45_.v50 = 0;
    v45_.v47 = 0;
    v45_.v48 = nullptr;
    v45_.v45 = nullptr;
    v45_.v46 = 0;
    if ((UnitUtil_15e0640((__int64)&v45_.v45, (__int64)(a1 + 134), v6, 0, 0) &
         1) == 0) {
      goto LABEL_18;
    }
    v8 = v45_.v45;
    v9 = (__int64*)v45_.v46;
    while (v8 != v9) {
      v10 = *v8++;
      v11 = fw_memory_HeapManager_Allocate_alt1(*v2, 104, 16, 0);
      *(_WORD*)(v11 + 16) = 0;
      *(_DWORD*)(v11 + 40) = 0;
      *(_QWORD*)(v11 + 48) = 0;
      *(_QWORD*)(v11 + 56) = 0;
      *(_QWORD*)(v11 + 64) = 0;
      *(_QWORD*)(v11 + 72) = 0;
      *(_WORD*)(v11 + 80) = 257;
      *(_BYTE*)(v11 + 82) = 1;
      *(_QWORD*)v11 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v11 + 8) = 0;
      *(_QWORD*)(v11 + 88) = v5;
      *(_QWORD*)(v11 + 96) = v10;
      BasicMenuCursor_16e0c00(a1, v11);
    }
    v12 = v45_.v48;
    v13 = (__int64*)v45_.v49;
    while (v12 != v13) {
      v14 = *v12++;
      v15 = fw_memory_HeapManager_Allocate_alt1(*v2, 104, 16, 0);
      *(_WORD*)(v15 + 16) = 0;
      *(_DWORD*)(v15 + 40) = 0;
      *(_QWORD*)(v15 + 48) = 0;
      *(_QWORD*)(v15 + 56) = 0;
      *(_QWORD*)(v15 + 64) = 0;
      *(_QWORD*)(v15 + 72) = 0;
      *(_WORD*)(v15 + 80) = 257;
      *(_BYTE*)(v15 + 82) = 1;
      *(_QWORD*)v15 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v15 + 8) = 0;
      *(_QWORD*)(v15 + 88) = v5;
      *(_QWORD*)(v15 + 96) = v14;
      BasicMenuCursor_16e0c00(a1, v15);
    }
    v16 = v45_.v51;
    v17 = (__int64*)v45_.v52;
    while (v16 != v17) {
      v18 = *v16++;
      v19 = fw_memory_HeapManager_Allocate_alt1(*v2, 104, 16, 0);
      *(_WORD*)(v19 + 16) = 0;
      *(_DWORD*)(v19 + 40) = 0;
      *(_QWORD*)(v19 + 48) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_WORD*)(v19 + 80) = 257;
      *(_BYTE*)(v19 + 82) = 1;
      *(_QWORD*)v19 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v19 + 8) = 0;
      *(_QWORD*)(v19 + 88) = v5;
      *(_QWORD*)(v19 + 96) = v18;
      BasicMenuCursor_16e0c00(a1, v19);
    }
    v20 = v45_.v54;
    v21 = (__int64*)v45_.v55;
    while (v20 != v21) {
      v22 = *v20++;
      v23 = fw_memory_HeapManager_Allocate_alt1(*v2, 104, 16, 0);
      *(_WORD*)(v23 + 16) = 0;
      *(_DWORD*)(v23 + 40) = 0;
      *(_QWORD*)(v23 + 48) = 0;
      *(_QWORD*)(v23 + 56) = 0;
      *(_QWORD*)(v23 + 64) = 0;
      *(_QWORD*)(v23 + 72) = 0;
      *(_WORD*)(v23 + 80) = 257;
      *(_BYTE*)(v23 + 82) = 1;
      *(_QWORD*)v23 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v23 + 8) = 0;
      *(_QWORD*)(v23 + 88) = v5;
      *(_QWORD*)(v23 + 96) = v22;
      BasicMenuCursor_16e0c00(a1, v23);
    }
    v24 = v45_.v57;
    v25 = (__int64*)v45_.v58;
    while (v24 != v25) {
      v26 = *v24++;
      v27 = fw_memory_HeapManager_Allocate_alt1(*v2, 104, 16, 0);
      *(_WORD*)(v27 + 16) = 0;
      *(_DWORD*)(v27 + 40) = 0;
      *(_QWORD*)(v27 + 48) = 0;
      *(_QWORD*)(v27 + 56) = 0;
      *(_QWORD*)(v27 + 64) = 0;
      *(_QWORD*)(v27 + 72) = 0;
      *(_WORD*)(v27 + 80) = 257;
      *(_BYTE*)(v27 + 82) = 1;
      *(_QWORD*)v27 = game_facility_ClassChangeJobMenuItem_vtable;
      *(_QWORD*)(v27 + 8) = 0;
      *(_QWORD*)(v27 + 88) = v5;
      *(_QWORD*)(v27 + 96) = v26;
      BasicMenuCursor_16e0c00(a1, v27);
    }
    v28 = v45_.v60;
    v29 = v45_.v61;
    if (v45_.v60 != v45_.v61) {
      do {
        v30 = *v28++;
        v31 = fw_memory_HeapManager_Allocate_alt1(*v2, 104, 16, 0);
        *(_WORD*)(v31 + 16) = 0;
        *(_DWORD*)(v31 + 40) = 0;
        *(_QWORD*)(v31 + 48) = 0;
        *(_QWORD*)(v31 + 56) = 0;
        *(_QWORD*)(v31 + 64) = 0;
        *(_QWORD*)(v31 + 72) = 0;
        *(_WORD*)(v31 + 80) = 257;
        *(_BYTE*)(v31 + 82) = 1;
        *(_QWORD*)v31 = game_facility_ClassChangeJobMenuItem_vtable;
        *(_QWORD*)(v31 + 8) = 0;
        *(_QWORD*)(v31 + 88) = v5;
        *(_QWORD*)(v31 + 96) = v30;
        BasicMenuCursor_16e0c00(a1, v31);
      } while (v28 != v29);
    LABEL_18:
      v28 = v45_.v60;
    }
    if (v28 != nullptr) {
      v32 = *v2;
      v45_.v61 = v28;
      if (*(_QWORD*)(v32 + 200) != 0) {
        v33 = 128;
      }
      else {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v32 + v33, (__int64)v28);
    }
    if (v45_.v57 != nullptr) {
      v34 = *v2;
      v45_.v58 = (__int64)v45_.v57;
      if (*(_QWORD*)(v34 + 200) != 0) {
        v35 = 128;
      }
      else {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v34 + v35, (__int64)v45_.v57);
    }
    if (v45_.v54 != nullptr) {
      v36 = *v2;
      v45_.v55 = (__int64)v45_.v54;
      if (*(_QWORD*)(v36 + 200) != 0) {
        v37 = 128;
      }
      else {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v36 + v37, (__int64)v45_.v54);
    }
    if (v45_.v51 != nullptr) {
      v38 = *v2;
      v45_.v52 = (__int64)v45_.v51;
      if (*(_QWORD*)(v38 + 200) != 0) {
        v39 = 128;
      }
      else {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v38 + v39, (__int64)v45_.v51);
    }
    if (v45_.v48 != nullptr) {
      v40 = *v2;
      v45_.v49 = (__int64)v45_.v48;
      if (*(_QWORD*)(v40 + 200) != 0) {
        v41 = 128;
      }
      else {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v40 + v41, (__int64)v45_.v48);
    }
    if (v45_.v45 != nullptr) {
      v42 = *v2;
      v45_.v46 = (__int64)v45_.v45;
      if (*(_QWORD*)(v42 + 200) != 0) {
        v43 = 128;
      }
      else {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(v42 + v43, (__int64)v45_.v45);
    }
  } while (v6++ != v44);
}

__int64 game_facility_ClassChangeJobMenu_SortAndFilter(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _BYTE v4[32];
    _BYTE* v5;
  } v4_;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v4_.v5 = nullptr;
  v6_.v6[0] = GameData_208c4b8;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  BasicMenu_16e1f40(a1, (__int64)v6_.v6, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v1 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4_.v5 + v1))((__int64)v4_.v5);
LABEL_6:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v3))((__int64)v6_.v7);
}

__int64 ClassChangeJobMenu_16b4cc0(__int64* a1)
{
  char v2;
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
  __int64* v13;
  __int64 v14;
  __int64* v15;
  int v16;
  __int64 v17;
  char* v18;
  __int64* v19;
  int v20;
  __int64 result;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  struct {
    char* v25;
    const char* v26;
    char v27;
    char gap25_[3];
    int v28;
    int v29;
    char v30;
    char gap37_[3];
    __int64 v31;
  } v25_;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;
  struct {
    _BYTE v34[32];
    __int64 v35;
  } v34_;

  (*(void (**)(__int64*))(*a1 + 1160))(a1);
  (*(void (**)(__int64*))(*a1 + 1176))(a1);
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
  LABEL_4:
    if ((v2 & 1) != 0) {
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  v3 = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&game_kVariableHubFacilityForced);
  if (v3 != 0) {
    v2 = *(_DWORD*)(v3 + 32) != 0;
    goto LABEL_4;
  }
LABEL_5:
  if (*((_BYTE*)a1 + 5520) != 2) {
    v4 = a1[133];
    v34_.v35 = 0;
    if (!game_159e890(v4, 0, (__int64)v34_.v34)) {
      goto LABEL_25;
    }
  }
LABEL_7:
  LayoutAccessor_1560070_alt1((void*)(&v25_.v25), a1 + 106, "L_ArrowL");
  if (v25_.v26 != nullptr) {
    v5 = std___1___shared_weak_count_lock_alt1((__int64)v25_.v26);
    v6 = (__int64)v25_.v25;
    if (v25_.v26 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v25_.v26);
    }
    if (v5 != 0 && v6 != 0) {
      LayoutAccessor_155e830(v6, 0);
    }
    else if (v5 == 0) {
      goto LABEL_16;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt2(v5);
    }
  }
LABEL_16:
  LayoutAccessor_1560070_alt1((void*)(&v25_.v25), a1 + 106, "L_ArrowR");
  if (v25_.v26 != nullptr) {
    v7 = std___1___shared_weak_count_lock_alt1((__int64)v25_.v26);
    v8 = (__int64)v25_.v25;
    if (v25_.v26 != nullptr) {
      std___1___shared_weak_count___release_weak_alt2((__int64)v25_.v26);
    }
    if (v7 != 0 && v8 != 0) {
      LayoutAccessor_155e830(v8, 0);
    }
    else if (v7 == 0) {
      goto LABEL_25;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
    }
  }
LABEL_25:
  if (game_GameModeData_instance_ != 0) {
    v9 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&game_kVariableHubFacilityForced);
    if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
      LayoutAccessor_1560070_alt1((void*)(&v32_.v32), a1 + 106, "L_PageTab");
      if (v32_.v33 != 0) {
        v10 = std___1___shared_weak_count_lock_alt1(v32_.v33);
        if (v10 != 0) {
          v11 = v10;
          if (v32_.v32 != 0) {
            GameRoutine_1572370(v32_.v32, 0);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            std___1___shared_weak_count___release_weak_alt2(v11);
          }
        }
        if (v32_.v33 != 0) {
          std___1___shared_weak_count___release_weak_alt2(v32_.v33);
        }
      }
      LayoutAccessor_1560070_alt1((void*)(&v25_.v25), a1 + 106, "L_PageTab");
      if (v25_.v26 != nullptr) {
        v12 = std___1___shared_weak_count_lock_alt1((__int64)v25_.v26);
        v13 = (__int64*)v25_.v25;
        if (v25_.v26 != nullptr) {
          std___1___shared_weak_count___release_weak_alt2((__int64)v25_.v26);
        }
        if (v12 != 0 && v13 != nullptr) {
          v14 = ui_LayoutAccessor_FindPane(v13, "A_Tab");
          *(_BYTE*)(v14 + 88) &= ~1u;
        }
        else if (v12 == 0) {
          goto LABEL_46;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt2(v12);
        }
      }
    }
  }
LABEL_46:
  v15 = LayoutAccessor_155fbe0(a1 + 106, "L_KeyHelp");
  v16 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
  v25_.v30 = 0;
  v25_.v31 = 0;
  v25_.v25 = &GameData_1a9f09e;
  v25_.v26 = "MID_KeyHelp_Costume";
  v25_.v27 = 1;
  v25_.v28 = 11;
  v25_.v29 = v16;
  GameRoutine_1593d90(v15, (__int64)&v25_.v25);
  LayoutAccessor_1560070_alt1((void*)(&v25_.v25), a1 + 106, "L_ClassInfo");
  if (v25_.v26 == nullptr) {
    goto LABEL_55;
  }
  v17 = std___1___shared_weak_count_lock_alt1((__int64)v25_.v26);
  v18 = v25_.v25;
  if (v25_.v26 != nullptr) {
    std___1___shared_weak_count___release_weak_alt2((__int64)v25_.v26);
  }
  if (v17 != 0 && v18 != nullptr) {
    GameRoutine_16b5120((__int64)a1);
    v19 = LayoutAccessor_155fbe0(a1 + 106, "L_ClassInfo/L_KeyHelp");
    v20 = (*(__int64 (**)(__int64*))(*a1 + 192))(a1);
    v25_.v30 = 0;
    v25_.v31 = 0;
    v25_.v25 = &GameData_1a9f09e;
    v25_.v26 = "MID_KeyHelp_StatusChange";
    v25_.v27 = 1;
    v25_.v28 = 6;
    v25_.v29 = v20;
    GameRoutine_1593d90(v19, (__int64)&v25_.v25);
  }
  else if (v17 == 0) {
    goto LABEL_55;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt2(v17);
  }
LABEL_55:
  result = ClassChangeJobMenu_16b53a0((__int64)a1);
  v22 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v23 = (_QWORD*)GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    FloatingHelp_18aee60(v23, a1 + 106);
    GameRoutine_18ae960((_QWORD*)v22, 1);
    result = *(_QWORD*)(v22 + 240);
    *(_QWORD*)(v22 + 232) = 0;
    *(_QWORD*)(v22 + 240) = 0;
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak_alt2(result);
    }
    *(_QWORD*)(v22 + 160) = a1;
    *(_BYTE*)(v22 + 257) = 0;
    *(_DWORD*)(v22 + 248) = -1;
    v24 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v24 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

__int64 ClassChangeJobMenu_16b53a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  void* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  char v9;
  bool v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14[2];
  struct {
    __int64* v15;
    __int64 v16;
  } v15_;

  v1 = *(_QWORD*)(result + 1064);
  if (v1 != 0) {
    v2 = result;
    if (*(_BYTE*)(v1 + 2136) != 0) {
      v3 = game_97b2f0_alt1(v1 + 2104);
      if (v3 == nullptr) {
        goto LABEL_8;
      }
    }
    else {
      v3 = GameHr_67ed20(*(_QWORD**)(v1 + 392));
      if (v3 == nullptr) {
        goto LABEL_8;
      }
    }
    v4 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(v2 + 848),
                                            (__int64)"T_Name");
    if (v4 != 0) {
      GameRoutine_156c5d0_alt1(v4, (__int64)v3, 0);
    }
  LABEL_8:
    v14[0] = (__int64)"L_LvGroup";
    v14[1] = 9;
    GameRoutine_1572840_alt1((void*)(&v15_.v15), (__int64*)(v2 + 848), v14);
    if (v15_.v16 == 0) {
      goto LABEL_20;
    }
    v5 = std___1___shared_weak_count_lock_alt1(v15_.v16);
    v6 = v15_.v15;
    if (v15_.v16 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v15_.v16);
    }
    if (v5 != 0 && v6 != nullptr) {
      StatusLV_18a30a0(v6, *(_QWORD*)(v2 + 1064));
      v7 = v6[137];
      if (v7 != 0) {
        v8 = *(unsigned __int8*)(*(_QWORD*)(v2 + 1064) + 498LL);
        v9 = v8 > 0x62;
        v10 = v8 >= 0x63;
        v11 = *(_BYTE*)(v7 + 88) & 0xFE;
        if (!v10) {
          ++v11;
        }
        *(_BYTE*)(v7 + 88) = v11;
        ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(v6 + 11),
                                              (__int64)"Border", v9);
      }
    }
    else if (v5 == 0) {
      goto LABEL_20;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt2(v5);
    }
  LABEL_20:
    LayoutAccessor_1560070_alt1((void*)(&v15_.v15), (__int64*)(v2 + 848),
                                "L_LvGroup");
    if (v15_.v16 != 0) {
      v12 = std___1___shared_weak_count_lock_alt1(v15_.v16);
      v13 = (__int64)v15_.v15;
      if (v15_.v16 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v15_.v16);
      }
      if (v12 != 0 && v13 != 0) {
        ui_LayoutAccessor_SetPaneVisible_alt1(v13, (__int64)"Border", 0);
        goto LABEL_27;
      }
      if (v12 != 0) {
      LABEL_27:
        if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak_alt2(v12);
        }
      }
    }
    result = ui_LayoutAccessor_FindAlignment_alt1((__int64*)(v2 + 848),
                                                  (__int64)"A_Unit");
    if (result != 0) {
      return Alignment_56b600_alt1(result);
    }
  }
  return result;
}

void ClassChangeJobMenu_16b5580(__int64 a1)
{
  _QWORD* v1;
  char v3[4];
  struct {
    __int64* v4;
    int v5;
    char gap20_[4];
    __int64 v6;
  } v4_;

  v1 = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
      v4_.v6 = 0;
      v4_.v4 = GameData_212d890[0] + 2;
      v4_.v5 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
          *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
          (void*)(v3), GameData_21f1e08 + 8, &v4_.v4);
    }
    v1[20] = 0;
    FloatingHelp_18af120(v1, (__int64*)(a1 + 848));
    GameRoutine_18af980((__int64)v1, (__int64*)(a1 + 848));
  }
  if (game_gameui_Header_instance_ != 0) {
    LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
}

__int64 ClassChangeJobMenu_16b5650(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  char v3[4];
  struct {
    __int64* v4;
    int v5;
    char gap20_[4];
    __int64 v6;
  } v4_;

  v1 = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v2 = result;
    if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
      v4_.v6 = 0;
      v4_.v4 = GameData_212d890[0] + 2;
      v4_.v5 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
          *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
          (void*)(v3), GameData_21f1e08 + 8, &v4_.v4);
    }
    v1[20] = 0;
    FloatingHelp_18af120(v1, (__int64*)(v2 + 848));
    return GameRoutine_18af980((__int64)v1, (__int64*)(v2 + 848));
  }
  return result;
}

__int64 ClassChangeJobMenu_16b5db0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned int v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  v2 = a1[42];
  if (v2 == 0) {
    goto LABEL_13;
  }
  v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_208be80, 0);
  if (v3 == 0) {
    goto LABEL_13;
  }
  v4 = *(_QWORD*)(v3 + 96);
  if (v4 != 0) {
    v5 = a1[133];
    if (v5 == 0) {
      goto LABEL_13;
    }
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 1104LL);
    if (v6 != 0) {
      v7 = *(_QWORD*)(*(_QWORD*)(v6 + 24) + 1104LL);
      if (v7 != 0) {
        v8 = *(unsigned __int16*)(v7 + 412);
        if (*(_WORD*)(v7 + 412) != 0) {
          v9 = *(_QWORD*)(v5 + 560);
          v10 = *(unsigned __int16*)(v7 + 16);
          v11 = v10 >= (*(_QWORD*)(v5 + 568) - v9) >> 1
                    ? 0
                    : *(_WORD*)(v9 + 2 * v10) & 0x3FF;
          if (v11 >= v8) {
            goto LABEL_13;
          }
        }
      }
    }
    game_95e2c0((void*)((__int16*)&v15_.v15), v5, v4);
    if ((v15_.v15 & 0xBC1) == 0x100 ||
        (*(_BYTE*)(v4 + 49) & 0xFE) == 4 &&
            (game_GameModeData_instance_ == 0 ||
             *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
    LABEL_13:
      LOBYTE(v4) = 0;
    }
    else {
      LOBYTE(v4) = 1;
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v15_.v15), a1 + 106,
                              "L_ClassInfo/L_Class");
  result = v15_.v16;
  if (v15_.v16 == 0) {
    return result;
  }
  v13 = std___1___shared_weak_count_lock_alt1(v15_.v16);
  v14 = v15_.v15;
  result = v15_.v16;
  if (v15_.v16 != 0) {
    result = std___1___shared_weak_count___release_weak_alt2(v15_.v16);
  }
  if (v13 != 0 && v14 != 0) {
    ui_LayoutAccessor_SetPaneVisible_alt1(v14, (__int64)"GaugeBorder", 0);
    ui_LayoutAccessor_SetPaneVisible_alt1(v14, (__int64)"N_Gauge", v4);
    ui_LayoutAccessor_SetPaneVisible_alt1(v14, (__int64)"L_Gauge", v4);
    result = ui_LayoutAccessor_SetPaneVisible_alt1(v14, (__int64)"Border",
                                                   (unsigned __int8)v4 ^ 1u);
  }
  else if (v13 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    return std___1___shared_weak_count___release_weak_alt2(v13);
  }
  return result;
}

__int64 ClassChangeJobMenu_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
  __int64* v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  int v32;
  char v33;
  char* v34;
  char v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  unsigned __int8 v44;
  char* v45;
  __int64 (**v46)();
  __int64 v47;
  char v48;
  unsigned __int8 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  _QWORD v53[4];
  _QWORD* v54;
  __int64 (*v55[2])();
  __int64 v56;
  __int64 v57;
  __int64 (**v58)();
  const char* v59;
  __int64 (*v60[2])();
  __int64 v61;
  __int64 v62;
  __int64 (**v63)();

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], &GameData_208be80, 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(v5 + 96);
  if (v6 == 0) {
    return 1;
  }
  v7 = *(unsigned __int8*)(v3 + 5520);
  if (v7 != 2) {
    if (v7 == 1) {
      v8 = *(_QWORD*)(v3 + 1064);
      v59 = "MID_ClassChangeMenu_Confirm";
      v60[0] = (__int64 (*)())GameData_208c128;
      v63 = v60;
      v55[0] = (__int64 (*)())GameData_208c1a8;
      v58 = v55;
      v53[0] = GameData_208c1a8;
      v54 = v53;
      v9 = GameRoutine_13fa790(v3, &v59, v60, v55, v53);
      if (v54 == v53) {
        v10 = 32;
      }
      else {
        if (v54 == nullptr) {
          goto LABEL_17;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v54 + v10))((__int64)v54);
    LABEL_17:
      if (v58 == v55) {
        v16 = 32;
      }
      else {
        if (v58 == nullptr) {
          goto LABEL_22;
        }
        v16 = 40;
      }
      (*(void (**)(__int64))((char*)*v58 + v16))((__int64)v58);
    LABEL_22:
      if (v63 == v60) {
        v17 = 32;
      }
      else {
        if (v63 == nullptr) {
          goto LABEL_27;
        }
        v17 = 40;
      }
      (*(void (**)(__int64))((char*)*v63 + v17))((__int64)v63);
    LABEL_27:
      v58 = v55;
      v63 = v60;
      v55[0] = (__int64 (*)())(GameData_212d2b8 + 2);
      v55[1] = game_sound_PlayDecideLightSe_ptr[0];
      v60[0] = (__int64 (*)())(GameData_212d2b8 + 2);
      v60[1] = game_sound_PlayDecideLightSe_ptr[0];
      GameRoutine_654050(v60, v9 + 1152);
      if (v63 == v60) {
        v18 = 32;
      }
      else {
        if (v63 == nullptr) {
          goto LABEL_32;
        }
        v18 = 40;
      }
      (*(void (**)(__int64))((char*)*v63 + v18))((__int64)v63);
    LABEL_32:
      if (v58 == v55) {
        v19 = 32;
      }
      else {
        if (v58 == nullptr) {
        LABEL_37:
          if (v8 != 0) {
            if (*(_BYTE*)(v8 + 2136) != 0) {
              v20 = game_97b2f0(v8 + 2104);
            }
            else {
              v20 = GameRoutine_67ed20(*(_QWORD*)(v8 + 392));
            }
            game_16ad210(v9, *(_QWORD*)(v8 + 392), 6, v20);
          }
          v38 = game_Unit_GetJob(v8);
          v40 = v38;
          if (v38 != GameData_21c9988) {
            goto LABEL_87;
          }
          v41 = *(_QWORD*)(v8 + 392);
          if (v41 == 0) {
            goto LABEL_87;
          }
          v42 = *(_QWORD*)(*(_QWORD*)(v41 + 24) + 1784LL);
          if (v42 != 0) {
            v39 = *(_BYTE*)(v42 + 52);
          }
          v43 = *(_BYTE*)(v41 + 52);
          if (v42 != 0) {
            v43 = v39;
          }
          v44 = v43 - 1;
          if (v44 < 3u) {
            v45 = GameData_208c628[v44];
          }
          else {
          LABEL_87:
            if (*(_QWORD*)(v38 + 32) != 0) {
              v45 = *(char**)(v38 + 32);
            }
            else {
              v45 = &GameData_1a9f09e;
            }
          }
          GameRoutine_60a020(v9 + 1496, v45);
          v46 = GameData_208c228;
          v56 = v6;
          v57 = v40;
          v61 = v6;
          v55[0] = (__int64 (*)())GameData_208c228;
          v55[1] = (__int64 (*)())v8;
          v47 = v9 + 1520;
          v58 = v55;
          v62 = v40;
          v63 = v60;
          goto LABEL_99;
        }
        v19 = 40;
      }
      (*(void (**)(__int64))((char*)*v58 + v19))((__int64)v58);
      goto LABEL_37;
    }
    return 1;
  }
  v8 = *(_QWORD*)(v3 + 1064);
  v12 = v3;
  v13 = game_Unit_GetJob(v8);
  v59 = "MID_ClassRecycleMenu_Change_Confirm";
  v60[0] = (__int64 (*)())GameData_208c2a8;
  v54 = v53;
  v63 = v60;
  v58 = v55;
  v55[0] = (__int64 (*)())GameData_208c328;
  v53[0] = GameData_208c328;
  v14 = GameRoutine_13fa790(v12, &v59, v60, v55, v53);
  if (v54 == v53) {
    v15 = 32;
  }
  else {
    if (v54 == nullptr) {
      goto LABEL_42;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v54 + v15))((__int64)v54);
LABEL_42:
  if (v58 == v55) {
    v21 = 32;
  }
  else {
    if (v58 == nullptr) {
      goto LABEL_47;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))((char*)*v58 + v21))((__int64)v58);
LABEL_47:
  if (v63 == v60) {
    v22 = 32;
  }
  else {
    if (v63 == nullptr) {
      goto LABEL_52;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))((char*)*v63 + v22))((__int64)v63);
LABEL_52:
  v58 = v55;
  v63 = v60;
  v55[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v55[1] = game_sound_PlayDecideLightSe_ptr[0];
  v60[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v60[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v60, v14 + 1152);
  if (v63 == v60) {
    v23 = 32;
  }
  else {
    if (v63 == nullptr) {
      goto LABEL_57;
    }
    v23 = 40;
  }
  (*(void (**)(__int64))((char*)*v63 + v23))((__int64)v63);
LABEL_57:
  if (v58 == v55) {
    v24 = 32;
  }
  else {
    if (v58 == nullptr) {
      goto LABEL_62;
    }
    v24 = 40;
  }
  (*(void (**)(__int64))((char*)*v58 + v24))((__int64)v58);
LABEL_62:
  if (*(_BYTE*)(v8 + 2136) != 0) {
    v25 = game_97b2f0(v8 + 2104);
  }
  else {
    v25 = GameRoutine_67ed20(*(_QWORD*)(v8 + 392));
  }
  game_16ad210(v14, *(_QWORD*)(v8 + 392), 6, v25);
  v26 = *(_QWORD*)(v13 + 480);
  if (v26 != 0) {
    v27 = *(unsigned __int16*)(v26 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v27) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
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
      nn_os_UnlockMutex(&game_g_random_mutex);
      LODWORD(v26) =
          (16 * ((_WORD)v32 -
                 1000 * (unsigned __int16)((v32 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    else {
      LODWORD(v26) = 1;
    }
  }
  else {
    LOWORD(v27) = 0;
  }
  v33 = *(_BYTE*)(v14 + 1592);
  *(_WORD*)(v14 + 1580) = v27;
  *(_WORD*)(v14 + 1582) = 0;
  *(_DWORD*)(v14 + 1584) = v26;
  if ((v33 & 1) != 0) {
    *(_QWORD*)(v14 + 1600) = 19;
    v34 = *(char**)(v14 + 1608);
  }
  else {
    *(_BYTE*)(v14 + 1592) = 38;
    v34 = (char*)(v14 + 1593);
  }
  v35 = GameData_1abdadf[8];
  strcpy(v34, "MID_Shop_Aquisition");
  if (v13 != GameData_21c9988) {
    goto LABEL_95;
  }
  v36 = *(_QWORD*)(v8 + 392);
  if (v36 == 0) {
    goto LABEL_95;
  }
  v37 = *(_QWORD*)(*(_QWORD*)(v36 + 24) + 1784LL);
  if (v37 != 0) {
    v35 = *(_BYTE*)(v37 + 52);
  }
  v48 = *(_BYTE*)(v36 + 52);
  if (v37 != 0) {
    v48 = v35;
  }
  v49 = v48 - 1;
  if (v49 < 3u) {
    v50 = GameData_208c628[v49];
  }
  else {
  LABEL_95:
    if (*(_QWORD*)(v13 + 32) != 0) {
      v50 = *(char**)(v13 + 32);
    }
    else {
      v50 = &GameData_1a9f09e;
    }
  }
  GameRoutine_60a020(v14 + 1496, v50);
  v46 = GameData_208c3a8;
  v56 = v6;
  v57 = v13;
  v61 = v6;
  v55[0] = (__int64 (*)())GameData_208c3a8;
  v55[1] = (__int64 (*)())v8;
  v47 = v14 + 1520;
  v58 = v55;
  v62 = v13;
  v63 = v60;
LABEL_99:
  v60[0] = (__int64 (*)())v46;
  v60[1] = (__int64 (*)())v8;
  GameRoutine_16ae640(v60, v47);
  if (v63 == v60) {
    v51 = 32;
  }
  else {
    if (v63 == nullptr) {
      goto LABEL_104;
    }
    v51 = 40;
  }
  (*(void (**)(__int64))((char*)*v63 + v51))((__int64)v63);
LABEL_104:
  if (v58 == v55) {
    v52 = 32;
    goto LABEL_108;
  }
  if (v58 != nullptr) {
    v52 = 40;
  LABEL_108:
    (*(void (**)(__int64))((char*)*v58 + v52))((__int64)v58);
  }
  return 12;
}

__int64 ClassChangeJobMenu_16b6670(__int64 a1)
{
  __int64 result;

  result = GameRoutine_16e1a00();
  if ((_DWORD)result == 13) {
    *(_BYTE*)(a1 + 5528) = 1;
  }
  return result;
}

__int64 ClassChangeJobMenu_16b6c30(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];

  v1 = *(_QWORD*)(a1 + 1064);
  v7[0] = v1;
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 392);
  }
  else {
    v3 = 0;
  }
  v7[1] = v3;
  if ((unsigned int)GameRoutine_906c90(game_GameModeData_instance_ + 136, v7) !=
      0) {
    return 1;
  }
  v5 = *(_QWORD*)(v1 + 392);
  if (v5 == 0) {
    return 1;
  }
  v6 = *(_QWORD*)(v5 + 288);
  if (v6 == 0 || GameRoutine_975940(v6) == 0) {
    return 1;
  }
  GameRoutine_1605a10(a1, *(_QWORD*)(a1 + 1064), 2);
  return 9;
}

__int64 ClassChangeJobMenu_16b6cc0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  int v9;
  _BOOL4 v10;
  unsigned int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char v16;
  char v17;
  struct {
    __int64* v19;
    __int64 v20;
  } v19_;

  v2 = a1[42];
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_208be80, 0);
    if (v3 != 0) {
      v4 = v3;
      game_95e2c0((void*)((__int16*)&v19_.v19), *(_QWORD*)(v3 + 88),
                  *(_QWORD*)(v3 + 96));
      if (((unsigned __int16)v19_.v19 & 0xBC1) == 0x100) {
        return 0;
      }
      v5 = *(_QWORD*)(v4 + 96);
      if (v5 == 0 || (*(_BYTE*)(v5 + 49) & 0xFE) == 4 &&
                         (game_GameModeData_instance_ == 0 ||
                          *(_DWORD*)(game_GameModeData_instance_ + 60) != 3)) {
        return 0;
      }
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v19_.v19), a1 + 106, "L_ClassInfo");
  if (v19_.v20 == 0) {
    return 0;
  }
  v6 = std___1___shared_weak_count_lock_alt1(v19_.v20);
  v7 = v19_.v19;
  if (v6 != 0) {
    v8 = v19_.v19;
  }
  else {
    v8 = nullptr;
  }
  if (v19_.v20 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v19_.v20);
  }
  if (v8 != nullptr) {
    v9 = 1;
    if ((LayoutAccessor_155ea30_alt1(v7) & 1) != 0) {
      v10 = (*((_DWORD*)a1 + 1381) & 1) == 0;
      *((_DWORD*)a1 + 1381) = v10;
      v11 = (unsigned int*)game_util_Format("Page%02d", v10);
      LayoutAccessor_1562cf0((__int64)v7, v11);
      GameRoutine_16b5120((__int64)a1);
      v12 = a1[42];
      if (v12 != 0) {
        v13 = __dynamic_cast(v12, GameData_212e008[0], &GameData_208be80, 0);
        if (v13 != 0) {
          v14 = *(_QWORD*)(v13 + 96);
          if (v14 != 0) {
            LayoutAccessor_155e830((__int64)v7, 1);
            v15 = (*(__int64 (**)(_QWORD*))(*a1 + 1152LL))(a1);
            GameRoutine_95f500(v15, (__int64)(a1 + 412), (__int64)(a1 + 134),
                               v14);
          }
        }
      }
      v19_.v19 = v8;
      v19_.v20 = v6;
      if (v6 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
      }
      v16 = *((_DWORD*)a1 + 1381) != 0;
      v17 = (*(unsigned __int8 (**)(_QWORD*))(*a1 + 1152LL))(a1) == 0;
      game_gameui_Util_SetStatusForClassChange((__int64)&v19_.v19, a1 + 412,
                                               (__int64)(a1 + 134), v16, v17);
      if (v19_.v20 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v19_.v20);
      }
      ClassChangeJobMenu_16b5db0(a1);
      if (*(_QWORD*)GameData_212d8b0[0] != 0) {
        GameRoutine_18ae960(*(_QWORD**)GameData_212d8b0[0], 1);
      }
      v9 = 0;
    }
    if (v6 == 0) {
      goto LABEL_31;
    }
  }
  else {
    v9 = 1;
    if (v6 == 0) {
      goto LABEL_31;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt2(v6);
    if (v9 != 0) {
      return 0;
    }
    return 13;
  }
LABEL_31:
  if (v9 != 0) {
    return 0;
  }
  return 13;
}

__int64 ClassChangeJobMenu_16b6f70(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  long double v3;
  __int64 v4;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];
  __int64 v19;
  __int64 v20;
  __int64* v21;

  v1 = a1;
  *(struct PseudoSret*)(&v19) = LayoutAccessor_1560070(a1 + 848, "L_KeyHelp");
  if (v20 == 0) {
    goto LABEL_23;
  }
  v2 = std___1___shared_weak_count_lock(v20);
  v4 = v19;
  if (v20 != 0) {
    *(__n128*)&v3 = std___1___shared_weak_count___release_weak_alt1(v20);
  }
  if (v2 == 0 || v4 == 0) {
    if (v2 == 0) {
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  v6 = LayoutAccessor_155ea30(v4);
  if ((v6 & 1) == 0) {
  LABEL_20:
    v12 = 1;
    goto LABEL_21;
  }
  v7 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v8 = *(unsigned int*)(GameData_21f3ff8 + 20);
    if ((v8 & 0x80000000) != 0 ||
        (v9 = *(_QWORD*)(GameData_21c99c0 + 64),
         (int)v8 >=
             (int)((unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v9) >>
                   3))) {
      v10 = 0;
    }
    else {
      v10 = *(_QWORD*)(v9 + 8 * v8);
    }
    v11 = *(__int64**)(GameData_21f3ff8 + 48);
    if (*(__int64**)(GameData_21f3ff8 + 56) != v11) {
      v7 = *v11;
      if (*(_QWORD*)(v7 + 408) != 0) {
        goto LABEL_19;
      }
    LABEL_28:
      if (v10 != *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 400) + 24LL) + 1104LL)) {
        goto LABEL_20;
      }
      goto LABEL_29;
    }
    v7 = 0;
    if ((*(_QWORD*)0x198LL) == 0) {
      goto LABEL_28;
    }
  }
  else {
    v10 = 0;
    if ((*(_QWORD*)0x198LL) == 0) {
      goto LABEL_28;
    }
  }
LABEL_19:
  if (v10 != 0) {
    goto LABEL_20;
  }
LABEL_29:
  if ((game_facility_14682e0() & 1) != 0) {
    snd_Fade_Fade_10c830(&v19, 0.0);
    *(struct PseudoSret*)(v18) =
        snd_play_ff2d0("SE_SYS_Costume_Change", "SE_SYS_Costume_Change", &v19,
                       0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(&v19);
    snd_Fade_Fade_10c830(&v19, 0.0);
    *(struct PseudoSret*)(v18) = snd_play_ff2d0("SE_SYS_ClassChange_Appearance",
                                                "SE_SYS_ClassChange_Appearance",
                                                &v19, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(&v19);
    v12 = 0;
    LODWORD(v1) = 13;
    goto LABEL_21;
  }
  v18[0] = "MID_ClassChangeMenu_CostumeInvalid_Message";
  v14 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v15 = *(__int64**)(GameData_21f3ff8 + 48);
    if (*(__int64**)(GameData_21f3ff8 + 56) == v15) {
      v14 = 0;
    }
    else {
      v14 = *v15;
    }
  }
  if (*(_BYTE*)(v14 + 2136) != 0) {
    v16 = game_97b2f0(v14 + 2104);
  }
  else {
    v16 = GameRoutine_67ed20(*(_QWORD*)(v14 + 392));
  }
  v21 = nullptr;
  GameRoutine_11912b0(v1, v18, v16, &v19);
  if (v21 == &v19) {
    v17 = 32;
    goto LABEL_44;
  }
  if (v21 != nullptr) {
    v17 = 40;
  LABEL_44:
    (*(void (**)(__int64*))(*v21 + v17))(v21);
  }
  v12 = 0;
  LODWORD(v1) = 12;
LABEL_21:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v2 + 16LL))(v2, v3);
    std___1___shared_weak_count___release_weak_alt1(v2);
    if ((v12 & 1) == 0) {
      return (unsigned int)v1;
    }
    goto LABEL_23;
  }
  if (v12 != 0) {
  LABEL_23:
    LODWORD(v1) = 0;
  }
  return (unsigned int)v1;
}

__int64 game_facility_ClassChangeJobMenu_CreateBind_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2) & 1) != 0 &&
      *(_QWORD*)(a1 + 8) == *(_QWORD*)(v2 + 96)) {
    v5 = *(_QWORD*)(v2 + 8);
    v6 = *(_QWORD*)(v5 + 336);
    if (v6 != v2) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v5 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1, 0);
      v7 = *(_QWORD*)(v5 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_15:
        *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v8;
        return 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v6 = *(_QWORD*)(v5 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_15;
  }
  return 0;
}

bool game_facility_ClassChangeJobMenu_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int16 v7;

  v2 = *a2;
  if (*a2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(a1 + 8);
  game_95eaa0((void*)((__int64)&v7), *(_QWORD*)(v3 + 1064),
              *(_QWORD*)(v2 + 96));
  if ((v7 & 2) == 0 && (v7 & 0x201) != 0x200) {
    return false;
  }
  v5 = *(_DWORD*)(v3 + 660);
  v6 = *(_QWORD*)(v3 + 672);
  if (v5 < (unsigned __int64)((*(_QWORD*)(v3 + 680) - v6) >> 2)) {
    v5 = *(_DWORD*)(v6 + 4LL * v5);
  }
  return *(unsigned __int8*)(*(_QWORD*)(v2 + 96) + 49LL) == (unsigned __int8)v5;
}

__int64 game_facility_ClassChangeJobMenu_CopyUnitAndPergeSkill_lambda0_Invoke(
    __int64 result, _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(__int64**)(result + 8);
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
    v9 = (v8 >> 3) + 1;
    if (v9 >> 61 != 0) {
      GameRoutine_705570();
    }
    v10 = v4 - v7;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 2 > v9) {
      v9 = v10 >> 2;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v12;
    v15 = v13 + v8 - 8 * (v8 >> 3);
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    result = memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return result;
}

#pragma GCC visibility pop
