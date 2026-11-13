#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16de1f0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
__int64 ui_LayoutAccessor_FindPartsLayout(_QWORD, _QWORD);
extern __int64 (*GameData_2117538[])();
extern __int64 (*game_facility_anonymous_IndividualListMenu_vtable[])();
extern __int64 (*game_facility_anonymous_IndividualMultiMenu_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_MultiMenu_vtable)();
extern __int64 GameData_21f3ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64
IndividualMenu_Unknown50_alt1(__int64 a1,
                              __int64* a2) __asm__("IndividualMenu_Unknown50");
__int64 IndividualMenu_Unknown35(__int64 a1);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
extern __int64 GameData_2243960;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProgressDisplayView_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212dcd0;
extern char GameData_226b868;
__int64 game_facility_IndividualMenu_CreateFirstReminderDialog_lambda1_Invoke(
    __int64 a1, __int64 a2);
__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_1937550(__int64 a1);
__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_19376d0(__int64 a1);
__int64 game_facility_IndividualMenu_Run_lambda2_Invoke();
__int64 GameRoutine_12dd710(_QWORD);
__int64 GameRoutine_12dd7e0(void);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_21c9650;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__attribute__((swiftcall)) void IndividualMenu_Unknown33(PSEUDO_X8 x8_);
_QWORD* GameRoutine_12dd7e0_alt1(int) __asm__("GameRoutine_12dd7e0");
__int64 GameHr_12dd710(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result, __int64);
__int64 (***GameRoutine_1933ba0(__int64, signed int, __int64, __int64))();
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 GameHr_946c20(int);
__int64 GameRoutine_17b8f40_alt1(__int64, char) __asm__("GameRoutine_17b8f40");
__int64 GameRoutine_17c03b0(__int64 result, __int16*);
__int64 GameRoutine_17c0750(__int64 result, __int16*, __int16*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2118318[])();
extern __int64 (*GameData_2118398[])();
extern __int64* GameData_212e030[4];
extern __int64 GameData_2131cb0[36];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProgressDisplayView_instance__ptr[5];
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
void game_facility_IndividualMenu_Run_lambda1_Invoke(__int64 a1, __int64 a2,
                                                     int* a3);
