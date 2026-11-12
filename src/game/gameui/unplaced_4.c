#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64,
                                                 __int64);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_1603b10(PSEUDO_X8,
                                             unsigned __int64 result);
__attribute__((swiftcall)) void game_1605540(PSEUDO_X8, unsigned int, int);
__attribute__((swiftcall)) void
game_gameui_Util_GetCorpsStatusUnitList(PSEUDO_X8, char, char, int);
__attribute__((swiftcall)) void task_17d8560(PSEUDO_X8, int, __int64, _QWORD*);
__int64* GameRoutine_171ad80(__int64* result, __int16*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* game_gameui_1590440(__int64* result, __int64**);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 Element_18863e0(__int64, const char**, char);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_157b310(__int64*, unsigned __int16*, __int64);
__int64 GameHr_159d8d0(__int64*);
__int64 GameHr_15d9080(__int64, __int64, _QWORD*);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_6c2b50(__int64);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameRoutine_156d320();
__int64 GameRoutine_157ecd0(__int64*, __int64, char);
__int64 GameRoutine_1584d90(__int64, _QWORD*, int, int);
__int64 GameRoutine_158ebe0(__int64, _DWORD*, __int64, __int64);
__int64 GameRoutine_1590b40(__int64 result, char, __int64**, char);
__int64 GameRoutine_1591700(__int64*, __int64, char);
__int64 GameRoutine_15a5060(__int64 result, unsigned __int8*, __int64, char);
__int64 GameRoutine_1841fc0(__int64, int);
__int64 GameRoutine_18b9ca0(__int64, unsigned int);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_715440();
__int64 GameRoutine_930b90(__int64, __int64);
__int64 HelpQuestInfo_15d4830(__int64*, __int64);
__int64 InfoTitle_18b9480(__int64, unsigned int*, _QWORD*, _DWORD*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 UnitUtil_1212be0(__int64, __int64);
__int64 Unit_6c8300(_QWORD*, char);
__int64 Unit_930ca0(__int64 result, __int64);
__int64 Util_157b410(__int64*, __int64);
__int64 Util_157ee20(__int64*, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_6e8720(__int64 result, __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_Unknown6c8630(__int64);
__int64 game_gameui_1590740(__int64*, int, int);
__int64 game_gameui_1590950(__int64*, int, int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_IsPaneVisible(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, float, float);
__int64 ui_LayoutAccessor_SetPaneSize_alt1(
    __int64 result, __int64, float) __asm__("ui_LayoutAccessor_SetPaneSize");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__int64 ui_LayoutAccessor_SetTextBoxColor(__int64*, __int64, _DWORD*);
bool Util_1579d20(__int64, __int64);
bool game_HasActiveSkill_843420(_DWORD*, __int64);
bool game_Unit_IsLocked(__int64);
char* GameHr_6ed030(__int64);
char* GameHr_6fb960(__int64);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* HistoryLogInfo_6fb810(__int64);
char* game_1604250(int);
char* game_util_Format(const char*, ...);
const char* Pane_58fac0(__int64, const char*);
double ui_LayoutAccessor_GetTextSize(__int64*, __int64);
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1ac6c8b;
extern _UNKNOWN GameData_1ad7123;
extern _UNKNOWN GameData_1af5ec9;
extern _UNKNOWN GameData_22594f0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (***GameData_212dae8)();
extern __int64 (*GameData_204d688[])();
extern __int64 (*GameData_204db08[])();
extern __int64 (*GameData_204db88[])();
extern __int64 (*GameData_204dc08[])();
extern __int64 (*GameData_204dc88[])();
extern __int64 (*GameData_204dd08[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212e348;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 GameData_21759e0;
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 ui_Manager_instance_;
extern char* GameData_204d1d8[15];
extern char* GameData_204f1e8[44];
extern char* GameData_204f370[8];
extern char GameData_1a9f09e;
extern int GameData_22594e8;
float ui_LayoutAccessor_GetPaneSize(__int64*, __int64);
int __cxa_guard_acquire(__int64);
int sprintf(__int64, const char*, ...);
unsigned __int64 GameRoutine_842cb0(_DWORD*, _QWORD*);
unsigned __int64 GameRoutine_842e20(_DWORD*, _QWORD*, unsigned __int16*);
unsigned __int64 strlen(const char*);
unsigned __int8* Unit_931120(unsigned __int8*);
void GameHr_156c850(__int64, const char*);
void GameHr_930e20(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64, const char*, int, ...);
void GameRoutine_158e7e0(__int64, unsigned int*, __int64, char);
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
void GameRoutine_15d7d00(__int64*, int, const char*, const char*, const char*,
                         __int64, __int64, int);
void GameRoutine_66dd60(__int64*, unsigned __int64, _DWORD*);
void GameRoutine_6e3b50(__int64, _QWORD*);
void InfoTitle_18b8e80(__int64, const char*);
void InfoTitle_18b90a0(__int64);
void InfoTitle_18b9170(__int64*, _WORD*);
void LayoutAccessor_1562060(__int64*, __int64, const char*);
void Util_1584ec0(__int64*, __int64, unsigned __int8);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void game_156c240(__int64*);
void game_17bf070(__int64*, __int16*);
void game_17bf390(__int64*, __int16*);
void game_gameui_15d7960(_QWORD**, __int64*, __int64, __int64, unsigned int);
void game_gameui_Util_SetArtsSkillStatus(__int64, _DWORD*, __int64, char, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_LayoutAccessor_SetTextBoxString(__int64*, __int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void game_gameui_157a1e0(__int64* a1, __int64 a2, unsigned __int8 a3, char a4,
                         char a5, char a6, char a7);
void game_gameui_157cb40(__int64* a1, int a2, __int64 a3, __int64 a4,
                         unsigned int a5, char a6);
void game_gameui_157e3a0(__int64* a1, unsigned int* a2, unsigned __int8 a3,
                         _QWORD* a4);
__int64 game_gameui_1582e00(__int64 a1, int a2);
__int64 game_gameui_1584020(__int64 a1, __int64 a2, char a3);
void game_gameui_1585290(__int64* a1, __int64 a2, __int64 a3);
__int64 game_gameui_15858a0(__int64* a1, _QWORD* a2);
__int64 game_gameui_1586840(__int64* a1, char a2);
__int64 game_gameui_15869e0(__int64 result, int a2);
void game_gameui_1590260(__int64* a1, char a2, char a3, char a4, int a5);
void game_gameui_1591240(__int64* a1, char a2, char a3, __int64** a4);
__int64 game_gameui_1593d90(__int64* a1, __int64 a2);
__int64 game_gameui_15957c0(__int64* a1, unsigned int a2, int a3, char a4,
                            char a5);
void game_gameui_1595d90(__int64* a1, int a2, char a3, char a4);
__int64 game_gameui_1598e60(__int64 a1, char a2, unsigned int a3,
                            unsigned int a4, unsigned __int8 a5);
void game_gameui_159b930(__int64* a1, unsigned int a2);
void game_gameui_15d2910(__int64* a1, _WORD* a2);
void game_gameui_15d2c40(__int64* a1, unsigned int* a2, unsigned int a3,
                         _QWORD* a4, int a5, char a6);
void game_gameui_15d4ba0(__int64 a1, __int64 a2, char a3, unsigned __int8 a4,
                         char a5);
void game_gameui_171ab70(__int64 a1);
__int64 game_gameui_17badf0();
__int64 game_gameui_17bb420();

void game_gameui_157a1e0(__int64* a1, __int64 a2, unsigned __int8 a3, char a4,
                         char a5, char a6, char a7)
{
  char* v14;
  __int64 v15;
  const char* v16;
  unsigned __int16* v17;
  unsigned __int8 v18;
  char v19;
  int v20;
  char* v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  const char* v33;
  char* v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  const char* v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int8* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  int v72;
  char v73;
  _BYTE* v74;
  __int64 v75;
  __int64 v76;
  char v77;
  struct {
    _QWORD v78[4];
    _QWORD* v79;
  } v78_;
  struct {
    __int64 v80;
    __int64 v81;
  } v80_;
  struct {
    _QWORD v82[4];
    _QWORD* v83;
  } v82_;
  struct {
    __int64 v84;
    __int64 v85;
  } v84_;
  struct {
    _QWORD v86[4];
    _QWORD* v87;
  } v86_;
  struct {
    __int64 v88;
    __int64 v89;
  } v88_;
  struct {
    _QWORD v90[4];
    _QWORD* v91;
  } v90_;
  struct {
    __int64 v92;
    __int64 v93;
  } v92_;
  struct {
    __int64* v94;
    __int64 v95;
  } v94_;
  struct {
    _DWORD v96[3];
    char v97;
  } v96_;
  __int64 v98;
  _BYTE v99[24];
  struct {
    unsigned __int64 v100;
    _BYTE* v101;
  } v100_;
  __int64 v102;
  struct {
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
  } v103_;

  v14 = game_util_Format("%d", *(_DWORD*)(a2 + 92));
  v15 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
  if (v15 != 0) {
    GameRoutine_156c5d0(v15, (__int64)v14, 0);
  }
  v16 = "T_Num";
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"T_Num", 1);
  v17 = (unsigned __int16*)(a2 + 4);
  if (*(_WORD*)(a2 + 4) != 0) {
    v18 = a3;
    v19 = a6;
    v20 = *(_DWORD*)(a2 + 96);
    v77 = a4;
    if (v20 > -1) {
      v16 = "T_Num_Endurance";
    }
    if ((v20 & 0x80000000) == 0) {
      v21 = game_util_Format("%d", *(_DWORD*)(a2 + 92));
      v22 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num_Endurance");
      if (v22 != 0) {
        GameRoutine_156c5d0(v22, (__int64)v21, 0);
      }
    }
    v23 = GameData_212c878[0];
    v24 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *v17);
    if (*(_BYTE*)(v24 + 73) == 18) {
      v25 = *(_DWORD*)(v24 + 76);
      if (v25 != 0) {
        v26 = *(unsigned __int8*)(v24 + 87);
        v27 = (v26 - *(unsigned __int8*)(a2 + 6)) &
              ~((int)(v26 - *(unsigned __int8*)(a2 + 6)) >> 31);
        if (v27 < v26) {
          v25 = (int)(v27 * v25) / (int)v26;
        }
        if (v25 <= 1) {
          v28 = 1;
        }
        else {
          v28 = v25;
        }
      }
      else {
        v28 = 0;
      }
      *(_DWORD*)v99 = 0;
      *(_QWORD*)&v99[4] = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v38 = *GameData_212ceb0;
      }
      else {
        v38 = 0;
      }
      *(_QWORD*)&v99[12] = v38;
      WORD1(v100_.v100) = 0;
      HIDWORD(v100_.v100) = 0;
      v103_.v104 = 0;
      v103_.v105 = 0;
      v103_.v106 = 0;
      v103_.v107 = 0;
      v102 = (__int64)&v103_.v103;
      v103_.v103 = 0;
      GameRoutine_930b90((__int64)&v100_.v100, (__int64)GameData_212c8b0[0]);
      LODWORD(v103_.v108) = 0;
      HIDWORD(v103_.v108) = v28;
      LODWORD(v103_.v109) = 0;
      v39 = a1;
      goto LABEL_50;
    }
    if ((a7 & 1) != 0) {
      v30 = *(_DWORD*)(a2 + 92);
      *(_DWORD*)v99 = 8;
      *(_QWORD*)&v99[4] = *(_QWORD*)(a2 + 4);
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v31 = *GameData_212ceb0;
      }
      else {
        v31 = 0;
      }
      *(_QWORD*)&v99[12] = v31;
      WORD1(v100_.v100) = 0;
      HIDWORD(v100_.v100) = 0;
      v103_.v104 = 0;
      v103_.v105 = 0;
      v103_.v106 = 0;
      v103_.v107 = 0;
      v102 = (__int64)&v103_.v103;
      v103_.v103 = 0;
      GameRoutine_930b90((__int64)&v100_.v100, (__int64)GameData_212c8b0[0]);
      LODWORD(v103_.v108) = 0;
      HIDWORD(v103_.v108) = v30;
      v39 = a1;
      LODWORD(v103_.v109) = -1;
    LABEL_50:
      game_gameui_157a1e0(v39, (__int64)v99, 1u, 0, 1, 0, 0);
      LODWORD(v100_.v101) = 0;
      v100_.v100 = 0;
      if ((v103_.v105 & 1) != 0) {
        *(_BYTE*)v103_.v107 = 0;
        v103_.v106 = 0;
      }
      else {
        LOWORD(v103_.v105) = 0;
      }
      GameRoutine_6e3b50((__int64)&v102, (_QWORD*)v103_.v103);
      v103_.v103 = 0;
      v103_.v104 = 0;
      v102 = (__int64)&v103_.v103;
      if ((v103_.v105 & 1) != 0) {
        v45 = (_QWORD*)v103_.v107;
        if (v103_.v107 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v103_.v107);
          v45 = (_QWORD*)v103_.v103;
        }
      }
      else {
        v45 = nullptr;
      }
      GameRoutine_6e3b50((__int64)&v102, v45);
      return;
    }
    if ((a5 & 1) != 0) {
      v32 = v18 & (v20 > -1);
      if (v32 != 0) {
        v33 = "EnduranceOn";
      }
      else {
        v33 = "Item";
      }
      LayoutAccessor_1562cf0((__int64)a1, v33);
      if (v32 != 0) {
        v34 = game_util_Format("%d", *(_DWORD*)(a2 + 96));
        v35 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_MaxNum");
        v36 = v19;
        if (v35 != 0) {
          GameRoutine_156c5d0(v35, (__int64)v34, 0);
        }
        v16 = "T_Num_Endurance";
      LABEL_66:
        LayoutAccessor_1560070((void*)(&v94_.v94), a1, "L_Icon");
        if (v94_.v95 == 0) {
          goto LABEL_92;
        }
        v48 = std___1___shared_weak_count_lock(v94_.v95);
        if (v48 == 0) {
        LABEL_90:
          if (v94_.v95 != 0) {
            std___1___shared_weak_count___release_weak(v94_.v95);
          }
        LABEL_92:
          v58 = GameHr_6ed030(*(_QWORD*)(*(_QWORD*)(*v23 + 64) + 8LL * *v17));
          if (v58 != nullptr) {
            v59 = (__int64)v58;
            v60 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
            if (v60 != 0) {
              GameRoutine_156c5d0(v60, v59, 0);
            }
          }
          v61 = 36;
          if ((v36 & 1 | v18 & ((signed __int32)*(_DWORD*)(a2 + 92) <
                                (signed __int32)*(_DWORD*)(a2 + 96))) != 0) {
            v61 = 60;
          }
          v55 = *(_DWORD*)((char*)GameData_212da30 + v61);
          v56 = ui_LayoutAccessor_FindTextBox(a1, (__int64)v16);
          a4 = v77;
          if (v56 == 0) {
            goto LABEL_100;
          }
          goto LABEL_98;
        }
        v49 = v48;
        if (v94_.v94 != nullptr) {
          *(_QWORD*)v99 = GameData_204d688;
          v100_.v101 = v99;
          GameHr_157b310(v94_.v94, (unsigned __int16*)(a2 + 4), (__int64)v99);
          if (v100_.v101 == v99) {
            v50 = 32;
          }
          else {
            if (v100_.v101 == nullptr) {
              goto LABEL_88;
            }
            v50 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v100_.v101 + v50))(
              (__int64)v100_.v101);
        }
      LABEL_88:
        if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
          std___1___shared_weak_count___release_weak(v49);
        }
        goto LABEL_90;
      }
      v16 = "T_Num";
    }
    else {
      LayoutAccessor_1562cf0((__int64)a1, "NumOff");
    }
    v36 = v19;
    goto LABEL_66;
  }
  if (*(_BYTE*)(a2 + 12) != 0) {
    LayoutAccessor_1562cf0((__int64)a1, "Item");
    LayoutAccessor_1560070((void*)(&v92_.v92), a1, "L_Icon");
    v90_.v90[0] = GameData_204db08;
    v90_.v90[1] = a2;
    v90_.v91 = v90_.v90;
    Util_157b410(&v92_.v92, (__int64)v90_.v90);
    if (v90_.v91 == v90_.v90) {
      v29 = 32;
    }
    else {
      if (v90_.v91 == nullptr) {
      LABEL_42:
        if (v92_.v93 != 0) {
          std___1___shared_weak_count___release_weak(v92_.v93);
        }
        v40 = *(const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                                         8LL * *(unsigned __int8*)(a2 + 12)) +
                              32LL);
        v102 = -1;
        v103_.v103 = -1;
        v103_.v104 = -1;
        v103_.v105 = -1;
        v103_.v106 = -1;
        v103_.v107 = -1;
        v103_.v108 = -1;
        v103_.v109 = -1;
        v103_.v110 = -1;
        v103_.v111 = -1;
        v103_.v112 = -1;
        v103_.v113 = -1;
        v41 = *msg_MessageManager_instance__ptr[0];
        *(_QWORD*)v99 = GameData_212e348 + 2;
        *(_QWORD*)&v99[8] = 0xFFFF0001FFFF0000LL;
        *(_QWORD*)&v99[16] = 0xFFFF0004FFFF0002LL;
        v100_.v100 = 0xFFFF0006FFFF0005LL;
        v103_.v114 = 8;
        v100_.v101 = (_BYTE*)0xFFFF0008FFFF0007LL;
        v42 = GameRoutine_a4dbe0(v41, v40, 0);
        if (v42 != nullptr) {
          v43 = (__int64)v42;
          v44 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
          if (v44 != 0) {
            GameRoutine_156c5d0(v44, v43, 0);
          }
        }
        goto LABEL_100;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v90_.v91 + v29))((__int64)v90_.v91);
    goto LABEL_42;
  }
  if (*(_BYTE*)(a2 + 24) != 0) {
    LayoutAccessor_1562cf0((__int64)a1, "Item");
    LayoutAccessor_1560070((void*)(&v88_.v88), a1, "L_Icon");
    v86_.v86[0] = GameData_204db88;
    v86_.v86[1] = a2;
    v86_.v87 = v86_.v86;
    Util_157b410(&v88_.v88, (__int64)v86_.v86);
    if (v86_.v87 == v86_.v86) {
      v37 = 32;
    }
    else {
      if (v86_.v87 == nullptr) {
        goto LABEL_74;
      }
      v37 = 40;
    }
    (*(void (**)(__int64))(*v86_.v87 + v37))((__int64)v86_.v87);
  LABEL_74:
    if (v88_.v89 != 0) {
      std___1___shared_weak_count___release_weak(v88_.v89);
    }
    v51 = Unit_931120((unsigned __int8*)(a2 + 24));
    if (v51 != nullptr) {
      v52 = (__int64)v51;
      v53 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
      if (v53 != 0) {
        GameRoutine_156c5d0(v53, v52, 0);
      }
    }
    v54 = 36;
    if ((a6 & 1 | a3 & ((signed __int32)*(_DWORD*)(a2 + 92) <
                        (signed __int32)*(_DWORD*)(a2 + 96))) != 0) {
      v54 = 60;
    }
    v55 = *(_DWORD*)((char*)GameData_212da30 + v54);
    v56 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
    if (v56 == 0) {
      goto LABEL_100;
    }
    goto LABEL_98;
  }
  if ((*(_WORD*)(a2 + 88) & 0xFFF) == 0) {
    LayoutAccessor_1562cf0((__int64)a1, "Cost");
    LayoutAccessor_1560070((void*)(&v80_.v80), a1, "L_Icon");
    v78_.v78[0] = GameData_204dc88;
    v78_.v78[1] = a2;
    v78_.v79 = v78_.v78;
    Util_157b410(&v80_.v80, (__int64)v78_.v78);
    if (v78_.v79 == v78_.v78) {
      v57 = 32;
    }
    else {
      if (v78_.v79 == nullptr) {
      LABEL_124:
        if (v80_.v81 != 0) {
          std___1___shared_weak_count___release_weak(v80_.v81);
        }
        v71 = game_1604250(*(_DWORD*)a2);
        LayoutAccessor_1562060(a1, (__int64)"T_Txt", v71);
        v72 = *(_DWORD*)(a2 + 92);
        if (*(_DWORD*)a2 != 0) {
          v96_.v97 = 0;
          v98 = GameData_21759e0;
          *(_QWORD*)&v96_.v96[1] = 0x200000000LL;
          v73 = 2;
        }
        else {
          v96_.v97 = 0;
          v98 = GameData_21759e0;
          *(_QWORD*)&v96_.v96[1] = 0x200000000LL;
          v73 = 3;
        }
        LOBYTE(v96_.v96[0]) = v73;
        task_17d8560((void*)((__int64*)v99), v72, (__int64)&v98, v96_.v96);
        if ((v99[0] & 1) != 0) {
          v74 = *(_BYTE**)&v99[16];
        }
        else {
          v74 = &v99[1];
        }
        ui_LayoutAccessor_SetTextBoxString(a1, (__int64)"T_Num", (__int64)v74);
        if ((v99[0] & 1) != 0 && *(_QWORD*)&v99[16] != 0) {
          v75 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v75,
                                        *(__int64*)&v99[16]);
        }
        v76 = 36;
        if ((a6 & 1) != 0) {
          v76 = 60;
        }
        *(_DWORD*)v99 = *(_DWORD*)((char*)GameData_212da30 + v76);
        ui_LayoutAccessor_SetTextBoxColor(a1, (__int64)"T_Num", v99);
        goto LABEL_100;
      }
      v57 = 40;
    }
    (*(void (**)(__int64))(*v78_.v79 + v57))((__int64)v78_.v79);
    goto LABEL_124;
  }
  LayoutAccessor_1562cf0((__int64)a1, "NumOff");
  LayoutAccessor_1560070((void*)(&v84_.v84), a1, "L_Icon");
  v82_.v82[0] = GameData_204dc08;
  v82_.v82[1] = a2;
  v82_.v83 = v82_.v82;
  Util_157b410(&v84_.v84, (__int64)v82_.v82);
  if (v82_.v83 == v82_.v82) {
    v47 = 32;
  }
  else {
    if (v82_.v83 == nullptr) {
      goto LABEL_110;
    }
    v47 = 40;
  }
  (*(void (**)(__int64))(*v82_.v83 + v47))((__int64)v82_.v83);
LABEL_110:
  if (v84_.v85 != 0) {
    std___1___shared_weak_count___release_weak(v84_.v85);
  }
  if ((*(_DWORD*)(a2 + 88) & 0xFFF) != 0) {
    v68 =
        HistoryLogInfo_6fb810(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                         8LL * (*(_DWORD*)(a2 + 88) & 0xFFF)));
    if (v68 == nullptr) {
      goto LABEL_118;
    }
  }
  else {
    v68 = &GameData_1a9f09e;
  }
  v69 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
  if (v69 != 0) {
    GameRoutine_156c5d0(v69, (__int64)v68, 0);
  }