__int64 game_facility_IndividualMenu_Run_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void IndividualMenu_Unknown50(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_1842430(__int64, int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
char* game_util_Format(const char*, ...);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern __int64* GameData_212cce0[43];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 IndividualMenu_Unknown39(__int64 a1);
__int64 IndividualMenu_19353a0(__int64 a1, unsigned __int8 a2, int a3, int a4);
_QWORD* RouteMenuItem_166e340(__int64, const char**, const char**, const char**,
                              const char**, __int64, __int64, __int64, __int64);
__attribute__((swiftcall)) void Dir_70ea50_alt1(PSEUDO_X8, __int16* result,
                                                __int16*) __asm__("Dir_70ea50");
__attribute__((swiftcall)) void task_17d8b50(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void task_17d8c30(PSEUDO_X8, int, __int64);
__int64 GameRoutine_16477d0(__int64, const char*, __int64, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 HubTalkNatives_e14270(__int64, const char**);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 (*GameData_2118128[])();
extern __int64 (*GameData_21181a8[])();
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* GameData_2131aa8[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21759e0;
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_226b86c;
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void GameHr_a51e10(__int64, unsigned int, int, int);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 (***game_facility_IndividualMenu_CreateFirstReminderDialog(
    __int64 a1, int a2, __int64 a3, __int64 a4))();

__int64 (***game_facility_IndividualMenu_CreateFirstReminderDialog(
    __int64 a1, int a2, __int64 a3, __int64 a4))()
{
  __int64 v8;
  __int16* v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  int v13;
  int i;
  const char* v15;
  __int64* v16;
  const char** v17;
  const char* v18;
  const char* v19;
  const char* v20;
  __int64 v21;
  __int64* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 (***result)();
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  char* v49;
  char* v50;
  struct {
    __int64 v51[2];
    const char* v52;
    char gap88_[8];
    __int64* v53;
  } v51_;
  struct {
    const char* v54[2];
    const char* v55;
  } v54_;
  struct {
    __int64 (**v56)();
    int v57;
  } v56_;
  struct {
    __int64 (**v58)();
    unsigned __int64 v59;
    unsigned __int64 v60;
    unsigned __int64 v61;
    __int64 (***v62)();
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
  } v58_;

  if (game_gmap_GmapClock_instance_ != 0) {
    v8 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v8 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v9 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
  }
  else {
    v9 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v10 = *(_WORD*)(v8 + 4);
  v11 = *(_WORD*)(v8 + 6);
  LOWORD(v56_.v56) = *(_WORD*)v8;
  v12 = *(_WORD*)(v8 + 2);
  v13 = *(_DWORD*)(v8 + 8);
  WORD2(v56_.v56) = v10;
  HIWORD(v56_.v56) = v11;
  WORD1(v56_.v56) = v12;
  v56_.v57 = v13;
  if (a2 >= 1) {
    for (i = a2; i != 0; --i) {
      Dir_70ea50_alt1((void*)((__int64)&v58_.v58), (__int16*)&v56_.v56, v9);
      v56_.v56 = v58_.v58;
      v56_.v57 = v58_.v59;
    }
    v12 = WORD1(v56_.v56);
    v10 = WORD2(v56_.v56);
  }
  task_17d8b50((void*)(v51_.v51), v12, (__int64)&GameData_21759e0);
  if ((v51_.v51[0] & 1) != 0) {
    v15 = v51_.v52;
  }
  else {
    v15 = (char*)v51_.v51 + 1;
  }
  task_17d8c30((void*)((__int64*)v54_.v54), v10, (__int64)&GameData_21759e0);
  v16 = msg_MessageManager_instance__ptr[0];
  v17 = (const char**)msg_MessageManager_empty_text__ptr;
  if (((__int64)v54_.v54[0] & 1) != 0) {
    v18 = v54_.v55;
  }
  else {
    v18 = (char*)v54_.v54 + 1;
  }
  if (v15 != nullptr) {
    v19 = v15;
  }
  else {
    v19 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v19);
  if (v18 != nullptr) {
    v20 = v18;
  }
  else {
    v20 = *v17;
  }
  GameRoutine_60a020(*v16 + 14728, v20);
  GameHr_a51e10(*v16 + 14704, 2u, a2, 0);
  v21 = *v16;
  v58_.v63 = -1;
  v58_.v64 = -1;
  v22 = GameData_212e348;
  v58_.v65 = -1;
  v58_.v66 = -1;
  v58_.v67 = -1;
  v58_.v68 = -1;
  v58_.v69 = -1;
  v58_.v70 = -1;
  v58_.v71 = -1;
  v58_.v72 = -1;
  v58_.v73 = -1;
  v58_.v74 = -1;
  v58_.v58 = (__int64 (**)(void))(GameData_212e348 + 2);
  v58_.v59 = 0xFFFF0001FFFF0000LL;
  v58_.v60 = 0xFFFF0004FFFF0002LL;
  v58_.v61 = 0xFFFF0006FFFF0005LL;
  v58_.v75 = 8;
  v58_.v62 = (__int64 (***)(void))0xFFFF0008FFFF0007LL;
  v23 = GameRoutine_a4dbe0(v21, "MID_IndividualMenu_Reminder_Confirm", 0);
  if (((__int64)v54_.v54[0] & 1) != 0 && v54_.v55 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (__int64)v54_.v55);
  }
  if ((v51_.v51[0] & 1) != 0 && v51_.v52 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v51_.v52);
  }
  if (GameData_226b86c <= 0 && *(_QWORD*)(a4 + 32) != 0) {
    v26 = *v16;
    v54_.v54[0] = v23;
    v58_.v63 = -1;
    v58_.v64 = -1;
    v58_.v65 = -1;
    v58_.v66 = -1;
    v58_.v67 = -1;
    v58_.v68 = -1;
    v58_.v69 = -1;
    v58_.v70 = -1;
    v58_.v71 = -1;
    v58_.v72 = -1;
    v58_.v73 = -1;
    v58_.v74 = -1;
    v58_.v58 = (__int64 (**)(void))(v22 + 2);
    v58_.v59 = 0xFFFF0001FFFF0000LL;
    v58_.v60 = 0xFFFF0004FFFF0002LL;
    v58_.v61 = 0xFFFF0006FFFF0005LL;
    v58_.v75 = 8;
    v58_.v62 = (__int64 (***)(void))0xFFFF0008FFFF0007LL;
    v27 = GameRoutine_a4dbe0(v26, "MID_IndividualMenu_Reminder_Yes", 0);
    v28 = *v16;
    v50 = v27;
    GameHr_a51e10(v28 + 14704, 0, a2, 0);
    v29 = *v16;
    v58_.v63 = -1;
    v58_.v64 = -1;
    v58_.v65 = -1;
    v58_.v66 = -1;
    v58_.v67 = -1;
    v58_.v68 = -1;
    v58_.v69 = -1;
    v58_.v70 = -1;
    v58_.v71 = -1;
    v58_.v72 = -1;
    v58_.v73 = -1;
    v58_.v74 = -1;
    v58_.v58 = (__int64 (**)(void))(v22 + 2);
    v58_.v59 = 0xFFFF0001FFFF0000LL;
    v58_.v60 = 0xFFFF0004FFFF0002LL;
    v58_.v61 = 0xFFFF0006FFFF0005LL;
    v58_.v75 = 8;
    v58_.v62 = (__int64 (***)(void))0xFFFF0008FFFF0007LL;
    v49 = GameRoutine_a4dbe0(v29, "MID_IndividualMenu_Reminder_Yes_Fixed", 0);
    v30 = *v16;
    v58_.v63 = -1;
    v58_.v64 = -1;
    v58_.v65 = -1;
    v58_.v66 = -1;
    v58_.v67 = -1;
    v58_.v68 = -1;
    v58_.v69 = -1;
    v58_.v70 = -1;
    v58_.v71 = -1;
    v58_.v72 = -1;
    v58_.v73 = -1;
    v58_.v74 = -1;
    v58_.v58 = (__int64 (**)(void))(v22 + 2);
    v58_.v59 = 0xFFFF0001FFFF0000LL;
    v58_.v60 = 0xFFFF0004FFFF0002LL;
    v58_.v61 = 0xFFFF0006FFFF0005LL;
    v58_.v75 = 8;
    v58_.v62 = (__int64 (***)(void))0xFFFF0008FFFF0007LL;
    v48 = GameRoutine_a4dbe0(v30, "MID_IndividualMenu_Reminder_No", 0);
    v58_.v62 = &v58_.v58;
    v58_.v58 = GameData_2118128;
    v51_.v53 = nullptr;
    v31 = RouteMenuItem_166e340(a1, v54_.v54, (const char**)&v50,
                                (const char**)&v49, (const char**)&v48, a3, a4,
                                (__int64)&v58_.v58, (__int64)v51_.v51);
    if (v51_.v53 == v51_.v51) {
      v32 = 32;
    }
    else {
      if (v51_.v53 == nullptr) {
        goto LABEL_44;
      }
      v32 = 40;
    }
    (*(void (**)(__int64))(*v51_.v53 + v32))((__int64)v51_.v53);
  LABEL_44:
    if (v58_.v62 == &v58_.v58) {
      v39 = 4;
    }
    else {
      if (v58_.v62 == nullptr) {
      LABEL_49:
        v41 = v31[29];
        v40 = v31[30];
        result = &v58_.v58;
        v58_.v58 = GameData_21181a8;
        v58_.v62 = &v58_.v58;
        if (v40 == v41) {
          goto LABEL_60;
        }
        v42 = 0;
        v43 = GameData_212e008[0];
        v44 = GameData_2131aa8[0];
        while (1) {
          v45 = *(_QWORD*)(v41 + 8 * v42);
          if (v45 != 0) {
            v46 = __dynamic_cast(v45, v43, v44, 0);
            if (v46 != 0) {
              v51_.v51[0] = v46;
              if (v58_.v62 == nullptr) {
                GameRoutine_60a310_alt1();
              }
              if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v58_.v62)[6])(
                       v58_.v62, v51_.v51) &
                   1) != 0) {
              LABEL_57:
                result = v58_.v62;
                if (v58_.v62 != &v58_.v58) {
                  goto LABEL_58;
                }
              LABEL_60:
                v47 = 4;
                return (__int64 (***)(void))(
                    (__int64 (*)(__int64))(*result)[v47])((__int64)result);
              }
              v41 = v31[29];
              v40 = v31[30];
            }
          }
          if (++v42 >= (unsigned __int64)((v40 - v41) >> 3)) {
            goto LABEL_57;
          }
        }
      }
      v39 = 5;
    }
    ((__int64 (*)(__int64))(*v58_.v62)[v39])((__int64)v58_.v62);
    goto LABEL_49;
  }
  v54_.v54[0] = v23;
  v51_.v53 = nullptr;
  v58_.v58 = GameData_2118128;
  v58_.v62 = &v58_.v58;
  v33 = HubTalkNatives_e14270(a1, v54_.v54);
  if (v33 != 0) {
    v34 = (_QWORD*)v33;
    v35 = (__int64*)fw_memory_g_heap_manager_ptr;
    v36 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
    GameRoutine_16477d0(v36, "MID_IndividualMenu_Reminder_Yes", a3,
                        (__int64)v51_.v51);
    BasicMenuCursor_16e0c00(v34, v36);
    v37 = fw_memory_HeapManager_Allocate_alt1(*v35, 192, 16, 0);
    GameRoutine_16477d0(v37, "MID_IndividualMenu_Reminder_No",
                        (__int64)&v58_.v58, (__int64)v51_.v51);
    BasicMenuCursor_16e0c00(v34, v37);
  }
  result = v58_.v62;
  if (v58_.v62 == &v58_.v58) {
    goto LABEL_60;
  }
LABEL_58:
  if (result != nullptr) {
    v47 = 5;
    return (__int64 (***)(void))((__int64 (*)(__int64))(*result)[v47])(
        (__int64)result);
  }
  return result;
}

void IndividualMenu_Unknown50(__int64 a1, __int64* a2)
{
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520_alt1();
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
        GameRoutine_60a210_alt1();
      }
      v13 = v3;
      v14 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      v3 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "ItemChange";
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_ItemChange";
    *(_DWORD*)(v15 + 20) = 0;
    *(_DWORD*)(v15 + 24) = v3;
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    memcpy_alt1(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_DWORD*)(v4 + 20) = 0;
    *(_DWORD*)(v4 + 24) = v3;
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    v6 = v4 + 40;
    *(_QWORD*)v4 = "ItemChange";
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_ItemChange";
    *(_BYTE*)(v4 + 16) = 1;
  }
  a2[1] = v6;
}

__int64 IndividualMenu_Unknown35(__int64 a1)
{
  __int64 v2;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 (***v12)();
  __int64 v13;
  __int64 v14;
  __int64*** v15;
  __int64** v16;
  __int64** v17;
  __int64* v18;
  __int64* v19;
  _BOOL4 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 (**v26)();
  __int64 v27;
  __int64 (***v28)();
  __int64 v29;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  if (*(_QWORD*)(a1 + 208) != 0 &&
      (v5 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 208))) !=
          0) {
    v6 = *(__int64 (***)())(a1 + 200);
    v7 = v5;
    v8 = ui_LayoutAccessor_FindPartsLayout(a1 + 200, "L_List");
    v9 = 0;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v26 = v6;
    v27 = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
  }
  else {
    v8 = ui_LayoutAccessor_FindPartsLayout(a1 + 200, "L_List");
    v7 = 0;
    v26 = nullptr;
    v27 = 0;
    v9 = 1;
  }
  GameRoutine_16dcd30(v2, "IndividualListMenu", &v26, v8);
  v10 = v27;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  *(_QWORD*)(v2 + 1056) = a1;
  *(_DWORD*)(v2 + 1064) = 0;
  *(_QWORD*)v2 = &game_menu_MultiMenu_vtable;
  *(_QWORD*)(v2 + 176) =
      (__int64)((char*)&game_menu_MultiMenu_vtable + 1304);
  if ((v9 & 1) != 0) {
    *(_QWORD*)v2 = game_facility_anonymous_IndividualMultiMenu_vtable;
    *(_QWORD*)(v2 + 176) =
        (__int64)((char*)game_facility_anonymous_IndividualMultiMenu_vtable +
                  1304);
    GameRoutine_16de1f0(v2, 3, 0);
  }
  else {
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
    *(_QWORD*)v2 = game_facility_anonymous_IndividualMultiMenu_vtable;
    *(_QWORD*)(v2 + 176) =
        (__int64)((char*)game_facility_anonymous_IndividualMultiMenu_vtable +
                  1304);
    GameRoutine_16de1f0(v2, 3, 0);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  *(_QWORD*)v2 = game_facility_anonymous_IndividualListMenu_vtable;
  v12 = &v26;
  *(_QWORD*)(v2 + 176) =
      (__int64)((char*)game_facility_anonymous_IndividualListMenu_vtable +
                1328);
  v13 = GameData_21f3ff8;
  *(_DWORD*)(GameData_21f3ff8 + 8) = -1;
  *(_DWORD*)(v13 + 44) = -1;
  v14 = *(_QWORD*)(v13 + 48);
  *(_QWORD*)(v13 + 12) = -1;
  *(_QWORD*)(v13 + 20) = -1;
  *(_QWORD*)(v13 + 28) = -1;
  *(_QWORD*)(v13 + 36) = -1;
  *(_QWORD*)(v13 + 56) = v14;
  *(_QWORD*)(v13 + 80) = *(_QWORD*)(v13 + 72);
  v26 = GameData_2117538;
  v15 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v28 = &v26;
  v16 = *v15;
  v17 = v15[1];
  if (*v15 == v17) {
    goto LABEL_33;
  }
  do {
    v18 = *v16;
    v19 = v16[1];
    if (v19 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v18 != nullptr) {
      v20 = (v18[6] & 0x20) == 0;
      if (v19 == nullptr) {
        goto LABEL_25;
      }
    }
    else {
      v20 = false;
      if (v19 == nullptr) {
        goto LABEL_25;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v19 + 16))(v19);
      std___1___shared_weak_count___release_weak(v19);
      if (!v20) {
        goto LABEL_17;
      }
      goto LABEL_26;
    }
  LABEL_25:
    if (v20) {
    LABEL_26:
      v29 = **v16;
      if (v28 == nullptr) {
        GameRoutine_60a310(0, v11);
      }
      ((void (*)(__int64 (***)(), __int64*))(*v28)[6])(v28, &v29);
    }
  LABEL_17:
    v16 += 2;
  } while (v16 != v17);
  v12 = v28;
  if (v28 != &v26) {
    if (v28 != nullptr) {
      v21 = 5;
      goto LABEL_34;
    }
    goto LABEL_35;
  }