LABEL_118:
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"T_Num", 0);
  v70 = 36;
  if ((a6 & 1) != 0) {
    v70 = 60;
  }
  v55 = *(_DWORD*)((char*)GameData_212da30 + v70);
  v56 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
  if (v56 != 0) {
  LABEL_98:
    v62 = Pane_58f8a0(v56);
    if (v62 != 0) {
      *(_DWORD*)(v62 + 12) = v55;
    }
  }
LABEL_100:
  v63 = 36;
  if ((a4 & 1) != 0) {
    v63 = 44;
  }
  v64 = *(_DWORD*)((char*)GameData_212da30 + v63);
  v65 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
  if (v65 != 0) {
    v66 = Pane_58f8a0(v65);
    if (v66 != 0) {
      *(_DWORD*)(v66 + 12) = v64;
    }
  }
  v67 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_Num");
  if (v67 != 0) {
    Alignment_56b600(v67);
  }
}

void game_gameui_157cb40(__int64* a1, int a2, __int64 a3, __int64 a4,
                         unsigned int a5, char a6)
{
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int* v15;
  int v16;
  __int64 v17;
  char* v18;
  const char* v19;
  __int64 v20;
  int v21;
  char v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v28[2];
    char* v29;
  } v28_;
  char v30;
  __int64 v31;
  char v32;
  __int64 v33;

  v11 = ui_LayoutAccessor_FindPane(a1, a3);
  if (v11 != 0) {
    v12 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
    if (v12 != 0) {
      v13 = v12;
      if ((unsigned int)a2 > 7) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                  memory_order_acquire) &
             1) != 0) {
          v15 = &GameData_22594e8;
        }
        else {
          v15 = &GameData_22594e8;
          if (__cxa_guard_acquire((__int64)&GameData_22594f0) != 0) {
            GameData_22594e8 = -1;
            __cxa_guard_release((__int64)&GameData_22594f0);
          }
        }
      }
      else {
        v14 = 72;
        if ((a6 & 1) != 0) {
          v14 = 36;
        }
        v15 = (int*)((char*)GameData_212da30 + v14);
      }
      v16 = *v15;
      v17 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v13 + 88LL))(v13, 0);
      if (v17 != 0) {
        *(_DWORD*)(v17 + 12) = v16;
      }
      if ((unsigned int)a2 > 7) {
        v18 = &GameData_1a9f09e;
      }
      else {
        v18 = GameData_204f370[a2];
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v13, 0, 7u, v18);
    }
  }
  if (a2 <= 3) {
    if (a2 > 1) {
      if (a2 == 2) {
        v19 = "MID_Sys_Rewind";
      }
      else {
        v19 = "MID_Sys_Fragment";
      }
      goto LABEL_41;
    }
    if (a2 == 0) {
      LayoutAccessor_1562060(a1, (__int64)"T_Txt", "MID_Sys_Gold");
      v32 = 0;
      v21 = a5;
      v33 = GameData_21759e0;
      v31 = 0x200000000LL;
      v22 = 3;
    LABEL_42:
      v30 = v22;
      task_17d8560((void*)(v28_.v28), v21, (__int64)&v33, &v30);
      if ((v28_.v28[0] & 1) != 0) {
        v25 = v28_.v29;
      }
      else {
        v25 = (char*)v28_.v28 + 1;
      }
      if (a4 != 0 && v25 != nullptr) {
        v26 = ui_LayoutAccessor_FindTextBox(a1, a4);
        if (v26 != 0) {
          GameRoutine_156c5d0(v26, (__int64)v25, 0);
        }
      }
      if ((v28_.v28[0] & 1) != 0 && v28_.v29 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v28_.v29);
      }
      return;
    }
    if (a2 == 1) {
      v19 = "MID_Sys_HonorExp";
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v19 = "MID_Sys_HonorExp_Part3";
      }
      goto LABEL_41;
    }
    goto LABEL_39;
  }
  if (a2 > 5) {
    if (a2 != 6) {
      if (a2 == 7) {
        v20 = GameRoutine_156d320();
        if (v20 != 0) {
          v19 = *(const char**)(v20 + 32);
        }
        else {
          v19 = &GameData_1a9f09e;
        }
        goto LABEL_41;
      }
    LABEL_39:
      v19 = nullptr;
      goto LABEL_41;
    }
    v19 = "MID_Sys_Motivation";
  LABEL_41:
    LayoutAccessor_1562060(a1, (__int64)"T_Txt", v19);
    v32 = 0;
    v21 = a5;
    v33 = GameData_21759e0;
    v31 = 0x200000000LL;
    v22 = 2;
    goto LABEL_42;
  }
  if (a2 != 4) {
    v19 = "MID_Sys_Turn";
    goto LABEL_41;
  }
  LayoutAccessor_1562060(a1, (__int64)"T_Txt", "MID_Sys_Award");
  if (a4 != 0) {
    v23 = ui_LayoutAccessor_FindPane(a1, a4);
    if (v23 != 0) {
      v24 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d690, 0);
      if (v24 != 0) {
        GameRoutine_156c910(v24, "%d/%d", 2, a5, 100);
      }
    }
  }
}

void game_gameui_157e3a0(__int64* a1, unsigned int* a2, unsigned __int8 a3,
                         _QWORD* a4)
{
  __int64 v8;
  __int64* v9;
  __int64* v10;
  unsigned int v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BOOL4 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  char* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  char* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _BOOL4 v43;
  unsigned int v44;
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
  __int64* v57;
  __int64 v58;
  int v59;
  __int64 v60;
  unsigned __int64 v61;
  char v62;
  __int64 v63;
  int v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _BOOL4 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  int v75;
  __int64 v76;
  int v77;
  __int64 v78;
  unsigned __int64 v79;
  char v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  struct {
    __int64* v88;
    __int64* v89;
    unsigned __int64 v90;
    unsigned __int64 v91;
    int v92;
    int v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
    __int64 v105;
    __int64 v106;
  } v88_;

  if ((*(_WORD*)a2 & 0xFFF) != 0) {
    LayoutAccessor_1560070((void*)(&v88_.v88), a1, "L_Icon");
    if (v88_.v89 == nullptr) {
      goto LABEL_17;
    }
    v8 = std___1___shared_weak_count_lock((__int64)v88_.v89);
    v9 = v88_.v88;
    if (v88_.v89 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v88_.v89);
    }
    if (v8 != 0 && v9 != nullptr) {
      GameRoutine_157ecd0(v9,
                          *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                     8LL * (*a2 & 0xFFF)),
                          0);
      goto LABEL_15;
    }
  LABEL_14:
    if (v8 == 0) {
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  LayoutAccessor_1560070((void*)(&v88_.v88), a1, "L_Icon");
  if (v88_.v89 != nullptr) {
    v8 = std___1___shared_weak_count_lock((__int64)v88_.v89);
    v10 = v88_.v88;
    if (v88_.v89 != nullptr) {
      std___1___shared_weak_count___release_weak((__int64)v88_.v89);
    }
    if (v8 == 0 || v10 == nullptr) {
      goto LABEL_14;
    }
    Util_157ee20(v10, a3);
  LABEL_15:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
LABEL_17:
  ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"T_Txt",
                                   (*a2 & 0xFFF) != 0);
  v11 = *a2;
  if ((*a2 & 0xFFF) != 0) {
    v12 = GameHr_6fb960(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                   8 * (*a2 & 0xFFFLL)));
    if (v12 != nullptr) {
      v13 = (__int64)v12;
      v14 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
      if (v14 != 0) {
        GameRoutine_156c5d0(v14, v13, 0);
      }
    }
    v11 = *a2;
  }
  if ((v11 & 0xFFF) == 0) {
    if (a1[2] == 0) {
      goto LABEL_96;
    }
    v19 = a1[1];
    if (v19 == 0) {
    LABEL_97:
      LODWORD(v88_.v91) = 0;
      v88_.v89 = nullptr;
      v88_.v90 = 0;
      v88_.v88 = nullptr;
      Util_1579d20(v19, (__int64)&v88_.v88);
      LayoutAccessor_1562cf0((__int64)a1, "NumNone");
      return;
    }
    v20 = std___1___shared_weak_count_lock(v19);
    if (v20 == 0) {
      goto LABEL_89;
    }
    v21 = *a1;
    if (*a1 != 0) {
      LODWORD(a4) = *(unsigned __int8*)(v21 + 24);
      v22 = v21 + 152;
      if ((_DWORD)a4 == 0) {
        v22 = 0;
      }
      v23 = v22 != a1[2];
    }
    else {
      v23 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v23) {
      LABEL_89:
        v50 = a1[1];
        if (v50 != 0 && *(_QWORD*)(v50 + 8) != -1) {
        LABEL_94:
          v52 = a1[2];
          if (v52 != 0) {
            v19 = *(_QWORD*)(v52 + 24);
            goto LABEL_97;
          }
        }
      LABEL_96:
        v19 = 0;
        goto LABEL_97;
      }
    }
    else {
      v51 = v20;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v51);
      if (v23) {
        goto LABEL_89;
      }
    }
    if (((unsigned __int8)a4 & 1) == 0) {
      goto LABEL_96;
    }
    goto LABEL_94;
  }
  if (a3 > 4u) {
    if (a3 == 5) {
      v27 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (v11 & 0xFFF));
      LODWORD(a4) = *(unsigned __int8*)(v27 + 273);
      if ((unsigned int)*(unsigned __int8*)(v27 + 104) - 5 >= 2) {
        v28 = 0;
      }
      else {
        v28 = (v11 >> 19) & 0x1F;
      }
      LayoutAccessor_1562cf0((__int64)a1, "NumEndurance");
      v29 = game_util_Format(
          "%d", ((unsigned int)a4 - ((v11 >> 12) & 0x7F) + v28) &
                    ~((int)((_DWORD)a4 - ((v11 >> 12) & 0x7F) + v28) >> 31));
      v30 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num");
      if (v30 != 0) {
        GameRoutine_156c5d0(v30, (__int64)v29, 0);
      }
      v31 = game_util_Format("%d", v28 + (int)a4);
      v32 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_MaxNum");
      if (v32 == 0) {
      LABEL_62:
        if (a1[2] == 0) {
          goto LABEL_84;
        }
      LABEL_63:
        v39 = a1[1];
        if (v39 == 0) {
        LABEL_85:
          LODWORD(v88_.v91) = 0;
          v88_.v89 = nullptr;
          v88_.v90 = 0;
          v88_.v88 = nullptr;
          Util_1579d20(v39, (__int64)&v88_.v88);
          return;
        }
        v40 = std___1___shared_weak_count_lock(v39);
        if (v40 == 0) {
          goto LABEL_77;
        }
        v41 = *a1;
        if (*a1 != 0) {
          LODWORD(a4) = *(unsigned __int8*)(v41 + 24);
          v42 = v41 + 152;
          if ((_DWORD)a4 == 0) {
            v42 = 0;
          }
          v43 = v42 != a1[2];
        }
        else {
          v43 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v43) {
          LABEL_77:
            v47 = a1[1];
            if (v47 != 0 && *(_QWORD*)(v47 + 8) != -1) {
            LABEL_82:
              v49 = a1[2];
              if (v49 != 0) {
                v39 = *(_QWORD*)(v49 + 24);
                goto LABEL_85;
              }
            }
          LABEL_84:
            v39 = 0;
            goto LABEL_85;
          }
        }
        else {
          v48 = v40;
          (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
          std___1___shared_weak_count___release_weak(v48);
          if (v43) {
            goto LABEL_77;
          }
        }
        if (((unsigned __int8)a4 & 1) == 0) {
          goto LABEL_84;
        }
        goto LABEL_82;
      }
      v33 = v31;
    LABEL_61:
      GameRoutine_156c5d0(v32, (__int64)v33, 0);
      goto LABEL_62;
    }
    if (a3 == 6 || a3 == 9) {
      v15 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                       8LL * (v11 & 0xFFF));
      v16 = *(unsigned __int8*)(v15 + 273);
      if ((unsigned int)*(unsigned __int8*)(v15 + 104) - 5 >= 2) {
        LODWORD(a4) = 0;
      }
      else {
        LODWORD(a4) = (v11 >> 19) & 0x1F;
      }
      if (((unsigned int)a4 | v16) != 0) {
        LayoutAccessor_1562cf0((__int64)a1, "NumCost");
        v17 = ui_LayoutAccessor_FindPane(a1, (__int64)"T_Cost");
        if (v17 != 0) {
          v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
          if (v18 != 0) {
            GameRoutine_156c910(
                v18, "%d", 1,
                (v16 - ((v11 >> 12) & 0x7F) + (unsigned int)a4) &
                    ~((int)(v16 - ((v11 >> 12) & 0x7F) + (_DWORD)a4) >> 31));
          }
        }
        goto LABEL_62;
      }
      LayoutAccessor_1562cf0((__int64)a1, "NumCost");
      v35 = ui_LayoutAccessor_FindPane(a1, (__int64)"T_Cost");
      if (v35 == 0) {
        goto LABEL_62;
      }
      v36 = __dynamic_cast(v35, GameData_212d670[0], GameData_212d690, 0);
      if (v36 == 0) {
        goto LABEL_62;
      }
      v37 = v36;
      v88_.v94 = -1;
      v88_.v95 = -1;
      v88_.v96 = -1;
      v88_.v97 = -1;
      v38 = *msg_MessageManager_instance__ptr[0];
      v88_.v98 = -1;
      v88_.v99 = -1;
      v88_.v100 = -1;
      v88_.v101 = -1;
      v88_.v102 = -1;
      v88_.v103 = -1;
      v88_.v104 = -1;
      v88_.v88 = GameData_212e348 + 2;
      v88_.v89 = (__int64*)0xFFFF0001FFFF0000LL;
      v88_.v90 = 0xFFFF0004FFFF0002LL;
      v88_.v91 = 0xFFFF0006FFFF0005LL;
      v88_.v105 = -1;
      v88_.v106 = 8;
      v88_.v92 = -65529;
      v88_.v93 = -65528;
      v33 = GameRoutine_a4dbe0(v38, "MID_Sys_unlimited", 0);
      v32 = v37;
      goto LABEL_61;
    }
  LABEL_56:
    LayoutAccessor_1562cf0((__int64)a1, "NumNone");
    if (a1[2] == 0) {
      goto LABEL_84;
    }
    goto LABEL_63;
  }
  if (a3 != 2) {
    if (a3 != 3) {
      goto LABEL_56;
    }
    v24 = GameRoutine_842cb0(a2, a4);
    LayoutAccessor_1562cf0((__int64)a1, "NumCost");
    v25 = ui_LayoutAccessor_FindPane(a1, (__int64)"T_Cost");
    if (v25 != 0) {
      v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d690, 0);
      if (v26 != 0) {
        if ((v24 & 0x80000000) != 0) {
          GameHr_156c850(v26, "MID_Sys_unlimited");
        }
        else {
          GameRoutine_156c910(v26, "%d", 1, v24);
        }
      }
    }
    LODWORD(v88_.v91) = 0;
    v88_.v89 = nullptr;
    v88_.v90 = 0;
    v71 = *a2 & 0xFFF;
    v88_.v88 = nullptr;
    v72 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v71);
    v55 = *(unsigned __int16*)(v72 + 496);
    if (*(_WORD*)(v72 + 496) != 0) {
      v73 = 8;
      do {
        v78 = *(_QWORD*)(*(_QWORD*)(v72 + 504) + v73);
        if (((1LL << *(_BYTE*)(v78 + 250)) & 6) != 0) {
          v79 = *(unsigned __int16*)(v78 + 16);
          v80 = v79;
          v81 = (v79 >> 5) & 0x7F;
          v74 = v88_.v88;
          v82 = ((char*)v88_.v89 - (char*)v88_.v88) >> 2;
          if (v81 + 1 > v82) {
            v87 = 0;
            GameRoutine_66dd60((__int64*)&v88_.v88, v81 + 1 - v82, &v87);
            v74 = v88_.v88;
            v75 = 1 << v80;
            v76 = (unsigned int)v81;
            v77 = *((_DWORD*)v88_.v88 + (unsigned int)v81);
          }
          else {
            v77 = *((_DWORD*)v88_.v88 + (unsigned int)v81);
            v75 = 1 << v80;
            if ((v77 & (1 << v80)) != 0) {
              goto LABEL_120;
            }
            v76 = (unsigned int)v81;
          }
          *((_DWORD*)v74 + v76) = v77 | v75;
          LODWORD(v88_.v91) = v88_.v91 + 1;
        }
      LABEL_120:
        --v55;
        v73 += 16;
      } while (v55 != 0);
    }
    if (a1[2] == 0) {
      goto LABEL_139;
    }
    v66 = a1[1];
    if (v66 == 0) {
      goto LABEL_140;
    }
    v67 = std___1___shared_weak_count_lock(v66);
    if (v67 == 0) {
      goto LABEL_133;
    }
    v68 = *a1;
    if (*a1 == 0) {
      goto LABEL_129;
    }
    goto LABEL_112;
  }
  if (*((_WORD*)a4 + 976) != 0) {
    v34 = (__int64*)a4[244];
  }
  else {
    v34 = nullptr;
  }
  v88_.v88 = v34;
  v44 = GameRoutine_842e20(a2, a4, (unsigned __int16*)&v88_.v88);
  LayoutAccessor_1562cf0((__int64)a1, "NumCost");
  v45 = ui_LayoutAccessor_FindPane(a1, (__int64)"T_Cost");
  if (v45 != 0) {
    v46 = __dynamic_cast(v45, GameData_212d670[0], GameData_212d690, 0);
    if (v46 != 0) {
      if ((v44 & 0x80000000) != 0) {
        GameHr_156c850(v46, "MID_Sys_unlimited");
      }
      else {
        GameRoutine_156c910(v46, "%d", 1, v44);
      }
    }
  }
  LODWORD(v88_.v91) = 0;
  v88_.v89 = nullptr;
  v88_.v90 = 0;
  v53 = *a2 & 0xFFF;
  v88_.v88 = nullptr;
  v54 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v53);
  v55 = *(unsigned __int16*)(v54 + 496);
  if (*(_WORD*)(v54 + 496) != 0) {
    v56 = 8;
    do {
      v60 = *(_QWORD*)(*(_QWORD*)(v54 + 504) + v56);
      if (((1LL << *(_BYTE*)(v60 + 250)) & 6) != 0) {
        v61 = *(unsigned __int16*)(v60 + 16);
        v62 = v61;
        v63 = (v61 >> 5) & 0x7F;
        v57 = v88_.v88;
        v64 = 1 << v62;
        v65 = ((char*)v88_.v89 - (char*)v88_.v88) >> 2;
        if (v63 + 1 > v65) {
          v87 = 0;
          GameRoutine_66dd60((__int64*)&v88_.v88, v63 + 1 - v65, &v87);
          v57 = v88_.v88;
          v58 = (unsigned int)v63;
          v59 = *((_DWORD*)v88_.v88 + (unsigned int)v63);
        }
        else {
          v59 = *((_DWORD*)v88_.v88 + (unsigned int)v63);
          if ((v59 & v64) != 0) {
            goto LABEL_103;
          }
          v58 = (unsigned int)v63;
        }
        *((_DWORD*)v57 + v58) = v59 | v64;
        LODWORD(v88_.v91) = v88_.v91 + 1;
      }
    LABEL_103:
      --v55;
      v56 += 16;
    } while (v55 != 0);
  }
  if (a1[2] == 0) {
    goto LABEL_139;
  }
  v66 = a1[1];
  if (v66 == 0) {
    goto LABEL_140;
  }
  v67 = std___1___shared_weak_count_lock(v66);
  if (v67 == 0) {
    goto LABEL_133;
  }
  v68 = *a1;
  if (*a1 == 0) {
  LABEL_129:
    v70 = true;
    goto LABEL_130;
  }
LABEL_112:
  LODWORD(v55) = *(unsigned __int8*)(v68 + 24);
  v69 = v68 + 152;
  if ((_DWORD)v55 == 0) {
    v69 = 0;
  }
  v70 = v69 != a1[2];
LABEL_130:
  if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v83 = v67;
    (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
    std___1___shared_weak_count___release_weak(v83);
  }
  if (!v70) {
    if ((v55 & 1) == 0) {
      goto LABEL_139;
    }
    goto LABEL_137;
  }
LABEL_133:
  v84 = a1[1];
  if (v84 != 0 && *(_QWORD*)(v84 + 8) != -1) {
  LABEL_137:
    v85 = a1[2];
    if (v85 != 0) {
      v66 = *(_QWORD*)(v85 + 24);
      goto LABEL_140;
    }
  }
LABEL_139:
  v66 = 0;
LABEL_140:
  Util_1579d20(v66, (__int64)&v88_.v88);
  if (v88_.v88 != nullptr) {
    v88_.v89 = v88_.v88;
    v86 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v86,
                                  (__int64)v88_.v88);
  }
}

__int64 game_gameui_1582e00(__int64 a1, int a2)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *(__int64**)a1;
      v6 = result;
      if (v5 != nullptr) {
        v7 = ui_LayoutAccessor_FindPane(v5, (__int64)"T_Num");
        if (v7 != 0) {
          v8 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d690, 0);
          if (v8 != 0) {
            GameRoutine_156c910(v8, "%d", 1, (unsigned int)a2);
          }
        }
        if (a2 >= 2) {
          v9 = "Bg_Default";
        }
        else {
          v9 = "Bg_Danger";
        }
        result = GameHr_1562680((__int64)v5, v9, 0x1.0000000000000p+0f);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  return result;
}

__int64 game_gameui_1584020(__int64 a1, __int64 a2, char a3)
{
  __int64 result;
  __int64* v7;
  __int64 v8;
  const char* v9;
  int v10;
  _DWORD* v11;
  int v12;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v7 = *(__int64**)a1;
      v8 = result;
      if (v7 != nullptr) {
        if ((a3 & 1) != 0) {
          v9 = "Default";
        }
        else {
          v9 = "DisableDefault";
        }
        LayoutAccessor_1562cf0((__int64)v7, v9);
        v10 = *(_DWORD*)(a2 + 4);
        v11 = *(_DWORD**)(*(_QWORD*)(a2 + 16) + 24LL);
        v12 = v11[105];
        if (v12 > 2 && (signed __int32)v11[103] <= v10) {
          v16 = 3;
        }
        else if (v12 > 1 && (signed __int32)v11[102] <= v10) {
          v16 = 2;
        }
        else if (v12 >= 1 && (signed __int32)v11[101] <= v10) {
          v16 = 1;
        }
        else {
          v16 = v11[104];
        }
        v17 = ui_LayoutAccessor_FindPane(v7, (__int64)"T_Num");
        if (v17 != 0) {
          v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
          if (v18 != 0) {
            GameRoutine_156c910(v18, "%d", 1, v16);
          }
        }
        ui_LayoutAccessor_SetPaneVisible((__int64)v7, (__int64)"IconBuff", 0);
        ui_LayoutAccessor_SetPaneVisible((__int64)v7, (__int64)"IconDebuff", 0);
        ui_LayoutAccessor_SetPaneVisible(
            (__int64)v7, (__int64)"IconMax",
            (signed __int32)*(_DWORD*)(a2 + 4) >=
                (signed __int32)*(
                    _DWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 24LL) + 428LL));
        v19 = *(_DWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212da30);
        v20 = ui_LayoutAccessor_FindTextBox(v7, (__int64)"T_Num");
        if (v20 != 0) {
          v21 = Pane_58f8a0(v20);
          if (v21 != 0) {
            *(_DWORD*)(v21 + 12) = v19;
          }
        }
        result = ui_LayoutAccessor_SetPaneVisible((__int64)v7,
                                                  (__int64)"IconUpDown", 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        return std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  return result;
}

void game_gameui_1585290(__int64* a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  const char* v13;
  struct {
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
  } v14_;
  float v19[4];

  v6 = ui_LayoutAccessor_FindAlignment(a1, a2);
  if (v6 != 0) {
    Alignment_56b600(v6);
    v7 = a1[1];
    if (v7 != 0) {
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
    }
  }
  v14_.v18 = 0;
  memset(v19, 0, 13);
  v14_.v16 = 0;
  v14_.v17 = 0;
  v14_.v14 = 0;
  v14_.v15 = 0;
  v10 = ui_LayoutAccessor_FindPane(a1, a3);
  if (v10 != 0) {
    v11 = v10;
    v14_.v14 = v10;
    v14_.v15 = ui_LayoutAccessor_FindPane(a1, a2);
    BYTE1(v19[2]) = 1;
    v12 = Pane_58fac0(v11, "Margin_Width");
    if (v12 != nullptr) {
      *(float*)&v14_.v18 = (float)*(int*)&v12[*((unsigned int*)v12 + 1)];
    }
    v13 = Pane_58fac0(v11, "Min_Width");
    if (v13 != nullptr) {
      v19[0] = (float)*(int*)&v13[*((unsigned int*)v13 + 1)];
    }
  }
  game_156c240(&v14_.v14);
}

__int64 game_gameui_15858a0(__int64* a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  __int64 result;
  __int64 v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  int v22;
  __int64 v23;
  int* v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  int v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int8 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  struct {
    __int64* v62;
    __int64 v63;
  } v62_;
  struct {
    _QWORD v64[4];
    _QWORD* v65;
  } v64_;
  struct {
    __int64 v66;
    __int64 v67;
  } v66_;
  struct {
    __int64* v68;
    __int64 v69;
  } v68_;
  __int64 v70[3];
  _QWORD v71[2];
  _QWORD* v72;
  struct {
    _QWORD* v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    _BYTE* v77;
    __int64 v78;
    int v79;
  } v73_;
  struct {
    __int64 v80[2];
    char* v81;
    char gap280_[8];
    __int64* v82;
  } v80_;
  struct {
    _DWORD v83[3];
    char v84;
  } v83_;
  __int64 v85[3];

  v2 = a2;
  v4 = 0;
  v5 = 0;
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a2[1] - *a2) >> 4);
  v7 = (int)v6;
  if ((int)v6 > 4) {
    v8 = 3;
  }
  else {
    v8 = 4;
  }
  v60 = v8;
  do {
    v9 = game_util_Format("L_Item%02d", v5);
    LayoutAccessor_1560070((void*)(v70), a1, v9);
    result = v70[1];
    if (v70[1] == 0) {
      goto LABEL_5;
    }
    v11 = std___1___shared_weak_count_lock(v70[1]);
    v12 = (__int64*)v70[0];
    result = v70[1];
    if (v70[1] != 0) {
      result = std___1___shared_weak_count___release_weak(v70[1]);
    }
    if (v11 == 0 || v12 == nullptr) {
      if (v11 == 0) {
        goto LABEL_5;
      }
      goto LABEL_126;
    }
    result = LayoutAccessor_155e830((__int64)v12, v5 < v7);
    if (v5 < v7) {
      LayoutAccessor_1560070((void*)(v70), v12, "L_Item");
      if (v70[1] != 0) {
        v13 = v2;
        v14 = std___1___shared_weak_count_lock(v70[1]);
        v15 = (__int64*)v70[0];
        if (v70[1] != 0) {
          v16 = a1;
          v17 = v70[0];
          v18 = v7;
          v19 = v14;
          std___1___shared_weak_count___release_weak(v70[1]);
          v14 = v19;
          v7 = v18;
          v15 = (__int64*)v17;
          a1 = v16;
        }
        if (v14 != 0 && v15 != nullptr) {
          v20 = *v13;
          v59 = v14;
          v21 = (int*)(*v13 + v4);
          if (*((_WORD*)v21 + 2) != 0) {
            v22 = *v21;
            *(_OWORD*)((char*)v70 + 4) =
                (__typeof__(*(_OWORD*)((char*)v70 + 4))){0};
            LODWORD(v70[0]) = v22;
            *(__int64*)((char*)v70 + 4) = *(_QWORD*)(v21 + 1);
            if (*((_BYTE*)v21 + 12) != 0) {
              v23 = *(_QWORD*)(v21 + 3);
            }
            else {
              v23 = 0;
            }
            v28 = v20 + v4;
            v8 = v60;
            *(__int64*)((char*)&v70[1] + 4) = v23;
            WORD1(v71[0]) = 0;
            HIDWORD(v71[0]) = 0;
            v73_.v75 = 0;
            v73_.v76 = 0;
            v73_.v77 = nullptr;
            v73_.v73 = nullptr;
            v73_.v74 = 0;
            v72 = &v73_.v73;
            GameRoutine_930b90((__int64)v71, v20 + v4 + 24);
            v29 = *(_QWORD*)(v28 + 88);
            v73_.v79 = *(_DWORD*)(v28 + 96);
            v73_.v78 = v29;
            LayoutAccessor_1560070((void*)(&v68_.v68), v15, "L_Icon");
            if (v68_.v69 == 0) {
            LABEL_64:
              v37 = GameHr_6ed030(
                  *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * WORD2(v70[0])));
              if (v37 != nullptr) {
                v38 = (__int64)v37;
                v39 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Txt");
                if (v39 != 0) {
                  GameRoutine_156c5d0(v39, v38, 0);
                }
              }
              LayoutAccessor_1562cf0((__int64)v15, "Item");
              v40 = game_util_Format("%d", *(_DWORD*)(*a2 + v4 + 96));
              v41 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Num");
              if (v41 != 0) {
                GameRoutine_156c5d0(v41, (__int64)v40, 0);
              }
              v42 = ui_LayoutAccessor_FindAlignment(v15, (__int64)"A_Num");
              if (v42 != 0) {
                Alignment_56b600(v42);
              }
              v2 = a2;
              LODWORD(v71[1]) = 0;
              v71[0] = 0;
              if ((v73_.v75 & 1) != 0) {
                *v73_.v77 = 0;
                v73_.v76 = 0;
              }
              else {
                LOWORD(v73_.v75) = 0;
              }
              v43 = v73_.v73;
            LABEL_102:
              GameRoutine_6e3b50((__int64)&v72, v43);
              v73_.v73 = nullptr;
              v73_.v74 = 0;
              v72 = &v73_.v73;
              if ((v73_.v75 & 1) != 0) {
                v51 = v73_.v77;
                if (v73_.v77 != nullptr) {
                  v52 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v52 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v52,
                      (__int64)v73_.v77);
                  v51 = v73_.v73;
                }
              }
              else {
                v51 = nullptr;
              }
              GameRoutine_6e3b50((__int64)&v72, v51);
              v14 = v59;
              goto LABEL_109;
            }
            v30 = std___1___shared_weak_count_lock(v68_.v69);
            if (v30 == 0) {
            LABEL_62:
              if (v68_.v69 != 0) {
                std___1___shared_weak_count___release_weak(v68_.v69);
              }
              goto LABEL_64;
            }
            v31 = v30;
            if (v68_.v68 != nullptr) {
              v80_.v80[0] = (__int64)GameData_204d688;
              v80_.v82 = v80_.v80;
              GameHr_157b310(v68_.v68, (unsigned __int16*)v70 + 2,
                             (__int64)v80_.v80);
              if (v80_.v82 == v80_.v80) {
                v32 = 32;
              }
              else {
                if (v80_.v82 == nullptr) {
                  goto LABEL_60;
                }
                v32 = 40;
              }
              (*(void (**)(__int64))(*v80_.v82 + v32))((__int64)v80_.v82);
            }
          LABEL_60:
            if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
              std___1___shared_weak_count___release_weak(v31);
            }
            goto LABEL_62;
          }
          LayoutAccessor_1562cf0((__int64)v15, "Cost");
          v24 = (int*)(*v13 + v4);
          v25 = *v24;
          *(__int64*)((char*)v70 + 4) = 0;
          LODWORD(v70[0]) = v25;
          v26 = *(_QWORD*)(v24 + 1);
          *(__int64*)((char*)&v70[1] + 4) = 0;
          *(__int64*)((char*)v70 + 4) = v26;
          if (*((_BYTE*)v24 + 12) != 0) {
            v27 = *(_QWORD*)(v24 + 3);
          }
          else {
            v27 = 0;
          }
          *(__int64*)((char*)&v70[1] + 4) = v27;
          WORD1(v71[0]) = 0;
          HIDWORD(v71[0]) = 0;
          v73_.v75 = 0;
          v73_.v76 = 0;
          v73_.v77 = nullptr;
          v73_.v73 = nullptr;
          v73_.v74 = 0;
          v72 = &v73_.v73;
          GameRoutine_930b90((__int64)v71, (__int64)(v24 + 6));
          v33 = *((_QWORD*)v24 + 11);
          v73_.v79 = v24[24];
          v73_.v78 = v33;
          LayoutAccessor_1560070((void*)(&v66_.v66), v15, "L_Icon");
          v64_.v64[0] = GameData_204dd08;
          v64_.v64[1] = v70;
          v64_.v65 = v64_.v64;
          Util_157b410(&v66_.v66, (__int64)v64_.v64);
          v8 = v60;
          if (v64_.v65 == v64_.v64) {
            v34 = 32;
          }
          else {
            if (v64_.v65 == nullptr) {
            LABEL_39:
              if (v66_.v67 != 0) {
                std___1___shared_weak_count___release_weak(v66_.v67);
              }
              v35 = nullptr;
              if (SLODWORD(v70[0]) > 3) {
                if (SLODWORD(v70[0]) > 5) {
                  if (LODWORD(v70[0]) == 6) {
                    v35 = "MID_Sys_Motivation";
                  }
                  else if (LODWORD(v70[0]) == 7) {
                    v36 = GameRoutine_156d320();
                    if (v36 != 0) {
                      v35 = *(const char**)(v36 + 32);
                    }
                    else {
                      v35 = &GameData_1a9f09e;
                    }
                  }
                }
                else if (LODWORD(v70[0]) == 4) {
                  v35 = "MID_Sys_Award";
                }
                else {
                  v35 = "MID_Sys_Turn";
                }
              }
              else if (SLODWORD(v70[0]) > 1) {
                if (LODWORD(v70[0]) == 2) {
                  v35 = "MID_Sys_Rewind";
                }
                else {
                  v35 = "MID_Sys_Fragment";
                }
              }
              else if (LODWORD(v70[0]) != 0) {
                if (LODWORD(v70[0]) == 1) {
                  if (game_GameModeData_instance_ != 0) {
                    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                      v35 = "MID_Sys_HonorExp_Part3";
                    }
                    else {
                      v35 = "MID_Sys_HonorExp";
                    }
                  }
                  else {
                    v35 = "MID_Sys_HonorExp";
                  }
                }
              }
              else {
                v35 = "MID_Sys_Gold";
              }
              LayoutAccessor_1562060(v15, (__int64)"T_Txt", v35);
              if (LODWORD(v70[0]) != 0) {
                v44 = HIDWORD(v73_.v78);
                v83_.v84 = 0;
                v85[0] = GameData_21759e0;
                *(_QWORD*)&v83_.v83[1] = 0x200000000LL;
                LOBYTE(v83_.v83[0]) = 2;
              }
              else {
                v44 = v73_.v79;
                v83_.v84 = 0;
                v85[0] = GameData_21759e0;
                *(_QWORD*)&v83_.v83[1] = 0x200000000LL;
                LOBYTE(v83_.v83[0]) = 3;
              }
              task_17d8560((void*)(v80_.v80), v44, (__int64)v85, v83_.v83);
              if ((v80_.v80[0] & 1) != 0) {
                v45 = v80_.v81;
              }
              else {
                v45 = (char*)v80_.v80 + 1;
              }
              if (v45 != nullptr) {
                v46 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Num");
                if (v46 != 0) {
                  GameRoutine_156c5d0(v46, (__int64)v45, 0);
                }
              }
              if ((v80_.v80[0] & 1) != 0 && v80_.v81 != nullptr) {
                v47 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v47 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                    (__int64)v80_.v81);
              }
              v48 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
              v49 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Num");
              if (v49 != 0) {
                v50 = Pane_58f8a0(v49);
                if (v50 != 0) {
                  *(_DWORD*)(v50 + 12) = v48;
                }
              }
              LODWORD(v71[1]) = 0;
              v71[0] = 0;
              if ((v73_.v75 & 1) != 0) {
                *v73_.v77 = 0;
                v73_.v76 = 0;
              }
              else {
                LOWORD(v73_.v75) = 0;
              }
              v43 = v73_.v73;
              v2 = a2;
              goto LABEL_102;
            }
            v34 = 40;
          }
          (*(void (**)(__int64))(*v64_.v65 + v34))((__int64)v64_.v65);
          goto LABEL_39;
        }
        v2 = v13;
        v8 = v60;
        if (v14 != 0) {
        LABEL_109:
          if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v53 = v14;
            (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
            std___1___shared_weak_count___release_weak(v53);
          }
        }
      }
      LayoutAccessor_1560070((void*)(&v62_.v62), v12, "L_Total");
      if (v62_.v63 != 0) {
        v54 = *v2 + v4;
        v55 = *(_BYTE*)(v54 + 104);
        v56 = std___1___shared_weak_count_lock(v62_.v63);
        if (v56 != 0) {
          v57 = v56;
          if (v62_.v62 != nullptr) {
            Util_1584ec0(v62_.v62, v54, v55);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
            std___1___shared_weak_count___release_weak(v57);
          }
        }
        v2 = a2;
        if (v62_.v63 != 0) {
          std___1___shared_weak_count___release_weak(v62_.v63);
        }
      }
      result = ui_LayoutAccessor_FindAlignment(v12, (__int64)"A_Delivery");
      if (result != 0) {
        Alignment_56b600(result);
        result = v12[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v58 = result;
            result = *v12;
            if (*v12 != 0) {
              result = ControlCreator_13633c0(result);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
              result = std___1___shared_weak_count___release_weak(v58);
            }
          }
        }
      }
    }
  LABEL_126:
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      result = std___1___shared_weak_count___release_weak(v11);
    }
  LABEL_5:
    ++v5;
    v4 += 112;
  } while (v8 != v5);
  return result;
}

__int64 game_gameui_1586840(__int64* a1, char a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;
  char v12[32];
  _QWORD v13[4];
  int v14;
  int v15;
  char v16;

  v16 = a2;
  v15 = 0;
  v14 = 0;
  v13[0] = &v14;
  v13[1] = a1;
  v13[2] = &v16;
  v13[3] = &v15;
  game_gameui_15869e0((__int64)v13, 0);
  game_gameui_15869e0((__int64)v13, 1);
  v3 = v14;
  if (v14 <= 24) {
    do {
      sprintf((__int64)v12, "L_Unit%02d", v3);
      LayoutAccessor_1560070((void*)(&v10_.v10), a1, v12);
      if (v10_.v11 != 0) {
        v4 = std___1___shared_weak_count_lock(v10_.v11);
        if (v4 != 0) {
          v5 = v4;
          if (v10_.v10 != 0) {
            LayoutAccessor_155e830(v10_.v10, 0);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
            v6 = v10_.v11;
            if (v10_.v11 == 0) {
              goto LABEL_3;
            }
          LABEL_10:
            std___1___shared_weak_count___release_weak(v6);
            goto LABEL_3;
          }
        }
        v6 = v10_.v11;
        if (v10_.v11 != 0) {
          goto LABEL_10;
        }
      }
    LABEL_3:
      ++v3;
    } while (v3 != 25);
  }
  sprintf((__int64)v12, "A_Unit%02d", 0);
  v7 = ui_LayoutAccessor_FindAlignment(a1, (__int64)v12);
  if (v7 != 0) {
    Alignment_56b600(v7);
  }
  sprintf((__int64)v12, "A_Unit%02d", 1);
  v8 = ui_LayoutAccessor_FindAlignment(a1, (__int64)v12);
  if (v8 != 0) {
    Alignment_56b600(v8);
  }
  sprintf((__int64)v12, "A_Unit%02d", 2);
  result = ui_LayoutAccessor_FindAlignment(a1, (__int64)v12);
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 game_gameui_15869e0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  bool v17;
  char v18;
  __int64 v19;
  char v20;
  bool v21;
  const char* v22;
  const char* v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BYTE* v29;
  char v30;
  struct {
    __int64* v31;
    __int64 v32;
  } v31_;
  char v33[32];
  int v34;

  v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v2 != 0) {
    v4 = result;
    while (1) {
      v5 = v2;
      v2 = *(_QWORD*)(v2 + 432);
      v6 = *(_DWORD*)(v5 + 416);
      if ((v6 & 8) == 0 && ((a2 ^ ((v6 & 0x400431) != 0)) & 1) == 0) {
        break;
      }
    LABEL_3:
      if (v2 == 0) {
        return result;
      }
    }
    sprintf((__int64)v33, "L_Unit%02d", **(_DWORD**)v4);
    LayoutAccessor_1560070((void*)(&v31_.v31), *(__int64**)(v4 + 8), v33);
    if ((**(_BYTE**)(v4 + 16) & 1) != 0) {
      LOBYTE(v7) = 0;
      result = v31_.v32;
      if (v31_.v32 == 0) {
        goto LABEL_30;
      }
    }
    else {
      v7 = (a2 | game_Unit_IsLocked(v5)) ^ 1;
      result = v31_.v32;
      if (v31_.v32 == 0) {
        goto LABEL_30;
      }
    }
    v8 = std___1___shared_weak_count_lock(result);
    if (v8 == 0) {
      goto LABEL_28;
    }
    v9 = v31_.v31;
    v10 = v8;
    if (v31_.v31 == nullptr) {
    LABEL_27:
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
        result = v31_.v32;
        if (v31_.v32 == 0) {
        LABEL_30:
          ++**(_DWORD**)v4;
          if ((a2 & 1) == 0 && (**(_BYTE**)(v4 + 16) & 1) == 0) {
            ++**(_DWORD**)(v4 + 24);
          }
          goto LABEL_3;
        }
      LABEL_29:
        result = std___1___shared_weak_count___release_weak(result);
        goto LABEL_30;
      }
    LABEL_28:
      result = v31_.v32;
      if (v31_.v32 == 0) {
        goto LABEL_30;
      }
      goto LABEL_29;
    }
    LayoutAccessor_155e830((__int64)v31_.v31, 1);
    v11 = ui_LayoutAccessor_FindPane(v9, (__int64)"Face");
    v30 = v7;
    if (v11 != 0) {
      v11 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
    }
    v12 = GameHr_1840740(v11, 0, v5, 6u, 1);
    if ((v12 & 1) == 0) {
      v25 = ui_LayoutAccessor_FindPane(v9, (__int64)"IconSymbol");
      if (v25 != 0) {
        v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d678[0], 0);
      }
      else {
        v26 = 0;
      }
      v27 = Unit_6c8300((_QWORD*)v5, 0);
      v13 = 0;
      if (v26 == 0 || (v28 = v27, v27 == 0)) {
      LABEL_16:
        ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"Face", v12 & 1);
        ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"IconSymbol",
                                         v13 & 1);
        v14 = *(_QWORD*)(v5 + 1744);
        v15 = (unsigned int)*game_g_shared_system_skills_ptr;
        v16 = *(_QWORD*)(v5 + 1752) - v14;
        v34 = *game_g_shared_system_skills_ptr & 0xFFF;
        if (((v15 >> 5) & 0x7F) + 1 <= v16 >> 2 &&
            ((*(_DWORD*)(v14 + 4 * ((v15 >> 5) & 0x7F)) >> v15) & 1) != 0) {
          v17 = game_HasActiveSkill_843420(&v34, v5 + 1744);
          v18 = v30;
          if (v17) {
            v19 = *(_QWORD*)(v5 + 440);
            v20 = v19 != 0 ? *(_BYTE*)(v19 + 16) : 9;
            if (((1 << v20) & 0xF1) != 0) {
              v21 = (v30 & 1) == 0;
              v22 = "TypeGuest_Disable";
              v23 = "TypeGuest_Default";
              goto LABEL_23;
            }
          }
        }
        else {
          v18 = v30;
        }
        v21 = (v18 & 1) == 0;
        v22 = "TypePlayer_Disable";
        v23 = "TypePlayer_Default";
      LABEL_23:
        if (v21) {
          v24 = v22;
        }
        else {
          v24 = v23;
        }
        GameHr_1562680((__int64)v9, v24, 0x1.0000000000000p+0f);
        goto LABEL_27;
      }
      v29 = *(_BYTE**)(v27 + 48);
      if (v29 != nullptr && *v29 != 0 &&
          (Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v29) & 1) != 0) {
        v13 = Manager_136a920(ui_Manager_instance_ + 1264, v26, 0, 5u,
                              *(_BYTE**)(v28 + 48));
        goto LABEL_16;
      }
    }
    v13 = 0;
    goto LABEL_16;
  }
  return result;
}