LABEL_33:
  v21 = 4;

LABEL_34:
  ((void (*)(__int64 (***)()))(*v12)[v21])(v12);

LABEL_35:
  v23 = *(_QWORD**)(v2 + 256);
  v22 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v23 != v22) {
    if (*v23 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v23 + 8LL))(*v23);
      v22 = *(_QWORD**)(v2 + 264);
    }
    ++v23;
  }
  v24 = *(_QWORD*)(v2 + 344);
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
  if ((v9 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v2;
}

__int64 IndividualMenu_Unknown39(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  double v5;
  float v6;
  float v7;
  float v8;
  float v9;
  char* v10;
  __int64 v11;
  char v12;
  char* v13;
  __int64 v14;
  char v15;
  char* v16;
  __int64 v17;
  char v18;
  char* v19;
  __int64 v20;
  char v21;
  char* v22;
  __int64 v23;
  char v24;
  char* v25;
  __int64 v26;
  char v27;
  char* v28;
  __int64 v29;
  char v30;
  char* v31;
  __int64 v32;
  char v33;
  char* v34;
  __int64 v35;
  char v36;
  char* v37;
  __int64 v38;
  char v39;
  float v40;
  char* v41;
  __int64 v42;
  char v43;
  char* v44;
  __int64 v45;
  char v46;
  char* v47;
  __int64 v48;
  char v49;
  char* v50;
  __int64 v51;
  char v52;
  char* v53;
  __int64 v54;
  char v55;
  __int64* v56;
  unsigned __int8* v57;
  unsigned __int8* v58;
  unsigned __int8* v59;
  struct {
    __int64* v61;
    __int64 v62;
  } v61_;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  LayoutAccessor_1560070((void*)(&v61_.v61), (__int64*)(a1 + 200), "L_Table"),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v61_.v62 != 0) {
    v2 = std___1___shared_weak_count_lock_alt1(v61_.v62),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
    v3 = v61_.v61;
    if (v61_.v62 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v61_.v62),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        goto LABEL_43;
      }
    }
    else {
      v5 = ui_LayoutAccessor_GetPaneTranslate(v3, "N_Icon00_W"),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v6 = *(float*)&v5;
      ui_LayoutAccessor_GetPaneTranslate(v3, "N_Icon00_H"),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v8 = v7;
      v9 = v6 * 0x0.0p+0f;
      v10 = game_util_Format("Icon%02d_%02d", 0, 0),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v11 = ui_LayoutAccessor_FindPane(v3, (__int64)v10),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v11 != 0) {
        v12 = *(_BYTE*)(v11 + 88);
        *(_DWORD*)(v11 + 56) = 0;
        *(float*)(v11 + 48) = v9;
        *(float*)(v11 + 52) = v8 * 0x0.0p+0f;
        *(_BYTE*)(v11 + 88) = v12 | 0x10;
      }
      v13 = game_util_Format("Icon%02d_%02d", 0, 1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v14 = ui_LayoutAccessor_FindPane(v3, (__int64)v13),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v14 != 0) {
        v15 = *(_BYTE*)(v14 + 88);
        *(float*)(v14 + 48) = v9;
        *(float*)(v14 + 52) = v8;
        *(_DWORD*)(v14 + 56) = 0;
        *(_BYTE*)(v14 + 88) = v15 | 0x10;
      }
      v16 = game_util_Format("Icon%02d_%02d", 0, 2),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v17 = ui_LayoutAccessor_FindPane(v3, (__int64)v16),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v17 != 0) {
        v18 = *(_BYTE*)(v17 + 88);
        *(_DWORD*)(v17 + 56) = 0;
        *(float*)(v17 + 48) = v9;
        *(float*)(v17 + 52) = v8 + v8;
        *(_BYTE*)(v17 + 88) = v18 | 0x10;
      }
      v19 = game_util_Format("Icon%02d_%02d", 0, 3),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v20 = ui_LayoutAccessor_FindPane(v3, (__int64)v19),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v20 != 0) {
        v21 = *(_BYTE*)(v20 + 88);
        *(_DWORD*)(v20 + 56) = 0;
        *(float*)(v20 + 48) = v9;
        *(float*)(v20 + 52) = v8 * 0x1.8000000000000p+1f;
        *(_BYTE*)(v20 + 88) = v21 | 0x10;
      }
      v22 = game_util_Format("Icon%02d_%02d", 0, 4),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v23 = ui_LayoutAccessor_FindPane(v3, (__int64)v22),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v23 != 0) {
        v24 = *(_BYTE*)(v23 + 88);
        *(_DWORD*)(v23 + 56) = 0;
        *(float*)(v23 + 48) = v9;
        *(float*)(v23 + 52) = v8 * 0x1.0000000000000p+2f;
        *(_BYTE*)(v23 + 88) = v24 | 0x10;
      }
      v25 = game_util_Format("Icon%02d_%02d", 1, 0),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v26 = ui_LayoutAccessor_FindPane(v3, (__int64)v25),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v26 != 0) {
        v27 = *(_BYTE*)(v26 + 88);
        *(_DWORD*)(v26 + 56) = 0;
        *(float*)(v26 + 48) = v6;
        *(float*)(v26 + 52) = v8 * 0x0.0p+0f;
        *(_BYTE*)(v26 + 88) = v27 | 0x10;
      }
      v28 = game_util_Format("Icon%02d_%02d", 1, 1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v29 = ui_LayoutAccessor_FindPane(v3, (__int64)v28),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v29 != 0) {
        v30 = *(_BYTE*)(v29 + 88);
        *(float*)(v29 + 48) = v6;
        *(float*)(v29 + 52) = v8;
        *(_DWORD*)(v29 + 56) = 0;
        *(_BYTE*)(v29 + 88) = v30 | 0x10;
      }
      v31 = game_util_Format("Icon%02d_%02d", 1, 2),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v32 = ui_LayoutAccessor_FindPane(v3, (__int64)v31),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v32 != 0) {
        v33 = *(_BYTE*)(v32 + 88);
        *(_DWORD*)(v32 + 56) = 0;
        *(float*)(v32 + 48) = v6;
        *(float*)(v32 + 52) = v8 + v8;
        *(_BYTE*)(v32 + 88) = v33 | 0x10;
      }
      v34 = game_util_Format("Icon%02d_%02d", 1, 3),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v35 = ui_LayoutAccessor_FindPane(v3, (__int64)v34),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v35 != 0) {
        v36 = *(_BYTE*)(v35 + 88);
        *(_DWORD*)(v35 + 56) = 0;
        *(float*)(v35 + 48) = v6;
        *(float*)(v35 + 52) = v8 * 0x1.8000000000000p+1f;
        *(_BYTE*)(v35 + 88) = v36 | 0x10;
      }
      v37 = game_util_Format("Icon%02d_%02d", 1, 4),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v38 = ui_LayoutAccessor_FindPane(v3, (__int64)v37),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v38 != 0) {
        v39 = *(_BYTE*)(v38 + 88);
        *(_DWORD*)(v38 + 56) = 0;
        *(float*)(v38 + 48) = v6;
        *(float*)(v38 + 52) = v8 * 0x1.0000000000000p+2f;
        *(_BYTE*)(v38 + 88) = v39 | 0x10;
      }
      v40 = v6 + v6;
      v41 = game_util_Format("Icon%02d_%02d", 2, 0),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v42 = ui_LayoutAccessor_FindPane(v3, (__int64)v41),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v42 != 0) {
        v43 = *(_BYTE*)(v42 + 88);
        *(_DWORD*)(v42 + 56) = 0;
        *(float*)(v42 + 48) = v40;
        *(float*)(v42 + 52) = v8 * 0x0.0p+0f;
        *(_BYTE*)(v42 + 88) = v43 | 0x10;
      }
      v44 = game_util_Format("Icon%02d_%02d", 2, 1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v45 = ui_LayoutAccessor_FindPane(v3, (__int64)v44),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v45 != 0) {
        v46 = *(_BYTE*)(v45 + 88);
        *(float*)(v45 + 48) = v40;
        *(float*)(v45 + 52) = v8;
        *(_DWORD*)(v45 + 56) = 0;
        *(_BYTE*)(v45 + 88) = v46 | 0x10;
      }
      v47 = game_util_Format("Icon%02d_%02d", 2, 2),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v48 = ui_LayoutAccessor_FindPane(v3, (__int64)v47),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v48 != 0) {
        v49 = *(_BYTE*)(v48 + 88);
        *(_DWORD*)(v48 + 56) = 0;
        *(float*)(v48 + 48) = v40;
        *(float*)(v48 + 52) = v8 + v8;
        *(_BYTE*)(v48 + 88) = v49 | 0x10;
      }
      v50 = game_util_Format("Icon%02d_%02d", 2, 3),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v51 = ui_LayoutAccessor_FindPane(v3, (__int64)v50),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v51 != 0) {
        v52 = *(_BYTE*)(v51 + 88);
        *(_DWORD*)(v51 + 56) = 0;
        *(float*)(v51 + 48) = v40;
        *(float*)(v51 + 52) = v8 * 0x1.8000000000000p+1f;
        *(_BYTE*)(v51 + 88) = v52 | 0x10;
      }
      v53 = game_util_Format("Icon%02d_%02d", 2, 4),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      v54 = ui_LayoutAccessor_FindPane(v3, (__int64)v53),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v54 != 0) {
        v55 = *(_BYTE*)(v54 + 88);
        *(_DWORD*)(v54 + 56) = 0;
        *(float*)(v54 + 48) = v40;
        *(float*)(v54 + 52) = v8 * 0x1.0000000000000p+2f;
        *(_BYTE*)(v54 + 88) = v55 | 0x10;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v2),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