void game_gameui_1590260(__int64* a1, char a2, char a3, char a4, int a5)
{
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  int v15;
  int v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  struct {
    __int64* v20;
    __int64* v21;
  } v20_;
  struct {
    __int64 v22;
    void* v23;
  } v22_;

  game_gameui_Util_GetCorpsStatusUnitList((void*)((__int64*)&v20_.v20), a2, a3,
                                          a5);
  if (v20_.v21 == v20_.v20) {
    LayoutAccessor_155e830((__int64)a1, 0);
    v18 = v20_.v20;
    if (v20_.v20 == nullptr) {
      return;
    }
    goto LABEL_18;
  }
  LayoutAccessor_155e830((__int64)a1, 1);
  v22_.v23 = &GameData_1af5ec9;
  v22_.v22 = game_HashString((__int64)&GameData_1af5ec9);
  if (game_GameModeData_instance_ != 0 &&
      (v9 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v22_.v22)) != 0) {
    v10 = *(_DWORD*)(v9 + 32);
  }
  else {
    v10 = 0;
  }
  v22_.v23 = &GameData_1ad7123;
  v22_.v22 = game_HashString((__int64)&GameData_1ad7123);
  if (game_GameModeData_instance_ != 0 &&
      (v11 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v22_.v22)) != 0) {
    v12 = *(_DWORD*)(v11 + 32);
  }
  else {
    v12 = 0;
  }
  v13 = v20_.v20;
  v14 = v20_.v21;
  if (v20_.v20 == v20_.v21) {
    v16 = 0;
    v15 = 0;
  }
  else {
    v15 = 0;
    v16 = 0;
    do {
      v17 = *v13++;
      LOBYTE(v22_.v22) = 0;
      v15 += *(__int16*)(v17 + 492);
      v16 += game_Unit_GetParam(v17);
    } while (v13 != v14);
  }
  game_gameui_1590440(a1, &v20_.v20);
  game_gameui_1590740(a1, v15, v16);
  game_gameui_1590950(a1, v10, v12);
  GameRoutine_1590b40((__int64)a1, a3 & 1, &v20_.v20, a4 & 1);
  game_gameui_1591240(a1, a2 & 1, a3 & 1, &v20_.v20);
  v18 = v20_.v20;
  if (v20_.v20 != nullptr) {
  LABEL_18:
    v20_.v21 = v18;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19,
                                  (__int64)v18);
  }
}

void game_gameui_1591240(__int64* a1, char a2, char a3, __int64** a4)
{
  char* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  char v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  unsigned __int8* v46;
  unsigned __int8* v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  const char* v58;
  __int64 v59;
  char v60;
  char v61;
  struct {
    __int64 v62;
    unsigned __int8* v63;
    __int64 v64;
  } v62_;

  if (a4[1] != *a4) {
    v10 = game_util_Format("Icon%02d", 0);
    v11 = ui_LayoutAccessor_FindPane(a1, (__int64)v10);
    v12 = GameData_212d670[0];
    v13 = GameData_212d678[0];
    v14 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
    *(_BYTE*)(v14 + 88) &= ~1u;
    v15 = game_util_Format("Icon%02d", 1);
    v16 = ui_LayoutAccessor_FindPane(a1, (__int64)v15);
    v17 = __dynamic_cast(v16, v12, v13, 0);
    *(_BYTE*)(v17 + 88) &= ~1u;
    v18 = game_util_Format("Icon%02d", 2);
    v19 = ui_LayoutAccessor_FindPane(a1, (__int64)v18);
    v20 = __dynamic_cast(v19, v12, v13, 0);
    *(_BYTE*)(v20 + 88) &= ~1u;
    v21 = game_util_Format("Icon%02d", 3);
    v22 = ui_LayoutAccessor_FindPane(a1, (__int64)v21);
    v23 = __dynamic_cast(v22, v12, v13, 0);
    *(_BYTE*)(v23 + 88) &= ~1u;
    v24 = game_util_Format("Icon%02d", 4);
    v25 = ui_LayoutAccessor_FindPane(a1, (__int64)v24);
    v26 = __dynamic_cast(v25, v12, v13, 0);
    *(_BYTE*)(v26 + 88) &= ~1u;
    v27 = game_util_Format("Icon%02d", 5);
    v28 = ui_LayoutAccessor_FindPane(a1, (__int64)v27);
    v29 = __dynamic_cast(v28, v12, v13, 0);
    *(_BYTE*)(v29 + 88) &= ~1u;
    v30 = game_util_Format("Icon%02d", 6);
    v31 = ui_LayoutAccessor_FindPane(a1, (__int64)v30);
    v32 = __dynamic_cast(v31, v12, v13, 0);
    *(_BYTE*)(v32 + 88) &= ~1u;
    v33 = game_util_Format("Icon%02d", 7);
    v34 = ui_LayoutAccessor_FindPane(a1, (__int64)v33);
    v35 = __dynamic_cast(v34, v12, v13, 0);
    *(_BYTE*)(v35 + 88) &= ~1u;
    v36 = game_util_Format("Icon%02d", 8);
    v37 = ui_LayoutAccessor_FindPane(a1, (__int64)v36);
    v38 = __dynamic_cast(v37, v12, v13, 0);
    *(_BYTE*)(v38 + 88) &= ~1u;
    v39 = game_util_Format("Icon%02d", 9);
    v40 = ui_LayoutAccessor_FindPane(a1, (__int64)v39);
    v41 = __dynamic_cast(v40, v12, v13, 0);
    v42 = *(_BYTE*)(v41 + 88);
    v62_.v63 = nullptr;
    v62_.v64 = 0;
    v62_.v62 = 0;
    *(_BYTE*)(v41 + 88) = v42 & 0xFE;
    if (((a2 & 1) != 0 || (a3 & 1) != 0) &&
        (v43 = *a4, v44 = a4[1], *a4 != v44)) {
      do {
        v45 = *v43++;
        GameRoutine_1591700(&v62_.v62, v45, a2 & 1);
      } while (v43 != v44);
      v46 = (unsigned __int8*)v62_.v62;
      v47 = v62_.v63;
      if ((unsigned __int8*)v62_.v62 != v62_.v63) {
        v60 = a2;
        v61 = a3;
        GameRoutine_15a5060(
            v62_.v62, v62_.v63,
            (2 * __clz((unsigned __int64)&v62_.v63[-v62_.v62])) ^ 0x7E, 1);
        v48 = 0;
        v49 = GameData_212d670[0];
        v50 = GameData_212d678[0];
        do {
          v51 = v46[v48];
          v52 = game_util_Format("Icon%02d", v48);
          v53 = ui_LayoutAccessor_FindPane(a1, (__int64)v52);
          v54 = __dynamic_cast(v53, v49, v50, 0);
          v55 = v54;
          v56 = &GameData_1a9f09e;
          if (v51 <= 6) {
            v56 = GameData_204f1e8[v51];
          }
          Manager_136a920(ui_Manager_instance_ + 1264, v54, 0, 7u, v56);
          ++v48;
          *(_BYTE*)(v55 + 88) |= 1u;
        } while (&v46[v48] != v47);
        a2 = v60;
        a3 = v61;
      }
    }
    else {
      v46 = nullptr;
    }
    v57 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_Icon");
    if (v57 != 0) {
      Alignment_56b600(v57);
    }
    if ((a2 & 1) != 0) {
      v58 = "Dungeon";
    }
    else {
      v58 = "CmdBtl";
    }
    if ((a2 & 1) == 0 && (a3 & 1) != 0) {
      v58 = "Gmap";
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v58 = "Gmap_Part3";
      }
    }
    LayoutAccessor_1562cf0((__int64)a1, v58);
    if (v46 != nullptr) {
      v62_.v63 = v46;
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v46);
    }
  }
}

__int64 game_gameui_1593d90(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  float v10;
  float v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  float v17;
  float v18;
  char v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  const char* v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  struct {
    float v31[4];
    char* v32;
  } v31_;
  float v33;
  float v34[2];
  float v35[2];

  LayoutAccessor_155e830((__int64)a1, 1);
  v4 = *(char*)(a2 + 28);
  if (v4 != 5) {
    GameHr_1562680((__int64)a1, GameData_204d1d8[v4], 0x1.0000000000000p+0f);
  }
  game_1603b10((void*)((__int64)v31_.v31), *(unsigned int*)(a2 + 20));
  if ((LOBYTE(v31_.v31[0]) & 1) != 0) {
    v5 = v31_.v32;
  }
  else {
    v5 = (char*)v31_.v31 + 1;
  }
  if (v5 != nullptr) {
    v6 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Key");
    if (v6 != 0) {
      GameRoutine_156c5d0(v6, (__int64)v5, 0);
    }
  }
  v7 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Key");
  if (v7 != 0) {
    v8 = v7;
    v9 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Key");
    if (v9 != nullptr) {
      ui_text_190a0c0(v35, (__int64)v34, &v33, v9, v9[27]);
      v10 = v34[0];
      v11 = v34[1];
    }
    else {
      v10 = 0x0.0p+0f;
      v11 = 0x0.0p+0f;
    }
    v12 = *(_BYTE*)(v8 + 88);
    *(float*)(v8 + 80) = v10;
    *(float*)(v8 + 84) = v11;
    *(_BYTE*)(v8 + 88) = v12 | 0x10;
  }
  GameRoutine_159da00(a1, *(_DWORD*)(a2 + 24), *(_DWORD*)(a2 + 20));
  if ((LOBYTE(v31_.v31[0]) & 1) != 0 && v31_.v32 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v31_.v32);
  }
  if (*(_QWORD*)(a2 + 8) != 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"T_Txt", 1);
    LayoutAccessor_1562060(a1, (__int64)"T_Txt", *(const char**)(a2 + 8));
    v14 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
    if (v14 != 0) {
      v15 = v14;
      v16 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Txt");
      if (v16 != nullptr) {
        ui_text_190a0c0(v31_.v31, (__int64)v35, v34, v16, v16[27]);
        v17 = v35[0];
        v18 = v35[1];
      }
      else {
        v17 = 0x0.0p+0f;
        v18 = 0x0.0p+0f;
      }
      v19 = *(_BYTE*)(v15 + 88);
      *(float*)(v15 + 80) = v17;
      *(float*)(v15 + 84) = v18;
      *(_BYTE*)(v15 + 88) = v19 | 0x10;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"T_Txt", 0);
  }
  if (*(_BYTE*)(a2 + 16) == 1) {
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"Icon", 0);
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)a1, (__int64)"Icon", 1);
    v20 = ui_LayoutAccessor_FindPane(a1, (__int64)"Icon");
    if (v20 != 0) {
      v21 = __dynamic_cast(v20, GameData_212d670[0], GameData_212d678[0], 0);
      if (v21 != 0) {
        if (*(_BYTE*)(a2 + 16) != 0) {
          v22 = &GameData_1a9f09e;
        }
        else {
          v22 = "IconKeyHelp_XHelp";
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v21, 0, 7u, v22);
      }
    }
  }
  if (*(int*)(a2 + 36) <= 0) {
    v23 = "Num_Off";
  }
  else {
    v23 = "Num_On";
  }
  LayoutAccessor_1562cf0((__int64)a1, v23);
  if (*(int*)(a2 + 36) >= 1) {
    v24 = *(_DWORD*)(a2 + 32);
    v25 = ui_LayoutAccessor_FindPane(a1, (__int64)"T_Num");
    if (v25 != 0) {
      v26 = __dynamic_cast(v25, GameData_212d670[0], GameData_212d690, 0);
      if (v26 != 0) {
        GameRoutine_156c910(v26, "%d", 1, v24);
      }
    }
    v27 = *(_DWORD*)(a2 + 36);
    v28 = ui_LayoutAccessor_FindPane(a1, (__int64)"T_Max_Num");
    if (v28 != 0) {
      v29 = __dynamic_cast(v28, GameData_212d670[0], GameData_212d690, 0);
      if (v29 != 0) {
        GameRoutine_156c910(v29, "%d", 1, v27);
      }
    }
  }
  return GameHr_159d8d0(a1);
}

__int64 game_gameui_15957c0(__int64* a1, unsigned int a2, int a3, char a4,
                            char a5)
{

#pragma clang fp contract(off)
  const char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
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
  float v29;
  double v30;
  double v31;
  double v32;
  double v33;
  double v34;
  float v35;
  float v36;
  __int64 v37;
  const char* v38;
  struct {
    __int64 v40[2];
    char* v41;
  } v40_;

  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  if (((a3 | a2) & 0x80000000) != 0) {
    return LayoutAccessor_1562cf0((__int64)a1, "ReceptionTime_Off");
  }
  if ((a4 & 1) != 0) {
    v9 = "ReceptionTime_On";
  }
  else {
    v9 = "OpenTime_On";
  }
  LayoutAccessor_1562cf0((__int64)a1, v9),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  game_1605540((void*)(v40_.v40), a2, 0),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v40_.v40[0] & 1) != 0) {
    v10 = v40_.v41;
  }
  else {
    v10 = (char*)v40_.v40 + 1;
  }
  if (v10 != nullptr) {
    v11 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Time00"),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v11 != 0) {
      GameRoutine_156c5d0(v11, (__int64)v10, 0),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((v40_.v40[0] & 1) != 0 && v40_.v41 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v40_.v41),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  game_1605540((void*)(v40_.v40), a3 - 1, 59),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v40_.v40[0] & 1) != 0) {
    v13 = v40_.v41;
  }
  else {
    v13 = (char*)v40_.v40 + 1;
  }
  if (v13 != nullptr) {
    v14 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Time01"),
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v14 != 0) {
      GameRoutine_156c5d0(v14, (__int64)v13, 0),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((v40_.v40[0] & 1) != 0 && v40_.v41 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  (__int64)v40_.v41),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if ((a5 & 1) != 0) {
    v16 = "ReceptionDate_Red";
  }
  else {
    v16 = "ReceptionTime_Default";
  }
  LayoutAccessor_1562cf0((__int64)a1, v16),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  v17 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_Time"),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v17 != 0) {
    Alignment_56b600(v17),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    v18 = a1[1];
    if (v18 != 0) {
      v19 = std___1___shared_weak_count_lock(v18),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v19 != 0) {
        v20 = v19;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v20),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  }
  v21 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_Date"),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v21 != 0) {
    Alignment_56b600(v21),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    v22 = a1[1];
    if (v22 != 0) {
      v23 = std___1___shared_weak_count_lock(v22),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v23 != 0) {
        v24 = v23;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v24),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  }
  v25 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_ReceptionTime"),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v25 != 0) {
    Alignment_56b600(v25),
        v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    v26 = a1[1];
    if (v26 != 0) {
      v27 = std___1___shared_weak_count_lock(v26),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v27 != 0) {
        v28 = v27;
        if (*a1 != 0) {
          ControlCreator_13633c0(*a1),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v28),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
  }
  v29 = 0x0.0p+0f;
  if ((ui_LayoutAccessor_IsPaneVisible(a1, "IconLimit") & 1) != 0) {
    v29 = ui_LayoutAccessor_GetPaneSize(a1, (__int64)"IconLimit") + 0x0.0p+0f,
    v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  if ((ui_LayoutAccessor_IsPaneVisible(a1, "N_Date") & 1) != 0) {
    if ((ui_LayoutAccessor_IsPaneVisible(a1, "T_Date") & 1) != 0) {
      v30 = ui_LayoutAccessor_GetTextSize(a1, (__int64)"T_Date"),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      v29 = v29 + *(float*)&v30;
    }
    if ((ui_LayoutAccessor_IsPaneVisible(a1, "T_Week") & 1) != 0) {
      v31 = ui_LayoutAccessor_GetTextSize(a1, (__int64)"T_Week"),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      v29 = v29 + *(float*)&v31;
    }
    if ((ui_LayoutAccessor_IsPaneVisible(a1, "BgWeek") & 1) != 0) {
      v29 = v29 + ui_LayoutAccessor_GetPaneSize(a1, (__int64)"BgWeek"),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  if ((ui_LayoutAccessor_IsPaneVisible(a1, "A_Time") & 1) != 0) {
    if ((ui_LayoutAccessor_IsPaneVisible(a1, "T_Time00") & 1) != 0) {
      v32 = ui_LayoutAccessor_GetTextSize(a1, (__int64)"T_Time00"),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      v29 = v29 + *(float*)&v32;
    }
    if ((ui_LayoutAccessor_IsPaneVisible(a1, "T_TimeUntil") & 1) != 0) {
      v33 = ui_LayoutAccessor_GetTextSize(a1, (__int64)"T_TimeUntil"),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      v29 = v29 + *(float*)&v33;
    }
    if ((ui_LayoutAccessor_IsPaneVisible(a1, "T_Time01") & 1) != 0) {
      v34 = ui_LayoutAccessor_GetTextSize(a1, (__int64)"T_Time01"),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
      v29 = v29 + *(float*)&v34;
    }
  }
  ui_LayoutAccessor_GetPaneSize(a1, (__int64)&GameData_1ac6c8b),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  v36 = v35;
  v37 = ui_LayoutAccessor_FindPane(a1, (__int64)&GameData_1ac6c8b),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  v38 = Pane_58fac0(v37, "Margin_Width"),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(float, "s1", "=w"));
  return ui_LayoutAccessor_SetPaneSize(
      (__int64)a1, (__int64)&GameData_1ac6c8b,
      v29 + (float)*(int*)&v38[*((unsigned int*)v38 + 1)], v36);
}

void game_gameui_1595d90(__int64* a1, int a2, char a3, char a4)
{

#pragma clang fp contract(off)
  const char* v8;
  char* v9;
  const char* v10;
  const char* v11;
  int v12;
  int v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  int v22;
  int v23;
  char v24;
  __int64 v25;
  char v26[15];
  char v27;
  struct {
    _WORD v28[8];
    __int64 v29;
  } v28_;
  float v30;
  _DWORD v31[2];
  float v32;

  LayoutAccessor_155e830((__int64)a1, a2 != 3);
  if (a2 == 3) {
    return;
  }
  v28_.v28[0] = 0;
  *(_WORD*)v26 = 0;
  v8 = (char*)v28_.v28 + 1;
  if (a2 == 2) {
    v9 = &v27;
    GameRoutine_60a020((__int64)v28_.v28, "MID_QuestMenu_Reportable");
    v14 = "Accent_Disable";
    if ((a4 & 1) != 0) {
      v14 = "Accent_Default";
    }
    v26[0] = 28;
    v15 = *(_QWORD*)v14;
    v16 = *(_QWORD*)(v14 + 6);
    *(_QWORD*)&v26[1] = v15;
    *(_QWORD*)&v26[7] = v16;
    goto LABEL_13;
  }
  v9 = &v26[8];
  if (a2 == 1) {
    v10 = "MID_QuestMenu_Progressing";
    goto LABEL_7;
  }
  if (a2 == 0) {
    v10 = "MID_QuestMenu_Acceptable";
  LABEL_7:
    GameRoutine_60a020((__int64)v28_.v28, v10);
    v11 = "Disable";
    if ((a4 & 1) != 0) {
      v11 = "Default";
    }
    v26[0] = 14;
    v12 = *(_DWORD*)v11;
    v13 = *(_DWORD*)(v11 + 3);
    *(_DWORD*)&v26[1] = v12;
    *(_DWORD*)&v26[4] = v13;
  LABEL_13:
    v17 = v28_.v28[0];
    v18 = v28_.v29;
    *v9 = 0;
    if ((v17 & 1) != 0) {
      v8 = (const char*)v18;
    }
  }
  LayoutAccessor_1562060(a1, (__int64)"T_TxtState", v8);
  LayoutAccessor_1562cf0((__int64)a1, &v26[1]);
  LayoutAccessor_1562cf0((__int64)a1, "IconOff");
  if ((a3 & 1) != 0) {
    v19 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_TxtState");
    if (v19 != 0) {
      v20 = v19;
      v21 = (_QWORD*)ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_TxtState");
      if (v21 != nullptr) {
        ui_text_190a0c0(&v32, (__int64)v31, &v30, v21, v21[27]);
        v22 = v31[0];
        v23 = v31[1];
      }
      else {
        v22 = 0;
        v23 = 0;
      }
      v24 = *(_BYTE*)(v20 + 88);
      *(_DWORD*)(v20 + 80) = v22;
      *(_DWORD*)(v20 + 84) = v23;
      *(_BYTE*)(v20 + 88) = v24 | 0x10;
    }
    game_gameui_1585290(a1, (__int64)"A_Txt", (__int64)&GameData_1ac6c8b);
  }
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v28_.v29);
  }
}