LABEL_43:
  v56 = GameData_212cce0[0];
  v57 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212cce0[0] + 64) + 8LL);
  IndividualMenu_19353a0(a1, v57[42], 0, 0),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v57[44], 0, 1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v57[46], 0, 2),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v57[48], 0, 3),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v57[72], 0, 4),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  v58 = *(unsigned __int8**)(*(_QWORD*)(*v56 + 64) + 16LL);
  IndividualMenu_19353a0(a1, v58[42], 1, 0),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v58[44], 1, 1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v58[46], 1, 2),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v58[48], 1, 3),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v58[72], 1, 4),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  v59 = *(unsigned __int8**)(*(_QWORD*)(*v56 + 64) + 24LL);
  IndividualMenu_19353a0(a1, v59[42], 2, 0),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v59[44], 2, 1),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v59[46], 2, 2),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  IndividualMenu_19353a0(a1, v59[48], 2, 3),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  return IndividualMenu_19353a0(a1, v59[72], 2, 4);
}

__attribute__((swiftcall)) void IndividualMenu_Unknown33(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  _QWORD* v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  char* v11;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  BYTE13(v10) = 0;
  LOBYTE(v10) = 24;
  *(_DWORD*)((char*)&v10 + 9) = -1785993844;
  *(_QWORD*)((char*)&v10 + 1) = 0xA1E8A588E58B80E5LL;
  GameRoutine_7a8220_alt1(a1, &v10);
  if ((v10 & 1) != 0 && v11 != nullptr) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, (__int64)v11);
  }
  if ((unsigned int)GameHr_12dd710(GameData_21c9650) == 2) {
    v3 = GameRoutine_12dd7e0_alt1(2);
    if (v3 != nullptr) {
      v4 = (const char*)v3[1];
      v5 = strlen_alt1(v4);
      if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v6 = v5;
      if (v5 >= 0x17) {
        if ((v5 | 7) == 0x17) {
          v8 = 26;
        }
        else {
          v8 = (v5 | 7) + 1;
        }
        v7 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v8, 16, 0);
        *((_QWORD*)&v10 + 1) = v6;
        v11 = v7;
        *(_QWORD*)&v10 = v8 | 1;
      }
      else {
        LOBYTE(v10) = 2 * v5;
        v7 = (char*)&v10 + 1;
        if (v5 == 0) {
          goto LABEL_17;
        }
      }
      memmove_alt1((__int64)v7, (__int64)v4, v6);
    LABEL_17:
      v7[v6] = 0;
      GameRoutine_7a8220_alt1(a1, &v10);
      if ((v10 & 1) != 0 && v11 != nullptr) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v11);
      }
    }
  }
}