__int64 game_gameui_1598e60(__int64 a1, char a2, unsigned int a3,
                            unsigned int a4, unsigned __int8 a5)
{

#pragma clang fp contract(off)
  char* v10;
  _DWORD* v11;
  int v12;
  __int64 result;
  __int64 v14;
  __int64* v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 (***v35)();
  _QWORD* v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  int v47;
  __int64 v48;
  unsigned int v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  double v59;
  double v61;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  struct {
    _QWORD v70[2];
    __int64 v71;
  } v70_;
  _BYTE v72[24];
  struct {
    unsigned __int64 v73;
    int v74;
    int v75;
  } v73_;
  __int64 v76;
  struct {
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
  } v77_;

  if (*(_BYTE*)(a1 + 16) == 1) {
    if ((a2 & 1) != 0) {
      v10 = "L_ConditionReliance";
    }
    else {
      v10 = "L_ConditionHonor";
    }
  }
  else {
    v11 = *(_DWORD**)(a1 + 8);
    v12 = (*v11)++;
    v10 = game_util_Format("L_Condition%02d", v12);
  }
  LayoutAccessor_1560070((void*)(v72), *(__int64**)a1, v10);
  result = *(_QWORD*)&v72[8];
  if (*(_QWORD*)&v72[8] != 0) {
    v14 = std___1___shared_weak_count_lock(*(__int64*)&v72[8]);
    v15 = *(__int64**)v72;
    result = *(_QWORD*)&v72[8];
    if (*(_QWORD*)&v72[8] != 0) {
      result = std___1___shared_weak_count___release_weak(*(__int64*)&v72[8]);
    }
    if (v14 == 0 || v15 == nullptr) {
      if (v14 == 0) {
        return result;
      }
      goto LABEL_108;
    }
    LayoutAccessor_155e830((__int64)v15, 1);
    if ((a5 & 1) != 0) {
      v16 = "Disable";
    }
    else {
      v16 = "Default";
    }
    LayoutAccessor_1562cf0((__int64)v15, v16);
    LayoutAccessor_1562cf0((__int64)v15, "Lv");
    v17 = ui_LayoutAccessor_FindPane(v15, (__int64)"Icon");
    if (v17 != 0) {
      v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v18 = 0;
    }
    LayoutAccessor_1560070((void*)(v72), v15, "L_Scout_Num");
    if (*(_QWORD*)&v72[8] != 0) {
      v19 = std___1___shared_weak_count_lock(*(__int64*)&v72[8]);
      v20 = *(_QWORD*)v72;
      if (*(_QWORD*)&v72[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v72[8]);
      }
      if (v19 != 0 && v20 != 0) {
        LayoutAccessor_155e830(v20, 0);
      }
      else if (v19 == 0) {
        goto LABEL_28;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak(v19);
      }
    }
  LABEL_28:
    v21 = msg_MessageManager_instance__ptr[0];
    v22 = GameData_212e348;
    if ((a2 & 1) != 0) {
      GameRoutine_1841fc0(v18, 0);
      v23 = 36;
      if ((a5 & *(_BYTE*)(a1 + 16) & 1) != 0) {
        v23 = 72;
      }
      if (v18 != 0) {
        v24 = *(_DWORD*)((char*)GameData_212da30 + v23);
        v25 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v18 + 88LL))(v18, 0);
        if (v25 != 0) {
          *(_DWORD*)(v25 + 12) = v24;
        }
      }
      v26 = *v21;
      v76 = -1;
      v77_.v77 = -1;
      v77_.v78 = -1;
      v77_.v79 = -1;
      v77_.v80 = -1;
      v77_.v81 = -1;
      v77_.v82 = -1;
      v77_.v83 = -1;
      v77_.v84 = -1;
      v77_.v85 = -1;
      v77_.v86 = -1;
      v77_.v87 = -1;
      *(_QWORD*)v72 = v22 + 2;
      *(_QWORD*)&v72[8] = 0xFFFF0001FFFF0000LL;
      *(_QWORD*)&v72[16] = 0xFFFF0004FFFF0002LL;
      v73_.v73 = 0xFFFF0006FFFF0005LL;
      v77_.v88 = 8;
      v73_.v74 = -65529;
      v73_.v75 = -65528;
      v27 = GameRoutine_a4dbe0(v26, "MID_Sys_RelianceLv", 0);
      if (v27 != nullptr) {
        v28 = (__int64)v27;
        v29 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Txt");
        if (v29 != 0) {
          GameRoutine_156c5d0(v29, v28, 0);
        }
      }
      LayoutAccessor_1560070((void*)(v72), v15, "L_Scout_Num");
      if (*(_QWORD*)&v72[8] == 0) {
        goto LABEL_97;
      }
      v30 = std___1___shared_weak_count_lock(*(__int64*)&v72[8]);
      v31 = *(__int64**)v72;
      if (*(_QWORD*)&v72[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v72[8]);
      }
      if (v30 != 0 && v31 != nullptr) {
        v32 = *(_QWORD*)(a1 + 24);
        *(_QWORD*)v72 = 0;
        *(_QWORD*)&v72[8] = v32;
        if (v32 != 0) {
          v32 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v32 + 24) + 1784LL) + 272LL);
        }
        *(_QWORD*)&v72[16] = v32;
        if (game_GameModeData_instance_ != 0 &&
            (v33 = *(_QWORD*)(game_GameModeData_instance_ + 96),
             v70_.v70[0] = 0, v70_.v70[1] = v33, v33 != 0)) {
          v34 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v33 + 24) + 1784LL) + 272LL);
          v70_.v71 = v34;
          v35 = GameData_212dae8;
          if (v32 == 0 || v34 == 0) {
          LABEL_73:
            v49 = *((unsigned __int8*)v35 + 11);
            if (a3 <= v49) {
              LayoutAccessor_155e830((__int64)v31, 0);
            }
            else {
              LayoutAccessor_155e830((__int64)v31, 1);
              LayoutAccessor_1562cf0((__int64)v31, "Cost");
              v50 = game_util_Format("%d", v49);
              v51 = ui_LayoutAccessor_FindTextBox(v31, (__int64)"T_Num");
              if (v51 != 0) {
                GameRoutine_156c5d0(v51, (__int64)v50, 0);
              }
              v52 = *v21;
              v76 = -1;
              v77_.v77 = -1;
              v77_.v78 = -1;
              v77_.v79 = -1;
              v77_.v80 = -1;
              v77_.v81 = -1;
              v77_.v82 = -1;
              v77_.v83 = -1;
              v77_.v84 = -1;
              v77_.v85 = -1;
              v77_.v86 = -1;
              v77_.v87 = -1;
              *(_QWORD*)v72 = v22 + 2;
              *(_QWORD*)&v72[8] = 0xFFFF0001FFFF0000LL;
              *(_QWORD*)&v72[16] = 0xFFFF0004FFFF0002LL;
              v73_.v73 = 0xFFFF0006FFFF0005LL;
              v77_.v88 = 8;
              v73_.v74 = -65529;
              v73_.v75 = -65528;
              v53 = GameRoutine_a4dbe0(v52, "MID_Sys_NowLv", 0);
              if (v53 != nullptr) {
                v54 = (__int64)v53;
                v55 = ui_LayoutAccessor_FindTextBox(v31, (__int64)"T_Txt");
                if (v55 != 0) {
                  GameRoutine_156c5d0(v55, v54, 0);
                }
              }
              v56 = *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) +
                               (_QWORD)GameData_212da30 + 4);
              v57 = ui_LayoutAccessor_FindTextBox(v31, (__int64)"T_Num");
              if (v57 != 0) {
                v58 = Pane_58f8a0(v57);
                if (v58 != 0) {
                  *(_DWORD*)(v58 + 12) = v56;
                }
              }
              v59 = ui_LayoutAccessor_GetTextSize(v31, (__int64)"T_Num");
              ui_LayoutAccessor_SetPaneSize_alt1((__int64)v31, (__int64)"T_Num",
                                                 *(float*)&v59);
              v61 = ui_LayoutAccessor_GetTextSize(v31, (__int64)"T_Txt");
              ui_LayoutAccessor_SetPaneSize_alt1((__int64)v31, (__int64)"T_Txt",
                                                 *(float*)&v61);
              game_gameui_1585290(v31, (__int64)"A_Info",
                                  (__int64)&GameData_1ac6c8b);
            }
            goto LABEL_95;
          }
          v36 = *(_QWORD**)(game_GameModeData_instance_ + 128);
          v37 = GameReliance_8e17a0(v36, (__int64)v72, (__int64)v70_.v70);
          if ((v37 & 0x80000000) == 0) {
            v35 = (__int64 (***)(void))(v36[1] + 56LL * v37);
            goto LABEL_73;
          }
        }
        else {
          v70_.v71 = 0;
        }
        v35 = GameData_212dae8;
        goto LABEL_73;
      }
    }
    else {
      v38 = 36;
      if ((a5 & *(_BYTE*)(a1 + 16) & 1) != 0) {
        v38 = 72;
      }
      if (v18 != 0) {
        v39 = *(_DWORD*)((char*)GameData_212da30 + v38);
        v40 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v18 + 88LL))(v18, 0);
        if (v40 != 0) {
          *(_DWORD*)(v40 + 12) = v39;
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v18, 0, 7u,
                        "IconStock_Honor");
      }
      v41 = "MID_Sys_HonorLv";
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v41 = "MID_Sys_HonorLV_Part3";
      }
      v42 = *v21;
      v76 = -1;
      v77_.v77 = -1;
      v77_.v78 = -1;
      v77_.v79 = -1;
      v77_.v80 = -1;
      v77_.v81 = -1;
      v77_.v82 = -1;
      v77_.v83 = -1;
      v77_.v84 = -1;
      v77_.v85 = -1;
      v77_.v86 = -1;
      v77_.v87 = -1;
      *(_QWORD*)v72 = v22 + 2;
      *(_QWORD*)&v72[8] = 0xFFFF0001FFFF0000LL;
      *(_QWORD*)&v72[16] = 0xFFFF0004FFFF0002LL;
      v73_.v73 = 0xFFFF0006FFFF0005LL;
      v77_.v88 = 8;
      v73_.v74 = -65529;
      v73_.v75 = -65528;
      v43 = GameRoutine_a4dbe0(v42, v41, 0);
      if (v43 != nullptr) {
        v44 = (__int64)v43;
        v45 = ui_LayoutAccessor_FindTextBox(v15, (__int64)"T_Txt");
        if (v45 != 0) {
          GameRoutine_156c5d0(v45, v44, 0);
        }
      }
      LayoutAccessor_1560070((void*)(v72), v15, "L_Scout_Num");
      if (*(_QWORD*)&v72[8] == 0) {
        goto LABEL_97;
      }
      v30 = std___1___shared_weak_count_lock(*(__int64*)&v72[8]);
      v46 = *(__int64**)v72;
      if (*(_QWORD*)&v72[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v72[8]);
      }
      if (v30 != 0 && v46 != nullptr) {
        v47 = GameRoutine_715440();
        *(_DWORD*)v72 = 1;
        *(_QWORD*)&v72[4] = *game_g_empty_item_ptr;
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v48 = *GameData_212ceb0;
        }
        else {
          v48 = 0;
        }
        *(_QWORD*)&v72[12] = v48;
        WORD1(v73_.v73) = 0;
        HIDWORD(v73_.v73) = 0;
        v77_.v78 = 0;
        v77_.v79 = 0;
        v77_.v80 = 0;
        v77_.v81 = 0;
        v76 = (__int64)&v77_.v77;
        v77_.v77 = 0;
        GameRoutine_930b90((__int64)&v73_.v73, (__int64)GameData_212c8b0[0]);
        LODWORD(v77_.v82) = 0;
        HIDWORD(v77_.v82) = v47;
        LODWORD(v77_.v83) = a3;
        Util_1584ec0(v46, (__int64)v72, 1u);
        v73_.v74 = 0;
        v73_.v73 = 0;
        if ((v77_.v79 & 1) != 0) {
          *(_BYTE*)v77_.v81 = 0;
          v77_.v80 = 0;
        }
        else {
          LOWORD(v77_.v79) = 0;
        }
        GameRoutine_6e3b50((__int64)&v76, (_QWORD*)v77_.v77);
        v77_.v77 = 0;
        v77_.v78 = 0;
        v76 = (__int64)&v77_.v77;
        if ((v77_.v79 & 1) != 0) {
          v63 = (_QWORD*)v77_.v81;
          if (v77_.v81 != 0) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v77_.v81);
            v63 = (_QWORD*)v77_.v77;
          }
        }
        else {
          v63 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v76, v63);
        goto LABEL_95;
      }
    }
    if (v30 == 0) {
    LABEL_97:
      v65 = ui_LayoutAccessor_FindAlignment(v15, (__int64)"A_Condition");
      if (v65 != 0) {
        Alignment_56b600(v65);
      }
      if ((*(_BYTE*)(a1 + 16) & 1) == 0) {
        v66 = ui_LayoutAccessor_FindPane(v15, (__int64)"T_NowLvNum");
        if (v66 != 0) {
          v67 = __dynamic_cast(v66, GameData_212d670[0], GameData_212d690, 0);
          if (v67 != 0) {
            GameRoutine_156c910(v67, "%d", 1, a4);
          }
        }
      }
      v68 = ui_LayoutAccessor_FindPane(v15, (__int64)"T_LvNum");
      if (v68 != 0) {
        v69 = __dynamic_cast(v68, GameData_212d670[0], GameData_212d690, 0);
        if (v69 != 0) {
          GameRoutine_156c910(v69, "%d", 1, a3);
        }
      }
      result = ui_LayoutAccessor_FindAlignment(v15, (__int64)"A_Txt");
      if (result != 0) {
        result = Alignment_56b600(result);
      }
    LABEL_108:
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        return std___1___shared_weak_count___release_weak(v14);
      }
      return result;
    }
  LABEL_95:
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak(v30);
    }
    goto LABEL_97;
  }
  return result;
}