__int64 IndividualMenu_19353a0(__int64 a1, unsigned __int8 a2, int a3, int a4)
{
  __int64 result;
  __int64 v8;
  __int64* v9;
  char* v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64 v15;
  } v14_;

  LayoutAccessor_1560070((void*)(&v14_.v14), (__int64*)(a1 + 200), "L_Table");
  result = v14_.v15;
  if (v14_.v15 != 0) {
    v8 = std___1___shared_weak_count_lock_alt1(v14_.v15);
    v9 = v14_.v14;
    result = v14_.v15;
    if (v14_.v15 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v14_.v15);
    }
    if (v8 == 0 || v9 == nullptr) {
      if (v8 == 0) {
        return result;
      }
    }
    else {
      v11 = game_util_Format("Icon%02d_%02d", a3, a4);
      v12 = ui_LayoutAccessor_FindPane(v9, (__int64)v11);
      if (v12 != 0) {
        v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v13 = 0;
      }
      result = GameRoutine_1842430(v13, a2);
      *(_BYTE*)(v13 + 88) = *(_BYTE*)(v13 + 88) & 0xFE | result & 1;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
  return result;
}

__int64 game_facility_IndividualMenu_CreateFirstReminderDialog_lambda1_Invoke(
    __int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 1;
  return 0;
}