void game_gameui_159b930(__int64* a1, unsigned int a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  char* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  int v16;
  char v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  float v20;
  _DWORD v21[2];

  LayoutAccessor_1560070((void*)(&v18_.v18), a1, "L_Remaining");
  if (v18_.v19 != 0) {
    v3 = std___1___shared_weak_count_lock(v18_.v19);
    v4 = v18_.v18;
    if (v18_.v19 != 0) {
      std___1___shared_weak_count___release_weak(v18_.v19);
    }
    if (v3 == 0 || v4 == nullptr) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      LayoutAccessor_155e830((__int64)v4, 1);
      v6 = ui_LayoutAccessor_FindPane(v4, (__int64)"T_Num");
      if (v6 != 0) {
        v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d690, 0);
        if (v7 != 0) {
          GameRoutine_156c910(v7, "%d", 1, a2);
        }
      }
      v8 = (char*)GameData_212da30 + 36;
      if (a2 == 0) {
        v8 = (char*)GameData_212da30 + 60;
      }
      v9 = *(_DWORD*)v8;
      v10 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Num");
      if (v10 != 0) {
        v11 = Pane_58f8a0(v10);
        if (v11 != 0) {
          *(_DWORD*)(v11 + 12) = v9;
        }
      }
      v12 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Txt");
      if (v12 != 0) {
        v13 = v12;
        v14 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Txt");
        if (v14 != nullptr) {
          ui_text_190a0c0((float*)&v18_.v18, (__int64)v21, &v20, v14, v14[27]);
          v15 = v21[0];
          v16 = v21[1];
        }
        else {
          v15 = 0;
          v16 = 0;
        }
        v17 = *(_BYTE*)(v13 + 88);
        *(_DWORD*)(v13 + 80) = v15;
        *(_DWORD*)(v13 + 84) = v16;
        *(_BYTE*)(v13 + 88) = v17 | 0x10;
      }
      game_gameui_1585290(v4, (__int64)"T_Txt", (__int64)&GameData_1ac6c8b);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

void game_gameui_15d2910(__int64* a1, _WORD* a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _QWORD v7[2];
  struct {
    char* v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1562cf0((__int64)a1, "Default");
  v7[0] = "L_InfoTitle";
  v7[1] = 11;
  GameRoutine_13fa520((void*)(&v8_.v8), a1, v7);
  if (v8_.v9 != 0) {
    v4 = std___1___shared_weak_count_lock(v8_.v9);
    v5 = (__int64*)v8_.v8;
    if (v8_.v9 != 0) {
      std___1___shared_weak_count___release_weak(v8_.v9);
    }
    if (v4 != 0 && v5 != nullptr) {
      InfoTitle_18b9170(v5, a2);
      v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                      8LL * (unsigned __int16)*a2);
      if ((((0x10000000000LL << *(_BYTE*)(v6 + 72)) |
            (1LL << *(_BYTE*)(v6 + 73))) &
           0xFFBFFFFFFFA39FFFLL) == 0) {
        v8_.v8 = "NumNone";
        v8_.v9 = 7;
        Element_18863e0((__int64)v5, (const char**)&v8_.v8, 1);
      }
    }
    else if (v4 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
}

void game_gameui_15d2c40(__int64* a1, unsigned int* a2, unsigned int a3,
                         _QWORD* a4, int a5, char a6)
{
  __int64 v12;
  __int64 v13;
  const char* v15;
  const char* v16;
  _QWORD v17[2];
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;

  v17[0] = "L_InfoTitle";
  v17[1] = 11;
  GameRoutine_13fa520((void*)(&v18_.v18), a1, v17);
  if (v18_.v19 == 0) {
    goto LABEL_24;
  }
  v12 = std___1___shared_weak_count_lock(v18_.v19);
  v13 = v18_.v18;
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak(v18_.v19);
  }
  if (v12 == 0 || v13 == 0) {
    if (v12 == 0) {
      goto LABEL_24;
    }
  }
  else {
    if ((*(_WORD*)a2 & 0xFFF) != 0) {
      LODWORD(v18_.v18) = 0;
      InfoTitle_18b9480(v13, a2, a4, &v18_.v18);
    }
    else {
      GameRoutine_18b9ca0(v13, a3);
    }
    v15 = "MID_Sys_UnopendRide_Help";
    if (a5 != 1) {
      v15 = nullptr;
    }
    if (a5 == 2) {
      v16 = "MID_Sys_UnusableCommand_Help";
    }
    else {
      v16 = v15;
    }
    if (v16 != nullptr) {
      InfoTitle_18b8e80(v13, v16);
    }
    else {
      InfoTitle_18b90a0(v13);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
LABEL_24:
  switch ((unsigned __int8)a3) {
  case 6u:
    LayoutAccessor_1562cf0((__int64)a1, "Status02");
    GameRoutine_158ebe0((__int64)a1, a2, (__int64)a4, 0);
    break;
  case 3u:
    LayoutAccessor_1562cf0((__int64)a1, "Status05");
    GameRoutine_158e7e0((__int64)a1, a2, (__int64)a4, 1);
    break;
  case 2u:
    LayoutAccessor_1562cf0((__int64)a1, "Status04");
    game_gameui_Util_SetArtsSkillStatus((__int64)a1, a2, (__int64)a4, 0,
                                        a6 & 1);
    break;
  default:
    LayoutAccessor_1562cf0((__int64)a1, "Default");
    break;
  }
}

void game_gameui_15d4ba0(__int64 a1, __int64 a2, char a3, unsigned __int8 a4,
                         char a5)
{

#pragma clang fp contract(off)
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  const char* v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  const char* v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64* v44;
  unsigned int v45;
  const char* v46;
  unsigned __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  __int64* v51;
  __int16* v52;
  int v53;
  char* v54;
  __int64 v55;
  __int64* v56;
  char v57;
  __int64* v58;
  __int64* v59;
  void* v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int16* v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  char v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  const char* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  __int64 v93;
  __int64* v94;
  const char* v95;
  __int64 v96;
  char* v97;
  __int64 v98;
  __int64 v99;
  char* v100;
  int v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  _QWORD* v106;
  __int64 v107;
  char v108;
  unsigned int v109;
  __int64 v110;
  __int64 v111;
  int v112;
  int v113;
  int* v114;
  int v115;
  int v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  char v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  const char* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  int v135;
  int v136;
  int v137;
  int v138;
  unsigned int v139;
  __int64* v140;
  __int64* v141;
  __int64* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  unsigned int v148;
  unsigned int v149;
  __int64 v150;
  __int64 v151;
  _QWORD* v152;
  char v153;
  const char* v154;
  char* v155;
  __int64 v156;
  char* v157;
  __int64 v158;
  __int64 v159;
  int v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  int v167;
  int v168;
  unsigned int v169;
  char* v170;
  __int64 v171;
  __int64* v172;
  __int64 v173;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64* v178;
  int v179;
  unsigned int v180;
  unsigned int v181;
  int v182;
  __int64 v183;
  __int64 v184;
  __int64* v185;
  int v186;
  unsigned int v187;
  unsigned int v188;
  int v189;
  unsigned int v190;
  __int64 v191;
  _QWORD* v192;
  __int64 v193;
  __int64 v194;
  __int64* v195;
  __int64 v196;
  __int64 v197;
  unsigned __int64* v198;
  __int64 v199;
  __int64* v200;
  int v201;
  unsigned int v202;
  unsigned int v203;
  int v204;
  unsigned __int64 v205;
  __int64 v206;
  __int64 v207;
  char v208;
  char v209;
  unsigned int v210;
  __int64 v212;
  unsigned __int8 v213;
  _QWORD* v214;
  __int64 v215;
  __int64 v216;
  char v217;
  const char* v218;
  __int64* v219;
  int v220;
  const char* v221;
  int v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  _QWORD* v226;
  __int64* i;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  _QWORD* v232;
  int v233;
  int v234;
  unsigned int v235;
  __int64* v236;
  __int64 v237;
  _DWORD* v238;
  char* v239;
  __int64 v240;
  __int64* v241;
  unsigned __int64 v242;
  __int64* v243;
  __int64 v244;
  __int64* v245;
  int v246;
  unsigned int v247;
  unsigned int v248;
  int v249;
  unsigned int v250;
  int v251;
  __int64 v252;
  _QWORD* v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  unsigned __int64 v258;
  bool v259;
  unsigned __int64 v260;
  _BYTE* v261;
  _BYTE* v262;
  _BYTE* v263;
  int v264;
  int v265;
  unsigned int v266;
  __int64* v267;
  __int64 v268;
  int v269;
  __int64 v270;
  char* v271;
  __int64 v272;
  __int64* v273;
  __int64 v274;
  unsigned int v275;
  __int64 v276;
  _QWORD* v277;
  __int64 v278;
  int v279;
  const char* v280;
  int v281;
  unsigned int v282;
  __int64* v283;
  __int64 v284;
  __int64 v285;
  char* v286;
  __int64 v287;
  __int64* v288;
  __int64 v289;
  const char* v290;
  __int64* v291;
  __int64* v292;
  int v293;
  unsigned int v294;
  unsigned int v295;
  int v296;
  unsigned int v297;
  __int64 v298;
  _QWORD* v299;
  __int64 v300;
  _QWORD* v301;
  __int64 v302;
  __int64 v303;
  int v304;
  __int64 v305;
  char* v306;
  __int64 v307;
  __int64* v308;
  int v309;
  __int64 v310;
  _QWORD* v311;
  __int64 v312;
  int v313;
  int v314;
  unsigned int v315;
  char* v316;
  __int64 v317;
  __int64* v318;
  __int64 v319;
  _QWORD* v320;
  __int64 v321;
  __int64 v322;
  char* v323;
  __int64 v324;
  __int64 v325;
  int v326;
  int v327;
  unsigned int v328;
  char* v329;
  __int64 v330;
  __int64* v331;
  __int64 v332;
  _QWORD* v333;
  __int64 v334;
  const char* v335;
  __int64 v336;
  char* v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  int v341;
  __int64 v342;
  char* v343;
  __int64 v344;
  __int64* v345;
  unsigned __int64 v346;
  __int64 v347;
  __int64* v348;
  int v349;
  unsigned int v350;
  unsigned int v351;
  int v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  _QWORD* v356;
  __int64 v357;
  int v358;
  const char* v359;
  const char* v360;
  char v361;
  int v362;
  char v363;
  unsigned __int8 v364;
  unsigned int v365;
  int v366;
  __int64* v367;
  _BYTE v368[24];
  struct {
    unsigned __int64 v369;
    _BYTE* v370;
  } v369_;
  __int128 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  __int128 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  __int64 v383;
  struct {
    __int64 v384;
    char* v385;
  } v384_;
  __int64* v386;
  struct {
    _QWORD* v387;
    __int64 v388;
    __int64 v389;
    __int64 v390;
    _BYTE* v391;
  } v387_;
  __int64* v392;
  int v393;
  __int64 v394[2];

  v392 = (__int64*)a2;
  v8 = (__int64*)a1;
  LayoutAccessor_155e830(a1, (a2 != 0) | a3 & 1);
  if (a2 == 0) {
    return;
  }
  if ((a5 & 1) != 0) {
    LayoutAccessor_1560070((void*)(v368), v8, "L_Stamp");
    if (*(_QWORD*)&v368[8] != 0) {
      v9 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
      v10 = *(_QWORD*)v368;
      if (*(_QWORD*)&v368[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
      }
      if (v9 != 0 && v10 != 0) {
        v11 = (*(__int64 (**)(__int64*))(*v392 + 104))(v392);
        LayoutAccessor_155e830(v10, v11 & 1);
        if (((*(__int64 (**)(__int64*))(*v392 + 104))(v392) & 1) != 0) {
          GameHr_1562680(v10, "Default", 0x1.0000000000000p+0f);
        }
      }
      else if (v9 == 0) {
        goto LABEL_13;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
LABEL_13:
  v12 = (const char*)(*(__int64 (**)(__int64*))(*v392 + 16))(v392);
  LayoutAccessor_1562060(v8, (__int64)"T_Title", v12);
  HelpQuestInfo_15d4830(v8, (__int64)v392);
  v13 = (*(__int64 (**)(__int64*))(*v392 + 104))(v392);
  ui_LayoutAccessor_SetPaneVisible((__int64)v8, (__int64)"IconState", v13 & 1);
  v14 = ui_LayoutAccessor_FindAlignment(v8, (__int64)"A_Title");
  if (v14 != 0) {
    Alignment_56b600(v14);
  }
  v15 = 24;
  if ((a4 & 1) != 0) {
    v15 = 32;
  }
  v16 = (*(__int64 (**)(__int64))(*v392 + v15))((__int64)v392);
  if (v16 != 0) {
    v17 = v16;
    v18 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Help");
    if (v18 != 0) {
      GameRoutine_156c5d0(v18, v17, 0);
    }
  }
  v19 = (_BYTE*)(*(__int64 (**)(__int64*))(*v392 + 152))(v392);
  if (*v19 != 0) {
    v20 = (__int64)v19;
    ui_LayoutAccessor_SetPaneVisible((__int64)v8, (__int64)"T_Name", 1);
    v21 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Name");
    if (v21 != 0) {
      GameRoutine_156c5d0(v21, v20, 0);
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)v8, (__int64)"T_Name", 0);
  }
  if ((*(int (**)(__int64*))(*v392 + 80))(v392) < 1) {
    ui_LayoutAccessor_SetPaneVisible((__int64)v8, (__int64)"N_Lv", 0);
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)v8, (__int64)"N_Lv", 1);
    v22 = (*(__int64 (**)(__int64*))(*v392 + 80))(v392);
    v23 = ui_LayoutAccessor_FindPane(v8, (__int64)"T_Lv");
    if (v23 != 0) {
      v24 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d690, 0);
      if (v24 != 0) {
        GameRoutine_156c910(v24, "%d", 1, v22);
      }
    }
  }
  v25 = ui_LayoutAccessor_FindAlignment(v8, (__int64)"A_Help");
  if (v25 != 0) {
    Alignment_56b600(v25);
  }
  v26 = game_util_Format("L_Condition%02d", 0);
  LayoutAccessor_1560070((void*)(v368), v8, v26);
  if (*(_QWORD*)&v368[8] != 0) {
    v27 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
    v28 = *(_QWORD*)v368;
    if (*(_QWORD*)&v368[8] != 0) {
      std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
    }
    if (v27 != 0 && v28 != 0) {
      LayoutAccessor_155e830(v28, 0);
    }
    else if (v27 == 0) {
      goto LABEL_40;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak(v27);
    }
  }
LABEL_40:
  v29 = game_util_Format("L_Condition%02d", 1);
  LayoutAccessor_1560070((void*)(v368), v8, v29);
  if (*(_QWORD*)&v368[8] != 0) {
    v30 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
    v31 = *(_QWORD*)v368;
    if (*(_QWORD*)&v368[8] != 0) {
      std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
    }
    if (v30 != 0 && v31 != 0) {
      LayoutAccessor_155e830(v31, 0);
    }
    else if (v30 == 0) {
      goto LABEL_49;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak(v30);
    }
  }
LABEL_49:
  v32 = game_util_Format("L_Condition%02d", 2);
  LayoutAccessor_1560070((void*)(v368), v8, v32);
  if (*(_QWORD*)&v368[8] != 0) {
    v33 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
    v34 = *(_QWORD*)v368;
    if (*(_QWORD*)&v368[8] != 0) {
      std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
    }
    if (v33 != 0 && v34 != 0) {
      LayoutAccessor_155e830(v34, 0);
    }
    else if (v33 == 0) {
      goto LABEL_58;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak(v33);
    }
  }
LABEL_58:
  v35 = (*(__int64 (**)(__int64*))(*v392 + 40))(v392);
  if (v35 != 0) {
    v36 = v35;
    v37 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Condition");
    if (v37 != 0) {
      GameRoutine_156c5d0(v37, v36, 0);
    }
  }
  v384_.v384 = (__int64)&v392;
  v38 = (*(__int64 (**)(__int64*))(*v392 + 160))(v392);
  v39 = *v392;
  if (v38 > 1) {
    if ((*(int (**)(__int64))(v39 + 160))((__int64)v392) < 1) {
    LABEL_82:
      LODWORD(v41) = 0;
      goto LABEL_86;
    }
    v45 = 0;
    while (1) {
      v46 = (const char*)(*(__int64 (**)(__int64*, _QWORD))(*v392 + 184))(v392,
                                                                          v45);
      v47 = strlen(v46);
      if (v47 != 0) {
        v48 = v47;
        v49 = game_util_Format("L_ConditionSpot%02d", v45);
        LayoutAccessor_1560070((void*)(v368), v8, v49);
        if (*(_QWORD*)&v368[8] != 0) {
          v50 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
          v51 = *(__int64**)v368;
          if (*(_QWORD*)&v368[8] != 0) {
            std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
          }
          if (v50 != 0 && v51 != nullptr) {
            game_gameui_15d7960((_QWORD**)&v384_.v384, v51, (__int64)v46, v48,
                                v45);
          LABEL_80:
            if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
              std___1___shared_weak_count___release_weak(v50);
            }
            goto LABEL_71;
          }
          if (v50 != 0) {
            goto LABEL_80;
          }
        }
      }
    LABEL_71:
      if ((int)++v45 >= (*(int (**)(__int64*))(*v392 + 160))(v392)) {
        goto LABEL_82;
      }
    }
  }
  v40 = (const char*)(*(__int64 (**)(__int64))(v39 + 176))((__int64)v392);
  v41 = strlen(v40);
  if (v41 == 0) {
    goto LABEL_86;
  }
  v42 = game_util_Format("L_Condition%02d", 0);
  LayoutAccessor_1560070((void*)(v368), v8, v42);
  if (*(_QWORD*)&v368[8] == 0) {
    goto LABEL_85;
  }
  v43 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
  v44 = *(__int64**)v368;
  if (*(_QWORD*)&v368[8] != 0) {
    std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
  }
  if (v43 != 0 && v44 != nullptr) {
    LayoutAccessor_155e830((__int64)v44, 1);
    game_gameui_15d7960((_QWORD**)&v384_.v384, v44, (__int64)v40, v41, 0);
  }
  else if (v43 == 0) {
  LABEL_85:
    LODWORD(v41) = 1;
    goto LABEL_86;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_85;
  }
  (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
  std___1___shared_weak_count___release_weak(v43);
  LODWORD(v41) = 1;
LABEL_86:
  (*(void (**)(__int64*))(*v392 + 160))(v392);
  v52 = (__int16*)(*(__int64 (**)(__int64*))*v392)(v392);
  if (v52[1] * *v52 * v52[2] != 0) {
    v53 = v41 + 1;
    v54 = game_util_Format("L_Condition%02d", v41);
    LayoutAccessor_1560070((void*)(v368), v8, v54);
    if (*(_QWORD*)&v368[8] != 0) {
      v55 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
      v56 = *(__int64**)v368;
      if (*(_QWORD*)&v368[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
      }
      if (v55 != 0 && v56 != nullptr) {
        LayoutAccessor_155e830((__int64)v56, 1);
        v57 = (*(__int64 (**)(__int64*))(*v392 + 112))(v392);
        v58 = msg_MessageManager_instance__ptr[0];
        v59 = GameData_212e348;
        v60 = GameData_212da30;
        if ((v57 & 1) != 0 &&
            ((*(__int64 (**)(__int64*))(*v392 + 120))(v392) & 1) != 0) {
          LayoutAccessor_1562cf0((__int64)v56, "Date_Disable");
          v61 = *v58;
          *(_QWORD*)&v371 = -1;
          *((_QWORD*)&v371 + 1) = -1;
          v372 = -1;
          v373 = -1;
          v374 = -1;
          v375 = -1;
          *(_QWORD*)&v376 = -1;
          *((_QWORD*)&v376 + 1) = -1;
          v377 = -1;
          v378 = -1;
          v379 = -1;
          v380 = -1;
          *(_QWORD*)v368 = v59 + 2;
          *(_QWORD*)&v368[8] = 0xFFFF0001FFFF0000LL;
          *(_QWORD*)&v368[16] = 0xFFFF0004FFFF0002LL;
          v369_.v369 = 0xFFFF0006FFFF0005LL;
          v381 = 8;
          v369_.v370 = (_BYTE*)0xFFFF0008FFFF0007LL;
          v62 = GameRoutine_a4dbe0(v61, "MID_QuestMenu_Failed", 0);
          if (v62 != nullptr) {
            v63 = (__int64)v62;
            v64 = ui_LayoutAccessor_FindTextBox(v56, (__int64)"T_Title");
            if (v64 != 0) {
              GameRoutine_156c5d0(v64, v63, 0);
            }
          }
          v65 = *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v60 + 4);
          v66 = ui_LayoutAccessor_FindTextBox(v56, (__int64)"T_Title");
          if (v66 != 0) {
            v67 = Pane_58f8a0(v66);
            if (v67 != 0) {
              *(_DWORD*)(v67 + 12) = v65;
            }
          }
        }
        else {
          LayoutAccessor_1562cf0((__int64)v56, "Date");
          v68 = *v58;
          *(_QWORD*)&v371 = -1;
          *((_QWORD*)&v371 + 1) = -1;
          v372 = -1;
          v373 = -1;
          v374 = -1;
          v375 = -1;
          *(_QWORD*)&v376 = -1;
          *((_QWORD*)&v376 + 1) = -1;
          v377 = -1;
          v378 = -1;
          v379 = -1;
          v380 = -1;
          *(_QWORD*)v368 = v59 + 2;
          *(_QWORD*)&v368[8] = 0xFFFF0001FFFF0000LL;
          *(_QWORD*)&v368[16] = 0xFFFF0004FFFF0002LL;
          v369_.v369 = 0xFFFF0006FFFF0005LL;
          v381 = 8;
          v369_.v370 = (_BYTE*)0xFFFF0008FFFF0007LL;
          v69 = GameRoutine_a4dbe0(v68, "MID_Sys_FreeAction_Limit", 0);
          if (v69 != nullptr) {
            v70 = (__int64)v69;
            v71 = ui_LayoutAccessor_FindTextBox(v56, (__int64)"T_Title");
            if (v71 != 0) {
              GameRoutine_156c5d0(v71, v70, 0);
            }
          }
          v72 = *(_DWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)v60);
          v73 = ui_LayoutAccessor_FindTextBox(v56, (__int64)"T_Title");
          if (v73 != 0) {
            v74 = Pane_58f8a0(v73);
            if (v74 != 0) {
              *(_DWORD*)(v74 + 12) = v72;
            }
          }
          v75 = (__int16*)(*(__int64 (**)(__int64*))*v392)(v392);
          game_17bf070(v56, v75);
        }
        v76 = ui_LayoutAccessor_FindTextBox(v56, (__int64)"T_Title");
        if (v76 != 0) {
          v77 = v76;
          v78 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v56, (__int64)"T_Title");
          if (v78 != nullptr) {
            ui_text_190a0c0((float*)v368, (__int64)&v384_.v384, (float*)v394,
                            v78, v78[27]);
            v79 = v384_.v384;
          }
          else {
            v79 = 0;
          }
          v80 = *(_BYTE*)(v77 + 88);
          *(_QWORD*)(v77 + 80) = v79;
          *(_BYTE*)(v77 + 88) = v80 | 0x10;
        }
        ui_LayoutAccessor_SetPaneVisible((__int64)v56, (__int64)"IconState", 0);
        v81 = ui_LayoutAccessor_FindAlignment(v56, (__int64)"A_Info");
        if (v81 != 0) {
          Alignment_56b600(v81);
          v82 = v56[1];
          if (v82 != 0) {
            v83 = std___1___shared_weak_count_lock(v82);
            if (v83 != 0) {
              v84 = v83;
              if (*v56 != 0) {
                ControlCreator_13633c0(*v56);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v84 + 16LL))(v84);
                std___1___shared_weak_count___release_weak(v84);
              }
            }
          }
        }
        v85 = ui_LayoutAccessor_FindPane(v56, (__int64)&GameData_1ac6c8b);
        if (v85 != 0) {
          *(_QWORD*)((char*)&v371 + 5) = 0;
          v369_.v370 = nullptr;
          *(_QWORD*)&v371 = 0;
          v86 = v85;
          *(_QWORD*)&v368[16] = 0;
          v369_.v369 = 0;
          *(_QWORD*)v368 = v85;
          *(_QWORD*)&v368[8] =
              ui_LayoutAccessor_FindPane(v56, (__int64)"A_Info");
          WORD4(v371) = 256;
          LODWORD(v369_.v370) = 1105199104;
          v87 = Pane_58fac0(v86, "Margin_Width");
          if (v87 != nullptr) {
            *(float*)&v369_.v370 =
                (float)*(int*)&v87[*((unsigned int*)v87 + 1)];
          }
          game_156c240((__int64*)v368);
        }
      }
      else if (v55 == 0) {
        goto LABEL_129;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
        std___1___shared_weak_count___release_weak(v55);
      }
    }
  }
  else {
    v53 = v41;
  }
LABEL_129:
  v88 = ui_LayoutAccessor_FindAlignment(v8, (__int64)"A_ConditionInfo");
  if (v88 != 0) {
    Alignment_56b600(v88);
    v89 = v8[1];
    if (v89 != 0) {
      v90 = std___1___shared_weak_count_lock(v89);
      if (v90 != 0) {
        v91 = v90;
        if (*v8 != 0) {
          ControlCreator_13633c0(*v8);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v91 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
          std___1___shared_weak_count___release_weak(v91);
        }
      }
    }
  }
  if ((*(int (**)(__int64*))(*v392 + 248))(v392) >= 1) {
    v92 = game_util_Format("L_Condition%02d", v53);
    LayoutAccessor_1560070((void*)(v368), v8, v92);
    if (*(_QWORD*)&v368[8] != 0) {
      v93 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
      v94 = *(__int64**)v368;
      if (*(_QWORD*)&v368[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
      }
      if (v93 != 0 && v94 != nullptr) {
        LayoutAccessor_155e830((__int64)v94, 1);
        LayoutAccessor_1562cf0((__int64)v94, "Honor");
        v95 = "MID_Sys_HonorLv";
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v95 = "MID_Sys_HonorLV_Part3";
        }
        *(_QWORD*)&v371 = -1;
        *((_QWORD*)&v371 + 1) = -1;
        v372 = -1;
        v373 = -1;
        v96 = *msg_MessageManager_instance__ptr[0];
        v374 = -1;
        v375 = -1;
        *(_QWORD*)&v376 = -1;
        *((_QWORD*)&v376 + 1) = -1;
        v377 = -1;
        v378 = -1;
        v379 = -1;
        v380 = -1;
        *(_QWORD*)v368 = GameData_212e348 + 2;
        *(_QWORD*)&v368[8] = 0xFFFF0001FFFF0000LL;
        *(_QWORD*)&v368[16] = 0xFFFF0004FFFF0002LL;
        v369_.v369 = 0xFFFF0006FFFF0005LL;
        v381 = 8;
        v369_.v370 = (_BYTE*)0xFFFF0008FFFF0007LL;
        v97 = GameRoutine_a4dbe0(v96, v95, 0);
        if (v97 != nullptr) {
          v98 = (__int64)v97;
          v99 = ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Title");
          if (v99 != 0) {
            GameRoutine_156c5d0(v99, v98, 0);
          }
        }
        v100 = (char*)GameData_212da30;
        v101 =
            *(_DWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)GameData_212da30);
        v102 = ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Title");
        if (v102 != 0) {
          v103 = Pane_58f8a0(v102);
          if (v103 != 0) {
            *(_DWORD*)(v103 + 12) = v101;
          }
        }
        v104 = ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Title");
        if (v104 != 0) {
          v105 = v104;
          v106 =
              (_QWORD*)ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Title");
          if (v106 != nullptr) {
            ui_text_190a0c0((float*)v368, (__int64)&v384_.v384, (float*)v394,
                            v106, v106[27]);
            v107 = v384_.v384;
          }
          else {
            v107 = 0;
          }
          v108 = *(_BYTE*)(v105 + 88);
          *(_QWORD*)(v105 + 80) = v107;
          *(_BYTE*)(v105 + 88) = v108 | 0x10;
        }
        v109 = (*(__int64 (**)(__int64*))(*v392 + 248))(v392);
        v110 = ui_LayoutAccessor_FindPane(v94, (__int64)"T_Num");
        if (v110 != 0) {
          v111 = __dynamic_cast(v110, GameData_212d670[0], GameData_212d690, 0);
          if (v111 != 0) {
            GameRoutine_156c910(v111, "%d", 1, v109);
          }
        }
        v112 = GameRoutine_715440();
        v113 = (*(__int64 (**)(__int64*))(*v392 + 248))(v392);
        v114 = (int*)(v100 + 60);
        v115 = v113;
        if (v112 >= v113) {
          v114 = (int*)(v100 + 36);
        }
        v116 = *v114;
        v117 = ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Num");
        if (v117 != 0) {
          v118 = Pane_58f8a0(v117);
          if (v118 != 0) {
            *(_DWORD*)(v118 + 12) = v116;
          }
        }
        v119 = ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Num");
        if (v119 != 0) {
          v120 = v119;
          v121 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v94, (__int64)"T_Num");
          if (v121 != nullptr) {
            ui_text_190a0c0((float*)v368, (__int64)&v384_.v384, (float*)v394,
                            v121, v121[27]);
            v122 = v384_.v384;
          }
          else {
            v122 = 0;
          }
          v123 = *(_BYTE*)(v120 + 88);
          *(_QWORD*)(v120 + 80) = v122;
          *(_BYTE*)(v120 + 88) = v123 | 0x10;
        }
        ui_LayoutAccessor_SetPaneVisible((__int64)v94, (__int64)"IconState",
                                         v112 >= v115);
        v124 = ui_LayoutAccessor_FindAlignment(v94, (__int64)"A_Info");
        if (v124 != 0) {
          Alignment_56b600(v124);
          v125 = v94[1];
          if (v125 != 0) {
            v126 = std___1___shared_weak_count_lock(v125);
            if (v126 != 0) {
              v127 = v126;
              if (*v94 != 0) {
                ControlCreator_13633c0(*v94);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v127 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v127 + 16LL))(v127);
                std___1___shared_weak_count___release_weak(v127);
              }
            }
          }
        }
        v128 = ui_LayoutAccessor_FindPane(v94, (__int64)&GameData_1ac6c8b);
        if (v128 != 0) {
          *(_QWORD*)((char*)&v371 + 5) = 0;
          v369_.v370 = nullptr;
          *(_QWORD*)&v371 = 0;
          v129 = v128;
          *(_QWORD*)&v368[16] = 0;
          v369_.v369 = 0;
          *(_QWORD*)v368 = v128;
          *(_QWORD*)&v368[8] =
              ui_LayoutAccessor_FindPane(v94, (__int64)"A_Info");
          WORD4(v371) = 256;
          LODWORD(v369_.v370) = 1105199104;
          v130 = Pane_58fac0(v129, "Margin_Width");
          if (v130 != nullptr) {
            *(float*)&v369_.v370 =
                (float)*(int*)&v130[*((unsigned int*)v130 + 1)];
          }
          game_156c240((__int64*)v368);
        }
      }
      else if (v93 == 0) {
        goto LABEL_184;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
        std___1___shared_weak_count___release_weak(v93);
      }
    }
  }
LABEL_184:
  v131 = ui_LayoutAccessor_FindAlignment(v8, (__int64)"A_ConditionInfo");
  if (v131 != 0) {
    Alignment_56b600(v131);
    v132 = v8[1];
    if (v132 != 0) {
      v133 = std___1___shared_weak_count_lock(v132);
      if (v133 != 0) {
        v134 = v133;
        if (*v8 != 0) {
          ControlCreator_13633c0(*v8);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v134 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v134 + 16LL))(v134);
          std___1___shared_weak_count___release_weak(v134);
        }
      }
    }
  }
  v135 = (*(__int64 (**)(__int64*))(*v392 + 192))(v392);
  v136 = (*(__int64 (**)(__int64*))(*v392 + 224))(v392);
  ui_LayoutAccessor_SetPaneVisible((__int64)v8, (__int64)"N_Total", v136 > 0);
  v367 = v8;
  if (v136 >= 1) {
    v364 = a4;
    LOBYTE(v137) = 1;
    v138 = 0;
    v139 = 0;
    v140 = GameData_212c878[0];
    v141 = game_map_MapRandom_instance__ptr[0];
    v142 = GameData_212d7f0[0] + 2;
    while (1) {
      v144 = (*(__int64 (**)(__int64*, _QWORD))(*v392 + 232))(v392, v139);
      v145 = *v140;
      if (v144 != 0) {
        v146 = *(unsigned __int16*)(v144 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v145 + 64) + 8 * v146) + 73LL) ==
            17) {
          nn_os_LockMutex((__int64)&game_g_random_mutex);
          v147 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v141);
          v148 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v141 + 4);
          v149 = *(_DWORD*)v141 ^ (*(_DWORD*)v141 << 11);
          *(_DWORD*)v141 = *((_DWORD*)v141 + 1);
          *((_DWORD*)v141 + 1) = v147;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v141) = v148;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v141 + 4) =
              (v149 >> 8) ^ (v148 >> 19) ^ v149 ^ v148;
          nn_os_UnlockMutex((__int64)&game_g_random_mutex);
          v145 = *v140;
        }
      }
      else {
        v146 = 0;
      }
      v150 = *(_QWORD*)(v145 + 64);
      LODWORD(v384_.v384) = 0;
      v151 = *(_QWORD*)(v150 + 8 * v146);
      v152 = *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                         8LL);
      *(_QWORD*)v368 = v142;
      *(_QWORD*)&v368[8] = &v384_.v384;
      v369_.v370 = v368;
      game_TransporterConst_List_Impl_EachData(v152, v151, (__int64)v368);
      if (v369_.v370 == v368) {
        v143 = 32;
      }
      else {
        if (v369_.v370 == nullptr) {
          goto LABEL_195;
        }
        v143 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v369_.v370 + v143))((__int64)v369_.v370);
    LABEL_195:
      ++v139;
      v138 += v384_.v384;
      v137 = (v138 < v135) & (unsigned __int8)v137;
      if (v136 == v139) {
        v153 = (*(__int64 (**)(__int64*))(*v392 + 104))(v392);
        a4 = v364;
        v154 = "Complete";
        if ((v364 & 1) != 0) {
          v8 = v367;
        }
        else {
          v8 = v367;
          if ((v153 & 1) == 0) {
            if (((*(__int64 (**)(__int64*, const char*))(*v392 + 112))(
                     v392, "Complete") &
                 1) != 0) {
              v154 = "Disable";
            }
            else {
              v154 = "Default";
            }
          }
        }
        LayoutAccessor_1562cf0((__int64)v8, v154);
        v155 = game_util_Format("%d", v138);
        v156 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_TotalNum");
        if (v156 != 0) {
          GameRoutine_156c5d0(v156, (__int64)v155, 0);
        }
        v157 = game_util_Format("%d", v135);
        v158 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_TotalMaxNum");
        if (v158 != 0) {
          GameRoutine_156c5d0(v158, (__int64)v157, 0);
        }
        v159 = 36;
        if (v137 != 0) {
          v159 = 60;
        }
        v160 = *(_DWORD*)((char*)GameData_212da30 + v159);
        v161 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_TotalNum");
        if (v161 != 0) {
          v162 = Pane_58f8a0(v161);
          if (v162 != 0) {
            *(_DWORD*)(v162 + 12) = v160;
          }
        }
        break;
      }
    }
  }
  v163 = ui_LayoutAccessor_FindAlignment(v8, (__int64)"A_Condition");
  if (v163 != 0) {
    Alignment_56b600(v163);
    v164 = v8[1];
    if (v164 != 0) {
      v165 = std___1___shared_weak_count_lock(v164);
      if (v165 != 0) {
        v166 = v165;
        if (*v8 != 0) {
          ControlCreator_13633c0(*v8);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v166 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v166 + 16LL))(v166);
          std___1___shared_weak_count___release_weak(v166);
        }
      }
    }
  }
  v365 = (*(__int64 (**)(__int64*))(*v392 + 192))(v392);
  v167 = (*(__int64 (**)(__int64*))(*v392 + 224))(v392);
  if (v167 >= 1) {
    v168 = v167;
    v169 = 0;
    v362 = v167;
    v363 = (*(__int64 (**)(__int64*))(*v392 + 240))(v392) ^ 1;
    while (1) {
      v170 = game_util_Format("L_ConditionItem%02d", v169);
      LayoutAccessor_1560070((void*)(v368), v8, v170);
      if (*(_QWORD*)&v368[8] != 0) {
        v171 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
        v172 = *(__int64**)v368;
        if (*(_QWORD*)&v368[8] != 0) {
          std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
        }
        if (v171 != 0 && v172 != nullptr) {
          v173 = (*(__int64 (**)(__int64*, _QWORD))(*v392 + 232))(v392, v169);
          if (v173 != 0) {
            v175 = *(unsigned __int16*)(v173 + 16);
            v176 = *(_QWORD*)(*GameData_212c878[0] + 64);
            if (*(_BYTE*)(*(_QWORD*)(v176 + 8 * v175) + 73LL) == 17) {
              v177 = v173;
              nn_os_LockMutex((__int64)&game_g_random_mutex);
              v178 = game_map_MapRandom_instance__ptr[0];
              v179 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((_UNKNOWN**)0x8LL));
              v180 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
              v181 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                     (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
              *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                  *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
              *((_DWORD*)v178 + 1) = v179;
              v182 = (v181 >> 8) ^ (v180 >> 19) ^ v181 ^ v180;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v178) = v180;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v178 + 4) = v182;
              nn_os_UnlockMutex((__int64)&game_g_random_mutex);
              v183 = *(unsigned __int16*)(v177 + 16);
              v184 = (16 * ((_WORD)v182 -
                            1000 * (unsigned __int16)((v182 & 0x7FFFFFFFu) /
                                                      0x3E8)) +
                      16) &
                         0x3FF0 |
                     1u;
              v176 = *(_QWORD*)(*GameData_212c878[0] + 64);
            }
            else {
              v184 = 1;
              v183 = *(unsigned __int16*)(v173 + 16);
            }
            v384_.v384 = 0x100000000LL;
            LOWORD(v384_.v384) = v183;
            if (*(_BYTE*)(*(_QWORD*)(v176 + 8 * v183) + 73LL) == 17) {
              nn_os_LockMutex((__int64)&game_g_random_mutex);
              v185 = game_map_MapRandom_instance__ptr[0];
              v186 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((_UNKNOWN**)0x8LL));
              v187 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
              v188 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                     (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
              *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                  *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
              *((_DWORD*)v185 + 1) = v186;
              v189 = (v188 >> 8) ^ (v187 >> 19) ^ v188 ^ v187;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v185) = v187;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v185 + 4) = v189;
              nn_os_UnlockMutex((__int64)&game_g_random_mutex);
              HIDWORD(v384_.v384) =
                  HIDWORD(v384_.v384) & 0xFFFFC00F |
                  (16 * (((16 * (v189 - 1000 * ((v189 & 0x7FFFFFFFu) / 0x3E8)) +
                           16) >>
                          4) &
                         0x3FF));
            }
            v168 = v362;
          }
          else {
            v175 = 0;
            v184 = 0;
            v384_.v384 = 0;
          }
          v190 = UnitUtil_1212be0((__int64)&v384_.v384, 0);
          *(_DWORD*)v368 = 8;
          *(_QWORD*)&v368[4] = v175 | (v184 << 32);
          if (*(_BYTE*)GameData_212ceb0 != 0) {
            v191 = *GameData_212ceb0;
          }
          else {
            v191 = 0;
          }
          *(_QWORD*)&v368[12] = v191;
          WORD1(v369_.v369) = 0;
          HIDWORD(v369_.v369) = 0;
          *((_QWORD*)&v371 + 1) = 0;
          v372 = 0;
          *(_QWORD*)&v371 = (char*)&v371 + 8;
          v373 = 0;
          v374 = 0;
          v375 = 0;
          GameRoutine_930b90((__int64)&v369_.v369,
                             (__int64)GameData_212c8b0[0]);
          LODWORD(v376) = 0;
          *(_QWORD*)((char*)&v376 + 4) = __PAIR64__(v365, v190);
          game_gameui_157a1e0(v172, (__int64)v368, v363 & 1, 0, 0, 0, 0);
          LODWORD(v369_.v370) = 0;
          v369_.v369 = 0;
          if ((v373 & 1) != 0) {
            *(_BYTE*)v375 = 0;
            v374 = 0;
          }
          else {
            LOWORD(v373) = 0;
          }
          v8 = v367;
          GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
          *((_QWORD*)&v371 + 1) = 0;
          v372 = 0;
          *(_QWORD*)&v371 = (char*)&v371 + 8;
          if ((v373 & 1) != 0) {
            v192 = (_QWORD*)v375;
            if (v375 != 0) {
              v193 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v193 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v193, v375);
              v192 = *((_QWORD**)&v371 + 1);
            }
          }
          else {
            v192 = nullptr;
          }
          GameRoutine_6e3b50((__int64)&v371, v192);
        LABEL_256:
          if (atomic_fetch_add((atomic_ullong* volatile)(v171 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v171 + 16LL))(v171);
            std___1___shared_weak_count___release_weak(v171);
          }
          goto LABEL_227;
        }
        if (v171 != 0) {
          goto LABEL_256;
        }
      }
    LABEL_227:
      if (v168 == ++v169) {
        goto LABEL_301;
      }
    }
  }
  LayoutAccessor_1560070((void*)(v368), v8, "L_ConditionItem00");
  if (*(_QWORD*)&v368[8] == 0) {
    v168 = 0;
    goto LABEL_301;
  }
  v194 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
  v195 = *(__int64**)v368;
  if (*(_QWORD*)&v368[8] != 0) {
    std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
  }
  if (v194 == 0 || v195 == nullptr) {
    v168 = 0;
    if (v194 == 0) {
      goto LABEL_301;
    }
    goto LABEL_299;
  }
  v196 = (*(__int64 (**)(__int64*))(*v392 + 200))(v392);
  if (v196 != 0) {
    v197 = v196;
    LayoutAccessor_155e830((__int64)v195, 1);
    if (((*(__int64 (**)(__int64*))(*v392 + 112))(v392) & 1) == 0 ||
        ((*(__int64 (**)(__int64*))(*v392 + 128))(v392) & 1) == 0) {
      v199 = *(unsigned __int16*)(v197 + 16);
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v199) +
                    73LL) == 17) {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v200 = game_map_MapRandom_instance__ptr[0];
        v201 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL));
        v202 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                          (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v203 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
               (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v200 + 1) = v201;
        v204 = (v203 >> 8) ^ (v202 >> 19) ^ v203 ^ v202;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v200) = v202;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v200 + 4) = v204;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        v205 =
            (unsigned __int64)((16 * ((_WORD)v204 -
                                      1000 * (unsigned __int16)((v204 &
                                                                 0x7FFFFFFFu) /
                                                                0x3E8)) +
                                16) &
                                   0x3FF0 |
                               1u)
            << 32;
      }
      else {
        v205 = 0x100000000LL;
      }
      v209 = (*(__int64 (**)(__int64*))(*v392 + 136))(v392);
      v210 = v365;
      if ((a4 & 1) == 0) {
        v210 = v365;
        if ((v209 & 1) == 0) {
          v384_.v384 = 0;
          game_6e8720((__int64)&v384_.v384, v197);
          v210 = UnitUtil_1212be0((__int64)&v384_.v384, 0);
        }
      }
      *(_DWORD*)v368 = 8;
      *(_QWORD*)&v368[4] = v205 | v199;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v212 = *GameData_212ceb0;
      }
      else {
        v212 = 0;
      }
      *(_QWORD*)&v368[12] = v212;
      WORD1(v369_.v369) = 0;
      HIDWORD(v369_.v369) = 0;
      v372 = 0;
      v373 = 0;
      v374 = 0;
      v375 = 0;
      *(_QWORD*)&v371 = (char*)&v371 + 8;
      *((_QWORD*)&v371 + 1) = 0;
      GameRoutine_930b90((__int64)&v369_.v369, (__int64)GameData_212c8b0[0]);
      LODWORD(v376) = 0;
      *(_QWORD*)((char*)&v376 + 4) = __PAIR64__(v365, v210);
      v213 = (*(__int64 (**)(__int64*))(*v392 + 136))(v392);
      game_gameui_157a1e0(v195, (__int64)v368, ((a4 | v213) & 1) == 0, 0, 1, 0,
                          0);
      LODWORD(v369_.v370) = 0;
      v369_.v369 = 0;
      if ((v373 & 1) != 0) {
        *(_BYTE*)v375 = 0;
        v374 = 0;
      }
      else {
        LOWORD(v373) = 0;
      }
      GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
      *((_QWORD*)&v371 + 1) = 0;
      v372 = 0;
      *(_QWORD*)&v371 = (char*)&v371 + 8;
      if ((v373 & 1) != 0) {
        v214 = (_QWORD*)v375;
        if (v375 != 0) {
          v215 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v215 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v215, v375);
          v214 = *((_QWORD**)&v371 + 1);
        }
      }
      else {
        v214 = nullptr;
      }
      GameRoutine_6e3b50((__int64)&v371, v214);
      v168 = 1;
      goto LABEL_299;
    }
    v384_.v384 = 0;
    game_6e8720((__int64)&v384_.v384, v197);
    GameRoutine_1584d90((__int64)v368, &v384_.v384, v365, v365);
    v168 = 1;
    game_gameui_157a1e0(v195, (__int64)v368, 0, 0, 1, 1, 0);
    v198 = &v369_.v369;
  }
  else {
    v206 = (*(__int64 (**)(__int64*))(*v392 + 208))(v392);
    if (v206 == 0) {
      v168 = 0;
      goto LABEL_299;
    }
    v207 = v206;
    if (((*(__int64 (**)(__int64*))(*v392 + 136))(v392) & 1) != 0) {
      v208 = 0;
    }
    else {
      v208 = (*(__int64 (**)(__int64*))(*v392 + 240))(v392) ^ 1;
    }
    v168 = 1;
    LayoutAccessor_155e830((__int64)v195, 1);
    Unit_930ca0((__int64)&v384_.v384, v207);
    *(_DWORD*)v368 = 8;
    *(_QWORD*)&v368[4] = *game_g_empty_item_ptr;
    if (*(_BYTE*)GameData_212ceb0 != 0) {
      v216 = *GameData_212ceb0;
    }
    else {
      v216 = 0;
    }
    *(_QWORD*)&v368[12] = v216;
    WORD1(v369_.v369) = 0;
    HIDWORD(v369_.v369) = 0;
    v372 = 0;
    v373 = 0;
    v374 = 0;
    v375 = 0;
    *(_QWORD*)&v371 = (char*)&v371 + 8;
    *((_QWORD*)&v371 + 1) = 0;
    GameRoutine_930b90((__int64)&v369_.v369, (__int64)&v384_.v384);
    LODWORD(v376) = 0;
    *(_QWORD*)((char*)&v376 + 4) = v365;
    v217 = (*(__int64 (**)(__int64*))(*v392 + 136))(v392);
    game_gameui_157a1e0(v195, (__int64)v368, (v217 & 1) == 0, 0, 1, v208 & 1,
                        0);
    GameHr_930e20((__int64)&v369_.v369);
    v198 = (unsigned __int64*)&v384_.v384;
  }
  GameHr_930e20((__int64)v198);
LABEL_299:
  if (atomic_fetch_add((atomic_ullong* volatile)(v194 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v194 + 16LL))(v194);
    std___1___shared_weak_count___release_weak(v194);
  }
LABEL_301:
  if ((*(int (**)(__int64*))(*v392 + 160))(v392) > 1) {
    if (v168 != 0) {
      goto LABEL_306;
    }
    v222 = (*(__int64 (**)(__int64*))(*v392 + 160))(v392);
    v218 = "Spot";
    v220 = v222;
    v219 = v8;
    v221 = "Item";
  }
  else {
    v218 = "Item";
    v219 = v8;
    v220 = v168;
    v221 = "Spot";
  }
  GameRoutine_15d7d00(v219, v220, "Condition", v218, v221, 0, 0, 0);
LABEL_306:
  v383 = 0;
  v384_.v384 = (__int64)v8;
  v384_.v385 = (char*)&v383 + 4;
  v386 = &v383;
  v223 = (*(__int64 (**)(__int64*))(*v392 + 352))(v392);
  if (v223 != 0) {
    v224 = v223;
    GameHr_6c2b50((__int64)v368);
    v225 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v225 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v394[0] = v225;
    v393 = 241;
    v226 = game_UnitPool_Find_6ead60(v394, &v393);
    GameRoutine_6c3980((__int64)v368, (__int64)v226);
    for (i = *(__int64**)v224; (unsigned __int64)i < *(_QWORD*)(v224 + 8);
         ++i) {
      v228 = *i;
      if (v382 != *i) {
        v382 = *i;
        game_Unit_Unknown6c8630((__int64)v368);
        v228 = *i;
      }
      GameHr_15d9080((__int64)&v384_.v384, v228, v368);
    }
  LABEL_321:
    game_Unit_Destroy_Unit((__int64)v368);
    goto LABEL_322;
  }
  v229 = (*(__int64 (**)(__int64*))(*v392 + 360))(v392);
  if (v229 != 0) {
    v230 = *(_QWORD*)(*(_QWORD*)(v229 + 24) + 24LL);
    if (v230 != 0) {
      GameHr_6c2b50((__int64)v368);
      v231 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v231 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v394[0] = v231;
      v393 = 241;
      v232 = game_UnitPool_Find_6ead60(v394, &v393);
      GameRoutine_6c3980((__int64)v368, (__int64)v232);
      if (v382 != v230) {
        v382 = v230;
        game_Unit_Unknown6c8630((__int64)v368);
      }
      GameHr_15d9080((__int64)&v384_.v384, v230, v368);
      goto LABEL_321;
    }
  }
LABEL_322:
  v233 = (*(__int64 (**)(__int64*))(*v392 + 272))(v392);
  if (v233 >= 1) {
    v234 = v233;
    v235 = 0;
    v236 = GameData_212ceb0;
    v366 = v233;
    do {
      v237 = (*(__int64 (**)(__int64*, _QWORD))(*v392 + 312))(v392, v235);
      if (v237 != 0) {
        v238 = (_DWORD*)v237;
        ++HIDWORD(v383);
        v239 = game_util_Format("L_RewardItem%02d");
        LayoutAccessor_1560070((void*)(v368), v367, v239);
        if (*(_QWORD*)&v368[8] != 0) {
          v240 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
          v241 = *(__int64**)v368;
          if (*(_QWORD*)&v368[8] != 0) {
            std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
          }
          if (v240 != 0 && v241 != nullptr) {
            v242 = *(_QWORD*)v238;
            v243 = v236;
            if (*(_QWORD*)v238 != 0) {
              v244 = *(unsigned __int16*)(v242 + 16);
              if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8 * v244) +
                            73LL) == 17) {
                nn_os_LockMutex((__int64)&game_g_random_mutex);
                v245 = game_map_MapRandom_instance__ptr[0];
                v246 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((_UNKNOWN**)0x8LL));
                v247 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                v248 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                    *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                *((_DWORD*)v245 + 1) = v246;
                v249 = (v248 >> 8) ^ (v247 >> 19) ^ v248 ^ v247;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v245) = v247;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v245 + 4) =
                    v249;
                nn_os_UnlockMutex((__int64)&game_g_random_mutex);
                v242 =
                    (unsigned __int64)((16 *
                                            ((_WORD)v249 -
                                             1000 *
                                                 (unsigned __int16)((v249 &
                                                                     0x7FFFFFFFu) /
                                                                    0x3E8)) +
                                        16) &
                                           0x3FF0 |
                                       1u)
                    << 32;
              }
              else {
                v242 = 0x100000000LL;
              }
            }
            else {
              v244 = 0;
            }
            v250 = v238[2];
            *(_QWORD*)&v368[4] = v242 | v244;
            v251 = *(unsigned __int8*)v243;
            v236 = v243;
            *(_DWORD*)v368 = 8;
            if (v251 != 0) {
              v252 = *v243;
            }
            else {
              v252 = 0;
            }
            *(_QWORD*)&v368[12] = v252;
            WORD1(v369_.v369) = 0;
            HIDWORD(v369_.v369) = 0;
            *((_QWORD*)&v371 + 1) = 0;
            v372 = 0;
            *(_QWORD*)&v371 = (char*)&v371 + 8;
            v373 = 0;
            v374 = 0;
            v375 = 0;
            GameRoutine_930b90((__int64)&v369_.v369,
                               (__int64)GameData_212c8b0[0]);
            LODWORD(v376) = 0;
            *(_QWORD*)((char*)&v376 + 4) = v250 | 0xFFFFFFFF00000000LL;
            game_gameui_157a1e0(v241, (__int64)v368, 1u, 0, 1, 0, 0);
            LODWORD(v369_.v370) = 0;
            v369_.v369 = 0;
            if ((v373 & 1) != 0) {
              *(_BYTE*)v375 = 0;
              v374 = 0;
            }
            else {
              LOWORD(v373) = 0;
            }
            v234 = v366;
            GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
            *((_QWORD*)&v371 + 1) = 0;
            v372 = 0;
            *(_QWORD*)&v371 = (char*)&v371 + 8;
            if ((v373 & 1) != 0) {
              v253 = (_QWORD*)v375;
              if (v375 != 0) {
                v254 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v254 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v254, v375);
                v253 = *((_QWORD**)&v371 + 1);
              }
            }
            else {
              v253 = nullptr;
            }
            GameRoutine_6e3b50((__int64)&v371, v253);
            v255 = ui_LayoutAccessor_FindPane(v241, (__int64)"Icon");
            if (v255 != 0) {
              v256 = __dynamic_cast(v255, GameData_212d670[0],
                                    GameData_212d678[0], 0);
              if (v256 != 0 && *(_QWORD*)v238 != 0) {
                v257 = *(_QWORD*)(*(_QWORD*)v238 + 24LL);
                v258 = *(unsigned __int8*)(v257 + 560);
                v259 = (v258 & 1) == 0;
                if ((v258 & 1) != 0) {
                  v260 = *(_QWORD*)(v257 + 568);
                }
                else {
                  v260 = v258 >> 1;
                }
                v261 = *(_BYTE**)(v257 + 576);
                v262 = (_BYTE*)(v257 + 561);
                if (!v259) {
                  v262 = v261;
                }
                if (v260 != 0) {
                  v263 = v262;
                }
                else {
                  v263 = nullptr;
                }
                Manager_136a920(ui_Manager_instance_ + 1264, v256, 0, 2u, v263);
              }
            }
          LABEL_362:
            if (atomic_fetch_add((atomic_ullong* volatile)(v240 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v240 + 16LL))(v240);
              std___1___shared_weak_count___release_weak(v240);
            }
            goto LABEL_324;
          }
          if (v240 != 0) {
            goto LABEL_362;
          }
        }
      }
    LABEL_324:
      ++v235;
    } while (v234 != v235);
  }
  v264 = (*(__int64 (**)(__int64*))(*v392 + 280))(v392);
  if (v264 >= 1) {
    v265 = v264;
    v266 = 0;
    v267 = GameData_212c8b0[0];
    do {
      v268 = (*(__int64 (**)(__int64*, _QWORD))(*v392 + 320))(v392, v266);
      if (v268 != 0) {
        v269 = HIDWORD(v383);
        v270 = v268;
        ++HIDWORD(v383);
        v271 = game_util_Format("L_RewardItem%02d", v269);
        LayoutAccessor_1560070((void*)(v368), v367, v271);
        if (*(_QWORD*)&v368[8] != 0) {
          v272 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
          v273 = *(__int64**)v368;
          if (*(_QWORD*)&v368[8] != 0) {
            std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
          }
          if (v272 != 0 && v273 != nullptr) {
            v274 = *(_QWORD*)v270;
            if (*(_QWORD*)v270 != 0) {
              v274 = *(unsigned __int8*)(v274 + 16);
            }
            v275 = *(_DWORD*)(v270 + 8);
            *(_DWORD*)v368 = 8;
            *(_QWORD*)&v368[12] = v274;
            WORD1(v369_.v369) = 0;
            HIDWORD(v369_.v369) = 0;
            *((_QWORD*)&v371 + 1) = 0;
            v372 = 0;
            *(_QWORD*)&v371 = (char*)&v371 + 8;
            v276 = *game_g_empty_item_ptr;
            v373 = 0;
            v374 = 0;
            v375 = 0;
            *(_QWORD*)&v368[4] = v276;
            GameRoutine_930b90((__int64)&v369_.v369, (__int64)v267);
            LODWORD(v376) = 0;
            *(_QWORD*)((char*)&v376 + 4) = v275;
            game_gameui_157a1e0(v273, (__int64)v368, 1u, 0, 1, 0, 0);
            LODWORD(v369_.v370) = 0;
            v369_.v369 = 0;
            if ((v373 & 1) != 0) {
              *(_BYTE*)v375 = 0;
              v374 = 0;
            }
            else {
              LOWORD(v373) = 0;
            }
            GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
            *((_QWORD*)&v371 + 1) = 0;
            v372 = 0;
            *(_QWORD*)&v371 = (char*)&v371 + 8;
            if ((v373 & 1) != 0) {
              v277 = (_QWORD*)v375;
              if (v375 != 0) {
                v278 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v278 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v278, v375);
                v277 = *((_QWORD**)&v371 + 1);
              }
            }
            else {
              v277 = nullptr;
            }
            GameRoutine_6e3b50((__int64)&v371, v277);
          LABEL_387:
            if (atomic_fetch_add((atomic_ullong* volatile)(v272 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v272 + 16LL))(v272);
              std___1___shared_weak_count___release_weak(v272);
            }
            goto LABEL_366;
          }
          if (v272 != 0) {
            goto LABEL_387;
          }
        }
      }
    LABEL_366:
      ++v266;
    } while (v265 != v266);
  }
  v279 = (*(__int64 (**)(__int64*))(*v392 + 288))(v392);
  if (v279 >= 1) {
    v280 = "L_RewardItem%02d";
    v281 = v279;
    v282 = 0;
    v283 = (__int64*)&v387_.v387;
    do {
      v284 = (*(__int64 (**)(__int64*, _QWORD))(*v392 + 328))(v392, v282);
      if (v284 != 0) {
        v285 = v284;
        ++HIDWORD(v383);
        v286 = game_util_Format(v280);
        LayoutAccessor_1560070((void*)(v368), v367, v286);
        if (*(_QWORD*)&v368[8] != 0) {
          v287 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
          v288 = *(__int64**)v368;
          if (*(_QWORD*)&v368[8] != 0) {
            std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
          }
          if (v287 != 0 && v288 != nullptr) {
            v289 = *(_QWORD*)v285;
            LODWORD(v384_.v385) = 0;
            v384_.v384 = 0;
            v387_.v388 = 0;
            v387_.v389 = 0;
            v387_.v390 = 0;
            v387_.v391 = nullptr;
            v386 = v283;
            v387_.v387 = nullptr;
            if (v289 != 0) {
              LOBYTE(v384_.v384) = *(_BYTE*)(v289 + 16);
              nn_os_LockMutex((__int64)&game_g_random_mutex);
              v290 = v280;
              v291 = v283;
              v292 = game_map_MapRandom_instance__ptr[0];
              v293 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((__int128*)0x10LL) + 8);
              v294 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
              v295 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((__int128*)0x10LL)) ^
                     (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL))
                      << 11);
              *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL)) =
                  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL) + 4);
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v292 + 4) = v293;
              v296 = (v295 >> 8) ^ (v294 >> 19) ^ v295 ^ v294;
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v292 + 8) = v294;
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v292 + 12) = v296;
              nn_os_UnlockMutex((__int64)&game_g_random_mutex);
              *(_WORD*)((char*)&v384_.v384 + 1) =
                  __PAIR16__(BYTE2(v384_.v384), v296) & 0xFEFF;
              v283 = v291;
              v280 = v290;
            }
            v297 = *(_DWORD*)(v285 + 8);
            *(_DWORD*)v368 = 8;
            *(_QWORD*)&v368[4] = *game_g_empty_item_ptr;
            if (*(_BYTE*)GameData_212ceb0 != 0) {
              v298 = *GameData_212ceb0;
            }
            else {
              v298 = 0;
            }
            *(_QWORD*)&v368[12] = v298;
            WORD1(v369_.v369) = 0;
            HIDWORD(v369_.v369) = 0;
            *((_QWORD*)&v371 + 1) = 0;
            v372 = 0;
            *(_QWORD*)&v371 = (char*)&v371 + 8;
            v373 = 0;
            v374 = 0;
            v375 = 0;
            GameRoutine_930b90((__int64)&v369_.v369, (__int64)&v384_.v384);
            LODWORD(v376) = 0;
            *(_QWORD*)((char*)&v376 + 4) = v297;
            game_gameui_157a1e0(v288, (__int64)v368, 1u, 0, 1, 0, 0);
            LODWORD(v369_.v370) = 0;
            v369_.v369 = 0;
            if ((v373 & 1) != 0) {
              *(_BYTE*)v375 = 0;
              v374 = 0;
            }
            else {
              LOWORD(v373) = 0;
            }
            GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
            *((_QWORD*)&v371 + 1) = 0;
            v372 = 0;
            *(_QWORD*)&v371 = (char*)&v371 + 8;
            if ((v373 & 1) != 0) {
              v299 = (_QWORD*)v375;
              if (v375 != 0) {
                v300 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v300 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v300, v375);
                v299 = *((_QWORD**)&v371 + 1);
              }
            }
            else {
              v299 = nullptr;
            }
            GameRoutine_6e3b50((__int64)&v371, v299);
            LODWORD(v384_.v385) = 0;
            v384_.v384 = 0;
            if ((v387_.v389 & 1) != 0) {
              *v387_.v391 = 0;
              v387_.v390 = 0;
            }
            else {
              LOWORD(v387_.v389) = 0;
            }
            GameRoutine_6e3b50((__int64)&v386, v387_.v387);
            v387_.v387 = nullptr;
            v387_.v388 = 0;
            v386 = v283;
            if ((v387_.v389 & 1) != 0) {
              v301 = v387_.v391;
              if (v387_.v391 != nullptr) {
                v302 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v302 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v302,
                    (__int64)v387_.v391);
                v301 = v387_.v387;
              }
            }
            else {
              v301 = nullptr;
            }
            GameRoutine_6e3b50((__int64)&v386, v301);
          LABEL_424:
            if (atomic_fetch_add((atomic_ullong* volatile)(v287 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v287 + 16LL))(v287);
              std___1___shared_weak_count___release_weak(v287);
            }
            goto LABEL_391;
          }
          if (v287 != 0) {
            goto LABEL_424;
          }
        }
      }
    LABEL_391:
      ++v282;
    } while (v281 != v282);
  }
  v303 = (*(__int64 (**)(__int64*))(*v392 + 336))(v392);
  if (v303 != 0) {
    v304 = HIDWORD(v383);
    v305 = v303;
    ++HIDWORD(v383);
    v306 = game_util_Format("L_RewardItem%02d", v304);
    LayoutAccessor_1560070((void*)(v368), v367, v306);
    if (*(_QWORD*)&v368[8] != 0) {
      v307 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
      v308 = *(__int64**)v368;
      if (*(_QWORD*)&v368[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
      }
      if (v307 != 0 && v308 != nullptr) {
        v309 = *(_WORD*)(v305 + 16) & 0xFFF;
        *(_DWORD*)v368 = 8;
        *(_QWORD*)&v368[4] = *game_g_empty_item_ptr;
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v310 = *GameData_212ceb0;
        }
        else {
          v310 = 0;
        }
        *(_QWORD*)&v368[12] = v310;
        WORD1(v369_.v369) = 0;
        HIDWORD(v369_.v369) = 0;
        v372 = 0;
        v373 = 0;
        v374 = 0;
        v375 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        *((_QWORD*)&v371 + 1) = 0;
        GameRoutine_930b90((__int64)&v369_.v369, (__int64)GameData_212c8b0[0]);
        LODWORD(v376) = v309;
        *(_QWORD*)((char*)&v376 + 4) = 0;
        game_gameui_157a1e0(v308, (__int64)v368, 1u, 0, 1, 0, 0);
        LODWORD(v369_.v370) = 0;
        v369_.v369 = 0;
        if ((v373 & 1) != 0) {
          *(_BYTE*)v375 = 0;
          v374 = 0;
        }
        else {
          LOWORD(v373) = 0;
        }
        GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
        *((_QWORD*)&v371 + 1) = 0;
        v372 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        if ((v373 & 1) != 0) {
          v311 = (_QWORD*)v375;
          if (v375 != 0) {
            v312 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v312 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v312, v375);
            v311 = *((_QWORD**)&v371 + 1);
          }
        }
        else {
          v311 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v371, v311);
      }
      else if (v307 == 0) {
        goto LABEL_449;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v307 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v307 + 16LL))(v307);
        std___1___shared_weak_count___release_weak(v307);
      }
    }
  }