void game_facility_IndividualMenu_Run_lambda1_Invoke(__int64 a1, __int64 a2,
                                                     int* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64* v10;
  __int64* v11;
  struct {
    __int64 v12;
    int v13;
  } v12_;
  __int64 v14;
  int v15;

  v3 = *a3;
  v4 = game_gmap_GmapClock_instance_ + 8;
  if (game_gmap_GmapClock_instance_ != 0) {
    v5 = game_gmap_GmapClock_instance_ + 20;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
    v5 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v6 = *(_QWORD*)v4;
  v7 = *(_DWORD*)(v4 + 8);
  v12_.v12 = v6;
  v12_.v13 = v7;
  if (v3 >= 1) {
    do {
      Dir_70ea50((void*)((__int64)&v14), (__int16*)&v12_.v12, v5);
      --v3;
      v12_.v12 = v14;
      v12_.v13 = v15;
    } while (v3 != 0);
  }
  v8 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0 &&
      *(_QWORD*)game_hub_ProgressDisplayView_instance__ptr[0] != 0) {
    v10 = LayoutAccessor_155fbe0((__int64*)(v8 + 168), "L_Clock");
    GameRoutine_17c03b0((__int64)v10, (__int16*)&v12_.v12);
    v11 = LayoutAccessor_155fbe0((__int64*)(v8 + 168), "L_Task");
    GameRoutine_17c0750((__int64)v11, (__int16*)&v12_.v12,
                        (__int16*)(v8 + 280));
  }
}