LABEL_449:
  v313 = (*(__int64 (**)(__int64*))(*v392 + 256))(v392);
  if (v313 >= 1) {
    v314 = HIDWORD(v383);
    v315 = v313;
    ++HIDWORD(v383);
    v316 = game_util_Format("L_RewardItem%02d", v314);
    LayoutAccessor_1560070((void*)(v368), v367, v316);
    if (*(_QWORD*)&v368[8] != 0) {
      v317 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
      v318 = *(__int64**)v368;
      if (*(_QWORD*)&v368[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
      }
      if (v317 != 0 && v318 != nullptr) {
        *(_DWORD*)v368 = 0;
        *(_QWORD*)&v368[4] = *game_g_empty_item_ptr;
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v319 = *GameData_212ceb0;
        }
        else {
          v319 = 0;
        }
        *(_QWORD*)&v368[12] = v319;
        WORD1(v369_.v369) = 0;
        HIDWORD(v369_.v369) = 0;
        v372 = 0;
        v373 = 0;
        v374 = 0;
        v375 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        *((_QWORD*)&v371 + 1) = 0;
        GameRoutine_930b90((__int64)&v369_.v369, (__int64)GameData_212c8b0[0]);
        LODWORD(v376) = 0;
        *(_QWORD*)((char*)&v376 + 4) = v315;
        game_gameui_157a1e0(v318, (__int64)v368, 1u, 0, 1, 0, 0);
        LODWORD(v369_.v370) = 0;
        v369_.v369 = 0;
        if ((v373 & 1) != 0) {
          *(_BYTE*)v375 = 0;
          v374 = 0;
        }
        else {
          LOWORD(v373) = 0;
        }
        GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
        *((_QWORD*)&v371 + 1) = 0;
        v372 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        if ((v373 & 1) != 0) {
          v320 = (_QWORD*)v375;
          if (v375 != 0) {
            v321 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v321 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v321, v375);
            v320 = *((_QWORD**)&v371 + 1);
          }
        }
        else {
          v320 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v371, v320);
        *(_QWORD*)&v371 = -1;
        *((_QWORD*)&v371 + 1) = -1;
        v372 = -1;
        v373 = -1;
        v322 = *msg_MessageManager_instance__ptr[0];
        v374 = -1;
        v375 = -1;
        *(_QWORD*)&v376 = -1;
        *((_QWORD*)&v376 + 1) = -1;
        v377 = -1;
        v378 = -1;
        v379 = -1;
        v380 = -1;
        *(_QWORD*)v368 = GameData_212e348 + 2;
        *(_QWORD*)&v368[8] = 0xFFFF0001FFFF0000LL;
        *(_QWORD*)&v368[16] = 0xFFFF0004FFFF0002LL;
        v369_.v369 = 0xFFFF0006FFFF0005LL;
        v381 = 8;
        v369_.v370 = (_BYTE*)0xFFFF0008FFFF0007LL;
        v323 = GameRoutine_a4dbe0(v322, "MID_Sys_Gold", 0);
        if (v323 != nullptr) {
          v324 = (__int64)v323;
          v325 = ui_LayoutAccessor_FindTextBox(v318, (__int64)"T_Txt");
          if (v325 != 0) {
            GameRoutine_156c5d0(v325, v324, 0);
          }
        }
      }
      else if (v317 == 0) {
        goto LABEL_474;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v317 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v317 + 16LL))(v317);
        std___1___shared_weak_count___release_weak(v317);
      }
    }
  }
LABEL_474:
  v326 = (*(__int64 (**)(__int64*))(*v392 + 264))(v392);
  if (v326 >= 1) {
    v327 = HIDWORD(v383);
    v328 = v326;
    ++HIDWORD(v383);
    v329 = game_util_Format("L_RewardItem%02d", v327);
    LayoutAccessor_1560070((void*)(v368), v367, v329);
    if (*(_QWORD*)&v368[8] != 0) {
      v330 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
      v331 = *(__int64**)v368;
      if (*(_QWORD*)&v368[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
      }
      if (v330 != 0 && v331 != nullptr) {
        *(_DWORD*)v368 = 1;
        *(_QWORD*)&v368[4] = *game_g_empty_item_ptr;
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v332 = *GameData_212ceb0;
        }
        else {
          v332 = 0;
        }
        *(_QWORD*)&v368[12] = v332;
        WORD1(v369_.v369) = 0;
        HIDWORD(v369_.v369) = 0;
        v372 = 0;
        v373 = 0;
        v374 = 0;
        v375 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        *((_QWORD*)&v371 + 1) = 0;
        GameRoutine_930b90((__int64)&v369_.v369, (__int64)GameData_212c8b0[0]);
        LODWORD(v376) = 0;
        *(_QWORD*)((char*)&v376 + 4) = v328;
        game_gameui_157a1e0(v331, (__int64)v368, 1u, 0, 1, 0, 0);
        LODWORD(v369_.v370) = 0;
        v369_.v369 = 0;
        if ((v373 & 1) != 0) {
          *(_BYTE*)v375 = 0;
          v374 = 0;
        }
        else {
          LOWORD(v373) = 0;
        }
        GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
        *((_QWORD*)&v371 + 1) = 0;
        v372 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        if ((v373 & 1) != 0) {
          v333 = (_QWORD*)v375;
          if (v375 != 0) {
            v334 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v334 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v334, v375);
            v333 = *((_QWORD**)&v371 + 1);
          }
        }
        else {
          v333 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v371, v333);
        v335 = "MID_Sys_HonorExp";
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v335 = "MID_Sys_HonorExp_Part3";
        }
        *(_QWORD*)&v371 = -1;
        *((_QWORD*)&v371 + 1) = -1;
        v372 = -1;
        v373 = -1;
        v336 = *msg_MessageManager_instance__ptr[0];
        v374 = -1;
        v375 = -1;
        *(_QWORD*)&v376 = -1;
        *((_QWORD*)&v376 + 1) = -1;
        v377 = -1;
        v378 = -1;
        v379 = -1;
        v380 = -1;
        *(_QWORD*)v368 = GameData_212e348 + 2;
        *(_QWORD*)&v368[8] = 0xFFFF0001FFFF0000LL;
        *(_QWORD*)&v368[16] = 0xFFFF0004FFFF0002LL;
        v369_.v369 = 0xFFFF0006FFFF0005LL;
        v381 = 8;
        v369_.v370 = (_BYTE*)0xFFFF0008FFFF0007LL;
        v337 = GameRoutine_a4dbe0(v336, v335, 0);
        if (v337 != nullptr) {
          v338 = (__int64)v337;
          v339 = ui_LayoutAccessor_FindTextBox(v331, (__int64)"T_Txt");
          if (v339 != 0) {
            GameRoutine_156c5d0(v339, v338, 0);
          }
        }
      }
      else if (v330 == 0) {
        goto LABEL_502;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v330 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v330 + 16LL))(v330);
        std___1___shared_weak_count___release_weak(v330);
      }
    }
  }
LABEL_502:
  v340 = (*(__int64 (**)(__int64*))(*v392 + 360))(v392);
  if (v340 != 0 && *(_QWORD*)(v340 + 120) != 0) {
    v341 = HIDWORD(v383);
    v342 = v340;
    ++HIDWORD(v383);
    v343 = game_util_Format("L_RewardItem%02d", v341);
    LayoutAccessor_1560070((void*)(v368), v367, v343);
    if (*(_QWORD*)&v368[8] != 0) {
      v344 = std___1___shared_weak_count_lock(*(__int64*)&v368[8]);
      v345 = *(__int64**)v368;
      if (*(_QWORD*)&v368[8] != 0) {
        std___1___shared_weak_count___release_weak(*(__int64*)&v368[8]);
      }
      if (v344 != 0 && v345 != nullptr) {
        v346 = *(_QWORD*)(v342 + 120);
        if (v346 != 0) {
          v347 = *(unsigned __int16*)(v346 + 16);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v347) +
                        73LL) == 17) {
            nn_os_LockMutex((__int64)&game_g_random_mutex);
            v348 = game_map_MapRandom_instance__ptr[0];
            v349 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                              (unsigned __int64)((_UNKNOWN**)0x8LL));
            v350 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                              (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v351 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                   (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v348 + 1) = v349;
            v352 = (v351 >> 8) ^ (v350 >> 19) ^ v351 ^ v350;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v348) = v350;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v348 + 4) = v352;
            nn_os_UnlockMutex((__int64)&game_g_random_mutex);
            v346 =
                (unsigned __int64)((16 * ((_WORD)v352 -
                                          1000 *
                                              (unsigned __int16)((v352 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
          }
          else {
            v346 = 0x100000000LL;
          }
        }
        else {
          LODWORD(v347) = 0;
        }
        *(_DWORD*)v368 = 8;
        *(_QWORD*)&v368[4] = v346 | (unsigned int)v347;
        if (*(_BYTE*)GameData_212ceb0 != 0) {
          v353 = *GameData_212ceb0;
        }
        else {
          v353 = 0;
        }
        *(_QWORD*)&v368[12] = v353;
        WORD1(v369_.v369) = 0;
        HIDWORD(v369_.v369) = 0;
        v372 = 0;
        v373 = 0;
        v374 = 0;
        v375 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        *((_QWORD*)&v371 + 1) = 0;
        GameRoutine_930b90((__int64)&v369_.v369, (__int64)GameData_212c8b0[0]);
        *(_QWORD*)&v376 = 0x100000000LL;
        DWORD2(v376) = -1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v344 + 16), 1u,
                                  memory_order_relaxed);
        v354 = std___1___shared_weak_count_lock(v344);
        if (v354 != 0) {
          v355 = v354;
          game_gameui_157a1e0(v345, (__int64)v368, 1u, 0, 1, 0, 0);
          if (atomic_fetch_add((atomic_ullong* volatile)(v355 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v355 + 16LL))(v355);
            std___1___shared_weak_count___release_weak(v355);
          }
        }
        std___1___shared_weak_count___release_weak(v344);
        LODWORD(v369_.v370) = 0;
        v369_.v369 = 0;
        if ((v373 & 1) != 0) {
          *(_BYTE*)v375 = 0;
          v374 = 0;
        }
        else {
          LOWORD(v373) = 0;
        }
        GameRoutine_6e3b50((__int64)&v371, *((_QWORD**)&v371 + 1));
        *((_QWORD*)&v371 + 1) = 0;
        v372 = 0;
        *(_QWORD*)&v371 = (char*)&v371 + 8;
        if ((v373 & 1) != 0) {
          v356 = (_QWORD*)v375;
          if (v375 != 0) {
            v357 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v357 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v357, v375);
            v356 = *((_QWORD**)&v371 + 1);
          }
        }
        else {
          v356 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v371, v356);
        goto LABEL_532;
      }
      if (v344 != 0) {
      LABEL_532:
        if (atomic_fetch_add((atomic_ullong* volatile)(v344 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v344 + 16LL))(v344);
          std___1___shared_weak_count___release_weak(v344);
        }
      }
    }
  }
  v358 = (*(__int64 (**)(__int64*))(*v392 + 304))(v392);
  if (v358 < 1) {
    v360 = nullptr;
  }
  else {
    v359 =
        (const char*)(*(__int64 (**)(__int64*, _QWORD))(*v392 + 344))(v392, 0);
    v360 = "T_RewardMessage";
    LayoutAccessor_1562060(v367, (__int64)"T_RewardMessage", v359);
  }
  v361 = v358 > 0;
  ui_LayoutAccessor_SetPaneVisible((__int64)v367, (__int64)"N_RewardMessage",
                                   v361);
  if (v383 > 0) {
    v361 = 1;
  }
  ui_LayoutAccessor_SetPaneVisible((__int64)v367, (__int64)"N_Reward", v361);
  ui_LayoutAccessor_SetPaneVisible((__int64)v367, (__int64)"Bg_Reward", v361);
  GameRoutine_15d7d00(v367, SHIDWORD(v383), "Reward", "Item", nullptr,
                      (__int64)"N_RewardMessage", (__int64)v360, v383);
}

void game_gameui_171ab70(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    unsigned __int64 v15;
    char* v16;
  } v14_;
  __int64 v17[2];

  LayoutAccessor_1560070((void*)(&v14_.v14), (__int64*)(a1 + 848),
                         "L_SelectDaily");
  v17[0] = 0;
  if (v14_.v15 == 0) {
    return;
  }
  v2 = std___1___shared_weak_count_lock(v14_.v15);
  v17[1] = v2;
  if (v2 != 0) {
    v3 = (__int64*)v14_.v14;
    v17[0] = v14_.v14;
    v4 = v14_.v15;
    if (v14_.v15 == 0) {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v3 = nullptr;
  v4 = v14_.v15;
  if (v14_.v15 != 0) {
  LABEL_4:
    std___1___shared_weak_count___release_weak(v4);
  }
LABEL_5:
  if (v3 != nullptr) {
    GameHr_1562680((__int64)v3, "In", 0x1.0000000000000p+0f);
    GameRoutine_171ad80(v17, (__int16*)(a1 + 1070));
    v5 = game_util_Format("%d", *(__int16*)(a1 + 1070));
    v6 = strlen(v5);
    if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v7 = v6;
    if (v6 >= 0x17) {
      if ((v6 | 7) == 0x17) {
        v9 = 26;
      }
      else {
        v9 = (v6 | 7) + 1;
      }
      v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9,
                                                 16, 0);
      v14_.v15 = v7;
      v14_.v16 = v8;
      v14_.v14 = v9 | 1;
    }
    else {
      LOBYTE(v14_.v14) = 2 * v6;
      v8 = (char*)&v14_.v14 + 1;
      if (v6 == 0) {
        goto LABEL_17;
      }
    }
    memmove((__int64)v8, (__int64)v5, v7);
  LABEL_17:
    v8[v7] = 0;
    v10 = v14_.v14 & 1;
    if ((v14_.v14 & 1) != 0) {
      v11 = v14_.v16;
    }
    else {
      v11 = (char*)&v14_.v14 + 1;
    }
    if (v11 != nullptr) {
      v12 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Year");
      if (v12 != 0) {
        GameRoutine_156c5d0(v12, (__int64)v11, 0);
        v10 = v14_.v14 & 1;
      }
    }
    if (v10 != 0 && v14_.v16 != nullptr) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v14_.v16);
    }
    game_17bf390(v3, (__int16*)(a1 + 1070));
  }
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
}

__int64 game_gameui_17badf0()
{
  __int64* v0;
  __int64 v1;
  __int64 v3;

  v0 = LayoutAccessor_155fbe0(
      (__int64*)(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] + 168LL),
      "L_Clock");
  GameHr_1562680((__int64)v0, "SkipOut", 0x1.0000000000000p+0f);
  v1 = std___1___shared_weak_count_lock(v0[1]);
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v3 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v3);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v0[2] + 72LL))(v0[2]);
}

__int64 game_gameui_17bb420()
{
  __int64* v0;
  __int64 v1;
  __int64 v3;

  v0 = LayoutAccessor_155fbe0(
      (__int64*)(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] + 168LL),
      "L_Clock");
  GameHr_1562680((__int64)v0, "Skip_ShortOut", 0x1.0000000000000p+0f);
  v1 = std___1___shared_weak_count_lock(v0[1]);
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v3 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v3);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v0[2] + 72LL))(v0[2]);
}

#pragma GCC visibility pop