__int64 game_facility_IndividualMenu_Run_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  signed int v6;
  int v7;
  int v8;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 (**v12)();
    signed int v13;
    char gap12_[20];
    __int64 (***v14)();
  } v12_;
  struct {
    __int64 (**v15)();
    int v16;
    char gap60_[20];
    __int64 (***v17)();
  } v15_;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 8LL);
  if (v2 == 0) {
    goto LABEL_15;
  }
  v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_2131cb0[0], 0);
  if (v3 == 0) {
    goto LABEL_15;
  }
  v4 = *(_DWORD*)(v3 + 1492);
  v5 = v3;
  v6 = GameHr_946c20(v4);
  if (v6 != v4) {
    v15_.v16 = v4;
    v12_.v13 = v6;
    v15_.v15 = GameData_2118318;
    v12_.v14 = &v12_.v12;
    v15_.v17 = &v15_.v15;
    v12_.v12 = GameData_2118398;
    GameRoutine_1933ba0(v5, v6, (__int64)&v15_.v15, (__int64)&v12_.v12);
    if (v12_.v14 == &v12_.v12) {
      v10 = 4;
    }
    else {
      if (v12_.v14 == nullptr) {
        goto LABEL_25;
      }
      v10 = 5;
    }
    ((__int64 (*)(__int64))(*v12_.v14)[v10])((__int64)v12_.v14);
  LABEL_25:
    if (v15_.v17 == &v15_.v15) {
      v11 = 4;
    }
    else {
      if (v15_.v17 == nullptr) {
        return 9;
      }
      v11 = 5;
    }
    ((__int64 (*)(__int64))(*v15_.v17)[v11])((__int64)v15_.v17);
    return 9;
  }
  if (v4 <= 1) {
    v7 = 1;
  }
  else {
    v7 = v4;
  }
  *(_DWORD*)(*GameData_212dcd0 + 16) = v7;
  if (GameData_2243960 != 0) {
    v8 = 2;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v8 = 6;
      }
      else {
        v8 = 2;
      }
    }
    *(_DWORD*)(GameData_2243960 + 152) = v8;
  }
  GameData_226b868 = 1;
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] == 0) {
    return 6;
  }
  GameRoutine_17b8f40_alt1(
      *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
LABEL_15:
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0 &&
      *(_QWORD*)game_hub_ProgressDisplayView_instance__ptr[0] != 0) {
    *(_BYTE*)(*(_QWORD*)game_hub_ProgressDisplayView_instance__ptr[0] + 153LL) =
        1;
  }
  return 6;
}

__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_1937550(__int64 a1)
{
  int v1;
  int v2;

  v1 = *(_DWORD*)(a1 + 8);
  if (v1 <= 1) {
    v1 = 1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 16) = v1;
  if (GameData_2243960 != 0) {
    v2 = 2;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v2 = 6;
      }
      else {
        v2 = 2;
      }
    }
    *(_DWORD*)(GameData_2243960 + 152) = v2;
  }
  GameData_226b868 = 1;
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  return 6;
}

__int64 game_facility_IndividualMenu_Run_lambda0_Invoke_19376d0(__int64 a1)
{
  int v1;
  int v2;

  v1 = *(_DWORD*)(a1 + 8);
  if (v1 <= 1) {
    v1 = 1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 16) = v1;
  if (GameData_2243960 != 0) {
    v2 = 2;
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v2 = 6;
      }
      else {
        v2 = 2;
      }
    }
    *(_DWORD*)(GameData_2243960 + 152) = v2;
  }
  GameData_226b868 = 1;
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  return 6;
}

__int64 game_facility_IndividualMenu_Run_lambda2_Invoke()
{
  if (game_hub_ProgressEventView_instance_ != 0 &&
      game_hub_ProgressDisplayView_instance_ != 0) {
    *(_BYTE*)(game_hub_ProgressDisplayView_instance_ + 153) = 1;
  }
  return 3;
}

#pragma GCC visibility pop
